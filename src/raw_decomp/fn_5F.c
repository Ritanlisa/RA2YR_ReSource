// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x005F0040  Network::CleanupOnDisconnect  this=Network  sig=ida-proto ====
int Network_CleanupOnDisconnect()
{
  if ( (dword_A8D5F8 & 2) == 0 && dword_A8B238[0] == 1 ) /*0x5f0050*/
    NullModemClass::Negotiate((int)&unk_A8EA70); /*0x5f0057*/
  return ObjectClass::DetachAndFree(&unk_A8EA70);
}



// ==== 0x005F0070  CleanupCampaignResources  this=-  sig=ida-proto ====
char sub_5F0070()
{
  DWORD v0; // eax
  int v1; // edi
  int v2; // esi
  _BYTE v4[108]; // [esp+8h] [ebp-70h] BYREF
  __int16 v5; // [esp+74h] [ebp-4h]
  char v6; // [esp+76h] [ebp-2h]

  LOBYTE(v0) = dword_A8D5F8; /*0x5f0073*/
  v4[0] = 0; /*0x5f007c*/
  if ( (dword_A8D5F8 & 2) == 0 ) /*0x5f0081*/
  {
    memset(v4, 0, sizeof(v4)); /*0x5f0094*/
    v5 = 0; /*0x5f0096*/
    v6 = 0; /*0x5f0098*/
    v4[0] = 19; /*0x5f00a5*/
    Stream::WriteBlock((int)&unk_A8EA70, (int)v4, 111, 0); /*0x5f00aa*/
    Stream::WriteBlock((int)&unk_A8EA70, (int)v4, 111, 0); /*0x5f00bd*/
    v1 = dword_887340; /*0x5f00c7*/
    if ( dword_887338 != -1 ) /*0x5f00d0*/
      v1 += Timer::GetTicks() - dword_887338; /*0x5f00e2*/
    while ( 1 ) /*0x5f00e4*/
    {
      LOBYTE(v0) = dword_887338; /*0x5f00e4*/
      v2 = dword_887340; /*0x5f00e9*/
      if ( dword_887338 != -1 ) /*0x5f00f2*/
      {
        v0 = Timer::GetTicks() - dword_887338; /*0x5f00fe*/
        v2 += v0; /*0x5f0104*/
      }
      if ( (unsigned int)(v2 - v1) >= 0x1E ) /*0x5f010b*/
        break; /*0x5f010b*/
      Stream::ReadPacket((int)&unk_A8EA70); /*0x5f0112*/
    }
  }
  return v0; /*0x5f0119*/
}



// ==== 0x005F0120  ObjectClass::Network_Process_5F0120  this=ObjectClass  sig=csp ====
char __usercall sub_5F0120@<al>(int a1@<ebp>)
{
  char result; // al
  int v2; // edx
  int v3; // edx

  result = 0; /*0x5f0126*/
  switch ( g_EventDispatchState ) /*0x5f012d*/
  {
    case 0: /*0x5f012d*/
    case 1: /*0x5f012d*/
      goto LABEL_3;
    case 2: /*0x5f012d*/
      if ( (Dialog::CheckButtonState() & 0x80u) != 0 ) /*0x5f0140*/
        goto LABEL_3; /*0x5f0140*/
      LOBYTE(v2) = 1; /*0x5f014d*/
      result = Modem::CheckStatus(v2, dword_AC1234, a1); /*0x5f014f*/
      break; /*0x5f014f*/
    case 3: /*0x5f012d*/
      if ( (Dialog::CheckButtonState() & 0x80u) != 0 ) /*0x5f0160*/
      {
LABEL_3:
        result = NullModem::TestConnection(); /*0x5f0142*/
      }
      else
      {
        LOBYTE(v3) = 1; /*0x5f0168*/
        result = Modem::DetectAndConnect(v3, dword_AC1234, a1); /*0x5f016a*/
      }
      break; /*0x5f016a*/
    default:
      return result;
  }
  return result; /*0x5f016f*/
}



// ==== 0x005F0180  HandlePlayerDisconnection  this=AbstractClass  sig=ida-proto ====
char __fastcall HandlePlayerDisconnection(int a1, int a2)
{
  char result; // al
  int v3; // edi
  wchar_t *StringCSF; // eax
  wchar_t *v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  wchar_t *v9; // eax
  int v10; // eax
  wchar_t String[80]; // [esp+4h] [ebp-A0h] BYREF

  result = dword_A8B54C; /*0x5f0180*/
  if ( dword_A8B54C != 1 ) /*0x5f018f*/
  {
    result = (char)dword_A8022C; /*0x5f0195*/
    v3 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * a1]; /*0x5f019a*/
    if ( v3 ) /*0x5f019f*/
    {
      result = *(_BYTE *)(v3 + 492); /*0x5f01a5*/
      if ( result ) /*0x5f01ad*/
      {
        String[0] = 0; /*0x5f01b6*/
        if ( a2 == -1 ) /*0x5f01bd*/
        {
          ObjectClass::FreeResources((int)&unk_A8EA70); /*0x5f0227*/
        }
        else if ( a2 ) /*0x5f01c1*/
        {
          if ( a2 == 1 ) /*0x5f01c6*/
          {
            StringCSF = GetStringCSF(aTxtConnectionL, 0, g_Str_File_NullDlg_CPP, 6412); /*0x5f01e0*/
            swprintf(String, (const size_t)StringCSF, (const wchar_t *const)(v3 + 90154)); /*0x5f01eb*/
          }
        }
        else
        {
          v5 = GetStringCSF(aTxtLeftGame, 0, g_Str_File_NullDlg_CPP, 6416); /*0x5f020d*/
          swprintf(String, (const size_t)v5, (const wchar_t *const)(v3 + 90154)); /*0x5f0218*/
        }
        if ( wcslen(String) ) /*0x5f0231*/
        {
          v6 = Math::RoundToInt(*(double *)&dword_8871E0[1].__pad_A0 * 900.0); /*0x5f0250*/
          MessageListClass::AddMessage(unk_A8BC60, 0, 0, String, *(_DWORD *)(*(_DWORD *)(v3 + 52) + 192), 16454, v6, 0); /*0x5f0273*/
          MapClass::MarkForRedraw(&dword_87F7E8, 0); /*0x5f027f*/
        }
        v7 = 0; /*0x5f028b*/
        if ( dword_A8DA84 > 0 ) /*0x5f028f*/
        {
          while ( _wcsicmp(*(const wchar_t **)(dword_A8DA78 + 4 * v7), (const wchar_t *)(v3 + 90154)) ) /*0x5f02b0*/
          {
            if ( ++v7 >= dword_A8DA84 ) /*0x5f02ba*/
              goto LABEL_20; /*0x5f02ba*/
          }
          __3_YAXPAX_Z(*(void **)(dword_A8DA78 + 4 * v7)); /*0x5f02c7*/
          v8 = (*(int (__thiscall **)(int *, int))(stru_A8DA74 + 16))(&stru_A8DA74, dword_A8DA78 + 4 * v7); /*0x5f02e3*/
          if ( v8 != -1 && v8 < dword_A8DA84 && v8 < --dword_A8DA84 ) /*0x5f02fe*/
          {
            do /*0x5f0316*/
            {
              ++v8; /*0x5f0306*/
              *(_DWORD *)(dword_A8DA78 + 4 * v8 - 4) = *(_DWORD *)(dword_A8DA78 + 4 * v8); /*0x5f030a*/
            }
            while ( v8 < dword_A8DA84 ); /*0x5f0316*/
          }
        }
LABEL_20:
        HouseClass::AIBuildBase((#375 *)v3); /*0x5f0318*/
        result = --dword_A8B54C; /*0x5f0324*/
        if ( dword_A8B54C == 1 ) /*0x5f032f*/
        {
          v9 = GetStringCSF(aTxtJustYouAndM, 0, g_Str_File_NullDlg_CPP, 6453); /*0x5f0342*/
          swprintf(String, (const size_t)&off_8240B4, v9); /*0x5f0352*/
          v10 = Math::RoundToInt(*(double *)&dword_8871E0[1].__pad_A0 * 900.0); /*0x5f036e*/
          MessageListClass::AddMessage(unk_A8BC60, 0, 0, String, *(_DWORD *)(*(_DWORD *)(v3 + 52) + 192), 16454, v10, 0); /*0x5f0391*/
          return MapClass::MarkForRedraw(&dword_87F7E8, 0); /*0x5f039d*/
        }
      }
    }
  }
  return result; /*0x5f03a2*/
}



// ==== 0x005F03B0  NullModem::TestConnection  this=NullModem  sig=ida-proto ====
char __usercall NullModem::TestConnection@<al>(int a1@<edi>)
{
  char v1; // bl
  wchar_t *StringCSF; // esi
  wchar_t *v3; // eax
  HWND MessageBox; // eax
  int v5; // esi
  int v6; // ebp
  int v7; // eax
  int v8; // esi
  int Ticks; // ecx
  int v10; // esi
  int v11; // esi
  int v12; // edi
  int v13; // esi
  int v14; // esi
  int *v15; // eax
  wchar_t *v17; // [esp-18h] [ebp-228h]
  char v19; // [esp+Bh] [ebp-205h]
  int v20; // [esp+Ch] [ebp-204h]
  HWND hWnd; // [esp+10h] [ebp-200h]
  _BYTE v22[4]; // [esp+14h] [ebp-1FCh] BYREF
  int v23[62]; // [esp+18h] [ebp-1F8h] BYREF
  __int16 v24; // [esp+110h] [ebp-100h]
  _DWORD v25[6]; // [esp+114h] [ebp-FCh] BYREF
  int v26; // [esp+12Ch] [ebp-E4h]

  v1 = 0; /*0x5f03bd*/
  v19 = 1; /*0x5f03d0*/
  g_NetworkTestFlag = 0; /*0x5f03d5*/
  StringCSF = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullDlg_CPP, 6489); /*0x5f03f1*/
  v3 = GetStringCSF(aTxtNullConnerr, 0, g_Str_File_NullDlg_CPP, 6489); /*0x5f03f3*/
  MessageBox = CreateMessageBox((LPARAM)v3, (LPARAM)StringCSF, (LONG)&g_NetworkTestFlag); /*0x5f03fc*/
  hWnd = MessageBox; /*0x5f0403*/
  if ( !MessageBox ) /*0x5f0407*/
    return 0; /*0x5f067c*/
  Dialog::Show(MessageBox); /*0x5f040f*/
  v5 = dword_887340; /*0x5f0419*/
  if ( dword_887338 != -1 ) /*0x5f0422*/
    v5 += Timer::GetTicks() - dword_887338; /*0x5f0434*/
  v20 = v5; /*0x5f0438*/
  v6 = v5; /*0x5f043c*/
  while ( (unsigned __int8)Dialog::PumpMessages() != 1 && !g_NetworkTestFlag ) /*0x5f0452*/
  {
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5f045d*/
    v7 = dword_887338; /*0x5f0462*/
    v8 = dword_887340; /*0x5f0467*/
    if ( dword_887338 != -1 ) /*0x5f0470*/
    {
      Ticks = Timer::GetTicks(); /*0x5f047c*/
      v7 = dword_887338; /*0x5f047e*/
      v8 += Ticks - dword_887338; /*0x5f0485*/
    }
    if ( (unsigned int)(v8 - v6) > 0x1E ) /*0x5f048c*/
    {
      v10 = dword_887340; /*0x5f048e*/
      if ( v7 != -1 ) /*0x5f0497*/
        v10 += Timer::GetTicks() - dword_887338; /*0x5f04a9*/
      memset(v23, 0, sizeof(v23)); /*0x5f04bc*/
      v24 = 0; /*0x5f04be*/
      v6 = v10; /*0x5f04d1*/
      v23[0] = 100; /*0x5f04d3*/
      LOBYTE(v23[6]) = dword_A8B394; /*0x5f04db*/
      Stream::WriteBlock(&unk_A8EA70, (int)v23, 250, 0); /*0x5f04df*/
    }
    if ( ObjectTypeClass::CreateInstance((int)&unk_A8EA70, (int)v25, (int)v22) > 0 ) /*0x5f04fd*/
    {
      v11 = dword_887340; /*0x5f0508*/
      if ( dword_887338 != -1 ) /*0x5f0511*/
        v11 += Timer::GetTicks() - dword_887338; /*0x5f0523*/
      v20 = v11; /*0x5f052c*/
      if ( v25[0] == 100 ) /*0x5f0533*/
      {
        if ( (unsigned __int8)v26 == dword_A8B394 ) /*0x5f054d*/
        {
          v17 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6530); /*0x5f064a*/
          v15 = (int *)GetStringCSF(aTxtSystemNotRe, 0, g_Str_File_NullDlg_CPP, 6530); /*0x5f0655*/
          Dialog::ShowMessageBox(v15, v17, 0, 0, 0, a1); /*0x5f065f*/
          break; /*0x5f065f*/
        }
        memset(v23, 0, sizeof(v23)); /*0x5f0560*/
        v24 = 0; /*0x5f0571*/
        v23[0] = 100; /*0x5f0573*/
        LOBYTE(v23[6]) = dword_A8B394; /*0x5f057b*/
        Stream::WriteBlock(&unk_A8EA70, (int)v23, 250, 1); /*0x5f057f*/
        v12 = dword_887340; /*0x5f0589*/
        if ( dword_887338 != -1 ) /*0x5f0594*/
          v12 += Timer::GetTicks() - dword_887338; /*0x5f05a6*/
        v6 = v12; /*0x5f05a8*/
        while ( 1 ) /*0x5f05af*/
        {
          v13 = dword_887340; /*0x5f05af*/
          if ( dword_887338 != -1 ) /*0x5f05b7*/
            v13 += Timer::GetTicks() - dword_887338; /*0x5f05c9*/
          if ( (unsigned int)(v13 - v12) >= 0x3C ) /*0x5f05d0*/
            break; /*0x5f05d0*/
          Stream::ReadPacket((int)&unk_A8EA70); /*0x5f05d7*/
        }
        v1 = 1; /*0x5f05de*/
        v19 = 0; /*0x5f05e0*/
      }
    }
    v14 = dword_887340; /*0x5f05ea*/
    if ( dword_887338 != -1 ) /*0x5f05f3*/
      v14 += Timer::GetTicks() - dword_887338; /*0x5f0605*/
    if ( (unsigned int)(v14 - v20) > 0x384 ) /*0x5f0611*/
      break; /*0x5f0611*/
    if ( v19 != 1 ) /*0x5f0618*/
      goto LABEL_33; /*0x5f0618*/
  }
  v1 = 0; /*0x5f0664*/
LABEL_33:
  Dialog::Destroy(hWnd); /*0x5f0666*/
  return v1; /*0x5f0673*/
}



// ==== 0x005F0690  Modem::CheckStatus  this=Modem  sig=csp ====
char __fastcall Modem::CheckStatus(Modem *this, int a2)
{
  char v3; // bl
  int v4; // eax
  int v6; // eax
  int Modem_field_0x08; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int *v11; // [esp-14h] [ebp-3Ch]
  int *v12; // [esp-14h] [ebp-3Ch]
  int *v13; // [esp-14h] [ebp-3Ch]
  int *v14; // [esp-14h] [ebp-3Ch]
  int *v15; // [esp-14h] [ebp-3Ch]
  int *v16; // [esp-14h] [ebp-3Ch]
  int *v17; // [esp-14h] [ebp-3Ch]
  int *v18; // [esp-14h] [ebp-3Ch]
  int *v19; // [esp-14h] [ebp-3Ch]
  wchar_t *v20; // [esp-10h] [ebp-38h]
  wchar_t *v21; // [esp-10h] [ebp-38h]
  wchar_t *StringCSF; // [esp-10h] [ebp-38h]
  wchar_t *v23; // [esp-10h] [ebp-38h]
  wchar_t *v24; // [esp-10h] [ebp-38h]
  wchar_t *v25; // [esp-10h] [ebp-38h]
  wchar_t *v26; // [esp-10h] [ebp-38h]
  wchar_t *v27; // [esp-10h] [ebp-38h]
  wchar_t *v28; // [esp-10h] [ebp-38h]
  Dialog *v29; // [esp+0h] [ebp-28h]
  ObjectClass *v30; // [esp+0h] [ebp-28h]
  int v31; // [esp+0h] [ebp-28h]
  int v32; // [esp+0h] [ebp-28h]
  char v33; // [esp+Fh] [ebp-19h]

  v33 = 0; /*0x5f06a1*/
  Debug::Log(); /*0x5f06a6*/
  dword_A8DAB8 &= ~1u; /*0x5f06bc*/
  dword_AC1234 = this; /*0x5f06c2*/
  v3 = Dialog::CheckButtonState(v29); /*0x5f06cd*/
  Debug::Log(); /*0x5f06d4*/
  Debug::Log(); /*0x5f06f1*/
  Debug::Log(); /*0x5f070e*/
  Debug::Log(); /*0x5f072b*/
  Debug::Log(); /*0x5f074d*/
  if ( (_BYTE)a2 ) /*0x5f075b*/
  {
    if ( v3 < 0 ) /*0x5f075f*/
    {
      v4 = dword_A8DAB8; /*0x5f0761*/
      LOBYTE(v4) = dword_A8DAB8 | 1; /*0x5f0767*/
      dword_A8DAB8 = v4; /*0x5f076a*/
      return 1; /*0x5f0775*/
    }
  }
  else if ( v3 < 0 ) /*0x5f0778*/
  {
    Debug::Log(); /*0x5f077f*/
    NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f078c*/
    v6 = dword_A8DAB8; /*0x5f0791*/
    LOBYTE(v6) = dword_A8DAB8 & 0xFE; /*0x5f0796*/
    dword_A8DAB8 = v6; /*0x5f0798*/
  }
  AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f07a7*/
  if ( !NullModemClass::DetectModem((NullModemClass *)&unk_A8EA70, this, a2) ) /*0x5f07b3*/
  {
    Debug::Log(); /*0x5f07c8*/
    nullsub_28(v30); /*0x5f07d5*/
    String::NormalizeNewlines(); /*0x5f07df*/
    StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f07e9*/
    Modem_field_0x08 = this->Modem_field_0x08; /*0x5f07ee*/
    if ( Modem_field_0x08 == 14400 ) /*0x5f07f6*/
    {
      Debug::Log(); /*0x5f0939*/
      this->Modem_field_0x08 = 19200; /*0x5f093e*/
      if ( (dword_A8D5F8 & 2) == 0 && *(_DWORD *)&dword_A8B238 == 1 ) /*0x5f0958*/
        NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f095f*/
      ObjectClass::DetachAndFree((ObjectClass *)&unk_A8EA70); /*0x5f0969*/
      NullModemClass::Init( /*0x5f0988*/
        (int *)&unk_A8EA70,
        *(_DWORD *)this->__pad_0,
        this->Modem_field_0x04,
        (const char *)this + 48,
        this->Modem_field_0x08,
        0,
        8,
        1);
      AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f0997*/
      if ( !NullModemClass::DetectModem((NullModemClass *)&unk_A8EA70, this, a2) ) /*0x5f09a3*/
      {
        Debug::Log(); /*0x5f09b5*/
        nullsub_28(v30); /*0x5f09c2*/
        String::NormalizeNewlines(); /*0x5f09cc*/
        StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f09d6*/
        StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6664); /*0x5f0a06*/
        v13 = (int *)GetStringCSF(g_Str_TXT_UNABLE_FIND_MODEM, 0, g_Str_File_NullDlg_CPP, 6664); /*0x5f0a1a*/
        Dialog::ShowMessageBox(v13, StringCSF, 0, 0, 0, v32); /*0x5f0a1b*/
        goto LABEL_21; /*0x5f0a1b*/
      }
    }
    else
    {
      if ( Modem_field_0x08 != 28800 ) /*0x5f0801*/
      {
        v20 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6692); /*0x5f082e*/
        v11 = (int *)GetStringCSF(g_Str_TXT_UNABLE_FIND_MODEM, 0, g_Str_File_NullDlg_CPP, 6692); /*0x5f0842*/
        Dialog::ShowMessageBox(v11, v20, 0, 0, 0, (int)v30); /*0x5f0843*/
LABEL_21:
        v8 = dword_A8DAB8; /*0x5f0a85*/
        LOBYTE(v8) = dword_A8DAB8 | 1; /*0x5f0a8a*/
        dword_A8DAB8 = v8; /*0x5f0a8d*/
        return 0; /*0x5f0a99*/
      }
      Debug::Log(); /*0x5f084d*/
      this->Modem_field_0x08 = 38400; /*0x5f0852*/
      if ( (dword_A8D5F8 & 2) == 0 && *(_DWORD *)&dword_A8B238 == 1 ) /*0x5f086c*/
        NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f0873*/
      ObjectClass::DetachAndFree((ObjectClass *)&unk_A8EA70); /*0x5f087d*/
      NullModemClass::Init( /*0x5f089c*/
        (int *)&unk_A8EA70,
        *(_DWORD *)this->__pad_0,
        this->Modem_field_0x04,
        (const char *)this + 48,
        this->Modem_field_0x08,
        0,
        8,
        1);
      AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f08ab*/
      if ( !NullModemClass::DetectModem((NullModemClass *)&unk_A8EA70, this, a2) ) /*0x5f08b7*/
      {
        Debug::Log(); /*0x5f08c9*/
        nullsub_28(v30); /*0x5f08d6*/
        String::NormalizeNewlines(); /*0x5f08e0*/
        StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f08ea*/
        v21 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6685); /*0x5f091a*/
        v12 = (int *)GetStringCSF(g_Str_TXT_UNABLE_FIND_MODEM, 0, g_Str_File_NullDlg_CPP, 6685); /*0x5f092e*/
        Dialog::ShowMessageBox(v12, v21, 0, 0, 0, v31); /*0x5f092f*/
        goto LABEL_21; /*0x5f092f*/
      }
    }
  }
  Debug::Log(); /*0x5f0a9f*/
  v9 = Dialog::RunModemDialing((Dialog *)&unk_A8EA70, (int)byte_AC11E8, this->Modem_field_0x0C, a2); /*0x5f0abd*/
  if ( (_BYTE)a2 ) /*0x5f0abf*/
  {
    MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x5f0ac8*/
    TacticalMap::Redraw((GScreenClass *)&stru_87F5F0.__pad_58[416]); /*0x5f0ad2*/
  }
  switch ( v9 ) /*0x5f0ae0*/
  {
    case 0: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0aec*/
      v33 = 1; /*0x5f0af4*/
      break; /*0x5f0af9*/
    case 1: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0b03*/
      v23 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6758); /*0x5f0b36*/
      v14 = (int *)GetStringCSF(aTxtNoCarrier, 0, g_Str_File_NullDlg_CPP, 6758); /*0x5f0b4a*/
      Dialog::ShowMessageBox(v14, v23, 0, 0, 0, (int)v30); /*0x5f0b4b*/
      goto LABEL_32; /*0x5f0b4b*/
    case 2: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0b55*/
      v24 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6764); /*0x5f0b88*/
      v15 = (int *)GetStringCSF(aTxtLineBusy, 0, g_Str_File_NullDlg_CPP, 6764); /*0x5f0b9c*/
      Dialog::ShowMessageBox(v15, v24, 0, 0, 0, (int)v30); /*0x5f0b9d*/
      goto LABEL_32; /*0x5f0b9d*/
    case 3: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0ba7*/
      v25 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6770); /*0x5f0bda*/
      v16 = (int *)GetStringCSF(aTxtNumberInval, 0, g_Str_File_NullDlg_CPP, 6770); /*0x5f0bee*/
      Dialog::ShowMessageBox(v16, v25, 0, 0, 0, (int)v30); /*0x5f0bef*/
      goto LABEL_32; /*0x5f0bef*/
    case 4: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0c4b*/
      v27 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6782); /*0x5f0c7e*/
      v18 = (int *)GetStringCSF(aTxtNoDialTone, 0, g_Str_File_NullDlg_CPP, 6782); /*0x5f0c92*/
      Dialog::ShowMessageBox(v18, v27, 0, 0, 0, (int)v30); /*0x5f0c93*/
      goto LABEL_32; /*0x5f0c93*/
    case 5: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0bf9*/
      v26 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6776); /*0x5f0c2c*/
      v17 = (int *)GetStringCSF(g_Str_TXT_ERROR_TIMEOUT, 0, g_Str_File_NullDlg_CPP, 6776); /*0x5f0c40*/
      Dialog::ShowMessageBox(v17, v26, 0, 0, 0, (int)v30); /*0x5f0c41*/
      goto LABEL_32; /*0x5f0c41*/
    case 6: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0c9a*/
      NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f0ca7*/
      dword_A8DAB8 &= ~1u; /*0x5f0ccc*/
      v28 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6790); /*0x5f0ce6*/
      v19 = (int *)GetStringCSF(aTxtDialingCanc, 0, g_Str_File_NullDlg_CPP, 6790); /*0x5f0cfa*/
      Dialog::ShowMessageBox(v19, v28, 0, 0, 0, (int)v30); /*0x5f0cfb*/
LABEL_32:
      v33 = 0; /*0x5f0d00*/
      break; /*0x5f0d00*/
    default:
      break;
  }
  nullsub_28(v30); /*0x5f0d05*/
  String::NormalizeNewlines(); /*0x5f0d14*/
  StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f0d1e*/
  v10 = dword_A8DAB8; /*0x5f0d23*/
  LOBYTE(v10) = dword_A8DAB8 | 1; /*0x5f0d28*/
  dword_A8DAB8 = v10; /*0x5f0d2b*/
  return v33; /*0x5f0766*/
}



// ==== 0x005F0D60  Modem::DetectAndConnect  this=Modem  sig=csp ====
char __fastcall Modem::DetectAndConnect(Modem *this, int a2)
{
  char v3; // bl
  int v4; // eax
  int v6; // eax
  int Modem_field_0x08; // eax
  int v8; // eax
  int v9; // eax
  int *v10; // [esp-14h] [ebp-34h]
  int *v11; // [esp-14h] [ebp-34h]
  int *v12; // [esp-14h] [ebp-34h]
  int *v13; // [esp-14h] [ebp-34h]
  int *v14; // [esp-14h] [ebp-34h]
  int *v15; // [esp-14h] [ebp-34h]
  int *v16; // [esp-14h] [ebp-34h]
  wchar_t *v17; // [esp-10h] [ebp-30h]
  wchar_t *v18; // [esp-10h] [ebp-30h]
  wchar_t *StringCSF; // [esp-10h] [ebp-30h]
  wchar_t *v20; // [esp-10h] [ebp-30h]
  wchar_t *v21; // [esp-10h] [ebp-30h]
  wchar_t *v22; // [esp-10h] [ebp-30h]
  wchar_t *v23; // [esp-10h] [ebp-30h]
  Dialog *v24; // [esp+0h] [ebp-20h]
  ObjectClass *v25; // [esp+0h] [ebp-20h]
  int v26; // [esp+0h] [ebp-20h]
  int v27; // [esp+0h] [ebp-20h]
  char v28; // [esp+Fh] [ebp-11h]

  v28 = 0; /*0x5f0d71*/
  Debug::Log(); /*0x5f0d76*/
  dword_A8DAB8 &= ~1u; /*0x5f0d8c*/
  dword_AC1234 = this; /*0x5f0d92*/
  v3 = Dialog::CheckButtonState(v24); /*0x5f0d9d*/
  Debug::Log(); /*0x5f0da4*/
  Debug::Log(); /*0x5f0dc1*/
  Debug::Log(); /*0x5f0dde*/
  Debug::Log(); /*0x5f0dfb*/
  Debug::Log(); /*0x5f0e1d*/
  if ( (_BYTE)a2 ) /*0x5f0e2b*/
  {
    if ( v3 < 0 ) /*0x5f0e2f*/
    {
      v4 = dword_A8DAB8; /*0x5f0e31*/
      LOBYTE(v4) = dword_A8DAB8 | 1; /*0x5f0e37*/
      dword_A8DAB8 = v4; /*0x5f0e3a*/
      return 1; /*0x5f0e45*/
    }
  }
  else if ( v3 < 0 ) /*0x5f0e48*/
  {
    Debug::Log(); /*0x5f0e4f*/
    NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f0e5c*/
    v6 = dword_A8DAB8; /*0x5f0e61*/
    LOBYTE(v6) = dword_A8DAB8 & 0xFE; /*0x5f0e66*/
    dword_A8DAB8 = v6; /*0x5f0e68*/
  }
  AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f0e77*/
  if ( !NullModemClass::DetectModem((NullModemClass *)&unk_A8EA70, this, a2) ) /*0x5f0e83*/
  {
    Debug::Log(); /*0x5f0e98*/
    nullsub_28(v25); /*0x5f0ea5*/
    String::NormalizeNewlines(); /*0x5f0eaf*/
    StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f0eb9*/
    Modem_field_0x08 = this->Modem_field_0x08; /*0x5f0ebe*/
    if ( Modem_field_0x08 == 14400 ) /*0x5f0ec6*/
    {
      Debug::Log(); /*0x5f1009*/
      this->Modem_field_0x08 = 19200; /*0x5f100e*/
      if ( (dword_A8D5F8 & 2) == 0 && *(_DWORD *)&dword_A8B238 == 1 ) /*0x5f1028*/
        NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f102f*/
      ObjectClass::DetachAndFree((ObjectClass *)&unk_A8EA70); /*0x5f1039*/
      NullModemClass::Init( /*0x5f1058*/
        (int *)&unk_A8EA70,
        *(_DWORD *)this->__pad_0,
        this->Modem_field_0x04,
        (const char *)this + 48,
        this->Modem_field_0x08,
        0,
        8,
        1);
      AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f1067*/
      if ( !NullModemClass::DetectModem((NullModemClass *)&unk_A8EA70, this, a2) ) /*0x5f1073*/
      {
        Debug::Log(); /*0x5f1085*/
        nullsub_28(v25); /*0x5f1092*/
        String::NormalizeNewlines(); /*0x5f109c*/
        StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f10a6*/
        StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6887); /*0x5f10d6*/
        v12 = (int *)GetStringCSF(g_Str_TXT_UNABLE_FIND_MODEM, 0, g_Str_File_NullDlg_CPP, 6887); /*0x5f10ea*/
        Dialog::ShowMessageBox(v12, StringCSF, 0, 0, 0, v27); /*0x5f10eb*/
        goto LABEL_21; /*0x5f10eb*/
      }
    }
    else
    {
      if ( Modem_field_0x08 != 28800 ) /*0x5f0ed1*/
      {
        v17 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6915); /*0x5f0efe*/
        v10 = (int *)GetStringCSF(g_Str_TXT_UNABLE_FIND_MODEM, 0, g_Str_File_NullDlg_CPP, 6915); /*0x5f0f12*/
        Dialog::ShowMessageBox(v10, v17, 0, 0, 0, (int)v25); /*0x5f0f13*/
LABEL_21:
        v8 = dword_A8DAB8; /*0x5f1155*/
        LOBYTE(v8) = dword_A8DAB8 | 1; /*0x5f115a*/
        dword_A8DAB8 = v8; /*0x5f115d*/
        return 0; /*0x5f1169*/
      }
      Debug::Log(); /*0x5f0f1d*/
      this->Modem_field_0x08 = 38400; /*0x5f0f22*/
      if ( (dword_A8D5F8 & 2) == 0 && *(_DWORD *)&dword_A8B238 == 1 ) /*0x5f0f3c*/
        NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f0f43*/
      ObjectClass::DetachAndFree((ObjectClass *)&unk_A8EA70); /*0x5f0f4d*/
      NullModemClass::Init( /*0x5f0f6c*/
        (int *)&unk_A8EA70,
        *(_DWORD *)this->__pad_0,
        this->Modem_field_0x04,
        (const char *)this + 48,
        this->Modem_field_0x08,
        0,
        8,
        1);
      AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f0f7b*/
      if ( !NullModemClass::DetectModem((NullModemClass *)&unk_A8EA70, this, a2) ) /*0x5f0f87*/
      {
        Debug::Log(); /*0x5f0f99*/
        nullsub_28(v25); /*0x5f0fa6*/
        String::NormalizeNewlines(); /*0x5f0fb0*/
        StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f0fba*/
        v18 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6908); /*0x5f0fea*/
        v11 = (int *)GetStringCSF(g_Str_TXT_UNABLE_FIND_MODEM, 0, g_Str_File_NullDlg_CPP, 6908); /*0x5f0ffe*/
        Dialog::ShowMessageBox(v11, v18, 0, 0, 0, v26); /*0x5f0fff*/
        goto LABEL_21; /*0x5f0fff*/
      }
    }
  }
  Debug::Log(); /*0x5f116f*/
  switch ( WaitModemConnection((int)&unk_A8EA70, v3 & 0x80, a2) ) /*0x5f118b*/
  {
    case 0: /*0x5f118b*/
      Debug::Log(); /*0x5f1197*/
      v28 = 1; /*0x5f119f*/
      break; /*0x5f11a4*/
    case 1: /*0x5f118b*/
      Debug::Log(); /*0x5f11ae*/
      v20 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6941); /*0x5f11e1*/
      v13 = (int *)GetStringCSF(aTxtNoCarrier, 0, g_Str_File_NullDlg_CPP, 6941); /*0x5f11f5*/
      Dialog::ShowMessageBox(v13, v20, 0, 0, 0, (int)v25); /*0x5f11f6*/
      goto LABEL_28; /*0x5f11f6*/
    case 3: /*0x5f118b*/
      Debug::Log(); /*0x5f1200*/
      v21 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6947); /*0x5f1233*/
      v14 = (int *)GetStringCSF(aTxtNumberInval, 0, g_Str_File_NullDlg_CPP, 6947); /*0x5f1247*/
      Dialog::ShowMessageBox(v14, v21, 0, 0, 0, (int)v25); /*0x5f1248*/
      goto LABEL_28; /*0x5f1248*/
    case 5: /*0x5f118b*/
      Debug::Log(); /*0x5f1252*/
      v22 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6953); /*0x5f1285*/
      v15 = (int *)GetStringCSF(g_Str_TXT_ERROR_TIMEOUT, 0, g_Str_File_NullDlg_CPP, 6953); /*0x5f1299*/
      Dialog::ShowMessageBox(v15, v22, 0, 0, 0, (int)v25); /*0x5f129a*/
      goto LABEL_28; /*0x5f129a*/
    case 6: /*0x5f118b*/
      Debug::Log(); /*0x5f12a1*/
      v23 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6959); /*0x5f12d4*/
      v16 = (int *)GetStringCSF(aTxtAnsweringCa, 0, g_Str_File_NullDlg_CPP, 6959); /*0x5f12e8*/
      Dialog::ShowMessageBox(v16, v23, 0, 0, 0, (int)v25); /*0x5f12e9*/
LABEL_28:
      v28 = 0; /*0x5f12ee*/
      break; /*0x5f12ee*/
    default:
      break;
  }
  nullsub_28(v25); /*0x5f12f3*/
  String::NormalizeNewlines(); /*0x5f1302*/
  StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f130c*/
  v9 = dword_A8DAB8; /*0x5f1311*/
  LOBYTE(v9) = dword_A8DAB8 | 1; /*0x5f1316*/
  dword_A8DAB8 = v9; /*0x5f1319*/
  return v28; /*0x5f0e36*/
}



// ==== 0x005F1350  AppendStringBuilderChar  this=-  sig=ida-proto ====
int __fastcall StringBuilder_AppendChar(char a1)
{
  int result; // eax

  result = dword_A8EA84; /*0x5f1358*/
  if ( dword_A8EA84 < dword_A8EA80 - 1 ) /*0x5f135f*/
  {
    *(_BYTE *)(dword_A8EA7C + dword_A8EA84) = a1; /*0x5f1367*/
    *(_BYTE *)(dword_A8EA7C + dword_A8EA84 + 1) = 0; /*0x5f1375*/
    return ++dword_A8EA84; /*0x5f137f*/
  }
  return result; /*0x5f1385*/
}



// ==== 0x005F1390  Timer::GetElapsed  this=Timer  sig=csp ====
int __thiscall Timer::GetElapsed(Timer *this)
{
  int v1; // edi

  v1 = *(_DWORD *)&this->__pad_6[2]; /*0x5f1396*/
  if ( *(_DWORD *)this->__pad_0 != -1 ) /*0x5f139c*/
    v1 += Timer::GetTicks() - *(_DWORD *)this->__pad_0; /*0x5f13a8*/
  return v1; /*0x5f13ac*/
}



// ==== 0x005F13B0  sub_5F13B0  this=-  sig=ida-proto ====
int sub_5F13B0()
{
  dword_AC1278 = 0; /*0x5f13b2*/
  dword_AC127C = 0; /*0x5f13b7*/
  dword_AC1280 = 0; /*0x5f13bc*/
  dword_AC1284 = 0; /*0x5f13c1*/
  return 0; /*0x5f13c6*/
}



// ==== 0x005F13D0  sub_5F13D0  this=-  sig=ida-proto ====
void sub_5F13D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5f13dc*/
  dbl_AC12E0 = Math::Sqrt(v0 + v0); /*0x5f13ee*/
}



// ==== 0x005F1400  sub_5F1400  this=-  sig=ida-proto ====
void sub_5F1400()
{
  dbl_AC1338 = dbl_AC12E0 / 60.0; /*0x5f140c*/
}



// ==== 0x005F1420  sub_5F1420  this=-  sig=ida-proto ====
void sub_5F1420()
{
  dbl_AC1320 = 1.0 / dbl_AC1338; /*0x5f142c*/
}



// ==== 0x005F1440  sub_5F1440  this=-  sig=ida-proto ====
void sub_5F1440()
{
  dbl_AC1318 = 0.0174532925199433 * 45.0; /*0x5f144c*/
}



// ==== 0x005F1460  sub_5F1460  this=-  sig=ida-proto ====
void sub_5F1460()
{
  dbl_AC12F0 = 0.0174532925199433 * 60.0; /*0x5f146c*/
}



// ==== 0x005F1480  sub_5F1480  this=-  sig=ida-proto ====
void sub_5F1480()
{
  dbl_AC1270 = 0.0174532925199433 * 90.0; /*0x5f148c*/
}



// ==== 0x005F14A0  sub_5F14A0  this=-  sig=ida-proto ====
__int64 sub_5F14A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC1270 - dbl_AC12F0); /*0x5f14b2*/
  result = Math::RoundToInt(v0 * dbl_AC12E0 * 0.5); /*0x5f14c6*/
  dword_AC1340 = result; /*0x5f14cb*/
  return result; /*0x5f14d0*/
}



// ==== 0x005F14E0  sub_5F14E0  this=-  sig=ida-proto ====
void sub_5F14E0()
{
  dbl_AC12F8 = Math::ArcTan((double)dword_AC1340 * 0.00390625); /*0x5f14f7*/
}



// ==== 0x005F1510  sub_5F1510  this=-  sig=ida-proto ====
void sub_5F1510()
{
  dbl_AC1310 = Math::ArcTan((double)(2 * dword_AC1340) / dbl_AC12E0); /*0x5f1532*/
}



// ==== 0x005F1540  sub_5F1540  this=-  sig=ida-proto ====
__int64 sub_5F1540()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1340) + 0.5); /*0x5f155b*/
  dword_AC1334 = result; /*0x5f1560*/
  return result; /*0x5f1566*/
}



// ==== 0x005F1570  sub_5F1570  this=-  sig=ida-proto ====
int sub_5F1570()
{
  word_AC12D8 = 0; /*0x5f1572*/
  word_AC12DA = 0; /*0x5f1578*/
  return 0; /*0x5f157e*/
}



// ==== 0x005F1580  sub_5F1580  this=-  sig=ida-proto ====
int sub_5F1580()
{
  dword_AC1300 = 0; /*0x5f1582*/
  dword_AC1304 = 0; /*0x5f1587*/
  dword_AC1308 = 0; /*0x5f158c*/
  return 0; /*0x5f1591*/
}



// ==== 0x005F15A0  sub_5F15A0  this=-  sig=ida-proto ====
int sub_5F15A0()
{
  dword_AC1330 = 0; /*0x5f15a5*/
  dword_AC1328 = 128; /*0x5f15af*/
  dword_AC132C = 128; /*0x5f15b4*/
  return 128; /*0x5f15b9*/
}



// ==== 0x005F15C0  ObjectClass::method_5F15C0  this=NullModemClass  sig=csp ====
_DWORD *__thiscall sub_5F15C0(ObjectClass *this, int a2, int a3, int a4, __int16 a5)
{
  this->ambientSoundController[2] = a2; /*0x5f15cc*/
  this->ambientSoundController[3] = a3; /*0x5f15d3*/
  this->? = (void *)a4; /*0x5f15da*/
  LOWORD(this->ambientSoundController[4]) = a5; /*0x5f15e2*/
  this->fallRate = 60; /*0x5f15eb*/
  this->customSound_controller[3] = 60; /*0x5f15ee*/
  this->AbstractClass = &NullModemClass::`vftable'; /*0x5f15f1*/
  this->ambientSoundController[1] = -1; /*0x5f15f7*/
  this->attachedBomb = 0; /*0x5f15fa*/
  this->customSound_controller[0] = 0; /*0x5f15fd*/
  this->? = 0; /*0x5f1600*/
  this->? = 500; /*0x5f1603*/
  this->? = 0; /*0x5f160a*/
  this->? = -1; /*0x5f160d*/
  this->? = 0; /*0x5f1610*/
  this->? = 0; /*0x5f1613*/
  this->occupant = 3000; /*0x5f1616*/
  this->owningHouseIndex = 1200; /*0x5f161d*/
  LOBYTE(this->nextObject) = 43; /*0x5f1624*/
  *(_DWORD *)&this->bombVisible = 0; /*0x5f1628*/
  this->health = 0; /*0x5f162b*/
  this->estimatedHealth = 0; /*0x5f162e*/
  this->ambientSoundController[0] = 0; /*0x5f1631*/
  this->customSound_controller[4] = -1; /*0x5f1634*/
  this->customSound = 1200; /*0x5f1637*/
  this->attachedTag = 0; /*0x5f163e*/
  return &this->AbstractClass; /*0x5f1641*/
}



// ==== 0x005F16E0  NullModemClass::Init  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::Init(int *this, int a2, int a3, const char *a4, int a5, char a6, int a7, int a8)
{
  int v9; // ebp
  _DWORD *v10; // eax
  _DWORD *inited; // eax
  int v12; // ecx
  int v13; // eax
  size_t v14; // ecx
  int v15; // eax
  size_t v16; // edx
  _DWORD *v17; // eax
  void **v18; // esi
  int v19; // ebx
  int v20; // eax
  int v21; // eax
  size_t v23; // [esp-4h] [ebp-14h]
  const char *v24; // [esp+14h] [ebp+4h]

  Debug::Log(); /*0x5f16eb*/
  v9 = 0; /*0x5f16f6*/
  if ( g_ClipboardBuffer ) /*0x5f16fd*/
    this->PacketsSent = NullModemClass::GetMember23(g_ClipboardBuffer); /*0x5f1704*/
  else
    this->PacketsSent = -1; /*0x5f1709*/
  if ( *(this + 14) ) /*0x5f1710*/
  {
    Debug::Log(); /*0x5f17a3*/
  }
  else
  {
    Debug::Log(); /*0x5f171e*/
    v10 = (_DWORD *)__2_YAPAXI_Z(0x54u); /*0x5f1725*/
    if ( v10 ) /*0x5f172f*/
      inited = NullModemClass::initConnection(v10, *(this + 17), *(this + 18), this->Active, *((_WORD *)this + 38)); /*0x5f1744*/
    else
      inited = 0; /*0x5f174b*/
    v12 = *(this + 23); /*0x5f174d*/
    *(this + 14) = (int)inited; /*0x5f1750*/
    inited[10] = v12; /*0x5f1753*/
    *(_DWORD *)(*(this + 14) + 44) = *(this + 24); /*0x5f175c*/
    *(_DWORD *)(*(this + 14) + 48) = *(this + 25); /*0x5f1765*/
    v23 = *(this + 18) * (*(_DWORD *)(*(this + 14) + 28) + 11); /*0x5f1775*/
    *(this + 21) = v23; /*0x5f1776*/
    v13 = __2_YAPAXI_Z(v23); /*0x5f1779*/
    v14 = this->Active; /*0x5f177e*/
    this->PacketsReceived = v13; /*0x5f1781*/
    v15 = __2_YAPAXI_Z(v14); /*0x5f1785*/
    v16 = this->PlayerIndex; /*0x5f178a*/
    this->PlayerIndex = v15; /*0x5f178d*/
    this->LastPacketTime = __2_YAPAXI_Z(v16); /*0x5f1799*/
  }
  *(this + 22) = 0; /*0x5f17ab*/
  this->PacketsReceived = 0; /*0x5f17ae*/
  if ( !g_ClipboardBuffer ) /*0x5f17b7*/
  {
    v17 = (_DWORD *)__2_YAPAXI_Z(0x2088u); /*0x5f17be*/
    if ( v17 ) /*0x5f17c8*/
      g_ClipboardBuffer = (HWND)WinModemClass::Construct(v17); /*0x5f17d1*/
    else
      g_ClipboardBuffer = 0; /*0x5f17d8*/
  }
  if ( a2 > 760 ) /*0x5f17e7*/
  {
    if ( a2 == 1000 ) /*0x5f18c4*/
    {
      v24 = aCom3; /*0x5f18db*/
    }
    else
    {
      if ( a2 != 1016 ) /*0x5f18c9*/
      {
LABEL_35:
        v24 = 0; /*0x5f18cb*/
        goto LABEL_38; /*0x5f18cf*/
      }
      v24 = aCom1; /*0x5f18d1*/
    }
  }
  else
  {
    if ( a2 == 760 ) /*0x5f17ed*/
    {
      v24 = aCom2; /*0x5f18b5*/
      goto LABEL_38; /*0x5f18bd*/
    }
    if ( a2 != 1 ) /*0x5f17f4*/
    {
      if ( a2 == 744 ) /*0x5f17fb*/
      {
        v24 = aCom4; /*0x5f1801*/
        goto LABEL_38; /*0x5f1809*/
      }
      goto LABEL_35; /*0x5f17fb*/
    }
    v18 = (void **)*(this + 13); /*0x5f180e*/
    v24 = a4; /*0x5f1817*/
    if ( v18 ) /*0x5f181b*/
    {
      FileFind::Close(v18); /*0x5f181f*/
      __3_YAXPAX_Z(v18); /*0x5f1825*/
      *(this + 13) = 0; /*0x5f182d*/
    }
    v19 = 0; /*0x5f1830*/
    while ( 1 ) /*0x5f1838*/
    {
      v20 = __2_YAPAXI_Z(0x1Cu); /*0x5f1838*/
      if ( v20 ) /*0x5f1842*/
        v9 = Modem::EnumerateDevices(v20, v19); /*0x5f184c*/
      *(this + 13) = v9; /*0x5f184e*/
      if ( *(_DWORD *)v9 ) /*0x5f1851*/
      {
        if ( !strcmp(a4, *(const char **)v9) ) /*0x5f1862*/
          break; /*0x5f1862*/
      }
      if ( v9 ) /*0x5f188b*/
      {
        FileFind::Close((void **)v9); /*0x5f188f*/
        __3_YAXPAX_Z((void *)v9); /*0x5f1895*/
      }
      ++v19; /*0x5f189d*/
      *(this + 13) = 0; /*0x5f189e*/
      if ( v19 >= 10 ) /*0x5f18a8*/
        goto LABEL_38; /*0x5f18a8*/
      v9 = 0; /*0x5f1834*/
    }
    v24 = *(const char **)(v9 + 4); /*0x5f18af*/
  }
LABEL_38:
  v21 = (*(int (__thiscall **)(HWND, const char *, int, _DWORD, int, int))(*(_DWORD *)g_ClipboardBuffer + 4))( /*0x5f18e3*/
          g_ClipboardBuffer,
          v24,
          a5,
          a6,
          a7,
          a8);
  this->PacketsSent = v21; /*0x5f190b*/
  if ( v21 == -1 ) /*0x5f190e*/
    return 0; /*0x5f1913*/
  Debug::Log(); /*0x5f191e*/
  NullModemClass::closeConnection((_DWORD *)*(this + 14), this->PacketsSent); /*0x5f192d*/
  *(this + 15) = 1; /*0x5f1937*/
  return 1; /*0x5f1910*/
}



// ==== 0x005F1950  NullModemClass::COMStub  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::COMStub(NullModemClass *this)
{
  return *((_DWORD *)this + 15); /*0x5f1953*/
}



// ==== 0x005F1960  ObjectClass::FreeResources  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::FreeResources(ObjectClass *this)
{
  BombClass *attachedBomb; // ecx

  attachedBomb = this->attachedBomb; /*0x5f1966*/
  if ( attachedBomb ) /*0x5f196b*/
  {
    (*(void (__thiscall **)(BombClass *, int))attachedBomb->AbstractClass)(attachedBomb, 1); /*0x5f1971*/
    this->attachedBomb = 0; /*0x5f1973*/
  }
  if ( this->customSound_controller[0] ) /*0x5f1976*/
  {
    __3_YAXPAX_Z((void *)this->customSound_controller[0]); /*0x5f197e*/
    this->customSound_controller[0] = 0; /*0x5f1986*/
  }
  if ( this->? ) /*0x5f1989*/
  {
    __3_YAXPAX_Z(this->?); /*0x5f1991*/
    this->? = 0; /*0x5f1999*/
  }
  if ( this->? ) /*0x5f199c*/
  {
    __3_YAXPAX_Z(this->?); /*0x5f19a4*/
    this->? = 0; /*0x5f19ac*/
  }
  this->ambientSoundController[0] = 0; /*0x5f19af*/
  return 1; /*0x5f19b2*/
}



// ==== 0x005F19C0  EventClass::CheckFlag  this=EventClass  sig=csp ====
int __thiscall EventClass::CheckFlag(EventClass *this)
{
  EventClass **EventClass_field_0x38; // eax

  EventClass_field_0x38 = (EventClass **)this->EventClass_field_0x38; /*0x5f19c0*/
  if ( EventClass_field_0x38 ) /*0x5f19c5*/
    EventClass::serializeEvent(EventClass_field_0x38[1]); /*0x5f19ca*/
  return 1; /*0x5f19d4*/
}



// ==== 0x005F19E0  Modem::OpenPort  this=Modem  sig=csp ====
int __thiscall Modem::OpenPort(Modem *this, _DWORD *a2)
{
  int v3; // ebp
  WinModemClass *v4; // eax
  int v6; // eax
  int v7; // eax
  const char *v8; // ebx
  void *v9; // esi
  int v10; // eax
  int v11; // edi
  int v12; // eax
  _DWORD *v15; // [esp+18h] [ebp+4h]

  v3 = 0; /*0x5f19e7*/
  if ( g_ClipboardBuffer ) /*0x5f19f5*/
  {
    SerialPort::Close((SerialPort *)g_ClipboardBuffer); /*0x5f1a1e*/
  }
  else
  {
    v4 = (WinModemClass *)__2_YAPAXI_Z(0x2088u); /*0x5f19fc*/
    if ( v4 ) /*0x5f1a06*/
      g_ClipboardBuffer = (HWND)WinModemClass::Construct(v4); /*0x5f1a0f*/
    else
      g_ClipboardBuffer = 0; /*0x5f1a16*/
  }
  v15 = (_DWORD *)a2[2]; /*0x5f1a2a*/
  v6 = *a2; /*0x5f1a2e*/
  if ( (int)*a2 > 760 )
  {
    v12 = v6 - 1000; /*0x5f1b01*/
    if ( v12 ) /*0x5f1b06*/
    {
      if ( v12 != 16 ) /*0x5f1b0b*/
        return 1; /*0x5f1b0b*/
      v8 = aCom1_0; /*0x5f1b1a*/
    }
    else
    {
      v8 = aCom3_0; /*0x5f1b21*/
    }
  }
  else
  {
    if ( *a2 != 760 )
    {
      v7 = v6 - 1; /*0x5f1a41*/
      if ( !v7 )
      {
        v9 = (void *)*((_DWORD *)this + 13); /*0x5f1a59*/
        v8 = (const char *)(a2 + 12); /*0x5f1a5c*/
        if ( v9 ) /*0x5f1a61*/
        {
          FileFind::Close(*((void ***)this + 13)); /*0x5f1a65*/
          __3_YAXPAX_Z(v9); /*0x5f1a6b*/
          *((_DWORD *)this + 13) = 0; /*0x5f1a73*/
        }
        while ( 1 )
        {
          v10 = __2_YAPAXI_Z(0x1Cu); /*0x5f1a78*/
          v11 = v10 ? Modem::EnumerateDevices(v10, v3) : 0;
          *((_DWORD *)this + 13) = v11; /*0x5f1a96*/
          if ( *(_DWORD *)v11 ) /*0x5f1a99*/
          {
            if ( !strcmp(v8, *(const char **)v11) ) /*0x5f1aa7*/
              break; /*0x5f1aa7*/
          }
          if ( v11 ) /*0x5f1ad0*/
          {
            FileFind::Close((void **)v11); /*0x5f1ad4*/
            __3_YAXPAX_Z((void *)v11); /*0x5f1ada*/
          }
          ++v3; /*0x5f1ae6*/
          *((_DWORD *)this + 13) = 0; /*0x5f1aea*/
          if ( v3 >= 10 ) /*0x5f1af1*/
            goto LABEL_29; /*0x5f1af1*/
        }
        v8 = *(const char **)(v11 + 4); /*0x5f1af5*/
        goto LABEL_29; /*0x5f1af8*/
      }
      if ( v7 == 743 ) /*0x5f1a49*/
      {
        v8 = aCom4_0; /*0x5f1a4f*/
        goto LABEL_29; /*0x5f1a54*/
      }
      return 1; /*0x5f1b17*/
    }
    v8 = aCom2_0; /*0x5f1afa*/
  }
LABEL_29:
  if ( (*(int (__thiscall **)(HWND, const char *, _DWORD *, _DWORD, int, int))(*(_DWORD *)g_ClipboardBuffer + 4))( /*0x5f1b40*/
         g_ClipboardBuffer,
         v8,
         v15,
         0,
         8,
         1) == -1 )
    return 1; /*0x5f1b45*/
  SerialPort::Close((SerialPort *)g_ClipboardBuffer); /*0x5f1b55*/
  return 0; /*0x5f1b0d*/
}



// ==== 0x005F1B70  ObjectClass::DetachAndFree  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::DetachAndFree(ObjectClass *this)
{
  int result; // eax

  if ( this->ambientSoundController[1] != -1 && g_ClipboardBuffer ) /*0x5f1b81*/
  {
    SerialPort::Close((SerialPort *)g_ClipboardBuffer); /*0x5f1b83*/
    if ( g_ClipboardBuffer ) /*0x5f1b90*/
      (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f1b96*/
    g_ClipboardBuffer = 0; /*0x5f1b98*/
    this->ambientSoundController[1] = -1; /*0x5f1ba4*/
    return ObjectClass::FreeResources(this); /*0x5f1bab*/
  }
  return result; /*0x5f1bb0*/
}



// ==== 0x005F1BC0  NullModemClass::Connect  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::Connect(NullModemClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // edx
  int result; // eax

  *((_DWORD *)this + 24) = a3; /*0x5f1bc8*/
  *((_DWORD *)this + 25) = a4; /*0x5f1bcf*/
  v5 = *((_DWORD *)this + 14); /*0x5f1bd2*/
  *((_DWORD *)this + 23) = a2; /*0x5f1bd5*/
  *(_DWORD *)(v5 + 40) = a2; /*0x5f1bd8*/
  *(_DWORD *)(*((_DWORD *)this + 14) + 44) = *((_DWORD *)this + 24); /*0x5f1be1*/
  result = *((_DWORD *)this + 14); /*0x5f1be4*/
  *(_DWORD *)(result + 48) = *((_DWORD *)this + 25); /*0x5f1bea*/
  return result; /*0x5f1bed*/
}



// ==== 0x005F1BF0  Stream::WriteBlock  this=Stream  sig=csp ====
int __thiscall Stream::WriteBlock(int *this, int a2, int a3, int a4)
{
  int result; // eax

  if ( !*(this + 15) ) /*0x5f1bf3*/
    return 0; /*0x5f1bfa*/
  result = (*(int (__thiscall **)(_DWORD, int, int, int, _DWORD))(*(_DWORD *)*(this + 14) + 8))( /*0x5f1c16*/
             *(this + 14),
             a2,
             a3,
             a4,
             0);
  if ( !result ) /*0x5f1c1b*/
    ++*(this + 26); /*0x5f1c1d*/
  return result; /*0x5f1bfc*/
}



// ==== 0x005F1C30  ObjectTypeClass::CreateInstance  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::CreateInstance(ObjectTypeClass *this, int a2, int a3)
{
  if ( *(_DWORD *)&this->? ) /*0x5f1c30*/
    return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)&this->?[8] + 16))(*(_DWORD *)&this->?[8], a2, a3); /*0x5f1c4b*/
  else
    return 0; /*0x5f1c37*/
}



// ==== 0x005F1C60  NullModemClass::ReadPacket  this=NullModemClass  sig=csp ====
int __thiscall Stream_ReadPacket(int this)
{
  unsigned int v3; // ecx
  int v4; // edi
  char *v5; // eax
  int v6; // ecx
  char *v7; // ebp
  int v8; // edi
  int v9; // ecx
  int v10; // edx
  int v11; // ebx
  int v12; // edi
  int v13; // ecx
  int v14; // edi
  int v15; // ecx
  unsigned int v16; // [esp+14h] [ebp-4h]

  if ( !*(_DWORD *)(this + 60) ) /*0x5f1c69*/
    return 0; /*0x5f1c79*/
  v3 = WinModemClass::ReadBytes( /*0x5f1c97*/
         *(_DWORD *)(this + 88) + *(_DWORD *)(this + 80),
         *(_DWORD *)(this + 84) - *(_DWORD *)(this + 88))
     + *(_DWORD *)(this + 88);
  *(_DWORD *)(this + 88) = v3; /*0x5f1c9c*/
  if ( v3 < 0xB ) /*0x5f1c9f*/
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 56) + 20))(*(_DWORD *)(this + 56)); /*0x5f1c9f*/
  v4 = 0; /*0x5f1cb4*/
  if ( (int)(v3 - 2) < 0 ) /*0x5f1cb8*/
    goto LABEL_11; /*0x5f1cb8*/
  v5 = *(char **)(this + 80); /*0x5f1cba*/
  while ( *(_WORD *)&v5[v4] != 0xDABD ) /*0x5f1cc3*/
  {
    if ( ++v4 > (int)(v3 - 2) ) /*0x5f1cc8*/
      goto LABEL_11; /*0x5f1cc8*/
  }
  if ( v4 == -1 ) /*0x5f1ccf*/
  {
LABEL_11:
    memcpy(*(void **)(this + 80), (const void *)(*(_DWORD *)(this + 80) + v4), 1u); /*0x5f1cd1*/
    v6 = *(_DWORD *)(this + 56); /*0x5f1ce0*/
    *(_DWORD *)(this + 88) = 1; /*0x5f1ce3*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 20))(v6); /*0x5f1cef*/
  }
  else if ( v3 - v4 >= 6 ) /*0x5f1d05*/
  {
    v7 = &v5[v4]; /*0x5f1d36*/
    if ( *(_WORD *)&v5[v4 + 4] == 0xDEAF ) /*0x5f1d39*/
    {
      v10 = *(_DWORD *)(this + 8); /*0x5f1d6a*/
      v11 = *((unsigned __int16 *)v7 + 1); /*0x5f1d6d*/
      if ( v11 <= v10 ) /*0x5f1d75*/
      {
        v16 = v11 + v4 + 10; /*0x5f1dbb*/
        if ( v16 > v3 ) /*0x5f1dbf*/
        {
          if ( v4 ) /*0x5f1dc3*/
          {
            memcpy(v5, &v5[v4], v3 - v4); /*0x5f1dcc*/
            *(_DWORD *)(this + 88) -= v4; /*0x5f1dd9*/
          }
          return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 56) + 20))(*(_DWORD *)(this + 56)); /*0x5f1cb0*/
        }
        if ( Audio_Read(v7 + 6, v11) == *(_DWORD *)&v5[v11 + 6 + v4] ) /*0x5f1e06*/
        {
          if ( !(*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 56) + 12))( /*0x5f1e58*/
                  *(_DWORD *)(this + 56),
                  *(_DWORD *)(this + 80) + v4 + 6,
                  v11) )
            ++*(_DWORD *)(this + 108); /*0x5f1e5f*/
          memcpy(*(void **)(this + 80), (const void *)(*(_DWORD *)(this + 80) + v16), *(_DWORD *)(this + 88) - v16); /*0x5f1e74*/
          *(_DWORD *)(this + 88) -= v16; /*0x5f1e81*/
          return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 56) + 20))(*(_DWORD *)(this + 56)); /*0x5f1e8b*/
        }
        else
        {
          ++*(_DWORD *)(this + 112); /*0x5f1e11*/
          Debug::Log(aSerialPacketFa); /*0x5f1e14*/
          v14 = v4 + 2; /*0x5f1e1f*/
          memcpy(*(void **)(this + 80), (const void *)(*(_DWORD *)(this + 80) + v14), *(_DWORD *)(this + 88) - v14); /*0x5f1e2a*/
          v15 = *(_DWORD *)(this + 56); /*0x5f1e32*/
          *(_DWORD *)(this + 88) -= v14; /*0x5f1e3a*/
          return (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 20))(v15); /*0x5f1e3f*/
        }
      }
      else
      {
        Debug::Log("Serial packet length too long by %d bytes\n", v11 - v10); /*0x5f1d7f*/
        v12 = v4 + 2; /*0x5f1d8a*/
        memcpy(*(void **)(this + 80), (const void *)(*(_DWORD *)(this + 80) + v12), *(_DWORD *)(this + 88) - v12); /*0x5f1d95*/
        v13 = *(_DWORD *)(this + 56); /*0x5f1d9d*/
        *(_DWORD *)(this + 88) -= v12; /*0x5f1da5*/
        return (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 20))(v13); /*0x5f1daa*/
      }
    }
    else
    {
      v8 = v4 + 2; /*0x5f1d3b*/
      memcpy(v5, &v5[v8], v3 - v8); /*0x5f1d46*/
      v9 = *(_DWORD *)(this + 56); /*0x5f1d4e*/
      *(_DWORD *)(this + 88) -= v8; /*0x5f1d56*/
      return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 20))(v9); /*0x5f1d5b*/
    }
  }
  else
  {
    memcpy(v5, &v5[v4], v3 - v4); /*0x5f1d0d*/
    *(_DWORD *)(this + 88) -= v4; /*0x5f1d1a*/
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 56) + 20))(*(_DWORD *)(this + 56)); /*0x5f1d24*/
  }
}



// ==== 0x005F1EA0  Count::GetCountQueue  this=Count  sig=csp ====
int __thiscall Count::GetCountQueue(Count *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 14); /*0x5f1ea0*/
  if ( v1 ) /*0x5f1ea5*/
    return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 40); /*0x5f1eaa*/
  else
    return 0; /*0x5f1eae*/
}



// ==== 0x005F1EE0  NullModemClass::GetBridgeIndexThunk  this=NullModemClass  sig=csp ====
int __thiscall CellClass::GetBridgeIndexThunk(NullModemClass *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 14); /*0x5f1ee0*/
  if ( v1 ) /*0x5f1ee5*/
    return CellClass::GetBridgeIndex(*(CellClass **)(v1 + 4)); /*0x5f1eea*/
  else
    return 0; /*0x5f1eef*/
}



// ==== 0x005F1F00  NullModemClass::Flush  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::Flush(NullModemClass *this, int a2)
{
  int result; // eax

  result = *((_DWORD *)this + 14); /*0x5f1f00*/
  if ( result ) /*0x5f1f05*/
    return Rect::SetRedraw(*(Rect **)(result + 4), 1); /*0x5f1f0c*/
  return result; /*0x5f1f11*/
}



// ==== 0x005F1F20  ObjectClass::method_5F1F20  this=ObjectClass  sig=csp ====
int __thiscall sub_5F1F20(ObjectClass *this)
{
  int v2; // esi
  int *vtable1; // ecx
  int TileIndex; // eax

  v2 = 0; /*0x5f1f27*/
  vtable1 = (int *)this->attachedBomb->?; /*0x5f1f2c*/
  if ( vtable1[10] <= 0 ) /*0x5f1f34*/
    return 0; /*0x5f1f5b*/
  while ( 1 ) /*0x5f1f37*/
  {
    TileIndex = Terrain::GetTileIndex((Terrain *)vtable1, v2); /*0x5f1f37*/
    if ( TileIndex ) /*0x5f1f3e*/
    {
      if ( !*(_BYTE *)(*(_DWORD *)(TileIndex + 20) + 2) && (*(_BYTE *)TileIndex & 2) == 0 ) /*0x5f1f4d*/
        break; /*0x5f1f4d*/
    }
    ++v2; /*0x5f1f52*/
    vtable1 = (int *)this->attachedBomb->?; /*0x5f1f53*/
    if ( v2 >= vtable1[10] ) /*0x5f1f59*/
      return 0; /*0x5f1f59*/
  }
  return *(_DWORD *)(TileIndex + 20); /*0x5f1f5b*/
}



// ==== 0x005F1F70  NullModemClass::SendPacket  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::SendPacket(NullModemClass *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int result; // eax

  result = *((_DWORD *)this + 14); /*0x5f1f70*/
  if ( result ) /*0x5f1f75*/
    return EventClass::SetData(*(EventClass **)(result + 4), a3, a4, a5, a6, a7); /*0x5f1f93*/
  return result; /*0x5f1f98*/
}



// ==== 0x005F1FA0  NullModemClass::DetectModem  this=NullModemClass  sig=csp ====
char __thiscall NullModemClass::DetectModem(NullModemClass *this, _DWORD *a2, int a3)
{
  wchar_t *StringCSF; // eax
  Dialog *MessageBox; // eax
  Dialog *v6; // edi
  int v7; // ebp
  Dialog *v8; // ecx
  _DWORD *v10; // esi
  char *v11; // esi
  int *v12; // eax
  int v13; // edx
  int *v14; // eax
  int v15; // eax
  int *v16; // eax
  int *v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // esi
  int *v21; // eax
  int *v22; // eax
  int *v23; // [esp+BCh] [ebp-220h]
  int *v24; // [esp+BCh] [ebp-220h]
  wchar_t *v25; // [esp+C0h] [ebp-21Ch]
  wchar_t *v26; // [esp+C0h] [ebp-21Ch]
  wchar_t *v27; // [esp+C0h] [ebp-21Ch]
  wchar_t *v28; // [esp+C0h] [ebp-21Ch]
  wchar_t *v29; // [esp+C0h] [ebp-21Ch]
  wchar_t *v30; // [esp+C0h] [ebp-21Ch]
  wchar_t *v31; // [esp+C0h] [ebp-21Ch]
  wchar_t *v32; // [esp+C0h] [ebp-21Ch]
  wchar_t *v33; // [esp+C4h] [ebp-218h]
  wchar_t *v34; // [esp+C4h] [ebp-218h]
  wchar_t *v35; // [esp+C4h] [ebp-218h]
  wchar_t *v36; // [esp+C4h] [ebp-218h]
  wchar_t *v37; // [esp+C4h] [ebp-218h]
  wchar_t *v38; // [esp+C4h] [ebp-218h]
  wchar_t *v39; // [esp+C4h] [ebp-218h]
  int v40; // [esp+D0h] [ebp-20Ch]
  char *Block; // [esp+E0h] [ebp-1FCh]
  Dialog *v42; // [esp+E4h] [ebp-1F8h]
  int v43; // [esp+E8h] [ebp-1F4h]
  _BYTE v44[240]; // [esp+ECh] [ebp-1F0h] BYREF
  char v45[256]; // [esp+1DCh] [ebp-100h] BYREF

  v43 = 0; /*0x5f1fb1*/
  Debug::Log(); /*0x5f1fb9*/
  if ( !NullModemClass::sendData((NullModemClass *)g_ClipboardBuffer) ) /*0x5f1fce*/
    return 0; /*0x5f1fce*/
  StringCSF = GetStringCSF(aTxtInitializin, 0, g_Str_File_NullMgr_CPP, 1134); /*0x5f1fe7*/
  MessageBox = (Dialog *)CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5f1ff0*/
  v6 = MessageBox; /*0x5f1ff5*/
  v42 = MessageBox; /*0x5f1ff9*/
  if ( !MessageBox ) /*0x5f1ffd*/
  {
LABEL_7:
    NullModemClass::receiveData((NullModemClass *)g_ClipboardBuffer); /*0x5f2118*/
    return 0; /*0x5f212f*/
  }
  Dialog::Show(MessageBox); /*0x5f2005*/
  Debug::Log(); /*0x5f200f*/
  (*(void (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f2033*/
    g_ClipboardBuffer,
    aAte1,
    13,
    v44,
    81,
    90,
    2,
    -1);
  Debug::Log(); /*0x5f2046*/
  Debug::Log(); /*0x5f2050*/
  (*(void (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f2074*/
    g_ClipboardBuffer,
    aAtq0,
    13,
    v44,
    81,
    90,
    2,
    -1);
  Debug::Log(); /*0x5f2087*/
  Debug::Log(); /*0x5f2091*/
  (*(void (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f20b5*/
    g_ClipboardBuffer,
    aAtv1,
    13,
    v44,
    81,
    90,
    2,
    -1);
  Debug::Log(); /*0x5f20c8*/
  *((_DWORD *)this + 7) = 1; /*0x5f20d5*/
  this->Active = 1; /*0x5f20d8*/
  v7 = (*(int (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f20fd*/
         g_ClipboardBuffer,
         word_832678,
         13,
         v44,
         81,
         180,
         2,
         -1);
  if ( v7 < 2 ) /*0x5f2102*/
  {
    Debug::Log(); /*0x5f2109*/
LABEL_5:
    v8 = v6; /*0x5f2111*/
LABEL_6:
    Dialog::Destroy(v8); /*0x5f2113*/
    goto LABEL_7; /*0x5f2113*/
  }
  v10 = a2; /*0x5f2132*/
  if ( a2[4] == -1 ) /*0x5f213d*/
  {
    v7 = (*(int (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f2161*/
           g_ClipboardBuffer,
           &g_INI_DefaultBuffer,
           13,
           v44,
           81,
           300,
           1,
           -1);
  }
  else
  {
    Debug::Log(); /*0x5f216d*/
    Block = (char *)__2_YAPAXI_Z(strlen(*(const char **)(dword_A8DB50 + 4 * a2[4])) + 2); /*0x5f219f*/
    strcpy(Block, *(const char **)(dword_A8DB50 + 4 * a2[4])); /*0x5f21ba*/
    v11 = strtok(Block, asc_832630); /*0x5f21c8*/
    if ( v11 ) /*0x5f21cf*/
    {
      while ( 1 ) /*0x5f21db*/
      {
        Debug::Log(); /*0x5f21db*/
        v7 = (*(int (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f21fe*/
               g_ClipboardBuffer,
               v11,
               13,
               v44,
               81,
               90,
               1,
               -1);
        Debug::Log(); /*0x5f2211*/
        if ( v7 < 2 ) /*0x5f221c*/
          break; /*0x5f221c*/
        v11 = strtok(0, asc_832630); /*0x5f222a*/
        if ( !v11 ) /*0x5f2231*/
          goto LABEL_18; /*0x5f2231*/
      }
      v33 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1215); /*0x5f2257*/
      v25 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1215); /*0x5f226e*/
      v12 = (int *)GetStringCSF(aTxtErrorNoInit, 0, g_Str_File_NullMgr_CPP, 1215); /*0x5f2280*/
      if ( Dialog::ShowMessageBox(v12, v25, v33, 0, 0, v40) ) /*0x5f228a*/
      {
        __3_YAXPAX_Z(Block); /*0x5f2298*/
        v8 = v42; /*0x5f229d*/
        goto LABEL_6; /*0x5f22a4*/
      }
      v43 = 1; /*0x5f22a9*/
    }
LABEL_18:
    __3_YAXPAX_Z(Block); /*0x5f22b1*/
    v10 = a2; /*0x5f22bb*/
    v6 = v42; /*0x5f22c2*/
  }
  if ( *v10 == 1 ) /*0x5f22cc*/
  {
    v13 = *((_DWORD *)this + 13); /*0x5f22d2*/
    if ( v13 ) /*0x5f22d7*/
    {
      strcpy(v45, "AT"); /*0x5f22e9*/
      memset(&v45[3], 0, 253); /*0x5f2306*/
      if ( *(_DWORD *)(v13 + 24) ) /*0x5f2309*/
      {
        Debug::Log(); /*0x5f2319*/
        strcpy(&v45[2], *(const char **)(*((_DWORD *)this + 13) + 24)); /*0x5f2346*/
        v7 = (*(int (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f236d*/
               g_ClipboardBuffer,
               v45,
               13,
               v44,
               81,
               60,
               1,
               -1);
        Debug::Log(); /*0x5f2380*/
        if ( v7 != 2 && v7 != 3 ) /*0x5f2390*/
        {
          v34 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1247); /*0x5f23b4*/
          v26 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1247); /*0x5f23cb*/
          v14 = (int *)GetStringCSF(aTxtNoFlowContr, 0, g_Str_File_NullMgr_CPP, 1247); /*0x5f23dd*/
          if ( Dialog::ShowMessageBox(v14, v26, v34, 0, 0, v40) ) /*0x5f23e7*/
            goto LABEL_47; /*0x5f23ee*/
        }
        v10 = a2; /*0x5f23f4*/
      }
      v15 = *((_DWORD *)this + 13); /*0x5f2400*/
      if ( v10[6] ) /*0x5f23fb*/
      {
        if ( !*(_DWORD *)(v15 + 16) ) /*0x5f240e*/
          goto LABEL_37; /*0x5f240e*/
        Debug::Log(); /*0x5f2419*/
        strcpy(&v45[2], *(const char **)(*((_DWORD *)this + 13) + 16)); /*0x5f2446*/
        (*(void (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f246a*/
          g_ClipboardBuffer,
          v45,
          13,
          v44,
          81,
          60,
          1,
          -1);
        Debug::Log(); /*0x5f247e*/
        if ( v7 != 2 && v7 != 3 ) /*0x5f2492*/
        {
          v35 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1266); /*0x5f24ba*/
          v27 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1266); /*0x5f24d1*/
          v16 = (int *)GetStringCSF(aTxtNoCompEnabl, 0, g_Str_File_NullMgr_CPP, 1266); /*0x5f24e3*/
          if ( Dialog::ShowMessageBox(v16, v27, v35, 0, 0, v40) ) /*0x5f24ed*/
          {
            v8 = v42; /*0x5f24fa*/
            goto LABEL_6; /*0x5f24fe*/
          }
        }
      }
      else
      {
        if ( !*(_DWORD *)(v15 + 20) ) /*0x5f2508*/
          goto LABEL_37; /*0x5f2508*/
        Debug::Log(); /*0x5f2513*/
        strcpy(&v45[2], *(const char **)(*((_DWORD *)this + 13) + 20)); /*0x5f2540*/
        (*(void (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f2564*/
          g_ClipboardBuffer,
          v45,
          13,
          v44,
          81,
          60,
          1,
          -1);
        Debug::Log(); /*0x5f2578*/
        if ( v7 != 2 && v7 != 3 ) /*0x5f2588*/
        {
          v36 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1281); /*0x5f25ac*/
          v28 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1281); /*0x5f25c3*/
          v17 = (int *)GetStringCSF(aTxtNoCompDisab, 0, g_Str_File_NullMgr_CPP, 1281); /*0x5f25d5*/
          if ( Dialog::ShowMessageBox(v17, v28, v36, 0, 0, v40) ) /*0x5f25df*/
            goto LABEL_47; /*0x5f25e6*/
        }
      }
      v10 = a2; /*0x5f25ec*/
LABEL_37:
      v18 = *((_DWORD *)this + 13); /*0x5f25f3*/
      if ( v10[7] ) /*0x5f25f3*/
      {
        if ( *(_DWORD *)(v18 + 8) ) /*0x5f2601*/
        {
          Debug::Log(); /*0x5f2611*/
          strcpy(&v45[2], *(const char **)(*((_DWORD *)this + 13) + 8)); /*0x5f263e*/
          (*(void (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f2662*/
            g_ClipboardBuffer,
            v45,
            13,
            v44,
            81,
            60,
            1,
            -1);
          Debug::Log(); /*0x5f2676*/
          if ( v7 != 2 && v7 != 3 ) /*0x5f268a*/
          {
            v37 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1301); /*0x5f26b2*/
            v29 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1301); /*0x5f26c9*/
            v23 = (int *)GetStringCSF(aTxtNoEcEnableR, 0, g_Str_File_NullMgr_CPP, 1301); /*0x5f26e0*/
            v19 = Dialog::ShowMessageBox(v23, v29, v37, 0, 0, v40); /*0x5f26e5*/
            goto LABEL_46; /*0x5f26e5*/
          }
        }
      }
      else if ( *(_DWORD *)(v18 + 12) ) /*0x5f26ea*/
      {
        Debug::Log(); /*0x5f26fa*/
        strcpy(&v45[2], *(const char **)(*((_DWORD *)this + 13) + 12)); /*0x5f2727*/
        (*(void (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f274b*/
          g_ClipboardBuffer,
          v45,
          13,
          v44,
          81,
          60,
          1,
          -1);
        Debug::Log(); /*0x5f275f*/
        if ( v7 != 2 && v7 != 3 ) /*0x5f276f*/
        {
          v38 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1316); /*0x5f2793*/
          v30 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1316); /*0x5f27aa*/
          v24 = (int *)GetStringCSF(aTxtNoEcDisable, 0, g_Str_File_NullMgr_CPP, 1316); /*0x5f27c1*/
          v19 = Dialog::ShowMessageBox(v24, v30, v38, 0, 0, v40); /*0x5f27c6*/
LABEL_46:
          if ( v19 ) /*0x5f27cd*/
          {
LABEL_47:
            v8 = v42; /*0x5f27cf*/
            goto LABEL_6; /*0x5f27d3*/
          }
        }
      }
      v6 = v42; /*0x5f27d8*/
    }
  }
  Debug::Log(); /*0x5f27dc*/
  v20 = (*(int (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f2808*/
          g_ClipboardBuffer,
          aAts00,
          13,
          v44,
          81,
          90,
          2,
          -1);
  Debug::Log(); /*0x5f281a*/
  if ( v20 != 2 ) /*0x5f2825*/
  {
    v39 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1334); /*0x5f2849*/
    v31 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1334); /*0x5f2860*/
    v21 = (int *)GetStringCSF(aTxtErrorNoDisa, 0, g_Str_File_NullMgr_CPP, 1334); /*0x5f2872*/
    if ( Dialog::ShowMessageBox(v21, v31, v39, 0, 0, v40) ) /*0x5f287c*/
      goto LABEL_5; /*0x5f2883*/
    ++v43; /*0x5f2889*/
  }
  if ( v43 >= 3 ) /*0x5f2892*/
  {
    v32 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullMgr_CPP, 1347); /*0x5f28b8*/
    v22 = (int *)GetStringCSF(aTxtErrorTooMan, 0, g_Str_File_NullMgr_CPP, 1347); /*0x5f28ca*/
    Dialog::ShowMessageBox(v22, v32, 0, 0, 0, v40); /*0x5f28d4*/
    goto LABEL_5; /*0x5f28d9*/
  }
  Dialog::Destroy(v6); /*0x5f28e0*/
  Debug::Log(); /*0x5f28ea*/
  NullModemClass::receiveData((NullModemClass *)g_ClipboardBuffer); /*0x5f28f8*/
  if ( (*(int (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f291f*/
         g_ClipboardBuffer,
         word_832678,
         13,
         v44,
         81,
         90,
         2,
         -1) >= 2 )
    return 1; /*0x5f2940*/
  Debug::Log(); /*0x5f2926*/
  return 0; /*0x5f2123*/
}



// ==== 0x005F2950  Dialog::RunModemDialing  this=Dialog  sig=csp ====
int __thiscall Dialog::RunModemDialing(Dialog *this, int a2, int a3, char a4)
{
  char v5; // bl
  int v6; // esi
  wchar_t *StringCSF; // eax
  LPARAM v8; // ebp
  wchar_t *v9; // eax
  HWND MessageBox; // eax
  int v11; // ebp
  TechnoTypeClass *v12; // ecx
  HWND v13; // ecx
  int v15; // [esp+1Ch] [ebp-108h]
  __int16 Buffer; // [esp+2Ch] [ebp-F8h] BYREF
  char v17; // [esp+2Eh] [ebp-F6h]
  HWND hWnd; // [esp+30h] [ebp-F4h]
  char Source[240]; // [esp+34h] [ebp-F0h] BYREF

  v5 = 1; /*0x5f2961*/
  v6 = 3; /*0x5f2963*/
  Debug::Log(); /*0x5f2968*/
  if ( a4 == 1 ) /*0x5f2979*/
    StringCSF = GetStringCSF((wchar_t *)aTxtModemConner, 0, g_Str_File_NullMgr_CPP, 1409); /*0x5f298c*/
  else
    StringCSF = GetStringCSF(aTxtDialing, 0, g_Str_File_NullMgr_CPP, 1411); /*0x5f299f*/
  v8 = (LPARAM)StringCSF; /*0x5f29ba*/
  g_NetworkTestFlag = 0; /*0x5f29bc*/
  v9 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1415); /*0x5f29c3*/
  MessageBox = CreateMessageBox(v8, (LPARAM)v9, (LONG)&g_NetworkTestFlag); /*0x5f29cc*/
  hWnd = MessageBox; /*0x5f29d3*/
  if ( !MessageBox ) /*0x5f29d7*/
    return v6; /*0x5f29d7*/
  Dialog::Show((Dialog *)MessageBox); /*0x5f29df*/
  Debug::Log(); /*0x5f29e9*/
  (*(void (__thiscall **)(HWND, int))(*(_DWORD *)g_ClipboardBuffer + 8))(g_ClipboardBuffer, a3); /*0x5f2a01*/
  Debug::Log(); /*0x5f2a09*/
  (*(void (__thiscall **)(HWND, int, char *, int, int))(*(_DWORD *)g_ClipboardBuffer + 20))( /*0x5f2a24*/
    g_ClipboardBuffer,
    60,
    Source,
    81,
    -1);
  Debug::Log(); /*0x5f2a2c*/
  (*(void (__thiscall **)(HWND, int))(*(_DWORD *)g_ClipboardBuffer + 24))(g_ClipboardBuffer, a2); /*0x5f2a44*/
  (*(void (__thiscall **)(HWND, int (*)()))(*(_DWORD *)g_ClipboardBuffer + 36))(g_ClipboardBuffer, PumpEventLoop); /*0x5f2a54*/
  g_NetworkTestFlag = 0; /*0x5f2a57*/
  v11 = *(_DWORD *)&this->__pad_10[20]; /*0x5f2a5e*/
  Debug::Log(); /*0x5f2a66*/
  while ( 1 ) /*0x5f2a6e*/
  {
    if ( (unsigned __int8)Dialog::PumpMessages() == 1 || g_NetworkTestFlag ) /*0x5f2a82*/
    {
      v13 = g_ClipboardBuffer; /*0x5f2c72*/
      v6 = 6; /*0x5f2c78*/
      if ( g_ClipboardBuffer ) /*0x5f2c7f*/
      {
LABEL_34:
        v17 = 0; /*0x5f2c81*/
        Buffer = word_8327A0; /*0x5f2c8d*/
        WinModemClass::WriteSerial((int *)v13, &Buffer, 2u); /*0x5f2c99*/
      }
LABEL_35:
      Debug::Log(); /*0x5f2c9e*/
      goto LABEL_36; /*0x5f2ca3*/
    }
    LOBYTE(v12) = 0; /*0x5f2a88*/
    ScreenSaver::Process(v12, v15); /*0x5f2a8a*/
    memset(Source, 0, sizeof(Source)); /*0x5f2a9c*/
    v11 = (*(int (__thiscall **)(HWND, int, char *, int, int))(*(_DWORD *)g_ClipboardBuffer + 20))( /*0x5f2ab1*/
            g_ClipboardBuffer,
            v11,
            Source,
            81,
            15);
    if ( v11 == -1000 ) /*0x5f2ab9*/
    {
      v13 = g_ClipboardBuffer; /*0x5f2be6*/
      v6 = 6; /*0x5f2bec*/
      if ( g_ClipboardBuffer ) /*0x5f2bf3*/
        goto LABEL_34; /*0x5f2bf3*/
      goto LABEL_35; /*0x5f2bf3*/
    }
    _strupr(Source); /*0x5f2ac4*/
    if ( strlen(Source) ) /*0x5f2acd*/
      Debug::Log(); /*0x5f2ae6*/
    if ( strstr(Source, off_8327D8) ) /*0x5f2af8*/
    {
      memset(byte_AC1288, 0, 0x50u); /*0x5f2b12*/
      strncpy(byte_AC1288, Source, 0x4Fu); /*0x5f2b1e*/
      v6 = 0; /*0x5f2b27*/
      Debug::Log(); /*0x5f2b2f*/
    }
    else
    {
      if ( !strncmp(Source, aBusy, 4u) ) /*0x5f2b48*/
      {
        v6 = 2; /*0x5f2b54*/
      }
      else if ( !strncmp(Source, aNoC, 4u) ) /*0x5f2b67*/
      {
        v6 = 1; /*0x5f2b77*/
      }
      else if ( !strncmp(Source, aNoD, 4u) ) /*0x5f2b8b*/
      {
        v6 = 4; /*0x5f2b9b*/
      }
      else
      {
        if ( strncmp(Source, aErro, 4u) ) /*0x5f2baf*/
          goto LABEL_23; /*0x5f2bb9*/
        v6 = 3; /*0x5f2bbb*/
      }
      Debug::Log(); /*0x5f2bca*/
    }
    v5 = 0; /*0x5f2bd2*/
LABEL_23:
    if ( v11 <= 0 ) /*0x5f2bd6*/
      break; /*0x5f2bd6*/
    if ( v5 != 1 ) /*0x5f2bdb*/
      goto LABEL_36; /*0x5f2bdb*/
  }
  Debug::Log(); /*0x5f2c1a*/
  if ( strlen(Source) ) /*0x5f2c2b*/
    Debug::Log(); /*0x5f2c3c*/
  if ( g_ClipboardBuffer ) /*0x5f2c4c*/
  {
    Buffer = word_8327A0; /*0x5f2c5c*/
    v17 = 0; /*0x5f2c61*/
    WinModemClass::WriteSerial((int *)g_ClipboardBuffer, &Buffer, 2u); /*0x5f2c66*/
  }
  v6 = 5; /*0x5f2c6b*/
LABEL_36:
  (*(void (__thiscall **)(HWND, _DWORD))(*(_DWORD *)g_ClipboardBuffer + 36))(g_ClipboardBuffer, 0); /*0x5f2cab*/
  g_NetworkTestFlag = 0; /*0x5f2cbc*/
  Dialog::Destroy((Dialog *)hWnd); /*0x5f2cc3*/
  return v6; /*0x5f2cca*/
}



// ==== 0x005F2CE0  ObjectClass::WaitModemConnection  this=ObjectClass  sig=csp ====
int __userpurge WaitModemConnection@<eax>(int a1@<ecx>, int a2@<edi>, char a3)
{
  int v3; // ebp
  wchar_t *StringCSF; // eax
  LPARAM v5; // esi
  char v6; // bl
  wchar_t *v7; // eax
  HWND MessageBox; // eax
  int v9; // esi
  TechnoTypeClass *v10; // ecx
  wchar_t *v11; // eax
  int *v12; // eax
  int *v13; // eax
  HWND v14; // ecx
  wchar_t *v16; // [esp-Ah] [ebp-11Ch]
  wchar_t *v17; // [esp-Ah] [ebp-11Ch]
  int v18; // [esp+6h] [ebp-10Ch]
  char v19; // [esp+19h] [ebp-F9h]
  int Buffer; // [esp+1Ah] [ebp-F8h] BYREF
  HWND v21; // [esp+1Eh] [ebp-F4h]
  HWND hWnd; // [esp+22h] [ebp-F0h]
  _BYTE Source[236]; // [esp+26h] [ebp-ECh] BYREF

  v19 = HIBYTE(a1); /*0x5f2cf2*/
  v3 = 3; /*0x5f2cfb*/
  if ( a3 == 1 ) /*0x5f2d00*/
    StringCSF = GetStringCSF((wchar_t *)aTxtModemConner_0, 0, g_Str_File_NullMgr_CPP, 1580); /*0x5f2d13*/
  else
    StringCSF = GetStringCSF(aTxtWaitingForC_0, 0, g_Str_File_NullMgr_CPP, 1582); /*0x5f2d26*/
  v5 = (LPARAM)StringCSF; /*0x5f2d30*/
  Debug::Log(); /*0x5f2d32*/
  v6 = 1; /*0x5f2d41*/
  g_NetworkTestFlag = 0; /*0x5f2d52*/
  v7 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1589); /*0x5f2d59*/
  MessageBox = CreateMessageBox(v5, (LPARAM)v7, (LONG)&g_NetworkTestFlag); /*0x5f2d62*/
  v21 = MessageBox; /*0x5f2d69*/
  if ( !MessageBox ) /*0x5f2d6d*/
    return 3; /*0x5f3155*/
  Dialog::Show(MessageBox); /*0x5f2d76*/
  (*(void (__thiscall **)(HWND, int (*)(), int))(*(_DWORD *)g_ClipboardBuffer + 36))( /*0x5f2d88*/
    g_ClipboardBuffer,
    PumpEventLoop,
    a2);
  g_NetworkTestFlag = 0; /*0x5f2d8b*/
  v9 = 3600; /*0x5f2d92*/
  while ( 1 )
  {
    if ( (unsigned __int8)Dialog::PumpMessages() == 1 || g_NetworkTestFlag ) /*0x5f2dab*/
    {
      v3 = 6; /*0x5f30f5*/
      Debug::Log(); /*0x5f30fa*/
      v14 = g_ClipboardBuffer; /*0x5f30ff*/
      if ( !g_ClipboardBuffer ) /*0x5f310a*/
        goto LABEL_36; /*0x5f310a*/
      goto LABEL_35; /*0x5f310a*/
    }
    LOBYTE(v10) = 0; /*0x5f2db1*/
    ScreenSaver::Process(v10, v18); /*0x5f2db3*/
    memset(Source, 0, 0xF0u); /*0x5f2dc3*/
    v9 = (*(int (__thiscall **)(HWND, int, _BYTE *, int, int))(*(_DWORD *)g_ClipboardBuffer + 20))(
           g_ClipboardBuffer,
           v9,
           Source,
           81,
           v19 != 0 ? 15 : -1);
    Debug::Log(); /*0x5f2ded*/
    if ( v9 == -1000 ) /*0x5f2dfb*/
    {
      v3 = 6; /*0x5f30c0*/
      Debug::Log(); /*0x5f30c5*/
      v14 = g_ClipboardBuffer; /*0x5f30ca*/
      if ( !g_ClipboardBuffer ) /*0x5f30d5*/
        goto LABEL_36; /*0x5f30d5*/
LABEL_35:
      BYTE2(Buffer) = 0; /*0x5f310c*/
      LOWORD(Buffer) = word_8327A0; /*0x5f3118*/
      WinModemClass::WriteSerial((int *)v14, &Buffer, 2u); /*0x5f3124*/
      goto LABEL_36; /*0x5f3124*/
    }
    _strupr(Source); /*0x5f2e06*/
    if ( strlen(Source) ) /*0x5f2e0f*/
      Debug::Log(); /*0x5f2e28*/
    if ( !strncmp(Source, aRing, 4u) ) /*0x5f2e3c*/
    {
      Debug::Log(); /*0x5f2e4d*/
      v11 = GetStringCSF(aTxtAnswering, 0, g_Str_File_NullMgr_CPP, 1647); /*0x5f2e66*/
      Network_Start(hWnd, (LPARAM)v11); /*0x5f2e71*/
      Debug::Log(); /*0x5f2e7b*/
      WinModemClass::WriteSerial((int *)g_ClipboardBuffer, aAta, strlen(aAta)); /*0x5f2e9e*/
      v19 = 1; /*0x5f2ea7*/
      v9 = *(_DWORD *)(Buffer + 36); /*0x5f2eac*/
      goto LABEL_22; /*0x5f2eaf*/
    }
    if ( strstr(Source, aConnect) ) /*0x5f2ebe*/
    {
      memset(byte_AC1288, 0, 0x50u); /*0x5f2ed8*/
      strncpy(byte_AC1288, Source, 0x4Fu); /*0x5f2ee4*/
      v3 = 0; /*0x5f2eed*/
      Debug::Log(); /*0x5f2ef5*/
    }
    else if ( !strncmp(Source, aBusy, 4u) ) /*0x5f2f0e*/
    {
      v3 = 2; /*0x5f2f1e*/
      Debug::Log(); /*0x5f2f29*/
    }
    else if ( !strncmp(Source, aNoC, 4u) ) /*0x5f2f42*/
    {
      v3 = 1; /*0x5f2f52*/
      Debug::Log(); /*0x5f2f5d*/
    }
    else
    {
      if ( strncmp(Source, aErro, 4u) ) /*0x5f2f73*/
        goto LABEL_22; /*0x5f2f7d*/
      v3 = 3; /*0x5f2f83*/
      Debug::Log(); /*0x5f2f8e*/
      v21 = (HWND)asc_82083C; /*0x5f2f9d*/
      v16 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullMgr_CPP, 1671); /*0x5f2fba*/
      v12 = (int *)GetStringCSF(aTxtErrorError, 0, g_Str_File_NullMgr_CPP, 1671); /*0x5f2fcc*/
      Dialog::ShowMessageBox(v12, v16, 0, 0, 0, v18); /*0x5f2fd6*/
    }
    v6 = 0; /*0x5f2fdb*/
LABEL_22:
    if ( v9 <= 0 ) /*0x5f2fdf*/
      break; /*0x5f2fdf*/
LABEL_25:
    if ( v6 != 1 ) /*0x5f2ff1*/
      goto LABEL_36; /*0x5f2ff1*/
  }
  if ( !v19 ) /*0x5f2fe7*/
  {
    v9 = 3600; /*0x5f2fe9*/
    goto LABEL_25; /*0x5f2fe9*/
  }
  if ( (*(char (__thiscall **)(HWND))(*(_DWORD *)g_ClipboardBuffer + 12))(g_ClipboardBuffer) >= 0 ) /*0x5f3009*/
  {
    Debug::Log(); /*0x5f3038*/
    if ( strlen(Source) ) /*0x5f3041*/
      Debug::Log(); /*0x5f305a*/
    v21 = (HWND)asc_82083C; /*0x5f3079*/
    v17 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullMgr_CPP, 1687); /*0x5f3086*/
    v13 = (int *)GetStringCSF(g_Str_TXT_ERROR_TIMEOUT, 0, g_Str_File_NullMgr_CPP, 1687); /*0x5f3098*/
    Dialog::ShowMessageBox(v13, v17, 0, 0, 0, v18); /*0x5f30a2*/
    Debug::Log(); /*0x5f30ac*/
    v3 = 5; /*0x5f30b4*/
  }
  else
  {
    sprintf(byte_AC1288, "%s", aConnected); /*0x5f301a*/
    v3 = 0; /*0x5f3024*/
    Debug::Log(); /*0x5f3026*/
  }
LABEL_36:
  (*(void (__thiscall **)(HWND, _DWORD))(*(_DWORD *)g_ClipboardBuffer + 36))(g_ClipboardBuffer, 0); /*0x5f3129*/
  g_NetworkTestFlag = 0; /*0x5f313a*/
  Dialog::Destroy(v21); /*0x5f3141*/
  return v3; /*0x5f3149*/
}



// ==== 0x005F3170  NullModemClass::Negotiate  this=NullModemClass  sig=csp ====
char __thiscall NullModemClass::Negotiate(NullModemClass *this)
{
  int v3; // eax
  int i; // eax
  int v5; // esi
  bool v6; // zf
  _BYTE Buffer[4]; // [esp+78h] [ebp-58h] BYREF
  char Str1[84]; // [esp+7Ch] [ebp-54h] BYREF

  if ( this->PacketsSent == -1 || !g_ClipboardBuffer ) /*0x5f3189*/
    return 0; /*0x5f3189*/
  dword_A8DAB8 &= ~1u; /*0x5f319e*/
  if ( (*(int (__thiscall **)(HWND, char *, int, char *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f31be*/
         g_ClipboardBuffer,
         word_832678,
         13,
         Str1,
         81,
         90,
         1,
         -1) == 2 )
  {
    dword_A8DAB8 |= 1u; /*0x5f31c8*/
    return 1; /*0x5f31d3*/
  }
  (*(void (__thiscall **)(HWND, _DWORD))(*(_DWORD *)g_ClipboardBuffer + 16))(g_ClipboardBuffer, 0); /*0x5f31de*/
  sub_4A50A0(53); /*0x5f31e6*/
  (*(void (__thiscall **)(HWND, int))(*(_DWORD *)g_ClipboardBuffer + 16))(g_ClipboardBuffer, 1); /*0x5f31f4*/
  if ( (*(int (__thiscall **)(HWND, char *, int, char *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f3218*/
         g_ClipboardBuffer,
         word_832678,
         13,
         Str1,
         81,
         90,
         1,
         -1) == 2 )
  {
    v3 = dword_A8DAB8; /*0x5f321a*/
LABEL_7:
    dword_A8DAB8 = v3 | 1; /*0x5f321f*/
    return 1; /*0x5f322d*/
  }
  for ( i = this->q00B; /*0x5f3234*/
        i > 0;
        i = (*(int (__thiscall **)(HWND, int, char *, int, int))(*(_DWORD *)g_ClipboardBuffer + 20))(
              g_ClipboardBuffer,
              i,
              Str1,
              81,
              -1) )
  {
    ; /*0x5f3248*/
  }
  Buffer[0] = this->LastPacketTime; /*0x5f3258*/
  Buffer[1] = Buffer[0]; /*0x5f325c*/
  Buffer[2] = Buffer[0]; /*0x5f3260*/
  Buffer[3] = 0; /*0x5f326b*/
  WinModemClass::WriteSerial((int *)g_ClipboardBuffer, Buffer, 3u); /*0x5f3270*/
  v5 = this->q00B; /*0x5f3275*/
  if ( v5 > 0 ) /*0x5f327a*/
  {
    do /*0x5f32ad*/
      v5 = (*(int (__thiscall **)(HWND, int, char *, int, int))(*(_DWORD *)g_ClipboardBuffer + 20))( /*0x5f329d*/
             g_ClipboardBuffer,
             v5,
             Str1,
             81,
             -1);
    while ( strncmp(Str1, g_INI_Key_OK, 2u) && v5 > 0 ); /*0x5f32ad*/
  }
  if ( (*(int (__thiscall **)(HWND, _UNKNOWN **, int, char *, int, _DWORD, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f32d3*/
         g_ClipboardBuffer,
         &off_832A0C,
         13,
         Str1,
         81,
         this->q00A,
         1,
         -1) != 2 )
  {
    dword_A8DAB8 |= 1u; /*0x5f3310*/
    return 0; /*0x5f3317*/
  }
  v6 = (*(int (__thiscall **)(HWND, _UNKNOWN **, int, char *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f32f3*/
         g_ClipboardBuffer,
         &off_832A08,
         13,
         Str1,
         81,
         60,
         1,
         -1) == 2;
  v3 = dword_A8DAB8; /*0x5f32f6*/
  if ( v6 ) /*0x5f32fb*/
    goto LABEL_7; /*0x5f32fb*/
  dword_A8DAB8 |= 1u; /*0x5f3304*/
  return 0; /*0x5f31c5*/
}



// ==== 0x005F3320  AppState::CallMethod  this=AppState  sig=csp ====
int __stdcall AppState_CallMethod(int a1)
{
  return (*(int (__thiscall **)(HWND, int))(*(_DWORD *)g_ClipboardBuffer + 32))(g_ClipboardBuffer, a1); /*0x5f3330*/
}



// ==== 0x005F3340  ObjectClass::nullsub_28  this=ObjectClass  sig=csp ====
int nullsub_28(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5f3340*/
}



// ==== 0x005F3350  String::NormalizeNewlines  this=String  sig=ida-proto ====
int String_NormalizeNewlines()
{
  const char *v0; // esi
  __int64 v1; // rax
  char v2; // al

  v0 = (const char *)dword_A8EA7C; /*0x5f3351*/
  v1 = 0; /*0x5f335d*/
  if ( strlen((const char *)dword_A8EA7C) ) /*0x5f3361*/
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
    v0 = (const char *)dword_A8EA7C; /*0x5f337d*/
    goto LABEL_7; /*0x5f337d*/
  }
  return v1; /*0x5f3394*/
}



// ==== 0x005F33A0  StringBuffer::Reset  this=StringBuffer  sig=csp ====
_BYTE *__thiscall StringBuffer::Reset(StringBuffer *this)
{
  _BYTE *result; // eax

  result = (_BYTE *)*((_DWORD *)this + 3); /*0x5f33a0*/
  *result = 0; /*0x5f33a3*/
  *((_DWORD *)this + 5) = 0; /*0x5f33a6*/
  return result; /*0x5f33ad*/
}



// ==== 0x005F33B0  PumpEventLoop  this=-  sig=ida-proto ====
int sub_5F33B0()
{
  unsigned __int16 v0; // ax
  int v1; // esi

  Event::Dispatch(); /*0x5f33b1*/
  MessageLoop(); /*0x5f33b6*/
  v0 = EventQueue::Process(dword_87F770); /*0x5f33c1*/
  v1 = v0; /*0x5f33c9*/
  if ( !v0 )
    return g_NetworkTestFlag != 0 ? 0xFFFFFC18 : 0;
  Timer::PumpMessages((HWND *)dword_87F770); /*0x5f33d7*/
  if ( v1 != 27 )
    return g_NetworkTestFlag != 0 ? 0xFFFFFC18 : 0;
  g_NetworkTestFlag = 1; /*0x5f33e1*/
  return -1000; /*0x5f33ed*/
}



// ==== 0x005F3440  EventClass::GetState  this=EventClass  sig=csp ====
int __stdcall EventClass::GetState(int a1)
{
  return 0; /*0x5f3442*/
}



// ==== 0x005F3450  Dialog::CheckButtonState  this=Dialog  sig=csp ====
int Dialog::CheckButtonState(Dialog *this)
{
  int v1; // esi
  _BYTE v3[84]; // [esp+4h] [ebp-54h] BYREF

  v1 = (*(int (__thiscall **)(HWND))(*(_DWORD *)g_ClipboardBuffer + 12))(g_ClipboardBuffer); /*0x5f3467*/
  if ( (*(int (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f3483*/
         g_ClipboardBuffer,
         word_832678,
         13,
         v3,
         81,
         90,
         1,
         -1) == 2 )
    return v1 & 0xFFFFFF7F; /*0x5f3485*/
  return v1; /*0x5f348d*/
}



// ==== 0x005F34D0  sub_5F34D0  this=-  sig=csp ====
int __stdcall sub_5F34D0(char *String)
{
  int v1; // esi
  unsigned int v2; // kr04_4

  v1 = 0; /*0x5f34de*/
  v2 = strlen(String) + 1; /*0x5f34e0*/
  if ( (int)(v2 - 1) <= 0 ) /*0x5f34e9*/
    return atoi(String); /*0x5f3501*/
  while ( isdigit(String[v1]) ) /*0x5f34fa*/
  {
    if ( ++v1 >= (int)(v2 - 1) ) /*0x5f34ff*/
      return atoi(String); /*0x5f34ff*/
  }
  return -1; /*0x5f350a*/
}



// ==== 0x005F3520  NullModemClass::COMStub_Return0  this=NullModemClass  sig=csp ====
int __stdcall NullModemClass::COMStub_Return0(NullModemClass *this)
{
  return 0; /*0x5f3522*/
}



// ==== 0x005F3530  NullModemClass::Send  this=NullModemClass  sig=csp ====
int __stdcall NullModemClass::Send(NullModemClass *this)
{
  return 0; /*0x5f3532*/
}



// ==== 0x005F3540  NullModemClass::Disconnect  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::Disconnect(NullModemClass *this, int a2, int a3, int a4)
{
  return (*(int (__thiscall **)(NullModemClass *, int, int, int, int))(*(_DWORD *)this->ConnectionClass + 52))( /*0x5f3556*/
           this,
           a2,
           a3,
           a4,
           1);
}



// ==== 0x005F3560  NullModemClass::Release  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::Release(NullModemClass *this, int a2, int a3, int a4, int a5)
{
  int result; // eax

  if ( !*((_DWORD *)this + 15) ) /*0x5f3563*/
    return 0; /*0x5f356a*/
  result = (*(int (__thiscall **)(_DWORD, int, int, int, _DWORD))(**((_DWORD **)this + 14) + 8))( /*0x5f3586*/
             *((_DWORD *)this + 14),
             a2,
             a3,
             a4,
             0);
  if ( !result ) /*0x5f358b*/
    ++*((_DWORD *)this + 26); /*0x5f358d*/
  return result; /*0x5f356c*/
}



// ==== 0x005F35A0  NullModemClass::ddtor  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::ddtor(NullModemClass *this, int a2, int a3, int a4)
{
  if ( *((_DWORD *)this + 15) ) /*0x5f35a0*/
    return (*(int (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 14) + 16))(*((_DWORD *)this + 14), a2, a3); /*0x5f35bb*/
  else
    return 0; /*0x5f35a7*/
}



// ==== 0x005F35D0  NullModemClass::Receive  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::Receive(NullModemClass *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 14); /*0x5f35d0*/
  if ( v1 ) /*0x5f35d5*/
    return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 40); /*0x5f35da*/
  else
    return 0; /*0x5f35de*/
}



// ==== 0x005F35F0  NullModemClass::CheckStatus  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::CheckStatus(NullModemClass *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 14); /*0x5f35f0*/
  if ( v1 ) /*0x5f35f5*/
    return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 56); /*0x5f35fa*/
  else
    return 0; /*0x5f35fe*/
}



// ==== 0x005F3610  NullModemClass::GetAddress  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::GetAddress(NullModemClass *this, int a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 14); /*0x5f3610*/
  if ( v2 ) /*0x5f3615*/
    return *(_DWORD *)(*(_DWORD *)(v2 + 4) + 40); /*0x5f361a*/
  else
    return 0; /*0x5f3620*/
}



// ==== 0x005F3630  NullModemClass::SetAddress  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::SetAddress(NullModemClass *this, int a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 14); /*0x5f3630*/
  if ( v2 ) /*0x5f3635*/
    return *(_DWORD *)(*(_DWORD *)(v2 + 4) + 56); /*0x5f363a*/
  else
    return 0; /*0x5f3640*/
}



// ==== 0x005F3650  NullModemClass::QueryInterface  this=NullModemClass  sig=csp ====
_DWORD *__thiscall NullModemClass::QueryInterface(NullModemClass *this, char a2)
{
  void **v3; // edi

  v3 = (void **)*((_DWORD *)this + 13); /*0x5f3654*/
  *(_DWORD *)this->ConnectionClass = &NullModemClass::`vftable'; /*0x5f3657*/
  if ( v3 ) /*0x5f365f*/
  {
    FileFind::Close(v3); /*0x5f3663*/
    __3_YAXPAX_Z(v3); /*0x5f3669*/
  }
  ObjectClass::FreeResources((ObjectClass *)this); /*0x5f3673*/
  if ( this->PacketsSent != -1 ) /*0x5f3680*/
  {
    if ( !g_ClipboardBuffer ) /*0x5f368a*/
      goto LABEL_10; /*0x5f368a*/
    SerialPort::Close((SerialPort *)g_ClipboardBuffer); /*0x5f368c*/
    if ( g_ClipboardBuffer ) /*0x5f3699*/
      (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f369f*/
    g_ClipboardBuffer = 0; /*0x5f36a1*/
    this->PacketsSent = -1; /*0x5f36ad*/
    ObjectClass::FreeResources((ObjectClass *)this); /*0x5f36b0*/
  }
  if ( g_ClipboardBuffer ) /*0x5f36bd*/
  {
    (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f36c3*/
    g_ClipboardBuffer = 0; /*0x5f36c5*/
  }
LABEL_10:
  *(_DWORD *)this->ConnectionClass = &ConnManClass::`vftable'; /*0x5f36cf*/
  if ( (a2 & 1) != 0 ) /*0x5f36db*/
    __3_YAXPAX_Z(this); /*0x5f36de*/
  return this->ConnectionClass; /*0x5f36e8*/
}



// ==== 0x005F36F0  sub_5F36F0  this=-  sig=ida-proto ====
void sub_5F36F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5f36fc*/
  dbl_AC1368 = Math::Sqrt(v0 + v0); /*0x5f370e*/
}



// ==== 0x005F3720  sub_5F3720  this=-  sig=ida-proto ====
void sub_5F3720()
{
  dbl_AC13C0 = dbl_AC1368 / 60.0; /*0x5f372c*/
}



// ==== 0x005F3740  sub_5F3740  this=-  sig=ida-proto ====
void sub_5F3740()
{
  dbl_AC13A8 = 1.0 / dbl_AC13C0; /*0x5f374c*/
}



// ==== 0x005F3760  sub_5F3760  this=-  sig=ida-proto ====
void sub_5F3760()
{
  dbl_AC13A0 = 0.0174532925199433 * 45.0; /*0x5f376c*/
}



// ==== 0x005F3780  sub_5F3780  this=-  sig=ida-proto ====
void sub_5F3780()
{
  dbl_AC1370 = 0.0174532925199433 * 60.0; /*0x5f378c*/
}



// ==== 0x005F37A0  sub_5F37A0  this=-  sig=ida-proto ====
void sub_5F37A0()
{
  dbl_AC1348 = 0.0174532925199433 * 90.0; /*0x5f37ac*/
}



// ==== 0x005F37C0  sub_5F37C0  this=-  sig=ida-proto ====
__int64 sub_5F37C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC1348 - dbl_AC1370); /*0x5f37d2*/
  result = Math::RoundToInt(v0 * dbl_AC1368 * 0.5); /*0x5f37e6*/
  dword_AC13C8 = result; /*0x5f37eb*/
  return result; /*0x5f37f0*/
}



// ==== 0x005F3800  sub_5F3800  this=-  sig=ida-proto ====
void sub_5F3800()
{
  dbl_AC1378 = Math::ArcTan((double)dword_AC13C8 * 0.00390625); /*0x5f3817*/
}



// ==== 0x005F3830  sub_5F3830  this=-  sig=ida-proto ====
void sub_5F3830()
{
  dbl_AC1390 = Math::ArcTan((double)(2 * dword_AC13C8) / dbl_AC1368); /*0x5f3852*/
}



// ==== 0x005F3860  sub_5F3860  this=-  sig=ida-proto ====
__int64 sub_5F3860()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC13C8) + 0.5); /*0x5f387b*/
  dword_AC13BC = result; /*0x5f3880*/
  return result; /*0x5f3886*/
}



// ==== 0x005F3890  sub_5F3890  this=-  sig=ida-proto ====
int sub_5F3890()
{
  dword_AC1360 = 0; /*0x5f3892*/
  return 0; /*0x5f389e*/
}



// ==== 0x005F38A0  sub_5F38A0  this=-  sig=ida-proto ====
int sub_5F38A0()
{
  dword_AC1380 = 0; /*0x5f38a2*/
  dword_AC1384 = 0; /*0x5f38a7*/
  dword_AC1388 = 0; /*0x5f38ac*/
  return 0; /*0x5f38b1*/
}



// ==== 0x005F38C0  sub_5F38C0  this=-  sig=ida-proto ====
int sub_5F38C0()
{
  dword_AC13B8 = 0; /*0x5f38c5*/
  dword_AC13B0 = 128; /*0x5f38cf*/
  dword_AC13B4 = 128; /*0x5f38d4*/
  return 128; /*0x5f38d9*/
}



// ==== 0x005F38E0  sub_5F38E0  this=-  sig=ida-proto ====
int sub_5F38E0()
{
  dword_AC1350 = 0; /*0x5f38e2*/
  dword_AC1354 = 0; /*0x5f38e7*/
  dword_AC1358 = 0; /*0x5f38ec*/
  dword_AC135C = 0; /*0x5f38f1*/
  return 0; /*0x5f38f6*/
}



// ==== 0x005F3900  ObjectClass::ctor  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ObjectClass::ctor(ObjectClass *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x5f3904*/
  this->occupant = 0; /*0x5f3910*/
  this->owningHouseIndex = 0; /*0x5f3913*/
  this->fallRate = 0; /*0x5f3916*/
  this->health = 255; /*0x5f3919*/
  this->estimatedHealth = 255; /*0x5f391c*/
  this->spawnStatus = 1; /*0x5f3927*/
  this->inLimbo = 1; /*0x5f392a*/
  this->isAliveFlag = 1; /*0x5f3930*/
  this->isVisible = 1; /*0x5f3936*/
  this->nextObject = 0; /*0x5f393c*/
  this->attachedTag = 0; /*0x5f393f*/
  this->attachedBomb = 0; /*0x5f3942*/
  this->customSound = -1; /*0x5f3945*/
  this->bombVisible = 0; /*0x5f3948*/
  this->isOnMap = 0; /*0x5f394b*/
  this->visibilityFlags = 0; /*0x5f394e*/
  this->needsRedraw = 0; /*0x5f3951*/
  this->inOpenToppedTransport = 0; /*0x5f3957*/
  this->isSelected = 0; /*0x5f395d*/
  this->hasParachute = 0; /*0x5f3963*/
  this->parachute = 0; /*0x5f3969*/
  this->onBridge = 0; /*0x5f396f*/
  this->isFallingDown = 0; /*0x5f3975*/
  this->wasFallingDown = 0; /*0x5f397b*/
  this->isBomb = 0; /*0x5f3981*/
  this->lastLayer = -1; /*0x5f3987*/
  this->isInLogic = 0; /*0x5f398d*/
  this->location[0] = dword_AC1380; /*0x5f399f*/
  this->location[1] = dword_AC1384; /*0x5f39ab*/
  v2 = dword_AC1388; /*0x5f39ae*/
  this->lineTrailer = 0; /*0x5f39b4*/
  this->AbstractClass = &ObjectClass::`vftable'; /*0x5f39ba*/
  this->location[2] = v2; /*0x5f39c0*/
  this->? = &ObjectClass::`vftable'; /*0x5f39c6*/
  this->? = &ObjectClass::`vftable'; /*0x5f39cd*/
  this->? = &ObjectClass::`vftable'; /*0x5f39d4*/
  AudioController::Init((AudioController *)this->ambientSoundController); /*0x5f39db*/
  AudioController::Init((AudioController *)this->customSound_controller); /*0x5f39e3*/
  if ( dword_A8E370 < dword_A8E368 /*0x5f3a1c*/
    || (byte_A8E36D || !dword_A8E368)
    && dword_A8E374 > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8E360 + 8))(
         &dword_A8E360,
         dword_A8E368 + dword_A8E374,
         0) )
  {
    v3 = dword_A8E370++; /*0x5f3a29*/
    *((_DWORD *)dword_A8E364 + v3) = this; /*0x5f3a38*/
  }
  if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x5f3a6f*/
    || (BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
    && g_BuildingLoadQueue_Array.Height > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
         &g_BuildingLoadQueue_Array.PowerBonus,
         g_BuildingLoadQueue_Array.ExtraPowerBonus + g_BuildingLoadQueue_Array.Height,
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x5f3a7c*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v4) = this; /*0x5f3a8b*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x5f3ac2*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v5 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x5f3acf*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v5) = this; /*0x5f3ade*/
  }
  if ( *(int *)&g_BuildingLoadQueue_Array.?[32] < *(int *)&g_BuildingLoadQueue_Array.?[24] /*0x5f3b15*/
    || (g_BuildingLoadQueue_Array.?[29] || !*(_DWORD *)&g_BuildingLoadQueue_Array.?[24])
    && *(int *)&g_BuildingLoadQueue_Array.?[36] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_BuildingLoadQueue_Array.?[16] + 8))(
         &g_BuildingLoadQueue_Array.?[16],
         *(_DWORD *)&g_BuildingLoadQueue_Array.?[24] + *(_DWORD *)&g_BuildingLoadQueue_Array.?[36],
         0) )
  {
    v6 = (*(_DWORD *)&g_BuildingLoadQueue_Array.?[32])++; /*0x5f3b22*/
    *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.?[20] + 4 * v6) = this; /*0x5f3b31*/
  }
  LOBYTE(this->?) |= 2u; /*0x5f3b39*/
  return &this->AbstractClass; /*0x5f3b3e*/
}



// ==== 0x005F3B50  ObjectClass::Init  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ObjectClass::Init(ObjectClass *this, int a2)
{
  AbstractClass::InitVtables((AbstractClass *)this, a2); /*0x5f3b58*/
  this->AbstractClass = &ObjectClass::`vftable'; /*0x5f3b5d*/
  this->? = &ObjectClass::`vftable'; /*0x5f3b63*/
  this->? = &ObjectClass::`vftable'; /*0x5f3b6a*/
  this->? = &ObjectClass::`vftable'; /*0x5f3b71*/
  return &this->AbstractClass; /*0x5f3b7a*/
}



// ==== 0x005F3B80  ObjectClass::Dtor  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::Dtor(ObjectClass *this)
{
  ObjectClass *attachedBomb; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  TacticalClass *lineTrailer; // ecx
  ObjectClass *v10; // [esp+10h] [ebp-4h] BYREF

  attachedBomb = (ObjectClass *)this->attachedBomb; /*0x5f3b84*/
  this->vtable0 = (int)&ObjectClass::`vftable'; /*0x5f3b87*/
  this->vtable1 = (int)&ObjectClass::`vftable'; /*0x5f3b8f*/
  this->vtable2 = (int)&ObjectClass::`vftable'; /*0x5f3b96*/
  this->vtable3 = (int)&ObjectClass::`vftable'; /*0x5f3b9d*/
  if ( attachedBomb ) /*0x5f3ba4*/
    ObjectClass::CleanupAudioAndRefs(attachedBomb); /*0x5f3ba6*/
  v10 = this; /*0x5f3bbb*/
  v3 = (*(int (__thiscall **)(DynamicVectorClass *, ObjectClass **))(stru_B0F698.vtable0 + 16))(&stru_B0F698, &v10); /*0x5f3bbf*/
  if ( v3 != -1 && v3 < stru_B0F698.Count ) /*0x5f3bcf*/
  {
    --stru_B0F698.Count; /*0x5f3bd4*/
    for ( ; v3 < stru_B0F698.Count; *(_DWORD *)(stru_B0F698.Items + 4 * v3 - 4) = *(_DWORD *)(stru_B0F698.Items + 4 * v3) ) /*0x5f3bda*/
      ++v3; /*0x5f3be2*/
  }
  v10 = this; /*0x5f3c04*/
  v4 = (*(int (__thiscall **)(_DWORD *, ObjectClass **))(dword_A8E360 + 16))(&dword_A8E360, &v10); /*0x5f3c08*/
  if ( v4 != -1 && v4 < dword_A8E370 && v4 < --dword_A8E370 ) /*0x5f3c23*/
  {
    do /*0x5f3c3b*/
    {
      ++v4; /*0x5f3c2b*/
      *((_DWORD *)dword_A8E364 + v4 - 1) = *((_DWORD *)dword_A8E364 + v4); /*0x5f3c2f*/
    }
    while ( v4 < dword_A8E370 ); /*0x5f3c3b*/
  }
  v10 = this; /*0x5f3c4d*/
  v5 = (*(int (__thiscall **)(_DWORD *, ObjectClass **))(dword_B0F720 + 16))(&dword_B0F720, &v10); /*0x5f3c51*/
  if ( v5 != -1 && v5 < dword_B0F730 && v5 < --dword_B0F730 ) /*0x5f3c6c*/
  {
    do /*0x5f3c84*/
    {
      ++v5; /*0x5f3c74*/
      *((_DWORD *)dword_B0F724 + v5 - 1) = *((_DWORD *)dword_B0F724 + v5); /*0x5f3c78*/
    }
    while ( v5 < dword_B0F730 ); /*0x5f3c84*/
  }
  v10 = this; /*0x5f3c96*/
  v6 = (*(int (__thiscall **)(_DWORD *, ObjectClass **))(dword_B0F670 + 16))(&dword_B0F670, &v10); /*0x5f3c9a*/
  if ( v6 != -1 && v6 < dword_B0F680 && v6 < --dword_B0F680 ) /*0x5f3cb5*/
  {
    do /*0x5f3ccd*/
    {
      ++v6; /*0x5f3cbd*/
      *((_DWORD *)dword_B0F674 + v6 - 1) = *((_DWORD *)dword_B0F674 + v6); /*0x5f3cc1*/
    }
    while ( v6 < dword_B0F680 ); /*0x5f3ccd*/
  }
  v10 = this; /*0x5f3cdf*/
  v7 = (*(int (__thiscall **)(_DWORD *, ObjectClass **))(dword_B0F618 + 16))(&dword_B0F618, &v10); /*0x5f3ce3*/
  if ( v7 != -1 && v7 < dword_B0F628 && v7 < --dword_B0F628 ) /*0x5f3cfe*/
  {
    do /*0x5f3d16*/
    {
      ++v7; /*0x5f3d06*/
      *((_DWORD *)dword_B0F61C + v7 - 1) = *((_DWORD *)dword_B0F61C + v7); /*0x5f3d0a*/
    }
    while ( v7 < dword_B0F628 ); /*0x5f3d16*/
  }
  this->nextObject = 0; /*0x5f3d1d*/
  this->isAliveFlag[0] = 0; /*0x5f3d26*/
  AudioController::Stop((AudioController *)this->ambientSoundController); /*0x5f3d2d*/
  AudioController::Stop((AudioController *)this->customSound_controller); /*0x5f3d37*/
  AudioFileClass::Release((AudioFileClass *)this->ambientSoundController); /*0x5f3d3e*/
  AudioFileClass::Release((AudioFileClass *)this->customSound_controller); /*0x5f3d45*/
  lineTrailer = (TacticalClass *)this->lineTrailer; /*0x5f3d4a*/
  if ( lineTrailer ) /*0x5f3d54*/
  {
    TacticalClass::GetField(lineTrailer); /*0x5f3d56*/
    this->lineTrailer = 0; /*0x5f3d5b*/
  }
  if ( this->isInLogic[0] ) /*0x5f3d65*/
    VectorClass::RemoveItem((DynamicVectorClass *)&dword_87F778, (int)this); /*0x5f3d75*/
  return AbstractClass::DTOR(this); /*0x5f3d81*/
}



// ==== 0x005F3DB0  ObjectClass::CalcTargetFacing  this=ObjectClass  sig=csp ====
int *__thiscall ObjectClass::CalcTargetFacing(ObjectClass *this, int *a2, int a3)
{
  double v3; // st7
  int *v5; // edi
  int *v6; // eax
  _BYTE v8[12]; // [esp+24h] [ebp-18h] BYREF
  _BYTE v9[12]; // [esp+30h] [ebp-Ch] BYREF
  int v10; // [esp+44h] [ebp+8h]

  v5 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a3 + 72))(a3, v8); /*0x5f3dc9*/
  v6 = (int *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))this->AbstractClass + 18))(this, v9); /*0x5f3dd0*/
  v10 = *v5; /*0x5f3dd7*/
  Math::CalcAngle((double)v6[1] - (double)v5[1], (double)*v5 - (double)*v6); /*0x5f3dfa*/
  LOWORD(v10) = Math::RoundToInt((v3 - 1.570796326794897) * -10430.06004058427); /*0x5f3e13*/
  *a2 = v10; /*0x5f3e21*/
  return a2; /*0x5f3e20*/
}



// ==== 0x005F3E30  ObjectClass::HasC4  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::HasC4(ObjectClass *this)
{
  int v1; // eax

  v1 = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this); /*0x5f3e32*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 156))(v1);
}



// ==== 0x005F3E50  ObjectClass::StepCleanup  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::StepCleanup(ObjectClass *this, void *a2)
{
  int v2; // eax

  v2 = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this); /*0x5f3e57*/
  return AbstractTypeClass::NameEquals(v2, a2); /*0x5f3e64*/
}



// ==== 0x005F3E70  ObjectClass::DetectCloaked  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::DetectCloaked(UnitClass *this)
{
  int result; // eax
  int vtable0; // edx
  int v4; // eax
  int customSound; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // edx
  int v9; // eax
  int parachute; // eax
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  wchar_t *v15; // eax
  int *p_queuedMission; // edx
  int *location; // esi
  int v18; // edx
  int v19; // edx
  int v20; // edi
  int v21; // esi
  int health; // [esp+20h] [ebp-10h] BYREF
  int v23; // [esp+24h] [ebp-Ch] BYREF
  int v24; // [esp+28h] [ebp-8h]
  int v25; // [esp+2Ch] [ebp-4h]

  if ( !this->inLimbo[0] ) /*0x5f3e78*/
  {
    result = (*(int (__thiscall **)(UnitClass *))(this->vtable0 + 136))(this); /*0x5f3e88*/
    if ( result ) /*0x5f3e90*/
    {
      result = (*(int (__thiscall **)(UnitClass *))(this->vtable0 + 136))(this); /*0x5f3e96*/
      if ( *(_DWORD *)(result + 500) != -1 ) /*0x5f3ea3*/
      {
        v23 = this->location[0]; /*0x5f3eb1*/
        v24 = this->location[1]; /*0x5f3ebc*/
        vtable0 = this->vtable0; /*0x5f3ec0*/
        v25 = this->location[2]; /*0x5f3ec7*/
        v4 = (*(int (__thiscall **)(UnitClass *))(vtable0 + 136))(this); /*0x5f3ecb*/
        result = (int)StartAudioControllerAt(*(_DWORD *)(v4 + 500), &v23, (int **)this->ambientSoundController); /*0x5f3ed9*/
      }
    }
    customSound = this->customSound; /*0x5f3ede*/
    if ( customSound != -1 ) /*0x5f3ee4*/
    {
      v23 = this->location[0]; /*0x5f3ef2*/
      v24 = this->location[1]; /*0x5f3ef9*/
      v25 = this->location[2]; /*0x5f3f08*/
      result = (int)StartAudioControllerAt(customSound, &v23, (int **)this->customSound_controller); /*0x5f3f0c*/
    }
  }
  LOBYTE(result) = this->isFallingDown[0]; /*0x5f3f11*/
  if ( (_BYTE)result ) /*0x5f3f19*/
  {
    v6 = (*(int (__thiscall **)(UnitClass *))(this->vtable0 + 120))(this); /*0x5f3f2a*/
    v7 = this->fallRate + (*(int (__thiscall **)(UnitClass *))(this->vtable0 + 464))(this); /*0x5f3f3a*/
    if ( this->isOnMap[0] ) /*0x5f3f37*/
    {
      (*(void (__thiscall **)(UnitClass *, _DWORD))(this->vtable0 + 292))(this, 0); /*0x5f3f46*/
      v8 = this->vtable0; /*0x5f3f4c*/
      this->location[2] = v7; /*0x5f3f52*/
      (*(void (__thiscall **)(UnitClass *, int))(v8 + 292))(this, 1); /*0x5f3f58*/
    }
    else
    {
      this->location[2] = v7; /*0x5f3f60*/
    }
    if ( (*(int (__thiscall **)(UnitClass *))(this->vtable0 + 456))(this) <= 0 ) /*0x5f3f72*/
    {
      (*(void (__thiscall **)(UnitClass *, _DWORD))(this->vtable0 + 460))(this, 0); /*0x5f3f7a*/
      v9 = this->vtable0; /*0x5f3f80*/
      this->isFallingDown[0] = 0; /*0x5f3f86*/
      (*(void (__thiscall **)(UnitClass *, int))(v9 + 396))(this, 2); /*0x5f3f8d*/
      parachute = this->parachute; /*0x5f3f93*/
      if ( parachute ) /*0x5f3f9b*/
        *(_BYTE *)(parachute + 405) = 0; /*0x5f3f9d*/
    }
    if ( this->inLimbo[0] ) /*0x5f3fa4*/
      return RemoveTarget((int)this); /*0x5f414c*/
    if ( this->hasParachute[0] ) /*0x5f3fb2*/
    {
      v11 = this->fallRate - 1; /*0x5f3fbf*/
      this->fallRate = v11; /*0x5f3fc0*/
      v12 = v11; /*0x5f3fc9*/
      v13 = dword_8871E0->GDIWallDefenseCoefficient[0]; /*0x5f3fcb*/
      if ( v11 <= v13 ) /*0x5f3fd3*/
        goto LABEL_19; /*0x5f3fd3*/
    }
    else
    {
      LOWORD(v12) = Math::RoundToInt((double)this->fallRate - 1.4); /*0x5f3fe0*/
      this->fallRate = v12; /*0x5f3fe5*/
      v13 = dword_8871E0->GDIWallDefenseCoefficient[1]; /*0x5f3fee*/
      if ( v12 <= v13 ) /*0x5f3ff6*/
LABEL_19:
        v12 = v13; /*0x5f3ff8*/
    }
    this->fallRate = v12; /*0x5f3ffa*/
    result = (*(int (__thiscall **)(UnitClass *))(this->vtable0 + 120))(this); /*0x5f4001*/
    if ( v6 != result ) /*0x5f4006*/
      result = Targeting::Readd(this); /*0x5f400e*/
    LOBYTE(result) = this->isFallingDown[0]; /*0x5f4013*/
    if ( !(_BYTE)result ) /*0x5f401b*/
    {
      if ( this->isBomb[0] && this->health > 0 ) /*0x5f4030*/
      {
        v14 = this->vtable0; /*0x5f4032*/
        health = this->health; /*0x5f4034*/
        (*(void (__thiscall **)(UnitClass *, int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(v14 + 364))( /*0x5f4055*/
          this,
          &health,
          0,
          *(_DWORD *)&dword_8871E0->__pad_C3C[876],
          0,
          1,
          1,
          0);
      }
      result = (*(int (__thiscall **)(UnitClass *))(this->vtable0 + 44))(this); /*0x5f405f*/
      if ( result == 4 ) /*0x5f4065*/
      {
        result = this->missionTimer[0]; /*0x5f406b*/
        if ( *(_BYTE *)(result + 852) ) /*0x5f4071*/
        {
          BYTE2(this->ironCurtainTimer[2]) = 1; /*0x5f407f*/
          v15 = dword_A8ED84; /*0x5f4086*/
          p_queuedMission = &this->queuedMission; /*0x5f408b*/
          this->missionStartTime = 1; /*0x5f4096*/
          location = this->location; /*0x5f409c*/
          *p_queuedMission = (int)v15; /*0x5f40a2*/
          p_queuedMission[1] = v24; /*0x5f40a8*/
          p_queuedMission[2] = 1; /*0x5f40ab*/
          v18 = *location; /*0x5f40c0*/
          location[4] = 8 * *(_DWORD *)(location[11] + 848) + 1; /*0x5f40c2*/
          v23 = v18; /*0x5f40c5*/
          v24 = location[1]; /*0x5f40d1*/
          v25 = location[2]; /*0x5f40d8*/
          result = (int)Coord::To_Cell((Coord *)&dword_87F7E8, &v23); /*0x5f40e1*/
          if ( *(_DWORD *)(result + 236) == 2 ) /*0x5f40ed*/
          {
            result = __2_YAPAXI_Z(0x1C8u); /*0x5f40f4*/
            if ( result ) /*0x5f40fe*/
            {
              v19 = *location; /*0x5f4100*/
              v20 = location[1]; /*0x5f4102*/
              v21 = location[2]; /*0x5f4105*/
              v23 = v19; /*0x5f410c*/
              v24 = v20; /*0x5f4126*/
              v25 = v21 + 3; /*0x5f412a*/
              return (int)AnimClass::ctor( /*0x5f413a*/
                            (AnimClass *)result,
                            *(void **)dword_8871E0->Normal[10],
                            &v23,
                            0,
                            1,
                            (void *)0x600,
                            0,
                            0);
            }
          }
        }
      }
    }
  }
  return result; /*0x5f413f*/
}



// ==== 0x005F4160  IUnknown::DropAsBomb_Track  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::DropAsBomb_Track(IUnknown *this)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  _DWORD v5[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = this->field_0; /*0x5f4168*/
  this->__pad_8C[1] = 1; /*0x5f416a*/
  this->__pad_8C[3] = 1; /*0x5f4171*/
  (*(void (__stdcall **)(_DWORD))(v2 + 292))(0); /*0x5f4178*/
  RemoveTarget((int)this); /*0x5f4184*/
  this->__pad_8C[0] = 0; /*0x5f418f*/
  Targeting::Readd(this); /*0x5f4196*/
  result = (*(int (__thiscall **)(IUnknown *, int))(this->field_0 + 292))(this, 1); /*0x5f41a1*/
  if ( this ) /*0x5f41a9*/
  {
    LOBYTE(result) = (this->__pad_14[0] & 4) != 0; /*0x5f41b5*/
    if ( (this->__pad_14[0] & 4) != 0 ) /*0x5f41bb*/
    {
      if ( !*(_DWORD *)&this->__pad_524[336] ) /*0x5f41bd*/
        WinAPI::Wrapper(-2147467261); /*0x5f41cc*/
      if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)&this->__pad_524[336] + 16))(*(_DWORD *)&this->__pad_524[336]) ) /*0x5f41da*/
      {
        if ( !*(_DWORD *)&this->__pad_524[336] ) /*0x5f4213*/
          WinAPI::Wrapper(-2147467261); /*0x5f4222*/
        return (*(int (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)&this->__pad_524[336] + 156))( /*0x5f4232*/
                 *(_DWORD *)&this->__pad_524[336],
                 0);
      }
      else
      {
        v5[0] = this->field_9C; /*0x5f41ed*/
        v4 = this->field_0; /*0x5f41f1*/
        v5[1] = *(_DWORD *)this->__pad_A0; /*0x5f41f6*/
        v5[2] = this->field_A4; /*0x5f4204*/
        return (*(int (__thiscall **)(IUnknown *, _DWORD *))(v4 + 244))(this, v5); /*0x5f4208*/
      }
    }
  }
  return result; /*0x5f420e*/
}



// ==== 0x005F4240  ObjectClass::COMStub_29  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_29(ObjectClass *this)
{
  return 0; /*0x5f4242*/
}



// ==== 0x005F4250  ObjectClass::COMStub_28  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_28(ObjectClass *this)
{
  return 0; /*0x5f4252*/
}



// ==== 0x005F4260  ObjectClass::GetThreatLevel  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetThreatLevel(ObjectClass *this)
{
  if ( (*((unsigned __int8 (__thiscall **)(ObjectClass *))this->AbstractClass + 21))(this) ) /*0x5f4265*/
    return ((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 114))(this) >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] /*0x5f4294*/
                                                                                                  + 1056))
         + 3;
  else
    return 2; /*0x5f426c*/
}



// ==== 0x005F42A0  ObjectClass::COMStub_Ret2147483647_35  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Ret2147483647_35(ObjectClass *this)
{
  return 0x7FFFFFFF; /*0x5f42a5*/
}



// ==== 0x005F42B0  ObjectClass::COMStub_Return0_37  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_37(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f42b0*/
  return result; /*0x5f42b2*/
}



// ==== 0x005F42C0  ObjectClass::COMStub_Return0_38  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_38(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f42c0*/
  return result; /*0x5f42c2*/
}



// ==== 0x005F42D0  ObjectClass::COMStub_Return0_39  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_39(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f42d0*/
  return result; /*0x5f42d2*/
}



// ==== 0x005F42E0  ObjectClass::COMStub_Return0_40  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_40(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f42e0*/
  return result; /*0x5f42e2*/
}



// ==== 0x005F42F0  ObjectClass::COMStub_Return0_56  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_56(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5f42f0*/
}



// ==== 0x005F4300  ObjectClass::COMStub_Return0_57  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_57(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5f4300*/
}



// ==== 0x005F4310  ObjectClass::COMStub_Return0_63  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_63(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5f4310*/
}



// ==== 0x005F4320  ObjectClass::COMStub_64  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_64(ObjectClass *this)
{
  return 0; /*0x5f4322*/
}



// ==== 0x005F4330  ObjectClass::COMStub_Return0_71  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_71(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5f4330*/
}



// ==== 0x005F4340  ObjectClass::COMStub_Return0_72  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_72(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5f4340*/
}



// ==== 0x005F4350  ObjectClass::COMStub_81  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_81(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f4350*/
  return result; /*0x5f4352*/
}



// ==== 0x005F4360  ObjectClass::COMStub_80  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_80(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f4360*/
  return result; /*0x5f4362*/
}



// ==== 0x005F4370  ObjectClass::COMStub_Return0_82  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_82(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5f4370*/
}



// ==== 0x005F4380  ObjectClass::COMStub_89  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_89(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f4380*/
  return result; /*0x5f4382*/
}



// ==== 0x005F4390  ObjectClass::COMStub_90  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_90(ObjectClass *this)
{
  return 0; /*0x5f4392*/
}



// ==== 0x005F43A0  IUnknown::COMStub_Return0_93  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_93(IUnknown *this)
{
  int result; // eax

  return result; /*0x5f43a0*/
}



// ==== 0x005F43B0  IUnknown::StubReturnFalse3  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::StubReturnFalse3(IUnknown *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f43b0*/
  return result; /*0x5f43b2*/
}



// ==== 0x005F43C0  IUnknown::StubReturnTrue  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::StubReturnTrue(IUnknown *this)
{
  int result; // eax

  return result; /*0x5f43c0*/
}



// ==== 0x005F43D0  ObjectClass::COMStub_Return0_96  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_96(ObjectClass *this)
{
  return 0; /*0x5f43d2*/
}



// ==== 0x005F43E0  ObjectClass::processStateUpdate  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::processStateUpdate(ObjectClass *this)
{
  return -1; /*0x5f43e3*/
}



// ==== 0x005F43F0  IUnknown::StubReturnFalse4  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::StubReturnFalse4(IUnknown *this)
{
  int result; // eax

  return result; /*0x5f43f0*/
}



// ==== 0x005F4400  ObjectClass::COMStub_Return0_104  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_104(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5f4400*/
}



// ==== 0x005F4410  IUnknown::MoveToDirection  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::MoveToDirection(IUnknown *this)
{
  int v2; // edx
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  CellClass *v7; // eax
  _DWORD v9[3]; // [esp+18h] [ebp-Ch] BYREF
  int v10; // [esp+28h] [ebp+4h]

  (*(void (__thiscall **)(IUnknown *, _DWORD))(this->field_0 + 292))(this, 0); /*0x5f441d*/
  v2 = this->field_9C; /*0x5f4431*/
  v3 = *(_DWORD *)this->__pad_A0; /*0x5f443a*/
  v9[2] = this->field_A4; /*0x5f4448*/
  v4 = g_DDrawSurfaceManager.scenario[2 * (v10 & 7) + 102]; /*0x5f444c*/
  v5 = v3 + g_DDrawSurfaceManager.scenario[2 * (v10 & 7) + 103]; /*0x5f4451*/
  v6 = this->field_0; /*0x5f4453*/
  v9[1] = v5; /*0x5f4455*/
  v9[0] = v2 + v4; /*0x5f4465*/
  v7 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v9); /*0x5f4469*/
  if ( !(*(int (__thiscall **)(IUnknown *, CellClass *, int, int, _DWORD, int))(v6 + 428))(this, v7, v10, -1, 0, 1) ) /*0x5f4471*/
    (*(void (__thiscall **)(IUnknown *, _DWORD *))(this->field_0 + 436))(this, v9); /*0x5f4484*/
  return (*(int (__thiscall **)(IUnknown *, int))(this->field_0 + 292))(this, 1); /*0x5f4496*/
}



// ==== 0x005F44A0  IUnknown::Remove  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::Remove(IUnknown *this)
{
  int result; // eax
  int v3; // eax
  IUnknown *v4; // [esp+4h] [ebp-4h] BYREF

  LOBYTE(result) = this->__pad_74[15]; /*0x5f44a4*/
  if ( (_BYTE)result ) /*0x5f44ac*/
  {
    v4 = this; /*0x5f44be*/
    v3 = (*(int (__thiscall **)(_BYTE *, IUnknown **))(*(_DWORD *)&stru_A8EB00.?[212] + 16))(&stru_A8EB00.?[212], &v4); /*0x5f44c2*/
    if ( v3 != -1 && v3 < *(int *)&stru_A8EB00.?[228] ) /*0x5f44d2*/
    {
      --*(_DWORD *)&stru_A8EB00.?[228]; /*0x5f44d7*/
      for ( ; /*0x5f44dd*/
            v3 < *(int *)&stru_A8EB00.?[228];
            *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216]
                                                                                 + 4 * v3) )
      {
        ++v3; /*0x5f44e5*/
      }
    }
    this->__pad_74[15] = 0; /*0x5f44fc*/
    result = MapClass::GetScrollMode((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x5f4503*/
    if ( (IUnknown *)result == this ) /*0x5f450a*/
      return MapClass::SetScrollMode((int)&stru_87F5F0.__pad_58[416], 0); /*0x5f4513*/
  }
  return result; /*0x5f4518*/
}



// ==== 0x005F4520  ObjectClass::HandleSelection  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::HandleSelection(ObjectClass *this)
{
  int result; // eax
  _BYTE *v3; // edi
  House *v4; // ebx
  House *v5; // edi
  int v6; // eax
  int v7; // eax
  MapClass *v8; // [esp+0h] [ebp-Ch]
  char IsHumanPlayer; // [esp+Bh] [ebp-1h]

  if ( !stru_A8EB00.?[391] ) /*0x5f452c*/
  {
    if ( this->inLimbo /*0x5f454c*/
      || this->isSelected
      || (result = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 78))(this), !(_BYTE)result) )
    {
      LOBYTE(result) = 0; /*0x5f454f*/
      return result; /*0x5f4553*/
    }
  }
  v3 = AbstractClass::IsTechnoType((AbstractClass *)this); /*0x5f455b*/
  if ( !stru_A8EB00.?[391] ) /*0x5f4564*/
  {
    result = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 40))(this); /*0x5f456a*/
    if ( (_BYTE)result ) /*0x5f4572*/
    {
      if ( !v3 ) /*0x5f4576*/
        goto LABEL_14; /*0x5f4576*/
      if ( v3[980] ) /*0x5f4578*/
      {
        LOBYTE(result) = 0; /*0x5f4583*/
        return result; /*0x5f4587*/
      }
    }
  }
  if ( v3 ) /*0x5f458a*/
  {
    result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 468))(v3); /*0x5f4590*/
    if ( (_BYTE)result ) /*0x5f4598*/
    {
      LOBYTE(result) = 0; /*0x5f459b*/
      return result; /*0x5f459f*/
    }
  }
LABEL_14:
  result = *(_DWORD *)&stru_87F5F0.__pad_E12[1422]; /*0x5f45a0*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1422] ) /*0x5f45a7*/
  {
    LOBYTE(result) = 0; /*0x5f45aa*/
    return result; /*0x5f45ae*/
  }
  if ( *(int *)&stru_A8EB00.?[228] > 0 ) /*0x5f45b6*/
  {
    v4 = (House *)(*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 15))(this); /*0x5f45c0*/
    v5 = (House *)(*(int (__thiscall **)(_DWORD))(***(_DWORD ***)&stru_A8EB00.?[216] + 60))(**(_DWORD **)&stru_A8EB00.?[216]); /*0x5f45ce*/
    IsHumanPlayer = House::IsHumanPlayer(v5); /*0x5f45db*/
    if ( IsHumanPlayer != (unsigned __int8)House::IsHumanPlayer(v4) || !(unsigned __int8)House::IsHumanPlayer(v5) ) /*0x5f45ef*/
      MapClass::UnselectAll_ClearLimboLaunchers(v8); /*0x5f45f8*/
  }
  if ( !this /*0x5f461f*/
    || (this->? & 1) == 0
    || !*(_BYTE *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this) + 3228) )
  {
    if ( *(int *)&stru_A8EB00.?[228] < *(int *)&stru_A8EB00.?[220] /*0x5f46f2*/
      || (stru_A8EB00.?[225] || !*(_DWORD *)&stru_A8EB00.?[220])
      && *(int *)&stru_A8EB00.?[232] > 0
      && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[212] + 8))(
           &stru_A8EB00.?[212],
           *(_DWORD *)&stru_A8EB00.?[220] + *(_DWORD *)&stru_A8EB00.?[232],
           0) )
    {
      v7 = (*(_DWORD *)&stru_A8EB00.?[228])++; /*0x5f46ff*/
      *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v7) = this; /*0x5f470e*/
    }
    goto LABEL_38; /*0x5f470e*/
  }
  v6 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x5f462d*/
  if ( *(int *)&stru_A8EB00.?[228] >= *(int *)&stru_A8EB00.?[220] ) /*0x5f463a*/
  {
    if ( (stru_A8EB00.?[225] || !*(_DWORD *)&stru_A8EB00.?[220]) /*0x5f466a*/
      && *(int *)&stru_A8EB00.?[232] > 0
      && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[212] + 8))(
           &stru_A8EB00.?[212],
           *(_DWORD *)&stru_A8EB00.?[220] + *(_DWORD *)&stru_A8EB00.?[232],
           0) )
    {
      v6 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x5f4675*/
      goto LABEL_29; /*0x5f4675*/
    }
LABEL_38:
    result = Selection::SetCurrent(0); /*0x5f4711*/
    this->isSelected = 1; /*0x5f4718*/
    LOBYTE(result) = 1; /*0x5f4720*/
    return result; /*0x5f4720*/
  }
LABEL_29:
  if ( v6 ) /*0x5f467c*/
    memcpy((void *)(*(_DWORD *)&stru_A8EB00.?[216] + 4), *(const void **)&stru_A8EB00.?[216], 4 * v6); /*0x5f468c*/
  **(_DWORD **)&stru_A8EB00.?[216] = this; /*0x5f469a*/
  ++*(_DWORD *)&stru_A8EB00.?[228]; /*0x5f46a4*/
  result = Selection::SetCurrent(0); /*0x5f46a9*/
  this->isSelected = 1; /*0x5f46ae*/
  LOBYTE(result) = 1; /*0x5f46b6*/
  return result; /*0x5f454e*/
}



// ==== 0x005F4730  IUnknown::GetPlacementScreenRect  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetPlacementScreenRect(IUnknown *this)
{
  _DWORD *v2; // eax
  int v3; // edi
  int *FoundationSize; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // ebx
  int v9; // ebp
  int v10; // kr00_4
  int v11; // ecx
  char *v12; // esi
  int v13; // ecx
  int v14; // [esp+10h] [ebp-18h] BYREF
  char *v15; // [esp+14h] [ebp-14h]
  _DWORD v16[3]; // [esp+18h] [ebp-10h] BYREF
  int v17; // [esp+24h] [ebp-4h]
  int *v18; // [esp+2Ch] [ebp+4h]

  v2 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _DWORD *))(this->field_0 + 172))(this, v16); /*0x5f4745*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v2, &v14); /*0x5f4752*/
  v3 = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 108))(this); /*0x5f475e*/
  if ( v3 ) /*0x5f4762*/
  {
    FoundationSize = Building::GetFoundationSize(v16, 0); /*0x5f47a0*/
    v6 = *FoundationSize; /*0x5f47a5*/
    v7 = FoundationSize[1]; /*0x5f47a7*/
    v8 = FoundationSize[2]; /*0x5f47aa*/
    v9 = FoundationSize[3]; /*0x5f47ad*/
    v10 = *(__int16 *)(v3 + 2); /*0x5f47b5*/
    v17 = v9; /*0x5f47b7*/
    v11 = v14 + v6 - v10 / 2; /*0x5f47c3*/
    v12 = &v15[v7 - *(__int16 *)(v3 + 4) / 2]; /*0x5f47da*/
    v15 = &v12[(unsigned int)DSurface_ViewBounds.field_4]; /*0x5f47e6*/
    if ( DSurface_ViewBounds.field_0 >= DSurface_ViewBounds.field_0 + v11 + v8 /*0x5f481b*/
      || (int)DSurface_ViewBounds.field_4 >= (int)&v15[v9]
      || DSurface_ViewBounds.field_0 + *(_DWORD *)DSurface_ViewBounds.__pad_8 <= DSurface_ViewBounds.field_0 + v11
      || (int)DSurface_ViewBounds.field_4 + *(_DWORD *)&DSurface_ViewBounds.__pad_8[4] <= (int)v15 )
    {
      *v18 = dword_AC1350; /*0x5f484b*/
      v18[1] = dword_AC1354; /*0x5f4854*/
      v18[2] = dword_AC1358; /*0x5f485d*/
      v18[3] = dword_AC135C; /*0x5f4866*/
      return (int)v18; /*0x5f483c*/
    }
    else
    {
      *v18 = v11; /*0x5f4824*/
      v13 = v17; /*0x5f4826*/
      v18[1] = (int)v12; /*0x5f482a*/
      v18[2] = v8; /*0x5f482f*/
      v18[3] = v13; /*0x5f4833*/
      return (int)v18; /*0x5f481d*/
    }
  }
  else
  {
    *v18 = dword_AC1350; /*0x5f4773*/
    v18[1] = dword_AC1354; /*0x5f477c*/
    v18[2] = dword_AC1358; /*0x5f4785*/
    v18[3] = dword_AC135C; /*0x5f478e*/
    return (int)v18; /*0x5f4764*/
  }
}



// ==== 0x005F4870  IUnknown::GetBoundsRect  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetBoundsRect(IUnknown *this)
{
  _DWORD *v2; // eax
  int v3; // eax
  __int16 *v4; // esi
  unsigned int v6; // ebp
  int *FoundationSize; // eax
  int v8; // edi
  int v9; // ebx
  int v10; // edx
  int v11; // eax
  int *v12; // eax
  int v13; // ecx
  int v14; // ebp
  int v15; // esi
  int v16; // edx
  int v17; // ebp
  int v18; // eax
  int v19; // esi
  int v20; // edi
  int *v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // edi
  int v25; // eax
  int v26; // ecx
  int v27; // edi
  int v29; // [esp+Ch] [ebp-40h]
  int v30; // [esp+10h] [ebp-3Ch]
  int v31[2]; // [esp+14h] [ebp-38h] BYREF
  int v32; // [esp+1Ch] [ebp-30h] BYREF
  int v33; // [esp+20h] [ebp-2Ch]
  int v34; // [esp+24h] [ebp-28h]
  int v35; // [esp+28h] [ebp-24h]
  int v36; // [esp+30h] [ebp-1Ch]
  int v37; // [esp+38h] [ebp-14h]
  _DWORD v38[4]; // [esp+3Ch] [ebp-10h] BYREF
  _DWORD *v39; // [esp+50h] [ebp+4h]

  v2 = (_DWORD *)(*(int (__stdcall **)(int *))(this->field_0 + 172))(&v32); /*0x5f4887*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v2, v31); /*0x5f4894*/
  v3 = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 136))(this); /*0x5f489d*/
  v4 = (__int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 156))(v3); /*0x5f48ad*/
  if ( !v4 ) /*0x5f48b1*/
  {
    *v39 = dword_AC1350; /*0x5f48c1*/
    v39[1] = dword_AC1354; /*0x5f48c9*/
    v39[2] = dword_AC1358; /*0x5f48d2*/
    v39[3] = dword_AC135C; /*0x5f48db*/
    return (int)v39; /*0x5f48e1*/
  }
  v6 = 0; /*0x5f48ea*/
  if ( (*(int (__thiscall **)(IUnknown *))(this->field_0 + 44))(this) == 6 && *(_BYTE *)(this->field_520 + 5824) ) /*0x5f48fa*/
    v6 = 15; /*0x5f4904*/
  FoundationSize = Building::GetFoundationSize(&v32, v6); /*0x5f4911*/
  v8 = *FoundationSize; /*0x5f4916*/
  v36 = FoundationSize[1]; /*0x5f491b*/
  v9 = FoundationSize[2]; /*0x5f4921*/
  v10 = FoundationSize[3]; /*0x5f4924*/
  v11 = v4[3]; /*0x5f4927*/
  v37 = v10; /*0x5f492b*/
  v12 = Building::GetFoundationSize(v38, v6 + v11 / 2); /*0x5f493c*/
  v13 = *v12; /*0x5f4945*/
  v33 = v12[1]; /*0x5f494a*/
  v34 = v12[2]; /*0x5f4951*/
  v14 = v4[1]; /*0x5f4955*/
  v15 = v4[2]; /*0x5f4959*/
  v16 = v12[3]; /*0x5f495d*/
  v29 = v14; /*0x5f4960*/
  v35 = v16; /*0x5f4964*/
  v30 = v15; /*0x5f4968*/
  if ( v9 <= 0 || (v17 = v37, v37 <= 0) ) /*0x5f4974*/
  {
    v20 = v12[1]; /*0x5f49e4*/
    v19 = *v12; /*0x5f49e7*/
    v9 = v12[2]; /*0x5f49e9*/
    v17 = v12[3]; /*0x5f49ec*/
    v36 = v20; /*0x5f49ef*/
  }
  else if ( v34 <= 0 || v16 <= 0 ) /*0x5f4980*/
  {
    v19 = v8; /*0x5f49d8*/
    v20 = v36; /*0x5f49da*/
  }
  else
  {
    v18 = v36; /*0x5f4982*/
    if ( v8 > v13 ) /*0x5f4988*/
    {
      v9 += v8 - v13; /*0x5f498e*/
      v8 = v13; /*0x5f4990*/
    }
    if ( v36 > v33 ) /*0x5f4998*/
    {
      v17 = v36 - v33 + v37; /*0x5f499c*/
      v18 = v33; /*0x5f499e*/
    }
    if ( v9 + v8 < v13 + v34 ) /*0x5f49a7*/
      v9 = v34 - v8 + v13 + 1; /*0x5f49af*/
    if ( v18 + v17 < v33 + v35 ) /*0x5f49c2*/
      v17 = v33 - v18 + v35 + 1; /*0x5f49ca*/
    v19 = v8; /*0x5f49ce*/
    v20 = v18; /*0x5f49d0*/
    v36 = v18; /*0x5f49d2*/
  }
  v34 = v9; /*0x5f49f7*/
  v35 = v17; /*0x5f49fb*/
  if ( (*(int (__thiscall **)(IUnknown *))(this->field_0 + 44))(this) != 6 || !*(_DWORD *)(this->field_520 + 5400) ) /*0x5f4a17*/
  {
    v9 = v34; /*0x5f4ac5*/
    v26 = v35; /*0x5f4ac9*/
    goto LABEL_39; /*0x5f4ac9*/
  }
  v21 = Building::GetFoundationSize(v38, 0); /*0x5f4a2c*/
  v22 = *v21; /*0x5f4a35*/
  v33 = v21[1]; /*0x5f4a3a*/
  v23 = v21[2]; /*0x5f4a3e*/
  v34 = v23; /*0x5f4a41*/
  v24 = v21[3]; /*0x5f4a45*/
  v35 = v24; /*0x5f4a48*/
  if ( v9 <= 0 || v17 <= 0 ) /*0x5f4a50*/
  {
    v19 = *v21; /*0x5f4ab6*/
    v20 = v21[1]; /*0x5f4ab8*/
    v9 = v21[2]; /*0x5f4abb*/
    v25 = v21[3]; /*0x5f4abe*/
    goto LABEL_37; /*0x5f4abe*/
  }
  if ( v23 <= 0 || v24 <= 0 ) /*0x5f4a58*/
  {
    v20 = v36; /*0x5f4aac*/
    v26 = v17; /*0x5f4ab2*/
    goto LABEL_39; /*0x5f4ab4*/
  }
  v20 = v36; /*0x5f4a5a*/
  v25 = v17; /*0x5f4a60*/
  if ( v19 > v22 ) /*0x5f4a62*/
  {
    v9 += v19 - v22; /*0x5f4a68*/
    v19 = v22; /*0x5f4a6a*/
  }
  if ( v36 > v33 ) /*0x5f4a72*/
  {
    v25 = v36 - v33 + v17; /*0x5f4a76*/
    v20 = v33; /*0x5f4a78*/
  }
  if ( v9 + v19 < v22 + v23 ) /*0x5f4a81*/
    v9 = v34 - v19 + v22 + 1; /*0x5f4a89*/
  if ( v25 + v20 >= v33 + v35 ) /*0x5f4a9c*/
  {
LABEL_37:
    v26 = v25; /*0x5f4ac1*/
    goto LABEL_39; /*0x5f4ac3*/
  }
  v26 = v33 - v20 + v35 + 1; /*0x5f4aa8*/
LABEL_39:
  v27 = v31[1] + v20 - v30 / 2; /*0x5f4acd*/
  *v39 = v31[0] + v19 - v29 / 2; /*0x5f4af6*/
  v39[1] = v27; /*0x5f4af8*/
  v39[2] = v9; /*0x5f4afb*/
  v39[3] = v26; /*0x5f4b01*/
  return (int)v39; /*0x5f48bf*/
}



// ==== 0x005F4B10  ObjectClass::CalcDrawRect  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::CalcDrawRect(ObjectClass *this)
{
  int result; // eax
  int (__thiscall **vtable0)(ObjectClass *, _DWORD *); // edx
  _DWORD *v4; // eax
  int *v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi
  int v10; // edi
  int v11; // ebx
  int v12; // ebx
  int v13; // ecx
  int v14; // [esp+4h] [ebp-20h]
  int v16; // [esp+Ch] [ebp-18h] BYREF
  int v17; // [esp+10h] [ebp-14h]
  int v18; // [esp+14h] [ebp-10h] BYREF
  void *v19; // [esp+18h] [ebp-Ch]
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]
  int *v22; // [esp+28h] [ebp+4h]
  char v23; // [esp+2Ch] [ebp+8h]
  int v24; // [esp+2Ch] [ebp+8h]
  int v25; // [esp+2Ch] [ebp+8h]

  if ( (stru_A8EB00.?[391] || (result = (int)g_hWnd) == 0 || (v23 || this->needsRedraw) && !this->inLimbo) /*0x5f4b7d*/
    && ((vtable0 = (int (__thiscall **)(ObjectClass *, _DWORD *))this->AbstractClass,
         this->needsRedraw = 0,
         v4 = (_DWORD *)vtable0[43](this, &v18),
         Coord::To_Screen((Coord *)g_TacticalClass_Instance, v4, &v16))
     || (result = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 11))(this), result == 24)) )
  {
    v19 = DSurface_ViewBounds.field_4; /*0x5f4b8f*/
    v20 = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x5f4b99*/
    v21 = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x5f4ba3*/
    v5 = v22; /*0x5f4ba7*/
    v6 = 0; /*0x5f4bac*/
    v7 = 0; /*0x5f4bb1*/
    v8 = 0; /*0x5f4bb3*/
    v9 = 0; /*0x5f4bb5*/
    v10 = DSurface_ViewBounds.field_0; /*0x5f4bb8*/
    v14 = v22[2]; /*0x5f4bc0*/
    if ( v14 > 0 && v22[3] > 0 && *(int *)DSurface_ViewBounds.__pad_8 > 0 && *(int *)&DSurface_ViewBounds.__pad_8[4] > 0 ) /*0x5f4beb*/
    {
      v24 = *v22; /*0x5f4bf5*/
      if ( DSurface_ViewBounds.field_0 < *v22 ) /*0x5f4bf9*/
      {
        v10 = *v22; /*0x5f4c03*/
        v20 += DSurface_ViewBounds.field_0 - *v22; /*0x5f4c07*/
      }
      if ( v20 >= 1 ) /*0x5f4c10*/
      {
        v11 = v22[1]; /*0x5f4c16*/
        if ( (int)v19 >= v11 ) /*0x5f4c1f*/
        {
          v5 = v22; /*0x5f4c3a*/
        }
        else
        {
          v21 += (int)v19 - v11; /*0x5f4c29*/
          v5 = v22; /*0x5f4c2d*/
          v19 = (void *)v22[1]; /*0x5f4c34*/
        }
        if ( v21 >= 1 ) /*0x5f4c43*/
        {
          v5 = v22; /*0x5f4c5d*/
          if ( v10 + v20 > v14 + v24 ) /*0x5f4c57*/
            v20 = v22[2] + v24 - v10; /*0x5f4c66*/
          if ( v20 >= 1 ) /*0x5f4c75*/
          {
            v25 = v22[3] + v22[1]; /*0x5f4c83*/
            if ( (int)v19 + v21 <= v25 ) /*0x5f4c93*/
              v12 = v21; /*0x5f4c9b*/
            else
              v12 = v25 - (_DWORD)v19; /*0x5f4c95*/
            if ( v12 >= 1 ) /*0x5f4ca2*/
            {
              v7 = (int)v19; /*0x5f4ca4*/
              v8 = v20; /*0x5f4ca8*/
              v6 = v10; /*0x5f4cac*/
              v9 = v12; /*0x5f4cae*/
            }
            v5 = v22; /*0x5f4cb0*/
          }
        }
      }
    }
    *v5 = v6; /*0x5f4cb6*/
    v5[1] = v7; /*0x5f4cb8*/
    v5[2] = v8; /*0x5f4cbb*/
    v5[3] = v9; /*0x5f4cbe*/
    if ( *v5 > DSurface_ViewBounds.field_0 ) /*0x5f4ccb*/
      v16 += DSurface_ViewBounds.field_0 - *v5; /*0x5f4cd5*/
    v13 = v5[1]; /*0x5f4cd9*/
    if ( v13 > (int)DSurface_ViewBounds.field_4 ) /*0x5f4ce3*/
      v17 += (int)DSurface_ViewBounds.field_4 - v13; /*0x5f4ced*/
    result = (*((int (__thiscall **)(ObjectClass *, int *, int *))this->AbstractClass + 69))(this, &v16, v5); /*0x5f4cfd*/
    LOBYTE(result) = 1; /*0x5f4d06*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x5f4b7f*/
  }
  return result; /*0x5f4b81*/
}



// ==== 0x005F4D10  IUnknown::MarkForRedraw  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::MarkForRedraw(IUnknown *this)
{
  int result; // eax

  LOBYTE(result) = this->__pad_74[12]; /*0x5f4d10*/
  if ( !(_BYTE)result ) /*0x5f4d18*/
  {
    this->__pad_74[12] = 1; /*0x5f4d1a*/
    return MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x5f4d28*/
  }
  return result; /*0x5f4d2d*/
}



// ==== 0x005F4D30  ObjectClass::Undeploy  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::Undeploy(ObjectClass *this)
{
  _DWORD *v2; // eax
  int v3; // ecx
  int v4; // edi
  int result; // eax
  int v6; // [esp+10h] [ebp-20h] BYREF
  int v7; // [esp+14h] [ebp-1Ch]
  _DWORD v8[3]; // [esp+18h] [ebp-18h] BYREF
  _BYTE v9[12]; // [esp+24h] [ebp-Ch] BYREF

  if ( !byte_A8E9A0 || this->inLimbo[0] ) /*0x5f4d45*/
  {
    LOBYTE(result) = 0; /*0x5f4eb7*/
  }
  else
  {
    (*(void (__thiscall **)(ObjectClass *))(this->vtable0 + 336))(this); /*0x5f4d55*/
    (*(void (__thiscall **)(ObjectClass *, int))(this->vtable0 + 220))(this, 1); /*0x5f4d61*/
    (*(void (__thiscall **)(ObjectClass *, _DWORD))(this->vtable0 + 292))(this, 0); /*0x5f4d6d*/
    RemoveTarget((int)this); /*0x5f4d79*/
    AudioController::Stop((AudioController *)this->ambientSoundController); /*0x5f4d81*/
    AudioFile::Stop((AudioFile *)this->customSound_controller); /*0x5f4d89*/
    if ( (*(int (__thiscall **)(ObjectClass *))(this->vtable0 + 136))(this) /*0x5f4dcb*/
      && *(_BYTE *)((*(int (__thiscall **)(ObjectClass *))(this->vtable0 + 136))(this) + 564)
      && (!*(_DWORD *)&dword_A8B238
       || *(_DWORD *)&dword_A8B238 == 5
       || (*(int (__stdcall **)(int *))(this->vtable1 + 16))(&this->vtable1) != -2) )
    {
      VectorClass::RemoveItem((DynamicVectorClass *)&dword_87F778, (int)this); /*0x5f4dd3*/
    }
    if ( (*(int (__thiscall **)(ObjectClass *))(this->vtable0 + 136))(this) ) /*0x5f4ddc*/
    {
      if ( *(_DWORD *)((*(int (__thiscall **)(ObjectClass *))(this->vtable0 + 136))(this) + 172) ) /*0x5f4df4*/
      {
        v2 = (_DWORD *)(*(int (__thiscall **)(ObjectClass *, _BYTE *))(this->vtable0 + 72))(this, v9); /*0x5f4e0b*/
        v8[0] = *v2; /*0x5f4e10*/
        v8[1] = v2[1]; /*0x5f4e22*/
        v8[2] = v2[2]; /*0x5f4e2e*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, v8, &v6); /*0x5f4e32*/
        v3 = *(_DWORD *)((*(int (__thiscall **)(ObjectClass *))(this->vtable0 + 136))(this) + 172); /*0x5f4e41*/
        v4 = v7 - *(__int16 *)(v3 + 4) / 2; /*0x5f4e6c*/
        v6 -= *(__int16 *)(v3 + 2) / 2; /*0x5f4e70*/
        v7 = v4; /*0x5f4e74*/
        Cell::CreateCrater(v6, v4, *(__int16 *)(v3 + 2), *(__int16 *)(v3 + 4), 1); /*0x5f4e8f*/
      }
    }
    result = (*(int (__thiscall **)(ObjectClass *))(this->vtable0 + 284))(this); /*0x5f4e98*/
    this->inLimbo[0] = 1; /*0x5f4e9e*/
    this->needsRedraw[0] = 0; /*0x5f4ea5*/
    LOBYTE(result) = 1; /*0x5f4eac*/
  }
  return result; /*0x5f4eae*/
}



// ==== 0x005F4EC0  ObjectClass::Deploy  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::Deploy(ObjectClass *this)
{
  int result; // eax
  void *vtable0; // ebx
  CellClass *v4; // eax
  int (__thiscall **v5)(ObjectClass *); // eax
  int v6; // ebx
  int *v7; // eax
  _DWORD *v8; // eax
  int v9; // edx
  int (__thiscall **v10)(ObjectClass *); // eax
  int v11; // edi
  int v12; // ebp
  int v13; // eax
  char *v14; // eax
  int v15; // eax
  _BYTE *lineTrailer; // edx
  char v17; // cl
  char v18; // cl
  int v19; // eax
  int v20; // [esp+2Ch] [ebp-2Ch] BYREF
  int v21; // [esp+30h] [ebp-28h]
  int v22; // [esp+34h] [ebp-24h] BYREF
  int v23; // [esp+38h] [ebp-20h]
  int v24; // [esp+3Ch] [ebp-1Ch]
  _DWORD v25[3]; // [esp+40h] [ebp-18h] BYREF
  char v26[12]; // [esp+4Ch] [ebp-Ch] BYREF
  int *v27; // [esp+5Ch] [ebp+4h]
  __int16 v28; // [esp+5Ch] [ebp+4h]

  result = *v27; /*0x5f4ed3*/
  if ( *v27 == dword_AC1380 ) /*0x5f4ed7*/
  {
    result = dword_AC1384; /*0x5f4edc*/
    if ( v27[1] == dword_AC1384 ) /*0x5f4ee3*/
    {
      result = dword_AC1388; /*0x5f4ee8*/
      if ( v27[2] == dword_AC1388 ) /*0x5f4eef*/
        goto LABEL_41; /*0x5f4eef*/
    }
  }
  if ( !byte_A8E9A0 ) /*0x5f4efc*/
    goto LABEL_41; /*0x5f4efc*/
  if ( !this->inLimbo ) /*0x5f4f02*/
    goto LABEL_41; /*0x5f4f02*/
  if ( this->isOnMap ) /*0x5f4f10*/
    goto LABEL_41; /*0x5f4f10*/
  if ( !dword_A8E7AC ) /*0x5f4f22*/
  {
    vtable0 = this->AbstractClass; /*0x5f4f24*/
    v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v27); /*0x5f4f34*/
    result = (*((int (__thiscall **)(ObjectClass *, CellClass *, int, int, _DWORD, _DWORD))vtable0 + 107))( /*0x5f4f3c*/
               this,
               v4,
               -1,
               -1,
               0,
               0);
    if ( result ) /*0x5f4f44*/
      goto LABEL_41; /*0x5f4f44*/
  }
  v5 = (int (__thiscall **)(ObjectClass *))this->AbstractClass; /*0x5f4f4a*/
  this->inLimbo = 0; /*0x5f4f4e*/
  this->needsRedraw = 0; /*0x5f4f55*/
  v6 = v5[34](this); /*0x5f4f64*/
  v22 = *v27; /*0x5f4f6a*/
  v23 = v27[1]; /*0x5f4f71*/
  v24 = v27[2]; /*0x5f4f78*/
  if ( v6 ) /*0x5f4f7c*/
  {
    v7 = (int *)(*(int (__thiscall **)(int, _DWORD *, int *))(*(_DWORD *)v6 + 108))(v6, v25, v27); /*0x5f4f88*/
    v22 = *v7; /*0x5f4f8d*/
    v23 = v7[1]; /*0x5f4f94*/
    v24 = v7[2]; /*0x5f4f9b*/
  }
  (*((void (__thiscall **)(ObjectClass *, int *))this->AbstractClass + 109))(this, &v22); /*0x5f4fa8*/
  result = (*((int (__thiscall **)(ObjectClass *, int))this->AbstractClass + 73))(this, 1); /*0x5f4fb4*/
  if ( !(_BYTE)result ) /*0x5f4fbc*/
  {
    this->inLimbo = 1; /*0x5f521c*/
LABEL_41:
    LOBYTE(result) = 0; /*0x5f5223*/
    return result; /*0x5f5226*/
  }
  if ( this->isAliveFlag )
  {
    if ( (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 30))(this) != -1 ) /*0x5f4fda*/
      Targeting::Readd(this); /*0x5f4fe2*/
    if ( v6 ) /*0x5f4fe9*/
    {
      if ( *(_BYTE *)(v6 + 564) /*0x5f5036*/
        && ((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 11))(this) != 36
         || (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 11))(this) == 36 && *(_BYTE *)(v6 + 689))
        && (!*(_DWORD *)&dword_A8B238
         || *(_DWORD *)&dword_A8B238 == 5
         || (*((int (__stdcall **)(void **))this->? + 4))(&this->?) != -2) )
      {
        ObjectClass::SetDeployState((LogicClass *)this, 0); /*0x5f5040*/
      }
      if ( *(_DWORD *)(v6 + 172) ) /*0x5f5045*/
      {
        v8 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, char *))this->AbstractClass + 18))(this, v26); /*0x5f505c*/
        v25[0] = *v8; /*0x5f5061*/
        v25[1] = v8[1]; /*0x5f5073*/
        v25[2] = v8[2]; /*0x5f507f*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, v25, &v20); /*0x5f5083*/
        v9 = *(_DWORD *)&g_TacticalClass_Instance[45] + v21; /*0x5f50a1*/
        v10 = (int (__thiscall **)(ObjectClass *))this->AbstractClass; /*0x5f50a3*/
        v20 += *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x5f50a9*/
        v21 = v9; /*0x5f50ad*/
        v11 = *(_DWORD *)(v10[34](this) + 172); /*0x5f50b7*/
        v12 = v21 - *(__int16 *)(v11 + 4) / 2; /*0x5f50dd*/
        v20 -= *(__int16 *)(v11 + 2) / 2; /*0x5f50df*/
        v21 = v12; /*0x5f50e3*/
        v13 = __2_YAPAXI_Z(0x40u); /*0x5f50e7*/
        if ( v13 ) /*0x5f50f1*/
          AlphaShapeClass::CTOR(v13, (int)this, v20, v21); /*0x5f5100*/
        if ( !dword_A8E7AC ) /*0x5f510c*/
          Cell::CreateCrater( /*0x5f5146*/
            v20 - *(_DWORD *)&g_TacticalClass_Instance[44],
            v21 - *(_DWORD *)&g_TacticalClass_Instance[45],
            *(__int16 *)(v11 + 2),
            *(__int16 *)(v11 + 4),
            1);
      }
    }
    result = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this); /*0x5f514f*/
    if ( *(_BYTE *)(result + 570) )
    {
      v14 = (char *)__2_YAPAXI_Z(0x210u); /*0x5f5168*/
      result = v14 ? (int)ObjectClass::checkLimbo(v14) : 0;
      this->lineTrailer = (void *)result; /*0x5f5181*/
      if ( result ) /*0x5f5187*/
      {
        v28 = *(_WORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6243); /*0x5f519e*/
        if ( (_BYTE)v28 /*0x5f51b4*/
          || __PAIR16__(HIBYTE(v28), 0) != *(unsigned __int8 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6245) )
        {
          v18 = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6245); /*0x5f51e2*/
          *(_WORD *)result = *(_WORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6243); /*0x5f51e5*/
          *(_BYTE *)(result + 2) = v18; /*0x5f51e8*/
        }
        else
        {
          v15 = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this); /*0x5f51be*/
          lineTrailer = this->lineTrailer; /*0x5f51c4*/
          v17 = *(_BYTE *)(v15 + 573); /*0x5f51d4*/
          *(_WORD *)lineTrailer = *(_WORD *)(v15 + 571); /*0x5f51d7*/
          lineTrailer[2] = v17; /*0x5f51da*/
        }
        v19 = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this); /*0x5f51ef*/
        result = ObjectClass::updateMissionState((ObjectClass *)this->lineTrailer, *(_DWORD *)(v19 + 576)); /*0x5f5202*/
        *((_DWORD *)this->lineTrailer + 1) = this; /*0x5f520d*/
      }
    }
  }
  LOBYTE(result) = 1; /*0x5f5210*/
  return result; /*0x5f5212*/
}



// ==== 0x005F5230  ObjectClass::Unlink  this=ObjectClass  sig=csp ====
int __thiscall Object::Unlink(ObjectClass *this)
{
  int result; // eax
  AnimClass *v2; // [esp+4h] [ebp+4h]
  char v3; // [esp+8h] [ebp+8h]

  result = (int)this->attachedTag; /*0x5f5230*/
  if ( (AnimClass *)result == v2 && result ) /*0x5f523d*/
  {
    --*(_DWORD *)(result + 44); /*0x5f5244*/
    this->attachedTag = 0; /*0x5f5247*/
  }
  LOBYTE(result) = v3; /*0x5f524f*/
  if ( v3 ) /*0x5f5255*/
  {
    result = (int)this->nextObject; /*0x5f5257*/
    if ( v2 == (AnimClass *)result ) /*0x5f525c*/
    {
      if ( v2 ) /*0x5f5260*/
      {
        result = *(_DWORD *)(result + 48); /*0x5f5262*/
        this->nextObject = (ObjectClass *)result; /*0x5f5265*/
      }
    }
  }
  if ( v2 == this->parachute ) /*0x5f526e*/
    this->parachute = 0; /*0x5f5270*/
  return result; /*0x5f527a*/
}



// ==== 0x005F5280  ObjectClass::Destroy2  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::Destroy2(ObjectClass *this)
{
  TacticalClass *lineTrailer; // ecx
  House *v3; // edi
  bool v4; // bl
  int v5; // edx
  int result; // eax
  char v7; // [esp+Ch] [ebp+4h]

  lineTrailer = (TacticalClass *)this->lineTrailer; /*0x5f5284*/
  if ( lineTrailer ) /*0x5f528c*/
  {
    TacticalClass::GetField(lineTrailer); /*0x5f528e*/
    this->lineTrailer = 0; /*0x5f5293*/
  }
  v3 = (House *)(*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 15))(this); /*0x5f52a6*/
  v4 = 0; /*0x5f52ac*/
  if ( v7 ) /*0x5f52b0*/
    goto LABEL_10; /*0x5f52b0*/
  if ( this && (this->? & 1) != 0 ) /*0x5f52c0*/
    v4 = (*((unsigned __int8 (__thiscall **)(ObjectClass *))this->AbstractClass + 202))(this) != 0; /*0x5f52d0*/
  if ( !v3 || !(unsigned __int8)House::IsHumanPlayer(v3) && !v4 ) /*0x5f52e3*/
LABEL_10:
    (*((void (__thiscall **)(ObjectClass *))this->AbstractClass + 84))(this); /*0x5f52e9*/
  if ( (ObjectClass *)MapClass::GetScrollMode((MapClass *)&stru_87F5F0.__pad_58[416]) == this ) /*0x5f52fd*/
    MapClass::SetScrollMode((int)&stru_87F5F0.__pad_58[416], 0); /*0x5f5306*/
  LOBYTE(v5) = v7; /*0x5f530b*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, v5); /*0x5f5311*/
  return result; /*0x5f5316*/
}



// ==== 0x005F5320  ObjectClass::ProcessInputKey  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::ProcessInputKey(ObjectClass *this)
{
  double health; // [esp+0h] [ebp-8h]
  int v3; // [esp+10h] [ebp+8h]

  if ( v3 == 13 ) /*0x5f532a*/
  {
    (*((void (__thiscall **)(ObjectClass *, int))this->AbstractClass + 73))(this, 2); /*0x5f5374*/
  }
  else
  {
    if ( v3 != 34 ) /*0x5f532f*/
      return 0; /*0x5f5336*/
    health = (double)this->health; /*0x5f533e*/
    if ( health / (double)*(int *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this) + 160) >= *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5880) ) /*0x5f5363*/
      return 10; /*0x5f536d*/
  }
  return 1; /*0x5f5333*/
}



// ==== 0x005F5390  ObjectClass::CreateDestructionEffect  this=ObjectClass  sig=csp ====
int __thiscall TechnoClass::CreateDestructionEffect(TechnoClass *this)
{
  int v2; // ebp
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v7; // edx
  double v8; // st7
  int v9; // eax
  AnimClass *v10; // eax
  int v11; // eax
  int vtable0; // edx
  int v13; // ebp
  TeamClass *attachedTag; // ecx
  TeamClass *v15; // ecx
  TeamClass *v16; // ecx
  TeamClass *v17; // ecx
  TeamClass *v18; // ecx
  TeamClass *v19; // ecx
  TeamClass *v20; // ecx
  int v21; // ecx
  TeamClass *v22; // ecx
  TeamClass *v23; // ecx
  int v24; // [esp+10h] [ebp-14h]
  int health; // [esp+14h] [ebp-10h]
  int v26[3]; // [esp+18h] [ebp-Ch] BYREF
  int *v27; // [esp+28h] [ebp+4h]
  int v28; // [esp+2Ch] [ebp+8h]
  int v29; // [esp+30h] [ebp+Ch]
  int v30; // [esp+34h] [ebp+10h]
  char v31; // [esp+38h] [ebp+14h]
  int v32; // [esp+38h] [ebp+14h]
  int v33; // [esp+40h] [ebp+1Ch]

  v24 = 0; /*0x5f5399*/
  health = this->health; /*0x5f53a6*/
  if ( health <= 0 /*0x5f53cd*/
    || !*v27
    || !v31 && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 136))(this) + 563) )
  {
    return v24; /*0x5f583b*/
  }
  v2 = *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 136))(this) + 160); /*0x5f53e5*/
  if ( !v31 ) /*0x5f53f1*/
  {
    v3 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 136))(this); /*0x5f53fc*/
    *v27 = ComputeTechnoClassDamageFalloff(*v27, v29, *(_DWORD *)(v3 + 156), v28); /*0x5f5414*/
  }
  if ( this
    && (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) == 6
    && !*(_BYTE *)(((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) == 6
                  ? this + 1
                  : (TechnoClass *)1312)->vtable0
                 + 5495) )
  {
    v4 = *v27; /*0x5f5448*/
    if ( *v27 < 1 ) /*0x5f544d*/
      v4 = 1; /*0x5f544f*/
    *v27 = v4; /*0x5f5454*/
  }
  v5 = *v27; /*0x5f5456*/
  if ( !*v27 ) /*0x5f5456*/
    return 0; /*0x5f5465*/
  if ( *v27 >= 0 ) /*0x5f5468*/
  {
    v24 = 1; /*0x5f549c*/
    if ( health <= v5 ) /*0x5f54a6*/
    {
      *v27 = health; /*0x5f54c2*/
    }
    else if ( health >= v2 >> 1 && health - v5 < v2 >> 1 ) /*0x5f54b6*/
    {
      v24 = 2; /*0x5f54b8*/
    }
    v8 = (double)v2 * *(double *)dword_8871E0->RefundPercent; /*0x5f54cd*/
    if ( (double)health > v8 && (double)(health - *v27) < v8 ) /*0x5f54f7*/
      v24 = 3; /*0x5f54f9*/
    v9 = health - *v27; /*0x5f5509*/
    this->health = v9; /*0x5f550d*/
    if ( v9 > 0 /*0x5f5542*/
      || (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) != 15
      || v31
      || !*(_BYTE *)(this->health + 3756)
      || *((_BYTE *)this + 1755) )
    {
      v13 = v24; /*0x5f55ea*/
    }
    else
    {
      v10 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x5f5555*/
      if ( v10 ) /*0x5f555f*/
      {
        v26[0] = this->location[0]; /*0x5f5574*/
        v26[1] = this->location[1]; /*0x5f557d*/
        v26[2] = this->location[2]; /*0x5f5589*/
        AnimClass::ctor(v10, (void *)dword_8871E0->Behind, v26, 0, 1, (void *)0x600, 0, 0); /*0x5f559c*/
      }
      LOWORD(v11) = Math::RoundToInt((double)*(int *)(this->health + 160) * 0.25); /*0x5f55b3*/
      this->health = v11; /*0x5f55bb*/
      if ( v11 <= 1 ) /*0x5f55be*/
        v11 = 1; /*0x5f55c0*/
      vtable0 = this->vtable0; /*0x5f55c5*/
      this->health = v11; /*0x5f55cf*/
      *((_BYTE *)this + 1755) = 1; /*0x5f55d2*/
      (*(void (__thiscall **)(TechnoClass *, int, int, _DWORD))(vtable0 + 1368))(this, 6, 1, 0); /*0x5f55d9*/
      v13 = 3; /*0x5f55df*/
      v24 = 3; /*0x5f55e4*/
    }
    v32 = this->health; /*0x5f55f8*/
    if ( v13 == 2 ) /*0x5f55fc*/
    {
      if ( v30 ) /*0x5f5600*/
      {
        attachedTag = (TeamClass *)this->attachedTag; /*0x5f5602*/
        if ( attachedTag ) /*0x5f5607*/
          TeamClass::Update_0(attachedTag, 39, (int)this, dword_AC1360, 0, 0); /*0x5f5617*/
      }
      if ( !this->isAliveFlag[0] ) /*0x5f5624*/
        return 5; /*0x5f5624*/
      v15 = (TeamClass *)this->attachedTag; /*0x5f562a*/
      if ( v15 ) /*0x5f562f*/
        TeamClass::Update_0(v15, 42, (int)this, dword_AC1360, 0, 0); /*0x5f563e*/
    }
    if ( this->isAliveFlag[0] ) /*0x5f5643*/
    {
      if ( v13 == 3 ) /*0x5f5654*/
      {
        if ( v30 ) /*0x5f5658*/
        {
          v16 = (TeamClass *)this->attachedTag; /*0x5f565a*/
          if ( v16 ) /*0x5f565f*/
            TeamClass::Update_0(v16, 40, (int)this, dword_AC1360, 0, 0); /*0x5f566f*/
        }
        if ( !this->isAliveFlag[0] ) /*0x5f567c*/
          return 5; /*0x5f567c*/
        v17 = (TeamClass *)this->attachedTag; /*0x5f5682*/
        if ( v17 ) /*0x5f5687*/
          TeamClass::Update_0(v17, 43, (int)this, dword_AC1360, 0, 0); /*0x5f5696*/
      }
      if ( this->isAliveFlag[0] ) /*0x5f569b*/
      {
        if ( this->health != health /*0x5f56d6*/
          && (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 136))(this)
          && health == *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 136))(this) + 160) )
        {
          if ( v30 ) /*0x5f56da*/
          {
            v18 = (TeamClass *)this->attachedTag; /*0x5f56dc*/
            if ( v18 ) /*0x5f56e1*/
              TeamClass::Update_0(v18, 38, (int)this, dword_AC1360, 0, 0); /*0x5f56f1*/
          }
          v19 = (TeamClass *)this->attachedTag; /*0x5f56f6*/
          if ( v19 && this->isAliveFlag[0] ) /*0x5f56fd*/
            TeamClass::Update_0(v19, 41, (int)this, dword_AC1360, 0, 0); /*0x5f5714*/
          v20 = (TeamClass *)this->attachedTag; /*0x5f5719*/
          if ( v20 ) /*0x5f571e*/
          {
            if ( !this->isAliveFlag[0] ) /*0x5f5728*/
              return 5; /*0x5f5728*/
            if ( v30 ) /*0x5f5730*/
              TeamClass::Update_0(v20, 41, (int)this, dword_AC1360, 0, v30); /*0x5f573f*/
          }
        }
        if ( this->isAliveFlag[0] && (v32 <= 0 || this->health > 0) ) /*0x5f575f*/
        {
          v21 = 0; /*0x5f5768*/
          if ( !this->health ) /*0x5f5765*/
          {
            if ( v30 ) /*0x5f5770*/
              v21 = *(_DWORD *)(v30 + 540); /*0x5f5772*/
            if ( !v33 || v30 && v33 == v21 ) /*0x5f5786*/
              (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 224))(this, v30); /*0x5f579a*/
            else
              (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 228))(this, v33); /*0x5f578d*/
            v13 = 4; /*0x5f57a2*/
            v24 = 4; /*0x5f57ab*/
            (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 220))(this, 1); /*0x5f57af*/
          }
          if ( this->isAliveFlag[0] ) /*0x5f57b5*/
          {
            if ( v30 ) /*0x5f57c1*/
            {
              v22 = (TeamClass *)this->attachedTag; /*0x5f57c3*/
              if ( v22 ) /*0x5f57c8*/
              {
                if ( v13 != 4 ) /*0x5f57cd*/
                  TeamClass::Update_0(v22, 6, (int)this, dword_AC1360, 0, v30); /*0x5f57db*/
              }
            }
            if ( this->isAliveFlag[0] ) /*0x5f57e0*/
            {
              if ( v30 ) /*0x5f57ec*/
              {
                v23 = (TeamClass *)this->attachedTag; /*0x5f57ee*/
                if ( v23 ) /*0x5f57f3*/
                {
                  if ( v13 != 4 ) /*0x5f57f8*/
                    TeamClass::Update_0(v23, 44, (int)this, dword_AC1360, 0, v30); /*0x5f5807*/
                }
              }
              if ( this->isAliveFlag[0] && this->isSelected[0] ) /*0x5f581a*/
                (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 292))(this, 2); /*0x5f582a*/
            }
          }
          return v24; /*0x5f582a*/
        }
      }
    }
    return 5; /*0x5f5841*/
  }
  v7 = this->health; /*0x5f546a*/
  this->health = v7 - v5; /*0x5f5473*/
  if ( v7 - v5 > v2 ) /*0x5f5476*/
    this->health = v2; /*0x5f5478*/
  if ( v7 != this->health ) /*0x5f547e*/
    (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 328))(this, 7); /*0x5f5486*/
  return 0; /*0x5f545c*/
}



// ==== 0x005F5850  ObjectClass::UpdateProductionDisplay  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::UpdateProductionDisplay(TechnoClass *this)
{
  int result; // eax
  int v3; // ebx
  int v4; // edi
  int vtable0; // edx
  int v6; // [esp+Ch] [ebp+4h] BYREF

  if ( !this->inLimbo[0] ) /*0x5f5854*/
  {
    v3 = v6; /*0x5f5862*/
    if ( v6 == 2 ) /*0x5f5869*/
    {
      if ( !this->needsRedraw[0] && this->isOnMap[0] ) /*0x5f5879*/
      {
        result = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 308))(this); /*0x5f5886*/
        LOBYTE(result) = 1; /*0x5f588d*/
        return result; /*0x5f5890*/
      }
    }
    else
    {
      if ( (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) != 6 /*0x5f58b2*/
        || (result = *((_DWORD *)this + 328), !*(_DWORD *)(result + 3672))
        || v3 )
      {
        result = (int)AbstractClass::IsTechnoType(this); /*0x5f58b6*/
        v4 = result; /*0x5f58bb*/
        if ( result ) /*0x5f58bf*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)result + 704))(result); /*0x5f58c5*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 56))(v4); /*0x5f58cf*/
          result = (*(int (__thiscall **)(TechnoClass *, int *))(this->vtable0 + 440))(this, &v6); /*0x5f58db*/
        }
      }
      if ( (v3 == 1 || v3 == 3) && !this->isOnMap[0] ) /*0x5f58ec*/
      {
        vtable0 = this->vtable0; /*0x5f58f3*/
        this->isOnMap[0] = 1; /*0x5f58f7*/
        result = (*(int (__thiscall **)(TechnoClass *))(vtable0 + 308))(this); /*0x5f58fb*/
        LOBYTE(result) = 1; /*0x5f5902*/
        return result; /*0x5f5905*/
      }
      if ( !v3 && this->isOnMap[0] ) /*0x5f590c*/
      {
        this->isOnMap[0] = 0; /*0x5f5913*/
        LOBYTE(result) = 1; /*0x5f5917*/
        return result; /*0x5f591a*/
      }
    }
  }
  LOBYTE(result) = 0; /*0x5f591e*/
  return result; /*0x5f588c*/
}



// ==== 0x005F5930  ObjectClass::IsNotNull  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::IsNotNull(ObjectClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return v2 != 0; /*0x5f593b*/
}



// ==== 0x005F5940  IUnknown::ParachuteDrop  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::ParachuteDrop(IUnknown *this)
{
  int *v1; // edi
  int result; // eax
  bool *v4; // ebp
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  BuildingClass *v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // edi
  int TileIndex; // [esp-10h] [ebp-28h]
  int v13; // [esp-Ch] [ebp-24h]
  int v14[3]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v15; // [esp+1Ch] [ebp+4h] BYREF

  v1 = v15; /*0x5f5946*/
  result = IsCoordVisibleMap((ObjectClass *)&stru_87F5F0.__pad_58[416], v15); /*0x5f5952*/
  if ( (_BYTE)result ) /*0x5f5959*/
  {
    this->__pad_8C[1] = 1; /*0x5f5965*/
    result = (int)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v1); /*0x5f596c*/
    v4 = (bool *)result; /*0x5f5971*/
    if ( result ) /*0x5f5975*/
    {
      if ( (*(_DWORD *)(result + 320) & 0x100) == 0 /*0x5f5996*/
        || (this->__pad_8C[0] = 1, result = *(_DWORD *)(result + 320), (result & 0x200) != 0) )
      {
        if ( !this ) /*0x5f599e*/
          goto LABEL_23; /*0x5f599e*/
        LOBYTE(v15) = this->__pad_14[0] & 1; /*0x5f59a9*/
        if ( !(_BYTE)v15 ) /*0x5f59ad*/
          goto LABEL_23; /*0x5f59ad*/
        v5 = *(_DWORD *)((*(int (__thiscall **)(IUnknown *))(this->field_0 + 132))(this) + 1460); /*0x5f59bd*/
        LOWORD(v15) = *v1 / 256; /*0x5f59d5*/
        v13 = v5; /*0x5f59e4*/
        v6 = (unsigned __int8)this->__pad_8C[0]; /*0x5f59e7*/
        HIWORD(v15) = v1[1] / 256; /*0x5f59f0*/
        TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&v15, v5, v6); /*0x5f5a10*/
        v7 = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 132))(this); /*0x5f5a17*/
        result = Cell::IsBuildable(v4, *(_DWORD *)(v7 + 1660), 0, 0, TileIndex, v13, -1, 1); /*0x5f5a26*/
        if ( (_BYTE)result ) /*0x5f5a2d*/
        {
LABEL_23:
          result = (*(int (__thiscall **)(IUnknown *, int *, int))(this->field_0 + 216))(this, v1, 128); /*0x5f5a3d*/
          if ( (_BYTE)result ) /*0x5f5a45*/
          {
            (*(void (__thiscall **)(IUnknown *, int *))(this->field_0 + 436))(this, v1); /*0x5f5a50*/
            if ( (*(int (__thiscall **)(IUnknown *))(this->field_0 + 44))(this) == 8 ) /*0x5f5a60*/
            {
              result = __2_YAPAXI_Z(0x1C8u); /*0x5f5a67*/
              if ( !result ) /*0x5f5a71*/
              {
LABEL_19:
                LOBYTE(result) = 1; /*0x5f5b36*/
                return result; /*0x5f5b3e*/
              }
              result = (int)AnimClass::ctor( /*0x5f5a94*/
                              (AnimClass *)result,
                              *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3000),
                              v1,
                              0,
                              1,
                              (void *)0x600,
                              0,
                              0);
              v8 = (BuildingClass *)result; /*0x5f5a99*/
            }
            else
            {
              v9 = *v1; /*0x5f5a9d*/
              v10 = v1[1]; /*0x5f5a9f*/
              v11 = v1[2] + 75; /*0x5f5aaa*/
              v14[0] = v9; /*0x5f5aad*/
              v14[1] = v10; /*0x5f5ab1*/
              v14[2] = v11; /*0x5f5ab5*/
              result = __2_YAPAXI_Z(0x1C8u); /*0x5f5ab9*/
              if ( result ) /*0x5f5ac3*/
              {
                result = (int)AnimClass::ctor( /*0x5f5ae6*/
                                (AnimClass *)result,
                                *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3004),
                                v14,
                                0,
                                1,
                                (void *)0x600,
                                0,
                                0);
                v8 = (BuildingClass *)result; /*0x5f5aeb*/
              }
              else
              {
                v8 = 0; /*0x5f5aef*/
              }
              this->field_88 = (int)v8; /*0x5f5af1*/
            }
            if ( v8 ) /*0x5f5af9*/
            {
              BuildingClass::AimTurret(v8, this); /*0x5f5afe*/
              result = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 44))(this); /*0x5f5b07*/
              if ( result != 8 ) /*0x5f5b0d*/
              {
                v8->?[0] = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 484))(this); /*0x5f5b19*/
                result = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 444))(this); /*0x5f5b23*/
                v8->?[1] = *(__int16 *)(result + 266); /*0x5f5b30*/
              }
            }
            goto LABEL_19; /*0x5f5b30*/
          }
        }
      }
    }
  }
  LOBYTE(result) = 0; /*0x5f5b43*/
  return result; /*0x5f5b36*/
}



// ==== 0x005F5B50  ObjectClass::SetReference  this=ObjectClass  sig=csp ====
char __thiscall ObjectClass::SetReference(ObjectClass *this, int a2)
{
  TagClass *attachedTag; // eax

  attachedTag = this->attachedTag; /*0x5f5b50*/
  if ( attachedTag ) /*0x5f5b55*/
  {
    --attachedTag->instanceCount; /*0x5f5b5b*/
    this->attachedTag = 0; /*0x5f5b5e*/
  }
  if ( !a2 ) /*0x5f5b6b*/
    return 0; /*0x5f5b7c*/
  this->attachedTag = (TagClass *)a2; /*0x5f5b6d*/
  ++*(_DWORD *)(a2 + 44); /*0x5f5b74*/
  return 1; /*0x5f5b79*/
}



// ==== 0x005F5B90  ObjectClass::GetOrCreateResHandle  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetOrCreateResHandle(ObjectClass *this)
{
  int v3; // eax
  int v4; // [esp+Ch] [ebp+4h]

  if ( (byte_AC1398 & 1) == 0 ) /*0x5f5b9e*/
  {
    byte_AC1398 |= 1u; /*0x5f5bbc*/
    dword_AC139C = 2147450879; /*0x5f5bc2*/
    atexit(nullsub_205); /*0x5f5bc7*/
  }
  if ( !(*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this) ) /*0x5f5bd3*/
    return (int)&dword_AC139C; /*0x5f5bdd*/
  v3 = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this); /*0x5f5beb*/
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 144))(v3, v4); /*0x5f5be2*/
}



// ==== 0x005F5C10  nullsub_205  this=-  sig=ida-proto ====
void __cdecl nullsub_205()
{
  ; /*0x5f5c10*/
}



// ==== 0x005F5C20  IUnknown::Fire  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::Fire(IUnknown *this)
{
  int *v2; // edi
  int v3; // ebx
  int v5; // [esp-4h] [ebp-10h]
  int v6; // [esp+10h] [ebp+4h]
  int v7; // [esp+14h] [ebp+8h]

  v2 = (int *)(*(int (__thiscall **)(IUnknown *))(this->field_0 + 136))(this); /*0x5f5c2f*/
  v3 = *v2; /*0x5f5c33*/
  v5 = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 60))(this); /*0x5f5c3c*/
  return (*(int (__thiscall **)(int *, int, int, _DWORD, int))(v3 + 148))(v2, v6, v7, 0, v5); /*0x5f5c4d*/
}



// ==== 0x005F5C60  BuildingClass::GetHealthRatio  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetHealthRatio(BuildingClass *this)
{
  return (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))this->TechnoClass + 34))( /*0x5f5c7c*/
           this,
           COERCE_UNSIGNED_INT64((double)this->?),
           HIDWORD(COERCE_UNSIGNED_INT64((double)this->?)));
}



// ==== 0x005F5CD0  BuildingClass::IsHealthLow  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsHealthLow(BuildingClass *this)
{
  double health; // [esp+4h] [ebp-8h]

  health = (double)this->?; /*0x5f5cdb*/
  return health / (double)*(int *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 34))(this) + 160) <= *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5896) /*0x5f5d0e*/
      && this->? > 0;
}



// ==== 0x005F5D20  ObjectClass::IsYellowHP  this=ObjectClass  sig=csp ====
BOOL __thiscall ObjectClass::IsYellowHP(ObjectClass *this)
{
  BOOL result; // eax
  double health; // [esp+4h] [ebp-8h]
  double v4; // [esp+4h] [ebp-8h]

  health = (double)this->health; /*0x5f5d2b*/
  result = 0; /*0x5f5d89*/
  if ( health / (double)*(int *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this) + 160) > *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5896) ) /*0x5f5d50*/
  {
    v4 = (double)this->health; /*0x5f5d59*/
    if ( v4 / (double)*(int *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this) + 160) <= *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5888) ) /*0x5f5d7d*/
      return 1; /*0x5f5d50*/
  }
  return result; /*0x5f5d84*/
}



// ==== 0x005F5D90  ObjectClass::IsGreenHP  this=ObjectClass  sig=csp ====
BOOL __thiscall ObjectClass::IsGreenHP(ObjectClass *this)
{
  double health; // [esp+0h] [ebp-8h]

  health = (double)this->health; /*0x5f5d98*/
  return health / (double)*(int *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this) + 160) > *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5888); /*0x5f5dc4*/
}



// ==== 0x005F5DD0  BuildingClass::GetSellPriority  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetSellPriority(BuildingClass *this)
{
  int result; // eax
  double v3; // st7
  double health; // [esp+4h] [ebp-8h]
  double v5; // [esp+4h] [ebp-8h]
  double v6; // [esp+4h] [ebp-8h]

  health = (double)this->?; /*0x5f5ddb*/
  if ( health / (double)*(int *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 34))(this) + 160) <= *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5896) /*0x5f5e07*/
    && this->? > 0 )
  {
    return 0; /*0x5f5e09*/
  }
  v5 = (double)this->?; /*0x5f5e17*/
  if ( v5 / (double)*(int *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 34))(this) + 160) <= *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5896) ) /*0x5f5e3b*/
    return 2; /*0x5f5e3b*/
  v6 = (double)this->?; /*0x5f5e44*/
  v3 = v6 / (double)*(int *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 34))(this) + 160); /*0x5f5e59*/
  result = 1; /*0x5f5e68*/
  if ( v3 > *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5888) ) /*0x5f5e6d*/
    return 2; /*0x5f5e6f*/
  return result; /*0x5f5e0b*/
}



// ==== 0x005F5E80  ObjectClass::SaveLoad_Register  this=ObjectClass  sig=csp ====
int __thiscall BuildingClass::SaveLoad_Register(ObjectClass *this)
{
  int result; // eax
  int v2; // [esp+8h] [ebp+4h]
  int v3; // [esp+Ch] [ebp+8h]

  result = AbstractClass::SaveLoad_Prefix_0((_DWORD *)v2, v3); /*0x5f5e8b*/
  if ( result >= 0 ) /*0x5f5e92*/
  {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 48)); /*0x5f5e9d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 52)); /*0x5f5eab*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 56)); /*0x5f5eb9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 24)); /*0x5f5ec7*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 136)); /*0x5f5ed8*/
    AudioController::Init((AudioController *)(v2 + 60)); /*0x5f5ee0*/
    AudioController::Init((AudioController *)(v2 + 80)); /*0x5f5ee8*/
    *(_DWORD *)(v2 + 168) = 0; /*0x5f5eed*/
    return 0; /*0x5f5ef7*/
  }
  return result; /*0x5f5ef9*/
}



// ==== 0x005F5F00  ObjectClass::GetLandHeight  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetLandHeight(ObjectClass *this)
{
  return *(char *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 111))(this) + 283)
       + (this->onBridge != 0 ? 4 : 0);
}



// ==== 0x005F5F30  ObjectClass::GetMember41  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetMember41(ObjectClass *this)
{
  return this->location[2]; /*0x5f5f36*/
}



// ==== 0x005F5F40  IUnknown::GetZAboveGround  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetZAboveGround(IUnknown *this)
{
  int v2; // ecx
  _DWORD v4[3]; // [esp+4h] [ebp-Ch] BYREF

  v4[0] = this->field_9C; /*0x5f5f52*/
  v4[1] = *(_DWORD *)this->__pad_A0; /*0x5f5f63*/
  v4[2] = this->field_A4; /*0x5f5f6a*/
  v2 = this->field_A4 - Cell::GetGroundHeight(v4); /*0x5f5f79*/
  if ( this->__pad_8C[0] ) /*0x5f5f7b*/
    v2 -= dword_AC13BC; /*0x5f5f86*/
  return v2; /*0x5f5f83*/
}



// ==== 0x005F5FA0  IUnknown::SetZ  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::SetZ(IUnknown *this)
{
  int v2; // edi
  __int64 GroundHeight; // rax
  int result; // eax
  int v5; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]
  int v8; // [esp+18h] [ebp+4h]

  v2 = v8; /*0x5f5fa7*/
  if ( this->__pad_8C[0] ) /*0x5f5fab*/
    v2 = dword_AC13BC + v8; /*0x5f5fb5*/
  if ( this->__pad_74[0] ) /*0x5f5fbb*/
  {
    (*(void (__thiscall **)(IUnknown *, _DWORD))(this->field_0 + 292))(this, 0); /*0x5f5fc8*/
    v5 = this->field_9C; /*0x5f5fda*/
    v6 = *(_DWORD *)this->__pad_A0; /*0x5f5fe6*/
    v7 = this->field_A4; /*0x5f5fed*/
    GroundHeight = Cell::GetGroundHeight(&v5); /*0x5f5ff6*/
    this->field_A4 = v2 + GroundHeight; /*0x5f5fff*/
    return (*(int (__fastcall **)(IUnknown *, _DWORD, int))(this->field_0 + 292))(this, HIDWORD(GroundHeight), 1); /*0x5f6009*/
  }
  else
  {
    v5 = this->field_9C; /*0x5f6023*/
    v6 = *(_DWORD *)this->__pad_A0; /*0x5f602f*/
    v7 = this->field_A4; /*0x5f6036*/
    result = v2 + Cell::GetGroundHeight(&v5); /*0x5f6044*/
    this->field_A4 = result; /*0x5f6047*/
  }
  return result; /*0x5f600f*/
}



// ==== 0x005F6060  ObjectClass::SetAnim  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::SetAnim(ObjectClass *this, int a2)
{
  int (__thiscall **vtable0)(ObjectClass *, int); // edx

  if ( this->isOnMap ) /*0x5f6063*/
  {
    (*((void (__thiscall **)(ObjectClass *, _DWORD))this->AbstractClass + 73))(this, 0); /*0x5f606e*/
    vtable0 = (int (__thiscall **)(ObjectClass *, int))this->AbstractClass; /*0x5f6078*/
    this->location[2] = a2; /*0x5f607a*/
    return vtable0[73](this, 1); /*0x5f6084*/
  }
  else
  {
    this->location[2] = a2; /*0x5f6092*/
    return a2; /*0x5f608e*/
  }
}



// ==== 0x005F60A0  ObjectClass::SetCellOverlayFlag  this=ObjectClass  sig=csp ====
int __thiscall MapClass::SetCellOverlayFlag(ObjectClass *this)
{
  CellClass *v1; // eax
  int altOccupationFlags; // ecx
  int result; // eax
  CellClass *v4; // eax
  int occupationFlags; // ecx
  _DWORD *v6; // [esp+8h] [ebp+4h]

  if ( (signed int)(dword_AC13BC + Cell::GetGroundHeight(v6)) <= v6[2] /*0x5f60d3*/
    && (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6)->flags[0] & 0x100) != 0 )
  {
    v1 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6); /*0x5f60db*/
    altOccupationFlags = v1->altOccupationFlags; /*0x5f60e0*/
    result = (int)&v1->altOccupationFlags; /*0x5f60e6*/
    *(_DWORD *)result = altOccupationFlags | 0x40; /*0x5f60ef*/
  }
  else
  {
    v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6); /*0x5f60fa*/
    occupationFlags = v4->occupationFlags; /*0x5f60ff*/
    result = (int)&v4->occupationFlags; /*0x5f6105*/
    *(_DWORD *)result = occupationFlags | 0x40; /*0x5f610e*/
  }
  return result; /*0x5f60ee*/
}



// ==== 0x005F6120  ObjectClass::ClearCellOverlayFlag  this=ObjectClass  sig=csp ====
int __thiscall MapClass::ClearCellOverlayFlag(ObjectClass *this)
{
  CellClass *v1; // eax
  int altOccupationFlags; // ecx
  int result; // eax
  CellClass *v4; // eax
  int occupationFlags; // ecx
  _DWORD *v6; // [esp+8h] [ebp+4h]

  if ( (signed int)(dword_AC13BC + Cell::GetGroundHeight(v6)) <= v6[2] /*0x5f6153*/
    && (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6)->flags[0] & 0x100) != 0 )
  {
    v1 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6); /*0x5f615b*/
    altOccupationFlags = v1->altOccupationFlags; /*0x5f6160*/
    result = (int)&v1->altOccupationFlags; /*0x5f6166*/
    *(_DWORD *)result = altOccupationFlags & 0xFFFFFFBF; /*0x5f616f*/
  }
  else
  {
    v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6); /*0x5f617a*/
    occupationFlags = v4->occupationFlags; /*0x5f617f*/
    result = (int)&v4->occupationFlags; /*0x5f6185*/
    *(_DWORD *)result = occupationFlags & 0xFFFFFFBF; /*0x5f618e*/
  }
  return result; /*0x5f616e*/
}



// ==== 0x005F61A0  ObjectTypeClass::ReleaseWaveAndString  this=ObjectTypeClass  sig=csp ====
void __thiscall ObjectTypeClass::ReleaseWaveAndString(ObjectTypeClass *this)
{
  void *vtable0; // edi
  String *vtable1; // edi

  vtable0 = this->AbstractTypeClass; /*0x5f61a4*/
  if ( this->AbstractTypeClass ) /*0x5f61a4*/
  {
    WaveClass::Destroy((WaveClass *)this->AbstractTypeClass); /*0x5f61ac*/
    __3_YAXPAX_Z(vtable0); /*0x5f61b2*/
  }
  vtable1 = (String *)this->?; /*0x5f61ba*/
  this->AbstractTypeClass = 0; /*0x5f61bd*/
  if ( vtable1 ) /*0x5f61c5*/
  {
    String::Release(vtable1); /*0x5f61c9*/
    __3_YAXPAX_Z(vtable1); /*0x5f61cf*/
  }
  this->? = 0; /*0x5f61d7*/
}



// ==== 0x005F6220  DisplayClass::checkScreenBounds  this=DisplayClass  sig=csp ====
bool __thiscall DisplayClass::checkScreenBounds(DisplayClass *this, int a2)
{
  int v3; // edi

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 184))(a2); /*0x5f6234*/
  return (*((int (__thiscall **)(DisplayClass *))this->DisplayClass_field_0x0 + 46))(this) > v3; /*0x5f623e*/
}



// ==== 0x005F6250  ObjectClass::ProcessPower  this=ObjectClass  sig=csp ====
int __thiscall HouseClass::ProcessPower(ObjectClass *this)
{
  ObjectClass *nextObject; // eax
  int v3; // eax
  TagClass *attachedTag; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  Power *v16; // [esp+Ch] [ebp+4h]

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x5f6259*/
  nextObject = this->nextObject; /*0x5f625e*/
  if ( nextObject ) /*0x5f6263*/
  {
    v3 = (*((int (__stdcall **)(void **))nextObject->? + 4))(&nextObject->?); /*0x5f626c*/
    Power::TimerProcess(v3); /*0x5f6272*/
  }
  attachedTag = this->attachedTag; /*0x5f6277*/
  if ( attachedTag ) /*0x5f627c*/
  {
    v5 = (*((int (__stdcall **)(void **))attachedTag->? + 4))(&attachedTag->?); /*0x5f6285*/
    Power::TimerProcess(v5); /*0x5f628b*/
  }
  Power::TimerProcess(this->health); /*0x5f6296*/
  LOBYTE(v6) = this->isOnMap; /*0x5f629b*/
  Power::FlagProcess(v16, v6); /*0x5f62a1*/
  if ( !*(_DWORD *)&dword_A8B238 || *(_DWORD *)&dword_A8B238 == 5 ) /*0x5f62b2*/
  {
    LOBYTE(v7) = this->needsRedraw; /*0x5f62b4*/
    v9 = Power::FlagProcess(v16, v7); /*0x5f62bd*/
    LOBYTE(v9) = this->isSelected; /*0x5f62c2*/
    Power::FlagProcess(v16, v9); /*0x5f62cb*/
  }
  LOBYTE(v8) = this->inLimbo; /*0x5f62d0*/
  Power::FlagProcess(v16, v8); /*0x5f62d9*/
  LOBYTE(v10) = this->hasParachute; /*0x5f62de*/
  v11 = Power::FlagProcess(v16, v10); /*0x5f62e7*/
  LOBYTE(v11) = this->onBridge; /*0x5f62ec*/
  Power::FlagProcess(v16, v11); /*0x5f62f5*/
  LOBYTE(v12) = this->isFallingDown; /*0x5f62fa*/
  Power::FlagProcess(v16, v12); /*0x5f6303*/
  LOBYTE(v13) = this->isBomb; /*0x5f6308*/
  v14 = Power::FlagProcess(v16, v13); /*0x5f6311*/
  LOBYTE(v14) = this->isAliveFlag; /*0x5f6316*/
  Power::FlagProcess(v16, v14); /*0x5f631f*/
  Power::TimerProcess(this->location[0]); /*0x5f632d*/
  Power::TimerProcess(this->location[1]); /*0x5f633b*/
  return Power::TimerProcess(this->location[2]); /*0x5f634e*/
}



// ==== 0x005F6360  ObjectClass::DistanceTo  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::DistanceTo(ObjectClass *this, int a2)
{
  double v2; // st7
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // esi
  int FoundationHeight; // edi
  int v12; // [esp+20h] [ebp-20h]
  int v13; // [esp+24h] [ebp-1Ch]
  _BYTE v14[12]; // [esp+28h] [ebp-18h] BYREF
  _BYTE v15[12]; // [esp+34h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x5f636d*/
    return 0; /*0x5f6370*/
  v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v14); /*0x5f6388*/
  v6 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))this->AbstractClass + 18))(this, v15); /*0x5f6391*/
  v12 = v6[1] - v5[1]; /*0x5f63ae*/
  v13 = v6[2] - v5[2]; /*0x5f63b2*/
  Math::Sqrt((double)(*v6 - *v5) * (double)(*v6 - *v5) + (double)v13 * (double)v13 + (double)v12 * (double)v12); /*0x5f63de*/
  LOWORD(v7) = Math::RoundToInt(v2); /*0x5f63e6*/
  v8 = v7; /*0x5f63ef*/
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2); /*0x5f63f1*/
  v10 = v9 == 6 ? a2 : 0;
  if ( v10 )
  {
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(*(int **)(v9 == 6 ? a2 + 0x520 : 1312), 0);
    v8 += -64 * (BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v10 + 1312)) + FoundationHeight); /*0x5f6424*/
    if ( v8 < 0 ) /*0x5f6426*/
      return 0; /*0x5f6428*/
  }
  return v8; /*0x5f636f*/
}



// ==== 0x005F6440  ObjectClass::ComputeDistance  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::ComputeDistance(TechnoClass *this, int a2)
{
  double v2; // st7
  int *v5; // eax
  int v6; // ebx
  int v7; // ebp
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // esi
  int FoundationHeight; // edi
  _BYTE v14[12]; // [esp+28h] [ebp-18h] BYREF
  _BYTE v15[12]; // [esp+34h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x5f644d*/
    return 0; /*0x5f6450*/
  v5 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v14); /*0x5f6464*/
  v6 = *v5; /*0x5f6467*/
  v7 = v5[1]; /*0x5f6469*/
  v8 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, _BYTE *))(this->vtable0 + 72))(this, v15); /*0x5f6475*/
  Math::Sqrt((double)(*v8 - v6) * (double)(*v8 - v6) + (double)(v8[1] - v7) * (double)(v8[1] - v7)); /*0x5f64a5*/
  LOWORD(v9) = Math::RoundToInt(v2); /*0x5f64ad*/
  v10 = v9; /*0x5f64b6*/
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2); /*0x5f64b8*/
  v12 = v11 == 6 ? a2 : 0;
  if ( v12 )
  {
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(*(int **)(v11 == 6 ? a2 + 0x520 : 1312), 0);
    v10 += -64 * (BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v12 + 1312)) + FoundationHeight); /*0x5f64eb*/
    if ( v10 < 0 ) /*0x5f64ed*/
      return 0; /*0x5f64ef*/
  }
  return v10; /*0x5f644f*/
}



// ==== 0x005F6500  BuildingClass::SquaredDistanceTo  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SquaredDistanceTo(BuildingClass *this, int *a2)
{
  int *v3; // eax
  int v4; // esi
  int v5; // edx
  int v6; // edi
  _DWORD *v7; // edx
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x5f650a*/
    return 0; /*0x5f650c*/
  v3 = (int *)(*((int (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass + 18))(this, v8); /*0x5f651e*/
  v4 = *v3; /*0x5f6521*/
  v5 = *a2; /*0x5f6523*/
  v6 = v3[1]; /*0x5f6527*/
  v8[2] = v3[2]; /*0x5f652d*/
  v7 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(v5 + 72))(a2, v8); /*0x5f6539*/
  return (v4 - *v7) * (v4 - *v7) + (v6 - v7[1]) * (v6 - v7[1]); /*0x5f650e*/
}



// ==== 0x005F6560  Math::DistSq2D  this=TechnoClass  sig=csp ====
int __thiscall Math::DistSq2D(Math *this, _DWORD *a2)
{
  int *v2; // edx
  int v3; // eax
  int v4; // ecx
  _BYTE v6[8]; // [esp+4h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-4h]

  v2 = (int *)(*(int (__thiscall **)(Math *, _BYTE *))(*(_DWORD *)this->__pad_0 + 72))(this, v6); /*0x5f656e*/
  v3 = *v2; /*0x5f6574*/
  v4 = v2[1]; /*0x5f6576*/
  v7 = v2[2]; /*0x5f657c*/
  return (v3 - *a2) * (v3 - *a2) + (v4 - a2[1]) * (v4 - a2[1]); /*0x5f658b*/
}



// ==== 0x005F65A0  ObjectClass::GetCoords  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetCoords(ObjectClass *this)
{
  int *location; // ecx
  CoordStruct *out; // [esp+8h] [ebp+4h]

  location = this->location; /*0x5f65a4*/
  out->vfptr = (void *)*location; /*0x5f65af*/
  out[1].vfptr = (void *)location[1]; /*0x5f65b4*/
  out[2].vfptr = (void *)location[2]; /*0x5f65bb*/
  return (int)out; /*0x5f65b7*/
}



// ==== 0x005F65D0  IUnknown::DelegateVt69  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::DelegateVt69(IUnknown *this)
{
  int v2; // [esp+4h] [ebp+4h]
  int v3; // [esp+8h] [ebp+8h]

  return (*(int (__thiscall **)(IUnknown *, int, int))(this->field_0 + 276))(this, v2, v3); /*0x5f65e2*/
}



// ==== 0x005F65F0  ObjectClass::Destroy  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::Destroy(ObjectClass *this)
{
  ObjectClass *attachedBomb; // ecx
  int result; // eax

  attachedBomb = (ObjectClass *)this->attachedBomb; /*0x5f65f3*/
  if ( attachedBomb ) /*0x5f65f8*/
    ObjectClass::CleanupAudioAndRefs(attachedBomb); /*0x5f65fa*/
  if ( this && (this->? & 1) != 0 ) /*0x5f6607*/
    TechnoClass::CleanupAll((TechnoClass *)this, 0); /*0x5f660d*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x5f6616*/
  (*((void (__thiscall **)(ObjectClass *))this->AbstractClass + 53))(this); /*0x5f661f*/
  this->isAliveFlag = 0; /*0x5f6625*/
  result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x5f662c*/
  if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x5f6666*/
    || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
    && g_BuildingLoadQueue_Array.UnitExitSound > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))(
                   &g_BuildingLoadQueue_Array.ToTile,
                   *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
                   0),
        (_BYTE)result) )
  {
    result = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x5f666e*/
    *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * result) = this; /*0x5f667d*/
  }
  return result; /*0x5f6680*/
}



// ==== 0x005F6690  IUnknown::IsActive  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::IsActive(IUnknown *this)
{
  return this->__pad_8C[4] == 0; /*0x5f669d*/
}



// ==== 0x005F66A0  sub_5F66A0  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_5F66A0(_DWORD *a1, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // ebp
  _DWORD *v8; // ebp
  int *v9; // ebp
  int v10; // edx
  int v11; // edi
  bool v12; // zf
  _DWORD *v14; // [esp+10h] [ebp-28h]
  int v15; // [esp+14h] [ebp-24h]

  v2 = *(_DWORD *)(a2 + 16); /*0x5f66a7*/
  v3 = 0; /*0x5f66ae*/
  v4 = 0; /*0x5f66b0*/
  v5 = 0; /*0x5f66b2*/
  v6 = 0; /*0x5f66b4*/
  if ( v2 > 0 ) /*0x5f66bc*/
  {
    v7 = *(_DWORD *)(a2 + 4); /*0x5f66c2*/
    v3 = *(_DWORD *)(*(_DWORD *)v7 + 156); /*0x5f66d0*/
    v4 = *(_DWORD *)(*(_DWORD *)v7 + 160); /*0x5f66d9*/
    if ( v2 - 1 < 0 ) /*0x5f66f5*/
    {
      v5 = 0; /*0x5f6762*/
    }
    else
    {
      v5 = 0; /*0x5f66f7*/
      v8 = (_DWORD *)(v7 + 4 * (v2 - 1)); /*0x5f66fb*/
      v14 = v8; /*0x5f6700*/
      v15 = *(_DWORD *)(a2 + 16); /*0x5f6704*/
      do /*0x5f675e*/
      {
        v9 = (int *)(*v8 + 156); /*0x5f6711*/
        v10 = *v9; /*0x5f6713*/
        v11 = v9[1]; /*0x5f6718*/
        if ( *v9 < v3 ) /*0x5f6722*/
        {
          v5 += v3 - v10; /*0x5f6726*/
          v3 = *v9; /*0x5f6728*/
        }
        if ( v11 < v4 ) /*0x5f672c*/
        {
          v6 += v4 - v11; /*0x5f6730*/
          v4 = v9[1]; /*0x5f6732*/
        }
        if ( v10 > v5 + v3 ) /*0x5f6739*/
          v5 = v10 - v3; /*0x5f673d*/
        if ( v11 > v6 + v4 ) /*0x5f6744*/
          v6 = v11 - v4; /*0x5f6748*/
        v8 = v14 - 1; /*0x5f6752*/
        v12 = v15 == 1; /*0x5f6755*/
        --v14; /*0x5f6756*/
        --v15; /*0x5f675a*/
      }
      while ( !v12 ); /*0x5f675e*/
    }
  }
  *a1 = v3; /*0x5f676c*/
  a1[1] = v4; /*0x5f676e*/
  a1[2] = v5; /*0x5f6771*/
  a1[3] = v6; /*0x5f6774*/
  return a1; /*0x5f6777*/
}



// ==== 0x005F6790  Network_Process_5F6790  this=-  sig=csp ====
int *__fastcall sub_5F6790(int *a1, int a2)
{
  int v2; // esi
  int v4; // eax
  int v5; // ebp
  int v6; // ecx
  _DWORD *v7; // edx
  _DWORD *v8; // esi
  int v10; // [esp+10h] [ebp-Ch]
  int v11; // [esp+14h] [ebp-8h]

  v2 = *(_DWORD *)(a2 + 16); /*0x5f6796*/
  v4 = 0; /*0x5f679f*/
  v5 = 0; /*0x5f67a1*/
  v6 = 0; /*0x5f67a3*/
  v11 = v2; /*0x5f67ab*/
  if ( v2 - 1 >= 0 ) /*0x5f67af*/
  {
    v7 = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * (v2 - 1)); /*0x5f67b4*/
    v10 = v2; /*0x5f67b8*/
    do /*0x5f67e0*/
    {
      v8 = (_DWORD *)*v7--; /*0x5f67bc*/
      v4 += v8[39]; /*0x5f67cb*/
      v5 += v8[40]; /*0x5f67d4*/
      v6 += v8[41]; /*0x5f67d9*/
      --v10; /*0x5f67dc*/
    }
    while ( v10 ); /*0x5f67e0*/
    v2 = v11; /*0x5f67e2*/
  }
  *a1 = v4 / v2; /*0x5f67fd*/
  a1[1] = v5 / v2; /*0x5f6801*/
  a1[2] = v6 / v2; /*0x5f6805*/
  return a1; /*0x5f67ff*/
}



// ==== 0x005F6810  Network_Process_5F6810  this=-  sig=csp ====
_DWORD *__fastcall sub_5F6810(int a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v5; // edi
  int v6; // ebp
  double v7; // st7
  int v8; // eax
  double v9; // st7
  _DWORD *v10; // [esp+18h] [ebp-28h]
  int v11; // [esp+20h] [ebp-20h]
  int v12; // [esp+24h] [ebp-1Ch]
  int v13; // [esp+28h] [ebp-18h]
  int v14; // [esp+2Ch] [ebp-14h]
  int v15; // [esp+30h] [ebp-10h]

  result = 0; /*0x5f681f*/
  v5 = *(_DWORD *)(a1 + 16) - 1; /*0x5f6826*/
  v10 = 0; /*0x5f6827*/
  v6 = 99999999; /*0x5f682b*/
  if ( v5 >= 0 ) /*0x5f6830*/
  {
    while ( result ) /*0x5f6838*/
    {
      v13 = *a2 - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v5) + 156); /*0x5f68c7*/
      v14 = a2[1] - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v5) + 160); /*0x5f68d4*/
      v15 = a2[2] - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v5) + 164); /*0x5f68de*/
      v9 = Math::Sqrt((double)v13 * (double)v13 + (double)v15 * (double)v15 + (double)v14 * (double)v14); /*0x5f6903*/
      v8 = Math::RoundToInt(v9); /*0x5f690b*/
      if ( v8 < v6 ) /*0x5f6912*/
      {
        v10 = *(_DWORD **)(*(_DWORD *)(a1 + 4) + 4 * v5); /*0x5f691a*/
        goto LABEL_6; /*0x5f691a*/
      }
LABEL_7:
      result = v10; /*0x5f6920*/
      if ( --v5 < 0 ) /*0x5f6925*/
        return result; /*0x5f6925*/
    }
    v10 = *(_DWORD **)(*(_DWORD *)(a1 + 4) + 4 * v5); /*0x5f6845*/
    v11 = a2[1] - v10[40]; /*0x5f6866*/
    v12 = a2[2] - v10[41]; /*0x5f6870*/
    v7 = Math::Sqrt((double)v12 * (double)v12 + (double)v11 * (double)v11 + (double)(*a2 - v10[39]) /*0x5f6895*/
                                                                          * (double)(*a2 - v10[39]));
    v8 = Math::RoundToInt(v7); /*0x5f689d*/
LABEL_6:
    v6 = v8; /*0x5f691e*/
    goto LABEL_7; /*0x5f691e*/
  }
  return result; /*0x5f692b*/
}



// ==== 0x005F6940  IUnknown::SetPosition  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::SetPosition(IUnknown *this)
{
  int *v1; // ecx
  int result; // eax
  int *v3; // [esp+4h] [ebp+4h]

  v1 = &this->field_9C; /*0x5f6944*/
  *v1 = *v3; /*0x5f694c*/
  v1[1] = v3[1]; /*0x5f6951*/
  result = v3[2]; /*0x5f6954*/
  v1[2] = result; /*0x5f6957*/
  return result; /*0x5f695a*/
}



// ==== 0x005F6960  IUnknown::GetCellCoords  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCellCoords(IUnknown *this)
{
  int *v1; // esi
  int v2; // ecx
  int v3; // eax
  int v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  v1 = &this->field_9C; /*0x5f6964*/
  v5 = this->field_9C; /*0x5f696e*/
  v6 = *(_DWORD *)this->__pad_A0; /*0x5f697f*/
  v7 = this->field_A4; /*0x5f6986*/
  Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v5); /*0x5f698a*/
  v2 = v1[2]; /*0x5f6991*/
  v3 = v1[1]; /*0x5f6994*/
  v5 = *v1; /*0x5f6997*/
  v7 = v2; /*0x5f699f*/
  v6 = v3; /*0x5f69a9*/
  return (int)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v5); /*0x5f69b2*/
}



// ==== 0x005F69C0  IUnknown::CoordToCell  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::CoordToCell(IUnknown *this)
{
  _DWORD *v1; // eax
  int v3; // [esp+8h] [ebp-10h]
  _BYTE v4[12]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v5; // [esp+1Ch] [ebp+4h]

  v1 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _BYTE *, _DWORD))(this->field_0 + 76))(this, v4, 0); /*0x5f69cc*/
  LOWORD(v3) = *v1 / 256; /*0x5f69df*/
  HIWORD(v3) = v1[1] / 256; /*0x5f69f3*/
  *v5 = v3; /*0x5f6a00*/
  return (int)v5; /*0x5f6a02*/
}



// ==== 0x005F6A10  IUnknown::GetCell  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCell(IUnknown *this)
{
  _DWORD *v1; // eax
  int v3; // [esp+8h] [ebp-14h]
  __int16 v4[2]; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v5[12]; // [esp+10h] [ebp-Ch] BYREF

  v1 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _BYTE *, _DWORD))(this->field_0 + 76))(this, v5, 0); /*0x5f6a1c*/
  LOWORD(v3) = *v1 / 256; /*0x5f6a2f*/
  HIWORD(v3) = v1[1] / 256; /*0x5f6a48*/
  *(_DWORD *)v4 = v3; /*0x5f6a56*/
  return (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v4); /*0x5f6a5f*/
}



// ==== 0x005F6A70  IUnknown::CheckGroundHeightDiff  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::CheckGroundHeightDiff(IUnknown *this)
{
  char v2; // bl
  _DWORD *v3; // eax
  int GroundHeight; // edi
  int v5; // ebp
  int result; // eax
  _DWORD v7[3]; // [esp+10h] [ebp-18h] BYREF
  _DWORD v8[3]; // [esp+1Ch] [ebp-Ch] BYREF
  int v9; // [esp+2Ch] [ebp+4h]

  v2 = this->__pad_8C[0]; /*0x5f6a7f*/
  v3 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _DWORD *, int))(this->field_0 + 76))(this, v8, v9); /*0x5f6a8d*/
  v7[0] = *v3; /*0x5f6a92*/
  v7[1] = v3[1]; /*0x5f6a9e*/
  v7[2] = v3[2]; /*0x5f6aaa*/
  GroundHeight = Cell::GetGroundHeight(v7); /*0x5f6ab9*/
  v8[0] = this->field_9C; /*0x5f6abd*/
  v8[1] = *(_DWORD *)this->__pad_A0; /*0x5f6ac9*/
  v8[2] = this->field_A4; /*0x5f6ad5*/
  v5 = Cell::GetGroundHeight(v8); /*0x5f6ade*/
  if ( this->__pad_8C[0] ) /*0x5f6ae0*/
  {
LABEL_5:
    result = dword_AC13C8; /*0x5f6b20*/
    goto LABEL_6; /*0x5f6b20*/
  }
  result = dword_AC13C8; /*0x5f6aea*/
  if ( v5 - GroundHeight > 3 * dword_AC13C8 ) /*0x5f6af8*/
  {
    result = (int)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v7); /*0x5f6b04*/
    if ( (*(_DWORD *)(result + 320) & 0x100) != 0 ) /*0x5f6b12*/
    {
      LOBYTE(result) = 1; /*0x5f6b17*/
      return result; /*0x5f6b1d*/
    }
    goto LABEL_5; /*0x5f6b12*/
  }
LABEL_6:
  if ( this->__pad_8C[0] && GroundHeight - v5 > 3 * result ) /*0x5f6b36*/
    LOBYTE(result) = 0; /*0x5f6b3b*/
  else
    LOBYTE(result) = v2; /*0x5f6b46*/
  return result; /*0x5f6b14*/
}



// ==== 0x005F6B50  IUnknown::COMStub_Return0_105  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_105(IUnknown *this)
{
  int result; // eax

  return result; /*0x5f6b50*/
}



// ==== 0x005F6B60  IUnknown::IsBelowScreen  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::IsBelowScreen(IUnknown *this)
{
  int result; // eax

  LOBYTE(result) = this->__pad_74[0] /*0x5f6b7c*/
                && (result = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 456))(this), result < 2 * dword_AC13C8);
  return result; /*0x5f6b7e*/
}



// ==== 0x005F6B90  IUnknown::IsHeightAboveThreshold  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::IsHeightAboveThreshold(IUnknown *this)
{
  int result; // eax

  LOBYTE(result) = this->__pad_74[0] /*0x5f6bac*/
                && (result = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 456))(this), result >= 2 * dword_AC13C8);
  return result; /*0x5f6bae*/
}



// ==== 0x005F6BC0  ObjectClass::COMStub_Return0_33  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_33(ObjectClass *this)
{
  return 0; /*0x5f6bc2*/
}



// ==== 0x005F6BD0  ObjectClass::GetBoundingSize  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetBoundingSize(ObjectClass *this)
{
  int v2; // edi
  _BYTE v4[12]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v5[12]; // [esp+14h] [ebp-Ch] BYREF

  v2 = (*((int (__thiscall **)(ObjectClass *, _BYTE *))this->AbstractClass + 43))(this, v4); /*0x5f6be8*/
  return *(_DWORD *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))this->AbstractClass + 43))(this, v5) /*0x5f6bfe*/
       + *(_DWORD *)(v2 + 4);
}



// ==== 0x005F6C10  IUnknown::IsAboveScreenMargin  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::IsAboveScreenMargin(IUnknown *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 456))(this); /*0x5f6c12*/
  LOBYTE(result) = result > -20; /*0x5f6c20*/
  return result; /*0x5f6c22*/
}



// ==== 0x005F6C30  IUnknown::IsPlayerOwnedAndCheck  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::IsPlayerOwnedAndCheck(IUnknown *this)
{
  int result; // eax

  if ( !(*(unsigned __int8 (__thiscall **)(IUnknown *, Object *))(this->field_0 + 200))(this, dword_A83D4C) /*0x5f6c56*/
    || (result = (*(int (__thiscall **)(IUnknown *, int))(this->field_0 + 208))(this, 1)) != 0 )
  {
    result = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 136))(this); /*0x5f6c60*/
    LOBYTE(result) = *(_BYTE *)(result + 560); /*0x5f6c66*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x5f6c58*/
  }
  return result; /*0x5f6c5a*/
}



// ==== 0x005F6C70  ObjectClass::COMStub_79  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_79(ObjectClass *this)
{
  return (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 78))(this);
}



// ==== 0x005F6C80  IUnknown::GetCoords_Alt  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCoords_Alt(IUnknown *this)
{
  _DWORD *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+14h] [ebp+4h]

  v1 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(this->field_0 + 72))(this, v3); /*0x5f6c8e*/
  *v4 = *v1; /*0x5f6c98*/
  v4[1] = v1[1]; /*0x5f6c9d*/
  v4[2] = v1[2]; /*0x5f6ca4*/
  return (int)v4; /*0x5f6ca0*/
}



// ==== 0x005F6CB0  ObjectClass::CheckFlagD0  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::CheckFlagD0(ObjectClass *this, int a2)
{
  int result; // eax

  result = a2; /*0x5f6cb0*/
  this->customSound = a2; /*0x5f6cb7*/
  if ( a2 == -1 ) /*0x5f6cba*/
    return AudioFile::Stop((AudioFile *)this->customSound_controller); /*0x5f6cbf*/
  return result; /*0x5f6cc4*/
}



// ==== 0x005F6CD0  ObjectClass::IsCrushable  this=ObjectClass  sig=csp ====
bool __thiscall ObjectClass::IsCrushable(TechnoClass *this, _DWORD **a2)
{
  if ( a2 /*0x5f6d2e*/
    && *(_BYTE *)(((int (__thiscall *)(_DWORD **))(*a2)[33])(a2) + 3369)
    && this
    && (this->abstractFlags & 1) != 0
    && !*(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3370)
    && (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) != 6
    && !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)a2[135], (int)this)
    && !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 352))(this) )
  {
    return 1; /*0x5f6d39*/
  }
  return *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 136))(this) + 557) /*0x5f6d7b*/
      && this
      && (this->abstractFlags & 1) != 0
      && !this->isUncrushable[0]
      && !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)a2[135], (int)this)
      && !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 352))(this);
}



// ==== 0x005F6DA0  ObjectClass::ResetPointerIfMatch  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::ResetPointerIfMatch(ObjectClass *this)
{
  int result; // eax
  AnimClass *v2; // [esp+4h] [ebp+4h]

  result = (int)v2; /*0x5f6da0*/
  if ( v2 == this->parachute ) /*0x5f6dac*/
    this->parachute = 0; /*0x5f6dae*/
  return result; /*0x5f6db8*/
}



// ==== 0x005F6DC0  ObjectClass::CreateInstance  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::CreateInstance(ObjectClass *this)
{
  char v3; // [esp+8h] [ebp+4h]

  ObjectClass::Dtor(this); /*0x5f6dc3*/
  if ( (v3 & 1) != 0 ) /*0x5f6dcd*/
    __3_YAXPAX_Z(this); /*0x5f6dd0*/
  return (int)this; /*0x5f6dda*/
}



// ==== 0x005F6DE0  sub_5F6DE0  this=-  sig=ida-proto ====
void sub_5F6DE0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5f6dec*/
  dbl_AC13F0 = Math::Sqrt(v0 + v0); /*0x5f6dfe*/
}



// ==== 0x005F6E10  sub_5F6E10  this=-  sig=ida-proto ====
void sub_5F6E10()
{
  dbl_AC1468 = dbl_AC13F0 / 60.0; /*0x5f6e1c*/
}



// ==== 0x005F6E30  sub_5F6E30  this=-  sig=ida-proto ====
void sub_5F6E30()
{
  dbl_AC1448 = 1.0 / dbl_AC1468; /*0x5f6e3c*/
}



// ==== 0x005F6E50  sub_5F6E50  this=-  sig=ida-proto ====
void sub_5F6E50()
{
  dbl_AC1440 = 0.0174532925199433 * 45.0; /*0x5f6e5c*/
}



// ==== 0x005F6E70  sub_5F6E70  this=-  sig=ida-proto ====
void sub_5F6E70()
{
  dbl_AC13F8 = 0.0174532925199433 * 60.0; /*0x5f6e7c*/
}



// ==== 0x005F6E90  sub_5F6E90  this=-  sig=ida-proto ====
void sub_5F6E90()
{
  dbl_AC13D0 = 0.0174532925199433 * 90.0; /*0x5f6e9c*/
}



// ==== 0x005F6EB0  sub_5F6EB0  this=-  sig=ida-proto ====
__int64 sub_5F6EB0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC13D0 - dbl_AC13F8); /*0x5f6ec2*/
  result = Math::RoundToInt(v0 * dbl_AC13F0 * 0.5); /*0x5f6ed6*/
  dword_AC1474 = result; /*0x5f6edb*/
  return result; /*0x5f6ee0*/
}



// ==== 0x005F6EF0  sub_5F6EF0  this=-  sig=ida-proto ====
void sub_5F6EF0()
{
  dbl_AC1400 = Math::ArcTan((double)dword_AC1474 * 0.00390625); /*0x5f6f07*/
}



// ==== 0x005F6F20  sub_5F6F20  this=-  sig=ida-proto ====
void sub_5F6F20()
{
  dbl_AC1430 = Math::ArcTan((double)(2 * dword_AC1474) / dbl_AC13F0); /*0x5f6f42*/
}



// ==== 0x005F6F50  sub_5F6F50  this=-  sig=ida-proto ====
__int64 sub_5F6F50()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1474) + 0.5); /*0x5f6f6b*/
  dword_AC1460 = result; /*0x5f6f70*/
  return result; /*0x5f6f76*/
}



// ==== 0x005F6F80  sub_5F6F80  this=-  sig=ida-proto ====
int sub_5F6F80()
{
  word_AC13E8 = 0; /*0x5f6f82*/
  word_AC13EA = 0; /*0x5f6f88*/
  return 0; /*0x5f6f8e*/
}



// ==== 0x005F6F90  sub_5F6F90  this=-  sig=ida-proto ====
int sub_5F6F90()
{
  dword_AC1408 = 0; /*0x5f6f92*/
  dword_AC140C = 0; /*0x5f6f97*/
  dword_AC1410 = 0; /*0x5f6f9c*/
  return 0; /*0x5f6fa1*/
}



// ==== 0x005F6FB0  sub_5F6FB0  this=-  sig=ida-proto ====
int sub_5F6FB0()
{
  dword_AC1458 = 0; /*0x5f6fb5*/
  dword_AC1450 = 128; /*0x5f6fbf*/
  dword_AC1454 = 128; /*0x5f6fc4*/
  return 128; /*0x5f6fc9*/
}



// ==== 0x005F6FD0  sub_5F6FD0  this=-  sig=ida-proto ====
int sub_5F6FD0()
{
  dword_AC13D8 = 0; /*0x5f6fd2*/
  dword_AC13DC = 0; /*0x5f6fd7*/
  dword_AC13E0 = 0; /*0x5f6fdc*/
  dword_AC13E4 = 0; /*0x5f6fe1*/
  return 0; /*0x5f6fe6*/
}



// ==== 0x005F6FF0  sub_5F6FF0  this=-  sig=ida-proto ====
int sub_5F6FF0()
{
  dword_AC141C = 0; /*0x5f6ff7*/
  dword_AC1420 = 0; /*0x5f6ffc*/
  byte_AC1424 = 1; /*0x5f7001*/
  byte_AC1425 = 0; /*0x5f7008*/
  dword_AC1418 = (int)&DynamicVectorClass<ObjectTypeClass *>::`vftable'; /*0x5f700d*/
  dword_AC142C = 10; /*0x5f7017*/
  dword_AC1428 = 0; /*0x5f7021*/
  return atexit(sub_5F7030); /*0x5f702c*/
}



// ==== 0x005F7030  sub_5F7030  this=-  sig=ida-proto ====
void __cdecl sub_5F7030()
{
  if ( (byte_AC1470 & 1) == 0 ) /*0x5f703a*/
  {
    dword_AC1418 = (int)&VectorClass<ObjectTypeClass *>::`vftable'; /*0x5f703e*/
    byte_AC1470 |= 1u; /*0x5f7051*/
    if ( dword_AC141C ) /*0x5f7057*/
    {
      if ( byte_AC1425 ) /*0x5f7061*/
      {
        __3_YAXPAX_Z(dword_AC141C); /*0x5f7064*/
        dword_AC141C = 0; /*0x5f706c*/
      }
    }
    byte_AC1425 = 0; /*0x5f7076*/
    dword_AC1420 = 0; /*0x5f707d*/
  }
}



// ==== 0x005F7090  ObjectTypeClass::ConstructFull  this=AbstractTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::ConstructFull(int *this, char *Source)
{
  int *v3; // eax
  int v4; // ecx
  int *v5; // eax
  int v6; // ecx
  int v7; // eax
  char Destination[24]; // [esp+8h] [ebp-1Ch] BYREF
  char v10; // [esp+20h] [ebp-4h]

  AbstractTypeClass::Constructor(this, Source); /*0x5f709c*/
  v3 = this + 50; /*0x5f70a3*/
  *((_BYTE *)this + 152) = 0; /*0x5f70a9*/
  *((_BYTE *)this + 153) = 0; /*0x5f70af*/
  *((_BYTE *)this + 154) = 0; /*0x5f70b5*/
  *(this + 39) = 0; /*0x5f70bb*/
  this->u32_28 = 0; /*0x5f70c1*/
  *(this + 41) = 0; /*0x5f70c7*/
  *((_BYTE *)this + 168) = 0; /*0x5f70cd*/
  this->q02B = 0; /*0x5f70d3*/
  this->q02C = 0; /*0x5f70d9*/
  *(this + 45) = 0; /*0x5f70df*/
  *(this + 46) = 0; /*0x5f70e5*/
  *(this + 47) = 0; /*0x5f70eb*/
  this->q030 = 0; /*0x5f70f1*/
  this->q031 = 0; /*0x5f70f7*/
  v4 = 18; /*0x5f70fd*/
  do /*0x5f710b*/
  {
    *v3 = 0; /*0x5f7102*/
    v3[1] = 0; /*0x5f7104*/
    v3 += 2; /*0x5f7107*/
    --v4; /*0x5f710a*/
  }
  while ( v4 ); /*0x5f710b*/
  v5 = this + 86; /*0x5f710d*/
  v6 = 18; /*0x5f7113*/
  do /*0x5f7121*/
  {
    *v5 = 0; /*0x5f7118*/
    v5[1] = 0; /*0x5f711a*/
    v5 += 2; /*0x5f711d*/
    --v6; /*0x5f7120*/
  }
  while ( v6 ); /*0x5f7121*/
  *((_BYTE *)this + 488) = 0; /*0x5f712e*/
  *(this + 123) = 0; /*0x5f7134*/
  this->q07C = -1; /*0x5f713a*/
  *(this + 125) = -1; /*0x5f7140*/
  *((_BYTE *)this + 504) = 0; /*0x5f7146*/
  *((_BYTE *)this + 529) = 0; /*0x5f7148*/
  *((_BYTE *)this + 530) = 0; /*0x5f714e*/
  *((_BYTE *)this + 531) = 0; /*0x5f7156*/
  *((_BYTE *)this + 558) = 1; /*0x5f715c*/
  this->q08C = 1; /*0x5f7162*/
  *((_BYTE *)this + 561) = 1; /*0x5f7168*/
  *((_BYTE *)this + 565) = 1; /*0x5f716e*/
  *((_BYTE *)this + 556) = 0; /*0x5f7176*/
  *((_BYTE *)this + 557) = 0; /*0x5f717c*/
  *((_BYTE *)this + 559) = 0; /*0x5f7182*/
  *((_BYTE *)this + 562) = 0; /*0x5f7188*/
  *((_BYTE *)this + 563) = 0; /*0x5f718e*/
  *((_BYTE *)this + 564) = 0; /*0x5f7194*/
  *((_BYTE *)this + 566) = 0; /*0x5f719a*/
  *((_BYTE *)this + 567) = 0; /*0x5f71a0*/
  *((_BYTE *)this + 568) = 0; /*0x5f71a6*/
  *((_BYTE *)this + 569) = 0; /*0x5f71ac*/
  *((_BYTE *)this + 570) = 0; /*0x5f71b2*/
  *((_BYTE *)this + 571) = 0x80; /*0x5f71b8*/
  *((_BYTE *)this + 572) = 0x80; /*0x5f71be*/
  *((_BYTE *)this + 573) = 0x80; /*0x5f71c4*/
  this->q090 = 16; /*0x5f71ca*/
  *(this + 145) = 0; /*0x5f71d4*/
  *(this + 146) = 0; /*0x5f71da*/
  *(this + 147) = 0; /*0x5f71e0*/
  this->q094 = 0; /*0x5f71e6*/
  this->tail_95 = 0; /*0x5f71ec*/
  *(this + 150) = 0; /*0x5f71f2*/
  *(this + 151) = 0; /*0x5f71f8*/
  *(this + 152) = 0; /*0x5f71fe*/
  *((_BYTE *)this + 612) = 0; /*0x5f7204*/
  *(this + 154) = 0; /*0x5f720a*/
  *(this + 155) = 0; /*0x5f7213*/
  *(this + 156) = 0; /*0x5f7219*/
  *(this + 157) = 0; /*0x5f721f*/
  *((_BYTE *)this + 632) = 0; /*0x5f7225*/
  *(this + 159) = 0; /*0x5f722b*/
  this->u32_28 = 0; /*0x5f7231*/
  *(this + 161) = 0; /*0x5f7237*/
  *(this + 162) = 0; /*0x5f723d*/
  *((_BYTE *)this + 652) = 0; /*0x5f7243*/
  *(this + 164) = 0; /*0x5f7249*/
  *this = (int)&ObjectTypeClass::`vftable'; /*0x5f7251*/
  this->vtable2 = (int)&ObjectTypeClass::`vftable'; /*0x5f7258*/
  this->vtable3 = (int)&ObjectTypeClass::`vftable'; /*0x5f725f*/
  this->vtable4 = (int)&ObjectTypeClass::`vftable'; /*0x5f7266*/
  if ( this + 9 != this + 126 ) /*0x5f726d*/
    qmemcpy(this + 126, this + 9, 0x19u); /*0x5f7274*/
  if ( &g_INI_DefaultBuffer ) /*0x5f727e*/
  {
    strncpy(Destination, &g_INI_DefaultBuffer, 0x18u); /*0x5f7292*/
    v10 = 0; /*0x5f729a*/
  }
  else
  {
    Destination[0] = 0; /*0x5f7280*/
  }
  if ( Destination != (char *)this + 531 ) /*0x5f72aa*/
  {
    qmemcpy((char *)this + 531, Destination, 0x18u); /*0x5f72b5*/
    *((_BYTE *)this + 555) = v10; /*0x5f72b7*/
  }
  if ( dword_AC1428 < dword_AC1420 /*0x5f72ee*/
    || (byte_AC1425 || !dword_AC1420)
    && dword_AC142C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_AC1418 + 8))(
         &dword_AC1418,
         dword_AC142C + dword_AC1420,
         0) )
  {
    v7 = dword_AC1428++; /*0x5f72fb*/
    *((_DWORD *)dword_AC141C + v7) = this; /*0x5f730a*/
  }
  return (int)this; /*0x5f730f*/
}



// ==== 0x005F7320  ObjectTypeClass::Construct  this=ObjectTypeClass  sig=csp ====
_DWORD *__thiscall ObjectTypeClass::Construct(ObjectTypeClass *this, int a2)
{
  int *v3; // eax
  int v4; // edx
  char *v5; // eax
  int v6; // edx

  AbstractTypeClass::Init((int)this, a2); /*0x5f7328*/
  v3 = &this->ChargerTurrets[3]; /*0x5f732f*/
  this->Image = 0; /*0x5f7335*/
  v4 = 18; /*0x5f733b*/
  do /*0x5f7349*/
  {
    *v3 = 0; /*0x5f7340*/
    v3[1] = 0; /*0x5f7342*/
    v3 += 2; /*0x5f7345*/
    --v4; /*0x5f7348*/
  }
  while ( v4 ); /*0x5f7349*/
  v5 = &this->__pad_14D[11]; /*0x5f734b*/
  v6 = 18; /*0x5f7351*/
  do /*0x5f735f*/
  {
    *(_DWORD *)v5 = 0; /*0x5f7356*/
    *((_DWORD *)v5 + 1) = 0; /*0x5f7358*/
    v5 += 8; /*0x5f735b*/
    --v6; /*0x5f735e*/
  }
  while ( v6 ); /*0x5f735f*/
  this->VoxelCaches[0] = 0; /*0x5f7361*/
  this->VoxelCaches[1] = 0; /*0x5f7367*/
  this->VoxelCaches[2] = 0; /*0x5f736d*/
  LOBYTE(this->VoxelCaches[3]) = 0; /*0x5f7373*/
  this->VoxelCaches[4] = 0; /*0x5f7379*/
  this->VoxelCaches[5] = 0; /*0x5f737f*/
  this->VoxelCaches[6] = 0; /*0x5f7385*/
  this->VoxelCaches[7] = 0; /*0x5f738b*/
  LOBYTE(this->VoxelCaches[8]) = 0; /*0x5f7391*/
  this->VoxelCaches[9] = 0; /*0x5f7397*/
  this->VoxelCaches[10] = 0; /*0x5f739d*/
  this->VoxelCaches[11] = 0; /*0x5f73a3*/
  this->VoxelCaches[12] = 0; /*0x5f73a9*/
  LOBYTE(this->VoxelCaches[13]) = 0; /*0x5f73af*/
  this->VoxelCaches[14] = 0; /*0x5f73b5*/
  this->VoxelCaches[15] = 0; /*0x5f73bb*/
  this->VoxelCaches[16] = 0; /*0x5f73c1*/
  this->VoxelCaches[17] = 0; /*0x5f73c7*/
  LOBYTE(this->VoxelCaches[18]) = 0; /*0x5f73cd*/
  this->VoxelCaches[19] = 0; /*0x5f73d3*/
  this->AbstractTypeClass = &ObjectTypeClass::`vftable'; /*0x5f73d9*/
  this->? = &ObjectTypeClass::`vftable'; /*0x5f73df*/
  this->? = &ObjectTypeClass::`vftable'; /*0x5f73e6*/
  this->? = &ObjectTypeClass::`vftable'; /*0x5f73ed*/
  return &this->AbstractTypeClass; /*0x5f73f6*/
}



// ==== 0x005F7400  ObjectTypeClass::Destruct  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::Destruct(int this)
{
  int v2; // eax
  ObjectTypeClass *v3; // edi
  int v4; // ebx
  ObjectTypeClass *v5; // edi
  int v6; // ebx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)this = &ObjectTypeClass::`vftable'; /*0x5f740b*/
  *(_DWORD *)(this + 4) = &ObjectTypeClass::`vftable'; /*0x5f7411*/
  *(_DWORD *)(this + 8) = &ObjectTypeClass::`vftable'; /*0x5f7418*/
  *(_DWORD *)(this + 12) = &ObjectTypeClass::`vftable'; /*0x5f741f*/
  v8 = this; /*0x5f7431*/
  v2 = (*(int (__thiscall **)(int *, int *))(dword_AC1418 + 16))(&dword_AC1418, &v8); /*0x5f7435*/
  if ( v2 != -1 && v2 < dword_AC1428 && v2 < --dword_AC1428 ) /*0x5f7450*/
  {
    do /*0x5f7468*/
    {
      ++v2; /*0x5f7458*/
      *((_DWORD *)dword_AC141C + v2 - 1) = *((_DWORD *)dword_AC141C + v2); /*0x5f745c*/
    }
    while ( v2 < dword_AC1428 ); /*0x5f7468*/
  }
  if ( *(_BYTE *)(this + 168) && *(_DWORD *)(this + 164) ) /*0x5f7476*/
  {
    __3_YAXPAX_Z(*(void **)(this + 164)); /*0x5f7481*/
    *(_DWORD *)(this + 164) = 0; /*0x5f7489*/
    *(_BYTE *)(this + 168) = 0; /*0x5f748f*/
  }
  ObjectTypeClass::CleanupWeapons((char *)this); /*0x5f7497*/
  __3_YAXPAX_Z(*(void **)(this + 640)); /*0x5f74a3*/
  *(_DWORD *)(this + 640) = 0; /*0x5f74a8*/
  *(_DWORD *)(this + 644) = 0; /*0x5f74ae*/
  *(_DWORD *)(this + 648) = 0; /*0x5f74b4*/
  *(_BYTE *)(this + 652) = 0; /*0x5f74ba*/
  *(_DWORD *)(this + 656) = 0; /*0x5f74c0*/
  __3_YAXPAX_Z(*(void **)(this + 620)); /*0x5f74cd*/
  *(_DWORD *)(this + 620) = 0; /*0x5f74d2*/
  *(_DWORD *)(this + 624) = 0; /*0x5f74d8*/
  *(_DWORD *)(this + 628) = 0; /*0x5f74de*/
  *(_BYTE *)(this + 632) = 0; /*0x5f74e4*/
  *(_DWORD *)(this + 636) = 0; /*0x5f74ea*/
  __3_YAXPAX_Z(*(void **)(this + 600)); /*0x5f74f7*/
  *(_DWORD *)(this + 600) = 0; /*0x5f74fc*/
  *(_DWORD *)(this + 604) = 0; /*0x5f7502*/
  *(_DWORD *)(this + 608) = 0; /*0x5f7508*/
  *(_BYTE *)(this + 612) = 0; /*0x5f750e*/
  *(_DWORD *)(this + 616) = 0; /*0x5f7514*/
  __3_YAXPAX_Z(*(void **)(this + 580)); /*0x5f7521*/
  *(_DWORD *)(this + 580) = 0; /*0x5f7526*/
  *(_DWORD *)(this + 584) = 0; /*0x5f752c*/
  *(_DWORD *)(this + 588) = 0; /*0x5f7532*/
  *(_BYTE *)(this + 592) = 0; /*0x5f7538*/
  *(_DWORD *)(this + 596) = 0; /*0x5f753e*/
  v3 = (ObjectTypeClass *)(this + 488); /*0x5f7547*/
  v4 = 18; /*0x5f754d*/
  do /*0x5f755d*/
  {
    v3 = (ObjectTypeClass *)((char *)v3 - 8); /*0x5f7552*/
    ObjectTypeClass::ReleaseWaveAndString(v3); /*0x5f7557*/
    --v4; /*0x5f755c*/
  }
  while ( v4 ); /*0x5f755d*/
  v5 = (ObjectTypeClass *)(this + 344); /*0x5f755f*/
  v6 = 18; /*0x5f7565*/
  do /*0x5f7575*/
  {
    v5 = (ObjectTypeClass *)((char *)v5 - 8); /*0x5f756a*/
    ObjectTypeClass::ReleaseWaveAndString(v5); /*0x5f756f*/
    --v6; /*0x5f7574*/
  }
  while ( v6 ); /*0x5f7575*/
  ObjectTypeClass::ReleaseWaveAndString((ObjectTypeClass *)(this + 192)); /*0x5f757d*/
  ObjectTypeClass::ReleaseWaveAndString((ObjectTypeClass *)(this + 184)); /*0x5f7588*/
  ObjectTypeClass::ReleaseWaveAndString((ObjectTypeClass *)(this + 176)); /*0x5f7593*/
  return AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x5f759f*/
}



// ==== 0x005F75B0  ObjectTypeClass::GetData  this=ObjectTypeClass  sig=csp ====
int AbstractTypeClass::GetData(ObjectTypeClass *this)
{
  return 0; /*0x5f75b2*/
}



// ==== 0x005F75C0  ObjectTypeClass::InitTripleTen  this=ObjectTypeClass  sig=csp ====
_DWORD *__stdcall ObjectTypeClass::InitTripleTen(ObjectTypeClass *this)
{
  this->AbstractTypeClass = (void *)10; /*0x5f75cd*/
  this->? = (void *)10; /*0x5f75d3*/
  this->? = (void *)10; /*0x5f75d6*/
  return &this->AbstractTypeClass; /*0x5f75d9*/
}



// ==== 0x005F75E0  ObjectTypeClass::InitTriple256  this=ObjectTypeClass  sig=csp ====
_DWORD *__stdcall Struct::InitTriple256(ObjectTypeClass *this)
{
  void *v1; // esi

  v1 = (void *)(2 * dword_AC1474); /*0x5f75ec*/
  this->AbstractTypeClass = (void *)256; /*0x5f75f7*/
  this->? = (void *)256; /*0x5f75f9*/
  this->? = v1; /*0x5f75fc*/
  return &this->AbstractTypeClass; /*0x5f75ff*/
}



// ==== 0x005F7610  ObjectTypeClass::GetType  this=ObjectTypeClass  sig=csp ====
int __stdcall AbstractTypeClass::GetType(ObjectTypeClass *this)
{
  return 0; /*0x5f7612*/
}



// ==== 0x005F7620  ObjectTypeClass::SetType  this=ObjectTypeClass  sig=csp ====
int AbstractTypeClass::SetType(ObjectTypeClass *this)
{
  return 0; /*0x5f7622*/
}



// ==== 0x005F7630  ObjectTypeClass::Validate  this=ObjectTypeClass  sig=csp ====
int AbstractTypeClass::Validate(ObjectTypeClass *this)
{
  return 0; /*0x5f7632*/
}



// ==== 0x005F7640  ObjectTypeClass::RegisterSingleton  this=ObjectTypeClass  sig=csp ====
int *__stdcall GlobalInit::RegisterSingleton(ObjectTypeClass *this)
{
  if ( (byte_AC145C & 1) == 0 ) /*0x5f764b*/
  {
    byte_AC145C |= 1u; /*0x5f7666*/
    dword_AC1438 = 0; /*0x5f766c*/
    dword_AC143C = 2147450879; /*0x5f7684*/
    atexit(nullsub_207); /*0x5f768a*/
  }
  return &dword_AC1438; /*0x5f7698*/
}



// ==== 0x005F76A0  nullsub_207  this=-  sig=ida-proto ====
void __cdecl nullsub_207()
{
  ; /*0x5f76a0*/
}



// ==== 0x005F76B0  FileSystem::InitPipShapes  this=FileSystem  sig=ida-proto ====
void FileSystem_InitPipShapes()
{
  int v0[9]; // [esp+0h] [ebp-24h] BYREF

  if ( !FileSystem_PIPBRD_SHP ) /*0x5f76ba*/
  {
    RawFileClass::Construct(v0, (int)aPipbrdShp); /*0x5f76c5*/
    FileSystem_PIPBRD_SHP = (int)CCFileClass::ReadEntireFile(v0); /*0x5f76da*/
    byte_AC1488 = FileSystem_PIPBRD_SHP != 0; /*0x5f76df*/
    if ( !FileSystem_PIPBRD_SHP ) /*0x5f76e5*/
      FileSystem_PIPBRD_SHP = SearchMIXFile(aPipbrdShp, 0); /*0x5f76f3*/
    RawFileClass::Dtor(v0); /*0x5f76fc*/
  }
  if ( !FileSystem_PIPS_SHP ) /*0x5f7708*/
  {
    RawFileClass::Construct(v0, (int)aPipsShp); /*0x5f7713*/
    FileSystem_PIPS_SHP = (int)CCFileClass::ReadEntireFile(v0); /*0x5f7728*/
    byte_AC1489 = FileSystem_PIPS_SHP != 0; /*0x5f772d*/
    if ( !FileSystem_PIPS_SHP ) /*0x5f7733*/
      FileSystem_PIPS_SHP = SearchMIXFile(aPipsShp, 0); /*0x5f7741*/
    RawFileClass::Dtor(v0); /*0x5f774a*/
  }
  if ( !FileSystem_PIPS2_SHP ) /*0x5f7756*/
  {
    RawFileClass::Construct(v0, (int)aPips2Shp); /*0x5f7761*/
    FileSystem_PIPS2_SHP = (int)CCFileClass::ReadEntireFile(v0); /*0x5f7776*/
    byte_AC148A = FileSystem_PIPS2_SHP != 0; /*0x5f777b*/
    if ( !FileSystem_PIPS2_SHP ) /*0x5f7781*/
      FileSystem_PIPS2_SHP = SearchMIXFile(aPips2Shp, 0); /*0x5f778f*/
    RawFileClass::Dtor(v0); /*0x5f7798*/
  }
  if ( !FileSystem_TALKBUBL_SHP ) /*0x5f77a4*/
  {
    RawFileClass::Construct(v0, (int)aTalkbublShp); /*0x5f77af*/
    FileSystem_TALKBUBL_SHP = (int)CCFileClass::ReadEntireFile(v0); /*0x5f77c4*/
    byte_AC148B = FileSystem_TALKBUBL_SHP != 0; /*0x5f77c9*/
    if ( !FileSystem_TALKBUBL_SHP ) /*0x5f77cf*/
      FileSystem_TALKBUBL_SHP = SearchMIXFile(aTalkbublShp, 0); /*0x5f77dd*/
    RawFileClass::Dtor(v0); /*0x5f77e6*/
  }
}



// ==== 0x005F77F0  ObjectTypeClass::UnloadPipsSHP  this=ObjectTypeClass  sig=csp ====
void ObjectTypeClass::UnloadPipsSHP(ObjectTypeClass *this)
{
  int v1; // eax
  void *v2; // ebp
  int v3; // edx
  int v4; // eax
  FileTreeNode *v5; // esi
  int v6; // edi
  int v7; // eax
  void *v8; // ebp
  int v9; // edx
  int v10; // eax
  FileTreeNode *v11; // esi
  int v12; // edi
  int v13; // eax
  void *v14; // ebp
  int v15; // edx
  int v16; // eax
  FileTreeNode *v17; // esi
  int v18; // edi
  int v19; // eax
  void *v20; // ebp
  int v21; // edx
  int v22; // eax
  FileTreeNode *v23; // esi
  int v24; // edi

  if ( byte_AC1488 ) /*0x5f77fd*/
  {
    if ( FileSystem_PIPBRD_SHP ) /*0x5f7807*/
    {
      v1 = *(_DWORD *)(FileSystem_PIPBRD_SHP - 4); /*0x5f7809*/
      v2 = (void *)(FileSystem_PIPBRD_SHP - 4); /*0x5f780c*/
      v3 = 9 * v1; /*0x5f780f*/
      v4 = v1 - 1; /*0x5f7812*/
      v5 = (FileTreeNode *)(FileSystem_PIPBRD_SHP + 4 * v3); /*0x5f7813*/
      if ( v4 >= 0 ) /*0x5f7816*/
      {
        v6 = v4 + 1; /*0x5f7818*/
        do /*0x5f7826*/
        {
          v5 -= 9; /*0x5f781b*/
          FileTreeNode::Destroy(v5); /*0x5f7820*/
          --v6; /*0x5f7825*/
        }
        while ( v6 ); /*0x5f7826*/
      }
      __3_YAXPAX_Z(v2); /*0x5f7829*/
    }
    byte_AC1488 = 0; /*0x5f7831*/
  }
  if ( byte_AC1489 ) /*0x5f783d*/
  {
    if ( FileSystem_PIPS_SHP ) /*0x5f7847*/
    {
      v7 = *(_DWORD *)(FileSystem_PIPS_SHP - 4); /*0x5f7849*/
      v8 = (void *)(FileSystem_PIPS_SHP - 4); /*0x5f784c*/
      v9 = 9 * v7; /*0x5f784f*/
      v10 = v7 - 1; /*0x5f7852*/
      v11 = (FileTreeNode *)(FileSystem_PIPS_SHP + 4 * v9); /*0x5f7853*/
      if ( v10 >= 0 ) /*0x5f7856*/
      {
        v12 = v10 + 1; /*0x5f7858*/
        do /*0x5f7866*/
        {
          v11 -= 9; /*0x5f785b*/
          FileTreeNode::Destroy(v11); /*0x5f7860*/
          --v12; /*0x5f7865*/
        }
        while ( v12 ); /*0x5f7866*/
      }
      __3_YAXPAX_Z(v8); /*0x5f7869*/
    }
    byte_AC1489 = 0; /*0x5f7871*/
  }
  if ( byte_AC148A ) /*0x5f787d*/
  {
    if ( FileSystem_PIPS2_SHP ) /*0x5f7887*/
    {
      v13 = *(_DWORD *)(FileSystem_PIPS2_SHP - 4); /*0x5f7889*/
      v14 = (void *)(FileSystem_PIPS2_SHP - 4); /*0x5f788c*/
      v15 = 9 * v13; /*0x5f788f*/
      v16 = v13 - 1; /*0x5f7892*/
      v17 = (FileTreeNode *)(FileSystem_PIPS2_SHP + 4 * v15); /*0x5f7893*/
      if ( v16 >= 0 ) /*0x5f7896*/
      {
        v18 = v16 + 1; /*0x5f7898*/
        do /*0x5f78a6*/
        {
          v17 -= 9; /*0x5f789b*/
          FileTreeNode::Destroy(v17); /*0x5f78a0*/
          --v18; /*0x5f78a5*/
        }
        while ( v18 ); /*0x5f78a6*/
      }
      __3_YAXPAX_Z(v14); /*0x5f78a9*/
    }
    byte_AC148A = 0; /*0x5f78b1*/
  }
  if ( byte_AC148B ) /*0x5f78bd*/
  {
    if ( FileSystem_TALKBUBL_SHP ) /*0x5f78c7*/
    {
      v19 = *(_DWORD *)(FileSystem_TALKBUBL_SHP - 4); /*0x5f78c9*/
      v20 = (void *)(FileSystem_TALKBUBL_SHP - 4); /*0x5f78cc*/
      v21 = 9 * v19; /*0x5f78cf*/
      v22 = v19 - 1; /*0x5f78d2*/
      v23 = (FileTreeNode *)(FileSystem_TALKBUBL_SHP + 4 * v21); /*0x5f78d3*/
      if ( v22 >= 0 ) /*0x5f78d6*/
      {
        v24 = v22 + 1; /*0x5f78d8*/
        do /*0x5f78e6*/
        {
          v23 -= 9; /*0x5f78db*/
          FileTreeNode::Destroy(v23); /*0x5f78e0*/
          --v24; /*0x5f78e5*/
        }
        while ( v24 ); /*0x5f78e6*/
      }
      __3_YAXPAX_Z(v20); /*0x5f78e9*/
    }
    byte_AC148B = 0; /*0x5f78f1*/
  }
}



// ==== 0x005F7900  ObjectTypeClass::FindMatchingUnit  this=ObjectTypeClass  sig=csp ====
int __thiscall TechnoClass::FindMatchingUnit(TechnoTypeClass *this, char a2, char a3, char a4, int a5)
{
  int v6; // ebx
  int v7; // ebp
  int v8; // esi
  int v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h]

  v6 = 0; /*0x5f7909*/
  v10 = (*(int (__thiscall **)(TechnoTypeClass *))(this->vtable0 + 112))(this); /*0x5f7914*/
  v7 = 0; /*0x5f7918*/
  v11 = *(_DWORD *)(a5 + 120); /*0x5f791f*/
  if ( v11 <= 0 ) /*0x5f7923*/
    return 0; /*0x5f7a83*/
  do /*0x5f7a5e*/
  {
    v8 = *(_DWORD *)(*(_DWORD *)(a5 + 108) + 4 * v7); /*0x5f7930*/
    if ( !*(_BYTE *)(v8 + 129) /*0x5f79c1*/
      && *(_DWORD *)(*(_DWORD *)(v8 + 1312) + 3768) == (*(int (__thiscall **)(TechnoTypeClass *))(this->vtable0 + 44))(this)
      && (!a3 || *(_BYTE *)(v8 + 1632))
      && (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 388))(v8) != 19
      && *(_DWORD *)(v8 + 180) != 19
      && (!a4 || HouseClass::CanBuild(*(HouseClass **)(v8 + 540), (int)this, 1, 1) > 0)
      && ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v8 + 1312) + 112))(*(_DWORD *)(v8 + 1312)) & v10) != 0 )
    {
      if ( a2 /*0x5f79e4*/
        || !(unsigned __int8)Team::AllMembersValid((Team *)v8)
        || (*(int (__thiscall **)(TechnoTypeClass *))(this->vtable0 + 44))(this) != 3 )
      {
        if ( (*(int (__thiscall **)(TechnoTypeClass *))(this->vtable0 + 44))(this) == 40 && this->align_CCB[3] ) /*0x5f7a15*/
        {
          if ( !*(_BYTE *)(*(_DWORD *)(v8 + 1312) + 3278) ) /*0x5f7a2d*/
            goto LABEL_26; /*0x5f7a2d*/
          if ( *(_BYTE *)(v8 + 979) ) /*0x5f7a2f*/
            return v8; /*0x5f7a37*/
        }
        else if ( *(_BYTE *)(*(_DWORD *)(v8 + 1312) + 3278) ) /*0x5f7a41*/
        {
          goto LABEL_26; /*0x5f7a49*/
        }
        if ( *(_BYTE *)(v8 + 979) ) /*0x5f7a4b*/
          return v8; /*0x5f7a7d*/
        goto LABEL_25; /*0x5f7a53*/
      }
      if ( (*(int (__thiscall **)(TechnoTypeClass *))(this->vtable0 + 44))(this) == 3 /*0x5f79f4*/
        && RadioClass::HasFreeLink((RadioClass *)v8) )
      {
        if ( *(_BYTE *)(v8 + 979) ) /*0x5f79fd*/
          return v8; /*0x5f7a05*/
LABEL_25:
        v6 = v8; /*0x5f7a55*/
      }
    }
LABEL_26:
    ++v7; /*0x5f7a57*/
  }
  while ( v7 < v11 ); /*0x5f7a5e*/
  if ( !v6 ) /*0x5f7a66*/
    return 0; /*0x5f7a66*/
  return v6; /*0x5f7a68*/
}



// ==== 0x005F7A90  VoxelAnimType::LoadSection  this=ObjectTypeClass  sig=csp ====
char __thiscall VoxelAnimType::LoadSection(VoxelAnimType *this, const char *a2, int a3)
{
  void *v4; // ebp
  File *v5; // eax
  _DWORD *FileVXL; // eax
  void *v7; // ebp
  File *v8; // eax
  _DWORD *FileHVA; // eax
  char v10; // cl
  char v11; // al
  int Info; // eax
  void *v14; // ebp
  void *v15; // ebp
  char v16; // [esp+12h] [ebp-2DEh]
  CCFileClass v17; // [esp+14h] [ebp-2DCh] BYREF
  int v18[3]; // [esp+6Ch] [ebp-284h] BYREF
  int v19; // [esp+78h] [ebp-278h]
  CCFileClass v20; // [esp+80h] [ebp-270h] BYREF
  int v21[3]; // [esp+D8h] [ebp-218h] BYREF
  int v22; // [esp+E4h] [ebp-20Ch]
  char Buffer[256]; // [esp+ECh] [ebp-204h] BYREF
  char Source[260]; // [esp+1ECh] [ebp-104h] BYREF

  if ( a3 ) /*0x5f7aa7*/
    sprintf(Buffer, "%sTUR%d", a2, a3); /*0x5f7ade*/
  else
    sprintf(Buffer, "%sTUR", a2); /*0x5f7abe*/
  _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f7afd*/
  CCFileClass::Construct(&v17, Source); /*0x5f7b11*/
  if ( (unsigned __int8)CCFileClass::Open(&v17, 0) ) /*0x5f7b1b*/
  {
    v4 = (void *)*((_DWORD *)this + 2 * a3 + 50); /*0x5f7b46*/
    if ( v4 ) /*0x5f7b4f*/
    {
      WaveClass::Destroy(*((WaveClass **)this + 2 * a3 + 50)); /*0x5f7b53*/
      __3_YAXPAX_Z(v4); /*0x5f7b59*/
      *((_DWORD *)this + 2 * a3 + 50) = 0; /*0x5f7b61*/
    }
    v16 = 0; /*0x5f7b6a*/
    v5 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f7b6e*/
    if ( v5 ) /*0x5f7b78*/
      FileVXL = File::LoadFileVXL(v5, (int)&v17, 0); /*0x5f7b82*/
    else
      FileVXL = 0; /*0x5f7b89*/
    *((_DWORD *)this + 2 * a3 + 50) = FileVXL; /*0x5f7b8d*/
    if ( FileVXL && !*(_BYTE *)FileVXL ) /*0x5f7b96*/
      v16 = 1; /*0x5f7b9a*/
    if ( a3 ) /*0x5f7ba1*/
      sprintf(Buffer, "%sTUR%d", a2, a3); /*0x5f7bd8*/
    else
      sprintf(Buffer, "%sTUR", a2); /*0x5f7bb8*/
    _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f7bf7*/
    CCFileClass::Construct(&v20, Source); /*0x5f7c0e*/
    v7 = (void *)*((_DWORD *)this + 2 * a3 + 51); /*0x5f7c13*/
    if ( v7 ) /*0x5f7c1c*/
    {
      String::Release(*((String **)this + 2 * a3 + 51)); /*0x5f7c20*/
      __3_YAXPAX_Z(v7); /*0x5f7c26*/
      *((_DWORD *)this + 2 * a3 + 51) = 0; /*0x5f7c2e*/
    }
    v8 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f7c3b*/
    if ( v8 ) /*0x5f7c45*/
      FileHVA = File::LoadFileHVA(v8, (int)&v20); /*0x5f7c51*/
    else
      FileHVA = 0; /*0x5f7c58*/
    *((_DWORD *)this + 2 * a3 + 51) = FileHVA; /*0x5f7c5c*/
    if ( !FileHVA || (v10 = *(_BYTE *)FileHVA, v11 = 1, v10) ) /*0x5f7c6b*/
      v11 = 0; /*0x5f7c6d*/
    if ( v16 && v11 ) /*0x5f7c7d*/
    {
      Info = VoxelSection::GetInfo(*((VoxelSection **)this + 2 * a3 + 50), 0, 0); /*0x5f7c8c*/
      Matrix::Scale(*((Matrix **)this + 2 * a3 + 51), *(float *)(Info + 12)); /*0x5f7c9c*/
      *(_DWORD *)v20.CDFileClass = &CCFileClass::`vftable'; /*0x5f7cad*/
      v22 = 0; /*0x5f7cb4*/
      Vector::Clear((int)v21); /*0x5f7cbb*/
      *(_DWORD *)v20.CDFileClass = &off_7E1668; /*0x5f7ccc*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x5f7cd3*/
      *(_DWORD *)v17.CDFileClass = &CCFileClass::`vftable'; /*0x5f7cdc*/
      v19 = 0; /*0x5f7ce0*/
      Vector::Clear((int)v18); /*0x5f7ce4*/
      *(_DWORD *)v17.CDFileClass = &off_7E1668; /*0x5f7ced*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v17); /*0x5f7cf1*/
      return 1; /*0x5f7d02*/
    }
    v14 = (void *)*((_DWORD *)this + 2 * a3 + 50); /*0x5f7d05*/
    if ( v14 ) /*0x5f7d0e*/
    {
      WaveClass::Destroy(*((WaveClass **)this + 2 * a3 + 50)); /*0x5f7d12*/
      __3_YAXPAX_Z(v14); /*0x5f7d18*/
      *((_DWORD *)this + 2 * a3 + 50) = 0; /*0x5f7d20*/
    }
    v15 = (void *)*((_DWORD *)this + 2 * a3 + 51); /*0x5f7d27*/
    if ( v15 ) /*0x5f7d30*/
    {
      String::Release(*((String **)this + 2 * a3 + 51)); /*0x5f7d34*/
      __3_YAXPAX_Z(v15); /*0x5f7d3a*/
      *((_DWORD *)this + 2 * a3 + 51) = 0; /*0x5f7d42*/
    }
    *(_DWORD *)v20.CDFileClass = &CCFileClass::`vftable'; /*0x5f7d55*/
    v22 = 0; /*0x5f7d5c*/
    Vector::Clear((int)v21); /*0x5f7d63*/
    *(_DWORD *)v20.CDFileClass = &off_7E1668; /*0x5f7d74*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x5f7d7b*/
    *(_DWORD *)v17.CDFileClass = &CCFileClass::`vftable'; /*0x5f7d84*/
    v19 = 0; /*0x5f7d88*/
    Vector::Clear((int)v18); /*0x5f7d8c*/
    *(_DWORD *)v17.CDFileClass = &off_7E1668; /*0x5f7d91*/
  }
  else
  {
    *(_DWORD *)v17.CDFileClass = &CCFileClass::`vftable'; /*0x5f7b28*/
    v19 = 0; /*0x5f7b30*/
    Vector::Clear((int)v18); /*0x5f7b34*/
    *(_DWORD *)v17.CDFileClass = &off_7E1668; /*0x5f7b39*/
  }
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v17); /*0x5f7d99*/
  return 0; /*0x5f7cf6*/
}



// ==== 0x005F7DB0  VoxelAnimType::LoadBarrel  this=ObjectTypeClass  sig=csp ====
char __thiscall VoxelAnimType::LoadBarrel(VoxelAnimType *this, const char *a2, int a3)
{
  File *v5; // eax
  _DWORD *FileVXL; // eax
  char v7; // bl
  File *v8; // eax
  _DWORD *FileHVA; // eax
  int Info; // eax
  void *v11; // ebp
  String *v12; // esi
  char v13; // [esp+13h] [ebp-2DDh]
  CCFileClass v14; // [esp+14h] [ebp-2DCh] BYREF
  int v15[3]; // [esp+6Ch] [ebp-284h] BYREF
  int v16; // [esp+78h] [ebp-278h]
  CCFileClass v17; // [esp+80h] [ebp-270h] BYREF
  int v18[3]; // [esp+D8h] [ebp-218h] BYREF
  int v19; // [esp+E4h] [ebp-20Ch]
  char Buffer[256]; // [esp+ECh] [ebp-204h] BYREF
  char Source[260]; // [esp+1ECh] [ebp-104h] BYREF

  if ( a3 ) /*0x5f7dc7*/
    sprintf(Buffer, "%sBARL%d", a2, a3); /*0x5f7dfe*/
  else
    sprintf(Buffer, "%sBARL", a2); /*0x5f7dde*/
  _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f7e1d*/
  CCFileClass::Construct(&v14, Source); /*0x5f7e31*/
  if ( (unsigned __int8)CCFileClass::Open(&v14, 0) ) /*0x5f7e3b*/
  {
    v13 = 0; /*0x5f7e7b*/
    v5 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f7e80*/
    if ( v5 ) /*0x5f7e8a*/
      FileVXL = File::LoadFileVXL(v5, (int)&v14, 0); /*0x5f7e94*/
    else
      FileVXL = 0; /*0x5f7e9b*/
    *((_DWORD *)this + 2 * a3 + 86) = FileVXL; /*0x5f7e9f*/
    if ( FileVXL && !*(_BYTE *)FileVXL ) /*0x5f7ea8*/
      v13 = 1; /*0x5f7ead*/
    if ( a3 ) /*0x5f7eb4*/
      sprintf(Buffer, "%sBARL%d", a2, a3); /*0x5f7edd*/
    else
      sprintf(Buffer, "%sBARL", a2); /*0x5f7ec4*/
    _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f7efc*/
    CCFileClass::Construct(&v17, Source); /*0x5f7f13*/
    v7 = 0; /*0x5f7f1a*/
    v8 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f7f1c*/
    if ( v8 ) /*0x5f7f26*/
      FileHVA = File::LoadFileHVA(v8, (int)&v17); /*0x5f7f32*/
    else
      FileHVA = 0; /*0x5f7f39*/
    *((_DWORD *)this + 2 * a3 + 87) = FileHVA; /*0x5f7f3d*/
    if ( FileHVA && !*(_BYTE *)FileHVA ) /*0x5f7f46*/
      v7 = 1; /*0x5f7f4b*/
    if ( v13 && v7 ) /*0x5f7f5b*/
    {
      Info = VoxelSection::GetInfo(*((VoxelSection **)this + 2 * a3 + 86), 0, 0); /*0x5f7f6a*/
      Matrix::Scale(*((Matrix **)this + 2 * a3 + 87), *(float *)(Info + 12)); /*0x5f7f7a*/
      *(_DWORD *)v17.CDFileClass = &CCFileClass::`vftable'; /*0x5f7f8b*/
      v19 = 0; /*0x5f7f92*/
      Vector::Clear((int)v18); /*0x5f7f99*/
      *(_DWORD *)v17.CDFileClass = &off_7E1668; /*0x5f7faa*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v17); /*0x5f7fb1*/
      *(_DWORD *)v14.CDFileClass = &CCFileClass::`vftable'; /*0x5f7fba*/
      v16 = 0; /*0x5f7fbe*/
      Vector::Clear((int)v15); /*0x5f7fc2*/
      *(_DWORD *)v14.CDFileClass = &off_7E1668; /*0x5f7fcb*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v14); /*0x5f7fcf*/
      return 1; /*0x5f7fd7*/
    }
    else
    {
      v11 = (void *)*((_DWORD *)this + 2 * a3 + 86); /*0x5f7fe3*/
      if ( v11 ) /*0x5f7fee*/
      {
        WaveClass::Destroy(*((WaveClass **)this + 2 * a3 + 86)); /*0x5f7ff2*/
        __3_YAXPAX_Z(v11); /*0x5f7ff8*/
      }
      v12 = (String *)*((_DWORD *)this + 2 * a3 + 87); /*0x5f8000*/
      if ( v12 ) /*0x5f8009*/
      {
        String::Release(v12); /*0x5f800d*/
        __3_YAXPAX_Z(v12); /*0x5f8013*/
      }
      *(_DWORD *)v17.CDFileClass = &CCFileClass::`vftable'; /*0x5f8027*/
      v19 = 0; /*0x5f802e*/
      Vector::Clear((int)v18); /*0x5f8035*/
      *(_DWORD *)v17.CDFileClass = &off_7E1668; /*0x5f8046*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v17); /*0x5f804d*/
      *(_DWORD *)v14.CDFileClass = &CCFileClass::`vftable'; /*0x5f8056*/
      v16 = 0; /*0x5f805a*/
      Vector::Clear((int)v15); /*0x5f805e*/
      *(_DWORD *)v14.CDFileClass = &off_7E1668; /*0x5f8067*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v14); /*0x5f806b*/
      return 0; /*0x5f8073*/
    }
  }
  else
  {
    *(_DWORD *)v14.CDFileClass = &CCFileClass::`vftable'; /*0x5f7e48*/
    v16 = 0; /*0x5f7e50*/
    Vector::Clear((int)v15); /*0x5f7e54*/
    *(_DWORD *)v14.CDFileClass = &off_7E1668; /*0x5f7e5d*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v14); /*0x5f7e65*/
    return 1; /*0x5f7e6d*/
  }
}



// ==== 0x005F8080  ObjectTypeClass::CleanupWeapons  this=ObjectTypeClass  sig=csp ====
void __thiscall ObjectTypeClass::CleanupWeapons(char *this)
{
  char *v1; // esi
  int v2; // ebp
  void *v3; // edi
  void **v4; // edi
  void *v5; // edi
  void *v6; // edi

  v1 = this + 204; /*0x5f8084*/
  v2 = 18; /*0x5f808a*/
  do /*0x5f8107*/
  {
    v3 = (void *)*((_DWORD *)v1 - 1); /*0x5f8091*/
    if ( v3 ) /*0x5f8096*/
    {
      WaveClass::Destroy(*((_DWORD *)v1 - 1)); /*0x5f809a*/
      __3_YAXPAX_Z(v3); /*0x5f80a0*/
      *((_DWORD *)v1 - 1) = 0; /*0x5f80a8*/
    }
    v4 = *(void ***)v1; /*0x5f80ab*/
    if ( *(_DWORD *)v1 ) /*0x5f80ab*/
    {
      String::Release(*(void ***)v1); /*0x5f80b3*/
      __3_YAXPAX_Z(v4); /*0x5f80b9*/
      *(_DWORD *)v1 = 0; /*0x5f80c1*/
    }
    v5 = (void *)*((_DWORD *)v1 + 35); /*0x5f80c3*/
    if ( v5 ) /*0x5f80cb*/
    {
      WaveClass::Destroy(*((_DWORD *)v1 + 35)); /*0x5f80cf*/
      __3_YAXPAX_Z(v5); /*0x5f80d5*/
      *((_DWORD *)v1 + 35) = 0; /*0x5f80dd*/
    }
    v6 = (void *)*((_DWORD *)v1 + 36); /*0x5f80e3*/
    if ( v6 ) /*0x5f80eb*/
    {
      String::Release(*((void ***)v1 + 36)); /*0x5f80ef*/
      __3_YAXPAX_Z(v6); /*0x5f80f5*/
      *((_DWORD *)v1 + 36) = 0; /*0x5f80fd*/
    }
    v1 += 8; /*0x5f8103*/
    --v2; /*0x5f8106*/
  }
  while ( v2 ); /*0x5f8107*/
}



// ==== 0x005F8110  VoxelAnimType::LoadAnim  this=ObjectTypeClass  sig=csp ====
int __thiscall VoxelAnimType::LoadAnim(char *this)
{
  const char *v2; // ebp
  void *v3; // edi
  File *v4; // eax
  _DWORD *FileVXL; // eax
  void *v6; // edi
  File *v7; // eax
  _DWORD *FileHVA; // eax
  int Info; // eax
  void *v10; // edi
  File *v11; // eax
  _DWORD *v12; // eax
  void *v13; // edi
  File *v14; // eax
  _DWORD *v15; // eax
  int v16; // eax
  void *v17; // edi
  File *v18; // eax
  _DWORD *v19; // eax
  void *v20; // edi
  File *v21; // eax
  _DWORD *v22; // eax
  int v23; // eax
  int v24; // ebp
  int v25; // edi
  void *v26; // edi
  File *v27; // eax
  _DWORD *v28; // eax
  void *v29; // edi
  File *v30; // eax
  _DWORD *v31; // eax
  int v32; // eax
  int v33; // ebp
  int v34; // edi
  void *v35; // edi
  File *v36; // eax
  _DWORD *v37; // eax
  void *v38; // edi
  File *v39; // eax
  _DWORD *v40; // eax
  int v41; // eax
  void *v42; // edi
  void *v43; // edi
  void *v44; // edi
  void *v45; // edi
  int v46; // edi
  int v47; // ebp
  VoxelSection *v48; // ecx
  char v50; // [esp+13h] [ebp-349h]
  CCFileClass v51; // [esp+14h] [ebp-348h] BYREF
  int v52[3]; // [esp+6Ch] [ebp-2F0h] BYREF
  int v53; // [esp+78h] [ebp-2E4h]
  CCFileClass v54; // [esp+80h] [ebp-2DCh] BYREF
  int v55[3]; // [esp+D8h] [ebp-284h] BYREF
  int v56; // [esp+E4h] [ebp-278h]
  char Buffer[260]; // [esp+ECh] [ebp-270h] BYREF
  CCFileClass v58; // [esp+1F0h] [ebp-16Ch] BYREF
  char v59[12]; // [esp+248h] [ebp-114h] BYREF
  int v60; // [esp+254h] [ebp-108h]
  char Filename[256]; // [esp+25Ch] [ebp-100h] BYREF

  v2 = this + 504; /*0x5f811e*/
  v50 = 0; /*0x5f8134*/
  _makepath(Buffer, 0, 0, this + 504, g_Str_File__VXL); /*0x5f8138*/
  CCFileClass::Construct(&v58, Buffer); /*0x5f814f*/
  if ( (unsigned __int8)CCFileClass::Open(&v58, 0) ) /*0x5f815c*/
  {
    v3 = (void *)this->ChargerBarrels_0x12; /*0x5f8169*/
    if ( v3 ) /*0x5f8171*/
    {
      WaveClass::Destroy(*((WaveClass **)this + 44)); /*0x5f8175*/
      __3_YAXPAX_Z(v3); /*0x5f817b*/
    }
    v4 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8185*/
    if ( v4 ) /*0x5f818f*/
      FileVXL = File::LoadFileVXL(v4, (int)&v58, 0); /*0x5f819c*/
    else
      FileVXL = 0; /*0x5f81a3*/
    this->ChargerBarrels_0x12 = FileVXL; /*0x5f81a7*/
    if ( !FileVXL || *(_BYTE *)FileVXL ) /*0x5f81af*/
      v50 = 1; /*0x5f81b3*/
    _makepath(Buffer, 0, 0, v2, g_Str_File__HVA); /*0x5f81c8*/
    CCFileClass::Construct(&v51, Buffer); /*0x5f81dc*/
    v6 = (void *)this->q0B4; /*0x5f81e1*/
    if ( v6 ) /*0x5f81e9*/
    {
      String::Release(*((String **)this + 45)); /*0x5f81ed*/
      __3_YAXPAX_Z(v6); /*0x5f81f3*/
    }
    v7 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f81fd*/
    if ( v7 ) /*0x5f8207*/
      FileHVA = File::LoadFileHVA(v7, (int)&v51); /*0x5f8210*/
    else
      FileHVA = 0; /*0x5f8217*/
    this->q0B4 = FileHVA; /*0x5f821b*/
    if ( !FileHVA || *(_BYTE *)FileHVA ) /*0x5f8223*/
    {
      v50 = 1; /*0x5f8245*/
    }
    else
    {
      Info = VoxelSection::GetInfo(*((VoxelSection **)this + 44), 0, 0); /*0x5f822f*/
      Matrix::Scale(*((Matrix **)this + 45), *(float *)(Info + 12)); /*0x5f823e*/
    }
    *(_DWORD *)v51.CDFileClass = &CCFileClass::`vftable'; /*0x5f824e*/
    v53 = 0; /*0x5f8256*/
    Vector::Clear((int)v52); /*0x5f825a*/
    *(_DWORD *)v51.CDFileClass = &off_7E1668; /*0x5f8263*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v51); /*0x5f826b*/
  }
  else
  {
    v50 = 1; /*0x5f8272*/
  }
  if ( (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) != 40 || *(this + 3233) ) /*0x5f8287*/
  {
    if ( (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) != 40 /*0x5f8657*/
      || !(unsigned __int8)HouseClass::HasPower((HouseClass *)this)
      || *(this + 3285) )
    {
      sprintf(Filename, "%sTUR", v2); /*0x5f86a4*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f86c0*/
      CCFileClass::Construct(&v51, Buffer); /*0x5f86d4*/
      if ( (unsigned __int8)CCFileClass::Open(&v51, 0) ) /*0x5f86de*/
      {
        v26 = (void *)this->q0B8; /*0x5f86eb*/
        if ( v26 ) /*0x5f86f3*/
        {
          WaveClass::Destroy(*((WaveClass **)this + 46)); /*0x5f86f7*/
          __3_YAXPAX_Z(v26); /*0x5f86fd*/
        }
        v27 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8707*/
        if ( v27 ) /*0x5f8711*/
          v28 = File::LoadFileVXL(v27, (int)&v51, 0); /*0x5f871b*/
        else
          v28 = 0; /*0x5f8722*/
        this->q0B8 = v28; /*0x5f8726*/
        if ( !v28 || *(_BYTE *)v28 ) /*0x5f872e*/
          v50 = 1; /*0x5f8732*/
        sprintf(Filename, "%sTUR", v2); /*0x5f8745*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f8761*/
        CCFileClass::Construct(&v54, Buffer); /*0x5f8778*/
        v29 = (void *)this->ChargerTurrets; /*0x5f877d*/
        if ( v29 ) /*0x5f8785*/
        {
          String::Release(*((String **)this + 47)); /*0x5f8789*/
          __3_YAXPAX_Z(v29); /*0x5f878f*/
        }
        v30 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f8799*/
        if ( v30 ) /*0x5f87a3*/
          v31 = File::LoadFileHVA(v30, (int)&v54); /*0x5f87af*/
        else
          v31 = 0; /*0x5f87b6*/
        this->ChargerTurrets = v31; /*0x5f87ba*/
        if ( !v31 || *(_BYTE *)v31 ) /*0x5f87c2*/
        {
          v50 = 1; /*0x5f87e4*/
        }
        else
        {
          v32 = VoxelSection::GetInfo(*((VoxelSection **)this + 46), 0, 0); /*0x5f87ce*/
          Matrix::Scale(*((Matrix **)this + 47), *(float *)(v32 + 12)); /*0x5f87dd*/
        }
        *(_DWORD *)v54.CDFileClass = &CCFileClass::`vftable'; /*0x5f87f0*/
        v56 = 0; /*0x5f87fb*/
        Vector::Clear((int)v55); /*0x5f8802*/
        *(_DWORD *)v54.CDFileClass = &off_7E1668; /*0x5f880e*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x5f8819*/
      }
      goto LABEL_92; /*0x5f8819*/
    }
    v24 = this->Insignificant; /*0x5f865f*/
    v25 = 0; /*0x5f8665*/
    if ( v24 > 0 ) /*0x5f8669*/
    {
      while ( VoxelAnimType::LoadSection((VoxelAnimType *)this, this + 504, v25) ) /*0x5f8680*/
      {
        if ( ++v25 >= v24 ) /*0x5f8685*/
          goto LABEL_93; /*0x5f8685*/
      }
      v50 = 1; /*0x5f868c*/
    }
  }
  else
  {
    if ( !strcmp(this + 36, "APC") ) /*0x5f82a1*/
    {
      sprintf(Filename, off_832AE0, this + 504); /*0x5f82e0*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f82fc*/
      CCFileClass::Construct(&v51, Buffer); /*0x5f8310*/
      if ( (unsigned __int8)CCFileClass::Open(&v51, 0) ) /*0x5f831a*/
      {
        v10 = (void *)this->q0B8; /*0x5f8327*/
        if ( v10 ) /*0x5f832f*/
        {
          WaveClass::Destroy(*((WaveClass **)this + 46)); /*0x5f8333*/
          __3_YAXPAX_Z(v10); /*0x5f8339*/
        }
        v11 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8343*/
        if ( v11 ) /*0x5f834d*/
          v12 = File::LoadFileVXL(v11, (int)&v51, 0); /*0x5f8357*/
        else
          v12 = 0; /*0x5f835e*/
        this->q0B8 = v12; /*0x5f8362*/
        if ( !v12 || *(_BYTE *)v12 ) /*0x5f836a*/
          v50 = 1; /*0x5f836e*/
        sprintf(Filename, off_832AE0, this + 504); /*0x5f8381*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f839d*/
        CCFileClass::Construct(&v54, Buffer); /*0x5f83b4*/
        v13 = (void *)this->ChargerTurrets; /*0x5f83b9*/
        if ( v13 ) /*0x5f83c1*/
        {
          String::Release(*((String **)this + 47)); /*0x5f83c5*/
          __3_YAXPAX_Z(v13); /*0x5f83cb*/
        }
        v14 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f83d5*/
        if ( v14 ) /*0x5f83df*/
          v15 = File::LoadFileHVA(v14, (int)&v54); /*0x5f83eb*/
        else
          v15 = 0; /*0x5f83f2*/
        this->ChargerTurrets = v15; /*0x5f83f6*/
        if ( !v15 || *(_BYTE *)v15 ) /*0x5f83fe*/
        {
          v50 = 1; /*0x5f8420*/
        }
        else
        {
          v16 = VoxelSection::GetInfo(*((VoxelSection **)this + 46), 0, 0); /*0x5f840a*/
          Matrix::Scale(*((Matrix **)this + 47), *(float *)(v16 + 12)); /*0x5f8419*/
        }
        *(_DWORD *)v54.CDFileClass = &CCFileClass::`vftable'; /*0x5f842c*/
        v56 = 0; /*0x5f8437*/
        Vector::Clear((int)v55); /*0x5f843e*/
        *(_DWORD *)v54.CDFileClass = &off_7E1668; /*0x5f844a*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x5f8455*/
      }
      *(_DWORD *)v51.CDFileClass = &CCFileClass::`vftable'; /*0x5f845e*/
      v53 = 0; /*0x5f8466*/
      Vector::Clear((int)v52); /*0x5f846a*/
      *(_DWORD *)v51.CDFileClass = &off_7E1668; /*0x5f8473*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v51); /*0x5f847b*/
    }
    if ( this->q1E8 ) /*0x5f8480*/
    {
      sprintf(Filename, "%sWO", this + 504); /*0x5f84a0*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f84bc*/
      CCFileClass::Construct(&v51, Buffer); /*0x5f84d0*/
      if ( (unsigned __int8)CCFileClass::Open(&v51, 0) ) /*0x5f84da*/
      {
        v17 = (void *)this->q0B8; /*0x5f84e7*/
        if ( v17 ) /*0x5f84ef*/
        {
          WaveClass::Destroy(*((WaveClass **)this + 46)); /*0x5f84f3*/
          __3_YAXPAX_Z(v17); /*0x5f84f9*/
        }
        v18 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8503*/
        if ( v18 ) /*0x5f850d*/
          v19 = File::LoadFileVXL(v18, (int)&v51, 0); /*0x5f8517*/
        else
          v19 = 0; /*0x5f851e*/
        this->q0B8 = v19; /*0x5f8522*/
        if ( !v19 || *(_BYTE *)v19 ) /*0x5f852a*/
          v50 = 1; /*0x5f852e*/
        sprintf(Filename, "%sWO", this + 504); /*0x5f8541*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f855d*/
        CCFileClass::Construct(&v54, Buffer); /*0x5f8574*/
        v20 = (void *)this->ChargerTurrets; /*0x5f8579*/
        if ( v20 ) /*0x5f8581*/
        {
          String::Release(*((String **)this + 47)); /*0x5f8585*/
          __3_YAXPAX_Z(v20); /*0x5f858b*/
        }
        v21 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f8595*/
        if ( v21 ) /*0x5f859f*/
          v22 = File::LoadFileHVA(v21, (int)&v54); /*0x5f85ab*/
        else
          v22 = 0; /*0x5f85b2*/
        this->ChargerTurrets = v22; /*0x5f85b6*/
        if ( !v22 || *(_BYTE *)v22 ) /*0x5f85be*/
        {
          v50 = 1; /*0x5f85e0*/
        }
        else
        {
          v23 = VoxelSection::GetInfo(*((VoxelSection **)this + 46), 0, 0); /*0x5f85ca*/
          Matrix::Scale(*((Matrix **)this + 47), *(float *)(v23 + 12)); /*0x5f85d9*/
        }
        *(_DWORD *)v54.CDFileClass = &CCFileClass::`vftable'; /*0x5f85ec*/
        v56 = 0; /*0x5f85f7*/
        Vector::Clear((int)v55); /*0x5f85fe*/
        *(_DWORD *)v54.CDFileClass = &off_7E1668; /*0x5f860a*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x5f8615*/
      }
LABEL_92:
      *(_DWORD *)v51.CDFileClass = &CCFileClass::`vftable'; /*0x5f881e*/
      v53 = 0; /*0x5f882a*/
      Vector::Clear((int)v52); /*0x5f882e*/
      *(_DWORD *)v51.CDFileClass = &off_7E1668; /*0x5f8833*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v51); /*0x5f883f*/
    }
  }
LABEL_93:
  if ( (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) != 40 || *(this + 3233) ) /*0x5f8850*/
  {
    if ( (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) == 40 /*0x5f8873*/
      && (unsigned __int8)HouseClass::HasPower((HouseClass *)this)
      && !*(this + 3285) )
    {
      v33 = this->Insignificant; /*0x5f887b*/
      v34 = 0; /*0x5f8881*/
      if ( v33 > 0 ) /*0x5f8885*/
      {
        while ( VoxelAnimType::LoadBarrel((VoxelAnimType *)this, this + 504, v34) ) /*0x5f889c*/
        {
          if ( ++v34 >= v33 ) /*0x5f88a5*/
            goto LABEL_122; /*0x5f88a5*/
        }
        goto LABEL_123; /*0x5f889c*/
      }
    }
    else
    {
      sprintf(Filename, "%sBARL", this + 504); /*0x5f88c0*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f88dc*/
      CCFileClass::Construct(&v51, Buffer); /*0x5f88f0*/
      if ( (unsigned __int8)CCFileClass::Open(&v51, 0) ) /*0x5f88fa*/
      {
        v35 = (void *)this->NoSpawnAlt; /*0x5f8907*/
        if ( v35 ) /*0x5f890f*/
        {
          WaveClass::Destroy(*((WaveClass **)this + 48)); /*0x5f8913*/
          __3_YAXPAX_Z(v35); /*0x5f8919*/
        }
        v36 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8923*/
        if ( v36 ) /*0x5f892d*/
          v37 = File::LoadFileVXL(v36, (int)&v51, 0); /*0x5f8937*/
        else
          v37 = 0; /*0x5f893e*/
        this->NoSpawnAlt = v37; /*0x5f8942*/
        if ( !v37 || *(_BYTE *)v37 ) /*0x5f894a*/
          v50 = 1; /*0x5f894e*/
        sprintf(Filename, "%sBARL", this + 504); /*0x5f8961*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f897d*/
        CCFileClass::Construct(&v54, Buffer); /*0x5f8994*/
        v38 = (void *)this->q031; /*0x5f8999*/
        if ( v38 ) /*0x5f89a1*/
        {
          String::Release(*((String **)this + 49)); /*0x5f89a5*/
          __3_YAXPAX_Z(v38); /*0x5f89ab*/
        }
        v39 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f89b5*/
        if ( v39 ) /*0x5f89bf*/
          v40 = File::LoadFileHVA(v39, (int)&v54); /*0x5f89cb*/
        else
          v40 = 0; /*0x5f89d2*/
        this->q031 = v40; /*0x5f89d6*/
        if ( !v40 || *(_BYTE *)v40 ) /*0x5f89de*/
        {
          v50 = 1; /*0x5f8a00*/
        }
        else
        {
          v41 = VoxelSection::GetInfo(*((VoxelSection **)this + 48), 0, 0); /*0x5f89ea*/
          Matrix::Scale(*((Matrix **)this + 49), *(float *)(v41 + 12)); /*0x5f89f9*/
        }
        *(_DWORD *)v54.CDFileClass = &CCFileClass::`vftable'; /*0x5f8a0c*/
        v56 = 0; /*0x5f8a17*/
        Vector::Clear((int)v55); /*0x5f8a1e*/
        *(_DWORD *)v54.CDFileClass = &off_7E1668; /*0x5f8a2a*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x5f8a35*/
      }
      *(_DWORD *)v51.CDFileClass = &CCFileClass::`vftable'; /*0x5f8a3e*/
      v53 = 0; /*0x5f8a46*/
      Vector::Clear((int)v52); /*0x5f8a4a*/
      *(_DWORD *)v51.CDFileClass = &off_7E1668; /*0x5f8a53*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v51); /*0x5f8a5b*/
    }
  }
LABEL_122:
  if ( v50 ) /*0x5f8a64*/
  {
LABEL_123:
    v42 = (void *)this->ChargerBarrels_0x12; /*0x5f8a6a*/
    if ( v42 ) /*0x5f8a72*/
    {
      WaveClass::Destroy(*((WaveClass **)this + 44)); /*0x5f8a76*/
      __3_YAXPAX_Z(v42); /*0x5f8a7c*/
      this->ChargerBarrels_0x12 = 0; /*0x5f8a84*/
    }
    v43 = (void *)this->q0B4; /*0x5f8a8a*/
    if ( v43 ) /*0x5f8a92*/
    {
      String::Release(*((String **)this + 45)); /*0x5f8a96*/
      __3_YAXPAX_Z(v43); /*0x5f8a9c*/
      this->q0B4 = 0; /*0x5f8aa4*/
    }
    if ( (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) == 40 /*0x5f8ac1*/
      && (unsigned __int8)HouseClass::HasPower((HouseClass *)this)
      && !*(this + 3285) )
    {
      ObjectTypeClass::CleanupWeapons(this); /*0x5f8acb*/
    }
    else
    {
      v44 = (void *)this->q0B8; /*0x5f8ad5*/
      if ( v44 ) /*0x5f8add*/
      {
        WaveClass::Destroy(*((WaveClass **)this + 46)); /*0x5f8ae1*/
        __3_YAXPAX_Z(v44); /*0x5f8ae7*/
        this->q0B8 = 0; /*0x5f8aef*/
      }
      v45 = (void *)this->ChargerTurrets; /*0x5f8af5*/
      if ( v45 ) /*0x5f8afd*/
      {
        String::Release(*((String **)this + 47)); /*0x5f8b05*/
        __3_YAXPAX_Z(v45); /*0x5f8b0b*/
        this->ChargerTurrets = 0; /*0x5f8b13*/
      }
    }
    goto LABEL_146; /*0x5f8ad0*/
  }
  v46 = 0; /*0x5f8b2d*/
  v47 = *(unsigned __int8 *)(VoxelSection::GetInfo(*((VoxelSection **)this + 44), 0, 0) + 160); /*0x5f8b35*/
  v48 = (VoxelSection *)this->ChargerBarrels_0x12; /*0x5f8b37*/
  if ( *(_DWORD *)&v48[1] > 0 ) /*0x5f8b40*/
  {
    do /*0x5f8bda*/
    {
      if ( v47 <= *(unsigned __int8 *)(VoxelSection::GetInfo(v48, v46, 0) + 160) ) /*0x5f8b57*/
        v47 = *(unsigned __int8 *)(VoxelSection::GetInfo(*((VoxelSection **)this + 44), v46, 0) + 160); /*0x5f8b6e*/
      if ( v47 <= *(unsigned __int8 *)(VoxelSection::GetInfo(*((VoxelSection **)this + 44), v46, 0) + 161) ) /*0x5f8b87*/
        v47 = *(unsigned __int8 *)(VoxelSection::GetInfo(*((VoxelSection **)this + 44), v46, 0) + 161); /*0x5f8b9e*/
      if ( v47 <= *(unsigned __int8 *)(VoxelSection::GetInfo(*((VoxelSection **)this + 44), v46, 0) + 162) ) /*0x5f8bb7*/
        v47 = *(unsigned __int8 *)(VoxelSection::GetInfo(*((VoxelSection **)this + 44), v46, 0) + 162); /*0x5f8bce*/
      v48 = (VoxelSection *)this->ChargerBarrels_0x12; /*0x5f8bd0*/
      ++v46; /*0x5f8bd6*/
    }
    while ( v46 < *(_DWORD *)&v48[1] ); /*0x5f8bda*/
  }
  if ( v47 <= 8 ) /*0x5f8be3*/
    v47 = 8; /*0x5f8be5*/
  this->MaxDimension = v47; /*0x5f8bea*/
  __3_YAXPAX_Z(*((void **)this + 145)); /*0x5f8bf7*/
  this->VoxelCaches_4 = 0; /*0x5f8bfc*/
  this->q248 = 0; /*0x5f8c02*/
  this->q24C = 0; /*0x5f8c08*/
  this->q094 = 0; /*0x5f8c0e*/
  this->tail_95 = 0; /*0x5f8c14*/
  __3_YAXPAX_Z(*((void **)this + 150)); /*0x5f8c21*/
  this->q258 = 0; /*0x5f8c26*/
  this->q25C = 0; /*0x5f8c2c*/
  this->q098 = 0; /*0x5f8c32*/
  this->q264 = 0; /*0x5f8c38*/
  this->q268 = 0; /*0x5f8c3e*/
  __3_YAXPAX_Z(*((void **)this + 155)); /*0x5f8c4b*/
  this->unused_9B = 0; /*0x5f8c50*/
  this->Armor = 0; /*0x5f8c56*/
  this->q274 = 0; /*0x5f8c5c*/
  this->q278 = 0; /*0x5f8c62*/
  this->q27C = 0; /*0x5f8c68*/
  __3_YAXPAX_Z(*((void **)this + 160)); /*0x5f8c75*/
  this->q0A0 = 0; /*0x5f8c7d*/
  this->q284 = 0; /*0x5f8c83*/
  this->q288 = 0; /*0x5f8c89*/
  this->q28C = 0; /*0x5f8c8f*/
  this->q0A4 = 0; /*0x5f8c95*/
LABEL_146:
  *(_DWORD *)v58.CDFileClass = &CCFileClass::`vftable'; /*0x5f8c9b*/
  v60 = 0; /*0x5f8cad*/
  Vector::Clear((int)v59); /*0x5f8cb4*/
  *(_DWORD *)v58.CDFileClass = &off_7E1668; /*0x5f8cc0*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v58); /*0x5f8cd0*/
}



// ==== 0x005F8CE0  Turret::LoadVoxelTurretAndBarrel  this=Turret  sig=csp ====
char __thiscall Turret::LoadVoxelTurretAndBarrel(Turret *this)
{
  int v2; // eax
  void *v3; // edi
  File *v4; // eax
  _DWORD *FileVXL; // eax
  void *v6; // edi
  File *v7; // eax
  _DWORD *FileHVA; // eax
  VoxelSection *v9; // ecx
  int Info; // eax
  void *v11; // edi
  File *v12; // eax
  _DWORD *v13; // eax
  void *v14; // edi
  File *v15; // eax
  _DWORD *v16; // eax
  VoxelSection *v17; // ecx
  int v18; // eax
  CCFileClass v20; // [esp+8h] [ebp-348h] BYREF
  int v21[3]; // [esp+60h] [ebp-2F0h] BYREF
  int v22; // [esp+6Ch] [ebp-2E4h]
  CCFileClass v23; // [esp+74h] [ebp-2DCh] BYREF
  int v24[3]; // [esp+CCh] [ebp-284h] BYREF
  int v25; // [esp+D8h] [ebp-278h]
  CCFileClass v26; // [esp+E0h] [ebp-270h] BYREF
  int v27[3]; // [esp+138h] [ebp-218h] BYREF
  int v28; // [esp+144h] [ebp-20Ch]
  char Buffer[256]; // [esp+14Ch] [ebp-204h] BYREF
  char Source[260]; // [esp+24Ch] [ebp-104h] BYREF

  v2 = (*(int (__thiscall **)(Turret *))(this->Turret_field_00 + 44))(this); /*0x5f8cec*/
  if ( v2 == 40 ) /*0x5f8cf2*/
  {
    v2 = (*(int (__thiscall **)(Turret *))(this->Turret_field_00 + 156))(this); /*0x5f8cfc*/
    if ( v2 ) /*0x5f8d04*/
    {
      LOBYTE(v2) = *((_BYTE *)this + 3233); /*0x5f8d0a*/
      if ( (_BYTE)v2 ) /*0x5f8d14*/
      {
        sprintf(Buffer, "%sTUR", (const char *)this + 504); /*0x5f8d30*/
        _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f8d4c*/
        CCFileClass::Construct(&v26, Source); /*0x5f8d63*/
        if ( (unsigned __int8)CCFileClass::Open(&v26, 0) ) /*0x5f8d70*/
        {
          v3 = (void *)*((_DWORD *)this + 46); /*0x5f8d7d*/
          if ( v3 ) /*0x5f8d85*/
          {
            WaveClass::Destroy(*((WaveClass **)this + 46)); /*0x5f8d89*/
            __3_YAXPAX_Z(v3); /*0x5f8d8f*/
          }
          v4 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8d99*/
          if ( v4 ) /*0x5f8da3*/
            FileVXL = File::LoadFileVXL(v4, (int)&v26, 0); /*0x5f8db0*/
          else
            FileVXL = 0; /*0x5f8db7*/
          *((_DWORD *)this + 46) = FileVXL; /*0x5f8dbb*/
          if ( FileVXL && !*(_BYTE *)FileVXL ) /*0x5f8dc7*/
          {
            sprintf(Buffer, "%sTUR", (const char *)this + 504); /*0x5f8ddd*/
            _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f8df9*/
            CCFileClass::Construct(&v20, Source); /*0x5f8e0d*/
            v6 = (void *)*((_DWORD *)this + 47); /*0x5f8e12*/
            if ( v6 ) /*0x5f8e1a*/
            {
              String::Release(*((String **)this + 47)); /*0x5f8e1e*/
              __3_YAXPAX_Z(v6); /*0x5f8e24*/
            }
            v7 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f8e2e*/
            if ( v7 ) /*0x5f8e38*/
              FileHVA = File::LoadFileHVA(v7, (int)&v20); /*0x5f8e41*/
            else
              FileHVA = 0; /*0x5f8e48*/
            v9 = (VoxelSection *)*((_DWORD *)this + 46); /*0x5f8e4a*/
            *((_DWORD *)this + 47) = FileHVA; /*0x5f8e52*/
            Info = VoxelSection::GetInfo(v9, 0, 0); /*0x5f8e58*/
            Matrix::Scale(*((Matrix **)this + 47), *(float *)(Info + 12)); /*0x5f8e67*/
            *(_DWORD *)v20.CDFileClass = &CCFileClass::`vftable'; /*0x5f8e70*/
            v22 = 0; /*0x5f8e78*/
            Vector::Clear((int)v21); /*0x5f8e7c*/
            *(_DWORD *)v20.CDFileClass = &off_7E1668; /*0x5f8e85*/
            BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x5f8e8d*/
          }
        }
        sprintf(Buffer, "%sBARL", (const char *)this + 504); /*0x5f8ea0*/
        _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f8ebc*/
        CCFileClass::Construct(&v23, Source); /*0x5f8ed0*/
        if ( (unsigned __int8)CCFileClass::Open(&v23, 0) ) /*0x5f8edd*/
        {
          v11 = (void *)*((_DWORD *)this + 48); /*0x5f8eea*/
          if ( v11 ) /*0x5f8ef2*/
          {
            WaveClass::Destroy(*((WaveClass **)this + 48)); /*0x5f8ef6*/
            __3_YAXPAX_Z(v11); /*0x5f8efc*/
          }
          v12 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8f06*/
          if ( v12 ) /*0x5f8f10*/
            v13 = File::LoadFileVXL(v12, (int)&v23, 0); /*0x5f8f1a*/
          else
            v13 = 0; /*0x5f8f21*/
          *((_DWORD *)this + 48) = v13; /*0x5f8f25*/
          if ( v13 && !*(_BYTE *)v13 ) /*0x5f8f31*/
          {
            sprintf(Buffer, "%sBARL", (const char *)this + 504); /*0x5f8f47*/
            _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f8f63*/
            CCFileClass::Construct(&v20, Source); /*0x5f8f77*/
            v14 = (void *)*((_DWORD *)this + 49); /*0x5f8f7c*/
            if ( v14 ) /*0x5f8f84*/
            {
              String::Release(*((String **)this + 49)); /*0x5f8f88*/
              __3_YAXPAX_Z(v14); /*0x5f8f8e*/
            }
            v15 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f8f98*/
            if ( v15 ) /*0x5f8fa2*/
              v16 = File::LoadFileHVA(v15, (int)&v20); /*0x5f8fab*/
            else
              v16 = 0; /*0x5f8fb2*/
            v17 = (VoxelSection *)*((_DWORD *)this + 48); /*0x5f8fb4*/
            *((_DWORD *)this + 49) = v16; /*0x5f8fbc*/
            v18 = VoxelSection::GetInfo(v17, 0, 0); /*0x5f8fc2*/
            Matrix::Scale(*((Matrix **)this + 49), *(float *)(v18 + 12)); /*0x5f8fd1*/
            *(_DWORD *)v20.CDFileClass = &CCFileClass::`vftable'; /*0x5f8fda*/
            v22 = 0; /*0x5f8fe2*/
            Vector::Clear((int)v21); /*0x5f8fe6*/
            *(_DWORD *)v20.CDFileClass = &off_7E1668; /*0x5f8fef*/
            BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x5f8ff7*/
          }
        }
        *(_DWORD *)v23.CDFileClass = &CCFileClass::`vftable'; /*0x5f9008*/
        v25 = 0; /*0x5f900c*/
        Vector::Clear((int)v24); /*0x5f9013*/
        *(_DWORD *)v23.CDFileClass = &off_7E1668; /*0x5f9021*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v23); /*0x5f9025*/
        *(_DWORD *)v26.CDFileClass = &CCFileClass::`vftable'; /*0x5f9031*/
        v28 = 0; /*0x5f9038*/
        Vector::Clear((int)v27); /*0x5f903f*/
        *(_DWORD *)v26.CDFileClass = &off_7E1668; /*0x5f904b*/
        LOBYTE(v2) = BufferIOFileClass::Dtor((BufferIOFileClass *)&v26); /*0x5f9052*/
      }
    }
  }
  return v2; /*0x5f9059*/
}



// ==== 0x005F9070  ObjectTypeClass::Load2DArt  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::Load2DArt(char *this)
{
  char *v2; // edi
  int v3; // esi
  char v4; // al
  char v5; // dl
  int v6; // edx
  int v7; // eax
  char v8; // dl
  int v9; // eax
  int result; // eax
  __int16 v11; // cx
  char Destination[24]; // [esp+8h] [ebp-220h] BYREF
  char v13; // [esp+20h] [ebp-208h]
  char Source; // [esp+24h] [ebp-204h] BYREF
  char v15; // [esp+25h] [ebp-203h]
  char Buffer[256]; // [esp+128h] [ebp-100h] BYREF

  if ( this->q211 && *((_DWORD *)dword_A8B230 + 1174) == 1 && !this->ImageAllocated ) /*0x5f9096*/
  {
    if ( !this->q212 ) /*0x5f90a0*/
    {
      v2 = this + 504; /*0x5f90ab*/
      sprintf(Buffer, off_832AE8, this + 504); /*0x5f90bf*/
      if ( Buffer ) /*0x5f90d0*/
      {
        strncpy(Destination, Buffer, 0x18u); /*0x5f90e7*/
        v13 = 0; /*0x5f90ef*/
      }
      else
      {
        Destination[0] = 0; /*0x5f90d2*/
      }
      if ( Destination != v2 ) /*0x5f90fa*/
      {
        qmemcpy(v2, Destination, 0x18u); /*0x5f9105*/
        this->q210 = v13; /*0x5f9107*/
      }
      this->q212 = 1; /*0x5f9108*/
    }
  }
  else
  {
    this->q212 = 0; /*0x5f9112*/
  }
  _makepath(&Source, 0, 0, this + 504, Ext); /*0x5f912e*/
  if ( this->q22C ) /*0x5f9133*/
  {
    _makepath(&Source, 0, 0, this + 504, (const char *)&off_7E1BC6 + 112 * *((_DWORD *)dword_A8B230 + 1174)); /*0x5f9169*/
  }
  else if ( this->q237 ) /*0x5f9173*/
  {
    v3 = *((_DWORD *)dword_A8B230 + 1174); /*0x5f9183*/
    if ( v3 != -1 ) /*0x5f918c*/
    {
      v4 = Source; /*0x5f918e*/
      v5 = v15; /*0x5f9198*/
      if ( Source >= 65 && Source <= 90 ) /*0x5f919e*/
        v4 = Source + 32; /*0x5f91a0*/
      if ( v15 >= 65 && v15 <= 90 ) /*0x5f91aa*/
        v5 = v15 + 32; /*0x5f91af*/
      if ( (v4 == 103 || v4 == 110 || v4 == 99 || v4 == 121) && (v5 == 97 || v5 == 116) ) /*0x5f91c9*/
        v15 = byte_7E1BCE[112 * v3]; /*0x5f91dd*/
    }
  }
  if ( this->ImageAllocated && this->q0A4 ) /*0x5f91eb*/
    __3_YAXPAX_Z(*((void **)this + 41)); /*0x5f91f6*/
  v6 = *(_DWORD *)this; /*0x5f91fe*/
  this->q0A4 = 0; /*0x5f9203*/
  this->ImageAllocated = 0; /*0x5f920d*/
  if ( (*(int (__thiscall **)(char *))(v6 + 44))(this) == 21 /*0x5f9227*/
    || (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) == 5 )
  {
    v9 = SearchMIXFile(&Source, 1); /*0x5f9267*/
    this->q0A4 = v9; /*0x5f926e*/
    if ( v9 ) /*0x5f9274*/
      goto LABEL_41; /*0x5f9274*/
    v15 = 71; /*0x5f9276*/
    v8 = 1; /*0x5f927b*/
    goto LABEL_40; /*0x5f927b*/
  }
  if ( (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) != 30 /*0x5f9241*/
    && (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) != 37 )
  {
    v7 = SearchMIXFile(&Source, 0); /*0x5f9249*/
    this->q0A4 = v7; /*0x5f9250*/
    if ( !v7 ) /*0x5f9256*/
    {
      v15 = 71; /*0x5f9258*/
      v8 = 0; /*0x5f925d*/
LABEL_40:
      this->q0A4 = SearchMIXFile(&Source, v8); /*0x5f927d*/
    }
  }
LABEL_41:
  result = this->q0A4; /*0x5f928c*/
  if ( result ) /*0x5f9294*/
  {
    v11 = *(_WORD *)(result + 2); /*0x5f9296*/
    LOWORD(result) = *(_WORD *)(result + 4); /*0x5f929a*/
    if ( v11 <= (__int16)result ) /*0x5f92a1*/
      result = (__int16)result; /*0x5f92a8*/
    else
      result = v11; /*0x5f92a3*/
    if ( result <= 8 ) /*0x5f92ae*/
      result = 8; /*0x5f92b0*/
    this->MaxDimension = result; /*0x5f92b5*/
  }
  return result; /*0x5f92bb*/
}



// ==== 0x005F92D0  ObjectTypeClass::LoadFromINI  this=ObjectTypeClass  sig=csp ====
char __thiscall ObjectTypeClass::LoadFromINI(ObjectTypeClass *this, unsigned __int8 ***a2)
{
  int CrushSound; // edi
  int Index; // eax
  int AmbientSound; // edi
  int v6; // eax
  char Crushable; // cl
  char Bool_Overwrite; // al
  char v9; // al
  char AlternateArcticArt; // cl
  char v11; // al
  char v12; // al
  char LegalTarget; // cl
  char v14; // al
  int Int_Overwrite; // eax
  char Immune; // cl
  char v17; // al
  int Coord; // eax
  char IgnoresFirestorm; // cl
  char v20; // al
  int v21; // eax
  int v22; // eax
  char Theater; // cl
  char v24; // al
  char v25; // al
  char Bombable; // [esp-Ch] [ebp-1B8h]
  char RadarInvisible; // [esp-Ch] [ebp-1B8h]
  int v29; // [esp-Ch] [ebp-1B8h]
  char Insignificant; // [esp-Ch] [ebp-1B8h]
  char UseLineTrail; // [esp-Ch] [ebp-1B8h]
  int LineTrailColorDecrement; // [esp-Ch] [ebp-1B8h]
  char NewTheater; // [esp-Ch] [ebp-1B8h]
  int v34; // [esp+8h] [ebp-1A4h] BYREF
  char Source[28]; // [esp+Ch] [ebp-1A0h] BYREF
  VocClass Destination; // [esp+28h] [ebp-184h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x5f92e3*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)this, a2) ) /*0x5f92eb*/
    return 0; /*0x5f969e*/
  strcpy(Source, this->ImageFile); /*0x5f931c*/
  INIClass::GetString( /*0x5f933b*/
    (INIClass *)a2,
    (unsigned __int8 *)this->?,
    (unsigned __int8 *)g_INI_Key_Image,
    Source,
    this->ImageFile,
    25);
  v34 = (int)strcpy(Source, this->AlphaImageFile); /*0x5f9366*/
  INIClass::GetString((INIClass *)a2, (unsigned __int8 *)this->?, aAlphaimage, Source, this->AlphaImageFile, 25); /*0x5f9386*/
  CrushSound = this->CrushSound; /*0x5f938b*/
  if ( INIClass::GetString( /*0x5f93a8*/
         (INIClass *)a2,
         (unsigned __int8 *)this->?,
         aCrushsound,
         &g_INI_DefaultBuffer,
         (char *)&Destination,
         128) )
  {
    Index = VocClass::FindIndex(&Destination); /*0x5f93b5*/
    if ( Index != -1 ) /*0x5f93bd*/
      CrushSound = Index; /*0x5f93bf*/
  }
  this->CrushSound = CrushSound; /*0x5f93d5*/
  AmbientSound = this->AmbientSound; /*0x5f93db*/
  if ( !INIClass::GetString( /*0x5f93f9*/
          (INIClass *)a2,
          (unsigned __int8 *)this->?,
          aAmbientsound,
          &g_INI_DefaultBuffer,
          (char *)&Destination,
          128)
    || (v6 = VocClass::FindIndex(&Destination), v6 == -1) )
  {
    v6 = AmbientSound; /*0x5f93fb*/
  }
  Crushable = this->Crushable; /*0x5f93fd*/
  this->AmbientSound = v6; /*0x5f9403*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aCrushable, Crushable); /*0x5f9412*/
  Bombable = this->Bombable; /*0x5f941f*/
  this->Crushable = Bool_Overwrite; /*0x5f9426*/
  this->Bombable = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aBombable, Bombable); /*0x5f9431*/
  v9 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aNospawnalt, this->__pad_14D[155]); /*0x5f9446*/
  AlternateArcticArt = this->AlternateArcticArt; /*0x5f944b*/
  this->__pad_14D[155] = v9; /*0x5f9451*/
  v11 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aAlternatearcti, AlternateArcticArt); /*0x5f9460*/
  RadarInvisible = this->RadarInvisible; /*0x5f946d*/
  this->AlternateArcticArt = v11; /*0x5f9474*/
  this->RadarInvisible = INIClass::ReadBool_Overwrite( /*0x5f947f*/
                           (int *)a2,
                           (unsigned __int8 *)this->?,
                           aRadarinvisible,
                           RadarInvisible);
  v12 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aSelectable, this->Selectable); /*0x5f9494*/
  LegalTarget = this->LegalTarget; /*0x5f9499*/
  this->Selectable = v12; /*0x5f949f*/
  v14 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aLegaltarget, LegalTarget); /*0x5f94ae*/
  v29 = this->Armor[0]; /*0x5f94bb*/
  this->LegalTarget = v14; /*0x5f94c2*/
  this->Armor[0] = ArmorType::FindIndex((ArmorType *)a2, (unsigned __int8 *)this->?, g_INI_Key_Armor, v29); /*0x5f94cd*/
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)this->?, aStrength, this->Strength); /*0x5f94e2*/
  Immune = this->Immune; /*0x5f94e7*/
  this->Strength = Int_Overwrite; /*0x5f94ed*/
  v17 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aImmune, Immune); /*0x5f94fc*/
  Insignificant = this->Insignificant; /*0x5f9509*/
  this->Immune = v17; /*0x5f9510*/
  this->Insignificant = INIClass::ReadBool_Overwrite( /*0x5f951b*/
                          (int *)a2,
                          (unsigned __int8 *)this->?,
                          aInsignificant,
                          Insignificant);
  this->HasRadialIndicator = INIClass::ReadBool_Overwrite( /*0x5f9549*/
                               (int *)a2,
                               (unsigned __int8 *)this->?,
                               aHasradialindic,
                               this->HasRadialIndicator);
  Coord = INIClass::GetCoord( /*0x5f954f*/
            (INIClass *)a2,
            (int)&v34,
            (unsigned __int8 *)this->?,
            aRadialcolor,
            (unsigned __int8 *)this->__pad_98);
  IgnoresFirestorm = this->IgnoresFirestorm; /*0x5f9557*/
  *(_WORD *)this->__pad_98 = *(_WORD *)Coord; /*0x5f955d*/
  this->__pad_98[2] = *(_BYTE *)(Coord + 2); /*0x5f956c*/
  v20 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aIgnoresfiresto, IgnoresFirestorm); /*0x5f956f*/
  UseLineTrail = this->UseLineTrail; /*0x5f9580*/
  this->IgnoresFirestorm = v20; /*0x5f958c*/
  this->UseLineTrail = INIClass::ReadBool_Overwrite( /*0x5f959d*/
                         (int *)&DSurface_ViewBounds.__pad_FC[228],
                         (unsigned __int8 *)this->ImageFile,
                         aUselinetrail,
                         UseLineTrail);
  v21 = INIClass::GetCoord( /*0x5f95b4*/
          (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
          (int)&v34,
          (unsigned __int8 *)this->ImageFile,
          aLinetrailcolor,
          (unsigned __int8 *)this->LineTrailColor);
  *(_WORD *)this->LineTrailColor = *(_WORD *)v21; /*0x5f95bc*/
  LineTrailColorDecrement = this->LineTrailColorDecrement; /*0x5f95cd*/
  this->LineTrailColor[2] = *(_BYTE *)(v21 + 2); /*0x5f95d4*/
  v22 = INIClass::ReadInt_Overwrite( /*0x5f95d7*/
          (bool *)&DSurface_ViewBounds.__pad_FC[228],
          (unsigned __int8 *)this->ImageFile,
          aLinetrailcolor_0,
          LineTrailColorDecrement);
  Theater = this->Theater; /*0x5f95dc*/
  this->LineTrailColorDecrement = v22; /*0x5f95e2*/
  v24 = INIClass::ReadBool_Overwrite( /*0x5f95f4*/
          (int *)&DSurface_ViewBounds.__pad_FC[228],
          (unsigned __int8 *)this->ImageFile,
          (unsigned __int8 *)g_INI_Key_Theater,
          Theater);
  NewTheater = this->NewTheater; /*0x5f9604*/
  this->Theater = v24; /*0x5f960b*/
  this->NewTheater = INIClass::ReadBool_Overwrite( /*0x5f9616*/
                       (int *)&DSurface_ViewBounds.__pad_FC[228],
                       (unsigned __int8 *)this->ImageFile,
                       aNewtheater,
                       NewTheater);
  v25 = INIClass::ReadBool_Overwrite( /*0x5f962e*/
          (int *)&DSurface_ViewBounds.__pad_FC[228],
          (unsigned __int8 *)this->ImageFile,
          aVoxel,
          this->Voxel);
  this->Voxel = v25; /*0x5f9634*/
  if ( !v25 && (*((int (__thiscall **)(ObjectTypeClass *))this->AbstractTypeClass + 11))(this) != 5 ) /*0x5f9649*/
    ObjectTypeClass::Load2DArt((char *)this); /*0x5f964d*/
  if ( this->AlphaImageFile[0] ) /*0x5f9652*/
  {
    _makepath((char *)&Destination.Name[5], 0, 0, this->AlphaImageFile, Ext); /*0x5f9674*/
    this->AlphaImage = (SHPStruct *)SearchMIXFile((char *)&Destination.Name[5], 0); /*0x5f968a*/
  }
  return 1; /*0x5f9690*/
}



// ==== 0x005F96B0  TheaterObjectTypeClassSpecificID  this=ScenarioClass  sig=csp ====
int __fastcall TheaterObjectTypeClassSpecificID(char *a1, int a2)
{
  int result; // eax
  char v3; // bl

  if ( a2 != -1 ) /*0x5f96b4*/
  {
    LOBYTE(result) = *a1; /*0x5f96b6*/
    v3 = a1[1]; /*0x5f96b8*/
    if ( *a1 >= 65 && (char)result <= 90 ) /*0x5f96c1*/
      LOBYTE(result) = result + 32; /*0x5f96c3*/
    if ( v3 >= 65 && v3 <= 90 ) /*0x5f96cd*/
      v3 += 32; /*0x5f96cf*/
    if ( ((_BYTE)result == 103 || (_BYTE)result == 110 || (_BYTE)result == 99 || (_BYTE)result == 121) /*0x5f96ea*/
      && (v3 == 97 || v3 == 116) )
    {
      a1[1] = byte_7E1BCE[112 * a2]; /*0x5f96fe*/
      return 112 * a2; /*0x5f96f5*/
    }
  }
  return result; /*0x5f9701*/
}



// ==== 0x005F9710  ObjectTypeClass::SetRTTI71  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::SetRTTI71(ObjectTypeClass *this)
{
  int result; // eax

  BYTE1(this->AbstractTypeClass) = 71; /*0x5f9710*/
  return result; /*0x5f9714*/
}



// ==== 0x005F9720  ObjectTypeClass::LoadCleanup  this=ObjectTypeClass  sig=csp ====
int __stdcall ObjectTypeClass::LoadCleanup(ObjectTypeClass *this, int a2)
{
  void *v2; // ebp
  String *v3; // ebp
  WaveClass *v4; // ebp
  String *v5; // ebp
  WaveClass *v6; // ebp
  String *v7; // ebp
  int result; // eax
  int *v9; // eax
  int v10; // ecx
  char Buffer[260]; // [esp+10h] [ebp-104h] BYREF

  __3_YAXPAX_Z((void *)this->VoxelCaches[0]); /*0x5f973e*/
  this->VoxelCaches[0] = 0; /*0x5f974e*/
  this->VoxelCaches[1] = 0; /*0x5f9750*/
  this->VoxelCaches[2] = 0; /*0x5f9753*/
  LOBYTE(this->VoxelCaches[3]) = 0; /*0x5f9756*/
  this->VoxelCaches[4] = 0; /*0x5f9759*/
  ObjectTypeClass::FreeLoaderBuffer((ObjectTypeClass *)&this->VoxelCaches[5]); /*0x5f975c*/
  ObjectTypeClass::FreeLoaderBuffer((ObjectTypeClass *)&this->VoxelCaches[10]); /*0x5f9767*/
  ObjectTypeClass::FreeLoaderBuffer((ObjectTypeClass *)&this->VoxelCaches[15]); /*0x5f9772*/
  v2 = (void *)this->MainVoxel[0]; /*0x5f9777*/
  if ( v2 ) /*0x5f977f*/
  {
    WaveClass::Destroy((WaveClass *)this->MainVoxel[0]); /*0x5f9783*/
    __3_YAXPAX_Z(v2); /*0x5f9789*/
  }
  v3 = (String *)this->TurretVoxel[0]; /*0x5f9791*/
  this->MainVoxel[0] = 0; /*0x5f9797*/
  if ( v3 ) /*0x5f979f*/
  {
    String::Release(v3); /*0x5f97a3*/
    __3_YAXPAX_Z(v3); /*0x5f97a9*/
  }
  v4 = (WaveClass *)this->BarrelVoxel[0]; /*0x5f97b1*/
  this->TurretVoxel[0] = 0; /*0x5f97b7*/
  if ( v4 ) /*0x5f97bf*/
  {
    WaveClass::Destroy(v4); /*0x5f97c3*/
    __3_YAXPAX_Z(v4); /*0x5f97c9*/
  }
  v5 = (String *)this->ChargerTurrets[0]; /*0x5f97d1*/
  this->BarrelVoxel[0] = 0; /*0x5f97d7*/
  if ( v5 ) /*0x5f97df*/
  {
    String::Release(v5); /*0x5f97e3*/
    __3_YAXPAX_Z(v5); /*0x5f97e9*/
  }
  v6 = (WaveClass *)this->ChargerTurrets[1]; /*0x5f97f1*/
  this->ChargerTurrets[0] = 0; /*0x5f97f7*/
  if ( v6 ) /*0x5f97ff*/
  {
    WaveClass::Destroy(v6); /*0x5f9803*/
    __3_YAXPAX_Z(v6); /*0x5f9809*/
  }
  v7 = (String *)this->ChargerTurrets[2]; /*0x5f9811*/
  this->ChargerTurrets[1] = 0; /*0x5f9817*/
  if ( v7 ) /*0x5f981f*/
  {
    String::Release(v7); /*0x5f9823*/
    __3_YAXPAX_Z(v7); /*0x5f9829*/
  }
  this->ChargerTurrets[2] = 0; /*0x5f9833*/
  ObjectTypeClass::CleanupWeapons((char *)this); /*0x5f9839*/
  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x5f9847*/
  if ( result >= 0 ) /*0x5f984e*/
  {
    this->Image = 0; /*0x5f9856*/
    this->ImageAllocated = 0; /*0x5f985c*/
    this->AlphaImage = 0; /*0x5f9862*/
    if ( this != (ObjectTypeClass *)-580 ) /*0x5f9868*/
    {
      this->VoxelCaches[0] = 0; /*0x5f986a*/
      this->VoxelCaches[1] = 0; /*0x5f986c*/
      this->VoxelCaches[2] = 0; /*0x5f986f*/
      LOBYTE(this->VoxelCaches[3]) = 0; /*0x5f9872*/
      this->VoxelCaches[4] = 0; /*0x5f9875*/
    }
    if ( this != (ObjectTypeClass *)-600 ) /*0x5f9880*/
    {
      this->VoxelCaches[5] = 0; /*0x5f9882*/
      this->VoxelCaches[6] = 0; /*0x5f9884*/
      this->VoxelCaches[7] = 0; /*0x5f9887*/
      LOBYTE(this->VoxelCaches[8]) = 0; /*0x5f988a*/
      this->VoxelCaches[9] = 0; /*0x5f988d*/
    }
    if ( this != (ObjectTypeClass *)-620 ) /*0x5f9898*/
    {
      this->VoxelCaches[10] = 0; /*0x5f989a*/
      this->VoxelCaches[11] = 0; /*0x5f989c*/
      this->VoxelCaches[12] = 0; /*0x5f989f*/
      LOBYTE(this->VoxelCaches[13]) = 0; /*0x5f98a2*/
      this->VoxelCaches[14] = 0; /*0x5f98a5*/
    }
    if ( this != (ObjectTypeClass *)-640 ) /*0x5f98b0*/
    {
      this->VoxelCaches[15] = 0; /*0x5f98b2*/
      this->VoxelCaches[16] = 0; /*0x5f98b4*/
      this->VoxelCaches[17] = 0; /*0x5f98b7*/
      LOBYTE(this->VoxelCaches[18]) = 0; /*0x5f98ba*/
      this->VoxelCaches[19] = 0; /*0x5f98bd*/
    }
    this->MainVoxel[0] = 0; /*0x5f98c0*/
    this->TurretVoxel[0] = 0; /*0x5f98c6*/
    this->BarrelVoxel[0] = 0; /*0x5f98cc*/
    this->ChargerTurrets[0] = 0; /*0x5f98d2*/
    this->ChargerTurrets[1] = 0; /*0x5f98d8*/
    this->ChargerTurrets[2] = 0; /*0x5f98de*/
    v9 = &this->ChargerTurrets[4]; /*0x5f98e4*/
    v10 = 18; /*0x5f98ea*/
    do /*0x5f9904*/
    {
      *(v9 - 1) = 0; /*0x5f98ef*/
      *v9 = 0; /*0x5f98f2*/
      v9[35] = 0; /*0x5f98f4*/
      v9[36] = 0; /*0x5f98fa*/
      v9 += 2; /*0x5f9900*/
      --v10; /*0x5f9903*/
    }
    while ( v10 ); /*0x5f9904*/
    if ( this->AlphaImageFile[0] ) /*0x5f9906*/
    {
      _makepath(Buffer, 0, 0, this->AlphaImageFile, Ext); /*0x5f9923*/
      this->AlphaImage = (SHPStruct *)SearchMIXFile(Buffer, 0); /*0x5f9936*/
    }
    return 0; /*0x5f993c*/
  }
  return result; /*0x5f993e*/
}



// ==== 0x005F9950  AbstractClass::SaveLoad_PrefixWrapper  this=ObjectTypeClass  sig=csp ====
int __stdcall AbstractClass::SaveLoad_PrefixWrapper(AbstractClass *this, int a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, (int *)a2, a3); /*0x5f995f*/
  if ( result >= 0 ) /*0x5f9966*/
    return 0; /*0x5f9968*/
  return result; /*0x5f996a*/
}



// ==== 0x005F9970  ObjectTypeClass::GetSizeMaxWrapper  this=ObjectTypeClass  sig=csp ====
int __stdcall COMObject::GetSizeMaxWrapper(ObjectTypeClass *this, _DWORD *a2)
{
  int result; // eax

  result = ObjectClass::GetSizeMax((AbstractClass *)this); /*0x5f997a*/
  if ( result >= 0 ) /*0x5f9981*/
    return 0; /*0x5f9983*/
  return result; /*0x5f9985*/
}



// ==== 0x005F99E0  TechnoClass::ClearArrays  this=TechnoClass  sig=ida-proto ====
int TechnoClass_ClearArrays()
{
  int v0; // edi
  int v1; // esi
  int result; // eax

  v0 = 0; /*0x5f99e9*/
  if ( dword_AC1428 <= 0 ) /*0x5f99ed*/
  {
    dword_887468 = dword_887464; /*0x5f9acb*/
    return dword_887464; /*0x5f9ac5*/
  }
  else
  {
    do /*0x5f9aaf*/
    {
      v1 = *((_DWORD *)dword_AC141C + v0); /*0x5f99f9*/
      __3_YAXPAX_Z(*(void **)(v1 + 580)); /*0x5f9a03*/
      *(_DWORD *)(v1 + 580) = 0; /*0x5f9a08*/
      *(_DWORD *)(v1 + 584) = 0; /*0x5f9a0e*/
      *(_DWORD *)(v1 + 588) = 0; /*0x5f9a14*/
      *(_BYTE *)(v1 + 592) = 0; /*0x5f9a1a*/
      *(_DWORD *)(v1 + 596) = 0; /*0x5f9a20*/
      __3_YAXPAX_Z(*(void **)(v1 + 600)); /*0x5f9a2d*/
      *(_DWORD *)(v1 + 600) = 0; /*0x5f9a32*/
      *(_DWORD *)(v1 + 604) = 0; /*0x5f9a38*/
      *(_DWORD *)(v1 + 608) = 0; /*0x5f9a3e*/
      *(_BYTE *)(v1 + 612) = 0; /*0x5f9a44*/
      *(_DWORD *)(v1 + 616) = 0; /*0x5f9a4a*/
      __3_YAXPAX_Z(*(void **)(v1 + 620)); /*0x5f9a57*/
      *(_DWORD *)(v1 + 620) = 0; /*0x5f9a5c*/
      *(_DWORD *)(v1 + 624) = 0; /*0x5f9a62*/
      *(_DWORD *)(v1 + 628) = 0; /*0x5f9a68*/
      *(_BYTE *)(v1 + 632) = 0; /*0x5f9a6e*/
      *(_DWORD *)(v1 + 636) = 0; /*0x5f9a74*/
      __3_YAXPAX_Z(*(void **)(v1 + 640)); /*0x5f9a81*/
      *(_DWORD *)(v1 + 640) = 0; /*0x5f9a89*/
      *(_DWORD *)(v1 + 644) = 0; /*0x5f9a8f*/
      *(_DWORD *)(v1 + 648) = 0; /*0x5f9a95*/
      *(_BYTE *)(v1 + 652) = 0; /*0x5f9a9b*/
      *(_DWORD *)(v1 + 656) = 0; /*0x5f9aa1*/
      result = dword_AC1428; /*0x5f9aa7*/
      ++v0; /*0x5f9aac*/
    }
    while ( v0 < dword_AC1428 ); /*0x5f9aaf*/
    dword_887468 = dword_887464; /*0x5f9abd*/
  }
  return result; /*0x5f9abc*/
}



// ==== 0x005F9AE0  ObjectTypeClass::Destru_vt08  this=ObjectTypeClass  sig=csp ====
void *__thiscall ObjectTypeClass::Destru_vt08(ObjectTypeClass *this, char a2)
{
  ObjectTypeClass::Destruct((int)this); /*0x5f9ae3*/
  if ( (a2 & 1) != 0 ) /*0x5f9aed*/
    __3_YAXPAX_Z(this); /*0x5f9af0*/
  return this; /*0x5f9afa*/
}



// ==== 0x005F9B00  _DynamicVectorClass_PAVObjectTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_ObjectTypeClass::Destroy(_DynamicVectorClass_PAVObjectTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5f9b06*/
  this->m_10 = 0; /*0x5f9b09*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5f9b10*/
  {
    __3_YAXPAX_Z(v2); /*0x5f9b16*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5f9b1e*/
  }
  BYTE1(this->m_C) = 0; /*0x5f9b21*/
  this->m_8 = 0; /*0x5f9b24*/
}



// ==== 0x005F9B30  _DynamicVectorClass_PAVObjectTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ObjectTypeClass::GetItemIndex(
        _DynamicVectorClass_PAVObjectTypeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5f9b30*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5f9b45*/
  else
    return 0; /*0x5f9b37*/
}



// ==== 0x005F9B50  _VectorClass_PAVObjectTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ObjectTypeClass::Get(_VectorClass_PAVObjectTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5f9b5a*/
}



// ==== 0x005F9B60  ObjectTypeClass::FreeLoaderBuffer  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::FreeLoaderBuffer(ObjectTypeClass *this)
{
  __3_YAXPAX_Z(this->AbstractTypeClass); /*0x5f9b66*/
  this->AbstractTypeClass = 0; /*0x5f9b70*/
  this->? = 0; /*0x5f9b72*/
  this->? = 0; /*0x5f9b75*/
  LOBYTE(this->?) = 0; /*0x5f9b78*/
  this->? = 0; /*0x5f9b7b*/
  return 0; /*0x5f9b7e*/
}



// ==== 0x005F9B80  _VectorClass_PAVObjectTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ObjectTypeClass::Add(_VectorClass_PAVObjectTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5f9b82*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5f9b8d*/
  {
    v3 = 0; /*0x5f9b8f*/
    if ( m_8 <= 0 ) /*0x5f9b93*/
      return 1; /*0x5f9bb3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5f9b95*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5f9b9b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5f9ba4*/
    {
      ++v3; /*0x5f9ba6*/
      ++v4; /*0x5f9ba7*/
      if ( v3 >= m_8 ) /*0x5f9bac*/
        return 1; /*0x5f9bac*/
    }
  }
  return 0; /*0x5f9bae*/
}



// ==== 0x005F9BC0  _VectorClass_PAVObjectTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ObjectTypeClass::Release(_VectorClass_PAVObjectTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5f9bcc*/
  {
    LOBYTE(this->m_C) = 0; /*0x5f9bd6*/
    if ( a3 ) /*0x5f9bdc*/
      v4 = a3; /*0x5f9bf2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5f9bee*/
    LOBYTE(this->m_C) = 1; /*0x5f9bf6*/
    if ( v4 ) /*0x5f9bfa*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5f9c05*/
      {
        m_8 = this->m_8; /*0x5f9c0c*/
        if ( a2 < m_8 ) /*0x5f9c11*/
          m_8 = a2; /*0x5f9c13*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5f9c19*/
          ++i; /*0x5f9c1e*/
        if ( BYTE1(this->m_C) ) /*0x5f9c2b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5f9c36*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5f9c3e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5f9c47*/
      this->m_8 = a2; /*0x5f9c4f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5f9c52*/
      return 1; /*0x5f9c58*/
    }
    else
    {
      return 0; /*0x5f9bff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVObjectTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5f9c62*/
    return 1; /*0x5f9c68*/
  }
}



// ==== 0x005F9C70  _VectorClass_PAVObjectTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ObjectTypeClass::Remove(_VectorClass_PAVObjectTypeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5f9c7d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5f9c83*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5f9c8b*/
  }
  BYTE1(this->m_C) = 0; /*0x5f9c8e*/
  this->m_8 = 0; /*0x5f9c91*/
}



// ==== 0x005F9CA0  _VectorClass_PAVObjectTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ObjectTypeClass::GetSize(_VectorClass_PAVObjectTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5f9ca0*/
    return 0; /*0x5f9ca8*/
  m_8 = this->m_8; /*0x5f9cae*/
  result = 0; /*0x5f9cb1*/
  if ( m_8 <= 0 ) /*0x5f9cb5*/
    return -1; /*0x5f9ccc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5f9cbb*/
  {
    if ( ++result >= m_8 ) /*0x5f9cca*/
      return -1; /*0x5f9cca*/
  }
  return result; /*0x5f9caa*/
}



// ==== 0x005F9CE0  _VectorClass_PAVObjectTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ObjectTypeClass::LoadTypeData(_VectorClass_PAVObjectTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5f9ce0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5f9cf5*/
  else
    return 0; /*0x5f9ce7*/
}



// ==== 0x005F9D00  _DynamicVectorClass_PAVObjectTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_ObjectTypeClass::SetCapacity(
        _DynamicVectorClass_PAVObjectTypeClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5f9d0c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5f9d12*/
    if ( a3 ) /*0x5f9d18*/
      v4 = a3; /*0x5f9d2e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5f9d2a*/
    LOBYTE(this->m_C) = 1; /*0x5f9d32*/
    if ( !v4 ) /*0x5f9d36*/
      return 0; /*0x5f9daa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5f9d38*/
    {
      m_8 = this->m_8; /*0x5f9d3f*/
      if ( a2 < m_8 ) /*0x5f9d44*/
        m_8 = a2; /*0x5f9d46*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5f9d4c*/
        ++i; /*0x5f9d51*/
      if ( BYTE1(this->m_C) ) /*0x5f9d5e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5f9d69*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5f9d71*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5f9d7a*/
    this->m_8 = a2; /*0x5f9d82*/
    BYTE1(this->m_C) = a3 == 0; /*0x5f9d85*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVObjectTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5f9d8e*/
  }
  v7 = this->m_8; /*0x5f9d91*/
  if ( v7 < this->m_10 ) /*0x5f9d99*/
    this->m_10 = v7; /*0x5f9d9b*/
  return 1; /*0x5f9d9e*/
}



// ==== 0x005F9DB0  _DynamicVectorClass_PAVObjectTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_ObjectTypeClass::FindItemIndex(_DynamicVectorClass_PAVObjectTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5f9db0*/
  result = 0; /*0x5f9db3*/
  if ( m_10 <= 0 ) /*0x5f9db8*/
    return -1; /*0x5f9dcf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5f9dbe*/
  {
    if ( ++result >= m_10 ) /*0x5f9dcd*/
      return -1; /*0x5f9dcd*/
  }
  return result; /*0x5f9dd2*/
}



// ==== 0x005F9DE0  _VectorClass_PAVObjectTypeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_ObjectTypeClass::QueryInterface(_VectorClass_PAVObjectTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5f9de3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ObjectTypeClass *>::`vftable'; /*0x5f9de6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5f9df0*/
  {
    __3_YAXPAX_Z(v3); /*0x5f9df8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5f9e00*/
  }
  BYTE1(this->m_C) = 0; /*0x5f9e0b*/
  this->m_8 = 0; /*0x5f9e11*/
  if ( (a2 & 1) != 0 ) /*0x5f9e18*/
    __3_YAXPAX_Z(this); /*0x5f9e1b*/
  return this->__pad_0; /*0x5f9e25*/
}



// ==== 0x005F9E30  _DynamicVectorClass_PAVObjectTypeClass::Constructor_VectorClass_ObjectTypeClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_ObjectTypeClass::Constructor_VectorClass_ObjectTypeClass___(
        _DynamicVectorClass_PAVObjectTypeClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5f9e33*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ObjectTypeClass *>::`vftable'; /*0x5f9e36*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5f9e40*/
  {
    __3_YAXPAX_Z(v3); /*0x5f9e48*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5f9e50*/
  }
  BYTE1(this->m_C) = 0; /*0x5f9e5b*/
  this->m_8 = 0; /*0x5f9e61*/
  if ( (a2 & 1) != 0 ) /*0x5f9e68*/
    __3_YAXPAX_Z(this); /*0x5f9e6b*/
  return this->__pad_0; /*0x5f9e75*/
}



// ==== 0x005F9E80  Checksummer::HashString  this=Checksummer  sig=csp ====
int __thiscall Checksummer::HashString(char *Source)
{
  int v1; // ebp
  unsigned int v3; // kr04_4
  int v4; // ebx
  int v5; // esi
  int v6; // esi
  int v7; // ecx
  int i; // edx
  int v9; // ecx
  int j; // esi
  int k; // edi
  char v12; // si
  char v13; // dl
  char v14; // cl
  char v15; // cl
  char v16; // si
  char v17; // al
  int v18; // [esp+4h] [ebp-9Ch]
  char v19; // [esp+8h] [ebp-98h]
  unsigned int v20; // [esp+Ch] [ebp-94h] BYREF
  int v21; // [esp+10h] [ebp-90h]
  int v22; // [esp+14h] [ebp-8Ch]
  int v23; // [esp+18h] [ebp-88h]
  int v24; // [esp+1Ch] [ebp-84h]
  char Destination[128]; // [esp+20h] [ebp-80h] BYREF

  HIWORD(v1) = 0; /*0x5f9e89*/
  if ( !Source ) /*0x5f9e8d*/
    return 0; /*0x5f9e8f*/
  memset(Destination, 0xA5u, sizeof(Destination)); /*0x5f9eaa*/
  strncpy(Destination, Source, 0x80u); /*0x5f9eb7*/
  Destination[127] = 0; /*0x5f9ec5*/
  v3 = strlen(Destination) + 1; /*0x5f9ecd*/
  v4 = v3 - 1; /*0x5f9ed2*/
  v23 = v3 - 1; /*0x5f9ed9*/
  _strupr(Destination); /*0x5f9edd*/
  v5 = 0; /*0x5f9ee5*/
  if ( (int)(v3 - 1) > 0 ) /*0x5f9ee9*/
  {
    do /*0x5f9f11*/
    {
      if ( !isgraph(Destination[v5]) ) /*0x5f9ef1*/
        Destination[v5] = v5 % 26 + 65; /*0x5f9f0a*/
      ++v5; /*0x5f9f0e*/
    }
    while ( v5 < v4 ); /*0x5f9f11*/
  }
  if ( v4 < 16 || (v4 & 3) != 0 ) /*0x5f9f1b*/
  {
    v6 = 16; /*0x5f9f20*/
    if ( (((_BYTE)v4 + 3) & 0xFCu) > 0x10 ) /*0x5f9f2c*/
      v6 = ((_BYTE)v4 + 3) & 0xFC; /*0x5f9f2e*/
    v7 = v3 - 1; /*0x5f9f32*/
    if ( v4 < v6 ) /*0x5f9f34*/
    {
      do /*0x5f9f56*/
      {
        Destination[v7] = (v7 + (Destination[v7 - v4] ^ 0x3F)) % 26 + 65; /*0x5f9f4f*/
        ++v7; /*0x5f9f53*/
      }
      while ( v7 < v6 ); /*0x5f9f56*/
    }
    v4 = v7; /*0x5f9f58*/
    Destination[v7] = 0; /*0x5f9f5a*/
    v23 = v7; /*0x5f9f5f*/
  }
  v20 = 0; /*0x5f9f6d*/
  v21 = 0; /*0x5f9f71*/
  v22 = 0; /*0x5f9f75*/
  Checksummer::Add_Buffer(&v20, (unsigned __int8 *)Destination, v4); /*0x5f9f79*/
  _strrev(Destination); /*0x5f9f83*/
  v20 = 0; /*0x5f9f93*/
  v21 = 0; /*0x5f9f99*/
  v22 = 0; /*0x5f9f9d*/
  v18 = Checksummer::Add_Buffer(&v20, (unsigned __int8 *)Destination, v4); /*0x5f9fa6*/
  _strrev(Destination); /*0x5f9faf*/
  for ( i = 0; i < v4; v18 = (v9 >> 8) | ((unsigned __int8)v9 << 24) ) /*0x5f9fbb*/
  {
    v9 = (unsigned __int8)Destination[i] ^ v18; /*0x5f9fcd*/
    Destination[i++] = v18; /*0x5f9fd1*/
  }
  for ( j = 0; j < v4; ++j ) /*0x5f9ff1*/
    Destination[j] = ~byte_832C0C[j & 7] & (Destination[j] | byte_832C14[j & 7]); /*0x5fa00e*/
  for ( k = 0; k < v4; Destination[k - 1] = (v17 + v16) ^ v15 ) /*0x5fa01b*/
  {
    v12 = Destination[k]; /*0x5fa01d*/
    LOWORD(v1) = Destination[k + 2]; /*0x5fa029*/
    v13 = v12 * v12; /*0x5fa033*/
    v14 = Destination[k + 3]; /*0x5fa036*/
    v19 = 2 * Destination[k + 1]; /*0x5fa03c*/
    v24 = 2 * v1; /*0x5fa044*/
    v15 = v14 * v14; /*0x5fa051*/
    v16 = v12 * ((v12 * v12) ^ (2 * v1)); /*0x5fa058*/
    k += 4; /*0x5fa066*/
    v17 = v1 * (v16 + (v19 ^ v15)); /*0x5fa069*/
    Destination[k - 4] = v17 ^ v13; /*0x5fa070*/
    Destination[k - 3] = v17 ^ v24; /*0x5fa080*/
    v4 = v23; /*0x5fa086*/
    Destination[k - 2] = (v17 + v16) ^ v19; /*0x5fa08a*/
  }
  v20 = 0; /*0x5fa0a6*/
  v21 = 0; /*0x5fa0aa*/
  v22 = 0; /*0x5fa0ae*/
  return Checksummer::Add_Buffer(&v20, (unsigned __int8 *)Destination, v4); /*0x5f9e91*/
}



// ==== 0x005FA0D0  sub_5FA0D0  this=-  sig=ida-proto ====
void sub_5FA0D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5fa0dc*/
  dbl_AC14B0 = Math::Sqrt(v0 + v0); /*0x5fa0ee*/
}



// ==== 0x005FA100  sub_5FA100  this=-  sig=ida-proto ====
void sub_5FA100()
{
  dbl_AC1500 = dbl_AC14B0 / 60.0; /*0x5fa10c*/
}



// ==== 0x005FA120  sub_5FA120  this=-  sig=ida-proto ====
void sub_5FA120()
{
  dbl_AC14E8 = 1.0 / dbl_AC1500; /*0x5fa12c*/
}



// ==== 0x005FA140  sub_5FA140  this=-  sig=ida-proto ====
void sub_5FA140()
{
  dbl_AC14E0 = 0.0174532925199433 * 45.0; /*0x5fa14c*/
}



// ==== 0x005FA160  sub_5FA160  this=-  sig=ida-proto ====
void sub_5FA160()
{
  dbl_AC14B8 = 0.0174532925199433 * 60.0; /*0x5fa16c*/
}



// ==== 0x005FA180  sub_5FA180  this=-  sig=ida-proto ====
void sub_5FA180()
{
  dbl_AC1490 = 0.0174532925199433 * 90.0; /*0x5fa18c*/
}



// ==== 0x005FA1A0  sub_5FA1A0  this=-  sig=ida-proto ====
__int64 sub_5FA1A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC1490 - dbl_AC14B8); /*0x5fa1b2*/
  result = Math::RoundToInt(v0 * dbl_AC14B0 * 0.5); /*0x5fa1c6*/
  dword_AC1508 = result; /*0x5fa1cb*/
  return result; /*0x5fa1d0*/
}



// ==== 0x005FA1E0  sub_5FA1E0  this=-  sig=ida-proto ====
void sub_5FA1E0()
{
  dbl_AC14C0 = Math::ArcTan((double)dword_AC1508 * 0.00390625); /*0x5fa1f7*/
}



// ==== 0x005FA210  sub_5FA210  this=-  sig=ida-proto ====
void sub_5FA210()
{
  dbl_AC14D8 = Math::ArcTan((double)(2 * dword_AC1508) / dbl_AC14B0); /*0x5fa232*/
}



// ==== 0x005FA240  sub_5FA240  this=-  sig=ida-proto ====
__int64 sub_5FA240()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1508) + 0.5); /*0x5fa25b*/
  dword_AC14FC = result; /*0x5fa260*/
  return result; /*0x5fa266*/
}



// ==== 0x005FA270  sub_5FA270  this=-  sig=ida-proto ====
int sub_5FA270()
{
  word_AC14A8 = 0; /*0x5fa272*/
  word_AC14AA = 0; /*0x5fa278*/
  return 0; /*0x5fa27e*/
}



// ==== 0x005FA280  sub_5FA280  this=-  sig=ida-proto ====
int sub_5FA280()
{
  dword_AC14C8 = 0; /*0x5fa282*/
  dword_AC14CC = 0; /*0x5fa287*/
  dword_AC14D0 = 0; /*0x5fa28c*/
  return 0; /*0x5fa291*/
}



// ==== 0x005FA2A0  sub_5FA2A0  this=-  sig=ida-proto ====
int sub_5FA2A0()
{
  dword_AC14F8 = 0; /*0x5fa2a5*/
  dword_AC14F0 = 128; /*0x5fa2af*/
  dword_AC14F4 = 128; /*0x5fa2b4*/
  return 128; /*0x5fa2b9*/
}



// ==== 0x005FA2C0  sub_5FA2C0  this=-  sig=ida-proto ====
int sub_5FA2C0()
{
  dword_AC1498 = 0; /*0x5fa2c2*/
  dword_AC149C = 0; /*0x5fa2c7*/
  dword_AC14A0 = 0; /*0x5fa2cc*/
  dword_AC14A4 = 0; /*0x5fa2d1*/
  return 0; /*0x5fa2d6*/
}



// ==== 0x005FA430  ObjectClass::nullsub_29  this=ObjectClass  sig=csp ====
void nullsub_29(ObjectClass *this)
{
  ; /*0x5fa430*/
}



// ==== 0x005FA440  AudioSettings::SetFlag70  this=AudioSettings  sig=csp ====
void __thiscall AudioSettings::SetFlag70(AudioSettings *this, char a2)
{
  *((_BYTE *)this + 70) = a2; /*0x5fa444*/
  byte_A83D22 = a2; /*0x5fa447*/
  Debug::Log(); /*0x5fa463*/
}



// ==== 0x005FA470  AudioSettings::SetFlag68  this=AudioSettings  sig=csp ====
void __thiscall AudioSettings::SetFlag68(AudioSettings *this, char a2)
{
  *((_BYTE *)this + 68) = a2; /*0x5fa474*/
  byte_A83D20 = a2; /*0x5fa477*/
  Debug::Log(); /*0x5fa493*/
}



// ==== 0x005FA4A0  Audio::SetScoreVolume  this=Audio  sig=csp ====
int __thiscall Audio::SetScoreVolume(int *this, float a2, int a3)
{
  double v4; // st7
  int v5; // eax
  int v6; // eax

  if ( a2 >= 1.0 ) /*0x5fa4b2*/
    v4 = 1.0; /*0x5fa4ba*/
  else
    v4 = a2; /*0x5fa4b4*/
  *((float *)this + 16) = v4; /*0x5fa4c0*/
  LOWORD(v5) = Math::RoundToInt(v4 * 16384.0); /*0x5fa4c9*/
  EndBufferMixer((int *)g_MixerChannel_Theme, v5); /*0x5fa4d6*/
  LOWORD(v6) = Math::RoundToInt(*((float *)this + 16) * 255.0); /*0x5fa4e4*/
  TechnoTypeClass::CheckFlag(&unk_A83D10, v6); /*0x5fa4ef*/
  return Debug::Log(); /*0x5fa50b*/
}



// ==== 0x005FA510  Audio::SetSoundVolume  this=Audio  sig=csp ====
int __thiscall Audio::SetSoundVolume(int *this, float a2, char a3)
{
  double v3; // st7
  int v4; // eax

  if ( a2 >= 1.0 ) /*0x5fa522*/
    v3 = 1.0; /*0x5fa52a*/
  else
    v3 = a2; /*0x5fa524*/
  *((float *)this + 14) = v3; /*0x5fa530*/
  LOWORD(v4) = Math::RoundToInt(v3 * 16384.0); /*0x5fa539*/
  EndBufferMixer((int *)g_MixerChannel_Score, v4); /*0x5fa546*/
  if ( a3 ) /*0x5fa551*/
    PlayVocClass(*(_DWORD *)&dword_8871E0->__pad_704[12], 0x2000, 1.0, 0); /*0x5fa56a*/
  return Debug::Log(); /*0x5fa586*/
}



// ==== 0x005FA590  Audio::SetVoiceVolume  this=Audio  sig=csp ====
int __thiscall Audio::SetVoiceVolume(int *this, float a2, char a3)
{
  double v4; // st7
  int v5; // eax
  int v6; // eax

  if ( a2 >= 1.0 ) /*0x5fa5a2*/
    v4 = 1.0; /*0x5fa5aa*/
  else
    v4 = a2; /*0x5fa5a4*/
  *((float *)this + 15) = v4; /*0x5fa5b0*/
  LOWORD(v5) = Math::RoundToInt(v4 * 255.0); /*0x5fa5b9*/
  ThemeClass::GetField(v5); /*0x5fa5c0*/
  LOWORD(v6) = Math::RoundToInt(*((float *)this + 15) * 16384.0); /*0x5fa5ce*/
  EndBufferMixer((int *)g_MixerChannel_Voice, v6); /*0x5fa5db*/
  if ( a3 ) /*0x5fa5e6*/
    PlayVocClass(*(_DWORD *)&dword_8871E0->__pad_704[12], 0x2000, *((float *)this + 15), 0); /*0x5fa5ff*/
  return Debug::Log(); /*0x5fa61b*/
}



// ==== 0x005FA620  GameSettings::Read  this=GameSettings  sig=csp ====
int __thiscall GameSettings::Read(GameSettings *this)
{
  double v1; // st7
  int Int_Overwrite; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  GameSettings Bool_Overwrite; // al
  bool v9; // al
  GameSettings v10; // al
  int v13; // eax
  int v16; // eax
  int v17; // eax
  int v20; // eax
  int v21; // eax
  GameSettings v22; // al
  GameSettings v23; // al
  wchar_t *v24; // eax
  bool v25; // zf
  wchar_t *v26; // eax
  wchar_t *v27; // eax
  int v28; // eax
  int v29; // eax
  __int16 v30; // ax
  int v31; // ecx
  wchar_t **v33; // [esp-4h] [ebp-1ACh]
  double v34; // [esp+0h] [ebp-1A8h]
  double v36; // [esp+0h] [ebp-1A8h]
  double v38; // [esp+0h] [ebp-1A8h]
  int v40; // [esp+4h] [ebp-1A4h]
  wchar_t **v41; // [esp+8h] [ebp-1A0h]
  wchar_t String[200]; // [esp+18h] [ebp-190h] BYREF

  _ESI = this; /*0x5fa62f*/
  Debug::Log(); /*0x5fa636*/
  *(_DWORD *)_ESI = INIClass::ReadInt_Overwrite( /*0x5fa65b*/
                      (bool *)&DSurface_ViewBounds.__pad_FC[36],
                      (unsigned __int8 *)g_INI_Key_Options,
                      (unsigned __int8 *)g_INI_Key_GameSpeed,
                      *(_DWORD *)_ESI);
  Debug::Log(); /*0x5fa65d*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x5fa678*/
                    (bool *)&DSurface_ViewBounds.__pad_FC[36],
                    (unsigned __int8 *)g_INI_Key_Options,
                    (unsigned __int8 *)aDifficulty,
                    *(_DWORD *)&_ESI[4]);
  *(_DWORD *)&_ESI[4] = Int_Overwrite; /*0x5fa680*/
  if ( Int_Overwrite >= 4 ) /*0x5fa683*/
    Int_Overwrite = 4; /*0x5fa685*/
  *(_DWORD *)&_ESI[4] = Int_Overwrite; /*0x5fa68c*/
  *(_DWORD *)&_ESI[4] = Int_Overwrite <= 0 ? 0 : Int_Overwrite;
  Debug::Log(); /*0x5fa6a0*/
  v4 = INIClass::ReadInt_Overwrite( /*0x5fa6bb*/
         (bool *)&DSurface_ViewBounds.__pad_FC[36],
         (unsigned __int8 *)g_INI_Key_Options,
         (unsigned __int8 *)aCampdifficulty,
         *(_DWORD *)&_ESI[8]);
  *(_DWORD *)&_ESI[8] = v4; /*0x5fa6c3*/
  if ( v4 >= 2 ) /*0x5fa6c6*/
    v4 = 2; /*0x5fa6c8*/
  *(_DWORD *)&_ESI[8] = v4; /*0x5fa6cf*/
  *(_DWORD *)&_ESI[8] = v4 <= 0 ? 0 : v4;
  Debug::Log(); /*0x5fa6e3*/
  *(_DWORD *)&_ESI[12] = INIClass::ReadInt_Overwrite( /*0x5fa709*/
                           (bool *)&DSurface_ViewBounds.__pad_FC[36],
                           (unsigned __int8 *)g_INI_Key_Options,
                           (unsigned __int8 *)aScrollmethod,
                           *(_DWORD *)&_ESI[12]);
  Debug::Log(); /*0x5fa70c*/
  *(_DWORD *)&_ESI[16] = INIClass::ReadInt_Overwrite( /*0x5fa732*/
                           (bool *)&DSurface_ViewBounds.__pad_FC[36],
                           (unsigned __int8 *)g_INI_Key_Options,
                           (unsigned __int8 *)aScrollrate,
                           *(_DWORD *)&_ESI[16]);
  Debug::Log(); /*0x5fa735*/
  _ESI[20] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa75a*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             (unsigned __int8 *)g_INI_Key_Options,
                             (unsigned __int8 *)aAutoscroll,
                             *(_BYTE *)&_ESI[20]);
  Debug::Log(); /*0x5fa771*/
  v5 = INIClass::ReadInt_Overwrite( /*0x5fa78c*/
         (bool *)&DSurface_ViewBounds.__pad_FC[36],
         (unsigned __int8 *)g_INI_Key_Options,
         (unsigned __int8 *)g_INI_Key_DetailLevel,
         *(_DWORD *)&_ESI[24]);
  *(_DWORD *)&_ESI[24] = v5; /*0x5fa794*/
  if ( v5 >= 2 ) /*0x5fa797*/
    v5 = 2; /*0x5fa799*/
  *(_DWORD *)&_ESI[24] = v5; /*0x5fa7a0*/
  *(_DWORD *)&_ESI[24] = v5 <= 0 ? 0 : v5;
  Debug::Log(); /*0x5fa7b4*/
  _ESI[28] = (GameSettings)1; /*0x5fa7c3*/
  Debug::Log(); /*0x5fa7c6*/
  _ESI[29] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa7e6*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             (unsigned __int8 *)g_INI_Key_Options,
                             (unsigned __int8 *)aSidebarcameote,
                             *(_BYTE *)&_ESI[29]);
  Debug::Log(); /*0x5fa7fd*/
  _ESI[30] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa81d*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             (unsigned __int8 *)g_INI_Key_Options,
                             (unsigned __int8 *)aUnitactionline,
                             *(_BYTE *)&_ESI[30]);
  Debug::Log(); /*0x5fa834*/
  _ESI[31] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa854*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             (unsigned __int8 *)g_INI_Key_Options,
                             (unsigned __int8 *)aShowhidden,
                             *(_BYTE *)&_ESI[31]);
  Debug::Log(); /*0x5fa86b*/
  _ESI[32] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa88b*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             (unsigned __int8 *)g_INI_Key_Options,
                             (unsigned __int8 *)aTooltips,
                             *(_BYTE *)&_ESI[32]);
  Debug::Log(); /*0x5fa8a2*/
  v6 = INIClass::ReadInt_Overwrite( /*0x5fa8bd*/
         (bool *)&DSurface_ViewBounds.__pad_FC[36],
         g_INI_Key_Video,
         (unsigned __int8 *)g_INI_Key_ScreenWidth,
         *(_DWORD *)&_ESI[36]);
  v7 = *(_DWORD *)&_ESI[40]; /*0x5fa8c2*/
  *(_DWORD *)&_ESI[36] = v6; /*0x5fa8c5*/
  *(_DWORD *)&_ESI[40] = INIClass::ReadInt_Overwrite( /*0x5fa8e7*/
                           (bool *)&DSurface_ViewBounds.__pad_FC[36],
                           g_INI_Key_Video,
                           (unsigned __int8 *)g_INI_Key_ScreenHeight,
                           v7);
  Debug::Log(); /*0x5fa8ea*/
  Bool_Overwrite = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa905*/
                                   (int *)&DSurface_ViewBounds.__pad_FC[36],
                                   g_INI_Key_Video,
                                   (unsigned __int8 *)aStretchmovies,
                                   *(_BYTE *)&_ESI[52]);
  _ESI[52] = Bool_Overwrite; /*0x5fa90c*/
  v9 = Bool_Overwrite == 1 && g_DDraw_AllowStretchBlits == 1; /*0x5fa919*/
  _ESI[52] = (GameSettings)v9; /*0x5fa91f*/
  Debug::Log(); /*0x5fa936*/
  _ESI[53] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa956*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             g_INI_Key_Video,
                             aAllowhiresmode,
                             *(_BYTE *)&_ESI[53]);
  Debug::Log(); /*0x5fa96d*/
  stru_A8EB00.?[383] = INIClass::ReadBool_Overwrite( /*0x5fa990*/
                         (int *)&DSurface_ViewBounds.__pad_FC[36],
                         g_INI_Key_Video,
                         aAllowmodetoggl,
                         stru_A8EB00.?[383]);
  v10 = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa9a8*/
                        (int *)&DSurface_ViewBounds.__pad_FC[36],
                        g_INI_Key_Video,
                        aAllowvramsideb,
                        *(_BYTE *)&_ESI[54]);
  __asm { fld dword ptr [esi+38h] } /*0x5fa9ad*/
  _ESI[54] = v10; /*0x5fa9b8*/
  __asm { fstp [esp+1A8h+var_1A8]; double } /*0x5fa9bb*/
  INIClass::ReadDouble_Overwrite( /*0x5fa9c8*/
    (double *)&DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Audio,
    (unsigned __int8 *)aSoundvolume,
    v34);
  __asm /*0x5fa9cd*/
  {
    fcom ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x100) == 0 ) /*0x5fa9d8*/
  {
    __asm /*0x5fa9da*/
    {
      fstp st
      fld ds:dbl_7E1718
    }
  }
  __asm { fst dword ptr [esi+38h] } /*0x5fa9e2*/
  *(float *)&_ESI[56] = _ET1; /*0x5fa9e2*/
  __asm { fmul ds:flt_7EF38C } /*0x5fa9e5*/
  LOWORD(v13) = Math::RoundToInt(v1); /*0x5fa9eb*/
  EndBufferMixer((int *)g_MixerChannel_Score, v13); /*0x5fa9f8*/
  __asm { fld dword ptr [esi+38h] } /*0x5fa9fd*/
  __asm { fstp [esp+1A8h+var_1A8] }
  Debug::Log(); /*0x5faa0b*/
  __asm { fld dword ptr [esi+3Ch] } /*0x5faa10*/
  __asm { fstp [esp+1A8h+var_1A8]; double }
  INIClass::ReadDouble_Overwrite( /*0x5faa28*/
    (double *)&DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Audio,
    (unsigned __int8 *)aVoicevolume,
    v36);
  __asm /*0x5faa2d*/
  {
    fcom ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x100) == 0 ) /*0x5faa38*/
  {
    __asm /*0x5faa3a*/
    {
      fstp st
      fld ds:dbl_7E1718
    }
  }
  __asm { fst dword ptr [esi+3Ch] } /*0x5faa42*/
  *(float *)&_ESI[60] = _ET1; /*0x5faa42*/
  __asm { fmul ds:dbl_7EAA50 } /*0x5faa45*/
  LOWORD(v16) = Math::RoundToInt(v1); /*0x5faa4b*/
  ThemeClass::GetField(v16); /*0x5faa52*/
  __asm /*0x5faa57*/
  {
    fld dword ptr [esi+3Ch]
    fmul ds:flt_7EF38C
  }
  LOWORD(v17) = Math::RoundToInt(v1); /*0x5faa60*/
  EndBufferMixer((int *)g_MixerChannel_Voice, v17); /*0x5faa6d*/
  __asm { fld dword ptr [esi+3Ch] } /*0x5faa72*/
  __asm { fstp [esp+1A8h+var_1A8] }
  Debug::Log(); /*0x5faa80*/
  __asm { fld dword ptr [esi+40h] } /*0x5faa85*/
  __asm { fstp [esp+1A8h+var_1A8]; double }
  INIClass::ReadDouble_Overwrite( /*0x5faa9d*/
    (double *)&DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Audio,
    (unsigned __int8 *)aScorevolume,
    v38);
  __asm /*0x5faaa2*/
  {
    fcom ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x100) == 0 ) /*0x5faaad*/
  {
    __asm /*0x5faaaf*/
    {
      fstp st
      fld ds:dbl_7E1718
    }
  }
  __asm { fst dword ptr [esi+40h] } /*0x5faab7*/
  *(float *)&_ESI[64] = _ET1; /*0x5faab7*/
  __asm { fmul ds:flt_7EF38C } /*0x5faaba*/
  LOWORD(v20) = Math::RoundToInt(v1); /*0x5faac0*/
  EndBufferMixer((int *)g_MixerChannel_Theme, v20); /*0x5faacd*/
  __asm /*0x5faad2*/
  {
    fld dword ptr [esi+40h]
    fmul ds:dbl_7EAA50
  }
  LOWORD(v21) = Math::RoundToInt(v1); /*0x5faadb*/
  TechnoTypeClass::CheckFlag((TechnoTypeClass *)&unk_A83D10, v21); /*0x5faae6*/
  __asm { fld dword ptr [esi+40h] } /*0x5faaeb*/
  __asm { fstp [esp+1A8h+var_1A8] }
  Debug::Log(); /*0x5faaf9*/
  v22 = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fab14*/
                        (int *)&DSurface_ViewBounds.__pad_FC[36],
                        g_INI_Key_Audio,
                        (unsigned __int8 *)aIsscorerepeat,
                        *(_BYTE *)&_ESI[68]);
  _ESI[68] = v22; /*0x5fab19*/
  byte_A83D20 = v22; /*0x5fab1c*/
  Debug::Log(); /*0x5fab38*/
  v23 = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fab53*/
                        (int *)&DSurface_ViewBounds.__pad_FC[36],
                        g_INI_Key_Audio,
                        (unsigned __int8 *)aIsscoreshuffle,
                        *(_BYTE *)&_ESI[70]);
  _ESI[70] = v23; /*0x5fab58*/
  byte_A83D22 = v23; /*0x5fab5b*/
  Debug::Log(); /*0x5fab77*/
  _ESI[69] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fabb8*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             g_INI_Key_Audio,
                             (unsigned __int8 *)aIngamemusic,
                             *(_BYTE *)&_ESI[69]);
  *(_DWORD *)&_ESI[76] = -1; /*0x5fabbb*/
  *(_DWORD *)&_ESI[80] = -1; /*0x5fabbe*/
  INIClass::ParseValue_Wide( /*0x5fabc1*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Network,
    (unsigned __int8 *)aNetid,
    &g_TypeClass_DefaultString,
    String,
    0xC8u);
  if ( String[0] ) /*0x5fabcc*/
  {
    v24 = String; /*0x5fabce*/
    do /*0x5fabe8*/
    {
      v25 = *v24 == 0xFFFFu; /*0x5fabd8*/
      *v24 = ~*v24; /*0x5fabdb*/
      if ( v25 ) /*0x5fabde*/
        *v24 = -1; /*0x5fabe0*/
      ++v24; /*0x5fabe5*/
    }
    while ( *v24 ); /*0x5fabe8*/
    v26 = wcstok(String, asc_82083C, v41); /*0x5fabf8*/
    if ( v26 ) /*0x5fac02*/
    {
      *(_DWORD *)&_ESI[76] = wcstol(v26, 0, 10) - 1; /*0x5fac16*/
      v27 = wcstok(0, asc_82083C, v33); /*0x5fac19*/
      if ( v27 ) /*0x5fac23*/
        *(_DWORD *)&_ESI[80] = wcstol(v27, 0, 10) - 1; /*0x5fac33*/
    }
  }
  v28 = *(_DWORD *)&_ESI[76]; /*0x5fac36*/
  if ( v28 < -1 || v28 >= 8 ) /*0x5fac40*/
    *(_DWORD *)&_ESI[76] = -1; /*0x5fac42*/
  v29 = *(_DWORD *)&_ESI[80]; /*0x5fac45*/
  if ( v29 < -1 || v29 >= 8 ) /*0x5fac4f*/
    *(_DWORD *)&_ESI[80] = -1; /*0x5fac51*/
  *(_WORD *)&_ESI[72] = INIClass::ReadInt_Overwrite( /*0x5fac6f*/
                          (bool *)&DSurface_ViewBounds.__pad_FC[36],
                          g_INI_Key_Audio,
                          (unsigned __int8 *)aSoundlatency,
                          *(unsigned __int16 *)&_ESI[72]);
  Debug::Log(); /*0x5fac7e*/
  v30 = INIClass::ReadInt_Overwrite( /*0x5fac9c*/
          (bool *)&DSurface_ViewBounds.__pad_FC[36],
          g_INI_Key_Network,
          (unsigned __int8 *)g_INI_Key_Socket,
          *(unsigned __int16 *)&_ESI[74]);
  v40 = *(_DWORD *)&_ESI[84]; /*0x5faca9*/
  *(_WORD *)&_ESI[74] = v30; /*0x5facb4*/
  *(_DWORD *)&_ESI[84] = INIClass::ReadInt_Overwrite( /*0x5facbd*/
                           (bool *)&DSurface_ViewBounds.__pad_FC[36],
                           g_INI_Key_Network,
                           (unsigned __int8 *)aNetcard,
                           v40);
  INIClass::GetString( /*0x5facda*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Network,
    (unsigned __int8 *)g_INI_Key_DestNet,
    &g_INI_DefaultBuffer,
    (char *)&_ESI[88],
    64);
  Debug::Log(); /*0x5face4*/
  LOBYTE(v31) = _ESI[29]; /*0x5face9*/
  nullsub_36(v31); /*0x5facf5*/
  SetGlobalFlag(*(_BYTE *)&_ESI[30]); /*0x5facfd*/
  return (int)GameSettings::ParseNetworkAddress((const char *)_ESI); /*0x5fad09*/
}



// ==== 0x005FAD10  ScenarioClass::SaveGameOptions  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::SaveGameOptions(ScenarioClass *this)
{
  wchar_t *i; // eax
  bool v3; // zf
  CCFileClass v5; // [esp+Ch] [ebp-1FCh] BYREF
  int v6[3]; // [esp+64h] [ebp-1A4h] BYREF
  int v7; // [esp+70h] [ebp-198h]
  wchar_t Buffer[200]; // [esp+78h] [ebp-190h] BYREF

  CCFileClass::Construct(&v5, (char *)&stru_8263E0.MaxFDelta); /*0x5fad22*/
  Debug::Log(); /*0x5fad2c*/
  INIClass::SetInt( /*0x5fad48*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    g_INI_Key_GameSpeed,
    this->nextScenario[0],
    0);
  INIClass::SetInt( /*0x5fad62*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    aDifficulty,
    this->nextScenario[1],
    0);
  INIClass::SetInt( /*0x5fad7c*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    aCampdifficulty,
    this->nextScenario[2],
    0);
  INIClass::SetInt( /*0x5fad96*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    aScrollmethod,
    this->nextScenario[3],
    0);
  INIClass::SetInt( /*0x5fadb0*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    aScrollrate,
    this->nextScenario[4],
    0);
  INIClass::SetBool( /*0x5fadc8*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    aAutoscroll,
    this->nextScenario[5]);
  INIClass::SetInt( /*0x5fade2*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    g_INI_Key_DetailLevel,
    this->nextScenario[6],
    0);
  INIClass::SetBool( /*0x5fadfa*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    aSidebarcameote,
    BYTE1(this->nextScenario[7]));
  INIClass::SetBool( /*0x5fae12*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    aUnitactionline,
    BYTE2(this->nextScenario[7]));
  INIClass::SetBool( /*0x5fae2a*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    aShowhidden,
    HIBYTE(this->nextScenario[7]));
  INIClass::SetBool( /*0x5fae42*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    aTooltips,
    this->nextScenario[8]);
  INIClass::SetInt(&DSurface_ViewBounds.__pad_FC[36], g_INI_Key_Video, g_INI_Key_ScreenWidth, this->nextScenario[9], 0); /*0x5fae5c*/
  INIClass::SetInt( /*0x5fae76*/
    &DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Video,
    g_INI_Key_ScreenHeight,
    this->nextScenario[10],
    0);
  INIClass::SetBool(&DSurface_ViewBounds.__pad_FC[36], g_INI_Key_Video, aStretchmovies, this->nextScenario[13]); /*0x5fae8e*/
  INIClass::SetDouble( /*0x5faeab*/
    &DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Audio,
    aSoundvolume,
    *(float *)&this->nextScenario[14]);
  INIClass::SetDouble( /*0x5faec8*/
    &DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Audio,
    aVoicevolume,
    *(float *)&this->nextScenario[15]);
  INIClass::SetDouble( /*0x5faee5*/
    &DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Audio,
    aScorevolume,
    *(float *)&this->nextScenario[16]);
  INIClass::SetBool(&DSurface_ViewBounds.__pad_FC[36], g_INI_Key_Audio, aIsscorerepeat, this->nextScenario[17]); /*0x5faefd*/
  INIClass::SetBool(&DSurface_ViewBounds.__pad_FC[36], g_INI_Key_Audio, aIsscoreshuffle, BYTE2(this->nextScenario[17])); /*0x5faf15*/
  INIClass::SetInt(&DSurface_ViewBounds.__pad_FC[36], g_INI_Key_Audio, aSoundlatency, LOWORD(this->nextScenario[18]), 0); /*0x5faf32*/
  INIClass::SetBool(&DSurface_ViewBounds.__pad_FC[36], g_INI_Key_Audio, aIngamemusic, BYTE1(this->nextScenario[17])); /*0x5faf4a*/
  INIClass::SetInt( /*0x5faf67*/
    &DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Network,
    g_INI_Key_Socket,
    HIWORD(this->nextScenario[18]),
    0);
  INIClass::SetInt(&DSurface_ViewBounds.__pad_FC[36], g_INI_Key_Network, aNetcard, this->nextScenario[21], 0); /*0x5faf81*/
  INIClass::SetString( /*0x5faf99*/
    &DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Network,
    g_INI_Key_DestNet,
    (char *)&this->nextScenario[22]);
  swprintf( /*0x5fafb2*/
    Buffer,
    (const size_t)&off_833328,
    (const wchar_t *const)(this->nextScenario[19] + 1),
    this->nextScenario[20] + 1);
  for ( i = Buffer; *i; ++i ) /*0x5fafc4*/
  {
    v3 = *i == 0xFFFFu; /*0x5fafcc*/
    *i = ~*i; /*0x5fafcf*/
    if ( v3 ) /*0x5fafd2*/
      *i = -1; /*0x5fafd4*/
  }
  INIClass::SetWideAsHex(&DSurface_ViewBounds.__pad_FC[36], g_INI_Key_Network, aNetid, Buffer); /*0x5faff6*/
  INIClass::WriteDigest((INIClass *)&DSurface_ViewBounds.__pad_FC[36], (int)&v5, 0); /*0x5fb007*/
  GameSettings::ParseNetworkAddress((const char *)this); /*0x5fb00e*/
  *(_DWORD *)v5.CDFileClass = &CCFileClass::`vftable'; /*0x5fb017*/
  v7 = 0; /*0x5fb01f*/
  Vector::Clear((int)v6); /*0x5fb027*/
  *(_DWORD *)v5.CDFileClass = &off_7E1668; /*0x5fb030*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x5fb03d*/
}



// ==== 0x005FB050  GameSettings::ParseNetworkAddress  this=GameSettings  sig=csp ====
char *__thiscall sub_5FB050(const char *this)
{
  unsigned __int16 v2; // ax
  const char *v3; // esi
  char *result; // eax
  size_t v5; // kr04_4
  char *v6; // edx
  int v7; // esi
  int *v8; // eax
  char v9; // [esp+8h] [ebp-1Ch] BYREF
  int v10; // [esp+Ch] [ebp-18h] BYREF
  int v11; // [esp+10h] [ebp-14h] BYREF
  __int16 v12; // [esp+14h] [ebp-10h]
  _DWORD v13[3]; // [esp+18h] [ebp-Ch] BYREF

  v2 = this->q025; /*0x5fb057*/
  if ( v2 == 0xFFFF ) /*0x5fb05f*/
  {
    Network::GetField(unk_A8E9C0, 34835); /*0x5fb066*/
  }
  else if ( v2 < 0x4000u ) /*0x5fb06c*/
  {
    Network::GetField(unk_A8E9C0, v2 + 0x4000); /*0x5fb079*/
  }
  v3 = this + 88; /*0x5fb07e*/
  result = 0; /*0x5fb086*/
  v5 = strlen(v3) + 1; /*0x5fb088*/
  if ( v5 != 1 ) /*0x5fb08d*/
  {
    v6 = (char *)__2_YAPAXI_Z(v5); /*0x5fb09a*/
    strcpy(v6, v3); /*0x5fb0b8*/
    v7 = 0; /*0x5fb0c1*/
    result = strtok(v6, asc_826598); /*0x5fb0c3*/
    if ( result ) /*0x5fb0cd*/
    {
      do /*0x5fb10f*/
      {
        sscanf(result, "%x", &v9); /*0x5fb0de*/
        *((_BYTE *)&v10 + v7++) = v9; /*0x5fb0ef*/
        result = strtok(0, asc_826598); /*0x5fb105*/
      }
      while ( result ); /*0x5fb10f*/
      if ( v7 >= 4 ) /*0x5fb114*/
      {
        v11 = -1; /*0x5fb11a*/
        v12 = -1; /*0x5fb126*/
        dword_A8D5FC = 1; /*0x5fb131*/
        v8 = NetworkAddress::Assign(v13, &v10, (int)&v11, 0); /*0x5fb13b*/
        stru_A8D600 = *v8; /*0x5fb142*/
        dword_A8D604 = v8[1]; /*0x5fb14b*/
        result = (char *)v8[2]; /*0x5fb151*/
        dword_A8D608 = (int)result; /*0x5fb154*/
      }
    }
  }
  return result; /*0x5fb159*/
}



// ==== 0x005FB160  AudioOptionsClass::ApplySettings  this=AudioOptionsClass  sig=csp ====
void __thiscall AudioOptionsClass::ApplySettings(AudioOptionsClass *this)
{
  double v2; // st7
  int v3; // eax
  double v4; // st7
  int v5; // eax
  int v6; // eax
  double v7; // st7
  int v8; // eax
  int v9; // eax
  int v10; // eax

  v2 = *((float *)this + 14); /*0x5fb163*/
  if ( v2 >= 1.0 ) /*0x5fb171*/
    v2 = 1.0; /*0x5fb175*/
  *((float *)this + 14) = v2; /*0x5fb17b*/
  LOWORD(v3) = Math::RoundToInt(v2 * 16384.0); /*0x5fb184*/
  EndBufferMixer((int *)g_MixerChannel_Score, v3); /*0x5fb191*/
  Debug::Log(); /*0x5fb1a4*/
  v4 = *((float *)this + 15); /*0x5fb1a9*/
  if ( v4 >= 1.0 ) /*0x5fb1ba*/
    v4 = 1.0; /*0x5fb1be*/
  *((float *)this + 15) = v4; /*0x5fb1c4*/
  LOWORD(v5) = Math::RoundToInt(v4 * 255.0); /*0x5fb1cd*/
  ThemeClass::GetField(v5); /*0x5fb1d4*/
  LOWORD(v6) = Math::RoundToInt(*((float *)this + 15) * 16384.0); /*0x5fb1e2*/
  EndBufferMixer((int *)g_MixerChannel_Voice, v6); /*0x5fb1ef*/
  Debug::Log(); /*0x5fb202*/
  v7 = *((float *)this + 16); /*0x5fb207*/
  if ( v7 >= 1.0 ) /*0x5fb218*/
    v7 = 1.0; /*0x5fb21c*/
  *((float *)this + 16) = v7; /*0x5fb222*/
  LOWORD(v8) = Math::RoundToInt(v7 * 16384.0); /*0x5fb22b*/
  EndBufferMixer((int *)g_MixerChannel_Theme, v8); /*0x5fb238*/
  LOWORD(v9) = Math::RoundToInt(*((float *)this + 16) * 255.0); /*0x5fb246*/
  TechnoTypeClass::CheckFlag((TechnoTypeClass *)&unk_A83D10, v9); /*0x5fb251*/
  Debug::Log(); /*0x5fb264*/
  byte_A83D20 = *((_BYTE *)this + 68); /*0x5fb26f*/
  Debug::Log(); /*0x5fb28b*/
  byte_A83D22 = *((_BYTE *)this + 70); /*0x5fb296*/
  v10 = Debug::Log(); /*0x5fb2b2*/
  LOBYTE(v10) = *((_BYTE *)this + 29); /*0x5fb2b7*/
  nullsub_36(v10); /*0x5fb2c3*/
  SetGlobalFlag(*((_BYTE *)this + 30)); /*0x5fb2cc*/
}



// ==== 0x005FB2E0  Rules::GetProductionTimeMult  this=Rules  sig=csp ====
char *__thiscall Rules::GetProductionTimeMult(Rules *this, int a2)
{
  char *result; // eax
  int v3; // ecx

  result = (char *)a2; /*0x5fb2e0*/
  if ( a2 ) /*0x5fb2e6*/
  {
    v3 = *(_DWORD *)this->__pad_0; /*0x5fb2e8*/
    if ( a2 >= 5 ) /*0x5fb2ed*/
      return (char *)(8 * a2 / (v3 + 1)); /*0x5fb301*/
    else
      return (&(&off_832CEC)[8 * a2])[v3]; /*0x5fb2f2*/
  }
  return result; /*0x5fb2f9*/
}



// ==== 0x005FB320  HotkeyOptions::DlgProc  this=HotkeyOptions  sig=csp ====
int __stdcall HotkeyOptions::DlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  HWND v5; // edi
  LRESULT v6; // eax
  LRESULT v7; // edi
  HWND v8; // ebx
  LPARAM v9; // eax
  signed int v10; // eax
  int v11; // ebx
  char v12; // dl
  void *v13; // ecx
  char v14; // al
  __int16 v15; // bx
  HWND v16; // eax
  HWND v17; // eax
  HWND (__stdcall *v18)(HWND, int); // edi
  HWND v19; // ebx
  HWND v20; // ebx
  LPARAM v21; // edi
  const wchar_t *v22; // eax
  LPARAM v23; // eax
  LRESULT v24; // eax
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // edi
  HWND v28; // eax
  HWND v29; // eax
  __int16 v30; // ax
  int v31; // edi
  size_t v32; // eax
  _DWORD *v33; // edx
  int v34; // esi
  _DWORD *v35; // ebx
  int v36; // ecx
  int v37; // ecx
  _DWORD *v38; // ebx
  int v39; // esi
  _DWORD *v40; // eax
  wchar_t *v41; // esi
  HWND v42; // eax
  size_t v43; // eax
  int m; // esi
  char *v45; // eax
  HWND v46; // edi
  LRESULT v47; // eax
 ... [22198 chars total]



// ==== 0x005FBEF0  ShowHotkeyOptionsDialog  this=-  sig=ida-proto ====
char sub_5FBEF0()
{
  HWND Dialog; // esi
  int v1; // ecx
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  dwNewLong = -1; /*0x5fbefe*/
  Dialog = (HWND)CreateDialog(0xA3u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))HotkeyOptions::DlgProc, 0); /*0x5fbf0b*/
  if ( Dialog ) /*0x5fbf0f*/
  {
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x5fbf19*/
    Dialog::Show(Dialog); /*0x5fbf21*/
    while ( dwNewLong < 0 ) /*0x5fbf2c*/
    {
      if ( Dialog::PumpMessages() == 1 ) /*0x5fbf35*/
        dwNewLong = 2; /*0x5fbf37*/
      if ( !byte_A8E9A0 ) /*0x5fbf46*/
      {
        LOBYTE(v1) = 0; /*0x5fbf48*/
        ScreenSaver::Process(v1); /*0x5fbf4a*/
      }
    }
    Dialog::Destroy(Dialog); /*0x5fbf59*/
  }
  return 1; /*0x5fbf60*/
}



// ==== 0x005FBF70  ObjectClass::Map_Helper_5FBF70  this=ObjectClass  sig=csp ====
int __thiscall Map_Helper_5FBF70(ObjectClass *this)
{
  return (int)this->?; /*0x5fbf73*/
}



// ==== 0x005FBF80  GameOptionsClass::UnlockMovieIfNeeded_MoviesList  this=GameOptionsClass  sig=csp ====
char *__thiscall GameOptionsClass::UnlockMovieIfNeeded_MoviesList(GameOptionsClass *this, void *a2)
{
  int v2; // edi
  char **v4; // esi
  char *v5; // eax
  char *result; // eax
  int v7; // edi
  char **v8; // esi

  v2 = 0; /*0x5fbf8d*/
  v4 = off_832CA0; /*0x5fbf93*/
  if ( off_832CA0[0] ) /*0x5fbf98*/
  {
    while ( _strcmpi((char *)a2, *v4) ) /*0x5fbfa8*/
    {
      v5 = v4[3]; /*0x5fbfaa*/
      v4 += 3; /*0x5fbfad*/
      ++v2; /*0x5fbfb0*/
      if ( !v5 ) /*0x5fbfb3*/
        goto LABEL_4; /*0x5fbfb3*/
    }
  }
  else
  {
LABEL_4:
    v2 = -1; /*0x5fbfb5*/
  }
  if ( v2 > *((_DWORD *)this + 19) ) /*0x5fbfbb*/
    *((_DWORD *)this + 19) = v2; /*0x5fbfbd*/
  result = off_832C30[0]; /*0x5fbfc0*/
  v7 = 0; /*0x5fbfc5*/
  v8 = off_832C30; /*0x5fbfc9*/
  if ( off_832C30[0] ) /*0x5fbfce*/
  {
    while ( 1 ) /*0x5fbfd4*/
    {
      result = (char *)_strcmpi((char *)a2, *v8); /*0x5fbfd4*/
      if ( !result ) /*0x5fbfde*/
        break; /*0x5fbfde*/
      result = v8[3]; /*0x5fbfe0*/
      v8 += 3; /*0x5fbfe3*/
      ++v7; /*0x5fbfe6*/
      if ( !result ) /*0x5fbfe9*/
        goto LABEL_10; /*0x5fbfe9*/
    }
  }
  else
  {
LABEL_10:
    v7 = -1; /*0x5fbfeb*/
  }
  if ( v7 > *((_DWORD *)this + 20) ) /*0x5fbff1*/
    *((_DWORD *)this + 20) = v7; /*0x5fbff3*/
  return result; /*0x5fbff6*/
}



// ==== 0x005FC000  GameOptionsClass::PopulateMovieList  this=GameOptionsClass  sig=csp ====
char *__thiscall GameOptionsClass::PopulateMovieList(GameOptionsClass *this, HWND hWnd)
{
  GameOptionsClass *v2; // ebx
  wchar_t *StringCSF; // eax
  LRESULT v4; // eax
  int GameOptionsClass_field_0x04; // eax
  int v6; // ebp
  char **v7; // ebx
  wchar_t *v8; // ecx
  wchar_t *v9; // eax
  LRESULT v10; // eax
  char *v11; // eax
  char *result; // eax
  char *v13; // ebp
  char **i; // ebx
  wchar_t *v15; // ecx
  wchar_t *v16; // eax
  LRESULT v17; // eax

  v2 = this; /*0x5fc00d*/
  if ( off_832C20[0] ) /*0x5fc01c*/
  {
    if ( off_832C24 ) /*0x5fc026*/
    {
      StringCSF = GetStringCSF(off_832C24, 0, g_Str_File_Options_CPP, 1265); /*0x5fc034*/
      v4 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)StringCSF); /*0x5fc042*/
      if ( v4 != -1 ) /*0x5fc047*/
        SendMessageA(hWnd, 0x19Au, v4, (LPARAM)off_832C20); /*0x5fc055*/
    }
  }
  GameOptionsClass_field_0x04 = v2[9].GameOptionsClass_field_0x04; /*0x5fc057*/
  if ( GameOptionsClass_field_0x04 >= 0 ) /*0x5fc05c*/
  {
    v6 = GameOptionsClass_field_0x04 + 1; /*0x5fc05e*/
    v7 = off_832CA0; /*0x5fc068*/
    if ( off_832CA0[0] ) /*0x5fc06d*/
    {
      do /*0x5fc0b3*/
      {
        if ( v6 <= 0 ) /*0x5fc071*/
          break; /*0x5fc071*/
        if ( *v7 ) /*0x5fc073*/
        {
          v8 = (wchar_t *)v7[1]; /*0x5fc078*/
          if ( v8 ) /*0x5fc07d*/
          {
            v9 = GetStringCSF(v8, 0, g_Str_File_Options_CPP, 1265); /*0x5fc08b*/
            v10 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)v9); /*0x5fc099*/
            if ( v10 != -1 ) /*0x5fc09e*/
              SendMessageA(hWnd, 0x19Au, v10, (LPARAM)v7); /*0x5fc0a8*/
          }
        }
        v11 = v7[3]; /*0x5fc0aa*/
        v7 += 3; /*0x5fc0ad*/
        --v6; /*0x5fc0b0*/
      }
      while ( v11 ); /*0x5fc0b3*/
    }
    v2 = this; /*0x5fc0b5*/
  }
  result = *(char **)v2[10].__pad_0; /*0x5fc0b9*/
  if ( (int)result >= 0 ) /*0x5fc0be*/
  {
    v13 = result + 1; /*0x5fc0c0*/
    result = off_832C30[0]; /*0x5fc0c3*/
    for ( i = off_832C30; result; --v13 ) /*0x5fc0cf*/
    {
      if ( (int)v13 <= 0 ) /*0x5fc0d3*/
        break; /*0x5fc0d3*/
      if ( *i ) /*0x5fc0d5*/
      {
        v15 = (wchar_t *)i[1]; /*0x5fc0da*/
        if ( v15 ) /*0x5fc0df*/
        {
          v16 = GetStringCSF(v15, 0, g_Str_File_Options_CPP, 1265); /*0x5fc0ed*/
          v17 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)v16); /*0x5fc0fb*/
          if ( v17 != -1 ) /*0x5fc100*/
            SendMessageA(hWnd, 0x19Au, v17, (LPARAM)i); /*0x5fc10a*/
        }
      }
      result = i[3]; /*0x5fc10c*/
      i += 3; /*0x5fc10f*/
    }
  }
  return result; /*0x5fc117*/
}



// ==== 0x005FC120  HotkeyOptions_Helper  this=AbstractClass  sig=csp ====
int __fastcall sub_5FC120(int a1, int a2, int *a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = a2; /*0x5fc125*/
  if ( a2 <= 0 ) /*0x5fc127*/
    return 0; /*0x5fc159*/
  v4 = *a3; /*0x5fc12d*/
  while ( 1 ) /*0x5fc136*/
  {
    v5 = *(_DWORD *)(a1 + 8 * (v3 / 2)); /*0x5fc136*/
    if ( v5 <= v4 ) /*0x5fc13e*/
      break; /*0x5fc13e*/
    v3 /= 2; /*0x5fc140*/
LABEL_7:
    if ( v3 <= 0 ) /*0x5fc152*/
      return 0; /*0x5fc152*/
  }
  if ( v5 != v4 ) /*0x5fc144*/
  {
    a1 += 8 * (v3 / 2) + 8; /*0x5fc146*/
    v3 += -1 - v3 / 2; /*0x5fc14e*/
    goto LABEL_7; /*0x5fc14e*/
  }
  return a1 + 8 * (v3 / 2); /*0x5fc154*/
}



// ==== 0x005FC170  sub_5FC170  this=-  sig=ida-proto ====
void sub_5FC170()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5fc17c*/
  dbl_AC1530 = Math::Sqrt(v0 + v0); /*0x5fc18e*/
}



// ==== 0x005FC1A0  sub_5FC1A0  this=-  sig=ida-proto ====
void sub_5FC1A0()
{
  dbl_AC15D8 = dbl_AC1530 / 60.0; /*0x5fc1ac*/
}



// ==== 0x005FC1C0  sub_5FC1C0  this=-  sig=ida-proto ====
void sub_5FC1C0()
{
  dbl_AC15C0 = 1.0 / dbl_AC15D8; /*0x5fc1cc*/
}



// ==== 0x005FC1E0  sub_5FC1E0  this=-  sig=ida-proto ====
void sub_5FC1E0()
{
  dbl_AC15B8 = 0.0174532925199433 * 45.0; /*0x5fc1ec*/
}



// ==== 0x005FC200  sub_5FC200  this=-  sig=ida-proto ====
void sub_5FC200()
{
  dbl_AC1538 = 0.0174532925199433 * 60.0; /*0x5fc20c*/
}



// ==== 0x005FC220  sub_5FC220  this=-  sig=ida-proto ====
void sub_5FC220()
{
  dbl_AC1510 = 0.0174532925199433 * 90.0; /*0x5fc22c*/
}



// ==== 0x005FC240  sub_5FC240  this=-  sig=ida-proto ====
__int64 sub_5FC240()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC1510 - dbl_AC1538); /*0x5fc252*/
  result = Math::RoundToInt(v0 * dbl_AC1530 * 0.5); /*0x5fc266*/
  dword_AC15E0 = result; /*0x5fc26b*/
  return result; /*0x5fc270*/
}



// ==== 0x005FC280  sub_5FC280  this=-  sig=ida-proto ====
void sub_5FC280()
{
  dbl_AC1540 = Math::ArcTan((double)dword_AC15E0 * 0.00390625); /*0x5fc297*/
}



// ==== 0x005FC2B0  sub_5FC2B0  this=-  sig=ida-proto ====
void sub_5FC2B0()
{
  dbl_AC1580 = Math::ArcTan((double)(2 * dword_AC15E0) / dbl_AC1530); /*0x5fc2d2*/
}



// ==== 0x005FC2E0  sub_5FC2E0  this=-  sig=ida-proto ====
__int64 sub_5FC2E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC15E0) + 0.5); /*0x5fc2fb*/
  dword_AC15D4 = result; /*0x5fc300*/
  return result; /*0x5fc306*/
}



// ==== 0x005FC310  sub_5FC310  this=-  sig=ida-proto ====
int sub_5FC310()
{
  word_AC1528 = 0; /*0x5fc312*/
  word_AC152A = 0; /*0x5fc318*/
  return 0; /*0x5fc31e*/
}



// ==== 0x005FC320  sub_5FC320  this=-  sig=ida-proto ====
int sub_5FC320()
{
  dword_AC1570 = 0; /*0x5fc322*/
  dword_AC1574 = 0; /*0x5fc327*/
  dword_AC1578 = 0; /*0x5fc32c*/
  return 0; /*0x5fc331*/
}



// ==== 0x005FC340  sub_5FC340  this=-  sig=ida-proto ====
int sub_5FC340()
{
  dword_AC15D0 = 0; /*0x5fc345*/
  dword_AC15C8 = 128; /*0x5fc34f*/
  dword_AC15CC = 128; /*0x5fc354*/
  return 128; /*0x5fc359*/
}



// ==== 0x005FC360  sub_5FC360  this=-  sig=ida-proto ====
int sub_5FC360()
{
  dword_AC1518 = 0; /*0x5fc362*/
  dword_AC151C = 0; /*0x5fc367*/
  dword_AC1520 = 0; /*0x5fc36c*/
  dword_AC1524 = 0; /*0x5fc371*/
  return 0; /*0x5fc376*/
}



// ==== 0x005FC380  Object::SpawnAtCell  this=OverlayClass  sig=csp ====
void *__thiscall Object::SpawnAtCell(Object *this, int a2, __int16 *a3, int a4)
{
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  CellClass *v8; // eax

  ObjectClass::ctor((ObjectClass *)this); /*0x5fc386*/
  v5 = a2; /*0x5fc38b*/
  *(_DWORD *)this->__pad_0 = &OverlayClass::`vftable'; /*0x5fc38f*/
  this->Object_field_0xAC = v5; /*0x5fc395*/
  this->Object_field_0x8 = (int)&OverlayClass::`vftable'; /*0x5fc39f*/
  *(_DWORD *)&this->Object_field_0x2[2] = &OverlayClass::`vftable'; /*0x5fc3a6*/
  *(_DWORD *)this->__pad_C = &OverlayClass::`vftable'; /*0x5fc3ac*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->Object_field_0x2[2]); /*0x5fc3b3*/
  if ( dword_A8EC60 < dword_A8EC58 /*0x5fc3ef*/
    || (byte_A8EC5D || !dword_A8EC58)
    && dword_A8EC64 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8EC50 + 8))(
         &dword_A8EC50,
         dword_A8EC58 + dword_A8EC64,
         0) )
  {
    v6 = dword_A8EC60++; /*0x5fc3fc*/
    *((_DWORD *)dword_A8EC54 + v6) = this; /*0x5fc40b*/
  }
  if ( *a3 != word_AC1528 || a3[1] != word_AC152A ) /*0x5fc429*/
  {
    dword_8333BC = a4; /*0x5fc43b*/
    v7 = a3[1]; /*0x5fc444*/
    LOWORD(a2) = ((*a3 << 8) + 128) / 256; /*0x5fc469*/
    HIWORD(a2) = ((v7 << 8) + 128) / 256; /*0x5fc485*/
    v8 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2); /*0x5fc497*/
    if ( !CellClass::FindInfantry(v8, 0) ) /*0x5fc4a0*/
      ObjectClass::Deploy((ObjectClass *)this); /*0x5fc4b1*/
    dword_8333BC = -1; /*0x5fc4b6*/
  }
  return this; /*0x5fc4c2*/
}



// ==== 0x005FC570  ObjectClass::FinalizeCellPlacement  this=OverlayClass  sig=csp ====
char __thiscall ObjectClass::FinalizeCellPlacement(TechnoClass *this, int a2)
{
  int v2; // esi
  char *v4; // eax
  int v5; // edx
  int currentMission; // ecx
  int v7; // ebp
  int v8; // esi
  int v9; // eax
  int v10; // eax
  signed int i; // esi
  _DWORD *NeighbourContent; // eax
  VeinholeMonsterClass *v13; // eax
  int v14; // eax
  signed int j; // esi
  _BYTE *v16; // eax
  int v18; // ecx
  int v19; // esi
  __int16 v20; // bp
  __int16 v21; // ax
  char v22; // bl
  _WORD *v23; // edi
  __int16 v24; // dx
  bool v25; // zf
  int v26; // ebx
  _DWORD *v27; // eax
  __int16 v28; // ax
  int v29; // esi
  char v30; // bl
  int v31; // edx
  __int16 v32; // cx
  _WORD *v33; // edi
  _DWORD *v34; // eax
  __int16 v35; // ax
  char v36; // si
  int v37; // eax
  __int16 v38; // di
  int v39; // ecx
  signed int v40; // eax
  int v41; // ebp
  int v42; // ebx
  _WORD *v43; // edi
  __int16 v44; // dx
  _DWORD *v45; // esi
  __int16 v46; // dx
  int v47; // esi
  __int16 v48; // bp
  __int16 v49; // ax
  char v50; // bl
  _WORD *v51; // edi
  __int16 v52; // dx
  int v53; // ebx
  _DWORD *v54; // eax
  __int16 v55; // ax
  int v56; // esi
  char v57; // bl
  int v58; // edx
  __int16 v59; // cx
  _WORD *v60; // edi
  _DWORD *v61; // eax
  __int16 v62; // ax
  char v63; // si
  int v64; // eax
  __int16 v65; // di
  int v66; // eax
  int v67; // ecx
  signed int v68; // eax
  int v69; // ebp
  int v70; // ebx
  _WORD *v71; // edi
  __int16 v72; // dx
  _DWORD *v73; // esi
  __int16 v74; // dx
  bool *v75; // ecx
  char IsBuildable; // al
  int v77; // ecx
  TechnoClass *v78; // eax
  int v79; // esi
  int v80; // edi
  int v81; // edx
  int v82; // eax
  int GroundHeight; // ebx
  AnimClass *v84; // eax
  int v85; // edx
  void **v86; // esi
  int v87; // eax
  int v88; // eax
  TechnoClass *v89; // ecx
  int vtable0; // edx
  int v91; // [esp-1Ch] [ebp-58h]
  char v92; // [esp-18h] [ebp-54h]
  char v93; // [esp-14h] [ebp-50h]
  __int16 v94[2]; // [esp+10h] [ebp-2Ch] BYREF
  TechnoClass *v95; // [esp+14h] [ebp-28h]
  int v96; // [esp+18h] [ebp-24h]
  int v97; // [esp+1Ch] [ebp-20h]
  int v98; // [esp+20h] [ebp-1Ch]
  __int16 v99[2]; // [esp+24h] [ebp-18h] BYREF
  __int16 v100[2]; // [esp+28h] [ebp-14h] BYREF
  int v101; // [esp+2Ch] [ebp-10h]
  int v102; // [esp+30h] [ebp-Ch] BYREF
  int v103; // [esp+34h] [ebp-8h]
  int v104; // [esp+38h] [ebp-4h]

  v2 = a2; /*0x5fc576*/
  v95 = this; /*0x5fc57e*/
  if ( !(unsigned __int8)ObjectClass::UpdateProductionDisplay(this) || v2 != 1 && v2 != 3 ) /*0x5fc597*/
    return 0; /*0x5fc597*/
  *(_DWORD *)v94 = *(_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *))(this->vtable0 + 440))(this, &a2); /*0x5fc5b8*/
  v4 = (char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v94); /*0x5fc5bc*/
  currentMission = this->currentMission; /*0x5fc5c1*/
  v7 = (int)v4; /*0x5fc5c7*/
  v101 = (int)v4; /*0x5fc5c9*/
  v8 = *(_DWORD *)(currentMission + 660); /*0x5fc5d3*/
  if ( (unsigned __int8)v4[284] > 4u && v8 != 178 ) /*0x5fc5e3*/
    return 0; /*0x5fc5e3*/
  switch ( v8 ) /*0x5fc5f1*/
  {
    case 24: /*0x5fc5f1*/
      UpdateCellClassNeighborTerrain((int)v4, v5, 0, 1); /*0x5fc60a*/
      break;
    case 25: /*0x5fc5f1*/
      UpdateCellClassNeighborTerrain((int)v4, v5, 6u, 1); /*0x5fc5fe*/
      break;
    case 237: /*0x5fc5f1*/
      SetCellClassOccupancyFlags((int)v4, v5, 0, 1); /*0x5fc62c*/
      break;
    case 238: /*0x5fc5f1*/
      SetCellClassOccupancyFlags((int)v4, v5, 6u, 1); /*0x5fc625*/
      break;
    case 167: /*0x5fc5f1*/
      if ( ObjectClass::IsCellSuitableForPlacement((ObjectClass *)(v4 + 36)) ) /*0x5fc66a*/
      {
        for ( i = 0; i < 8; ++i ) /*0x5fc677*/
        {
          NeighbourContent = Cell::GetNeighbourContent((Cell *)v7, i); /*0x5fc67c*/
          NeighbourContent[17] = 178; /*0x5fc682*/
          *((_BYTE *)NeighbourContent + 286) = 0; /*0x5fc68c*/
        }
        *(_DWORD *)(v7 + 68) = 167; /*0x5fc69a*/
        *(_BYTE *)(v7 + 286) = 0; /*0x5fc6a1*/
        v13 = (VeinholeMonsterClass *)__2_YAPAXI_Z(0x108u); /*0x5fc6a8*/
        if ( v13 ) /*0x5fc6b2*/
          VeinholeMonsterClass::Constructor(v13, (ObjectClass *)(v7 + 36)); /*0x5fc6bb*/
      }
      goto LABEL_131; /*0x5fc6c0*/
    default:
      if ( v8 == 126 && !dword_A8E7AC ) /*0x5fc6d4*/
      {
        BuildingClass::VisualizePlacement((BuildingClass *)v4); /*0x5fc6dc*/
        goto LABEL_131; /*0x5fc6e1*/
      }
      break;
  }
  v9 = v95->currentMission; /*0x5fc635*/
  if ( *(_DWORD *)(v9 + 664) != 9 ) /*0x5fc642*/
  {
    if ( *(_BYTE *)(v9 + 680) ) /*0x5fc6e6*/
    {
      if ( (unsigned __int8)CellClass::IsPassable((int *)v7, 1, 0, 0) ) /*0x5fc6fa*/
      {
        v14 = *(_DWORD *)(v95->currentMission + 660); /*0x5fc711*/
        *(_BYTE *)(v7 + 286) = 0; /*0x5fc717*/
        *(_DWORD *)(v7 + 68) = v14; /*0x5fc71e*/
        BuildingClass::ValidatePlacement((BuildingClass *)v7, 1); /*0x5fc721*/
        if ( !dword_A8E7AC ) /*0x5fc72c*/
        {
          CellClass::DetermineTileConnectivity((CellClass *)&dword_87F7E8, (__int16 *)(v7 + 36)); /*0x5fc737*/
          Radar::Update((Radar *)&dword_87F7E8, (__int16 *)(v7 + 36)); /*0x5fc742*/
        }
        if ( dword_8333BC != -1 ) /*0x5fc74d*/
          *(_DWORD *)(v7 + 80) = dword_880994; /*0x5fc755*/
        for ( j = 0; j < 8; ++j ) /*0x5fc758*/
        {
          v16 = Cell::GetNeighbourContent((Cell *)v7, j); /*0x5fc75d*/
          ++v16[290]; /*0x5fc773*/
        }
        goto LABEL_131; /*0x5fc775*/
      }
      (*(void (__thiscall **)(TechnoClass *))(v95->vtable0 + 248))(v95); /*0x5fc77e*/
      return 0; /*0x5fc78d*/
    }
    v18 = *(_DWORD *)(v9 + 660); /*0x5fc790*/
    if ( v18 >= 122 && v18 <= 125 ) /*0x5fc7a2*/
    {
      v19 = v18 - 122; /*0x5fc7af*/
      if ( (byte_AC1548 & 1) == 0 ) /*0x5fc7b4*/
      {
        byte_AC1548 |= 1u; /*0x5fc7d7*/
        dword_AC154C[0] = -65536; /*0x5fc7eb*/
        a2 = 0xFFFF; /*0x5fc7f0*/
        dword_AC1550 = -65536; /*0x5fc803*/
        dword_AC1554 = 0xFFFF; /*0x5fc809*/
        dword_AC1558 = 0xFFFF; /*0x5fc80f*/
        atexit(nullsub_211); /*0x5fc814*/
      }
      if ( (byte_AC1548 & 2) == 0 ) /*0x5fc826*/
      {
        byte_AC1548 |= 2u; /*0x5fc83e*/
        dword_AC1588 = 0xFFFF; /*0x5fc857*/
        dword_AC158C = 0; /*0x5fc86b*/
        dword_AC1590 = 1; /*0x5fc87f*/
        dword_AC1594 = -65536; /*0x5fc893*/
        v96 = 0x10000; /*0x5fc899*/
        dword_AC1598 = 0; /*0x5fc8ac*/
        dword_AC159C = 0x10000; /*0x5fc8b2*/
        atexit(nullsub_210); /*0x5fc8b8*/
      }
      v20 = LOWORD(dword_AC154C[v19]) + v94[0]; /*0x5fc8cd*/
      v21 = v94[1] + HIWORD(dword_AC154C[v19]); /*0x5fc8d5*/
      v22 = 1; /*0x5fc8da*/
      v98 = 3; /*0x5fc8dc*/
      LOWORD(v96) = v20; /*0x5fc8e4*/
      HIWORD(v96) = v21; /*0x5fc8e9*/
      a2 = v96; /*0x5fc8f2*/
      v23 = (_WORD *)(4 * (dword_8333C0[v19] & 7) + 9041544); /*0x5fc900*/
      do /*0x5fc94a*/
      {
        if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2) + 17) != -1 ) /*0x5fc91a*/
          v22 = 0; /*0x5fc91c*/
        v24 = a2 + *v23; /*0x5fc92a*/
        HIWORD(v97) = v23[1] + HIWORD(a2); /*0x5fc92f*/
        LOWORD(v97) = v24; /*0x5fc938*/
        v25 = v98 == 1; /*0x5fc941*/
        a2 = v97; /*0x5fc942*/
        --v98; /*0x5fc946*/
      }
      while ( !v25 ); /*0x5fc94a*/
      a2 = v96; /*0x5fc952*/
      if ( v22 ) /*0x5fc956*/
      {
        v26 = 0; /*0x5fc95c*/
        do /*0x5fc9ad*/
        {
          v27 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2); /*0x5fc968*/
          v27[17] = dword_8333D0[v19]; /*0x5fc976*/
          *((_BYTE *)v27 + 286) = v26; /*0x5fc97b*/
          House::AnnounceUpgrade((int)v27, -1); /*0x5fc981*/
          v28 = v23[1] + HIWORD(a2); /*0x5fc993*/
          ++v26; /*0x5fc997*/
          LOWORD(v98) = *v23 + a2; /*0x5fc998*/
          HIWORD(v98) = v28; /*0x5fc99d*/
          a2 = v98; /*0x5fc9a9*/
        }
        while ( v26 < 3 ); /*0x5fc9ad*/
        v29 = dword_8333E0[v19]; /*0x5fc9af*/
        v30 = 0; /*0x5fc9b6*/
        v31 = v29 & 7; /*0x5fc9ba*/
        v32 = v94[1] + HIWORD(dword_89F688[v31]); /*0x5fc9d2*/
        v33 = (_WORD *)(4 * v31 + 9041544); /*0x5fc9d7*/
        LOWORD(v98) = v94[0] + LOWORD(dword_89F688[v31]); /*0x5fc9de*/
        HIWORD(v98) = v32; /*0x5fc9e3*/
        a2 = v98; /*0x5fc9ee*/
        v97 = dword_8333F8[v29 / 2]; /*0x5fca08*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, (__int16 *)&a2) ) /*0x5fca0c*/
        {
          while ( !v30 ) /*0x5fca1b*/
          {
            v34 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2); /*0x5fca27*/
            if ( v34[17] == v97 && *((_BYTE *)v34 + 286) == 1 ) /*0x5fca3e*/
            {
              v30 = 1; /*0x5fca40*/
            }
            else
            {
              v35 = v33[1]; /*0x5fca47*/
              LOWORD(v98) = a2 + *v33; /*0x5fca55*/
              HIWORD(v98) = HIWORD(a2) + v35; /*0x5fca5a*/
              a2 = v98; /*0x5fca63*/
            }
            if ( !(unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, (__int16 *)&a2) ) /*0x5fca71*/
            {
              if ( !v30 ) /*0x5fca7c*/
                goto LABEL_131; /*0x5fca7c*/
              break; /*0x5fca7c*/
            }
          }
          v36 = (v29 - 4) & 7; /*0x5fca82*/
          v37 = v36 & 7; /*0x5fca8a*/
          v38 = dword_89F688[v37]; /*0x5fca92*/
          *(_DWORD *)v100 = 4 * v37 + 9041544; /*0x5fcaa1*/
          LOWORD(v37) = HIWORD(a2) + HIWORD(dword_89F688[v37]); /*0x5fcaae*/
          LOWORD(v98) = a2 + v38; /*0x5fcab3*/
          HIWORD(v98) = v37; /*0x5fcab8*/
          a2 = v98; /*0x5fcac6*/
          v39 = abs32((__int16)v37 - SHIWORD(v96)); /*0x5fcacf*/
          v40 = abs32((__int16)v98 - v20); /*0x5fcadc*/
          if ( v40 > v39 ) /*0x5fcae0*/
            v39 = v40; /*0x5fcae2*/
          if ( v39 > 0 ) /*0x5fcae6*/
          {
            v96 = v39; /*0x5fcafd*/
            v41 = (v36 & 3) / 2; /*0x5fcb03*/
            do /*0x5fcbae*/
            {
              v42 = 0; /*0x5fcb09*/
              v43 = (_WORD *)(12 * v41 + 11277704); /*0x5fcb0b*/
              do /*0x5fcb7c*/
              {
                v44 = HIWORD(a2) + v43[1]; /*0x5fcb1e*/
                LOWORD(v98) = a2 + *v43; /*0x5fcb23*/
                HIWORD(v98) = v44; /*0x5fcb2c*/
                *(_DWORD *)v99 = v98; /*0x5fcb3b*/
                v45 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v99); /*0x5fcb4a*/
                v45[17] = dword_8333F0[v41] + (Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) & 3); /*0x5fcb67*/
                *((_BYTE *)v45 + 286) = v42; /*0x5fcb6a*/
                House::AnnounceUpgrade((int)v45, -1); /*0x5fcb70*/
                ++v42; /*0x5fcb75*/
                v43 += 2; /*0x5fcb76*/
              }
              while ( v42 < 3 ); /*0x5fcb7c*/
              v46 = *(_WORD *)(*(_DWORD *)v100 + 2); /*0x5fcb87*/
              LOWORD(v97) = **(_WORD **)v100 + a2; /*0x5fcb93*/
              HIWORD(v97) = HIWORD(a2) + v46; /*0x5fcb98*/
              a2 = v97; /*0x5fcba1*/
              --v96; /*0x5fcbaa*/
            }
            while ( v96 ); /*0x5fcbae*/
          }
        }
      }
      goto LABEL_131; /*0x5fcbae*/
    }
    if ( v18 >= 233 && v18 <= 236 ) /*0x5fcbcb*/
    {
      v47 = *(_DWORD *)(v9 + 660) - 233; /*0x5fcbdc*/
      if ( (byte_AC1548 & 4) == 0 ) /*0x5fcbe4*/
      {
        byte_AC1548 |= 4u; /*0x5fcbf9*/
        dword_AC155C[0] = -65536; /*0x5fcc1b*/
        a2 = 0xFFFF; /*0x5fcc21*/
        dword_AC1560 = -65536; /*0x5fcc34*/
        dword_AC1564 = 0xFFFF; /*0x5fcc3a*/
        dword_AC1568 = 0xFFFF; /*0x5fcc3f*/
        atexit(nullsub_209); /*0x5fcc45*/
      }
      if ( (byte_AC1548 & 8) == 0 ) /*0x5fcc54*/
      {
        byte_AC1548 |= 8u; /*0x5fcc69*/
        dword_AC15A4 = 0; /*0x5fcc86*/
        dword_AC15A0 = 0xFFFF; /*0x5fcc99*/
        dword_AC15A8 = 1; /*0x5fccad*/
        dword_AC15AC = -65536; /*0x5fccc1*/
        v98 = 0x10000; /*0x5fccc7*/
        dword_AC15B0 = 0; /*0x5fccda*/
        dword_AC15B4 = 0x10000; /*0x5fcce0*/
        atexit(nullsub_208); /*0x5fcce6*/
      }
      v48 = v94[0] + LOWORD(dword_AC155C[v47]); /*0x5fccfe*/
      v49 = v94[1] + HIWORD(dword_AC155C[v47]); /*0x5fcd03*/
      v50 = 1; /*0x5fcd08*/
      v97 = 3; /*0x5fcd0a*/
      LOWORD(v96) = v48; /*0x5fcd12*/
      HIWORD(v96) = v49; /*0x5fcd17*/
      a2 = v96; /*0x5fcd20*/
      v51 = (_WORD *)(4 * (dword_833408[v47] & 7) + 9041544); /*0x5fcd2e*/
      do /*0x5fcd78*/
      {
        if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2) + 17) != -1 ) /*0x5fcd48*/
          v50 = 0; /*0x5fcd4a*/
        v52 = a2 + *v51; /*0x5fcd58*/
        HIWORD(v98) = v51[1] + HIWORD(a2); /*0x5fcd5d*/
        LOWORD(v98) = v52; /*0x5fcd66*/
        v25 = v97 == 1; /*0x5fcd6f*/
        a2 = v98; /*0x5fcd70*/
        --v97; /*0x5fcd74*/
      }
      while ( !v25 ); /*0x5fcd78*/
      a2 = v96; /*0x5fcd80*/
      if ( v50 ) /*0x5fcd84*/
      {
        v53 = 0; /*0x5fcd8a*/
        do /*0x5fcddb*/
        {
          v54 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2); /*0x5fcd96*/
          v54[17] = dword_833418[v47]; /*0x5fcda4*/
          *((_BYTE *)v54 + 286) = v53; /*0x5fcda9*/
          House::AnnounceUpgrade((int)v54, -1); /*0x5fcdaf*/
          v55 = v51[1] + HIWORD(a2); /*0x5fcdc1*/
          ++v53; /*0x5fcdc5*/
          LOWORD(v98) = *v51 + a2; /*0x5fcdc6*/
          HIWORD(v98) = v55; /*0x5fcdcb*/
          a2 = v98; /*0x5fcdd7*/
        }
        while ( v53 < 3 ); /*0x5fcddb*/
        v56 = dword_833428[v47]; /*0x5fcddd*/
        v57 = 0; /*0x5fcde4*/
        v58 = v56 & 7; /*0x5fcde8*/
        v59 = v94[1] + HIWORD(dword_89F688[v58]); /*0x5fce00*/
        v60 = (_WORD *)(4 * v58 + 9041544); /*0x5fce05*/
        LOWORD(v98) = v94[0] + LOWORD(dword_89F688[v58]); /*0x5fce0c*/
        HIWORD(v98) = v59; /*0x5fce11*/
        a2 = v98; /*0x5fce1c*/
        *(_DWORD *)v100 = dword_833440[v56 / 2]; /*0x5fce36*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, (__int16 *)&a2) ) /*0x5fce3a*/
        {
          while ( !v57 ) /*0x5fce49*/
          {
            v61 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2); /*0x5fce55*/
            if ( v61[17] == *(_DWORD *)v100 && *((_BYTE *)v61 + 286) == 1 ) /*0x5fce6c*/
            {
              v57 = 1; /*0x5fce6e*/
            }
            else
            {
              v62 = v60[1]; /*0x5fce75*/
              LOWORD(v98) = a2 + *v60; /*0x5fce83*/
              HIWORD(v98) = HIWORD(a2) + v62; /*0x5fce88*/
              a2 = v98; /*0x5fce91*/
            }
            if ( !(unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, (__int16 *)&a2) ) /*0x5fce9f*/
            {
              if ( !v57 ) /*0x5fceaa*/
                goto LABEL_131; /*0x5fceaa*/
              break; /*0x5fceaa*/
            }
          }
          v63 = (v56 - 4) & 7; /*0x5fceb0*/
          v64 = v63 & 7; /*0x5fcebd*/
          v65 = LOWORD(dword_89F688[v64]) + a2; /*0x5fcec5*/
          *(_DWORD *)v99 = 4 * v64 + 9041544; /*0x5fced4*/
          LOWORD(v64) = HIWORD(dword_89F688[v64]); /*0x5fced8*/
          LOWORD(v98) = v65; /*0x5fcedc*/
          HIWORD(v98) = HIWORD(a2) + v64; /*0x5fcee6*/
          v66 = (__int16)(HIWORD(a2) + v64) - SHIWORD(v96); /*0x5fcef2*/
          a2 = v98; /*0x5fcef4*/
          v67 = abs32(v66); /*0x5fcefd*/
          v68 = abs32(v65 - v48); /*0x5fcf0a*/
          if ( v68 > v67 ) /*0x5fcf0e*/
            v67 = v68; /*0x5fcf10*/
          if ( v67 > 0 ) /*0x5fcf14*/
          {
            v96 = v67; /*0x5fcf2b*/
            v69 = (v63 & 3) / 2; /*0x5fcf31*/
            do /*0x5fcfdc*/
            {
              v70 = 0; /*0x5fcf37*/
              v71 = (_WORD *)(12 * v69 + 11277728); /*0x5fcf39*/
              do /*0x5fcfaa*/
              {
                v72 = HIWORD(a2) + v71[1]; /*0x5fcf4c*/
                LOWORD(v98) = a2 + *v71; /*0x5fcf51*/
                HIWORD(v98) = v72; /*0x5fcf5a*/
                *(_DWORD *)v100 = v98; /*0x5fcf69*/
                v73 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v100); /*0x5fcf78*/
                v73[17] = dword_833438[v69] + (Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) & 3); /*0x5fcf95*/
                *((_BYTE *)v73 + 286) = v70; /*0x5fcf98*/
                House::AnnounceUpgrade((int)v73, -1); /*0x5fcf9e*/
                ++v70; /*0x5fcfa3*/
                v71 += 2; /*0x5fcfa4*/
              }
              while ( v70 < 3 ); /*0x5fcfaa*/
              v74 = *(_WORD *)(*(_DWORD *)v99 + 2); /*0x5fcfb5*/
              LOWORD(v97) = **(_WORD **)v99 + a2; /*0x5fcfc1*/
              HIWORD(v97) = HIWORD(a2) + v74; /*0x5fcfc6*/
              a2 = v97; /*0x5fcfcf*/
              --v96; /*0x5fcfd8*/
            }
            while ( v96 ); /*0x5fcfdc*/
          }
        }
      }
      goto LABEL_131; /*0x5fcfdc*/
    }
    if ( dword_A8E7AC ) /*0x5fcfed*/
    {
      IsBuildable = 1; /*0x5fd077*/
    }
    else
    {
      if ( v9 == dword_8871E0->GUIOpenSound ) /*0x5fcfff*/
      {
        v93 = 0; /*0x5fd006*/
        v92 = 0; /*0x5fd007*/
        v91 = 5; /*0x5fd008*/
        v75 = (bool *)v7; /*0x5fd00a*/
LABEL_97:
        IsBuildable = Cell::IsBuildable(v75, v91, v92, v93, -1, 0, -1, 1); /*0x5fd00c*/
        goto LABEL_110; /*0x5fd011*/
      }
      if ( v9 == dword_8871E0->GUITabSound || v9 == dword_8871E0->GUIBuildSound ) /*0x5fd021*/
      {
        IsBuildable = Cell::IsBuildable((bool *)v7, 1, 0, 0, -1, 0, -1, 1); /*0x5fd070*/
      }
      else
      {
        if ( v18 == 24 || v18 == 25 || v18 == 237 || v18 == 238 ) /*0x5fd03b*/
        {
          IsBuildable = 1; /*0x5fd061*/
          goto LABEL_111; /*0x5fd063*/
        }
        v93 = 1; /*0x5fd042*/
        v25 = v18 == 102; /*0x5fd044*/
        v92 = 1; /*0x5fd047*/
        v91 = 1; /*0x5fd049*/
        v75 = (bool *)v7; /*0x5fd04b*/
        if ( !v25 ) /*0x5fd04d*/
          goto LABEL_97; /*0x5fd04d*/
        IsBuildable = Cell::IsBuildable((bool *)v7, 1, 1, 1, -1, 0, -1, 1); /*0x5fd04f*/
        if ( *(_BYTE *)(v7 + 284) > 4u ) /*0x5fd05b*/
          IsBuildable = 0; /*0x5fd05d*/
      }
    }
LABEL_110:
    if ( dword_A8E7AC ) /*0x5fd07f*/
    {
LABEL_113:
      if ( IsBuildable ) /*0x5fd09d*/
      {
        v78 = v95; /*0x5fd09f*/
        *(_DWORD *)(v7 + 68) = *(_DWORD *)(v95->currentMission + 660); /*0x5fd0b2*/
        if ( v8 != 24 && v8 != 25 && v8 != 237 && v8 != 238 ) /*0x5fd0ca*/
          *(_BYTE *)(v7 + 286) = 0; /*0x5fd0cc*/
        if ( *(_DWORD *)(v78->currentMission + 664) == 5 ) /*0x5fd0e0*/
        {
          *(_BYTE *)(v7 + 286) = 1; /*0x5fd0e5*/
          ObjectClass::UpdateTiberiumGrowth(v7, 0); /*0x5fd0ec*/
          v78 = v95; /*0x5fd0f1*/
        }
        if ( *(_BYTE *)(v78->currentMission + 682) ) /*0x5fd0fb*/
          *(_BYTE *)(v7 + 286) = -1; /*0x5fd105*/
        goto LABEL_124; /*0x5fd10c*/
      }
LABEL_123:
      v78 = v95; /*0x5fd10e*/
LABEL_124:
      if ( *(_DWORD *)(v78->currentMission + 668) ) /*0x5fd118*/
      {
        v79 = v95->location[0]; /*0x5fd12f*/
        v80 = v95->location[1]; /*0x5fd131*/
        v81 = v95->location[2]; /*0x5fd134*/
        v102 = v79; /*0x5fd139*/
        v104 = v81; /*0x5fd13d*/
        v82 = v95->location[2]; /*0x5fd144*/
        v103 = v95->location[1]; /*0x5fd14b*/
        v104 = v82; /*0x5fd155*/
        GroundHeight = Cell::GetGroundHeight(&v102); /*0x5fd163*/
        v84 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x5fd165*/
        if ( v84 ) /*0x5fd16f*/
        {
          v102 = v79 + 384; /*0x5fd181*/
          v103 = v80 + 384; /*0x5fd189*/
          v85 = v95->currentMission; /*0x5fd19b*/
          v104 = GroundHeight; /*0x5fd1a1*/
          v86 = AnimClass::ctor(v84, *(void **)(v85 + 668), &v102, 0, 1, (void *)0x600, 0, 0); /*0x5fd1b3*/
        }
        else
        {
          v86 = 0; /*0x5fd1b7*/
        }
        v87 = BuildingClass::FindByCellHash((BuildingClass *)v7); /*0x5fd1bb*/
        if ( v87 != -1 ) /*0x5fd1c3*/
        {
          v88 = *(&dword_B0F4EC->vtable0 + v87); /*0x5fd1cb*/
          if ( v88 ) /*0x5fd1d0*/
          {
            v86[53] = *(void **)(*((_DWORD *)dword_B054D4 + *(_DWORD *)(v88 + 192)) + 780); /*0x5fd1e7*/
            v86[63] = (void *)*(__int16 *)(v7 + 266); /*0x5fd1f4*/
          }
        }
      }
      goto LABEL_131; /*0x5fd1f4*/
    }
LABEL_111:
    v77 = *(_DWORD *)(v7 + 68); /*0x5fd081*/
    if ( v77 != -1 && *(_BYTE *)(*(&dword_A83D84->vtable0 + v77) + 690) ) /*0x5fd091*/
      goto LABEL_123; /*0x5fd099*/
    goto LABEL_113; /*0x5fd099*/
  }
  v10 = *(_DWORD *)(v9 + 660); /*0x5fc648*/
  *(_BYTE *)(v7 + 286) = 0; /*0x5fc64e*/
  *(_DWORD *)(v7 + 68) = v10; /*0x5fc655*/
LABEL_131:
  House::AnnounceUpgrade(v101, -1); /*0x5fd1fa*/
  v89 = v95; /*0x5fd205*/
  vtable0 = v95->vtable0; /*0x5fd209*/
  v95->isOnMap[0] = 0; /*0x5fd20b*/
  v89->inLimbo[0] = 1; /*0x5fd20f*/
  (*(void (**)(void))(vtable0 + 248))(); /*0x5fd216*/
  return 1; /*0x5fc784*/
}


// ==== 0x005FD230  nullsub_208  this=-  sig=ida-proto ====
void __cdecl nullsub_208()
{
  ; /*0x5fd230*/
}



// ==== 0x005FD240  nullsub_209  this=-  sig=ida-proto ====
void __cdecl nullsub_209()
{
  ; /*0x5fd240*/
}



// ==== 0x005FD250  nullsub_210  this=-  sig=ida-proto ====
void __cdecl nullsub_210()
{
  ; /*0x5fd250*/
}



// ==== 0x005FD260  nullsub_211  this=-  sig=ida-proto ====
void __cdecl nullsub_211()
{
  ; /*0x5fd260*/
}



// ==== 0x005FD270  OverlayClass::CheckState  this=OverlayClass  sig=csp ====
char __thiscall Object::CheckState(OverlayClass *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  CellClass *v5; // eax

  v3 = a2; /*0x5fd271*/
  LOWORD(a2) = *a2 / 256; /*0x5fd290*/
  HIWORD(a2) = v3[1] / 256; /*0x5fd2a4*/
  v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x5fd2b1*/
  if ( CellClass::FindInfantry(v5, 0) ) /*0x5fd2ba*/
    return 0; /*0x5fd2c4*/
  else
    return ObjectClass::Deploy((ObjectClass *)this); /*0x5fd2d2*/
}



// ==== 0x005FD2E0  ObjectClass::ReadOverlayINI  this=ObjectClass  sig=csp ====
int __thiscall ReadOverlayINI(ObjectClass *this)
{
  int Buffer_field_14; // edi
  int Buffer_field_18; // ebp
  int Buffer_field_20; // esi
  int Buffer_field_24; // ebx
  int Base64Data; // esi
  int v6; // edi
  int i; // edi
  int j; // esi
  char v9; // bl
  #374 *v10; // eax
  int v11; // edi
  int v12; // esi
  int v13; // ebx
  int v14; // esi
  int v15; // edi
  int k; // edi
  int m; // esi
  _BYTE *v18; // eax
  ObjectClass *v20; // [esp+0h] [ebp-74h] BYREF
  char v21[4]; // [esp+4h] [ebp-70h] BYREF
  __int16 v22; // [esp+8h] [ebp-6Ch] BYREF
  __int16 v23; // [esp+Ah] [ebp-6Ah]
  INIClass *v24; // [esp+Ch] [ebp-68h]
  Straw v25; // [esp+10h] [ebp-64h] BYREF
  int v26; // [esp+18h] [ebp-5Ch]
  Buffer v27; // [esp+1Ch] [ebp-58h] BYREF
  LCWStraw v28; // [esp+4Ch] [ebp-28h] BYREF

  v24 = (INIClass *)this; /*0x5fd2e3*/
  INIClass::ResetSection((INIClass *)this); /*0x5fd2e7*/
  if ( *(int *)&stru_A8EB00.?[408] > 1 ) /*0x5fd2f3*/
  {
    OverlayClass::updateOverlayState((OverlayClass *)&v27.Buffer_field_10, 640, 400); /*0x5fd30b*/
    v27.Buffer_field_20 = 2; /*0x5fd314*/
    Buffer::Init((Buffer *)&v27.Buffer_field_24, 0, 512000); /*0x5fd323*/
    v27.Buffer_field_10 = (int)&BSurface_Vtable; /*0x5fd32c*/
    XSurface::Fill((XSurface *)&v27.Buffer_field_10, 0); /*0x5fd336*/
    Buffer_field_14 = v27.Buffer_field_14; /*0x5fd33f*/
    Buffer_field_18 = v27.Buffer_field_18; /*0x5fd347*/
    Buffer_field_20 = v27.Buffer_field_20; /*0x5fd34b*/
    ++v27.Buffer_field_1C; /*0x5fd350*/
    Buffer_field_24 = v27.Buffer_field_24; /*0x5fd354*/
    (*(void (__thiscall **)(int *))(v27.Buffer_field_10 + 112))(&v27.Buffer_field_10); /*0x5fd35c*/
    (*(void (__thiscall **)(int *))(v27.Buffer_field_10 + 116))(&v27.Buffer_field_10); /*0x5fd367*/
    Base64Data = INIClass::GetBase64Data( /*0x5fd380*/
                   v24,
                   g_INI_Key_OverlayPack,
                   Buffer_field_24,
                   Buffer_field_14 * Buffer_field_18 * Buffer_field_20);
    if ( Base64Data > 0 ) /*0x5fd386*/
    {
      v6 = v27.Buffer_field_24; /*0x5fd394*/
      ++v27.Buffer_field_1C; /*0x5fd399*/
      (*(void (__thiscall **)(int *))(v27.Buffer_field_10 + 112))(&v27.Buffer_field_10); /*0x5fd3a1*/
      (*(void (__thiscall **)(int *))(v27.Buffer_field_10 + 116))(&v27.Buffer_field_10); /*0x5fd3ac*/
      v25.Straw_field_0x04 = 0; /*0x5fd3b3*/
      v26 = 0; /*0x5fd3b9*/
      Buffer::Init(&v27, v6, Base64Data); /*0x5fd3c5*/
      v27.Buffer_field_0C = 0; /*0x5fd3ce*/
      *(_DWORD *)v25.__pad_0 = &BufferStraw::`vftable'; /*0x5fd3d9*/
      LCWStraw::Constructor(&v28, 1, 0x2000); /*0x5fd3e1*/
      Delegate::Set((Straw *)&v28, (int)&v25); /*0x5fd3ef*/
      for ( i = 0; i < 512; ++i ) /*0x5fd3f4*/
      {
        for ( j = 0; j < 512; ++j ) /*0x5fd3f6*/
        {
          v22 = j; /*0x5fd403*/
          v23 = i; /*0x5fd408*/
          *(_DWORD *)v21 = -1; /*0x5fd40d*/
          LCW::DecompressReader(&v28, v21, 1); /*0x5fd415*/
          if ( *(_DWORD *)v21 != -1 ) /*0x5fd421*/
          {
            *(_DWORD *)v21 = (unsigned __int8)v21[0]; /*0x5fd42f*/
            if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)stru_A83D50.__pad_34 /*0x5fd48c*/
                                                              + 4 * (unsigned __int8)v21[0])
                                                + 156))(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34
                                                                  + 4 * (unsigned __int8)v21[0]))
               || *(_DWORD *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * *(_DWORD *)v21) + 668))
              && (!*(_DWORD *)&dword_A8B238
               || !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * *(_DWORD *)v21) + 682))
              && (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], &v22) )
            {
              v9 = *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &v22) + 286); /*0x5fd4a4*/
              v10 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x5fd4af*/
              if ( v10 ) /*0x5fd4b9*/
                Object::SpawnAtCell(v10, *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * *(_DWORD *)v21), &v22, -1); /*0x5fd4d2*/
              if ( *(_DWORD *)v21 == 24 || *(_DWORD *)v21 == 25 || *(_DWORD *)v21 == 237 || *(_DWORD *)v21 == 238 ) /*0x5fd4f1*/
                *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &v22) + 286) = v9; /*0x5fd502*/
            }
          }
        }
      }
      --v27.Buffer_field_1C; /*0x5fd52b*/
      LCWStraw::Dtor(&v28); /*0x5fd52f*/
      Vector::Clear((int)&v27); /*0x5fd538*/
      Straw::Dtor(&v25); /*0x5fd541*/
    }
    v11 = v27.Buffer_field_14; /*0x5fd54e*/
    v12 = v27.Buffer_field_18; /*0x5fd552*/
    v13 = v27.Buffer_field_24; /*0x5fd556*/
    (*(void (__thiscall **)(int *))(v27.Buffer_field_10 + 112))(&v27.Buffer_field_10); /*0x5fd564*/
    (*(void (__thiscall **)(int *))(v27.Buffer_field_10 + 116))(&v27.Buffer_field_10); /*0x5fd56f*/
    v14 = INIClass::GetBase64Data(v24, g_INI_Key_OverlayDataPack, v13, v11 * v12); /*0x5fd585*/
    if ( v14 > 0 ) /*0x5fd589*/
    {
      v15 = v27.Buffer_field_24; /*0x5fd597*/
      ++v27.Buffer_field_1C; /*0x5fd5a0*/
      (*(void (__thiscall **)(int *))(v27.Buffer_field_10 + 112))(&v27.Buffer_field_10); /*0x5fd5a4*/
      (*(void (__thiscall **)(int *))(v27.Buffer_field_10 + 116))(&v27.Buffer_field_10); /*0x5fd5af*/
      v25.Straw_field_0x04 = 0; /*0x5fd5b6*/
      v26 = 0; /*0x5fd5bc*/
      *(_DWORD *)v25.__pad_0 = &Straw::`vftable'; /*0x5fd5c0*/
      Buffer::Init(&v27, v15, v14); /*0x5fd5c8*/
      v27.Buffer_field_0C = 0; /*0x5fd5d1*/
      *(_DWORD *)v25.__pad_0 = &BufferStraw::`vftable'; /*0x5fd5dc*/
      LCWStraw::Constructor(&v28, 1, 0x2000); /*0x5fd5e4*/
      Delegate::Set((Straw *)&v28, (int)&v25); /*0x5fd5f2*/
      for ( k = 0; k < 512; ++k ) /*0x5fd5f7*/
      {
        for ( m = 0; m < 512; ++m ) /*0x5fd5f9*/
        {
          v22 = m; /*0x5fd606*/
          v23 = k; /*0x5fd60b*/
          HIBYTE(v20) = 0; /*0x5fd610*/
          LCW::DecompressReader(&v28, (char *)&v20 + 3, 1); /*0x5fd615*/
          if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], &v22) ) /*0x5fd624*/
          {
            v18 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &v22); /*0x5fd637*/
            v18[286] = HIBYTE(v20); /*0x5fd640*/
          }
        }
      }
      --v27.Buffer_field_1C; /*0x5fd661*/
      LCWStraw::Dtor(&v28); /*0x5fd665*/
      Vector::Clear((int)&v27); /*0x5fd66e*/
      Straw::Dtor(&v25); /*0x5fd677*/
    }
    --v27.Buffer_field_1C; /*0x5fd685*/
    Vector::Clear((int)&v27.Buffer_field_24); /*0x5fd689*/
  }
  return ProcessExpiredPointers(v20); /*0x5fd697*/
}



// ==== 0x005FD6A0  OverlayClass::WriteINI  this=INIClass  sig=csp ====
int __thiscall OverlayClass::WriteINI(char *this)
{
  int v2; // edi
  signed int v3; // ebx
  int v4; // esi
  int v5; // esi
  int v6; // eax
  int i; // esi
  char *v8; // eax
  int v9; // eax
  int v10; // edi
  signed int v11; // ebx
  int v12; // esi
  int v13; // esi
  int v14; // eax
  int j; // esi
  char *v16; // eax
  int v17; // eax
  __int16 v19; // [esp+1Ch] [ebp-8Ch] BYREF
  __int16 v20; // [esp+1Eh] [ebp-8Ah]
  int v21[3]; // [esp+20h] [ebp-88h] BYREF
  int v22[4]; // [esp+2Ch] [ebp-7Ch] BYREF
  int v23[3]; // [esp+3Ch] [ebp-6Ch] BYREF
  int v24[4]; // [esp+48h] [ebp-60h] BYREF
  int v25[10]; // [esp+58h] [ebp-50h] BYREF
  int v26[10]; // [esp+80h] [ebp-28h] BYREF

  INIClass::ClearSection((int *)this, (int)aOverlay, 0); /*0x5fd6b4*/
  INIClass::ClearSection((int *)this, (int)g_INI_Key_OverlayPack, 0); /*0x5fd6c2*/
  v2 = 0; /*0x5fd6cd*/
  v3 = 0; /*0x5fd6cf*/
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 128))(DSurface_Alternate); /*0x5fd6df*/
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 124))(DSurface_Alternate) * v4; /*0x5fd6e6*/
  v6 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0); /*0x5fd6f3*/
  v21[1] = 0; /*0x5fd6fa*/
  v21[2] = 0; /*0x5fd700*/
  Buffer::Init(v22, v6, v5); /*0x5fd70c*/
  v22[3] = 0; /*0x5fd715*/
  v21[0] = (int)&BufferPipe::`vftable'; /*0x5fd71f*/
  LCWPipe::Constructor(v26, 0, 0x2000); /*0x5fd727*/
  Pipe::SetDelegate(v26, (int)v21); /*0x5fd735*/
  do /*0x5fd776*/
  {
    for ( i = 0; i < 512; ++i ) /*0x5fd73a*/
    {
      v19 = i; /*0x5fd748*/
      v20 = v2; /*0x5fd74d*/
      v8 = (char *)CellCoord::To_CellObj(&dword_87F7E8, &v19); /*0x5fd752*/
      v3 += (signed int)LCW::Compress((int)v26, v8 + 68, 1); /*0x5fd764*/
    }
    ++v2; /*0x5fd76f*/
  }
  while ( v2 < 512 ); /*0x5fd776*/
  if ( v3 ) /*0x5fd77a*/
  {
    v9 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0); /*0x5fd78b*/
    INIClass::ReadBase64Data(this, (unsigned __int8 *)g_INI_Key_OverlayPack, v9, v3); /*0x5fd796*/
    (*(void (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 96))(DSurface_Alternate); /*0x5fd7a3*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 96))(DSurface_Alternate); /*0x5fd7ae*/
  INIClass::ClearSection((int *)this, (int)g_INI_Key_OverlayDataPack, 0); /*0x5fd7ba*/
  v10 = 0; /*0x5fd7c5*/
  v11 = 0; /*0x5fd7c7*/
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 128))(DSurface_Alternate); /*0x5fd7d7*/
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 124))(DSurface_Alternate) * v12; /*0x5fd7de*/
  v14 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0); /*0x5fd7eb*/
  v23[1] = 0; /*0x5fd7f2*/
  v23[2] = 0; /*0x5fd7f8*/
  v23[0] = (int)&Pipe::`vftable'; /*0x5fd7fc*/
  Buffer::Init(v24, v14, v13); /*0x5fd804*/
  v24[3] = 0; /*0x5fd80d*/
  v23[0] = (int)&BufferPipe::`vftable'; /*0x5fd817*/
  LCWPipe::Constructor(v25, 0, 0x2000); /*0x5fd81f*/
  Pipe::SetDelegate(v25, (int)v23); /*0x5fd82d*/
  do /*0x5fd870*/
  {
    for ( j = 0; j < 512; ++j ) /*0x5fd832*/
    {
      v19 = j; /*0x5fd840*/
      v20 = v10; /*0x5fd845*/
      v16 = (char *)CellCoord::To_CellObj(&dword_87F7E8, &v19); /*0x5fd84a*/
      v11 += (signed int)LCW::Compress((int)v25, v16 + 286, 1); /*0x5fd85e*/
    }
    ++v10; /*0x5fd869*/
  }
  while ( v10 < 512 ); /*0x5fd870*/
  if ( v11 ) /*0x5fd874*/
  {
    v17 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0); /*0x5fd885*/
    INIClass::ReadBase64Data(this, (unsigned __int8 *)g_INI_Key_OverlayDataPack, v17, v11); /*0x5fd890*/
    (*(void (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 96))(DSurface_Alternate); /*0x5fd89d*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 96))(DSurface_Alternate); /*0x5fd8a8*/
  LCWPipe::Dtor(v25); /*0x5fd8af*/
  Vector::Clear((int)v24); /*0x5fd8b8*/
  Pipe::Dtor(v23); /*0x5fd8c1*/
  LCWPipe::Dtor(v26); /*0x5fd8ca*/
  Vector::Clear((int)v22); /*0x5fd8d3*/
  return Pipe::Dtor(v21); /*0x5fd8e1*/
}



// ==== 0x005FD8F0  OverlayClass::LoadObject  this=OverlayClass  sig=csp ====
int __thiscall Object::LoadObject(OverlayClass *this, _DWORD *a2, int a3)
{
  int Register; // edi

  Register = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x5fd901*/
  if ( Register >= 0 ) /*0x5fd905*/
  {
    if ( a2 ) /*0x5fd909*/
    {
      ObjectClass::Init((ObjectClass *)a2, (int)&a3); /*0x5fd912*/
      *a2 = &OverlayClass::`vftable'; /*0x5fd917*/
      a2[1] = &OverlayClass::`vftable'; /*0x5fd91d*/
      a2[2] = &OverlayClass::`vftable'; /*0x5fd924*/
      a2[3] = &OverlayClass::`vftable'; /*0x5fd92b*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 43); /*0x5fd93e*/
  }
  return Register; /*0x5fd945*/
}



// ==== 0x005FD950  OverlayClass::SaveObject  this=OverlayClass  sig=csp ====
int __stdcall Object::SaveObject(OverlayClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x5fd964*/
}



// ==== 0x005FD970  OverlayClass::HandleAction  this=OverlayClass  sig=csp ====
void __thiscall Object::HandleAction(OverlayClass *this, int *a2, int *a3)
{
  int *location; // esi
  int v5; // ebp
  int GroundHeight; // eax
  int v7; // eax
  OverlayTypeClass **v8; // edx
  int v9; // ebx
  int v10; // edx
  int v11; // eax
  OverlayTypeClass *Type; // eax
  int v13; // edx
  OverlayTypeClass **v14; // esi
  int v15; // eax
  int v16; // esi
  int v17; // ecx
  int v18; // eax
  int DamageLevels; // ecx
  int v20; // esi
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  _DWORD *v25; // eax
  __int16 *v26; // eax
  int v27; // [esp-18h] [ebp-40h]
  __int16 *v28; // [esp-4h] [ebp-2Ch]
  int v29; // [esp+10h] [ebp-18h]
  int v30; // [esp+14h] [ebp-14h] BYREF
  char *v31; // [esp+18h] [ebp-10h]
  int v32; // [esp+1Ch] [ebp-Ch] BYREF
  int v33; // [esp+20h] [ebp-8h]
  int v34; // [esp+24h] [ebp-4h]

  location = this->?; /*0x5fd987*/
  v5 = (*((int (__thiscall **)(OverlayTypeClass *))this->Type->ObjectTypeClass + 39))(this->Type); /*0x5fd98d*/
  v32 = *location; /*0x5fd993*/
  v33 = this->?[1]; /*0x5fd99f*/
  v34 = this->?[2]; /*0x5fd9a6*/
  GroundHeight = Cell::GetGroundHeight(&v32); /*0x5fd9af*/
  v29 = ZCoordToScreenY(GroundHeight); /*0x5fd9c1*/
  v7 = 0; /*0x5fd9c5*/
  if ( *(int *)&stru_A83D50.__pad_3C[4] <= 0 ) /*0x5fd9c9*/
  {
LABEL_5:
    v7 = -1; /*0x5fd9e3*/
  }
  else
  {
    v8 = *(OverlayTypeClass ***)stru_A83D50.__pad_34; /*0x5fd9d1*/
    while ( *v8 != this->Type ) /*0x5fd9d9*/
    {
      ++v7; /*0x5fd9db*/
      ++v8; /*0x5fd9dc*/
      if ( v7 >= *(int *)&stru_A83D50.__pad_3C[4] ) /*0x5fd9e1*/
        goto LABEL_5; /*0x5fd9e1*/
    }
  }
  v9 = 0; /*0x5fd9ec*/
  v10 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v7); /*0x5fd9ee*/
  if ( *(_BYTE *)(v10 + 681) || *(_BYTE *)(v10 + 680) || *(_DWORD *)(v10 + 660) == 126 || *(_BYTE *)(v10 + 682) ) /*0x5fda0a*/
    v9 = -12; /*0x5fda12*/
  if ( *(_DWORD *)(v10 + 664) == 9 ) /*0x5fda1e*/
    --v9; /*0x5fda20*/
  if ( v7 == 126 ) /*0x5fda24*/
    --v9; /*0x5fda26*/
  v11 = v9 + a2[1]; /*0x5fda30*/
  v30 = *a2; /*0x5fda32*/
  v31 = (char *)DSurface_ViewBounds.field_4 + v11; /*0x5fda42*/
  Type = this->Type; /*0x5fda46*/
  if ( Type->IsVeinholeMonster ) /*0x5fda4c*/
  {
    v13 = 0; /*0x5fda5a*/
    if ( *(int *)&stru_A83D50.__pad_3C[4] <= 0 ) /*0x5fda5e*/
    {
LABEL_20:
      v13 = -1; /*0x5fda72*/
    }
    else
    {
      v14 = *(OverlayTypeClass ***)stru_A83D50.__pad_34; /*0x5fda60*/
      while ( *v14 != Type ) /*0x5fda68*/
      {
        ++v13; /*0x5fda6a*/
        ++v14; /*0x5fda6b*/
        if ( v13 >= *(int *)&stru_A83D50.__pad_3C[4] ) /*0x5fda70*/
          goto LABEL_20; /*0x5fda70*/
      }
    }
    v15 = *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * FindBuildingByTiberiumType(v13)); /*0x5fda8b*/
    v16 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(v15 + 192)); /*0x5fda93*/
    v17 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * *(_DWORD *)(*(_DWORD *)(v15 + 224) + 660)); /*0x5fdaa8*/
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 156))(v17); /*0x5fdaad*/
    if ( !v18 ) /*0x5fdab5*/
    {
      DamageLevels = this->Type->DamageLevels; /*0x5fdabd*/
      if ( DamageLevels ) /*0x5fdac5*/
        v18 = (*(int (__thiscall **)(int))(*(_DWORD *)DamageLevels + 156))(DamageLevels); /*0x5fdac9*/
    }
    DrawToSurfaceSHP( /*0x5fdb03*/
      (int)g_DSurface_Hidden_2,
      *(_DWORD *)(v16 + 780),
      v18,
      0,
      &v30,
      a3,
      3584,
      0,
      -2 - v29,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  }
  else if ( Type->Overrides ) /*0x5fdb08*/
  {
    if ( Type->LandType[0] == 167 ) /*0x5fdb20*/
      v31 -= 38; /*0x5fdb22*/
    v32 = *location; /*0x5fdb2b*/
    v33 = this->?[1]; /*0x5fdb32*/
    v34 = this->?[2]; /*0x5fdb41*/
    v20 = *(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)&dword_A83D4C[134].__pad_90[4]; /*0x5fdb60*/
    v27 = *(__int16 *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v32)->CellClass_field_10C; /*0x5fdb7c*/
    DrawToSurfaceSHP( /*0x5fdb9a*/
      (int)g_DSurface_Hidden_2,
      *(_DWORD *)(*(_DWORD *)v20 + 780),
      v5,
      0,
      &v30,
      a3,
      3584,
      0,
      -2 - v29,
      0,
      v27,
      0,
      0,
      0,
      0,
      0);
  }
  else
  {
    v21 = *location; /*0x5fdba1*/
    v22 = this->?[1]; /*0x5fdba3*/
    v34 = this->?[2]; /*0x5fdba9*/
    LOWORD(a2) = v21 / 256; /*0x5fdbb9*/
    HIWORD(a2) = v22 / 256; /*0x5fdbd1*/
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) ) /*0x5fdbe3*/
    {
      v23 = this->?[2]; /*0x5fdbee*/
      v24 = this->?[1]; /*0x5fdbf1*/
      v32 = *location; /*0x5fdbf4*/
      v34 = v23; /*0x5fdbfc*/
      v33 = v24; /*0x5fdc06*/
      v25 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v32); /*0x5fdc0a*/
    }
    else
    {
      v26 = (__int16 *)Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, &a2, &v30); /*0x5fdc21*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v26) ) /*0x5fdc2c*/
      {
        v28 = (__int16 *)Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, &a2, &v30); /*0x5fdc4a*/
        v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v28); /*0x5fdc4b*/
      }
      else
      {
        LOWORD(a2) = 1; /*0x5fdc58*/
        HIWORD(a2) = *(_WORD *)&stru_87F5F0.__pad_58[660]; /*0x5fdc5f*/
        v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x5fdc6a*/
      }
    }
    DrawToSurfaceSHP( /*0x5fdcaa*/
      (int)g_DSurface_Hidden_2,
      v25[13],
      v5,
      0,
      &v30,
      a3,
      3584,
      0,
      -2 - v29,
      0,
      *((__int16 *)v25 + 134),
      0,
      0,
      0,
      0,
      0);
  }
}



// ==== 0x005FDCC0  globalHelper_0FDCC0  this=-  sig=csp ====
_DWORD *__fastcall sub_5FDCC0(_DWORD *a1, int a2)
{
  _DWORD *result; // eax
  int v3; // esi
  int v4; // ecx

  result = a1; /*0x5fdcc0*/
  v3 = *((_DWORD *)dword_A83D84 + a2); /*0x5fdccd*/
  v4 = 0; /*0x5fdcd0*/
  if ( *(_BYTE *)(v3 + 681) || *(_BYTE *)(v3 + 680) || *(_DWORD *)(v3 + 660) == 126 || *(_BYTE *)(v3 + 682) ) /*0x5fdcef*/
    v4 = -12; /*0x5fdcf9*/
  if ( *(_DWORD *)(v3 + 664) == 9 ) /*0x5fdd05*/
    --v4; /*0x5fdd07*/
  if ( a2 == 126 ) /*0x5fdd0b*/
    --v4; /*0x5fdd0d*/
  *result = 0; /*0x5fdd0e*/
  result[1] = v4; /*0x5fdd12*/
  return result; /*0x5fdd10*/
}



// ==== 0x005FDD20  FindBuildingByTiberiumType  this=MixFileClass  sig=csp ====
int __fastcall Building_FindByTiberiumType(int a1)
{
  int v1; // eax
  int v2; // ebx
  char *v3; // edi
  _DWORD *v4; // eax
  int v5; // edx
  int v6; // esi
  const char *v8[17]; // [esp-34h] [ebp-48h] BYREF
  int v9; // [esp+10h] [ebp-4h]

  if ( a1 == -1 ) /*0x5fdd28*/
    return -1; /*0x5fdd28*/
  v1 = *((_DWORD *)dword_A83D84 + a1); /*0x5fdd33*/
  v9 = v1; /*0x5fdd36*/
  if ( !*(_BYTE *)(v1 + 681) ) /*0x5fdd3a*/
    return -1; /*0x5fddd8*/
  v2 = 0; /*0x5fdd4e*/
  if ( dword_B0F4F8 <= 0 ) /*0x5fdd52*/
  {
LABEL_11:
    qmemcpy(v8, (const void *)(v1 + 100), 0x31u); /*0x5fdda4*/
    Debug::Log("Overlay %s not really tiberium\n", v8[0]); /*0x5fddb9*/
    return 0; /*0x5fddc1*/
  }
  else
  {
    v3 = (char *)dword_B0F4EC; /*0x5fdd54*/
    while ( 1 ) /*0x5fdd5a*/
    {
      v4 = *(_DWORD **)v3; /*0x5fdd5a*/
      v5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 224) + 660); /*0x5fdd62*/
      if ( a1 >= v5 && a1 < v5 + v4[58] ) /*0x5fdd76*/
        break; /*0x5fdd76*/
      v6 = v4[58]; /*0x5fdd78*/
      if ( a1 >= v6 + v5 && a1 < v5 + v6 + v4[59] ) /*0x5fdd91*/
        break; /*0x5fdd91*/
      ++v2; /*0x5fdd98*/
      v3 += 4; /*0x5fdd99*/
      if ( v2 >= dword_B0F4F8 ) /*0x5fdd9e*/
      {
        v1 = v9; /*0x5fdda0*/
        goto LABEL_11; /*0x5fdda0*/
      }
    }
    return v4[38]; /*0x5fddc9*/
  }
}



// ==== 0x005FDDE0  OverlayClass::ProcessEvent  this=OverlayClass  sig=csp ====
int __thiscall Object::ProcessEvent(OverlayClass *this)
{
  return (int)this->Type; /*0x5fdde6*/
}



// ==== 0x005FDDF0  ObjectClass::ResetBuildingState  this=ObjectClass  sig=csp ====
void ResetBuildingState(ObjectClass *this)
{
  int v1; // esi
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int i; // edi
  BuildingClass *v6; // esi
  void **v7; // [esp+Ch] [ebp-18h] BYREF
  void *Block; // [esp+10h] [ebp-14h]
  int v9; // [esp+14h] [ebp-10h]
  char v10; // [esp+18h] [ebp-Ch]
  char v11; // [esp+19h] [ebp-Bh]
  int v12; // [esp+1Ch] [ebp-8h]
  int v13; // [esp+20h] [ebp-4h]

  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5fddfb*/
  v1 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5fde0a*/
  v2 = 0; /*0x5fde0e*/
  v3 = 1000; /*0x5fde10*/
  Block = 0; /*0x5fde17*/
  v9 = 0; /*0x5fde1b*/
  v10 = 1; /*0x5fde1f*/
  v11 = 0; /*0x5fde24*/
  v7 = &DynamicVectorClass<CellClass *>::`vftable'; /*0x5fde28*/
  v12 = 0; /*0x5fde30*/
  v13 = 1000; /*0x5fde34*/
  if ( v1 ) /*0x5fde38*/
  {
    while ( 1 ) /*0x5fde47*/
    {
      if ( *(_DWORD *)(v1 + 68) == 126 ) /*0x5fde4b*/
      {
        if ( *(_BYTE *)(v1 + 286) >= 0x30u /*0x5fde76*/
          && (v12 < v2
           || (v11 || !v2) && v3 > 0 && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v7[2])(&v7, v3 + v2, 0)) )
        {
          v4 = v12++; /*0x5fde81*/
          *((_DWORD *)Block + v4) = v1; /*0x5fde8c*/
        }
        *(_DWORD *)(v1 + 68) = -1; /*0x5fde8f*/
        *(_BYTE *)(v1 + 286) = 0; /*0x5fde92*/
      }
      v1 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5fdea2*/
      if ( !v1 ) /*0x5fdea6*/
        break; /*0x5fdea6*/
      v2 = v9; /*0x5fde3f*/
      v3 = v13; /*0x5fde43*/
    }
  }
  for ( i = v12 - 1; i >= 0; --i ) /*0x5fdeb1*/
  {
    v6 = (BuildingClass *)*((_DWORD *)Block + i); /*0x5fdeb7*/
    if ( (unsigned __int8)BuildingClass::CheckAdjacentCells((int)v6) ) /*0x5fdebc*/
      BuildingClass::VisualizePlacement(v6); /*0x5fdec7*/
  }
  v7 = &VectorClass<CellClass *>::`vftable'; /*0x5fded3*/
  if ( Block ) /*0x5fdedd*/
  {
    if ( v11 ) /*0x5fdee3*/
      __3_YAXPAX_Z(Block); /*0x5fdee6*/
  }
}



// ==== 0x005FDF00  OverlayClass::StubReturn176  this=OverlayClass  sig=csp ====
int Object::StubReturn176(OverlayClass *this)
{
  return 176; /*0x5fdf05*/
}



// ==== 0x005FDF10  OverlayClass::ddtor  this=OverlayClass  sig=csp ====
int __stdcall Object::ddtor(OverlayClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x5fdf16*/
    return -2147467261; /*0x5fdf18*/
  *a2 = 237448647; /*0x5fdf26*/
  a2[1] = 298949647; /*0x5fdf2e*/
  a2[2] = -1610610249; /*0x5fdf37*/
  a2[3] = -777003740; /*0x5fdf40*/
  return 0; /*0x5fdf1d*/
}



// ==== 0x005FDF50  OverlayClass::StubReturn20  this=OverlayClass  sig=csp ====
int Object::StubReturn20(OverlayClass *this)
{
  return 20; /*0x5fdf55*/
}



// ==== 0x005FDF60  OverlayClass::nullsub_212  this=OverlayClass  sig=csp ====
void __stdcall nullsub_212(OverlayClass *this, int a2)
{
  ; /*0x5fdf60*/
}



// ==== 0x005FDF70  OverlayClass::DrawObject  this=OverlayClass  sig=csp ====
void **__thiscall Object::DrawObject(OverlayClass *this, char a2)
{
  int v3; // eax
  OverlayClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->ObjectClass = &OverlayClass::`vftable'; /*0x5fdf76*/
  this->? = &OverlayClass::`vftable'; /*0x5fdf7c*/
  this->? = &OverlayClass::`vftable'; /*0x5fdf83*/
  this->? = &OverlayClass::`vftable'; /*0x5fdf8a*/
  AbstractClass::AnnounceExpiredPointer(&this->ObjectClass, 1); /*0x5fdf91*/
  v5 = this; /*0x5fdfa6*/
  v3 = (*(int (__thiscall **)(_BYTE *, OverlayClass **))(*(_DWORD *)&stru_A8EB00.?[108] + 16))(&stru_A8EB00.?[108], &v5); /*0x5fdfaa*/
  if ( v3 != -1 && v3 < *(int *)&stru_A8EB00.?[124] ) /*0x5fdfba*/
  {
    --*(_DWORD *)&stru_A8EB00.?[124]; /*0x5fdfbf*/
    for ( ; /*0x5fdfc5*/
          v3 < *(int *)&stru_A8EB00.?[124];
          *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[112] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[112] + 4 * v3) )
    {
      ++v3; /*0x5fdfcd*/
    }
  }
  if ( byte_A8E9A0 ) /*0x5fdfe6*/
    ObjectClass::Undeploy((ObjectClass *)this); /*0x5fdfea*/
  this->Type = 0; /*0x5fdff1*/
  ObjectClass::Dtor((ObjectClass *)this); /*0x5fdffb*/
  if ( (a2 & 1) != 0 ) /*0x5fe005*/
    __3_YAXPAX_Z(this); /*0x5fe008*/
  return &this->ObjectClass; /*0x5fe012*/
}



// ==== 0x005FE020  OverlayClass::updateOverlayState  this=OverlayClass  sig=csp ====
_DWORD *__thiscall OverlayClass::updateOverlayState(OverlayClass *this, int a2, int a3)
{
  this->? = (void *)a2; /*0x5fe02a*/
  this->? = (void *)a3; /*0x5fe02d*/
  this->? = 0; /*0x5fe030*/
  this->ObjectClass = &XSurface_Vtable; /*0x5fe037*/
  return &this->ObjectClass; /*0x5fe03d*/
}



// ==== 0x005FE040  sub_5FE040  this=-  sig=ida-proto ====
int sub_5FE040()
{
  dword_AC15F8 = 0; /*0x5fe042*/
  dword_AC15FC = 0; /*0x5fe047*/
  dword_AC1600 = 0; /*0x5fe04c*/
  dword_AC1604 = 0; /*0x5fe051*/
  return 0; /*0x5fe056*/
}



// ==== 0x005FE060  sub_5FE060  this=-  sig=ida-proto ====
void sub_5FE060()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5fe06c*/
  dbl_AC1610 = Math::Sqrt(v0 + v0); /*0x5fe07e*/
}



// ==== 0x005FE090  sub_5FE090  this=-  sig=ida-proto ====
void sub_5FE090()
{
  dbl_AC1668 = dbl_AC1610 / 60.0; /*0x5fe09c*/
}



// ==== 0x005FE0B0  sub_5FE0B0  this=-  sig=ida-proto ====
void sub_5FE0B0()
{
  dbl_AC1650 = 1.0 / dbl_AC1668; /*0x5fe0bc*/
}



// ==== 0x005FE0D0  sub_5FE0D0  this=-  sig=ida-proto ====
void sub_5FE0D0()
{
  dbl_AC1648 = 0.0174532925199433 * 45.0; /*0x5fe0dc*/
}



// ==== 0x005FE0F0  sub_5FE0F0  this=-  sig=ida-proto ====
void sub_5FE0F0()
{
  dbl_AC1618 = 0.0174532925199433 * 60.0; /*0x5fe0fc*/
}



// ==== 0x005FE110  sub_5FE110  this=-  sig=ida-proto ====
void sub_5FE110()
{
  dbl_AC15F0 = 0.0174532925199433 * 90.0; /*0x5fe11c*/
}



// ==== 0x005FE130  sub_5FE130  this=-  sig=ida-proto ====
__int64 sub_5FE130()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC15F0 - dbl_AC1618); /*0x5fe142*/
  result = Math::RoundToInt(v0 * dbl_AC1610 * 0.5); /*0x5fe156*/
  dword_AC1670 = result; /*0x5fe15b*/
  return result; /*0x5fe160*/
}



// ==== 0x005FE170  sub_5FE170  this=-  sig=ida-proto ====
void sub_5FE170()
{
  dbl_AC1620 = Math::ArcTan((double)dword_AC1670 * 0.00390625); /*0x5fe187*/
}



// ==== 0x005FE1A0  sub_5FE1A0  this=-  sig=ida-proto ====
void sub_5FE1A0()
{
  dbl_AC1638 = Math::ArcTan((double)(2 * dword_AC1670) / dbl_AC1610); /*0x5fe1c2*/
}



// ==== 0x005FE1D0  sub_5FE1D0  this=-  sig=ida-proto ====
__int64 sub_5FE1D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1670) + 0.5); /*0x5fe1eb*/
  dword_AC1664 = result; /*0x5fe1f0*/
  return result; /*0x5fe1f6*/
}



// ==== 0x005FE200  sub_5FE200  this=-  sig=ida-proto ====
int sub_5FE200()
{
  word_AC1608 = 0; /*0x5fe202*/
  word_AC160A = 0; /*0x5fe208*/
  return 0; /*0x5fe20e*/
}



// ==== 0x005FE210  sub_5FE210  this=-  sig=ida-proto ====
int sub_5FE210()
{
  dword_AC1628 = 0; /*0x5fe212*/
  dword_AC162C = 0; /*0x5fe217*/
  dword_AC1630 = 0; /*0x5fe21c*/
  return 0; /*0x5fe221*/
}



// ==== 0x005FE230  sub_5FE230  this=-  sig=ida-proto ====
int sub_5FE230()
{
  dword_AC1660 = 0; /*0x5fe235*/
  dword_AC1658 = 128; /*0x5fe23f*/
  dword_AC165C = 128; /*0x5fe244*/
  return 128; /*0x5fe249*/
}



// ==== 0x005FE250  OverlayTypeClass::OverlayTypeClass  this=OverlayTypeClass  sig=csp ====
_DWORD *__thiscall OverlayTypeClass::OverlayTypeClass(OverlayTypeClass *this, char *Source)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  OverlayTypeClass **v6; // edx

  ObjectTypeClass::ConstructFull((int *)this, Source); /*0x5fe259*/
  this->Strength = 1; /*0x5fe265*/
  *(_DWORD *)&this->Wall = 1; /*0x5fe26b*/
  this->Explodes = 1; /*0x5fe271*/
  this->RadarColor[1] = 1; /*0x5fe277*/
  this->LandType[0] = -1; /*0x5fe280*/
  this->CellAnim = 0; /*0x5fe28a*/
  this->DamageLevels = 0; /*0x5fe290*/
  this->NoUseTileLandType = 0; /*0x5fe296*/
  this->IsVeinholeMonster = 0; /*0x5fe29c*/
  this->IsVeins = 0; /*0x5fe2a2*/
  this->ImageLoaded = 0; /*0x5fe2a8*/
  this->ChainReaction = 0; /*0x5fe2ae*/
  this->Overrides = 0; /*0x5fe2b4*/
  this->DrawFlat = 0; /*0x5fe2ba*/
  this->IsRubble = 0; /*0x5fe2c0*/
  this->IsARock = 0; /*0x5fe2c6*/
  this->RadarColor[0] = 0; /*0x5fe2cc*/
  this->RadarColor[2] = 0; /*0x5fe2d2*/
  this->__tail_2B5[0] = 0; /*0x5fe2d8*/
  this->__tail_2B5[1] = 0; /*0x5fe2de*/
  this->__tail_2B5[2] = 0; /*0x5fe2e4*/
  *((_BYTE *)this + 696) = 0; /*0x5fe2ea*/
  this->ObjectTypeClass = &OverlayTypeClass::`vftable'; /*0x5fe2f1*/
  this->? = &OverlayTypeClass::`vftable'; /*0x5fe2f7*/
  this->? = &OverlayTypeClass::`vftable'; /*0x5fe2fd*/
  this->? = &OverlayTypeClass::`vftable'; /*0x5fe304*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x5fe30b*/
  this->? = 1; /*0x5fe310*/
  this->? = 0; /*0x5fe317*/
  this->? = 1; /*0x5fe31d*/
  this->? = 0; /*0x5fe324*/
  v3 = *(_DWORD *)&stru_A83D50.__pad_3C[4]; /*0x5fe32a*/
  if ( *(int *)&stru_A83D50.__pad_3C[4] < (int)stru_A83D50.SuperClass_field_0x38 /*0x5fe368*/
    || (stru_A83D50.__pad_3C[1] || !stru_A83D50.SuperClass_field_0x38)
    && *(int *)&stru_A83D50.__pad_3C[8] > 0
    && (v4 = (*((unsigned __int8 (__thiscall **)(void **, char *, _DWORD))stru_A83D50.SuperClass_field_0x30 + 2))(
               &stru_A83D50.SuperClass_field_0x30,
               (char *)stru_A83D50.SuperClass_field_0x38 + *(_DWORD *)&stru_A83D50.__pad_3C[8],
               0) == 0,
        v3 = *(_DWORD *)&stru_A83D50.__pad_3C[4],
        !v4) )
  {
    *(_DWORD *)&stru_A83D50.__pad_3C[4] = v3 + 1; /*0x5fe36d*/
    *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v3) = this; /*0x5fe377*/
    v3 = *(_DWORD *)&stru_A83D50.__pad_3C[4]; /*0x5fe37a*/
  }
  v5 = 0; /*0x5fe37f*/
  if ( v3 <= 0 ) /*0x5fe383*/
  {
LABEL_11:
    this->LandType[0] = -1; /*0x5fe397*/
    return &this->ObjectTypeClass; /*0x5fe3a0*/
  }
  else
  {
    v6 = *(OverlayTypeClass ***)stru_A83D50.__pad_34; /*0x5fe385*/
    while ( *v6 != this ) /*0x5fe38d*/
    {
      ++v5; /*0x5fe38f*/
      ++v6; /*0x5fe390*/
      if ( v5 >= v3 ) /*0x5fe395*/
        goto LABEL_11; /*0x5fe395*/
    }
    this->LandType[0] = v5; /*0x5fe3a7*/
    return &this->ObjectTypeClass; /*0x5fe3ad*/
  }
}



// ==== 0x005FE4C0  OverlayTypeClass::GetTile  this=OverlayTypeClass  sig=csp ====
int *__stdcall OverlayTypeClass::GetTile(OverlayTypeClass *this)
{
  if ( (byte_AC15E8 & 1) == 0 ) /*0x5fe4cb*/
  {
    byte_AC15E8 |= 1u; /*0x5fe4e6*/
    dword_AC1640 = 0; /*0x5fe4ec*/
    dword_AC1644 = 2147450879; /*0x5fe504*/
    atexit(nullsub_213); /*0x5fe50a*/
  }
  return &dword_AC1640; /*0x5fe518*/
}



// ==== 0x005FE520  nullsub_213  this=-  sig=ida-proto ====
void __cdecl nullsub_213()
{
  ; /*0x5fe520*/
}



// ==== 0x005FE530  OverlayTypeClass::GetType  this=OverlayTypeClass  sig=csp ====
bool __thiscall OverlayTypeClass::GetType(OverlayTypeClass *this, __int16 *a2, int a3)
{
  Object *v4; // eax

  v4 = (Object *)__2_YAPAXI_Z(0xB0u); /*0x5fe538*/
  return v4 && Object::SpawnAtCell(v4, (int)this, a2, -1); /*0x5fe559*/
}



// ==== 0x005FE570  OverlayTypeClass::GetDamage  this=OverlayTypeClass  sig=csp ====
void *__thiscall OverlayTypeClass::GetDamage(OverlayTypeClass *this, int a2)
{
  Object *v3; // eax

  v3 = (Object *)__2_YAPAXI_Z(0xB0u); /*0x5fe578*/
  if ( v3 ) /*0x5fe582*/
    return Object::SpawnAtCell(v3, (int)this, &word_AC1608, -1); /*0x5fe58e*/
  else
    return 0; /*0x5fe597*/
}



// ==== 0x005FE5A0  OverlayTypeClass::GetLandType  this=OverlayTypeClass  sig=csp ====
void __thiscall OverlayTypeClass::GetLandType(OverlayTypeClass *this, _DWORD *a2, int *a3, unsigned int a4)
{
  char *v4; // edx
  int v5; // eax
  int v6[2]; // [esp+8h] [ebp-8h] BYREF

  v4 = (char *)DSurface_ViewBounds.field_4 + a2[1] + 15; /*0x5fe5c1*/
  v6[0] = DSurface_ViewBounds.field_0 + *a2 + 30; /*0x5fe5c4*/
  v6[1] = (int)v4; /*0x5fe5c8*/
  v5 = (*((int (__thiscall **)(OverlayTypeClass *))this->ObjectTypeClass + 39))(this); /*0x5fe5f3*/
  DrawToSurfaceSHP( /*0x5fe606*/
    (int)g_DSurface_Hidden_2,
    *(int *)&stru_87F5F0.__pad_58[112],
    v5,
    a4,
    v6,
    a3,
    1536,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
}



// ==== 0x005FE620  LoadBuildingTypeClassSHPs  this=-  sig=ida-proto ====
int __fastcall LoadBuildingTypeClassSHPs(int a1)
{
  int result; // eax
  int v2; // ebp
  int v4; // esi
  char v5; // al
  int v6; // eax
  int v7; // eax
  char Buffer[512]; // [esp+Ch] [ebp-200h] BYREF

  result = dword_A83D90; /*0x5fe620*/
  v2 = 0; /*0x5fe62f*/
  if ( dword_A83D90 > 0 ) /*0x5fe636*/
  {
    while ( 1 ) /*0x5fe642*/
    {
      v4 = *((_DWORD *)&dword_A83D84->TechnoTypeClass + v2); /*0x5fe642*/
      v5 = *(_BYTE *)(v4 + 556); /*0x5fe64d*/
      if ( *(_BYTE *)(v4 + 687) ) /*0x5fe645*/
      {
        if ( (v5 || *(_BYTE *)(v4 + 567)) && *(_DWORD *)(v4 + 164) && *(_BYTE *)(v4 + 168) ) /*0x5fe737*/
        {
          __3_YAXPAX_Z(*(void **)(v4 + 164)); /*0x5fe740*/
          *(_DWORD *)(v4 + 164) = 0; /*0x5fe748*/
          *(_BYTE *)(v4 + 168) = 0; /*0x5fe74e*/
        }
        goto LABEL_14; /*0x5fe74e*/
      }
      if ( !v5 ) /*0x5fe65b*/
        break; /*0x5fe65b*/
      _makepath(Buffer, 0, 0, (const char *)(v4 + 504), (const char *)&off_7E1BC6 + 112 * a1); /*0x5fe67e*/
      v6 = SearchMIXFile(Buffer, 1); /*0x5fe68c*/
      *(_DWORD *)(v4 + 164) = v6; /*0x5fe693*/
      if ( !v6 ) /*0x5fe699*/
        goto LABEL_5; /*0x5fe699*/
LABEL_14:
      result = dword_A83D90; /*0x5fe754*/
      if ( ++v2 >= dword_A83D90 ) /*0x5fe75c*/
        return result; /*0x5fe75c*/
    }
    if ( !*(_BYTE *)(v4 + 567) ) /*0x5fe6be*/
      goto LABEL_14; /*0x5fe6be*/
    _makepath(Buffer, 0, 0, (const char *)(v4 + 504), Ext); /*0x5fe6dd*/
    TheaterObjectTypeClassSpecificID(Buffer, a1); /*0x5fe6eb*/
    v7 = SearchMIXFile(Buffer, 1); /*0x5fe6f6*/
    *(_DWORD *)(v4 + 164) = v7; /*0x5fe6fd*/
    if ( v7 ) /*0x5fe703*/
      goto LABEL_14; /*0x5fe703*/
LABEL_5:
    ObjectTypeClass::SetRTTI71(Buffer); /*0x5fe69f*/
    *(_DWORD *)(v4 + 164) = SearchMIXFile(Buffer, 1); /*0x5fe6b3*/
    goto LABEL_14; /*0x5fe6b9*/
  }
  return result; /*0x5fe763*/
}



// ==== 0x005FE770  OverlayTypeClass::LoadFromINI  this=OverlayTypeClass  sig=csp ====
char __thiscall OverlayTypeClass::LoadFromINI(OverlayTypeClass *this, unsigned __int8 ***a2)
{
  AnimTypeClass *INIString; // eax
  int v4; // ecx
  int Int_Overwrite; // eax
  char Bool_Overwrite; // al
  char IsVeins; // cl
  char v8; // al
  char v9; // al
  char v10; // cl
  char v11; // al
  int DamageLevels; // ebp
  _DWORD *v13; // eax
  AnimTypeClass *CellAnim; // eax
  int Coord; // eax
  char v16; // al
  char ChainReaction; // cl
  char v18; // al
  char v19; // al
  char v20; // cl
  char v21; // al
  char NoUseTileLandType; // [esp-Ch] [ebp-298h]
  char ImageLoaded; // [esp-Ch] [ebp-298h]
  char Explodes; // [esp-Ch] [ebp-298h]
  char Overrides; // [esp-Ch] [ebp-298h]
  char v27; // [esp-Ch] [ebp-298h]
  int v28; // [esp+8h] [ebp-284h] BYREF
  char Destination[128]; // [esp+Ch] [ebp-280h] BYREF
  char Buffer[512]; // [esp+8Ch] [ebp-200h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x5fe783*/
  if ( !ObjectTypeClass::LoadFromINI((ObjectTypeClass *)this, a2) ) /*0x5fe78b*/
    return 0; /*0x5fea1f*/
  INIString = (AnimTypeClass *)OverlayTypeClass::ReadINIString( /*0x5fe7ac*/
                                 (OverlayTypeClass *)a2,
                                 (unsigned __int8 *)this->?,
                                 aLand,
                                 (unsigned int)this->CellAnim);
  v4 = *(_DWORD *)&this->Wall; /*0x5fe7b1*/
  this->CellAnim = INIString; /*0x5fe7b7*/
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)this->?, aStrength, v4); /*0x5fe7c6*/
  NoUseTileLandType = this->NoUseTileLandType; /*0x5fe7d3*/
  *(_DWORD *)&this->Wall = Int_Overwrite; /*0x5fe7da*/
  this->NoUseTileLandType = INIClass::ReadBool_Overwrite( /*0x5fe7e5*/
                              (int *)a2,
                              (unsigned __int8 *)this->?,
                              g_INI_Key_Wall,
                              NoUseTileLandType);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5fe7fa*/
                     (int *)a2,
                     (unsigned __int8 *)this->?,
                     (unsigned __int8 *)g_INI_Key_Tiberium,
                     this->IsVeinholeMonster);
  IsVeins = this->IsVeins; /*0x5fe7ff*/
  this->IsVeinholeMonster = Bool_Overwrite; /*0x5fe805*/
  v8 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aCrate, IsVeins); /*0x5fe814*/
  ImageLoaded = this->ImageLoaded; /*0x5fe821*/
  this->IsVeins = v8; /*0x5fe828*/
  this->ImageLoaded = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aCratetrigger, ImageLoaded); /*0x5fe833*/
  v9 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aExplodes, this->IsRubble); /*0x5fe848*/
  v10 = this->RadarColor[0]; /*0x5fe84d*/
  this->IsRubble = v9; /*0x5fe853*/
  v11 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aOverrides, v10); /*0x5fe862*/
  DamageLevels = this->DamageLevels; /*0x5fe867*/
  this->RadarColor[0] = v11; /*0x5fe884*/
  if ( INIClass::GetString( /*0x5fe88a*/
         (INIClass *)a2,
         (unsigned __int8 *)this->?,
         aCellanim,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v13 = AnimTypeClass::FindOrCreate(Destination); /*0x5fe897*/
  }
  else
  {
    v13 = (_DWORD *)DamageLevels; /*0x5fe89e*/
  }
  this->DamageLevels = (int)v13; /*0x5fe8a0*/
  this->Strength = INIClass::ReadInt_Overwrite( /*0x5fe8c3*/
                     (bool *)&DSurface_ViewBounds.__pad_FC[228],
                     (unsigned __int8 *)this->?,
                     aDamagelevels,
                     this->Strength);
  if ( this->IsVeinholeMonster ) /*0x5fe8c9*/
  {
    CellAnim = this->CellAnim; /*0x5fe8d3*/
    this->?[0] = 6; /*0x5fe8d9*/
    if ( !CellAnim ) /*0x5fe8e5*/
      this->CellAnim = (AnimTypeClass *)5; /*0x5fe8e7*/
  }
  if ( !this->? && !this->DrawFlat ) /*0x5fe8fb*/
  {
    _makepath(Buffer, 0, 0, this->?, Ext); /*0x5fe917*/
    this->? = (SHPStruct *)SearchMIXFile(Buffer, 1); /*0x5fe92d*/
  }
  Coord = INIClass::GetCoord( /*0x5fe947*/
            (INIClass *)a2,
            (int)&v28,
            (unsigned __int8 *)this->?,
            aRadarcolor,
            (unsigned __int8 *)&this->__tail_2B5[1]);
  *(_WORD *)&this->__tail_2B5[1] = *(_WORD *)Coord; /*0x5fe94f*/
  Explodes = this->Explodes; /*0x5fe95e*/
  *((_BYTE *)this + 696) = *(_BYTE *)(Coord + 2); /*0x5fe965*/
  v16 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aNousetilelandt, Explodes); /*0x5fe968*/
  ChainReaction = this->ChainReaction; /*0x5fe96d*/
  this->Explodes = v16; /*0x5fe973*/
  v18 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aIsveinholemons, ChainReaction); /*0x5fe982*/
  Overrides = this->Overrides; /*0x5fe98f*/
  this->ChainReaction = v18; /*0x5fe996*/
  this->Overrides = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aIsveins, Overrides); /*0x5fe9a1*/
  v19 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aChainreaction, this->IsARock); /*0x5fe9b6*/
  v20 = this->RadarColor[1]; /*0x5fe9bb*/
  this->IsARock = v19; /*0x5fe9c1*/
  v21 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aDrawflat, v20); /*0x5fe9d0*/
  v27 = this->__tail_2B5[0]; /*0x5fe9dd*/
  this->RadarColor[1] = v21; /*0x5fe9e4*/
  this->__tail_2B5[0] = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aIsarock, v27); /*0x5fe9ef*/
  this->RadarColor[2] = INIClass::ReadBool_Overwrite( /*0x5fea0a*/
                          (int *)a2,
                          (unsigned __int8 *)this->?,
                          aIsrubble,
                          this->RadarColor[2]);
  return 1; /*0x5fea11*/
}



// ==== 0x005FEA30  OverlayTypeClass::g_var_4f9ac2  this=OverlayTypeClass  sig=csp ====
_DWORD *__stdcall OverlayTypeClass::g_var_4f9ac2(OverlayTypeClass *this, _DWORD *a2)
{
  this->ObjectTypeClass = (void *)*a2; /*0x5fea3d*/
  this->? = (void *)a2[1]; /*0x5fea42*/
  this->? = (void *)a2[2]; /*0x5fea49*/
  return &this->ObjectTypeClass; /*0x5fea45*/
}



// ==== 0x005FEA50  OverlayTypeClass::PowerDrainUpdate  this=OverlayTypeClass  sig=csp ====
int __thiscall OverlayTypeClass::PowerDrainUpdate(OverlayTypeClass *this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x5fea59*/
  Power::TimerProcess(this->LandType[0]); /*0x5fea67*/
  Power::TimerProcess((int)this->CellAnim); /*0x5fea75*/
  Power::TimerProcess(this->Strength); /*0x5fea83*/
  Power::TimerProcess(*(_DWORD *)&this->Wall); /*0x5fea91*/
  LOBYTE(v3) = this->NoUseTileLandType; /*0x5fea96*/
  Power::FlagProcess((Power *)a2, v3); /*0x5fea9f*/
  LOBYTE(v4) = this->IsVeinholeMonster; /*0x5feaa4*/
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x5feaad*/
  LOBYTE(v5) = this->IsVeins; /*0x5feab2*/
  Power::FlagProcess((Power *)a2, v5); /*0x5feabb*/
  LOBYTE(v6) = this->ImageLoaded; /*0x5feac0*/
  Power::FlagProcess((Power *)a2, v6); /*0x5feac9*/
  LOBYTE(v7) = this->IsRubble; /*0x5feace*/
  return Power::FlagProcess((Power *)a2, v7); /*0x5feadc*/
}



// ==== 0x005FEAF0  OverlayTypeClass::SaveLoad_Prefix  this=OverlayTypeClass  sig=csp ====
int __stdcall OverlayTypeClass::SaveLoad_Prefix(OverlayTypeClass *this, int a2)
{
  int result; // eax
  char v3[513]; // [esp+7h] [ebp-201h] BYREF

  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2); /*0x5feb04*/
  if ( result >= 0 ) /*0x5feb0b*/
  {
    if ( this ) /*0x5feb13*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)this, (int)v3); /*0x5feb1c*/
      this->ObjectTypeClass = &OverlayTypeClass::`vftable'; /*0x5feb21*/
      this->? = &OverlayTypeClass::`vftable'; /*0x5feb27*/
      this->? = &OverlayTypeClass::`vftable'; /*0x5feb2e*/
      this->? = &OverlayTypeClass::`vftable'; /*0x5feb35*/
    }
    VoxelAnimType::LoadAnim((char *)this); /*0x5feb3e*/
    ObjectTypeClass::Load2DArt((char *)this); /*0x5feb45*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->DamageLevels); /*0x5feb56*/
    if ( !this->DrawFlat ) /*0x5feb5b*/
    {
      if ( this->? ) /*0x5feb69*/
      {
        _makepath(&v3[1], 0, 0, this->?, (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId); /*0x5feba1*/
      }
      else
      {
        _makepath(&v3[1], 0, 0, this->?, Ext); /*0x5febc0*/
        TheaterObjectTypeClassSpecificID(&v3[1], dword_A8B230[130].uniqueId); /*0x5febd7*/
      }
      if ( !this->? ) /*0x5febdc*/
        this->? = (SHPStruct *)SearchMIXFile(&v3[1], 1); /*0x5febf1*/
    }
    return 0; /*0x5febf7*/
  }
  return result; /*0x5febf9*/
}



// ==== 0x005FEC10  OverlayTypeClass::SaveLoad_Prefix_0  this=OverlayTypeClass  sig=csp ====
int __stdcall OverlayTypeClass::SaveLoad_Prefix_0(OverlayTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, a2, a3); /*0x5fec1f*/
  if ( result >= 0 ) /*0x5fec26*/
    return 0; /*0x5fec28*/
  return result; /*0x5fec2a*/
}



// ==== 0x005FEC30  OverlayTypeClass::GetClassIdentifier  this=OverlayTypeClass  sig=csp ====
int __stdcall OverlayTypeClass::GetClassIdentifier(OverlayTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x5fec36*/
    return -2147467261; /*0x5fec38*/
  *a2 = 1525862009; /*0x5fec46*/
  a2[1] = 298976820; /*0x5fec4e*/
  a2[2] = 1610654892; /*0x5fec57*/
  a2[3] = unk_7E960C; /*0x5fec60*/
  return 0; /*0x5fec3d*/
}



// ==== 0x005FEC70  BuildingTypeClass::FindOrCreate2  this=AbstractTypeClass  sig=csp ====
_DWORD *__thiscall BuildingTypeClass::FindOrCreate2(char *Source)
{
  int v2; // esi
  OverlayTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x5fec8c*/
    return 0; /*0x5fecef*/
  v2 = 0; /*0x5fec9d*/
  if ( *(int *)&stru_A83D50.__pad_3C[4] <= 0 ) /*0x5feca1*/
  {
LABEL_6:
    v3 = (OverlayTypeClass *)__2_YAPAXI_Z(0x2BCu); /*0x5fecc6*/
    if ( v3 ) /*0x5fecd5*/
      return OverlayTypeClass::OverlayTypeClass(v3, Source); /*0x5fece1*/
    return 0; /*0x5fecd5*/
  }
  while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v2) + 36), Source) ) /*0x5fecba*/
  {
    if ( ++v2 >= *(int *)&stru_A83D50.__pad_3C[4] ) /*0x5fecc4*/
      goto LABEL_6; /*0x5fecc4*/
  }
  return *(_DWORD **)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v2); /*0x5fecdf*/
}



// ==== 0x005FED00  OverlayTypeClass::GetRadarColor  this=OverlayTypeClass  sig=csp ====
int __thiscall OverlayTypeClass::GetRadarColor(OverlayTypeClass *this, int a2, unsigned int a3)
{
  MixFileClass *v4; // eax
  int DamageLevels; // ecx
  int v6; // esi
  int v7; // eax
  char v8; // cl
  int PixelData; // ecx
  __int16 v11; // [esp+4h] [ebp-4h]

  v4 = (MixFileClass *)(*((int (__thiscall **)(OverlayTypeClass *))this->ObjectTypeClass + 39))(this); /*0x5fed06*/
  if ( v4 /*0x5fed28*/
    || (DamageLevels = this->DamageLevels) != 0
    && (v4 = (MixFileClass *)(*(int (__thiscall **)(int))(*(_DWORD *)DamageLevels + 156))(DamageLevels)) != 0 )
  {
    v6 = this->LandType[0]; /*0x5fed2e*/
    if ( (v6 < 127 || v6 > 138) && (v6 < 147 || v6 > 158) ) /*0x5fed4f*/
    {
      PixelData = MixFileClass::GetPixelData(v4, (int)&a3, a3); /*0x5feda2*/
      *(_WORD *)a2 = *(_WORD *)PixelData; /*0x5fedad*/
      *(_BYTE *)(a2 + 2) = *(_BYTE *)(PixelData + 2); /*0x5fedb4*/
      return a2; /*0x5feda4*/
    }
    else
    {
      v7 = MixFileClass::GetPixelData(v4, (int)&a3, a3); /*0x5fed5d*/
      v11 = *(_WORD *)v7; /*0x5fed67*/
      v8 = HIBYTE(*(_WORD *)v7); /*0x5fed6f*/
      BYTE1(a3) = *(_BYTE *)(v7 + 2); /*0x5fed73*/
      LOBYTE(a3) = v11; /*0x5fed7b*/
      *(_WORD *)a2 = a3; /*0x5fed86*/
      *(_BYTE *)(a2 + 2) = v8; /*0x5fed8a*/
      return a2; /*0x5fed77*/
    }
  }
  else
  {
    *(_WORD *)a2 = 0; /*0x5fedd2*/
    *(_BYTE *)(a2 + 2) = 0; /*0x5fedd6*/
    return a2; /*0x5fedbb*/
  }
}



// ==== 0x005FEDE0  OverlayTypeClass::GetCategory  this=OverlayTypeClass  sig=csp ====
void *__thiscall OverlayTypeClass::GetCategory(OverlayTypeClass *this)
{
  void *result; // eax
  SHPStruct *v3; // edi
  CCFileClass v4; // [esp+4h] [ebp-26Ch] BYREF
  int v5[3]; // [esp+5Ch] [ebp-214h] BYREF
  int v6; // [esp+68h] [ebp-208h]
  char Buffer[512]; // [esp+70h] [ebp-200h] BYREF

  result = this->?; /*0x5fede9*/
  if ( !result && this->DrawFlat ) /*0x5fedf7*/
  {
    Debug::Log(); /*0x5fee0e*/
    if ( this->? ) /*0x5fee13*/
    {
      _makepath(Buffer, 0, 0, this->?, (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId); /*0x5fee4f*/
    }
    else if ( this->? ) /*0x5fee59*/
    {
      _makepath(Buffer, 0, 0, this->?, Ext); /*0x5fee78*/
      TheaterObjectTypeClassSpecificID(Buffer, dword_A8B230[130].uniqueId); /*0x5fee90*/
    }
    CCFileClass::Construct(&v4, Buffer); /*0x5fee9f*/
    v3 = (SHPStruct *)CCFileClass::ReadEntireFile(&v4); /*0x5feead*/
    this->? = v3; /*0x5feeb1*/
    if ( v3 ) /*0x5feeb7*/
      this->? = 1; /*0x5feeb9*/
    *(_DWORD *)v4.CDFileClass = &CCFileClass::`vftable'; /*0x5feec4*/
    v6 = 0; /*0x5feecc*/
    Vector::Clear((int)v5); /*0x5feed4*/
    *(_DWORD *)v4.CDFileClass = &off_7E1668; /*0x5feedd*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v4); /*0x5feee5*/
    return v3; /*0x5feeea*/
  }
  return result; /*0x5feeed*/
}



// ==== 0x005FEF00  OverlayTypeClass::GetTypeIdentifier  this=OverlayTypeClass  sig=csp ====
int OverlayTypeClass::GetTypeIdentifier(OverlayTypeClass *this)
{
  return 21; /*0x5fef05*/
}



// ==== 0x005FEF10  OverlayTypeClass::GetObjectSize  this=OverlayTypeClass  sig=csp ====
int OverlayTypeClass::GetObjectSize(OverlayTypeClass *this)
{
  return 700; /*0x5fef15*/
}



// ==== 0x005FEF20  OverlayTypeClass::GetAuxField  this=OverlayTypeClass  sig=csp ====
int __thiscall OverlayTypeClass::GetAuxField(OverlayTypeClass *this)
{
  return this->LandType[0]; /*0x5fef26*/
}



// ==== 0x005FEF30  OverlayTypeClass::ddtor  this=OverlayTypeClass  sig=csp ====
void **__thiscall OverlayTypeClass::ddtor(OverlayTypeClass *this, char a2)
{
  int v3; // eax
  OverlayTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->ObjectTypeClass = &OverlayTypeClass::`vftable'; /*0x5fef36*/
  this->? = &OverlayTypeClass::`vftable'; /*0x5fef3c*/
  this->? = &OverlayTypeClass::`vftable'; /*0x5fef43*/
  this->? = &OverlayTypeClass::`vftable'; /*0x5fef4a*/
  AbstractClass::AnnounceExpiredPointer(&this->ObjectTypeClass, 1); /*0x5fef51*/
  v5 = this; /*0x5fef66*/
  v3 = (*((int (__thiscall **)(void **, OverlayTypeClass **))stru_A83D50.SuperClass_field_0x30 + 4))( /*0x5fef6a*/
         &stru_A83D50.SuperClass_field_0x30,
         &v5);
  if ( v3 != -1 && v3 < *(int *)&stru_A83D50.__pad_3C[4] ) /*0x5fef7a*/
  {
    --*(_DWORD *)&stru_A83D50.__pad_3C[4]; /*0x5fef7f*/
    for ( ; /*0x5fef85*/
          v3 < *(int *)&stru_A83D50.__pad_3C[4];
          *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34
                                                                                + 4 * v3) )
    {
      ++v3; /*0x5fef8d*/
    }
  }
  ObjectTypeClass::Destruct((int)this); /*0x5fefa1*/
  if ( (a2 & 1) != 0 ) /*0x5fefab*/
    __3_YAXPAX_Z(this); /*0x5fefae*/
  return &this->ObjectTypeClass; /*0x5fefb8*/
}



// ==== 0x005FEFC0  sub_5FEFC0  this=-  sig=ida-proto ====
void sub_5FEFC0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5fefcc*/
  dbl_AC17D8 = Math::Sqrt(v0 + v0); /*0x5fefde*/
}



// ==== 0x005FEFF0  sub_5FEFF0  this=-  sig=ida-proto ====
void sub_5FEFF0()
{
  dbl_AC1828 = dbl_AC17D8 / 60.0; /*0x5feffc*/
}



// ==== 0x005FF010  sub_5FF010  this=-  sig=ida-proto ====
void sub_5FF010()
{
  dbl_AC1810 = 1.0 / dbl_AC1828; /*0x5ff01c*/
}



// ==== 0x005FF030  sub_5FF030  this=-  sig=ida-proto ====
void sub_5FF030()
{
  dbl_AC1808 = 0.0174532925199433 * 45.0; /*0x5ff03c*/
}



// ==== 0x005FF050  sub_5FF050  this=-  sig=ida-proto ====
void sub_5FF050()
{
  dbl_AC17E0 = 0.0174532925199433 * 60.0; /*0x5ff05c*/
}



// ==== 0x005FF070  sub_5FF070  this=-  sig=ida-proto ====
void sub_5FF070()
{
  dbl_AC1690 = 0.0174532925199433 * 90.0; /*0x5ff07c*/
}



// ==== 0x005FF090  sub_5FF090  this=-  sig=ida-proto ====
__int64 sub_5FF090()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC1690 - dbl_AC17E0); /*0x5ff0a2*/
  result = Math::RoundToInt(v0 * dbl_AC17D8 * 0.5); /*0x5ff0b6*/
  dword_AC1830 = result; /*0x5ff0bb*/
  return result; /*0x5ff0c0*/
}



// ==== 0x005FF0D0  sub_5FF0D0  this=-  sig=ida-proto ====
void sub_5FF0D0()
{
  dbl_AC17E8 = Math::ArcTan((double)dword_AC1830 * 0.00390625); /*0x5ff0e7*/
}



// ==== 0x005FF100  sub_5FF100  this=-  sig=ida-proto ====
void sub_5FF100()
{
  dbl_AC1800 = Math::ArcTan((double)(2 * dword_AC1830) / dbl_AC17D8); /*0x5ff122*/
}



// ==== 0x005FF130  sub_5FF130  this=-  sig=ida-proto ====
__int64 sub_5FF130()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1830) + 0.5); /*0x5ff14b*/
  dword_AC1824 = result; /*0x5ff150*/
  return result; /*0x5ff156*/
}



// ==== 0x005FF160  sub_5FF160  this=-  sig=ida-proto ====
int sub_5FF160()
{
  word_AC17D0 = 0; /*0x5ff162*/
  word_AC17D2 = 0; /*0x5ff168*/
  return 0; /*0x5ff16e*/
}



// ==== 0x005FF170  sub_5FF170  this=-  sig=ida-proto ====
int sub_5FF170()
{
  dword_AC17F0 = 0; /*0x5ff172*/
  dword_AC17F4 = 0; /*0x5ff177*/
  dword_AC17F8 = 0; /*0x5ff17c*/
  return 0; /*0x5ff181*/
}



// ==== 0x005FF190  sub_5FF190  this=-  sig=ida-proto ====
int sub_5FF190()
{
  dword_AC1820 = 0; /*0x5ff195*/
  dword_AC1818 = 128; /*0x5ff19f*/
  dword_AC181C = 128; /*0x5ff1a4*/
  return 128; /*0x5ff1a9*/
}



// ==== 0x005FF1B0  sub_5FF1B0  this=-  sig=ida-proto ====
int sub_5FF1B0()
{
  dword_AC17C0 = 0; /*0x5ff1b2*/
  dword_AC17C4 = 0; /*0x5ff1b7*/
  dword_AC17C8 = 0; /*0x5ff1bc*/
  dword_AC17CC = 0; /*0x5ff1c1*/
  return 0; /*0x5ff1c6*/
}



// ==== 0x005FF1D0  sub_5FF1D0  this=-  sig=ida-proto ====
int sub_5FF1D0()
{
  dword_AC167C = 0; /*0x5ff1d7*/
  dword_AC1680 = 0; /*0x5ff1dc*/
  byte_AC1684 = 1; /*0x5ff1e1*/
  byte_AC1685 = 0; /*0x5ff1e8*/
  dword_AC1678 = (int)&DynamicVectorClass<SpotLightClass *>::`vftable'; /*0x5ff1ed*/
  dword_AC168C = 10; /*0x5ff1f7*/
  dword_AC1688 = 0; /*0x5ff201*/
  return atexit(sub_5FF210); /*0x5ff20c*/
}



// ==== 0x005FF210  sub_5FF210  this=-  sig=ida-proto ====
void __cdecl sub_5FF210()
{
  dword_AC1678 = (int)&VectorClass<SpotLightClass *>::`vftable'; /*0x5ff218*/
  if ( dword_AC167C && byte_AC1685 ) /*0x5ff22c*/
  {
    __3_YAXPAX_Z(dword_AC167C); /*0x5ff22f*/
    dword_AC167C = 0; /*0x5ff237*/
  }
  byte_AC1685 = 0; /*0x5ff23d*/
  dword_AC1680 = 0; /*0x5ff243*/
}



// ==== 0x005FF250  ObjectClass::RegisterInArray  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ObjectClass::RegisterInArray(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax

  this->AbstractClass = (void *)a2; /*0x5ff25d*/
  this->? = (void *)a3; /*0x5ff263*/
  this->? = 0; /*0x5ff268*/
  this->? = 0; /*0x5ff26b*/
  this->? = (void *)a4; /*0x5ff26e*/
  this->? = a5; /*0x5ff275*/
  if ( dword_AC1688 < dword_AC1680 /*0x5ff2aa*/
    || (byte_AC1685 || !dword_AC1680)
    && dword_AC168C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_AC1678 + 8))(
         &dword_AC1678,
         dword_AC1680 + dword_AC168C,
         0) )
  {
    v6 = dword_AC1688++; /*0x5ff2b7*/
    *((_DWORD *)dword_AC167C + v6) = this; /*0x5ff2c6*/
  }
  return &this->AbstractClass; /*0x5ff2cb*/
}



// ==== 0x005FF2D0  BuildingLightQueue::RemoveEntry  this=BuildingLightQueue  sig=csp ====
int __thiscall BuildingLightQueue::RemoveEntry(BuildingLightQueue *this)
{
  int result; // eax
  BuildingLightQueue *v2; // [esp+0h] [ebp-4h] BYREF

  v2 = this; /*0x5ff2db*/
  result = (*(int (__thiscall **)(int *, BuildingLightQueue **))(dword_AC1678 + 16))(&dword_AC1678, &v2); /*0x5ff2e5*/
  if ( result != -1 && result < dword_AC1688 && result < --dword_AC1688 ) /*0x5ff300*/
  {
    do /*0x5ff318*/
    {
      ++result; /*0x5ff308*/
      *((_DWORD *)dword_AC167C + result - 1) = *((_DWORD *)dword_AC167C + result); /*0x5ff30c*/
    }
    while ( result < dword_AC1688 ); /*0x5ff318*/
  }
  return result; /*0x5ff31b*/
}



// ==== 0x005FF390  ObjectClass::ProcessHarvesterLogic  this=ObjectClass  sig=csp ====
void ProcessHarvesterLogic(ObjectClass *this)
{
  int i; // edi
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // [esp+4h] [ebp-4h] BYREF

  for ( i = dword_AC1688 - 1; i >= 0; --i ) /*0x5ff39c*/
  {
    v2 = (_DWORD *)*((_DWORD *)dword_AC167C + i); /*0x5ff3a5*/
    v3 = v2[3] + 8; /*0x5ff3ae*/
    v2[3] = v3; /*0x5ff3b0*/
    if ( v3 >= 80 && v2 ) /*0x5ff3ba*/
    {
      v5 = v2; /*0x5ff3cb*/
      v4 = (*(int (__thiscall **)(int *, _DWORD **))(dword_AC1678 + 16))(&dword_AC1678, &v5); /*0x5ff3cf*/
      if ( v4 != -1 && v4 < dword_AC1688 && v4 < --dword_AC1688 ) /*0x5ff3ea*/
      {
        do /*0x5ff402*/
        {
          ++v4; /*0x5ff3f2*/
          *((_DWORD *)dword_AC167C + v4 - 1) = *((_DWORD *)dword_AC167C + v4); /*0x5ff3f6*/
        }
        while ( v4 < dword_AC1688 ); /*0x5ff402*/
      }
      __3_YAXPAX_Z(v2); /*0x5ff405*/
    }
  }
}



// ==== 0x005FF420  ObjectClass::GenerateRangeRingTextures  this=ObjectClass  sig=csp ====
char *GenerateRangeRingTextures(ObjectClass *this)
{
  int v1; // ebx
  int *v2; // ebp
  Surface *v3; // eax
  Surface *v4; // esi
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int j; // esi
  int v9; // ecx
  Surface **v10; // edi
  int v11; // ebp
  Surface *v12; // eax
  Surface *v13; // esi
  int v14; // eax
  int k; // esi
  Surface *v16; // ecx
  char *result; // eax
  unsigned __int16 v18; // cx
  int v19; // [esp+2Eh] [ebp-54h] BYREF
  int i; // [esp+32h] [ebp-50h]
  int v21; // [esp+36h] [ebp-4Ch]
  int v22; // [esp+3Eh] [ebp-44h] BYREF
  int v23; // [esp+42h] [ebp-40h] BYREF
  int v24; // [esp+46h] [ebp-3Ch]
  int v25; // [esp+4Ah] [ebp-38h]
  int v26; // [esp+4Eh] [ebp-34h]
  int v27; // [esp+52h] [ebp-30h] BYREF
  int v28; // [esp+56h] [ebp-2Ch]
  int v29; // [esp+5Ah] [ebp-28h]
  int v30; // [esp+5Eh] [ebp-24h]
  XSurface v31; // [esp+62h] [ebp-20h] BYREF
  int v32; // [esp+72h] [ebp-10h]
  int v33[3]; // [esp+76h] [ebp-Ch] BYREF

  v1 = 0; /*0x5ff429*/
  if ( !byte_AC1834 ) /*0x5ff430*/
  {
    v2 = dword_AC1698; /*0x5ff43b*/
    for ( i = 1; i < 129; i += 2 ) /*0x5ff440*/
    {
      if ( !*v2 ) /*0x5ff444*/
      {
        v3 = (Surface *)__2_YAPAXI_Z(0x20u); /*0x5ff44b*/
        v4 = v3; /*0x5ff450*/
        if ( v3 ) /*0x5ff457*/
        {
          Surface::Construct(v3, 256, 128); /*0x5ff465*/
          *(_DWORD *)v4[1].__pad_0 = 0; /*0x5ff46d*/
          *(_DWORD *)v4->__pad_0 = &XSurface_Vtable; /*0x5ff476*/
          v4[1].Width = 1; /*0x5ff47c*/
          Buffer::Init((Buffer *)&v4[1].Height, 0, 0x8000); /*0x5ff47f*/
          *(_DWORD *)v4->__pad_0 = &BSurface_Vtable; /*0x5ff484*/
        }
        else
        {
          v4 = 0; /*0x5ff48c*/
        }
        *v2 = (int)v4; /*0x5ff48e*/
      }
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)*v2 + 24))(*v2, 0); /*0x5ff497*/
      Surface::Construct((Surface *)&v31, 256, 256); /*0x5ff4a8*/
      v31.LockCount = 0; /*0x5ff4b1*/
      *(_DWORD *)v31.Surface = &XSurface_Vtable; /*0x5ff4bb*/
      v32 = 1; /*0x5ff4c3*/
      Buffer::Init((Buffer *)v33, 0, 0x10000); /*0x5ff4c7*/
      *(_DWORD *)v31.Surface = &BSurface_Vtable; /*0x5ff4d0*/
      XSurface::Fill(&v31, 0); /*0x5ff4d9*/
      v5 = i; /*0x5ff4de*/
      if ( i > 0 ) /*0x5ff4e6*/
      {
        v6 = 12; /*0x5ff4e8*/
        do /*0x5ff52d*/
        {
          v7 = v6; /*0x5ff4f3*/
          if ( v6 > 255 ) /*0x5ff4f5*/
            v7 = 255; /*0x5ff4f7*/
          Draw::Ellipse((Draw *)&v31, 128, 128, v5, 0, 0, 255, 255, v7); /*0x5ff520*/
          v5 -= 2; /*0x5ff525*/
          v6 += 4; /*0x5ff528*/
        }
        while ( v5 > 0 ); /*0x5ff52d*/
      }
      for ( j = 0; j < 128; ++j ) /*0x5ff534*/
      {
        v9 = *v2; /*0x5ff536*/
        v24 = 2 * j; /*0x5ff53c*/
        v23 = 0; /*0x5ff551*/
        v25 = 255; /*0x5ff555*/
        v26 = 1; /*0x5ff559*/
        v27 = 0; /*0x5ff55d*/
        v28 = j; /*0x5ff561*/
        v29 = 255; /*0x5ff565*/
        v30 = 1; /*0x5ff569*/
        (*(void (__thiscall **)(int, int *, XSurface *, int *, _DWORD, int))(*(_DWORD *)v9 + 8))( /*0x5ff574*/
          v9,
          &v27,
          &v31,
          &v23,
          0,
          1);
      }
      Vector::Clear((int)v33); /*0x5ff584*/
      ++v2; /*0x5ff58d*/
      *(_DWORD *)v31.Surface = &Surface_Vtable; /*0x5ff593*/
    }
    i = 0; /*0x5ff5aa*/
    v10 = (Surface **)&unk_AC1798; /*0x5ff5ae*/
    v11 = 128; /*0x5ff5b3*/
    do /*0x5ff721*/
    {
      if ( !*v10 ) /*0x5ff5b8*/
      {
        v12 = (Surface *)__2_YAPAXI_Z(0x20u); /*0x5ff5be*/
        v13 = v12; /*0x5ff5c3*/
        if ( v12 ) /*0x5ff5ca*/
        {
          Surface::Construct(v12, 256, 128); /*0x5ff5d8*/
          *(_DWORD *)v13[1].__pad_0 = 0; /*0x5ff5e0*/
          *(_DWORD *)v13->__pad_0 = &XSurface_Vtable; /*0x5ff5e9*/
          v13[1].Width = 1; /*0x5ff5ef*/
          Buffer::Init((Buffer *)&v13[1].Height, 0, 0x8000); /*0x5ff5f6*/
          *(_DWORD *)v13->__pad_0 = &BSurface_Vtable; /*0x5ff5fb*/
        }
        else
        {
          v13 = 0; /*0x5ff603*/
        }
        *v10 = v13; /*0x5ff605*/
      }
      (*(void (__thiscall **)(Surface *, _DWORD))(*(_DWORD *)(*v10)->__pad_0 + 24))(*v10, 0); /*0x5ff60c*/
      Surface::Construct((Surface *)&v31, 256, 256); /*0x5ff61d*/
      v31.LockCount = 0; /*0x5ff626*/
      *(_DWORD *)v31.Surface = &XSurface_Vtable; /*0x5ff630*/
      v32 = 1; /*0x5ff638*/
      Buffer::Init((Buffer *)v33, 0, 0x10000); /*0x5ff640*/
      *(_DWORD *)v31.Surface = &BSurface_Vtable; /*0x5ff649*/
      XSurface::Fill(&v31, 0); /*0x5ff652*/
      v21 = 60 * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1960); /*0x5ff684*/
      LOWORD(v14) = Math::RoundToInt((double)v21 * -0.002790178571428571); /*0x5ff692*/
      Draw::Ellipse((Draw *)&v31, 128, 128, i - v14, 0, 0, 255, 255, v11); /*0x5ff6a9*/
      for ( k = 0; k < 128; ++k ) /*0x5ff6ae*/
      {
        v30 = 1; /*0x5ff6ba*/
        v26 = 1; /*0x5ff6be*/
        v29 = 255; /*0x5ff6c9*/
        v25 = 255; /*0x5ff6cd*/
        v16 = *v10; /*0x5ff6d1*/
        v27 = 0; /*0x5ff6db*/
        v28 = 2 * k; /*0x5ff6df*/
        v23 = 0; /*0x5ff6e3*/
        v24 = k; /*0x5ff6e7*/
        (*(void (__thiscall **)(Surface *, int *, XSurface *, int *, _DWORD, int))(*(_DWORD *)v16->__pad_0 + 8))( /*0x5ff6f2*/
          v16,
          &v23,
          &v31,
          &v27,
          0,
          1);
      }
      Vector::Clear((int)v33); /*0x5ff702*/
      v11 -= 6; /*0x5ff70b*/
      ++v10; /*0x5ff70f*/
      *(_DWORD *)v31.Surface = &Surface_Vtable; /*0x5ff715*/
      ++i; /*0x5ff71d*/
    }
    while ( v11 > 68 ); /*0x5ff721*/
    byte_AC1834 = 1; /*0x5ff727*/
  }
  dword_833588 = DDraw::GetStatus(); /*0x5ff73d*/
  v22 = 5; /*0x5ff742*/
  HIBYTE(v19) = 0; /*0x5ff74a*/
  result = GetVersionString(&v22, (_BYTE *)&v19 + 3, 0, 0); /*0x5ff74e*/
  if ( HIBYTE(v19) && !dword_AC1838 ) /*0x5ff763*/
  {
    dword_AC1838 = (void *)__2_YAPAXI_Z(0x40000u); /*0x5ff776*/
    do /*0x5ff7ed*/
    {
      BYTE1(v21) = (unsigned __int8)((unsigned __int16)v1 >> g_BitMask_Green) << g_BitMask_Blue; /*0x5ff7aa*/
      LOBYTE(v18) = 0; /*0x5ff7bb*/
      HIBYTE(v18) = (unsigned __int8)((unsigned __int16)v1 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x5ff7bd*/
      BYTE2(v21) = (unsigned __int8)((unsigned __int16)v1 >> g_BitShift_Blue) << g_BitMask_Red; /*0x5ff7bf*/
      result = (char *)BYTE2(v21); /*0x5ff7dc*/
      *((_DWORD *)dword_AC1838 + v1++) = BYTE2(v21) | ((BYTE1(v21) | v18) << 8); /*0x5ff7e3*/
    }
    while ( v1 < 0x10000 ); /*0x5ff7ed*/
  }
  return result; /*0x5ff7ef*/
}



// ==== 0x005FF800  ObjectClass::WinMainSetup_Setup_5FF800  this=ObjectClass  sig=csp ====
void WinMainSetup_Setup_5FF800(ObjectClass *this)
{
  int *v1; // esi

  if ( dword_AC1838 ) /*0x5ff807*/
  {
    __3_YAXPAX_Z(dword_AC1838); /*0x5ff80a*/
    dword_AC1838 = 0; /*0x5ff812*/
  }
  v1 = dword_AC1698; /*0x5ff81d*/
  do /*0x5ff83d*/
  {
    if ( *v1 ) /*0x5ff822*/
      (**(void (__thiscall ***)(int, int))*v1)(*v1, 1); /*0x5ff82c*/
    *v1++ = 0; /*0x5ff82e*/
  }
  while ( (int)v1 < (int)&dword_AC17C0 ); /*0x5ff83d*/
}



// ==== 0x005FF850  BuildingLight::CalculateShading  this=Coord  sig=csp ====
char __usercall BuildingLight::CalculateShading@<al>(BuildingLight *this, __m64 a2@<mm0>)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // ebp
  int v4; // ebx
  unsigned int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // esi
  unsigned __int16 *v10; // edi
  int v11; // eax
  int v12; // ecx
  bool v13; // zf
  unsigned __int16 v14; // si
  int v15; // ecx
  unsigned __int16 v16; // ax
  int v17; // ebp
  int v18; // ecx
  int v19; // eax
  int v20; // esi
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  unsigned __int16 v24; // si
  int v25; // edx
  int v26; // eax
  int v27; // esi
  int v28; // ecx
  int v29; // edx
  char v31; // [esp+13h] [ebp-81h] BYREF
  _BYTE *v32; // [esp+14h] [ebp-80h]
  unsigned __int16 *v33; // [esp+18h] [ebp-7Ch]
  _BYTE *v34; // [esp+1Ch] [ebp-78h]
  int v35; // [esp+20h] [ebp-74h]
  int v36; // [esp+24h] [ebp-70h]
  int i; // [esp+28h] [ebp-6Ch]
  int j; // [esp+2Ch] [ebp-68h]
  AudioStream *v39; // [esp+30h] [ebp-64h]
  int v40; // [esp+34h] [ebp-60h]
  unsigned __int16 *v41; // [esp+38h] [ebp-5Ch] BYREF
  _BYTE *v42; // [esp+3Ch] [ebp-58h] BYREF
  _DWORD *v43; // [esp+40h] [ebp-54h]
  unsigned __int8 v44; // [esp+44h] [ebp-50h]
  unsigned __int8 v45; // [esp+45h] [ebp-4Fh]
  unsigned __int8 v46; // [esp+46h] [ebp-4Eh]
  int v47[2]; // [esp+4Ch] [ebp-48h] BYREF
  int v48[2]; // [esp+54h] [ebp-40h] BYREF
  int v49; // [esp+5Ch] [ebp-38h]
  int v50; // [esp+60h] [ebp-34h]
  int v51[4]; // [esp+64h] [ebp-30h] BYREF
  int v52[4]; // [esp+74h] [ebp-20h] BYREF
  int v53[4]; // [esp+84h] [ebp-10h] BYREF

  v3 = v2; /*0x5ff858*/
  v43 = v2; /*0x5ff85c*/
  v4 = v2[5] & 0xF; /*0x5ff863*/
  if ( (v2[5] & 0xE) != 0 /*0x5ff879*/
    || (v5 = PingPongBuffer::GetWriteOffset(), *(_DWORD *)&g_MissionQueueFrame.waypoints[282] >= v5) )
  {
    LOBYTE(v5) = Coord::To_Screen((Coord *)g_TacticalClass_Instance, v3, v47); /*0x5ff88b*/
    if ( (_BYTE)v5 ) /*0x5ff892*/
    {
      if ( ((int)dword_A8B230->vtable0 & 0x1000) == 0 || (LOBYTE(v5) = Game::Stub3((int)v3), !(_BYTE)v5) ) /*0x5ff8b2*/
      {
        v52[0] = v47[0] - 128; /*0x5ff8c9*/
        v53[0] = DSurface_ViewBounds.field_0; /*0x5ff8d9*/
        v53[1] = (int)DSurface_ViewBounds.field_4; /*0x5ff8e6*/
        v6 = v3[3]; /*0x5ff8ed*/
        v53[3] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x5ff8f0*/
        v7 = byte_83358C[v6]; /*0x5ff8ff*/
        v52[1] = v47[1] - 64; /*0x5ff906*/
        v39 = g_DSurface_Hidden_2; /*0x5ff912*/
        v52[2] = 255; /*0x5ff916*/
        v52[3] = 127; /*0x5ff91e*/
        v53[2] = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x5ff925*/
        if ( v7 < 64 ) /*0x5ff92c*/
          v7 = v7 * v3[4] / 64; /*0x5ff93d*/
        v8 = *(_DWORD *)g_DSurface_Hidden_2->__pad_0; /*0x5ff946*/
        v40 = dword_AC1698[v7]; /*0x5ff94a*/
        v9 = (*(int (__thiscall **)(AudioStream *))(v8 + 116))(g_DSurface_Hidden_2); /*0x5ff951*/
        v48[0] = 0; /*0x5ff95a*/
        v48[1] = 0; /*0x5ff95e*/
        v51[0] = 0; /*0x5ff962*/
        v51[1] = 0; /*0x5ff966*/
        v49 = 255; /*0x5ff96a*/
        v51[2] = 255; /*0x5ff96e*/
        v36 = v9; /*0x5ff9a3*/
        v31 = 0; /*0x5ff9a7*/
        v50 = 127; /*0x5ff9ac*/
        v51[3] = 127; /*0x5ff9b0*/
        LOBYTE(v5) = CalcSurfaceBlitRects((int)v39, v53, v52, v40, v51, v48, &v31, (int *)&v41, (int *)&v42); /*0x5ff9b7*/
        if ( (_BYTE)v5 ) /*0x5ff9be*/
        {
          v10 = v41; /*0x5ff9c4*/
          v33 = v41; /*0x5ff9d6*/
          v34 = v42; /*0x5ff9da*/
          v32 = v42; /*0x5ff9de*/
          if ( v4 ) /*0x5ff9e2*/
          {
LABEL_23:
            v11 = v3[5]; /*0x5ffb1c*/
            if ( (v11 & 1) != 0 ) /*0x5ffb21*/
            {
              j = 0; /*0x5ffb2b*/
              if ( v50 > 0 ) /*0x5ffb31*/
              {
                v12 = v49; /*0x5ffb37*/
                do /*0x5ffc65*/
                {
                  for ( i = 0; i < v12; ++i ) /*0x5ffb41*/
                  {
                    v13 = *v32 == 0; /*0x5ffb4e*/
                    LOBYTE(v35) = *v32++; /*0x5ffb50*/
                    if ( !v13 ) /*0x5ffb58*/
                    {
                      v14 = *v10; /*0x5ffb62*/
                      v44 = (unsigned __int8)(*v10 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x5ffb91*/
                      v45 = (unsigned __int8)(v14 >> g_BitMask_Green) << g_BitMask_Blue; /*0x5ffba9*/
                      v46 = (unsigned __int8)(v14 >> g_BitShift_Blue) << g_BitMask_Red; /*0x5ffbc2*/
                      *v10 = (((256 - (unsigned __int8)v35) * v44) >> 8 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x5ffc1a*/
                           | (((256 - (unsigned __int8)v35) * v46) >> 8 >> g_BitMask_Red << g_BitShift_Blue)
                           | (((256 - (unsigned __int8)v35) * v45) >> 8 >> g_BitMask_Blue << g_BitMask_Green);
                      v12 = v49; /*0x5ffc1d*/
                      v9 = v36; /*0x5ffc21*/
                    }
                    ++v10; /*0x5ffc29*/
                  }
                  v34 += 256; /*0x5ffc4c*/
                  v32 = v34; /*0x5ffc50*/
                  v10 = (unsigned __int16 *)((char *)v33 + v9); /*0x5ffc58*/
                  v33 = (unsigned __int16 *)((char *)v33 + v9); /*0x5ffc5b*/
                  ++j; /*0x5ffc61*/
                }
                while ( j < v50 ); /*0x5ffc65*/
              }
            }
            else if ( (v11 & 0xE) != 0 ) /*0x5ffc72*/
            {
              i = 0; /*0x5ffc7c*/
              if ( v50 > 0 ) /*0x5ffc82*/
              {
                v15 = v49; /*0x5ffc88*/
                do /*0x5ffdf0*/
                {
                  for ( j = 0; j < v15; ++j ) /*0x5ffc92*/
                  {
                    v13 = *v32 == 0; /*0x5ffc9f*/
                    LOBYTE(v35) = *v32++; /*0x5ffca1*/
                    if ( !v13 ) /*0x5ffca9*/
                    {
                      v16 = *v10; /*0x5ffcaf*/
                      v17 = (unsigned __int8)v35 + 256; /*0x5ffcd0*/
                      v44 = (unsigned __int8)(*v10 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x5ffcdf*/
                      v45 = (unsigned __int8)(v16 >> g_BitMask_Green) << g_BitMask_Blue; /*0x5ffd00*/
                      v18 = v43[5]; /*0x5ffd0a*/
                      v46 = (unsigned __int8)(v16 >> g_BitShift_Blue) << g_BitMask_Red; /*0x5ffd0d*/
                      v19 = v44; /*0x5ffd1d*/
                      v20 = v45; /*0x5ffd22*/
                      v21 = v46; /*0x5ffd28*/
                      if ( (v18 & 2) == 0 ) /*0x5ffd31*/
                      {
                        v19 = (v17 * v44) >> 8; /*0x5ffd36*/
                        if ( v19 > 255 ) /*0x5ffd3e*/
                          v19 = 255; /*0x5ffd40*/
                      }
                      if ( (v18 & 4) == 0 ) /*0x5ffd48*/
                      {
                        v20 = (v17 * v45) >> 8; /*0x5ffd4d*/
                        if ( v20 > 255 ) /*0x5ffd56*/
                          v20 = 255; /*0x5ffd58*/
                      }
                      if ( (v18 & 8) == 0 ) /*0x5ffd60*/
                      {
                        v21 = (v17 * v46) >> 8; /*0x5ffd65*/
                        if ( v21 > 255 ) /*0x5ffd6e*/
                          v21 = 255; /*0x5ffd70*/
                      }
                      v22 = (v20 >> g_BitMask_Blue << g_BitMask_Green) | (v19 >> g_BitShift_Green_0 << g_BitShift_Red); /*0x5ffd9f*/
                      v9 = v36; /*0x5ffda1*/
                      *v10 = (v21 >> g_BitMask_Red << g_BitShift_Blue) | v22; /*0x5ffda9*/
                      v15 = v49; /*0x5ffdac*/
                    }
                    ++v10; /*0x5ffdb4*/
                  }
                  v34 += 256; /*0x5ffdd7*/
                  v32 = v34; /*0x5ffddb*/
                  v10 = (unsigned __int16 *)((char *)v33 + v9); /*0x5ffde3*/
                  v33 = (unsigned __int16 *)((char *)v33 + v9); /*0x5ffde6*/
                  ++i; /*0x5ffdec*/
                }
                while ( i < v50 ); /*0x5ffdf0*/
              }
            }
            else
            {
              i = 0; /*0x5ffdff*/
              if ( v50 > 0 ) /*0x5ffe05*/
              {
                v23 = v49; /*0x5ffe0b*/
                do /*0x5fff5f*/
                {
                  for ( j = 0; j < v23; ++j ) /*0x5ffe15*/
                  {
                    v13 = *v32 == 0; /*0x5ffe22*/
                    LOBYTE(v35) = *v32++; /*0x5ffe24*/
                    if ( !v13 ) /*0x5ffe2c*/
                    {
                      v24 = *v10; /*0x5ffe32*/
                      v25 = (unsigned __int8)v35 + 256; /*0x5ffe55*/
                      v44 = (unsigned __int8)(*v10 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x5ffe64*/
                      v45 = (unsigned __int8)(v24 >> g_BitMask_Green) << g_BitMask_Blue; /*0x5ffe7c*/
                      v46 = (unsigned __int8)(v24 >> g_BitShift_Blue) << g_BitMask_Red; /*0x5ffe8d*/
                      v26 = (v25 * v46) >> 8; /*0x5ffeb7*/
                      v27 = (v25 * v44) >> 8; /*0x5ffeba*/
                      v28 = (v25 * v45) >> 8; /*0x5ffebd*/
                      if ( v26 > 255 ) /*0x5ffec5*/
                        v26 = 255; /*0x5ffec7*/
                      v29 = 255; /*0x5ffed2*/
                      if ( v28 <= 255 ) /*0x5ffed7*/
                        v29 = v28; /*0x5ffed9*/
                      if ( v27 > 255 ) /*0x5ffee1*/
                        v27 = 255; /*0x5ffee3*/
                      *v10 = (v26 >> g_BitMask_Red << g_BitShift_Blue) /*0x5fff14*/
                           | (v29 >> g_BitMask_Blue << g_BitMask_Green)
                           | (v27 >> g_BitShift_Green_0 << g_BitShift_Red);
                      v23 = v49; /*0x5fff17*/
                      v9 = v36; /*0x5fff1b*/
                    }
                    ++v10; /*0x5fff23*/
                  }
                  v34 += 256; /*0x5fff46*/
                  v32 = v34; /*0x5fff4a*/
                  v10 = (unsigned __int16 *)((char *)v33 + v9); /*0x5fff52*/
                  v33 = (unsigned __int16 *)((char *)v33 + v9); /*0x5fff55*/
                  ++i; /*0x5fff5b*/
                }
                while ( i < v50 ); /*0x5fff5f*/
              }
            }
          }
          else
          {
            switch ( dword_833588 ) /*0x5ff9f1*/
            {
              case 0: /*0x5ff9f1*/
                if ( dword_AC1838 ) /*0x5ffa00*/
                  Object_Calc_7DF3C2(a2, v42, v41, 256, v9, v49, v50, (int)dword_AC1838); /*0x5ffa15*/
                else
                  Object_Calc_7DF191(v42, v41, 256, v9, v49, v50); /*0x5ffa34*/
                break; /*0x5ffa1d*/
              case 1: /*0x5ff9f1*/
                if ( dword_AC1838 ) /*0x5ffa49*/
                  Object_Calc_7DF500(a2, v42, v41, 256, v9, v49, v50, (int)dword_AC1838); /*0x5ffa5e*/
                else
                  Object_Calc_7DF0B4(v42, v41, 256, v9, v49, v50); /*0x5ffa7d*/
                break; /*0x5ffa66*/
              case 2: /*0x5ff9f1*/
                if ( dword_AC1838 ) /*0x5ffa92*/
                  Object_Calc_7DF280(a2, v42, v41, 256, v9, v49, v50, (int)dword_AC1838); /*0x5ffaa7*/
                else
                  Object_Calc(v42, v41, 256, v9, v49, v50); /*0x5ffac6*/
                break; /*0x5ffaaf*/
              case 3: /*0x5ff9f1*/
                if ( dword_AC1838 ) /*0x5ffadb*/
                  Object_Calc_7DF640(a2, v42, v41, 256, v9, v49, v50, (int)dword_AC1838); /*0x5ffaf0*/
                else
                  Object_Calc_7DEFD7(v42, v41, 256, v9, v49, v50); /*0x5ffb0f*/
                break; /*0x5ffaf8*/
              default:
                goto LABEL_23;
            }
          }
          (*(void (__thiscall **)(AudioStream *))(*(_DWORD *)v39->__pad_0 + 96))(v39); /*0x5fff6b*/
          LOBYTE(v5) = (*(char (__thiscall **)(int))(*(_DWORD *)v40 + 96))(v40); /*0x5fff74*/
        }
      }
    }
  }
  return v5; /*0x5fff77*/
}



// ==== 0x005FFFA0  ObjectClass::Render_Render_5FFFA0  this=ObjectClass  sig=csp ====
char Render_Render_5FFFA0(ObjectClass *this)
{
  __m64 v1; // mm0
  char result; // al
  int i; // esi
  BuildingLight *v4; // [esp+0h] [ebp-4h]

  result = dword_AC1688; /*0x5fffa0*/
  for ( i = dword_AC1688 - 1; i >= 0; --i ) /*0x5fffab*/
    result = BuildingLight::CalculateShading(v4, v1); /*0x5fffb6*/
  return result; /*0x5fffbe*/
}



// ==== 0x005FFFC0  ?$DynamicVectorClass@PAVSpotLightClass@@::Destructor  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_Destructor(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5fffc6*/
  *(_DWORD *)(this + 16) = 0; /*0x5fffc9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5fffd0*/
  {
    __3_YAXPAX_Z(v2); /*0x5fffd6*/
    *(_DWORD *)(this + 4) = 0; /*0x5fffde*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5fffe1*/
  *(_DWORD *)(this + 8) = 0; /*0x5fffe4*/
}



// ==== 0x005FFFF0  _DynamicVectorClass_PAVSpotLightClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SpotLightClass::GetItemIndex(
        _DynamicVectorClass_PAVSpotLightClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5ffff0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x600005*/
  else
    return 0; /*0x5ffff7*/
}



// ==== 0x005F0040  Network::CleanupOnDisconnect  this=Network  sig=ida-proto ====
int Network_CleanupOnDisconnect()
{
  if ( (dword_A8D5F8 & 2) == 0 && dword_A8B238[0] == 1 ) /*0x5f0050*/
    NullModemClass::Negotiate((int)&unk_A8EA70); /*0x5f0057*/
  return ObjectClass::DetachAndFree(&unk_A8EA70);
}



// ==== 0x005F0070  CleanupCampaignResources  this=-  sig=ida-proto ====
char sub_5F0070()
{
  DWORD v0; // eax
  int v1; // edi
  int v2; // esi
  _BYTE v4[108]; // [esp+8h] [ebp-70h] BYREF
  __int16 v5; // [esp+74h] [ebp-4h]
  char v6; // [esp+76h] [ebp-2h]

  LOBYTE(v0) = dword_A8D5F8; /*0x5f0073*/
  v4[0] = 0; /*0x5f007c*/
  if ( (dword_A8D5F8 & 2) == 0 ) /*0x5f0081*/
  {
    memset(v4, 0, sizeof(v4)); /*0x5f0094*/
    v5 = 0; /*0x5f0096*/
    v6 = 0; /*0x5f0098*/
    v4[0] = 19; /*0x5f00a5*/
    Stream::WriteBlock((int)&unk_A8EA70, (int)v4, 111, 0); /*0x5f00aa*/
    Stream::WriteBlock((int)&unk_A8EA70, (int)v4, 111, 0); /*0x5f00bd*/
    v1 = dword_887340; /*0x5f00c7*/
    if ( dword_887338 != -1 ) /*0x5f00d0*/
      v1 += Timer::GetTicks() - dword_887338; /*0x5f00e2*/
    while ( 1 ) /*0x5f00e4*/
    {
      LOBYTE(v0) = dword_887338; /*0x5f00e4*/
      v2 = dword_887340; /*0x5f00e9*/
      if ( dword_887338 != -1 ) /*0x5f00f2*/
      {
        v0 = Timer::GetTicks() - dword_887338; /*0x5f00fe*/
        v2 += v0; /*0x5f0104*/
      }
      if ( (unsigned int)(v2 - v1) >= 0x1E ) /*0x5f010b*/
        break; /*0x5f010b*/
      Stream::ReadPacket((int)&unk_A8EA70); /*0x5f0112*/
    }
  }
  return v0; /*0x5f0119*/
}



// ==== 0x005F0120  ObjectClass::Network_Process_5F0120  this=ObjectClass  sig=csp ====
char __usercall sub_5F0120@<al>(int a1@<ebp>)
{
  char result; // al
  int v2; // edx
  int v3; // edx

  result = 0; /*0x5f0126*/
  switch ( g_EventDispatchState ) /*0x5f012d*/
  {
    case 0: /*0x5f012d*/
    case 1: /*0x5f012d*/
      goto LABEL_3;
    case 2: /*0x5f012d*/
      if ( (Dialog::CheckButtonState() & 0x80u) != 0 ) /*0x5f0140*/
        goto LABEL_3; /*0x5f0140*/
      LOBYTE(v2) = 1; /*0x5f014d*/
      result = Modem::CheckStatus(v2, dword_AC1234, a1); /*0x5f014f*/
      break; /*0x5f014f*/
    case 3: /*0x5f012d*/
      if ( (Dialog::CheckButtonState() & 0x80u) != 0 ) /*0x5f0160*/
      {
LABEL_3:
        result = NullModem::TestConnection(); /*0x5f0142*/
      }
      else
      {
        LOBYTE(v3) = 1; /*0x5f0168*/
        result = Modem::DetectAndConnect(v3, dword_AC1234, a1); /*0x5f016a*/
      }
      break; /*0x5f016a*/
    default:
      return result;
  }
  return result; /*0x5f016f*/
}



// ==== 0x005F0180  HandlePlayerDisconnection  this=AbstractClass  sig=ida-proto ====
char __fastcall HandlePlayerDisconnection(int a1, int a2)
{
  char result; // al
  int v3; // edi
  wchar_t *StringCSF; // eax
  wchar_t *v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  wchar_t *v9; // eax
  int v10; // eax
  wchar_t String[80]; // [esp+4h] [ebp-A0h] BYREF

  result = dword_A8B54C; /*0x5f0180*/
  if ( dword_A8B54C != 1 ) /*0x5f018f*/
  {
    result = (char)dword_A8022C; /*0x5f0195*/
    v3 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * a1]; /*0x5f019a*/
    if ( v3 ) /*0x5f019f*/
    {
      result = *(_BYTE *)(v3 + 492); /*0x5f01a5*/
      if ( result ) /*0x5f01ad*/
      {
        String[0] = 0; /*0x5f01b6*/
        if ( a2 == -1 ) /*0x5f01bd*/
        {
          ObjectClass::FreeResources((int)&unk_A8EA70); /*0x5f0227*/
        }
        else if ( a2 ) /*0x5f01c1*/
        {
          if ( a2 == 1 ) /*0x5f01c6*/
          {
            StringCSF = GetStringCSF(aTxtConnectionL, 0, g_Str_File_NullDlg_CPP, 6412); /*0x5f01e0*/
            swprintf(String, (const size_t)StringCSF, (const wchar_t *const)(v3 + 90154)); /*0x5f01eb*/
          }
        }
        else
        {
          v5 = GetStringCSF(aTxtLeftGame, 0, g_Str_File_NullDlg_CPP, 6416); /*0x5f020d*/
          swprintf(String, (const size_t)v5, (const wchar_t *const)(v3 + 90154)); /*0x5f0218*/
        }
        if ( wcslen(String) ) /*0x5f0231*/
        {
          v6 = Math::RoundToInt(*(double *)&dword_8871E0[1].__pad_A0 * 900.0); /*0x5f0250*/
          MessageListClass::AddMessage(unk_A8BC60, 0, 0, String, *(_DWORD *)(*(_DWORD *)(v3 + 52) + 192), 16454, v6, 0); /*0x5f0273*/
          MapClass::MarkForRedraw(&dword_87F7E8, 0); /*0x5f027f*/
        }
        v7 = 0; /*0x5f028b*/
        if ( dword_A8DA84 > 0 ) /*0x5f028f*/
        {
          while ( _wcsicmp(*(const wchar_t **)(dword_A8DA78 + 4 * v7), (const wchar_t *)(v3 + 90154)) ) /*0x5f02b0*/
          {
            if ( ++v7 >= dword_A8DA84 ) /*0x5f02ba*/
              goto LABEL_20; /*0x5f02ba*/
          }
          __3_YAXPAX_Z(*(void **)(dword_A8DA78 + 4 * v7)); /*0x5f02c7*/
          v8 = (*(int (__thiscall **)(int *, int))(stru_A8DA74 + 16))(&stru_A8DA74, dword_A8DA78 + 4 * v7); /*0x5f02e3*/
          if ( v8 != -1 && v8 < dword_A8DA84 && v8 < --dword_A8DA84 ) /*0x5f02fe*/
          {
            do /*0x5f0316*/
            {
              ++v8; /*0x5f0306*/
              *(_DWORD *)(dword_A8DA78 + 4 * v8 - 4) = *(_DWORD *)(dword_A8DA78 + 4 * v8); /*0x5f030a*/
            }
            while ( v8 < dword_A8DA84 ); /*0x5f0316*/
          }
        }
LABEL_20:
        HouseClass::AIBuildBase((#375 *)v3); /*0x5f0318*/
        result = --dword_A8B54C; /*0x5f0324*/
        if ( dword_A8B54C == 1 ) /*0x5f032f*/
        {
          v9 = GetStringCSF(aTxtJustYouAndM, 0, g_Str_File_NullDlg_CPP, 6453); /*0x5f0342*/
          swprintf(String, (const size_t)&off_8240B4, v9); /*0x5f0352*/
          v10 = Math::RoundToInt(*(double *)&dword_8871E0[1].__pad_A0 * 900.0); /*0x5f036e*/
          MessageListClass::AddMessage(unk_A8BC60, 0, 0, String, *(_DWORD *)(*(_DWORD *)(v3 + 52) + 192), 16454, v10, 0); /*0x5f0391*/
          return MapClass::MarkForRedraw(&dword_87F7E8, 0); /*0x5f039d*/
        }
      }
    }
  }
  return result; /*0x5f03a2*/
}



// ==== 0x005F03B0  NullModem::TestConnection  this=NullModem  sig=ida-proto ====
char __usercall NullModem::TestConnection@<al>(int a1@<edi>)
{
  char v1; // bl
  wchar_t *StringCSF; // esi
  wchar_t *v3; // eax
  HWND MessageBox; // eax
  int v5; // esi
  int v6; // ebp
  int v7; // eax
  int v8; // esi
  int Ticks; // ecx
  int v10; // esi
  int v11; // esi
  int v12; // edi
  int v13; // esi
  int v14; // esi
  int *v15; // eax
  wchar_t *v17; // [esp-18h] [ebp-228h]
  char v19; // [esp+Bh] [ebp-205h]
  int v20; // [esp+Ch] [ebp-204h]
  HWND hWnd; // [esp+10h] [ebp-200h]
  _BYTE v22[4]; // [esp+14h] [ebp-1FCh] BYREF
  int v23[62]; // [esp+18h] [ebp-1F8h] BYREF
  __int16 v24; // [esp+110h] [ebp-100h]
  _DWORD v25[6]; // [esp+114h] [ebp-FCh] BYREF
  int v26; // [esp+12Ch] [ebp-E4h]

  v1 = 0; /*0x5f03bd*/
  v19 = 1; /*0x5f03d0*/
  g_NetworkTestFlag = 0; /*0x5f03d5*/
  StringCSF = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullDlg_CPP, 6489); /*0x5f03f1*/
  v3 = GetStringCSF(aTxtNullConnerr, 0, g_Str_File_NullDlg_CPP, 6489); /*0x5f03f3*/
  MessageBox = CreateMessageBox((LPARAM)v3, (LPARAM)StringCSF, (LONG)&g_NetworkTestFlag); /*0x5f03fc*/
  hWnd = MessageBox; /*0x5f0403*/
  if ( !MessageBox ) /*0x5f0407*/
    return 0; /*0x5f067c*/
  Dialog::Show(MessageBox); /*0x5f040f*/
  v5 = dword_887340; /*0x5f0419*/
  if ( dword_887338 != -1 ) /*0x5f0422*/
    v5 += Timer::GetTicks() - dword_887338; /*0x5f0434*/
  v20 = v5; /*0x5f0438*/
  v6 = v5; /*0x5f043c*/
  while ( (unsigned __int8)Dialog::PumpMessages() != 1 && !g_NetworkTestFlag ) /*0x5f0452*/
  {
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5f045d*/
    v7 = dword_887338; /*0x5f0462*/
    v8 = dword_887340; /*0x5f0467*/
    if ( dword_887338 != -1 ) /*0x5f0470*/
    {
      Ticks = Timer::GetTicks(); /*0x5f047c*/
      v7 = dword_887338; /*0x5f047e*/
      v8 += Ticks - dword_887338; /*0x5f0485*/
    }
    if ( (unsigned int)(v8 - v6) > 0x1E ) /*0x5f048c*/
    {
      v10 = dword_887340; /*0x5f048e*/
      if ( v7 != -1 ) /*0x5f0497*/
        v10 += Timer::GetTicks() - dword_887338; /*0x5f04a9*/
      memset(v23, 0, sizeof(v23)); /*0x5f04bc*/
      v24 = 0; /*0x5f04be*/
      v6 = v10; /*0x5f04d1*/
      v23[0] = 100; /*0x5f04d3*/
      LOBYTE(v23[6]) = dword_A8B394; /*0x5f04db*/
      Stream::WriteBlock(&unk_A8EA70, (int)v23, 250, 0); /*0x5f04df*/
    }
    if ( ObjectTypeClass::CreateInstance((int)&unk_A8EA70, (int)v25, (int)v22) > 0 ) /*0x5f04fd*/
    {
      v11 = dword_887340; /*0x5f0508*/
      if ( dword_887338 != -1 ) /*0x5f0511*/
        v11 += Timer::GetTicks() - dword_887338; /*0x5f0523*/
      v20 = v11; /*0x5f052c*/
      if ( v25[0] == 100 ) /*0x5f0533*/
      {
        if ( (unsigned __int8)v26 == dword_A8B394 ) /*0x5f054d*/
        {
          v17 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6530); /*0x5f064a*/
          v15 = (int *)GetStringCSF(aTxtSystemNotRe, 0, g_Str_File_NullDlg_CPP, 6530); /*0x5f0655*/
          Dialog::ShowMessageBox(v15, v17, 0, 0, 0, a1); /*0x5f065f*/
          break; /*0x5f065f*/
        }
        memset(v23, 0, sizeof(v23)); /*0x5f0560*/
        v24 = 0; /*0x5f0571*/
        v23[0] = 100; /*0x5f0573*/
        LOBYTE(v23[6]) = dword_A8B394; /*0x5f057b*/
        Stream::WriteBlock(&unk_A8EA70, (int)v23, 250, 1); /*0x5f057f*/
        v12 = dword_887340; /*0x5f0589*/
        if ( dword_887338 != -1 ) /*0x5f0594*/
          v12 += Timer::GetTicks() - dword_887338; /*0x5f05a6*/
        v6 = v12; /*0x5f05a8*/
        while ( 1 ) /*0x5f05af*/
        {
          v13 = dword_887340; /*0x5f05af*/
          if ( dword_887338 != -1 ) /*0x5f05b7*/
            v13 += Timer::GetTicks() - dword_887338; /*0x5f05c9*/
          if ( (unsigned int)(v13 - v12) >= 0x3C ) /*0x5f05d0*/
            break; /*0x5f05d0*/
          Stream::ReadPacket((int)&unk_A8EA70); /*0x5f05d7*/
        }
        v1 = 1; /*0x5f05de*/
        v19 = 0; /*0x5f05e0*/
      }
    }
    v14 = dword_887340; /*0x5f05ea*/
    if ( dword_887338 != -1 ) /*0x5f05f3*/
      v14 += Timer::GetTicks() - dword_887338; /*0x5f0605*/
    if ( (unsigned int)(v14 - v20) > 0x384 ) /*0x5f0611*/
      break; /*0x5f0611*/
    if ( v19 != 1 ) /*0x5f0618*/
      goto LABEL_33; /*0x5f0618*/
  }
  v1 = 0; /*0x5f0664*/
LABEL_33:
  Dialog::Destroy(hWnd); /*0x5f0666*/
  return v1; /*0x5f0673*/
}



// ==== 0x005F0690  Modem::CheckStatus  this=Modem  sig=csp ====
char __fastcall Modem::CheckStatus(Modem *this, int a2)
{
  char v3; // bl
  int v4; // eax
  int v6; // eax
  int Modem_field_0x08; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int *v11; // [esp-14h] [ebp-3Ch]
  int *v12; // [esp-14h] [ebp-3Ch]
  int *v13; // [esp-14h] [ebp-3Ch]
  int *v14; // [esp-14h] [ebp-3Ch]
  int *v15; // [esp-14h] [ebp-3Ch]
  int *v16; // [esp-14h] [ebp-3Ch]
  int *v17; // [esp-14h] [ebp-3Ch]
  int *v18; // [esp-14h] [ebp-3Ch]
  int *v19; // [esp-14h] [ebp-3Ch]
  wchar_t *v20; // [esp-10h] [ebp-38h]
  wchar_t *v21; // [esp-10h] [ebp-38h]
  wchar_t *StringCSF; // [esp-10h] [ebp-38h]
  wchar_t *v23; // [esp-10h] [ebp-38h]
  wchar_t *v24; // [esp-10h] [ebp-38h]
  wchar_t *v25; // [esp-10h] [ebp-38h]
  wchar_t *v26; // [esp-10h] [ebp-38h]
  wchar_t *v27; // [esp-10h] [ebp-38h]
  wchar_t *v28; // [esp-10h] [ebp-38h]
  Dialog *v29; // [esp+0h] [ebp-28h]
  ObjectClass *v30; // [esp+0h] [ebp-28h]
  int v31; // [esp+0h] [ebp-28h]
  int v32; // [esp+0h] [ebp-28h]
  char v33; // [esp+Fh] [ebp-19h]

  v33 = 0; /*0x5f06a1*/
  Debug::Log(); /*0x5f06a6*/
  dword_A8DAB8 &= ~1u; /*0x5f06bc*/
  dword_AC1234 = this; /*0x5f06c2*/
  v3 = Dialog::CheckButtonState(v29); /*0x5f06cd*/
  Debug::Log(); /*0x5f06d4*/
  Debug::Log(); /*0x5f06f1*/
  Debug::Log(); /*0x5f070e*/
  Debug::Log(); /*0x5f072b*/
  Debug::Log(); /*0x5f074d*/
  if ( (_BYTE)a2 ) /*0x5f075b*/
  {
    if ( v3 < 0 ) /*0x5f075f*/
    {
      v4 = dword_A8DAB8; /*0x5f0761*/
      LOBYTE(v4) = dword_A8DAB8 | 1; /*0x5f0767*/
      dword_A8DAB8 = v4; /*0x5f076a*/
      return 1; /*0x5f0775*/
    }
  }
  else if ( v3 < 0 ) /*0x5f0778*/
  {
    Debug::Log(); /*0x5f077f*/
    NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f078c*/
    v6 = dword_A8DAB8; /*0x5f0791*/
    LOBYTE(v6) = dword_A8DAB8 & 0xFE; /*0x5f0796*/
    dword_A8DAB8 = v6; /*0x5f0798*/
  }
  AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f07a7*/
  if ( !NullModemClass::DetectModem((NullModemClass *)&unk_A8EA70, this, a2) ) /*0x5f07b3*/
  {
    Debug::Log(); /*0x5f07c8*/
    nullsub_28(v30); /*0x5f07d5*/
    String::NormalizeNewlines(); /*0x5f07df*/
    StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f07e9*/
    Modem_field_0x08 = this->Modem_field_0x08; /*0x5f07ee*/
    if ( Modem_field_0x08 == 14400 ) /*0x5f07f6*/
    {
      Debug::Log(); /*0x5f0939*/
      this->Modem_field_0x08 = 19200; /*0x5f093e*/
      if ( (dword_A8D5F8 & 2) == 0 && *(_DWORD *)&dword_A8B238 == 1 ) /*0x5f0958*/
        NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f095f*/
      ObjectClass::DetachAndFree((ObjectClass *)&unk_A8EA70); /*0x5f0969*/
      NullModemClass::Init( /*0x5f0988*/
        (int *)&unk_A8EA70,
        *(_DWORD *)this->__pad_0,
        this->Modem_field_0x04,
        (const char *)this + 48,
        this->Modem_field_0x08,
        0,
        8,
        1);
      AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f0997*/
      if ( !NullModemClass::DetectModem((NullModemClass *)&unk_A8EA70, this, a2) ) /*0x5f09a3*/
      {
        Debug::Log(); /*0x5f09b5*/
        nullsub_28(v30); /*0x5f09c2*/
        String::NormalizeNewlines(); /*0x5f09cc*/
        StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f09d6*/
        StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6664); /*0x5f0a06*/
        v13 = (int *)GetStringCSF(g_Str_TXT_UNABLE_FIND_MODEM, 0, g_Str_File_NullDlg_CPP, 6664); /*0x5f0a1a*/
        Dialog::ShowMessageBox(v13, StringCSF, 0, 0, 0, v32); /*0x5f0a1b*/
        goto LABEL_21; /*0x5f0a1b*/
      }
    }
    else
    {
      if ( Modem_field_0x08 != 28800 ) /*0x5f0801*/
      {
        v20 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6692); /*0x5f082e*/
        v11 = (int *)GetStringCSF(g_Str_TXT_UNABLE_FIND_MODEM, 0, g_Str_File_NullDlg_CPP, 6692); /*0x5f0842*/
        Dialog::ShowMessageBox(v11, v20, 0, 0, 0, (int)v30); /*0x5f0843*/
LABEL_21:
        v8 = dword_A8DAB8; /*0x5f0a85*/
        LOBYTE(v8) = dword_A8DAB8 | 1; /*0x5f0a8a*/
        dword_A8DAB8 = v8; /*0x5f0a8d*/
        return 0; /*0x5f0a99*/
      }
      Debug::Log(); /*0x5f084d*/
      this->Modem_field_0x08 = 38400; /*0x5f0852*/
      if ( (dword_A8D5F8 & 2) == 0 && *(_DWORD *)&dword_A8B238 == 1 ) /*0x5f086c*/
        NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f0873*/
      ObjectClass::DetachAndFree((ObjectClass *)&unk_A8EA70); /*0x5f087d*/
      NullModemClass::Init( /*0x5f089c*/
        (int *)&unk_A8EA70,
        *(_DWORD *)this->__pad_0,
        this->Modem_field_0x04,
        (const char *)this + 48,
        this->Modem_field_0x08,
        0,
        8,
        1);
      AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f08ab*/
      if ( !NullModemClass::DetectModem((NullModemClass *)&unk_A8EA70, this, a2) ) /*0x5f08b7*/
      {
        Debug::Log(); /*0x5f08c9*/
        nullsub_28(v30); /*0x5f08d6*/
        String::NormalizeNewlines(); /*0x5f08e0*/
        StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f08ea*/
        v21 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6685); /*0x5f091a*/
        v12 = (int *)GetStringCSF(g_Str_TXT_UNABLE_FIND_MODEM, 0, g_Str_File_NullDlg_CPP, 6685); /*0x5f092e*/
        Dialog::ShowMessageBox(v12, v21, 0, 0, 0, v31); /*0x5f092f*/
        goto LABEL_21; /*0x5f092f*/
      }
    }
  }
  Debug::Log(); /*0x5f0a9f*/
  v9 = Dialog::RunModemDialing((Dialog *)&unk_A8EA70, (int)byte_AC11E8, this->Modem_field_0x0C, a2); /*0x5f0abd*/
  if ( (_BYTE)a2 ) /*0x5f0abf*/
  {
    MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x5f0ac8*/
    TacticalMap::Redraw((GScreenClass *)&stru_87F5F0.__pad_58[416]); /*0x5f0ad2*/
  }
  switch ( v9 ) /*0x5f0ae0*/
  {
    case 0: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0aec*/
      v33 = 1; /*0x5f0af4*/
      break; /*0x5f0af9*/
    case 1: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0b03*/
      v23 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6758); /*0x5f0b36*/
      v14 = (int *)GetStringCSF(aTxtNoCarrier, 0, g_Str_File_NullDlg_CPP, 6758); /*0x5f0b4a*/
      Dialog::ShowMessageBox(v14, v23, 0, 0, 0, (int)v30); /*0x5f0b4b*/
      goto LABEL_32; /*0x5f0b4b*/
    case 2: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0b55*/
      v24 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6764); /*0x5f0b88*/
      v15 = (int *)GetStringCSF(aTxtLineBusy, 0, g_Str_File_NullDlg_CPP, 6764); /*0x5f0b9c*/
      Dialog::ShowMessageBox(v15, v24, 0, 0, 0, (int)v30); /*0x5f0b9d*/
      goto LABEL_32; /*0x5f0b9d*/
    case 3: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0ba7*/
      v25 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6770); /*0x5f0bda*/
      v16 = (int *)GetStringCSF(aTxtNumberInval, 0, g_Str_File_NullDlg_CPP, 6770); /*0x5f0bee*/
      Dialog::ShowMessageBox(v16, v25, 0, 0, 0, (int)v30); /*0x5f0bef*/
      goto LABEL_32; /*0x5f0bef*/
    case 4: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0c4b*/
      v27 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6782); /*0x5f0c7e*/
      v18 = (int *)GetStringCSF(aTxtNoDialTone, 0, g_Str_File_NullDlg_CPP, 6782); /*0x5f0c92*/
      Dialog::ShowMessageBox(v18, v27, 0, 0, 0, (int)v30); /*0x5f0c93*/
      goto LABEL_32; /*0x5f0c93*/
    case 5: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0bf9*/
      v26 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6776); /*0x5f0c2c*/
      v17 = (int *)GetStringCSF(g_Str_TXT_ERROR_TIMEOUT, 0, g_Str_File_NullDlg_CPP, 6776); /*0x5f0c40*/
      Dialog::ShowMessageBox(v17, v26, 0, 0, 0, (int)v30); /*0x5f0c41*/
      goto LABEL_32; /*0x5f0c41*/
    case 6: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0c9a*/
      NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f0ca7*/
      dword_A8DAB8 &= ~1u; /*0x5f0ccc*/
      v28 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6790); /*0x5f0ce6*/
      v19 = (int *)GetStringCSF(aTxtDialingCanc, 0, g_Str_File_NullDlg_CPP, 6790); /*0x5f0cfa*/
      Dialog::ShowMessageBox(v19, v28, 0, 0, 0, (int)v30); /*0x5f0cfb*/
LABEL_32:
      v33 = 0; /*0x5f0d00*/
      break; /*0x5f0d00*/
    default:
      break;
  }
  nullsub_28(v30); /*0x5f0d05*/
  String::NormalizeNewlines(); /*0x5f0d14*/
  StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f0d1e*/
  v10 = dword_A8DAB8; /*0x5f0d23*/
  LOBYTE(v10) = dword_A8DAB8 | 1; /*0x5f0d28*/
  dword_A8DAB8 = v10; /*0x5f0d2b*/
  return v33; /*0x5f0766*/
}



// ==== 0x005F0D60  Modem::DetectAndConnect  this=Modem  sig=csp ====
char __fastcall Modem::DetectAndConnect(Modem *this, int a2)
{
  char v3; // bl
  int v4; // eax
  int v6; // eax
  int Modem_field_0x08; // eax
  int v8; // eax
  int v9; // eax
  int *v10; // [esp-14h] [ebp-34h]
  int *v11; // [esp-14h] [ebp-34h]
  int *v12; // [esp-14h] [ebp-34h]
  int *v13; // [esp-14h] [ebp-34h]
  int *v14; // [esp-14h] [ebp-34h]
  int *v15; // [esp-14h] [ebp-34h]
  int *v16; // [esp-14h] [ebp-34h]
  wchar_t *v17; // [esp-10h] [ebp-30h]
  wchar_t *v18; // [esp-10h] [ebp-30h]
  wchar_t *StringCSF; // [esp-10h] [ebp-30h]
  wchar_t *v20; // [esp-10h] [ebp-30h]
  wchar_t *v21; // [esp-10h] [ebp-30h]
  wchar_t *v22; // [esp-10h] [ebp-30h]
  wchar_t *v23; // [esp-10h] [ebp-30h]
  Dialog *v24; // [esp+0h] [ebp-20h]
  ObjectClass *v25; // [esp+0h] [ebp-20h]
  int v26; // [esp+0h] [ebp-20h]
  int v27; // [esp+0h] [ebp-20h]
  char v28; // [esp+Fh] [ebp-11h]

  v28 = 0; /*0x5f0d71*/
  Debug::Log(); /*0x5f0d76*/
  dword_A8DAB8 &= ~1u; /*0x5f0d8c*/
  dword_AC1234 = this; /*0x5f0d92*/
  v3 = Dialog::CheckButtonState(v24); /*0x5f0d9d*/
  Debug::Log(); /*0x5f0da4*/
  Debug::Log(); /*0x5f0dc1*/
  Debug::Log(); /*0x5f0dde*/
  Debug::Log(); /*0x5f0dfb*/
  Debug::Log(); /*0x5f0e1d*/
  if ( (_BYTE)a2 ) /*0x5f0e2b*/
  {
    if ( v3 < 0 ) /*0x5f0e2f*/
    {
      v4 = dword_A8DAB8; /*0x5f0e31*/
      LOBYTE(v4) = dword_A8DAB8 | 1; /*0x5f0e37*/
      dword_A8DAB8 = v4; /*0x5f0e3a*/
      return 1; /*0x5f0e45*/
    }
  }
  else if ( v3 < 0 ) /*0x5f0e48*/
  {
    Debug::Log(); /*0x5f0e4f*/
    NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f0e5c*/
    v6 = dword_A8DAB8; /*0x5f0e61*/
    LOBYTE(v6) = dword_A8DAB8 & 0xFE; /*0x5f0e66*/
    dword_A8DAB8 = v6; /*0x5f0e68*/
  }
  AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f0e77*/
  if ( !NullModemClass::DetectModem((NullModemClass *)&unk_A8EA70, this, a2) ) /*0x5f0e83*/
  {
    Debug::Log(); /*0x5f0e98*/
    nullsub_28(v25); /*0x5f0ea5*/
    String::NormalizeNewlines(); /*0x5f0eaf*/
    StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f0eb9*/
    Modem_field_0x08 = this->Modem_field_0x08; /*0x5f0ebe*/
    if ( Modem_field_0x08 == 14400 ) /*0x5f0ec6*/
    {
      Debug::Log(); /*0x5f1009*/
      this->Modem_field_0x08 = 19200; /*0x5f100e*/
      if ( (dword_A8D5F8 & 2) == 0 && *(_DWORD *)&dword_A8B238 == 1 ) /*0x5f1028*/
        NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f102f*/
      ObjectClass::DetachAndFree((ObjectClass *)&unk_A8EA70); /*0x5f1039*/
      NullModemClass::Init( /*0x5f1058*/
        (int *)&unk_A8EA70,
        *(_DWORD *)this->__pad_0,
        this->Modem_field_0x04,
        (const char *)this + 48,
        this->Modem_field_0x08,
        0,
        8,
        1);
      AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f1067*/
      if ( !NullModemClass::DetectModem((NullModemClass *)&unk_A8EA70, this, a2) ) /*0x5f1073*/
      {
        Debug::Log(); /*0x5f1085*/
        nullsub_28(v25); /*0x5f1092*/
        String::NormalizeNewlines(); /*0x5f109c*/
        StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f10a6*/
        StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6887); /*0x5f10d6*/
        v12 = (int *)GetStringCSF(g_Str_TXT_UNABLE_FIND_MODEM, 0, g_Str_File_NullDlg_CPP, 6887); /*0x5f10ea*/
        Dialog::ShowMessageBox(v12, StringCSF, 0, 0, 0, v27); /*0x5f10eb*/
        goto LABEL_21; /*0x5f10eb*/
      }
    }
    else
    {
      if ( Modem_field_0x08 != 28800 ) /*0x5f0ed1*/
      {
        v17 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6915); /*0x5f0efe*/
        v10 = (int *)GetStringCSF(g_Str_TXT_UNABLE_FIND_MODEM, 0, g_Str_File_NullDlg_CPP, 6915); /*0x5f0f12*/
        Dialog::ShowMessageBox(v10, v17, 0, 0, 0, (int)v25); /*0x5f0f13*/
LABEL_21:
        v8 = dword_A8DAB8; /*0x5f1155*/
        LOBYTE(v8) = dword_A8DAB8 | 1; /*0x5f115a*/
        dword_A8DAB8 = v8; /*0x5f115d*/
        return 0; /*0x5f1169*/
      }
      Debug::Log(); /*0x5f0f1d*/
      this->Modem_field_0x08 = 38400; /*0x5f0f22*/
      if ( (dword_A8D5F8 & 2) == 0 && *(_DWORD *)&dword_A8B238 == 1 ) /*0x5f0f3c*/
        NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f0f43*/
      ObjectClass::DetachAndFree((ObjectClass *)&unk_A8EA70); /*0x5f0f4d*/
      NullModemClass::Init( /*0x5f0f6c*/
        (int *)&unk_A8EA70,
        *(_DWORD *)this->__pad_0,
        this->Modem_field_0x04,
        (const char *)this + 48,
        this->Modem_field_0x08,
        0,
        8,
        1);
      AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f0f7b*/
      if ( !NullModemClass::DetectModem((NullModemClass *)&unk_A8EA70, this, a2) ) /*0x5f0f87*/
      {
        Debug::Log(); /*0x5f0f99*/
        nullsub_28(v25); /*0x5f0fa6*/
        String::NormalizeNewlines(); /*0x5f0fb0*/
        StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f0fba*/
        v18 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6908); /*0x5f0fea*/
        v11 = (int *)GetStringCSF(g_Str_TXT_UNABLE_FIND_MODEM, 0, g_Str_File_NullDlg_CPP, 6908); /*0x5f0ffe*/
        Dialog::ShowMessageBox(v11, v18, 0, 0, 0, v26); /*0x5f0fff*/
        goto LABEL_21; /*0x5f0fff*/
      }
    }
  }
  Debug::Log(); /*0x5f116f*/
  switch ( WaitModemConnection((int)&unk_A8EA70, v3 & 0x80, a2) ) /*0x5f118b*/
  {
    case 0: /*0x5f118b*/
      Debug::Log(); /*0x5f1197*/
      v28 = 1; /*0x5f119f*/
      break; /*0x5f11a4*/
    case 1: /*0x5f118b*/
      Debug::Log(); /*0x5f11ae*/
      v20 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6941); /*0x5f11e1*/
      v13 = (int *)GetStringCSF(aTxtNoCarrier, 0, g_Str_File_NullDlg_CPP, 6941); /*0x5f11f5*/
      Dialog::ShowMessageBox(v13, v20, 0, 0, 0, (int)v25); /*0x5f11f6*/
      goto LABEL_28; /*0x5f11f6*/
    case 3: /*0x5f118b*/
      Debug::Log(); /*0x5f1200*/
      v21 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6947); /*0x5f1233*/
      v14 = (int *)GetStringCSF(aTxtNumberInval, 0, g_Str_File_NullDlg_CPP, 6947); /*0x5f1247*/
      Dialog::ShowMessageBox(v14, v21, 0, 0, 0, (int)v25); /*0x5f1248*/
      goto LABEL_28; /*0x5f1248*/
    case 5: /*0x5f118b*/
      Debug::Log(); /*0x5f1252*/
      v22 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6953); /*0x5f1285*/
      v15 = (int *)GetStringCSF(g_Str_TXT_ERROR_TIMEOUT, 0, g_Str_File_NullDlg_CPP, 6953); /*0x5f1299*/
      Dialog::ShowMessageBox(v15, v22, 0, 0, 0, (int)v25); /*0x5f129a*/
      goto LABEL_28; /*0x5f129a*/
    case 6: /*0x5f118b*/
      Debug::Log(); /*0x5f12a1*/
      v23 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6959); /*0x5f12d4*/
      v16 = (int *)GetStringCSF(aTxtAnsweringCa, 0, g_Str_File_NullDlg_CPP, 6959); /*0x5f12e8*/
      Dialog::ShowMessageBox(v16, v23, 0, 0, 0, (int)v25); /*0x5f12e9*/
LABEL_28:
      v28 = 0; /*0x5f12ee*/
      break; /*0x5f12ee*/
    default:
      break;
  }
  nullsub_28(v25); /*0x5f12f3*/
  String::NormalizeNewlines(); /*0x5f1302*/
  StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f130c*/
  v9 = dword_A8DAB8; /*0x5f1311*/
  LOBYTE(v9) = dword_A8DAB8 | 1; /*0x5f1316*/
  dword_A8DAB8 = v9; /*0x5f1319*/
  return v28; /*0x5f0e36*/
}



// ==== 0x005F1350  AppendStringBuilderChar  this=-  sig=ida-proto ====
int __fastcall StringBuilder_AppendChar(char a1)
{
  int result; // eax

  result = dword_A8EA84; /*0x5f1358*/
  if ( dword_A8EA84 < dword_A8EA80 - 1 ) /*0x5f135f*/
  {
    *(_BYTE *)(dword_A8EA7C + dword_A8EA84) = a1; /*0x5f1367*/
    *(_BYTE *)(dword_A8EA7C + dword_A8EA84 + 1) = 0; /*0x5f1375*/
    return ++dword_A8EA84; /*0x5f137f*/
  }
  return result; /*0x5f1385*/
}



// ==== 0x005F1390  Timer::GetElapsed  this=Timer  sig=csp ====
int __thiscall Timer::GetElapsed(Timer *this)
{
  int v1; // edi

  v1 = *(_DWORD *)&this->__pad_6[2]; /*0x5f1396*/
  if ( *(_DWORD *)this->__pad_0 != -1 ) /*0x5f139c*/
    v1 += Timer::GetTicks() - *(_DWORD *)this->__pad_0; /*0x5f13a8*/
  return v1; /*0x5f13ac*/
}



// ==== 0x005F13B0  sub_5F13B0  this=-  sig=ida-proto ====
int sub_5F13B0()
{
  dword_AC1278 = 0; /*0x5f13b2*/
  dword_AC127C = 0; /*0x5f13b7*/
  dword_AC1280 = 0; /*0x5f13bc*/
  dword_AC1284 = 0; /*0x5f13c1*/
  return 0; /*0x5f13c6*/
}



// ==== 0x005F13D0  sub_5F13D0  this=-  sig=ida-proto ====
void sub_5F13D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5f13dc*/
  dbl_AC12E0 = Math::Sqrt(v0 + v0); /*0x5f13ee*/
}



// ==== 0x005F1400  sub_5F1400  this=-  sig=ida-proto ====
void sub_5F1400()
{
  dbl_AC1338 = dbl_AC12E0 / 60.0; /*0x5f140c*/
}



// ==== 0x005F1420  sub_5F1420  this=-  sig=ida-proto ====
void sub_5F1420()
{
  dbl_AC1320 = 1.0 / dbl_AC1338; /*0x5f142c*/
}



// ==== 0x005F1440  sub_5F1440  this=-  sig=ida-proto ====
void sub_5F1440()
{
  dbl_AC1318 = 0.0174532925199433 * 45.0; /*0x5f144c*/
}



// ==== 0x005F1460  sub_5F1460  this=-  sig=ida-proto ====
void sub_5F1460()
{
  dbl_AC12F0 = 0.0174532925199433 * 60.0; /*0x5f146c*/
}



// ==== 0x005F1480  sub_5F1480  this=-  sig=ida-proto ====
void sub_5F1480()
{
  dbl_AC1270 = 0.0174532925199433 * 90.0; /*0x5f148c*/
}



// ==== 0x005F14A0  sub_5F14A0  this=-  sig=ida-proto ====
__int64 sub_5F14A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC1270 - dbl_AC12F0); /*0x5f14b2*/
  result = Math::RoundToInt(v0 * dbl_AC12E0 * 0.5); /*0x5f14c6*/
  dword_AC1340 = result; /*0x5f14cb*/
  return result; /*0x5f14d0*/
}



// ==== 0x005F14E0  sub_5F14E0  this=-  sig=ida-proto ====
void sub_5F14E0()
{
  dbl_AC12F8 = Math::ArcTan((double)dword_AC1340 * 0.00390625); /*0x5f14f7*/
}



// ==== 0x005F1510  sub_5F1510  this=-  sig=ida-proto ====
void sub_5F1510()
{
  dbl_AC1310 = Math::ArcTan((double)(2 * dword_AC1340) / dbl_AC12E0); /*0x5f1532*/
}



// ==== 0x005F1540  sub_5F1540  this=-  sig=ida-proto ====
__int64 sub_5F1540()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1340) + 0.5); /*0x5f155b*/
  dword_AC1334 = result; /*0x5f1560*/
  return result; /*0x5f1566*/
}



// ==== 0x005F1570  sub_5F1570  this=-  sig=ida-proto ====
int sub_5F1570()
{
  word_AC12D8 = 0; /*0x5f1572*/
  word_AC12DA = 0; /*0x5f1578*/
  return 0; /*0x5f157e*/
}



// ==== 0x005F1580  sub_5F1580  this=-  sig=ida-proto ====
int sub_5F1580()
{
  dword_AC1300 = 0; /*0x5f1582*/
  dword_AC1304 = 0; /*0x5f1587*/
  dword_AC1308 = 0; /*0x5f158c*/
  return 0; /*0x5f1591*/
}



// ==== 0x005F15A0  sub_5F15A0  this=-  sig=ida-proto ====
int sub_5F15A0()
{
  dword_AC1330 = 0; /*0x5f15a5*/
  dword_AC1328 = 128; /*0x5f15af*/
  dword_AC132C = 128; /*0x5f15b4*/
  return 128; /*0x5f15b9*/
}



// ==== 0x005F15C0  ObjectClass::method_5F15C0  this=NullModemClass  sig=csp ====
_DWORD *__thiscall sub_5F15C0(ObjectClass *this, int a2, int a3, int a4, __int16 a5)
{
  this->ambientSoundController[2] = a2; /*0x5f15cc*/
  this->ambientSoundController[3] = a3; /*0x5f15d3*/
  this->? = (void *)a4; /*0x5f15da*/
  LOWORD(this->ambientSoundController[4]) = a5; /*0x5f15e2*/
  this->fallRate = 60; /*0x5f15eb*/
  this->customSound_controller[3] = 60; /*0x5f15ee*/
  this->AbstractClass = &NullModemClass::`vftable'; /*0x5f15f1*/
  this->ambientSoundController[1] = -1; /*0x5f15f7*/
  this->attachedBomb = 0; /*0x5f15fa*/
  this->customSound_controller[0] = 0; /*0x5f15fd*/
  this->? = 0; /*0x5f1600*/
  this->? = 500; /*0x5f1603*/
  this->? = 0; /*0x5f160a*/
  this->? = -1; /*0x5f160d*/
  this->? = 0; /*0x5f1610*/
  this->? = 0; /*0x5f1613*/
  this->occupant = 3000; /*0x5f1616*/
  this->owningHouseIndex = 1200; /*0x5f161d*/
  LOBYTE(this->nextObject) = 43; /*0x5f1624*/
  *(_DWORD *)&this->bombVisible = 0; /*0x5f1628*/
  this->health = 0; /*0x5f162b*/
  this->estimatedHealth = 0; /*0x5f162e*/
  this->ambientSoundController[0] = 0; /*0x5f1631*/
  this->customSound_controller[4] = -1; /*0x5f1634*/
  this->customSound = 1200; /*0x5f1637*/
  this->attachedTag = 0; /*0x5f163e*/
  return &this->AbstractClass; /*0x5f1641*/
}



// ==== 0x005F16E0  NullModemClass::Init  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::Init(int *this, int a2, int a3, const char *a4, int a5, char a6, int a7, int a8)
{
  int v9; // ebp
  _DWORD *v10; // eax
  _DWORD *inited; // eax
  int v12; // ecx
  int v13; // eax
  size_t v14; // ecx
  int v15; // eax
  size_t v16; // edx
  _DWORD *v17; // eax
  void **v18; // esi
  int v19; // ebx
  int v20; // eax
  int v21; // eax
  size_t v23; // [esp-4h] [ebp-14h]
  const char *v24; // [esp+14h] [ebp+4h]

  Debug::Log(); /*0x5f16eb*/
  v9 = 0; /*0x5f16f6*/
  if ( g_ClipboardBuffer ) /*0x5f16fd*/
    this->PacketsSent = NullModemClass::GetMember23(g_ClipboardBuffer); /*0x5f1704*/
  else
    this->PacketsSent = -1; /*0x5f1709*/
  if ( *(this + 14) ) /*0x5f1710*/
  {
    Debug::Log(); /*0x5f17a3*/
  }
  else
  {
    Debug::Log(); /*0x5f171e*/
    v10 = (_DWORD *)__2_YAPAXI_Z(0x54u); /*0x5f1725*/
    if ( v10 ) /*0x5f172f*/
      inited = NullModemClass::initConnection(v10, *(this + 17), *(this + 18), this->Active, *((_WORD *)this + 38)); /*0x5f1744*/
    else
      inited = 0; /*0x5f174b*/
    v12 = *(this + 23); /*0x5f174d*/
    *(this + 14) = (int)inited; /*0x5f1750*/
    inited[10] = v12; /*0x5f1753*/
    *(_DWORD *)(*(this + 14) + 44) = *(this + 24); /*0x5f175c*/
    *(_DWORD *)(*(this + 14) + 48) = *(this + 25); /*0x5f1765*/
    v23 = *(this + 18) * (*(_DWORD *)(*(this + 14) + 28) + 11); /*0x5f1775*/
    *(this + 21) = v23; /*0x5f1776*/
    v13 = __2_YAPAXI_Z(v23); /*0x5f1779*/
    v14 = this->Active; /*0x5f177e*/
    this->PacketsReceived = v13; /*0x5f1781*/
    v15 = __2_YAPAXI_Z(v14); /*0x5f1785*/
    v16 = this->PlayerIndex; /*0x5f178a*/
    this->PlayerIndex = v15; /*0x5f178d*/
    this->LastPacketTime = __2_YAPAXI_Z(v16); /*0x5f1799*/
  }
  *(this + 22) = 0; /*0x5f17ab*/
  this->PacketsReceived = 0; /*0x5f17ae*/
  if ( !g_ClipboardBuffer ) /*0x5f17b7*/
  {
    v17 = (_DWORD *)__2_YAPAXI_Z(0x2088u); /*0x5f17be*/
    if ( v17 ) /*0x5f17c8*/
      g_ClipboardBuffer = (HWND)WinModemClass::Construct(v17); /*0x5f17d1*/
    else
      g_ClipboardBuffer = 0; /*0x5f17d8*/
  }
  if ( a2 > 760 ) /*0x5f17e7*/
  {
    if ( a2 == 1000 ) /*0x5f18c4*/
    {
      v24 = aCom3; /*0x5f18db*/
    }
    else
    {
      if ( a2 != 1016 ) /*0x5f18c9*/
      {
LABEL_35:
        v24 = 0; /*0x5f18cb*/
        goto LABEL_38; /*0x5f18cf*/
      }
      v24 = aCom1; /*0x5f18d1*/
    }
  }
  else
  {
    if ( a2 == 760 ) /*0x5f17ed*/
    {
      v24 = aCom2; /*0x5f18b5*/
      goto LABEL_38; /*0x5f18bd*/
    }
    if ( a2 != 1 ) /*0x5f17f4*/
    {
      if ( a2 == 744 ) /*0x5f17fb*/
      {
        v24 = aCom4; /*0x5f1801*/
        goto LABEL_38; /*0x5f1809*/
      }
      goto LABEL_35; /*0x5f17fb*/
    }
    v18 = (void **)*(this + 13); /*0x5f180e*/
    v24 = a4; /*0x5f1817*/
    if ( v18 ) /*0x5f181b*/
    {
      FileFind::Close(v18); /*0x5f181f*/
      __3_YAXPAX_Z(v18); /*0x5f1825*/
      *(this + 13) = 0; /*0x5f182d*/
    }
    v19 = 0; /*0x5f1830*/
    while ( 1 ) /*0x5f1838*/
    {
      v20 = __2_YAPAXI_Z(0x1Cu); /*0x5f1838*/
      if ( v20 ) /*0x5f1842*/
        v9 = Modem::EnumerateDevices(v20, v19); /*0x5f184c*/
      *(this + 13) = v9; /*0x5f184e*/
      if ( *(_DWORD *)v9 ) /*0x5f1851*/
      {
        if ( !strcmp(a4, *(const char **)v9) ) /*0x5f1862*/
          break; /*0x5f1862*/
      }
      if ( v9 ) /*0x5f188b*/
      {
        FileFind::Close((void **)v9); /*0x5f188f*/
        __3_YAXPAX_Z((void *)v9); /*0x5f1895*/
      }
      ++v19; /*0x5f189d*/
      *(this + 13) = 0; /*0x5f189e*/
      if ( v19 >= 10 ) /*0x5f18a8*/
        goto LABEL_38; /*0x5f18a8*/
      v9 = 0; /*0x5f1834*/
    }
    v24 = *(const char **)(v9 + 4); /*0x5f18af*/
  }
LABEL_38:
  v21 = (*(int (__thiscall **)(HWND, const char *, int, _DWORD, int, int))(*(_DWORD *)g_ClipboardBuffer + 4))( /*0x5f18e3*/
          g_ClipboardBuffer,
          v24,
          a5,
          a6,
          a7,
          a8);
  this->PacketsSent = v21; /*0x5f190b*/
  if ( v21 == -1 ) /*0x5f190e*/
    return 0; /*0x5f1913*/
  Debug::Log(); /*0x5f191e*/
  NullModemClass::closeConnection((_DWORD *)*(this + 14), this->PacketsSent); /*0x5f192d*/
  *(this + 15) = 1; /*0x5f1937*/
  return 1; /*0x5f1910*/
}



// ==== 0x005F1950  NullModemClass::COMStub  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::COMStub(NullModemClass *this)
{
  return *((_DWORD *)this + 15); /*0x5f1953*/
}



// ==== 0x005F1960  ObjectClass::FreeResources  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::FreeResources(ObjectClass *this)
{
  BombClass *attachedBomb; // ecx

  attachedBomb = this->attachedBomb; /*0x5f1966*/
  if ( attachedBomb ) /*0x5f196b*/
  {
    (*(void (__thiscall **)(BombClass *, int))attachedBomb->AbstractClass)(attachedBomb, 1); /*0x5f1971*/
    this->attachedBomb = 0; /*0x5f1973*/
  }
  if ( this->customSound_controller[0] ) /*0x5f1976*/
  {
    __3_YAXPAX_Z((void *)this->customSound_controller[0]); /*0x5f197e*/
    this->customSound_controller[0] = 0; /*0x5f1986*/
  }
  if ( this->? ) /*0x5f1989*/
  {
    __3_YAXPAX_Z(this->?); /*0x5f1991*/
    this->? = 0; /*0x5f1999*/
  }
  if ( this->? ) /*0x5f199c*/
  {
    __3_YAXPAX_Z(this->?); /*0x5f19a4*/
    this->? = 0; /*0x5f19ac*/
  }
  this->ambientSoundController[0] = 0; /*0x5f19af*/
  return 1; /*0x5f19b2*/
}



// ==== 0x005F19C0  EventClass::CheckFlag  this=EventClass  sig=csp ====
int __thiscall EventClass::CheckFlag(EventClass *this)
{
  EventClass **EventClass_field_0x38; // eax

  EventClass_field_0x38 = (EventClass **)this->EventClass_field_0x38; /*0x5f19c0*/
  if ( EventClass_field_0x38 ) /*0x5f19c5*/
    EventClass::serializeEvent(EventClass_field_0x38[1]); /*0x5f19ca*/
  return 1; /*0x5f19d4*/
}



// ==== 0x005F19E0  Modem::OpenPort  this=Modem  sig=csp ====
int __thiscall Modem::OpenPort(Modem *this, _DWORD *a2)
{
  int v3; // ebp
  WinModemClass *v4; // eax
  int v6; // eax
  int v7; // eax
  const char *v8; // ebx
  void *v9; // esi
  int v10; // eax
  int v11; // edi
  int v12; // eax
  _DWORD *v15; // [esp+18h] [ebp+4h]

  v3 = 0; /*0x5f19e7*/
  if ( g_ClipboardBuffer ) /*0x5f19f5*/
  {
    SerialPort::Close((SerialPort *)g_ClipboardBuffer); /*0x5f1a1e*/
  }
  else
  {
    v4 = (WinModemClass *)__2_YAPAXI_Z(0x2088u); /*0x5f19fc*/
    if ( v4 ) /*0x5f1a06*/
      g_ClipboardBuffer = (HWND)WinModemClass::Construct(v4); /*0x5f1a0f*/
    else
      g_ClipboardBuffer = 0; /*0x5f1a16*/
  }
  v15 = (_DWORD *)a2[2]; /*0x5f1a2a*/
  v6 = *a2; /*0x5f1a2e*/
  if ( (int)*a2 > 760 )
  {
    v12 = v6 - 1000; /*0x5f1b01*/
    if ( v12 ) /*0x5f1b06*/
    {
      if ( v12 != 16 ) /*0x5f1b0b*/
        return 1; /*0x5f1b0b*/
      v8 = aCom1_0; /*0x5f1b1a*/
    }
    else
    {
      v8 = aCom3_0; /*0x5f1b21*/
    }
  }
  else
  {
    if ( *a2 != 760 )
    {
      v7 = v6 - 1; /*0x5f1a41*/
      if ( !v7 )
      {
        v9 = (void *)*((_DWORD *)this + 13); /*0x5f1a59*/
        v8 = (const char *)(a2 + 12); /*0x5f1a5c*/
        if ( v9 ) /*0x5f1a61*/
        {
          FileFind::Close(*((void ***)this + 13)); /*0x5f1a65*/
          __3_YAXPAX_Z(v9); /*0x5f1a6b*/
          *((_DWORD *)this + 13) = 0; /*0x5f1a73*/
        }
        while ( 1 )
        {
          v10 = __2_YAPAXI_Z(0x1Cu); /*0x5f1a78*/
          v11 = v10 ? Modem::EnumerateDevices(v10, v3) : 0;
          *((_DWORD *)this + 13) = v11; /*0x5f1a96*/
          if ( *(_DWORD *)v11 ) /*0x5f1a99*/
          {
            if ( !strcmp(v8, *(const char **)v11) ) /*0x5f1aa7*/
              break; /*0x5f1aa7*/
          }
          if ( v11 ) /*0x5f1ad0*/
          {
            FileFind::Close((void **)v11); /*0x5f1ad4*/
            __3_YAXPAX_Z((void *)v11); /*0x5f1ada*/
          }
          ++v3; /*0x5f1ae6*/
          *((_DWORD *)this + 13) = 0; /*0x5f1aea*/
          if ( v3 >= 10 ) /*0x5f1af1*/
            goto LABEL_29; /*0x5f1af1*/
        }
        v8 = *(const char **)(v11 + 4); /*0x5f1af5*/
        goto LABEL_29; /*0x5f1af8*/
      }
      if ( v7 == 743 ) /*0x5f1a49*/
      {
        v8 = aCom4_0; /*0x5f1a4f*/
        goto LABEL_29; /*0x5f1a54*/
      }
      return 1; /*0x5f1b17*/
    }
    v8 = aCom2_0; /*0x5f1afa*/
  }
LABEL_29:
  if ( (*(int (__thiscall **)(HWND, const char *, _DWORD *, _DWORD, int, int))(*(_DWORD *)g_ClipboardBuffer + 4))( /*0x5f1b40*/
         g_ClipboardBuffer,
         v8,
         v15,
         0,
         8,
         1) == -1 )
    return 1; /*0x5f1b45*/
  SerialPort::Close((SerialPort *)g_ClipboardBuffer); /*0x5f1b55*/
  return 0; /*0x5f1b0d*/
}



// ==== 0x005F1B70  ObjectClass::DetachAndFree  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::DetachAndFree(ObjectClass *this)
{
  int result; // eax

  if ( this->ambientSoundController[1] != -1 && g_ClipboardBuffer ) /*0x5f1b81*/
  {
    SerialPort::Close((SerialPort *)g_ClipboardBuffer); /*0x5f1b83*/
    if ( g_ClipboardBuffer ) /*0x5f1b90*/
      (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f1b96*/
    g_ClipboardBuffer = 0; /*0x5f1b98*/
    this->ambientSoundController[1] = -1; /*0x5f1ba4*/
    return ObjectClass::FreeResources(this); /*0x5f1bab*/
  }
  return result; /*0x5f1bb0*/
}



// ==== 0x005F1BC0  NullModemClass::Connect  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::Connect(NullModemClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // edx
  int result; // eax

  *((_DWORD *)this + 24) = a3; /*0x5f1bc8*/
  *((_DWORD *)this + 25) = a4; /*0x5f1bcf*/
  v5 = *((_DWORD *)this + 14); /*0x5f1bd2*/
  *((_DWORD *)this + 23) = a2; /*0x5f1bd5*/
  *(_DWORD *)(v5 + 40) = a2; /*0x5f1bd8*/
  *(_DWORD *)(*((_DWORD *)this + 14) + 44) = *((_DWORD *)this + 24); /*0x5f1be1*/
  result = *((_DWORD *)this + 14); /*0x5f1be4*/
  *(_DWORD *)(result + 48) = *((_DWORD *)this + 25); /*0x5f1bea*/
  return result; /*0x5f1bed*/
}



// ==== 0x005F1BF0  Stream::WriteBlock  this=Stream  sig=csp ====
int __thiscall Stream::WriteBlock(int *this, int a2, int a3, int a4)
{
  int result; // eax

  if ( !*(this + 15) ) /*0x5f1bf3*/
    return 0; /*0x5f1bfa*/
  result = (*(int (__thiscall **)(_DWORD, int, int, int, _DWORD))(*(_DWORD *)*(this + 14) + 8))( /*0x5f1c16*/
             *(this + 14),
             a2,
             a3,
             a4,
             0);
  if ( !result ) /*0x5f1c1b*/
    ++*(this + 26); /*0x5f1c1d*/
  return result; /*0x5f1bfc*/
}



// ==== 0x005F1C30  ObjectTypeClass::CreateInstance  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::CreateInstance(ObjectTypeClass *this, int a2, int a3)
{
  if ( *(_DWORD *)&this->? ) /*0x5f1c30*/
    return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)&this->?[8] + 16))(*(_DWORD *)&this->?[8], a2, a3); /*0x5f1c4b*/
  else
    return 0; /*0x5f1c37*/
}



// ==== 0x005F1C60  NullModemClass::ReadPacket  this=NullModemClass  sig=csp ====
int __thiscall Stream_ReadPacket(int this)
{
  unsigned int v3; // ecx
  int v4; // edi
  char *v5; // eax
  int v6; // ecx
  char *v7; // ebp
  int v8; // edi
  int v9; // ecx
  int v10; // edx
  int v11; // ebx
  int v12; // edi
  int v13; // ecx
  int v14; // edi
  int v15; // ecx
  unsigned int v16; // [esp+14h] [ebp-4h]

  if ( !*(_DWORD *)(this + 60) ) /*0x5f1c69*/
    return 0; /*0x5f1c79*/
  v3 = WinModemClass::ReadBytes( /*0x5f1c97*/
         *(_DWORD *)(this + 88) + *(_DWORD *)(this + 80),
         *(_DWORD *)(this + 84) - *(_DWORD *)(this + 88))
     + *(_DWORD *)(this + 88);
  *(_DWORD *)(this + 88) = v3; /*0x5f1c9c*/
  if ( v3 < 0xB ) /*0x5f1c9f*/
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 56) + 20))(*(_DWORD *)(this + 56)); /*0x5f1c9f*/
  v4 = 0; /*0x5f1cb4*/
  if ( (int)(v3 - 2) < 0 ) /*0x5f1cb8*/
    goto LABEL_11; /*0x5f1cb8*/
  v5 = *(char **)(this + 80); /*0x5f1cba*/
  while ( *(_WORD *)&v5[v4] != 0xDABD ) /*0x5f1cc3*/
  {
    if ( ++v4 > (int)(v3 - 2) ) /*0x5f1cc8*/
      goto LABEL_11; /*0x5f1cc8*/
  }
  if ( v4 == -1 ) /*0x5f1ccf*/
  {
LABEL_11:
    memcpy(*(void **)(this + 80), (const void *)(*(_DWORD *)(this + 80) + v4), 1u); /*0x5f1cd1*/
    v6 = *(_DWORD *)(this + 56); /*0x5f1ce0*/
    *(_DWORD *)(this + 88) = 1; /*0x5f1ce3*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 20))(v6); /*0x5f1cef*/
  }
  else if ( v3 - v4 >= 6 ) /*0x5f1d05*/
  {
    v7 = &v5[v4]; /*0x5f1d36*/
    if ( *(_WORD *)&v5[v4 + 4] == 0xDEAF ) /*0x5f1d39*/
    {
      v10 = *(_DWORD *)(this + 8); /*0x5f1d6a*/
      v11 = *((unsigned __int16 *)v7 + 1); /*0x5f1d6d*/
      if ( v11 <= v10 ) /*0x5f1d75*/
      {
        v16 = v11 + v4 + 10; /*0x5f1dbb*/
        if ( v16 > v3 ) /*0x5f1dbf*/
        {
          if ( v4 ) /*0x5f1dc3*/
          {
            memcpy(v5, &v5[v4], v3 - v4); /*0x5f1dcc*/
            *(_DWORD *)(this + 88) -= v4; /*0x5f1dd9*/
          }
          return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 56) + 20))(*(_DWORD *)(this + 56)); /*0x5f1cb0*/
        }
        if ( Audio_Read(v7 + 6, v11) == *(_DWORD *)&v5[v11 + 6 + v4] ) /*0x5f1e06*/
        {
          if ( !(*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 56) + 12))( /*0x5f1e58*/
                  *(_DWORD *)(this + 56),
                  *(_DWORD *)(this + 80) + v4 + 6,
                  v11) )
            ++*(_DWORD *)(this + 108); /*0x5f1e5f*/
          memcpy(*(void **)(this + 80), (const void *)(*(_DWORD *)(this + 80) + v16), *(_DWORD *)(this + 88) - v16); /*0x5f1e74*/
          *(_DWORD *)(this + 88) -= v16; /*0x5f1e81*/
          return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 56) + 20))(*(_DWORD *)(this + 56)); /*0x5f1e8b*/
        }
        else
        {
          ++*(_DWORD *)(this + 112); /*0x5f1e11*/
          Debug::Log(aSerialPacketFa); /*0x5f1e14*/
          v14 = v4 + 2; /*0x5f1e1f*/
          memcpy(*(void **)(this + 80), (const void *)(*(_DWORD *)(this + 80) + v14), *(_DWORD *)(this + 88) - v14); /*0x5f1e2a*/
          v15 = *(_DWORD *)(this + 56); /*0x5f1e32*/
          *(_DWORD *)(this + 88) -= v14; /*0x5f1e3a*/
          return (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 20))(v15); /*0x5f1e3f*/
        }
      }
      else
      {
        Debug::Log("Serial packet length too long by %d bytes\n", v11 - v10); /*0x5f1d7f*/
        v12 = v4 + 2; /*0x5f1d8a*/
        memcpy(*(void **)(this + 80), (const void *)(*(_DWORD *)(this + 80) + v12), *(_DWORD *)(this + 88) - v12); /*0x5f1d95*/
        v13 = *(_DWORD *)(this + 56); /*0x5f1d9d*/
        *(_DWORD *)(this + 88) -= v12; /*0x5f1da5*/
        return (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 20))(v13); /*0x5f1daa*/
      }
    }
    else
    {
      v8 = v4 + 2; /*0x5f1d3b*/
      memcpy(v5, &v5[v8], v3 - v8); /*0x5f1d46*/
      v9 = *(_DWORD *)(this + 56); /*0x5f1d4e*/
      *(_DWORD *)(this + 88) -= v8; /*0x5f1d56*/
      return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 20))(v9); /*0x5f1d5b*/
    }
  }
  else
  {
    memcpy(v5, &v5[v4], v3 - v4); /*0x5f1d0d*/
    *(_DWORD *)(this + 88) -= v4; /*0x5f1d1a*/
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 56) + 20))(*(_DWORD *)(this + 56)); /*0x5f1d24*/
  }
}



// ==== 0x005F1EA0  Count::GetCountQueue  this=Count  sig=csp ====
int __thiscall Count::GetCountQueue(Count *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 14); /*0x5f1ea0*/
  if ( v1 ) /*0x5f1ea5*/
    return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 40); /*0x5f1eaa*/
  else
    return 0; /*0x5f1eae*/
}



// ==== 0x005F1EE0  NullModemClass::GetBridgeIndexThunk  this=NullModemClass  sig=csp ====
int __thiscall CellClass::GetBridgeIndexThunk(NullModemClass *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 14); /*0x5f1ee0*/
  if ( v1 ) /*0x5f1ee5*/
    return CellClass::GetBridgeIndex(*(CellClass **)(v1 + 4)); /*0x5f1eea*/
  else
    return 0; /*0x5f1eef*/
}



// ==== 0x005F1F00  NullModemClass::Flush  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::Flush(NullModemClass *this, int a2)
{
  int result; // eax

  result = *((_DWORD *)this + 14); /*0x5f1f00*/
  if ( result ) /*0x5f1f05*/
    return Rect::SetRedraw(*(Rect **)(result + 4), 1); /*0x5f1f0c*/
  return result; /*0x5f1f11*/
}



// ==== 0x005F1F20  ObjectClass::method_5F1F20  this=ObjectClass  sig=csp ====
int __thiscall sub_5F1F20(ObjectClass *this)
{
  int v2; // esi
  int *vtable1; // ecx
  int TileIndex; // eax

  v2 = 0; /*0x5f1f27*/
  vtable1 = (int *)this->attachedBomb->?; /*0x5f1f2c*/
  if ( vtable1[10] <= 0 ) /*0x5f1f34*/
    return 0; /*0x5f1f5b*/
  while ( 1 ) /*0x5f1f37*/
  {
    TileIndex = Terrain::GetTileIndex((Terrain *)vtable1, v2); /*0x5f1f37*/
    if ( TileIndex ) /*0x5f1f3e*/
    {
      if ( !*(_BYTE *)(*(_DWORD *)(TileIndex + 20) + 2) && (*(_BYTE *)TileIndex & 2) == 0 ) /*0x5f1f4d*/
        break; /*0x5f1f4d*/
    }
    ++v2; /*0x5f1f52*/
    vtable1 = (int *)this->attachedBomb->?; /*0x5f1f53*/
    if ( v2 >= vtable1[10] ) /*0x5f1f59*/
      return 0; /*0x5f1f59*/
  }
  return *(_DWORD *)(TileIndex + 20); /*0x5f1f5b*/
}



// ==== 0x005F1F70  NullModemClass::SendPacket  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::SendPacket(NullModemClass *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int result; // eax

  result = *((_DWORD *)this + 14); /*0x5f1f70*/
  if ( result ) /*0x5f1f75*/
    return EventClass::SetData(*(EventClass **)(result + 4), a3, a4, a5, a6, a7); /*0x5f1f93*/
  return result; /*0x5f1f98*/
}



// ==== 0x005F1FA0  NullModemClass::DetectModem  this=NullModemClass  sig=csp ====
char __thiscall NullModemClass::DetectModem(NullModemClass *this, _DWORD *a2, int a3)
{
  wchar_t *StringCSF; // eax
  Dialog *MessageBox; // eax
  Dialog *v6; // edi
  int v7; // ebp
  Dialog *v8; // ecx
  _DWORD *v10; // esi
  char *v11; // esi
  int *v12; // eax
  int v13; // edx
  int *v14; // eax
  int v15; // eax
  int *v16; // eax
  int *v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // esi
  int *v21; // eax
  int *v22; // eax
  int *v23; // [esp+BCh] [ebp-220h]
  int *v24; // [esp+BCh] [ebp-220h]
  wchar_t *v25; // [esp+C0h] [ebp-21Ch]
  wchar_t *v26; // [esp+C0h] [ebp-21Ch]
  wchar_t *v27; // [esp+C0h] [ebp-21Ch]
  wchar_t *v28; // [esp+C0h] [ebp-21Ch]
  wchar_t *v29; // [esp+C0h] [ebp-21Ch]
  wchar_t *v30; // [esp+C0h] [ebp-21Ch]
  wchar_t *v31; // [esp+C0h] [ebp-21Ch]
  wchar_t *v32; // [esp+C0h] [ebp-21Ch]
  wchar_t *v33; // [esp+C4h] [ebp-218h]
  wchar_t *v34; // [esp+C4h] [ebp-218h]
  wchar_t *v35; // [esp+C4h] [ebp-218h]
  wchar_t *v36; // [esp+C4h] [ebp-218h]
  wchar_t *v37; // [esp+C4h] [ebp-218h]
  wchar_t *v38; // [esp+C4h] [ebp-218h]
  wchar_t *v39; // [esp+C4h] [ebp-218h]
  int v40; // [esp+D0h] [ebp-20Ch]
  char *Block; // [esp+E0h] [ebp-1FCh]
  Dialog *v42; // [esp+E4h] [ebp-1F8h]
  int v43; // [esp+E8h] [ebp-1F4h]
  _BYTE v44[240]; // [esp+ECh] [ebp-1F0h] BYREF
  char v45[256]; // [esp+1DCh] [ebp-100h] BYREF

  v43 = 0; /*0x5f1fb1*/
  Debug::Log(); /*0x5f1fb9*/
  if ( !NullModemClass::sendData((NullModemClass *)g_ClipboardBuffer) ) /*0x5f1fce*/
    return 0; /*0x5f1fce*/
  StringCSF = GetStringCSF(aTxtInitializin, 0, g_Str_File_NullMgr_CPP, 1134); /*0x5f1fe7*/
  MessageBox = (Dialog *)CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5f1ff0*/
  v6 = MessageBox; /*0x5f1ff5*/
  v42 = MessageBox; /*0x5f1ff9*/
  if ( !MessageBox ) /*0x5f1ffd*/
  {
LABEL_7:
    NullModemClass::receiveData((NullModemClass *)g_ClipboardBuffer); /*0x5f2118*/
    return 0; /*0x5f212f*/
  }
  Dialog::Show(MessageBox); /*0x5f2005*/
  Debug::Log(); /*0x5f200f*/
  (*(void (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f2033*/
    g_ClipboardBuffer,
    aAte1,
    13,
    v44,
    81,
    90,
    2,
    -1);
  Debug::Log(); /*0x5f2046*/
  Debug::Log(); /*0x5f2050*/
  (*(void (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f2074*/
    g_ClipboardBuffer,
    aAtq0,
    13,
    v44,
    81,
    90,
    2,
    -1);
  Debug::Log(); /*0x5f2087*/
  Debug::Log(); /*0x5f2091*/
  (*(void (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f20b5*/
    g_ClipboardBuffer,
    aAtv1,
    13,
    v44,
    81,
    90,
    2,
    -1);
  Debug::Log(); /*0x5f20c8*/
  *((_DWORD *)this + 7) = 1; /*0x5f20d5*/
  this->Active = 1; /*0x5f20d8*/
  v7 = (*(int (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f20fd*/
         g_ClipboardBuffer,
         word_832678,
         13,
         v44,
         81,
         180,
         2,
         -1);
  if ( v7 < 2 ) /*0x5f2102*/
  {
    Debug::Log(); /*0x5f2109*/
LABEL_5:
    v8 = v6; /*0x5f2111*/
LABEL_6:
    Dialog::Destroy(v8); /*0x5f2113*/
    goto LABEL_7; /*0x5f2113*/
  }
  v10 = a2; /*0x5f2132*/
  if ( a2[4] == -1 ) /*0x5f213d*/
  {
    v7 = (*(int (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f2161*/
           g_ClipboardBuffer,
           &g_INI_DefaultBuffer,
           13,
           v44,
           81,
           300,
           1,
           -1);
  }
  else
  {
    Debug::Log(); /*0x5f216d*/
    Block = (char *)__2_YAPAXI_Z(strlen(*(const char **)(dword_A8DB50 + 4 * a2[4])) + 2); /*0x5f219f*/
    strcpy(Block, *(const char **)(dword_A8DB50 + 4 * a2[4])); /*0x5f21ba*/
    v11 = strtok(Block, asc_832630); /*0x5f21c8*/
    if ( v11 ) /*0x5f21cf*/
    {
      while ( 1 ) /*0x5f21db*/
      {
        Debug::Log(); /*0x5f21db*/
        v7 = (*(int (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f21fe*/
               g_ClipboardBuffer,
               v11,
               13,
               v44,
               81,
               90,
               1,
               -1);
        Debug::Log(); /*0x5f2211*/
        if ( v7 < 2 ) /*0x5f221c*/
          break; /*0x5f221c*/
        v11 = strtok(0, asc_832630); /*0x5f222a*/
        if ( !v11 ) /*0x5f2231*/
          goto LABEL_18; /*0x5f2231*/
      }
      v33 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1215); /*0x5f2257*/
      v25 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1215); /*0x5f226e*/
      v12 = (int *)GetStringCSF(aTxtErrorNoInit, 0, g_Str_File_NullMgr_CPP, 1215); /*0x5f2280*/
      if ( Dialog::ShowMessageBox(v12, v25, v33, 0, 0, v40) ) /*0x5f228a*/
      {
        __3_YAXPAX_Z(Block); /*0x5f2298*/
        v8 = v42; /*0x5f229d*/
        goto LABEL_6; /*0x5f22a4*/
      }
      v43 = 1; /*0x5f22a9*/
    }
LABEL_18:
    __3_YAXPAX_Z(Block); /*0x5f22b1*/
    v10 = a2; /*0x5f22bb*/
    v6 = v42; /*0x5f22c2*/
  }
  if ( *v10 == 1 ) /*0x5f22cc*/
  {
    v13 = *((_DWORD *)this + 13); /*0x5f22d2*/
    if ( v13 ) /*0x5f22d7*/
    {
      strcpy(v45, "AT"); /*0x5f22e9*/
      memset(&v45[3], 0, 253); /*0x5f2306*/
      if ( *(_DWORD *)(v13 + 24) ) /*0x5f2309*/
      {
        Debug::Log(); /*0x5f2319*/
        strcpy(&v45[2], *(const char **)(*((_DWORD *)this + 13) + 24)); /*0x5f2346*/
        v7 = (*(int (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f236d*/
               g_ClipboardBuffer,
               v45,
               13,
               v44,
               81,
               60,
               1,
               -1);
        Debug::Log(); /*0x5f2380*/
        if ( v7 != 2 && v7 != 3 ) /*0x5f2390*/
        {
          v34 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1247); /*0x5f23b4*/
          v26 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1247); /*0x5f23cb*/
          v14 = (int *)GetStringCSF(aTxtNoFlowContr, 0, g_Str_File_NullMgr_CPP, 1247); /*0x5f23dd*/
          if ( Dialog::ShowMessageBox(v14, v26, v34, 0, 0, v40) ) /*0x5f23e7*/
            goto LABEL_47; /*0x5f23ee*/
        }
        v10 = a2; /*0x5f23f4*/
      }
      v15 = *((_DWORD *)this + 13); /*0x5f2400*/
      if ( v10[6] ) /*0x5f23fb*/
      {
        if ( !*(_DWORD *)(v15 + 16) ) /*0x5f240e*/
          goto LABEL_37; /*0x5f240e*/
        Debug::Log(); /*0x5f2419*/
        strcpy(&v45[2], *(const char **)(*((_DWORD *)this + 13) + 16)); /*0x5f2446*/
        (*(void (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f246a*/
          g_ClipboardBuffer,
          v45,
          13,
          v44,
          81,
          60,
          1,
          -1);
        Debug::Log(); /*0x5f247e*/
        if ( v7 != 2 && v7 != 3 ) /*0x5f2492*/
        {
          v35 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1266); /*0x5f24ba*/
          v27 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1266); /*0x5f24d1*/
          v16 = (int *)GetStringCSF(aTxtNoCompEnabl, 0, g_Str_File_NullMgr_CPP, 1266); /*0x5f24e3*/
          if ( Dialog::ShowMessageBox(v16, v27, v35, 0, 0, v40) ) /*0x5f24ed*/
          {
            v8 = v42; /*0x5f24fa*/
            goto LABEL_6; /*0x5f24fe*/
          }
        }
      }
      else
      {
        if ( !*(_DWORD *)(v15 + 20) ) /*0x5f2508*/
          goto LABEL_37; /*0x5f2508*/
        Debug::Log(); /*0x5f2513*/
        strcpy(&v45[2], *(const char **)(*((_DWORD *)this + 13) + 20)); /*0x5f2540*/
        (*(void (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f2564*/
          g_ClipboardBuffer,
          v45,
          13,
          v44,
          81,
          60,
          1,
          -1);
        Debug::Log(); /*0x5f2578*/
        if ( v7 != 2 && v7 != 3 ) /*0x5f2588*/
        {
          v36 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1281); /*0x5f25ac*/
          v28 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1281); /*0x5f25c3*/
          v17 = (int *)GetStringCSF(aTxtNoCompDisab, 0, g_Str_File_NullMgr_CPP, 1281); /*0x5f25d5*/
          if ( Dialog::ShowMessageBox(v17, v28, v36, 0, 0, v40) ) /*0x5f25df*/
            goto LABEL_47; /*0x5f25e6*/
        }
      }
      v10 = a2; /*0x5f25ec*/
LABEL_37:
      v18 = *((_DWORD *)this + 13); /*0x5f25f3*/
      if ( v10[7] ) /*0x5f25f3*/
      {
        if ( *(_DWORD *)(v18 + 8) ) /*0x5f2601*/
        {
          Debug::Log(); /*0x5f2611*/
          strcpy(&v45[2], *(const char **)(*((_DWORD *)this + 13) + 8)); /*0x5f263e*/
          (*(void (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f2662*/
            g_ClipboardBuffer,
            v45,
            13,
            v44,
            81,
            60,
            1,
            -1);
          Debug::Log(); /*0x5f2676*/
          if ( v7 != 2 && v7 != 3 ) /*0x5f268a*/
          {
            v37 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1301); /*0x5f26b2*/
            v29 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1301); /*0x5f26c9*/
            v23 = (int *)GetStringCSF(aTxtNoEcEnableR, 0, g_Str_File_NullMgr_CPP, 1301); /*0x5f26e0*/
            v19 = Dialog::ShowMessageBox(v23, v29, v37, 0, 0, v40); /*0x5f26e5*/
            goto LABEL_46; /*0x5f26e5*/
          }
        }
      }
      else if ( *(_DWORD *)(v18 + 12) ) /*0x5f26ea*/
      {
        Debug::Log(); /*0x5f26fa*/
        strcpy(&v45[2], *(const char **)(*((_DWORD *)this + 13) + 12)); /*0x5f2727*/
        (*(void (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f274b*/
          g_ClipboardBuffer,
          v45,
          13,
          v44,
          81,
          60,
          1,
          -1);
        Debug::Log(); /*0x5f275f*/
        if ( v7 != 2 && v7 != 3 ) /*0x5f276f*/
        {
          v38 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1316); /*0x5f2793*/
          v30 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1316); /*0x5f27aa*/
          v24 = (int *)GetStringCSF(aTxtNoEcDisable, 0, g_Str_File_NullMgr_CPP, 1316); /*0x5f27c1*/
          v19 = Dialog::ShowMessageBox(v24, v30, v38, 0, 0, v40); /*0x5f27c6*/
LABEL_46:
          if ( v19 ) /*0x5f27cd*/
          {
LABEL_47:
            v8 = v42; /*0x5f27cf*/
            goto LABEL_6; /*0x5f27d3*/
          }
        }
      }
      v6 = v42; /*0x5f27d8*/
    }
  }
  Debug::Log(); /*0x5f27dc*/
  v20 = (*(int (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f2808*/
          g_ClipboardBuffer,
          aAts00,
          13,
          v44,
          81,
          90,
          2,
          -1);
  Debug::Log(); /*0x5f281a*/
  if ( v20 != 2 ) /*0x5f2825*/
  {
    v39 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1334); /*0x5f2849*/
    v31 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1334); /*0x5f2860*/
    v21 = (int *)GetStringCSF(aTxtErrorNoDisa, 0, g_Str_File_NullMgr_CPP, 1334); /*0x5f2872*/
    if ( Dialog::ShowMessageBox(v21, v31, v39, 0, 0, v40) ) /*0x5f287c*/
      goto LABEL_5; /*0x5f2883*/
    ++v43; /*0x5f2889*/
  }
  if ( v43 >= 3 ) /*0x5f2892*/
  {
    v32 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullMgr_CPP, 1347); /*0x5f28b8*/
    v22 = (int *)GetStringCSF(aTxtErrorTooMan, 0, g_Str_File_NullMgr_CPP, 1347); /*0x5f28ca*/
    Dialog::ShowMessageBox(v22, v32, 0, 0, 0, v40); /*0x5f28d4*/
    goto LABEL_5; /*0x5f28d9*/
  }
  Dialog::Destroy(v6); /*0x5f28e0*/
  Debug::Log(); /*0x5f28ea*/
  NullModemClass::receiveData((NullModemClass *)g_ClipboardBuffer); /*0x5f28f8*/
  if ( (*(int (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f291f*/
         g_ClipboardBuffer,
         word_832678,
         13,
         v44,
         81,
         90,
         2,
         -1) >= 2 )
    return 1; /*0x5f2940*/
  Debug::Log(); /*0x5f2926*/
  return 0; /*0x5f2123*/
}



// ==== 0x005F2950  Dialog::RunModemDialing  this=Dialog  sig=csp ====
int __thiscall Dialog::RunModemDialing(Dialog *this, int a2, int a3, char a4)
{
  char v5; // bl
  int v6; // esi
  wchar_t *StringCSF; // eax
  LPARAM v8; // ebp
  wchar_t *v9; // eax
  HWND MessageBox; // eax
  int v11; // ebp
  TechnoTypeClass *v12; // ecx
  HWND v13; // ecx
  int v15; // [esp+1Ch] [ebp-108h]
  __int16 Buffer; // [esp+2Ch] [ebp-F8h] BYREF
  char v17; // [esp+2Eh] [ebp-F6h]
  HWND hWnd; // [esp+30h] [ebp-F4h]
  char Source[240]; // [esp+34h] [ebp-F0h] BYREF

  v5 = 1; /*0x5f2961*/
  v6 = 3; /*0x5f2963*/
  Debug::Log(); /*0x5f2968*/
  if ( a4 == 1 ) /*0x5f2979*/
    StringCSF = GetStringCSF((wchar_t *)aTxtModemConner, 0, g_Str_File_NullMgr_CPP, 1409); /*0x5f298c*/
  else
    StringCSF = GetStringCSF(aTxtDialing, 0, g_Str_File_NullMgr_CPP, 1411); /*0x5f299f*/
  v8 = (LPARAM)StringCSF; /*0x5f29ba*/
  g_NetworkTestFlag = 0; /*0x5f29bc*/
  v9 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1415); /*0x5f29c3*/
  MessageBox = CreateMessageBox(v8, (LPARAM)v9, (LONG)&g_NetworkTestFlag); /*0x5f29cc*/
  hWnd = MessageBox; /*0x5f29d3*/
  if ( !MessageBox ) /*0x5f29d7*/
    return v6; /*0x5f29d7*/
  Dialog::Show((Dialog *)MessageBox); /*0x5f29df*/
  Debug::Log(); /*0x5f29e9*/
  (*(void (__thiscall **)(HWND, int))(*(_DWORD *)g_ClipboardBuffer + 8))(g_ClipboardBuffer, a3); /*0x5f2a01*/
  Debug::Log(); /*0x5f2a09*/
  (*(void (__thiscall **)(HWND, int, char *, int, int))(*(_DWORD *)g_ClipboardBuffer + 20))( /*0x5f2a24*/
    g_ClipboardBuffer,
    60,
    Source,
    81,
    -1);
  Debug::Log(); /*0x5f2a2c*/
  (*(void (__thiscall **)(HWND, int))(*(_DWORD *)g_ClipboardBuffer + 24))(g_ClipboardBuffer, a2); /*0x5f2a44*/
  (*(void (__thiscall **)(HWND, int (*)()))(*(_DWORD *)g_ClipboardBuffer + 36))(g_ClipboardBuffer, PumpEventLoop); /*0x5f2a54*/
  g_NetworkTestFlag = 0; /*0x5f2a57*/
  v11 = *(_DWORD *)&this->__pad_10[20]; /*0x5f2a5e*/
  Debug::Log(); /*0x5f2a66*/
  while ( 1 ) /*0x5f2a6e*/
  {
    if ( (unsigned __int8)Dialog::PumpMessages() == 1 || g_NetworkTestFlag ) /*0x5f2a82*/
    {
      v13 = g_ClipboardBuffer; /*0x5f2c72*/
      v6 = 6; /*0x5f2c78*/
      if ( g_ClipboardBuffer ) /*0x5f2c7f*/
      {
LABEL_34:
        v17 = 0; /*0x5f2c81*/
        Buffer = word_8327A0; /*0x5f2c8d*/
        WinModemClass::WriteSerial((int *)v13, &Buffer, 2u); /*0x5f2c99*/
      }
LABEL_35:
      Debug::Log(); /*0x5f2c9e*/
      goto LABEL_36; /*0x5f2ca3*/
    }
    LOBYTE(v12) = 0; /*0x5f2a88*/
    ScreenSaver::Process(v12, v15); /*0x5f2a8a*/
    memset(Source, 0, sizeof(Source)); /*0x5f2a9c*/
    v11 = (*(int (__thiscall **)(HWND, int, char *, int, int))(*(_DWORD *)g_ClipboardBuffer + 20))( /*0x5f2ab1*/
            g_ClipboardBuffer,
            v11,
            Source,
            81,
            15);
    if ( v11 == -1000 ) /*0x5f2ab9*/
    {
      v13 = g_ClipboardBuffer; /*0x5f2be6*/
      v6 = 6; /*0x5f2bec*/
      if ( g_ClipboardBuffer ) /*0x5f2bf3*/
        goto LABEL_34; /*0x5f2bf3*/
      goto LABEL_35; /*0x5f2bf3*/
    }
    _strupr(Source); /*0x5f2ac4*/
    if ( strlen(Source) ) /*0x5f2acd*/
      Debug::Log(); /*0x5f2ae6*/
    if ( strstr(Source, off_8327D8) ) /*0x5f2af8*/
    {
      memset(byte_AC1288, 0, 0x50u); /*0x5f2b12*/
      strncpy(byte_AC1288, Source, 0x4Fu); /*0x5f2b1e*/
      v6 = 0; /*0x5f2b27*/
      Debug::Log(); /*0x5f2b2f*/
    }
    else
    {
      if ( !strncmp(Source, aBusy, 4u) ) /*0x5f2b48*/
      {
        v6 = 2; /*0x5f2b54*/
      }
      else if ( !strncmp(Source, aNoC, 4u) ) /*0x5f2b67*/
      {
        v6 = 1; /*0x5f2b77*/
      }
      else if ( !strncmp(Source, aNoD, 4u) ) /*0x5f2b8b*/
      {
        v6 = 4; /*0x5f2b9b*/
      }
      else
      {
        if ( strncmp(Source, aErro, 4u) ) /*0x5f2baf*/
          goto LABEL_23; /*0x5f2bb9*/
        v6 = 3; /*0x5f2bbb*/
      }
      Debug::Log(); /*0x5f2bca*/
    }
    v5 = 0; /*0x5f2bd2*/
LABEL_23:
    if ( v11 <= 0 ) /*0x5f2bd6*/
      break; /*0x5f2bd6*/
    if ( v5 != 1 ) /*0x5f2bdb*/
      goto LABEL_36; /*0x5f2bdb*/
  }
  Debug::Log(); /*0x5f2c1a*/
  if ( strlen(Source) ) /*0x5f2c2b*/
    Debug::Log(); /*0x5f2c3c*/
  if ( g_ClipboardBuffer ) /*0x5f2c4c*/
  {
    Buffer = word_8327A0; /*0x5f2c5c*/
    v17 = 0; /*0x5f2c61*/
    WinModemClass::WriteSerial((int *)g_ClipboardBuffer, &Buffer, 2u); /*0x5f2c66*/
  }
  v6 = 5; /*0x5f2c6b*/
LABEL_36:
  (*(void (__thiscall **)(HWND, _DWORD))(*(_DWORD *)g_ClipboardBuffer + 36))(g_ClipboardBuffer, 0); /*0x5f2cab*/
  g_NetworkTestFlag = 0; /*0x5f2cbc*/
  Dialog::Destroy((Dialog *)hWnd); /*0x5f2cc3*/
  return v6; /*0x5f2cca*/
}



// ==== 0x005F2CE0  ObjectClass::WaitModemConnection  this=ObjectClass  sig=csp ====
int __userpurge WaitModemConnection@<eax>(int a1@<ecx>, int a2@<edi>, char a3)
{
  int v3; // ebp
  wchar_t *StringCSF; // eax
  LPARAM v5; // esi
  char v6; // bl
  wchar_t *v7; // eax
  HWND MessageBox; // eax
  int v9; // esi
  TechnoTypeClass *v10; // ecx
  wchar_t *v11; // eax
  int *v12; // eax
  int *v13; // eax
  HWND v14; // ecx
  wchar_t *v16; // [esp-Ah] [ebp-11Ch]
  wchar_t *v17; // [esp-Ah] [ebp-11Ch]
  int v18; // [esp+6h] [ebp-10Ch]
  char v19; // [esp+19h] [ebp-F9h]
  int Buffer; // [esp+1Ah] [ebp-F8h] BYREF
  HWND v21; // [esp+1Eh] [ebp-F4h]
  HWND hWnd; // [esp+22h] [ebp-F0h]
  _BYTE Source[236]; // [esp+26h] [ebp-ECh] BYREF

  v19 = HIBYTE(a1); /*0x5f2cf2*/
  v3 = 3; /*0x5f2cfb*/
  if ( a3 == 1 ) /*0x5f2d00*/
    StringCSF = GetStringCSF((wchar_t *)aTxtModemConner_0, 0, g_Str_File_NullMgr_CPP, 1580); /*0x5f2d13*/
  else
    StringCSF = GetStringCSF(aTxtWaitingForC_0, 0, g_Str_File_NullMgr_CPP, 1582); /*0x5f2d26*/
  v5 = (LPARAM)StringCSF; /*0x5f2d30*/
  Debug::Log(); /*0x5f2d32*/
  v6 = 1; /*0x5f2d41*/
  g_NetworkTestFlag = 0; /*0x5f2d52*/
  v7 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1589); /*0x5f2d59*/
  MessageBox = CreateMessageBox(v5, (LPARAM)v7, (LONG)&g_NetworkTestFlag); /*0x5f2d62*/
  v21 = MessageBox; /*0x5f2d69*/
  if ( !MessageBox ) /*0x5f2d6d*/
    return 3; /*0x5f3155*/
  Dialog::Show(MessageBox); /*0x5f2d76*/
  (*(void (__thiscall **)(HWND, int (*)(), int))(*(_DWORD *)g_ClipboardBuffer + 36))( /*0x5f2d88*/
    g_ClipboardBuffer,
    PumpEventLoop,
    a2);
  g_NetworkTestFlag = 0; /*0x5f2d8b*/
  v9 = 3600; /*0x5f2d92*/
  while ( 1 )
  {
    if ( (unsigned __int8)Dialog::PumpMessages() == 1 || g_NetworkTestFlag ) /*0x5f2dab*/
    {
      v3 = 6; /*0x5f30f5*/
      Debug::Log(); /*0x5f30fa*/
      v14 = g_ClipboardBuffer; /*0x5f30ff*/
      if ( !g_ClipboardBuffer ) /*0x5f310a*/
        goto LABEL_36; /*0x5f310a*/
      goto LABEL_35; /*0x5f310a*/
    }
    LOBYTE(v10) = 0; /*0x5f2db1*/
    ScreenSaver::Process(v10, v18); /*0x5f2db3*/
    memset(Source, 0, 0xF0u); /*0x5f2dc3*/
    v9 = (*(int (__thiscall **)(HWND, int, _BYTE *, int, int))(*(_DWORD *)g_ClipboardBuffer + 20))(
           g_ClipboardBuffer,
           v9,
           Source,
           81,
           v19 != 0 ? 15 : -1);
    Debug::Log(); /*0x5f2ded*/
    if ( v9 == -1000 ) /*0x5f2dfb*/
    {
      v3 = 6; /*0x5f30c0*/
      Debug::Log(); /*0x5f30c5*/
      v14 = g_ClipboardBuffer; /*0x5f30ca*/
      if ( !g_ClipboardBuffer ) /*0x5f30d5*/
        goto LABEL_36; /*0x5f30d5*/
LABEL_35:
      BYTE2(Buffer) = 0; /*0x5f310c*/
      LOWORD(Buffer) = word_8327A0; /*0x5f3118*/
      WinModemClass::WriteSerial((int *)v14, &Buffer, 2u); /*0x5f3124*/
      goto LABEL_36; /*0x5f3124*/
    }
    _strupr(Source); /*0x5f2e06*/
    if ( strlen(Source) ) /*0x5f2e0f*/
      Debug::Log(); /*0x5f2e28*/
    if ( !strncmp(Source, aRing, 4u) ) /*0x5f2e3c*/
    {
      Debug::Log(); /*0x5f2e4d*/
      v11 = GetStringCSF(aTxtAnswering, 0, g_Str_File_NullMgr_CPP, 1647); /*0x5f2e66*/
      Network_Start(hWnd, (LPARAM)v11); /*0x5f2e71*/
      Debug::Log(); /*0x5f2e7b*/
      WinModemClass::WriteSerial((int *)g_ClipboardBuffer, aAta, strlen(aAta)); /*0x5f2e9e*/
      v19 = 1; /*0x5f2ea7*/
      v9 = *(_DWORD *)(Buffer + 36); /*0x5f2eac*/
      goto LABEL_22; /*0x5f2eaf*/
    }
    if ( strstr(Source, aConnect) ) /*0x5f2ebe*/
    {
      memset(byte_AC1288, 0, 0x50u); /*0x5f2ed8*/
      strncpy(byte_AC1288, Source, 0x4Fu); /*0x5f2ee4*/
      v3 = 0; /*0x5f2eed*/
      Debug::Log(); /*0x5f2ef5*/
    }
    else if ( !strncmp(Source, aBusy, 4u) ) /*0x5f2f0e*/
    {
      v3 = 2; /*0x5f2f1e*/
      Debug::Log(); /*0x5f2f29*/
    }
    else if ( !strncmp(Source, aNoC, 4u) ) /*0x5f2f42*/
    {
      v3 = 1; /*0x5f2f52*/
      Debug::Log(); /*0x5f2f5d*/
    }
    else
    {
      if ( strncmp(Source, aErro, 4u) ) /*0x5f2f73*/
        goto LABEL_22; /*0x5f2f7d*/
      v3 = 3; /*0x5f2f83*/
      Debug::Log(); /*0x5f2f8e*/
      v21 = (HWND)asc_82083C; /*0x5f2f9d*/
      v16 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullMgr_CPP, 1671); /*0x5f2fba*/
      v12 = (int *)GetStringCSF(aTxtErrorError, 0, g_Str_File_NullMgr_CPP, 1671); /*0x5f2fcc*/
      Dialog::ShowMessageBox(v12, v16, 0, 0, 0, v18); /*0x5f2fd6*/
    }
    v6 = 0; /*0x5f2fdb*/
LABEL_22:
    if ( v9 <= 0 ) /*0x5f2fdf*/
      break; /*0x5f2fdf*/
LABEL_25:
    if ( v6 != 1 ) /*0x5f2ff1*/
      goto LABEL_36; /*0x5f2ff1*/
  }
  if ( !v19 ) /*0x5f2fe7*/
  {
    v9 = 3600; /*0x5f2fe9*/
    goto LABEL_25; /*0x5f2fe9*/
  }
  if ( (*(char (__thiscall **)(HWND))(*(_DWORD *)g_ClipboardBuffer + 12))(g_ClipboardBuffer) >= 0 ) /*0x5f3009*/
  {
    Debug::Log(); /*0x5f3038*/
    if ( strlen(Source) ) /*0x5f3041*/
      Debug::Log(); /*0x5f305a*/
    v21 = (HWND)asc_82083C; /*0x5f3079*/
    v17 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullMgr_CPP, 1687); /*0x5f3086*/
    v13 = (int *)GetStringCSF(g_Str_TXT_ERROR_TIMEOUT, 0, g_Str_File_NullMgr_CPP, 1687); /*0x5f3098*/
    Dialog::ShowMessageBox(v13, v17, 0, 0, 0, v18); /*0x5f30a2*/
    Debug::Log(); /*0x5f30ac*/
    v3 = 5; /*0x5f30b4*/
  }
  else
  {
    sprintf(byte_AC1288, "%s", aConnected); /*0x5f301a*/
    v3 = 0; /*0x5f3024*/
    Debug::Log(); /*0x5f3026*/
  }
LABEL_36:
  (*(void (__thiscall **)(HWND, _DWORD))(*(_DWORD *)g_ClipboardBuffer + 36))(g_ClipboardBuffer, 0); /*0x5f3129*/
  g_NetworkTestFlag = 0; /*0x5f313a*/
  Dialog::Destroy(v21); /*0x5f3141*/
  return v3; /*0x5f3149*/
}



// ==== 0x005F3170  NullModemClass::Negotiate  this=NullModemClass  sig=csp ====
char __thiscall NullModemClass::Negotiate(NullModemClass *this)
{
  int v3; // eax
  int i; // eax
  int v5; // esi
  bool v6; // zf
  _BYTE Buffer[4]; // [esp+78h] [ebp-58h] BYREF
  char Str1[84]; // [esp+7Ch] [ebp-54h] BYREF

  if ( this->PacketsSent == -1 || !g_ClipboardBuffer ) /*0x5f3189*/
    return 0; /*0x5f3189*/
  dword_A8DAB8 &= ~1u; /*0x5f319e*/
  if ( (*(int (__thiscall **)(HWND, char *, int, char *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f31be*/
         g_ClipboardBuffer,
         word_832678,
         13,
         Str1,
         81,
         90,
         1,
         -1) == 2 )
  {
    dword_A8DAB8 |= 1u; /*0x5f31c8*/
    return 1; /*0x5f31d3*/
  }
  (*(void (__thiscall **)(HWND, _DWORD))(*(_DWORD *)g_ClipboardBuffer + 16))(g_ClipboardBuffer, 0); /*0x5f31de*/
  sub_4A50A0(53); /*0x5f31e6*/
  (*(void (__thiscall **)(HWND, int))(*(_DWORD *)g_ClipboardBuffer + 16))(g_ClipboardBuffer, 1); /*0x5f31f4*/
  if ( (*(int (__thiscall **)(HWND, char *, int, char *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f3218*/
         g_ClipboardBuffer,
         word_832678,
         13,
         Str1,
         81,
         90,
         1,
         -1) == 2 )
  {
    v3 = dword_A8DAB8; /*0x5f321a*/
LABEL_7:
    dword_A8DAB8 = v3 | 1; /*0x5f321f*/
    return 1; /*0x5f322d*/
  }
  for ( i = this->q00B; /*0x5f3234*/
        i > 0;
        i = (*(int (__thiscall **)(HWND, int, char *, int, int))(*(_DWORD *)g_ClipboardBuffer + 20))(
              g_ClipboardBuffer,
              i,
              Str1,
              81,
              -1) )
  {
    ; /*0x5f3248*/
  }
  Buffer[0] = this->LastPacketTime; /*0x5f3258*/
  Buffer[1] = Buffer[0]; /*0x5f325c*/
  Buffer[2] = Buffer[0]; /*0x5f3260*/
  Buffer[3] = 0; /*0x5f326b*/
  WinModemClass::WriteSerial((int *)g_ClipboardBuffer, Buffer, 3u); /*0x5f3270*/
  v5 = this->q00B; /*0x5f3275*/
  if ( v5 > 0 ) /*0x5f327a*/
  {
    do /*0x5f32ad*/
      v5 = (*(int (__thiscall **)(HWND, int, char *, int, int))(*(_DWORD *)g_ClipboardBuffer + 20))( /*0x5f329d*/
             g_ClipboardBuffer,
             v5,
             Str1,
             81,
             -1);
    while ( strncmp(Str1, g_INI_Key_OK, 2u) && v5 > 0 ); /*0x5f32ad*/
  }
  if ( (*(int (__thiscall **)(HWND, _UNKNOWN **, int, char *, int, _DWORD, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f32d3*/
         g_ClipboardBuffer,
         &off_832A0C,
         13,
         Str1,
         81,
         this->q00A,
         1,
         -1) != 2 )
  {
    dword_A8DAB8 |= 1u; /*0x5f3310*/
    return 0; /*0x5f3317*/
  }
  v6 = (*(int (__thiscall **)(HWND, _UNKNOWN **, int, char *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f32f3*/
         g_ClipboardBuffer,
         &off_832A08,
         13,
         Str1,
         81,
         60,
         1,
         -1) == 2;
  v3 = dword_A8DAB8; /*0x5f32f6*/
  if ( v6 ) /*0x5f32fb*/
    goto LABEL_7; /*0x5f32fb*/
  dword_A8DAB8 |= 1u; /*0x5f3304*/
  return 0; /*0x5f31c5*/
}



// ==== 0x005F3320  AppState::CallMethod  this=AppState  sig=csp ====
int __stdcall AppState_CallMethod(int a1)
{
  return (*(int (__thiscall **)(HWND, int))(*(_DWORD *)g_ClipboardBuffer + 32))(g_ClipboardBuffer, a1); /*0x5f3330*/
}



// ==== 0x005F3340  ObjectClass::nullsub_28  this=ObjectClass  sig=csp ====
int nullsub_28(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5f3340*/
}



// ==== 0x005F3350  String::NormalizeNewlines  this=String  sig=ida-proto ====
int String_NormalizeNewlines()
{
  const char *v0; // esi
  __int64 v1; // rax
  char v2; // al

  v0 = (const char *)dword_A8EA7C; /*0x5f3351*/
  v1 = 0; /*0x5f335d*/
  if ( strlen((const char *)dword_A8EA7C) ) /*0x5f3361*/
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
    v0 = (const char *)dword_A8EA7C; /*0x5f337d*/
    goto LABEL_7; /*0x5f337d*/
  }
  return v1; /*0x5f3394*/
}



// ==== 0x005F33A0  StringBuffer::Reset  this=StringBuffer  sig=csp ====
_BYTE *__thiscall StringBuffer::Reset(StringBuffer *this)
{
  _BYTE *result; // eax

  result = (_BYTE *)*((_DWORD *)this + 3); /*0x5f33a0*/
  *result = 0; /*0x5f33a3*/
  *((_DWORD *)this + 5) = 0; /*0x5f33a6*/
  return result; /*0x5f33ad*/
}



// ==== 0x005F33B0  PumpEventLoop  this=-  sig=ida-proto ====
int sub_5F33B0()
{
  unsigned __int16 v0; // ax
  int v1; // esi

  Event::Dispatch(); /*0x5f33b1*/
  MessageLoop(); /*0x5f33b6*/
  v0 = EventQueue::Process(dword_87F770); /*0x5f33c1*/
  v1 = v0; /*0x5f33c9*/
  if ( !v0 )
    return g_NetworkTestFlag != 0 ? 0xFFFFFC18 : 0;
  Timer::PumpMessages((HWND *)dword_87F770); /*0x5f33d7*/
  if ( v1 != 27 )
    return g_NetworkTestFlag != 0 ? 0xFFFFFC18 : 0;
  g_NetworkTestFlag = 1; /*0x5f33e1*/
  return -1000; /*0x5f33ed*/
}



// ==== 0x005F3440  EventClass::GetState  this=EventClass  sig=csp ====
int __stdcall EventClass::GetState(int a1)
{
  return 0; /*0x5f3442*/
}



// ==== 0x005F3450  Dialog::CheckButtonState  this=Dialog  sig=csp ====
int Dialog::CheckButtonState(Dialog *this)
{
  int v1; // esi
  _BYTE v3[84]; // [esp+4h] [ebp-54h] BYREF

  v1 = (*(int (__thiscall **)(HWND))(*(_DWORD *)g_ClipboardBuffer + 12))(g_ClipboardBuffer); /*0x5f3467*/
  if ( (*(int (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f3483*/
         g_ClipboardBuffer,
         word_832678,
         13,
         v3,
         81,
         90,
         1,
         -1) == 2 )
    return v1 & 0xFFFFFF7F; /*0x5f3485*/
  return v1; /*0x5f348d*/
}



// ==== 0x005F34D0  sub_5F34D0  this=-  sig=csp ====
int __stdcall sub_5F34D0(char *String)
{
  int v1; // esi
  unsigned int v2; // kr04_4

  v1 = 0; /*0x5f34de*/
  v2 = strlen(String) + 1; /*0x5f34e0*/
  if ( (int)(v2 - 1) <= 0 ) /*0x5f34e9*/
    return atoi(String); /*0x5f3501*/
  while ( isdigit(String[v1]) ) /*0x5f34fa*/
  {
    if ( ++v1 >= (int)(v2 - 1) ) /*0x5f34ff*/
      return atoi(String); /*0x5f34ff*/
  }
  return -1; /*0x5f350a*/
}



// ==== 0x005F3520  NullModemClass::COMStub_Return0  this=NullModemClass  sig=csp ====
int __stdcall NullModemClass::COMStub_Return0(NullModemClass *this)
{
  return 0; /*0x5f3522*/
}



// ==== 0x005F3530  NullModemClass::Send  this=NullModemClass  sig=csp ====
int __stdcall NullModemClass::Send(NullModemClass *this)
{
  return 0; /*0x5f3532*/
}



// ==== 0x005F3540  NullModemClass::Disconnect  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::Disconnect(NullModemClass *this, int a2, int a3, int a4)
{
  return (*(int (__thiscall **)(NullModemClass *, int, int, int, int))(*(_DWORD *)this->ConnectionClass + 52))( /*0x5f3556*/
           this,
           a2,
           a3,
           a4,
           1);
}



// ==== 0x005F3560  NullModemClass::Release  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::Release(NullModemClass *this, int a2, int a3, int a4, int a5)
{
  int result; // eax

  if ( !*((_DWORD *)this + 15) ) /*0x5f3563*/
    return 0; /*0x5f356a*/
  result = (*(int (__thiscall **)(_DWORD, int, int, int, _DWORD))(**((_DWORD **)this + 14) + 8))( /*0x5f3586*/
             *((_DWORD *)this + 14),
             a2,
             a3,
             a4,
             0);
  if ( !result ) /*0x5f358b*/
    ++*((_DWORD *)this + 26); /*0x5f358d*/
  return result; /*0x5f356c*/
}



// ==== 0x005F35A0  NullModemClass::ddtor  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::ddtor(NullModemClass *this, int a2, int a3, int a4)
{
  if ( *((_DWORD *)this + 15) ) /*0x5f35a0*/
    return (*(int (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 14) + 16))(*((_DWORD *)this + 14), a2, a3); /*0x5f35bb*/
  else
    return 0; /*0x5f35a7*/
}



// ==== 0x005F35D0  NullModemClass::Receive  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::Receive(NullModemClass *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 14); /*0x5f35d0*/
  if ( v1 ) /*0x5f35d5*/
    return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 40); /*0x5f35da*/
  else
    return 0; /*0x5f35de*/
}



// ==== 0x005F35F0  NullModemClass::CheckStatus  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::CheckStatus(NullModemClass *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 14); /*0x5f35f0*/
  if ( v1 ) /*0x5f35f5*/
    return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 56); /*0x5f35fa*/
  else
    return 0; /*0x5f35fe*/
}



// ==== 0x005F3610  NullModemClass::GetAddress  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::GetAddress(NullModemClass *this, int a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 14); /*0x5f3610*/
  if ( v2 ) /*0x5f3615*/
    return *(_DWORD *)(*(_DWORD *)(v2 + 4) + 40); /*0x5f361a*/
  else
    return 0; /*0x5f3620*/
}



// ==== 0x005F3630  NullModemClass::SetAddress  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::SetAddress(NullModemClass *this, int a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 14); /*0x5f3630*/
  if ( v2 ) /*0x5f3635*/
    return *(_DWORD *)(*(_DWORD *)(v2 + 4) + 56); /*0x5f363a*/
  else
    return 0; /*0x5f3640*/
}



// ==== 0x005F3650  NullModemClass::QueryInterface  this=NullModemClass  sig=csp ====
_DWORD *__thiscall NullModemClass::QueryInterface(NullModemClass *this, char a2)
{
  void **v3; // edi

  v3 = (void **)*((_DWORD *)this + 13); /*0x5f3654*/
  *(_DWORD *)this->ConnectionClass = &NullModemClass::`vftable'; /*0x5f3657*/
  if ( v3 ) /*0x5f365f*/
  {
    FileFind::Close(v3); /*0x5f3663*/
    __3_YAXPAX_Z(v3); /*0x5f3669*/
  }
  ObjectClass::FreeResources((ObjectClass *)this); /*0x5f3673*/
  if ( this->PacketsSent != -1 ) /*0x5f3680*/
  {
    if ( !g_ClipboardBuffer ) /*0x5f368a*/
      goto LABEL_10; /*0x5f368a*/
    SerialPort::Close((SerialPort *)g_ClipboardBuffer); /*0x5f368c*/
    if ( g_ClipboardBuffer ) /*0x5f3699*/
      (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f369f*/
    g_ClipboardBuffer = 0; /*0x5f36a1*/
    this->PacketsSent = -1; /*0x5f36ad*/
    ObjectClass::FreeResources((ObjectClass *)this); /*0x5f36b0*/
  }
  if ( g_ClipboardBuffer ) /*0x5f36bd*/
  {
    (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f36c3*/
    g_ClipboardBuffer = 0; /*0x5f36c5*/
  }
LABEL_10:
  *(_DWORD *)this->ConnectionClass = &ConnManClass::`vftable'; /*0x5f36cf*/
  if ( (a2 & 1) != 0 ) /*0x5f36db*/
    __3_YAXPAX_Z(this); /*0x5f36de*/
  return this->ConnectionClass; /*0x5f36e8*/
}



// ==== 0x005F36F0  sub_5F36F0  this=-  sig=ida-proto ====
void sub_5F36F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5f36fc*/
  dbl_AC1368 = Math::Sqrt(v0 + v0); /*0x5f370e*/
}



// ==== 0x005F3720  sub_5F3720  this=-  sig=ida-proto ====
void sub_5F3720()
{
  dbl_AC13C0 = dbl_AC1368 / 60.0; /*0x5f372c*/
}



// ==== 0x005F3740  sub_5F3740  this=-  sig=ida-proto ====
void sub_5F3740()
{
  dbl_AC13A8 = 1.0 / dbl_AC13C0; /*0x5f374c*/
}



// ==== 0x005F3760  sub_5F3760  this=-  sig=ida-proto ====
void sub_5F3760()
{
  dbl_AC13A0 = 0.0174532925199433 * 45.0; /*0x5f376c*/
}



// ==== 0x005F3780  sub_5F3780  this=-  sig=ida-proto ====
void sub_5F3780()
{
  dbl_AC1370 = 0.0174532925199433 * 60.0; /*0x5f378c*/
}



// ==== 0x005F37A0  sub_5F37A0  this=-  sig=ida-proto ====
void sub_5F37A0()
{
  dbl_AC1348 = 0.0174532925199433 * 90.0; /*0x5f37ac*/
}



// ==== 0x005F37C0  sub_5F37C0  this=-  sig=ida-proto ====
__int64 sub_5F37C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC1348 - dbl_AC1370); /*0x5f37d2*/
  result = Math::RoundToInt(v0 * dbl_AC1368 * 0.5); /*0x5f37e6*/
  dword_AC13C8 = result; /*0x5f37eb*/
  return result; /*0x5f37f0*/
}



// ==== 0x005F3800  sub_5F3800  this=-  sig=ida-proto ====
void sub_5F3800()
{
  dbl_AC1378 = Math::ArcTan((double)dword_AC13C8 * 0.00390625); /*0x5f3817*/
}



// ==== 0x005F3830  sub_5F3830  this=-  sig=ida-proto ====
void sub_5F3830()
{
  dbl_AC1390 = Math::ArcTan((double)(2 * dword_AC13C8) / dbl_AC1368); /*0x5f3852*/
}



// ==== 0x005F3860  sub_5F3860  this=-  sig=ida-proto ====
__int64 sub_5F3860()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC13C8) + 0.5); /*0x5f387b*/
  dword_AC13BC = result; /*0x5f3880*/
  return result; /*0x5f3886*/
}



// ==== 0x005F3890  sub_5F3890  this=-  sig=ida-proto ====
int sub_5F3890()
{
  dword_AC1360 = 0; /*0x5f3892*/
  return 0; /*0x5f389e*/
}



// ==== 0x005F38A0  sub_5F38A0  this=-  sig=ida-proto ====
int sub_5F38A0()
{
  dword_AC1380 = 0; /*0x5f38a2*/
  dword_AC1384 = 0; /*0x5f38a7*/
  dword_AC1388 = 0; /*0x5f38ac*/
  return 0; /*0x5f38b1*/
}



// ==== 0x005F38C0  sub_5F38C0  this=-  sig=ida-proto ====
int sub_5F38C0()
{
  dword_AC13B8 = 0; /*0x5f38c5*/
  dword_AC13B0 = 128; /*0x5f38cf*/
  dword_AC13B4 = 128; /*0x5f38d4*/
  return 128; /*0x5f38d9*/
}



// ==== 0x005F38E0  sub_5F38E0  this=-  sig=ida-proto ====
int sub_5F38E0()
{
  dword_AC1350 = 0; /*0x5f38e2*/
  dword_AC1354 = 0; /*0x5f38e7*/
  dword_AC1358 = 0; /*0x5f38ec*/
  dword_AC135C = 0; /*0x5f38f1*/
  return 0; /*0x5f38f6*/
}



// ==== 0x005F3900  ObjectClass::ctor  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ObjectClass::ctor(ObjectClass *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x5f3904*/
  this->occupant = 0; /*0x5f3910*/
  this->owningHouseIndex = 0; /*0x5f3913*/
  this->fallRate = 0; /*0x5f3916*/
  this->health = 255; /*0x5f3919*/
  this->estimatedHealth = 255; /*0x5f391c*/
  this->spawnStatus = 1; /*0x5f3927*/
  this->inLimbo = 1; /*0x5f392a*/
  this->isAliveFlag = 1; /*0x5f3930*/
  this->isVisible = 1; /*0x5f3936*/
  this->nextObject = 0; /*0x5f393c*/
  this->attachedTag = 0; /*0x5f393f*/
  this->attachedBomb = 0; /*0x5f3942*/
  this->customSound = -1; /*0x5f3945*/
  this->bombVisible = 0; /*0x5f3948*/
  this->isOnMap = 0; /*0x5f394b*/
  this->visibilityFlags = 0; /*0x5f394e*/
  this->needsRedraw = 0; /*0x5f3951*/
  this->inOpenToppedTransport = 0; /*0x5f3957*/
  this->isSelected = 0; /*0x5f395d*/
  this->hasParachute = 0; /*0x5f3963*/
  this->parachute = 0; /*0x5f3969*/
  this->onBridge = 0; /*0x5f396f*/
  this->isFallingDown = 0; /*0x5f3975*/
  this->wasFallingDown = 0; /*0x5f397b*/
  this->isBomb = 0; /*0x5f3981*/
  this->lastLayer = -1; /*0x5f3987*/
  this->isInLogic = 0; /*0x5f398d*/
  this->location[0] = dword_AC1380; /*0x5f399f*/
  this->location[1] = dword_AC1384; /*0x5f39ab*/
  v2 = dword_AC1388; /*0x5f39ae*/
  this->lineTrailer = 0; /*0x5f39b4*/
  this->AbstractClass = &ObjectClass::`vftable'; /*0x5f39ba*/
  this->location[2] = v2; /*0x5f39c0*/
  this->? = &ObjectClass::`vftable'; /*0x5f39c6*/
  this->? = &ObjectClass::`vftable'; /*0x5f39cd*/
  this->? = &ObjectClass::`vftable'; /*0x5f39d4*/
  AudioController::Init((AudioController *)this->ambientSoundController); /*0x5f39db*/
  AudioController::Init((AudioController *)this->customSound_controller); /*0x5f39e3*/
  if ( dword_A8E370 < dword_A8E368 /*0x5f3a1c*/
    || (byte_A8E36D || !dword_A8E368)
    && dword_A8E374 > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8E360 + 8))(
         &dword_A8E360,
         dword_A8E368 + dword_A8E374,
         0) )
  {
    v3 = dword_A8E370++; /*0x5f3a29*/
    *((_DWORD *)dword_A8E364 + v3) = this; /*0x5f3a38*/
  }
  if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x5f3a6f*/
    || (BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
    && g_BuildingLoadQueue_Array.Height > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
         &g_BuildingLoadQueue_Array.PowerBonus,
         g_BuildingLoadQueue_Array.ExtraPowerBonus + g_BuildingLoadQueue_Array.Height,
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x5f3a7c*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v4) = this; /*0x5f3a8b*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x5f3ac2*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v5 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x5f3acf*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v5) = this; /*0x5f3ade*/
  }
  if ( *(int *)&g_BuildingLoadQueue_Array.?[32] < *(int *)&g_BuildingLoadQueue_Array.?[24] /*0x5f3b15*/
    || (g_BuildingLoadQueue_Array.?[29] || !*(_DWORD *)&g_BuildingLoadQueue_Array.?[24])
    && *(int *)&g_BuildingLoadQueue_Array.?[36] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_BuildingLoadQueue_Array.?[16] + 8))(
         &g_BuildingLoadQueue_Array.?[16],
         *(_DWORD *)&g_BuildingLoadQueue_Array.?[24] + *(_DWORD *)&g_BuildingLoadQueue_Array.?[36],
         0) )
  {
    v6 = (*(_DWORD *)&g_BuildingLoadQueue_Array.?[32])++; /*0x5f3b22*/
    *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.?[20] + 4 * v6) = this; /*0x5f3b31*/
  }
  LOBYTE(this->?) |= 2u; /*0x5f3b39*/
  return &this->AbstractClass; /*0x5f3b3e*/
}



// ==== 0x005F3B50  ObjectClass::Init  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ObjectClass::Init(ObjectClass *this, int a2)
{
  AbstractClass::InitVtables((AbstractClass *)this, a2); /*0x5f3b58*/
  this->AbstractClass = &ObjectClass::`vftable'; /*0x5f3b5d*/
  this->? = &ObjectClass::`vftable'; /*0x5f3b63*/
  this->? = &ObjectClass::`vftable'; /*0x5f3b6a*/
  this->? = &ObjectClass::`vftable'; /*0x5f3b71*/
  return &this->AbstractClass; /*0x5f3b7a*/
}



// ==== 0x005F3B80  ObjectClass::Dtor  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::Dtor(ObjectClass *this)
{
  ObjectClass *attachedBomb; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  TacticalClass *lineTrailer; // ecx
  ObjectClass *v10; // [esp+10h] [ebp-4h] BYREF

  attachedBomb = (ObjectClass *)this->attachedBomb; /*0x5f3b84*/
  this->vtable0 = (int)&ObjectClass::`vftable'; /*0x5f3b87*/
  this->vtable1 = (int)&ObjectClass::`vftable'; /*0x5f3b8f*/
  this->vtable2 = (int)&ObjectClass::`vftable'; /*0x5f3b96*/
  this->vtable3 = (int)&ObjectClass::`vftable'; /*0x5f3b9d*/
  if ( attachedBomb ) /*0x5f3ba4*/
    ObjectClass::CleanupAudioAndRefs(attachedBomb); /*0x5f3ba6*/
  v10 = this; /*0x5f3bbb*/
  v3 = (*(int (__thiscall **)(DynamicVectorClass *, ObjectClass **))(stru_B0F698.vtable0 + 16))(&stru_B0F698, &v10); /*0x5f3bbf*/
  if ( v3 != -1 && v3 < stru_B0F698.Count ) /*0x5f3bcf*/
  {
    --stru_B0F698.Count; /*0x5f3bd4*/
    for ( ; v3 < stru_B0F698.Count; *(_DWORD *)(stru_B0F698.Items + 4 * v3 - 4) = *(_DWORD *)(stru_B0F698.Items + 4 * v3) ) /*0x5f3bda*/
      ++v3; /*0x5f3be2*/
  }
  v10 = this; /*0x5f3c04*/
  v4 = (*(int (__thiscall **)(_DWORD *, ObjectClass **))(dword_A8E360 + 16))(&dword_A8E360, &v10); /*0x5f3c08*/
  if ( v4 != -1 && v4 < dword_A8E370 && v4 < --dword_A8E370 ) /*0x5f3c23*/
  {
    do /*0x5f3c3b*/
    {
      ++v4; /*0x5f3c2b*/
      *((_DWORD *)dword_A8E364 + v4 - 1) = *((_DWORD *)dword_A8E364 + v4); /*0x5f3c2f*/
    }
    while ( v4 < dword_A8E370 ); /*0x5f3c3b*/
  }
  v10 = this; /*0x5f3c4d*/
  v5 = (*(int (__thiscall **)(_DWORD *, ObjectClass **))(dword_B0F720 + 16))(&dword_B0F720, &v10); /*0x5f3c51*/
  if ( v5 != -1 && v5 < dword_B0F730 && v5 < --dword_B0F730 ) /*0x5f3c6c*/
  {
    do /*0x5f3c84*/
    {
      ++v5; /*0x5f3c74*/
      *((_DWORD *)dword_B0F724 + v5 - 1) = *((_DWORD *)dword_B0F724 + v5); /*0x5f3c78*/
    }
    while ( v5 < dword_B0F730 ); /*0x5f3c84*/
  }
  v10 = this; /*0x5f3c96*/
  v6 = (*(int (__thiscall **)(_DWORD *, ObjectClass **))(dword_B0F670 + 16))(&dword_B0F670, &v10); /*0x5f3c9a*/
  if ( v6 != -1 && v6 < dword_B0F680 && v6 < --dword_B0F680 ) /*0x5f3cb5*/
  {
    do /*0x5f3ccd*/
    {
      ++v6; /*0x5f3cbd*/
      *((_DWORD *)dword_B0F674 + v6 - 1) = *((_DWORD *)dword_B0F674 + v6); /*0x5f3cc1*/
    }
    while ( v6 < dword_B0F680 ); /*0x5f3ccd*/
  }
  v10 = this; /*0x5f3cdf*/
  v7 = (*(int (__thiscall **)(_DWORD *, ObjectClass **))(dword_B0F618 + 16))(&dword_B0F618, &v10); /*0x5f3ce3*/
  if ( v7 != -1 && v7 < dword_B0F628 && v7 < --dword_B0F628 ) /*0x5f3cfe*/
  {
    do /*0x5f3d16*/
    {
      ++v7; /*0x5f3d06*/
      *((_DWORD *)dword_B0F61C + v7 - 1) = *((_DWORD *)dword_B0F61C + v7); /*0x5f3d0a*/
    }
    while ( v7 < dword_B0F628 ); /*0x5f3d16*/
  }
  this->nextObject = 0; /*0x5f3d1d*/
  this->isAliveFlag[0] = 0; /*0x5f3d26*/
  AudioController::Stop((AudioController *)this->ambientSoundController); /*0x5f3d2d*/
  AudioController::Stop((AudioController *)this->customSound_controller); /*0x5f3d37*/
  AudioFileClass::Release((AudioFileClass *)this->ambientSoundController); /*0x5f3d3e*/
  AudioFileClass::Release((AudioFileClass *)this->customSound_controller); /*0x5f3d45*/
  lineTrailer = (TacticalClass *)this->lineTrailer; /*0x5f3d4a*/
  if ( lineTrailer ) /*0x5f3d54*/
  {
    TacticalClass::GetField(lineTrailer); /*0x5f3d56*/
    this->lineTrailer = 0; /*0x5f3d5b*/
  }
  if ( this->isInLogic[0] ) /*0x5f3d65*/
    VectorClass::RemoveItem((DynamicVectorClass *)&dword_87F778, (int)this); /*0x5f3d75*/
  return AbstractClass::DTOR(this); /*0x5f3d81*/
}



// ==== 0x005F3DB0  ObjectClass::CalcTargetFacing  this=ObjectClass  sig=csp ====
int *__thiscall ObjectClass::CalcTargetFacing(ObjectClass *this, int *a2, int a3)
{
  double v3; // st7
  int *v5; // edi
  int *v6; // eax
  _BYTE v8[12]; // [esp+24h] [ebp-18h] BYREF
  _BYTE v9[12]; // [esp+30h] [ebp-Ch] BYREF
  int v10; // [esp+44h] [ebp+8h]

  v5 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a3 + 72))(a3, v8); /*0x5f3dc9*/
  v6 = (int *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))this->AbstractClass + 18))(this, v9); /*0x5f3dd0*/
  v10 = *v5; /*0x5f3dd7*/
  Math::CalcAngle((double)v6[1] - (double)v5[1], (double)*v5 - (double)*v6); /*0x5f3dfa*/
  LOWORD(v10) = Math::RoundToInt((v3 - 1.570796326794897) * -10430.06004058427); /*0x5f3e13*/
  *a2 = v10; /*0x5f3e21*/
  return a2; /*0x5f3e20*/
}



// ==== 0x005F3E30  ObjectClass::HasC4  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::HasC4(ObjectClass *this)
{
  int v1; // eax

  v1 = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this); /*0x5f3e32*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 156))(v1);
}



// ==== 0x005F3E50  ObjectClass::StepCleanup  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::StepCleanup(ObjectClass *this, void *a2)
{
  int v2; // eax

  v2 = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this); /*0x5f3e57*/
  return AbstractTypeClass::NameEquals(v2, a2); /*0x5f3e64*/
}



// ==== 0x005F3E70  ObjectClass::DetectCloaked  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::DetectCloaked(UnitClass *this)
{
  int result; // eax
  int vtable0; // edx
  int v4; // eax
  int customSound; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // edx
  int v9; // eax
  int parachute; // eax
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  wchar_t *v15; // eax
  int *p_queuedMission; // edx
  int *location; // esi
  int v18; // edx
  int v19; // edx
  int v20; // edi
  int v21; // esi
  int health; // [esp+20h] [ebp-10h] BYREF
  int v23; // [esp+24h] [ebp-Ch] BYREF
  int v24; // [esp+28h] [ebp-8h]
  int v25; // [esp+2Ch] [ebp-4h]

  if ( !this->inLimbo[0] ) /*0x5f3e78*/
  {
    result = (*(int (__thiscall **)(UnitClass *))(this->vtable0 + 136))(this); /*0x5f3e88*/
    if ( result ) /*0x5f3e90*/
    {
      result = (*(int (__thiscall **)(UnitClass *))(this->vtable0 + 136))(this); /*0x5f3e96*/
      if ( *(_DWORD *)(result + 500) != -1 ) /*0x5f3ea3*/
      {
        v23 = this->location[0]; /*0x5f3eb1*/
        v24 = this->location[1]; /*0x5f3ebc*/
        vtable0 = this->vtable0; /*0x5f3ec0*/
        v25 = this->location[2]; /*0x5f3ec7*/
        v4 = (*(int (__thiscall **)(UnitClass *))(vtable0 + 136))(this); /*0x5f3ecb*/
        result = (int)StartAudioControllerAt(*(_DWORD *)(v4 + 500), &v23, (int **)this->ambientSoundController); /*0x5f3ed9*/
      }
    }
    customSound = this->customSound; /*0x5f3ede*/
    if ( customSound != -1 ) /*0x5f3ee4*/
    {
      v23 = this->location[0]; /*0x5f3ef2*/
      v24 = this->location[1]; /*0x5f3ef9*/
      v25 = this->location[2]; /*0x5f3f08*/
      result = (int)StartAudioControllerAt(customSound, &v23, (int **)this->customSound_controller); /*0x5f3f0c*/
    }
  }
  LOBYTE(result) = this->isFallingDown[0]; /*0x5f3f11*/
  if ( (_BYTE)result ) /*0x5f3f19*/
  {
    v6 = (*(int (__thiscall **)(UnitClass *))(this->vtable0 + 120))(this); /*0x5f3f2a*/
    v7 = this->fallRate + (*(int (__thiscall **)(UnitClass *))(this->vtable0 + 464))(this); /*0x5f3f3a*/
    if ( this->isOnMap[0] ) /*0x5f3f37*/
    {
      (*(void (__thiscall **)(UnitClass *, _DWORD))(this->vtable0 + 292))(this, 0); /*0x5f3f46*/
      v8 = this->vtable0; /*0x5f3f4c*/
      this->location[2] = v7; /*0x5f3f52*/
      (*(void (__thiscall **)(UnitClass *, int))(v8 + 292))(this, 1); /*0x5f3f58*/
    }
    else
    {
      this->location[2] = v7; /*0x5f3f60*/
    }
    if ( (*(int (__thiscall **)(UnitClass *))(this->vtable0 + 456))(this) <= 0 ) /*0x5f3f72*/
    {
      (*(void (__thiscall **)(UnitClass *, _DWORD))(this->vtable0 + 460))(this, 0); /*0x5f3f7a*/
      v9 = this->vtable0; /*0x5f3f80*/
      this->isFallingDown[0] = 0; /*0x5f3f86*/
      (*(void (__thiscall **)(UnitClass *, int))(v9 + 396))(this, 2); /*0x5f3f8d*/
      parachute = this->parachute; /*0x5f3f93*/
      if ( parachute ) /*0x5f3f9b*/
        *(_BYTE *)(parachute + 405) = 0; /*0x5f3f9d*/
    }
    if ( this->inLimbo[0] ) /*0x5f3fa4*/
      return RemoveTarget((int)this); /*0x5f414c*/
    if ( this->hasParachute[0] ) /*0x5f3fb2*/
    {
      v11 = this->fallRate - 1; /*0x5f3fbf*/
      this->fallRate = v11; /*0x5f3fc0*/
      v12 = v11; /*0x5f3fc9*/
      v13 = dword_8871E0->GDIWallDefenseCoefficient[0]; /*0x5f3fcb*/
      if ( v11 <= v13 ) /*0x5f3fd3*/
        goto LABEL_19; /*0x5f3fd3*/
    }
    else
    {
      LOWORD(v12) = Math::RoundToInt((double)this->fallRate - 1.4); /*0x5f3fe0*/
      this->fallRate = v12; /*0x5f3fe5*/
      v13 = dword_8871E0->GDIWallDefenseCoefficient[1]; /*0x5f3fee*/
      if ( v12 <= v13 ) /*0x5f3ff6*/
LABEL_19:
        v12 = v13; /*0x5f3ff8*/
    }
    this->fallRate = v12; /*0x5f3ffa*/
    result = (*(int (__thiscall **)(UnitClass *))(this->vtable0 + 120))(this); /*0x5f4001*/
    if ( v6 != result ) /*0x5f4006*/
      result = Targeting::Readd(this); /*0x5f400e*/
    LOBYTE(result) = this->isFallingDown[0]; /*0x5f4013*/
    if ( !(_BYTE)result ) /*0x5f401b*/
    {
      if ( this->isBomb[0] && this->health > 0 ) /*0x5f4030*/
      {
        v14 = this->vtable0; /*0x5f4032*/
        health = this->health; /*0x5f4034*/
        (*(void (__thiscall **)(UnitClass *, int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(v14 + 364))( /*0x5f4055*/
          this,
          &health,
          0,
          *(_DWORD *)&dword_8871E0->__pad_C3C[876],
          0,
          1,
          1,
          0);
      }
      result = (*(int (__thiscall **)(UnitClass *))(this->vtable0 + 44))(this); /*0x5f405f*/
      if ( result == 4 ) /*0x5f4065*/
      {
        result = this->missionTimer[0]; /*0x5f406b*/
        if ( *(_BYTE *)(result + 852) ) /*0x5f4071*/
        {
          BYTE2(this->ironCurtainTimer[2]) = 1; /*0x5f407f*/
          v15 = dword_A8ED84; /*0x5f4086*/
          p_queuedMission = &this->queuedMission; /*0x5f408b*/
          this->missionStartTime = 1; /*0x5f4096*/
          location = this->location; /*0x5f409c*/
          *p_queuedMission = (int)v15; /*0x5f40a2*/
          p_queuedMission[1] = v24; /*0x5f40a8*/
          p_queuedMission[2] = 1; /*0x5f40ab*/
          v18 = *location; /*0x5f40c0*/
          location[4] = 8 * *(_DWORD *)(location[11] + 848) + 1; /*0x5f40c2*/
          v23 = v18; /*0x5f40c5*/
          v24 = location[1]; /*0x5f40d1*/
          v25 = location[2]; /*0x5f40d8*/
          result = (int)Coord::To_Cell((Coord *)&dword_87F7E8, &v23); /*0x5f40e1*/
          if ( *(_DWORD *)(result + 236) == 2 ) /*0x5f40ed*/
          {
            result = __2_YAPAXI_Z(0x1C8u); /*0x5f40f4*/
            if ( result ) /*0x5f40fe*/
            {
              v19 = *location; /*0x5f4100*/
              v20 = location[1]; /*0x5f4102*/
              v21 = location[2]; /*0x5f4105*/
              v23 = v19; /*0x5f410c*/
              v24 = v20; /*0x5f4126*/
              v25 = v21 + 3; /*0x5f412a*/
              return (int)AnimClass::ctor( /*0x5f413a*/
                            (AnimClass *)result,
                            *(void **)dword_8871E0->Normal[10],
                            &v23,
                            0,
                            1,
                            (void *)0x600,
                            0,
                            0);
            }
          }
        }
      }
    }
  }
  return result; /*0x5f413f*/
}



// ==== 0x005F4160  IUnknown::DropAsBomb_Track  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::DropAsBomb_Track(IUnknown *this)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  _DWORD v5[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = this->field_0; /*0x5f4168*/
  this->__pad_8C[1] = 1; /*0x5f416a*/
  this->__pad_8C[3] = 1; /*0x5f4171*/
  (*(void (__stdcall **)(_DWORD))(v2 + 292))(0); /*0x5f4178*/
  RemoveTarget((int)this); /*0x5f4184*/
  this->__pad_8C[0] = 0; /*0x5f418f*/
  Targeting::Readd(this); /*0x5f4196*/
  result = (*(int (__thiscall **)(IUnknown *, int))(this->field_0 + 292))(this, 1); /*0x5f41a1*/
  if ( this ) /*0x5f41a9*/
  {
    LOBYTE(result) = (this->__pad_14[0] & 4) != 0; /*0x5f41b5*/
    if ( (this->__pad_14[0] & 4) != 0 ) /*0x5f41bb*/
    {
      if ( !*(_DWORD *)&this->__pad_524[336] ) /*0x5f41bd*/
        WinAPI::Wrapper(-2147467261); /*0x5f41cc*/
      if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)&this->__pad_524[336] + 16))(*(_DWORD *)&this->__pad_524[336]) ) /*0x5f41da*/
      {
        if ( !*(_DWORD *)&this->__pad_524[336] ) /*0x5f4213*/
          WinAPI::Wrapper(-2147467261); /*0x5f4222*/
        return (*(int (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)&this->__pad_524[336] + 156))( /*0x5f4232*/
                 *(_DWORD *)&this->__pad_524[336],
                 0);
      }
      else
      {
        v5[0] = this->field_9C; /*0x5f41ed*/
        v4 = this->field_0; /*0x5f41f1*/
        v5[1] = *(_DWORD *)this->__pad_A0; /*0x5f41f6*/
        v5[2] = this->field_A4; /*0x5f4204*/
        return (*(int (__thiscall **)(IUnknown *, _DWORD *))(v4 + 244))(this, v5); /*0x5f4208*/
      }
    }
  }
  return result; /*0x5f420e*/
}



// ==== 0x005F4240  ObjectClass::COMStub_29  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_29(ObjectClass *this)
{
  return 0; /*0x5f4242*/
}



// ==== 0x005F4250  ObjectClass::COMStub_28  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_28(ObjectClass *this)
{
  return 0; /*0x5f4252*/
}



// ==== 0x005F4260  ObjectClass::GetThreatLevel  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetThreatLevel(ObjectClass *this)
{
  if ( (*((unsigned __int8 (__thiscall **)(ObjectClass *))this->AbstractClass + 21))(this) ) /*0x5f4265*/
    return ((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 114))(this) >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] /*0x5f4294*/
                                                                                                  + 1056))
         + 3;
  else
    return 2; /*0x5f426c*/
}



// ==== 0x005F42A0  ObjectClass::COMStub_Ret2147483647_35  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Ret2147483647_35(ObjectClass *this)
{
  return 0x7FFFFFFF; /*0x5f42a5*/
}



// ==== 0x005F42B0  ObjectClass::COMStub_Return0_37  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_37(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f42b0*/
  return result; /*0x5f42b2*/
}



// ==== 0x005F42C0  ObjectClass::COMStub_Return0_38  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_38(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f42c0*/
  return result; /*0x5f42c2*/
}



// ==== 0x005F42D0  ObjectClass::COMStub_Return0_39  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_39(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f42d0*/
  return result; /*0x5f42d2*/
}



// ==== 0x005F42E0  ObjectClass::COMStub_Return0_40  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_40(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f42e0*/
  return result; /*0x5f42e2*/
}



// ==== 0x005F42F0  ObjectClass::COMStub_Return0_56  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_56(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5f42f0*/
}



// ==== 0x005F4300  ObjectClass::COMStub_Return0_57  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_57(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5f4300*/
}



// ==== 0x005F4310  ObjectClass::COMStub_Return0_63  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_63(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5f4310*/
}



// ==== 0x005F4320  ObjectClass::COMStub_64  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_64(ObjectClass *this)
{
  return 0; /*0x5f4322*/
}



// ==== 0x005F4330  ObjectClass::COMStub_Return0_71  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_71(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5f4330*/
}



// ==== 0x005F4340  ObjectClass::COMStub_Return0_72  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_72(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5f4340*/
}



// ==== 0x005F4350  ObjectClass::COMStub_81  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_81(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f4350*/
  return result; /*0x5f4352*/
}



// ==== 0x005F4360  ObjectClass::COMStub_80  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_80(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f4360*/
  return result; /*0x5f4362*/
}



// ==== 0x005F4370  ObjectClass::COMStub_Return0_82  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_82(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5f4370*/
}



// ==== 0x005F4380  ObjectClass::COMStub_89  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_89(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f4380*/
  return result; /*0x5f4382*/
}



// ==== 0x005F4390  ObjectClass::COMStub_90  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_90(ObjectClass *this)
{
  return 0; /*0x5f4392*/
}



// ==== 0x005F43A0  IUnknown::COMStub_Return0_93  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_93(IUnknown *this)
{
  int result; // eax

  return result; /*0x5f43a0*/
}



// ==== 0x005F43B0  IUnknown::StubReturnFalse3  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::StubReturnFalse3(IUnknown *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f43b0*/
  return result; /*0x5f43b2*/
}



// ==== 0x005F43C0  IUnknown::StubReturnTrue  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::StubReturnTrue(IUnknown *this)
{
  int result; // eax

  return result; /*0x5f43c0*/
}



// ==== 0x005F43D0  ObjectClass::COMStub_Return0_96  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_96(ObjectClass *this)
{
  return 0; /*0x5f43d2*/
}



// ==== 0x005F43E0  ObjectClass::processStateUpdate  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::processStateUpdate(ObjectClass *this)
{
  return -1; /*0x5f43e3*/
}



// ==== 0x005F43F0  IUnknown::StubReturnFalse4  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::StubReturnFalse4(IUnknown *this)
{
  int result; // eax

  return result; /*0x5f43f0*/
}



// ==== 0x005F4400  ObjectClass::COMStub_Return0_104  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_104(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5f4400*/
}



// ==== 0x005F4410  IUnknown::MoveToDirection  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::MoveToDirection(IUnknown *this)
{
  int v2; // edx
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  CellClass *v7; // eax
  _DWORD v9[3]; // [esp+18h] [ebp-Ch] BYREF
  int v10; // [esp+28h] [ebp+4h]

  (*(void (__thiscall **)(IUnknown *, _DWORD))(this->field_0 + 292))(this, 0); /*0x5f441d*/
  v2 = this->field_9C; /*0x5f4431*/
  v3 = *(_DWORD *)this->__pad_A0; /*0x5f443a*/
  v9[2] = this->field_A4; /*0x5f4448*/
  v4 = g_DDrawSurfaceManager.scenario[2 * (v10 & 7) + 102]; /*0x5f444c*/
  v5 = v3 + g_DDrawSurfaceManager.scenario[2 * (v10 & 7) + 103]; /*0x5f4451*/
  v6 = this->field_0; /*0x5f4453*/
  v9[1] = v5; /*0x5f4455*/
  v9[0] = v2 + v4; /*0x5f4465*/
  v7 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v9); /*0x5f4469*/
  if ( !(*(int (__thiscall **)(IUnknown *, CellClass *, int, int, _DWORD, int))(v6 + 428))(this, v7, v10, -1, 0, 1) ) /*0x5f4471*/
    (*(void (__thiscall **)(IUnknown *, _DWORD *))(this->field_0 + 436))(this, v9); /*0x5f4484*/
  return (*(int (__thiscall **)(IUnknown *, int))(this->field_0 + 292))(this, 1); /*0x5f4496*/
}



// ==== 0x005F44A0  IUnknown::Remove  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::Remove(IUnknown *this)
{
  int result; // eax
  int v3; // eax
  IUnknown *v4; // [esp+4h] [ebp-4h] BYREF

  LOBYTE(result) = this->__pad_74[15]; /*0x5f44a4*/
  if ( (_BYTE)result ) /*0x5f44ac*/
  {
    v4 = this; /*0x5f44be*/
    v3 = (*(int (__thiscall **)(_BYTE *, IUnknown **))(*(_DWORD *)&stru_A8EB00.?[212] + 16))(&stru_A8EB00.?[212], &v4); /*0x5f44c2*/
    if ( v3 != -1 && v3 < *(int *)&stru_A8EB00.?[228] ) /*0x5f44d2*/
    {
      --*(_DWORD *)&stru_A8EB00.?[228]; /*0x5f44d7*/
      for ( ; /*0x5f44dd*/
            v3 < *(int *)&stru_A8EB00.?[228];
            *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216]
                                                                                 + 4 * v3) )
      {
        ++v3; /*0x5f44e5*/
      }
    }
    this->__pad_74[15] = 0; /*0x5f44fc*/
    result = MapClass::GetScrollMode((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x5f4503*/
    if ( (IUnknown *)result == this ) /*0x5f450a*/
      return MapClass::SetScrollMode((int)&stru_87F5F0.__pad_58[416], 0); /*0x5f4513*/
  }
  return result; /*0x5f4518*/
}



// ==== 0x005F4520  ObjectClass::HandleSelection  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::HandleSelection(ObjectClass *this)
{
  int result; // eax
  _BYTE *v3; // edi
  House *v4; // ebx
  House *v5; // edi
  int v6; // eax
  int v7; // eax
  MapClass *v8; // [esp+0h] [ebp-Ch]
  char IsHumanPlayer; // [esp+Bh] [ebp-1h]

  if ( !stru_A8EB00.?[391] ) /*0x5f452c*/
  {
    if ( this->inLimbo /*0x5f454c*/
      || this->isSelected
      || (result = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 78))(this), !(_BYTE)result) )
    {
      LOBYTE(result) = 0; /*0x5f454f*/
      return result; /*0x5f4553*/
    }
  }
  v3 = AbstractClass::IsTechnoType((AbstractClass *)this); /*0x5f455b*/
  if ( !stru_A8EB00.?[391] ) /*0x5f4564*/
  {
    result = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 40))(this); /*0x5f456a*/
    if ( (_BYTE)result ) /*0x5f4572*/
    {
      if ( !v3 ) /*0x5f4576*/
        goto LABEL_14; /*0x5f4576*/
      if ( v3[980] ) /*0x5f4578*/
      {
        LOBYTE(result) = 0; /*0x5f4583*/
        return result; /*0x5f4587*/
      }
    }
  }
  if ( v3 ) /*0x5f458a*/
  {
    result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 468))(v3); /*0x5f4590*/
    if ( (_BYTE)result ) /*0x5f4598*/
    {
      LOBYTE(result) = 0; /*0x5f459b*/
      return result; /*0x5f459f*/
    }
  }
LABEL_14:
  result = *(_DWORD *)&stru_87F5F0.__pad_E12[1422]; /*0x5f45a0*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1422] ) /*0x5f45a7*/
  {
    LOBYTE(result) = 0; /*0x5f45aa*/
    return result; /*0x5f45ae*/
  }
  if ( *(int *)&stru_A8EB00.?[228] > 0 ) /*0x5f45b6*/
  {
    v4 = (House *)(*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 15))(this); /*0x5f45c0*/
    v5 = (House *)(*(int (__thiscall **)(_DWORD))(***(_DWORD ***)&stru_A8EB00.?[216] + 60))(**(_DWORD **)&stru_A8EB00.?[216]); /*0x5f45ce*/
    IsHumanPlayer = House::IsHumanPlayer(v5); /*0x5f45db*/
    if ( IsHumanPlayer != (unsigned __int8)House::IsHumanPlayer(v4) || !(unsigned __int8)House::IsHumanPlayer(v5) ) /*0x5f45ef*/
      MapClass::UnselectAll_ClearLimboLaunchers(v8); /*0x5f45f8*/
  }
  if ( !this /*0x5f461f*/
    || (this->? & 1) == 0
    || !*(_BYTE *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this) + 3228) )
  {
    if ( *(int *)&stru_A8EB00.?[228] < *(int *)&stru_A8EB00.?[220] /*0x5f46f2*/
      || (stru_A8EB00.?[225] || !*(_DWORD *)&stru_A8EB00.?[220])
      && *(int *)&stru_A8EB00.?[232] > 0
      && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[212] + 8))(
           &stru_A8EB00.?[212],
           *(_DWORD *)&stru_A8EB00.?[220] + *(_DWORD *)&stru_A8EB00.?[232],
           0) )
    {
      v7 = (*(_DWORD *)&stru_A8EB00.?[228])++; /*0x5f46ff*/
      *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v7) = this; /*0x5f470e*/
    }
    goto LABEL_38; /*0x5f470e*/
  }
  v6 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x5f462d*/
  if ( *(int *)&stru_A8EB00.?[228] >= *(int *)&stru_A8EB00.?[220] ) /*0x5f463a*/
  {
    if ( (stru_A8EB00.?[225] || !*(_DWORD *)&stru_A8EB00.?[220]) /*0x5f466a*/
      && *(int *)&stru_A8EB00.?[232] > 0
      && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[212] + 8))(
           &stru_A8EB00.?[212],
           *(_DWORD *)&stru_A8EB00.?[220] + *(_DWORD *)&stru_A8EB00.?[232],
           0) )
    {
      v6 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x5f4675*/
      goto LABEL_29; /*0x5f4675*/
    }
LABEL_38:
    result = Selection::SetCurrent(0); /*0x5f4711*/
    this->isSelected = 1; /*0x5f4718*/
    LOBYTE(result) = 1; /*0x5f4720*/
    return result; /*0x5f4720*/
  }
LABEL_29:
  if ( v6 ) /*0x5f467c*/
    memcpy((void *)(*(_DWORD *)&stru_A8EB00.?[216] + 4), *(const void **)&stru_A8EB00.?[216], 4 * v6); /*0x5f468c*/
  **(_DWORD **)&stru_A8EB00.?[216] = this; /*0x5f469a*/
  ++*(_DWORD *)&stru_A8EB00.?[228]; /*0x5f46a4*/
  result = Selection::SetCurrent(0); /*0x5f46a9*/
  this->isSelected = 1; /*0x5f46ae*/
  LOBYTE(result) = 1; /*0x5f46b6*/
  return result; /*0x5f454e*/
}



// ==== 0x005F4730  IUnknown::GetPlacementScreenRect  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetPlacementScreenRect(IUnknown *this)
{
  _DWORD *v2; // eax
  int v3; // edi
  int *FoundationSize; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // ebx
  int v9; // ebp
  int v10; // kr00_4
  int v11; // ecx
  char *v12; // esi
  int v13; // ecx
  int v14; // [esp+10h] [ebp-18h] BYREF
  char *v15; // [esp+14h] [ebp-14h]
  _DWORD v16[3]; // [esp+18h] [ebp-10h] BYREF
  int v17; // [esp+24h] [ebp-4h]
  int *v18; // [esp+2Ch] [ebp+4h]

  v2 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _DWORD *))(this->field_0 + 172))(this, v16); /*0x5f4745*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v2, &v14); /*0x5f4752*/
  v3 = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 108))(this); /*0x5f475e*/
  if ( v3 ) /*0x5f4762*/
  {
    FoundationSize = Building::GetFoundationSize(v16, 0); /*0x5f47a0*/
    v6 = *FoundationSize; /*0x5f47a5*/
    v7 = FoundationSize[1]; /*0x5f47a7*/
    v8 = FoundationSize[2]; /*0x5f47aa*/
    v9 = FoundationSize[3]; /*0x5f47ad*/
    v10 = *(__int16 *)(v3 + 2); /*0x5f47b5*/
    v17 = v9; /*0x5f47b7*/
    v11 = v14 + v6 - v10 / 2; /*0x5f47c3*/
    v12 = &v15[v7 - *(__int16 *)(v3 + 4) / 2]; /*0x5f47da*/
    v15 = &v12[(unsigned int)DSurface_ViewBounds.field_4]; /*0x5f47e6*/
    if ( DSurface_ViewBounds.field_0 >= DSurface_ViewBounds.field_0 + v11 + v8 /*0x5f481b*/
      || (int)DSurface_ViewBounds.field_4 >= (int)&v15[v9]
      || DSurface_ViewBounds.field_0 + *(_DWORD *)DSurface_ViewBounds.__pad_8 <= DSurface_ViewBounds.field_0 + v11
      || (int)DSurface_ViewBounds.field_4 + *(_DWORD *)&DSurface_ViewBounds.__pad_8[4] <= (int)v15 )
    {
      *v18 = dword_AC1350; /*0x5f484b*/
      v18[1] = dword_AC1354; /*0x5f4854*/
      v18[2] = dword_AC1358; /*0x5f485d*/
      v18[3] = dword_AC135C; /*0x5f4866*/
      return (int)v18; /*0x5f483c*/
    }
    else
    {
      *v18 = v11; /*0x5f4824*/
      v13 = v17; /*0x5f4826*/
      v18[1] = (int)v12; /*0x5f482a*/
      v18[2] = v8; /*0x5f482f*/
      v18[3] = v13; /*0x5f4833*/
      return (int)v18; /*0x5f481d*/
    }
  }
  else
  {
    *v18 = dword_AC1350; /*0x5f4773*/
    v18[1] = dword_AC1354; /*0x5f477c*/
    v18[2] = dword_AC1358; /*0x5f4785*/
    v18[3] = dword_AC135C; /*0x5f478e*/
    return (int)v18; /*0x5f4764*/
  }
}



// ==== 0x005F4870  IUnknown::GetBoundsRect  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetBoundsRect(IUnknown *this)
{
  _DWORD *v2; // eax
  int v3; // eax
  __int16 *v4; // esi
  unsigned int v6; // ebp
  int *FoundationSize; // eax
  int v8; // edi
  int v9; // ebx
  int v10; // edx
  int v11; // eax
  int *v12; // eax
  int v13; // ecx
  int v14; // ebp
  int v15; // esi
  int v16; // edx
  int v17; // ebp
  int v18; // eax
  int v19; // esi
  int v20; // edi
  int *v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // edi
  int v25; // eax
  int v26; // ecx
  int v27; // edi
  int v29; // [esp+Ch] [ebp-40h]
  int v30; // [esp+10h] [ebp-3Ch]
  int v31[2]; // [esp+14h] [ebp-38h] BYREF
  int v32; // [esp+1Ch] [ebp-30h] BYREF
  int v33; // [esp+20h] [ebp-2Ch]
  int v34; // [esp+24h] [ebp-28h]
  int v35; // [esp+28h] [ebp-24h]
  int v36; // [esp+30h] [ebp-1Ch]
  int v37; // [esp+38h] [ebp-14h]
  _DWORD v38[4]; // [esp+3Ch] [ebp-10h] BYREF
  _DWORD *v39; // [esp+50h] [ebp+4h]

  v2 = (_DWORD *)(*(int (__stdcall **)(int *))(this->field_0 + 172))(&v32); /*0x5f4887*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v2, v31); /*0x5f4894*/
  v3 = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 136))(this); /*0x5f489d*/
  v4 = (__int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 156))(v3); /*0x5f48ad*/
  if ( !v4 ) /*0x5f48b1*/
  {
    *v39 = dword_AC1350; /*0x5f48c1*/
    v39[1] = dword_AC1354; /*0x5f48c9*/
    v39[2] = dword_AC1358; /*0x5f48d2*/
    v39[3] = dword_AC135C; /*0x5f48db*/
    return (int)v39; /*0x5f48e1*/
  }
  v6 = 0; /*0x5f48ea*/
  if ( (*(int (__thiscall **)(IUnknown *))(this->field_0 + 44))(this) == 6 && *(_BYTE *)(this->field_520 + 5824) ) /*0x5f48fa*/
    v6 = 15; /*0x5f4904*/
  FoundationSize = Building::GetFoundationSize(&v32, v6); /*0x5f4911*/
  v8 = *FoundationSize; /*0x5f4916*/
  v36 = FoundationSize[1]; /*0x5f491b*/
  v9 = FoundationSize[2]; /*0x5f4921*/
  v10 = FoundationSize[3]; /*0x5f4924*/
  v11 = v4[3]; /*0x5f4927*/
  v37 = v10; /*0x5f492b*/
  v12 = Building::GetFoundationSize(v38, v6 + v11 / 2); /*0x5f493c*/
  v13 = *v12; /*0x5f4945*/
  v33 = v12[1]; /*0x5f494a*/
  v34 = v12[2]; /*0x5f4951*/
  v14 = v4[1]; /*0x5f4955*/
  v15 = v4[2]; /*0x5f4959*/
  v16 = v12[3]; /*0x5f495d*/
  v29 = v14; /*0x5f4960*/
  v35 = v16; /*0x5f4964*/
  v30 = v15; /*0x5f4968*/
  if ( v9 <= 0 || (v17 = v37, v37 <= 0) ) /*0x5f4974*/
  {
    v20 = v12[1]; /*0x5f49e4*/
    v19 = *v12; /*0x5f49e7*/
    v9 = v12[2]; /*0x5f49e9*/
    v17 = v12[3]; /*0x5f49ec*/
    v36 = v20; /*0x5f49ef*/
  }
  else if ( v34 <= 0 || v16 <= 0 ) /*0x5f4980*/
  {
    v19 = v8; /*0x5f49d8*/
    v20 = v36; /*0x5f49da*/
  }
  else
  {
    v18 = v36; /*0x5f4982*/
    if ( v8 > v13 ) /*0x5f4988*/
    {
      v9 += v8 - v13; /*0x5f498e*/
      v8 = v13; /*0x5f4990*/
    }
    if ( v36 > v33 ) /*0x5f4998*/
    {
      v17 = v36 - v33 + v37; /*0x5f499c*/
      v18 = v33; /*0x5f499e*/
    }
    if ( v9 + v8 < v13 + v34 ) /*0x5f49a7*/
      v9 = v34 - v8 + v13 + 1; /*0x5f49af*/
    if ( v18 + v17 < v33 + v35 ) /*0x5f49c2*/
      v17 = v33 - v18 + v35 + 1; /*0x5f49ca*/
    v19 = v8; /*0x5f49ce*/
    v20 = v18; /*0x5f49d0*/
    v36 = v18; /*0x5f49d2*/
  }
  v34 = v9; /*0x5f49f7*/
  v35 = v17; /*0x5f49fb*/
  if ( (*(int (__thiscall **)(IUnknown *))(this->field_0 + 44))(this) != 6 || !*(_DWORD *)(this->field_520 + 5400) ) /*0x5f4a17*/
  {
    v9 = v34; /*0x5f4ac5*/
    v26 = v35; /*0x5f4ac9*/
    goto LABEL_39; /*0x5f4ac9*/
  }
  v21 = Building::GetFoundationSize(v38, 0); /*0x5f4a2c*/
  v22 = *v21; /*0x5f4a35*/
  v33 = v21[1]; /*0x5f4a3a*/
  v23 = v21[2]; /*0x5f4a3e*/
  v34 = v23; /*0x5f4a41*/
  v24 = v21[3]; /*0x5f4a45*/
  v35 = v24; /*0x5f4a48*/
  if ( v9 <= 0 || v17 <= 0 ) /*0x5f4a50*/
  {
    v19 = *v21; /*0x5f4ab6*/
    v20 = v21[1]; /*0x5f4ab8*/
    v9 = v21[2]; /*0x5f4abb*/
    v25 = v21[3]; /*0x5f4abe*/
    goto LABEL_37; /*0x5f4abe*/
  }
  if ( v23 <= 0 || v24 <= 0 ) /*0x5f4a58*/
  {
    v20 = v36; /*0x5f4aac*/
    v26 = v17; /*0x5f4ab2*/
    goto LABEL_39; /*0x5f4ab4*/
  }
  v20 = v36; /*0x5f4a5a*/
  v25 = v17; /*0x5f4a60*/
  if ( v19 > v22 ) /*0x5f4a62*/
  {
    v9 += v19 - v22; /*0x5f4a68*/
    v19 = v22; /*0x5f4a6a*/
  }
  if ( v36 > v33 ) /*0x5f4a72*/
  {
    v25 = v36 - v33 + v17; /*0x5f4a76*/
    v20 = v33; /*0x5f4a78*/
  }
  if ( v9 + v19 < v22 + v23 ) /*0x5f4a81*/
    v9 = v34 - v19 + v22 + 1; /*0x5f4a89*/
  if ( v25 + v20 >= v33 + v35 ) /*0x5f4a9c*/
  {
LABEL_37:
    v26 = v25; /*0x5f4ac1*/
    goto LABEL_39; /*0x5f4ac3*/
  }
  v26 = v33 - v20 + v35 + 1; /*0x5f4aa8*/
LABEL_39:
  v27 = v31[1] + v20 - v30 / 2; /*0x5f4acd*/
  *v39 = v31[0] + v19 - v29 / 2; /*0x5f4af6*/
  v39[1] = v27; /*0x5f4af8*/
  v39[2] = v9; /*0x5f4afb*/
  v39[3] = v26; /*0x5f4b01*/
  return (int)v39; /*0x5f48bf*/
}



// ==== 0x005F4B10  ObjectClass::CalcDrawRect  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::CalcDrawRect(ObjectClass *this)
{
  int result; // eax
  int (__thiscall **vtable0)(ObjectClass *, _DWORD *); // edx
  _DWORD *v4; // eax
  int *v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi
  int v10; // edi
  int v11; // ebx
  int v12; // ebx
  int v13; // ecx
  int v14; // [esp+4h] [ebp-20h]
  int v16; // [esp+Ch] [ebp-18h] BYREF
  int v17; // [esp+10h] [ebp-14h]
  int v18; // [esp+14h] [ebp-10h] BYREF
  void *v19; // [esp+18h] [ebp-Ch]
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]
  int *v22; // [esp+28h] [ebp+4h]
  char v23; // [esp+2Ch] [ebp+8h]
  int v24; // [esp+2Ch] [ebp+8h]
  int v25; // [esp+2Ch] [ebp+8h]

  if ( (stru_A8EB00.?[391] || (result = (int)g_hWnd) == 0 || (v23 || this->needsRedraw) && !this->inLimbo) /*0x5f4b7d*/
    && ((vtable0 = (int (__thiscall **)(ObjectClass *, _DWORD *))this->AbstractClass,
         this->needsRedraw = 0,
         v4 = (_DWORD *)vtable0[43](this, &v18),
         Coord::To_Screen((Coord *)g_TacticalClass_Instance, v4, &v16))
     || (result = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 11))(this), result == 24)) )
  {
    v19 = DSurface_ViewBounds.field_4; /*0x5f4b8f*/
    v20 = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x5f4b99*/
    v21 = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x5f4ba3*/
    v5 = v22; /*0x5f4ba7*/
    v6 = 0; /*0x5f4bac*/
    v7 = 0; /*0x5f4bb1*/
    v8 = 0; /*0x5f4bb3*/
    v9 = 0; /*0x5f4bb5*/
    v10 = DSurface_ViewBounds.field_0; /*0x5f4bb8*/
    v14 = v22[2]; /*0x5f4bc0*/
    if ( v14 > 0 && v22[3] > 0 && *(int *)DSurface_ViewBounds.__pad_8 > 0 && *(int *)&DSurface_ViewBounds.__pad_8[4] > 0 ) /*0x5f4beb*/
    {
      v24 = *v22; /*0x5f4bf5*/
      if ( DSurface_ViewBounds.field_0 < *v22 ) /*0x5f4bf9*/
      {
        v10 = *v22; /*0x5f4c03*/
        v20 += DSurface_ViewBounds.field_0 - *v22; /*0x5f4c07*/
      }
      if ( v20 >= 1 ) /*0x5f4c10*/
      {
        v11 = v22[1]; /*0x5f4c16*/
        if ( (int)v19 >= v11 ) /*0x5f4c1f*/
        {
          v5 = v22; /*0x5f4c3a*/
        }
        else
        {
          v21 += (int)v19 - v11; /*0x5f4c29*/
          v5 = v22; /*0x5f4c2d*/
          v19 = (void *)v22[1]; /*0x5f4c34*/
        }
        if ( v21 >= 1 ) /*0x5f4c43*/
        {
          v5 = v22; /*0x5f4c5d*/
          if ( v10 + v20 > v14 + v24 ) /*0x5f4c57*/
            v20 = v22[2] + v24 - v10; /*0x5f4c66*/
          if ( v20 >= 1 ) /*0x5f4c75*/
          {
            v25 = v22[3] + v22[1]; /*0x5f4c83*/
            if ( (int)v19 + v21 <= v25 ) /*0x5f4c93*/
              v12 = v21; /*0x5f4c9b*/
            else
              v12 = v25 - (_DWORD)v19; /*0x5f4c95*/
            if ( v12 >= 1 ) /*0x5f4ca2*/
            {
              v7 = (int)v19; /*0x5f4ca4*/
              v8 = v20; /*0x5f4ca8*/
              v6 = v10; /*0x5f4cac*/
              v9 = v12; /*0x5f4cae*/
            }
            v5 = v22; /*0x5f4cb0*/
          }
        }
      }
    }
    *v5 = v6; /*0x5f4cb6*/
    v5[1] = v7; /*0x5f4cb8*/
    v5[2] = v8; /*0x5f4cbb*/
    v5[3] = v9; /*0x5f4cbe*/
    if ( *v5 > DSurface_ViewBounds.field_0 ) /*0x5f4ccb*/
      v16 += DSurface_ViewBounds.field_0 - *v5; /*0x5f4cd5*/
    v13 = v5[1]; /*0x5f4cd9*/
    if ( v13 > (int)DSurface_ViewBounds.field_4 ) /*0x5f4ce3*/
      v17 += (int)DSurface_ViewBounds.field_4 - v13; /*0x5f4ced*/
    result = (*((int (__thiscall **)(ObjectClass *, int *, int *))this->AbstractClass + 69))(this, &v16, v5); /*0x5f4cfd*/
    LOBYTE(result) = 1; /*0x5f4d06*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x5f4b7f*/
  }
  return result; /*0x5f4b81*/
}



// ==== 0x005F4D10  IUnknown::MarkForRedraw  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::MarkForRedraw(IUnknown *this)
{
  int result; // eax

  LOBYTE(result) = this->__pad_74[12]; /*0x5f4d10*/
  if ( !(_BYTE)result ) /*0x5f4d18*/
  {
    this->__pad_74[12] = 1; /*0x5f4d1a*/
    return MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x5f4d28*/
  }
  return result; /*0x5f4d2d*/
}



// ==== 0x005F4D30  ObjectClass::Undeploy  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::Undeploy(ObjectClass *this)
{
  _DWORD *v2; // eax
  int v3; // ecx
  int v4; // edi
  int result; // eax
  int v6; // [esp+10h] [ebp-20h] BYREF
  int v7; // [esp+14h] [ebp-1Ch]
  _DWORD v8[3]; // [esp+18h] [ebp-18h] BYREF
  _BYTE v9[12]; // [esp+24h] [ebp-Ch] BYREF

  if ( !byte_A8E9A0 || this->inLimbo[0] ) /*0x5f4d45*/
  {
    LOBYTE(result) = 0; /*0x5f4eb7*/
  }
  else
  {
    (*(void (__thiscall **)(ObjectClass *))(this->vtable0 + 336))(this); /*0x5f4d55*/
    (*(void (__thiscall **)(ObjectClass *, int))(this->vtable0 + 220))(this, 1); /*0x5f4d61*/
    (*(void (__thiscall **)(ObjectClass *, _DWORD))(this->vtable0 + 292))(this, 0); /*0x5f4d6d*/
    RemoveTarget((int)this); /*0x5f4d79*/
    AudioController::Stop((AudioController *)this->ambientSoundController); /*0x5f4d81*/
    AudioFile::Stop((AudioFile *)this->customSound_controller); /*0x5f4d89*/
    if ( (*(int (__thiscall **)(ObjectClass *))(this->vtable0 + 136))(this) /*0x5f4dcb*/
      && *(_BYTE *)((*(int (__thiscall **)(ObjectClass *))(this->vtable0 + 136))(this) + 564)
      && (!*(_DWORD *)&dword_A8B238
       || *(_DWORD *)&dword_A8B238 == 5
       || (*(int (__stdcall **)(int *))(this->vtable1 + 16))(&this->vtable1) != -2) )
    {
      VectorClass::RemoveItem((DynamicVectorClass *)&dword_87F778, (int)this); /*0x5f4dd3*/
    }
    if ( (*(int (__thiscall **)(ObjectClass *))(this->vtable0 + 136))(this) ) /*0x5f4ddc*/
    {
      if ( *(_DWORD *)((*(int (__thiscall **)(ObjectClass *))(this->vtable0 + 136))(this) + 172) ) /*0x5f4df4*/
      {
        v2 = (_DWORD *)(*(int (__thiscall **)(ObjectClass *, _BYTE *))(this->vtable0 + 72))(this, v9); /*0x5f4e0b*/
        v8[0] = *v2; /*0x5f4e10*/
        v8[1] = v2[1]; /*0x5f4e22*/
        v8[2] = v2[2]; /*0x5f4e2e*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, v8, &v6); /*0x5f4e32*/
        v3 = *(_DWORD *)((*(int (__thiscall **)(ObjectClass *))(this->vtable0 + 136))(this) + 172); /*0x5f4e41*/
        v4 = v7 - *(__int16 *)(v3 + 4) / 2; /*0x5f4e6c*/
        v6 -= *(__int16 *)(v3 + 2) / 2; /*0x5f4e70*/
        v7 = v4; /*0x5f4e74*/
        Cell::CreateCrater(v6, v4, *(__int16 *)(v3 + 2), *(__int16 *)(v3 + 4), 1); /*0x5f4e8f*/
      }
    }
    result = (*(int (__thiscall **)(ObjectClass *))(this->vtable0 + 284))(this); /*0x5f4e98*/
    this->inLimbo[0] = 1; /*0x5f4e9e*/
    this->needsRedraw[0] = 0; /*0x5f4ea5*/
    LOBYTE(result) = 1; /*0x5f4eac*/
  }
  return result; /*0x5f4eae*/
}



// ==== 0x005F4EC0  ObjectClass::Deploy  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::Deploy(ObjectClass *this)
{
  int result; // eax
  void *vtable0; // ebx
  CellClass *v4; // eax
  int (__thiscall **v5)(ObjectClass *); // eax
  int v6; // ebx
  int *v7; // eax
  _DWORD *v8; // eax
  int v9; // edx
  int (__thiscall **v10)(ObjectClass *); // eax
  int v11; // edi
  int v12; // ebp
  int v13; // eax
  char *v14; // eax
  int v15; // eax
  _BYTE *lineTrailer; // edx
  char v17; // cl
  char v18; // cl
  int v19; // eax
  int v20; // [esp+2Ch] [ebp-2Ch] BYREF
  int v21; // [esp+30h] [ebp-28h]
  int v22; // [esp+34h] [ebp-24h] BYREF
  int v23; // [esp+38h] [ebp-20h]
  int v24; // [esp+3Ch] [ebp-1Ch]
  _DWORD v25[3]; // [esp+40h] [ebp-18h] BYREF
  char v26[12]; // [esp+4Ch] [ebp-Ch] BYREF
  int *v27; // [esp+5Ch] [ebp+4h]
  __int16 v28; // [esp+5Ch] [ebp+4h]

  result = *v27; /*0x5f4ed3*/
  if ( *v27 == dword_AC1380 ) /*0x5f4ed7*/
  {
    result = dword_AC1384; /*0x5f4edc*/
    if ( v27[1] == dword_AC1384 ) /*0x5f4ee3*/
    {
      result = dword_AC1388; /*0x5f4ee8*/
      if ( v27[2] == dword_AC1388 ) /*0x5f4eef*/
        goto LABEL_41; /*0x5f4eef*/
    }
  }
  if ( !byte_A8E9A0 ) /*0x5f4efc*/
    goto LABEL_41; /*0x5f4efc*/
  if ( !this->inLimbo ) /*0x5f4f02*/
    goto LABEL_41; /*0x5f4f02*/
  if ( this->isOnMap ) /*0x5f4f10*/
    goto LABEL_41; /*0x5f4f10*/
  if ( !dword_A8E7AC ) /*0x5f4f22*/
  {
    vtable0 = this->AbstractClass; /*0x5f4f24*/
    v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v27); /*0x5f4f34*/
    result = (*((int (__thiscall **)(ObjectClass *, CellClass *, int, int, _DWORD, _DWORD))vtable0 + 107))( /*0x5f4f3c*/
               this,
               v4,
               -1,
               -1,
               0,
               0);
    if ( result ) /*0x5f4f44*/
      goto LABEL_41; /*0x5f4f44*/
  }
  v5 = (int (__thiscall **)(ObjectClass *))this->AbstractClass; /*0x5f4f4a*/
  this->inLimbo = 0; /*0x5f4f4e*/
  this->needsRedraw = 0; /*0x5f4f55*/
  v6 = v5[34](this); /*0x5f4f64*/
  v22 = *v27; /*0x5f4f6a*/
  v23 = v27[1]; /*0x5f4f71*/
  v24 = v27[2]; /*0x5f4f78*/
  if ( v6 ) /*0x5f4f7c*/
  {
    v7 = (int *)(*(int (__thiscall **)(int, _DWORD *, int *))(*(_DWORD *)v6 + 108))(v6, v25, v27); /*0x5f4f88*/
    v22 = *v7; /*0x5f4f8d*/
    v23 = v7[1]; /*0x5f4f94*/
    v24 = v7[2]; /*0x5f4f9b*/
  }
  (*((void (__thiscall **)(ObjectClass *, int *))this->AbstractClass + 109))(this, &v22); /*0x5f4fa8*/
  result = (*((int (__thiscall **)(ObjectClass *, int))this->AbstractClass + 73))(this, 1); /*0x5f4fb4*/
  if ( !(_BYTE)result ) /*0x5f4fbc*/
  {
    this->inLimbo = 1; /*0x5f521c*/
LABEL_41:
    LOBYTE(result) = 0; /*0x5f5223*/
    return result; /*0x5f5226*/
  }
  if ( this->isAliveFlag )
  {
    if ( (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 30))(this) != -1 ) /*0x5f4fda*/
      Targeting::Readd(this); /*0x5f4fe2*/
    if ( v6 ) /*0x5f4fe9*/
    {
      if ( *(_BYTE *)(v6 + 564) /*0x5f5036*/
        && ((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 11))(this) != 36
         || (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 11))(this) == 36 && *(_BYTE *)(v6 + 689))
        && (!*(_DWORD *)&dword_A8B238
         || *(_DWORD *)&dword_A8B238 == 5
         || (*((int (__stdcall **)(void **))this->? + 4))(&this->?) != -2) )
      {
        ObjectClass::SetDeployState((LogicClass *)this, 0); /*0x5f5040*/
      }
      if ( *(_DWORD *)(v6 + 172) ) /*0x5f5045*/
      {
        v8 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, char *))this->AbstractClass + 18))(this, v26); /*0x5f505c*/
        v25[0] = *v8; /*0x5f5061*/
        v25[1] = v8[1]; /*0x5f5073*/
        v25[2] = v8[2]; /*0x5f507f*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, v25, &v20); /*0x5f5083*/
        v9 = *(_DWORD *)&g_TacticalClass_Instance[45] + v21; /*0x5f50a1*/
        v10 = (int (__thiscall **)(ObjectClass *))this->AbstractClass; /*0x5f50a3*/
        v20 += *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x5f50a9*/
        v21 = v9; /*0x5f50ad*/
        v11 = *(_DWORD *)(v10[34](this) + 172); /*0x5f50b7*/
        v12 = v21 - *(__int16 *)(v11 + 4) / 2; /*0x5f50dd*/
        v20 -= *(__int16 *)(v11 + 2) / 2; /*0x5f50df*/
        v21 = v12; /*0x5f50e3*/
        v13 = __2_YAPAXI_Z(0x40u); /*0x5f50e7*/
        if ( v13 ) /*0x5f50f1*/
          AlphaShapeClass::CTOR(v13, (int)this, v20, v21); /*0x5f5100*/
        if ( !dword_A8E7AC ) /*0x5f510c*/
          Cell::CreateCrater( /*0x5f5146*/
            v20 - *(_DWORD *)&g_TacticalClass_Instance[44],
            v21 - *(_DWORD *)&g_TacticalClass_Instance[45],
            *(__int16 *)(v11 + 2),
            *(__int16 *)(v11 + 4),
            1);
      }
    }
    result = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this); /*0x5f514f*/
    if ( *(_BYTE *)(result + 570) )
    {
      v14 = (char *)__2_YAPAXI_Z(0x210u); /*0x5f5168*/
      result = v14 ? (int)ObjectClass::checkLimbo(v14) : 0;
      this->lineTrailer = (void *)result; /*0x5f5181*/
      if ( result ) /*0x5f5187*/
      {
        v28 = *(_WORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6243); /*0x5f519e*/
        if ( (_BYTE)v28 /*0x5f51b4*/
          || __PAIR16__(HIBYTE(v28), 0) != *(unsigned __int8 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6245) )
        {
          v18 = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6245); /*0x5f51e2*/
          *(_WORD *)result = *(_WORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6243); /*0x5f51e5*/
          *(_BYTE *)(result + 2) = v18; /*0x5f51e8*/
        }
        else
        {
          v15 = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this); /*0x5f51be*/
          lineTrailer = this->lineTrailer; /*0x5f51c4*/
          v17 = *(_BYTE *)(v15 + 573); /*0x5f51d4*/
          *(_WORD *)lineTrailer = *(_WORD *)(v15 + 571); /*0x5f51d7*/
          lineTrailer[2] = v17; /*0x5f51da*/
        }
        v19 = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this); /*0x5f51ef*/
        result = ObjectClass::updateMissionState((ObjectClass *)this->lineTrailer, *(_DWORD *)(v19 + 576)); /*0x5f5202*/
        *((_DWORD *)this->lineTrailer + 1) = this; /*0x5f520d*/
      }
    }
  }
  LOBYTE(result) = 1; /*0x5f5210*/
  return result; /*0x5f5212*/
}



// ==== 0x005F5230  ObjectClass::Unlink  this=ObjectClass  sig=csp ====
int __thiscall Object::Unlink(ObjectClass *this)
{
  int result; // eax
  AnimClass *v2; // [esp+4h] [ebp+4h]
  char v3; // [esp+8h] [ebp+8h]

  result = (int)this->attachedTag; /*0x5f5230*/
  if ( (AnimClass *)result == v2 && result ) /*0x5f523d*/
  {
    --*(_DWORD *)(result + 44); /*0x5f5244*/
    this->attachedTag = 0; /*0x5f5247*/
  }
  LOBYTE(result) = v3; /*0x5f524f*/
  if ( v3 ) /*0x5f5255*/
  {
    result = (int)this->nextObject; /*0x5f5257*/
    if ( v2 == (AnimClass *)result ) /*0x5f525c*/
    {
      if ( v2 ) /*0x5f5260*/
      {
        result = *(_DWORD *)(result + 48); /*0x5f5262*/
        this->nextObject = (ObjectClass *)result; /*0x5f5265*/
      }
    }
  }
  if ( v2 == this->parachute ) /*0x5f526e*/
    this->parachute = 0; /*0x5f5270*/
  return result; /*0x5f527a*/
}



// ==== 0x005F5280  ObjectClass::Destroy2  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::Destroy2(ObjectClass *this)
{
  TacticalClass *lineTrailer; // ecx
  House *v3; // edi
  bool v4; // bl
  int v5; // edx
  int result; // eax
  char v7; // [esp+Ch] [ebp+4h]

  lineTrailer = (TacticalClass *)this->lineTrailer; /*0x5f5284*/
  if ( lineTrailer ) /*0x5f528c*/
  {
    TacticalClass::GetField(lineTrailer); /*0x5f528e*/
    this->lineTrailer = 0; /*0x5f5293*/
  }
  v3 = (House *)(*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 15))(this); /*0x5f52a6*/
  v4 = 0; /*0x5f52ac*/
  if ( v7 ) /*0x5f52b0*/
    goto LABEL_10; /*0x5f52b0*/
  if ( this && (this->? & 1) != 0 ) /*0x5f52c0*/
    v4 = (*((unsigned __int8 (__thiscall **)(ObjectClass *))this->AbstractClass + 202))(this) != 0; /*0x5f52d0*/
  if ( !v3 || !(unsigned __int8)House::IsHumanPlayer(v3) && !v4 ) /*0x5f52e3*/
LABEL_10:
    (*((void (__thiscall **)(ObjectClass *))this->AbstractClass + 84))(this); /*0x5f52e9*/
  if ( (ObjectClass *)MapClass::GetScrollMode((MapClass *)&stru_87F5F0.__pad_58[416]) == this ) /*0x5f52fd*/
    MapClass::SetScrollMode((int)&stru_87F5F0.__pad_58[416], 0); /*0x5f5306*/
  LOBYTE(v5) = v7; /*0x5f530b*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, v5); /*0x5f5311*/
  return result; /*0x5f5316*/
}



// ==== 0x005F5320  ObjectClass::ProcessInputKey  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::ProcessInputKey(ObjectClass *this)
{
  double health; // [esp+0h] [ebp-8h]
  int v3; // [esp+10h] [ebp+8h]

  if ( v3 == 13 ) /*0x5f532a*/
  {
    (*((void (__thiscall **)(ObjectClass *, int))this->AbstractClass + 73))(this, 2); /*0x5f5374*/
  }
  else
  {
    if ( v3 != 34 ) /*0x5f532f*/
      return 0; /*0x5f5336*/
    health = (double)this->health; /*0x5f533e*/
    if ( health / (double)*(int *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this) + 160) >= *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5880) ) /*0x5f5363*/
      return 10; /*0x5f536d*/
  }
  return 1; /*0x5f5333*/
}



// ==== 0x005F5390  ObjectClass::CreateDestructionEffect  this=ObjectClass  sig=csp ====
int __thiscall TechnoClass::CreateDestructionEffect(TechnoClass *this)
{
  int v2; // ebp
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v7; // edx
  double v8; // st7
  int v9; // eax
  AnimClass *v10; // eax
  int v11; // eax
  int vtable0; // edx
  int v13; // ebp
  TeamClass *attachedTag; // ecx
  TeamClass *v15; // ecx
  TeamClass *v16; // ecx
  TeamClass *v17; // ecx
  TeamClass *v18; // ecx
  TeamClass *v19; // ecx
  TeamClass *v20; // ecx
  int v21; // ecx
  TeamClass *v22; // ecx
  TeamClass *v23; // ecx
  int v24; // [esp+10h] [ebp-14h]
  int health; // [esp+14h] [ebp-10h]
  int v26[3]; // [esp+18h] [ebp-Ch] BYREF
  int *v27; // [esp+28h] [ebp+4h]
  int v28; // [esp+2Ch] [ebp+8h]
  int v29; // [esp+30h] [ebp+Ch]
  int v30; // [esp+34h] [ebp+10h]
  char v31; // [esp+38h] [ebp+14h]
  int v32; // [esp+38h] [ebp+14h]
  int v33; // [esp+40h] [ebp+1Ch]

  v24 = 0; /*0x5f5399*/
  health = this->health; /*0x5f53a6*/
  if ( health <= 0 /*0x5f53cd*/
    || !*v27
    || !v31 && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 136))(this) + 563) )
  {
    return v24; /*0x5f583b*/
  }
  v2 = *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 136))(this) + 160); /*0x5f53e5*/
  if ( !v31 ) /*0x5f53f1*/
  {
    v3 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 136))(this); /*0x5f53fc*/
    *v27 = ComputeTechnoClassDamageFalloff(*v27, v29, *(_DWORD *)(v3 + 156), v28); /*0x5f5414*/
  }
  if ( this
    && (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) == 6
    && !*(_BYTE *)(((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) == 6
                  ? this + 1
                  : (TechnoClass *)1312)->vtable0
                 + 5495) )
  {
    v4 = *v27; /*0x5f5448*/
    if ( *v27 < 1 ) /*0x5f544d*/
      v4 = 1; /*0x5f544f*/
    *v27 = v4; /*0x5f5454*/
  }
  v5 = *v27; /*0x5f5456*/
  if ( !*v27 ) /*0x5f5456*/
    return 0; /*0x5f5465*/
  if ( *v27 >= 0 ) /*0x5f5468*/
  {
    v24 = 1; /*0x5f549c*/
    if ( health <= v5 ) /*0x5f54a6*/
    {
      *v27 = health; /*0x5f54c2*/
    }
    else if ( health >= v2 >> 1 && health - v5 < v2 >> 1 ) /*0x5f54b6*/
    {
      v24 = 2; /*0x5f54b8*/
    }
    v8 = (double)v2 * *(double *)dword_8871E0->RefundPercent; /*0x5f54cd*/
    if ( (double)health > v8 && (double)(health - *v27) < v8 ) /*0x5f54f7*/
      v24 = 3; /*0x5f54f9*/
    v9 = health - *v27; /*0x5f5509*/
    this->health = v9; /*0x5f550d*/
    if ( v9 > 0 /*0x5f5542*/
      || (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) != 15
      || v31
      || !*(_BYTE *)(this->health + 3756)
      || *((_BYTE *)this + 1755) )
    {
      v13 = v24; /*0x5f55ea*/
    }
    else
    {
      v10 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x5f5555*/
      if ( v10 ) /*0x5f555f*/
      {
        v26[0] = this->location[0]; /*0x5f5574*/
        v26[1] = this->location[1]; /*0x5f557d*/
        v26[2] = this->location[2]; /*0x5f5589*/
        AnimClass::ctor(v10, (void *)dword_8871E0->Behind, v26, 0, 1, (void *)0x600, 0, 0); /*0x5f559c*/
      }
      LOWORD(v11) = Math::RoundToInt((double)*(int *)(this->health + 160) * 0.25); /*0x5f55b3*/
      this->health = v11; /*0x5f55bb*/
      if ( v11 <= 1 ) /*0x5f55be*/
        v11 = 1; /*0x5f55c0*/
      vtable0 = this->vtable0; /*0x5f55c5*/
      this->health = v11; /*0x5f55cf*/
      *((_BYTE *)this + 1755) = 1; /*0x5f55d2*/
      (*(void (__thiscall **)(TechnoClass *, int, int, _DWORD))(vtable0 + 1368))(this, 6, 1, 0); /*0x5f55d9*/
      v13 = 3; /*0x5f55df*/
      v24 = 3; /*0x5f55e4*/
    }
    v32 = this->health; /*0x5f55f8*/
    if ( v13 == 2 ) /*0x5f55fc*/
    {
      if ( v30 ) /*0x5f5600*/
      {
        attachedTag = (TeamClass *)this->attachedTag; /*0x5f5602*/
        if ( attachedTag ) /*0x5f5607*/
          TeamClass::Update_0(attachedTag, 39, (int)this, dword_AC1360, 0, 0); /*0x5f5617*/
      }
      if ( !this->isAliveFlag[0] ) /*0x5f5624*/
        return 5; /*0x5f5624*/
      v15 = (TeamClass *)this->attachedTag; /*0x5f562a*/
      if ( v15 ) /*0x5f562f*/
        TeamClass::Update_0(v15, 42, (int)this, dword_AC1360, 0, 0); /*0x5f563e*/
    }
    if ( this->isAliveFlag[0] ) /*0x5f5643*/
    {
      if ( v13 == 3 ) /*0x5f5654*/
      {
        if ( v30 ) /*0x5f5658*/
        {
          v16 = (TeamClass *)this->attachedTag; /*0x5f565a*/
          if ( v16 ) /*0x5f565f*/
            TeamClass::Update_0(v16, 40, (int)this, dword_AC1360, 0, 0); /*0x5f566f*/
        }
        if ( !this->isAliveFlag[0] ) /*0x5f567c*/
          return 5; /*0x5f567c*/
        v17 = (TeamClass *)this->attachedTag; /*0x5f5682*/
        if ( v17 ) /*0x5f5687*/
          TeamClass::Update_0(v17, 43, (int)this, dword_AC1360, 0, 0); /*0x5f5696*/
      }
      if ( this->isAliveFlag[0] ) /*0x5f569b*/
      {
        if ( this->health != health /*0x5f56d6*/
          && (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 136))(this)
          && health == *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 136))(this) + 160) )
        {
          if ( v30 ) /*0x5f56da*/
          {
            v18 = (TeamClass *)this->attachedTag; /*0x5f56dc*/
            if ( v18 ) /*0x5f56e1*/
              TeamClass::Update_0(v18, 38, (int)this, dword_AC1360, 0, 0); /*0x5f56f1*/
          }
          v19 = (TeamClass *)this->attachedTag; /*0x5f56f6*/
          if ( v19 && this->isAliveFlag[0] ) /*0x5f56fd*/
            TeamClass::Update_0(v19, 41, (int)this, dword_AC1360, 0, 0); /*0x5f5714*/
          v20 = (TeamClass *)this->attachedTag; /*0x5f5719*/
          if ( v20 ) /*0x5f571e*/
          {
            if ( !this->isAliveFlag[0] ) /*0x5f5728*/
              return 5; /*0x5f5728*/
            if ( v30 ) /*0x5f5730*/
              TeamClass::Update_0(v20, 41, (int)this, dword_AC1360, 0, v30); /*0x5f573f*/
          }
        }
        if ( this->isAliveFlag[0] && (v32 <= 0 || this->health > 0) ) /*0x5f575f*/
        {
          v21 = 0; /*0x5f5768*/
          if ( !this->health ) /*0x5f5765*/
          {
            if ( v30 ) /*0x5f5770*/
              v21 = *(_DWORD *)(v30 + 540); /*0x5f5772*/
            if ( !v33 || v30 && v33 == v21 ) /*0x5f5786*/
              (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 224))(this, v30); /*0x5f579a*/
            else
              (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 228))(this, v33); /*0x5f578d*/
            v13 = 4; /*0x5f57a2*/
            v24 = 4; /*0x5f57ab*/
            (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 220))(this, 1); /*0x5f57af*/
          }
          if ( this->isAliveFlag[0] ) /*0x5f57b5*/
          {
            if ( v30 ) /*0x5f57c1*/
            {
              v22 = (TeamClass *)this->attachedTag; /*0x5f57c3*/
              if ( v22 ) /*0x5f57c8*/
              {
                if ( v13 != 4 ) /*0x5f57cd*/
                  TeamClass::Update_0(v22, 6, (int)this, dword_AC1360, 0, v30); /*0x5f57db*/
              }
            }
            if ( this->isAliveFlag[0] ) /*0x5f57e0*/
            {
              if ( v30 ) /*0x5f57ec*/
              {
                v23 = (TeamClass *)this->attachedTag; /*0x5f57ee*/
                if ( v23 ) /*0x5f57f3*/
                {
                  if ( v13 != 4 ) /*0x5f57f8*/
                    TeamClass::Update_0(v23, 44, (int)this, dword_AC1360, 0, v30); /*0x5f5807*/
                }
              }
              if ( this->isAliveFlag[0] && this->isSelected[0] ) /*0x5f581a*/
                (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 292))(this, 2); /*0x5f582a*/
            }
          }
          return v24; /*0x5f582a*/
        }
      }
    }
    return 5; /*0x5f5841*/
  }
  v7 = this->health; /*0x5f546a*/
  this->health = v7 - v5; /*0x5f5473*/
  if ( v7 - v5 > v2 ) /*0x5f5476*/
    this->health = v2; /*0x5f5478*/
  if ( v7 != this->health ) /*0x5f547e*/
    (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 328))(this, 7); /*0x5f5486*/
  return 0; /*0x5f545c*/
}



// ==== 0x005F5850  ObjectClass::UpdateProductionDisplay  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::UpdateProductionDisplay(TechnoClass *this)
{
  int result; // eax
  int v3; // ebx
  int v4; // edi
  int vtable0; // edx
  int v6; // [esp+Ch] [ebp+4h] BYREF

  if ( !this->inLimbo[0] ) /*0x5f5854*/
  {
    v3 = v6; /*0x5f5862*/
    if ( v6 == 2 ) /*0x5f5869*/
    {
      if ( !this->needsRedraw[0] && this->isOnMap[0] ) /*0x5f5879*/
      {
        result = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 308))(this); /*0x5f5886*/
        LOBYTE(result) = 1; /*0x5f588d*/
        return result; /*0x5f5890*/
      }
    }
    else
    {
      if ( (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) != 6 /*0x5f58b2*/
        || (result = *((_DWORD *)this + 328), !*(_DWORD *)(result + 3672))
        || v3 )
      {
        result = (int)AbstractClass::IsTechnoType(this); /*0x5f58b6*/
        v4 = result; /*0x5f58bb*/
        if ( result ) /*0x5f58bf*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)result + 704))(result); /*0x5f58c5*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 56))(v4); /*0x5f58cf*/
          result = (*(int (__thiscall **)(TechnoClass *, int *))(this->vtable0 + 440))(this, &v6); /*0x5f58db*/
        }
      }
      if ( (v3 == 1 || v3 == 3) && !this->isOnMap[0] ) /*0x5f58ec*/
      {
        vtable0 = this->vtable0; /*0x5f58f3*/
        this->isOnMap[0] = 1; /*0x5f58f7*/
        result = (*(int (__thiscall **)(TechnoClass *))(vtable0 + 308))(this); /*0x5f58fb*/
        LOBYTE(result) = 1; /*0x5f5902*/
        return result; /*0x5f5905*/
      }
      if ( !v3 && this->isOnMap[0] ) /*0x5f590c*/
      {
        this->isOnMap[0] = 0; /*0x5f5913*/
        LOBYTE(result) = 1; /*0x5f5917*/
        return result; /*0x5f591a*/
      }
    }
  }
  LOBYTE(result) = 0; /*0x5f591e*/
  return result; /*0x5f588c*/
}



// ==== 0x005F5930  ObjectClass::IsNotNull  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::IsNotNull(ObjectClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return v2 != 0; /*0x5f593b*/
}



// ==== 0x005F5940  IUnknown::ParachuteDrop  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::ParachuteDrop(IUnknown *this)
{
  int *v1; // edi
  int result; // eax
  bool *v4; // ebp
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  BuildingClass *v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // edi
  int TileIndex; // [esp-10h] [ebp-28h]
  int v13; // [esp-Ch] [ebp-24h]
  int v14[3]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v15; // [esp+1Ch] [ebp+4h] BYREF

  v1 = v15; /*0x5f5946*/
  result = IsCoordVisibleMap((ObjectClass *)&stru_87F5F0.__pad_58[416], v15); /*0x5f5952*/
  if ( (_BYTE)result ) /*0x5f5959*/
  {
    this->__pad_8C[1] = 1; /*0x5f5965*/
    result = (int)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v1); /*0x5f596c*/
    v4 = (bool *)result; /*0x5f5971*/
    if ( result ) /*0x5f5975*/
    {
      if ( (*(_DWORD *)(result + 320) & 0x100) == 0 /*0x5f5996*/
        || (this->__pad_8C[0] = 1, result = *(_DWORD *)(result + 320), (result & 0x200) != 0) )
      {
        if ( !this ) /*0x5f599e*/
          goto LABEL_23; /*0x5f599e*/
        LOBYTE(v15) = this->__pad_14[0] & 1; /*0x5f59a9*/
        if ( !(_BYTE)v15 ) /*0x5f59ad*/
          goto LABEL_23; /*0x5f59ad*/
        v5 = *(_DWORD *)((*(int (__thiscall **)(IUnknown *))(this->field_0 + 132))(this) + 1460); /*0x5f59bd*/
        LOWORD(v15) = *v1 / 256; /*0x5f59d5*/
        v13 = v5; /*0x5f59e4*/
        v6 = (unsigned __int8)this->__pad_8C[0]; /*0x5f59e7*/
        HIWORD(v15) = v1[1] / 256; /*0x5f59f0*/
        TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&v15, v5, v6); /*0x5f5a10*/
        v7 = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 132))(this); /*0x5f5a17*/
        result = Cell::IsBuildable(v4, *(_DWORD *)(v7 + 1660), 0, 0, TileIndex, v13, -1, 1); /*0x5f5a26*/
        if ( (_BYTE)result ) /*0x5f5a2d*/
        {
LABEL_23:
          result = (*(int (__thiscall **)(IUnknown *, int *, int))(this->field_0 + 216))(this, v1, 128); /*0x5f5a3d*/
          if ( (_BYTE)result ) /*0x5f5a45*/
          {
            (*(void (__thiscall **)(IUnknown *, int *))(this->field_0 + 436))(this, v1); /*0x5f5a50*/
            if ( (*(int (__thiscall **)(IUnknown *))(this->field_0 + 44))(this) == 8 ) /*0x5f5a60*/
            {
              result = __2_YAPAXI_Z(0x1C8u); /*0x5f5a67*/
              if ( !result ) /*0x5f5a71*/
              {
LABEL_19:
                LOBYTE(result) = 1; /*0x5f5b36*/
                return result; /*0x5f5b3e*/
              }
              result = (int)AnimClass::ctor( /*0x5f5a94*/
                              (AnimClass *)result,
                              *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3000),
                              v1,
                              0,
                              1,
                              (void *)0x600,
                              0,
                              0);
              v8 = (BuildingClass *)result; /*0x5f5a99*/
            }
            else
            {
              v9 = *v1; /*0x5f5a9d*/
              v10 = v1[1]; /*0x5f5a9f*/
              v11 = v1[2] + 75; /*0x5f5aaa*/
              v14[0] = v9; /*0x5f5aad*/
              v14[1] = v10; /*0x5f5ab1*/
              v14[2] = v11; /*0x5f5ab5*/
              result = __2_YAPAXI_Z(0x1C8u); /*0x5f5ab9*/
              if ( result ) /*0x5f5ac3*/
              {
                result = (int)AnimClass::ctor( /*0x5f5ae6*/
                                (AnimClass *)result,
                                *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3004),
                                v14,
                                0,
                                1,
                                (void *)0x600,
                                0,
                                0);
                v8 = (BuildingClass *)result; /*0x5f5aeb*/
              }
              else
              {
                v8 = 0; /*0x5f5aef*/
              }
              this->field_88 = (int)v8; /*0x5f5af1*/
            }
            if ( v8 ) /*0x5f5af9*/
            {
              BuildingClass::AimTurret(v8, this); /*0x5f5afe*/
              result = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 44))(this); /*0x5f5b07*/
              if ( result != 8 ) /*0x5f5b0d*/
              {
                v8->?[0] = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 484))(this); /*0x5f5b19*/
                result = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 444))(this); /*0x5f5b23*/
                v8->?[1] = *(__int16 *)(result + 266); /*0x5f5b30*/
              }
            }
            goto LABEL_19; /*0x5f5b30*/
          }
        }
      }
    }
  }
  LOBYTE(result) = 0; /*0x5f5b43*/
  return result; /*0x5f5b36*/
}



// ==== 0x005F5B50  ObjectClass::SetReference  this=ObjectClass  sig=csp ====
char __thiscall ObjectClass::SetReference(ObjectClass *this, int a2)
{
  TagClass *attachedTag; // eax

  attachedTag = this->attachedTag; /*0x5f5b50*/
  if ( attachedTag ) /*0x5f5b55*/
  {
    --attachedTag->instanceCount; /*0x5f5b5b*/
    this->attachedTag = 0; /*0x5f5b5e*/
  }
  if ( !a2 ) /*0x5f5b6b*/
    return 0; /*0x5f5b7c*/
  this->attachedTag = (TagClass *)a2; /*0x5f5b6d*/
  ++*(_DWORD *)(a2 + 44); /*0x5f5b74*/
  return 1; /*0x5f5b79*/
}



// ==== 0x005F5B90  ObjectClass::GetOrCreateResHandle  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetOrCreateResHandle(ObjectClass *this)
{
  int v3; // eax
  int v4; // [esp+Ch] [ebp+4h]

  if ( (byte_AC1398 & 1) == 0 ) /*0x5f5b9e*/
  {
    byte_AC1398 |= 1u; /*0x5f5bbc*/
    dword_AC139C = 2147450879; /*0x5f5bc2*/
    atexit(nullsub_205); /*0x5f5bc7*/
  }
  if ( !(*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this) ) /*0x5f5bd3*/
    return (int)&dword_AC139C; /*0x5f5bdd*/
  v3 = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this); /*0x5f5beb*/
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 144))(v3, v4); /*0x5f5be2*/
}



// ==== 0x005F5C10  nullsub_205  this=-  sig=ida-proto ====
void __cdecl nullsub_205()
{
  ; /*0x5f5c10*/
}



// ==== 0x005F5C20  IUnknown::Fire  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::Fire(IUnknown *this)
{
  int *v2; // edi
  int v3; // ebx
  int v5; // [esp-4h] [ebp-10h]
  int v6; // [esp+10h] [ebp+4h]
  int v7; // [esp+14h] [ebp+8h]

  v2 = (int *)(*(int (__thiscall **)(IUnknown *))(this->field_0 + 136))(this); /*0x5f5c2f*/
  v3 = *v2; /*0x5f5c33*/
  v5 = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 60))(this); /*0x5f5c3c*/
  return (*(int (__thiscall **)(int *, int, int, _DWORD, int))(v3 + 148))(v2, v6, v7, 0, v5); /*0x5f5c4d*/
}



// ==== 0x005F5C60  BuildingClass::GetHealthRatio  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetHealthRatio(BuildingClass *this)
{
  return (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))this->TechnoClass + 34))( /*0x5f5c7c*/
           this,
           COERCE_UNSIGNED_INT64((double)this->?),
           HIDWORD(COERCE_UNSIGNED_INT64((double)this->?)));
}



// ==== 0x005F5CD0  BuildingClass::IsHealthLow  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsHealthLow(BuildingClass *this)
{
  double health; // [esp+4h] [ebp-8h]

  health = (double)this->?; /*0x5f5cdb*/
  return health / (double)*(int *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 34))(this) + 160) <= *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5896) /*0x5f5d0e*/
      && this->? > 0;
}



// ==== 0x005F5D20  ObjectClass::IsYellowHP  this=ObjectClass  sig=csp ====
BOOL __thiscall ObjectClass::IsYellowHP(ObjectClass *this)
{
  BOOL result; // eax
  double health; // [esp+4h] [ebp-8h]
  double v4; // [esp+4h] [ebp-8h]

  health = (double)this->health; /*0x5f5d2b*/
  result = 0; /*0x5f5d89*/
  if ( health / (double)*(int *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this) + 160) > *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5896) ) /*0x5f5d50*/
  {
    v4 = (double)this->health; /*0x5f5d59*/
    if ( v4 / (double)*(int *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this) + 160) <= *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5888) ) /*0x5f5d7d*/
      return 1; /*0x5f5d50*/
  }
  return result; /*0x5f5d84*/
}



// ==== 0x005F5D90  ObjectClass::IsGreenHP  this=ObjectClass  sig=csp ====
BOOL __thiscall ObjectClass::IsGreenHP(ObjectClass *this)
{
  double health; // [esp+0h] [ebp-8h]

  health = (double)this->health; /*0x5f5d98*/
  return health / (double)*(int *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this) + 160) > *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5888); /*0x5f5dc4*/
}



// ==== 0x005F5DD0  BuildingClass::GetSellPriority  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetSellPriority(BuildingClass *this)
{
  int result; // eax
  double v3; // st7
  double health; // [esp+4h] [ebp-8h]
  double v5; // [esp+4h] [ebp-8h]
  double v6; // [esp+4h] [ebp-8h]

  health = (double)this->?; /*0x5f5ddb*/
  if ( health / (double)*(int *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 34))(this) + 160) <= *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5896) /*0x5f5e07*/
    && this->? > 0 )
  {
    return 0; /*0x5f5e09*/
  }
  v5 = (double)this->?; /*0x5f5e17*/
  if ( v5 / (double)*(int *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 34))(this) + 160) <= *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5896) ) /*0x5f5e3b*/
    return 2; /*0x5f5e3b*/
  v6 = (double)this->?; /*0x5f5e44*/
  v3 = v6 / (double)*(int *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 34))(this) + 160); /*0x5f5e59*/
  result = 1; /*0x5f5e68*/
  if ( v3 > *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5888) ) /*0x5f5e6d*/
    return 2; /*0x5f5e6f*/
  return result; /*0x5f5e0b*/
}



// ==== 0x005F5E80  ObjectClass::SaveLoad_Register  this=ObjectClass  sig=csp ====
int __thiscall BuildingClass::SaveLoad_Register(ObjectClass *this)
{
  int result; // eax
  int v2; // [esp+8h] [ebp+4h]
  int v3; // [esp+Ch] [ebp+8h]

  result = AbstractClass::SaveLoad_Prefix_0((_DWORD *)v2, v3); /*0x5f5e8b*/
  if ( result >= 0 ) /*0x5f5e92*/
  {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 48)); /*0x5f5e9d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 52)); /*0x5f5eab*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 56)); /*0x5f5eb9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 24)); /*0x5f5ec7*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 136)); /*0x5f5ed8*/
    AudioController::Init((AudioController *)(v2 + 60)); /*0x5f5ee0*/
    AudioController::Init((AudioController *)(v2 + 80)); /*0x5f5ee8*/
    *(_DWORD *)(v2 + 168) = 0; /*0x5f5eed*/
    return 0; /*0x5f5ef7*/
  }
  return result; /*0x5f5ef9*/
}



// ==== 0x005F5F00  ObjectClass::GetLandHeight  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetLandHeight(ObjectClass *this)
{
  return *(char *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 111))(this) + 283)
       + (this->onBridge != 0 ? 4 : 0);
}



// ==== 0x005F5F30  ObjectClass::GetMember41  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetMember41(ObjectClass *this)
{
  return this->location[2]; /*0x5f5f36*/
}



// ==== 0x005F5F40  IUnknown::GetZAboveGround  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetZAboveGround(IUnknown *this)
{
  int v2; // ecx
  _DWORD v4[3]; // [esp+4h] [ebp-Ch] BYREF

  v4[0] = this->field_9C; /*0x5f5f52*/
  v4[1] = *(_DWORD *)this->__pad_A0; /*0x5f5f63*/
  v4[2] = this->field_A4; /*0x5f5f6a*/
  v2 = this->field_A4 - Cell::GetGroundHeight(v4); /*0x5f5f79*/
  if ( this->__pad_8C[0] ) /*0x5f5f7b*/
    v2 -= dword_AC13BC; /*0x5f5f86*/
  return v2; /*0x5f5f83*/
}



// ==== 0x005F5FA0  IUnknown::SetZ  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::SetZ(IUnknown *this)
{
  int v2; // edi
  __int64 GroundHeight; // rax
  int result; // eax
  int v5; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]
  int v8; // [esp+18h] [ebp+4h]

  v2 = v8; /*0x5f5fa7*/
  if ( this->__pad_8C[0] ) /*0x5f5fab*/
    v2 = dword_AC13BC + v8; /*0x5f5fb5*/
  if ( this->__pad_74[0] ) /*0x5f5fbb*/
  {
    (*(void (__thiscall **)(IUnknown *, _DWORD))(this->field_0 + 292))(this, 0); /*0x5f5fc8*/
    v5 = this->field_9C; /*0x5f5fda*/
    v6 = *(_DWORD *)this->__pad_A0; /*0x5f5fe6*/
    v7 = this->field_A4; /*0x5f5fed*/
    GroundHeight = Cell::GetGroundHeight(&v5); /*0x5f5ff6*/
    this->field_A4 = v2 + GroundHeight; /*0x5f5fff*/
    return (*(int (__fastcall **)(IUnknown *, _DWORD, int))(this->field_0 + 292))(this, HIDWORD(GroundHeight), 1); /*0x5f6009*/
  }
  else
  {
    v5 = this->field_9C; /*0x5f6023*/
    v6 = *(_DWORD *)this->__pad_A0; /*0x5f602f*/
    v7 = this->field_A4; /*0x5f6036*/
    result = v2 + Cell::GetGroundHeight(&v5); /*0x5f6044*/
    this->field_A4 = result; /*0x5f6047*/
  }
  return result; /*0x5f600f*/
}



// ==== 0x005F6060  ObjectClass::SetAnim  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::SetAnim(ObjectClass *this, int a2)
{
  int (__thiscall **vtable0)(ObjectClass *, int); // edx

  if ( this->isOnMap ) /*0x5f6063*/
  {
    (*((void (__thiscall **)(ObjectClass *, _DWORD))this->AbstractClass + 73))(this, 0); /*0x5f606e*/
    vtable0 = (int (__thiscall **)(ObjectClass *, int))this->AbstractClass; /*0x5f6078*/
    this->location[2] = a2; /*0x5f607a*/
    return vtable0[73](this, 1); /*0x5f6084*/
  }
  else
  {
    this->location[2] = a2; /*0x5f6092*/
    return a2; /*0x5f608e*/
  }
}



// ==== 0x005F60A0  ObjectClass::SetCellOverlayFlag  this=ObjectClass  sig=csp ====
int __thiscall MapClass::SetCellOverlayFlag(ObjectClass *this)
{
  CellClass *v1; // eax
  int altOccupationFlags; // ecx
  int result; // eax
  CellClass *v4; // eax
  int occupationFlags; // ecx
  _DWORD *v6; // [esp+8h] [ebp+4h]

  if ( (signed int)(dword_AC13BC + Cell::GetGroundHeight(v6)) <= v6[2] /*0x5f60d3*/
    && (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6)->flags[0] & 0x100) != 0 )
  {
    v1 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6); /*0x5f60db*/
    altOccupationFlags = v1->altOccupationFlags; /*0x5f60e0*/
    result = (int)&v1->altOccupationFlags; /*0x5f60e6*/
    *(_DWORD *)result = altOccupationFlags | 0x40; /*0x5f60ef*/
  }
  else
  {
    v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6); /*0x5f60fa*/
    occupationFlags = v4->occupationFlags; /*0x5f60ff*/
    result = (int)&v4->occupationFlags; /*0x5f6105*/
    *(_DWORD *)result = occupationFlags | 0x40; /*0x5f610e*/
  }
  return result; /*0x5f60ee*/
}



// ==== 0x005F6120  ObjectClass::ClearCellOverlayFlag  this=ObjectClass  sig=csp ====
int __thiscall MapClass::ClearCellOverlayFlag(ObjectClass *this)
{
  CellClass *v1; // eax
  int altOccupationFlags; // ecx
  int result; // eax
  CellClass *v4; // eax
  int occupationFlags; // ecx
  _DWORD *v6; // [esp+8h] [ebp+4h]

  if ( (signed int)(dword_AC13BC + Cell::GetGroundHeight(v6)) <= v6[2] /*0x5f6153*/
    && (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6)->flags[0] & 0x100) != 0 )
  {
    v1 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6); /*0x5f615b*/
    altOccupationFlags = v1->altOccupationFlags; /*0x5f6160*/
    result = (int)&v1->altOccupationFlags; /*0x5f6166*/
    *(_DWORD *)result = altOccupationFlags & 0xFFFFFFBF; /*0x5f616f*/
  }
  else
  {
    v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6); /*0x5f617a*/
    occupationFlags = v4->occupationFlags; /*0x5f617f*/
    result = (int)&v4->occupationFlags; /*0x5f6185*/
    *(_DWORD *)result = occupationFlags & 0xFFFFFFBF; /*0x5f618e*/
  }
  return result; /*0x5f616e*/
}



// ==== 0x005F61A0  ObjectTypeClass::ReleaseWaveAndString  this=ObjectTypeClass  sig=csp ====
void __thiscall ObjectTypeClass::ReleaseWaveAndString(ObjectTypeClass *this)
{
  void *vtable0; // edi
  String *vtable1; // edi

  vtable0 = this->AbstractTypeClass; /*0x5f61a4*/
  if ( this->AbstractTypeClass ) /*0x5f61a4*/
  {
    WaveClass::Destroy((WaveClass *)this->AbstractTypeClass); /*0x5f61ac*/
    __3_YAXPAX_Z(vtable0); /*0x5f61b2*/
  }
  vtable1 = (String *)this->?; /*0x5f61ba*/
  this->AbstractTypeClass = 0; /*0x5f61bd*/
  if ( vtable1 ) /*0x5f61c5*/
  {
    String::Release(vtable1); /*0x5f61c9*/
    __3_YAXPAX_Z(vtable1); /*0x5f61cf*/
  }
  this->? = 0; /*0x5f61d7*/
}



// ==== 0x005F6220  DisplayClass::checkScreenBounds  this=DisplayClass  sig=csp ====
bool __thiscall DisplayClass::checkScreenBounds(DisplayClass *this, int a2)
{
  int v3; // edi

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 184))(a2); /*0x5f6234*/
  return (*((int (__thiscall **)(DisplayClass *))this->DisplayClass_field_0x0 + 46))(this) > v3; /*0x5f623e*/
}



// ==== 0x005F6250  ObjectClass::ProcessPower  this=ObjectClass  sig=csp ====
int __thiscall HouseClass::ProcessPower(ObjectClass *this)
{
  ObjectClass *nextObject; // eax
  int v3; // eax
  TagClass *attachedTag; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  Power *v16; // [esp+Ch] [ebp+4h]

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x5f6259*/
  nextObject = this->nextObject; /*0x5f625e*/
  if ( nextObject ) /*0x5f6263*/
  {
    v3 = (*((int (__stdcall **)(void **))nextObject->? + 4))(&nextObject->?); /*0x5f626c*/
    Power::TimerProcess(v3); /*0x5f6272*/
  }
  attachedTag = this->attachedTag; /*0x5f6277*/
  if ( attachedTag ) /*0x5f627c*/
  {
    v5 = (*((int (__stdcall **)(void **))attachedTag->? + 4))(&attachedTag->?); /*0x5f6285*/
    Power::TimerProcess(v5); /*0x5f628b*/
  }
  Power::TimerProcess(this->health); /*0x5f6296*/
  LOBYTE(v6) = this->isOnMap; /*0x5f629b*/
  Power::FlagProcess(v16, v6); /*0x5f62a1*/
  if ( !*(_DWORD *)&dword_A8B238 || *(_DWORD *)&dword_A8B238 == 5 ) /*0x5f62b2*/
  {
    LOBYTE(v7) = this->needsRedraw; /*0x5f62b4*/
    v9 = Power::FlagProcess(v16, v7); /*0x5f62bd*/
    LOBYTE(v9) = this->isSelected; /*0x5f62c2*/
    Power::FlagProcess(v16, v9); /*0x5f62cb*/
  }
  LOBYTE(v8) = this->inLimbo; /*0x5f62d0*/
  Power::FlagProcess(v16, v8); /*0x5f62d9*/
  LOBYTE(v10) = this->hasParachute; /*0x5f62de*/
  v11 = Power::FlagProcess(v16, v10); /*0x5f62e7*/
  LOBYTE(v11) = this->onBridge; /*0x5f62ec*/
  Power::FlagProcess(v16, v11); /*0x5f62f5*/
  LOBYTE(v12) = this->isFallingDown; /*0x5f62fa*/
  Power::FlagProcess(v16, v12); /*0x5f6303*/
  LOBYTE(v13) = this->isBomb; /*0x5f6308*/
  v14 = Power::FlagProcess(v16, v13); /*0x5f6311*/
  LOBYTE(v14) = this->isAliveFlag; /*0x5f6316*/
  Power::FlagProcess(v16, v14); /*0x5f631f*/
  Power::TimerProcess(this->location[0]); /*0x5f632d*/
  Power::TimerProcess(this->location[1]); /*0x5f633b*/
  return Power::TimerProcess(this->location[2]); /*0x5f634e*/
}



// ==== 0x005F6360  ObjectClass::DistanceTo  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::DistanceTo(ObjectClass *this, int a2)
{
  double v2; // st7
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // esi
  int FoundationHeight; // edi
  int v12; // [esp+20h] [ebp-20h]
  int v13; // [esp+24h] [ebp-1Ch]
  _BYTE v14[12]; // [esp+28h] [ebp-18h] BYREF
  _BYTE v15[12]; // [esp+34h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x5f636d*/
    return 0; /*0x5f6370*/
  v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v14); /*0x5f6388*/
  v6 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))this->AbstractClass + 18))(this, v15); /*0x5f6391*/
  v12 = v6[1] - v5[1]; /*0x5f63ae*/
  v13 = v6[2] - v5[2]; /*0x5f63b2*/
  Math::Sqrt((double)(*v6 - *v5) * (double)(*v6 - *v5) + (double)v13 * (double)v13 + (double)v12 * (double)v12); /*0x5f63de*/
  LOWORD(v7) = Math::RoundToInt(v2); /*0x5f63e6*/
  v8 = v7; /*0x5f63ef*/
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2); /*0x5f63f1*/
  v10 = v9 == 6 ? a2 : 0;
  if ( v10 )
  {
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(*(int **)(v9 == 6 ? a2 + 0x520 : 1312), 0);
    v8 += -64 * (BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v10 + 1312)) + FoundationHeight); /*0x5f6424*/
    if ( v8 < 0 ) /*0x5f6426*/
      return 0; /*0x5f6428*/
  }
  return v8; /*0x5f636f*/
}



// ==== 0x005F6440  ObjectClass::ComputeDistance  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::ComputeDistance(TechnoClass *this, int a2)
{
  double v2; // st7
  int *v5; // eax
  int v6; // ebx
  int v7; // ebp
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // esi
  int FoundationHeight; // edi
  _BYTE v14[12]; // [esp+28h] [ebp-18h] BYREF
  _BYTE v15[12]; // [esp+34h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x5f644d*/
    return 0; /*0x5f6450*/
  v5 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v14); /*0x5f6464*/
  v6 = *v5; /*0x5f6467*/
  v7 = v5[1]; /*0x5f6469*/
  v8 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, _BYTE *))(this->vtable0 + 72))(this, v15); /*0x5f6475*/
  Math::Sqrt((double)(*v8 - v6) * (double)(*v8 - v6) + (double)(v8[1] - v7) * (double)(v8[1] - v7)); /*0x5f64a5*/
  LOWORD(v9) = Math::RoundToInt(v2); /*0x5f64ad*/
  v10 = v9; /*0x5f64b6*/
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2); /*0x5f64b8*/
  v12 = v11 == 6 ? a2 : 0;
  if ( v12 )
  {
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(*(int **)(v11 == 6 ? a2 + 0x520 : 1312), 0);
    v10 += -64 * (BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v12 + 1312)) + FoundationHeight); /*0x5f64eb*/
    if ( v10 < 0 ) /*0x5f64ed*/
      return 0; /*0x5f64ef*/
  }
  return v10; /*0x5f644f*/
}



// ==== 0x005F6500  BuildingClass::SquaredDistanceTo  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SquaredDistanceTo(BuildingClass *this, int *a2)
{
  int *v3; // eax
  int v4; // esi
  int v5; // edx
  int v6; // edi
  _DWORD *v7; // edx
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x5f650a*/
    return 0; /*0x5f650c*/
  v3 = (int *)(*((int (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass + 18))(this, v8); /*0x5f651e*/
  v4 = *v3; /*0x5f6521*/
  v5 = *a2; /*0x5f6523*/
  v6 = v3[1]; /*0x5f6527*/
  v8[2] = v3[2]; /*0x5f652d*/
  v7 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(v5 + 72))(a2, v8); /*0x5f6539*/
  return (v4 - *v7) * (v4 - *v7) + (v6 - v7[1]) * (v6 - v7[1]); /*0x5f650e*/
}



// ==== 0x005F6560  Math::DistSq2D  this=TechnoClass  sig=csp ====
int __thiscall Math::DistSq2D(Math *this, _DWORD *a2)
{
  int *v2; // edx
  int v3; // eax
  int v4; // ecx
  _BYTE v6[8]; // [esp+4h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-4h]

  v2 = (int *)(*(int (__thiscall **)(Math *, _BYTE *))(*(_DWORD *)this->__pad_0 + 72))(this, v6); /*0x5f656e*/
  v3 = *v2; /*0x5f6574*/
  v4 = v2[1]; /*0x5f6576*/
  v7 = v2[2]; /*0x5f657c*/
  return (v3 - *a2) * (v3 - *a2) + (v4 - a2[1]) * (v4 - a2[1]); /*0x5f658b*/
}



// ==== 0x005F65A0  ObjectClass::GetCoords  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetCoords(ObjectClass *this)
{
  int *location; // ecx
  CoordStruct *out; // [esp+8h] [ebp+4h]

  location = this->location; /*0x5f65a4*/
  out->vfptr = (void *)*location; /*0x5f65af*/
  out[1].vfptr = (void *)location[1]; /*0x5f65b4*/
  out[2].vfptr = (void *)location[2]; /*0x5f65bb*/
  return (int)out; /*0x5f65b7*/
}



// ==== 0x005F65D0  IUnknown::DelegateVt69  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::DelegateVt69(IUnknown *this)
{
  int v2; // [esp+4h] [ebp+4h]
  int v3; // [esp+8h] [ebp+8h]

  return (*(int (__thiscall **)(IUnknown *, int, int))(this->field_0 + 276))(this, v2, v3); /*0x5f65e2*/
}



// ==== 0x005F65F0  ObjectClass::Destroy  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::Destroy(ObjectClass *this)
{
  ObjectClass *attachedBomb; // ecx
  int result; // eax

  attachedBomb = (ObjectClass *)this->attachedBomb; /*0x5f65f3*/
  if ( attachedBomb ) /*0x5f65f8*/
    ObjectClass::CleanupAudioAndRefs(attachedBomb); /*0x5f65fa*/
  if ( this && (this->? & 1) != 0 ) /*0x5f6607*/
    TechnoClass::CleanupAll((TechnoClass *)this, 0); /*0x5f660d*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x5f6616*/
  (*((void (__thiscall **)(ObjectClass *))this->AbstractClass + 53))(this); /*0x5f661f*/
  this->isAliveFlag = 0; /*0x5f6625*/
  result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x5f662c*/
  if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x5f6666*/
    || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
    && g_BuildingLoadQueue_Array.UnitExitSound > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))(
                   &g_BuildingLoadQueue_Array.ToTile,
                   *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
                   0),
        (_BYTE)result) )
  {
    result = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x5f666e*/
    *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * result) = this; /*0x5f667d*/
  }
  return result; /*0x5f6680*/
}



// ==== 0x005F6690  IUnknown::IsActive  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::IsActive(IUnknown *this)
{
  return this->__pad_8C[4] == 0; /*0x5f669d*/
}



// ==== 0x005F66A0  sub_5F66A0  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_5F66A0(_DWORD *a1, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // ebp
  _DWORD *v8; // ebp
  int *v9; // ebp
  int v10; // edx
  int v11; // edi
  bool v12; // zf
  _DWORD *v14; // [esp+10h] [ebp-28h]
  int v15; // [esp+14h] [ebp-24h]

  v2 = *(_DWORD *)(a2 + 16); /*0x5f66a7*/
  v3 = 0; /*0x5f66ae*/
  v4 = 0; /*0x5f66b0*/
  v5 = 0; /*0x5f66b2*/
  v6 = 0; /*0x5f66b4*/
  if ( v2 > 0 ) /*0x5f66bc*/
  {
    v7 = *(_DWORD *)(a2 + 4); /*0x5f66c2*/
    v3 = *(_DWORD *)(*(_DWORD *)v7 + 156); /*0x5f66d0*/
    v4 = *(_DWORD *)(*(_DWORD *)v7 + 160); /*0x5f66d9*/
    if ( v2 - 1 < 0 ) /*0x5f66f5*/
    {
      v5 = 0; /*0x5f6762*/
    }
    else
    {
      v5 = 0; /*0x5f66f7*/
      v8 = (_DWORD *)(v7 + 4 * (v2 - 1)); /*0x5f66fb*/
      v14 = v8; /*0x5f6700*/
      v15 = *(_DWORD *)(a2 + 16); /*0x5f6704*/
      do /*0x5f675e*/
      {
        v9 = (int *)(*v8 + 156); /*0x5f6711*/
        v10 = *v9; /*0x5f6713*/
        v11 = v9[1]; /*0x5f6718*/
        if ( *v9 < v3 ) /*0x5f6722*/
        {
          v5 += v3 - v10; /*0x5f6726*/
          v3 = *v9; /*0x5f6728*/
        }
        if ( v11 < v4 ) /*0x5f672c*/
        {
          v6 += v4 - v11; /*0x5f6730*/
          v4 = v9[1]; /*0x5f6732*/
        }
        if ( v10 > v5 + v3 ) /*0x5f6739*/
          v5 = v10 - v3; /*0x5f673d*/
        if ( v11 > v6 + v4 ) /*0x5f6744*/
          v6 = v11 - v4; /*0x5f6748*/
        v8 = v14 - 1; /*0x5f6752*/
        v12 = v15 == 1; /*0x5f6755*/
        --v14; /*0x5f6756*/
        --v15; /*0x5f675a*/
      }
      while ( !v12 ); /*0x5f675e*/
    }
  }
  *a1 = v3; /*0x5f676c*/
  a1[1] = v4; /*0x5f676e*/
  a1[2] = v5; /*0x5f6771*/
  a1[3] = v6; /*0x5f6774*/
  return a1; /*0x5f6777*/
}



// ==== 0x005F6790  Network_Process_5F6790  this=-  sig=csp ====
int *__fastcall sub_5F6790(int *a1, int a2)
{
  int v2; // esi
  int v4; // eax
  int v5; // ebp
  int v6; // ecx
  _DWORD *v7; // edx
  _DWORD *v8; // esi
  int v10; // [esp+10h] [ebp-Ch]
  int v11; // [esp+14h] [ebp-8h]

  v2 = *(_DWORD *)(a2 + 16); /*0x5f6796*/
  v4 = 0; /*0x5f679f*/
  v5 = 0; /*0x5f67a1*/
  v6 = 0; /*0x5f67a3*/
  v11 = v2; /*0x5f67ab*/
  if ( v2 - 1 >= 0 ) /*0x5f67af*/
  {
    v7 = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * (v2 - 1)); /*0x5f67b4*/
    v10 = v2; /*0x5f67b8*/
    do /*0x5f67e0*/
    {
      v8 = (_DWORD *)*v7--; /*0x5f67bc*/
      v4 += v8[39]; /*0x5f67cb*/
      v5 += v8[40]; /*0x5f67d4*/
      v6 += v8[41]; /*0x5f67d9*/
      --v10; /*0x5f67dc*/
    }
    while ( v10 ); /*0x5f67e0*/
    v2 = v11; /*0x5f67e2*/
  }
  *a1 = v4 / v2; /*0x5f67fd*/
  a1[1] = v5 / v2; /*0x5f6801*/
  a1[2] = v6 / v2; /*0x5f6805*/
  return a1; /*0x5f67ff*/
}



// ==== 0x005F6810  Network_Process_5F6810  this=-  sig=csp ====
_DWORD *__fastcall sub_5F6810(int a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v5; // edi
  int v6; // ebp
  double v7; // st7
  int v8; // eax
  double v9; // st7
  _DWORD *v10; // [esp+18h] [ebp-28h]
  int v11; // [esp+20h] [ebp-20h]
  int v12; // [esp+24h] [ebp-1Ch]
  int v13; // [esp+28h] [ebp-18h]
  int v14; // [esp+2Ch] [ebp-14h]
  int v15; // [esp+30h] [ebp-10h]

  result = 0; /*0x5f681f*/
  v5 = *(_DWORD *)(a1 + 16) - 1; /*0x5f6826*/
  v10 = 0; /*0x5f6827*/
  v6 = 99999999; /*0x5f682b*/
  if ( v5 >= 0 ) /*0x5f6830*/
  {
    while ( result ) /*0x5f6838*/
    {
      v13 = *a2 - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v5) + 156); /*0x5f68c7*/
      v14 = a2[1] - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v5) + 160); /*0x5f68d4*/
      v15 = a2[2] - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v5) + 164); /*0x5f68de*/
      v9 = Math::Sqrt((double)v13 * (double)v13 + (double)v15 * (double)v15 + (double)v14 * (double)v14); /*0x5f6903*/
      v8 = Math::RoundToInt(v9); /*0x5f690b*/
      if ( v8 < v6 ) /*0x5f6912*/
      {
        v10 = *(_DWORD **)(*(_DWORD *)(a1 + 4) + 4 * v5); /*0x5f691a*/
        goto LABEL_6; /*0x5f691a*/
      }
LABEL_7:
      result = v10; /*0x5f6920*/
      if ( --v5 < 0 ) /*0x5f6925*/
        return result; /*0x5f6925*/
    }
    v10 = *(_DWORD **)(*(_DWORD *)(a1 + 4) + 4 * v5); /*0x5f6845*/
    v11 = a2[1] - v10[40]; /*0x5f6866*/
    v12 = a2[2] - v10[41]; /*0x5f6870*/
    v7 = Math::Sqrt((double)v12 * (double)v12 + (double)v11 * (double)v11 + (double)(*a2 - v10[39]) /*0x5f6895*/
                                                                          * (double)(*a2 - v10[39]));
    v8 = Math::RoundToInt(v7); /*0x5f689d*/
LABEL_6:
    v6 = v8; /*0x5f691e*/
    goto LABEL_7; /*0x5f691e*/
  }
  return result; /*0x5f692b*/
}



// ==== 0x005F6940  IUnknown::SetPosition  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::SetPosition(IUnknown *this)
{
  int *v1; // ecx
  int result; // eax
  int *v3; // [esp+4h] [ebp+4h]

  v1 = &this->field_9C; /*0x5f6944*/
  *v1 = *v3; /*0x5f694c*/
  v1[1] = v3[1]; /*0x5f6951*/
  result = v3[2]; /*0x5f6954*/
  v1[2] = result; /*0x5f6957*/
  return result; /*0x5f695a*/
}



// ==== 0x005F6960  IUnknown::GetCellCoords  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCellCoords(IUnknown *this)
{
  int *v1; // esi
  int v2; // ecx
  int v3; // eax
  int v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  v1 = &this->field_9C; /*0x5f6964*/
  v5 = this->field_9C; /*0x5f696e*/
  v6 = *(_DWORD *)this->__pad_A0; /*0x5f697f*/
  v7 = this->field_A4; /*0x5f6986*/
  Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v5); /*0x5f698a*/
  v2 = v1[2]; /*0x5f6991*/
  v3 = v1[1]; /*0x5f6994*/
  v5 = *v1; /*0x5f6997*/
  v7 = v2; /*0x5f699f*/
  v6 = v3; /*0x5f69a9*/
  return (int)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v5); /*0x5f69b2*/
}



// ==== 0x005F69C0  IUnknown::CoordToCell  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::CoordToCell(IUnknown *this)
{
  _DWORD *v1; // eax
  int v3; // [esp+8h] [ebp-10h]
  _BYTE v4[12]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v5; // [esp+1Ch] [ebp+4h]

  v1 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _BYTE *, _DWORD))(this->field_0 + 76))(this, v4, 0); /*0x5f69cc*/
  LOWORD(v3) = *v1 / 256; /*0x5f69df*/
  HIWORD(v3) = v1[1] / 256; /*0x5f69f3*/
  *v5 = v3; /*0x5f6a00*/
  return (int)v5; /*0x5f6a02*/
}



// ==== 0x005F6A10  IUnknown::GetCell  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCell(IUnknown *this)
{
  _DWORD *v1; // eax
  int v3; // [esp+8h] [ebp-14h]
  __int16 v4[2]; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v5[12]; // [esp+10h] [ebp-Ch] BYREF

  v1 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _BYTE *, _DWORD))(this->field_0 + 76))(this, v5, 0); /*0x5f6a1c*/
  LOWORD(v3) = *v1 / 256; /*0x5f6a2f*/
  HIWORD(v3) = v1[1] / 256; /*0x5f6a48*/
  *(_DWORD *)v4 = v3; /*0x5f6a56*/
  return (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v4); /*0x5f6a5f*/
}



// ==== 0x005F6A70  IUnknown::CheckGroundHeightDiff  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::CheckGroundHeightDiff(IUnknown *this)
{
  char v2; // bl
  _DWORD *v3; // eax
  int GroundHeight; // edi
  int v5; // ebp
  int result; // eax
  _DWORD v7[3]; // [esp+10h] [ebp-18h] BYREF
  _DWORD v8[3]; // [esp+1Ch] [ebp-Ch] BYREF
  int v9; // [esp+2Ch] [ebp+4h]

  v2 = this->__pad_8C[0]; /*0x5f6a7f*/
  v3 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _DWORD *, int))(this->field_0 + 76))(this, v8, v9); /*0x5f6a8d*/
  v7[0] = *v3; /*0x5f6a92*/
  v7[1] = v3[1]; /*0x5f6a9e*/
  v7[2] = v3[2]; /*0x5f6aaa*/
  GroundHeight = Cell::GetGroundHeight(v7); /*0x5f6ab9*/
  v8[0] = this->field_9C; /*0x5f6abd*/
  v8[1] = *(_DWORD *)this->__pad_A0; /*0x5f6ac9*/
  v8[2] = this->field_A4; /*0x5f6ad5*/
  v5 = Cell::GetGroundHeight(v8); /*0x5f6ade*/
  if ( this->__pad_8C[0] ) /*0x5f6ae0*/
  {
LABEL_5:
    result = dword_AC13C8; /*0x5f6b20*/
    goto LABEL_6; /*0x5f6b20*/
  }
  result = dword_AC13C8; /*0x5f6aea*/
  if ( v5 - GroundHeight > 3 * dword_AC13C8 ) /*0x5f6af8*/
  {
    result = (int)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v7); /*0x5f6b04*/
    if ( (*(_DWORD *)(result + 320) & 0x100) != 0 ) /*0x5f6b12*/
    {
      LOBYTE(result) = 1; /*0x5f6b17*/
      return result; /*0x5f6b1d*/
    }
    goto LABEL_5; /*0x5f6b12*/
  }
LABEL_6:
  if ( this->__pad_8C[0] && GroundHeight - v5 > 3 * result ) /*0x5f6b36*/
    LOBYTE(result) = 0; /*0x5f6b3b*/
  else
    LOBYTE(result) = v2; /*0x5f6b46*/
  return result; /*0x5f6b14*/
}



// ==== 0x005F6B50  IUnknown::COMStub_Return0_105  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_105(IUnknown *this)
{
  int result; // eax

  return result; /*0x5f6b50*/
}



// ==== 0x005F6B60  IUnknown::IsBelowScreen  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::IsBelowScreen(IUnknown *this)
{
  int result; // eax

  LOBYTE(result) = this->__pad_74[0] /*0x5f6b7c*/
                && (result = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 456))(this), result < 2 * dword_AC13C8);
  return result; /*0x5f6b7e*/
}



// ==== 0x005F6B90  IUnknown::IsHeightAboveThreshold  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::IsHeightAboveThreshold(IUnknown *this)
{
  int result; // eax

  LOBYTE(result) = this->__pad_74[0] /*0x5f6bac*/
                && (result = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 456))(this), result >= 2 * dword_AC13C8);
  return result; /*0x5f6bae*/
}



// ==== 0x005F6BC0  ObjectClass::COMStub_Return0_33  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_33(ObjectClass *this)
{
  return 0; /*0x5f6bc2*/
}



// ==== 0x005F6BD0  ObjectClass::GetBoundingSize  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetBoundingSize(ObjectClass *this)
{
  int v2; // edi
  _BYTE v4[12]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v5[12]; // [esp+14h] [ebp-Ch] BYREF

  v2 = (*((int (__thiscall **)(ObjectClass *, _BYTE *))this->AbstractClass + 43))(this, v4); /*0x5f6be8*/
  return *(_DWORD *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))this->AbstractClass + 43))(this, v5) /*0x5f6bfe*/
       + *(_DWORD *)(v2 + 4);
}



// ==== 0x005F6C10  IUnknown::IsAboveScreenMargin  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::IsAboveScreenMargin(IUnknown *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 456))(this); /*0x5f6c12*/
  LOBYTE(result) = result > -20; /*0x5f6c20*/
  return result; /*0x5f6c22*/
}



// ==== 0x005F6C30  IUnknown::IsPlayerOwnedAndCheck  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::IsPlayerOwnedAndCheck(IUnknown *this)
{
  int result; // eax

  if ( !(*(unsigned __int8 (__thiscall **)(IUnknown *, Object *))(this->field_0 + 200))(this, dword_A83D4C) /*0x5f6c56*/
    || (result = (*(int (__thiscall **)(IUnknown *, int))(this->field_0 + 208))(this, 1)) != 0 )
  {
    result = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 136))(this); /*0x5f6c60*/
    LOBYTE(result) = *(_BYTE *)(result + 560); /*0x5f6c66*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x5f6c58*/
  }
  return result; /*0x5f6c5a*/
}



// ==== 0x005F6C70  ObjectClass::COMStub_79  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_79(ObjectClass *this)
{
  return (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 78))(this);
}



// ==== 0x005F6C80  IUnknown::GetCoords_Alt  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCoords_Alt(IUnknown *this)
{
  _DWORD *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+14h] [ebp+4h]

  v1 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(this->field_0 + 72))(this, v3); /*0x5f6c8e*/
  *v4 = *v1; /*0x5f6c98*/
  v4[1] = v1[1]; /*0x5f6c9d*/
  v4[2] = v1[2]; /*0x5f6ca4*/
  return (int)v4; /*0x5f6ca0*/
}



// ==== 0x005F6CB0  ObjectClass::CheckFlagD0  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::CheckFlagD0(ObjectClass *this, int a2)
{
  int result; // eax

  result = a2; /*0x5f6cb0*/
  this->customSound = a2; /*0x5f6cb7*/
  if ( a2 == -1 ) /*0x5f6cba*/
    return AudioFile::Stop((AudioFile *)this->customSound_controller); /*0x5f6cbf*/
  return result; /*0x5f6cc4*/
}



// ==== 0x005F6CD0  ObjectClass::IsCrushable  this=ObjectClass  sig=csp ====
bool __thiscall ObjectClass::IsCrushable(TechnoClass *this, _DWORD **a2)
{
  if ( a2 /*0x5f6d2e*/
    && *(_BYTE *)(((int (__thiscall *)(_DWORD **))(*a2)[33])(a2) + 3369)
    && this
    && (this->abstractFlags & 1) != 0
    && !*(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3370)
    && (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) != 6
    && !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)a2[135], (int)this)
    && !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 352))(this) )
  {
    return 1; /*0x5f6d39*/
  }
  return *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 136))(this) + 557) /*0x5f6d7b*/
      && this
      && (this->abstractFlags & 1) != 0
      && !this->isUncrushable[0]
      && !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)a2[135], (int)this)
      && !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 352))(this);
}



// ==== 0x005F6DA0  ObjectClass::ResetPointerIfMatch  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::ResetPointerIfMatch(ObjectClass *this)
{
  int result; // eax
  AnimClass *v2; // [esp+4h] [ebp+4h]

  result = (int)v2; /*0x5f6da0*/
  if ( v2 == this->parachute ) /*0x5f6dac*/
    this->parachute = 0; /*0x5f6dae*/
  return result; /*0x5f6db8*/
}



// ==== 0x005F6DC0  ObjectClass::CreateInstance  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::CreateInstance(ObjectClass *this)
{
  char v3; // [esp+8h] [ebp+4h]

  ObjectClass::Dtor(this); /*0x5f6dc3*/
  if ( (v3 & 1) != 0 ) /*0x5f6dcd*/
    __3_YAXPAX_Z(this); /*0x5f6dd0*/
  return (int)this; /*0x5f6dda*/
}



// ==== 0x005F6DE0  sub_5F6DE0  this=-  sig=ida-proto ====
void sub_5F6DE0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5f6dec*/
  dbl_AC13F0 = Math::Sqrt(v0 + v0); /*0x5f6dfe*/
}



// ==== 0x005F6E10  sub_5F6E10  this=-  sig=ida-proto ====
void sub_5F6E10()
{
  dbl_AC1468 = dbl_AC13F0 / 60.0; /*0x5f6e1c*/
}



// ==== 0x005F6E30  sub_5F6E30  this=-  sig=ida-proto ====
void sub_5F6E30()
{
  dbl_AC1448 = 1.0 / dbl_AC1468; /*0x5f6e3c*/
}



// ==== 0x005F6E50  sub_5F6E50  this=-  sig=ida-proto ====
void sub_5F6E50()
{
  dbl_AC1440 = 0.0174532925199433 * 45.0; /*0x5f6e5c*/
}



// ==== 0x005F6E70  sub_5F6E70  this=-  sig=ida-proto ====
void sub_5F6E70()
{
  dbl_AC13F8 = 0.0174532925199433 * 60.0; /*0x5f6e7c*/
}



// ==== 0x005F6E90  sub_5F6E90  this=-  sig=ida-proto ====
void sub_5F6E90()
{
  dbl_AC13D0 = 0.0174532925199433 * 90.0; /*0x5f6e9c*/
}



// ==== 0x005F6EB0  sub_5F6EB0  this=-  sig=ida-proto ====
__int64 sub_5F6EB0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC13D0 - dbl_AC13F8); /*0x5f6ec2*/
  result = Math::RoundToInt(v0 * dbl_AC13F0 * 0.5); /*0x5f6ed6*/
  dword_AC1474 = result; /*0x5f6edb*/
  return result; /*0x5f6ee0*/
}



// ==== 0x005F6EF0  sub_5F6EF0  this=-  sig=ida-proto ====
void sub_5F6EF0()
{
  dbl_AC1400 = Math::ArcTan((double)dword_AC1474 * 0.00390625); /*0x5f6f07*/
}



// ==== 0x005F6F20  sub_5F6F20  this=-  sig=ida-proto ====
void sub_5F6F20()
{
  dbl_AC1430 = Math::ArcTan((double)(2 * dword_AC1474) / dbl_AC13F0); /*0x5f6f42*/
}



// ==== 0x005F6F50  sub_5F6F50  this=-  sig=ida-proto ====
__int64 sub_5F6F50()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1474) + 0.5); /*0x5f6f6b*/
  dword_AC1460 = result; /*0x5f6f70*/
  return result; /*0x5f6f76*/
}



// ==== 0x005F6F80  sub_5F6F80  this=-  sig=ida-proto ====
int sub_5F6F80()
{
  word_AC13E8 = 0; /*0x5f6f82*/
  word_AC13EA = 0; /*0x5f6f88*/
  return 0; /*0x5f6f8e*/
}



// ==== 0x005F6F90  sub_5F6F90  this=-  sig=ida-proto ====
int sub_5F6F90()
{
  dword_AC1408 = 0; /*0x5f6f92*/
  dword_AC140C = 0; /*0x5f6f97*/
  dword_AC1410 = 0; /*0x5f6f9c*/
  return 0; /*0x5f6fa1*/
}



// ==== 0x005F6FB0  sub_5F6FB0  this=-  sig=ida-proto ====
int sub_5F6FB0()
{
  dword_AC1458 = 0; /*0x5f6fb5*/
  dword_AC1450 = 128; /*0x5f6fbf*/
  dword_AC1454 = 128; /*0x5f6fc4*/
  return 128; /*0x5f6fc9*/
}



// ==== 0x005F6FD0  sub_5F6FD0  this=-  sig=ida-proto ====
int sub_5F6FD0()
{
  dword_AC13D8 = 0; /*0x5f6fd2*/
  dword_AC13DC = 0; /*0x5f6fd7*/
  dword_AC13E0 = 0; /*0x5f6fdc*/
  dword_AC13E4 = 0; /*0x5f6fe1*/
  return 0; /*0x5f6fe6*/
}



// ==== 0x005F6FF0  sub_5F6FF0  this=-  sig=ida-proto ====
int sub_5F6FF0()
{
  dword_AC141C = 0; /*0x5f6ff7*/
  dword_AC1420 = 0; /*0x5f6ffc*/
  byte_AC1424 = 1; /*0x5f7001*/
  byte_AC1425 = 0; /*0x5f7008*/
  dword_AC1418 = (int)&DynamicVectorClass<ObjectTypeClass *>::`vftable'; /*0x5f700d*/
  dword_AC142C = 10; /*0x5f7017*/
  dword_AC1428 = 0; /*0x5f7021*/
  return atexit(sub_5F7030); /*0x5f702c*/
}



// ==== 0x005F7030  sub_5F7030  this=-  sig=ida-proto ====
void __cdecl sub_5F7030()
{
  if ( (byte_AC1470 & 1) == 0 ) /*0x5f703a*/
  {
    dword_AC1418 = (int)&VectorClass<ObjectTypeClass *>::`vftable'; /*0x5f703e*/
    byte_AC1470 |= 1u; /*0x5f7051*/
    if ( dword_AC141C ) /*0x5f7057*/
    {
      if ( byte_AC1425 ) /*0x5f7061*/
      {
        __3_YAXPAX_Z(dword_AC141C); /*0x5f7064*/
        dword_AC141C = 0; /*0x5f706c*/
      }
    }
    byte_AC1425 = 0; /*0x5f7076*/
    dword_AC1420 = 0; /*0x5f707d*/
  }
}



// ==== 0x005F7090  ObjectTypeClass::ConstructFull  this=AbstractTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::ConstructFull(int *this, char *Source)
{
  int *v3; // eax
  int v4; // ecx
  int *v5; // eax
  int v6; // ecx
  int v7; // eax
  char Destination[24]; // [esp+8h] [ebp-1Ch] BYREF
  char v10; // [esp+20h] [ebp-4h]

  AbstractTypeClass::Constructor(this, Source); /*0x5f709c*/
  v3 = this + 50; /*0x5f70a3*/
  *((_BYTE *)this + 152) = 0; /*0x5f70a9*/
  *((_BYTE *)this + 153) = 0; /*0x5f70af*/
  *((_BYTE *)this + 154) = 0; /*0x5f70b5*/
  *(this + 39) = 0; /*0x5f70bb*/
  this->u32_28 = 0; /*0x5f70c1*/
  *(this + 41) = 0; /*0x5f70c7*/
  *((_BYTE *)this + 168) = 0; /*0x5f70cd*/
  this->q02B = 0; /*0x5f70d3*/
  this->q02C = 0; /*0x5f70d9*/
  *(this + 45) = 0; /*0x5f70df*/
  *(this + 46) = 0; /*0x5f70e5*/
  *(this + 47) = 0; /*0x5f70eb*/
  this->q030 = 0; /*0x5f70f1*/
  this->q031 = 0; /*0x5f70f7*/
  v4 = 18; /*0x5f70fd*/
  do /*0x5f710b*/
  {
    *v3 = 0; /*0x5f7102*/
    v3[1] = 0; /*0x5f7104*/
    v3 += 2; /*0x5f7107*/
    --v4; /*0x5f710a*/
  }
  while ( v4 ); /*0x5f710b*/
  v5 = this + 86; /*0x5f710d*/
  v6 = 18; /*0x5f7113*/
  do /*0x5f7121*/
  {
    *v5 = 0; /*0x5f7118*/
    v5[1] = 0; /*0x5f711a*/
    v5 += 2; /*0x5f711d*/
    --v6; /*0x5f7120*/
  }
  while ( v6 ); /*0x5f7121*/
  *((_BYTE *)this + 488) = 0; /*0x5f712e*/
  *(this + 123) = 0; /*0x5f7134*/
  this->q07C = -1; /*0x5f713a*/
  *(this + 125) = -1; /*0x5f7140*/
  *((_BYTE *)this + 504) = 0; /*0x5f7146*/
  *((_BYTE *)this + 529) = 0; /*0x5f7148*/
  *((_BYTE *)this + 530) = 0; /*0x5f714e*/
  *((_BYTE *)this + 531) = 0; /*0x5f7156*/
  *((_BYTE *)this + 558) = 1; /*0x5f715c*/
  this->q08C = 1; /*0x5f7162*/
  *((_BYTE *)this + 561) = 1; /*0x5f7168*/
  *((_BYTE *)this + 565) = 1; /*0x5f716e*/
  *((_BYTE *)this + 556) = 0; /*0x5f7176*/
  *((_BYTE *)this + 557) = 0; /*0x5f717c*/
  *((_BYTE *)this + 559) = 0; /*0x5f7182*/
  *((_BYTE *)this + 562) = 0; /*0x5f7188*/
  *((_BYTE *)this + 563) = 0; /*0x5f718e*/
  *((_BYTE *)this + 564) = 0; /*0x5f7194*/
  *((_BYTE *)this + 566) = 0; /*0x5f719a*/
  *((_BYTE *)this + 567) = 0; /*0x5f71a0*/
  *((_BYTE *)this + 568) = 0; /*0x5f71a6*/
  *((_BYTE *)this + 569) = 0; /*0x5f71ac*/
  *((_BYTE *)this + 570) = 0; /*0x5f71b2*/
  *((_BYTE *)this + 571) = 0x80; /*0x5f71b8*/
  *((_BYTE *)this + 572) = 0x80; /*0x5f71be*/
  *((_BYTE *)this + 573) = 0x80; /*0x5f71c4*/
  this->q090 = 16; /*0x5f71ca*/
  *(this + 145) = 0; /*0x5f71d4*/
  *(this + 146) = 0; /*0x5f71da*/
  *(this + 147) = 0; /*0x5f71e0*/
  this->q094 = 0; /*0x5f71e6*/
  this->tail_95 = 0; /*0x5f71ec*/
  *(this + 150) = 0; /*0x5f71f2*/
  *(this + 151) = 0; /*0x5f71f8*/
  *(this + 152) = 0; /*0x5f71fe*/
  *((_BYTE *)this + 612) = 0; /*0x5f7204*/
  *(this + 154) = 0; /*0x5f720a*/
  *(this + 155) = 0; /*0x5f7213*/
  *(this + 156) = 0; /*0x5f7219*/
  *(this + 157) = 0; /*0x5f721f*/
  *((_BYTE *)this + 632) = 0; /*0x5f7225*/
  *(this + 159) = 0; /*0x5f722b*/
  this->u32_28 = 0; /*0x5f7231*/
  *(this + 161) = 0; /*0x5f7237*/
  *(this + 162) = 0; /*0x5f723d*/
  *((_BYTE *)this + 652) = 0; /*0x5f7243*/
  *(this + 164) = 0; /*0x5f7249*/
  *this = (int)&ObjectTypeClass::`vftable'; /*0x5f7251*/
  this->vtable2 = (int)&ObjectTypeClass::`vftable'; /*0x5f7258*/
  this->vtable3 = (int)&ObjectTypeClass::`vftable'; /*0x5f725f*/
  this->vtable4 = (int)&ObjectTypeClass::`vftable'; /*0x5f7266*/
  if ( this + 9 != this + 126 ) /*0x5f726d*/
    qmemcpy(this + 126, this + 9, 0x19u); /*0x5f7274*/
  if ( &g_INI_DefaultBuffer ) /*0x5f727e*/
  {
    strncpy(Destination, &g_INI_DefaultBuffer, 0x18u); /*0x5f7292*/
    v10 = 0; /*0x5f729a*/
  }
  else
  {
    Destination[0] = 0; /*0x5f7280*/
  }
  if ( Destination != (char *)this + 531 ) /*0x5f72aa*/
  {
    qmemcpy((char *)this + 531, Destination, 0x18u); /*0x5f72b5*/
    *((_BYTE *)this + 555) = v10; /*0x5f72b7*/
  }
  if ( dword_AC1428 < dword_AC1420 /*0x5f72ee*/
    || (byte_AC1425 || !dword_AC1420)
    && dword_AC142C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_AC1418 + 8))(
         &dword_AC1418,
         dword_AC142C + dword_AC1420,
         0) )
  {
    v7 = dword_AC1428++; /*0x5f72fb*/
    *((_DWORD *)dword_AC141C + v7) = this; /*0x5f730a*/
  }
  return (int)this; /*0x5f730f*/
}



// ==== 0x005F7320  ObjectTypeClass::Construct  this=ObjectTypeClass  sig=csp ====
_DWORD *__thiscall ObjectTypeClass::Construct(ObjectTypeClass *this, int a2)
{
  int *v3; // eax
  int v4; // edx
  char *v5; // eax
  int v6; // edx

  AbstractTypeClass::Init((int)this, a2); /*0x5f7328*/
  v3 = &this->ChargerTurrets[3]; /*0x5f732f*/
  this->Image = 0; /*0x5f7335*/
  v4 = 18; /*0x5f733b*/
  do /*0x5f7349*/
  {
    *v3 = 0; /*0x5f7340*/
    v3[1] = 0; /*0x5f7342*/
    v3 += 2; /*0x5f7345*/
    --v4; /*0x5f7348*/
  }
  while ( v4 ); /*0x5f7349*/
  v5 = &this->__pad_14D[11]; /*0x5f734b*/
  v6 = 18; /*0x5f7351*/
  do /*0x5f735f*/
  {
    *(_DWORD *)v5 = 0; /*0x5f7356*/
    *((_DWORD *)v5 + 1) = 0; /*0x5f7358*/
    v5 += 8; /*0x5f735b*/
    --v6; /*0x5f735e*/
  }
  while ( v6 ); /*0x5f735f*/
  this->VoxelCaches[0] = 0; /*0x5f7361*/
  this->VoxelCaches[1] = 0; /*0x5f7367*/
  this->VoxelCaches[2] = 0; /*0x5f736d*/
  LOBYTE(this->VoxelCaches[3]) = 0; /*0x5f7373*/
  this->VoxelCaches[4] = 0; /*0x5f7379*/
  this->VoxelCaches[5] = 0; /*0x5f737f*/
  this->VoxelCaches[6] = 0; /*0x5f7385*/
  this->VoxelCaches[7] = 0; /*0x5f738b*/
  LOBYTE(this->VoxelCaches[8]) = 0; /*0x5f7391*/
  this->VoxelCaches[9] = 0; /*0x5f7397*/
  this->VoxelCaches[10] = 0; /*0x5f739d*/
  this->VoxelCaches[11] = 0; /*0x5f73a3*/
  this->VoxelCaches[12] = 0; /*0x5f73a9*/
  LOBYTE(this->VoxelCaches[13]) = 0; /*0x5f73af*/
  this->VoxelCaches[14] = 0; /*0x5f73b5*/
  this->VoxelCaches[15] = 0; /*0x5f73bb*/
  this->VoxelCaches[16] = 0; /*0x5f73c1*/
  this->VoxelCaches[17] = 0; /*0x5f73c7*/
  LOBYTE(this->VoxelCaches[18]) = 0; /*0x5f73cd*/
  this->VoxelCaches[19] = 0; /*0x5f73d3*/
  this->AbstractTypeClass = &ObjectTypeClass::`vftable'; /*0x5f73d9*/
  this->? = &ObjectTypeClass::`vftable'; /*0x5f73df*/
  this->? = &ObjectTypeClass::`vftable'; /*0x5f73e6*/
  this->? = &ObjectTypeClass::`vftable'; /*0x5f73ed*/
  return &this->AbstractTypeClass; /*0x5f73f6*/
}



// ==== 0x005F7400  ObjectTypeClass::Destruct  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::Destruct(int this)
{
  int v2; // eax
  ObjectTypeClass *v3; // edi
  int v4; // ebx
  ObjectTypeClass *v5; // edi
  int v6; // ebx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)this = &ObjectTypeClass::`vftable'; /*0x5f740b*/
  *(_DWORD *)(this + 4) = &ObjectTypeClass::`vftable'; /*0x5f7411*/
  *(_DWORD *)(this + 8) = &ObjectTypeClass::`vftable'; /*0x5f7418*/
  *(_DWORD *)(this + 12) = &ObjectTypeClass::`vftable'; /*0x5f741f*/
  v8 = this; /*0x5f7431*/
  v2 = (*(int (__thiscall **)(int *, int *))(dword_AC1418 + 16))(&dword_AC1418, &v8); /*0x5f7435*/
  if ( v2 != -1 && v2 < dword_AC1428 && v2 < --dword_AC1428 ) /*0x5f7450*/
  {
    do /*0x5f7468*/
    {
      ++v2; /*0x5f7458*/
      *((_DWORD *)dword_AC141C + v2 - 1) = *((_DWORD *)dword_AC141C + v2); /*0x5f745c*/
    }
    while ( v2 < dword_AC1428 ); /*0x5f7468*/
  }
  if ( *(_BYTE *)(this + 168) && *(_DWORD *)(this + 164) ) /*0x5f7476*/
  {
    __3_YAXPAX_Z(*(void **)(this + 164)); /*0x5f7481*/
    *(_DWORD *)(this + 164) = 0; /*0x5f7489*/
    *(_BYTE *)(this + 168) = 0; /*0x5f748f*/
  }
  ObjectTypeClass::CleanupWeapons((char *)this); /*0x5f7497*/
  __3_YAXPAX_Z(*(void **)(this + 640)); /*0x5f74a3*/
  *(_DWORD *)(this + 640) = 0; /*0x5f74a8*/
  *(_DWORD *)(this + 644) = 0; /*0x5f74ae*/
  *(_DWORD *)(this + 648) = 0; /*0x5f74b4*/
  *(_BYTE *)(this + 652) = 0; /*0x5f74ba*/
  *(_DWORD *)(this + 656) = 0; /*0x5f74c0*/
  __3_YAXPAX_Z(*(void **)(this + 620)); /*0x5f74cd*/
  *(_DWORD *)(this + 620) = 0; /*0x5f74d2*/
  *(_DWORD *)(this + 624) = 0; /*0x5f74d8*/
  *(_DWORD *)(this + 628) = 0; /*0x5f74de*/
  *(_BYTE *)(this + 632) = 0; /*0x5f74e4*/
  *(_DWORD *)(this + 636) = 0; /*0x5f74ea*/
  __3_YAXPAX_Z(*(void **)(this + 600)); /*0x5f74f7*/
  *(_DWORD *)(this + 600) = 0; /*0x5f74fc*/
  *(_DWORD *)(this + 604) = 0; /*0x5f7502*/
  *(_DWORD *)(this + 608) = 0; /*0x5f7508*/
  *(_BYTE *)(this + 612) = 0; /*0x5f750e*/
  *(_DWORD *)(this + 616) = 0; /*0x5f7514*/
  __3_YAXPAX_Z(*(void **)(this + 580)); /*0x5f7521*/
  *(_DWORD *)(this + 580) = 0; /*0x5f7526*/
  *(_DWORD *)(this + 584) = 0; /*0x5f752c*/
  *(_DWORD *)(this + 588) = 0; /*0x5f7532*/
  *(_BYTE *)(this + 592) = 0; /*0x5f7538*/
  *(_DWORD *)(this + 596) = 0; /*0x5f753e*/
  v3 = (ObjectTypeClass *)(this + 488); /*0x5f7547*/
  v4 = 18; /*0x5f754d*/
  do /*0x5f755d*/
  {
    v3 = (ObjectTypeClass *)((char *)v3 - 8); /*0x5f7552*/
    ObjectTypeClass::ReleaseWaveAndString(v3); /*0x5f7557*/
    --v4; /*0x5f755c*/
  }
  while ( v4 ); /*0x5f755d*/
  v5 = (ObjectTypeClass *)(this + 344); /*0x5f755f*/
  v6 = 18; /*0x5f7565*/
  do /*0x5f7575*/
  {
    v5 = (ObjectTypeClass *)((char *)v5 - 8); /*0x5f756a*/
    ObjectTypeClass::ReleaseWaveAndString(v5); /*0x5f756f*/
    --v6; /*0x5f7574*/
  }
  while ( v6 ); /*0x5f7575*/
  ObjectTypeClass::ReleaseWaveAndString((ObjectTypeClass *)(this + 192)); /*0x5f757d*/
  ObjectTypeClass::ReleaseWaveAndString((ObjectTypeClass *)(this + 184)); /*0x5f7588*/
  ObjectTypeClass::ReleaseWaveAndString((ObjectTypeClass *)(this + 176)); /*0x5f7593*/
  return AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x5f759f*/
}



// ==== 0x005F75B0  ObjectTypeClass::GetData  this=ObjectTypeClass  sig=csp ====
int AbstractTypeClass::GetData(ObjectTypeClass *this)
{
  return 0; /*0x5f75b2*/
}



// ==== 0x005F75C0  ObjectTypeClass::InitTripleTen  this=ObjectTypeClass  sig=csp ====
_DWORD *__stdcall ObjectTypeClass::InitTripleTen(ObjectTypeClass *this)
{
  this->AbstractTypeClass = (void *)10; /*0x5f75cd*/
  this->? = (void *)10; /*0x5f75d3*/
  this->? = (void *)10; /*0x5f75d6*/
  return &this->AbstractTypeClass; /*0x5f75d9*/
}



// ==== 0x005F75E0  ObjectTypeClass::InitTriple256  this=ObjectTypeClass  sig=csp ====
_DWORD *__stdcall Struct::InitTriple256(ObjectTypeClass *this)
{
  void *v1; // esi

  v1 = (void *)(2 * dword_AC1474); /*0x5f75ec*/
  this->AbstractTypeClass = (void *)256; /*0x5f75f7*/
  this->? = (void *)256; /*0x5f75f9*/
  this->? = v1; /*0x5f75fc*/
  return &this->AbstractTypeClass; /*0x5f75ff*/
}



// ==== 0x005F7610  ObjectTypeClass::GetType  this=ObjectTypeClass  sig=csp ====
int __stdcall AbstractTypeClass::GetType(ObjectTypeClass *this)
{
  return 0; /*0x5f7612*/
}



// ==== 0x005F7620  ObjectTypeClass::SetType  this=ObjectTypeClass  sig=csp ====
int AbstractTypeClass::SetType(ObjectTypeClass *this)
{
  return 0; /*0x5f7622*/
}



// ==== 0x005F7630  ObjectTypeClass::Validate  this=ObjectTypeClass  sig=csp ====
int AbstractTypeClass::Validate(ObjectTypeClass *this)
{
  return 0; /*0x5f7632*/
}



// ==== 0x005F7640  ObjectTypeClass::RegisterSingleton  this=ObjectTypeClass  sig=csp ====
int *__stdcall GlobalInit::RegisterSingleton(ObjectTypeClass *this)
{
  if ( (byte_AC145C & 1) == 0 ) /*0x5f764b*/
  {
    byte_AC145C |= 1u; /*0x5f7666*/
    dword_AC1438 = 0; /*0x5f766c*/
    dword_AC143C = 2147450879; /*0x5f7684*/
    atexit(nullsub_207); /*0x5f768a*/
  }
  return &dword_AC1438; /*0x5f7698*/
}



// ==== 0x005F76A0  nullsub_207  this=-  sig=ida-proto ====
void __cdecl nullsub_207()
{
  ; /*0x5f76a0*/
}



// ==== 0x005F76B0  FileSystem::InitPipShapes  this=FileSystem  sig=ida-proto ====
void FileSystem_InitPipShapes()
{
  int v0[9]; // [esp+0h] [ebp-24h] BYREF

  if ( !FileSystem_PIPBRD_SHP ) /*0x5f76ba*/
  {
    RawFileClass::Construct(v0, (int)aPipbrdShp); /*0x5f76c5*/
    FileSystem_PIPBRD_SHP = (int)CCFileClass::ReadEntireFile(v0); /*0x5f76da*/
    byte_AC1488 = FileSystem_PIPBRD_SHP != 0; /*0x5f76df*/
    if ( !FileSystem_PIPBRD_SHP ) /*0x5f76e5*/
      FileSystem_PIPBRD_SHP = SearchMIXFile(aPipbrdShp, 0); /*0x5f76f3*/
    RawFileClass::Dtor(v0); /*0x5f76fc*/
  }
  if ( !FileSystem_PIPS_SHP ) /*0x5f7708*/
  {
    RawFileClass::Construct(v0, (int)aPipsShp); /*0x5f7713*/
    FileSystem_PIPS_SHP = (int)CCFileClass::ReadEntireFile(v0); /*0x5f7728*/
    byte_AC1489 = FileSystem_PIPS_SHP != 0; /*0x5f772d*/
    if ( !FileSystem_PIPS_SHP ) /*0x5f7733*/
      FileSystem_PIPS_SHP = SearchMIXFile(aPipsShp, 0); /*0x5f7741*/
    RawFileClass::Dtor(v0); /*0x5f774a*/
  }
  if ( !FileSystem_PIPS2_SHP ) /*0x5f7756*/
  {
    RawFileClass::Construct(v0, (int)aPips2Shp); /*0x5f7761*/
    FileSystem_PIPS2_SHP = (int)CCFileClass::ReadEntireFile(v0); /*0x5f7776*/
    byte_AC148A = FileSystem_PIPS2_SHP != 0; /*0x5f777b*/
    if ( !FileSystem_PIPS2_SHP ) /*0x5f7781*/
      FileSystem_PIPS2_SHP = SearchMIXFile(aPips2Shp, 0); /*0x5f778f*/
    RawFileClass::Dtor(v0); /*0x5f7798*/
  }
  if ( !FileSystem_TALKBUBL_SHP ) /*0x5f77a4*/
  {
    RawFileClass::Construct(v0, (int)aTalkbublShp); /*0x5f77af*/
    FileSystem_TALKBUBL_SHP = (int)CCFileClass::ReadEntireFile(v0); /*0x5f77c4*/
    byte_AC148B = FileSystem_TALKBUBL_SHP != 0; /*0x5f77c9*/
    if ( !FileSystem_TALKBUBL_SHP ) /*0x5f77cf*/
      FileSystem_TALKBUBL_SHP = SearchMIXFile(aTalkbublShp, 0); /*0x5f77dd*/
    RawFileClass::Dtor(v0); /*0x5f77e6*/
  }
}



// ==== 0x005F77F0  ObjectTypeClass::UnloadPipsSHP  this=ObjectTypeClass  sig=csp ====
void ObjectTypeClass::UnloadPipsSHP(ObjectTypeClass *this)
{
  int v1; // eax
  void *v2; // ebp
  int v3; // edx
  int v4; // eax
  FileTreeNode *v5; // esi
  int v6; // edi
  int v7; // eax
  void *v8; // ebp
  int v9; // edx
  int v10; // eax
  FileTreeNode *v11; // esi
  int v12; // edi
  int v13; // eax
  void *v14; // ebp
  int v15; // edx
  int v16; // eax
  FileTreeNode *v17; // esi
  int v18; // edi
  int v19; // eax
  void *v20; // ebp
  int v21; // edx
  int v22; // eax
  FileTreeNode *v23; // esi
  int v24; // edi

  if ( byte_AC1488 ) /*0x5f77fd*/
  {
    if ( FileSystem_PIPBRD_SHP ) /*0x5f7807*/
    {
      v1 = *(_DWORD *)(FileSystem_PIPBRD_SHP - 4); /*0x5f7809*/
      v2 = (void *)(FileSystem_PIPBRD_SHP - 4); /*0x5f780c*/
      v3 = 9 * v1; /*0x5f780f*/
      v4 = v1 - 1; /*0x5f7812*/
      v5 = (FileTreeNode *)(FileSystem_PIPBRD_SHP + 4 * v3); /*0x5f7813*/
      if ( v4 >= 0 ) /*0x5f7816*/
      {
        v6 = v4 + 1; /*0x5f7818*/
        do /*0x5f7826*/
        {
          v5 -= 9; /*0x5f781b*/
          FileTreeNode::Destroy(v5); /*0x5f7820*/
          --v6; /*0x5f7825*/
        }
        while ( v6 ); /*0x5f7826*/
      }
      __3_YAXPAX_Z(v2); /*0x5f7829*/
    }
    byte_AC1488 = 0; /*0x5f7831*/
  }
  if ( byte_AC1489 ) /*0x5f783d*/
  {
    if ( FileSystem_PIPS_SHP ) /*0x5f7847*/
    {
      v7 = *(_DWORD *)(FileSystem_PIPS_SHP - 4); /*0x5f7849*/
      v8 = (void *)(FileSystem_PIPS_SHP - 4); /*0x5f784c*/
      v9 = 9 * v7; /*0x5f784f*/
      v10 = v7 - 1; /*0x5f7852*/
      v11 = (FileTreeNode *)(FileSystem_PIPS_SHP + 4 * v9); /*0x5f7853*/
      if ( v10 >= 0 ) /*0x5f7856*/
      {
        v12 = v10 + 1; /*0x5f7858*/
        do /*0x5f7866*/
        {
          v11 -= 9; /*0x5f785b*/
          FileTreeNode::Destroy(v11); /*0x5f7860*/
          --v12; /*0x5f7865*/
        }
        while ( v12 ); /*0x5f7866*/
      }
      __3_YAXPAX_Z(v8); /*0x5f7869*/
    }
    byte_AC1489 = 0; /*0x5f7871*/
  }
  if ( byte_AC148A ) /*0x5f787d*/
  {
    if ( FileSystem_PIPS2_SHP ) /*0x5f7887*/
    {
      v13 = *(_DWORD *)(FileSystem_PIPS2_SHP - 4); /*0x5f7889*/
      v14 = (void *)(FileSystem_PIPS2_SHP - 4); /*0x5f788c*/
      v15 = 9 * v13; /*0x5f788f*/
      v16 = v13 - 1; /*0x5f7892*/
      v17 = (FileTreeNode *)(FileSystem_PIPS2_SHP + 4 * v15); /*0x5f7893*/
      if ( v16 >= 0 ) /*0x5f7896*/
      {
        v18 = v16 + 1; /*0x5f7898*/
        do /*0x5f78a6*/
        {
          v17 -= 9; /*0x5f789b*/
          FileTreeNode::Destroy(v17); /*0x5f78a0*/
          --v18; /*0x5f78a5*/
        }
        while ( v18 ); /*0x5f78a6*/
      }
      __3_YAXPAX_Z(v14); /*0x5f78a9*/
    }
    byte_AC148A = 0; /*0x5f78b1*/
  }
  if ( byte_AC148B ) /*0x5f78bd*/
  {
    if ( FileSystem_TALKBUBL_SHP ) /*0x5f78c7*/
    {
      v19 = *(_DWORD *)(FileSystem_TALKBUBL_SHP - 4); /*0x5f78c9*/
      v20 = (void *)(FileSystem_TALKBUBL_SHP - 4); /*0x5f78cc*/
      v21 = 9 * v19; /*0x5f78cf*/
      v22 = v19 - 1; /*0x5f78d2*/
      v23 = (FileTreeNode *)(FileSystem_TALKBUBL_SHP + 4 * v21); /*0x5f78d3*/
      if ( v22 >= 0 ) /*0x5f78d6*/
      {
        v24 = v22 + 1; /*0x5f78d8*/
        do /*0x5f78e6*/
        {
          v23 -= 9; /*0x5f78db*/
          FileTreeNode::Destroy(v23); /*0x5f78e0*/
          --v24; /*0x5f78e5*/
        }
        while ( v24 ); /*0x5f78e6*/
      }
      __3_YAXPAX_Z(v20); /*0x5f78e9*/
    }
    byte_AC148B = 0; /*0x5f78f1*/
  }
}



// ==== 0x005F7900  ObjectTypeClass::FindMatchingUnit  this=ObjectTypeClass  sig=csp ====
int __thiscall TechnoClass::FindMatchingUnit(TechnoTypeClass *this, char a2, char a3, char a4, int a5)
{
  int v6; // ebx
  int v7; // ebp
  int v8; // esi
  int v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h]

  v6 = 0; /*0x5f7909*/
  v10 = (*(int (__thiscall **)(TechnoTypeClass *))(this->vtable0 + 112))(this); /*0x5f7914*/
  v7 = 0; /*0x5f7918*/
  v11 = *(_DWORD *)(a5 + 120); /*0x5f791f*/
  if ( v11 <= 0 ) /*0x5f7923*/
    return 0; /*0x5f7a83*/
  do /*0x5f7a5e*/
  {
    v8 = *(_DWORD *)(*(_DWORD *)(a5 + 108) + 4 * v7); /*0x5f7930*/
    if ( !*(_BYTE *)(v8 + 129) /*0x5f79c1*/
      && *(_DWORD *)(*(_DWORD *)(v8 + 1312) + 3768) == (*(int (__thiscall **)(TechnoTypeClass *))(this->vtable0 + 44))(this)
      && (!a3 || *(_BYTE *)(v8 + 1632))
      && (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 388))(v8) != 19
      && *(_DWORD *)(v8 + 180) != 19
      && (!a4 || HouseClass::CanBuild(*(HouseClass **)(v8 + 540), (int)this, 1, 1) > 0)
      && ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v8 + 1312) + 112))(*(_DWORD *)(v8 + 1312)) & v10) != 0 )
    {
      if ( a2 /*0x5f79e4*/
        || !(unsigned __int8)Team::AllMembersValid((Team *)v8)
        || (*(int (__thiscall **)(TechnoTypeClass *))(this->vtable0 + 44))(this) != 3 )
      {
        if ( (*(int (__thiscall **)(TechnoTypeClass *))(this->vtable0 + 44))(this) == 40 && this->align_CCB[3] ) /*0x5f7a15*/
        {
          if ( !*(_BYTE *)(*(_DWORD *)(v8 + 1312) + 3278) ) /*0x5f7a2d*/
            goto LABEL_26; /*0x5f7a2d*/
          if ( *(_BYTE *)(v8 + 979) ) /*0x5f7a2f*/
            return v8; /*0x5f7a37*/
        }
        else if ( *(_BYTE *)(*(_DWORD *)(v8 + 1312) + 3278) ) /*0x5f7a41*/
        {
          goto LABEL_26; /*0x5f7a49*/
        }
        if ( *(_BYTE *)(v8 + 979) ) /*0x5f7a4b*/
          return v8; /*0x5f7a7d*/
        goto LABEL_25; /*0x5f7a53*/
      }
      if ( (*(int (__thiscall **)(TechnoTypeClass *))(this->vtable0 + 44))(this) == 3 /*0x5f79f4*/
        && RadioClass::HasFreeLink((RadioClass *)v8) )
      {
        if ( *(_BYTE *)(v8 + 979) ) /*0x5f79fd*/
          return v8; /*0x5f7a05*/
LABEL_25:
        v6 = v8; /*0x5f7a55*/
      }
    }
LABEL_26:
    ++v7; /*0x5f7a57*/
  }
  while ( v7 < v11 ); /*0x5f7a5e*/
  if ( !v6 ) /*0x5f7a66*/
    return 0; /*0x5f7a66*/
  return v6; /*0x5f7a68*/
}



// ==== 0x005F7A90  VoxelAnimType::LoadSection  this=ObjectTypeClass  sig=csp ====
char __thiscall VoxelAnimType::LoadSection(VoxelAnimType *this, const char *a2, int a3)
{
  void *v4; // ebp
  File *v5; // eax
  _DWORD *FileVXL; // eax
  void *v7; // ebp
  File *v8; // eax
  _DWORD *FileHVA; // eax
  char v10; // cl
  char v11; // al
  int Info; // eax
  void *v14; // ebp
  void *v15; // ebp
  char v16; // [esp+12h] [ebp-2DEh]
  CCFileClass v17; // [esp+14h] [ebp-2DCh] BYREF
  int v18[3]; // [esp+6Ch] [ebp-284h] BYREF
  int v19; // [esp+78h] [ebp-278h]
  CCFileClass v20; // [esp+80h] [ebp-270h] BYREF
  int v21[3]; // [esp+D8h] [ebp-218h] BYREF
  int v22; // [esp+E4h] [ebp-20Ch]
  char Buffer[256]; // [esp+ECh] [ebp-204h] BYREF
  char Source[260]; // [esp+1ECh] [ebp-104h] BYREF

  if ( a3 ) /*0x5f7aa7*/
    sprintf(Buffer, "%sTUR%d", a2, a3); /*0x5f7ade*/
  else
    sprintf(Buffer, "%sTUR", a2); /*0x5f7abe*/
  _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f7afd*/
  CCFileClass::Construct(&v17, Source); /*0x5f7b11*/
  if ( (unsigned __int8)CCFileClass::Open(&v17, 0) ) /*0x5f7b1b*/
  {
    v4 = (void *)*((_DWORD *)this + 2 * a3 + 50); /*0x5f7b46*/
    if ( v4 ) /*0x5f7b4f*/
    {
      WaveClass::Destroy(*((WaveClass **)this + 2 * a3 + 50)); /*0x5f7b53*/
      __3_YAXPAX_Z(v4); /*0x5f7b59*/
      *((_DWORD *)this + 2 * a3 + 50) = 0; /*0x5f7b61*/
    }
    v16 = 0; /*0x5f7b6a*/
    v5 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f7b6e*/
    if ( v5 ) /*0x5f7b78*/
      FileVXL = File::LoadFileVXL(v5, (int)&v17, 0); /*0x5f7b82*/
    else
      FileVXL = 0; /*0x5f7b89*/
    *((_DWORD *)this + 2 * a3 + 50) = FileVXL; /*0x5f7b8d*/
    if ( FileVXL && !*(_BYTE *)FileVXL ) /*0x5f7b96*/
      v16 = 1; /*0x5f7b9a*/
    if ( a3 ) /*0x5f7ba1*/
      sprintf(Buffer, "%sTUR%d", a2, a3); /*0x5f7bd8*/
    else
      sprintf(Buffer, "%sTUR", a2); /*0x5f7bb8*/
    _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f7bf7*/
    CCFileClass::Construct(&v20, Source); /*0x5f7c0e*/
    v7 = (void *)*((_DWORD *)this + 2 * a3 + 51); /*0x5f7c13*/
    if ( v7 ) /*0x5f7c1c*/
    {
      String::Release(*((String **)this + 2 * a3 + 51)); /*0x5f7c20*/
      __3_YAXPAX_Z(v7); /*0x5f7c26*/
      *((_DWORD *)this + 2 * a3 + 51) = 0; /*0x5f7c2e*/
    }
    v8 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f7c3b*/
    if ( v8 ) /*0x5f7c45*/
      FileHVA = File::LoadFileHVA(v8, (int)&v20); /*0x5f7c51*/
    else
      FileHVA = 0; /*0x5f7c58*/
    *((_DWORD *)this + 2 * a3 + 51) = FileHVA; /*0x5f7c5c*/
    if ( !FileHVA || (v10 = *(_BYTE *)FileHVA, v11 = 1, v10) ) /*0x5f7c6b*/
      v11 = 0; /*0x5f7c6d*/
    if ( v16 && v11 ) /*0x5f7c7d*/
    {
      Info = VoxelSection::GetInfo(*((VoxelSection **)this + 2 * a3 + 50), 0, 0); /*0x5f7c8c*/
      Matrix::Scale(*((Matrix **)this + 2 * a3 + 51), *(float *)(Info + 12)); /*0x5f7c9c*/
      *(_DWORD *)v20.CDFileClass = &CCFileClass::`vftable'; /*0x5f7cad*/
      v22 = 0; /*0x5f7cb4*/
      Vector::Clear((int)v21); /*0x5f7cbb*/
      *(_DWORD *)v20.CDFileClass = &off_7E1668; /*0x5f7ccc*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x5f7cd3*/
      *(_DWORD *)v17.CDFileClass = &CCFileClass::`vftable'; /*0x5f7cdc*/
      v19 = 0; /*0x5f7ce0*/
      Vector::Clear((int)v18); /*0x5f7ce4*/
      *(_DWORD *)v17.CDFileClass = &off_7E1668; /*0x5f7ced*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v17); /*0x5f7cf1*/
      return 1; /*0x5f7d02*/
    }
    v14 = (void *)*((_DWORD *)this + 2 * a3 + 50); /*0x5f7d05*/
    if ( v14 ) /*0x5f7d0e*/
    {
      WaveClass::Destroy(*((WaveClass **)this + 2 * a3 + 50)); /*0x5f7d12*/
      __3_YAXPAX_Z(v14); /*0x5f7d18*/
      *((_DWORD *)this + 2 * a3 + 50) = 0; /*0x5f7d20*/
    }
    v15 = (void *)*((_DWORD *)this + 2 * a3 + 51); /*0x5f7d27*/
    if ( v15 ) /*0x5f7d30*/
    {
      String::Release(*((String **)this + 2 * a3 + 51)); /*0x5f7d34*/
      __3_YAXPAX_Z(v15); /*0x5f7d3a*/
      *((_DWORD *)this + 2 * a3 + 51) = 0; /*0x5f7d42*/
    }
    *(_DWORD *)v20.CDFileClass = &CCFileClass::`vftable'; /*0x5f7d55*/
    v22 = 0; /*0x5f7d5c*/
    Vector::Clear((int)v21); /*0x5f7d63*/
    *(_DWORD *)v20.CDFileClass = &off_7E1668; /*0x5f7d74*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x5f7d7b*/
    *(_DWORD *)v17.CDFileClass = &CCFileClass::`vftable'; /*0x5f7d84*/
    v19 = 0; /*0x5f7d88*/
    Vector::Clear((int)v18); /*0x5f7d8c*/
    *(_DWORD *)v17.CDFileClass = &off_7E1668; /*0x5f7d91*/
  }
  else
  {
    *(_DWORD *)v17.CDFileClass = &CCFileClass::`vftable'; /*0x5f7b28*/
    v19 = 0; /*0x5f7b30*/
    Vector::Clear((int)v18); /*0x5f7b34*/
    *(_DWORD *)v17.CDFileClass = &off_7E1668; /*0x5f7b39*/
  }
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v17); /*0x5f7d99*/
  return 0; /*0x5f7cf6*/
}



// ==== 0x005F7DB0  VoxelAnimType::LoadBarrel  this=ObjectTypeClass  sig=csp ====
char __thiscall VoxelAnimType::LoadBarrel(VoxelAnimType *this, const char *a2, int a3)
{
  File *v5; // eax
  _DWORD *FileVXL; // eax
  char v7; // bl
  File *v8; // eax
  _DWORD *FileHVA; // eax
  int Info; // eax
  void *v11; // ebp
  String *v12; // esi
  char v13; // [esp+13h] [ebp-2DDh]
  CCFileClass v14; // [esp+14h] [ebp-2DCh] BYREF
  int v15[3]; // [esp+6Ch] [ebp-284h] BYREF
  int v16; // [esp+78h] [ebp-278h]
  CCFileClass v17; // [esp+80h] [ebp-270h] BYREF
  int v18[3]; // [esp+D8h] [ebp-218h] BYREF
  int v19; // [esp+E4h] [ebp-20Ch]
  char Buffer[256]; // [esp+ECh] [ebp-204h] BYREF
  char Source[260]; // [esp+1ECh] [ebp-104h] BYREF

  if ( a3 ) /*0x5f7dc7*/
    sprintf(Buffer, "%sBARL%d", a2, a3); /*0x5f7dfe*/
  else
    sprintf(Buffer, "%sBARL", a2); /*0x5f7dde*/
  _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f7e1d*/
  CCFileClass::Construct(&v14, Source); /*0x5f7e31*/
  if ( (unsigned __int8)CCFileClass::Open(&v14, 0) ) /*0x5f7e3b*/
  {
    v13 = 0; /*0x5f7e7b*/
    v5 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f7e80*/
    if ( v5 ) /*0x5f7e8a*/
      FileVXL = File::LoadFileVXL(v5, (int)&v14, 0); /*0x5f7e94*/
    else
      FileVXL = 0; /*0x5f7e9b*/
    *((_DWORD *)this + 2 * a3 + 86) = FileVXL; /*0x5f7e9f*/
    if ( FileVXL && !*(_BYTE *)FileVXL ) /*0x5f7ea8*/
      v13 = 1; /*0x5f7ead*/
    if ( a3 ) /*0x5f7eb4*/
      sprintf(Buffer, "%sBARL%d", a2, a3); /*0x5f7edd*/
    else
      sprintf(Buffer, "%sBARL", a2); /*0x5f7ec4*/
    _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f7efc*/
    CCFileClass::Construct(&v17, Source); /*0x5f7f13*/
    v7 = 0; /*0x5f7f1a*/
    v8 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f7f1c*/
    if ( v8 ) /*0x5f7f26*/
      FileHVA = File::LoadFileHVA(v8, (int)&v17); /*0x5f7f32*/
    else
      FileHVA = 0; /*0x5f7f39*/
    *((_DWORD *)this + 2 * a3 + 87) = FileHVA; /*0x5f7f3d*/
    if ( FileHVA && !*(_BYTE *)FileHVA ) /*0x5f7f46*/
      v7 = 1; /*0x5f7f4b*/
    if ( v13 && v7 ) /*0x5f7f5b*/
    {
      Info = VoxelSection::GetInfo(*((VoxelSection **)this + 2 * a3 + 86), 0, 0); /*0x5f7f6a*/
      Matrix::Scale(*((Matrix **)this + 2 * a3 + 87), *(float *)(Info + 12)); /*0x5f7f7a*/
      *(_DWORD *)v17.CDFileClass = &CCFileClass::`vftable'; /*0x5f7f8b*/
      v19 = 0; /*0x5f7f92*/
      Vector::Clear((int)v18); /*0x5f7f99*/
      *(_DWORD *)v17.CDFileClass = &off_7E1668; /*0x5f7faa*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v17); /*0x5f7fb1*/
      *(_DWORD *)v14.CDFileClass = &CCFileClass::`vftable'; /*0x5f7fba*/
      v16 = 0; /*0x5f7fbe*/
      Vector::Clear((int)v15); /*0x5f7fc2*/
      *(_DWORD *)v14.CDFileClass = &off_7E1668; /*0x5f7fcb*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v14); /*0x5f7fcf*/
      return 1; /*0x5f7fd7*/
    }
    else
    {
      v11 = (void *)*((_DWORD *)this + 2 * a3 + 86); /*0x5f7fe3*/
      if ( v11 ) /*0x5f7fee*/
      {
        WaveClass::Destroy(*((WaveClass **)this + 2 * a3 + 86)); /*0x5f7ff2*/
        __3_YAXPAX_Z(v11); /*0x5f7ff8*/
      }
      v12 = (String *)*((_DWORD *)this + 2 * a3 + 87); /*0x5f8000*/
      if ( v12 ) /*0x5f8009*/
      {
        String::Release(v12); /*0x5f800d*/
        __3_YAXPAX_Z(v12); /*0x5f8013*/
      }
      *(_DWORD *)v17.CDFileClass = &CCFileClass::`vftable'; /*0x5f8027*/
      v19 = 0; /*0x5f802e*/
      Vector::Clear((int)v18); /*0x5f8035*/
      *(_DWORD *)v17.CDFileClass = &off_7E1668; /*0x5f8046*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v17); /*0x5f804d*/
      *(_DWORD *)v14.CDFileClass = &CCFileClass::`vftable'; /*0x5f8056*/
      v16 = 0; /*0x5f805a*/
      Vector::Clear((int)v15); /*0x5f805e*/
      *(_DWORD *)v14.CDFileClass = &off_7E1668; /*0x5f8067*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v14); /*0x5f806b*/
      return 0; /*0x5f8073*/
    }
  }
  else
  {
    *(_DWORD *)v14.CDFileClass = &CCFileClass::`vftable'; /*0x5f7e48*/
    v16 = 0; /*0x5f7e50*/
    Vector::Clear((int)v15); /*0x5f7e54*/
    *(_DWORD *)v14.CDFileClass = &off_7E1668; /*0x5f7e5d*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v14); /*0x5f7e65*/
    return 1; /*0x5f7e6d*/
  }
}



// ==== 0x005F8080  ObjectTypeClass::CleanupWeapons  this=ObjectTypeClass  sig=csp ====
void __thiscall ObjectTypeClass::CleanupWeapons(char *this)
{
  char *v1; // esi
  int v2; // ebp
  void *v3; // edi
  void **v4; // edi
  void *v5; // edi
  void *v6; // edi

  v1 = this + 204; /*0x5f8084*/
  v2 = 18; /*0x5f808a*/
  do /*0x5f8107*/
  {
    v3 = (void *)*((_DWORD *)v1 - 1); /*0x5f8091*/
    if ( v3 ) /*0x5f8096*/
    {
      WaveClass::Destroy(*((_DWORD *)v1 - 1)); /*0x5f809a*/
      __3_YAXPAX_Z(v3); /*0x5f80a0*/
      *((_DWORD *)v1 - 1) = 0; /*0x5f80a8*/
    }
    v4 = *(void ***)v1; /*0x5f80ab*/
    if ( *(_DWORD *)v1 ) /*0x5f80ab*/
    {
      String::Release(*(void ***)v1); /*0x5f80b3*/
      __3_YAXPAX_Z(v4); /*0x5f80b9*/
      *(_DWORD *)v1 = 0; /*0x5f80c1*/
    }
    v5 = (void *)*((_DWORD *)v1 + 35); /*0x5f80c3*/
    if ( v5 ) /*0x5f80cb*/
    {
      WaveClass::Destroy(*((_DWORD *)v1 + 35)); /*0x5f80cf*/
      __3_YAXPAX_Z(v5); /*0x5f80d5*/
      *((_DWORD *)v1 + 35) = 0; /*0x5f80dd*/
    }
    v6 = (void *)*((_DWORD *)v1 + 36); /*0x5f80e3*/
    if ( v6 ) /*0x5f80eb*/
    {
      String::Release(*((void ***)v1 + 36)); /*0x5f80ef*/
      __3_YAXPAX_Z(v6); /*0x5f80f5*/
      *((_DWORD *)v1 + 36) = 0; /*0x5f80fd*/
    }
    v1 += 8; /*0x5f8103*/
    --v2; /*0x5f8106*/
  }
  while ( v2 ); /*0x5f8107*/
}



// ==== 0x005F8110  VoxelAnimType::LoadAnim  this=ObjectTypeClass  sig=csp ====
int __thiscall VoxelAnimType::LoadAnim(char *this)
{
  const char *v2; // ebp
  void *v3; // edi
  File *v4; // eax
  _DWORD *FileVXL; // eax
  void *v6; // edi
  File *v7; // eax
  _DWORD *FileHVA; // eax
  int Info; // eax
  void *v10; // edi
  File *v11; // eax
  _DWORD *v12; // eax
  void *v13; // edi
  File *v14; // eax
  _DWORD *v15; // eax
  int v16; // eax
  void *v17; // edi
  File *v18; // eax
  _DWORD *v19; // eax
  void *v20; // edi
  File *v21; // eax
  _DWORD *v22; // eax
  int v23; // eax
  int v24; // ebp
  int v25; // edi
  void *v26; // edi
  File *v27; // eax
  _DWORD *v28; // eax
  void *v29; // edi
  File *v30; // eax
  _DWORD *v31; // eax
  int v32; // eax
  int v33; // ebp
  int v34; // edi
  void *v35; // edi
  File *v36; // eax
  _DWORD *v37; // eax
  void *v38; // edi
  File *v39; // eax
  _DWORD *v40; // eax
  int v41; // eax
  void *v42; // edi
  void *v43; // edi
  void *v44; // edi
  void *v45; // edi
  int v46; // edi
  int v47; // ebp
  VoxelSection *v48; // ecx
  char v50; // [esp+13h] [ebp-349h]
  CCFileClass v51; // [esp+14h] [ebp-348h] BYREF
  int v52[3]; // [esp+6Ch] [ebp-2F0h] BYREF
  int v53; // [esp+78h] [ebp-2E4h]
  CCFileClass v54; // [esp+80h] [ebp-2DCh] BYREF
  int v55[3]; // [esp+D8h] [ebp-284h] BYREF
  int v56; // [esp+E4h] [ebp-278h]
  char Buffer[260]; // [esp+ECh] [ebp-270h] BYREF
  CCFileClass v58; // [esp+1F0h] [ebp-16Ch] BYREF
  char v59[12]; // [esp+248h] [ebp-114h] BYREF
  int v60; // [esp+254h] [ebp-108h]
  char Filename[256]; // [esp+25Ch] [ebp-100h] BYREF

  v2 = this + 504; /*0x5f811e*/
  v50 = 0; /*0x5f8134*/
  _makepath(Buffer, 0, 0, this + 504, g_Str_File__VXL); /*0x5f8138*/
  CCFileClass::Construct(&v58, Buffer); /*0x5f814f*/
  if ( (unsigned __int8)CCFileClass::Open(&v58, 0) ) /*0x5f815c*/
  {
    v3 = (void *)this->ChargerBarrels_0x12; /*0x5f8169*/
    if ( v3 ) /*0x5f8171*/
    {
      WaveClass::Destroy(*((WaveClass **)this + 44)); /*0x5f8175*/
      __3_YAXPAX_Z(v3); /*0x5f817b*/
    }
    v4 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8185*/
    if ( v4 ) /*0x5f818f*/
      FileVXL = File::LoadFileVXL(v4, (int)&v58, 0); /*0x5f819c*/
    else
      FileVXL = 0; /*0x5f81a3*/
    this->ChargerBarrels_0x12 = FileVXL; /*0x5f81a7*/
    if ( !FileVXL || *(_BYTE *)FileVXL ) /*0x5f81af*/
      v50 = 1; /*0x5f81b3*/
    _makepath(Buffer, 0, 0, v2, g_Str_File__HVA); /*0x5f81c8*/
    CCFileClass::Construct(&v51, Buffer); /*0x5f81dc*/
    v6 = (void *)this->q0B4; /*0x5f81e1*/
    if ( v6 ) /*0x5f81e9*/
    {
      String::Release(*((String **)this + 45)); /*0x5f81ed*/
      __3_YAXPAX_Z(v6); /*0x5f81f3*/
    }
    v7 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f81fd*/
    if ( v7 ) /*0x5f8207*/
      FileHVA = File::LoadFileHVA(v7, (int)&v51); /*0x5f8210*/
    else
      FileHVA = 0; /*0x5f8217*/
    this->q0B4 = FileHVA; /*0x5f821b*/
    if ( !FileHVA || *(_BYTE *)FileHVA ) /*0x5f8223*/
    {
      v50 = 1; /*0x5f8245*/
    }
    else
    {
      Info = VoxelSection::GetInfo(*((VoxelSection **)this + 44), 0, 0); /*0x5f822f*/
      Matrix::Scale(*((Matrix **)this + 45), *(float *)(Info + 12)); /*0x5f823e*/
    }
    *(_DWORD *)v51.CDFileClass = &CCFileClass::`vftable'; /*0x5f824e*/
    v53 = 0; /*0x5f8256*/
    Vector::Clear((int)v52); /*0x5f825a*/
    *(_DWORD *)v51.CDFileClass = &off_7E1668; /*0x5f8263*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v51); /*0x5f826b*/
  }
  else
  {
    v50 = 1; /*0x5f8272*/
  }
  if ( (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) != 40 || *(this + 3233) ) /*0x5f8287*/
  {
    if ( (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) != 40 /*0x5f8657*/
      || !(unsigned __int8)HouseClass::HasPower((HouseClass *)this)
      || *(this + 3285) )
    {
      sprintf(Filename, "%sTUR", v2); /*0x5f86a4*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f86c0*/
      CCFileClass::Construct(&v51, Buffer); /*0x5f86d4*/
      if ( (unsigned __int8)CCFileClass::Open(&v51, 0) ) /*0x5f86de*/
      {
        v26 = (void *)this->q0B8; /*0x5f86eb*/
        if ( v26 ) /*0x5f86f3*/
        {
          WaveClass::Destroy(*((WaveClass **)this + 46)); /*0x5f86f7*/
          __3_YAXPAX_Z(v26); /*0x5f86fd*/
        }
        v27 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8707*/
        if ( v27 ) /*0x5f8711*/
          v28 = File::LoadFileVXL(v27, (int)&v51, 0); /*0x5f871b*/
        else
          v28 = 0; /*0x5f8722*/
        this->q0B8 = v28; /*0x5f8726*/
        if ( !v28 || *(_BYTE *)v28 ) /*0x5f872e*/
          v50 = 1; /*0x5f8732*/
        sprintf(Filename, "%sTUR", v2); /*0x5f8745*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f8761*/
        CCFileClass::Construct(&v54, Buffer); /*0x5f8778*/
        v29 = (void *)this->ChargerTurrets; /*0x5f877d*/
        if ( v29 ) /*0x5f8785*/
        {
          String::Release(*((String **)this + 47)); /*0x5f8789*/
          __3_YAXPAX_Z(v29); /*0x5f878f*/
        }
        v30 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f8799*/
        if ( v30 ) /*0x5f87a3*/
          v31 = File::LoadFileHVA(v30, (int)&v54); /*0x5f87af*/
        else
          v31 = 0; /*0x5f87b6*/
        this->ChargerTurrets = v31; /*0x5f87ba*/
        if ( !v31 || *(_BYTE *)v31 ) /*0x5f87c2*/
        {
          v50 = 1; /*0x5f87e4*/
        }
        else
        {
          v32 = VoxelSection::GetInfo(*((VoxelSection **)this + 46), 0, 0); /*0x5f87ce*/
          Matrix::Scale(*((Matrix **)this + 47), *(float *)(v32 + 12)); /*0x5f87dd*/
        }
        *(_DWORD *)v54.CDFileClass = &CCFileClass::`vftable'; /*0x5f87f0*/
        v56 = 0; /*0x5f87fb*/
        Vector::Clear((int)v55); /*0x5f8802*/
        *(_DWORD *)v54.CDFileClass = &off_7E1668; /*0x5f880e*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x5f8819*/
      }
      goto LABEL_92; /*0x5f8819*/
    }
    v24 = this->Insignificant; /*0x5f865f*/
    v25 = 0; /*0x5f8665*/
    if ( v24 > 0 ) /*0x5f8669*/
    {
      while ( VoxelAnimType::LoadSection((VoxelAnimType *)this, this + 504, v25) ) /*0x5f8680*/
      {
        if ( ++v25 >= v24 ) /*0x5f8685*/
          goto LABEL_93; /*0x5f8685*/
      }
      v50 = 1; /*0x5f868c*/
    }
  }
  else
  {
    if ( !strcmp(this + 36, "APC") ) /*0x5f82a1*/
    {
      sprintf(Filename, off_832AE0, this + 504); /*0x5f82e0*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f82fc*/
      CCFileClass::Construct(&v51, Buffer); /*0x5f8310*/
      if ( (unsigned __int8)CCFileClass::Open(&v51, 0) ) /*0x5f831a*/
      {
        v10 = (void *)this->q0B8; /*0x5f8327*/
        if ( v10 ) /*0x5f832f*/
        {
          WaveClass::Destroy(*((WaveClass **)this + 46)); /*0x5f8333*/
          __3_YAXPAX_Z(v10); /*0x5f8339*/
        }
        v11 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8343*/
        if ( v11 ) /*0x5f834d*/
          v12 = File::LoadFileVXL(v11, (int)&v51, 0); /*0x5f8357*/
        else
          v12 = 0; /*0x5f835e*/
        this->q0B8 = v12; /*0x5f8362*/
        if ( !v12 || *(_BYTE *)v12 ) /*0x5f836a*/
          v50 = 1; /*0x5f836e*/
        sprintf(Filename, off_832AE0, this + 504); /*0x5f8381*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f839d*/
        CCFileClass::Construct(&v54, Buffer); /*0x5f83b4*/
        v13 = (void *)this->ChargerTurrets; /*0x5f83b9*/
        if ( v13 ) /*0x5f83c1*/
        {
          String::Release(*((String **)this + 47)); /*0x5f83c5*/
          __3_YAXPAX_Z(v13); /*0x5f83cb*/
        }
        v14 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f83d5*/
        if ( v14 ) /*0x5f83df*/
          v15 = File::LoadFileHVA(v14, (int)&v54); /*0x5f83eb*/
        else
          v15 = 0; /*0x5f83f2*/
        this->ChargerTurrets = v15; /*0x5f83f6*/
        if ( !v15 || *(_BYTE *)v15 ) /*0x5f83fe*/
        {
          v50 = 1; /*0x5f8420*/
        }
        else
        {
          v16 = VoxelSection::GetInfo(*((VoxelSection **)this + 46), 0, 0); /*0x5f840a*/
          Matrix::Scale(*((Matrix **)this + 47), *(float *)(v16 + 12)); /*0x5f8419*/
        }
        *(_DWORD *)v54.CDFileClass = &CCFileClass::`vftable'; /*0x5f842c*/
        v56 = 0; /*0x5f8437*/
        Vector::Clear((int)v55); /*0x5f843e*/
        *(_DWORD *)v54.CDFileClass = &off_7E1668; /*0x5f844a*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x5f8455*/
      }
      *(_DWORD *)v51.CDFileClass = &CCFileClass::`vftable'; /*0x5f845e*/
      v53 = 0; /*0x5f8466*/
      Vector::Clear((int)v52); /*0x5f846a*/
      *(_DWORD *)v51.CDFileClass = &off_7E1668; /*0x5f8473*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v51); /*0x5f847b*/
    }
    if ( this->q1E8 ) /*0x5f8480*/
    {
      sprintf(Filename, "%sWO", this + 504); /*0x5f84a0*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f84bc*/
      CCFileClass::Construct(&v51, Buffer); /*0x5f84d0*/
      if ( (unsigned __int8)CCFileClass::Open(&v51, 0) ) /*0x5f84da*/
      {
        v17 = (void *)this->q0B8; /*0x5f84e7*/
        if ( v17 ) /*0x5f84ef*/
        {
          WaveClass::Destroy(*((WaveClass **)this + 46)); /*0x5f84f3*/
          __3_YAXPAX_Z(v17); /*0x5f84f9*/
        }
        v18 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8503*/
        if ( v18 ) /*0x5f850d*/
          v19 = File::LoadFileVXL(v18, (int)&v51, 0); /*0x5f8517*/
        else
          v19 = 0; /*0x5f851e*/
        this->q0B8 = v19; /*0x5f8522*/
        if ( !v19 || *(_BYTE *)v19 ) /*0x5f852a*/
          v50 = 1; /*0x5f852e*/
        sprintf(Filename, "%sWO", this + 504); /*0x5f8541*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f855d*/
        CCFileClass::Construct(&v54, Buffer); /*0x5f8574*/
        v20 = (void *)this->ChargerTurrets; /*0x5f8579*/
        if ( v20 ) /*0x5f8581*/
        {
          String::Release(*((String **)this + 47)); /*0x5f8585*/
          __3_YAXPAX_Z(v20); /*0x5f858b*/
        }
        v21 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f8595*/
        if ( v21 ) /*0x5f859f*/
          v22 = File::LoadFileHVA(v21, (int)&v54); /*0x5f85ab*/
        else
          v22 = 0; /*0x5f85b2*/
        this->ChargerTurrets = v22; /*0x5f85b6*/
        if ( !v22 || *(_BYTE *)v22 ) /*0x5f85be*/
        {
          v50 = 1; /*0x5f85e0*/
        }
        else
        {
          v23 = VoxelSection::GetInfo(*((VoxelSection **)this + 46), 0, 0); /*0x5f85ca*/
          Matrix::Scale(*((Matrix **)this + 47), *(float *)(v23 + 12)); /*0x5f85d9*/
        }
        *(_DWORD *)v54.CDFileClass = &CCFileClass::`vftable'; /*0x5f85ec*/
        v56 = 0; /*0x5f85f7*/
        Vector::Clear((int)v55); /*0x5f85fe*/
        *(_DWORD *)v54.CDFileClass = &off_7E1668; /*0x5f860a*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x5f8615*/
      }
LABEL_92:
      *(_DWORD *)v51.CDFileClass = &CCFileClass::`vftable'; /*0x5f881e*/
      v53 = 0; /*0x5f882a*/
      Vector::Clear((int)v52); /*0x5f882e*/
      *(_DWORD *)v51.CDFileClass = &off_7E1668; /*0x5f8833*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v51); /*0x5f883f*/
    }
  }
LABEL_93:
  if ( (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) != 40 || *(this + 3233) ) /*0x5f8850*/
  {
    if ( (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) == 40 /*0x5f8873*/
      && (unsigned __int8)HouseClass::HasPower((HouseClass *)this)
      && !*(this + 3285) )
    {
      v33 = this->Insignificant; /*0x5f887b*/
      v34 = 0; /*0x5f8881*/
      if ( v33 > 0 ) /*0x5f8885*/
      {
        while ( VoxelAnimType::LoadBarrel((VoxelAnimType *)this, this + 504, v34) ) /*0x5f889c*/
        {
          if ( ++v34 >= v33 ) /*0x5f88a5*/
            goto LABEL_122; /*0x5f88a5*/
        }
        goto LABEL_123; /*0x5f889c*/
      }
    }
    else
    {
      sprintf(Filename, "%sBARL", this + 504); /*0x5f88c0*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f88dc*/
      CCFileClass::Construct(&v51, Buffer); /*0x5f88f0*/
      if ( (unsigned __int8)CCFileClass::Open(&v51, 0) ) /*0x5f88fa*/
      {
        v35 = (void *)this->NoSpawnAlt; /*0x5f8907*/
        if ( v35 ) /*0x5f890f*/
        {
          WaveClass::Destroy(*((WaveClass **)this + 48)); /*0x5f8913*/
          __3_YAXPAX_Z(v35); /*0x5f8919*/
        }
        v36 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8923*/
        if ( v36 ) /*0x5f892d*/
          v37 = File::LoadFileVXL(v36, (int)&v51, 0); /*0x5f8937*/
        else
          v37 = 0; /*0x5f893e*/
        this->NoSpawnAlt = v37; /*0x5f8942*/
        if ( !v37 || *(_BYTE *)v37 ) /*0x5f894a*/
          v50 = 1; /*0x5f894e*/
        sprintf(Filename, "%sBARL", this + 504); /*0x5f8961*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f897d*/
        CCFileClass::Construct(&v54, Buffer); /*0x5f8994*/
        v38 = (void *)this->q031; /*0x5f8999*/
        if ( v38 ) /*0x5f89a1*/
        {
          String::Release(*((String **)this + 49)); /*0x5f89a5*/
          __3_YAXPAX_Z(v38); /*0x5f89ab*/
        }
        v39 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f89b5*/
        if ( v39 ) /*0x5f89bf*/
          v40 = File::LoadFileHVA(v39, (int)&v54); /*0x5f89cb*/
        else
          v40 = 0; /*0x5f89d2*/
        this->q031 = v40; /*0x5f89d6*/
        if ( !v40 || *(_BYTE *)v40 ) /*0x5f89de*/
        {
          v50 = 1; /*0x5f8a00*/
        }
        else
        {
          v41 = VoxelSection::GetInfo(*((VoxelSection **)this + 48), 0, 0); /*0x5f89ea*/
          Matrix::Scale(*((Matrix **)this + 49), *(float *)(v41 + 12)); /*0x5f89f9*/
        }
        *(_DWORD *)v54.CDFileClass = &CCFileClass::`vftable'; /*0x5f8a0c*/
        v56 = 0; /*0x5f8a17*/
        Vector::Clear((int)v55); /*0x5f8a1e*/
        *(_DWORD *)v54.CDFileClass = &off_7E1668; /*0x5f8a2a*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x5f8a35*/
      }
      *(_DWORD *)v51.CDFileClass = &CCFileClass::`vftable'; /*0x5f8a3e*/
      v53 = 0; /*0x5f8a46*/
      Vector::Clear((int)v52); /*0x5f8a4a*/
      *(_DWORD *)v51.CDFileClass = &off_7E1668; /*0x5f8a53*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v51); /*0x5f8a5b*/
    }
  }
LABEL_122:
  if ( v50 ) /*0x5f8a64*/
  {
LABEL_123:
    v42 = (void *)this->ChargerBarrels_0x12; /*0x5f8a6a*/
    if ( v42 ) /*0x5f8a72*/
    {
      WaveClass::Destroy(*((WaveClass **)this + 44)); /*0x5f8a76*/
      __3_YAXPAX_Z(v42); /*0x5f8a7c*/
      this->ChargerBarrels_0x12 = 0; /*0x5f8a84*/
    }
    v43 = (void *)this->q0B4; /*0x5f8a8a*/
    if ( v43 ) /*0x5f8a92*/
    {
      String::Release(*((String **)this + 45)); /*0x5f8a96*/
      __3_YAXPAX_Z(v43); /*0x5f8a9c*/
      this->q0B4 = 0; /*0x5f8aa4*/
    }
    if ( (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) == 40 /*0x5f8ac1*/
      && (unsigned __int8)HouseClass::HasPower((HouseClass *)this)
      && !*(this + 3285) )
    {
      ObjectTypeClass::CleanupWeapons(this); /*0x5f8acb*/
    }
    else
    {
      v44 = (void *)this->q0B8; /*0x5f8ad5*/
      if ( v44 ) /*0x5f8add*/
      {
        WaveClass::Destroy(*((WaveClass **)this + 46)); /*0x5f8ae1*/
        __3_YAXPAX_Z(v44); /*0x5f8ae7*/
        this->q0B8 = 0; /*0x5f8aef*/
      }
      v45 = (void *)this->ChargerTurrets; /*0x5f8af5*/
      if ( v45 ) /*0x5f8afd*/
      {
        String::Release(*((String **)this + 47)); /*0x5f8b05*/
        __3_YAXPAX_Z(v45); /*0x5f8b0b*/
        this->ChargerTurrets = 0; /*0x5f8b13*/
      }
    }
    goto LABEL_146; /*0x5f8ad0*/
  }
  v46 = 0; /*0x5f8b2d*/
  v47 = *(unsigned __int8 *)(VoxelSection::GetInfo(*((VoxelSection **)this + 44), 0, 0) + 160); /*0x5f8b35*/
  v48 = (VoxelSection *)this->ChargerBarrels_0x12; /*0x5f8b37*/
  if ( *(_DWORD *)&v48[1] > 0 ) /*0x5f8b40*/
  {
    do /*0x5f8bda*/
    {
      if ( v47 <= *(unsigned __int8 *)(VoxelSection::GetInfo(v48, v46, 0) + 160) ) /*0x5f8b57*/
        v47 = *(unsigned __int8 *)(VoxelSection::GetInfo(*((VoxelSection **)this + 44), v46, 0) + 160); /*0x5f8b6e*/
      if ( v47 <= *(unsigned __int8 *)(VoxelSection::GetInfo(*((VoxelSection **)this + 44), v46, 0) + 161) ) /*0x5f8b87*/
        v47 = *(unsigned __int8 *)(VoxelSection::GetInfo(*((VoxelSection **)this + 44), v46, 0) + 161); /*0x5f8b9e*/
      if ( v47 <= *(unsigned __int8 *)(VoxelSection::GetInfo(*((VoxelSection **)this + 44), v46, 0) + 162) ) /*0x5f8bb7*/
        v47 = *(unsigned __int8 *)(VoxelSection::GetInfo(*((VoxelSection **)this + 44), v46, 0) + 162); /*0x5f8bce*/
      v48 = (VoxelSection *)this->ChargerBarrels_0x12; /*0x5f8bd0*/
      ++v46; /*0x5f8bd6*/
    }
    while ( v46 < *(_DWORD *)&v48[1] ); /*0x5f8bda*/
  }
  if ( v47 <= 8 ) /*0x5f8be3*/
    v47 = 8; /*0x5f8be5*/
  this->MaxDimension = v47; /*0x5f8bea*/
  __3_YAXPAX_Z(*((void **)this + 145)); /*0x5f8bf7*/
  this->VoxelCaches_4 = 0; /*0x5f8bfc*/
  this->q248 = 0; /*0x5f8c02*/
  this->q24C = 0; /*0x5f8c08*/
  this->q094 = 0; /*0x5f8c0e*/
  this->tail_95 = 0; /*0x5f8c14*/
  __3_YAXPAX_Z(*((void **)this + 150)); /*0x5f8c21*/
  this->q258 = 0; /*0x5f8c26*/
  this->q25C = 0; /*0x5f8c2c*/
  this->q098 = 0; /*0x5f8c32*/
  this->q264 = 0; /*0x5f8c38*/
  this->q268 = 0; /*0x5f8c3e*/
  __3_YAXPAX_Z(*((void **)this + 155)); /*0x5f8c4b*/
  this->unused_9B = 0; /*0x5f8c50*/
  this->Armor = 0; /*0x5f8c56*/
  this->q274 = 0; /*0x5f8c5c*/
  this->q278 = 0; /*0x5f8c62*/
  this->q27C = 0; /*0x5f8c68*/
  __3_YAXPAX_Z(*((void **)this + 160)); /*0x5f8c75*/
  this->q0A0 = 0; /*0x5f8c7d*/
  this->q284 = 0; /*0x5f8c83*/
  this->q288 = 0; /*0x5f8c89*/
  this->q28C = 0; /*0x5f8c8f*/
  this->q0A4 = 0; /*0x5f8c95*/
LABEL_146:
  *(_DWORD *)v58.CDFileClass = &CCFileClass::`vftable'; /*0x5f8c9b*/
  v60 = 0; /*0x5f8cad*/
  Vector::Clear((int)v59); /*0x5f8cb4*/
  *(_DWORD *)v58.CDFileClass = &off_7E1668; /*0x5f8cc0*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v58); /*0x5f8cd0*/
}



// ==== 0x005F8CE0  Turret::LoadVoxelTurretAndBarrel  this=Turret  sig=csp ====
char __thiscall Turret::LoadVoxelTurretAndBarrel(Turret *this)
{
  int v2; // eax
  void *v3; // edi
  File *v4; // eax
  _DWORD *FileVXL; // eax
  void *v6; // edi
  File *v7; // eax
  _DWORD *FileHVA; // eax
  VoxelSection *v9; // ecx
  int Info; // eax
  void *v11; // edi
  File *v12; // eax
  _DWORD *v13; // eax
  void *v14; // edi
  File *v15; // eax
  _DWORD *v16; // eax
  VoxelSection *v17; // ecx
  int v18; // eax
  CCFileClass v20; // [esp+8h] [ebp-348h] BYREF
  int v21[3]; // [esp+60h] [ebp-2F0h] BYREF
  int v22; // [esp+6Ch] [ebp-2E4h]
  CCFileClass v23; // [esp+74h] [ebp-2DCh] BYREF
  int v24[3]; // [esp+CCh] [ebp-284h] BYREF
  int v25; // [esp+D8h] [ebp-278h]
  CCFileClass v26; // [esp+E0h] [ebp-270h] BYREF
  int v27[3]; // [esp+138h] [ebp-218h] BYREF
  int v28; // [esp+144h] [ebp-20Ch]
  char Buffer[256]; // [esp+14Ch] [ebp-204h] BYREF
  char Source[260]; // [esp+24Ch] [ebp-104h] BYREF

  v2 = (*(int (__thiscall **)(Turret *))(this->Turret_field_00 + 44))(this); /*0x5f8cec*/
  if ( v2 == 40 ) /*0x5f8cf2*/
  {
    v2 = (*(int (__thiscall **)(Turret *))(this->Turret_field_00 + 156))(this); /*0x5f8cfc*/
    if ( v2 ) /*0x5f8d04*/
    {
      LOBYTE(v2) = *((_BYTE *)this + 3233); /*0x5f8d0a*/
      if ( (_BYTE)v2 ) /*0x5f8d14*/
      {
        sprintf(Buffer, "%sTUR", (const char *)this + 504); /*0x5f8d30*/
        _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f8d4c*/
        CCFileClass::Construct(&v26, Source); /*0x5f8d63*/
        if ( (unsigned __int8)CCFileClass::Open(&v26, 0) ) /*0x5f8d70*/
        {
          v3 = (void *)*((_DWORD *)this + 46); /*0x5f8d7d*/
          if ( v3 ) /*0x5f8d85*/
          {
            WaveClass::Destroy(*((WaveClass **)this + 46)); /*0x5f8d89*/
            __3_YAXPAX_Z(v3); /*0x5f8d8f*/
          }
          v4 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8d99*/
          if ( v4 ) /*0x5f8da3*/
            FileVXL = File::LoadFileVXL(v4, (int)&v26, 0); /*0x5f8db0*/
          else
            FileVXL = 0; /*0x5f8db7*/
          *((_DWORD *)this + 46) = FileVXL; /*0x5f8dbb*/
          if ( FileVXL && !*(_BYTE *)FileVXL ) /*0x5f8dc7*/
          {
            sprintf(Buffer, "%sTUR", (const char *)this + 504); /*0x5f8ddd*/
            _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f8df9*/
            CCFileClass::Construct(&v20, Source); /*0x5f8e0d*/
            v6 = (void *)*((_DWORD *)this + 47); /*0x5f8e12*/
            if ( v6 ) /*0x5f8e1a*/
            {
              String::Release(*((String **)this + 47)); /*0x5f8e1e*/
              __3_YAXPAX_Z(v6); /*0x5f8e24*/
            }
            v7 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f8e2e*/
            if ( v7 ) /*0x5f8e38*/
              FileHVA = File::LoadFileHVA(v7, (int)&v20); /*0x5f8e41*/
            else
              FileHVA = 0; /*0x5f8e48*/
            v9 = (VoxelSection *)*((_DWORD *)this + 46); /*0x5f8e4a*/
            *((_DWORD *)this + 47) = FileHVA; /*0x5f8e52*/
            Info = VoxelSection::GetInfo(v9, 0, 0); /*0x5f8e58*/
            Matrix::Scale(*((Matrix **)this + 47), *(float *)(Info + 12)); /*0x5f8e67*/
            *(_DWORD *)v20.CDFileClass = &CCFileClass::`vftable'; /*0x5f8e70*/
            v22 = 0; /*0x5f8e78*/
            Vector::Clear((int)v21); /*0x5f8e7c*/
            *(_DWORD *)v20.CDFileClass = &off_7E1668; /*0x5f8e85*/
            BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x5f8e8d*/
          }
        }
        sprintf(Buffer, "%sBARL", (const char *)this + 504); /*0x5f8ea0*/
        _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f8ebc*/
        CCFileClass::Construct(&v23, Source); /*0x5f8ed0*/
        if ( (unsigned __int8)CCFileClass::Open(&v23, 0) ) /*0x5f8edd*/
        {
          v11 = (void *)*((_DWORD *)this + 48); /*0x5f8eea*/
          if ( v11 ) /*0x5f8ef2*/
          {
            WaveClass::Destroy(*((WaveClass **)this + 48)); /*0x5f8ef6*/
            __3_YAXPAX_Z(v11); /*0x5f8efc*/
          }
          v12 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8f06*/
          if ( v12 ) /*0x5f8f10*/
            v13 = File::LoadFileVXL(v12, (int)&v23, 0); /*0x5f8f1a*/
          else
            v13 = 0; /*0x5f8f21*/
          *((_DWORD *)this + 48) = v13; /*0x5f8f25*/
          if ( v13 && !*(_BYTE *)v13 ) /*0x5f8f31*/
          {
            sprintf(Buffer, "%sBARL", (const char *)this + 504); /*0x5f8f47*/
            _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f8f63*/
            CCFileClass::Construct(&v20, Source); /*0x5f8f77*/
            v14 = (void *)*((_DWORD *)this + 49); /*0x5f8f7c*/
            if ( v14 ) /*0x5f8f84*/
            {
              String::Release(*((String **)this + 49)); /*0x5f8f88*/
              __3_YAXPAX_Z(v14); /*0x5f8f8e*/
            }
            v15 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f8f98*/
            if ( v15 ) /*0x5f8fa2*/
              v16 = File::LoadFileHVA(v15, (int)&v20); /*0x5f8fab*/
            else
              v16 = 0; /*0x5f8fb2*/
            v17 = (VoxelSection *)*((_DWORD *)this + 48); /*0x5f8fb4*/
            *((_DWORD *)this + 49) = v16; /*0x5f8fbc*/
            v18 = VoxelSection::GetInfo(v17, 0, 0); /*0x5f8fc2*/
            Matrix::Scale(*((Matrix **)this + 49), *(float *)(v18 + 12)); /*0x5f8fd1*/
            *(_DWORD *)v20.CDFileClass = &CCFileClass::`vftable'; /*0x5f8fda*/
            v22 = 0; /*0x5f8fe2*/
            Vector::Clear((int)v21); /*0x5f8fe6*/
            *(_DWORD *)v20.CDFileClass = &off_7E1668; /*0x5f8fef*/
            BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x5f8ff7*/
          }
        }
        *(_DWORD *)v23.CDFileClass = &CCFileClass::`vftable'; /*0x5f9008*/
        v25 = 0; /*0x5f900c*/
        Vector::Clear((int)v24); /*0x5f9013*/
        *(_DWORD *)v23.CDFileClass = &off_7E1668; /*0x5f9021*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v23); /*0x5f9025*/
        *(_DWORD *)v26.CDFileClass = &CCFileClass::`vftable'; /*0x5f9031*/
        v28 = 0; /*0x5f9038*/
        Vector::Clear((int)v27); /*0x5f903f*/
        *(_DWORD *)v26.CDFileClass = &off_7E1668; /*0x5f904b*/
        LOBYTE(v2) = BufferIOFileClass::Dtor((BufferIOFileClass *)&v26); /*0x5f9052*/
      }
    }
  }
  return v2; /*0x5f9059*/
}



// ==== 0x005F9070  ObjectTypeClass::Load2DArt  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::Load2DArt(char *this)
{
  char *v2; // edi
  int v3; // esi
  char v4; // al
  char v5; // dl
  int v6; // edx
  int v7; // eax
  char v8; // dl
  int v9; // eax
  int result; // eax
  __int16 v11; // cx
  char Destination[24]; // [esp+8h] [ebp-220h] BYREF
  char v13; // [esp+20h] [ebp-208h]
  char Source; // [esp+24h] [ebp-204h] BYREF
  char v15; // [esp+25h] [ebp-203h]
  char Buffer[256]; // [esp+128h] [ebp-100h] BYREF

  if ( this->q211 && *((_DWORD *)dword_A8B230 + 1174) == 1 && !this->ImageAllocated ) /*0x5f9096*/
  {
    if ( !this->q212 ) /*0x5f90a0*/
    {
      v2 = this + 504; /*0x5f90ab*/
      sprintf(Buffer, off_832AE8, this + 504); /*0x5f90bf*/
      if ( Buffer ) /*0x5f90d0*/
      {
        strncpy(Destination, Buffer, 0x18u); /*0x5f90e7*/
        v13 = 0; /*0x5f90ef*/
      }
      else
      {
        Destination[0] = 0; /*0x5f90d2*/
      }
      if ( Destination != v2 ) /*0x5f90fa*/
      {
        qmemcpy(v2, Destination, 0x18u); /*0x5f9105*/
        this->q210 = v13; /*0x5f9107*/
      }
      this->q212 = 1; /*0x5f9108*/
    }
  }
  else
  {
    this->q212 = 0; /*0x5f9112*/
  }
  _makepath(&Source, 0, 0, this + 504, Ext); /*0x5f912e*/
  if ( this->q22C ) /*0x5f9133*/
  {
    _makepath(&Source, 0, 0, this + 504, (const char *)&off_7E1BC6 + 112 * *((_DWORD *)dword_A8B230 + 1174)); /*0x5f9169*/
  }
  else if ( this->q237 ) /*0x5f9173*/
  {
    v3 = *((_DWORD *)dword_A8B230 + 1174); /*0x5f9183*/
    if ( v3 != -1 ) /*0x5f918c*/
    {
      v4 = Source; /*0x5f918e*/
      v5 = v15; /*0x5f9198*/
      if ( Source >= 65 && Source <= 90 ) /*0x5f919e*/
        v4 = Source + 32; /*0x5f91a0*/
      if ( v15 >= 65 && v15 <= 90 ) /*0x5f91aa*/
        v5 = v15 + 32; /*0x5f91af*/
      if ( (v4 == 103 || v4 == 110 || v4 == 99 || v4 == 121) && (v5 == 97 || v5 == 116) ) /*0x5f91c9*/
        v15 = byte_7E1BCE[112 * v3]; /*0x5f91dd*/
    }
  }
  if ( this->ImageAllocated && this->q0A4 ) /*0x5f91eb*/
    __3_YAXPAX_Z(*((void **)this + 41)); /*0x5f91f6*/
  v6 = *(_DWORD *)this; /*0x5f91fe*/
  this->q0A4 = 0; /*0x5f9203*/
  this->ImageAllocated = 0; /*0x5f920d*/
  if ( (*(int (__thiscall **)(char *))(v6 + 44))(this) == 21 /*0x5f9227*/
    || (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) == 5 )
  {
    v9 = SearchMIXFile(&Source, 1); /*0x5f9267*/
    this->q0A4 = v9; /*0x5f926e*/
    if ( v9 ) /*0x5f9274*/
      goto LABEL_41; /*0x5f9274*/
    v15 = 71; /*0x5f9276*/
    v8 = 1; /*0x5f927b*/
    goto LABEL_40; /*0x5f927b*/
  }
  if ( (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) != 30 /*0x5f9241*/
    && (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) != 37 )
  {
    v7 = SearchMIXFile(&Source, 0); /*0x5f9249*/
    this->q0A4 = v7; /*0x5f9250*/
    if ( !v7 ) /*0x5f9256*/
    {
      v15 = 71; /*0x5f9258*/
      v8 = 0; /*0x5f925d*/
LABEL_40:
      this->q0A4 = SearchMIXFile(&Source, v8); /*0x5f927d*/
    }
  }
LABEL_41:
  result = this->q0A4; /*0x5f928c*/
  if ( result ) /*0x5f9294*/
  {
    v11 = *(_WORD *)(result + 2); /*0x5f9296*/
    LOWORD(result) = *(_WORD *)(result + 4); /*0x5f929a*/
    if ( v11 <= (__int16)result ) /*0x5f92a1*/
      result = (__int16)result; /*0x5f92a8*/
    else
      result = v11; /*0x5f92a3*/
    if ( result <= 8 ) /*0x5f92ae*/
      result = 8; /*0x5f92b0*/
    this->MaxDimension = result; /*0x5f92b5*/
  }
  return result; /*0x5f92bb*/
}



// ==== 0x005F92D0  ObjectTypeClass::LoadFromINI  this=ObjectTypeClass  sig=csp ====
char __thiscall ObjectTypeClass::LoadFromINI(ObjectTypeClass *this, unsigned __int8 ***a2)
{
  int CrushSound; // edi
  int Index; // eax
  int AmbientSound; // edi
  int v6; // eax
  char Crushable; // cl
  char Bool_Overwrite; // al
  char v9; // al
  char AlternateArcticArt; // cl
  char v11; // al
  char v12; // al
  char LegalTarget; // cl
  char v14; // al
  int Int_Overwrite; // eax
  char Immune; // cl
  char v17; // al
  int Coord; // eax
  char IgnoresFirestorm; // cl
  char v20; // al
  int v21; // eax
  int v22; // eax
  char Theater; // cl
  char v24; // al
  char v25; // al
  char Bombable; // [esp-Ch] [ebp-1B8h]
  char RadarInvisible; // [esp-Ch] [ebp-1B8h]
  int v29; // [esp-Ch] [ebp-1B8h]
  char Insignificant; // [esp-Ch] [ebp-1B8h]
  char UseLineTrail; // [esp-Ch] [ebp-1B8h]
  int LineTrailColorDecrement; // [esp-Ch] [ebp-1B8h]
  char NewTheater; // [esp-Ch] [ebp-1B8h]
  int v34; // [esp+8h] [ebp-1A4h] BYREF
  char Source[28]; // [esp+Ch] [ebp-1A0h] BYREF
  VocClass Destination; // [esp+28h] [ebp-184h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x5f92e3*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)this, a2) ) /*0x5f92eb*/
    return 0; /*0x5f969e*/
  strcpy(Source, this->ImageFile); /*0x5f931c*/
  INIClass::GetString( /*0x5f933b*/
    (INIClass *)a2,
    (unsigned __int8 *)this->?,
    (unsigned __int8 *)g_INI_Key_Image,
    Source,
    this->ImageFile,
    25);
  v34 = (int)strcpy(Source, this->AlphaImageFile); /*0x5f9366*/
  INIClass::GetString((INIClass *)a2, (unsigned __int8 *)this->?, aAlphaimage, Source, this->AlphaImageFile, 25); /*0x5f9386*/
  CrushSound = this->CrushSound; /*0x5f938b*/
  if ( INIClass::GetString( /*0x5f93a8*/
         (INIClass *)a2,
         (unsigned __int8 *)this->?,
         aCrushsound,
         &g_INI_DefaultBuffer,
         (char *)&Destination,
         128) )
  {
    Index = VocClass::FindIndex(&Destination); /*0x5f93b5*/
    if ( Index != -1 ) /*0x5f93bd*/
      CrushSound = Index; /*0x5f93bf*/
  }
  this->CrushSound = CrushSound; /*0x5f93d5*/
  AmbientSound = this->AmbientSound; /*0x5f93db*/
  if ( !INIClass::GetString( /*0x5f93f9*/
          (INIClass *)a2,
          (unsigned __int8 *)this->?,
          aAmbientsound,
          &g_INI_DefaultBuffer,
          (char *)&Destination,
          128)
    || (v6 = VocClass::FindIndex(&Destination), v6 == -1) )
  {
    v6 = AmbientSound; /*0x5f93fb*/
  }
  Crushable = this->Crushable; /*0x5f93fd*/
  this->AmbientSound = v6; /*0x5f9403*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aCrushable, Crushable); /*0x5f9412*/
  Bombable = this->Bombable; /*0x5f941f*/
  this->Crushable = Bool_Overwrite; /*0x5f9426*/
  this->Bombable = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aBombable, Bombable); /*0x5f9431*/
  v9 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aNospawnalt, this->__pad_14D[155]); /*0x5f9446*/
  AlternateArcticArt = this->AlternateArcticArt; /*0x5f944b*/
  this->__pad_14D[155] = v9; /*0x5f9451*/
  v11 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aAlternatearcti, AlternateArcticArt); /*0x5f9460*/
  RadarInvisible = this->RadarInvisible; /*0x5f946d*/
  this->AlternateArcticArt = v11; /*0x5f9474*/
  this->RadarInvisible = INIClass::ReadBool_Overwrite( /*0x5f947f*/
                           (int *)a2,
                           (unsigned __int8 *)this->?,
                           aRadarinvisible,
                           RadarInvisible);
  v12 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aSelectable, this->Selectable); /*0x5f9494*/
  LegalTarget = this->LegalTarget; /*0x5f9499*/
  this->Selectable = v12; /*0x5f949f*/
  v14 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aLegaltarget, LegalTarget); /*0x5f94ae*/
  v29 = this->Armor[0]; /*0x5f94bb*/
  this->LegalTarget = v14; /*0x5f94c2*/
  this->Armor[0] = ArmorType::FindIndex((ArmorType *)a2, (unsigned __int8 *)this->?, g_INI_Key_Armor, v29); /*0x5f94cd*/
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)this->?, aStrength, this->Strength); /*0x5f94e2*/
  Immune = this->Immune; /*0x5f94e7*/
  this->Strength = Int_Overwrite; /*0x5f94ed*/
  v17 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aImmune, Immune); /*0x5f94fc*/
  Insignificant = this->Insignificant; /*0x5f9509*/
  this->Immune = v17; /*0x5f9510*/
  this->Insignificant = INIClass::ReadBool_Overwrite( /*0x5f951b*/
                          (int *)a2,
                          (unsigned __int8 *)this->?,
                          aInsignificant,
                          Insignificant);
  this->HasRadialIndicator = INIClass::ReadBool_Overwrite( /*0x5f9549*/
                               (int *)a2,
                               (unsigned __int8 *)this->?,
                               aHasradialindic,
                               this->HasRadialIndicator);
  Coord = INIClass::GetCoord( /*0x5f954f*/
            (INIClass *)a2,
            (int)&v34,
            (unsigned __int8 *)this->?,
            aRadialcolor,
            (unsigned __int8 *)this->__pad_98);
  IgnoresFirestorm = this->IgnoresFirestorm; /*0x5f9557*/
  *(_WORD *)this->__pad_98 = *(_WORD *)Coord; /*0x5f955d*/
  this->__pad_98[2] = *(_BYTE *)(Coord + 2); /*0x5f956c*/
  v20 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aIgnoresfiresto, IgnoresFirestorm); /*0x5f956f*/
  UseLineTrail = this->UseLineTrail; /*0x5f9580*/
  this->IgnoresFirestorm = v20; /*0x5f958c*/
  this->UseLineTrail = INIClass::ReadBool_Overwrite( /*0x5f959d*/
                         (int *)&DSurface_ViewBounds.__pad_FC[228],
                         (unsigned __int8 *)this->ImageFile,
                         aUselinetrail,
                         UseLineTrail);
  v21 = INIClass::GetCoord( /*0x5f95b4*/
          (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
          (int)&v34,
          (unsigned __int8 *)this->ImageFile,
          aLinetrailcolor,
          (unsigned __int8 *)this->LineTrailColor);
  *(_WORD *)this->LineTrailColor = *(_WORD *)v21; /*0x5f95bc*/
  LineTrailColorDecrement = this->LineTrailColorDecrement; /*0x5f95cd*/
  this->LineTrailColor[2] = *(_BYTE *)(v21 + 2); /*0x5f95d4*/
  v22 = INIClass::ReadInt_Overwrite( /*0x5f95d7*/
          (bool *)&DSurface_ViewBounds.__pad_FC[228],
          (unsigned __int8 *)this->ImageFile,
          aLinetrailcolor_0,
          LineTrailColorDecrement);
  Theater = this->Theater; /*0x5f95dc*/
  this->LineTrailColorDecrement = v22; /*0x5f95e2*/
  v24 = INIClass::ReadBool_Overwrite( /*0x5f95f4*/
          (int *)&DSurface_ViewBounds.__pad_FC[228],
          (unsigned __int8 *)this->ImageFile,
          (unsigned __int8 *)g_INI_Key_Theater,
          Theater);
  NewTheater = this->NewTheater; /*0x5f9604*/
  this->Theater = v24; /*0x5f960b*/
  this->NewTheater = INIClass::ReadBool_Overwrite( /*0x5f9616*/
                       (int *)&DSurface_ViewBounds.__pad_FC[228],
                       (unsigned __int8 *)this->ImageFile,
                       aNewtheater,
                       NewTheater);
  v25 = INIClass::ReadBool_Overwrite( /*0x5f962e*/
          (int *)&DSurface_ViewBounds.__pad_FC[228],
          (unsigned __int8 *)this->ImageFile,
          aVoxel,
          this->Voxel);
  this->Voxel = v25; /*0x5f9634*/
  if ( !v25 && (*((int (__thiscall **)(ObjectTypeClass *))this->AbstractTypeClass + 11))(this) != 5 ) /*0x5f9649*/
    ObjectTypeClass::Load2DArt((char *)this); /*0x5f964d*/
  if ( this->AlphaImageFile[0] ) /*0x5f9652*/
  {
    _makepath((char *)&Destination.Name[5], 0, 0, this->AlphaImageFile, Ext); /*0x5f9674*/
    this->AlphaImage = (SHPStruct *)SearchMIXFile((char *)&Destination.Name[5], 0); /*0x5f968a*/
  }
  return 1; /*0x5f9690*/
}



// ==== 0x005F96B0  TheaterObjectTypeClassSpecificID  this=ScenarioClass  sig=csp ====
int __fastcall TheaterObjectTypeClassSpecificID(char *a1, int a2)
{
  int result; // eax
  char v3; // bl

  if ( a2 != -1 ) /*0x5f96b4*/
  {
    LOBYTE(result) = *a1; /*0x5f96b6*/
    v3 = a1[1]; /*0x5f96b8*/
    if ( *a1 >= 65 && (char)result <= 90 ) /*0x5f96c1*/
      LOBYTE(result) = result + 32; /*0x5f96c3*/
    if ( v3 >= 65 && v3 <= 90 ) /*0x5f96cd*/
      v3 += 32; /*0x5f96cf*/
    if ( ((_BYTE)result == 103 || (_BYTE)result == 110 || (_BYTE)result == 99 || (_BYTE)result == 121) /*0x5f96ea*/
      && (v3 == 97 || v3 == 116) )
    {
      a1[1] = byte_7E1BCE[112 * a2]; /*0x5f96fe*/
      return 112 * a2; /*0x5f96f5*/
    }
  }
  return result; /*0x5f9701*/
}



// ==== 0x005F9710  ObjectTypeClass::SetRTTI71  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::SetRTTI71(ObjectTypeClass *this)
{
  int result; // eax

  BYTE1(this->AbstractTypeClass) = 71; /*0x5f9710*/
  return result; /*0x5f9714*/
}



// ==== 0x005F9720  ObjectTypeClass::LoadCleanup  this=ObjectTypeClass  sig=csp ====
int __stdcall ObjectTypeClass::LoadCleanup(ObjectTypeClass *this, int a2)
{
  void *v2; // ebp
  String *v3; // ebp
  WaveClass *v4; // ebp
  String *v5; // ebp
  WaveClass *v6; // ebp
  String *v7; // ebp
  int result; // eax
  int *v9; // eax
  int v10; // ecx
  char Buffer[260]; // [esp+10h] [ebp-104h] BYREF

  __3_YAXPAX_Z((void *)this->VoxelCaches[0]); /*0x5f973e*/
  this->VoxelCaches[0] = 0; /*0x5f974e*/
  this->VoxelCaches[1] = 0; /*0x5f9750*/
  this->VoxelCaches[2] = 0; /*0x5f9753*/
  LOBYTE(this->VoxelCaches[3]) = 0; /*0x5f9756*/
  this->VoxelCaches[4] = 0; /*0x5f9759*/
  ObjectTypeClass::FreeLoaderBuffer((ObjectTypeClass *)&this->VoxelCaches[5]); /*0x5f975c*/
  ObjectTypeClass::FreeLoaderBuffer((ObjectTypeClass *)&this->VoxelCaches[10]); /*0x5f9767*/
  ObjectTypeClass::FreeLoaderBuffer((ObjectTypeClass *)&this->VoxelCaches[15]); /*0x5f9772*/
  v2 = (void *)this->MainVoxel[0]; /*0x5f9777*/
  if ( v2 ) /*0x5f977f*/
  {
    WaveClass::Destroy((WaveClass *)this->MainVoxel[0]); /*0x5f9783*/
    __3_YAXPAX_Z(v2); /*0x5f9789*/
  }
  v3 = (String *)this->TurretVoxel[0]; /*0x5f9791*/
  this->MainVoxel[0] = 0; /*0x5f9797*/
  if ( v3 ) /*0x5f979f*/
  {
    String::Release(v3); /*0x5f97a3*/
    __3_YAXPAX_Z(v3); /*0x5f97a9*/
  }
  v4 = (WaveClass *)this->BarrelVoxel[0]; /*0x5f97b1*/
  this->TurretVoxel[0] = 0; /*0x5f97b7*/
  if ( v4 ) /*0x5f97bf*/
  {
    WaveClass::Destroy(v4); /*0x5f97c3*/
    __3_YAXPAX_Z(v4); /*0x5f97c9*/
  }
  v5 = (String *)this->ChargerTurrets[0]; /*0x5f97d1*/
  this->BarrelVoxel[0] = 0; /*0x5f97d7*/
  if ( v5 ) /*0x5f97df*/
  {
    String::Release(v5); /*0x5f97e3*/
    __3_YAXPAX_Z(v5); /*0x5f97e9*/
  }
  v6 = (WaveClass *)this->ChargerTurrets[1]; /*0x5f97f1*/
  this->ChargerTurrets[0] = 0; /*0x5f97f7*/
  if ( v6 ) /*0x5f97ff*/
  {
    WaveClass::Destroy(v6); /*0x5f9803*/
    __3_YAXPAX_Z(v6); /*0x5f9809*/
  }
  v7 = (String *)this->ChargerTurrets[2]; /*0x5f9811*/
  this->ChargerTurrets[1] = 0; /*0x5f9817*/
  if ( v7 ) /*0x5f981f*/
  {
    String::Release(v7); /*0x5f9823*/
    __3_YAXPAX_Z(v7); /*0x5f9829*/
  }
  this->ChargerTurrets[2] = 0; /*0x5f9833*/
  ObjectTypeClass::CleanupWeapons((char *)this); /*0x5f9839*/
  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x5f9847*/
  if ( result >= 0 ) /*0x5f984e*/
  {
    this->Image = 0; /*0x5f9856*/
    this->ImageAllocated = 0; /*0x5f985c*/
    this->AlphaImage = 0; /*0x5f9862*/
    if ( this != (ObjectTypeClass *)-580 ) /*0x5f9868*/
    {
      this->VoxelCaches[0] = 0; /*0x5f986a*/
      this->VoxelCaches[1] = 0; /*0x5f986c*/
      this->VoxelCaches[2] = 0; /*0x5f986f*/
      LOBYTE(this->VoxelCaches[3]) = 0; /*0x5f9872*/
      this->VoxelCaches[4] = 0; /*0x5f9875*/
    }
    if ( this != (ObjectTypeClass *)-600 ) /*0x5f9880*/
    {
      this->VoxelCaches[5] = 0; /*0x5f9882*/
      this->VoxelCaches[6] = 0; /*0x5f9884*/
      this->VoxelCaches[7] = 0; /*0x5f9887*/
      LOBYTE(this->VoxelCaches[8]) = 0; /*0x5f988a*/
      this->VoxelCaches[9] = 0; /*0x5f988d*/
    }
    if ( this != (ObjectTypeClass *)-620 ) /*0x5f9898*/
    {
      this->VoxelCaches[10] = 0; /*0x5f989a*/
      this->VoxelCaches[11] = 0; /*0x5f989c*/
      this->VoxelCaches[12] = 0; /*0x5f989f*/
      LOBYTE(this->VoxelCaches[13]) = 0; /*0x5f98a2*/
      this->VoxelCaches[14] = 0; /*0x5f98a5*/
    }
    if ( this != (ObjectTypeClass *)-640 ) /*0x5f98b0*/
    {
      this->VoxelCaches[15] = 0; /*0x5f98b2*/
      this->VoxelCaches[16] = 0; /*0x5f98b4*/
      this->VoxelCaches[17] = 0; /*0x5f98b7*/
      LOBYTE(this->VoxelCaches[18]) = 0; /*0x5f98ba*/
      this->VoxelCaches[19] = 0; /*0x5f98bd*/
    }
    this->MainVoxel[0] = 0; /*0x5f98c0*/
    this->TurretVoxel[0] = 0; /*0x5f98c6*/
    this->BarrelVoxel[0] = 0; /*0x5f98cc*/
    this->ChargerTurrets[0] = 0; /*0x5f98d2*/
    this->ChargerTurrets[1] = 0; /*0x5f98d8*/
    this->ChargerTurrets[2] = 0; /*0x5f98de*/
    v9 = &this->ChargerTurrets[4]; /*0x5f98e4*/
    v10 = 18; /*0x5f98ea*/
    do /*0x5f9904*/
    {
      *(v9 - 1) = 0; /*0x5f98ef*/
      *v9 = 0; /*0x5f98f2*/
      v9[35] = 0; /*0x5f98f4*/
      v9[36] = 0; /*0x5f98fa*/
      v9 += 2; /*0x5f9900*/
      --v10; /*0x5f9903*/
    }
    while ( v10 ); /*0x5f9904*/
    if ( this->AlphaImageFile[0] ) /*0x5f9906*/
    {
      _makepath(Buffer, 0, 0, this->AlphaImageFile, Ext); /*0x5f9923*/
      this->AlphaImage = (SHPStruct *)SearchMIXFile(Buffer, 0); /*0x5f9936*/
    }
    return 0; /*0x5f993c*/
  }
  return result; /*0x5f993e*/
}



// ==== 0x005F9950  AbstractClass::SaveLoad_PrefixWrapper  this=ObjectTypeClass  sig=csp ====
int __stdcall AbstractClass::SaveLoad_PrefixWrapper(AbstractClass *this, int a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, (int *)a2, a3); /*0x5f995f*/
  if ( result >= 0 ) /*0x5f9966*/
    return 0; /*0x5f9968*/
  return result; /*0x5f996a*/
}



// ==== 0x005F9970  ObjectTypeClass::GetSizeMaxWrapper  this=ObjectTypeClass  sig=csp ====
int __stdcall COMObject::GetSizeMaxWrapper(ObjectTypeClass *this, _DWORD *a2)
{
  int result; // eax

  result = ObjectClass::GetSizeMax((AbstractClass *)this); /*0x5f997a*/
  if ( result >= 0 ) /*0x5f9981*/
    return 0; /*0x5f9983*/
  return result; /*0x5f9985*/
}



// ==== 0x005F99E0  TechnoClass::ClearArrays  this=TechnoClass  sig=ida-proto ====
int TechnoClass_ClearArrays()
{
  int v0; // edi
  int v1; // esi
  int result; // eax

  v0 = 0; /*0x5f99e9*/
  if ( dword_AC1428 <= 0 ) /*0x5f99ed*/
  {
    dword_887468 = dword_887464; /*0x5f9acb*/
    return dword_887464; /*0x5f9ac5*/
  }
  else
  {
    do /*0x5f9aaf*/
    {
      v1 = *((_DWORD *)dword_AC141C + v0); /*0x5f99f9*/
      __3_YAXPAX_Z(*(void **)(v1 + 580)); /*0x5f9a03*/
      *(_DWORD *)(v1 + 580) = 0; /*0x5f9a08*/
      *(_DWORD *)(v1 + 584) = 0; /*0x5f9a0e*/
      *(_DWORD *)(v1 + 588) = 0; /*0x5f9a14*/
      *(_BYTE *)(v1 + 592) = 0; /*0x5f9a1a*/
      *(_DWORD *)(v1 + 596) = 0; /*0x5f9a20*/
      __3_YAXPAX_Z(*(void **)(v1 + 600)); /*0x5f9a2d*/
      *(_DWORD *)(v1 + 600) = 0; /*0x5f9a32*/
      *(_DWORD *)(v1 + 604) = 0; /*0x5f9a38*/
      *(_DWORD *)(v1 + 608) = 0; /*0x5f9a3e*/
      *(_BYTE *)(v1 + 612) = 0; /*0x5f9a44*/
      *(_DWORD *)(v1 + 616) = 0; /*0x5f9a4a*/
      __3_YAXPAX_Z(*(void **)(v1 + 620)); /*0x5f9a57*/
      *(_DWORD *)(v1 + 620) = 0; /*0x5f9a5c*/
      *(_DWORD *)(v1 + 624) = 0; /*0x5f9a62*/
      *(_DWORD *)(v1 + 628) = 0; /*0x5f9a68*/
      *(_BYTE *)(v1 + 632) = 0; /*0x5f9a6e*/
      *(_DWORD *)(v1 + 636) = 0; /*0x5f9a74*/
      __3_YAXPAX_Z(*(void **)(v1 + 640)); /*0x5f9a81*/
      *(_DWORD *)(v1 + 640) = 0; /*0x5f9a89*/
      *(_DWORD *)(v1 + 644) = 0; /*0x5f9a8f*/
      *(_DWORD *)(v1 + 648) = 0; /*0x5f9a95*/
      *(_BYTE *)(v1 + 652) = 0; /*0x5f9a9b*/
      *(_DWORD *)(v1 + 656) = 0; /*0x5f9aa1*/
      result = dword_AC1428; /*0x5f9aa7*/
      ++v0; /*0x5f9aac*/
    }
    while ( v0 < dword_AC1428 ); /*0x5f9aaf*/
    dword_887468 = dword_887464; /*0x5f9abd*/
  }
  return result; /*0x5f9abc*/
}



// ==== 0x005F9AE0  ObjectTypeClass::Destru_vt08  this=ObjectTypeClass  sig=csp ====
void *__thiscall ObjectTypeClass::Destru_vt08(ObjectTypeClass *this, char a2)
{
  ObjectTypeClass::Destruct((int)this); /*0x5f9ae3*/
  if ( (a2 & 1) != 0 ) /*0x5f9aed*/
    __3_YAXPAX_Z(this); /*0x5f9af0*/
  return this; /*0x5f9afa*/
}



// ==== 0x005F9B00  _DynamicVectorClass_PAVObjectTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_ObjectTypeClass::Destroy(_DynamicVectorClass_PAVObjectTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5f9b06*/
  this->m_10 = 0; /*0x5f9b09*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5f9b10*/
  {
    __3_YAXPAX_Z(v2); /*0x5f9b16*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5f9b1e*/
  }
  BYTE1(this->m_C) = 0; /*0x5f9b21*/
  this->m_8 = 0; /*0x5f9b24*/
}



// ==== 0x005F9B30  _DynamicVectorClass_PAVObjectTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ObjectTypeClass::GetItemIndex(
        _DynamicVectorClass_PAVObjectTypeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5f9b30*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5f9b45*/
  else
    return 0; /*0x5f9b37*/
}



// ==== 0x005F9B50  _VectorClass_PAVObjectTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ObjectTypeClass::Get(_VectorClass_PAVObjectTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5f9b5a*/
}



// ==== 0x005F9B60  ObjectTypeClass::FreeLoaderBuffer  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::FreeLoaderBuffer(ObjectTypeClass *this)
{
  __3_YAXPAX_Z(this->AbstractTypeClass); /*0x5f9b66*/
  this->AbstractTypeClass = 0; /*0x5f9b70*/
  this->? = 0; /*0x5f9b72*/
  this->? = 0; /*0x5f9b75*/
  LOBYTE(this->?) = 0; /*0x5f9b78*/
  this->? = 0; /*0x5f9b7b*/
  return 0; /*0x5f9b7e*/
}



// ==== 0x005F9B80  _VectorClass_PAVObjectTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ObjectTypeClass::Add(_VectorClass_PAVObjectTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5f9b82*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5f9b8d*/
  {
    v3 = 0; /*0x5f9b8f*/
    if ( m_8 <= 0 ) /*0x5f9b93*/
      return 1; /*0x5f9bb3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5f9b95*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5f9b9b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5f9ba4*/
    {
      ++v3; /*0x5f9ba6*/
      ++v4; /*0x5f9ba7*/
      if ( v3 >= m_8 ) /*0x5f9bac*/
        return 1; /*0x5f9bac*/
    }
  }
  return 0; /*0x5f9bae*/
}



// ==== 0x005F9BC0  _VectorClass_PAVObjectTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ObjectTypeClass::Release(_VectorClass_PAVObjectTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5f9bcc*/
  {
    LOBYTE(this->m_C) = 0; /*0x5f9bd6*/
    if ( a3 ) /*0x5f9bdc*/
      v4 = a3; /*0x5f9bf2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5f9bee*/
    LOBYTE(this->m_C) = 1; /*0x5f9bf6*/
    if ( v4 ) /*0x5f9bfa*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5f9c05*/
      {
        m_8 = this->m_8; /*0x5f9c0c*/
        if ( a2 < m_8 ) /*0x5f9c11*/
          m_8 = a2; /*0x5f9c13*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5f9c19*/
          ++i; /*0x5f9c1e*/
        if ( BYTE1(this->m_C) ) /*0x5f9c2b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5f9c36*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5f9c3e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5f9c47*/
      this->m_8 = a2; /*0x5f9c4f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5f9c52*/
      return 1; /*0x5f9c58*/
    }
    else
    {
      return 0; /*0x5f9bff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVObjectTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5f9c62*/
    return 1; /*0x5f9c68*/
  }
}



// ==== 0x005F9C70  _VectorClass_PAVObjectTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ObjectTypeClass::Remove(_VectorClass_PAVObjectTypeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5f9c7d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5f9c83*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5f9c8b*/
  }
  BYTE1(this->m_C) = 0; /*0x5f9c8e*/
  this->m_8 = 0; /*0x5f9c91*/
}



// ==== 0x005F9CA0  _VectorClass_PAVObjectTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ObjectTypeClass::GetSize(_VectorClass_PAVObjectTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5f9ca0*/
    return 0; /*0x5f9ca8*/
  m_8 = this->m_8; /*0x5f9cae*/
  result = 0; /*0x5f9cb1*/
  if ( m_8 <= 0 ) /*0x5f9cb5*/
    return -1; /*0x5f9ccc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5f9cbb*/
  {
    if ( ++result >= m_8 ) /*0x5f9cca*/
      return -1; /*0x5f9cca*/
  }
  return result; /*0x5f9caa*/
}



// ==== 0x005F9CE0  _VectorClass_PAVObjectTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ObjectTypeClass::LoadTypeData(_VectorClass_PAVObjectTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5f9ce0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5f9cf5*/
  else
    return 0; /*0x5f9ce7*/
}



// ==== 0x005F9D00  _DynamicVectorClass_PAVObjectTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_ObjectTypeClass::SetCapacity(
        _DynamicVectorClass_PAVObjectTypeClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5f9d0c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5f9d12*/
    if ( a3 ) /*0x5f9d18*/
      v4 = a3; /*0x5f9d2e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5f9d2a*/
    LOBYTE(this->m_C) = 1; /*0x5f9d32*/
    if ( !v4 ) /*0x5f9d36*/
      return 0; /*0x5f9daa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5f9d38*/
    {
      m_8 = this->m_8; /*0x5f9d3f*/
      if ( a2 < m_8 ) /*0x5f9d44*/
        m_8 = a2; /*0x5f9d46*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5f9d4c*/
        ++i; /*0x5f9d51*/
      if ( BYTE1(this->m_C) ) /*0x5f9d5e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5f9d69*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5f9d71*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5f9d7a*/
    this->m_8 = a2; /*0x5f9d82*/
    BYTE1(this->m_C) = a3 == 0; /*0x5f9d85*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVObjectTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5f9d8e*/
  }
  v7 = this->m_8; /*0x5f9d91*/
  if ( v7 < this->m_10 ) /*0x5f9d99*/
    this->m_10 = v7; /*0x5f9d9b*/
  return 1; /*0x5f9d9e*/
}



// ==== 0x005F9DB0  _DynamicVectorClass_PAVObjectTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_ObjectTypeClass::FindItemIndex(_DynamicVectorClass_PAVObjectTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5f9db0*/
  result = 0; /*0x5f9db3*/
  if ( m_10 <= 0 ) /*0x5f9db8*/
    return -1; /*0x5f9dcf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5f9dbe*/
  {
    if ( ++result >= m_10 ) /*0x5f9dcd*/
      return -1; /*0x5f9dcd*/
  }
  return result; /*0x5f9dd2*/
}



// ==== 0x005F9DE0  _VectorClass_PAVObjectTypeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_ObjectTypeClass::QueryInterface(_VectorClass_PAVObjectTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5f9de3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ObjectTypeClass *>::`vftable'; /*0x5f9de6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5f9df0*/
  {
    __3_YAXPAX_Z(v3); /*0x5f9df8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5f9e00*/
  }
  BYTE1(this->m_C) = 0; /*0x5f9e0b*/
  this->m_8 = 0; /*0x5f9e11*/
  if ( (a2 & 1) != 0 ) /*0x5f9e18*/
    __3_YAXPAX_Z(this); /*0x5f9e1b*/
  return this->__pad_0; /*0x5f9e25*/
}



// ==== 0x005F9E30  _DynamicVectorClass_PAVObjectTypeClass::Constructor_VectorClass_ObjectTypeClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_ObjectTypeClass::Constructor_VectorClass_ObjectTypeClass___(
        _DynamicVectorClass_PAVObjectTypeClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5f9e33*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ObjectTypeClass *>::`vftable'; /*0x5f9e36*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5f9e40*/
  {
    __3_YAXPAX_Z(v3); /*0x5f9e48*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5f9e50*/
  }
  BYTE1(this->m_C) = 0; /*0x5f9e5b*/
  this->m_8 = 0; /*0x5f9e61*/
  if ( (a2 & 1) != 0 ) /*0x5f9e68*/
    __3_YAXPAX_Z(this); /*0x5f9e6b*/
  return this->__pad_0; /*0x5f9e75*/
}



// ==== 0x005F9E80  Checksummer::HashString  this=Checksummer  sig=csp ====
int __thiscall Checksummer::HashString(char *Source)
{
  int v1; // ebp
  unsigned int v3; // kr04_4
  int v4; // ebx
  int v5; // esi
  int v6; // esi
  int v7; // ecx
  int i; // edx
  int v9; // ecx
  int j; // esi
  int k; // edi
  char v12; // si
  char v13; // dl
  char v14; // cl
  char v15; // cl
  char v16; // si
  char v17; // al
  int v18; // [esp+4h] [ebp-9Ch]
  char v19; // [esp+8h] [ebp-98h]
  unsigned int v20; // [esp+Ch] [ebp-94h] BYREF
  int v21; // [esp+10h] [ebp-90h]
  int v22; // [esp+14h] [ebp-8Ch]
  int v23; // [esp+18h] [ebp-88h]
  int v24; // [esp+1Ch] [ebp-84h]
  char Destination[128]; // [esp+20h] [ebp-80h] BYREF

  HIWORD(v1) = 0; /*0x5f9e89*/
  if ( !Source ) /*0x5f9e8d*/
    return 0; /*0x5f9e8f*/
  memset(Destination, 0xA5u, sizeof(Destination)); /*0x5f9eaa*/
  strncpy(Destination, Source, 0x80u); /*0x5f9eb7*/
  Destination[127] = 0; /*0x5f9ec5*/
  v3 = strlen(Destination) + 1; /*0x5f9ecd*/
  v4 = v3 - 1; /*0x5f9ed2*/
  v23 = v3 - 1; /*0x5f9ed9*/
  _strupr(Destination); /*0x5f9edd*/
  v5 = 0; /*0x5f9ee5*/
  if ( (int)(v3 - 1) > 0 ) /*0x5f9ee9*/
  {
    do /*0x5f9f11*/
    {
      if ( !isgraph(Destination[v5]) ) /*0x5f9ef1*/
        Destination[v5] = v5 % 26 + 65; /*0x5f9f0a*/
      ++v5; /*0x5f9f0e*/
    }
    while ( v5 < v4 ); /*0x5f9f11*/
  }
  if ( v4 < 16 || (v4 & 3) != 0 ) /*0x5f9f1b*/
  {
    v6 = 16; /*0x5f9f20*/
    if ( (((_BYTE)v4 + 3) & 0xFCu) > 0x10 ) /*0x5f9f2c*/
      v6 = ((_BYTE)v4 + 3) & 0xFC; /*0x5f9f2e*/
    v7 = v3 - 1; /*0x5f9f32*/
    if ( v4 < v6 ) /*0x5f9f34*/
    {
      do /*0x5f9f56*/
      {
        Destination[v7] = (v7 + (Destination[v7 - v4] ^ 0x3F)) % 26 + 65; /*0x5f9f4f*/
        ++v7; /*0x5f9f53*/
      }
      while ( v7 < v6 ); /*0x5f9f56*/
    }
    v4 = v7; /*0x5f9f58*/
    Destination[v7] = 0; /*0x5f9f5a*/
    v23 = v7; /*0x5f9f5f*/
  }
  v20 = 0; /*0x5f9f6d*/
  v21 = 0; /*0x5f9f71*/
  v22 = 0; /*0x5f9f75*/
  Checksummer::Add_Buffer(&v20, (unsigned __int8 *)Destination, v4); /*0x5f9f79*/
  _strrev(Destination); /*0x5f9f83*/
  v20 = 0; /*0x5f9f93*/
  v21 = 0; /*0x5f9f99*/
  v22 = 0; /*0x5f9f9d*/
  v18 = Checksummer::Add_Buffer(&v20, (unsigned __int8 *)Destination, v4); /*0x5f9fa6*/
  _strrev(Destination); /*0x5f9faf*/
  for ( i = 0; i < v4; v18 = (v9 >> 8) | ((unsigned __int8)v9 << 24) ) /*0x5f9fbb*/
  {
    v9 = (unsigned __int8)Destination[i] ^ v18; /*0x5f9fcd*/
    Destination[i++] = v18; /*0x5f9fd1*/
  }
  for ( j = 0; j < v4; ++j ) /*0x5f9ff1*/
    Destination[j] = ~byte_832C0C[j & 7] & (Destination[j] | byte_832C14[j & 7]); /*0x5fa00e*/
  for ( k = 0; k < v4; Destination[k - 1] = (v17 + v16) ^ v15 ) /*0x5fa01b*/
  {
    v12 = Destination[k]; /*0x5fa01d*/
    LOWORD(v1) = Destination[k + 2]; /*0x5fa029*/
    v13 = v12 * v12; /*0x5fa033*/
    v14 = Destination[k + 3]; /*0x5fa036*/
    v19 = 2 * Destination[k + 1]; /*0x5fa03c*/
    v24 = 2 * v1; /*0x5fa044*/
    v15 = v14 * v14; /*0x5fa051*/
    v16 = v12 * ((v12 * v12) ^ (2 * v1)); /*0x5fa058*/
    k += 4; /*0x5fa066*/
    v17 = v1 * (v16 + (v19 ^ v15)); /*0x5fa069*/
    Destination[k - 4] = v17 ^ v13; /*0x5fa070*/
    Destination[k - 3] = v17 ^ v24; /*0x5fa080*/
    v4 = v23; /*0x5fa086*/
    Destination[k - 2] = (v17 + v16) ^ v19; /*0x5fa08a*/
  }
  v20 = 0; /*0x5fa0a6*/
  v21 = 0; /*0x5fa0aa*/
  v22 = 0; /*0x5fa0ae*/
  return Checksummer::Add_Buffer(&v20, (unsigned __int8 *)Destination, v4); /*0x5f9e91*/
}



// ==== 0x005FA0D0  sub_5FA0D0  this=-  sig=ida-proto ====
void sub_5FA0D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5fa0dc*/
  dbl_AC14B0 = Math::Sqrt(v0 + v0); /*0x5fa0ee*/
}



// ==== 0x005FA100  sub_5FA100  this=-  sig=ida-proto ====
void sub_5FA100()
{
  dbl_AC1500 = dbl_AC14B0 / 60.0; /*0x5fa10c*/
}



// ==== 0x005FA120  sub_5FA120  this=-  sig=ida-proto ====
void sub_5FA120()
{
  dbl_AC14E8 = 1.0 / dbl_AC1500; /*0x5fa12c*/
}



// ==== 0x005FA140  sub_5FA140  this=-  sig=ida-proto ====
void sub_5FA140()
{
  dbl_AC14E0 = 0.0174532925199433 * 45.0; /*0x5fa14c*/
}



// ==== 0x005FA160  sub_5FA160  this=-  sig=ida-proto ====
void sub_5FA160()
{
  dbl_AC14B8 = 0.0174532925199433 * 60.0; /*0x5fa16c*/
}



// ==== 0x005FA180  sub_5FA180  this=-  sig=ida-proto ====
void sub_5FA180()
{
  dbl_AC1490 = 0.0174532925199433 * 90.0; /*0x5fa18c*/
}



// ==== 0x005FA1A0  sub_5FA1A0  this=-  sig=ida-proto ====
__int64 sub_5FA1A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC1490 - dbl_AC14B8); /*0x5fa1b2*/
  result = Math::RoundToInt(v0 * dbl_AC14B0 * 0.5); /*0x5fa1c6*/
  dword_AC1508 = result; /*0x5fa1cb*/
  return result; /*0x5fa1d0*/
}



// ==== 0x005FA1E0  sub_5FA1E0  this=-  sig=ida-proto ====
void sub_5FA1E0()
{
  dbl_AC14C0 = Math::ArcTan((double)dword_AC1508 * 0.00390625); /*0x5fa1f7*/
}



// ==== 0x005FA210  sub_5FA210  this=-  sig=ida-proto ====
void sub_5FA210()
{
  dbl_AC14D8 = Math::ArcTan((double)(2 * dword_AC1508) / dbl_AC14B0); /*0x5fa232*/
}



// ==== 0x005FA240  sub_5FA240  this=-  sig=ida-proto ====
__int64 sub_5FA240()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1508) + 0.5); /*0x5fa25b*/
  dword_AC14FC = result; /*0x5fa260*/
  return result; /*0x5fa266*/
}



// ==== 0x005FA270  sub_5FA270  this=-  sig=ida-proto ====
int sub_5FA270()
{
  word_AC14A8 = 0; /*0x5fa272*/
  word_AC14AA = 0; /*0x5fa278*/
  return 0; /*0x5fa27e*/
}



// ==== 0x005FA280  sub_5FA280  this=-  sig=ida-proto ====
int sub_5FA280()
{
  dword_AC14C8 = 0; /*0x5fa282*/
  dword_AC14CC = 0; /*0x5fa287*/
  dword_AC14D0 = 0; /*0x5fa28c*/
  return 0; /*0x5fa291*/
}



// ==== 0x005FA2A0  sub_5FA2A0  this=-  sig=ida-proto ====
int sub_5FA2A0()
{
  dword_AC14F8 = 0; /*0x5fa2a5*/
  dword_AC14F0 = 128; /*0x5fa2af*/
  dword_AC14F4 = 128; /*0x5fa2b4*/
  return 128; /*0x5fa2b9*/
}



// ==== 0x005FA2C0  sub_5FA2C0  this=-  sig=ida-proto ====
int sub_5FA2C0()
{
  dword_AC1498 = 0; /*0x5fa2c2*/
  dword_AC149C = 0; /*0x5fa2c7*/
  dword_AC14A0 = 0; /*0x5fa2cc*/
  dword_AC14A4 = 0; /*0x5fa2d1*/
  return 0; /*0x5fa2d6*/
}



// ==== 0x005FA430  ObjectClass::nullsub_29  this=ObjectClass  sig=csp ====
void nullsub_29(ObjectClass *this)
{
  ; /*0x5fa430*/
}



// ==== 0x005FA440  AudioSettings::SetFlag70  this=AudioSettings  sig=csp ====
void __thiscall AudioSettings::SetFlag70(AudioSettings *this, char a2)
{
  *((_BYTE *)this + 70) = a2; /*0x5fa444*/
  byte_A83D22 = a2; /*0x5fa447*/
  Debug::Log(); /*0x5fa463*/
}



// ==== 0x005FA470  AudioSettings::SetFlag68  this=AudioSettings  sig=csp ====
void __thiscall AudioSettings::SetFlag68(AudioSettings *this, char a2)
{
  *((_BYTE *)this + 68) = a2; /*0x5fa474*/
  byte_A83D20 = a2; /*0x5fa477*/
  Debug::Log(); /*0x5fa493*/
}



// ==== 0x005FA4A0  Audio::SetScoreVolume  this=Audio  sig=csp ====
int __thiscall Audio::SetScoreVolume(int *this, float a2, int a3)
{
  double v4; // st7
  int v5; // eax
  int v6; // eax

  if ( a2 >= 1.0 ) /*0x5fa4b2*/
    v4 = 1.0; /*0x5fa4ba*/
  else
    v4 = a2; /*0x5fa4b4*/
  *((float *)this + 16) = v4; /*0x5fa4c0*/
  LOWORD(v5) = Math::RoundToInt(v4 * 16384.0); /*0x5fa4c9*/
  EndBufferMixer((int *)g_MixerChannel_Theme, v5); /*0x5fa4d6*/
  LOWORD(v6) = Math::RoundToInt(*((float *)this + 16) * 255.0); /*0x5fa4e4*/
  TechnoTypeClass::CheckFlag(&unk_A83D10, v6); /*0x5fa4ef*/
  return Debug::Log(); /*0x5fa50b*/
}



// ==== 0x005FA510  Audio::SetSoundVolume  this=Audio  sig=csp ====
int __thiscall Audio::SetSoundVolume(int *this, float a2, char a3)
{
  double v3; // st7
  int v4; // eax

  if ( a2 >= 1.0 ) /*0x5fa522*/
    v3 = 1.0; /*0x5fa52a*/
  else
    v3 = a2; /*0x5fa524*/
  *((float *)this + 14) = v3; /*0x5fa530*/
  LOWORD(v4) = Math::RoundToInt(v3 * 16384.0); /*0x5fa539*/
  EndBufferMixer((int *)g_MixerChannel_Score, v4); /*0x5fa546*/
  if ( a3 ) /*0x5fa551*/
    PlayVocClass(*(_DWORD *)&dword_8871E0->__pad_704[12], 0x2000, 1.0, 0); /*0x5fa56a*/
  return Debug::Log(); /*0x5fa586*/
}



// ==== 0x005FA590  Audio::SetVoiceVolume  this=Audio  sig=csp ====
int __thiscall Audio::SetVoiceVolume(int *this, float a2, char a3)
{
  double v4; // st7
  int v5; // eax
  int v6; // eax

  if ( a2 >= 1.0 ) /*0x5fa5a2*/
    v4 = 1.0; /*0x5fa5aa*/
  else
    v4 = a2; /*0x5fa5a4*/
  *((float *)this + 15) = v4; /*0x5fa5b0*/
  LOWORD(v5) = Math::RoundToInt(v4 * 255.0); /*0x5fa5b9*/
  ThemeClass::GetField(v5); /*0x5fa5c0*/
  LOWORD(v6) = Math::RoundToInt(*((float *)this + 15) * 16384.0); /*0x5fa5ce*/
  EndBufferMixer((int *)g_MixerChannel_Voice, v6); /*0x5fa5db*/
  if ( a3 ) /*0x5fa5e6*/
    PlayVocClass(*(_DWORD *)&dword_8871E0->__pad_704[12], 0x2000, *((float *)this + 15), 0); /*0x5fa5ff*/
  return Debug::Log(); /*0x5fa61b*/
}



// ==== 0x005FA620  GameSettings::Read  this=GameSettings  sig=csp ====
int __thiscall GameSettings::Read(GameSettings *this)
{
  double v1; // st7
  int Int_Overwrite; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  GameSettings Bool_Overwrite; // al
  bool v9; // al
  GameSettings v10; // al
  int v13; // eax
  int v16; // eax
  int v17; // eax
  int v20; // eax
  int v21; // eax
  GameSettings v22; // al
  GameSettings v23; // al
  wchar_t *v24; // eax
  bool v25; // zf
  wchar_t *v26; // eax
  wchar_t *v27; // eax
  int v28; // eax
  int v29; // eax
  __int16 v30; // ax
  int v31; // ecx
  wchar_t **v33; // [esp-4h] [ebp-1ACh]
  double v34; // [esp+0h] [ebp-1A8h]
  double v36; // [esp+0h] [ebp-1A8h]
  double v38; // [esp+0h] [ebp-1A8h]
  int v40; // [esp+4h] [ebp-1A4h]
  wchar_t **v41; // [esp+8h] [ebp-1A0h]
  wchar_t String[200]; // [esp+18h] [ebp-190h] BYREF

  _ESI = this; /*0x5fa62f*/
  Debug::Log(); /*0x5fa636*/
  *(_DWORD *)_ESI = INIClass::ReadInt_Overwrite( /*0x5fa65b*/
                      (bool *)&DSurface_ViewBounds.__pad_FC[36],
                      (unsigned __int8 *)g_INI_Key_Options,
                      (unsigned __int8 *)g_INI_Key_GameSpeed,
                      *(_DWORD *)_ESI);
  Debug::Log(); /*0x5fa65d*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x5fa678*/
                    (bool *)&DSurface_ViewBounds.__pad_FC[36],
                    (unsigned __int8 *)g_INI_Key_Options,
                    (unsigned __int8 *)aDifficulty,
                    *(_DWORD *)&_ESI[4]);
  *(_DWORD *)&_ESI[4] = Int_Overwrite; /*0x5fa680*/
  if ( Int_Overwrite >= 4 ) /*0x5fa683*/
    Int_Overwrite = 4; /*0x5fa685*/
  *(_DWORD *)&_ESI[4] = Int_Overwrite; /*0x5fa68c*/
  *(_DWORD *)&_ESI[4] = Int_Overwrite <= 0 ? 0 : Int_Overwrite;
  Debug::Log(); /*0x5fa6a0*/
  v4 = INIClass::ReadInt_Overwrite( /*0x5fa6bb*/
         (bool *)&DSurface_ViewBounds.__pad_FC[36],
         (unsigned __int8 *)g_INI_Key_Options,
         (unsigned __int8 *)aCampdifficulty,
         *(_DWORD *)&_ESI[8]);
  *(_DWORD *)&_ESI[8] = v4; /*0x5fa6c3*/
  if ( v4 >= 2 ) /*0x5fa6c6*/
    v4 = 2; /*0x5fa6c8*/
  *(_DWORD *)&_ESI[8] = v4; /*0x5fa6cf*/
  *(_DWORD *)&_ESI[8] = v4 <= 0 ? 0 : v4;
  Debug::Log(); /*0x5fa6e3*/
  *(_DWORD *)&_ESI[12] = INIClass::ReadInt_Overwrite( /*0x5fa709*/
                           (bool *)&DSurface_ViewBounds.__pad_FC[36],
                           (unsigned __int8 *)g_INI_Key_Options,
                           (unsigned __int8 *)aScrollmethod,
                           *(_DWORD *)&_ESI[12]);
  Debug::Log(); /*0x5fa70c*/
  *(_DWORD *)&_ESI[16] = INIClass::ReadInt_Overwrite( /*0x5fa732*/
                           (bool *)&DSurface_ViewBounds.__pad_FC[36],
                           (unsigned __int8 *)g_INI_Key_Options,
                           (unsigned __int8 *)aScrollrate,
                           *(_DWORD *)&_ESI[16]);
  Debug::Log(); /*0x5fa735*/
  _ESI[20] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa75a*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             (unsigned __int8 *)g_INI_Key_Options,
                             (unsigned __int8 *)aAutoscroll,
                             *(_BYTE *)&_ESI[20]);
  Debug::Log(); /*0x5fa771*/
  v5 = INIClass::ReadInt_Overwrite( /*0x5fa78c*/
         (bool *)&DSurface_ViewBounds.__pad_FC[36],
         (unsigned __int8 *)g_INI_Key_Options,
         (unsigned __int8 *)g_INI_Key_DetailLevel,
         *(_DWORD *)&_ESI[24]);
  *(_DWORD *)&_ESI[24] = v5; /*0x5fa794*/
  if ( v5 >= 2 ) /*0x5fa797*/
    v5 = 2; /*0x5fa799*/
  *(_DWORD *)&_ESI[24] = v5; /*0x5fa7a0*/
  *(_DWORD *)&_ESI[24] = v5 <= 0 ? 0 : v5;
  Debug::Log(); /*0x5fa7b4*/
  _ESI[28] = (GameSettings)1; /*0x5fa7c3*/
  Debug::Log(); /*0x5fa7c6*/
  _ESI[29] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa7e6*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             (unsigned __int8 *)g_INI_Key_Options,
                             (unsigned __int8 *)aSidebarcameote,
                             *(_BYTE *)&_ESI[29]);
  Debug::Log(); /*0x5fa7fd*/
  _ESI[30] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa81d*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             (unsigned __int8 *)g_INI_Key_Options,
                             (unsigned __int8 *)aUnitactionline,
                             *(_BYTE *)&_ESI[30]);
  Debug::Log(); /*0x5fa834*/
  _ESI[31] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa854*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             (unsigned __int8 *)g_INI_Key_Options,
                             (unsigned __int8 *)aShowhidden,
                             *(_BYTE *)&_ESI[31]);
  Debug::Log(); /*0x5fa86b*/
  _ESI[32] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa88b*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             (unsigned __int8 *)g_INI_Key_Options,
                             (unsigned __int8 *)aTooltips,
                             *(_BYTE *)&_ESI[32]);
  Debug::Log(); /*0x5fa8a2*/
  v6 = INIClass::ReadInt_Overwrite( /*0x5fa8bd*/
         (bool *)&DSurface_ViewBounds.__pad_FC[36],
         g_INI_Key_Video,
         (unsigned __int8 *)g_INI_Key_ScreenWidth,
         *(_DWORD *)&_ESI[36]);
  v7 = *(_DWORD *)&_ESI[40]; /*0x5fa8c2*/
  *(_DWORD *)&_ESI[36] = v6; /*0x5fa8c5*/
  *(_DWORD *)&_ESI[40] = INIClass::ReadInt_Overwrite( /*0x5fa8e7*/
                           (bool *)&DSurface_ViewBounds.__pad_FC[36],
                           g_INI_Key_Video,
                           (unsigned __int8 *)g_INI_Key_ScreenHeight,
                           v7);
  Debug::Log(); /*0x5fa8ea*/
  Bool_Overwrite = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa905*/
                                   (int *)&DSurface_ViewBounds.__pad_FC[36],
                                   g_INI_Key_Video,
                                   (unsigned __int8 *)aStretchmovies,
                                   *(_BYTE *)&_ESI[52]);
  _ESI[52] = Bool_Overwrite; /*0x5fa90c*/
  v9 = Bool_Overwrite == 1 && g_DDraw_AllowStretchBlits == 1; /*0x5fa919*/
  _ESI[52] = (GameSettings)v9; /*0x5fa91f*/
  Debug::Log(); /*0x5fa936*/
  _ESI[53] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa956*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             g_INI_Key_Video,
                             aAllowhiresmode,
                             *(_BYTE *)&_ESI[53]);
  Debug::Log(); /*0x5fa96d*/
  stru_A8EB00.?[383] = INIClass::ReadBool_Overwrite( /*0x5fa990*/
                         (int *)&DSurface_ViewBounds.__pad_FC[36],
                         g_INI_Key_Video,
                         aAllowmodetoggl,
                         stru_A8EB00.?[383]);
  v10 = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa9a8*/
                        (int *)&DSurface_ViewBounds.__pad_FC[36],
                        g_INI_Key_Video,
                        aAllowvramsideb,
                        *(_BYTE *)&_ESI[54]);
  __asm { fld dword ptr [esi+38h] } /*0x5fa9ad*/
  _ESI[54] = v10; /*0x5fa9b8*/
  __asm { fstp [esp+1A8h+var_1A8]; double } /*0x5fa9bb*/
  INIClass::ReadDouble_Overwrite( /*0x5fa9c8*/
    (double *)&DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Audio,
    (unsigned __int8 *)aSoundvolume,
    v34);
  __asm /*0x5fa9cd*/
  {
    fcom ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x100) == 0 ) /*0x5fa9d8*/
  {
    __asm /*0x5fa9da*/
    {
      fstp st
      fld ds:dbl_7E1718
    }
  }
  __asm { fst dword ptr [esi+38h] } /*0x5fa9e2*/
  *(float *)&_ESI[56] = _ET1; /*0x5fa9e2*/
  __asm { fmul ds:flt_7EF38C } /*0x5fa9e5*/
  LOWORD(v13) = Math::RoundToInt(v1); /*0x5fa9eb*/
  EndBufferMixer((int *)g_MixerChannel_Score, v13); /*0x5fa9f8*/
  __asm { fld dword ptr [esi+38h] } /*0x5fa9fd*/
  __asm { fstp [esp+1A8h+var_1A8] }
  Debug::Log(); /*0x5faa0b*/
  __asm { fld dword ptr [esi+3Ch] } /*0x5faa10*/
  __asm { fstp [esp+1A8h+var_1A8]; double }
  INIClass::ReadDouble_Overwrite( /*0x5faa28*/
    (double *)&DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Audio,
    (unsigned __int8 *)aVoicevolume,
    v36);
  __asm /*0x5faa2d*/
  {
    fcom ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x100) == 0 ) /*0x5faa38*/
  {
    __asm /*0x5faa3a*/
    {
      fstp st
      fld ds:dbl_7E1718
    }
  }
  __asm { fst dword ptr [esi+3Ch] } /*0x5faa42*/
  *(float *)&_ESI[60] = _ET1; /*0x5faa42*/
  __asm { fmul ds:dbl_7EAA50 } /*0x5faa45*/
  LOWORD(v16) = Math::RoundToInt(v1); /*0x5faa4b*/
  ThemeClass::GetField(v16); /*0x5faa52*/
  __asm /*0x5faa57*/
  {
    fld dword ptr [esi+3Ch]
    fmul ds:flt_7EF38C
  }
  LOWORD(v17) = Math::RoundToInt(v1); /*0x5faa60*/
  EndBufferMixer((int *)g_MixerChannel_Voice, v17); /*0x5faa6d*/
  __asm { fld dword ptr [esi+3Ch] } /*0x5faa72*/
  __asm { fstp [esp+1A8h+var_1A8] }
  Debug::Log(); /*0x5faa80*/
  __asm { fld dword ptr [esi+40h] } /*0x5faa85*/
  __asm { fstp [esp+1A8h+var_1A8]; double }
  INIClass::ReadDouble_Overwrite( /*0x5faa9d*/
    (double *)&DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Audio,
    (unsigned __int8 *)aScorevolume,
    v38);
  __asm /*0x5faaa2*/
  {
    fcom ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x100) == 0 ) /*0x5faaad*/
  {
    __asm /*0x5faaaf*/
    {
      fstp st
      fld ds:dbl_7E1718
    }
  }
  __asm { fst dword ptr [esi+40h] } /*0x5faab7*/
  *(float *)&_ESI[64] = _ET1; /*0x5faab7*/
  __asm { fmul ds:flt_7EF38C } /*0x5faaba*/
  LOWORD(v20) = Math::RoundToInt(v1); /*0x5faac0*/
  EndBufferMixer((int *)g_MixerChannel_Theme, v20); /*0x5faacd*/
  __asm /*0x5faad2*/
  {
    fld dword ptr [esi+40h]
    fmul ds:dbl_7EAA50
  }
  LOWORD(v21) = Math::RoundToInt(v1); /*0x5faadb*/
  TechnoTypeClass::CheckFlag((TechnoTypeClass *)&unk_A83D10, v21); /*0x5faae6*/
  __asm { fld dword ptr [esi+40h] } /*0x5faaeb*/
  __asm { fstp [esp+1A8h+var_1A8] }
  Debug::Log(); /*0x5faaf9*/
  v22 = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fab14*/
                        (int *)&DSurface_ViewBounds.__pad_FC[36],
                        g_INI_Key_Audio,
                        (unsigned __int8 *)aIsscorerepeat,
                        *(_BYTE *)&_ESI[68]);
  _ESI[68] = v22; /*0x5fab19*/
  byte_A83D20 = v22; /*0x5fab1c*/
  Debug::Log(); /*0x5fab38*/
  v23 = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fab53*/
                        (int *)&DSurface_ViewBounds.__pad_FC[36],
                        g_INI_Key_Audio,
                        (unsigned __int8 *)aIsscoreshuffle,
                        *(_BYTE *)&_ESI[70]);
  _ESI[70] = v23; /*0x5fab58*/
  byte_A83D22 = v23; /*0x5fab5b*/
  Debug::Log(); /*0x5fab77*/
  _ESI[69] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fabb8*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             g_INI_Key_Audio,
                             (unsigned __int8 *)aIngamemusic,
                             *(_BYTE *)&_ESI[69]);
  *(_DWORD *)&_ESI[76] = -1; /*0x5fabbb*/
  *(_DWORD *)&_ESI[80] = -1; /*0x5fabbe*/
  INIClass::ParseValue_Wide( /*0x5fabc1*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Network,
    (unsigned __int8 *)aNetid,
    &g_TypeClass_DefaultString,
    String,
    0xC8u);
  if ( String[0] ) /*0x5fabcc*/
  {
    v24 = String; /*0x5fabce*/
    do /*0x5fabe8*/
    {
      v25 = *v24 == 0xFFFFu; /*0x5fabd8*/
      *v24 = ~*v24; /*0x5fabdb*/
      if ( v25 ) /*0x5fabde*/
        *v24 = -1; /*0x5fabe0*/
      ++v24; /*0x5fabe5*/
    }
    while ( *v24 ); /*0x5fabe8*/
    v26 = wcstok(String, asc_82083C, v41); /*0x5fabf8*/
    if ( v26 ) /*0x5fac02*/
    {
      *(_DWORD *)&_ESI[76] = wcstol(v26, 0, 10) - 1; /*0x5fac16*/
      v27 = wcstok(0, asc_82083C, v33); /*0x5fac19*/
      if ( v27 ) /*0x5fac23*/
        *(_DWORD *)&_ESI[80] = wcstol(v27, 0, 10) - 1; /*0x5fac33*/
    }
  }
  v28 = *(_DWORD *)&_ESI[76]; /*0x5fac36*/
  if ( v28 < -1 || v28 >= 8 ) /*0x5fac40*/
    *(_DWORD *)&_ESI[76] = -1; /*0x5fac42*/
  v29 = *(_DWORD *)&_ESI[80]; /*0x5fac45*/
  if ( v29 < -1 || v29 >= 8 ) /*0x5fac4f*/
    *(_DWORD *)&_ESI[80] = -1; /*0x5fac51*/
  *(_WORD *)&_ESI[72] = INIClass::ReadInt_Overwrite( /*0x5fac6f*/
                          (bool *)&DSurface_ViewBounds.__pad_FC[36],
                          g_INI_Key_Audio,
                          (unsigned __int8 *)aSoundlatency,
                          *(unsigned __int16 *)&_ESI[72]);
  Debug::Log(); /*0x5fac7e*/
  v30 = INIClass::ReadInt_Overwrite( /*0x5fac9c*/
          (bool *)&DSurface_ViewBounds.__pad_FC[36],
          g_INI_Key_Network,
          (unsigned __int8 *)g_INI_Key_Socket,
          *(unsigned __int16 *)&_ESI[74]);
  v40 = *(_DWORD *)&_ESI[84]; /*0x5faca9*/
  *(_WORD *)&_ESI[74] = v30; /*0x5facb4*/
  *(_DWORD *)&_ESI[84] = INIClass::ReadInt_Overwrite( /*0x5facbd*/
                           (bool *)&DSurface_ViewBounds.__pad_FC[36],
                           g_INI_Key_Network,
                           (unsigned __int8 *)aNetcard,
                           v40);
  INIClass::GetString( /*0x5facda*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Network,
    (unsigned __int8 *)g_INI_Key_DestNet,
    &g_INI_DefaultBuffer,
    (char *)&_ESI[88],
    64);
  Debug::Log(); /*0x5face4*/
  LOBYTE(v31) = _ESI[29]; /*0x5face9*/
  nullsub_36(v31); /*0x5facf5*/
  SetGlobalFlag(*(_BYTE *)&_ESI[30]); /*0x5facfd*/
  return (int)GameSettings::ParseNetworkAddress((const char *)_ESI); /*0x5fad09*/
}



// ==== 0x005FAD10  ScenarioClass::SaveGameOptions  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::SaveGameOptions(ScenarioClass *this)
{
  wchar_t *i; // eax
  bool v3; // zf
  CCFileClass v5; // [esp+Ch] [ebp-1FCh] BYREF
  int v6[3]; // [esp+64h] [ebp-1A4h] BYREF
  int v7; // [esp+70h] [ebp-198h]
  wchar_t Buffer[200]; // [esp+78h] [ebp-190h] BYREF

  CCFileClass::Construct(&v5, (char *)&stru_8263E0.MaxFDelta); /*0x5fad22*/
  Debug::Log(); /*0x5fad2c*/
  INIClass::SetInt( /*0x5fad48*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    g_INI_Key_GameSpeed,
    this->nextScenario[0],
    0);
  INIClass::SetInt( /*0x5fad62*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    aDifficulty,
    this->nextScenario[1],
    0);
  INIClass::SetInt( /*0x5fad7c*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    aCampdifficulty,
    this->nextScenario[2],
    0);
  INIClass::SetInt( /*0x5fad96*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    aScrollmethod,
    this->nextScenario[3],
    0);
  INIClass::SetInt( /*0x5fadb0*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    aScrollrate,
    this->nextScenario[4],
    0);
  INIClass::SetBool( /*0x5fadc8*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    aAutoscroll,
    this->nextScenario[5]);
  INIClass::SetInt( /*0x5fade2*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    g_INI_Key_DetailLevel,
    this->nextScenario[6],
    0);
  INIClass::SetBool( /*0x5fadfa*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    aSidebarcameote,
    BYTE1(this->nextScenario[7]));
  INIClass::SetBool( /*0x5fae12*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    aUnitactionline,
    BYTE2(this->nextScenario[7]));
  INIClass::SetBool( /*0x5fae2a*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    aShowhidden,
    HIBYTE(this->nextScenario[7]));
  INIClass::SetBool( /*0x5fae42*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)g_INI_Key_Options,
    aTooltips,
    this->nextScenario[8]);
  INIClass::SetInt(&DSurface_ViewBounds.__pad_FC[36], g_INI_Key_Video, g_INI_Key_ScreenWidth, this->nextScenario[9], 0); /*0x5fae5c*/
  INIClass::SetInt( /*0x5fae76*/
    &DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Video,
    g_INI_Key_ScreenHeight,
    this->nextScenario[10],
    0);
  INIClass::SetBool(&DSurface_ViewBounds.__pad_FC[36], g_INI_Key_Video, aStretchmovies, this->nextScenario[13]); /*0x5fae8e*/
  INIClass::SetDouble( /*0x5faeab*/
    &DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Audio,
    aSoundvolume,
    *(float *)&this->nextScenario[14]);
  INIClass::SetDouble( /*0x5faec8*/
    &DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Audio,
    aVoicevolume,
    *(float *)&this->nextScenario[15]);
  INIClass::SetDouble( /*0x5faee5*/
    &DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Audio,
    aScorevolume,
    *(float *)&this->nextScenario[16]);
  INIClass::SetBool(&DSurface_ViewBounds.__pad_FC[36], g_INI_Key_Audio, aIsscorerepeat, this->nextScenario[17]); /*0x5faefd*/
  INIClass::SetBool(&DSurface_ViewBounds.__pad_FC[36], g_INI_Key_Audio, aIsscoreshuffle, BYTE2(this->nextScenario[17])); /*0x5faf15*/
  INIClass::SetInt(&DSurface_ViewBounds.__pad_FC[36], g_INI_Key_Audio, aSoundlatency, LOWORD(this->nextScenario[18]), 0); /*0x5faf32*/
  INIClass::SetBool(&DSurface_ViewBounds.__pad_FC[36], g_INI_Key_Audio, aIngamemusic, BYTE1(this->nextScenario[17])); /*0x5faf4a*/
  INIClass::SetInt( /*0x5faf67*/
    &DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Network,
    g_INI_Key_Socket,
    HIWORD(this->nextScenario[18]),
    0);
  INIClass::SetInt(&DSurface_ViewBounds.__pad_FC[36], g_INI_Key_Network, aNetcard, this->nextScenario[21], 0); /*0x5faf81*/
  INIClass::SetString( /*0x5faf99*/
    &DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Network,
    g_INI_Key_DestNet,
    (char *)&this->nextScenario[22]);
  swprintf( /*0x5fafb2*/
    Buffer,
    (const size_t)&off_833328,
    (const wchar_t *const)(this->nextScenario[19] + 1),
    this->nextScenario[20] + 1);
  for ( i = Buffer; *i; ++i ) /*0x5fafc4*/
  {
    v3 = *i == 0xFFFFu; /*0x5fafcc*/
    *i = ~*i; /*0x5fafcf*/
    if ( v3 ) /*0x5fafd2*/
      *i = -1; /*0x5fafd4*/
  }
  INIClass::SetWideAsHex(&DSurface_ViewBounds.__pad_FC[36], g_INI_Key_Network, aNetid, Buffer); /*0x5faff6*/
  INIClass::WriteDigest((INIClass *)&DSurface_ViewBounds.__pad_FC[36], (int)&v5, 0); /*0x5fb007*/
  GameSettings::ParseNetworkAddress((const char *)this); /*0x5fb00e*/
  *(_DWORD *)v5.CDFileClass = &CCFileClass::`vftable'; /*0x5fb017*/
  v7 = 0; /*0x5fb01f*/
  Vector::Clear((int)v6); /*0x5fb027*/
  *(_DWORD *)v5.CDFileClass = &off_7E1668; /*0x5fb030*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x5fb03d*/
}



// ==== 0x005FB050  GameSettings::ParseNetworkAddress  this=GameSettings  sig=csp ====
char *__thiscall sub_5FB050(const char *this)
{
  unsigned __int16 v2; // ax
  const char *v3; // esi
  char *result; // eax
  size_t v5; // kr04_4
  char *v6; // edx
  int v7; // esi
  int *v8; // eax
  char v9; // [esp+8h] [ebp-1Ch] BYREF
  int v10; // [esp+Ch] [ebp-18h] BYREF
  int v11; // [esp+10h] [ebp-14h] BYREF
  __int16 v12; // [esp+14h] [ebp-10h]
  _DWORD v13[3]; // [esp+18h] [ebp-Ch] BYREF

  v2 = this->q025; /*0x5fb057*/
  if ( v2 == 0xFFFF ) /*0x5fb05f*/
  {
    Network::GetField(unk_A8E9C0, 34835); /*0x5fb066*/
  }
  else if ( v2 < 0x4000u ) /*0x5fb06c*/
  {
    Network::GetField(unk_A8E9C0, v2 + 0x4000); /*0x5fb079*/
  }
  v3 = this + 88; /*0x5fb07e*/
  result = 0; /*0x5fb086*/
  v5 = strlen(v3) + 1; /*0x5fb088*/
  if ( v5 != 1 ) /*0x5fb08d*/
  {
    v6 = (char *)__2_YAPAXI_Z(v5); /*0x5fb09a*/
    strcpy(v6, v3); /*0x5fb0b8*/
    v7 = 0; /*0x5fb0c1*/
    result = strtok(v6, asc_826598); /*0x5fb0c3*/
    if ( result ) /*0x5fb0cd*/
    {
      do /*0x5fb10f*/
      {
        sscanf(result, "%x", &v9); /*0x5fb0de*/
        *((_BYTE *)&v10 + v7++) = v9; /*0x5fb0ef*/
        result = strtok(0, asc_826598); /*0x5fb105*/
      }
      while ( result ); /*0x5fb10f*/
      if ( v7 >= 4 ) /*0x5fb114*/
      {
        v11 = -1; /*0x5fb11a*/
        v12 = -1; /*0x5fb126*/
        dword_A8D5FC = 1; /*0x5fb131*/
        v8 = NetworkAddress::Assign(v13, &v10, (int)&v11, 0); /*0x5fb13b*/
        stru_A8D600 = *v8; /*0x5fb142*/
        dword_A8D604 = v8[1]; /*0x5fb14b*/
        result = (char *)v8[2]; /*0x5fb151*/
        dword_A8D608 = (int)result; /*0x5fb154*/
      }
    }
  }
  return result; /*0x5fb159*/
}



// ==== 0x005FB160  AudioOptionsClass::ApplySettings  this=AudioOptionsClass  sig=csp ====
void __thiscall AudioOptionsClass::ApplySettings(AudioOptionsClass *this)
{
  double v2; // st7
  int v3; // eax
  double v4; // st7
  int v5; // eax
  int v6; // eax
  double v7; // st7
  int v8; // eax
  int v9; // eax
  int v10; // eax

  v2 = *((float *)this + 14); /*0x5fb163*/
  if ( v2 >= 1.0 ) /*0x5fb171*/
    v2 = 1.0; /*0x5fb175*/
  *((float *)this + 14) = v2; /*0x5fb17b*/
  LOWORD(v3) = Math::RoundToInt(v2 * 16384.0); /*0x5fb184*/
  EndBufferMixer((int *)g_MixerChannel_Score, v3); /*0x5fb191*/
  Debug::Log(); /*0x5fb1a4*/
  v4 = *((float *)this + 15); /*0x5fb1a9*/
  if ( v4 >= 1.0 ) /*0x5fb1ba*/
    v4 = 1.0; /*0x5fb1be*/
  *((float *)this + 15) = v4; /*0x5fb1c4*/
  LOWORD(v5) = Math::RoundToInt(v4 * 255.0); /*0x5fb1cd*/
  ThemeClass::GetField(v5); /*0x5fb1d4*/
  LOWORD(v6) = Math::RoundToInt(*((float *)this + 15) * 16384.0); /*0x5fb1e2*/
  EndBufferMixer((int *)g_MixerChannel_Voice, v6); /*0x5fb1ef*/
  Debug::Log(); /*0x5fb202*/
  v7 = *((float *)this + 16); /*0x5fb207*/
  if ( v7 >= 1.0 ) /*0x5fb218*/
    v7 = 1.0; /*0x5fb21c*/
  *((float *)this + 16) = v7; /*0x5fb222*/
  LOWORD(v8) = Math::RoundToInt(v7 * 16384.0); /*0x5fb22b*/
  EndBufferMixer((int *)g_MixerChannel_Theme, v8); /*0x5fb238*/
  LOWORD(v9) = Math::RoundToInt(*((float *)this + 16) * 255.0); /*0x5fb246*/
  TechnoTypeClass::CheckFlag((TechnoTypeClass *)&unk_A83D10, v9); /*0x5fb251*/
  Debug::Log(); /*0x5fb264*/
  byte_A83D20 = *((_BYTE *)this + 68); /*0x5fb26f*/
  Debug::Log(); /*0x5fb28b*/
  byte_A83D22 = *((_BYTE *)this + 70); /*0x5fb296*/
  v10 = Debug::Log(); /*0x5fb2b2*/
  LOBYTE(v10) = *((_BYTE *)this + 29); /*0x5fb2b7*/
  nullsub_36(v10); /*0x5fb2c3*/
  SetGlobalFlag(*((_BYTE *)this + 30)); /*0x5fb2cc*/
}



// ==== 0x005FB2E0  Rules::GetProductionTimeMult  this=Rules  sig=csp ====
char *__thiscall Rules::GetProductionTimeMult(Rules *this, int a2)
{
  char *result; // eax
  int v3; // ecx

  result = (char *)a2; /*0x5fb2e0*/
  if ( a2 ) /*0x5fb2e6*/
  {
    v3 = *(_DWORD *)this->__pad_0; /*0x5fb2e8*/
    if ( a2 >= 5 ) /*0x5fb2ed*/
      return (char *)(8 * a2 / (v3 + 1)); /*0x5fb301*/
    else
      return (&(&off_832CEC)[8 * a2])[v3]; /*0x5fb2f2*/
  }
  return result; /*0x5fb2f9*/
}



// ==== 0x005FB320  HotkeyOptions::DlgProc  this=HotkeyOptions  sig=csp ====
int __stdcall HotkeyOptions::DlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  HWND v5; // edi
  LRESULT v6; // eax
  LRESULT v7; // edi
  HWND v8; // ebx
  LPARAM v9; // eax
  signed int v10; // eax
  int v11; // ebx
  char v12; // dl
  void *v13; // ecx
  char v14; // al
  __int16 v15; // bx
  HWND v16; // eax
  HWND v17; // eax
  HWND (__stdcall *v18)(HWND, int); // edi
  HWND v19; // ebx
  HWND v20; // ebx
  LPARAM v21; // edi
  const wchar_t *v22; // eax
  LPARAM v23; // eax
  LRESULT v24; // eax
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // edi
  HWND v28; // eax
  HWND v29; // eax
  __int16 v30; // ax
  int v31; // edi
  size_t v32; // eax
  _DWORD *v33; // edx
  int v34; // esi
  _DWORD *v35; // ebx
  int v36; // ecx
  int v37; // ecx
  _DWORD *v38; // ebx
  int v39; // esi
  _DWORD *v40; // eax
  wchar_t *v41; // esi
  HWND v42; // eax
  size_t v43; // eax
  int m; // esi
  char *v45; // eax
  HWND v46; // edi
  LRESULT v47; // eax
 ... [22198 chars total]



// ==== 0x005FBEF0  ShowHotkeyOptionsDialog  this=-  sig=ida-proto ====
char sub_5FBEF0()
{
  HWND Dialog; // esi
  int v1; // ecx
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  dwNewLong = -1; /*0x5fbefe*/
  Dialog = (HWND)CreateDialog(0xA3u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))HotkeyOptions::DlgProc, 0); /*0x5fbf0b*/
  if ( Dialog ) /*0x5fbf0f*/
  {
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x5fbf19*/
    Dialog::Show(Dialog); /*0x5fbf21*/
    while ( dwNewLong < 0 ) /*0x5fbf2c*/
    {
      if ( Dialog::PumpMessages() == 1 ) /*0x5fbf35*/
        dwNewLong = 2; /*0x5fbf37*/
      if ( !byte_A8E9A0 ) /*0x5fbf46*/
      {
        LOBYTE(v1) = 0; /*0x5fbf48*/
        ScreenSaver::Process(v1); /*0x5fbf4a*/
      }
    }
    Dialog::Destroy(Dialog); /*0x5fbf59*/
  }
  return 1; /*0x5fbf60*/
}



// ==== 0x005FBF70  ObjectClass::Map_Helper_5FBF70  this=ObjectClass  sig=csp ====
int __thiscall Map_Helper_5FBF70(ObjectClass *this)
{
  return (int)this->?; /*0x5fbf73*/
}



// ==== 0x005FBF80  GameOptionsClass::UnlockMovieIfNeeded_MoviesList  this=GameOptionsClass  sig=csp ====
char *__thiscall GameOptionsClass::UnlockMovieIfNeeded_MoviesList(GameOptionsClass *this, void *a2)
{
  int v2; // edi
  char **v4; // esi
  char *v5; // eax
  char *result; // eax
  int v7; // edi
  char **v8; // esi

  v2 = 0; /*0x5fbf8d*/
  v4 = off_832CA0; /*0x5fbf93*/
  if ( off_832CA0[0] ) /*0x5fbf98*/
  {
    while ( _strcmpi((char *)a2, *v4) ) /*0x5fbfa8*/
    {
      v5 = v4[3]; /*0x5fbfaa*/
      v4 += 3; /*0x5fbfad*/
      ++v2; /*0x5fbfb0*/
      if ( !v5 ) /*0x5fbfb3*/
        goto LABEL_4; /*0x5fbfb3*/
    }
  }
  else
  {
LABEL_4:
    v2 = -1; /*0x5fbfb5*/
  }
  if ( v2 > *((_DWORD *)this + 19) ) /*0x5fbfbb*/
    *((_DWORD *)this + 19) = v2; /*0x5fbfbd*/
  result = off_832C30[0]; /*0x5fbfc0*/
  v7 = 0; /*0x5fbfc5*/
  v8 = off_832C30; /*0x5fbfc9*/
  if ( off_832C30[0] ) /*0x5fbfce*/
  {
    while ( 1 ) /*0x5fbfd4*/
    {
      result = (char *)_strcmpi((char *)a2, *v8); /*0x5fbfd4*/
      if ( !result ) /*0x5fbfde*/
        break; /*0x5fbfde*/
      result = v8[3]; /*0x5fbfe0*/
      v8 += 3; /*0x5fbfe3*/
      ++v7; /*0x5fbfe6*/
      if ( !result ) /*0x5fbfe9*/
        goto LABEL_10; /*0x5fbfe9*/
    }
  }
  else
  {
LABEL_10:
    v7 = -1; /*0x5fbfeb*/
  }
  if ( v7 > *((_DWORD *)this + 20) ) /*0x5fbff1*/
    *((_DWORD *)this + 20) = v7; /*0x5fbff3*/
  return result; /*0x5fbff6*/
}



// ==== 0x005FC000  GameOptionsClass::PopulateMovieList  this=GameOptionsClass  sig=csp ====
char *__thiscall GameOptionsClass::PopulateMovieList(GameOptionsClass *this, HWND hWnd)
{
  GameOptionsClass *v2; // ebx
  wchar_t *StringCSF; // eax
  LRESULT v4; // eax
  int GameOptionsClass_field_0x04; // eax
  int v6; // ebp
  char **v7; // ebx
  wchar_t *v8; // ecx
  wchar_t *v9; // eax
  LRESULT v10; // eax
  char *v11; // eax
  char *result; // eax
  char *v13; // ebp
  char **i; // ebx
  wchar_t *v15; // ecx
  wchar_t *v16; // eax
  LRESULT v17; // eax

  v2 = this; /*0x5fc00d*/
  if ( off_832C20[0] ) /*0x5fc01c*/
  {
    if ( off_832C24 ) /*0x5fc026*/
    {
      StringCSF = GetStringCSF(off_832C24, 0, g_Str_File_Options_CPP, 1265); /*0x5fc034*/
      v4 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)StringCSF); /*0x5fc042*/
      if ( v4 != -1 ) /*0x5fc047*/
        SendMessageA(hWnd, 0x19Au, v4, (LPARAM)off_832C20); /*0x5fc055*/
    }
  }
  GameOptionsClass_field_0x04 = v2[9].GameOptionsClass_field_0x04; /*0x5fc057*/
  if ( GameOptionsClass_field_0x04 >= 0 ) /*0x5fc05c*/
  {
    v6 = GameOptionsClass_field_0x04 + 1; /*0x5fc05e*/
    v7 = off_832CA0; /*0x5fc068*/
    if ( off_832CA0[0] ) /*0x5fc06d*/
    {
      do /*0x5fc0b3*/
      {
        if ( v6 <= 0 ) /*0x5fc071*/
          break; /*0x5fc071*/
        if ( *v7 ) /*0x5fc073*/
        {
          v8 = (wchar_t *)v7[1]; /*0x5fc078*/
          if ( v8 ) /*0x5fc07d*/
          {
            v9 = GetStringCSF(v8, 0, g_Str_File_Options_CPP, 1265); /*0x5fc08b*/
            v10 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)v9); /*0x5fc099*/
            if ( v10 != -1 ) /*0x5fc09e*/
              SendMessageA(hWnd, 0x19Au, v10, (LPARAM)v7); /*0x5fc0a8*/
          }
        }
        v11 = v7[3]; /*0x5fc0aa*/
        v7 += 3; /*0x5fc0ad*/
        --v6; /*0x5fc0b0*/
      }
      while ( v11 ); /*0x5fc0b3*/
    }
    v2 = this; /*0x5fc0b5*/
  }
  result = *(char **)v2[10].__pad_0; /*0x5fc0b9*/
  if ( (int)result >= 0 ) /*0x5fc0be*/
  {
    v13 = result + 1; /*0x5fc0c0*/
    result = off_832C30[0]; /*0x5fc0c3*/
    for ( i = off_832C30; result; --v13 ) /*0x5fc0cf*/
    {
      if ( (int)v13 <= 0 ) /*0x5fc0d3*/
        break; /*0x5fc0d3*/
      if ( *i ) /*0x5fc0d5*/
      {
        v15 = (wchar_t *)i[1]; /*0x5fc0da*/
        if ( v15 ) /*0x5fc0df*/
        {
          v16 = GetStringCSF(v15, 0, g_Str_File_Options_CPP, 1265); /*0x5fc0ed*/
          v17 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)v16); /*0x5fc0fb*/
          if ( v17 != -1 ) /*0x5fc100*/
            SendMessageA(hWnd, 0x19Au, v17, (LPARAM)i); /*0x5fc10a*/
        }
      }
      result = i[3]; /*0x5fc10c*/
      i += 3; /*0x5fc10f*/
    }
  }
  return result; /*0x5fc117*/
}



// ==== 0x005FC120  HotkeyOptions_Helper  this=AbstractClass  sig=csp ====
int __fastcall sub_5FC120(int a1, int a2, int *a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = a2; /*0x5fc125*/
  if ( a2 <= 0 ) /*0x5fc127*/
    return 0; /*0x5fc159*/
  v4 = *a3; /*0x5fc12d*/
  while ( 1 ) /*0x5fc136*/
  {
    v5 = *(_DWORD *)(a1 + 8 * (v3 / 2)); /*0x5fc136*/
    if ( v5 <= v4 ) /*0x5fc13e*/
      break; /*0x5fc13e*/
    v3 /= 2; /*0x5fc140*/
LABEL_7:
    if ( v3 <= 0 ) /*0x5fc152*/
      return 0; /*0x5fc152*/
  }
  if ( v5 != v4 ) /*0x5fc144*/
  {
    a1 += 8 * (v3 / 2) + 8; /*0x5fc146*/
    v3 += -1 - v3 / 2; /*0x5fc14e*/
    goto LABEL_7; /*0x5fc14e*/
  }
  return a1 + 8 * (v3 / 2); /*0x5fc154*/
}



// ==== 0x005FC170  sub_5FC170  this=-  sig=ida-proto ====
void sub_5FC170()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5fc17c*/
  dbl_AC1530 = Math::Sqrt(v0 + v0); /*0x5fc18e*/
}



// ==== 0x005FC1A0  sub_5FC1A0  this=-  sig=ida-proto ====
void sub_5FC1A0()
{
  dbl_AC15D8 = dbl_AC1530 / 60.0; /*0x5fc1ac*/
}



// ==== 0x005FC1C0  sub_5FC1C0  this=-  sig=ida-proto ====
void sub_5FC1C0()
{
  dbl_AC15C0 = 1.0 / dbl_AC15D8; /*0x5fc1cc*/
}



// ==== 0x005FC1E0  sub_5FC1E0  this=-  sig=ida-proto ====
void sub_5FC1E0()
{
  dbl_AC15B8 = 0.0174532925199433 * 45.0; /*0x5fc1ec*/
}



// ==== 0x005FC200  sub_5FC200  this=-  sig=ida-proto ====
void sub_5FC200()
{
  dbl_AC1538 = 0.0174532925199433 * 60.0; /*0x5fc20c*/
}



// ==== 0x005FC220  sub_5FC220  this=-  sig=ida-proto ====
void sub_5FC220()
{
  dbl_AC1510 = 0.0174532925199433 * 90.0; /*0x5fc22c*/
}



// ==== 0x005FC240  sub_5FC240  this=-  sig=ida-proto ====
__int64 sub_5FC240()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC1510 - dbl_AC1538); /*0x5fc252*/
  result = Math::RoundToInt(v0 * dbl_AC1530 * 0.5); /*0x5fc266*/
  dword_AC15E0 = result; /*0x5fc26b*/
  return result; /*0x5fc270*/
}



// ==== 0x005FC280  sub_5FC280  this=-  sig=ida-proto ====
void sub_5FC280()
{
  dbl_AC1540 = Math::ArcTan((double)dword_AC15E0 * 0.00390625); /*0x5fc297*/
}



// ==== 0x005FC2B0  sub_5FC2B0  this=-  sig=ida-proto ====
void sub_5FC2B0()
{
  dbl_AC1580 = Math::ArcTan((double)(2 * dword_AC15E0) / dbl_AC1530); /*0x5fc2d2*/
}



// ==== 0x005FC2E0  sub_5FC2E0  this=-  sig=ida-proto ====
__int64 sub_5FC2E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC15E0) + 0.5); /*0x5fc2fb*/
  dword_AC15D4 = result; /*0x5fc300*/
  return result; /*0x5fc306*/
}



// ==== 0x005FC310  sub_5FC310  this=-  sig=ida-proto ====
int sub_5FC310()
{
  word_AC1528 = 0; /*0x5fc312*/
  word_AC152A = 0; /*0x5fc318*/
  return 0; /*0x5fc31e*/
}



// ==== 0x005FC320  sub_5FC320  this=-  sig=ida-proto ====
int sub_5FC320()
{
  dword_AC1570 = 0; /*0x5fc322*/
  dword_AC1574 = 0; /*0x5fc327*/
  dword_AC1578 = 0; /*0x5fc32c*/
  return 0; /*0x5fc331*/
}



// ==== 0x005FC340  sub_5FC340  this=-  sig=ida-proto ====
int sub_5FC340()
{
  dword_AC15D0 = 0; /*0x5fc345*/
  dword_AC15C8 = 128; /*0x5fc34f*/
  dword_AC15CC = 128; /*0x5fc354*/
  return 128; /*0x5fc359*/
}



// ==== 0x005FC360  sub_5FC360  this=-  sig=ida-proto ====
int sub_5FC360()
{
  dword_AC1518 = 0; /*0x5fc362*/
  dword_AC151C = 0; /*0x5fc367*/
  dword_AC1520 = 0; /*0x5fc36c*/
  dword_AC1524 = 0; /*0x5fc371*/
  return 0; /*0x5fc376*/
}



// ==== 0x005FC380  Object::SpawnAtCell  this=OverlayClass  sig=csp ====
void *__thiscall Object::SpawnAtCell(Object *this, int a2, __int16 *a3, int a4)
{
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  CellClass *v8; // eax

  ObjectClass::ctor((ObjectClass *)this); /*0x5fc386*/
  v5 = a2; /*0x5fc38b*/
  *(_DWORD *)this->__pad_0 = &OverlayClass::`vftable'; /*0x5fc38f*/
  this->Object_field_0xAC = v5; /*0x5fc395*/
  this->Object_field_0x8 = (int)&OverlayClass::`vftable'; /*0x5fc39f*/
  *(_DWORD *)&this->Object_field_0x2[2] = &OverlayClass::`vftable'; /*0x5fc3a6*/
  *(_DWORD *)this->__pad_C = &OverlayClass::`vftable'; /*0x5fc3ac*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->Object_field_0x2[2]); /*0x5fc3b3*/
  if ( dword_A8EC60 < dword_A8EC58 /*0x5fc3ef*/
    || (byte_A8EC5D || !dword_A8EC58)
    && dword_A8EC64 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8EC50 + 8))(
         &dword_A8EC50,
         dword_A8EC58 + dword_A8EC64,
         0) )
  {
    v6 = dword_A8EC60++; /*0x5fc3fc*/
    *((_DWORD *)dword_A8EC54 + v6) = this; /*0x5fc40b*/
  }
  if ( *a3 != word_AC1528 || a3[1] != word_AC152A ) /*0x5fc429*/
  {
    dword_8333BC = a4; /*0x5fc43b*/
    v7 = a3[1]; /*0x5fc444*/
    LOWORD(a2) = ((*a3 << 8) + 128) / 256; /*0x5fc469*/
    HIWORD(a2) = ((v7 << 8) + 128) / 256; /*0x5fc485*/
    v8 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2); /*0x5fc497*/
    if ( !CellClass::FindInfantry(v8, 0) ) /*0x5fc4a0*/
      ObjectClass::Deploy((ObjectClass *)this); /*0x5fc4b1*/
    dword_8333BC = -1; /*0x5fc4b6*/
  }
  return this; /*0x5fc4c2*/
}



// ==== 0x005FC570  ObjectClass::FinalizeCellPlacement  this=OverlayClass  sig=csp ====
char __thiscall ObjectClass::FinalizeCellPlacement(TechnoClass *this, int a2)
{
  int v2; // esi
  char *v4; // eax
  int v5; // edx
  int currentMission; // ecx
  int v7; // ebp
  int v8; // esi
  int v9; // eax
  int v10; // eax
  signed int i; // esi
  _DWORD *NeighbourContent; // eax
  VeinholeMonsterClass *v13; // eax
  int v14; // eax
  signed int j; // esi
  _BYTE *v16; // eax
  int v18; // ecx
  int v19; // esi
  __int16 v20; // bp
  __int16 v21; // ax
  char v22; // bl
  _WORD *v23; // edi
  __int16 v24; // dx
  bool v25; // zf
  int v26; // ebx
  _DWORD *v27; // eax
  __int16 v28; // ax
  int v29; // esi
  char v30; // bl
  int v31; // edx
  __int16 v32; // cx
  _WORD *v33; // edi
  _DWORD *v34; // eax
  __int16 v35; // ax
  char v36; // si
  int v37; // eax
  __int16 v38; // di
  int v39; // ecx
  signed int v40; // eax
  int v41; // ebp
  int v42; // ebx
  _WORD *v43; // edi
  __int16 v44; // dx
  _DWORD *v45; // esi
  __int16 v46; // dx
  int v47; // esi
  __int16 v48; // bp
  __int16 v49; // ax
  char v50; // bl
  _WORD *v51; // edi
  __int16 v52; // dx
  int v53; // ebx
  _DWORD *v54; // eax
  __int16 v55; // ax
  int v56; // esi
  char v57; // bl
  int v58; // edx
  __int16 v59; // cx
  _WORD *v60; // edi
  _DWORD *v61; // eax
  __int16 v62; // ax
  char v63; // si
  int v64; // eax
  __int16 v65; // di
  int v66; // eax
  int v67; // ecx
  signed int v68; // eax
  int v69; // ebp
  int v70; // ebx
  _WORD *v71; // edi
  __int16 v72; // dx
  _DWORD *v73; // esi
  __int16 v74; // dx
  bool *v75; // ecx
  char IsBuildable; // al
  int v77; // ecx
  TechnoClass *v78; // eax
  int v79; // esi
  int v80; // edi
  int v81; // edx
  int v82; // eax
  int GroundHeight; // ebx
  AnimClass *v84; // eax
  int v85; // edx
  void **v86; // esi
  int v87; // eax
  int v88; // eax
  TechnoClass *v89; // ecx
  int vtable0; // edx
  int v91; // [esp-1Ch] [ebp-58h]
  char v92; // [esp-18h] [ebp-54h]
  char v93; // [esp-14h] [ebp-50h]
  __int16 v94[2]; // [esp+10h] [ebp-2Ch] BYREF
  TechnoClass *v95; // [esp+14h] [ebp-28h]
  int v96; // [esp+18h] [ebp-24h]
  int v97; // [esp+1Ch] [ebp-20h]
  int v98; // [esp+20h] [ebp-1Ch]
  __int16 v99[2]; // [esp+24h] [ebp-18h] BYREF
  __int16 v100[2]; // [esp+28h] [ebp-14h] BYREF
  int v101; // [esp+2Ch] [ebp-10h]
  int v102; // [esp+30h] [ebp-Ch] BYREF
  int v103; // [esp+34h] [ebp-8h]
  int v104; // [esp+38h] [ebp-4h]

  v2 = a2; /*0x5fc576*/
  v95 = this; /*0x5fc57e*/
  if ( !(unsigned __int8)ObjectClass::UpdateProductionDisplay(this) || v2 != 1 && v2 != 3 ) /*0x5fc597*/
    return 0; /*0x5fc597*/
  *(_DWORD *)v94 = *(_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *))(this->vtable0 + 440))(this, &a2); /*0x5fc5b8*/
  v4 = (char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v94); /*0x5fc5bc*/
  currentMission = this->currentMission; /*0x5fc5c1*/
  v7 = (int)v4; /*0x5fc5c7*/
  v101 = (int)v4; /*0x5fc5c9*/
  v8 = *(_DWORD *)(currentMission + 660); /*0x5fc5d3*/
  if ( (unsigned __int8)v4[284] > 4u && v8 != 178 ) /*0x5fc5e3*/
    return 0; /*0x5fc5e3*/
  switch ( v8 ) /*0x5fc5f1*/
  {
    case 24: /*0x5fc5f1*/
      UpdateCellClassNeighborTerrain((int)v4, v5, 0, 1); /*0x5fc60a*/
      break;
    case 25: /*0x5fc5f1*/
      UpdateCellClassNeighborTerrain((int)v4, v5, 6u, 1); /*0x5fc5fe*/
      break;
    case 237: /*0x5fc5f1*/
      SetCellClassOccupancyFlags((int)v4, v5, 0, 1); /*0x5fc62c*/
      break;
    case 238: /*0x5fc5f1*/
      SetCellClassOccupancyFlags((int)v4, v5, 6u, 1); /*0x5fc625*/
      break;
    case 167: /*0x5fc5f1*/
      if ( ObjectClass::IsCellSuitableForPlacement((ObjectClass *)(v4 + 36)) ) /*0x5fc66a*/
      {
        for ( i = 0; i < 8; ++i ) /*0x5fc677*/
        {
          NeighbourContent = Cell::GetNeighbourContent((Cell *)v7, i); /*0x5fc67c*/
          NeighbourContent[17] = 178; /*0x5fc682*/
          *((_BYTE *)NeighbourContent + 286) = 0; /*0x5fc68c*/
        }
        *(_DWORD *)(v7 + 68) = 167; /*0x5fc69a*/
        *(_BYTE *)(v7 + 286) = 0; /*0x5fc6a1*/
        v13 = (VeinholeMonsterClass *)__2_YAPAXI_Z(0x108u); /*0x5fc6a8*/
        if ( v13 ) /*0x5fc6b2*/
          VeinholeMonsterClass::Constructor(v13, (ObjectClass *)(v7 + 36)); /*0x5fc6bb*/
      }
      goto LABEL_131; /*0x5fc6c0*/
    default:
      if ( v8 == 126 && !dword_A8E7AC ) /*0x5fc6d4*/
      {
        BuildingClass::VisualizePlacement((BuildingClass *)v4); /*0x5fc6dc*/
        goto LABEL_131; /*0x5fc6e1*/
      }
      break;
  }
  v9 = v95->currentMission; /*0x5fc635*/
  if ( *(_DWORD *)(v9 + 664) != 9 ) /*0x5fc642*/
  {
    if ( *(_BYTE *)(v9 + 680) ) /*0x5fc6e6*/
    {
      if ( (unsigned __int8)CellClass::IsPassable((int *)v7, 1, 0, 0) ) /*0x5fc6fa*/
      {
        v14 = *(_DWORD *)(v95->currentMission + 660); /*0x5fc711*/
        *(_BYTE *)(v7 + 286) = 0; /*0x5fc717*/
        *(_DWORD *)(v7 + 68) = v14; /*0x5fc71e*/
        BuildingClass::ValidatePlacement((BuildingClass *)v7, 1); /*0x5fc721*/
        if ( !dword_A8E7AC ) /*0x5fc72c*/
        {
          CellClass::DetermineTileConnectivity((CellClass *)&dword_87F7E8, (__int16 *)(v7 + 36)); /*0x5fc737*/
          Radar::Update((Radar *)&dword_87F7E8, (__int16 *)(v7 + 36)); /*0x5fc742*/
        }
        if ( dword_8333BC != -1 ) /*0x5fc74d*/
          *(_DWORD *)(v7 + 80) = dword_880994; /*0x5fc755*/
        for ( j = 0; j < 8; ++j ) /*0x5fc758*/
        {
          v16 = Cell::GetNeighbourContent((Cell *)v7, j); /*0x5fc75d*/
          ++v16[290]; /*0x5fc773*/
        }
        goto LABEL_131; /*0x5fc775*/
      }
      (*(void (__thiscall **)(TechnoClass *))(v95->vtable0 + 248))(v95); /*0x5fc77e*/
      return 0; /*0x5fc78d*/
    }
    v18 = *(_DWORD *)(v9 + 660); /*0x5fc790*/
    if ( v18 >= 122 && v18 <= 125 ) /*0x5fc7a2*/
    {
      v19 = v18 - 122; /*0x5fc7af*/
      if ( (byte_AC1548 & 1) == 0 ) /*0x5fc7b4*/
      {
        byte_AC1548 |= 1u; /*0x5fc7d7*/
        dword_AC154C[0] = -65536; /*0x5fc7eb*/
        a2 = 0xFFFF; /*0x5fc7f0*/
        dword_AC1550 = -65536; /*0x5fc803*/
        dword_AC1554 = 0xFFFF; /*0x5fc809*/
        dword_AC1558 = 0xFFFF; /*0x5fc80f*/
        atexit(nullsub_211); /*0x5fc814*/
      }
      if ( (byte_AC1548 & 2) == 0 ) /*0x5fc826*/
      {
        byte_AC1548 |= 2u; /*0x5fc83e*/
        dword_AC1588 = 0xFFFF; /*0x5fc857*/
        dword_AC158C = 0; /*0x5fc86b*/
        dword_AC1590 = 1; /*0x5fc87f*/
        dword_AC1594 = -65536; /*0x5fc893*/
        v96 = 0x10000; /*0x5fc899*/
        dword_AC1598 = 0; /*0x5fc8ac*/
        dword_AC159C = 0x10000; /*0x5fc8b2*/
        atexit(nullsub_210); /*0x5fc8b8*/
      }
      v20 = LOWORD(dword_AC154C[v19]) + v94[0]; /*0x5fc8cd*/
      v21 = v94[1] + HIWORD(dword_AC154C[v19]); /*0x5fc8d5*/
      v22 = 1; /*0x5fc8da*/
      v98 = 3; /*0x5fc8dc*/
      LOWORD(v96) = v20; /*0x5fc8e4*/
      HIWORD(v96) = v21; /*0x5fc8e9*/
      a2 = v96; /*0x5fc8f2*/
      v23 = (_WORD *)(4 * (dword_8333C0[v19] & 7) + 9041544); /*0x5fc900*/
      do /*0x5fc94a*/
      {
        if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2) + 17) != -1 ) /*0x5fc91a*/
          v22 = 0; /*0x5fc91c*/
        v24 = a2 + *v23; /*0x5fc92a*/
        HIWORD(v97) = v23[1] + HIWORD(a2); /*0x5fc92f*/
        LOWORD(v97) = v24; /*0x5fc938*/
        v25 = v98 == 1; /*0x5fc941*/
        a2 = v97; /*0x5fc942*/
        --v98; /*0x5fc946*/
      }
      while ( !v25 ); /*0x5fc94a*/
      a2 = v96; /*0x5fc952*/
      if ( v22 ) /*0x5fc956*/
      {
        v26 = 0; /*0x5fc95c*/
        do /*0x5fc9ad*/
        {
          v27 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2); /*0x5fc968*/
          v27[17] = dword_8333D0[v19]; /*0x5fc976*/
          *((_BYTE *)v27 + 286) = v26; /*0x5fc97b*/
          House::AnnounceUpgrade((int)v27, -1); /*0x5fc981*/
          v28 = v23[1] + HIWORD(a2); /*0x5fc993*/
          ++v26; /*0x5fc997*/
          LOWORD(v98) = *v23 + a2; /*0x5fc998*/
          HIWORD(v98) = v28; /*0x5fc99d*/
          a2 = v98; /*0x5fc9a9*/
        }
        while ( v26 < 3 ); /*0x5fc9ad*/
        v29 = dword_8333E0[v19]; /*0x5fc9af*/
        v30 = 0; /*0x5fc9b6*/
        v31 = v29 & 7; /*0x5fc9ba*/
        v32 = v94[1] + HIWORD(dword_89F688[v31]); /*0x5fc9d2*/
        v33 = (_WORD *)(4 * v31 + 9041544); /*0x5fc9d7*/
        LOWORD(v98) = v94[0] + LOWORD(dword_89F688[v31]); /*0x5fc9de*/
        HIWORD(v98) = v32; /*0x5fc9e3*/
        a2 = v98; /*0x5fc9ee*/
        v97 = dword_8333F8[v29 / 2]; /*0x5fca08*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, (__int16 *)&a2) ) /*0x5fca0c*/
        {
          while ( !v30 ) /*0x5fca1b*/
          {
            v34 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2); /*0x5fca27*/
            if ( v34[17] == v97 && *((_BYTE *)v34 + 286) == 1 ) /*0x5fca3e*/
            {
              v30 = 1; /*0x5fca40*/
            }
            else
            {
              v35 = v33[1]; /*0x5fca47*/
              LOWORD(v98) = a2 + *v33; /*0x5fca55*/
              HIWORD(v98) = HIWORD(a2) + v35; /*0x5fca5a*/
              a2 = v98; /*0x5fca63*/
            }
            if ( !(unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, (__int16 *)&a2) ) /*0x5fca71*/
            {
              if ( !v30 ) /*0x5fca7c*/
                goto LABEL_131; /*0x5fca7c*/
              break; /*0x5fca7c*/
            }
          }
          v36 = (v29 - 4) & 7; /*0x5fca82*/
          v37 = v36 & 7; /*0x5fca8a*/
          v38 = dword_89F688[v37]; /*0x5fca92*/
          *(_DWORD *)v100 = 4 * v37 + 9041544; /*0x5fcaa1*/
          LOWORD(v37) = HIWORD(a2) + HIWORD(dword_89F688[v37]); /*0x5fcaae*/
          LOWORD(v98) = a2 + v38; /*0x5fcab3*/
          HIWORD(v98) = v37; /*0x5fcab8*/
          a2 = v98; /*0x5fcac6*/
          v39 = abs32((__int16)v37 - SHIWORD(v96)); /*0x5fcacf*/
          v40 = abs32((__int16)v98 - v20); /*0x5fcadc*/
          if ( v40 > v39 ) /*0x5fcae0*/
            v39 = v40; /*0x5fcae2*/
          if ( v39 > 0 ) /*0x5fcae6*/
          {
            v96 = v39; /*0x5fcafd*/
            v41 = (v36 & 3) / 2; /*0x5fcb03*/
            do /*0x5fcbae*/
            {
              v42 = 0; /*0x5fcb09*/
              v43 = (_WORD *)(12 * v41 + 11277704); /*0x5fcb0b*/
              do /*0x5fcb7c*/
              {
                v44 = HIWORD(a2) + v43[1]; /*0x5fcb1e*/
                LOWORD(v98) = a2 + *v43; /*0x5fcb23*/
                HIWORD(v98) = v44; /*0x5fcb2c*/
                *(_DWORD *)v99 = v98; /*0x5fcb3b*/
                v45 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v99); /*0x5fcb4a*/
                v45[17] = dword_8333F0[v41] + (Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) & 3); /*0x5fcb67*/
                *((_BYTE *)v45 + 286) = v42; /*0x5fcb6a*/
                House::AnnounceUpgrade((int)v45, -1); /*0x5fcb70*/
                ++v42; /*0x5fcb75*/
                v43 += 2; /*0x5fcb76*/
              }
              while ( v42 < 3 ); /*0x5fcb7c*/
              v46 = *(_WORD *)(*(_DWORD *)v100 + 2); /*0x5fcb87*/
              LOWORD(v97) = **(_WORD **)v100 + a2; /*0x5fcb93*/
              HIWORD(v97) = HIWORD(a2) + v46; /*0x5fcb98*/
              a2 = v97; /*0x5fcba1*/
              --v96; /*0x5fcbaa*/
            }
            while ( v96 ); /*0x5fcbae*/
          }
        }
      }
      goto LABEL_131; /*0x5fcbae*/
    }
    if ( v18 >= 233 && v18 <= 236 ) /*0x5fcbcb*/
    {
      v47 = *(_DWORD *)(v9 + 660) - 233; /*0x5fcbdc*/
      if ( (byte_AC1548 & 4) == 0 ) /*0x5fcbe4*/
      {
        byte_AC1548 |= 4u; /*0x5fcbf9*/
        dword_AC155C[0] = -65536; /*0x5fcc1b*/
        a2 = 0xFFFF; /*0x5fcc21*/
        dword_AC1560 = -65536; /*0x5fcc34*/
        dword_AC1564 = 0xFFFF; /*0x5fcc3a*/
        dword_AC1568 = 0xFFFF; /*0x5fcc3f*/
        atexit(nullsub_209); /*0x5fcc45*/
      }
      if ( (byte_AC1548 & 8) == 0 ) /*0x5fcc54*/
      {
        byte_AC1548 |= 8u; /*0x5fcc69*/
        dword_AC15A4 = 0; /*0x5fcc86*/
        dword_AC15A0 = 0xFFFF; /*0x5fcc99*/
        dword_AC15A8 = 1; /*0x5fccad*/
        dword_AC15AC = -65536; /*0x5fccc1*/
        v98 = 0x10000; /*0x5fccc7*/
        dword_AC15B0 = 0; /*0x5fccda*/
        dword_AC15B4 = 0x10000; /*0x5fcce0*/
        atexit(nullsub_208); /*0x5fcce6*/
      }
      v48 = v94[0] + LOWORD(dword_AC155C[v47]); /*0x5fccfe*/
      v49 = v94[1] + HIWORD(dword_AC155C[v47]); /*0x5fcd03*/
      v50 = 1; /*0x5fcd08*/
      v97 = 3; /*0x5fcd0a*/
      LOWORD(v96) = v48; /*0x5fcd12*/
      HIWORD(v96) = v49; /*0x5fcd17*/
      a2 = v96; /*0x5fcd20*/
      v51 = (_WORD *)(4 * (dword_833408[v47] & 7) + 9041544); /*0x5fcd2e*/
      do /*0x5fcd78*/
      {
        if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2) + 17) != -1 ) /*0x5fcd48*/
          v50 = 0; /*0x5fcd4a*/
        v52 = a2 + *v51; /*0x5fcd58*/
        HIWORD(v98) = v51[1] + HIWORD(a2); /*0x5fcd5d*/
        LOWORD(v98) = v52; /*0x5fcd66*/
        v25 = v97 == 1; /*0x5fcd6f*/
        a2 = v98; /*0x5fcd70*/
        --v97; /*0x5fcd74*/
      }
      while ( !v25 ); /*0x5fcd78*/
      a2 = v96; /*0x5fcd80*/
      if ( v50 ) /*0x5fcd84*/
      {
        v53 = 0; /*0x5fcd8a*/
        do /*0x5fcddb*/
        {
          v54 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2); /*0x5fcd96*/
          v54[17] = dword_833418[v47]; /*0x5fcda4*/
          *((_BYTE *)v54 + 286) = v53; /*0x5fcda9*/
          House::AnnounceUpgrade((int)v54, -1); /*0x5fcdaf*/
          v55 = v51[1] + HIWORD(a2); /*0x5fcdc1*/
          ++v53; /*0x5fcdc5*/
          LOWORD(v98) = *v51 + a2; /*0x5fcdc6*/
          HIWORD(v98) = v55; /*0x5fcdcb*/
          a2 = v98; /*0x5fcdd7*/
        }
        while ( v53 < 3 ); /*0x5fcddb*/
        v56 = dword_833428[v47]; /*0x5fcddd*/
        v57 = 0; /*0x5fcde4*/
        v58 = v56 & 7; /*0x5fcde8*/
        v59 = v94[1] + HIWORD(dword_89F688[v58]); /*0x5fce00*/
        v60 = (_WORD *)(4 * v58 + 9041544); /*0x5fce05*/
        LOWORD(v98) = v94[0] + LOWORD(dword_89F688[v58]); /*0x5fce0c*/
        HIWORD(v98) = v59; /*0x5fce11*/
        a2 = v98; /*0x5fce1c*/
        *(_DWORD *)v100 = dword_833440[v56 / 2]; /*0x5fce36*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, (__int16 *)&a2) ) /*0x5fce3a*/
        {
          while ( !v57 ) /*0x5fce49*/
          {
            v61 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2); /*0x5fce55*/
            if ( v61[17] == *(_DWORD *)v100 && *((_BYTE *)v61 + 286) == 1 ) /*0x5fce6c*/
            {
              v57 = 1; /*0x5fce6e*/
            }
            else
            {
              v62 = v60[1]; /*0x5fce75*/
              LOWORD(v98) = a2 + *v60; /*0x5fce83*/
              HIWORD(v98) = HIWORD(a2) + v62; /*0x5fce88*/
              a2 = v98; /*0x5fce91*/
            }
            if ( !(unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, (__int16 *)&a2) ) /*0x5fce9f*/
            {
              if ( !v57 ) /*0x5fceaa*/
                goto LABEL_131; /*0x5fceaa*/
              break; /*0x5fceaa*/
            }
          }
          v63 = (v56 - 4) & 7; /*0x5fceb0*/
          v64 = v63 & 7; /*0x5fcebd*/
          v65 = LOWORD(dword_89F688[v64]) + a2; /*0x5fcec5*/
          *(_DWORD *)v99 = 4 * v64 + 9041544; /*0x5fced4*/
          LOWORD(v64) = HIWORD(dword_89F688[v64]); /*0x5fced8*/
          LOWORD(v98) = v65; /*0x5fcedc*/
          HIWORD(v98) = HIWORD(a2) + v64; /*0x5fcee6*/
          v66 = (__int16)(HIWORD(a2) + v64) - SHIWORD(v96); /*0x5fcef2*/
          a2 = v98; /*0x5fcef4*/
          v67 = abs32(v66); /*0x5fcefd*/
          v68 = abs32(v65 - v48); /*0x5fcf0a*/
          if ( v68 > v67 ) /*0x5fcf0e*/
            v67 = v68; /*0x5fcf10*/
          if ( v67 > 0 ) /*0x5fcf14*/
          {
            v96 = v67; /*0x5fcf2b*/
            v69 = (v63 & 3) / 2; /*0x5fcf31*/
            do /*0x5fcfdc*/
            {
              v70 = 0; /*0x5fcf37*/
              v71 = (_WORD *)(12 * v69 + 11277728); /*0x5fcf39*/
              do /*0x5fcfaa*/
              {
                v72 = HIWORD(a2) + v71[1]; /*0x5fcf4c*/
                LOWORD(v98) = a2 + *v71; /*0x5fcf51*/
                HIWORD(v98) = v72; /*0x5fcf5a*/
                *(_DWORD *)v100 = v98; /*0x5fcf69*/
                v73 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v100); /*0x5fcf78*/
                v73[17] = dword_833438[v69] + (Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) & 3); /*0x5fcf95*/
                *((_BYTE *)v73 + 286) = v70; /*0x5fcf98*/
                House::AnnounceUpgrade((int)v73, -1); /*0x5fcf9e*/
                ++v70; /*0x5fcfa3*/
                v71 += 2; /*0x5fcfa4*/
              }
              while ( v70 < 3 ); /*0x5fcfaa*/
              v74 = *(_WORD *)(*(_DWORD *)v99 + 2); /*0x5fcfb5*/
              LOWORD(v97) = **(_WORD **)v99 + a2; /*0x5fcfc1*/
              HIWORD(v97) = HIWORD(a2) + v74; /*0x5fcfc6*/
              a2 = v97; /*0x5fcfcf*/
              --v96; /*0x5fcfd8*/
            }
            while ( v96 ); /*0x5fcfdc*/
          }
        }
      }
      goto LABEL_131; /*0x5fcfdc*/
    }
    if ( dword_A8E7AC ) /*0x5fcfed*/
    {
      IsBuildable = 1; /*0x5fd077*/
    }
    else
    {
      if ( v9 == dword_8871E0->GUIOpenSound ) /*0x5fcfff*/
      {
        v93 = 0; /*0x5fd006*/
        v92 = 0; /*0x5fd007*/
        v91 = 5; /*0x5fd008*/
        v75 = (bool *)v7; /*0x5fd00a*/
LABEL_97:
        IsBuildable = Cell::IsBuildable(v75, v91, v92, v93, -1, 0, -1, 1); /*0x5fd00c*/
        goto LABEL_110; /*0x5fd011*/
      }
      if ( v9 == dword_8871E0->GUITabSound || v9 == dword_8871E0->GUIBuildSound ) /*0x5fd021*/
      {
        IsBuildable = Cell::IsBuildable((bool *)v7, 1, 0, 0, -1, 0, -1, 1); /*0x5fd070*/
      }
      else
      {
        if ( v18 == 24 || v18 == 25 || v18 == 237 || v18 == 238 ) /*0x5fd03b*/
        {
          IsBuildable = 1; /*0x5fd061*/
          goto LABEL_111; /*0x5fd063*/
        }
        v93 = 1; /*0x5fd042*/
        v25 = v18 == 102; /*0x5fd044*/
        v92 = 1; /*0x5fd047*/
        v91 = 1; /*0x5fd049*/
        v75 = (bool *)v7; /*0x5fd04b*/
        if ( !v25 ) /*0x5fd04d*/
          goto LABEL_97; /*0x5fd04d*/
        IsBuildable = Cell::IsBuildable((bool *)v7, 1, 1, 1, -1, 0, -1, 1); /*0x5fd04f*/
        if ( *(_BYTE *)(v7 + 284) > 4u ) /*0x5fd05b*/
          IsBuildable = 0; /*0x5fd05d*/
      }
    }
LABEL_110:
    if ( dword_A8E7AC ) /*0x5fd07f*/
    {
LABEL_113:
      if ( IsBuildable ) /*0x5fd09d*/
      {
        v78 = v95; /*0x5fd09f*/
        *(_DWORD *)(v7 + 68) = *(_DWORD *)(v95->currentMission + 660); /*0x5fd0b2*/
        if ( v8 != 24 && v8 != 25 && v8 != 237 && v8 != 238 ) /*0x5fd0ca*/
          *(_BYTE *)(v7 + 286) = 0; /*0x5fd0cc*/
        if ( *(_DWORD *)(v78->currentMission + 664) == 5 ) /*0x5fd0e0*/
        {
          *(_BYTE *)(v7 + 286) = 1; /*0x5fd0e5*/
          ObjectClass::UpdateTiberiumGrowth(v7, 0); /*0x5fd0ec*/
          v78 = v95; /*0x5fd0f1*/
        }
        if ( *(_BYTE *)(v78->currentMission + 682) ) /*0x5fd0fb*/
          *(_BYTE *)(v7 + 286) = -1; /*0x5fd105*/
        goto LABEL_124; /*0x5fd10c*/
      }
LABEL_123:
      v78 = v95; /*0x5fd10e*/
LABEL_124:
      if ( *(_DWORD *)(v78->currentMission + 668) ) /*0x5fd118*/
      {
        v79 = v95->location[0]; /*0x5fd12f*/
        v80 = v95->location[1]; /*0x5fd131*/
        v81 = v95->location[2]; /*0x5fd134*/
        v102 = v79; /*0x5fd139*/
        v104 = v81; /*0x5fd13d*/
        v82 = v95->location[2]; /*0x5fd144*/
        v103 = v95->location[1]; /*0x5fd14b*/
        v104 = v82; /*0x5fd155*/
        GroundHeight = Cell::GetGroundHeight(&v102); /*0x5fd163*/
        v84 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x5fd165*/
        if ( v84 ) /*0x5fd16f*/
        {
          v102 = v79 + 384; /*0x5fd181*/
          v103 = v80 + 384; /*0x5fd189*/
          v85 = v95->currentMission; /*0x5fd19b*/
          v104 = GroundHeight; /*0x5fd1a1*/
          v86 = AnimClass::ctor(v84, *(void **)(v85 + 668), &v102, 0, 1, (void *)0x600, 0, 0); /*0x5fd1b3*/
        }
        else
        {
          v86 = 0; /*0x5fd1b7*/
        }
        v87 = BuildingClass::FindByCellHash((BuildingClass *)v7); /*0x5fd1bb*/
        if ( v87 != -1 ) /*0x5fd1c3*/
        {
          v88 = *(&dword_B0F4EC->vtable0 + v87); /*0x5fd1cb*/
          if ( v88 ) /*0x5fd1d0*/
          {
            v86[53] = *(void **)(*((_DWORD *)dword_B054D4 + *(_DWORD *)(v88 + 192)) + 780); /*0x5fd1e7*/
            v86[63] = (void *)*(__int16 *)(v7 + 266); /*0x5fd1f4*/
          }
        }
      }
      goto LABEL_131; /*0x5fd1f4*/
    }
LABEL_111:
    v77 = *(_DWORD *)(v7 + 68); /*0x5fd081*/
    if ( v77 != -1 && *(_BYTE *)(*(&dword_A83D84->vtable0 + v77) + 690) ) /*0x5fd091*/
      goto LABEL_123; /*0x5fd099*/
    goto LABEL_113; /*0x5fd099*/
  }
  v10 = *(_DWORD *)(v9 + 660); /*0x5fc648*/
  *(_BYTE *)(v7 + 286) = 0; /*0x5fc64e*/
  *(_DWORD *)(v7 + 68) = v10; /*0x5fc655*/
LABEL_131:
  House::AnnounceUpgrade(v101, -1); /*0x5fd1fa*/
  v89 = v95; /*0x5fd205*/
  vtable0 = v95->vtable0; /*0x5fd209*/
  v95->isOnMap[0] = 0; /*0x5fd20b*/
  v89->inLimbo[0] = 1; /*0x5fd20f*/
  (*(void (**)(void))(vtable0 + 248))(); /*0x5fd216*/
  return 1; /*0x5fc784*/
}


// ==== 0x005FD230  nullsub_208  this=-  sig=ida-proto ====
void __cdecl nullsub_208()
{
  ; /*0x5fd230*/
}



// ==== 0x005FD240  nullsub_209  this=-  sig=ida-proto ====
void __cdecl nullsub_209()
{
  ; /*0x5fd240*/
}



// ==== 0x005FD250  nullsub_210  this=-  sig=ida-proto ====
void __cdecl nullsub_210()
{
  ; /*0x5fd250*/
}



// ==== 0x005FD260  nullsub_211  this=-  sig=ida-proto ====
void __cdecl nullsub_211()
{
  ; /*0x5fd260*/
}



// ==== 0x005FD270  OverlayClass::CheckState  this=OverlayClass  sig=csp ====
char __thiscall Object::CheckState(OverlayClass *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  CellClass *v5; // eax

  v3 = a2; /*0x5fd271*/
  LOWORD(a2) = *a2 / 256; /*0x5fd290*/
  HIWORD(a2) = v3[1] / 256; /*0x5fd2a4*/
  v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x5fd2b1*/
  if ( CellClass::FindInfantry(v5, 0) ) /*0x5fd2ba*/
    return 0; /*0x5fd2c4*/
  else
    return ObjectClass::Deploy((ObjectClass *)this); /*0x5fd2d2*/
}



// ==== 0x005FD2E0  ObjectClass::ReadOverlayINI  this=ObjectClass  sig=csp ====
int __thiscall ReadOverlayINI(ObjectClass *this)
{
  int Buffer_field_14; // edi
  int Buffer_field_18; // ebp
  int Buffer_field_20; // esi
  int Buffer_field_24; // ebx
  int Base64Data; // esi
  int v6; // edi
  int i; // edi
  int j; // esi
  char v9; // bl
  #374 *v10; // eax
  int v11; // edi
  int v12; // esi
  int v13; // ebx
  int v14; // esi
  int v15; // edi
  int k; // edi
  int m; // esi
  _BYTE *v18; // eax
  ObjectClass *v20; // [esp+0h] [ebp-74h] BYREF
  char v21[4]; // [esp+4h] [ebp-70h] BYREF
  __int16 v22; // [esp+8h] [ebp-6Ch] BYREF
  __int16 v23; // [esp+Ah] [ebp-6Ah]
  INIClass *v24; // [esp+Ch] [ebp-68h]
  Straw v25; // [esp+10h] [ebp-64h] BYREF
  int v26; // [esp+18h] [ebp-5Ch]
  Buffer v27; // [esp+1Ch] [ebp-58h] BYREF
  LCWStraw v28; // [esp+4Ch] [ebp-28h] BYREF

  v24 = (INIClass *)this; /*0x5fd2e3*/
  INIClass::ResetSection((INIClass *)this); /*0x5fd2e7*/
  if ( *(int *)&stru_A8EB00.?[408] > 1 ) /*0x5fd2f3*/
  {
    OverlayClass::updateOverlayState((OverlayClass *)&v27.Buffer_field_10, 640, 400); /*0x5fd30b*/
    v27.Buffer_field_20 = 2; /*0x5fd314*/
    Buffer::Init((Buffer *)&v27.Buffer_field_24, 0, 512000); /*0x5fd323*/
    v27.Buffer_field_10 = (int)&BSurface_Vtable; /*0x5fd32c*/
    XSurface::Fill((XSurface *)&v27.Buffer_field_10, 0); /*0x5fd336*/
    Buffer_field_14 = v27.Buffer_field_14; /*0x5fd33f*/
    Buffer_field_18 = v27.Buffer_field_18; /*0x5fd347*/
    Buffer_field_20 = v27.Buffer_field_20; /*0x5fd34b*/
    ++v27.Buffer_field_1C; /*0x5fd350*/
    Buffer_field_24 = v27.Buffer_field_24; /*0x5fd354*/
    (*(void (__thiscall **)(int *))(v27.Buffer_field_10 + 112))(&v27.Buffer_field_10); /*0x5fd35c*/
    (*(void (__thiscall **)(int *))(v27.Buffer_field_10 + 116))(&v27.Buffer_field_10); /*0x5fd367*/
    Base64Data = INIClass::GetBase64Data( /*0x5fd380*/
                   v24,
                   g_INI_Key_OverlayPack,
                   Buffer_field_24,
                   Buffer_field_14 * Buffer_field_18 * Buffer_field_20);
    if ( Base64Data > 0 ) /*0x5fd386*/
    {
      v6 = v27.Buffer_field_24; /*0x5fd394*/
      ++v27.Buffer_field_1C; /*0x5fd399*/
      (*(void (__thiscall **)(int *))(v27.Buffer_field_10 + 112))(&v27.Buffer_field_10); /*0x5fd3a1*/
      (*(void (__thiscall **)(int *))(v27.Buffer_field_10 + 116))(&v27.Buffer_field_10); /*0x5fd3ac*/
      v25.Straw_field_0x04 = 0; /*0x5fd3b3*/
      v26 = 0; /*0x5fd3b9*/
      Buffer::Init(&v27, v6, Base64Data); /*0x5fd3c5*/
      v27.Buffer_field_0C = 0; /*0x5fd3ce*/
      *(_DWORD *)v25.__pad_0 = &BufferStraw::`vftable'; /*0x5fd3d9*/
      LCWStraw::Constructor(&v28, 1, 0x2000); /*0x5fd3e1*/
      Delegate::Set((Straw *)&v28, (int)&v25); /*0x5fd3ef*/
      for ( i = 0; i < 512; ++i ) /*0x5fd3f4*/
      {
        for ( j = 0; j < 512; ++j ) /*0x5fd3f6*/
        {
          v22 = j; /*0x5fd403*/
          v23 = i; /*0x5fd408*/
          *(_DWORD *)v21 = -1; /*0x5fd40d*/
          LCW::DecompressReader(&v28, v21, 1); /*0x5fd415*/
          if ( *(_DWORD *)v21 != -1 ) /*0x5fd421*/
          {
            *(_DWORD *)v21 = (unsigned __int8)v21[0]; /*0x5fd42f*/
            if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)stru_A83D50.__pad_34 /*0x5fd48c*/
                                                              + 4 * (unsigned __int8)v21[0])
                                                + 156))(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34
                                                                  + 4 * (unsigned __int8)v21[0]))
               || *(_DWORD *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * *(_DWORD *)v21) + 668))
              && (!*(_DWORD *)&dword_A8B238
               || !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * *(_DWORD *)v21) + 682))
              && (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], &v22) )
            {
              v9 = *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &v22) + 286); /*0x5fd4a4*/
              v10 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x5fd4af*/
              if ( v10 ) /*0x5fd4b9*/
                Object::SpawnAtCell(v10, *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * *(_DWORD *)v21), &v22, -1); /*0x5fd4d2*/
              if ( *(_DWORD *)v21 == 24 || *(_DWORD *)v21 == 25 || *(_DWORD *)v21 == 237 || *(_DWORD *)v21 == 238 ) /*0x5fd4f1*/
                *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &v22) + 286) = v9; /*0x5fd502*/
            }
          }
        }
      }
      --v27.Buffer_field_1C; /*0x5fd52b*/
      LCWStraw::Dtor(&v28); /*0x5fd52f*/
      Vector::Clear((int)&v27); /*0x5fd538*/
      Straw::Dtor(&v25); /*0x5fd541*/
    }
    v11 = v27.Buffer_field_14; /*0x5fd54e*/
    v12 = v27.Buffer_field_18; /*0x5fd552*/
    v13 = v27.Buffer_field_24; /*0x5fd556*/
    (*(void (__thiscall **)(int *))(v27.Buffer_field_10 + 112))(&v27.Buffer_field_10); /*0x5fd564*/
    (*(void (__thiscall **)(int *))(v27.Buffer_field_10 + 116))(&v27.Buffer_field_10); /*0x5fd56f*/
    v14 = INIClass::GetBase64Data(v24, g_INI_Key_OverlayDataPack, v13, v11 * v12); /*0x5fd585*/
    if ( v14 > 0 ) /*0x5fd589*/
    {
      v15 = v27.Buffer_field_24; /*0x5fd597*/
      ++v27.Buffer_field_1C; /*0x5fd5a0*/
      (*(void (__thiscall **)(int *))(v27.Buffer_field_10 + 112))(&v27.Buffer_field_10); /*0x5fd5a4*/
      (*(void (__thiscall **)(int *))(v27.Buffer_field_10 + 116))(&v27.Buffer_field_10); /*0x5fd5af*/
      v25.Straw_field_0x04 = 0; /*0x5fd5b6*/
      v26 = 0; /*0x5fd5bc*/
      *(_DWORD *)v25.__pad_0 = &Straw::`vftable'; /*0x5fd5c0*/
      Buffer::Init(&v27, v15, v14); /*0x5fd5c8*/
      v27.Buffer_field_0C = 0; /*0x5fd5d1*/
      *(_DWORD *)v25.__pad_0 = &BufferStraw::`vftable'; /*0x5fd5dc*/
      LCWStraw::Constructor(&v28, 1, 0x2000); /*0x5fd5e4*/
      Delegate::Set((Straw *)&v28, (int)&v25); /*0x5fd5f2*/
      for ( k = 0; k < 512; ++k ) /*0x5fd5f7*/
      {
        for ( m = 0; m < 512; ++m ) /*0x5fd5f9*/
        {
          v22 = m; /*0x5fd606*/
          v23 = k; /*0x5fd60b*/
          HIBYTE(v20) = 0; /*0x5fd610*/
          LCW::DecompressReader(&v28, (char *)&v20 + 3, 1); /*0x5fd615*/
          if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], &v22) ) /*0x5fd624*/
          {
            v18 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &v22); /*0x5fd637*/
            v18[286] = HIBYTE(v20); /*0x5fd640*/
          }
        }
      }
      --v27.Buffer_field_1C; /*0x5fd661*/
      LCWStraw::Dtor(&v28); /*0x5fd665*/
      Vector::Clear((int)&v27); /*0x5fd66e*/
      Straw::Dtor(&v25); /*0x5fd677*/
    }
    --v27.Buffer_field_1C; /*0x5fd685*/
    Vector::Clear((int)&v27.Buffer_field_24); /*0x5fd689*/
  }
  return ProcessExpiredPointers(v20); /*0x5fd697*/
}



// ==== 0x005FD6A0  OverlayClass::WriteINI  this=INIClass  sig=csp ====
int __thiscall OverlayClass::WriteINI(char *this)
{
  int v2; // edi
  signed int v3; // ebx
  int v4; // esi
  int v5; // esi
  int v6; // eax
  int i; // esi
  char *v8; // eax
  int v9; // eax
  int v10; // edi
  signed int v11; // ebx
  int v12; // esi
  int v13; // esi
  int v14; // eax
  int j; // esi
  char *v16; // eax
  int v17; // eax
  __int16 v19; // [esp+1Ch] [ebp-8Ch] BYREF
  __int16 v20; // [esp+1Eh] [ebp-8Ah]
  int v21[3]; // [esp+20h] [ebp-88h] BYREF
  int v22[4]; // [esp+2Ch] [ebp-7Ch] BYREF
  int v23[3]; // [esp+3Ch] [ebp-6Ch] BYREF
  int v24[4]; // [esp+48h] [ebp-60h] BYREF
  int v25[10]; // [esp+58h] [ebp-50h] BYREF
  int v26[10]; // [esp+80h] [ebp-28h] BYREF

  INIClass::ClearSection((int *)this, (int)aOverlay, 0); /*0x5fd6b4*/
  INIClass::ClearSection((int *)this, (int)g_INI_Key_OverlayPack, 0); /*0x5fd6c2*/
  v2 = 0; /*0x5fd6cd*/
  v3 = 0; /*0x5fd6cf*/
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 128))(DSurface_Alternate); /*0x5fd6df*/
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 124))(DSurface_Alternate) * v4; /*0x5fd6e6*/
  v6 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0); /*0x5fd6f3*/
  v21[1] = 0; /*0x5fd6fa*/
  v21[2] = 0; /*0x5fd700*/
  Buffer::Init(v22, v6, v5); /*0x5fd70c*/
  v22[3] = 0; /*0x5fd715*/
  v21[0] = (int)&BufferPipe::`vftable'; /*0x5fd71f*/
  LCWPipe::Constructor(v26, 0, 0x2000); /*0x5fd727*/
  Pipe::SetDelegate(v26, (int)v21); /*0x5fd735*/
  do /*0x5fd776*/
  {
    for ( i = 0; i < 512; ++i ) /*0x5fd73a*/
    {
      v19 = i; /*0x5fd748*/
      v20 = v2; /*0x5fd74d*/
      v8 = (char *)CellCoord::To_CellObj(&dword_87F7E8, &v19); /*0x5fd752*/
      v3 += (signed int)LCW::Compress((int)v26, v8 + 68, 1); /*0x5fd764*/
    }
    ++v2; /*0x5fd76f*/
  }
  while ( v2 < 512 ); /*0x5fd776*/
  if ( v3 ) /*0x5fd77a*/
  {
    v9 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0); /*0x5fd78b*/
    INIClass::ReadBase64Data(this, (unsigned __int8 *)g_INI_Key_OverlayPack, v9, v3); /*0x5fd796*/
    (*(void (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 96))(DSurface_Alternate); /*0x5fd7a3*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 96))(DSurface_Alternate); /*0x5fd7ae*/
  INIClass::ClearSection((int *)this, (int)g_INI_Key_OverlayDataPack, 0); /*0x5fd7ba*/
  v10 = 0; /*0x5fd7c5*/
  v11 = 0; /*0x5fd7c7*/
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 128))(DSurface_Alternate); /*0x5fd7d7*/
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 124))(DSurface_Alternate) * v12; /*0x5fd7de*/
  v14 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0); /*0x5fd7eb*/
  v23[1] = 0; /*0x5fd7f2*/
  v23[2] = 0; /*0x5fd7f8*/
  v23[0] = (int)&Pipe::`vftable'; /*0x5fd7fc*/
  Buffer::Init(v24, v14, v13); /*0x5fd804*/
  v24[3] = 0; /*0x5fd80d*/
  v23[0] = (int)&BufferPipe::`vftable'; /*0x5fd817*/
  LCWPipe::Constructor(v25, 0, 0x2000); /*0x5fd81f*/
  Pipe::SetDelegate(v25, (int)v23); /*0x5fd82d*/
  do /*0x5fd870*/
  {
    for ( j = 0; j < 512; ++j ) /*0x5fd832*/
    {
      v19 = j; /*0x5fd840*/
      v20 = v10; /*0x5fd845*/
      v16 = (char *)CellCoord::To_CellObj(&dword_87F7E8, &v19); /*0x5fd84a*/
      v11 += (signed int)LCW::Compress((int)v25, v16 + 286, 1); /*0x5fd85e*/
    }
    ++v10; /*0x5fd869*/
  }
  while ( v10 < 512 ); /*0x5fd870*/
  if ( v11 ) /*0x5fd874*/
  {
    v17 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0); /*0x5fd885*/
    INIClass::ReadBase64Data(this, (unsigned __int8 *)g_INI_Key_OverlayDataPack, v17, v11); /*0x5fd890*/
    (*(void (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 96))(DSurface_Alternate); /*0x5fd89d*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 96))(DSurface_Alternate); /*0x5fd8a8*/
  LCWPipe::Dtor(v25); /*0x5fd8af*/
  Vector::Clear((int)v24); /*0x5fd8b8*/
  Pipe::Dtor(v23); /*0x5fd8c1*/
  LCWPipe::Dtor(v26); /*0x5fd8ca*/
  Vector::Clear((int)v22); /*0x5fd8d3*/
  return Pipe::Dtor(v21); /*0x5fd8e1*/
}



// ==== 0x005FD8F0  OverlayClass::LoadObject  this=OverlayClass  sig=csp ====
int __thiscall Object::LoadObject(OverlayClass *this, _DWORD *a2, int a3)
{
  int Register; // edi

  Register = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x5fd901*/
  if ( Register >= 0 ) /*0x5fd905*/
  {
    if ( a2 ) /*0x5fd909*/
    {
      ObjectClass::Init((ObjectClass *)a2, (int)&a3); /*0x5fd912*/
      *a2 = &OverlayClass::`vftable'; /*0x5fd917*/
      a2[1] = &OverlayClass::`vftable'; /*0x5fd91d*/
      a2[2] = &OverlayClass::`vftable'; /*0x5fd924*/
      a2[3] = &OverlayClass::`vftable'; /*0x5fd92b*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 43); /*0x5fd93e*/
  }
  return Register; /*0x5fd945*/
}



// ==== 0x005FD950  OverlayClass::SaveObject  this=OverlayClass  sig=csp ====
int __stdcall Object::SaveObject(OverlayClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x5fd964*/
}



// ==== 0x005FD970  OverlayClass::HandleAction  this=OverlayClass  sig=csp ====
void __thiscall Object::HandleAction(OverlayClass *this, int *a2, int *a3)
{
  int *location; // esi
  int v5; // ebp
  int GroundHeight; // eax
  int v7; // eax
  OverlayTypeClass **v8; // edx
  int v9; // ebx
  int v10; // edx
  int v11; // eax
  OverlayTypeClass *Type; // eax
  int v13; // edx
  OverlayTypeClass **v14; // esi
  int v15; // eax
  int v16; // esi
  int v17; // ecx
  int v18; // eax
  int DamageLevels; // ecx
  int v20; // esi
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  _DWORD *v25; // eax
  __int16 *v26; // eax
  int v27; // [esp-18h] [ebp-40h]
  __int16 *v28; // [esp-4h] [ebp-2Ch]
  int v29; // [esp+10h] [ebp-18h]
  int v30; // [esp+14h] [ebp-14h] BYREF
  char *v31; // [esp+18h] [ebp-10h]
  int v32; // [esp+1Ch] [ebp-Ch] BYREF
  int v33; // [esp+20h] [ebp-8h]
  int v34; // [esp+24h] [ebp-4h]

  location = this->?; /*0x5fd987*/
  v5 = (*((int (__thiscall **)(OverlayTypeClass *))this->Type->ObjectTypeClass + 39))(this->Type); /*0x5fd98d*/
  v32 = *location; /*0x5fd993*/
  v33 = this->?[1]; /*0x5fd99f*/
  v34 = this->?[2]; /*0x5fd9a6*/
  GroundHeight = Cell::GetGroundHeight(&v32); /*0x5fd9af*/
  v29 = ZCoordToScreenY(GroundHeight); /*0x5fd9c1*/
  v7 = 0; /*0x5fd9c5*/
  if ( *(int *)&stru_A83D50.__pad_3C[4] <= 0 ) /*0x5fd9c9*/
  {
LABEL_5:
    v7 = -1; /*0x5fd9e3*/
  }
  else
  {
    v8 = *(OverlayTypeClass ***)stru_A83D50.__pad_34; /*0x5fd9d1*/
    while ( *v8 != this->Type ) /*0x5fd9d9*/
    {
      ++v7; /*0x5fd9db*/
      ++v8; /*0x5fd9dc*/
      if ( v7 >= *(int *)&stru_A83D50.__pad_3C[4] ) /*0x5fd9e1*/
        goto LABEL_5; /*0x5fd9e1*/
    }
  }
  v9 = 0; /*0x5fd9ec*/
  v10 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v7); /*0x5fd9ee*/
  if ( *(_BYTE *)(v10 + 681) || *(_BYTE *)(v10 + 680) || *(_DWORD *)(v10 + 660) == 126 || *(_BYTE *)(v10 + 682) ) /*0x5fda0a*/
    v9 = -12; /*0x5fda12*/
  if ( *(_DWORD *)(v10 + 664) == 9 ) /*0x5fda1e*/
    --v9; /*0x5fda20*/
  if ( v7 == 126 ) /*0x5fda24*/
    --v9; /*0x5fda26*/
  v11 = v9 + a2[1]; /*0x5fda30*/
  v30 = *a2; /*0x5fda32*/
  v31 = (char *)DSurface_ViewBounds.field_4 + v11; /*0x5fda42*/
  Type = this->Type; /*0x5fda46*/
  if ( Type->IsVeinholeMonster ) /*0x5fda4c*/
  {
    v13 = 0; /*0x5fda5a*/
    if ( *(int *)&stru_A83D50.__pad_3C[4] <= 0 ) /*0x5fda5e*/
    {
LABEL_20:
      v13 = -1; /*0x5fda72*/
    }
    else
    {
      v14 = *(OverlayTypeClass ***)stru_A83D50.__pad_34; /*0x5fda60*/
      while ( *v14 != Type ) /*0x5fda68*/
      {
        ++v13; /*0x5fda6a*/
        ++v14; /*0x5fda6b*/
        if ( v13 >= *(int *)&stru_A83D50.__pad_3C[4] ) /*0x5fda70*/
          goto LABEL_20; /*0x5fda70*/
      }
    }
    v15 = *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * FindBuildingByTiberiumType(v13)); /*0x5fda8b*/
    v16 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(v15 + 192)); /*0x5fda93*/
    v17 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * *(_DWORD *)(*(_DWORD *)(v15 + 224) + 660)); /*0x5fdaa8*/
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 156))(v17); /*0x5fdaad*/
    if ( !v18 ) /*0x5fdab5*/
    {
      DamageLevels = this->Type->DamageLevels; /*0x5fdabd*/
      if ( DamageLevels ) /*0x5fdac5*/
        v18 = (*(int (__thiscall **)(int))(*(_DWORD *)DamageLevels + 156))(DamageLevels); /*0x5fdac9*/
    }
    DrawToSurfaceSHP( /*0x5fdb03*/
      (int)g_DSurface_Hidden_2,
      *(_DWORD *)(v16 + 780),
      v18,
      0,
      &v30,
      a3,
      3584,
      0,
      -2 - v29,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  }
  else if ( Type->Overrides ) /*0x5fdb08*/
  {
    if ( Type->LandType[0] == 167 ) /*0x5fdb20*/
      v31 -= 38; /*0x5fdb22*/
    v32 = *location; /*0x5fdb2b*/
    v33 = this->?[1]; /*0x5fdb32*/
    v34 = this->?[2]; /*0x5fdb41*/
    v20 = *(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)&dword_A83D4C[134].__pad_90[4]; /*0x5fdb60*/
    v27 = *(__int16 *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v32)->CellClass_field_10C; /*0x5fdb7c*/
    DrawToSurfaceSHP( /*0x5fdb9a*/
      (int)g_DSurface_Hidden_2,
      *(_DWORD *)(*(_DWORD *)v20 + 780),
      v5,
      0,
      &v30,
      a3,
      3584,
      0,
      -2 - v29,
      0,
      v27,
      0,
      0,
      0,
      0,
      0);
  }
  else
  {
    v21 = *location; /*0x5fdba1*/
    v22 = this->?[1]; /*0x5fdba3*/
    v34 = this->?[2]; /*0x5fdba9*/
    LOWORD(a2) = v21 / 256; /*0x5fdbb9*/
    HIWORD(a2) = v22 / 256; /*0x5fdbd1*/
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) ) /*0x5fdbe3*/
    {
      v23 = this->?[2]; /*0x5fdbee*/
      v24 = this->?[1]; /*0x5fdbf1*/
      v32 = *location; /*0x5fdbf4*/
      v34 = v23; /*0x5fdbfc*/
      v33 = v24; /*0x5fdc06*/
      v25 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v32); /*0x5fdc0a*/
    }
    else
    {
      v26 = (__int16 *)Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, &a2, &v30); /*0x5fdc21*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v26) ) /*0x5fdc2c*/
      {
        v28 = (__int16 *)Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, &a2, &v30); /*0x5fdc4a*/
        v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v28); /*0x5fdc4b*/
      }
      else
      {
        LOWORD(a2) = 1; /*0x5fdc58*/
        HIWORD(a2) = *(_WORD *)&stru_87F5F0.__pad_58[660]; /*0x5fdc5f*/
        v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x5fdc6a*/
      }
    }
    DrawToSurfaceSHP( /*0x5fdcaa*/
      (int)g_DSurface_Hidden_2,
      v25[13],
      v5,
      0,
      &v30,
      a3,
      3584,
      0,
      -2 - v29,
      0,
      *((__int16 *)v25 + 134),
      0,
      0,
      0,
      0,
      0);
  }
}



// ==== 0x005FDCC0  globalHelper_0FDCC0  this=-  sig=csp ====
_DWORD *__fastcall sub_5FDCC0(_DWORD *a1, int a2)
{
  _DWORD *result; // eax
  int v3; // esi
  int v4; // ecx

  result = a1; /*0x5fdcc0*/
  v3 = *((_DWORD *)dword_A83D84 + a2); /*0x5fdccd*/
  v4 = 0; /*0x5fdcd0*/
  if ( *(_BYTE *)(v3 + 681) || *(_BYTE *)(v3 + 680) || *(_DWORD *)(v3 + 660) == 126 || *(_BYTE *)(v3 + 682) ) /*0x5fdcef*/
    v4 = -12; /*0x5fdcf9*/
  if ( *(_DWORD *)(v3 + 664) == 9 ) /*0x5fdd05*/
    --v4; /*0x5fdd07*/
  if ( a2 == 126 ) /*0x5fdd0b*/
    --v4; /*0x5fdd0d*/
  *result = 0; /*0x5fdd0e*/
  result[1] = v4; /*0x5fdd12*/
  return result; /*0x5fdd10*/
}



// ==== 0x005FDD20  FindBuildingByTiberiumType  this=MixFileClass  sig=csp ====
int __fastcall Building_FindByTiberiumType(int a1)
{
  int v1; // eax
  int v2; // ebx
  char *v3; // edi
  _DWORD *v4; // eax
  int v5; // edx
  int v6; // esi
  const char *v8[17]; // [esp-34h] [ebp-48h] BYREF
  int v9; // [esp+10h] [ebp-4h]

  if ( a1 == -1 ) /*0x5fdd28*/
    return -1; /*0x5fdd28*/
  v1 = *((_DWORD *)dword_A83D84 + a1); /*0x5fdd33*/
  v9 = v1; /*0x5fdd36*/
  if ( !*(_BYTE *)(v1 + 681) ) /*0x5fdd3a*/
    return -1; /*0x5fddd8*/
  v2 = 0; /*0x5fdd4e*/
  if ( dword_B0F4F8 <= 0 ) /*0x5fdd52*/
  {
LABEL_11:
    qmemcpy(v8, (const void *)(v1 + 100), 0x31u); /*0x5fdda4*/
    Debug::Log("Overlay %s not really tiberium\n", v8[0]); /*0x5fddb9*/
    return 0; /*0x5fddc1*/
  }
  else
  {
    v3 = (char *)dword_B0F4EC; /*0x5fdd54*/
    while ( 1 ) /*0x5fdd5a*/
    {
      v4 = *(_DWORD **)v3; /*0x5fdd5a*/
      v5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 224) + 660); /*0x5fdd62*/
      if ( a1 >= v5 && a1 < v5 + v4[58] ) /*0x5fdd76*/
        break; /*0x5fdd76*/
      v6 = v4[58]; /*0x5fdd78*/
      if ( a1 >= v6 + v5 && a1 < v5 + v6 + v4[59] ) /*0x5fdd91*/
        break; /*0x5fdd91*/
      ++v2; /*0x5fdd98*/
      v3 += 4; /*0x5fdd99*/
      if ( v2 >= dword_B0F4F8 ) /*0x5fdd9e*/
      {
        v1 = v9; /*0x5fdda0*/
        goto LABEL_11; /*0x5fdda0*/
      }
    }
    return v4[38]; /*0x5fddc9*/
  }
}



// ==== 0x005FDDE0  OverlayClass::ProcessEvent  this=OverlayClass  sig=csp ====
int __thiscall Object::ProcessEvent(OverlayClass *this)
{
  return (int)this->Type; /*0x5fdde6*/
}



// ==== 0x005FDDF0  ObjectClass::ResetBuildingState  this=ObjectClass  sig=csp ====
void ResetBuildingState(ObjectClass *this)
{
  int v1; // esi
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int i; // edi
  BuildingClass *v6; // esi
  void **v7; // [esp+Ch] [ebp-18h] BYREF
  void *Block; // [esp+10h] [ebp-14h]
  int v9; // [esp+14h] [ebp-10h]
  char v10; // [esp+18h] [ebp-Ch]
  char v11; // [esp+19h] [ebp-Bh]
  int v12; // [esp+1Ch] [ebp-8h]
  int v13; // [esp+20h] [ebp-4h]

  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5fddfb*/
  v1 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5fde0a*/
  v2 = 0; /*0x5fde0e*/
  v3 = 1000; /*0x5fde10*/
  Block = 0; /*0x5fde17*/
  v9 = 0; /*0x5fde1b*/
  v10 = 1; /*0x5fde1f*/
  v11 = 0; /*0x5fde24*/
  v7 = &DynamicVectorClass<CellClass *>::`vftable'; /*0x5fde28*/
  v12 = 0; /*0x5fde30*/
  v13 = 1000; /*0x5fde34*/
  if ( v1 ) /*0x5fde38*/
  {
    while ( 1 ) /*0x5fde47*/
    {
      if ( *(_DWORD *)(v1 + 68) == 126 ) /*0x5fde4b*/
      {
        if ( *(_BYTE *)(v1 + 286) >= 0x30u /*0x5fde76*/
          && (v12 < v2
           || (v11 || !v2) && v3 > 0 && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v7[2])(&v7, v3 + v2, 0)) )
        {
          v4 = v12++; /*0x5fde81*/
          *((_DWORD *)Block + v4) = v1; /*0x5fde8c*/
        }
        *(_DWORD *)(v1 + 68) = -1; /*0x5fde8f*/
        *(_BYTE *)(v1 + 286) = 0; /*0x5fde92*/
      }
      v1 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5fdea2*/
      if ( !v1 ) /*0x5fdea6*/
        break; /*0x5fdea6*/
      v2 = v9; /*0x5fde3f*/
      v3 = v13; /*0x5fde43*/
    }
  }
  for ( i = v12 - 1; i >= 0; --i ) /*0x5fdeb1*/
  {
    v6 = (BuildingClass *)*((_DWORD *)Block + i); /*0x5fdeb7*/
    if ( (unsigned __int8)BuildingClass::CheckAdjacentCells((int)v6) ) /*0x5fdebc*/
      BuildingClass::VisualizePlacement(v6); /*0x5fdec7*/
  }
  v7 = &VectorClass<CellClass *>::`vftable'; /*0x5fded3*/
  if ( Block ) /*0x5fdedd*/
  {
    if ( v11 ) /*0x5fdee3*/
      __3_YAXPAX_Z(Block); /*0x5fdee6*/
  }
}



// ==== 0x005FDF00  OverlayClass::StubReturn176  this=OverlayClass  sig=csp ====
int Object::StubReturn176(OverlayClass *this)
{
  return 176; /*0x5fdf05*/
}



// ==== 0x005FDF10  OverlayClass::ddtor  this=OverlayClass  sig=csp ====
int __stdcall Object::ddtor(OverlayClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x5fdf16*/
    return -2147467261; /*0x5fdf18*/
  *a2 = 237448647; /*0x5fdf26*/
  a2[1] = 298949647; /*0x5fdf2e*/
  a2[2] = -1610610249; /*0x5fdf37*/
  a2[3] = -777003740; /*0x5fdf40*/
  return 0; /*0x5fdf1d*/
}



// ==== 0x005FDF50  OverlayClass::StubReturn20  this=OverlayClass  sig=csp ====
int Object::StubReturn20(OverlayClass *this)
{
  return 20; /*0x5fdf55*/
}



// ==== 0x005FDF60  OverlayClass::nullsub_212  this=OverlayClass  sig=csp ====
void __stdcall nullsub_212(OverlayClass *this, int a2)
{
  ; /*0x5fdf60*/
}



// ==== 0x005FDF70  OverlayClass::DrawObject  this=OverlayClass  sig=csp ====
void **__thiscall Object::DrawObject(OverlayClass *this, char a2)
{
  int v3; // eax
  OverlayClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->ObjectClass = &OverlayClass::`vftable'; /*0x5fdf76*/
  this->? = &OverlayClass::`vftable'; /*0x5fdf7c*/
  this->? = &OverlayClass::`vftable'; /*0x5fdf83*/
  this->? = &OverlayClass::`vftable'; /*0x5fdf8a*/
  AbstractClass::AnnounceExpiredPointer(&this->ObjectClass, 1); /*0x5fdf91*/
  v5 = this; /*0x5fdfa6*/
  v3 = (*(int (__thiscall **)(_BYTE *, OverlayClass **))(*(_DWORD *)&stru_A8EB00.?[108] + 16))(&stru_A8EB00.?[108], &v5); /*0x5fdfaa*/
  if ( v3 != -1 && v3 < *(int *)&stru_A8EB00.?[124] ) /*0x5fdfba*/
  {
    --*(_DWORD *)&stru_A8EB00.?[124]; /*0x5fdfbf*/
    for ( ; /*0x5fdfc5*/
          v3 < *(int *)&stru_A8EB00.?[124];
          *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[112] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[112] + 4 * v3) )
    {
      ++v3; /*0x5fdfcd*/
    }
  }
  if ( byte_A8E9A0 ) /*0x5fdfe6*/
    ObjectClass::Undeploy((ObjectClass *)this); /*0x5fdfea*/
  this->Type = 0; /*0x5fdff1*/
  ObjectClass::Dtor((ObjectClass *)this); /*0x5fdffb*/
  if ( (a2 & 1) != 0 ) /*0x5fe005*/
    __3_YAXPAX_Z(this); /*0x5fe008*/
  return &this->ObjectClass; /*0x5fe012*/
}



// ==== 0x005FE020  OverlayClass::updateOverlayState  this=OverlayClass  sig=csp ====
_DWORD *__thiscall OverlayClass::updateOverlayState(OverlayClass *this, int a2, int a3)
{
  this->? = (void *)a2; /*0x5fe02a*/
  this->? = (void *)a3; /*0x5fe02d*/
  this->? = 0; /*0x5fe030*/
  this->ObjectClass = &XSurface_Vtable; /*0x5fe037*/
  return &this->ObjectClass; /*0x5fe03d*/
}



// ==== 0x005FE040  sub_5FE040  this=-  sig=ida-proto ====
int sub_5FE040()
{
  dword_AC15F8 = 0; /*0x5fe042*/
  dword_AC15FC = 0; /*0x5fe047*/
  dword_AC1600 = 0; /*0x5fe04c*/
  dword_AC1604 = 0; /*0x5fe051*/
  return 0; /*0x5fe056*/
}



// ==== 0x005FE060  sub_5FE060  this=-  sig=ida-proto ====
void sub_5FE060()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5fe06c*/
  dbl_AC1610 = Math::Sqrt(v0 + v0); /*0x5fe07e*/
}



// ==== 0x005FE090  sub_5FE090  this=-  sig=ida-proto ====
void sub_5FE090()
{
  dbl_AC1668 = dbl_AC1610 / 60.0; /*0x5fe09c*/
}



// ==== 0x005FE0B0  sub_5FE0B0  this=-  sig=ida-proto ====
void sub_5FE0B0()
{
  dbl_AC1650 = 1.0 / dbl_AC1668; /*0x5fe0bc*/
}



// ==== 0x005FE0D0  sub_5FE0D0  this=-  sig=ida-proto ====
void sub_5FE0D0()
{
  dbl_AC1648 = 0.0174532925199433 * 45.0; /*0x5fe0dc*/
}



// ==== 0x005FE0F0  sub_5FE0F0  this=-  sig=ida-proto ====
void sub_5FE0F0()
{
  dbl_AC1618 = 0.0174532925199433 * 60.0; /*0x5fe0fc*/
}



// ==== 0x005FE110  sub_5FE110  this=-  sig=ida-proto ====
void sub_5FE110()
{
  dbl_AC15F0 = 0.0174532925199433 * 90.0; /*0x5fe11c*/
}



// ==== 0x005FE130  sub_5FE130  this=-  sig=ida-proto ====
__int64 sub_5FE130()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC15F0 - dbl_AC1618); /*0x5fe142*/
  result = Math::RoundToInt(v0 * dbl_AC1610 * 0.5); /*0x5fe156*/
  dword_AC1670 = result; /*0x5fe15b*/
  return result; /*0x5fe160*/
}



// ==== 0x005FE170  sub_5FE170  this=-  sig=ida-proto ====
void sub_5FE170()
{
  dbl_AC1620 = Math::ArcTan((double)dword_AC1670 * 0.00390625); /*0x5fe187*/
}



// ==== 0x005FE1A0  sub_5FE1A0  this=-  sig=ida-proto ====
void sub_5FE1A0()
{
  dbl_AC1638 = Math::ArcTan((double)(2 * dword_AC1670) / dbl_AC1610); /*0x5fe1c2*/
}



// ==== 0x005FE1D0  sub_5FE1D0  this=-  sig=ida-proto ====
__int64 sub_5FE1D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1670) + 0.5); /*0x5fe1eb*/
  dword_AC1664 = result; /*0x5fe1f0*/
  return result; /*0x5fe1f6*/
}



// ==== 0x005FE200  sub_5FE200  this=-  sig=ida-proto ====
int sub_5FE200()
{
  word_AC1608 = 0; /*0x5fe202*/
  word_AC160A = 0; /*0x5fe208*/
  return 0; /*0x5fe20e*/
}



// ==== 0x005FE210  sub_5FE210  this=-  sig=ida-proto ====
int sub_5FE210()
{
  dword_AC1628 = 0; /*0x5fe212*/
  dword_AC162C = 0; /*0x5fe217*/
  dword_AC1630 = 0; /*0x5fe21c*/
  return 0; /*0x5fe221*/
}



// ==== 0x005FE230  sub_5FE230  this=-  sig=ida-proto ====
int sub_5FE230()
{
  dword_AC1660 = 0; /*0x5fe235*/
  dword_AC1658 = 128; /*0x5fe23f*/
  dword_AC165C = 128; /*0x5fe244*/
  return 128; /*0x5fe249*/
}



// ==== 0x005FE250  OverlayTypeClass::OverlayTypeClass  this=OverlayTypeClass  sig=csp ====
_DWORD *__thiscall OverlayTypeClass::OverlayTypeClass(OverlayTypeClass *this, char *Source)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  OverlayTypeClass **v6; // edx

  ObjectTypeClass::ConstructFull((int *)this, Source); /*0x5fe259*/
  this->Strength = 1; /*0x5fe265*/
  *(_DWORD *)&this->Wall = 1; /*0x5fe26b*/
  this->Explodes = 1; /*0x5fe271*/
  this->RadarColor[1] = 1; /*0x5fe277*/
  this->LandType[0] = -1; /*0x5fe280*/
  this->CellAnim = 0; /*0x5fe28a*/
  this->DamageLevels = 0; /*0x5fe290*/
  this->NoUseTileLandType = 0; /*0x5fe296*/
  this->IsVeinholeMonster = 0; /*0x5fe29c*/
  this->IsVeins = 0; /*0x5fe2a2*/
  this->ImageLoaded = 0; /*0x5fe2a8*/
  this->ChainReaction = 0; /*0x5fe2ae*/
  this->Overrides = 0; /*0x5fe2b4*/
  this->DrawFlat = 0; /*0x5fe2ba*/
  this->IsRubble = 0; /*0x5fe2c0*/
  this->IsARock = 0; /*0x5fe2c6*/
  this->RadarColor[0] = 0; /*0x5fe2cc*/
  this->RadarColor[2] = 0; /*0x5fe2d2*/
  this->__tail_2B5[0] = 0; /*0x5fe2d8*/
  this->__tail_2B5[1] = 0; /*0x5fe2de*/
  this->__tail_2B5[2] = 0; /*0x5fe2e4*/
  *((_BYTE *)this + 696) = 0; /*0x5fe2ea*/
  this->ObjectTypeClass = &OverlayTypeClass::`vftable'; /*0x5fe2f1*/
  this->? = &OverlayTypeClass::`vftable'; /*0x5fe2f7*/
  this->? = &OverlayTypeClass::`vftable'; /*0x5fe2fd*/
  this->? = &OverlayTypeClass::`vftable'; /*0x5fe304*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x5fe30b*/
  this->? = 1; /*0x5fe310*/
  this->? = 0; /*0x5fe317*/
  this->? = 1; /*0x5fe31d*/
  this->? = 0; /*0x5fe324*/
  v3 = *(_DWORD *)&stru_A83D50.__pad_3C[4]; /*0x5fe32a*/
  if ( *(int *)&stru_A83D50.__pad_3C[4] < (int)stru_A83D50.SuperClass_field_0x38 /*0x5fe368*/
    || (stru_A83D50.__pad_3C[1] || !stru_A83D50.SuperClass_field_0x38)
    && *(int *)&stru_A83D50.__pad_3C[8] > 0
    && (v4 = (*((unsigned __int8 (__thiscall **)(void **, char *, _DWORD))stru_A83D50.SuperClass_field_0x30 + 2))(
               &stru_A83D50.SuperClass_field_0x30,
               (char *)stru_A83D50.SuperClass_field_0x38 + *(_DWORD *)&stru_A83D50.__pad_3C[8],
               0) == 0,
        v3 = *(_DWORD *)&stru_A83D50.__pad_3C[4],
        !v4) )
  {
    *(_DWORD *)&stru_A83D50.__pad_3C[4] = v3 + 1; /*0x5fe36d*/
    *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v3) = this; /*0x5fe377*/
    v3 = *(_DWORD *)&stru_A83D50.__pad_3C[4]; /*0x5fe37a*/
  }
  v5 = 0; /*0x5fe37f*/
  if ( v3 <= 0 ) /*0x5fe383*/
  {
LABEL_11:
    this->LandType[0] = -1; /*0x5fe397*/
    return &this->ObjectTypeClass; /*0x5fe3a0*/
  }
  else
  {
    v6 = *(OverlayTypeClass ***)stru_A83D50.__pad_34; /*0x5fe385*/
    while ( *v6 != this ) /*0x5fe38d*/
    {
      ++v5; /*0x5fe38f*/
      ++v6; /*0x5fe390*/
      if ( v5 >= v3 ) /*0x5fe395*/
        goto LABEL_11; /*0x5fe395*/
    }
    this->LandType[0] = v5; /*0x5fe3a7*/
    return &this->ObjectTypeClass; /*0x5fe3ad*/
  }
}



// ==== 0x005FE4C0  OverlayTypeClass::GetTile  this=OverlayTypeClass  sig=csp ====
int *__stdcall OverlayTypeClass::GetTile(OverlayTypeClass *this)
{
  if ( (byte_AC15E8 & 1) == 0 ) /*0x5fe4cb*/
  {
    byte_AC15E8 |= 1u; /*0x5fe4e6*/
    dword_AC1640 = 0; /*0x5fe4ec*/
    dword_AC1644 = 2147450879; /*0x5fe504*/
    atexit(nullsub_213); /*0x5fe50a*/
  }
  return &dword_AC1640; /*0x5fe518*/
}



// ==== 0x005FE520  nullsub_213  this=-  sig=ida-proto ====
void __cdecl nullsub_213()
{
  ; /*0x5fe520*/
}



// ==== 0x005FE530  OverlayTypeClass::GetType  this=OverlayTypeClass  sig=csp ====
bool __thiscall OverlayTypeClass::GetType(OverlayTypeClass *this, __int16 *a2, int a3)
{
  Object *v4; // eax

  v4 = (Object *)__2_YAPAXI_Z(0xB0u); /*0x5fe538*/
  return v4 && Object::SpawnAtCell(v4, (int)this, a2, -1); /*0x5fe559*/
}



// ==== 0x005FE570  OverlayTypeClass::GetDamage  this=OverlayTypeClass  sig=csp ====
void *__thiscall OverlayTypeClass::GetDamage(OverlayTypeClass *this, int a2)
{
  Object *v3; // eax

  v3 = (Object *)__2_YAPAXI_Z(0xB0u); /*0x5fe578*/
  if ( v3 ) /*0x5fe582*/
    return Object::SpawnAtCell(v3, (int)this, &word_AC1608, -1); /*0x5fe58e*/
  else
    return 0; /*0x5fe597*/
}



// ==== 0x005FE5A0  OverlayTypeClass::GetLandType  this=OverlayTypeClass  sig=csp ====
void __thiscall OverlayTypeClass::GetLandType(OverlayTypeClass *this, _DWORD *a2, int *a3, unsigned int a4)
{
  char *v4; // edx
  int v5; // eax
  int v6[2]; // [esp+8h] [ebp-8h] BYREF

  v4 = (char *)DSurface_ViewBounds.field_4 + a2[1] + 15; /*0x5fe5c1*/
  v6[0] = DSurface_ViewBounds.field_0 + *a2 + 30; /*0x5fe5c4*/
  v6[1] = (int)v4; /*0x5fe5c8*/
  v5 = (*((int (__thiscall **)(OverlayTypeClass *))this->ObjectTypeClass + 39))(this); /*0x5fe5f3*/
  DrawToSurfaceSHP( /*0x5fe606*/
    (int)g_DSurface_Hidden_2,
    *(int *)&stru_87F5F0.__pad_58[112],
    v5,
    a4,
    v6,
    a3,
    1536,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
}



// ==== 0x005FE620  LoadBuildingTypeClassSHPs  this=-  sig=ida-proto ====
int __fastcall LoadBuildingTypeClassSHPs(int a1)
{
  int result; // eax
  int v2; // ebp
  int v4; // esi
  char v5; // al
  int v6; // eax
  int v7; // eax
  char Buffer[512]; // [esp+Ch] [ebp-200h] BYREF

  result = dword_A83D90; /*0x5fe620*/
  v2 = 0; /*0x5fe62f*/
  if ( dword_A83D90 > 0 ) /*0x5fe636*/
  {
    while ( 1 ) /*0x5fe642*/
    {
      v4 = *((_DWORD *)&dword_A83D84->TechnoTypeClass + v2); /*0x5fe642*/
      v5 = *(_BYTE *)(v4 + 556); /*0x5fe64d*/
      if ( *(_BYTE *)(v4 + 687) ) /*0x5fe645*/
      {
        if ( (v5 || *(_BYTE *)(v4 + 567)) && *(_DWORD *)(v4 + 164) && *(_BYTE *)(v4 + 168) ) /*0x5fe737*/
        {
          __3_YAXPAX_Z(*(void **)(v4 + 164)); /*0x5fe740*/
          *(_DWORD *)(v4 + 164) = 0; /*0x5fe748*/
          *(_BYTE *)(v4 + 168) = 0; /*0x5fe74e*/
        }
        goto LABEL_14; /*0x5fe74e*/
      }
      if ( !v5 ) /*0x5fe65b*/
        break; /*0x5fe65b*/
      _makepath(Buffer, 0, 0, (const char *)(v4 + 504), (const char *)&off_7E1BC6 + 112 * a1); /*0x5fe67e*/
      v6 = SearchMIXFile(Buffer, 1); /*0x5fe68c*/
      *(_DWORD *)(v4 + 164) = v6; /*0x5fe693*/
      if ( !v6 ) /*0x5fe699*/
        goto LABEL_5; /*0x5fe699*/
LABEL_14:
      result = dword_A83D90; /*0x5fe754*/
      if ( ++v2 >= dword_A83D90 ) /*0x5fe75c*/
        return result; /*0x5fe75c*/
    }
    if ( !*(_BYTE *)(v4 + 567) ) /*0x5fe6be*/
      goto LABEL_14; /*0x5fe6be*/
    _makepath(Buffer, 0, 0, (const char *)(v4 + 504), Ext); /*0x5fe6dd*/
    TheaterObjectTypeClassSpecificID(Buffer, a1); /*0x5fe6eb*/
    v7 = SearchMIXFile(Buffer, 1); /*0x5fe6f6*/
    *(_DWORD *)(v4 + 164) = v7; /*0x5fe6fd*/
    if ( v7 ) /*0x5fe703*/
      goto LABEL_14; /*0x5fe703*/
LABEL_5:
    ObjectTypeClass::SetRTTI71(Buffer); /*0x5fe69f*/
    *(_DWORD *)(v4 + 164) = SearchMIXFile(Buffer, 1); /*0x5fe6b3*/
    goto LABEL_14; /*0x5fe6b9*/
  }
  return result; /*0x5fe763*/
}



// ==== 0x005FE770  OverlayTypeClass::LoadFromINI  this=OverlayTypeClass  sig=csp ====
char __thiscall OverlayTypeClass::LoadFromINI(OverlayTypeClass *this, unsigned __int8 ***a2)
{
  AnimTypeClass *INIString; // eax
  int v4; // ecx
  int Int_Overwrite; // eax
  char Bool_Overwrite; // al
  char IsVeins; // cl
  char v8; // al
  char v9; // al
  char v10; // cl
  char v11; // al
  int DamageLevels; // ebp
  _DWORD *v13; // eax
  AnimTypeClass *CellAnim; // eax
  int Coord; // eax
  char v16; // al
  char ChainReaction; // cl
  char v18; // al
  char v19; // al
  char v20; // cl
  char v21; // al
  char NoUseTileLandType; // [esp-Ch] [ebp-298h]
  char ImageLoaded; // [esp-Ch] [ebp-298h]
  char Explodes; // [esp-Ch] [ebp-298h]
  char Overrides; // [esp-Ch] [ebp-298h]
  char v27; // [esp-Ch] [ebp-298h]
  int v28; // [esp+8h] [ebp-284h] BYREF
  char Destination[128]; // [esp+Ch] [ebp-280h] BYREF
  char Buffer[512]; // [esp+8Ch] [ebp-200h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x5fe783*/
  if ( !ObjectTypeClass::LoadFromINI((ObjectTypeClass *)this, a2) ) /*0x5fe78b*/
    return 0; /*0x5fea1f*/
  INIString = (AnimTypeClass *)OverlayTypeClass::ReadINIString( /*0x5fe7ac*/
                                 (OverlayTypeClass *)a2,
                                 (unsigned __int8 *)this->?,
                                 aLand,
                                 (unsigned int)this->CellAnim);
  v4 = *(_DWORD *)&this->Wall; /*0x5fe7b1*/
  this->CellAnim = INIString; /*0x5fe7b7*/
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)this->?, aStrength, v4); /*0x5fe7c6*/
  NoUseTileLandType = this->NoUseTileLandType; /*0x5fe7d3*/
  *(_DWORD *)&this->Wall = Int_Overwrite; /*0x5fe7da*/
  this->NoUseTileLandType = INIClass::ReadBool_Overwrite( /*0x5fe7e5*/
                              (int *)a2,
                              (unsigned __int8 *)this->?,
                              g_INI_Key_Wall,
                              NoUseTileLandType);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5fe7fa*/
                     (int *)a2,
                     (unsigned __int8 *)this->?,
                     (unsigned __int8 *)g_INI_Key_Tiberium,
                     this->IsVeinholeMonster);
  IsVeins = this->IsVeins; /*0x5fe7ff*/
  this->IsVeinholeMonster = Bool_Overwrite; /*0x5fe805*/
  v8 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aCrate, IsVeins); /*0x5fe814*/
  ImageLoaded = this->ImageLoaded; /*0x5fe821*/
  this->IsVeins = v8; /*0x5fe828*/
  this->ImageLoaded = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aCratetrigger, ImageLoaded); /*0x5fe833*/
  v9 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aExplodes, this->IsRubble); /*0x5fe848*/
  v10 = this->RadarColor[0]; /*0x5fe84d*/
  this->IsRubble = v9; /*0x5fe853*/
  v11 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aOverrides, v10); /*0x5fe862*/
  DamageLevels = this->DamageLevels; /*0x5fe867*/
  this->RadarColor[0] = v11; /*0x5fe884*/
  if ( INIClass::GetString( /*0x5fe88a*/
         (INIClass *)a2,
         (unsigned __int8 *)this->?,
         aCellanim,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v13 = AnimTypeClass::FindOrCreate(Destination); /*0x5fe897*/
  }
  else
  {
    v13 = (_DWORD *)DamageLevels; /*0x5fe89e*/
  }
  this->DamageLevels = (int)v13; /*0x5fe8a0*/
  this->Strength = INIClass::ReadInt_Overwrite( /*0x5fe8c3*/
                     (bool *)&DSurface_ViewBounds.__pad_FC[228],
                     (unsigned __int8 *)this->?,
                     aDamagelevels,
                     this->Strength);
  if ( this->IsVeinholeMonster ) /*0x5fe8c9*/
  {
    CellAnim = this->CellAnim; /*0x5fe8d3*/
    this->?[0] = 6; /*0x5fe8d9*/
    if ( !CellAnim ) /*0x5fe8e5*/
      this->CellAnim = (AnimTypeClass *)5; /*0x5fe8e7*/
  }
  if ( !this->? && !this->DrawFlat ) /*0x5fe8fb*/
  {
    _makepath(Buffer, 0, 0, this->?, Ext); /*0x5fe917*/
    this->? = (SHPStruct *)SearchMIXFile(Buffer, 1); /*0x5fe92d*/
  }
  Coord = INIClass::GetCoord( /*0x5fe947*/
            (INIClass *)a2,
            (int)&v28,
            (unsigned __int8 *)this->?,
            aRadarcolor,
            (unsigned __int8 *)&this->__tail_2B5[1]);
  *(_WORD *)&this->__tail_2B5[1] = *(_WORD *)Coord; /*0x5fe94f*/
  Explodes = this->Explodes; /*0x5fe95e*/
  *((_BYTE *)this + 696) = *(_BYTE *)(Coord + 2); /*0x5fe965*/
  v16 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aNousetilelandt, Explodes); /*0x5fe968*/
  ChainReaction = this->ChainReaction; /*0x5fe96d*/
  this->Explodes = v16; /*0x5fe973*/
  v18 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aIsveinholemons, ChainReaction); /*0x5fe982*/
  Overrides = this->Overrides; /*0x5fe98f*/
  this->ChainReaction = v18; /*0x5fe996*/
  this->Overrides = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aIsveins, Overrides); /*0x5fe9a1*/
  v19 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aChainreaction, this->IsARock); /*0x5fe9b6*/
  v20 = this->RadarColor[1]; /*0x5fe9bb*/
  this->IsARock = v19; /*0x5fe9c1*/
  v21 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aDrawflat, v20); /*0x5fe9d0*/
  v27 = this->__tail_2B5[0]; /*0x5fe9dd*/
  this->RadarColor[1] = v21; /*0x5fe9e4*/
  this->__tail_2B5[0] = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aIsarock, v27); /*0x5fe9ef*/
  this->RadarColor[2] = INIClass::ReadBool_Overwrite( /*0x5fea0a*/
                          (int *)a2,
                          (unsigned __int8 *)this->?,
                          aIsrubble,
                          this->RadarColor[2]);
  return 1; /*0x5fea11*/
}



// ==== 0x005FEA30  OverlayTypeClass::g_var_4f9ac2  this=OverlayTypeClass  sig=csp ====
_DWORD *__stdcall OverlayTypeClass::g_var_4f9ac2(OverlayTypeClass *this, _DWORD *a2)
{
  this->ObjectTypeClass = (void *)*a2; /*0x5fea3d*/
  this->? = (void *)a2[1]; /*0x5fea42*/
  this->? = (void *)a2[2]; /*0x5fea49*/
  return &this->ObjectTypeClass; /*0x5fea45*/
}



// ==== 0x005FEA50  OverlayTypeClass::PowerDrainUpdate  this=OverlayTypeClass  sig=csp ====
int __thiscall OverlayTypeClass::PowerDrainUpdate(OverlayTypeClass *this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x5fea59*/
  Power::TimerProcess(this->LandType[0]); /*0x5fea67*/
  Power::TimerProcess((int)this->CellAnim); /*0x5fea75*/
  Power::TimerProcess(this->Strength); /*0x5fea83*/
  Power::TimerProcess(*(_DWORD *)&this->Wall); /*0x5fea91*/
  LOBYTE(v3) = this->NoUseTileLandType; /*0x5fea96*/
  Power::FlagProcess((Power *)a2, v3); /*0x5fea9f*/
  LOBYTE(v4) = this->IsVeinholeMonster; /*0x5feaa4*/
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x5feaad*/
  LOBYTE(v5) = this->IsVeins; /*0x5feab2*/
  Power::FlagProcess((Power *)a2, v5); /*0x5feabb*/
  LOBYTE(v6) = this->ImageLoaded; /*0x5feac0*/
  Power::FlagProcess((Power *)a2, v6); /*0x5feac9*/
  LOBYTE(v7) = this->IsRubble; /*0x5feace*/
  return Power::FlagProcess((Power *)a2, v7); /*0x5feadc*/
}



// ==== 0x005FEAF0  OverlayTypeClass::SaveLoad_Prefix  this=OverlayTypeClass  sig=csp ====
int __stdcall OverlayTypeClass::SaveLoad_Prefix(OverlayTypeClass *this, int a2)
{
  int result; // eax
  char v3[513]; // [esp+7h] [ebp-201h] BYREF

  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2); /*0x5feb04*/
  if ( result >= 0 ) /*0x5feb0b*/
  {
    if ( this ) /*0x5feb13*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)this, (int)v3); /*0x5feb1c*/
      this->ObjectTypeClass = &OverlayTypeClass::`vftable'; /*0x5feb21*/
      this->? = &OverlayTypeClass::`vftable'; /*0x5feb27*/
      this->? = &OverlayTypeClass::`vftable'; /*0x5feb2e*/
      this->? = &OverlayTypeClass::`vftable'; /*0x5feb35*/
    }
    VoxelAnimType::LoadAnim((char *)this); /*0x5feb3e*/
    ObjectTypeClass::Load2DArt((char *)this); /*0x5feb45*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->DamageLevels); /*0x5feb56*/
    if ( !this->DrawFlat ) /*0x5feb5b*/
    {
      if ( this->? ) /*0x5feb69*/
      {
        _makepath(&v3[1], 0, 0, this->?, (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId); /*0x5feba1*/
      }
      else
      {
        _makepath(&v3[1], 0, 0, this->?, Ext); /*0x5febc0*/
        TheaterObjectTypeClassSpecificID(&v3[1], dword_A8B230[130].uniqueId); /*0x5febd7*/
      }
      if ( !this->? ) /*0x5febdc*/
        this->? = (SHPStruct *)SearchMIXFile(&v3[1], 1); /*0x5febf1*/
    }
    return 0; /*0x5febf7*/
  }
  return result; /*0x5febf9*/
}



// ==== 0x005FEC10  OverlayTypeClass::SaveLoad_Prefix_0  this=OverlayTypeClass  sig=csp ====
int __stdcall OverlayTypeClass::SaveLoad_Prefix_0(OverlayTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, a2, a3); /*0x5fec1f*/
  if ( result >= 0 ) /*0x5fec26*/
    return 0; /*0x5fec28*/
  return result; /*0x5fec2a*/
}



// ==== 0x005FEC30  OverlayTypeClass::GetClassIdentifier  this=OverlayTypeClass  sig=csp ====
int __stdcall OverlayTypeClass::GetClassIdentifier(OverlayTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x5fec36*/
    return -2147467261; /*0x5fec38*/
  *a2 = 1525862009; /*0x5fec46*/
  a2[1] = 298976820; /*0x5fec4e*/
  a2[2] = 1610654892; /*0x5fec57*/
  a2[3] = unk_7E960C; /*0x5fec60*/
  return 0; /*0x5fec3d*/
}



// ==== 0x005FEC70  BuildingTypeClass::FindOrCreate2  this=AbstractTypeClass  sig=csp ====
_DWORD *__thiscall BuildingTypeClass::FindOrCreate2(char *Source)
{
  int v2; // esi
  OverlayTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x5fec8c*/
    return 0; /*0x5fecef*/
  v2 = 0; /*0x5fec9d*/
  if ( *(int *)&stru_A83D50.__pad_3C[4] <= 0 ) /*0x5feca1*/
  {
LABEL_6:
    v3 = (OverlayTypeClass *)__2_YAPAXI_Z(0x2BCu); /*0x5fecc6*/
    if ( v3 ) /*0x5fecd5*/
      return OverlayTypeClass::OverlayTypeClass(v3, Source); /*0x5fece1*/
    return 0; /*0x5fecd5*/
  }
  while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v2) + 36), Source) ) /*0x5fecba*/
  {
    if ( ++v2 >= *(int *)&stru_A83D50.__pad_3C[4] ) /*0x5fecc4*/
      goto LABEL_6; /*0x5fecc4*/
  }
  return *(_DWORD **)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v2); /*0x5fecdf*/
}



// ==== 0x005FED00  OverlayTypeClass::GetRadarColor  this=OverlayTypeClass  sig=csp ====
int __thiscall OverlayTypeClass::GetRadarColor(OverlayTypeClass *this, int a2, unsigned int a3)
{
  MixFileClass *v4; // eax
  int DamageLevels; // ecx
  int v6; // esi
  int v7; // eax
  char v8; // cl
  int PixelData; // ecx
  __int16 v11; // [esp+4h] [ebp-4h]

  v4 = (MixFileClass *)(*((int (__thiscall **)(OverlayTypeClass *))this->ObjectTypeClass + 39))(this); /*0x5fed06*/
  if ( v4 /*0x5fed28*/
    || (DamageLevels = this->DamageLevels) != 0
    && (v4 = (MixFileClass *)(*(int (__thiscall **)(int))(*(_DWORD *)DamageLevels + 156))(DamageLevels)) != 0 )
  {
    v6 = this->LandType[0]; /*0x5fed2e*/
    if ( (v6 < 127 || v6 > 138) && (v6 < 147 || v6 > 158) ) /*0x5fed4f*/
    {
      PixelData = MixFileClass::GetPixelData(v4, (int)&a3, a3); /*0x5feda2*/
      *(_WORD *)a2 = *(_WORD *)PixelData; /*0x5fedad*/
      *(_BYTE *)(a2 + 2) = *(_BYTE *)(PixelData + 2); /*0x5fedb4*/
      return a2; /*0x5feda4*/
    }
    else
    {
      v7 = MixFileClass::GetPixelData(v4, (int)&a3, a3); /*0x5fed5d*/
      v11 = *(_WORD *)v7; /*0x5fed67*/
      v8 = HIBYTE(*(_WORD *)v7); /*0x5fed6f*/
      BYTE1(a3) = *(_BYTE *)(v7 + 2); /*0x5fed73*/
      LOBYTE(a3) = v11; /*0x5fed7b*/
      *(_WORD *)a2 = a3; /*0x5fed86*/
      *(_BYTE *)(a2 + 2) = v8; /*0x5fed8a*/
      return a2; /*0x5fed77*/
    }
  }
  else
  {
    *(_WORD *)a2 = 0; /*0x5fedd2*/
    *(_BYTE *)(a2 + 2) = 0; /*0x5fedd6*/
    return a2; /*0x5fedbb*/
  }
}



// ==== 0x005FEDE0  OverlayTypeClass::GetCategory  this=OverlayTypeClass  sig=csp ====
void *__thiscall OverlayTypeClass::GetCategory(OverlayTypeClass *this)
{
  void *result; // eax
  SHPStruct *v3; // edi
  CCFileClass v4; // [esp+4h] [ebp-26Ch] BYREF
  int v5[3]; // [esp+5Ch] [ebp-214h] BYREF
  int v6; // [esp+68h] [ebp-208h]
  char Buffer[512]; // [esp+70h] [ebp-200h] BYREF

  result = this->?; /*0x5fede9*/
  if ( !result && this->DrawFlat ) /*0x5fedf7*/
  {
    Debug::Log(); /*0x5fee0e*/
    if ( this->? ) /*0x5fee13*/
    {
      _makepath(Buffer, 0, 0, this->?, (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId); /*0x5fee4f*/
    }
    else if ( this->? ) /*0x5fee59*/
    {
      _makepath(Buffer, 0, 0, this->?, Ext); /*0x5fee78*/
      TheaterObjectTypeClassSpecificID(Buffer, dword_A8B230[130].uniqueId); /*0x5fee90*/
    }
    CCFileClass::Construct(&v4, Buffer); /*0x5fee9f*/
    v3 = (SHPStruct *)CCFileClass::ReadEntireFile(&v4); /*0x5feead*/
    this->? = v3; /*0x5feeb1*/
    if ( v3 ) /*0x5feeb7*/
      this->? = 1; /*0x5feeb9*/
    *(_DWORD *)v4.CDFileClass = &CCFileClass::`vftable'; /*0x5feec4*/
    v6 = 0; /*0x5feecc*/
    Vector::Clear((int)v5); /*0x5feed4*/
    *(_DWORD *)v4.CDFileClass = &off_7E1668; /*0x5feedd*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v4); /*0x5feee5*/
    return v3; /*0x5feeea*/
  }
  return result; /*0x5feeed*/
}



// ==== 0x005FEF00  OverlayTypeClass::GetTypeIdentifier  this=OverlayTypeClass  sig=csp ====
int OverlayTypeClass::GetTypeIdentifier(OverlayTypeClass *this)
{
  return 21; /*0x5fef05*/
}



// ==== 0x005FEF10  OverlayTypeClass::GetObjectSize  this=OverlayTypeClass  sig=csp ====
int OverlayTypeClass::GetObjectSize(OverlayTypeClass *this)
{
  return 700; /*0x5fef15*/
}



// ==== 0x005FEF20  OverlayTypeClass::GetAuxField  this=OverlayTypeClass  sig=csp ====
int __thiscall OverlayTypeClass::GetAuxField(OverlayTypeClass *this)
{
  return this->LandType[0]; /*0x5fef26*/
}



// ==== 0x005FEF30  OverlayTypeClass::ddtor  this=OverlayTypeClass  sig=csp ====
void **__thiscall OverlayTypeClass::ddtor(OverlayTypeClass *this, char a2)
{
  int v3; // eax
  OverlayTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->ObjectTypeClass = &OverlayTypeClass::`vftable'; /*0x5fef36*/
  this->? = &OverlayTypeClass::`vftable'; /*0x5fef3c*/
  this->? = &OverlayTypeClass::`vftable'; /*0x5fef43*/
  this->? = &OverlayTypeClass::`vftable'; /*0x5fef4a*/
  AbstractClass::AnnounceExpiredPointer(&this->ObjectTypeClass, 1); /*0x5fef51*/
  v5 = this; /*0x5fef66*/
  v3 = (*((int (__thiscall **)(void **, OverlayTypeClass **))stru_A83D50.SuperClass_field_0x30 + 4))( /*0x5fef6a*/
         &stru_A83D50.SuperClass_field_0x30,
         &v5);
  if ( v3 != -1 && v3 < *(int *)&stru_A83D50.__pad_3C[4] ) /*0x5fef7a*/
  {
    --*(_DWORD *)&stru_A83D50.__pad_3C[4]; /*0x5fef7f*/
    for ( ; /*0x5fef85*/
          v3 < *(int *)&stru_A83D50.__pad_3C[4];
          *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34
                                                                                + 4 * v3) )
    {
      ++v3; /*0x5fef8d*/
    }
  }
  ObjectTypeClass::Destruct((int)this); /*0x5fefa1*/
  if ( (a2 & 1) != 0 ) /*0x5fefab*/
    __3_YAXPAX_Z(this); /*0x5fefae*/
  return &this->ObjectTypeClass; /*0x5fefb8*/
}



// ==== 0x005FEFC0  sub_5FEFC0  this=-  sig=ida-proto ====
void sub_5FEFC0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5fefcc*/
  dbl_AC17D8 = Math::Sqrt(v0 + v0); /*0x5fefde*/
}



// ==== 0x005FEFF0  sub_5FEFF0  this=-  sig=ida-proto ====
void sub_5FEFF0()
{
  dbl_AC1828 = dbl_AC17D8 / 60.0; /*0x5feffc*/
}



// ==== 0x005FF010  sub_5FF010  this=-  sig=ida-proto ====
void sub_5FF010()
{
  dbl_AC1810 = 1.0 / dbl_AC1828; /*0x5ff01c*/
}



// ==== 0x005FF030  sub_5FF030  this=-  sig=ida-proto ====
void sub_5FF030()
{
  dbl_AC1808 = 0.0174532925199433 * 45.0; /*0x5ff03c*/
}



// ==== 0x005FF050  sub_5FF050  this=-  sig=ida-proto ====
void sub_5FF050()
{
  dbl_AC17E0 = 0.0174532925199433 * 60.0; /*0x5ff05c*/
}



// ==== 0x005FF070  sub_5FF070  this=-  sig=ida-proto ====
void sub_5FF070()
{
  dbl_AC1690 = 0.0174532925199433 * 90.0; /*0x5ff07c*/
}



// ==== 0x005FF090  sub_5FF090  this=-  sig=ida-proto ====
__int64 sub_5FF090()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC1690 - dbl_AC17E0); /*0x5ff0a2*/
  result = Math::RoundToInt(v0 * dbl_AC17D8 * 0.5); /*0x5ff0b6*/
  dword_AC1830 = result; /*0x5ff0bb*/
  return result; /*0x5ff0c0*/
}



// ==== 0x005FF0D0  sub_5FF0D0  this=-  sig=ida-proto ====
void sub_5FF0D0()
{
  dbl_AC17E8 = Math::ArcTan((double)dword_AC1830 * 0.00390625); /*0x5ff0e7*/
}



// ==== 0x005FF100  sub_5FF100  this=-  sig=ida-proto ====
void sub_5FF100()
{
  dbl_AC1800 = Math::ArcTan((double)(2 * dword_AC1830) / dbl_AC17D8); /*0x5ff122*/
}



// ==== 0x005FF130  sub_5FF130  this=-  sig=ida-proto ====
__int64 sub_5FF130()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1830) + 0.5); /*0x5ff14b*/
  dword_AC1824 = result; /*0x5ff150*/
  return result; /*0x5ff156*/
}



// ==== 0x005FF160  sub_5FF160  this=-  sig=ida-proto ====
int sub_5FF160()
{
  word_AC17D0 = 0; /*0x5ff162*/
  word_AC17D2 = 0; /*0x5ff168*/
  return 0; /*0x5ff16e*/
}



// ==== 0x005FF170  sub_5FF170  this=-  sig=ida-proto ====
int sub_5FF170()
{
  dword_AC17F0 = 0; /*0x5ff172*/
  dword_AC17F4 = 0; /*0x5ff177*/
  dword_AC17F8 = 0; /*0x5ff17c*/
  return 0; /*0x5ff181*/
}



// ==== 0x005FF190  sub_5FF190  this=-  sig=ida-proto ====
int sub_5FF190()
{
  dword_AC1820 = 0; /*0x5ff195*/
  dword_AC1818 = 128; /*0x5ff19f*/
  dword_AC181C = 128; /*0x5ff1a4*/
  return 128; /*0x5ff1a9*/
}



// ==== 0x005FF1B0  sub_5FF1B0  this=-  sig=ida-proto ====
int sub_5FF1B0()
{
  dword_AC17C0 = 0; /*0x5ff1b2*/
  dword_AC17C4 = 0; /*0x5ff1b7*/
  dword_AC17C8 = 0; /*0x5ff1bc*/
  dword_AC17CC = 0; /*0x5ff1c1*/
  return 0; /*0x5ff1c6*/
}



// ==== 0x005FF1D0  sub_5FF1D0  this=-  sig=ida-proto ====
int sub_5FF1D0()
{
  dword_AC167C = 0; /*0x5ff1d7*/
  dword_AC1680 = 0; /*0x5ff1dc*/
  byte_AC1684 = 1; /*0x5ff1e1*/
  byte_AC1685 = 0; /*0x5ff1e8*/
  dword_AC1678 = (int)&DynamicVectorClass<SpotLightClass *>::`vftable'; /*0x5ff1ed*/
  dword_AC168C = 10; /*0x5ff1f7*/
  dword_AC1688 = 0; /*0x5ff201*/
  return atexit(sub_5FF210); /*0x5ff20c*/
}



// ==== 0x005FF210  sub_5FF210  this=-  sig=ida-proto ====
void __cdecl sub_5FF210()
{
  dword_AC1678 = (int)&VectorClass<SpotLightClass *>::`vftable'; /*0x5ff218*/
  if ( dword_AC167C && byte_AC1685 ) /*0x5ff22c*/
  {
    __3_YAXPAX_Z(dword_AC167C); /*0x5ff22f*/
    dword_AC167C = 0; /*0x5ff237*/
  }
  byte_AC1685 = 0; /*0x5ff23d*/
  dword_AC1680 = 0; /*0x5ff243*/
}



// ==== 0x005FF250  ObjectClass::RegisterInArray  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ObjectClass::RegisterInArray(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax

  this->AbstractClass = (void *)a2; /*0x5ff25d*/
  this->? = (void *)a3; /*0x5ff263*/
  this->? = 0; /*0x5ff268*/
  this->? = 0; /*0x5ff26b*/
  this->? = (void *)a4; /*0x5ff26e*/
  this->? = a5; /*0x5ff275*/
  if ( dword_AC1688 < dword_AC1680 /*0x5ff2aa*/
    || (byte_AC1685 || !dword_AC1680)
    && dword_AC168C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_AC1678 + 8))(
         &dword_AC1678,
         dword_AC1680 + dword_AC168C,
         0) )
  {
    v6 = dword_AC1688++; /*0x5ff2b7*/
    *((_DWORD *)dword_AC167C + v6) = this; /*0x5ff2c6*/
  }
  return &this->AbstractClass; /*0x5ff2cb*/
}



// ==== 0x005FF2D0  BuildingLightQueue::RemoveEntry  this=BuildingLightQueue  sig=csp ====
int __thiscall BuildingLightQueue::RemoveEntry(BuildingLightQueue *this)
{
  int result; // eax
  BuildingLightQueue *v2; // [esp+0h] [ebp-4h] BYREF

  v2 = this; /*0x5ff2db*/
  result = (*(int (__thiscall **)(int *, BuildingLightQueue **))(dword_AC1678 + 16))(&dword_AC1678, &v2); /*0x5ff2e5*/
  if ( result != -1 && result < dword_AC1688 && result < --dword_AC1688 ) /*0x5ff300*/
  {
    do /*0x5ff318*/
    {
      ++result; /*0x5ff308*/
      *((_DWORD *)dword_AC167C + result - 1) = *((_DWORD *)dword_AC167C + result); /*0x5ff30c*/
    }
    while ( result < dword_AC1688 ); /*0x5ff318*/
  }
  return result; /*0x5ff31b*/
}



// ==== 0x005FF390  ObjectClass::ProcessHarvesterLogic  this=ObjectClass  sig=csp ====
void ProcessHarvesterLogic(ObjectClass *this)
{
  int i; // edi
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // [esp+4h] [ebp-4h] BYREF

  for ( i = dword_AC1688 - 1; i >= 0; --i ) /*0x5ff39c*/
  {
    v2 = (_DWORD *)*((_DWORD *)dword_AC167C + i); /*0x5ff3a5*/
    v3 = v2[3] + 8; /*0x5ff3ae*/
    v2[3] = v3; /*0x5ff3b0*/
    if ( v3 >= 80 && v2 ) /*0x5ff3ba*/
    {
      v5 = v2; /*0x5ff3cb*/
      v4 = (*(int (__thiscall **)(int *, _DWORD **))(dword_AC1678 + 16))(&dword_AC1678, &v5); /*0x5ff3cf*/
      if ( v4 != -1 && v4 < dword_AC1688 && v4 < --dword_AC1688 ) /*0x5ff3ea*/
      {
        do /*0x5ff402*/
        {
          ++v4; /*0x5ff3f2*/
          *((_DWORD *)dword_AC167C + v4 - 1) = *((_DWORD *)dword_AC167C + v4); /*0x5ff3f6*/
        }
        while ( v4 < dword_AC1688 ); /*0x5ff402*/
      }
      __3_YAXPAX_Z(v2); /*0x5ff405*/
    }
  }
}



// ==== 0x005FF420  ObjectClass::GenerateRangeRingTextures  this=ObjectClass  sig=csp ====
char *GenerateRangeRingTextures(ObjectClass *this)
{
  int v1; // ebx
  int *v2; // ebp
  Surface *v3; // eax
  Surface *v4; // esi
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int j; // esi
  int v9; // ecx
  Surface **v10; // edi
  int v11; // ebp
  Surface *v12; // eax
  Surface *v13; // esi
  int v14; // eax
  int k; // esi
  Surface *v16; // ecx
  char *result; // eax
  unsigned __int16 v18; // cx
  int v19; // [esp+2Eh] [ebp-54h] BYREF
  int i; // [esp+32h] [ebp-50h]
  int v21; // [esp+36h] [ebp-4Ch]
  int v22; // [esp+3Eh] [ebp-44h] BYREF
  int v23; // [esp+42h] [ebp-40h] BYREF
  int v24; // [esp+46h] [ebp-3Ch]
  int v25; // [esp+4Ah] [ebp-38h]
  int v26; // [esp+4Eh] [ebp-34h]
  int v27; // [esp+52h] [ebp-30h] BYREF
  int v28; // [esp+56h] [ebp-2Ch]
  int v29; // [esp+5Ah] [ebp-28h]
  int v30; // [esp+5Eh] [ebp-24h]
  XSurface v31; // [esp+62h] [ebp-20h] BYREF
  int v32; // [esp+72h] [ebp-10h]
  int v33[3]; // [esp+76h] [ebp-Ch] BYREF

  v1 = 0; /*0x5ff429*/
  if ( !byte_AC1834 ) /*0x5ff430*/
  {
    v2 = dword_AC1698; /*0x5ff43b*/
    for ( i = 1; i < 129; i += 2 ) /*0x5ff440*/
    {
      if ( !*v2 ) /*0x5ff444*/
      {
        v3 = (Surface *)__2_YAPAXI_Z(0x20u); /*0x5ff44b*/
        v4 = v3; /*0x5ff450*/
        if ( v3 ) /*0x5ff457*/
        {
          Surface::Construct(v3, 256, 128); /*0x5ff465*/
          *(_DWORD *)v4[1].__pad_0 = 0; /*0x5ff46d*/
          *(_DWORD *)v4->__pad_0 = &XSurface_Vtable; /*0x5ff476*/
          v4[1].Width = 1; /*0x5ff47c*/
          Buffer::Init((Buffer *)&v4[1].Height, 0, 0x8000); /*0x5ff47f*/
          *(_DWORD *)v4->__pad_0 = &BSurface_Vtable; /*0x5ff484*/
        }
        else
        {
          v4 = 0; /*0x5ff48c*/
        }
        *v2 = (int)v4; /*0x5ff48e*/
      }
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)*v2 + 24))(*v2, 0); /*0x5ff497*/
      Surface::Construct((Surface *)&v31, 256, 256); /*0x5ff4a8*/
      v31.LockCount = 0; /*0x5ff4b1*/
      *(_DWORD *)v31.Surface = &XSurface_Vtable; /*0x5ff4bb*/
      v32 = 1; /*0x5ff4c3*/
      Buffer::Init((Buffer *)v33, 0, 0x10000); /*0x5ff4c7*/
      *(_DWORD *)v31.Surface = &BSurface_Vtable; /*0x5ff4d0*/
      XSurface::Fill(&v31, 0); /*0x5ff4d9*/
      v5 = i; /*0x5ff4de*/
      if ( i > 0 ) /*0x5ff4e6*/
      {
        v6 = 12; /*0x5ff4e8*/
        do /*0x5ff52d*/
        {
          v7 = v6; /*0x5ff4f3*/
          if ( v6 > 255 ) /*0x5ff4f5*/
            v7 = 255; /*0x5ff4f7*/
          Draw::Ellipse((Draw *)&v31, 128, 128, v5, 0, 0, 255, 255, v7); /*0x5ff520*/
          v5 -= 2; /*0x5ff525*/
          v6 += 4; /*0x5ff528*/
        }
        while ( v5 > 0 ); /*0x5ff52d*/
      }
      for ( j = 0; j < 128; ++j ) /*0x5ff534*/
      {
        v9 = *v2; /*0x5ff536*/
        v24 = 2 * j; /*0x5ff53c*/
        v23 = 0; /*0x5ff551*/
        v25 = 255; /*0x5ff555*/
        v26 = 1; /*0x5ff559*/
        v27 = 0; /*0x5ff55d*/
        v28 = j; /*0x5ff561*/
        v29 = 255; /*0x5ff565*/
        v30 = 1; /*0x5ff569*/
        (*(void (__thiscall **)(int, int *, XSurface *, int *, _DWORD, int))(*(_DWORD *)v9 + 8))( /*0x5ff574*/
          v9,
          &v27,
          &v31,
          &v23,
          0,
          1);
      }
      Vector::Clear((int)v33); /*0x5ff584*/
      ++v2; /*0x5ff58d*/
      *(_DWORD *)v31.Surface = &Surface_Vtable; /*0x5ff593*/
    }
    i = 0; /*0x5ff5aa*/
    v10 = (Surface **)&unk_AC1798; /*0x5ff5ae*/
    v11 = 128; /*0x5ff5b3*/
    do /*0x5ff721*/
    {
      if ( !*v10 ) /*0x5ff5b8*/
      {
        v12 = (Surface *)__2_YAPAXI_Z(0x20u); /*0x5ff5be*/
        v13 = v12; /*0x5ff5c3*/
        if ( v12 ) /*0x5ff5ca*/
        {
          Surface::Construct(v12, 256, 128); /*0x5ff5d8*/
          *(_DWORD *)v13[1].__pad_0 = 0; /*0x5ff5e0*/
          *(_DWORD *)v13->__pad_0 = &XSurface_Vtable; /*0x5ff5e9*/
          v13[1].Width = 1; /*0x5ff5ef*/
          Buffer::Init((Buffer *)&v13[1].Height, 0, 0x8000); /*0x5ff5f6*/
          *(_DWORD *)v13->__pad_0 = &BSurface_Vtable; /*0x5ff5fb*/
        }
        else
        {
          v13 = 0; /*0x5ff603*/
        }
        *v10 = v13; /*0x5ff605*/
      }
      (*(void (__thiscall **)(Surface *, _DWORD))(*(_DWORD *)(*v10)->__pad_0 + 24))(*v10, 0); /*0x5ff60c*/
      Surface::Construct((Surface *)&v31, 256, 256); /*0x5ff61d*/
      v31.LockCount = 0; /*0x5ff626*/
      *(_DWORD *)v31.Surface = &XSurface_Vtable; /*0x5ff630*/
      v32 = 1; /*0x5ff638*/
      Buffer::Init((Buffer *)v33, 0, 0x10000); /*0x5ff640*/
      *(_DWORD *)v31.Surface = &BSurface_Vtable; /*0x5ff649*/
      XSurface::Fill(&v31, 0); /*0x5ff652*/
      v21 = 60 * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1960); /*0x5ff684*/
      LOWORD(v14) = Math::RoundToInt((double)v21 * -0.002790178571428571); /*0x5ff692*/
      Draw::Ellipse((Draw *)&v31, 128, 128, i - v14, 0, 0, 255, 255, v11); /*0x5ff6a9*/
      for ( k = 0; k < 128; ++k ) /*0x5ff6ae*/
      {
        v30 = 1; /*0x5ff6ba*/
        v26 = 1; /*0x5ff6be*/
        v29 = 255; /*0x5ff6c9*/
        v25 = 255; /*0x5ff6cd*/
        v16 = *v10; /*0x5ff6d1*/
        v27 = 0; /*0x5ff6db*/
        v28 = 2 * k; /*0x5ff6df*/
        v23 = 0; /*0x5ff6e3*/
        v24 = k; /*0x5ff6e7*/
        (*(void (__thiscall **)(Surface *, int *, XSurface *, int *, _DWORD, int))(*(_DWORD *)v16->__pad_0 + 8))( /*0x5ff6f2*/
          v16,
          &v23,
          &v31,
          &v27,
          0,
          1);
      }
      Vector::Clear((int)v33); /*0x5ff702*/
      v11 -= 6; /*0x5ff70b*/
      ++v10; /*0x5ff70f*/
      *(_DWORD *)v31.Surface = &Surface_Vtable; /*0x5ff715*/
      ++i; /*0x5ff71d*/
    }
    while ( v11 > 68 ); /*0x5ff721*/
    byte_AC1834 = 1; /*0x5ff727*/
  }
  dword_833588 = DDraw::GetStatus(); /*0x5ff73d*/
  v22 = 5; /*0x5ff742*/
  HIBYTE(v19) = 0; /*0x5ff74a*/
  result = GetVersionString(&v22, (_BYTE *)&v19 + 3, 0, 0); /*0x5ff74e*/
  if ( HIBYTE(v19) && !dword_AC1838 ) /*0x5ff763*/
  {
    dword_AC1838 = (void *)__2_YAPAXI_Z(0x40000u); /*0x5ff776*/
    do /*0x5ff7ed*/
    {
      BYTE1(v21) = (unsigned __int8)((unsigned __int16)v1 >> g_BitMask_Green) << g_BitMask_Blue; /*0x5ff7aa*/
      LOBYTE(v18) = 0; /*0x5ff7bb*/
      HIBYTE(v18) = (unsigned __int8)((unsigned __int16)v1 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x5ff7bd*/
      BYTE2(v21) = (unsigned __int8)((unsigned __int16)v1 >> g_BitShift_Blue) << g_BitMask_Red; /*0x5ff7bf*/
      result = (char *)BYTE2(v21); /*0x5ff7dc*/
      *((_DWORD *)dword_AC1838 + v1++) = BYTE2(v21) | ((BYTE1(v21) | v18) << 8); /*0x5ff7e3*/
    }
    while ( v1 < 0x10000 ); /*0x5ff7ed*/
  }
  return result; /*0x5ff7ef*/
}



// ==== 0x005FF800  ObjectClass::WinMainSetup_Setup_5FF800  this=ObjectClass  sig=csp ====
void WinMainSetup_Setup_5FF800(ObjectClass *this)
{
  int *v1; // esi

  if ( dword_AC1838 ) /*0x5ff807*/
  {
    __3_YAXPAX_Z(dword_AC1838); /*0x5ff80a*/
    dword_AC1838 = 0; /*0x5ff812*/
  }
  v1 = dword_AC1698; /*0x5ff81d*/
  do /*0x5ff83d*/
  {
    if ( *v1 ) /*0x5ff822*/
      (**(void (__thiscall ***)(int, int))*v1)(*v1, 1); /*0x5ff82c*/
    *v1++ = 0; /*0x5ff82e*/
  }
  while ( (int)v1 < (int)&dword_AC17C0 ); /*0x5ff83d*/
}



// ==== 0x005FF850  BuildingLight::CalculateShading  this=Coord  sig=csp ====
char __usercall BuildingLight::CalculateShading@<al>(BuildingLight *this, __m64 a2@<mm0>)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // ebp
  int v4; // ebx
  unsigned int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // esi
  unsigned __int16 *v10; // edi
  int v11; // eax
  int v12; // ecx
  bool v13; // zf
  unsigned __int16 v14; // si
  int v15; // ecx
  unsigned __int16 v16; // ax
  int v17; // ebp
  int v18; // ecx
  int v19; // eax
  int v20; // esi
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  unsigned __int16 v24; // si
  int v25; // edx
  int v26; // eax
  int v27; // esi
  int v28; // ecx
  int v29; // edx
  char v31; // [esp+13h] [ebp-81h] BYREF
  _BYTE *v32; // [esp+14h] [ebp-80h]
  unsigned __int16 *v33; // [esp+18h] [ebp-7Ch]
  _BYTE *v34; // [esp+1Ch] [ebp-78h]
  int v35; // [esp+20h] [ebp-74h]
  int v36; // [esp+24h] [ebp-70h]
  int i; // [esp+28h] [ebp-6Ch]
  int j; // [esp+2Ch] [ebp-68h]
  AudioStream *v39; // [esp+30h] [ebp-64h]
  int v40; // [esp+34h] [ebp-60h]
  unsigned __int16 *v41; // [esp+38h] [ebp-5Ch] BYREF
  _BYTE *v42; // [esp+3Ch] [ebp-58h] BYREF
  _DWORD *v43; // [esp+40h] [ebp-54h]
  unsigned __int8 v44; // [esp+44h] [ebp-50h]
  unsigned __int8 v45; // [esp+45h] [ebp-4Fh]
  unsigned __int8 v46; // [esp+46h] [ebp-4Eh]
  int v47[2]; // [esp+4Ch] [ebp-48h] BYREF
  int v48[2]; // [esp+54h] [ebp-40h] BYREF
  int v49; // [esp+5Ch] [ebp-38h]
  int v50; // [esp+60h] [ebp-34h]
  int v51[4]; // [esp+64h] [ebp-30h] BYREF
  int v52[4]; // [esp+74h] [ebp-20h] BYREF
  int v53[4]; // [esp+84h] [ebp-10h] BYREF

  v3 = v2; /*0x5ff858*/
  v43 = v2; /*0x5ff85c*/
  v4 = v2[5] & 0xF; /*0x5ff863*/
  if ( (v2[5] & 0xE) != 0 /*0x5ff879*/
    || (v5 = PingPongBuffer::GetWriteOffset(), *(_DWORD *)&g_MissionQueueFrame.waypoints[282] >= v5) )
  {
    LOBYTE(v5) = Coord::To_Screen((Coord *)g_TacticalClass_Instance, v3, v47); /*0x5ff88b*/
    if ( (_BYTE)v5 ) /*0x5ff892*/
    {
      if ( ((int)dword_A8B230->vtable0 & 0x1000) == 0 || (LOBYTE(v5) = Game::Stub3((int)v3), !(_BYTE)v5) ) /*0x5ff8b2*/
      {
        v52[0] = v47[0] - 128; /*0x5ff8c9*/
        v53[0] = DSurface_ViewBounds.field_0; /*0x5ff8d9*/
        v53[1] = (int)DSurface_ViewBounds.field_4; /*0x5ff8e6*/
        v6 = v3[3]; /*0x5ff8ed*/
        v53[3] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x5ff8f0*/
        v7 = byte_83358C[v6]; /*0x5ff8ff*/
        v52[1] = v47[1] - 64; /*0x5ff906*/
        v39 = g_DSurface_Hidden_2; /*0x5ff912*/
        v52[2] = 255; /*0x5ff916*/
        v52[3] = 127; /*0x5ff91e*/
        v53[2] = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x5ff925*/
        if ( v7 < 64 ) /*0x5ff92c*/
          v7 = v7 * v3[4] / 64; /*0x5ff93d*/
        v8 = *(_DWORD *)g_DSurface_Hidden_2->__pad_0; /*0x5ff946*/
        v40 = dword_AC1698[v7]; /*0x5ff94a*/
        v9 = (*(int (__thiscall **)(AudioStream *))(v8 + 116))(g_DSurface_Hidden_2); /*0x5ff951*/
        v48[0] = 0; /*0x5ff95a*/
        v48[1] = 0; /*0x5ff95e*/
        v51[0] = 0; /*0x5ff962*/
        v51[1] = 0; /*0x5ff966*/
        v49 = 255; /*0x5ff96a*/
        v51[2] = 255; /*0x5ff96e*/
        v36 = v9; /*0x5ff9a3*/
        v31 = 0; /*0x5ff9a7*/
        v50 = 127; /*0x5ff9ac*/
        v51[3] = 127; /*0x5ff9b0*/
        LOBYTE(v5) = CalcSurfaceBlitRects((int)v39, v53, v52, v40, v51, v48, &v31, (int *)&v41, (int *)&v42); /*0x5ff9b7*/
        if ( (_BYTE)v5 ) /*0x5ff9be*/
        {
          v10 = v41; /*0x5ff9c4*/
          v33 = v41; /*0x5ff9d6*/
          v34 = v42; /*0x5ff9da*/
          v32 = v42; /*0x5ff9de*/
          if ( v4 ) /*0x5ff9e2*/
          {
LABEL_23:
            v11 = v3[5]; /*0x5ffb1c*/
            if ( (v11 & 1) != 0 ) /*0x5ffb21*/
            {
              j = 0; /*0x5ffb2b*/
              if ( v50 > 0 ) /*0x5ffb31*/
              {
                v12 = v49; /*0x5ffb37*/
                do /*0x5ffc65*/
                {
                  for ( i = 0; i < v12; ++i ) /*0x5ffb41*/
                  {
                    v13 = *v32 == 0; /*0x5ffb4e*/
                    LOBYTE(v35) = *v32++; /*0x5ffb50*/
                    if ( !v13 ) /*0x5ffb58*/
                    {
                      v14 = *v10; /*0x5ffb62*/
                      v44 = (unsigned __int8)(*v10 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x5ffb91*/
                      v45 = (unsigned __int8)(v14 >> g_BitMask_Green) << g_BitMask_Blue; /*0x5ffba9*/
                      v46 = (unsigned __int8)(v14 >> g_BitShift_Blue) << g_BitMask_Red; /*0x5ffbc2*/
                      *v10 = (((256 - (unsigned __int8)v35) * v44) >> 8 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x5ffc1a*/
                           | (((256 - (unsigned __int8)v35) * v46) >> 8 >> g_BitMask_Red << g_BitShift_Blue)
                           | (((256 - (unsigned __int8)v35) * v45) >> 8 >> g_BitMask_Blue << g_BitMask_Green);
                      v12 = v49; /*0x5ffc1d*/
                      v9 = v36; /*0x5ffc21*/
                    }
                    ++v10; /*0x5ffc29*/
                  }
                  v34 += 256; /*0x5ffc4c*/
                  v32 = v34; /*0x5ffc50*/
                  v10 = (unsigned __int16 *)((char *)v33 + v9); /*0x5ffc58*/
                  v33 = (unsigned __int16 *)((char *)v33 + v9); /*0x5ffc5b*/
                  ++j; /*0x5ffc61*/
                }
                while ( j < v50 ); /*0x5ffc65*/
              }
            }
            else if ( (v11 & 0xE) != 0 ) /*0x5ffc72*/
            {
              i = 0; /*0x5ffc7c*/
              if ( v50 > 0 ) /*0x5ffc82*/
              {
                v15 = v49; /*0x5ffc88*/
                do /*0x5ffdf0*/
                {
                  for ( j = 0; j < v15; ++j ) /*0x5ffc92*/
                  {
                    v13 = *v32 == 0; /*0x5ffc9f*/
                    LOBYTE(v35) = *v32++; /*0x5ffca1*/
                    if ( !v13 ) /*0x5ffca9*/
                    {
                      v16 = *v10; /*0x5ffcaf*/
                      v17 = (unsigned __int8)v35 + 256; /*0x5ffcd0*/
                      v44 = (unsigned __int8)(*v10 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x5ffcdf*/
                      v45 = (unsigned __int8)(v16 >> g_BitMask_Green) << g_BitMask_Blue; /*0x5ffd00*/
                      v18 = v43[5]; /*0x5ffd0a*/
                      v46 = (unsigned __int8)(v16 >> g_BitShift_Blue) << g_BitMask_Red; /*0x5ffd0d*/
                      v19 = v44; /*0x5ffd1d*/
                      v20 = v45; /*0x5ffd22*/
                      v21 = v46; /*0x5ffd28*/
                      if ( (v18 & 2) == 0 ) /*0x5ffd31*/
                      {
                        v19 = (v17 * v44) >> 8; /*0x5ffd36*/
                        if ( v19 > 255 ) /*0x5ffd3e*/
                          v19 = 255; /*0x5ffd40*/
                      }
                      if ( (v18 & 4) == 0 ) /*0x5ffd48*/
                      {
                        v20 = (v17 * v45) >> 8; /*0x5ffd4d*/
                        if ( v20 > 255 ) /*0x5ffd56*/
                          v20 = 255; /*0x5ffd58*/
                      }
                      if ( (v18 & 8) == 0 ) /*0x5ffd60*/
                      {
                        v21 = (v17 * v46) >> 8; /*0x5ffd65*/
                        if ( v21 > 255 ) /*0x5ffd6e*/
                          v21 = 255; /*0x5ffd70*/
                      }
                      v22 = (v20 >> g_BitMask_Blue << g_BitMask_Green) | (v19 >> g_BitShift_Green_0 << g_BitShift_Red); /*0x5ffd9f*/
                      v9 = v36; /*0x5ffda1*/
                      *v10 = (v21 >> g_BitMask_Red << g_BitShift_Blue) | v22; /*0x5ffda9*/
                      v15 = v49; /*0x5ffdac*/
                    }
                    ++v10; /*0x5ffdb4*/
                  }
                  v34 += 256; /*0x5ffdd7*/
                  v32 = v34; /*0x5ffddb*/
                  v10 = (unsigned __int16 *)((char *)v33 + v9); /*0x5ffde3*/
                  v33 = (unsigned __int16 *)((char *)v33 + v9); /*0x5ffde6*/
                  ++i; /*0x5ffdec*/
                }
                while ( i < v50 ); /*0x5ffdf0*/
              }
            }
            else
            {
              i = 0; /*0x5ffdff*/
              if ( v50 > 0 ) /*0x5ffe05*/
              {
                v23 = v49; /*0x5ffe0b*/
                do /*0x5fff5f*/
                {
                  for ( j = 0; j < v23; ++j ) /*0x5ffe15*/
                  {
                    v13 = *v32 == 0; /*0x5ffe22*/
                    LOBYTE(v35) = *v32++; /*0x5ffe24*/
                    if ( !v13 ) /*0x5ffe2c*/
                    {
                      v24 = *v10; /*0x5ffe32*/
                      v25 = (unsigned __int8)v35 + 256; /*0x5ffe55*/
                      v44 = (unsigned __int8)(*v10 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x5ffe64*/
                      v45 = (unsigned __int8)(v24 >> g_BitMask_Green) << g_BitMask_Blue; /*0x5ffe7c*/
                      v46 = (unsigned __int8)(v24 >> g_BitShift_Blue) << g_BitMask_Red; /*0x5ffe8d*/
                      v26 = (v25 * v46) >> 8; /*0x5ffeb7*/
                      v27 = (v25 * v44) >> 8; /*0x5ffeba*/
                      v28 = (v25 * v45) >> 8; /*0x5ffebd*/
                      if ( v26 > 255 ) /*0x5ffec5*/
                        v26 = 255; /*0x5ffec7*/
                      v29 = 255; /*0x5ffed2*/
                      if ( v28 <= 255 ) /*0x5ffed7*/
                        v29 = v28; /*0x5ffed9*/
                      if ( v27 > 255 ) /*0x5ffee1*/
                        v27 = 255; /*0x5ffee3*/
                      *v10 = (v26 >> g_BitMask_Red << g_BitShift_Blue) /*0x5fff14*/
                           | (v29 >> g_BitMask_Blue << g_BitMask_Green)
                           | (v27 >> g_BitShift_Green_0 << g_BitShift_Red);
                      v23 = v49; /*0x5fff17*/
                      v9 = v36; /*0x5fff1b*/
                    }
                    ++v10; /*0x5fff23*/
                  }
                  v34 += 256; /*0x5fff46*/
                  v32 = v34; /*0x5fff4a*/
                  v10 = (unsigned __int16 *)((char *)v33 + v9); /*0x5fff52*/
                  v33 = (unsigned __int16 *)((char *)v33 + v9); /*0x5fff55*/
                  ++i; /*0x5fff5b*/
                }
                while ( i < v50 ); /*0x5fff5f*/
              }
            }
          }
          else
          {
            switch ( dword_833588 ) /*0x5ff9f1*/
            {
              case 0: /*0x5ff9f1*/
                if ( dword_AC1838 ) /*0x5ffa00*/
                  Object_Calc_7DF3C2(a2, v42, v41, 256, v9, v49, v50, (int)dword_AC1838); /*0x5ffa15*/
                else
                  Object_Calc_7DF191(v42, v41, 256, v9, v49, v50); /*0x5ffa34*/
                break; /*0x5ffa1d*/
              case 1: /*0x5ff9f1*/
                if ( dword_AC1838 ) /*0x5ffa49*/
                  Object_Calc_7DF500(a2, v42, v41, 256, v9, v49, v50, (int)dword_AC1838); /*0x5ffa5e*/
                else
                  Object_Calc_7DF0B4(v42, v41, 256, v9, v49, v50); /*0x5ffa7d*/
                break; /*0x5ffa66*/
              case 2: /*0x5ff9f1*/
                if ( dword_AC1838 ) /*0x5ffa92*/
                  Object_Calc_7DF280(a2, v42, v41, 256, v9, v49, v50, (int)dword_AC1838); /*0x5ffaa7*/
                else
                  Object_Calc(v42, v41, 256, v9, v49, v50); /*0x5ffac6*/
                break; /*0x5ffaaf*/
              case 3: /*0x5ff9f1*/
                if ( dword_AC1838 ) /*0x5ffadb*/
                  Object_Calc_7DF640(a2, v42, v41, 256, v9, v49, v50, (int)dword_AC1838); /*0x5ffaf0*/
                else
                  Object_Calc_7DEFD7(v42, v41, 256, v9, v49, v50); /*0x5ffb0f*/
                break; /*0x5ffaf8*/
              default:
                goto LABEL_23;
            }
          }
          (*(void (__thiscall **)(AudioStream *))(*(_DWORD *)v39->__pad_0 + 96))(v39); /*0x5fff6b*/
          LOBYTE(v5) = (*(char (__thiscall **)(int))(*(_DWORD *)v40 + 96))(v40); /*0x5fff74*/
        }
      }
    }
  }
  return v5; /*0x5fff77*/
}



// ==== 0x005FFFA0  ObjectClass::Render_Render_5FFFA0  this=ObjectClass  sig=csp ====
char Render_Render_5FFFA0(ObjectClass *this)
{
  __m64 v1; // mm0
  char result; // al
  int i; // esi
  BuildingLight *v4; // [esp+0h] [ebp-4h]

  result = dword_AC1688; /*0x5fffa0*/
  for ( i = dword_AC1688 - 1; i >= 0; --i ) /*0x5fffab*/
    result = BuildingLight::CalculateShading(v4, v1); /*0x5fffb6*/
  return result; /*0x5fffbe*/
}



// ==== 0x005FFFC0  ?$DynamicVectorClass@PAVSpotLightClass@@::Destructor  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_Destructor(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5fffc6*/
  *(_DWORD *)(this + 16) = 0; /*0x5fffc9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5fffd0*/
  {
    __3_YAXPAX_Z(v2); /*0x5fffd6*/
    *(_DWORD *)(this + 4) = 0; /*0x5fffde*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5fffe1*/
  *(_DWORD *)(this + 8) = 0; /*0x5fffe4*/
}



// ==== 0x005FFFF0  _DynamicVectorClass_PAVSpotLightClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SpotLightClass::GetItemIndex(
        _DynamicVectorClass_PAVSpotLightClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5ffff0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x600005*/
  else
    return 0; /*0x5ffff7*/
}


