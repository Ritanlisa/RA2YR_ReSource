// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x005F0040  Network::CleanupOnDisconnect  this=Network  sig=ida-proto ====
int Network_CleanupOnDisconnect()
{
  if ( (MEMORY[0xA8D5F8] & 2) == 0 && MEMORY[0xA8B238][0] == 1 ) /*0x5f0050*/
    NullModemClass::Negotiate((int)&MEMORY[0xA8EA70]); /*0x5f0057*/
  return ObjectClass::DetachAndFree(&MEMORY[0xA8EA70]);
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

  LOBYTE(v0) = MEMORY[0xA8D5F8]; /*0x5f0073*/
  v4[0] = 0; /*0x5f007c*/
  if ( (MEMORY[0xA8D5F8] & 2) == 0 ) /*0x5f0081*/
  {
    memset(v4, 0, sizeof(v4)); /*0x5f0094*/
    v5 = 0; /*0x5f0096*/
    v6 = 0; /*0x5f0098*/
    v4[0] = 19; /*0x5f00a5*/
    Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v4, 111, 0); /*0x5f00aa*/
    Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v4, 111, 0); /*0x5f00bd*/
    v1 = MEMORY[0x887340]; /*0x5f00c7*/
    if ( MEMORY[0x887338] != -1 ) /*0x5f00d0*/
      v1 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5f00e2*/
    while ( 1 ) /*0x5f00e4*/
    {
      LOBYTE(v0) = MEMORY[0x887338]; /*0x5f00e4*/
      v2 = MEMORY[0x887340]; /*0x5f00e9*/
      if ( MEMORY[0x887338] != -1 ) /*0x5f00f2*/
      {
        v0 = Timer::GetTicks() - MEMORY[0x887338]; /*0x5f00fe*/
        v2 += v0; /*0x5f0104*/
      }
      if ( (unsigned int)(v2 - v1) >= 0x1E ) /*0x5f010b*/
        break; /*0x5f010b*/
      Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x5f0112*/
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
  switch ( MEMORY[0xA8DB30] ) /*0x5f012d*/
  {
    case 0: /*0x5f012d*/
    case 1: /*0x5f012d*/
      goto LABEL_3;
    case 2: /*0x5f012d*/
      if ( (Dialog::CheckButtonState() & 0x80u) != 0 ) /*0x5f0140*/
        goto LABEL_3; /*0x5f0140*/
      LOBYTE(v2) = 1; /*0x5f014d*/
      result = Modem::CheckStatus(v2, MEMORY[0xAC1234], a1); /*0x5f014f*/
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
        result = Modem::DetectAndConnect(v3, MEMORY[0xAC1234], a1); /*0x5f016a*/
      }
      break; /*0x5f016a*/
    default:
      return result;
  }
  return result; /*0x5f016f*/
}


// ==== 0x005F0180  HandlePlayerDisconnection  this=-  sig=ida-proto ====
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
  CampaignScore *v11; // [esp+0h] [ebp-A4h]
  wchar_t String[80]; // [esp+4h] [ebp-A0h] BYREF

  result = HouseClass_Player.__pad_5568[8856]; /*0x5f0180*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8856] != 1 ) /*0x5f018f*/
  {
    result = (char)HouseClass_Array; /*0x5f0195*/
    v3 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * a1]; /*0x5f019a*/
    if ( v3 ) /*0x5f019f*/
    {
      result = *(_BYTE *)(v3 + 492); /*0x5f01a5*/
      if ( result ) /*0x5f01ad*/
      {
        String[0] = 0; /*0x5f01b6*/
        if ( a2 == -1 ) /*0x5f01bd*/
        {
          ObjectClass::FreeResources((int)&HouseClass_Player.__pad_5568[22460]); /*0x5f0227*/
        }
        else if ( a2 ) /*0x5f01c1*/
        {
          if ( a2 == 1 ) /*0x5f01c6*/
          {
            StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[76], 0, &stru_830620.__pad_14B0[948], 6412); /*0x5f01e0*/
            swprintf(String, (const size_t)StringCSF, (const wchar_t *const)(v3 + 90154), v11); /*0x5f01eb*/
          }
        }
        else
        {
          v5 = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[36], 0, &stru_830620.__pad_14B0[948], 6416); /*0x5f020d*/
          swprintf(String, (const size_t)v5, (const wchar_t *const)(v3 + 90154), v11); /*0x5f0218*/
        }
        if ( wcslen(String) ) /*0x5f0231*/
        {
          v6 = Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5312) * 900.0); /*0x5f0250*/
          MessageListClass::AddMessage( /*0x5f0273*/
            &HouseClass_Player.__pad_5568[10668],
            0,
            0,
            (CellStruct *)String,
            *(_DWORD *)(*(_DWORD *)(v3 + 52) + 192),
            (IUnknown *)0x4046,
            v6,
            0);
          MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 0); /*0x5f027f*/
        }
        v7 = 0; /*0x5f028b*/
        if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x5f028f*/
        {
          while ( _wcsicmp( /*0x5f02b0*/
                    *(const wchar_t **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v7),
                    (const wchar_t *)(v3 + 90154)) )
          {
            if ( ++v7 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x5f02ba*/
              goto LABEL_20; /*0x5f02ba*/
          }
          __3_YAXPAX_Z(*(void **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v7)); /*0x5f02c7*/
          v8 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368] + 16))( /*0x5f02e3*/
                 &HouseClass_Player.__pad_5568[18368],
                 *(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v7);
          if ( v8 != -1 && v8 < *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x5f02f3*/
          {
            --*(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x5f02f8*/
            for ( ; /*0x5f02fe*/
                  v8 < *(int *)&HouseClass_Player.__pad_5568[18384];
                  *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v8 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v8) )
            {
              ++v8; /*0x5f0306*/
            }
          }
        }
LABEL_20:
        HouseClass::AIBuildBase((#375 *)v3); /*0x5f0318*/
        result = HouseClass_Player.__pad_5568[8856] - 1; /*0x5f0324*/
        if ( --*(_DWORD *)&HouseClass_Player.__pad_5568[8856] == 1 ) /*0x5f032f*/
        {
          v9 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[976], 0, &stru_830620.__pad_14B0[948], 6453); /*0x5f0342*/
          swprintf(String, (const size_t)&off_8240B4, v9, v11); /*0x5f0352*/
          v10 = Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5312) * 900.0); /*0x5f036e*/
          MessageListClass::AddMessage( /*0x5f0391*/
            &HouseClass_Player.__pad_5568[10668],
            0,
            0,
            (CellStruct *)String,
            *(_DWORD *)(*(_DWORD *)(v3 + 52) + 192),
            (IUnknown *)0x4046,
            v10,
            0);
          return MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 0); /*0x5f039d*/
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
  ObjectClass *String; // esi
  wchar_t *StringCSF; // eax
  HWND MessageBox; // eax
  int v5; // esi
  int v6; // ebp
  int v7; // eax
  int v8; // esi
  DWORD Ticks; // ecx
  int v10; // esi
  int v11; // esi
  int v12; // edi
  int v13; // esi
  int v14; // esi
  wchar_t *v15; // eax
  wchar_t *v17; // [esp-18h] [ebp-228h]
  char v19; // [esp+Bh] [ebp-205h]
  int v20; // [esp+Ch] [ebp-204h]
  SkirmishDialog *hWnd; // [esp+10h] [ebp-200h]
  CampaignScore aP2[7]; // [esp+14h] [ebp-1FCh] BYREF
  __int16 v23; // [esp+110h] [ebp-100h]
  CampaignScore aP1; // [esp+114h] [ebp-FCh] BYREF

  v1 = 0; /*0x5f03bd*/
  v19 = 1; /*0x5f03d0*/
  *((_BYTE *)&g_MatrixTransformState + 9524) = 0; /*0x5f03d5*/
  String = (ObjectClass *)GetStringCSF(g_Str_TXT_CANCEL, 0, &stru_830620.__pad_14B0[948], 6489); /*0x5f03f1*/
  StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[996], 0, &stru_830620.__pad_14B0[948], 6489); /*0x5f03f3*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, (LPARAM)String, (LONG)(&g_MatrixTransformState + 2381)); /*0x5f03fc*/
  hWnd = (SkirmishDialog *)MessageBox; /*0x5f0403*/
  if ( !MessageBox ) /*0x5f0407*/
    return 0; /*0x5f067c*/
  Dialog::Show(MessageBox); /*0x5f040f*/
  v5 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5f0419*/
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5f0422*/
    v5 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5f0434*/
  v20 = v5; /*0x5f0438*/
  v6 = v5; /*0x5f043c*/
  while ( Dialog::PumpMessages() != 1 && !*((_BYTE *)&g_MatrixTransformState + 9524) ) /*0x5f0452*/
  {
    Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5f045d*/
    v7 = *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5f0462*/
    v8 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5f0467*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5f0470*/
    {
      Ticks = Timer::GetTicks(); /*0x5f047c*/
      v7 = *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5f047e*/
      v8 += Ticks - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5f0485*/
    }
    if ( (unsigned int)(v8 - v6) > 0x1E ) /*0x5f048c*/
    {
      v10 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5f048e*/
      if ( v7 != -1 ) /*0x5f0497*/
        v10 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5f04a9*/
      memset(&aP2[0].CampaignScore_field_0x04, 0, 0xF8u); /*0x5f04bc*/
      v23 = 0; /*0x5f04be*/
      v6 = v10; /*0x5f04d1*/
      aP2[0].CampaignScore_field_0x04 = 100; /*0x5f04d3*/
      LOBYTE(aP2[0].CampaignScore_field_0x1C) = HouseClass_Player.__pad_5568[8416]; /*0x5f04db*/
      Stream::WriteBlock( /*0x5f04df*/
        (int)&HouseClass_Player.__pad_5568[22460],
        (CellStruct *)&aP2[0].CampaignScore_field_0x04,
        250,
        0);
    }
    if ( ObjectTypeClass::CreateInstance((int)&HouseClass_Player.__pad_5568[22460], &aP1, aP2) > 0 ) /*0x5f04fd*/
    {
      v11 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5f0508*/
      if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5f0511*/
        v11 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5f0523*/
      v20 = v11; /*0x5f052c*/
      if ( *(_DWORD *)aP1.__pad_0 == 100 ) /*0x5f0533*/
      {
        if ( LOBYTE(aP1.CampaignScore_field_0x18) == *(_DWORD *)&HouseClass_Player.__pad_5568[8416] ) /*0x5f054d*/
        {
          v17 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 6530); /*0x5f064a*/
          v15 = GetStringCSF(g_Str_TXT_SYSTEM_NOT_RESPONDING, 0, &stru_830620.__pad_14B0[948], 6530); /*0x5f0655*/
          Dialog::ShowMessageBox((int)v15, v17, 0, 0, 0, a1); /*0x5f065f*/
          break; /*0x5f065f*/
        }
        memset(&aP2[0].CampaignScore_field_0x04, 0, 0xF8u); /*0x5f0560*/
        v23 = 0; /*0x5f0571*/
        aP2[0].CampaignScore_field_0x04 = 100; /*0x5f0573*/
        LOBYTE(aP2[0].CampaignScore_field_0x1C) = HouseClass_Player.__pad_5568[8416]; /*0x5f057b*/
        Stream::WriteBlock( /*0x5f057f*/
          (int)&HouseClass_Player.__pad_5568[22460],
          (CellStruct *)&aP2[0].CampaignScore_field_0x04,
          250,
          1);
        v12 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5f0589*/
        if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5f0594*/
          v12 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5f05a6*/
        v6 = v12; /*0x5f05a8*/
        while ( 1 ) /*0x5f05af*/
        {
          v13 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5f05af*/
          if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5f05b7*/
            v13 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5f05c9*/
          if ( (unsigned int)(v13 - v12) >= 0x3C ) /*0x5f05d0*/
            break; /*0x5f05d0*/
          Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5f05d7*/
        }
        v1 = 1; /*0x5f05de*/
        v19 = 0; /*0x5f05e0*/
      }
    }
    v14 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5f05ea*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5f05f3*/
      v14 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5f0605*/
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
char __fastcall Modem::CheckStatus(int a1, int a2)
{
  char v4; // bl
  CellStruct *v5; // eax
  CellStruct *v7; // eax
  int v8; // eax
  CellStruct *v9; // eax
  CellStruct *v10; // esi
  CellStruct *v11; // eax
  wchar_t *v12; // [esp-14h] [ebp-3Ch]
  wchar_t *v13; // [esp-14h] [ebp-3Ch]
  wchar_t *v14; // [esp-14h] [ebp-3Ch]
  wchar_t *v15; // [esp-14h] [ebp-3Ch]
  wchar_t *v16; // [esp-14h] [ebp-3Ch]
  wchar_t *v17; // [esp-14h] [ebp-3Ch]
  wchar_t *v18; // [esp-14h] [ebp-3Ch]
  wchar_t *v19; // [esp-14h] [ebp-3Ch]
  wchar_t *v20; // [esp-14h] [ebp-3Ch]
  wchar_t *v21; // [esp-10h] [ebp-38h]
  wchar_t *v22; // [esp-10h] [ebp-38h]
  wchar_t *StringCSF; // [esp-10h] [ebp-38h]
  wchar_t *v24; // [esp-10h] [ebp-38h]
  wchar_t *v25; // [esp-10h] [ebp-38h]
  wchar_t *v26; // [esp-10h] [ebp-38h]
  wchar_t *v27; // [esp-10h] [ebp-38h]
  wchar_t *v28; // [esp-10h] [ebp-38h]
  wchar_t *v29; // [esp-10h] [ebp-38h]
  int v30; // [esp+0h] [ebp-28h]
  char v31; // [esp+Fh] [ebp-19h]

  v31 = 0; /*0x5f06a1*/
  Debug::Log(); /*0x5f06a6*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[18436] &= ~1u; /*0x5f06bc*/
  *(&g_MatrixTransformState + 2313) = (CoordStruct *)a1; /*0x5f06c2*/
  v4 = Dialog::CheckButtonState(); /*0x5f06cd*/
  Debug::Log(); /*0x5f06d4*/
  Debug::Log(); /*0x5f06f1*/
  Debug::Log(); /*0x5f070e*/
  Debug::Log(); /*0x5f072b*/
  Debug::Log(); /*0x5f074d*/
  if ( (_BYTE)a2 ) /*0x5f075b*/
  {
    if ( v4 < 0 ) /*0x5f075f*/
    {
      v5 = *(CellStruct **)&HouseClass_Player.__pad_5568[18436]; /*0x5f0761*/
      LOBYTE(v5) = HouseClass_Player.__pad_5568[18436] | 1; /*0x5f0767*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[18436] = v5; /*0x5f076a*/
      return 1; /*0x5f0775*/
    }
  }
  else if ( v4 < 0 ) /*0x5f0778*/
  {
    Debug::Log(); /*0x5f077f*/
    NullModemClass::Negotiate((int)&HouseClass_Player.__pad_5568[22460]); /*0x5f078c*/
    v7 = *(CellStruct **)&HouseClass_Player.__pad_5568[18436]; /*0x5f0791*/
    LOBYTE(v7) = HouseClass_Player.__pad_5568[18436] & 0xFE; /*0x5f0796*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[18436] = v7; /*0x5f0798*/
  }
  AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f07a7*/
  if ( !NullModemClass::DetectModem(&HouseClass_Player.__pad_5568[22460], (_DWORD *)a1, a2) ) /*0x5f07b3*/
  {
    Debug::Log(); /*0x5f07c8*/
    nullsub_28(); /*0x5f07d5*/
    String::NormalizeNewlines(); /*0x5f07df*/
    StringBuffer::Reset(&HouseClass_Player.__pad_5568[22460]); /*0x5f07e9*/
    v8 = *(_DWORD *)(a1 + 8); /*0x5f07ee*/
    if ( v8 == 14400 ) /*0x5f07f6*/
    {
      Debug::Log(); /*0x5f0939*/
      *(_DWORD *)(a1 + 8) = 19200; /*0x5f093e*/
      if ( (HouseClass_Player.__pad_5568[17220] & 2) == 0 && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 1 ) /*0x5f0958*/
        NullModemClass::Negotiate((int)&HouseClass_Player.__pad_5568[22460]); /*0x5f095f*/
      ObjectClass::DetachAndFree(&HouseClass_Player.__pad_5568[22460]); /*0x5f0969*/
      NullModemClass::Init( /*0x5f0988*/
        (AnimClass *)&HouseClass_Player.__pad_5568[22460],
        *(_DWORD *)a1,
        *(CellStruct **)(a1 + 4),
        (const char *)(a1 + 48),
        *(CellStruct **)(a1 + 8),
        0,
        8,
        1);
      AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f0997*/
      if ( !NullModemClass::DetectModem(&HouseClass_Player.__pad_5568[22460], (_DWORD *)a1, a2) ) /*0x5f09a3*/
      {
        Debug::Log(); /*0x5f09b5*/
        nullsub_28(); /*0x5f09c2*/
        String::NormalizeNewlines(); /*0x5f09cc*/
        StringBuffer::Reset(&HouseClass_Player.__pad_5568[22460]); /*0x5f09d6*/
        StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 6664); /*0x5f0a06*/
        v14 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[1568], 0, &stru_830620.__pad_14B0[948], 6664); /*0x5f0a1a*/
        Dialog::ShowMessageBox((int)v14, StringCSF, 0, 0, 0, v30); /*0x5f0a1b*/
        goto LABEL_21; /*0x5f0a1b*/
      }
    }
    else
    {
      if ( v8 != 28800 ) /*0x5f0801*/
      {
        v21 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 6692); /*0x5f082e*/
        v12 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[1568], 0, &stru_830620.__pad_14B0[948], 6692); /*0x5f0842*/
        Dialog::ShowMessageBox((int)v12, v21, 0, 0, 0, v30); /*0x5f0843*/
LABEL_21:
        v9 = *(CellStruct **)&HouseClass_Player.__pad_5568[18436]; /*0x5f0a85*/
        LOBYTE(v9) = HouseClass_Player.__pad_5568[18436] | 1; /*0x5f0a8a*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[18436] = v9; /*0x5f0a8d*/
        return 0; /*0x5f0a99*/
      }
      Debug::Log(); /*0x5f084d*/
      *(_DWORD *)(a1 + 8) = 38400; /*0x5f0852*/
      if ( (HouseClass_Player.__pad_5568[17220] & 2) == 0 && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 1 ) /*0x5f086c*/
        NullModemClass::Negotiate((int)&HouseClass_Player.__pad_5568[22460]); /*0x5f0873*/
      ObjectClass::DetachAndFree(&HouseClass_Player.__pad_5568[22460]); /*0x5f087d*/
      NullModemClass::Init( /*0x5f089c*/
        (AnimClass *)&HouseClass_Player.__pad_5568[22460],
        *(_DWORD *)a1,
        *(CellStruct **)(a1 + 4),
        (const char *)(a1 + 48),
        *(CellStruct **)(a1 + 8),
        0,
        8,
        1);
      AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f08ab*/
      if ( !NullModemClass::DetectModem(&HouseClass_Player.__pad_5568[22460], (_DWORD *)a1, a2) ) /*0x5f08b7*/
      {
        Debug::Log(); /*0x5f08c9*/
        nullsub_28(); /*0x5f08d6*/
        String::NormalizeNewlines(); /*0x5f08e0*/
        StringBuffer::Reset(&HouseClass_Player.__pad_5568[22460]); /*0x5f08ea*/
        v22 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 6685); /*0x5f091a*/
        v13 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[1568], 0, &stru_830620.__pad_14B0[948], 6685); /*0x5f092e*/
        Dialog::ShowMessageBox((int)v13, v22, 0, 0, 0, v30); /*0x5f092f*/
        goto LABEL_21; /*0x5f092f*/
      }
    }
  }
  Debug::Log(); /*0x5f0a9f*/
  v10 = (CellStruct *)Dialog::RunModemDialing( /*0x5f0abd*/
                        (int *)&HouseClass_Player.__pad_5568[22460],
                        (ObjectClass *)(&(&g_MatrixTransformState)[191] + 2),
                        *(_DWORD *)(a1 + 12),
                        a2);
  if ( (_BYTE)a2 ) /*0x5f0abf*/
  {
    MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2); /*0x5f0ac8*/
    TacticalMap::Redraw(&stru_87C374.__pad_14B0[8132]); /*0x5f0ad2*/
  }
  switch ( (unsigned int)v10 ) /*0x5f0ae0*/
  {
    case 0u: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0aec*/
      v31 = 1; /*0x5f0af4*/
      break; /*0x5f0af9*/
    case 1u: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0b03*/
      v24 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 6758); /*0x5f0b36*/
      v15 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[1320], 0, &stru_830620.__pad_14B0[948], 6758); /*0x5f0b4a*/
      Dialog::ShowMessageBox((int)v15, v24, 0, 0, 0, v30); /*0x5f0b4b*/
      goto LABEL_32; /*0x5f0b4b*/
    case 2u: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0b55*/
      v25 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 6764); /*0x5f0b88*/
      v16 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[1268], 0, &stru_830620.__pad_14B0[948], 6764); /*0x5f0b9c*/
      Dialog::ShowMessageBox((int)v16, v25, 0, 0, 0, v30); /*0x5f0b9d*/
      goto LABEL_32; /*0x5f0b9d*/
    case 3u: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0ba7*/
      v26 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 6770); /*0x5f0bda*/
      v17 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[1212], 0, &stru_830620.__pad_14B0[948], 6770); /*0x5f0bee*/
      Dialog::ShowMessageBox((int)v17, v26, 0, 0, 0, v30); /*0x5f0bef*/
      goto LABEL_32; /*0x5f0bef*/
    case 4u: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0c4b*/
      v28 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 6782); /*0x5f0c7e*/
      v19 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[1092], 0, &stru_830620.__pad_14B0[948], 6782); /*0x5f0c92*/
      Dialog::ShowMessageBox((int)v19, v28, 0, 0, 0, v30); /*0x5f0c93*/
      goto LABEL_32; /*0x5f0c93*/
    case 5u: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0bf9*/
      v27 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 6776); /*0x5f0c2c*/
      v18 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[1156], 0, &stru_830620.__pad_14B0[948], 6776); /*0x5f0c40*/
      Dialog::ShowMessageBox((int)v18, v27, 0, 0, 0, v30); /*0x5f0c41*/
      goto LABEL_32; /*0x5f0c41*/
    case 6u: /*0x5f0ae0*/
      Debug::Log(); /*0x5f0c9a*/
      NullModemClass::Negotiate((int)&HouseClass_Player.__pad_5568[22460]); /*0x5f0ca7*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[18436] &= ~1u; /*0x5f0ccc*/
      v29 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 6790); /*0x5f0ce6*/
      v20 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[1028], 0, &stru_830620.__pad_14B0[948], 6790); /*0x5f0cfa*/
      Dialog::ShowMessageBox((int)v20, v29, 0, 0, 0, v30); /*0x5f0cfb*/
LABEL_32:
      v31 = 0; /*0x5f0d00*/
      break; /*0x5f0d00*/
    default:
      break;
  }
  nullsub_28(); /*0x5f0d05*/
  String::NormalizeNewlines(); /*0x5f0d14*/
  StringBuffer::Reset(&HouseClass_Player.__pad_5568[22460]); /*0x5f0d1e*/
  v11 = *(CellStruct **)&HouseClass_Player.__pad_5568[18436]; /*0x5f0d23*/
  LOBYTE(v11) = HouseClass_Player.__pad_5568[18436] | 1; /*0x5f0d28*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[18436] = v11; /*0x5f0d2b*/
  return v31; /*0x5f0766*/
}


// ==== 0x005F0D60  Modem::DetectAndConnect  this=Modem  sig=csp ====
char __fastcall Modem::DetectAndConnect(int a1, int a2)
{
  char v4; // bl
  CellStruct *v5; // eax
  CellStruct *v7; // eax
  int v8; // eax
  CellStruct *v9; // eax
  CellStruct *v10; // eax
  wchar_t *v11; // [esp-14h] [ebp-34h]
  wchar_t *v12; // [esp-14h] [ebp-34h]
  wchar_t *v13; // [esp-14h] [ebp-34h]
  wchar_t *v14; // [esp-14h] [ebp-34h]
  wchar_t *v15; // [esp-14h] [ebp-34h]
  wchar_t *v16; // [esp-14h] [ebp-34h]
  wchar_t *v17; // [esp-14h] [ebp-34h]
  wchar_t *v18; // [esp-10h] [ebp-30h]
  wchar_t *v19; // [esp-10h] [ebp-30h]
  wchar_t *StringCSF; // [esp-10h] [ebp-30h]
  wchar_t *v21; // [esp-10h] [ebp-30h]
  wchar_t *v22; // [esp-10h] [ebp-30h]
  wchar_t *v23; // [esp-10h] [ebp-30h]
  wchar_t *v24; // [esp-10h] [ebp-30h]
  int v25; // [esp+0h] [ebp-20h]
  char v26; // [esp+Fh] [ebp-11h]

  v26 = 0; /*0x5f0d71*/
  Debug::Log(); /*0x5f0d76*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[18436] &= ~1u; /*0x5f0d8c*/
  *(&g_MatrixTransformState + 2313) = (CoordStruct *)a1; /*0x5f0d92*/
  v4 = Dialog::CheckButtonState(); /*0x5f0d9d*/
  Debug::Log(); /*0x5f0da4*/
  Debug::Log(); /*0x5f0dc1*/
  Debug::Log(); /*0x5f0dde*/
  Debug::Log(); /*0x5f0dfb*/
  Debug::Log(); /*0x5f0e1d*/
  if ( (_BYTE)a2 ) /*0x5f0e2b*/
  {
    if ( v4 < 0 ) /*0x5f0e2f*/
    {
      v5 = *(CellStruct **)&HouseClass_Player.__pad_5568[18436]; /*0x5f0e31*/
      LOBYTE(v5) = HouseClass_Player.__pad_5568[18436] | 1; /*0x5f0e37*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[18436] = v5; /*0x5f0e3a*/
      return 1; /*0x5f0e45*/
    }
  }
  else if ( v4 < 0 ) /*0x5f0e48*/
  {
    Debug::Log(); /*0x5f0e4f*/
    NullModemClass::Negotiate((int)&HouseClass_Player.__pad_5568[22460]); /*0x5f0e5c*/
    v7 = *(CellStruct **)&HouseClass_Player.__pad_5568[18436]; /*0x5f0e61*/
    LOBYTE(v7) = HouseClass_Player.__pad_5568[18436] & 0xFE; /*0x5f0e66*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[18436] = v7; /*0x5f0e68*/
  }
  AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f0e77*/
  if ( !NullModemClass::DetectModem(&HouseClass_Player.__pad_5568[22460], (_DWORD *)a1, a2) ) /*0x5f0e83*/
  {
    Debug::Log(); /*0x5f0e98*/
    nullsub_28(); /*0x5f0ea5*/
    String::NormalizeNewlines(); /*0x5f0eaf*/
    StringBuffer::Reset(&HouseClass_Player.__pad_5568[22460]); /*0x5f0eb9*/
    v8 = *(_DWORD *)(a1 + 8); /*0x5f0ebe*/
    if ( v8 == 14400 ) /*0x5f0ec6*/
    {
      Debug::Log(); /*0x5f1009*/
      *(_DWORD *)(a1 + 8) = 19200; /*0x5f100e*/
      if ( (HouseClass_Player.__pad_5568[17220] & 2) == 0 && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 1 ) /*0x5f1028*/
        NullModemClass::Negotiate((int)&HouseClass_Player.__pad_5568[22460]); /*0x5f102f*/
      ObjectClass::DetachAndFree(&HouseClass_Player.__pad_5568[22460]); /*0x5f1039*/
      NullModemClass::Init( /*0x5f1058*/
        (AnimClass *)&HouseClass_Player.__pad_5568[22460],
        *(_DWORD *)a1,
        *(CellStruct **)(a1 + 4),
        (const char *)(a1 + 48),
        *(CellStruct **)(a1 + 8),
        0,
        8,
        1);
      AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f1067*/
      if ( !NullModemClass::DetectModem(&HouseClass_Player.__pad_5568[22460], (_DWORD *)a1, a2) ) /*0x5f1073*/
      {
        Debug::Log(); /*0x5f1085*/
        nullsub_28(); /*0x5f1092*/
        String::NormalizeNewlines(); /*0x5f109c*/
        StringBuffer::Reset(&HouseClass_Player.__pad_5568[22460]); /*0x5f10a6*/
        StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 6887); /*0x5f10d6*/
        v13 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[1568], 0, &stru_830620.__pad_14B0[948], 6887); /*0x5f10ea*/
        Dialog::ShowMessageBox((int)v13, StringCSF, 0, 0, 0, v25); /*0x5f10eb*/
        goto LABEL_21; /*0x5f10eb*/
      }
    }
    else
    {
      if ( v8 != 28800 ) /*0x5f0ed1*/
      {
        v18 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 6915); /*0x5f0efe*/
        v11 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[1568], 0, &stru_830620.__pad_14B0[948], 6915); /*0x5f0f12*/
        Dialog::ShowMessageBox((int)v11, v18, 0, 0, 0, v25); /*0x5f0f13*/
LABEL_21:
        v9 = *(CellStruct **)&HouseClass_Player.__pad_5568[18436]; /*0x5f1155*/
        LOBYTE(v9) = HouseClass_Player.__pad_5568[18436] | 1; /*0x5f115a*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[18436] = v9; /*0x5f115d*/
        return 0; /*0x5f1169*/
      }
      Debug::Log(); /*0x5f0f1d*/
      *(_DWORD *)(a1 + 8) = 38400; /*0x5f0f22*/
      if ( (HouseClass_Player.__pad_5568[17220] & 2) == 0 && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 1 ) /*0x5f0f3c*/
        NullModemClass::Negotiate((int)&HouseClass_Player.__pad_5568[22460]); /*0x5f0f43*/
      ObjectClass::DetachAndFree(&HouseClass_Player.__pad_5568[22460]); /*0x5f0f4d*/
      NullModemClass::Init( /*0x5f0f6c*/
        (AnimClass *)&HouseClass_Player.__pad_5568[22460],
        *(_DWORD *)a1,
        *(CellStruct **)(a1 + 4),
        (const char *)(a1 + 48),
        *(CellStruct **)(a1 + 8),
        0,
        8,
        1);
      AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f0f7b*/
      if ( !NullModemClass::DetectModem(&HouseClass_Player.__pad_5568[22460], (_DWORD *)a1, a2) ) /*0x5f0f87*/
      {
        Debug::Log(); /*0x5f0f99*/
        nullsub_28(); /*0x5f0fa6*/
        String::NormalizeNewlines(); /*0x5f0fb0*/
        StringBuffer::Reset(&HouseClass_Player.__pad_5568[22460]); /*0x5f0fba*/
        v19 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 6908); /*0x5f0fea*/
        v12 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[1568], 0, &stru_830620.__pad_14B0[948], 6908); /*0x5f0ffe*/
        Dialog::ShowMessageBox((int)v12, v19, 0, 0, 0, v25); /*0x5f0fff*/
        goto LABEL_21; /*0x5f0fff*/
      }
    }
  }
  Debug::Log(); /*0x5f116f*/
  switch ( WaitModemConnection((int)&HouseClass_Player.__pad_5568[22460], v4 & 0x80, a2) ) /*0x5f118b*/
  {
    case 0: /*0x5f118b*/
      Debug::Log(); /*0x5f1197*/
      v26 = 1; /*0x5f119f*/
      break; /*0x5f11a4*/
    case 1: /*0x5f118b*/
      Debug::Log(); /*0x5f11ae*/
      v21 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 6941); /*0x5f11e1*/
      v14 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[1320], 0, &stru_830620.__pad_14B0[948], 6941); /*0x5f11f5*/
      Dialog::ShowMessageBox((int)v14, v21, 0, 0, 0, v25); /*0x5f11f6*/
      goto LABEL_28; /*0x5f11f6*/
    case 3: /*0x5f118b*/
      Debug::Log(); /*0x5f1200*/
      v22 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 6947); /*0x5f1233*/
      v15 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[1212], 0, &stru_830620.__pad_14B0[948], 6947); /*0x5f1247*/
      Dialog::ShowMessageBox((int)v15, v22, 0, 0, 0, v25); /*0x5f1248*/
      goto LABEL_28; /*0x5f1248*/
    case 5: /*0x5f118b*/
      Debug::Log(); /*0x5f1252*/
      v23 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 6953); /*0x5f1285*/
      v16 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[1156], 0, &stru_830620.__pad_14B0[948], 6953); /*0x5f1299*/
      Dialog::ShowMessageBox((int)v16, v23, 0, 0, 0, v25); /*0x5f129a*/
      goto LABEL_28; /*0x5f129a*/
    case 6: /*0x5f118b*/
      Debug::Log(); /*0x5f12a1*/
      v24 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 6959); /*0x5f12d4*/
      v17 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[1772], 0, &stru_830620.__pad_14B0[948], 6959); /*0x5f12e8*/
      Dialog::ShowMessageBox((int)v17, v24, 0, 0, 0, v25); /*0x5f12e9*/
LABEL_28:
      v26 = 0; /*0x5f12ee*/
      break; /*0x5f12ee*/
    default:
      break;
  }
  nullsub_28(); /*0x5f12f3*/
  String::NormalizeNewlines(); /*0x5f1302*/
  StringBuffer::Reset(&HouseClass_Player.__pad_5568[22460]); /*0x5f130c*/
  v10 = *(CellStruct **)&HouseClass_Player.__pad_5568[18436]; /*0x5f1311*/
  LOBYTE(v10) = HouseClass_Player.__pad_5568[18436] | 1; /*0x5f1316*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[18436] = v10; /*0x5f1319*/
  return v26; /*0x5f0e36*/
}


// ==== 0x005F1350  AppendStringBuilderChar  this=-  sig=ida-proto ====
int __fastcall StringBuilder_AppendChar(char a1)
{
  int result; // eax

  result = MEMORY[0xA8EA84]; /*0x5f1358*/
  if ( MEMORY[0xA8EA84] < MEMORY[0xA8EA80] - 1 ) /*0x5f135f*/
  {
    *(_BYTE *)(MEMORY[0xA8EA7C] + MEMORY[0xA8EA84]) = a1; /*0x5f1367*/
    *(_BYTE *)(MEMORY[0xA8EA7C] + MEMORY[0xA8EA84] + 1) = 0; /*0x5f1375*/
    return ++MEMORY[0xA8EA84]; /*0x5f137f*/
  }
  return result; /*0x5f1385*/
}


// ==== 0x005F1390  Timer::GetElapsed  this=Timer  sig=csp ====
int __thiscall Timer_GetElapsed(_DWORD *this)
{
  int v1; // edi

  v1 = *(this + 2); /*0x5f1396*/
  if ( *this != -1 ) /*0x5f139c*/
    v1 += Timer::GetTicks() - *this; /*0x5f13a8*/
  return v1; /*0x5f13ac*/
}


// ==== 0x005F13B0  sub_5F13B0  this=-  sig=ida-proto ====
int sub_5F13B0()
{
  MEMORY[0xAC1278] = 0; /*0x5f13b2*/
  MEMORY[0xAC127C] = 0; /*0x5f13b7*/
  MEMORY[0xAC1280] = 0; /*0x5f13bc*/
  MEMORY[0xAC1284] = 0; /*0x5f13c1*/
  return 0; /*0x5f13c6*/
}


// ==== 0x005F13D0  sub_5F13D0  this=-  sig=ida-proto ====
void sub_5F13D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5f13dc*/
  MEMORY[0xAC12E0] = Math::Sqrt(v0 + v0); /*0x5f13ee*/
}


// ==== 0x005F1400  sub_5F1400  this=-  sig=ida-proto ====
void sub_5F1400()
{
  MEMORY[0xAC1338] = MEMORY[0xAC12E0] / 60.0; /*0x5f140c*/
}


// ==== 0x005F1420  sub_5F1420  this=-  sig=ida-proto ====
void sub_5F1420()
{
  MEMORY[0xAC1320] = 1.0 / MEMORY[0xAC1338]; /*0x5f142c*/
}


// ==== 0x005F1440  sub_5F1440  this=-  sig=ida-proto ====
void sub_5F1440()
{
  MEMORY[0xAC1318] = 0.0174532925199433 * 45.0; /*0x5f144c*/
}


// ==== 0x005F1460  sub_5F1460  this=-  sig=ida-proto ====
void sub_5F1460()
{
  MEMORY[0xAC12F0] = 0.0174532925199433 * 60.0; /*0x5f146c*/
}


// ==== 0x005F1480  sub_5F1480  this=-  sig=ida-proto ====
void sub_5F1480()
{
  MEMORY[0xAC1270] = 0.0174532925199433 * 90.0; /*0x5f148c*/
}


// ==== 0x005F14A0  sub_5F14A0  this=-  sig=ida-proto ====
__int64 sub_5F14A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC1270] - MEMORY[0xAC12F0]); /*0x5f14b2*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC12E0] * 0.5); /*0x5f14c6*/
  MEMORY[0xAC1340] = result; /*0x5f14cb*/
  return result; /*0x5f14d0*/
}


// ==== 0x005F14E0  sub_5F14E0  this=-  sig=ida-proto ====
void sub_5F14E0()
{
  MEMORY[0xAC12F8] = Math::ArcTan((double)MEMORY[0xAC1340] * 0.00390625); /*0x5f14f7*/
}


// ==== 0x005F1510  sub_5F1510  this=-  sig=ida-proto ====
void sub_5F1510()
{
  MEMORY[0xAC1310] = Math::ArcTan((double)(2 * MEMORY[0xAC1340]) / MEMORY[0xAC12E0]); /*0x5f1532*/
}


// ==== 0x005F1540  sub_5F1540  this=-  sig=ida-proto ====
__int64 sub_5F1540()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC1340]) + 0.5); /*0x5f155b*/
  MEMORY[0xAC1334] = result; /*0x5f1560*/
  return result; /*0x5f1566*/
}


// ==== 0x005F1570  sub_5F1570  this=-  sig=ida-proto ====
int sub_5F1570()
{
  MEMORY[0xAC12D8] = 0; /*0x5f1572*/
  MEMORY[0xAC12DA] = 0; /*0x5f1578*/
  return 0; /*0x5f157e*/
}


// ==== 0x005F1580  sub_5F1580  this=-  sig=ida-proto ====
int sub_5F1580()
{
  MEMORY[0xAC1300] = 0; /*0x5f1582*/
  MEMORY[0xAC1304] = 0; /*0x5f1587*/
  MEMORY[0xAC1308] = 0; /*0x5f158c*/
  return 0; /*0x5f1591*/
}


// ==== 0x005F15A0  sub_5F15A0  this=-  sig=ida-proto ====
int sub_5F15A0()
{
  MEMORY[0xAC1330] = 0; /*0x5f15a5*/
  MEMORY[0xAC1328] = 128; /*0x5f15af*/
  MEMORY[0xAC132C] = 128; /*0x5f15b4*/
  return 128; /*0x5f15b9*/
}


// ==== 0x005F15C0  ObjectClass::method_5F15C0  this=NullModemClass  sig=csp ====
_DWORD *__thiscall sub_5F15C0(_DWORD *this, int a2, int a3, int a4, __int16 a5)
{
  this->q011 = a2; /*0x5f15cc*/
  this->q012 = a3; /*0x5f15d3*/
  this->Active = a4; /*0x5f15da*/
  *((_WORD *)this + 38) = a5; /*0x5f15e2*/
  this->q00B = 60; /*0x5f15eb*/
  this->q05C = 60; /*0x5f15ee*/
  *this = &vt_NullModemClass; /*0x5f15f1*/
  this->__pad_040 = -1; /*0x5f15f7*/
  this->linkObject = 0; /*0x5f15fa*/
  this->q050 = 0; /*0x5f15fd*/
  this->PlayerIndex = 0; /*0x5f1600*/
  this->PacketsSent = 500; /*0x5f1603*/
  this->LastPacketTime = 0; /*0x5f160a*/
  this->__pad_018 = -1; /*0x5f160d*/
  this->q01C = 0; /*0x5f1610*/
  this->__pad_020 = 0; /*0x5f1613*/
  this->q009 = 3000; /*0x5f1616*/
  this->q00A = 1200; /*0x5f161d*/
  this->q030 = 43; /*0x5f1624*/
  this->__pad_068 = 0; /*0x5f1628*/
  this->q01B = 0; /*0x5f162b*/
  this->q01C = 0; /*0x5f162e*/
  this->linkOpen = 0; /*0x5f1631*/
  this->q060 = -1; /*0x5f1634*/
  this->q064 = 1200; /*0x5f1637*/
  this->q034 = 0; /*0x5f163e*/
  return this; /*0x5f1641*/
}


// ==== 0x005F16E0  NullModemClass::Init  this=AnimClass  sig=csp ====
int __thiscall NullModemClass::Init(
        AnimClass *this,
        int a2,
        CellStruct *aP2,
        const char *a3,
        CellStruct *aP4,
        char a6,
        int a7,
        int a8)
{
  int v9; // ebp
  NullModemConnClass *v10; // eax
  NullModemConnClass *v11; // ecx
  _DWORD *inited; // eax
  int v13; // ecx
  int eax8; // eax
  AbstractClass *v14; // ecx
  void *v16; // eax
  size_t v17; // edx
  _DWORD *v18; // eax
  void **esi19; // esi
  CCINIClass *v19; // ebx
  int v21; // eax
  int eax38; // eax
  CellStruct *v22; // [esp-4h] [ebp-14h]
  const char *v25; // [esp+14h] [ebp+4h]

  Debug::Log(); /*0x5f16eb*/
  v9 = 0; /*0x5f16f6*/
  if ( g_ClipboardBuffer ) /*0x5f16fd*/
    this->field_40 = NullModemClass::GetMember23(g_ClipboardBuffer); /*0x5f1704*/
  else
    this->field_40 = -1; /*0x5f1709*/
  if ( this->field_38 ) /*0x5f1710*/
  {
    Debug::Log(); /*0x5f17a3*/
  }
  else
  {
    Debug::Log(); /*0x5f171e*/
    v10 = (NullModemConnClass *)__2_YAPAXI_Z(0x54u); /*0x5f1725*/
    if ( v10 ) /*0x5f172f*/
    {
      LOWORD(v11) = *(_WORD *)&this->__pad_44[8]; /*0x5f1731*/
      inited = NullModemClass::initConnection( /*0x5f1744*/
                 v10,
                 *(_DWORD *)this->__pad_44,
                 *(NullModemConnClass **)&this->__pad_44[4],
                 (int)this->field_8,
                 v11);
    }
    else
    {
      inited = 0; /*0x5f174b*/
    }
    v13 = *(_DWORD *)this->__pad_5C; /*0x5f174d*/
    this->field_38 = (int)inited; /*0x5f1750*/
    inited[10] = v13; /*0x5f1753*/
    *(_DWORD *)(this->field_38 + 44) = *(_DWORD *)&this->__pad_5C[4]; /*0x5f175c*/
    *(_DWORD *)(this->field_38 + 48) = this->field_64; /*0x5f1765*/
    v22 = (CellStruct *)(*(_DWORD *)&this->__pad_44[4] * (*(_DWORD *)(this->field_38 + 28) + 11)); /*0x5f1775*/
    *(_DWORD *)&this->__pad_44[16] = v22; /*0x5f1776*/
    eax8 = __2_YAPAXI_Z((size_t)v22); /*0x5f1779*/
    v14 = (AbstractClass *)this->field_8; /*0x5f177e*/
    *(_DWORD *)&this->__pad_44[12] = eax8; /*0x5f1781*/
    v16 = (void *)__2_YAPAXI_Z((size_t)v14); /*0x5f1785*/
    v17 = *(_DWORD *)&this->__pad_C[4]; /*0x5f178a*/
    this->field_4 = v16; /*0x5f178d*/
    *(_DWORD *)this->__pad_C = __2_YAPAXI_Z(v17); /*0x5f1799*/
  }
  this->field_58 = 0; /*0x5f17ab*/
  this->field_14 = 0; /*0x5f17ae*/
  if ( !g_ClipboardBuffer ) /*0x5f17b7*/
  {
    v18 = (_DWORD *)__2_YAPAXI_Z(0x2088u); /*0x5f17be*/
    if ( v18 ) /*0x5f17c8*/
      g_ClipboardBuffer = (WinModemClass *)WinModemClass::Construct(v18); /*0x5f17d1*/
    else
      g_ClipboardBuffer = 0; /*0x5f17d8*/
  }
  if ( a2 > 760 ) /*0x5f17e7*/
  {
    if ( a2 == 1000 ) /*0x5f18c4*/
    {
      v25 = &stru_830620.__pad_14B0[2122]; /*0x5f18db*/
    }
    else
    {
      if ( a2 != 1016 ) /*0x5f18c9*/
      {
LABEL_35:
        v25 = 0; /*0x5f18cb*/
        goto LABEL_38; /*0x5f18cf*/
      }
      v25 = &stru_830620.__pad_14B0[2112]; /*0x5f18d1*/
    }
  }
  else
  {
    if ( a2 == 760 ) /*0x5f17ed*/
    {
      v25 = &stru_830620.__pad_14B0[2117]; /*0x5f18b5*/
      goto LABEL_38; /*0x5f18bd*/
    }
    if ( a2 != 1 ) /*0x5f17f4*/
    {
      if ( a2 == 744 ) /*0x5f17fb*/
      {
        v25 = &stru_830620.__pad_14B0[2127]; /*0x5f1801*/
        goto LABEL_38; /*0x5f1809*/
      }
      goto LABEL_35; /*0x5f17fb*/
    }
    esi19 = *(void ***)this->__pad_34; /*0x5f180e*/
    v25 = a3; /*0x5f1817*/
    if ( esi19 ) /*0x5f181b*/
    {
      FileFind::Close(esi19); /*0x5f181f*/
      __3_YAXPAX_Z(esi19); /*0x5f1825*/
      *(_DWORD *)this->__pad_34 = 0; /*0x5f182d*/
    }
    v19 = 0; /*0x5f1830*/
    while ( 1 ) /*0x5f1838*/
    {
      v21 = __2_YAPAXI_Z(0x1Cu); /*0x5f1838*/
      if ( v21 ) /*0x5f1842*/
        v9 = Modem::EnumerateDevices(v21, (WinModemClass *)v19); /*0x5f184c*/
      *(_DWORD *)this->__pad_34 = v9; /*0x5f184e*/
      if ( *(_DWORD *)v9 ) /*0x5f1851*/
      {
        if ( !strcmp(a3, *(const char **)v9) ) /*0x5f1862*/
          break; /*0x5f1862*/
      }
      if ( v9 ) /*0x5f188b*/
      {
        FileFind::Close((void **)v9); /*0x5f188f*/
        __3_YAXPAX_Z((void *)v9); /*0x5f1895*/
      }
      v19 = (CCINIClass *)((char *)v19 + 1); /*0x5f189d*/
      *(_DWORD *)this->__pad_34 = 0; /*0x5f189e*/
      if ( (int)v19 >= 10 ) /*0x5f18a8*/
        goto LABEL_38; /*0x5f18a8*/
      v9 = 0; /*0x5f1834*/
    }
    v25 = *(const char **)(v9 + 4); /*0x5f18af*/
  }
LABEL_38:
  eax38 = (*(int (__thiscall **)(WinModemClass *, const char *, CellStruct *, _DWORD, int, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 /*0x5f18e3*/
                                                                                               + 4))(
            g_ClipboardBuffer,
            v25,
            aP4,
            a6,
            a7,
            a8);
  this->field_40 = eax38; /*0x5f190b*/
  if ( eax38 == -1 ) /*0x5f190e*/
    return 0; /*0x5f1913*/
  Debug::Log(); /*0x5f191e*/
  NullModemClass::closeConnection((_DWORD *)this->field_38, (WinModemClass *)this->field_40); /*0x5f192d*/
  *(_DWORD *)this->__pad_3C = 1; /*0x5f1937*/
  return 1; /*0x5f1910*/
}


// ==== 0x005F1950  NullModemClass::COMStub  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::_vt04(_DWORD *this)
{
  return this->linkOpen; /*0x5f1953*/
}


// ==== 0x005F1960  ObjectClass::FreeResources  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass_FreeResources(int this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  v2 = *(void (__thiscall ****)(_DWORD, int))(this + 56); /*0x5f1966*/
  if ( v2 ) /*0x5f196b*/
  {
    (**v2)(v2, 1); /*0x5f1971*/
    *(_DWORD *)(this + 56) = 0; /*0x5f1973*/
  }
  if ( *(_DWORD *)(this + 80) ) /*0x5f1976*/
  {
    __3_YAXPAX_Z(*(void **)(this + 80)); /*0x5f197e*/
    *(_DWORD *)(this + 80) = 0; /*0x5f1986*/
  }
  if ( *(_DWORD *)(this + 4) ) /*0x5f1989*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5f1991*/
    *(_DWORD *)(this + 4) = 0; /*0x5f1999*/
  }
  if ( *(_DWORD *)(this + 12) ) /*0x5f199c*/
  {
    __3_YAXPAX_Z(*(void **)(this + 12)); /*0x5f19a4*/
    *(_DWORD *)(this + 12) = 0; /*0x5f19ac*/
  }
  *(_DWORD *)(this + 60) = 0; /*0x5f19af*/
  return 1; /*0x5f19b2*/
}


// ==== 0x005F19C0  EventClass::CheckFlag  this=EventClass  sig=csp ====
int __thiscall EventClass::CheckFlag(_DWORD *this)
{
  int v1; // eax

  v1 = this->EventClass_field_0x38; /*0x5f19c0*/
  if ( v1 ) /*0x5f19c5*/
    EventClass::serializeEvent(*(int **)(v1 + 4)); /*0x5f19ca*/
  return 1; /*0x5f19d4*/
}


// ==== 0x005F19E0  Modem::OpenPort  this=Modem  sig=csp ====
int __thiscall Modem::OpenPort(_DWORD *this, Modem *aP1)
{
  int v3; // ebp
  _DWORD *v4; // eax
  int v6; // eax
  int v7; // eax
  Modem *v8; // ebx
  WinModemClass *v9; // esi
  int v10; // eax
  ObjectClass *v11; // edi
  int v12; // eax
  Modem *aP1a; // [esp+18h] [ebp+4h]

  v3 = 0; /*0x5f19e7*/
  if ( g_ClipboardBuffer ) /*0x5f19f5*/
  {
    SerialPort::Close((HANDLE *)g_ClipboardBuffer); /*0x5f1a1e*/
  }
  else
  {
    v4 = (_DWORD *)__2_YAPAXI_Z(0x2088u); /*0x5f19fc*/
    if ( v4 ) /*0x5f1a06*/
      g_ClipboardBuffer = (WinModemClass *)WinModemClass::Construct(v4); /*0x5f1a0f*/
    else
      g_ClipboardBuffer = 0; /*0x5f1a16*/
  }
  aP1a = (Modem *)aP1->Modem_field_0x08; /*0x5f1a2a*/
  v6 = *(_DWORD *)aP1->__pad_0; /*0x5f1a2e*/
  if ( *(int *)aP1->__pad_0 > 760 )
  {
    v12 = v6 - 1000; /*0x5f1b01*/
    if ( v12 ) /*0x5f1b06*/
    {
      if ( v12 != 16 ) /*0x5f1b0b*/
        return 1; /*0x5f1b0b*/
      v8 = (Modem *)&stru_830620.__pad_14B0[2160]; /*0x5f1b1a*/
    }
    else
    {
      v8 = (Modem *)&stru_830620.__pad_14B0[2170]; /*0x5f1b21*/
    }
  }
  else
  {
    if ( *(_DWORD *)aP1->__pad_0 != 760 )
    {
      v7 = v6 - 1; /*0x5f1a41*/
      if ( !v7 )
      {
        v9 = (WinModemClass *)this->q034; /*0x5f1a59*/
        v8 = aP1 + 3; /*0x5f1a5c*/
        if ( v9 ) /*0x5f1a61*/
        {
          FileFind::Close((void **)this->q034); /*0x5f1a65*/
          __3_YAXPAX_Z(v9); /*0x5f1a6b*/
          this->q034 = 0; /*0x5f1a73*/
        }
        while ( 1 )
        {
          v10 = __2_YAPAXI_Z(0x1Cu); /*0x5f1a78*/
          v11 = v10 ? (ObjectClass *)Modem::EnumerateDevices(v10, (WinModemClass *)v3) : 0;
          this->q034 = v11; /*0x5f1a96*/
          if ( *(_DWORD *)v11->__pad_0 ) /*0x5f1a99*/
          {
            if ( !strcmp(v8->__pad_0, *(const char **)v11->__pad_0) ) /*0x5f1aa7*/
              break; /*0x5f1aa7*/
          }
          if ( v11 ) /*0x5f1ad0*/
          {
            FileFind::Close((void **)v11); /*0x5f1ad4*/
            __3_YAXPAX_Z(v11); /*0x5f1ada*/
          }
          ++v3; /*0x5f1ae6*/
          this->q034 = 0; /*0x5f1aea*/
          if ( v3 >= 10 ) /*0x5f1af1*/
            goto LABEL_29; /*0x5f1af1*/
        }
        v8 = *(Modem **)&v11->__pad_0[4]; /*0x5f1af5*/
        goto LABEL_29; /*0x5f1af8*/
      }
      if ( v7 == 743 ) /*0x5f1a49*/
      {
        v8 = (Modem *)&stru_830620.__pad_14B0[2175]; /*0x5f1a4f*/
        goto LABEL_29; /*0x5f1a54*/
      }
      return 1; /*0x5f1b17*/
    }
    v8 = (Modem *)&stru_830620.__pad_14B0[2165]; /*0x5f1afa*/
  }
LABEL_29:
  if ( (*(int (__thiscall **)(WinModemClass *, Modem *, Modem *, _DWORD, int, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 /*0x5f1b40*/
                                                                                  + 4))(
         g_ClipboardBuffer,
         v8,
         aP1a,
         0,
         8,
         1) == -1 )
    return 1; /*0x5f1b45*/
  SerialPort::Close((HANDLE *)g_ClipboardBuffer); /*0x5f1b55*/
  return 0; /*0x5f1b0d*/
}


// ==== 0x005F1B70  ObjectClass::DetachAndFree  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass_DetachAndFree(_DWORD *this)
{
  int result; // eax

  if ( this->q040 != -1 && g_ClipboardBuffer ) /*0x5f1b81*/
  {
    SerialPort::Close(); /*0x5f1b83*/
    if ( g_ClipboardBuffer ) /*0x5f1b90*/
      (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f1b96*/
    g_ClipboardBuffer = 0; /*0x5f1b98*/
    this->q040 = -1; /*0x5f1ba4*/
    return ObjectClass::FreeResources((int)this); /*0x5f1bab*/
  }
  return result; /*0x5f1bb0*/
}


// ==== 0x005F1BC0  NullModemClass::Connect  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::_vt13(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v5; // edx
  int result; // eax

  this->q060 = a3; /*0x5f1bc8*/
  this->q064 = a4; /*0x5f1bcf*/
  v5 = this->linkObject; /*0x5f1bd2*/
  this->q05C = a2; /*0x5f1bd5*/
  *(_DWORD *)(v5 + 40) = a2; /*0x5f1bd8*/
  *(_DWORD *)(this->linkObject + 44) = this->q060; /*0x5f1be1*/
  result = this->linkObject; /*0x5f1be4*/
  *(_DWORD *)(result + 48) = this->q064; /*0x5f1bea*/
  return result; /*0x5f1bed*/
}


// ==== 0x005F1BF0  Stream::WriteBlock  this=Stream  sig=csp ====
int __thiscall Stream::WriteBlock(int this, CellStruct *aP1, int a3, int a4)
{
  int result; // eax

  if ( !*(_DWORD *)(this + 60) ) /*0x5f1bf3*/
    return 0; /*0x5f1bfa*/
  result = (*(int (__thiscall **)(_DWORD, CellStruct *, int, int, _DWORD))(**(_DWORD **)(this + 56) + 8))( /*0x5f1c16*/
             *(_DWORD *)(this + 56),
             aP1,
             a3,
             a4,
             0);
  if ( !result ) /*0x5f1c1b*/
    ++*(_DWORD *)(this + 104); /*0x5f1c1d*/
  return result; /*0x5f1bfc*/
}


// ==== 0x005F1C30  ObjectTypeClass::CreateInstance  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::CreateInstance(int this, CampaignScore *aP1, CampaignScore *aP2)
{
  if ( *(_DWORD *)(this + 60) ) /*0x5f1c30*/
    return (*(int (__thiscall **)(_DWORD, CampaignScore *, CampaignScore *))(**(_DWORD **)(this + 56) + 16))( /*0x5f1c4b*/
             *(_DWORD *)(this + 56),
             aP1,
             aP2);
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
          Debug::Log(MEMORY[0x832400]); /*0x5f1e14*/
          v14 = v4 + 2; /*0x5f1e1f*/
          memcpy(*(void **)(this + 80), (const void *)(*(_DWORD *)(this + 80) + v14), *(_DWORD *)(this + 88) - v14); /*0x5f1e2a*/
          v15 = *(_DWORD *)(this + 56); /*0x5f1e32*/
          *(_DWORD *)(this + 88) -= v14; /*0x5f1e3a*/
          return (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 20))(v15); /*0x5f1e3f*/
        }
      }
      else
      {
        Debug::Log(MEMORY[0x832420], v11 - v10); /*0x5f1d7f*/
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
int __thiscall Queue_GetCount(_DWORD *this)
{
  int v1; // eax

  v1 = this->q038; /*0x5f1ea0*/
  if ( v1 ) /*0x5f1ea5*/
    return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 40); /*0x5f1eaa*/
  else
    return 0; /*0x5f1eae*/
}


// ==== 0x005F1EE0  NullModemClass::GetBridgeIndexThunk  this=NullModemClass  sig=csp ====
int __thiscall CellClass_GetBridgeIndexThunk(_DWORD *this)
{
  int v1; // eax

  v1 = this->linkObject; /*0x5f1ee0*/
  if ( v1 ) /*0x5f1ee5*/
    return CellClass::GetBridgeIndex(*(_DWORD **)(v1 + 4)); /*0x5f1eea*/
  else
    return 0; /*0x5f1eef*/
}


// ==== 0x005F1F00  NullModemClass::Flush  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::_vt11(int *this, int a2)
{
  int result; // eax

  result = this->linkObject; /*0x5f1f00*/
  if ( result ) /*0x5f1f05*/
    return Rect::SetRedraw(*(_DWORD **)(result + 4), 1); /*0x5f1f0c*/
  return result; /*0x5f1f11*/
}


// ==== 0x005F1F20  ObjectClass::method_5F1F20  this=ObjectClass  sig=csp ====
int __thiscall sub_5F1F20(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // ecx
  int TileIndex; // eax

  v2 = 0; /*0x5f1f27*/
  v3 = *(_DWORD **)(this->attachedBomb + 4); /*0x5f1f2c*/
  if ( (int)v3[10] <= 0 ) /*0x5f1f34*/
    return 0; /*0x5f1f5b*/
  while ( 1 ) /*0x5f1f37*/
  {
    TileIndex = Terrain::GetTileIndex(v3, v2); /*0x5f1f37*/
    if ( TileIndex ) /*0x5f1f3e*/
    {
      if ( !*(_BYTE *)(*(_DWORD *)(TileIndex + 20) + 2) && (*(_BYTE *)TileIndex & 2) == 0 ) /*0x5f1f4d*/
        break; /*0x5f1f4d*/
    }
    ++v2; /*0x5f1f52*/
    v3 = *(_DWORD **)(this->attachedBomb + 4); /*0x5f1f53*/
    if ( v2 >= v3[10] ) /*0x5f1f59*/
      return 0; /*0x5f1f59*/
  }
  return *(_DWORD *)(TileIndex + 20); /*0x5f1f5b*/
}


// ==== 0x005F1F70  NullModemClass::SendPacket  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::_vt15(int *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int result; // eax

  result = this->linkObject; /*0x5f1f70*/
  if ( result ) /*0x5f1f75*/
    return EventClass::SetData(*(_DWORD **)(result + 4), a3, a4, a5, a6, a7); /*0x5f1f93*/
  return result; /*0x5f1f98*/
}


// ==== 0x005F1FA0  NullModemClass::DetectModem  this=NullModemClass  sig=csp ====
char __thiscall NullModemClass::DetectModem(_DWORD *this, _DWORD *a2, int a3)
{
  wchar_t *StringCSF; // eax
  HWND MessageBox; // eax
  ObjectClass *v6; // edi
  int v7; // ebp
  ObjectClass *v11; // ecx
  _DWORD *v10; // esi
  CCINIClass *v14; // esi
  wchar_t *v12; // eax
  int v13; // edx
  wchar_t *eax24; // eax
  int v15; // eax
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  int v18; // eax
  LONG v19; // eax
  int v20; // esi
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  wchar_t *v23; // [esp+BCh] [ebp-220h]
  wchar_t *v24; // [esp+BCh] [ebp-220h]
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
  ObjectClass *v42; // [esp+E4h] [ebp-1F8h]
  int v43; // [esp+E8h] [ebp-1F4h]
  _BYTE v44[240]; // [esp+ECh] [ebp-1F0h] BYREF
  char v45[256]; // [esp+1DCh] [ebp-100h] BYREF

  v43 = 0; /*0x5f1fb1*/
  Debug::Log(); /*0x5f1fb9*/
  if ( !NullModemClass::sendData((int)g_ClipboardBuffer) ) /*0x5f1fce*/
    return 0; /*0x5f1fce*/
  StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[3144], 0, &stru_830620.__pad_14B0[3168], 1134); /*0x5f1fe7*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5f1ff0*/
  v6 = (ObjectClass *)MessageBox; /*0x5f1ff5*/
  v42 = (ObjectClass *)MessageBox; /*0x5f1ff9*/
  if ( !MessageBox ) /*0x5f1ffd*/
  {
LABEL_7:
    NullModemClass::receiveData((int)g_ClipboardBuffer); /*0x5f2118*/
    return 0; /*0x5f212f*/
  }
  Dialog::Show(MessageBox); /*0x5f2005*/
  Debug::Log(); /*0x5f200f*/
  (*(void (__thiscall **)(WinModemClass *, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 /*0x5f2033*/
                                                                                    + 28))(
    g_ClipboardBuffer,
    &stru_830620.__pad_14B0[3108],
    13,
    v44,
    81,
    90,
    2,
    -1);
  Debug::Log(); /*0x5f2046*/
  Debug::Log(); /*0x5f2050*/
  (*(void (__thiscall **)(WinModemClass *, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 /*0x5f2074*/
                                                                                    + 28))(
    g_ClipboardBuffer,
    &stru_830620.__pad_14B0[3036],
    13,
    v44,
    81,
    90,
    2,
    -1);
  Debug::Log(); /*0x5f2087*/
  Debug::Log(); /*0x5f2091*/
  (*(void (__thiscall **)(WinModemClass *, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 /*0x5f20b5*/
                                                                                    + 28))(
    g_ClipboardBuffer,
    &stru_830620.__pad_14B0[2988],
    13,
    v44,
    81,
    90,
    2,
    -1);
  Debug::Log(); /*0x5f20c8*/
  this->q01C = 1; /*0x5f20d5*/
  this->__pad_020 = 1; /*0x5f20d8*/
  v7 = (*(int (__thiscall **)(WinModemClass *, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 /*0x5f20fd*/
                                                                                        + 28))(
         g_ClipboardBuffer,
         &stru_830620.__pad_14B0[2984],
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
    v11 = v6; /*0x5f2111*/
LABEL_6:
    Dialog::Destroy((SkirmishDialog *)v11); /*0x5f2113*/
    goto LABEL_7; /*0x5f2113*/
  }
  v10 = a2; /*0x5f2132*/
  if ( a2[4] == -1 ) /*0x5f213d*/
  {
    v7 = (*(int (__thiscall **)(WinModemClass *, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 /*0x5f2161*/
                                                                                          + 28))(
           g_ClipboardBuffer,
           &stru_87C374.__pad_579C[33876],
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
    Block = (char *)__2_YAPAXI_Z(strlen(*(const char **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18588] + 4 * a2[4])) + 2); /*0x5f219f*/
    strcpy(Block, *(const char **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18588] + 4 * a2[4])); /*0x5f21ba*/
    v14 = (CCINIClass *)strtok(Block, (ObjectClass *)&stru_830620.__pad_14B0[2912]); /*0x5f21c8*/
    if ( v14 ) /*0x5f21cf*/
    {
      while ( 1 ) /*0x5f21db*/
      {
        Debug::Log(); /*0x5f21db*/
        v7 = (*(int (__thiscall **)(WinModemClass *, CCINIClass *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 + 28))( /*0x5f21fe*/
               g_ClipboardBuffer,
               v14,
               13,
               v44,
               81,
               90,
               1,
               -1);
        Debug::Log(); /*0x5f2211*/
        if ( v7 < 2 ) /*0x5f221c*/
          break; /*0x5f221c*/
        v14 = (CCINIClass *)strtok(0, (ObjectClass *)&stru_830620.__pad_14B0[2912]); /*0x5f222a*/
        if ( !v14 ) /*0x5f2231*/
          goto LABEL_18; /*0x5f2231*/
      }
      v33 = GetStringCSF(g_Str_TXT_CANCEL, 0, &stru_830620.__pad_14B0[3168], 1215); /*0x5f2257*/
      v25 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[2888], 0, &stru_830620.__pad_14B0[3168], 1215); /*0x5f226e*/
      v12 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[2868], 0, &stru_830620.__pad_14B0[3168], 1215); /*0x5f2280*/
      if ( Dialog::ShowMessageBox((int)v12, v25, (Movie *)v33, 0, 0, v40) ) /*0x5f228a*/
      {
        __3_YAXPAX_Z(Block); /*0x5f2298*/
        v11 = v42; /*0x5f229d*/
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
    v13 = this->q034; /*0x5f22d2*/
    if ( v13 ) /*0x5f22d7*/
    {
      strcpy(v45, "AT"); /*0x5f22e9*/
      memset(&v45[3], 0, 253); /*0x5f2306*/
      if ( *(_DWORD *)(v13 + 24) ) /*0x5f2309*/
      {
        Debug::Log(); /*0x5f2319*/
        strcpy(&v45[2], *(const char **)(this->q034 + 24)); /*0x5f2346*/
        v7 = (*(int (__thiscall **)(WinModemClass *, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 /*0x5f236d*/
                                                                                              + 28))(
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
          v34 = GetStringCSF(g_Str_TXT_CANCEL, 0, &stru_830620.__pad_14B0[3168], 1247); /*0x5f23b4*/
          v26 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[2888], 0, &stru_830620.__pad_14B0[3168], 1247); /*0x5f23cb*/
          eax24 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[2808], 0, &stru_830620.__pad_14B0[3168], 1247); /*0x5f23dd*/
          if ( Dialog::ShowMessageBox((int)eax24, v26, (Movie *)v34, 0, 0, v40) ) /*0x5f23e7*/
            goto LABEL_47; /*0x5f23ee*/
        }
        v10 = a2; /*0x5f23f4*/
      }
      v15 = this->q034; /*0x5f2400*/
      if ( v10[6] ) /*0x5f23fb*/
      {
        if ( !*(_DWORD *)(v15 + 16) ) /*0x5f240e*/
          goto LABEL_37; /*0x5f240e*/
        Debug::Log(); /*0x5f2419*/
        strcpy(&v45[2], *(const char **)(this->q034 + 16)); /*0x5f2446*/
        (*(void (__thiscall **)(WinModemClass *, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 /*0x5f246a*/
                                                                                          + 28))(
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
          v35 = GetStringCSF(g_Str_TXT_CANCEL, 0, &stru_830620.__pad_14B0[3168], 1266); /*0x5f24ba*/
          v27 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[2888], 0, &stru_830620.__pad_14B0[3168], 1266); /*0x5f24d1*/
          v16 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[2740], 0, &stru_830620.__pad_14B0[3168], 1266); /*0x5f24e3*/
          if ( Dialog::ShowMessageBox((int)v16, v27, (Movie *)v35, 0, 0, v40) ) /*0x5f24ed*/
          {
            v11 = v42; /*0x5f24fa*/
            goto LABEL_6; /*0x5f24fe*/
          }
        }
      }
      else
      {
        if ( !*(_DWORD *)(v15 + 20) ) /*0x5f2508*/
          goto LABEL_37; /*0x5f2508*/
        Debug::Log(); /*0x5f2513*/
        strcpy(&v45[2], *(const char **)(this->q034 + 20)); /*0x5f2540*/
        (*(void (__thiscall **)(WinModemClass *, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 /*0x5f2564*/
                                                                                          + 28))(
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
          v36 = GetStringCSF(g_Str_TXT_CANCEL, 0, &stru_830620.__pad_14B0[3168], 1281); /*0x5f25ac*/
          v28 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[2888], 0, &stru_830620.__pad_14B0[3168], 1281); /*0x5f25c3*/
          v17 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[2668], 0, &stru_830620.__pad_14B0[3168], 1281); /*0x5f25d5*/
          if ( Dialog::ShowMessageBox((int)v17, v28, (Movie *)v36, 0, 0, v40) ) /*0x5f25df*/
            goto LABEL_47; /*0x5f25e6*/
        }
      }
      v10 = a2; /*0x5f25ec*/
LABEL_37:
      v18 = this->q034; /*0x5f25f3*/
      if ( v10[7] ) /*0x5f25f3*/
      {
        if ( *(_DWORD *)(v18 + 8) ) /*0x5f2601*/
        {
          Debug::Log(); /*0x5f2611*/
          strcpy(&v45[2], *(const char **)(this->q034 + 8)); /*0x5f263e*/
          (*(void (__thiscall **)(WinModemClass *, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 /*0x5f2662*/
                                                                                            + 28))(
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
            v37 = GetStringCSF(g_Str_TXT_CANCEL, 0, &stru_830620.__pad_14B0[3168], 1301); /*0x5f26b2*/
            v29 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[2888], 0, &stru_830620.__pad_14B0[3168], 1301); /*0x5f26c9*/
            v23 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[2600], 0, &stru_830620.__pad_14B0[3168], 1301); /*0x5f26e0*/
            v19 = Dialog::ShowMessageBox((int)v23, v29, (Movie *)v37, 0, 0, v40); /*0x5f26e5*/
            goto LABEL_46; /*0x5f26e5*/
          }
        }
      }
      else if ( *(_DWORD *)(v18 + 12) ) /*0x5f26ea*/
      {
        Debug::Log(); /*0x5f26fa*/
        strcpy(&v45[2], *(const char **)(this->q034 + 12)); /*0x5f2727*/
        (*(void (__thiscall **)(WinModemClass *, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 /*0x5f274b*/
                                                                                          + 28))(
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
          v38 = GetStringCSF(g_Str_TXT_CANCEL, 0, &stru_830620.__pad_14B0[3168], 1316); /*0x5f2793*/
          v30 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[2888], 0, &stru_830620.__pad_14B0[3168], 1316); /*0x5f27aa*/
          v24 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[2532], 0, &stru_830620.__pad_14B0[3168], 1316); /*0x5f27c1*/
          v19 = Dialog::ShowMessageBox((int)v24, v30, (Movie *)v38, 0, 0, v40); /*0x5f27c6*/
LABEL_46:
          if ( v19 ) /*0x5f27cd*/
          {
LABEL_47:
            v11 = v42; /*0x5f27cf*/
            goto LABEL_6; /*0x5f27d3*/
          }
        }
      }
      v6 = v42; /*0x5f27d8*/
    }
  }
  Debug::Log(); /*0x5f27dc*/
  v20 = (*(int (__thiscall **)(WinModemClass *, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 /*0x5f2808*/
                                                                                         + 28))(
          g_ClipboardBuffer,
          &stru_830620.__pad_14B0[2492],
          13,
          v44,
          81,
          90,
          2,
          -1);
  Debug::Log(); /*0x5f281a*/
  if ( v20 != 2 ) /*0x5f2825*/
  {
    v39 = GetStringCSF(g_Str_TXT_CANCEL, 0, &stru_830620.__pad_14B0[3168], 1334); /*0x5f2849*/
    v31 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[2888], 0, &stru_830620.__pad_14B0[3168], 1334); /*0x5f2860*/
    v21 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[2468], 0, &stru_830620.__pad_14B0[3168], 1334); /*0x5f2872*/
    if ( Dialog::ShowMessageBox((int)v21, v31, (Movie *)v39, 0, 0, v40) ) /*0x5f287c*/
      goto LABEL_5; /*0x5f2883*/
    ++v43; /*0x5f2889*/
  }
  if ( v43 >= 3 ) /*0x5f2892*/
  {
    v32 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[3168], 1347); /*0x5f28b8*/
    v22 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[2448], 0, &stru_830620.__pad_14B0[3168], 1347); /*0x5f28ca*/
    Dialog::ShowMessageBox((int)v22, v32, 0, 0, 0, v40); /*0x5f28d4*/
    goto LABEL_5; /*0x5f28d9*/
  }
  Dialog::Destroy((SkirmishDialog *)v6); /*0x5f28e0*/
  Debug::Log(); /*0x5f28ea*/
  NullModemClass::receiveData((int)g_ClipboardBuffer); /*0x5f28f8*/
  if ( (*(int (__thiscall **)(WinModemClass *, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 /*0x5f291f*/
                                                                                        + 28))(
         g_ClipboardBuffer,
         &stru_830620.__pad_14B0[2984],
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
int __thiscall Dialog::RunModemDialing(int *this, int a2, int a3, char a4)
{
  char v5; // bl
  int v6; // esi
  #72 *StringCSF; // eax
  #72 *v8; // ebp
  #72 *v9; // eax
  int MessageBox; // eax
  int v11; // ebp
  int v12; // ecx
  __int16 Buffer; // [esp+2Ch] [ebp-F8h] BYREF
  char v15; // [esp+2Eh] [ebp-F6h]
  int hWnd; // [esp+30h] [ebp-F4h]
  char Source[240]; // [esp+34h] [ebp-F0h] BYREF

  v5 = 1; /*0x5f2961*/
  v6 = 3; /*0x5f2963*/
  Debug::Log(); /*0x5f2968*/
  if ( a4 == 1 ) /*0x5f2979*/
    StringCSF = GetStringCSF((#72 *)aTxtModemConner, 0, g_Str_File_NullMgr_CPP, 1409); /*0x5f298c*/
  else
    StringCSF = GetStringCSF((#72 *)aTxtDialing, 0, g_Str_File_NullMgr_CPP, 1411); /*0x5f299f*/
  v8 = StringCSF; /*0x5f29ba*/
  LOBYTE(dword_A8ED54[51580]) = 0; /*0x5f29bc*/
  v9 = GetStringCSF((#72 *)g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1415); /*0x5f29c3*/
  MessageBox = CreateMessageBox(v8, v9, &dword_A8ED54[51580]); /*0x5f29cc*/
  hWnd = MessageBox; /*0x5f29d3*/
  if ( !MessageBox ) /*0x5f29d7*/
    return v6; /*0x5f29d7*/
  Dialog::Show(MessageBox); /*0x5f29df*/
  Debug::Log(); /*0x5f29e9*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_A8ED54[233459] + 8))(dword_A8ED54[233459], a3); /*0x5f2a01*/
  Debug::Log(); /*0x5f2a09*/
  (*(void (__thiscall **)(int, int, char *, int, int))(*(_DWORD *)dword_A8ED54[233459] + 20))( /*0x5f2a24*/
    dword_A8ED54[233459],
    60,
    Source,
    81,
    -1);
  Debug::Log(); /*0x5f2a2c*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_A8ED54[233459] + 24))(dword_A8ED54[233459], a2); /*0x5f2a44*/
  (*(void (__thiscall **)(int, int (*)()))(*(_DWORD *)dword_A8ED54[233459] + 36))(dword_A8ED54[233459], PumpEventLoop); /*0x5f2a54*/
  LOBYTE(dword_A8ED54[51580]) = 0; /*0x5f2a57*/
  v11 = this->q009; /*0x5f2a5e*/
  Debug::Log(); /*0x5f2a66*/
  while ( 1 ) /*0x5f2a6e*/
  {
    if ( Dialog::PumpMessages() == 1 || LOBYTE(dword_A8ED54[51580]) ) /*0x5f2a82*/
    {
      v6 = 6; /*0x5f2c78*/
      if ( dword_A8ED54[233459] ) /*0x5f2c7f*/
      {
LABEL_34:
        v15 = 0; /*0x5f2c81*/
        Buffer = word_8327A0; /*0x5f2c8d*/
        WinModemClass::WriteSerial(&Buffer, 2); /*0x5f2c99*/
      }
LABEL_35:
      Debug::Log(); /*0x5f2c9e*/
      goto LABEL_36; /*0x5f2ca3*/
    }
    LOBYTE(v12) = 0; /*0x5f2a88*/
    ScreenSaver::Process(v12); /*0x5f2a8a*/
    memset(Source, 0, sizeof(Source)); /*0x5f2a9c*/
    v11 = (*(int (__thiscall **)(int, int, char *, int, int))(*(_DWORD *)dword_A8ED54[233459] + 20))( /*0x5f2ab1*/
            dword_A8ED54[233459],
            v11,
            Source,
            81,
            15);
    if ( v11 == -1000 ) /*0x5f2ab9*/
    {
      v6 = 6; /*0x5f2bec*/
      if ( dword_A8ED54[233459] ) /*0x5f2bf3*/
        goto LABEL_34; /*0x5f2bf3*/
      goto LABEL_35; /*0x5f2bf3*/
    }
    _strupr(Source); /*0x5f2ac4*/
    if ( strlen(Source) ) /*0x5f2acd*/
      Debug::Log(); /*0x5f2ae6*/
    if ( strstr(Source, off_8327D8) ) /*0x5f2af8*/
    {
      memset(&dword_A8ED54[51533], 0, 0x50u); /*0x5f2b12*/
      strncpy((char *)&dword_A8ED54[51533], Source, 79); /*0x5f2b1e*/
      v6 = 0; /*0x5f2b27*/
      Debug::Log(); /*0x5f2b2f*/
    }
    else
    {
      if ( !strncmp(Source, aBusy, 4) ) /*0x5f2b48*/
      {
        v6 = 2; /*0x5f2b54*/
      }
      else if ( !strncmp(Source, aNoC, 4) ) /*0x5f2b67*/
      {
        v6 = 1; /*0x5f2b77*/
      }
      else if ( !strncmp(Source, aNoD, 4) ) /*0x5f2b8b*/
      {
        v6 = 4; /*0x5f2b9b*/
      }
      else
      {
        if ( strncmp(Source, aErro, 4) ) /*0x5f2baf*/
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
  if ( dword_A8ED54[233459] ) /*0x5f2c4c*/
  {
    Buffer = word_8327A0; /*0x5f2c5c*/
    v15 = 0; /*0x5f2c61*/
    WinModemClass::WriteSerial(&Buffer, 2); /*0x5f2c66*/
  }
  v6 = 5; /*0x5f2c6b*/
LABEL_36:
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_A8ED54[233459] + 36))(dword_A8ED54[233459], 0); /*0x5f2cab*/
  LOBYTE(dword_A8ED54[51580]) = 0; /*0x5f2cbc*/
  Dialog::Destroy(hWnd); /*0x5f2cc3*/
  return v6; /*0x5f2cca*/
}


// ==== 0x005F2CE0  ObjectClass::WaitModemConnection  this=ObjectClass  sig=csp ====
int __userpurge WaitModemConnection@<eax>(int a1@<ecx>, int a2@<edi>, char a3)
{
  int v3; // ebp
  wchar_t *StringCSF; // eax
  ObjectClass *v5; // esi
  char v6; // bl
  wchar_t *v7; // eax
  HWND MessageBox; // eax
  int v9; // esi
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  WinModemClass *v14; // ecx
  wchar_t *v15; // [esp-Ah] [ebp-11Ch]
  wchar_t *v16; // [esp-Ah] [ebp-11Ch]
  int v17; // [esp+6h] [ebp-10Ch]
  char v18; // [esp+19h] [ebp-F9h]
  VectorClass *Buffer; // [esp+1Ah] [ebp-F8h] BYREF
  HWND v20; // [esp+1Eh] [ebp-F4h]
  HWND hWnd; // [esp+22h] [ebp-F0h]
  _BYTE Source[236]; // [esp+26h] [ebp-ECh] BYREF

  v18 = HIBYTE(a1); /*0x5f2cf2*/
  v3 = 3; /*0x5f2cfb*/
  if ( a3 == 1 ) /*0x5f2d00*/
    StringCSF = GetStringCSF( /*0x5f2d13*/
                  (wchar_t *)&stru_830620.__pad_14B0[3868],
                  0,
                  (CampaignScore *)&stru_830620.__pad_14B0[3168],
                  1580);
  else
    StringCSF = GetStringCSF( /*0x5f2d26*/
                  (wchar_t *)&stru_830620.__pad_14B0[3844],
                  0,
                  (CampaignScore *)&stru_830620.__pad_14B0[3168],
                  1582);
  v5 = (ObjectClass *)StringCSF; /*0x5f2d30*/
  Debug::Log(); /*0x5f2d32*/
  v6 = 1; /*0x5f2d41*/
  *((_BYTE *)&g_MatrixTransformState + 9524) = 0; /*0x5f2d52*/
  v7 = GetStringCSF(g_Str_TXT_CANCEL, 0, (CampaignScore *)&stru_830620.__pad_14B0[3168], 1589); /*0x5f2d59*/
  MessageBox = CreateMessageBox((LPARAM)v5, (LPARAM)v7, (LONG)(&g_MatrixTransformState + 2381)); /*0x5f2d62*/
  v20 = MessageBox; /*0x5f2d69*/
  if ( !MessageBox ) /*0x5f2d6d*/
    return 3; /*0x5f3155*/
  Dialog::Show(MessageBox); /*0x5f2d76*/
  (*(void (__thiscall **)(WinModemClass *, int (*)(), int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 + 36))( /*0x5f2d88*/
    g_ClipboardBuffer,
    PumpEventLoop,
    a2);
  *((_BYTE *)&g_MatrixTransformState + 9524) = 0; /*0x5f2d8b*/
  v9 = 3600; /*0x5f2d92*/
  while ( 1 )
  {
    if ( Dialog::PumpMessages() == 1 || *((_BYTE *)&g_MatrixTransformState + 9524) ) /*0x5f2dab*/
    {
      v3 = 6; /*0x5f30f5*/
      Debug::Log(); /*0x5f30fa*/
      v14 = g_ClipboardBuffer; /*0x5f30ff*/
      if ( !g_ClipboardBuffer ) /*0x5f310a*/
        goto LABEL_36; /*0x5f310a*/
      goto LABEL_35; /*0x5f310a*/
    }
    ScreenSaver::Process(0, v6, v3); /*0x5f2db3*/
    memset(Source, 0, 0xF0u); /*0x5f2dc3*/
    v9 = (*(int (__thiscall **)(WinModemClass *, int, _BYTE *, int, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 + 20))(
           g_ClipboardBuffer,
           v9,
           Source,
           81,
           v18 != 0 ? 15 : -1);
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
      LOWORD(Buffer) = *(_WORD *)&stru_830620.__pad_14B0[3280]; /*0x5f3118*/
      WinModemClass::WriteSerial((int)v14, &Buffer, (WinModemClass *)2); /*0x5f3124*/
      goto LABEL_36; /*0x5f3124*/
    }
    _strupr(Source); /*0x5f2e06*/
    if ( strlen(Source) ) /*0x5f2e0f*/
      Debug::Log(); /*0x5f2e28*/
    if ( !strncmp((AnimClass *)Source, &stru_830620.__pad_14B0[3744], 4u) ) /*0x5f2e3c*/
    {
      Debug::Log(); /*0x5f2e4d*/
      v10 = GetStringCSF( /*0x5f2e66*/
              (wchar_t *)&stru_830620.__pad_14B0[3720],
              0,
              (CampaignScore *)&stru_830620.__pad_14B0[3168],
              1647);
      Network_Start(hWnd, (LPARAM)v10); /*0x5f2e71*/
      Debug::Log(); /*0x5f2e7b*/
      WinModemClass::WriteSerial( /*0x5f2e9e*/
        (int)g_ClipboardBuffer,
        &stru_830620.__pad_14B0[3692],
        (WinModemClass *)strlen(&stru_830620.__pad_14B0[3692]));
      v18 = 1; /*0x5f2ea7*/
      v9 = (int)Buffer[2].Items; /*0x5f2eac*/
      goto LABEL_22; /*0x5f2eaf*/
    }
    if ( strstr((ObjectClass *)Source, &stru_830620.__pad_14B0[3684]) ) /*0x5f2ebe*/
    {
      memset(&g_MatrixTransformState + 2334, 0, 0x50u); /*0x5f2ed8*/
      strncpy((char *)&g_MatrixTransformState + 9336, Source, (IUnknown *)0x4F); /*0x5f2ee4*/
      v3 = 0; /*0x5f2eed*/
      Debug::Log(); /*0x5f2ef5*/
    }
    else if ( !strncmp((AnimClass *)Source, &stru_830620.__pad_14B0[3308], 4u) ) /*0x5f2f0e*/
    {
      v3 = 2; /*0x5f2f1e*/
      Debug::Log(); /*0x5f2f29*/
    }
    else if ( !strncmp((AnimClass *)Source, &stru_830620.__pad_14B0[3300], 4u) ) /*0x5f2f42*/
    {
      v3 = 1; /*0x5f2f52*/
      Debug::Log(); /*0x5f2f5d*/
    }
    else
    {
      if ( strncmp((AnimClass *)Source, &stru_830620.__pad_14B0[3284], 4u) ) /*0x5f2f73*/
        goto LABEL_22; /*0x5f2f7d*/
      v3 = 3; /*0x5f2f83*/
      Debug::Log(); /*0x5f2f8e*/
      v20 = (HWND)&stru_82083C; /*0x5f2f9d*/
      v15 = GetStringCSF(g_Str_TXT_OK, 0, (CampaignScore *)&stru_830620.__pad_14B0[3168], 1671); /*0x5f2fba*/
      v11 = GetStringCSF( /*0x5f2fcc*/
              (wchar_t *)&stru_830620.__pad_14B0[3652],
              0,
              (CampaignScore *)&stru_830620.__pad_14B0[3168],
              1671);
      Dialog::ShowMessageBox((int)v11, v15, 0, 0, 0, v17); /*0x5f2fd6*/
    }
    v6 = 0; /*0x5f2fdb*/
LABEL_22:
    if ( v9 <= 0 ) /*0x5f2fdf*/
      break; /*0x5f2fdf*/
LABEL_25:
    if ( v6 != 1 ) /*0x5f2ff1*/
      goto LABEL_36; /*0x5f2ff1*/
  }
  if ( !v18 ) /*0x5f2fe7*/
  {
    v9 = 3600; /*0x5f2fe9*/
    goto LABEL_25; /*0x5f2fe9*/
  }
  if ( (*(char (__thiscall **)(WinModemClass *))(*(_DWORD *)g_ClipboardBuffer->__pad_0 + 12))(g_ClipboardBuffer) >= 0 ) /*0x5f3009*/
  {
    Debug::Log(); /*0x5f3038*/
    if ( strlen(Source) ) /*0x5f3041*/
      Debug::Log(); /*0x5f305a*/
    v20 = (HWND)&stru_82083C; /*0x5f3079*/
    v16 = GetStringCSF(g_Str_TXT_OK, 0, (CampaignScore *)&stru_830620.__pad_14B0[3168], 1687); /*0x5f3086*/
    v12 = GetStringCSF( /*0x5f3098*/
            (wchar_t *)&stru_830620.__pad_14B0[1156],
            0,
            (CampaignScore *)&stru_830620.__pad_14B0[3168],
            1687);
    Dialog::ShowMessageBox((int)v12, v16, 0, 0, 0, v17); /*0x5f30a2*/
    Debug::Log(); /*0x5f30ac*/
    v3 = 5; /*0x5f30b4*/
  }
  else
  {
    sprintf( /*0x5f301a*/
      (char *const)&g_MatrixTransformState + 9336,
      (ObjectClass *)&stru_830620.__pad_14B0[3636],
      (INIClass *)&stru_830620.__pad_14B0[3640]);
    v3 = 0; /*0x5f3024*/
    Debug::Log(); /*0x5f3026*/
  }
LABEL_36:
  (*(void (__thiscall **)(WinModemClass *, _DWORD))(*(_DWORD *)g_ClipboardBuffer->__pad_0 + 36))(g_ClipboardBuffer, 0); /*0x5f3129*/
  *((_BYTE *)&g_MatrixTransformState + 9524) = 0; /*0x5f313a*/
  Dialog::Destroy((SkirmishDialog *)v20); /*0x5f3141*/
  return v3; /*0x5f3149*/
}


// ==== 0x005F3170  NullModemClass::Negotiate  this=NullModemClass  sig=csp ====
char __thiscall NullModemClass_Negotiate(int this)
{
  int v3; // eax
  int i; // eax
  int v5; // esi
  bool v6; // zf
  _BYTE Buffer[4]; // [esp+78h] [ebp-58h] BYREF
  char Str1[84]; // [esp+7Ch] [ebp-54h] BYREF

  if ( *(_DWORD *)(this + 64) == -1 || !g_ClipboardBuffer ) /*0x5f3189*/
    return 0; /*0x5f3189*/
  MEMORY[0xA8DAB8] &= ~1u; /*0x5f319e*/
  if ( (*(int (__thiscall **)(HWND, char *, int, char *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f31be*/
         g_ClipboardBuffer,
         MEMORY[0x832678],
         13,
         Str1,
         81,
         90,
         1,
         -1) == 2 )
  {
    MEMORY[0xA8DAB8] |= 1u; /*0x5f31c8*/
    return 1; /*0x5f31d3*/
  }
  (*(void (__thiscall **)(HWND, _DWORD))(*(_DWORD *)g_ClipboardBuffer + 16))(g_ClipboardBuffer, 0); /*0x5f31de*/
  sub_4A50A0(53); /*0x5f31e6*/
  (*(void (__thiscall **)(HWND, int))(*(_DWORD *)g_ClipboardBuffer + 16))(g_ClipboardBuffer, 1); /*0x5f31f4*/
  if ( (*(int (__thiscall **)(HWND, char *, int, char *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f3218*/
         g_ClipboardBuffer,
         MEMORY[0x832678],
         13,
         Str1,
         81,
         90,
         1,
         -1) == 2 )
  {
    v3 = MEMORY[0xA8DAB8]; /*0x5f321a*/
LABEL_7:
    MEMORY[0xA8DAB8] = v3 | 1; /*0x5f321f*/
    return 1; /*0x5f322d*/
  }
  for ( i = *(_DWORD *)(this + 44); /*0x5f3234*/
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
  Buffer[0] = *(_BYTE *)(this + 48); /*0x5f3258*/
  Buffer[1] = Buffer[0]; /*0x5f325c*/
  Buffer[2] = Buffer[0]; /*0x5f3260*/
  Buffer[3] = 0; /*0x5f326b*/
  WinModemClass::WriteSerial(Buffer, 3u); /*0x5f3270*/
  v5 = *(_DWORD *)(this + 44); /*0x5f3275*/
  if ( v5 > 0 ) /*0x5f327a*/
  {
    do /*0x5f32ad*/
      v5 = (*(int (__thiscall **)(HWND, int, char *, int, int))(*(_DWORD *)g_ClipboardBuffer + 20))( /*0x5f329d*/
             g_ClipboardBuffer,
             v5,
             Str1,
             81,
             -1);
    while ( strncmp(Str1, MEMORY[0x81FD14], 2u) && v5 > 0 ); /*0x5f32ad*/
  }
  if ( (*(int (__thiscall **)(HWND, _UNKNOWN **, int, char *, int, _DWORD, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f32d3*/
         g_ClipboardBuffer,
         &MEMORY[0x832A0C],
         13,
         Str1,
         81,
         *(_DWORD *)(this + 40),
         1,
         -1) != 2 )
  {
    MEMORY[0xA8DAB8] |= 1u; /*0x5f3310*/
    return 0; /*0x5f3317*/
  }
  v6 = (*(int (__thiscall **)(HWND, _UNKNOWN **, int, char *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f32f3*/
         g_ClipboardBuffer,
         &MEMORY[0x832A08],
         13,
         Str1,
         81,
         60,
         1,
         -1) == 2;
  v3 = MEMORY[0xA8DAB8]; /*0x5f32f6*/
  if ( v6 ) /*0x5f32fb*/
    goto LABEL_7; /*0x5f32fb*/
  MEMORY[0xA8DAB8] |= 1u; /*0x5f3304*/
  return 0; /*0x5f31c5*/
}


// ==== 0x005F3320  AppState::CallMethod  this=AppState  sig=csp ====
int __stdcall AppState_CallMethod(int a1)
{
  return (*(int (__thiscall **)(HWND, int))(*(_DWORD *)g_ClipboardBuffer + 32))(g_ClipboardBuffer, a1); /*0x5f3330*/
}


// ==== 0x005F3340  ObjectClass::nullsub_28  this=ObjectClass  sig=csp ====
void nullsub_28()
{
  ; /*0x5f3340*/
}


// ==== 0x005F3350  String::NormalizeNewlines  this=String  sig=ida-proto ====
int String_NormalizeNewlines()
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


// ==== 0x005F33A0  StringBuffer::Reset  this=StringBuffer  sig=csp ====
_BYTE *__thiscall StringBuffer_Reset(_DWORD *this)
{
  _BYTE *result; // eax

  result = (_BYTE *)this->q00C; /*0x5f33a0*/
  *result = 0; /*0x5f33a3*/
  this->q014 = 0; /*0x5f33a6*/
  return result; /*0x5f33ad*/
}


// ==== 0x005F33B0  PumpEventLoop  this=-  sig=ida-proto ====
int sub_5F33B0()
{
  unsigned __int16 v0; // ax
  int v1; // esi

  Event::Dispatch(); /*0x5f33b1*/
  MessageLoop(); /*0x5f33b6*/
  v0 = EventQueue::Process(MEMORY[0x87F770]); /*0x5f33c1*/
  v1 = v0; /*0x5f33c9*/
  if ( !v0 )
    return MEMORY[0xAC1344] != 0 ? 0xFFFFFC18 : 0;
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x5f33d7*/
  if ( v1 != 27 )
    return MEMORY[0xAC1344] != 0 ? 0xFFFFFC18 : 0;
  MEMORY[0xAC1344] = 1; /*0x5f33e1*/
  return -1000; /*0x5f33ed*/
}


// ==== 0x005F3440  EventClass::GetState  this=EventClass  sig=csp ====
int __stdcall EventClass::GetState(int a1)
{
  return 0; /*0x5f3442*/
}


// ==== 0x005F3450  Dialog::CheckButtonState  this=Dialog  sig=csp ====
unsigned int Dialog_CheckButtonState()
{
  int v0; // esi
  _BYTE v2[84]; // [esp+4h] [ebp-54h] BYREF

  v0 = (*(int (__thiscall **)(HWND))(*(_DWORD *)g_ClipboardBuffer + 12))(g_ClipboardBuffer); /*0x5f3467*/
  if ( (*(int (__thiscall **)(HWND, char *, int, _BYTE *, int, int, int, int))(*(_DWORD *)g_ClipboardBuffer + 28))( /*0x5f3483*/
         g_ClipboardBuffer,
         MEMORY[0x832678],
         13,
         v2,
         81,
         90,
         1,
         -1) == 2 )
    return v0 & 0xFFFFFF7F; /*0x5f3485*/
  return v0; /*0x5f348d*/
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
int __stdcall NullModemClass::_vt05(int a1)
{
  return 0; /*0x5f3522*/
}


// ==== 0x005F3530  NullModemClass::Send  this=NullModemClass  sig=csp ====
int __stdcall NullModemClass::_vt06(int a1)
{
  return 0; /*0x5f3532*/
}


// ==== 0x005F3540  NullModemClass::Disconnect  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::_vt14(void *this, int a2, int a3, int a4)
{
  return (*(int (__thiscall **)(void *, int, int, int, int))(this->q034)(this, a2, a3, a4, 1); /*0x5f3556*/
}


// ==== 0x005F3560  NullModemClass::Release  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::_vt02(int this, int a2, int a3, int a4, int a5)
{
  int result; // eax

  if ( !*(_DWORD *)(this + 60) ) /*0x5f3563*/
    return 0; /*0x5f356a*/
  result = (*(int (__thiscall **)(_DWORD, int, int, int, _DWORD))(**(_DWORD **)(this + 56) + 8))( /*0x5f3586*/
             *(_DWORD *)(this + 56),
             a2,
             a3,
             a4,
             0);
  if ( !result ) /*0x5f358b*/
    ++*(_DWORD *)(this + 104); /*0x5f358d*/
  return result; /*0x5f356c*/
}


// ==== 0x005F35A0  NullModemClass::ddtor  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::_vt03(int this, int a2, int a3, int a4)
{
  if ( *(_DWORD *)(this + 60) ) /*0x5f35a0*/
    return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 56) + 16))(*(_DWORD *)(this + 56), a2, a3); /*0x5f35bb*/
  else
    return 0; /*0x5f35a7*/
}


// ==== 0x005F35D0  NullModemClass::Receive  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::_vt07(_DWORD *this)
{
  int v1; // eax

  v1 = this->linkObject; /*0x5f35d0*/
  if ( v1 ) /*0x5f35d5*/
    return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 40); /*0x5f35da*/
  else
    return 0; /*0x5f35de*/
}


// ==== 0x005F35F0  NullModemClass::CheckStatus  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::_vt08(_DWORD *this)
{
  int v1; // eax

  v1 = this->linkObject; /*0x5f35f0*/
  if ( v1 ) /*0x5f35f5*/
    return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 56); /*0x5f35fa*/
  else
    return 0; /*0x5f35fe*/
}


// ==== 0x005F3610  NullModemClass::GetAddress  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::_vt09(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = this->linkObject; /*0x5f3610*/
  if ( v2 ) /*0x5f3615*/
    return *(_DWORD *)(*(_DWORD *)(v2 + 4) + 40); /*0x5f361a*/
  else
    return 0; /*0x5f3620*/
}


// ==== 0x005F3630  NullModemClass::SetAddress  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::_vt10(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = this->linkObject; /*0x5f3630*/
  if ( v2 ) /*0x5f3635*/
    return *(_DWORD *)(*(_DWORD *)(v2 + 4) + 56); /*0x5f363a*/
  else
    return 0; /*0x5f3640*/
}


// ==== 0x005F3650  NullModemClass::QueryInterface  this=NullModemClass  sig=csp ====
NullModemClass *__thiscall NullModemClass::QueryInterface(void ***Block, char a2)
{
  void **v3; // edi

  v3 = *(Block + 13); /*0x5f3654*/
  *Block = &vt_NullModemClass; /*0x5f3657*/
  if ( v3 ) /*0x5f365f*/
  {
    FileFind::Close(v3); /*0x5f3663*/
    __3_YAXPAX_Z(v3); /*0x5f3669*/
  }
  ObjectClass::FreeResources((int)Block); /*0x5f3673*/
  if ( *(Block + 16) != (void **)-1 ) /*0x5f3680*/
  {
    if ( !g_ClipboardBuffer ) /*0x5f368a*/
      goto LABEL_10; /*0x5f368a*/
    SerialPort::Close((HANDLE *)g_ClipboardBuffer); /*0x5f368c*/
    if ( g_ClipboardBuffer ) /*0x5f3699*/
      (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f369f*/
    g_ClipboardBuffer = 0; /*0x5f36a1*/
    *(Block + 16) = (void **)-1; /*0x5f36ad*/
    ObjectClass::FreeResources((int)Block); /*0x5f36b0*/
  }
  if ( g_ClipboardBuffer ) /*0x5f36bd*/
  {
    (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f36c3*/
    g_ClipboardBuffer = 0; /*0x5f36c5*/
  }
LABEL_10:
  *Block = &vt_ConnManClass; /*0x5f36cf*/
  if ( (a2 & 1) != 0 ) /*0x5f36db*/
    __3_YAXPAX_Z(Block); /*0x5f36de*/
  return (NullModemClass *)Block; /*0x5f36e8*/
}


// ==== 0x005F36F0  sub_5F36F0  this=-  sig=ida-proto ====
void sub_5F36F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5f36fc*/
  MEMORY[0xAC1368] = Math::Sqrt(v0 + v0); /*0x5f370e*/
}


// ==== 0x005F3720  sub_5F3720  this=-  sig=ida-proto ====
void sub_5F3720()
{
  MEMORY[0xAC13C0] = MEMORY[0xAC1368] / 60.0; /*0x5f372c*/
}


// ==== 0x005F3740  sub_5F3740  this=-  sig=ida-proto ====
void sub_5F3740()
{
  MEMORY[0xAC13A8] = 1.0 / MEMORY[0xAC13C0]; /*0x5f374c*/
}


// ==== 0x005F3760  sub_5F3760  this=-  sig=ida-proto ====
void sub_5F3760()
{
  MEMORY[0xAC13A0] = 0.0174532925199433 * 45.0; /*0x5f376c*/
}


// ==== 0x005F3780  sub_5F3780  this=-  sig=ida-proto ====
void sub_5F3780()
{
  MEMORY[0xAC1370] = 0.0174532925199433 * 60.0; /*0x5f378c*/
}


// ==== 0x005F37A0  sub_5F37A0  this=-  sig=ida-proto ====
void sub_5F37A0()
{
  MEMORY[0xAC1348] = 0.0174532925199433 * 90.0; /*0x5f37ac*/
}


// ==== 0x005F37C0  sub_5F37C0  this=-  sig=ida-proto ====
__int64 sub_5F37C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC1348] - MEMORY[0xAC1370]); /*0x5f37d2*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC1368] * 0.5); /*0x5f37e6*/
  MEMORY[0xAC13C8] = result; /*0x5f37eb*/
  return result; /*0x5f37f0*/
}


// ==== 0x005F3800  sub_5F3800  this=-  sig=ida-proto ====
void sub_5F3800()
{
  MEMORY[0xAC1378] = Math::ArcTan((double)MEMORY[0xAC13C8] * 0.00390625); /*0x5f3817*/
}


// ==== 0x005F3830  sub_5F3830  this=-  sig=ida-proto ====
void sub_5F3830()
{
  MEMORY[0xAC1390] = Math::ArcTan((double)(2 * MEMORY[0xAC13C8]) / MEMORY[0xAC1368]); /*0x5f3852*/
}


// ==== 0x005F3860  sub_5F3860  this=-  sig=ida-proto ====
__int64 sub_5F3860()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC13C8]) + 0.5); /*0x5f387b*/
  MEMORY[0xAC13BC] = result; /*0x5f3880*/
  return result; /*0x5f3886*/
}


// ==== 0x005F3890  sub_5F3890  this=-  sig=ida-proto ====
int sub_5F3890()
{
  MEMORY[0xAC1360] = 0; /*0x5f3892*/
  return 0; /*0x5f389e*/
}


// ==== 0x005F38A0  sub_5F38A0  this=-  sig=ida-proto ====
int sub_5F38A0()
{
  MEMORY[0xAC1380] = 0; /*0x5f38a2*/
  MEMORY[0xAC1384] = 0; /*0x5f38a7*/
  MEMORY[0xAC1388] = 0; /*0x5f38ac*/
  return 0; /*0x5f38b1*/
}


// ==== 0x005F38C0  sub_5F38C0  this=-  sig=ida-proto ====
int sub_5F38C0()
{
  MEMORY[0xAC13B8] = 0; /*0x5f38c5*/
  MEMORY[0xAC13B0] = 128; /*0x5f38cf*/
  MEMORY[0xAC13B4] = 128; /*0x5f38d4*/
  return 128; /*0x5f38d9*/
}


// ==== 0x005F38E0  sub_5F38E0  this=-  sig=ida-proto ====
int sub_5F38E0()
{
  MEMORY[0xAC1350] = 0; /*0x5f38e2*/
  MEMORY[0xAC1354] = 0; /*0x5f38e7*/
  MEMORY[0xAC1358] = 0; /*0x5f38ec*/
  MEMORY[0xAC135C] = 0; /*0x5f38f1*/
  return 0; /*0x5f38f6*/
}


// ==== 0x005F3900  ObjectClass::ctor  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5F3900(_DWORD *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  AbstractClass::Constructor((int)this); /*0x5f3904*/
  this->objectTypeFlags = 0; /*0x5f3910*/
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
  this->q1D0 = 0; /*0x5f394b*/
  this->visibilityFlags = 0; /*0x5f394e*/
  this->q200 = 0; /*0x5f3951*/
  this->inOpenToppedTransport = 0; /*0x5f3957*/
  this->isSelected = 0; /*0x5f395d*/
  this->hasParachute = 0; /*0x5f3963*/
  this->parachute = 0; /*0x5f3969*/
  this->onBridge = 0; /*0x5f396f*/
  this->isFallingDown = 0; /*0x5f3975*/
  this->wasFallingDown = 0; /*0x5f397b*/
  this->isBomb = 0; /*0x5f3981*/
  this->lastLayer = -1; /*0x5f3987*/
  this->__pad_260 = 0; /*0x5f398d*/
  this->location = MEMORY[0xAC1380]; /*0x5f399f*/
  this->q0A0 = MEMORY[0xAC1384]; /*0x5f39ab*/
  v2 = MEMORY[0xAC1388]; /*0x5f39ae*/
  this->lineTrailer = 0; /*0x5f39b4*/
  *this = &ObjectClass::`vftable'; /*0x5f39ba*/
  this->q0A4 = v2; /*0x5f39c0*/
  this->vtable2 = &ObjectClass::`vftable'; /*0x5f39c6*/
  this->vtable3 = &ObjectClass::`vftable'; /*0x5f39cd*/
  this->vtable4 = &ObjectClass::`vftable'; /*0x5f39d4*/
  AudioController::Init(this + 15); /*0x5f39db*/
  AudioController::Init(this + 20); /*0x5f39e3*/
  if ( MEMORY[0xA8E370] < MEMORY[0xA8E368] /*0x5f3a1c*/
    || (MEMORY[0xA8E36D] || !MEMORY[0xA8E368])
    && MEMORY[0xA8E374] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8E360] + 8))(
         &MEMORY[0xA8E360],
         MEMORY[0xA8E368] + MEMORY[0xA8E374],
         0) )
  {
    v3 = MEMORY[0xA8E370]++; /*0x5f3a29*/
    *((_DWORD *)MEMORY[0xA8E364] + v3) = this; /*0x5f3a38*/
  }
  if ( MEMORY[0xB0F730] < MEMORY[0xB0F728] /*0x5f3a6f*/
    || (MEMORY[0xB0F72D] || !MEMORY[0xB0F728])
    && MEMORY[0xB0F734] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F720] + 8))(
         &MEMORY[0xB0F720],
         MEMORY[0xB0F728] + MEMORY[0xB0F734],
         0) )
  {
    v4 = MEMORY[0xB0F730]++; /*0x5f3a7c*/
    *((_DWORD *)MEMORY[0xB0F724] + v4) = this; /*0x5f3a8b*/
  }
  if ( MEMORY[0xB0F680] < MEMORY[0xB0F678] /*0x5f3ac2*/
    || (MEMORY[0xB0F67D] || !MEMORY[0xB0F678])
    && MEMORY[0xB0F684] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F670] + 8))(
         &MEMORY[0xB0F670],
         MEMORY[0xB0F678] + MEMORY[0xB0F684],
         0) )
  {
    v5 = MEMORY[0xB0F680]++; /*0x5f3acf*/
    *((_DWORD *)MEMORY[0xB0F674] + v5) = this; /*0x5f3ade*/
  }
  if ( MEMORY[0xB0F628] < MEMORY[0xB0F620] /*0x5f3b15*/
    || (MEMORY[0xB0F625] || !MEMORY[0xB0F620])
    && MEMORY[0xB0F62C] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F618] + 8))(
         &MEMORY[0xB0F618],
         MEMORY[0xB0F620] + MEMORY[0xB0F62C],
         0) )
  {
    v6 = MEMORY[0xB0F628]++; /*0x5f3b22*/
    *((_DWORD *)MEMORY[0xB0F61C] + v6) = this; /*0x5f3b31*/
  }
  this->customSound_controller |= 2u; /*0x5f3b39*/
  return this; /*0x5f3b3e*/
}


// ==== 0x005F3B50  ObjectClass::Init  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ObjectClass::Init(_DWORD *this, AbstractClass *aP1)
{
  AbstractClass::InitVtables(this, (int)aP1); /*0x5f3b58*/
  *this = &ObjectClass::`vftable'; /*0x5f3b5d*/
  this->vtable2 = &ObjectClass::`vftable'; /*0x5f3b63*/
  this->vtable3 = &ObjectClass::`vftable'; /*0x5f3b6a*/
  this->vtable4 = &vt_ObjectClass; /*0x5f3b71*/
  return this; /*0x5f3b7a*/
}


// ==== 0x005F3B80  ObjectClass::Dtor  this=ObjectClass  sig=csp ====
void __thiscall ObjectClass::Dtor(_DWORD *this)
{
  BombClass *v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // ecx
  _DWORD *v9; // [esp+10h] [ebp-4h] BYREF

  v2 = (BombClass *)this->attachedBomb; /*0x5f3b84*/
  *this = &ObjectClass::`vftable'; /*0x5f3b87*/
  this->vtable2 = &ObjectClass::`vftable'; /*0x5f3b8f*/
  this->vtable3 = &ObjectClass::`vftable'; /*0x5f3b96*/
  this->vtable4 = &vt_ObjectClass; /*0x5f3b9d*/
  if ( v2 ) /*0x5f3ba4*/
    ObjectClass::CleanupAudioAndRefs((int)v2); /*0x5f3ba6*/
  v9 = this; /*0x5f3bbb*/
  v3 = (*(int (__thiscall **)(char *, _DWORD **))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9988] + 16))( /*0x5f3bbf*/
         &MEMORY[0xB077F8].__pad_579C[9988],
         &v9);
  if ( v3 != -1 && v3 < *(int *)&MEMORY[0xB077F8].__pad_579C[10004] ) /*0x5f3bcf*/
  {
    --*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10004]; /*0x5f3bd4*/
    for ( ; /*0x5f3bda*/
          v3 < *(int *)&MEMORY[0xB077F8].__pad_579C[10004];
          *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9992] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9992]
                                                                                              + 4 * v3) )
    {
      ++v3; /*0x5f3be2*/
    }
  }
  v9 = this; /*0x5f3c04*/
  v4 = (*(int (__thiscall **)(char *, _DWORD **))(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[356] + 16))( /*0x5f3c08*/
         &MEMORY[0xA8D63C].__pad_BC0[356],
         &v9);
  if ( v4 != -1 && v4 < *(int *)&MEMORY[0xA8D63C].__pad_BC0[372] ) /*0x5f3c18*/
  {
    --*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[372]; /*0x5f3c1d*/
    for ( ; /*0x5f3c23*/
          v4 < *(int *)&MEMORY[0xA8D63C].__pad_BC0[372];
          *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[360] + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[360]
                                                                                            + 4 * v4) )
    {
      ++v4; /*0x5f3c2b*/
    }
  }
  v9 = this; /*0x5f3c4d*/
  v5 = (*(int (__thiscall **)(char *, _DWORD **))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10124] + 16))( /*0x5f3c51*/
         &MEMORY[0xB077F8].__pad_579C[10124],
         &v9);
  if ( v5 != -1 && v5 < *(int *)&MEMORY[0xB077F8].__pad_579C[10140] ) /*0x5f3c61*/
  {
    --*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10140]; /*0x5f3c66*/
    for ( ; /*0x5f3c6c*/
          v5 < *(int *)&MEMORY[0xB077F8].__pad_579C[10140];
          *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10128] + 4 * v5 - 4) = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10128]
                                                                                               + 4 * v5) )
    {
      ++v5; /*0x5f3c74*/
    }
  }
  v9 = this; /*0x5f3c96*/
  v6 = (*(int (__thiscall **)(char *, _DWORD **))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9948] + 16))( /*0x5f3c9a*/
         &MEMORY[0xB077F8].__pad_579C[9948],
         &v9);
  if ( v6 != -1 && v6 < *(int *)&MEMORY[0xB077F8].__pad_579C[9964] ) /*0x5f3caa*/
  {
    --*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9964]; /*0x5f3caf*/
    for ( ; /*0x5f3cb5*/
          v6 < *(int *)&MEMORY[0xB077F8].__pad_579C[9964];
          *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9952] + 4 * v6 - 4) = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9952]
                                                                                              + 4 * v6) )
    {
      ++v6; /*0x5f3cbd*/
    }
  }
  v9 = this; /*0x5f3cdf*/
  v7 = (*(int (__thiscall **)(char *, _DWORD **))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9860] + 16))( /*0x5f3ce3*/
         &MEMORY[0xB077F8].__pad_579C[9860],
         &v9);
  if ( v7 != -1 && v7 < *(int *)&MEMORY[0xB077F8].__pad_579C[9876] ) /*0x5f3cf3*/
  {
    --*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9876]; /*0x5f3cf8*/
    for ( ; /*0x5f3cfe*/
          v7 < *(int *)&MEMORY[0xB077F8].__pad_579C[9876];
          *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9864] + 4 * v7 - 4) = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9864]
                                                                                              + 4 * v7) )
    {
      ++v7; /*0x5f3d06*/
    }
  }
  this->nextObject = 0; /*0x5f3d1d*/
  this->isAliveFlag = 0; /*0x5f3d26*/
  AudioController::Stop(this + 15); /*0x5f3d2d*/
  AudioController::Stop(this + 20); /*0x5f3d37*/
  AudioFileClass::Release(this + 15); /*0x5f3d3e*/
  AudioFileClass::Release(this + 20); /*0x5f3d45*/
  v8 = (_DWORD *)this->lineTrailer; /*0x5f3d4a*/
  if ( v8 ) /*0x5f3d54*/
  {
    TacticalClass::GetField(v8); /*0x5f3d56*/
    this->lineTrailer = 0; /*0x5f3d5b*/
  }
  if ( this->__pad_260 ) /*0x5f3d65*/
    VectorClass::RemoveItem((int *)&MEMORY[0x87F778], (ObjectClass *)this); /*0x5f3d75*/
  AbstractClass::DTOR(this); /*0x5f3d7c*/
}


// ==== 0x005F3DB0  ObjectClass::CalcTargetFacing  this=AbstractClass  sig=csp ====
int *__thiscall ObjectClass::CalcTargetFacing(void *this, IUnknown *aP1, ObjectClass *aP2)
{
  ObjectClass *v4; // edi
  int *v5; // eax
  double v6; // st7
  _BYTE v8[12]; // [esp+24h] [ebp-18h] BYREF
  _BYTE v9[12]; // [esp+30h] [ebp-Ch] BYREF
  ObjectClass *aP2a; // [esp+44h] [ebp+8h]

  v4 = (ObjectClass *)(*(int (__thiscall **)(ObjectClass *, _BYTE *))(*(_DWORD *)aP2->__pad_0 + 72))(aP2, v8); /*0x5f3dc9*/
  v5 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(this->q048)(this, v9); /*0x5f3dd0*/
  aP2a = *(ObjectClass **)v4->__pad_0; /*0x5f3dd7*/
  v6 = Math::CalcAngle((double)v5[1] - (double)*(int *)&v4->__pad_0[4], (double)*(int *)v4->__pad_0 - (double)*v5); /*0x5f3dfa*/
  LOWORD(aP2a) = Math::RoundToInt((v6 - 1.570796326794897) * -10430.06004058427); /*0x5f3e13*/
  aP1->field_0 = (int)aP2a; /*0x5f3e21*/
  return &aP1->field_0; /*0x5f3e20*/
}


// ==== 0x005F3E30  ObjectClass::HasC4  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::HasC4(#374 *this)
{
  int v1; // eax

  v1 = (*(int (__thiscall **)(#374 *))(this->parachute)(this); /*0x5f3e32*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 156))(v1);
}


// ==== 0x005F3E50  ObjectClass::StepCleanup  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass_StepCleanup(void *this, void *a2)
{
  (*(void (__thiscall **)(void *))(this->parachute)(this); /*0x5f3e57*/
  return AbstractTypeClass::NameEquals(a2); /*0x5f3e64*/
}


// ==== 0x005F3E70  ObjectClass::DetectCloaked  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::DetectCloaked(#374 *this)
{
  int result; // eax
  ObjectClass *v3; // edx
  int v4; // eax
  AudioController *v5; // ecx
  int v6; // ebp
  int v7; // edi
  ObjectClass *v8; // edx
  ObjectClass *v9; // eax
  AnimClass *v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  ObjectClass *v14; // edx
  IUnknown *v15; // eax
  IUnknown **v16; // edx
  char *v17; // esi
  ObjectClass *v18; // edx
  ObjectClass *v19; // edx
  ObjectClass *v20; // edi
  int v21; // esi
  int v22; // [esp+20h] [ebp-10h] BYREF
  CoordStruct aP2; // [esp+24h] [ebp-Ch] BYREF

  if ( !this->inLimbo ) /*0x5f3e78*/
  {
    result = (*(int (__thiscall **)(#374 *))(this->parachute)(this); /*0x5f3e88*/
    if ( result ) /*0x5f3e90*/
    {
      result = (*(int (__thiscall **)(#374 *))(this->parachute)(this); /*0x5f3e96*/
      if ( *(_DWORD *)(result + 500) != -1 ) /*0x5f3ea3*/
      {
        aP2.X = this->q027; /*0x5f3eb1*/
        aP2.Y = this->owningHouseIndex; /*0x5f3ebc*/
        v3 = *(ObjectClass **)this; /*0x5f3ec0*/
        aP2.Z = this->q029; /*0x5f3ec7*/
        v4 = ((int (__thiscall *)(#374 *))v3->parachute)(this); /*0x5f3ecb*/
        result = StartAudioControllerAt(*(AudioController **)(v4 + 500), (int)&aP2, (int)this + 60); /*0x5f3ed9*/
      }
    }
    v5 = (AudioController *)this->customSound; /*0x5f3ede*/
    if ( v5 != (AudioController *)-1 ) /*0x5f3ee4*/
    {
      aP2 = *(CoordStruct *)((_BYTE *)this + 13); /*0x5f3ef2*/
      result = StartAudioControllerAt(v5, (int)&aP2, (int)this + 80); /*0x5f3f0c*/
    }
  }
  LOBYTE(result) = this->isFallingDown; /*0x5f3f11*/
  if ( (_BYTE)result ) /*0x5f3f19*/
  {
    v6 = (*(int (__thiscall **)(#374 *))(this->spawnStatus)(this); /*0x5f3f2a*/
    v7 = this->fallRate + (*(int (__thiscall **)(#374 *))(this->q1D0)(this); /*0x5f3f3a*/
    if ( this->isOnMap ) /*0x5f3f37*/
    {
      (*(void (__thiscall **)(#374 *, _DWORD))(this->q124)(this, 0); /*0x5f3f46*/
      v8 = *(ObjectClass **)this; /*0x5f3f4c*/
      this->q029 = v7; /*0x5f3f52*/
      ((void (__thiscall *)(#374 *, int))v8[1].spawnStatus)(this, 1); /*0x5f3f58*/
    }
    else
    {
      this->q029 = v7; /*0x5f3f60*/
    }
    if ( (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 456))(this) <= 0 ) /*0x5f3f72*/
    {
      (*(void (__thiscall **)(#374 *, _DWORD))(this->q073)(this, 0); /*0x5f3f7a*/
      v9 = *(ObjectClass **)this; /*0x5f3f80*/
      this->isFallingDown = 0; /*0x5f3f86*/
      ((void (__thiscall *)(#374 *, int))v9[2].attachedTag)(this, 2); /*0x5f3f8d*/
      v10 = (AnimClass *)this->parachute; /*0x5f3f93*/
      if ( v10 ) /*0x5f3f9b*/
        v10->__pad_194[1] = 0; /*0x5f3f9d*/
    }
    if ( this->inLimbo ) /*0x5f3fa4*/
    {
      RemoveTarget((IUnknown *)this); /*0x5f414c*/
      return result; /*0x5f414c*/
    }
    if ( this->hasParachute ) /*0x5f3fb2*/
    {
      v11 = this->fallRate - 1; /*0x5f3fbf*/
      this->fallRate = v11; /*0x5f3fc0*/
      v12 = v11; /*0x5f3fc9*/
      v13 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1976); /*0x5f3fcb*/
      if ( v11 <= v13 ) /*0x5f3fd3*/
        goto LABEL_19; /*0x5f3fd3*/
    }
    else
    {
      v12 = Math::RoundToInt((double)*((int *)this + 11) - 1.4); /*0x5f3fe0*/
      this->fallRate = v12; /*0x5f3fe5*/
      v13 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1980); /*0x5f3fee*/
      if ( v12 <= v13 ) /*0x5f3ff6*/
LABEL_19:
        v12 = v13; /*0x5f3ff8*/
    }
    this->fallRate = v12; /*0x5f3ffa*/
    result = (*(int (__thiscall **)(#374 *))(this->spawnStatus)(this); /*0x5f4001*/
    if ( v6 != result ) /*0x5f4006*/
      Targeting::Readd((IUnknown *)this); /*0x5f400e*/
    LOBYTE(result) = this->isFallingDown; /*0x5f4013*/
    if ( !(_BYTE)result ) /*0x5f401b*/
    {
      if ( this->isBomb && *((int *)this + 27) > 0 ) /*0x5f4030*/
      {
        v14 = *(ObjectClass **)this; /*0x5f4032*/
        v22 = this->health; /*0x5f4034*/
        ((void (__thiscall *)(#374 *, int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))v14[2].abstractFlags)( /*0x5f4055*/
          this,
          &v22,
          0,
          *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008),
          0,
          1,
          1,
          0);
      }
      result = (*(int (__thiscall **)(#374 *))(this->fallRate)(this); /*0x5f405f*/
      if ( result == 4 ) /*0x5f4065*/
      {
        result = this->q0C8; /*0x5f406b*/
        if ( *(_BYTE *)(result + 852) ) /*0x5f4071*/
        {
          *((_BYTE *)this + 410) = 1; /*0x5f407f*/
          v15 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x5f4086*/
          v16 = (IUnknown **)((char *)this + 180); /*0x5f408b*/
          this->nextObject = 1; /*0x5f4096*/
          v17 = (char *)this + 156; /*0x5f409c*/
          *v16 = v15; /*0x5f40a2*/
          v16[1] = (IUnknown *)aP2.Y; /*0x5f40a8*/
          v16[2] = (IUnknown *)1; /*0x5f40ab*/
          v18 = *(ObjectClass **)v17; /*0x5f40c0*/
          *((_DWORD *)v17 + 4) = 8 * *(_DWORD *)(*((_DWORD *)v17 + 11) + 848) + 1; /*0x5f40c2*/
          aP2.X = (int)v18; /*0x5f40c5*/
          aP2.Y = *((_DWORD *)v17 + 1); /*0x5f40d1*/
          aP2.Z = *((_DWORD *)v17 + 2); /*0x5f40d8*/
          result = (int)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP2); /*0x5f40e1*/
          if ( *(_DWORD *)(result + 236) == 2 ) /*0x5f40ed*/
          {
            result = __2_YAPAXI_Z(0x1C8u); /*0x5f40f4*/
            if ( result ) /*0x5f40fe*/
            {
              v19 = *(ObjectClass **)v17; /*0x5f4100*/
              v20 = (ObjectClass *)*((_DWORD *)v17 + 1); /*0x5f4102*/
              v21 = *((_DWORD *)v17 + 2); /*0x5f4105*/
              aP2.X = (int)v19; /*0x5f410c*/
              aP2.Y = (int)v20; /*0x5f4126*/
              aP2.Z = v21 + 3; /*0x5f412a*/
              return (int)AnimClass::ctor( /*0x5f413a*/
                            (void **)result,
                            **(CoordStruct ***)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3012),
                            &aP2,
                            0,
                            (CoordStruct *)1,
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
int __thiscall ObjectClass::DropAsBomb_Track(#374 *this)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  _DWORD v5[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = *(_DWORD *)this; /*0x5f4168*/
  *((_BYTE *)this + 141) = 1; /*0x5f416a*/
  *((_BYTE *)this + 143) = 1; /*0x5f4171*/
  (*(void (__stdcall **)(_DWORD))(v2 + 292))(0); /*0x5f4178*/
  RemoveTarget((IUnknown *)this); /*0x5f4184*/
  this->q08C = 0; /*0x5f418f*/
  Targeting::Readd((IUnknown *)this); /*0x5f4196*/
  result = (*(int (__thiscall **)(#374 *, int))(this->q049)(this, 1); /*0x5f41a1*/
  if ( this ) /*0x5f41a9*/
  {
    LOBYTE(result) = (this->q005 & 4) != 0; /*0x5f41b5*/
    if ( (this->q005 & 4) != 0 ) /*0x5f41bb*/
    {
      if ( !*((_DWORD *)this + 413) ) /*0x5f41bd*/
        WinAPI::Wrapper(-2147467261); /*0x5f41cc*/
      if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 16))(*((_DWORD *)this + 413)) ) /*0x5f41da*/
      {
        if ( !*((_DWORD *)this + 413) ) /*0x5f4213*/
          WinAPI::Wrapper(-2147467261); /*0x5f4222*/
        return (*(int (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 413) + 156))(*((_DWORD *)this + 413), 0); /*0x5f4232*/
      }
      else
      {
        v5[0] = this->q09C; /*0x5f41ed*/
        v4 = *(_DWORD *)this; /*0x5f41f1*/
        v5[1] = this->q028; /*0x5f41f6*/
        v5[2] = this->q0A4; /*0x5f4204*/
        return (*(int (__thiscall **)(#374 *, _DWORD *))(v4 + 244))(this, v5); /*0x5f4208*/
      }
    }
  }
  return result; /*0x5f420e*/
}


// ==== 0x005F4240  ObjectClass::COMStub_29  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt29(#374 *this)
{
  return 0; /*0x5f4242*/
}


// ==== 0x005F4250  ObjectClass::COMStub_28  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt28(#374 *this)
{
  return 0; /*0x5f4252*/
}


// ==== 0x005F4260  ObjectClass::GetThreatLevel  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetThreatLevel(#374 *this)
{
  if ( (*(unsigned __int8 (__thiscall **)(#374 *))(this->q054)(this) ) /*0x5f4265*/
    return ((*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 456))(this) >= MEMORY[0x8871E0]->?[13]) + 3; /*0x5f4294*/
  else
    return 2; /*0x5f426c*/
}


// ==== 0x005F42A0  ObjectClass::COMStub_Ret2147483647_35  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt35(#374 *this)
{
  return 0x7FFFFFFF; /*0x5f42a5*/
}


// ==== 0x005F42B0  ObjectClass::COMStub_Return0_37  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt37(#374 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f42b0*/
  return result; /*0x5f42b2*/
}


// ==== 0x005F42C0  ObjectClass::COMStub_Return0_38  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt38(#374 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f42c0*/
  return result; /*0x5f42c2*/
}


// ==== 0x005F42D0  ObjectClass::COMStub_Return0_39  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt39(#374 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f42d0*/
  return result; /*0x5f42d2*/
}


// ==== 0x005F42E0  ObjectClass::COMStub_Return0_40  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt40(#374 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f42e0*/
  return result; /*0x5f42e2*/
}


// ==== 0x005F42F0  ObjectClass::COMStub_Return0_56  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_56(#374 *this)
{
  int result; // eax

  return result; /*0x5f42f0*/
}


// ==== 0x005F4300  ObjectClass::COMStub_Return0_57  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_57(#374 *this)
{
  int result; // eax

  return result; /*0x5f4300*/
}


// ==== 0x005F4310  ObjectClass::COMStub_Return0_63  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_63(#374 *this)
{
  int result; // eax

  return result; /*0x5f4310*/
}


// ==== 0x005F4320  ObjectClass::COMStub_64  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt64(#374 *this)
{
  return 0; /*0x5f4322*/
}


// ==== 0x005F4330  ObjectClass::COMStub_Return0_71  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_71(#374 *this)
{
  int result; // eax

  return result; /*0x5f4330*/
}


// ==== 0x005F4340  ObjectClass::COMStub_Return0_72  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_72(#374 *this)
{
  int result; // eax

  return result; /*0x5f4340*/
}


// ==== 0x005F4350  ObjectClass::COMStub_81  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt81(#374 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f4350*/
  return result; /*0x5f4352*/
}


// ==== 0x005F4360  ObjectClass::COMStub_80  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt80(#374 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f4360*/
  return result; /*0x5f4362*/
}


// ==== 0x005F4370  ObjectClass::COMStub_Return0_82  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_82(#374 *this)
{
  int result; // eax

  return result; /*0x5f4370*/
}


// ==== 0x005F4380  ObjectClass::COMStub_89  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt89(#374 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f4380*/
  return result; /*0x5f4382*/
}


// ==== 0x005F4390  ObjectClass::COMStub_90  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt90(#374 *this)
{
  return 0; /*0x5f4392*/
}


// ==== 0x005F43A0  IUnknown::COMStub_Return0_93  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_93(#374 *this)
{
  int result; // eax

  return result; /*0x5f43a0*/
}


// ==== 0x005F43B0  IUnknown::StubReturnFalse3  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::_vt94(#374 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f43b0*/
  return result; /*0x5f43b2*/
}


// ==== 0x005F43C0  IUnknown::StubReturnTrue  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::StubReturnTrue(#374 *this)
{
  int result; // eax

  return result; /*0x5f43c0*/
}


// ==== 0x005F43D0  ObjectClass::COMStub_Return0_96  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt96(#374 *this)
{
  return 0; /*0x5f43d2*/
}


// ==== 0x005F43E0  ObjectClass::processStateUpdate  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::processStateUpdate(#374 *this)
{
  return -1; /*0x5f43e3*/
}


// ==== 0x005F43F0  IUnknown::StubReturnFalse4  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::StubReturnFalse4(#374 *this)
{
  int result; // eax

  return result; /*0x5f43f0*/
}


// ==== 0x005F4400  ObjectClass::COMStub_Return0_104  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_104(#374 *this)
{
  int result; // eax

  return result; /*0x5f4400*/
}


// ==== 0x005F4410  IUnknown::MoveToDirection  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::MoveToDirection(#374 *this)
{
  int v2; // edx
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  void *v7; // eax
  _DWORD v9[3]; // [esp+18h] [ebp-Ch] BYREF
  int v10; // [esp+28h] [ebp+4h]

  (*(void (__thiscall **)(#374 *, _DWORD))(this->q049)(this, 0); /*0x5f441d*/
  v2 = this->q09C; /*0x5f4431*/
  v3 = this->q028; /*0x5f443a*/
  v9[2] = this->q0A4; /*0x5f4448*/
  v4 = MEMORY[0x89F6D8][2 * (v10 & 7)]; /*0x5f444c*/
  v5 = v3 + MEMORY[0x89F6DC][2 * (v10 & 7)]; /*0x5f4451*/
  v6 = *(_DWORD *)this; /*0x5f4453*/
  v9[1] = v5; /*0x5f4455*/
  v9[0] = v2 + v4; /*0x5f4465*/
  v7 = Coord::To_Cell(&MEMORY[0x87F7E8], v9); /*0x5f4469*/
  if ( !(*(int (__thiscall **)(#374 *, void *, int, int, _DWORD, int))(v6 + 428))(this, v7, v10, -1, 0, 1) ) /*0x5f4471*/
    (*(void (__thiscall **)(#374 *, _DWORD *))(*(_DWORD *)this + 436))(this, v9); /*0x5f4484*/
  return (*(int (__thiscall **)(#374 *, int))(this->q049)(this, 1); /*0x5f4496*/
}


// ==== 0x005F44A0  IUnknown::Remove  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::Remove(#374 *this)
{
  int result; // eax
  int v3; // eax
  #374 *v4; // [esp+4h] [ebp-4h] BYREF

  LOBYTE(result) = *((_BYTE *)this + 131); /*0x5f44a4*/
  if ( (_BYTE)result ) /*0x5f44ac*/
  {
    v4 = this; /*0x5f44be*/
    v3 = (*(int (__thiscall **)(_DWORD *, #374 **))(MEMORY[0x87F7E8][539956] + 16))(&MEMORY[0x87F7E8][539956], &v4); /*0x5f44c2*/
    if ( v3 != -1 && v3 < MEMORY[0x87F7E8][539960] ) /*0x5f44d2*/
    {
      --MEMORY[0x87F7E8][539960]; /*0x5f44d7*/
      for ( ; /*0x5f44dd*/
            v3 < MEMORY[0x87F7E8][539960];
            *(_DWORD *)(MEMORY[0x87F7E8][539957] + 4 * v3 - 4) = *(_DWORD *)(MEMORY[0x87F7E8][539957] + 4 * v3) )
      {
        ++v3; /*0x5f44e5*/
      }
    }
    *((_BYTE *)this + 131) = 0; /*0x5f44fc*/
    result = MapClass::GetScrollMode((int)MEMORY[0x87F7E8]); /*0x5f4503*/
    if ( (#374 *)result == this ) /*0x5f450a*/
      LOBYTE(result) = MapClass::SetScrollMode((int)MEMORY[0x87F7E8], 0); /*0x5f4513*/
  }
  return result; /*0x5f4518*/
}


// ==== 0x005F4520  ObjectClass::HandleSelection  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::HandleSelection(#374 *this)
{
  int result; // eax
  _BYTE *v3; // edi
  #375 *v4; // ebx
  #375 *v5; // edi
  wchar_t *v6; // eax
  wchar_t *v7; // eax
  char IsHumanPlayer; // [esp+Bh] [ebp-1h]

  if ( !MEMORY[0xA8ED6B] ) /*0x5f452c*/
  {
    if ( this->inLimbo /*0x5f454c*/
      || this->isSelected
      || (result = (*(int (__thiscall **)(#374 *))(this->q138)(this), !(_BYTE)result) )
    {
      LOBYTE(result) = 0; /*0x5f454f*/
      return result; /*0x5f4553*/
    }
  }
  v3 = AbstractClass::IsTechnoType(this); /*0x5f455b*/
  if ( !MEMORY[0xA8ED6B] ) /*0x5f4564*/
  {
    result = (*(int (__thiscall **)(#374 *))(this->q0A0)(this); /*0x5f456a*/
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
  result = MEMORY[0x880990]; /*0x5f45a0*/
  if ( MEMORY[0x880990] ) /*0x5f45a7*/
  {
    LOBYTE(result) = 0; /*0x5f45aa*/
    return result; /*0x5f45ae*/
  }
  if ( (int)MEMORY[0xA8ECC8] > 0 ) /*0x5f45b6*/
  {
    v4 = (#375 *)(*(int (__thiscall **)(#374 *))(this->ambientSoundController)(this); /*0x5f45c0*/
    v5 = (#375 *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)MEMORY[0xA8ECBC] + 60))(*(_DWORD *)MEMORY[0xA8ECBC]); /*0x5f45ce*/
    IsHumanPlayer = House::IsHumanPlayer(v5); /*0x5f45db*/
    if ( IsHumanPlayer != (unsigned __int8)House::IsHumanPlayer(v4) || !(unsigned __int8)House::IsHumanPlayer(v5) ) /*0x5f45ef*/
      MapClass::UnselectAll_ClearLimboLaunchers(); /*0x5f45f8*/
  }
  if ( !this /*0x5f461f*/
    || (this->abstractFlags & 1) == 0
    || !*(_BYTE *)((*(int (__thiscall **)(#374 *))(this->parachute)(this) + 3228) )
  {
    if ( (int)MEMORY[0xA8ECC8] < MEMORY[0xA8ECC0] /*0x5f46f2*/
      || (MEMORY[0xA8ECC5] || !MEMORY[0xA8ECC0])
      && MEMORY[0xA8ECCC] > 0
      && ((unsigned __int8 (__thiscall *)(ObjectClass **, int, _DWORD))MEMORY[0xA8ECB8]->__pad_0[2])(
           &MEMORY[0xA8ECB8],
           MEMORY[0xA8ECC0] + MEMORY[0xA8ECCC],
           0) )
    {
      v7 = MEMORY[0xA8ECC8]; /*0x5f46ff*/
      MEMORY[0xA8ECC8] = (wchar_t *)((char *)MEMORY[0xA8ECC8] + 1); /*0x5f4702*/
      *((_DWORD *)MEMORY[0xA8ECBC] + (_DWORD)v7) = this; /*0x5f470e*/
    }
    goto LABEL_38; /*0x5f470e*/
  }
  v6 = MEMORY[0xA8ECC8]; /*0x5f462d*/
  if ( (int)MEMORY[0xA8ECC8] >= MEMORY[0xA8ECC0] ) /*0x5f463a*/
  {
    if ( (MEMORY[0xA8ECC5] || !MEMORY[0xA8ECC0]) /*0x5f466a*/
      && MEMORY[0xA8ECCC] > 0
      && ((unsigned __int8 (__thiscall *)(ObjectClass **, int, _DWORD))MEMORY[0xA8ECB8]->__pad_0[2])(
           &MEMORY[0xA8ECB8],
           MEMORY[0xA8ECC0] + MEMORY[0xA8ECCC],
           0) )
    {
      v6 = MEMORY[0xA8ECC8]; /*0x5f4675*/
      goto LABEL_29; /*0x5f4675*/
    }
LABEL_38:
    Selection::SetCurrent(0); /*0x5f4711*/
    this->isSelected = 1; /*0x5f4718*/
    LOBYTE(result) = 1; /*0x5f4720*/
    return result; /*0x5f4720*/
  }
LABEL_29:
  if ( v6 ) /*0x5f467c*/
    memcpy((char *)MEMORY[0xA8ECBC] + 4, MEMORY[0xA8ECBC], 4 * (_DWORD)v6); /*0x5f468c*/
  *(_DWORD *)MEMORY[0xA8ECBC] = this; /*0x5f469a*/
  MEMORY[0xA8ECC8] = (wchar_t *)((char *)MEMORY[0xA8ECC8] + 1); /*0x5f46a4*/
  Selection::SetCurrent(0); /*0x5f46a9*/
  this->isSelected = 1; /*0x5f46ae*/
  LOBYTE(result) = 1; /*0x5f46b6*/
  return result; /*0x5f454e*/
}


// ==== 0x005F4730  IUnknown::GetPlacementScreenRect  this=IUnknown  sig=csp ====
int __thiscall BuildingClass::GetPlacementScreenRect(#374 *this)
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
  int v12; // esi
  int v13; // ecx
  int v14; // [esp+10h] [ebp-18h] BYREF
  int v15; // [esp+14h] [ebp-14h]
  _DWORD v16[3]; // [esp+18h] [ebp-10h] BYREF
  int v17; // [esp+24h] [ebp-4h]
  _DWORD *v18; // [esp+2Ch] [ebp+4h]

  v2 = (_DWORD *)(*(int (__thiscall **)(#374 *, _DWORD *))(this->q02B)(this, v16); /*0x5f4745*/
  Coord::To_Screen(MEMORY[0x887324], v2, &v14); /*0x5f4752*/
  v3 = (*(int (__thiscall **)(#374 *))(this->q06C)(this); /*0x5f475e*/
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
    v12 = v15 + v7 - *(__int16 *)(v3 + 4) / 2; /*0x5f47da*/
    v15 = v12 + MEMORY[0x886FA4]; /*0x5f47e6*/
    if ( MEMORY[0x886FA0] >= MEMORY[0x886FA0] + v11 + v8 /*0x5f481b*/
      || MEMORY[0x886FA4] >= v15 + v9
      || MEMORY[0x886FA0] + MEMORY[0x886FA8] <= MEMORY[0x886FA0] + v11
      || MEMORY[0x886FAC] + MEMORY[0x886FA4] <= v15 )
    {
      *v18 = MEMORY[0xAC1350]; /*0x5f484b*/
      v18[1] = MEMORY[0xAC1354]; /*0x5f4854*/
      v18[2] = MEMORY[0xAC1358]; /*0x5f485d*/
      v18[3] = MEMORY[0xAC135C]; /*0x5f4866*/
      return (int)v18; /*0x5f483c*/
    }
    else
    {
      *v18 = v11; /*0x5f4824*/
      v13 = v17; /*0x5f4826*/
      v18[1] = v12; /*0x5f482a*/
      v18[2] = v8; /*0x5f482f*/
      v18[3] = v13; /*0x5f4833*/
      return (int)v18; /*0x5f481d*/
    }
  }
  else
  {
    *v18 = MEMORY[0xAC1350]; /*0x5f4773*/
    v18[1] = MEMORY[0xAC1354]; /*0x5f477c*/
    v18[2] = MEMORY[0xAC1358]; /*0x5f4785*/
    v18[3] = MEMORY[0xAC135C]; /*0x5f478e*/
    return (int)v18; /*0x5f4764*/
  }
}


// ==== 0x005F4870  IUnknown::GetBoundsRect  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetBoundsRect(#374 *this)
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

  v2 = (_DWORD *)(*(int (__stdcall **)(int *))(this->q02B)(&v32); /*0x5f4887*/
  Coord::To_Screen(MEMORY[0x887324], v2, v31); /*0x5f4894*/
  v3 = (*(int (__thiscall **)(#374 *))(this->q088)(this); /*0x5f489d*/
  v4 = (__int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 156))(v3); /*0x5f48ad*/
  if ( !v4 ) /*0x5f48b1*/
  {
    *v39 = MEMORY[0xAC1350]; /*0x5f48c1*/
    v39[1] = MEMORY[0xAC1354]; /*0x5f48c9*/
    v39[2] = MEMORY[0xAC1358]; /*0x5f48d2*/
    v39[3] = MEMORY[0xAC135C]; /*0x5f48db*/
    return (int)v39; /*0x5f48e1*/
  }
  v6 = 0; /*0x5f48ea*/
  if ( (*(int (__thiscall **)(#374 *))(this->q02C)(this) == 6 && *(_BYTE *)(this->q520 + 5824) ) /*0x5f48fa*/
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
  if ( (*(int (__thiscall **)(#374 *))(this->q02C)(this) != 6 || !*(_DWORD *)(this->q520 + 5400) ) /*0x5f4a17*/
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
int __thiscall ObjectClass::CalcDrawRect(#374 *this)
{
  int result; // eax
  int v3; // edx
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
  int v19; // [esp+18h] [ebp-Ch]
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]
  int *v22; // [esp+28h] [ebp+4h]
  char v23; // [esp+2Ch] [ebp+8h]
  int v24; // [esp+2Ch] [ebp+8h]
  int v25; // [esp+2Ch] [ebp+8h]

  if ( (MEMORY[0xA8ED6B] || (result = (int)g_hWnd) == 0 || (v23 || this->needsRedraw) && !this->inLimbo) /*0x5f4b7d*/
    && ((v3 = *(_DWORD *)this,
         this->needsRedraw = 0,
         v4 = (_DWORD *)(*(int (__thiscall **)(#374 *, int *))(v3 + 172))(this, &v18),
         Coord::To_Screen(MEMORY[0x887324], v4, &v16))
     || (result = (*(int (__thiscall **)(#374 *))(this->fallRate)(this), result == 24)) )
  {
    v19 = MEMORY[0x886FA4]; /*0x5f4b8f*/
    v20 = MEMORY[0x886FA8]; /*0x5f4b99*/
    v21 = MEMORY[0x886FAC]; /*0x5f4ba3*/
    v5 = v22; /*0x5f4ba7*/
    v6 = 0; /*0x5f4bac*/
    v7 = 0; /*0x5f4bb1*/
    v8 = 0; /*0x5f4bb3*/
    v9 = 0; /*0x5f4bb5*/
    v10 = MEMORY[0x886FA0]; /*0x5f4bb8*/
    v14 = v22[2]; /*0x5f4bc0*/
    if ( v14 > 0 && v22[3] > 0 && MEMORY[0x886FA8] > 0 && MEMORY[0x886FAC] > 0 ) /*0x5f4beb*/
    {
      v24 = *v22; /*0x5f4bf5*/
      if ( MEMORY[0x886FA0] < *v22 ) /*0x5f4bf9*/
      {
        v10 = *v22; /*0x5f4c03*/
        v20 += MEMORY[0x886FA0] - *v22; /*0x5f4c07*/
      }
      if ( v20 >= 1 ) /*0x5f4c10*/
      {
        v11 = v22[1]; /*0x5f4c16*/
        if ( v19 >= v11 ) /*0x5f4c1f*/
        {
          v5 = v22; /*0x5f4c3a*/
        }
        else
        {
          v21 += v19 - v11; /*0x5f4c29*/
          v5 = v22; /*0x5f4c2d*/
          v19 = v22[1]; /*0x5f4c34*/
        }
        if ( v21 >= 1 ) /*0x5f4c43*/
        {
          v5 = v22; /*0x5f4c5d*/
          if ( v10 + v20 > v14 + v24 ) /*0x5f4c57*/
            v20 = v22[2] + v24 - v10; /*0x5f4c66*/
          if ( v20 >= 1 ) /*0x5f4c75*/
          {
            v25 = v22[3] + v22[1]; /*0x5f4c83*/
            if ( v21 + v19 <= v25 ) /*0x5f4c93*/
              v12 = v21; /*0x5f4c9b*/
            else
              v12 = v25 - v19; /*0x5f4c95*/
            if ( v12 >= 1 ) /*0x5f4ca2*/
            {
              v7 = v19; /*0x5f4ca4*/
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
    if ( *v5 > MEMORY[0x886FA0] ) /*0x5f4ccb*/
      v16 += MEMORY[0x886FA0] - *v5; /*0x5f4cd5*/
    v13 = v5[1]; /*0x5f4cd9*/
    if ( v13 > MEMORY[0x886FA4] ) /*0x5f4ce3*/
      v17 += MEMORY[0x886FA4] - v13; /*0x5f4ced*/
    result = (*(int (__thiscall **)(#374 *, int *, int *))(this->q114)(this, &v16, v5); /*0x5f4cfd*/
    LOBYTE(result) = 1; /*0x5f4d06*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x5f4b7f*/
  }
  return result; /*0x5f4b81*/
}


// ==== 0x005F4D10  IUnknown::MarkForRedraw  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::MarkForRedraw(#374 *this)
{
  int result; // eax

  LOBYTE(result) = *((_BYTE *)this + 128); /*0x5f4d10*/
  if ( !(_BYTE)result ) /*0x5f4d18*/
  {
    *((_BYTE *)this + 128) = 1; /*0x5f4d1a*/
    return MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x5f4d28*/
  }
  return result; /*0x5f4d2d*/
}


// ==== 0x005F4D30  ObjectClass::Undeploy  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::Undeploy(#374 *this)
{
  _DWORD *v2; // eax
  int v3; // ecx
  int v4; // edi
  int result; // eax
  int v6; // [esp+10h] [ebp-20h] BYREF
  int v7; // [esp+14h] [ebp-1Ch]
  _DWORD a1[3]; // [esp+18h] [ebp-18h] BYREF
  _BYTE v9[12]; // [esp+24h] [ebp-Ch] BYREF

  if ( !HouseClass_Player.__pad_5568[22252] || this->inLimbo ) /*0x5f4d45*/
  {
    LOBYTE(result) = 0; /*0x5f4eb7*/
  }
  else
  {
    (*(void (__thiscall **)(#374 *))(this->q150)(this); /*0x5f4d55*/
    (*(void (__thiscall **)(#374 *, int))(this->q0DC)(this, 1); /*0x5f4d61*/
    (*(void (__thiscall **)(#374 *, _DWORD))(this->q124)(this, 0); /*0x5f4d6d*/
    RemoveTarget((IUnknown *)this); /*0x5f4d79*/
    AudioController::Stop((_DWORD *)this + 15); /*0x5f4d81*/
    AudioFile::Stop((_DWORD *)this + 20); /*0x5f4d89*/
    if ( (*(int (__thiscall **)(#374 *))(this->parachute)(this) /*0x5f4dcb*/
      && *(_BYTE *)((*(int (__thiscall **)(#374 *))(this->parachute)(this) + 564)
      && (!*(_DWORD *)&HouseClass_Player.__pad_5568[8068]
       || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 5
       || (*(int (__stdcall **)(char *))(this->vtable2 + 16))((char *)this + 4) != -2) )
    {
      VectorClass::RemoveItem((int *)&stru_87C374.__pad_14B0[8020], (ObjectClass *)this); /*0x5f4dd3*/
    }
    if ( (*(int (__thiscall **)(#374 *))(this->parachute)(this) ) /*0x5f4ddc*/
    {
      if ( *(_DWORD *)((*(int (__thiscall **)(#374 *))(this->parachute)(this) + 172) ) /*0x5f4df4*/
      {
        v2 = (_DWORD *)(*(int (__thiscall **)(#374 *, _BYTE *))(this->q048)(this, v9); /*0x5f4e0b*/
        a1[0] = *v2; /*0x5f4e10*/
        a1[1] = v2[1]; /*0x5f4e22*/
        a1[2] = v2[2]; /*0x5f4e2e*/
        Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], a1, (IUnknown *)&v6); /*0x5f4e32*/
        v3 = *(_DWORD *)((*(int (__thiscall **)(#374 *))(this->parachute)(this) + 172); /*0x5f4e41*/
        v4 = v7 - *(__int16 *)(v3 + 4) / 2; /*0x5f4e6c*/
        v6 -= *(__int16 *)(v3 + 2) / 2; /*0x5f4e70*/
        v7 = v4; /*0x5f4e74*/
        Cell::CreateCrater(v6, v4, *(__int16 *)(v3 + 2), *(__int16 *)(v3 + 4), 1); /*0x5f4e8f*/
      }
    }
    result = (*(int (__thiscall **)(#374 *))(this->q11C)(this); /*0x5f4e98*/
    this->inLimbo = 1; /*0x5f4e9e*/
    this->needsRedraw = 0; /*0x5f4ea5*/
    LOBYTE(result) = 1; /*0x5f4eac*/
  }
  return result; /*0x5f4eae*/
}


// ==== 0x005F4EC0  ObjectClass::Deploy  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::Deploy(#374 *this)
{
  int result; // eax
  ObjectClass *v3; // ebx
  void *v4; // eax
  ObjectClass *v5; // eax
  ObjectClass *v6; // ebx
  int *v7; // eax
  _DWORD *v8; // eax
  AbstractClass *v9; // edx
  ObjectClass *v10; // eax
  int v11; // edi
  AbstractClass *v12; // ebp
  int v13; // eax
  char *v14; // eax
  int v15; // eax
  int v16; // edx
  char v17; // cl
  char v18; // cl
  int v19; // eax
  int v20; // [esp+2Ch] [ebp-2Ch] BYREF
  AbstractClass *aP3; // [esp+30h] [ebp-28h]
  int v22; // [esp+34h] [ebp-24h] BYREF
  int v23; // [esp+38h] [ebp-20h]
  int v24; // [esp+3Ch] [ebp-1Ch]
  _DWORD a1[3]; // [esp+40h] [ebp-18h] BYREF
  char v26[12]; // [esp+4Ch] [ebp-Ch] BYREF
  IUnknown *aP1; // [esp+5Ch] [ebp+4h]
  __int16 aP1a; // [esp+5Ch] [ebp+4h]

  result = aP1->field_0; /*0x5f4ed3*/
  if ( (CoordStruct *)aP1->field_0 == *(&g_MatrixTransformState + 2396) ) /*0x5f4ed7*/
  {
    result = (int)*(&g_MatrixTransformState + 2397); /*0x5f4edc*/
    if ( (CoordStruct *)aP1->field_4 == *(&g_MatrixTransformState + 2397) ) /*0x5f4ee3*/
    {
      result = (int)*(&g_MatrixTransformState + 2398); /*0x5f4ee8*/
      if ( (CoordStruct *)aP1->field_8 == *(&g_MatrixTransformState + 2398) ) /*0x5f4eef*/
        goto LABEL_41; /*0x5f4eef*/
    }
  }
  if ( !HouseClass_Player.__pad_5568[22252] ) /*0x5f4efc*/
    goto LABEL_41; /*0x5f4efc*/
  if ( !this->inLimbo ) /*0x5f4f02*/
    goto LABEL_41; /*0x5f4f02*/
  if ( this->isOnMap ) /*0x5f4f10*/
    goto LABEL_41; /*0x5f4f10*/
  if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[21752] ) /*0x5f4f22*/
  {
    v3 = *(ObjectClass **)this; /*0x5f4f24*/
    v4 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], aP1); /*0x5f4f34*/
    result = ((int (__thiscall *)(#374 *, void *, int, int, _DWORD, _DWORD))v3[2].customSound_controller[1])( /*0x5f4f3c*/
               this,
               v4,
               -1,
               -1,
               0,
               0);
    if ( result ) /*0x5f4f44*/
      goto LABEL_41; /*0x5f4f44*/
  }
  v5 = *(ObjectClass **)this; /*0x5f4f4a*/
  this->inLimbo = 0; /*0x5f4f4e*/
  this->needsRedraw = 0; /*0x5f4f55*/
  v6 = (ObjectClass *)((int (__thiscall *)(#374 *))v5->parachute)(this); /*0x5f4f64*/
  v22 = aP1->field_0; /*0x5f4f6a*/
  v23 = aP1->field_4; /*0x5f4f71*/
  v24 = aP1->field_8; /*0x5f4f78*/
  if ( v6 ) /*0x5f4f7c*/
  {
    v7 = (int *)(*(int (__thiscall **)(ObjectClass *, _DWORD *, IUnknown *))(*(_DWORD *)v6->__pad_0 + 108))(v6, a1, aP1); /*0x5f4f88*/
    v22 = *v7; /*0x5f4f8d*/
    v23 = v7[1]; /*0x5f4f94*/
    v24 = v7[2]; /*0x5f4f9b*/
  }
  (*(void (__thiscall **)(#374 *, int *))(this->q06D)(this, &v22); /*0x5f4fa8*/
  result = (*(int (__thiscall **)(#374 *, int))(this->q124)(this, 1); /*0x5f4fb4*/
  if ( !(_BYTE)result ) /*0x5f4fbc*/
  {
    this->inLimbo = 1; /*0x5f521c*/
LABEL_41:
    LOBYTE(result) = 0; /*0x5f5223*/
    return result; /*0x5f5226*/
  }
  if ( this->isAliveFlag )
  {
    if ( (*(int (__thiscall **)(#374 *))(this->spawnStatus)(this) != -1 ) /*0x5f4fda*/
      Targeting::Readd((IUnknown *)this); /*0x5f4fe2*/
    if ( v6 ) /*0x5f4fe9*/
    {
      if ( LOBYTE(v6[3].nextObject) /*0x5f5036*/
        && ((*(int (__thiscall **)(#374 *))(this->fallRate)(this) != 36
         || (*(int (__thiscall **)(#374 *))(this->fallRate)(this) == 36 && v6[4].__pad_0[1])
        && (!*(_DWORD *)&HouseClass_Player.__pad_5568[8068]
         || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 5
         || (*(int (__stdcall **)(char *))(this->vtable2 + 16))((char *)this + 4) != -2) )
      {
        ObjectClass::SetDeployState((ObjectClass *)this, 0); /*0x5f5040*/
      }
      if ( *(_DWORD *)v6[1].__pad_0 ) /*0x5f5045*/
      {
        v8 = (_DWORD *)(*(int (__thiscall **)(#374 *, char *))(this->q048)(this, v26); /*0x5f505c*/
        a1[0] = *v8; /*0x5f5061*/
        a1[1] = v8[1]; /*0x5f5073*/
        a1[2] = v8[2]; /*0x5f507f*/
        Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], a1, (IUnknown *)&v20); /*0x5f5083*/
        v9 = (AbstractClass *)((char *)aP3 + *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 180)); /*0x5f50a1*/
        v10 = *(ObjectClass **)this; /*0x5f50a3*/
        v20 += *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 176); /*0x5f50a9*/
        aP3 = v9; /*0x5f50ad*/
        v11 = *(_DWORD *)(((int (__thiscall *)(#374 *))v10->parachute)(this) + 172); /*0x5f50b7*/
        v12 = (AbstractClass *)((char *)aP3 - *(__int16 *)(v11 + 4) / 2); /*0x5f50dd*/
        v20 -= *(__int16 *)(v11 + 2) / 2; /*0x5f50df*/
        aP3 = v12; /*0x5f50e3*/
        v13 = __2_YAPAXI_Z(0x40u); /*0x5f50e7*/
        if ( v13 ) /*0x5f50f1*/
          AlphaShapeClass::CTOR(v13, (ObjectClass *)this, v20, aP3); /*0x5f5100*/
        if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[21752] ) /*0x5f510c*/
          Cell::CreateCrater( /*0x5f5146*/
            v20 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 176),
            (int)&aP3->__pad_0[-*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 180)],
            *(__int16 *)(v11 + 2),
            *(__int16 *)(v11 + 4),
            1);
      }
    }
    result = (*(int (__thiscall **)(#374 *))(this->parachute)(this); /*0x5f514f*/
    if ( *(_BYTE *)(result + 570) )
    {
      v14 = (char *)__2_YAPAXI_Z(0x210u); /*0x5f5168*/
      result = v14 ? (int)ObjectClass::checkLimbo(v14) : 0;
      this->q02A = result; /*0x5f5181*/
      if ( result ) /*0x5f5187*/
      {
        aP1a = *(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6243); /*0x5f519e*/
        if ( (_BYTE)aP1a /*0x5f51b4*/
          || __PAIR16__(HIBYTE(aP1a), 0) != *(unsigned __int8 *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6245) )
        {
          v18 = *(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6245); /*0x5f51e2*/
          *(_WORD *)result = *(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6243); /*0x5f51e5*/
          *(_BYTE *)(result + 2) = v18; /*0x5f51e8*/
        }
        else
        {
          v15 = (*(int (__thiscall **)(#374 *))(this->parachute)(this); /*0x5f51be*/
          v16 = this->q02A; /*0x5f51c4*/
          v17 = *(_BYTE *)(v15 + 573); /*0x5f51d4*/
          *(_WORD *)v16 = *(_WORD *)(v15 + 571); /*0x5f51d7*/
          *(_BYTE *)(v16 + 2) = v17; /*0x5f51da*/
        }
        v19 = (*(int (__thiscall **)(#374 *))(this->parachute)(this); /*0x5f51ef*/
        result = ObjectClass::updateMissionState(*((_DWORD **)this + 42), *(_DWORD *)(v19 + 576)); /*0x5f5202*/
        *(_DWORD *)(this->q02A + 4) = this; /*0x5f520d*/
      }
    }
  }
  LOBYTE(result) = 1; /*0x5f5210*/
  return result; /*0x5f5212*/
}


// ==== 0x005F5230  ObjectClass::Unlink  this=ObjectClass  sig=csp ====
int __thiscall Object::Unlink(#374 *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp+4h]
  char v3; // [esp+8h] [ebp+8h]

  result = this->attachedTag; /*0x5f5230*/
  if ( result == v2 && result ) /*0x5f523d*/
  {
    --*(_DWORD *)(result + 44); /*0x5f5244*/
    this->attachedTag = 0; /*0x5f5247*/
  }
  LOBYTE(result) = v3; /*0x5f524f*/
  if ( v3 ) /*0x5f5255*/
  {
    result = this->vtable4; /*0x5f5257*/
    if ( v2 == result ) /*0x5f525c*/
    {
      if ( v2 ) /*0x5f5260*/
      {
        result = *(_DWORD *)(result + 48); /*0x5f5262*/
        this->vtable4 = result; /*0x5f5265*/
      }
    }
  }
  if ( v2 == this->parachute ) /*0x5f526e*/
    this->parachute = 0; /*0x5f5270*/
  return result; /*0x5f527a*/
}


// ==== 0x005F5280  ObjectClass::Destroy2  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::Destroy2(#374 *this)
{
  _DWORD *v2; // ecx
  ObjectClass *v3; // edi
  bool v4; // bl
  AbstractClass *v5; // edx
  int result; // eax
  char aP1; // [esp+Ch] [ebp+4h]

  v2 = (_DWORD *)this->q02A; /*0x5f5284*/
  if ( v2 ) /*0x5f528c*/
  {
    TacticalClass::GetField(v2); /*0x5f528e*/
    this->q02A = 0; /*0x5f5293*/
  }
  v3 = (ObjectClass *)(*(int (__thiscall **)(#374 *))(this->ambientSoundController)(this); /*0x5f52a6*/
  v4 = 0; /*0x5f52ac*/
  if ( aP1 ) /*0x5f52b0*/
    goto LABEL_10; /*0x5f52b0*/
  if ( this && (this->abstractFlags & 1) != 0 ) /*0x5f52c0*/
    v4 = (*(unsigned __int8 (__thiscall **)(#374 *))(*(_DWORD *)this + 808))(this) != 0; /*0x5f52d0*/
  if ( !v3 || !(unsigned __int8)House::IsHumanPlayer((#375 *)v3) && !v4 ) /*0x5f52e3*/
LABEL_10:
    (*(void (__thiscall **)(#374 *))(this->q150)(this); /*0x5f52e9*/
  if ( (#374 *)MapClass::GetScrollMode((int)&stru_87C374.__pad_14B0[8132]) == this ) /*0x5f52fd*/
    MapClass::SetScrollMode((int)&stru_87C374.__pad_14B0[8132], 0); /*0x5f5306*/
  LOBYTE(v5) = aP1; /*0x5f530b*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, v5); /*0x5f5311*/
  return result; /*0x5f5316*/
}


// ==== 0x005F5320  ObjectClass::ProcessInputKey  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::ProcessInputKey(#374 *this)
{
  double v2; // [esp+0h] [ebp-8h]
  int v3; // [esp+10h] [ebp+8h]

  if ( v3 == 13 ) /*0x5f532a*/
  {
    (*(void (__thiscall **)(#374 *, int))(this->q124)(this, 2); /*0x5f5374*/
  }
  else
  {
    if ( v3 != 34 ) /*0x5f532f*/
      return 0; /*0x5f5336*/
    v2 = (double)*((int *)this + 27); /*0x5f533e*/
    if ( v2 / (double)*(int *)((*(int (__thiscall **)(#374 *))(this->parachute)(this) + 160) >= *(double *)&MEMORY[0x8871E0][1].? ) /*0x5f5363*/
      return 10; /*0x5f536d*/
  }
  return 1; /*0x5f5333*/
}


// ==== 0x005F5390  ObjectClass::CreateDestructionEffect  this=ObjectClass  sig=csp ====
int __thiscall TechnoClass::CreateDestructionEffect(#374 *this)
{
  int v2; // ebp
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v7; // edx
  double v8; // st7
  int v9; // eax
  void **v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // ebp
  void **v14; // ecx
  void **v15; // ecx
  void **v16; // ecx
  void **v17; // ecx
  void **v18; // ecx
  void **v19; // ecx
  void **v20; // ecx
  int v21; // ecx
  void **v22; // ecx
  void **v23; // ecx
  int v24; // [esp+10h] [ebp-14h]
  int v25; // [esp+14h] [ebp-10h]
  int v26[3]; // [esp+18h] [ebp-Ch] BYREF
  int *v27; // [esp+28h] [ebp+4h]
  int v28; // [esp+2Ch] [ebp+8h]
  int v29; // [esp+30h] [ebp+Ch]
  int v30; // [esp+34h] [ebp+10h]
  char v31; // [esp+38h] [ebp+14h]
  int v32; // [esp+38h] [ebp+14h]
  int v33; // [esp+40h] [ebp+1Ch]

  v24 = 0; /*0x5f5399*/
  v25 = this->health; /*0x5f53a6*/
  if ( v25 <= 0 || !*v27 || !v31 && *(_BYTE *)((*(int (__thiscall **)(#374 *))(this->parachute)(this) + 563) ) /*0x5f53cd*/
    return v24; /*0x5f583b*/
  v2 = *(_DWORD *)((*(int (__thiscall **)(#374 *))(this->parachute)(this) + 160); /*0x5f53e5*/
  if ( !v31 ) /*0x5f53f1*/
  {
    v3 = (*(int (__thiscall **)(#374 *))(this->parachute)(this); /*0x5f53fc*/
    *v27 = ComputeTechnoClassDamageFalloff(*v27, v29, *(_DWORD *)(v3 + 156), v28); /*0x5f5414*/
  }
  if ( this
    && (*(int (__thiscall **)(#374 *))(this->fallRate)(this) == 6
    && !*(_BYTE *)(*((*(int (__thiscall **)(#374 *))(this->fallRate)(this) == 6
                   ? (_DWORD *)((char *)this + 1312)
                   : (_DWORD *)1312)
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
    if ( v25 <= v5 ) /*0x5f54a6*/
    {
      *v27 = v25; /*0x5f54c2*/
    }
    else if ( v25 >= v2 >> 1 && v25 - v5 < v2 >> 1 ) /*0x5f54b6*/
    {
      v24 = 2; /*0x5f54b8*/
    }
    v8 = (double)v2 * *(double *)(MEMORY[0x87F7E8][7806] + 5896); /*0x5f54cd*/
    if ( (double)v25 > v8 && (double)(v25 - *v27) < v8 ) /*0x5f54f7*/
      v24 = 3; /*0x5f54f9*/
    v9 = v25 - *v27; /*0x5f5509*/
    this->health = v9; /*0x5f550d*/
    if ( v9 > 0 /*0x5f5542*/
      || (*(int (__thiscall **)(#374 *))(this->fallRate)(this) != 15
      || v31
      || !*(_BYTE *)(this->q1B0 + 3756)
      || *((_BYTE *)this + 1755) )
    {
      v13 = v24; /*0x5f55ea*/
    }
    else
    {
      v10 = (void **)__2_YAPAXI_Z(456); /*0x5f5555*/
      if ( v10 ) /*0x5f555f*/
      {
        v26[0] = this->q027; /*0x5f5574*/
        v26[1] = this->owningHouseIndex; /*0x5f557d*/
        v26[2] = this->q029; /*0x5f5589*/
        AnimClass::ctor(v10, *(void **)(MEMORY[0x87F7E8][7806] + 156), v26, 0, 1, (void *)0x600, 0, 0); /*0x5f559c*/
      }
      v11 = Math::RoundToInt((double)*(int *)(this->q1B0 + 160) * 0.25); /*0x5f55b3*/
      this->health = v11; /*0x5f55bb*/
      if ( v11 <= 1 ) /*0x5f55be*/
        v11 = 1; /*0x5f55c0*/
      v12 = *(_DWORD *)this; /*0x5f55c5*/
      this->health = v11; /*0x5f55cf*/
      *((_BYTE *)this + 1755) = 1; /*0x5f55d2*/
      (*(void (__thiscall **)(#374 *, int, int, _DWORD))(v12 + 1368))(this, 6, 1, 0); /*0x5f55d9*/
      v13 = 3; /*0x5f55df*/
      v24 = 3; /*0x5f55e4*/
    }
    v32 = this->health; /*0x5f55f8*/
    if ( v13 == 2 ) /*0x5f55fc*/
    {
      if ( v30 ) /*0x5f5600*/
      {
        v14 = (void **)this->attachedTag; /*0x5f5602*/
        if ( v14 ) /*0x5f5607*/
          TeamClass::Update_0(v14, 39, (int)this, dword_A8ED54[51587], 0, 0); /*0x5f5617*/
      }
      if ( !this->isAliveFlag ) /*0x5f5624*/
        return 5; /*0x5f5624*/
      v15 = (void **)this->attachedTag; /*0x5f562a*/
      if ( v15 ) /*0x5f562f*/
        TeamClass::Update_0(v15, 42, (int)this, dword_A8ED54[51587], 0, 0); /*0x5f563e*/
    }
    if ( this->isAliveFlag ) /*0x5f5643*/
    {
      if ( v13 == 3 ) /*0x5f5654*/
      {
        if ( v30 ) /*0x5f5658*/
        {
          v16 = (void **)this->attachedTag; /*0x5f565a*/
          if ( v16 ) /*0x5f565f*/
            TeamClass::Update_0(v16, 40, (int)this, dword_A8ED54[51587], 0, 0); /*0x5f566f*/
        }
        if ( !this->isAliveFlag ) /*0x5f567c*/
          return 5; /*0x5f567c*/
        v17 = (void **)this->attachedTag; /*0x5f5682*/
        if ( v17 ) /*0x5f5687*/
          TeamClass::Update_0(v17, 43, (int)this, dword_A8ED54[51587], 0, 0); /*0x5f5696*/
      }
      if ( this->isAliveFlag ) /*0x5f569b*/
      {
        if ( this->health != v25 /*0x5f56d6*/
          && (*(int (__thiscall **)(#374 *))(this->parachute)(this)
          && v25 == *(_DWORD *)((*(int (__thiscall **)(#374 *))(this->parachute)(this) + 160) )
        {
          if ( v30 ) /*0x5f56da*/
          {
            v18 = (void **)this->attachedTag; /*0x5f56dc*/
            if ( v18 ) /*0x5f56e1*/
              TeamClass::Update_0(v18, 38, (int)this, dword_A8ED54[51587], 0, 0); /*0x5f56f1*/
          }
          v19 = (void **)this->attachedTag; /*0x5f56f6*/
          if ( v19 && this->isAliveFlag ) /*0x5f56fd*/
            TeamClass::Update_0(v19, 41, (int)this, dword_A8ED54[51587], 0, 0); /*0x5f5714*/
          v20 = (void **)this->attachedTag; /*0x5f5719*/
          if ( v20 ) /*0x5f571e*/
          {
            if ( !this->isAliveFlag ) /*0x5f5728*/
              return 5; /*0x5f5728*/
            if ( v30 ) /*0x5f5730*/
              TeamClass::Update_0(v20, 41, (int)this, dword_A8ED54[51587], 0, v30); /*0x5f573f*/
          }
        }
        if ( this->isAliveFlag && (v32 <= 0 || *((int *)this + 27) > 0) ) /*0x5f575f*/
        {
          v21 = 0; /*0x5f5768*/
          if ( !this->health ) /*0x5f5765*/
          {
            if ( v30 ) /*0x5f5770*/
              v21 = *(_DWORD *)(v30 + 540); /*0x5f5772*/
            if ( !v33 || v30 && v33 == v21 ) /*0x5f5786*/
              (*(void (__thiscall **)(#374 *, int))(this->q0E0)(this, v30); /*0x5f579a*/
            else
              (*(void (__thiscall **)(#374 *, int))(this->q0E4)(this, v33); /*0x5f578d*/
            v13 = 4; /*0x5f57a2*/
            v24 = 4; /*0x5f57ab*/
            (*(void (__thiscall **)(#374 *, int))(this->q0DC)(this, 1); /*0x5f57af*/
          }
          if ( this->isAliveFlag ) /*0x5f57b5*/
          {
            if ( v30 ) /*0x5f57c1*/
            {
              v22 = (void **)this->attachedTag; /*0x5f57c3*/
              if ( v22 ) /*0x5f57c8*/
              {
                if ( v13 != 4 ) /*0x5f57cd*/
                  TeamClass::Update_0(v22, 6, (int)this, dword_A8ED54[51587], 0, v30); /*0x5f57db*/
              }
            }
            if ( this->isAliveFlag ) /*0x5f57e0*/
            {
              if ( v30 ) /*0x5f57ec*/
              {
                v23 = (void **)this->attachedTag; /*0x5f57ee*/
                if ( v23 ) /*0x5f57f3*/
                {
                  if ( v13 != 4 ) /*0x5f57f8*/
                    TeamClass::Update_0(v23, 44, (int)this, dword_A8ED54[51587], 0, v30); /*0x5f5807*/
                }
              }
              if ( this->isAliveFlag && this->isSelected ) /*0x5f581a*/
                (*(void (__thiscall **)(#374 *, int))(this->q124)(this, 2); /*0x5f582a*/
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
    (*(void (__thiscall **)(#374 *, int))(this->__pad_148)(this, 7); /*0x5f5486*/
  return 0; /*0x5f545c*/
}


// ==== 0x005F5850  ObjectClass::UpdateProductionDisplay  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::UpdateProductionDisplay(#374 *this)
{
  int result; // eax
  int v3; // ebx
  int v4; // edi
  int v5; // edx
  int v6; // [esp+Ch] [ebp+4h] BYREF

  if ( !this->inLimbo ) /*0x5f5854*/
  {
    v3 = v6; /*0x5f5862*/
    if ( v6 == 2 ) /*0x5f5869*/
    {
      if ( !this->needsRedraw && this->isOnMap ) /*0x5f5879*/
      {
        result = (*(int (__thiscall **)(#374 *))(this->q134)(this); /*0x5f5886*/
        LOBYTE(result) = 1; /*0x5f588d*/
        return result; /*0x5f5890*/
      }
    }
    else
    {
      if ( (*(int (__thiscall **)(#374 *))(this->fallRate)(this) != 6 /*0x5f58b2*/
        || (result = this->__pad_148, !*(_DWORD *)(result + 3672))
        || v3 )
      {
        result = (int)AbstractClass::IsTechnoType(this); /*0x5f58b6*/
        v4 = result; /*0x5f58bb*/
        if ( result ) /*0x5f58bf*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)result + 704))(result); /*0x5f58c5*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 56))(v4); /*0x5f58cf*/
          result = (*(int (__thiscall **)(#374 *, int *))(this->q6E0)(this, &v6); /*0x5f58db*/
        }
      }
      if ( (v3 == 1 || v3 == 3) && !this->isOnMap ) /*0x5f58ec*/
      {
        v5 = *(_DWORD *)this; /*0x5f58f3*/
        this->isOnMap = 1; /*0x5f58f7*/
        result = (*(int (__thiscall **)(#374 *))(v5 + 308))(this); /*0x5f58fb*/
        LOBYTE(result) = 1; /*0x5f5902*/
        return result; /*0x5f5905*/
      }
      if ( !v3 && this->isOnMap ) /*0x5f590c*/
      {
        this->isOnMap = 0; /*0x5f5913*/
        LOBYTE(result) = 1; /*0x5f5917*/
        return result; /*0x5f591a*/
      }
    }
  }
  LOBYTE(result) = 0; /*0x5f591e*/
  return result; /*0x5f588c*/
}


// ==== 0x005F5930  ObjectClass::IsNotNull  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::IsNotNull(#374 *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return v2 != 0; /*0x5f593b*/
}


// ==== 0x005F5940  IUnknown::ParachuteDrop  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::ParachuteDrop(#374 *this)
{
  IUnknown *v1; // edi
  int result; // eax
  int v4; // ebp
  IUnknown *v5; // ecx
  IUnknown *v6; // edx
  int v7; // eax
  AnimClass *v8; // edi
  AnimClass *v9; // eax
  int v10; // ecx
  int v11; // edi
  IUnknown *TileIndex; // [esp-10h] [ebp-28h]
  IUnknown *v13; // [esp-Ch] [ebp-24h]
  CoordStruct aP2; // [esp+Ch] [ebp-Ch] BYREF
  IUnknown aP1; // [esp+1Ch] [ebp+4h] BYREF

  v1 = (IUnknown *)aP1.field_0; /*0x5f5946*/
  if ( IsCoordVisibleMap(&MEMORY[0x87F7E8], (IUnknown *)aP1.field_0) ) /*0x5f5952*/
  {
    *((_BYTE *)this + 141) = 1; /*0x5f5965*/
    result = (int)Coord::To_Cell(&MEMORY[0x87F7E8], v1); /*0x5f596c*/
    v4 = result; /*0x5f5971*/
    if ( result ) /*0x5f5975*/
    {
      if ( (*(_DWORD *)(result + 320) & 0x100) == 0 /*0x5f5996*/
        || (this->q08C = 1, result = *(_DWORD *)(result + 320), (result & 0x200) != 0) )
      {
        if ( !this ) /*0x5f599e*/
          goto LABEL_23; /*0x5f599e*/
        LOBYTE(aP1.field_0) = this->q005 & 1; /*0x5f59a9*/
        if ( !LOBYTE(aP1.field_0) /*0x5f5a26*/
          || (v5 = *(IUnknown **)((*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 132))(this) + 1460),
              LOWORD(aP1.field_0) = v1->field_0 / 256,
              v13 = v5,
              v6 = (IUnknown *)*((unsigned __int8 *)this + 140),
              HIWORD(aP1.field_0) = v1->field_4 / 256,
              TileIndex = (IUnknown *)MapClass::GetTileIndex(&MEMORY[0x87F7E8], &aP1, v5, v6),
              v7 = (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 132))(this),
              Cell::IsBuildable(v4, *(_DWORD *)(v7 + 1660), 0, 0, TileIndex, v13, (IUnknown *)0xFFFFFFFF, (IUnknown *)1)) )
        {
LABEL_23:
          result = (*(int (__thiscall **)(#374 *, IUnknown *, int))(*(_DWORD *)this + 216))(this, v1, 128); /*0x5f5a3d*/
          if ( (_BYTE)result ) /*0x5f5a45*/
          {
            (*(void (__thiscall **)(#374 *, IUnknown *))(*(_DWORD *)this + 436))(this, v1); /*0x5f5a50*/
            if ( (*(int (__thiscall **)(#374 *))(this->q02C)(this) == 8 ) /*0x5f5a60*/
            {
              result = __2_YAPAXI_Z(0x1C8u); /*0x5f5a67*/
              if ( !result ) /*0x5f5a71*/
              {
LABEL_19:
                LOBYTE(result) = 1; /*0x5f5b36*/
                return result; /*0x5f5b3e*/
              }
              result = (int)AnimClass::ctor( /*0x5f5a94*/
                              (void **)result,
                              *(CoordStruct **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3000),
                              (CoordStruct *)v1,
                              0,
                              (CoordStruct *)1,
                              (void *)0x600,
                              0,
                              0);
              v8 = (AnimClass *)result; /*0x5f5a99*/
            }
            else
            {
              v9 = (AnimClass *)v1->field_0; /*0x5f5a9d*/
              v10 = v1->field_4; /*0x5f5a9f*/
              v11 = v1->field_8 + 75; /*0x5f5aaa*/
              aP2.X = (int)v9; /*0x5f5aad*/
              aP2.Y = v10; /*0x5f5ab1*/
              aP2.Z = v11; /*0x5f5ab5*/
              result = __2_YAPAXI_Z(0x1C8u); /*0x5f5ab9*/
              if ( result ) /*0x5f5ac3*/
              {
                result = (int)AnimClass::ctor( /*0x5f5ae6*/
                                (void **)result,
                                *(CoordStruct **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3004),
                                &aP2,
                                0,
                                (CoordStruct *)1,
                                (void *)0x600,
                                0,
                                0);
                v8 = (AnimClass *)result; /*0x5f5aeb*/
              }
              else
              {
                v8 = 0; /*0x5f5aef*/
              }
              this->q088 = v8; /*0x5f5af1*/
            }
            if ( v8 ) /*0x5f5af9*/
            {
              BuildingClass::AimTurret(v8, (IUnknown *)this); /*0x5f5afe*/
              result = (*(int (__thiscall **)(#374 *))(this->q02C)(this); /*0x5f5b07*/
              if ( result != 8 ) /*0x5f5b0d*/
              {
                v8->field_D4 = (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 484))(this); /*0x5f5b19*/
                result = (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 444))(this); /*0x5f5b23*/
                v8->field_FC = *(__int16 *)(result + 266); /*0x5f5b30*/
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


// ==== 0x005F5B50  ObjectClass::SetReference  this=IUnknown  sig=csp ====
char __thiscall ObjectClass_SetReference(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = this->q034; /*0x5f5b50*/
  if ( v2 ) /*0x5f5b55*/
  {
    --*(_DWORD *)(v2 + 44); /*0x5f5b5b*/
    this->q034 = 0; /*0x5f5b5e*/
  }
  if ( !a2 ) /*0x5f5b6b*/
    return 0; /*0x5f5b7c*/
  this->q034 = a2; /*0x5f5b6d*/
  ++*(_DWORD *)(a2 + 44); /*0x5f5b74*/
  return 1; /*0x5f5b79*/
}


// ==== 0x005F5B90  ObjectClass::GetOrCreateResHandle  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetOrCreateResHandle(#374 *this)
{
  int v3; // eax
  int v4; // [esp+Ch] [ebp+4h]

  if ( (MEMORY[0xAC1398] & 1) == 0 ) /*0x5f5b9e*/
  {
    MEMORY[0xAC1398] |= 1u; /*0x5f5bbc*/
    MEMORY[0xAC139C] = 2147450879; /*0x5f5bc2*/
    atexit(nullsub_205); /*0x5f5bc7*/
  }
  if ( !(*(int (__thiscall **)(#374 *))(this->parachute)(this) ) /*0x5f5bd3*/
    return (int)&MEMORY[0xAC139C]; /*0x5f5bdd*/
  v3 = (*(int (__thiscall **)(#374 *))(this->parachute)(this); /*0x5f5beb*/
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 144))(v3, v4); /*0x5f5be2*/
}


// ==== 0x005F5C10  nullsub_205  this=-  sig=ida-proto ====
void __cdecl nullsub_205()
{
  ; /*0x5f5c10*/
}


// ==== 0x005F5C20  IUnknown::Fire  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::Fire(#374 *this)
{
  int *v2; // edi
  int v3; // ebx
  int v5; // [esp-4h] [ebp-10h]
  int v6; // [esp+10h] [ebp+4h]
  int v7; // [esp+14h] [ebp+8h]

  v2 = (int *)(*(int (__thiscall **)(#374 *))(this->q088)(this); /*0x5f5c2f*/
  v3 = *v2; /*0x5f5c33*/
  v5 = (*(int (__thiscall **)(#374 *))(this->q03C)(this); /*0x5f5c3c*/
  return (*(int (__thiscall **)(int *, int, int, _DWORD, int))(v3 + 148))(v2, v6, v7, 0, v5); /*0x5f5c4d*/
}


// ==== 0x005F5C60  BuildingClass::GetHealthRatio  this=IUnknown  sig=csp ====
double __thiscall BuildingClass_GetHealthRatio(int *this)
{
  double v2; // [esp+0h] [ebp-8h]

  v2 = (double)this->q06C; /*0x5f5c68*/
  return v2 / (double)*(int *)((*(int (__thiscall **)(int *))(*this + 136))(this) + 160); /*0x5f5c7c*/
}


// ==== 0x005F5CD0  BuildingClass::IsHealthLow  this=IUnknown  sig=csp ====
BOOL __thiscall BuildingClass::IsHealthLow(int *this)
{
  double v3; // [esp+4h] [ebp-8h]

  v3 = (double)this->q06C; /*0x5f5cdb*/
  return v3 / (double)*(int *)((*(int (__thiscall **)(int *))(*this + 136))(this) + 160) <= *(double *)(MEMORY[0x87F7E8][7806] + 5896) /*0x5f5d0e*/
      && this->q06C > 0;
}


// ==== 0x005F5D20  ObjectClass::IsYellowHP  this=TechnoClass  sig=csp ====
BOOL __thiscall ObjectClass::IsYellowHP(int *this)
{
  BOOL result; // eax
  double v3; // [esp+4h] [ebp-8h]
  double v4; // [esp+4h] [ebp-8h]

  v3 = (double)this->health; /*0x5f5d2b*/
  result = 0; /*0x5f5d89*/
  if ( v3 / (double)*(int *)((*(int (__thiscall **)(int *))(*this + 136))(this) + 160) > *(double *)&MEMORY[0x8871E0][1].? ) /*0x5f5d50*/
  {
    v4 = (double)this->health; /*0x5f5d59*/
    if ( v4 / (double)*(int *)((*(int (__thiscall **)(int *))(*this + 136))(this) + 160) <= *(double *)&MEMORY[0x8871E0][1].? ) /*0x5f5d7d*/
      return 1; /*0x5f5d50*/
  }
  return result; /*0x5f5d84*/
}


// ==== 0x005F5D90  ObjectClass::IsGreenHP  this=ObjectClass  sig=csp ====
BOOL __thiscall ObjectClass::IsGreenHP(int *this)
{
  double v2; // [esp+0h] [ebp-8h]

  v2 = (double)this->health; /*0x5f5d98*/
  return v2 / (double)*(int *)((*(int (__thiscall **)(int *))(*this + 136))(this) + 160) > *(double *)&MEMORY[0x8871E0][1].?; /*0x5f5dc4*/
}


// ==== 0x005F5DD0  BuildingClass::GetSellPriority  this=ObjectClass  sig=csp ====
int __thiscall BuildingClass_GetSellPriority(int *this)
{
  int result; // eax
  double v3; // st7
  double v4; // [esp+4h] [ebp-8h]
  double v5; // [esp+4h] [ebp-8h]
  double v6; // [esp+4h] [ebp-8h]

  v4 = (double)this->health; /*0x5f5ddb*/
  if ( v4 / (double)*(int *)((*(int (__thiscall **)(int *))(*this + 136))(this) + 160) <= *((double *)MEMORY[0x8871E0] /*0x5f5e07*/
                                                                                          + 737)
    && this->health > 0 )
  {
    return 0; /*0x5f5e09*/
  }
  v5 = (double)this->health; /*0x5f5e17*/
  if ( v5 / (double)*(int *)((*(int (__thiscall **)(int *))(*this + 136))(this) + 160) <= *((double *)MEMORY[0x8871E0] /*0x5f5e3b*/
                                                                                          + 737) )
    return 2; /*0x5f5e3b*/
  v6 = (double)this->health; /*0x5f5e44*/
  v3 = v6 / (double)*(int *)((*(int (__thiscall **)(int *))(*this + 136))(this) + 160); /*0x5f5e59*/
  result = 1; /*0x5f5e68*/
  if ( v3 > *((double *)MEMORY[0x8871E0] + 736) ) /*0x5f5e6d*/
    return 2; /*0x5f5e6f*/
  return result; /*0x5f5e0b*/
}


// ==== 0x005F5E80  ObjectClass::SaveLoad_Register  this=ObjectClass  sig=csp ====
int __thiscall BuildingClass::SaveLoad_Register(#374 *this)
{
  int result; // eax
  int *v2; // [esp+8h] [ebp+4h]
  int v3; // [esp+Ch] [ebp+8h]

  result = AbstractClass::SaveLoad_Prefix_0(v2, v3); /*0x5f5e8b*/
  if ( result >= 0 ) /*0x5f5e92*/
  {
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v2 + 12); /*0x5f5e9d*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v2 + 13); /*0x5f5eab*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v2 + 14); /*0x5f5eb9*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v2 + 6); /*0x5f5ec7*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v2 + 34); /*0x5f5ed8*/
    AudioController::Init(v2 + 15); /*0x5f5ee0*/
    AudioController::Init(v2 + 20); /*0x5f5ee8*/
    v2[42] = 0; /*0x5f5eed*/
    return 0; /*0x5f5ef7*/
  }
  return result; /*0x5f5ef9*/
}


// ==== 0x005F5F00  ObjectClass::GetLandHeight  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass_GetLandHeight(_BYTE *this)
{
  return *(char *)((*(int (__thiscall **)(_BYTE *))(this->q1BC)(this) + 283) + (this->onBridge != 0 ? 4 : 0);
}


// ==== 0x005F5F30  ObjectClass::GetMember41  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetMember41(#374 *this)
{
  return this->q029; /*0x5f5f36*/
}


// ==== 0x005F5F40  IUnknown::GetZAboveGround  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetZAboveGround(#374 *this)
{
  int v2; // ecx
  _DWORD v4[3]; // [esp+4h] [ebp-Ch] BYREF

  v4[0] = this->q09C; /*0x5f5f52*/
  v4[1] = this->q028; /*0x5f5f63*/
  v4[2] = this->q0A4; /*0x5f5f6a*/
  v2 = this->q0A4 - Cell::GetGroundHeight(v4); /*0x5f5f79*/
  if ( this->q08C ) /*0x5f5f7b*/
    v2 -= MEMORY[0xAC13BC]; /*0x5f5f86*/
  return v2; /*0x5f5f83*/
}


// ==== 0x005F5FA0  IUnknown::SetZ  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::SetZ(#374 *this)
{
  int v2; // edi
  int result; // eax
  int v4; // [esp+8h] [ebp-Ch] BYREF
  int v5; // [esp+Ch] [ebp-8h]
  int v6; // [esp+10h] [ebp-4h]
  int v7; // [esp+18h] [ebp+4h]

  v2 = v7; /*0x5f5fa7*/
  if ( this->q08C ) /*0x5f5fab*/
    v2 = MEMORY[0xAC13BC] + v7; /*0x5f5fb5*/
  if ( this->q01D ) /*0x5f5fbb*/
  {
    (*(void (__thiscall **)(#374 *, _DWORD))(this->q049)(this, 0); /*0x5f5fc8*/
    v4 = this->q09C; /*0x5f5fda*/
    v5 = this->q028; /*0x5f5fe6*/
    v6 = this->q0A4; /*0x5f5fed*/
    this->q0A4 = v2 + Cell::GetGroundHeight(&v4); /*0x5f5fff*/
    return (*(int (__thiscall **)(#374 *, int))(this->q049)(this, 1); /*0x5f6009*/
  }
  else
  {
    v4 = this->q09C; /*0x5f6023*/
    v5 = this->q028; /*0x5f602f*/
    v6 = this->q0A4; /*0x5f6036*/
    result = v2 + Cell::GetGroundHeight(&v4); /*0x5f6044*/
    this->q0A4 = result; /*0x5f6047*/
  }
  return result; /*0x5f600f*/
}


// ==== 0x005F6060  ObjectClass::SetAnim  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::SetAnim(_DWORD *this, IUnknown *aP1)
{
  AbstractClass *v3; // edx

  if ( this->q01D ) /*0x5f6063*/
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 292))(this, 0); /*0x5f606e*/
    v3 = (AbstractClass *)*this; /*0x5f6078*/
    this->q0A4 = aP1; /*0x5f607a*/
    return (*(int (__thiscall **)(_DWORD *, int))&v3[8].__pad_0[4])(this, 1); /*0x5f6084*/
  }
  else
  {
    this->q0A4 = aP1; /*0x5f6092*/
    return (int)aP1; /*0x5f608e*/
  }
}


// ==== 0x005F60A0  ObjectClass::SetCellOverlayFlag  this=ObjectClass  sig=csp ====
int __thiscall MapClass::SetCellOverlayFlag(#374 *this)
{
  _DWORD *v1; // eax
  int v2; // ecx
  int result; // eax
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // [esp+8h] [ebp+4h]

  if ( MEMORY[0xAC13BC] + Cell::GetGroundHeight(v6) <= v6[2] /*0x5f60d3*/
    && (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v6) + 80) & 0x100) != 0 )
  {
    v1 = Coord::To_Cell(&MEMORY[0x87F7E8], v6); /*0x5f60db*/
    v2 = v1[74]; /*0x5f60e0*/
    result = (int)(v1 + 74); /*0x5f60e6*/
    *(_DWORD *)result = v2 | 0x40; /*0x5f60ef*/
  }
  else
  {
    v4 = Coord::To_Cell(&MEMORY[0x87F7E8], v6); /*0x5f60fa*/
    v5 = v4[73]; /*0x5f60ff*/
    result = (int)(v4 + 73); /*0x5f6105*/
    *(_DWORD *)result = v5 | 0x40; /*0x5f610e*/
  }
  return result; /*0x5f60ee*/
}


// ==== 0x005F6120  ObjectClass::ClearCellOverlayFlag  this=ObjectClass  sig=csp ====
int __thiscall MapClass::ClearCellOverlayFlag(#374 *this)
{
  _DWORD *v1; // eax
  int v2; // ecx
  int result; // eax
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // [esp+8h] [ebp+4h]

  if ( MEMORY[0xAC13BC] + Cell::GetGroundHeight(v6) <= v6[2] /*0x5f6153*/
    && (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v6) + 80) & 0x100) != 0 )
  {
    v1 = Coord::To_Cell(&MEMORY[0x87F7E8], v6); /*0x5f615b*/
    v2 = v1[74]; /*0x5f6160*/
    result = (int)(v1 + 74); /*0x5f6166*/
    *(_DWORD *)result = v2 & 0xFFFFFFBF; /*0x5f616f*/
  }
  else
  {
    v4 = Coord::To_Cell(&MEMORY[0x87F7E8], v6); /*0x5f617a*/
    v5 = v4[73]; /*0x5f617f*/
    result = (int)(v4 + 73); /*0x5f6185*/
    *(_DWORD *)result = v5 & 0xFFFFFFBF; /*0x5f618e*/
  }
  return result; /*0x5f616e*/
}


// ==== 0x005F61A0  ObjectTypeClass::ReleaseWaveAndString  this=ObjectTypeClass  sig=csp ====
void __thiscall ObjectTypeClass_ReleaseWaveAndString(int *this)
{
  void *v2; // edi
  void **v3; // edi

  v2 = (void *)*this; /*0x5f61a4*/
  if ( *this ) /*0x5f61a4*/
  {
    WaveClass::Destroy(*this); /*0x5f61ac*/
    __3_YAXPAX_Z(v2); /*0x5f61b2*/
  }
  v3 = (void **)this->vtable2; /*0x5f61ba*/
  *this = 0; /*0x5f61bd*/
  if ( v3 ) /*0x5f61c5*/
  {
    String::Release(v3); /*0x5f61c9*/
    __3_YAXPAX_Z(v3); /*0x5f61cf*/
  }
  this->vtable2 = 0; /*0x5f61d7*/
}


// ==== 0x005F6220  DisplayClass::checkScreenBounds  this=DisplayClass  sig=csp ====
bool __thiscall sub_5F6220(void *this, int a2)
{
  int v3; // edi

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 184))(a2); /*0x5f6234*/
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 184))(this) > v3; /*0x5f623e*/
}


// ==== 0x005F6250  ObjectClass::ProcessPower  this=ObjectClass  sig=csp ====
int __thiscall HouseClass::ProcessPower(#374 *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
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
  int *v16; // [esp+Ch] [ebp+4h]

  AbstractClass::ProcessPower(this); /*0x5f6259*/
  v2 = this->vtable4; /*0x5f625e*/
  if ( v2 ) /*0x5f6263*/
  {
    v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(v2 + 4) + 16))(v2 + 4); /*0x5f626c*/
    Power::TimerProcess(v3); /*0x5f6272*/
  }
  v4 = this->attachedTag; /*0x5f6277*/
  if ( v4 ) /*0x5f627c*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(v4 + 4) + 16))(v4 + 4); /*0x5f6285*/
    Power::TimerProcess(v5); /*0x5f628b*/
  }
  Power::TimerProcess(this->health); /*0x5f6296*/
  LOBYTE(v6) = this->isOnMap; /*0x5f629b*/
  Power::FlagProcess(v16, v6); /*0x5f62a1*/
  if ( !MEMORY[0xA8B238][0] || MEMORY[0xA8B238][0] == 5 ) /*0x5f62b2*/
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
  Power::TimerProcess(this->q027); /*0x5f632d*/
  Power::TimerProcess(this->owningHouseIndex); /*0x5f633b*/
  return Power::TimerProcess(this->q029); /*0x5f634e*/
}


// ==== 0x005F6360  ObjectClass::DistanceTo  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::DistanceTo(void *this, AbstractClass *aP1)
{
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  double v6; // st7
  int v7; // ebx
  int v8; // eax
  AbstractClass *v9; // esi
  int FoundationHeight; // edi
  int v11; // [esp+20h] [ebp-20h]
  int v12; // [esp+24h] [ebp-1Ch]
  _BYTE v13[12]; // [esp+28h] [ebp-18h] BYREF
  _BYTE v14[12]; // [esp+34h] [ebp-Ch] BYREF

  if ( !aP1 ) /*0x5f636d*/
    return 0; /*0x5f6370*/
  v4 = (_DWORD *)(*(int (__thiscall **)(AbstractClass *, _BYTE *))(*(_DWORD *)aP1->__pad_0 + 72))(aP1, v13); /*0x5f6388*/
  v5 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(this->q012)(this, v14); /*0x5f6391*/
  v11 = v5[1] - v4[1]; /*0x5f63ae*/
  v12 = v5[2] - v4[2]; /*0x5f63b2*/
  v6 = Math::Sqrt((double)(*v5 - *v4) * (double)(*v5 - *v4) + (double)v12 * (double)v12 + (double)v11 * (double)v11); /*0x5f63de*/
  v7 = Math::RoundToInt(v6); /*0x5f63ef*/
  v8 = (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1); /*0x5f63f1*/
  v9 = v8 == 6 ? aP1 : 0;
  if ( v9 )
  {
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(*(v8 == 6 ? &aP1[36].uniqueId : (int *)1312), 0);
    v7 += -64 * (BuildingTypeClass::GetFoundationWidth((_DWORD *)v9[36].uniqueId) + FoundationHeight); /*0x5f6424*/
    if ( v7 < 0 ) /*0x5f6426*/
      return 0; /*0x5f6428*/
  }
  return v7; /*0x5f636f*/
}


// ==== 0x005F6440  ObjectClass::ComputeDistance  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::ComputeDistance(void *this, TechnoClass *aP1)
{
  int *v4; // eax
  int v5; // ebx
  int v6; // ebp
  _DWORD *v7; // eax
  double v8; // st7
  BuildingTypeClass *v9; // ebx
  int v10; // eax
  TechnoClass *v11; // esi
  BuildingTypeClass *FoundationHeight; // edi
  _BYTE v13[12]; // [esp+28h] [ebp-18h] BYREF
  _BYTE v14[12]; // [esp+34h] [ebp-Ch] BYREF

  if ( !aP1 ) /*0x5f644d*/
    return 0; /*0x5f6450*/
  v4 = (int *)(*(int (__thiscall **)(TechnoClass *, _BYTE *))(*(_DWORD *)aP1->__pad_0 + 72))(aP1, v13); /*0x5f6464*/
  v5 = *v4; /*0x5f6467*/
  v6 = v4[1]; /*0x5f6469*/
  v7 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(this->q048)(this, v14); /*0x5f6475*/
  v8 = Math::Sqrt((double)(*v7 - v5) * (double)(*v7 - v5) + (double)(v7[1] - v6) * (double)(v7[1] - v6)); /*0x5f64a5*/
  v9 = (BuildingTypeClass *)Math::RoundToInt(v8); /*0x5f64b6*/
  v10 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1); /*0x5f64b8*/
  v11 = v10 == 6 ? aP1 : 0;
  if ( v11 )
  {
    FoundationHeight = (BuildingTypeClass *)BuildingTypeClass::GetFoundationHeight(
                                              *(_DWORD *)(v10 == 6 ? &aP1[1] : (TechnoClass *)1312)->__pad_0,
                                              0);
    v9 = (BuildingTypeClass *)((char *)v9 /*0x5f64eb*/
                             - 64
                             * ((_DWORD)FoundationHeight
                              + BuildingTypeClass::GetFoundationWidth(*(_DWORD **)v11[1].__pad_0)));
    if ( (int)v9 < 0 ) /*0x5f64ed*/
      return 0; /*0x5f64ef*/
  }
  return (int)v9->vtable0; /*0x5f644f*/
}


// ==== 0x005F6500  BuildingClass::SquaredDistanceTo  this=FootClass  sig=csp ====
int __thiscall sub_5F6500(void *this, int *a2)
{
  int *v3; // eax
  int v4; // esi
  int v5; // edx
  int v6; // edi
  _DWORD *v7; // edx
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x5f650a*/
    return 0; /*0x5f650c*/
  v3 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(this->q048)(this, v8); /*0x5f651e*/
  v4 = *v3; /*0x5f6521*/
  v5 = *a2; /*0x5f6523*/
  v6 = v3[1]; /*0x5f6527*/
  v8[2] = v3[2]; /*0x5f652d*/
  v7 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(v5 + 72))(a2, v8); /*0x5f6539*/
  return (v4 - *v7) * (v4 - *v7) + (v6 - v7[1]) * (v6 - v7[1]); /*0x5f650e*/
}


// ==== 0x005F6560  Math::DistSq2D  this=TechnoClass  sig=csp ====
int __thiscall Math::DistSq2D(void *this, TechnoClass *aP1)
{
  int *v2; // edx
  int v3; // eax
  int v4; // ecx
  _BYTE v6[8]; // [esp+4h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-4h]

  v2 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(this->q048)(this, v6); /*0x5f656e*/
  v3 = *v2; /*0x5f6574*/
  v4 = v2[1]; /*0x5f6576*/
  v7 = v2[2]; /*0x5f657c*/
  return (v3 - *(_DWORD *)aP1->__pad_0) * (v3 - *(_DWORD *)aP1->__pad_0) /*0x5f658b*/
       + (v4 - *(_DWORD *)&aP1->__pad_0[4]) * (v4 - *(_DWORD *)&aP1->__pad_0[4]);
}


// ==== 0x005F65A0  ObjectClass::GetCoords  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetCoords(#374 *this)
{
  int *v2; // ecx
  CoordStruct *out; // [esp+8h] [ebp+4h]

  v2 = (int *)((char *)this + 156); /*0x5f65a4*/
  out->X = *v2; /*0x5f65af*/
  out->Y = v2[1]; /*0x5f65b4*/
  out->Z = v2[2]; /*0x5f65bb*/
  return (int)out; /*0x5f65b7*/
}


// ==== 0x005F65D0  IUnknown::DelegateVt69  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::DelegateVt69(#374 *this)
{
  int v2; // [esp+4h] [ebp+4h]
  int v3; // [esp+8h] [ebp+8h]

  return (*(int (__thiscall **)(#374 *, int, int))(*(_DWORD *)this + 276))(this, v2, v3); /*0x5f65e2*/
}


// ==== 0x005F65F0  ObjectClass::Destroy  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::Destroy(#374 *this)
{
  int v2; // ecx
  int result; // eax

  v2 = this->attachedBomb; /*0x5f65f3*/
  if ( v2 ) /*0x5f65f8*/
    ObjectClass::CleanupAudioAndRefs(v2); /*0x5f65fa*/
  if ( this && (this->abstractFlags & 1) != 0 ) /*0x5f6607*/
    TechnoClass::CleanupAll(this, 0); /*0x5f660d*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x5f6616*/
  (*(void (__thiscall **)(#374 *))(this->q0D4)(this); /*0x5f661f*/
  this->isAliveFlag = 0; /*0x5f6625*/
  result = MEMORY[0xB0F6A0]; /*0x5f662c*/
  if ( MEMORY[0xB0F6A8] < MEMORY[0xB0F6A0] /*0x5f6666*/
    || (MEMORY[0xB0F6A5] || !MEMORY[0xB0F6A0])
    && MEMORY[0xB0F6AC] > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F698] + 8))(
                   &MEMORY[0xB0F698],
                   MEMORY[0xB0F6A0] + MEMORY[0xB0F6AC],
                   0),
        (_BYTE)result) )
  {
    result = MEMORY[0xB0F6A8]++; /*0x5f666e*/
    *((_DWORD *)MEMORY[0xB0F69C] + result) = this; /*0x5f667d*/
  }
  return result; /*0x5f6680*/
}


// ==== 0x005F6690  IUnknown::IsActive  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::IsActive(#374 *this)
{
  return this->q024 == 0; /*0x5f669d*/
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
int __thiscall ObjectClass::SetPosition(#374 *this)
{
  _DWORD *v1; // ecx
  int result; // eax
  _DWORD *v3; // [esp+4h] [ebp+4h]

  v1 = (_DWORD *)((char *)this + 156); /*0x5f6944*/
  *v1 = *v3; /*0x5f694c*/
  v1[1] = v3[1]; /*0x5f6951*/
  result = v3[2]; /*0x5f6954*/
  v1[2] = result; /*0x5f6957*/
  return result; /*0x5f695a*/
}


// ==== 0x005F6960  IUnknown::GetCellCoords  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCellCoords(#374 *this)
{
  int *v1; // esi
  int v2; // ecx
  int v3; // eax
  int v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  v1 = (int *)((char *)this + 156); /*0x5f6964*/
  v5 = this->q09C; /*0x5f696e*/
  v6 = this->q028; /*0x5f697f*/
  v7 = this->q0A4; /*0x5f6986*/
  Coord::To_Cell(&MEMORY[0x87F7E8], &v5); /*0x5f698a*/
  v2 = v1[2]; /*0x5f6991*/
  v3 = v1[1]; /*0x5f6994*/
  v5 = *v1; /*0x5f6997*/
  v7 = v2; /*0x5f699f*/
  v6 = v3; /*0x5f69a9*/
  return (int)Coord::To_Cell(&MEMORY[0x87F7E8], &v5); /*0x5f69b2*/
}


// ==== 0x005F69C0  IUnknown::CoordToCell  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::CoordToCell(#374 *this)
{
  _DWORD *v1; // eax
  int v3; // [esp+8h] [ebp-10h]
  _BYTE v4[12]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v5; // [esp+1Ch] [ebp+4h]

  v1 = (_DWORD *)(*(int (__thiscall **)(#374 *, _BYTE *, _DWORD))(this->q04C)(this, v4, 0); /*0x5f69cc*/
  LOWORD(v3) = *v1 / 256; /*0x5f69df*/
  HIWORD(v3) = v1[1] / 256; /*0x5f69f3*/
  *v5 = v3; /*0x5f6a00*/
  return (int)v5; /*0x5f6a02*/
}


// ==== 0x005F6A10  IUnknown::GetCell  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCell(#374 *this)
{
  _DWORD *v1; // eax
  int v3; // [esp+8h] [ebp-14h]
  int v4; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v5[12]; // [esp+10h] [ebp-Ch] BYREF

  v1 = (_DWORD *)(*(int (__thiscall **)(#374 *, _BYTE *, _DWORD))(this->q04C)(this, v5, 0); /*0x5f6a1c*/
  LOWORD(v3) = *v1 / 256; /*0x5f6a2f*/
  HIWORD(v3) = v1[1] / 256; /*0x5f6a48*/
  v4 = v3; /*0x5f6a56*/
  return (int)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v4); /*0x5f6a5f*/
}


// ==== 0x005F6A70  IUnknown::CheckGroundHeightDiff  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::CheckGroundHeightDiff(#374 *this)
{
  char v2; // bl
  _DWORD *v3; // eax
  int GroundHeight; // edi
  int v5; // ebp
  int result; // eax
  _DWORD v7[3]; // [esp+10h] [ebp-18h] BYREF
  _DWORD v8[3]; // [esp+1Ch] [ebp-Ch] BYREF
  int v9; // [esp+2Ch] [ebp+4h]

  v2 = this->onBridge; /*0x5f6a7f*/
  v3 = (_DWORD *)(*(int (__thiscall **)(#374 *, _DWORD *, int))(this->q04C)(this, v8, v9); /*0x5f6a8d*/
  v7[0] = *v3; /*0x5f6a92*/
  v7[1] = v3[1]; /*0x5f6a9e*/
  v7[2] = v3[2]; /*0x5f6aaa*/
  GroundHeight = Cell::GetGroundHeight(v7); /*0x5f6ab9*/
  v8[0] = this->q027; /*0x5f6abd*/
  v8[1] = this->owningHouseIndex; /*0x5f6ac9*/
  v8[2] = this->q029; /*0x5f6ad5*/
  v5 = Cell::GetGroundHeight(v8); /*0x5f6ade*/
  if ( this->onBridge ) /*0x5f6ae0*/
  {
LABEL_5:
    result = MEMORY[0xAC13C8]; /*0x5f6b20*/
    goto LABEL_6; /*0x5f6b20*/
  }
  result = MEMORY[0xAC13C8]; /*0x5f6aea*/
  if ( v5 - GroundHeight > 3 * MEMORY[0xAC13C8] ) /*0x5f6af8*/
  {
    result = (int)Coord::To_Cell(&MEMORY[0x87F7E8], v7); /*0x5f6b04*/
    if ( (*(_DWORD *)(result + 320) & 0x100) != 0 ) /*0x5f6b12*/
    {
      LOBYTE(result) = 1; /*0x5f6b17*/
      return result; /*0x5f6b1d*/
    }
    goto LABEL_5; /*0x5f6b12*/
  }
LABEL_6:
  if ( this->onBridge && GroundHeight - v5 > 3 * result ) /*0x5f6b36*/
    LOBYTE(result) = 0; /*0x5f6b3b*/
  else
    LOBYTE(result) = v2; /*0x5f6b46*/
  return result; /*0x5f6b14*/
}


// ==== 0x005F6B50  IUnknown::COMStub_Return0_105  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_105(#374 *this)
{
  int result; // eax

  return result; /*0x5f6b50*/
}


// ==== 0x005F6B60  IUnknown::IsBelowScreen  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::IsBelowScreen(#374 *this)
{
  int result; // eax

  LOBYTE(result) = this->isOnMap /*0x5f6b7c*/
                && (result = (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 456))(this), result < 2 * MEMORY[0xAC13C8]);
  return result; /*0x5f6b7e*/
}


// ==== 0x005F6B90  IUnknown::IsHeightAboveThreshold  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::IsHeightAboveThreshold(#374 *this)
{
  int result; // eax

  LOBYTE(result) = this->isOnMap /*0x5f6bac*/
                && (result = (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 456))(this),
                    result >= 2 * MEMORY[0xAC13C8]);
  return result; /*0x5f6bae*/
}


// ==== 0x005F6BC0  ObjectClass::COMStub_Return0_33  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt33(#374 *this)
{
  return 0; /*0x5f6bc2*/
}


// ==== 0x005F6BD0  ObjectClass::GetBoundingSize  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetBoundingSize(#374 *this)
{
  int v2; // edi
  _BYTE v4[12]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v5[12]; // [esp+14h] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(#374 *, _BYTE *))(this->q0AC)(this, v4); /*0x5f6be8*/
  return *(_DWORD *)(*(int (__thiscall **)(#374 *, _BYTE *))(this->q0AC)(this, v5) + *(_DWORD *)(v2 + 4); /*0x5f6bfe*/
}


// ==== 0x005F6C10  IUnknown::IsAboveScreenMargin  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::IsAboveScreenMargin(#374 *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 456))(this); /*0x5f6c12*/
  LOBYTE(result) = result > -20; /*0x5f6c20*/
  return result; /*0x5f6c22*/
}


// ==== 0x005F6C30  IUnknown::IsPlayerOwnedAndCheck  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::IsPlayerOwnedAndCheck(#374 *this)
{
  int result; // eax

  if ( !(*(unsigned __int8 (__thiscall **)(#374 *, #375 *))(this->q0C8)(this, HouseClass_Player) /*0x5f6c56*/
    || (result = (*(int (__thiscall **)(#374 *, int))(this->q0D0)(this, 1)) != 0 )
  {
    result = (*(int (__thiscall **)(#374 *))(this->parachute)(this); /*0x5f6c60*/
    LOBYTE(result) = *(_BYTE *)(result + 560); /*0x5f6c66*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x5f6c58*/
  }
  return result; /*0x5f6c5a*/
}


// ==== 0x005F6C70  ObjectClass::COMStub_79  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt79(#374 *this)
{
  return (*(int (__thiscall **)(#374 *))(this->q138)(this);
}


// ==== 0x005F6C80  IUnknown::GetCoords_Alt  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCoords_Alt(#374 *this)
{
  _DWORD *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+14h] [ebp+4h]

  v1 = (_DWORD *)(*(int (__thiscall **)(#374 *, _BYTE *))(this->q012)(this, v3); /*0x5f6c8e*/
  *v4 = *v1; /*0x5f6c98*/
  v4[1] = v1[1]; /*0x5f6c9d*/
  v4[2] = v1[2]; /*0x5f6ca4*/
  return (int)v4; /*0x5f6ca0*/
}


// ==== 0x005F6CB0  ObjectClass::CheckFlagD0  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::CheckFlagD0(_DWORD *this, IUnknown *aP1)
{
  IUnknown *result; // eax

  result = aP1; /*0x5f6cb0*/
  this->customSound = aP1; /*0x5f6cb7*/
  if ( aP1 == (IUnknown *)-1 ) /*0x5f6cba*/
    return AudioFile::Stop(this + 20); /*0x5f6cbf*/
  return (int)result; /*0x5f6cc4*/
}


// ==== 0x005F6CD0  ObjectClass::IsCrushable  this=IUnknown  sig=csp ====
bool __thiscall ObjectClass::IsCrushable(_BYTE *this, AbstractClass *aP1)
{
  if ( aP1 /*0x5f6d2e*/
    && *(_BYTE *)((*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 3369)
    && this
    && (this->q005 & 1) != 0
    && !*(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 132))(this) + 3370)
    && (*(int (__thiscall **)(_BYTE *))(this->q02C)(this) != 6
    && !Object::IsAlliedWithObjectHouse(*(_DWORD **)aP1[15].__pad_0, (IUnknown *)this)
    && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(this->q160)(this) )
  {
    return 1; /*0x5f6d39*/
  }
  return *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(this->q088)(this) + 557) /*0x5f6d7b*/
      && this
      && (this->q005 & 1) != 0
      && !this->q2A4
      && !Object::IsAlliedWithObjectHouse(*(_DWORD **)aP1[15].__pad_0, (IUnknown *)this)
      && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(this->q160)(this);
}


// ==== 0x005F6DA0  ObjectClass::ResetPointerIfMatch  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::ResetPointerIfMatch(#374 *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp+4h]

  result = v2; /*0x5f6da0*/
  if ( v2 == this->parachute ) /*0x5f6dac*/
    this->parachute = 0; /*0x5f6dae*/
  return result; /*0x5f6db8*/
}


// ==== 0x005F6DC0  ObjectClass::CreateInstance  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::CreateInstance(#374 *this)
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
  MEMORY[0xAC13F0] = Math::Sqrt(v0 + v0); /*0x5f6dfe*/
}


// ==== 0x005F6E10  sub_5F6E10  this=-  sig=ida-proto ====
void sub_5F6E10()
{
  MEMORY[0xAC1468] = MEMORY[0xAC13F0] / 60.0; /*0x5f6e1c*/
}


// ==== 0x005F6E30  sub_5F6E30  this=-  sig=ida-proto ====
void sub_5F6E30()
{
  MEMORY[0xAC1448] = 1.0 / MEMORY[0xAC1468]; /*0x5f6e3c*/
}


// ==== 0x005F6E50  sub_5F6E50  this=-  sig=ida-proto ====
void sub_5F6E50()
{
  MEMORY[0xAC1440] = 0.0174532925199433 * 45.0; /*0x5f6e5c*/
}


// ==== 0x005F6E70  sub_5F6E70  this=-  sig=ida-proto ====
void sub_5F6E70()
{
  MEMORY[0xAC13F8] = 0.0174532925199433 * 60.0; /*0x5f6e7c*/
}


// ==== 0x005F6E90  sub_5F6E90  this=-  sig=ida-proto ====
void sub_5F6E90()
{
  MEMORY[0xAC13D0] = 0.0174532925199433 * 90.0; /*0x5f6e9c*/
}


// ==== 0x005F6EB0  sub_5F6EB0  this=-  sig=ida-proto ====
__int64 sub_5F6EB0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC13D0] - MEMORY[0xAC13F8]); /*0x5f6ec2*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC13F0] * 0.5); /*0x5f6ed6*/
  MEMORY[0xAC1474] = result; /*0x5f6edb*/
  return result; /*0x5f6ee0*/
}


// ==== 0x005F6EF0  sub_5F6EF0  this=-  sig=ida-proto ====
void sub_5F6EF0()
{
  MEMORY[0xAC1400] = Math::ArcTan((double)MEMORY[0xAC1474] * 0.00390625); /*0x5f6f07*/
}


// ==== 0x005F6F20  sub_5F6F20  this=-  sig=ida-proto ====
void sub_5F6F20()
{
  MEMORY[0xAC1430] = Math::ArcTan((double)(2 * MEMORY[0xAC1474]) / MEMORY[0xAC13F0]); /*0x5f6f42*/
}


// ==== 0x005F6F50  sub_5F6F50  this=-  sig=ida-proto ====
__int64 sub_5F6F50()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC1474]) + 0.5); /*0x5f6f6b*/
  MEMORY[0xAC1460] = result; /*0x5f6f70*/
  return result; /*0x5f6f76*/
}


// ==== 0x005F6F80  sub_5F6F80  this=-  sig=ida-proto ====
int sub_5F6F80()
{
  MEMORY[0xAC13E8] = 0; /*0x5f6f82*/
  MEMORY[0xAC13EA] = 0; /*0x5f6f88*/
  return 0; /*0x5f6f8e*/
}


// ==== 0x005F6F90  sub_5F6F90  this=-  sig=ida-proto ====
int sub_5F6F90()
{
  MEMORY[0xAC1408] = 0; /*0x5f6f92*/
  MEMORY[0xAC140C] = 0; /*0x5f6f97*/
  MEMORY[0xAC1410] = 0; /*0x5f6f9c*/
  return 0; /*0x5f6fa1*/
}


// ==== 0x005F6FB0  sub_5F6FB0  this=-  sig=ida-proto ====
int sub_5F6FB0()
{
  MEMORY[0xAC1458] = 0; /*0x5f6fb5*/
  MEMORY[0xAC1450] = 128; /*0x5f6fbf*/
  MEMORY[0xAC1454] = 128; /*0x5f6fc4*/
  return 128; /*0x5f6fc9*/
}


// ==== 0x005F6FD0  sub_5F6FD0  this=-  sig=ida-proto ====
int sub_5F6FD0()
{
  MEMORY[0xAC13D8] = 0; /*0x5f6fd2*/
  MEMORY[0xAC13DC] = 0; /*0x5f6fd7*/
  MEMORY[0xAC13E0] = 0; /*0x5f6fdc*/
  MEMORY[0xAC13E4] = 0; /*0x5f6fe1*/
  return 0; /*0x5f6fe6*/
}


// ==== 0x005F6FF0  sub_5F6FF0  this=-  sig=ida-proto ====
int sub_5F6FF0()
{
  MEMORY[0xAC141C] = 0; /*0x5f6ff7*/
  MEMORY[0xAC1420] = 0; /*0x5f6ffc*/
  MEMORY[0xAC1424] = 1; /*0x5f7001*/
  MEMORY[0xAC1425] = 0; /*0x5f7008*/
  MEMORY[0xAC1418] = (int)&vt_DynamicVectorClass_ObjectTypeClass; /*0x5f700d*/
  MEMORY[0xAC142C] = 10; /*0x5f7017*/
  MEMORY[0xAC1428] = 0; /*0x5f7021*/
  return atexit(sub_5F7030); /*0x5f702c*/
}


// ==== 0x005F7030  sub_5F7030  this=-  sig=ida-proto ====
void __cdecl sub_5F7030()
{
  if ( (MEMORY[0xAC1470] & 1) == 0 ) /*0x5f703a*/
  {
    MEMORY[0xAC1418] = (int)&vt_VectorClass_ObjectTypeClass; /*0x5f703e*/
    MEMORY[0xAC1470] |= 1u; /*0x5f7051*/
    if ( MEMORY[0xAC141C] ) /*0x5f7057*/
    {
      if ( MEMORY[0xAC1425] ) /*0x5f7061*/
      {
        __3_YAXPAX_Z(MEMORY[0xAC141C]); /*0x5f7064*/
        MEMORY[0xAC141C] = 0; /*0x5f706c*/
      }
    }
    MEMORY[0xAC1425] = 0; /*0x5f7076*/
    MEMORY[0xAC1420] = 0; /*0x5f707d*/
  }
}


// ==== 0x005F7090  ObjectTypeClass::ConstructFull  this=AbstractTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::ConstructFull(int this, AbstractClass *aP1)
{
  _DWORD *v3; // eax
  int v4; // ecx
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // eax
  char Destination[24]; // [esp+8h] [ebp-1Ch] BYREF
  char v10; // [esp+20h] [ebp-4h]

  AbstractTypeClass::Constructor(this, aP1); /*0x5f709c*/
  v3 = (_DWORD *)(this + 200); /*0x5f70a3*/
  *(_BYTE *)(this + 152) = 0; /*0x5f70a9*/
  *(_BYTE *)(this + 153) = 0; /*0x5f70af*/
  *(_BYTE *)(this + 154) = 0; /*0x5f70b5*/
  *(_DWORD *)(this + 156) = 0; /*0x5f70bb*/
  *(_DWORD *)(this + 160) = 0; /*0x5f70c1*/
  *(_DWORD *)(this + 164) = 0; /*0x5f70c7*/
  *(_BYTE *)(this + 168) = 0; /*0x5f70cd*/
  *(_DWORD *)(this + 172) = 0; /*0x5f70d3*/
  *(_DWORD *)(this + 176) = 0; /*0x5f70d9*/
  *(_DWORD *)(this + 180) = 0; /*0x5f70df*/
  *(_DWORD *)(this + 184) = 0; /*0x5f70e5*/
  *(_DWORD *)(this + 188) = 0; /*0x5f70eb*/
  *(_DWORD *)(this + 192) = 0; /*0x5f70f1*/
  *(_DWORD *)(this + 196) = 0; /*0x5f70f7*/
  v4 = 18; /*0x5f70fd*/
  do /*0x5f710b*/
  {
    *v3 = 0; /*0x5f7102*/
    v3[1] = 0; /*0x5f7104*/
    v3 += 2; /*0x5f7107*/
    --v4; /*0x5f710a*/
  }
  while ( v4 ); /*0x5f710b*/
  v5 = (_DWORD *)(this + 344); /*0x5f710d*/
  v6 = 18; /*0x5f7113*/
  do /*0x5f7121*/
  {
    *v5 = 0; /*0x5f7118*/
    v5[1] = 0; /*0x5f711a*/
    v5 += 2; /*0x5f711d*/
    --v6; /*0x5f7120*/
  }
  while ( v6 ); /*0x5f7121*/
  *(_BYTE *)(this + 488) = 0; /*0x5f712e*/
  *(_DWORD *)(this + 492) = 0; /*0x5f7134*/
  *(_DWORD *)(this + 496) = -1; /*0x5f713a*/
  *(_DWORD *)(this + 500) = -1; /*0x5f7140*/
  *(_BYTE *)(this + 504) = 0; /*0x5f7146*/
  *(_BYTE *)(this + 529) = 0; /*0x5f7148*/
  *(_BYTE *)(this + 530) = 0; /*0x5f714e*/
  *(_BYTE *)(this + 531) = 0; /*0x5f7156*/
  *(_BYTE *)(this + 558) = 1; /*0x5f715c*/
  *(_BYTE *)(this + 560) = 1; /*0x5f7162*/
  *(_BYTE *)(this + 561) = 1; /*0x5f7168*/
  *(_BYTE *)(this + 565) = 1; /*0x5f716e*/
  *(_BYTE *)(this + 556) = 0; /*0x5f7176*/
  *(_BYTE *)(this + 557) = 0; /*0x5f717c*/
  *(_BYTE *)(this + 559) = 0; /*0x5f7182*/
  *(_BYTE *)(this + 562) = 0; /*0x5f7188*/
  *(_BYTE *)(this + 563) = 0; /*0x5f718e*/
  *(_BYTE *)(this + 564) = 0; /*0x5f7194*/
  *(_BYTE *)(this + 566) = 0; /*0x5f719a*/
  *(_BYTE *)(this + 567) = 0; /*0x5f71a0*/
  *(_BYTE *)(this + 568) = 0; /*0x5f71a6*/
  *(_BYTE *)(this + 569) = 0; /*0x5f71ac*/
  *(_BYTE *)(this + 570) = 0; /*0x5f71b2*/
  *(_BYTE *)(this + 571) = 0x80; /*0x5f71b8*/
  *(_BYTE *)(this + 572) = 0x80; /*0x5f71be*/
  *(_BYTE *)(this + 573) = 0x80; /*0x5f71c4*/
  *(_DWORD *)(this + 576) = 16; /*0x5f71ca*/
  *(_DWORD *)(this + 580) = 0; /*0x5f71d4*/
  *(_DWORD *)(this + 584) = 0; /*0x5f71da*/
  *(_DWORD *)(this + 588) = 0; /*0x5f71e0*/
  *(_BYTE *)(this + 592) = 0; /*0x5f71e6*/
  *(_DWORD *)(this + 596) = 0; /*0x5f71ec*/
  *(_DWORD *)(this + 600) = 0; /*0x5f71f2*/
  *(_DWORD *)(this + 604) = 0; /*0x5f71f8*/
  *(_DWORD *)(this + 608) = 0; /*0x5f71fe*/
  *(_BYTE *)(this + 612) = 0; /*0x5f7204*/
  *(_DWORD *)(this + 616) = 0; /*0x5f720a*/
  *(_DWORD *)(this + 620) = 0; /*0x5f7213*/
  *(_DWORD *)(this + 624) = 0; /*0x5f7219*/
  *(_DWORD *)(this + 628) = 0; /*0x5f721f*/
  *(_BYTE *)(this + 632) = 0; /*0x5f7225*/
  *(_DWORD *)(this + 636) = 0; /*0x5f722b*/
  *(_DWORD *)(this + 640) = 0; /*0x5f7231*/
  *(_DWORD *)(this + 644) = 0; /*0x5f7237*/
  *(_DWORD *)(this + 648) = 0; /*0x5f723d*/
  *(_BYTE *)(this + 652) = 0; /*0x5f7243*/
  *(_DWORD *)(this + 656) = 0; /*0x5f7249*/
  *(_DWORD *)this = &ObjectTypeClass::`vftable'; /*0x5f7251*/
  *(_DWORD *)(this + 4) = &ObjectTypeClass::`vftable'; /*0x5f7258*/
  *(_DWORD *)(this + 8) = &ObjectTypeClass::`vftable'; /*0x5f725f*/
  *(_DWORD *)(this + 12) = &vt_ObjectTypeClass; /*0x5f7266*/
  if ( this + 36 != this + 504 ) /*0x5f726d*/
    qmemcpy((void *)(this + 504), (const void *)(this + 36), 0x19u); /*0x5f7274*/
  if ( &MEMORY[0x87F8E4] == (MouseClass *)-42624 ) /*0x5f727e*/
  {
    Destination[0] = 0; /*0x5f7280*/
  }
  else
  {
    strncpy(Destination, &MEMORY[0x87F8E4].__pad_5568[20760], 0x18u); /*0x5f7292*/
    v10 = 0; /*0x5f729a*/
  }
  if ( Destination != (char *)(this + 531) ) /*0x5f72aa*/
  {
    qmemcpy((void *)(this + 531), Destination, 0x18u); /*0x5f72b5*/
    *(_BYTE *)(this + 555) = v10; /*0x5f72b7*/
  }
  if ( (int)*(&g_MatrixTransformState + 2438) < (int)*(&g_MatrixTransformState + 2436) /*0x5f72ee*/
    || (*((_BYTE *)&(&g_MatrixTransformState)[203] + 5) || !*(&g_MatrixTransformState + 2436))
    && (int)*(&g_MatrixTransformState + 2439) > 0
    && ((unsigned __int8 (__thiscall *)(CoordStruct **, char *, _DWORD))(*(&g_MatrixTransformState + 2434))->Z)(
         &g_MatrixTransformState + 2434,
         (char *)*(&g_MatrixTransformState + 2436) + (_DWORD)*(&g_MatrixTransformState + 2439),
         0) )
  {
    v7 = (int)*(&g_MatrixTransformState + 2438); /*0x5f72fb*/
    *(&g_MatrixTransformState + 2438) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 2438) + 1); /*0x5f72fe*/
    *(&(*(&g_MatrixTransformState + 2435))->X + v7) = this; /*0x5f730a*/
  }
  return this; /*0x5f730f*/
}


// ==== 0x005F7320  ObjectTypeClass::Construct  this=ObjectTypeClass  sig=csp ====
_DWORD *__thiscall ObjectTypeClass::Construct(_DWORD *this, ObjectTypeClass *aP1)
{
  _DWORD *v3; // eax
  int v4; // edx
  _DWORD *v5; // eax
  int v6; // edx

  AbstractTypeClass::Init((int)this, (AbstractTypeClass *)aP1); /*0x5f7328*/
  v3 = this + 50; /*0x5f732f*/
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
  v5 = this + 86; /*0x5f734b*/
  v6 = 18; /*0x5f7351*/
  do /*0x5f735f*/
  {
    *v5 = 0; /*0x5f7356*/
    v5[1] = 0; /*0x5f7358*/
    v5 += 2; /*0x5f735b*/
    --v6; /*0x5f735e*/
  }
  while ( v6 ); /*0x5f735f*/
  this->VoxelCaches[4] = 0; /*0x5f7361*/
  this->q248 = 0; /*0x5f7367*/
  this->q24C = 0; /*0x5f736d*/
  this->q094 = 0; /*0x5f7373*/
  this->q254 = 0; /*0x5f7379*/
  this->q258 = 0; /*0x5f737f*/
  this->q25C = 0; /*0x5f7385*/
  this->q260 = 0; /*0x5f738b*/
  *((_BYTE *)this + 612) = 0; /*0x5f7391*/
  this->q268 = 0; /*0x5f7397*/
  this->q26C = 0; /*0x5f739d*/
  this->q270 = 0; /*0x5f73a3*/
  this->q274 = 0; /*0x5f73a9*/
  *((_BYTE *)this + 632) = 0; /*0x5f73af*/
  this->q27C = 0; /*0x5f73b5*/
  this->q280 = 0; /*0x5f73bb*/
  this->q284 = 0; /*0x5f73c1*/
  this->q288 = 0; /*0x5f73c7*/
  *((_BYTE *)this + 652) = 0; /*0x5f73cd*/
  this->q290 = 0; /*0x5f73d3*/
  *this = &ObjectTypeClass::`vftable'; /*0x5f73d9*/
  this->vtable2 = &ObjectTypeClass::`vftable'; /*0x5f73df*/
  this->vtable3 = &ObjectTypeClass::`vftable'; /*0x5f73e6*/
  this->vtable4 = &vt_ObjectTypeClass; /*0x5f73ed*/
  return this; /*0x5f73f6*/
}


// ==== 0x005F7400  ObjectTypeClass::Destruct  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::Destruct(int this)
{
  int v2; // eax
  int *v3; // edi
  int v4; // ebx
  int *v5; // edi
  int v6; // ebx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)this = &ObjectTypeClass::`vftable'; /*0x5f740b*/
  *(_DWORD *)(this + 4) = &ObjectTypeClass::`vftable'; /*0x5f7411*/
  *(_DWORD *)(this + 8) = &ObjectTypeClass::`vftable'; /*0x5f7418*/
  *(_DWORD *)(this + 12) = &vt_ObjectTypeClass; /*0x5f741f*/
  v8 = this; /*0x5f7431*/
  v2 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xAC1418] + 16))(&MEMORY[0xAC1418], &v8); /*0x5f7435*/
  if ( v2 != -1 && v2 < MEMORY[0xAC1428] && v2 < --MEMORY[0xAC1428] ) /*0x5f7450*/
  {
    do /*0x5f7468*/
    {
      ++v2; /*0x5f7458*/
      *((_DWORD *)MEMORY[0xAC141C] + v2 - 1) = *((_DWORD *)MEMORY[0xAC141C] + v2); /*0x5f745c*/
    }
    while ( v2 < MEMORY[0xAC1428] ); /*0x5f7468*/
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
  v3 = (int *)(this + 488); /*0x5f7547*/
  v4 = 18; /*0x5f754d*/
  do /*0x5f755d*/
  {
    v3 -= 2; /*0x5f7552*/
    ObjectTypeClass::ReleaseWaveAndString(v3); /*0x5f7557*/
    --v4; /*0x5f755c*/
  }
  while ( v4 ); /*0x5f755d*/
  v5 = (int *)(this + 344); /*0x5f755f*/
  v6 = 18; /*0x5f7565*/
  do /*0x5f7575*/
  {
    v5 -= 2; /*0x5f756a*/
    ObjectTypeClass::ReleaseWaveAndString(v5); /*0x5f756f*/
    --v6; /*0x5f7574*/
  }
  while ( v6 ); /*0x5f7575*/
  ObjectTypeClass::ReleaseWaveAndString((int *)(this + 192)); /*0x5f757d*/
  ObjectTypeClass::ReleaseWaveAndString((int *)(this + 184)); /*0x5f7588*/
  ObjectTypeClass::ReleaseWaveAndString((int *)(this + 176)); /*0x5f7593*/
  return AbstractTypeClass::Dtor((_DWORD *)this); /*0x5f759f*/
}


// ==== 0x005F75B0  ObjectTypeClass::GetData  this=ObjectTypeClass  sig=csp ====
int NullStub_RetFalse_20()
{
  return 0; /*0x5f75b2*/
}


// ==== 0x005F75C0  ObjectTypeClass::InitTripleTen  this=ObjectTypeClass  sig=csp ====
_DWORD *__stdcall Struct_InitTripleTen(_DWORD *a1)
{
  *a1 = 10; /*0x5f75cd*/
  a1[1] = 10; /*0x5f75d3*/
  a1[2] = 10; /*0x5f75d6*/
  return a1; /*0x5f75d9*/
}


// ==== 0x005F75E0  ObjectTypeClass::InitTriple256  this=ObjectTypeClass  sig=csp ====
_DWORD *__stdcall Struct_InitTriple256(_DWORD *a1)
{
  int v1; // esi

  v1 = 2 * MEMORY[0xAC1474]; /*0x5f75ec*/
  *a1 = 256; /*0x5f75f7*/
  a1[1] = 256; /*0x5f75f9*/
  a1[2] = v1; /*0x5f75fc*/
  return a1; /*0x5f75ff*/
}


// ==== 0x005F7610  ObjectTypeClass::GetType  this=ObjectTypeClass  sig=csp ====
int __stdcall AbstractTypeClass::_vt33(int a1)
{
  return 0; /*0x5f7612*/
}


// ==== 0x005F7620  ObjectTypeClass::SetType  this=ObjectTypeClass  sig=csp ====
int NullStub_RetFalse_21()
{
  return 0; /*0x5f7622*/
}


// ==== 0x005F7630  ObjectTypeClass::Validate  this=ObjectTypeClass  sig=csp ====
int NullStub_RetFalse_22()
{
  return 0; /*0x5f7632*/
}


// ==== 0x005F7640  ObjectTypeClass::RegisterSingleton  this=ObjectTypeClass  sig=csp ====
int *__stdcall GlobalInit_RegisterSingleton(int a1)
{
  if ( (MEMORY[0xAC145C] & 1) == 0 ) /*0x5f764b*/
  {
    MEMORY[0xAC145C] |= 1u; /*0x5f7666*/
    MEMORY[0xAC1438] = 0; /*0x5f766c*/
    MEMORY[0xAC143C] = 2147450879; /*0x5f7684*/
    atexit(nullsub_207); /*0x5f768a*/
  }
  return &MEMORY[0xAC1438]; /*0x5f7698*/
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

  if ( !MEMORY[0xAC1478] ) /*0x5f76ba*/
  {
    RawFileClass::Construct(v0, (int)MEMORY[0x832AA8]); /*0x5f76c5*/
    MEMORY[0xAC1478] = (int)CCFileClass::ReadEntireFile(v0); /*0x5f76da*/
    MEMORY[0xAC1488] = MEMORY[0xAC1478] != 0; /*0x5f76df*/
    if ( !MEMORY[0xAC1478] ) /*0x5f76e5*/
      MEMORY[0xAC1478] = SearchMIXFile(MEMORY[0x832AA8], 0); /*0x5f76f3*/
    RawFileClass::Dtor(v0); /*0x5f76fc*/
  }
  if ( !MEMORY[0xAC147C] ) /*0x5f7708*/
  {
    RawFileClass::Construct(v0, (int)MEMORY[0x832A9C]); /*0x5f7713*/
    MEMORY[0xAC147C] = (int)CCFileClass::ReadEntireFile(v0); /*0x5f7728*/
    MEMORY[0xAC1489] = MEMORY[0xAC147C] != 0; /*0x5f772d*/
    if ( !MEMORY[0xAC147C] ) /*0x5f7733*/
      MEMORY[0xAC147C] = SearchMIXFile(MEMORY[0x832A9C], 0); /*0x5f7741*/
    RawFileClass::Dtor(v0); /*0x5f774a*/
  }
  if ( !MEMORY[0xAC1480] ) /*0x5f7756*/
  {
    RawFileClass::Construct(v0, (int)MEMORY[0x832A90]); /*0x5f7761*/
    MEMORY[0xAC1480] = (int)CCFileClass::ReadEntireFile(v0); /*0x5f7776*/
    MEMORY[0xAC148A] = MEMORY[0xAC1480] != 0; /*0x5f777b*/
    if ( !MEMORY[0xAC1480] ) /*0x5f7781*/
      MEMORY[0xAC1480] = SearchMIXFile(MEMORY[0x832A90], 0); /*0x5f778f*/
    RawFileClass::Dtor(v0); /*0x5f7798*/
  }
  if ( !MEMORY[0xAC1484] ) /*0x5f77a4*/
  {
    RawFileClass::Construct(v0, (int)MEMORY[0x832A80]); /*0x5f77af*/
    MEMORY[0xAC1484] = (int)CCFileClass::ReadEntireFile(v0); /*0x5f77c4*/
    MEMORY[0xAC148B] = MEMORY[0xAC1484] != 0; /*0x5f77c9*/
    if ( !MEMORY[0xAC1484] ) /*0x5f77cf*/
      MEMORY[0xAC1484] = SearchMIXFile(MEMORY[0x832A80], 0); /*0x5f77dd*/
    RawFileClass::Dtor(v0); /*0x5f77e6*/
  }
}


// ==== 0x005F77F0  ObjectTypeClass::UnloadPipsSHP  this=ObjectTypeClass  sig=csp ====
void ObjectTypeClass::UnloadPipsSHP()
{
  int v0; // eax
  void *v1; // ebp
  int v2; // edx
  int v3; // eax
  char *v4; // esi
  int v5; // edi
  int v6; // eax
  void *v7; // ebp
  int v8; // edx
  int v9; // eax
  char *v10; // esi
  int v11; // edi
  int v12; // eax
  void *v13; // ebp
  int v14; // edx
  int v15; // eax
  char *v16; // esi
  int v17; // edi
  int v18; // eax
  void *v19; // ebp
  int v20; // edx
  int v21; // eax
  char *v22; // esi
  int v23; // edi

  if ( MEMORY[0xAC1488] ) /*0x5f77fd*/
  {
    if ( MEMORY[0xAC1478] ) /*0x5f7807*/
    {
      v0 = *(_DWORD *)(MEMORY[0xAC1478] - 4); /*0x5f7809*/
      v1 = (void *)(MEMORY[0xAC1478] - 4); /*0x5f780c*/
      v2 = 9 * v0; /*0x5f780f*/
      v3 = v0 - 1; /*0x5f7812*/
      v4 = (char *)(MEMORY[0xAC1478] + 4 * v2); /*0x5f7813*/
      if ( v3 >= 0 ) /*0x5f7816*/
      {
        v5 = v3 + 1; /*0x5f7818*/
        do /*0x5f7826*/
        {
          v4 -= 36; /*0x5f781b*/
          FileTreeNode::Destroy(v4); /*0x5f7820*/
          --v5; /*0x5f7825*/
        }
        while ( v5 ); /*0x5f7826*/
      }
      __3_YAXPAX_Z(v1); /*0x5f7829*/
    }
    MEMORY[0xAC1488] = 0; /*0x5f7831*/
  }
  if ( MEMORY[0xAC1489] ) /*0x5f783d*/
  {
    if ( MEMORY[0xAC147C] ) /*0x5f7847*/
    {
      v6 = *(_DWORD *)(MEMORY[0xAC147C] - 4); /*0x5f7849*/
      v7 = (void *)(MEMORY[0xAC147C] - 4); /*0x5f784c*/
      v8 = 9 * v6; /*0x5f784f*/
      v9 = v6 - 1; /*0x5f7852*/
      v10 = (char *)(MEMORY[0xAC147C] + 4 * v8); /*0x5f7853*/
      if ( v9 >= 0 ) /*0x5f7856*/
      {
        v11 = v9 + 1; /*0x5f7858*/
        do /*0x5f7866*/
        {
          v10 -= 36; /*0x5f785b*/
          FileTreeNode::Destroy(v10); /*0x5f7860*/
          --v11; /*0x5f7865*/
        }
        while ( v11 ); /*0x5f7866*/
      }
      __3_YAXPAX_Z(v7); /*0x5f7869*/
    }
    MEMORY[0xAC1489] = 0; /*0x5f7871*/
  }
  if ( MEMORY[0xAC148A] ) /*0x5f787d*/
  {
    if ( MEMORY[0xAC1480] ) /*0x5f7887*/
    {
      v12 = *(_DWORD *)(MEMORY[0xAC1480] - 4); /*0x5f7889*/
      v13 = (void *)(MEMORY[0xAC1480] - 4); /*0x5f788c*/
      v14 = 9 * v12; /*0x5f788f*/
      v15 = v12 - 1; /*0x5f7892*/
      v16 = (char *)(MEMORY[0xAC1480] + 4 * v14); /*0x5f7893*/
      if ( v15 >= 0 ) /*0x5f7896*/
      {
        v17 = v15 + 1; /*0x5f7898*/
        do /*0x5f78a6*/
        {
          v16 -= 36; /*0x5f789b*/
          FileTreeNode::Destroy(v16); /*0x5f78a0*/
          --v17; /*0x5f78a5*/
        }
        while ( v17 ); /*0x5f78a6*/
      }
      __3_YAXPAX_Z(v13); /*0x5f78a9*/
    }
    MEMORY[0xAC148A] = 0; /*0x5f78b1*/
  }
  if ( MEMORY[0xAC148B] ) /*0x5f78bd*/
  {
    if ( MEMORY[0xAC1484] ) /*0x5f78c7*/
    {
      v18 = *(_DWORD *)(MEMORY[0xAC1484] - 4); /*0x5f78c9*/
      v19 = (void *)(MEMORY[0xAC1484] - 4); /*0x5f78cc*/
      v20 = 9 * v18; /*0x5f78cf*/
      v21 = v18 - 1; /*0x5f78d2*/
      v22 = (char *)(MEMORY[0xAC1484] + 4 * v20); /*0x5f78d3*/
      if ( v21 >= 0 ) /*0x5f78d6*/
      {
        v23 = v21 + 1; /*0x5f78d8*/
        do /*0x5f78e6*/
        {
          v22 -= 36; /*0x5f78db*/
          FileTreeNode::Destroy(v22); /*0x5f78e0*/
          --v23; /*0x5f78e5*/
        }
        while ( v23 ); /*0x5f78e6*/
      }
      __3_YAXPAX_Z(v19); /*0x5f78e9*/
    }
    MEMORY[0xAC148B] = 0; /*0x5f78f1*/
  }
}


// ==== 0x005F7900  ObjectTypeClass::FindMatchingUnit  this=ObjectTypeClass  sig=csp ====
TechnoClass *__thiscall TechnoClass::FindMatchingUnit(IUnknown *this, char a2, char a3, char a4, int a5)
{
  TechnoClass *v6; // ebx
  int v7; // ebp
  TechnoClass *v8; // esi
  int v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h]

  v6 = 0; /*0x5f7909*/
  v10 = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 112))(this); /*0x5f7914*/
  v7 = 0; /*0x5f7918*/
  v11 = *(_DWORD *)(a5 + 120); /*0x5f791f*/
  if ( v11 <= 0 ) /*0x5f7923*/
    return 0; /*0x5f7a83*/
  do /*0x5f7a5e*/
  {
    v8 = *(TechnoClass **)(*(_DWORD *)(a5 + 108) + 4 * v7); /*0x5f7930*/
    if ( !v8->inLimbo /*0x5f79c1*/
      && *(_DWORD *)(*(_DWORD *)v8[1].__pad_0 + 3768) == (*(int (__thiscall **)(IUnknown *))(this->field_0 + 44))(this)
      && (!a3 || LOBYTE(v8[1].currentRank))
      && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 388))(v8) != 19
      && v8->queuedMission != 19
      && (!a4 || HouseClass::CanBuild((_DWORD *)v8->focus, this, (AbstractClass *)1, (AbstractClass *)1) > 0)
      && ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)v8[1].__pad_0 + 112))(*(_DWORD *)v8[1].__pad_0) & v10) != 0 )
    {
      if ( a2 /*0x5f79e4*/
        || !Team::AllMembersValid((int *)v8->__pad_0)
        || (*(int (__thiscall **)(IUnknown *))(this->field_0 + 44))(this) != 3 )
      {
        if ( (*(int (__thiscall **)(IUnknown *))(this->field_0 + 44))(this) == 40 && this->__pad_BC0[270] ) /*0x5f7a15*/
        {
          if ( !*(_BYTE *)(*(_DWORD *)v8[1].__pad_0 + 3278) ) /*0x5f7a2d*/
            goto LABEL_26; /*0x5f7a2d*/
          if ( HIBYTE(v8->barrelRecoil[5]) ) /*0x5f7a2f*/
            return v8; /*0x5f7a37*/
        }
        else if ( *(_BYTE *)(*(_DWORD *)v8[1].__pad_0 + 3278) ) /*0x5f7a41*/
        {
          goto LABEL_26; /*0x5f7a49*/
        }
        if ( HIBYTE(v8->barrelRecoil[5]) ) /*0x5f7a4b*/
          return v8; /*0x5f7a7d*/
        goto LABEL_25; /*0x5f7a53*/
      }
      if ( (*(int (__thiscall **)(IUnknown *))(this->field_0 + 44))(this) == 3 /*0x5f79f4*/
        && RadioClass::HasFreeLink((int *)v8->__pad_0) )
      {
        if ( HIBYTE(v8->barrelRecoil[5]) ) /*0x5f79fd*/
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
char __thiscall VoxelAnimType_LoadSection(_DWORD *this, const char *a2, int a3)
{
  void *v4; // ebp
  _BYTE *v5; // eax
  void *v6; // ebp
  char *v7; // eax
  char v8; // cl
  char v9; // al
  int v10; // eax
  void *v12; // ebp
  void *v13; // ebp
  char v14; // [esp+12h] [ebp-2DEh]
  _DWORD v15[22]; // [esp+14h] [ebp-2DCh] BYREF
  _BYTE v16[12]; // [esp+6Ch] [ebp-284h] BYREF
  int v17; // [esp+78h] [ebp-278h]
  _DWORD v18[22]; // [esp+80h] [ebp-270h] BYREF
  _BYTE v19[12]; // [esp+D8h] [ebp-218h] BYREF
  int v20; // [esp+E4h] [ebp-20Ch]
  char Buffer[256]; // [esp+ECh] [ebp-204h] BYREF
  char Source[260]; // [esp+1ECh] [ebp-104h] BYREF

  if ( a3 ) /*0x5f7aa7*/
    sprintf(Buffer, MEMORY[0x832AB4], a2, a3); /*0x5f7ade*/
  else
    sprintf(Buffer, MEMORY[0x832ABC], a2); /*0x5f7abe*/
  _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f7afd*/
  CCFileClass::Construct(v15, Source); /*0x5f7b11*/
  if ( (unsigned __int8)CCFileClass::Open(0) ) /*0x5f7b1b*/
  {
    v4 = (void *)*(this + 2 * a3 + 50); /*0x5f7b46*/
    if ( v4 ) /*0x5f7b4f*/
    {
      WaveClass::Destroy(*(this + 2 * a3 + 50)); /*0x5f7b53*/
      __3_YAXPAX_Z(v4); /*0x5f7b59*/
      *(this + 2 * a3 + 50) = 0; /*0x5f7b61*/
    }
    v14 = 0; /*0x5f7b6a*/
    if ( __2_YAPAXI_Z(0x1Cu) ) /*0x5f7b6e*/
      v5 = (_BYTE *)File::LoadFileVXL(v15, 0); /*0x5f7b82*/
    else
      v5 = 0; /*0x5f7b89*/
    *(this + 2 * a3 + 50) = v5; /*0x5f7b8d*/
    if ( v5 && !*v5 ) /*0x5f7b96*/
      v14 = 1; /*0x5f7b9a*/
    if ( a3 ) /*0x5f7ba1*/
      sprintf(Buffer, MEMORY[0x832AB4], a2, a3); /*0x5f7bd8*/
    else
      sprintf(Buffer, MEMORY[0x832ABC], a2); /*0x5f7bb8*/
    _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f7bf7*/
    CCFileClass::Construct(v18, Source); /*0x5f7c0e*/
    v6 = (void *)*(this + 2 * a3 + 51); /*0x5f7c13*/
    if ( v6 ) /*0x5f7c1c*/
    {
      String::Release(*(this + 2 * a3 + 51)); /*0x5f7c20*/
      __3_YAXPAX_Z(v6); /*0x5f7c26*/
      *(this + 2 * a3 + 51) = 0; /*0x5f7c2e*/
    }
    if ( __2_YAPAXI_Z(0x10u) ) /*0x5f7c3b*/
      v7 = (char *)File::LoadFileHVA(v18); /*0x5f7c51*/
    else
      v7 = 0; /*0x5f7c58*/
    *(this + 2 * a3 + 51) = v7; /*0x5f7c5c*/
    if ( !v7 || (v8 = *v7, v9 = 1, v8) ) /*0x5f7c6b*/
      v9 = 0; /*0x5f7c6d*/
    if ( v14 && v9 ) /*0x5f7c7d*/
    {
      v10 = VoxelSection::GetInfo(0, 0); /*0x5f7c8c*/
      Matrix::Scale(*(float *)(v10 + 12)); /*0x5f7c9c*/
      v18[0] = &vt_CCFileClass; /*0x5f7cad*/
      v20 = 0; /*0x5f7cb4*/
      Vector::Clear(v19); /*0x5f7cbb*/
      v18[0] = &off_7E1668; /*0x5f7ccc*/
      BufferIOFileClass::Dtor(v18); /*0x5f7cd3*/
      v15[0] = &vt_CCFileClass; /*0x5f7cdc*/
      v17 = 0; /*0x5f7ce0*/
      Vector::Clear(v16); /*0x5f7ce4*/
      v15[0] = &off_7E1668; /*0x5f7ced*/
      BufferIOFileClass::Dtor(v15); /*0x5f7cf1*/
      return 1; /*0x5f7d02*/
    }
    v12 = (void *)*(this + 2 * a3 + 50); /*0x5f7d05*/
    if ( v12 ) /*0x5f7d0e*/
    {
      WaveClass::Destroy(*(this + 2 * a3 + 50)); /*0x5f7d12*/
      __3_YAXPAX_Z(v12); /*0x5f7d18*/
      *(this + 2 * a3 + 50) = 0; /*0x5f7d20*/
    }
    v13 = (void *)*(this + 2 * a3 + 51); /*0x5f7d27*/
    if ( v13 ) /*0x5f7d30*/
    {
      String::Release(*(this + 2 * a3 + 51)); /*0x5f7d34*/
      __3_YAXPAX_Z(v13); /*0x5f7d3a*/
      *(this + 2 * a3 + 51) = 0; /*0x5f7d42*/
    }
    v18[0] = &vt_CCFileClass; /*0x5f7d55*/
    v20 = 0; /*0x5f7d5c*/
    Vector::Clear(v19); /*0x5f7d63*/
    v18[0] = &off_7E1668; /*0x5f7d74*/
    BufferIOFileClass::Dtor(v18); /*0x5f7d7b*/
    v15[0] = &vt_CCFileClass; /*0x5f7d84*/
    v17 = 0; /*0x5f7d88*/
    Vector::Clear(v16); /*0x5f7d8c*/
    v15[0] = &off_7E1668; /*0x5f7d91*/
  }
  else
  {
    v15[0] = &vt_CCFileClass; /*0x5f7b28*/
    v17 = 0; /*0x5f7b30*/
    Vector::Clear(v16); /*0x5f7b34*/
    v15[0] = &off_7E1668; /*0x5f7b39*/
  }
  BufferIOFileClass::Dtor(v15); /*0x5f7d99*/
  return 0; /*0x5f7cf6*/
}


// ==== 0x005F7DB0  VoxelAnimType::LoadBarrel  this=ObjectTypeClass  sig=csp ====
char __thiscall VoxelAnimType_LoadBarrel(_DWORD *this, const char *a2, int a3)
{
  _BYTE *v5; // eax
  char v6; // bl
  _BYTE *v7; // eax
  int v8; // eax
  void *v9; // ebp
  void *v10; // esi
  char v11; // [esp+13h] [ebp-2DDh]
  _DWORD v12[22]; // [esp+14h] [ebp-2DCh] BYREF
  _BYTE v13[12]; // [esp+6Ch] [ebp-284h] BYREF
  int v14; // [esp+78h] [ebp-278h]
  _DWORD v15[22]; // [esp+80h] [ebp-270h] BYREF
  _BYTE v16[12]; // [esp+D8h] [ebp-218h] BYREF
  int v17; // [esp+E4h] [ebp-20Ch]
  char Buffer[256]; // [esp+ECh] [ebp-204h] BYREF
  char Source[260]; // [esp+1ECh] [ebp-104h] BYREF

  if ( a3 ) /*0x5f7dc7*/
    sprintf(Buffer, MEMORY[0x832AC4], a2, a3); /*0x5f7dfe*/
  else
    sprintf(Buffer, MEMORY[0x832AD0], a2); /*0x5f7dde*/
  _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f7e1d*/
  CCFileClass::Construct(v12, Source); /*0x5f7e31*/
  if ( (unsigned __int8)CCFileClass::Open(0) ) /*0x5f7e3b*/
  {
    v11 = 0; /*0x5f7e7b*/
    if ( __2_YAPAXI_Z(0x1Cu) ) /*0x5f7e80*/
      v5 = (_BYTE *)File::LoadFileVXL(v12, 0); /*0x5f7e94*/
    else
      v5 = 0; /*0x5f7e9b*/
    *(this + 2 * a3 + 86) = v5; /*0x5f7e9f*/
    if ( v5 && !*v5 ) /*0x5f7ea8*/
      v11 = 1; /*0x5f7ead*/
    if ( a3 ) /*0x5f7eb4*/
      sprintf(Buffer, MEMORY[0x832AC4], a2, a3); /*0x5f7edd*/
    else
      sprintf(Buffer, MEMORY[0x832AD0], a2); /*0x5f7ec4*/
    _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f7efc*/
    CCFileClass::Construct(v15, Source); /*0x5f7f13*/
    v6 = 0; /*0x5f7f1a*/
    if ( __2_YAPAXI_Z(0x10u) ) /*0x5f7f1c*/
      v7 = (_BYTE *)File::LoadFileHVA(v15); /*0x5f7f32*/
    else
      v7 = 0; /*0x5f7f39*/
    *(this + 2 * a3 + 87) = v7; /*0x5f7f3d*/
    if ( v7 && !*v7 ) /*0x5f7f46*/
      v6 = 1; /*0x5f7f4b*/
    if ( v11 && v6 ) /*0x5f7f5b*/
    {
      v8 = VoxelSection::GetInfo(0, 0); /*0x5f7f6a*/
      Matrix::Scale(*(float *)(v8 + 12)); /*0x5f7f7a*/
      v15[0] = &vt_CCFileClass; /*0x5f7f8b*/
      v17 = 0; /*0x5f7f92*/
      Vector::Clear(v16); /*0x5f7f99*/
      v15[0] = &off_7E1668; /*0x5f7faa*/
      BufferIOFileClass::Dtor(v15); /*0x5f7fb1*/
      v12[0] = &vt_CCFileClass; /*0x5f7fba*/
      v14 = 0; /*0x5f7fbe*/
      Vector::Clear(v13); /*0x5f7fc2*/
      v12[0] = &off_7E1668; /*0x5f7fcb*/
      BufferIOFileClass::Dtor(v12); /*0x5f7fcf*/
      return 1; /*0x5f7fd7*/
    }
    else
    {
      v9 = (void *)*(this + 2 * a3 + 86); /*0x5f7fe3*/
      if ( v9 ) /*0x5f7fee*/
      {
        WaveClass::Destroy(*(this + 2 * a3 + 86)); /*0x5f7ff2*/
        __3_YAXPAX_Z(v9); /*0x5f7ff8*/
      }
      v10 = (void *)*(this + 2 * a3 + 87); /*0x5f8000*/
      if ( v10 ) /*0x5f8009*/
      {
        String::Release(v10); /*0x5f800d*/
        __3_YAXPAX_Z(v10); /*0x5f8013*/
      }
      v15[0] = &vt_CCFileClass; /*0x5f8027*/
      v17 = 0; /*0x5f802e*/
      Vector::Clear(v16); /*0x5f8035*/
      v15[0] = &off_7E1668; /*0x5f8046*/
      BufferIOFileClass::Dtor(v15); /*0x5f804d*/
      v12[0] = &vt_CCFileClass; /*0x5f8056*/
      v14 = 0; /*0x5f805a*/
      Vector::Clear(v13); /*0x5f805e*/
      v12[0] = &off_7E1668; /*0x5f8067*/
      BufferIOFileClass::Dtor(v12); /*0x5f806b*/
      return 0; /*0x5f8073*/
    }
  }
  else
  {
    v12[0] = &vt_CCFileClass; /*0x5f7e48*/
    v14 = 0; /*0x5f7e50*/
    Vector::Clear(v13); /*0x5f7e54*/
    v12[0] = &off_7E1668; /*0x5f7e5d*/
    BufferIOFileClass::Dtor(v12); /*0x5f7e65*/
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
  WaveClass *v3; // edi
  _DWORD *v4; // eax
  _DWORD *FileVXL; // eax
  SomeVoxelCache *v6; // edi
  _DWORD *v7; // eax
  _DWORD *FileHVA; // eax
  int Info; // eax
  WaveClass *v10; // edi
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  SomeVoxelCache *v13; // edi
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int v16; // eax
  WaveClass *v17; // edi
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  SomeVoxelCache *v20; // edi
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  int v23; // eax
  int v24; // ebp
  int v25; // edi
  WaveClass *v26; // edi
  _DWORD *v27; // eax
  _DWORD *v28; // eax
  SomeVoxelCache *v29; // edi
  _DWORD *v30; // eax
  _DWORD *v31; // eax
  int v32; // eax
  int v33; // ebp
  int v34; // edi
  WaveClass *v35; // edi
  _DWORD *v36; // eax
  _DWORD *v37; // eax
  void *v38; // edi
  _DWORD *v39; // eax
  _DWORD *v40; // eax
  int v41; // eax
  WaveClass *v42; // edi
  SomeVoxelCache *v43; // edi
  WaveClass *v44; // edi
  SomeVoxelCache *v45; // edi
  int v46; // edi
  int v47; // ebp
  _DWORD *v48; // ecx
  char v50; // [esp+13h] [ebp-349h]
  _DWORD v51[22]; // [esp+14h] [ebp-348h] BYREF
  _BYTE v52[12]; // [esp+6Ch] [ebp-2F0h] BYREF
  int v53; // [esp+78h] [ebp-2E4h]
  _DWORD v54[22]; // [esp+80h] [ebp-2DCh] BYREF
  _BYTE v55[12]; // [esp+D8h] [ebp-284h] BYREF
  int v56; // [esp+E4h] [ebp-278h]
  char Buffer[260]; // [esp+ECh] [ebp-270h] BYREF
  _DWORD v58[22]; // [esp+1F0h] [ebp-16Ch] BYREF
  char v59[12]; // [esp+248h] [ebp-114h] BYREF
  int v60; // [esp+254h] [ebp-108h]
  char Filename[256]; // [esp+25Ch] [ebp-100h] BYREF

  v2 = this + 504; /*0x5f811e*/
  v50 = 0; /*0x5f8134*/
  _makepath(Buffer, 0, 0, this + 504, g_Str_File__VXL); /*0x5f8138*/
  CCFileClass::Construct(v58, Buffer); /*0x5f814f*/
  if ( CCFileClass::Open(v58, 0) ) /*0x5f815c*/
  {
    v3 = (WaveClass *)this->ChargerBarrels_0x12; /*0x5f8169*/
    if ( v3 ) /*0x5f8171*/
    {
      WaveClass::Destroy(this->ChargerBarrels_0x12); /*0x5f8175*/
      __3_YAXPAX_Z(v3); /*0x5f817b*/
    }
    v4 = __2_YAPAXI_Z(0x1Cu); /*0x5f8185*/
    if ( v4 ) /*0x5f818f*/
      FileVXL = File::LoadFileVXL(v4, (int)v58, 0); /*0x5f819c*/
    else
      FileVXL = 0; /*0x5f81a3*/
    this->ChargerBarrels_0x12 = FileVXL; /*0x5f81a7*/
    if ( !FileVXL || *(_BYTE *)FileVXL ) /*0x5f81af*/
      v50 = 1; /*0x5f81b3*/
    _makepath(Buffer, 0, 0, v2, g_Str_File__HVA); /*0x5f81c8*/
    CCFileClass::Construct(v51, Buffer); /*0x5f81dc*/
    v6 = (SomeVoxelCache *)this->TurretVoxel; /*0x5f81e1*/
    if ( v6 ) /*0x5f81e9*/
    {
      String::Release(*((void ***)this + 45)); /*0x5f81ed*/
      __3_YAXPAX_Z(v6); /*0x5f81f3*/
    }
    v7 = __2_YAPAXI_Z(0x10u); /*0x5f81fd*/
    if ( v7 ) /*0x5f8207*/
      FileHVA = File::LoadFileHVA(v7, (int)v51); /*0x5f8210*/
    else
      FileHVA = 0; /*0x5f8217*/
    this->TurretVoxel = FileHVA; /*0x5f821b*/
    if ( !FileHVA || *(_BYTE *)FileHVA ) /*0x5f8223*/
    {
      v50 = 1; /*0x5f8245*/
    }
    else
    {
      Info = VoxelSection::GetInfo(*((_DWORD **)this + 44), 0, 0); /*0x5f822f*/
      Matrix::Scale(*((unsigned int **)this + 45), *(float *)(Info + 12)); /*0x5f823e*/
    }
    v51[0] = &vt_CCFileClass; /*0x5f824e*/
    v53 = 0; /*0x5f8256*/
    Vector::Clear((int)v52); /*0x5f825a*/
    v51[0] = &off_7E1668; /*0x5f8263*/
    BufferIOFileClass::Dtor(v51); /*0x5f826b*/
  }
  else
  {
    v50 = 1; /*0x5f8272*/
  }
  if ( (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) != 40 || *(this + 3233) ) /*0x5f8287*/
  {
    if ( (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) != 40 /*0x5f8657*/
      || !HouseClass::HasPower(this)
      || *(this + 3285) )
    {
      sprintf(Filename, MEMORY[0x832ABC], v2); /*0x5f86a4*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f86c0*/
      CCFileClass::Construct(v51, Buffer); /*0x5f86d4*/
      if ( CCFileClass::Open(v51, 0) ) /*0x5f86de*/
      {
        v26 = (WaveClass *)this->BarrelVoxel_e; /*0x5f86eb*/
        if ( v26 ) /*0x5f86f3*/
        {
          WaveClass::Destroy(this->BarrelVoxel_e); /*0x5f86f7*/
          __3_YAXPAX_Z(v26); /*0x5f86fd*/
        }
        v27 = __2_YAPAXI_Z(0x1Cu); /*0x5f8707*/
        if ( v27 ) /*0x5f8711*/
          v28 = File::LoadFileVXL(v27, (int)v51, 0); /*0x5f871b*/
        else
          v28 = 0; /*0x5f8722*/
        this->BarrelVoxel_e = v28; /*0x5f8726*/
        if ( !v28 || *(_BYTE *)v28 ) /*0x5f872e*/
          v50 = 1; /*0x5f8732*/
        sprintf(Filename, MEMORY[0x832ABC], v2); /*0x5f8745*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f8761*/
        CCFileClass::Construct(v54, Buffer); /*0x5f8778*/
        v29 = (SomeVoxelCache *)this->ChargerTurrets; /*0x5f877d*/
        if ( v29 ) /*0x5f8785*/
        {
          String::Release(*((void ***)this + 47)); /*0x5f8789*/
          __3_YAXPAX_Z(v29); /*0x5f878f*/
        }
        v30 = __2_YAPAXI_Z(0x10u); /*0x5f8799*/
        if ( v30 ) /*0x5f87a3*/
          v31 = File::LoadFileHVA(v30, (int)v54); /*0x5f87af*/
        else
          v31 = 0; /*0x5f87b6*/
        this->ChargerTurrets = v31; /*0x5f87ba*/
        if ( !v31 || *(_BYTE *)v31 ) /*0x5f87c2*/
        {
          v50 = 1; /*0x5f87e4*/
        }
        else
        {
          v32 = VoxelSection::GetInfo(*((_DWORD **)this + 46), 0, 0); /*0x5f87ce*/
          Matrix::Scale(*((unsigned int **)this + 47), *(float *)(v32 + 12)); /*0x5f87dd*/
        }
        v54[0] = &vt_CCFileClass; /*0x5f87f0*/
        v56 = 0; /*0x5f87fb*/
        Vector::Clear((int)v55); /*0x5f8802*/
        v54[0] = &off_7E1668; /*0x5f880e*/
        BufferIOFileClass::Dtor(v54); /*0x5f8819*/
      }
      goto LABEL_92; /*0x5f8819*/
    }
    v24 = this->Insignificant; /*0x5f865f*/
    v25 = 0; /*0x5f8665*/
    if ( v24 > 0 ) /*0x5f8669*/
    {
      while ( VoxelAnimType::LoadSection(this, this + 504, v25) ) /*0x5f8680*/
      {
        if ( ++v25 >= v24 ) /*0x5f8685*/
          goto LABEL_93; /*0x5f8685*/
      }
      v50 = 1; /*0x5f868c*/
    }
  }
  else
  {
    if ( !strcmp(this + 36, MEMORY[0x832AE4]) ) /*0x5f82a1*/
    {
      sprintf(Filename, MEMORY[0x832AE0], this + 504); /*0x5f82e0*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f82fc*/
      CCFileClass::Construct(v51, Buffer); /*0x5f8310*/
      if ( CCFileClass::Open(v51, 0) ) /*0x5f831a*/
      {
        v10 = (WaveClass *)this->BarrelVoxel_e; /*0x5f8327*/
        if ( v10 ) /*0x5f832f*/
        {
          WaveClass::Destroy(this->BarrelVoxel_e); /*0x5f8333*/
          __3_YAXPAX_Z(v10); /*0x5f8339*/
        }
        v11 = __2_YAPAXI_Z(0x1Cu); /*0x5f8343*/
        if ( v11 ) /*0x5f834d*/
          v12 = File::LoadFileVXL(v11, (int)v51, 0); /*0x5f8357*/
        else
          v12 = 0; /*0x5f835e*/
        this->BarrelVoxel_e = v12; /*0x5f8362*/
        if ( !v12 || *(_BYTE *)v12 ) /*0x5f836a*/
          v50 = 1; /*0x5f836e*/
        sprintf(Filename, MEMORY[0x832AE0], this + 504); /*0x5f8381*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f839d*/
        CCFileClass::Construct(v54, Buffer); /*0x5f83b4*/
        v13 = (SomeVoxelCache *)this->ChargerTurrets; /*0x5f83b9*/
        if ( v13 ) /*0x5f83c1*/
        {
          String::Release(*((void ***)this + 47)); /*0x5f83c5*/
          __3_YAXPAX_Z(v13); /*0x5f83cb*/
        }
        v14 = __2_YAPAXI_Z(0x10u); /*0x5f83d5*/
        if ( v14 ) /*0x5f83df*/
          v15 = File::LoadFileHVA(v14, (int)v54); /*0x5f83eb*/
        else
          v15 = 0; /*0x5f83f2*/
        this->ChargerTurrets = v15; /*0x5f83f6*/
        if ( !v15 || *(_BYTE *)v15 ) /*0x5f83fe*/
        {
          v50 = 1; /*0x5f8420*/
        }
        else
        {
          v16 = VoxelSection::GetInfo(*((_DWORD **)this + 46), 0, 0); /*0x5f840a*/
          Matrix::Scale(*((unsigned int **)this + 47), *(float *)(v16 + 12)); /*0x5f8419*/
        }
        v54[0] = &vt_CCFileClass; /*0x5f842c*/
        v56 = 0; /*0x5f8437*/
        Vector::Clear((int)v55); /*0x5f843e*/
        v54[0] = &off_7E1668; /*0x5f844a*/
        BufferIOFileClass::Dtor(v54); /*0x5f8455*/
      }
      v51[0] = &vt_CCFileClass; /*0x5f845e*/
      v53 = 0; /*0x5f8466*/
      Vector::Clear((int)v52); /*0x5f846a*/
      v51[0] = &off_7E1668; /*0x5f8473*/
      BufferIOFileClass::Dtor(v51); /*0x5f847b*/
    }
    if ( this->q7A0 ) /*0x5f8480*/
    {
      sprintf(Filename, MEMORY[0x832AD8], this + 504); /*0x5f84a0*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f84bc*/
      CCFileClass::Construct(v51, Buffer); /*0x5f84d0*/
      if ( CCFileClass::Open(v51, 0) ) /*0x5f84da*/
      {
        v17 = (WaveClass *)this->BarrelVoxel_e; /*0x5f84e7*/
        if ( v17 ) /*0x5f84ef*/
        {
          WaveClass::Destroy(this->BarrelVoxel_e); /*0x5f84f3*/
          __3_YAXPAX_Z(v17); /*0x5f84f9*/
        }
        v18 = __2_YAPAXI_Z(0x1Cu); /*0x5f8503*/
        if ( v18 ) /*0x5f850d*/
          v19 = File::LoadFileVXL(v18, (int)v51, 0); /*0x5f8517*/
        else
          v19 = 0; /*0x5f851e*/
        this->BarrelVoxel_e = v19; /*0x5f8522*/
        if ( !v19 || *(_BYTE *)v19 ) /*0x5f852a*/
          v50 = 1; /*0x5f852e*/
        sprintf(Filename, MEMORY[0x832AD8], this + 504); /*0x5f8541*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f855d*/
        CCFileClass::Construct(v54, Buffer); /*0x5f8574*/
        v20 = (SomeVoxelCache *)this->ChargerTurrets; /*0x5f8579*/
        if ( v20 ) /*0x5f8581*/
        {
          String::Release(*((void ***)this + 47)); /*0x5f8585*/
          __3_YAXPAX_Z(v20); /*0x5f858b*/
        }
        v21 = __2_YAPAXI_Z(0x10u); /*0x5f8595*/
        if ( v21 ) /*0x5f859f*/
          v22 = File::LoadFileHVA(v21, (int)v54); /*0x5f85ab*/
        else
          v22 = 0; /*0x5f85b2*/
        this->ChargerTurrets = v22; /*0x5f85b6*/
        if ( !v22 || *(_BYTE *)v22 ) /*0x5f85be*/
        {
          v50 = 1; /*0x5f85e0*/
        }
        else
        {
          v23 = VoxelSection::GetInfo(*((_DWORD **)this + 46), 0, 0); /*0x5f85ca*/
          Matrix::Scale(*((unsigned int **)this + 47), *(float *)(v23 + 12)); /*0x5f85d9*/
        }
        v54[0] = &vt_CCFileClass; /*0x5f85ec*/
        v56 = 0; /*0x5f85f7*/
        Vector::Clear((int)v55); /*0x5f85fe*/
        v54[0] = &off_7E1668; /*0x5f860a*/
        BufferIOFileClass::Dtor(v54); /*0x5f8615*/
      }
LABEL_92:
      v51[0] = &vt_CCFileClass; /*0x5f881e*/
      v53 = 0; /*0x5f882a*/
      Vector::Clear((int)v52); /*0x5f882e*/
      v51[0] = &off_7E1668; /*0x5f8833*/
      BufferIOFileClass::Dtor(v51); /*0x5f883f*/
    }
  }
LABEL_93:
  if ( (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) != 40 || *(this + 3233) ) /*0x5f8850*/
  {
    if ( (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) == 40 /*0x5f8873*/
      && HouseClass::HasPower(this)
      && !*(this + 3285) )
    {
      v33 = this->Insignificant; /*0x5f887b*/
      v34 = 0; /*0x5f8881*/
      if ( v33 > 0 ) /*0x5f8885*/
      {
        while ( VoxelAnimType::LoadBarrel(this, this + 504, v34) ) /*0x5f889c*/
        {
          if ( ++v34 >= v33 ) /*0x5f88a5*/
            goto LABEL_122; /*0x5f88a5*/
        }
        goto LABEL_123; /*0x5f889c*/
      }
    }
    else
    {
      sprintf(Filename, MEMORY[0x832AD0], this + 504); /*0x5f88c0*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f88dc*/
      CCFileClass::Construct(v51, Buffer); /*0x5f88f0*/
      if ( CCFileClass::Open(v51, 0) ) /*0x5f88fa*/
      {
        v35 = (WaveClass *)this->NoSpawnAlt; /*0x5f8907*/
        if ( v35 ) /*0x5f890f*/
        {
          WaveClass::Destroy(this->NoSpawnAlt); /*0x5f8913*/
          __3_YAXPAX_Z(v35); /*0x5f8919*/
        }
        v36 = __2_YAPAXI_Z(0x1Cu); /*0x5f8923*/
        if ( v36 ) /*0x5f892d*/
          v37 = File::LoadFileVXL(v36, (int)v51, 0); /*0x5f8937*/
        else
          v37 = 0; /*0x5f893e*/
        this->NoSpawnAlt = v37; /*0x5f8942*/
        if ( !v37 || *(_BYTE *)v37 ) /*0x5f894a*/
          v50 = 1; /*0x5f894e*/
        sprintf(Filename, MEMORY[0x832AD0], this + 504); /*0x5f8961*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f897d*/
        CCFileClass::Construct(v54, Buffer); /*0x5f8994*/
        v38 = (void *)this->q031; /*0x5f8999*/
        if ( v38 ) /*0x5f89a1*/
        {
          String::Release(*((void ***)this + 49)); /*0x5f89a5*/
          __3_YAXPAX_Z(v38); /*0x5f89ab*/
        }
        v39 = __2_YAPAXI_Z(0x10u); /*0x5f89b5*/
        if ( v39 ) /*0x5f89bf*/
          v40 = File::LoadFileHVA(v39, (int)v54); /*0x5f89cb*/
        else
          v40 = 0; /*0x5f89d2*/
        this->q031 = v40; /*0x5f89d6*/
        if ( !v40 || *(_BYTE *)v40 ) /*0x5f89de*/
        {
          v50 = 1; /*0x5f8a00*/
        }
        else
        {
          v41 = VoxelSection::GetInfo(*((_DWORD **)this + 48), 0, 0); /*0x5f89ea*/
          Matrix::Scale(*((unsigned int **)this + 49), *(float *)(v41 + 12)); /*0x5f89f9*/
        }
        v54[0] = &vt_CCFileClass; /*0x5f8a0c*/
        v56 = 0; /*0x5f8a17*/
        Vector::Clear((int)v55); /*0x5f8a1e*/
        v54[0] = &off_7E1668; /*0x5f8a2a*/
        BufferIOFileClass::Dtor(v54); /*0x5f8a35*/
      }
      v51[0] = &vt_CCFileClass; /*0x5f8a3e*/
      v53 = 0; /*0x5f8a46*/
      Vector::Clear((int)v52); /*0x5f8a4a*/
      v51[0] = &off_7E1668; /*0x5f8a53*/
      BufferIOFileClass::Dtor(v51); /*0x5f8a5b*/
    }
  }
LABEL_122:
  if ( v50 ) /*0x5f8a64*/
  {
LABEL_123:
    v42 = (WaveClass *)this->ChargerBarrels_0x12; /*0x5f8a6a*/
    if ( v42 ) /*0x5f8a72*/
    {
      WaveClass::Destroy(this->ChargerBarrels_0x12); /*0x5f8a76*/
      __3_YAXPAX_Z(v42); /*0x5f8a7c*/
      this->ChargerBarrels_0x12 = 0; /*0x5f8a84*/
    }
    v43 = (SomeVoxelCache *)this->TurretVoxel; /*0x5f8a8a*/
    if ( v43 ) /*0x5f8a92*/
    {
      String::Release(*((void ***)this + 45)); /*0x5f8a96*/
      __3_YAXPAX_Z(v43); /*0x5f8a9c*/
      this->TurretVoxel = 0; /*0x5f8aa4*/
    }
    if ( (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) == 40 /*0x5f8ac1*/
      && HouseClass::HasPower(this)
      && !*(this + 3285) )
    {
      ObjectTypeClass::CleanupWeapons(this); /*0x5f8acb*/
    }
    else
    {
      v44 = (WaveClass *)this->BarrelVoxel_e; /*0x5f8ad5*/
      if ( v44 ) /*0x5f8add*/
      {
        WaveClass::Destroy(this->BarrelVoxel_e); /*0x5f8ae1*/
        __3_YAXPAX_Z(v44); /*0x5f8ae7*/
        this->BarrelVoxel_e = 0; /*0x5f8aef*/
      }
      v45 = (SomeVoxelCache *)this->ChargerTurrets; /*0x5f8af5*/
      if ( v45 ) /*0x5f8afd*/
      {
        String::Release(*((void ***)this + 47)); /*0x5f8b05*/
        __3_YAXPAX_Z(v45); /*0x5f8b0b*/
        this->ChargerTurrets = 0; /*0x5f8b13*/
      }
    }
    goto LABEL_146; /*0x5f8ad0*/
  }
  v46 = 0; /*0x5f8b2d*/
  v47 = *(unsigned __int8 *)(VoxelSection::GetInfo(*((_DWORD **)this + 44), 0, 0) + 160); /*0x5f8b35*/
  v48 = (_DWORD *)this->ChargerBarrels_0x12; /*0x5f8b37*/
  if ( (int)v48[1] > 0 ) /*0x5f8b40*/
  {
    do /*0x5f8bda*/
    {
      if ( v47 <= *(unsigned __int8 *)(VoxelSection::GetInfo(v48, v46, 0) + 160) ) /*0x5f8b57*/
        v47 = *(unsigned __int8 *)(VoxelSection::GetInfo(*((_DWORD **)this + 44), v46, 0) + 160); /*0x5f8b6e*/
      if ( v47 <= *(unsigned __int8 *)(VoxelSection::GetInfo(*((_DWORD **)this + 44), v46, 0) + 161) ) /*0x5f8b87*/
        v47 = *(unsigned __int8 *)(VoxelSection::GetInfo(*((_DWORD **)this + 44), v46, 0) + 161); /*0x5f8b9e*/
      if ( v47 <= *(unsigned __int8 *)(VoxelSection::GetInfo(*((_DWORD **)this + 44), v46, 0) + 162) ) /*0x5f8bb7*/
        v47 = *(unsigned __int8 *)(VoxelSection::GetInfo(*((_DWORD **)this + 44), v46, 0) + 162); /*0x5f8bce*/
      v48 = (_DWORD *)this->ChargerBarrels_0x12; /*0x5f8bd0*/
      ++v46; /*0x5f8bd6*/
    }
    while ( v46 < v48[1] ); /*0x5f8bda*/
  }
  if ( v47 <= 8 ) /*0x5f8be3*/
    v47 = 8; /*0x5f8be5*/
  this->MaxDimension = v47; /*0x5f8bea*/
  __3_YAXPAX_Z(*((void **)this + 145)); /*0x5f8bf7*/
  this->VoxelCaches[4] = 0; /*0x5f8bfc*/
  this->q248 = 0; /*0x5f8c02*/
  this->q24C = 0; /*0x5f8c08*/
  this->q094 = 0; /*0x5f8c0e*/
  this->tail_95 = 0; /*0x5f8c14*/
  __3_YAXPAX_Z(*((void **)this + 150)); /*0x5f8c21*/
  this->q258 = 0; /*0x5f8c26*/
  this->q25C = 0; /*0x5f8c2c*/
  this->q098 = 0; /*0x5f8c32*/
  *(this + 612) = 0; /*0x5f8c38*/
  this->q268 = 0; /*0x5f8c3e*/
  __3_YAXPAX_Z(*((void **)this + 155)); /*0x5f8c4b*/
  this->unused_9B = 0; /*0x5f8c50*/
  this->Armor = 0; /*0x5f8c56*/
  this->q274 = 0; /*0x5f8c5c*/
  *(this + 632) = 0; /*0x5f8c62*/
  this->q27C = 0; /*0x5f8c68*/
  __3_YAXPAX_Z(*((void **)this + 160)); /*0x5f8c75*/
  this->Strength = 0; /*0x5f8c7d*/
  this->q284 = 0; /*0x5f8c83*/
  this->q288 = 0; /*0x5f8c89*/
  *(this + 652) = 0; /*0x5f8c8f*/
  this->Image = 0; /*0x5f8c95*/
LABEL_146:
  v58[0] = &vt_CCFileClass; /*0x5f8c9b*/
  v60 = 0; /*0x5f8cad*/
  Vector::Clear((int)v59); /*0x5f8cb4*/
  v58[0] = &off_7E1668; /*0x5f8cc0*/
  return BufferIOFileClass::Dtor(v58); /*0x5f8cd0*/
}


// ==== 0x005F8CE0  Turret::LoadVoxelTurretAndBarrel  this=TechnoTypeClass  sig=csp ====
char __thiscall LoadVoxelTurretAndBarrel(void *this)
{
  int v2; // eax
  void *v3; // edi
  _DWORD *v4; // eax
  _DWORD *File; // eax
  void *v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  int Info; // eax
  void *v11; // edi
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  void *v14; // edi
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // ecx
  int v18; // eax
  _DWORD v20[22]; // [esp+8h] [ebp-348h] BYREF
  _BYTE v21[12]; // [esp+60h] [ebp-2F0h] BYREF
  int v22; // [esp+6Ch] [ebp-2E4h]
  _DWORD v23[22]; // [esp+74h] [ebp-2DCh] BYREF
  _BYTE v24[12]; // [esp+CCh] [ebp-284h] BYREF
  int v25; // [esp+D8h] [ebp-278h]
  _DWORD v26[22]; // [esp+E0h] [ebp-270h] BYREF
  _BYTE v27[12]; // [esp+138h] [ebp-218h] BYREF
  int v28; // [esp+144h] [ebp-20Ch]
  char Buffer[256]; // [esp+14Ch] [ebp-204h] BYREF
  char Source[260]; // [esp+24Ch] [ebp-104h] BYREF

  v2 = (*(int (__thiscall **)(void *))(this->ChargerBarrels_0x12)(this); /*0x5f8cec*/
  if ( v2 == 40 ) /*0x5f8cf2*/
  {
    v2 = (*(int (__thiscall **)(void *))(this->Armor)(this); /*0x5f8cfc*/
    if ( v2 ) /*0x5f8d04*/
    {
      LOBYTE(v2) = this->Turret; /*0x5f8d0a*/
      if ( (_BYTE)v2 ) /*0x5f8d14*/
      {
        sprintf(Buffer, MEMORY[0x832ABC], (const char *)this + 504); /*0x5f8d30*/
        _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f8d4c*/
        CCFileClass::Construct(v26, Source); /*0x5f8d63*/
        if ( CCFileClass::Open(v26, 0) ) /*0x5f8d70*/
        {
          v3 = (void *)this->q0B8; /*0x5f8d7d*/
          if ( v3 ) /*0x5f8d85*/
          {
            WaveClass::Destroy(this->q0B8); /*0x5f8d89*/
            __3_YAXPAX_Z(v3); /*0x5f8d8f*/
          }
          v4 = __2_YAPAXI_Z(0x1Cu); /*0x5f8d99*/
          if ( v4 ) /*0x5f8da3*/
            File = File::LoadFileVXL(v4, (int)v26, 0); /*0x5f8db0*/
          else
            File = 0; /*0x5f8db7*/
          this->q0B8 = File; /*0x5f8dbb*/
          if ( File && !*(_BYTE *)File ) /*0x5f8dc7*/
          {
            sprintf(Buffer, MEMORY[0x832ABC], (const char *)this + 504); /*0x5f8ddd*/
            _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f8df9*/
            CCFileClass::Construct(v20, Source); /*0x5f8e0d*/
            v6 = (void *)this->ChargerTurrets; /*0x5f8e12*/
            if ( v6 ) /*0x5f8e1a*/
            {
              String::Release(*((void ***)this + 47)); /*0x5f8e1e*/
              __3_YAXPAX_Z(v6); /*0x5f8e24*/
            }
            v7 = __2_YAPAXI_Z(0x10u); /*0x5f8e2e*/
            if ( v7 ) /*0x5f8e38*/
              v8 = File::LoadFileHVA(v7, (int)v20); /*0x5f8e41*/
            else
              v8 = 0; /*0x5f8e48*/
            v9 = (_DWORD *)this->q0B8; /*0x5f8e4a*/
            this->ChargerTurrets = v8; /*0x5f8e52*/
            Info = VoxelSection::GetInfo(v9, 0, 0); /*0x5f8e58*/
            Matrix::Scale(*((unsigned int **)this + 47), *(float *)(Info + 12)); /*0x5f8e67*/
            v20[0] = &vt_CCFileClass; /*0x5f8e70*/
            v22 = 0; /*0x5f8e78*/
            Vector::Clear((int)v21); /*0x5f8e7c*/
            v20[0] = &off_7E1668; /*0x5f8e85*/
            BufferIOFileClass::Dtor(v20); /*0x5f8e8d*/
          }
        }
        sprintf(Buffer, MEMORY[0x832AD0], (const char *)this + 504); /*0x5f8ea0*/
        _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f8ebc*/
        CCFileClass::Construct(v23, Source); /*0x5f8ed0*/
        if ( CCFileClass::Open(v23, 0) ) /*0x5f8edd*/
        {
          v11 = (void *)this->TargetSpecialThreatCoefficient; /*0x5f8eea*/
          if ( v11 ) /*0x5f8ef2*/
          {
            WaveClass::Destroy(this->TargetSpecialThreatCoefficient); /*0x5f8ef6*/
            __3_YAXPAX_Z(v11); /*0x5f8efc*/
          }
          v12 = __2_YAPAXI_Z(0x1Cu); /*0x5f8f06*/
          if ( v12 ) /*0x5f8f10*/
            v13 = File::LoadFileVXL(v12, (int)v23, 0); /*0x5f8f1a*/
          else
            v13 = 0; /*0x5f8f21*/
          this->TargetSpecialThreatCoefficient = v13; /*0x5f8f25*/
          if ( v13 && !*(_BYTE *)v13 ) /*0x5f8f31*/
          {
            sprintf(Buffer, MEMORY[0x832AD0], (const char *)this + 504); /*0x5f8f47*/
            _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f8f63*/
            CCFileClass::Construct(v20, Source); /*0x5f8f77*/
            v14 = (void *)this->q031; /*0x5f8f7c*/
            if ( v14 ) /*0x5f8f84*/
            {
              String::Release(*((void ***)this + 49)); /*0x5f8f88*/
              __3_YAXPAX_Z(v14); /*0x5f8f8e*/
            }
            v15 = __2_YAPAXI_Z(0x10u); /*0x5f8f98*/
            if ( v15 ) /*0x5f8fa2*/
              v16 = File::LoadFileHVA(v15, (int)v20); /*0x5f8fab*/
            else
              v16 = 0; /*0x5f8fb2*/
            v17 = (_DWORD *)this->TargetSpecialThreatCoefficient; /*0x5f8fb4*/
            this->q031 = v16; /*0x5f8fbc*/
            v18 = VoxelSection::GetInfo(v17, 0, 0); /*0x5f8fc2*/
            Matrix::Scale(*((unsigned int **)this + 49), *(float *)(v18 + 12)); /*0x5f8fd1*/
            v20[0] = &vt_CCFileClass; /*0x5f8fda*/
            v22 = 0; /*0x5f8fe2*/
            Vector::Clear((int)v21); /*0x5f8fe6*/
            v20[0] = &off_7E1668; /*0x5f8fef*/
            BufferIOFileClass::Dtor(v20); /*0x5f8ff7*/
          }
        }
        v23[0] = &vt_CCFileClass; /*0x5f9008*/
        v25 = 0; /*0x5f900c*/
        Vector::Clear((int)v24); /*0x5f9013*/
        v23[0] = &off_7E1668; /*0x5f9021*/
        BufferIOFileClass::Dtor(v23); /*0x5f9025*/
        v26[0] = &vt_CCFileClass; /*0x5f9031*/
        v28 = 0; /*0x5f9038*/
        Vector::Clear((int)v27); /*0x5f903f*/
        v26[0] = &off_7E1668; /*0x5f904b*/
        LOBYTE(v2) = BufferIOFileClass::Dtor(v26); /*0x5f9052*/
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

  if ( this->AlternateArcticArt_e && *((_DWORD *)MEMORY[0xA8B230] + 1174) == 1 && !this->ImageAllocated ) /*0x5f9096*/
  {
    if ( !this->ArcticArtInUse_e ) /*0x5f90a0*/
    {
      v2 = this + 504; /*0x5f90ab*/
      sprintf(Buffer, MEMORY[0x832AE8], this + 504); /*0x5f90bf*/
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
      this->ArcticArtInUse_e = 1; /*0x5f9108*/
    }
  }
  else
  {
    this->ArcticArtInUse_e = 0; /*0x5f9112*/
  }
  _makepath(&Source, 0, 0, this + 504, Ext); /*0x5f912e*/
  if ( this->Theater_e ) /*0x5f9133*/
  {
    _makepath(&Source, 0, 0, this + 504, (const char *)&off_7E1BC6 + 112 * *((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x5f9169*/
  }
  else if ( this->NewTheater_e ) /*0x5f9173*/
  {
    v3 = *((_DWORD *)MEMORY[0xA8B230] + 1174); /*0x5f9183*/
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
  if ( this->ImageAllocated && this->Image ) /*0x5f91eb*/
    __3_YAXPAX_Z(*((void **)this + 41)); /*0x5f91f6*/
  v6 = *(_DWORD *)this; /*0x5f91fe*/
  this->Image = 0; /*0x5f9203*/
  this->ImageAllocated = 0; /*0x5f920d*/
  if ( (*(int (__thiscall **)(char *))(v6 + 44))(this) == 21 /*0x5f9227*/
    || (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) == 5 )
  {
    v9 = SearchMIXFile(&Source, 1); /*0x5f9267*/
    this->Image = v9; /*0x5f926e*/
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
    this->Image = v7; /*0x5f9250*/
    if ( !v7 ) /*0x5f9256*/
    {
      v15 = 71; /*0x5f9258*/
      v8 = 0; /*0x5f925d*/
LABEL_40:
      this->Image = SearchMIXFile(&Source, v8); /*0x5f927d*/
    }
  }
LABEL_41:
  result = this->Image; /*0x5f928c*/
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
char __thiscall ObjectTypeClass::LoadFromINI(char *this, CCINIClass *aP1)
{
  int v3; // edi
  int Index; // eax
  int v5; // edi
  int v6; // eax
  char v7; // cl
  char Bool_Overwrite; // al
  char v9; // al
  char v10; // cl
  char v11; // al
  char v12; // al
  char v13; // cl
  char v14; // al
  int Int_Overwrite; // eax
  char v16; // cl
  char v17; // al
  int Coord; // eax
  char v19; // cl
  char v20; // al
  int v21; // eax
  int v22; // eax
  char v23; // cl
  char v24; // al
  char v25; // al
  char v27; // [esp-Ch] [ebp-1B8h]
  char v28; // [esp-Ch] [ebp-1B8h]
  CCINIClass *v29; // [esp-Ch] [ebp-1B8h]
  char v30; // [esp-Ch] [ebp-1B8h]
  char v31; // [esp-Ch] [ebp-1B8h]
  CCINIClass *v32; // [esp-Ch] [ebp-1B8h]
  char v33; // [esp-Ch] [ebp-1B8h]
  CCINIClass v34; // [esp+8h] [ebp-1A4h] BYREF
  char Buffer[260]; // [esp+A8h] [ebp-104h] BYREF

  INIClass::ResetSection(aP1); /*0x5f92e3*/
  if ( !AbstractTypeClass::LoadFromINI((int)this, (AbstractTypeClass *)aP1) ) /*0x5f92eb*/
    return 0; /*0x5f969e*/
  strcpy((char *)v34.headNode, this + 504); /*0x5f931c*/
  INIClass::GetString( /*0x5f933b*/
    (unsigned __int8 ***)aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&g_INI_Key_Image,
    (INIClass *)v34.headNode,
    (INIClass *)(this + 504),
    25);
  *(_DWORD *)v34.__pad_0 = strcpy((char *)v34.headNode, this + 531); /*0x5f9366*/
  INIClass::GetString( /*0x5f9386*/
    (unsigned __int8 ***)aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&stru_830620.__pad_14B0[4400],
    (INIClass *)v34.headNode,
    (INIClass *)(this + 531),
    25);
  v3 = this->CrushSound; /*0x5f938b*/
  if ( INIClass::GetString( /*0x5f93a8*/
         (unsigned __int8 ***)aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_830620.__pad_14B0[4388],
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         (INIClass *)v34.__pad_20,
         128) )
  {
    Index = VocClass::FindIndex(v34.__pad_20); /*0x5f93b5*/
    if ( Index != -1 ) /*0x5f93bd*/
      v3 = Index; /*0x5f93bf*/
  }
  this->CrushSound = v3; /*0x5f93d5*/
  v5 = this->AmbientSound; /*0x5f93db*/
  if ( !INIClass::GetString( /*0x5f93f9*/
          (unsigned __int8 ***)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620.__pad_14B0[4372],
          (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
          (INIClass *)v34.__pad_20,
          128)
    || (v6 = VocClass::FindIndex(v34.__pad_20), v6 == -1) )
  {
    v6 = v5; /*0x5f93fb*/
  }
  v7 = this->Crushable_e; /*0x5f93fd*/
  this->AmbientSound = v6; /*0x5f9403*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5f9412*/
                     (int)aP1,
                     (unsigned __int8 *)this + 36,
                     (CCINIClass *)&stru_830620.__pad_14B0[4360],
                     v7);
  v27 = this->Bombable_e; /*0x5f941f*/
  this->Crushable_e = Bool_Overwrite; /*0x5f9426*/
  this->Bombable_e = INIClass::ReadBool_Overwrite( /*0x5f9431*/
                    (int)aP1,
                    (unsigned __int8 *)this + 36,
                    (CCINIClass *)&stru_830620.__pad_14B0[4348],
                    v27);
  v9 = INIClass::ReadBool_Overwrite( /*0x5f9446*/
         (int)aP1,
         (unsigned __int8 *)this + 36,
         (CCINIClass *)&stru_830620.__pad_14B0[4336],
         this->q7A0);
  v10 = this->AlternateArcticArt_e; /*0x5f944b*/
  this->q7A0 = v9; /*0x5f9451*/
  v11 = INIClass::ReadBool_Overwrite( /*0x5f9460*/
          (int)aP1,
          (unsigned __int8 *)this + 36,
          (CCINIClass *)&stru_830620.__pad_14B0[4316],
          v10);
  v28 = this->RadarInvisible_e; /*0x5f946d*/
  this->AlternateArcticArt_e = v11; /*0x5f9474*/
  this->RadarInvisible_e = INIClass::ReadBool_Overwrite( /*0x5f947f*/
                    (int)aP1,
                    (unsigned __int8 *)this + 36,
                    (CCINIClass *)&stru_830620.__pad_14B0[4300],
                    v28);
  v12 = INIClass::ReadBool_Overwrite( /*0x5f9494*/
          (int)aP1,
          (unsigned __int8 *)this + 36,
          (CCINIClass *)&stru_830620.__pad_14B0[4288],
          this->Selectable_e);
  v13 = this->LegalTarget_e; /*0x5f9499*/
  this->Selectable_e = v12; /*0x5f949f*/
  v14 = INIClass::ReadBool_Overwrite( /*0x5f94ae*/
          (int)aP1,
          (unsigned __int8 *)this + 36,
          (CCINIClass *)&stru_830620.__pad_14B0[4276],
          v13);
  v29 = (CCINIClass *)this->Armor; /*0x5f94bb*/
  this->LegalTarget_e = v14; /*0x5f94c2*/
  this->Armor = ArmorType::FindIndex( /*0x5f94cd*/
                             (unsigned __int8 ***)aP1,
                             (CCINIClass *)(this + 36),
                             (unsigned __int8 *)&g_INI_Key_Speed.headNode[1],
                             (int)v29);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x5f94e2*/
                    (int)aP1,
                    (unsigned __int8 *)this + 36,
                    (CCINIClass *)&stru_830620.__pad_14B0[4264],
                    *((INIClass **)this + 40));
  v16 = this->Immune_e; /*0x5f94e7*/
  this->ChargerTurrets_0x12 = Int_Overwrite; /*0x5f94ed*/
  v17 = INIClass::ReadBool_Overwrite( /*0x5f94fc*/
          (int)aP1,
          (unsigned __int8 *)this + 36,
          (CCINIClass *)&stru_830620.__pad_14B0[4256],
          v16);
  v30 = this->Insignificant_e; /*0x5f9509*/
  this->Immune_e = v17; /*0x5f9510*/
  this->Insignificant_e = INIClass::ReadBool_Overwrite( /*0x5f951b*/
                    (int)aP1,
                    (unsigned __int8 *)this + 36,
                    (CCINIClass *)&stru_830620.__pad_14B0[4240],
                    v30);
  this->HasRadialIndicator_e = INIClass::ReadBool_Overwrite( /*0x5f9549*/
                    (int)aP1,
                    (unsigned __int8 *)this + 36,
                    (CCINIClass *)&stru_830620.__pad_14B0[4220],
                    this->HasRadialIndicator_e);
  Coord = INIClass::GetCoord( /*0x5f954f*/
            (unsigned __int8 ***)aP1,
            &v34,
            (INIClass *)(this + 36),
            (Color *)&stru_830620.__pad_14B0[4208],
            (Color *)this + 38);
  v19 = this->IgnoresFirestorm_e; /*0x5f9557*/
  this->q04C = *(_WORD *)Coord; /*0x5f955d*/
  this->q268 = *(_BYTE *)(Coord + 2); /*0x5f956c*/
  v20 = INIClass::ReadBool_Overwrite( /*0x5f956f*/
          (int)aP1,
          (unsigned __int8 *)this + 36,
          (CCINIClass *)&stru_830620.__pad_14B0[4188],
          v19);
  v31 = this->UseLineTrail_e; /*0x5f9580*/
  this->IgnoresFirestorm_e = v20; /*0x5f958c*/
  this->UseLineTrail_e = INIClass::ReadBool_Overwrite( /*0x5f959d*/
                    (int)&MEMORY[0x87F8E4].__pad_5568[9012],
                    (unsigned __int8 *)this + 504,
                    (CCINIClass *)&stru_830620.__pad_14B0[4172],
                    v31);
  v21 = INIClass::GetCoord( /*0x5f95b4*/
          (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
          &v34,
          (INIClass *)(this + 504),
          (Color *)&stru_830620.__pad_14B0[4156],
          (Color *)(this + 571));
  *(_WORD *)(this + 571) = *(_WORD *)v21; /*0x5f95bc*/
  v32 = (CCINIClass *)this->LineTrailColorDecrement; /*0x5f95cd*/
  *(this + 573) = *(_BYTE *)(v21 + 2); /*0x5f95d4*/
  v22 = INIClass::ReadInt_Overwrite( /*0x5f95d7*/
          (int)&MEMORY[0x87F8E4].__pad_5568[9012],
          (unsigned __int8 *)this + 504,
          (CCINIClass *)&stru_830620.__pad_14B0[4132],
          (INIClass *)v32);
  v23 = this->Theater_e; /*0x5f95dc*/
  this->LineTrailColorDecrement = v22; /*0x5f95e2*/
  v24 = INIClass::ReadBool_Overwrite( /*0x5f95f4*/
          (int)&MEMORY[0x87F8E4].__pad_5568[9012],
          (unsigned __int8 *)this + 504,
          &unk_818658,
          v23);
  v33 = this->NewTheater_e; /*0x5f9604*/
  this->Theater_e = v24; /*0x5f960b*/
  this->NewTheater_e = INIClass::ReadBool_Overwrite( /*0x5f9616*/
                    (int)&MEMORY[0x87F8E4].__pad_5568[9012],
                    (unsigned __int8 *)this + 504,
                    &unk_81864C,
                    v33);
  v25 = INIClass::ReadBool_Overwrite( /*0x5f962e*/
          (int)&MEMORY[0x87F8E4].__pad_5568[9012],
          (unsigned __int8 *)this + 504,
          (CCINIClass *)&stru_830620.__pad_14B0[4124],
          this->Voxel_e);
  this->Voxel_e = v25; /*0x5f9634*/
  if ( !v25 && (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) != 5 ) /*0x5f9649*/
    ObjectTypeClass::Load2DArt(this); /*0x5f964d*/
  if ( this->AlphaImageFile ) /*0x5f9652*/
  {
    _makepath(Buffer, 0, 0, this + 531, Ext); /*0x5f9674*/
    this->q02B = SearchMIXFile(Buffer, 0); /*0x5f968a*/
  }
  return 1; /*0x5f9690*/
}


// ==== 0x005F96B0  TheaterObjectTypeClassSpecificID  this=ScenarioClass  sig=csp ====
void __fastcall TheaterObjectTypeClassSpecificID(char *a1, int a2)
{
  char v2; // al
  char v3; // bl

  if ( a2 != -1 ) /*0x5f96b4*/
  {
    v2 = *a1; /*0x5f96b6*/
    v3 = a1[1]; /*0x5f96b8*/
    if ( *a1 >= 65 && v2 <= 90 ) /*0x5f96c1*/
      v2 += 32; /*0x5f96c3*/
    if ( v3 >= 65 && v3 <= 90 ) /*0x5f96cd*/
      v3 += 32; /*0x5f96cf*/
    if ( (v2 == 103 || v2 == 110 || v2 == 99 || v2 == 121) && (v3 == 97 || v3 == 116) ) /*0x5f96ea*/
      a1[1] = byte_7E1BCE[112 * a2]; /*0x5f96fe*/
  }
}


// ==== 0x005F9710  ObjectTypeClass::SetRTTI71  this=ObjectTypeClass  sig=csp ====
void __thiscall ObjectTypeClass_SetRTTI71(_BYTE *this)
{
  this->vtable2 = 71; /*0x5f9710*/
}


// ==== 0x005F9720  ObjectTypeClass::LoadCleanup  this=ObjectTypeClass  sig=csp ====
int __stdcall ObjectTypeClass::LoadCleanup(IUnknown *aP0, ObjectTypeClass *aP1)
{
  void *v2; // ebp
  void **v3; // ebp
  void *v4; // ebp
  void **v5; // ebp
  void *v6; // ebp
  void **v7; // ebp
  int result; // eax
  char *v9; // eax
  int v10; // ecx
  IUnknown *v11; // edx
  char Buffer[260]; // [esp+10h] [ebp-104h] BYREF

  __3_YAXPAX_Z(*(void **)&aP0->__pad_220[36]); /*0x5f973e*/
  *(_DWORD *)&aP0->__pad_220[36] = 0; /*0x5f974e*/
  *(_DWORD *)&aP0->__pad_220[40] = 0; /*0x5f9750*/
  *(_DWORD *)&aP0->__pad_220[44] = 0; /*0x5f9753*/
  aP0->__pad_220[48] = 0; /*0x5f9756*/
  *(_DWORD *)&aP0->__pad_220[52] = 0; /*0x5f9759*/
  ObjectTypeClass::FreeLoaderBuffer((int)&aP0->__pad_220[56]); /*0x5f975c*/
  ObjectTypeClass::FreeLoaderBuffer((int)&aP0->__pad_220[76]); /*0x5f9767*/
  ObjectTypeClass::FreeLoaderBuffer((int)&aP0->__pad_220[96]); /*0x5f9772*/
  v2 = *(void **)&aP0->__pad_A8[8]; /*0x5f9777*/
  if ( v2 ) /*0x5f977f*/
  {
    WaveClass::Destroy(*(_DWORD *)&aP0->__pad_A8[8]); /*0x5f9783*/
    __3_YAXPAX_Z(v2); /*0x5f9789*/
  }
  v3 = *(void ***)&aP0->__pad_A8[12]; /*0x5f9791*/
  *(_DWORD *)&aP0->__pad_A8[8] = 0; /*0x5f9797*/
  if ( v3 ) /*0x5f979f*/
  {
    String::Release(v3); /*0x5f97a3*/
    __3_YAXPAX_Z(v3); /*0x5f97a9*/
  }
  v4 = *(void **)&aP0->__pad_A8[16]; /*0x5f97b1*/
  *(_DWORD *)&aP0->__pad_A8[12] = 0; /*0x5f97b7*/
  if ( v4 ) /*0x5f97bf*/
  {
    WaveClass::Destroy((int)v4); /*0x5f97c3*/
    __3_YAXPAX_Z(v4); /*0x5f97c9*/
  }
  v5 = *(void ***)&aP0->__pad_A8[20]; /*0x5f97d1*/
  *(_DWORD *)&aP0->__pad_A8[16] = 0; /*0x5f97d7*/
  if ( v5 ) /*0x5f97df*/
  {
    String::Release(v5); /*0x5f97e3*/
    __3_YAXPAX_Z(v5); /*0x5f97e9*/
  }
  v6 = *(void **)&aP0->__pad_A8[24]; /*0x5f97f1*/
  *(_DWORD *)&aP0->__pad_A8[20] = 0; /*0x5f97f7*/
  if ( v6 ) /*0x5f97ff*/
  {
    WaveClass::Destroy((int)v6); /*0x5f9803*/
    __3_YAXPAX_Z(v6); /*0x5f9809*/
  }
  v7 = *(void ***)&aP0->__pad_A8[28]; /*0x5f9811*/
  *(_DWORD *)&aP0->__pad_A8[24] = 0; /*0x5f9817*/
  if ( v7 ) /*0x5f981f*/
  {
    String::Release(v7); /*0x5f9823*/
    __3_YAXPAX_Z(v7); /*0x5f9829*/
  }
  *(_DWORD *)&aP0->__pad_A8[28] = 0; /*0x5f9833*/
  ObjectTypeClass::CleanupWeapons((char *)aP0); /*0x5f9839*/
  result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1); /*0x5f9847*/
  if ( result >= 0 ) /*0x5f984e*/
  {
    aP0->field_A4 = 0; /*0x5f9856*/
    aP0->__pad_A8[0] = 0; /*0x5f985c*/
    *(_DWORD *)&aP0->__pad_A8[4] = 0; /*0x5f9862*/
    if ( aP0 != (IUnknown *)-580 ) /*0x5f9868*/
    {
      *(_DWORD *)&aP0->__pad_220[36] = 0; /*0x5f986a*/
      *(_DWORD *)&aP0->__pad_220[40] = 0; /*0x5f986c*/
      *(_DWORD *)&aP0->__pad_220[44] = 0; /*0x5f986f*/
      aP0->__pad_220[48] = 0; /*0x5f9872*/
      *(_DWORD *)&aP0->__pad_220[52] = 0; /*0x5f9875*/
    }
    if ( aP0 != (IUnknown *)-600 ) /*0x5f9880*/
    {
      *(_DWORD *)&aP0->__pad_220[56] = 0; /*0x5f9882*/
      *(_DWORD *)&aP0->__pad_220[60] = 0; /*0x5f9884*/
      *(_DWORD *)&aP0->__pad_220[64] = 0; /*0x5f9887*/
      aP0->__pad_220[68] = 0; /*0x5f988a*/
      *(_DWORD *)&aP0->__pad_220[72] = 0; /*0x5f988d*/
    }
    if ( aP0 != (IUnknown *)-620 ) /*0x5f9898*/
    {
      *(_DWORD *)&aP0->__pad_220[76] = 0; /*0x5f989a*/
      *(_DWORD *)&aP0->__pad_220[80] = 0; /*0x5f989c*/
      *(_DWORD *)&aP0->__pad_220[84] = 0; /*0x5f989f*/
      aP0->__pad_220[88] = 0; /*0x5f98a2*/
      *(_DWORD *)&aP0->__pad_220[92] = 0; /*0x5f98a5*/
    }
    if ( aP0 != (IUnknown *)-640 ) /*0x5f98b0*/
    {
      *(_DWORD *)&aP0->__pad_220[96] = 0; /*0x5f98b2*/
      *(_DWORD *)&aP0->__pad_220[100] = 0; /*0x5f98b4*/
      *(_DWORD *)&aP0->__pad_220[104] = 0; /*0x5f98b7*/
      aP0->__pad_220[108] = 0; /*0x5f98ba*/
      *(_DWORD *)&aP0->__pad_220[112] = 0; /*0x5f98bd*/
    }
    *(_DWORD *)&aP0->__pad_A8[8] = 0; /*0x5f98c0*/
    *(_DWORD *)&aP0->__pad_A8[12] = 0; /*0x5f98c6*/
    *(_DWORD *)&aP0->__pad_A8[16] = 0; /*0x5f98cc*/
    *(_DWORD *)&aP0->__pad_A8[20] = 0; /*0x5f98d2*/
    *(_DWORD *)&aP0->__pad_A8[24] = 0; /*0x5f98d8*/
    *(_DWORD *)&aP0->__pad_A8[28] = 0; /*0x5f98de*/
    v9 = &aP0->__pad_A8[36]; /*0x5f98e4*/
    v10 = 18; /*0x5f98ea*/
    do /*0x5f9904*/
    {
      *((_DWORD *)v9 - 1) = 0; /*0x5f98ef*/
      *(_DWORD *)v9 = 0; /*0x5f98f2*/
      *((_DWORD *)v9 + 35) = 0; /*0x5f98f4*/
      *((_DWORD *)v9 + 36) = 0; /*0x5f98fa*/
      v9 += 8; /*0x5f9900*/
      --v10; /*0x5f9903*/
    }
    while ( v10 ); /*0x5f9904*/
    if ( aP0->__pad_1D8[59] ) /*0x5f9906*/
    {
      _makepath(Buffer, 0, 0, (ObjectClass *)&aP0->__pad_1D8[59], Ext); /*0x5f9923*/
      LOBYTE(v11) = 0; /*0x5f992b*/
      *(_DWORD *)&aP0->__pad_A8[4] = SearchMIXFile(Buffer, v11); /*0x5f9936*/
    }
    return 0; /*0x5f993c*/
  }
  return result; /*0x5f993e*/
}


// ==== 0x005F9950  AbstractClass::SaveLoad_PrefixWrapper  this=ObjectTypeClass  sig=csp ====
int __stdcall AbstractClass::SaveLoad_PrefixWrapper(TechnoTypeClass *aP0, ObjectTypeClass *aP1, TechnoTypeClass *aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, aP1, (ObjectTypeClass *)aP2); /*0x5f995f*/
  if ( result >= 0 ) /*0x5f9966*/
    return 0; /*0x5f9968*/
  return result; /*0x5f996a*/
}


// ==== 0x005F9970  ObjectTypeClass::GetSizeMaxWrapper  this=ObjectTypeClass  sig=csp ====
int __stdcall COMObject::GetSizeMaxWrapper(AbstractClass *aP0, AbstractClass *aP1)
{
  int result; // eax

  result = ObjectClass::GetSizeMax((#374 *)aP0); /*0x5f997a*/
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
  if ( MEMORY[0xAC1428] <= 0 ) /*0x5f99ed*/
  {
    MEMORY[0x887468] = MEMORY[0x887464]; /*0x5f9acb*/
    return MEMORY[0x887464]; /*0x5f9ac5*/
  }
  else
  {
    do /*0x5f9aaf*/
    {
      v1 = *((_DWORD *)MEMORY[0xAC141C] + v0); /*0x5f99f9*/
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
      result = MEMORY[0xAC1428]; /*0x5f9aa7*/
      ++v0; /*0x5f9aac*/
    }
    while ( v0 < MEMORY[0xAC1428] ); /*0x5f9aaf*/
    MEMORY[0x887468] = MEMORY[0x887464]; /*0x5f9abd*/
  }
  return result; /*0x5f9abc*/
}


// ==== 0x005F9AE0  ObjectTypeClass::Destru_vt08  this=ObjectTypeClass  sig=csp ====
ObjectTypeClass *__thiscall ObjectTypeClass::Destru_vt08(void *Block, char a2)
{
  ObjectTypeClass::Destruct((int)Block); /*0x5f9ae3*/
  if ( (a2 & 1) != 0 ) /*0x5f9aed*/
    __3_YAXPAX_Z(Block); /*0x5f9af0*/
  return (ObjectTypeClass *)Block; /*0x5f9afa*/
}


// ==== 0x005F9B00  _DynamicVectorClass_PAVObjectTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_ObjectTypeClass::sub_5F9B00(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5f9b06*/
  *(_DWORD *)(this + 16) = 0; /*0x5f9b09*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5f9b10*/
  {
    __3_YAXPAX_Z(v2); /*0x5f9b16*/
    *(_DWORD *)(this + 4) = 0; /*0x5f9b1e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5f9b21*/
  *(_DWORD *)(this + 8) = 0; /*0x5f9b24*/
}


// ==== 0x005F9B30  _DynamicVectorClass_PAVObjectTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ObjectTypeClass::sub_5F9B30(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5f9b30*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5f9b45*/
  else
    return 0; /*0x5f9b37*/
}


// ==== 0x005F9B50  _VectorClass_PAVObjectTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ObjectTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5f9b5a*/
}


// ==== 0x005F9B60  ObjectTypeClass::FreeLoaderBuffer  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::FreeLoaderBuffer(int this)
{
  __3_YAXPAX_Z(*(void **)this); /*0x5f9b66*/
  *(_DWORD *)this = 0; /*0x5f9b70*/
  *(_DWORD *)(this + 4) = 0; /*0x5f9b72*/
  *(_DWORD *)(this + 8) = 0; /*0x5f9b75*/
  *(_BYTE *)(this + 12) = 0; /*0x5f9b78*/
  *(_DWORD *)(this + 16) = 0; /*0x5f9b7b*/
  return 0; /*0x5f9b7e*/
}


// ==== 0x005F9B80  _VectorClass_PAVObjectTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ObjectTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x5f9b82*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5f9b8d*/
  {
    v3 = 0; /*0x5f9b8f*/
    if ( v2 <= 0 ) /*0x5f9b93*/
      return 1; /*0x5f9bb3*/
    v4 = (_DWORD *)this->Items; /*0x5f9b95*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5f9b9b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5f9ba4*/
    {
      ++v3; /*0x5f9ba6*/
      ++v4; /*0x5f9ba7*/
      if ( v3 >= v2 ) /*0x5f9bac*/
        return 1; /*0x5f9bac*/
    }
  }
  return 0; /*0x5f9bae*/
}


// ==== 0x005F9BC0  _VectorClass_PAVObjectTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ObjectTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5f9bcc*/
  {
    this->IsInitialized = 0; /*0x5f9bd6*/
    if ( a3 ) /*0x5f9bdc*/
      v4 = a3; /*0x5f9bf2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5f9bee*/
    this->IsInitialized = 1; /*0x5f9bf6*/
    if ( v4 ) /*0x5f9bfa*/
    {
      if ( this->Items ) /*0x5f9c05*/
      {
        v6 = this->Capacity; /*0x5f9c0c*/
        if ( a2 < v6 ) /*0x5f9c11*/
          v6 = a2; /*0x5f9c13*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5f9c19*/
          ++i; /*0x5f9c1e*/
        if ( this->IsAllocated ) /*0x5f9c2b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5f9c36*/
          this->Items = 0; /*0x5f9c3e*/
        }
      }
      this->Items = v4; /*0x5f9c47*/
      this->Capacity = a2; /*0x5f9c4f*/
      this->IsAllocated = a3 == 0; /*0x5f9c52*/
      return 1; /*0x5f9c58*/
    }
    else
    {
      return 0; /*0x5f9bff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5f9c62*/
    return 1; /*0x5f9c68*/
  }
}


// ==== 0x005F9C70  _VectorClass_PAVObjectTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ObjectTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5f9c7d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5f9c83*/
    *(_DWORD *)(this + 4) = 0; /*0x5f9c8b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5f9c8e*/
  *(_DWORD *)(this + 8) = 0; /*0x5f9c91*/
}


// ==== 0x005F9CA0  _VectorClass_PAVObjectTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ObjectTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5f9ca0*/
    return 0; /*0x5f9ca8*/
  v3 = *(_DWORD *)(this + 8); /*0x5f9cae*/
  result = 0; /*0x5f9cb1*/
  if ( v3 <= 0 ) /*0x5f9cb5*/
    return -1; /*0x5f9ccc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5f9cbb*/
  {
    if ( ++result >= v3 ) /*0x5f9cca*/
      return -1; /*0x5f9cca*/
  }
  return result; /*0x5f9caa*/
}


// ==== 0x005F9CE0  _VectorClass_PAVObjectTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ObjectTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5f9ce0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5f9cf5*/
  else
    return 0; /*0x5f9ce7*/
}


// ==== 0x005F9D00  _DynamicVectorClass_PAVObjectTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_ObjectTypeClass::sub_5F9D00(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5f9d0c*/
  {
    this->IsInitialized = 0; /*0x5f9d12*/
    if ( a3 ) /*0x5f9d18*/
      v4 = a3; /*0x5f9d2e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5f9d2a*/
    this->IsInitialized = 1; /*0x5f9d32*/
    if ( !v4 ) /*0x5f9d36*/
      return 0; /*0x5f9daa*/
    if ( this->Items ) /*0x5f9d38*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5f9d3f*/
      if ( a2 < v5 ) /*0x5f9d44*/
        v5 = a2; /*0x5f9d46*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5f9d4c*/
        ++i; /*0x5f9d51*/
      if ( this->IsAllocated ) /*0x5f9d5e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5f9d69*/
        this->Items = 0; /*0x5f9d71*/
      }
    }
    this->Items = v4; /*0x5f9d7a*/
    this->DynamicVector_field_0x8 = a2; /*0x5f9d82*/
    this->IsAllocated = a3 == 0; /*0x5f9d85*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5f9d8e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5f9d91*/
  if ( v7 < this->Items ) /*0x5f9d99*/
    this->Items = v7; /*0x5f9d9b*/
  return 1; /*0x5f9d9e*/
}


// ==== 0x005F9DB0  _DynamicVectorClass_PAVObjectTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_ObjectTypeClass::sub_5F9DB0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5f9db0*/
  result = 0; /*0x5f9db3*/
  if ( v2 <= 0 ) /*0x5f9db8*/
    return -1; /*0x5f9dcf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x5f9dbe*/
  {
    if ( ++result >= v2 ) /*0x5f9dcd*/
      return -1; /*0x5f9dcd*/
  }
  return result; /*0x5f9dd2*/
}


// ==== 0x005F9DE0  _VectorClass_PAVObjectTypeClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_ObjectTypeClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5f9de3*/
  *Block = &vt_VectorClass_ObjectTypeClass; /*0x5f9de6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5f9df0*/
  {
    __3_YAXPAX_Z(v3); /*0x5f9df8*/
    *(Block + 1) = 0; /*0x5f9e00*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5f9e0b*/
  *(Block + 2) = 0; /*0x5f9e11*/
  if ( (a2 & 1) != 0 ) /*0x5f9e18*/
    __3_YAXPAX_Z(Block); /*0x5f9e1b*/
  return (VectorClass *)Block; /*0x5f9e25*/
}


// ==== 0x005F9E30  _DynamicVectorClass_PAVObjectTypeClass::Constructor_VectorClass_ObjectTypeClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_ObjectTypeClass::Constructor_VectorClass_ObjectTypeClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5f9e33*/
  *Block = &vt_VectorClass_ObjectTypeClass; /*0x5f9e36*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5f9e40*/
  {
    __3_YAXPAX_Z(v3); /*0x5f9e48*/
    *(Block + 1) = 0; /*0x5f9e50*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5f9e5b*/
  *(Block + 2) = 0; /*0x5f9e61*/
  if ( (a2 & 1) != 0 ) /*0x5f9e68*/
    __3_YAXPAX_Z(Block); /*0x5f9e6b*/
  return (DynamicVector *)Block; /*0x5f9e75*/
}


// ==== 0x005F9E80  Checksummer::HashString  this=ObjectTypeClass  sig=csp ====
int __thiscall Checksummer::HashString(char *Source)
{
  int v1; // ebp
  unsigned int v3; // kr04_4
  signed int v4; // ebx
  int v5; // esi
  int v6; // esi
  signed int v7; // ecx
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
  ObjectClass *v21; // [esp+10h] [ebp-90h]
  int v22; // [esp+14h] [ebp-8Ch]
  IUnknown *v23; // [esp+18h] [ebp-88h]
  int v24; // [esp+1Ch] [ebp-84h]
  char Destination[128]; // [esp+20h] [ebp-80h] BYREF

  HIWORD(v1) = 0; /*0x5f9e89*/
  if ( !Source ) /*0x5f9e8d*/
    return 0; /*0x5f9e8f*/
  memset(Destination, 0xA5u, sizeof(Destination)); /*0x5f9eaa*/
  strncpy(Destination, Source, (IUnknown *)0x80); /*0x5f9eb7*/
  Destination[127] = 0; /*0x5f9ec5*/
  v3 = strlen(Destination) + 1; /*0x5f9ecd*/
  v4 = v3 - 1; /*0x5f9ed2*/
  v23 = (IUnknown *)(v3 - 1); /*0x5f9ed9*/
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
    v23 = (IUnknown *)v7; /*0x5f9f5f*/
  }
  v20 = 0; /*0x5f9f6d*/
  v21 = 0; /*0x5f9f71*/
  v22 = 0; /*0x5f9f75*/
  Checksummer::Add_Buffer(&v20, (unsigned __int8 *)Destination, (IUnknown *)v4); /*0x5f9f79*/
  _strrev((IUnknown *)Destination); /*0x5f9f83*/
  v20 = 0; /*0x5f9f93*/
  v21 = 0; /*0x5f9f99*/
  v22 = 0; /*0x5f9f9d*/
  v18 = Checksummer::Add_Buffer(&v20, (unsigned __int8 *)Destination, (IUnknown *)v4); /*0x5f9fa6*/
  _strrev((IUnknown *)Destination); /*0x5f9faf*/
  for ( i = 0; i < v4; v18 = (v9 >> 8) | ((unsigned __int8)v9 << 24) ) /*0x5f9fbb*/
  {
    v9 = (unsigned __int8)Destination[i] ^ v18; /*0x5f9fcd*/
    Destination[i++] = v18; /*0x5f9fd1*/
  }
  for ( j = 0; j < v4; ++j ) /*0x5f9ff1*/
    Destination[j] = ~stru_830620.__pad_14B0[(j & 7) + 4412] & (Destination[j] | stru_830620.__pad_14B0[(j & 7) + 4420]); /*0x5fa00e*/
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
    v4 = (signed int)v23; /*0x5fa086*/
    Destination[k - 2] = (v17 + v16) ^ v19; /*0x5fa08a*/
  }
  v20 = 0; /*0x5fa0a6*/
  v21 = 0; /*0x5fa0aa*/
  v22 = 0; /*0x5fa0ae*/
  return Checksummer::Add_Buffer(&v20, (unsigned __int8 *)Destination, (IUnknown *)v4); /*0x5f9e91*/
}


// ==== 0x005FA0D0  sub_5FA0D0  this=-  sig=ida-proto ====
void sub_5FA0D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5fa0dc*/
  MEMORY[0xAC14B0] = Math::Sqrt(v0 + v0); /*0x5fa0ee*/
}


// ==== 0x005FA100  sub_5FA100  this=-  sig=ida-proto ====
void sub_5FA100()
{
  MEMORY[0xAC1500] = MEMORY[0xAC14B0] / 60.0; /*0x5fa10c*/
}


// ==== 0x005FA120  sub_5FA120  this=-  sig=ida-proto ====
void sub_5FA120()
{
  MEMORY[0xAC14E8] = 1.0 / MEMORY[0xAC1500]; /*0x5fa12c*/
}


// ==== 0x005FA140  sub_5FA140  this=-  sig=ida-proto ====
void sub_5FA140()
{
  MEMORY[0xAC14E0] = 0.0174532925199433 * 45.0; /*0x5fa14c*/
}


// ==== 0x005FA160  sub_5FA160  this=-  sig=ida-proto ====
void sub_5FA160()
{
  MEMORY[0xAC14B8] = 0.0174532925199433 * 60.0; /*0x5fa16c*/
}


// ==== 0x005FA180  sub_5FA180  this=-  sig=ida-proto ====
void sub_5FA180()
{
  MEMORY[0xAC1490] = 0.0174532925199433 * 90.0; /*0x5fa18c*/
}


// ==== 0x005FA1A0  sub_5FA1A0  this=-  sig=ida-proto ====
__int64 sub_5FA1A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC1490] - MEMORY[0xAC14B8]); /*0x5fa1b2*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC14B0] * 0.5); /*0x5fa1c6*/
  MEMORY[0xAC1508] = result; /*0x5fa1cb*/
  return result; /*0x5fa1d0*/
}


// ==== 0x005FA1E0  sub_5FA1E0  this=-  sig=ida-proto ====
void sub_5FA1E0()
{
  MEMORY[0xAC14C0] = Math::ArcTan((double)MEMORY[0xAC1508] * 0.00390625); /*0x5fa1f7*/
}


// ==== 0x005FA210  sub_5FA210  this=-  sig=ida-proto ====
void sub_5FA210()
{
  MEMORY[0xAC14D8] = Math::ArcTan((double)(2 * MEMORY[0xAC1508]) / MEMORY[0xAC14B0]); /*0x5fa232*/
}


// ==== 0x005FA240  sub_5FA240  this=-  sig=ida-proto ====
__int64 sub_5FA240()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC1508]) + 0.5); /*0x5fa25b*/
  MEMORY[0xAC14FC] = result; /*0x5fa260*/
  return result; /*0x5fa266*/
}


// ==== 0x005FA270  sub_5FA270  this=-  sig=ida-proto ====
int sub_5FA270()
{
  MEMORY[0xAC14A8] = 0; /*0x5fa272*/
  MEMORY[0xAC14AA] = 0; /*0x5fa278*/
  return 0; /*0x5fa27e*/
}


// ==== 0x005FA280  sub_5FA280  this=-  sig=ida-proto ====
int sub_5FA280()
{
  MEMORY[0xAC14C8] = 0; /*0x5fa282*/
  MEMORY[0xAC14CC] = 0; /*0x5fa287*/
  MEMORY[0xAC14D0] = 0; /*0x5fa28c*/
  return 0; /*0x5fa291*/
}


// ==== 0x005FA2A0  sub_5FA2A0  this=-  sig=ida-proto ====
int sub_5FA2A0()
{
  MEMORY[0xAC14F8] = 0; /*0x5fa2a5*/
  MEMORY[0xAC14F0] = 128; /*0x5fa2af*/
  MEMORY[0xAC14F4] = 128; /*0x5fa2b4*/
  return 128; /*0x5fa2b9*/
}


// ==== 0x005FA2C0  sub_5FA2C0  this=-  sig=ida-proto ====
int sub_5FA2C0()
{
  MEMORY[0xAC1498] = 0; /*0x5fa2c2*/
  MEMORY[0xAC149C] = 0; /*0x5fa2c7*/
  MEMORY[0xAC14A0] = 0; /*0x5fa2cc*/
  MEMORY[0xAC14A4] = 0; /*0x5fa2d1*/
  return 0; /*0x5fa2d6*/
}


// ==== 0x005FA430  ObjectClass::nullsub_29  this=ObjectClass  sig=csp ====
void nullsub_29()
{
  ; /*0x5fa430*/
}


// ==== 0x005FA440  AudioSettings::SetFlag70  this=AudioSettings  sig=csp ====
void __thiscall sub_5FA440(_BYTE *this, char a2)
{
  this->q046 = a2; /*0x5fa444*/
  byte_A83D22 = a2; /*0x5fa447*/
  Debug::Log(); /*0x5fa463*/
}


// ==== 0x005FA470  AudioSettings::SetFlag68  this=AudioSettings  sig=csp ====
void __thiscall sub_5FA470(_BYTE *this, char a2)
{
  this->q044 = a2; /*0x5fa474*/
  byte_A83D20 = a2; /*0x5fa477*/
  Debug::Log(); /*0x5fa493*/
}


// ==== 0x005FA4A0  Audio::SetScoreVolume  this=Audio  sig=csp ====
void __thiscall Options::SetScoreVolume(Options *this, float volume, int pad)
{
  double v4; // st7
  int v5; // eax
  int v6; // eax

  if ( volume >= 1.0 ) /*0x5fa4b2*/
    v4 = 1.0; /*0x5fa4ba*/
  else
    v4 = volume; /*0x5fa4b4*/
  *(float *)&this->__pad_34[12] = v4; /*0x5fa4c0*/
  v5 = Math::RoundToInt(v4 * 16384.0); /*0x5fa4c9*/
  EndBufferMixer(*(int **)&stru_87C374.__pad_14B0[3872], v5); /*0x5fa4d6*/
  v6 = Math::RoundToInt(*(float *)&this->__pad_34[12] * 255.0); /*0x5fa4e4*/
  GameSettings::SetScoreVolume(&g_BuildingTypeClass_Count, v6); /*0x5fa4ef*/
  Debug::Log(); /*0x5fa502*/
}


// ==== 0x005FA510  Audio::SetSoundVolume  this=Audio  sig=csp ====
void __thiscall Options::SetSoundVolume(Options *this, float volume, int pad)
{
  double v3; // st7
  int v4; // eax

  if ( volume >= 1.0 ) /*0x5fa522*/
    v3 = 1.0; /*0x5fa52a*/
  else
    v3 = volume; /*0x5fa524*/
  *(float *)&this->__pad_34[4] = v3; /*0x5fa530*/
  v4 = Math::RoundToInt(v3 * 16384.0); /*0x5fa539*/
  EndBufferMixer(*(int **)&stru_87C374.__pad_14B0[3876], v4); /*0x5fa546*/
  if ( (_BYTE)pad ) /*0x5fa551*/
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1808), 0x2000, 1.0, 0); /*0x5fa56a*/
  Debug::Log(); /*0x5fa57d*/
}


// ==== 0x005FA590  Audio::SetVoiceVolume  this=Audio  sig=csp ====
void __thiscall Options::SetVoiceVolume(Options *this, float volume, int pad)
{
  double v4; // st7
  int v5; // eax
  int v6; // eax

  if ( volume >= 1.0 ) /*0x5fa5a2*/
    v4 = 1.0; /*0x5fa5aa*/
  else
    v4 = volume; /*0x5fa5a4*/
  *(float *)&this->__pad_34[8] = v4; /*0x5fa5b0*/
  v5 = Math::RoundToInt(v4 * 255.0); /*0x5fa5b9*/
  ThemeClass::GetField(v5); /*0x5fa5c0*/
  v6 = Math::RoundToInt(*(float *)&this->__pad_34[8] * 16384.0); /*0x5fa5ce*/
  EndBufferMixer(*(int **)&stru_87C374.__pad_14B0[3868], v6); /*0x5fa5db*/
  if ( (_BYTE)pad ) /*0x5fa5e6*/
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1808), 0x2000, *(float *)&this->__pad_34[8], 0); /*0x5fa5ff*/
  Debug::Log(); /*0x5fa612*/
}


// ==== 0x005FA620  GameSettings::Read  this=GameSettings  sig=csp ====
char *__thiscall GameSettings::Read(unsigned __int16 *this)
{
  int Int_Overwrite; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  char Bool_Overwrite; // al
  bool v8; // al
  char v9; // al
  double v10; // st7
  double Double_Overwrite; // st7
  int v12; // eax
  double v13; // st7
  int v14; // eax
  int v15; // eax
  double v16; // st7
  int v17; // eax
  int v18; // eax
  char v19; // al
  char v20; // al
  _WORD *v21; // eax
  bool v22; // zf
  #72 *v23; // eax
  #72 *v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned __int16 v27; // ax
  int v28; // ecx
  #72 **v30; // [esp-4h] [ebp-1ACh]
  int v31; // [esp+4h] [ebp-1A4h]
  #72 **v32; // [esp+8h] [ebp-1A0h]
  _WORD String[200]; // [esp+18h] [ebp-190h] BYREF

  Debug::Log(); /*0x5fa636*/
  *(_DWORD *)this = INIClass::ReadInt_Overwrite( /*0x5fa65b*/
                      (int)&MEMORY[0x87F7E8][7734],
                      (unsigned __int8 *)g_INI_Key_Options,
                      (unsigned __int8 *)g_INI_Key_GameSpeed,
                      *(_DWORD *)this);
  Debug::Log(); /*0x5fa65d*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x5fa678*/
                    (int)&MEMORY[0x87F7E8][7734],
                    (unsigned __int8 *)g_INI_Key_Options,
                    (unsigned __int8 *)aDifficulty,
                    *((_DWORD *)this + 1));
  *((_DWORD *)this + 1) = Int_Overwrite; /*0x5fa680*/
  if ( Int_Overwrite >= 4 ) /*0x5fa683*/
    Int_Overwrite = 4; /*0x5fa685*/
  *((_DWORD *)this + 1) = Int_Overwrite; /*0x5fa68c*/
  *((_DWORD *)this + 1) = Int_Overwrite <= 0 ? 0 : Int_Overwrite;
  Debug::Log(); /*0x5fa6a0*/
  v3 = INIClass::ReadInt_Overwrite( /*0x5fa6bb*/
         (int)&MEMORY[0x87F7E8][7734],
         (unsigned __int8 *)g_INI_Key_Options,
         (unsigned __int8 *)aCampdifficulty,
         *((_DWORD *)this + 2));
  *((_DWORD *)this + 2) = v3; /*0x5fa6c3*/
  if ( v3 >= 2 ) /*0x5fa6c6*/
    v3 = 2; /*0x5fa6c8*/
  *((_DWORD *)this + 2) = v3; /*0x5fa6cf*/
  *((_DWORD *)this + 2) = v3 <= 0 ? 0 : v3;
  Debug::Log(); /*0x5fa6e3*/
  *((_DWORD *)this + 3) = INIClass::ReadInt_Overwrite( /*0x5fa709*/
                            (int)&MEMORY[0x87F7E8][7734],
                            (unsigned __int8 *)g_INI_Key_Options,
                            (unsigned __int8 *)aScrollmethod,
                            *((_DWORD *)this + 3));
  Debug::Log(); /*0x5fa70c*/
  *((_DWORD *)this + 4) = INIClass::ReadInt_Overwrite( /*0x5fa732*/
                            (int)&MEMORY[0x87F7E8][7734],
                            (unsigned __int8 *)g_INI_Key_Options,
                            (unsigned __int8 *)aScrollrate,
                            *((_DWORD *)this + 4));
  Debug::Log(); /*0x5fa735*/
  *((_BYTE *)this + 20) = INIClass::ReadBool_Overwrite( /*0x5fa75a*/
                            &MEMORY[0x87F7E8][7734],
                            (unsigned __int8 *)g_INI_Key_Options,
                            (unsigned __int8 *)aAutoscroll,
                            *((_BYTE *)this + 20));
  Debug::Log(); /*0x5fa771*/
  v4 = INIClass::ReadInt_Overwrite( /*0x5fa78c*/
         (int)&MEMORY[0x87F7E8][7734],
         (unsigned __int8 *)g_INI_Key_Options,
         (unsigned __int8 *)g_INI_Key_DetailLevel,
         *((_DWORD *)this + 6));
  *((_DWORD *)this + 6) = v4; /*0x5fa794*/
  if ( v4 >= 2 ) /*0x5fa797*/
    v4 = 2; /*0x5fa799*/
  *((_DWORD *)this + 6) = v4; /*0x5fa7a0*/
  *((_DWORD *)this + 6) = v4 <= 0 ? 0 : v4;
  Debug::Log(); /*0x5fa7b4*/
  *((_BYTE *)this + 28) = 1; /*0x5fa7c3*/
  Debug::Log(); /*0x5fa7c6*/
  *((_BYTE *)this + 29) = INIClass::ReadBool_Overwrite( /*0x5fa7e6*/
                            &MEMORY[0x87F7E8][7734],
                            (unsigned __int8 *)g_INI_Key_Options,
                            (unsigned __int8 *)aSidebarcameote,
                            *((_BYTE *)this + 29));
  Debug::Log(); /*0x5fa7fd*/
  *((_BYTE *)this + 30) = INIClass::ReadBool_Overwrite( /*0x5fa81d*/
                            &MEMORY[0x87F7E8][7734],
                            (unsigned __int8 *)g_INI_Key_Options,
                            (unsigned __int8 *)aUnitactionline,
                            *((_BYTE *)this + 30));
  Debug::Log(); /*0x5fa834*/
  *((_BYTE *)this + 31) = INIClass::ReadBool_Overwrite( /*0x5fa854*/
                            &MEMORY[0x87F7E8][7734],
                            (unsigned __int8 *)g_INI_Key_Options,
                            (unsigned __int8 *)aShowhidden,
                            *((_BYTE *)this + 31));
  Debug::Log(); /*0x5fa86b*/
  *((_BYTE *)this + 32) = INIClass::ReadBool_Overwrite( /*0x5fa88b*/
                            &MEMORY[0x87F7E8][7734],
                            (unsigned __int8 *)g_INI_Key_Options,
                            (unsigned __int8 *)aTooltips,
                            *((_BYTE *)this + 32));
  Debug::Log(); /*0x5fa8a2*/
  v5 = INIClass::ReadInt_Overwrite( /*0x5fa8bd*/
         (int)&MEMORY[0x87F7E8][7734],
         (unsigned __int8 *)g_INI_Key_Video,
         (unsigned __int8 *)g_INI_Key_ScreenWidth,
         *((_DWORD *)this + 9));
  v6 = *((_DWORD *)this + 10); /*0x5fa8c2*/
  *((_DWORD *)this + 9) = v5; /*0x5fa8c5*/
  *((_DWORD *)this + 10) = INIClass::ReadInt_Overwrite( /*0x5fa8e7*/
                             (int)&MEMORY[0x87F7E8][7734],
                             (unsigned __int8 *)g_INI_Key_Video,
                             (unsigned __int8 *)g_INI_Key_ScreenHeight,
                             v6);
  Debug::Log(); /*0x5fa8ea*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5fa905*/
                     &MEMORY[0x87F7E8][7734],
                     (unsigned __int8 *)g_INI_Key_Video,
                     (unsigned __int8 *)aStretchmovies,
                     *((_BYTE *)this + 52));
  *((_BYTE *)this + 52) = Bool_Overwrite; /*0x5fa90c*/
  v8 = Bool_Overwrite == 1 && BYTE2(MEMORY[0x87F7E8][34177]) == 1; /*0x5fa919*/
  *((_BYTE *)this + 52) = v8; /*0x5fa91f*/
  Debug::Log(); /*0x5fa936*/
  *((_BYTE *)this + 53) = INIClass::ReadBool_Overwrite( /*0x5fa956*/
                            &MEMORY[0x87F7E8][7734],
                            (unsigned __int8 *)g_INI_Key_Video,
                            (unsigned __int8 *)aAllowhiresmode,
                            *((_BYTE *)this + 53));
  Debug::Log(); /*0x5fa96d*/
  HIBYTE(dword_A8ED54[3]) = INIClass::ReadBool_Overwrite( /*0x5fa990*/
                              &MEMORY[0x87F7E8][7734],
                              (unsigned __int8 *)g_INI_Key_Video,
                              (unsigned __int8 *)aAllowmodetoggl,
                              SHIBYTE(dword_A8ED54[3]));
  v9 = INIClass::ReadBool_Overwrite( /*0x5fa9a8*/
         &MEMORY[0x87F7E8][7734],
         (unsigned __int8 *)g_INI_Key_Video,
         (unsigned __int8 *)aAllowvramsideb,
         *((_BYTE *)this + 54));
  v10 = *((float *)this + 14); /*0x5fa9ad*/
  *((_BYTE *)this + 54) = v9; /*0x5fa9b8*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x5fa9c8*/
                       (int)&MEMORY[0x87F7E8][7734],
                       (unsigned __int8 *)g_INI_Key_Audio,
                       (unsigned __int8 *)aSoundvolume,
                       v10);
  if ( Double_Overwrite >= 1.0 ) /*0x5fa9d8*/
    Double_Overwrite = 1.0; /*0x5fa9dc*/
  *((float *)this + 14) = Double_Overwrite; /*0x5fa9e2*/
  v12 = Math::RoundToInt(Double_Overwrite * 16384.0); /*0x5fa9eb*/
  EndBufferMixer(MEMORY[0x87E748], v12); /*0x5fa9f8*/
  Debug::Log(); /*0x5faa0b*/
  v13 = INIClass::ReadDouble_Overwrite( /*0x5faa28*/
          (int)&MEMORY[0x87F7E8][7734],
          (unsigned __int8 *)g_INI_Key_Audio,
          (unsigned __int8 *)aVoicevolume,
          *((float *)this + 15));
  if ( v13 >= 1.0 ) /*0x5faa38*/
    v13 = 1.0; /*0x5faa3c*/
  *((float *)this + 15) = v13; /*0x5faa42*/
  v14 = Math::RoundToInt(v13 * 255.0); /*0x5faa4b*/
  ThemeClass::GetField(v14); /*0x5faa52*/
  v15 = Math::RoundToInt(*((float *)this + 15) * 16384.0); /*0x5faa60*/
  EndBufferMixer(MEMORY[0x87E740], v15); /*0x5faa6d*/
  Debug::Log(); /*0x5faa80*/
  v16 = INIClass::ReadDouble_Overwrite( /*0x5faa9d*/
          (int)&MEMORY[0x87F7E8][7734],
          (unsigned __int8 *)g_INI_Key_Audio,
          (unsigned __int8 *)aScorevolume,
          *((float *)this + 16));
  if ( v16 >= 1.0 ) /*0x5faaad*/
    v16 = 1.0; /*0x5faab1*/
  *((float *)this + 16) = v16; /*0x5faab7*/
  v17 = Math::RoundToInt(v16 * 16384.0); /*0x5faac0*/
  EndBufferMixer(MEMORY[0x87E744], v17); /*0x5faacd*/
  v18 = Math::RoundToInt(*((float *)this + 16) * 255.0); /*0x5faadb*/
  TechnoTypeClass::CheckFlag(&MEMORY[0x87F7E8][528714], v18); /*0x5faae6*/
  Debug::Log(); /*0x5faaf9*/
  v19 = INIClass::ReadBool_Overwrite( /*0x5fab14*/
          &MEMORY[0x87F7E8][7734],
          (unsigned __int8 *)g_INI_Key_Audio,
          (unsigned __int8 *)aIsscorerepeat,
          *((_BYTE *)this + 68));
  *((_BYTE *)this + 68) = v19; /*0x5fab19*/
  LOBYTE(MEMORY[0x87F7E8][528718]) = v19; /*0x5fab1c*/
  Debug::Log(); /*0x5fab38*/
  v20 = INIClass::ReadBool_Overwrite( /*0x5fab53*/
          &MEMORY[0x87F7E8][7734],
          (unsigned __int8 *)g_INI_Key_Audio,
          (unsigned __int8 *)aIsscoreshuffle,
          *((_BYTE *)this + 70));
  *((_BYTE *)this + 70) = v20; /*0x5fab58*/
  BYTE2(MEMORY[0x87F7E8][528718]) = v20; /*0x5fab5b*/
  Debug::Log(); /*0x5fab77*/
  *((_BYTE *)this + 69) = INIClass::ReadBool_Overwrite( /*0x5fabb8*/
                            &MEMORY[0x87F7E8][7734],
                            (unsigned __int8 *)g_INI_Key_Audio,
                            (unsigned __int8 *)aIngamemusic,
                            *((_BYTE *)this + 69));
  *((_DWORD *)this + 19) = -1; /*0x5fabbb*/
  *((_DWORD *)this + 20) = -1; /*0x5fabbe*/
  INIClass::ParseValue_Wide( /*0x5fabc1*/
    &MEMORY[0x87F7E8][7734],
    (unsigned __int8 *)g_INI_Key_Network,
    (int)aNetid,
    (#72 *)&MEMORY[0x87F7E8][8147],
    (#72 *)String,
    200);
  if ( String[0] ) /*0x5fabcc*/
  {
    v21 = String; /*0x5fabce*/
    do /*0x5fabe8*/
    {
      v22 = *v21 == 0xFFFF; /*0x5fabd8*/
      *v21 = ~*v21; /*0x5fabdb*/
      if ( v22 ) /*0x5fabde*/
        *v21 = -1; /*0x5fabe0*/
      ++v21; /*0x5fabe5*/
    }
    while ( *v21 ); /*0x5fabe8*/
    v23 = wcstok((#72 *)String, (const #72 *)asc_82083C, v32); /*0x5fabf8*/
    if ( v23 ) /*0x5fac02*/
    {
      *((_DWORD *)this + 19) = wcstol(v23, 0, 10) - 1; /*0x5fac16*/
      v24 = wcstok(0, (const #72 *)asc_82083C, v30); /*0x5fac19*/
      if ( v24 ) /*0x5fac23*/
        *((_DWORD *)this + 20) = wcstol(v24, 0, 10) - 1; /*0x5fac33*/
    }
  }
  v25 = *((_DWORD *)this + 19); /*0x5fac36*/
  if ( v25 < -1 || v25 >= 8 ) /*0x5fac40*/
    *((_DWORD *)this + 19) = -1; /*0x5fac42*/
  v26 = *((_DWORD *)this + 20); /*0x5fac45*/
  if ( v26 < -1 || v26 >= 8 ) /*0x5fac4f*/
    *((_DWORD *)this + 20) = -1; /*0x5fac51*/
  *(this + 36) = INIClass::ReadInt_Overwrite( /*0x5fac6f*/
                   (int)&MEMORY[0x87F7E8][7734],
                   (unsigned __int8 *)g_INI_Key_Audio,
                   (unsigned __int8 *)aSoundlatency,
                   *(this + 36));
  Debug::Log(); /*0x5fac7e*/
  v27 = INIClass::ReadInt_Overwrite( /*0x5fac9c*/
          (int)&MEMORY[0x87F7E8][7734],
          (unsigned __int8 *)g_INI_Key_Network,
          (unsigned __int8 *)g_INI_Key_Socket,
          *(this + 37));
  v31 = *((_DWORD *)this + 21); /*0x5faca9*/
  *(this + 37) = v27; /*0x5facb4*/
  *((_DWORD *)this + 21) = INIClass::ReadInt_Overwrite( /*0x5facbd*/
                             (int)&MEMORY[0x87F7E8][7734],
                             (unsigned __int8 *)g_INI_Key_Network,
                             (unsigned __int8 *)aNetcard,
                             v31);
  INIClass::GetString( /*0x5facda*/
    (unsigned __int8 ***)&MEMORY[0x87F7E8][7734],
    (unsigned __int8 **)g_INI_Key_Network,
    (unsigned __int8 *)g_INI_Key_DestNet,
    (char *)&MEMORY[0x87F7E8][10719],
    (char *)this + 88,
    64);
  Debug::Log(); /*0x5face4*/
  LOBYTE(v28) = *((_BYTE *)this + 29); /*0x5face9*/
  nullsub_36(v28); /*0x5facf5*/
  SetGlobalFlag(*((_BYTE *)this + 30)); /*0x5facfd*/
  return GameSettings::ParseNetworkAddress((const char *)this); /*0x5fad09*/
}


// ==== 0x005FAD10  ScenarioClass::SaveGameOptions  this=ScenarioClass  sig=csp ====
int __thiscall GameOptions_Save(int this)
{
  wchar_t *i; // eax
  bool v3; // zf
  _DWORD v5[22]; // [esp+Ch] [ebp-1FCh] BYREF
  _BYTE v6[12]; // [esp+64h] [ebp-1A4h] BYREF
  int v7; // [esp+70h] [ebp-198h]
  wchar_t Buffer[200]; // [esp+78h] [ebp-190h] BYREF

  CCFileClass::Construct(v5, MEMORY[0x826444]); /*0x5fad22*/
  Debug::Log(); /*0x5fad2c*/
  INIClass::SetInt( /*0x5fad48*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)g_INI_Key_Options,
    MEMORY[0x8332E8],
    *(_DWORD *)this,
    0);
  INIClass::SetInt( /*0x5fad62*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)g_INI_Key_Options,
    MEMORY[0x8332CC],
    *(_DWORD *)(this + 4),
    0);
  INIClass::SetInt( /*0x5fad7c*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)g_INI_Key_Options,
    MEMORY[0x8332A8],
    *(_DWORD *)(this + 8),
    0);
  INIClass::SetInt( /*0x5fad96*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)g_INI_Key_Options,
    MEMORY[0x833280],
    *(_DWORD *)(this + 12),
    0);
  INIClass::SetInt( /*0x5fadb0*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)g_INI_Key_Options,
    MEMORY[0x833260],
    *(_DWORD *)(this + 16),
    0);
  INIClass::SetBool( /*0x5fadc8*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)g_INI_Key_Options,
    MEMORY[0x833240],
    *(_BYTE *)(this + 20));
  INIClass::SetInt( /*0x5fade2*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)g_INI_Key_Options,
    unk_81855C,
    *(_DWORD *)(this + 24),
    0);
  INIClass::SetBool( /*0x5fadfa*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)g_INI_Key_Options,
    MEMORY[0x8331EC],
    *(_BYTE *)(this + 29));
  INIClass::SetBool( /*0x5fae12*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)g_INI_Key_Options,
    MEMORY[0x8331C8],
    *(_BYTE *)(this + 30));
  INIClass::SetBool( /*0x5fae2a*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)g_INI_Key_Options,
    MEMORY[0x8331A8],
    *(_BYTE *)(this + 31));
  INIClass::SetBool( /*0x5fae42*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)g_INI_Key_Options,
    MEMORY[0x833188],
    *(_BYTE *)(this + 32));
  INIClass::SetInt( /*0x5fae5c*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x833160],
    MEMORY[0x833168],
    *(_DWORD *)(this + 36),
    0);
  INIClass::SetInt( /*0x5fae76*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x833160],
    MEMORY[0x833150],
    *(_DWORD *)(this + 40),
    0);
  INIClass::SetBool( /*0x5fae8e*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x833160],
    MEMORY[0x833128],
    *(_BYTE *)(this + 52));
  INIClass::SetDouble( /*0x5faeab*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x8330B4],
    MEMORY[0x8330BC],
    *(float *)(this + 56));
  INIClass::SetDouble( /*0x5faec8*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x8330B4],
    MEMORY[0x8330A8],
    *(float *)(this + 60));
  INIClass::SetDouble( /*0x5faee5*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x8330B4],
    MEMORY[0x83309C],
    *(float *)(this + 64));
  INIClass::SetBool( /*0x5faefd*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x8330B4],
    MEMORY[0x83308C],
    *(_BYTE *)(this + 68));
  INIClass::SetBool( /*0x5faf15*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x8330B4],
    MEMORY[0x83307C],
    *(_BYTE *)(this + 70));
  INIClass::SetInt( /*0x5faf32*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x8330B4],
    MEMORY[0x833050],
    *(unsigned __int16 *)(this + 72),
    0);
  INIClass::SetBool( /*0x5faf4a*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x8330B4],
    MEMORY[0x833070],
    *(_BYTE *)(this + 69));
  INIClass::SetInt( /*0x5faf67*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x833060],
    MEMORY[0x83301C],
    *(unsigned __int16 *)(this + 74),
    0);
  INIClass::SetInt( /*0x5faf81*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x833060],
    MEMORY[0x833014],
    *(_DWORD *)(this + 84),
    0);
  INIClass::SetString( /*0x5faf99*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x833060],
    MEMORY[0x83300C],
    (char *)(this + 88));
  swprintf( /*0x5fafb2*/
    Buffer,
    (const size_t)&MEMORY[0x833328],
    (const wchar_t *const)(*(_DWORD *)(this + 76) + 1),
    *(_DWORD *)(this + 80) + 1);
  for ( i = Buffer; *i; ++i ) /*0x5fafc4*/
  {
    v3 = *i == 0xFFFFu; /*0x5fafcc*/
    *i = ~*i; /*0x5fafcf*/
    if ( v3 ) /*0x5fafd2*/
      *i = -1; /*0x5fafd4*/
  }
  INIClass::SetWideAsHex(MEMORY[0x833060], MEMORY[0x833068], Buffer); /*0x5faff6*/
  INIClass::WriteDigest(&MEMORY[0x8870C0], (int)v5, 0); /*0x5fb007*/
  GameSettings::ParseNetworkAddress(this); /*0x5fb00e*/
  v5[0] = &vt_CCFileClass; /*0x5fb017*/
  v7 = 0; /*0x5fb01f*/
  Vector::Clear((int)v6); /*0x5fb027*/
  v5[0] = &off_7E1668; /*0x5fb030*/
  return BufferIOFileClass::Dtor(v5); /*0x5fb03d*/
}


// ==== 0x005FB050  GameSettings::ParseNetworkAddress  this=ScenarioClass  sig=csp ====
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

  v2 = *((_WORD *)this + 37); /*0x5fb057*/
  if ( v2 == 0xFFFF ) /*0x5fb05f*/
  {
    Network::GetField(MEMORY[0xA8E9C0], 34835); /*0x5fb066*/
  }
  else if ( v2 < 0x4000u ) /*0x5fb06c*/
  {
    Network::GetField(MEMORY[0xA8E9C0], v2 + 0x4000); /*0x5fb079*/
  }
  v3 = this + 88; /*0x5fb07e*/
  result = 0; /*0x5fb086*/
  v5 = strlen(v3) + 1; /*0x5fb088*/
  if ( v5 != 1 ) /*0x5fb08d*/
  {
    v6 = (char *)__2_YAPAXI_Z(v5); /*0x5fb09a*/
    strcpy(v6, v3); /*0x5fb0b8*/
    v7 = 0; /*0x5fb0c1*/
    result = strtok(v6, stru_826598); /*0x5fb0c3*/
    if ( result ) /*0x5fb0cd*/
    {
      do /*0x5fb10f*/
      {
        sscanf(result, MEMORY[0x825BD4], &v9); /*0x5fb0de*/
        *((_BYTE *)&v10 + v7++) = v9; /*0x5fb0ef*/
        result = strtok(0, stru_826598); /*0x5fb105*/
      }
      while ( result ); /*0x5fb10f*/
      if ( v7 >= 4 ) /*0x5fb114*/
      {
        v11 = -1; /*0x5fb11a*/
        v12 = -1; /*0x5fb126*/
        MEMORY[0xA8D5FC] = 1; /*0x5fb131*/
        v8 = NetworkAddress::Assign(v13, &v10, (int)&v11, 0); /*0x5fb13b*/
        MEMORY[0xA8D600] = *v8; /*0x5fb142*/
        MEMORY[0xA8D604] = v8[1]; /*0x5fb14b*/
        result = (char *)v8[2]; /*0x5fb151*/
        MEMORY[0xA8D608] = (int)result; /*0x5fb154*/
      }
    }
  }
  return result; /*0x5fb159*/
}


// ==== 0x005FB160  AudioOptionsClass::ApplySettings  this=AudioOptionsClass  sig=csp ====
void __thiscall sub_5FB160(int this)
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

  v2 = *(float *)(this + 56); /*0x5fb163*/
  if ( v2 >= 1.0 ) /*0x5fb171*/
    v2 = 1.0; /*0x5fb175*/
  *(float *)(this + 56) = v2; /*0x5fb17b*/
  v3 = Math::RoundToInt(v2 * 16384.0); /*0x5fb184*/
  EndBufferMixer((int *)MEMORY[0x87E748], v3); /*0x5fb191*/
  Debug::Log(); /*0x5fb1a4*/
  v4 = *(float *)(this + 60); /*0x5fb1a9*/
  if ( v4 >= 1.0 ) /*0x5fb1ba*/
    v4 = 1.0; /*0x5fb1be*/
  *(float *)(this + 60) = v4; /*0x5fb1c4*/
  v5 = Math::RoundToInt(v4 * 255.0); /*0x5fb1cd*/
  ThemeClass::GetField(v5); /*0x5fb1d4*/
  v6 = Math::RoundToInt(*(float *)(this + 60) * 16384.0); /*0x5fb1e2*/
  EndBufferMixer((int *)MEMORY[0x87E740], v6); /*0x5fb1ef*/
  Debug::Log(); /*0x5fb202*/
  v7 = *(float *)(this + 64); /*0x5fb207*/
  if ( v7 >= 1.0 ) /*0x5fb218*/
    v7 = 1.0; /*0x5fb21c*/
  *(float *)(this + 64) = v7; /*0x5fb222*/
  v8 = Math::RoundToInt(v7 * 16384.0); /*0x5fb22b*/
  EndBufferMixer((int *)MEMORY[0x87E744], v8); /*0x5fb238*/
  v9 = Math::RoundToInt(*(float *)(this + 64) * 255.0); /*0x5fb246*/
  GameSettings::SetScoreVolume(&g_BuildingTypeClass_Count, v9); /*0x5fb251*/
  Debug::Log(); /*0x5fb264*/
  byte_A83D20 = *(_BYTE *)(this + 68); /*0x5fb26f*/
  Debug::Log(); /*0x5fb28b*/
  byte_A83D22 = *(_BYTE *)(this + 70); /*0x5fb296*/
  Debug::Log(); /*0x5fb2b2*/
  LOBYTE(v10) = *(_BYTE *)(this + 29); /*0x5fb2b7*/
  nullsub_36(v10); /*0x5fb2c3*/
  SetGlobalFlag(*(_BYTE *)(this + 30)); /*0x5fb2cc*/
}


// ==== 0x005FB2E0  Rules::GetProductionTimeMult  this=Rules  sig=csp ====
char *__thiscall Rules::GetProductionTimeMult(int *this, CellStruct *aP1)
{
  CellStruct *result; // eax
  int v3; // ecx

  result = aP1; /*0x5fb2e0*/
  if ( aP1 ) /*0x5fb2e6*/
  {
    v3 = *this; /*0x5fb2e8*/
    if ( (int)aP1 >= 5 ) /*0x5fb2ed*/
      return (char *)(8 * (int)aP1 / (v3 + 1)); /*0x5fb301*/
    else
      return *(char **)&stru_830620.__pad_14B0[32 * (_DWORD)aP1 + 4636 + 4 * v3]; /*0x5fb2f2*/
  }
  return (char *)result; /*0x5fb2f9*/
}


// ==== 0x005FB320  HotkeyOptions::DlgProc  this=HotkeyOptions  sig=csp ====
int __stdcall HotkeyOptions::DlgProc(int hWnd, unsigned int a2, unsigned int a3, int a4)
{
  int result; // eax
  int v5; // edi
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  char v12; // dl
  void *v13; // ecx
  char v14; // al
  __int16 v15; // bx
  int v16; // eax
  int v17; // eax
  HWND (__stdcall *v18)(HWND, int); // edi
  int v19; // ebx
  int v20; // ebx
  int v21; // edi
  const #72 *v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // edi
  int v28; // eax
  int v29; // eax
  __int16 v30; // ax
  int v31; // edi
  int v32; // eax
  _DWORD *v33; // edx
  int v34; // esi
  _DWORD *v35; // ebx
  int v36; // ecx
  int v37; // ecx
  _DWORD *v38; // ebx
  int v39; // esi
  int *v40; // eax
  _DWORD *v41; // esi
  int v42; // eax
  int v43; // eax
  int m; // esi
  char *v45; // eax
  int v46; // edi
  int v47; // eax
  int v48; // eax
  __int16 v49; // ax
  int v50; // edi
  int v51; // edi
  #72 *StringCSF; // eax
  int v53; // edx
  int v54; // esi
  char v55; // al
  int v56; // esi
  int v57; // eax
  int v58; // eax
  int v59; // ecx
  int j; // eax
  _DWORD *v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // ecx
  int k; // eax
  _DWORD *v66; // eax
  int v67; // eax
  int v68; // edi
  int v69; // esi
  int v70; // eax
  int v71; // eax
  int v72; // [esp-8h] [ebp-134h]
  _DWORD *v73; // [esp+10h] [ebp-11Ch]
  int v74; // [esp+10h] [ebp-11Ch]
  int v75; // [esp+10h] [ebp-11Ch]
  int v76; // [esp+10h] [ebp-11Ch]
  int i; // [esp+10h] [ebp-11Ch]
  __int64 v78; // [esp+14h] [ebp-118h] BYREF
  void *v79[3]; // [esp+1Ch] [ebp-110h] BYREF
  _DWORD v80[10]; // [esp+28h] [ebp-104h] BYREF
  char v81; // [esp+50h] [ebp-DCh]
  int v82; // [esp+54h] [ebp-D8h]
  int v83; // [esp+58h] [ebp-D4h]
  char v84; // [esp+5Ch] [ebp-D0h]
  _BYTE v85[12]; // [esp+74h] [ebp-B8h] BYREF
  int v86; // [esp+80h] [ebp-ACh]
  int v87[9]; // [esp+88h] [ebp-A4h] BYREF
  _BYTE lParam[128]; // [esp+ACh] [ebp-80h] BYREF

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x5fb34c*/
  if ( result ) /*0x5fb353*/
    return result; /*0x5fb353*/
  v73 = (_DWORD *)((int (__stdcall *)(int, int))GetWindowLongA)(hWnd, 8); /*0x5fb368*/
  if ( a2 > 0x466 ) /*0x5fb36c*/
  {
    if ( a2 == 1127 ) /*0x5fbe06*/
    {
      v68 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1223); /*0x5fbe4f*/
      ((void (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v68, 331, 0, 0); /*0x5fbe59*/
      for ( i = 0; i < dword_87F5D8[36]; ++i ) /*0x5fbe6a*/
      {
        v69 = *(_DWORD *)(dword_87F5D8[33] + 4 * i); /*0x5fbe76*/
        v70 = (*(int (__thiscall **)(int))(*(_DWORD *)v69 + 12))(v69); /*0x5fbe7d*/
        if ( ((int (__stdcall *)(int, int, _DWORD, int))SendMessageA)(v68, 1214, 0, v70) == -1 ) /*0x5fbe8e*/
        {
          v71 = (*(int (__thiscall **)(int))(*(_DWORD *)v69 + 12))(v69); /*0x5fbe94*/
          ((void (__stdcall *)(int, int, _DWORD, int))SendMessageA)(v68, 1218, 0, v71); /*0x5fbea0*/
        }
      }
      ((void (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v68, 334, 0, 0); /*0x5fbebf*/
      dword_832D8C = -1; /*0x5fbecb*/
      ((void (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(hWnd, 1124, 0, 0); /*0x5fbed5*/
      return 1; /*0x5fbed5*/
    }
    if ( a2 == 1175 ) /*0x5fbe0b*/
    {
      ((void (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(hWnd, 1127, 0, 0); /*0x5fbe26*/
      return 0; /*0x5fbe38*/
    }
    return 0; /*0x5fbe0b*/
  }
  if ( a2 == 1126 ) /*0x5fb372*/
  {
    v46 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1224); /*0x5fbacc*/
    v47 = ((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v46, 392, 0, 0); /*0x5fbad6*/
    if ( v47 == -1 ) /*0x5fbadb*/
      return 1; /*0x5fbadb*/
    v76 = ((int (__stdcall *)(int, int, int, _DWORD))SendMessageA)(v46, 409, v47, 0); /*0x5fbaf2*/
    v48 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1229); /*0x5fbaf6*/
    v49 = ((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v48, 1026, 0, 0); /*0x5fbb02*/
    v50 = (unsigned __int8)v49; /*0x5fbb0a*/
    if ( (v49 & 0x400) != 0 ) /*0x5fbb13*/
      v50 = (unsigned __int8)v49 | 0x400; /*0x5fbb15*/
    if ( (v49 & 0x200) != 0 ) /*0x5fbb1e*/
      v50 |= 0x200u; /*0x5fbb20*/
    if ( (v49 & 0x100) != 0 ) /*0x5fbb29*/
      v50 |= 0x100u; /*0x5fbb2b*/
    if ( (v49 & 0x800) != 0 ) /*0x5fbb34*/
      v50 = 0; /*0x5fbb36*/
    if ( sub_48BB40(v76, v50) ) /*0x5fbb3e*/
    {
      if ( sub_48BB60(v50) ) /*0x5fbb66*/
      {
        v53 = dword_87F5D8[43]; /*0x5fbbac*/
        v54 = 0; /*0x5fbbb4*/
        if ( dword_87F5D8[43] > 0 ) /*0x5fbbb8*/
        {
          while ( 1 ) /*0x5fbbbe*/
          {
            v55 = dword_87F5D8[45]; /*0x5fbbbe*/
            if ( !LOBYTE(dword_87F5D8[45]) ) /*0x5fbbc5*/
            {
              qsort((void *)dword_87F5D8[42], v53, 8, CompareFuncInt); /*0x5fbbd6*/
              v53 = dword_87F5D8[43]; /*0x5fbbdb*/
              v55 = 1; /*0x5fbbe1*/
              dword_87F5D8[46] = 0; /*0x5fbbe6*/
              LOBYTE(dword_87F5D8[45]) = 1; /*0x5fbbec*/
            }
            if ( *(_DWORD *)(dword_87F5D8[42] + 8 * v54 + 4) == v76 ) /*0x5fbbff*/
              break; /*0x5fbbff*/
            if ( ++v54 >= v53 ) /*0x5fbc04*/
              goto LABEL_127; /*0x5fbc04*/
          }
          v56 = *(_DWORD *)(dword_87F5D8[42] + 8 * v54); /*0x5fbc0b*/
          if ( v53 ) /*0x5fbc11*/
          {
            if ( !v55 ) /*0x5fbc19*/
            {
              qsort((void *)dword_87F5D8[42], v53, 8, CompareFuncInt); /*0x5fbc24*/
              v53 = dword_87F5D8[43]; /*0x5fbc29*/
              dword_87F5D8[46] = 0; /*0x5fbc32*/
              LOBYTE(dword_87F5D8[45]) = 1; /*0x5fbc38*/
            }
            LODWORD(v78) = v56; /*0x5fbc4a*/
            v57 = HotkeyOptions_Helper(dword_87F5D8[42], v53, (int *)&v78); /*0x5fbc4e*/
            if ( !v57 || (v58 = (v57 - dword_87F5D8[42]) >> 3, v58 == -1) ) /*0x5fbc63*/
            {
              v53 = dword_87F5D8[43]; /*0x5fbcc1*/
            }
            else
            {
              v59 = v58 + 1; /*0x5fbc65*/
              for ( j = dword_87F5D8[43]; v59 < dword_87F5D8[43]; j = dword_87F5D8[43] ) /*0x5fbc6f*/
              {
                v61 = (_DWORD *)(dword_87F5D8[42] + 8 * v59++); /*0x5fbc77*/
                *(v61 - 2) = *v61; /*0x5fbc7d*/
                *(v61 - 1) = v61[1]; /*0x5fbc83*/
              }
              dword_87F5D8[43] = j - 1; /*0x5fbc98*/
              *(_DWORD *)(dword_87F5D8[42] + 8 * dword_87F5D8[43]) = 0; /*0x5fbc9d*/
              *(_DWORD *)(dword_87F5D8[42] + 8 * dword_87F5D8[43] + 4) = 0; /*0x5fbcaf*/
              dword_87F5D8[46] = 0; /*0x5fbcb3*/
              v53 = dword_87F5D8[43]; /*0x5fbcb9*/
            }
          }
        }
LABEL_127:
        if ( v50 ) /*0x5fbcc9*/
        {
          if ( v53 ) /*0x5fbcd1*/
          {
            if ( !LOBYTE(dword_87F5D8[45]) ) /*0x5fbcde*/
            {
              qsort((void *)dword_87F5D8[42], v53, 8, CompareFuncInt); /*0x5fbcef*/
              v53 = dword_87F5D8[43]; /*0x5fbcf4*/
              dword_87F5D8[46] = 0; /*0x5fbcfd*/
              LOBYTE(dword_87F5D8[45]) = 1; /*0x5fbd03*/
            }
            LODWORD(v78) = v50; /*0x5fbd15*/
            v62 = HotkeyOptions_Helper(dword_87F5D8[42], v53, (int *)&v78); /*0x5fbd19*/
            if ( !v62 || (v63 = (v62 - dword_87F5D8[42]) >> 3, v63 == -1) ) /*0x5fbd2e*/
            {
              v53 = dword_87F5D8[43]; /*0x5fbd8c*/
            }
            else
            {
              v64 = v63 + 1; /*0x5fbd30*/
              for ( k = dword_87F5D8[43]; v64 < dword_87F5D8[43]; k = dword_87F5D8[43] ) /*0x5fbd3a*/
              {
                v66 = (_DWORD *)(dword_87F5D8[42] + 8 * v64++); /*0x5fbd42*/
                *(v66 - 2) = *v66; /*0x5fbd48*/
                *(v66 - 1) = v66[1]; /*0x5fbd4e*/
              }
              dword_87F5D8[43] = k - 1; /*0x5fbd63*/
              *(_DWORD *)(dword_87F5D8[42] + 8 * dword_87F5D8[43]) = 0; /*0x5fbd68*/
              *(_DWORD *)(dword_87F5D8[42] + 8 * dword_87F5D8[43] + 4) = 0; /*0x5fbd7a*/
              dword_87F5D8[46] = 0; /*0x5fbd7e*/
              v53 = dword_87F5D8[43]; /*0x5fbd84*/
            }
          }
          v67 = dword_87F5D8[44]; /*0x5fbd92*/
          if ( v53 + 1 > dword_87F5D8[44] ) /*0x5fbd9c*/
          {
            if ( !dword_87F5D8[44] ) /*0x5fbda0*/
              v67 = 10; /*0x5fbda2*/
            if ( !KeyboardConfig::ReleaseBuffer((int)&dword_87F5D8[42], v67) ) /*0x5fbdb4*/
              return 1; /*0x5fbdb4*/
            v53 = dword_87F5D8[43]; /*0x5fbdba*/
          }
          *(_DWORD *)(dword_87F5D8[42] + 8 * v53) = v50; /*0x5fbdc5*/
          *(_DWORD *)(dword_87F5D8[42] + 8 * dword_87F5D8[43]++ + 4) = v76; /*0x5fbdda*/
          LOBYTE(dword_87F5D8[45]) = 0; /*0x5fbdea*/
          return 1; /*0x5fbdfd*/
        }
        return 1; /*0x5fbcc9*/
      }
      v51 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1597); /*0x5fbb7c*/
      StringCSF = GetStringCSF((#72 *)aErrorCannotrem, 0, g_Str_File_Options_CPP, 1012); /*0x5fbb8a*/
    }
    else
    {
      v51 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1597); /*0x5fbb54*/
      StringCSF = GetStringCSF((#72 *)aErrorCannotmap, 0, g_Str_File_Options_CPP, 1004); /*0x5fbb62*/
    }
    ((void (__stdcall *)(int, int, _DWORD, #72 *))SendMessageA)(v51, 1202, 0, StringCSF); /*0x5fbb98*/
    return 1; /*0x5fbba9*/
  }
  if ( a2 != 273 ) /*0x5fb37e*/
  {
    if ( a2 == 1124 ) /*0x5fb38a*/
    {
      v18 = GetDlgItem; /*0x5fb4ec*/
      v19 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1223); /*0x5fb502*/
      if ( ((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v19, 327, 0, 0) != dword_832D8C ) /*0x5fb514*/
      {
        dword_832D8C = ((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v19, 327, 0, 0); /*0x5fb52d*/
        ((void (__stdcall *)(int, int, int, _BYTE *))SendMessageA)(v19, 1203, 64, lParam); /*0x5fb53b*/
        v20 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1224); /*0x5fb547*/
        ((void (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v20, 388, 0, 0); /*0x5fb551*/
        v75 = 0; /*0x5fb55a*/
        if ( dword_87F5D8[36] > 0 ) /*0x5fb562*/
        {
          do /*0x5fb5bf*/
          {
            v21 = *(_DWORD *)(dword_87F5D8[33] + 4 * v75); /*0x5fb575*/
            v22 = (const #72 *)(*(int (__thiscall **)(int))(*(_DWORD *)v21 + 12))(v21); /*0x5fb57d*/
            if ( !_wcsicmp(v22, (const #72 *)lParam) ) /*0x5fb581*/
            {
              v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 8))(v21); /*0x5fb591*/
              v24 = ((int (__stdcall *)(int, int, _DWORD, int))SendMessageA)(v20, 1229, 0, v23); /*0x5fb59d*/
              if ( v24 != -1 ) /*0x5fb5a2*/
                ((void (__stdcall *)(int, int, int, int))SendMessageA)(v20, 410, v24, v21); /*0x5fb5ac*/
            }
            ++v75; /*0x5fb5bb*/
          }
          while ( v75 < dword_87F5D8[36] ); /*0x5fb5bf*/
          v18 = GetDlgItem; /*0x5fb5c1*/
        }
        v25 = ((int (__stdcall *)(int, int))v18)(hWnd, 1227); /*0x5fb5cd*/
        ((void (__stdcall *)(int, int, _DWORD, _DWORD *))SendMessageA)(v25, 1202, 0, &MEMORY[0x87F7E8][8147]); /*0x5fb5dc*/
        v26 = ((int (__stdcall *)(int, int))v18)(hWnd, 1596); /*0x5fb5e4*/
        ((void (__stdcall *)(int, int, _DWORD, _DWORD *))SendMessageA)(v26, 1202, 0, &MEMORY[0x87F7E8][8147]); /*0x5fb5f3*/
        v27 = ((int (__stdcall *)(int, int))v18)(hWnd, 1595); /*0x5fb602*/
        ((void (__stdcall *)(int, int, _DWORD, _DWORD *))SendMessageA)(v27, 1202, 0, &MEMORY[0x87F7E8][8147]); /*0x5fb60c*/
        ((void (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v27, 390, 0, 0); /*0x5fb618*/
        ((void (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(hWnd, 1125, 0, 0); /*0x5fb624*/
        return 1; /*0x5fb635*/
      }
      return 1; /*0x5fb514*/
    }
    if ( a2 == 1125 ) /*0x5fb391*/
    {
      v5 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1224); /*0x5fb3ab*/
      v6 = ((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v5, 392, 0, 0); /*0x5fb3b5*/
      if ( v6 != -1 ) /*0x5fb3ba*/
      {
        v7 = ((int (__stdcall *)(int, int, int, _DWORD))SendMessageA)(v5, 409, v6, 0); /*0x5fb3d1*/
        v8 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1227); /*0x5fb3d9*/
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 16))(v7); /*0x5fb3df*/
        ((void (__stdcall *)(int, int, _DWORD, int))SendMessageA)(v8, 1202, 0, v9); /*0x5fb3eb*/
        v10 = dword_87F5D8[43]; /*0x5fb3ed*/
        v11 = 0; /*0x5fb3f2*/
        LOWORD(v74) = 0; /*0x5fb3f6*/
        if ( dword_87F5D8[43] > 0 ) /*0x5fb3fa*/
        {
          v12 = dword_87F5D8[45]; /*0x5fb3fc*/
          v13 = (void *)dword_87F5D8[42]; /*0x5fb402*/
          while ( 1 ) /*0x5fb408*/
          {
            if ( !v12 ) /*0x5fb40a*/
            {
              qsort(v13, v10, 8, CompareFuncInt); /*0x5fb415*/
              v10 = dword_87F5D8[43]; /*0x5fb41a*/
              v13 = (void *)dword_87F5D8[42]; /*0x5fb41f*/
              v12 = 1; /*0x5fb425*/
              dword_87F5D8[46] = 0; /*0x5fb42a*/
              LOBYTE(dword_87F5D8[45]) = 1; /*0x5fb434*/
            }
            if ( *((_DWORD *)v13 + 2 * v11 + 1) == v7 ) /*0x5fb43e*/
              break; /*0x5fb43e*/
            if ( ++v11 >= v10 ) /*0x5fb443*/
              goto LABEL_16; /*0x5fb443*/
          }
          v74 = *((_DWORD *)v13 + 2 * v11); /*0x5fb44a*/
        }
LABEL_16:
        LODWORD(v78) = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1596); /*0x5fb44e*/
        v14 = 0; /*0x5fb464*/
        if ( (v74 & 0x400) != 0 ) /*0x5fb469*/
          v14 = 4; /*0x5fb46b*/
        if ( (v74 & 0x200) != 0 ) /*0x5fb473*/
          v14 |= 2u; /*0x5fb475*/
        if ( (v74 & 0x100) != 0 ) /*0x5fb47a*/
          v14 |= 1u; /*0x5fb47c*/
        if ( (v74 & 0x1000) != 0 ) /*0x5fb481*/
          v14 |= 8u; /*0x5fb483*/
        HIBYTE(v15) = v14; /*0x5fb48e*/
        LOBYTE(v15) = v74; /*0x5fb490*/
        FormatHotkeyDisplayString(v15, (#72 *)lParam); /*0x5fb494*/
        ((void (__stdcall *)(_DWORD, int, _DWORD, _BYTE *))SendMessageA)(v78, 1202, 0, lParam); /*0x5fb4ad*/
        v16 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1229); /*0x5fb4b5*/
        ((void (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v16, 1025, 0, 0); /*0x5fb4c1*/
        v17 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1595); /*0x5fb4c9*/
        ((void (__stdcall *)(int, int, _DWORD, _DWORD *))SendMessageA)(v17, 1202, 0, &MEMORY[0x87F7E8][8147]); /*0x5fb4d8*/
        return 1; /*0x5fb4e9*/
      }
      return 1; /*0x5fb3ba*/
    }
    return 0; /*0x5fbe19*/
  }
  if ( (unsigned __int16)a3 > 0x4CDu ) /*0x5fb644*/
  {
    if ( (unsigned __int16)a3 == 1231 ) /*0x5fb8df*/
    {
      ((void (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(hWnd, 1126, 0, 0); /*0x5fba96*/
      ((void (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(hWnd, 1125, 0, 0); /*0x5fbaa2*/
      return 1; /*0x5fbab3*/
    }
    if ( (unsigned __int16)a3 == 1232 ) /*0x5fb8e6*/
    {
      if ( !HIWORD(a3) ) /*0x5fba05*/
      {
        Debug::Log(); /*0x5fba13*/
        CCFileClass::Construct(v79, aKeyboardmdIni); /*0x5fba24*/
        FileClass::Delete((#56 *)v79); /*0x5fba2d*/
        KeyboardConfig::LoadINI(); /*0x5fba32*/
        ((void (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(hWnd, 1127, 0, 0); /*0x5fba41*/
        v79[0] = &CCFileClass::`vftable'; /*0x5fba4b*/
        v86 = 0; /*0x5fba53*/
        Vector::Clear((int)v85); /*0x5fba5e*/
        v79[0] = &off_7E1668; /*0x5fba67*/
        BufferIOFileClass::Dtor(v79); /*0x5fba6f*/
        return 1; /*0x5fba83*/
      }
    }
    else if ( (unsigned __int16)a3 == 1670 && !HIWORD(a3) ) /*0x5fb8f7*/
    {
      v79[1] = 0; /*0x5fb906*/
      v79[2] = 0; /*0x5fb90a*/
      GenericList::Constructor(v80); /*0x5fb90e*/
      v80[0] = &List<INIClass::INISection *>::`vftable'; /*0x5fb919*/
      memset(&v80[7], 0, 12); /*0x5fb921*/
      v81 = 0; /*0x5fb92d*/
      v82 = 0; /*0x5fb932*/
      v83 = 0; /*0x5fb936*/
      v84 = 0; /*0x5fb93a*/
      v79[0] = &CCINIClass_Vtable; /*0x5fb93f*/
      INIClass::ClearSection((int)v79, 0, 0); /*0x5fb947*/
      v43 = dword_87F5D8[43]; /*0x5fb94c*/
      for ( m = 0; m < dword_87F5D8[43]; ++m ) /*0x5fb955*/
      {
        if ( !LOBYTE(dword_87F5D8[45]) ) /*0x5fb95f*/
        {
          qsort((void *)dword_87F5D8[42], v43, 8, CompareFuncInt); /*0x5fb970*/
          dword_87F5D8[46] = 0; /*0x5fb978*/
          LOBYTE(dword_87F5D8[45]) = 1; /*0x5fb97e*/
        }
        v72 = *(_DWORD *)(dword_87F5D8[42] + 8 * m); /*0x5fb992*/
        v45 = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_87F5D8[42] + 8 * m + 4) + 4))(*(_DWORD *)(dword_87F5D8[42] + 8 * m + 4)); /*0x5fb995*/
        INIClass::SetInt((char *)v79, (unsigned __int8 *)g_INI_Key_Hotkey, v45, v72, 0); /*0x5fb9a2*/
        v43 = dword_87F5D8[43]; /*0x5fb9a7*/
      }
      RawFileClass::Construct(v87, (int)aKeyboardmdIni_0); /*0x5fb9bd*/
      INIClass::WriteDigest((char *)v79, (int)v87, 0); /*0x5fb9cf*/
      *v73 = 1; /*0x5fb9d8*/
      RawFileClass::Dtor(v87); /*0x5fb9e5*/
      HashTable::DestroyHashTableINIClass(v79); /*0x5fb9ee*/
      return 1; /*0x5fba02*/
    }
    return 1; /*0x5fb8fa*/
  }
  if ( (unsigned __int16)a3 != 1229 ) /*0x5fb64a*/
  {
    if ( (unsigned __int16)a3 == 2 ) /*0x5fb653*/
    {
      if ( !HIWORD(a3) ) /*0x5fb6d4*/
      {
        KeyboardConfig::LoadINI(); /*0x5fb6dd*/
        *v73 = 2; /*0x5fb6e9*/
        return 1; /*0x5fb6fb*/
      }
    }
    else if ( (unsigned __int16)a3 == 1223 ) /*0x5fb65a*/
    {
      if ( HIWORD(a3) == 1 ) /*0x5fb6af*/
      {
        ((void (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(hWnd, 1124, 0, 0); /*0x5fb6bf*/
        return 1; /*0x5fb6d1*/
      }
    }
    else if ( (unsigned __int16)a3 == 1224 && HIWORD(a3) == 1 ) /*0x5fb669*/
    {
      ((void (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(hWnd, 1125, 0, 0); /*0x5fb679*/
      v28 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1229); /*0x5fb685*/
      if ( v28 ) /*0x5fb68d*/
      {
        ((void (__stdcall *)(int))SetFocus)(v28); /*0x5fb694*/
        return 1; /*0x5fb6a6*/
      }
    }
    return 1; /*0x5fb68d*/
  }
  if ( HIWORD(a3) != 768 ) /*0x5fb707*/
    return 1; /*0x5fbed7*/
  v29 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1597); /*0x5fb713*/
  ((void (__stdcall *)(int, int, _DWORD, _DWORD *))SendMessageA)(v29, 1202, 0, &MEMORY[0x87F7E8][8147]); /*0x5fb72c*/
  v30 = ((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(a4, 1026, 0, 0); /*0x5fb738*/
  v31 = (unsigned __int8)v30; /*0x5fb740*/
  if ( (v30 & 0x400) != 0 ) /*0x5fb749*/
    v31 = (unsigned __int8)v30 | 0x400; /*0x5fb74b*/
  if ( (v30 & 0x200) != 0 ) /*0x5fb754*/
    v31 |= 0x200u; /*0x5fb756*/
  if ( (v30 & 0x100) != 0 ) /*0x5fb75f*/
    v31 |= 0x100u; /*0x5fb761*/
  if ( (v30 & 0x800) != 0 ) /*0x5fb76a*/
    v31 = 0; /*0x5fb76c*/
  v32 = dword_87F5D8[43]; /*0x5fb76e*/
  if ( !dword_87F5D8[43] ) /*0x5fb775*/
    goto LABEL_81; /*0x5fb775*/
  v33 = (_DWORD *)dword_87F5D8[46]; /*0x5fb77b*/
  if ( !dword_87F5D8[46] || *(_DWORD *)dword_87F5D8[46] != v31 ) /*0x5fb787*/
  {
    if ( !LOBYTE(dword_87F5D8[45]) ) /*0x5fb795*/
    {
      qsort((void *)dword_87F5D8[42], dword_87F5D8[43], 8, CompareFuncInt); /*0x5fb7a6*/
      dword_87F5D8[46] = 0; /*0x5fb7ae*/
      LOBYTE(dword_87F5D8[45]) = 1; /*0x5fb7b8*/
    }
    v34 = dword_87F5D8[43]; /*0x5fb7bf*/
    v35 = (_DWORD *)dword_87F5D8[42]; /*0x5fb7c5*/
    if ( dword_87F5D8[43] <= 0 ) /*0x5fb7cd*/
      goto LABEL_81; /*0x5fb7cd*/
    while ( 1 ) /*0x5fb7da*/
    {
      v36 = v35[2 * (v34 / 2)]; /*0x5fb7da*/
      v33 = &v35[2 * (v34 / 2)]; /*0x5fb7dd*/
      if ( v36 <= v31 ) /*0x5fb7e2*/
      {
        if ( v36 == v31 ) /*0x5fb7e8*/
        {
          if ( !v33 ) /*0x5fb7ff*/
            goto LABEL_81; /*0x5fb7ff*/
          v32 = dword_87F5D8[43]; /*0x5fb805*/
          dword_87F5D8[46] = &v35[2 * (v34 / 2)]; /*0x5fb80a*/
          break; /*0x5fb80a*/
        }
        v35 = v33 + 2; /*0x5fb7ed*/
        v34 += -1 - v34 / 2; /*0x5fb7f2*/
      }
      else
      {
        v34 /= 2; /*0x5fb7e4*/
      }
      if ( v34 <= 0 ) /*0x5fb7f6*/
        goto LABEL_81; /*0x5fb7f6*/
    }
  }
  if ( !v32 ) /*0x5fb812*/
    goto LABEL_79; /*0x5fb812*/
  if ( v33 && *v33 == v31 ) /*0x5fb81a*/
  {
LABEL_85:
    v40 = v33 + 1; /*0x5fb8d5*/
    goto LABEL_80; /*0x5fb8d8*/
  }
  if ( !LOBYTE(dword_87F5D8[45]) ) /*0x5fb828*/
  {
    qsort((void *)dword_87F5D8[42], v32, 8, CompareFuncInt); /*0x5fb839*/
    dword_87F5D8[46] = 0; /*0x5fb841*/
    LOBYTE(dword_87F5D8[45]) = 1; /*0x5fb84b*/
  }
  v37 = dword_87F5D8[43]; /*0x5fb852*/
  v38 = (_DWORD *)dword_87F5D8[42]; /*0x5fb858*/
  if ( dword_87F5D8[43] <= 0 ) /*0x5fb860*/
    goto LABEL_79; /*0x5fb860*/
  while ( 1 ) /*0x5fb869*/
  {
    v39 = v38[2 * (v37 / 2)]; /*0x5fb869*/
    v33 = &v38[2 * (v37 / 2)]; /*0x5fb86c*/
    if ( v39 <= v31 ) /*0x5fb871*/
      break; /*0x5fb871*/
    v37 /= 2; /*0x5fb873*/
LABEL_78:
    if ( v37 <= 0 ) /*0x5fb885*/
      goto LABEL_79; /*0x5fb885*/
  }
  if ( v39 != v31 ) /*0x5fb877*/
  {
    v38 = v33 + 2; /*0x5fb879*/
    v37 += -1 - v37 / 2; /*0x5fb881*/
    goto LABEL_78; /*0x5fb881*/
  }
  if ( v33 ) /*0x5fb8cd*/
  {
    dword_87F5D8[46] = &v38[2 * (v37 / 2)]; /*0x5fb8cf*/
    goto LABEL_85; /*0x5fb8cf*/
  }
LABEL_79:
  v40 = &dword_A8ED54[239290]; /*0x5fb887*/
LABEL_80:
  v41 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)*v40 + 8))(*v40); /*0x5fb88c*/
  if ( !v41 ) /*0x5fb897*/
LABEL_81:
    v41 = &MEMORY[0x87F7E8][8147]; /*0x5fb899*/
  v42 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1595); /*0x5fb8a4*/
  ((void (__stdcall *)(int, int, _DWORD, _DWORD *))SendMessageA)(v42, 1202, 0, v41); /*0x5fb8b3*/
  return 1; /*0x5fb4da*/
}


// ==== 0x005FBEF0  ShowHotkeyOptionsDialog  this=-  sig=ida-proto ====
char ShowHotkeyOptionsDialog()
{
  int Dialog; // esi
  int v1; // ecx
  int dwNewLong; // [esp+4h] [ebp-4h] BYREF

  dwNewLong = -1; /*0x5fbefe*/
  Dialog = CreateDialog(0); /*0x5fbf0b*/
  if ( Dialog ) /*0x5fbf0f*/
  {
    ((void (__stdcall *)(int, int, int *))SetWindowLongA)(Dialog, 8, &dwNewLong); /*0x5fbf19*/
    Dialog::Show(Dialog); /*0x5fbf21*/
    while ( dwNewLong < 0 ) /*0x5fbf2c*/
    {
      if ( Dialog::PumpMessages() == 1 ) /*0x5fbf35*/
        dwNewLong = 2; /*0x5fbf37*/
      if ( !LOBYTE(MEMORY[0x87F7E8][539758]) ) /*0x5fbf46*/
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
int __thiscall sub_5FBF70(_DWORD *this)
{
  return this->vtable4; /*0x5fbf73*/
}


// ==== 0x005FBF80  GameOptionsClass::UnlockMovieIfNeeded_MoviesList  this=GameOptionsClass  sig=csp ====
char *__thiscall GameOptionsClass::UnlockMovieIfNeeded_MoviesList(_DWORD *this, void *a2)
{
  int v2; // edi
  char **v4; // esi
  char *v5; // eax
  char *result; // eax
  int v7; // edi
  char **v8; // esi

  v2 = 0; /*0x5fbf8d*/
  v4 = MEMORY[0x832CA0]; /*0x5fbf93*/
  if ( MEMORY[0x832CA0][0] ) /*0x5fbf98*/
  {
    while ( _strcmpi(a2, *v4) ) /*0x5fbfa8*/
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
  if ( v2 > this->q013 ) /*0x5fbfbb*/
    this->q013 = v2; /*0x5fbfbd*/
  result = MEMORY[0x832C30][0]; /*0x5fbfc0*/
  v7 = 0; /*0x5fbfc5*/
  v8 = MEMORY[0x832C30]; /*0x5fbfc9*/
  if ( MEMORY[0x832C30][0] ) /*0x5fbfce*/
  {
    while ( 1 ) /*0x5fbfd4*/
    {
      result = (char *)_strcmpi(a2, *v8); /*0x5fbfd4*/
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
  if ( v7 > this->q014 ) /*0x5fbff1*/
    this->q014 = v7; /*0x5fbff3*/
  return result; /*0x5fbff6*/
}


// ==== 0x005FC000  GameOptionsClass::PopulateMovieList  this=GameOptionsClass  sig=csp ====
char *__thiscall GameOptionsClass::PopulateMovieList(void *this, HWND hWnd)
{
  void *v2; // ebx
  wchar_t *StringCSF; // eax
  LRESULT v4; // eax
  int v5; // eax
  int v6; // ebp
  char **v7; // ebx
  wchar_t *v8; // ecx
  wchar_t *v9; // eax
  LRESULT v10; // eax
  char *v11; // eax
  char *result; // eax
  int v13; // ebp
  char **i; // ebx
  wchar_t *v15; // ecx
  wchar_t *v16; // eax
  LRESULT v17; // eax

  v2 = this; /*0x5fc00d*/
  if ( MEMORY[0x832C20][0] ) /*0x5fc01c*/
  {
    if ( MEMORY[0x832C24] ) /*0x5fc026*/
    {
      StringCSF = GetStringCSF(MEMORY[0x832C24], 0, MEMORY[0x833370], 1265); /*0x5fc034*/
      v4 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)StringCSF); /*0x5fc042*/
      if ( v4 != -1 ) /*0x5fc047*/
        SendMessageA(hWnd, 0x19Au, v4, (LPARAM)MEMORY[0x832C20]); /*0x5fc055*/
    }
  }
  v5 = *((_DWORD *)v2 + 19); /*0x5fc057*/
  if ( v5 >= 0 ) /*0x5fc05c*/
  {
    v6 = v5 + 1; /*0x5fc05e*/
    v7 = MEMORY[0x832CA0]; /*0x5fc068*/
    if ( MEMORY[0x832CA0][0] ) /*0x5fc06d*/
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
            v9 = GetStringCSF(v8, 0, MEMORY[0x833370], 1265); /*0x5fc08b*/
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
  result = (char *)*((_DWORD *)v2 + 20); /*0x5fc0b9*/
  if ( (int)result >= 0 ) /*0x5fc0be*/
  {
    v13 = (int)(result + 1); /*0x5fc0c0*/
    result = MEMORY[0x832C30][0]; /*0x5fc0c3*/
    for ( i = MEMORY[0x832C30]; result; --v13 ) /*0x5fc0cf*/
    {
      if ( v13 <= 0 ) /*0x5fc0d3*/
        break; /*0x5fc0d3*/
      if ( *i ) /*0x5fc0d5*/
      {
        v15 = (wchar_t *)i[1]; /*0x5fc0da*/
        if ( v15 ) /*0x5fc0df*/
        {
          v16 = GetStringCSF(v15, 0, MEMORY[0x833370], 1265); /*0x5fc0ed*/
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
  MEMORY[0xAC1530] = Math::Sqrt(v0 + v0); /*0x5fc18e*/
}


// ==== 0x005FC1A0  sub_5FC1A0  this=-  sig=ida-proto ====
void sub_5FC1A0()
{
  MEMORY[0xAC15D8] = MEMORY[0xAC1530] / 60.0; /*0x5fc1ac*/
}


// ==== 0x005FC1C0  sub_5FC1C0  this=-  sig=ida-proto ====
void sub_5FC1C0()
{
  MEMORY[0xAC15C0] = 1.0 / MEMORY[0xAC15D8]; /*0x5fc1cc*/
}


// ==== 0x005FC1E0  sub_5FC1E0  this=-  sig=ida-proto ====
void sub_5FC1E0()
{
  MEMORY[0xAC15B8] = 0.0174532925199433 * 45.0; /*0x5fc1ec*/
}


// ==== 0x005FC200  sub_5FC200  this=-  sig=ida-proto ====
void sub_5FC200()
{
  MEMORY[0xAC1538] = 0.0174532925199433 * 60.0; /*0x5fc20c*/
}


// ==== 0x005FC220  sub_5FC220  this=-  sig=ida-proto ====
void sub_5FC220()
{
  MEMORY[0xAC1510] = 0.0174532925199433 * 90.0; /*0x5fc22c*/
}


// ==== 0x005FC240  sub_5FC240  this=-  sig=ida-proto ====
__int64 sub_5FC240()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC1510] - MEMORY[0xAC1538]); /*0x5fc252*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC1530] * 0.5); /*0x5fc266*/
  MEMORY[0xAC15E0] = result; /*0x5fc26b*/
  return result; /*0x5fc270*/
}


// ==== 0x005FC280  sub_5FC280  this=-  sig=ida-proto ====
void sub_5FC280()
{
  MEMORY[0xAC1540] = Math::ArcTan((double)MEMORY[0xAC15E0] * 0.00390625); /*0x5fc297*/
}


// ==== 0x005FC2B0  sub_5FC2B0  this=-  sig=ida-proto ====
void sub_5FC2B0()
{
  MEMORY[0xAC1580] = Math::ArcTan((double)(2 * MEMORY[0xAC15E0]) / MEMORY[0xAC1530]); /*0x5fc2d2*/
}


// ==== 0x005FC2E0  sub_5FC2E0  this=-  sig=ida-proto ====
__int64 sub_5FC2E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC15E0]) + 0.5); /*0x5fc2fb*/
  MEMORY[0xAC15D4] = result; /*0x5fc300*/
  return result; /*0x5fc306*/
}


// ==== 0x005FC310  sub_5FC310  this=-  sig=ida-proto ====
int sub_5FC310()
{
  MEMORY[0xAC1528] = 0; /*0x5fc312*/
  MEMORY[0xAC152A] = 0; /*0x5fc318*/
  return 0; /*0x5fc31e*/
}


// ==== 0x005FC320  sub_5FC320  this=-  sig=ida-proto ====
int sub_5FC320()
{
  MEMORY[0xAC1570] = 0; /*0x5fc322*/
  MEMORY[0xAC1574] = 0; /*0x5fc327*/
  MEMORY[0xAC1578] = 0; /*0x5fc32c*/
  return 0; /*0x5fc331*/
}


// ==== 0x005FC340  sub_5FC340  this=-  sig=ida-proto ====
int sub_5FC340()
{
  MEMORY[0xAC15D0] = 0; /*0x5fc345*/
  MEMORY[0xAC15C8] = 128; /*0x5fc34f*/
  MEMORY[0xAC15CC] = 128; /*0x5fc354*/
  return 128; /*0x5fc359*/
}


// ==== 0x005FC360  sub_5FC360  this=-  sig=ida-proto ====
int sub_5FC360()
{
  MEMORY[0xAC1518] = 0; /*0x5fc362*/
  MEMORY[0xAC151C] = 0; /*0x5fc367*/
  MEMORY[0xAC1520] = 0; /*0x5fc36c*/
  MEMORY[0xAC1524] = 0; /*0x5fc371*/
  return 0; /*0x5fc376*/
}


// ==== 0x005FC380  Object::SpawnAtCell  this=OverlayClass  sig=csp ====
OverlayClass *__thiscall Object::SpawnAtCell(void *this, IUnknown *aP1, IUnknown *aP2, BuildingTypeClass *aP3)
{
  IUnknown *v5; // eax
  int v6; // eax
  int v7; // ecx
  _DWORD *v8; // eax

  ObjectClass::ctor(this); /*0x5fc386*/
  v5 = aP1; /*0x5fc38b*/
  *(_DWORD *)this = &OverlayClass::`vftable'; /*0x5fc38f*/
  this->q02B = v5; /*0x5fc395*/
  this->vtable3 = &OverlayClass::`vftable'; /*0x5fc39f*/
  this->vtable2 = &OverlayClass::`vftable'; /*0x5fc3a6*/
  this->vtable4 = &vt_OverlayClass; /*0x5fc3ac*/
  AbstractClass::GenerateUniqueID((int)this + 4); /*0x5fc3b3*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22956] < *(int *)&HouseClass_Player.__pad_5568[22948] /*0x5fc3ef*/
    || (HouseClass_Player.__pad_5568[22953] || !*(_DWORD *)&HouseClass_Player.__pad_5568[22948])
    && *(int *)&HouseClass_Player.__pad_5568[22960] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[22940] + 8))(
         &HouseClass_Player.__pad_5568[22940],
         *(_DWORD *)&HouseClass_Player.__pad_5568[22948] + *(_DWORD *)&HouseClass_Player.__pad_5568[22960],
         0) )
  {
    v6 = (*(_DWORD *)&HouseClass_Player.__pad_5568[22956])++; /*0x5fc3fc*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22944] + 4 * v6) = this; /*0x5fc40b*/
  }
  if ( (CoordStruct *)aP2->field_0 != *(&g_MatrixTransformState + 2502) ) /*0x5fc41c*/
  {
    *(_DWORD *)&stru_830620.__pad_14B0[6380] = aP3; /*0x5fc43b*/
    v7 = SHIWORD(aP2->field_0); /*0x5fc444*/
    LOWORD(aP1) = ((SLOWORD(aP2->field_0) << 8) + 128) / 256; /*0x5fc469*/
    HIWORD(aP1) = ((v7 << 8) + 128) / 256; /*0x5fc485*/
    v8 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP1); /*0x5fc497*/
    if ( !CellClass::FindInfantry(v8, 0) ) /*0x5fc4a0*/
      ObjectClass::Deploy((#374 *)this); /*0x5fc4b1*/
    *(_DWORD *)&stru_830620.__pad_14B0[6380] = -1; /*0x5fc4b6*/
  }
  return (OverlayClass *)this; /*0x5fc4c2*/
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
char __thiscall Object::CheckState(void *this, IUnknown *aP1, int a3)
{
  IUnknown *v3; // esi
  _DWORD *v5; // eax

  v3 = aP1; /*0x5fd271*/
  LOWORD(aP1) = aP1->field_0 / 256; /*0x5fd290*/
  HIWORD(aP1) = v3->field_4 / 256; /*0x5fd2a4*/
  v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1); /*0x5fd2b1*/
  if ( CellClass::FindInfantry(v5, 0) ) /*0x5fd2ba*/
    return 0; /*0x5fd2c4*/
  else
    return ObjectClass::Deploy((#374 *)this); /*0x5fd2d2*/
}


// ==== 0x005FD2E0  ObjectClass::ReadOverlayINI  this=IUnknown  sig=csp ====
int __thiscall OverlayClass::ReadINI(_DWORD *this)
{
  int v1; // edi
  int v2; // ebp
  int v3; // esi
  int v4; // ebx
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
  char v20; // [esp+3h] [ebp-71h] BYREF
  int v21; // [esp+4h] [ebp-70h] BYREF
  __int16 v22; // [esp+8h] [ebp-6Ch] BYREF
  __int16 v23; // [esp+Ah] [ebp-6Ah]
  void *v24; // [esp+Ch] [ebp-68h]
  void **v25; // [esp+10h] [ebp-64h] BYREF
  int v26; // [esp+14h] [ebp-60h]
  int v27; // [esp+18h] [ebp-5Ch]
  _DWORD v28[3]; // [esp+1Ch] [ebp-58h] BYREF
  int v29; // [esp+28h] [ebp-4Ch]
  int (__thiscall **v30)(void *, char); // [esp+2Ch] [ebp-48h] BYREF
  int v31; // [esp+30h] [ebp-44h]
  int v32; // [esp+34h] [ebp-40h]
  int v33; // [esp+38h] [ebp-3Ch]
  int v34; // [esp+3Ch] [ebp-38h]
  int v35[3]; // [esp+40h] [ebp-34h] BYREF
  int v36[10]; // [esp+4Ch] [ebp-28h] BYREF

  v24 = this; /*0x5fd2e3*/
  INIClass::ResetSection(this); /*0x5fd2e7*/
  if ( MEMORY[0xA8ED7C] > 1 ) /*0x5fd2f3*/
  {
    OverlayClass::updateOverlayState(&v30, 640, 400); /*0x5fd30b*/
    v34 = 2; /*0x5fd314*/
    Buffer::Init(v35, 0, 512000); /*0x5fd323*/
    v30 = &BSurface_Vtable; /*0x5fd32c*/
    XSurface::Fill((int *)&v30, 0); /*0x5fd336*/
    v1 = v31; /*0x5fd33f*/
    v2 = v32; /*0x5fd347*/
    v3 = v34; /*0x5fd34b*/
    ++v33; /*0x5fd350*/
    v4 = v35[0]; /*0x5fd354*/
    ((void (__thiscall *)(int (__thiscall ***)(void *, char)))v30[28])(&v30); /*0x5fd35c*/
    ((void (__thiscall *)(int (__thiscall ***)(void *, char)))v30[29])(&v30); /*0x5fd367*/
    Base64Data = INIClass::GetBase64Data(v24, MEMORY[0x833484], v4, v1 * v2 * v3); /*0x5fd380*/
    if ( Base64Data > 0 ) /*0x5fd386*/
    {
      v6 = v35[0]; /*0x5fd394*/
      ++v33; /*0x5fd399*/
      ((void (__thiscall *)(int (__thiscall ***)(void *, char)))v30[28])(&v30); /*0x5fd3a1*/
      ((void (__thiscall *)(int (__thiscall ***)(void *, char)))v30[29])(&v30); /*0x5fd3ac*/
      v26 = 0; /*0x5fd3b3*/
      v27 = 0; /*0x5fd3b9*/
      Buffer::Init(v28, v6, Base64Data); /*0x5fd3c5*/
      v29 = 0; /*0x5fd3ce*/
      v25 = &vt_BufferStraw; /*0x5fd3d9*/
      LCWStraw::Constructor(v36, 1, 0x2000); /*0x5fd3e1*/
      Delegate::Set(v36, (int)&v25); /*0x5fd3ef*/
      for ( i = 0; i < 512; ++i ) /*0x5fd3f4*/
      {
        for ( j = 0; j < 512; ++j ) /*0x5fd3f6*/
        {
          v22 = j; /*0x5fd403*/
          v23 = i; /*0x5fd408*/
          v21 = -1; /*0x5fd40d*/
          LCW::DecompressReader((int)v36, (char *)&v21, 1); /*0x5fd415*/
          if ( v21 != -1 ) /*0x5fd421*/
          {
            v21 = (unsigned __int8)v21; /*0x5fd42f*/
            if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0xA83D84]->vtable0[4 * (unsigned __int8)v21] + 156))(*(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * (unsigned __int8)v21]) /*0x5fd48c*/
               || *(_DWORD *)(*(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * v21] + 668))
              && (!MEMORY[0xA8B238][0] || !*(_BYTE *)(*(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * v21] + 682))
              && LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], &v22) )
            {
              v9 = *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], &v22) + 286); /*0x5fd4a4*/
              v10 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x5fd4af*/
              if ( v10 ) /*0x5fd4b9*/
                Object::SpawnAtCell(v10, *(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * v21], &v22, -1); /*0x5fd4d2*/
              if ( v21 == 24 || v21 == 25 || v21 == 237 || v21 == 238 ) /*0x5fd4f1*/
                *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], &v22) + 286) = v9; /*0x5fd502*/
            }
          }
        }
      }
      --v33; /*0x5fd52b*/
      LCWStraw::Dtor(v36); /*0x5fd52f*/
      Vector::Clear((int)v28); /*0x5fd538*/
      Straw::Dtor((int *)&v25); /*0x5fd541*/
    }
    v11 = v31; /*0x5fd54e*/
    v12 = v32; /*0x5fd552*/
    v13 = v35[0]; /*0x5fd556*/
    ((void (__thiscall *)(int (__thiscall ***)(void *, char)))v30[28])(&v30); /*0x5fd564*/
    ((void (__thiscall *)(int (__thiscall ***)(void *, char)))v30[29])(&v30); /*0x5fd56f*/
    v14 = INIClass::GetBase64Data(v24, MEMORY[0x833474], v13, v11 * v12); /*0x5fd585*/
    if ( v14 > 0 ) /*0x5fd589*/
    {
      v15 = v35[0]; /*0x5fd597*/
      ++v33; /*0x5fd5a0*/
      ((void (__thiscall *)(int (__thiscall ***)(void *, char)))v30[28])(&v30); /*0x5fd5a4*/
      ((void (__thiscall *)(int (__thiscall ***)(void *, char)))v30[29])(&v30); /*0x5fd5af*/
      v26 = 0; /*0x5fd5b6*/
      v27 = 0; /*0x5fd5bc*/
      v25 = &vt_Straw; /*0x5fd5c0*/
      Buffer::Init(v28, v15, v14); /*0x5fd5c8*/
      v29 = 0; /*0x5fd5d1*/
      v25 = &vt_BufferStraw; /*0x5fd5dc*/
      LCWStraw::Constructor(v36, 1, 0x2000); /*0x5fd5e4*/
      Delegate::Set(v36, (int)&v25); /*0x5fd5f2*/
      for ( k = 0; k < 512; ++k ) /*0x5fd5f7*/
      {
        for ( m = 0; m < 512; ++m ) /*0x5fd5f9*/
        {
          v22 = m; /*0x5fd606*/
          v23 = k; /*0x5fd60b*/
          v20 = 0; /*0x5fd610*/
          LCW::DecompressReader((int)v36, &v20, 1); /*0x5fd615*/
          if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], &v22) ) /*0x5fd624*/
          {
            v18 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], &v22); /*0x5fd637*/
            v18[286] = v20; /*0x5fd640*/
          }
        }
      }
      --v33; /*0x5fd661*/
      LCWStraw::Dtor(v36); /*0x5fd665*/
      Vector::Clear((int)v28); /*0x5fd66e*/
      Straw::Dtor((int *)&v25); /*0x5fd677*/
    }
    --v33; /*0x5fd685*/
    Vector::Clear((int)v35); /*0x5fd689*/
  }
  return ProcessExpiredPointers(); /*0x5fd697*/
}


// ==== 0x005FD6A0  OverlayClass::WriteINI  this=ObjectClass  sig=csp ====
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
  _DWORD v22[4]; // [esp+2Ch] [ebp-7Ch] BYREF
  int v23[3]; // [esp+3Ch] [ebp-6Ch] BYREF
  _DWORD v24[4]; // [esp+48h] [ebp-60h] BYREF
  int v25[10]; // [esp+58h] [ebp-50h] BYREF
  int v26[10]; // [esp+80h] [ebp-28h] BYREF

  INIClass::ClearSection((int)this, (int)aOverlay, 0); /*0x5fd6b4*/
  INIClass::ClearSection((int)this, (int)g_INI_Key_OverlayPack, 0); /*0x5fd6c2*/
  v2 = 0; /*0x5fd6cd*/
  v3 = 0; /*0x5fd6cf*/
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 128))(MEMORY[0x887310]); /*0x5fd6df*/
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 124))(MEMORY[0x887310]) * v4; /*0x5fd6e6*/
  v6 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 92))(MEMORY[0x887310], 0, 0); /*0x5fd6f3*/
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
      v8 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], &v19); /*0x5fd752*/
      v3 += (signed int)LCW::Compress((int)v26, v8 + 68, 1); /*0x5fd764*/
    }
    ++v2; /*0x5fd76f*/
  }
  while ( v2 < 512 ); /*0x5fd776*/
  if ( v3 ) /*0x5fd77a*/
  {
    v9 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 92))(MEMORY[0x887310], 0, 0); /*0x5fd78b*/
    INIClass::ReadBase64Data(this, (unsigned __int8 *)g_INI_Key_OverlayPack, v9, v3); /*0x5fd796*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 96))(MEMORY[0x887310]); /*0x5fd7a3*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 96))(MEMORY[0x887310]); /*0x5fd7ae*/
  INIClass::ClearSection((int)this, (int)g_INI_Key_OverlayDataPack, 0); /*0x5fd7ba*/
  v10 = 0; /*0x5fd7c5*/
  v11 = 0; /*0x5fd7c7*/
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 128))(MEMORY[0x887310]); /*0x5fd7d7*/
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 124))(MEMORY[0x887310]) * v12; /*0x5fd7de*/
  v14 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 92))(MEMORY[0x887310], 0, 0); /*0x5fd7eb*/
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
      v16 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], &v19); /*0x5fd84a*/
      v11 += (signed int)LCW::Compress((int)v25, v16 + 286, 1); /*0x5fd85e*/
    }
    ++v10; /*0x5fd869*/
  }
  while ( v10 < 512 ); /*0x5fd870*/
  if ( v11 ) /*0x5fd874*/
  {
    v17 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 92))(MEMORY[0x887310], 0, 0); /*0x5fd885*/
    INIClass::ReadBase64Data(this, (unsigned __int8 *)g_INI_Key_OverlayDataPack, v17, v11); /*0x5fd890*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 96))(MEMORY[0x887310]); /*0x5fd89d*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 96))(MEMORY[0x887310]); /*0x5fd8a8*/
  LCWPipe::_LCWPipe(v25); /*0x5fd8af*/
  Vector::Clear((int)v24); /*0x5fd8b8*/
  Pipe::Dtor(v23); /*0x5fd8c1*/
  LCWPipe::_LCWPipe(v26); /*0x5fd8ca*/
  Vector::Clear((int)v22); /*0x5fd8d3*/
  return Pipe::Dtor(v21); /*0x5fd8e1*/
}


// ==== 0x005FD8F0  OverlayClass::LoadObject  this=OverlayClass  sig=csp ====
int __thiscall Object::LoadObject(void *this, ObjectClass *aP1, int aP1a)
{
  ObjectClass *Register; // edi

  Register = (ObjectClass *)BuildingClass::SaveLoad_Register((#374 *)this); /*0x5fd901*/
  if ( (int)Register >= 0 ) /*0x5fd905*/
  {
    if ( aP1 ) /*0x5fd909*/
    {
      ObjectClass::Init(aP1, (AbstractClass *)&aP1a); /*0x5fd912*/
      *(_DWORD *)aP1->__pad_0 = &OverlayClass::`vftable'; /*0x5fd917*/
      *(_DWORD *)&aP1->__pad_0[4] = &OverlayClass::`vftable'; /*0x5fd91d*/
      *(_DWORD *)&aP1->__pad_0[8] = &OverlayClass::`vftable'; /*0x5fd924*/
      *(_DWORD *)&aP1->__pad_0[12] = &vt_OverlayClass; /*0x5fd92b*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP1[1]); /*0x5fd93e*/
  }
  return (int)Register->__pad_0; /*0x5fd945*/
}


// ==== 0x005FD950  OverlayClass::SaveObject  this=OverlayClass  sig=csp ====
int __stdcall Object::SaveObject(TechnoTypeClass *aP0, int *a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x5fd964*/
}


// ==== 0x005FD970  OverlayClass::HandleAction  this=OverlayClass  sig=csp ====
void __thiscall Object::_vt70(int this, int *a2, int *a3)
{
  int *v4; // esi
  int v5; // ebp
  int GroundHeight; // eax
  int v7; // eax
  BuildingTypeClass *v8; // edx
  int v9; // ebx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  BuildingTypeClass *v14; // esi
  int v15; // eax
  int v16; // esi
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  char *v20; // esi
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
  int v31; // [esp+18h] [ebp-10h]
  int v32; // [esp+1Ch] [ebp-Ch] BYREF
  int v33; // [esp+20h] [ebp-8h]
  int v34; // [esp+24h] [ebp-4h]

  v4 = (int *)(this + 156); /*0x5fd987*/
  v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 172) + 156))(*(_DWORD *)(this + 172)); /*0x5fd98d*/
  v32 = *v4; /*0x5fd993*/
  v33 = *(_DWORD *)(this + 160); /*0x5fd99f*/
  v34 = *(_DWORD *)(this + 164); /*0x5fd9a6*/
  GroundHeight = Cell::GetGroundHeight(&v32); /*0x5fd9af*/
  v29 = ZCoordToScreenY(GroundHeight); /*0x5fd9c1*/
  v7 = 0; /*0x5fd9c5*/
  if ( MEMORY[0xA83D90] <= 0 ) /*0x5fd9c9*/
  {
LABEL_5:
    v7 = -1; /*0x5fd9e3*/
  }
  else
  {
    v8 = MEMORY[0xA83D84]; /*0x5fd9d1*/
    while ( *(_DWORD *)v8->vtable0 != *(_DWORD *)(this + 172) ) /*0x5fd9d9*/
    {
      ++v7; /*0x5fd9db*/
      v8 = (BuildingTypeClass *)((char *)v8 + 4); /*0x5fd9dc*/
      if ( v7 >= MEMORY[0xA83D90] ) /*0x5fd9e1*/
        goto LABEL_5; /*0x5fd9e1*/
    }
  }
  v9 = 0; /*0x5fd9ec*/
  v10 = *(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * v7]; /*0x5fd9ee*/
  if ( *(_BYTE *)(v10 + 681) || *(_BYTE *)(v10 + 680) || *(_DWORD *)(v10 + 660) == 126 || *(_BYTE *)(v10 + 682) ) /*0x5fda0a*/
    v9 = -12; /*0x5fda12*/
  if ( *(_DWORD *)(v10 + 664) == 9 ) /*0x5fda1e*/
    --v9; /*0x5fda20*/
  if ( v7 == 126 ) /*0x5fda24*/
    --v9; /*0x5fda26*/
  v11 = v9 + a2[1]; /*0x5fda30*/
  v30 = *a2; /*0x5fda32*/
  v31 = MEMORY[0x886FA4] + v11; /*0x5fda42*/
  v12 = *(_DWORD *)(this + 172); /*0x5fda46*/
  if ( *(_BYTE *)(v12 + 681) ) /*0x5fda4c*/
  {
    v13 = 0; /*0x5fda5a*/
    if ( MEMORY[0xA83D90] <= 0 ) /*0x5fda5e*/
    {
LABEL_20:
      v13 = -1; /*0x5fda72*/
    }
    else
    {
      v14 = MEMORY[0xA83D84]; /*0x5fda60*/
      while ( *(_DWORD *)v14->vtable0 != v12 ) /*0x5fda68*/
      {
        ++v13; /*0x5fda6a*/
        v14 = (BuildingTypeClass *)((char *)v14 + 4); /*0x5fda6b*/
        if ( v13 >= MEMORY[0xA83D90] ) /*0x5fda70*/
          goto LABEL_20; /*0x5fda70*/
      }
    }
    v15 = *(_DWORD *)&MEMORY[0xB0F4EC]->__pad_0[4 * FindBuildingByTiberiumType(v13)]; /*0x5fda8b*/
    v16 = *((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(v15 + 192)); /*0x5fda93*/
    v17 = *(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * *(_DWORD *)(*(_DWORD *)(v15 + 224) + 660)]; /*0x5fdaa8*/
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 156))(v17); /*0x5fdaad*/
    if ( !v18 ) /*0x5fdab5*/
    {
      v19 = *(_DWORD *)(*(_DWORD *)(this + 172) + 668); /*0x5fdabd*/
      if ( v19 ) /*0x5fdac5*/
        v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 156))(v19); /*0x5fdac9*/
    }
    DrawToSurfaceSHP( /*0x5fdb03*/
      MEMORY[0x887314],
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
  else if ( *(_BYTE *)(v12 + 686) ) /*0x5fdb08*/
  {
    if ( *(_DWORD *)(v12 + 660) == 167 ) /*0x5fdb20*/
      v31 -= 38; /*0x5fdb22*/
    v32 = *v4; /*0x5fdb2b*/
    v33 = *(_DWORD *)(this + 160); /*0x5fdb32*/
    v34 = *(_DWORD *)(this + 164); /*0x5fdb41*/
    v20 = (char *)MEMORY[0xB054D4] + 4 * *((_DWORD *)HouseClass_Player + 22549); /*0x5fdb60*/
    v27 = *((__int16 *)Coord::To_Cell(&MEMORY[0x87F7E8], &v32) + 134); /*0x5fdb7c*/
    DrawToSurfaceSHP( /*0x5fdb9a*/
      MEMORY[0x887314],
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
    v21 = *v4; /*0x5fdba1*/
    v22 = *(_DWORD *)(this + 160); /*0x5fdba3*/
    v34 = *(_DWORD *)(this + 164); /*0x5fdba9*/
    LOWORD(a2) = v21 / 256; /*0x5fdbb9*/
    HIWORD(a2) = v22 / 256; /*0x5fdbd1*/
    if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&a2) ) /*0x5fdbe3*/
    {
      v23 = *(_DWORD *)(this + 164); /*0x5fdbee*/
      v24 = *(_DWORD *)(this + 160); /*0x5fdbf1*/
      v32 = *v4; /*0x5fdbf4*/
      v34 = v23; /*0x5fdbfc*/
      v33 = v24; /*0x5fdc06*/
      v25 = Coord::To_Cell(&MEMORY[0x87F7E8], &v32); /*0x5fdc0a*/
    }
    else
    {
      v26 = (__int16 *)Tactical::PixelToCell((int)MEMORY[0x887324], &a2, &v30); /*0x5fdc21*/
      if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], v26) ) /*0x5fdc2c*/
      {
        v28 = (__int16 *)Tactical::PixelToCell((int)MEMORY[0x887324], &a2, &v30); /*0x5fdc4a*/
        v25 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v28); /*0x5fdc4b*/
      }
      else
      {
        LOWORD(a2) = 1; /*0x5fdc58*/
        HIWORD(a2) = MEMORY[0x87F8DC]; /*0x5fdc5f*/
        v25 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x5fdc6a*/
      }
    }
    DrawToSurfaceSHP( /*0x5fdcaa*/
      MEMORY[0x887314],
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
_DWORD *__fastcall globalHelper_0FDCC0(IUnknown *aP0, int a2)
{
  _DWORD *result; // eax
  int v3; // esi
  int v4; // ecx

  result = &aP0->field_0; /*0x5fdcc0*/
  v3 = *(_DWORD *)(HouseClass_Player.field_38 + 4 * a2); /*0x5fdccd*/
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


// ==== 0x005FDD20  FindBuildingByTiberiumType  this=-  sig=csp ====
int __fastcall FindBuildingByTiberiumType(IUnknown *aP0)
{
  int v1; // eax
  int v2; // ebx
  int **v3; // edi
  int *v4; // eax
  int v5; // edx
  int v6; // esi
  _BYTE v8[49]; // [esp-34h] [ebp-48h] BYREF
  int v9; // [esp+10h] [ebp-4h]

  if ( aP0 == (IUnknown *)-1 ) /*0x5fdd28*/
    return -1; /*0x5fdd28*/
  v1 = *(_DWORD *)(HouseClass_Player.field_38 + 4 * (_DWORD)aP0); /*0x5fdd33*/
  v9 = v1; /*0x5fdd36*/
  if ( !*(_BYTE *)(v1 + 681) ) /*0x5fdd3a*/
    return -1; /*0x5fddd8*/
  v2 = 0; /*0x5fdd4e*/
  if ( *(int *)&stru_B05488.__pad_579C[18644] <= 0 ) /*0x5fdd52*/
  {
LABEL_11:
    qmemcpy(v8, (const void *)(v1 + 100), sizeof(v8)); /*0x5fdda4*/
    Debug::Log(); /*0x5fddb9*/
    return 0; /*0x5fddc1*/
  }
  else
  {
    v3 = *(int ***)&stru_B05488.__pad_579C[18632]; /*0x5fdd54*/
    while ( 1 ) /*0x5fdd5a*/
    {
      v4 = *v3; /*0x5fdd5a*/
      v5 = *(_DWORD *)((*v3)[56] + 660); /*0x5fdd62*/
      if ( (int)aP0 >= v5 && (int)aP0 < v5 + v4[58] ) /*0x5fdd76*/
        break; /*0x5fdd76*/
      v6 = v4[58]; /*0x5fdd78*/
      if ( (int)aP0 >= v6 + v5 && (int)aP0 < v5 + v6 + v4[59] ) /*0x5fdd91*/
        break; /*0x5fdd91*/
      ++v2; /*0x5fdd98*/
      ++v3; /*0x5fdd99*/
      if ( v2 >= *(int *)&stru_B05488.__pad_579C[18644] ) /*0x5fdd9e*/
      {
        v1 = v9; /*0x5fdda0*/
        goto LABEL_11; /*0x5fdda0*/
      }
    }
    return v4[38]; /*0x5fddc9*/
  }
}


// ==== 0x005FDDE0  OverlayClass::ProcessEvent  this=OverlayClass  sig=csp ====
int __thiscall Object::_vt34(_DWORD *this)
{
  return this->Type; /*0x5fdde6*/
}


// ==== 0x005FDDF0  ObjectClass::ResetBuildingState  this=ObjectClass  sig=csp ====
void sub_5FDDF0()
{
  int v0; // esi
  int v1; // eax
  int v2; // ecx
  int v3; // eax
  int i; // edi
  _BYTE *v5; // esi
  void **v6; // [esp+Ch] [ebp-18h] BYREF
  void *Block; // [esp+10h] [ebp-14h]
  int v8; // [esp+14h] [ebp-10h]
  char v9; // [esp+18h] [ebp-Ch]
  char v10; // [esp+19h] [ebp-Bh]
  int v11; // [esp+1Ch] [ebp-8h]
  int v12; // [esp+20h] [ebp-4h]

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5fddfb*/
  v0 = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5fde0a*/
  v1 = 0; /*0x5fde0e*/
  v2 = 1000; /*0x5fde10*/
  Block = 0; /*0x5fde17*/
  v8 = 0; /*0x5fde1b*/
  v9 = 1; /*0x5fde1f*/
  v10 = 0; /*0x5fde24*/
  v6 = &vt_DynamicVectorClass_CellClass; /*0x5fde28*/
  v11 = 0; /*0x5fde30*/
  v12 = 1000; /*0x5fde34*/
  if ( v0 ) /*0x5fde38*/
  {
    while ( 1 ) /*0x5fde47*/
    {
      if ( *(_DWORD *)(v0 + 68) == 126 ) /*0x5fde4b*/
      {
        if ( *(_BYTE *)(v0 + 286) >= 0x30u /*0x5fde76*/
          && (v11 < v1
           || (v10 || !v1) && v2 > 0 && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v6[2])(&v6, v2 + v1, 0)) )
        {
          v3 = v11++; /*0x5fde81*/
          *((_DWORD *)Block + v3) = v0; /*0x5fde8c*/
        }
        *(_DWORD *)(v0 + 68) = -1; /*0x5fde8f*/
        *(_BYTE *)(v0 + 286) = 0; /*0x5fde92*/
      }
      v0 = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5fdea2*/
      if ( !v0 ) /*0x5fdea6*/
        break; /*0x5fdea6*/
      v1 = v8; /*0x5fde3f*/
      v2 = v12; /*0x5fde43*/
    }
  }
  for ( i = v11 - 1; i >= 0; --i ) /*0x5fdeb1*/
  {
    v5 = (_BYTE *)*((_DWORD *)Block + i); /*0x5fdeb7*/
    if ( BuildingClass::CheckAdjacentCells((int)v5) ) /*0x5fdebc*/
      BuildingClass::VisualizePlacement(v5); /*0x5fdec7*/
  }
  v6 = &vt_VectorClass_CellClass; /*0x5fded3*/
  if ( Block ) /*0x5fdedd*/
  {
    if ( v10 ) /*0x5fdee3*/
      __3_YAXPAX_Z(Block); /*0x5fdee6*/
  }
}


// ==== 0x005FDF00  OverlayClass::StubReturn176  this=OverlayClass  sig=csp ====
int Object::_vt12()
{
  return 176; /*0x5fdf05*/
}


// ==== 0x005FDF10  OverlayClass::ddtor  this=OverlayClass  sig=csp ====
int __stdcall Object::_vt03(int a1, _DWORD *a2)
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
int Object::_vt11()
{
  return 20; /*0x5fdf55*/
}


// ==== 0x005FDF60  OverlayClass::nullsub_212  this=OverlayClass  sig=csp ====
void __stdcall nullsub_212(int a1, int a2)
{
  ; /*0x5fdf60*/
}


// ==== 0x005FDF70  OverlayClass::DrawObject  this=OverlayClass  sig=csp ====
OverlayClass *__thiscall Object::DrawObject(void **Block, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &OverlayClass::`vftable'; /*0x5fdf76*/
  *(Block + 1) = &OverlayClass::`vftable'; /*0x5fdf7c*/
  *(Block + 2) = &OverlayClass::`vftable'; /*0x5fdf83*/
  *(Block + 3) = &vt_OverlayClass; /*0x5fdf8a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x5fdf91*/
  v5 = Block; /*0x5fdfa6*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xA8EC50] + 16))(&MEMORY[0xA8EC50], &v5); /*0x5fdfaa*/
  if ( v3 != -1 && v3 < MEMORY[0xA8EC60] && v3 < --MEMORY[0xA8EC60] ) /*0x5fdfc5*/
  {
    do /*0x5fdfdd*/
    {
      ++v3; /*0x5fdfcd*/
      *((_DWORD *)MEMORY[0xA8EC54] + v3 - 1) = *((_DWORD *)MEMORY[0xA8EC54] + v3); /*0x5fdfd1*/
    }
    while ( v3 < MEMORY[0xA8EC60] ); /*0x5fdfdd*/
  }
  if ( MEMORY[0xA8E9A0] ) /*0x5fdfe6*/
    ObjectClass::Undeploy((#374 *)Block); /*0x5fdfea*/
  *(Block + 43) = 0; /*0x5fdff1*/
  ObjectClass::Dtor(Block); /*0x5fdffb*/
  if ( (a2 & 1) != 0 ) /*0x5fe005*/
    __3_YAXPAX_Z(Block); /*0x5fe008*/
  return (OverlayClass *)Block; /*0x5fe012*/
}


// ==== 0x005FE020  OverlayClass::updateOverlayState  this=OverlayClass  sig=csp ====
TechnoClass *__thiscall OverlayClass::updateOverlayState(_DWORD *this, int a2, int a3)
{
  this->vtable2 = a2; /*0x5fe02a*/
  this->vtable3 = a3; /*0x5fe02d*/
  this->vtable4 = 0; /*0x5fe030*/
  *this = &XSurface_Vtable; /*0x5fe037*/
  return (TechnoClass *)this; /*0x5fe03d*/
}


// ==== 0x005FE040  sub_5FE040  this=-  sig=ida-proto ====
int sub_5FE040()
{
  MEMORY[0xAC15F8] = 0; /*0x5fe042*/
  MEMORY[0xAC15FC] = 0; /*0x5fe047*/
  MEMORY[0xAC1600] = 0; /*0x5fe04c*/
  MEMORY[0xAC1604] = 0; /*0x5fe051*/
  return 0; /*0x5fe056*/
}


// ==== 0x005FE060  sub_5FE060  this=-  sig=ida-proto ====
void sub_5FE060()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5fe06c*/
  MEMORY[0xAC1610] = Math::Sqrt(v0 + v0); /*0x5fe07e*/
}


// ==== 0x005FE090  sub_5FE090  this=-  sig=ida-proto ====
void sub_5FE090()
{
  MEMORY[0xAC1668] = MEMORY[0xAC1610] / 60.0; /*0x5fe09c*/
}


// ==== 0x005FE0B0  sub_5FE0B0  this=-  sig=ida-proto ====
void sub_5FE0B0()
{
  MEMORY[0xAC1650] = 1.0 / MEMORY[0xAC1668]; /*0x5fe0bc*/
}


// ==== 0x005FE0D0  sub_5FE0D0  this=-  sig=ida-proto ====
void sub_5FE0D0()
{
  MEMORY[0xAC1648] = 0.0174532925199433 * 45.0; /*0x5fe0dc*/
}


// ==== 0x005FE0F0  sub_5FE0F0  this=-  sig=ida-proto ====
void sub_5FE0F0()
{
  MEMORY[0xAC1618] = 0.0174532925199433 * 60.0; /*0x5fe0fc*/
}


// ==== 0x005FE110  sub_5FE110  this=-  sig=ida-proto ====
void sub_5FE110()
{
  MEMORY[0xAC15F0] = 0.0174532925199433 * 90.0; /*0x5fe11c*/
}


// ==== 0x005FE130  sub_5FE130  this=-  sig=ida-proto ====
__int64 sub_5FE130()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC15F0] - MEMORY[0xAC1618]); /*0x5fe142*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC1610] * 0.5); /*0x5fe156*/
  MEMORY[0xAC1670] = result; /*0x5fe15b*/
  return result; /*0x5fe160*/
}


// ==== 0x005FE170  sub_5FE170  this=-  sig=ida-proto ====
void sub_5FE170()
{
  MEMORY[0xAC1620] = Math::ArcTan((double)MEMORY[0xAC1670] * 0.00390625); /*0x5fe187*/
}


// ==== 0x005FE1A0  sub_5FE1A0  this=-  sig=ida-proto ====
void sub_5FE1A0()
{
  MEMORY[0xAC1638] = Math::ArcTan((double)(2 * MEMORY[0xAC1670]) / MEMORY[0xAC1610]); /*0x5fe1c2*/
}


// ==== 0x005FE1D0  sub_5FE1D0  this=-  sig=ida-proto ====
__int64 sub_5FE1D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC1670]) + 0.5); /*0x5fe1eb*/
  MEMORY[0xAC1664] = result; /*0x5fe1f0*/
  return result; /*0x5fe1f6*/
}


// ==== 0x005FE200  sub_5FE200  this=-  sig=ida-proto ====
int sub_5FE200()
{
  MEMORY[0xAC1608] = 0; /*0x5fe202*/
  MEMORY[0xAC160A] = 0; /*0x5fe208*/
  return 0; /*0x5fe20e*/
}


// ==== 0x005FE210  sub_5FE210  this=-  sig=ida-proto ====
int sub_5FE210()
{
  MEMORY[0xAC1628] = 0; /*0x5fe212*/
  MEMORY[0xAC162C] = 0; /*0x5fe217*/
  MEMORY[0xAC1630] = 0; /*0x5fe21c*/
  return 0; /*0x5fe221*/
}


// ==== 0x005FE230  sub_5FE230  this=-  sig=ida-proto ====
int sub_5FE230()
{
  MEMORY[0xAC1660] = 0; /*0x5fe235*/
  MEMORY[0xAC1658] = 128; /*0x5fe23f*/
  MEMORY[0xAC165C] = 128; /*0x5fe244*/
  return 128; /*0x5fe249*/
}


// ==== 0x005FE250  OverlayTypeClass::OverlayTypeClass  this=OverlayTypeClass  sig=csp ====
_DWORD *__thiscall OverlayTypeClass::OverlayTypeClass(_DWORD *this, ObjectClass *aP1)
{
  OverlayTypeClass *v3; // eax
  bool v4; // zf
  int v5; // ecx
  CCINIClass *v6; // edx

  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP1); /*0x5fe259*/
  this->Strength_e = 1; /*0x5fe265*/
  this->Wall = 1; /*0x5fe26b*/
  this->Explodes = 1; /*0x5fe271*/
  *((_BYTE *)this + 691) = 1; /*0x5fe277*/
  this->LandType = -1; /*0x5fe280*/
  this->CellAnim = 0; /*0x5fe28a*/
  this->DamageLevels = 0; /*0x5fe290*/
  this->NoUseTileLandType = 0; /*0x5fe296*/
  this->IsVeinholeMonster_e = 0; /*0x5fe29c*/
  this->IsVeins_e = 0; /*0x5fe2a2*/
  this->ImageLoaded_e = 0; /*0x5fe2a8*/
  this->ChainReaction_e = 0; /*0x5fe2ae*/
  this->Overrides_e = 0; /*0x5fe2b4*/
  this->DrawFlat_e = 0; /*0x5fe2ba*/
  this->IsRubble = 0; /*0x5fe2c0*/
  this->IsARock_e = 0; /*0x5fe2c6*/
  this->RadarColor_e = 0; /*0x5fe2cc*/
  this->q2B4 = 0; /*0x5fe2d2*/
  this->tail_2B5 = 0; /*0x5fe2d8*/
  this->q2B6 = 0; /*0x5fe2de*/
  this->q2B7 = 0; /*0x5fe2e4*/
  this->q2B8 = 0; /*0x5fe2ea*/
  *this = &OverlayTypeClass::`vftable'; /*0x5fe2f1*/
  this->vtable2 = &OverlayTypeClass::`vftable'; /*0x5fe2f7*/
  this->vtable3 = &OverlayTypeClass::`vftable'; /*0x5fe2fd*/
  this->vtable4 = &vt_OverlayTypeClass; /*0x5fe304*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x5fe30b*/
  this->q22F = 1; /*0x5fe310*/
  this->q230 = 0; /*0x5fe317*/
  this->q232 = 1; /*0x5fe31d*/
  this->q235 = 0; /*0x5fe324*/
  v3 = MEMORY[0xA83D90]; /*0x5fe32a*/
  if ( (int)MEMORY[0xA83D90] < MEMORY[0xA83D88] /*0x5fe368*/
    || (MEMORY[0xA83D8D] || !MEMORY[0xA83D88])
    && MEMORY[0xA83D94] > 0
    && (v4 = ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))MEMORY[0xA83D80]->field_8)(
               &MEMORY[0xA83D80],
               MEMORY[0xA83D88] + MEMORY[0xA83D94],
               0) == 0,
        v3 = MEMORY[0xA83D90],
        !v4) )
  {
    MEMORY[0xA83D90] = (OverlayTypeClass *)&v3->__pad_0[1]; /*0x5fe36d*/
    *(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * (_DWORD)v3] = this; /*0x5fe377*/
    v3 = MEMORY[0xA83D90]; /*0x5fe37a*/
  }
  v5 = 0; /*0x5fe37f*/
  if ( (int)v3 <= 0 ) /*0x5fe383*/
  {
LABEL_11:
    this->LandType = -1; /*0x5fe397*/
    return this; /*0x5fe3a0*/
  }
  else
  {
    v6 = MEMORY[0xA83D84]; /*0x5fe385*/
    while ( *(_DWORD **)v6->__pad_0 != this ) /*0x5fe38d*/
    {
      ++v5; /*0x5fe38f*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x5fe390*/
      if ( v5 >= (int)v3 ) /*0x5fe395*/
        goto LABEL_11; /*0x5fe395*/
    }
    this->LandType = v5; /*0x5fe3a7*/
    return this; /*0x5fe3ad*/
  }
}


// ==== 0x005FE4C0  OverlayTypeClass::GetTile  this=OverlayTypeClass  sig=csp ====
int *__stdcall OverlayTypeClass::_vt36(int a1)
{
  if ( (MEMORY[0xAC15E8] & 1) == 0 ) /*0x5fe4cb*/
  {
    MEMORY[0xAC15E8] |= 1u; /*0x5fe4e6*/
    MEMORY[0xAC1640] = 0; /*0x5fe4ec*/
    MEMORY[0xAC1644] = 2147450879; /*0x5fe504*/
    atexit(nullsub_213); /*0x5fe50a*/
  }
  return &MEMORY[0xAC1640]; /*0x5fe518*/
}


// ==== 0x005FE520  nullsub_213  this=-  sig=ida-proto ====
void __cdecl nullsub_213()
{
  ; /*0x5fe520*/
}


// ==== 0x005FE530  OverlayTypeClass::GetType  this=OverlayTypeClass  sig=csp ====
bool __thiscall OverlayTypeClass::GetType(IUnknown *this, IUnknown *aP2, int a3)
{
  void *v4; // eax

  v4 = (void *)__2_YAPAXI_Z(0xB0u); /*0x5fe538*/
  return v4 && Object::SpawnAtCell(v4, this, aP2, (BuildingTypeClass *)0xFFFFFFFF); /*0x5fe559*/
}


// ==== 0x005FE570  OverlayTypeClass::GetDamage  this=OverlayTypeClass  sig=csp ====
OverlayClass *__thiscall OverlayTypeClass::GetDamage(IUnknown *this, int a2)
{
  void *v3; // eax

  v3 = (void *)__2_YAPAXI_Z(0xB0u); /*0x5fe578*/
  if ( v3 ) /*0x5fe582*/
    return Object::SpawnAtCell( /*0x5fe58e*/
             v3,
             this,
             (IUnknown *)(&(&g_MatrixTransformState)[213] + 2),
             (BuildingTypeClass *)0xFFFFFFFF);
  else
    return 0; /*0x5fe597*/
}


// ==== 0x005FE5A0  OverlayTypeClass::GetLandType  this=OverlayTypeClass  sig=csp ====
void __thiscall OverlayTypeClass::_vt40(void *this, _DWORD *a2, int *a3, unsigned int a4)
{
  int v4; // edx
  int v5; // eax
  int v6[2]; // [esp+8h] [ebp-8h] BYREF

  v4 = MEMORY[0x886FA4] + a2[1] + 15; /*0x5fe5c1*/
  v6[0] = MEMORY[0x886FA0] + *a2 + 30; /*0x5fe5c4*/
  v6[1] = v4; /*0x5fe5c8*/
  v5 = (*(int (__thiscall **)(void *))(this->Armor)(this); /*0x5fe5f3*/
  DrawToSurfaceSHP(MEMORY[0x887314], MEMORY[0x87F6B8], v5, a4, v6, a3, 1536, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x5fe606*/
}


// ==== 0x005FE620  LoadBuildingTypeClassSHPs  this=-  sig=ida-proto ====
int __fastcall BuildingTypeClass_LoadSHPs(int a1)
{
  int result; // eax
  int v2; // ebp
  int v4; // esi
  char v5; // al
  int v6; // eax
  int v7; // eax
  char Buffer[512]; // [esp+Ch] [ebp-200h] BYREF

  result = MEMORY[0xA83D90]; /*0x5fe620*/
  v2 = 0; /*0x5fe62f*/
  if ( MEMORY[0xA83D90] > 0 ) /*0x5fe636*/
  {
    while ( 1 ) /*0x5fe642*/
    {
      v4 = *((_DWORD *)MEMORY[0xA83D84] + v2); /*0x5fe642*/
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
      result = MEMORY[0xA83D90]; /*0x5fe754*/
      if ( ++v2 >= MEMORY[0xA83D90] ) /*0x5fe75c*/
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
char __thiscall OverlayTypeClass::LoadFromINI(int this, unsigned __int8 ***aP1)
{
  AnimTypeClass *v3; // eax
  INIClass *v4; // ecx
  int Int_Overwrite; // eax
  char Bool_Overwrite; // al
  char v7; // cl
  char v8; // al
  char v9; // al
  char v10; // cl
  char v11; // al
  AnimTypeClass *v12; // ebp
  AnimTypeClass *v13; // eax
  AnimTypeClass *v14; // eax
  int Coord; // eax
  char v16; // al
  char v17; // cl
  char v18; // al
  char v19; // al
  char v20; // cl
  char v21; // al
  char v23; // [esp-Ch] [ebp-298h]
  char v24; // [esp-Ch] [ebp-298h]
  char v25; // [esp-Ch] [ebp-298h]
  char v26; // [esp-Ch] [ebp-298h]
  char v27; // [esp-Ch] [ebp-298h]
  CCINIClass v28; // [esp+8h] [ebp-284h] BYREF
  char Buffer[512]; // [esp+8Ch] [ebp-200h] BYREF

  INIClass::ResetSection(aP1); /*0x5fe783*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)aP1) ) /*0x5fe78b*/
    return 0; /*0x5fea1f*/
  v3 = (AnimTypeClass *)OverlayTypeClass::ReadINIString( /*0x5fe7ac*/
                          aP1,
                          (INIClass *)(this + 36),
                          (unsigned __int8 *)&stru_830620.__pad_14B0[6832],
                          *(_DWORD *)(this + 664));
  v4 = *(INIClass **)(this + 676); /*0x5fe7b1*/
  *(_DWORD *)(this + 664) = v3; /*0x5fe7b7*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x5fe7c6*/
                    (int)aP1,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_830620.__pad_14B0[4264],
                    v4);
  v23 = *(_BYTE *)(this + 680); /*0x5fe7d3*/
  *(_DWORD *)(this + 676) = Int_Overwrite; /*0x5fe7da*/
  *(_BYTE *)(this + 680) = INIClass::ReadBool_Overwrite( /*0x5fe7e5*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_81AC50.headNode[1],
                             v23);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5fe7fa*/
                     (int)aP1,
                     (unsigned __int8 *)(this + 36),
                     (CCINIClass *)&stru_817244.needsSave_flag,
                     *(_BYTE *)(this + 681));
  v7 = *(_BYTE *)(this + 682); /*0x5fe7ff*/
  *(_BYTE *)(this + 681) = Bool_Overwrite; /*0x5fe805*/
  v8 = INIClass::ReadBool_Overwrite( /*0x5fe814*/
         (int)aP1,
         (unsigned __int8 *)(this + 36),
         (CCINIClass *)&stru_830620.__pad_14B0[6824],
         v7);
  v24 = *(_BYTE *)(this + 683); /*0x5fe821*/
  *(_BYTE *)(this + 682) = v8; /*0x5fe828*/
  *(_BYTE *)(this + 683) = INIClass::ReadBool_Overwrite( /*0x5fe833*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_14B0[6808],
                             v24);
  v9 = INIClass::ReadBool_Overwrite( /*0x5fe848*/
         (int)aP1,
         (unsigned __int8 *)(this + 36),
         (CCINIClass *)&stru_830620.__pad_14B0[6796],
         *(_BYTE *)(this + 688));
  v10 = *(_BYTE *)(this + 690); /*0x5fe84d*/
  *(_BYTE *)(this + 688) = v9; /*0x5fe853*/
  v11 = INIClass::ReadBool_Overwrite( /*0x5fe862*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_14B0[6784],
          v10);
  v12 = *(AnimTypeClass **)(this + 668); /*0x5fe867*/
  *(_BYTE *)(this + 690) = v11; /*0x5fe884*/
  if ( INIClass::GetString( /*0x5fe88a*/
         aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_830620.__pad_14B0[6772],
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         (INIClass *)v28.headNode,
         128) )
  {
    v13 = AnimTypeClass::FindOrCreate((AbstractClass *)v28.headNode); /*0x5fe897*/
  }
  else
  {
    v13 = v12; /*0x5fe89e*/
  }
  *(_DWORD *)(this + 668) = v13; /*0x5fe8a0*/
  *(_DWORD *)(this + 672) = INIClass::ReadInt_Overwrite( /*0x5fe8c3*/
                              (int)&MEMORY[0x87F8E4].__pad_5568[9012],
                              (unsigned __int8 *)(this + 504),
                              (CCINIClass *)&stru_830620.__pad_14B0[6756],
                              *(INIClass **)(this + 672));
  if ( *(_BYTE *)(this + 681) ) /*0x5fe8c9*/
  {
    v14 = *(AnimTypeClass **)(this + 664); /*0x5fe8d3*/
    *(_DWORD *)(this + 156) = 6; /*0x5fe8d9*/
    if ( !v14 ) /*0x5fe8e5*/
      *(_DWORD *)(this + 664) = 5; /*0x5fe8e7*/
  }
  if ( !*(_BYTE *)(this + 556) && !*(_BYTE *)(this + 687) ) /*0x5fe8fb*/
  {
    _makepath(Buffer, 0, 0, (const char *)(this + 504), Ext); /*0x5fe917*/
    *(_DWORD *)(this + 164) = SearchMIXFile(Buffer, 1); /*0x5fe92d*/
  }
  Coord = INIClass::GetCoord( /*0x5fe947*/
            aP1,
            &v28,
            (INIClass *)(this + 36),
            (Color *)&stru_830620.__pad_14B0[6744],
            (Color *)(this + 694));
  *(_WORD *)(this + 694) = *(_WORD *)Coord; /*0x5fe94f*/
  v25 = *(_BYTE *)(this + 684); /*0x5fe95e*/
  *(_BYTE *)(this + 696) = *(_BYTE *)(Coord + 2); /*0x5fe965*/
  v16 = INIClass::ReadBool_Overwrite( /*0x5fe968*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_14B0[6724],
          v25);
  v17 = *(_BYTE *)(this + 685); /*0x5fe96d*/
  *(_BYTE *)(this + 684) = v16; /*0x5fe973*/
  v18 = INIClass::ReadBool_Overwrite( /*0x5fe982*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_14B0[6704],
          v17);
  v26 = *(_BYTE *)(this + 686); /*0x5fe98f*/
  *(_BYTE *)(this + 685) = v18; /*0x5fe996*/
  *(_BYTE *)(this + 686) = INIClass::ReadBool_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &unk_8184A8, v26); /*0x5fe9a1*/
  v19 = INIClass::ReadBool_Overwrite( /*0x5fe9b6*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_14B0[6688],
          *(_BYTE *)(this + 689));
  v20 = *(_BYTE *)(this + 691); /*0x5fe9bb*/
  *(_BYTE *)(this + 689) = v19; /*0x5fe9c1*/
  v21 = INIClass::ReadBool_Overwrite( /*0x5fe9d0*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_14B0[6676],
          v20);
  v27 = *(_BYTE *)(this + 693); /*0x5fe9dd*/
  *(_BYTE *)(this + 691) = v21; /*0x5fe9e4*/
  *(_BYTE *)(this + 693) = INIClass::ReadBool_Overwrite( /*0x5fe9ef*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_14B0[6668],
                             v27);
  *(_BYTE *)(this + 692) = INIClass::ReadBool_Overwrite( /*0x5fea0a*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_14B0[6656],
                             *(_BYTE *)(this + 692));
  return 1; /*0x5fea11*/
}


// ==== 0x005FEA30  OverlayTypeClass::vt_entry_6C  this=OverlayTypeClass  sig=csp ====
_DWORD *__stdcall OverlayTypeClass::vt_entry_6C(_DWORD *a0, OverlayTypeClass *aP1)
{
  *a0 = *(_DWORD *)aP1->__pad_0; /*0x5fea3d*/
  a0[1] = *(_DWORD *)&aP1->__pad_0[4]; /*0x5fea42*/
  a0[2] = *(_DWORD *)&aP1->__pad_0[8]; /*0x5fea49*/
  return a0; /*0x5fea45*/
}


// ==== 0x005FEA50  OverlayTypeClass::PowerDrainUpdate  this=OverlayTypeClass  sig=csp ====
int __thiscall OverlayTypeClass::_vt13(int this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x5fea59*/
  Power::TimerProcess(*(_DWORD *)(this + 660)); /*0x5fea67*/
  Power::TimerProcess(*(_DWORD *)(this + 664)); /*0x5fea75*/
  Power::TimerProcess(*(_DWORD *)(this + 672)); /*0x5fea83*/
  Power::TimerProcess(*(_DWORD *)(this + 676)); /*0x5fea91*/
  LOBYTE(v3) = *(_BYTE *)(this + 680); /*0x5fea96*/
  Power::FlagProcess(a2, v3); /*0x5fea9f*/
  LOBYTE(v4) = *(_BYTE *)(this + 681); /*0x5feaa4*/
  v5 = Power::FlagProcess(a2, v4); /*0x5feaad*/
  LOBYTE(v5) = *(_BYTE *)(this + 682); /*0x5feab2*/
  Power::FlagProcess(a2, v5); /*0x5feabb*/
  LOBYTE(v6) = *(_BYTE *)(this + 683); /*0x5feac0*/
  Power::FlagProcess(a2, v6); /*0x5feac9*/
  LOBYTE(v7) = *(_BYTE *)(this + 688); /*0x5feace*/
  return Power::FlagProcess(a2, v7); /*0x5feadc*/
}


// ==== 0x005FEAF0  OverlayTypeClass::SaveLoad_Prefix  this=OverlayTypeClass  sig=csp ====
int __stdcall OverlayTypeClass::SaveLoad_Prefix(int a1, int a2)
{
  int result; // eax
  char v3; // [esp+7h] [ebp-201h] BYREF
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  result = ObjectTypeClass::LoadCleanup(a1, a2); /*0x5feb04*/
  if ( result >= 0 ) /*0x5feb0b*/
  {
    if ( a1 ) /*0x5feb13*/
    {
      ObjectTypeClass::Construct((_DWORD *)a1, (int)&v3); /*0x5feb1c*/
      *(_DWORD *)a1 = &OverlayTypeClass::`vftable'; /*0x5feb21*/
      *(_DWORD *)(a1 + 4) = &OverlayTypeClass::`vftable'; /*0x5feb27*/
      *(_DWORD *)(a1 + 8) = &OverlayTypeClass::`vftable'; /*0x5feb2e*/
      *(_DWORD *)(a1 + 12) = &vt_OverlayTypeClass; /*0x5feb35*/
    }
    VoxelAnimType::LoadAnim((char *)a1); /*0x5feb3e*/
    ObjectTypeClass::Load2DArt((char *)a1); /*0x5feb45*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(a1 + 668)); /*0x5feb56*/
    if ( !*(_BYTE *)(a1 + 687) ) /*0x5feb5b*/
    {
      if ( *(_BYTE *)(a1 + 556) ) /*0x5feb69*/
      {
        _makepath( /*0x5feba1*/
          Buffer,
          0,
          0,
          (const char *)(a1 + 504),
          (const char *)&off_7E1BC6 + 112 * *((_DWORD *)MEMORY[0xA8B230] + 1174));
      }
      else
      {
        _makepath(Buffer, 0, 0, (const char *)(a1 + 504), Ext); /*0x5febc0*/
        TheaterObjectTypeClassSpecificID(Buffer, *((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x5febd7*/
      }
      if ( !*(_DWORD *)(a1 + 164) ) /*0x5febdc*/
        *(_DWORD *)(a1 + 164) = SearchMIXFile(Buffer, 1); /*0x5febf1*/
    }
    return 0; /*0x5febf7*/
  }
  return result; /*0x5febf9*/
}


// ==== 0x005FEC10  OverlayTypeClass::SaveLoad_Prefix_0  this=OverlayTypeClass  sig=csp ====
int __stdcall OverlayTypeClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, ObjectTypeClass *aP1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2); /*0x5fec1f*/
  if ( result >= 0 ) /*0x5fec26*/
    return 0; /*0x5fec28*/
  return result; /*0x5fec2a*/
}


// ==== 0x005FEC30  OverlayTypeClass::GetClassIdentifier  this=OverlayTypeClass  sig=csp ====
int __stdcall OverlayTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x5fec36*/
    return -2147467261; /*0x5fec38*/
  *a2 = 1525862009; /*0x5fec46*/
  a2[1] = 298976820; /*0x5fec4e*/
  a2[2] = 1610654892; /*0x5fec57*/
  a2[3] = -1252326136; /*0x5fec60*/
  return 0; /*0x5fec3d*/
}


// ==== 0x005FEC70  BuildingTypeClass::FindOrCreate2  this=ObjectClass  sig=csp ====
OverlayTypeClass *__thiscall BuildingTypeClass::FindOrCreate2(ObjectClass *Source)
{
  int v2; // esi
  _DWORD *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x5fec8c*/
    return 0; /*0x5fecef*/
  v2 = 0; /*0x5fec9d*/
  if ( *(int *)&HouseClass_Player.__pad_3C[8] <= 0 ) /*0x5feca1*/
  {
LABEL_6:
    v3 = (_DWORD *)__2_YAPAXI_Z(0x2BCu); /*0x5fecc6*/
    if ( v3 ) /*0x5fecd5*/
      return (OverlayTypeClass *)OverlayTypeClass::OverlayTypeClass(v3, Source); /*0x5fece1*/
    return 0; /*0x5fecd5*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(HouseClass_Player.field_38 + 4 * v2) + 36), Source) ) /*0x5fecba*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_3C[8] ) /*0x5fecc4*/
      goto LABEL_6; /*0x5fecc4*/
  }
  return *(OverlayTypeClass **)(HouseClass_Player.field_38 + 4 * v2); /*0x5fecdf*/
}


// ==== 0x005FED00  OverlayTypeClass::GetRadarColor  this=OverlayTypeClass  sig=csp ====
int __thiscall OverlayTypeClass::GetRadarColor(int *this, int a2, unsigned int a3)
{
  char **v4; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  char v8; // cl
  int PixelData; // ecx
  __int16 v11; // [esp+4h] [ebp-4h]

  v4 = (char **)(*(int (__thiscall **)(int *))(*this + 156))(this); /*0x5fed06*/
  if ( v4 || (v5 = this->DamageLevels) != 0 && (v4 = (char **)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 156))(v5)) != 0 ) /*0x5fed28*/
  {
    v6 = this->LandType; /*0x5fed2e*/
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
void *__thiscall sub_5FEDE0(int this)
{
  void *result; // eax
  void *EntireFile; // edi
  _DWORD v4[22]; // [esp+4h] [ebp-26Ch] BYREF
  _BYTE v5[12]; // [esp+5Ch] [ebp-214h] BYREF
  int v6; // [esp+68h] [ebp-208h]
  char Buffer[512]; // [esp+70h] [ebp-200h] BYREF

  result = *(void **)(this + 164); /*0x5fede9*/
  if ( !result && *(_BYTE *)(this + 687) ) /*0x5fedf7*/
  {
    Debug::Log(); /*0x5fee0e*/
    if ( *(_BYTE *)(this + 556) ) /*0x5fee13*/
    {
      _makepath( /*0x5fee4f*/
        Buffer,
        0,
        0,
        (const char *)(this + 504),
        (const char *)&off_7E1BC6 + 112 * *((_DWORD *)MEMORY[0xA8B230] + 1174));
    }
    else if ( *(_BYTE *)(this + 567) ) /*0x5fee59*/
    {
      _makepath(Buffer, 0, 0, (const char *)(this + 504), Ext); /*0x5fee78*/
      TheaterObjectTypeClassSpecificID(Buffer, *((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x5fee90*/
    }
    CCFileClass::Construct(v4, Buffer); /*0x5fee9f*/
    EntireFile = CCFileClass::ReadEntireFile(v4); /*0x5feead*/
    *(_DWORD *)(this + 164) = EntireFile; /*0x5feeb1*/
    if ( EntireFile ) /*0x5feeb7*/
      *(_BYTE *)(this + 168) = 1; /*0x5feeb9*/
    v4[0] = &vt_CCFileClass; /*0x5feec4*/
    v6 = 0; /*0x5feecc*/
    Vector::Clear((int)v5); /*0x5feed4*/
    v4[0] = &off_7E1668; /*0x5feedd*/
    BufferIOFileClass::Dtor(v4); /*0x5feee5*/
    return EntireFile; /*0x5feeea*/
  }
  return result; /*0x5feeed*/
}


// ==== 0x005FEF00  OverlayTypeClass::GetTypeIdentifier  this=OverlayTypeClass  sig=csp ====
int OverlayTypeClass::_vt11()
{
  return 21; /*0x5fef05*/
}


// ==== 0x005FEF10  OverlayTypeClass::GetObjectSize  this=OverlayTypeClass  sig=csp ====
int OverlayTypeClass::_vt12()
{
  return 700; /*0x5fef15*/
}


// ==== 0x005FEF20  OverlayTypeClass::GetAuxField  this=OverlayTypeClass  sig=csp ====
int __thiscall OverlayTypeClass::_vt16(_DWORD *this)
{
  return this->LandType; /*0x5fef26*/
}


// ==== 0x005FEF30  OverlayTypeClass::ddtor  this=OverlayTypeClass  sig=csp ====
OverlayTypeClass *__thiscall OverlayTypeClass::ddtor(void **Block, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &OverlayTypeClass::`vftable'; /*0x5fef36*/
  *(Block + 1) = &OverlayTypeClass::`vftable'; /*0x5fef3c*/
  *(Block + 2) = &OverlayTypeClass::`vftable'; /*0x5fef43*/
  *(Block + 3) = &vt_OverlayTypeClass; /*0x5fef4a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x5fef51*/
  v5 = Block; /*0x5fef66*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xA83D80] + 16))(&MEMORY[0xA83D80], &v5); /*0x5fef6a*/
  if ( v3 != -1 && v3 < MEMORY[0xA83D90] && v3 < --MEMORY[0xA83D90] ) /*0x5fef85*/
  {
    do /*0x5fef9d*/
    {
      ++v3; /*0x5fef8d*/
      *(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * v3 - 4] = *(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * v3]; /*0x5fef91*/
    }
    while ( v3 < MEMORY[0xA83D90] ); /*0x5fef9d*/
  }
  ObjectTypeClass::Destruct((int)Block); /*0x5fefa1*/
  if ( (a2 & 1) != 0 ) /*0x5fefab*/
    __3_YAXPAX_Z(Block); /*0x5fefae*/
  return (OverlayTypeClass *)Block; /*0x5fefb8*/
}


// ==== 0x005FEFC0  sub_5FEFC0  this=-  sig=ida-proto ====
void sub_5FEFC0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5fefcc*/
  MEMORY[0xAC17D8] = Math::Sqrt(v0 + v0); /*0x5fefde*/
}


// ==== 0x005FEFF0  sub_5FEFF0  this=-  sig=ida-proto ====
void sub_5FEFF0()
{
  MEMORY[0xAC1828] = MEMORY[0xAC17D8] / 60.0; /*0x5feffc*/
}


// ==== 0x005FF010  sub_5FF010  this=-  sig=ida-proto ====
void sub_5FF010()
{
  MEMORY[0xAC1810] = 1.0 / MEMORY[0xAC1828]; /*0x5ff01c*/
}


// ==== 0x005FF030  sub_5FF030  this=-  sig=ida-proto ====
void sub_5FF030()
{
  MEMORY[0xAC1808] = 0.0174532925199433 * 45.0; /*0x5ff03c*/
}


// ==== 0x005FF050  sub_5FF050  this=-  sig=ida-proto ====
void sub_5FF050()
{
  MEMORY[0xAC17E0] = 0.0174532925199433 * 60.0; /*0x5ff05c*/
}


// ==== 0x005FF070  sub_5FF070  this=-  sig=ida-proto ====
void sub_5FF070()
{
  MEMORY[0xAC1690] = 0.0174532925199433 * 90.0; /*0x5ff07c*/
}


// ==== 0x005FF090  sub_5FF090  this=-  sig=ida-proto ====
__int64 sub_5FF090()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC1690] - MEMORY[0xAC17E0]); /*0x5ff0a2*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC17D8] * 0.5); /*0x5ff0b6*/
  MEMORY[0xAC1830] = result; /*0x5ff0bb*/
  return result; /*0x5ff0c0*/
}


// ==== 0x005FF0D0  sub_5FF0D0  this=-  sig=ida-proto ====
void sub_5FF0D0()
{
  MEMORY[0xAC17E8] = Math::ArcTan((double)MEMORY[0xAC1830] * 0.00390625); /*0x5ff0e7*/
}


// ==== 0x005FF100  sub_5FF100  this=-  sig=ida-proto ====
void sub_5FF100()
{
  MEMORY[0xAC1800] = Math::ArcTan((double)(2 * MEMORY[0xAC1830]) / MEMORY[0xAC17D8]); /*0x5ff122*/
}


// ==== 0x005FF130  sub_5FF130  this=-  sig=ida-proto ====
__int64 sub_5FF130()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC1830]) + 0.5); /*0x5ff14b*/
  MEMORY[0xAC1824] = result; /*0x5ff150*/
  return result; /*0x5ff156*/
}


// ==== 0x005FF160  sub_5FF160  this=-  sig=ida-proto ====
int sub_5FF160()
{
  MEMORY[0xAC17D0] = 0; /*0x5ff162*/
  MEMORY[0xAC17D2] = 0; /*0x5ff168*/
  return 0; /*0x5ff16e*/
}


// ==== 0x005FF170  sub_5FF170  this=-  sig=ida-proto ====
int sub_5FF170()
{
  MEMORY[0xAC17F0] = 0; /*0x5ff172*/
  MEMORY[0xAC17F4] = 0; /*0x5ff177*/
  MEMORY[0xAC17F8] = 0; /*0x5ff17c*/
  return 0; /*0x5ff181*/
}


// ==== 0x005FF190  sub_5FF190  this=-  sig=ida-proto ====
int sub_5FF190()
{
  MEMORY[0xAC1820] = 0; /*0x5ff195*/
  MEMORY[0xAC1818] = 128; /*0x5ff19f*/
  MEMORY[0xAC181C] = 128; /*0x5ff1a4*/
  return 128; /*0x5ff1a9*/
}


// ==== 0x005FF1B0  sub_5FF1B0  this=-  sig=ida-proto ====
int sub_5FF1B0()
{
  MEMORY[0xAC17C0] = 0; /*0x5ff1b2*/
  MEMORY[0xAC17C4] = 0; /*0x5ff1b7*/
  MEMORY[0xAC17C8] = 0; /*0x5ff1bc*/
  MEMORY[0xAC17CC] = 0; /*0x5ff1c1*/
  return 0; /*0x5ff1c6*/
}


// ==== 0x005FF1D0  sub_5FF1D0  this=-  sig=ida-proto ====
int sub_5FF1D0()
{
  MEMORY[0xAC167C] = 0; /*0x5ff1d7*/
  MEMORY[0xAC1680] = 0; /*0x5ff1dc*/
  MEMORY[0xAC1684] = 1; /*0x5ff1e1*/
  MEMORY[0xAC1685] = 0; /*0x5ff1e8*/
  MEMORY[0xAC1678] = (int)&vt_DynamicVectorClass_SpotLightClass; /*0x5ff1ed*/
  MEMORY[0xAC168C] = 10; /*0x5ff1f7*/
  MEMORY[0xAC1688] = 0; /*0x5ff201*/
  return atexit(sub_5FF210); /*0x5ff20c*/
}


// ==== 0x005FF210  sub_5FF210  this=-  sig=ida-proto ====
void __cdecl sub_5FF210()
{
  MEMORY[0xAC1678] = (int)&vt_VectorClass_SpotLightClass; /*0x5ff218*/
  if ( MEMORY[0xAC167C] && MEMORY[0xAC1685] ) /*0x5ff22c*/
  {
    __3_YAXPAX_Z(MEMORY[0xAC167C]); /*0x5ff22f*/
    MEMORY[0xAC167C] = 0; /*0x5ff237*/
  }
  MEMORY[0xAC1685] = 0; /*0x5ff23d*/
  MEMORY[0xAC1680] = 0; /*0x5ff243*/
}


// ==== 0x005FF250  ObjectClass::RegisterInArray  this=AbstractClass  sig=csp ====
_DWORD *__thiscall ObjectClass::RegisterInArray(_DWORD *this, AbstractClass *aP1, int a3, int a4, int a5)
{
  int v6; // eax

  *this = aP1; /*0x5ff25d*/
  this->vtable2 = a3; /*0x5ff263*/
  this->vtable4 = 0; /*0x5ff268*/
  this->abstractFlags = 0; /*0x5ff26b*/
  this->vtable3 = a4; /*0x5ff26e*/
  this->uniqueId = a5; /*0x5ff275*/
  if ( (int)*(&g_MatrixTransformState + 2590) < (int)*(&g_MatrixTransformState + 2588) /*0x5ff2aa*/
    || (*((_BYTE *)&g_MatrixTransformState + 10357) || !*(&g_MatrixTransformState + 2588))
    && (int)*(&g_MatrixTransformState + 2591) > 0
    && ((unsigned __int8 (__thiscall *)(CoordStruct **, char *, _DWORD))(*(&g_MatrixTransformState + 2586))->Z)(
         &g_MatrixTransformState + 2586,
         (char *)*(&g_MatrixTransformState + 2591) + (_DWORD)*(&g_MatrixTransformState + 2588),
         0) )
  {
    v6 = (int)*(&g_MatrixTransformState + 2590); /*0x5ff2b7*/
    *(&g_MatrixTransformState + 2590) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 2590) + 1); /*0x5ff2ba*/
    *(&(*(&g_MatrixTransformState + 2587))->X + v6) = (int)this; /*0x5ff2c6*/
  }
  return this; /*0x5ff2cb*/
}


// ==== 0x005FF2D0  BuildingLightQueue::RemoveEntry  this=AbstractTypeClass  sig=csp ====
int __thiscall BuildingLightQueue::RemoveEntry(void *this)
{
  int result; // eax
  void *v2; // [esp+0h] [ebp-4h] BYREF

  v2 = this; /*0x5ff2db*/
  result = (*(int (__thiscall **)(int *, void **))(MEMORY[0xAC1678] + 16))(&MEMORY[0xAC1678], &v2); /*0x5ff2e5*/
  if ( result != -1 && result < MEMORY[0xAC1688] && result < --MEMORY[0xAC1688] ) /*0x5ff300*/
  {
    do /*0x5ff318*/
    {
      ++result; /*0x5ff308*/
      *((_DWORD *)MEMORY[0xAC167C] + result - 1) = *((_DWORD *)MEMORY[0xAC167C] + result); /*0x5ff30c*/
    }
    while ( result < MEMORY[0xAC1688] ); /*0x5ff318*/
  }
  return result; /*0x5ff31b*/
}


// ==== 0x005FF390  ObjectClass::ProcessHarvesterLogic  this=ObjectClass  sig=csp ====
void sub_5FF390()
{
  int i; // edi
  _DWORD *v1; // esi
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // [esp+4h] [ebp-4h] BYREF

  for ( i = MEMORY[0xAC1688] - 1; i >= 0; --i ) /*0x5ff39c*/
  {
    v1 = (_DWORD *)*((_DWORD *)MEMORY[0xAC167C] + i); /*0x5ff3a5*/
    v2 = v1[3] + 8; /*0x5ff3ae*/
    v1[3] = v2; /*0x5ff3b0*/
    if ( v2 >= 80 && v1 ) /*0x5ff3ba*/
    {
      v4 = v1; /*0x5ff3cb*/
      v3 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0xAC1678] + 16))(&MEMORY[0xAC1678], &v4); /*0x5ff3cf*/
      if ( v3 != -1 && v3 < MEMORY[0xAC1688] && v3 < --MEMORY[0xAC1688] ) /*0x5ff3ea*/
      {
        do /*0x5ff402*/
        {
          ++v3; /*0x5ff3f2*/
          *((_DWORD *)MEMORY[0xAC167C] + v3 - 1) = *((_DWORD *)MEMORY[0xAC167C] + v3); /*0x5ff3f6*/
        }
        while ( v3 < MEMORY[0xAC1688] ); /*0x5ff402*/
      }
      __3_YAXPAX_Z(v1); /*0x5ff405*/
    }
  }
}


// ==== 0x005FF420  ObjectClass::GenerateRangeRingTextures  this=ObjectClass  sig=csp ====
char *GenerateRangeRingTextures()
{
  int v0; // ebx
  int *v1; // ebp
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // esi
  int v5; // edi
  int v6; // eax
  int j; // esi
  int v8; // ecx
  _DWORD *v9; // edi
  int v10; // ebp
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  int v13; // eax
  int k; // esi
  int v15; // ecx
  char *result; // eax
  unsigned __int16 v17; // cx
  int v18; // [esp+2Eh] [ebp-54h] BYREF
  int i; // [esp+32h] [ebp-50h]
  int v20; // [esp+36h] [ebp-4Ch]
  int v21; // [esp+3Eh] [ebp-44h] BYREF
  int v22; // [esp+42h] [ebp-40h] BYREF
  int v23; // [esp+46h] [ebp-3Ch]
  int v24; // [esp+4Ah] [ebp-38h]
  int v25; // [esp+4Eh] [ebp-34h]
  int v26; // [esp+52h] [ebp-30h] BYREF
  int v27; // [esp+56h] [ebp-2Ch]
  int v28; // [esp+5Ah] [ebp-28h]
  int v29; // [esp+5Eh] [ebp-24h]
  int v30[3]; // [esp+62h] [ebp-20h] BYREF
  int v31; // [esp+6Eh] [ebp-14h]
  int v32; // [esp+72h] [ebp-10h]
  _DWORD v33[3]; // [esp+76h] [ebp-Ch] BYREF

  v0 = 0; /*0x5ff429*/
  if ( !MEMORY[0xAC1834] ) /*0x5ff430*/
  {
    v1 = MEMORY[0xAC1698]; /*0x5ff43b*/
    for ( i = 1; i < 129; i += 2 ) /*0x5ff440*/
    {
      if ( !*v1 ) /*0x5ff444*/
      {
        v2 = __2_YAPAXI_Z(0x20u); /*0x5ff44b*/
        v3 = v2; /*0x5ff450*/
        if ( v2 ) /*0x5ff457*/
        {
          Surface::Construct(v2, 256, 128); /*0x5ff465*/
          v3[3] = 0; /*0x5ff46d*/
          *v3 = &XSurface_Vtable; /*0x5ff476*/
          v3[4] = 1; /*0x5ff47c*/
          Buffer::Init(v3 + 5, 0, 0x8000); /*0x5ff47f*/
          *v3 = &BSurface_Vtable; /*0x5ff484*/
        }
        else
        {
          v3 = 0; /*0x5ff48c*/
        }
        *v1 = (int)v3; /*0x5ff48e*/
      }
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)*v1 + 24))(*v1, 0); /*0x5ff497*/
      Surface::Construct(v30, 256, 256); /*0x5ff4a8*/
      v31 = 0; /*0x5ff4b1*/
      v30[0] = (int)&XSurface_Vtable; /*0x5ff4bb*/
      v32 = 1; /*0x5ff4c3*/
      Buffer::Init(v33, 0, 0x10000); /*0x5ff4c7*/
      v30[0] = (int)&BSurface_Vtable; /*0x5ff4d0*/
      XSurface::Fill(v30, 0); /*0x5ff4d9*/
      v4 = i; /*0x5ff4de*/
      if ( i > 0 ) /*0x5ff4e6*/
      {
        v5 = 12; /*0x5ff4e8*/
        do /*0x5ff52d*/
        {
          v6 = v5; /*0x5ff4f3*/
          if ( v5 > 255 ) /*0x5ff4f5*/
            v6 = 255; /*0x5ff4f7*/
          Draw::Ellipse(v30, 128, 128, v4, 0, 0, 255, 255, v6); /*0x5ff520*/
          v4 -= 2; /*0x5ff525*/
          v5 += 4; /*0x5ff528*/
        }
        while ( v4 > 0 ); /*0x5ff52d*/
      }
      for ( j = 0; j < 128; ++j ) /*0x5ff534*/
      {
        v8 = *v1; /*0x5ff536*/
        v23 = 2 * j; /*0x5ff53c*/
        v22 = 0; /*0x5ff551*/
        v24 = 255; /*0x5ff555*/
        v25 = 1; /*0x5ff559*/
        v26 = 0; /*0x5ff55d*/
        v27 = j; /*0x5ff561*/
        v28 = 255; /*0x5ff565*/
        v29 = 1; /*0x5ff569*/
        (*(void (__thiscall **)(int, int *, int *, int *, _DWORD, int))(*(_DWORD *)v8 + 8))(v8, &v26, v30, &v22, 0, 1); /*0x5ff574*/
      }
      Vector::Clear((int)v33); /*0x5ff584*/
      ++v1; /*0x5ff58d*/
      v30[0] = (int)&Surface_Vtable; /*0x5ff593*/
    }
    i = 0; /*0x5ff5aa*/
    v9 = &MEMORY[0xAC1798]; /*0x5ff5ae*/
    v10 = 128; /*0x5ff5b3*/
    do /*0x5ff721*/
    {
      if ( !*v9 ) /*0x5ff5b8*/
      {
        v11 = __2_YAPAXI_Z(0x20u); /*0x5ff5be*/
        v12 = v11; /*0x5ff5c3*/
        if ( v11 ) /*0x5ff5ca*/
        {
          Surface::Construct(v11, 256, 128); /*0x5ff5d8*/
          v12[3] = 0; /*0x5ff5e0*/
          *v12 = &XSurface_Vtable; /*0x5ff5e9*/
          v12[4] = 1; /*0x5ff5ef*/
          Buffer::Init(v12 + 5, 0, 0x8000); /*0x5ff5f6*/
          *v12 = &BSurface_Vtable; /*0x5ff5fb*/
        }
        else
        {
          v12 = 0; /*0x5ff603*/
        }
        *v9 = v12; /*0x5ff605*/
      }
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*v9 + 24))(*v9, 0); /*0x5ff60c*/
      Surface::Construct(v30, 256, 256); /*0x5ff61d*/
      v31 = 0; /*0x5ff626*/
      v30[0] = (int)&XSurface_Vtable; /*0x5ff630*/
      v32 = 1; /*0x5ff638*/
      Buffer::Init(v33, 0, 0x10000); /*0x5ff640*/
      v30[0] = (int)&BSurface_Vtable; /*0x5ff649*/
      XSurface::Fill(v30, 0); /*0x5ff652*/
      v20 = 60 * MEMORY[0x8871E0]->BuildWeapons[0]; /*0x5ff684*/
      v13 = Math::RoundToInt((double)v20 * -0.002790178571428571); /*0x5ff692*/
      Draw::Ellipse(v30, 128, 128, i - v13, 0, 0, 255, 255, v10); /*0x5ff6a9*/
      for ( k = 0; k < 128; ++k ) /*0x5ff6ae*/
      {
        v29 = 1; /*0x5ff6ba*/
        v25 = 1; /*0x5ff6be*/
        v28 = 255; /*0x5ff6c9*/
        v24 = 255; /*0x5ff6cd*/
        v15 = *v9; /*0x5ff6d1*/
        v26 = 0; /*0x5ff6db*/
        v27 = 2 * k; /*0x5ff6df*/
        v22 = 0; /*0x5ff6e3*/
        v23 = k; /*0x5ff6e7*/
        (*(void (__thiscall **)(int, int *, int *, int *, _DWORD, int))(*(_DWORD *)v15 + 8))(v15, &v22, v30, &v26, 0, 1); /*0x5ff6f2*/
      }
      Vector::Clear((int)v33); /*0x5ff702*/
      v10 -= 6; /*0x5ff70b*/
      ++v9; /*0x5ff70f*/
      v30[0] = (int)&Surface_Vtable; /*0x5ff715*/
      ++i; /*0x5ff71d*/
    }
    while ( v10 > 68 ); /*0x5ff721*/
    MEMORY[0xAC1834] = 1; /*0x5ff727*/
  }
  MEMORY[0x833588] = DDraw::GetStatus(); /*0x5ff73d*/
  v21 = 5; /*0x5ff742*/
  HIBYTE(v18) = 0; /*0x5ff74a*/
  result = GetVersionString(&v21, (_BYTE *)&v18 + 3, 0, 0); /*0x5ff74e*/
  if ( HIBYTE(v18) && !MEMORY[0xAC1838] ) /*0x5ff763*/
  {
    MEMORY[0xAC1838] = __2_YAPAXI_Z(0x40000u); /*0x5ff776*/
    do /*0x5ff7ed*/
    {
      BYTE1(v20) = (unsigned __int8)((unsigned __int16)v0 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x5ff7aa*/
      LOBYTE(v17) = 0; /*0x5ff7bb*/
      HIBYTE(v17) = (unsigned __int8)((unsigned __int16)v0 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x5ff7bd*/
      BYTE2(v20) = (unsigned __int8)((unsigned __int16)v0 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x5ff7bf*/
      result = (char *)BYTE2(v20); /*0x5ff7dc*/
      *((_DWORD *)MEMORY[0xAC1838] + v0++) = BYTE2(v20) | ((BYTE1(v20) | v17) << 8); /*0x5ff7e3*/
    }
    while ( v0 < 0x10000 ); /*0x5ff7ed*/
  }
  return result; /*0x5ff7ef*/
}


// ==== 0x005FF800  ObjectClass::WinMainSetup_Setup_5FF800  this=ObjectClass  sig=csp ====
void sub_5FF800()
{
  int *v0; // esi

  if ( MEMORY[0xAC1838] ) /*0x5ff807*/
  {
    __3_YAXPAX_Z(MEMORY[0xAC1838]); /*0x5ff80a*/
    MEMORY[0xAC1838] = 0; /*0x5ff812*/
  }
  v0 = MEMORY[0xAC1698]; /*0x5ff81d*/
  do /*0x5ff83d*/
  {
    if ( *v0 ) /*0x5ff822*/
      (**(void (__thiscall ***)(int, int))*v0)(*v0, 1); /*0x5ff82c*/
    *v0++ = 0; /*0x5ff82e*/
  }
  while ( (int)v0 < (int)&MEMORY[0xAC17C0] ); /*0x5ff83d*/
}


// ==== 0x005FF850  BuildingLight::CalculateShading  this=AbstractTypeClass  sig=csp ====
char __thiscall BuildingLight::CalculateShading(IUnknown *this)
{
  int ebx1; // ebx
  ObjectClass *v3; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // esi
  unsigned __int16 *v9; // edi
  int v10; // eax
  int v11; // ecx
  bool v12; // zf
  unsigned __int16 v13; // si
  int v14; // ecx
  unsigned __int16 v15; // ax
  int v16; // ebp
  int v17; // ecx
  int v18; // eax
  int v19; // esi
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  unsigned __int16 v23; // si
  int v24; // edx
  int v25; // eax
  int v26; // esi
  int v27; // ecx
  int v28; // edx
  int _0; // [esp+0h] [ebp-94h]
  char a6; // [esp+13h] [ebp-81h] BYREF
  ObjectClass *v30; // [esp+14h] [ebp-80h]
  int v33; // [esp+18h] [ebp-7Ch]
  ObjectClass *v34; // [esp+1Ch] [ebp-78h]
  MouseClass *v35; // [esp+20h] [ebp-74h]
  int v36; // [esp+24h] [ebp-70h]
  int i; // [esp+28h] [ebp-6Ch]
  int j; // [esp+2Ch] [ebp-68h]
  Tactical *v37; // [esp+30h] [ebp-64h]
  int v40; // [esp+34h] [ebp-60h]
  int a7; // [esp+38h] [ebp-5Ch] BYREF
  int a8; // [esp+3Ch] [ebp-58h] BYREF
  IUnknown *v43; // [esp+40h] [ebp-54h]
  unsigned __int8 v44; // [esp+44h] [ebp-50h]
  unsigned __int8 v45; // [esp+45h] [ebp-4Fh]
  unsigned __int8 v46; // [esp+46h] [ebp-4Eh]
  _DWORD v47[2]; // [esp+4Ch] [ebp-48h] BYREF
  _DWORD v48[2]; // [esp+54h] [ebp-40h] BYREF
  int v49; // [esp+5Ch] [ebp-38h]
  int v50; // [esp+60h] [ebp-34h]
  int a4[4]; // [esp+64h] [ebp-30h] BYREF
  _DWORD v52[4]; // [esp+74h] [ebp-20h] BYREF
  int a1[4]; // [esp+84h] [ebp-10h] BYREF

  v43 = this; /*0x5ff85c*/
  ebx1 = *(_DWORD *)&this->__pad_10[4] & 0xF; /*0x5ff863*/
  if ( (*(_DWORD *)&this->__pad_10[4] & 0xE) != 0 /*0x5ff879*/
    || (v3 = PingPongBuffer::GetWriteOffset(), dword_ABCD44 >= (CampaignScore *)v3) )
  {
    LOBYTE(v3) = Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], this, (IUnknown *)v47); /*0x5ff88b*/
    if ( (_BYTE)v3 ) /*0x5ff892*/
    {
      if ( (**(_DWORD **)&HouseClass_Player.__pad_5568[8060] & 0x1000) == 0 /*0x5ff8b2*/
        || (LOBYTE(v3) = Game::Stub3(this), !(_BYTE)v3) )
      {
        v52[0] = v47[0] - 128; /*0x5ff8c9*/
        a1[0] = *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x5ff8d9*/
        a1[1] = *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x5ff8e6*/
        v5 = this->field_C; /*0x5ff8ed*/
        a1[3] = *(_DWORD *)&stru_87C374.__pad_579C[21660]; /*0x5ff8f0*/
        v6 = stru_830620.__pad_14B0[v5 + 6844]; /*0x5ff8ff*/
        v52[1] = v47[1] - 64; /*0x5ff906*/
        v37 = *(Tactical **)&stru_87C374.__pad_579C[22532]; /*0x5ff912*/
        v52[2] = 255; /*0x5ff916*/
        v52[3] = 127; /*0x5ff91e*/
        a1[2] = *(_DWORD *)&stru_87C374.__pad_579C[21656]; /*0x5ff925*/
        if ( v6 < 64 ) /*0x5ff92c*/
          v6 = v6 * *(_DWORD *)this->__pad_10 / 64; /*0x5ff93d*/
        v7 = **(_DWORD **)&stru_87C374.__pad_579C[22532]; /*0x5ff946*/
        v40 = (int)*(&g_MatrixTransformState + v6 + 218); /*0x5ff94a*/
        v8 = (*(int (__thiscall **)(_DWORD))(v7 + 116))(*(_DWORD *)&stru_87C374.__pad_579C[22532]); /*0x5ff951*/
        v48[0] = 0; /*0x5ff95a*/
        v48[1] = 0; /*0x5ff95e*/
        a4[0] = 0; /*0x5ff962*/
        a4[1] = 0; /*0x5ff966*/
        v49 = 255; /*0x5ff96a*/
        a4[2] = 255; /*0x5ff96e*/
        v36 = v8; /*0x5ff9a3*/
        a6 = 0; /*0x5ff9a7*/
        v50 = 127; /*0x5ff9ac*/
        a4[3] = 127; /*0x5ff9b0*/
        LOBYTE(v3) = CalcSurfaceBlitRects((int)v37, a1, (IUnknown *)v52, v40, a4, (IUnknown *)v48, &a6, &a7, &a8); /*0x5ff9b7*/
        if ( (_BYTE)v3 ) /*0x5ff9be*/
        {
          v9 = (unsigned __int16 *)a7; /*0x5ff9c4*/
          v33 = a7; /*0x5ff9d6*/
          v34 = (ObjectClass *)a8; /*0x5ff9da*/
          v30 = (ObjectClass *)a8; /*0x5ff9de*/
          if ( ebx1 ) /*0x5ff9e2*/
          {
LABEL_23:
            v10 = *(_DWORD *)&this->__pad_10[4]; /*0x5ffb1c*/
            if ( (v10 & 1) != 0 ) /*0x5ffb21*/
            {
              j = 0; /*0x5ffb2b*/
              if ( v50 > 0 ) /*0x5ffb31*/
              {
                v11 = v49; /*0x5ffb37*/
                do /*0x5ffc65*/
                {
                  for ( i = 0; i < v11; ++i ) /*0x5ffb41*/
                  {
                    v12 = v30->__pad_0[0] == 0; /*0x5ffb4e*/
                    LOBYTE(v35) = v30->__pad_0[0]; /*0x5ffb50*/
                    v30 = (ObjectClass *)((char *)v30 + 1); /*0x5ffb54*/
                    if ( !v12 ) /*0x5ffb58*/
                    {
                      v13 = *v9; /*0x5ffb62*/
                      v44 = (unsigned __int8)(*v9 >> stru_89E138.__pad_14B0[6120]) << stru_89E138.__pad_14B0[6124]; /*0x5ffb91*/
                      v45 = (unsigned __int8)(v13 >> stru_89E138.__pad_14B0[6136]) << stru_89E138.__pad_14B0[6140]; /*0x5ffba9*/
                      v46 = (unsigned __int8)(v13 >> stru_89E138.__pad_14B0[6128]) << stru_89E138.__pad_14B0[6132]; /*0x5ffbc2*/
                      *v9 = (((256 - (unsigned __int8)v35) * v44) >> 8 >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120]) /*0x5ffc1a*/
                          | (((256 - (unsigned __int8)v35) * v46) >> 8 >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128])
                          | (((256 - (unsigned __int8)v35) * v45) >> 8 >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136]);
                      v11 = v49; /*0x5ffc1d*/
                      v8 = v36; /*0x5ffc21*/
                    }
                    ++v9; /*0x5ffc29*/
                  }
                  v34 = (ObjectClass *)((char *)v34 + 256); /*0x5ffc4c*/
                  v30 = v34; /*0x5ffc50*/
                  v9 = (unsigned __int16 *)(v8 + v33); /*0x5ffc58*/
                  v33 += v8; /*0x5ffc5b*/
                  ++j; /*0x5ffc61*/
                }
                while ( j < v50 ); /*0x5ffc65*/
              }
            }
            else if ( (v10 & 0xE) != 0 ) /*0x5ffc72*/
            {
              i = 0; /*0x5ffc7c*/
              if ( v50 > 0 ) /*0x5ffc82*/
              {
                v14 = v49; /*0x5ffc88*/
                do /*0x5ffdf0*/
                {
                  for ( j = 0; j < v14; ++j ) /*0x5ffc92*/
                  {
                    v12 = v30->__pad_0[0] == 0; /*0x5ffc9f*/
                    LOBYTE(v35) = v30->__pad_0[0]; /*0x5ffca1*/
                    v30 = (ObjectClass *)((char *)v30 + 1); /*0x5ffca5*/
                    if ( !v12 ) /*0x5ffca9*/
                    {
                      v15 = *v9; /*0x5ffcaf*/
                      v16 = (unsigned __int8)v35 + 256; /*0x5ffcd0*/
                      v44 = (unsigned __int8)(*v9 >> stru_89E138.__pad_14B0[6120]) << stru_89E138.__pad_14B0[6124]; /*0x5ffcdf*/
                      v45 = (unsigned __int8)(v15 >> stru_89E138.__pad_14B0[6136]) << stru_89E138.__pad_14B0[6140]; /*0x5ffd00*/
                      v17 = *(_DWORD *)&v43->__pad_10[4]; /*0x5ffd0a*/
                      v46 = (unsigned __int8)(v15 >> stru_89E138.__pad_14B0[6128]) << stru_89E138.__pad_14B0[6132]; /*0x5ffd0d*/
                      v18 = v44; /*0x5ffd1d*/
                      v19 = v45; /*0x5ffd22*/
                      v20 = v46; /*0x5ffd28*/
                      if ( (v17 & 2) == 0 ) /*0x5ffd31*/
                      {
                        v18 = (v16 * v44) >> 8; /*0x5ffd36*/
                        if ( v18 > 255 ) /*0x5ffd3e*/
                          v18 = 255; /*0x5ffd40*/
                      }
                      if ( (v17 & 4) == 0 ) /*0x5ffd48*/
                      {
                        v19 = (v16 * v45) >> 8; /*0x5ffd4d*/
                        if ( v19 > 255 ) /*0x5ffd56*/
                          v19 = 255; /*0x5ffd58*/
                      }
                      if ( (v17 & 8) == 0 ) /*0x5ffd60*/
                      {
                        v20 = (v16 * v46) >> 8; /*0x5ffd65*/
                        if ( v20 > 255 ) /*0x5ffd6e*/
                          v20 = 255; /*0x5ffd70*/
                      }
                      v21 = (v19 >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136]) /*0x5ffd9f*/
                          | (v18 >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120]);
                      v8 = v36; /*0x5ffda1*/
                      *v9 = (v20 >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]) | v21; /*0x5ffda9*/
                      v14 = v49; /*0x5ffdac*/
                    }
                    ++v9; /*0x5ffdb4*/
                  }
                  v34 = (ObjectClass *)((char *)v34 + 256); /*0x5ffdd7*/
                  v30 = v34; /*0x5ffddb*/
                  v9 = (unsigned __int16 *)(v8 + v33); /*0x5ffde3*/
                  v33 += v8; /*0x5ffde6*/
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
                v22 = v49; /*0x5ffe0b*/
                do /*0x5fff5f*/
                {
                  for ( j = 0; j < v22; ++j ) /*0x5ffe15*/
                  {
                    v12 = v30->__pad_0[0] == 0; /*0x5ffe22*/
                    LOBYTE(v35) = v30->__pad_0[0]; /*0x5ffe24*/
                    v30 = (ObjectClass *)((char *)v30 + 1); /*0x5ffe28*/
                    if ( !v12 ) /*0x5ffe2c*/
                    {
                      v23 = *v9; /*0x5ffe32*/
                      v24 = (unsigned __int8)v35 + 256; /*0x5ffe55*/
                      v44 = (unsigned __int8)(*v9 >> stru_89E138.__pad_14B0[6120]) << stru_89E138.__pad_14B0[6124]; /*0x5ffe64*/
                      v45 = (unsigned __int8)(v23 >> stru_89E138.__pad_14B0[6136]) << stru_89E138.__pad_14B0[6140]; /*0x5ffe7c*/
                      v46 = (unsigned __int8)(v23 >> stru_89E138.__pad_14B0[6128]) << stru_89E138.__pad_14B0[6132]; /*0x5ffe8d*/
                      v25 = (v24 * v46) >> 8; /*0x5ffeb7*/
                      v26 = (v24 * v44) >> 8; /*0x5ffeba*/
                      v27 = (v24 * v45) >> 8; /*0x5ffebd*/
                      if ( v25 > 255 ) /*0x5ffec5*/
                        v25 = 255; /*0x5ffec7*/
                      v28 = 255; /*0x5ffed2*/
                      if ( v27 <= 255 ) /*0x5ffed7*/
                        v28 = v27; /*0x5ffed9*/
                      if ( v26 > 255 ) /*0x5ffee1*/
                        v26 = 255; /*0x5ffee3*/
                      *v9 = (v25 >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]) /*0x5fff14*/
                          | (v28 >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
                          | (v26 >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120]);
                      v22 = v49; /*0x5fff17*/
                      v8 = v36; /*0x5fff1b*/
                    }
                    ++v9; /*0x5fff23*/
                  }
                  v34 = (ObjectClass *)((char *)v34 + 256); /*0x5fff46*/
                  v30 = v34; /*0x5fff4a*/
                  v9 = (unsigned __int16 *)(v8 + v33); /*0x5fff52*/
                  v33 += v8; /*0x5fff55*/
                  ++i; /*0x5fff5b*/
                }
                while ( i < v50 ); /*0x5fff5f*/
              }
            }
          }
          else
          {
            switch ( *(_DWORD *)&stru_830620.__pad_14B0[6840] ) /*0x5ff9f1*/
            {
              case 0: /*0x5ff9f1*/
                if ( *(&g_MatrixTransformState + 2698) ) /*0x5ffa00*/
                  Object_Calc_7DF3C2( /*0x5ffa15*/
                    (MouseClass *)a8,
                    (_BYTE *)a7,
                    (_WORD *)0x100,
                    v8,
                    v49,
                    v50,
                    (int)*(&g_MatrixTransformState + 2698),
                    _0);
                else
                  Object_Calc_7DF191((MouseClass *)a8, (_WORD *)a7, 256, v8, v49, v50); /*0x5ffa34*/
                break; /*0x5ffa1d*/
              case 1: /*0x5ff9f1*/
                if ( *(&g_MatrixTransformState + 2698) ) /*0x5ffa49*/
                  Object_Calc_7DF500( /*0x5ffa5e*/
                    (MouseClass *)a8,
                    (_BYTE *)a7,
                    (_WORD *)0x100,
                    v8,
                    v49,
                    v50,
                    (int)*(&g_MatrixTransformState + 2698),
                    _0);
                else
                  Object_Calc_7DF0B4((MouseClass *)a8, (_WORD *)a7, 256, v8, v49, v50); /*0x5ffa7d*/
                break; /*0x5ffa66*/
              case 2: /*0x5ff9f1*/
                if ( *(&g_MatrixTransformState + 2698) ) /*0x5ffa92*/
                  Object_Calc_7DF280( /*0x5ffaa7*/
                    (MouseClass *)a8,
                    (_BYTE *)a7,
                    (_WORD *)0x100,
                    v8,
                    v49,
                    v50,
                    (int)*(&g_MatrixTransformState + 2698),
                    _0);
                else
                  Object_Calc((MouseClass *)a8, (_WORD *)a7, 256, v8, v49, v50); /*0x5ffac6*/
                break; /*0x5ffaaf*/
              case 3: /*0x5ff9f1*/
                if ( *(&g_MatrixTransformState + 2698) ) /*0x5ffadb*/
                  Object_Calc_7DF640( /*0x5ffaf0*/
                    (MouseClass *)a8,
                    (_BYTE *)a7,
                    (_WORD *)0x100,
                    v8,
                    v49,
                    v50,
                    (int)*(&g_MatrixTransformState + 2698),
                    _0);
                else
                  Object_Calc_7DEFD7((MouseClass *)a8, (_WORD *)a7, 256, v8, v49, v50); /*0x5ffb0f*/
                break; /*0x5ffaf8*/
              default:
                goto LABEL_23;
            }
          }
          (*(void (__thiscall **)(Tactical *))(*(_DWORD *)v37->__pad_0 + 96))(v37); /*0x5fff6b*/
          LOBYTE(v3) = (*(char (__thiscall **)(int))(*(_DWORD *)v40 + 96))(v40); /*0x5fff74*/
        }
      }
    }
  }
  return (char)v3; /*0x5fff77*/
}


// ==== 0x005FFFA0  ObjectClass::Render_Render_5FFFA0  this=ObjectClass  sig=csp ====
char sub_5FFFA0()
{
  char result; // al
  int i; // esi

  result = MEMORY[0xAC1688]; /*0x5fffa0*/
  for ( i = MEMORY[0xAC1688] - 1; i >= 0; --i ) /*0x5fffab*/
    result = BuildingLight::CalculateShading(*((_DWORD **)MEMORY[0xAC167C] + i)); /*0x5fffb6*/
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
unsigned int __thiscall VectorClass_ptr_SpotLightClass::sub_5FFFF0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5ffff0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x600005*/
  else
    return 0; /*0x5ffff7*/
}

