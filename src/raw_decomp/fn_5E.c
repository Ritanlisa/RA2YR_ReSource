// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x005E00B0  NetworkLobby::MessageHandler  this=NetworkLobby  sig=csp ====
char __usercall NetworkLobby::MessageHandler@<al>(CampaignScore *a1@<edi>)
{
  char result; // al
  int v2; // esi
  char *v3; // eax
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  char *v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // esi
  int v16; // eax
  wchar_t *StringCSF; // eax
  int v18; // edi
  int v19; // esi
  int v20; // eax
  int v21; // ebp
  char *v22; // eax
  int v23; // eax
  int v24; // esi
  int v25; // eax
  HWND v26; // eax
  char *v27; // eax
  int v28; // eax
  int v29; // esi
  char *v30; // eax
  SkirmishDialog *PlayerOption; // eax
  int PlayerColor; // eax
  int v33; // eax
  DLGTEMPLATE *DialogIndirect; // esi
  int v35; // esi
  int m; // esi
  wchar_t *v37; // eax
  wchar_t *v38; // eax
  HWND eax134; // eax
  IUnknown *v39; // esi
  HWND DlgItem; // eax
  int v42; // esi
  char *v43; // eax
  int edi148; // edi
  SessionClass *v44; // esi
  char *v46; // eax
  char *v47; // eax
  SkirmishDialog *v48; // ebp
  char *v49; // eax
  int v50; // esi
  char *v51; // eax
  int v52; // ebx
  char *v53; // eax
  int PlayerSide; // eax
  SessionClass *v54; // eax
  int Option; // eax
  int Option2; // eax
  bool v58; // bl
  int i; // esi
  char *v60; // eax
  int v61; // eax
  char v62; // bl
  int j; // esi
  int v64; // eax
  int v65; // esi
  int v66; // eax
  int v67; // ecx
  HWND v68; // eax
  ObjectClass *Current; // esi
  LRESULT v70; // eax
  LRESULT v71; // eax
  int v72; // esi
  int v73; // eax
  int v74; // esi
  wchar_t **v75; // edi
  char *v76; // eax
  int v77; // edi
  char *v78; // eax
  int v79; // edi
  int eax245; // eax
  ObjectClass *v80; // edx
  ObjectClass *v81; // esi
  char *v83; // eax
  int v84; // edi
  int v85; // ebp
  int v86; // esi
  char *v87; // eax
  char *v88; // eax
  bool v89; // bl
  int v90; // edi
  int v91; // ebp
  int updated; // eax
  int v93; // eax
  int v94; // ebp
  char *v95; // eax
  SkirmishDialog *v96; // eax
  int v97; // esi
  int v98; // eax
  int ebx325; // ebx
  SessionClass *v99; // eax
  int v101; // eax
  int v102; // edi
  int k; // esi
  CCINIClass *v103; // [esp-Ah] [ebp-7E4h]
  CCINIClass *v104; // [esp-Ah] [ebp-7E4h]
  CCINIClass *v105; // [esp-Ah] [ebp-7E4h]
  CCINIClass *v106; // [esp-Ah] [ebp-7E4h]
  CCINIClass *v107; // [esp-Ah] [ebp-7E4h]
  CampaignScore *v109; // [esp-6h] [ebp-7E0h]
  char v110; // [esp+Ch] [ebp-7CEh]
  char v111; // [esp+Dh] [ebp-7CDh]
  char *Block; // [esp+Eh] [ebp-7CCh]
  int Blocka; // [esp+Eh] [ebp-7CCh]
  bool v114; // [esp+13h] [ebp-7C7h]
  bool v115; // [esp+14h] [ebp-7C6h]
  bool v116; // [esp+15h] [ebp-7C5h]
  SessionClass *aP1; // [esp+16h] [ebp-7C4h]
  SessionClass *aP1a; // [esp+16h] [ebp-7C4h]
  _DWORD v119[113]; // [esp+1Ah] [ebp-7C0h] BYREF
  __int16 v120; // [esp+1DEh] [ebp-5FCh]
  char v121; // [esp+1E0h] [ebp-5FAh]
  wchar_t Buffer[80]; // [esp+1E2h] [ebp-5F8h] BYREF
  _DWORD v123[113]; // [esp+282h] [ebp-558h] BYREF
  __int16 v124; // [esp+446h] [ebp-394h]
  char v125; // [esp+448h] [ebp-392h]
  _DWORD v126[113]; // [esp+44Ah] [ebp-390h] BYREF
  __int16 v127; // [esp+60Eh] [ebp-1CCh]
  char v128; // [esp+610h] [ebp-1CAh]
  _DWORD v129[113]; // [esp+612h] [ebp-1C8h] BYREF
  __int16 v130; // [esp+7D6h] [ebp-4h]
  char v131; // [esp+7D8h] [ebp-2h]

  result = *((_BYTE *)&g_MatrixTransformState + 5196);
  v110 = 0;
  v111 = 0;
  if ( *(&g_MatrixTransformState + 1299) )
    return result;
  v109 = a1;
  do
  {
    Event::Dispatch();
    if ( !Network::Send(
            (int)&HouseClass_Player.__pad_5568[22284],
            (int)&HouseClass_Player.__pad_5568[17284],
            (int)&HouseClass_Player.__pad_5568[17740],
            (TechnoTypeClass *)&HouseClass_Player.__pad_5568[17744],
            (int)&HouseClass_Player.__pad_5568[17756]) )
      break;
    if ( *(_WORD *)&HouseClass_Player.__pad_5568[17756] != 0xAA04
      || SendNetworkPlayerOptions(&HouseClass_Player.__pad_5568[17284], (int)&HouseClass_Player.__pad_5568[17744]) )
    {
      continue;
    }
    switch ( *(_DWORD *)&HouseClass_Player.__pad_5568[17284] )
    {
      case 0x19:
        if ( Dialog::GetCurrentType() == 189 )
          ExchangeMultiplayerGameInfo();
        continue;
      case 0x1B:
        if ( Dialog::GetCurrentType() == 188 )
        {
          Game::ResetReadyStates();
          v110 = 1;
          MapPreview::Upload(&(*(&g_MatrixTransformState + 2257))->X);
        }
        continue;
      case 1:
        v2 = 1;
        if ( *(int *)&HouseClass_Player.__pad_5568[18360] <= 1 )
        {
LABEL_16:
          v4 = __2_YAPAXI_Z(0x85u);
          v5 = v4;
          if ( v4 )
            Waypoint::InitInvalid((_BYTE *)(v4 + 40));
          else
            v5 = 0;
          v12 = CharToWideString(&HouseClass_Player.__pad_5568[17288]);
          wcscpy((wchar_t *)v5, (const wchar_t *)v12);
          *(_DWORD *)(v5 + 40) = *(_DWORD *)&HouseClass_Player.__pad_5568[17744];
          *(_DWORD *)(v5 + 44) = *(_DWORD *)&HouseClass_Player.__pad_5568[17748];
          *(_DWORD *)(v5 + 48) = *(_DWORD *)&HouseClass_Player.__pad_5568[17752];
          *(_BYTE *)(v5 + 52) = HouseClass_Player.__pad_5568[17331] & 1;
          v13 = *(_DWORD *)&stru_87C374.__pad_579C[22576];
          if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 )
            v13 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568];
          *(_DWORD *)(v5 + 53) = v13;
          if ( *(int *)&HouseClass_Player.__pad_5568[18360] < *(int *)&HouseClass_Player.__pad_5568[18352]
            || (HouseClass_Player.__pad_5568[18357] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18352])
            && *(int *)&HouseClass_Player.__pad_5568[18364] > 0
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18344]
                                                                      + 8))(
                 &HouseClass_Player.__pad_5568[18344],
                 *(_DWORD *)&HouseClass_Player.__pad_5568[18352] + *(_DWORD *)&HouseClass_Player.__pad_5568[18364],
                 0) )
          {
            v14 = (*(_DWORD *)&HouseClass_Player.__pad_5568[18360])++;
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * v14) = v5;
          }
          v15 = 1;
          if ( *(int *)&HouseClass_Player.__pad_5568[18336] > 1 )
          {
            while ( !GUID::Compare(
                       (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v15) + 40),
                       (int)&HouseClass_Player.__pad_5568[17744]) )
            {
              if ( ++v15 >= *(int *)&HouseClass_Player.__pad_5568[18336] )
                goto LABEL_45;
            }
            __3_YAXPAX_Z(*(void **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v15));
            v16 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[18320] + 16))(
                    &HouseClass_Player.__pad_5568[18320],
                    *(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v15);
            if ( v16 != -1 && v16 < *(int *)&HouseClass_Player.__pad_5568[18336] )
            {
              --*(_DWORD *)&HouseClass_Player.__pad_5568[18336];
              for ( ;
                    v16 < *(int *)&HouseClass_Player.__pad_5568[18336];
                    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v16 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v16) )
              {
                ++v16;
              }
            }
          }
LABEL_45:
          if ( (HouseClass_Player.__pad_5568[17331] & 1) != 0 && (int)*(&g_MatrixTransformState + 1301) < 2 )
          {
            v105 = (CCINIClass *)CharToWideString(&HouseClass_Player.__pad_5568[17288]);
            StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[580], 0, &stru_830620.__pad_BC0[168], 4280);
            swprintf(Buffer, (const size_t)StringCSF, (const wchar_t *const)v105, v109);
            Dialog::ShowMessage(-1, (size_t)Buffer);
            PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1720), 0x2000, 1.0, 0);
          }
          v110 = 1;
          v111 = 1;
        }
        else
        {
          while ( 1 )
          {
            v3 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * v2));
            if ( !_strcmpi(v3, &HouseClass_Player.__pad_5568[17288]) )
              break;
            if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[18360] )
              goto LABEL_16;
          }
          v6 = *(_DWORD *)&stru_87C374.__pad_579C[22576];
          if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 )
            v6 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568];
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * v2) + 53) = v6;
          v7 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * v2);
          if ( *(_BYTE *)(v7 + 52) != (HouseClass_Player.__pad_5568[17331] & 1) )
          {
            v111 = 1;
            *(_BYTE *)(v7 + 52) = HouseClass_Player.__pad_5568[17331] & 1;
            v8 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * v2);
            if ( *(_BYTE *)(v8 + 52) )
            {
              v9 = (_DWORD *)(v8 + 40);
              *v9 = *(_DWORD *)&HouseClass_Player.__pad_5568[17744];
              v9[1] = *(_DWORD *)&HouseClass_Player.__pad_5568[17748];
              v9[2] = *(_DWORD *)&HouseClass_Player.__pad_5568[17752];
            }
            if ( (int)*(&g_MatrixTransformState + 1301) < 2 )
            {
              if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * v2) + 52) )
              {
                v103 = (CCINIClass *)CharToWideString(&HouseClass_Player.__pad_5568[17288]);
                v10 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[580], 0, &stru_830620.__pad_BC0[168], 4234);
                swprintf(Buffer, (const size_t)v10, (const wchar_t *const)v103, v109);
                PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1720), 0x2000, 1.0, 0);
              }
              else
              {
                v104 = (CCINIClass *)CharToWideString(&HouseClass_Player.__pad_5568[17288]);
                v11 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[552], 0, &stru_830620.__pad_BC0[168], 4239);
                swprintf(Buffer, (const size_t)v11, (const wchar_t *const)v104, v109);
                PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1704), 0x2000, 1.0, 0);
              }
              Dialog::ShowMessage(-1, (size_t)Buffer);
            }
          }
        }
        continue;
      case 3:
        v18 = 0;
        v19 = 0;
        if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 )
        {
          while ( !GUID::Compare(
                     (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v19) + 40),
                     (int)&HouseClass_Player.__pad_5568[17744]) )
          {
            if ( ++v19 >= *(int *)&HouseClass_Player.__pad_5568[18384] )
              goto LABEL_55;
          }
          v18 = 1;
        }
LABEL_55:
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[18360]
          && *(_DWORD *)&HouseClass_Player.__pad_5568[17339] != WideString::Hash((wchar_t *)&HouseClass_Player.__pad_5568[17244]) )
        {
          v18 = 1;
        }
        if ( _strcmpi(&HouseClass_Player.__pad_5568[8396], &HouseClass_Player.__pad_5568[17288]) && !v18 )
        {
          v20 = __2_YAPAXI_Z(0x85u);
          v21 = v20;
          if ( v20 )
            Waypoint::InitInvalid((_BYTE *)(v20 + 40));
          else
            v21 = 0;
          memset((void *)v21, 0, 0x84u);
          *(_BYTE *)(v21 + 132) = 0;
          v22 = CharToWideString(&HouseClass_Player.__pad_5568[17288]);
          wcscpy((wchar_t *)v21, (const wchar_t *)v22);
          strcpy((char *)(v21 + 52), &HouseClass_Player.__pad_5568[17308]);
          *(_DWORD *)(v21 + 40) = *(_DWORD *)&HouseClass_Player.__pad_5568[17744];
          *(_DWORD *)(v21 + 44) = *(_DWORD *)&HouseClass_Player.__pad_5568[17748];
          *(_DWORD *)(v21 + 48) = *(_DWORD *)&HouseClass_Player.__pad_5568[17752];
          SessionClass::SetPlayerOption(v21, *(SkirmishDialog **)&HouseClass_Player.__pad_5568[17331]);
          SessionClass::SetPlayerColor(v21, *(int *)&HouseClass_Player.__pad_5568[17335]);
          SessionClass::SetOption(v21, (SessionClass *)0xFFFFFFFE);
          SessionClass::SetOption2(v21, (SessionClass *)0xFFFFFFFE);
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17371] )
            *(_DWORD *)(v21 + 107) = -1;
          if ( *(int *)&HouseClass_Player.__pad_5568[18384] < *(int *)&HouseClass_Player.__pad_5568[18376]
            || (HouseClass_Player.__pad_5568[18381] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18376])
            && *(int *)&HouseClass_Player.__pad_5568[18388] > 0
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368]
                                                                      + 8))(
                 &HouseClass_Player.__pad_5568[18368],
                 *(_DWORD *)&HouseClass_Player.__pad_5568[18376] + *(_DWORD *)&HouseClass_Player.__pad_5568[18388],
                 0) )
          {
            v23 = (*(_DWORD *)&HouseClass_Player.__pad_5568[18384])++;
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v23) = v21;
          }
          Network_Handle_5E8D90(*(int *)&HouseClass_Player.__pad_5568[17367], v21);
          v24 = 1;
          if ( *(int *)&HouseClass_Player.__pad_5568[18336] > 1 )
          {
            while ( !GUID::Compare(
                       (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v24) + 40),
                       (int)&HouseClass_Player.__pad_5568[17744]) )
            {
              if ( ++v24 >= *(int *)&HouseClass_Player.__pad_5568[18336] )
                goto LABEL_79;
            }
            __3_YAXPAX_Z(*(void **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v24));
            v25 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[18320] + 16))(
                    &HouseClass_Player.__pad_5568[18320],
                    *(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v24);
            if ( v25 != -1 && v25 < *(int *)&HouseClass_Player.__pad_5568[18336] )
            {
              --*(_DWORD *)&HouseClass_Player.__pad_5568[18336];
              for ( ;
                    v25 < *(int *)&HouseClass_Player.__pad_5568[18336];
                    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v25 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v25) )
              {
                ++v25;
              }
            }
          }
LABEL_79:
          Game::ResetReadyStates();
          v26 = (HWND)Dialog::FindByHandle((void *)0xBD);
          EnablePlayerSlotControls(v26, 1);
          Debug::Log();
          v110 = 1;
          if ( (int)*(&g_MatrixTransformState + 1301) >= 2 )
            PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1728), 0x2000, 1.0, 0);
        }
        continue;
      case 0x16:
        if ( !Settings::CheckString() )
        {
          NetworkLobby::SetupPlayers((wchar_t *)&HouseClass_Player.__pad_5568[17331]);
          v110 = 1;
        }
        continue;
      case 0x28:
        if ( !Settings::CheckString() )
          Network_Handle();
        continue;
      case 7:
        if ( *(&g_MatrixTransformState + 1301) != (CoordStruct *)2 )
        {
          v27 = CharToWideString(&HouseClass_Player.__pad_5568[17288]);
          wcscpy((wchar_t *)&HouseClass_Player.__pad_5568[17244], (const wchar_t *)v27);
          SessionClass::AssignSide(&HouseClass_Player.__pad_5568[8068], *(int *)&HouseClass_Player.__pad_5568[17331], 0);
          SessionClass::AssignColor(
            &HouseClass_Player.__pad_5568[8068],
            *(int *)&HouseClass_Player.__pad_5568[17335],
            0);
          *(_DWORD *)&HouseClass_Player.__pad_5568[10348] = *(_DWORD *)&HouseClass_Player.__pad_5568[17748];
          *(&g_MatrixTransformState + 1301) = (CoordStruct *)2;
          *(_DWORD *)&HouseClass_Player.__pad_5568[10344] = *(_DWORD *)&HouseClass_Player.__pad_5568[17744];
          *(_DWORD *)&HouseClass_Player.__pad_5568[10352] = *(_DWORD *)&HouseClass_Player.__pad_5568[17752];
          PtrVector::Destroy(&HouseClass_Player.__pad_5568[18368]);
          v28 = __2_YAPAXI_Z(0x85u);
          v29 = v28;
          if ( v28 )
            Waypoint::InitInvalid((_BYTE *)(v28 + 40));
          else
            v29 = 0;
          memset((void *)v29, 0, 0x84u);
          *(_BYTE *)(v29 + 132) = 0;
          v30 = CharToWideString(&HouseClass_Player.__pad_5568[8396]);
          wcscpy((wchar_t *)v29, (const wchar_t *)v30);
          PlayerOption = (SkirmishDialog *)Session::GetPlayerOption(&HouseClass_Player.__pad_5568[8068]);
          SessionClass::SetPlayerOption(v29, PlayerOption);
          PlayerColor = Session::GetPlayerColor(&HouseClass_Player.__pad_5568[8068]);
          SessionClass::SetPlayerColor(v29, PlayerColor);
          SessionClass::SetOption(v29, (SessionClass *)0xFFFFFFFE);
          SessionClass::SetOption2(v29, (SessionClass *)0xFFFFFFFE);
          *(_DWORD *)&stru_830620.__pad_DFC[648] = *(_DWORD *)&HouseClass_Player.__pad_5568[17371];
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17367] == *(_DWORD *)&HouseClass_Player.__pad_5568[17371]
            && *(_DWORD *)&HouseClass_Player.__pad_5568[17331] == -3 )
          {
            *(_DWORD *)(v29 + 107) = -1;
          }
          if ( *(int *)&HouseClass_Player.__pad_5568[18384] < *(int *)&HouseClass_Player.__pad_5568[18376]
            || (HouseClass_Player.__pad_5568[18381] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18376])
            && *(int *)&HouseClass_Player.__pad_5568[18388] > 0
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368]
                                                                      + 8))(
                 &HouseClass_Player.__pad_5568[18368],
                 *(_DWORD *)&HouseClass_Player.__pad_5568[18376] + *(_DWORD *)&HouseClass_Player.__pad_5568[18388],
                 0) )
          {
            v33 = (*(_DWORD *)&HouseClass_Player.__pad_5568[18384])++;
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v33) = v29;
          }
          stru_830620.__pad_BC0[148] = 0;
          CloseDialog(0, 0);
          *(&g_MatrixTransformState + 1299) = 0;
          Game::ResetFlags();
          Network::InitPlayerSlots();
          NetworkShare::GetField(*(int *)&HouseClass_Player.__pad_5568[17367]);
          LoadingScreen::Init();
          DialogIndirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, (HWND)0xBD, g_hWnd, GameLobby::DlgProc, 0);
          SetupDialog((HWND)DialogIndirect, 189);
          ShowWindow((HWND)DialogIndirect, 1);
          v110 = 1;
          SendNetworkHeartbeat(1, 1, 1, 0);
        }
        continue;
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17284] != 8 )
    {
      switch ( *(_DWORD *)&HouseClass_Player.__pad_5568[17284] )
      {
        case 0x17:
          v42 = 0;
          if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 )
          {
            while ( 1 )
            {
              v43 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v42));
              if ( !_strcmpi(v43, &HouseClass_Player.__pad_5568[17288]) )
                break;
              if ( ++v42 >= *(int *)&HouseClass_Player.__pad_5568[18384] )
                goto LABEL_291;
            }
            if ( v42 != -1 && !*((_BYTE *)&g_MatrixTransformState + 5208) )
              SetupNetworkLobbyDialog(
                (VectorClass *)&HouseClass_Player.__pad_5568[17331],
                &HouseClass_Player.__pad_5568[17288]);
          }
          continue;
        case 0x18:
          Block = _strdup((INIClass *)&HouseClass_Player.__pad_5568[17332]);
          edi148 = 0;
          v44 = (SessionClass *)&HouseClass_Player.__pad_5568[18396];
          while ( 1 )
          {
            v46 = ToWideStringChar((IUnknown *)v44->GameMode[0]);
            if ( !_strcmpi(v46, &HouseClass_Player.__pad_5568[17288]) )
              break;
            v44 = (SessionClass *)((char *)v44 + 4);
            ++edi148;
            if ( (int)v44 >= (int)&HouseClass_Player.__pad_5568[18428] )
              goto LABEL_151;
          }
          if ( edi148 != -1 && !*((_BYTE *)&g_MatrixTransformState + 5208) )
          {
            v47 = strtok(Block, (ObjectClass *)&stru_817F40.nextObject);
            v48 = 0;
            if ( v47 )
              v48 = (SkirmishDialog *)atol(v47);
            v49 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
            v50 = 0;
            if ( v49 )
              v50 = atol(v49);
            v51 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
            v52 = 0;
            if ( v51 )
              v52 = atol(v51);
            v53 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
            aP1 = 0;
            if ( v53 )
              aP1 = (SessionClass *)atol(v53);
            if ( !Dialog::FindByHandle((void *)0xBC) )
              Dialog::FindByHandle((void *)0xBD);
            PlayerSide = SessionClass::GetPlayerSide(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * edi148 + 18396]);
            v114 = PlayerSide != (_DWORD)v48;
            if ( (SkirmishDialog *)PlayerSide != v48 )
              SessionClass::SetPlayerOption(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * edi148 + 18396], v48);
            v54 = (SessionClass *)SessionClass::GetPlayerColor(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * edi148 + 18396]);
            v116 = v54 != (SessionClass *)v50;
            if ( v54 != (SessionClass *)v50 )
            {
              if ( NetworkSession::IsPlayerInGame(&HouseClass_Player.__pad_5568[8068], v50) )
                v50 = -2;
              SessionClass::SetPlayerColor(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * edi148 + 18396], v50);
            }
            Option = SessionClass::GetOption(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * edi148 + 18396]);
            v115 = Option != v52;
            if ( Option != v52 )
            {
              if ( NetworkLobby::CheckPlayerNames((void *)v52) )
                v52 = -2;
              SessionClass::SetOption(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * edi148 + 18396], (SessionClass *)v52);
            }
            Option2 = SessionClass::GetOption2(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * edi148 + 18396]);
            v58 = Option2 != (_DWORD)aP1;
            if ( (SessionClass *)Option2 != aP1 )
              SessionClass::SetOption2(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * edi148 + 18396], aP1);
            if ( v114 || v116 || v115 || v58 )
            {
              v110 = 1;
              CheckGameSettingsChanged(1, 0);
            }
          }
LABEL_151:
          free(Block);
          continue;
        case 0xA:
          for ( i = 1; i < *(int *)&HouseClass_Player.__pad_5568[18360]; ++i )
          {
            v60 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * i));
            if ( !_strcmpi(v60, &HouseClass_Player.__pad_5568[17288])
              && GUID::Compare(
                   (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * i) + 40),
                   (int)&HouseClass_Player.__pad_5568[17744]) )
            {
              if ( (CoordStruct *)i == *(&g_MatrixTransformState + 1300) )
              {
                Game::ResetFlags();
                GameClass::InitDifficultyButtons();
                PtrVector::Destroy(&HouseClass_Player.__pad_5568[18368]);
                if ( Dialog::GetCurrentType() != 187 && Dialog::GetCurrentType() == 189 )
                  *(&g_MatrixTransformState + 1299) = (CoordStruct *)2;
              }
              if ( (int)*(&g_MatrixTransformState + 1301) > 0 && (CoordStruct *)i == *(&g_MatrixTransformState + 1300) )
                *(&g_MatrixTransformState + 1301) = (CoordStruct *)-1;
              __3_YAXPAX_Z(*(void **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * i));
              v61 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[18344] + 16))(
                      &HouseClass_Player.__pad_5568[18344],
                      *(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * i);
              if ( v61 != -1 && v61 < *(int *)&HouseClass_Player.__pad_5568[18360] )
              {
                --*(_DWORD *)&HouseClass_Player.__pad_5568[18360];
                for ( ;
                      v61 < *(int *)&HouseClass_Player.__pad_5568[18360];
                      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * v61 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * v61) )
                {
                  ++v61;
                }
              }
              *(&g_MatrixTransformState + 1300) = (CoordStruct *)(i - 1);
              v111 = 1;
              SendNetworkHeartbeat(0, 1, 1, 0);
            }
          }
          v62 = 0;
          NetworkLobby::CheckLobbyConditions(&HouseClass_Player.__pad_5568[17744]);
          for ( j = 0; j < *(int *)&HouseClass_Player.__pad_5568[18384]; ++j )
          {
            if ( GUID::Compare(
                   (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * j) + 40),
                   (int)&HouseClass_Player.__pad_5568[17744]) )
            {
              __3_YAXPAX_Z(*(void **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * j));
              v64 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368] + 16))(
                      &HouseClass_Player.__pad_5568[18368],
                      *(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * j);
              if ( v64 != -1 && v64 < *(int *)&HouseClass_Player.__pad_5568[18384] )
              {
                --*(_DWORD *)&HouseClass_Player.__pad_5568[18384];
                for ( ;
                      v64 < *(int *)&HouseClass_Player.__pad_5568[18384];
                      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v64 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v64) )
                {
                  ++v64;
                }
              }
              v62 = 1;
              if ( (int)*(&g_MatrixTransformState + 1301) >= 2 )
                PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1724), 0x2000, 1.0, 0);
            }
          }
          v65 = 1;
          if ( *(int *)&HouseClass_Player.__pad_5568[18336] > 1 )
          {
            do
            {
              if ( !GUID::Compare(
                      (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v65) + 40),
                      (int)&HouseClass_Player.__pad_5568[17744])
                || (__3_YAXPAX_Z(*(void **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v65)),
                    v66 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[18320] + 16))(
                            &HouseClass_Player.__pad_5568[18320],
                            *(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v65),
                    v66 == -1) )
              {
                v67 = *(_DWORD *)&HouseClass_Player.__pad_5568[18336];
              }
              else
              {
                v67 = *(_DWORD *)&HouseClass_Player.__pad_5568[18336];
                if ( v66 < *(int *)&HouseClass_Player.__pad_5568[18336] )
                {
                  v67 = *(_DWORD *)&HouseClass_Player.__pad_5568[18336] - 1;
                  *(_DWORD *)&HouseClass_Player.__pad_5568[18336] = v67;
                  if ( v66 < v67 )
                  {
                    do
                    {
                      ++v66;
                      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v66 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v66);
                      v67 = *(_DWORD *)&HouseClass_Player.__pad_5568[18336];
                    }
                    while ( v66 < *(int *)&HouseClass_Player.__pad_5568[18336] );
                  }
                }
              }
              ++v65;
            }
            while ( v65 < v67 );
          }
          if ( !v62 )
            goto LABEL_222;
          Game::ResetReadyStates();
          v68 = (HWND)Dialog::FindByHandle((void *)0xBD);
          EnablePlayerSlotControls(v68, 1);
          if ( Dialog::GetCurrentType() != 107 )
          {
            (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 144))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
LABEL_222:
            v110 = 1;
            continue;
          }
          Current = (ObjectClass *)Dialog::GetCurrent();
          v70 = SendDlgItemMessageA((HWND)Current, 1771, 0x188u, 0, 0);
          if ( v70 == -1 )
            goto LABEL_222;
          v71 = SendDlgItemMessageA((HWND)Current, 1771, 0x199u, v70, 0);
          (*(void (__thiscall **)(LRESULT))(*(_DWORD *)v71 + 144))(v71);
          v110 = 1;
          break;
        case 0xB:
        case 0xE:
          if ( *(&g_MatrixTransformState + 1301) == (CoordStruct *)2 )
          {
            *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = *(_DWORD *)&HouseClass_Player.__pad_5568[17331];
            *(_DWORD *)&HouseClass_Player.__pad_5568[10344] = *(_DWORD *)&HouseClass_Player.__pad_5568[17744];
            *(_DWORD *)&HouseClass_Player.__pad_5568[10348] = *(_DWORD *)&HouseClass_Player.__pad_5568[17748];
            *(_DWORD *)&HouseClass_Player.__pad_5568[10352] = *(_DWORD *)&HouseClass_Player.__pad_5568[17752];
            *(_DWORD *)&HouseClass_Player.__pad_5568[8856] = *(_DWORD *)&HouseClass_Player.__pad_5568[18384];
            *(&g_MatrixTransformState + 1299) = (CoordStruct *)1;
            if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17284] == 11 )
            {
              *(&g_MatrixTransformState + 1301) = (CoordStruct *)3;
            }
            else if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17284] == 14 )
            {
              *(&g_MatrixTransformState + 1301) = (CoordStruct *)4;
            }
            goto LABEL_336;
          }
          break;
        case 4:
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17331] != *(_DWORD *)&HouseClass_Player.__pad_5568[8392] )
          {
            v72 = 0;
            if ( *(int *)&HouseClass_Player.__pad_5568[18336] <= 0 )
            {
LABEL_230:
              v73 = __2_YAPAXI_Z(0x85u);
              v74 = v73;
              if ( v73 )
                Waypoint::InitInvalid((_BYTE *)(v73 + 40));
              else
                v74 = 0;
              v78 = CharToWideString(&HouseClass_Player.__pad_5568[17288]);
              wcscpy((wchar_t *)v74, (const wchar_t *)v78);
              *(_DWORD *)(v74 + 40) = *(_DWORD *)&HouseClass_Player.__pad_5568[17744];
              *(_DWORD *)(v74 + 44) = *(_DWORD *)&HouseClass_Player.__pad_5568[17748];
              *(_DWORD *)(v74 + 48) = *(_DWORD *)&HouseClass_Player.__pad_5568[17752];
              v79 = *(_DWORD *)&stru_87C374.__pad_579C[22576];
              if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 )
                v79 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568];
              *(_DWORD *)(v74 + 52) = v79;
              *(_BYTE *)(v74 + 56) = 0;
              *(_DWORD *)(v74 + 57) = *(_DWORD *)&HouseClass_Player.__pad_5568[17335];
              if ( *(int *)&HouseClass_Player.__pad_5568[18336] < *(int *)&HouseClass_Player.__pad_5568[18328]
                || (HouseClass_Player.__pad_5568[18333] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18328])
                && *(int *)&HouseClass_Player.__pad_5568[18340] > 0
                && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18320]
                                                                          + 8))(
                     &HouseClass_Player.__pad_5568[18320],
                     *(_DWORD *)&HouseClass_Player.__pad_5568[18328] + *(_DWORD *)&HouseClass_Player.__pad_5568[18340],
                     0) )
              {
                eax245 = (*(_DWORD *)&HouseClass_Player.__pad_5568[18336])++;
                *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * eax245) = v74;
              }
            }
            else
            {
              while ( !GUID::Compare(
                         (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v72) + 40),
                         (int)&HouseClass_Player.__pad_5568[17744]) )
              {
                if ( ++v72 >= *(int *)&HouseClass_Player.__pad_5568[18336] )
                  goto LABEL_230;
              }
              v75 = (wchar_t **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v72);
              v76 = CharToWideString(&HouseClass_Player.__pad_5568[17288]);
              wcscpy(*v75, (const wchar_t *)v76);
              v77 = *(_DWORD *)&stru_87C374.__pad_579C[22576];
              if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 )
                v77 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568];
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v72) + 52) = v77;
              *(_BYTE *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v72) + 56) = 0;
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v72) + 57) = *(_DWORD *)&HouseClass_Player.__pad_5568[17335];
            }
            if ( !*(&g_MatrixTransformState + 1300) )
              v110 = 1;
          }
          continue;
        case 5:
          if ( *(&g_MatrixTransformState + 1301) != (CoordStruct *)1
            && *(&g_MatrixTransformState + 1301) != (CoordStruct *)2 )
          {
            memset(v123, 0, sizeof(v123));
            v124 = 0;
            v125 = 0;
            v123[0] = 4;
            v80 = *(ObjectClass **)&HouseClass_Player.__pad_5568[8416];
            strcpy((char *)&v123[1], &HouseClass_Player.__pad_5568[8396]);
            *(_DWORD *)((char *)&v123[11] + 3) = *(_DWORD *)&HouseClass_Player.__pad_5568[8392];
            *(_DWORD *)((char *)&v123[12] + 3) = v80;
            Network::SendMessage(
              (int)&HouseClass_Player.__pad_5568[22284],
              (int)v123,
              455,
              1,
              (int)&HouseClass_Player.__pad_5568[17744],
              0,
              0);
            Event::Dispatch();
          }
          continue;
        case 0xC:
          v81 = *(ObjectClass **)&HouseClass_Player.__pad_5568[17556];
          if ( *(&g_MatrixTransformState + 1301) != (CoordStruct *)2
            || *(_DWORD *)&HouseClass_Player.__pad_5568[17560] == WideString::Hash((wchar_t *)&HouseClass_Player.__pad_5568[17244]) )
          {
            v83 = CharToWideString(&HouseClass_Player.__pad_5568[17288]);
            Dialog::ShowMessage((LPARAM)v81, (size_t)g_Str_Trace___s_, v83, 11064936);
            PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1708), 0x2000, 1.0, 0);
          }
          continue;
        case 6:
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[18384] )
          {
            v84 = 0;
            v85 = 0;
            Blocka = 0;
            v86 = 1;
            if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 1 )
            {
              while ( 1 )
              {
                v87 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v86));
                if ( !_strcmpi(v87, &HouseClass_Player.__pad_5568[17288]) )
                  break;
                if ( ++v86 >= *(int *)&HouseClass_Player.__pad_5568[18384] )
                  goto LABEL_266;
              }
              if ( Network::processPacket(
                     (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v86) + 40),
                     (TechnoTypeClass *)&HouseClass_Player.__pad_5568[17744]) )
              {
                v84 = 1;
              }
              else
              {
                v85 = 1;
                Blocka = 1;
              }
            }
LABEL_266:
            v88 = ToWideStringChar(**(IUnknown ***)&HouseClass_Player.__pad_5568[18372]);
            if ( !_strcmpi(v88, &HouseClass_Player.__pad_5568[17288]) || v84 )
            {
              memset(v119, 0, sizeof(v119));
              v120 = 0;
              v121 = 0;
              v119[0] = 8;
              *(_DWORD *)((char *)&v119[11] + 3) = 0;
              Network::SendMessage(
                (int)&HouseClass_Player.__pad_5568[22284],
                (int)v119,
                455,
                1,
                (int)&HouseClass_Player.__pad_5568[17744],
                0,
                0);
              continue;
            }
            if ( v85 )
              goto LABEL_276;
            if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17371] != 1 )
            {
              if ( NetworkLobby::CheckMinPlayers() )
              {
                memset(v119, 0, sizeof(v119));
                v120 = 0;
                v121 = 0;
                v119[0] = 8;
                *(_DWORD *)((char *)&v119[11] + 3) = 1;
                Network::SendMessage(
                  (int)&HouseClass_Player.__pad_5568[22284],
                  (int)v119,
                  455,
                  1,
                  (int)&HouseClass_Player.__pad_5568[17744],
                  0,
                  0);
                continue;
              }
              if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17371] != 1 )
                goto LABEL_276;
            }
            if ( GameOption::CheckDuplicate() )
            {
              memset(v119, 0, sizeof(v119));
              v120 = 0;
              v121 = 0;
              v119[0] = 8;
              *(_DWORD *)((char *)&v119[11] + 3) = 1;
            }
            else
            {
LABEL_276:
              v89 = 1;
              if ( !Blocka )
              {
                v89 = *(_DWORD *)&HouseClass_Player.__pad_5568[17351] == (_DWORD)*(&g_MatrixTransformState + 1303);
                if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17355] != unknown_libname_30() )
                  v89 = 0;
                if ( *(CoordStruct **)&HouseClass_Player.__pad_5568[17359] != *(&g_MatrixTransformState + 1304) )
                  v89 = 0;
                if ( *(INIClass **)&HouseClass_Player.__pad_5568[17363] != GameOptions::GetEntry() )
                  v89 = 0;
              }
              aP1a = 0;
              if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 )
              {
                v90 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372];
                v91 = *(_DWORD *)&HouseClass_Player.__pad_5568[18384];
                do
                {
                  if ( !strcmp((const char *)(*(_DWORD *)v90 + 52), &HouseClass_Player.__pad_5568[17308]) )
                    aP1a = (SessionClass *)((char *)aP1a + 1);
                  v90 += 4;
                  --v91;
                }
                while ( v91 );
                if ( (int)aP1a >= 1 && !Blocka )
                {
                  memset(v119, 0, sizeof(v119));
                  v120 = 0;
                  v121 = 0;
                  v119[0] = 8;
                  *(_DWORD *)((char *)&v119[11] + 3) = 7;
                  Network::SendMessage(
                    (int)&HouseClass_Player.__pad_5568[22284],
                    (int)v119,
                    455,
                    1,
                    (int)&HouseClass_Player.__pad_5568[17744],
                    0,
                    0);
                  continue;
                }
              }
              if ( v89 )
              {
                if ( Blocka )
                  continue;
                updated = NetworkBuffer::UpdateWindow(
                            (VersionClass *)&HouseClass_Player.__pad_5568[23084],
                            *(CellStruct **)&HouseClass_Player.__pad_5568[17343],
                            *(unsigned int *)&HouseClass_Player.__pad_5568[17347]);
                *(_DWORD *)&HouseClass_Player.__pad_5568[9744] = updated;
                if ( updated )
                {
                  if ( updated == -1 )
                  {
                    memset(v119, 0, sizeof(v119));
                    v120 = 0;
                    v121 = 0;
                    v119[0] = 8;
                    *(_DWORD *)((char *)&v119[11] + 3) = 3;
                    Network::SendMessage(
                      (int)&HouseClass_Player.__pad_5568[22284],
                      (int)v119,
                      455,
                      1,
                      (int)&HouseClass_Player.__pad_5568[17744],
                      0,
                      0);
                  }
                  else
                  {
                    *(_DWORD *)&HouseClass_Player.__pad_5568[8088] = Network::GetMaxPacketSize((VersionClass *)&HouseClass_Player.__pad_5568[23084]);
                    v93 = __2_YAPAXI_Z(0x85u);
                    v94 = v93;
                    if ( v93 )
                      Waypoint::InitInvalid((_BYTE *)(v93 + 40));
                    else
                      v94 = 0;
                    memset((void *)v94, 0, 0x84u);
                    *(_BYTE *)(v94 + 132) = 0;
                    v95 = CharToWideString(&HouseClass_Player.__pad_5568[17288]);
                    wcscpy((wchar_t *)v94, (const wchar_t *)v95);
                    *(_DWORD *)(v94 + 40) = *(_DWORD *)&HouseClass_Player.__pad_5568[17744];
                    *(_DWORD *)(v94 + 44) = *(_DWORD *)&HouseClass_Player.__pad_5568[17748];
                    *(_DWORD *)(v94 + 48) = *(_DWORD *)&HouseClass_Player.__pad_5568[17752];
                    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
                    {
                      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072]
                                                                             + 28))(
                             *(_DWORD *)&HouseClass_Player.__pad_5568[8072],
                             *(_DWORD *)&HouseClass_Player.__pad_5568[17331]) )
                      {
                        v96 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[17331];
                      }
                      else
                      {
                        v96 = (SkirmishDialog *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072]
                                                                              + 40))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
                      }
                      SessionClass::SetPlayerOption(v94, v96);
                    }
                    strcpy((char *)(v94 + 52), &HouseClass_Player.__pad_5568[17308]);
                    v97 = *(_DWORD *)&HouseClass_Player.__pad_5568[17335];
                    if ( NetworkLobby::CheckPlayerNameValid(*(void **)&HouseClass_Player.__pad_5568[17335]) )
                      v97 = -2;
                    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17371] == 1 )
                    {
                      v97 = -2;
                      SessionClass::SetPlayerOption(v94, (SkirmishDialog *)0xFFFFFFFD);
                      *(_DWORD *)(v94 + 107) = -1;
                    }
                    else
                    {
                      *(_DWORD *)(v94 + 107) = 0;
                      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17331] == -3 )
                      {
                        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
                        {
                          v106 = (CCINIClass *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072]
                                                                             + 40))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
                          SessionClass::SetPlayerOption(v94, (SkirmishDialog *)v106);
                        }
                        else
                        {
                          SessionClass::SetPlayerOption(v94, (SkirmishDialog *)0xFFFFFFFE);
                        }
                      }
                    }
                    SessionClass::SetPlayerColor(v94, v97);
                    SessionClass::SetOption(v94, (SessionClass *)0xFFFFFFFE);
                    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
                    {
                      v107 = (CCINIClass *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072]
                                                                         + 44))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
                      SessionClass::SetOption2(v94, (SessionClass *)v107);
                    }
                    else
                    {
                      SessionClass::SetOption2(v94, (SessionClass *)0xFFFFFFFE);
                    }
                    if ( *(int *)&HouseClass_Player.__pad_5568[18384] < *(int *)&HouseClass_Player.__pad_5568[18376]
                      || (HouseClass_Player.__pad_5568[18381] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18376])
                      && *(int *)&HouseClass_Player.__pad_5568[18388] > 0
                      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368]
                                                                                + 8))(
                           &HouseClass_Player.__pad_5568[18368],
                           *(_DWORD *)&HouseClass_Player.__pad_5568[18376]
                         + *(_DWORD *)&HouseClass_Player.__pad_5568[18388],
                           0) )
                    {
                      v98 = (*(_DWORD *)&HouseClass_Player.__pad_5568[18384])++;
                      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v98) = v94;
                    }
                    ebx325 = NetworkLobby::AssignPlayerSlot(v94);
                    Game::ResetReadyStates();
                    memset(v119, 0, sizeof(v119));
                    v120 = 0;
                    v121 = 0;
                    v119[0] = 7;
                    v110 = 1;
                    strcpy((char *)&v119[1], &HouseClass_Player.__pad_5568[8396]);
                    *(_DWORD *)((char *)&v119[11] + 3) = SessionClass::GetPlayerSide(v94);
                    v99 = (SessionClass *)SessionClass::GetPlayerColor(v94);
                    *(_DWORD *)((char *)&v119[21] + 3) = *(_DWORD *)&stru_830620.__pad_DFC[648];
                    *(_DWORD *)((char *)&v119[12] + 3) = v99;
                    *(_DWORD *)((char *)&v119[20] + 3) = ebx325;
                    Network::SendMessage(
                      (int)&HouseClass_Player.__pad_5568[22284],
                      (int)v119,
                      455,
                      1,
                      (int)&HouseClass_Player.__pad_5568[17744],
                      0,
                      0);
                    PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1728), 0x2000, 1.0, 0);
                    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
                    {
                      v101 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 152))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
                      if ( v101 != -1 )
                        *(_DWORD *)&HouseClass_Player.__pad_5568[10328] = v101;
                    }
                    CheckGameSettingsChanged(1, 0);
                    memset(v129, 0, sizeof(v129));
                    v130 = 0;
                    v131 = 0;
                    v129[0] = 22;
                    strcpy((char *)&v129[1], &HouseClass_Player.__pad_5568[8396]);
                    Player::BuildListString((wchar_t *)((char *)&v129[11] + 3));
                    v102 = *(_DWORD *)&HouseClass_Player.__pad_5568[18384];
                    for ( k = 1; k < v102; ++k )
                    {
                      Network::SendMessage(
                        (int)&HouseClass_Player.__pad_5568[22284],
                        (int)v129,
                        455,
                        1,
                        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * k) + 40,
                        0,
                        0);
                      Event::Dispatch();
                    }
                    Event_Handle();
                  }
                  continue;
                }
                memset(v119, 0, sizeof(v119));
                v120 = 0;
                v121 = 0;
                v119[0] = 8;
                *(_DWORD *)((char *)&v119[11] + 3) = 2;
              }
              else
              {
                memset(v119, 0, sizeof(v119));
                v120 = 0;
                v121 = 0;
                v119[0] = 8;
                *(_DWORD *)((char *)&v119[11] + 3) = 6;
              }
            }
          }
          else
          {
            memset(v119, 0, sizeof(v119));
            v120 = 0;
            v121 = 0;
            v119[0] = 8;
            *(_DWORD *)((char *)&v119[11] + 3) = 5;
          }
          Network::SendMessage(
            (int)&HouseClass_Player.__pad_5568[22284],
            (int)v119,
            455,
            1,
            (int)&HouseClass_Player.__pad_5568[17744],
            0,
            0);
          break;
      }
      continue;
    }
    v35 = 0;
    if ( *(&g_MatrixTransformState + 1301) == (CoordStruct *)2 )
    {
      memset(v126, 0, sizeof(v126));
      v127 = 0;
      v128 = 0;
      v126[0] = 10;
      strcpy((char *)&v126[1], &HouseClass_Player.__pad_5568[8396]);
      for ( m = 1; m < *(int *)&HouseClass_Player.__pad_5568[18384]; ++m )
      {
        Network::SendMessage(
          (int)&HouseClass_Player.__pad_5568[22284],
          (int)v126,
          455,
          1,
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * m) + 40,
          0,
          0);
        Event::Dispatch();
      }
      Network::SendMessage((int)&HouseClass_Player.__pad_5568[22284], (int)v126, 455, 0, 0, 0, 0);
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17224] )
        Network::SendMessage(
          (int)&HouseClass_Player.__pad_5568[22284],
          (int)v126,
          455,
          0,
          (int)&HouseClass_Player.__pad_5568[17228],
          0,
          0);
      while ( Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]) > 0 )
      {
        if ( !Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]) )
          break;
        Event::Dispatch();
      }
      *(_WORD *)&HouseClass_Player.__pad_5568[17244] = 0;
      Game::ResetFlags();
      GameClass::InitDifficultyButtons();
      PtrVector::Destroy(&HouseClass_Player.__pad_5568[18368]);
      PtrVector::Destroy(&HouseClass_Player.__pad_5568[18320]);
      *((_QWORD *)&g_MatrixTransformState + 650) = 0xFFFFFFFF00000000uLL;
      stru_830620.__pad_BC0[148] = 1;
      v35 = 4;
      v110 = 1;
    }
    else if ( *(&g_MatrixTransformState + 1301) == (CoordStruct *)1 )
    {
      v35 = *(_DWORD *)&HouseClass_Player.__pad_5568[17331];
      *(&g_MatrixTransformState + 1301) = (CoordStruct *)-1;
    }
    else if ( *(&g_MatrixTransformState + 1301) != (CoordStruct *)-1 )
    {
      continue;
    }
    v37 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[144], 0, &stru_830620.__pad_BC0[168], 4540);
    Dialog::ShowMessage(-1, (size_t)v37);
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1712), 0x2000, 1.0, 0);
    switch ( v35 )
    {
      case 0:
        v38 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[516], 0, &stru_830620.__pad_BC0[168], 4546);
        goto LABEL_131;
      case 1:
        if ( *(&g_MatrixTransformState + 2222) )
          v38 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[480], 0, &stru_830620.__pad_BC0[168], 4550);
        else
          v38 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[500], 0, &stru_830620.__pad_BC0[168], 4548);
LABEL_131:
        if ( v38 )
          ShowDialogConfirm((CampaignScore *)v38, 0, sub_5DAF20, 0);
        break;
      case 2:
        v38 = GetStringCSF(g_Str_TXT_YOURGAME_OUTDATED, 0, &stru_830620.__pad_BC0[168], 4552);
        goto LABEL_131;
      case 3:
        v38 = GetStringCSF(g_Str_TXT_DESTGAME_OUTDATED, 0, &stru_830620.__pad_BC0[168], 4554);
        goto LABEL_131;
      case 6:
        v38 = GetStringCSF(g_Str_TXT_MISMATCH, 0, &stru_830620.__pad_BC0[168], 4556);
        goto LABEL_131;
      case 5:
        v38 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[460], 0, &stru_830620.__pad_BC0[168], 4558);
        goto LABEL_131;
      case 7:
        v38 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[444], 0, &stru_830620.__pad_BC0[168], 4560);
        goto LABEL_131;
    }
    if ( Dialog::GetCurrentType() != 187 )
    {
      *(&g_MatrixTransformState + 1299) = (CoordStruct *)2;
LABEL_138:
      SendNetworkHeartbeat(0, 0, 1, 0);
      continue;
    }
    eax134 = Dialog::GetCurrent();
    v39 = (IUnknown *)eax134;
    if ( !eax134 )
      goto LABEL_138;
    EnableWindow(eax134, 1);
    DlgItem = GetDlgItem((HWND)v39, 1345);
    if ( !DlgItem )
      goto LABEL_138;
    EnableWindow(DlgItem, 1);
    SendNetworkHeartbeat(0, 0, 1, 0);
LABEL_291:
    ;
  }
  while ( !*(&g_MatrixTransformState + 1299) );
LABEL_336:
  if ( v110 )
    GameSetup::DisplayPlayers(1);
  result = v111;
  if ( v111 )
    return NetworkLobby::UpdatePlayerList(v109);
  return result;
}



// ==== 0x005E1CA0  GameLobby::DlgProc  this=GameLobby  sig=csp ====
INT_PTR __stdcall GameLobby::DlgProc(HWND hWnd, UINT a2, WPARAM a3, unsigned int a4)
{
  ObjectClass *v6; // esi
  INT_PTR result; // eax
  int v7; // esi
  unsigned int v8; // edi
  wchar_t *StringCSF; // ebp
  HWND v10; // eax
  char *v11; // eax
  HWND DlgItem; // eax
  WPARAM v13; // edi
  void *v14; // esi
  bool v15; // cc
  HWND v16; // esi
  INIClass *v20; // edi
  INIClass *started; // ebx
  AbstractClass *v19; // ebp
  INIClass *eax50; // eax
  INIClass *v24; // esi
  INIClass *ResourceID2; // edi
  INIClass *ResourceID; // ebx
  int ResourceID3CSF; // ebp
  void *ResourceID4CSF; // eax
  SkirmishDialog *v29; // esi
  INIClass *v30; // edi
  INIClass *v28; // eax
  INIClass *v35; // edi
  void **ebx64; // ebx
  void *DlgCtrlID; // esi
  void *ComboBoxSelectedRaw; // eax
  wchar_t *ColorTooltip; // eax
  void *ComboBoxSelected; // eax
  wchar_t *Name; // eax
  void *ComboBoxSelectedDefault; // eax
  wchar_t *DifficultyString; // eax
  POINT v38; // [esp-Ch] [ebp-74h]
  INIClass *v39; // [esp+0h] [ebp-68h]
  AbstractClass *v45; // [esp+10h] [ebp-58h]
  int nIDDlgItem; // [esp+14h] [ebp-54h]
  struct tagRECT Rect; // [esp+18h] [ebp-50h] BYREF
  char Buffer[64]; // [esp+28h] [ebp-40h] BYREF
  HWND hWnda; // [esp+6Ch] [ebp+4h]

  if ( a2 <= 0x84 ) /*0x5e1cb0*/
  {
    if ( a2 != 132 ) /*0x5e1cb6*/
    {
      switch ( a2 ) /*0x5e1cd0*/
      {
        case 2u: /*0x5e1cd0*/
          if ( LoadScreen::IsActive((ProgressScreenClass *)&g_MatrixTransformState + 283) ) /*0x5e1cdc*/
            VtableStub::643E70(&g_MatrixTransformState + 6226); /*0x5e1cea*/
          v6 = (ObjectClass *)*(&g_MatrixTransformState + 2257); /*0x5e1cef*/
          if ( !*(&g_MatrixTransformState + 2257) ) /*0x5e1cf7*/
            return 0; /*0x5e1cf7*/
          ComPtr::Dtor(*(&g_MatrixTransformState + 2257)); /*0x5e1cff*/
          __3_YAXPAX_Z(v6); /*0x5e1d05*/
          *(&g_MatrixTransformState + 2257) = 0; /*0x5e1d0d*/
          return 0; /*0x5e1d20*/
        case 0xFu: /*0x5e1cd0*/
          Dialog::DrawBackground(hWnd); /*0x5e1d41*/
          if ( *(&g_MatrixTransformState + 2257) ) /*0x5e1d4e*/
            Skirmish::RenderPreview(*(&g_MatrixTransformState + 2257), (SkirmishDialog *)hWnd); /*0x5e1d51*/
          if ( LoadScreen::IsActive((ProgressScreenClass *)&g_MatrixTransformState + 283) ) /*0x5e1d5b*/
            LoadScreen::Render((ProgressScreenClass *)&g_MatrixTransformState + 283); /*0x5e1d71*/
          Dialog::StopBink(hWnd); /*0x5e1d78*/
          ValidateRect(hWnd, 0); /*0x5e1d80*/
          return 0; /*0x5e1d8f*/
        case 0x14u: /*0x5e1cd0*/
          goto LABEL_9;
        case 0x2Bu: /*0x5e1cd0*/
          Dialog::Resize((char *)a4); /*0x5e1d27*/
LABEL_9:
          result = 1; /*0x5e1d2c*/
          break; /*0x5e1d38*/
        default:
          return 0;
      }
      return result; /*0x5e1d38*/
    }
    hWnda = GetDlgItem(hWnd, 1685); /*0x5e1da4*/
    if ( hWnda ) /*0x5e1da8*/
    {
      v7 = (unsigned __int16)a4; /*0x5e1dbd*/
      v8 = HIWORD(a4); /*0x5e1dc3*/
      GetWindowRect(hWnd, &Rect); /*0x5e1dc5*/
      StringCSF = (wchar_t *)&stru_87C374.__pad_579C[23588]; /*0x5e1dd9*/
      v38.y = v8 - Rect.top; /*0x5e1dde*/
      v38.x = v7 - Rect.left; /*0x5e1ddf*/
      v10 = ChildWindowFromPointEx(hWnd, v38, 1u); /*0x5e1de1*/
      if ( v10 ) /*0x5e1de9*/
      {
        v11 = DlgSkirmishMenuProc(hWnd, v10); /*0x5e1def*/
        if ( v11 ) /*0x5e1df6*/
          StringCSF = GetStringCSF((wchar_t *)v11, 0, &stru_830620.__pad_BC0[168], 3388); /*0x5e1e0b*/
      }
      SendMessageA(hWnda, 0x4B2u, 0, (LPARAM)StringCSF); /*0x5e1e1a*/
      return 0; /*0x5e1e29*/
    }
    return 0; /*0x5e1da8*/
  }
  if ( a2 > 0x4E9 ) /*0x5e1e31*/
  {
    if ( a2 == 1260 ) /*0x5e22e0*/
      Dialog::EnumAndCleanup(hWnd); /*0x5e22e6*/
    return 0; /*0x5e22e6*/
  }
  if ( a2 == 1257 ) /*0x5e1e37*/
  {
    v35 = (INIClass *)a4; /*0x5e21fe*/
    ebx64 = (void **)(a4 + 8); /*0x5e2204*/
    WideString::Assign_Alt((void **)(a4 + 8), 0); /*0x5e2209*/
    if ( *(_DWORD *)v35->__pad_0 && v35->headNode[0] != -1 ) /*0x5e221c*/
    {
      DlgCtrlID = (void *)GetDlgCtrlID(*(HWND *)v35->__pad_0); /*0x5e2229*/
      if ( Dialog::MapPlayerIDToIndex(DlgCtrlID) == -1 ) /*0x5e2235*/
      {
        if ( CountryCombo::IDToIndex(DlgCtrlID) == -1 ) /*0x5e2241*/
        {
          if ( StartCombo::IDToIndex(DlgCtrlID) != -1 ) /*0x5e224d*/
          {
            ComboBoxSelectedRaw = (void *)GetComboBoxSelectedRaw( /*0x5e2259*/
                                            (ReferenceCounted *)hWnd,
                                            (int)DlgCtrlID,
                                            v35->headNode[0]);
            ColorTooltip = GameSetup::GetColorTooltip(ComboBoxSelectedRaw); /*0x5e2260*/
            WideString::Assign_Alt(ebx64, ColorTooltip); /*0x5e2268*/
            return 1; /*0x5e2279*/
          }
        }
        else
        {
          ComboBoxSelected = (void *)GetComboBoxSelected((ReferenceCounted *)hWnd, (int)DlgCtrlID, v35->headNode[0]); /*0x5e2286*/
          if ( ComboBoxSelected != (void *)-1 ) /*0x5e228e*/
          {
            Name = SideClass::GetName(ComboBoxSelected); /*0x5e2292*/
            WideString::Assign_Alt(ebx64, Name); /*0x5e229a*/
            return 1; /*0x5e22ab*/
          }
        }
      }
      else
      {
        ComboBoxSelectedDefault = (void *)GetComboBoxSelectedDefault( /*0x5e22b8*/
                                            (SkirmishDialog *)hWnd,
                                            (int)DlgCtrlID,
                                            v35->headNode[0]);
        DifficultyString = GameClass::GetDifficultyString(ComboBoxSelectedDefault); /*0x5e22bf*/
        WideString::Assign_Alt(ebx64, DifficultyString); /*0x5e22c7*/
      }
    }
    return 1; /*0x5e22d8*/
  }
  if ( a2 != 273 ) /*0x5e1e42*/
  {
    if ( a2 == 1175 ) /*0x5e1e4d*/
    {
      SkirmishDialog::FillComboBoxes((SkirmishDialog *)hWnd); /*0x5e1e59*/
      InitGameDropdownColors(); /*0x5e1e5e*/
      Lobby::FillPlayerFactions(hWnd); /*0x5e1e65*/
      _cfltcvt_init(); /*0x5e1e6a*/
      Lobby::InvalidateFactionCombos(hWnd); /*0x5e1e71*/
      GDlg::LoadLetterStrings(); /*0x5e1e76*/
      memset32(&HouseClass_Player.__pad_5568[8264], -2, 8u); /*0x5e1e8a*/
      Lobby::InvalidatePlayerSlots(hWnd); /*0x5e1e8e*/
      RefreshLobbyPlayerSlots(0xFFFFFFFF); /*0x5e1e96*/
      GameLobby_Setup(hWnd, *(void **)&HouseClass_Player.__pad_5568[18392]); /*0x5e1ea3*/
      SetupSkirmishDialogPlayerSlot(hWnd, *(int *)&HouseClass_Player.__pad_5568[18392]); /*0x5e1eb0*/
      MapSkirmishDialogPlayerToControl(hWnd, *(int *)&HouseClass_Player.__pad_5568[18392]); /*0x5e1ebd*/
      DlgItem = GetDlgItem(hWnd, 1439); /*0x5e1eca*/
      EnableWindow(DlgItem, 0); /*0x5e1ed1*/
      *((_BYTE *)&g_MatrixTransformState + 9138) = 0; /*0x5e1edb*/
      SetGameSetupPlayerState(0, 0); /*0x5e1ee2*/
      GameSetup::DisplayPlayers(0); /*0x5e1ee9*/
      NetworkLobby::UpdatePlayerList((CampaignScore *)&HouseClass_Player.__pad_5568[8296]); /*0x5e1eee*/
      InitSkirmishDialogControls(hWnd, 1); /*0x5e1efa*/
      LoadScenarioClassByIndex(-1); /*0x5e1f02*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[10328] = 8; /*0x5e1f0a*/
      return 0; /*0x5e1f1a*/
    }
    return 0; /*0x5e1e4d*/
  }
  v13 = a3; /*0x5e1f1d*/
  v14 = (void *)(unsigned __int16)a3; /*0x5e1f23*/
  if ( (unsigned __int16)a3 <= 0x540u ) /*0x5e1f2f*/
  {
    if ( (unsigned __int16)a3 == 1344 ) /*0x5e1f35*/
    {
      ReadChatMessage((wchar_t **)&a2, (HWND)a4); /*0x5e1fb8*/
      DeleteAndZero::Alt((void **)&a2); /*0x5e1fc1*/
      if ( HIWORD(v13) == 1281 ) /*0x5e1fcf*/
      {
        SendNetworkLobbyChatMessage(hWnd, (LPARAM)Math::InitDegToRad, 61680); /*0x5e1fe6*/
        return 0; /*0x5e1ff4*/
      }
      return 0; /*0x5e1fcf*/
    }
    if ( (unsigned __int16)a3 <= 0x514u ) /*0x5e1f3d*/
    {
      if ( (unsigned __int16)a3 < 0x513u ) /*0x5e1f45*/
      {
        if ( (unsigned __int16)a3 == 2 ) /*0x5e1f50*/
        {
          if ( !*((_BYTE *)&g_MatrixTransformState + 5208) ) /*0x5e1f70*/
          {
            *(&g_MatrixTransformState + 1299) = (CoordStruct *)2; /*0x5e1f79*/
            return 0; /*0x5e1f89*/
          }
          return 0; /*0x5e1f70*/
        }
        if ( (unsigned __int16)a3 != 1296 ) /*0x5e1f57*/
          return 0; /*0x5e1f66*/
      }
      goto LABEL_49; /*0x5e1f57*/
    }
    if ( (unsigned __int16)a3 < 0x51Eu ) /*0x5e1f92*/
      return 0; /*0x5e1f92*/
    v15 = (unsigned __int16)a3 <= 0x528u; /*0x5e1f98*/
    goto LABEL_36; /*0x5e1f98*/
  }
  if ( (unsigned __int16)a3 > 0x6ABu ) /*0x5e1ffd*/
  {
    if ( (unsigned __int16)a3 < 0x76Du || (unsigned __int16)a3 > 0x774u ) /*0x5e20c9*/
      return 0; /*0x5e20c9*/
    goto LABEL_49; /*0x5e20c9*/
  }
  if ( (unsigned __int16)a3 < 0x6AAu ) /*0x5e2009*/
  {
    if ( (unsigned __int16)a3 == 1439 ) /*0x5e2015*/
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[18384] ) /*0x5e2035*/
      {
        *(_DWORD *)(**(_DWORD **)&HouseClass_Player.__pad_5568[18372] + 119) = 1; /*0x5e204d*/
        sprintf(Buffer, (ObjectClass *)&stru_830620.__pad_DFC[620], v39); /*0x5e2054*/
        Network::SendOptionsGame(Buffer); /*0x5e2060*/
        EnablePlayerSlotControls(hWnd, 0); /*0x5e206d*/
        v16 = GetDlgItem(hWnd, 1439); /*0x5e207e*/
        EnableWindow(v16, 0); /*0x5e2083*/
        InvalidateRect(v16, 0, 0); /*0x5e208e*/
        SendMessageA(v16, 0x4DCu, 0, 0); /*0x5e209e*/
        GameSetup::DisplayPlayers(0); /*0x5e20a6*/
        return 0; /*0x5e20b4*/
      }
      return 0; /*0x5e2035*/
    }
    if ( (unsigned __int16)a3 <= 0x6A0u ) /*0x5e201d*/
      return 0; /*0x5e22ee*/
    v15 = (unsigned __int16)a3 <= 0x6A8u; /*0x5e2023*/
LABEL_36:
    if ( !v15 ) /*0x5e1f9e*/
      return 0; /*0x5e1fad*/
  }
LABEL_49:
  if ( HIWORD(a3) != 1 ) /*0x5e20d5*/
    return 0; /*0x5e20d5*/
  v20 = (INIClass *)CountryCombo::IDToIndex((void *)(unsigned __int16)a3); /*0x5e20e2*/
  a4 = (unsigned int)v20; /*0x5e20e6*/
  started = (INIClass *)StartCombo::IDToIndex(v14); /*0x5e20ef*/
  a3 = (WPARAM)started; /*0x5e20f3*/
  v19 = (AbstractClass *)Dialog::SideIDToIndex(v14); /*0x5e20fc*/
  v45 = v19; /*0x5e2100*/
  eax50 = (INIClass *)Dialog::OptionIDToIndex(v14); /*0x5e2104*/
  v24 = v20; /*0x5e210b*/
  if ( (int)v20 <= (int)started ) /*0x5e210d*/
    v24 = started; /*0x5e210f*/
  if ( (int)v24 <= (int)v19 ) /*0x5e2113*/
    v24 = (INIClass *)v19; /*0x5e2115*/
  if ( (int)v24 <= (int)eax50 ) /*0x5e2119*/
    v24 = eax50; /*0x5e211b*/
  ResourceID2 = (INIClass *)GetResourceID2CSF(v24); /*0x5e2126*/
  ResourceID = (INIClass *)GetResourceIDCSF(v24); /*0x5e212f*/
  ResourceID3CSF = GetResourceID3CSF(v24); /*0x5e2138*/
  ResourceID4CSF = (void *)GetResourceID4CSF(v24); /*0x5e213a*/
  nIDDlgItem = (int)ResourceID4CSF; /*0x5e2143*/
  if ( v24 == (INIClass *)a4 ) /*0x5e2149*/
  {
    v29 = (SkirmishDialog *)hWnd; /*0x5e214b*/
    SelectLobbyCountry(hWnd, ResourceID2); /*0x5e2153*/
  }
  else if ( v24 == (INIClass *)a3 ) /*0x5e215e*/
  {
    v29 = (SkirmishDialog *)hWnd; /*0x5e2160*/
    AssignPlayerColor(hWnd, ResourceID); /*0x5e2168*/
  }
  else if ( v24 == (INIClass *)v45 ) /*0x5e2173*/
  {
    v29 = (SkirmishDialog *)hWnd; /*0x5e2175*/
    AssignPlayerSide(hWnd, ResourceID3CSF); /*0x5e217d*/
  }
  else
  {
    v29 = (SkirmishDialog *)hWnd; /*0x5e2184*/
    ProcessNetworkLobbyOption(hWnd, ResourceID4CSF); /*0x5e218c*/
  }
  v30 = (INIClass *)GetComboBoxSelected((ReferenceCounted *)v29, (int)ResourceID2, 0xFFFFFFFF); /*0x5e21a2*/
  GetComboBoxSelectedRaw((ReferenceCounted *)v29, (int)ResourceID, 0xFFFFFFFF); /*0x5e21a4*/
  SetComboBoxSelection((HWND)v29, ResourceID3CSF, 0xFFFFFFFF); /*0x5e21b1*/
  GetComboBoxSelectedRaw2((HWND)v29, nIDDlgItem, 0xFFFFFFFF); /*0x5e21c0*/
  sprintf(Buffer, (ObjectClass *)&stru_830620.__pad_DFC[604], v30); /*0x5e21d3*/
  v28 = (INIClass *)ToWideStringChar((IUnknown *)&HouseClass_Player.__pad_5568[17244]); /*0x5e21e4*/
  WOLobby_Play(v28); /*0x5e21ed*/
  return 0; /*0x5e1d19*/
}


// ==== 0x005E2340  UI_Setup_5E2340  this=-  sig=ida-proto ====
HWND sub_5E2340()
{
  HWND Current; // eax
  HWND DlgItem; // esi
  HWND result; // eax
  wchar_t *StringCSF; // eax

  Current = Dialog::GetCurrent(); /*0x5e2341*/
  DlgItem = GetDlgItem(Current, 1439); /*0x5e2354*/
  result = (HWND)SendMultiplayerStartSignal_Start(0); /*0x5e2356*/
  if ( result != (HWND)1 ) /*0x5e235e*/
  {
    SendMessageA(DlgItem, 0x4DCu, 0, 1); /*0x5e236a*/
    StringCSF = GetStringCSF(MEMORY[0x83168C], 0, MEMORY[0x831288], 5300); /*0x5e2381*/
    return Dialog::ShowMessage(-1, (size_t)StringCSF); /*0x5e2389*/
  }
  return result; /*0x5e2391*/
}


// ==== 0x005E23A0  SendMultiplayerStartSignal_Start_5E23A0  this=-  sig=ida-proto ====
LRESULT sub_5E23A0()
{
  HWND Current; // eax
  HWND DlgItem; // eax

  Current = Dialog::GetCurrent(); /*0x5e23a0*/
  DlgItem = GetDlgItem(Current, 1439); /*0x5e23ab*/
  return SendMessageA(DlgItem, 0x4DCu, 0, 0); /*0x5e23c1*/
}


// ==== 0x005E23D0  ObjectClass::Network_Check  this=ObjectClass  sig=csp ====
char __thiscall sub_5E23D0(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = this->uniqueId; /*0x5e23d0*/
  v3 = a2; /*0x5e23d3*/
  if ( a2 >= v2 ) /*0x5e23d9*/
    return 0; /*0x5e23fc*/
  v4 = v2 - 1; /*0x5e23db*/
  this->uniqueId = v4; /*0x5e23de*/
  if ( a2 < v4 ) /*0x5e23e1*/
  {
    do /*0x5e23f4*/
    {
      ++v3; /*0x5e23e7*/
      *(_DWORD *)(this->vtable2 + 4 * v3 - 4) = *(_DWORD *)(this->vtable2 + 4 * v3); /*0x5e23eb*/
    }
    while ( v3 < this->uniqueId ); /*0x5e23f4*/
  }
  return 1; /*0x5e23f9*/
}


// ==== 0x005E2410  sub_5E2410  this=-  sig=ida-proto ====
int sub_5E2410()
{
  MEMORY[0xAC0B38] = 0; /*0x5e2412*/
  MEMORY[0xAC0B3C] = 0; /*0x5e2417*/
  MEMORY[0xAC0B40] = 0; /*0x5e241c*/
  MEMORY[0xAC0B44] = 0; /*0x5e2421*/
  return 0; /*0x5e2426*/
}


// ==== 0x005E2430  sub_5E2430  this=-  sig=ida-proto ====
void sub_5E2430()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5e243c*/
  MEMORY[0xAC0CE8] = Math::Sqrt(v0 + v0); /*0x5e244e*/
}


// ==== 0x005E2460  sub_5E2460  this=-  sig=ida-proto ====
void sub_5E2460()
{
  MEMORY[0xAC1160] = MEMORY[0xAC0CE8] / 60.0; /*0x5e246c*/
}


// ==== 0x005E2480  sub_5E2480  this=-  sig=ida-proto ====
void sub_5E2480()
{
  MEMORY[0xAC10E8] = 1.0 / MEMORY[0xAC1160]; /*0x5e248c*/
}


// ==== 0x005E24A0  sub_5E24A0  this=-  sig=ida-proto ====
void sub_5E24A0()
{
  MEMORY[0xAC10D8] = 0.0174532925199433 * 45.0; /*0x5e24ac*/
}


// ==== 0x005E24C0  sub_5E24C0  this=-  sig=ida-proto ====
void sub_5E24C0()
{
  MEMORY[0xAC0D28] = 0.0174532925199433 * 60.0; /*0x5e24cc*/
}


// ==== 0x005E24E0  sub_5E24E0  this=-  sig=ida-proto ====
void sub_5E24E0()
{
  MEMORY[0xAC0AC0] = 0.0174532925199433 * 90.0; /*0x5e24ec*/
}


// ==== 0x005E2500  sub_5E2500  this=-  sig=ida-proto ====
__int64 sub_5E2500()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC0AC0] - MEMORY[0xAC0D28]); /*0x5e2512*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC0CE8] * 0.5); /*0x5e2526*/
  MEMORY[0xAC1168] = result; /*0x5e252b*/
  return result; /*0x5e2530*/
}


// ==== 0x005E2540  sub_5E2540  this=-  sig=ida-proto ====
void sub_5E2540()
{
  MEMORY[0xAC0D38] = Math::ArcTan((double)MEMORY[0xAC1168] * 0.00390625); /*0x5e2557*/
}


// ==== 0x005E2570  sub_5E2570  this=-  sig=ida-proto ====
void sub_5E2570()
{
  MEMORY[0xAC10D0] = Math::ArcTan((double)(2 * MEMORY[0xAC1168]) / MEMORY[0xAC0CE8]); /*0x5e2592*/
}


// ==== 0x005E25A0  sub_5E25A0  this=-  sig=ida-proto ====
__int64 sub_5E25A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC1168]) + 0.5); /*0x5e25bb*/
  MEMORY[0xAC1158] = result; /*0x5e25c0*/
  return result; /*0x5e25c6*/
}


// ==== 0x005E25D0  sub_5E25D0  this=-  sig=ida-proto ====
int sub_5E25D0()
{
  MEMORY[0xAC0B90] = 0; /*0x5e25d2*/
  return 0; /*0x5e25de*/
}


// ==== 0x005E25E0  sub_5E25E0  this=-  sig=ida-proto ====
int sub_5E25E0()
{
  MEMORY[0xAC0E98] = 0; /*0x5e25e2*/
  MEMORY[0xAC0E9C] = 0; /*0x5e25e7*/
  MEMORY[0xAC0EA0] = 0; /*0x5e25ec*/
  return 0; /*0x5e25f1*/
}


// ==== 0x005E2600  sub_5E2600  this=-  sig=ida-proto ====
int sub_5E2600()
{
  MEMORY[0xAC1150] = 0; /*0x5e2605*/
  MEMORY[0xAC1148] = 128; /*0x5e260f*/
  MEMORY[0xAC114C] = 128; /*0x5e2614*/
  return 128; /*0x5e2619*/
}


// ==== 0x005E2620  String::ComputeHash  this=ObjectClass  sig=csp ====
unsigned int __thiscall String_ComputeHash(const char **this)
{
  unsigned int v2; // esi
  unsigned int i; // edi
  char *v4; // eax

  v2 = String::Length(this); /*0x5e262c*/
  for ( i = 0; i < String::Length(this); ++i ) /*0x5e2630*/
  {
    v4 = String::GetOrEmpty((char **)this); /*0x5e263b*/
    v2 = ((i + v4[i] + v2) >> 24) ^ ((i + v4[i] + v2) << 8); /*0x5e2650*/
  }
  return v2; /*0x5e2660*/
}


// ==== 0x005E2670  GameSetup::CompareWideString  this=GameSetup  sig=csp ====
const wchar_t *__thiscall GameSetup::CompareWideString(const wchar_t **this)
{
  const wchar_t *v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // esi

  v2 = WideString::Length(this); /*0x5e267c*/
  v3 = 0; /*0x5e267e*/
  if ( WideString::Length(this) ) /*0x5e2680*/
  {
    do /*0x5e26ae*/
    {
      v4 = (unsigned int)v2 + v3 + *(unsigned __int16 *)&WideString::GetOrEmpty((wchar_t **)this)->__pad_0[2 * v3]; /*0x5e2698*/
      v2 = (const wchar_t *)(HIBYTE(v4) ^ (v4 << 8)); /*0x5e26a4*/
      ++v3; /*0x5e26a6*/
    }
    while ( v3 < (unsigned int)WideString::Length(this) ); /*0x5e26ae*/
  }
  return v2; /*0x5e26b2*/
}


// ==== 0x005E26C0  Dialog::FindGameUI  this=Dialog  sig=csp ====
int Dialog_FindGameUI()
{
  int result; // eax

  result = Dialog::FindByHandle((void *)0xC2); /*0x5e26c5*/
  if ( !result ) /*0x5e26cc*/
  {
    result = Dialog::FindByHandle((void *)0xC9); /*0x5e26d3*/
    if ( !result ) /*0x5e26da*/
    {
      result = Dialog::FindByHandle((void *)0xBC); /*0x5e26e1*/
      if ( !result ) /*0x5e26e8*/
        return Dialog::FindByHandle((void *)0xBD); /*0x5e26ef*/
    }
  }
  return result; /*0x5e26f4*/
}


// ==== 0x005E2700  Dialog::ShowMessage  this=AbstractClass  sig=csp ====
void *Dialog::ShowMessage(int a1, int BufferCount, ...)
{
  void *result; // eax
  void *Current; // esi
  int v4; // eax
  _BYTE Buffer[2048]; // [esp+8h] [ebp-800h] BYREF
  va_list Format; // [esp+814h] [ebp+Ch] BYREF

  va_start(Format, BufferCount);
  memset(Buffer, 0, sizeof(Buffer)); /*0x5e2717*/
  vswprintf((#72 *const)Buffer, BufferCount, (const #72 *const)Format); /*0x5e272a*/
  result = (void *)Dialog::GetCurrent(); /*0x5e2732*/
  if ( result ) /*0x5e2739*/
  {
    Current = (void *)Dialog::GetCurrent(); /*0x5e2746*/
    v4 = ((int (__stdcall *)(void *, int))GetDlgItem)(Current, 1343); /*0x5e274e*/
    if ( v4 ) /*0x5e2752*/
    {
      return (void *)DrawDialogText(a1, Buffer, v4); /*0x5e276d*/
    }
    else
    {
      while ( 1 ) /*0x5e2756*/
      {
        result = (void *)Dialog::FindByPtr(Current); /*0x5e2756*/
        Current = result; /*0x5e275b*/
        if ( !result ) /*0x5e275f*/
          break; /*0x5e275f*/
        v4 = ((int (__stdcall *)(void *, int))GetDlgItem)(result, 1343); /*0x5e2767*/
        if ( v4 ) /*0x5e276b*/
          return (void *)DrawDialogText(a1, Buffer, v4); /*0x5e276b*/
      }
    }
  }
  return result; /*0x5e277e*/
}


// ==== 0x005E2790  Dialog::ShowStatusText  this=AbstractClass  sig=csp ====
int Dialog::ShowStatusText(int a1, int BufferCount, ...)
{
  int result; // eax
  void *Current; // esi
  int v4; // eax
  _BYTE Buffer[2048]; // [esp+8h] [ebp-800h] BYREF
  va_list Format; // [esp+814h] [ebp+Ch] BYREF

  va_start(Format, BufferCount);
  memset(Buffer, 0, sizeof(Buffer)); /*0x5e27a7*/
  vswprintf((#72 *const)Buffer, BufferCount, (const #72 *const)Format); /*0x5e27ba*/
  result = Dialog::GetCurrent(); /*0x5e27c2*/
  if ( result ) /*0x5e27c9*/
  {
    Current = (void *)Dialog::GetCurrent(); /*0x5e27d6*/
    v4 = ((int (__stdcall *)(void *, int))GetDlgItem)(Current, 1461); /*0x5e27de*/
    if ( v4 ) /*0x5e27e2*/
    {
      return DrawDialogText(a1, Buffer, v4); /*0x5e27fd*/
    }
    else
    {
      while ( 1 ) /*0x5e27e6*/
      {
        result = Dialog::FindByPtr(Current); /*0x5e27e6*/
        Current = (void *)result; /*0x5e27eb*/
        if ( !result ) /*0x5e27ef*/
          break; /*0x5e27ef*/
        v4 = ((int (__stdcall *)(int, int))GetDlgItem)(result, 1461); /*0x5e27f7*/
        if ( v4 ) /*0x5e27fb*/
          return DrawDialogText(a1, Buffer, v4); /*0x5e27fb*/
      }
    }
  }
  return result; /*0x5e280e*/
}


// ==== 0x005E2820  DrawDialogText  this=ObjectClass  sig=csp ====
int __fastcall DrawDialogText(ObjectClass *aP0, const wchar_t *a1, HWND hWnd)
{
  BlowStraw *i; // esi
  HWND v4; // ebx
  signed int v5; // edi
  wchar_t *v6; // eax
  int v7; // eax
  unsigned __int16 *v8; // ebx
  int v9; // ecx
  int v10; // ebx
  wint_t *v11; // ebp
  int v13; // [esp+10h] [ebp-28h]
  AbstractClass *v14; // [esp+14h] [ebp-24h]
  HDC hDC; // [esp+1Ch] [ebp-1Ch]
  int v17; // [esp+20h] [ebp-18h] BYREF
  int v18; // [esp+24h] [ebp-14h] BYREF
  struct tagRECT Rect; // [esp+28h] [ebp-10h] BYREF

  i = (BlowStraw *)a1; /*0x5e2826*/
  v4 = hWnd; /*0x5e2833*/
  v5 = wcslen(a1); /*0x5e2840*/
  v13 = 18; /*0x5e2842*/
  ScreenDialogToClient(hWnd, &Rect); /*0x5e284a*/
  if ( SendMessageA(hWnd, 0x4A0u, 0, 0) ) /*0x5e285f*/
    v13 = 1; /*0x5e2865*/
  hDC = GetDC(hWnd); /*0x5e287d*/
  SendMessageA(hWnd, 0x49Eu, 0, (LPARAM)hDC); /*0x5e2881*/
  if ( v5 ) /*0x5e2885*/
  {
    do /*0x5e2980*/
    {
      if ( i ) /*0x5e288d*/
      {
        v6 = wcschr(i, (CCINIClass *)0xA); /*0x5e2892*/
        if ( v6 ) /*0x5e289c*/
        {
          v7 = (((char *)v6 - (char *)i) >> 1) + 1; /*0x5e28a2*/
          if ( v5 >= v7 ) /*0x5e28a5*/
            v5 = v7; /*0x5e28a7*/
        }
      }
      v8 = _wcsdup((CampaignScore *)i); /*0x5e28b2*/
      v8[v5] = 0; /*0x5e28c2*/
      Text::Layout(::aP0, v8, (AbstractClass *)&v17, (AbstractClass *)&v18, 0); /*0x5e28d0*/
      free(v8); /*0x5e28d6*/
      v9 = Rect.right - Rect.left - v13; /*0x5e28e9*/
      if ( v17 < v9 - 4 ) /*0x5e28f7*/
      {
        UI_Draw(hWnd, (wchar_t *)i, v5, (LPARAM)aP0); /*0x5e295d*/
        for ( i = (BlowStraw *)((char *)i + 2 * v5); *(_WORD *)i->__pad_0 == 32; i = (BlowStraw *)((char *)i + 2) ) /*0x5e2968*/
          ; /*0x5e296a*/
        v5 = wcslen((const wchar_t *)i); /*0x5e297c*/
      }
      else
      {
        if ( v17 / 2 <= v9 ) /*0x5e2900*/
        {
          v14 = (AbstractClass *)1; /*0x5e290f*/
        }
        else
        {
          v14 = (AbstractClass *)10; /*0x5e2902*/
          v5 -= 10; /*0x5e290a*/
        }
        v10 = v5 - 1; /*0x5e2917*/
        if ( v5 - 1 <= 0 ) /*0x5e291c*/
          goto LABEL_18; /*0x5e291c*/
        v11 = (wint_t *)((char *)i + 2 * v10); /*0x5e291e*/
        while ( iswgraph(*v11) ) /*0x5e2930*/
        {
          --v10; /*0x5e2932*/
          --v11; /*0x5e2933*/
          if ( v10 <= 0 ) /*0x5e2938*/
          {
            v5 -= (int)v14; /*0x5e293a*/
            goto LABEL_23; /*0x5e2940*/
          }
        }
        if ( v10 == -1 ) /*0x5e2945*/
LABEL_18:
          v10 = v5 - (_DWORD)v14; /*0x5e294b*/
        v5 = v10; /*0x5e294d*/
      }
LABEL_23:
      ; /*0x5e297e*/
    }
    while ( v5 ); /*0x5e2980*/
    v4 = hWnd; /*0x5e2986*/
  }
  return ReleaseDC(v4, hDC); /*0x5e2996*/
}


// ==== 0x005E29A0  UI_Draw  this=-  sig=csp ====
LRESULT __fastcall UI_Draw(HWND hWnd, wchar_t *Source, DropListClass *Count, LPARAM lParam)
{
  wchar_t *v5; // eax
  DropListClass *v6; // ebx
  LRESULT v7; // ebp
  bool v8; // bl
  LRESULT v9; // eax
  LRESULT v11; // [esp+10h] [ebp-14h]
  struct tagRECT Rect; // [esp+14h] [ebp-10h] BYREF
  signed int Counta; // [esp+28h] [ebp+4h]

  memset(&g_MatrixTransformState + 1315, 0, 0x400u); /*0x5e29b5*/
  wcsncpy((wchar_t *)&g_MatrixTransformState + 2630, Source, Count); /*0x5e29c2*/
  v5 = wcschr((BlowStraw *)(&g_MatrixTransformState + 1315), (CCINIClass *)0xD); /*0x5e29ce*/
  if ( v5 || (v5 = wcschr((BlowStraw *)(&g_MatrixTransformState + 1315), (CCINIClass *)0xA)) != 0 ) /*0x5e29eb*/
    *v5 = 0; /*0x5e29ed*/
  v11 = SendMessageA(hWnd, 0x49Du, 0, 1); /*0x5e2a0e*/
  v6 = (DropListClass *)SendMessageA(hWnd, 0x18Eu, 0, 0); /*0x5e2a14*/
  v7 = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x5e2a22*/
  Counta = SendMessageA(hWnd, 0x1A1u, (WPARAM)v6, 0); /*0x5e2a35*/
  GetWindowRect(hWnd, &Rect); /*0x5e2a39*/
  v8 = v7 - (int)v6 <= (Rect.bottom - Rect.top) / Counta; /*0x5e2a54*/
  if ( v7 > 500 ) /*0x5e2a5d*/
  {
    SendMessageA(hWnd, 0x182u, 0, 0); /*0x5e2a69*/
    --v7; /*0x5e2a6b*/
  }
  v9 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)(&g_MatrixTransformState + 1315)); /*0x5e2a79*/
  if ( lParam != -1 ) /*0x5e2a82*/
    SendMessageA(hWnd, 0x498u, v9, lParam); /*0x5e2a8c*/
  if ( v8 ) /*0x5e2a90*/
    SendMessageA(hWnd, 0x197u, v7, 0); /*0x5e2a9b*/
  return SendMessageA(hWnd, 0x49Du, 0, v11); /*0x5e2aac*/
}


// ==== 0x005E2AC0  sub_5E2AC0  this=-  sig=ida-proto ====
void sub_5E2AC0()
{
  HWND Current; // edi
  HWND DlgItem; // esi
  HWND v2; // eax
  LRESULT v3; // edi
  wchar_t *v4; // eax
  int v5; // [esp+Ch] [ebp-4h] BYREF

  if ( Dialog::GetCurrent() ) /*0x5e2ac4*/
  {
    Current = Dialog::GetCurrent(); /*0x5e2adc*/
    DlgItem = GetDlgItem(Current, 1343); /*0x5e2ae6*/
    if ( DlgItem ) /*0x5e2aea*/
    {
LABEL_5:
      v3 = SendMessageA(DlgItem, 0x18Bu, 0, 0); /*0x5e2b0b*/
      unknown_libname_74(&v5); /*0x5e2b23*/
      if ( v3 > 0 ) /*0x5e2b2a*/
        UI_Assign_623F60(DlgItem, v3 - 1, (void **)&v5); /*0x5e2b36*/
      if ( (unsigned int)WideString::Length((const wchar_t **)&v5) >= 0x24 ) /*0x5e2b47*/
      {
        WideString::Assign_Alt((void **)&v5, MEMORY[0x831774]); /*0x5e2b6e*/
      }
      else
      {
        SendMessageA(DlgItem, 0x182u, v3 - 1, 0); /*0x5e2b53*/
        WideString::Append2((wchar_t **)&v5, MEMORY[0x831774]); /*0x5e2b5e*/
      }
      v4 = WideString::GetOrEmpty((wchar_t **)&v5); /*0x5e2b78*/
      DrawDialogText(-1, v4, DlgItem); /*0x5e2b82*/
      InvalidateRect(DlgItem, 0, 0); /*0x5e2b8c*/
      DeleteAndZero::Alt((void **)&v5); /*0x5e2b96*/
    }
    else
    {
      while ( 1 ) /*0x5e2aee*/
      {
        v2 = (HWND)Dialog::FindByPtr(Current); /*0x5e2aee*/
        Current = v2; /*0x5e2af3*/
        if ( !v2 ) /*0x5e2af7*/
          break; /*0x5e2af7*/
        DlgItem = GetDlgItem(v2, 1343); /*0x5e2b05*/
        if ( DlgItem ) /*0x5e2b09*/
          goto LABEL_5; /*0x5e2b09*/
      }
    }
  }
}


// ==== 0x005E2BA0  Network::processQueue  this=Network  sig=csp ====
int __thiscall sub_5E2BA0(_BYTE *this)
{
  int result; // eax
  HouseClass *v2; // esi
  int v3; // edi
  _BYTE *v4; // edx

  result = 0; /*0x5e2ba6*/
  if ( HouseClass_Count > 0 ) /*0x5e2baa*/
  {
    v2 = HouseClass_Array; /*0x5e2bae*/
    v3 = HouseClass_Count; /*0x5e2bb5*/
    do /*0x5e2bda*/
    {
      v4 = *(_BYTE **)v2->__pad_0; /*0x5e2bb7*/
      if ( *(_DWORD *)v2->__pad_0 && v4[492] && !v4[501] && v4 != this ) /*0x5e2bd3*/
        ++result; /*0x5e2bd5*/
      v2 = (HouseClass *)((char *)v2 + 4); /*0x5e2bd6*/
      --v3; /*0x5e2bd9*/
    }
    while ( v3 ); /*0x5e2bda*/
  }
  return result; /*0x5e2bdf*/
}


// ==== 0x005E2BE0  Network::CountDisconnectedHouses  this=Network  sig=csp ====
int __thiscall NetworkLobby_ShowError(void *this)
{
  int v1; // eax
  int v2; // ecx
  int v3; // ebp
  char v4; // bl
  int v5; // edi
  int v6; // esi
  int v8; // [esp+0h] [ebp-Ch]
  int v9; // [esp+4h] [ebp-8h]

  v1 = HouseClass_Count; /*0x5e2be3*/
  v2 = 0; /*0x5e2bee*/
  v8 = 0; /*0x5e2bf2*/
  v9 = 0; /*0x5e2bf6*/
  if ( HouseClass_Count <= 0 ) /*0x5e2bfa*/
    return 0; /*0x5e2cc5*/
  do /*0x5e2cb3*/
  {
    v3 = *((_DWORD *)HouseClass_Array + v2); /*0x5e2c0a*/
    if ( v3 && !*(_BYTE *)(v3 + 501) && !*(_BYTE *)(*(_DWORD *)(v3 + 52) + 422) && (void *)v3 != this ) /*0x5e2c34*/
    {
      v4 = 0; /*0x5e2c36*/
      v5 = 0; /*0x5e2c38*/
      if ( v1 <= 0 ) /*0x5e2c3c*/
        goto LABEL_20; /*0x5e2c3c*/
      do /*0x5e2c9e*/
      {
        if ( v5 != v9 ) /*0x5e2c42*/
        {
          v6 = *((_DWORD *)HouseClass_Array + v5); /*0x5e2c4a*/
          if ( v6 ) /*0x5e2c4f*/
          {
            if ( !*(_BYTE *)(v6 + 501) /*0x5e2c7d*/
              && !*(_BYTE *)(*(_DWORD *)(v6 + 52) + 422)
              && (void *)v6 != this
              && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)v3, *((#375 **)HouseClass_Array + v5))
              && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)v6, (#375 *)v3) )
            {
              if ( v5 > v9 && !v4 ) /*0x5e2c8e*/
                ++v8; /*0x5e2c90*/
              v4 = 1; /*0x5e2c94*/
            }
          }
        }
        v1 = HouseClass_Count; /*0x5e2c96*/
        ++v5; /*0x5e2c9b*/
      }
      while ( v5 < HouseClass_Count ); /*0x5e2c9e*/
      if ( !v4 ) /*0x5e2ca2*/
LABEL_20:
        ++v8; /*0x5e2ca4*/
    }
    v2 = ++v9; /*0x5e2cac*/
  }
  while ( v9 < v1 ); /*0x5e2cb3*/
  return v8; /*0x5e2cc1*/
}


// ==== 0x005E2CD0  ShowDialogConfirm  this=-  sig=csp ====
int __fastcall ShowDialogConfirm(CampaignScore *aP0, int nIDDlgItem, unsigned __int8 (*a3)(), char a4)
{
  CampaignScore *v4; // ebp
  int edi4; // edi
  SkirmishDialog *v6; // esi
  ObjectClass *DlgItem; // ebx
  LONG WindowLongA; // eax
  LONG (__stdcall *v10)(HWND, int); // ebp
  HWND v11; // ebx
  LONG v12; // eax
  HWND v13; // eax
  HWND v14; // ebx
  LONG v15; // eax
  HWND v16; // ebx
  LONG v17; // eax
  HWND v18; // eax

  v4 = aP0; /*0x5e2cd3*/
  if ( aP0 && wcslen((const wchar_t *)aP0) )
  {
    if ( a4 )
    {
      edi4 = 251; /*0x5e2cfe*/
    }
    else if ( nIDDlgItem )
    {
      if ( nIDDlgItem == 1 )
        edi4 = 252; /*0x5e2d15*/
      else
        edi4 = nIDDlgItem != 4 ? 251 : 294;
    }
    else
    {
      edi4 = 208; /*0x5e2d09*/
    }
    v6 = (SkirmishDialog *)CreateDialogIndirect(g_hInstance, (HWND)edi4, g_hWnd, sub_5E2E40, 0); /*0x5e2d48*/
    SetupDialog((HWND)v6, edi4); /*0x5e2d4e*/
    switch ( nIDDlgItem ) /*0x5e2d5b*/
    {
      case 0: /*0x5e2d5b*/
        DlgItem = (ObjectClass *)GetDlgItem((HWND)v6, 1); /*0x5e2d62*/
        WindowLongA = GetWindowLongA((HWND)DlgItem, -16); /*0x5e2d67*/
        SetWindowLongA((HWND)DlgItem, -16, WindowLongA | 0x10000000); /*0x5e2d76*/
        if ( a4 ) /*0x5e2d82*/
          UI_Get_60B350((HWND)DlgItem); /*0x5e2d86*/
        goto LABEL_18; /*0x5e2d8b*/
      case 1: /*0x5e2d5b*/
        v10 = GetWindowLongA; /*0x5e2d96*/
        v11 = GetDlgItem((HWND)v6, 1); /*0x5e2d9c*/
        v12 = GetWindowLongA(v11, -16); /*0x5e2da1*/
        SetWindowLongA(v11, -16, v12 | 0x10000000); /*0x5e2dac*/
        v13 = GetDlgItem((HWND)v6, 2); /*0x5e2db4*/
        break;
      case 4: /*0x5e2d5b*/
        v10 = GetWindowLongA; /*0x5e2dc0*/
        v14 = GetDlgItem((HWND)v6, 6); /*0x5e2dc6*/
        v15 = GetWindowLongA(v14, -16); /*0x5e2dcb*/
        SetWindowLongA(v14, -16, v15 | 0x10000000); /*0x5e2dd6*/
        v13 = GetDlgItem((HWND)v6, 7); /*0x5e2ddf*/
        break;
      default:
LABEL_18:
        v18 = GetDlgItem((HWND)v6, 1456); /*0x5e2dfb*/
        SendMessageA(v18, 0x4B2u, 0, (LPARAM)v4); /*0x5e2e0c*/
        ShowWindow((HWND)v6, 1); /*0x5e2e15*/
        return MessageDialogLoopAlt((HWND)v6, a3, 0, 1, 1); /*0x5e2e31*/
    }
    v16 = v13; /*0x5e2de1*/
    v17 = v10(v13, -16); /*0x5e2de6*/
    SetWindowLongA(v16, -16, v17 | 0x10000000); /*0x5e2df1*/
    v4 = aP0; /*0x5e2df7*/
    goto LABEL_18; /*0x5e2df7*/
  }
  return 0; /*0x5e2e2e*/
}


// ==== 0x005E2E40  sub_5E2E40  this=-  sig=csp ====
INT_PTR __stdcall sub_5E2E40(HWND hWnd, UINT a2, WPARAM a3, char *a4)
{
  INT_PTR result; // eax

  if ( a2 <= 0x2B ) /*0x5e2e47*/
  {
    switch ( a2 ) /*0x5e2e49*/
    {
      case 0x2Bu: /*0x5e2e49*/
        Dialog::Resize(a4); /*0x5e2e86*/
        return 1; /*0x5e2e90*/
      case 0xFu: /*0x5e2e49*/
        Dialog::DrawBackground(hWnd); /*0x5e2e64*/
        Dialog::StopBink(hWnd); /*0x5e2e6b*/
        ValidateRect(hWnd, 0); /*0x5e2e73*/
        return 1; /*0x5e2e7f*/
      case 0x14u: /*0x5e2e49*/
        return 1; /*0x5e2e5a*/
    }
    return 0; /*0x5e2e53*/
  }
  if ( a2 != 273 ) /*0x5e2e98*/
    return 0; /*0x5e2ecc*/
  switch ( (__int16)a3 ) /*0x5e2eb4*/
  {
    case 1: /*0x5e2eb4*/
    case 2: /*0x5e2eb4*/
    case 6: /*0x5e2eb4*/
    case 7: /*0x5e2eb4*/
      CloseDialog(hWnd, (unsigned __int16)a3); /*0x5e2ebf*/
      result = 1; /*0x5e2ec4*/
      break; /*0x5e2ec9*/
    default:
      return 0;
  }
  return result; /*0x5e2e5a*/
}


// ==== 0x005E2EF0  SetDialogPlayerName  this=SkirmishDialog  sig=csp ====
void __fastcall SetDialogPlayerName(HWND hDlg, int a2)
{
  HWND DlgItem; // edi
  wchar_t *v4; // eax

  if ( a2 ) /*0x5e2ef5*/
  {
    DlgItem = GetDlgItem(hDlg, 1772); /*0x5e2f07*/
    v4 = WideString::GetOrEmpty_Alt((wchar_t **)(a2 + 32)); /*0x5e2f09*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v4); /*0x5e2f17*/
  }
}


// ==== 0x005E2F60  Dialog::ShowPlayerName  this=SkirmishDialog  sig=csp ====
int __thiscall Dialog::ShowPlayerName(void *this)
{
  int v1; // eax

  v1 = ((int (__stdcall *)(void *, int))GetDlgItem)(this, 1448); /*0x5e2f66*/
  return ((int (__stdcall *)(int, int, _DWORD, int))SendMessageA)(v1, 1202, 0, 11055906); /*0x5e2f7f*/
}


// ==== 0x005E2F80  Skirmish_Setup  this=-  sig=ida-proto ====
int sub_5E2F80()
{
  int result; // eax

  result = MultiplayerGameMode::Find(*(void **)MEMORY[0xA8B250]); /*0x5e2f86*/
  if ( !result ) /*0x5e2f8d*/
    return MultiplayerGameMode::GetFirst(); /*0x5e2f8f*/
  return result; /*0x5e2f94*/
}


// ==== 0x005E2FA0  ObjectClass::Event_Handle  this=ObjectClass  sig=csp ====
WPARAM sub_5E2FA0()
{
  WPARAM result; // eax
  HWND Current; // esi

  result = Dialog::GetCurrentType(); /*0x5e2fa2*/
  if ( result == 107 ) /*0x5e2faa*/
  {
    Current = Dialog::GetCurrent(); /*0x5e2fb7*/
    result = SendDlgItemMessageA(Current, 1771, 0x188u, 0, 0); /*0x5e2fc8*/
    if ( result != -1 ) /*0x5e2fcd*/
    {
      result = SendDlgItemMessageA(Current, 1771, 0x199u, result, 0); /*0x5e2fdd*/
      if ( result ) /*0x5e2fe1*/
        return (*(int (__thiscall **)(WPARAM))(*(_DWORD *)result + 148))(result); /*0x5e2fe7*/
    }
  }
  else if ( MEMORY[0xA8B23C] ) /*0x5e2ff8*/
  {
    return (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 148))(MEMORY[0xA8B23C]); /*0x5e2ffc*/
  }
  return result; /*0x5e2fed*/
}


// ==== 0x005E3010  InitSkirmishDialogControls  this=SkirmishDialog  sig=csp ====
LRESULT __fastcall InitSkirmishDialogControls(HWND hDlg, int a2)
{
  _DWORD *WDTTerritoryClass; // eax
  HWND DlgItem; // eax
  HWND v5; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  int v12; // [esp+Ch] [ebp-1Ch]
  LPARAM lParam; // [esp+10h] [ebp-18h]
  LPARAM v14; // [esp+14h] [ebp-14h]
  WPARAM wParam; // [esp+18h] [ebp-10h] BYREF
  int v16; // [esp+1Ch] [ebp-Ch]
  _DWORD v17[2]; // [esp+20h] [ebp-8h] BYREF

  v14 = MEMORY[0xA8B270]; /*0x5e3022*/
  lParam = MEMORY[0xA8B25C]; /*0x5e3032*/
  v12 = MEMORY[0xA8B268]; /*0x5e3038*/
  if ( a2 ) /*0x5e303c*/
  {
    ComPtr::Constructor(&wParam); /*0x5e3047*/
    wParam = (WPARAM)&vt_rc_ptr_WDTTerritory; /*0x5e3059*/
    if ( MEMORY[0xA8B238][0] == 4 && MEMORY[0xA8B244] == 3 ) /*0x5e3066*/
    {
      WDTTerritoryClass = FindWDTTerritoryClass(v17, *(int *)MEMORY[0xA8B240]); /*0x5e3072*/
      ComPtr::Set(&wParam, WDTTerritoryClass[1]); /*0x5e307f*/
      v17[0] = &vt_rc_ptr_WDTTerritory; /*0x5e3088*/
      ComPtr::Release(v17); /*0x5e308c*/
    }
    if ( v16 ) /*0x5e3097*/
    {
      DlgItem = GetDlgItem(hDlg, 1348); /*0x5e30ab*/
      EnableWindow(DlgItem, 0); /*0x5e30b4*/
      v5 = GetDlgItem(hDlg, 1748); /*0x5e30be*/
      EnableWindow(v5, 0); /*0x5e30c1*/
      if ( (*(_DWORD *)(v16 + 60) & 0x20000) == 0 ) /*0x5e30ce*/
      {
        v6 = GetDlgItem(hDlg, 1026); /*0x5e30d8*/
        EnableWindow(v6, 0); /*0x5e30db*/
      }
      if ( (BYTE1(*(_DWORD *)(v16 + 60)) & 0x80u) == 0 ) /*0x5e30e7*/
      {
        v7 = GetDlgItem(hDlg, 1359); /*0x5e30f1*/
        EnableWindow(v7, 0); /*0x5e30f4*/
      }
      if ( (*(_DWORD *)(v16 + 60) & 0x400) == 0 ) /*0x5e3100*/
      {
        v8 = GetDlgItem(hDlg, 1358); /*0x5e310a*/
        EnableWindow(v8, 0); /*0x5e310d*/
      }
      if ( (*(_BYTE *)(v16 + 60) & 0x20) == 0 ) /*0x5e3117*/
      {
        v9 = GetDlgItem(hDlg, 1000); /*0x5e3121*/
        EnableWindow(v9, 0); /*0x5e3124*/
      }
      if ( (*(_DWORD *)(v16 + 60) & 0x100) == 0 ) /*0x5e3130*/
      {
        v10 = GetDlgItem(hDlg, 1357); /*0x5e313a*/
        EnableWindow(v10, 0); /*0x5e313d*/
      }
    }
    SendDlgItemMessageA(hDlg, 1321, 0x406u, 1u, 393216); /*0x5e3151*/
    SendDlgItemMessageA( /*0x5e317d*/
      hDlg,
      1026,
      0x406u,
      1u,
      *(unsigned __int16 *)&MEMORY[0x8871E0]->__pad_C3C[2116]
    | (*(unsigned __int16 *)&MEMORY[0x8871E0]->__pad_C3C[2124] << 16));
    SendDlgItemMessageA(hDlg, 1026, 0x4ABu, 0, *(_DWORD *)&MEMORY[0x8871E0]->__pad_C3C[2128]); /*0x5e3198*/
    SendDlgItemMessageA( /*0x5e31c4*/
      hDlg,
      1359,
      0x406u,
      1u,
      *(unsigned __int16 *)&MEMORY[0x8871E0]->__pad_C3C[2132]
    | (*(unsigned __int16 *)&MEMORY[0x8871E0]->__pad_C3C[2140] << 16));
    wParam = (WPARAM)&vt_rc_ptr_WDTTerritory; /*0x5e31ca*/
    ComPtr::Release(&wParam); /*0x5e31d2*/
  }
  SendDlgItemMessageA(hDlg, 1321, 0x405u, 1u, 6 - v12); /*0x5e31f1*/
  SendDlgItemMessageA(hDlg, 1026, 0x405u, 1u, lParam); /*0x5e3205*/
  SendDlgItemMessageA(hDlg, 1359, 0x405u, 1u, v14); /*0x5e3219*/
  wParam = 0; /*0x5e3223*/
  v16 = 1; /*0x5e322b*/
  SendDlgItemMessageA(hDlg, 1358, 0xF1u, *(&wParam + (unsigned __int8)MEMORY[0xA8B262]), 0); /*0x5e3245*/
  SendDlgItemMessageA(hDlg, 1690, 0xF1u, *(&wParam + (unsigned __int8)MEMORY[0xA8B263]), 0); /*0x5e3261*/
  SendDlgItemMessageA(hDlg, 1693, 0xF1u, *(&wParam + (unsigned __int8)MEMORY[0xA8B264]), 0); /*0x5e327f*/
  SendDlgItemMessageA(hDlg, 1000, 0xF1u, *(&wParam + (unsigned __int8)MEMORY[0xA8B320]), 0); /*0x5e329f*/
  return SendDlgItemMessageA(hDlg, 1357, 0xF1u, *(&wParam + (unsigned __int8)MEMORY[0xA8B261]), 0); /*0x5e32bd*/
}


// ==== 0x005E32D0  CheckGameSettingsChanged  this=-  sig=ida-proto ====
char __fastcall Game_CheckSettingsChanged(char a1, char a2)
{
  char v2; // bl
  char result; // al
  char Buffer[520]; // [esp+8h] [ebp-208h] BYREF

  v2 = 0; /*0x5e32e1*/
  if ( time(0) != MEMORY[0xAC11B8] ) /*0x5e32f1*/
    goto LABEL_5; /*0x5e32f1*/
  if ( a1 ) /*0x5e32fb*/
    MEMORY[0xAC11BC] = 1; /*0x5e32fd*/
  result = a2; /*0x5e3304*/
  if ( a2 ) /*0x5e330a*/
  {
LABEL_5:
    if ( MEMORY[0xAC11BC] ) /*0x5e3317*/
      a1 = 1; /*0x5e3319*/
    MEMORY[0xAC11BC] = 0; /*0x5e3323*/
    if ( MEMORY[0xAC116C] ) /*0x5e332e*/
    {
      if ( time(0) - MEMORY[0xAC11B8] >= 5 ) /*0x5e3343*/
        goto LABEL_11; /*0x5e3343*/
    }
    else if ( time(0) - MEMORY[0xAC11B8] >= 2 ) /*0x5e335a*/
    {
LABEL_11:
      v2 = 1; /*0x5e335c*/
    }
    if ( a1 ) /*0x5e3364*/
      v2 = 1; /*0x5e3366*/
    if ( MEMORY[0x8316D8] != MEMORY[0xA8B268] ) /*0x5e3375*/
      v2 = 1; /*0x5e3377*/
    if ( MEMORY[0x8316DC] != MEMORY[0xA8B25C] ) /*0x5e3386*/
      v2 = 1; /*0x5e3388*/
    if ( MEMORY[0x8316E0] != MEMORY[0xA8B270] ) /*0x5e3397*/
      v2 = 1; /*0x5e3399*/
    if ( MEMORY[0xAC11BD] != MEMORY[0xA8B262] ) /*0x5e33a8*/
      v2 = 1; /*0x5e33aa*/
    if ( MEMORY[0xAC11BE] != MEMORY[0xA8B263] ) /*0x5e33b9*/
      v2 = 1; /*0x5e33bb*/
    if ( MEMORY[0xAC11BF] != (_BYTE)MEMORY[0xA8B264] ) /*0x5e33ca*/
      v2 = 1; /*0x5e33cc*/
    if ( MEMORY[0xAC11C0] != (_BYTE)MEMORY[0xA8B320] ) /*0x5e33db*/
      v2 = 1; /*0x5e33dd*/
    if ( MEMORY[0xAC11C1] != MEMORY[0xA8B261] ) /*0x5e33ec*/
      v2 = 1; /*0x5e33ee*/
    MEMORY[0xAC1146] = 0; /*0x5e33fa*/
    if ( _wcsicmp(&MEMORY[0xAC10F0], (const wchar_t *)&MEMORY[0xA8B320] + 1) ) /*0x5e3403*/
      v2 = 1; /*0x5e340f*/
    MEMORY[0xAC0CFD] = 0; /*0x5e341b*/
    if ( _strcmpi(MEMORY[0xAC0CF0], &MEMORY[0xA8B8E0]) ) /*0x5e3422*/
      v2 = 1; /*0x5e342e*/
    MEMORY[0xAC0D20] = 0; /*0x5e343a*/
    if ( _strcmpi(MEMORY[0xAC0D00], &MEMORY[0xA8BAE2]) ) /*0x5e3441*/
      v2 = 1; /*0x5e344d*/
    if ( MEMORY[0x8316E8] != MEMORY[0xA8BB04] ) /*0x5e345c*/
      v2 = 1; /*0x5e345e*/
    result = MEMORY[0x8316E4]; /*0x5e3460*/
    if ( MEMORY[0x8316E4] != (_BYTE)MEMORY[0xA8BB08] || v2 ) /*0x5e3471*/
    {
      MEMORY[0xAC11B8] = time(0); /*0x5e348c*/
      MEMORY[0x8316D8] = MEMORY[0xA8B268]; /*0x5e3496*/
      MEMORY[0x8316DC] = MEMORY[0xA8B25C]; /*0x5e34a2*/
      MEMORY[0x8316E0] = MEMORY[0xA8B270]; /*0x5e34ae*/
      MEMORY[0xAC11BD] = MEMORY[0xA8B262]; /*0x5e34b8*/
      MEMORY[0xAC11BE] = MEMORY[0xA8B263]; /*0x5e34c4*/
      MEMORY[0xAC11BF] = MEMORY[0xA8B264]; /*0x5e34da*/
      MEMORY[0xAC11C0] = MEMORY[0xA8B320]; /*0x5e34df*/
      MEMORY[0xAC11C1] = MEMORY[0xA8B261]; /*0x5e34e5*/
      wcscpy(&MEMORY[0xAC10F0], (const wchar_t *)&MEMORY[0xA8B320] + 1); /*0x5e34eb*/
      strcpy(MEMORY[0xAC0D00], &MEMORY[0xA8BAE2]); /*0x5e350f*/
      MEMORY[0x8316E8] = MEMORY[0xA8BB04]; /*0x5e3536*/
      strcpy(MEMORY[0xAC0CF0], &MEMORY[0xA8B8E0]); /*0x5e353e*/
      MEMORY[0x8316E4] = MEMORY[0xA8BB08]; /*0x5e3553*/
      memset(Buffer, 0, sizeof(Buffer)); /*0x5e355e*/
      if ( MEMORY[0xAC116C] ) /*0x5e356d*/
        Game::EncodeGameSetupState(Buffer); /*0x5e356f*/
      else
        Game::BuildGameSettingsPacket(Buffer); /*0x5e3585*/
      return Network::SendOptionsGame(Buffer); /*0x5e3578*/
    }
  }
  return result; /*0x5e357d*/
}


// ==== 0x005E35A0  ObjectClass::method_5E35A0  this=ObjectClass  sig=csp ====
char sub_5E35A0()
{
  unsigned int v0; // eax
  int v1; // edi
  int i; // esi
  _DWORD v4[113]; // [esp+8h] [ebp-1C8h] BYREF
  __int16 v5; // [esp+1CCh] [ebp-4h]
  char v6; // [esp+1CEh] [ebp-2h]

  memset(v4, 0, sizeof(v4)); /*0x5e35b7*/
  v5 = 0; /*0x5e35b9*/
  v6 = 0; /*0x5e35bb*/
  v4[0] = 40; /*0x5e35c6*/
  v0 = strlen(MEMORY[0xA8B380]) + 1; /*0x5e35ce*/
  qmemcpy(&v4[1], MEMORY[0xA8B380], v0); /*0x5e35dd*/
  v1 = MEMORY[0xA8DA84]; /*0x5e35e6*/
  for ( i = 1; i < v1; ++i ) /*0x5e35f3*/
  {
    Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v4, 455, 1, *(_DWORD *)(MEMORY[0xA8DA78] + 4 * i) + 40, 0, 0); /*0x5e3617*/
    LOBYTE(v0) = Event::Dispatch(); /*0x5e361c*/
  }
  return v0; /*0x5e3626*/
}


// ==== 0x005E3630  ObjectClass::Network_Create  this=ObjectClass  sig=csp ====
char sub_5E3630()
{
  unsigned int v0; // eax
  int v1; // edi
  int i; // esi
  _DWORD v4[113]; // [esp+8h] [ebp-1C8h] BYREF
  __int16 v5; // [esp+1CCh] [ebp-4h]
  char v6; // [esp+1CEh] [ebp-2h]

  if ( MEMORY[0xA8B238][0] == 3 ) /*0x5e3640*/
  {
    memset(v4, 0, sizeof(v4)); /*0x5e3666*/
    v5 = 0; /*0x5e3668*/
    v6 = 0; /*0x5e366a*/
    v4[0] = 40; /*0x5e3675*/
    v0 = strlen(MEMORY[0xA8B380]) + 1; /*0x5e367d*/
    qmemcpy(&v4[1], MEMORY[0xA8B380], v0); /*0x5e368c*/
    v1 = MEMORY[0xA8DA84]; /*0x5e3695*/
    for ( i = 1; i < v1; ++i ) /*0x5e36a2*/
    {
      Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v4, 455, 1, *(_DWORD *)(MEMORY[0xA8DA78] + 4 * i) + 40, 0, 0); /*0x5e36c6*/
      LOBYTE(v0) = Event::Dispatch(); /*0x5e36cb*/
    }
  }
  else
  {
    LOBYTE(v0) = LOBYTE(MEMORY[0xA8B238][0]) - 4; /*0x5e3642*/
    if ( MEMORY[0xA8B238][0] == 4 ) /*0x5e3643*/
      LOBYTE(v0) = (unsigned __int8)Network_Create_7A2730(); /*0x5e3649*/
  }
  return v0; /*0x5e364e*/
}


// ==== 0x005E36E0  Network_Handle  this=-  sig=ida-proto ====
void sub_5E36E0()
{
  MEMORY[0xA8DAB0] = 1; /*0x5e36e5*/
  if ( MEMORY[0xAC116C] ) /*0x5e36ee*/
    UI_Setup_7A2750(); /*0x5e36f0*/
  else
    UI_Setup_5E2340(); /*0x5e36f5*/
}


// ==== 0x005E3720  Network::SendOptionsGame  this=char*  sig=csp ====
int __thiscall Network::SendOptionsGame(char *Source)
{
  int result; // eax
  ObjectClass *v2; // eax
  int i; // esi
  IUnknown *v4; // edi
  _DWORD v5[114]; // [esp+8h] [ebp-5C8h] BYREF
  char Destination[1024]; // [esp+1D0h] [ebp-400h] BYREF

  if ( *(&g_MatrixTransformState + 2263) ) /*0x5e3731*/
  {
    strncpy(Destination, Source, (IUnknown *)0x3FF); /*0x5e3741*/
    return (*(int (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 60))( /*0x5e3759*/
             *(&g_MatrixTransformState + 2263),
             Destination);
  }
  else
  {
    memset(v5, 0, 455); /*0x5e3771*/
    v5[0] = 23; /*0x5e378a*/
    strcpy((char *)&v5[1], &HouseClass_Player.__pad_5568[8396]); /*0x5e379f*/
    v2 = *(ObjectClass **)&HouseClass_Player.__pad_5568[8416]; /*0x5e37b5*/
    strcpy((char *)&v5[11] + 3, Source); /*0x5e37c3*/
    *(_DWORD *)((char *)&v5[111] + 3) = v2; /*0x5e37d1*/
    *(_DWORD *)((char *)&v5[112] + 3) = WideString::Hash((wchar_t *)&HouseClass_Player.__pad_5568[17244]); /*0x5e37dd*/
    result = *(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x5e37e4*/
    for ( i = 1; i < *(int *)&HouseClass_Player.__pad_5568[18384]; ++i ) /*0x5e37f1*/
    {
      v4 = *(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * i); /*0x5e37f9*/
      ToWideStringChar(v4); /*0x5e37fe*/
      Debug::Log(); /*0x5e3809*/
      Network::SendMessage((int)&HouseClass_Player.__pad_5568[22284], (int)v5, 455, 1, (int)v4->__pad_28, 0, 0); /*0x5e382a*/
      Event::Dispatch(); /*0x5e382f*/
      result = *(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x5e3834*/
    }
  }
  return result; /*0x5e375c*/
}


// ==== 0x005E3850  WOLobby_Play  this=AbstractClass  sig=csp ====
int __thiscall WOLobby_Play(INIClass *this)
{
  const char *v1; // edx
  int v2; // ebx
  int result; // eax
  int i; // esi
  char *v6; // eax
  char v7[108]; // [esp+14h] [ebp-234h] BYREF
  _DWORD v8[113]; // [esp+80h] [ebp-1C8h] BYREF
  __int16 v9; // [esp+244h] [ebp-4h]
  char v10; // [esp+246h] [ebp-2h]

  v2 = (int)*(&g_MatrixTransformState + 2263); /*0x5e3857*/
  if ( *(&g_MatrixTransformState + 2263) ) /*0x5e3864*/
  {
    memset(v7, 0, sizeof(v7)); /*0x5e3875*/
    strcpy(&v7[36], this->__pad_0); /*0x5e3892*/
    return (*(int (__stdcall **)(int, char *, const char *))(*(_DWORD *)v2 + 56))(v2, v7, v1); /*0x5e38a3*/
  }
  else
  {
    memset(v8, 0, sizeof(v8)); /*0x5e38c6*/
    v9 = 0; /*0x5e38c8*/
    v10 = 0; /*0x5e38ca*/
    v8[0] = 24; /*0x5e38d5*/
    strcpy((char *)&v8[1], &HouseClass_Player.__pad_5568[8396]); /*0x5e38f6*/
    strcpy((char *)&v8[11] + 3, v1); /*0x5e3915*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[17731] = Session::GetPlayerColor(&HouseClass_Player.__pad_5568[8068]); /*0x5e392d*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[17735] = WideString::Hash((wchar_t *)&HouseClass_Player.__pad_5568[17244]); /*0x5e3937*/
    result = *(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x5e393c*/
    for ( i = 1; i < *(int *)&HouseClass_Player.__pad_5568[18384]; ++i ) /*0x5e3948*/
    {
      v6 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * i)); /*0x5e3953*/
      if ( !_strcmpi(v6, this) ) /*0x5e3959*/
      {
        Debug::Log(); /*0x5e3974*/
        Network::SendMessage( /*0x5e39a0*/
          (int)&HouseClass_Player.__pad_5568[22284],
          (int)v8,
          455,
          1,
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * i) + 40,
          0,
          0);
        Event::Dispatch(); /*0x5e39a5*/
      }
      result = *(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x5e39aa*/
    }
  }
  return result; /*0x5e38a6*/
}


// ==== 0x005E39C0  ValidateNetworkLobbyHostMap  this=-  sig=csp ====
int SendMultiplayerStartSignal()
{
  int started; // esi
  HWND v1; // eax
  HWND (__stdcall *v2)(HWND, int); // esi
  HWND DlgItem; // eax
  HWND v4; // eax
  HWND v5; // eax
  HWND v6; // eax
  int result; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  BOOL v11; // [esp-4h] [ebp-4Ch]
  INIClass *v12; // [esp+0h] [ebp-48h]
  int v13; // [esp+4h] [ebp-44h] BYREF
  char Buffer[64]; // [esp+8h] [ebp-40h] BYREF

  if ( *(&g_MatrixTransformState + 2263) ) /*0x5e3abb*/
  {
    String::Assign((char **)&v13, 0); /*0x5e3ac3*/
    started = SendMultiplayerStartSignal_Start_77EBA0((const char **)&v13); /*0x5e3ad5*/
    DeleteAndZero((int)&v13); /*0x5e3ad7*/
  }
  else
  {
    started = SendMultiplayerStartSignal_Start(0); /*0x5e3ae5*/
  }
  HouseClass_Player.__pad_5568[18428] = 0; /*0x5e3aec*/
  if ( *(&g_MatrixTransformState + 2263) ) /*0x5e3af5*/
    SendMultiplayerStartSignal_Start_7A27D0(); /*0x5e3af7*/
  else
    SendMultiplayerStartSignal_Start_5E23A0(); /*0x5e3afe*/
  if ( started == 1 ) /*0x5e3b06*/
  {
    if ( *(&g_MatrixTransformState + 2263) ) /*0x5e3b13*/
    {
      String::Assign((char **)&v13, 0); /*0x5e3b1b*/
      AssignWOLPlayerSide((const char **)&v13, 0); /*0x5e3b26*/
      DeleteAndZero((int)&v13); /*0x5e3b2f*/
    }
    else
    {
      SetGameSetupPlayerState(0, 0); /*0x5e3b3a*/
    }
    sprintf(Buffer, (ObjectClass *)&stru_830620.__pad_1140[148], v12); /*0x5e3b49*/
    Network::SendOptionsGame(Buffer); /*0x5e3b55*/
    if ( *((_BYTE *)&g_MatrixTransformState + 9138) ) /*0x5e3b66*/
    {
      v1 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3b68*/
      if ( !v1 ) /*0x5e3b6f*/
      {
        v1 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3b76*/
        if ( !v1 ) /*0x5e3b7d*/
        {
          v1 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3b84*/
          if ( !v1 ) /*0x5e3b8b*/
            v1 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3b92*/
        }
      }
      v11 = 1; /*0x5e3b97*/
    }
    else
    {
      v1 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3b9b*/
      if ( !v1 ) /*0x5e3ba2*/
      {
        v1 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3ba9*/
        if ( !v1 ) /*0x5e3bb0*/
        {
          v1 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3bb7*/
          if ( !v1 ) /*0x5e3bbe*/
            v1 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3bc5*/
        }
      }
      v11 = 0; /*0x5e3bca*/
    }
    v2 = GetDlgItem; /*0x5e3bcc*/
    DlgItem = GetDlgItem(v1, 1439); /*0x5e3bd8*/
    EnableWindow(DlgItem, v11); /*0x5e3bdb*/
    v4 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3be6*/
    if ( v4 ) /*0x5e3bed*/
      goto LABEL_40; /*0x5e3bed*/
    v4 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3bf8*/
    if ( v4 ) /*0x5e3bff*/
      goto LABEL_40; /*0x5e3bff*/
    v4 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3c0a*/
    if ( v4 ) /*0x5e3c11*/
      goto LABEL_40; /*0x5e3c11*/
    goto LABEL_39; /*0x5e3c11*/
  }
  v5 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3c21*/
  if ( !v5 ) /*0x5e3c28*/
  {
    v5 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3c2f*/
    if ( !v5 ) /*0x5e3c36*/
    {
      v5 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3c3d*/
      if ( !v5 ) /*0x5e3c44*/
        v5 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3c4b*/
    }
  }
  v2 = GetDlgItem; /*0x5e3c50*/
  v6 = GetDlgItem(v5, 1439); /*0x5e3c5c*/
  result = IsWindowEnabled(v6); /*0x5e3c5f*/
  if ( !result ) /*0x5e3c67*/
  {
    result = *((unsigned __int8 *)&g_MatrixTransformState + 9138); /*0x5e3c6d*/
    if ( *((_BYTE *)&g_MatrixTransformState + 9138) ) /*0x5e3c74*/
    {
      v8 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3c7f*/
      if ( !v8 ) /*0x5e3c86*/
      {
        v8 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3c8d*/
        if ( !v8 ) /*0x5e3c94*/
        {
          v8 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3c9b*/
          if ( !v8 ) /*0x5e3ca2*/
            v8 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3ca9*/
        }
      }
      v9 = GetDlgItem(v8, 1439); /*0x5e3cb6*/
      EnableWindow(v9, 1); /*0x5e3cb9*/
      v4 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3cc4*/
      if ( v4 ) /*0x5e3ccb*/
        goto LABEL_40; /*0x5e3ccb*/
      v4 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3cd2*/
      if ( v4 ) /*0x5e3cd9*/
        goto LABEL_40; /*0x5e3cd9*/
      v4 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3ce0*/
      if ( v4 ) /*0x5e3ce7*/
        goto LABEL_40; /*0x5e3ce7*/
LABEL_39:
      v4 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3ce9*/
LABEL_40:
      v10 = v2(v4, 1439); /*0x5e3cf3*/
      return InvalidateRect(v10, 0, 0); /*0x5e3d00*/
    }
  }
  return result; /*0x5e3d06*/
}


// ==== 0x005E3AB0  SendMultiplayerStartSignal  this=-  sig=ida-proto ====
int SendMultiplayerStartSignal()
{
  int started; // esi
  HWND v1; // eax
  HWND (__stdcall *v2)(HWND, int); // esi
  HWND DlgItem; // eax
  HWND v4; // eax
  HWND v5; // eax
  HWND v6; // eax
  int result; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  BOOL v11; // [esp-4h] [ebp-4Ch]
  INIClass *v12; // [esp+0h] [ebp-48h]
  int v13; // [esp+4h] [ebp-44h] BYREF
  char Buffer[64]; // [esp+8h] [ebp-40h] BYREF

  if ( *(&g_MatrixTransformState + 2263) ) /*0x5e3abb*/
  {
    String::Assign((char **)&v13, 0); /*0x5e3ac3*/
    started = SendMultiplayerStartSignal_Start_77EBA0((const char **)&v13); /*0x5e3ad5*/
    DeleteAndZero((int)&v13); /*0x5e3ad7*/
  }
  else
  {
    started = SendMultiplayerStartSignal_Start(0); /*0x5e3ae5*/
  }
  HouseClass_Player.__pad_5568[18428] = 0; /*0x5e3aec*/
  if ( *(&g_MatrixTransformState + 2263) ) /*0x5e3af5*/
    SendMultiplayerStartSignal_Start_7A27D0(); /*0x5e3af7*/
  else
    SendMultiplayerStartSignal_Start_5E23A0(); /*0x5e3afe*/
  if ( started == 1 ) /*0x5e3b06*/
  {
    if ( *(&g_MatrixTransformState + 2263) ) /*0x5e3b13*/
    {
      String::Assign((char **)&v13, 0); /*0x5e3b1b*/
      AssignWOLPlayerSide((const char **)&v13, 0); /*0x5e3b26*/
      DeleteAndZero((int)&v13); /*0x5e3b2f*/
    }
    else
    {
      SetGameSetupPlayerState(0, 0); /*0x5e3b3a*/
    }
    sprintf(Buffer, (ObjectClass *)&stru_830620.__pad_1140[148], v12); /*0x5e3b49*/
    Network::SendOptionsGame(Buffer); /*0x5e3b55*/
    if ( *((_BYTE *)&g_MatrixTransformState + 9138) ) /*0x5e3b66*/
    {
      v1 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3b68*/
      if ( !v1 ) /*0x5e3b6f*/
      {
        v1 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3b76*/
        if ( !v1 ) /*0x5e3b7d*/
        {
          v1 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3b84*/
          if ( !v1 ) /*0x5e3b8b*/
            v1 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3b92*/
        }
      }
      v11 = 1; /*0x5e3b97*/
    }
    else
    {
      v1 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3b9b*/
      if ( !v1 ) /*0x5e3ba2*/
      {
        v1 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3ba9*/
        if ( !v1 ) /*0x5e3bb0*/
        {
          v1 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3bb7*/
          if ( !v1 ) /*0x5e3bbe*/
            v1 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3bc5*/
        }
      }
      v11 = 0; /*0x5e3bca*/
    }
    v2 = GetDlgItem; /*0x5e3bcc*/
    DlgItem = GetDlgItem(v1, 1439); /*0x5e3bd8*/
    EnableWindow(DlgItem, v11); /*0x5e3bdb*/
    v4 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3be6*/
    if ( v4 ) /*0x5e3bed*/
      goto LABEL_40; /*0x5e3bed*/
    v4 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3bf8*/
    if ( v4 ) /*0x5e3bff*/
      goto LABEL_40; /*0x5e3bff*/
    v4 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3c0a*/
    if ( v4 ) /*0x5e3c11*/
      goto LABEL_40; /*0x5e3c11*/
    goto LABEL_39; /*0x5e3c11*/
  }
  v5 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3c21*/
  if ( !v5 ) /*0x5e3c28*/
  {
    v5 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3c2f*/
    if ( !v5 ) /*0x5e3c36*/
    {
      v5 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3c3d*/
      if ( !v5 ) /*0x5e3c44*/
        v5 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3c4b*/
    }
  }
  v2 = GetDlgItem; /*0x5e3c50*/
  v6 = GetDlgItem(v5, 1439); /*0x5e3c5c*/
  result = IsWindowEnabled(v6); /*0x5e3c5f*/
  if ( !result ) /*0x5e3c67*/
  {
    result = *((unsigned __int8 *)&g_MatrixTransformState + 9138); /*0x5e3c6d*/
    if ( *((_BYTE *)&g_MatrixTransformState + 9138) ) /*0x5e3c74*/
    {
      v8 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3c7f*/
      if ( !v8 ) /*0x5e3c86*/
      {
        v8 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3c8d*/
        if ( !v8 ) /*0x5e3c94*/
        {
          v8 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3c9b*/
          if ( !v8 ) /*0x5e3ca2*/
            v8 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3ca9*/
        }
      }
      v9 = GetDlgItem(v8, 1439); /*0x5e3cb6*/
      EnableWindow(v9, 1); /*0x5e3cb9*/
      v4 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3cc4*/
      if ( v4 ) /*0x5e3ccb*/
        goto LABEL_40; /*0x5e3ccb*/
      v4 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3cd2*/
      if ( v4 ) /*0x5e3cd9*/
        goto LABEL_40; /*0x5e3cd9*/
      v4 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3ce0*/
      if ( v4 ) /*0x5e3ce7*/
        goto LABEL_40; /*0x5e3ce7*/
LABEL_39:
      v4 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3ce9*/
LABEL_40:
      v10 = v2(v4, 1439); /*0x5e3cf3*/
      return InvalidateRect(v10, 0, 0); /*0x5e3d00*/
    }
  }
  return result; /*0x5e3d06*/
}


// ==== 0x005E3D10  SetupNetworkLobbyDialog  this=AbstractClass  sig=csp ====
bool __fastcall SetupNetworkLobbyDialog(INIClass *Source, void *a2)
{
  int v3; // ebx
  char *v5; // edi
  char v6; // al
  HWND v7; // edi
  HWND DlgItem; // eax
  HWND v9; // esi
  HWND v10; // eax
  wchar_t *StringCSF; // eax
  __int16 ax8; // ax
  SessionClass *v12; // ebx
  char *v14; // eax
  int v15; // ebp
  char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  char *v19; // eax
  char *v20; // eax
  int i; // esi
  char *v22; // eax
  char *v23; // eax
  char *v24; // eax
  CCINIClass *v25; // eax
  CCINIClass *v26; // edi
  unsigned int v27; // eax
  int j; // ecx
  int v29; // edx
  int v30; // esi
  HWND eax42; // eax
  VectorClass *v31; // esi
  char al49; // al
  INIClass *v33; // ecx
  int v35; // edx
  char *v36; // eax
  wchar_t *v37; // ebp
  int ResourceID2CSF; // eax
  int v39; // eax
  HWND v40; // eax
  int ResourceIDCSF; // edi
  INIClass *v41; // ecx
  int v43; // eax
  int v44; // eax
  HWND v45; // eax
  CCINIClass *v47; // esi
  unsigned int v48; // kr08_4
  char *v49; // eax
  char *v50; // eax
  char *v51; // eax
  char *v52; // eax
  char *v53; // eax
  char *v54; // eax
  char *v55; // eax
  char *v56; // eax
  char *v57; // eax
  char *v58; // eax
  char *v59; // eax
  int ii; // edi
  char *v61; // eax
  CCINIClass *v62; // esi
  int v63; // eax
  ObjectClass *v64; // ebp
  char *v65; // eax
  IUnknown *jj; // esi
  GameSetup *v66; // eax
  CampaignScore *v68; // eax
  int *v69; // edi
  int v70; // ebx
  int v71; // eax
  IUnknown *esi157; // esi
  GameSetup *v72; // eax
  CampaignScore *v74; // eax
  int v75; // eax
  CampaignScore *v76; // eax
  HWND v77; // edi
  void *v78; // esi
  const wchar_t **v79; // ebp
  wchar_t *v80; // ebx
  int v81; // eax
  int v82; // eax
  HWND (__stdcall *v83)(HWND, int); // ebx
  HWND v84; // eax
  int v85; // ebp
  int ResourceID3CSF; // eax
  int ResourceID4CSF; // eax
  int v88; // ebp
  int v89; // eax
  HWND v90; // eax
  int v91; // ebp
  int v92; // eax
  int v93; // eax
  int ebp212; // ebp
  SessionClass *v94; // esi
  wchar_t *v96; // ebx
  int k; // esi
  int v98; // eax
  HWND v99; // eax
  int v100; // eax
  HWND v101; // eax
  char *v102; // esi
  char m; // al
  int v104; // ecx
  char v105; // al
  int v106; // ecx
  char n; // al
  int CurrentType; // eax
  HWND v109; // eax
  char *v110; // eax
  char *v111; // eax
  char *v112; // eax
  char *v113; // eax
  char *v114; // eax
  char *v115; // eax
  char *v116; // eax
  char *v117; // eax
  char *v118; // eax
  char *v119; // eax
  char *v120; // eax
  char *v121; // eax
  CellStruct *v123; // esi
  char bl313; // bl
  wchar_t **v124; // eax
  char *v125; // eax
  ObjectClass *v127; // esi
  char *eax324; // eax
  char v128; // bl
  char *v129; // eax
  CellStruct *v131; // esi
  char *eax330; // eax
  CellStruct *v133; // esi
  CCINIClass *eax334; // eax
  CCINIClass *v135; // edi
  int esi338; // esi
  SkirmishDialog *v136; // eax
  char v137; // bl
  int v138; // edi
  CampaignScore *v140; // eax
  wchar_t **ebp366; // ebp
  HWND v141; // esi
  HWND (__stdcall *v142)(HWND, int); // ebx
  HWND v143; // ebx
  CampaignScore *v145; // eax
  HWND eax380; // eax
  char v146; // cl
  wchar_t *v147; // eax
  HWND v148; // eax
  HWND v149; // eax
  HWND v150; // eax
  HWND v151; // eax
  char *v152; // ecx
  HWND v153; // eax
  HWND v154; // eax
  HWND v155; // eax
  HWND v156; // eax
  wchar_t *v157; // eax
  HWND v158; // eax
  int v159; // ecx
  HWND Current; // eax
  HWND v161; // eax
  char *v162; // eax
  char *v163; // eax
  char *v164; // eax
  CCINIClass *v165; // ebp
  char *v166; // eax
  char *v167; // eax
  CCINIClass *v169; // ebx
  char *eax438; // eax
  int v170; // esi
  SessionClass *v171; // edi
  char *v172; // eax
  char *v173; // eax
  char *v174; // eax
  CCINIClass *v176; // edi
  wchar_t *eax453; // eax
  CCINIClass *v178; // esi
  char *ebp463; // ebp
  ObjectClass *v179; // eax
  INIClass *v180; // ecx
  int v181; // edi
  char *v182; // esi
  char *v183; // eax
  char *v184; // eax
  char *v185; // eax
  char *v186; // eax
  char *v187; // eax
  char *v188; // ebp
  ObjectClass *v189; // ecx
  INIClass *v190; // edx
  HWND v191; // eax
  HWND v192; // eax
  _DWORD _FFFFFFF4[3]; // [esp-Ch] [ebp-400h] BYREF
  char *v194; // [esp+0h] [ebp-3F4h]
  ObjectClass *v195; // [esp+4h] [ebp-3F0h]
  CCINIClass *v193; // [esp+8h] [ebp-3ECh]
  ObjectClass *v197; // [esp+Ch] [ebp-3E8h]
  _BYTE v198[176]; // [esp+10h] [ebp-3E4h] BYREF
  INIClass aP0_160; // [esp+D0h] [ebp-324h] BYREF
  int v200[22]; // [esp+110h] [ebp-2E4h] BYREF
  char v201[8]; // [esp+168h] [ebp-28Ch] BYREF
  int v202; // [esp+170h] [ebp-284h]
  int v203; // [esp+174h] [ebp-280h]
  CCINIClass *v238; // [esp+1B0h] [ebp-244h]
  CCINIClass *v239; // [esp+1C0h] [ebp-234h]
  int v206; // [esp+1D0h] [ebp-224h]
  int v207; // [esp+1E0h] [ebp-214h]
  CampaignScore Destination[14]; // [esp+1F0h] [ebp-204h] BYREF
  int v209; // [esp+3F0h] [ebp-4h]

  v3 = 0;
  v209 = 0;
  v198[22] = 0;
  v5 = _strdup(Source);
  *(_DWORD *)&v198[40] = v5;
  v6 = *v5;
  if ( *v5 == 90 )
  {
    *(_DWORD *)v198 = &stru_830620.__pad_1258[308];
    Debug::Log();
    if ( v5[1] == 49 )
    {
      v12 = (SessionClass *)&HouseClass_Player.__pad_5568[18396];
      do
      {
        v14 = ToWideStringChar((IUnknown *)v12->GameMode[0]);
        if ( !_strcmpi(a2, v14) )
        {
          *(_DWORD *)&v198[44] = v200;
          strcpy((char *)v200, (const char *)(*(_DWORD *)&v198[40] + 3));
          UI_Setup_793930(a2, v200, *(char *)(*(_DWORD *)&v198[40] + 2) - 48);
        }
        v12 = (SessionClass *)((char *)v12 + 4);
      }
      while ( (int)v12 < (int)&HouseClass_Player.__pad_5568[18428] );
    }
    else
    {
      if ( v5[1] == 50 )
      {
        ax8 = atol(v5 + 2);
        UI_Setup_793A10(a2, ax8);
        *(_DWORD *)v198 = *(_DWORD *)&v198[40];
        goto LABEL_102;
      }
      if ( v5[1] == 51 && !UI_Setup_7930A0() )
      {
        v7 = (HWND)Dialog::FindByHandle((void *)0xC9);
        DlgItem = GetDlgItem(v7, 1823);
        v9 = DlgItem;
        if ( DlgItem )
        {
          ShowWindow(DlgItem, 1);
          v10 = GetDlgItem(v7, 1128);
          ShowWindow(v10, 0);
          StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_1258[288], 0, &stru_830620.__pad_1140[120], 1326);
          SendMessageA(v9, 0x4B2u, 0, (LPARAM)StringCSF);
          *(_DWORD *)v198 = *(_DWORD *)&v198[40];
          goto LABEL_102;
        }
      }
    }
    goto LABEL_13;
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 && (g_NetworkLobby_Init || g_NetworkLobbyState) )
    goto LABEL_101;
  switch ( v6 )
  {
    case 'W':
      *(_DWORD *)v198 = v5;
      v197 = (ObjectClass *)&stru_830620.__pad_1258[264];
      Debug::Log();
      v15 = 0;
      *(_DWORD *)&v198[32] = 0;
      *(_DWORD *)&v198[36] = 0;
      *(_DWORD *)&v198[24] = 0;
      v16 = strtok(v5 + 1, (ObjectClass *)&stru_817F40.nextObject);
      if ( v16 )
        *(_DWORD *)&v198[32] = atol(v16);
      v17 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
      if ( v17 )
        *(_DWORD *)&v198[36] = atol(v17);
      v18 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
      if ( v18 )
        *(_DWORD *)&v198[24] = atol(v18);
      v19 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
      if ( v19 )
        v3 = atol(v19);
      v20 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
      if ( v20 )
        v15 = atol(v20);
      for ( i = 0; i < 32; i += 4 )
      {
        v22 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
        if ( v22 )
          *(_DWORD *)&aP0_160.__pad_0[i] = atol(v22);
        v23 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
        if ( v23 )
          *(_DWORD *)&v198[i + 56] = atol(v23);
        v24 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
        if ( v24 )
          *(_DWORD *)&v198[i + 108] = atol(v24);
        v25 = (CCINIClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject);
        v26 = v25;
        if ( v25 )
          *(_DWORD *)&aP0_160.__pad_20[i] = atol(v25->__pad_0);
      }
      if ( v26 )
      {
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8060] )
        {
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4404) = *(_DWORD *)&v198[32];
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4408) = *(_DWORD *)&v198[36];
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4396) = *(_DWORD *)&v198[24];
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4400) = v3;
          v27 = 0;
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4412) = v15;
          for ( j = 4416; j < 4480; j += 8 )
          {
            v29 = *(_DWORD *)&aP0_160.__pad_0[v27];
            v30 = *(_DWORD *)&v198[v27 + 56];
            v27 += 4;
            *(_DWORD *)(j + *(_DWORD *)&HouseClass_Player.__pad_5568[8060]) = v29;
            *(_DWORD *)(j + *(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4) = v30;
            *(_WORD *)&v198[24] = *(_WORD *)&v198[v27 + 104];
            *(_WORD *)&v198[26] = aP0_160.sectionHead[v27 / 4 + 3];
            *(_DWORD *)(v27 + *(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4540) = *(_DWORD *)&v198[24];
          }
          eax42 = (HWND)Dialog::FindByHandle((void *)0xC9);
          if ( eax42 || (eax42 = (HWND)Dialog::FindByHandle((void *)0xBD)) != 0 )
            InvalidateRect(eax42, 0, 0);
        }
      }
      *(_DWORD *)v198 = *(_DWORD *)&v198[40];
LABEL_102:
      free(*(void **)v198);
      return 0;
    case 'O':
      v31 = (VectorClass *)Dialog::FindByHandle((void *)0xC9);
      if ( v31 || (v31 = (VectorClass *)Dialog::FindByHandle((void *)0xBD)) != 0 )
      {
        al49 = v5[1];
        v33 = *(INIClass **)&stru_830620.__pad_DFC[648];
        if ( al49 == 56 )
          v35 = -1;
        else
          v35 = al49 - 48;
        *(_DWORD *)&stru_830620.__pad_DFC[648] = v35;
        if ( (INIClass *)v35 == v33 )
          goto LABEL_98;
        Lobby::SetupPlayerWidgets((HWND)v31);
        v36 = CharToWideString(v5 + 2);
        wcscpy((wchar_t *)Destination, (const wchar_t *)v36);
        if ( !*(_WORD *)Destination[0].__pad_0 )
        {
          v35 = *(_DWORD *)&stru_830620.__pad_DFC[648];
          goto LABEL_98;
        }
        WideString::Assign((wchar_t **)&v198[24], Destination);
        v37 = NetworkLobby::DeleteAndZero((const wchar_t **)&v198[24]);
        DeleteAndZero::Alt((void **)&v198[24]);
        if ( v37 || (v37 = Player::FindByName((wchar_t *)Destination)) != 0 )
        {
          if ( v37 != (wchar_t *)*(&g_MatrixTransformState + 2281)
            && (v37 == (wchar_t *)*(&g_MatrixTransformState + 2275)
             || v37 == (wchar_t *)*(&g_MatrixTransformState + 2276)
             || v37 == (wchar_t *)*(&g_MatrixTransformState + 2280)
             || v37 == (wchar_t *)*(&g_MatrixTransformState + 2277)
             || v37 == (wchar_t *)*(&g_MatrixTransformState + 2278)
             || v37 == (wchar_t *)*(&g_MatrixTransformState + 2279)
             || *(_DWORD *)((char *)v37 + 107) != -1) )
          {
            ResourceID2CSF = GetResourceID2CSF(*(void **)&stru_830620.__pad_DFC[648]);
            FillComboBoxRandomOnly((HWND)v31, ResourceID2CSF);
            if ( *(_DWORD *)&stru_830620.__pad_DFC[648] )
            {
              switch ( *(_DWORD *)&stru_830620.__pad_DFC[648] )
              {
                case 1:
                  v39 = 1042;
                  break;
                case 2:
                  v39 = 1043;
                  break;
                case 3:
                  v39 = 1044;
                  break;
                case 4:
                  v39 = 1045;
                  break;
                case 5:
                  v39 = 1046;
                  break;
                case 6:
                  v39 = 1047;
                  break;
                default:
                  v39 = *(_DWORD *)&stru_830620.__pad_DFC[648] != 7 ? -1 : 1048;
                  break;
              }
            }
            else
            {
              v39 = 1041;
            }
            v40 = GetDlgItem((HWND)v31, v39);
            SendMessageA(v40, 0x4F1u, 0, 0);
            ResourceIDCSF = GetResourceIDCSF(*(void **)&stru_830620.__pad_DFC[648]);
            FillComboBoxFactions((HWND)v31, ResourceIDCSF);
            *(_DWORD *)v198 = -2;
          }
          else
          {
            v41 = *(INIClass **)&stru_830620.__pad_DFC[648];
            *(_DWORD *)&HouseClass_Player.__pad_5568[4 * *(_DWORD *)&stru_830620.__pad_DFC[648] + 18396] = v37;
            v43 = GetResourceID2CSF(v41);
            SetupComboBoxObserver((HWND)v31, v43);
            if ( *(_DWORD *)&stru_830620.__pad_DFC[648] )
            {
              switch ( *(_DWORD *)&stru_830620.__pad_DFC[648] )
              {
                case 1:
                  v44 = 1042;
                  break;
                case 2:
                  v44 = 1043;
                  break;
                case 3:
                  v44 = 1044;
                  break;
                case 4:
                  v44 = 1045;
                  break;
                case 5:
                  v44 = 1046;
                  break;
                case 6:
                  v44 = 1047;
                  break;
                default:
                  v44 = *(_DWORD *)&stru_830620.__pad_DFC[648] != 7 ? -1 : 1048;
                  break;
              }
            }
            else
            {
              v44 = 1041;
            }
            v45 = GetDlgItem((HWND)v31, v44);
            SendMessageA(v45, 0x4F1u, 0, 1);
            ResourceIDCSF = GetResourceIDCSF(*(void **)&stru_830620.__pad_DFC[648]);
            FillListBox((HWND)v31, ResourceIDCSF);
            *(_DWORD *)v198 = 8;
          }
          SetupSkirmishSpawnLocations((HWND)v31, ResourceIDCSF, *(int *)v198);
          v35 = *(_DWORD *)&stru_830620.__pad_DFC[648];
          v5 = *(char **)&v198[40];
          *(_DWORD *)&HouseClass_Player.__pad_5568[4 * *(_DWORD *)&stru_830620.__pad_DFC[648] + 18396] = v37;
LABEL_98:
          if ( v35 >= 0 && v35 != *(_DWORD *)&HouseClass_Player.__pad_5568[18392] )
            SetupSkirmishPlayerSlots((HWND)v31, (void *)v35, 0);
        }
      }
LABEL_101:
      *(_DWORD *)v198 = v5;
      goto LABEL_102;
    case 'A':
      v47 = (CCINIClass *)atol(v5 + 1);
      if ( *(&g_MatrixTransformState + 2263) )
      {
        String::Assign((char **)&v198[24], (const char *)a2);
        AssignWOLPlayerSide((const char **)&v198[24], (int)v47);
        DeleteAndZero((int)&v198[24]);
      }
      else
      {
        SetGameSetupPlayerState((char *)a2, (int)v47);
      }
      goto LABEL_101;
  }
  if ( v6 != 67 )
  {
    switch ( v6 )
    {
      case 'L':
        String::Assign((char **)&v198[24], &Source->__pad_0[1]);
        CharStringToWide((ObjectClass *)&v198[32], (const char **)&v198[24]);
        DeleteAndZero((int)&v198[24]);
        v76 = WideString::GetOrEmpty((wchar_t **)&v198[32]);
        NetworkLobby::SetupPlayers((wchar_t *)v76);
        v77 = (HWND)Dialog::FindByHandle((void *)0xC9);
        if ( v77 )
        {
          if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[18384] )
            goto LABEL_171;
          v78 = 0;
          v79 = (const wchar_t **)&HouseClass_Player.__pad_5568[18396];
          v80 = **(wchar_t ***)&HouseClass_Player.__pad_5568[18372];
          while ( !*v79 || _wcsicmp(v80, *v79) )
          {
            ++v79;
            v78 = (char *)v78 + 1;
            if ( (int)v79 >= (int)&HouseClass_Player.__pad_5568[18428] )
              goto LABEL_171;
          }
          if ( v78 != (void *)-1 )
          {
            if ( v78 != *(void **)&HouseClass_Player.__pad_5568[18392] )
            {
              v81 = GetResourceID2CSF(v78);
              if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v78 + 18396] + 107) == -1 )
              {
                SetupComboBoxObserver(v77, v81);
                if ( v78 )
                {
                  if ( v78 == (void *)1 )
                  {
                    v82 = 1042;
                  }
                  else if ( v78 == (void *)2 )
                  {
                    v82 = 1043;
                  }
                  else if ( v78 == (void *)3 )
                  {
                    v82 = 1044;
                  }
                  else if ( v78 == (void *)4 )
                  {
                    v82 = 1045;
                  }
                  else if ( v78 == (void *)5 )
                  {
                    v82 = 1046;
                  }
                  else if ( v78 == (void *)6 )
                  {
                    v82 = 1047;
                  }
                  else
                  {
                    v82 = v78 != (void *)7 ? -1 : 1048;
                  }
                }
                else
                {
                  v82 = 1041;
                }
                v83 = GetDlgItem;
                v84 = GetDlgItem(v77, v82);
                SendMessageA(v84, 0x4F1u, 0, 1);
                v85 = GetResourceIDCSF(v78);
                FillListBox(v77, v85);
                SetupSkirmishSpawnLocations(v77, v85, 8);
                ResourceID3CSF = GetResourceID3CSF(v78);
                SetupComboBoxRandomAlliance(v77, ResourceID3CSF);
                ResourceID4CSF = GetResourceID4CSF(v78);
                InitComboBoxNone(v77, ResourceID4CSF);
              }
              else
              {
                v88 = GetResourceID2CSF(v78);
                if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072]
                  && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 4))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]) )
                {
                  FillComboBoxRandomOnly(v77, v88);
                }
                if ( v78 )
                {
                  if ( v78 == (void *)1 )
                  {
                    v89 = 1042;
                  }
                  else if ( v78 == (void *)2 )
                  {
                    v89 = 1043;
                  }
                  else if ( v78 == (void *)3 )
                  {
                    v89 = 1044;
                  }
                  else if ( v78 == (void *)4 )
                  {
                    v89 = 1045;
                  }
                  else if ( v78 == (void *)5 )
                  {
                    v89 = 1046;
                  }
                  else if ( v78 == (void *)6 )
                  {
                    v89 = 1047;
                  }
                  else
                  {
                    v89 = v78 != (void *)7 ? -1 : 1048;
                  }
                }
                else
                {
                  v89 = 1041;
                }
                v83 = GetDlgItem;
                v90 = GetDlgItem(v77, v89);
                SendMessageA(v90, 0x4F1u, 0, 0);
                v91 = GetResourceIDCSF(v78);
                FillComboBoxFactions(v77, v91);
                SetupSkirmishSpawnLocations(v77, v91, -2);
                v92 = GetResourceID3CSF(v78);
                FillComboBoxAllianceSlots(v77, v92);
                v93 = GetResourceID4CSF(v78);
                FillLobbyPlayerSlot(v77, v93);
              }
              if ( *(_DWORD *)&HouseClass_Player.__pad_5568[18384] )
              {
                ebp212 = 0;
                v94 = (SessionClass *)&HouseClass_Player.__pad_5568[18396];
                v96 = **(wchar_t ***)&HouseClass_Player.__pad_5568[18372];
                while ( !v94->GameMode[0] || _wcsicmp(v96, (const wchar_t *)v94->GameMode[0]) )
                {
                  v94 = (SessionClass *)((char *)v94 + 4);
                  ++ebp212;
                  if ( (int)v94 >= (int)&HouseClass_Player.__pad_5568[18428] )
                  {
                    ebp212 = -1;
                    break;
                  }
                }
                v83 = GetDlgItem;
              }
              else
              {
                ebp212 = -1;
              }
              *(_DWORD *)&HouseClass_Player.__pad_5568[18392] = ebp212;
              for ( k = 0; k < 8; ++k )
              {
                if ( k )
                {
                  switch ( k )
                  {
                    case 1:
                      v98 = 1042;
                      break;
                    case 2:
                      v98 = 1043;
                      break;
                    case 3:
                      v98 = 1044;
                      break;
                    case 4:
                      v98 = 1045;
                      break;
                    case 5:
                      v98 = 1046;
                      break;
                    case 6:
                      v98 = 1047;
                      break;
                    default:
                      v98 = k != 7 ? -1 : 1048;
                      break;
                  }
                }
                else
                {
                  v98 = 1041;
                }
                v99 = v83(v77, v98);
                EnableWindow(v99, 0);
                SetupSkirmishPlayerSlots(v77, (void *)k, 0);
              }
              if ( ebp212 )
              {
                switch ( ebp212 )
                {
                  case 1:
                    v100 = 1042;
                    break;
                  case 2:
                    v100 = 1043;
                    break;
                  case 3:
                    v100 = 1044;
                    break;
                  case 4:
                    v100 = 1045;
                    break;
                  case 5:
                    v100 = 1046;
                    break;
                  case 6:
                    v100 = 1047;
                    break;
                  default:
                    v100 = ebp212 != 7 ? -1 : 1048;
                    break;
                }
              }
              else
              {
                v100 = 1041;
              }
              v101 = v83(v77, v100);
              EnableWindow(v101, 1);
              SetupSkirmishPlayerSlots(v77, (void *)ebp212, (HWND)1);
              SetupSkirmishDialogPlayerSlot(v77, *(int *)&HouseClass_Player.__pad_5568[18392]);
              MapSkirmishDialogPlayerToControl(v77, *(int *)&HouseClass_Player.__pad_5568[18392]);
              FillLobbyFactionComboBox(v77, *(int *)&HouseClass_Player.__pad_5568[18392]);
              SetupLobbyPlayerSlotDialog(v77, *(int *)&HouseClass_Player.__pad_5568[18392]);
            }
          }
          else
          {
LABEL_171:
            UI_Setup_791AA0(v77);
          }
        }
        free(*(void **)&v198[40]);
        DeleteAndZero::Alt((void **)&v198[32]);
        return 0;
      case 'G':
        if ( Dialog::FindByHandle((void *)0xC9) )
        {
          HouseClass_Player.__pad_5568[18428] = 1;
          if ( *(&g_MatrixTransformState + 2263) )
            UI_Setup_7A2750();
          else
            UI_Setup_5E2340();
        }
        goto LABEL_101;
      case 'K':
        if ( Dialog::FindByHandle((void *)0xC2) || Dialog::FindByHandle((void *)0xBC) )
        {
          if ( v5[1] == 49 )
          {
            ValidateNetworkLobbyHostMap((char *)a2, 1);
          }
          else if ( v5[1] == 50 )
          {
            ValidateNetworkLobbyHostMap((char *)a2, 2);
          }
          else
          {
            ValidateNetworkLobbyHostMap((char *)a2, 0);
          }
        }
        goto LABEL_101;
      case 'P':
        *(_DWORD *)v198 = v5;
        v197 = (ObjectClass *)&stru_830620.__pad_1258[96];
        Debug::Log();
        v102 = v5 + 3;
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
        {
          for ( m = *v102; *v102; m = *v102 )
          {
            v104 = 0;
            if ( m )
            {
              do
              {
                if ( m == 44 )
                  break;
                ++v102;
                aP0_160.__pad_0[v104++] = m;
                m = *v102;
              }
              while ( *v102 );
            }
            v105 = *v102;
            aP0_160.__pad_0[v104] = 0;
            v106 = 0;
            if ( v105 )
              ++v102;
            for ( n = *v102; *v102; n = *v102 )
            {
              if ( n == 44 )
                break;
              ++v102;
              v198[v106++ + 56] = n;
            }
            v198[v106 + 56] = 0;
            atol(&v198[56]);
            if ( *v102 )
              ++v102;
            SetGameOptionsPing(&aP0_160);
          }
        }
        goto LABEL_101;
    }
    CurrentType = Dialog::GetCurrentType();
    *(_DWORD *)&v198[32] = CurrentType;
    if ( CurrentType != 188 && CurrentType != 189 )
    {
      v109 = (HWND)Dialog::FindByHandle((void *)0xC2);
      if ( !v109 )
      {
        v109 = (HWND)Dialog::FindByHandle((void *)0xC9);
        if ( !v109 )
        {
          v109 = (HWND)Dialog::FindByHandle((void *)0xBC);
          if ( !v109 )
            v109 = (HWND)Dialog::FindByHandle((void *)0xBD);
        }
      }
      SendDlgItemMessageA(v109, 1342, 0x49Du, 0, 1);
    }
    *(_DWORD *)v198 = Source;
    v197 = (ObjectClass *)&stru_830620.__pad_1258[68];
    Debug::Log();
    v110 = strtok(v5, (ObjectClass *)&stru_817F40.nextObject);
    if ( v110 )
      *(_DWORD *)&HouseClass_Player.__pad_5568[23264] = atol(v110);
    v111 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v111 )
      *(_DWORD *)&HouseClass_Player.__pad_5568[22700] = atol(v111);
    v112 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v112 )
      *(_DWORD *)&HouseClass_Player.__pad_5568[8116] = atol(v112);
    v113 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v113 )
      *(_DWORD *)&HouseClass_Player.__pad_5568[8104] = atol(v113);
    v114 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v114 )
      *(_DWORD *)&HouseClass_Player.__pad_5568[8124] = atol(v114);
    v115 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v115 )
      HouseClass_Player.__pad_5568[8110] = atol(v115) != 0;
    v116 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v116 )
      HouseClass_Player.__pad_5568[8111] = atol(v116) != 0;
    v117 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v117 )
      HouseClass_Player.__pad_5568[8112] = atol(v117) != 0;
    v118 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v118 )
      HouseClass_Player.__pad_5568[8300] = atoi(v118) != 0;
    v119 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v119 )
      HouseClass_Player.__pad_5568[8109] = atoi(v119) != 0;
    v120 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v120 )
      *(_DWORD *)&HouseClass_Player.__pad_5568[8092] = atol(v120);
    v121 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( !v121 )
      goto LABEL_101;
    *(_DWORD *)&HouseClass_Player.__pad_5568[22708] = atol(v121);
    v198[23] = 1;
    v123 = (CellStruct *)strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 && UI_Setup_77CF40() )
    {
      bl313 = 1;
      v124 = WideString::Assign((wchar_t **)&v198[52], (CampaignScore *)&stru_87C374.__pad_579C[23588]);
    }
    else
    {
      String::Assign((char **)&v198[24], (const char *)v123);
      bl313 = 6;
      v124 = UI_Setup_7B83E0((wchar_t **)&v198[44], (const char **)&v198[24]);
    }
    WideString::AssignFromPtr((wchar_t **)&v198[88], (const wchar_t **)v124);
    if ( (bl313 & 4) != 0 )
    {
      bl313 &= ~4u;
      DeleteAndZero::Alt((void **)&v198[44]);
    }
    if ( (bl313 & 2) != 0 )
    {
      bl313 &= ~2u;
      DeleteAndZero((int)&v198[24]);
    }
    if ( (bl313 & 1) != 0 )
      DeleteAndZero::Alt((void **)&v198[52]);
    v125 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    v127 = *(ObjectClass **)&HouseClass_Player.__pad_5568[10328];
    *(_DWORD *)&v198[44] = *(_DWORD *)&HouseClass_Player.__pad_5568[10328];
    if ( v125 )
    {
      *(_DWORD *)&HouseClass_Player.__pad_5568[10328] = atoi(v125);
      if ( *(ObjectClass **)&HouseClass_Player.__pad_5568[10328] != v127 )
        v198[23] = 0;
    }
    eax324 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    v128 = HouseClass_Player.__pad_5568[10324];
    v198[51] = HouseClass_Player.__pad_5568[10324];
    if ( eax324 )
    {
      HouseClass_Player.__pad_5568[10324] = atoi(eax324) != 0;
      if ( HouseClass_Player.__pad_5568[10324] != v128 )
        v198[23] = 0;
    }
    v129 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    v131 = *(CellStruct **)&HouseClass_Player.__pad_5568[10320];
    *(_DWORD *)&v198[52] = *(_DWORD *)&HouseClass_Player.__pad_5568[10320];
    if ( v129 )
    {
      *(_DWORD *)&HouseClass_Player.__pad_5568[10320] = atoi(v129);
      if ( *(CellStruct **)&HouseClass_Player.__pad_5568[10320] != v131 )
        v198[23] = 0;
    }
    eax330 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    v133 = (CellStruct *)eax330;
    if ( eax330 )
    {
      if ( _strcmpi(&HouseClass_Player.__pad_5568[9772], eax330) )
        v198[23] = 0;
      strncpy(&HouseClass_Player.__pad_5568[9772], (const char *)v133, (IUnknown *)0x202);
      strcpy((char *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4700), &HouseClass_Player.__pad_5568[9772]);
    }
    eax334 = (CCINIClass *)strtok(0, (ObjectClass *)&stru_830620.__pad_1258[64]);
    v135 = eax334;
    *(_DWORD *)&v198[24] = eax334;
    if ( eax334 )
    {
      if ( strcmp(&HouseClass_Player.__pad_5568[10286], eax334->__pad_0) )
        v198[23] = 0;
      strncpy(&HouseClass_Player.__pad_5568[10286], v135->__pad_0, (IUnknown *)0x21);
    }
    esi338 = MultiplayerGameMode::Find(*(void **)&HouseClass_Player.__pad_5568[8092]);
    if ( esi338 != *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
      v198[23] = 0;
    if ( *(_DWORD *)&v198[32] == 189 || *(_DWORD *)&v198[32] == 201 )
    {
      v136 = (SkirmishDialog *)Dialog::FindByHandle((void *)0xC2);
      if ( !v136 )
      {
        v136 = (SkirmishDialog *)Dialog::FindByHandle((void *)0xC9);
        if ( !v136 )
        {
          v136 = (SkirmishDialog *)Dialog::FindByHandle((void *)0xBC);
          if ( !v136 )
            v136 = (SkirmishDialog *)Dialog::FindByHandle((void *)0xBD);
        }
      }
      UI_Setup_5EBDD0(v136, *(int *)&v198[44], *(int *)&HouseClass_Player.__pad_5568[10328], esi338);
    }
    v198[31] = 1;
    if ( !v198[23] || !wcslen((const wchar_t *)&HouseClass_Player.__pad_5568[8302]) )
    {
      v137 = 0;
      v198[31] = 0;
      v198[23] = 0;
      *(_DWORD *)&v198[36] = 0;
      if ( *(int *)&HouseClass_Player.__pad_5568[9764] <= 0 )
        goto LABEL_519;
      do
      {
        v138 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * *(_DWORD *)&v198[36]);
        if ( !_strcmpi(&HouseClass_Player.__pad_5568[9772], (const void *)(v138 + 88)) )
        {
          CCFileClass::Construct(v200, (char *)(v138 + 88));
          if ( CCFileClass::Open(v200, 0)
            && CCFileClass::GetSize(v200) == *(_DWORD *)&HouseClass_Player.__pad_5568[10320] )
          {
            *(_DWORD *)&v198[112] = 0;
            *(_DWORD *)&v198[116] = 0;
            *(_DWORD *)&v198[128] = 0;
            *(_DWORD *)&v198[132] = 0;
            *(_DWORD *)&v198[124] = &vt_GenericNode;
            *(_DWORD *)&v198[140] = 0;
            *(_DWORD *)&v198[144] = 0;
            *(_DWORD *)&v198[136] = &vt_GenericNode;
            *(_DWORD *)&v198[120] = &vt_GenericList;
            MixFileClass::LinkIntoPool(&v198[136]);
            *(_DWORD *)&v198[140] = *(_DWORD *)&v198[128];
            *(_DWORD *)&v198[144] = &v198[124];
            if ( *(_DWORD *)&v198[128] )
              *(_DWORD *)(*(_DWORD *)&v198[128] + 8) = &v198[136];
            *(_DWORD *)&v198[128] = &v198[136];
            *(_DWORD *)&v198[120] = &vt_List_INIClass_INISection;
            memset(&v198[148], 0, 13);
            *(_DWORD *)&v198[164] = 0;
            *(_DWORD *)&v198[168] = 0;
            *(_DWORD *)&v198[108] = &vt_INIClass;
            FileStraw::Open(&v198[108], (int)v200, 0);
            INIClass::GetString(
              (unsigned __int8 ***)&v198[108],
              &g_INI_Key_Digest,
              (unsigned __int8 *)&stru_830620.__pad_1258[32],
              (INIClass *)&stru_830620.__pad_1258[36],
              (INIClass *)aP0_160.__pad_20,
              32);
            if ( !HouseClass_Player.__pad_5568[10286] || !strcmp(&HouseClass_Player.__pad_5568[10286], aP0_160.__pad_20) )
            {
              wcscpy((wchar_t *)&HouseClass_Player.__pad_5568[8302], (const wchar_t *)v138);
              v137 = 1;
            }
            HashTable::DestroyHashTableINIClass((void **)&v198[108]);
          }
          v200[0] = (int)&vt_CCFileClass;
          v203 = 0;
          Vector::Clear((int)v201);
          v200[0] = (int)&off_7E1668;
          BufferIOFileClass::Dtor(v200);
        }
        ++*(_DWORD *)&v198[36];
      }
      while ( *(int *)&v198[36] < *(int *)&HouseClass_Player.__pad_5568[9764] );
      v198[31] = v137;
      if ( !v137 )
      {
LABEL_519:
        if ( WideString::Length((const wchar_t **)&v198[88]) )
        {
          v140 = WideString::GetOrEmpty((wchar_t **)&v198[88]);
          wcscpy((wchar_t *)&HouseClass_Player.__pad_5568[8302], (const wchar_t *)v140);
        }
      }
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 36))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
    }
    ebp366 = (wchar_t **)MultiplayerGameMode::Find(*(void **)&HouseClass_Player.__pad_5568[8092]);
    if ( ebp366 != *(wchar_t ***)&HouseClass_Player.__pad_5568[8072] )
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
        (*(void (**)(void))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 156))();
      if ( ebp366 )
        (*((void (__thiscall **)(wchar_t **))*ebp366 + 8))(ebp366);
    }
    *(_DWORD *)&HouseClass_Player.__pad_5568[8072] = ebp366;
    if ( ebp366 && !v198[23] )
    {
      (*((void (__thiscall **)(wchar_t **))*ebp366 + 31))(ebp366);
      NetworkLobby::FillOptionCombo();
    }
    v141 = (HWND)Dialog::FindByHandle((void *)0xC2);
    if ( !v141 )
    {
      v141 = (HWND)Dialog::FindByHandle((void *)0xC9);
      if ( !v141 )
      {
        v141 = (HWND)Dialog::FindByHandle((void *)0xBC);
        if ( !v141 )
          v141 = (HWND)Dialog::FindByHandle((void *)0xBD);
      }
    }
    v142 = GetDlgItem;
    if ( ebp366 )
    {
      v143 = GetDlgItem(v141, 1772);
      v145 = WideString::GetOrEmpty_Alt(ebp366 + 8);
      SendMessageA(v143, 0x4B2u, 0, (LPARAM)v145);
      v142 = GetDlgItem;
    }
    eax380 = v142(v141, 1448);
    SendMessageA(eax380, 0x4B2u, 0, 11055906);
    v146 = v198[51];
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4692) = -1;
    *(_DWORD *)&HouseClass_Player.__pad_5568[23248] = 0;
    *(_DWORD *)&HouseClass_Player.__pad_5568[8088] = 2;
    if ( v146 == HouseClass_Player.__pad_5568[10324]
      && *(_DWORD *)&v198[52] == *(_DWORD *)&HouseClass_Player.__pad_5568[10320] )
    {
      if ( v198[23] )
        goto LABEL_430;
    }
    else
    {
      v198[23] = 0;
    }
    *(_DWORD *)v198 = &stru_830620.__pad_1258[8];
    Debug::Log();
    if ( HouseClass_Player.__pad_5568[10324] && !v198[31] && _strcmpi(&HouseClass_Player.__pad_5568[9772], aRandmapSed) )
    {
      if ( Dialog::FindByHandle((void *)0xC2)
        || Dialog::FindByHandle((void *)0xC9)
        || Dialog::FindByHandle((void *)0xBC)
        || Dialog::FindByHandle((void *)0xBD) )
      {
        *(_DWORD *)v198 = 11055906;
        v147 = GetStringCSF((wchar_t *)&stru_830620.__pad_1140[272], 0, &stru_830620.__pad_1140[120], 2068);
        Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v147, *(ObjectClass *)v198);
      }
      *((_BYTE *)&g_MatrixTransformState + 9138) = 0;
      v148 = (HWND)Dialog::FindByHandle((void *)0xC2);
      if ( !v148 )
      {
        v148 = (HWND)Dialog::FindByHandle((void *)0xC9);
        if ( !v148 )
        {
          v148 = (HWND)Dialog::FindByHandle((void *)0xBC);
          if ( !v148 )
            v148 = (HWND)Dialog::FindByHandle((void *)0xBD);
        }
      }
      v149 = v142(v148, 1439);
      EnableWindow(v149, 0);
      v150 = (HWND)Dialog::FindByHandle((void *)0xC2);
      if ( !v150 )
      {
        v150 = (HWND)Dialog::FindByHandle((void *)0xC9);
        if ( !v150 )
        {
          v150 = (HWND)Dialog::FindByHandle((void *)0xBC);
          if ( !v150 )
            v150 = (HWND)Dialog::FindByHandle((void *)0xBD);
        }
      }
      v151 = v142(v150, 1439);
      InvalidateRect(v151, 0, 0);
      v152 = &stru_830620.__pad_1140[268];
    }
    else
    {
      *((_BYTE *)&g_MatrixTransformState + 9138) = 1;
      v153 = (HWND)Dialog::FindByHandle((void *)0xC2);
      if ( !v153 )
      {
        v153 = (HWND)Dialog::FindByHandle((void *)0xC9);
        if ( !v153 )
        {
          v153 = (HWND)Dialog::FindByHandle((void *)0xBC);
          if ( !v153 )
            v153 = (HWND)Dialog::FindByHandle((void *)0xBD);
        }
      }
      v154 = v142(v153, 1439);
      EnableWindow(v154, 1);
      v155 = (HWND)Dialog::FindByHandle((void *)0xC2);
      if ( !v155 )
      {
        v155 = (HWND)Dialog::FindByHandle((void *)0xC9);
        if ( !v155 )
        {
          v155 = (HWND)Dialog::FindByHandle((void *)0xBC);
          if ( !v155 )
            v155 = (HWND)Dialog::FindByHandle((void *)0xBD);
        }
      }
      v156 = v142(v155, 1439);
      InvalidateRect(v156, 0, 0);
      if ( HouseClass_Player.__pad_5568[10324]
        || v198[31]
        || !_strcmpi(&HouseClass_Player.__pad_5568[9772], aRandmapSed) )
      {
        v152 = &stru_830620.__pad_1140[236];
      }
      else
      {
        if ( Dialog::FindByHandle((void *)0xC2)
          || Dialog::FindByHandle((void *)0xC9)
          || Dialog::FindByHandle((void *)0xBC)
          || Dialog::FindByHandle((void *)0xBD) )
        {
          *(_DWORD *)v198 = 11055906;
          v157 = GetStringCSF((wchar_t *)&stru_830620.__pad_1140[244], 0, &stru_830620.__pad_1140[120], 2084);
          Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v157, *(ObjectClass *)v198);
        }
        v152 = &stru_830620.__pad_1140[240];
      }
    }
    Network::SendOptionsGame(v152);
    v158 = (HWND)Dialog::FindByHandle((void *)0xC2);
    if ( !v158 )
    {
      v158 = (HWND)Dialog::FindByHandle((void *)0xC9);
      if ( !v158 )
      {
        v158 = (HWND)Dialog::FindByHandle((void *)0xBC);
        if ( !v158 )
          v158 = (HWND)Dialog::FindByHandle((void *)0xBD);
      }
    }
    Session::PrepareGame(v158);
    if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8072]
      || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 4))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072])
      || (v159 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4580),
          v159 > *(int *)&HouseClass_Player.__pad_5568[10328]) )
    {
      v159 = *(_DWORD *)&HouseClass_Player.__pad_5568[10328];
    }
    ResetLobbyFactionTable(v159);
    if ( *(_DWORD *)&v198[32] == 189 || *(_DWORD *)&v198[32] == 201 )
    {
      Current = Dialog::GetCurrent();
      Lobby::InvalidateFactionCombos(Current);
      v161 = Dialog::GetCurrent();
      Lobby::InvalidatePlayerSlots(v161);
      RefreshLobbyPlayerSlots(0xFFFFFFFF);
    }
LABEL_430:
    if ( !*(_DWORD *)&v198[24] )
      Dialog::ShowMessage(
        (ObjectClass *)0xFFFFFFFF,
        (CampaignScore *)&stru_830620.__pad_1140[192],
        *(ObjectClass *)&v198[4]);
    *(_DWORD *)&v198[92] = 0;
    v162 = strtok(0, (ObjectClass *)&stru_830620.__pad_1140[188]);
    if ( !v162 )
    {
LABEL_463:
      LOBYTE(v200[0]) = 0;
      ebp463 = &HouseClass_Player.__pad_5568[8232];
      do
      {
        v179 = *(ObjectClass **)ebp463;
        v180 = (INIClass *)*((_DWORD *)ebp463 - 16);
        *(_DWORD *)v198 = *((_DWORD *)ebp463 + 8);
        v197 = v179;
        sprintf(&v198[56], (ObjectClass *)&stru_830620.__pad_1140[152], v180);
        strcat((char *)v200, &v198[56]);
        ebp463 += 4;
      }
      while ( (int)ebp463 < (int)&HouseClass_Player.__pad_5568[8264] );
      v181 = 0;
      v182 = &HouseClass_Player.__pad_5568[8168];
      do
      {
        v183 = strtok(0, (ObjectClass *)&stru_830620.__pad_1140[188]);
        if ( !v183 )
          break;
        v197 = (ObjectClass *)&stru_830620.__pad_1140[188];
        v193 = 0;
        *((_DWORD *)v182 - 8) = atol(v183);
        v184 = strtok(v193->__pad_0, v197);
        if ( !v184 )
          break;
        v197 = (ObjectClass *)&stru_830620.__pad_1140[188];
        v193 = 0;
        *(_DWORD *)v182 = atol(v184);
        v185 = strtok(v193->__pad_0, v197);
        if ( !v185 )
          break;
        *((_DWORD *)v182 + 8) = atol(v185);
        if ( *(_DWORD *)v182 != -1 )
          ++v181;
        v186 = strtok(0, (ObjectClass *)&stru_830620.__pad_1140[188]);
        if ( !v186 )
          break;
        v197 = (ObjectClass *)&stru_830620.__pad_1140[188];
        v193 = 0;
        *((_DWORD *)v182 + 16) = atol(v186);
        v187 = strtok(v193->__pad_0, v197);
        if ( !v187 )
          break;
        *((_DWORD *)v182 + 24) = atol(v187);
        v182 += 4;
      }
      while ( (int)v182 < (int)&HouseClass_Player.__pad_5568[8200] );
      *(_DWORD *)&HouseClass_Player.__pad_5568[8128] = v181;
      v198[108] = 0;
      v188 = &HouseClass_Player.__pad_5568[8232];
      do
      {
        v189 = *(ObjectClass **)v188;
        v190 = (INIClass *)*((_DWORD *)v188 - 16);
        *(_DWORD *)v198 = *((_DWORD *)v188 + 8);
        v197 = v189;
        sprintf(&v198[56], (ObjectClass *)&stru_830620.__pad_1140[152], v190);
        strcat(&v198[108], &v198[56]);
        v188 += 4;
      }
      while ( (int)v188 < (int)&HouseClass_Player.__pad_5568[8264] );
      if ( strcmp((const char *)v200, &v198[108]) )
        v198[22] = 1;
      free(*(void **)&v198[40]);
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 4 || !UI_Setup_77CF40() )
      {
        v191 = (HWND)Dialog::FindByHandle((void *)0xC2);
        if ( !v191 )
        {
          v191 = (HWND)Dialog::FindByHandle((void *)0xC9);
          if ( !v191 )
          {
            v191 = (HWND)Dialog::FindByHandle((void *)0xBC);
            if ( !v191 )
              v191 = (HWND)Dialog::FindByHandle((void *)0xBD);
          }
        }
        InitSkirmishDialogControls(v191, 0);
      }
      if ( *(_DWORD *)&stru_830620.__pad_DFC[720] != *(_DWORD *)&HouseClass_Player.__pad_5568[8116] )
        v198[22] = 1;
      if ( *(_DWORD *)&stru_830620.__pad_DFC[724] != *(_DWORD *)&HouseClass_Player.__pad_5568[8104] )
        v198[22] = 1;
      if ( *(_DWORD *)&stru_830620.__pad_DFC[728] != *(_DWORD *)&HouseClass_Player.__pad_5568[8124] )
        v198[22] = 1;
      if ( *((_BYTE *)&g_MatrixTransformState + 9139) != HouseClass_Player.__pad_5568[8110] )
        v198[22] = 1;
      if ( *((_BYTE *)&g_MatrixTransformState + 9140) != HouseClass_Player.__pad_5568[8111] )
        v198[22] = 1;
      if ( *((_BYTE *)&g_MatrixTransformState + 9141) != HouseClass_Player.__pad_5568[8112] )
        v198[22] = 1;
      if ( *((_BYTE *)&g_MatrixTransformState + 9142) != HouseClass_Player.__pad_5568[8300] )
        v198[22] = 1;
      if ( *((_BYTE *)&g_MatrixTransformState + 9143) != HouseClass_Player.__pad_5568[8109] )
        v198[22] = 1;
      if ( *(_DWORD *)&stru_830620.__pad_DFC[732] != *(_DWORD *)&HouseClass_Player.__pad_5568[22708] )
        v198[22] = 1;
      if ( !v198[23] || v198[22] )
        SendMultiplayerStartSignal();
      if ( *(_DWORD *)&v198[32] != 188 && *(_DWORD *)&v198[32] != 189 )
      {
        v192 = (HWND)Dialog::FindByHandle((void *)0xC2);
        if ( !v192 )
        {
          v192 = (HWND)Dialog::FindByHandle((void *)0xC9);
          if ( !v192 )
          {
            v192 = (HWND)Dialog::FindByHandle((void *)0xBC);
            if ( !v192 )
              v192 = (HWND)Dialog::FindByHandle((void *)0xBD);
          }
        }
        SendDlgItemMessageA(v192, 1342, 0x49Du, 0, 0);
      }
      if ( *(&g_MatrixTransformState + 2263) )
        DisplayRankingsThunkWOL();
      else
        RetVtableStubZero_eax_27();
      *(_DWORD *)&stru_830620.__pad_DFC[720] = *(_DWORD *)&HouseClass_Player.__pad_5568[8116];
      *(_DWORD *)&stru_830620.__pad_DFC[724] = *(_DWORD *)&HouseClass_Player.__pad_5568[8104];
      *(_DWORD *)&stru_830620.__pad_DFC[728] = *(_DWORD *)&HouseClass_Player.__pad_5568[8124];
      *(_WORD *)((char *)&g_MatrixTransformState + 9139) = *(_WORD *)&HouseClass_Player.__pad_5568[8110];
      *((_BYTE *)&g_MatrixTransformState + 9141) = HouseClass_Player.__pad_5568[8112];
      *((_BYTE *)&g_MatrixTransformState + 9142) = HouseClass_Player.__pad_5568[8300];
      *((_BYTE *)&g_MatrixTransformState + 9143) = HouseClass_Player.__pad_5568[8109];
      *(_DWORD *)&stru_830620.__pad_DFC[732] = *(_DWORD *)&HouseClass_Player.__pad_5568[22708];
      DeleteAndZero::Alt((void **)&v198[88]);
      return v198[23] == 0;
    }
    while ( 1 )
    {
      *(_DWORD *)&v198[24] = v162;
      if ( !strcmp(v162, &stru_830620.__pad_1140[184]) )
        goto LABEL_463;
      v163 = strtok(0, (ObjectClass *)&stru_830620.__pad_1140[188]);
      if ( !v163 )
        goto LABEL_463;
      *(_DWORD *)&v198[44] = atol(v163);
      v164 = strtok(0, (ObjectClass *)&stru_830620.__pad_1140[188]);
      if ( !v164 )
        goto LABEL_463;
      v165 = (CCINIClass *)atol(v164);
      v166 = strtok(0, (ObjectClass *)&stru_830620.__pad_1140[188]);
      if ( !v166 )
        goto LABEL_463;
      *(_DWORD *)&v198[52] = atol(v166);
      v167 = strtok(0, (ObjectClass *)&stru_830620.__pad_1140[188]);
      if ( !v167 )
        goto LABEL_463;
      v169 = (CCINIClass *)atol(v167);
      eax438 = strtok(0, (ObjectClass *)&stru_830620.__pad_1140[188]);
      if ( !eax438 )
        goto LABEL_463;
      sscanf(eax438, (const char *const)&stru_825BAC.objectTypeFlags, &v198[92]);
      if ( !*(_DWORD *)&v198[92] || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 4 )
        goto LABEL_449;
      v170 = 0;
      v171 = (SessionClass *)&HouseClass_Player.__pad_5568[18396];
      while ( 1 )
      {
        v172 = ToWideStringChar((IUnknown *)v171->GameMode[0]);
        if ( !_strcmpi(*(const void **)&v198[24], v172) )
          break;
        v171 = (SessionClass *)((char *)v171 + 4);
        ++v170;
        if ( (int)v171 >= (int)&HouseClass_Player.__pad_5568[18428] )
          goto LABEL_448;
      }
      *(_DWORD *)&v198[56] = *(_DWORD *)&v198[92];
      *(_WORD *)&v198[60] = 0;
      *(_DWORD *)&v198[104] = 0;
      NetworkID::Assign((_DWORD *)(12 * v170 + 11066316), (IPXManagerClass *)&v198[104], (int)&v198[56], 0);
      v173 = strtok(0, (ObjectClass *)&stru_830620.__pad_1140[188]);
      if ( v173 )
      {
        sscanf(v173, (const char *const)&stru_825BAC.objectTypeFlags, &v198[100]);
        v195 = (ObjectClass *)&stru_830620.__pad_1140[188];
        v194 = 0;
        *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v170 + 18808] = *(_DWORD *)&v198[100];
        v174 = strtok(v194, v195);
        if ( v174 )
        {
          sscanf(v174, (const char *const)&stru_825BAC.objectTypeFlags, &v198[96]);
          *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v170 + 20348] = *(_DWORD *)&v198[96];
        }
      }
LABEL_448:
      if ( v170 == 8 )
      {
LABEL_449:
        strtok(0, (ObjectClass *)&stru_830620.__pad_1140[188]);
        strtok(0, (ObjectClass *)&stru_830620.__pad_1140[188]);
      }
      v176 = *(CCINIClass **)&v198[24];
      *(&g_MatrixTransformState + 2266) = (CoordStruct *)1;
      if ( !_strcmpi(*(const void **)&v198[24], &HouseClass_Player.__pad_5568[8396])
        && v165 != *(CCINIClass **)&HouseClass_Player.__pad_5568[8448] )
      {
        if ( !*(&g_MatrixTransformState + 2266) )
        {
          eax453 = GetStringCSF((wchar_t *)&stru_830620.__pad_1140[164], 0, &stru_830620.__pad_1140[120], 2230);
          Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)eax453, *(ObjectClass *)&v198[4]);
        }
        *(_DWORD *)&HouseClass_Player.__pad_5568[8448] = v165;
      }
      if ( !_strcmpi(v176, &HouseClass_Player.__pad_5568[8396]) )
        *(&g_MatrixTransformState + 2266) = 0;
      if ( !*(&g_MatrixTransformState + 2263) )
        goto LABEL_520;
      String::Assign((char **)&v198[36], v176->__pad_0);
      v178 = (CCINIClass *)SetupLobbyPlayerSlot(
                             (CCINIClass *)&v198[36],
                             *(CCINIClass **)&v198[44],
                             v165,
                             *(int *)&v198[52],
                             (int)v169);
      DeleteAndZero((int)&v198[36]);
      if ( v178 )
        goto LABEL_461;
      if ( !*(&g_MatrixTransformState + 2263) )
      {
LABEL_520:
        if ( UpdateMultiplayerPlayerOptions(v176, *(CCINIClass **)&v198[44], v165, *(int *)&v198[52], (int)v169) )
LABEL_461:
          v198[22] = 1;
      }
      v162 = strtok(0, (ObjectClass *)&stru_830620.__pad_1140[188]);
      if ( !v162 )
        goto LABEL_463;
    }
  }
  v48 = strlen(Source->__pad_0) + 1;
  if ( (int)(v48 - 1) < 2 )
  {
    *(_DWORD *)v198 = *(_DWORD *)&v198[40];
    goto LABEL_102;
  }
  *(_DWORD *)v198 = Source;
  v197 = (ObjectClass *)&stru_830620.__pad_1258[212];
  if ( *(_BYTE *)(*(_DWORD *)&v198[40] + 1) != 48 )
  {
    Debug::Log();
    esi157 = 0;
    if ( MultiplayerGameMode::ListGet() >= 0 )
    {
      while ( 1 )
      {
        if ( MultiplayerGameMode::Find(esi157) )
        {
          v72 = (GameSetup *)MultiplayerGameMode::Find(esi157);
          v74 = WideString::GetOrEmpty_Alt((wchar_t **)&v72[1].GameSetup_field_0x04);
          *(_DWORD *)v198 = ToWideStringChar((IUnknown *)v74);
          v197 = (ObjectClass *)esi157;
          v193 = (CCINIClass *)&stru_830620.__pad_1258[132];
          Debug::Log();
          if ( (int)(v48 - 1) < 3 )
          {
            *(_DWORD *)v198 = *(_DWORD *)&v198[40];
            goto LABEL_102;
          }
          v75 = MultiplayerGameMode::Find(esi157);
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v75 + 116))(
            v75,
            *(char *)(*(_DWORD *)&v198[40] + 1) - 48,
            *(_DWORD *)&v198[40] + 2);
        }
        esi157 = (IUnknown *)((char *)esi157 + 1);
        if ( (int)esi157 > MultiplayerGameMode::ListGet() )
        {
          *(_DWORD *)v198 = *(_DWORD *)&v198[40];
          goto LABEL_102;
        }
      }
    }
LABEL_13:
    *(_DWORD *)v198 = *(_DWORD *)&v198[40];
    goto LABEL_102;
  }
  Debug::Log();
  *(_DWORD *)&v198[24] = -1;
  *(_DWORD *)&v198[60] = 0;
  *(_DWORD *)&v198[64] = 0;
  *(_WORD *)&v198[68] = 1;
  *(_DWORD *)&v198[56] = &vt_DynamicVectorClass_int;
  *(_DWORD *)&v198[76] = 10;
  *(_DWORD *)&v198[72] = 0;
  *(_DWORD *)&v198[32] = 0;
  *(_DWORD *)&v198[36] = 0;
  v49 = strtok((char *)(*(_DWORD *)&v198[40] + 2), (ObjectClass *)&stru_817F40.nextObject);
  if ( v49 )
    *(_DWORD *)&v198[24] = atol(v49);
  v50 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v50 )
    *(_DWORD *)&v198[36] = atol(v50);
  v51 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v51 )
    *(_DWORD *)&v198[32] = atol(v51);
  v52 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v52 )
    v239 = (CCINIClass *)atol(v52);
  v53 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v53 )
    v206 = atol(v53);
  v54 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v54 )
    v238 = (CCINIClass *)atol(v54);
  v55 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v55 )
    v207 = atol(v55);
  v56 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v56 )
    v200[16] = atol(v56);
  v57 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v57 )
    v200[20] = atol(v57);
  v58 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v58 )
    v200[12] = atol(v58);
  v59 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v59 )
    v202 = atol(v59);
  for ( ii = 0; ii < 10; ++ii )
  {
    v61 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( !v61 )
      break;
    v62 = (CCINIClass *)atol(v61);
    if ( (int)v62 < 0 )
      break;
    if ( *(int *)&v198[72] < *(int *)&v198[64]
      || (v198[69] || !*(_DWORD *)&v198[64])
      && *(int *)&v198[76] > 0
      && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&v198[56] + 8))(
           &v198[56],
           *(_DWORD *)&v198[76] + *(_DWORD *)&v198[64],
           0) )
    {
      v63 = (*(_DWORD *)&v198[72])++;
      *(_DWORD *)(*(_DWORD *)&v198[60] + 4 * v63) = v62;
    }
  }
  v64 = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  v65 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  *(_DWORD *)&v198[44] = v65;
  if ( v64 && v65 )
  {
    for ( jj = 0; (int)jj <= MultiplayerGameMode::ListGet(); jj = (IUnknown *)((char *)jj + 1) )
    {
      if ( MultiplayerGameMode::Find(jj) )
      {
        v66 = (GameSetup *)MultiplayerGameMode::Find(jj);
        v68 = WideString::GetOrEmpty_Alt((wchar_t **)&v66[1].GameSetup_field_0x04);
        *(_DWORD *)v198 = ToWideStringChar((IUnknown *)v68);
        v197 = (ObjectClass *)jj;
        v193 = (CCINIClass *)&stru_830620.__pad_1258[172];
        Debug::Log();
        v69 = (int *)MultiplayerGameMode::Find(jj);
        *(_DWORD *)v198 = *(_DWORD *)&v198[44];
        v197 = v64;
        v70 = *v69;
        DynamicVectorClass::Copy(_FFFFFFF4, (DynamicVector *)&v198[56]);
        if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD, _DWORD, _DWORD, _DWORD, char *, ObjectClass *, CCINIClass *, ObjectClass *, _DWORD))(v70 + 88))(
               v69,
               *(_DWORD *)&v198[24],
               _FFFFFFF4[0],
               _FFFFFFF4[1],
               _FFFFFFF4[2],
               v194,
               v195,
               v193,
               v197,
               *(_DWORD *)v198) )
        {
          v71 = MultiplayerGameMode::Find(jj);
          (*(void (__thiscall **)(int, _DWORD, _DWORD, int *))(*(_DWORD *)v71 + 92))(
            v71,
            *(_DWORD *)&v198[36],
            *(_DWORD *)&v198[32],
            v200);
        }
      }
    }
    *(_DWORD *)&v198[56] = &vt_VectorClass_int;
    if ( *(_DWORD *)&v198[60] && v198[69] )
    {
      __3_YAXPAX_Z(*(void **)&v198[60]);
      *(_DWORD *)v198 = *(_DWORD *)&v198[40];
      goto LABEL_102;
    }
    goto LABEL_13;
  }
  free(*(void **)&v198[40]);
  *(_DWORD *)&v198[56] = &vt_VectorClass_int;
  if ( !*(_DWORD *)&v198[60] || !v198[69] )
    return 0;
  __3_YAXPAX_Z(*(void **)&v198[60]);
  return 0;
}



// ==== 0x005E5F10  RehashGenericHashMap  this=-  sig=csp ====
void __fastcall RehashGenericHashMap(HWND hWnd, int a2)
{
  void *v4; // edi
  __int16 WindowLongA; // ax
  signed int v6; // edi
  void **v7; // eax
  void **v8; // edi
  void ***v9; // eax
  void **v10; // ecx
  int v11; // eax
  LRESULT v12; // eax
  WPARAM v13; // edi
  void **v14; // eax
  void **v15; // edi
  void ***v16; // edx
  void **v17; // eax
  int v18; // ebx
  int v19; // eax
  double v20; // st7
  int v21; // ecx
  void *v22; // edi
  unsigned int v23; // edx
  int v24; // edi
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  void *v28; // [esp+10h] [ebp-C1Ch] BYREF
  int *i; // [esp+14h] [ebp-C18h]
  void *Block; // [esp+18h] [ebp-C14h]
  __int64 v31; // [esp+1Ch] [ebp-C10h]
  __int64 v32; // [esp+24h] [ebp-C08h]
  LPARAM v33[256]; // [esp+2Ch] [ebp-C00h] BYREF
  wchar_t lParam[1024]; // [esp+42Ch] [ebp-800h] BYREF

  v4 = (void *)SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x5e5f30*/
  Block = v4; /*0x5e5f36*/
  unknown_libname_74(&v28); /*0x5e5f3a*/
  if ( v4 ) /*0x5e5f41*/
  {
    WindowLongA = GetWindowLongA(hWnd, -16); /*0x5e5f4a*/
    if ( (WindowLongA & 8) != 0 ) /*0x5e5f52*/
    {
      v6 = 0; /*0x5e5f5c*/
      for ( i = 0; v6 < (int)Block; i = (int *)v6 ) /*0x5e5f64*/
      {
        if ( SendMessageA(hWnd, 0x187u, v6, 0) ) /*0x5e5f73*/
        {
          if ( SendMessageA(hWnd, 0x4CFu, v6, 0) ) /*0x5e5f86*/
          {
            SendMessageA(hWnd, 0x4B6u, v6, (LPARAM)lParam); /*0x5e5f9b*/
          }
          else
          {
            SendMessageA(hWnd, 0x4B7u, v6, (LPARAM)v33); /*0x5e5fab*/
            BulkCharToWide(lParam, (unsigned __int8 *)v33, -1); /*0x5e5fba*/
          }
          WideString::Assign_Alt(&v28, lParam); /*0x5e5fcb*/
          v7 = (void **)__2_YAPAXI_Z(0xCu); /*0x5e5fd2*/
          v8 = v7; /*0x5e5fd7*/
          if ( v7 ) /*0x5e5fde*/
            unknown_libname_74(v7); /*0x5e5fe2*/
          else
            v8 = 0; /*0x5e5fe9*/
          WideString::Reassign_Alt(v8, (const wchar_t **)&v28); /*0x5e5ff2*/
          *((_BYTE *)v8 + 4) = 1; /*0x5e5ffb*/
          v8[2] = 0; /*0x5e5fff*/
          v9 = (void ***)(*(_DWORD *)a2 /*0x5e6018*/
                        + 4 * ((*(int (__thiscall **)(void **))(a2 + 24))(&v28) & ((1 << *(_DWORD *)(a2 + 12)) - 1)));
          v10 = *v9; /*0x5e601d*/
          *v9 = v8; /*0x5e601f*/
          if ( v10 ) /*0x5e6023*/
            v8[2] = v10; /*0x5e6025*/
          v11 = *(_DWORD *)(a2 + 4); /*0x5e6028*/
          HIDWORD(v32) = 0; /*0x5e602b*/
          ++v11; /*0x5e602f*/
          HIDWORD(v31) = 0; /*0x5e6030*/
          *(_DWORD *)(a2 + 4) = v11; /*0x5e6034*/
          LODWORD(v32) = v11; /*0x5e6037*/
          LODWORD(v31) = *(_DWORD *)(a2 + 8); /*0x5e6042*/
          if ( (double)v32 / (double)(int)v31 >= *(double *)(a2 + 40) ) /*0x5e6052*/
            Map_Helper_5EF010((_DWORD *)a2); /*0x5e6056*/
          v6 = (signed int)i; /*0x5e605b*/
        }
        ++v6; /*0x5e6063*/
      }
    }
    else if ( (WindowLongA & 0x4000) == 0 ) /*0x5e6078*/
    {
      v12 = SendMessageA(hWnd, 0x188u, 0, 0); /*0x5e6088*/
      v13 = v12; /*0x5e608a*/
      if ( v12 >= 0 ) /*0x5e608e*/
      {
        lParam[0] = 0; /*0x5e609d*/
        if ( SendMessageA(hWnd, 0x4CFu, v12, 0) ) /*0x5e60a7*/
        {
          SendMessageA(hWnd, 0x4B6u, v13, (LPARAM)lParam); /*0x5e60bc*/
        }
        else
        {
          SendMessageA(hWnd, 0x4B7u, v13, (LPARAM)v33); /*0x5e60cc*/
          BulkCharToWide(lParam, (unsigned __int8 *)v33, -1); /*0x5e60db*/
        }
        WideString::Assign_Alt(&v28, lParam); /*0x5e60ec*/
        v14 = (void **)__2_YAPAXI_Z(0xCu); /*0x5e60f3*/
        v15 = v14; /*0x5e60f8*/
        if ( v14 ) /*0x5e60ff*/
          unknown_libname_74(v14); /*0x5e6103*/
        else
          v15 = 0; /*0x5e610a*/
        WideString::Reassign_Alt(v15, (const wchar_t **)&v28); /*0x5e6113*/
        *((_BYTE *)v15 + 4) = 1; /*0x5e611e*/
        v15[2] = 0; /*0x5e6122*/
        v16 = (void ***)(*(_DWORD *)a2 /*0x5e6137*/
                       + 4 * ((*(int (__thiscall **)(void **))(a2 + 24))(&v28) & ((1 << *(_DWORD *)(a2 + 12)) - 1)));
        v17 = *v16; /*0x5e613a*/
        *v16 = v15; /*0x5e613c*/
        if ( v17 ) /*0x5e6140*/
          v15[2] = v17; /*0x5e6142*/
        v18 = *(_DWORD *)(a2 + 8); /*0x5e6148*/
        v19 = *(_DWORD *)(a2 + 4) + 1; /*0x5e614b*/
        v31 = (unsigned int)v19; /*0x5e6150*/
        *(_DWORD *)(a2 + 4) = v19; /*0x5e6154*/
        v20 = (double)v31; /*0x5e6157*/
        v31 = (unsigned int)v18; /*0x5e615b*/
        if ( v20 / (double)v18 >= *(double *)(a2 + 40) && *(_BYTE *)(a2 + 20) != 1 ) /*0x5e6179*/
        {
          Block = *(void **)a2; /*0x5e6184*/
          v21 = *(_DWORD *)(a2 + 12) + 1; /*0x5e6192*/
          *(_DWORD *)(a2 + 8) = 2 * v18; /*0x5e6194*/
          *(_DWORD *)(a2 + 12) = v21; /*0x5e6197*/
          v22 = __2_YAPAXI_Z(8 * v18); /*0x5e61a2*/
          v23 = 4 * *(_DWORD *)(a2 + 8); /*0x5e61a7*/
          *(_DWORD *)a2 = v22; /*0x5e61ae*/
          memset(v22, 0, v23); /*0x5e61b3*/
          if ( v18 > 0 ) /*0x5e61be*/
          {
            i = (int *)Block; /*0x5e61c4*/
            do /*0x5e6206*/
            {
              v24 = *i; /*0x5e61cc*/
              if ( *i ) /*0x5e61cc*/
              {
                do /*0x5e61f8*/
                {
                  v25 = (*(int (__thiscall **)(int))(a2 + 24))(v24) & ((1 << *(_DWORD *)(a2 + 12)) - 1); /*0x5e61e2*/
                  v26 = *(_DWORD *)(*(_DWORD *)a2 + 4 * v25); /*0x5e61e6*/
                  *(_DWORD *)(*(_DWORD *)a2 + 4 * v25) = v24; /*0x5e61ec*/
                  v27 = *(_DWORD *)(v24 + 8); /*0x5e61ee*/
                  *(_DWORD *)(v24 + 8) = v26; /*0x5e61f1*/
                  v24 = v27; /*0x5e61f6*/
                }
                while ( v27 ); /*0x5e61f8*/
              }
              --v18; /*0x5e6201*/
              ++i; /*0x5e6202*/
            }
            while ( v18 ); /*0x5e6206*/
          }
          __3_YAXPAX_Z(Block); /*0x5e620d*/
        }
      }
    }
  }
  DeleteAndZero::Alt(&v28); /*0x5e6219*/
}


// ==== 0x005E6230  ProcessComboBoxAddString  this=CampaignClass  sig=csp ====
void __fastcall ProcessComboBoxAddString(HWND hWnd, int a2)
{
  void (__stdcall *v2)(HWND, UINT, WPARAM, LPARAM); // esi
  LRESULT v5; // edi
  __int16 WindowLongA; // ax
  LPARAM v7; // edi
  int v8; // esi
  int v9; // ecx
  int v10; // esi
  int v11; // eax
  _DWORD *v12; // ecx
  int v13; // edi
  double v14; // st7
  bool v15; // c0
  bool v16; // c3
  wchar_t *v17; // eax
  LRESULT v18; // eax
  void *v19; // [esp+10h] [ebp-C10h] BYREF
  int v20; // [esp+14h] [ebp-C0Ch]
  __int64 v21; // [esp+18h] [ebp-C08h]
  wchar_t lParam[1024]; // [esp+20h] [ebp-C00h] BYREF
  LPARAM v23[256]; // [esp+820h] [ebp-400h] BYREF

  v2 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x5e6239*/
  v5 = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x5e6250*/
  v20 = v5; /*0x5e6256*/
  unknown_libname_74(&v19); /*0x5e625a*/
  if ( v5 ) /*0x5e6261*/
  {
    WindowLongA = GetWindowLongA(hWnd, -16); /*0x5e626a*/
    if ( (WindowLongA & 8) != 0 ) /*0x5e6272*/
    {
      v7 = 0; /*0x5e627c*/
      if ( v20 > 0 ) /*0x5e6280*/
      {
        while ( 1 ) /*0x5e628e*/
        {
          if ( ((LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))v2)(hWnd, 0x4CFu, v7, 0) ) /*0x5e6297*/
          {
            v2(hWnd, 0x4B6u, v7, (LPARAM)lParam); /*0x5e62a9*/
          }
          else
          {
            v2(hWnd, 0x4B7u, v7, (LPARAM)v23); /*0x5e62bc*/
            BulkCharToWide(lParam, (unsigned __int8 *)v23, -1); /*0x5e62cb*/
          }
          WideString::Assign_Alt(&v19, lParam); /*0x5e62d9*/
          v8 = *(_DWORD *)(*(_DWORD *)a2 /*0x5e62f4*/
                         + 4 * ((*(int (__thiscall **)(void **))(a2 + 24))(&v19) & ((1 << *(_DWORD *)(a2 + 12)) - 1)));
          if ( v8 ) /*0x5e62f9*/
          {
            while ( !SendMultiplayerStartSignal_Start_77EBA0_Start((const wchar_t **)v8, (const wchar_t **)&v19) ) /*0x5e6309*/
            {
              v8 = *(_DWORD *)(v8 + 8); /*0x5e630b*/
              if ( !v8 ) /*0x5e6310*/
                goto LABEL_14; /*0x5e6310*/
            }
            SendMessageA(hWnd, 0x185u, 1u, v7); /*0x5e631d*/
          }
LABEL_14:
          if ( ++v7 >= v20 ) /*0x5e632a*/
            break; /*0x5e632a*/
          v2 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x5e6288*/
        }
      }
    }
    else if ( (WindowLongA & 0x4000) == 0 ) /*0x5e6338*/
    {
      v9 = *(_DWORD *)(a2 + 4); /*0x5e633e*/
      v10 = 0; /*0x5e6341*/
      if ( v9 ) /*0x5e6345*/
      {
        v11 = *(_DWORD *)(a2 + 8); /*0x5e634b*/
        v21 = (unsigned int)(v9 - 1); /*0x5e634f*/
        *(float *)&v21 = (double)v21 / (double)v11; /*0x5e6369*/
        if ( v11 > 0 ) /*0x5e636d*/
        {
          v12 = *(_DWORD **)a2; /*0x5e6375*/
          while ( !*v12 ) /*0x5e637a*/
          {
            ++v10; /*0x5e637c*/
            ++v12; /*0x5e637d*/
            if ( v10 >= v11 ) /*0x5e6382*/
              goto LABEL_30; /*0x5e6382*/
          }
          if ( v10 != -1 ) /*0x5e638c*/
          {
            WideString::Reassign_Alt(&v19, *(const wchar_t ***)(*(_DWORD *)a2 + 4 * v10)); /*0x5e639a*/
            v13 = *(_DWORD *)(*(_DWORD *)a2 + 4 * v10); /*0x5e63a1*/
            v20 = *(_DWORD *)(v13 + 8); /*0x5e63a9*/
            if ( v13 ) /*0x5e63ad*/
            {
              DeleteAndZero::Alt((void **)v13); /*0x5e63b1*/
              __3_YAXPAX_Z((void *)v13); /*0x5e63b7*/
            }
            v14 = *(float *)&v21; /*0x5e63c5*/
            *(_DWORD *)(*(_DWORD *)a2 + 4 * v10) = v20; /*0x5e63c9*/
            v15 = v14 < *(double *)(a2 + 32); /*0x5e63cf*/
            v16 = v14 == *(double *)(a2 + 32); /*0x5e63cf*/
            --*(_DWORD *)(a2 + 4); /*0x5e63d3*/
            if ( v15 || v16 ) /*0x5e63d8*/
              String_Process((_DWORD *)a2); /*0x5e63df*/
            v17 = WideString::GetOrEmpty((wchar_t **)&v19); /*0x5e63e8*/
            wcscpy(lParam, v17); /*0x5e63f3*/
            v18 = SendMessageA(hWnd, 0x4CAu, 0xFFFFFFFF, (LPARAM)lParam); /*0x5e640e*/
            if ( v18 != -1 ) /*0x5e6413*/
              SendMessageA(hWnd, 0x186u, v18, 0); /*0x5e641e*/
          }
        }
      }
    }
  }
LABEL_30:
  DeleteAndZero::Alt(&v19); /*0x5e6420*/
}


// ==== 0x005E64C0  SessionClass::initPlayers  this=AbstractClass  sig=csp ====
unsigned int __thiscall sub_5E64C0(void *this)
{
  int PlayerCountMap; // esi
  int v3; // eax

  if ( this == (void *)-1 ) /*0x5e64c3*/
    return 8; /*0x5e64ca*/
  PlayerCountMap = ReadPlayerCountMap((int)this); /*0x5e64d7*/
  if ( MEMORY[0xA8B23C] ) /*0x5e64db*/
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 152))(MEMORY[0xA8B23C]); /*0x5e64df*/
    if ( v3 != -1 && v3 < PlayerCountMap ) /*0x5e64ec*/
      PlayerCountMap = v3; /*0x5e64ee*/
  }
  if ( MEMORY[0xA8B238][0] == 4 ) /*0x5e64f7*/
  {
    if ( Network::IsLobbyFeature() ) /*0x5e64f9*/
      return PlayerCountMap & 0xFFFFFFFE; /*0x5e6508*/
    if ( Network::IsMultiplayerActive() ) /*0x5e6509*/
      return 2; /*0x5e6512*/
  }
  return PlayerCountMap; /*0x5e64ca*/
}


// ==== 0x005E6520  ReadPlayerCountMap  this=AbstractClass  sig=csp ====
int __fastcall Map_ReadPlayerCount(int a1)
{
  int Int_Overwrite; // edi
  int i; // esi
  void *v4[4]; // [esp+Ch] [ebp-150h] BYREF
  _DWORD v5[3]; // [esp+1Ch] [ebp-140h] BYREF
  _DWORD v6[6]; // [esp+28h] [ebp-134h] BYREF
  char v7; // [esp+40h] [ebp-11Ch]
  int v8; // [esp+44h] [ebp-118h]
  int v9; // [esp+48h] [ebp-114h]
  _DWORD v10[22]; // [esp+4Ch] [ebp-110h] BYREF
  _BYTE v11[12]; // [esp+A4h] [ebp-B8h] BYREF
  int v12; // [esp+B0h] [ebp-ACh]
  char Buffer[32]; // [esp+B8h] [ebp-A4h] BYREF
  char Source[132]; // [esp+D8h] [ebp-84h] BYREF

  if ( a1 < 0 || a1 >= MEMORY[0xA8B8D8] ) /*0x5e6539*/
    return 0; /*0x5e6539*/
  strcpy(Source, (const char *)(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * a1) + 88)); /*0x5e6565*/
  CCFileClass::Construct(v10, Source); /*0x5e657a*/
  v4[1] = 0; /*0x5e6583*/
  v4[2] = 0; /*0x5e6587*/
  GenericNode::Constructor(v5); /*0x5e658b*/
  GenericNode::Constructor(v6); /*0x5e6594*/
  LinkedList::Prepend(v5, (int)v6); /*0x5e65aa*/
  v4[3] = &vt_List_INIClass_INISection; /*0x5e65b9*/
  memset(&v6[3], 0, 12); /*0x5e65c1*/
  v7 = 0; /*0x5e65cd*/
  v8 = 0; /*0x5e65d1*/
  v9 = 0; /*0x5e65d5*/
  v4[0] = &vt_INIClass; /*0x5e65d9*/
  if ( !FileStraw::Open(v4, (int)v10, 0) ) /*0x5e65e1*/
  {
    HashTable::DestroyHashTableINIClass(v4); /*0x5e65ee*/
    v10[0] = &vt_CCFileClass; /*0x5e65fa*/
    v12 = 0; /*0x5e6602*/
    Vector::Clear((int)v11); /*0x5e6609*/
    v10[0] = &off_7E1668; /*0x5e6612*/
    BufferIOFileClass::Dtor(v10); /*0x5e661a*/
    return 0; /*0x5e662a*/
  }
  Int_Overwrite = 0; /*0x5e662b*/
  for ( i = 0; i < 8; ++i ) /*0x5e662d*/
  {
    sprintf(Buffer, MEMORY[0x817F6C], i); /*0x5e663d*/
    if ( INIClass::ReadInt_Overwrite(g_INI_Key_Waypoints, Buffer, -1) != -1 ) /*0x5e6660*/
      ++Int_Overwrite; /*0x5e6662*/
  }
  if ( !Int_Overwrite ) /*0x5e666b*/
  {
    Int_Overwrite = INIClass::ReadInt_Overwrite(g_INI_Key_RandomMap, MEMORY[0x82BBD8], 0); /*0x5e6681*/
    if ( !Int_Overwrite ) /*0x5e6685*/
      Int_Overwrite = 8; /*0x5e6687*/
  }
  HashTable::DestroyHashTableINIClass(v4); /*0x5e6690*/
  v10[0] = &vt_CCFileClass; /*0x5e669c*/
  v12 = 0; /*0x5e66a4*/
  Vector::Clear((int)v11); /*0x5e66ab*/
  v10[0] = &off_7E1668; /*0x5e66b4*/
  BufferIOFileClass::Dtor(v10); /*0x5e66bc*/
  return Int_Overwrite; /*0x5e661f*/
}


// ==== 0x005E66D0  MPCooperative_Helper  this=-  sig=ida-proto ====
LRESULT sub_5E66D0()
{
  return SendDlgItemMessageA(MEMORY[0xAC0D40], 1363, 0x188u, 0, 0); /*0x5e66ea*/
}


// ==== 0x005E66F0  sub_5E66F0  this=-  sig=ida-proto ====
char sub_5E66F0()
{
  LRESULT v0; // eax
  LRESULT v1; // eax
  int v2; // esi
  ObjectClass *v3; // edx
  ObjectClass *v4; // ebx
  _DWORD *v5; // eax
  ObjectClass *v6; // eax
  SkirmishDialog *v7; // esi
  LRESULT v8; // eax
  CreateGameDialogControl *v9; // ecx
  const wchar_t *v10; // eax

  v0 = SendDlgItemMessageA((HWND)*(&g_MatrixTransformState + 1996), 1363, 0x188u, 0, 0); /*0x5e670d*/
  if ( v0 != -1 ) /*0x5e6712*/
  {
    v1 = SendDlgItemMessageA((HWND)*(&g_MatrixTransformState + 1996), 1363, 0x199u, v0, 0); /*0x5e672c*/
    v2 = 0; /*0x5e6734*/
    if ( *(int *)&HouseClass_Player.__pad_5568[9764] > 0 ) /*0x5e6738*/
    {
      v3 = *(ObjectClass **)&HouseClass_Player.__pad_5568[9752]; /*0x5e673e*/
      while ( v1 != *(_DWORD *)v3->__pad_0 ) /*0x5e6746*/
      {
        ++v2; /*0x5e6748*/
        v3 = (ObjectClass *)((char *)v3 + 4); /*0x5e6749*/
        if ( v2 >= *(int *)&HouseClass_Player.__pad_5568[9764] ) /*0x5e674e*/
          goto LABEL_20; /*0x5e674e*/
      }
      if ( v2 != -1 && (CoordStruct *)v2 != *(&g_MatrixTransformState + 1992) ) /*0x5e6764*/
      {
        LoadScenarioClassByIndex(v2); /*0x5e676c*/
        if ( IsRandMap::Sed(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v2)) ) /*0x5e677a*/
        {
          v4 = (ObjectClass *)*(&g_MatrixTransformState + 2257); /*0x5e6783*/
          if ( *(&g_MatrixTransformState + 2257) ) /*0x5e678b*/
          {
            ComPtr::Dtor(*(&g_MatrixTransformState + 2257)); /*0x5e678f*/
            __3_YAXPAX_Z(v4); /*0x5e6795*/
          }
          v5 = (_DWORD *)__2_YAPAXI_Z(4u); /*0x5e679f*/
          if ( v5 ) /*0x5e67a9*/
            v6 = (ObjectClass *)unknown_libname_27(v5); /*0x5e67ad*/
          else
            v6 = 0; /*0x5e67b4*/
          *(&g_MatrixTransformState + 2257) = (CoordStruct *)v6; /*0x5e67bd*/
          Surface::LoadToSurfaceSHP((char **)v6, stru_829ABC.__pad_0); /*0x5e67c2*/
          if ( !(*(&g_MatrixTransformState + 2257))->X ) /*0x5e67cc*/
            Session::PrepareGame((HWND)*(&g_MatrixTransformState + 1996)); /*0x5e67d7*/
          InvalidateRect((HWND)*(&g_MatrixTransformState + 1996), 0, 0); /*0x5e67e7*/
          ScenarioClass::CopyStartPositions(); /*0x5e67ed*/
        }
        else
        {
          Session::PrepareGame((HWND)*(&g_MatrixTransformState + 1996)); /*0x5e67fa*/
        }
        *(&g_MatrixTransformState + 1992) = (CoordStruct *)v2; /*0x5e6805*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = *(&g_MatrixTransformState + 2228); /*0x5e680b*/
        LoadScenarioClassByIndex((int)*(&g_MatrixTransformState + 2228)); /*0x5e6811*/
      }
    }
  }
LABEL_20:
  v7 = (SkirmishDialog *)*(&g_MatrixTransformState + 1996); /*0x5e6816*/
  v8 = SendDlgItemMessageA((HWND)*(&g_MatrixTransformState + 1996), 1363, 0x188u, 0, 0); /*0x5e682c*/
  if ( v8 == -1 || (v10 = (const wchar_t *)SendDlgItemMessageA((HWND)v7, 1363, 0x199u, v8, 0)) == 0 ) /*0x5e6845*/
    *((_WORD *)&g_MatrixTransformState + 4188) = 0; /*0x5e6857*/
  else
    wcscpy((wchar_t *)&g_MatrixTransformState + 4188, v10); /*0x5e684d*/
  switch ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] ) /*0x5e686b*/
  {
    case 3: /*0x5e686b*/
      return sub_5DAF20(); /*0x5e686d*/
    case 4: /*0x5e686b*/
      return Game::ProcessIdle(v9); /*0x5e6877*/
    case 1: /*0x5e686b*/
    case 2: /*0x5e686b*/
      if ( *(&g_MatrixTransformState + 191) ) /*0x5bb268*/
      {
        CellClass::SetOccupancy((int)*(&g_MatrixTransformState + 191), 0); /*0x5bb26c*/
        ModemGuest::ProcessPacket((int)*(&g_MatrixTransformState + 191), (ModemHost *)1); /*0x5bb279*/
      }
      break;
  }
  Event::Dispatch(); /*0x5bb27e*/
  return 0; /*0x5e6865*/
}


// ==== 0x005E68A0  SkirmishDialog::Show  this=ObjectClass  sig=csp ====
SkirmishDialog *__usercall SkirmishDialog::Show@<eax>(HWND hWndParent@<ecx>, int a2@<ebx>, int a3@<ebp>)
{
  SkirmishDialog *v4; // esi

  Screen::Capture(1, 0, a2, a3); /*0x5e68a7*/
  UI_Show(); /*0x5e68ac*/
  *(&g_MatrixTransformState + 1996) = (CoordStruct *)CreateDialogIndirect( /*0x5e68d0*/
                                                       g_hInstance,
                                                       (HWND)0x6B,
                                                       hWndParent,
                                                       (DLGPROC)SkirmishSetup::DlgProc,
                                                       0);
  SetupDialog((HWND)*(&g_MatrixTransformState + 1996), 107); /*0x5e68d5*/
  SendMessageA((HWND)*(&g_MatrixTransformState + 1996), 0x4A9u, 0, 1); /*0x5e68e9*/
  ShowWindow((HWND)*(&g_MatrixTransformState + 1996), 1); /*0x5e68f8*/
  v4 = (SkirmishDialog *)MessageDialogLoopAlt( /*0x5e6914*/
                           (HWND)*(&g_MatrixTransformState + 1996),
                           (unsigned __int8 (*)(void))sub_5E66F0,
                           0,
                           1,
                           1);
  AudioController::GetVolume(); /*0x5e6916*/
  return v4; /*0x5e691d*/
}


// ==== 0x005E6920  SkirmishSetup::DlgProc  this=SkirmishSetup  sig=csp ====
int SkirmishSetup::DlgProc(SkirmishDialog *aP0, int a2, HWND hWnd, signed int a4, WPARAM _3C, char *a5)
{
  int v6; // ebx
  int ebp0; // ebp
  int result; // eax
  SkirmishDialog *v7; // esi
  SkirmishDialog *v8; // esi
  signed int v11; // ebx
  LRESULT v12; // eax
  char *v13; // edi
  int v14; // ebx
  HWND DlgItem; // eax
  SkirmishDialog *v16; // edi
  int v17; // ebx
  LRESULT v18; // eax
  LRESULT v19; // eax
  char *v20; // esi
  HWND v21; // eax
  HWND v22; // eax
  WPARAM v23; // ebx
  signed int esi43; // esi
  const wchar_t *v25; // eax
  SkirmishDialog *v24; // esi
  LRESULT eax48; // eax
  const wchar_t *v28; // eax
  CampaignScore *v27; // eax
  signed int v30; // esi
  void **v31; // ebx
  ReferenceCounted *DlgCtrlID; // edi
  WPARAM esi60; // esi
  LRESULT v34; // eax
  CampaignScore *v33; // eax
  int First; // esi
  signed int v37; // ebx
  SkirmishDialog *v38; // edi
  HWND v39; // eax
  HWND eax71; // eax
  HWND v41; // eax
  CCINIClass *v40; // eax
  WPARAM v43; // ebx
  signed int v44; // esi
  SkirmishDialog *v45; // eax
  _DWORD var18[4]; // [esp+10h] [ebp-18h] BYREF
  int i; // [esp+20h] [ebp-8h]
  CCINIClass *v46; // [esp+24h] [ebp-4h]

  if ( (unsigned int)a2 <= 0x111 ) /*0x5e6930*/
  {
    if ( a2 != 273 ) /*0x5e6936*/
    {
      switch ( a2 ) /*0x5e694c*/
      {
        case 15: /*0x5e694c*/
          v7 = aP0; /*0x5e696b*/
          Dialog::DrawBackground((HWND)aP0); /*0x5e6971*/
          if ( *(&g_MatrixTransformState + 2257) ) /*0x5e697e*/
            Skirmish::RenderPreview(*(&g_MatrixTransformState + 2257), v7); /*0x5e6981*/
          Dialog::StopBink((HWND)v7); /*0x5e6988*/
          ValidateRect((HWND)v7, 0); /*0x5e6990*/
          return 0; /*0x5e699f*/
        case 20: /*0x5e694c*/
          goto LABEL_5;
        case 43: /*0x5e694c*/
          Dialog::Resize((char *)a4); /*0x5e6957*/
LABEL_5:
          result = 1; /*0x5e695c*/
          break; /*0x5e6968*/
        case 130: /*0x5e694c*/
          DestroyDialog(aP0); /*0x5e69a6*/
          result = 0; /*0x5e69ae*/
          break; /*0x5e69b4*/
        default:
          return 0;
      }
      return result; /*0x5e69b4*/
    }
    if ( (unsigned __int16)hWnd <= 0x6C5u ) /*0x5e69c7*/
    {
      switch ( (unsigned __int16)hWnd ) /*0x5e69cd*/
      {
        case 0x6C5u: /*0x5e69cd*/
          HandleMultiplayerMapSelection((HWND)aP0); /*0x5e6b67*/
          return 0; /*0x5e6b75*/
        case 0x583u: /*0x5e69cd*/
          v8 = aP0; /*0x5e69fd*/
          Dialog::IdleProcess(aP0); /*0x5e6a03*/
          ShowWindow((HWND)v8, 0); /*0x5e6a0b*/
          v11 = SkirmishSetup_Setup_5E8590(); /*0x5e6a16*/
          a4 = v11; /*0x5e6a1b*/
          if ( v11 == -1 ) /*0x5e6a1f*/
            goto LABEL_28; /*0x5e6a1f*/
          v12 = SendDlgItemMessageA((HWND)v8, 1771, 0x188u, 0, 0); /*0x5e6a3a*/
          if ( v12 != -1 ) /*0x5e6a3f*/
          {
            v13 = (char *)SendDlgItemMessageA((HWND)v8, 1771, 0x199u, v12, 0); /*0x5e6a55*/
            if ( v13 ) /*0x5e6a59*/
            {
              MultiMissionVector::Constructor(var18, 0, 0); /*0x5e6a67*/
              ebp0 = *(_DWORD *)&HouseClass_Player.__pad_5568[9764]; /*0x5e6a6c*/
              v14 = 0; /*0x5e6a72*/
              var18[0] = &vt_DynamicVectorClass_MultiMission_const; /*0x5e6a76*/
              v46 = (CCINIClass *)10; /*0x5e6a7e*/
              for ( i = 0; v14 < ebp0; ++v14 ) /*0x5e6a8e*/
              {
                aP0 = *(SkirmishDialog **)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v14); /*0x5e6a9c*/
                if ( MapPreview::Check(v13, (int)aP0) ) /*0x5e6aa0*/
                  SkirmishVector::PushBack(var18, &aP0); /*0x5e6ab2*/
              }
              DlgItem = GetDlgItem((HWND)v8, 1363); /*0x5e6ac2*/
              (*(void (__thiscall **)(char *, HWND, _DWORD *, _DWORD))(*(_DWORD *)v13 + 76))(v13, DlgItem, var18, 0); /*0x5e6ad4*/
              var18[0] = &vt_VectorClass_MultiMission_const; /*0x5e6adb*/
              VectorClass::Cleanup3((int)var18); /*0x5e6ae3*/
              v11 = a4; /*0x5e6ae8*/
            }
          }
          if ( v11 < *(int *)&HouseClass_Player.__pad_5568[9764] ) /*0x5e6af2*/
            SkirmishSetup_Setup_5E70D0((HWND)v8, *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v11)); /*0x5e6aff*/
          LoadScenarioClassByIndex(v11); /*0x5e6b06*/
          if ( !(*(&g_MatrixTransformState + 2257))->X ) /*0x5e6b10*/
            Session::PrepareGame((HWND)v8); /*0x5e6b17*/
          *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = *(&g_MatrixTransformState + 2228); /*0x5e6b22*/
          LoadScenarioClassByIndex((int)*(&g_MatrixTransformState + 2228)); /*0x5e6b28*/
          LOBYTE(v11) = HandleMultiplayerMapSelection((HWND)v8); /*0x5e6b38*/
          Screen::Capture(1, 0, v11, ebp0); /*0x5e6b3a*/
          if ( !(_BYTE)v11 ) /*0x5e6b41*/
          {
LABEL_28:
            SkirmishSetup::PlayButtonClickAnim((HWND)v8); /*0x5e6b49*/
            ShowWindow((HWND)v8, 5); /*0x5e6b51*/
            return 0; /*0x5e6b60*/
          }
          break;
        case 0x5C0u: /*0x5e69cd*/
          CloseDialog((HWND)aP0, 2); /*0x5e69ec*/
          return 0; /*0x5e69fa*/
      }
      return 0; /*0x5e69dd*/
    }
    if ( (unsigned __int16)hWnd == 1771 && !*((_BYTE *)&g_MatrixTransformState + 9144) && (unsigned int)hWnd >> 16 == 1 ) /*0x5e6b96*/
    {
      v16 = aP0; /*0x5e6b9c*/
      v17 = 0; /*0x5e6ba6*/
      v18 = SendDlgItemMessageA((HWND)aP0, 1771, 0x188u, 0, 0); /*0x5e6bb5*/
      if ( v18 != *(_DWORD *)&stru_830620.__pad_DFC[736] && v18 != -1 ) /*0x5e6bc6*/
      {
        *(_DWORD *)&stru_830620.__pad_DFC[736] = v18; /*0x5e6bd9*/
        v19 = SendDlgItemMessageA((HWND)v16, 1771, 0x188u, 0, 0); /*0x5e6bde*/
        if ( v19 != -1 ) /*0x5e6be3*/
        {
          v20 = (char *)SendDlgItemMessageA((HWND)v16, 1771, 0x199u, v19, 0); /*0x5e6bf8*/
          if ( v20 ) /*0x5e6bfc*/
          {
            unknown_libname_74(&aP0); /*0x5e6c06*/
            if ( (*(unsigned __int8 (__thiscall **)(char *, SkirmishDialog **))(*(_DWORD *)v20 + 12))(v20, &aP0) ) /*0x5e6c14*/
            {
              (*(void (__thiscall **)(char *))(*(_DWORD *)v20 + 16))(v20); /*0x5e6c23*/
              MultiMissionVector::Constructor(var18, 0, 0); /*0x5e6c2c*/
              var18[0] = &vt_DynamicVectorClass_MultiMission_const; /*0x5e6c36*/
              v46 = (CCINIClass *)10; /*0x5e6c40*/
              i = 0; /*0x5e6c48*/
              a2 = *(_DWORD *)&HouseClass_Player.__pad_5568[9764]; /*0x5e6c4c*/
              if ( *(int *)&HouseClass_Player.__pad_5568[9764] > 0 ) /*0x5e6c50*/
              {
                do /*0x5e6c7f*/
                {
                  a4 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v17); /*0x5e6c5d*/
                  if ( MapPreview::Check(v20, a4) ) /*0x5e6c61*/
                    SkirmishVector::PushBack(var18, &a4); /*0x5e6c73*/
                  ++v17; /*0x5e6c7c*/
                }
                while ( v17 < a2 ); /*0x5e6c7f*/
              }
              v21 = GetDlgItem((HWND)v16, 1363); /*0x5e6c8d*/
              (*(void (__thiscall **)(char *, HWND, _DWORD *, _DWORD))(*(_DWORD *)v20 + 76))(v20, v21, var18, 0); /*0x5e6c9b*/
              var18[0] = &vt_VectorClass_MultiMission_const; /*0x5e6ca2*/
              VectorClass::Cleanup3((int)var18); /*0x5e6caa*/
              LOBYTE(a4) = (*(int (__thiscall **)(char *))(*(_DWORD *)v20 + 60))(v20); /*0x5e6cbc*/
              v22 = GetDlgItem((HWND)v16, 1411); /*0x5e6cc0*/
              EnableWindow(v22, (unsigned __int8)a4); /*0x5e6cce*/
              if ( &g_MatrixTransformState != (CoordStruct **)-8376 ) /*0x5e6cdb*/
              {
                v23 = 0; /*0x5e6cdd*/
                esi43 = 0; /*0x5e6cee*/
                a4 = SendDlgItemMessageA((HWND)v16, 1363, 0x18Bu, 0, 0); /*0x5e6cf2*/
                if ( a4 > 0 ) /*0x5e6cf6*/
                {
                  do /*0x5e6d23*/
                  {
                    v25 = (const wchar_t *)SendDlgItemMessageA((HWND)v16, 1363, 0x199u, esi43, 0); /*0x5e6d06*/
                    if ( !wcscmp(v25, (const wchar_t *)&g_MatrixTransformState + 4188) ) /*0x5e6d0e*/
                      v23 = esi43; /*0x5e6d1a*/
                    ++esi43; /*0x5e6d20*/
                  }
                  while ( esi43 < a4 ); /*0x5e6d23*/
                }
                SendDlgItemMessageA((HWND)v16, 1363, 0x186u, v23, 0); /*0x5e6d33*/
                SendDlgItemMessageA((HWND)v16, 1363, 0x197u, v23, 0); /*0x5e6d43*/
              }
              v24 = (SkirmishDialog *)*(&g_MatrixTransformState + 1996); /*0x5e6d59*/
              eax48 = SendDlgItemMessageA((HWND)*(&g_MatrixTransformState + 1996), 1363, 0x188u, 0, 0); /*0x5e6d5b*/
              if ( eax48 == -1 || (v28 = (const wchar_t *)SendDlgItemMessageA((HWND)v24, 1363, 0x199u, eax48, 0)) == 0 ) /*0x5e6d74*/
              {
                *((_WORD *)&g_MatrixTransformState + 4188) = 0; /*0x5e6da4*/
                *((_BYTE *)&g_MatrixTransformState + 9145) = 0; /*0x5e6dad*/
                DeleteAndZero::Alt((void **)&aP0); /*0x5e6db4*/
                return 0; /*0x5e6dbc*/
              }
              else
              {
                wcscpy((wchar_t *)&g_MatrixTransformState + 4188, v28); /*0x5e6d7c*/
                *((_BYTE *)&g_MatrixTransformState + 9145) = 0; /*0x5e6d88*/
                DeleteAndZero::Alt((void **)&aP0); /*0x5e6d8f*/
                return 0; /*0x5e6d97*/
              }
            }
            else
            {
              if ( !*((_BYTE *)&g_MatrixTransformState + 9145) ) /*0x5e6dcc*/
              {
                v27 = WideString::GetOrEmpty((wchar_t **)&aP0); /*0x5e6dd4*/
                ShowDialogConfirm(v27, 0, 0, 0); /*0x5e6ddd*/
                *((_BYTE *)&g_MatrixTransformState + 9145) = 1; /*0x5e6de2*/
              }
              SendDlgItemMessageA((HWND)v16, 1771, 0x186u, 0, 0); /*0x5e6df6*/
              DeleteAndZero::Alt((void **)&aP0); /*0x5e6dfc*/
              return 0; /*0x5e6e04*/
            }
          }
        }
      }
    }
    return 0; /*0x5e703b*/
  }
  if ( a2 == 1175 ) /*0x5e6e12*/
  {
    *((_BYTE *)&g_MatrixTransformState + 9144) = 1; /*0x5e6eac*/
    First = MultiplayerGameMode::Find(*(void **)&HouseClass_Player.__pad_5568[8092]); /*0x5e6eb8*/
    v37 = 0; /*0x5e6eba*/
    if ( !First ) /*0x5e6ebe*/
      First = MultiplayerGameMode::GetFirst(); /*0x5e6ec5*/
    v38 = aP0; /*0x5e6ec7*/
    v39 = GetDlgItem((HWND)aP0, 1771); /*0x5e6ed7*/
    SkirmishSetup_Setup(v39, *(_DWORD *)(First + 40)); /*0x5e6ede*/
    if ( First ) /*0x5e6ee5*/
    {
      MultiMissionVector::Constructor(var18, 0, 0); /*0x5e6ef1*/
      var18[0] = &vt_DynamicVectorClass_MultiMission_const; /*0x5e6efb*/
      v46 = (CCINIClass *)10; /*0x5e6f05*/
      i = 0; /*0x5e6f0d*/
      a4 = *(_DWORD *)&HouseClass_Player.__pad_5568[9764]; /*0x5e6f11*/
      if ( *(int *)&HouseClass_Player.__pad_5568[9764] > 0 ) /*0x5e6f15*/
      {
        do /*0x5e6f45*/
        {
          aP0 = *(SkirmishDialog **)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v37); /*0x5e6f23*/
          if ( MapPreview::Check((char *)First, (int)aP0) ) /*0x5e6f27*/
            SkirmishVector::PushBack(var18, &aP0); /*0x5e6f39*/
          ++v37; /*0x5e6f42*/
        }
        while ( v37 < a4 ); /*0x5e6f45*/
      }
      eax71 = GetDlgItem((HWND)v38, 1363); /*0x5e6f4d*/
      (*(void (__thiscall **)(int, HWND, _DWORD *, _DWORD))(*(_DWORD *)First + 76))(First, eax71, var18, 0); /*0x5e6f5b*/
      var18[0] = &vt_VectorClass_MultiMission_const; /*0x5e6f62*/
      VectorClass::Cleanup3((int)var18); /*0x5e6f6a*/
    }
    LOBYTE(aP0) = (*(int (__thiscall **)(int))(*(_DWORD *)First + 60))(First); /*0x5e6f7c*/
    v41 = GetDlgItem((HWND)v38, 1411); /*0x5e6f80*/
    EnableWindow(v41, (unsigned __int8)aP0); /*0x5e6f8e*/
    v40 = *(CCINIClass **)&HouseClass_Player.__pad_5568[8096]; /*0x5e6f94*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8096] != -1 /*0x5e6fa8*/
      && *(int *)&HouseClass_Player.__pad_5568[8096] < *(int *)&HouseClass_Player.__pad_5568[9764] )
    {
      aP0 = *(SkirmishDialog **)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] /*0x5e6fb5*/
                               + 4 * *(_DWORD *)&HouseClass_Player.__pad_5568[8096]);
      if ( aP0 ) /*0x5e6fb9*/
      {
        v43 = 0; /*0x5e6fc1*/
        v44 = 0; /*0x5e6fd2*/
        a4 = SendDlgItemMessageA((HWND)v38, 1363, 0x18Bu, 0, 0); /*0x5e6fd6*/
        if ( a4 > 0 ) /*0x5e6fda*/
        {
          do /*0x5e6ffb*/
          {
            v45 = (SkirmishDialog *)SendDlgItemMessageA((HWND)v38, 1363, 0x199u, v44, 0); /*0x5e6fea*/
            if ( v45 == aP0 ) /*0x5e6ff0*/
              v43 = v44; /*0x5e6ff2*/
            ++v44; /*0x5e6ff8*/
          }
          while ( v44 < a4 ); /*0x5e6ffb*/
        }
        SendDlgItemMessageA((HWND)v38, 1363, 0x186u, v43, 0); /*0x5e700b*/
        SendDlgItemMessageA((HWND)v38, 1363, 0x197u, v43, 0); /*0x5e701b*/
        v40 = *(CCINIClass **)&HouseClass_Player.__pad_5568[8096]; /*0x5e701d*/
      }
    }
    *(&g_MatrixTransformState + 2228) = (CoordStruct *)v40; /*0x5e7022*/
    *(&g_MatrixTransformState + 1992) = (CoordStruct *)-1; /*0x5e7027*/
    *((_BYTE *)&g_MatrixTransformState + 9144) = 0; /*0x5e7031*/
    return 0; /*0x5e7031*/
  }
  if ( a2 != 1257 ) /*0x5e6e1b*/
  {
    if ( a2 == 1260 ) /*0x5e6e20*/
    {
      Screen::Capture(1, 0, v6, ebp0); /*0x5e6e2a*/
      Dialog::EnumAndCleanup((HWND)aP0); /*0x5e6e33*/
      return 0; /*0x5e6e41*/
    }
    return 0; /*0x5e6e20*/
  }
  v30 = a4; /*0x5e6e44*/
  v31 = (void **)(a4 + 8); /*0x5e6e51*/
  DlgCtrlID = (ReferenceCounted *)GetDlgCtrlID(*(HWND *)a4); /*0x5e6e58*/
  WideString::Assign_Alt(v31, 0); /*0x5e6e5a*/
  if ( DlgCtrlID == (ReferenceCounted *)1771 ) /*0x5e6e65*/
  {
    esi60 = *(_DWORD *)(v30 + 4); /*0x5e6e67*/
    if ( esi60 != -1 ) /*0x5e6e6d*/
    {
      v34 = SendDlgItemMessageA((HWND)aP0, 1771, 0x199u, esi60, 0); /*0x5e6e7d*/
      if ( v34 ) /*0x5e6e85*/
      {
        v33 = WideString::GetOrEmpty_Alt((wchar_t **)(v34 + 36)); /*0x5e6e8a*/
        WideString::Assign_Alt(v31, (wchar_t *)v33); /*0x5e6e92*/
      }
    }
  }
  return 1; /*0x5e695c*/
}


// ==== 0x005E70D0  SkirmishSetup_Setup_5E70D0  this=SkirmishDialog  sig=csp ====
WPARAM __fastcall SkirmishSetup_Setup_5E70D0(HWND hDlg, int a2)
{
  WPARAM v4; // ebp
  signed int v5; // esi
  LRESULT v7; // [esp+8h] [ebp-4h]

  if ( !a2 ) /*0x5e70dc*/
    return -1; /*0x5e70de*/
  v4 = 0; /*0x5e70ee*/
  v5 = 0; /*0x5e7100*/
  v7 = SendDlgItemMessageA(hDlg, 1363, 0x18Bu, 0, 0); /*0x5e7104*/
  if ( v7 > 0 ) /*0x5e7108*/
  {
    do /*0x5e7129*/
    {
      if ( SendDlgItemMessageA(hDlg, 1363, 0x199u, v5, 0) == a2 ) /*0x5e711e*/
        v4 = v5; /*0x5e7120*/
      ++v5; /*0x5e7126*/
    }
    while ( v5 < v7 ); /*0x5e7129*/
  }
  SendDlgItemMessageA(hDlg, 1363, 0x186u, v4, 0); /*0x5e7139*/
  SendDlgItemMessageA(hDlg, 1363, 0x197u, v4, 0); /*0x5e7149*/
  return v4; /*0x5e70e1*/
}


// ==== 0x005E7160  ObjectClass::HandleMultiplayerMapSelection  this=SkirmishDialog  sig=csp ====
char __thiscall HandleMultiplayerMapSelection(HWND this)
{
  LRESULT v1; // eax
  LRESULT v2; // eax
  CampaignScore *v3; // esi
  ObjectClass *i; // edx
  SkirmishDialog *v6; // ebp
  wchar_t **v7; // esi
  SkirmishDialog *v8; // ebx
  LRESULT v9; // eax
  int PlayerCountMap; // edi
  int v11; // eax
  SkirmishDialog *v13; // ecx
  char bl20; // bl
  char v14; // al
  char *v15; // ecx
  CellStruct *StringCSF; // edi
  wchar_t *v17; // ebx
  wchar_t *v18; // eax
  wchar_t *v19; // eax
  HWND v20; // edi
  HWND DlgItem; // ebx
  CampaignScore *v23; // eax
  LPARAM ebx47; // ebx
  HWND v24; // eax
  int v25; // [esp+0h] [ebp-20h]
  char v26; // [esp+13h] [ebp-Dh]
  CampaignScore *v27; // [esp+14h] [ebp-Ch]
  char v28; // [esp+18h] [ebp-8h]

  v1 = SendDlgItemMessageA((HWND)*(&g_MatrixTransformState + 1996), 1363, 0x188u, 0, 0); /*0x5e7185*/
  if ( v1 == -1 ) /*0x5e718a*/
    return 0; /*0x5e718a*/
  v2 = SendDlgItemMessageA((HWND)*(&g_MatrixTransformState + 1996), 1363, 0x199u, v1, 0); /*0x5e71a0*/
  v3 = 0; /*0x5e71a8*/
  if ( *(int *)&HouseClass_Player.__pad_5568[9764] <= 0 ) /*0x5e71b0*/
    return 0; /*0x5e71b0*/
  for ( i = *(ObjectClass **)&HouseClass_Player.__pad_5568[9752]; /*0x5e71b2*/
        v2 != *(_DWORD *)i->__pad_0;
        i = (ObjectClass *)((char *)i + 4) )
  {
    v3 = (CampaignScore *)((char *)v3 + 1); /*0x5e71bc*/
    if ( (int)v3 >= *(int *)&HouseClass_Player.__pad_5568[9764] ) /*0x5e71c2*/
      return 0; /*0x5e71d1*/
  }
  v27 = v3; /*0x5e71d5*/
  if ( v3 == (CampaignScore *)-1 ) /*0x5e71d9*/
    return 0; /*0x5e71e4*/
  v6 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072]; /*0x5e71ea*/
  v7 = 0; /*0x5e71f0*/
  v8 = (SkirmishDialog *)*(&g_MatrixTransformState + 1996); /*0x5e71f2*/
  v9 = SendDlgItemMessageA((HWND)*(&g_MatrixTransformState + 1996), 1771, 0x188u, 0, 0); /*0x5e7201*/
  if ( v9 != -1 ) /*0x5e7206*/
    v7 = (wchar_t **)SendDlgItemMessageA((HWND)v8, 1771, 0x199u, v9, 0); /*0x5e7217*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8072] = v7; /*0x5e7219*/
  v26 = (*((int (__thiscall **)(wchar_t **))*v7 + 16))(v7); /*0x5e7226*/
  v28 = (*((int (__thiscall **)(wchar_t **))*v7 + 47))(v7); /*0x5e7238*/
  PlayerCountMap = ReadPlayerCountMap((int)v27); /*0x5e7247*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] ) /*0x5e724b*/
  {
    v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 152))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x5e724f*/
    if ( v11 != -1 && v11 < PlayerCountMap ) /*0x5e725c*/
      PlayerCountMap = v11; /*0x5e725e*/
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5e7267*/
  {
    if ( Network::IsLobbyFeature() ) /*0x5e7269*/
    {
      PlayerCountMap &= ~1u; /*0x5e7272*/
    }
    else if ( Network::IsMultiplayerActive() ) /*0x5e7277*/
    {
      PlayerCountMap = 2; /*0x5e7280*/
    }
  }
  v13 = v6; /*0x5e728a*/
  bl20 = 0; /*0x5e728c*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8072] = v6; /*0x5e7291*/
  switch ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] ) /*0x5e7297*/
  {
    case 3: /*0x5e7297*/
      v14 = Map_Handle(PlayerCountMap, v26, v28); /*0x5e72cb*/
      break;
    case 4: /*0x5e7297*/
      v14 = Map_Handle_7A2800(PlayerCountMap, v26, v28); /*0x5e72b9*/
      break;
    case 5: /*0x5e7297*/
      v14 = Map_Handle_6ACCA0(PlayerCountMap); /*0x5e72a5*/
      bl20 = 1; /*0x5e72aa*/
      break;
    default:
      goto LABEL_32; /*0x5e729d*/
  }
  if ( v14 ) /*0x5e72d2*/
  {
    v15 = &stru_830620.__pad_1258[468]; /*0x5e72d6*/
    if ( bl20 ) /*0x5e72db*/
      v15 = &stru_830620.__pad_1258[448]; /*0x5e72dd*/
    StringCSF = (CellStruct *)GetStringCSF((wchar_t *)v15, 0, &stru_830620.__pad_1140[120], 2963); /*0x5e7304*/
    v17 = GetStringCSF((wchar_t *)&stru_830620.__pad_1258[440], 0, &stru_830620.__pad_1140[120], 2964); /*0x5e731c*/
    v18 = GetStringCSF(aGuiCancel, 0, &stru_830620.__pad_1140[120], 2965); /*0x5e731e*/
    if ( Dialog::ShowMessageBox((int)StringCSF, v17, (Movie *)v18, 0, 0, v25) ) /*0x5e7336*/
      return 0; /*0x5e7348*/
  }
  v13 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072]; /*0x5e7349*/
LABEL_32:
  if ( v7 != (wchar_t **)v13 ) /*0x5e7351*/
  {
    if ( v13 ) /*0x5e7355*/
      (*(void (__thiscall **)(SkirmishDialog *))(*(_DWORD *)v13->__pad_0 + 156))(v13); /*0x5e7359*/
    if ( v7 ) /*0x5e7361*/
    {
      *(_DWORD *)&HouseClass_Player.__pad_5568[8072] = v7; /*0x5e7367*/
      v19 = v7[10]; /*0x5e736d*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = v27; /*0x5e7370*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8092] = v19; /*0x5e7376*/
      (*((void (__thiscall **)(wchar_t **))*v7 + 8))(v7); /*0x5e737f*/
    }
  }
  *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = v27; /*0x5e7388*/
  if ( v7 ) /*0x5e738d*/
    (*((void (__thiscall **)(wchar_t **))*v7 + 9))(v7); /*0x5e7393*/
  (*((void (__thiscall **)(wchar_t **))*v7 + 6))(v7); /*0x5e739a*/
  (*((void (__thiscall **)(wchar_t **))*v7 + 31))(v7); /*0x5e73a1*/
  CloseDialog(this, 1); /*0x5e73ad*/
  v20 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e73bc*/
  if ( !v20 ) /*0x5e73c0*/
  {
    v20 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e73cc*/
    if ( !v20 ) /*0x5e73d0*/
    {
      v20 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e73dc*/
      if ( !v20 ) /*0x5e73e0*/
        v20 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e73ec*/
    }
  }
  if ( v7 ) /*0x5e73f6*/
  {
    DlgItem = GetDlgItem(v20, 1772); /*0x5e7403*/
    v23 = WideString::GetOrEmpty_Alt(v7 + 8); /*0x5e7405*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v23); /*0x5e7413*/
  }
  if ( *(int *)&HouseClass_Player.__pad_5568[8096] >= 0 /*0x5e7428*/
    && *(int *)&HouseClass_Player.__pad_5568[8096] < *(int *)&HouseClass_Player.__pad_5568[9764] )
  {
    ebx47 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] /*0x5e7430*/
                      + 4 * *(_DWORD *)&HouseClass_Player.__pad_5568[8096]);
    if ( ebx47 ) /*0x5e7435*/
    {
      v24 = GetDlgItem(v20, 1448); /*0x5e743d*/
      SendMessageA(v24, 0x4B2u, 0, ebx47); /*0x5e7448*/
    }
  }
  (*((void (__thiscall **)(wchar_t **))*v7 + 24))(v7); /*0x5e7452*/
  return 1; /*0x5e71c8*/
}


// ==== 0x005E7460  Scenario::PreGameInit  this=AbstractClass  sig=ida-proto ====
int __thiscall Scenario::PreGameInit(CellStruct *this)
{
  ObjectClass *v0; // edx
  unsigned int v2; // eax
  int result; // eax

  *((_DWORD *)MEMORY[0xA8B230] + 1173) = MEMORY[0xA8B254]; /*0x5e746b*/
  *(_DWORD *)&MEMORY[0xA8EA70].__pad_310[4] = 0; /*0x5e747c*/
  MEMORY[0xA8B54C] = MEMORY[0xA8DA84]; /*0x5e7486*/
  Debug::Log(); /*0x5e748b*/
  *(_DWORD *)&MEMORY[0xA8EA70].field_D0[32] = MEMORY[0xA8B268]; /*0x5e74aa*/
  v0 = (ObjectClass *)MEMORY[0xA8E960]; /*0x5e74b0*/
  BYTE1(v0) = BYTE1(MEMORY[0xA8E960]) & 0x77; /*0x5e74bb*/
  v2 = (unsigned int)v0 | ((MEMORY[0xA8B31D] & 1 | (16 * (MEMORY[0xA8B260] & 1))) << 11); /*0x5e74c1*/
  MEMORY[0xA8B24C] = 2; /*0x5e74c3*/
  LOBYTE(v2) = MEMORY[0xA8E960] | 0xC0; /*0x5e74cd*/
  MEMORY[0xA8E960] = v2; /*0x5e74d4*/
  nullsub_37(); /*0x5e74d9*/
  return result;
}


// ==== 0x005E74E0  Session::PrepareGame  this=Session  sig=csp ====
int __thiscall Session::PrepareGame(HWND hWnd)
{
  ObjectClass *v1; // esi
  int v3; // eax
  char *Flagged; // eax
  char *v5; // eax
  int result; // eax
  char v7; // bl
  ObjectClass *v8; // esi
  int v9; // esi
  int v10; // edi
  int v11; // esi
  ObjectClass *v12; // esi
  _DWORD *v13; // eax
  char v14; // al
  bool v15; // bl
  int v16; // [esp+10h] [ebp-1F8h]
  int v17[9]; // [esp+1Ch] [ebp-1ECh] BYREF
  char Str[452]; // [esp+40h] [ebp-1C8h] BYREF
  __int16 v19; // [esp+204h] [ebp-4h]
  char v20; // [esp+206h] [ebp-2h]

  v1 = (ObjectClass *)MEMORY[0xAC1154]; /*0x5e74e9*/
  if ( MEMORY[0xAC1154] ) /*0x5e74f6*/
  {
    ComPtr::Dtor(MEMORY[0xAC1154]); /*0x5e74fa*/
    __3_YAXPAX_Z(v1); /*0x5e7500*/
  }
  MEMORY[0xAC1154] = 0; /*0x5e7513*/
  switch ( MEMORY[0xA8B238][0] ) /*0x5e7521*/
  {
    case 1: /*0x5e7521*/
    case 2: /*0x5e7521*/
      if ( FindAndValidateMap( /*0x5e774c*/
             &MEMORY[0xA8B8E0],
             MEMORY[0xA8BB04],
             &MEMORY[0xA8BAE2],
             (unsigned __int8)MEMORY[0xA8BB08],
             0) )
      {
        goto LABEL_42; /*0x5e7753*/
      }
      memset(Str, 0, 250); /*0x5e7764*/
      *(_DWORD *)Str = 119; /*0x5e776c*/
      result = Timer::GetTicks(); /*0x5e7774*/
      v9 = 1800; /*0x5e7779*/
      v16 = result; /*0x5e777e*/
      while ( 1 ) /*0x5e778f*/
      {
        if ( v16 != -1 ) /*0x5e7793*/
        {
          result = Timer::GetTicks() - v16; /*0x5e779e*/
          if ( result >= 1800 ) /*0x5e77a4*/
            return result; /*0x5e77a4*/
          v9 = 1800 - result; /*0x5e77aa*/
        }
        if ( !v9 ) /*0x5e77ae*/
          return result; /*0x5e7812*/
        v10 = Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)Str, 250, 1); /*0x5e77cf*/
        for ( result = Count::GetCountQueue(&MEMORY[0xA8EA70]); result > 0; result = Count::GetCountQueue(&MEMORY[0xA8EA70]) ) /*0x5e77d8*/
        {
          result = v16; /*0x5e77da*/
          v11 = 1800; /*0x5e77de*/
          if ( v16 != -1 ) /*0x5e77e4*/
          {
            result = Timer::GetTicks() - v16; /*0x5e77ef*/
            if ( result >= 1800 ) /*0x5e77f5*/
              break; /*0x5e77f5*/
            v11 = 1800 - result; /*0x5e77f7*/
          }
          if ( !v11 ) /*0x5e77fb*/
            break; /*0x5e77fb*/
          Event::Dispatch(); /*0x5e77fd*/
        }
        if ( v10 ) /*0x5e7812*/
          return result; /*0x5e7812*/
        v9 = 1800; /*0x5e778b*/
      }
    case 3: /*0x5e7521*/
      if ( Dialog::GetCurrentType() != 189 /*0x5e7550*/
        || FindAndValidateMap(
             &MEMORY[0xA8B8E0],
             MEMORY[0xA8BB04],
             &MEMORY[0xA8BAE2],
             (unsigned __int8)MEMORY[0xA8BB08],
             0) )
      {
        goto LABEL_42; /*0x5e7557*/
      }
      InvalidateRect(hWnd, 0, 0); /*0x5e7560*/
      memset(Str, 0, sizeof(Str)); /*0x5e7571*/
      v19 = 0; /*0x5e7573*/
      v20 = 0; /*0x5e7575*/
      *(_DWORD *)Str = 27; /*0x5e7576*/
      break; /*0x5e7576*/
    case 4: /*0x5e7521*/
      if ( !Dialog::FindByHandle((void *)0xC9) ) /*0x5e7609*/
        goto LABEL_42; /*0x5e7609*/
      v7 = 0; /*0x5e762e*/
      if ( FindAndValidateMap( /*0x5e7630*/
             &MEMORY[0xA8B8E0],
             MEMORY[0xA8BB04],
             &MEMORY[0xA8BAE2],
             (unsigned __int8)MEMORY[0xA8BB08],
             0) )
      {
        strcpy(Str, &MEMORY[0xA8B8E0]); /*0x5e765a*/
        _strupr(Str); /*0x5e7668*/
        Debug::Log(); /*0x5e7677*/
        if ( !(_BYTE)MEMORY[0xA8BB08] && strstr(Str, MEMORY[0x831A88]) && strstr(Str, MEMORY[0x831A80]) ) /*0x5e76a8*/
          goto LABEL_42; /*0x5e76a8*/
        RawFileClass::Construct(v17, (int)&MEMORY[0xA8B8E0]); /*0x5e76c1*/
        if ( FileClass::Open(v17, 0) ) /*0x5e76cc*/
          v7 = 1; /*0x5e76d5*/
        RawFileClass::Dtor(v17); /*0x5e76db*/
        if ( !v7 ) /*0x5e76e2*/
        {
LABEL_42:
          v12 = (ObjectClass *)MEMORY[0xAC1154]; /*0x5e7825*/
          if ( MEMORY[0xAC1154] ) /*0x5e782d*/
          {
            ComPtr::Dtor(MEMORY[0xAC1154]); /*0x5e7831*/
            __3_YAXPAX_Z(v12); /*0x5e7837*/
            MEMORY[0xAC1154] = 0; /*0x5e783f*/
          }
          goto LABEL_44; /*0x5e783f*/
        }
      }
      if ( IsRandMap::Sed2((int)MEMORY[0xA8B238]) ) /*0x5e76ef*/
        return InvalidateRect(hWnd, 0, 0); /*0x5e76ef*/
      v8 = (ObjectClass *)MEMORY[0xAC1154]; /*0x5e76fc*/
      if ( !MEMORY[0xAC1154] ) /*0x5e7704*/
        return InvalidateRect(hWnd, 0, 0); /*0x5e7704*/
      ComPtr::Dtor(MEMORY[0xAC1154]); /*0x5e770c*/
      __3_YAXPAX_Z(v8); /*0x5e7712*/
      MEMORY[0xAC1154] = 0; /*0x5e771a*/
      return InvalidateRect(hWnd, 0, 0); /*0x5e7733*/
    default:
LABEL_44:
      v13 = CCFileClass::Construct(Str, &MEMORY[0xA8B8E0]); /*0x5e7845*/
      v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 20))(v13, 0); /*0x5e7858*/
      *(_DWORD *)Str = &vt_CCFileClass; /*0x5e7864*/
      v15 = v14 == 0; /*0x5e786c*/
      *(_DWORD *)&Str[100] = 0; /*0x5e786f*/
      Vector::Clear((int)&Str[88]); /*0x5e7876*/
      *(_DWORD *)Str = &off_7E1668; /*0x5e787f*/
      result = BufferIOFileClass::Dtor(Str); /*0x5e7887*/
      if ( !v15 ) /*0x5e788e*/
      {
        result = (int)__2_YAPAXI_Z(4u); /*0x5e7892*/
        if ( !result ) /*0x5e789c*/
        {
          MEMORY[0xAC1154] = 0; /*0x5e78e4*/
          return result; /*0x5e78f4*/
        }
        result = (int)unknown_libname_27((_DWORD *)result); /*0x5e78a0*/
        MEMORY[0xAC1154] = (void *)result; /*0x5e78a5*/
      }
      if ( MEMORY[0xAC1154] ) /*0x5e78b0*/
      {
        if ( IsRandMap::Sed2((int)MEMORY[0xA8B238]) ) /*0x5e78b7*/
        {
          ScenarioClass::CopyStartPositions(); /*0x5e78f5*/
          return InvalidateRect(hWnd, 0, 0); /*0x5e78fa*/
        }
        else
        {
          PreviewClass::ReadPreview((char **)MEMORY[0xAC1154], &MEMORY[0xA8B8E0]); /*0x5e78cb*/
          return InvalidateRect(hWnd, 0, 0); /*0x5e78d3*/
        }
      }
      return result;
  }
  while ( 1 ) /*0x5e757e*/
  {
    if ( MEMORY[0xA8B238][0] == 3 ) /*0x5e7584*/
    {
      v3 = Network::SendMessage((int)MEMORY[0xA8E9C0], (int)Str, 47, 1, (int)&MEMORY[0xA8BB1C], 0, 0); /*0x5e759d*/
    }
    else
    {
      Flagged = GameSettings::FindFlagged(); /*0x5e75a4*/
      if ( !Flagged ) /*0x5e75ab*/
        goto LABEL_12; /*0x5e75ab*/
      v5 = CharToWideString(Flagged + 36); /*0x5e75b0*/
      v3 = Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)Str, 47, 1, (wchar_t *)v5); /*0x5e75c4*/
    }
    if ( v3 ) /*0x5e75cb*/
    {
      for ( result = Network::GetQueueCount((int)MEMORY[0xA8E9C0]); /*0x5e75e0*/
            result;
            result = Network::GetQueueCount((int)MEMORY[0xA8E9C0]) )
      {
        Event::Dispatch(); /*0x5e75e6*/
      }
      return result; /*0x5e75f7*/
    }
LABEL_12:
    Event::Dispatch(); /*0x5e75cd*/
  }
}


// ==== 0x005E7920  ExchangeMultiplayerGameInfo  this=-  sig=ida-proto ====
void ExchangeMultiplayerGameInfo()
{
  int v0; // eax
  char *FlaggedGameSettings; // eax
  char *v2; // eax
  int FileSize; // edi
  char *v4; // esi
  signed int v5; // ebx
  char *v6; // edi
  void *v7; // ebx
  void *v8; // eax
  void *v9; // eax
  HWND CurrentDialog; // eax
  int v11[3]; // [esp+8h] [ebp-330h] BYREF
  _DWORD v12[4]; // [esp+14h] [ebp-324h] BYREF
  int v13[9]; // [esp+24h] [ebp-314h] BYREF
  int v14[10]; // [esp+48h] [ebp-2F0h] BYREF
  int v15[113]; // [esp+70h] [ebp-2C8h] BYREF
  __int16 v16; // [esp+234h] [ebp-104h]
  char v17; // [esp+236h] [ebp-102h]
  char v18[256]; // [esp+238h] [ebp-100h] BYREF

  Network::SetConnectionParams(MEMORY[0xA8E9C0], 50, -1, 5000, 1); /*0x5e7938*/
  Debug::Log(); /*0x5e7942*/
  memset(v15, 0, sizeof(v15)); /*0x5e7957*/
  v16 = 0; /*0x5e7959*/
  v17 = 0; /*0x5e795b*/
  v15[0] = 26; /*0x5e795c*/
  Debug::Log(); /*0x5e7964*/
  while ( 1 ) /*0x5e7977*/
  {
    if ( MEMORY[0xA8B238][0] == 3 ) /*0x5e7977*/
    {
      v0 = Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v15, 455, 1, (int)&MEMORY[0xA8BB1C], 0, 0); /*0x5e7996*/
    }
    else
    {
      FlaggedGameSettings = GameSettings::FindFlagged(); /*0x5e799d*/
      if ( !FlaggedGameSettings ) /*0x5e79a4*/
        break; /*0x5e79a4*/
      v2 = CharToWideString(FlaggedGameSettings + 36); /*0x5e79a9*/
      v0 = Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)v15, 455, 1, (wchar_t *)v2); /*0x5e79c0*/
    }
    if ( v0 ) /*0x5e79c7*/
      break; /*0x5e79c7*/
    Event::Dispatch(); /*0x5e79c9*/
  }
  while ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) ) /*0x5e79d5*/
    Event::Dispatch(); /*0x5e79de*/
  Debug::Log(); /*0x5e79f6*/
  MEMORY[0xA8D804] = MEMORY[0xA8BB1C]; /*0x5e7a11*/
  MEMORY[0xA8D808] = MEMORY[0xA8BB20]; /*0x5e7a17*/
  MEMORY[0xA8D80C] = MEMORY[0xA8BB24]; /*0x5e7a1c*/
  Debug::Log(); /*0x5e7a22*/
  if ( RequestNetworkFile(v18, 3, 0) ) /*0x5e7a35*/
  {
    Debug::Log(); /*0x5e7a6f*/
    RawFileClass::Construct(v13, (int)v18); /*0x5e7a83*/
    FileSize = CCFileClass::GetFileSize(v13); /*0x5e7a91*/
    v4 = (char *)__2_YAPAXI_Z(FileSize); /*0x5e7a9c*/
    FileClass::Read(v13, v4, FileSize); /*0x5e7aa4*/
    v5 = *(_DWORD *)v4; /*0x5e7aa9*/
    Debug::Log(); /*0x5e7ab0*/
    v11[1] = 0; /*0x5e7abf*/
    v11[2] = 0; /*0x5e7ac9*/
    Buffer::Init(v12, (int)(v4 + 4), FileSize); /*0x5e7ad9*/
    v12[3] = 0; /*0x5e7ae2*/
    v11[0] = (int)&vt_BufferStraw; /*0x5e7af1*/
    LZOStraw::Constructor(v14, 1, 0x2000); /*0x5e7af9*/
    Delegate::Set(v14, (int)v11); /*0x5e7b07*/
    v6 = (char *)__2_YAPAXI_Z(2 * v5); /*0x5e7b18*/
    LCW::Decompress((int)v14, v6, v5); /*0x5e7b20*/
    Debug::Log(); /*0x5e7b2a*/
    if ( MEMORY[0xAC1154] ) /*0x5e7b39*/
    {
      v7 = MEMORY[0xAC1154]; /*0x5e7b3b*/
      ComPtr::Dtor(MEMORY[0xAC1154]); /*0x5e7b43*/
      __3_YAXPAX_Z(v7); /*0x5e7b49*/
    }
    v8 = __2_YAPAXI_Z(4u); /*0x5e7b53*/
    if ( v8 ) /*0x5e7b5e*/
      v9 = (void *)unknown_libname_27(v8); /*0x5e7b62*/
    else
      v9 = 0; /*0x5e7b69*/
    MEMORY[0xAC1154] = v9; /*0x5e7b6e*/
    ModemGame::RenderPaletteImage(v6); /*0x5e7b73*/
    CurrentDialog = Dialog::GetCurrent(); /*0x5e7b7c*/
    InvalidateRect(CurrentDialog, 0, 0); /*0x5e7b82*/
    Debug::Log(); /*0x5e7b8d*/
    __3_YAXPAX_Z(v6); /*0x5e7b93*/
    __3_YAXPAX_Z(v4); /*0x5e7b99*/
    Network::SetConnectionParams(MEMORY[0xA8E9C0], 30, -1, 600, 1); /*0x5e7bb1*/
    LZOStraw::Destructor(v14); /*0x5e7bba*/
    Vector::Clear((int)v12); /*0x5e7bc3*/
    Straw::Dtor(v11); /*0x5e7bcc*/
    RawFileClass::Dtor(v13); /*0x5e7bd5*/
  }
  else
  {
    Debug::Log(); /*0x5e7a43*/
    Network::SetConnectionParams(MEMORY[0xA8E9C0], 30, -1, 600, 1); /*0x5e7a5b*/
  }
}


// ==== 0x005E7BF0  LoadScenarioClassByIndex  this=-  sig=ida-proto ====
char __fastcall LoadScenarioClassByIndex(int a1)
{
  char result; // al
  CCFileClass *v3; // eax
  char v4; // al
  bool v5; // bl
  int **v6; // esi
  int v7; // eax
  int Field; // eax
  wchar_t *eax8; // eax
  ScenarioClass *v9; // eax
  int PlayerCountMap; // esi
  int v12; // eax
  CCFileClass *v13; // eax
  CCFileClass *v14; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-90h]
  int v16; // [esp+0h] [ebp-80h]
  _DWORD v17[22]; // [esp+14h] [ebp-6Ch] BYREF
  _BYTE v18[12]; // [esp+6Ch] [ebp-14h] BYREF
  int v19; // [esp+78h] [ebp-8h]

  if ( a1 == -1 ) /*0x5e7bfb*/
  {
    *(_DWORD *)&HouseClass_Player.__pad_5568[10320] = 0; /*0x5e7c00*/
    HouseClass_Player.__pad_5568[10324] = 0; /*0x5e7c05*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[10328] = 0; /*0x5e7c0a*/
    *(_WORD *)&HouseClass_Player.__pad_5568[8302] = 0; /*0x5e7c0f*/
    HouseClass_Player.__pad_5568[9772] = 0; /*0x5e7c16*/
    HouseClass_Player.__pad_5568[10286] = 0; /*0x5e7c1d*/
    return 0; /*0x5e7c2a*/
  }
  v3 = CCFileClass::Construct(v17, (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * a1) + 88)); /*0x5e7c3b*/
  v4 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v3->__pad_0 + 20))(v3, 0); /*0x5e7c46*/
  v17[0] = &vt_CCFileClass; /*0x5e7c4f*/
  v5 = v4 == 0; /*0x5e7c57*/
  v19 = 0; /*0x5e7c5a*/
  Vector::Clear((int)v18); /*0x5e7c62*/
  v17[0] = &off_7E1668; /*0x5e7c6b*/
  BufferIOFileClass::Dtor(v17); /*0x5e7c73*/
  if ( !v5 ) /*0x5e7c7a*/
    goto LABEL_9; /*0x5e7c7a*/
  if ( dword_81C1D0 == -2 ) /*0x5e7c87*/
  {
    StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_1140[120], 3627); /*0x5e7cfe*/
    eax8 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[32], 0, &stru_830620.__pad_1140[120], 3627); /*0x5e7d09*/
    Dialog::ShowMessageBox((int)eax8, StringCSF, 0, 0, 0, v16); /*0x5e7d13*/
    return 0; /*0x5e7d20*/
  }
  v6 = (int **)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * a1); /*0x5e7c93*/
  v7 = Game::CheckForGameCD((void *)0x3C); /*0x5e7c96*/
  if ( ScenarioClass::CheckExists(*v6, v7) /*0x5e7cca*/
    || (Field = GameOption::GetField(*(_DWORD ***)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * a1)),
        (result = CD::`vftable'(Field)) != 0) )
  {
LABEL_9:
    wcscpy( /*0x5e7d31*/
      (wchar_t *)&HouseClass_Player.__pad_5568[8302],
      *(const wchar_t **)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * a1));
    strcpy( /*0x5e7d5f*/
      &HouseClass_Player.__pad_5568[10286],
      (const char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * a1) + 348));
    v9 = *(ScenarioClass **)&HouseClass_Player.__pad_5568[8060]; /*0x5e7d7e*/
    strcpy( /*0x5e7d8f*/
      &HouseClass_Player.__pad_5568[9772],
      (const char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * a1) + 88));
    strcpy((char *)v9->fileName, &HouseClass_Player.__pad_5568[9772]); /*0x5e7db7*/
    HouseClass_Player.__pad_5568[10324] = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * a1) /*0x5e7dd1*/
                                                   + 380);
    PlayerCountMap = ReadPlayerCountMap(a1); /*0x5e7de5*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] ) /*0x5e7de7*/
    {
      v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 152))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x5e7deb*/
      if ( v12 != -1 && v12 < PlayerCountMap ) /*0x5e7df8*/
        PlayerCountMap = v12; /*0x5e7dfa*/
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5e7e03*/
    {
      if ( Network::IsLobbyFeature() ) /*0x5e7e05*/
      {
        PlayerCountMap &= ~1u; /*0x5e7e0e*/
      }
      else if ( Network::IsMultiplayerActive() ) /*0x5e7e13*/
      {
        PlayerCountMap = 2; /*0x5e7e1c*/
      }
    }
    *(_DWORD *)&HouseClass_Player.__pad_5568[10328] = PlayerCountMap; /*0x5e7e2a*/
    v13 = CCFileClass::Construct(v17, &HouseClass_Player.__pad_5568[9772]); /*0x5e7e30*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[10320] = (*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)v13->__pad_0 + 44))(v13); /*0x5e7e45*/
    v17[0] = &vt_CCFileClass; /*0x5e7e4a*/
    v19 = 0; /*0x5e7e4e*/
    Vector::Clear((int)v18); /*0x5e7e52*/
    v17[0] = &off_7E1668; /*0x5e7e60*/
    BufferIOFileClass::Dtor(v17); /*0x5e7e64*/
    v14 = CCFileClass::Construct(v17, &HouseClass_Player.__pad_5568[9772]); /*0x5e7e72*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[10320] = (*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)v14->__pad_0 + 44))(v14); /*0x5e7e82*/
    v17[0] = &vt_CCFileClass; /*0x5e7e87*/
    v19 = 0; /*0x5e7e8b*/
    Vector::Clear((int)v18); /*0x5e7e8f*/
    v17[0] = &off_7E1668; /*0x5e7e98*/
    BufferIOFileClass::Dtor(v17); /*0x5e7e9c*/
    return 1; /*0x5e7ea1*/
  }
  return result; /*0x5e7bff*/
}


// ==== 0x005E7EB0  MapPreview::Upload  this=IUnknown  sig=csp ====
signed int __thiscall MapPreview_Upload(int *this)
{
  signed int result; // eax
  int i; // ebp
  int *v4; // eax
  int v5; // esi
  int v6; // edi
  size_t v7; // eax
  int v8; // esi
  unsigned int v9; // eax
  int v10; // ecx
  int j; // esi
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int v15; // edi
  int v16; // eax
  int *v17; // ebp
  void *v18; // esi
  int v19; // edi
  DWORD v20; // edi
  char *v21; // [esp-4h] [ebp-58Ch]
  char *v22; // [esp-4h] [ebp-58Ch]
  DWORD Ticks; // [esp+10h] [ebp-578h]
  DWORD v24; // [esp+10h] [ebp-578h]
  size_t Size[2]; // [esp+1Ch] [ebp-56Ch] BYREF
  int *v26; // [esp+24h] [ebp-564h]
  _DWORD v27[2]; // [esp+28h] [ebp-560h] BYREF
  int v28; // [esp+30h] [ebp-558h] BYREF
  _BYTE v29[2]; // [esp+36h] [ebp-552h] BYREF
  _BYTE v30[4]; // [esp+38h] [ebp-550h] BYREF
  int v31[3]; // [esp+44h] [ebp-544h] BYREF
  _DWORD v32[4]; // [esp+50h] [ebp-538h] BYREF
  _BYTE v33[12]; // [esp+60h] [ebp-528h] BYREF
  int v34[9]; // [esp+6Ch] [ebp-51Ch] BYREF
  _DWORD v35[10]; // [esp+90h] [ebp-4F8h] BYREF
  char v36[64]; // [esp+B8h] [ebp-4D0h] BYREF
  char Buffer[256]; // [esp+F8h] [ebp-490h] BYREF
  int v38[113]; // [esp+1F8h] [ebp-390h] BYREF
  __int16 v39; // [esp+3BCh] [ebp-1CCh]
  char v40; // [esp+3BEh] [ebp-1CAh]
  _DWORD v41[114]; // [esp+3C0h] [ebp-1C8h] BYREF

  v26 = this; /*0x5e7ec0*/
  result = Timer::GetTicks(); /*0x5e7ec4*/
  if ( this ) /*0x5e7ed7*/
  {
    result = MEMORY[0xA8DA84]; /*0x5e7edd*/
    if ( MEMORY[0xA8DA84] > 1 ) /*0x5e7ee9*/
    {
      if ( MEMORY[0xA8B230] ) /*0x5e7ef6*/
      {
        sprintf( /*0x5e7f2e*/
          Buffer,
          MEMORY[0x831C18],
          87,
          *((_DWORD *)MEMORY[0xA8B230] + 1101),
          *((_DWORD *)MEMORY[0xA8B230] + 1102),
          *((_DWORD *)MEMORY[0xA8B230] + 1099),
          *((_DWORD *)MEMORY[0xA8B230] + 1100),
          *((_DWORD *)MEMORY[0xA8B230] + 1103));
        for ( i = 0; i < 8; ++i ) /*0x5e7f36*/
        {
          v4 = (int *)Map_Helper_58BB00(v30, i); /*0x5e7f3e*/
          v5 = *v4; /*0x5e7f43*/
          v6 = v4[1]; /*0x5e7f4c*/
          if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid(i) ) /*0x5e7f4f*/
            v7 = *(_DWORD *)ScenarioClass::Get_Waypoint_Location(v27, i); /*0x5e7f69*/
          else
            v7 = MEMORY[0xAC0B90]; /*0x5e7f6d*/
          Size[1] = v7; /*0x5e7f72*/
          sprintf(v36, MEMORY[0x831C08], v5, v6, (__int16)v7, SHIWORD(v7)); /*0x5e7f8f*/
          strcat(Buffer, v36); /*0x5e7fc1*/
        }
        Network::SendOptionsGame(Buffer); /*0x5e7fdb*/
      }
      if ( MEMORY[0xA8B238] == 4 ) /*0x5e7fe7*/
      {
        if ( MEMORY[0xABFEC8] && (MEMORY[0xABFEC8] & 1) == 0 ) /*0x5e7ff8*/
        {
LABEL_22:
          strcpy(Buffer, "Z3"); /*0x5e808f*/
          Debug::Log(MEMORY[0x831B60], Buffer); /*0x5e80b4*/
          return (*(int (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 60))(MEMORY[0xAC116C], Buffer); /*0x5e80d9*/
        }
        v8 = 1; /*0x5e8003*/
        if ( MEMORY[0xA8DA84] > 1 ) /*0x5e8007*/
        {
          while ( 1 ) /*0x5e8013*/
          {
            v9 = GameClass::FindPlayerName(v8); /*0x5e8013*/
            if ( v9 < 8 ) /*0x5e801a*/
            {
              v10 = MEMORY[0xA8DC2C][v9]; /*0x5e8021*/
              if ( v10 && (v10 & 1) == 0 ) /*0x5e802f*/
              {
                v21 = ToWideStringChar(*(char **)(MEMORY[0xA8DA78] + 4 * v8)); /*0x5e806b*/
                Debug::Log(MEMORY[0x831BD4], v21); /*0x5e8071*/
                goto LABEL_22; /*0x5e8071*/
              }
              if ( !NetworkID::Compare(12 * v9 + 11066316, *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v8) + 40) ) /*0x5e8048*/
                break; /*0x5e8048*/
            }
            if ( ++v8 >= MEMORY[0xA8DA84] ) /*0x5e8059*/
              goto LABEL_23; /*0x5e8059*/
          }
          v22 = ToWideStringChar(*(char **)(MEMORY[0xA8DA78] + 4 * v8)); /*0x5e8081*/
          Debug::Log(MEMORY[0x831B84], v22); /*0x5e8087*/
          goto LABEL_22; /*0x5e8087*/
        }
      }
LABEL_23:
      Debug::Log(aStartingMapPre_0); /*0x5e80da*/
      memset(v38, 0, sizeof(v38)); /*0x5e80f5*/
      v39 = 0; /*0x5e80f7*/
      v40 = 0; /*0x5e80f9*/
      v38[0] = 25; /*0x5e8119*/
      strcpy((char *)&v38[1], MEMORY[0xA8B380]); /*0x5e8127*/
      Network::SetConnectionParams(MEMORY[0xA8E9C0], 50, -1, 5000, 1); /*0x5e813e*/
      Ticks = Timer::GetTicks(); /*0x5e8150*/
      for ( j = 1; j < MEMORY[0xA8DA84]; ++j ) /*0x5e8170*/
      {
        Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)v38, 455, 1, *(wchar_t **)(MEMORY[0xA8DA78] + 4 * j)); /*0x5e818b*/
        Event::Dispatch(); /*0x5e8190*/
      }
      while ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) ) /*0x5e81a4*/
      {
        v12 = 1200; /*0x5e81b1*/
        if ( Ticks != -1 ) /*0x5e81b7*/
        {
          v13 = Timer::GetTicks() - Ticks; /*0x5e81c2*/
          if ( v13 >= 1200 ) /*0x5e81c8*/
            break; /*0x5e81c8*/
          v12 = 1200 - v13; /*0x5e81ca*/
        }
        if ( !v12 ) /*0x5e81ce*/
          break; /*0x5e81ce*/
        Event::Dispatch(); /*0x5e81d0*/
      }
      result = Ticks; /*0x5e81e3*/
      v14 = 1200; /*0x5e81e7*/
      if ( Ticks != -1 ) /*0x5e81ed*/
      {
        result = Timer::GetTicks() - Ticks; /*0x5e81f8*/
        if ( result >= 1200 ) /*0x5e81fe*/
          return result; /*0x5e81fe*/
        v14 = 1200 - result; /*0x5e8204*/
      }
      if ( v14 ) /*0x5e8208*/
      {
        Waypoint::InitInvalid(v33); /*0x5e8212*/
        v27[0] = 0; /*0x5e821d*/
        v15 = 0; /*0x5e8221*/
        v27[1] = 0; /*0x5e8223*/
        v24 = Timer::GetTicks(); /*0x5e8230*/
        Debug::Log(MEMORY[0x831B2C], MEMORY[0xA8DA84] - 1); /*0x5e824d*/
        if ( MEMORY[0xA8DA84] - 1 > 0 ) /*0x5e825e*/
        {
          do /*0x5e8318*/
          {
            v14 = 1800; /*0x5e826d*/
            if ( v24 != -1 ) /*0x5e8274*/
            {
              v16 = Timer::GetTicks() - v24; /*0x5e827f*/
              if ( v16 >= 1800 ) /*0x5e8285*/
                break; /*0x5e8285*/
              v14 = 1800 - v16; /*0x5e828b*/
            }
            if ( !v14 ) /*0x5e828f*/
              break; /*0x5e828f*/
            Event::Dispatch(); /*0x5e8295*/
            v28 = 455; /*0x5e82b6*/
            if ( Network::Send((int)MEMORY[0xA8E9C0], (int)v41, (int)&v28, (int)v33, (int)v29) ) /*0x5e82ba*/
            {
              if ( v41[0] == 26 ) /*0x5e82ca*/
              {
                v14 = 1; /*0x5e82d1*/
                if ( MEMORY[0xA8DA84] > 1 ) /*0x5e82d8*/
                {
                  while ( !NetworkID::Compare((int)v33, *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v14) + 40) ) /*0x5e82f1*/
                  {
                    if ( ++v14 >= MEMORY[0xA8DA84] ) /*0x5e82fb*/
                      goto LABEL_48; /*0x5e82fb*/
                  }
                  if ( !*((_BYTE *)v27 + v14) ) /*0x5e82ff*/
                  {
                    *((_BYTE *)v27 + v14) = 1; /*0x5e830b*/
                    ++v15; /*0x5e830e*/
                  }
                }
              }
            }
LABEL_48:
            ;
          }
          while ( v15 < MEMORY[0xA8DA84] - 1 ); /*0x5e8318*/
        }
        result = MEMORY[0xA8DA84] - 1; /*0x5e831e*/
        if ( v15 == MEMORY[0xA8DA84] - 1 ) /*0x5e8326*/
        {
          Debug::Log(MEMORY[0x831B0C]); /*0x5e8331*/
          Size[0] = 0; /*0x5e833d*/
          v17 = Palette::Preview_Generate(v26, v14, 64, Size); /*0x5e8351*/
          Debug::Log("Preview size is %d bytes\n", Size[0]); /*0x5e835d*/
          v18 = __2_YAPAXI_Z(4 * Size[0]); /*0x5e837a*/
          v31[1] = 0; /*0x5e838b*/
          v31[2] = 0; /*0x5e838f*/
          v31[0] = (int)&vt_Pipe; /*0x5e8393*/
          Buffer::Init(v32, (int)v18, 4 * Size[0]); /*0x5e839b*/
          v32[3] = 0; /*0x5e83a7*/
          v31[0] = (int)&vt_BufferPipe; /*0x5e83b1*/
          LZOPipe::Constructor(0, 0x2000); /*0x5e83b9*/
          Pipe::SetDelegate(v31); /*0x5e83ca*/
          v19 = Compression::Read((int)v35, (int)v17, Size[0]); /*0x5e83e1*/
          v20 = (*(int (__thiscall **)(_DWORD *))(v35[0] + 4))(v35) + v19; /*0x5e83f4*/
          __3_YAXPAX_Z(v17); /*0x5e83f7*/
          Debug::Log(MEMORY[0x82CC5C], v20); /*0x5e8402*/
          RawFileClass::Construct(v34, (int)g_Str_File_Preview_bin); /*0x5e8413*/
          if ( FileClass::Open(v34, 0) ) /*0x5e841d*/
            FileClass::Delete(v34); /*0x5e842a*/
          FileClass::Open2(2); /*0x5e8435*/
          FileClass::Write2(Size, 4u); /*0x5e8445*/
          FileClass::Write2(v18, v20); /*0x5e8450*/
          FileClass::CloseHandle(v34); /*0x5e8459*/
          __3_YAXPAX_Z(v18); /*0x5e845f*/
          Debug::Log(aCallingSendRem); /*0x5e8469*/
          SendNetworkFile(g_Str_File_Preview_bin, 1, 0); /*0x5e847e*/
          Network::SetConnectionParams(MEMORY[0xA8E9C0], 30, -1, 600, 1); /*0x5e8493*/
          RawFileClass::Dtor(v34); /*0x5e849c*/
          LZOPipe::Destructor(v35); /*0x5e84a8*/
          Vector::Clear((int)v32); /*0x5e84b1*/
          return Pipe::Dtor(v31); /*0x5e84ba*/
        }
      }
    }
  }
  return result; /*0x5e80cf*/
}


// ==== 0x005E84D0  GameConfig::ComputeCRC  this=GameConfig  sig=csp ====
char *GameConfig_ComputeCRC()
{
  unsigned int v0; // ebx
  int *v1; // ebp
  int v2; // edx
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax
  int *v6; // esi
  int v7; // ebp
  char *v8; // ebp
  int *v10; // [esp+10h] [ebp-104h]
  _BYTE v11[256]; // [esp+14h] [ebp-100h] BYREF

  v0 = 0; /*0x5e84e8*/
  qmemcpy(v11, &word_ABE050, sizeof(v11)); /*0x5e84ea*/
  v1 = &dword_ABE010; /*0x5e84ec*/
  v10 = &dword_ABE010; /*0x5e84fd*/
  v2 = 320; /*0x5e8501*/
  memset(&word_ABE050, 0, 0x100u); /*0x5e8506*/
  do /*0x5e854a*/
  {
    v3 = v0 >> 31; /*0x5e850a*/
    if ( v2 < 4 ) /*0x5e8510*/
    {
      v5 = 0; /*0x5e8526*/
      v6 = v1; /*0x5e8528*/
      v7 = v2; /*0x5e852e*/
      v2 = 0; /*0x5e8530*/
      do /*0x5e853d*/
      {
        v5 = *(unsigned __int8 *)v6 | (v5 << 8); /*0x5e8539*/
        v6 = (int *)((char *)v6 + 1); /*0x5e853b*/
        --v7; /*0x5e853c*/
      }
      while ( v7 ); /*0x5e853d*/
      v1 = v10; /*0x5e853f*/
      v0 = v3 + v5 + 2 * v0; /*0x5e8546*/
    }
    else
    {
      v4 = *v1++; /*0x5e8512*/
      v10 = v1; /*0x5e8518*/
      v0 = v3 + v4 + 2 * v0; /*0x5e851f*/
      v2 -= 4; /*0x5e8521*/
    }
  }
  while ( v2 > 0 ); /*0x5e854a*/
  v8 = (char *)__2_YAPAXI_Z(0xCu); /*0x5e8553*/
  sprintf(v8, stru_817828, v0); /*0x5e855c*/
  qmemcpy(&word_ABE050, v11, 0x100u); /*0x5e8572*/
  return v8; /*0x5e8574*/
}


// ==== 0x005E8590  ObjectClass::SkirmishSetup_Setup_5E8590  this=ObjectClass  sig=csp ====
ObjectClass *SkirmishSetup_Setup_5E8590()
{
  char (*v0)(); // ecx
  ObjectClass *v2; // esi
  _DWORD *v3; // eax
  ObjectClass *v4; // eax
  int v5; // ebx
  CCINIClass *v6; // edi
  wchar_t *v7; // eax
  wchar_t *v8; // esi
  int v9; // eax
  char **v10; // esi
  CCINIClass *v11; // eax

  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 3 ) /*0x5e8598*/
  {
    v0 = (char (*)())sub_5DAF20; /*0x5e859a*/
  }
  else if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5e85a4*/
  {
    v0 = (char (*)())Game::ProcessIdle; /*0x5e85a6*/
  }
  else if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 1 /*0x5e85ba*/
         || (v0 = Event_Dispatch::Return0, *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 2) )
  {
    v0 = (char (*)())&loc_5BB260; /*0x5e85bc*/
  }
  if ( CCFileClass::Load(v0) != 1 ) /*0x5e85c9*/
    return (ObjectClass *)-1; /*0x5e85cb*/
  stru_830620.__pad_DFC[696] = 1; /*0x5e85db*/
  MapSeed::ValidateName((char *)dword_ABDFD8, (int)aRandmapSed); /*0x5e85e2*/
  v2 = (ObjectClass *)*(&g_MatrixTransformState + 2257); /*0x5e85e7*/
  if ( *(&g_MatrixTransformState + 2257) ) /*0x5e85ef*/
  {
    ComPtr::Dtor(*(&g_MatrixTransformState + 2257)); /*0x5e85f3*/
    __3_YAXPAX_Z(v2); /*0x5e85f9*/
  }
  v3 = (_DWORD *)__2_YAPAXI_Z(4u); /*0x5e8603*/
  if ( v3 ) /*0x5e860d*/
    v4 = (ObjectClass *)unknown_libname_27(v3); /*0x5e8611*/
  else
    v4 = 0; /*0x5e8618*/
  *(&g_MatrixTransformState + 2257) = (CoordStruct *)v4; /*0x5e8621*/
  Surface::LoadToSurfaceSHP((char **)v4, stru_829ABC.__pad_0); /*0x5e8626*/
  v5 = 0; /*0x5e8630*/
  if ( *(int *)&HouseClass_Player.__pad_5568[9764] <= 0 ) /*0x5e8634*/
  {
LABEL_18:
    v6 = (CCINIClass *)GameConfig::ComputeCRC(); /*0x5e8655*/
    v7 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x5e8662*/
    if ( v7 ) /*0x5e866c*/
      v8 = SessionClass::ParseGameInfo( /*0x5e8688*/
             v7,
             aRandmapSed,
             (CampaignScore *)&word_ABE050,
             v6,
             (CampaignScore *)1,
             0,
             (CampaignScore *)2,
             4);
    else
      v8 = 0; /*0x5e868c*/
    if ( *(int *)&HouseClass_Player.__pad_5568[9764] < *(int *)&HouseClass_Player.__pad_5568[9756] /*0x5e86c5*/
      || (HouseClass_Player.__pad_5568[9761] || !*(_DWORD *)&HouseClass_Player.__pad_5568[9756])
      && *(int *)&HouseClass_Player.__pad_5568[9768] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[9748] + 8))(
           &HouseClass_Player.__pad_5568[9748],
           *(_DWORD *)&HouseClass_Player.__pad_5568[9756] + *(_DWORD *)&HouseClass_Player.__pad_5568[9768],
           0) )
    {
      v9 = (*(_DWORD *)&HouseClass_Player.__pad_5568[9764])++; /*0x5e86d2*/
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v9) = v8; /*0x5e86e1*/
    }
    __3_YAXPAX_Z(v6); /*0x5e86e5*/
    return (ObjectClass *)v5; /*0x5e86ed*/
  }
  else
  {
    while ( !IsRandMap::Sed(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v5)) ) /*0x5e8645*/
    {
      if ( ++v5 >= *(int *)&HouseClass_Player.__pad_5568[9764] ) /*0x5e8653*/
        goto LABEL_18; /*0x5e8653*/
    }
    GameOption::SetDescriptionWStr( /*0x5e8701*/
      *(wchar_t **)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v5),
      (CampaignScore *)&word_ABE050);
    v10 = (char **)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v5); /*0x5e870b*/
    v11 = (CCINIClass *)GameConfig::ComputeCRC(); /*0x5e870e*/
    GameOption::SetDigest(*v10, v11); /*0x5e8716*/
    return (ObjectClass *)v5; /*0x5e871b*/
  }
}


// ==== 0x005E8740  Render_Setup  this=-  sig=ida-proto ====
BOOL __fastcall sub_5E8740(int a1)
{
  return wcscmp(*(const wchar_t **)(MEMORY[0xA8DA78] + 4 * a1), MEMORY[0xA8D610]) == 0; /*0x5e875b*/
}


// ==== 0x005E8760  Settings::CheckString  this=Game  sig=csp ====
BOOL Settings_CheckString()
{
  char *v0; // eax

  v0 = CharToWideString(MEMORY[0xA8B380]); /*0x5e8765*/
  return wcscmp((const wchar_t *)v0, &MEMORY[0xA8D610]) == 0; /*0x5e877d*/
}


// ==== 0x005E87A0  LoadNetworkShareStrings  this=-  sig=csp ====
wchar_t *LoadNetworkShareStrings()
{
  wchar_t *v0; // eax
  wchar_t *v1; // esi
  wchar_t *v2; // eax
  wchar_t *v3; // esi
  wchar_t *v4; // eax
  wchar_t *v5; // esi
  wchar_t *v6; // eax
  wchar_t *v7; // esi
  wchar_t *v8; // eax
  wchar_t *v9; // esi
  wchar_t *v10; // eax
  wchar_t *v11; // esi
  wchar_t *result; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // esi

  if ( !MEMORY[0xAC117C] ) /*0x5e87a7*/
  {
    MEMORY[0xAC117C] = GetStringCSF(MEMORY[0x831C80], 0, MEMORY[0x8317D8], 4078); /*0x5e87d4*/
    MEMORY[0xAC1180] = GetStringCSF(MEMORY[0x831C74], 0, MEMORY[0x8317D8], 4079); /*0x5e87ef*/
    MEMORY[0xAC1184] = GetStringCSF(MEMORY[0x831C68], 0, MEMORY[0x8317D8], 4080); /*0x5e880a*/
    MEMORY[0xAC1188] = GetStringCSF(MEMORY[0x831C58], 0, MEMORY[0x8317D8], 4081); /*0x5e8825*/
    MEMORY[0xAC118C] = GetStringCSF(MEMORY[0x831C4C], 0, MEMORY[0x8317D8], 4082); /*0x5e8840*/
    MEMORY[0xAC1190] = GetStringCSF(MEMORY[0x831C40], 0, MEMORY[0x8317D8], 4083); /*0x5e885b*/
    MEMORY[0xAC1194] = GetStringCSF(MEMORY[0x831C2C], 0, MEMORY[0x8317D8], 4084); /*0x5e8865*/
  }
  if ( !MEMORY[0xAC119C] ) /*0x5e8872*/
  {
    v0 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e8879*/
    v1 = v0; /*0x5e887e*/
    if ( v0 ) /*0x5e8885*/
      Waypoint::InitInvalid((_BYTE *)v0 + 40); /*0x5e888a*/
    else
      v1 = 0; /*0x5e8891*/
    MEMORY[0xAC119C] = (LPARAM)v1; /*0x5e8898*/
    wcscpy(v1, MEMORY[0xAC117C]); /*0x5e88a0*/
  }
  if ( !MEMORY[0xAC11A0] ) /*0x5e88af*/
  {
    v2 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e88b6*/
    v3 = v2; /*0x5e88bb*/
    if ( v2 ) /*0x5e88c2*/
      Waypoint::InitInvalid((_BYTE *)v2 + 40); /*0x5e88c7*/
    else
      v3 = 0; /*0x5e88ce*/
    MEMORY[0xAC11A0] = (LPARAM)v3; /*0x5e88d6*/
    wcscpy(v3, MEMORY[0xAC1180]); /*0x5e88de*/
  }
  if ( !MEMORY[0xAC11A4] ) /*0x5e88ed*/
  {
    v4 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e88f4*/
    v5 = v4; /*0x5e88f9*/
    if ( v4 ) /*0x5e8900*/
      Waypoint::InitInvalid((_BYTE *)v4 + 40); /*0x5e8905*/
    else
      v5 = 0; /*0x5e890c*/
    MEMORY[0xAC11A4] = (LPARAM)v5; /*0x5e8914*/
    wcscpy(v5, MEMORY[0xAC1184]); /*0x5e891c*/
  }
  if ( !MEMORY[0xAC11A8] ) /*0x5e892b*/
  {
    v6 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e8932*/
    v7 = v6; /*0x5e8937*/
    if ( v6 ) /*0x5e893e*/
      Waypoint::InitInvalid((_BYTE *)v6 + 40); /*0x5e8943*/
    else
      v7 = 0; /*0x5e894a*/
    MEMORY[0xAC11A8] = (LPARAM)v7; /*0x5e8951*/
    wcscpy(v7, MEMORY[0xAC1188]); /*0x5e8959*/
  }
  if ( !MEMORY[0xAC11AC] ) /*0x5e8968*/
  {
    v8 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e896f*/
    v9 = v8; /*0x5e8974*/
    if ( v8 ) /*0x5e897b*/
      Waypoint::InitInvalid((_BYTE *)v8 + 40); /*0x5e8980*/
    else
      v9 = 0; /*0x5e8987*/
    MEMORY[0xAC11AC] = (LPARAM)v9; /*0x5e898f*/
    wcscpy(v9, MEMORY[0xAC118C]); /*0x5e8997*/
  }
  if ( !MEMORY[0xAC11B0] ) /*0x5e89a6*/
  {
    v10 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e89ad*/
    v11 = v10; /*0x5e89b2*/
    if ( v10 ) /*0x5e89b9*/
      Waypoint::InitInvalid((_BYTE *)v10 + 40); /*0x5e89be*/
    else
      v11 = 0; /*0x5e89c5*/
    MEMORY[0xAC11B0] = v11; /*0x5e89cd*/
    wcscpy(v11, MEMORY[0xAC1190]); /*0x5e89d5*/
  }
  result = (wchar_t *)MEMORY[0xAC11B4]; /*0x5e89dd*/
  if ( !MEMORY[0xAC11B4] ) /*0x5e89e4*/
  {
    v13 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e89eb*/
    v14 = v13; /*0x5e89f0*/
    if ( v13 ) /*0x5e89f7*/
      Waypoint::InitInvalid((_BYTE *)v13 + 40); /*0x5e89fc*/
    else
      v14 = 0; /*0x5e8a03*/
    MEMORY[0xAC11B4] = (LPARAM)v14; /*0x5e8a0a*/
    return wcscpy(v14, MEMORY[0xAC1194]); /*0x5e8a12*/
  }
  return result; /*0x5e8a1b*/
}


// ==== 0x005E8A20  WinMainSetup_Setup_5DB6F0_Setup  this=-  sig=csp ====
int sub_5E8A20()
{
  if ( MEMORY[0xAC119C] ) /*0x5e8a2a*/
  {
    __3_YAXPAX_Z((void *)MEMORY[0xAC119C]); /*0x5e8a2d*/
    MEMORY[0xAC119C] = 0; /*0x5e8a35*/
  }
  if ( MEMORY[0xAC11A0] ) /*0x5e8a42*/
  {
    __3_YAXPAX_Z((void *)MEMORY[0xAC11A0]); /*0x5e8a45*/
    MEMORY[0xAC11A0] = 0; /*0x5e8a4d*/
  }
  if ( MEMORY[0xAC11A4] ) /*0x5e8a5a*/
  {
    __3_YAXPAX_Z((void *)MEMORY[0xAC11A4]); /*0x5e8a5d*/
    MEMORY[0xAC11A4] = 0; /*0x5e8a65*/
  }
  if ( MEMORY[0xAC11A8] ) /*0x5e8a72*/
  {
    __3_YAXPAX_Z((void *)MEMORY[0xAC11A8]); /*0x5e8a75*/
    MEMORY[0xAC11A8] = 0; /*0x5e8a7d*/
  }
  if ( MEMORY[0xAC11AC] ) /*0x5e8a8a*/
  {
    __3_YAXPAX_Z((void *)MEMORY[0xAC11AC]); /*0x5e8a8d*/
    MEMORY[0xAC11AC] = 0; /*0x5e8a95*/
  }
  if ( MEMORY[0xAC11B0] ) /*0x5e8aa2*/
  {
    __3_YAXPAX_Z(MEMORY[0xAC11B0]); /*0x5e8aa5*/
    MEMORY[0xAC11B0] = 0; /*0x5e8aad*/
  }
  if ( MEMORY[0xAC11B4] ) /*0x5e8aba*/
  {
    __3_YAXPAX_Z((void *)MEMORY[0xAC11B4]); /*0x5e8abd*/
    MEMORY[0xAC11B4] = 0; /*0x5e8ac5*/
  }
  return PtrVector::Destroy(&MEMORY[0xA8DA74]); /*0x5e8ad0*/
}


// ==== 0x005E8AE0  GameClass::InitDifficultyButtons  this=GameClass  sig=ida-proto ====
void GameClass_InitDifficultyButtons()
{
  signed int v0; // edx

  if ( MEMORY[0xA8B238][0] == 4 ) /*0x5e8ae7*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e8af2*/
      v0 = 6; /*0x5e8b02*/
    else
      v0 = 2; /*0x5e8afb*/
  }
  else
  {
    v0 = 8; /*0x5e8b09*/
  }
  memset32(&MEMORY[0xA8DA90], MEMORY[0xAC119C], v0); /*0x5e8b1f*/
  if ( v0 < 8 ) /*0x5e8b24*/
    memset32((void *)(4 * v0 + 11066000), MEMORY[0xAC11A0], 8 - v0); /*0x5e8b39*/
}


// ==== 0x005E8B40  Game::ResetFlags  this=Game  sig=ida-proto ====
char Game_ResetFlags()
{
  MEMORY[0xAC0AC8] = 0; /*0x5e8b42*/
  MEMORY[0xAC0AEC] = 0; /*0x5e8b47*/
  MEMORY[0xAC0EA4] = 0; /*0x5e8b4c*/
  MEMORY[0xAC0B10] = 0; /*0x5e8b51*/
  return 0; /*0x5e8b56*/
}


// ==== 0x005E8B60  Network::InitPlayerSlots  this=Network  sig=ida-proto ====
int Network_InitPlayerSlots()
{
  signed int v0; // edx
  int result; // eax

  if ( MEMORY[0xA8B238] == 4 ) /*0x5e8b67*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e8b72*/
      v0 = 6; /*0x5e8b82*/
    else
      v0 = 2; /*0x5e8b7b*/
  }
  else
  {
    v0 = 8; /*0x5e8b89*/
  }
  memset32(&MEMORY[0xA8DA90], MEMORY[0xAC119C], v0); /*0x5e8b9f*/
  if ( v0 < 8 ) /*0x5e8ba4*/
    memset32((void *)(4 * v0 + 11066000), MEMORY[0xAC11A0], 8 - v0); /*0x5e8bb9*/
  MEMORY[0xA8DA8C] = -1; /*0x5e8bc0*/
  result = Network::processGameEvent(MEMORY[0xA8B250]); /*0x5e8bca*/
  MEMORY[0xAC0D44] = 0; /*0x5e8bcf*/
  MEMORY[0xAC0B94] = 0; /*0x5e8bd8*/
  return result; /*0x5e8be2*/
}


// ==== 0x005E8BF0  Player::FindByName  this=Player  sig=csp ====
wchar_t *__thiscall Player::FindByName(wchar_t *String2)
{
  int v3; // ebp
  int v4; // esi
  const wchar_t *v5; // edi

  if ( !wcscmp((const wchar_t *)MEMORY[0xAC119C], String2) ) /*0x5e8bfd*/
    return (wchar_t *)MEMORY[0xAC119C]; /*0x5e8c09*/
  if ( !wcscmp((const wchar_t *)MEMORY[0xAC11A0], String2) ) /*0x5e8c1b*/
    return (wchar_t *)MEMORY[0xAC11A0]; /*0x5e8c27*/
  if ( !wcscmp((const wchar_t *)MEMORY[0xAC11A4], String2) ) /*0x5e8c39*/
    return (wchar_t *)MEMORY[0xAC11A4]; /*0x5e8c45*/
  if ( !wcscmp((const wchar_t *)MEMORY[0xAC11A8], String2) ) /*0x5e8c56*/
    return (wchar_t *)MEMORY[0xAC11A8]; /*0x5e8c62*/
  if ( !wcscmp((const wchar_t *)MEMORY[0xAC11AC], String2) ) /*0x5e8c74*/
    return (wchar_t *)MEMORY[0xAC11AC]; /*0x5e8c80*/
  if ( !wcscmp(MEMORY[0xAC11B0], String2) ) /*0x5e8c92*/
    return MEMORY[0xAC11B0]; /*0x5e8c9e*/
  if ( !wcscmp((const wchar_t *)MEMORY[0xAC11B4], String2) ) /*0x5e8caf*/
    return (wchar_t *)MEMORY[0xAC11B4]; /*0x5e8cbb*/
  v3 = MEMORY[0xA8DA84]; /*0x5e8cc5*/
  v4 = 0; /*0x5e8ccb*/
  if ( MEMORY[0xA8DA84] <= 0 ) /*0x5e8ccf*/
    return 0; /*0x5e8ced*/
  while ( 1 ) /*0x5e8cd8*/
  {
    v5 = *(const wchar_t **)(MEMORY[0xA8DA78] + 4 * v4); /*0x5e8cd8*/
    if ( !wcscmp(v5, String2) ) /*0x5e8cdc*/
      break; /*0x5e8cdc*/
    if ( ++v4 >= v3 ) /*0x5e8ceb*/
      return 0; /*0x5e8ceb*/
  }
  return (wchar_t *)v5; /*0x5e8c0e*/
}


// ==== 0x005E8D00  WOLobby::FindPlayerIndex  this=char*  sig=csp ====
int __thiscall WOLobby::FindPlayerIndex(wchar_t *String1)
{
  int v2; // edi
  SessionClass *v3; // esi

  v2 = 0; /*0x5e8d05*/
  v3 = (SessionClass *)&MEMORY[0xA8DA90]; /*0x5e8d07*/
  while ( !v3->GameMode[0] || _wcsicmp(String1, (const wchar_t *)v3->GameMode[0]) ) /*0x5e8d1e*/
  {
    v3 = (SessionClass *)((char *)v3 + 4); /*0x5e8d20*/
    ++v2; /*0x5e8d23*/
    if ( (int)v3 >= (int)&MEMORY[0xA8DAB0] ) /*0x5e8d2a*/
      return -1; /*0x5e8d32*/
  }
  return v2; /*0x5e8d2c*/
}


// ==== 0x005E8D40  RefreshLobbyAll_Helper  this=-  sig=ida-proto ====
int sub_5E8D40()
{
  const wchar_t *v1; // ebx
  int v2; // edi
  const wchar_t **v3; // esi

  if ( !MEMORY[0xA8DA84] ) /*0x5e8d47*/
    return -1; /*0x5e8d49*/
  v1 = *(const wchar_t **)MEMORY[0xA8DA78]; /*0x5e8d55*/
  v2 = 0; /*0x5e8d57*/
  v3 = (const wchar_t **)&MEMORY[0xA8DA90]; /*0x5e8d59*/
  while ( !*v3 || _wcsicmp(v1, *v3) ) /*0x5e8d70*/
  {
    ++v3; /*0x5e8d72*/
    ++v2; /*0x5e8d75*/
    if ( (int)v3 >= (int)&MEMORY[0xA8DAB0] ) /*0x5e8d7c*/
      return -1; /*0x5e8d84*/
  }
  return v2; /*0x5e8d4c*/
}


// ==== 0x005E8D90  Network_Handle_5E8D90  this=-  sig=ida-proto ====
void __fastcall sub_5E8D90(int a1, LPARAM a2)
{
  *(&MEMORY[0xA8DA90] + a1) = a2; /*0x5e8d90*/
}


// ==== 0x005E8DA0  NetworkShare::GetField  this=NetworkShare  sig=ida-proto ====
int __fastcall NetworkShare::GetField(int a1)
{
  int result; // eax

  result = MEMORY[0xA8DA78]; /*0x5e8da0*/
  MEMORY[0xA8DA8C] = a1; /*0x5e8da5*/
  *(&MEMORY[0xA8DA90] + a1) = *(_DWORD *)MEMORY[0xA8DA78]; /*0x5e8dad*/
  return result; /*0x5e8db4*/
}


// ==== 0x005E8DC0  Player::BuildListString  this=char*  sig=csp ====
void __thiscall Player::BuildListString(wchar_t *Destination)
{
  SessionClass *v2; // edi
  ReferenceCounted *v3; // esi
  wchar_t **v4; // eax
  CampaignScore *v5; // eax
  wchar_t *v6; // [esp+Ch] [ebp-Ch] BYREF
  char *a1; // [esp+10h] [ebp-8h] BYREF
  void *v8; // [esp+14h] [ebp-4h] BYREF

  *Destination = 0; /*0x5e8dc8*/
  v2 = (SessionClass *)&HouseClass_Player.__pad_5568[18396]; /*0x5e8dcd*/
  do /*0x5e8e89*/
  {
    v3 = (ReferenceCounted *)v2->GameMode[0]; /*0x5e8dd2*/
    unknown_libname_74(&v6); /*0x5e8dd8*/
    if ( !v3 /*0x5e8e17*/
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2275)
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2276)
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2280)
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2281)
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2277)
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2278)
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2279) )
    {
      GetPlayerTypeString(&a1, (wchar_t *)v3); /*0x5e8e2b*/
      v4 = CharStringToWide((ObjectClass *)&v8, (const char **)&a1); /*0x5e8e38*/
      WideString::Reassign_Alt((void **)&v6, (const wchar_t **)v4); /*0x5e8e42*/
      DeleteAndZero::Alt(&v8); /*0x5e8e4b*/
      DeleteAndZero((int)&a1); /*0x5e8e54*/
    }
    else
    {
      WideString::Assign_Alt((void **)&v6, (wchar_t *)v3); /*0x5e8e1e*/
    }
    v5 = WideString::GetOrEmpty(&v6); /*0x5e8e5d*/
    wcscat(Destination, v5); /*0x5e8e64*/
    wcscat(Destination, (CampaignScore *)&stru_8304AC.unknown50); /*0x5e8e6f*/
    DeleteAndZero::Alt((void **)&v6); /*0x5e8e7b*/
    v2 = (SessionClass *)((char *)v2 + 4); /*0x5e8e80*/
  }
  while ( (int)v2 < (int)&HouseClass_Player.__pad_5568[18428] ); /*0x5e8e89*/
}


// ==== 0x005E8EA0  NetworkLobby::SetupPlayers  this=AbstractClass  sig=csp ====
void __thiscall NetworkLobby::SetupPlayers(wchar_t *Source)
{
  CCINIClass *v2; // edi
  __int64 kr00_8_2; // kr00_8
  int v3; // edx
  CCINIClass **v4; // ecx
  CCINIClass *v5; // eax
  bool v6; // al
  signed int v7; // edx
  void *v8; // esi
  CampaignScore *i; // edi
  wchar_t *v10; // ebp
  ReferenceCounted *v11; // edi
  int ResourceID2CSF; // ebx
  int v13; // eax
  HWND DlgItem; // eax
  int ResourceIDCSF; // ebx
  HWND v16; // edi
  int v17; // eax
  int v18; // eax
  HWND v19; // eax
  int v20; // ebx
  wchar_t **v21; // [esp+0h] [ebp-170h]
  wchar_t **v22; // [esp+0h] [ebp-170h]
  wchar_t *v23[3]; // [esp+10h] [ebp-160h] BYREF
  wchar_t Destination[170]; // [esp+1Ch] [ebp-154h] BYREF

  if ( *Source )
  {
    wcscpy(Destination, Source); /*0x5e8eba*/
    *(_QWORD *)&v2 = *(_QWORD *)&(&g_MatrixTransformState)[190]; /*0x5e8ec5*/
    kr00_8_2 = *(_QWORD *)(&g_MatrixTransformState + 2275); /*0x5e8ed1*/
    v3 = 0; /*0x5e8eda*/
    v4 = (CCINIClass **)&HouseClass_Player.__pad_5568[18396]; /*0x5e8edc*/
    do /*0x5e8f14*/
    {
      v5 = *v4; /*0x5e8ee1*/
      v6 = *v4 == *(&v2 + 1) /*0x5e8f01*/
        || v5
        && v5 != (CCINIClass *)kr00_8_2
        && v5 != (CCINIClass *)HIDWORD(kr00_8_2)
        && v5 != v2
        && *(int *)((char *)v5[1].sectionHead + 3) == -1;
      *((_BYTE *)&v23[1] + v3) = v6; /*0x5e8f06*/
      ++v4; /*0x5e8f0a*/
      ++v3; /*0x5e8f0d*/
    }
    while ( (int)v4 < (int)&HouseClass_Player.__pad_5568[18428] ); /*0x5e8f14*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5e8f1d*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e8f28*/
        v7 = 6; /*0x5e8f38*/
      else
        v7 = 2; /*0x5e8f31*/
    }
    else
    {
      v7 = 8; /*0x5e8f3f*/
    }
    memset32(&HouseClass_Player.__pad_5568[18396], (int)*(&g_MatrixTransformState + 2275), v7); /*0x5e8f54*/
    if ( v7 < 8 ) /*0x5e8f59*/
      memset32((void *)(4 * v7 + 11066000), (int)*(&g_MatrixTransformState + 2276), 8 - v7); /*0x5e8f6e*/
    v8 = 0; /*0x5e8f7a*/
    for ( i = (CampaignScore *)wcstok(Destination, (CampaignScore *)&stru_8304AC.unknown50, v21);
          i;
          i = (CampaignScore *)wcstok(0, (CampaignScore *)&stru_8304AC.unknown50, v22) )
    {
      WideString::Assign(v23, i); /*0x5e8f93*/
      v10 = NetworkLobby::DeleteAndZero((const wchar_t **)v23); /*0x5e8fa5*/
      DeleteAndZero::Alt((void **)v23); /*0x5e8fa7*/
      if ( !v10 ) /*0x5e8fae*/
      {
        v10 = Player::FindByName((wchar_t *)i); /*0x5e8fb7*/
        if ( !v10 ) /*0x5e8fbb*/
          v10 = (wchar_t *)*(&g_MatrixTransformState + 2280); /*0x5e8fbd*/
      }
      if ( v10 != (wchar_t *)*(&g_MatrixTransformState + 2281)
        && (!v10
         || v10 == (wchar_t *)*(&g_MatrixTransformState + 2275)
         || v10 == (wchar_t *)*(&g_MatrixTransformState + 2276)
         || v10 == (wchar_t *)*(&g_MatrixTransformState + 2280)
         || v10 == (wchar_t *)*(&g_MatrixTransformState + 2277)
         || v10 == (wchar_t *)*(&g_MatrixTransformState + 2278)
         || v10 == (wchar_t *)*(&g_MatrixTransformState + 2279)
         || *(_DWORD *)((char *)v10 + 107) != -1) )
      {
        v11 = (ReferenceCounted *)Dialog::FindByHandle((void *)0xC2); /*0x5e9017*/
        if ( !v11 ) /*0x5e901b*/
        {
          v11 = (ReferenceCounted *)Dialog::FindByHandle((void *)0xC9); /*0x5e9027*/
          if ( !v11 ) /*0x5e902b*/
          {
            v11 = (ReferenceCounted *)Dialog::FindByHandle((void *)0xBC); /*0x5e9037*/
            if ( !v11 ) /*0x5e903b*/
              v11 = (ReferenceCounted *)Dialog::FindByHandle((void *)0xBD); /*0x5e9047*/
          }
        }
        if ( *((_BYTE *)&v23[1] + (_DWORD)v8) )
        {
          ResourceID2CSF = GetResourceID2CSF(v8); /*0x5e905c*/
          if ( GetComboBoxSelected(v11, ResourceID2CSF, 0xFFFFFFFF) == -3 )
          {
            FillComboBoxRandomOnly((HWND)v11, ResourceID2CSF); /*0x5e9076*/
            if ( v8 )
            {
              if ( v8 == (void *)1 )
              {
                v13 = 1042; /*0x5e908b*/
              }
              else if ( v8 == (void *)2 )
              {
                v13 = 1043; /*0x5e9097*/
              }
              else if ( v8 == (void *)3 )
              {
                v13 = 1044; /*0x5e90a3*/
              }
              else if ( v8 == (void *)4 )
              {
                v13 = 1045; /*0x5e90af*/
              }
              else if ( v8 == (void *)5 )
              {
                v13 = 1046; /*0x5e90bb*/
              }
              else if ( v8 == (void *)6 )
              {
                v13 = 1047; /*0x5e90c7*/
              }
              else
              {
                v13 = v8 != (void *)7 ? -1 : 1048;
              }
            }
            else
            {
              v13 = 1041; /*0x5e907f*/
            }
            DlgItem = GetDlgItem((HWND)v11, v13); /*0x5e90ec*/
            SendMessageA(DlgItem, 0x4F1u, 0, 0); /*0x5e90f3*/
            ResourceIDCSF = GetResourceIDCSF(v8); /*0x5e9100*/
            FillComboBoxFactions((HWND)v11, ResourceIDCSF); /*0x5e9106*/
            SetupSkirmishSpawnLocations((HWND)v11, ResourceIDCSF, -2); /*0x5e910d*/
          }
        }
      }
      else
      {
        v16 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e911c*/
        if ( !v16 ) /*0x5e9120*/
        {
          v16 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e912c*/
          if ( !v16 ) /*0x5e9130*/
          {
            v16 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e913c*/
            if ( !v16 ) /*0x5e9140*/
              v16 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e914c*/
          }
        }
        if ( !*((_BYTE *)&v23[1] + (_DWORD)v8) )
        {
          *(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v8 + 18396] = v10; /*0x5e915c*/
          v17 = GetResourceID2CSF(v8); /*0x5e9163*/
          SetupComboBoxObserver(v16, v17); /*0x5e916c*/
          if ( v8 )
          {
            if ( v8 == (void *)1 )
            {
              v18 = 1042; /*0x5e9181*/
            }
            else if ( v8 == (void *)2 )
            {
              v18 = 1043; /*0x5e918d*/
            }
            else if ( v8 == (void *)3 )
            {
              v18 = 1044; /*0x5e9199*/
            }
            else if ( v8 == (void *)4 )
            {
              v18 = 1045; /*0x5e91a5*/
            }
            else if ( v8 == (void *)5 )
            {
              v18 = 1046; /*0x5e91b1*/
            }
            else if ( v8 == (void *)6 )
            {
              v18 = 1047; /*0x5e91bd*/
            }
            else
            {
              v18 = v8 != (void *)7 ? -1 : 1048;
            }
          }
          else
          {
            v18 = 1041; /*0x5e9175*/
          }
          v19 = GetDlgItem(v16, v18); /*0x5e91e2*/
          SendMessageA(v19, 0x4F1u, 0, 1); /*0x5e91e9*/
          v20 = GetResourceIDCSF(v8); /*0x5e91f6*/
          FillListBox(v16, v20); /*0x5e91fc*/
          SetupSkirmishSpawnLocations(v16, v20, 8); /*0x5e9207*/
        }
      }
      *(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v8 + 18396] = v10; /*0x5e9211*/
      v8 = (char *)v8 + 1; /*0x5e921a*/
    }
  }
}


// ==== 0x005E9240  NetworkLobby::AssignPlayerSlot  this=NetworkLobby  sig=csp ====
int __thiscall NetworkLobby::AssignPlayerSlot(LPARAM this)
{
  int result; // eax
  LPARAM *v2; // edx

  result = 0; /*0x5e9250*/
  v2 = &MEMORY[0xA8DA90]; /*0x5e9252*/
  while ( (*v2 != MEMORY[0xAC119C] || *(_DWORD *)(this + 107) == -1) /*0x5e926c*/
       && (*v2 != MEMORY[0xAC11B4] || *(_DWORD *)(this + 107) != -1) )
  {
    ++v2; /*0x5e926e*/
    ++result; /*0x5e9271*/
    if ( (int)v2 >= (int)&MEMORY[0xA8DAB0] ) /*0x5e9278*/
      return -1; /*0x5e9280*/
  }
  *(&MEMORY[0xA8DA90] + result) = this; /*0x5e9284*/
  return result; /*0x5e927a*/
}


// ==== 0x005E9290  NetworkLobby::CheckLobbyConditions  this=TechnoTypeClass  sig=csp ====
char __thiscall sub_5E9290(void *this)
{
  int v2; // ebp
  int v3; // edi
  LPARAM *v4; // esi
  LPARAM v5; // eax

  if ( MEMORY[0xA8B238][0] == 4 ) /*0x5e929e*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e92a9*/
      v2 = 6; /*0x5e92b9*/
    else
      v2 = 2; /*0x5e92b2*/
  }
  else
  {
    v2 = 8; /*0x5e92c0*/
  }
  if ( !MEMORY[0x8316A4] && v2 < 7 ) /*0x5e92d1*/
    ++v2; /*0x5e92d3*/
  v3 = 0; /*0x5e92d4*/
  v4 = &MEMORY[0xA8DA90]; /*0x5e92d6*/
  while ( 1 ) /*0x5e92e1*/
  {
    LOBYTE(v5) = GUID::Compare((char *)(*v4 + 40), (int)this); /*0x5e92e1*/
    if ( (_BYTE)v5 ) /*0x5e92e8*/
      break; /*0x5e92e8*/
    ++v4; /*0x5e92ea*/
    ++v3; /*0x5e92ed*/
    if ( (int)v4 >= (int)&MEMORY[0xA8DAB0] ) /*0x5e92f4*/
      return v5; /*0x5e92f4*/
  }
  v5 = *(&MEMORY[0xA8DA90] + v3); /*0x5e92fb*/
  if ( *(_DWORD *)(v5 + 107) == -1 ) /*0x5e9306*/
  {
    *(&MEMORY[0xA8DA90] + v3) = MEMORY[0xAC11B4]; /*0x5e930e*/
  }
  else
  {
    v5 = MEMORY[0xAC119C]; /*0x5e931a*/
    if ( v3 >= v2 ) /*0x5e9321*/
      v5 = MEMORY[0xAC11A0]; /*0x5e9323*/
    *(&MEMORY[0xA8DA90] + v3) = v5; /*0x5e9328*/
  }
  return v5; /*0x5e92f6*/
}


// ==== 0x005E9340  ObjectClass::Audio_Helper  this=ObjectClass  sig=csp ====
INIClass *__thiscall Audio_Helper(void *this)
{
  int v2; // ebx
  INIClass *result; // eax
  int v4; // edi
  SessionClass *v5; // esi
  char *v6; // eax

  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5e934e*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e9359*/
      v2 = 6; /*0x5e9369*/
    else
      v2 = 2; /*0x5e9362*/
  }
  else
  {
    v2 = 8; /*0x5e9370*/
  }
  result = *(INIClass **)&stru_830620.__pad_DFC[648]; /*0x5e9375*/
  if ( !*(_DWORD *)&stru_830620.__pad_DFC[648] && v2 < 7 ) /*0x5e9381*/
    ++v2; /*0x5e9383*/
  v4 = 0; /*0x5e9384*/
  v5 = (SessionClass *)&HouseClass_Player.__pad_5568[18396]; /*0x5e9386*/
  while ( 1 ) /*0x5e938b*/
  {
    if ( v5->GameMode[0] ) /*0x5e938b*/
    {
      v6 = ToWideStringChar((IUnknown *)v5->GameMode[0]); /*0x5e9391*/
      result = (INIClass *)_strcmpi(this, v6); /*0x5e9398*/
      if ( !result ) /*0x5e93a2*/
        break; /*0x5e93a2*/
    }
    v5 = (SessionClass *)((char *)v5 + 4); /*0x5e93a4*/
    ++v4; /*0x5e93a7*/
    if ( (int)v5 >= (int)&HouseClass_Player.__pad_5568[18428] ) /*0x5e93ae*/
      return result; /*0x5e93ae*/
  }
  result = *(INIClass **)&HouseClass_Player.__pad_5568[4 * v4 + 18396]; /*0x5e93b5*/
  if ( *(_DWORD *)&result[1].__pad_20[11] == -1 ) /*0x5e93c0*/
  {
    *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v4 + 18396] = *(&g_MatrixTransformState + 2281); /*0x5e93c8*/
  }
  else
  {
    result = (INIClass *)*(&g_MatrixTransformState + 2275); /*0x5e93d4*/
    if ( v4 >= v2 ) /*0x5e93db*/
      result = (INIClass *)*(&g_MatrixTransformState + 2276); /*0x5e93dd*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v4 + 18396] = result; /*0x5e93e2*/
  }
  return result; /*0x5e93b0*/
}


// ==== 0x005E93F0  ObjectClass::IsKnownPointer  this=ObjectClass  sig=csp ====
BOOL __thiscall IsKnownPointer(wchar_t *this)
{
  return this /*0x5e9431*/
      && this != (wchar_t *)MEMORY[0xAC119C]
      && this != (wchar_t *)MEMORY[0xAC11A0]
      && this != MEMORY[0xAC11B0]
      && this != (wchar_t *)MEMORY[0xAC11B4]
      && this != (wchar_t *)MEMORY[0xAC11A4]
      && this != (wchar_t *)MEMORY[0xAC11A8]
      && this != (wchar_t *)MEMORY[0xAC11AC];
}


// ==== 0x005E9440  Player::IsObserver  this=SessionClass  sig=csp ====
BOOL __thiscall Player::IsObserver(void *this)
{
  return this /*0x5e9461*/
      && (this == (void *)dword_A8ED54[51476]
       || this == (void *)dword_A8ED54[51477]
       || this == (void *)dword_A8ED54[51478]);
}


// ==== 0x005E9470  NetworkLobby::IsValidPlayerName  this=NetworkLobby  sig=csp ====
BOOL __thiscall NetworkLobby::IsValidPlayerName(wchar_t *this)
{
  return this /*0x5e9499*/
      && this != (wchar_t *)MEMORY[0xAC119C]
      && this != (wchar_t *)MEMORY[0xAC11A0]
      && this != (wchar_t *)MEMORY[0xAC11B4]
      && this != MEMORY[0xAC11B0];
}


// ==== 0x005E94D0  Hash_Check_5E94D0  this=-  sig=csp ====
int sub_5E94D0()
{
  int result; // eax
  LPARAM *v1; // edx
  LPARAM v2; // ecx

  result = 0; /*0x5e94e5*/
  v1 = &MEMORY[0xA8DA90]; /*0x5e94e7*/
  do /*0x5e9508*/
  {
    v2 = *v1; /*0x5e94ec*/
    if ( *v1 && (v2 == MEMORY[0xAC11A4] || v2 == MEMORY[0xAC11A8] || v2 == MEMORY[0xAC11AC]) ) /*0x5e94fc*/
      ++result; /*0x5e94fe*/
    ++v1; /*0x5e94ff*/
  }
  while ( (int)v1 < (int)&MEMORY[0xA8DAB0] ); /*0x5e9508*/
  return result; /*0x5e950a*/
}


// ==== 0x005E9510  NetworkLobby::CheckMinPlayers  this=NetworkLobby  sig=csp ====
bool NetworkLobby_CheckMinPlayers()
{
  int v0; // ecx
  int v1; // eax
  LPARAM *i; // edx

  v0 = MEMORY[0xA8BB0C]; /*0x5e9515*/
  if ( MEMORY[0xA8B548] < MEMORY[0xA8BB0C] ) /*0x5e951d*/
    v0 = MEMORY[0xA8B548]; /*0x5e951f*/
  v1 = 0; /*0x5e9521*/
  if ( v0 > 0 ) /*0x5e952c*/
  {
    for ( i = &MEMORY[0xA8DA90]; *i != MEMORY[0xAC119C]; ++i ) /*0x5e952e*/
    {
      if ( ++v1 >= v0 ) /*0x5e953d*/
        return MEMORY[0x8316A4] || v0 >= 8 || *(&MEMORY[0xA8DA90] + v0) != MEMORY[0xAC119C]; /*0x5e953d*/
    }
    return 0; /*0x5e9535*/
  }
  return MEMORY[0x8316A4] || v0 >= 8 || *(&MEMORY[0xA8DA90] + v0) != MEMORY[0xAC119C]; /*0x5e9554*/
}


// ==== 0x005E9560  GameOption::CheckDuplicate  this=GameOption  sig=csp ====
char GameOption_CheckDuplicate()
{
  LPARAM *v0; // eax

  v0 = &MEMORY[0xA8DA90]; /*0x5e9566*/
  while ( *v0 != MEMORY[0xAC11B4] ) /*0x5e956d*/
  {
    if ( (int)++v0 >= (int)&MEMORY[0xA8DAB0] ) /*0x5e9577*/
      return 1; /*0x5e957b*/
  }
  return 0; /*0x5e957b*/
}


// ==== 0x005E9580  ObjectClass::Hash_Check_5E9580  this=ObjectClass  sig=csp ====
char sub_5E9580()
{
  int v0; // edx
  LPARAM *v1; // ecx
  LPARAM v2; // eax

  v0 = 0; /*0x5e9595*/
  v1 = &MEMORY[0xA8DA90]; /*0x5e9597*/
  while ( 1 ) /*0x5e959c*/
  {
    v2 = *v1; /*0x5e959c*/
    if ( *v1 ) /*0x5e959c*/
    {
      if ( v2 != MEMORY[0xAC119C] /*0x5e95c2*/
        && v2 != MEMORY[0xAC11A0]
        && v2 != MEMORY[0xAC11B4]
        && (wchar_t *)v2 != MEMORY[0xAC11B0]
        && v0 == MEMORY[0x8316A4]
        && *(_DWORD *)(v2 + 107) == -1 )
      {
        break; /*0x5e95c2*/
      }
    }
    ++v1; /*0x5e95c4*/
    ++v0; /*0x5e95c7*/
    if ( (int)v1 >= (int)&MEMORY[0xA8DAB0] ) /*0x5e95ce*/
      return 0; /*0x5e95d5*/
  }
  return 1; /*0x5e95d0*/
}


// ==== 0x005E95E0  ObjectClass::Event_Helper  this=ObjectClass  sig=csp ====
char sub_5E95E0()
{
  int v0; // edx
  LPARAM *v1; // ecx
  LPARAM v2; // eax
  unsigned __int8 v4; // [esp+0h] [ebp-Ch]
  int v5; // [esp+4h] [ebp-8h]

  v5 = MEMORY[0xA8B548]; /*0x5e95f0*/
  if ( MEMORY[0xA8B548] >= MEMORY[0xA8BB0C] ) /*0x5e95f4*/
    v5 = MEMORY[0xA8BB0C]; /*0x5e95f6*/
  v0 = 0; /*0x5e9618*/
  v1 = &MEMORY[0xA8DA90]; /*0x5e961a*/
  while ( 1 ) /*0x5e961f*/
  {
    v2 = *v1; /*0x5e961f*/
    if ( *v1 ) /*0x5e961f*/
    {
      if ( v2 != MEMORY[0xAC119C] /*0x5e9645*/
        && v2 != MEMORY[0xAC11A0]
        && v2 != MEMORY[0xAC11B4]
        && (wchar_t *)v2 != MEMORY[0xAC11B0]
        && v0 == MEMORY[0x8316A4]
        && *(_DWORD *)(v2 + 107) == -1 )
      {
        break; /*0x5e9645*/
      }
    }
    ++v1; /*0x5e9647*/
    ++v0; /*0x5e964a*/
    if ( (int)v1 >= (int)&MEMORY[0xA8DAB0] ) /*0x5e9651*/
    {
      v4 = 0; /*0x5e9653*/
      goto LABEL_13; /*0x5e9653*/
    }
  }
  v4 = 1; /*0x5e968d*/
LABEL_13:
  if ( MEMORY[0xA8DA84] - v4 <= v5 ) /*0x5e9671*/
    return 0; /*0x5e9694*/
  Debug::Log(); /*0x5e967f*/
  return 1; /*0x5e9689*/
}


// ==== 0x005E96A0  NetworkLobby::CheckPlayerNameValid  this=NetworkLobby  sig=csp ====
char __thiscall sub_5E96A0(void *this)
{
  wchar_t **v2; // esi
  wchar_t *v3; // ecx
  int *v4; // eax

  if ( this == (void *)-2 ) /*0x5e96a7*/
    return 0; /*0x5e9713*/
  v2 = (wchar_t **)&MEMORY[0xA8DA90]; /*0x5e96a9*/
  while ( 1 ) /*0x5e96ae*/
  {
    v3 = *v2; /*0x5e96ae*/
    if ( *v2 ) /*0x5e96ae*/
    {
      if ( v3 != (wchar_t *)MEMORY[0xAC119C] /*0x5e96f3*/
        && v3 != (wchar_t *)MEMORY[0xAC11A0]
        && v3 != MEMORY[0xAC11B0]
        && v3 != (wchar_t *)MEMORY[0xAC11B4]
        && v3 != (wchar_t *)MEMORY[0xAC11A4]
        && v3 != (wchar_t *)MEMORY[0xAC11A8]
        && v3 != (wchar_t *)MEMORY[0xAC11AC]
        && (void *)SessionClass::GetPlayerColor((int)v3) == this )
      {
        break; /*0x5e96f3*/
      }
    }
    if ( (int)++v2 >= (int)&MEMORY[0xA8DAB0] ) /*0x5e96fe*/
    {
      v4 = MEMORY[0xA8B2BC]; /*0x5e9700*/
      while ( (void *)*v4 != this ) /*0x5e9707*/
      {
        if ( (int)++v4 >= (int)MEMORY[0xA8B2DC] ) /*0x5e9711*/
          return 0; /*0x5e9711*/
      }
      return 1; /*0x5e9707*/
    }
  }
  return 1; /*0x5e9713*/
}


// ==== 0x005E9720  NetworkLobby::CheckPlayerNames  this=Coord  sig=csp ====
char __thiscall sub_5E9720(void *this)
{
  wchar_t **v2; // esi
  wchar_t *v3; // ecx
  int *v4; // eax

  if ( this == (void *)-2 ) /*0x5e9727*/
    return 0; /*0x5e9793*/
  v2 = (wchar_t **)&MEMORY[0xA8DA90]; /*0x5e9729*/
  while ( 1 ) /*0x5e972e*/
  {
    v3 = *v2; /*0x5e972e*/
    if ( *v2 ) /*0x5e972e*/
    {
      if ( v3 != (wchar_t *)MEMORY[0xAC119C] /*0x5e9773*/
        && v3 != (wchar_t *)MEMORY[0xAC11A0]
        && v3 != MEMORY[0xAC11B0]
        && v3 != (wchar_t *)MEMORY[0xAC11B4]
        && v3 != (wchar_t *)MEMORY[0xAC11A4]
        && v3 != (wchar_t *)MEMORY[0xAC11A8]
        && v3 != (wchar_t *)MEMORY[0xAC11AC]
        && (void *)SessionClass::GetOption((int)v3) == this )
      {
        break; /*0x5e9773*/
      }
    }
    if ( (int)++v2 >= (int)&MEMORY[0xA8DAB0] ) /*0x5e977e*/
    {
      v4 = MEMORY[0xA8B2DC]; /*0x5e9780*/
      while ( (void *)*v4 != this ) /*0x5e9787*/
      {
        if ( (int)++v4 >= (int)MEMORY[0xA8B2FC] ) /*0x5e9791*/
          return 0; /*0x5e9791*/
      }
      return 1; /*0x5e9787*/
    }
  }
  return 1; /*0x5e9793*/
}


// ==== 0x005E9850  Game::ResetReadyStates  this=Game  sig=ida-proto ====
int Game_ResetReadyStates()
{
  int result; // eax
  HWND v1; // eax
  HWND DlgItem; // eax
  int v3; // edi
  int i; // esi

  result = Dialog::GetCurrentType(); /*0x5e9850*/
  if ( result != 188 ) /*0x5e985a*/
  {
    v1 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e9861*/
    if ( !v1 ) /*0x5e9868*/
    {
      v1 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e986f*/
      if ( !v1 ) /*0x5e9876*/
      {
        v1 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e987d*/
        if ( !v1 ) /*0x5e9884*/
          v1 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e988b*/
      }
    }
    DlgItem = GetDlgItem(v1, 1439); /*0x5e9898*/
    result = EnableWindow(DlgItem, 1); /*0x5e989f*/
  }
  v3 = MEMORY[0xA8DA84]; /*0x5e98a7*/
  for ( i = 0; i < v3; ++i ) /*0x5e98b1*/
  {
    result = wcscmp(*(const wchar_t **)(MEMORY[0xA8DA78] + 4 * i), &MEMORY[0xA8D610]); /*0x5e98c1*/
    if ( result ) /*0x5e98cb*/
    {
      result = *(_DWORD *)(MEMORY[0xA8DA78] + 4 * i); /*0x5e98d3*/
      if ( *(_DWORD *)(result + 119) ) /*0x5e98d6*/
        *(_DWORD *)(result + 119) = 0; /*0x5e98dd*/
    }
  }
  return result; /*0x5e98eb*/
}


// ==== 0x005E98F0  PlayerSlot::IndexToDlgID  this=AbstractClass  sig=csp ====
int __thiscall PlayerSlot_IndexToDlgID(void *this)
{
  if ( !this ) /*0x5e98f4*/
    return 1041; /*0x5e98f6*/
  if ( this == (void *)1 ) /*0x5e98ff*/
    return 1042; /*0x5e9901*/
  if ( this == (void *)2 ) /*0x5e990a*/
    return 1043; /*0x5e990c*/
  if ( this == (void *)3 ) /*0x5e9915*/
    return 1044; /*0x5e9917*/
  if ( this == (void *)4 ) /*0x5e9920*/
    return 1045; /*0x5e9922*/
  if ( this == (void *)5 ) /*0x5e992b*/
    return 1046; /*0x5e992d*/
  if ( this == (void *)6 ) /*0x5e9936*/
    return 1047; /*0x5e9938*/
  return this != (void *)7 ? -1 : 1048;
}


// ==== 0x005E9950  Dialog::MapPlayerIDToIndex  this=Dialog  sig=csp ====
int __thiscall Dialog_MapPlayerIDToIndex(void *this)
{
  int v2; // eax

  if ( this == (void *)1041 ) /*0x5e9957*/
    return 0; /*0x5e9959*/
  if ( this == (void *)1042 ) /*0x5e9961*/
    return 1; /*0x5e9963*/
  if ( this == (void *)1043 ) /*0x5e996e*/
    return 2; /*0x5e9970*/
  if ( this == (void *)1044 ) /*0x5e997b*/
    return 3; /*0x5e997d*/
  if ( this == (void *)1045 ) /*0x5e9988*/
    return 4; /*0x5e998a*/
  if ( this == (void *)1046 ) /*0x5e9995*/
    return 5; /*0x5e9997*/
  if ( this == (void *)1047 ) /*0x5e99a2*/
    return 6; /*0x5e99a4*/
  v2 = -(this != (void *)1048); /*0x5e99b1*/
  LOBYTE(v2) = v2 & 0xF8; /*0x5e99b3*/
  return v2 + 7; /*0x5e995b*/
}


// ==== 0x005E99C0  GameClass::GetDifficultyString  this=ReferenceCounted  sig=csp ====
wchar_t *__thiscall GameClass_GetDifficultyString(void *this)
{
  if ( this == (void *)MEMORY[0xAC119C] ) /*0x5e99c6*/
    return GetStringCSF(MEMORY[0x831D34], 0, MEMORY[0x8317D8], 4948); /*0x5e99d9*/
  if ( this == (void *)MEMORY[0xAC11A0] ) /*0x5e99e5*/
    return GetStringCSF(MEMORY[0x831D20], 0, MEMORY[0x8317D8], 4950); /*0x5e99f8*/
  if ( this == (void *)MEMORY[0xAC11A4] ) /*0x5e9a04*/
    return GetStringCSF(MEMORY[0x831D0C], 0, MEMORY[0x8317D8], 4952); /*0x5e9a17*/
  if ( this == (void *)MEMORY[0xAC11A8] ) /*0x5e9a23*/
    return GetStringCSF(MEMORY[0x831CF8], 0, MEMORY[0x8317D8], 4954); /*0x5e9a36*/
  if ( this == (void *)MEMORY[0xAC11AC] ) /*0x5e9a42*/
    return GetStringCSF(MEMORY[0x831CE4], 0, MEMORY[0x8317D8], 4956); /*0x5e9a55*/
  if ( this == (void *)MEMORY[0xAC11B4] ) /*0x5e9a61*/
    return GetStringCSF(MEMORY[0x831CCC], 0, MEMORY[0x8317D8], 4958); /*0x5e9a74*/
  return GetStringCSF(MEMORY[0x831CBC], 0, MEMORY[0x8317D8], 4960); /*0x5e99de*/
}


// ==== 0x005E9AA0  sub_5E9AA0  this=-  sig=ida-proto ====
BOOL __fastcall sub_5E9AA0(HWND hDlg, int nIDDlgItem, int a3)
{
  WPARAM v5; // ebx
  LRESULT v7; // [esp+10h] [ebp-8h]
  HWND hWnd; // [esp+14h] [ebp-4h]

  hWnd = GetDlgItem(hDlg, nIDDlgItem); /*0x5e9ab6*/
  ShowWindow(hWnd, 0); /*0x5e9aba*/
  v5 = 0; /*0x5e9ad3*/
  v7 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x146u, 0, 0); /*0x5e9ad7*/
  if ( v7 > 0 ) /*0x5e9adb*/
  {
    while ( SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v5, 0) != a3 ) /*0x5e9aed*/
    {
      if ( (int)++v5 >= v7 ) /*0x5e9af6*/
        return ShowWindow(hWnd, 5); /*0x5e9af6*/
    }
    SendDlgItemMessageA(hDlg, nIDDlgItem, 0x14Eu, v5, 0); /*0x5e9b04*/
  }
  return ShowWindow(hWnd, 5); /*0x5e9b13*/
}


// ==== 0x005E9B20  GetComboBoxSelectedDefault  this=SkirmishDialog  sig=csp ====
LRESULT __fastcall GetComboBoxSelectedDefault(SkirmishDialog *aP0, int nIDDlgItem, WPARAM wParam)
{
  SkirmishDialog *v3; // eax
  LRESULT v6; // eax

  v3 = (SkirmishDialog *)wParam; /*0x5e9b20*/
  if ( wParam == -1 ) /*0x5e9b34*/
    v3 = (SkirmishDialog *)SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x147u, 0, 0); /*0x5e9b41*/
  v6 = SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x150u, (WPARAM)v3, 0); /*0x5e9b4d*/
  return v6 != -1 ? v6 : 0;
}


// ==== 0x005E9B60  SelectLobbyCountry  this=-  sig=csp ====
int __fastcall Lobby_SelectCountry(HWND a1, void *a2)
{
  LRESULT Selected; // edi
  int result; // eax
  int v5; // ecx

  Selected = GetComboBoxSelected(a1, (int)a2, -1); /*0x5e9b6d*/
  result = CountryCombo::IDToIndex(a2); /*0x5e9b6f*/
  if ( result == MEMORY[0xA8DA8C] ) /*0x5e9b7a*/
  {
    SessionClass::AssignSide(&MEMORY[0xA8B238], Selected, 0); /*0x5e9b84*/
    result = MEMORY[0xA8DA84]; /*0x5e9b89*/
    if ( MEMORY[0xA8DA84] ) /*0x5e9b90*/
      return SessionClass::SetPlayerOption(*(_DWORD *)MEMORY[0xA8DA78], Selected); /*0x5e9b9a*/
  }
  else
  {
    v5 = *(&MEMORY[0xA8DA90] + result); /*0x5e9ba2*/
    if ( v5 && (v5 == MEMORY[0xAC11A4] || v5 == MEMORY[0xAC11A8] || v5 == MEMORY[0xAC11AC]) ) /*0x5e9bc3*/
    {
      MEMORY[0xA8B29C][result] = Selected; /*0x5e9bc5*/
    }
    else
    {
      MEMORY[0xA8B29C][result] = -1; /*0x5e9bcf*/
      MEMORY[0xA8B27C][result] = -1; /*0x5e9bda*/
      MEMORY[0xA8B2BC][result] = -1; /*0x5e9be5*/
    }
  }
  return result; /*0x5e9b9f*/
}


// ==== 0x005E9C00  AssignPlayerColor  this=CampaignClass  sig=csp ====
int __fastcall Player_AssignColor(HWND hDlg, void *nIDDlgItem)
{
  LRESULT SelectedRaw; // ebx
  int result; // eax
  wchar_t **v6; // esi
  wchar_t *v7; // ecx
  int *v8; // eax

  SelectedRaw = GetComboBoxSelectedRaw(hDlg, (int)nIDDlgItem, -1); /*0x5e9c10*/
  result = StartCombo::IDToIndex(nIDDlgItem); /*0x5e9c12*/
  if ( result == MEMORY[0xA8DA8C] ) /*0x5e9c1d*/
  {
    FillColorComboBoxUI(hDlg, (int)nIDDlgItem); /*0x5e9c27*/
    if ( SelectedRaw != -2 ) /*0x5e9c2f*/
    {
      v6 = (wchar_t **)&MEMORY[0xA8DA90]; /*0x5e9c31*/
      while ( 1 ) /*0x5e9c36*/
      {
        v7 = *v6; /*0x5e9c36*/
        if ( *v6 ) /*0x5e9c36*/
        {
          if ( v7 != (wchar_t *)MEMORY[0xAC119C] /*0x5e9c7b*/
            && v7 != (wchar_t *)MEMORY[0xAC11A0]
            && v7 != MEMORY[0xAC11B0]
            && v7 != (wchar_t *)MEMORY[0xAC11B4]
            && v7 != (wchar_t *)MEMORY[0xAC11A4]
            && v7 != (wchar_t *)MEMORY[0xAC11A8]
            && v7 != (wchar_t *)MEMORY[0xAC11AC]
            && SessionClass::GetPlayerColor((int)v7) == SelectedRaw )
          {
            break; /*0x5e9c7b*/
          }
        }
        if ( (int)++v6 >= (int)&MEMORY[0xA8DAB0] ) /*0x5e9c86*/
        {
          v8 = MEMORY[0xA8B2BC]; /*0x5e9c88*/
          while ( *v8 != SelectedRaw ) /*0x5e9c8f*/
          {
            if ( (int)++v8 >= (int)MEMORY[0xA8B2DC] ) /*0x5e9c99*/
              goto LABEL_19; /*0x5e9c99*/
          }
          break; /*0x5e9c8f*/
        }
      }
      SelectedRaw = -2; /*0x5e9c9d*/
    }
LABEL_19:
    SessionClass::AssignColor(MEMORY[0xA8B238], SelectedRaw, 0); /*0x5e9ca2*/
    result = MEMORY[0xA8DA84]; /*0x5e9caf*/
    if ( MEMORY[0xA8DA84] ) /*0x5e9cb6*/
      return SessionClass::SetPlayerColor(*(_DWORD *)MEMORY[0xA8DA78], SelectedRaw); /*0x5e9cc0*/
  }
  else
  {
    MEMORY[0xA8B2BC][result] = SelectedRaw; /*0x5e9cc9*/
  }
  return result; /*0x5e9cc5*/
}


// ==== 0x005E9CE0  AssignPlayerSide  this=CampaignClass  sig=csp ====
int __fastcall Player_AssignSide(HWND hDlg, int nIDDlgItem)
{
  LRESULT v4; // ebx
  int result; // eax
  wchar_t **v6; // esi
  wchar_t *v7; // ecx
  int *v8; // eax

  v4 = SetComboBoxSelection(hDlg, nIDDlgItem, -1); /*0x5e9cf0*/
  result = Dialog::SideIDToIndex(nIDDlgItem); /*0x5e9cf2*/
  if ( result == MEMORY[0xA8DA8C] ) /*0x5e9cfd*/
  {
    FillComboBoxSides(hDlg, nIDDlgItem); /*0x5e9d07*/
    if ( v4 != -2 ) /*0x5e9d0f*/
    {
      v6 = (wchar_t **)&MEMORY[0xA8DA90]; /*0x5e9d11*/
      while ( 1 ) /*0x5e9d16*/
      {
        v7 = *v6; /*0x5e9d16*/
        if ( *v6 ) /*0x5e9d16*/
        {
          if ( v7 != (wchar_t *)MEMORY[0xAC119C] /*0x5e9d5b*/
            && v7 != (wchar_t *)MEMORY[0xAC11A0]
            && v7 != MEMORY[0xAC11B0]
            && v7 != (wchar_t *)MEMORY[0xAC11B4]
            && v7 != (wchar_t *)MEMORY[0xAC11A4]
            && v7 != (wchar_t *)MEMORY[0xAC11A8]
            && v7 != (wchar_t *)MEMORY[0xAC11AC]
            && SessionClass::GetOption((int)v7) == v4 )
          {
            break; /*0x5e9d5b*/
          }
        }
        if ( (int)++v6 >= (int)&MEMORY[0xA8DAB0] ) /*0x5e9d66*/
        {
          v8 = MEMORY[0xA8B2DC]; /*0x5e9d68*/
          while ( *v8 != v4 ) /*0x5e9d6f*/
          {
            if ( (int)++v8 >= (int)MEMORY[0xA8B2FC] ) /*0x5e9d79*/
              goto LABEL_19; /*0x5e9d79*/
          }
          break; /*0x5e9d6f*/
        }
      }
      v4 = -2; /*0x5e9d7d*/
    }
LABEL_19:
    result = MEMORY[0xA8DA84]; /*0x5e9d82*/
    if ( MEMORY[0xA8DA84] ) /*0x5e9d89*/
      return SessionClass::SetOption(*(_DWORD *)MEMORY[0xA8DA78], v4); /*0x5e9d93*/
  }
  else
  {
    MEMORY[0xA8B2DC][result] = v4; /*0x5e9d9c*/
  }
  return result; /*0x5e9d98*/
}


// ==== 0x005E9DB0  ProcessNetworkLobbyOption  this=CampaignClass  sig=csp ====
int __fastcall ProcessNetworkLobbyOption(SessionClass *hDlg, void *nIDDlgItem)
{
  SessionClass *ComboBoxSelectedRaw2; // ebx
  int result; // eax

  ComboBoxSelectedRaw2 = (SessionClass *)GetComboBoxSelectedRaw2((HWND)hDlg, (int)nIDDlgItem, 0xFFFFFFFF); /*0x5e9dc0*/
  result = Dialog::OptionIDToIndex(nIDDlgItem); /*0x5e9dc2*/
  if ( result == *(_DWORD *)&HouseClass_Player.__pad_5568[18392] ) /*0x5e9dcd*/
  {
    SetupLobbyPlayerSlots(hDlg, (int)nIDDlgItem, (int)ComboBoxSelectedRaw2); /*0x5e9dd4*/
    result = *(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x5e9dd9*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[18384] ) /*0x5e9de0*/
      return SessionClass::SetOption2(**(_DWORD **)&HouseClass_Player.__pad_5568[18372], ComboBoxSelectedRaw2); /*0x5e9dea*/
  }
  else
  {
    *(_DWORD *)&HouseClass_Player.__pad_5568[4 * result + 8264] = ComboBoxSelectedRaw2; /*0x5e9df3*/
  }
  return result; /*0x5e9def*/
}


// ==== 0x005E9E00  NetworkLobby::InitLobbyDropdowns  this=AbstractClass  sig=csp ====
int __thiscall NetworkLobby::InitLobbyDropdowns(SessionClass *hDlg)
{
  int i; // ebp
  void *ResourceID4CSF; // esi
  SessionClass *ComboBoxSelectedRaw2; // edi
  int result; // eax

  for ( i = 0; i < 8; ++i ) /*0x5e9e06*/
  {
    ResourceID4CSF = (void *)GetResourceID4CSF((void *)i); /*0x5e9e0f*/
    ComboBoxSelectedRaw2 = (SessionClass *)GetComboBoxSelectedRaw2((HWND)hDlg, (int)ResourceID4CSF, 0xFFFFFFFF); /*0x5e9e1e*/
    result = Dialog::OptionIDToIndex(ResourceID4CSF); /*0x5e9e20*/
    if ( result == *(_DWORD *)&HouseClass_Player.__pad_5568[18392] ) /*0x5e9e2b*/
    {
      SetupLobbyPlayerSlots(hDlg, (int)ResourceID4CSF, (int)ComboBoxSelectedRaw2); /*0x5e9e32*/
      result = *(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x5e9e37*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[18384] ) /*0x5e9e3e*/
        result = SessionClass::SetOption2(**(_DWORD **)&HouseClass_Player.__pad_5568[18372], ComboBoxSelectedRaw2); /*0x5e9e48*/
    }
    else
    {
      *(_DWORD *)&HouseClass_Player.__pad_5568[4 * result + 8264] = ComboBoxSelectedRaw2; /*0x5e9e4f*/
    }
  }
  return result; /*0x5e9e5c*/
}


// ==== 0x005E9E70  SetupSkirmishPlayerSlots  this=SkirmishDialog  sig=csp ====
char __fastcall SetupSkirmishPlayerSlots(SkirmishDialog *hDlg, int a2, HWND hWnd)
{
  int ResourceID2CSF; // edi
  int ResourceIDCSF; // ebx
  int v7; // eax
  HWND DlgItem; // eax
  HWND v9; // ebx
  HWND v10; // esi
  char result; // al
  HWND v12; // eax
  HWND v13; // ebp
  int PlayerCountMap; // esi
  int v15; // eax
  int nIDDlgItem; // [esp+10h] [ebp-10h]
  HWND nIDDlgItema; // [esp+10h] [ebp-10h]
  int ResourceID4CSF; // [esp+14h] [ebp-Ch]
  HWND v20; // [esp+1Ch] [ebp-4h]
  HWND hWnda; // [esp+24h] [ebp+4h]

  ResourceID2CSF = GetResourceID2CSF((void *)a2); /*0x5e9e88*/
  ResourceIDCSF = GetResourceIDCSF((void *)a2); /*0x5e9e91*/
  nIDDlgItem = GetResourceID3CSF((void *)a2); /*0x5e9e9a*/
  ResourceID4CSF = GetResourceID4CSF((void *)a2); /*0x5e9ea3*/
  if ( *(int *)&stru_830620.__pad_DFC[648] >= 0 /*0x5e9ed5*/
    && a2 == *(_DWORD *)&stru_830620.__pad_DFC[648]
    && ((v7 = *(_DWORD *)&HouseClass_Player.__pad_5568[4 * a2 + 18396],
         (CoordStruct *)v7 == *(&g_MatrixTransformState + 2281))
     || !a2
     || *(_DWORD *)(v7 + 107) == -1) )
  {
    SetupLobbyCountryCombo(hDlg, ResourceID2CSF, -3); /*0x5e9ee1*/
    SetupSkirmishSpawnLocations((HWND)hDlg, ResourceIDCSF, -2); /*0x5e9eec*/
    SetupLobbyFactionSlots((SessionClass *)hDlg, nIDDlgItem, -2); /*0x5e9ef9*/
    SetupLobbyPlayerSlots((SessionClass *)hDlg, ResourceID4CSF, -2); /*0x5e9f06*/
    DlgItem = GetDlgItem((HWND)hDlg, ResourceID2CSF); /*0x5e9f13*/
    EnableWindow(DlgItem, 0); /*0x5e9f1e*/
    v9 = GetDlgItem((HWND)hDlg, ResourceIDCSF); /*0x5e9f24*/
    EnableWindow(v9, 0); /*0x5e9f29*/
    ShowWindow(v9, 0); /*0x5e9f34*/
    hWnda = GetDlgItem((HWND)hDlg, nIDDlgItem); /*0x5e9f41*/
    EnableWindow(hWnda, 0); /*0x5e9f45*/
    ShowWindow(hWnda, 0); /*0x5e9f4e*/
    v10 = GetDlgItem((HWND)hDlg, ResourceID4CSF); /*0x5e9f58*/
    EnableWindow(v10, 0); /*0x5e9f5d*/
    return ShowWindow(v10, 0); /*0x5e9f62*/
  }
  else
  {
    if ( !(_BYTE)hWnd ) /*0x5e9f74*/
    {
      SetupLobbyCountryCombo(hDlg, ResourceID2CSF, -2); /*0x5e9f7c*/
      SetupSkirmishSpawnLocations((HWND)hDlg, ResourceIDCSF, -2); /*0x5e9f87*/
      SetupLobbyFactionSlots((SessionClass *)hDlg, nIDDlgItem, -2); /*0x5e9f94*/
      SetupLobbyPlayerSlots((SessionClass *)hDlg, ResourceID4CSF, -2); /*0x5e9fa1*/
    }
    v12 = GetDlgItem((HWND)hDlg, ResourceID2CSF); /*0x5e9fae*/
    EnableWindow(v12, (unsigned __int8)hWnd); /*0x5e9fbc*/
    v20 = GetDlgItem((HWND)hDlg, ResourceIDCSF); /*0x5e9fce*/
    EnableWindow(v20, (unsigned __int8)hWnd); /*0x5e9fd2*/
    nIDDlgItema = GetDlgItem((HWND)hDlg, nIDDlgItem); /*0x5e9fde*/
    EnableWindow(nIDDlgItema, (unsigned __int8)hWnd); /*0x5e9fe2*/
    v13 = GetDlgItem((HWND)hDlg, ResourceID4CSF); /*0x5e9fec*/
    if ( (_BYTE)hWnd /*0x5e9fff*/
      && *(_DWORD *)&HouseClass_Player.__pad_5568[8072]
      && !*(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8072] + 60) )
    {
      EnableWindow(v13, 0); /*0x5ea008*/
    }
    else
    {
      EnableWindow(v13, (unsigned __int8)hWnd); /*0x5ea00c*/
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8096] == -1 ) /*0x5ea01c*/
    {
      PlayerCountMap = 8; /*0x5ea01e*/
    }
    else
    {
      PlayerCountMap = ReadPlayerCountMap(*(int *)&HouseClass_Player.__pad_5568[8096]); /*0x5ea030*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] ) /*0x5ea034*/
      {
        v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 152))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x5ea038*/
        if ( v15 != -1 && v15 < PlayerCountMap ) /*0x5ea045*/
          PlayerCountMap = v15; /*0x5ea047*/
      }
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5ea04f*/
      {
        if ( Network::IsLobbyFeature() ) /*0x5ea051*/
        {
          PlayerCountMap &= ~1u; /*0x5ea05a*/
        }
        else if ( Network::IsMultiplayerActive() ) /*0x5ea05f*/
        {
          PlayerCountMap = 2; /*0x5ea068*/
        }
      }
    }
    if ( !*(_DWORD *)&stru_830620.__pad_DFC[648] && PlayerCountMap < 7 ) /*0x5ea07a*/
      ++PlayerCountMap; /*0x5ea07c*/
    result = a2; /*0x5ea07d*/
    if ( a2 < PlayerCountMap || a2 == *(_DWORD *)&stru_830620.__pad_DFC[648] ) /*0x5ea087*/
    {
      ShowWindow(v20, 5); /*0x5ea096*/
      ShowWindow(nIDDlgItema, 5); /*0x5ea09f*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 4 ) /*0x5ea0a7*/
        return ShowWindow(v13, 5); /*0x5ea0a7*/
      result = Network::IsLobbyFeature(); /*0x5ea0a9*/
      if ( !result ) /*0x5ea0b0*/
        return ShowWindow(v13, 5); /*0x5ea0b5*/
    }
  }
  return result; /*0x5e9f64*/
}


// ==== 0x005EA0D0  sub_5EA0D0  this=-  sig=ida-proto ====
char __fastcall sub_5EA0D0(HWND hDlg, void *a2)
{
  int i; // esi
  int v4; // eax
  HWND DlgItem; // eax

  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v4 = 1042; /*0x5ea0f9*/
          break;
        case 2:
          v4 = 1043; /*0x5ea105*/
          break;
        case 3:
          v4 = 1044; /*0x5ea111*/
          break;
        case 4:
          v4 = 1045; /*0x5ea11d*/
          break;
        case 5:
          v4 = 1046; /*0x5ea129*/
          break;
        case 6:
          v4 = 1047; /*0x5ea135*/
          break;
        default:
          v4 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v4 = 1041; /*0x5ea0ed*/
    }
    DlgItem = GetDlgItem(hDlg, v4); /*0x5ea151*/
    EnableWindow(DlgItem, 1); /*0x5ea156*/
    SetupSkirmishPlayerSlots(hDlg, (void *)i, 0); /*0x5ea15e*/
  }
  return SetupSkirmishPlayerSlots(hDlg, a2, (HWND)1); /*0x5ea176*/
}


// ==== 0x005EA180  GameLobby_Setup  this=SkirmishDialog  sig=csp ====
char __fastcall GameLobby_Setup(HWND hDlg, void *a2)
{
  int i; // esi
  int v4; // eax
  HWND DlgItem; // eax
  int v6; // eax
  HWND v7; // eax

  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v4 = 1042; /*0x5ea1a9*/
          break;
        case 2:
          v4 = 1043; /*0x5ea1b5*/
          break;
        case 3:
          v4 = 1044; /*0x5ea1c1*/
          break;
        case 4:
          v4 = 1045; /*0x5ea1cd*/
          break;
        case 5:
          v4 = 1046; /*0x5ea1d9*/
          break;
        case 6:
          v4 = 1047; /*0x5ea1e5*/
          break;
        default:
          v4 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v4 = 1041; /*0x5ea19d*/
    }
    DlgItem = GetDlgItem(hDlg, v4); /*0x5ea201*/
    EnableWindow(DlgItem, 0); /*0x5ea206*/
    SetupSkirmishPlayerSlots(hDlg, (void *)i, 0); /*0x5ea20e*/
  }
  if ( a2 )
  {
    if ( a2 == (void *)1 )
    {
      v6 = 1042; /*0x5ea22d*/
    }
    else if ( a2 == (void *)2 )
    {
      v6 = 1043; /*0x5ea239*/
    }
    else if ( a2 == (void *)3 )
    {
      v6 = 1044; /*0x5ea245*/
    }
    else if ( a2 == (void *)4 )
    {
      v6 = 1045; /*0x5ea251*/
    }
    else if ( a2 == (void *)5 )
    {
      v6 = 1046; /*0x5ea25d*/
    }
    else if ( a2 == (void *)6 )
    {
      v6 = 1047; /*0x5ea269*/
    }
    else
    {
      v6 = a2 != (void *)7 ? -1 : 1048;
    }
  }
  else
  {
    v6 = 1041; /*0x5ea221*/
  }
  v7 = GetDlgItem(hDlg, v6); /*0x5ea285*/
  EnableWindow(v7, 1); /*0x5ea28a*/
  return SetupSkirmishPlayerSlots(hDlg, a2, (HWND)1); /*0x5ea297*/
}


// ==== 0x005EA2A0  NetworkLobby::Dispatch  this=SkirmishDialog  sig=csp ====
HWND *__thiscall sub_5EA2A0(HWND this)
{
  int i; // esi
  int v2; // eax
  HWND DlgItem; // ebx
  wchar_t *v4; // eax
  HWND v5; // edi
  int v6; // eax
  int v7; // eax
  HWND *result; // eax

  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v2 = 1747; /*0x5ea2c1*/
          break;
        case 2:
          v2 = 1748; /*0x5ea2cd*/
          break;
        case 3:
          v2 = 1749; /*0x5ea2d9*/
          break;
        case 4:
          v2 = 1750; /*0x5ea2e5*/
          break;
        case 5:
          v2 = 1751; /*0x5ea2f1*/
          break;
        case 6:
          v2 = 1752; /*0x5ea2fd*/
          break;
        default:
          v2 = i != 7 ? -1 : 1753;
          break;
      }
    }
    else
    {
      v2 = 1746; /*0x5ea2b5*/
    }
    DlgItem = GetDlgItem(this, v2); /*0x5ea31f*/
    v4 = (wchar_t *)*(&MEMORY[0xA8DA90] + i); /*0x5ea321*/
    v5 = 0; /*0x5ea328*/
    if ( v4 /*0x5ea36c*/
      && v4 != (wchar_t *)MEMORY[0xAC119C]
      && v4 != (wchar_t *)MEMORY[0xAC11A0]
      && v4 != MEMORY[0xAC11B0]
      && v4 != (wchar_t *)MEMORY[0xAC11B4]
      && v4 != (wchar_t *)MEMORY[0xAC11A4]
      && v4 != (wchar_t *)MEMORY[0xAC11A8]
      && v4 != (wchar_t *)MEMORY[0xAC11AC]
      && !wcscmp(v4, MEMORY[0xA8D610]) )
    {
      v6 = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x8316CC][0], 0); /*0x5ea380*/
LABEL_33:
      v5 = (HWND)v6; /*0x5ea3be*/
      goto LABEL_34; /*0x5ea3be*/
    }
    v7 = *(&MEMORY[0xA8DA90] + i); /*0x5ea382*/
    if ( v7 && (v7 == MEMORY[0xAC11A4] || v7 == MEMORY[0xAC11A8] || v7 == MEMORY[0xAC11AC]) /*0x5ea3a9*/
      || *(_DWORD *)(v7 + 119) == 1 )
    {
      v6 = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x8316D0], 0); /*0x5ea3b9*/
      goto LABEL_33; /*0x5ea3b9*/
    }
LABEL_34:
    result = CacheDialogInvalidate(DlgItem, v5); /*0x5ea3c0*/
  }
  return result; /*0x5ea3d3*/
}


// ==== 0x005EA3E0  RefreshLobbyAll  this=SkirmishDialog  sig=csp ====
void __fastcall RefreshLobbyAll(HWND hDlg, char a2)
{
  HWND v2; // edi
  int v3; // esi
  int ResourceIDHardcodedCSF; // eax
  HWND DlgItem; // edi
  void *PlayerSide; // eax
  HWND Default; // eax
  int i; // esi
  int ResourceID2CSF; // edi
  int v10; // eax
  void *refreshed; // eax
  int v12; // ebp
  int ResourceIDCSF; // esi
  int v14; // eax
  HWND v15; // edi
  int j; // esi
  int v17; // ebx
  int v18; // eax
  int k; // esi
  int ResourceID3CSF; // ebx
  int v21; // eax
  int m; // esi
  int ResourceID4CSF; // ebx
  int _5EAA70; // eax
  char *v25; // ebp
  SessionClass *v26; // ebx
  int v27; // eax
  HWND v28; // eax
  SessionClass *v29; // esi
  HWND v30; // edi
  SessionClass *v31; // ecx
  int v32; // eax
  char *v33; // ebp
  SessionClass *v35; // ebx
  int eax34; // eax
  HWND v36; // eax
  SessionClass *v38; // esi
  HWND edi34; // edi
  SessionClass *v40; // ecx
  int eax36; // eax
  int n; // esi
  int v42; // eax
  HWND v43; // edi
  void *v44; // eax
  HWND v45; // eax
  int v46; // ebx
  int v47; // eax
  int ii; // esi
  int v49; // edi
  int v50; // eax
  char Buffer[4]; // [esp+14h] [ebp-4h] BYREF

  v2 = hDlg; /*0x5ea3e7*/
  if ( a2 ) /*0x5ea3ef*/
  {
    Lobby::UpdatePlayerLabels(hDlg); /*0x5ea3f5*/
    v3 = 0; /*0x5ea3fa*/
    while ( 1 ) /*0x5ea404*/
    {
      ResourceIDHardcodedCSF = GetResourceIDHardcodedCSF((void *)v3); /*0x5ea404*/
      DlgItem = GetDlgItem(v2, ResourceIDHardcodedCSF); /*0x5ea413*/
      PlayerSide = (void *)GetPlayerSide(v3); /*0x5ea415*/
      Default = (HWND)BuildingType::FindDefault(PlayerSide); /*0x5ea41c*/
      CacheDialogInvalidate(DlgItem, Default); /*0x5ea425*/
      if ( ++v3 >= 8 ) /*0x5ea42e*/
        break; /*0x5ea42e*/
      v2 = hDlg; /*0x5ea3fe*/
    }
    for ( i = 0; i < 8; ++i ) /*0x5ea430*/
    {
      ResourceID2CSF = GetResourceID2CSF((void *)i); /*0x5ea43b*/
      v10 = GetPlayerSide(i); /*0x5ea43d*/
      SetupLobbyCountryCombo(hDlg, ResourceID2CSF, v10); /*0x5ea449*/
    }
    refreshed = (void *)RefreshLobbyAll_Helper(); /*0x5ea454*/
    v12 = (int)refreshed; /*0x5ea459*/
    if ( refreshed == (void *)-1 ) /*0x5ea45e*/
    {
      v15 = hDlg; /*0x5ea480*/
    }
    else
    {
      ResourceIDCSF = GetResourceIDCSF(refreshed); /*0x5ea469*/
      v14 = RefreshLobbyAll_Play(v12); /*0x5ea46b*/
      v15 = hDlg; /*0x5ea470*/
      SetupSkirmishSpawnLocations(hDlg, ResourceIDCSF, v14); /*0x5ea479*/
    }
    for ( j = 0; j < 8; ++j ) /*0x5ea484*/
    {
      if ( j != v12 ) /*0x5ea488*/
      {
        v17 = GetResourceIDCSF((void *)j); /*0x5ea493*/
        v18 = RefreshLobbyAll_Play(j); /*0x5ea495*/
        SetupSkirmishSpawnLocations(v15, v17, v18); /*0x5ea49f*/
      }
    }
    for ( k = 0; k < 8; ++k ) /*0x5ea4aa*/
    {
      ResourceID3CSF = GetResourceID3CSF((void *)k); /*0x5ea4b5*/
      v21 = RefreshLobbyAll_Get(k); /*0x5ea4b7*/
      SetupLobbyFactionSlots(v15, ResourceID3CSF, v21); /*0x5ea4c1*/
    }
    for ( m = 0; m < 8; ++m ) /*0x5ea4cc*/
    {
      ResourceID4CSF = GetResourceID4CSF((void *)m); /*0x5ea4d7*/
      _5EAA70 = RefreshLobbyAll_Get_5EAA70(m); /*0x5ea4d9*/
      SetupLobbyPlayerSlots(v15, ResourceID4CSF, _5EAA70); /*0x5ea4e3*/
    }
    v25 = 0; /*0x5ea4ee*/
    v26 = (SessionClass *)&MEMORY[0xA8DA90]; /*0x5ea4f0*/
    while ( 1 ) /*0x5ea4f7*/
    {
      v27 = RefreshLobbyAll_Helper_5EAAD0(v25); /*0x5ea4f7*/
      v28 = GetDlgItem(hDlg, v27); /*0x5ea502*/
      v29 = (SessionClass *)v26->GameMode[0]; /*0x5ea508*/
      v30 = 0; /*0x5ea50a*/
      v31 = (SessionClass *)v26->GameMode[0]; /*0x5ea50c*/
      *(_DWORD *)Buffer = v28; /*0x5ea50e*/
      if ( IsKnownPointer((wchar_t *)v31) ) /*0x5ea512*/
      {
        if ( !wcscmp((const wchar_t *)v29, MEMORY[0xA8D610]) ) /*0x5ea521*/
          break; /*0x5ea521*/
      }
      if ( RefreshLobbyAll_Helper_5EA8E0((int)v25) == 1 ) /*0x5ea541*/
      {
        v32 = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x8316D0], 0); /*0x5ea551*/
        goto LABEL_24; /*0x5ea551*/
      }
LABEL_25:
      CacheDialogInvalidate(*(HWND *)Buffer, v30); /*0x5ea558*/
      v26 = (SessionClass *)((char *)v26 + 4); /*0x5ea563*/
      ++v25; /*0x5ea566*/
      if ( (int)v26 >= (int)&MEMORY[0xA8DAB0] ) /*0x5ea56d*/
      {
        if ( MEMORY[0xA8B238][0] == 4 ) /*0x5ea576*/
          RefreshLobbyAll_Set(); /*0x5ea578*/
        if ( MEMORY[0xA8B23C] ) /*0x5ea585*/
          (*(void (__thiscall **)(int, HWND))(*(_DWORD *)MEMORY[0xA8B23C] + 120))(MEMORY[0xA8B23C], hDlg); /*0x5ea592*/
        return; /*0x5ea59c*/
      }
    }
    v32 = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x8316CC][0], 0); /*0x5ea535*/
LABEL_24:
    v30 = (HWND)v32; /*0x5ea556*/
    goto LABEL_25; /*0x5ea556*/
  }
  if ( MEMORY[0xA8B23C] ) /*0x5ea5a5*/
    (*(void (__thiscall **)(int, HWND))(*(_DWORD *)MEMORY[0xA8B23C] + 120))(MEMORY[0xA8B23C], hDlg); /*0x5ea5aa*/
  v33 = 0; /*0x5ea5ad*/
  v35 = (SessionClass *)&MEMORY[0xA8DA90]; /*0x5ea5af*/
  while ( 1 ) /*0x5ea5da*/
  {
    eax34 = RefreshLobbyAll_Helper_5EAAD0(v33); /*0x5ea5bc*/
    v36 = GetDlgItem(v2, eax34); /*0x5ea5c3*/
    v38 = (SessionClass *)v35->GameMode[0]; /*0x5ea5c9*/
    edi34 = 0; /*0x5ea5cb*/
    v40 = (SessionClass *)v35->GameMode[0]; /*0x5ea5cd*/
    *(_DWORD *)Buffer = v36; /*0x5ea5cf*/
    if ( IsKnownPointer((wchar_t *)v40) && !wcscmp((const wchar_t *)v38, MEMORY[0xA8D610]) ) /*0x5ea5e2*/
    {
      eax36 = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x8316CC][0], 0); /*0x5ea5f6*/
    }
    else
    {
      if ( RefreshLobbyAll_Helper_5EA8E0((int)v33) != 1 ) /*0x5ea602*/
        goto LABEL_40; /*0x5ea602*/
      eax36 = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x8316D0], 0); /*0x5ea612*/
    }
    edi34 = (HWND)eax36; /*0x5ea617*/
LABEL_40:
    CacheDialogInvalidate(*(HWND *)Buffer, edi34); /*0x5ea61f*/
    v35 = (SessionClass *)((char *)v35 + 4); /*0x5ea624*/
    ++v33; /*0x5ea627*/
    if ( (int)v35 >= (int)&MEMORY[0xA8DAB0] ) /*0x5ea62e*/
      break; /*0x5ea62e*/
    v2 = hDlg; /*0x5ea5b6*/
  }
  wcscpy(&MEMORY[0xAC0D44], &MEMORY[0xAC0B94]); /*0x5ea63a*/
  Player::BuildListString(&MEMORY[0xAC0B94]); /*0x5ea647*/
  if ( wcscmp(&MEMORY[0xAC0D44], &MEMORY[0xAC0B94]) ) /*0x5ea656*/
  {
    Lobby::UpdatePlayerLabels(hDlg); /*0x5ea668*/
    if ( MEMORY[0xA8B238][0] == 4 ) /*0x5ea674*/
      RefreshLobbyAll_Set(); /*0x5ea676*/
  }
  for ( n = 0; n < 8; ++n ) /*0x5ea67b*/
  {
    v42 = GetResourceIDHardcodedCSF((void *)n); /*0x5ea67f*/
    v43 = GetDlgItem(hDlg, v42); /*0x5ea68e*/
    v44 = (void *)GetPlayerSide(n); /*0x5ea690*/
    v45 = (HWND)BuildingType::FindDefault(v44); /*0x5ea697*/
    CacheDialogInvalidate(v43, v45); /*0x5ea6a0*/
  }
  strcpy(&MEMORY[0xAC0EA4], &MEMORY[0xAC0B10]); /*0x5ea6c7*/
  v46 = 0; /*0x5ea6ce*/
  MEMORY[0xAC0B10] = 0; /*0x5ea6d2*/
  do /*0x5ea723*/
  {
    v47 = GetPlayerSide(v46); /*0x5ea6db*/
    sprintf(Buffer, MEMORY[0x831D44], v47); /*0x5ea6eb*/
    strcat(&MEMORY[0xAC0B10], Buffer); /*0x5ea716*/
    ++v46; /*0x5ea71d*/
  }
  while ( v46 < 8 ); /*0x5ea723*/
  if ( strcmp(&MEMORY[0xAC0EA4], &MEMORY[0xAC0B10]) ) /*0x5ea737*/
  {
    for ( ii = 0; ii < 8; ++ii ) /*0x5ea760*/
    {
      v49 = GetResourceID2CSF((void *)ii); /*0x5ea76b*/
      v50 = GetPlayerSide(ii); /*0x5ea76d*/
      SetupLobbyCountryCombo(hDlg, v49, v50); /*0x5ea777*/
    }
  }
  strcpy(&MEMORY[0xAC0AC8], &MEMORY[0xAC0AEC]); /*0x5ea79e*/
  RefreshLobbyAll_Play_5EAB30(&MEMORY[0xAC0AEC]); /*0x5ea7ac*/
  if ( strcmp(&MEMORY[0xAC0AC8], &MEMORY[0xAC0AEC]) ) /*0x5ea7c3*/
    RefreshLobbyAll_Play_5EAEE0(hDlg); /*0x5ea7ee*/
  strcpy(MEMORY[0xAC0A9C], MEMORY[0xAC0B6C]); /*0x5ea80f*/
  RefreshLobbyAll_Get_5EAC00(MEMORY[0xAC0B6C]); /*0x5ea81d*/
  if ( strcmp(MEMORY[0xAC0A9C], MEMORY[0xAC0B6C]) ) /*0x5ea834*/
    RefreshLobbyAll_Get_5EADA0(hDlg); /*0x5ea85f*/
  strcpy(MEMORY[0xAC0278], MEMORY[0xAC0B48]); /*0x5ea880*/
  RefreshLobbyAll_Get_5EACD0(MEMORY[0xAC0B48]); /*0x5ea88e*/
  if ( strcmp(MEMORY[0xAC0278], MEMORY[0xAC0B48]) ) /*0x5ea8a5*/
    RefreshLobbyAll_Setup(hDlg); /*0x5ea8d0*/
}


// ==== 0x005EA8E0  RefreshLobbyAll_Helper_5EA8E0  this=-  sig=ida-proto ====
int __fastcall sub_5EA8E0(int a1)
{
  int v1; // ecx
  int result; // eax

  v1 = *(&MEMORY[0xA8DA90] + a1); /*0x5ea8e0*/
  result = 0; /*0x5ea8e7*/
  if ( v1 && (v1 == MEMORY[0xAC11A4] || v1 == MEMORY[0xAC11A8] || v1 == MEMORY[0xAC11AC]) || *(_DWORD *)(v1 + 119) == 1 ) /*0x5ea909*/
    return 1; /*0x5ea90b*/
  return result; /*0x5ea910*/
}


// ==== 0x005EA920  GetPlayerSide  this=-  sig=ida-proto ====
int __fastcall sub_5EA920(int a1)
{
  int result; // eax
  wchar_t *v3; // esi

  result = -2; /*0x5ea924*/
  v3 = (wchar_t *)*(&MEMORY[0xA8DA90] + a1); /*0x5ea92f*/
  if ( MEMORY[0xA8B23C] && (MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4) ) /*0x5ea948*/
    result = (*(int (**)(void))(*(_DWORD *)MEMORY[0xA8B23C] + 40))(); /*0x5ea94c*/
  if ( v3 /*0x5ea969*/
    && (v3 == (wchar_t *)MEMORY[0xAC11A4] || v3 == (wchar_t *)MEMORY[0xAC11A8] || v3 == (wchar_t *)MEMORY[0xAC11AC]) )
  {
    return MEMORY[0xA8B29C][a1]; /*0x5ea96b*/
  }
  if ( v3 != (wchar_t *)MEMORY[0xAC119C] && v3 != (wchar_t *)MEMORY[0xAC11A0] && v3 != MEMORY[0xAC11B0] ) /*0x5ea98b*/
  {
    if ( v3 == (wchar_t *)MEMORY[0xAC11B4] ) /*0x5ea993*/
      return -3; /*0x5ea996*/
    else
      return SessionClass::GetPlayerSide((int)v3); /*0x5ea99f*/
  }
  return result; /*0x5ea972*/
}


// ==== 0x005EA9B0  RefreshLobbyAll_Play  this=CampaignClass  sig=ida-proto ====
int __fastcall sub_5EA9B0(int a1)
{
  wchar_t *v1; // eax

  v1 = (wchar_t *)*(&MEMORY[0xA8DA90] + a1); /*0x5ea9b0*/
  if ( v1 /*0x5ea9d1*/
    && (v1 == (wchar_t *)MEMORY[0xAC11A4] || v1 == (wchar_t *)MEMORY[0xAC11A8] || v1 == (wchar_t *)MEMORY[0xAC11AC]) )
  {
    return MEMORY[0xA8B2BC][a1]; /*0x5ea9d3*/
  }
  if ( v1 == (wchar_t *)MEMORY[0xAC119C] /*0x5ea9f9*/
    || v1 == (wchar_t *)MEMORY[0xAC11A0]
    || v1 == MEMORY[0xAC11B0]
    || v1 == (wchar_t *)MEMORY[0xAC11B4] )
  {
    return -2; /*0x5eaa02*/
  }
  return SessionClass::GetPlayerColor(*(&MEMORY[0xA8DA90] + a1)); /*0x5ea9da*/
}


// ==== 0x005EAA10  RefreshLobbyAll_Get  this=-  sig=ida-proto ====
int __fastcall sub_5EAA10(int a1)
{
  wchar_t *v1; // eax

  v1 = (wchar_t *)*(&MEMORY[0xA8DA90] + a1); /*0x5eaa10*/
  if ( v1 /*0x5eaa31*/
    && (v1 == (wchar_t *)MEMORY[0xAC11A4] || v1 == (wchar_t *)MEMORY[0xAC11A8] || v1 == (wchar_t *)MEMORY[0xAC11AC]) )
  {
    return MEMORY[0xA8B2DC][a1]; /*0x5eaa33*/
  }
  if ( v1 == (wchar_t *)MEMORY[0xAC119C] /*0x5eaa59*/
    || v1 == (wchar_t *)MEMORY[0xAC11A0]
    || v1 == MEMORY[0xAC11B0]
    || v1 == (wchar_t *)MEMORY[0xAC11B4] )
  {
    return -2; /*0x5eaa62*/
  }
  return SessionClass::GetOption(*(&MEMORY[0xA8DA90] + a1)); /*0x5eaa3a*/
}


// ==== 0x005EAA70  RefreshLobbyAll_Get_5EAA70  this=-  sig=ida-proto ====
int __fastcall sub_5EAA70(int a1)
{
  wchar_t *v1; // eax

  v1 = (wchar_t *)*(&MEMORY[0xA8DA90] + a1); /*0x5eaa70*/
  if ( v1 /*0x5eaa91*/
    && (v1 == (wchar_t *)MEMORY[0xAC11A4] || v1 == (wchar_t *)MEMORY[0xAC11A8] || v1 == (wchar_t *)MEMORY[0xAC11AC]) )
  {
    return MEMORY[0xA8B2FC][a1]; /*0x5eaa93*/
  }
  if ( v1 == (wchar_t *)MEMORY[0xAC119C] /*0x5eaab9*/
    || v1 == (wchar_t *)MEMORY[0xAC11A0]
    || v1 == MEMORY[0xAC11B0]
    || v1 == (wchar_t *)MEMORY[0xAC11B4] )
  {
    return -2; /*0x5eaac2*/
  }
  return SessionClass::GetOption2(*(&MEMORY[0xA8DA90] + a1)); /*0x5eaa9a*/
}


// ==== 0x005EAAD0  ObjectClass::RefreshLobbyAll_Helper_5EAAD0  this=ObjectClass  sig=csp ====
int __thiscall sub_5EAAD0(void *this)
{
  if ( !this ) /*0x5eaad4*/
    return 1746; /*0x5eaad6*/
  if ( this == (void *)1 ) /*0x5eaadf*/
    return 1747; /*0x5eaae1*/
  if ( this == (void *)2 ) /*0x5eaaea*/
    return 1748; /*0x5eaaec*/
  if ( this == (void *)3 ) /*0x5eaaf5*/
    return 1749; /*0x5eaaf7*/
  if ( this == (void *)4 ) /*0x5eab00*/
    return 1750; /*0x5eab02*/
  if ( this == (void *)5 ) /*0x5eab0b*/
    return 1751; /*0x5eab0d*/
  if ( this == (void *)6 ) /*0x5eab16*/
    return 1752; /*0x5eab18*/
  return this != (void *)7 ? -1 : 1753;
}


// ==== 0x005EAB30  ObjectClass::RefreshLobbyAll_Play_5EAB30  this=ObjectClass  sig=csp ====
int __thiscall sub_5EAB30(char *this)
{
  int *v2; // ebx
  wchar_t *v3; // ecx
  int PlayerColor; // eax
  int result; // eax
  char Buffer[4]; // [esp+10h] [ebp-4h] BYREF

  v2 = MEMORY[0xA8B2BC]; /*0x5eab37*/
  *this = 0; /*0x5eab3c*/
  do /*0x5eabeb*/
  {
    v3 = (wchar_t *)v2[2549]; /*0x5eab40*/
    if ( v3 /*0x5eab60*/
      && (v3 == (wchar_t *)MEMORY[0xAC11A4] || v3 == (wchar_t *)MEMORY[0xAC11A8] || v3 == (wchar_t *)MEMORY[0xAC11AC]) )
    {
      PlayerColor = *v2; /*0x5eab62*/
    }
    else if ( v3 == (wchar_t *)MEMORY[0xAC119C] ) /*0x5eab6c*/
    {
      PlayerColor = -2; /*0x5eab6e*/
    }
    else if ( v3 == (wchar_t *)MEMORY[0xAC11A0] ) /*0x5eab7b*/
    {
      PlayerColor = -2; /*0x5eab7d*/
    }
    else if ( v3 == MEMORY[0xAC11B0] ) /*0x5eab8a*/
    {
      PlayerColor = -2; /*0x5eab8c*/
    }
    else
    {
      PlayerColor = -2; /*0x5eab9a*/
      if ( v3 != (wchar_t *)MEMORY[0xAC11B4] ) /*0x5eab9f*/
        PlayerColor = SessionClass::GetPlayerColor((int)v3); /*0x5eaba1*/
    }
    sprintf(Buffer, MEMORY[0x831D44], PlayerColor); /*0x5eabb1*/
    result = 0; /*0x5eabbd*/
    ++v2; /*0x5eabc8*/
    strcat(this, Buffer); /*0x5eabdc*/
  }
  while ( (int)v2 < (int)MEMORY[0xA8B2DC] ); /*0x5eabeb*/
  return result; /*0x5eabf1*/
}


// ==== 0x005EAC00  ObjectClass::RefreshLobbyAll_Get_5EAC00  this=ObjectClass  sig=csp ====
int __thiscall sub_5EAC00(char *this)
{
  int *v2; // ebx
  wchar_t *v3; // ecx
  int Option; // eax
  int result; // eax
  char Buffer[4]; // [esp+10h] [ebp-4h] BYREF

  v2 = MEMORY[0xA8B2DC]; /*0x5eac07*/
  *this = 0; /*0x5eac0c*/
  do /*0x5eacbb*/
  {
    v3 = (wchar_t *)v2[2541]; /*0x5eac10*/
    if ( v3 /*0x5eac30*/
      && (v3 == (wchar_t *)MEMORY[0xAC11A4] || v3 == (wchar_t *)MEMORY[0xAC11A8] || v3 == (wchar_t *)MEMORY[0xAC11AC]) )
    {
      Option = *v2; /*0x5eac32*/
    }
    else if ( v3 == (wchar_t *)MEMORY[0xAC119C] ) /*0x5eac3c*/
    {
      Option = -2; /*0x5eac3e*/
    }
    else if ( v3 == (wchar_t *)MEMORY[0xAC11A0] ) /*0x5eac4b*/
    {
      Option = -2; /*0x5eac4d*/
    }
    else if ( v3 == MEMORY[0xAC11B0] ) /*0x5eac5a*/
    {
      Option = -2; /*0x5eac5c*/
    }
    else
    {
      Option = -2; /*0x5eac6a*/
      if ( v3 != (wchar_t *)MEMORY[0xAC11B4] ) /*0x5eac6f*/
        Option = SessionClass::GetOption((int)v3); /*0x5eac71*/
    }
    sprintf(Buffer, MEMORY[0x831D44], Option); /*0x5eac81*/
    result = 0; /*0x5eac8d*/
    ++v2; /*0x5eac98*/
    strcat(this, Buffer); /*0x5eacac*/
  }
  while ( (int)v2 < (int)MEMORY[0xA8B2FC] ); /*0x5eacbb*/
  return result; /*0x5eacc1*/
}


// ==== 0x005EACD0  ObjectClass::RefreshLobbyAll_Get_5EACD0  this=ObjectClass  sig=csp ====
int __thiscall sub_5EACD0(char *this)
{
  int *v2; // ebx
  wchar_t *v3; // ecx
  int Option2; // eax
  int result; // eax
  char Buffer[4]; // [esp+10h] [ebp-4h] BYREF

  v2 = MEMORY[0xA8B2FC]; /*0x5eacd7*/
  *this = 0; /*0x5eacdc*/
  do /*0x5ead8b*/
  {
    v3 = (wchar_t *)v2[2533]; /*0x5eace0*/
    if ( v3 /*0x5ead00*/
      && (v3 == (wchar_t *)MEMORY[0xAC11A4] || v3 == (wchar_t *)MEMORY[0xAC11A8] || v3 == (wchar_t *)MEMORY[0xAC11AC]) )
    {
      Option2 = *v2; /*0x5ead02*/
    }
    else if ( v3 == (wchar_t *)MEMORY[0xAC119C] ) /*0x5ead0c*/
    {
      Option2 = -2; /*0x5ead0e*/
    }
    else if ( v3 == (wchar_t *)MEMORY[0xAC11A0] ) /*0x5ead1b*/
    {
      Option2 = -2; /*0x5ead1d*/
    }
    else if ( v3 == MEMORY[0xAC11B0] ) /*0x5ead2a*/
    {
      Option2 = -2; /*0x5ead2c*/
    }
    else
    {
      Option2 = -2; /*0x5ead3a*/
      if ( v3 != (wchar_t *)MEMORY[0xAC11B4] ) /*0x5ead3f*/
        Option2 = SessionClass::GetOption2((int)v3); /*0x5ead41*/
    }
    sprintf(Buffer, MEMORY[0x831D44], Option2); /*0x5ead51*/
    result = 0; /*0x5ead5d*/
    ++v2; /*0x5ead68*/
    strcat(this, Buffer); /*0x5ead7c*/
  }
  while ( (int)v2 < (int)&MEMORY[0xA8B31C] ); /*0x5ead8b*/
  return result; /*0x5ead91*/
}


// ==== 0x005EADA0  ObjectClass::RefreshLobbyAll_Get_5EADA0  this=AbstractClass  sig=csp ====
char __thiscall RefreshLobbyAll_Get_5EADA0(SessionClass *hDlg)
{
  SessionClass *v2; // edi
  SessionClass *v3; // esi
  int ResourceID3CSF; // eax
  CoordStruct *v5; // ecx
  int v6; // ebx
  int Option; // eax
  char result; // al

  v2 = 0; /*0x5eada6*/
  v3 = (SessionClass *)&HouseClass_Player.__pad_5568[8232]; /*0x5eada8*/
  do /*0x5eae30*/
  {
    ResourceID3CSF = GetResourceID3CSF(v2); /*0x5eadaf*/
    v5 = *(CoordStruct **)&v3->unknown_8AA[7946]; /*0x5eadb4*/
    v6 = ResourceID3CSF; /*0x5eadba*/
    if ( v5 /*0x5eadd6*/
      && (v5 == *(&g_MatrixTransformState + 2277)
       || v5 == *(&g_MatrixTransformState + 2278)
       || v5 == *(&g_MatrixTransformState + 2279)) )
    {
      Option = v3->GameMode[0]; /*0x5eadd8*/
    }
    else if ( v5 == *(&g_MatrixTransformState + 2275) ) /*0x5eade2*/
    {
      Option = -2; /*0x5eade4*/
    }
    else if ( v5 == *(&g_MatrixTransformState + 2276) ) /*0x5eadf1*/
    {
      Option = -2; /*0x5eadf3*/
    }
    else if ( v5 == *(&g_MatrixTransformState + 2280) ) /*0x5eae00*/
    {
      Option = -2; /*0x5eae02*/
    }
    else
    {
      Option = -2; /*0x5eae10*/
      if ( v5 != *(&g_MatrixTransformState + 2281) ) /*0x5eae15*/
        Option = SessionClass::GetOption((int)v5); /*0x5eae17*/
    }
    result = SetupLobbyFactionSlots(hDlg, v6, Option); /*0x5eae21*/
    v3 = (SessionClass *)((char *)v3 + 4); /*0x5eae26*/
    v2 = (SessionClass *)((char *)v2 + 1); /*0x5eae29*/
  }
  while ( (int)v3 < (int)&HouseClass_Player.__pad_5568[8264] ); /*0x5eae30*/
  return result; /*0x5eae36*/
}


// ==== 0x005EAE40  ObjectClass::RefreshLobbyAll_Setup  this=ObjectClass  sig=csp ====
bool __thiscall RefreshLobbyAll_Setup(SessionClass *hDlg)
{
  char *v2; // edi
  int *v3; // esi
  int ResourceID4CSF; // eax
  CoordStruct *v5; // ecx
  int v6; // ebx
  int Option2; // eax
  bool result; // al

  v2 = 0; /*0x5eae46*/
  v3 = (int *)&HouseClass_Player.__pad_5568[8264]; /*0x5eae48*/
  do /*0x5eaed0*/
  {
    ResourceID4CSF = GetResourceID4CSF(v2); /*0x5eae4f*/
    v5 = (CoordStruct *)v3[2533]; /*0x5eae54*/
    v6 = ResourceID4CSF; /*0x5eae5a*/
    if ( v5 /*0x5eae76*/
      && (v5 == *(&g_MatrixTransformState + 2277)
       || v5 == *(&g_MatrixTransformState + 2278)
       || v5 == *(&g_MatrixTransformState + 2279)) )
    {
      Option2 = *v3; /*0x5eae78*/
    }
    else if ( v5 == *(&g_MatrixTransformState + 2275) ) /*0x5eae82*/
    {
      Option2 = -2; /*0x5eae84*/
    }
    else if ( v5 == *(&g_MatrixTransformState + 2276) ) /*0x5eae91*/
    {
      Option2 = -2; /*0x5eae93*/
    }
    else if ( v5 == *(&g_MatrixTransformState + 2280) ) /*0x5eaea0*/
    {
      Option2 = -2; /*0x5eaea2*/
    }
    else
    {
      Option2 = -2; /*0x5eaeb0*/
      if ( v5 != *(&g_MatrixTransformState + 2281) ) /*0x5eaeb5*/
        Option2 = SessionClass::GetOption2((int)v5); /*0x5eaeb7*/
    }
    result = SetupLobbyPlayerSlots(hDlg, v6, Option2); /*0x5eaec1*/
    ++v3; /*0x5eaec6*/
    ++v2; /*0x5eaec9*/
  }
  while ( (int)v3 < (int)&HouseClass_Player.__pad_5568[8296] ); /*0x5eaed0*/
  return result; /*0x5eaed6*/
}


// ==== 0x005EAEE0  ObjectClass::RefreshLobbyAll_Play_5EAEE0  this=ObjectClass  sig=csp ====
const wchar_t *__thiscall sub_5EAEE0(HWND this)
{
  const wchar_t *result; // eax
  int v2; // ebp
  int v3; // edi
  const wchar_t **v4; // esi
  const wchar_t *v5; // ebx
  int v6; // esi
  int ResourceIDCSF; // eax
  wchar_t *v8; // ecx
  int v9; // edi
  int PlayerColor; // eax
  char *v11; // edi
  int *v12; // esi
  int v13; // eax
  wchar_t *v14; // ecx
  int v15; // ebx
  int v16; // eax

  result = (const wchar_t *)MEMORY[0xA8DA84]; /*0x5eaee1*/
  if ( MEMORY[0xA8DA84] ) /*0x5eaef0*/
  {
    v3 = 0; /*0x5eaeff*/
    v4 = (const wchar_t **)&MEMORY[0xA8DA90]; /*0x5eaf01*/
    v5 = *(const wchar_t **)MEMORY[0xA8DA78]; /*0x5eaf06*/
    while ( 1 ) /*0x5eaf08*/
    {
      result = *v4; /*0x5eaf08*/
      if ( *v4 ) /*0x5eaf08*/
      {
        result = (const wchar_t *)_wcsicmp(v5, *v4); /*0x5eaf10*/
        if ( !result ) /*0x5eaf1a*/
          break; /*0x5eaf1a*/
      }
      ++v4; /*0x5eaf1c*/
      ++v3; /*0x5eaf1f*/
      if ( (int)v4 >= (int)&MEMORY[0xA8DAB0] ) /*0x5eaf26*/
      {
        v6 = -1; /*0x5eaf28*/
        goto LABEL_8; /*0x5eaf28*/
      }
    }
    v6 = v3; /*0x5eaf6b*/
LABEL_8:
    v2 = v6; /*0x5eaf2b*/
    if ( v6 != -1 ) /*0x5eaf30*/
    {
      ResourceIDCSF = GetResourceIDCSF((void *)v6); /*0x5eaf38*/
      v8 = (wchar_t *)*(&MEMORY[0xA8DA90] + v6); /*0x5eaf3d*/
      v9 = ResourceIDCSF; /*0x5eaf44*/
      if ( v8 /*0x5eaf60*/
        && (v8 == (wchar_t *)MEMORY[0xAC11A4] || v8 == (wchar_t *)MEMORY[0xAC11A8] || v8 == (wchar_t *)MEMORY[0xAC11AC]) )
      {
        PlayerColor = MEMORY[0xA8B2BC][v6]; /*0x5eaf62*/
      }
      else if ( v8 == (wchar_t *)MEMORY[0xAC119C] ) /*0x5eaf75*/
      {
        PlayerColor = -2; /*0x5eaf77*/
      }
      else if ( v8 == (wchar_t *)MEMORY[0xAC11A0] ) /*0x5eaf84*/
      {
        PlayerColor = -2; /*0x5eaf86*/
      }
      else if ( v8 == MEMORY[0xAC11B0] ) /*0x5eaf93*/
      {
        PlayerColor = -2; /*0x5eaf95*/
      }
      else
      {
        PlayerColor = -2; /*0x5eafa3*/
        if ( v8 != (wchar_t *)MEMORY[0xAC11B4] ) /*0x5eafa8*/
          PlayerColor = SessionClass::GetPlayerColor((int)v8); /*0x5eafaa*/
      }
      result = (const wchar_t *)SetupSkirmishSpawnLocations(this, v9, PlayerColor); /*0x5eafb6*/
    }
  }
  else
  {
    v2 = -1; /*0x5eaef2*/
  }
  v11 = 0; /*0x5eafbb*/
  v12 = MEMORY[0xA8B2BC]; /*0x5eafbd*/
  do /*0x5eb04b*/
  {
    if ( v11 != (char *)v2 ) /*0x5eafc4*/
    {
      v13 = GetResourceIDCSF(v11); /*0x5eafc8*/
      v14 = (wchar_t *)v12[2549]; /*0x5eafcd*/
      v15 = v13; /*0x5eafd3*/
      if ( v14 /*0x5eafef*/
        && (v14 == (wchar_t *)MEMORY[0xAC11A4]
         || v14 == (wchar_t *)MEMORY[0xAC11A8]
         || v14 == (wchar_t *)MEMORY[0xAC11AC]) )
      {
        v16 = *v12; /*0x5eaff1*/
      }
      else if ( v14 == (wchar_t *)MEMORY[0xAC119C] ) /*0x5eaffb*/
      {
        v16 = -2; /*0x5eaffd*/
      }
      else if ( v14 == (wchar_t *)MEMORY[0xAC11A0] ) /*0x5eb00a*/
      {
        v16 = -2; /*0x5eb00c*/
      }
      else if ( v14 == MEMORY[0xAC11B0] ) /*0x5eb019*/
      {
        v16 = -2; /*0x5eb01b*/
      }
      else
      {
        v16 = -2; /*0x5eb029*/
        if ( v14 != (wchar_t *)MEMORY[0xAC11B4] ) /*0x5eb02e*/
          v16 = SessionClass::GetPlayerColor((int)v14); /*0x5eb030*/
      }
      result = (const wchar_t *)SetupSkirmishSpawnLocations(this, v15, v16); /*0x5eb03c*/
    }
    ++v12; /*0x5eb041*/
    ++v11; /*0x5eb044*/
  }
  while ( (int)v12 < (int)MEMORY[0xA8B2DC] ); /*0x5eb04b*/
  return result; /*0x5eb051*/
}


// ==== 0x005EB060  Lobby::UpdatePlayerLabels  this=Lobby  sig=csp ====
void __thiscall Lobby_UpdatePlayerLabels(HWND this)
{
  int v1; // esi
  int v2; // eax
  int PlayerCount; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ebp
  HWND v7; // ebx
  HWND DlgItem; // esi
  wchar_t *v9; // ebx
  wchar_t *v10; // ebp
  wchar_t *String; // eax
  char *v12; // eax
  LRESULT v13; // eax
  char *v14; // eax
  int v15; // eax
  int v16; // ebp
  int v17; // ebx
  int v18; // eax
  wchar_t *v19; // eax
  LRESULT v20; // eax
  wchar_t *v21; // eax
  LRESULT v22; // eax
  wchar_t *v23; // eax
  LRESULT v24; // eax
  wchar_t *v25; // eax
  LRESULT v26; // eax
  wchar_t *v27; // eax
  LRESULT v28; // eax
  wchar_t *v29; // eax
  LRESULT v30; // eax
  LRESULT v31; // eax
  wchar_t *v32; // eax
  char v33; // [esp+1h] [ebp-13h]
  char v34; // [esp+2h] [ebp-12h]
  bool v35; // [esp+3h] [ebp-11h]
  int v36; // [esp+4h] [ebp-10h]
  int v37; // [esp+8h] [ebp-Ch]
  void *v38; // [esp+Ch] [ebp-8h] BYREF
  HWND hDlg; // [esp+10h] [ebp-4h]

  hDlg = this; /*0x5eb063*/
  if ( MEMORY[0xA8B23C] /*0x5eb07a*/
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 64))(MEMORY[0xA8B23C])
    || (v33 = 1, Network::IsMultiplayerActive()) )
  {
    v33 = 0; /*0x5eb088*/
  }
  if ( MEMORY[0xA8B238][0] == 4 ) /*0x5eb09d*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5eb0a8*/
      v1 = 6; /*0x5eb0b8*/
    else
      v1 = 2; /*0x5eb0b1*/
  }
  else
  {
    v1 = 8; /*0x5eb0bf*/
  }
  v37 = v1; /*0x5eb0c9*/
  if ( MEMORY[0x8316A4] ) /*0x5eb0cf*/
    goto LABEL_26; /*0x5eb0cf*/
  if ( v33 ) /*0x5eb0d7*/
    goto LABEL_25; /*0x5eb0d7*/
  if ( MEMORY[0xA8B238][0] == 4 ) /*0x5eb0df*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5eb0ea*/
      v2 = 6; /*0x5eb0fa*/
    else
      v2 = 2; /*0x5eb0f3*/
  }
  else
  {
    v2 = 8; /*0x5eb101*/
  }
  if ( MEMORY[0xA8B238][0] != 4 ) /*0x5eb10c*/
  {
    if ( v2 >= 8 ) /*0x5eb118*/
      goto LABEL_24; /*0x5eb118*/
    goto LABEL_23; /*0x5eb118*/
  }
  if ( v2 < 6 ) /*0x5eb111*/
LABEL_23:
    ++v2; /*0x5eb11a*/
LABEL_24:
  if ( v1 < v2 ) /*0x5eb11d*/
LABEL_25:
    v37 = v1 + 1; /*0x5eb11f*/
LABEL_26:
  v36 = 0; /*0x5eb124*/
  do
  {
    v34 = 0; /*0x5eb13d*/
    if ( v36 == MEMORY[0x8316A4] ) /*0x5eb142*/
    {
      if ( MEMORY[0xA8B254] == -1 ) /*0x5eb151*/
      {
        PlayerCount = 8; /*0x5eb153*/
      }
      else
      {
        PlayerCount = ReadPlayerCountMap(MEMORY[0xA8B254]); /*0x5eb165*/
        if ( MEMORY[0xA8B23C] ) /*0x5eb169*/
        {
          v4 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 152))(MEMORY[0xA8B23C]); /*0x5eb16d*/
          if ( v4 != -1 && v4 < PlayerCount ) /*0x5eb17a*/
            PlayerCount = v4; /*0x5eb17c*/
        }
        if ( MEMORY[0xA8B238][0] == 4 ) /*0x5eb185*/
        {
          if ( Network::IsLobbyFeature() ) /*0x5eb187*/
          {
            PlayerCount &= ~1u; /*0x5eb190*/
          }
          else if ( Network::IsMultiplayerActive() ) /*0x5eb195*/
          {
            PlayerCount = 2; /*0x5eb19e*/
          }
        }
      }
      if ( v36 > PlayerCount ) /*0x5eb1a5*/
      {
        v5 = *(&MEMORY[0xA8DA90] + v36); /*0x5eb1a7*/
        if ( v5 != MEMORY[0xAC119C] /*0x5eb1d2*/
          && (!v5 || v5 != MEMORY[0xAC11A4] && v5 != MEMORY[0xAC11A8] && v5 != MEMORY[0xAC11AC]) )
        {
          v34 = 1; /*0x5eb1d4*/
        }
      }
      if ( v36 == MEMORY[0x8316A4] && MEMORY[0xA8B23C] ) /*0x5eb1e9*/
        (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 188))(MEMORY[0xA8B23C]); /*0x5eb1ed*/
    }
    if ( v36 )
    {
      switch ( v36 )
      {
        case 1:
          v6 = 1042; /*0x5eb203*/
          break;
        case 2:
          v6 = 1043; /*0x5eb20f*/
          break;
        case 3:
          v6 = 1044; /*0x5eb21b*/
          break;
        case 4:
          v6 = 1045; /*0x5eb227*/
          break;
        case 5:
          v6 = 1046; /*0x5eb233*/
          break;
        case 6:
          v6 = 1047; /*0x5eb23f*/
          break;
        default:
          v6 = v36 != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v6 = 1041; /*0x5eb1f7*/
    }
    v7 = hDlg; /*0x5eb259*/
    DlgItem = GetDlgItem(hDlg, v6); /*0x5eb265*/
    v35 = !ShowWindow(DlgItem, 0); /*0x5eb27d*/
    SendDlgItemMessageA(v7, v6, 0x14Bu, 0, 0); /*0x5eb282*/
    v9 = (wchar_t *)*(&MEMORY[0xA8DA90] + v36); /*0x5eb291*/
    v10 = v9; /*0x5eb29a*/
    if ( v9 == (wchar_t *)MEMORY[0xAC119C] ) /*0x5eb29c*/
    {
      String = GetStringCSF(MEMORY[0x831C80], 0, MEMORY[0x8317D8], 5436); /*0x5eb2af*/
    }
    else if ( v9 == (wchar_t *)MEMORY[0xAC11A0] ) /*0x5eb2ba*/
    {
      String = GetStringCSF(MEMORY[0x831C74], 0, MEMORY[0x8317D8], 5438); /*0x5eb2cd*/
    }
    else if ( v9 == (wchar_t *)MEMORY[0xAC11A4] ) /*0x5eb2d8*/
    {
      String = GetStringCSF(MEMORY[0x831C68], 0, MEMORY[0x8317D8], 5440); /*0x5eb2eb*/
    }
    else if ( v9 == (wchar_t *)MEMORY[0xAC11A8] ) /*0x5eb2f3*/
    {
      String = GetStringCSF(MEMORY[0x831C58], 0, MEMORY[0x8317D8], 5442); /*0x5eb306*/
    }
    else if ( v9 == (wchar_t *)MEMORY[0xAC11AC] ) /*0x5eb30e*/
    {
      String = GetStringCSF(MEMORY[0x831C4C], 0, MEMORY[0x8317D8], 5444); /*0x5eb321*/
    }
    else if ( v9 == MEMORY[0xAC11B0] ) /*0x5eb329*/
    {
      String = GetStringCSF(MEMORY[0x831C40], 0, MEMORY[0x8317D8], 5446); /*0x5eb33c*/
    }
    else
    {
      if ( v9 != (wchar_t *)MEMORY[0xAC11B4] ) /*0x5eb344*/
        goto LABEL_79; /*0x5eb344*/
      String = GetStringCSF(MEMORY[0x831C2C], 0, MEMORY[0x8317D8], 5448); /*0x5eb357*/
    }
    v10 = String; /*0x5eb35c*/
LABEL_79:
    if ( v9 /*0x5eb380*/
      && (v9 == (wchar_t *)MEMORY[0xAC11A4] || v9 == (wchar_t *)MEMORY[0xAC11A8] || v9 == (wchar_t *)MEMORY[0xAC11AC])
      && !v33 )
    {
      v10 = GetStringCSF(MEMORY[0x831C80], 0, MEMORY[0x8317D8], 5455); /*0x5eb398*/
    }
    WideString::Assign((wchar_t **)&v38, v10); /*0x5eb39f*/
    v12 = CharToWideString(MEMORY[0xA8B380]); /*0x5eb3a9*/
    if ( !wcscmp((const wchar_t *)v12, MEMORY[0xA8D610]) ) /*0x5eb3b4*/
    {
      if ( v9 /*0x5eb3fe*/
        && v9 != (wchar_t *)MEMORY[0xAC119C]
        && v9 != (wchar_t *)MEMORY[0xAC11A0]
        && v9 != MEMORY[0xAC11B0]
        && v9 != (wchar_t *)MEMORY[0xAC11B4]
        && v9 != (wchar_t *)MEMORY[0xAC11A4]
        && v9 != (wchar_t *)MEMORY[0xAC11A8]
        && v9 != (wchar_t *)MEMORY[0xAC11AC] )
      {
        v13 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v10); /*0x5eb409*/
        SendMessageA(DlgItem, 0x151u, v13, (LPARAM)v9); /*0x5eb413*/
      }
      v14 = CharToWideString(MEMORY[0xA8B380]); /*0x5eb41a*/
      v15 = wcscmp(v10, (const wchar_t *)v14); /*0x5eb421*/
      v16 = v36; /*0x5eb426*/
      if ( v15 ) /*0x5eb42f*/
      {
        if ( v36 < v37 ) /*0x5eb439*/
        {
          if ( !v34 || v36 != MEMORY[0x8316A4] ) /*0x5eb44d*/
            goto LABEL_111; /*0x5eb44d*/
          if ( MEMORY[0xA8B254] == -1 ) /*0x5eb458*/
          {
            v17 = 8; /*0x5eb45a*/
          }
          else
          {
            v17 = ReadPlayerCountMap(MEMORY[0xA8B254]); /*0x5eb46c*/
            if ( MEMORY[0xA8B23C] ) /*0x5eb470*/
            {
              v18 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 152))(MEMORY[0xA8B23C]); /*0x5eb474*/
              if ( v18 != -1 && v18 < v17 ) /*0x5eb481*/
                v17 = v18; /*0x5eb483*/
            }
            if ( MEMORY[0xA8B238][0] == 4 ) /*0x5eb48c*/
            {
              if ( Network::IsLobbyFeature() ) /*0x5eb48e*/
              {
                v17 &= ~1u; /*0x5eb497*/
              }
              else if ( Network::IsMultiplayerActive() ) /*0x5eb49c*/
              {
                v17 = 2; /*0x5eb4a5*/
              }
            }
          }
          if ( v36 < v17 ) /*0x5eb4ac*/
          {
LABEL_111:
            v19 = GetStringCSF(MEMORY[0x831C80], 0, MEMORY[0x8317D8], 5479); /*0x5eb4bf*/
            v20 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v19); /*0x5eb4cd*/
            SendMessageA(DlgItem, 0x151u, v20, MEMORY[0xAC119C]); /*0x5eb4dd*/
          }
        }
        if ( v36 == MEMORY[0x8316A4] ) /*0x5eb4e5*/
        {
          v21 = GetStringCSF(MEMORY[0x831C2C], 0, MEMORY[0x8317D8], 5489); /*0x5eb4f8*/
          v22 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v21); /*0x5eb506*/
          SendMessageA(DlgItem, 0x151u, v22, MEMORY[0xAC11B4]); /*0x5eb516*/
        }
        v23 = GetStringCSF(MEMORY[0x831C74], 0, MEMORY[0x8317D8], 5496); /*0x5eb529*/
        v24 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v23); /*0x5eb537*/
        SendMessageA(DlgItem, 0x151u, v24, MEMORY[0xAC11A0]); /*0x5eb547*/
        if ( v33 && !v34 ) /*0x5eb55b*/
        {
          v25 = GetStringCSF(MEMORY[0x831C68], 0, MEMORY[0x8317D8], 5504); /*0x5eb572*/
          v26 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v25); /*0x5eb580*/
          SendMessageA(DlgItem, 0x151u, v26, MEMORY[0xAC11A4]); /*0x5eb590*/
          v27 = GetStringCSF(MEMORY[0x831C58], 0, MEMORY[0x8317D8], 5510); /*0x5eb5a3*/
          v28 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v27); /*0x5eb5b1*/
          SendMessageA(DlgItem, 0x151u, v28, MEMORY[0xAC11A8]); /*0x5eb5c1*/
          v29 = GetStringCSF(MEMORY[0x831C4C], 0, MEMORY[0x8317D8], 5516); /*0x5eb5d4*/
          v30 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v29); /*0x5eb5e2*/
          SendMessageA(DlgItem, 0x151u, v30, MEMORY[0xAC11AC]); /*0x5eb5f2*/
        }
      }
    }
    else
    {
      v31 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v10); /*0x5eb5ff*/
      SendMessageA(DlgItem, 0x151u, v31, (LPARAM)v9); /*0x5eb609*/
      v16 = v36; /*0x5eb60b*/
    }
    v32 = WideString::GetOrEmpty_Alt((wchar_t **)&v38); /*0x5eb613*/
    SendMessageA(DlgItem, 0x4C0u, 0xFFFFFFFF, (LPARAM)v32); /*0x5eb621*/
    if ( !v35 ) /*0x5eb629*/
      ShowWindow(DlgItem, 5); /*0x5eb62e*/
    DeleteAndZero::Alt(&v38); /*0x5eb638*/
    v36 = v16 + 1; /*0x5eb641*/
  }
  while ( v16 + 1 < 8 );
}


// ==== 0x005EB660  NetworkLobby::SetupPlayerSlotControls  this=SkirmishDialog  sig=csp ====
char __thiscall NetworkLobby::SetupPlayerSlotControls(HWND hDlg)
{
  int i; // edi
  int v3; // esi
  LRESULT v4; // eax
  LRESULT v5; // eax
  char v7; // [esp+13h] [ebp-5h]
  int v8; // [esp+14h] [ebp-4h]

  v7 = 0; /*0x5eb671*/
  if ( MEMORY[0xA8B238][0] == 4 ) /*0x5eb676*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5eb681*/
      v8 = 6; /*0x5eb694*/
    else
      v8 = 2; /*0x5eb68a*/
  }
  else
  {
    v8 = 8; /*0x5eb69e*/
  }
  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v3 = 1042; /*0x5eb6be*/
          break;
        case 2:
          v3 = 1043; /*0x5eb6ca*/
          break;
        case 3:
          v3 = 1044; /*0x5eb6d6*/
          break;
        case 4:
          v3 = 1045; /*0x5eb6e2*/
          break;
        case 5:
          v3 = 1046; /*0x5eb6ee*/
          break;
        case 6:
          v3 = 1047; /*0x5eb6fa*/
          break;
        default:
          v3 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v3 = 1041; /*0x5eb6b2*/
    }
    v4 = SendDlgItemMessageA(hDlg, v3, 0x147u, 0, 0); /*0x5eb721*/
    v5 = SendDlgItemMessageA(hDlg, v3, 0x150u, v4, 0); /*0x5eb72d*/
    if ( v5 && (v5 == MEMORY[0xAC11A4] || v5 == MEMORY[0xAC11A8] || v5 == MEMORY[0xAC11AC]) ) /*0x5eb749*/
    {
      if ( i >= v8 ) /*0x5eb74f*/
        *(&MEMORY[0xA8DA90] + i) = MEMORY[0xAC11A0]; /*0x5eb765*/
      else
        *(&MEMORY[0xA8DA90] + i) = MEMORY[0xAC119C]; /*0x5eb756*/
      SetupSkirmishPlayerSlots(hDlg, (void *)i, 0); /*0x5eb772*/
      MEMORY[0xA8B27C][i] = -1; /*0x5eb77a*/
      MEMORY[0xA8B29C][i] = -1; /*0x5eb781*/
      MEMORY[0xA8B2BC][i] = -1; /*0x5eb788*/
      v7 = 1; /*0x5eb78f*/
    }
  }
  return v7; /*0x5eb7a2*/
}


// ==== 0x005EB7B0  UpdateMultiplayerLobbySlots  this=-  sig=csp ====
int __fastcall UpdateMultiplayerLobbySlots(HWND hDlg, char *a2, int nIDDlgItem)
{
  int result; // eax
  char *v5; // esi
  int ResourceIDHardcodedCSF; // ebx
  int v7; // eax
  int v8; // [esp+8h] [ebp-28h]
  HWND v9; // [esp+8h] [ebp-28h]
  int v10; // [esp+Ch] [ebp-24h]
  HWND ResourceID2CSF; // [esp+10h] [ebp-20h]
  HWND v12; // [esp+10h] [ebp-20h]
  HWND ResourceIDCSF; // [esp+14h] [ebp-1Ch]
  HWND v14; // [esp+14h] [ebp-1Ch]
  int ResourceID3CSF; // [esp+18h] [ebp-18h]
  int ResourceID4CSF; // [esp+1Ch] [ebp-14h]
  HWND hWnd; // [esp+20h] [ebp-10h]
  HWND DlgItem; // [esp+24h] [ebp-Ch]
  HWND v19; // [esp+28h] [ebp-8h]
  HWND v20; // [esp+2Ch] [ebp-4h]
  int nIDDlgItema; // [esp+34h] [ebp+4h]
  bool nIDDlgItemb; // [esp+34h] [ebp+4h]

  if ( (int)a2 < 0 ) /*0x5eb7b9*/
    a2 = 0; /*0x5eb7bb*/
  result = (int)&a2[nIDDlgItem]; /*0x5eb7c1*/
  v10 = (int)&a2[nIDDlgItem]; /*0x5eb7c6*/
  if ( (int)&a2[nIDDlgItem] > 8 ) /*0x5eb7ca*/
  {
    v10 = 8; /*0x5eb7cc*/
    result = 8; /*0x5eb7d4*/
  }
  v5 = a2; /*0x5eb7da*/
  if ( (int)a2 < result ) /*0x5eb7dc*/
  {
    do /*0x5eb9f0*/
    {
      if ( v5 ) /*0x5eb7ec*/
      {
        if ( v5 == (char *)1 ) /*0x5eb806*/
        {
          nIDDlgItema = 1747; /*0x5eb808*/
          v8 = 1042; /*0x5eb810*/
        }
        else if ( v5 == (char *)2 ) /*0x5eb820*/
        {
          nIDDlgItema = 1748; /*0x5eb822*/
          v8 = 1043; /*0x5eb82a*/
        }
        else if ( v5 == (char *)3 ) /*0x5eb837*/
        {
          nIDDlgItema = 1749; /*0x5eb839*/
          v8 = 1044; /*0x5eb841*/
        }
        else if ( v5 == (char *)4 ) /*0x5eb84e*/
        {
          nIDDlgItema = 1750; /*0x5eb850*/
          v8 = 1045; /*0x5eb858*/
        }
        else if ( v5 == (char *)5 ) /*0x5eb865*/
        {
          nIDDlgItema = 1751; /*0x5eb867*/
          v8 = 1046; /*0x5eb86f*/
        }
        else if ( v5 == (char *)6 ) /*0x5eb87c*/
        {
          nIDDlgItema = 1752; /*0x5eb87e*/
          v8 = 1047; /*0x5eb886*/
        }
        else if ( v5 == (char *)7 ) /*0x5eb893*/
        {
          nIDDlgItema = 1753; /*0x5eb895*/
          v8 = 1048; /*0x5eb89d*/
        }
        else
        {
          nIDDlgItema = -1; /*0x5eb8aa*/
          v8 = -1; /*0x5eb8ae*/
        }
      }
      else
      {
        nIDDlgItema = 1746; /*0x5eb7ee*/
        v8 = 1041; /*0x5eb7f6*/
      }
      ResourceIDHardcodedCSF = GetResourceIDHardcodedCSF(v5); /*0x5eb8bb*/
      ResourceIDCSF = (HWND)GetResourceIDCSF(v5); /*0x5eb8c4*/
      ResourceID2CSF = (HWND)GetResourceID2CSF(v5); /*0x5eb8cf*/
      ResourceID3CSF = GetResourceID3CSF(v5); /*0x5eb8da*/
      ResourceID4CSF = GetResourceID4CSF(v5); /*0x5eb8e7*/
      hWnd = GetDlgItem(hDlg, nIDDlgItema); /*0x5eb8f3*/
      DlgItem = GetDlgItem(hDlg, v8); /*0x5eb8fd*/
      v19 = GetDlgItem(hDlg, ResourceIDHardcodedCSF); /*0x5eb903*/
      v9 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x5eb913*/
      v20 = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x5eb91f*/
      v12 = GetDlgItem(hDlg, ResourceID3CSF); /*0x5eb927*/
      v14 = GetDlgItem(hDlg, ResourceID4CSF); /*0x5eb939*/
      v7 = *(&MEMORY[0xA8DA90] + (_DWORD)v5); /*0x5eb93d*/
      nIDDlgItemb = v7 == MEMORY[0xAC11B4] /*0x5eb971*/
                 || v7
                 && v7 != MEMORY[0xAC119C]
                 && v7 != MEMORY[0xAC11A0]
                 && (wchar_t *)v7 != MEMORY[0xAC11B0]
                 && *(_DWORD *)(v7 + 107) == -1;
      ShowWindow(hWnd, 5); /*0x5eb983*/
      ShowWindow(DlgItem, 5); /*0x5eb98c*/
      ShowWindow(v19, 5); /*0x5eb995*/
      if ( nIDDlgItemb ) /*0x5eb99d*/
      {
        ShowWindow(v9, 0); /*0x5eb9a6*/
        ShowWindow(v12, 0); /*0x5eb9af*/
        ShowWindow(v14, 0); /*0x5eb9b3*/
      }
      else
      {
        ShowWindow(v9, 5); /*0x5eb9bc*/
        ShowWindow(v12, 5); /*0x5eb9c5*/
        if ( MEMORY[0xA8B238][0] != 4 || !Network::IsLobbyFeature() ) /*0x5eb9d0*/
          ShowWindow(v14, 5); /*0x5eb9e0*/
      }
      result = ShowWindow(v20, 5); /*0x5eb9e9*/
      ++v5; /*0x5eb9eb*/
    }
    while ( (int)v5 < v10 ); /*0x5eb9f0*/
  }
  return result; /*0x5eb9f8*/
}


// ==== 0x005EBA00  Lobby::SetupPlayerWidgets  this=SkirmishDialog  sig=csp ====
void __thiscall Lobby::SetupPlayerWidgets(HWND hDlg)
{
  INIClass *v1; // esi
  int v3; // ebp
  int v4; // ebx
  int ResourceID4CSF; // eax
  int v6; // esi
  HWND DlgItem; // ebp
  HWND v8; // ebx
  HWND v9; // edi
  bool v10; // [esp+Bh] [ebp-19h]
  HWND ResourceIDCSF; // [esp+Ch] [ebp-18h]
  HWND v12; // [esp+Ch] [ebp-18h]
  int nIDDlgItem; // [esp+10h] [ebp-14h]
  HWND nIDDlgItema; // [esp+10h] [ebp-14h]
  HWND ResourceID2CSF; // [esp+14h] [ebp-10h]
  HWND v16; // [esp+14h] [ebp-10h]
  int ResourceID3CSF; // [esp+18h] [ebp-Ch]
  int v18; // [esp+1Ch] [ebp-8h]
  HWND hWnd; // [esp+20h] [ebp-4h]

  v1 = (INIClass *)MEMORY[0x8316A4]; /*0x5eba04*/
  if ( MEMORY[0x8316A4] >= 0 ) /*0x5eba0f*/
  {
    if ( !MEMORY[0x8316A4] ) /*0x5eba15*/
      v1 = (INIClass *)MEMORY[0xA8BB0C]; /*0x5eba17*/
    if ( (int)v1 < 8 ) /*0x5eba20*/
    {
      if ( v1 ) /*0x5eba2a*/
      {
        if ( v1 == (INIClass *)1 ) /*0x5eba3b*/
        {
          v3 = 1747; /*0x5eba3d*/
          v4 = 1042; /*0x5eba42*/
        }
        else if ( v1 == (INIClass *)2 ) /*0x5eba4c*/
        {
          v3 = 1748; /*0x5eba4e*/
          v4 = 1043; /*0x5eba53*/
        }
        else if ( v1 == (INIClass *)3 ) /*0x5eba5d*/
        {
          v3 = 1749; /*0x5eba5f*/
          v4 = 1044; /*0x5eba64*/
        }
        else if ( v1 == (INIClass *)4 ) /*0x5eba6e*/
        {
          v3 = 1750; /*0x5eba70*/
          v4 = 1045; /*0x5eba75*/
        }
        else if ( v1 == (INIClass *)5 ) /*0x5eba7f*/
        {
          v3 = 1751; /*0x5eba81*/
          v4 = 1046; /*0x5eba86*/
        }
        else if ( v1 == (INIClass *)6 ) /*0x5eba90*/
        {
          v3 = 1752; /*0x5eba92*/
          v4 = 1047; /*0x5eba97*/
        }
        else if ( v1 == (INIClass *)7 ) /*0x5ebaa1*/
        {
          v3 = 1753; /*0x5ebaa3*/
          v4 = 1048; /*0x5ebaa8*/
        }
        else
        {
          v3 = -1; /*0x5ebaaf*/
          v4 = -1; /*0x5ebab2*/
        }
      }
      else
      {
        v3 = 1746; /*0x5eba2c*/
        v4 = 1041; /*0x5eba31*/
      }
      nIDDlgItem = GetResourceIDHardcodedCSF(v1); /*0x5ebabe*/
      ResourceIDCSF = (HWND)GetResourceIDCSF(v1); /*0x5ebac9*/
      ResourceID2CSF = (HWND)GetResourceID2CSF(v1); /*0x5ebad4*/
      ResourceID3CSF = GetResourceID3CSF(v1); /*0x5ebadf*/
      ResourceID4CSF = GetResourceID4CSF(v1); /*0x5ebae3*/
      v6 = *(&MEMORY[0xA8DA90] + (_DWORD)v1); /*0x5ebae8*/
      v18 = ResourceID4CSF; /*0x5ebaef*/
      v10 = v6 == MEMORY[0xAC11B4] /*0x5ebb24*/
         || v6
         && v6 != MEMORY[0xAC119C]
         && v6 != MEMORY[0xAC11A0]
         && (wchar_t *)v6 != MEMORY[0xAC11B0]
         && *(_DWORD *)(v6 + 107) == -1;
      DlgItem = GetDlgItem(hDlg, v3); /*0x5ebb33*/
      v8 = GetDlgItem(hDlg, v4); /*0x5ebb39*/
      hWnd = GetDlgItem(hDlg, nIDDlgItem); /*0x5ebb47*/
      v12 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x5ebb53*/
      v16 = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x5ebb5b*/
      nIDDlgItema = GetDlgItem(hDlg, ResourceID3CSF); /*0x5ebb6b*/
      v9 = GetDlgItem(hDlg, v18); /*0x5ebb79*/
      ShowWindow(DlgItem, 5); /*0x5ebb7e*/
      ShowWindow(v8, 5); /*0x5ebb83*/
      ShowWindow(hWnd, 5); /*0x5ebb8c*/
      if ( v10 ) /*0x5ebb96*/
      {
        ShowWindow(v12, 0); /*0x5ebbd7*/
        ShowWindow(nIDDlgItema, 0); /*0x5ebbe0*/
        ShowWindow(v9, 0); /*0x5ebbe5*/
      }
      else
      {
        ShowWindow(v12, 5); /*0x5ebb9f*/
        ShowWindow(nIDDlgItema, 5); /*0x5ebba8*/
        if ( MEMORY[0xA8B238][0] != 4 || !Network::IsLobbyFeature() ) /*0x5ebbb3*/
        {
          ShowWindow(v9, 5); /*0x5ebbbf*/
          ShowWindow(v16, 5); /*0x5ebbc8*/
          return; /*0x5ebbcf*/
        }
      }
      ShowWindow(v16, 5); /*0x5ebbee*/
    }
  }
}


// ==== 0x005EBC00  DisableCampaignSlots  this=-  sig=csp ====
void __fastcall DisableCampaignSlots(HWND hDlg, int a2)
{
  int i; // ebp
  int nIDDlgItem; // [esp+8h] [ebp-1Ch]
  HWND nIDDlgItema; // [esp+8h] [ebp-1Ch]
  int hWnd; // [esp+Ch] [ebp-18h]
  HWND hWnda; // [esp+Ch] [ebp-18h]
  HWND ResourceIDHardcodedCSF; // [esp+10h] [ebp-14h]
  HWND DlgItem; // [esp+10h] [ebp-14h]
  HWND ResourceID2CSF; // [esp+14h] [ebp-10h]
  HWND v11; // [esp+14h] [ebp-10h]
  HWND ResourceIDCSF; // [esp+18h] [ebp-Ch]
  HWND v13; // [esp+18h] [ebp-Ch]
  HWND ResourceID3CSF; // [esp+1Ch] [ebp-8h]
  HWND v15; // [esp+1Ch] [ebp-8h]
  HWND ResourceID4CSF; // [esp+20h] [ebp-4h]
  HWND v17; // [esp+20h] [ebp-4h]

  for ( i = a2; i < 8; ++i ) /*0x5ebc0c*/
  {
    if ( i != MEMORY[0x8316A4] ) /*0x5ebc26*/
    {
      if ( i ) /*0x5ebc2e*/
      {
        switch ( i ) /*0x5ebc48*/
        {
          case 1: /*0x5ebc48*/
            nIDDlgItem = 1747; /*0x5ebc4a*/
            hWnd = 1042; /*0x5ebc52*/
            break;
          case 2: /*0x5ebc48*/
            nIDDlgItem = 1748; /*0x5ebc64*/
            hWnd = 1043; /*0x5ebc6c*/
            break;
          case 3: /*0x5ebc48*/
            nIDDlgItem = 1749; /*0x5ebc7b*/
            hWnd = 1044; /*0x5ebc83*/
            break;
          case 4: /*0x5ebc48*/
            nIDDlgItem = 1750; /*0x5ebc92*/
            hWnd = 1045; /*0x5ebc9a*/
            break;
          case 5: /*0x5ebc48*/
            nIDDlgItem = 1751; /*0x5ebca9*/
            hWnd = 1046; /*0x5ebcb1*/
            break;
          case 6: /*0x5ebc48*/
            nIDDlgItem = 1752; /*0x5ebcc0*/
            hWnd = 1047; /*0x5ebcc8*/
            break;
          case 7: /*0x5ebc48*/
            nIDDlgItem = 1753; /*0x5ebcd7*/
            hWnd = 1048; /*0x5ebcdf*/
            break;
          default:
            nIDDlgItem = -1; /*0x5ebcec*/
            hWnd = -1; /*0x5ebcf0*/
            break;
        }
      }
      else
      {
        nIDDlgItem = 1746; /*0x5ebc30*/
        hWnd = 1041; /*0x5ebc38*/
      }
      ResourceIDHardcodedCSF = (HWND)GetResourceIDHardcodedCSF((void *)i); /*0x5ebcfd*/
      ResourceID2CSF = (HWND)GetResourceID2CSF((void *)i); /*0x5ebd08*/
      ResourceIDCSF = (HWND)GetResourceIDCSF((void *)i); /*0x5ebd13*/
      ResourceID3CSF = (HWND)GetResourceID3CSF((void *)i); /*0x5ebd1e*/
      ResourceID4CSF = (HWND)GetResourceID4CSF((void *)i); /*0x5ebd27*/
      nIDDlgItema = GetDlgItem(hDlg, nIDDlgItem); /*0x5ebd37*/
      hWnda = GetDlgItem(hDlg, hWnd); /*0x5ebd43*/
      DlgItem = GetDlgItem(hDlg, (int)ResourceIDHardcodedCSF); /*0x5ebd4b*/
      v11 = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x5ebd5b*/
      v13 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x5ebd67*/
      v15 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x5ebd6f*/
      v17 = GetDlgItem(hDlg, (int)ResourceID4CSF); /*0x5ebd82*/
      ShowWindow(nIDDlgItema, 0); /*0x5ebd86*/
      ShowWindow(hWnda, 0); /*0x5ebd8f*/
      ShowWindow(DlgItem, 0); /*0x5ebd98*/
      ShowWindow(v11, 0); /*0x5ebda1*/
      ShowWindow(v13, 0); /*0x5ebdaa*/
      ShowWindow(v15, 0); /*0x5ebdb3*/
      ShowWindow(v17, 0); /*0x5ebdbc*/
    }
  }
}


// ==== 0x005EBDD0  UI_Setup_5EBDD0  this=-  sig=csp ====
void __fastcall UI_Setup_5EBDD0(SkirmishDialog *aP0, int a2, int a3, int a4)
{
  int v6; // eax
  int v7; // eax
  int v8; // edx

  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072]
    && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 64))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072])
    && !Network::IsMultiplayerActive() )
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
      v6 = !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ? 6 : 2;
    else
      v6 = 8; /*0x5ebe1b*/
    if ( a2 > v6 ) /*0x5ebe22*/
      a2 = v6; /*0x5ebe24*/
  }
  if ( a4 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a4 + 64))(a4) || Network::IsMultiplayerActive() ) /*0x5ebe37*/
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5ebe47*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ebe52*/
        v7 = 6; /*0x5ebe62*/
      else
        v7 = 2; /*0x5ebe5b*/
    }
    else
    {
      v7 = 8; /*0x5ebe69*/
    }
    v8 = a3; /*0x5ebe6e*/
    if ( a3 > v7 ) /*0x5ebe74*/
      v8 = v7; /*0x5ebe76*/
  }
  else
  {
    v8 = a3; /*0x5ebe7a*/
  }
  if ( v8 - a2 <= 0 ) /*0x5ebe84*/
  {
    if ( v8 - a2 < 0 ) /*0x5ebe9c*/
      DisableCampaignSlots((HWND)aP0, v8); /*0x5ebea0*/
    Lobby::SetupPlayerWidgets((HWND)aP0); /*0x5ebea7*/
  }
  else
  {
    UpdateMultiplayerLobbySlots((HWND)aP0, (char *)a2, v8 - a2); /*0x5ebe8b*/
    Lobby::SetupPlayerWidgets((HWND)aP0); /*0x5ebe92*/
  }
}


// ==== 0x005EBEC0  SetupMultiplayerLobbyScreen_Setup  this=-  sig=csp ====
char __fastcall SetupMultiplayerLobbyScreen_Setup(SkirmishDialog *hDlg, char *a2, int nIDDlgItem)
{
  char *v3; // ebx
  int v4; // esi
  int v6; // esi
  LRESULT v7; // eax
  CoordStruct *v8; // eax
  int v10; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+10h] [ebp-8h]

  v3 = a2; /*0x5ebec8*/
  v4 = (int)&a2[nIDDlgItem]; /*0x5ebed0*/
  v11 = (int)&a2[nIDDlgItem]; /*0x5ebedd*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5ebee1*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ebeec*/
      v10 = 6; /*0x5ebeff*/
    else
      v10 = 2; /*0x5ebef5*/
  }
  else
  {
    v10 = 8; /*0x5ebf09*/
  }
  if ( (int)v3 < v4 )
  {
    do
    {
      if ( v3 )
      {
        if ( v3 == (char *)1 )
        {
          v6 = 1042; /*0x5ebf30*/
        }
        else if ( v3 == (char *)2 )
        {
          v6 = 1043; /*0x5ebf3c*/
        }
        else if ( v3 == (char *)3 )
        {
          v6 = 1044; /*0x5ebf48*/
        }
        else if ( v3 == (char *)4 )
        {
          v6 = 1045; /*0x5ebf54*/
        }
        else if ( v3 == (char *)5 )
        {
          v6 = 1046; /*0x5ebf60*/
        }
        else if ( v3 == (char *)6 )
        {
          v6 = 1047; /*0x5ebf6c*/
        }
        else
        {
          v6 = v3 != (char *)7 ? -1 : 1048;
        }
      }
      else
      {
        v6 = 1041; /*0x5ebf24*/
      }
      v7 = SendDlgItemMessageA((HWND)hDlg, v6, 0x147u, 0, 0); /*0x5ebf93*/
      v8 = (CoordStruct *)SendDlgItemMessageA((HWND)hDlg, v6, 0x150u, v7, 0); /*0x5ebf9f*/
      if ( v8 == (CoordStruct *)-1 /*0x5ebfcc*/
        || !v8
        || v8 == *(&g_MatrixTransformState + 2275)
        || v8 == *(&g_MatrixTransformState + 2276)
        || v8 == *(&g_MatrixTransformState + 2281)
        || v8 == *(&g_MatrixTransformState + 2280) )
      {
        if ( v3 != *(char **)&stru_830620.__pad_DFC[648] ) /*0x5ebfd9*/
        {
          if ( (int)v3 >= v10 ) /*0x5ebfe3*/
            PlayerSkirmishSlotHandler(hDlg, v6, (LPARAM)*(&g_MatrixTransformState + 2276), 0); /*0x5ebfed*/
          else
            PlayerSkirmishSlotHandler(hDlg, v6, (LPARAM)*(&g_MatrixTransformState + 2275), 0); /*0x5ebfe6*/
        }
      }
      else
      {
        PlayerSkirmishSlotHandler(hDlg, v6, (LPARAM)v8, 0); /*0x5ebfd1*/
      }
      ++v3; /*0x5ebff6*/
    }
    while ( (int)v3 < v11 );
    v3 = a2; /*0x5ebfff*/
  }
  UpdateMultiplayerLobbySlots((HWND)hDlg, v3, nIDDlgItem); /*0x5ec00d*/
  RetVtableStubZero_eax_27(); /*0x5ec012*/
  return CheckGameSettingsChanged(1, 0); /*0x5ec020*/
}


// ==== 0x005EC030  MultiplayerLobby::FillSlots  this=SkirmishDialog  sig=csp ====
char __thiscall MultiplayerLobby::FillSlots(SkirmishDialog *hDlg)
{
  INIClass *v1; // eax
  char v2; // bl
  int v4; // edi
  int v5; // esi
  int v6; // edx
  int v7; // eax
  LPARAM v8; // edi
  int PlayerCountMap; // esi
  int v10; // eax
  int v11; // eax
  void *ResourceID2CSF; // eax

  v1 = *(INIClass **)&stru_830620.__pad_DFC[648]; /*0x5ec030*/
  v2 = 0; /*0x5ec037*/
  if ( *(int *)&stru_830620.__pad_DFC[648] < 1 )
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5ec04d*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec058*/
        v4 = 6; /*0x5ec068*/
      else
        v4 = 2; /*0x5ec061*/
    }
    else
    {
      v4 = 8; /*0x5ec06f*/
    }
    v5 = 1; /*0x5ec074*/
    while ( 1 )
    {
      if ( v5 )
      {
        switch ( v5 )
        {
          case 1:
            v6 = 1042; /*0x5ec089*/
            break;
          case 2:
            v6 = 1043; /*0x5ec095*/
            break;
          case 3:
            v6 = 1044; /*0x5ec0a1*/
            break;
          case 4:
            v6 = 1045; /*0x5ec0ad*/
            break;
          case 5:
            v6 = 1046; /*0x5ec0b9*/
            break;
          case 6:
            v6 = 1047; /*0x5ec0c5*/
            break;
          default:
            v6 = v5 != 7 ? -1 : 1048;
            break;
        }
      }
      else
      {
        v6 = 1041; /*0x5ec07d*/
      }
      v7 = *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v5 + 18396]; /*0x5ec0e1*/
      if ( v5 >= v4 ) /*0x5ec0f0*/
      {
        if ( (CoordStruct *)v7 != *(&g_MatrixTransformState + 2281) && *(_DWORD *)(v7 + 107) != -1 ) /*0x5ec10e*/
          goto LABEL_32; /*0x5ec10e*/
        PlayerSkirmishSlotHandler(hDlg, v6, (LPARAM)*(&g_MatrixTransformState + 2276), 1); /*0x5ec11b*/
      }
      else
      {
        if ( (CoordStruct *)v7 != *(&g_MatrixTransformState + 2281) && *(_DWORD *)(v7 + 107) != -1 ) /*0x5ec0fa*/
          goto LABEL_32; /*0x5ec0fa*/
        PlayerSkirmishSlotHandler(hDlg, v6, (LPARAM)*(&g_MatrixTransformState + 2275), 1); /*0x5ec104*/
      }
      v2 = 1; /*0x5ec120*/
LABEL_32:
      if ( ++v5 >= 8 ) /*0x5ec126*/
        goto LABEL_74; /*0x5ec126*/
    }
  }
  v8 = *(_DWORD *)&HouseClass_Player.__pad_5568[4 * *(_DWORD *)&stru_830620.__pad_DFC[648] + 18396]; /*0x5ec137*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8096] == -1 ) /*0x5ec141*/
  {
    PlayerCountMap = 8; /*0x5ec143*/
  }
  else
  {
    PlayerCountMap = ReadPlayerCountMap(*(int *)&HouseClass_Player.__pad_5568[8096]); /*0x5ec155*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] ) /*0x5ec159*/
    {
      v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 152))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x5ec15d*/
      if ( v10 != -1 && v10 < PlayerCountMap ) /*0x5ec16a*/
        PlayerCountMap = v10; /*0x5ec16c*/
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5ec175*/
    {
      if ( Network::IsLobbyFeature() ) /*0x5ec177*/
      {
        PlayerCountMap &= ~1u; /*0x5ec180*/
      }
      else if ( Network::IsMultiplayerActive() ) /*0x5ec185*/
      {
        PlayerCountMap = 2; /*0x5ec18e*/
      }
    }
    v1 = *(INIClass **)&stru_830620.__pad_DFC[648]; /*0x5ec193*/
  }
  if ( (int)v1 > PlayerCountMap /*0x5ec1e3*/
    && (v8
     && ((CoordStruct *)v8 != *(&g_MatrixTransformState + 2275)
      && (CoordStruct *)v8 != *(&g_MatrixTransformState + 2276)
      && (CoordStruct *)v8 != *(&g_MatrixTransformState + 2281)
      && (CoordStruct *)v8 != *(&g_MatrixTransformState + 2280)
      && *(_DWORD *)(v8 + 107) != -1
      || (CoordStruct *)v8 == *(&g_MatrixTransformState + 2277)
      || (CoordStruct *)v8 == *(&g_MatrixTransformState + 2278)
      || (CoordStruct *)v8 == *(&g_MatrixTransformState + 2279))
     || (CoordStruct *)v8 == *(&g_MatrixTransformState + 2275)) )
  {
    v8 = (LPARAM)*(&g_MatrixTransformState + 2276); /*0x5ec1e5*/
    v2 = 1; /*0x5ec1e7*/
  }
  Lobby::SetupPlayerWidgets((HWND)hDlg); /*0x5ec1eb*/
  if ( *(_DWORD *)&stru_830620.__pad_DFC[648] )
  {
    switch ( *(_DWORD *)&stru_830620.__pad_DFC[648] )
    {
      case 1:
        v11 = 1042; /*0x5ec205*/
        break;
      case 2:
        v11 = 1043; /*0x5ec211*/
        break;
      case 3:
        v11 = 1044; /*0x5ec21d*/
        break;
      case 4:
        v11 = 1045; /*0x5ec229*/
        break;
      case 5:
        v11 = 1046; /*0x5ec235*/
        break;
      case 6:
        v11 = 1047; /*0x5ec241*/
        break;
      default:
        v11 = *(_DWORD *)&stru_830620.__pad_DFC[648] != 7 ? -1 : 1048;
        break;
    }
  }
  else
  {
    v11 = 1041; /*0x5ec1f9*/
  }
  PlayerSkirmishSlotHandler(hDlg, v11, v8, 1); /*0x5ec260*/
LABEL_74:
  if ( v2 ) /*0x5ec267*/
  {
    ResourceID2CSF = (void *)GetResourceID2CSF(*(void **)&stru_830620.__pad_DFC[648]); /*0x5ec26f*/
    SelectLobbyCountry((HWND)hDlg, ResourceID2CSF); /*0x5ec278*/
  }
  RetVtableStubZero_eax_27(); /*0x5ec27d*/
  return CheckGameSettingsChanged(1, 0); /*0x5ec286*/
}


// ==== 0x005EC290  sub_5EC290  this=-  sig=ida-proto ====
char __fastcall sub_5EC290(SkirmishDialog *hDlg, int a2)
{
  int v4; // ebp
  int i; // esi
  int v6; // edx

  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5ec2a0*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec2ab*/
      v4 = 6; /*0x5ec2bb*/
    else
      v4 = 2; /*0x5ec2b4*/
  }
  else
  {
    v4 = 8; /*0x5ec2c2*/
  }
  for ( i = a2; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v6 = 1042; /*0x5ec2e2*/
          break;
        case 2:
          v6 = 1043; /*0x5ec2ee*/
          break;
        case 3:
          v6 = 1044; /*0x5ec2fa*/
          break;
        case 4:
          v6 = 1045; /*0x5ec306*/
          break;
        case 5:
          v6 = 1046; /*0x5ec312*/
          break;
        case 6:
          v6 = 1047; /*0x5ec31e*/
          break;
        default:
          v6 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v6 = 1041; /*0x5ec2d6*/
    }
    if ( i >= v4 ) /*0x5ec341*/
    {
      if ( i != *(_DWORD *)&stru_830620.__pad_DFC[648] ) /*0x5ec353*/
        PlayerSkirmishSlotHandler(hDlg, v6, (LPARAM)*(&g_MatrixTransformState + 2276), 1); /*0x5ec360*/
    }
    else if ( i != *(_DWORD *)&stru_830620.__pad_DFC[648] ) /*0x5ec345*/
    {
      PlayerSkirmishSlotHandler(hDlg, v6, (LPARAM)*(&g_MatrixTransformState + 2275), 1); /*0x5ec34f*/
    }
  }
  DisableCampaignSlots((HWND)hDlg, a2); /*0x5ec373*/
  if ( *(&g_MatrixTransformState + 2263) ) /*0x5ec383*/
    DisplayRankingsThunkWOL(); /*0x5ec385*/
  else
    RetVtableStubZero_eax_27(); /*0x5ec38c*/
  return CheckGameSettingsChanged(1, 0);
}


// ==== 0x005EC3A0  SetupMultiplayerLobbyScreen  this=SkirmishDialog  sig=csp ====
void __fastcall SetupMultiplayerLobbyScreen(SkirmishDialog *hDlg, wchar_t *a2, int a3)
{
  int PlayerCountMap; // esi
  int v6; // eax
  char v7; // bl
  int v8; // eax
  int v9; // edi
  int v10; // esi
  int v11; // eax
  INIClass *ResourceID2; // esi
  HWND DlgItem; // eax
  int ResourceIDCSF; // esi
  int v15; // ebx
  int v16; // edi
  int v17; // esi
  int v18; // edx
  ReferenceCounted *v19; // esi
  wchar_t **v20; // eax
  CampaignScore *v21; // eax
  int v22; // [esp+Ch] [ebp-114h]
  wchar_t *v23; // [esp+10h] [ebp-110h] BYREF
  int v24; // [esp+14h] [ebp-10Ch]
  wchar_t *v25; // [esp+18h] [ebp-108h] BYREF
  ObjectClass aP0; // [esp+1Ch] [ebp-104h] BYREF

  v23 = a2; /*0x5ec3b7*/
  if ( a3 == -1 ) /*0x5ec3bb*/
  {
    PlayerCountMap = 8; /*0x5ec3bd*/
  }
  else
  {
    PlayerCountMap = ReadPlayerCountMap(a3); /*0x5ec3cf*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] ) /*0x5ec3d3*/
    {
      v6 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 152))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x5ec3d7*/
      if ( v6 != -1 && v6 < PlayerCountMap ) /*0x5ec3e4*/
        PlayerCountMap = v6; /*0x5ec3e6*/
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5ec3ef*/
    {
      if ( Network::IsLobbyFeature() ) /*0x5ec3f1*/
      {
        PlayerCountMap &= ~1u; /*0x5ec3fa*/
      }
      else if ( Network::IsMultiplayerActive() ) /*0x5ec3ff*/
      {
        PlayerCountMap = 2; /*0x5ec408*/
      }
    }
  }
  v22 = PlayerCountMap; /*0x5ec413*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] /*0x5ec425*/
    && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 64))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072])
    || Network::IsMultiplayerActive() )
  {
    v7 = 0; /*0x5ec437*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5ec43c*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec447*/
        v8 = 6; /*0x5ec457*/
      else
        v8 = 2; /*0x5ec450*/
    }
    else
    {
      v8 = 8; /*0x5ec45e*/
    }
    if ( PlayerCountMap > v8 ) /*0x5ec465*/
      v22 = v8; /*0x5ec467*/
  }
  else
  {
    v7 = 1; /*0x5ec42e*/
  }
  if ( a2 == (wchar_t *)-1 ) /*0x5ec46e*/
  {
    *(_DWORD *)&stru_830620.__pad_DFC[740] = 8; /*0x5ec470*/
    *(&g_MatrixTransformState + 2287) = 0; /*0x5ec47a*/
  }
  v9 = v22 - *(_DWORD *)&stru_830620.__pad_DFC[740]; /*0x5ec493*/
  v10 = 0; /*0x5ec495*/
  v24 = 0; /*0x5ec499*/
  if ( !*(_DWORD *)&stru_830620.__pad_DFC[648] ) /*0x5ec49d*/
  {
    if ( v7 ) /*0x5ec4a1*/
    {
LABEL_40:
      v10 = 1; /*0x5ec4f1*/
      v24 = 1; /*0x5ec4fd*/
      if ( !*(&g_MatrixTransformState + 2287) && v9 + v22 < 7 ) /*0x5ec50d*/
        ++v9; /*0x5ec50f*/
      goto LABEL_43; /*0x5ec50f*/
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5ec4af*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec4ba*/
        v11 = 6; /*0x5ec4ca*/
      else
        v11 = 2; /*0x5ec4c3*/
    }
    else
    {
      v11 = 8; /*0x5ec4d1*/
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5ec4dc*/
    {
      if ( v11 >= 6 ) /*0x5ec4e1*/
      {
LABEL_39:
        if ( v22 >= v11 ) /*0x5ec4ef*/
          goto LABEL_43; /*0x5ec4ef*/
        goto LABEL_40; /*0x5ec4ef*/
      }
    }
    else if ( v11 >= 8 ) /*0x5ec4e8*/
    {
      goto LABEL_39; /*0x5ec4e8*/
    }
    ++v11; /*0x5ec4ea*/
    goto LABEL_39; /*0x5ec4ea*/
  }
LABEL_43:
  if ( v23 == (wchar_t *)-1 && !*(_DWORD *)&stru_830620.__pad_DFC[648] ) /*0x5ec51e*/
  {
    ResourceID2 = (INIClass *)GetResourceID2CSF(0); /*0x5ec527*/
    SetupComboBoxObserver((HWND)hDlg, (int)ResourceID2); /*0x5ec52d*/
    SetupLobbyCountryCombo(hDlg, (int)ResourceID2, -3); /*0x5ec538*/
    DlgItem = GetDlgItem((HWND)hDlg, 1041); /*0x5ec54c*/
    SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x5ec553*/
    ResourceIDCSF = GetResourceIDCSF(0); /*0x5ec560*/
    FillListBox((HWND)hDlg, ResourceIDCSF); /*0x5ec566*/
    SetupSkirmishSpawnLocations((HWND)hDlg, ResourceIDCSF, 8); /*0x5ec571*/
    v10 = v24; /*0x5ec576*/
  }
  if ( v9 <= 0 )
  {
    if ( v9 >= 0 )
    {
      if ( v10 + v22 >= 7 ) /*0x5ec6b9*/
        SetupMultiplayerLobbyScreen_Setup(hDlg, (char *)7, 1); /*0x5ec6c4*/
    }
    else
    {
      v15 = v10 + v22; /*0x5ec5a3*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5ec5a6*/
      {
        if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec5b1*/
          v16 = 6; /*0x5ec5c1*/
        else
          v16 = 2; /*0x5ec5ba*/
      }
      else
      {
        v16 = 8; /*0x5ec5c8*/
      }
      v17 = v10 + v22; /*0x5ec5d0*/
      if ( v15 < 8 )
      {
        do
        {
          if ( v17 )
          {
            switch ( v17 )
            {
              case 1:
                v18 = 1042; /*0x5ec5e8*/
                break;
              case 2:
                v18 = 1043; /*0x5ec5f4*/
                break;
              case 3:
                v18 = 1044; /*0x5ec600*/
                break;
              case 4:
                v18 = 1045; /*0x5ec60c*/
                break;
              case 5:
                v18 = 1046; /*0x5ec618*/
                break;
              case 6:
                v18 = 1047; /*0x5ec624*/
                break;
              default:
                v18 = v17 != 7 ? -1 : 1048;
                break;
            }
          }
          else
          {
            v18 = 1041; /*0x5ec5dc*/
          }
          if ( v17 >= v16 ) /*0x5ec647*/
          {
            if ( v17 != *(_DWORD *)&stru_830620.__pad_DFC[648] ) /*0x5ec659*/
              PlayerSkirmishSlotHandler(hDlg, v18, (LPARAM)*(&g_MatrixTransformState + 2276), 1); /*0x5ec666*/
          }
          else if ( v17 != *(_DWORD *)&stru_830620.__pad_DFC[648] ) /*0x5ec64b*/
          {
            PlayerSkirmishSlotHandler(hDlg, v18, (LPARAM)*(&g_MatrixTransformState + 2275), 1); /*0x5ec655*/
          }
          ++v17; /*0x5ec66b*/
        }
        while ( v17 < 8 );
      }
      DisableCampaignSlots((HWND)hDlg, v15); /*0x5ec679*/
      if ( *(&g_MatrixTransformState + 2263) ) /*0x5ec685*/
        DisplayRankingsThunkWOL(); /*0x5ec687*/
      else
        RetVtableStubZero_eax_27(); /*0x5ec69b*/
      CheckGameSettingsChanged(1, 0); /*0x5ec690*/
      v10 = v24; /*0x5ec695*/
    }
  }
  else
  {
    SetupMultiplayerLobbyScreen_Setup( /*0x5ec58c*/
      hDlg,
      (char *)*(&g_MatrixTransformState + 2287) + *(_DWORD *)&stru_830620.__pad_DFC[740],
      v9);
  }
  MultiplayerLobby::FillSlots(hDlg); /*0x5ec6cb*/
  if ( *(_DWORD *)&stru_830620.__pad_DFC[648] == -1 ) /*0x5ec6d9*/
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] ) /*0x5ec6e7*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 188))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]) ) /*0x5ec6ef*/
      {
        *(_DWORD *)&stru_830620.__pad_DFC[648] = 7; /*0x5ec6ff*/
        MultiplayerLobby::FillSlots(hDlg); /*0x5ec709*/
        Debug::Log(); /*0x5ec713*/
        v19 = *(ReferenceCounted **)&HouseClass_Player.__pad_5568[4 * *(_DWORD *)&stru_830620.__pad_DFC[648] + 18396]; /*0x5ec724*/
        unknown_libname_74(&v25); /*0x5ec72b*/
        if ( !v19 /*0x5ec76a*/
          || v19 == (ReferenceCounted *)*(&g_MatrixTransformState + 2275)
          || v19 == (ReferenceCounted *)*(&g_MatrixTransformState + 2276)
          || v19 == (ReferenceCounted *)*(&g_MatrixTransformState + 2280)
          || v19 == (ReferenceCounted *)*(&g_MatrixTransformState + 2281)
          || v19 == (ReferenceCounted *)*(&g_MatrixTransformState + 2277)
          || v19 == (ReferenceCounted *)*(&g_MatrixTransformState + 2278)
          || v19 == (ReferenceCounted *)*(&g_MatrixTransformState + 2279) )
        {
          GetPlayerTypeString((char **)&v23, (wchar_t *)v19); /*0x5ec77e*/
          v20 = CharStringToWide(&aP0, (const char **)&v23); /*0x5ec78b*/
          WideString::Reassign_Alt((void **)&v25, (const wchar_t **)v20); /*0x5ec795*/
          DeleteAndZero::Alt((void **)&aP0); /*0x5ec79e*/
          DeleteAndZero((int)&v23); /*0x5ec7a7*/
        }
        else
        {
          WideString::Assign_Alt((void **)&v25, (wchar_t *)v19); /*0x5ec771*/
        }
        v21 = WideString::GetOrEmpty(&v25); /*0x5ec7b0*/
        WideString::Assign(&v23, v21); /*0x5ec7ba*/
        ToWideStringCharAlt((char **)&aP0, (const wchar_t **)&v23); /*0x5ec7c7*/
        sprintf(&aP0.__pad_0[4], (ObjectClass *)&stru_830620.__pad_14B0[632], *(INIClass **)&stru_830620.__pad_DFC[648]); /*0x5ec7e0*/
        DeleteAndZero((int)&aP0); /*0x5ec7ec*/
        DeleteAndZero::Alt((void **)&v23); /*0x5ec7f5*/
        Network::SendOptionsGame(&aP0.__pad_0[4]); /*0x5ec7fe*/
        DeleteAndZero::Alt((void **)&v25); /*0x5ec807*/
        *(_DWORD *)&stru_830620.__pad_DFC[740] = v22; /*0x5ec816*/
        *(&g_MatrixTransformState + 2287) = (CoordStruct *)v24; /*0x5ec81c*/
      }
      else
      {
        *(&g_MatrixTransformState + 2287) = (CoordStruct *)v10; /*0x5ec867*/
        *(_DWORD *)&stru_830620.__pad_DFC[740] = v22; /*0x5ec86f*/
      }
    }
    else
    {
      *(&g_MatrixTransformState + 2287) = (CoordStruct *)v10; /*0x5ec84b*/
      *(_DWORD *)&stru_830620.__pad_DFC[740] = v22; /*0x5ec853*/
    }
  }
  else
  {
    *(&g_MatrixTransformState + 2287) = (CoordStruct *)v10; /*0x5ec830*/
    *(_DWORD *)&stru_830620.__pad_DFC[740] = v22; /*0x5ec838*/
  }
}


// ==== 0x005EC880  Map_Handle_5EC880  this=-  sig=csp ====
char __fastcall Map_Handle_5EC880(HWND hDlg, int a2, char a3, char a4)
{
  HWND v4; // ebx
  int v5; // edi
  int v6; // esi
  LRESULT v7; // eax
  LRESULT v8; // eax
  wchar_t *v9; // esi
  char v10; // bl
  int v12; // [esp+10h] [ebp-8h]

  v4 = hDlg; /*0x5ec88a*/
  v12 = a2; /*0x5ec890*/
  if ( !MEMORY[0x8316A4] ) /*0x5ec898*/
    v12 = a2 + 1; /*0x5ec89d*/
  v5 = 0; /*0x5ec8a7*/
  while ( 1 )
  {
    if ( v5 )
    {
      switch ( v5 )
      {
        case 1:
          v6 = 1042; /*0x5ec8b9*/
          break;
        case 2:
          v6 = 1043; /*0x5ec8c5*/
          break;
        case 3:
          v6 = 1044; /*0x5ec8d1*/
          break;
        case 4:
          v6 = 1045; /*0x5ec8dd*/
          break;
        case 5:
          v6 = 1046; /*0x5ec8e9*/
          break;
        default:
          v6 = v5 == 6 ? 1047 : v5 != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v6 = 1041; /*0x5ec8ad*/
    }
    v7 = SendDlgItemMessageA(v4, v6, 0x147u, 0, 0); /*0x5ec91c*/
    v8 = SendDlgItemMessageA(v4, v6, 0x150u, v7, 0); /*0x5ec928*/
    if ( v8 == -1 ) /*0x5ec92d*/
    {
      v9 = 0; /*0x5ec92f*/
    }
    else
    {
      v9 = (wchar_t *)v8; /*0x5ec935*/
      if ( v8 && (v8 == MEMORY[0xAC11A4] || v8 == MEMORY[0xAC11A8] || v8 == MEMORY[0xAC11AC]) && MEMORY[0xA8B23C] && !a3 ) /*0x5ec960*/
        return 1; /*0x5ec960*/
    }
    if ( v5 >= v12 ) /*0x5ec966*/
      break; /*0x5ec966*/
LABEL_39:
    if ( ++v5 >= 8 ) /*0x5ec9c3*/
      return 0; /*0x5ec9d2*/
  }
  if ( !v9 /*0x5ec98a*/
    || v9 == (wchar_t *)MEMORY[0xAC119C]
    || v9 == (wchar_t *)MEMORY[0xAC11A0]
    || v9 == (wchar_t *)MEMORY[0xAC11B4]
    || v9 == MEMORY[0xAC11B0] )
  {
    v10 = 0; /*0x5ec9d5*/
  }
  else
  {
    v10 = 1; /*0x5ec98e*/
    if ( SessionClass::GetPlayerSide((int)v9) != -3 ) /*0x5ec998*/
      return 1; /*0x5ec998*/
  }
  if ( !MEMORY[0xA8B23C] || a4 || !v10 || SessionClass::GetPlayerSide((int)v9) != -3 ) /*0x5ec9b9*/
  {
    v4 = hDlg; /*0x5ec9bb*/
    goto LABEL_39; /*0x5ec9bb*/
  }
  return 1; /*0x5ec9c9*/
}


// ==== 0x005EC9F0  PlayerSkirmishSlotHandler  this=-  sig=csp ====
char __fastcall sub_5ED270(SkirmishDialog *hDlg, int nIDDlgItem, LPARAM a3)
{
  CCINIClass *v5; // edx
  WPARAM v6; // ebx
  LRESULT v8; // [esp+10h] [ebp-8h]
  HWND hWnd; // [esp+14h] [ebp-4h]
  CCINIClass *v10; // [esp+1Ch] [ebp+4h]

  switch ( a3 )
  {
    case 2:
      v10 = (CCINIClass *)*(&g_MatrixTransformState + 2275); /*0x5ed289*/
      goto LABEL_13; /*0x5ed28d*/
    case 3:
      v10 = (CCINIClass *)*(&g_MatrixTransformState + 2276); /*0x5ed29a*/
      goto LABEL_13; /*0x5ed29e*/
    case 4:
      v5 = (CCINIClass *)*(&g_MatrixTransformState + 2277); /*0x5ed2a5*/
      break;
    case 5:
      v10 = (CCINIClass *)*(&g_MatrixTransformState + 2278); /*0x5ed2b7*/
      goto LABEL_13; /*0x5ed2bb*/
    case 6:
      v10 = (CCINIClass *)*(&g_MatrixTransformState + 2279); /*0x5ed2c8*/
      goto LABEL_13; /*0x5ed2cc*/
    default:
      v5 = a3 != 7 ? 0 : (CCINIClass *)*(&g_MatrixTransformState + 2281);
      break;
  }
  v10 = v5; /*0x5ed2de*/
LABEL_13:
  hWnd = GetDlgItem((HWND)hDlg, nIDDlgItem); /*0x5ed2e2*/
  ShowWindow(hWnd, 0); /*0x5ed2f1*/
  v6 = 0; /*0x5ed30a*/
  v8 = SendDlgItemMessageA((HWND)hDlg, nIDDlgItem, 0x146u, 0, 0); /*0x5ed30e*/
  if ( v8 > 0 ) /*0x5ed312*/
  {
    while ( (CCINIClass *)SendDlgItemMessageA((HWND)hDlg, nIDDlgItem, 0x150u, v6, 0) != v10 ) /*0x5ed324*/
    {
      if ( (int)++v6 >= v8 ) /*0x5ed32d*/
        goto LABEL_18; /*0x5ed32d*/
    }
    SendDlgItemMessageA((HWND)hDlg, nIDDlgItem, 0x14Eu, v6, 0); /*0x5ed33b*/
  }
LABEL_18:
  ShowWindow(hWnd, 5); /*0x5ed33d*/
  return PlayerSkirmishSlotHandler(hDlg, nIDDlgItem, (LPARAM)v10, 0); /*0x5ed35a*/
}


// ==== 0x005ED270  sub_5ED270  this=-  sig=ida-proto ====
char __fastcall sub_5ED270(SkirmishDialog *hDlg, int nIDDlgItem, LPARAM a3)
{
  CCINIClass *v5; // edx
  WPARAM v6; // ebx
  LRESULT v8; // [esp+10h] [ebp-8h]
  HWND hWnd; // [esp+14h] [ebp-4h]
  CCINIClass *v10; // [esp+1Ch] [ebp+4h]

  switch ( a3 )
  {
    case 2:
      v10 = (CCINIClass *)*(&g_MatrixTransformState + 2275); /*0x5ed289*/
      goto LABEL_13; /*0x5ed28d*/
    case 3:
      v10 = (CCINIClass *)*(&g_MatrixTransformState + 2276); /*0x5ed29a*/
      goto LABEL_13; /*0x5ed29e*/
    case 4:
      v5 = (CCINIClass *)*(&g_MatrixTransformState + 2277); /*0x5ed2a5*/
      break;
    case 5:
      v10 = (CCINIClass *)*(&g_MatrixTransformState + 2278); /*0x5ed2b7*/
      goto LABEL_13; /*0x5ed2bb*/
    case 6:
      v10 = (CCINIClass *)*(&g_MatrixTransformState + 2279); /*0x5ed2c8*/
      goto LABEL_13; /*0x5ed2cc*/
    default:
      v5 = a3 != 7 ? 0 : (CCINIClass *)*(&g_MatrixTransformState + 2281);
      break;
  }
  v10 = v5; /*0x5ed2de*/
LABEL_13:
  hWnd = GetDlgItem((HWND)hDlg, nIDDlgItem); /*0x5ed2e2*/
  ShowWindow(hWnd, 0); /*0x5ed2f1*/
  v6 = 0; /*0x5ed30a*/
  v8 = SendDlgItemMessageA((HWND)hDlg, nIDDlgItem, 0x146u, 0, 0); /*0x5ed30e*/
  if ( v8 > 0 ) /*0x5ed312*/
  {
    while ( (CCINIClass *)SendDlgItemMessageA((HWND)hDlg, nIDDlgItem, 0x150u, v6, 0) != v10 ) /*0x5ed324*/
    {
      if ( (int)++v6 >= v8 ) /*0x5ed32d*/
        goto LABEL_18; /*0x5ed32d*/
    }
    SendDlgItemMessageA((HWND)hDlg, nIDDlgItem, 0x14Eu, v6, 0); /*0x5ed33b*/
  }
LABEL_18:
  ShowWindow(hWnd, 5); /*0x5ed33d*/
  return PlayerSkirmishSlotHandler(hDlg, nIDDlgItem, (LPARAM)v10, 0); /*0x5ed35a*/
}


// ==== 0x005ED370  Session::StartGame  this=SkirmishDialog  sig=csp ====
int __thiscall Session::StartGame(HWND hWnd)
{
  ObjectClass *v2; // esi
  _DWORD *v3; // eax
  ObjectClass *v4; // eax

  if ( !IsRandMap::Sed(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254])) ) /*0x5ed381*/
    return Session::PrepareGame(hWnd); /*0x5ed3f1*/
  v2 = (ObjectClass *)MEMORY[0xAC1154]; /*0x5ed38b*/
  if ( MEMORY[0xAC1154] ) /*0x5ed393*/
  {
    ComPtr::Dtor(MEMORY[0xAC1154]); /*0x5ed397*/
    __3_YAXPAX_Z(v2); /*0x5ed39d*/
  }
  v3 = __2_YAPAXI_Z(4u); /*0x5ed3a7*/
  if ( v3 ) /*0x5ed3b2*/
    v4 = (ObjectClass *)unknown_libname_27(v3); /*0x5ed3b6*/
  else
    v4 = 0; /*0x5ed3bd*/
  MEMORY[0xAC1154] = v4; /*0x5ed3c6*/
  Surface::LoadToSurfaceSHP((char **)v4, stru_829ABC); /*0x5ed3cb*/
  if ( !*(_DWORD *)MEMORY[0xAC1154] ) /*0x5ed3d6*/
    Session::PrepareGame(hWnd); /*0x5ed3dd*/
  return InvalidateRect(hWnd, 0, 0); /*0x5ed3ed*/
}


// ==== 0x005ED400  SaveMultiplayerLobbySettings  this=-  sig=csp ====
char __fastcall SaveMultiplayerLobbySettings(ReferenceCounted *hDlg, int a2)
{
  int i; // edi
  int v5; // esi
  LRESULT v6; // eax
  LRESULT v7; // eax
  CoordStruct *v8; // ecx
  int v9; // ecx
  int v10; // esi
  int ResourceID2CSF; // eax
  int ResourceIDCSF; // eax
  LRESULT ComboBoxSelectedRaw; // eax
  int v14; // ecx
  char result; // al

  *(_DWORD *)a2 = *(_DWORD *)&HouseClass_Player.__pad_5568[8092]; /*0x5ed40c*/
  *(_DWORD *)(a2 + 4) = *(_DWORD *)&HouseClass_Player.__pad_5568[8096]; /*0x5ed416*/
  for ( i = 1; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v5 = 1042; /*0x5ed42e*/
          break;
        case 2:
          v5 = 1043; /*0x5ed43a*/
          break;
        case 3:
          v5 = 1044; /*0x5ed446*/
          break;
        case 4:
          v5 = 1045; /*0x5ed452*/
          break;
        case 5:
          v5 = 1046; /*0x5ed45e*/
          break;
        case 6:
          v5 = 1047; /*0x5ed46a*/
          break;
        default:
          v5 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v5 = 1041; /*0x5ed422*/
    }
    v6 = SendDlgItemMessageA((HWND)hDlg, v5, 0x147u, 0, 0); /*0x5ed491*/
    v7 = SendDlgItemMessageA((HWND)hDlg, v5, 0x150u, v6, 0); /*0x5ed4a1*/
    v8 = v7 != -1 ? (CoordStruct *)v7 : 0;
    if ( v8 == *(&g_MatrixTransformState + 2275) )
    {
      v9 = 2; /*0x5ed4b9*/
    }
    else if ( v8 == *(&g_MatrixTransformState + 2276) )
    {
      v9 = 3; /*0x5ed4c8*/
    }
    else if ( v8 == *(&g_MatrixTransformState + 2277) )
    {
      v9 = 4; /*0x5ed4d7*/
    }
    else if ( v8 == *(&g_MatrixTransformState + 2278) )
    {
      v9 = 5; /*0x5ed4e6*/
    }
    else if ( v8 == *(&g_MatrixTransformState + 2279) )
    {
      v9 = 6; /*0x5ed4f5*/
    }
    else
    {
      v9 = *(&g_MatrixTransformState + 2281) != v8 ? 2 : 7;
    }
    v10 = a2 + 12 * i; /*0x5ed50f*/
    *(_DWORD *)(v10 + 28) = v9; /*0x5ed513*/
    ResourceID2CSF = GetResourceID2CSF((void *)i); /*0x5ed518*/
    *(_DWORD *)(v10 + 32) = GetComboBoxSelected(hDlg, ResourceID2CSF, 0xFFFFFFFF); /*0x5ed52a*/
    ResourceIDCSF = GetResourceIDCSF((void *)i); /*0x5ed52d*/
    ComboBoxSelectedRaw = GetComboBoxSelectedRaw(hDlg, ResourceIDCSF, 0xFFFFFFFF); /*0x5ed538*/
    v14 = 3 * i + 9; /*0x5ed53d*/
    *(_DWORD *)(a2 + 4 * v14) = ComboBoxSelectedRaw; /*0x5ed545*/
  }
  *(_DWORD *)(a2 + 8) = *(_DWORD *)&HouseClass_Player.__pad_5568[8116]; /*0x5ed556*/
  *(_DWORD *)(a2 + 12) = *(_DWORD *)&HouseClass_Player.__pad_5568[8104]; /*0x5ed55e*/
  *(_DWORD *)(a2 + 16) = *(_DWORD *)&HouseClass_Player.__pad_5568[8124]; /*0x5ed567*/
  *(_BYTE *)(a2 + 20) = HouseClass_Player.__pad_5568[8110]; /*0x5ed570*/
  *(_BYTE *)(a2 + 21) = HouseClass_Player.__pad_5568[8111]; /*0x5ed578*/
  *(_BYTE *)(a2 + 22) = HouseClass_Player.__pad_5568[8112]; /*0x5ed581*/
  *(_BYTE *)(a2 + 23) = HouseClass_Player.__pad_5568[8300]; /*0x5ed58a*/
  result = HouseClass_Player.__pad_5568[8109]; /*0x5ed58d*/
  *(_BYTE *)(a2 + 24) = HouseClass_Player.__pad_5568[8109]; /*0x5ed592*/
  return result; /*0x5ed555*/
}


// ==== 0x005ED5A0  SetupMultiplayerLobbyPlayers  this=SkirmishDialog  sig=csp ====
int __fastcall SetupMultiplayerLobbyPlayers(SkirmishDialog *hDlg, int a2)
{
  char *First; // edi
  void *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  bool v12; // zf
  int v13; // edi
  int v14; // ebx
  CoordStruct *v15; // ebp
  WPARAM v16; // ebx
  void *ResourceID2CSF; // ebx
  void *ResourceIDCSF; // edi
  void *ResourceID3CSF; // ebp
  int v20; // eax
  HWND v21; // edi
  HWND v22; // ebp
  LRESULT ComboBoxSelectedRaw; // ebx
  int v24; // eax
  SessionClass *v25; // edi
  CoordStruct *v26; // ecx
  char *v27; // eax
  LRESULT v28; // ebx
  int v29; // eax
  SessionClass *v30; // edi
  CoordStruct *v31; // ecx
  SessionClass *v32; // eax
  int v33; // eax
  SessionClass *ComboBoxSelectedRaw2; // ebx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  HWND v38; // edi
  HWND v39; // ebp
  char v41; // [esp+13h] [ebp-1Dh]
  int i; // [esp+14h] [ebp-1Ch]
  int v43; // [esp+18h] [ebp-18h]
  LRESULT nIDDlgItem; // [esp+1Ch] [ebp-14h]
  void *nIDDlgItema; // [esp+1Ch] [ebp-14h]
  HWND nIDDlgItemb; // [esp+1Ch] [ebp-14h]
  int v47; // [esp+20h] [ebp-10h]
  HWND hWnd; // [esp+28h] [ebp-8h]
  HWND hWnda; // [esp+28h] [ebp-8h]
  HWND hWndb; // [esp+28h] [ebp-8h]
  HWND DlgItem; // [esp+2Ch] [ebp-4h]

  if ( *(int *)a2 < 1 || *(_DWORD *)a2 > MultiplayerGameMode::ListGet() ) /*0x5ed5bf*/
    *(_DWORD *)a2 = *(_DWORD *)(MultiplayerGameMode::GetFirst() + 40); /*0x5ed5c9*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8092] = *(_DWORD *)a2; /*0x5ed5cf*/
  First = (char *)MultiplayerGameMode::Find(*(void **)&HouseClass_Player.__pad_5568[8092]); /*0x5ed5da*/
  if ( !First ) /*0x5ed5de*/
    First = (char *)MultiplayerGameMode::GetFirst(); /*0x5ed5e5*/
  if ( (Network::IsMultiplayerActive() || Network::IsLobbyFeature()) /*0x5ed601*/
    && First
    && (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)First + 4))(First) )
  {
    v5 = *(void **)(MultiplayerGameMode::GetFirst() + 40); /*0x5ed60d*/
    *(_DWORD *)a2 = v5; /*0x5ed610*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[8092] = v5; /*0x5ed615*/
    v6 = MultiplayerGameMode::Find(v5); /*0x5ed61a*/
    if ( !v6 ) /*0x5ed621*/
      v6 = MultiplayerGameMode::GetFirst(); /*0x5ed623*/
    First = (char *)v6; /*0x5ed628*/
  }
  *(_DWORD *)a2 = *((_DWORD *)First + 10); /*0x5ed62d*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8092] = *((_DWORD *)First + 10); /*0x5ed633*/
  v7 = *(_DWORD *)(a2 + 4); /*0x5ed639*/
  if ( v7 < 0 || v7 >= *(int *)&HouseClass_Player.__pad_5568[9764] ) /*0x5ed646*/
    *(_DWORD *)(a2 + 4) = 0; /*0x5ed648*/
  if ( LoadScenarioClassByIndex(*(_DWORD *)(a2 + 4)) ) /*0x5ed652*/
    v8 = *(_DWORD *)(a2 + 4); /*0x5ed65b*/
  else
    v8 = 0; /*0x5ed660*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = v8; /*0x5ed668*/
  v41 = 0; /*0x5ed66d*/
  v9 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v8); /*0x5ed672*/
  if ( v9 && IsRandMap::Sed(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v8)) ) /*0x5ed67b*/
  {
    if ( MapSeed::IsInitialized() ) /*0x5ed684*/
      ScenarioClass::CopyStartPositions(); /*0x5ed694*/
    else
      v41 = 1; /*0x5ed68d*/
  }
  if ( !MapPreview::Check(First, v9) || v41 ) /*0x5ed6ab*/
  {
    v10 = (*(int (__thiscall **)(char *))(*(_DWORD *)First + 68))(First); /*0x5ed6b1*/
    if ( v10 == -1 ) /*0x5ed6b7*/
    {
      First = (char *)MultiplayerGameMode::GetFirst(); /*0x5ed6be*/
      *(_DWORD *)a2 = *((_DWORD *)First + 10); /*0x5ed6c3*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8092] = *((_DWORD *)First + 10); /*0x5ed6c9*/
      v10 = (*(int (__thiscall **)(char *))(*(_DWORD *)First + 68))(First); /*0x5ed6d3*/
    }
    *(_DWORD *)(a2 + 4) = v10; /*0x5ed6d6*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = v10; /*0x5ed6db*/
    LoadScenarioClassByIndex(v10); /*0x5ed6e0*/
  }
  *(_DWORD *)&HouseClass_Player.__pad_5568[8072] = First; /*0x5ed6eb*/
  LoadScenarioClassByIndex(*(int *)&HouseClass_Player.__pad_5568[8096]); /*0x5ed6f1*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 32))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x5ed6fe*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 36))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x5ed709*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)First + 24))(First); /*0x5ed710*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)First + 124))(First); /*0x5ed717*/
  v11 = 8; /*0x5ed720*/
  v47 = 8; /*0x5ed728*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5ed72c*/
  {
    if ( !Network::IsMultiplayerActive() || (v12 = Network::IsLobbyFeature() == 0, v11 = 2, !v12) ) /*0x5ed743*/
      v11 = 6; /*0x5ed745*/
    v47 = v11; /*0x5ed74a*/
  }
  if ( !*(_DWORD *)&stru_830620.__pad_DFC[648] && v11 < 8 ) /*0x5ed75b*/
    v47 = v11 + 1; /*0x5ed75e*/
  for ( i = 1; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v13 = 1042; /*0x5ed77e*/
          break;
        case 2:
          v13 = 1043; /*0x5ed78a*/
          break;
        case 3:
          v13 = 1044; /*0x5ed796*/
          break;
        case 4:
          v13 = 1045; /*0x5ed7a2*/
          break;
        case 5:
          v13 = 1046; /*0x5ed7ae*/
          break;
        case 6:
          v13 = 1047; /*0x5ed7ba*/
          break;
        default:
          v13 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v13 = 1041; /*0x5ed772*/
    }
    v14 = *(_DWORD *)(a2 + 12 * i + 28); /*0x5ed7de*/
    v43 = v14; /*0x5ed7e9*/
    if ( (Network::IsMultiplayerActive() || !*(_DWORD *)&stru_830620.__pad_DFC[648] || *(&g_MatrixTransformState + 2222)) /*0x5ed815*/
      && (v14 == 4 || v14 == 5 || v14 == 6) )
    {
      v14 = 2; /*0x5ed817*/
      v43 = 2; /*0x5ed81c*/
    }
    if ( i < v47 )
    {
      switch ( v14 )
      {
        case 7:
          v15 = *(&g_MatrixTransformState + 2275); /*0x5ed83b*/
          v43 = 2; /*0x5ed841*/
          break;
        case 2:
          v15 = *(&g_MatrixTransformState + 2275); /*0x5ed850*/
          break;
        case 3:
          v15 = *(&g_MatrixTransformState + 2276); /*0x5ed85d*/
          break;
        case 4:
          v15 = *(&g_MatrixTransformState + 2277); /*0x5ed86a*/
          break;
        case 5:
          v15 = *(&g_MatrixTransformState + 2278); /*0x5ed877*/
          break;
        default:
          v15 = v14 != 6 ? 0 : *(&g_MatrixTransformState + 2279);
          break;
      }
    }
    else
    {
      v15 = *(&g_MatrixTransformState + 2276); /*0x5ed826*/
      v43 = 3; /*0x5ed82c*/
    }
    hWnd = GetDlgItem((HWND)hDlg, v13); /*0x5ed89d*/
    ShowWindow(hWnd, 0); /*0x5ed8a1*/
    v16 = 0; /*0x5ed8b8*/
    nIDDlgItem = SendDlgItemMessageA((HWND)hDlg, v13, 0x146u, 0, 0); /*0x5ed8bc*/
    if ( nIDDlgItem > 0 ) /*0x5ed8c0*/
    {
      while ( (CoordStruct *)SendDlgItemMessageA((HWND)hDlg, v13, 0x150u, v16, 0) != v15 ) /*0x5ed8d4*/
      {
        if ( (int)++v16 >= nIDDlgItem ) /*0x5ed8dd*/
          goto LABEL_78; /*0x5ed8dd*/
      }
      SendDlgItemMessageA((HWND)hDlg, v13, 0x14Eu, v16, 0); /*0x5ed8eb*/
    }
LABEL_78:
    ShowWindow(hWnd, 5); /*0x5ed8f1*/
    PlayerSkirmishSlotHandler(hDlg, v13, (LPARAM)v15, 0); /*0x5ed905*/
    ResourceID2CSF = (void *)GetResourceID2CSF((void *)i); /*0x5ed917*/
    ResourceIDCSF = (void *)GetResourceIDCSF((void *)i); /*0x5ed920*/
    ResourceID3CSF = (void *)GetResourceID3CSF((void *)i); /*0x5ed92b*/
    nIDDlgItema = (void *)GetResourceID4CSF((void *)i); /*0x5ed932*/
    if ( v43 == 2 || v43 == 3 ) /*0x5ed946*/
    {
      v36 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 40))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x5edc12*/
      SetupLobbyCountryCombo(hDlg, (int)ResourceID2CSF, v36); /*0x5edc1a*/
      SetupSkirmishSpawnLocations((HWND)hDlg, (int)ResourceIDCSF, -2); /*0x5edc25*/
      SetupLobbyFactionSlots((SessionClass *)hDlg, (int)ResourceID3CSF, -2); /*0x5edc30*/
      v37 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 44))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x5edc3d*/
      SetupLobbyPlayerSlots((SessionClass *)hDlg, (int)nIDDlgItema, v37); /*0x5edc47*/
      DlgItem = GetDlgItem((HWND)hDlg, (int)ResourceID2CSF); /*0x5edc58*/
      v38 = GetDlgItem((HWND)hDlg, (int)ResourceIDCSF); /*0x5edc5e*/
      v39 = GetDlgItem((HWND)hDlg, (int)ResourceID3CSF); /*0x5edc64*/
      hWndb = GetDlgItem((HWND)hDlg, (int)nIDDlgItema); /*0x5edc7b*/
      EnableWindow(DlgItem, 0); /*0x5edc7f*/
      EnableWindow(v38, 0); /*0x5edc84*/
      EnableWindow(v39, 0); /*0x5edc89*/
      EnableWindow(hWndb, 0); /*0x5edc92*/
    }
    else if ( v43 == 7 ) /*0x5ed94f*/
    {
      SetupLobbyCountryCombo(hDlg, (int)ResourceID2CSF, -3); /*0x5ed95b*/
      SetupSkirmishSpawnLocations((HWND)hDlg, (int)ResourceIDCSF, -2); /*0x5ed966*/
      SetupLobbyFactionSlots((SessionClass *)hDlg, (int)ResourceID3CSF, -2); /*0x5ed971*/
      v20 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 44))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x5ed97e*/
      SetupLobbyPlayerSlots((SessionClass *)hDlg, (int)nIDDlgItema, v20); /*0x5ed988*/
      hWnda = GetDlgItem((HWND)hDlg, (int)ResourceID2CSF); /*0x5ed999*/
      v21 = GetDlgItem((HWND)hDlg, (int)ResourceIDCSF); /*0x5ed99f*/
      v22 = GetDlgItem((HWND)hDlg, (int)ResourceID3CSF); /*0x5ed9a5*/
      nIDDlgItemb = GetDlgItem((HWND)hDlg, (int)nIDDlgItema); /*0x5ed9bc*/
      EnableWindow(hWnda, 0); /*0x5ed9c0*/
      EnableWindow(v21, 0); /*0x5ed9c5*/
      EnableWindow(v22, 0); /*0x5ed9ca*/
      EnableWindow(nIDDlgItemb, 0); /*0x5ed9d3*/
    }
    else
    {
      SetupLobbyCountryCombo(hDlg, (int)ResourceID2CSF, *(_DWORD *)(a2 + 12 * i + 32)); /*0x5ed9e4*/
      SelectLobbyCountry((HWND)hDlg, ResourceID2CSF); /*0x5ed9ed*/
      SetupSkirmishSpawnLocations((HWND)hDlg, (int)ResourceIDCSF, *(_DWORD *)(a2 + 4 * (3 * i + 9))); /*0x5eda06*/
      ComboBoxSelectedRaw = GetComboBoxSelectedRaw((ReferenceCounted *)hDlg, (int)ResourceIDCSF, 0xFFFFFFFF); /*0x5eda18*/
      v24 = StartCombo::IDToIndex(ResourceIDCSF); /*0x5eda1a*/
      if ( v24 == *(_DWORD *)&HouseClass_Player.__pad_5568[18392] ) /*0x5eda25*/
      {
        FillColorComboBoxUI((HWND)hDlg, (int)ResourceIDCSF); /*0x5eda2f*/
        if ( ComboBoxSelectedRaw != -2 ) /*0x5eda37*/
        {
          v25 = (SessionClass *)&HouseClass_Player.__pad_5568[18396]; /*0x5eda39*/
          while ( 1 ) /*0x5eda3e*/
          {
            v26 = (CoordStruct *)v25->GameMode[0]; /*0x5eda3e*/
            if ( v25->GameMode[0] ) /*0x5eda3e*/
            {
              if ( v26 != *(&g_MatrixTransformState + 2275) /*0x5eda83*/
                && v26 != *(&g_MatrixTransformState + 2276)
                && v26 != *(&g_MatrixTransformState + 2280)
                && v26 != *(&g_MatrixTransformState + 2281)
                && v26 != *(&g_MatrixTransformState + 2277)
                && v26 != *(&g_MatrixTransformState + 2278)
                && v26 != *(&g_MatrixTransformState + 2279)
                && SessionClass::GetPlayerColor((int)v26) == ComboBoxSelectedRaw )
              {
                break; /*0x5eda83*/
              }
            }
            v25 = (SessionClass *)((char *)v25 + 4); /*0x5eda85*/
            if ( (int)v25 >= (int)&HouseClass_Player.__pad_5568[18428] ) /*0x5eda8e*/
            {
              v27 = &HouseClass_Player.__pad_5568[8200]; /*0x5eda90*/
              while ( *(_DWORD *)v27 != ComboBoxSelectedRaw ) /*0x5eda97*/
              {
                v27 += 4; /*0x5eda99*/
                if ( (int)v27 >= (int)&HouseClass_Player.__pad_5568[8232] ) /*0x5edaa1*/
                  goto LABEL_100; /*0x5edaa1*/
              }
              break; /*0x5eda97*/
            }
          }
          ComboBoxSelectedRaw = -2; /*0x5edaa5*/
        }
LABEL_100:
        SessionClass::AssignColor(&HouseClass_Player.__pad_5568[8068], ComboBoxSelectedRaw, 0); /*0x5edaaa*/
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[18384] ) /*0x5edabe*/
          SessionClass::SetPlayerColor(**(_DWORD **)&HouseClass_Player.__pad_5568[18372], ComboBoxSelectedRaw); /*0x5edac9*/
      }
      else
      {
        *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v24 + 8200] = ComboBoxSelectedRaw; /*0x5edad0*/
      }
      SetupLobbyFactionSlots((SessionClass *)hDlg, (int)ResourceID3CSF, -2); /*0x5edadd*/
      v28 = SetComboBoxSelection((HWND)hDlg, (int)ResourceID3CSF, 0xFFFFFFFF); /*0x5edaef*/
      v29 = Dialog::SideIDToIndex(ResourceID3CSF); /*0x5edaf1*/
      if ( v29 == *(_DWORD *)&HouseClass_Player.__pad_5568[18392] ) /*0x5edafc*/
      {
        FillComboBoxSides((HWND)hDlg, (int)ResourceID3CSF); /*0x5edb06*/
        if ( v28 != -2 ) /*0x5edb0e*/
        {
          v30 = (SessionClass *)&HouseClass_Player.__pad_5568[18396]; /*0x5edb10*/
          while ( 1 ) /*0x5edb15*/
          {
            v31 = (CoordStruct *)v30->GameMode[0]; /*0x5edb15*/
            if ( v30->GameMode[0] ) /*0x5edb15*/
            {
              if ( v31 != *(&g_MatrixTransformState + 2275) /*0x5edb5a*/
                && v31 != *(&g_MatrixTransformState + 2276)
                && v31 != *(&g_MatrixTransformState + 2280)
                && v31 != *(&g_MatrixTransformState + 2281)
                && v31 != *(&g_MatrixTransformState + 2277)
                && v31 != *(&g_MatrixTransformState + 2278)
                && v31 != *(&g_MatrixTransformState + 2279)
                && SessionClass::GetOption((int)v31) == v28 )
              {
                break; /*0x5edb5a*/
              }
            }
            v30 = (SessionClass *)((char *)v30 + 4); /*0x5edb5c*/
            if ( (int)v30 >= (int)&HouseClass_Player.__pad_5568[18428] ) /*0x5edb65*/
            {
              v32 = (SessionClass *)&HouseClass_Player.__pad_5568[8232]; /*0x5edb67*/
              while ( v32->GameMode[0] != v28 ) /*0x5edb6e*/
              {
                v32 = (SessionClass *)((char *)v32 + 4); /*0x5edb70*/
                if ( (int)v32 >= (int)&HouseClass_Player.__pad_5568[8264] ) /*0x5edb78*/
                  goto LABEL_121; /*0x5edb78*/
              }
              break; /*0x5edb6e*/
            }
          }
          v28 = -2; /*0x5edb7c*/
        }
LABEL_121:
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[18384] ) /*0x5edb88*/
          SessionClass::SetOption(**(_DWORD **)&HouseClass_Player.__pad_5568[18372], (SessionClass *)v28); /*0x5edb92*/
      }
      else
      {
        *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v29 + 8232] = v28; /*0x5edb99*/
      }
      v33 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 48))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x5edba8*/
      SetupLobbyPlayerSlots((SessionClass *)hDlg, (int)nIDDlgItema, v33); /*0x5edbb4*/
      ComboBoxSelectedRaw2 = (SessionClass *)GetComboBoxSelectedRaw2((HWND)hDlg, (int)nIDDlgItema, 0xFFFFFFFF); /*0x5edbc6*/
      v35 = Dialog::OptionIDToIndex(nIDDlgItema); /*0x5edbc8*/
      if ( v35 == *(_DWORD *)&HouseClass_Player.__pad_5568[18392] ) /*0x5edbd3*/
      {
        SetupLobbyPlayerSlots((SessionClass *)hDlg, (int)nIDDlgItema, (int)ComboBoxSelectedRaw2); /*0x5edbda*/
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[18384] ) /*0x5edbe6*/
          SessionClass::SetOption2(**(_DWORD **)&HouseClass_Player.__pad_5568[18372], ComboBoxSelectedRaw2); /*0x5edbf4*/
      }
      else
      {
        *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v35 + 8264] = ComboBoxSelectedRaw2; /*0x5edbfe*/
      }
    }
  }
  *(_DWORD *)&HouseClass_Player.__pad_5568[8116] = *(_DWORD *)(a2 + 8); /*0x5edcb1*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8104] = *(_DWORD *)(a2 + 12); /*0x5edcba*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8124] = *(_DWORD *)(a2 + 16); /*0x5edcc3*/
  HouseClass_Player.__pad_5568[8110] = *(_BYTE *)(a2 + 20); /*0x5edccc*/
  HouseClass_Player.__pad_5568[8111] = *(_BYTE *)(a2 + 21); /*0x5edcd5*/
  HouseClass_Player.__pad_5568[8112] = *(_BYTE *)(a2 + 22); /*0x5edcde*/
  HouseClass_Player.__pad_5568[8300] = *(_BYTE *)(a2 + 23); /*0x5edce7*/
  HouseClass_Player.__pad_5568[8109] = *(_BYTE *)(a2 + 24); /*0x5edcf0*/
  return a2; /*0x5edcaa*/
}


// ==== 0x005EDD00  ReadChatMessage  this=-  sig=csp ====
wchar_t **__fastcall ReadChatMessage(wchar_t **a1, HWND a2)
{
  size_t v4; // esi
  size_t v5; // esi
  wchar_t *v6; // eax
  void *v8; // [esp+Ch] [ebp-8h] BYREF
  void *v9; // [esp+10h] [ebp-4h] BYREF

  unknown_libname_74(&v8); /*0x5edd0e*/
  GetEditControlText(a2, &v8); /*0x5edd19*/
  v4 = 120; /*0x5edd22*/
  if ( !WideString::IsASCII((const wchar_t **)&v8) ) /*0x5edd27*/
  {
    v5 = 0; /*0x5edd34*/
    if ( WideString::Length((const wchar_t **)&v8) ) /*0x5edd36*/
    {
      do /*0x5edd5b*/
      {
        if ( WideString::GetChar((const wchar_t **)&v8, v5) > 0x100u ) /*0x5edd4d*/
          break; /*0x5edd4d*/
        ++v5; /*0x5edd53*/
      }
      while ( v5 < (unsigned int)WideString::Length((const wchar_t **)&v8) ); /*0x5edd5b*/
    }
    v4 = v5 - 1; /*0x5edd5d*/
    if ( v4 <= 0x28 ) /*0x5edd61*/
      v4 = 40; /*0x5edd63*/
  }
  if ( (unsigned int)WideString::Length((const wchar_t **)&v8) > v4 ) /*0x5edd73*/
  {
    String::TruncateTo(&v8, v4); /*0x5edd7a*/
    v6 = WideString::GetOrEmpty_Alt((wchar_t **)&v8); /*0x5edd83*/
    SendMessageA(a2, 0x4B2u, 0, (LPARAM)v6); /*0x5edd91*/
  }
  WideString::Assign((wchar_t **)&v9, MEMORY[0x831D9C]); /*0x5edda0*/
  WString::TrimRight((const wchar_t **)&v8, (const wchar_t **)&v9); /*0x5eddae*/
  DeleteAndZero::Alt(&v9); /*0x5eddb7*/
  WideString::AssignFromPtr(a1, (const wchar_t **)&v8); /*0x5eddc3*/
  DeleteAndZero::Alt(&v8); /*0x5eddcc*/
  return a1; /*0x5eddd3*/
}


// ==== 0x005EDDE0  EnablePlayerSlotControls  this=-  sig=csp ====
void __fastcall EnablePlayerSlotControls(HWND hDlg, bool a2)
{
  int v3; // esi
  int v4; // edi
  SessionClass *v5; // esi
  const wchar_t *v6; // ebx
  int ResourceID2CSF; // eax
  HWND DlgItem; // eax
  int ResourceIDCSF; // eax
  HWND v10; // eax
  int ResourceID3CSF; // eax
  HWND v12; // eax
  int ResourceID4CSF; // eax
  HWND v14; // eax

  if ( hDlg ) /*0x5edded*/
  {
    if ( MEMORY[0xA8DA84] ) /*0x5eddfa*/
    {
      v4 = 0; /*0x5ede06*/
      v5 = (SessionClass *)&MEMORY[0xA8DA90]; /*0x5ede08*/
      v6 = *(const wchar_t **)MEMORY[0xA8DA78]; /*0x5ede0d*/
      while ( !v5->GameMode[0] || _wcsicmp(v6, (const wchar_t *)v5->GameMode[0]) ) /*0x5ede21*/
      {
        v5 = (SessionClass *)((char *)v5 + 4); /*0x5ede23*/
        ++v4; /*0x5ede26*/
        if ( (int)v5 >= (int)&MEMORY[0xA8DAB0] ) /*0x5ede2d*/
        {
          v4 = -1; /*0x5ede2f*/
          break; /*0x5ede2f*/
        }
      }
      v3 = v4; /*0x5ede32*/
    }
    else
    {
      v3 = -1; /*0x5eddfc*/
    }
    if ( v3 != MEMORY[0x8316A4] ) /*0x5ede3a*/
    {
      ResourceID2CSF = GetResourceID2CSF((void *)v3); /*0x5ede42*/
      DlgItem = GetDlgItem(hDlg, ResourceID2CSF); /*0x5ede4f*/
      if ( DlgItem ) /*0x5ede59*/
        EnableWindow(DlgItem, a2); /*0x5ede67*/
      ResourceIDCSF = GetResourceIDCSF((void *)v3); /*0x5ede6b*/
      v10 = GetDlgItem(hDlg, ResourceIDCSF); /*0x5ede72*/
      if ( v10 ) /*0x5ede76*/
        EnableWindow(v10, a2); /*0x5ede84*/
      ResourceID3CSF = GetResourceID3CSF((void *)v3); /*0x5ede88*/
      v12 = GetDlgItem(hDlg, ResourceID3CSF); /*0x5ede8f*/
      if ( v12 ) /*0x5ede93*/
        EnableWindow(v12, a2); /*0x5edea1*/
      ResourceID4CSF = GetResourceID4CSF((void *)v3); /*0x5edea5*/
      v14 = GetDlgItem(hDlg, ResourceID4CSF); /*0x5edeac*/
      if ( v14 ) /*0x5edeb0*/
      {
        if ( a2 && MEMORY[0xA8B23C] && !*(_BYTE *)(MEMORY[0xA8B23C] + 60) ) /*0x5edec5*/
          EnableWindow(v14, 0); /*0x5edece*/
        else
          EnableWindow(v14, a2); /*0x5edede*/
      }
    }
  }
}


// ==== 0x005EDEF0  GetPlayerTypeString  this=-  sig=csp ====
char **__fastcall Player_GetTypeString(char **a1, wchar_t *a2)
{
  if ( a2 == (wchar_t *)MEMORY[0xAC119C] ) /*0x5edefa*/
  {
    String::Assign(a1, MEMORY[0x831704][0]); /*0x5edf02*/
    return a1; /*0x5edf07*/
  }
  else if ( a2 == (wchar_t *)MEMORY[0xAC11A0] ) /*0x5edf11*/
  {
    String::Assign(a1, MEMORY[0x831708][0]); /*0x5edf1c*/
    return a1; /*0x5edf21*/
  }
  else if ( a2 == MEMORY[0xAC11B0] ) /*0x5edf2b*/
  {
    String::Assign(a1, MEMORY[0x83170C][0]); /*0x5edf36*/
    return a1; /*0x5edf3b*/
  }
  else if ( a2 == (wchar_t *)MEMORY[0xAC11A4] ) /*0x5edf45*/
  {
    String::Assign(a1, MEMORY[0x831710][0]); /*0x5edf4f*/
    return a1; /*0x5edf54*/
  }
  else if ( a2 == (wchar_t *)MEMORY[0xAC11A8] ) /*0x5edf5e*/
  {
    String::Assign(a1, MEMORY[0x831714][0]); /*0x5edf69*/
    return a1; /*0x5edf6e*/
  }
  else if ( a2 == (wchar_t *)MEMORY[0xAC11AC] ) /*0x5edf78*/
  {
    String::Assign(a1, MEMORY[0x831718][0]); /*0x5edf83*/
    return a1; /*0x5edf88*/
  }
  else
  {
    if ( a2 == (wchar_t *)MEMORY[0xAC11B4] ) /*0x5edf92*/
      String::Assign(a1, MEMORY[0x83171C]); /*0x5edf9c*/
    else
      String::Assign(a1, MEMORY[0x83170C][0]); /*0x5edfae*/
    return a1; /*0x5edfa1*/
  }
}


// ==== 0x005EDFC0  NetworkLobby::DeleteAndZero  this=NetworkLobby  sig=csp ====
wchar_t *__thiscall sub_5EDFC0(const wchar_t **this)
{
  LPARAM v2; // esi
  LPARAM v4; // esi
  wchar_t *v5; // esi
  LPARAM v6; // esi
  LPARAM v7; // esi
  LPARAM v8; // esi
  LPARAM v9; // esi
  void *v10; // [esp+4h] [ebp-4h] BYREF

  if ( WideString::IsASCII(this) ) /*0x5edfc4*/
  {
    ToWideStringCharAlt((char **)&v10, this); /*0x5edfd7*/
    if ( String::Equals_Alt((const char **)&v10, MEMORY[0x831704][0]) ) /*0x5edfe6*/
    {
      v2 = MEMORY[0xAC119C]; /*0x5edfef*/
      DeleteAndZero(&v10); /*0x5edff9*/
      return (wchar_t *)v2; /*0x5ee002*/
    }
    if ( String::Equals_Alt((const char **)&v10, MEMORY[0x831708][0]) ) /*0x5ee00e*/
    {
      v4 = MEMORY[0xAC11A0]; /*0x5ee017*/
      DeleteAndZero(&v10); /*0x5ee021*/
      return (wchar_t *)v4; /*0x5ee02a*/
    }
    if ( String::Equals_Alt((const char **)&v10, MEMORY[0x83170C][0]) ) /*0x5ee036*/
    {
      v5 = MEMORY[0xAC11B0]; /*0x5ee03f*/
      DeleteAndZero(&v10); /*0x5ee049*/
      return v5; /*0x5ee052*/
    }
    if ( String::Equals_Alt((const char **)&v10, MEMORY[0x831710][0]) ) /*0x5ee05d*/
    {
      v6 = MEMORY[0xAC11A4]; /*0x5ee066*/
      DeleteAndZero(&v10); /*0x5ee070*/
      return (wchar_t *)v6; /*0x5ee079*/
    }
    if ( String::Equals_Alt((const char **)&v10, MEMORY[0x831714][0]) ) /*0x5ee085*/
    {
      v7 = MEMORY[0xAC11A8]; /*0x5ee08e*/
      DeleteAndZero(&v10); /*0x5ee098*/
      return (wchar_t *)v7; /*0x5ee0a1*/
    }
    if ( String::Equals_Alt((const char **)&v10, MEMORY[0x831718][0]) ) /*0x5ee0ad*/
    {
      v8 = MEMORY[0xAC11AC]; /*0x5ee0b6*/
      DeleteAndZero(&v10); /*0x5ee0c0*/
      return (wchar_t *)v8; /*0x5ee0c9*/
    }
    if ( String::Equals_Alt((const char **)&v10, MEMORY[0x83171C]) ) /*0x5ee0d4*/
    {
      v9 = MEMORY[0xAC11B4]; /*0x5ee0dd*/
      DeleteAndZero(&v10); /*0x5ee0e7*/
      return (wchar_t *)v9; /*0x5ee0f0*/
    }
    DeleteAndZero(&v10); /*0x5ee0f5*/
  }
  return 0; /*0x5ee000*/
}


// ==== 0x005EE100  ObjectClass::Network_Send  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_5EE100(const char **this)
{
  return String::Equals_Alt(this, MEMORY[0x831704][0]) /*0x5ee17e*/
      || String::Equals_Alt(this, MEMORY[0x831708][0])
      || String::Equals_Alt(this, MEMORY[0x83170C][0])
      || String::Equals_Alt(this, MEMORY[0x831710][0])
      || String::Equals_Alt(this, MEMORY[0x831714][0])
      || String::Equals_Alt(this, MEMORY[0x831718][0])
      || String::Equals_Alt(this, MEMORY[0x83171C]);
}


// ==== 0x005EE1B0  Config::SaveObserverMode  this=Config  sig=ida-proto ====
void Config_SaveObserverMode()
{
  int v0[9]; // [esp+0h] [ebp-24h] BYREF

  RawFileClass::Construct(v0, (int)MEMORY[0x826444]); /*0x5ee1bc*/
  INIClass::SetInt( /*0x5ee1d8*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x82642C],
    MEMORY[0x831DA4],
    MEMORY[0xAC10C8],
    0);
  INIClass::WriteDigest(&MEMORY[0x8870C0], (int)v0, 0); /*0x5ee1e9*/
  RawFileClass::Dtor(v0); /*0x5ee1f2*/
}


// ==== 0x005EE200  ObjectClass::UpdateObserveButtonWOL  this=ObjectClass  sig=csp ====
void __thiscall UpdateObserveButtonWOL(HWND hDlg)
{
  HWND DlgItem; // eax
  IUnknown *v3; // eax
  IUnknown *v4; // esi
  HWND v5; // eax
  IUnknown *v6; // esi
  wchar_t *StringCSF; // eax
  IUnknown *v8; // esi
  wchar_t *v9; // eax

  if ( hDlg ) /*0x5ee207*/
  {
    DlgItem = GetDlgItem(hDlg, 1888); /*0x5ee21a*/
    if ( DlgItem ) /*0x5ee21e*/
      SendMessageA(DlgItem, 0xF1u, MEMORY[0xAC10C8] != 0, 0); /*0x5ee236*/
    if ( MEMORY[0xAC10C8] ) /*0x5ee245*/
      v3 = (IUnknown *)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x831DDC], 0); /*0x5ee24c*/
    else
      v3 = (IUnknown *)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x831DD0], 0); /*0x5ee258*/
    v4 = v3; /*0x5ee25d*/
    v5 = GetDlgItem(hDlg, 1887); /*0x5ee265*/
    CacheDialogInvalidate(v5, (HWND)v4); /*0x5ee26b*/
    v6 = (IUnknown *)GetDlgItem(hDlg, 1741); /*0x5ee27e*/
    if ( v6 ) /*0x5ee282*/
    {
      if ( MEMORY[0xAC10C8] ) /*0x5ee28b*/
        StringCSF = GetStringCSF(g_Str_GUI_Observe, 0, MEMORY[0x8317D8], 6751); /*0x5ee29e*/
      else
        StringCSF = GetStringCSF(MEMORY[0x831DC4], 0, MEMORY[0x8317D8], 6753); /*0x5ee2b1*/
      SendMessageA((HWND)v6, 0x4B2u, 0, (LPARAM)StringCSF); /*0x5ee2bf*/
      InvalidateRect((HWND)v6, 0, 0); /*0x5ee2ca*/
    }
    v8 = (IUnknown *)GetDlgItem(hDlg, 1581); /*0x5ee2d4*/
    if ( v8 ) /*0x5ee2d9*/
    {
      if ( MEMORY[0xAC10C8] ) /*0x5ee2e2*/
      {
        v9 = GetStringCSF(g_Str_GUI_Observe, 0, MEMORY[0x8317D8], 6762); /*0x5ee2f5*/
      }
      else if ( (HWND)Dialog::FindByHandle((void *)0x113) == hDlg ) /*0x5ee303*/
      {
        v9 = GetStringCSF((wchar_t *)MEMORY[0x831DB4], 0, MEMORY[0x8317D8], 6766); /*0x5ee316*/
      }
      else
      {
        v9 = GetStringCSF(MEMORY[0x831DC4], 0, MEMORY[0x8317D8], 6768); /*0x5ee329*/
      }
      SendMessageA((HWND)v8, 0x4B2u, 0, (LPARAM)v9); /*0x5ee337*/
      InvalidateRect((HWND)v8, 0, 0); /*0x5ee342*/
    }
  }
}


// ==== 0x005EE350  Dialog::RefreshDialogsGame  this=Dialog  sig=csp ====
void __thiscall Dialog::RefreshDialogsGame(void *this)
{
  void *v1; // eax
  void *v2; // eax
  void *v3; // eax

  if ( this ) /*0x5ee352*/
    UpdateObserveButtonWOL(this); /*0x5ee354*/
  v1 = (void *)Dialog::FindByHandle((void *)0x116); /*0x5ee35e*/
  if ( v1 ) /*0x5ee365*/
    UpdateObserveButtonWOL(v1); /*0x5ee369*/
  v2 = (void *)Dialog::FindByHandle((void *)0x113); /*0x5ee373*/
  if ( v2 ) /*0x5ee37a*/
    UpdateObserveButtonWOL(v2); /*0x5ee37e*/
  v3 = (void *)Dialog::FindByHandle((void *)0xBB); /*0x5ee388*/
  if ( v3 ) /*0x5ee38f*/
    UpdateObserveButtonWOL(v3); /*0x5ee393*/
}


// ==== 0x005EE3A0  NetworkLobby::FillOptionCombo  this=NetworkLobby  sig=ida-proto ====
char NetworkLobby_FillOptionCombo()
{
  HWND ResourceID4; // eax
  void *v1; // ecx
  int *v2; // ebx
  int v3; // edi
  HWND v4; // esi
  char *v5; // eax
  char *v6; // eax
  char v8; // [esp+3h] [ebp-9h]
  HWND hDlg; // [esp+4h] [ebp-8h]
  int v10; // [esp+8h] [ebp-4h]

  v8 = 1; /*0x5ee3a8*/
  hDlg = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5ee3b4*/
  if ( hDlg /*0x5ee3ee*/
    || (hDlg = (HWND)Dialog::FindByHandle((void *)0xC9)) != 0
    || (hDlg = (HWND)Dialog::FindByHandle((void *)0xBC)) != 0
    || (ResourceID4 = (HWND)Dialog::FindByHandle((void *)0xBD), (hDlg = ResourceID4) != 0) )
  {
    if ( MEMORY[0xA8B23C] ) /*0x5ee3fb*/
      v8 = *(_BYTE *)(MEMORY[0xA8B23C] + 60); /*0x5ee400*/
    v1 = 0; /*0x5ee40c*/
    v10 = 0; /*0x5ee410*/
    v2 = MEMORY[0xA8B2FC]; /*0x5ee414*/
    do /*0x5ee419*/
    {
      v3 = v2[2533]; /*0x5ee419*/
      ResourceID4 = (HWND)GetResourceID4CSF(v1); /*0x5ee41f*/
      if ( (int)ResourceID4 < 0 ) /*0x5ee426*/
        goto LABEL_19; /*0x5ee426*/
      ResourceID4 = GetDlgItem(hDlg, (int)ResourceID4); /*0x5ee42e*/
      v4 = ResourceID4; /*0x5ee434*/
      if ( !ResourceID4 ) /*0x5ee438*/
        goto LABEL_19; /*0x5ee438*/
      if ( v3 /*0x5ee466*/
        && (v3 == MEMORY[0xAC11A4] || v3 == MEMORY[0xAC11A8] || v3 == MEMORY[0xAC11AC])
        && (v5 = CharToWideString(MEMORY[0xA8B380]), !wcscmp((const wchar_t *)v5, MEMORY[0xA8D610])) )
      {
        if ( !v8 ) /*0x5ee478*/
        {
          *v2 = -2; /*0x5ee47e*/
LABEL_18:
          LOBYTE(ResourceID4) = EnableWindow(v4, 0); /*0x5ee484*/
          goto LABEL_19; /*0x5ee487*/
        }
        LOBYTE(ResourceID4) = EnableWindow(v4, 1); /*0x5ee47c*/
      }
      else
      {
        if ( v3 == MEMORY[0xAC119C] || v3 == MEMORY[0xAC11A0] ) /*0x5ee4b7*/
          goto LABEL_18; /*0x5ee4b7*/
        if ( v10 == MEMORY[0xA8DA8C] ) /*0x5ee4c4*/
        {
          if ( !v8 ) /*0x5ee4cc*/
          {
            EnableWindow(v4, 0); /*0x5ee505*/
LABEL_27:
            v6 = CharToWideString(MEMORY[0xA8B380]); /*0x5ee4db*/
            ResourceID4 = (HWND)wcscmp((const wchar_t *)v6, MEMORY[0xA8D610]); /*0x5ee4eb*/
            if ( !ResourceID4 ) /*0x5ee4f5*/
              LOBYTE(ResourceID4) = SessionClass::SetOption2(v3, -2); /*0x5ee4fb*/
            goto LABEL_19; /*0x5ee500*/
          }
          EnableWindow(v4, 1); /*0x5ee4d1*/
        }
        LOBYTE(ResourceID4) = v8; /*0x5ee4d3*/
        if ( !v8 ) /*0x5ee4d9*/
          goto LABEL_27; /*0x5ee4d9*/
      }
LABEL_19:
      ++v2; /*0x5ee489*/
      v1 = (void *)++v10; /*0x5ee490*/
    }
    while ( (int)v2 < (int)&MEMORY[0xA8B31C] ); /*0x5ee419*/
  }
  return (char)ResourceID4; /*0x5ee4a5*/
}


// ==== 0x005EE510  RefreshLobbyPlayerSlots  this=-  sig=ida-proto ====
int __fastcall Lobby_RefreshPlayerSlots(unsigned int a1)
{
  HWND v2; // ebx
  int result; // eax
  _DWORD *i; // edi
  int v5; // ebp
  int ResourceID4; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char *v12; // [esp+8h] [ebp-8h]
  int v13; // [esp+Ch] [ebp-4h]

  v2 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5ee521*/
  if ( v2 /*0x5ee555*/
    || (v2 = (HWND)Dialog::FindByHandle((void *)0xC9)) != 0
    || (v2 = (HWND)Dialog::FindByHandle((void *)0xBC)) != 0
    || (result = Dialog::FindByHandle((void *)0xBD), (v2 = (HWND)result) != 0) )
  {
    result = MEMORY[0xA8B23C]; /*0x5ee55b*/
    if ( MEMORY[0xA8B23C] ) /*0x5ee562*/
    {
      result = 0; /*0x5ee568*/
      v13 = 8; /*0x5ee56d*/
      if ( a1 < 8 ) /*0x5ee575*/
      {
        result = a1; /*0x5ee57b*/
        v13 = a1 + 1; /*0x5ee57e*/
      }
      v12 = (char *)result; /*0x5ee586*/
      if ( result < v13 ) /*0x5ee58c*/
      {
        for ( i = (_DWORD *)(4 * result + 11055868); ; ++i ) /*0x5ee594*/
        {
          v5 = i[2533]; /*0x5ee59f*/
          ResourceID4 = GetResourceID4CSF(v12); /*0x5ee5a5*/
          v7 = ResourceID4; /*0x5ee5aa*/
          if ( ResourceID4 < 0 || !GetDlgItem(v2, ResourceID4) ) /*0x5ee5b6*/
            goto LABEL_24; /*0x5ee5be*/
          if ( v5 && (v5 == MEMORY[0xAC11A4] || v5 == MEMORY[0xAC11A8] || v5 == MEMORY[0xAC11AC]) ) /*0x5ee5de*/
            break; /*0x5ee5de*/
          if ( v5 == MEMORY[0xAC119C] || v5 == MEMORY[0xAC11B4] ) /*0x5ee608*/
          {
            *i = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 44))(MEMORY[0xA8B23C]); /*0x5ee667*/
            v8 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 44))(MEMORY[0xA8B23C]); /*0x5ee671*/
            goto LABEL_23; /*0x5ee671*/
          }
          v9 = *(_DWORD *)MEMORY[0xA8B23C]; /*0x5ee617*/
          if ( v5 == MEMORY[0xAC11A0] ) /*0x5ee619*/
          {
            *i = (*(int (**)(void))(v9 + 44))(); /*0x5ee61e*/
            v8 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 44))(MEMORY[0xA8B23C]); /*0x5ee628*/
            goto LABEL_23; /*0x5ee62b*/
          }
          *i = (*(int (**)(void))(v9 + 44))(); /*0x5ee630*/
          v10 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 44))(MEMORY[0xA8B23C]); /*0x5ee63a*/
          SetupLobbyPlayerSlots(v2, v7, v10); /*0x5ee642*/
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 44))(MEMORY[0xA8B23C]); /*0x5ee64f*/
          SessionClass::SetOption2(v5, v11); /*0x5ee655*/
LABEL_24:
          result = (int)(v12 + 1); /*0x5ee67e*/
          if ( (int)++v12 >= v13 ) /*0x5ee690*/
            return result; /*0x5ee690*/
        }
        *i = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 48))(MEMORY[0xA8B23C]); /*0x5ee5eb*/
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 48))(MEMORY[0xA8B23C]); /*0x5ee5f5*/
LABEL_23:
        SetupLobbyPlayerSlots(v2, v7, v8); /*0x5ee674*/
        goto LABEL_24; /*0x5ee679*/
      }
    }
  }
  return result; /*0x5ee698*/
}


// ==== 0x005EE6A0  NetworkLobby::UpdateLabels  this=SkirmishDialog  sig=csp ====
void __thiscall sub_5EE6A0(HWND hDlg)
{
  char *v2; // ebp
  int *v3; // edi
  int ResourceID3CSF; // esi
  LRESULT v5; // eax

  if ( hDlg ) /*0x5ee6a5*/
  {
    v2 = 0; /*0x5ee6aa*/
    v3 = &MEMORY[0xA8DA90]; /*0x5ee6ac*/
    do /*0x5ee6e4*/
    {
      ResourceID3CSF = GetResourceID3CSF(v2); /*0x5ee6b8*/
      FillComboBoxSides(hDlg, ResourceID3CSF); /*0x5ee6be*/
      v5 = SetComboBoxSelection(hDlg, ResourceID3CSF, -1); /*0x5ee6c9*/
      if ( *v3 ) /*0x5ee6ce*/
        SessionClass::SetOption(*v3, v5); /*0x5ee6d5*/
      ++v3; /*0x5ee6da*/
      ++v2; /*0x5ee6dd*/
    }
    while ( (int)v3 < (int)&MEMORY[0xA8DAB0] ); /*0x5ee6e4*/
  }
}


// ==== 0x005EE6F0  AssignRandomMapStartPositions  this=-  sig=csp ====
_DWORD *__fastcall AssignRandomMapStartPositions(MouseClass *aP0, IUnknown *aP1, int a3, int a4, char a5)
{
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // esi
  int v18; // eax
  double v19; // st7
  double v20; // st7
  int v21; // edi
  int v22; // eax
  int v23; // esi
  int v24; // eax
  double v25; // st7
  double v26; // st7
  int v28; // [esp+1Ch] [ebp-14h]
  int v29; // [esp+1Ch] [ebp-14h]
  int v30; // [esp+1Ch] [ebp-14h]
  int v31; // [esp+20h] [ebp-10h]
  int v32; // [esp+20h] [ebp-10h]
  int v33; // [esp+20h] [ebp-10h]
  MouseClass *v34; // [esp+24h] [ebp-Ch]
  int v35; // [esp+28h] [ebp-8h]
  int v36; // [esp+28h] [ebp-8h]
  int v37; // [esp+2Ch] [ebp-4h]
  int v38; // [esp+2Ch] [ebp-4h]

  v6 = *(_DWORD *)(a3 + 16); /*0x5ee705*/
  v7 = 0; /*0x5ee708*/
  v8 = 0; /*0x5ee70a*/
  v34 = aP0; /*0x5ee70c*/
  if ( v6 <= 0 ) /*0x5ee716*/
  {
    v9 = a4; /*0x5ee731*/
    goto LABEL_8; /*0x5ee731*/
  }
  do /*0x5ee725*/
  {
    v9 = a4; /*0x5ee718*/
    if ( *(_BYTE *)(v8 + a4) ) /*0x5ee71b*/
      ++v7; /*0x5ee721*/
    ++v8; /*0x5ee722*/
  }
  while ( v8 < v6 ); /*0x5ee725*/
  v31 = v7; /*0x5ee729*/
  if ( !v7 ) /*0x5ee72d*/
  {
LABEL_8:
    if ( a5 ) /*0x5ee739*/
    {
      v10 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)(v6 - 1)); /*0x5ee74e*/
      *(_BYTE *)(v10 + v9) = 1; /*0x5ee757*/
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4 * v10 + 4480) = aP1; /*0x5ee761*/
      aP0->field_0 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v10); /*0x5ee770*/
      return &aP0->field_0; /*0x5ee778*/
    }
    goto LABEL_17; /*0x5ee739*/
  }
  if ( v7 != 2 || a5 ) /*0x5ee785*/
  {
LABEL_17:
    v14 = -1; /*0x5ee7cf*/
    v29 = -1; /*0x5ee7d5*/
    v35 = -1; /*0x5ee7d9*/
    if ( v7 == 1 ) /*0x5ee7dd*/
    {
      v15 = 0; /*0x5ee7e3*/
      if ( v6 > 0 ) /*0x5ee7e7*/
      {
        do /*0x5ee888*/
        {
          if ( !*(_BYTE *)(v15 + v9) ) /*0x5ee7ed*/
          {
            v16 = 0; /*0x5ee7f7*/
            v17 = 0; /*0x5ee7f9*/
            v32 = 0; /*0x5ee7fd*/
            if ( v6 > 0 ) /*0x5ee801*/
            {
              do /*0x5ee865*/
              {
                if ( *(_BYTE *)(v17 + a4) ) /*0x5ee806*/
                {
                  v18 = *(_DWORD *)(a3 + 4); /*0x5ee80c*/
                  v19 = (double)(__int16)(*(_WORD *)(v18 + 4 * v15 + 2) - *(_WORD *)(v18 + 4 * v17 + 2)); /*0x5ee82e*/
                  v37 = (__int16)(*(_WORD *)(v18 + 4 * v15) - *(_WORD *)(v18 + 4 * v17)); /*0x5ee832*/
                  v20 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)v37 * (double)v37 + v19 * v19)); /*0x5ee84b*/
                  v32 += (__int16)Math::RoundToInt(v20); /*0x5ee85b*/
                }
                ++v17; /*0x5ee862*/
              }
              while ( v17 < *(_DWORD *)(a3 + 16) ); /*0x5ee865*/
              v16 = v32; /*0x5ee867*/
            }
            if ( v16 < v29 || v29 < 0 ) /*0x5ee875*/
            {
              v29 = v16; /*0x5ee877*/
              v35 = v15; /*0x5ee87b*/
            }
            v9 = a4; /*0x5ee87f*/
          }
          v6 = *(_DWORD *)(a3 + 16); /*0x5ee882*/
          ++v15; /*0x5ee885*/
        }
        while ( v15 < v6 ); /*0x5ee888*/
        v14 = v35; /*0x5ee88e*/
      }
      *(_BYTE *)(v14 + v9) = 1; /*0x5ee896*/
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4 * v14 + 4480) = aP1; /*0x5ee8a0*/
      v34->field_0 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v14); /*0x5ee8b1*/
      return &v34->field_0; /*0x5ee8ad*/
    }
    else
    {
      v21 = 0; /*0x5ee8e6*/
      v36 = -1; /*0x5ee8e8*/
      v30 = -1; /*0x5ee8ee*/
      if ( v6 > 0 ) /*0x5ee8f2*/
      {
        do /*0x5ee98d*/
        {
          if ( !*(_BYTE *)(v21 + v9) ) /*0x5ee8f8*/
          {
            v22 = 0; /*0x5ee902*/
            v23 = 0; /*0x5ee904*/
            v33 = 0; /*0x5ee908*/
            if ( v6 > 0 ) /*0x5ee90c*/
            {
              do /*0x5ee970*/
              {
                if ( *(_BYTE *)(v23 + a4) ) /*0x5ee911*/
                {
                  v24 = *(_DWORD *)(a3 + 4); /*0x5ee917*/
                  v25 = (double)(__int16)(*(_WORD *)(v24 + 4 * v21 + 2) - *(_WORD *)(v24 + 4 * v23 + 2)); /*0x5ee939*/
                  v38 = (__int16)(*(_WORD *)(v24 + 4 * v21) - *(_WORD *)(v24 + 4 * v23)); /*0x5ee93d*/
                  v26 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)v38 * (double)v38 + v25 * v25)); /*0x5ee956*/
                  v33 += (__int16)Math::RoundToInt(v26); /*0x5ee966*/
                }
                ++v23; /*0x5ee96d*/
              }
              while ( v23 < *(_DWORD *)(a3 + 16) ); /*0x5ee970*/
              v22 = v33; /*0x5ee972*/
            }
            if ( v22 > v36 ) /*0x5ee97a*/
            {
              v36 = v22; /*0x5ee97c*/
              v30 = v21; /*0x5ee980*/
            }
            v9 = a4; /*0x5ee984*/
          }
          v6 = *(_DWORD *)(a3 + 16); /*0x5ee987*/
          ++v21; /*0x5ee98a*/
        }
        while ( v21 < v6 ); /*0x5ee98d*/
        v14 = v30; /*0x5ee993*/
      }
      *(_BYTE *)(v14 + v9) = 1; /*0x5ee99b*/
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4 * v14 + 4480) = aP1; /*0x5ee9a7*/
      v34->field_0 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v14); /*0x5ee9b9*/
      return &v34->field_0; /*0x5ee9b5*/
    }
  }
  v12 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)(v6 - 3)); /*0x5ee798*/
  v6 = *(_DWORD *)(a3 + 16); /*0x5ee79d*/
  v13 = 0; /*0x5ee7a0*/
  v28 = 0; /*0x5ee7a4*/
  if ( v6 <= 0 ) /*0x5ee7a8*/
  {
LABEL_16:
    v7 = v31; /*0x5ee7cb*/
    goto LABEL_17; /*0x5ee7cb*/
  }
  while ( *(_BYTE *)(v13 + a4) || ++v28 != v12 + 1 ) /*0x5ee7aa*/
  {
    if ( ++v13 >= v6 ) /*0x5ee7c9*/
      goto LABEL_16; /*0x5ee7c9*/
  }
  *(_BYTE *)(v13 + a4) = 1; /*0x5ee8c0*/
  *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4 * v13 + 4480) = aP1; /*0x5ee8ca*/
  aP0->field_0 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v13); /*0x5ee8db*/
  return &aP0->field_0; /*0x5ee772*/
}


// ==== 0x005EE9D0  HouseClass::FindStartPositions  this=HouseClass  sig=csp ====
void sub_5EE9D0()
{
  int v0; // eax
  _DWORD *v1; // ecx
  int v2; // eax
  int i; // edi
  int v4; // esi
  char v5; // bl
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // ecx
  int *started; // eax
  int v10; // edi
  int v11; // esi
  int *v12; // eax
  int v13; // [esp+0h] [ebp-34h] BYREF
  int v14; // [esp+4h] [ebp-30h] BYREF
  int v15; // [esp+8h] [ebp-2Ch] BYREF
  _BYTE v16[16]; // [esp+Ch] [ebp-28h] BYREF
  void **v17; // [esp+1Ch] [ebp-18h] BYREF
  void *Block; // [esp+20h] [ebp-14h]
  char v19; // [esp+29h] [ebp-Bh]

  Multiplayer::FindStartPositions(&v17); /*0x5ee9d9*/
  v0 = 0; /*0x5ee9e4*/
  v1 = (char *)MEMORY[0xA8B230] + 4480; /*0x5ee9e6*/
  do /*0x5eea04*/
    v16[v0++] = *v1++ != -1; /*0x5ee9f1*/
  while ( v0 < 16 ); /*0x5eea04*/
  v2 = HouseClass_Count; /*0x5eea06*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x5eea11*/
  {
    v4 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * i]; /*0x5eea1f*/
    if ( !*(_BYTE *)(*(_DWORD *)(v4 + 52) + 422) && *(_BYTE *)(v4 + 492) ) /*0x5eea33*/
    {
      v5 = 0; /*0x5eea47*/
      v6 = -1; /*0x5eea49*/
      v7 = 0; /*0x5eea4c*/
      v8 = (char *)MEMORY[0xA8B230] + 4480; /*0x5eea4e*/
      do /*0x5eea63*/
      {
        if ( *v8 == i ) /*0x5eea56*/
        {
          v5 = 1; /*0x5eea58*/
          v6 = v7; /*0x5eea5a*/
        }
        ++v7; /*0x5eea5c*/
        ++v8; /*0x5eea5d*/
      }
      while ( v7 < 16 ); /*0x5eea63*/
      if ( v5 ) /*0x5eea67*/
      {
        HouseClass::SetMapSeed((_DWORD *)v4, *((_DWORD *)Block + v6)); /*0x5eead6*/
      }
      else
      {
        Debug::Log(); /*0x5eea73*/
        started = AssignRandomMapStartPositions(&v13, i, (int)&v17, (int)v16, 1); /*0x5eea8d*/
        HouseClass::SetMapSeed((_DWORD *)v4, *started); /*0x5eea97*/
        HouseClass::GetCurrentOption((_DWORD *)v4, &v14); /*0x5eeaa3*/
        HouseClass::GetCurrentOption((_DWORD *)v4, &v15); /*0x5eeab4*/
        Debug::Log(); /*0x5eeac2*/
      }
    }
    v2 = HouseClass_Count; /*0x5eeadb*/
  }
  v10 = 0; /*0x5eeaeb*/
  if ( v2 > 0 ) /*0x5eeaef*/
  {
    do /*0x5eeb7e*/
    {
      v11 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v10]; /*0x5eeafb*/
      if ( !*(_BYTE *)(*(_DWORD *)(v11 + 52) + 422) && !*(_BYTE *)(v11 + 492) ) /*0x5eeb0b*/
      {
        Debug::Log(); /*0x5eeb1f*/
        v12 = AssignRandomMapStartPositions(&v15, v10, (int)&v17, (int)v16, 0); /*0x5eeb39*/
        HouseClass::SetMapSeed((_DWORD *)v11, *v12); /*0x5eeb43*/
        HouseClass::GetCurrentOption((_DWORD *)v11, &v14); /*0x5eeb4f*/
        HouseClass::GetCurrentOption((_DWORD *)v11, &v13); /*0x5eeb60*/
        Debug::Log(); /*0x5eeb6e*/
      }
      ++v10; /*0x5eeb7b*/
    }
    while ( v10 < HouseClass_Count ); /*0x5eeb7e*/
  }
  v17 = &vt_VectorClass_Cell; /*0x5eeb8b*/
  if ( Block ) /*0x5eeb94*/
  {
    if ( v19 ) /*0x5eeb9c*/
      __3_YAXPAX_Z(Block); /*0x5eeb9f*/
  }
}


// ==== 0x005EEBB0  _DynamicVectorClass_PBVMultiMission::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_cptr_MultiMission::sub_5EEBB0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5eebb6*/
  *(_DWORD *)(this + 16) = 0; /*0x5eebb9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5eebc0*/
  {
    __3_YAXPAX_Z(v2); /*0x5eebc6*/
    *(_DWORD *)(this + 4) = 0; /*0x5eebce*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5eebd1*/
  *(_DWORD *)(this + 8) = 0; /*0x5eebd4*/
}


// ==== 0x005EEBE0  _DynamicVectorClass_PBVMultiMission::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_cptr_MultiMission::sub_5EEBE0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5eebe0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5eebf5*/
  else
    return 0; /*0x5eebe7*/
}


// ==== 0x005EEC00  _VectorClass_PBVMultiMission::Capacity  this=VectorClass  sig=csp ====
int __thiscall VectorClass_cptr_MultiMission::Capacity(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5eec0a*/
}


// ==== 0x005EEC10  _VectorClass_PBVMultiMission::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_cptr_MultiMission::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x5eec12*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5eec1d*/
  {
    v3 = 0; /*0x5eec1f*/
    if ( v2 <= 0 ) /*0x5eec23*/
      return 1; /*0x5eec43*/
    v4 = (_DWORD *)this->Items; /*0x5eec25*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5eec2b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5eec34*/
    {
      ++v3; /*0x5eec36*/
      ++v4; /*0x5eec37*/
      if ( v3 >= v2 ) /*0x5eec3c*/
        return 1; /*0x5eec3c*/
    }
  }
  return 0; /*0x5eec3e*/
}


// ==== 0x005EEC50  _VectorClass_PBVMultiMission::SetAt  this=VectorClass  sig=csp ====
char __thiscall VectorClass_cptr_MultiMission::SetAt(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5eec5c*/
  {
    this->IsInitialized = 0; /*0x5eec66*/
    if ( a3 ) /*0x5eec6c*/
      v4 = a3; /*0x5eec82*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5eec7e*/
    this->IsInitialized = 1; /*0x5eec86*/
    if ( v4 ) /*0x5eec8a*/
    {
      if ( this->Items ) /*0x5eec95*/
      {
        v6 = this->Capacity; /*0x5eec9c*/
        if ( a2 < v6 ) /*0x5eeca1*/
          v6 = a2; /*0x5eeca3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5eeca9*/
          ++i; /*0x5eecae*/
        if ( this->IsAllocated ) /*0x5eecbb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5eecc6*/
          this->Items = 0; /*0x5eecce*/
        }
      }
      this->Items = v4; /*0x5eecd7*/
      this->Capacity = a2; /*0x5eecdf*/
      this->IsAllocated = a3 == 0; /*0x5eece2*/
      return 1; /*0x5eece8*/
    }
    else
    {
      return 0; /*0x5eec8f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5eecf2*/
    return 1; /*0x5eecf8*/
  }
}


// ==== 0x005EED00  ?$VectorClass@PBVMultiMission@@::Cleanup3  this=VectorClass  sig=csp ====
void __thiscall VectorClass_Cleanup3(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5eed0d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5eed13*/
    *(_DWORD *)(this + 4) = 0; /*0x5eed1b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5eed1e*/
  *(_DWORD *)(this + 8) = 0; /*0x5eed21*/
}


// ==== 0x005EED30  _VectorClass_PBVMultiMission::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_cptr_MultiMission::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5eed30*/
    return 0; /*0x5eed38*/
  v3 = *(_DWORD *)(this + 8); /*0x5eed3e*/
  result = 0; /*0x5eed41*/
  if ( v3 <= 0 ) /*0x5eed45*/
    return -1; /*0x5eed5c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5eed4b*/
  {
    if ( ++result >= v3 ) /*0x5eed5a*/
      return -1; /*0x5eed5a*/
  }
  return result; /*0x5eed3a*/
}


// ==== 0x005EED70  _VectorClass_PBVMultiMission::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_cptr_MultiMission::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5eed70*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5eed85*/
  else
    return 0; /*0x5eed77*/
}


// ==== 0x005EED90  _DynamicVectorClass_PBVMultiMission::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_cptr_MultiMission::sub_5EED90(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5eed9c*/
  {
    this->IsInitialized = 0; /*0x5eeda2*/
    if ( a3 ) /*0x5eeda8*/
      v4 = a3; /*0x5eedbe*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5eedba*/
    this->IsInitialized = 1; /*0x5eedc2*/
    if ( !v4 ) /*0x5eedc6*/
      return 0; /*0x5eee3a*/
    if ( this->Items ) /*0x5eedc8*/
    {
      v5 = this->q008; /*0x5eedcf*/
      if ( a2 < v5 ) /*0x5eedd4*/
        v5 = a2; /*0x5eedd6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5eeddc*/
        ++i; /*0x5eede1*/
      if ( this->IsAllocated ) /*0x5eedee*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5eedf9*/
        this->Items = 0; /*0x5eee01*/
      }
    }
    this->Items = v4; /*0x5eee0a*/
    this->q008 = a2; /*0x5eee12*/
    this->IsAllocated = a3 == 0; /*0x5eee15*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5eee1e*/
  }
  v7 = this->q008; /*0x5eee21*/
  if ( v7 < this->Items ) /*0x5eee29*/
    this->Items = v7; /*0x5eee2b*/
  return 1; /*0x5eee2e*/
}


// ==== 0x005EEE40  SkirmishVector::PushBack  this=SkirmishVector  sig=csp ====
char __thiscall SkirmishVector::PushBack(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->q002; /*0x5eee43*/
  if ( this->q004 >= v3 ) /*0x5eee4b*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x5eee56*/
      return 0; /*0x5eee56*/
    v4 = this->q005; /*0x5eee58*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x5eee68*/
      return 0; /*0x5eee6f*/
  }
  v6 = this->q004; /*0x5eee75*/
  v7 = this->q004; /*0x5eee78*/
  this->q004 = v6 + 1; /*0x5eee7e*/
  *(_DWORD *)(v7 + 4 * v6) = *a2; /*0x5eee88*/
  return 1; /*0x5eee71*/
}


// ==== 0x005EEE90  _DynamicVectorClass_PBVMultiMission::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_cptr_MultiMission::sub_5EEE90(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5eee90*/
  result = 0; /*0x5eee93*/
  if ( v2 <= 0 ) /*0x5eee98*/
    return -1; /*0x5eeeaf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x5eee9e*/
  {
    if ( ++result >= v2 ) /*0x5eeead*/
      return -1; /*0x5eeead*/
  }
  return result; /*0x5eeeb2*/
}


// ==== 0x005EEEC0  _VectorClass_PBVMultiMission::GetAt  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_cptr_MultiMission::GetAt(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5eeec3*/
  *Block = &vt_VectorClass_MultiMission_const; /*0x5eeec6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5eeed0*/
  {
    __3_YAXPAX_Z(v3); /*0x5eeed8*/
    *(Block + 1) = 0; /*0x5eeee0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5eeeeb*/
  *(Block + 2) = 0; /*0x5eeef1*/
  if ( (a2 & 1) != 0 ) /*0x5eeef8*/
    __3_YAXPAX_Z(Block); /*0x5eeefb*/
  return (VectorClass *)Block; /*0x5eef05*/
}


// ==== 0x005EEF10  _DynamicVectorClass_PBVMultiMission::Constructor  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_cptr_MultiMission::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5eef13*/
  *Block = &vt_VectorClass_MultiMission_const; /*0x5eef16*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5eef20*/
  {
    __3_YAXPAX_Z(v3); /*0x5eef28*/
    *(Block + 1) = 0; /*0x5eef30*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5eef3b*/
  *(Block + 2) = 0; /*0x5eef41*/
  if ( (a2 & 1) != 0 ) /*0x5eef48*/
    __3_YAXPAX_Z(Block); /*0x5eef4b*/
  return (DynamicVector *)Block; /*0x5eef55*/
}


// ==== 0x005EEF60  ObjectClass::String_Process  this=ObjectClass  sig=csp ====
void __thiscall sub_5EEF60(_DWORD *this)
{
  unsigned int v2; // esi
  int *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  v2 = this->vtable3; /*0x5eef65*/
  if ( v2 > this->nextObject && this->customSound_controller != 1 ) /*0x5eef77*/
  {
    v3 = (int *)*this; /*0x5eef80*/
    v4 = this->vtable4; /*0x5eef83*/
    v13 = (int *)*this; /*0x5eef86*/
    this->vtable3 = v2 >> 1; /*0x5eef8c*/
    this->vtable4 = v4 - 1; /*0x5eef94*/
    v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x5eef9f*/
    v6 = 4 * this->vtable3; /*0x5eefa4*/
    *this = v5; /*0x5eefab*/
    memset(v5, 0, v6); /*0x5eefb0*/
    if ( (int)v2 > 0 ) /*0x5eefbb*/
    {
      v7 = v3; /*0x5eefbd*/
      v8 = v2; /*0x5eefbf*/
      do /*0x5eeff3*/
      {
        v9 = *v7; /*0x5eefc1*/
        if ( *v7 ) /*0x5eefc1*/
        {
          do /*0x5eefed*/
          {
            v10 = ((int (__thiscall *)(int))this->nextArrayIndex)(v9) & ((1 << this->vtable4) - 1); /*0x5eefd7*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x5eefdb*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x5eefe1*/
            v12 = *(_DWORD *)(v9 + 8); /*0x5eefe3*/
            *(_DWORD *)(v9 + 8) = v11; /*0x5eefe6*/
            v9 = v12; /*0x5eefe9*/
          }
          while ( v12 ); /*0x5eefed*/
        }
        ++v7; /*0x5eefef*/
        --v8; /*0x5eeff2*/
      }
      while ( v8 ); /*0x5eeff3*/
      v3 = v13; /*0x5eeff5*/
    }
    __3_YAXPAX_Z(v3); /*0x5eeffa*/
  }
}


// ==== 0x005EF010  ObjectClass::Map_Helper_5EF010  this=TechnoTypeClass  sig=csp ====
void __thiscall sub_5EF010(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // [esp+4h] [ebp-4h]

  if ( this->SlowdownDistance != 1 ) /*0x5ef018*/
  {
    v2 = this->vtable3; /*0x5ef020*/
    v3 = (_DWORD *)*this; /*0x5ef023*/
    v4 = this->vtable4 + 1; /*0x5ef02c*/
    this->vtable3 = 2 * v2; /*0x5ef02d*/
    v13 = v3; /*0x5ef030*/
    this->vtable4 = v4; /*0x5ef038*/
    v5 = __2_YAPAXI_Z(8 * v2); /*0x5ef043*/
    v6 = 4 * this->vtable3; /*0x5ef048*/
    *this = v5; /*0x5ef04f*/
    memset(v5, 0, v6); /*0x5ef054*/
    if ( v2 > 0 ) /*0x5ef05f*/
    {
      v7 = v3; /*0x5ef061*/
      v8 = v2; /*0x5ef063*/
      do /*0x5ef097*/
      {
        v9 = *v7; /*0x5ef065*/
        if ( *v7 ) /*0x5ef065*/
        {
          do /*0x5ef091*/
          {
            v10 = ((int (__thiscall *)(int))this->nextArrayIndex)(v9) & ((1 << this->vtable4) - 1); /*0x5ef07b*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x5ef07f*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x5ef085*/
            v12 = *(_DWORD *)(v9 + 8); /*0x5ef087*/
            *(_DWORD *)(v9 + 8) = v11; /*0x5ef08a*/
            v9 = v12; /*0x5ef08d*/
          }
          while ( v12 ); /*0x5ef091*/
        }
        ++v7; /*0x5ef093*/
        --v8; /*0x5ef096*/
      }
      while ( v8 ); /*0x5ef097*/
      v3 = v13; /*0x5ef099*/
    }
    __3_YAXPAX_Z(v3); /*0x5ef09e*/
  }
}


// ==== 0x005EF0B0  MultiMissionVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall MultiMissionVector::Constructor(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x5ef0bb*/
  this->Capacity = a2; /*0x5ef0be*/
  this->q030 = 1; /*0x5ef0c1*/
  this->q034 = 0; /*0x5ef0c5*/
  *this = &vt_VectorClass_MultiMission_const; /*0x5ef0c8*/
  if ( a2 ) /*0x5ef0ce*/
  {
    if ( a3 ) /*0x5ef0d6*/
    {
      this->Items = a3; /*0x5ef0d8*/
      return this; /*0x5ef0de*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x5ef0ed*/
    this->q034 = 1; /*0x5ef0f0*/
  }
  return this; /*0x5ef0dd*/
}


// ==== 0x005EF100  NullModemClass::initConnection  this=NullModemConnClass  sig=csp ====
_DWORD *__thiscall NullModemClass::initConnection(
        NullModemConnClass *this,
        int aP1,
        NullModemConnClass *aP2,
        int aP3,
        NullModemConnClass *aP4)
{
  int v6; // ecx

  IPXConnClass::initConnection( /*0x5ef124*/
    this,
    (IPXConnClass *)aP1,
    (int)aP2,
    (ConnectionClass *)aP3,
    (IPXConnClass *)aP4,
    60,
    -1,
    (TechnoTypeClass *)0x4B0,
    0);
  v6 = *(_DWORD *)&this->__pad_0[28]; /*0x5ef129*/
  *(_DWORD *)this->__pad_0 = &vt_NullModemConnClass; /*0x5ef12c*/
  *(_DWORD *)&this->__pad_0[76] = -1; /*0x5ef135*/
  this->field_50 = __2_YAPAXI_Z(v6 + 11); /*0x5ef145*/
  return this->__pad_0; /*0x5ef14a*/
}


// ==== 0x005EF170  NullModemClass::closeConnection  this=TechnoTypeClass  sig=csp ====
int __thiscall NullModemClass::closeConnection(_DWORD *this, WinModemClass *aP1)
{
  Struct::ZeroInitAndSetup(this); /*0x5ef173*/
  this->u32_4C = aP1; /*0x5ef17c*/
  return (int)aP1->__pad_0; /*0x5ef17f*/
}


// ==== 0x005EF190  NullModemConnClass::j_vt09  this=NullModemConnClass  sig=csp ====
int __thiscall VectorClass_cptr_MultiMission::j_vt09(
        NullModemConnClass *this,
        unsigned __int8 *a1,
        signed int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  _WORD *v8; // eax
  signed int v9; // edi
  unsigned int *v10; // eax
  unsigned int v11; // esi
  int v12; // eax

  if ( *(_DWORD *)&this->__pad_0[76] == -1 ) /*0x5ef197*/
    return 0; /*0x5ef199*/
  v8 = (_WORD *)this->field_50; /*0x5ef19f*/
  *v8 = -9539; /*0x5ef1af*/
  v8[1] = a3; /*0x5ef1b4*/
  v8[2] = -8529; /*0x5ef1b8*/
  qmemcpy((void *)(this->field_50 + 6), a1, a3); /*0x5ef1cb*/
  v9 = 0; /*0x5ef1dc*/
  v10 = (unsigned int *)(this->field_50 + a3 + 6); /*0x5ef1de*/
  v11 = 0; /*0x5ef1e0*/
  if ( a3 > 0 ) /*0x5ef1ec*/
  {
    do /*0x5ef200*/
    {
      v12 = a1[v9++] + (v11 >> 31); /*0x5ef1f8*/
      v11 = v12 + 2 * v11; /*0x5ef1fd*/
    }
    while ( v9 < a3 ); /*0x5ef200*/
    v10 = (unsigned int *)(this->field_50 + a3 + 6); /*0x5ef206*/
  }
  *v10 = v11; /*0x5ef20a*/
  *(_BYTE *)(a3 + 10 + this->field_50) = 13; /*0x5ef212*/
  WinModemClass::WriteSerial((int)g_ClipboardBuffer, (LPCVOID)this->field_50, (WinModemClass *)(a3 + 11)); /*0x5ef222*/
  return 1; /*0x5ef19b*/
}


// ==== 0x005EF240  Audio_Read  this=-  sig=ida-proto ====
unsigned int __fastcall sub_5EF240(int a1, int a2)
{
  unsigned int result; // eax
  int i; // edi
  int v4; // esi

  result = 0; /*0x5ef242*/
  for ( i = 0; i < a2; result = v4 + 2 * result ) /*0x5ef24a*/
  {
    v4 = *(unsigned __int8 *)(i + a1) + (result >> 31); /*0x5ef257*/
    ++i; /*0x5ef259*/
  }
  return result; /*0x5ef262*/
}


// ==== 0x005EF270  sub_5EF270  this=-  sig=ida-proto ====
int sub_5EF270()
{
  return 24; /*0x5ef275*/
}


// ==== 0x005EF280  NullModemConnClass::ZeroInitAndSetup_0_0  this=NullModemConnClass  sig=csp ====
// attributes: thunk
int __thiscall Struct::ZeroInitAndSetup_0_0(NullModemConnClass *this)
{
  return Struct::ZeroInitAndSetup(this);
}


// ==== 0x005EF290  NullModemConnClass::j_vt00  this=NullModemConnClass  sig=csp ====
_DWORD *__thiscall VectorClass_cptr_MultiMission::j_vt00(NullModemConnClass *this, char a2)
{
  IPXConnClass *v3; // eax

  v3 = (IPXConnClass *)this->field_50; /*0x5ef293*/
  *(_DWORD *)this->__pad_0 = &vt_NullModemConnClass; /*0x5ef296*/
  __3_YAXPAX_Z(v3); /*0x5ef29d*/
  ConnectionClass::dtor(this); /*0x5ef2a7*/
  if ( (a2 & 1) != 0 ) /*0x5ef2b1*/
    __3_YAXPAX_Z(this); /*0x5ef2b4*/
  return this->__pad_0; /*0x5ef2be*/
}


// ==== 0x005EF2D0  sub_5EF2D0  this=-  sig=ida-proto ====
int sub_5EF2D0()
{
  MEMORY[0xAC11D8] = 0; /*0x5ef2d2*/
  MEMORY[0xAC11DC] = 0; /*0x5ef2d7*/
  MEMORY[0xAC11E0] = 0; /*0x5ef2dc*/
  MEMORY[0xAC11E4] = 0; /*0x5ef2e1*/
  return 0; /*0x5ef2e6*/
}


// ==== 0x005EF2F0  sub_5EF2F0  this=-  sig=ida-proto ====
void sub_5EF2F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5ef2fc*/
  MEMORY[0xAC1210] = Math::Sqrt(v0 + v0); /*0x5ef30e*/
}


// ==== 0x005EF320  sub_5EF320  this=-  sig=ida-proto ====
void sub_5EF320()
{
  MEMORY[0xAC1260] = MEMORY[0xAC1210] / 60.0; /*0x5ef32c*/
}


// ==== 0x005EF340  sub_5EF340  this=-  sig=ida-proto ====
void sub_5EF340()
{
  MEMORY[0xAC1248] = 1.0 / MEMORY[0xAC1260]; /*0x5ef34c*/
}


// ==== 0x005EF360  sub_5EF360  this=-  sig=ida-proto ====
void sub_5EF360()
{
  MEMORY[0xAC1240] = 0.0174532925199433 * 45.0; /*0x5ef36c*/
}


// ==== 0x005EF380  sub_5EF380  this=-  sig=ida-proto ====
void sub_5EF380()
{
  MEMORY[0xAC1218] = 0.0174532925199433 * 60.0; /*0x5ef38c*/
}


// ==== 0x005EF3A0  sub_5EF3A0  this=-  sig=ida-proto ====
void sub_5EF3A0()
{
  MEMORY[0xAC11D0] = 0.0174532925199433 * 90.0; /*0x5ef3ac*/
}


// ==== 0x005EF3C0  sub_5EF3C0  this=-  sig=ida-proto ====
__int64 sub_5EF3C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC11D0] - MEMORY[0xAC1218]); /*0x5ef3d2*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC1210] * 0.5); /*0x5ef3e6*/
  MEMORY[0xAC1268] = result; /*0x5ef3eb*/
  return result; /*0x5ef3f0*/
}


// ==== 0x005EF400  sub_5EF400  this=-  sig=ida-proto ====
void sub_5EF400()
{
  MEMORY[0xAC1220] = Math::ArcTan((double)MEMORY[0xAC1268] * 0.00390625); /*0x5ef417*/
}


// ==== 0x005EF430  sub_5EF430  this=-  sig=ida-proto ====
void sub_5EF430()
{
  MEMORY[0xAC1238] = Math::ArcTan((double)(2 * MEMORY[0xAC1268]) / MEMORY[0xAC1210]); /*0x5ef452*/
}


// ==== 0x005EF460  sub_5EF460  this=-  sig=ida-proto ====
__int64 sub_5EF460()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC1268]) + 0.5); /*0x5ef47b*/
  MEMORY[0xAC125C] = result; /*0x5ef480*/
  return result; /*0x5ef486*/
}


// ==== 0x005EF490  sub_5EF490  this=-  sig=ida-proto ====
int sub_5EF490()
{
  MEMORY[0xAC120C] = 0; /*0x5ef492*/
  MEMORY[0xAC120E] = 0; /*0x5ef498*/
  return 0; /*0x5ef49e*/
}


// ==== 0x005EF4A0  sub_5EF4A0  this=-  sig=ida-proto ====
int sub_5EF4A0()
{
  MEMORY[0xAC1228] = 0; /*0x5ef4a2*/
  MEMORY[0xAC122C] = 0; /*0x5ef4a7*/
  MEMORY[0xAC1230] = 0; /*0x5ef4ac*/
  return 0; /*0x5ef4b1*/
}


// ==== 0x005EF4C0  sub_5EF4C0  this=-  sig=ida-proto ====
int sub_5EF4C0()
{
  MEMORY[0xAC1258] = 0; /*0x5ef4c5*/
  MEMORY[0xAC1250] = 128; /*0x5ef4cf*/
  MEMORY[0xAC1254] = 128; /*0x5ef4d4*/
  return 128; /*0x5ef4d9*/
}


// ==== 0x005EF4E0  Network::ModemConnectionDialog  this=Network  sig=csp ====
ObjectClass *__usercall Network::ModemConnectionDialog@<eax>(_DWORD *a1@<ebp>, int a2@<edi>)
{
  ObjectClass *v0; // ebx
  int v3; // eax
  LONG v4; // eax
  void (__stdcall *v5)(HWND); // esi
  void (__stdcall *v6)(HWND, int); // ebp
  int v7; // edi
  char *v8; // ebp
  _DWORD *v9; // eax
  int v10; // eax
  const char *v11; // esi
  unsigned int v12; // edx
  char *v13; // edi
  char *v14; // edi
  const char *v15; // esi
  char v16; // cl
  wchar_t *v17; // eax
  _DWORD *v18; // eax
  int v19; // edx
  wchar_t *v20; // eax
  int v21; // ebp
  void *Member23; // eax
  int CampaignScore_field_0x20; // edx
  CampaignScore *v24; // ecx
  CampaignScore *v25; // esi
  DWORD Ticks; // eax
  int v27; // eax
  CampaignScore *v28; // esi
  void *v29; // eax
  void *v30; // eax
  int v31; // edi
  int v32; // esi
  int v33; // edi
  int v34; // esi
  int Elapsed; // esi
  wchar_t *v36; // esi
  wchar_t *v37; // eax
  HWND MessageBox; // eax
  ObjectClass *v39; // edi
  int v40; // esi
  int v41; // esi
  wchar_t *v42; // eax
  wchar_t *v43; // eax
  wchar_t *StringCSF; // [esp-18h] [ebp-8B8h]
  wchar_t *v46; // [esp-18h] [ebp-8B8h]
  wchar_t *v47; // [esp-18h] [ebp-8B8h]
  wchar_t *v48; // [esp-18h] [ebp-8B8h]
  int v49; // [esp-8h] [ebp-8A8h]
  _DWORD *v50; // [esp-4h] [ebp-8A4h]
  int v51; // [esp+8h] [ebp-898h]
  LONG dwNewLong; // [esp+Ch] [ebp-894h] BYREF
  HWND hWnd; // [esp+10h] [ebp-890h]
  CampaignScore aP2; // [esp+14h] [ebp-88Ch] BYREF
  int v55; // [esp+38h] [ebp-868h]
  int v56; // [esp+3Ch] [ebp-864h]
  CampaignScore aP1; // [esp+40h] [ebp-860h] BYREF
  int v58; // [esp+D2h] [ebp-7CEh]
  CellStruct v59; // [esp+13Ch] [ebp-764h] BYREF
  char v60; // [esp+43Ch] [ebp-464h] BYREF

  dwNewLong = -1; /*0x5ef4f7*/
  v51 = -1; /*0x5ef4fb*/
  v0 = (ObjectClass *)CreateDialog(0xECu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_5EFF00, 0); /*0x5ef504*/
  hWnd = (HWND)v0; /*0x5ef508*/
  if ( !v0 ) /*0x5ef50c*/
    return 0; /*0x5efed7*/
  SetWindowLongA((HWND)v0, 8, (LONG)&dwNewLong); /*0x5ef51a*/
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 128))(*(_DWORD *)&stru_87C374.__pad_579C[22524]); /*0x5ef528*/
  UI_Connect((HWND)v0, -1, (v3 - 400) / 2 + 147); /*0x5ef542*/
  Dialog::Show((HWND)v0); /*0x5ef549*/
  if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[18444] /*0x5ef571*/
    || *(_DWORD *)&HouseClass_Player.__pad_5568[18448] == -1
    || *(_DWORD *)&HouseClass_Player.__pad_5568[18452] == -1
    || Modem::OpenPort(&HouseClass_Player.__pad_5568[22460], (Modem *)&HouseClass_Player.__pad_5568[18444]) )
  {
    v4 = 1618; /*0x5ef57a*/
    dwNewLong = 1618; /*0x5ef57f*/
  }
  else
  {
    v4 = dwNewLong; /*0x5ef585*/
  }
  v5 = (void (__stdcall *)(HWND))UpdateWindow; /*0x5ef589*/
  v50 = a1; /*0x5ef58f*/
  v6 = (void (__stdcall *)(HWND, int))ShowWindow; /*0x5ef590*/
  v49 = a2; /*0x5ef596*/
  v7 = 0; /*0x5ef597*/
  while ( 2 ) /*0x5ef5af*/
  {
    if ( v4 < 0 ) /*0x5ef5af*/
    {
      while ( Dialog::PumpMessages() != 1 ) /*0x5ef5b8*/
      {
        ScreenSaver::Process(0, (int)v0, (int)v6); /*0x5ef5bc*/
        v4 = dwNewLong; /*0x5ef5c1*/
        if ( dwNewLong >= 0 ) /*0x5ef5c7*/
          goto LABEL_15; /*0x5ef5c7*/
      }
      v4 = dwNewLong; /*0x5ef5cb*/
    }
LABEL_15:
    switch ( v4 ) /*0x5ef5dd*/
    {
      case 1618: /*0x5ef5dd*/
        v6((HWND)v0, 0); /*0x5efe70*/
        v5(g_hWnd); /*0x5efe79*/
        if ( Network::sendGameEvent((Modem *)&HouseClass_Player.__pad_5568[18444], v49, v50) ) /*0x5efe87*/
          SaveConfigWOL((int)&HouseClass_Player.__pad_5568[8068]); /*0x5efe95*/
        Network::handleTimeout((HWND)v0); /*0x5efe9c*/
        v6((HWND)v0, 5); /*0x5efea4*/
        goto LABEL_121; /*0x5efea6*/
      case 1619: /*0x5ef5dd*/
        v6((HWND)v0, 0); /*0x5ef5e6*/
        v5(g_hWnd); /*0x5ef5ee*/
        if ( !Network::resetConnectionState((LONG)&v59.__pad_170[260], (int)v0, (int)v6) ) /*0x5ef5fe*/
          goto LABEL_34; /*0x5ef5fe*/
        v8 = *(char **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18564] /*0x5ef610*/
                      + 4 * *(_DWORD *)&HouseClass_Player.__pad_5568[18440]);
        if ( !*(_DWORD *)v8 ) /*0x5ef613*/
          v8 = &HouseClass_Player.__pad_5568[18444]; /*0x5ef619*/
        if ( g_ClipboardBuffer ) /*0x5ef626*/
          (**(void (__thiscall ***)(WinModemClass *, int))g_ClipboardBuffer->__pad_0)(g_ClipboardBuffer, 1); /*0x5ef62c*/
        v9 = (_DWORD *)__2_YAPAXI_Z(0x2088u); /*0x5ef633*/
        if ( v9 ) /*0x5ef63d*/
          g_ClipboardBuffer = (WinModemClass *)WinModemClass::Construct(v9); /*0x5ef646*/
        else
          g_ClipboardBuffer = 0; /*0x5ef64d*/
        if ( !NullModemClass::Init( /*0x5ef679*/
                (AnimClass *)&HouseClass_Player.__pad_5568[22460],
                *(_DWORD *)v8,
                *((CellStruct **)v8 + 1),
                v8 + 48,
                *((CellStruct **)v8 + 2),
                0,
                8,
                1) )
        {
          aP2.CampaignScore_field_0x10 = (int)&stru_82083C; /*0x5ef774*/
          StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 5798); /*0x5ef788*/
          v17 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[928], 0, &stru_830620.__pad_14B0[948], 5798); /*0x5ef793*/
          Dialog::ShowMessageBox((int)v17, StringCSF, 0, 0, 0, v49); /*0x5ef79d*/
LABEL_34:
          ShowWindow((HWND)v0, 5); /*0x5ef7a2*/
          goto LABEL_121; /*0x5ef7ab*/
        }
        v10 = *((_DWORD *)v8 + 5); /*0x5ef67f*/
        if ( v10 == 3 ) /*0x5ef685*/
          strcpy((char *)&(&g_MatrixTransformState)[191] + 8, v8 + 32); /*0x5ef6a1*/
        else
          CopyWideToChar( /*0x5ef6bc*/
            (_BYTE *)&(&g_MatrixTransformState)[191] + 8,
            *(char **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18612] + 4 * v10),
            -1);
        v11 = (const char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18564] /*0x5ef6e0*/
                                       + 4 * *(_DWORD *)&HouseClass_Player.__pad_5568[18440])
                           + 154);
        v12 = strlen(v11) + 1; /*0x5ef6e2*/
        v13 = (char *)&(&g_MatrixTransformState)[16] + strlen((const char *)&(&g_MatrixTransformState)[191] + 8) + 4; /*0x5ef6f0*/
        qmemcpy(v13, v11, 4 * (v12 >> 2)); /*0x5ef6f4*/
        v15 = &v11[4 * (v12 >> 2)]; /*0x5ef6f4*/
        v14 = &v13[4 * (v12 >> 2)]; /*0x5ef6f4*/
        v16 = v12; /*0x5ef6f6*/
        LOBYTE(v12) = 0; /*0x5ef6f8*/
        qmemcpy(v14, v15, v16 & 3); /*0x5ef6fd*/
        if ( Modem::CheckStatus(v12, (int)v8, (int)v8) ) /*0x5ef701*/
        {
          *(_DWORD *)&HouseClass_Player.__pad_5568[18556] = 2; /*0x5ef716*/
          *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 1; /*0x5ef720*/
          if ( ModemHost::Dialog((LONG)v59.__pad_FC) ) /*0x5ef726*/
          {
            v51 = 1; /*0x5ef72f*/
            goto LABEL_121; /*0x5ef733*/
          }
          *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0; /*0x5ef73a*/
          v51 = 0; /*0x5ef73f*/
        }
        EventClass::GetState(0); /*0x5ef74a*/
        ShowWindow((HWND)v0, 5); /*0x5ef752*/
        goto LABEL_121; /*0x5ef758*/
      case 1620: /*0x5ef5dd*/
        v6((HWND)v0, 0); /*0x5ef7b2*/
        v5(g_hWnd); /*0x5ef7ba*/
        if ( g_ClipboardBuffer ) /*0x5ef7c4*/
          (**(void (__thiscall ***)(WinModemClass *, int))g_ClipboardBuffer->__pad_0)(g_ClipboardBuffer, 1); /*0x5ef7ca*/
        v18 = (_DWORD *)__2_YAPAXI_Z(0x2088u); /*0x5ef7d1*/
        if ( v18 ) /*0x5ef7db*/
          g_ClipboardBuffer = (WinModemClass *)WinModemClass::Construct(v18); /*0x5ef7e4*/
        else
          g_ClipboardBuffer = 0; /*0x5ef7eb*/
        if ( NullModemClass::Init( /*0x5ef818*/
               (AnimClass *)&HouseClass_Player.__pad_5568[22460],
               *(int *)&HouseClass_Player.__pad_5568[18444],
               *(CellStruct **)&HouseClass_Player.__pad_5568[18448],
               &HouseClass_Player.__pad_5568[18492],
               *(CellStruct **)&HouseClass_Player.__pad_5568[18452],
               0,
               8,
               1) )
        {
          LOBYTE(v19) = 0; /*0x5ef821*/
          if ( Modem::DetectAndConnect(v19, (int)&HouseClass_Player.__pad_5568[18444], (int)v6) ) /*0x5ef828*/
          {
            *(_DWORD *)&HouseClass_Player.__pad_5568[18556] = 3; /*0x5ef838*/
            *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 1; /*0x5ef842*/
            if ( ModemGuest::Dialog((LONG)&v59.__pad_FC[96]) ) /*0x5ef848*/
            {
              v51 = 1; /*0x5ef851*/
              goto LABEL_121; /*0x5ef855*/
            }
            *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0; /*0x5ef85a*/
            v51 = 0; /*0x5ef860*/
          }
          EventClass::GetState(0); /*0x5ef86a*/
          v6((HWND)v0, 5); /*0x5ef872*/
        }
        else
        {
          aP2.CampaignScore_field_0x1C = (int)&stru_82083C; /*0x5ef88d*/
          v46 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 5833); /*0x5ef8a1*/
          v20 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[928], 0, &stru_830620.__pad_14B0[948], 5833); /*0x5ef8ac*/
          Dialog::ShowMessageBox((int)v20, v46, 0, 0, 0, v49); /*0x5ef8b6*/
          v6((HWND)v0, 5); /*0x5ef8be*/
        }
        goto LABEL_121; /*0x5ef874*/
      case 1621: /*0x5ef5dd*/
        v6((HWND)v0, 0); /*0x5ef8c7*/
        v5(g_hWnd); /*0x5ef8cf*/
        if ( !NullModemClass::Init( /*0x5ef8fb*/
                (AnimClass *)&HouseClass_Player.__pad_5568[22460],
                *(int *)&HouseClass_Player.__pad_5568[18444],
                *(CellStruct **)&HouseClass_Player.__pad_5568[18448],
                &HouseClass_Player.__pad_5568[18492],
                *(CellStruct **)&HouseClass_Player.__pad_5568[18452],
                0,
                8,
                1) )
        {
          aP2.CampaignScore_field_0x14 = (int)&stru_82083C; /*0x5efe39*/
          v48 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 5877); /*0x5efe4d*/
          v43 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[928], 0, &stru_830620.__pad_14B0[948], 5877); /*0x5efe58*/
          Dialog::ShowMessageBox((int)v43, v48, 0, 0, 0, v49); /*0x5efe62*/
          v6((HWND)v0, 5); /*0x5efe6a*/
          goto LABEL_121; /*0x5efe6c*/
        }
        v21 = 0; /*0x5ef907*/
        LOBYTE(v0) = 1; /*0x5ef909*/
        Member23 = (void *)NullModemClass::GetMember23(g_ClipboardBuffer); /*0x5ef90b*/
        SetCommBreak(Member23); /*0x5ef911*/
        WinModemClass::WriteSerial( /*0x5ef932*/
          (int)g_ClipboardBuffer,
          &stru_830620.__pad_14B0[920],
          (WinModemClass *)strlen(&stru_830620.__pad_14B0[920]));
        aP2.CampaignScore_field_0x04 = Timer::GetTicks(); /*0x5ef944*/
        aP2.CampaignScore_field_0x0C = 0; /*0x5ef948*/
        aP2.CampaignScore_field_0x20 = Timer::GetTicks(); /*0x5ef951*/
        CampaignScore_field_0x20 = aP2.CampaignScore_field_0x20; /*0x5ef955*/
        v24 = (CampaignScore *)120; /*0x5ef95b*/
        v56 = 120; /*0x5ef960*/
        aP2.CampaignScore_field_0x04 = aP2.CampaignScore_field_0x20; /*0x5ef964*/
        aP2.CampaignScore_field_0x08 = v55; /*0x5ef968*/
        aP2.CampaignScore_field_0x0C = 120; /*0x5ef96c*/
        break; /*0x5ef96c*/
      default:
LABEL_120:
        v51 = v7; /*0x5efea8*/
        goto LABEL_121; /*0x5efea8*/
    }
    do /*0x5ef996*/
    {
      v25 = v24; /*0x5ef973*/
      if ( CampaignScore_field_0x20 == -1 ) /*0x5ef975*/
      {
        v28 = v24; /*0x5ef992*/
      }
      else
      {
        Ticks = Timer::GetTicks(); /*0x5ef97b*/
        CampaignScore_field_0x20 = aP2.CampaignScore_field_0x04; /*0x5ef980*/
        v27 = Ticks - aP2.CampaignScore_field_0x04; /*0x5ef984*/
        if ( v27 >= (int)v25 ) /*0x5ef988*/
          break; /*0x5ef988*/
        v24 = (CampaignScore *)aP2.CampaignScore_field_0x0C; /*0x5ef98a*/
        v28 = (CampaignScore *)((char *)v25 - v27); /*0x5ef98e*/
      }
    }
    while ( v28 ); /*0x5ef996*/
    v29 = (void *)NullModemClass::GetMember23(g_ClipboardBuffer); /*0x5ef998*/
    ClearCommBreak(v29); /*0x5ef9a4*/
    v30 = (void *)NullModemClass::GetMember23(g_ClipboardBuffer); /*0x5ef9b2*/
    EscapeCommFunction(v30, 6u); /*0x5ef9b8*/
    v31 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5ef9c3*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5ef9cc*/
      v31 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5ef9de*/
    while ( 1 ) /*0x5ef9e5*/
    {
      v32 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5ef9e5*/
      if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5ef9ee*/
        v32 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5efa00*/
      if ( (unsigned int)(v32 - v31) >= 0x50 ) /*0x5efa07*/
        break; /*0x5efa07*/
      Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5efa12*/
      if ( ObjectTypeClass::CreateInstance((int)&HouseClass_Player.__pad_5568[22460], &aP1, &aP2) > 0 /*0x5efa34*/
        && *(_DWORD *)aP1.__pad_0 == 100 )
      {
        v33 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5efa3b*/
        if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5efa44*/
          v33 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5efa56*/
        while ( 1 ) /*0x5efa5d*/
        {
          v34 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5efa5d*/
          if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5efa66*/
            v34 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5efa78*/
          if ( (unsigned int)(v34 - v33) >= 0x1E ) /*0x5efa7f*/
            break; /*0x5efa7f*/
          Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5efa86*/
        }
        LOBYTE(v0) = 0; /*0x5efa8d*/
        v21 = 2; /*0x5efa8f*/
        break; /*0x5efa8f*/
      }
    }
    memset(&v59, 0, 250); /*0x5efaa5*/
    if ( (_BYTE)v0 != 1 ) /*0x5efaa9*/
      goto LABEL_106; /*0x5efaa9*/
    v59.field_0 = 100; /*0x5efab9*/
    *(_DWORD *)&v59.__pad_34[94] = Timer::GetElapsed(&stru_87C374.__pad_579C[22568]); /*0x5efacc*/
    v59.__pad_8[16] = (unsigned __int8)&v60; /*0x5efae7*/
    Stream::WriteBlock((int)&HouseClass_Player.__pad_5568[22460], &v59, 250, 1); /*0x5efaee*/
    Elapsed = Timer::GetElapsed(&stru_87C374.__pad_579C[22568]); /*0x5efb02*/
    if ( (unsigned int)(Timer::GetElapsed(&stru_87C374.__pad_579C[22568]) - Elapsed) < 0x50 ) /*0x5efb0e*/
    {
      while ( 1 ) /*0x5efb15*/
      {
        Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5efb15*/
        if ( ObjectTypeClass::CreateInstance((int)&HouseClass_Player.__pad_5568[22460], &aP1, &aP2) > 0 /*0x5efb36*/
          && *(_DWORD *)aP1.__pad_0 == 100 )
        {
          break; /*0x5efb36*/
        }
        if ( (unsigned int)(Timer::GetElapsed(&stru_87C374.__pad_579C[22568]) - Elapsed) >= 0x50 ) /*0x5efb4b*/
          goto LABEL_73; /*0x5efb4b*/
      }
      v41 = Timer::GetElapsed(&stru_87C374.__pad_579C[22568]); /*0x5efc7a*/
      while ( (unsigned int)(Timer::GetElapsed(&stru_87C374.__pad_579C[22568]) - v41) < 0x1E ) /*0x5efc86*/
        Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5efc8d*/
      if ( v58 > *(int *)&v59.__pad_34[94] ) /*0x5efcb3*/
      {
        v21 = 2; /*0x5efcb5*/
        goto LABEL_106; /*0x5efcba*/
      }
      if ( v58 == *(_DWORD *)&v59.__pad_34[94] ) /*0x5efcbc*/
      {
        if ( LOBYTE(aP1.CampaignScore_field_0x18) > (unsigned int)v59.__pad_8[16] ) /*0x5efccf*/
        {
          v21 = 2; /*0x5efcd1*/
          goto LABEL_106; /*0x5efcd6*/
        }
        if ( LOBYTE(aP1.CampaignScore_field_0x18) == v59.__pad_8[16] ) /*0x5efcd8*/
        {
          v21 = 3; /*0x5efcde*/
          goto LABEL_106; /*0x5efce3*/
        }
      }
    }
LABEL_73:
    *((_BYTE *)&g_MatrixTransformState + 9524) = 0; /*0x5efb4d*/
    v36 = GetStringCSF(g_Str_TXT_CANCEL, 0, &stru_830620.__pad_14B0[948], 6293); /*0x5efb80*/
    v37 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[900], 0, &stru_830620.__pad_14B0[948], 6293); /*0x5efb82*/
    MessageBox = CreateMessageBox((LPARAM)v37, (LPARAM)v36, (LONG)(&g_MatrixTransformState + 2381)); /*0x5efb8b*/
    v39 = (ObjectClass *)MessageBox; /*0x5efb90*/
    if ( !MessageBox ) /*0x5efb94*/
      goto LABEL_106; /*0x5efb94*/
    Dialog::Show(MessageBox); /*0x5efb9c*/
    v40 = Timer::GetElapsed(&stru_87C374.__pad_579C[22568]); /*0x5efbab*/
    while ( Dialog::PumpMessages() != 1 && !*((_BYTE *)&g_MatrixTransformState + 9524) ) /*0x5efbc1*/
    {
      ScreenSaver::Process(0, (int)v0, v21); /*0x5efbc9*/
      Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5efbd3*/
      if ( Count::GetCountQueue(&HouseClass_Player.__pad_5568[22460]) ) /*0x5efbdd*/
        goto LABEL_101; /*0x5efbe4*/
      if ( ObjectTypeClass::CreateInstance((int)&HouseClass_Player.__pad_5568[22460], &aP1, &aP2) <= 0 ) /*0x5efc00*/
      {
        v21 = 1; /*0x5efd0e*/
        goto LABEL_100; /*0x5efd0e*/
      }
      if ( *(_DWORD *)aP1.__pad_0 != 100 ) /*0x5efc0b*/
      {
        v21 = 0; /*0x5efd0a*/
LABEL_100:
        LOBYTE(v0) = 0; /*0x5efd13*/
        goto LABEL_101; /*0x5efd13*/
      }
      v40 = Timer::GetElapsed(&stru_87C374.__pad_579C[22568]); /*0x5efc20*/
      while ( (unsigned int)(Timer::GetElapsed(&stru_87C374.__pad_579C[22568]) - v40) < 0x1E ) /*0x5efc2c*/
        Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5efc33*/
      if ( v58 <= *(int *)&v59.__pad_34[94] ) /*0x5efc59*/
      {
        if ( v58 == *(_DWORD *)&v59.__pad_34[94] ) /*0x5efce5*/
        {
          if ( LOBYTE(aP1.CampaignScore_field_0x18) <= (unsigned int)v59.__pad_8[16] ) /*0x5efcf4*/
          {
            if ( LOBYTE(aP1.CampaignScore_field_0x18) == v59.__pad_8[16] ) /*0x5efcff*/
            {
              LOBYTE(v0) = 0; /*0x5efd01*/
              v21 = 3; /*0x5efd03*/
            }
          }
          else
          {
            LOBYTE(v0) = 0; /*0x5efcf6*/
            v21 = 2; /*0x5efcf8*/
          }
        }
      }
      else
      {
        LOBYTE(v0) = 0; /*0x5efc5f*/
        v21 = 2; /*0x5efc61*/
      }
LABEL_101:
      if ( (unsigned int)(Timer::GetElapsed(&stru_87C374.__pad_579C[22568]) - v40) > 0xE10 ) /*0x5efd26*/
        break; /*0x5efd26*/
      if ( (_BYTE)v0 != 1 ) /*0x5efd2b*/
        goto LABEL_105; /*0x5efd2b*/
    }
    v21 = 0; /*0x5efd32*/
LABEL_105:
    Dialog::Destroy((SkirmishDialog *)v39); /*0x5efd34*/
LABEL_106:
    if ( v21 == 1 ) /*0x5efd3e*/
    {
      v7 = 2; /*0x5efdd1*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[18556] = 0; /*0x5efddd*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 2; /*0x5efde3*/
      if ( ModemHost::Dialog((LONG)&v59.__pad_170[72]) == 1 ) /*0x5efdf0*/
        goto LABEL_120; /*0x5efdf0*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0; /*0x5efdf6*/
LABEL_115:
      EventClass::GetState(0); /*0x5efe07*/
      ShowWindow(hWnd, 5); /*0x5efe1a*/
    }
    else
    {
      if ( v21 != 2 ) /*0x5efd45*/
      {
        if ( v21 == 3 ) /*0x5efd48*/
        {
          aP2.CampaignScore_field_0x18 = (int)&stru_82083C; /*0x5efd65*/
          v47 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 5868); /*0x5efd79*/
          v42 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[876], 0, &stru_830620.__pad_14B0[948], 5868); /*0x5efd84*/
          Dialog::ShowMessageBox((int)v42, v47, 0, 0, 0, v49); /*0x5efd8e*/
        }
        goto LABEL_115; /*0x5efd93*/
      }
      *(_DWORD *)&HouseClass_Player.__pad_5568[18556] = 1; /*0x5efda1*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 2; /*0x5efdab*/
      if ( ModemGuest::Dialog((LONG)&v59.__pad_170[168]) != 1 ) /*0x5efdb8*/
      {
        *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0; /*0x5efdc3*/
        goto LABEL_115; /*0x5efdcd*/
      }
      v51 = 2; /*0x5efdba*/
    }
LABEL_121:
    v4 = -1; /*0x5efeac*/
    dwNewLong = -1; /*0x5efeb6*/
    if ( v51 == -1 ) /*0x5efeba*/
    {
      v0 = (ObjectClass *)hWnd; /*0x5ef59b*/
      v6 = (void (__stdcall *)(HWND, int))ShowWindow; /*0x5ef59f*/
      v5 = (void (__stdcall *)(HWND))UpdateWindow; /*0x5ef5a5*/
      v7 = 0; /*0x5ef5ab*/
      continue; /*0x5ef5ab*/
    }
    break;
  }
  Dialog::Destroy((SkirmishDialog *)hWnd); /*0x5efec4*/
  return (ObjectClass *)v51; /*0x5efecd*/
}


// ==== 0x005EFF00  sub_5EFF00  this=-  sig=csp ====
int __stdcall sub_5EFF00(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  unsigned int *WindowLongA; // eax

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x5eff19*/
  if ( !result ) /*0x5eff20*/
  {
    if ( a2 == 273 ) /*0x5eff28*/
    {
      WindowLongA = (unsigned int *)GetWindowLongA(hWnd, 8); /*0x5eff44*/
      if ( a3 == 2 || a3 > 0x651 && a3 <= 0x655 ) /*0x5eff5d*/
        *WindowLongA = a3; /*0x5eff5f*/
    }
    else if ( a2 == 1175 ) /*0x5eff30*/
    {
      Network::handleTimeout(hWnd); /*0x5eff34*/
      return 0; /*0x5eff3e*/
    }
    return 0; /*0x5eff61*/
  }
  return result; /*0x5eff39*/
}


// ==== 0x005EFF70  Network::handleTimeout  this=IUnknown  sig=csp ====
HWND __thiscall Network::handleTimeout(HWND hDlg)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  HWND result; // eax
  unsigned __int8 v5; // [esp+10h] [ebp-4h]

  v5 = 1; /*0x5eff7e*/
  if ( !*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[84] /*0x5effa4*/
    || *(_DWORD *)&MEMORY[0xA8D63C].__pad_430[88] == -1
    || *(_DWORD *)&MEMORY[0xA8D63C].__pad_430[92] == -1
    || Modem::OpenPort(&MEMORY[0xA8D63C].__pad_1258[476], (Modem *)&MEMORY[0xA8D63C].__pad_430[84]) )
  {
    v5 = 0; /*0x5effad*/
  }
  DlgItem = GetDlgItem(hDlg, 1619); /*0x5effbe*/
  if ( DlgItem ) /*0x5effcc*/
    EnableWindow(DlgItem, v5); /*0x5effd8*/
  v3 = GetDlgItem(hDlg, 1620); /*0x5effe0*/
  if ( v3 ) /*0x5effe4*/
    EnableWindow(v3, v5); /*0x5efff0*/
  result = GetDlgItem(hDlg, 1621); /*0x5efff8*/
  if ( result ) /*0x5efffc*/
    return (HWND)EnableWindow(result, v5); /*0x5f0006*/
  return result; /*0x5f0008*/
}

