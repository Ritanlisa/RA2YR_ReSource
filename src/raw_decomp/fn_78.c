// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00780110  ObjectClass::ResetSystemWOL  this=ObjectClass  sig=csp ====
int ResetSystemWOL(ObjectClass *this)
{
  _DWORD *AccountInfoWOL; // eax
  int v2; // esi
  unsigned int v3; // eax
  unsigned int v4; // ebp
  ObjectClass *v5; // esi
  ObjectClass *v6; // edi
  int i; // esi
  unsigned int HashMap_field_0x08; // eax
  unsigned int v9; // ebp
  ObjectClass *v10; // esi
  ObjectClass *v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // edi
  ObjectClass *v14; // esi
  ObjectClass *v15; // ecx
  unsigned int v16; // eax
  unsigned int j; // edi
  ObjectClass *v18; // esi
  ObjectClass *v19; // ecx
  unsigned int occupant; // eax
  unsigned int k; // edi
  CChatEventSink *CChatEventSink_field_0x0C; // esi
  CChatEventSink *v23; // ecx
  int result; // eax
  _DWORD v25[2]; // [esp+10h] [ebp-8h] BYREF

  AccountInfoWOL = LoadAccountInfoWOL((ObjectClass *)v25); /*0x78011b*/
  ComPtr::Set(&stru_B75E48, AccountInfoWOL[1]); /*0x780129*/
  v25[0] = &rc_ptr<PlayerProfile>::`vftable'; /*0x780132*/
  ComPtr::Release((ComPtr *)v25); /*0x78013a*/
  v2 = 0; /*0x780146*/
  *(_DWORD *)&g_WindowManager.__pad_EC[636] = 0; /*0x78014a*/
  stru_B76AC4.? = 0; /*0x780150*/
  for ( g_WOL_UserList.owningHouseIndex = 0; v2 < g_WebBrowserConfig.?; ++v2 ) /*0x78015c*/
    DeleteAndZero((ObjectClass *)(g_WebBrowserConfig.? + 4 * v2)); /*0x780167*/
  v3 = stru_B765EC.location[0]; /*0x780176*/
  v4 = 0; /*0x78017b*/
  for ( g_WebBrowserConfig.? = 0; v4 < stru_B765EC.location[0]; v3 = stru_B765EC.location[0] ) /*0x780185*/
  {
    v5 = *(ObjectClass **)(stru_B765EC.lastLayer + 4 * v4); /*0x78018d*/
    while ( v5 ) /*0x780192*/
    {
      v6 = v5; /*0x780194*/
      v5 = (ObjectClass *)v5->?; /*0x780196*/
      DeleteAndZero(v6); /*0x78019f*/
      __3_YAXPAX_Z(v6); /*0x7801a5*/
    }
    ++v4; /*0x7801b6*/
    *(_DWORD *)(stru_B765EC.lastLayer + 4 * v4 - 4) = 0; /*0x7801b7*/
  }
  *(_DWORD *)&stru_B765EC.isInLogic = 0; /*0x7801ca*/
  if ( v3 > dword_B766B0 ) /*0x7801d2*/
  {
    do /*0x7801f3*/
    {
      if ( LOBYTE(stru_B765EC.lineTrailer) ) /*0x7801da*/
        break; /*0x7801da*/
      HashMap::Shrink((HashMap *)&stru_B765EC.lastLayer); /*0x7801e1*/
    }
    while ( stru_B765EC.location[0] > (unsigned int)dword_B766B0 ); /*0x7801f3*/
  }
  for ( i = 0; i < (int)stru_B765EC.?; ++i ) /*0x7801fe*/
    DeleteAndZero((ObjectClass *)(stru_B765EC.? + 4 * i)); /*0x780209*/
  HashMap_field_0x08 = g_WOL_ConnectionPool.HashMap_field_0x08; /*0x780218*/
  v9 = 0; /*0x78021d*/
  for ( stru_B765EC.? = 0; /*0x780227*/
        v9 < g_WOL_ConnectionPool.HashMap_field_0x08;
        HashMap_field_0x08 = g_WOL_ConnectionPool.HashMap_field_0x08 )
  {
    v10 = *(ObjectClass **)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * v9); /*0x78022e*/
    while ( v10 ) /*0x780233*/
    {
      v11 = v10; /*0x780235*/
      v10 = (ObjectClass *)v10->?; /*0x780237*/
      DeleteAndZero(v11); /*0x780240*/
      __3_YAXPAX_Z(v11); /*0x780246*/
    }
    ++v9; /*0x780258*/
    *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * v9 - 4) = 0; /*0x780259*/
  }
  g_WOL_ConnectionPool.HashMap_field_0x04 = 0; /*0x78026c*/
  if ( HashMap_field_0x08 > dword_B76560 ) /*0x780274*/
  {
    do /*0x780295*/
    {
      if ( byte_B76544 ) /*0x78027c*/
        break; /*0x78027c*/
      HashMap::Shrink(&g_WOL_ConnectionPool); /*0x780283*/
    }
    while ( g_WOL_ConnectionPool.HashMap_field_0x08 > (unsigned int)dword_B76560 ); /*0x780295*/
  }
  dword_B7646C = time(0) + 86400; /*0x7802a5*/
  v12 = g_WOL_ListParser.HashMap_field_0x08; /*0x7802aa*/
  v13 = 0; /*0x7802af*/
  dword_B7617C = 0; /*0x7802b3*/
  for ( dword_B76180 = 0; v13 < g_WOL_ListParser.HashMap_field_0x08; v12 = g_WOL_ListParser.HashMap_field_0x08 ) /*0x7802bf*/
  {
    v14 = *(ObjectClass **)(*(_DWORD *)g_WOL_ListParser.__pad_0 + 4 * v13); /*0x7802c6*/
    while ( v14 ) /*0x7802cb*/
    {
      v15 = v14; /*0x7802cd*/
      v14 = (ObjectClass *)v14->estimatedHealth; /*0x7802cf*/
      ResetSystemWOL_Reset(v15, 1); /*0x7802d8*/
    }
    ++v13; /*0x7802e7*/
    *(_DWORD *)(*(_DWORD *)g_WOL_ListParser.__pad_0 + 4 * v13 - 4) = 0; /*0x7802e8*/
  }
  g_WOL_ListParser.HashMap_field_0x04 = 0; /*0x7802fb*/
  if ( v12 > dword_B768F0 ) /*0x780303*/
  {
    do /*0x780324*/
    {
      if ( byte_B768D4 ) /*0x78030b*/
        break; /*0x78030b*/
      HashMap::Shrink2(&g_WOL_ListParser); /*0x780312*/
    }
    while ( g_WOL_ListParser.HashMap_field_0x08 > (unsigned int)dword_B768F0 ); /*0x780324*/
  }
  v16 = *(_DWORD *)&g_WindowManager.__pad_48[16]; /*0x780326*/
  for ( j = 0; j < *(_DWORD *)&g_WindowManager.__pad_48[16]; v16 = *(_DWORD *)&g_WindowManager.__pad_48[16] ) /*0x78032f*/
  {
    v18 = *(ObjectClass **)(*(_DWORD *)&g_WindowManager.__pad_48[8] + 4 * j); /*0x780336*/
    while ( v18 ) /*0x78033b*/
    {
      v19 = v18; /*0x78033d*/
      v18 = (ObjectClass *)v18->estimatedHealth; /*0x78033f*/
      ResetSystemWOL_Reset(v19, 1); /*0x780348*/
    }
    ++j; /*0x780357*/
    *(_DWORD *)(*(_DWORD *)&g_WindowManager.__pad_48[8] + 4 * j - 4) = 0; /*0x780358*/
  }
  *(_DWORD *)&g_WindowManager.__pad_48[12] = 0; /*0x78036b*/
  if ( v16 > *(_DWORD *)&g_WindowManager.__pad_70[16] ) /*0x780373*/
  {
    do /*0x780394*/
    {
      if ( g_WindowManager.__pad_48[28] ) /*0x78037b*/
        break; /*0x78037b*/
      HashMap::Shrink2((HashMap *)&g_WindowManager.__pad_48[8]); /*0x780382*/
    }
    while ( *(_DWORD *)&g_WindowManager.__pad_48[16] > *(_DWORD *)&g_WindowManager.__pad_70[16] ); /*0x780394*/
  }
  occupant = stru_B765EC.occupant; /*0x780396*/
  for ( k = 0; k < stru_B765EC.occupant; occupant = stru_B765EC.occupant ) /*0x78039f*/
  {
    CChatEventSink_field_0x0C = *(CChatEventSink **)(stru_B765EC.? + 4 * k); /*0x7803a6*/
    while ( CChatEventSink_field_0x0C ) /*0x7803ab*/
    {
      v23 = CChatEventSink_field_0x0C; /*0x7803ad*/
      CChatEventSink_field_0x0C = (CChatEventSink *)CChatEventSink_field_0x0C[5].CChatEventSink_field_0x0C; /*0x7803af*/
      CChatEventSink::DeleteAndZero(v23, 1); /*0x7803bb*/
    }
    ++k; /*0x7803ca*/
    *(_DWORD *)(stru_B765EC.? + 4 * k - 4) = 0; /*0x7803cb*/
  }
  stru_B765EC.? = 0; /*0x7803de*/
  if ( occupant > stru_B765EC.ambientSoundController[4] ) /*0x7803e6*/
  {
    do /*0x780407*/
    {
      if ( LOBYTE(stru_B765EC.nextObject) ) /*0x7803ee*/
        break; /*0x7803ee*/
      HashTable::Shrink((HashTable *)&stru_B765EC.?); /*0x7803f5*/
    }
    while ( stru_B765EC.occupant > (unsigned int)stru_B765EC.ambientSoundController[4] ); /*0x780407*/
  }
  Array::CleanupArrayWOL(&g_WindowManager); /*0x78040e*/
  Array::CleanupArrayWOL((Array *)&stru_B76900.needsRedraw); /*0x780418*/
  HashTable::CleanupAndResize((HashTable *)&stru_B76900.isAliveFlag); /*0x780422*/
  if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x780437*/
  {
    g_WOL_HashTable = (HashTable *)&g_WindowManager.__pad_48[8]; /*0x78043e*/
    *(_DWORD *)&g_WOL_BuddyList.__pad_14[4] = 8960; /*0x780448*/
    dword_B736F0 = 8960; /*0x78044d*/
  }
  else
  {
    g_WOL_HashTable = &stru_B77D80; /*0x780459*/
    *(_DWORD *)&g_WOL_BuddyList.__pad_14[4] = g_NetworkRematchState; /*0x780463*/
    dword_B736F0 = g_NetworkRematchState; /*0x780468*/
  }
  memset(&stru_B76AC4.ambientSoundController[4], 0, 0x10Cu); /*0x78047e*/
  memset(&g_WindowManager.__pad_EC[84], 0, 0x10Cu); /*0x78048a*/
  memset(&stru_B75E48.ComPtr_field_0x10, 0, 0xF8u); /*0x780496*/
  memset(&unk_B769C8, 0, 0xF8u); /*0x7804a6*/
  word_B77AD0 = 0; /*0x7804a8*/
  g_WOL_GameListState = 0; /*0x7804af*/
  g_WOL_IdleHandler = 1; /*0x7804b5*/
  g_WOL_GameProcessState = -1; /*0x7804bb*/
  g_WOL_GameListPool = time(0); /*0x7804ce*/
  dword_B76468 = 0; /*0x7804d3*/
  g_WOL_BuddyList.DynamicVector_field_0x1C = 0; /*0x7804d9*/
  dword_B77E4C = 0; /*0x7804df*/
  stru_B77D80.HashTable_field_0x48 = 0; /*0x7804e5*/
  byte_B77DEC = 0; /*0x7804eb*/
  LOBYTE(stru_B77D80.HashTable_field_0x40) = 0; /*0x7804f1*/
  byte_84A1B8 = 1; /*0x7804f7*/
  DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.Array_field_0x38); /*0x7804fe*/
  memset(&Handles, 0, 0x48u); /*0x780514*/
  *(_WORD *)((char *)&stru_B77D80.HashTable_field_0x40 + 1) = 0; /*0x780522*/
  dword_84A1BC = -1; /*0x78052e*/
  stru_B77D80.HashTable_field_0x4C = 0; /*0x780534*/
  stru_B77D80.HashTable_field_0x38 = -1; /*0x78053a*/
  stru_B77D80.HashTable_field_0x3C = -1; /*0x780540*/
  *(_DWORD *)&g_WindowManager.__pad_EC[648] = GetStringCSF(aTxtLob1, 0, g_Str_File_wonline_cpp, 2752); /*0x78055c*/
  *(_DWORD *)&g_WindowManager.__pad_EC[652] = GetStringCSF(aTxtLob2, 0, g_Str_File_wonline_cpp, 2753); /*0x780577*/
  *(_DWORD *)&g_WindowManager.__pad_EC[656] = GetStringCSF(aTxtLob3, 0, g_Str_File_wonline_cpp, 2754); /*0x780592*/
  *(_DWORD *)&g_WindowManager.__pad_EC[660] = GetStringCSF(aTxtLob4, 0, g_Str_File_wonline_cpp, 2755); /*0x7805ad*/
  *(_DWORD *)&g_WindowManager.__pad_EC[664] = GetStringCSF(aTxtLob5, 0, g_Str_File_wonline_cpp, 2756); /*0x7805c8*/
  *(_DWORD *)&g_WindowManager.__pad_EC[668] = GetStringCSF(aTxtLob6, 0, g_Str_File_wonline_cpp, 2757); /*0x7805d2*/
  *(_DWORD *)&g_WindowManager.__pad_EC[672] = GetStringCSF(aTxtLob7, 0, g_Str_File_wonline_cpp, 2758); /*0x7805fe*/
  *(_DWORD *)&g_WindowManager.__pad_EC[676] = GetStringCSF(aTxtLob8, 0, g_Str_File_wonline_cpp, 2759); /*0x780608*/
  memset(g_WOL_RequestObject, 0xFFu, sizeof(g_WOL_RequestObject)); /*0x780619*/
  ppv = 0; /*0x780627*/
  memset(byte_B77A94, 0, sizeof(byte_B77A94)); /*0x78062d*/
  g_UIPointerTable = 0; /*0x780634*/
  dword_AC1174 = 0; /*0x78063a*/
  dword_B77E54 = 0; /*0x780640*/
  dword_B77E58 = 0; /*0x780646*/
  dword_B77E5C = 0; /*0x78064c*/
  dword_B77DDC = 0; /*0x780652*/
  dword_B77DE0 = 0; /*0x780658*/
  unk_B77ABC = 0; /*0x78065e*/
  dword_B77DE4 = 0; /*0x78065f*/
  stru_B77D80.HashTable_field_0x50 = 0; /*0x780665*/
  g_WOL_LoginObject.? = 1; /*0x78066b*/
  g_WOL_ChannelLeaveState = 0; /*0x780671*/
  __Release__NonReentrantLock_details_Concurrency__QAEXXZ_1((Concurrency::details::_NonReentrantLock *)&stru_B76510.StringVector_field_0x10); /*0x780677*/
  g_NetworkLobbyState = 0; /*0x78067c*/
  dword_B77E60 = 0; /*0x780682*/
  dword_B77E64 = 0; /*0x780688*/
  CCINIClass_RulesHash = GameConfig::ComputeHash(); /*0x780693*/
  LoadArtINI(); /*0x780698*/
  CCINIClass_ArtHash = unknown_libname_29(); /*0x7806a2*/
  result = unknown_libname_30(); /*0x7806a7*/
  dword_B77E20 = 0; /*0x7806ac*/
  CCINIClass_AIHash = result; /*0x7806b2*/
  return result; /*0x7806b7*/
}



// ==== 0x007806C0  ObjectClass::PopulateWOLLobbyListBox  this=ObjectClass  sig=csp ====
void PopulateWOLLobbyListBox(ObjectClass *this)
{
  HWND v1; // eax
  HWND DlgItem; // ebp
  LRESULT (__stdcall *v3)(HWND, UINT, WPARAM, LPARAM); // esi
  LRESULT v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  LRESULT v9; // esi
  signed int v10; // ebx
  LRESULT v11; // eax
  int v12; // eax
  LRESULT v13; // esi
  char *v14; // eax
  LRESULT v15; // eax
  bool v16; // [esp+7h] [ebp-2E9h]
  LPARAM v17; // [esp+8h] [ebp-2E8h]
  _BYTE v18[312]; // [esp+Ch] [ebp-2E4h] BYREF
  wchar_t Buffer[80]; // [esp+144h] [ebp-1ACh] BYREF
  char v20[268]; // [esp+1E4h] [ebp-10Ch] BYREF

  v1 = (HWND)Dialog::FindByHandle((Dialog *)0x113); /*0x7806cc*/
  if ( v1 ) /*0x7806d3*/
  {
    DlgItem = GetDlgItem(v1, 1341); /*0x7806e5*/
    if ( DlgItem ) /*0x7806e9*/
    {
      unknown_libname_73(v18); /*0x7806f4*/
      v3 = SendMessageA; /*0x7806f9*/
      v4 = SendMessageA(DlgItem, 0x18Eu, 0, 0); /*0x780709*/
      if ( v4 != -1 ) /*0x78070e*/
        GetListBoxItemText(DlgItem, v4, (void **)v18); /*0x780719*/
      SendMessageA(DlgItem, 0x49Du, 0, 1); /*0x780729*/
      Memory_Pop((ObjectClass *)DlgItem); /*0x78072d*/
      v5 = 0; /*0x780737*/
      *(_DWORD *)&v18[16] = *(_DWORD *)&g_WindowManager.__pad_EC[636]; /*0x78073b*/
      v17 = 0; /*0x78073f*/
      if ( *(int *)&g_WindowManager.__pad_EC[636] > 0 ) /*0x780743*/
      {
        v6 = 0; /*0x780749*/
        *(_DWORD *)&v18[4] = 0; /*0x78074c*/
        do /*0x7809a5*/
        {
          if ( v6 >= 0 && v5 < *(int *)&g_WindowManager.__pad_EC[636] ) /*0x78075a*/
            qmemcpy(&v18[44], (const void *)(v6 + *(_DWORD *)&g_WindowManager.__pad_EC[644]), 0x10Cu); /*0x78076e*/
          if ( !strncmp(&v18[96], g_Str_Lob_41_, strlen(g_Str_Lob_41_)) ) /*0x78078a*/
          {
            v7 = atol(&v18[strlen(g_Str_Lob_41_) + 96]); /*0x7807b1*/
            *(_DWORD *)&v18[8] = v7; /*0x7807b6*/
            v16 = strcmp(&v18[96], &stru_B76AC4.needsRedraw) == 0; /*0x7807f7*/
            v8 = v7 % 8; /*0x780810*/
            if ( v7 / 8 ) /*0x780801*/
              swprintf( /*0x780855*/
                Buffer,
                (const size_t)aSDD_0,
                *(const wchar_t *const *)&g_WindowManager.__pad_EC[4 * v8 + 648],
                v7 / 8 + 1,
                *(_DWORD *)&v18[56]);
            else
              swprintf( /*0x78082f*/
                Buffer,
                (const size_t)aSD_3,
                *(const wchar_t *const *)&g_WindowManager.__pad_EC[4 * v8 + 648],
                *(_DWORD *)&v18[56]);
            v9 = SendMessageA(DlgItem, 0x18Bu, 0, 0); /*0x78086d*/
            v10 = 0; /*0x78086f*/
            for ( *(_DWORD *)&v18[12] = v9; v10 < v9; ++v10 ) /*0x780877*/
            {
              v11 = SendMessageA(DlgItem, 0x199u, v10, 0); /*0x780882*/
              if ( v11 >= 0 && v11 < *(int *)&g_WindowManager.__pad_EC[636] ) /*0x780892*/
              {
                qmemcpy(v20, (const void *)(*(_DWORD *)&g_WindowManager.__pad_EC[644] + 268 * v11), sizeof(v20)); /*0x7808b3*/
                v9 = *(_DWORD *)&v18[12]; /*0x7808b5*/
              }
              v12 = atol(&v20[strlen(g_Str_Lob_41_) + 52]); /*0x7808d0*/
              if ( v12 > *(int *)&v18[8] ) /*0x7808de*/
                break; /*0x7808de*/
            }
            v13 = SendMessageA(DlgItem, 0x4C7u, v10, (LPARAM)&v18[96]); /*0x7808fd*/
            SendMessageA(DlgItem, 0x19Au, v13, v17); /*0x78090b*/
            Gadget::InitProperties((Gadget *)&v18[20]); /*0x780911*/
            *(_DWORD *)&v18[20] = 1; /*0x780922*/
            WideString::Reassign((void **)&v18[24], Buffer); /*0x78092a*/
            WideString::Reassign((void **)&v18[28], &g_TypeClass_DefaultString); /*0x780938*/
            SendMessageA( /*0x780962*/
              DlgItem,
              0x4A8u,
              (unsigned __int16)dword_B76C1C | ((unsigned __int16)v13 << 16),
              (LPARAM)&v18[20]);
            if ( v16 ) /*0x78096a*/
              SendMessageA(DlgItem, 0x186u, v13, 0); /*0x780975*/
            DeleteAndZero::Alt((DeleteAndZero *)&v18[28]); /*0x78097b*/
            DeleteAndZero::Alt((DeleteAndZero *)&v18[24]); /*0x780984*/
            v5 = v17; /*0x780989*/
          }
          ++v5; /*0x780995*/
          v6 = *(_DWORD *)&v18[4] + 268; /*0x780996*/
          v17 = v5; /*0x78099d*/
          *(_DWORD *)&v18[4] += 268; /*0x7809a1*/
        }
        while ( v5 < *(int *)&v18[16] ); /*0x7809a5*/
        v3 = SendMessageA; /*0x7809ab*/
      }
      v14 = String::GetOrEmpty_Alt((String *)v18); /*0x7809b6*/
      v15 = v3(DlgItem, 0x4C5u, 0, (LPARAM)v14); /*0x7809c4*/
      if ( v15 != -1 ) /*0x7809ca*/
        v3(DlgItem, 0x197u, v15, 0); /*0x7809d5*/
      v3(DlgItem, 0x49Du, 0, 0); /*0x7809e1*/
      InvalidateRect(DlgItem, 0, 0); /*0x7809e8*/
      DeleteAndZero((ObjectClass *)v18); /*0x7809f2*/
    }
  }
}



// ==== 0x00780A00  FormatLocaleStringWOL  this=-  sig=csp ====
wchar_t **__fastcall FormatLocaleStringWOL(wchar_t **a1, int a2)
{
  char **v3; // eax
  char *v4; // eax
  wchar_t *StringCSF; // eax
  DeleteAndZero v7; // [esp+8h] [ebp-Ch] BYREF

  v3 = FormatStringInt((char **)&v7.DeleteAndZero_field_0x08, a2, 2); /*0x780a0f*/
  ProcessStringAndCopy((char **)&v7.DeleteAndZero_field_0x04, aWolLocale, v3); /*0x780a1e*/
  DeleteAndZero((ObjectClass *)&v7.DeleteAndZero_field_0x08); /*0x780a27*/
  v4 = String::GetOrEmpty((String *)&v7.DeleteAndZero_field_0x04); /*0x780a3a*/
  StringCSF = GetStringCSF((wchar_t *)v4, 0, g_Str_File_wonline_cpp, 2909); /*0x780a43*/
  WideString::Assign((WideString *)&v7, StringCSF); /*0x780a4d*/
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&v7); /*0x780a65*/
  DeleteAndZero::Alt(&v7); /*0x780a6e*/
  DeleteAndZero((ObjectClass *)&v7.DeleteAndZero_field_0x04); /*0x780a77*/
  return a1; /*0x780a7e*/
}



// ==== 0x00780A90  FormatWOLPlayerInfo  this=Player  sig=csp ====
wchar_t **__fastcall FormatWOLPlayerInfo(wchar_t **a1, const char *a2)
{
  wchar_t **v4; // eax
  HashTable *v5; // esi
  int v6; // esi
  wchar_t *v7; // eax
  wchar_t **v8; // eax
  wchar_t **v9; // eax
  int v10; // esi
  const void *v11; // esi
  wchar_t *StringCSF; // eax
  wchar_t **v13; // eax
  wchar_t **v14; // eax
  wchar_t **v15; // eax
  int v16; // esi
  int v17; // eax
  wchar_t **v18; // eax
  wchar_t **v19; // eax
  wchar_t **v21; // [esp-Ch] [ebp-A8h]
  wchar_t **v22; // [esp-4h] [ebp-A0h]
  String v23; // [esp+10h] [ebp-8Ch] BYREF
  String v24; // [esp+18h] [ebp-84h] BYREF
  wchar_t *v25; // [esp+20h] [ebp-7Ch] BYREF
  wchar_t *v26; // [esp+24h] [ebp-78h] BYREF
  wchar_t *v27; // [esp+28h] [ebp-74h] BYREF
  WideString v28; // [esp+2Ch] [ebp-70h] BYREF
  const wchar_t *v29[27]; // [esp+30h] [ebp-6Ch] BYREF

  String::Assign(&v23, a2 + 36); /*0x780aa6*/
  v4 = CharStringToWide(&v26, (const char **)&v23); /*0x780abd*/
  WideString::AssignConcat((WideString *)v4, (wchar_t **)&v23.m_3[1], (wchar_t *)L" : ");
  DeleteAndZero::Alt((DeleteAndZero *)&v26); /*0x780acd*/
  String::ToLower(&v23); /*0x780ad6*/
  v5 = g_WOL_HashTable; /*0x780adb*/
  memset(v29, 0, sizeof(v29)); /*0x780aee*/
  if ( g_WOL_HashTable /*0x780b14*/
    && g_WOL_HashTable->HashTable_field_0x04
    && (v6 = *(_DWORD *)(*(_DWORD *)v5->__pad_0
                       + 4
                       * (((int (__thiscall *)(String *))g_WOL_HashTable->HashTable_field_0x18)(&v23)
                        & ((1 << v5->HashTable_field_0x0C) - 1)))) != 0 )
  {
    while ( !(unsigned __int8)String::Compare((String *)v6, (const char **)&v23) ) /*0x780b24*/
    {
      v6 = *(_DWORD *)(v6 + 112); /*0x780b2a*/
      if ( !v6 ) /*0x780b2f*/
        goto LABEL_6; /*0x780b2f*/
    }
    v11 = (const void *)(v6 + 4); /*0x780c0f*/
    if ( v11 ) /*0x780c14*/
      qmemcpy(v29, v11, sizeof(v29)); /*0x780c1f*/
    v22 = FormatWideString((wchar_t **)&v24.m_3[1], v29[7]); /*0x780c36*/
    v21 = WideString::Assign((WideString *)&v25, (wchar_t *)asc_82083C); /*0x780c49*/
    StringCSF = GetStringCSF(g_Str_TXT_RANK, 0, g_Str_File_wonline_cpp, 2937); /*0x780c59*/
    v13 = WideString::Assign(&v28, StringCSF); /*0x780c63*/
    v14 = WideString::ConcatAlloc((WideString *)v13, &v27, (const wchar_t **)v21); /*0x780c6a*/
    v15 = WideString::ConcatAlloc((WideString *)v14, &v26, (const wchar_t **)v22); /*0x780c71*/
    WideString::Append((WideString *)&v23.m_3[1], (const wchar_t **)v15); /*0x780c7b*/
    DeleteAndZero::Alt((DeleteAndZero *)&v26); /*0x780c84*/
    DeleteAndZero::Alt((DeleteAndZero *)&v27); /*0x780c8d*/
    DeleteAndZero::Alt((DeleteAndZero *)&v28); /*0x780c96*/
    DeleteAndZero::Alt((DeleteAndZero *)&v25); /*0x780c9f*/
    DeleteAndZero::Alt((DeleteAndZero *)&v24.m_3[1]); /*0x780ca8*/
  }
  else
  {
LABEL_6:
    v7 = GetStringCSF(g_Str_TXT_UNRANKED, 0, g_Str_File_wonline_cpp, 2939); /*0x780b31*/
    WideString::Append2((WideString *)&v23.m_3[1], v7); /*0x780b4c*/
  }
  String::Assign(&v24, a2 + 46); /*0x780b59*/
  if ( !String::Length(&v24) ) /*0x780b62*/
    String::Assign_Alt(&v24, a2 + 87); /*0x780b73*/
  if ( String::Length(&v24) ) /*0x780b7c*/
  {
    v8 = CharStringToWide(&v25, (const char **)&v24); /*0x780b8d*/
    v9 = FormatWideStringPrefix((wchar_t **)&v24.m_3[1], asc_84A69C, v8); /*0x780b9c*/
    WideString::Append((WideString *)&v23.m_3[1], (const wchar_t **)v9); /*0x780ba6*/
    DeleteAndZero::Alt((DeleteAndZero *)&v24.m_3[1]); /*0x780baf*/
    DeleteAndZero::Alt((DeleteAndZero *)&v25); /*0x780bb8*/
  }
  v10 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * (dword_B76548(&v23) & ((1 << dword_B7653C) - 1))); /*0x780bdc*/
  if ( v10 )
  {
    while ( !(unsigned __int8)String::Compare((String *)v10, (const char **)&v23) ) /*0x780bf5*/
    {
      v10 = *(_DWORD *)(v10 + 8); /*0x780bfb*/
      if ( !v10 ) /*0x780c00*/
        goto LABEL_27; /*0x780c00*/
    }
    if ( ppv )
    {
      if ( dword_B76534 )
      {
        v16 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * (dword_B76548(&v23) & ((1 << dword_B7653C) - 1))); /*0x780ceb*/
        if ( v16 )
        {
          while ( !(unsigned __int8)String::Compare((String *)v16, (const char **)&v23) ) /*0x780d00*/
          {
            v16 = *(_DWORD *)(v16 + 8); /*0x780d02*/
            if ( !v16 ) /*0x780d07*/
              goto LABEL_27; /*0x780d07*/
          }
          if ( v16 != -4 )
          {
            v17 = *(_DWORD *)(v16 + 4); /*0x780d16*/
            if ( v17 )
            {
              v18 = FormatLocaleStringWOL(&v25, v17); /*0x780d22*/
              v19 = FormatWideStringPrefix((wchar_t **)&v24.m_3[1], L" : ", v18);
              WideString::Append((WideString *)&v23.m_3[1], (const wchar_t **)v19); /*0x780d3b*/
              DeleteAndZero::Alt((DeleteAndZero *)&v24.m_3[1]); /*0x780d44*/
              DeleteAndZero::Alt((DeleteAndZero *)&v25); /*0x780d4d*/
            }
          }
        }
      }
    }
  }
LABEL_27:
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&v23.m_3[1]); /*0x780d52*/
  DeleteAndZero((ObjectClass *)&v24); /*0x780d62*/
  DeleteAndZero::Alt((DeleteAndZero *)&v23.m_3[1]); /*0x780d6b*/
  DeleteAndZero((ObjectClass *)&v23); /*0x780d74*/
  return a1; /*0x780d7b*/
}



// ==== 0x00780D90  Render_Format  this=-  sig=csp ====
wchar_t **__fastcall Render_Format(wchar_t **a1, String *a2)
{
  char *v4; // eax
  wchar_t *StringCSF; // eax
  int v7; // edi
  int v8; // esi
  char *v9; // eax

  v4 = String::GetOrEmpty_Alt(a2); /*0x780d9f*/
  if ( _strcmpi(v4, aRandmapSed) ) /*0x780da5*/
  {
    v7 = 0; /*0x780ddb*/
    if ( dword_A8B8D8 <= 0 ) /*0x780ddf*/
    {
LABEL_6:
      WideString::Assign((WideString *)a1, &g_TypeClass_DefaultString); /*0x780e0b*/
      return a1; /*0x780e17*/
    }
    else
    {
      while ( 1 ) /*0x780de6*/
      {
        v8 = *(_DWORD *)(dword_A8B8CC + 4 * v7); /*0x780de6*/
        v9 = String::GetOrEmpty_Alt(a2); /*0x780def*/
        if ( !_strcmpi(v9, (char *)(v8 + 88)) ) /*0x780df5*/
          break; /*0x780df5*/
        if ( ++v7 >= dword_A8B8D8 ) /*0x780e09*/
          goto LABEL_6; /*0x780e09*/
      }
      WideString::Assign((WideString *)a1, (wchar_t *)v8); /*0x780e21*/
      return a1; /*0x780e26*/
    }
  }
  else
  {
    StringCSF = GetStringCSF(aTxtRandomMapDe, 0, g_Str_File_wonline_cpp, 2970); /*0x780dc2*/
    WideString::Assign((WideString *)a1, StringCSF); /*0x780dca*/
    return a1; /*0x780dcf*/
  }
}



// ==== 0x00780E30  FormatWOLPlayerInfoForDisplay  this=-  sig=csp ====
wchar_t **__fastcall FormatWOLPlayerInfoForDisplay(wchar_t **a1, HWND a2, WPARAM wParam)
{
  wchar_t *StringCSF; // eax
  LRESULT v5; // eax
  char *v6; // eax
  wchar_t **v7; // eax
  wchar_t *v8; // eax
  const wchar_t *v10; // [esp-4h] [ebp-2B4h]
  wchar_t *v11; // [esp-4h] [ebp-2B4h]
  DeleteAndZero v12; // [esp+10h] [ebp-2A0h] BYREF
  String v13; // [esp+1Ch] [ebp-294h] BYREF
  int v14; // [esp+24h] [ebp-28Ch] BYREF
  int v15; // [esp+28h] [ebp-288h] BYREF
  int v16; // [esp+2Ch] [ebp-284h] BYREF
  int v17; // [esp+30h] [ebp-280h] BYREF
  char v18[108]; // [esp+34h] [ebp-27Ch] BYREF
  wchar_t *v19[67]; // [esp+A0h] [ebp-210h] BYREF
  char String[132]; // [esp+1ACh] [ebp-104h] BYREF
  wchar_t Buffer[64]; // [esp+230h] [ebp-80h] BYREF

  if ( wParam == -1 ) /*0x780e46*/
  {
    StringCSF = GetStringCSF(aSttLobbylistga, 0, g_Str_File_wonline_cpp, 2987); /*0x780e4d*/
LABEL_14:
    WideString::Assign((WideString *)a1, StringCSF); /*0x78106f*/
    return a1; /*0x781077*/
  }
  memset(v19, 0, sizeof(v19)); /*0x780e6a*/
  v5 = SendMessageA(a2, 0x199u, wParam, 0); /*0x780e6c*/
  if ( v5 < 0 || v5 >= (int)dword_B76AE0 ) /*0x780e80*/
  {
    StringCSF = GetStringCSF(aSttLobbylistga, 0, g_Str_File_wonline_cpp, 2994); /*0x78106a*/
    goto LABEL_14; /*0x78106a*/
  }
  qmemcpy(v19, (char *)dword_B76AE8 + 268 * v5, sizeof(v19)); /*0x780ea4*/
  String::Assign(&v13, (const char *)&v19[13]); /*0x780eb2*/
  CChatEventSink::EncodeString((CChatEventSink *)&v13, 39); /*0x780ebd*/
  memset(v18, 0, sizeof(v18)); /*0x780ecf*/
  v6 = String::GetOrEmpty(&v13); /*0x780ed5*/
  strncpy(&v18[36], v6, 0xAu); /*0x780ee0*/
  FormatWOLPlayerInfo((wchar_t **)&v12, v18); /*0x780ef0*/
  v7 = WideString::Assign((WideString *)&v12.DeleteAndZero_field_0x04, (wchar_t *)L", "); /*0x780efe*/
  WideString::Append((WideString *)&v12, (const wchar_t **)v7); /*0x780f08*/
  DeleteAndZero::Alt((DeleteAndZero *)&v12.DeleteAndZero_field_0x04); /*0x780f11*/
  if ( v19[10] == (wchar_t *)-1 ) /*0x780f20*/
  {
    v11 = GetStringCSF(g_Str_TXT_UNKNOWN_PING, 0, g_Str_File_wonline_cpp, 3024); /*0x780f6a*/
    WideString::Append2((WideString *)&v12, v11); /*0x780f6f*/
  }
  else
  {
    v10 = v19[10]; /*0x780f22*/
    v8 = GetStringCSF(aMsgPinginfo, 0, g_Str_File_wonline_cpp, 3021); /*0x780f34*/
    swprintf(Buffer, (const size_t)v8, v10); /*0x780f42*/
    WideString::Append2((WideString *)&v12, Buffer); /*0x780f52*/
  }
  strncpy(String, (const char *)&v19[56], 0x80u); /*0x780f89*/
  v14 = 0; /*0x780f95*/
  v15 = 0; /*0x780f99*/
  *(_DWORD *)&v13.m_3[1] = 0; /*0x780f9d*/
  v17 = 0; /*0x780fa1*/
  v16 = 0; /*0x780fa5*/
  unknown_libname_73(&v12.DeleteAndZero_field_0x08); /*0x780fa9*/
  ParseStringCommaInts(String, &v14, &v15, (int *)&v13.m_3[1], &v17, &v16, (void **)&v12.DeleteAndZero_field_0x08); /*0x780fd2*/
  if ( String::Length((String *)&v12.DeleteAndZero_field_0x08) ) /*0x780fdb*/
  {
    Render_Format((wchar_t **)&v12.DeleteAndZero_field_0x04, (String *)&v12.DeleteAndZero_field_0x08); /*0x780fec*/
    if ( WideString::Length((WideString *)&v12.DeleteAndZero_field_0x04) ) /*0x780ff5*/
    {
      WideString::Append2((WideString *)&v12, (wchar_t *)L", "); /*0x781007*/
      WideString::Append((WideString *)&v12, (const wchar_t **)&v12.DeleteAndZero_field_0x04); /*0x781015*/
    }
    DeleteAndZero::Alt((DeleteAndZero *)&v12.DeleteAndZero_field_0x04); /*0x78101e*/
  }
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&v12); /*0x78102a*/
  DeleteAndZero((ObjectClass *)&v12.DeleteAndZero_field_0x08); /*0x781033*/
  DeleteAndZero::Alt(&v12); /*0x78103c*/
  DeleteAndZero((ObjectClass *)&v13); /*0x781045*/
  return a1; /*0x78104c*/
}



// ==== 0x00781090  WOLobby_Get  this=-  sig=csp ====
wchar_t **__fastcall WOLobby_Get(wchar_t **a1, HWND a2, WPARAM wParam)
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



// ==== 0x00781130  FilterWOLGameListEntry  this=-  sig=csp ====
bool __fastcall sub_781130(_DWORD *a1, int a2, int a3, int a4)
{
  if ( g_WOL_GameListRender != 2 ) /*0x781142*/
  {
    if ( g_WOL_GameListRender != 3 ) /*0x78114e*/
    {
LABEL_8:
      if ( g_WOL_GameListRender == 2 ) /*0x781164*/
        goto LABEL_9; /*0x781164*/
      if ( g_WOL_GameListRender != 3 ) /*0x781175*/
        goto LABEL_15; /*0x781175*/
LABEL_12:
      if ( a2 != 1 ) /*0x78117a*/
        return 0; /*0x78117a*/
      goto LABEL_13; /*0x78117a*/
    }
    if ( a2 ) /*0x781152*/
      goto LABEL_12; /*0x781152*/
LABEL_6:
    if ( (a1[7] & 0x100) != 0 ) /*0x781157*/
      return 1; /*0x78115e*/
    goto LABEL_8; /*0x781157*/
  }
  if ( a2 == 1 ) /*0x781147*/
    goto LABEL_6; /*0x781147*/
LABEL_9:
  if ( a2 ) /*0x781168*/
    return 0; /*0x78116f*/
LABEL_13:
  if ( (a1[7] & 0x100) == 0 ) /*0x78117f*/
    return 1; /*0x781186*/
LABEL_15:
  if ( g_WOL_GameListRender != 4 ) /*0x781194*/
  {
    if ( g_WOL_GameListRender != 5 ) /*0x7811a0*/
    {
LABEL_23:
      if ( g_WOL_GameListRender == 4 ) /*0x7811b9*/
        goto LABEL_24; /*0x7811b9*/
      if ( g_WOL_GameListRender != 5 ) /*0x7811ca*/
        goto LABEL_31; /*0x7811ca*/
LABEL_27:
      if ( a2 != 1 ) /*0x7811cf*/
        return 0; /*0x7811cf*/
      goto LABEL_28; /*0x7811cf*/
    }
    if ( a2 ) /*0x7811a4*/
      goto LABEL_27; /*0x7811a4*/
LABEL_20:
    if ( a3 || a4 ) /*0x7811ac*/
      return 1; /*0x7811b3*/
    goto LABEL_23; /*0x7811ac*/
  }
  if ( a2 == 1 ) /*0x781199*/
    goto LABEL_20; /*0x781199*/
LABEL_24:
  if ( a2 ) /*0x7811bd*/
    return 0; /*0x7811c4*/
LABEL_28:
  if ( !a3 && !a4 ) /*0x7811d7*/
    return 1; /*0x7811de*/
LABEL_31:
  if ( g_WOL_GameListRender != 6 ) /*0x7811e9*/
  {
    if ( g_WOL_GameListRender != 7 ) /*0x7811f5*/
    {
LABEL_38:
      if ( g_WOL_GameListRender == 6 ) /*0x78120b*/
        goto LABEL_39; /*0x78120b*/
      if ( g_WOL_GameListRender != 7 ) /*0x78121c*/
        goto LABEL_45; /*0x78121c*/
LABEL_42:
      if ( a2 != 1 ) /*0x781221*/
        return 0; /*0x781221*/
      goto LABEL_43; /*0x781221*/
    }
    if ( a2 ) /*0x7811f9*/
      goto LABEL_42; /*0x7811f9*/
LABEL_36:
    if ( (a1[8] & 0x600) != 0 ) /*0x7811fe*/
      return 1; /*0x781205*/
    goto LABEL_38; /*0x7811fe*/
  }
  if ( a2 == 1 ) /*0x7811ee*/
    goto LABEL_36; /*0x7811ee*/
LABEL_39:
  if ( a2 ) /*0x78120f*/
    return 0; /*0x781216*/
LABEL_43:
  if ( (a1[8] & 0x600) == 0 ) /*0x78122a*/
    return 1; /*0x781231*/
LABEL_45:
  if ( g_WOL_GameListRender != 8 ) /*0x781237*/
  {
    if ( g_WOL_GameListRender != 9 ) /*0x781243*/
    {
LABEL_52:
      if ( g_WOL_GameListRender == 8 ) /*0x78125b*/
        goto LABEL_53; /*0x78125b*/
      if ( g_WOL_GameListRender != 9 ) /*0x78126c*/
        goto LABEL_59; /*0x78126c*/
LABEL_56:
      if ( a2 != 1 ) /*0x781271*/
        return 0; /*0x781271*/
      goto LABEL_57; /*0x781271*/
    }
    if ( a2 ) /*0x781247*/
      goto LABEL_56; /*0x781247*/
LABEL_50:
    if ( a1[5] ) /*0x781249*/
      return 1; /*0x781255*/
    goto LABEL_52; /*0x78124e*/
  }
  if ( a2 == 1 ) /*0x78123c*/
    goto LABEL_50; /*0x78123c*/
LABEL_53:
  if ( a2 ) /*0x78125f*/
    return 0; /*0x781266*/
LABEL_57:
  if ( !a1[5] ) /*0x781277*/
    return 1; /*0x781283*/
LABEL_59:
  if ( g_WOL_GameListRender != 10 ) /*0x78128f*/
  {
    if ( g_WOL_GameListRender != 11 ) /*0x78129b*/
    {
LABEL_67:
      if ( g_WOL_GameListRender == 10 ) /*0x7812c0*/
        goto LABEL_68; /*0x7812c0*/
      if ( g_WOL_GameListRender != 11 ) /*0x7812d1*/
        goto LABEL_75; /*0x7812d1*/
LABEL_71:
      if ( a2 != 1 ) /*0x7812d6*/
        return 0; /*0x7812d6*/
      goto LABEL_72; /*0x7812d6*/
    }
    if ( a2 ) /*0x78129f*/
      goto LABEL_71; /*0x78129f*/
LABEL_64:
    if ( dword_A8B238[0] == 4 && (a1[8] & 0x100) != 0 ) /*0x7812b3*/
      return 1; /*0x7812ba*/
    goto LABEL_67; /*0x7812b3*/
  }
  if ( a2 == 1 ) /*0x781294*/
    goto LABEL_64; /*0x781294*/
LABEL_68:
  if ( a2 ) /*0x7812c4*/
    return 0; /*0x7812cb*/
LABEL_72:
  if ( dword_A8B238[0] != 4 || (a1[8] & 0x100) == 0 ) /*0x7812ee*/
    return 1; /*0x7812f5*/
LABEL_75:
  if ( g_WOL_GameListRender != 12 ) /*0x7812fb*/
  {
    if ( g_WOL_GameListRender != 13 ) /*0x781307*/
    {
LABEL_84:
      if ( g_WOL_GameListRender == 12 ) /*0x781333*/
        goto LABEL_85; /*0x781333*/
      if ( g_WOL_GameListRender != 13 ) /*0x781344*/
        return 0; /*0x781344*/
LABEL_88:
      if ( a2 != 1 ) /*0x78134d*/
        return 0; /*0x78134d*/
      return dword_A8B238[0] == 4 && (a1[5] || (a1[8] & 0x100) != 0); /*0x78134d*/
    }
    if ( a2 ) /*0x78130b*/
      goto LABEL_88; /*0x78130b*/
LABEL_80:
    if ( dword_A8B238[0] != 4 || !a1[5] && (a1[8] & 0x100) == 0 ) /*0x781326*/
      return 1; /*0x78132d*/
    goto LABEL_84; /*0x781326*/
  }
  if ( a2 == 1 ) /*0x781300*/
    goto LABEL_80; /*0x781300*/
LABEL_85:
  if ( a2 ) /*0x781337*/
    return 0; /*0x78133e*/
  return dword_A8B238[0] == 4 && (a1[5] || (a1[8] & 0x100) != 0); /*0x781370*/
}



// ==== 0x00781380  sub_781380  this=-  sig=ida-proto ====
int __cdecl sub_781380(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax

  v2 = a1[1]; /*0x781388*/
  v3 = a2[1]; /*0x78138b*/
  if ( v2 >= v3 )
  {
    if ( v2 <= v3 )
      return 0; /*0x7813a9*/
    else
      return v3 != -1 ? 1 : -1;
  }
  else
  {
    v4 = -(v2 != -1); /*0x781395*/
    LOBYTE(v4) = v4 & 0xFE; /*0x781397*/
    return v4 + 1; /*0x781399*/
  }
}



// ==== 0x007813B0  sub_7813B0  this=-  sig=ida-proto ====
int __cdecl sub_7813B0(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = a1[1]; /*0x7813b8*/
  v3 = a2[1]; /*0x7813bb*/
  if ( v2 >= v3 ) /*0x7813c0*/
    return (v2 <= v3) - 1; /*0x7813d0*/
  else
    return 1; /*0x7813c2*/
}



// ==== 0x007813E0  sub_7813E0  this=-  sig=ida-proto ====
void __fastcall sub_7813E0(void *Base, char a2)
{
  signed int v2; // edx
  void *v3; // esi
  signed int v4; // eax
  int v5; // ebp
  signed int *v6; // ebx
  signed int v7; // ecx
  _DWORD v10[67]; // [esp+10h] [ebp-10Ch] BYREF

  v2 = dword_B76AE0; /*0x7813eb*/
  v3 = Base; /*0x7813f1*/
  v4 = 0; /*0x7813f9*/
  memset(v10, 0, sizeof(v10)); /*0x781405*/
  if ( (int)dword_B76AE0 > 0 ) /*0x781407*/
  {
    v5 = 0; /*0x78140b*/
    v6 = (signed int *)Base; /*0x78140d*/
    do /*0x781448*/
    {
      if ( v5 >= 0 && v4 < (int)dword_B76AE0 ) /*0x781419*/
      {
        qmemcpy(v10, (char *)dword_B76AE8 + v5, sizeof(v10)); /*0x78142d*/
        v3 = Base; /*0x78142f*/
      }
      v7 = v10[10]; /*0x781433*/
      *v6 = v4; /*0x781437*/
      v6[1] = v7; /*0x781439*/
      ++v4; /*0x78143c*/
      v5 += 268; /*0x78143d*/
      v6 += 2; /*0x781443*/
    }
    while ( v4 < v2 ); /*0x781448*/
  }
  if ( a2 ) /*0x781452*/
    qsort(v3, v2, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_781380); /*0x781459*/
  else
    qsort(v3, v2, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_7813B0); /*0x781464*/
}



// ==== 0x00781480  ObjectClass::GameListRenderWOL  this=ObjectClass  sig=csp ====
void GameListRenderWOL(ObjectClass *this)
{
  HWND v1; // eax
  int v2; // ebx
  HWND DlgItem; // esi
  LRESULT v4; // eax
  LRESULT v5; // eax
  int *v6; // edx
  signed int v7; // ebp
  int v8; // eax
  int v9; // ecx
  LPARAM *v10; // esi
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  LPARAM v15; // ebx
  int v16; // edi
  BOOL v17; // eax
  int v18; // ebp
  LRESULT v19; // eax
  unsigned __int16 v20; // si
  HWND v21; // ebx
  int v22; // esi
  int v23; // eax
  const wchar_t *v24; // eax
  wchar_t *v25; // eax
  bool v26; // cc
  char *v27; // eax
  HWND v28; // esi
  LRESULT v29; // eax
  char *v30; // eax
  LRESULT v31; // eax
  HWND v32; // eax
  int (__cdecl *v33)(const void *, const void *); // [esp-Ch] [ebp-2A8h]
  wchar_t *StringCSF; // [esp-Ch] [ebp-2A8h]
  wchar_t *v35; // [esp-Ch] [ebp-2A8h]
  wchar_t *v36; // [esp-Ch] [ebp-2A8h]
  const wchar_t *v37; // [esp-Ch] [ebp-2A8h]
  void *v38; // [esp+Ch] [ebp-290h] BYREF
  Gadget v39; // [esp+10h] [ebp-28Ch] BYREF
  int v40; // [esp+1Ch] [ebp-280h]
  int v41; // [esp+20h] [ebp-27Ch]
  int v42; // [esp+24h] [ebp-278h]
  int i; // [esp+28h] [ebp-274h]
  int v44; // [esp+2Ch] [ebp-270h] BYREF
  int v45; // [esp+30h] [ebp-26Ch] BYREF
  HWND v46; // [esp+34h] [ebp-268h]
  int referenceCount; // [esp+38h] [ebp-264h]
  int *v48; // [esp+3Ch] [ebp-260h]
  int v49; // [esp+40h] [ebp-25Ch]
  LPARAM *v50; // [esp+44h] [ebp-258h]
  String v51; // [esp+48h] [ebp-254h] BYREF
  String v52; // [esp+50h] [ebp-24Ch] BYREF
  LPARAM v53; // [esp+58h] [ebp-244h]
  int v54; // [esp+5Ch] [ebp-240h] BYREF
  int v55; // [esp+60h] [ebp-23Ch] BYREF
  int v56; // [esp+64h] [ebp-238h] BYREF
  HWND v57; // [esp+68h] [ebp-234h]
  _DWORD v58[67]; // [esp+6Ch] [ebp-230h] BYREF
  wchar_t Buffer[80]; // [esp+178h] [ebp-124h] BYREF
  char Destination[132]; // [esp+218h] [ebp-84h] BYREF

  v1 = (HWND)Dialog::FindByHandle((Dialog *)0x113); /*0x78148d*/
  v2 = 0; /*0x781492*/
  v57 = v1; /*0x781494*/
  if ( !v1 ) /*0x78149a*/
    return; /*0x78149a*/
  DlgItem = GetDlgItem(v1, 1774); /*0x7814ac*/
  v46 = DlgItem; /*0x7814b0*/
  if ( !DlgItem ) /*0x7814b4*/
    return; /*0x7814b4*/
  unknown_libname_73(&v52); /*0x7814c0*/
  v4 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x7814d3*/
  if ( v4 != -1 ) /*0x7814d8*/
    GetListBoxItemText(DlgItem, v4, (void **)&v52); /*0x7814e3*/
  unknown_libname_73(&v51); /*0x7814ec*/
  v5 = SendMessageA(DlgItem, 0x18Eu, 0, 0); /*0x7814f9*/
  if ( v5 != -1 ) /*0x7814fe*/
    GetListBoxItemText(DlgItem, v5, (void **)&v51); /*0x781509*/
  SendMessageA(DlgItem, 0x49Du, 0, 1); /*0x781517*/
  byte_B77E74 = 1; /*0x781519*/
  SendMessageA(DlgItem, 0x184u, 0, 0); /*0x781528*/
  referenceCount = stru_B76AC4.?; /*0x781538*/
  *(_DWORD *)&v52.m_3[1] = 1; /*0x78153c*/
  if ( g_WOL_GameListRender == 2 /*0x78157b*/
    || g_WOL_GameListRender == 3
    || g_WOL_GameListRender == 8
    || g_WOL_GameListRender == 9
    || g_WOL_GameListRender == 10
    || g_WOL_GameListRender == 11
    || g_WOL_GameListRender == 6
    || g_WOL_GameListRender == 7
    || g_WOL_GameListRender == 4
    || g_WOL_GameListRender == 5
    || g_WOL_GameListRender == 12
    || g_WOL_GameListRender == 13 )
  {
    *(_DWORD *)&v52.m_3[1] = 2; /*0x78157d*/
  }
  v6 = (int *)__2_YAPAXI_Z(8 * stru_B76AC4.?); /*0x781592*/
  v48 = v6; /*0x781599*/
  if ( v6 ) /*0x78159d*/
  {
    if ( g_WOL_GameListRender == 15 ) /*0x781649*/
    {
      v7 = stru_B76AC4.?; /*0x78164f*/
      v13 = 0; /*0x78165a*/
      memset(v58, 0, sizeof(v58)); /*0x781662*/
      if ( stru_B76AC4.? > 0 ) /*0x781664*/
      {
        do /*0x78169e*/
        {
          if ( v2 >= 0 && v13 < stru_B76AC4.? ) /*0x781670*/
            qmemcpy(v58, (const void *)(v2 + stru_B76AC4.occupant), sizeof(v58)); /*0x781684*/
          v14 = v58[10]; /*0x781686*/
          *v6 = v13; /*0x78168d*/
          v6[1] = v14; /*0x78168f*/
          ++v13; /*0x781692*/
          v2 += 268; /*0x781693*/
          v6 += 2; /*0x781699*/
        }
        while ( v13 < v7 ); /*0x78169e*/
      }
      v33 = (int (__cdecl *)(const void *, const void *))sub_7813B0; /*0x7816a0*/
      goto LABEL_28; /*0x7816a5*/
    }
  }
  else
  {
    g_WOL_GameListRender = 0; /*0x7815a3*/
  }
  v7 = stru_B76AC4.?; /*0x7815a9*/
  v8 = 0; /*0x7815b4*/
  memset(v58, 0, sizeof(v58)); /*0x7815bc*/
  if ( stru_B76AC4.? > 0 ) /*0x7815be*/
  {
    do /*0x7815f8*/
    {
      if ( v2 >= 0 && v8 < stru_B76AC4.? ) /*0x7815ca*/
        qmemcpy(v58, (const void *)(v2 + stru_B76AC4.occupant), sizeof(v58)); /*0x7815de*/
      v9 = v58[10]; /*0x7815e0*/
      *v6 = v8; /*0x7815e7*/
      v6[1] = v9; /*0x7815e9*/
      ++v8; /*0x7815ec*/
      v2 += 268; /*0x7815ed*/
      v6 += 2; /*0x7815f3*/
    }
    while ( v8 < v7 ); /*0x7815f8*/
  }
  v33 = (int (__cdecl *)(const void *, const void *))sub_781380; /*0x7815fa*/
LABEL_28:
  v10 = v48; /*0x7815ff*/
  qsort(v48, v7, 8u, v33); /*0x781607*/
  v11 = *(_DWORD *)&v52.m_3[1]; /*0x78160c*/
  v12 = referenceCount; /*0x781610*/
  for ( i = 0; i < 2; ++i ) /*0x781619*/
  {
    v49 = 0; /*0x78161f*/
    if ( v11 <= 0 ) /*0x781623*/
      continue; /*0x781623*/
    do /*0x781bff*/
    {
      *(_DWORD *)&v51.m_3[1] = 0; /*0x78162b*/
      if ( v12 <= 0 ) /*0x78162f*/
        goto LABEL_100; /*0x78162f*/
      v50 = v10; /*0x781638*/
      v53 = v12 - 1; /*0x78163c*/
      while ( 1 ) /*0x7816b0*/
      {
        v15 = *(_DWORD *)&v51.m_3[1]; /*0x7816b0*/
        memset(v58, 0, sizeof(v58)); /*0x7816bf*/
        if ( g_WOL_GameListRender == 1 ) /*0x7816c9*/
        {
          v15 = v53; /*0x7816e1*/
        }
        else if ( g_WOL_GameListRender && *v50 >= 0 && *v50 < v12 ) /*0x7816db*/
        {
          v15 = *v50; /*0x7816dd*/
        }
        if ( v15 >= 0 && v15 < stru_B76AC4.? ) /*0x7816ef*/
          qmemcpy(v58, (const void *)(stru_B76AC4.occupant + 268 * v15), sizeof(v58)); /*0x78170d*/
        if ( *(_DWORD *)&dword_A8B238 != 4 || (v58[8] & 0x800) == 0 && (v58[8] & 0x1000) == 0 ) /*0x78173a*/
        {
          strncpy(Destination, (const char *)&v58[56], 0x80u); /*0x781757*/
          v56 = 0; /*0x781763*/
          v55 = 0; /*0x781767*/
          v54 = 0; /*0x78176b*/
          v44 = 0; /*0x78176f*/
          v45 = 0; /*0x781773*/
          unknown_libname_73(&v38); /*0x781777*/
          ParseStringCommaInts(Destination, &v56, &v55, &v54, &v44, &v45, &v38); /*0x7817a3*/
          v16 = v54 + v58[3] - v44; /*0x7817b9*/
          v17 = v44 || v45; /*0x7817cb*/
          v18 = v58[2] - v17; /*0x7817d4*/
          if ( g_MenuStateFlags ) /*0x7817dd*/
          {
            if ( !v45 || v44 ) /*0x7817e5*/
            {
              if ( i != 1 ) /*0x7817f9*/
                goto LABEL_97; /*0x7817f9*/
            }
            else if ( i ) /*0x7817ed*/
            {
              goto LABEL_97; /*0x7817ed*/
            }
LABEL_67:
            if ( !FilterWOLGameListEntry(v58, v49, v45, v44) ) /*0x781824*/
            {
              swprintf(Buffer, (const size_t)aHsDD, (const wchar_t *const)&v58[13], v16, v18); /*0x781848*/
              v19 = SendMessageA(v46, 0x4C7u, 0xFFFFFFFF, (LPARAM)&v58[13]); /*0x781864*/
              v20 = v19; /*0x78186a*/
              SendMessageA(v46, 0x19Au, v19, v15); /*0x781878*/
              Gadget::InitProperties(&v39); /*0x781882*/
              *(_DWORD *)v39.__pad_0 = 1; /*0x781893*/
              WideString::Reassign((void **)&v39.m_1[3], Buffer); /*0x78189b*/
              WideString::Reassign((void **)&v39.m_5[3], &g_TypeClass_DefaultString); /*0x7818a9*/
              v40 = -1; /*0x7818bb*/
              if ( g_MenuStateFlags ) /*0x7818bf*/
              {
                if ( !v45 || v44 ) /*0x7818cf*/
                  v40 = (int)&off_808080; /*0x7818d7*/
              }
              else if ( v16 == v18 ) /*0x7818df*/
              {
                v40 = (int)&off_808080; /*0x7818e6*/
              }
              v21 = v46; /*0x7818f0*/
              v22 = v20 << 16; /*0x781900*/
              SendMessageA(v46, 0x4A8u, v22 | (unsigned __int16)dword_B77A8C, (LPARAM)&v39); /*0x781917*/
              *(_DWORD *)v39.__pad_0 = 0; /*0x781924*/
              WideString::Reassign((void **)&v39.m_5[3], &g_TypeClass_DefaultString); /*0x781928*/
              *(_DWORD *)v39.__pad_0 = 2; /*0x781931*/
              WideString::Reassign((void **)&v39.m_5[3], &g_TypeClass_DefaultString); /*0x78193e*/
              if ( *(_DWORD *)&dword_A8B238 != 4 ) /*0x78194a*/
                goto LABEL_80; /*0x78194a*/
              if ( (v58[8] & 0x100) != 0 ) /*0x78195c*/
              {
                v41 = HashTable::Find(&g_DialogHashTable, g_Str_File_wolclan_pcx, 0); /*0x78197f*/
                StringCSF = GetStringCSF(aTxtBattleclanG, 0, g_Str_File_wonline_cpp, 3351); /*0x781988*/
                WideString::Reassign((void **)&v39.m_5[3], StringCSF); /*0x781989*/
                goto LABEL_81; /*0x781989*/
              }
              if ( v58[5] || (v58[8] & 0x100) != 0 ) /*0x781996*/
              {
                v41 = HashTable::Find(&g_DialogHashTable, g_Str_File_woltrny_pcx, 0); /*0x7819b9*/
                v35 = GetStringCSF(aTxtTournamentG, 0, g_Str_File_wonline_cpp, 3356); /*0x7819c2*/
                WideString::Reassign((void **)&v39.m_5[3], v35); /*0x7819c3*/
              }
              else
              {
LABEL_80:
                v41 = HashTable::Find(&g_DialogHashTable, g_Str_File_gt18_pcx, 0); /*0x7819d5*/
                WideString::Reassign((void **)&v39.m_5[3], &g_TypeClass_DefaultString); /*0x7819e2*/
              }
LABEL_81:
              SendMessageA(v21, 0x4A8u, v22 | (unsigned __int16)dword_B778D0, (LPARAM)&v39); /*0x7819e7*/
              *(_DWORD *)v39.__pad_0 = 2; /*0x781a07*/
              WideString::Reassign((void **)&v39.m_5[3], &g_TypeClass_DefaultString); /*0x781a14*/
              if ( (v58[7] & 0x100) != 0 ) /*0x781a23*/
              {
                v41 = HashTable::Find(&g_DialogHashTable, g_Str_File_wolpriv_pcx, 0); /*0x781a46*/
                v36 = GetStringCSF(aTxtGamePasswor, 0, g_Str_File_wonline_cpp, 3370); /*0x781a4f*/
                WideString::Reassign((void **)&v39.m_5[3], v36); /*0x781a50*/
              }
              else
              {
                *(_DWORD *)v39.__pad_0 = 0; /*0x781a52*/
                WideString::Reassign((void **)&v39.m_5[3], &g_TypeClass_DefaultString); /*0x781a5f*/
              }
              SendMessageA(v21, 0x4A8u, v22 | (unsigned __int16)dword_B778CC, (LPARAM)&v39); /*0x781a7c*/
              *(_DWORD *)v39.__pad_0 = 0; /*0x781a82*/
              WideString::Reassign((void **)&v39.m_1[3], &g_TypeClass_DefaultString); /*0x781a8b*/
              WideString::Reassign((void **)&v39.m_5[3], &g_TypeClass_DefaultString); /*0x781a99*/
              if ( (v58[8] & 0x600) != 0 ) /*0x781aac*/
              {
                if ( v44 || !v45 ) /*0x781ab6*/
                {
                  *(_DWORD *)v39.__pad_0 = 2; /*0x781ac9*/
                  v23 = HashTable::Find(&g_DialogHashTable, g_Str_File_wolreslk_pcx, 0); /*0x781ad6*/
                }
                else
                {
                  *(_DWORD *)v39.__pad_0 = 2; /*0x781ab9*/
                  v23 = HashTable::Find(&g_DialogHashTable, g_Str_File_wolrslkob_pcx, 0); /*0x781ac6*/
                }
LABEL_92:
                v41 = v23; /*0x781afa*/
              }
              else if ( !v44 && v45 ) /*0x781ae0*/
              {
                *(_DWORD *)v39.__pad_0 = 2; /*0x781ae3*/
                v23 = HashTable::Find(&g_DialogHashTable, g_Str_File_wolob_pcx, 0); /*0x781af5*/
                goto LABEL_92; /*0x781af5*/
              }
              SendMessageA(v21, 0x4A8u, v22 | LOWORD(stru_B76AC4.nextObject), (LPARAM)&v39); /*0x781b18*/
              v24 = (const wchar_t *)v58[10]; /*0x781b1a*/
              if ( v58[10] == -1 ) /*0x781b24*/
              {
                *(_DWORD *)v39.__pad_0 = 1; /*0x781b2f*/
                WideString::Reassign((void **)&v39.m_1[3], asc_84A6E0); /*0x781b37*/
                v24 = (const wchar_t *)v58[10]; /*0x781b3c*/
              }
              else
              {
                v42 = v58[10]; /*0x781b45*/
                *(_DWORD *)v39.__pad_0 = 3; /*0x781b49*/
              }
              v37 = v24; /*0x781b51*/
              v25 = GetStringCSF(aWolGameping, 0, g_Str_File_wonline_cpp, 3410); /*0x781b63*/
              swprintf(Buffer, (const size_t)v25, v37); /*0x781b71*/
              WideString::Reassign((void **)&v39.m_5[3], Buffer); /*0x781b85*/
              SendMessageA(v21, 0x4A8u, v22 | (unsigned __int16)dword_B7643C, (LPARAM)&v39); /*0x781ba2*/
              DeleteAndZero::Alt((DeleteAndZero *)&v39.m_5[3]); /*0x781ba8*/
              DeleteAndZero::Alt((DeleteAndZero *)&v39.m_1[3]); /*0x781bb1*/
            }
          }
          else
          {
            if ( v16 == v18 ) /*0x781806*/
            {
              if ( i != 1 ) /*0x78180b*/
                goto LABEL_97; /*0x78180b*/
              goto LABEL_67; /*0x78180b*/
            }
            if ( !i ) /*0x781814*/
              goto LABEL_67; /*0x781814*/
          }
LABEL_97:
          DeleteAndZero((ObjectClass *)&v38); /*0x781bb6*/
        }
        v26 = ++*(_DWORD *)&v51.m_3[1] < referenceCount; /*0x781bd4*/
        v50 += 2; /*0x781bda*/
        --v53; /*0x781bde*/
        if ( !v26 ) /*0x781be2*/
          break; /*0x781be2*/
        v12 = referenceCount; /*0x7816aa*/
      }
      v11 = *(_DWORD *)&v52.m_3[1]; /*0x781be8*/
      v10 = v48; /*0x781bec*/
      v12 = referenceCount; /*0x781bf0*/
LABEL_100:
      ++v49; /*0x781bf4*/
    }
    while ( v49 < v11 ); /*0x781bff*/
  }
  if ( v10 ) /*0x781c19*/
    __3_YAXPAX_Z(v10); /*0x781c1c*/
  v27 = String::GetOrEmpty_Alt(&v52); /*0x781c28*/
  v28 = v46; /*0x781c2d*/
  v29 = SendMessageA(v46, 0x4C5u, 0, (LPARAM)v27); /*0x781c3f*/
  SendMessageA(v28, 0x186u, v29, 0); /*0x781c49*/
  v30 = String::GetOrEmpty_Alt(&v51); /*0x781c4f*/
  v31 = SendMessageA(v28, 0x4C5u, 0, (LPARAM)v30); /*0x781c5c*/
  if ( v31 != -1 ) /*0x781c61*/
    SendMessageA(v28, 0x197u, v31, 0); /*0x781c6b*/
  SendMessageA(v28, 0x49Du, 0, 0); /*0x781c75*/
  InvalidateRect(v28, 0, 0); /*0x781c7a*/
  if ( v57 == (HWND)Dialog::GetCurrent() ) /*0x781c8d*/
  {
    v32 = GetDlgItem(v57, 1344); /*0x781c95*/
    SetFocus(v32); /*0x781c9c*/
  }
  DeleteAndZero((ObjectClass *)&v51); /*0x781ca6*/
  DeleteAndZero((ObjectClass *)&v52); /*0x781caf*/
}



// ==== 0x00781CC0  sub_781CC0  this=-  sig=ida-proto ====
int __cdecl sub_781CC0(int a1, int a2)
{
  int v2; // eax
  int v3; // eax

  v2 = *(_DWORD *)(a1 + 8); /*0x781cc9*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x781cd2*/
    return _strcmpi(*(const void **)(a1 + 4), *(const void **)(a2 + 4)); /*0x781ce4*/
  v3 = -(v2 != 0); /*0x781cd6*/
  LOBYTE(v3) = v3 & 0xFE; /*0x781cd8*/
  return v3 + 1; /*0x781cd1*/
}



// ==== 0x00781CF0  sub_781CF0  this=-  sig=ida-proto ====
int __cdecl sub_781CF0(const void *a1, char **a2)
{
  char *v2; // eax
  int v3; // eax

  v2 = (char *)*((_DWORD *)a1 + 2); /*0x781cf9*/
  if ( v2 == a2[2] ) /*0x781d02*/
    return _strcmpi(a2[1], *((char **)a1 + 1)); /*0x781d14*/
  v3 = -(v2 != 0); /*0x781d06*/
  LOBYTE(v3) = v3 & 0xFE; /*0x781d08*/
  return v3 + 1; /*0x781d01*/
}



// ==== 0x00781D20  WOLobby::BuildStateList  this=WOLobby  sig=ida-proto ====
void __fastcall WOLobby::BuildStateList(char a1)
{
  signed int v1; // esi
  signed int v2; // ebx
  int *v3; // ebp
  int v4; // eax
  int *v5; // ebp
  char *v6; // edx
  int v7; // edx
  int v8; // eax
  int v9; // esi
  char *v10; // edi
  bool v11; // zf
  void **v12; // edi
  int v14; // [esp+14h] [ebp-84h]
  signed int v15; // [esp+14h] [ebp-84h]
  int v16[2]; // [esp+18h] [ebp-80h] BYREF
  void *Block; // [esp+20h] [ebp-78h]
  signed int v18; // [esp+24h] [ebp-74h]
  int *v19; // [esp+28h] [ebp-70h]
  _DWORD v20[27]; // [esp+2Ch] [ebp-6Ch] BYREF

  v1 = dword_B77900; /*0x781d29*/
  v2 = 0; /*0x781d30*/
  v16[0] = 0; /*0x781d3d*/
  v16[1] = 0; /*0x781d41*/
  Block = 0; /*0x781d45*/
  v18 = dword_B77900; /*0x781d49*/
  v3 = (int *)__2_YAPAXI_Z(12 * dword_B77900); /*0x781d52*/
  v19 = v3; /*0x781d59*/
  if ( v3 ) /*0x781d5d*/
  {
    v4 = 0; /*0x781d80*/
    memset(v20, 0, sizeof(v20)); /*0x781d88*/
    if ( v1 <= 0 ) /*0x781d8a*/
    {
LABEL_12:
      dword_B77900 = 0; /*0x781e34*/
      if ( a1 ) /*0x781e40*/
        qsort(v3, v1, 0xCu, (_CoreCrtNonSecureSearchSortCompareFunction)sub_781CC0); /*0x781e47*/
      else
        qsort(v3, v1, 0xCu, sub_781CF0); /*0x781e72*/
      if ( v1 > 0 ) /*0x781e7c*/
      {
        v7 = dword_B77900; /*0x781e82*/
        v15 = v1; /*0x781e88*/
        do /*0x781f5d*/
        {
          v8 = *v3; /*0x781e90*/
          if ( *v3 >= 0 && v8 < v16[0] ) /*0x781e9b*/
            qmemcpy(v20, (char *)Block + 108 * v8, sizeof(v20)); /*0x781eb3*/
          v9 = v7; /*0x781eb5*/
          if ( v7 >= dword_B77904 ) /*0x781ec1*/
          {
            DynamicArray::Grow(&dword_B77900); /*0x781ec8*/
            v7 = dword_B77900; /*0x781ecd*/
          }
          if ( v7 >= dword_B77904 ) /*0x781ed9*/
          {
            DynamicArray::Grow(&dword_B77900); /*0x781ee0*/
            v7 = dword_B77900; /*0x781ee5*/
          }
          if ( v9 < v7 ) /*0x781eed*/
          {
            memcpy((char *)dword_B77908 + 108 * v9 + 108, (char *)dword_B77908 + 108 * v9, 108 * v7 - 108 * v9); /*0x781f18*/
            v7 = dword_B77900; /*0x781f1d*/
          }
          v10 = (char *)dword_B77908 + 108 * v9; /*0x781f32*/
          if ( v10 ) /*0x781f37*/
          {
            qmemcpy(v10, v20, 0x6Cu); /*0x781f42*/
            v7 = dword_B77900; /*0x781f44*/
          }
          ++v7; /*0x781f4e*/
          v3 += 3; /*0x781f4f*/
          v11 = v15 == 1; /*0x781f52*/
          dword_B77900 = v7; /*0x781f53*/
          --v15; /*0x781f59*/
        }
        while ( !v11 ); /*0x781f5d*/
        v3 = v19; /*0x781f63*/
        v1 = v18; /*0x781f67*/
      }
      v16[0] = 0; /*0x781f6f*/
      if ( v1 > 0 ) /*0x781f73*/
      {
        v12 = (void **)(v3 + 1); /*0x781f75*/
        do /*0x781f8b*/
        {
          if ( *v12 ) /*0x781f78*/
            __3_YAXPAX_Z(*v12); /*0x781f7f*/
          v12 += 3; /*0x781f87*/
          --v1; /*0x781f8a*/
        }
        while ( v1 ); /*0x781f8b*/
      }
      __3_YAXPAX_Z(v3); /*0x781f8e*/
      v16[0] = 0; /*0x781f97*/
      __3_YAXPAX_Z(Block); /*0x781f9c*/
    }
    else
    {
      v14 = 0; /*0x781d90*/
      v5 = v3 + 2; /*0x781d94*/
      while ( 1 ) /*0x781d9d*/
      {
        if ( v4 >= 0 && v2 < (int)dword_B77900 ) /*0x781da7*/
          qmemcpy(v20, (char *)dword_B77908 + v4, sizeof(v20)); /*0x781dbb*/
        *(v5 - 2) = v2; /*0x781dbf*/
        v6 = (char *)__2_YAPAXI_Z(0xAu); /*0x781dc7*/
        *(v5 - 1) = (int)v6; /*0x781dce*/
        if ( !v6 ) /*0x781dd1*/
          break; /*0x781dd1*/
        strcpy(v6, (const char *)&v20[9]); /*0x781deb*/
        *v5 = v20[0] & 1; /*0x781dff*/
        DynamicClass::Insert(v16, v20, v16[0]); /*0x781e0c*/
        ++v2; /*0x781e11*/
        v5 += 3; /*0x781e12*/
        v14 += 108; /*0x781e22*/
        if ( v2 >= v18 ) /*0x781e26*/
        {
          v3 = v19; /*0x781e2c*/
          v1 = v18; /*0x781e30*/
          goto LABEL_12; /*0x781e30*/
        }
        v4 = v14; /*0x781d99*/
      }
      v16[0] = 0; /*0x781e4d*/
      __3_YAXPAX_Z(Block); /*0x781e56*/
    }
  }
  else
  {
    v16[0] = 0; /*0x781d63*/
    __3_YAXPAX_Z(Block); /*0x781d68*/
  }
}



// ==== 0x00781FB0  InsertGameSettings  this=-  sig=csp ====
char __fastcall InsertGameSettings(char *a1, char a2)
{
  char *v2; // ebp
  int owningHouseIndex; // edx
  char result; // al
  int v5; // ebx
  ObjectClass *nextObject; // ebp
  int v7; // ebp
  int v8; // esi
  int v9; // esi
  int v10; // esi
  char *v11; // edi
  int v12; // ebp
  int v13; // ebx
  int v14; // ebx
  int v15; // esi
  int v16; // esi
  int v19; // [esp+18h] [ebp-70h]
  _BYTE v20[108]; // [esp+1Ch] [ebp-6Ch] BYREF

  v2 = a1; /*0x781fb6*/
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x781fbd*/
  memset(v20, 0, sizeof(v20)); /*0x781fce*/
  v19 = g_WOL_UserList.owningHouseIndex; /*0x781fd8*/
  if ( !g_WOL_UserList.owningHouseIndex ) /*0x781fdc*/
    return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, 0); /*0x781ff1*/
  v5 = 0; /*0x781ff2*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x781ff6*/
    qmemcpy(v20, g_WOL_UserList.nextObject, sizeof(v20)); /*0x782007*/
  if ( (v20[0] & 1) != 0 ) /*0x78200e*/
  {
    nextObject = g_WOL_UserList.nextObject; /*0x782010*/
    do /*0x782038*/
    {
      if ( v5 >= g_WOL_UserList.owningHouseIndex ) /*0x782018*/
        break; /*0x782018*/
      ++v5; /*0x78201a*/
      nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x78201b*/
      if ( v5 >= 0 && v5 < g_WOL_UserList.owningHouseIndex ) /*0x782024*/
        qmemcpy(v20, nextObject, sizeof(v20)); /*0x782031*/
    }
    while ( (v20[0] & 1) != 0 ); /*0x782038*/
    v2 = a1; /*0x78203a*/
  }
  if ( (*v2 & 1) != 0 ) /*0x782042*/
  {
    v7 = 0; /*0x782048*/
    if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x78204c*/
      qmemcpy(v20, g_WOL_UserList.nextObject, sizeof(v20)); /*0x78205d*/
    if ( a2 ) /*0x782065*/
    {
      if ( v5 <= 0 ) /*0x782069*/
        goto LABEL_34; /*0x782069*/
      v8 = 0; /*0x78206f*/
      while ( _strcmpi(&v20[36], a1 + 36) < 0 ) /*0x782088*/
      {
        owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x78208a*/
        ++v7; /*0x782090*/
        v8 += 108; /*0x782091*/
        if ( v8 >= 0 && v7 < g_WOL_UserList.owningHouseIndex ) /*0x78209c*/
          qmemcpy(v20, (char *)g_WOL_UserList.nextObject + v8, sizeof(v20)); /*0x7820ae*/
        if ( v7 >= v5 ) /*0x7820b6*/
          goto LABEL_34; /*0x7820b6*/
      }
    }
    else
    {
      if ( v5 <= 0 ) /*0x7820bc*/
        goto LABEL_34; /*0x7820bc*/
      v9 = 0; /*0x7820be*/
      while ( _strcmpi(&v20[36], a1 + 36) > 0 ) /*0x7820d7*/
      {
        owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7820d9*/
        ++v7; /*0x7820df*/
        v9 += 108; /*0x7820e0*/
        if ( v9 >= 0 && v7 < g_WOL_UserList.owningHouseIndex ) /*0x7820eb*/
          qmemcpy(v20, (char *)g_WOL_UserList.nextObject + v9, sizeof(v20)); /*0x7820fd*/
        if ( v7 >= v5 ) /*0x782105*/
          goto LABEL_34; /*0x782105*/
      }
    }
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782109*/
LABEL_34:
    v10 = v7; /*0x78210f*/
    if ( v7 > owningHouseIndex ) /*0x782113*/
      v10 = owningHouseIndex; /*0x782115*/
    if ( v10 >= g_WOL_UserList.fallRate ) /*0x78211d*/
    {
      DynamicArray::Grow((DynamicArray *)&g_WOL_UserList.owningHouseIndex); /*0x782124*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782129*/
    }
    if ( owningHouseIndex >= g_WOL_UserList.fallRate ) /*0x782135*/
    {
      DynamicArray::Grow((DynamicArray *)&g_WOL_UserList.owningHouseIndex); /*0x78213c*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782141*/
    }
    if ( v10 < owningHouseIndex ) /*0x782149*/
    {
      memcpy( /*0x782174*/
        &g_WOL_UserList.nextObject->alignmentPadding69[108 * v10 + 3],
        (char *)g_WOL_UserList.nextObject + 108 * v10,
        108 * owningHouseIndex - 108 * v10);
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782179*/
    }
    result = (char)g_WOL_UserList.nextObject; /*0x782182*/
    v11 = (char *)g_WOL_UserList.nextObject + 108 * v10; /*0x78218d*/
    if ( !v11 ) /*0x782192*/
      goto LABEL_75; /*0x782192*/
    goto LABEL_74; /*0x782192*/
  }
  v12 = v5; /*0x78219f*/
  if ( v5 >= 0 && v5 < g_WOL_UserList.owningHouseIndex ) /*0x7821a5*/
    qmemcpy(v20, (char *)g_WOL_UserList.nextObject + 108 * v5, sizeof(v20)); /*0x7821bf*/
  if ( a2 ) /*0x7821c7*/
  {
    if ( v5 >= g_WOL_UserList.owningHouseIndex ) /*0x7821cb*/
      goto LABEL_65; /*0x7821cb*/
    v13 = 108 * v5; /*0x7821d7*/
    while ( _strcmpi(&v20[36], a1 + 36) < 0 ) /*0x7821f1*/
    {
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7821f3*/
      ++v12; /*0x7821f9*/
      v13 += 108; /*0x7821fa*/
      if ( v13 >= 0 && v12 < g_WOL_UserList.owningHouseIndex ) /*0x782201*/
        qmemcpy(v20, (char *)g_WOL_UserList.nextObject + v13, sizeof(v20)); /*0x782215*/
      if ( v12 >= v19 ) /*0x78221b*/
        goto LABEL_65; /*0x78221b*/
    }
  }
  else
  {
    if ( v5 >= g_WOL_UserList.owningHouseIndex ) /*0x782221*/
      goto LABEL_65; /*0x782221*/
    v14 = 108 * v5; /*0x782229*/
    while ( _strcmpi(&v20[36], a1 + 36) > 0 ) /*0x782243*/
    {
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782245*/
      ++v12; /*0x78224b*/
      v14 += 108; /*0x78224c*/
      if ( v14 >= 0 && v12 < g_WOL_UserList.owningHouseIndex ) /*0x782253*/
        qmemcpy(v20, (char *)g_WOL_UserList.nextObject + v14, sizeof(v20)); /*0x782267*/
      if ( v12 >= v19 ) /*0x78226d*/
        goto LABEL_65; /*0x78226d*/
    }
  }
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782271*/
LABEL_65:
  v15 = v12; /*0x782277*/
  if ( v12 > owningHouseIndex ) /*0x78227b*/
    v15 = owningHouseIndex; /*0x78227d*/
  if ( v15 >= g_WOL_UserList.fallRate ) /*0x782285*/
  {
    DynamicArray::Grow((DynamicArray *)&g_WOL_UserList.owningHouseIndex); /*0x78228c*/
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782291*/
  }
  if ( owningHouseIndex >= g_WOL_UserList.fallRate ) /*0x78229d*/
  {
    DynamicArray::Grow((DynamicArray *)&g_WOL_UserList.owningHouseIndex); /*0x7822a4*/
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7822a9*/
  }
  if ( v15 < owningHouseIndex ) /*0x7822b1*/
  {
    memcpy( /*0x7822dc*/
      &g_WOL_UserList.nextObject->alignmentPadding69[108 * v15 + 3],
      (char *)g_WOL_UserList.nextObject + 108 * v15,
      108 * owningHouseIndex - 108 * v15);
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7822e1*/
  }
  v16 = 3 * v15; /*0x7822f0*/
  result = 9 * v16; /*0x7822f3*/
  v11 = (char *)g_WOL_UserList.nextObject + 36 * v16; /*0x7822f6*/
  if ( !v11 ) /*0x7822fb*/
    goto LABEL_75; /*0x7822fb*/
LABEL_74:
  qmemcpy(v11, a1, 0x6Cu); /*0x7822fd*/
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782308*/
LABEL_75:
  g_WOL_UserList.owningHouseIndex = owningHouseIndex + 1; /*0x78230e*/
  return result; /*0x781fea*/
}



// ==== 0x00782320  InsertBuddyList  this=-  sig=csp ====
int __fastcall InsertBuddyList(const char *a1, char a2)
{
  ObjectClass *nextObject; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // edi
  int v8; // ebx
  int v9; // ebp
  bool v10; // sf
  HashTable *v11; // esi
  int v12; // esi
  const void *v13; // esi
  int v14; // eax
  int v15; // ebx
  int v16; // ebp
  HashTable *v17; // esi
  int v18; // esi
  const void *v19; // esi
  int v20; // ebp
  int v21; // ebx
  HashTable *v22; // esi
  int v23; // esi
  const void *v24; // esi
  HashTable *v25; // esi
  int v26; // edi
  int v27; // esi
  const void *v28; // esi
  int v29; // ebx
  int v30; // ebp
  HashTable *v31; // esi
  int v32; // esi
  const void *v33; // esi
  int v34; // eax
  int v35; // ebp
  HashTable *v36; // esi
  int v37; // esi
  const void *v38; // esi
  int v39; // ebp
  HashTable *v40; // esi
  int v41; // esi
  const void *v42; // esi
  int v43; // esi
  int owningHouseIndex; // ecx
  char *v45; // edi
  _BYTE v47[240]; // [esp+10h] [ebp-F0h] BYREF

  *(_DWORD *)&v47[20] = a1; /*0x782332*/
  unknown_libname_73(v47); /*0x782336*/
  *(_DWORD *)&v47[16] = -1; /*0x782349*/
  memset(&v47[132], 0, 0x6Cu); /*0x782351*/
  String::Assign_Bool((String *)v47, a1 + 36); /*0x78235b*/
  String::ToLower((String *)v47); /*0x782364*/
  if ( g_WOL_HashTable ) /*0x782371*/
  {
    *(_DWORD *)&v47[12] = 0; /*0x78237d*/
    if ( (unsigned __int8)HashTable::LookupString(g_WOL_HashTable, (const char **)v47, &v47[12]) ) /*0x782385*/
    {
      if ( *(_DWORD *)&v47[12] ) /*0x782394*/
        qmemcpy(&v47[132], *(const void **)&v47[12], 0x6Cu); /*0x7823a2*/
      *(_DWORD *)&v47[16] = *(_DWORD *)&v47[160]; /*0x7823ab*/
    }
  }
  memset(&v47[24], 0, 0x6Cu); /*0x7823c0*/
  *(_DWORD *)&v47[12] = g_WOL_UserList.owningHouseIndex; /*0x7823c6*/
  if ( g_WOL_UserList.owningHouseIndex ) /*0x7823ca*/
  {
    *(_DWORD *)&v47[8] = 0; /*0x7823e3*/
    if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7823ed*/
      qmemcpy(&v47[24], g_WOL_UserList.nextObject, 0x6Cu); /*0x7823fa*/
    if ( (v47[24] & 1) != 0 ) /*0x782401*/
    {
      nextObject = g_WOL_UserList.nextObject; /*0x782403*/
      do /*0x782435*/
      {
        v5 = *(_DWORD *)&v47[8]; /*0x782409*/
        if ( *(int *)&v47[8] >= *(int *)&v47[12] ) /*0x78240f*/
          break; /*0x78240f*/
        nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x782413*/
        v6 = ++*(_DWORD *)&v47[8]; /*0x782416*/
        if ( v5 + 1 >= 0 && v6 < g_WOL_UserList.owningHouseIndex ) /*0x782421*/
          qmemcpy(&v47[24], nextObject, 0x6Cu); /*0x78242e*/
      }
      while ( (v47[24] & 1) != 0 ); /*0x782435*/
    }
    if ( (**(_BYTE **)&v47[20] & 1) != 0 ) /*0x78243e*/
    {
      *(_DWORD *)&v47[4] = 0; /*0x782446*/
      if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x78244e*/
        qmemcpy(&v47[24], g_WOL_UserList.nextObject, 0x6Cu); /*0x78245b*/
      String::Assign_Bool((String *)v47, &v47[60]); /*0x782466*/
      String::ToLower((String *)v47); /*0x78246f*/
      v7 = -1; /*0x78247a*/
      if ( g_WOL_HashTable ) /*0x78247f*/
      {
        *(_DWORD *)&v47[12] = 0; /*0x78248b*/
        if ( (unsigned __int8)HashTable::LookupString(g_WOL_HashTable, (const char **)v47, &v47[12]) ) /*0x782493*/
        {
          if ( *(_DWORD *)&v47[12] ) /*0x7824a2*/
            qmemcpy(&v47[132], *(const void **)&v47[12], 0x6Cu); /*0x7824b0*/
          v7 = *(_DWORD *)&v47[160]; /*0x7824b2*/
        }
      }
      if ( a2 ) /*0x7824bf*/
      {
        if ( *(int *)&v47[8] > 0 ) /*0x7824c7*/
        {
          v8 = *(_DWORD *)&v47[4]; /*0x7824cd*/
          v9 = 0; /*0x7824d1*/
          do /*0x782597*/
          {
            if ( v7 >= *(int *)&v47[16] || v7 <= 0 ) /*0x7824db*/
            {
              if ( *(_DWORD *)&v47[16] != -1 || v7 <= 0 ) /*0x7824ea*/
                goto LABEL_69; /*0x7824ea*/
              v8 = *(_DWORD *)&v47[4]; /*0x7824f0*/
            }
            ++v8; /*0x7824f4*/
            v10 = v9 + 108 < 0; /*0x7824f5*/
            v9 += 108; /*0x7824f5*/
            *(_DWORD *)&v47[4] = v8; /*0x7824f8*/
            if ( !v10 && v8 < g_WOL_UserList.owningHouseIndex ) /*0x782504*/
              qmemcpy(&v47[24], (char *)g_WOL_UserList.nextObject + v9, 0x6Cu); /*0x782518*/
            String::Assign_Bool((String *)v47, &v47[60]); /*0x782523*/
            String::ToLower((String *)v47); /*0x78252c*/
            v11 = g_WOL_HashTable; /*0x782531*/
            v7 = -1; /*0x782537*/
            if ( g_WOL_HashTable ) /*0x78253c*/
            {
              if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x78253e*/
              {
                v12 = *(_DWORD *)(*(_DWORD *)v11->__pad_0 /*0x782553*/
                                + 4 * HashMap::ComputeIndex_2((int *)g_WOL_HashTable->__pad_0, (int)v47));
                if ( v12 ) /*0x782558*/
                {
                  while ( !(unsigned __int8)String::Compare((String *)v12, (const char **)v47) ) /*0x782568*/
                  {
                    v12 = *(_DWORD *)(v12 + 112); /*0x78256a*/
                    if ( !v12 ) /*0x78256f*/
                      goto LABEL_45; /*0x78256f*/
                  }
                  v13 = (const void *)(v12 + 4); /*0x782577*/
                  if ( v13 ) /*0x78257c*/
                    qmemcpy(&v47[132], v13, 0x6Cu); /*0x78258a*/
                  v7 = *(_DWORD *)&v47[160]; /*0x78258c*/
                }
              }
            }
LABEL_45:
            ; /*0x782593*/
          }
          while ( v8 < *(int *)&v47[8] ); /*0x782597*/
        }
      }
      else if ( *(int *)&v47[8] > 0 ) /*0x7825a4*/
      {
        v14 = *(_DWORD *)&v47[16]; /*0x7825aa*/
        v15 = *(_DWORD *)&v47[4]; /*0x7825ae*/
        v16 = 0; /*0x7825b2*/
        while ( v7 > v14 && v7 > 0 || v14 == -1 && v7 > 0 ) /*0x7825cd*/
        {
          ++v15; /*0x7825d3*/
          v16 += 108; /*0x7825d4*/
          if ( v16 >= 0 && v15 < g_WOL_UserList.owningHouseIndex ) /*0x7825df*/
            qmemcpy(&v47[24], (char *)g_WOL_UserList.nextObject + v16, 0x6Cu); /*0x7825f2*/
          String::Assign_Bool((String *)v47, &v47[60]); /*0x7825fd*/
          String::ToLower((String *)v47); /*0x782606*/
          v17 = g_WOL_HashTable; /*0x78260b*/
          v7 = -1; /*0x782611*/
          if ( g_WOL_HashTable ) /*0x782616*/
          {
            if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x782618*/
            {
              v18 = *(_DWORD *)(*(_DWORD *)v17->__pad_0 /*0x78262d*/
                              + 4 * HashMap::ComputeIndex_2((int *)g_WOL_HashTable->__pad_0, (int)v47));
              if ( v18 ) /*0x782632*/
              {
                while ( !(unsigned __int8)String::Compare((String *)v18, (const char **)v47) ) /*0x782642*/
                {
                  v18 = *(_DWORD *)(v18 + 112); /*0x782644*/
                  if ( !v18 ) /*0x782649*/
                    goto LABEL_66; /*0x782649*/
                }
                v19 = (const void *)(v18 + 4); /*0x782651*/
                if ( v19 ) /*0x782656*/
                  qmemcpy(&v47[132], v19, 0x6Cu); /*0x782664*/
                v7 = *(_DWORD *)&v47[160]; /*0x782666*/
              }
            }
          }
LABEL_66:
          if ( v15 >= *(int *)&v47[8] ) /*0x782671*/
            goto LABEL_160; /*0x782671*/
          v14 = *(_DWORD *)&v47[16]; /*0x7825b6*/
        }
        *(_DWORD *)&v47[4] = v15; /*0x78267c*/
LABEL_69:
        if ( *(int *)&v47[4] < *(int *)&v47[8] ) /*0x78268a*/
        {
          v20 = 108 * *(_DWORD *)&v47[4]; /*0x782698*/
          do /*0x782768*/
          {
            if ( *(_DWORD *)&v47[16] != v7 || _strcmpi(&v47[60], (char *)(*(_DWORD *)&v47[20] + 36)) >= 0 ) /*0x7826bc*/
              break; /*0x7826bc*/
            v21 = *(_DWORD *)&v47[4] + 1; /*0x7826c6*/
            v10 = v20 + 108 < 0; /*0x7826c7*/
            v20 += 108; /*0x7826c7*/
            ++*(_DWORD *)&v47[4]; /*0x7826ca*/
            if ( !v10 && v21 < g_WOL_UserList.owningHouseIndex ) /*0x7826d6*/
              qmemcpy(&v47[24], (char *)g_WOL_UserList.nextObject + v20, 0x6Cu); /*0x7826e9*/
            String::Assign_Bool((String *)v47, &v47[60]); /*0x7826f4*/
            String::ToLower((String *)v47); /*0x7826fd*/
            v22 = g_WOL_HashTable; /*0x782702*/
            v7 = -1; /*0x782708*/
            if ( g_WOL_HashTable ) /*0x78270d*/
            {
              if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x78270f*/
              {
                v23 = *(_DWORD *)(*(_DWORD *)v22->__pad_0 /*0x782724*/
                                + 4 * HashMap::ComputeIndex_2((int *)g_WOL_HashTable->__pad_0, (int)v47));
                if ( v23 ) /*0x782729*/
                {
                  while ( !(unsigned __int8)String::Compare((String *)v23, (const char **)v47) ) /*0x782739*/
                  {
                    v23 = *(_DWORD *)(v23 + 112); /*0x78273b*/
                    if ( !v23 ) /*0x782740*/
                      goto LABEL_85; /*0x782740*/
                  }
                  v24 = (const void *)(v23 + 4); /*0x782748*/
                  if ( v24 ) /*0x78274d*/
                    qmemcpy(&v47[132], v24, 0x6Cu); /*0x78275b*/
                  v7 = *(_DWORD *)&v47[160]; /*0x78275d*/
                }
              }
            }
LABEL_85:
            ;
          }
          while ( v21 < *(int *)&v47[8] ); /*0x782768*/
        }
      }
    }
    else
    {
      *(_DWORD *)&v47[4] = *(_DWORD *)&v47[8]; /*0x782779*/
      if ( *(int *)&v47[8] >= 0 && *(int *)&v47[8] < g_WOL_UserList.owningHouseIndex ) /*0x782781*/
        qmemcpy(&v47[24], (char *)g_WOL_UserList.nextObject + 108 * *(_DWORD *)&v47[8], 0x6Cu); /*0x782796*/
      String::Assign_Bool((String *)v47, &v47[60]); /*0x7827a1*/
      String::ToLower((String *)v47); /*0x7827aa*/
      v25 = g_WOL_HashTable; /*0x7827af*/
      v26 = -1; /*0x7827b5*/
      if ( g_WOL_HashTable ) /*0x7827ba*/
      {
        if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x7827bc*/
        {
          v27 = *(_DWORD *)(*(_DWORD *)v25->__pad_0 /*0x7827d1*/
                          + 4 * HashMap::ComputeIndex_2((int *)g_WOL_HashTable->__pad_0, (int)v47));
          if ( v27 ) /*0x7827d6*/
          {
            while ( !(unsigned __int8)String::Compare((String *)v27, (const char **)v47) ) /*0x7827e6*/
            {
              v27 = *(_DWORD *)(v27 + 112); /*0x7827e8*/
              if ( !v27 ) /*0x7827ed*/
                goto LABEL_99; /*0x7827ed*/
            }
            v28 = (const void *)(v27 + 4); /*0x7827f5*/
            if ( v28 ) /*0x7827fa*/
              qmemcpy(&v47[132], v28, 0x6Cu); /*0x782808*/
            v26 = *(_DWORD *)&v47[160]; /*0x78280a*/
          }
        }
      }
LABEL_99:
      if ( a2 ) /*0x78281b*/
      {
        if ( *(int *)&v47[8] < *(int *)&v47[12] ) /*0x782823*/
        {
          v29 = *(_DWORD *)&v47[4]; /*0x78282b*/
          v30 = 108 * *(_DWORD *)&v47[8]; /*0x782835*/
          do /*0x7828fc*/
          {
            if ( v26 >= *(int *)&v47[16] || v26 <= 0 ) /*0x782840*/
            {
              if ( *(_DWORD *)&v47[16] != -1 || v26 <= 0 ) /*0x78284f*/
                goto LABEL_143; /*0x78284f*/
              v29 = *(_DWORD *)&v47[4]; /*0x782855*/
            }
            ++v29; /*0x782859*/
            v10 = v30 + 108 < 0; /*0x78285a*/
            v30 += 108; /*0x78285a*/
            *(_DWORD *)&v47[4] = v29; /*0x78285d*/
            if ( !v10 && v29 < g_WOL_UserList.owningHouseIndex ) /*0x782869*/
              qmemcpy(&v47[24], (char *)g_WOL_UserList.nextObject + v30, 0x6Cu); /*0x78287d*/
            String::Assign_Bool((String *)v47, &v47[60]); /*0x782888*/
            String::ToLower((String *)v47); /*0x782891*/
            v31 = g_WOL_HashTable; /*0x782896*/
            v26 = -1; /*0x78289c*/
            if ( g_WOL_HashTable ) /*0x7828a1*/
            {
              if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x7828a3*/
              {
                v32 = *(_DWORD *)(*(_DWORD *)v31->__pad_0 /*0x7828b8*/
                                + 4 * HashMap::ComputeIndex_2((int *)g_WOL_HashTable->__pad_0, (int)v47));
                if ( v32 ) /*0x7828bd*/
                {
                  while ( !(unsigned __int8)String::Compare((String *)v32, (const char **)v47) ) /*0x7828cd*/
                  {
                    v32 = *(_DWORD *)(v32 + 112); /*0x7828cf*/
                    if ( !v32 ) /*0x7828d4*/
                      goto LABEL_119; /*0x7828d4*/
                  }
                  v33 = (const void *)(v32 + 4); /*0x7828dc*/
                  if ( v33 ) /*0x7828e1*/
                    qmemcpy(&v47[132], v33, 0x6Cu); /*0x7828ef*/
                  v26 = *(_DWORD *)&v47[160]; /*0x7828f1*/
                }
              }
            }
LABEL_119:
            ; /*0x7828f8*/
          }
          while ( v29 < *(int *)&v47[12] ); /*0x7828fc*/
        }
      }
      else if ( *(int *)&v47[8] < *(int *)&v47[12] ) /*0x782909*/
      {
        v15 = *(_DWORD *)&v47[4]; /*0x782913*/
        v34 = *(_DWORD *)&v47[16]; /*0x78291d*/
        v35 = 108 * *(_DWORD *)&v47[8]; /*0x782921*/
        while ( v26 > v34 && v26 > 0 || v34 == -1 && v26 > 0 ) /*0x78293d*/
        {
          ++v15; /*0x782943*/
          v35 += 108; /*0x782944*/
          if ( v35 >= 0 && v15 < g_WOL_UserList.owningHouseIndex ) /*0x78294f*/
            qmemcpy(&v47[24], (char *)g_WOL_UserList.nextObject + v35, 0x6Cu); /*0x782963*/
          String::Assign_Bool((String *)v47, &v47[60]); /*0x78296e*/
          String::ToLower((String *)v47); /*0x782977*/
          v36 = g_WOL_HashTable; /*0x78297c*/
          v26 = -1; /*0x782982*/
          if ( g_WOL_HashTable ) /*0x782987*/
          {
            if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x782989*/
            {
              v37 = *(_DWORD *)(*(_DWORD *)v36->__pad_0 /*0x7829a6*/
                              + 4
                              * (((int (__thiscall *)(_BYTE *))g_WOL_HashTable->HashTable_field_0x18)(v47)
                               & ((1 << v36->HashTable_field_0x0C) - 1)));
              if ( v37 ) /*0x7829ab*/
              {
                while ( !(unsigned __int8)String::Compare((String *)v37, (const char **)v47) ) /*0x7829bb*/
                {
                  v37 = *(_DWORD *)(v37 + 112); /*0x7829bd*/
                  if ( !v37 ) /*0x7829c2*/
                    goto LABEL_140; /*0x7829c2*/
                }
                v38 = (const void *)(v37 + 4); /*0x7829ca*/
                if ( v38 ) /*0x7829cf*/
                  qmemcpy(&v47[132], v38, 0x6Cu); /*0x7829dd*/
                v26 = *(_DWORD *)&v47[160]; /*0x7829df*/
              }
            }
          }
LABEL_140:
          if ( v15 >= *(int *)&v47[12] ) /*0x7829ea*/
            goto LABEL_160; /*0x7829ea*/
          v34 = *(_DWORD *)&v47[16]; /*0x782926*/
        }
        *(_DWORD *)&v47[4] = v15; /*0x7829f5*/
LABEL_143:
        v15 = *(_DWORD *)&v47[4]; /*0x7829f9*/
        if ( *(int *)&v47[4] < *(int *)&v47[12] ) /*0x782a03*/
        {
          v39 = 108 * *(_DWORD *)&v47[4]; /*0x782a0f*/
          do /*0x782ae0*/
          {
            if ( *(_DWORD *)&v47[16] != v26 || _strcmpi(&v47[60], (char *)(*(_DWORD *)&v47[20] + 36)) >= 0 ) /*0x782a33*/
              break; /*0x782a33*/
            ++v15; /*0x782a39*/
            v39 += 108; /*0x782a3a*/
            if ( v39 >= 0 && v15 < g_WOL_UserList.owningHouseIndex ) /*0x782a45*/
              qmemcpy(&v47[24], (char *)g_WOL_UserList.nextObject + v39, 0x6Cu); /*0x782a59*/
            String::Assign_Bool((String *)v47, &v47[60]); /*0x782a64*/
            String::ToLower((String *)v47); /*0x782a6d*/
            v40 = g_WOL_HashTable; /*0x782a72*/
            v26 = -1; /*0x782a78*/
            if ( g_WOL_HashTable ) /*0x782a7d*/
            {
              if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x782a7f*/
              {
                v41 = *(_DWORD *)(*(_DWORD *)v40->__pad_0 /*0x782a9c*/
                                + 4
                                * (((int (__thiscall *)(_BYTE *))g_WOL_HashTable->HashTable_field_0x18)(v47)
                                 & ((1 << v40->HashTable_field_0x0C) - 1)));
                if ( v41 ) /*0x782aa1*/
                {
                  while ( !(unsigned __int8)String::Compare((String *)v41, (const char **)v47) ) /*0x782ab1*/
                  {
                    v41 = *(_DWORD *)(v41 + 112); /*0x782ab3*/
                    if ( !v41 ) /*0x782ab8*/
                      goto LABEL_159; /*0x782ab8*/
                  }
                  v42 = (const void *)(v41 + 4); /*0x782ac0*/
                  if ( v42 ) /*0x782ac5*/
                    qmemcpy(&v47[132], v42, 0x6Cu); /*0x782ad3*/
                  v26 = *(_DWORD *)&v47[160]; /*0x782ad5*/
                }
              }
            }
LABEL_159:
            ;
          }
          while ( v15 < *(int *)&v47[12] ); /*0x782ae0*/
LABEL_160:
          *(_DWORD *)&v47[4] = v15; /*0x782ae6*/
        }
      }
    }
    v43 = *(_DWORD *)&v47[4]; /*0x782aea*/
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782aee*/
    if ( *(int *)&v47[4] > g_WOL_UserList.owningHouseIndex ) /*0x782af6*/
      v43 = g_WOL_UserList.owningHouseIndex; /*0x782af8*/
    if ( v43 >= g_WOL_UserList.fallRate ) /*0x782b00*/
    {
      DynamicArray::Grow((DynamicArray *)&g_WOL_UserList.owningHouseIndex); /*0x782b07*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782b0c*/
    }
    if ( owningHouseIndex >= g_WOL_UserList.fallRate ) /*0x782b18*/
    {
      DynamicArray::Grow((DynamicArray *)&g_WOL_UserList.owningHouseIndex); /*0x782b1f*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782b24*/
    }
    if ( v43 < owningHouseIndex ) /*0x782b2c*/
    {
      memcpy( /*0x782b57*/
        &g_WOL_UserList.nextObject->alignmentPadding69[108 * v43 + 3],
        (char *)g_WOL_UserList.nextObject + 108 * v43,
        108 * owningHouseIndex - 108 * v43);
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782b5c*/
    }
    v45 = (char *)g_WOL_UserList.nextObject + 108 * v43; /*0x782b70*/
    if ( v45 ) /*0x782b75*/
    {
      qmemcpy(v45, *(const void **)&v47[20], 0x6Cu); /*0x782b80*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782b82*/
    }
    g_WOL_UserList.owningHouseIndex = owningHouseIndex + 1; /*0x782b89*/
  }
  else
  {
    DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, 0); /*0x7823d3*/
  }
  return DeleteAndZero((ObjectClass *)v47); /*0x782b98*/
}



// ==== 0x00782BB0  FindBuddyList  this=-  sig=ida-proto ====
char __fastcall FindBuddyList(_BYTE *a1, char a2)
{
  ObjectClass *nextObject; // eax
  int v4; // ebp
  int v5; // ebx
  unsigned int v6; // kr04_4
  unsigned int v7; // kr08_4
  int v8; // ecx
  bool v9; // sf
  int v10; // ebx
  unsigned int v11; // kr0C_4
  unsigned int v12; // kr10_4
  int v13; // ecx
  int v14; // ebx
  unsigned int v15; // kr14_4
  unsigned int v16; // kr18_4
  int v17; // ecx
  int v18; // ebx
  unsigned int v19; // kr1C_4
  unsigned int v20; // kr20_4
  int v21; // ecx
  int v22; // ebx
  unsigned int v23; // kr24_4
  unsigned int v24; // kr28_4
  int v25; // ebp
  int v26; // ebx
  unsigned int v27; // kr2C_4
  unsigned int v28; // kr30_4
  int v29; // [esp+Ch] [ebp-78h]
  int owningHouseIndex; // [esp+14h] [ebp-70h]
  _BYTE v32[108]; // [esp+18h] [ebp-6Ch] BYREF

  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782bd2*/
  memset(v32, 0, sizeof(v32)); /*0x782bd6*/
  if ( !g_WOL_UserList.owningHouseIndex ) /*0x782bd8*/
    return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, 0); /*0x782beb*/
  nextObject = g_WOL_UserList.nextObject; /*0x782bec*/
  v4 = 0; /*0x782bf2*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x782bf7*/
    qmemcpy(v32, g_WOL_UserList.nextObject, sizeof(v32)); /*0x782c04*/
  while ( (v32[0] & 1) != 0 ) /*0x782c0b*/
  {
    if ( v4 >= g_WOL_UserList.owningHouseIndex ) /*0x782c0f*/
      break; /*0x782c0f*/
    ++v4; /*0x782c11*/
    nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x782c12*/
    if ( v4 >= 0 && v4 < g_WOL_UserList.owningHouseIndex ) /*0x782c1b*/
      qmemcpy(v32, nextObject, sizeof(v32)); /*0x782c28*/
  }
  if ( (*a1 & 1) == 0 ) /*0x782c38*/
  {
    v29 = v4; /*0x782e3d*/
    if ( v4 >= 0 && v4 < g_WOL_UserList.owningHouseIndex ) /*0x782e45*/
      qmemcpy(v32, (char *)g_WOL_UserList.nextObject + 108 * v4, sizeof(v32)); /*0x782e60*/
    if ( a2 ) /*0x782e68*/
    {
      if ( v4 >= g_WOL_UserList.owningHouseIndex ) /*0x782e70*/
        return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782e70*/
      v18 = 108 * v4; /*0x782e7d*/
      while ( 1 ) /*0x782e89*/
      {
        v19 = strlen(&v32[87]) + 1; /*0x782e89*/
        v20 = strlen(a1 + 87) + 1; /*0x782e9e*/
        if ( v19 == 1 ) /*0x782ea5*/
          break; /*0x782ea5*/
        if ( v20 == 1 ) /*0x782ead*/
        {
          if ( (int)(v19 - 1) <= 0 ) /*0x782f08*/
            break; /*0x782f08*/
        }
        else if ( _strcmpi(&v32[87], a1 + 87) >= 0 ) /*0x782ebf*/
        {
          break; /*0x782ebf*/
        }
        v21 = v29 + 1; /*0x782ec9*/
        v9 = v18 + 108 < 0; /*0x782eca*/
        v18 += 108; /*0x782eca*/
        ++v29; /*0x782ecd*/
        if ( !v9 && v21 < g_WOL_UserList.owningHouseIndex ) /*0x782edc*/
          qmemcpy(v32, (char *)g_WOL_UserList.nextObject + v18, sizeof(v32)); /*0x782eef*/
        if ( v29 >= owningHouseIndex ) /*0x782efb*/
          return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782efb*/
      }
    }
    else
    {
      if ( v4 >= g_WOL_UserList.owningHouseIndex ) /*0x782f12*/
        return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782f12*/
      v22 = 108 * v4; /*0x782f23*/
      while ( 1 ) /*0x782f2f*/
      {
        v23 = strlen(&v32[87]) + 1; /*0x782f2f*/
        v24 = strlen(a1 + 87) + 1; /*0x782f44*/
        if ( v23 == 1 ) /*0x782f4b*/
          break; /*0x782f4b*/
        if ( v24 == 1 ) /*0x782f4f*/
        {
          if ( (int)(v23 - 1) <= 0 ) /*0x782f97*/
            break; /*0x782f97*/
        }
        else if ( _strcmpi(a1 + 87, &v32[87]) >= 0 ) /*0x782f61*/
        {
          break; /*0x782f61*/
        }
        ++v4; /*0x782f63*/
        v9 = v22 + 108 < 0; /*0x782f64*/
        v22 += 108; /*0x782f64*/
        v29 = v4; /*0x782f67*/
        if ( !v9 && v4 < g_WOL_UserList.owningHouseIndex ) /*0x782f73*/
          qmemcpy(v32, (char *)g_WOL_UserList.nextObject + v22, sizeof(v32)); /*0x782f87*/
        if ( v4 >= owningHouseIndex ) /*0x782f8d*/
          return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782f8d*/
      }
    }
    v25 = v29; /*0x782f9b*/
    if ( v29 >= owningHouseIndex ) /*0x782fa5*/
      return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782fa5*/
    v26 = 108 * v29; /*0x782fb2*/
    while ( 1 ) /*0x782fbe*/
    {
      v27 = strlen(&v32[87]) + 1; /*0x782fbe*/
      v28 = strlen(a1 + 87) + 1; /*0x782fd3*/
      if ( v27 == 1 ) /*0x782fda*/
        goto LABEL_91; /*0x782fda*/
      if ( v28 == 1 ) /*0x782fde*/
        break; /*0x782fde*/
      if ( _strcmpi(a1 + 87, &v32[87]) ) /*0x782fe6*/
        return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782ff0*/
LABEL_84:
      if ( _strcmpi(&v32[36], a1 + 36) < 0 ) /*0x783009*/
      {
        ++v25; /*0x78300b*/
        v9 = v26 + 108 < 0; /*0x78300c*/
        v26 += 108; /*0x78300c*/
        v29 = v25; /*0x78300f*/
        if ( !v9 && v25 < g_WOL_UserList.owningHouseIndex ) /*0x78301b*/
          qmemcpy(v32, (char *)g_WOL_UserList.nextObject + v26, sizeof(v32)); /*0x78302f*/
        if ( v25 < owningHouseIndex ) /*0x783035*/
          continue; /*0x783035*/
      }
      return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x783035*/
    }
    if ( (int)(v27 - 1) > 0 ) /*0x783059*/
      return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x783059*/
LABEL_91:
    if ( (int)(v28 - 1) > 0 ) /*0x78305d*/
      return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x78305d*/
    goto LABEL_84; /*0x78305d*/
  }
  v29 = 0; /*0x782c40*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x782c48*/
    qmemcpy(v32, g_WOL_UserList.nextObject, sizeof(v32)); /*0x782c59*/
  if ( a2 ) /*0x782c61*/
  {
    if ( v4 <= 0 ) /*0x782c69*/
      return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782c69*/
    v5 = 0; /*0x782c6f*/
    while ( 1 ) /*0x782c7a*/
    {
      v6 = strlen(&v32[87]) + 1; /*0x782c7a*/
      v7 = strlen(a1 + 87) + 1; /*0x782c8d*/
      if ( v6 == 1 ) /*0x782c94*/
        break; /*0x782c94*/
      if ( v7 == 1 ) /*0x782c9c*/
      {
        if ( (int)(v6 - 1) <= 0 ) /*0x782cf0*/
          break; /*0x782cf0*/
      }
      else if ( _strcmpi(&v32[87], a1 + 87) >= 0 ) /*0x782cae*/
      {
        break; /*0x782cae*/
      }
      v8 = v29 + 1; /*0x782cb8*/
      v9 = v5 + 108 < 0; /*0x782cb9*/
      v5 += 108; /*0x782cb9*/
      ++v29; /*0x782cbc*/
      if ( !v9 && v8 < g_WOL_UserList.owningHouseIndex ) /*0x782ccc*/
        qmemcpy(v32, (char *)g_WOL_UserList.nextObject + v5, sizeof(v32)); /*0x782ce0*/
      if ( v29 >= v4 ) /*0x782ce6*/
        return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782ce6*/
    }
  }
  else
  {
    if ( v4 <= 0 ) /*0x782cfa*/
      return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782cfa*/
    v10 = 0; /*0x782d00*/
    while ( 1 ) /*0x782d0b*/
    {
      v11 = strlen(&v32[87]) + 1; /*0x782d0b*/
      v12 = strlen(a1 + 87) + 1; /*0x782d20*/
      if ( v11 == 1 ) /*0x782d27*/
        break; /*0x782d27*/
      if ( v12 == 1 ) /*0x782d2b*/
      {
        if ( (int)(v11 - 1) <= 0 ) /*0x782d79*/
          break; /*0x782d79*/
      }
      else if ( _strcmpi(a1 + 87, &v32[87]) >= 0 ) /*0x782d3d*/
      {
        break; /*0x782d3d*/
      }
      v13 = v29 + 1; /*0x782d43*/
      v9 = v10 + 108 < 0; /*0x782d44*/
      v10 += 108; /*0x782d44*/
      ++v29; /*0x782d47*/
      if ( !v9 && v13 < g_WOL_UserList.owningHouseIndex ) /*0x782d56*/
        qmemcpy(v32, (char *)g_WOL_UserList.nextObject + v10, sizeof(v32)); /*0x782d69*/
      if ( v29 >= v4 ) /*0x782d6f*/
        return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782d6f*/
    }
  }
  if ( v29 < v4 ) /*0x782d83*/
  {
    v14 = 108 * v29; /*0x782d8f*/
    while ( 1 ) /*0x782d9b*/
    {
      v15 = strlen(&v32[87]) + 1; /*0x782d9b*/
      v16 = strlen(a1 + 87) + 1; /*0x782dae*/
      if ( v15 == 1 ) /*0x782db5*/
        goto LABEL_50; /*0x782db5*/
      if ( v16 == 1 ) /*0x782db9*/
        break; /*0x782db9*/
      if ( _strcmpi(a1 + 87, &v32[87]) ) /*0x782dc1*/
        return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782dcb*/
LABEL_43:
      if ( _strcmpi(&v32[36], a1 + 36) < 0 ) /*0x782de8*/
      {
        v17 = v29 + 1; /*0x782df2*/
        v9 = v14 + 108 < 0; /*0x782df3*/
        v14 += 108; /*0x782df3*/
        ++v29; /*0x782df6*/
        if ( !v9 && v17 < g_WOL_UserList.owningHouseIndex ) /*0x782e05*/
          qmemcpy(v32, (char *)g_WOL_UserList.nextObject + v14, sizeof(v32)); /*0x782e18*/
        if ( v29 < v4 ) /*0x782e1e*/
          continue; /*0x782e1e*/
      }
      return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782e1e*/
    }
    if ( (int)(v15 - 1) > 0 ) /*0x782e2b*/
      return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782e2b*/
LABEL_50:
    if ( (int)(v16 - 1) > 0 ) /*0x782e33*/
      return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782e33*/
    goto LABEL_43; /*0x782e33*/
  }
  return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782be6*/
}



// ==== 0x007830C0  sub_7830C0  this=-  sig=ida-proto ====
int __cdecl sub_7830C0(signed int *a1, signed int *a2)
{
  signed int v2; // eax
  int v3; // eax
  signed int v5; // eax
  signed int v6; // ecx
  int v7; // eax
  signed int v8; // eax
  signed int v9; // eax
  _BYTE v10[108]; // [esp+4h] [ebp-D8h] BYREF
  _BYTE v11[108]; // [esp+70h] [ebp-6Ch] BYREF

  v2 = a1[2]; /*0x7830ca*/
  if ( v2 == a2[2] )
  {
    v5 = a1[1]; /*0x7830e9*/
    v6 = a2[1]; /*0x7830ec*/
    if ( v5 >= v6 )
    {
      if ( v5 <= v6 )
      {
        memset(v11, 0, sizeof(v11)); /*0x783126*/
        memset(v10, 0, sizeof(v10)); /*0x783137*/
        v8 = *a1; /*0x783139*/
        if ( *a1 >= 0 && v8 < (int)dword_B77900 ) /*0x783147*/
          qmemcpy(v11, (char *)dword_B77908 + 108 * v8, sizeof(v11)); /*0x78315b*/
        v9 = *a2; /*0x78315d*/
        if ( *a2 >= 0 && v9 < (int)dword_B77900 ) /*0x783165*/
          qmemcpy(v10, (char *)dword_B77908 + 108 * v9, sizeof(v10)); /*0x783179*/
        return _strcmpi(&v11[36], &v10[36]); /*0x783188*/
      }
      else
      {
        return v6 != -1 ? 1 : -1;
      }
    }
    else
    {
      v7 = -(v5 != -1); /*0x7830f7*/
      LOBYTE(v7) = v7 & 0xFE; /*0x7830f9*/
      return v7 + 1; /*0x7830fb*/
    }
  }
  else
  {
    v3 = -(v2 != 0); /*0x7830dc*/
    LOBYTE(v3) = v3 & 0xFE; /*0x7830df*/
    return v3 + 1; /*0x7830e1*/
  }
}



// ==== 0x007831A0  sub_7831A0  this=-  sig=ida-proto ====
int __cdecl sub_7831A0(signed int *a1, signed int *a2)
{
  signed int v2; // eax
  int v3; // eax
  signed int v5; // eax
  signed int v6; // ecx
  signed int v7; // eax
  signed int v8; // eax
  char v9[108]; // [esp+4h] [ebp-D8h] BYREF
  char v10[108]; // [esp+70h] [ebp-6Ch] BYREF

  v2 = a1[2]; /*0x7831aa*/
  if ( v2 == a2[2] ) /*0x7831b8*/
  {
    v5 = a1[1]; /*0x7831c9*/
    v6 = a2[1]; /*0x7831cc*/
    if ( v5 <= v6 ) /*0x7831d1*/
    {
      if ( v5 >= v6 ) /*0x7831de*/
      {
        memset(v10, 0, sizeof(v10)); /*0x7831fb*/
        memset(v9, 0, sizeof(v9)); /*0x78320c*/
        v7 = *a1; /*0x78320e*/
        if ( *a1 >= 0 && v7 < (int)dword_B77900 ) /*0x78321c*/
          qmemcpy(v10, (char *)dword_B77908 + 108 * v7, sizeof(v10)); /*0x783230*/
        v8 = *a2; /*0x783232*/
        if ( *a2 >= 0 && v8 < (int)dword_B77900 ) /*0x78323a*/
          qmemcpy(v9, (char *)dword_B77908 + 108 * v8, sizeof(v9)); /*0x78324e*/
        return _strcmpi(&v10[36], &v9[36]); /*0x78325d*/
      }
      else
      {
        return 1; /*0x7831e0*/
      }
    }
    else
    {
      return -1; /*0x7831d3*/
    }
  }
  else
  {
    v3 = -(v2 != 0); /*0x7831bc*/
    LOBYTE(v3) = v3 & 0xFE; /*0x7831bf*/
    return v3 + 1; /*0x7831c1*/
  }
}



// ==== 0x00783270  SortWOLPlayerList  this=-  sig=ida-proto ====
void __fastcall SortWOLPlayerList(char a1)
{
  signed int v1; // esi
  signed int v2; // ebx
  _DWORD *v3; // ebp
  int v4; // eax
  _DWORD *v5; // ebp
  int v6; // edx
  int *v7; // ebp
  int v8; // eax
  int v9; // esi
  char *v10; // edi
  bool v11; // zf
  size_t v13; // [esp+10h] [ebp-F8h]
  signed int v14; // [esp+10h] [ebp-F8h]
  void *v15; // [esp+14h] [ebp-F4h] BYREF
  int v16; // [esp+18h] [ebp-F0h]
  int v17[2]; // [esp+1Ch] [ebp-ECh] BYREF
  void *Block; // [esp+24h] [ebp-E4h]
  void *v19; // [esp+28h] [ebp-E0h]
  const void *v20; // [esp+2Ch] [ebp-DCh] BYREF
  _DWORD v21[27]; // [esp+30h] [ebp-D8h] BYREF
  _DWORD v22[27]; // [esp+9Ch] [ebp-6Ch] BYREF

  v1 = dword_B77900; /*0x783279*/
  v2 = 0; /*0x78327f*/
  v17[0] = 0; /*0x783288*/
  v17[1] = 0; /*0x783290*/
  Block = 0; /*0x783294*/
  v13 = dword_B77900; /*0x783298*/
  v3 = __2_YAPAXI_Z(12 * dword_B77900); /*0x7832a1*/
  v19 = v3; /*0x7832a8*/
  if ( v3 ) /*0x7832ac*/
  {
    v4 = 0; /*0x7832cf*/
    memset(v21, 0, sizeof(v21)); /*0x7832d7*/
    if ( v1 > 0 ) /*0x7832d9*/
    {
      v16 = 0; /*0x7832df*/
      v5 = v3 + 1; /*0x7832e3*/
      while ( 1 ) /*0x7832ec*/
      {
        if ( v4 >= 0 && v2 < (int)dword_B77900 ) /*0x7832f6*/
        {
          qmemcpy(v21, (char *)dword_B77908 + v4, sizeof(v21)); /*0x78330a*/
          v1 = v13; /*0x78330c*/
        }
        *(v5 - 1) = v2; /*0x783310*/
        *v5 = -1; /*0x783317*/
        unknown_libname_73(&v15); /*0x78331e*/
        memset(v22, 0, sizeof(v22)); /*0x783331*/
        String::Assign_Bool(&v15, (const char *)&v21[9]); /*0x78333c*/
        String::ToLower((const char **)&v15); /*0x783345*/
        if ( g_WOL_HashTable ) /*0x783352*/
        {
          v20 = 0; /*0x78335e*/
          if ( HashTable::LookupString((_DWORD *)g_WOL_HashTable, (const char **)&v15, &v20) ) /*0x783366*/
          {
            if ( v20 ) /*0x783375*/
            {
              qmemcpy(v22, v20, sizeof(v22)); /*0x783385*/
              v1 = v13; /*0x783387*/
            }
            *v5 = v22[7]; /*0x783392*/
          }
        }
        v5[1] = v21[0] & 1; /*0x7833a0*/
        DynamicClass::Insert(v17, v21, v17[0]); /*0x7833ad*/
        DeleteAndZero(&v15); /*0x7833b6*/
        ++v2; /*0x7833bf*/
        v5 += 3; /*0x7833c3*/
        v16 += 108; /*0x7833c8*/
        if ( v2 >= v1 ) /*0x7833cc*/
          break; /*0x7833cc*/
        v4 = v16; /*0x7832e8*/
      }
      v3 = v19; /*0x7833d2*/
    }
    if ( a1 ) /*0x7833de*/
      qsort(v3, v1, 0xCu, (_CoreCrtNonSecureSearchSortCompareFunction)sub_7830C0); /*0x7833e5*/
    else
      qsort(v3, v1, 0xCu, sub_7831A0); /*0x7833f0*/
    v6 = 0; /*0x7833f8*/
    dword_B77900 = 0; /*0x7833fc*/
    if ( v1 > 0 ) /*0x783402*/
    {
      v7 = (int *)v19; /*0x783408*/
      v14 = v1; /*0x78340c*/
      do /*0x7834e1*/
      {
        v8 = *v7; /*0x783414*/
        if ( *v7 >= 0 && v8 < v17[0] ) /*0x78341f*/
          qmemcpy(v21, (char *)Block + 108 * v8, sizeof(v21)); /*0x783437*/
        v9 = v6; /*0x783439*/
        if ( v6 >= dword_B77904 ) /*0x783445*/
        {
          DynamicArray::Grow(&dword_B77900); /*0x78344c*/
          v6 = dword_B77900; /*0x783451*/
        }
        if ( v6 >= dword_B77904 ) /*0x78345d*/
        {
          DynamicArray::Grow(&dword_B77900); /*0x783464*/
          v6 = dword_B77900; /*0x783469*/
        }
        if ( v9 < v6 ) /*0x783471*/
        {
          memcpy((char *)dword_B77908 + 108 * v9 + 108, (char *)dword_B77908 + 108 * v9, 108 * v6 - 108 * v9); /*0x78349c*/
          v6 = dword_B77900; /*0x7834a1*/
        }
        v10 = (char *)dword_B77908 + 108 * v9; /*0x7834b6*/
        if ( v10 ) /*0x7834bb*/
        {
          qmemcpy(v10, v21, 0x6Cu); /*0x7834c6*/
          v6 = dword_B77900; /*0x7834c8*/
        }
        ++v6; /*0x7834d2*/
        v7 += 3; /*0x7834d3*/
        v11 = v14 == 1; /*0x7834d6*/
        dword_B77900 = v6; /*0x7834d7*/
        --v14; /*0x7834dd*/
      }
      while ( !v11 ); /*0x7834e1*/
    }
    v17[0] = 0; /*0x7834ed*/
    __3_YAXPAX_Z(v19); /*0x7834f2*/
    v17[0] = 0; /*0x7834fb*/
    __3_YAXPAX_Z(Block); /*0x783500*/
  }
  else
  {
    v17[0] = 0; /*0x7832b2*/
    __3_YAXPAX_Z(Block); /*0x7832b7*/
  }
}



// ==== 0x00783520  sub_783520  this=-  sig=ida-proto ====
int __cdecl sub_783520(const char *a1, const char *a2)
{
  unsigned int v2; // kr04_4
  unsigned int v3; // kr08_4

  v2 = strlen(a1) + 1; /*0x783532*/
  v3 = strlen(a2) + 1; /*0x78353e*/
  if ( v2 == 1 ) /*0x783545*/
    return (int)(v3 - 1) > 0; /*0x783545*/
  if ( v3 != 1 ) /*0x783549*/
    return _strcmpi(a1, a2); /*0x783558*/
  if ( (int)(v2 - 1) <= 0 ) /*0x78355b*/
    return (int)(v3 - 1) > 0; /*0x78356b*/
  else
    return -1; /*0x78355f*/
}



// ==== 0x00783570  sub_783570  this=-  sig=ida-proto ====
int __cdecl sub_783570(const char *a1, const char *a2)
{
  unsigned int v2; // kr04_4
  unsigned int v3; // kr08_4

  v2 = strlen(a1) + 1; /*0x783582*/
  v3 = strlen(a2) + 1; /*0x78358e*/
  if ( v2 == 1 ) /*0x783595*/
    return (int)(v3 - 1) > 0; /*0x783595*/
  if ( v3 != 1 ) /*0x783599*/
    return _strcmpi(a2, a1); /*0x7835a8*/
  if ( (int)(v2 - 1) <= 0 ) /*0x7835ab*/
    return (int)(v3 - 1) > 0; /*0x7835bb*/
  else
    return -1; /*0x7835af*/
}



// ==== 0x007835C0  sub_7835C0  this=-  sig=ida-proto ====
int __cdecl sub_7835C0(int a1, signed int *a2)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  const char *v5; // edx
  unsigned int v6; // kr04_4
  unsigned int v7; // kr08_4
  signed int v8; // eax
  signed int v9; // eax
  _BYTE v10[108]; // [esp+4h] [ebp-D8h] BYREF
  _BYTE v11[108]; // [esp+70h] [ebp-6Ch] BYREF

  v2 = *(_DWORD *)(a1 + 8); /*0x7835d5*/
  if ( v2 != a2[2] ) /*0x7835da*/
  {
    v3 = -(v2 != 0); /*0x7835de*/
    LOBYTE(v3) = v3 & 0xFE; /*0x7835e1*/
    return v3 + 1; /*0x7835ea*/
  }
  v5 = (const char *)a2[1]; /*0x7835eb*/
  v6 = strlen(*(const char **)(a1 + 4)) + 1; /*0x7835fb*/
  v7 = strlen(v5) + 1; /*0x783607*/
  if ( v6 != 1 ) /*0x78360e*/
  {
    if ( v7 != 1 ) /*0x783616*/
    {
      result = _strcmpi(*(const void **)(a1 + 4), v5); /*0x78361e*/
      if ( result ) /*0x783628*/
        return result; /*0x783628*/
      goto LABEL_6; /*0x783628*/
    }
    if ( (int)(v6 - 1) > 0 ) /*0x7836b4*/
      return -1; /*0x7836c3*/
  }
  if ( (int)(v7 - 1) > 0 ) /*0x7836c6*/
    return 1; /*0x7836cf*/
LABEL_6:
  memset(v11, 0, sizeof(v11)); /*0x78362a*/
  memset(v10, 0, sizeof(v10)); /*0x78364c*/
  v8 = *(_DWORD *)a1; /*0x78364e*/
  if ( *(int *)a1 >= 0 && v8 < (int)dword_B77900 ) /*0x783657*/
    qmemcpy(v11, (char *)dword_B77908 + 108 * v8, sizeof(v11)); /*0x78366b*/
  v9 = *a2; /*0x783674*/
  if ( *a2 >= 0 && v9 < (int)dword_B77900 ) /*0x78367c*/
    qmemcpy(v10, (char *)dword_B77908 + 108 * v9, sizeof(v10)); /*0x783690*/
  return _strcmpi(&v11[36], &v10[36]); /*0x7835e0*/
}



// ==== 0x007836E0  sub_7836E0  this=-  sig=ida-proto ====
int __cdecl sub_7836E0(const void *a1, signed int *a2)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  char *v5; // edx
  unsigned int v6; // kr04_4
  unsigned int v7; // kr08_4
  signed int v8; // eax
  signed int v9; // eax
  char v10[108]; // [esp+4h] [ebp-D8h] BYREF
  char v11[108]; // [esp+70h] [ebp-6Ch] BYREF

  v2 = *((_DWORD *)a1 + 2); /*0x7836f5*/
  if ( v2 != a2[2] ) /*0x7836fa*/
  {
    v3 = -(v2 != 0); /*0x7836fe*/
    LOBYTE(v3) = v3 & 0xFE; /*0x783701*/
    return v3 + 1; /*0x78370a*/
  }
  v5 = (char *)a2[1]; /*0x78370b*/
  v6 = strlen(*((const char **)a1 + 1)) + 1; /*0x78371b*/
  v7 = strlen(v5) + 1; /*0x783727*/
  if ( v6 != 1 ) /*0x78372e*/
  {
    if ( v7 != 1 ) /*0x783736*/
    {
      result = _strcmpi(v5, *((char **)a1 + 1)); /*0x78373e*/
      if ( result ) /*0x783748*/
        return result; /*0x783748*/
      goto LABEL_6; /*0x783748*/
    }
    if ( (int)(v6 - 1) > 0 ) /*0x7837d4*/
      return -1; /*0x7837e3*/
  }
  if ( (int)(v7 - 1) > 0 ) /*0x7837e6*/
    return 1; /*0x7837ef*/
LABEL_6:
  memset(v11, 0, sizeof(v11)); /*0x78374a*/
  memset(v10, 0, sizeof(v10)); /*0x78376c*/
  v8 = *(_DWORD *)a1; /*0x78376e*/
  if ( *(int *)a1 >= 0 && v8 < (int)dword_B77900 ) /*0x783777*/
    qmemcpy(v11, (char *)dword_B77908 + 108 * v8, sizeof(v11)); /*0x78378b*/
  v9 = *a2; /*0x783794*/
  if ( *a2 >= 0 && v9 < (int)dword_B77900 ) /*0x78379c*/
    qmemcpy(v10, (char *)dword_B77908 + 108 * v9, sizeof(v10)); /*0x7837b0*/
  return _strcmpi(&v11[36], &v10[36]); /*0x783700*/
}



// ==== 0x00783800  WOLobby::BuildPlayerList  this=WOLobby  sig=ida-proto ====
void __fastcall WOLobby::BuildPlayerList(char a1)
{
  signed int v1; // esi
  signed int v2; // ebx
  int *v3; // ebp
  int v4; // eax
  int *v5; // ebp
  char *v6; // edx
  int v7; // edx
  int v8; // eax
  int v9; // esi
  char *v10; // edi
  bool v11; // zf
  void **v12; // edi
  int v14; // [esp+14h] [ebp-84h]
  signed int v15; // [esp+14h] [ebp-84h]
  int v16[2]; // [esp+18h] [ebp-80h] BYREF
  void *Block; // [esp+20h] [ebp-78h]
  signed int v18; // [esp+24h] [ebp-74h]
  int *v19; // [esp+28h] [ebp-70h]
  _DWORD v20[27]; // [esp+2Ch] [ebp-6Ch] BYREF

  v1 = dword_B77900; /*0x783809*/
  v2 = 0; /*0x783810*/
  v16[0] = 0; /*0x78381d*/
  v16[1] = 0; /*0x783821*/
  Block = 0; /*0x783825*/
  v18 = dword_B77900; /*0x783829*/
  v3 = (int *)__2_YAPAXI_Z(12 * dword_B77900); /*0x783832*/
  v19 = v3; /*0x783839*/
  if ( v3 ) /*0x78383d*/
  {
    v4 = 0; /*0x783860*/
    memset(v20, 0, sizeof(v20)); /*0x783868*/
    if ( v1 <= 0 ) /*0x78386a*/
    {
LABEL_12:
      if ( a1 ) /*0x78391d*/
        qsort(v3, v1, 0xCu, (_CoreCrtNonSecureSearchSortCompareFunction)sub_7835C0); /*0x783924*/
      else
        qsort(v3, v1, 0xCu, sub_7836E0); /*0x78394f*/
      v7 = 0; /*0x783957*/
      dword_B77900 = 0; /*0x78395b*/
      if ( v1 > 0 ) /*0x783961*/
      {
        v15 = v1; /*0x783967*/
        do /*0x783a3c*/
        {
          v8 = *v3; /*0x78396f*/
          if ( *v3 >= 0 && v8 < v16[0] ) /*0x78397a*/
            qmemcpy(v20, (char *)Block + 108 * v8, sizeof(v20)); /*0x783992*/
          v9 = v7; /*0x783994*/
          if ( v7 >= dword_B77904 ) /*0x7839a0*/
          {
            DynamicArray::Grow(&dword_B77900); /*0x7839a7*/
            v7 = dword_B77900; /*0x7839ac*/
          }
          if ( v7 >= dword_B77904 ) /*0x7839b8*/
          {
            DynamicArray::Grow(&dword_B77900); /*0x7839bf*/
            v7 = dword_B77900; /*0x7839c4*/
          }
          if ( v9 < v7 ) /*0x7839cc*/
          {
            memcpy((char *)dword_B77908 + 108 * v9 + 108, (char *)dword_B77908 + 108 * v9, 108 * v7 - 108 * v9); /*0x7839f7*/
            v7 = dword_B77900; /*0x7839fc*/
          }
          v10 = (char *)dword_B77908 + 108 * v9; /*0x783a11*/
          if ( v10 ) /*0x783a16*/
          {
            qmemcpy(v10, v20, 0x6Cu); /*0x783a21*/
            v7 = dword_B77900; /*0x783a23*/
          }
          ++v7; /*0x783a2d*/
          v3 += 3; /*0x783a2e*/
          v11 = v15 == 1; /*0x783a31*/
          dword_B77900 = v7; /*0x783a32*/
          --v15; /*0x783a38*/
        }
        while ( !v11 ); /*0x783a3c*/
        v3 = v19; /*0x783a42*/
        v1 = v18; /*0x783a46*/
      }
      v16[0] = 0; /*0x783a4e*/
      if ( v1 > 0 ) /*0x783a52*/
      {
        v12 = (void **)(v3 + 1); /*0x783a54*/
        do /*0x783a6a*/
        {
          if ( *v12 ) /*0x783a57*/
            __3_YAXPAX_Z(*v12); /*0x783a5e*/
          v12 += 3; /*0x783a66*/
          --v1; /*0x783a69*/
        }
        while ( v1 ); /*0x783a6a*/
      }
      __3_YAXPAX_Z(v3); /*0x783a6d*/
      v16[0] = 0; /*0x783a76*/
      __3_YAXPAX_Z(Block); /*0x783a7b*/
    }
    else
    {
      v14 = 0; /*0x783870*/
      v5 = v3 + 2; /*0x783874*/
      while ( 1 ) /*0x78387d*/
      {
        if ( v4 >= 0 && v2 < (int)dword_B77900 ) /*0x783887*/
          qmemcpy(v20, (char *)dword_B77908 + v4, sizeof(v20)); /*0x78389b*/
        *(v5 - 2) = v2; /*0x78389f*/
        v6 = (char *)__2_YAPAXI_Z(0xAu); /*0x7838a7*/
        *(v5 - 1) = (int)v6; /*0x7838ae*/
        if ( !v6 ) /*0x7838b1*/
          break; /*0x7838b1*/
        strcpy(v6, (const char *)&v20[21] + 3); /*0x7838ce*/
        *v5 = v20[0] & 1; /*0x7838e2*/
        DynamicClass::Insert(v16, v20, v16[0]); /*0x7838ef*/
        ++v2; /*0x7838f4*/
        v5 += 3; /*0x7838f5*/
        v14 += 108; /*0x783905*/
        if ( v2 >= v18 ) /*0x783909*/
        {
          v3 = v19; /*0x78390f*/
          v1 = v18; /*0x783913*/
          goto LABEL_12; /*0x783913*/
        }
        v4 = v14; /*0x783879*/
      }
      v16[0] = 0; /*0x78392a*/
      __3_YAXPAX_Z(Block); /*0x783933*/
    }
  }
  else
  {
    v16[0] = 0; /*0x783843*/
    __3_YAXPAX_Z(Block); /*0x783848*/
  }
}



// ==== 0x00783A90  Bitmap::GetNumberBitmapWOL  this=Bitmap  sig=csp ====
int __thiscall Bitmap::GetNumberBitmapWOL(Bitmap *this)
{
  int result; // eax

  switch ( (unsigned int)this ) /*0x783a99*/
  {
    case 0u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, g_Str_File_number0_pcx, 0); /*0x783aac*/
      break; /*0x783ab1*/
    case 1u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, g_Str_File_number1_pcx, 0); /*0x783abe*/
      break; /*0x783ac3*/
    case 2u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber2Pcx, 0); /*0x783ad0*/
      break; /*0x783ad5*/
    case 3u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber3Pcx, 0); /*0x783ae2*/
      break; /*0x783ae7*/
    case 4u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber4Pcx, 0); /*0x783af4*/
      break; /*0x783af9*/
    case 5u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber5Pcx, 0); /*0x783b06*/
      break; /*0x783b0b*/
    case 6u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber6Pcx, 0); /*0x783b18*/
      break; /*0x783b1d*/
    case 7u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber7Pcx, 0); /*0x783b2a*/
      break; /*0x783b2f*/
    case 8u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber8Pcx, 0); /*0x783b3c*/
      break; /*0x783b41*/
    case 9u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber9Pcx, 0); /*0x783b4e*/
      break; /*0x783b53*/
    default:
      result = 0; /*0x783b54*/
      break; /*0x783b54*/
  }
  return result; /*0x783ab1*/
}



// ==== 0x00783B80  ObjectClass::Render_Find  this=ObjectClass  sig=csp ====
int __thiscall Render_Find(ObjectClass *this)
{
  void *ptr_C; // eax

  if ( !this ) /*0x783b82*/
    return 0; /*0x783b84*/
  ptr_C = this->?; /*0x783b87*/
  if ( (unsigned int)ptr_C > 0x7D0 ) /*0x783b8f*/
    return HashTable::Find(&g_DialogHashTable, g_Str_File_comchief_pcx, 0); /*0x783b9d*/
  if ( (unsigned int)ptr_C > 0x5DC ) /*0x783ba8*/
    return HashTable::Find(&g_DialogHashTable, aStargenPcx, 0); /*0x783bb6*/
  if ( (unsigned int)ptr_C > 0x3E8 ) /*0x783bc1*/
    return HashTable::Find(&g_DialogHashTable, aGeneralPcx, 0); /*0x783bcf*/
  if ( (unsigned int)ptr_C > 0x1F4 ) /*0x783bda*/
    return HashTable::Find(&g_DialogHashTable, aBriggenrPcx, 0); /*0x783be8*/
  if ( (unsigned int)ptr_C > 0xFA ) /*0x783bf3*/
    return HashTable::Find(&g_DialogHashTable, aColonelPcx, 0); /*0x783c01*/
  if ( (unsigned int)ptr_C > 0x96 ) /*0x783c0c*/
    return HashTable::Find(&g_DialogHashTable, aMajorPcx, 0); /*0x783c1a*/
  if ( (unsigned int)ptr_C > 0x50 ) /*0x783c23*/
    return HashTable::Find(&g_DialogHashTable, aLieutenaPcx, 0); /*0x783c31*/
  if ( (unsigned int)ptr_C > 0x3C ) /*0x783c3a*/
    return HashTable::Find(&g_DialogHashTable, aSergeantPcx, 0); /*0x783c48*/
  if ( (unsigned int)ptr_C <= 0x1F ) /*0x783c53*/
    return HashTable::Find(&g_DialogHashTable, aPrivatePcx, 0); /*0x783c6f*/
  return HashTable::Find(&g_DialogHashTable, aCorporalPcx, 0); /*0x783b86*/
}



// ==== 0x00783C80  ObjectClass::DisplayRankingsWOL  this=ObjectClass  sig=csp ====
int __thiscall DisplayRankingsWOL(ObjectClass *this)
{
  char v1; // dl
  char v2; // bl
  HWND GameUI; // eax
  int result; // eax
  ObjectClass *v5; // eax
  HWND v6; // esi
  HWND v7; // ebx
  unsigned int v8; // eax
  int v9; // ecx
  LRESULT (__stdcall *v10)(HWND, int, UINT, WPARAM, LPARAM); // ebp
  HWND v11; // ebx
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  int v14; // esi
  int v15; // esi
  char *v16; // eax
  char *v17; // eax
  int v18; // ebp
  int v19; // esi
  int v20; // esi
  int *v21; // eax
  wchar_t *v22; // eax
  HashTable *v23; // esi
  int v24; // esi
  const void *v25; // esi
  wchar_t *v26; // eax
  int v27; // esi
  unsigned __int16 v28; // si
  HWND v29; // eax
  int v30; // ebp
  HashTable *v31; // esi
  int v32; // esi
  const void *v33; // esi
  int v34; // esi
  const void *v35; // esi
  wchar_t *v36; // eax
  wchar_t *v37; // eax
  wchar_t *v38; // eax
  wchar_t *v39; // eax
  wchar_t *v40; // eax
  int v41; // eax
  char *v42; // ebp
  int v43; // e... [44324 chars total]



// ==== 0x00785360  DisplayRankingsThunkWOL  this=-  sig=ida-proto ====
void WOL_DisplayRankingsThunk()
{
  DisplayRankingsWOL(0); /*0x785364*/
}



// ==== 0x00785370  ObjectClass::InitializeWestwoodOnline  this=ObjectClass  sig=csp ====
int __thiscall InitializeWestwoodOnline(ObjectClass *this)
{
  char *v1; // eax
  char *v2; // esi
  char *v3; // edi
  int (__stdcall **v4)(LPVOID, void *, void **); // ecx
  int v5; // esi
  char *v6; // eax
  char *v7; // esi
  int v8; // eax
  int v9; // edi
  int v10; // esi
  char *v11; // eax
  char *inited; // eax
  int v13; // eax
  wchar_t *StringCSF; // eax
  ObjectClass Data; // [esp+64h] [ebp-114h] BYREF

  dword_B764F8 = (int)&unk_825CD0; /*0x785376*/
  stru_A8EB00.?[1] = (int)&dword_B76488; /*0x785380*/
  dword_B76488 = 132; /*0x78538a*/
  dword_B764EC = 768; /*0x7853a1*/
  System_Init_7A2F30((int)&dword_B76488, 0, (int)this); /*0x7853ab*/
  ppv = 0; /*0x7853b0*/
  g_UIPointerTable = 0; /*0x7853b6*/
  dword_AC1174 = 0; /*0x7853ce*/
  dword_B77E54 = 0; /*0x7853d4*/
  dword_B77E58 = 0; /*0x7853da*/
  dword_B77E5C = 0; /*0x7853e0*/
  CoCreateInstance(&stru_7F75E0, 0, 1u, &stru_7F7540, &ppv); /*0x7853e6*/
  if ( !ppv ) /*0x7853f2*/
    goto LABEL_40; /*0x7853f2*/
  v1 = (char *)__2_YAPAXI_Z(0x20u); /*0x7853fa*/
  v2 = v1; /*0x785405*/
  if ( v1 ) /*0x78540c*/
  {
    System_Init_7A41A0(v1); /*0x785410*/
    *(_DWORD *)v2 = &ATL::CComObject<CChatEventSink>::`vftable'; /*0x785415*/
    InterlockedIncrement(&Addend); /*0x785420*/
  }
  else
  {
    v2 = 0; /*0x785424*/
  }
  g_WOL_UserList.? = v2; /*0x78542f*/
  v3 = v2; /*0x785436*/
  v4 = *(int (__stdcall ***)(LPVOID, void *, void **))ppv; /*0x785444*/
  Data.? = 0; /*0x785446*/
  Data.AbstractClass = 0; /*0x78544a*/
  v5 = (*v4)(ppv, &unk_7F7CD0, &Data.?); /*0x785450*/
  if ( v5 >= 0 ) /*0x785454*/
  {
    v5 = (*(int (__stdcall **)(void *, void *, ObjectClass *))(*(_DWORD *)Data.? + 16))(Data.?, &unk_7F7550, &Data); /*0x78546a*/
    if ( v5 >= 0 ) /*0x78546e*/
      v5 = (*(int (__stdcall **)(void *, char *, int *))(*(_DWORD *)Data.AbstractClass + 20))( /*0x785480*/
             Data.AbstractClass,
             v3,
             &dword_B77E54);
  }
  if ( Data.AbstractClass ) /*0x785488*/
    (*(void (__stdcall **)(void *))(*(_DWORD *)Data.AbstractClass + 8))(Data.AbstractClass); /*0x78548d*/
  if ( Data.? ) /*0x785496*/
    (*(void (__stdcall **)(void *))(*(_DWORD *)Data.? + 8))(Data.?); /*0x78549b*/
  if ( !ppv || v5 ) /*0x7854ac*/
  {
LABEL_40:
    StringCSF = GetStringCSF(aTxtApimissing, 0, g_Str_File_wonline_cpp, 9180); /*0x785722*/
    goto LABEL_41; /*0x785722*/
  }
  CoCreateInstance(&stru_7F7600, 0, 1u, &stru_7F7580, &g_UIPointerTable); /*0x7854c4*/
  if ( !g_UIPointerTable ) /*0x7854d0*/
    goto LABEL_39; /*0x7854d0*/
  v6 = (char *)__2_YAPAXI_Z(0x20u); /*0x7854d8*/
  v7 = v6; /*0x7854dd*/
  if ( v6 ) /*0x7854e4*/
  {
    System_Init_7A2FC0(v6); /*0x7854e8*/
    *(_DWORD *)v7 = &off_7F766C; /*0x7854ed*/
    InterlockedIncrement(&Addend); /*0x7854f8*/
    v8 = (int)v7; /*0x7854fa*/
  }
  else
  {
    v8 = 0; /*0x7854fe*/
  }
  dword_B736EC = v8; /*0x785506*/
  Data.AbstractClass = 0; /*0x78550b*/
  Data.? = 0; /*0x78550f*/
  v9 = v8; /*0x785513*/
  v10 = (**(int (__stdcall ***)(LPVOID, void *, ObjectClass *))g_UIPointerTable)(g_UIPointerTable, &unk_7F7CD0, &Data); /*0x78552a*/
  if ( v10 >= 0 ) /*0x78552e*/
  {
    v10 = (*(int (__stdcall **)(void *, void *, void **))(*(_DWORD *)Data.AbstractClass + 16))( /*0x785544*/
            Data.AbstractClass,
            &unk_7F7590,
            &Data.?);
    if ( v10 >= 0 ) /*0x785548*/
      v10 = (*(int (__stdcall **)(void *, int, int *))(*(_DWORD *)Data.? + 20))(Data.?, v9, &dword_B77E58); /*0x78555a*/
  }
  System_Init_7AC680((ObjectClass *)&Data.?); /*0x785560*/
  System_Init_7AC670(&Data); /*0x785569*/
  if ( !g_UIPointerTable || v10 ) /*0x78557c*/
  {
LABEL_39:
    StringCSF = GetStringCSF(aTxtApimissing, 0, g_Str_File_wonline_cpp, 9196); /*0x78570d*/
    goto LABEL_41; /*0x78570d*/
  }
  CoCreateInstance(&stru_7F75F0, 0, 1u, &stru_7F7560, &dword_AC1174); /*0x785594*/
  if ( !dword_AC1174
    || ((v11 = (char *)__2_YAPAXI_Z(0x20u)) == 0 ? (inited = 0) : (inited = System_Init_7AD410(v11, 0)),
        (dword_B75F68 = (int)inited,
         v13 = System_Init_7A2EA0(
                 (int (__stdcall ***)(_DWORD, void *, int *))dword_AC1174,
                 (int)inited,
                 (int)&unk_7F7570,
                 (int)&dword_B77E5C),
         !dword_AC1174)
     || v13) )
  {
    StringCSF = GetStringCSF(aTxtApimissing, 0, g_Str_File_wonline_cpp, 9212); /*0x785704*/
    goto LABEL_41; /*0x785704*/
  }
  (*(void (__stdcall **)(LPVOID, void **))(*(_DWORD *)ppv + 80))(ppv, &Data.?); /*0x785604*/
  if ( Data.? < (void *)0x10010 ) /*0x78560f*/
  {
    StringCSF = GetStringCSF((wchar_t *)aTxtApiwrongver, 0, g_Str_File_wonline_cpp, 9224); /*0x785624*/
LABEL_41:
    ShowDialogConfirm(StringCSF, 0, 0, 0); /*0x785727*/
    return -2; /*0x785730*/
  }
  (*(void (__stdcall **)(LPVOID, char *, char *))(*(_DWORD *)ppv + 164))( /*0x78563b*/
    ppv,
    aRegpath,
    g_Str_SOFTWARE_Westwood_Yuri_s_Reven);
  if ( g_Str_SOFTWARE_Westwood_Yuri_s_Reven ) /*0x785648*/
  {
    if ( strlen(g_Str_SOFTWARE_Westwood_Yuri_s_Reven) ) /*0x785650*/
    {
      strcpy((char *)&Data.?, g_Str_SOFTWARE_Westwood_Yuri_s_Reven); /*0x78567f*/
      if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, (LPCSTR)&Data.?, 0, 0x20019u, (PHKEY)&Data.?) ) /*0x785699*/
      {
        Data.? = (void *)4; /*0x7856bd*/
        if ( !RegQueryValueExA((HKEY)Data.?, off_84A940, 0, (LPDWORD)&Data.?, (LPBYTE)&Data, (LPDWORD)&Data.?) ) /*0x7856c5*/
          (*(void (__stdcall **)(LPVOID, void *))(*(_DWORD *)ppv + 140))(ppv, Data.AbstractClass); /*0x7856dc*/
        RegCloseKey((HKEY)Data.?); /*0x7856e7*/
      }
    }
  }
  return 1; /*0x7856ed*/
}



// ==== 0x00785740  ObjectClass::LeaveChannelWOL  this=ObjectClass  sig=csp ====
void __thiscall LeaveChannelWOL(const char *this)
{
  const char *v2; // ebp
  char *v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  wchar_t *StringCSF; // eax
  HWND v8; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  HWND v11; // esi
  HWND v12; // eax
  HWND v13; // edi
  HWND v14; // eax
  HWND v15; // edi
  int v16; // ebx
  char **v17; // edi
  HWND GameUI; // eax
  int owningHouseIndex; // eax
  int v20; // ebx
  int v21; // ebp
  int v22; // ecx
  int v23; // ebp
  ObjectClass *v24; // eax
  ObjectClass *nextObject; // esi
  ObjectClass *v26; // ebx
  char v27; // dl
  unsigned int v28; // ecx
  int *v29; // esi
  HWND v30; // eax
  HWND v31; // eax
  HWND v32; // eax
  int v33; // esi
  char *v34; // eax
  _DWORD *v35; // ecx
  void *v36; // edi
  int v37; // eax
  int i; // esi
  ObjectClass *v39; // ecx
  char *v40; // eax
  HWND v41; // esi
  LRESULT v42; // eax
  LRESULT v43; // eax
  char *v44; // [esp-4h] [ebp-108h]
  ObjectClass *v45; // [esp+0h] [ebp-104h]
  int v46; // [esp+10h] [ebp-F4h]
  char *v47; // [esp+14h] [ebp-F0h]
  wchar_t Buffer[64]; // [esp+18h] [ebp-ECh] BYREF
  char v49[108]; // [esp+98h] [ebp-6Ch] BYREF

  v2 = this + 36; /*0x785751*/
  v44 = (char *)(this + 36); /*0x785754*/
  v47 = (char *)(this + 36); /*0x785755*/
  v3 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x785759*/
  _strcmpi(v3, v44); /*0x78575f*/
  if ( stru_B76AC4.ambientSoundController[4] ) /*0x785770*/
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1724), 0x2000, 1.0, 0); /*0x785788*/
  if ( (BYTE1(*(_DWORD *)this) & 0x80u) != 0 ) /*0x785792*/
  {
    Debug::Log(); /*0x78579d*/
    if ( g_NetworkLobbyState ) /*0x7857ac*/
      Debug::Log(); /*0x7857b3*/
    BulkCharToWide(Buffer, (unsigned __int8 *)&stru_B76AC4.needsRedraw, -1); /*0x7857c6*/
    if ( !strncmp(&stru_B76AC4.needsRedraw, g_Str_Lob_41_, 7u) ) /*0x7857d7*/
    {
      v4 = atol((const char *)&stru_B76AC4.needsRedraw + strlen(g_Str_Lob_41_)); /*0x7857fc*/
      v5 = v4 / 8; /*0x785807*/
      v6 = v4 % 8; /*0x785816*/
      if ( v5 ) /*0x785819*/
        swprintf( /*0x78584b*/
          Buffer,
          (const size_t)g_Str_Trace__s__d,
          *(const wchar_t *const *)&g_WindowManager.__pad_EC[4 * v6 + 648],
          v5 + 1);
      else
        swprintf(Buffer, (const size_t)&off_8240B4, *(const wchar_t *const *)&g_WindowManager.__pad_EC[4 * v6 + 648]); /*0x78582d*/
    }
    if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x785865*/
    {
      StringCSF = GetStringCSF(aTxtYouleft, 0, g_Str_File_wonline_cpp, 9292); /*0x78587d*/
      Dialog::ShowMessage(-1, (size_t)StringCSF, Buffer); /*0x785889*/
    }
    stru_B77D80.HashTable_field_0x50 = 0; /*0x785896*/
    Debug::Log(); /*0x78589c*/
    memset(&stru_B76AC4.ambientSoundController[4], 0, 0x10Cu); /*0x7858b0*/
    memset(&g_WOL_LoginObject.?, 0, 0x940u); /*0x7858bc*/
    g_WOL_UserList.owningHouseIndex = 0; /*0x7858c3*/
    dword_B77E4C = 0; /*0x7858c9*/
    v8 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7858cf*/
    if ( v8 ) /*0x7858d6*/
    {
      stru_B77D80.HashTable_field_0x48 &= ~0x40u; /*0x7858e1*/
      if ( !stru_B77D80.HashTable_field_0x48 ) /*0x7858e7*/
        CloseDialog(v8, 0); /*0x7858ed*/
    }
    Current = (HWND)Dialog::GetCurrent(); /*0x7858f2*/
    DlgItem = GetDlgItem(Current, 1344); /*0x7858fd*/
    if ( DlgItem ) /*0x785905*/
      SetFocus(DlgItem); /*0x785908*/
    MEMORY[0xA8B322][0] = 0; /*0x785914*/
    dword_A8BB04 = 0; /*0x78591c*/
    ++dword_A8DAB4; /*0x785922*/
    byte_A8BAE2 = 0; /*0x78592d*/
    v11 = (HWND)Dialog::FindByHandle((Dialog *)0x113); /*0x78593f*/
    if ( v11 && BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x78594c*/
    {
      ShowWindow(v11, 0); /*0x785950*/
      Dialog::InitWindow(v11, 1); /*0x785955*/
    }
    v12 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x78595f*/
    v13 = v12; /*0x78596a*/
    if ( v12 ) /*0x78596e*/
    {
      CloseDialog(v12, 2); /*0x785977*/
      CleanupFileTree(v45); /*0x78597c*/
      ShowWindow(v13, 0); /*0x785984*/
      Dialog::InitWindow(v13, 1); /*0x785989*/
      if ( dword_A8B244 == 4 ) /*0x785996*/
      {
        if ( BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x78599f*/
        {
          if ( v11 ) /*0x7859a3*/
          {
            ShowWindow(v11, 0); /*0x7859a8*/
            Dialog::InitWindow(v11, 1); /*0x7859ad*/
          }
        }
        else
        {
          JoinGameLobbyWOL(); /*0x7859b6*/
          if ( v11 ) /*0x7859bd*/
            PostMessageA(v11, 0x593u, 0, 0); /*0x7859c9*/
        }
      }
      else if ( dword_A8B244 == 5 ) /*0x7859d0*/
      {
        Debug::Log(); /*0x7859d7*/
        g_WOL_ChannelLeaveState = 1; /*0x7859df*/
      }
    }
    v14 = (HWND)Dialog::FindByHandle((Dialog *)0xC2); /*0x7859ee*/
    v15 = v14; /*0x7859f3*/
    if ( !v14 ) /*0x7859f7*/
      goto LABEL_40; /*0x7859f7*/
    CloseDialog(v14, 2); /*0x785a00*/
    CleanupFileTree(v45); /*0x785a05*/
    ShowWindow(v15, 0); /*0x785a0d*/
    Dialog::InitWindow(v15, 1); /*0x785a12*/
    if ( dword_A8B244 != 4 ) /*0x785a1f*/
    {
      if ( dword_A8B244 == 5 ) /*0x785a59*/
        Debug::Log(); /*0x785a60*/
      goto LABEL_40; /*0x785a60*/
    }
    if ( BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x785a28*/
    {
      if ( v11 ) /*0x785a2c*/
      {
        ShowWindow(v11, 0); /*0x785a31*/
        Dialog::InitWindow(v11, 1); /*0x785a36*/
        goto LABEL_40; /*0x785a3b*/
      }
    }
    else
    {
      JoinGameLobbyWOL(); /*0x785a3f*/
      if ( v11 ) /*0x785a46*/
      {
        PostMessageA(v11, 0x593u, 0, 0); /*0x785a52*/
LABEL_40:
        if ( v11 ) /*0x785a6a*/
        {
          if ( !BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x785a73*/
          {
            ShowWindow(v11, 5); /*0x785a78*/
            Dialog::InitWindow(v11, 0); /*0x785a7d*/
          }
          GameListRenderWOL(v45); /*0x785a82*/
        }
      }
    }
    --dword_A8DAB4; /*0x785a87*/
    return; /*0x785a9c*/
  }
  if ( g_NetworkLobbyState == 2 ) /*0x785aa4*/
  {
    Debug::Log(); /*0x785aab*/
    return; /*0x785abd*/
  }
  if ( this ) /*0x785ac0*/
  {
    v16 = 0; /*0x785ac2*/
    v17 = (char **)dword_A8DA90; /*0x785ac4*/
    while ( !*v17 || strcmp(ToWideStringChar(*v17), v2) ) /*0x785b01*/
    {
      ++v17; /*0x785b03*/
      ++v16; /*0x785b06*/
      if ( (int)v17 >= (int)&dword_A8DAB0 ) /*0x785b0d*/
        goto LABEL_55; /*0x785b0d*/
    }
    GameUI = (HWND)Dialog::FindGameUI(); /*0x785b11*/
    if ( GameUI ) /*0x785b18*/
      UpdateLobbyGraphicsWOL(GameUI, v16, -1); /*0x785b20*/
  }
LABEL_55:
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x785b25*/
  v20 = 0; /*0x785b2a*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x785b32*/
  {
    v21 = 0; /*0x785b38*/
    while ( 1 ) /*0x785b3a*/
    {
      if ( v21 >= 0 && v20 < owningHouseIndex ) /*0x785b40*/
        qmemcpy(v49, (char *)g_WOL_UserList.nextObject + v21, sizeof(v49)); /*0x785b56*/
      if ( !_strcmpi(&v49[36], v47) ) /*0x785b65*/
        break; /*0x785b65*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x785b71*/
      ++v20; /*0x785b76*/
      v21 += 108; /*0x785b77*/
      if ( v20 >= g_WOL_UserList.owningHouseIndex ) /*0x785b7c*/
        goto LABEL_86; /*0x785b7c*/
    }
    v46 = v20; /*0x785b8d*/
    v22 = v20; /*0x785b93*/
    if ( g_WOL_UserList.owningHouseIndex ) /*0x785b95*/
    {
      if ( v20 < 0 ) /*0x785b9d*/
        v22 = 0; /*0x785b9f*/
      if ( v22 >= g_WOL_UserList.owningHouseIndex ) /*0x785ba3*/
        v22 = g_WOL_UserList.owningHouseIndex - 1; /*0x785ba5*/
      memcpy( /*0x785bd1*/
        (char *)g_WOL_UserList.nextObject + 108 * v22,
        &g_WOL_UserList.nextObject->alignmentPadding69[108 * v22 + 3],
        108 * g_WOL_UserList.owningHouseIndex - 36 * (3 * v22 + 3));
      --g_WOL_UserList.owningHouseIndex; /*0x785be5*/
      if ( 3 * g_WOL_UserList.owningHouseIndex <= g_WOL_UserList.fallRate ) /*0x785bef*/
      {
        v23 = g_WOL_UserList.fallRate / 2; /*0x785bf8*/
        if ( g_WOL_UserList.fallRate / 2 < 10 ) /*0x785bfd*/
          v23 = 10; /*0x785bff*/
        if ( v23 < g_WOL_UserList.fallRate ) /*0x785c06*/
        {
          v24 = (ObjectClass *)__2_YAPAXI_Z(108 * v23); /*0x785c13*/
          nextObject = g_WOL_UserList.nextObject; /*0x785c18*/
          v26 = v24; /*0x785c23*/
          if ( g_WOL_UserList.nextObject ) /*0x785c25*/
          {
            v27 = 108 * LOBYTE(g_WOL_UserList.owningHouseIndex); /*0x785c37*/
            v28 = (unsigned int)(108 * g_WOL_UserList.owningHouseIndex) >> 2; /*0x785c39*/
            qmemcpy(v24, g_WOL_UserList.nextObject, 4 * v28); /*0x785c3c*/
            qmemcpy(&v24->AbstractClass + v28, &nextObject->AbstractClass + v28, v27 & 3); /*0x785c43*/
            nextObject = g_WOL_UserList.nextObject; /*0x785c45*/
          }
          __3_YAXPAX_Z(nextObject); /*0x785c4c*/
          g_WOL_UserList.nextObject = v26; /*0x785c51*/
          v20 = v46; /*0x785c57*/
          g_WOL_UserList.fallRate = v23; /*0x785c5e*/
        }
      }
    }
    if ( stru_B76AC4.ambientSoundController[4] ) /*0x785c6b*/
    {
      memcpy(&g_WOL_LoginObject.? + 37 * v20, (char *)&unk_B76ED4 + 148 * v20, 2220 - 148 * v20); /*0x785c90*/
      if ( g_NetworkLobbyState != 2 ) /*0x785ca0*/
      {
        v29 = (int *)&unk_B76EF4; /*0x785cae*/
        do /*0x785cd7*/
        {
          *v29 = 0; /*0x785cba*/
          v30 = (HWND)Dialog::FindGameUI(); /*0x785cc0*/
          v31 = GetDlgItem(v30, 1439); /*0x785cc6*/
          EnableWindow(v31, 1); /*0x785cc9*/
          v29 += 37; /*0x785ccb*/
        }
        while ( v29 < &g_WebBrowserConfig.? ); /*0x785cd7*/
        if ( !dword_B77E4C ) /*0x785ce0*/
        {
          v32 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x785ce7*/
          EnablePlayerSlotControls(v32, 1u); /*0x785cf0*/
        }
        Game::ResetReadyStates(); /*0x785cf5*/
      }
    }
    if ( !v20 ) /*0x785cfc*/
    {
      if ( !stru_B76AC4.ambientSoundController[4] ) /*0x785d05*/
        goto LABEL_109; /*0x785d05*/
      if ( !dword_B77E4C ) /*0x785d12*/
        (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x785d1c*/
    }
  }
LABEL_86:
  if ( stru_B76AC4.ambientSoundController[4] ) /*0x785d26*/
  {
    Audio_Helper((ObjectClass *)v47); /*0x785d32*/
    v33 = 0; /*0x785d3c*/
    if ( dword_A8DA84 > 0 ) /*0x785d40*/
    {
      while ( 1 ) /*0x785d4c*/
      {
        v34 = ToWideStringChar((char *)dword_A8DA78[v33]); /*0x785d4c*/
        if ( !_strcmpi(v34, v47) ) /*0x785d52*/
          break; /*0x785d52*/
        if ( ++v33 >= dword_A8DA84 ) /*0x785d66*/
          goto LABEL_97; /*0x785d66*/
      }
      v35 = dword_A8DA78; /*0x785d6a*/
      v36 = (void *)dword_A8DA78[v33]; /*0x785d78*/
      if ( v33 < dword_A8DA84 ) /*0x785d7b*/
      {
        v37 = v33; /*0x785d7e*/
        if ( v33 < --dword_A8DA84 ) /*0x785d88*/
        {
          while ( 1 ) /*0x785d96*/
          {
            v35[v37] = v35[v37 + 1]; /*0x785d96*/
            if ( ++v37 >= dword_A8DA84 ) /*0x785da2*/
              break; /*0x785da2*/
            v35 = dword_A8DA78; /*0x785d8c*/
          }
        }
      }
      Network_Disconnect_69BBF0((char *)&dword_A8B238, v33); /*0x785daa*/
      __3_YAXPAX_Z(v36); /*0x785db0*/
    }
LABEL_97:
    for ( i = 0; i < 8; ++i ) /*0x785db8*/
    {
      v39 = (ObjectClass *)dword_A8DA90[i]; /*0x785dbd*/
      if ( !v39 || !(unsigned __int8)IsKnownPointer(v39) ) /*0x785dc7*/
        dword_B76440[i] = -1; /*0x785dd0*/
      v40 = ToWideStringChar((char *)dword_A8DA90[i]); /*0x785ddc*/
      SetGameOptionsPing(v40, dword_B76440[i]); /*0x785de9*/
    }
    if ( dword_B77E4C ) /*0x785dfd*/
    {
      Game::ResetReadyStates(); /*0x785e03*/
      Lobby::BuildPlayerList((Lobby *)v45); /*0x785e08*/
      CheckGameSettingsChanged(1, 1); /*0x785e11*/
      if ( Dialog::GetCurrentType() == 107 ) /*0x785e1e*/
      {
        v41 = (HWND)Dialog::GetCurrent(); /*0x785e2b*/
        v42 = SendDlgItemMessageA(v41, 1771, 0x188u, 0, 0); /*0x785e3c*/
        if ( v42 != -1 ) /*0x785e41*/
        {
          v43 = SendDlgItemMessageA(v41, 1771, 0x199u, v42, 0); /*0x785e51*/
          if ( v43 ) /*0x785e55*/
          {
            (*(void (__thiscall **)(LRESULT))(*(_DWORD *)v43 + 144))(v43); /*0x785e5b*/
            DisplayRankingsWOL(0); /*0x785e65*/
            return; /*0x785e74*/
          }
        }
      }
      else if ( dword_A8B23C ) /*0x785e7d*/
      {
        (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 36))(dword_A8B23C); /*0x785e81*/
      }
    }
  }
LABEL_109:
  DisplayRankingsWOL(0); /*0x785e87*/
}



// ==== 0x00785EA0  ObjectClass::RunWOLMainLoop_Delete  this=ObjectClass  sig=csp ====
int RunWOLMainLoop_Delete(ObjectClass *this)
{
  unsigned int v1; // eax
  unsigned int i; // ebx
  ObjectClass *v3; // esi
  ObjectClass *v4; // edi
  int result; // eax
  HANDLE *v6; // esi
  TechnoTypeClass *v7; // ecx
  wchar_t *StringCSF; // eax
  int j; // ebp
  TechnoTypeClass *v10; // ecx
  DWORD k; // esi
  HWND v12; // eax
  HWND v13; // eax
  HWND Current; // eax
  void *v15; // [esp+Ch] [ebp-4h] BYREF

  LOBYTE(stru_B77D80.HashTable_field_0x40) = 1; /*0x785eac*/
  if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x785ec0*/
  {
    v1 = stru_B765EC.location[0]; /*0x785ec6*/
    for ( i = 0; i < stru_B765EC.location[0]; v1 = stru_B765EC.location[0] ) /*0x785ecf*/
    {
      v3 = *(ObjectClass **)(stru_B765EC.lastLayer + 4 * i); /*0x785ed6*/
      while ( v3 ) /*0x785edb*/
      {
        v4 = v3; /*0x785edd*/
        v3 = (ObjectClass *)v3->?; /*0x785edf*/
        DeleteAndZero(v4); /*0x785ee8*/
        __3_YAXPAX_Z(v4); /*0x785eee*/
      }
      ++i; /*0x785f00*/
      *(_DWORD *)(stru_B765EC.lastLayer + 4 * i - 4) = 0; /*0x785f01*/
    }
    *(_DWORD *)&stru_B765EC.isInLogic = 0; /*0x785f18*/
    if ( v1 > dword_B766B0 ) /*0x785f24*/
    {
      do /*0x785f46*/
      {
        if ( LOBYTE(stru_B765EC.lineTrailer) ) /*0x785f2d*/
          break; /*0x785f2d*/
        HashMap::Shrink((HashMap *)&stru_B765EC.lastLayer); /*0x785f34*/
      }
      while ( stru_B765EC.location[0] > (unsigned int)dword_B766B0 ); /*0x785f46*/
    }
  }
  result = (int)ppv; /*0x785f48*/
  if ( ppv ) /*0x785f4f*/
  {
    v6 = &Handles; /*0x785f5b*/
    do /*0x785f6e*/
      ResetEvent(*v6++); /*0x785f63*/
    while ( (int)v6 < (int)g_WOL_RequestObject ); /*0x785f6e*/
    Game::ProcessIdle(v7); /*0x785f70*/
    if ( !(*(int (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 52))(ppv) ) /*0x785f7d*/
    {
      StringCSF = GetStringCSF(aTxtWolLoggingO, 0, g_Str_File_wonline_cpp, 9527); /*0x785f9a*/
      WideString::Assign((wchar_t **)&v15, StringCSF); /*0x785fa4*/
      ShowUIMessage(32, (wchar_t **)&v15, 0); /*0x785fb4*/
      DeleteAndZero::Alt((DeleteAndZero *)&v15); /*0x785fbd*/
      for ( j = 0; j < 5; ++j ) /*0x785fc8*/
      {
        for ( k = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x785fdf*/
              k == 258;
              k = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u) )
        {
          Game::ProcessIdle(v10); /*0x785fe1*/
        }
        ResetEvent(*(&Handles + k)); /*0x786005*/
        if ( !k ) /*0x786009*/
          break; /*0x786009*/
        if ( k == 9 ) /*0x78600e*/
          break; /*0x78600e*/
      }
    }
    v12 = (HWND)Dialog::FindByHandle((Dialog *)0x11E); /*0x78601c*/
    if ( v12 ) /*0x786023*/
      CloseDialog(v12, 0); /*0x786029*/
    v13 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x786033*/
    if ( v13 ) /*0x78603a*/
    {
      stru_B77D80.HashTable_field_0x48 &= ~0x20u; /*0x786045*/
      if ( !stru_B77D80.HashTable_field_0x48 ) /*0x78604b*/
        CloseDialog(v13, 0); /*0x786051*/
    }
    Current = (HWND)Dialog::GetCurrent(); /*0x786056*/
    result = (int)GetDlgItem(Current, 1344); /*0x786061*/
    if ( result ) /*0x786069*/
      return (int)SetFocus((HWND)result); /*0x78606c*/
  }
  return result; /*0x786072*/
}



// ==== 0x00786080  ObjectClass::HandleLogoutWOL  this=ObjectClass  sig=csp ====
char HandleLogoutWOL(ObjectClass *this)
{
  Skirmish *v1; // esi
  HWND v2; // eax
  int (__stdcall **v3)(LPVOID, void *, int *); // ecx
  int v4; // esi
  int (__stdcall **v5)(LPVOID, void *, int *); // ecx
  int v6; // esi
  int (__stdcall **v7)(LPVOID, void *, int *); // ecx
  int v8; // esi
  HANDLE *v9; // esi
  int v11; // [esp+7Ch] [ebp-8h] BYREF
  int v12; // [esp+80h] [ebp-4h] BYREF

  v1 = g_UIControlState; /*0x786085*/
  if ( g_UIControlState ) /*0x78608f*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x786093*/
    __3_YAXPAX_Z(v1); /*0x786099*/
    g_UIControlState = 0; /*0x7860a1*/
  }
  v2 = (HWND)Dialog::FindByHandle((Dialog *)0x11E); /*0x7860ac*/
  if ( v2 ) /*0x7860b3*/
    LOBYTE(v2) = CloseDialog(v2, 0); /*0x7860b9*/
  if ( byte_B77E75 ) /*0x7860c4*/
  {
    WinMainSetup_Setup_5DB6F0_Setup(); /*0x7860ca*/
    if ( ppv ) /*0x7860d6*/
    {
      v3 = *(int (__stdcall ***)(LPVOID, void *, int *))ppv; /*0x7860d8*/
      v4 = dword_B77E54; /*0x7860da*/
      v12 = 0; /*0x7860e4*/
      v11 = 0; /*0x7860ef*/
      if ( (*v3)(ppv, &unk_7F7CD0, &v12) >= 0 /*0x78610f*/
        && (*(int (__stdcall **)(int, void *, int *))(*(_DWORD *)v12 + 16))(v12, &unk_7F7550, &v11) >= 0 )
      {
        (*(void (__stdcall **)(int, int))(*(_DWORD *)v11 + 24))(v11, v4); /*0x786119*/
      }
      if ( v11 ) /*0x786122*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x786127*/
      if ( v12 ) /*0x786130*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 8))(v12); /*0x786135*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x786140*/
    }
    if ( g_UIPointerTable ) /*0x78614a*/
    {
      v5 = *(int (__stdcall ***)(LPVOID, void *, int *))g_UIPointerTable; /*0x78614c*/
      v6 = dword_B77E58; /*0x78614e*/
      v11 = 0; /*0x786158*/
      v12 = 0; /*0x786163*/
      if ( (*v5)(g_UIPointerTable, &unk_7F7CD0, &v11) >= 0 /*0x786183*/
        && (*(int (__stdcall **)(int, void *, int *))(*(_DWORD *)v11 + 16))(v11, &unk_7F7590, &v12) >= 0 )
      {
        (*(void (__stdcall **)(int, int))(*(_DWORD *)v12 + 24))(v12, v6); /*0x78618d*/
      }
      if ( v12 ) /*0x786196*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 8))(v12); /*0x78619b*/
      if ( v11 ) /*0x7861a4*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x7861a9*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)g_UIPointerTable + 8))(g_UIPointerTable); /*0x7861b4*/
    }
    if ( dword_AC1174 ) /*0x7861be*/
    {
      v7 = *(int (__stdcall ***)(LPVOID, void *, int *))dword_AC1174; /*0x7861c0*/
      v8 = dword_B77E5C; /*0x7861c2*/
      v11 = 0; /*0x7861cc*/
      v12 = 0; /*0x7861d7*/
      if ( (*v7)(dword_AC1174, &unk_7F7CD0, &v11) >= 0 /*0x7861f7*/
        && (*(int (__stdcall **)(int, void *, int *))(*(_DWORD *)v11 + 16))(v11, &unk_7F7570, &v12) >= 0 )
      {
        (*(void (__stdcall **)(int, int))(*(_DWORD *)v12 + 24))(v12, v8); /*0x786201*/
      }
      if ( v12 ) /*0x78620a*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 8))(v12); /*0x78620f*/
      if ( v11 ) /*0x786218*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x78621d*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)dword_AC1174 + 8))(dword_AC1174); /*0x786228*/
    }
    ppv = 0; /*0x786232*/
    g_UIPointerTable = 0; /*0x786238*/
    dword_AC1174 = 0; /*0x78623e*/
    v9 = &Handles; /*0x786244*/
    do /*0x786257*/
      CloseHandle(*v9++); /*0x78624c*/
    while ( (int)v9 < (int)g_WOL_RequestObject ); /*0x786257*/
    LOBYTE(v2) = HandleLogoutWOL_Handle((int)&dword_B76488); /*0x78625e*/
    byte_B77E75 = 0; /*0x786263*/
  }
  return (char)v2; /*0x78626a*/
}



// ==== 0x00786270  ObjectClass::Event_Process  this=ObjectClass  sig=csp ====
char Event_Process_786270(ObjectClass *this)
{
  HKEY phkResult; // [esp+4h] [ebp-110h] BYREF
  BYTE Data[4]; // [esp+8h] [ebp-10Ch] BYREF
  DWORD cbData; // [esp+Ch] [ebp-108h] BYREF
  DWORD Type; // [esp+10h] [ebp-104h] BYREF
  CHAR SubKey[256]; // [esp+14h] [ebp-100h] BYREF

  *(_DWORD *)Data = 0; /*0x78627e*/
  if ( g_Str_SOFTWARE_Westwood_Yuri_s_Reven ) /*0x786286*/
  {
    if ( strlen(g_Str_SOFTWARE_Westwood_Yuri_s_Reven) ) /*0x78628e*/
    {
      strcpy(SubKey, g_Str_SOFTWARE_Westwood_Yuri_s_Reven); /*0x7862b6*/
      if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &phkResult) ) /*0x7862d5*/
      {
        cbData = 4; /*0x7862fb*/
        RegQueryValueExA(phkResult, off_84A940, 0, &Type, Data, &cbData); /*0x786303*/
        RegCloseKey(phkResult); /*0x78630e*/
      }
    }
  }
  dword_B77E50 = Data[0]; /*0x786328*/
  if ( ppv ) /*0x78632e*/
    (*(void (__stdcall **)(LPVOID, _DWORD))(*(_DWORD *)ppv + 140))(ppv, *(_DWORD *)Data); /*0x786334*/
  if ( !g_UIPointerTable ) /*0x786341*/
    return 0; /*0x78637d*/
  Debug::Log(); /*0x786353*/
  (*(void (__stdcall **)(LPVOID, char *, int, int))(*(_DWORD *)g_UIPointerTable + 44))( /*0x786371*/
    g_UIPointerTable,
    &g_WindowManager.__pad_70[28],
    stru_B76AC4.ambientSoundController[3],
    3);
  return 1; /*0x78631f*/
}



// ==== 0x00786390  LoginFlowWOL_Reset  this=-  sig=csp ====
int __usercall LoginFlowWOL_Reset@<eax>(ObjectClass *a1@<edi>)
{
  HANDLE *v2; // esi
  BYTE Data[4]; // [esp+0h] [ebp-110h] BYREF
  HKEY phkResult; // [esp+4h] [ebp-10Ch] BYREF
  DWORD cbData; // [esp+8h] [ebp-108h] BYREF
  DWORD Type; // [esp+Ch] [ebp-104h] BYREF
  CHAR SubKey[256]; // [esp+10h] [ebp-100h] BYREF

  if ( byte_B77E75 ) /*0x78639d*/
    return 1; /*0x78639f*/
  byte_B77E75 = 1; /*0x7863ad*/
  LoadNetworkShareStrings(); /*0x7863b4*/
  Game::ResetFlags(); /*0x7863b9*/
  Network::InitPlayerSlots(); /*0x7863be*/
  *(_DWORD *)Data = 0; /*0x7863c8*/
  if ( g_Str_SOFTWARE_Westwood_Yuri_s_Reven ) /*0x7863d2*/
  {
    if ( strlen(g_Str_SOFTWARE_Westwood_Yuri_s_Reven) ) /*0x7863da*/
    {
      strcpy(SubKey, g_Str_SOFTWARE_Westwood_Yuri_s_Reven); /*0x786405*/
      if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &phkResult) ) /*0x786420*/
      {
        cbData = 4; /*0x786445*/
        RegQueryValueExA(phkResult, off_84A940, 0, &Type, Data, &cbData); /*0x78644d*/
        RegCloseKey(phkResult); /*0x786458*/
      }
    }
  }
  *(_DWORD *)Data = Data[0]; /*0x786467*/
  dword_B77E50 = Data[0]; /*0x78646b*/
  g_NetworkRematchState = Data[0] + 10496; /*0x786475*/
  ResetSystemWOL(a1); /*0x78647a*/
  LOBYTE(stru_B77D80.HashTable_field_0x40) = 1; /*0x786485*/
  v2 = &Handles; /*0x78648c*/
  do /*0x7864a6*/
    *v2++ = CreateEventA(0, 0, 0, 0); /*0x78649b*/
  while ( (int)v2 < (int)g_WOL_RequestObject ); /*0x7864a6*/
  return InitializeWestwoodOnline((ObjectClass *)g_hInstance); /*0x7863a4*/
}



// ==== 0x007864C0  ObjectClass::ConnectAndLoginWOL  this=MPCooperative  sig=csp ====
char __thiscall WOL_ConnectAndLogin(char *this)
{
  HANDLE *v2; // esi
  wchar_t *String; // eax
  int v4; // edi
  DWORD v5; // esi
  HWND v7; // eax
  HWND v8; // eax
  HWND DlgItem; // eax
  wchar_t *v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND Current; // eax
  wchar_t *v16; // eax
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax
  HWND v20; // eax
  HWND v21; // eax
  HWND v22; // eax
  _DWORD *v23; // eax
  int v24; // eax
  int v25; // esi
  char *v26; // eax
  int v27; // esi
  char *v28; // eax
  HANDLE *v29; // esi
  int v30; // edi
  DWORD v31; // esi
  HWND v32; // eax
  HWND v33; // eax
  HWND v34; // eax
  wchar_t *v35; // eax
  HWND v36; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  int v40; // esi
  char *v41; // esi
  void *v42; // eax
  _DWORD *v43; // ecx
  void *v44; // edx
  void *v45; // esi
  const char **p_Block; // ecx
  int v47; // [esp+44h] [ebp-B4h]
  int v48; // [esp+50h] [ebp-A8h]
  int Block; // [esp+64h] [ebp-94h] BYREF
  const char *v50; // [esp+68h] [ebp-90h] BYREF
  int v51; // [esp+6Ch] [ebp-8Ch] BYREF
  void **v52; // [esp+70h] [ebp-88h] BYREF
  _DWORD *v53; // [esp+74h] [ebp-84h]
  int v54[3]; // [esp+78h] [ebp-80h] BYREF
  int v55; // [esp+84h] [ebp-74h] BYREF
  char v56; // [esp+88h] [ebp-70h]
  char v57[108]; // [esp+8Ch] [ebp-6Ch] BYREF

  v50 = this; /*0x7864d1*/
  strcpy(this + 228, String::GetOrEmpty((char **)&dword_B73E40)); /*0x7864f6*/
  strcpy(this + 238, String::GetOrEmpty(&g_WebBrowserConfig)); /*0x786525*/
  v2 = &Handles; /*0x786534*/
  do /*0x786547*/
    ResetEvent(*v2++); /*0x78653c*/
  while ( (int)v2 < (int)g_WOL_RequestObject ); /*0x786547*/
  String = GetStringCSF(aTxtConnectingS, 0, g_Str_File_wonline_cpp, 9702); /*0x78655a*/
  WideString::Assign((wchar_t **)&Block, String); /*0x786564*/
  ShowUIMessage(16, (wchar_t **)&Block, 0); /*0x786575*/
  DeleteAndZero::Alt((void **)&Block); /*0x78657e*/
  (*(void (__stdcall **)(LPVOID, char *, int, _DWORD))(*(_DWORD *)ppv + 20))( /*0x78659b*/
    ppv,
    this,
    20,
    (unsigned __int8)dword_84A238);
  Block = 20; /*0x7865a4*/
  do /*0x786623*/
  {
    v4 = 30000; /*0x7865b6*/
    v5 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x7865bd*/
    if ( v5 == 258 ) /*0x7865c5*/
    {
      while ( 1 ) /*0x7865c7*/
      {
        v4 -= 100; /*0x7865c7*/
        if ( v4 <= 0 ) /*0x7865cc*/
          break; /*0x7865cc*/
        Game::ProcessIdle(); /*0x7865d2*/
        v5 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x7865e3*/
        if ( v5 != 258 ) /*0x7865eb*/
          goto LABEL_7; /*0x7865eb*/
      }
LABEL_21:
      v13 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7866e4*/
      if ( v13 ) /*0x7866f0*/
      {
        dword_B77DC8 = 0; /*0x7866f6*/
        CloseDialog(v13, 0); /*0x7866fc*/
      }
      Current = Dialog::GetCurrent(); /*0x786701*/
      DlgItem = GetDlgItem(Current, 1344); /*0x78670c*/
      if ( DlgItem ) /*0x786714*/
      {
LABEL_24:
        SetFocus(DlgItem); /*0x786716*/
        return 0; /*0x786729*/
      }
      return 0; /*0x786794*/
    }
LABEL_7:
    ResetEvent(*(&Handles + v5)); /*0x7865ed*/
    switch ( v5 ) /*0x7865fd*/
    {
      case 0u: /*0x7865fd*/
        v7 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x786630*/
        if ( v7 ) /*0x786637*/
        {
          dword_B77DC8 = 0; /*0x78663d*/
          CloseDialog(v7, 0); /*0x786643*/
        }
        v8 = Dialog::GetCurrent(); /*0x786648*/
        DlgItem = GetDlgItem(v8, 1344); /*0x786653*/
        if ( DlgItem ) /*0x78665b*/
          goto LABEL_24; /*0x78665b*/
        return 0; /*0x78665b*/
      case 5u: /*0x7865fd*/
        v10 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 9715); /*0x78668c*/
        ShowDialogConfirm(v10, 0, (int)GameLoop::Thunk, 0); /*0x786695*/
        v11 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x78669f*/
        if ( v11 ) /*0x7866a6*/
        {
          dword_B77DC8 = 0; /*0x7866ac*/
          CloseDialog(v11, 0); /*0x7866b2*/
        }
        v12 = Dialog::GetCurrent(); /*0x7866b7*/
        DlgItem = GetDlgItem(v12, 1344); /*0x7866c2*/
        if ( DlgItem ) /*0x7866ca*/
          goto LABEL_24; /*0x7866ca*/
        return 0; /*0x7866ca*/
      case 0x12u: /*0x7865fd*/
        goto LABEL_21; /*0x786607*/
    }
    if ( Block-- < 0 ) /*0x786614*/
    {
      v16 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 9722); /*0x786741*/
      ShowDialogConfirm(v16, 0, (int)GameLoop::Thunk, 0); /*0x78674a*/
      v17 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x786754*/
      if ( v17 ) /*0x78675b*/
      {
        dword_B77DC8 = 0; /*0x786761*/
        CloseDialog(v17, 0); /*0x786767*/
      }
      v18 = Dialog::GetCurrent(); /*0x78676c*/
      v19 = GetDlgItem(v18, 1344); /*0x786777*/
      if ( v19 ) /*0x78677f*/
        SetFocus(v19); /*0x786782*/
      return 0; /*0x786782*/
    }
  }
  while ( v5 != 2 ); /*0x786623*/
  v20 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x78679a*/
  if ( v20 ) /*0x7867a1*/
  {
    dword_B77DC8 = 0; /*0x7867a7*/
    CloseDialog(v20, 0); /*0x7867ad*/
  }
  v21 = Dialog::GetCurrent(); /*0x7867b2*/
  v22 = GetDlgItem(v21, 1344); /*0x7867bd*/
  if ( v22 ) /*0x7867c5*/
    SetFocus(v22); /*0x7867c8*/
  (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)ppv + 212))(ppv, 65552); /*0x7867db*/
  byte_B77DC0 = 0; /*0x7867e6*/
  ScenarioClass::LoadNetworkConfig((int)dword_A8B238); /*0x7867ec*/
  v55 = 0; /*0x7867f5*/
  v56 = 0; /*0x7867f9*/
  ReadRegistryOptionsWOL(&v55); /*0x7867fd*/
  ComPtr::Constructor(&v52); /*0x786806*/
  v52 = &rc_ptr<PlayerProfile>::`vftable'; /*0x786814*/
  if ( Flag::IsNot2(&v55) ) /*0x786818*/
  {
    v23 = LoadPlayerProfile(v54, (const char **)&dword_B73E40); /*0x78682a*/
    ComPtr::Set(&v52, v23[1]); /*0x786837*/
    v54[0] = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x786840*/
    ComPtr::Release(v54); /*0x786844*/
  }
  else
  {
    ComPtr::Set(&v52, dword_B75E4C); /*0x786856*/
  }
  if ( dword_A8B244 == 4 || dword_A8B244 == 5 ) /*0x786868*/
  {
    String::Assign((char **)&Block, v50 + 24); /*0x78687a*/
    unknown_libname_73(v54); /*0x786883*/
    v24 = String::Tokenize((const char **)&Block, 0, asc_8318B8, (void **)v54); /*0x786897*/
    if ( v24 >= 0 ) /*0x78689e*/
      String::Erase((const char **)&Block, 0, v24 + 1); /*0x7868a7*/
    String::AssignFromPtr((char **)&v50, (const char **)&Block); /*0x7868b5*/
    DeleteAndZero((void **)v54); /*0x7868be*/
    DeleteAndZero((void **)&Block); /*0x7868c7*/
    WOLOption::SetValue(&v50); /*0x7868d5*/
    DeleteAndZero((void **)&v50); /*0x7868de*/
    if ( Flag::IsNot2(&v55) ) /*0x7868e7*/
      SaveProfileWOL((int)v53, (const char **)&dword_B73E40); /*0x7868f9*/
  }
  strcpy(unk_A8B380, String::GetOrEmpty((char **)&dword_B73E40)); /*0x786922*/
  SessionClass::AssignSide(dword_A8B238, v53[7], 0); /*0x786938*/
  SessionClass::AssignColor(dword_A8B238, v53[8], 0); /*0x78694b*/
  SaveConfigWOL((int)dword_A8B238); /*0x786955*/
  SavePersonaConfigWOL(&dword_B73E40); /*0x78695f*/
  if ( g_UIPointerTable && strlen(unk_B761A8) ) /*0x786973*/
  {
    v25 = *(_DWORD *)g_UIPointerTable; /*0x78697f*/
    v47 = g_NetworkRematchState & 0xFFFF00; /*0x786991*/
    v26 = String::GetOrEmpty((char **)&dword_B73E40); /*0x786997*/
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(v25 + 20))( /*0x7869af*/
      g_UIPointerTable,
      unk_B761A8,
      g_WOL_GameConfig,
      v26,
      v47,
      -1,
      0,
      0);
    v27 = *(_DWORD *)g_UIPointerTable; /*0x7869c7*/
    v48 = g_NetworkRematchState & 0xFFFF00; /*0x7869c9*/
    v28 = String::GetOrEmpty((char **)&dword_B73E40); /*0x7869ca*/
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(v27 + 56))( /*0x7869e3*/
      g_UIPointerTable,
      unk_B761A8,
      g_WOL_GameConfig,
      v28,
      v48);
  }
  v29 = &Handles; /*0x7869ec*/
  do /*0x7869ff*/
    ResetEvent(*v29++); /*0x7869f4*/
  while ( (int)v29 < (int)g_WOL_RequestObject ); /*0x7869ff*/
  memset(v57, 0, sizeof(v57)); /*0x786a0c*/
  strcpy(&v57[36], String::GetOrEmpty((char **)&dword_B73E40)); /*0x786a36*/
  (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 188))(ppv, v57); /*0x786a48*/
  while ( 1 ) /*0x786a58*/
  {
    v30 = 30000; /*0x786a58*/
    v31 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x786a5f*/
    if ( v31 == 258 ) /*0x786a67*/
      break; /*0x786a67*/
LABEL_52:
    ResetEvent(*(&Handles + v31)); /*0x786a8f*/
    switch ( v31 ) /*0x786a9f*/
    {
      case 0u: /*0x786a9f*/
        v32 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x786abf*/
        if ( v32 ) /*0x786ac6*/
        {
          dword_B77DC8 = 0; /*0x786acc*/
          CloseDialog(v32, 0); /*0x786ad2*/
        }
        v33 = Dialog::GetCurrent(); /*0x786ad7*/
        v34 = GetDlgItem(v33, 1344); /*0x786ae2*/
        if ( v34 ) /*0x786aea*/
          goto LABEL_68; /*0x786aea*/
        goto LABEL_69; /*0x786aea*/
      case 5u: /*0x786a9f*/
        v35 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 9807); /*0x786b0c*/
        ShowDialogConfirm(v35, 0, (int)GameLoop::Thunk, 0); /*0x786b15*/
        v36 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x786b1f*/
        if ( v36 ) /*0x786b26*/
        {
          dword_B77DC8 = 0; /*0x786b2c*/
          CloseDialog(v36, 0); /*0x786b32*/
        }
        v37 = Dialog::GetCurrent(); /*0x786b37*/
        v34 = GetDlgItem(v37, 1344); /*0x786b42*/
        if ( v34 ) /*0x786b4a*/
          goto LABEL_68; /*0x786b4a*/
        goto LABEL_69; /*0x786b4a*/
      case 0x12u: /*0x786a9f*/
        goto LABEL_65; /*0x786aa9*/
      case 0xEu: /*0x786a9f*/
        goto LABEL_69; /*0x786ab2*/
    }
  }
  while ( 1 ) /*0x786a69*/
  {
    v30 -= 100; /*0x786a69*/
    if ( v30 <= 0 ) /*0x786a6e*/
      break; /*0x786a6e*/
    Game::ProcessIdle(); /*0x786a74*/
    v31 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x786a85*/
    if ( v31 != 258 ) /*0x786a8d*/
      goto LABEL_52; /*0x786a8d*/
  }
LABEL_65:
  v38 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x786b4e*/
  if ( v38 ) /*0x786b5a*/
  {
    dword_B77DC8 = 0; /*0x786b60*/
    CloseDialog(v38, 0); /*0x786b66*/
  }
  v39 = Dialog::GetCurrent(); /*0x786b6b*/
  v34 = GetDlgItem(v39, 1344); /*0x786b76*/
  if ( v34 ) /*0x786b7e*/
LABEL_68:
    SetFocus(v34); /*0x786b80*/
LABEL_69:
  String::ToLowerCopy((const char **)&dword_B73E40, (char **)&v51); /*0x786b87*/
  v40 = *((_DWORD *)g_WOL_ConnectionPool + (dword_B76548(&v51) & ((1 << dword_B7653C) - 1))); /*0x786bb5*/
  if ( !v40 ) /*0x786bba*/
    goto LABEL_72; /*0x786bba*/
  while ( !String::Compare((const char **)v40, (const char **)&v51) ) /*0x786bca*/
  {
    v40 = *(_DWORD *)(v40 + 8); /*0x786bcc*/
    if ( !v40 ) /*0x786bd1*/
      goto LABEL_72; /*0x786bd1*/
  }
  Block = 0; /*0x786c39*/
  v50 = 0; /*0x786c3d*/
  if ( (unsigned __int8)ConnectAndLoginWOL_Connect_7AE180(&v51, &v50) && v50 ) /*0x786c50*/
  {
    v42 = *(void **)v50; /*0x786c52*/
    Block = *(_DWORD *)v50; /*0x786c54*/
  }
  else
  {
    v42 = (void *)Block; /*0x786c5a*/
  }
  if ( v42 ) /*0x786c60*/
  {
    v43 = v53; /*0x786c66*/
    if ( v53 ) /*0x786c6c*/
    {
      v44 = (void *)v53[4]; /*0x786c72*/
      if ( v44 != v42 ) /*0x786c77*/
      {
        if ( !v44 ) /*0x786c7f*/
        {
          GadgetClass::TrackState((int)v53, (int)v42, 2); /*0x786c84*/
          SaveProfileWOL((int)v53, (const char **)&dword_B73E40); /*0x786c92*/
          v43 = v53; /*0x786c97*/
        }
        v45 = (void *)v43[4]; /*0x786ca0*/
        (*(void (__stdcall **)(LPVOID, void *))(*(_DWORD *)ppv + 184))(ppv, v45); /*0x786ca7*/
        (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 188))(ppv, v57); /*0x786cba*/
        Block = (int)v45; /*0x786ccf*/
        if ( (unsigned __int8)HashTable::Lookup(&v51, &v50) ) /*0x786cd3*/
        {
          p_Block = (const char **)&Block; /*0x786ce0*/
          goto LABEL_93; /*0x786ce4*/
        }
      }
    }
  }
  else
  {
LABEL_72:
    if ( v53 ) /*0x786bd9*/
    {
      v41 = (char *)v53[4]; /*0x786bdb*/
      if ( v41 ) /*0x786be0*/
        goto LABEL_97; /*0x786be0*/
    }
    SimpleDialogControl::Constructor(v54); /*0x786bea*/
    v54[0] = (int)&off_7F7624; /*0x786c03*/
    v41 = (char *)RunDialog(0xFEu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LobbyDlgProcWOL, (LPARAM)v54); /*0x786c0c*/
    if ( (int)v41 >= 0 ) /*0x786c10*/
    {
      ConnectAndLoginWOL_Connect(v54); /*0x786cea*/
    }
    else
    {
      v54[0] = (int)&off_7F7624; /*0x786c1a*/
      OwnerDrawControl::InitVtable(v54); /*0x786c1e*/
      v41 = 0; /*0x786c23*/
    }
    if ( v53 ) /*0x786cf5*/
    {
      GadgetClass::TrackState((int)v53, (int)v41, 3); /*0x786cfa*/
      SaveProfileWOL((int)v53, (const char **)&dword_B73E40); /*0x786d08*/
    }
    if ( v41 ) /*0x786d0f*/
    {
LABEL_97:
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 184))(ppv, v41); /*0x786d1a*/
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 188))(ppv, v57); /*0x786d2d*/
      v50 = v41; /*0x786d42*/
      if ( (unsigned __int8)HashTable::Lookup(&v51, v54) ) /*0x786d46*/
      {
        p_Block = &v50; /*0x786d4f*/
LABEL_93:
        ConnectAndLoginWOL_Connect_7ACBE0((int)&v51, p_Block); /*0x786d53*/
      }
    }
  }
  DeleteAndZero((void **)&v51); /*0x786d67*/
  v52 = &rc_ptr<PlayerProfile>::`vftable'; /*0x786d70*/
  ComPtr::Release(&v52); /*0x786d78*/
  return 1; /*0x78666a*/
}



// ==== 0x00786DC0  ObjectClass::method_786DC0  this=ObjectClass  sig=csp ====
char __thiscall sub_786DC0(ObjectClass *this)
{
  int v2; // esi
  char *v3; // eax
  char *v5; // [esp+0h] [ebp-18h]
  char *v6; // [esp+10h] [ebp-8h] BYREF
  char *v7; // [esp+14h] [ebp-4h] BYREF

  DeleteAndZero::Alt2((DeleteAndZero *)&g_WebBrowserConfig); /*0x786dcd*/
  v2 = 1; /*0x786dd2*/
  while ( 1 ) /*0x786de5*/
  {
    if ( !(*(int (__stdcall **)(LPVOID, int, char **, char **))(*(_DWORD *)ppv + 144))(ppv, v2, &v6, &v7) ) /*0x786dea*/
    {
      if ( v6 ) /*0x786dfa*/
      {
        if ( strlen(v6) ) /*0x786dfe*/
        {
          v5 = v6; /*0x786e08*/
          v3 = String::GetOrEmpty_Alt((String *)this); /*0x786e0b*/
          if ( !_strcmpi(v3, v5) ) /*0x786e11*/
            break; /*0x786e11*/
        }
      }
    }
    if ( ++v2 > 32 ) /*0x786e21*/
    {
      DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_EC[684]); /*0x786e28*/
      return 0; /*0x786e35*/
    }
  }
  String::Assign_Alt((String *)&g_WindowManager.__pad_EC[684], v6); /*0x786e40*/
  String::Assign_Alt((String *)&g_WebBrowserConfig, v7); /*0x786e4f*/
  LOBYTE(dword_84A238) = 0; /*0x786e54*/
  return 1; /*0x786e2f*/
}



// ==== 0x00786E70  ObjectClass::method_786E70  this=ObjectClass  sig=csp ====
int __thiscall sub_786E70(ObjectClass *this)
{
  void *ptr_0; // ecx
  int v3; // edi
  int i; // esi
  char *v5; // eax
  char *v6; // eax

  if ( !String::Length((String *)this) ) /*0x786e75*/
    return -1; /*0x786e75*/
  ptr_0 = g_WOL_UserList.AbstractClass; /*0x786e7e*/
  v3 = 1; /*0x786e84*/
  if ( (int)g_WOL_UserList.AbstractClass <= 1 ) /*0x786e8b*/
    return -1; /*0x786ed8*/
  for ( i = 248; ; i += 248 ) /*0x786e8d*/
  {
    v5 = 0; /*0x786e92*/
    if ( i >= 0 && v3 < (int)ptr_0 ) /*0x786e9a*/
      v5 = (char *)g_WOL_UserList.? + i; /*0x786ea1*/
    v6 = strchr(v5 + 24, 58); /*0x786ea9*/
    if ( v6 ) /*0x786eb3*/
    {
      if ( *v6 && (unsigned __int8)String::Equals_Alt((String *)this, v6 + 1) ) /*0x786ebe*/
        break; /*0x786ebe*/
    }
    ptr_0 = g_WOL_UserList.AbstractClass; /*0x786ec7*/
    if ( ++v3 >= (int)g_WOL_UserList.AbstractClass ) /*0x786ed6*/
      return -1; /*0x786ed6*/
  }
  return v3; /*0x786ed8*/
}



// ==== 0x00786EF0  ObjectClass::LoginFlowWOL_Open  this=ObjectClass  sig=csp ====
char LoginFlowWOL_Open(ObjectClass *this)
{
  const char *v2; // [esp-8h] [ebp-110h]
  int v3; // [esp-4h] [ebp-10Ch]
  char Buffer[260]; // [esp+4h] [ebp-104h] BYREF

  if ( dword_B77DF8 == -2147221385 /*0x786f26*/
    || dword_B77DF8 == -2147221384
    || dword_B77DF8 == -2147221390
    || dword_B77DF8 == -2147221388
    || dword_B77DF8 == -2147221387
    || dword_B77DF8 == -2147221386 )
  {
    if ( ShowDialogConfirm(&word_B77AD0, 4, (unsigned __int8 (*)(void))GameLoop::Thunk, 0) == 6 ) /*0x786f60*/
    {
      switch ( dword_B77DF8 ) /*0x786f78*/
      {
        case -2147221390: /*0x786f78*/
          v3 = dword_B77E50; /*0x786f99*/
          v2 = aHttpApiregiste_1; /*0x786f9a*/
          goto LABEL_16; /*0x786f9f*/
        case -2147221388: /*0x786f78*/
          sprintf(Buffer, "http://apiregister.westwood.com/support/disabled_%d.html", dword_B77E50); /*0x786fac*/
          break; /*0x786fac*/
        case -2147221387: /*0x786f78*/
          sprintf(Buffer, "http://apiregister.westwood.com/support/serialbanned_%d.html", dword_B77E50); /*0x786fb9*/
          break; /*0x786fb9*/
        case -2147221386: /*0x786f78*/
          v3 = dword_B77E50; /*0x786fbb*/
          v2 = aHttpApiregiste_4; /*0x786fbc*/
LABEL_16:
          sprintf(Buffer, v2, v3); /*0x786fc1*/
          break; /*0x786fc6*/
        case -2147221385: /*0x786f78*/
          sprintf(Buffer, "http://apiregister.westwood.com/support/serialunknown_%d.html", dword_B77E50); /*0x786f8a*/
          break; /*0x786f8a*/
        case -2147221384: /*0x786f78*/
          sprintf(Buffer, "http://apiregister.westwood.com/support/skuserialmismatch_%d.html", dword_B77E50); /*0x786f97*/
          break; /*0x786f97*/
        default:
          break;
      }
      OpenURLWOL(Buffer, 1); /*0x786fce*/
    }
    return 1; /*0x786fdc*/
  }
  else
  {
    ShowDialogConfirm(&word_B77AD0, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x786f36*/
    return 0; /*0x786f3b*/
  }
}



// ==== 0x00787010  ObjectClass::LoginFlowWOL  this=ObjectClass  sig=csp ====
int LoginFlowWOL(ObjectClass *this)
{
  ObjectClass *v1; // edi
  int result; // eax
  wchar_t *StringCSF; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // esi
  char *v7; // eax
  int v8; // esi
  String *v9; // edi
  char *v10; // eax
  String *v11; // edi
  char *v12; // eax
  char **ConfigWOL; // eax
  int v14; // eax
  unsigned __int16 v15; // si
  Dialog *Dialog; // esi
  HWND DlgItem; // eax
  TechnoTypeClass *v18; // ecx
  TechnoTypeClass *v19; // ecx
  TechnoTypeClass *v20; // ecx
  ObjectClass *PlayerProfile; // eax
  String *v22; // ebp
  int ptr_0; // ecx
  int v24; // esi
  int v25; // edi
  char *v26; // eax
  char *v27; // eax
  int v28; // eax
  char *v29; // esi
  char *v30; // eax
  HWND v31; // eax
  HWND Current; // eax
  HWND v33; // eax
  unsigned __int8 v34; // [esp-8h] [ebp-50h]
  char *v35; // [esp-4h] [ebp-4Ch]
  int v36; // [esp-4h] [ebp-4Ch]
  ObjectClass *v37; // [esp+0h] [ebp-48h]
  char v38; // [esp+13h] [ebp-35h]
  DeleteAndZero v39; // [esp+14h] [ebp-34h] BYREF
  int v40; // [esp+20h] [ebp-28h]
  Flag v41; // [esp+24h] [ebp-24h] BYREF
  int v42; // [esp+30h] [ebp-18h]
  Flag v43; // [esp+34h] [ebp-14h] BYREF

  v38 = 0; /*0x787019*/
  dword_B77DF8 = 0; /*0x78701e*/
  result = LoginFlowWOL_Reset(v1); /*0x787024*/
  if ( result != 1 ) /*0x78702c*/
    return result; /*0x78702c*/
  memset(&stru_B76AC4.ambientSoundController[4], 0, 0x10Cu); /*0x787043*/
  memset(&g_WindowManager.__pad_EC[84], 0, 0x10Cu); /*0x78704f*/
  *(_DWORD *)&g_WindowManager.__pad_EC[636] = 0; /*0x78705d*/
  stru_B76AC4.? = 0; /*0x787063*/
  g_WOL_UserList.owningHouseIndex = 0; /*0x787069*/
  stru_B77D80.HashTable_field_0x50 = 0; /*0x78706f*/
  v40 = 0; /*0x787075*/
  StringCSF = GetStringCSF(g_Str_TXT_FETCHING_SERVLIST, 0, g_Str_File_wonline_cpp, 24300); /*0x787079*/
  WideString::Assign((wchar_t **)&v39, StringCSF); /*0x787083*/
  ShowUIMessage(16, (wchar_t **)&v39, 0); /*0x787092*/
  DeleteAndZero::Alt(&v39); /*0x78709b*/
  v4 = 8960; /*0x7870a5*/
  if ( dword_A8B244 != 3 ) /*0x7870ad*/
    v4 = 10496; /*0x7870af*/
  v5 = LoginWOL(v4); /*0x7870b4*/
  if ( v5 ) /*0x7870bb*/
  {
    v38 = 1; /*0x7870c0*/
    v40 = -2; /*0x7870c5*/
    if ( v5 == 2 ) /*0x7870cd*/
      v40 = -1; /*0x7870cf*/
  }
  *(_DWORD *)v43.__pad_0 = 0; /*0x7870db*/
  LOBYTE(v43.Flag_field_0x04) = 0; /*0x7870df*/
  ReadRegistryOptionsWOL((ObjectClass *)&v43); /*0x7870e4*/
  if ( v38 ) /*0x7870ef*/
    goto LABEL_98; /*0x7870ef*/
  if ( InfantryClass::SetField6((InfantryClass *)&v43) ) /*0x7870f9*/
  {
    ReadAutoLoginWOL((ObjectClass *)&v39); /*0x78710f*/
    if ( String::Length((String *)&v39) ) /*0x787118*/
    {
      DeleteAndZero::Alt2((DeleteAndZero *)&g_WebBrowserConfig); /*0x78712a*/
      v6 = 1; /*0x78712f*/
      while ( 1 ) /*0x787142*/
      {
        if ( !(*(int (__stdcall **)(LPVOID, int, Flag *, int *))(*(_DWORD *)ppv + 144))( /*0x787147*/
                ppv,
                v6,
                &v41,
                &v41.Flag_field_0x08) )
        {
          if ( *(_DWORD *)v41.__pad_0 ) /*0x787157*/
          {
            if ( strlen(*(const char **)v41.__pad_0) ) /*0x78715b*/
            {
              v35 = *(char **)v41.__pad_0; /*0x787165*/
              v7 = String::GetOrEmpty_Alt((String *)&v39); /*0x78716a*/
              if ( !_strcmpi(v7, v35) ) /*0x787170*/
                break; /*0x787170*/
            }
          }
        }
        if ( ++v6 > 32 ) /*0x787180*/
        {
          DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_EC[684]); /*0x787187*/
          goto LABEL_48; /*0x78718c*/
        }
      }
      String::Assign_Alt((String *)&g_WindowManager.__pad_EC[684], *(const char **)v41.__pad_0); /*0x78719b*/
      String::Assign_Alt((String *)&g_WebBrowserConfig, (const char *)v41.Flag_field_0x08); /*0x7871aa*/
      v8 = -1; /*0x7871b4*/
      LOBYTE(dword_84A238) = 0; /*0x7871ba*/
      if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x7871cb*/
      {
        LoadPlayerProfile((ObjectClass *)&v41.Flag_field_0x08, (const char **)&v39); /*0x7871d9*/
        if ( !v42 ) /*0x7871e4*/
          goto LABEL_29; /*0x7871e4*/
        v9 = (String *)(v42 + 12); /*0x7871e6*/
        if ( !String::Length((String *)(v42 + 12)) ) /*0x7871eb*/
          goto LABEL_29; /*0x7871eb*/
        v8 = 1; /*0x7871f9*/
        if ( (int)g_WOL_UserList.AbstractClass <= 1 ) /*0x787200*/
          goto LABEL_29; /*0x787200*/
        while ( 1 ) /*0x78720d*/
        {
          *(_DWORD *)v41.__pad_0 = 0; /*0x78720d*/
          GetBuddyEntryWOL(&g_WOL_UserList, &v41, v8); /*0x787211*/
          v10 = strchr((const char *)(*(_DWORD *)v41.__pad_0 + 24), 58); /*0x787220*/
          if ( v10 ) /*0x78722a*/
          {
            if ( *v10 && (unsigned __int8)String::Equals_Alt(v9, v10 + 1) ) /*0x787235*/
              break; /*0x787235*/
          }
          if ( ++v8 >= (int)g_WOL_UserList.AbstractClass ) /*0x787246*/
            goto LABEL_29; /*0x787246*/
        }
        if ( v8 == -1 ) /*0x78724d*/
LABEL_29:
          v8 = dword_B76468; /*0x78724f*/
        v41.Flag_field_0x08 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x787255*/
      }
      else
      {
        LoadPlayerProfile((ObjectClass *)&v41.Flag_field_0x08, (const char **)&v39); /*0x78726a*/
        if ( v42 ) /*0x787275*/
        {
          if ( String::Length((String *)(v42 + 12)) ) /*0x78727a*/
          {
            v11 = (String *)(v42 + 12); /*0x78728f*/
            if ( String::Length((String *)(v42 + 12)) && (v8 = 1, (int)g_WOL_UserList.AbstractClass > 1) ) /*0x7872a9*/
            {
              while ( 1 ) /*0x7872b6*/
              {
                *(_DWORD *)v41.__pad_0 = 0; /*0x7872b6*/
                GetBuddyEntryWOL(&g_WOL_UserList, &v41, v8); /*0x7872ba*/
                v12 = strchr((const char *)(*(_DWORD *)v41.__pad_0 + 24), 58); /*0x7872c9*/
                if ( v12 ) /*0x7872d3*/
                {
                  if ( *v12 && (unsigned __int8)String::Equals_Alt(v11, v12 + 1) ) /*0x7872de*/
                    break; /*0x7872de*/
                }
                if ( ++v8 >= (int)g_WOL_UserList.AbstractClass ) /*0x7872ef*/
                  goto LABEL_40; /*0x7872ef*/
              }
            }
            else
            {
LABEL_40:
              v8 = -1; /*0x7872f1*/
            }
          }
          else
          {
            v8 = dword_B76468; /*0x787283*/
          }
        }
        v41.Flag_field_0x08 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x7872f4*/
      }
      ComPtr::Release((ComPtr *)&v41.Flag_field_0x08); /*0x7872fc*/
      if ( v8 != -1 ) /*0x787304*/
      {
        dword_B76468 = v8; /*0x787309*/
        if ( v8 >= 1 && v8 < (int)g_WOL_UserList.AbstractClass ) /*0x787317*/
        {
          *(_DWORD *)v41.__pad_0 = 0; /*0x787324*/
          GetBuddyEntryWOL(&g_WOL_UserList, &v41, v8); /*0x787328*/
          if ( ConnectAndLoginWOL(*(char **)v41.__pad_0) ) /*0x787331*/
          {
            DeleteAndZero((ObjectClass *)&v39); /*0x78733e*/
            return 1; /*0x78734f*/
          }
        }
        v38 = LoginFlowWOL_Open(v37); /*0x787355*/
      }
    }
LABEL_48:
    DeleteAndZero((ObjectClass *)&v39); /*0x787359*/
  }
  if ( !String::Length((String *)&g_WindowManager.__pad_EC[684]) && (unsigned __int8)Flag::IsNot2(&v43) ) /*0x787374*/
  {
    ConfigWOL = LoadConfigWOL((ObjectClass *)&v41.Flag_field_0x08); /*0x787381*/
    String::Reassign((String *)&g_WindowManager.__pad_EC[684], (const char **)ConfigWOL); /*0x78738c*/
    DeleteAndZero((ObjectClass *)&v41.Flag_field_0x08); /*0x787395*/
  }
  String::Assign((String *)&v41, &g_INI_DefaultBuffer); /*0x7873a3*/
  ReadSettingsWOL((ObjectClass *)&v41); /*0x7873ac*/
  DeleteAndZero((ObjectClass *)&v41); /*0x7873b5*/
  if ( v38 ) /*0x7873c0*/
    return 0; /*0x7873cb*/
  Debug::Log(); /*0x7873d1*/
  SimpleDialogControl::Constructor((SimpleDialogControl *)&v43.Flag_field_0x08); /*0x7873dd*/
  v43.Flag_field_0x08 = (int)&off_7F7624; /*0x7873eb*/
  v14 = -((unsigned __int8)Flag::IsNot2(&v43) != 0); /*0x7873f6*/
  LOBYTE(v14) = v14 & 0xF2; /*0x7873f8*/
  v15 = v14 + 285; /*0x7873ff*/
  LoginFlowWOL_Load_72C600(); /*0x787401*/
  Screen::Capture(1, 0, (int)&off_7F7624, 0); /*0x78740a*/
  Dialog = (Dialog *)CreateDialog( /*0x787420*/
                       v15,
                       (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))OptionsDlgProcWOL,
                       (LPARAM)&v43.Flag_field_0x08);
  Dialog::Show(Dialog); /*0x787424*/
  if ( !String::Length((String *)&g_WindowManager.__pad_EC[684]) || String::Length((String *)&g_WebBrowserConfig) ) /*0x78743c*/
    DlgItem = GetDlgItem((HWND)Dialog, 1576); /*0x787452*/
  else
    DlgItem = GetDlgItem((HWND)Dialog, 1836); /*0x78744a*/
  SetFocus(DlgItem); /*0x787459*/
  while ( !(unsigned __int8)ObjectClass::Release(&v43.Flag_field_0x08) ) /*0x787463*/
  {
    if ( Game::ProcessIdle(v18) ) /*0x78746c*/
      break; /*0x787473*/
    if ( (unsigned __int8)Dialog::PumpMessages() ) /*0x787475*/
      break; /*0x78747c*/
    LOBYTE(v19) = 0; /*0x78747e*/
    ScreenSaver::Process(v19, v37); /*0x787480*/
  }
  Dialog::Destroy(Dialog); /*0x787494*/
  LoginFlowWOL_Destroy_72C650(v37); /*0x787499*/
  if ( ObjectClass::GetMember01(&v43.Flag_field_0x08) == 2 ) /*0x7874aa*/
  {
    v38 = 1; /*0x7874ac*/
LABEL_97:
    v43.Flag_field_0x08 = (int)&off_7F7624; /*0x787704*/
    OwnerDrawControl::InitVtable((OwnerDrawControl *)&v43.Flag_field_0x08); /*0x78770c*/
LABEL_98:
    v31 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x787711*/
    if ( v31 ) /*0x78771d*/
    {
      stru_B77D80.HashTable_field_0x48 = 0; /*0x787723*/
      CloseDialog(v31, 0); /*0x787729*/
    }
    Current = (HWND)Dialog::GetCurrent(); /*0x78772e*/
    v33 = GetDlgItem(Current, 1344); /*0x787739*/
    if ( v33 ) /*0x787741*/
      SetFocus(v33); /*0x787744*/
    if ( !v38 ) /*0x787750*/
      LoginFlowWOL_Open(v37); /*0x787752*/
    LOBYTE(stru_B77D80.HashTable_field_0x40) = 1; /*0x78775b*/
    return v40; /*0x787757*/
  }
  Game::ProcessIdle(v20); /*0x7874b6*/
  LOBYTE(stru_B77D80.HashTable_field_0x40) = 0; /*0x7874bf*/
  *(_DWORD *)v41.__pad_0 = 0; /*0x7874c6*/
  LOBYTE(v41.Flag_field_0x04) = 0; /*0x7874ca*/
  ReadRegistryOptionsWOL((ObjectClass *)&v41); /*0x7874cf*/
  ComPtr::Constructor((ComPtr *)&v41.Flag_field_0x08); /*0x7874d8*/
  v41.Flag_field_0x08 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x7874e6*/
  if ( (unsigned __int8)Flag::IsNot2(&v41) ) /*0x7874ea*/
  {
    PlayerProfile = LoadPlayerProfile((ObjectClass *)&v39, (const char **)&g_WindowManager.__pad_EC[684]); /*0x7874fc*/
    ComPtr::Set((ComPtr *)&v41.Flag_field_0x08, (int)PlayerProfile->?); /*0x787509*/
    *(_DWORD *)v39.__pad_0 = &rc_ptr<PlayerProfile>::`vftable'; /*0x787512*/
    ComPtr::Release((ComPtr *)&v39); /*0x787516*/
  }
  else
  {
    ComPtr::Set((ComPtr *)&v41.Flag_field_0x08, stru_B75E48.ComPtr_field_0x04); /*0x787528*/
  }
  v22 = (String *)(v42 + 12); /*0x787531*/
  if ( !String::Length((String *)(v42 + 12)) ) /*0x787536*/
    goto LABEL_82; /*0x787536*/
  ptr_0 = (int)g_WOL_UserList.AbstractClass; /*0x787543*/
  v24 = 1; /*0x787549*/
  if ( (int)g_WOL_UserList.AbstractClass <= 1 ) /*0x787550*/
  {
LABEL_77:
    v28 = dword_B76468; /*0x78759d*/
    goto LABEL_78; /*0x78759d*/
  }
  v25 = 248; /*0x787552*/
  while ( 1 ) /*0x787557*/
  {
    v26 = 0; /*0x787557*/
    if ( v25 >= 0 && v24 < ptr_0 ) /*0x78755f*/
      v26 = (char *)g_WOL_UserList.? + v25; /*0x787566*/
    v27 = strchr(v26 + 24, 58); /*0x78756e*/
    if ( v27 ) /*0x787578*/
    {
      if ( *v27 && (unsigned __int8)String::Equals_Alt(v22, v27 + 1) ) /*0x787583*/
        break; /*0x787583*/
    }
    ptr_0 = (int)g_WOL_UserList.AbstractClass; /*0x78758c*/
    ++v24; /*0x787592*/
    v25 += 248; /*0x787593*/
    if ( v24 >= (int)g_WOL_UserList.AbstractClass ) /*0x78759b*/
      goto LABEL_77; /*0x78759b*/
  }
  if ( v24 == -1 ) /*0x7875b5*/
  {
LABEL_82:
    v28 = dword_B76468; /*0x7875c6*/
    ptr_0 = (int)g_WOL_UserList.AbstractClass; /*0x7875cb*/
  }
  else
  {
    ptr_0 = (int)g_WOL_UserList.AbstractClass; /*0x7875b7*/
    v28 = v24; /*0x7875bd*/
    dword_B76468 = v24; /*0x7875bf*/
  }
LABEL_78:
  if ( v28 < ptr_0 ) /*0x7875a4*/
  {
    if ( v28 != -1 ) /*0x7875d6*/
    {
      if ( v28 >= 1 ) /*0x7875f0*/
        goto LABEL_87; /*0x7875f0*/
LABEL_96:
      v41.Flag_field_0x08 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x7876f1*/
      ComPtr::Release((ComPtr *)&v41.Flag_field_0x08); /*0x7876fd*/
      goto LABEL_97; /*0x7876fd*/
    }
  }
  else
  {
    dword_B76468 = -1; /*0x7875a6*/
  }
  if ( ptr_0 <= 1 ) /*0x7875db*/
    goto LABEL_96; /*0x7875db*/
  v28 = 1; /*0x7875e1*/
  dword_B76468 = 1; /*0x7875e6*/
LABEL_87:
  if ( v28 >= ptr_0 || !ConnectAndLoginWOL((char *)g_WOL_UserList.? + 248 * v28) ) /*0x787614*/
    goto LABEL_96; /*0x78761b*/
  if ( byte_B77E68 && (unsigned __int8)Flag::IsNot2(&v41) ) /*0x78762e*/
  {
    v36 = *(_DWORD *)(v42 + 16); /*0x787644*/
    v34 = dword_84A238; /*0x787645*/
    v29 = String::GetOrEmpty((String *)&g_WebBrowserConfig); /*0x787655*/
    v30 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x787657*/
    FindChannelWOL(v30, (int)v29, v34, v36); /*0x787660*/
    SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x78766a*/
  }
  if ( InfantryClass::SetField6((InfantryClass *)&v41) && ReadWOLLobbyPlayerOption() ) /*0x78767c*/
  {
    Screen::Capture(1, 0, (int)&off_7F7624, (int)v22); /*0x787689*/
    SimpleDialogControl::Constructor((SimpleDialogControl *)&v39); /*0x787692*/
    *(_DWORD *)v39.__pad_0 = &off_7F7624; /*0x787697*/
    LoginFlowWOL_Load(); /*0x78769b*/
    RunDialog(0x112u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_79AE00, (LPARAM)&v39); /*0x7876af*/
    LoginFlowWOL_Destroy(v37); /*0x7876b4*/
    *(_DWORD *)v39.__pad_0 = &off_7F7624; /*0x7876bd*/
    OwnerDrawControl::InitVtable((OwnerDrawControl *)&v39); /*0x7876c1*/
  }
  v41.Flag_field_0x08 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x7876ca*/
  ComPtr::Release((ComPtr *)&v41.Flag_field_0x08); /*0x7876d2*/
  v43.Flag_field_0x08 = (int)&off_7F7624; /*0x7876db*/
  OwnerDrawControl::InitVtable((OwnerDrawControl *)&v43.Flag_field_0x08); /*0x7876df*/
  return 1; /*0x787348*/
}



// ==== 0x00787770  NetworkLobbyWOL  this=-  sig=csp ====
int __fastcall NetworkLobbyWOL(HWND hWnd, char a2)
{
  char *v3; // eax
  int i; // edi
  int v5; // eax
  int j; // esi
  int v7; // eax
  int k; // esi
  int result; // eax
  HANDLE *v10; // esi
  int v11; // eax
  char *v12; // ebx
  char *v13; // edi
  void *v14; // ebx
  char *v15; // esi
  wchar_t *v16; // eax
  wchar_t *StringCSF; // eax
  int m; // esi
  int v19; // esi
  wchar_t *v20; // esi
  HWND v21; // eax
  HANDLE *v22; // esi
  wchar_t *v23; // esi
  HWND v24; // eax
  int v25; // eax
  TechnoTypeClass *v26; // ecx
  DWORD n; // esi
  HWND v28; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  HWND v31; // eax
  TechnoTypeClass *v32; // ecx
  DWORD ii; // ebx
  HWND v34; // eax
  HWND v35; // eax
  HWND v36; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  HWND v41; // eax
  HWND v42; // eax
  HWND v43; // eax
  HWND v44; // eax
  HWND v45; // eax
  TechnoTypeClass *v46; // ecx
  HWND v47; // eax
  HWND v48; // eax
  HWND v49; // eax
  unsigned int v50; // eax
  unsigned int jj; // ebp
  ObjectClass *v52; // esi
  ObjectClass *v53; // edi
  unsigned int v54; // ecx
  int *lastLayer; // ebp
  int v56; // esi
  int *v57; // edi
  int v58; // ebx
  int v59; // esi
  int v60; // edx
  int v61; // ecx
  int v62; // eax
  StringVector v63; // [esp+4h] [ebp-2Ch] BYREF
  char v64; // [esp+23h] [ebp-Dh]
  int v65; // [esp+24h] [ebp-Ch]
  String v66; // [esp+28h] [ebp-8h] BYREF

  v64 = a2; /*0x787780*/
  v65 = 0; /*0x787786*/
  if ( BYTE1(stru_B77D80.HashTable_field_0x40) /*0x7877bb*/
    && *(_DWORD *)&dword_A8B238 == 4
    && dword_A8B244 == 3
    && dword_A8D584 != -1
    && dword_A8D584 < 8 )
  {
    WideString::Assign((wchar_t **)&v66, (wchar_t *)&unk_A8D1FC + 56 * dword_A8D584); /*0x7877d8*/
    ToWideStringCharAlt((char **)&v66.m_3[1], (const wchar_t **)&v66); /*0x7877e5*/
    DeleteAndZero::Alt((DeleteAndZero *)&v66); /*0x7877ee*/
    v3 = String::GetOrEmpty((String *)&v66.m_3[1]); /*0x7877fe*/
    if ( !_strnicmp(v3, unk_A8B380, 0x14u) ) /*0x787804*/
    {
      if ( !dword_A8B3AC ) /*0x78781b*/
      {
        unknown_libname_73(&v66); /*0x78782e*/
        memset(&v63, 0, 12); /*0x78784e*/
        for ( i = 0; i < *(_DWORD *)&stru_B736F8; ++i ) /*0x787859*/
        {
          DynamicStringArray::Get(&stru_B736F8, (char **)&v66, i); /*0x787866*/
          StringVector::Insert(&v63, (const char **)&v66, *(int *)v63.__pad_0); /*0x787875*/
        }
LABEL_24:
        DeleteAndZero((ObjectClass *)&v66); /*0x78795b*/
        Network_Delete(*(int *)v63.__pad_0, v63.StringVector_field_0x04, (void **)v63.StringVector_field_0x08); /*0x787960*/
        goto LABEL_25; /*0x787960*/
      }
      if ( dword_A8B3AC == 1 ) /*0x787890*/
      {
        memset(&v63, 0, 12); /*0x78789f*/
        unknown_libname_73(&v66); /*0x7878a7*/
        Array::CleanupArrayWOL((Array *)&v63); /*0x7878ae*/
        v5 = *(_DWORD *)&g_WindowManager.__pad_EC[68]; /*0x7878b3*/
        for ( j = 0; j < *(int *)&g_WindowManager.__pad_EC[68]; ++j ) /*0x7878bc*/
        {
          if ( j >= 0 && j < v5 ) /*0x7878c4*/
            String::Reassign(&v66, (const char **)(*(_DWORD *)&g_WindowManager.__pad_EC[76] + 4 * j)); /*0x7878d3*/
          StringVector::Insert(&v63, (const char **)&v66, *(int *)v63.__pad_0); /*0x7878e2*/
          v5 = *(_DWORD *)&g_WindowManager.__pad_EC[68]; /*0x7878e7*/
        }
        goto LABEL_24; /*0x7878ef*/
      }
    }
    else if ( !dword_A8B3AC ) /*0x7878f9*/
    {
      memset(&v63, 0, 12); /*0x787904*/
      unknown_libname_73(&v66); /*0x78790c*/
      Array::CleanupArrayWOL((Array *)&v63); /*0x787913*/
      v7 = *(_DWORD *)stru_B76510.__pad_0; /*0x787918*/
      for ( k = 0; k < *(int *)stru_B76510.__pad_0; ++k ) /*0x787921*/
      {
        if ( k >= 0 && k < v7 ) /*0x787929*/
          String::Reassign(&v66, (const char **)(stru_B76510.StringVector_field_0x08 + 4 * k)); /*0x787939*/
        StringVector::Insert(&v63, (const char **)&v66, *(int *)v63.__pad_0); /*0x787948*/
        v7 = *(_DWORD *)stru_B76510.__pad_0; /*0x78794d*/
      }
      goto LABEL_24; /*0x787955*/
    }
LABEL_25:
    DeleteAndZero((ObjectClass *)&v66.m_3[1]); /*0x787965*/
  }
  BYTE1(stru_B77D80.HashTable_field_0x40) = 0; /*0x78796e*/
  g_NetworkLobbyState = 0; /*0x78797d*/
  if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x78798c*/
  {
    (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)ppv + 180))(ppv, dword_A8B3AC); /*0x78799d*/
    if ( !byte_B77E10 ) /*0x7879aa*/
      InitVersionStringsWOL((ObjectClass *)v63.StringVector_field_0x0C); /*0x7879ac*/
  }
  Network::Init(); /*0x7879b1*/
  if ( !BYTE2(stru_B77D80.HashTable_field_0x40) /*0x7879c7*/
    || (result = LoginFlowWOL((ObjectClass *)v63.StringVector_field_0x0C), result == 1) )
  {
    v10 = &Handles; /*0x7879d3*/
    do /*0x7879e6*/
      ResetEvent(*v10++); /*0x7879db*/
    while ( (int)v10 < (int)g_WOL_RequestObject ); /*0x7879e6*/
    if ( !hWnd ) /*0x7879ea*/
    {
      Screen::Capture(1, 0, 0, 0); /*0x7879f4*/
      Network_Load_72CD60(); /*0x7879f9*/
      hWnd = (HWND)CreateDialog(0x113u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WOLobby::DlgProc, 0); /*0x787a13*/
      if ( String::Length((String *)&g_WindowManager.Array_field_0x38) ) /*0x787a15*/
      {
        v11 = String::Length((String *)&g_WindowManager.Array_field_0x38); /*0x787a27*/
        v12 = (char *)__2_YAPAXI_Z(v11 + 1); /*0x787a33*/
        if ( v12 ) /*0x787a3a*/
        {
          v13 = String::GetOrEmpty((String *)&g_WindowManager.Array_field_0x38); /*0x787a4a*/
          v63.StringVector_field_0x08 = (int)asc_83F328; /*0x787a51*/
          v63.StringVector_field_0x04 = (int)strcpy(v12, v13); /*0x787a66*/
          v15 = strtok((char *)v63.StringVector_field_0x04, (const char *)v63.StringVector_field_0x08); /*0x787a74*/
          while ( v15 ) /*0x787a7b*/
          {
            String::Assign((String *)&v66.m_3[1], v15); /*0x787a82*/
            CharStringToWide((wchar_t **)&v66, (const char **)&v66.m_3[1]); /*0x787a8f*/
            DeleteAndZero((ObjectClass *)&v66.m_3[1]); /*0x787a98*/
            v16 = WideString::GetOrEmpty((wchar_t **)&v66); /*0x787aa1*/
            Dialog::ShowMessage(-1, (size_t)v16); /*0x787aae*/
            v15 = strtok(0, asc_83F328); /*0x787ac6*/
            DeleteAndZero::Alt((DeleteAndZero *)&v66); /*0x787ac8*/
          }
          Dialog::ShowMessage(-1, (size_t)asc_830174); /*0x787add*/
          DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.Array_field_0x38); /*0x787aea*/
          __3_YAXPAX_Z(v14); /*0x787af0*/
        }
      }
      StringCSF = GetStringCSF(aGuiLogincomple, 0, g_Str_File_wonline_cpp, 10388); /*0x787b09*/
      WideString::Assign((wchar_t **)&v66.m_3[1], StringCSF); /*0x787b13*/
      ShowUIMessage(16, (wchar_t **)&v66.m_3[1], 0); /*0x787b23*/
      DeleteAndZero::Alt((DeleteAndZero *)&v66.m_3[1]); /*0x787b2c*/
    }
    dword_B77DE0 = 1; /*0x787b3f*/
    ++dword_B77DDC; /*0x787b49*/
    (*(void (__stdcall **)(LPVOID, _DWORD))(*(_DWORD *)ppv + 176))(ppv, 0); /*0x787b53*/
    for ( m = 0; m < *(int *)g_WindowManager.__pad_0; ++m ) /*0x787b62*/
      Object::DtorWithDelete((Object *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * m), 0); /*0x787b6e*/
    v19 = 0; /*0x787b82*/
    for ( *(_DWORD *)g_WindowManager.__pad_0 = 0; v19 < *(int *)&stru_B76900.needsRedraw; ++v19 ) /*0x787b8c*/
      Object::DtorWithDelete((Object *)(&stru_B76900.parachute->AnimClass_field_0x0 + v19), 0); /*0x787b97*/
    *(_DWORD *)&stru_B76900.needsRedraw = 0; /*0x787bab*/
    HashTable::CleanupAndResize((HashTable *)&stru_B76900.isAliveFlag); /*0x787bb1*/
    HashTable::Rebuild((HashTable *)&stru_B765EC.?); /*0x787bbb*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 220))(ppv); /*0x787bc8*/
    if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x787be0*/
      RefreshChannelListWOL((ObjectClass *)v63.StringVector_field_0x0C); /*0x787be2*/
    RefreshGameListWOL((ObjectClass *)v63.StringVector_field_0x0C); /*0x787be7*/
    dword_84A1BC = 41; /*0x787bfd*/
    v20 = GetStringCSF(aTxtReqChanlist, 0, g_Str_File_wonline_cpp, 10408); /*0x787c11*/
    v21 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x787c13*/
    if ( v21 ) /*0x787c20*/
      SendDlgItemMessageA(v21, 1458, 0x4B2u, 0, (LPARAM)v20); /*0x787c30*/
    if ( !stru_B76510.StringVector_field_0x10 || RequestChannelListWOL() ) /*0x787c41*/
    {
      v22 = &Handles; /*0x787c4e*/
      do /*0x787c65*/
        ResetEvent(*v22++); /*0x787c56*/
      while ( (int)v22 < (int)g_WOL_RequestObject ); /*0x787c65*/
      v63.StringVector_field_0x08 = 0; /*0x787c67*/
      v63.StringVector_field_0x04 = 0; /*0x787c69*/
      *(_DWORD *)v63.__pad_0 = g_Str_Trace_Requesting_channel_list_type____d__ping_; /*0x787c6b*/
      *(_DWORD *)&v66.m_3[1] = 0; /*0x787c70*/
      Debug::Log(); /*0x787c78*/
      if ( (*(int (__stdcall **)(LPVOID, _DWORD, _DWORD))(*(_DWORD *)ppv + 24))(ppv, *(_DWORD *)&v66.m_3[1], 0) ) /*0x787c8f*/
      {
        SetEvent(Handles); /*0x787d0d*/
      }
      else
      {
        Network_Helper_7ADB00( /*0x787ca6*/
          (ObjectClass *)&stru_B76510.StringVector_field_0x10,
          &v66.m_3[1],
          stru_B76510.StringVector_field_0x10);
        if ( RequestChannelListWOL() ) /*0x787cab*/
        {
          v23 = GetStringCSF(g_Str_TXT_JOINLOB, 0, g_Str_File_wonline_cpp, 10415); /*0x787cd3*/
          v24 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x787cd5*/
          if ( v24 ) /*0x787cdc*/
            SendDlgItemMessageA(v24, 1458, 0x4B2u, 0, (LPARAM)v23); /*0x787cec*/
          v25 = JoinGameLobbyWOL(); /*0x787d1a*/
          byte_84A210 = 1; /*0x787d22*/
          if ( v25 != -1 ) /*0x787d29*/
          {
            for ( n = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x787d4a*/
                  n == 258;
                  n = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u) )
            {
              Game::ProcessIdle(v26); /*0x787d4c*/
            }
            ResetEvent(*(&Handles + n)); /*0x787d70*/
            if ( !n || n == 5 ) /*0x787d83*/
            {
LABEL_86:
              CloseDialog(hWnd, 0); /*0x787f79*/
              Game::ProcessIdle(v46); /*0x787f82*/
              hWnd = 0; /*0x787f8c*/
              if ( ppv ) /*0x787f90*/
                (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x787f95*/
            }
            else
            {
              g_WOL_ChannelLeaveState = 0; /*0x787d91*/
              PostMessageA(hWnd, 0x593u, 0, 0); /*0x787d97*/
              v28 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x787da2*/
              if ( v28 ) /*0x787da9*/
              {
                stru_B77D80.HashTable_field_0x48 = 0; /*0x787daf*/
                CloseDialog(v28, 0); /*0x787db5*/
              }
              Current = (HWND)Dialog::GetCurrent(); /*0x787dba*/
              DlgItem = GetDlgItem(Current, 1344); /*0x787dc5*/
              if ( DlgItem ) /*0x787dc9*/
                SetFocus(DlgItem); /*0x787dd2*/
              SetFocus(g_hWnd); /*0x787de3*/
              ShowWindow(hWnd, 1); /*0x787de8*/
              SetFocus(hWnd); /*0x787def*/
              v31 = GetDlgItem(hWnd, 1344); /*0x787df7*/
              SetFocus(v31); /*0x787dfa*/
              stru_B77D80.HashTable_field_0x3C = 0; /*0x787dfc*/
              stru_B77D80.HashTable_field_0x38 = time(0); /*0x787e11*/
              while ( 1 ) /*0x787e27*/
              {
                for ( ii = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u); /*0x787e2f*/
                      ii == 258;
                      ii = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u) )
                {
                  Game::ProcessIdle(v32); /*0x787e35*/
                  if ( g_WOL_ChannelLeaveState ) /*0x787e41*/
                  {
                    v63.StringVector_field_0x08 = 0; /*0x787e47*/
                    v34 = GetDlgItem(hWnd, 1341); /*0x787e4f*/
                    EnableWindow(v34, v63.StringVector_field_0x08); /*0x787e52*/
                    v63.StringVector_field_0x08 = 0; /*0x787e54*/
                    v35 = GetDlgItem(hWnd, 1774); /*0x787e5c*/
                    EnableWindow(v35, v63.StringVector_field_0x08); /*0x787e5f*/
                    v63.StringVector_field_0x08 = 0; /*0x787e61*/
                    v36 = GetDlgItem(hWnd, 1581); /*0x787e69*/
                    EnableWindow(v36, v63.StringVector_field_0x08); /*0x787e6c*/
                    v63.StringVector_field_0x08 = 0; /*0x787e6e*/
                    v37 = GetDlgItem(hWnd, 1579); /*0x787e76*/
                    EnableWindow(v37, v63.StringVector_field_0x08); /*0x787e79*/
                    v63.StringVector_field_0x08 = 0; /*0x787e7b*/
                    v38 = GetDlgItem(hWnd, 1673); /*0x787e83*/
                    EnableWindow(v38, v63.StringVector_field_0x08); /*0x787e86*/
                    v63.StringVector_field_0x08 = 0; /*0x787e88*/
                    v39 = GetDlgItem(hWnd, 1672); /*0x787e90*/
                    EnableWindow(v39, v63.StringVector_field_0x08); /*0x787e93*/
                    v63.StringVector_field_0x08 = 0; /*0x787e95*/
                    v40 = GetDlgItem(hWnd, 1955); /*0x787e9d*/
                    EnableWindow(v40, v63.StringVector_field_0x08); /*0x787ea0*/
                    v63.StringVector_field_0x08 = 0; /*0x787ea2*/
                    v41 = GetDlgItem(hWnd, 1958); /*0x787eaa*/
                    EnableWindow(v41, v63.StringVector_field_0x08); /*0x787ead*/
                    v63.StringVector_field_0x08 = 0; /*0x787eaf*/
                    v42 = GetDlgItem(hWnd, 1567); /*0x787eb7*/
                    EnableWindow(v42, v63.StringVector_field_0x08); /*0x787eba*/
                    v63.StringVector_field_0x08 = 0; /*0x787ebc*/
                    v43 = GetDlgItem(hWnd, 1474); /*0x787ec4*/
                    EnableWindow(v43, v63.StringVector_field_0x08); /*0x787ec7*/
                    v63.StringVector_field_0x08 = 0; /*0x787ec9*/
                    v44 = GetDlgItem(hWnd, 1670); /*0x787ed1*/
                    EnableWindow(v44, v63.StringVector_field_0x08); /*0x787ed4*/
                    if ( JoinGameLobbyWOL() == -1 ) /*0x787ee0*/
                    {
                      v63.StringVector_field_0x08 = 1; /*0x787ee2*/
                      v45 = GetDlgItem(hWnd, 1670); /*0x787eea*/
                      EnableWindow(v45, v63.StringVector_field_0x08); /*0x787eed*/
                      SetEvent(hEvent); /*0x787ef6*/
                    }
                    else
                    {
                      PostMessageA(hWnd, 0x593u, 0, 0); /*0x787f08*/
                    }
                    g_WOL_ChannelLeaveState = 0; /*0x787f0e*/
                  }
                }
                ResetEvent(*(&Handles + ii)); /*0x787f3f*/
                if ( !ii ) /*0x787f47*/
                  break; /*0x787f47*/
                switch ( ii ) /*0x787f4c*/
                {
                  case 6u: /*0x787f4c*/
                    goto LABEL_85; /*0x787f4c*/
                  case 0xFu: /*0x787f4c*/
                    v65 = 2; /*0x787f66*/
LABEL_85:
                    word_B77AD0 = 0; /*0x787f6e*/
                    goto LABEL_86; /*0x787f6e*/
                  case 5u: /*0x787f4c*/
                    goto LABEL_88; /*0x787f56*/
                  case 7u: /*0x787f4c*/
                    v65 = 1; /*0x788155*/
                    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x788160*/
                    byte_B77DEC = 0; /*0x788163*/
                    word_B77AD0 = 0; /*0x78816a*/
                    goto LABEL_88; /*0x788173*/
                }
              }
            }
          }
        }
      }
    }
LABEL_88:
    v47 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x787f98*/
    if ( v47 ) /*0x787fa6*/
    {
      stru_B77D80.HashTable_field_0x48 = 0; /*0x787fac*/
      CloseDialog(v47, 0); /*0x787fb2*/
    }
    v48 = (HWND)Dialog::GetCurrent(); /*0x787fb7*/
    v49 = GetDlgItem(v48, 1344); /*0x787fc2*/
    if ( v49 ) /*0x787fc6*/
      SetFocus(v49); /*0x787fc9*/
    ShowDialogConfirm(&word_B77AD0, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x787fdc*/
    if ( hWnd ) /*0x787fe3*/
      CloseDialog(hWnd, 0); /*0x787fe9*/
    while ( (unsigned __int8)CloseDialog(0, 0) ) /*0x787ff2*/
      ; /*0x787ffb*/
    Network_Destroy((ObjectClass *)v63.StringVector_field_0x0C); /*0x788008*/
    if ( v65 == 1 ) /*0x788012*/
      BYTE1(stru_B77D80.HashTable_field_0x40) = 1; /*0x788014*/
    if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x78802f*/
    {
      v50 = stru_B765EC.location[0]; /*0x788035*/
      for ( jj = 0; jj < stru_B765EC.location[0]; v50 = stru_B765EC.location[0] ) /*0x78803e*/
      {
        v52 = *(ObjectClass **)(stru_B765EC.lastLayer + 4 * jj); /*0x788045*/
        while ( v52 ) /*0x78804a*/
        {
          v53 = v52; /*0x78804c*/
          v52 = (ObjectClass *)v52->?; /*0x78804e*/
          DeleteAndZero(v53); /*0x788057*/
          __3_YAXPAX_Z(v53); /*0x78805d*/
        }
        ++jj; /*0x78806f*/
        *(_DWORD *)(stru_B765EC.lastLayer + 4 * jj - 4) = 0; /*0x788070*/
      }
      v54 = dword_B766B0; /*0x78807d*/
      *(_DWORD *)&stru_B765EC.isInLogic = 0; /*0x788083*/
      if ( v50 > dword_B766B0 ) /*0x78808b*/
      {
        do /*0x78813e*/
        {
          if ( LOBYTE(stru_B765EC.lineTrailer) || v50 <= v54 ) /*0x7880a1*/
            break; /*0x7880a1*/
          lastLayer = (int *)stru_B765EC.lastLayer; /*0x7880ad*/
          v56 = v50; /*0x7880b3*/
          stru_B765EC.location[0] = v50 >> 1; /*0x7880b8*/
          --stru_B765EC.location[1]; /*0x7880c4*/
          stru_B765EC.lastLayer = __2_YAPAXI_Z(4 * (v50 >> 1)); /*0x7880dd*/
          memset((void *)stru_B765EC.lastLayer, 0, 4 * stru_B765EC.location[0]); /*0x7880e5*/
          if ( v56 > 0 ) /*0x7880e7*/
          {
            v57 = lastLayer; /*0x7880e9*/
            v58 = v56; /*0x7880eb*/
            do /*0x788126*/
            {
              v59 = *v57; /*0x7880ed*/
              if ( *v57 ) /*0x7880ed*/
              {
                do /*0x788120*/
                {
                  v60 = dword_B76698(v59) & ((1 << SLOBYTE(stru_B765EC.location[1])) - 1); /*0x788109*/
                  v61 = *(_DWORD *)(stru_B765EC.lastLayer + 4 * v60); /*0x788110*/
                  *(_DWORD *)(stru_B765EC.lastLayer + 4 * v60) = v59; /*0x788113*/
                  v62 = *(_DWORD *)(v59 + 8); /*0x788116*/
                  *(_DWORD *)(v59 + 8) = v61; /*0x788119*/
                  v59 = v62; /*0x78811e*/
                }
                while ( v62 ); /*0x788120*/
              }
              ++v57; /*0x788122*/
              --v58; /*0x788125*/
            }
            while ( v58 ); /*0x788126*/
          }
          __3_YAXPAX_Z(lastLayer); /*0x788129*/
          v54 = dword_B766B0; /*0x78812e*/
          v50 = stru_B765EC.location[0]; /*0x788134*/
        }
        while ( stru_B765EC.location[0] > (unsigned int)dword_B766B0 ); /*0x78813e*/
      }
    }
    return v65; /*0x788144*/
  }
  return result; /*0x788148*/
}



// ==== 0x00788180  FindLobbyIDWOL  this=-  sig=csp ====
int __fastcall WOL_FindLobbyID(char a1)
{
  int v1; // esi
  _DWORD *v2; // eax
  int v3; // ebx
  _DWORD *v4; // ebp
  char **v5; // eax
  int v6; // ebp
  wchar_t **v7; // edi
  int v8; // ebx
  size_t v9; // eax
  char **v11; // [esp-4h] [ebp-2A4h]
  const wchar_t **v13; // [esp+14h] [ebp-28Ch] BYREF
  wchar_t **v14; // [esp+18h] [ebp-288h] BYREF
  void *v15; // [esp+1Ch] [ebp-284h] BYREF
  unsigned int v16; // [esp+20h] [ebp-280h]
  int v17; // [esp+24h] [ebp-27Ch]
  void *v18[4]; // [esp+28h] [ebp-278h] BYREF
  _DWORD v19[3]; // [esp+38h] [ebp-268h] BYREF
  _DWORD v20[6]; // [esp+44h] [ebp-25Ch] BYREF
  char v21; // [esp+5Ch] [ebp-244h]
  int v22; // [esp+60h] [ebp-240h]
  int v23; // [esp+64h] [ebp-23Ch]
  char Buffer[32]; // [esp+68h] [ebp-238h] BYREF
  char Source[32]; // [esp+88h] [ebp-218h] BYREF
  char Destination[32]; // [esp+A8h] [ebp-1F8h] BYREF
  wchar_t String2[32]; // [esp+C8h] [ebp-1D8h] BYREF
  _DWORD v28[22]; // [esp+108h] [ebp-198h] BYREF
  _BYTE v29[12]; // [esp+160h] [ebp-140h] BYREF
  int v30; // [esp+16Ch] [ebp-134h]
  char v31[32]; // [esp+174h] [ebp-12Ch] BYREF
  _DWORD v32[67]; // [esp+194h] [ebp-10Ch] BYREF

  v1 = dword_B73E10; /*0x788189*/
  v17 = dword_B73E10; /*0x7881a2*/
  memset(v32, 0, sizeof(v32)); /*0x7881a6*/
  if ( dword_A8B238[0] == 4 && dword_A8B244 == 3 ) /*0x7881bc*/
  {
    memset(Destination, 0, sizeof(Destination)); /*0x7881d2*/
    memset(String2, 0, 0x20u); /*0x7881e0*/
    memset(Buffer, 0, sizeof(Buffer)); /*0x7881eb*/
    memset(Source, 0, sizeof(Source)); /*0x7881f9*/
    v2 = __2_YAPAXI_Z(0x28u); /*0x7881fb*/
    v3 = 0; /*0x788200*/
    if ( v2 ) /*0x788207*/
      v4 = MixFileClass::FromFile(v2, g_Str_File_WDT_MIX, (int)&dword_886980); /*0x78821a*/
    else
      v4 = 0; /*0x78821e*/
    v18[1] = 0; /*0x788224*/
    v18[2] = 0; /*0x788228*/
    GenericNode::Constructor(v19); /*0x78822c*/
    GenericNode::Constructor(v20); /*0x788235*/
    LinkedList::Prepend(v19, (int)v20); /*0x78824b*/
    v18[3] = &List<INIClass::INISection *>::`vftable'; /*0x788257*/
    memset(&v20[3], 0, 12); /*0x788264*/
    v21 = 0; /*0x788270*/
    v22 = 0; /*0x788275*/
    v23 = 0; /*0x788279*/
    v18[0] = &INIClass::`vftable'; /*0x78827d*/
    CCFileClass::Construct(v28, aWdtmapmdIni); /*0x788285*/
    FileStraw::Open(v18, (int)v28, 0); /*0x788297*/
    sprintf(Buffer, "Territory%02d", *(_DWORD *)dword_A8B240); /*0x7882ad*/
    strcpy(Source, Buffer); /*0x7882d4*/
    if ( *(_BYTE *)(*(_DWORD *)(FindLobbyIDWOL_Find() + 4) + 20) ) /*0x7882ef*/
      INIClass::GetString( /*0x788313*/
        (unsigned __int8 ***)v18,
        (unsigned __int8 *)aEurope,
        (unsigned __int8 *)Buffer,
        Source,
        Destination,
        32);
    else
      INIClass::GetString( /*0x788308*/
        (unsigned __int8 ***)v18,
        (unsigned __int8 *)aNorthamerica,
        (unsigned __int8 *)Buffer,
        Source,
        Destination,
        32);
    INIClass::GetString( /*0x788338*/
      (unsigned __int8 ***)v18,
      (unsigned __int8 *)Destination,
      (unsigned __int8 *)g_INI_Key_Name,
      aATerritory,
      v31,
      32);
    BulkCharToWide(String2, (unsigned __int8 *)v31, -1); /*0x78834d*/
    dword_B75E50 = (int)_wcsdup(String2); /*0x788364*/
    if ( v4 ) /*0x788369*/
      (*(void (__thiscall **)(_DWORD *, int))*v4)(v4, 1); /*0x788372*/
    v28[0] = &CCFileClass::`vftable'; /*0x78837b*/
    v30 = 0; /*0x788386*/
    Vector::Clear((int)v29); /*0x78838d*/
    v28[0] = &off_7E1668; /*0x788399*/
    BufferIOFileClass::Dtor(v28); /*0x7883a4*/
    HashTable::DestroyHashTableINIClass(v18); /*0x7883ad*/
    v1 = v17; /*0x7883b2*/
  }
  else
  {
    v3 = 0; /*0x7883b8*/
  }
  v11 = FormatStringInt((char **)&v13, dword_B77DD4, 1); /*0x7883cf*/
  v5 = String::Assign((char **)&v14, g_Str_Lob_41_); /*0x7883da*/
  String::Concat((const char **)v5, (char **)&v15, v11); /*0x7883e1*/
  DeleteAndZero((void **)&v14); /*0x7883ea*/
  DeleteAndZero((void **)&v13); /*0x7883f3*/
  v6 = 0; /*0x7883f8*/
  if ( v1 > 0 ) /*0x7883fc*/
  {
    v7 = &dword_B73E1C; /*0x788402*/
    v14 = &dword_B73E1C; /*0x788407*/
    while ( 1 ) /*0x78840b*/
    {
      if ( (int)v7 >= (int)&dword_B73E1C && v6 < dword_B73E10 ) /*0x788419*/
      {
        qmemcpy(v32, (char *)dword_B73E18 + v3, sizeof(v32)); /*0x788430*/
        v1 = v17; /*0x788432*/
        v7 = v14; /*0x788436*/
      }
      if ( dword_A8B238[0] != 4 || dword_A8B244 != 3 ) /*0x78844a*/
        goto LABEL_23; /*0x78844a*/
      if ( !wcscmp(*v7, String2) ) /*0x788457*/
        break; /*0x788457*/
LABEL_27:
      ++v6; /*0x7884c3*/
      v3 += 268; /*0x7884c4*/
      v14 = ++v7; /*0x7884cf*/
      if ( v6 >= v1 ) /*0x7884d3*/
        goto LABEL_28; /*0x7884d3*/
    }
    if ( !a1 || v32[3] <= 25 ) /*0x788477*/
    {
LABEL_50:
      DeleteAndZero(&v15); /*0x788682*/
      return v6; /*0x788697*/
    }
LABEL_23:
    String::Assign((char **)&v13, (const char *)&v32[13]); /*0x78847d*/
    if ( String::Compare((const char **)&v13, (const char **)&v15) && (!a1 || v32[3] <= 25) ) /*0x7884b4*/
    {
      DeleteAndZero((void **)&v13); /*0x788609*/
      DeleteAndZero(&v15); /*0x788612*/
      return v6; /*0x788623*/
    }
    DeleteAndZero((void **)&v13); /*0x7884be*/
    goto LABEL_27; /*0x7884be*/
  }
LABEL_28:
  v6 = 0; /*0x7884d9*/
  v8 = -1; /*0x7884db*/
  v16 = 10000; /*0x7884e0*/
  if ( v1 <= 0 ) /*0x7884e8*/
    goto LABEL_56; /*0x7884e8*/
  v14 = 0; /*0x7884ee*/
  v13 = (const wchar_t **)&dword_B73E1C; /*0x7884f2*/
  do /*0x7885fa*/
  {
    if ( (int)v13 >= (int)&dword_B73E1C && v6 < dword_B73E10 ) /*0x78850a*/
    {
      qmemcpy(v32, (char *)dword_B73E18 + (_DWORD)v14, sizeof(v32)); /*0x788524*/
      v1 = v17; /*0x788526*/
    }
    if ( dword_A8B238[0] == 4 && dword_A8B244 == 3 ) /*0x78853a*/
    {
      v9 = wcslen(String2); /*0x788544*/
      if ( wcsncmp(*v13, String2, v9) ) /*0x788559*/
        goto LABEL_45; /*0x788563*/
      if ( !a1 || v32[3] <= 25 ) /*0x78857b*/
      {
        dword_B77DD4 = atol((const char *)&v32[13] + strlen(g_Str_Lob_41_)); /*0x788647*/
        DeleteAndZero(&v15); /*0x78864c*/
        return v6; /*0x78865d*/
      }
      if ( v32[3] < v16 ) /*0x788585*/
      {
        v8 = v6; /*0x788587*/
        v16 = v32[3]; /*0x788589*/
      }
    }
    if ( !strncmp((const char *)&v32[13], g_Str_Lob_41_, strlen(g_Str_Lob_41_)) ) /*0x7885aa*/
    {
      if ( !a1 || v32[3] <= 25 ) /*0x7885cc*/
      {
        dword_B77DD4 = atol((const char *)&v32[13] + strlen(g_Str_Lob_41_)); /*0x78867d*/
        goto LABEL_50; /*0x78867d*/
      }
      if ( v32[3] < v16 ) /*0x7885d6*/
      {
        v8 = v6; /*0x7885d8*/
        v16 = v32[3]; /*0x7885da*/
      }
    }
LABEL_45:
    ++v6; /*0x7885de*/
    v14 += 67; /*0x7885f2*/
    ++v13; /*0x7885f6*/
  }
  while ( v6 < v1 ); /*0x7885fa*/
  if ( v8 != -1 ) /*0x78869b*/
  {
    if ( v8 >= 0 && v8 < dword_B73E10 ) /*0x7886a7*/
      qmemcpy(v32, (char *)dword_B73E18 + 268 * v8, sizeof(v32)); /*0x7886c8*/
    dword_B77DD4 = atol((const char *)&v32[13] + strlen(g_Str_Lob_41_)); /*0x7886e9*/
  }
LABEL_56:
  DeleteAndZero(&v15); /*0x7886ee*/
  return v8; /*0x788619*/
}



// ==== 0x00788710  sub_788710  this=-  sig=ida-proto ====
BOOL __fastcall sub_788710(int a1, char a2)
{
  wchar_t *StringCSF; // eax
  int i; // esi
  HWND v6; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  void *v10; // [esp+8h] [ebp-4h] BYREF

  if ( dword_B77DD0 ) /*0x78871e*/
  {
    Debug::Log(); /*0x788734*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x788744*/
    StringCSF = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x788758*/
    WideString::Assign((wchar_t **)&v10, StringCSF); /*0x788762*/
    ShowUIMessage(a1, (wchar_t **)&v10, a2); /*0x78876e*/
    DeleteAndZero::Alt(&v10); /*0x788777*/
    for ( i = 0; dword_B77DD0; ++i ) /*0x788785*/
    {
      if ( i >= 150 ) /*0x788793*/
        break; /*0x788793*/
      Sleep(0x64u); /*0x788797*/
      Game::ProcessIdle(); /*0x788799*/
    }
    v6 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7887ad*/
    if ( v6 ) /*0x7887b4*/
    {
      dword_B77DC8 &= ~0x40u; /*0x7887bf*/
      if ( !dword_B77DC8 ) /*0x7887c5*/
        CloseDialog(v6, 0); /*0x7887cb*/
    }
    Current = Dialog::GetCurrent(); /*0x7887d0*/
    DlgItem = GetDlgItem(Current, 1344); /*0x7887db*/
    if ( DlgItem ) /*0x7887e3*/
      SetFocus(DlgItem); /*0x7887e6*/
  }
  return dword_B77DD0 == 0; /*0x7887f6*/
}



// ==== 0x00788800  LeaveChannelExWOL  this=ObjectClass  sig=csp ====
int __fastcall WOL_LeaveChannelEx(int a1, char **a2, void *a3)
{
  wchar_t *String; // eax
  int i; // esi
  HWND v6; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v10; // eax
  int v11; // esi
  void *v12; // [esp+10h] [ebp-8h] BYREF
  char **v13; // [esp+14h] [ebp-4h]

  v13 = a2; /*0x788809*/
  if ( !strcmp((const char *)(a1 + 52), byte_B76B44) || !strcmp((const char *)(a1 + 52), &byte_B73C1C) ) /*0x788855*/
  {
    DeleteAndZero::Alt(&a3); /*0x788a17*/
    return 0; /*0x788a1c*/
  }
  else
  {
    if ( !dword_B77DD0 ) /*0x788887*/
      goto LABEL_14; /*0x788887*/
    Debug::Log(); /*0x78889d*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x7888ad*/
    String = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x7888c1*/
    WideString::Assign((wchar_t **)&v12, String); /*0x7888cb*/
    ShowUIMessage(64, (wchar_t **)&v12, 1); /*0x7888db*/
    DeleteAndZero::Alt(&v12); /*0x7888e4*/
    for ( i = 0; dword_B77DD0; ++i ) /*0x7888f2*/
    {
      if ( i >= 150 ) /*0x788900*/
        break; /*0x788900*/
      Sleep(0x64u); /*0x788904*/
      Game::ProcessIdle(); /*0x788906*/
    }
    v6 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x78891a*/
    if ( v6 ) /*0x788921*/
    {
      dword_B77DC8 &= ~0x40u; /*0x78892c*/
      if ( !dword_B77DC8 ) /*0x788932*/
        CloseDialog(v6, 0); /*0x788938*/
    }
    Current = Dialog::GetCurrent(); /*0x78893d*/
    DlgItem = GetDlgItem(Current, 1344); /*0x788948*/
    if ( DlgItem ) /*0x788950*/
      SetFocus(DlgItem); /*0x788953*/
    if ( dword_B77DD0 ) /*0x788960*/
    {
      DeleteAndZero::Alt(&a3); /*0x788966*/
      return 1; /*0x78896b*/
    }
    else
    {
LABEL_14:
      strcpy((char *)(a1 + 215), String::GetOrEmpty_Alt(v13)); /*0x78899f*/
      qmemcpy(&dword_B73BE8, (const void *)a1, 0x10Cu); /*0x7889b4*/
      v10 = WideString::GetOrEmpty_Alt((wchar_t **)&a3); /*0x7889ba*/
      WideString::Assign((wchar_t **)&v12, v10); /*0x7889c4*/
      ShowUIMessage(2, (wchar_t **)&v12, 0); /*0x7889d4*/
      DeleteAndZero::Alt(&v12); /*0x7889dd*/
      Debug::Log(); /*0x7889e8*/
      v11 = (*(int (__stdcall **)(LPVOID, int))(*(_DWORD *)ppv + 32))(ppv, a1); /*0x788a00*/
      DeleteAndZero::Alt(&a3); /*0x788a02*/
      return v11; /*0x788a07*/
    }
  }
}



// ==== 0x00788A30  JoinGameLobbyWOL  this=-  sig=ida-proto ====
int __fastcall JoinGameLobbyWOL(char a1)
{
  int LobbyIDWOL; // eax
  int v2; // ebx
  wchar_t *StringCSF; // eax
  wchar_t *v4; // ecx
  int v5; // esi
  HWND v6; // eax
  HWND DlgItem; // eax
  wchar_t *v9; // [esp-4h] [ebp-120h] BYREF
  ObjectClass *v10; // [esp+0h] [ebp-11Ch]
  _BYTE v11[272]; // [esp+Ch] [ebp-110h] BYREF

  LobbyIDWOL = FindLobbyIDWOL(a1); /*0x788a39*/
  v2 = LobbyIDWOL; /*0x788a3e*/
  if ( LobbyIDWOL == -1 ) /*0x788a43*/
    goto LABEL_9; /*0x788a43*/
  if ( LobbyIDWOL >= 0 && LobbyIDWOL < *(int *)&g_WindowManager.__pad_EC[636] ) /*0x788a53*/
    qmemcpy(&v11[4], (const void *)(*(_DWORD *)&g_WindowManager.__pad_EC[644] + 268 * LobbyIDWOL), 0x10Cu); /*0x788a71*/
  String::Assign((String *)v11, aZotclot9); /*0x788a7c*/
  StringCSF = GetStringCSF(g_Str_TXT_JOINLOB, 0, g_Str_File_wonline_cpp, 10753); /*0x788a92*/
  v9 = v4; /*0x788a97*/
  WideString::Assign(&v9, StringCSF); /*0x788a9b*/
  v5 = LeaveChannelExWOL((int)&v11[4], (char **)v11, v9); /*0x788ab1*/
  DeleteAndZero((ObjectClass *)v11); /*0x788ab3*/
  if ( v5 ) /*0x788aba*/
  {
LABEL_9:
    GameListRenderWOL(v10); /*0x788aee*/
    return -1; /*0x788af3*/
  }
  else
  {
    v6 = (HWND)Dialog::FindByHandle((Dialog *)0x113); /*0x788ac1*/
    if ( v6 ) /*0x788ac8*/
    {
      DlgItem = GetDlgItem(v6, 1344); /*0x788ad0*/
      SetFocus(DlgItem); /*0x788ad7*/
    }
    GameListRenderWOL(v10); /*0x788add*/
    return v2; /*0x788ae2*/
  }
}



// ==== 0x00788B00  ObjectClass::CreateAccountWOL  this=ObjectClass  sig=csp ====
int __usercall CreateAccountWOL@<eax>(ObjectClass *this, int a2@<ebx>, int a3@<ebp>)
{
  HWND v3; // ecx
  HANDLE *v4; // esi
  wchar_t *StringCSF; // eax
  TechnoTypeClass *v6; // ecx
  DWORD i; // esi
  HWND v8; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  HWND DeleteAndZero_field_0x04; // esi
  int result; // eax
  Dialog *DialogIndirect; // esi
  char *v14; // edi
  HWND v15; // eax
  HWND v16; // eax
  char *v17; // edi
  HWND v18; // eax
  HWND v19; // eax
  int DeleteAndZero_field_0x08; // eax
  wchar_t *v21; // eax
  int v22; // edi
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  wchar_t *v25; // eax
  wchar_t *v26; // eax
  Dialog *v27; // esi
  char *v28; // edi
  HWND v29; // eax
  HWND v30; // eax
  char *v31; // edi
  HWND v32; // eax
  HWND v33; // eax
  char *v34; // edi
  HWND v35; // eax
  HWND v36; // eax
  char *v37; // edi
  HWND v38; // eax
  HWND v39; // eax
  char *v40; // edi
  wchar_t *v41; // eax
  wchar_t *v42; // eax
  wchar_t *v43; // eax
  wchar_t *v44; // eax
  wchar_t *v45; // eax
  wchar_t *v46; // eax
  HWND v47; // esi
  HWND v48; // esi
  ObjectClass *v49; // [esp+34h] [ebp-29Ch]
  DeleteAndZero v50; // [esp+44h] [ebp-28Ch] BYREF
  WPARAM wParam; // [esp+50h] [ebp-280h]
  DeleteAndZero v52; // [esp+54h] [ebp-27Ch] BYREF
  int v53; // [esp+60h] [ebp-270h]
  int v54; // [esp+64h] [ebp-26Ch]
  void *Array_field_0x10; // [esp+68h] [ebp-268h]
  _BYTE v56[228]; // [esp+6Ch] [ebp-264h] BYREF
  char v57[128]; // [esp+150h] [ebp-180h] BYREF
  char Buffer[256]; // [esp+1D0h] [ebp-100h] BYREF

  v50.DeleteAndZero_field_0x04 = (int)v3; /*0x788b0c*/
  RenderGadgetClassAnimation(v3, 0); /*0x788b10*/
  Screen::Capture(1, 0, a2, a3); /*0x788b19*/
  wParam = 1; /*0x788b2b*/
  v53 = 1; /*0x788b2f*/
  Array_field_0x10 = 0; /*0x788b33*/
  v50.DeleteAndZero_field_0x08 = 0; /*0x788b37*/
  v4 = &Handles; /*0x788b3b*/
  do /*0x788b4e*/
    ResetEvent(*v4++); /*0x788b43*/
  while ( (int)v4 < (int)g_WOL_RequestObject ); /*0x788b4e*/
  memset(&v56[4], 0, 224); /*0x788b6b*/
  memset(v57, 0, sizeof(v57)); /*0x788b92*/
  StringCSF = GetStringCSF(aWolNewaccountf, 0, g_Str_File_wonline_cpp, 10826); /*0x788ba0*/
  WideString::Assign((wchar_t **)&v50, StringCSF); /*0x788baa*/
  ShowUIMessage(128, (wchar_t **)&v50, 0); /*0x788bb9*/
  DeleteAndZero::Alt(&v50); /*0x788bc2*/
  Debug::Log(); /*0x788bcc*/
  (*(void (__stdcall **)(LPVOID, int, int, char *, char *, int))(*(_DWORD *)ppv + 16))( /*0x788bf4*/
    ppv,
    g_NetworkRematchState,
    65537,
    aTibsun,
    aTibpass99,
    35);
  do /*0x788c3a*/
  {
    for ( i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x788c11*/
          i == 258;
          i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u) )
    {
      Game::ProcessIdle(v6); /*0x788c13*/
    }
    ResetEvent(*(&Handles + i)); /*0x788c36*/
  }
  while ( i > 1 ); /*0x788c3a*/
  v8 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x788c46*/
  if ( v8 ) /*0x788c4d*/
  {
    stru_B77D80.HashTable_field_0x48 = 0; /*0x788c53*/
    CloseDialog(v8, 0); /*0x788c59*/
  }
  Current = (HWND)Dialog::GetCurrent(); /*0x788c5e*/
  DlgItem = GetDlgItem(Current, 1344); /*0x788c6f*/
  if ( DlgItem ) /*0x788c73*/
    SetFocus(DlgItem); /*0x788c76*/
  if ( !i ) /*0x788c7e*/
  {
    DeleteAndZero_field_0x04 = (HWND)v50.DeleteAndZero_field_0x04; /*0x788c80*/
    ShowWindow((HWND)v50.DeleteAndZero_field_0x04, 5); /*0x788c87*/
    return Dialog::InitWindow(DeleteAndZero_field_0x04, 0); /*0x788c9e*/
  }
  while ( 1 ) /*0x788cd6*/
  {
    CreateAccountWOL_Create(); /*0x788cd6*/
    Screen::Capture(1, 0, (int)GetDlgItem, (int)SendMessageA); /*0x788cdf*/
    DialogIndirect = (Dialog *)CreateDialogIndirect( /*0x788d02*/
                                 g_hInstance,
                                 (HWND)0xE7,
                                 g_hWnd,
                                 (DLGPROC)CreateAccountDlgProcWOL,
                                 0);
    SetupDialog(DialogIndirect, 231); /*0x788d0b*/
    SendDlgItemMessageA((HWND)DialogIndirect, 1582, 0x14Eu, v53 - 1, 0); /*0x788d23*/
    if ( (int)Array_field_0x10 <= 0 ) /*0x788d2f*/
    {
      v16 = GetDlgItem((HWND)DialogIndirect, 1583); /*0x788d69*/
      SendMessageA(v16, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x788d78*/
    }
    else
    {
      FromStringInt((char **)&v52.DeleteAndZero_field_0x08, (int)Array_field_0x10); /*0x788d35*/
      v14 = String::GetOrEmpty((String *)&v52.DeleteAndZero_field_0x08); /*0x788d43*/
      v15 = GetDlgItem((HWND)DialogIndirect, 1583); /*0x788d4b*/
      SendMessageA(v15, 0x4B4u, 0, (LPARAM)v14); /*0x788d56*/
      DeleteAndZero((ObjectClass *)&v52.DeleteAndZero_field_0x08); /*0x788d5c*/
    }
    if ( v50.DeleteAndZero_field_0x08 <= 0 ) /*0x788d80*/
    {
      v19 = GetDlgItem((HWND)DialogIndirect, 1584); /*0x788dba*/
      SendMessageA(v19, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x788dc9*/
    }
    else
    {
      FromStringInt((char **)v56, v50.DeleteAndZero_field_0x08); /*0x788d86*/
      v17 = String::GetOrEmpty((String *)v56); /*0x788d94*/
      v18 = GetDlgItem((HWND)DialogIndirect, 1584); /*0x788d9c*/
      SendMessageA(v18, 0x4B4u, 0, (LPARAM)v17); /*0x788da7*/
      DeleteAndZero((ObjectClass *)v56); /*0x788dad*/
    }
    SendDlgItemMessageA((HWND)DialogIndirect, 1574, 0x4B4u, 0, (LPARAM)&v56[100]); /*0x788de6*/
    SendDlgItemMessageA((HWND)DialogIndirect, 1585, 0xF1u, wParam, 0); /*0x788dfa*/
    ShowWindow((HWND)v50.DeleteAndZero_field_0x04, 0); /*0x788e09*/
    ShowWindow((HWND)DialogIndirect, 1); /*0x788e0e*/
    if ( MessageDialogLoopAlt((HWND)DialogIndirect, (unsigned __int8 (*)(void))GameLoop::Thunk, 0, 1, 1) != 1 ) /*0x788e25*/
      break; /*0x788e25*/
    v56[100] = 0; /*0x788e30*/
    strcpy(&v56[100], String::GetOrEmpty((String *)&g_WOL_LoginObject.?)); /*0x788e5a*/
    DeleteAndZero_field_0x08 = g_WebBrowserConfig.location[1]; /*0x788e5e*/
    v50.DeleteAndZero_field_0x08 = g_WebBrowserConfig.location[1]; /*0x788e66*/
    Array_field_0x10 = g_WindowManager.Array_field_0x10; /*0x788e78*/
    v53 = dword_B73A1C + 1; /*0x788e87*/
    wParam = dword_B76228; /*0x788e8b*/
    if ( dword_B73A1C + 1 <= 0 ) /*0x788e8f*/
      goto LABEL_73; /*0x788e8f*/
    if ( (int)g_WindowManager.Array_field_0x10 <= 0 || g_WebBrowserConfig.location[1] <= 0 ) /*0x788e9f*/
    {
LABEL_63:
      if ( dword_B73A1C + 1 >= 12 ) /*0x78938d*/
      {
LABEL_73:
        v45 = GetStringCSF(aTxtInvalidMont, 0, g_Str_File_wonline_cpp, 10922); /*0x789462*/
        ShowDialogConfirm(v45, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x789483*/
      }
      else if ( (int)g_WindowManager.Array_field_0x10 <= 0 || (int)g_WindowManager.Array_field_0x10 > 31 ) /*0x78939e*/
      {
        v44 = GetStringCSF(aTxtInvalidDay, 0, g_Str_File_wonline_cpp, 10924); /*0x78944f*/
        ShowDialogConfirm(v44, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x789458*/
      }
      else if ( DeleteAndZero_field_0x08 > 0 ) /*0x7893a6*/
      {
        if ( strlen(&v56[100]) >= 6 ) /*0x7893ed*/
        {
          v24 = GetStringCSF(aTxtRequiredFie, 0, g_Str_File_wonline_cpp, 10930); /*0x789424*/
LABEL_71:
          ShowDialogConfirm(v24, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x789429*/
        }
        else
        {
          v43 = GetStringCSF(aTxtInvalidEmai, 0, g_Str_File_wonline_cpp, 10928); /*0x789400*/
          ShowDialogConfirm(v43, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x789409*/
        }
      }
      else
      {
        v42 = GetStringCSF(aTxtInvalidYear, 0, g_Str_File_wonline_cpp, 10926); /*0x7893c0*/
        ShowDialogConfirm(v42, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7893c9*/
      }
    }
    else
    {
      if ( strlen(&v56[100]) < 6 ) /*0x788eb9*/
      {
        DeleteAndZero_field_0x08 = v50.DeleteAndZero_field_0x08; /*0x789386*/
        goto LABEL_63; /*0x789386*/
      }
      dword_B77E64 = 0; /*0x788ec6*/
      dword_B77E60 = -1; /*0x788ed5*/
      if ( (*(int (__stdcall **)(LPVOID, int, void *, int, _BYTE *))(*(_DWORD *)g_UIPointerTable + 40))( /*0x788ee5*/
             g_UIPointerTable,
             dword_B73A1C + 1,
             g_WindowManager.Array_field_0x10,
             v50.DeleteAndZero_field_0x08,
             &v56[100]) )
      {
        v21 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 10939); /*0x788f04*/
LABEL_26:
        ShowDialogConfirm(v21, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x788f09*/
LABEL_27:
        while ( 1 ) /*0x788f12*/
        {
          CreateAccountWOL_Create_72C420(); /*0x788f12*/
          if ( dword_B77E60 >= 13 ) /*0x788f1f*/
          {
            *(_DWORD *)v50.__pad_0 = (dword_B77E60 >= 18) + 243; /*0x78903e*/
            v22 = *(_DWORD *)v50.__pad_0; /*0x789042*/
          }
          else
          {
            v22 = 230; /*0x788f25*/
            *(_DWORD *)v50.__pad_0 = 230; /*0x788f2a*/
          }
          v27 = (Dialog *)CreateDialogIndirect(g_hInstance, (HWND)v22, g_hWnd, (DLGPROC)WOLobbySmallDlgProc, 0); /*0x78905f*/
          SetupDialog(v27, v22); /*0x789065*/
          if ( String::Length((String *)&g_WebBrowserConfig.?) ) /*0x78906f*/
          {
            v28 = String::GetOrEmpty((String *)&g_WebBrowserConfig.?); /*0x789082*/
            v29 = GetDlgItem((HWND)v27, 1576); /*0x78908a*/
            SendMessageA(v29, 0x4B4u, 0, (LPARAM)v28); /*0x78908d*/
          }
          else
          {
            v30 = GetDlgItem((HWND)v27, 1576); /*0x789095*/
            SendMessageA(v30, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x7890a4*/
          }
          if ( String::Length((String *)&stru_B765EC) ) /*0x7890ab*/
          {
            v31 = String::GetOrEmpty((String *)&stru_B765EC); /*0x7890be*/
            v32 = GetDlgItem((HWND)v27, 1509); /*0x7890c6*/
            SendMessageA(v32, 0x4B4u, 0, (LPARAM)v31); /*0x7890c9*/
          }
          else
          {
            v33 = GetDlgItem((HWND)v27, 1509); /*0x7890d1*/
            SendMessageA(v33, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x7890e0*/
          }
          if ( String::Length((String *)&g_WOL_UserList.?) ) /*0x7890e7*/
          {
            v34 = String::GetOrEmpty((String *)&g_WOL_UserList.?); /*0x7890fa*/
            v35 = GetDlgItem((HWND)v27, 1836); /*0x789102*/
            SendMessageA(v35, 0x4B4u, 0, (LPARAM)v34); /*0x789105*/
          }
          else
          {
            v36 = GetDlgItem((HWND)v27, 1836); /*0x78910d*/
            SendMessageA(v36, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x78911c*/
          }
          if ( String::Length((String *)&g_WOL_UserList.occupant) ) /*0x789123*/
          {
            v37 = String::GetOrEmpty((String *)&g_WOL_UserList.occupant); /*0x789136*/
            v38 = GetDlgItem((HWND)v27, 1575); /*0x78913e*/
            SendMessageA(v38, 0x4B4u, 0, (LPARAM)v37); /*0x789141*/
          }
          else
          {
            v39 = GetDlgItem((HWND)v27, 1575); /*0x789149*/
            SendMessageA(v39, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x789158*/
          }
          ShowWindow((HWND)v27, 1); /*0x78915d*/
          SendMessageA((HWND)v27, 0x4A9u, 0, 1); /*0x78916d*/
          if ( MessageDialogLoopAlt((HWND)v27, (unsigned __int8 (*)(void))GameLoop::Thunk, 0, 1, 1) != 1 ) /*0x789184*/
            break; /*0x789184*/
          v56[68] = 0; /*0x78918f*/
          strcpy(&v56[68], String::GetOrEmpty((String *)&g_WebBrowserConfig.?)); /*0x7891b3*/
          v56[4] = 0; /*0x7891c1*/
          v40 = String::GetOrEmpty((String *)&g_WOL_UserList.?); /*0x7891cb*/
          v56[36] = 0; /*0x7891dc*/
          strcpy(&v56[4], v40); /*0x7891ea*/
          strcpy(&v56[36], String::GetOrEmpty((String *)&g_WOL_UserList.occupant)); /*0x789217*/
          v57[0] = 0; /*0x789229*/
          if ( *(_DWORD *)v50.__pad_0 == 243 ) /*0x789231*/
            strcpy(v57, String::GetOrEmpty((String *)&stru_B765EC)); /*0x78925a*/
          v54 = 0; /*0x789267*/
          if ( *(_DWORD *)v50.__pad_0 == 244 ) /*0x789274*/
            v54 = unk_B76C20; /*0x78927c*/
          if ( strcmp(&v56[4], &v56[36]) ) /*0x78928e*/
          {
            v21 = GetStringCSF((wchar_t *)aTxtPasswordVer, 0, g_Str_File_wonline_cpp, 11073); /*0x7892cd*/
            goto LABEL_26; /*0x7892cd*/
          }
          if ( strlen(&v56[4]) != 8 ) /*0x7892e3*/
          {
            v21 = GetStringCSF((wchar_t *)aTxtPasswordToo, 0, g_Str_File_wonline_cpp, 11078); /*0x7892fc*/
            goto LABEL_26; /*0x7892fc*/
          }
          if ( (*(int (__stdcall **)(LPVOID, _BYTE *, _BYTE *, _BYTE *, char *, WPARAM, int))(*(_DWORD *)g_UIPointerTable /*0x789330*/
                                                                                            + 36))(
                 g_UIPointerTable,
                 &v56[68],
                 &v56[4],
                 &v56[100],
                 v57,
                 wParam,
                 v54) )
          {
            v46 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 11083); /*0x7894a5*/
            ShowDialogConfirm(v46, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7894ae*/
LABEL_75:
            v47 = (HWND)v50.DeleteAndZero_field_0x04; /*0x7894b3*/
            ShowWindow((HWND)v50.DeleteAndZero_field_0x04, 5); /*0x7894ba*/
            Dialog::InitWindow(v47, 0); /*0x7894c3*/
            CreateAccountWOL_Create_72C470(v49); /*0x7894c8*/
            return result; /*0x7894d7*/
          }
          v41 = GetStringCSF(aTxtReqNick, 0, g_Str_File_wonline_cpp, 11085); /*0x78934c*/
          WideString::Assign((wchar_t **)&v52.DeleteAndZero_field_0x04, v41); /*0x789356*/
          ShowUIMessage(256, (wchar_t **)&v52.DeleteAndZero_field_0x04, 1); /*0x789366*/
          DeleteAndZero::Alt((DeleteAndZero *)&v52.DeleteAndZero_field_0x04); /*0x78936f*/
          if ( dword_B77DF0 >= 0 ) /*0x78937b*/
            goto LABEL_75; /*0x78937b*/
        }
      }
      else
      {
        v23 = GetStringCSF(aWolRequestingn, 0, g_Str_File_wonline_cpp, 10942); /*0x788f44*/
        WideString::Assign((wchar_t **)&v52, v23); /*0x788f4e*/
        ShowUIMessage(256, (wchar_t **)&v52, 1); /*0x788f5e*/
        DeleteAndZero::Alt(&v52); /*0x788f67*/
        if ( dword_B77E60 >= 0 ) /*0x788f73*/
        {
          if ( dword_B77E60 >= 13 || dword_B77E64 ) /*0x788fc6*/
            goto LABEL_27; /*0x788fc6*/
          v26 = GetStringCSF(aTxtConsentRequ, 0, g_Str_File_wonline_cpp, 10957); /*0x788fe4*/
          if ( ShowDialogConfirm(v26, 4, (unsigned __int8 (*)(void))GameLoop::Thunk, 0) == 6 ) /*0x788ff8*/
          {
            sprintf(Buffer, "http://apiregister.westwood.com/consent_form/index_%d.html", dword_B77E50); /*0x789012*/
            OpenURLWOL(Buffer, 1); /*0x789026*/
          }
        }
        else
        {
          if ( dword_B77DF4 == -2147221248 ) /*0x788f86*/
          {
            v24 = GetStringCSF(aTxtRequiredFie, 0, g_Str_File_wonline_cpp, 10946); /*0x788f8d*/
            goto LABEL_71; /*0x788f8d*/
          }
          v25 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 10948); /*0x788fa3*/
          ShowDialogConfirm(v25, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x788fac*/
        }
      }
    }
  }
  v48 = (HWND)v50.DeleteAndZero_field_0x04; /*0x7894d8*/
  ShowWindow((HWND)v50.DeleteAndZero_field_0x04, 1); /*0x7894df*/
  ShowWindow(v48, 5); /*0x7894e4*/
  Dialog::InitWindow(v48, 0); /*0x7894e9*/
  CreateAccountWOL_Create_72C290(v49); /*0x7894ee*/
  return result; /*0x788c94*/
}



// ==== 0x00789500  FindChannelWOL  this=char*  sig=csp ====
int __fastcall WOL_FindChannel(const char *a1, int a2, unsigned __int8 a3, int a4)
{
  int v5; // edi
  int v6; // esi
  int v7; // eax
  const char *v9; // [esp+20h] [ebp-Ch] BYREF
  int v10; // [esp+24h] [ebp-8h] BYREF
  int v11; // [esp+28h] [ebp-4h]

  v11 = a2; /*0x789507*/
  v5 = 1; /*0x78950d*/
  while ( 1 ) /*0x789522*/
  {
    v9 = 0; /*0x789522*/
    v10 = 0; /*0x789526*/
    if ( !(*(int (__stdcall **)(LPVOID, int, const char **, int *))(*(_DWORD *)ppv + 144))(ppv, v5, &v9, &v10) /*0x789549*/
      && v9
      && !strcmp(v9, a1) )
    {
      break; /*0x789549*/
    }
    if ( ++v5 > 32 ) /*0x789574*/
      goto LABEL_8; /*0x789574*/
  }
  v6 = v5; /*0x78957a*/
  if ( v5 ) /*0x78957c*/
  {
LABEL_20:
    (*(void (__stdcall **)(LPVOID, int, const char *, int, _DWORD))(*(_DWORD *)ppv + 148))(ppv, v6, a1, v11, a3); /*0x7895f0*/
    (*(void (__stdcall **)(LPVOID, int, int))(*(_DWORD *)ppv + 200))(ppv, v6, a4); /*0x78961e*/
    return v6; /*0x78961e*/
  }
LABEL_8:
  v6 = 1; /*0x78957e*/
  while ( 1 ) /*0x789591*/
  {
    v9 = 0; /*0x789591*/
    v10 = 0; /*0x789595*/
    if ( (*(int (__stdcall **)(LPVOID, int, const char **, int *))(*(_DWORD *)ppv + 144))(ppv, v6, &v9, &v10) /*0x7895b0*/
      || !v9
      || !strlen(v9) )
    {
      break; /*0x7895b0*/
    }
    if ( ++v6 > 32 ) /*0x7895be*/
      goto LABEL_15; /*0x7895be*/
  }
  if ( v6 ) /*0x7895c4*/
    goto LABEL_20; /*0x7895c4*/
LABEL_15:
  v7 = dword_A8B544; /*0x7895c6*/
  if ( dword_A8B544 == -1 ) /*0x7895ce*/
    v7 = 1; /*0x7895d0*/
  v6 = v7; /*0x7895d5*/
  dword_A8B544 = v7 + 1; /*0x7895db*/
  if ( v7 + 1 > 32 ) /*0x7895e0*/
    dword_A8B544 = 1; /*0x7895e2*/
  if ( v7 ) /*0x7895ee*/
    goto LABEL_20; /*0x7895ee*/
  return v6; /*0x789626*/
}



// ==== 0x00789630  sub_789630  this=-  sig=ida-proto ====
String *__fastcall sub_789630(String *a1, int a2)
{
  int v3; // eax
  String v5; // [esp+4h] [ebp-8h] BYREF

  String::Assign(&v5, (const char *)(a2 + 24)); /*0x78963e*/
  unknown_libname_73(&v5.m_3[1]); /*0x789647*/
  v3 = String::Tokenize(&v5, 0, asc_8318B8, (void **)&v5.m_3[1]); /*0x78965c*/
  if ( v3 >= 0 ) /*0x789663*/
    String::Erase(&v5, 0, v3 + 1); /*0x78966d*/
  String::AssignFromPtr(a1, (const char **)&v5); /*0x789679*/
  DeleteAndZero((ObjectClass *)&v5.m_3[1]); /*0x789682*/
  DeleteAndZero((ObjectClass *)&v5); /*0x78968b*/
  return a1; /*0x789692*/
}



// ==== 0x007896A0  PopulateWOLUserList  this=ObjectClass  sig=csp ====
char __fastcall PopulateWOLUserList(HWND hWnd, char a2)
{
  LPARAM v4; // ebp
  _DWORD *PlayerProfile; // eax
  int v7; // eax
  int v8; // ecx
  char *v9; // esi
  int v10; // eax
  char *v11; // eax
  LRESULT v12; // esi
  char **v13; // eax
  WPARAM v14; // esi
  char **v15; // [esp-8h] [ebp-4Ch]
  bool v17; // [esp+Fh] [ebp-35h]
  void *v18; // [esp+10h] [ebp-34h] BYREF
  void *v19; // [esp+14h] [ebp-30h] BYREF
  WPARAM wParam; // [esp+18h] [ebp-2Ch]
  void *v21; // [esp+1Ch] [ebp-28h] BYREF
  int i; // [esp+20h] [ebp-24h]
  int v23; // [esp+24h] [ebp-20h] BYREF
  void *v24; // [esp+28h] [ebp-1Ch] BYREF
  void *v25[2]; // [esp+2Ch] [ebp-18h] BYREF
  void **v26; // [esp+34h] [ebp-10h] BYREF
  int v27; // [esp+38h] [ebp-Ch]
  int v28; // [esp+3Ch] [ebp-8h] BYREF
  char v29; // [esp+40h] [ebp-4h]

  if ( a2 ) /*0x7896b0*/
    ListBox::Clear(hWnd); /*0x7896b2*/
  else
    Memory_Pop(hWnd); /*0x7896b9*/
  v4 = 1; /*0x7896c3*/
  if ( g_WOL_UserList == 1 ) /*0x7896ca*/
  {
    if ( a2 ) /*0x7896d5*/
      SendMessageA(hWnd, 0x4BCu, 0, (LPARAM)aGuiNoserversav); /*0x7896dc*/
    else
      SendMessageA(hWnd, 0x4C8u, 0, (LPARAM)aGuiNoserversav); /*0x7896e4*/
    EnableWindow(hWnd, 0); /*0x7896ed*/
    return 0; /*0x7896f3*/
  }
  else
  {
    unknown_libname_73(&v21); /*0x789701*/
    v28 = 0; /*0x78970a*/
    v29 = 0; /*0x789712*/
    ReadRegistryOptionsWOL(&v28); /*0x789717*/
    ComPtr::Constructor(&v26); /*0x789720*/
    v26 = &rc_ptr<PlayerProfile>::`vftable'; /*0x78972e*/
    if ( Flag::IsNot2(&v28) ) /*0x789732*/
    {
      PlayerProfile = LoadPlayerProfile(v25, (const char **)&dword_B73E40); /*0x789744*/
      ComPtr::Set(&v26, PlayerProfile[1]); /*0x789751*/
      v25[0] = &rc_ptr<PlayerProfile>::`vftable'; /*0x78975a*/
      ComPtr::Release(v25); /*0x78975e*/
    }
    else
    {
      ComPtr::Set(&v26, dword_B75E4C); /*0x789770*/
    }
    if ( v27 ) /*0x78977b*/
      String::Reassign((char **)&v21, (const char **)(v27 + 12)); /*0x789785*/
    EnableWindow(hWnd, 1); /*0x78978c*/
    v7 = g_WOL_UserList; /*0x789792*/
    wParam = -1; /*0x78979f*/
    if ( g_WOL_UserList <= 1 ) /*0x7897a7*/
      goto LABEL_30; /*0x7897a7*/
    v8 = 248; /*0x7897ad*/
    for ( i = 248; ; v8 = i ) /*0x7897b2*/
    {
      v9 = 0; /*0x7897bc*/
      if ( v8 >= 0 && v4 < v7 ) /*0x7897c4*/
        v9 = (char *)dword_B778E0 + v8; /*0x7897cc*/
      Debug::Log(); /*0x7897d8*/
      String::Assign((char **)&v18, v9 + 24); /*0x7897e5*/
      unknown_libname_73(&v23); /*0x7897ee*/
      v10 = String::Tokenize((const char **)&v18, 0, asc_8318B8, (void **)&v23); /*0x789803*/
      if ( v10 >= 0 ) /*0x78980a*/
        String::Erase((const char **)&v18, 0, v10 + 1); /*0x789814*/
      String::AssignFromPtr((char **)&v19, (const char **)&v18); /*0x789822*/
      DeleteAndZero((void **)&v23); /*0x78982b*/
      DeleteAndZero(&v18); /*0x789834*/
      v11 = String::GetOrEmpty_Alt((char **)&v19); /*0x789845*/
      if ( a2 ) /*0x789843*/
      {
        v12 = SendMessageA(hWnd, 0x4BCu, 0, (LPARAM)v11); /*0x789855*/
        SendMessageA(hWnd, 0x151u, v12, v4); /*0x78985e*/
      }
      else
      {
        v12 = SendMessageA(hWnd, 0x4C8u, 0, (LPARAM)v11); /*0x789870*/
        SendMessageA(hWnd, 0x19Au, v12, v4); /*0x78987a*/
      }
      if ( String::Length((const char **)&v21) ) /*0x789880*/
      {
        v15 = String::ToLowerCopy((const char **)&v19, (char **)v25); /*0x78989b*/
        v13 = String::ToLowerCopy((const char **)&v21, (char **)&v24); /*0x7898a1*/
        v17 = String::Compare((const char **)v13, (const char **)v15); /*0x7898b1*/
        DeleteAndZero(&v24); /*0x7898b5*/
        DeleteAndZero(v25); /*0x7898be*/
        if ( v17 ) /*0x7898c9*/
        {
          wParam = v12; /*0x7898cb*/
          dword_B76468 = v4; /*0x7898cf*/
          dword_B779CC = v4; /*0x7898d5*/
        }
      }
      DeleteAndZero(&v19); /*0x7898df*/
      v7 = g_WOL_UserList; /*0x7898e8*/
      ++v4; /*0x7898ed*/
      i += 248; /*0x7898f6*/
      if ( v4 >= g_WOL_UserList ) /*0x7898fa*/
        break; /*0x7898fa*/
    }
    v14 = wParam; /*0x789900*/
    if ( wParam == -1 ) /*0x789907*/
    {
LABEL_30:
      wParam = 0; /*0x789909*/
      v14 = 0; /*0x789911*/
    }
    if ( a2 ) /*0x78991e*/
    {
      SendMessageA(hWnd, 0x14Eu, v14, 0); /*0x789925*/
    }
    else
    {
      SendMessageA(hWnd, 0x186u, v14, 0); /*0x78992d*/
      SendMessageA(hWnd, 0x197u, v14, 0); /*0x789938*/
    }
    v26 = &rc_ptr<PlayerProfile>::`vftable'; /*0x78993e*/
    ComPtr::Release(&v26); /*0x789946*/
    DeleteAndZero(&v21); /*0x78994f*/
    return 1; /*0x789954*/
  }
}



// ==== 0x00789960  ObjectClass::ValidateJoinWOL  this=ObjectClass  sig=csp ====
char __usercall ValidateJoinWOL@<al>(ObjectClass *this, int a2@<ecx>, int a3@<ebx>, int a4@<ebp>)
{
  char v4; // dl
  char result; // al
  int v7; // eax
  int v8; // esi
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  int v11; // eax
  int v12; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v14; // ecx
  char v15; // bl
  wchar_t *v16; // [esp-4h] [ebp-28h] BYREF
  String v17; // [esp+Ch] [ebp-18h] BYREF
  OwnerDrawControl v18[3]; // [esp+14h] [ebp-10h] BYREF
  char *v19; // [esp+20h] [ebp-4h] BYREF

  result = ValidateGameJoinWOL(a2, 1, v4); /*0x78996b*/
  if ( result )
  {
    v7 = *(_DWORD *)(a2 + 32); /*0x78997b*/
    if ( (v7 & 0x400) != 0 )
      v8 = 800; /*0x789988*/
    else
      v8 = (v7 & 0x200) != 0 ? 640 : 1024;
    if ( stru_A8EB00.ObjectTypeClass[33] > v8 )
    {
      v9 = (*(_DWORD *)(a2 + 32) & 0x400) != 0
         ? GetStringCSF((wchar_t *)aWolResolutionl, 0, g_Str_File_wonline_cpp, 11491)
         : GetStringCSF(aWolResolutionl_0, 0, g_Str_File_wonline_cpp, 11492);
      WideString::Assign((wchar_t **)&v17.m_3[1], v9); /*0x7899e2*/
      v10 = WideString::GetOrEmpty((wchar_t **)&v17.m_3[1]); /*0x7899f2*/
      if ( ShowDialogConfirm(v10, 4, (unsigned __int8 (*)(void))GameLoop::Thunk, 1) == 6 ) /*0x789a06*/
      {
        v11 = -(v8 != 800); /*0x789a16*/
        LOBYTE(v11) = v11 & 0x60; /*0x789a18*/
        stru_A8EB00.ObjectTypeClass[33] = v11 + 800; /*0x789a1f*/
        v12 = -(v11 != 0); /*0x789a2b*/
        LOBYTE(v12) = v12 & 0x88; /*0x789a2d*/
        stru_A8EB00.ObjectTypeClass[34] = v12 + 600; /*0x789a34*/
        ScenarioClass::SaveGameOptions((ScenarioClass *)&stru_A8EB00.ObjectTypeClass[24]); /*0x789a39*/
      }
      DeleteAndZero::Alt((DeleteAndZero *)&v17.m_3[1]); /*0x789a42*/
      if ( stru_A8EB00.ObjectTypeClass[33] > v8 ) /*0x789a4d*/
        return 0; /*0x789a57*/
    }
    unknown_libname_73(&v17); /*0x789a5c*/
    if ( (*(_DWORD *)(a2 + 28) & 0x100) != 0 ) /*0x789a67*/
    {
      Screen::Capture(1, 0, a3, a4); /*0x789a71*/
      SimpleDialogControl::Constructor((SimpleDialogControl *)v18); /*0x789a7a*/
      v18[0] = (OwnerDrawControl)&off_7F7624; /*0x789a88*/
      unknown_libname_73(&v19); /*0x789a8c*/
      v18[0] = (OwnerDrawControl)&WonlineStringDialogControl::`vftable'; /*0x789aa5*/
      if ( RunDialog( /*0x789ab1*/
             0xE1u,
             (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WOLGameClass::ParseChatMessage,
             (LPARAM)v18) == 2 )
      {
        v18[0] = (OwnerDrawControl)&WonlineStringDialogControl::`vftable'; /*0x789ab7*/
        DeleteAndZero((ObjectClass *)&v19); /*0x789abb*/
        v18[0] = (OwnerDrawControl)&off_7F7624; /*0x789ac4*/
        OwnerDrawControl::InitVtable(v18); /*0x789ac8*/
        DeleteAndZero((ObjectClass *)&v17); /*0x789ad1*/
        return 0; /*0x789ade*/
      }
      String::Reassign(&v17, (const char **)&v19); /*0x789ae8*/
      String::Replace(&v17, asc_830A14, asc_818D7C); /*0x789afb*/
      v18[0] = (OwnerDrawControl)&WonlineStringDialogControl::`vftable'; /*0x789b04*/
      DeleteAndZero((ObjectClass *)&v19); /*0x789b08*/
      v18[0] = (OwnerDrawControl)&off_7F7624; /*0x789b11*/
      OwnerDrawControl::InitVtable(v18); /*0x789b15*/
    }
    StringCSF = GetStringCSF(g_Str_TXT_JOINLOB, 0, g_Str_File_wonline_cpp, 11547); /*0x789b2b*/
    v16 = v14; /*0x789b30*/
    WideString::Assign(&v16, StringCSF); /*0x789b34*/
    v15 = LeaveChannelExWOL(a2, (char **)&v17, v16) == 0; /*0x789b4a*/
    DeleteAndZero((ObjectClass *)&v17); /*0x789b4d*/
    return v15; /*0x789b52*/
  }
  return result; /*0x789974*/
}



// ==== 0x00789B60  ObjectClass::CreateGameWOL  this=ObjectClass  sig=csp ====
char __usercall CreateGameWOL@<al>(ObjectClass *this, int a2@<esi>)
{
  int v2; // edi
  bool v3; // bl
  int v5; // eax
  wchar_t *StringCSF; // eax
  int i; // esi
  TechnoTypeClass *v8; // ecx
  int v9; // eax
  int v10; // ebp
  wchar_t *v11; // eax
  ObjectClass *PlayerProfile; // eax
  int PlayerOption; // eax
  int PlayerColor; // eax
  int v15; // eax
  wchar_t *v16; // eax
  int v17; // eax
  wchar_t *v18; // eax
  HWND v19; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  wchar_t *v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  HWND v28; // eax
  int owningHouseIndex; // eax
  char *v30; // ebx
  int v31; // esi
  int v32; // edi
  char *v33; // eax
  char *v34; // eax
  u_long v35; // edx
  int v36; // eax
  _DWORD *v37; // ebp
  int Flag_field_0x04; // eax
  int Flag_field_0x08; // ecx
  HWND v40; // eax
  HWND v41; // edi
  HWND Dialog; // esi
  String v43; // [esp+18h] [ebp-1ACh] BYREF
  DeleteAndZero v44; // [esp+20h] [ebp-1A4h] BYREF
  ComPtr v45; // [esp+2Ch] [ebp-198h] BYREF
  DeleteAndZero v46; // [esp+50h] [ebp-174h] BYREF
  Flag v47; // [esp+5Ch] [ebp-168h] BYREF
  _DWORD v48[67]; // [esp+70h] [ebp-154h] BYREF
  char v49[72]; // [esp+17Ch] [ebp-48h] BYREF

  unknown_libname_73(&v43); /*0x789b6a*/
  if ( stru_A8EB00.ObjectTypeClass[33] >= 1024 ) /*0x789b79*/
    byte_A8B540 = 0; /*0x789b7b*/
  v43.__tail_7[0] = byte_A8B540; /*0x789b9c*/
  v3 = g_MenuStateFlags == 1; /*0x789ba0*/
  CreateGameWOL_Create_7AC610((SimpleWonlineDialogControl *)&v45); /*0x789ba3*/
  LOWORD(v45.ComPtr_field_0x10) = 0; /*0x789bb4*/
  BYTE2(v45.ComPtr_field_0x10) = v43.__tail_7[0]; /*0x789bbe*/
  HIBYTE(v45.ComPtr_field_0x10) = v3; /*0x789bc2*/
  *(_DWORD *)v45.__pad_0 = &CreateGameDialogControl::`vftable'; /*0x789bc6*/
  byte_B77DEC = 0; /*0x789bce*/
  if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x789bde*/
  {
    stru_B77D80.HashTable_field_0x44 = 2; /*0x789be0*/
  }
  else
  {
    Screen::Capture(1, 0, v3, 1); /*0x789bf0*/
    if ( RunDialog(0xC3u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WOLLogin::DlgProc, (LPARAM)&v45) == 2 ) /*0x789c0c*/
    {
      *(_DWORD *)v45.__pad_0 = &WonlineStringDialogControl::`vftable'; /*0x789c12*/
      DeleteAndZero((ObjectClass *)&v45.ComPtr_field_0x0C); /*0x789c1a*/
      ConnectAndLoginWOL_Connect((SimpleWonlineDialogControl *)&v45); /*0x789c23*/
      DeleteAndZero((ObjectClass *)&v43); /*0x789c2c*/
      return 0; /*0x789c3d*/
    }
    String::Reassign(&v43, (const char **)&v45.ComPtr_field_0x0C); /*0x789c47*/
    String::Replace(&v43, asc_830A14, asc_818D7C); /*0x789c5a*/
  }
  (*(void (__stdcall **)(LPVOID, int, int))(*(_DWORD *)ppv + 36))(ppv, v2, a2); /*0x789c67*/
  memset(v48, 0, sizeof(v48)); /*0x789c7b*/
  sprintf((char *const)&v48[13], "%s's_game", *(const char **)&g_WindowManager.__pad_EC[684]); /*0x789c8b*/
  v48[0] = 41; /*0x789c9b*/
  v48[1] = 1; /*0x789ca3*/
  if ( stru_B77D80.HashTable_field_0x44 < 2 ) /*0x789ca7*/
    stru_B77D80.HashTable_field_0x44 = 6; /*0x789ca9*/
  strcpy((char *)&v48[53] + 3, String::GetOrEmpty((String *)&v44)); /*0x789cdb*/
  v48[2] = stru_B77D80.HashTable_field_0x44; /*0x789cf3*/
  memset(v49, 0, 0x50u); /*0x789cfc*/
  GameConfig::BuildChecksum(v49); /*0x789d05*/
  v49[40] = 0; /*0x789d15*/
  strcpy((char *)&v48[56], v49); /*0x789d33*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x789d49*/
  {
    if ( dword_A8B244 == 3 ) /*0x789d4e*/
    {
      v5 = v48[8]; /*0x789d50*/
      v48[5] = 1; /*0x789d57*/
      BYTE1(v5) = BYTE1(v48[8]) | 0x10; /*0x789d5b*/
      goto LABEL_22; /*0x789d5e*/
    }
  }
  else if ( dword_A8B244 == 3 ) /*0x789d63*/
  {
LABEL_29:
    v5 = v48[8]; /*0x789ec4*/
    v48[5] = 1; /*0x789ee7*/
    BYTE1(v5) = BYTE1(v48[8]) | 8; /*0x789eeb*/
    goto LABEL_22; /*0x789eee*/
  }
  if ( dword_A8B244 == 1 ) /*0x789d6b*/
    goto LABEL_29; /*0x789d6b*/
  if ( dword_A8B244 == 2 )
  {
    v5 = v48[8]; /*0x789ec9*/
    v48[5] = 0; /*0x789ed0*/
    BYTE1(v5) = BYTE1(v48[8]) | 8; /*0x789ed8*/
  }
  else
  {
    v5 = v48[8]; /*0x789d8a*/
    v48[5] = LOBYTE(v45.ComPtr_field_0x18); /*0x789d91*/
    if ( BYTE1(v45.ComPtr_field_0x18) ) /*0x789d95*/
      BYTE1(v5) = BYTE1(v48[8]) | 1; /*0x789d97*/
    byte_A8B540 = BYTE2(v45.ComPtr_field_0x18); /*0x789da0*/
    if ( BYTE2(v45.ComPtr_field_0x18) )
      v5 |= stru_A8EB00.ObjectTypeClass[33] != 800 ? 512 : 1024;
  }
LABEL_22:
  v48[8] = dword_B77DD4 + v5; /*0x789dc6*/
  if ( stru_B77D80.HashTable_field_0x50 ) /*0x789dda*/
  {
    Debug::Log(); /*0x789df0*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x789e00*/
    StringCSF = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x789e14*/
    WideString::Assign((wchar_t **)&v46.DeleteAndZero_field_0x04, StringCSF); /*0x789e1e*/
    ShowUIMessage(192, (wchar_t **)&v46.DeleteAndZero_field_0x04, 0); /*0x789e2e*/
    DeleteAndZero::Alt((DeleteAndZero *)&v46.DeleteAndZero_field_0x04); /*0x789e37*/
    for ( i = 0; stru_B77D80.HashTable_field_0x50; ++i ) /*0x789e45*/
    {
      if ( i >= 150 ) /*0x789e53*/
        break; /*0x789e53*/
      Sleep(0x64u); /*0x789e57*/
      Game::ProcessIdle(v8); /*0x789e59*/
    }
    CreateGameWOL_Create(64); /*0x789e6d*/
  }
  dword_A8B23C = (ObjectClass *)MultiplayerGameMode::GetFirst(); /*0x789e77*/
  *(_DWORD *)stru_A8B250.__pad_0 = dword_A8B23C->owningHouseIndex; /*0x789e7f*/
  (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 8))(dword_A8B23C); /*0x789e89*/
  LoadScenarioClassByIndex(0); /*0x789e8e*/
  PtrVector::Destroy(&stru_A8DA74); /*0x789e98*/
  Game::ResetFlags(); /*0x789e9d*/
  Network::InitPlayerSlots(); /*0x789ea2*/
  v9 = __2_YAPAXI_Z(0x85u); /*0x789eac*/
  v10 = v9; /*0x789eb1*/
  if ( v9 ) /*0x789eb8*/
    Waypoint::InitInvalid((Waypoint *)(v9 + 40)); /*0x789ebd*/
  else
    v10 = 0; /*0x789ef3*/
  memset((void *)v10, 0, 0x84u); /*0x789f03*/
  *(_BYTE *)(v10 + 132) = 0; /*0x789f09*/
  CharStringToWide((wchar_t **)&v44.DeleteAndZero_field_0x08, (const char **)&g_WindowManager.__pad_EC[684]); /*0x789f0a*/
  v11 = WideString::GetOrEmpty((wchar_t **)&v44.DeleteAndZero_field_0x08); /*0x789f13*/
  wcscpy((wchar_t *)v10, v11); /*0x789f1a*/
  *(_DWORD *)v47.__pad_0 = 0; /*0x789f28*/
  LOBYTE(v47.Flag_field_0x04) = 0; /*0x789f2c*/
  ReadRegistryOptionsWOL((ObjectClass *)&v47); /*0x789f31*/
  ComPtr::Constructor(&v45); /*0x789f3a*/
  *(_DWORD *)v45.__pad_0 = &rc_ptr<PlayerProfile>::`vftable'; /*0x789f48*/
  if ( (unsigned __int8)Flag::IsNot2(&v47) ) /*0x789f4c*/
  {
    PlayerProfile = LoadPlayerProfile( /*0x789f5e*/
                      (ObjectClass *)&v45.ComPtr_field_0x20,
                      (const char **)&g_WindowManager.__pad_EC[684]);
    ComPtr::Set(&v45, (int)PlayerProfile->?); /*0x789f6b*/
    v45.ComPtr_field_0x20 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x789f74*/
    ComPtr::Release((ComPtr *)&v45.ComPtr_field_0x20); /*0x789f78*/
  }
  else
  {
    ComPtr::Set(&v45, stru_B75E48.ComPtr_field_0x04); /*0x789f8a*/
  }
  if ( v45.ComPtr_field_0x04 ) /*0x789f95*/
  {
    SessionClass::AssignSide((SessionClass *)&dword_A8B238, *(_DWORD *)(v45.ComPtr_field_0x04 + 28), 0); /*0x789fa1*/
    SessionClass::AssignColor((SessionClass *)&dword_A8B238, *(_DWORD *)(v45.ComPtr_field_0x04 + 32), 0); /*0x789fb4*/
  }
  dword_A8B39C = -1; /*0x789fbe*/
  dword_A8B3A0 = -2; /*0x789fc4*/
  PlayerOption = Session::GetPlayerOption((Session *)&dword_A8B238); /*0x789fce*/
  SessionClass::SetPlayerOption((int *)v10, PlayerOption); /*0x789fd6*/
  PlayerColor = Session::GetPlayerColor((Session *)&dword_A8B238); /*0x789fe0*/
  SessionClass::SetPlayerColor((int *)v10, PlayerColor); /*0x789fe8*/
  SessionClass::SetOption((int *)v10, -2); /*0x789ff1*/
  SessionClass::SetOption2((int *)v10, -2); /*0x789ffa*/
  *(_DWORD *)(v10 + 119) = 1; /*0x789fff*/
  *(_DWORD *)(v10 + 107) = 0; /*0x78a006*/
  g_MPCooperativeState = (ObjectClass *)7; /*0x78a015*/
  g_MenuStateFlags = HIBYTE(v45.ComPtr_field_0x18); /*0x78a01f*/
  Dialog::RefreshDialogsGame(0); /*0x78a025*/
  if ( g_MenuStateFlags ) /*0x78a030*/
  {
    g_MPCooperativeState = 0; /*0x78a032*/
    *(_DWORD *)(v10 + 107) = -1; /*0x78a03c*/
    SessionClass::SetPlayerOption((int *)v10, -3); /*0x78a03f*/
  }
  if ( dword_A8DA84 < dword_A8DA7C /*0x78a079*/
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA74 + 8))(
         &stru_A8DA74,
         dword_A8DA7C + dword_A8DA88,
         0) )
  {
    v15 = dword_A8DA84++; /*0x78a086*/
    dword_A8DA78[v15] = v10; /*0x78a095*/
  }
  NetworkShare::GetField(0); /*0x78a09a*/
  v16 = WideString::GetOrEmpty((wchar_t **)&v44.DeleteAndZero_field_0x08); /*0x78a0a3*/
  wcscpy((wchar_t *)&stru_A8D600.Network_field_0x10, v16); /*0x78a0ae*/
  v17 = (*(int (__cdecl **)(LPVOID, _DWORD *))(*(_DWORD *)ppv + 28))(ppv, v48); /*0x78a0c3*/
  if ( v17 == -2147221000 ) /*0x78a0cb*/
  {
    v18 = GetStringCSF(aTxtBadChankey, 0, g_Str_File_wonline_cpp, 11789); /*0x78a0e4*/
    ShowDialogConfirm(v18, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x78a0ed*/
    v19 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x78a0f7*/
    if ( v19 ) /*0x78a0fe*/
    {
      stru_B77D80.HashTable_field_0x48 &= ~0x80u; /*0x78a10c*/
      if ( !stru_B77D80.HashTable_field_0x48 ) /*0x78a112*/
        CloseDialog(v19, 0); /*0x78a118*/
    }
    Current = (HWND)Dialog::GetCurrent(); /*0x78a11d*/
    DlgItem = GetDlgItem(Current, 1344); /*0x78a128*/
    if ( !DlgItem ) /*0x78a130*/
      goto LABEL_72; /*0x78a130*/
    goto LABEL_50; /*0x78a130*/
  }
  if ( v17 ) /*0x78a144*/
  {
    v22 = GetStringCSF(aTxtCantcreateC, 0, g_Str_File_wonline_cpp, 11795); /*0x78a15d*/
    ShowDialogConfirm(v22, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x78a166*/
    v23 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x78a170*/
    if ( v23 ) /*0x78a177*/
    {
      stru_B77D80.HashTable_field_0x48 &= ~0x80u; /*0x78a185*/
      if ( !stru_B77D80.HashTable_field_0x48 ) /*0x78a18b*/
        CloseDialog(v23, 0); /*0x78a191*/
    }
    v24 = (HWND)Dialog::GetCurrent(); /*0x78a196*/
    DlgItem = GetDlgItem(v24, 1344); /*0x78a1a1*/
    if ( !DlgItem ) /*0x78a1a9*/
      goto LABEL_72; /*0x78a1a9*/
LABEL_50:
    SetFocus(DlgItem); /*0x78a136*/
LABEL_72:
    v44.DeleteAndZero_field_0x04 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x78a29d*/
    ComPtr::Release((ComPtr *)&v44.DeleteAndZero_field_0x04); /*0x78a2a5*/
    DeleteAndZero::Alt(&v44); /*0x78a2ae*/
    *(_DWORD *)v45.__pad_0 = &WonlineStringDialogControl::`vftable'; /*0x78a2b7*/
    DeleteAndZero((ObjectClass *)&v45.ComPtr_field_0x0C); /*0x78a2bf*/
    *(_DWORD *)v45.__pad_0 = &off_7F7624; /*0x78a2c8*/
    OwnerDrawControl::InitVtable((OwnerDrawControl *)&v45); /*0x78a2d0*/
    DeleteAndZero((ObjectClass *)&v43); /*0x78a2d9*/
    return 0; /*0x78a2ea*/
  }
  v25 = GetStringCSF(aGuiCreatingcha, 0, g_Str_File_wonline_cpp, 11803); /*0x78a1cc*/
  WideString::Assign((wchar_t **)&v46, v25); /*0x78a1d6*/
  ShowUIMessage(4, (wchar_t **)&v46, 0); /*0x78a1e5*/
  v26 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x78a1ef*/
  if ( v26 ) /*0x78a1f6*/
  {
    stru_B77D80.HashTable_field_0x48 &= ~0x80u; /*0x78a204*/
    if ( !stru_B77D80.HashTable_field_0x48 ) /*0x78a20a*/
      CloseDialog(v26, 0); /*0x78a210*/
  }
  v27 = (HWND)Dialog::GetCurrent(); /*0x78a215*/
  v28 = GetDlgItem(v27, 1344); /*0x78a220*/
  if ( v28 ) /*0x78a228*/
    SetFocus(v28); /*0x78a22b*/
  ShowUIMessage(4, (wchar_t **)&v46, 1); /*0x78a23c*/
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x78a241*/
  v30 = 0; /*0x78a246*/
  v31 = 0; /*0x78a248*/
  if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x78a24c*/
    goto LABEL_71; /*0x78a24c*/
  v32 = 0; /*0x78a24e*/
  while ( 1 ) /*0x78a250*/
  {
    if ( v32 >= 0 && v31 < owningHouseIndex ) /*0x78a256*/
      v30 = (char *)g_WOL_UserList.nextObject + v32; /*0x78a25e*/
    v33 = String::GetOrEmpty_Alt((String *)&g_WindowManager.__pad_EC[684]); /*0x78a26a*/
    if ( !_strcmpi(v33, v30 + 36) ) /*0x78a270*/
      break; /*0x78a270*/
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x78a27c*/
    ++v31; /*0x78a281*/
    v32 += 108; /*0x78a282*/
    if ( v31 >= g_WOL_UserList.owningHouseIndex ) /*0x78a287*/
      goto LABEL_71; /*0x78a287*/
  }
  if ( v31 < 0 ) /*0x78a28d*/
  {
LABEL_71:
    DeleteAndZero::Alt(&v46); /*0x78a294*/
    goto LABEL_72; /*0x78a298*/
  }
  v34 = 0; /*0x78a2f1*/
  if ( v31 < g_WOL_UserList.owningHouseIndex ) /*0x78a2f5*/
    v34 = (char *)g_WOL_UserList.nextObject + 108 * v31; /*0x78a303*/
  v35 = *((_DWORD *)v34 + 6); /*0x78a306*/
  v45.ComPtr_field_0x18 = 0; /*0x78a30b*/
  v45.ComPtr_field_0x20 = 0; /*0x78a310*/
  LOWORD(v45.ComPtr_field_0x1C) = 0; /*0x78a318*/
  v36 = ntohl(v35); /*0x78a31d*/
  HIBYTE(v45.ComPtr_field_0x18) = v36; /*0x78a326*/
  LOBYTE(v45.ComPtr_field_0x18) = HIBYTE(v36); /*0x78a332*/
  BYTE2(v45.ComPtr_field_0x18) = BYTE1(v36); /*0x78a336*/
  BYTE1(v45.ComPtr_field_0x18) = BYTE2(v36); /*0x78a34b*/
  NetworkAddress::Assign((NetworkAddress *)&v47, &v45.ComPtr_field_0x20, (int)&v45.ComPtr_field_0x18, 0); /*0x78a34f*/
  v37 = (_DWORD *)(v10 + 40); /*0x78a354*/
  Flag_field_0x04 = v47.Flag_field_0x04; /*0x78a35b*/
  Flag_field_0x08 = v47.Flag_field_0x08; /*0x78a35f*/
  *v37 = *(_DWORD *)v47.__pad_0; /*0x78a363*/
  v37[1] = Flag_field_0x04; /*0x78a366*/
  v37[2] = Flag_field_0x08; /*0x78a369*/
  if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x78a386*/
  {
    v40 = (HWND)Dialog::GetCurrent(); /*0x78a38c*/
    v41 = v40; /*0x78a391*/
    if ( v40 ) /*0x78a395*/
    {
      RenderGadgetClassAnimation(v40, 0); /*0x78a39b*/
      Screen::Capture(1, 0, (unsigned __int8)v30, (int)v37); /*0x78a3a4*/
    }
    Screen::Capture(1, 0, (unsigned __int8)v30, (int)v37); /*0x78a3ad*/
    LoadingScreen::Init(); /*0x78a3b2*/
    Dialog = (HWND)CreateDialog(0xC2u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WOLobby::SetupDlgProc, 0); /*0x78a3ce*/
    (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 39))(dword_A8B23C); /*0x78a3d2*/
    (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 8))(dword_A8B23C); /*0x78a3e0*/
    (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 6))(dword_A8B23C); /*0x78a3eb*/
    (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 31))(dword_A8B23C); /*0x78a3f6*/
    ShowWindow(Dialog, 1); /*0x78a402*/
    if ( v41 ) /*0x78a406*/
      ShowWindow(v41, 0); /*0x78a40b*/
  }
  DeleteAndZero::Alt(&v46); /*0x78a411*/
  v44.DeleteAndZero_field_0x04 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x78a41a*/
  ComPtr::Release((ComPtr *)&v44.DeleteAndZero_field_0x04); /*0x78a422*/
  DeleteAndZero::Alt(&v44); /*0x78a42b*/
  *(_DWORD *)v45.__pad_0 = &WonlineStringDialogControl::`vftable'; /*0x78a434*/
  DeleteAndZero((ObjectClass *)&v45.ComPtr_field_0x0C); /*0x78a43c*/
  *(_DWORD *)v45.__pad_0 = &off_7F7624; /*0x78a445*/
  OwnerDrawControl::InitVtable((OwnerDrawControl *)&v45); /*0x78a44d*/
  DeleteAndZero((ObjectClass *)&v43); /*0x78a456*/
  return 1; /*0x789c37*/
}



// ==== 0x0078A470  ObjectClass::HandleOnlineWOL  this=ObjectClass  sig=csp ====
int __thiscall HandleOnlineWOL(ObjectClass *this)
{
  wchar_t *StringCSF; // eax
  size_t v3; // eax
  int v4; // ebx
  const wchar_t *i; // esi
  wchar_t *v6; // edi
  wchar_t v7; // cx
  char *v8; // edi
  LPVOID v9; // eax
  wchar_t *v11; // eax
  HWND Current; // eax
  HWND v13; // esi
  int Type; // esi
  int v15; // eax
  const wchar_t *v16; // [esp+0h] [ebp-314h]
  wchar_t v17[16]; // [esp+8h] [ebp-30Ch] BYREF
  wchar_t String[64]; // [esp+28h] [ebp-2ECh] BYREF
  char v19[36]; // [esp+A8h] [ebp-26Ch] BYREF
  char v20[72]; // [esp+CCh] [ebp-248h] BYREF
  wchar_t Buffer[256]; // [esp+114h] [ebp-200h] BYREF

  StringCSF = GetStringCSF(aTxtOnlineComma, 0, g_Str_File_wonline_cpp, 11864); /*0x78a48d*/
  wcscpy(String, StringCSF); /*0x78a498*/
  v3 = wcslen(String); /*0x78a4a2*/
  if ( wcsncmp((const wchar_t *)this, String, v3) ) /*0x78a4ae*/
    return 0; /*0x78a697*/
  v4 = 0; /*0x78a4c4*/
  for ( i = (const wchar_t *)((char *)this + 2 * wcslen(String)); !wcsncmp(i, asc_82083C, 1u); ++i ) /*0x78a4d6*/
    ; /*0x78a4e2*/
  if ( *i ) /*0x78a4f9*/
  {
    v6 = v17; /*0x78a4ff*/
    do /*0x78a529*/
    {
      if ( !wcsncmp(i, asc_82083C, 1u) ) /*0x78a50b*/
        break; /*0x78a515*/
      if ( v4 >= 10 ) /*0x78a51a*/
        break; /*0x78a51a*/
      v7 = *i++; /*0x78a51c*/
      *v6 = v7; /*0x78a522*/
      ++v4; /*0x78a525*/
      ++v6; /*0x78a526*/
    }
    while ( *i ); /*0x78a529*/
  }
  v17[v4] = 0; /*0x78a533*/
  if ( wcslen(v17) ) /*0x78a53b*/
  {
    strcpy(v20, ToWideStringChar((char *)v17)); /*0x78a56e*/
    v8 = ToWideStringChar((char *)v17); /*0x78a580*/
    v9 = ppv; /*0x78a58d*/
    strcpy((char *)&g_WOL_LoginObject.?, v8); /*0x78a59e*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)v9 + 96))(v9, v19); /*0x78a5b2*/
    return 1; /*0x78a5b5*/
  }
  else
  {
    v11 = GetStringCSF(aTxtNoName, 0, g_Str_File_wonline_cpp, 11884); /*0x78a5d4*/
    swprintf(Buffer, (const size_t)v11, v16); /*0x78a5e2*/
    Current = (HWND)Dialog::GetCurrent(); /*0x78a5ea*/
    v13 = Current; /*0x78a5ef*/
    if ( Current ) /*0x78a5f3*/
    {
      if ( GetDlgItem(Current, 1343) ) /*0x78a601*/
        Dialog::ShowMessage(-1, (size_t)Buffer); /*0x78a616*/
      if ( GetDlgItem(v13, 1461) ) /*0x78a624*/
        Dialog::ShowStatusText(-1, (size_t)Buffer); /*0x78a639*/
    }
    if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x78a646*/
    {
      Type = BuildingAnim::GetType(); /*0x78a65a*/
      LOWORD(v15) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x78a66a*/
      MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, Buffer, Type, 22, v15, 0); /*0x78a684*/
    }
    return 1; /*0x78a68a*/
  }
}



// ==== 0x0078A6B0  ObjectClass::HandlePageWOL  this=ObjectClass  sig=csp ====
wchar_t *__thiscall HandlePageWOL(ObjectClass *this)
{
  int v2; // esi
  wchar_t *StringCSF; // eax
  size_t v4; // eax
  int v5; // ebp
  size_t v6; // esi
  wchar_t *result; // eax
  wchar_t *v8; // edi
  const wchar_t *v9; // ebx
  wchar_t *v10; // esi
  wchar_t v11; // dx
  int v12; // esi
  int Type; // esi
  int v14; // eax
  wchar_t *v15; // eax
  int v16; // [esp-Ch] [ebp-1A8h]
  wchar_t *v17; // [esp+Ch] [ebp-190h]
  wchar_t String2[16]; // [esp+10h] [ebp-18Ch] BYREF
  char v19[36]; // [esp+30h] [ebp-16Ch] BYREF
  char v20[72]; // [esp+54h] [ebp-148h] BYREF
  wchar_t String[128]; // [esp+9Ch] [ebp-100h] BYREF

  v2 = 0; /*0x78a6cc*/
  StringCSF = GetStringCSF(g_Str_TXT_PAGE_COMMAND, 0, g_Str_File_wonline_cpp, 11918); /*0x78a6ce*/
  wcscpy(String, StringCSF); /*0x78a6dc*/
  v4 = wcslen(String); /*0x78a6e9*/
  if ( _wcsnicmp((const wchar_t *)this, String, v4) ) /*0x78a6f8*/
    return (wchar_t *)v2; /*0x78a8e2*/
  v5 = 0; /*0x78a709*/
  v6 = wcslen((const wchar_t *)this) + 1; /*0x78a712*/
  result = (wchar_t *)__2_YAPAXI_Z(2 * v6); /*0x78a717*/
  if ( result ) /*0x78a721*/
  {
    result = wcsncpy(result, (const wchar_t *)this, v6); /*0x78a730*/
    v8 = result; /*0x78a735*/
    v17 = result; /*0x78a73c*/
    if ( result ) /*0x78a740*/
    {
      v9 = &result[wcslen(String)]; /*0x78a75a*/
      if ( *v9 ) /*0x78a760*/
      {
        do /*0x78a77d*/
        {
          if ( wcsncmp(v9, asc_82083C, 1u) ) /*0x78a76e*/
            break; /*0x78a778*/
          ++v9; /*0x78a77a*/
        }
        while ( *v9 ); /*0x78a77d*/
        if ( *v9 ) /*0x78a782*/
        {
          v10 = String2; /*0x78a788*/
          do /*0x78a7b2*/
          {
            if ( !wcsncmp(v9, asc_82083C, 1u) ) /*0x78a794*/
              break; /*0x78a79e*/
            if ( v5 > 10 ) /*0x78a7a3*/
              break; /*0x78a7a3*/
            v11 = *v9++; /*0x78a7a5*/
            *v10 = v11; /*0x78a7ab*/
            ++v5; /*0x78a7ae*/
            ++v10; /*0x78a7af*/
          }
          while ( *v9 ); /*0x78a7b2*/
        }
      }
      v12 = 0; /*0x78a7b8*/
      for ( String2[v5] = 0; *v9; ++v9 ) /*0x78a7bf*/
      {
        if ( wcsncmp(v9, asc_82083C, 1u) ) /*0x78a7cc*/
          break; /*0x78a7d6*/
      }
      if ( v5 <= 10 ) /*0x78a7e3*/
      {
        if ( v5 ) /*0x78a7f1*/
        {
          if ( dword_A8B538[0] && dword_A8DA84 > 0 ) /*0x78a80c*/
          {
            while ( _wcsicmp((const wchar_t *)dword_A8DA78[v12], String2) ) /*0x78a827*/
            {
              if ( ++v12 >= dword_A8DA84 ) /*0x78a831*/
                goto LABEL_23; /*0x78a831*/
            }
            Type = BuildingAnim::GetType(); /*0x78a890*/
            LOWORD(v14) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x78a8a5*/
            v16 = v14; /*0x78a8aa*/
            v15 = GetStringCSF(g_Str_TXT_OBSERVER_CANT_PAGE, 0, g_Str_File_wonline_cpp, 11978); /*0x78a8bf*/
            MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, v15, Type, 22, v16, 0); /*0x78a8ce*/
            v2 = 2; /*0x78a8d3*/
          }
          else
          {
LABEL_23:
            if ( wcslen(v9) ) /*0x78a834*/
            {
              strcpy(v20, ToWideStringChar((char *)String2)); /*0x78a868*/
              (*(void (__stdcall **)(LPVOID, char *, const wchar_t *))(*(_DWORD *)ppv + 248))(ppv, v19, v9); /*0x78a87a*/
              v8 = v17; /*0x78a880*/
            }
            v2 = 1; /*0x78a884*/
          }
        }
        else
        {
          v2 = 1; /*0x78a7f3*/
        }
      }
      else
      {
        v2 = 1; /*0x78a7e5*/
      }
      __3_YAXPAX_Z(v8); /*0x78a8d9*/
      return (wchar_t *)v2; /*0x78a8d9*/
    }
  }
  return result; /*0x78a723*/
}



// ==== 0x0078A8F0  ObjectClass::HandleReplyWOL  this=ObjectClass  sig=csp ====
wchar_t *__thiscall HandleReplyWOL(ObjectClass *this)
{
  int v2; // esi
  wchar_t *StringCSF; // eax
  wchar_t *v4; // eax
  size_t v5; // eax
  size_t v6; // eax
  size_t v7; // esi
  wchar_t *result; // eax
  wchar_t *v9; // ebp
  size_t v10; // eax
  int v11; // eax
  const wchar_t *i; // ebx
  int v13; // edi
  const wchar_t **v14; // esi
  char *v15; // eax
  wchar_t *v16; // eax
  HWND Current; // eax
  HWND v18; // esi
  int v19; // esi
  int v20; // eax
  int Type; // esi
  int v22; // eax
  wchar_t *v23; // eax
  int v24; // [esp-Ch] [ebp-384h]
  wchar_t String[128]; // [esp+Ch] [ebp-36Ch] BYREF
  char v26[36]; // [esp+10Ch] [ebp-26Ch] BYREF
  char v27[72]; // [esp+130h] [ebp-248h] BYREF
  wchar_t Destination[128]; // [esp+178h] [ebp-200h] BYREF
  wchar_t v29[128]; // [esp+278h] [ebp-100h] BYREF

  v2 = 0; /*0x78a90c*/
  StringCSF = GetStringCSF(g_Str_TXT_REPLY_COMMAND, 0, g_Str_File_wonline_cpp, 11998); /*0x78a90e*/
  wcscpy(String, StringCSF); /*0x78a919*/
  v4 = GetStringCSF(g_Str_TXT_REPLY_COMMAND_SHORT, 0, g_Str_File_wonline_cpp, 11999); /*0x78a932*/
  wcscpy(Destination, v4); /*0x78a940*/
  v5 = wcslen(String); /*0x78a94a*/
  if ( _wcsnicmp((const wchar_t *)this, String, v5) ) /*0x78a956*/
  {
    v6 = wcslen(Destination); /*0x78a96a*/
    if ( wcsncmp((const wchar_t *)this, Destination, v6) ) /*0x78a979*/
      return (wchar_t *)v2; /*0x78a983*/
  }
  v7 = wcslen((const wchar_t *)this) + 1; /*0x78a991*/
  result = (wchar_t *)__2_YAPAXI_Z(2 * v7); /*0x78a996*/
  if ( result ) /*0x78a9a0*/
  {
    result = wcsncpy(result, (const wchar_t *)this, v7); /*0x78a9af*/
    v9 = result; /*0x78a9b4*/
    if ( result ) /*0x78a9bb*/
    {
      v10 = wcslen(String); /*0x78a9cd*/
      if ( !wcsncmp((const wchar_t *)this, String, v10) ) /*0x78a9d9*/
        v11 = wcslen(String); /*0x78a9ea*/
      else
        v11 = wcslen(Destination); /*0x78a9f4*/
      for ( i = &v9[v11]; *i; ++i ) /*0x78aa00*/
      {
        if ( wcsncmp(i, asc_82083C, 1u) ) /*0x78aa0e*/
          break; /*0x78aa18*/
      }
      if ( dword_A8B538[0] && (v13 = 0, dword_A8DA84 > 0) ) /*0x78aa34*/
      {
        while ( 1 ) /*0x78aa41*/
        {
          v14 = (const wchar_t **)&dword_A8DA78[v13]; /*0x78aa41*/
          v15 = CharToWideString(byte_B77E30); /*0x78aa44*/
          if ( !_wcsicmp(*v14, (const wchar_t *)v15) ) /*0x78aa4d*/
            break; /*0x78aa4d*/
          if ( ++v13 >= dword_A8DA84 ) /*0x78aa65*/
            goto LABEL_15; /*0x78aa65*/
        }
        Type = BuildingAnim::GetType(); /*0x78ab93*/
        LOWORD(v22) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x78aba3*/
        v24 = v22; /*0x78aba8*/
        v23 = GetStringCSF(g_Str_TXT_OBSERVER_CANT_PAGE, 0, g_Str_File_wonline_cpp, 12074); /*0x78abbd*/
        MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, v23, Type, 22, v24, 0); /*0x78abcc*/
      }
      else
      {
LABEL_15:
        if ( strlen(byte_B77E30) ) /*0x78aa6c*/
        {
          if ( wcslen(i) ) /*0x78aa79*/
          {
            strcpy(v27, byte_B77E30); /*0x78aaad*/
            (*(void (__stdcall **)(LPVOID, char *, const wchar_t *))(*(_DWORD *)ppv + 248))(ppv, v26, i); /*0x78aabf*/
          }
          v2 = 1; /*0x78aac5*/
          goto LABEL_28; /*0x78aaca*/
        }
        v16 = GetStringCSF(aTxtNoOneWhomTo, 0, g_Str_File_wonline_cpp, 12050); /*0x78aae0*/
        wcscpy(v29, v16); /*0x78aaee*/
        Current = (HWND)Dialog::GetCurrent(); /*0x78aaf6*/
        v18 = Current; /*0x78aafb*/
        if ( Current ) /*0x78aaff*/
        {
          if ( GetDlgItem(Current, 1343) ) /*0x78ab0d*/
            Dialog::ShowMessage(-1, (size_t)v29); /*0x78ab22*/
          if ( GetDlgItem(v18, 1461) ) /*0x78ab30*/
            Dialog::ShowStatusText(-1, (size_t)v29); /*0x78ab45*/
        }
        if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x78ab52*/
        {
          v19 = BuildingAnim::GetType(); /*0x78ab66*/
          LOWORD(v20) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x78ab76*/
          MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, v29, v19, 22, v20, 0); /*0x78ab86*/
        }
      }
      v2 = 2; /*0x78abd1*/
LABEL_28:
      __3_YAXPAX_Z(v9); /*0x78abd6*/
      return (wchar_t *)v2; /*0x78abe0*/
    }
  }
  return result; /*0x78a9a2*/
}



// ==== 0x0078ABF0  ChatMessageWOL  this=-  sig=csp ====
__int16 __fastcall ChatMessageWOL(char a1, wchar_t *a2)
{
  byte_B77E40 = a1; /*0x78abf0*/
  return WideString::Reassign((WideString *)&unk_B76230, a2); /*0x78ac01*/
}



// ==== 0x0078AC10  WOLobby::DlgProc  this=WOLobby  sig=csp ====
int __stdcall WOLobby::DlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  LRESULT v5; // eax
  LRESULT v6; // eax
  HWND v7; // esi
  int v8; // esi
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  HWND v11; // edi
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  int v14; // ebx
  size_t v15; // esi
  wchar_t *v16; // edi
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // ebp
  const wchar_t *v20; // esi
  int *p_abstractFlags; // edi
  wchar_t v22; // ax
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  size_t v25; // esi
  wchar_t *v26; // edi
  wchar_t *v27; // eax
  wchar_t *v28; // eax
  wchar_t *v29; // eax
  wchar_t *v30; // edi
  size_t v31; // eax
  int v32; // eax
  const wchar_t *i; // esi
  char *v34; // eax
  wchar_t *v35; // eax
  wchar_t *v36; // esi
  wchar_t *v37; // eax
  size_t v38; // eax
  bool v39; // zf
  wchar_t *v40; // eax
  wchar_t *v41; // eax
  wchar_t *v42; // esi
  wchar_t *v43; // eax
  size_t v44; // eax
  wc... [54851 chars total]



// ==== 0x0078D120  OnlineLobbyDlgProcWOL  this=-  sig=csp ====
int __stdcall WOL_OnlineLobby_DlgProc(HWND hDlg, unsigned int a2, int a3, HWND hWnd)
{
  int result; // eax
  HWND v5; // eax
  BOOL v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  BOOL v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // esi
  HWND v16; // eax
  HWND v17; // eax
  int v18; // esi
  char *v19; // eax
  int v20; // esi
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  wchar_t *String; // eax
  HWND v25; // esi
  int v26; // esi
  wchar_t *v27; // eax
  wchar_t *v28; // eax
  HWND v29; // eax
  HWND v30; // eax
  int v31; // ebx
  signed int v32; // eax
  HWND v33; // eax
  HWND v34; // eax
  HWND v35; // eax
  HWND DlgItem; // eax
  BOOL v37; // [esp-4h] [ebp-10Ch]
  BOOL v38; // [esp-4h] [ebp-10Ch]
  void *v39; // [esp+10h] [ebp-F8h] BYREF
  void *v40; // [esp+14h] [ebp-F4h] BYREF
  char lParam[9]; // [esp+18h] [ebp-F0h] BYREF
  char v42; // [esp+21h] [ebp-E7h]
  int v43; // [esp+28h] [ebp-E0h]
  LPARAM v44[27]; // [esp+30h] [ebp-D8h] BYREF
  char v45[108]; // [esp+9Ch] [ebp-6Ch] BYREF

  result = BaseDialogProc(hDlg, a2, a3, (unsigned int)hWnd); /*0x78d14c*/
  if ( result ) /*0x78d153*/
    return result; /*0x78d153*/
  if ( a2 > 0x497 ) /*0x78d15f*/
  {
    if ( a2 == 1242 ) /*0x78d92d*/
    {
      DlgItem = GetDlgItem(hDlg, 1474); /*0x78da0d*/
      PostMessageA(DlgItem, 0xF5u, 0, 0); /*0x78da14*/
      return 0; /*0x78da14*/
    }
    if ( a2 != 1243 ) /*0x78d934*/
      return 0; /*0x78d934*/
    NavigateDialogTab(hWnd, a3 != 0); /*0x78d941*/
    if ( hWnd != GetDlgItem(hDlg, 1473) ) /*0x78d956*/
      return 0; /*0x78d956*/
    if ( ppv ) /*0x78d963*/
    {
      SendMessageA(hWnd, 0x4B5u, 0xAu, (LPARAM)lParam); /*0x78d972*/
      v42 = 0; /*0x78d986*/
      memset(v45, 0, sizeof(v45)); /*0x78d98b*/
      strcpy(&v45[36], lParam); /*0x78d9b1*/
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v45); /*0x78d9c3*/
    }
    v35 = GetDlgItem(hDlg, 1480); /*0x78d9cc*/
    if ( v35 ) /*0x78d9d0*/
      SendMessageA(v35, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x78d9df*/
    dword_B77E8C = 1344; /*0x78d9e8*/
    return 0; /*0x78d9fb*/
  }
  switch ( a2 ) /*0x78d165*/
  {
    case 0x497u: /*0x78d165*/
      SendDlgItemMessageA(hDlg, 1473, 0xC5u, 9u, 0); /*0x78d864*/
      v29 = GetDlgItem(hDlg, 1473); /*0x78d876*/
      SendMessageA(v29, 0x4D1u, 1u, 0); /*0x78d888*/
      v30 = GetDlgItem(hDlg, 1473); /*0x78d890*/
      SendMessageA(v30, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x78d89f*/
      v31 = dword_B76480; /*0x78d8a6*/
      if ( dword_B76478 != -1 ) /*0x78d8af*/
      {
        v32 = Timer::GetTicks() - dword_B76478; /*0x78d8bb*/
        if ( v32 >= v31 ) /*0x78d8c3*/
          return 0; /*0x78d8c3*/
        v31 -= v32; /*0x78d8c9*/
      }
      if ( v31 > 0 ) /*0x78d8cd*/
      {
        v33 = GetDlgItem(hDlg, 1473); /*0x78d8d9*/
        SendMessageA(v33, 0x4B4u, 0, (LPARAM)byte_B77E30); /*0x78d8e8*/
        v34 = GetDlgItem(hDlg, 1344); /*0x78d8f0*/
        SetFocus(v34); /*0x78d8f3*/
        dword_B76478 = Timer::GetTicks(); /*0x78d902*/
        dword_B7647C = v43; /*0x78d90f*/
        dword_B76480 = 0; /*0x78d915*/
        return 0; /*0x78d924*/
      }
      return 0; /*0x78d8cd*/
    case 0xFu: /*0x78d165*/
      Dialog::DrawBackground(hDlg); /*0x78d831*/
      Dialog::StopBink(hDlg); /*0x78d838*/
      ValidateRect(hDlg, 0); /*0x78d840*/
      return 0; /*0x78d852*/
    case 0x2Bu: /*0x78d165*/
      Dialog::Resize((char *)hWnd); /*0x78d818*/
      return 1; /*0x78d82c*/
  }
  if ( a2 != 273 ) /*0x78d183*/
    return 0; /*0x78d183*/
  if ( (unsigned __int16)a3 > 0x5C2u ) /*0x78d195*/
  {
    if ( (unsigned __int16)a3 == 1475 ) /*0x78d62e*/
    {
      if ( !ppv ) /*0x78d773*/
        return 0; /*0x78d773*/
      memset(v44, 0, 0x40u); /*0x78d784*/
      SendDlgItemMessageA(hDlg, 1473, 0x4B5u, 0x3Cu, (LPARAM)v44); /*0x78d798*/
      BYTE1(v44[2]) = 0; /*0x78d7a7*/
      strcpy(&v45[36], (const char *)v44); /*0x78d7c2*/
      if ( strlen(&v45[36]) ) /*0x78d7d4*/
      {
        (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v45); /*0x78d7ee*/
        return 0; /*0x78d7fd*/
      }
      String = GetStringCSF((wchar_t *)g_Str_TXT_NAME_ERROR, 0, g_Str_File_wonline_cpp, 14080); /*0x78d811*/
    }
    else
    {
      if ( (unsigned __int16)a3 != 1543 || !ppv ) /*0x78d644*/
        return 0; /*0x78d644*/
      if ( dword_B77DE4 ) /*0x78d651*/
      {
        unknown_libname_74(&v39); /*0x78d687*/
        v25 = GetDlgItem(hDlg, 1344); /*0x78d698*/
        GetEditControlText(v25, &v39); /*0x78d6a0*/
        SendMessageA(v25, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x78d6b2*/
        SetFocus(v25); /*0x78d6b9*/
        strcpy(&v45[36], a0); /*0x78d6df*/
        if ( WideString::Length((const wchar_t **)&v39) ) /*0x78d6ec*/
        {
          v26 = *(_DWORD *)ppv; /*0x78d6fb*/
          v27 = WideString::GetOrEmpty((wchar_t **)&v39); /*0x78d701*/
          (*(void (__stdcall **)(LPVOID, char *, wchar_t *))(v26 + 248))(ppv, v45, v27); /*0x78d715*/
        }
        else
        {
          v28 = GetStringCSF(g_Str_TXT_ENTER_MESSAGE, 0, g_Str_File_wonline_cpp, 14195); /*0x78d744*/
          Dialog::ShowStatusText(-1, (size_t)v28); /*0x78d74c*/
        }
        DeleteAndZero::Alt(&v39); /*0x78d71f*/
        return 0; /*0x78d730*/
      }
      String = GetStringCSF(aTxtNosquad, 0, g_Str_File_wonline_cpp, 14176); /*0x78d664*/
    }
    Dialog::ShowStatusText(-1, (size_t)String); /*0x78d66c*/
    return 0; /*0x78d680*/
  }
  if ( (unsigned __int16)a3 == 1474 ) /*0x78d19b*/
  {
    if ( dword_B77E8C == 1473 ) /*0x78d3aa*/
    {
      if ( ppv ) /*0x78d3b7*/
      {
        v13 = GetDlgItem(hDlg, 1473); /*0x78d3bf*/
        if ( v13 ) /*0x78d3c3*/
        {
          SendMessageA(v13, 0x4B5u, 0xAu, (LPARAM)lParam); /*0x78d3d2*/
          v42 = 0; /*0x78d3e6*/
          memset(v45, 0, sizeof(v45)); /*0x78d3eb*/
          strcpy(&v45[36], lParam); /*0x78d411*/
          (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v45); /*0x78d423*/
        }
      }
      v14 = GetDlgItem(hDlg, 1480); /*0x78d42c*/
      if ( v14 ) /*0x78d430*/
        SendMessageA(v14, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x78d43f*/
    }
    dword_B77E8C = 1474; /*0x78d44b*/
    v15 = GetDlgItem(hDlg, 1344); /*0x78d457*/
    ReadChatMessage((wchar_t **)&v40, v15); /*0x78d45f*/
    SendMessageA(v15, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x78d471*/
    v16 = GetDlgItem(hDlg, 1474); /*0x78d47f*/
    EnableWindow(v16, 0); /*0x78d482*/
    SetFocus(v15); /*0x78d489*/
    if ( !ppv ) /*0x78d496*/
    {
      DeleteAndZero::Alt(&v40); /*0x78d49c*/
      return 0; /*0x78d4ad*/
    }
    unknown_libname_73(&v39); /*0x78d4b4*/
    v17 = GetDlgItem(hDlg, 1473); /*0x78d4c3*/
    GetDialogText(v17, &v39); /*0x78d4c9*/
    String::CopyTruncated(9u); /*0x78d4d4*/
    strcpy((char *)&v44[9], String::GetOrEmpty((char **)&v39)); /*0x78d4fc*/
    if ( WideString::Length((const wchar_t **)&v40) && strlen((const char *)&v44[9]) ) /*0x78d51a*/
    {
      if ( !dword_A8B538 || (v18 = 0, dword_A8DA84 <= 0) ) /*0x78d53c*/
      {
LABEL_44:
        v20 = *(_DWORD *)ppv; /*0x78d568*/
        v21 = WideString::GetOrEmpty((wchar_t **)&v40); /*0x78d573*/
        (*(void (__stdcall **)(LPVOID, LPARAM *, wchar_t *))(v20 + 248))(ppv, v44, v21); /*0x78d585*/
        v22 = WideString::GetOrEmpty((wchar_t **)&v40); /*0x78d58f*/
        Dialog::ShowStatusText((LPARAM)Math::InitDegToRad, (size_t)g_Str_Fmt_Hs_S_Bracket, dword_B73E40, v22); /*0x78d5a7*/
LABEL_50:
        DeleteAndZero(&v39); /*0x78d608*/
        DeleteAndZero::Alt(&v40); /*0x78d615*/
        return 0; /*0x78d626*/
      }
      while ( 1 ) /*0x78d54c*/
      {
        v19 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * v18)); /*0x78d54c*/
        if ( !_strcmpi(v19, &v44[9]) ) /*0x78d552*/
          break; /*0x78d552*/
        if ( ++v18 >= dword_A8DA84 ) /*0x78d566*/
          goto LABEL_44; /*0x78d566*/
      }
      v23 = GetStringCSF(g_Str_TXT_OBSERVER_CANT_PAGE, 0, g_Str_File_wonline_cpp, 14150); /*0x78d5c2*/
    }
    else if ( strlen((const char *)&v44[9]) ) /*0x78d5c8*/
    {
      v23 = GetStringCSF(g_Str_TXT_ENTER_MESSAGE, 0, g_Str_File_wonline_cpp, 14164); /*0x78d5f8*/
    }
    else
    {
      v23 = GetStringCSF((wchar_t *)g_Str_TXT_NAME_ERROR, 0, g_Str_File_wonline_cpp, 14162); /*0x78d5e5*/
    }
    Dialog::ShowStatusText(-1, (size_t)v23); /*0x78d600*/
    goto LABEL_50; /*0x78d600*/
  }
  if ( (unsigned __int16)a3 == 2 ) /*0x78d1a4*/
  {
    CloseDialog(hDlg, 2); /*0x78d386*/
    return 0; /*0x78d397*/
  }
  if ( (unsigned __int16)a3 != 1344 ) /*0x78d1af*/
  {
    if ( (unsigned __int16)a3 == 1473 ) /*0x78d1ba*/
    {
      unknown_libname_73(&v40); /*0x78d1c4*/
      GetDialogText(hWnd, &v40); /*0x78d1cf*/
      unknown_libname_74(&v39); /*0x78d1d8*/
      v5 = GetDlgItem(hDlg, 1344); /*0x78d1ed*/
      GetEditControlText(v5, &v39); /*0x78d1f3*/
      v6 = String::Length((const char **)&v40) && WideString::Length((const wchar_t **)&v39); /*0x78d212*/
      v37 = v6; /*0x78d21b*/
      v7 = GetDlgItem(hDlg, 1474); /*0x78d222*/
      EnableWindow(v7, v37); /*0x78d225*/
      dword_B77E8C = 1473; /*0x78d231*/
      v8 = GetDlgItem(hDlg, 1480); /*0x78d23b*/
      if ( v8 ) /*0x78d23f*/
        SendMessageA(v8, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x78d24e*/
      DeleteAndZero::Alt(&v39); /*0x78d258*/
      DeleteAndZero(&v40); /*0x78d261*/
      return 0; /*0x78d272*/
    }
    return 0; /*0x78da1a*/
  }
  ReadChatMessage((wchar_t **)&v39, hWnd); /*0x78d27b*/
  unknown_libname_73(&v40); /*0x78d284*/
  v9 = GetDlgItem(hDlg, 1473); /*0x78d299*/
  GetDialogText(v9, &v40); /*0x78d29f*/
  v10 = WideString::Length((const wchar_t **)&v39) && String::Length((const char **)&v40); /*0x78d2be*/
  v38 = v10; /*0x78d2c7*/
  v11 = GetDlgItem(hDlg, 1474); /*0x78d2ce*/
  EnableWindow(v11, v38); /*0x78d2d1*/
  if ( dword_B77E8C == 1473 ) /*0x78d2e1*/
  {
    if ( ppv ) /*0x78d2ea*/
    {
      memset(v44, 0, sizeof(v44)); /*0x78d2f7*/
      strcpy((char *)&v44[9], String::GetOrEmpty((char **)&v40)); /*0x78d320*/
      (*(void (__stdcall **)(LPVOID, LPARAM *))(*(_DWORD *)ppv + 96))(ppv, v44); /*0x78d332*/
    }
    v12 = GetDlgItem(hDlg, 1480); /*0x78d33b*/
    if ( v12 ) /*0x78d33f*/
      SendMessageA(v12, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x78d34e*/
  }
  dword_B77E8C = 1344; /*0x78d358*/
  DeleteAndZero(&v40); /*0x78d362*/
  DeleteAndZero::Alt(&v39); /*0x78d36b*/
  return 0; /*0x78d266*/
}



// ==== 0x0078DA30  sub_78DA30  this=-  sig=csp ====
int __stdcall sub_78DA30(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  wchar_t *v5; // eax

  if ( a2 == 272 ) /*0x78da46*/
  {
    if ( a4 ) /*0x78da4a*/
      SetWindowLongA(hWnd, 8, *(_DWORD *)(a4 + 4)); /*0x78da53*/
  }
  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x78da63*/
  if ( !result ) /*0x78da6a*/
  {
    if ( a2 > 0x110 ) /*0x78da76*/
    {
      switch ( a2 ) /*0x78daca*/
      {
        case 0x111u: /*0x78daca*/
          if ( (unsigned __int16)a3 != 2 ) /*0x78db34*/
            return 0; /*0x78db3c*/
          (*(void (__stdcall **)(LPVOID))(*(_DWORD *)dword_AC1174 + 16))(dword_AC1174); /*0x78db47*/
          break;
        case 0x5F4u: /*0x78daca*/
          CloseDialog(hWnd, 1); /*0x78db1a*/
          return 1; /*0x78db28*/
        case 0x5F5u: /*0x78daca*/
          v5 = (wchar_t *)GetStringCSF(aTxtDownloadFai, (int)g_Str_File_wonline_cpp, 14681); /*0x78daf8*/
          ShowDialogConfirm(v5, 0, (int)GameLoop::Thunk, 0); /*0x78db01*/
          (*(void (__stdcall **)(LPVOID))(*(_DWORD *)dword_AC1174 + 16))(dword_AC1174); /*0x78db0e*/
          break;
        default:
          return 0; /*0x78dadd*/
      }
      CloseDialog(hWnd, 2); /*0x78db51*/
    }
    else if ( a2 != 272 ) /*0x78da78*/
    {
      if ( a2 == 15 ) /*0x78da81*/
      {
        Dialog::DrawBackground(hWnd); /*0x78daa6*/
        Dialog::StopBink(hWnd); /*0x78daad*/
        ValidateRect(hWnd, 0); /*0x78dab5*/
        return 0; /*0x78dac1*/
      }
      if ( a2 != 20 ) /*0x78da86*/
      {
        if ( a2 == 43 ) /*0x78da8f*/
        {
          Dialog::Resize(a4); /*0x78da93*/
          return 1; /*0x78daa1*/
        }
        return 0; /*0x78da8f*/
      }
    }
    return 1; /*0x78db56*/
  }
  return result; /*0x78da98*/
}



// ==== 0x0078DB70  WOLLogin::DlgProc  this=WOLLogin  sig=csp ====
int __stdcall WOLLogin_DlgProc(HWND hWnd, HWND a2, int a3, HWND a4)
{
  HWND v4; // ebp
  int result; // eax
  LONG WindowLongA; // edi
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND DlgItem; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  WPARAM v14; // eax
  HWND v15; // eax
  BOOL v16; // [esp-4h] [ebp-14h]
  HWND v17; // [esp+18h] [ebp+8h]

  v4 = a4; /*0x78db76*/
  if ( a2 == (HWND)272 && a4 ) /*0x78db8a*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x78db93*/
  result = BaseDialogProc(hWnd, (unsigned int)a2, a3, (unsigned int)v4); /*0x78dba3*/
  if ( !result ) /*0x78dbaa*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x78dbbf*/
    if ( (unsigned int)a2 > 0x111 ) /*0x78dbc1*/
    {
      if ( a2 == (HWND)1175 ) /*0x78de6d*/
      {
        DlgItem = GetDlgItem(hWnd, 1836); /*0x78dea6*/
        SendMessageA(DlgItem, 0x4D1u, 1u, 0); /*0x78deb8*/
        v11 = GetDlgItem(hWnd, 1836); /*0x78dec0*/
        SendMessageA(v11, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x78decf*/
        SendDlgItemMessageA(hWnd, 1836, 0xC5u, 8u, 0); /*0x78dee0*/
        v12 = GetDlgItem(hWnd, 1836); /*0x78deec*/
        SetFocus(v12); /*0x78deef*/
        CheckDlgButton(hWnd, 1577, *(_BYTE *)(WindowLongA + 16) != 0); /*0x78df06*/
        CheckDlgButton(hWnd, 1644, *(_BYTE *)(WindowLongA + 17) != 0); /*0x78df1d*/
        if ( (dword_A8B238 != 4 || dword_A8B244 != 3) && dword_B77DE4 < 1 ) /*0x78df3c*/
        {
          v13 = GetDlgItem(hWnd, 1644); /*0x78df46*/
          EnableWindow(v13, 0); /*0x78df49*/
        }
        v17 = GetDlgItem(hWnd, 1822); /*0x78df63*/
        LOBYTE(a3) = dword_A8EB84 >= 1024; /*0x78df6c*/
        EnableWindow(v17, dword_A8EB84 < 1024); /*0x78df77*/
        v14 = *(_BYTE *)(WindowLongA + 18) && !(_BYTE)a3; /*0x78df93*/
        SendMessageA(v17, 0xF1u, v14, 0); /*0x78dfa2*/
        v15 = GetDlgItem(hWnd, 1823); /*0x78dfaa*/
        SendMessageA(v15, 0xF1u, *(_BYTE *)(WindowLongA + 19) != 0, 0); /*0x78dfbf*/
      }
      else if ( a2 == (HWND)1242 ) /*0x78de72*/
      {
        v9 = GetDlgItem(hWnd, 1); /*0x78de84*/
        PostMessageA(v9, 0xF5u, 0, 0); /*0x78de8b*/
        return 0; /*0x78de97*/
      }
      return 0; /*0x78de72*/
    }
    if ( a2 != (HWND)273 ) /*0x78dbc7*/
    {
      if ( a2 == (HWND)15 ) /*0x78dbcc*/
      {
        Dialog::DrawBackground(hWnd); /*0x78dbf1*/
        Dialog::StopBink(hWnd); /*0x78dbf8*/
        ValidateRect(hWnd, 0); /*0x78dc00*/
        return 0; /*0x78dc0c*/
      }
      if ( a2 == (HWND)20 ) /*0x78dbd1*/
        return 1; /*0x78dbec*/
      if ( a2 == (HWND)43 ) /*0x78dbd6*/
      {
        Dialog::Resize((char *)v4); /*0x78dbde*/
        return 1; /*0x78dbde*/
      }
      return 0; /*0x78dbd6*/
    }
    if ( (unsigned __int16)a3 > 0x6DFu ) /*0x78dc1d*/
    {
      switch ( (__int16)a3 ) /*0x78dd8c*/
      {
        case 1760: /*0x78dd8c*/
          if ( IsDlgButtonChecked(hWnd, 1759) ) /*0x78ddeb*/
            CheckDlgButton(hWnd, 1759, 0); /*0x78ddfd*/
          else
            CheckDlgButton(hWnd, 1760, 1u); /*0x78de14*/
          result = 0; /*0x78de06*/
          break; /*0x78de09*/
        case 1822: /*0x78dd8c*/
          *(_BYTE *)(WindowLongA + 18) = SendMessageA(v4, 0xF0u, 0, 0) == 1; /*0x78de39*/
          result = 0; /*0x78de3f*/
          break; /*0x78de42*/
        case 1823: /*0x78dd8c*/
          *(_BYTE *)(WindowLongA + 19) = SendMessageA(v4, 0xF0u, 0, 0) == 1; /*0x78de5b*/
          result = 0; /*0x78de61*/
          break; /*0x78de64*/
        case 1836: /*0x78dd8c*/
          if ( !v4 ) /*0x78dd95*/
            return 0; /*0x78dd95*/
          unknown_libname_73(&a3); /*0x78dd9f*/
          GetDialogText(v4, (void **)&a3); /*0x78ddaa*/
          v16 = (unsigned __int8)ValidateStringContains(asc_84BA18) == 0; /*0x78ddc2*/
          v8 = GetDlgItem(hWnd, 1); /*0x78ddc6*/
          EnableWindow(v8, v16); /*0x78ddcd*/
          DeleteAndZero((void **)&a3); /*0x78ddd7*/
          result = 0; /*0x78dddf*/
          break; /*0x78dde2*/
        default:
          return 0;
      }
    }
    else
    {
      if ( (unsigned __int16)a3 != 1759 ) /*0x78dc23*/
      {
        if ( (unsigned __int16)a3 > 0x629u ) /*0x78dc2e*/
        {
          if ( (unsigned __int16)a3 != 1644 ) /*0x78dceb*/
            return 0; /*0x78dfc1*/
          if ( SendDlgItemMessageA(hWnd, 1644, 0xF0u, 0, 0) != 1 ) /*0x78dd07*/
          {
            *(_BYTE *)(WindowLongA + 17) = 0; /*0x78dd2b*/
            return 0; /*0x78dd35*/
          }
          SendDlgItemMessageA(hWnd, 1577, 0xF1u, 0, 0); /*0x78dd18*/
          *(_BYTE *)(WindowLongA + 17) = 1; /*0x78dd1a*/
        }
        else
        {
          if ( (unsigned __int16)a3 != 1577 ) /*0x78dc34*/
          {
            if ( (unsigned __int16)a3 == 1 ) /*0x78dc37*/
            {
              dword_B77DC4 = 7; /*0x78dc57*/
              unknown_libname_73(&a3); /*0x78dc61*/
              v7 = GetDlgItem(hWnd, 1836); /*0x78dc70*/
              GetDialogText(v7, (void **)&a3); /*0x78dc7a*/
              String::Reassign((char **)(WindowLongA + 12), (const char **)&a3); /*0x78dc87*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1); /*0x78dc93*/
              DeleteAndZero((void **)&a3); /*0x78dc9a*/
              return 0; /*0x78dca5*/
            }
            if ( (unsigned __int16)a3 == 2 ) /*0x78dc3a*/
            {
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 2); /*0x78dc47*/
              return 0; /*0x78dc50*/
            }
            return 0; /*0x78dc3a*/
          }
          if ( SendDlgItemMessageA(hWnd, 1577, 0xF0u, 0, 0) == 1 ) /*0x78dcc2*/
          {
            SendDlgItemMessageA(hWnd, 1644, 0xF1u, 0, 0); /*0x78dcd3*/
            *(_BYTE *)(WindowLongA + 17) = 0; /*0x78dcd5*/
            *(_BYTE *)(WindowLongA + 16) = 1; /*0x78dcd9*/
            return 0; /*0x78dce3*/
          }
        }
        *(_BYTE *)(WindowLongA + 16) = 0; /*0x78dd1e*/
        return 0; /*0x78dd28*/
      }
      if ( IsDlgButtonChecked(hWnd, 1760) ) /*0x78dd3e*/
        CheckDlgButton(hWnd, 1760, 0); /*0x78dd50*/
      else
        CheckDlgButton(hWnd, 1759, 1u); /*0x78dd67*/
      return 0; /*0x78dd59*/
    }
  }
  return result; /*0x78dbe3*/
}



// ==== 0x0078E030  WOLGameClass::ParseChatMessage  this=WOLGameClass  sig=csp ====
int __stdcall sub_78E030(HWND hWnd, unsigned int a2, int a3, HWND a4)
{
  HWND v4; // ebp
  int result; // eax
  char **WindowLongA; // ebx
  const char *v7; // edx
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND DlgItem; // eax
  HWND v12; // eax
  HWND v13; // eax
  BOOL v14; // [esp-4h] [ebp-14h]

  v4 = a4; /*0x78e032*/
  if ( a2 == 272 && a4 ) /*0x78e04a*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x78e053*/
  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)v4); /*0x78e063*/
  if ( !result ) /*0x78e06a*/
  {
    WindowLongA = (char **)GetWindowLongA(hWnd, 8); /*0x78e07f*/
    if ( a2 > 0x111 ) /*0x78e081*/
    {
      if ( a2 == 1175 ) /*0x78e19a*/
      {
        DlgItem = GetDlgItem(hWnd, 1836); /*0x78e1cf*/
        SendMessageA(DlgItem, 0x4D1u, 1u, 0); /*0x78e1e1*/
        v12 = GetDlgItem(hWnd, 1836); /*0x78e1e9*/
        SendMessageA(v12, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x78e1f8*/
        SendDlgItemMessageA(hWnd, 1836, 0xC5u, 8u, 0); /*0x78e209*/
        v13 = GetDlgItem(hWnd, 1836); /*0x78e215*/
        SetFocus(v13); /*0x78e218*/
      }
      else if ( a2 == 1242 ) /*0x78e19f*/
      {
        v10 = GetDlgItem(hWnd, 1); /*0x78e1ad*/
        PostMessageA(v10, 0xF5u, 0, 0); /*0x78e1b4*/
        return 0; /*0x78e1c0*/
      }
    }
    else
    {
      switch ( a2 ) /*0x78e087*/
      {
        case 0x111u: /*0x78e087*/
          if ( (unsigned __int16)a3 == 1 ) /*0x78e0d4*/
          {
            unknown_libname_73(&a3); /*0x78e14d*/
            v9 = GetDlgItem(hWnd, 1836); /*0x78e15c*/
            GetDialogText(v9, (void **)&a3); /*0x78e166*/
            String::Reassign(WindowLongA + 3, (const char **)&a3); /*0x78e173*/
            (*((void (__thiscall **)(char **, HWND, int))*WindowLongA + 1))(WindowLongA, hWnd, 1); /*0x78e17f*/
            DeleteAndZero((void **)&a3); /*0x78e186*/
            return 0; /*0x78e191*/
          }
          if ( (unsigned __int16)a3 == 2 ) /*0x78e0d7*/
          {
            (*((void (__thiscall **)(char **, HWND, int))*WindowLongA + 1))(WindowLongA, hWnd, 2); /*0x78e13d*/
            return 0; /*0x78e146*/
          }
          if ( (unsigned __int16)a3 == 1836 && v4 ) /*0x78e0e6*/
          {
            unknown_libname_73(&a3); /*0x78e0f0*/
            GetDialogText(v4, (void **)&a3); /*0x78e0fb*/
            v14 = !ValidateStringContains((const char **)&a3, v7, asc_84BA18); /*0x78e113*/
            v8 = GetDlgItem(hWnd, 1); /*0x78e117*/
            EnableWindow(v8, v14); /*0x78e11e*/
            DeleteAndZero((void **)&a3); /*0x78e128*/
            return 0; /*0x78e133*/
          }
          break;
        case 0xFu: /*0x78e087*/
          Dialog::DrawBackground(hWnd); /*0x78e0ac*/
          Dialog::StopBink(hWnd); /*0x78e0b3*/
          ValidateRect(hWnd, 0); /*0x78e0bb*/
          return 0; /*0x78e0c7*/
        case 0x2Bu: /*0x78e087*/
          Dialog::Resize((char *)v4); /*0x78e099*/
          return 1; /*0x78e0a7*/
      }
    }
    return 0; /*0x78e21e*/
  }
  return result; /*0x78e09e*/
}



// ==== 0x0078E230  CreateAccountDlgProcWOL  this=-  sig=csp ====
int __stdcall sub_78E230(HWND hWnd, UINT a2, WPARAM a3, HWND hCtl)
{
  HWND v5; // eax
  HWND v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  char *v11; // eax
  char *v12; // eax
  char *v13; // eax
  char *v14; // eax
  char *v15; // eax
  char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  char *v19; // eax
  char *v20; // eax
  char *v21; // eax
  char *v22; // eax
  char *v23; // eax
  char *v24; // eax
  char *v25; // eax
  char *v26; // eax
  char *v27; // eax
  char *v28; // eax
  char *v29; // eax
  char *v30; // eax
  HWND v31; // eax
  char *v32; // eax
  HWND v33; // eax
  char *v34; // eax
  HWND v35; // eax
  HWND DlgItem; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // edi
  wchar_t *String; // eax
  wchar_t *v42; // eax
  wchar_t *v43; // eax
  wchar_t *v44; // eax
  wchar_t *v45; // eax
  wchar_t *v46; // eax
  wchar_t *v47; // eax
  wchar_t *v48; // eax
  wchar_t *v49; // eax
  wchar_t *v50; // eax
  wchar_t *v51; // eax
  wchar_t *v52; // eax
  char *v53; // [esp-4h] [ebp-Ch]
  char *v54; // [esp-4h] [ebp-Ch]
  char *v55; // [esp-4h] [ebp-Ch]
  char *v56; // [esp-4h] [ebp-Ch]
  char *v57; // [esp-4h] [ebp-Ch]
  char *v58; // [esp-4h] [ebp-Ch]
  char *v59; // [esp-4h] [ebp-Ch]
  char *v60; // [esp-4h] [ebp-Ch]
  char *v61; // [esp-4h] [ebp-Ch]
  char *v62; // [esp-4h] [ebp-Ch]
  char *v63; // [esp-4h] [ebp-Ch]
  char *v64; // [esp-4h] [ebp-Ch]

  if ( a2 > 0x111 ) /*0x78e23b*/
  {
    if ( a2 == 1175 ) /*0x78e6fd*/
    {
      DlgItem = GetDlgItem(hWnd, 1574); /*0x78e735*/
      SendMessageA(DlgItem, 0x4D1u, 1u, 0); /*0x78e747*/
      v37 = GetDlgItem(hWnd, 1583); /*0x78e758*/
      SendMessageA(v37, 0xC5u, 2u, 0); /*0x78e75b*/
      v38 = GetDlgItem(hWnd, 1584); /*0x78e76c*/
      SendMessageA(v38, 0xC5u, 4u, 0); /*0x78e76f*/
      v39 = GetDlgItem(hWnd, 1583); /*0x78e777*/
      SetFocus(v39); /*0x78e77a*/
      v40 = GetDlgItem(hWnd, 1582); /*0x78e788*/
      ListBox::Clear(v40); /*0x78e78c*/
      String = GetStringCSF(g_Str_TXT_JANUARY, 0, g_Str_File_wonline_cpp, 15162); /*0x78e7a2*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)String); /*0x78e7b0*/
      v42 = GetStringCSF(g_Str_TXT_FEBRUARY, 0, g_Str_File_wonline_cpp, 15163); /*0x78e7c3*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v42); /*0x78e7d1*/
      v43 = GetStringCSF(g_Str_TXT_MARCH, 0, g_Str_File_wonline_cpp, 15164); /*0x78e7e4*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v43); /*0x78e7f2*/
      v44 = GetStringCSF(g_Str_TXT_APRIL, 0, g_Str_File_wonline_cpp, 15165); /*0x78e805*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v44); /*0x78e813*/
      v45 = GetStringCSF(g_Str_TXT_MAY, 0, g_Str_File_wonline_cpp, 15166); /*0x78e826*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v45); /*0x78e834*/
      v46 = GetStringCSF(g_Str_TXT_JUNE, 0, g_Str_File_wonline_cpp, 15167); /*0x78e847*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v46); /*0x78e855*/
      v47 = GetStringCSF(g_Str_TXT_JULY, 0, g_Str_File_wonline_cpp, 15168); /*0x78e868*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v47); /*0x78e876*/
      v48 = GetStringCSF(g_Str_TXT_AUGUST, 0, g_Str_File_wonline_cpp, 15169); /*0x78e889*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v48); /*0x78e897*/
      v49 = GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_wonline_cpp, 15170); /*0x78e8aa*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v49); /*0x78e8b8*/
      v50 = GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_wonline_cpp, 15171); /*0x78e8cb*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v50); /*0x78e8d9*/
      v51 = GetStringCSF(g_Str_TXT_NOVEMBER, 0, g_Str_File_wonline_cpp, 15172); /*0x78e8ec*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v51); /*0x78e8fa*/
      v52 = GetStringCSF(g_Str_TXT_DECEMBER, 0, g_Str_File_wonline_cpp, 15173); /*0x78e90d*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v52); /*0x78e91b*/
      SendDlgItemMessageA(hWnd, 1582, 0x14Eu, 0, 0); /*0x78e92c*/
      SendMessageA(hWnd, 0x4A9u, 0, 1); /*0x78e93c*/
      return 0; /*0x78e940*/
    }
    else
    {
      if ( a2 != 1243 ) /*0x78e702*/
        return 0; /*0x78e708*/
      NavigateDialogTab(hCtl, a3 != 0); /*0x78e718*/
      return 0; /*0x78e71e*/
    }
  }
  else
  {
    if ( a2 != 273 ) /*0x78e241*/
    {
      if ( a2 == 15 ) /*0x78e246*/
      {
        Dialog::DrawBackground(hWnd); /*0x78e26a*/
        Dialog::StopBink(hWnd); /*0x78e271*/
        ValidateRect(hWnd, 0); /*0x78e279*/
        return 0; /*0x78e283*/
      }
      if ( a2 == 43 ) /*0x78e24b*/
      {
        Dialog::Resize((char *)hCtl); /*0x78e255*/
        return 1; /*0x78e261*/
      }
      return 0; /*0x78e24b*/
    }
    if ( (unsigned __int16)a3 == 1 ) /*0x78e290*/
    {
      DeleteAndZero::Alt2((void **)&unk_B76E34); /*0x78e2d0*/
      v5 = GetDlgItem(hWnd, 1574); /*0x78e2e5*/
      if ( v5 ) /*0x78e2e9*/
        GetDialogText(v5, (void **)&unk_B76E34); /*0x78e2f2*/
      DeleteAndZero::Alt2((void **)&unk_B73B30); /*0x78e2fc*/
      v6 = GetDlgItem(hWnd, 1582); /*0x78e307*/
      if ( v6 /*0x78e346*/
        && (GetDialogText(v6, (void **)&unk_B73B30),
            v7 = (char *)GetStringCSF(g_Str_TXT_JANUARY, 0, g_Str_File_wonline_cpp, 15071),
            v53 = ToWideStringChar(v7),
            v8 = String::GetOrEmpty(&unk_B73B30),
            _strcmpi(v8, v53)) )
      {
        v9 = (char *)GetStringCSF(g_Str_TXT_FEBRUARY, 0, g_Str_File_wonline_cpp, 15073); /*0x78e367*/
        v54 = ToWideStringChar(v9); /*0x78e373*/
        v10 = String::GetOrEmpty(&unk_B73B30); /*0x78e379*/
        if ( _strcmpi(v10, v54) ) /*0x78e37f*/
        {
          v11 = (char *)GetStringCSF(g_Str_TXT_MARCH, 0, g_Str_File_wonline_cpp, 15075); /*0x78e3ab*/
          v55 = ToWideStringChar(v11); /*0x78e3b7*/
          v12 = String::GetOrEmpty(&unk_B73B30); /*0x78e3bd*/
          if ( _strcmpi(v12, v55) ) /*0x78e3c3*/
          {
            v13 = (char *)GetStringCSF(g_Str_TXT_APRIL, 0, g_Str_File_wonline_cpp, 15077); /*0x78e3ef*/
            v56 = ToWideStringChar(v13); /*0x78e3fb*/
            v14 = String::GetOrEmpty(&unk_B73B30); /*0x78e401*/
            if ( _strcmpi(v14, v56) ) /*0x78e407*/
            {
              v15 = (char *)GetStringCSF(g_Str_TXT_MAY, 0, g_Str_File_wonline_cpp, 15079); /*0x78e433*/
              v57 = ToWideStringChar(v15); /*0x78e43f*/
              v16 = String::GetOrEmpty(&unk_B73B30); /*0x78e445*/
              if ( _strcmpi(v16, v57) ) /*0x78e44b*/
              {
                v17 = (char *)GetStringCSF(g_Str_TXT_JUNE, 0, g_Str_File_wonline_cpp, 15081); /*0x78e477*/
                v58 = ToWideStringChar(v17); /*0x78e483*/
                v18 = String::GetOrEmpty(&unk_B73B30); /*0x78e489*/
                if ( _strcmpi(v18, v58) ) /*0x78e48f*/
                {
                  v19 = (char *)GetStringCSF(g_Str_TXT_JULY, 0, g_Str_File_wonline_cpp, 15083); /*0x78e4bb*/
                  v59 = ToWideStringChar(v19); /*0x78e4c7*/
                  v20 = String::GetOrEmpty(&unk_B73B30); /*0x78e4cd*/
                  if ( _strcmpi(v20, v59) ) /*0x78e4d3*/
                  {
                    v21 = (char *)GetStringCSF(g_Str_TXT_AUGUST, 0, g_Str_File_wonline_cpp, 15085); /*0x78e4ff*/
                    v60 = ToWideStringChar(v21); /*0x78e50b*/
                    v22 = String::GetOrEmpty(&unk_B73B30); /*0x78e511*/
                    if ( _strcmpi(v22, v60) ) /*0x78e517*/
                    {
                      v23 = (char *)GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_wonline_cpp, 15087); /*0x78e543*/
                      v61 = ToWideStringChar(v23); /*0x78e54f*/
                      v24 = String::GetOrEmpty(&unk_B73B30); /*0x78e555*/
                      if ( _strcmpi(v24, v61) ) /*0x78e55b*/
                      {
                        v25 = (char *)GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_wonline_cpp, 15089); /*0x78e587*/
                        v62 = ToWideStringChar(v25); /*0x78e593*/
                        v26 = String::GetOrEmpty(&unk_B73B30); /*0x78e599*/
                        if ( _strcmpi(v26, v62) ) /*0x78e59f*/
                        {
                          v27 = (char *)GetStringCSF(g_Str_TXT_NOVEMBER, 0, g_Str_File_wonline_cpp, 15091); /*0x78e5cb*/
                          v63 = ToWideStringChar(v27); /*0x78e5d7*/
                          v28 = String::GetOrEmpty(&unk_B73B30); /*0x78e5dd*/
                          if ( _strcmpi(v28, v63) ) /*0x78e5e3*/
                          {
                            v29 = (char *)GetStringCSF(g_Str_TXT_DECEMBER, 0, g_Str_File_wonline_cpp, 15093); /*0x78e60c*/
                            v64 = ToWideStringChar(v29); /*0x78e618*/
                            v30 = String::GetOrEmpty(&unk_B73B30); /*0x78e61e*/
                            if ( !_strcmpi(v30, v64) ) /*0x78e624*/
                              dword_B73A1C = 11; /*0x78e630*/
                          }
                          else
                          {
                            dword_B73A1C = 10; /*0x78e5ef*/
                          }
                        }
                        else
                        {
                          dword_B73A1C = 9; /*0x78e5ab*/
                        }
                      }
                      else
                      {
                        dword_B73A1C = 8; /*0x78e567*/
                      }
                    }
                    else
                    {
                      dword_B73A1C = 7; /*0x78e523*/
                    }
                  }
                  else
                  {
                    dword_B73A1C = 6; /*0x78e4df*/
                  }
                }
                else
                {
                  dword_B73A1C = 5; /*0x78e49b*/
                }
              }
              else
              {
                dword_B73A1C = 4; /*0x78e457*/
              }
            }
            else
            {
              dword_B73A1C = 3; /*0x78e413*/
            }
          }
          else
          {
            dword_B73A1C = 2; /*0x78e3cf*/
          }
        }
        else
        {
          dword_B73A1C = 1; /*0x78e38b*/
        }
      }
      else
      {
        dword_B73A1C = 0; /*0x78e63c*/
      }
      DeleteAndZero::Alt2((void **)&stru_B7622C); /*0x78e64b*/
      v31 = GetDlgItem(hWnd, 1583); /*0x78e656*/
      if ( v31 ) /*0x78e65a*/
      {
        GetDialogText(v31, (void **)&stru_B7622C); /*0x78e663*/
        v32 = String::GetOrEmpty(&stru_B7622C); /*0x78e66d*/
        dword_B73AB8 = atol(v32); /*0x78e67b*/
      }
      DeleteAndZero::Alt2((void **)&unk_B76908); /*0x78e685*/
      v33 = GetDlgItem(hWnd, 1584); /*0x78e690*/
      if ( v33 ) /*0x78e694*/
      {
        GetDialogText(v33, (void **)&unk_B76908); /*0x78e69d*/
        v34 = String::GetOrEmpty(&unk_B76908); /*0x78e6a7*/
        dword_B7782C = atol(v34); /*0x78e6b5*/
      }
      dword_B76228 = 0; /*0x78e6c0*/
      v35 = GetDlgItem(hWnd, 1585); /*0x78e6ca*/
      if ( v35 ) /*0x78e6ce*/
        dword_B76228 = SendMessageA(v35, 0xF0u, 0, 0); /*0x78e6e0*/
      CloseDialog(hWnd, 1); /*0x78e6ec*/
      return 0; /*0x78e6f2*/
    }
    else if ( (unsigned __int16)a3 == 2 ) /*0x78e293*/
    {
      CloseDialog(hWnd, 2); /*0x78e2bf*/
      return 0; /*0x78e2c5*/
    }
    else
    {
      if ( (unsigned __int16)a3 == 1398 ) /*0x78e29a*/
        OpenURLWOL(aHttpPrivacypol, 0); /*0x78e2aa*/
      return 0; /*0x78e29d*/
    }
  }
}



// ==== 0x0078E950  WOLobbySmallDlgProc  this=-  sig=csp ====
int __stdcall WOLobbySmallDlgProc(HWND hWnd, UINT a2, WPARAM a3, HWND hCtl)
{
  int v5; // ebx
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND DlgItem; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // eax
  HWND v18; // eax

  if ( a2 > 0x111 ) /*0x78e95c*/
  {
    if ( a2 == 1175 ) /*0x78ead5*/
    {
      DlgItem = GetDlgItem(hWnd, 1576); /*0x78eb17*/
      SendMessageA(DlgItem, 0x4D1u, 1u, 0); /*0x78eb29*/
      v12 = GetDlgItem(hWnd, 1836); /*0x78eb31*/
      SendMessageA(v12, 0x4D1u, 1u, 0); /*0x78eb3d*/
      v13 = GetDlgItem(hWnd, 1575); /*0x78eb45*/
      SendMessageA(v13, 0x4D1u, 1u, 0); /*0x78eb51*/
      v14 = GetDlgItem(hWnd, 1509); /*0x78eb59*/
      SendMessageA(v14, 0x4D1u, 1u, 0); /*0x78eb65*/
      v15 = GetDlgItem(hWnd, 1576); /*0x78eb76*/
      SendMessageA(v15, 0xC5u, 9u, 0); /*0x78eb79*/
      v16 = GetDlgItem(hWnd, 1836); /*0x78eb8a*/
      SendMessageA(v16, 0xC5u, 8u, 0); /*0x78eb8d*/
      v17 = GetDlgItem(hWnd, 1575); /*0x78eb9e*/
      SendMessageA(v17, 0xC5u, 8u, 0); /*0x78eba1*/
      v18 = GetDlgItem(hWnd, 1576); /*0x78eba9*/
      SetFocus(v18); /*0x78ebac*/
    }
    else if ( a2 == 1243 ) /*0x78eada*/
    {
      ++dword_B77E90; /*0x78eaed*/
      NavigateDialogTab(hCtl, a3 != 0); /*0x78eafa*/
      return 0; /*0x78eb04*/
    }
    return 0; /*0x78eada*/
  }
  if ( a2 != 273 ) /*0x78e962*/
  {
    if ( a2 == 15 ) /*0x78e967*/
    {
      Dialog::DrawBackground(hWnd); /*0x78e98c*/
      Dialog::StopBink(hWnd); /*0x78e993*/
      ValidateRect(hWnd, 0); /*0x78e99b*/
      return 0; /*0x78e9a6*/
    }
    if ( a2 == 43 ) /*0x78e96c*/
    {
      Dialog::Resize((char *)hCtl); /*0x78e976*/
      return 1; /*0x78e983*/
    }
    return 0; /*0x78ebb4*/
  }
  if ( (unsigned __int16)a3 != 1 ) /*0x78e9b3*/
  {
    if ( (unsigned __int16)a3 == 2 ) /*0x78e9b6*/
    {
      CloseDialog(hWnd, 2); /*0x78e9c5*/
      return 0; /*0x78e9cf*/
    }
    return 0; /*0x78e9b6*/
  }
  v5 = GameSetup::LookupDialogHash(hWnd); /*0x78e9e2*/
  DeleteAndZero::Alt2((void **)&unk_B77794); /*0x78e9e4*/
  v6 = GetDlgItem(hWnd, 1576); /*0x78e9f5*/
  if ( v6 ) /*0x78e9f9*/
    GetDialogText(v6, (void **)&unk_B77794); /*0x78ea02*/
  DeleteAndZero::Alt2((void **)&unk_B778F4); /*0x78ea0c*/
  v7 = GetDlgItem(hWnd, 1836); /*0x78ea17*/
  if ( v7 ) /*0x78ea1b*/
    GetDialogText(v7, (void **)&unk_B778F4); /*0x78ea24*/
  DeleteAndZero::Alt2((void **)&unk_B778FC); /*0x78ea2e*/
  v8 = GetDlgItem(hWnd, 1575); /*0x78ea39*/
  if ( v8 ) /*0x78ea3d*/
    GetDialogText(v8, (void **)&unk_B778FC); /*0x78ea46*/
  if ( v5 == 243 ) /*0x78ea51*/
  {
    DeleteAndZero::Alt2((void **)&stru_B765EC); /*0x78ea58*/
    v9 = GetDlgItem(hWnd, 1509); /*0x78ea63*/
    if ( v9 ) /*0x78ea67*/
    {
      GetDialogText(v9, (void **)&stru_B765EC); /*0x78ea70*/
      CloseDialog(hWnd, 1); /*0x78ea7c*/
      return 0; /*0x78ea86*/
    }
  }
  else if ( v5 == 244 ) /*0x78ea8f*/
  {
    unk_B76C20 = 0; /*0x78ea97*/
    v10 = GetDlgItem(hWnd, 1643); /*0x78eaa1*/
    if ( v10 ) /*0x78eaa5*/
      unk_B76C20 = SendMessageA(v10, 0xF0u, 0, 0); /*0x78eab7*/
  }
  CloseDialog(hWnd, 1); /*0x78eac3*/
  return 0; /*0x78e97b*/
}



// ==== 0x0078EBC0  DlgProcGameSetup  this=-  sig=csp ====
int __stdcall DlgProcGameSetup(HWND hWnd, unsigned int a2, int a3, HWND a4)
{
  int result; // eax
  HWND DlgItem; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  int v14; // esi
  DeleteAndZero v15; // [esp-4h] [ebp-14h]
  ObjectClass *v16; // [esp+0h] [ebp-10h]

  *(_DWORD *)v15.__pad_0 = a4; /*0x78ebd4*/
  result = BaseDialogProc(hWnd, a2, a3, v15); /*0x78ebda*/
  if ( !result ) /*0x78ebe3*/
  {
    if ( a2 > 0x111 ) /*0x78ebef*/
    {
      if ( a2 == 1175 ) /*0x78eee5*/
      {
        if ( stru_B7622C.? ) /*0x78ef16*/
          SendDlgItemMessageA(hWnd, 1525, 0xF1u, 1u, 0); /*0x78ef26*/
        if ( dword_B779F0 ) /*0x78ef2e*/
          SendDlgItemMessageA(hWnd, 1527, 0xF1u, 1u, 0); /*0x78ef3e*/
        if ( *(_DWORD *)g_WOL_BuddyList.__pad_C ) /*0x78ef46*/
          SendDlgItemMessageA(hWnd, 1526, 0xF1u, 1u, 0); /*0x78ef56*/
        if ( stru_B76900.? ) /*0x78ef5e*/
          SendDlgItemMessageA(hWnd, 1528, 0xF1u, 1u, 0); /*0x78ef6e*/
        if ( dword_B77784 ) /*0x78ef76*/
          SendDlgItemMessageA(hWnd, 1529, 0xF1u, 1u, 0); /*0x78ef86*/
        if ( dword_B779DC ) /*0x78ef8e*/
          SendDlgItemMessageA(hWnd, 1530, 0xF1u, 1u, 0); /*0x78ef9e*/
        if ( g_WOL_BuddyList.DynamicVector_field_0x10 ) /*0x78efa6*/
          SendDlgItemMessageA(hWnd, 1531, 0xF1u, 1u, 0); /*0x78efb6*/
        if ( LOBYTE(stru_B76AC4.fallRate) ) /*0x78efbe*/
          SendDlgItemMessageA(hWnd, 1908, 0xF1u, 1u, 0); /*0x78efce*/
        if ( g_WindowManager.__pad_14[20] ) /*0x78efd6*/
          SendDlgItemMessageA(hWnd, 1909, 0xF1u, 1u, 0); /*0x78efe6*/
      }
      else if ( a2 == 1261 ) /*0x78eeea*/
      {
        ShowWindow(hWnd, 0); /*0x78eef2*/
        Dialog::InitWindow(hWnd, 1); /*0x78eefb*/
        return 0; /*0x78ef06*/
      }
      return 0; /*0x78eeea*/
    }
    if ( a2 != 273 ) /*0x78ebf5*/
    {
      switch ( a2 ) /*0x78ebfa*/
      {
        case 2u: /*0x78ebfa*/
          byte_A8E9A0 = 1; /*0x78ec41*/
          return 0; /*0x78ec4b*/
        case 0xFu: /*0x78ebfa*/
          Dialog::DrawBackground((Dialog *)hWnd); /*0x78ec21*/
          Dialog::StopBink((Dialog *)hWnd); /*0x78ec28*/
          ValidateRect(hWnd, 0); /*0x78ec2f*/
          return 0; /*0x78ec3b*/
        case 0x2Bu: /*0x78ebfa*/
          Dialog::Resize((char *)a4); /*0x78ec0e*/
          return 1; /*0x78ec1c*/
      }
      return 0; /*0x78efe8*/
    }
    if ( (unsigned __int16)a3 > 0x5F8u ) /*0x78ec5a*/
    {
      if ( (unsigned __int16)a3 == 1594 ) /*0x78ee95*/
      {
        RenderGadgetClassAnimation(hWnd, 0); /*0x78ee9f*/
        Screen::Capture(1, 0, 0, a3); /*0x78eea8*/
        byte_A8E9A0 = 0; /*0x78eead*/
        DlgProcGameSetup_Setup(); /*0x78eeb3*/
        ShowAudioSettingsDialog(); /*0x78eebc*/
        ShowWindow(hWnd, 5); /*0x78eec4*/
        Dialog::InitWindow(hWnd, 0); /*0x78eecc*/
        DlgProcGameSetup_Setup_72B930(v16); /*0x78eed1*/
        return 0; /*0x78eedc*/
      }
      return 0; /*0x78ee95*/
    }
    if ( (unsigned __int16)a3 == 1528 ) /*0x78ec60*/
    {
      if ( HIWORD(a3) <= 1u ) /*0x78edfc*/
      {
        if ( SendMessageA(a4, 0xF0u, 0, 0) != 1 ) /*0x78ee21*/
        {
          Theme::QueueSong((int)&unk_A83D10, -3); /*0x78ee82*/
          return 0; /*0x78ee8d*/
        }
        if ( !Theme::IsPlaying((Theme *)&unk_A83D10) ) /*0x78ee28*/
          goto LABEL_37; /*0x78ee28*/
        v14 = dword_A83D14; /*0x78ee51*/
        if ( dword_A83D14 == -1 ) /*0x78ee5a*/
          v14 = dword_A83D18; /*0x78ee5c*/
        if ( v14 == StringList::Find((StringList *)&unk_A83D10, g_INI_Key_INTRO) ) /*0x78ee73*/
        {
LABEL_37:
          Theme::Stop((Theme *)&unk_A83D10, 0); /*0x78ee37*/
          Theme::QueueSong((int)&unk_A83D10, -2); /*0x78ee43*/
          return 0; /*0x78ee4e*/
        }
      }
      return 0; /*0x78ee73*/
    }
    if ( (unsigned __int16)a3 != 1 ) /*0x78ec67*/
    {
      if ( (unsigned __int16)a3 == 2 ) /*0x78ec6a*/
      {
        __3_YAXPAX_Z(dword_B77E98); /*0x78ec77*/
        dword_B77E98 = 0; /*0x78ec86*/
        CloseDialog(hWnd, 2); /*0x78ec8c*/
        return 0; /*0x78ec97*/
      }
      return 0; /*0x78ec6a*/
    }
    dword_B76474 = 0; /*0x78eca6*/
    DlgItem = GetDlgItem(hWnd, 1525); /*0x78ecac*/
    if ( DlgItem ) /*0x78ecb6*/
      dword_B76474 = SendMessageA(DlgItem, 0xF0u, 0, 0); /*0x78ecc2*/
    dword_B766B8 = 0; /*0x78eccd*/
    v6 = GetDlgItem(hWnd, 1527); /*0x78ecd3*/
    if ( v6 ) /*0x78ecd7*/
      dword_B766B8 = SendMessageA(v6, 0xF0u, 0, 0); /*0x78ece3*/
    stru_B76900.customSound_controller[2] = 0; /*0x78ecee*/
    v7 = GetDlgItem(hWnd, 1526); /*0x78ecf4*/
    if ( v7 ) /*0x78ecf8*/
      stru_B76900.customSound_controller[2] = SendMessageA(v7, 0xF0u, 0, 0); /*0x78ed04*/
    stru_B76900.? = 0; /*0x78ed0f*/
    v8 = GetDlgItem(hWnd, 1528); /*0x78ed15*/
    if ( v8 ) /*0x78ed19*/
      stru_B76900.? = SendMessageA(v8, 0xF0u, 0, 0); /*0x78ed25*/
    v9 = GetDlgItem(hWnd, 1529); /*0x78ed30*/
    if ( v9 ) /*0x78ed34*/
      g_WebBrowserConfig.? = (void *)SendMessageA(v9, 0xF0u, 0, 0); /*0x78ed40*/
    dword_B768F8 = 0; /*0x78ed4b*/
    v10 = GetDlgItem(hWnd, 1530); /*0x78ed51*/
    if ( v10 ) /*0x78ed55*/
      dword_B768F8 = SendMessageA(v10, 0xF0u, 0, 0); /*0x78ed61*/
    dword_B76AC0 = 0; /*0x78ed6c*/
    v11 = GetDlgItem(hWnd, 1531); /*0x78ed72*/
    if ( v11 ) /*0x78ed76*/
      dword_B76AC0 = SendMessageA(v11, 0xF0u, 0, 0); /*0x78ed82*/
    dword_B73680 = 0; /*0x78ed8d*/
    v12 = GetDlgItem(hWnd, 1908); /*0x78ed93*/
    if ( v12 ) /*0x78ed97*/
      dword_B73680 = SendMessageA(v12, 0xF0u, 0, 0); /*0x78eda3*/
    g_WebBrowserConfig.? = 0; /*0x78edae*/
    v13 = GetDlgItem(hWnd, 1909); /*0x78edb4*/
    if ( v13 ) /*0x78edb8*/
      g_WebBrowserConfig.? = (void *)SendMessageA(v13, 0xF0u, 0, 0); /*0x78edc4*/
    __3_YAXPAX_Z(dword_B77E98); /*0x78edd0*/
    dword_B77E98 = 0; /*0x78eddf*/
    CloseDialog(hWnd, 1); /*0x78ede5*/
    return 0; /*0x78eded*/
  }
  return result; /*0x78ec13*/
}



// ==== 0x0078F000  SessionClass::BuildLaunchString  this=SessionClass  sig=csp ====
void SessionClass::BuildLaunchString(SessionClass *this)
{
  signed int inited; // eax
  int v2; // ecx
  int v3; // ebp
  int v4; // ebx
  ObjectClass **v5; // edi
  ObjectClass *v6; // esi
  ObjectClass **v7; // esi
  char *v8; // esi
  char **v9; // eax
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  int v13; // edi
  char *v14; // eax
  char **v15; // [esp-14h] [ebp-A0h]
  char **v16; // [esp-Ch] [ebp-98h]
  char **v17; // [esp-4h] [ebp-90h]
  char **v18; // [esp+4h] [ebp-88h]
  char *v19; // [esp+14h] [ebp-78h] BYREF
  int v20; // [esp+18h] [ebp-74h]
  String v21; // [esp+1Ch] [ebp-70h] BYREF
  char *v22; // [esp+24h] [ebp-68h] BYREF
  String v23; // [esp+28h] [ebp-64h] BYREF
  String v24; // [esp+30h] [ebp-5Ch] BYREF
  String v25; // [esp+38h] [ebp-54h] BYREF
  char v26[80]; // [esp+3Ch] [ebp-50h] BYREF

  inited = SessionClass::initPlayers(*(SessionClass **)&stru_A8B250.__pad_0[4]); /*0x78f009*/
  v2 = 1; /*0x78f014*/
  if ( g_MenuStateFlags == 1 ) /*0x78f01b*/
    ++inited; /*0x78f01d*/
  v3 = 0; /*0x78f01f*/
  v19 = 0; /*0x78f025*/
  v20 = 0; /*0x78f029*/
  if ( inited <= 1 ) /*0x78f02d*/
    goto LABEL_15; /*0x78f02d*/
  v4 = inited - 1; /*0x78f030*/
  v5 = (ObjectClass **)&unk_A8DA94; /*0x78f033*/
  *(_DWORD *)v21.__pad_0 = inited; /*0x78f03b*/
  do /*0x78f079*/
  {
    v6 = *v5; /*0x78f03f*/
    if ( *v5 == (ObjectClass *)g_HouseClass_ObserverFlags || v6 == (ObjectClass *)g_Lobby_MaxPlayers ) /*0x78f050*/
    {
      ++v19; /*0x78f071*/
    }
    else if ( (unsigned __int8)IsKnownPointer(*v5) ) /*0x78f054*/
    {
      ++v3; /*0x78f05d*/
    }
    else if ( (unsigned __int8)Player::IsObserver((Player *)v6) ) /*0x78f062*/
    {
      ++v20; /*0x78f06b*/
    }
    ++v5; /*0x78f075*/
    --v4; /*0x78f078*/
  }
  while ( v4 ); /*0x78f079*/
  if ( *(int *)v21.__pad_0 < 8 ) /*0x78f083*/
  {
    v2 = *(_DWORD *)v21.__pad_0; /*0x78f085*/
LABEL_15:
    v7 = (ObjectClass **)(4 * v2 + 11066000); /*0x78f087*/
    do /*0x78f0b2*/
    {
      if ( *v7 == (ObjectClass *)g_Lobby_MaxPlayers ) /*0x78f097*/
      {
        ++v19; /*0x78f099*/
      }
      else if ( (unsigned __int8)IsKnownPointer(*v7) ) /*0x78f09f*/
      {
        ++v3; /*0x78f0a8*/
      }
      ++v7; /*0x78f0a9*/
    }
    while ( (int)v7 < (int)&dword_A8DAB0 ); /*0x78f0b2*/
  }
  if ( ppv ) /*0x78f0bb*/
  {
    v8 = &v19[v3 + 1]; /*0x78f0ca*/
    v18 = String::Assign(&v25, String2); /*0x78f0df*/
    v17 = FromStringInt((char **)&v24.m_3[1], (int)v8); /*0x78f0ec*/
    v16 = String::Assign(&v24, asc_84BA48); /*0x78f100*/
    v15 = String::Assign((String *)&v23.m_3[1], &stru_B76AC4.needsRedraw); /*0x78f118*/
    v9 = String::Assign(&v23, aMode_0); /*0x78f11f*/
    v10 = String::Concat((String *)v9, &v22, v15); /*0x78f126*/
    v11 = String::Concat((String *)v10, (char **)&v21.m_3[1], v16); /*0x78f12d*/
    v12 = String::Concat((String *)v11, &v19, v17); /*0x78f134*/
    String::Concat((String *)v12, (char **)&v21, v18); /*0x78f13b*/
    DeleteAndZero((ObjectClass *)&v19); /*0x78f144*/
    DeleteAndZero((ObjectClass *)&v21.m_3[1]); /*0x78f14d*/
    DeleteAndZero((ObjectClass *)&v22); /*0x78f156*/
    DeleteAndZero((ObjectClass *)&v23); /*0x78f15f*/
    DeleteAndZero((ObjectClass *)&v23.m_3[1]); /*0x78f168*/
    DeleteAndZero((ObjectClass *)&v24); /*0x78f171*/
    DeleteAndZero((ObjectClass *)&v24.m_3[1]); /*0x78f17a*/
    DeleteAndZero((ObjectClass *)&v25); /*0x78f183*/
    v13 = *(_DWORD *)ppv; /*0x78f191*/
    v14 = String::GetOrEmpty(&v21); /*0x78f193*/
    (*(void (__stdcall **)(LPVOID, char *))(v13 + 156))(ppv, v14); /*0x78f1a0*/
    memset(v26, 0, sizeof(v26)); /*0x78f1b1*/
    GameConfig::BuildChecksum(v26); /*0x78f1b7*/
    v26[40] = 0; /*0x78f1c5*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 168))(ppv, v26); /*0x78f1ce*/
    (*(void (__stdcall **)(LPVOID, int, char *))(*(_DWORD *)ppv + 252))(ppv, 1, &v8[v20]); /*0x78f1e5*/
    DeleteAndZero((ObjectClass *)&v21); /*0x78f1ef*/
  }
}



// ==== 0x0078F200  ObjectClass::BuildWOLPlayerTooltip  this=ObjectClass  sig=csp ====
wchar_t *__thiscall BuildWOLPlayerTooltip(char *this)
{
  char *v2; // eax
  _DWORD *v3; // esi
  int v4; // esi
  signed int v5; // eax
  signed int v6; // ebp
  int v7; // ebx
  const void *v8; // esi
  char v9; // bl
  int v10; // esi
  const void *v11; // esi
  char *v12; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  char *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v19; // [esp-10h] [ebp-174h]
  int v20; // [esp-Ch] [ebp-170h]
  wchar_t *v21; // [esp-Ch] [ebp-170h]
  char *v22; // [esp-8h] [ebp-16Ch]
  char *v23; // [esp-8h] [ebp-16Ch]
  wchar_t *v24; // [esp-8h] [ebp-16Ch]
  int v25; // [esp-4h] [ebp-168h]
  char *v26; // [esp-4h] [ebp-168h]
  char *v27; // [esp-4h] [ebp-168h]
  wchar_t *String; // [esp-4h] [ebp-168h]
  char v29; // [esp+12h] [ebp-152h]
  char v30; // [esp+13h] [ebp-151h]
  void *v31; // [esp+14h] [ebp-150h] BYREF
  void *v32; // [esp+18h] [ebp-14Ch] BYREF
  char *v33; // [esp+1Ch] [ebp-148h]
  char v34[108]; // [esp+20h] [ebp-144h] BYREF
  _DWORD v35[27]; // [esp+8Ch] [ebp-D8h] BYREF
  _DWORD v36[27]; // [esp+F8h] [ebp-6Ch] BYREF

  v33 = this; /*0x78f210*/
  unknown_libname_73(&v31); /*0x78f214*/
  memset(v35, 0, sizeof(v35)); /*0x78f227*/
  v2 = ToWideStringChar(this); /*0x78f22b*/
  String::Assign_Bool(&v31, v2); /*0x78f235*/
  String::ToLower((const char **)&v31); /*0x78f23e*/
  v3 = (_DWORD *)g_WOL_HashTable; /*0x78f243*/
  if ( g_WOL_HashTable /*0x78f267*/
    && *(_DWORD *)(g_WOL_HashTable + 4)
    && (v4 = *(_DWORD *)(*v3 + 4 * HashMap::ComputeIndex_2(g_WOL_HashTable, (int)&v31))) != 0 )
  {
    while ( !String::Compare((const char **)v4, (const char **)&v31) ) /*0x78f277*/
    {
      v4 = *(_DWORD *)(v4 + 112); /*0x78f27d*/
      if ( !v4 ) /*0x78f282*/
        goto LABEL_6; /*0x78f282*/
    }
    v8 = (const void *)(v4 + 4); /*0x78f309*/
    if ( v8 ) /*0x78f30e*/
      qmemcpy(v35, v8, sizeof(v35)); /*0x78f31c*/
    v30 = 1; /*0x78f31e*/
  }
  else
  {
LABEL_6:
    v30 = 0; /*0x78f284*/
  }
  memset(v36, 0, sizeof(v36)); /*0x78f297*/
  unknown_libname_73(&v32); /*0x78f29d*/
  v5 = dword_B77900; /*0x78f2a2*/
  v6 = 0; /*0x78f2a7*/
  if ( (int)dword_B77900 > 0 ) /*0x78f2ab*/
  {
    v7 = 0; /*0x78f2b1*/
    do /*0x78f33c*/
    {
      if ( v7 >= 0 && v6 < v5 ) /*0x78f2b9*/
        qmemcpy(v34, (char *)dword_B77908 + v7, sizeof(v34)); /*0x78f2cc*/
      if ( !strcmp(&v34[36], ToWideStringChar(v33)) ) /*0x78f2e3*/
        break; /*0x78f32f*/
      v5 = dword_B77900; /*0x78f331*/
      ++v6; /*0x78f336*/
      v7 += 108; /*0x78f337*/
    }
    while ( v6 < (int)dword_B77900 ); /*0x78f33c*/
  }
  v9 = 0; /*0x78f34b*/
  v29 = 0; /*0x78f352*/
  if ( strlen(&v34[46]) ) /*0x78f34d*/
  {
    v9 = 1; /*0x78f361*/
    String::Assign_Bool(&v32, &v34[87]); /*0x78f363*/
    String::ToLower((const char **)&v32); /*0x78f36c*/
    if ( dword_B768C4 ) /*0x78f378*/
    {
      v10 = *((_DWORD *)g_WOL_ListParser + (dword_B768D8(&v32) & ((1 << dword_B768CC) - 1))); /*0x78f399*/
      if ( v10 ) /*0x78f39e*/
      {
        while ( !String::Compare((const char **)v10, (const char **)&v32) ) /*0x78f3ae*/
        {
          v10 = *(_DWORD *)(v10 + 112); /*0x78f3b0*/
          if ( !v10 ) /*0x78f3b5*/
            goto LABEL_27; /*0x78f3b5*/
        }
        v11 = (const void *)(v10 + 4); /*0x78f3bd*/
        if ( v11 ) /*0x78f3c2*/
          qmemcpy(v36, v11, sizeof(v36)); /*0x78f3d0*/
        v29 = 1; /*0x78f3d2*/
      }
    }
  }
LABEL_27:
  if ( !v30 ) /*0x78f3dd*/
  {
    if ( !v9 ) /*0x78f4d2*/
    {
      String = GetStringCSF(g_Str_TXT_UNRANKED, 0, g_Str_File_wonline_cpp, 15730); /*0x78f57f*/
      v17 = GetStringCSF(aTxtPlayerToolt_4, 0, g_Str_File_wonline_cpp, 15730); /*0x78f58a*/
      swprintf(&unk_B76238, (const size_t)v17, String); /*0x78f595*/
      goto LABEL_40; /*0x78f595*/
    }
    if ( v29 ) /*0x78f4e2*/
    {
      v16 = CharToWideString(&v34[46]); /*0x78f4e4*/
      v26 = (char *)v36[7]; /*0x78f4f2*/
      v23 = v16; /*0x78f4f3*/
      v21 = GetStringCSF(g_Str_TXT_UNRANKED, 0, g_Str_File_wonline_cpp, 15722); /*0x78f50f*/
      v14 = GetStringCSF(aTxtPlayerToolt_2, 0, g_Str_File_wonline_cpp, 15722); /*0x78f51a*/
      goto LABEL_37; /*0x78f51a*/
    }
    v27 = CharToWideString(&v34[46]); /*0x78f53b*/
    v24 = GetStringCSF(g_Str_TXT_UNRANKED, 0, g_Str_File_wonline_cpp, 15726); /*0x78f552*/
    v15 = GetStringCSF((wchar_t *)aTxtPlayerToolt_3, 0, g_Str_File_wonline_cpp, 15726); /*0x78f55d*/
LABEL_33:
    swprintf(&unk_B76238, (const size_t)v15, v24, v27); /*0x78f4bd*/
    goto LABEL_40; /*0x78f4cb*/
  }
  if ( !v9 ) /*0x78f3e5*/
  {
    v27 = (char *)v35[7]; /*0x78f494*/
    v24 = GetStringCSF(g_Str_TXT_RANK, 0, g_Str_File_wonline_cpp, 15716); /*0x78f4ad*/
    v15 = GetStringCSF(aTxtPlayerToolt_1, 0, g_Str_File_wonline_cpp, 15716); /*0x78f4b8*/
    goto LABEL_33; /*0x78f4b8*/
  }
  if ( !v29 ) /*0x78f3f5*/
  {
    v26 = CharToWideString(&v34[46]); /*0x78f45b*/
    v23 = (char *)v35[7]; /*0x78f45c*/
    v21 = GetStringCSF(g_Str_TXT_RANK, 0, g_Str_File_wonline_cpp, 15712); /*0x78f478*/
    v14 = GetStringCSF((wchar_t *)aTxtPlayerToolt_0, 0, g_Str_File_wonline_cpp, 15712); /*0x78f483*/
LABEL_37:
    swprintf(&unk_B76238, (const size_t)v14, v21, v23, v26); /*0x78f51f*/
    goto LABEL_40; /*0x78f52d*/
  }
  v12 = CharToWideString(&v34[46]); /*0x78f3f7*/
  v25 = v36[7]; /*0x78f408*/
  v22 = v12; /*0x78f409*/
  v20 = v35[7]; /*0x78f413*/
  v19 = GetStringCSF(g_Str_TXT_RANK, 0, g_Str_File_wonline_cpp, 15708); /*0x78f42a*/
  v13 = GetStringCSF(aTxtPlayerToolt, 0, g_Str_File_wonline_cpp, 15708); /*0x78f435*/
  swprintf(&unk_B76238, (const size_t)v13, v19, v20, v22, v25); /*0x78f440*/
LABEL_40:
  DeleteAndZero(&v32); /*0x78f59d*/
  DeleteAndZero(&v31); /*0x78f5aa*/
  return &unk_B76238; /*0x78f5b4*/
}



// ==== 0x0078F5C0  WOLobby::FormatLatencyText  this=WOLobby  sig=csp ====
wchar_t *__thiscall WOLobby::FormatLatencyText(WOLobby *this)
{
  int v2; // eax
  wchar_t *v3; // eax
  int v5; // [esp-10h] [ebp-14h]
  WOLobby *v6; // [esp-Ch] [ebp-10h]
  wchar_t *StringCSF; // [esp-8h] [ebp-Ch]
  wchar_t *v8; // [esp-4h] [ebp-8h]

  v2 = dword_B76440[WOLobby::FindPlayerIndex(this)]; /*0x78f5c8*/
  if ( v2 >= 0 ) /*0x78f5d1*/
  {
    if ( v2 >= 300 ) /*0x78f61a*/
    {
      v8 = (wchar_t *)v2; /*0x78f641*/
      if ( v2 >= 500 ) /*0x78f642*/
      {
        StringCSF = GetStringCSF(aTxtPoor, 0, g_Str_File_wonline_cpp, 15747); /*0x78f679*/
        v6 = this; /*0x78f67a*/
        v5 = 15747; /*0x78f67b*/
      }
      else
      {
        StringCSF = GetStringCSF(aTxtFair, 0, g_Str_File_wonline_cpp, 15745); /*0x78f65a*/
        v6 = this; /*0x78f65b*/
        v5 = 15745; /*0x78f65c*/
      }
    }
    else
    {
      v8 = (wchar_t *)v2; /*0x78f61c*/
      StringCSF = GetStringCSF(aTxtGood, 0, g_Str_File_wonline_cpp, 15743); /*0x78f633*/
      v6 = this; /*0x78f634*/
      v5 = 15743; /*0x78f635*/
    }
    v3 = GetStringCSF(aTxtLatencyIcon_0, 0, g_Str_File_wonline_cpp, v5); /*0x78f68c*/
  }
  else
  {
    v8 = GetStringCSF(g_Str_TXT_UNKNOWN_PING, 0, g_Str_File_wonline_cpp, 15741); /*0x78f5f0*/
    StringCSF = GetStringCSF(aTxtUnknown, 0, g_Str_File_wonline_cpp, 15741); /*0x78f607*/
    v6 = this; /*0x78f608*/
    v3 = GetStringCSF((wchar_t *)aTxtLatencyIcon, 0, g_Str_File_wonline_cpp, 15741); /*0x78f613*/
  }
  swprintf(&word_B75F6C, (const size_t)v3, (const wchar_t *const)v6, StringCSF, v8); /*0x78f697*/
  return &word_B75F6C; /*0x78f6a4*/
}



// ==== 0x0078F7F0  WOLobby::SetupDlgProc  this=WOLobby  sig=csp ====
int __stdcall WOLobby::SetupDlgProc(HWND hDlg, unsigned int a2, unsigned int nIDDlgItem, HWND hWnd)
{
  int result; // eax
  int v5; // ecx
  HWND DlgItem; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // ebx
  HWND v10; // ebx
  _DWORD *v11; // eax
  _DWORD *v12; // eax
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
  wchar_t *v... [59148 chars total]



// ==== 0x00780110  ObjectClass::ResetSystemWOL  this=ObjectClass  sig=csp ====
int ResetSystemWOL(ObjectClass *this)
{
  _DWORD *AccountInfoWOL; // eax
  int v2; // esi
  unsigned int v3; // eax
  unsigned int v4; // ebp
  ObjectClass *v5; // esi
  ObjectClass *v6; // edi
  int i; // esi
  unsigned int HashMap_field_0x08; // eax
  unsigned int v9; // ebp
  ObjectClass *v10; // esi
  ObjectClass *v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // edi
  ObjectClass *v14; // esi
  ObjectClass *v15; // ecx
  unsigned int v16; // eax
  unsigned int j; // edi
  ObjectClass *v18; // esi
  ObjectClass *v19; // ecx
  unsigned int occupant; // eax
  unsigned int k; // edi
  CChatEventSink *CChatEventSink_field_0x0C; // esi
  CChatEventSink *v23; // ecx
  int result; // eax
  _DWORD v25[2]; // [esp+10h] [ebp-8h] BYREF

  AccountInfoWOL = LoadAccountInfoWOL((ObjectClass *)v25); /*0x78011b*/
  ComPtr::Set(&stru_B75E48, AccountInfoWOL[1]); /*0x780129*/
  v25[0] = &rc_ptr<PlayerProfile>::`vftable'; /*0x780132*/
  ComPtr::Release((ComPtr *)v25); /*0x78013a*/
  v2 = 0; /*0x780146*/
  *(_DWORD *)&g_WindowManager.__pad_EC[636] = 0; /*0x78014a*/
  stru_B76AC4.? = 0; /*0x780150*/
  for ( g_WOL_UserList.owningHouseIndex = 0; v2 < g_WebBrowserConfig.?; ++v2 ) /*0x78015c*/
    DeleteAndZero((ObjectClass *)(g_WebBrowserConfig.? + 4 * v2)); /*0x780167*/
  v3 = stru_B765EC.location[0]; /*0x780176*/
  v4 = 0; /*0x78017b*/
  for ( g_WebBrowserConfig.? = 0; v4 < stru_B765EC.location[0]; v3 = stru_B765EC.location[0] ) /*0x780185*/
  {
    v5 = *(ObjectClass **)(stru_B765EC.lastLayer + 4 * v4); /*0x78018d*/
    while ( v5 ) /*0x780192*/
    {
      v6 = v5; /*0x780194*/
      v5 = (ObjectClass *)v5->?; /*0x780196*/
      DeleteAndZero(v6); /*0x78019f*/
      __3_YAXPAX_Z(v6); /*0x7801a5*/
    }
    ++v4; /*0x7801b6*/
    *(_DWORD *)(stru_B765EC.lastLayer + 4 * v4 - 4) = 0; /*0x7801b7*/
  }
  *(_DWORD *)&stru_B765EC.isInLogic = 0; /*0x7801ca*/
  if ( v3 > dword_B766B0 ) /*0x7801d2*/
  {
    do /*0x7801f3*/
    {
      if ( LOBYTE(stru_B765EC.lineTrailer) ) /*0x7801da*/
        break; /*0x7801da*/
      HashMap::Shrink((HashMap *)&stru_B765EC.lastLayer); /*0x7801e1*/
    }
    while ( stru_B765EC.location[0] > (unsigned int)dword_B766B0 ); /*0x7801f3*/
  }
  for ( i = 0; i < (int)stru_B765EC.?; ++i ) /*0x7801fe*/
    DeleteAndZero((ObjectClass *)(stru_B765EC.? + 4 * i)); /*0x780209*/
  HashMap_field_0x08 = g_WOL_ConnectionPool.HashMap_field_0x08; /*0x780218*/
  v9 = 0; /*0x78021d*/
  for ( stru_B765EC.? = 0; /*0x780227*/
        v9 < g_WOL_ConnectionPool.HashMap_field_0x08;
        HashMap_field_0x08 = g_WOL_ConnectionPool.HashMap_field_0x08 )
  {
    v10 = *(ObjectClass **)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * v9); /*0x78022e*/
    while ( v10 ) /*0x780233*/
    {
      v11 = v10; /*0x780235*/
      v10 = (ObjectClass *)v10->?; /*0x780237*/
      DeleteAndZero(v11); /*0x780240*/
      __3_YAXPAX_Z(v11); /*0x780246*/
    }
    ++v9; /*0x780258*/
    *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * v9 - 4) = 0; /*0x780259*/
  }
  g_WOL_ConnectionPool.HashMap_field_0x04 = 0; /*0x78026c*/
  if ( HashMap_field_0x08 > dword_B76560 ) /*0x780274*/
  {
    do /*0x780295*/
    {
      if ( byte_B76544 ) /*0x78027c*/
        break; /*0x78027c*/
      HashMap::Shrink(&g_WOL_ConnectionPool); /*0x780283*/
    }
    while ( g_WOL_ConnectionPool.HashMap_field_0x08 > (unsigned int)dword_B76560 ); /*0x780295*/
  }
  dword_B7646C = time(0) + 86400; /*0x7802a5*/
  v12 = g_WOL_ListParser.HashMap_field_0x08; /*0x7802aa*/
  v13 = 0; /*0x7802af*/
  dword_B7617C = 0; /*0x7802b3*/
  for ( dword_B76180 = 0; v13 < g_WOL_ListParser.HashMap_field_0x08; v12 = g_WOL_ListParser.HashMap_field_0x08 ) /*0x7802bf*/
  {
    v14 = *(ObjectClass **)(*(_DWORD *)g_WOL_ListParser.__pad_0 + 4 * v13); /*0x7802c6*/
    while ( v14 ) /*0x7802cb*/
    {
      v15 = v14; /*0x7802cd*/
      v14 = (ObjectClass *)v14->estimatedHealth; /*0x7802cf*/
      ResetSystemWOL_Reset(v15, 1); /*0x7802d8*/
    }
    ++v13; /*0x7802e7*/
    *(_DWORD *)(*(_DWORD *)g_WOL_ListParser.__pad_0 + 4 * v13 - 4) = 0; /*0x7802e8*/
  }
  g_WOL_ListParser.HashMap_field_0x04 = 0; /*0x7802fb*/
  if ( v12 > dword_B768F0 ) /*0x780303*/
  {
    do /*0x780324*/
    {
      if ( byte_B768D4 ) /*0x78030b*/
        break; /*0x78030b*/
      HashMap::Shrink2(&g_WOL_ListParser); /*0x780312*/
    }
    while ( g_WOL_ListParser.HashMap_field_0x08 > (unsigned int)dword_B768F0 ); /*0x780324*/
  }
  v16 = *(_DWORD *)&g_WindowManager.__pad_48[16]; /*0x780326*/
  for ( j = 0; j < *(_DWORD *)&g_WindowManager.__pad_48[16]; v16 = *(_DWORD *)&g_WindowManager.__pad_48[16] ) /*0x78032f*/
  {
    v18 = *(ObjectClass **)(*(_DWORD *)&g_WindowManager.__pad_48[8] + 4 * j); /*0x780336*/
    while ( v18 ) /*0x78033b*/
    {
      v19 = v18; /*0x78033d*/
      v18 = (ObjectClass *)v18->estimatedHealth; /*0x78033f*/
      ResetSystemWOL_Reset(v19, 1); /*0x780348*/
    }
    ++j; /*0x780357*/
    *(_DWORD *)(*(_DWORD *)&g_WindowManager.__pad_48[8] + 4 * j - 4) = 0; /*0x780358*/
  }
  *(_DWORD *)&g_WindowManager.__pad_48[12] = 0; /*0x78036b*/
  if ( v16 > *(_DWORD *)&g_WindowManager.__pad_70[16] ) /*0x780373*/
  {
    do /*0x780394*/
    {
      if ( g_WindowManager.__pad_48[28] ) /*0x78037b*/
        break; /*0x78037b*/
      HashMap::Shrink2((HashMap *)&g_WindowManager.__pad_48[8]); /*0x780382*/
    }
    while ( *(_DWORD *)&g_WindowManager.__pad_48[16] > *(_DWORD *)&g_WindowManager.__pad_70[16] ); /*0x780394*/
  }
  occupant = stru_B765EC.occupant; /*0x780396*/
  for ( k = 0; k < stru_B765EC.occupant; occupant = stru_B765EC.occupant ) /*0x78039f*/
  {
    CChatEventSink_field_0x0C = *(CChatEventSink **)(stru_B765EC.? + 4 * k); /*0x7803a6*/
    while ( CChatEventSink_field_0x0C ) /*0x7803ab*/
    {
      v23 = CChatEventSink_field_0x0C; /*0x7803ad*/
      CChatEventSink_field_0x0C = (CChatEventSink *)CChatEventSink_field_0x0C[5].CChatEventSink_field_0x0C; /*0x7803af*/
      CChatEventSink::DeleteAndZero(v23, 1); /*0x7803bb*/
    }
    ++k; /*0x7803ca*/
    *(_DWORD *)(stru_B765EC.? + 4 * k - 4) = 0; /*0x7803cb*/
  }
  stru_B765EC.? = 0; /*0x7803de*/
  if ( occupant > stru_B765EC.ambientSoundController[4] ) /*0x7803e6*/
  {
    do /*0x780407*/
    {
      if ( LOBYTE(stru_B765EC.nextObject) ) /*0x7803ee*/
        break; /*0x7803ee*/
      HashTable::Shrink((HashTable *)&stru_B765EC.?); /*0x7803f5*/
    }
    while ( stru_B765EC.occupant > (unsigned int)stru_B765EC.ambientSoundController[4] ); /*0x780407*/
  }
  Array::CleanupArrayWOL(&g_WindowManager); /*0x78040e*/
  Array::CleanupArrayWOL((Array *)&stru_B76900.needsRedraw); /*0x780418*/
  HashTable::CleanupAndResize((HashTable *)&stru_B76900.isAliveFlag); /*0x780422*/
  if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x780437*/
  {
    g_WOL_HashTable = (HashTable *)&g_WindowManager.__pad_48[8]; /*0x78043e*/
    *(_DWORD *)&g_WOL_BuddyList.__pad_14[4] = 8960; /*0x780448*/
    dword_B736F0 = 8960; /*0x78044d*/
  }
  else
  {
    g_WOL_HashTable = &stru_B77D80; /*0x780459*/
    *(_DWORD *)&g_WOL_BuddyList.__pad_14[4] = g_NetworkRematchState; /*0x780463*/
    dword_B736F0 = g_NetworkRematchState; /*0x780468*/
  }
  memset(&stru_B76AC4.ambientSoundController[4], 0, 0x10Cu); /*0x78047e*/
  memset(&g_WindowManager.__pad_EC[84], 0, 0x10Cu); /*0x78048a*/
  memset(&stru_B75E48.ComPtr_field_0x10, 0, 0xF8u); /*0x780496*/
  memset(&unk_B769C8, 0, 0xF8u); /*0x7804a6*/
  word_B77AD0 = 0; /*0x7804a8*/
  g_WOL_GameListState = 0; /*0x7804af*/
  g_WOL_IdleHandler = 1; /*0x7804b5*/
  g_WOL_GameProcessState = -1; /*0x7804bb*/
  g_WOL_GameListPool = time(0); /*0x7804ce*/
  dword_B76468 = 0; /*0x7804d3*/
  g_WOL_BuddyList.DynamicVector_field_0x1C = 0; /*0x7804d9*/
  dword_B77E4C = 0; /*0x7804df*/
  stru_B77D80.HashTable_field_0x48 = 0; /*0x7804e5*/
  byte_B77DEC = 0; /*0x7804eb*/
  LOBYTE(stru_B77D80.HashTable_field_0x40) = 0; /*0x7804f1*/
  byte_84A1B8 = 1; /*0x7804f7*/
  DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.Array_field_0x38); /*0x7804fe*/
  memset(&Handles, 0, 0x48u); /*0x780514*/
  *(_WORD *)((char *)&stru_B77D80.HashTable_field_0x40 + 1) = 0; /*0x780522*/
  dword_84A1BC = -1; /*0x78052e*/
  stru_B77D80.HashTable_field_0x4C = 0; /*0x780534*/
  stru_B77D80.HashTable_field_0x38 = -1; /*0x78053a*/
  stru_B77D80.HashTable_field_0x3C = -1; /*0x780540*/
  *(_DWORD *)&g_WindowManager.__pad_EC[648] = GetStringCSF(aTxtLob1, 0, g_Str_File_wonline_cpp, 2752); /*0x78055c*/
  *(_DWORD *)&g_WindowManager.__pad_EC[652] = GetStringCSF(aTxtLob2, 0, g_Str_File_wonline_cpp, 2753); /*0x780577*/
  *(_DWORD *)&g_WindowManager.__pad_EC[656] = GetStringCSF(aTxtLob3, 0, g_Str_File_wonline_cpp, 2754); /*0x780592*/
  *(_DWORD *)&g_WindowManager.__pad_EC[660] = GetStringCSF(aTxtLob4, 0, g_Str_File_wonline_cpp, 2755); /*0x7805ad*/
  *(_DWORD *)&g_WindowManager.__pad_EC[664] = GetStringCSF(aTxtLob5, 0, g_Str_File_wonline_cpp, 2756); /*0x7805c8*/
  *(_DWORD *)&g_WindowManager.__pad_EC[668] = GetStringCSF(aTxtLob6, 0, g_Str_File_wonline_cpp, 2757); /*0x7805d2*/
  *(_DWORD *)&g_WindowManager.__pad_EC[672] = GetStringCSF(aTxtLob7, 0, g_Str_File_wonline_cpp, 2758); /*0x7805fe*/
  *(_DWORD *)&g_WindowManager.__pad_EC[676] = GetStringCSF(aTxtLob8, 0, g_Str_File_wonline_cpp, 2759); /*0x780608*/
  memset(g_WOL_RequestObject, 0xFFu, sizeof(g_WOL_RequestObject)); /*0x780619*/
  ppv = 0; /*0x780627*/
  memset(byte_B77A94, 0, sizeof(byte_B77A94)); /*0x78062d*/
  g_UIPointerTable = 0; /*0x780634*/
  dword_AC1174 = 0; /*0x78063a*/
  dword_B77E54 = 0; /*0x780640*/
  dword_B77E58 = 0; /*0x780646*/
  dword_B77E5C = 0; /*0x78064c*/
  dword_B77DDC = 0; /*0x780652*/
  dword_B77DE0 = 0; /*0x780658*/
  unk_B77ABC = 0; /*0x78065e*/
  dword_B77DE4 = 0; /*0x78065f*/
  stru_B77D80.HashTable_field_0x50 = 0; /*0x780665*/
  g_WOL_LoginObject.? = 1; /*0x78066b*/
  g_WOL_ChannelLeaveState = 0; /*0x780671*/
  __Release__NonReentrantLock_details_Concurrency__QAEXXZ_1((Concurrency::details::_NonReentrantLock *)&stru_B76510.StringVector_field_0x10); /*0x780677*/
  g_NetworkLobbyState = 0; /*0x78067c*/
  dword_B77E60 = 0; /*0x780682*/
  dword_B77E64 = 0; /*0x780688*/
  CCINIClass_RulesHash = GameConfig::ComputeHash(); /*0x780693*/
  LoadArtINI(); /*0x780698*/
  CCINIClass_ArtHash = unknown_libname_29(); /*0x7806a2*/
  result = unknown_libname_30(); /*0x7806a7*/
  dword_B77E20 = 0; /*0x7806ac*/
  CCINIClass_AIHash = result; /*0x7806b2*/
  return result; /*0x7806b7*/
}



// ==== 0x007806C0  ObjectClass::PopulateWOLLobbyListBox  this=ObjectClass  sig=csp ====
void PopulateWOLLobbyListBox(ObjectClass *this)
{
  HWND v1; // eax
  HWND DlgItem; // ebp
  LRESULT (__stdcall *v3)(HWND, UINT, WPARAM, LPARAM); // esi
  LRESULT v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  LRESULT v9; // esi
  signed int v10; // ebx
  LRESULT v11; // eax
  int v12; // eax
  LRESULT v13; // esi
  char *v14; // eax
  LRESULT v15; // eax
  bool v16; // [esp+7h] [ebp-2E9h]
  LPARAM v17; // [esp+8h] [ebp-2E8h]
  _BYTE v18[312]; // [esp+Ch] [ebp-2E4h] BYREF
  wchar_t Buffer[80]; // [esp+144h] [ebp-1ACh] BYREF
  char v20[268]; // [esp+1E4h] [ebp-10Ch] BYREF

  v1 = (HWND)Dialog::FindByHandle((Dialog *)0x113); /*0x7806cc*/
  if ( v1 ) /*0x7806d3*/
  {
    DlgItem = GetDlgItem(v1, 1341); /*0x7806e5*/
    if ( DlgItem ) /*0x7806e9*/
    {
      unknown_libname_73(v18); /*0x7806f4*/
      v3 = SendMessageA; /*0x7806f9*/
      v4 = SendMessageA(DlgItem, 0x18Eu, 0, 0); /*0x780709*/
      if ( v4 != -1 ) /*0x78070e*/
        GetListBoxItemText(DlgItem, v4, (void **)v18); /*0x780719*/
      SendMessageA(DlgItem, 0x49Du, 0, 1); /*0x780729*/
      Memory_Pop((ObjectClass *)DlgItem); /*0x78072d*/
      v5 = 0; /*0x780737*/
      *(_DWORD *)&v18[16] = *(_DWORD *)&g_WindowManager.__pad_EC[636]; /*0x78073b*/
      v17 = 0; /*0x78073f*/
      if ( *(int *)&g_WindowManager.__pad_EC[636] > 0 ) /*0x780743*/
      {
        v6 = 0; /*0x780749*/
        *(_DWORD *)&v18[4] = 0; /*0x78074c*/
        do /*0x7809a5*/
        {
          if ( v6 >= 0 && v5 < *(int *)&g_WindowManager.__pad_EC[636] ) /*0x78075a*/
            qmemcpy(&v18[44], (const void *)(v6 + *(_DWORD *)&g_WindowManager.__pad_EC[644]), 0x10Cu); /*0x78076e*/
          if ( !strncmp(&v18[96], g_Str_Lob_41_, strlen(g_Str_Lob_41_)) ) /*0x78078a*/
          {
            v7 = atol(&v18[strlen(g_Str_Lob_41_) + 96]); /*0x7807b1*/
            *(_DWORD *)&v18[8] = v7; /*0x7807b6*/
            v16 = strcmp(&v18[96], &stru_B76AC4.needsRedraw) == 0; /*0x7807f7*/
            v8 = v7 % 8; /*0x780810*/
            if ( v7 / 8 ) /*0x780801*/
              swprintf( /*0x780855*/
                Buffer,
                (const size_t)aSDD_0,
                *(const wchar_t *const *)&g_WindowManager.__pad_EC[4 * v8 + 648],
                v7 / 8 + 1,
                *(_DWORD *)&v18[56]);
            else
              swprintf( /*0x78082f*/
                Buffer,
                (const size_t)aSD_3,
                *(const wchar_t *const *)&g_WindowManager.__pad_EC[4 * v8 + 648],
                *(_DWORD *)&v18[56]);
            v9 = SendMessageA(DlgItem, 0x18Bu, 0, 0); /*0x78086d*/
            v10 = 0; /*0x78086f*/
            for ( *(_DWORD *)&v18[12] = v9; v10 < v9; ++v10 ) /*0x780877*/
            {
              v11 = SendMessageA(DlgItem, 0x199u, v10, 0); /*0x780882*/
              if ( v11 >= 0 && v11 < *(int *)&g_WindowManager.__pad_EC[636] ) /*0x780892*/
              {
                qmemcpy(v20, (const void *)(*(_DWORD *)&g_WindowManager.__pad_EC[644] + 268 * v11), sizeof(v20)); /*0x7808b3*/
                v9 = *(_DWORD *)&v18[12]; /*0x7808b5*/
              }
              v12 = atol(&v20[strlen(g_Str_Lob_41_) + 52]); /*0x7808d0*/
              if ( v12 > *(int *)&v18[8] ) /*0x7808de*/
                break; /*0x7808de*/
            }
            v13 = SendMessageA(DlgItem, 0x4C7u, v10, (LPARAM)&v18[96]); /*0x7808fd*/
            SendMessageA(DlgItem, 0x19Au, v13, v17); /*0x78090b*/
            Gadget::InitProperties((Gadget *)&v18[20]); /*0x780911*/
            *(_DWORD *)&v18[20] = 1; /*0x780922*/
            WideString::Reassign((void **)&v18[24], Buffer); /*0x78092a*/
            WideString::Reassign((void **)&v18[28], &g_TypeClass_DefaultString); /*0x780938*/
            SendMessageA( /*0x780962*/
              DlgItem,
              0x4A8u,
              (unsigned __int16)dword_B76C1C | ((unsigned __int16)v13 << 16),
              (LPARAM)&v18[20]);
            if ( v16 ) /*0x78096a*/
              SendMessageA(DlgItem, 0x186u, v13, 0); /*0x780975*/
            DeleteAndZero::Alt((DeleteAndZero *)&v18[28]); /*0x78097b*/
            DeleteAndZero::Alt((DeleteAndZero *)&v18[24]); /*0x780984*/
            v5 = v17; /*0x780989*/
          }
          ++v5; /*0x780995*/
          v6 = *(_DWORD *)&v18[4] + 268; /*0x780996*/
          v17 = v5; /*0x78099d*/
          *(_DWORD *)&v18[4] += 268; /*0x7809a1*/
        }
        while ( v5 < *(int *)&v18[16] ); /*0x7809a5*/
        v3 = SendMessageA; /*0x7809ab*/
      }
      v14 = String::GetOrEmpty_Alt((String *)v18); /*0x7809b6*/
      v15 = v3(DlgItem, 0x4C5u, 0, (LPARAM)v14); /*0x7809c4*/
      if ( v15 != -1 ) /*0x7809ca*/
        v3(DlgItem, 0x197u, v15, 0); /*0x7809d5*/
      v3(DlgItem, 0x49Du, 0, 0); /*0x7809e1*/
      InvalidateRect(DlgItem, 0, 0); /*0x7809e8*/
      DeleteAndZero((ObjectClass *)v18); /*0x7809f2*/
    }
  }
}



// ==== 0x00780A00  FormatLocaleStringWOL  this=-  sig=csp ====
wchar_t **__fastcall FormatLocaleStringWOL(wchar_t **a1, int a2)
{
  char **v3; // eax
  char *v4; // eax
  wchar_t *StringCSF; // eax
  DeleteAndZero v7; // [esp+8h] [ebp-Ch] BYREF

  v3 = FormatStringInt((char **)&v7.DeleteAndZero_field_0x08, a2, 2); /*0x780a0f*/
  ProcessStringAndCopy((char **)&v7.DeleteAndZero_field_0x04, aWolLocale, v3); /*0x780a1e*/
  DeleteAndZero((ObjectClass *)&v7.DeleteAndZero_field_0x08); /*0x780a27*/
  v4 = String::GetOrEmpty((String *)&v7.DeleteAndZero_field_0x04); /*0x780a3a*/
  StringCSF = GetStringCSF((wchar_t *)v4, 0, g_Str_File_wonline_cpp, 2909); /*0x780a43*/
  WideString::Assign((WideString *)&v7, StringCSF); /*0x780a4d*/
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&v7); /*0x780a65*/
  DeleteAndZero::Alt(&v7); /*0x780a6e*/
  DeleteAndZero((ObjectClass *)&v7.DeleteAndZero_field_0x04); /*0x780a77*/
  return a1; /*0x780a7e*/
}



// ==== 0x00780A90  FormatWOLPlayerInfo  this=Player  sig=csp ====
wchar_t **__fastcall FormatWOLPlayerInfo(wchar_t **a1, const char *a2)
{
  wchar_t **v4; // eax
  HashTable *v5; // esi
  int v6; // esi
  wchar_t *v7; // eax
  wchar_t **v8; // eax
  wchar_t **v9; // eax
  int v10; // esi
  const void *v11; // esi
  wchar_t *StringCSF; // eax
  wchar_t **v13; // eax
  wchar_t **v14; // eax
  wchar_t **v15; // eax
  int v16; // esi
  int v17; // eax
  wchar_t **v18; // eax
  wchar_t **v19; // eax
  wchar_t **v21; // [esp-Ch] [ebp-A8h]
  wchar_t **v22; // [esp-4h] [ebp-A0h]
  String v23; // [esp+10h] [ebp-8Ch] BYREF
  String v24; // [esp+18h] [ebp-84h] BYREF
  wchar_t *v25; // [esp+20h] [ebp-7Ch] BYREF
  wchar_t *v26; // [esp+24h] [ebp-78h] BYREF
  wchar_t *v27; // [esp+28h] [ebp-74h] BYREF
  WideString v28; // [esp+2Ch] [ebp-70h] BYREF
  const wchar_t *v29[27]; // [esp+30h] [ebp-6Ch] BYREF

  String::Assign(&v23, a2 + 36); /*0x780aa6*/
  v4 = CharStringToWide(&v26, (const char **)&v23); /*0x780abd*/
  WideString::AssignConcat((WideString *)v4, (wchar_t **)&v23.m_3[1], (wchar_t *)L" : ");
  DeleteAndZero::Alt((DeleteAndZero *)&v26); /*0x780acd*/
  String::ToLower(&v23); /*0x780ad6*/
  v5 = g_WOL_HashTable; /*0x780adb*/
  memset(v29, 0, sizeof(v29)); /*0x780aee*/
  if ( g_WOL_HashTable /*0x780b14*/
    && g_WOL_HashTable->HashTable_field_0x04
    && (v6 = *(_DWORD *)(*(_DWORD *)v5->__pad_0
                       + 4
                       * (((int (__thiscall *)(String *))g_WOL_HashTable->HashTable_field_0x18)(&v23)
                        & ((1 << v5->HashTable_field_0x0C) - 1)))) != 0 )
  {
    while ( !(unsigned __int8)String::Compare((String *)v6, (const char **)&v23) ) /*0x780b24*/
    {
      v6 = *(_DWORD *)(v6 + 112); /*0x780b2a*/
      if ( !v6 ) /*0x780b2f*/
        goto LABEL_6; /*0x780b2f*/
    }
    v11 = (const void *)(v6 + 4); /*0x780c0f*/
    if ( v11 ) /*0x780c14*/
      qmemcpy(v29, v11, sizeof(v29)); /*0x780c1f*/
    v22 = FormatWideString((wchar_t **)&v24.m_3[1], v29[7]); /*0x780c36*/
    v21 = WideString::Assign((WideString *)&v25, (wchar_t *)asc_82083C); /*0x780c49*/
    StringCSF = GetStringCSF(g_Str_TXT_RANK, 0, g_Str_File_wonline_cpp, 2937); /*0x780c59*/
    v13 = WideString::Assign(&v28, StringCSF); /*0x780c63*/
    v14 = WideString::ConcatAlloc((WideString *)v13, &v27, (const wchar_t **)v21); /*0x780c6a*/
    v15 = WideString::ConcatAlloc((WideString *)v14, &v26, (const wchar_t **)v22); /*0x780c71*/
    WideString::Append((WideString *)&v23.m_3[1], (const wchar_t **)v15); /*0x780c7b*/
    DeleteAndZero::Alt((DeleteAndZero *)&v26); /*0x780c84*/
    DeleteAndZero::Alt((DeleteAndZero *)&v27); /*0x780c8d*/
    DeleteAndZero::Alt((DeleteAndZero *)&v28); /*0x780c96*/
    DeleteAndZero::Alt((DeleteAndZero *)&v25); /*0x780c9f*/
    DeleteAndZero::Alt((DeleteAndZero *)&v24.m_3[1]); /*0x780ca8*/
  }
  else
  {
LABEL_6:
    v7 = GetStringCSF(g_Str_TXT_UNRANKED, 0, g_Str_File_wonline_cpp, 2939); /*0x780b31*/
    WideString::Append2((WideString *)&v23.m_3[1], v7); /*0x780b4c*/
  }
  String::Assign(&v24, a2 + 46); /*0x780b59*/
  if ( !String::Length(&v24) ) /*0x780b62*/
    String::Assign_Alt(&v24, a2 + 87); /*0x780b73*/
  if ( String::Length(&v24) ) /*0x780b7c*/
  {
    v8 = CharStringToWide(&v25, (const char **)&v24); /*0x780b8d*/
    v9 = FormatWideStringPrefix((wchar_t **)&v24.m_3[1], asc_84A69C, v8); /*0x780b9c*/
    WideString::Append((WideString *)&v23.m_3[1], (const wchar_t **)v9); /*0x780ba6*/
    DeleteAndZero::Alt((DeleteAndZero *)&v24.m_3[1]); /*0x780baf*/
    DeleteAndZero::Alt((DeleteAndZero *)&v25); /*0x780bb8*/
  }
  v10 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * (dword_B76548(&v23) & ((1 << dword_B7653C) - 1))); /*0x780bdc*/
  if ( v10 )
  {
    while ( !(unsigned __int8)String::Compare((String *)v10, (const char **)&v23) ) /*0x780bf5*/
    {
      v10 = *(_DWORD *)(v10 + 8); /*0x780bfb*/
      if ( !v10 ) /*0x780c00*/
        goto LABEL_27; /*0x780c00*/
    }
    if ( ppv )
    {
      if ( dword_B76534 )
      {
        v16 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * (dword_B76548(&v23) & ((1 << dword_B7653C) - 1))); /*0x780ceb*/
        if ( v16 )
        {
          while ( !(unsigned __int8)String::Compare((String *)v16, (const char **)&v23) ) /*0x780d00*/
          {
            v16 = *(_DWORD *)(v16 + 8); /*0x780d02*/
            if ( !v16 ) /*0x780d07*/
              goto LABEL_27; /*0x780d07*/
          }
          if ( v16 != -4 )
          {
            v17 = *(_DWORD *)(v16 + 4); /*0x780d16*/
            if ( v17 )
            {
              v18 = FormatLocaleStringWOL(&v25, v17); /*0x780d22*/
              v19 = FormatWideStringPrefix((wchar_t **)&v24.m_3[1], L" : ", v18);
              WideString::Append((WideString *)&v23.m_3[1], (const wchar_t **)v19); /*0x780d3b*/
              DeleteAndZero::Alt((DeleteAndZero *)&v24.m_3[1]); /*0x780d44*/
              DeleteAndZero::Alt((DeleteAndZero *)&v25); /*0x780d4d*/
            }
          }
        }
      }
    }
  }
LABEL_27:
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&v23.m_3[1]); /*0x780d52*/
  DeleteAndZero((ObjectClass *)&v24); /*0x780d62*/
  DeleteAndZero::Alt((DeleteAndZero *)&v23.m_3[1]); /*0x780d6b*/
  DeleteAndZero((ObjectClass *)&v23); /*0x780d74*/
  return a1; /*0x780d7b*/
}



// ==== 0x00780D90  Render_Format  this=-  sig=csp ====
wchar_t **__fastcall Render_Format(wchar_t **a1, String *a2)
{
  char *v4; // eax
  wchar_t *StringCSF; // eax
  int v7; // edi
  int v8; // esi
  char *v9; // eax

  v4 = String::GetOrEmpty_Alt(a2); /*0x780d9f*/
  if ( _strcmpi(v4, aRandmapSed) ) /*0x780da5*/
  {
    v7 = 0; /*0x780ddb*/
    if ( dword_A8B8D8 <= 0 ) /*0x780ddf*/
    {
LABEL_6:
      WideString::Assign((WideString *)a1, &g_TypeClass_DefaultString); /*0x780e0b*/
      return a1; /*0x780e17*/
    }
    else
    {
      while ( 1 ) /*0x780de6*/
      {
        v8 = *(_DWORD *)(dword_A8B8CC + 4 * v7); /*0x780de6*/
        v9 = String::GetOrEmpty_Alt(a2); /*0x780def*/
        if ( !_strcmpi(v9, (char *)(v8 + 88)) ) /*0x780df5*/
          break; /*0x780df5*/
        if ( ++v7 >= dword_A8B8D8 ) /*0x780e09*/
          goto LABEL_6; /*0x780e09*/
      }
      WideString::Assign((WideString *)a1, (wchar_t *)v8); /*0x780e21*/
      return a1; /*0x780e26*/
    }
  }
  else
  {
    StringCSF = GetStringCSF(aTxtRandomMapDe, 0, g_Str_File_wonline_cpp, 2970); /*0x780dc2*/
    WideString::Assign((WideString *)a1, StringCSF); /*0x780dca*/
    return a1; /*0x780dcf*/
  }
}



// ==== 0x00780E30  FormatWOLPlayerInfoForDisplay  this=-  sig=csp ====
wchar_t **__fastcall FormatWOLPlayerInfoForDisplay(wchar_t **a1, HWND a2, WPARAM wParam)
{
  wchar_t *StringCSF; // eax
  LRESULT v5; // eax
  char *v6; // eax
  wchar_t **v7; // eax
  wchar_t *v8; // eax
  const wchar_t *v10; // [esp-4h] [ebp-2B4h]
  wchar_t *v11; // [esp-4h] [ebp-2B4h]
  DeleteAndZero v12; // [esp+10h] [ebp-2A0h] BYREF
  String v13; // [esp+1Ch] [ebp-294h] BYREF
  int v14; // [esp+24h] [ebp-28Ch] BYREF
  int v15; // [esp+28h] [ebp-288h] BYREF
  int v16; // [esp+2Ch] [ebp-284h] BYREF
  int v17; // [esp+30h] [ebp-280h] BYREF
  char v18[108]; // [esp+34h] [ebp-27Ch] BYREF
  wchar_t *v19[67]; // [esp+A0h] [ebp-210h] BYREF
  char String[132]; // [esp+1ACh] [ebp-104h] BYREF
  wchar_t Buffer[64]; // [esp+230h] [ebp-80h] BYREF

  if ( wParam == -1 ) /*0x780e46*/
  {
    StringCSF = GetStringCSF(aSttLobbylistga, 0, g_Str_File_wonline_cpp, 2987); /*0x780e4d*/
LABEL_14:
    WideString::Assign((WideString *)a1, StringCSF); /*0x78106f*/
    return a1; /*0x781077*/
  }
  memset(v19, 0, sizeof(v19)); /*0x780e6a*/
  v5 = SendMessageA(a2, 0x199u, wParam, 0); /*0x780e6c*/
  if ( v5 < 0 || v5 >= (int)dword_B76AE0 ) /*0x780e80*/
  {
    StringCSF = GetStringCSF(aSttLobbylistga, 0, g_Str_File_wonline_cpp, 2994); /*0x78106a*/
    goto LABEL_14; /*0x78106a*/
  }
  qmemcpy(v19, (char *)dword_B76AE8 + 268 * v5, sizeof(v19)); /*0x780ea4*/
  String::Assign(&v13, (const char *)&v19[13]); /*0x780eb2*/
  CChatEventSink::EncodeString((CChatEventSink *)&v13, 39); /*0x780ebd*/
  memset(v18, 0, sizeof(v18)); /*0x780ecf*/
  v6 = String::GetOrEmpty(&v13); /*0x780ed5*/
  strncpy(&v18[36], v6, 0xAu); /*0x780ee0*/
  FormatWOLPlayerInfo((wchar_t **)&v12, v18); /*0x780ef0*/
  v7 = WideString::Assign((WideString *)&v12.DeleteAndZero_field_0x04, (wchar_t *)L", "); /*0x780efe*/
  WideString::Append((WideString *)&v12, (const wchar_t **)v7); /*0x780f08*/
  DeleteAndZero::Alt((DeleteAndZero *)&v12.DeleteAndZero_field_0x04); /*0x780f11*/
  if ( v19[10] == (wchar_t *)-1 ) /*0x780f20*/
  {
    v11 = GetStringCSF(g_Str_TXT_UNKNOWN_PING, 0, g_Str_File_wonline_cpp, 3024); /*0x780f6a*/
    WideString::Append2((WideString *)&v12, v11); /*0x780f6f*/
  }
  else
  {
    v10 = v19[10]; /*0x780f22*/
    v8 = GetStringCSF(aMsgPinginfo, 0, g_Str_File_wonline_cpp, 3021); /*0x780f34*/
    swprintf(Buffer, (const size_t)v8, v10); /*0x780f42*/
    WideString::Append2((WideString *)&v12, Buffer); /*0x780f52*/
  }
  strncpy(String, (const char *)&v19[56], 0x80u); /*0x780f89*/
  v14 = 0; /*0x780f95*/
  v15 = 0; /*0x780f99*/
  *(_DWORD *)&v13.m_3[1] = 0; /*0x780f9d*/
  v17 = 0; /*0x780fa1*/
  v16 = 0; /*0x780fa5*/
  unknown_libname_73(&v12.DeleteAndZero_field_0x08); /*0x780fa9*/
  ParseStringCommaInts(String, &v14, &v15, (int *)&v13.m_3[1], &v17, &v16, (void **)&v12.DeleteAndZero_field_0x08); /*0x780fd2*/
  if ( String::Length((String *)&v12.DeleteAndZero_field_0x08) ) /*0x780fdb*/
  {
    Render_Format((wchar_t **)&v12.DeleteAndZero_field_0x04, (String *)&v12.DeleteAndZero_field_0x08); /*0x780fec*/
    if ( WideString::Length((WideString *)&v12.DeleteAndZero_field_0x04) ) /*0x780ff5*/
    {
      WideString::Append2((WideString *)&v12, (wchar_t *)L", "); /*0x781007*/
      WideString::Append((WideString *)&v12, (const wchar_t **)&v12.DeleteAndZero_field_0x04); /*0x781015*/
    }
    DeleteAndZero::Alt((DeleteAndZero *)&v12.DeleteAndZero_field_0x04); /*0x78101e*/
  }
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&v12); /*0x78102a*/
  DeleteAndZero((ObjectClass *)&v12.DeleteAndZero_field_0x08); /*0x781033*/
  DeleteAndZero::Alt(&v12); /*0x78103c*/
  DeleteAndZero((ObjectClass *)&v13); /*0x781045*/
  return a1; /*0x78104c*/
}



// ==== 0x00781090  WOLobby_Get  this=-  sig=csp ====
wchar_t **__fastcall WOLobby_Get(wchar_t **a1, HWND a2, WPARAM wParam)
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



// ==== 0x00781130  FilterWOLGameListEntry  this=-  sig=csp ====
bool __fastcall sub_781130(_DWORD *a1, int a2, int a3, int a4)
{
  if ( g_WOL_GameListRender != 2 ) /*0x781142*/
  {
    if ( g_WOL_GameListRender != 3 ) /*0x78114e*/
    {
LABEL_8:
      if ( g_WOL_GameListRender == 2 ) /*0x781164*/
        goto LABEL_9; /*0x781164*/
      if ( g_WOL_GameListRender != 3 ) /*0x781175*/
        goto LABEL_15; /*0x781175*/
LABEL_12:
      if ( a2 != 1 ) /*0x78117a*/
        return 0; /*0x78117a*/
      goto LABEL_13; /*0x78117a*/
    }
    if ( a2 ) /*0x781152*/
      goto LABEL_12; /*0x781152*/
LABEL_6:
    if ( (a1[7] & 0x100) != 0 ) /*0x781157*/
      return 1; /*0x78115e*/
    goto LABEL_8; /*0x781157*/
  }
  if ( a2 == 1 ) /*0x781147*/
    goto LABEL_6; /*0x781147*/
LABEL_9:
  if ( a2 ) /*0x781168*/
    return 0; /*0x78116f*/
LABEL_13:
  if ( (a1[7] & 0x100) == 0 ) /*0x78117f*/
    return 1; /*0x781186*/
LABEL_15:
  if ( g_WOL_GameListRender != 4 ) /*0x781194*/
  {
    if ( g_WOL_GameListRender != 5 ) /*0x7811a0*/
    {
LABEL_23:
      if ( g_WOL_GameListRender == 4 ) /*0x7811b9*/
        goto LABEL_24; /*0x7811b9*/
      if ( g_WOL_GameListRender != 5 ) /*0x7811ca*/
        goto LABEL_31; /*0x7811ca*/
LABEL_27:
      if ( a2 != 1 ) /*0x7811cf*/
        return 0; /*0x7811cf*/
      goto LABEL_28; /*0x7811cf*/
    }
    if ( a2 ) /*0x7811a4*/
      goto LABEL_27; /*0x7811a4*/
LABEL_20:
    if ( a3 || a4 ) /*0x7811ac*/
      return 1; /*0x7811b3*/
    goto LABEL_23; /*0x7811ac*/
  }
  if ( a2 == 1 ) /*0x781199*/
    goto LABEL_20; /*0x781199*/
LABEL_24:
  if ( a2 ) /*0x7811bd*/
    return 0; /*0x7811c4*/
LABEL_28:
  if ( !a3 && !a4 ) /*0x7811d7*/
    return 1; /*0x7811de*/
LABEL_31:
  if ( g_WOL_GameListRender != 6 ) /*0x7811e9*/
  {
    if ( g_WOL_GameListRender != 7 ) /*0x7811f5*/
    {
LABEL_38:
      if ( g_WOL_GameListRender == 6 ) /*0x78120b*/
        goto LABEL_39; /*0x78120b*/
      if ( g_WOL_GameListRender != 7 ) /*0x78121c*/
        goto LABEL_45; /*0x78121c*/
LABEL_42:
      if ( a2 != 1 ) /*0x781221*/
        return 0; /*0x781221*/
      goto LABEL_43; /*0x781221*/
    }
    if ( a2 ) /*0x7811f9*/
      goto LABEL_42; /*0x7811f9*/
LABEL_36:
    if ( (a1[8] & 0x600) != 0 ) /*0x7811fe*/
      return 1; /*0x781205*/
    goto LABEL_38; /*0x7811fe*/
  }
  if ( a2 == 1 ) /*0x7811ee*/
    goto LABEL_36; /*0x7811ee*/
LABEL_39:
  if ( a2 ) /*0x78120f*/
    return 0; /*0x781216*/
LABEL_43:
  if ( (a1[8] & 0x600) == 0 ) /*0x78122a*/
    return 1; /*0x781231*/
LABEL_45:
  if ( g_WOL_GameListRender != 8 ) /*0x781237*/
  {
    if ( g_WOL_GameListRender != 9 ) /*0x781243*/
    {
LABEL_52:
      if ( g_WOL_GameListRender == 8 ) /*0x78125b*/
        goto LABEL_53; /*0x78125b*/
      if ( g_WOL_GameListRender != 9 ) /*0x78126c*/
        goto LABEL_59; /*0x78126c*/
LABEL_56:
      if ( a2 != 1 ) /*0x781271*/
        return 0; /*0x781271*/
      goto LABEL_57; /*0x781271*/
    }
    if ( a2 ) /*0x781247*/
      goto LABEL_56; /*0x781247*/
LABEL_50:
    if ( a1[5] ) /*0x781249*/
      return 1; /*0x781255*/
    goto LABEL_52; /*0x78124e*/
  }
  if ( a2 == 1 ) /*0x78123c*/
    goto LABEL_50; /*0x78123c*/
LABEL_53:
  if ( a2 ) /*0x78125f*/
    return 0; /*0x781266*/
LABEL_57:
  if ( !a1[5] ) /*0x781277*/
    return 1; /*0x781283*/
LABEL_59:
  if ( g_WOL_GameListRender != 10 ) /*0x78128f*/
  {
    if ( g_WOL_GameListRender != 11 ) /*0x78129b*/
    {
LABEL_67:
      if ( g_WOL_GameListRender == 10 ) /*0x7812c0*/
        goto LABEL_68; /*0x7812c0*/
      if ( g_WOL_GameListRender != 11 ) /*0x7812d1*/
        goto LABEL_75; /*0x7812d1*/
LABEL_71:
      if ( a2 != 1 ) /*0x7812d6*/
        return 0; /*0x7812d6*/
      goto LABEL_72; /*0x7812d6*/
    }
    if ( a2 ) /*0x78129f*/
      goto LABEL_71; /*0x78129f*/
LABEL_64:
    if ( dword_A8B238[0] == 4 && (a1[8] & 0x100) != 0 ) /*0x7812b3*/
      return 1; /*0x7812ba*/
    goto LABEL_67; /*0x7812b3*/
  }
  if ( a2 == 1 ) /*0x781294*/
    goto LABEL_64; /*0x781294*/
LABEL_68:
  if ( a2 ) /*0x7812c4*/
    return 0; /*0x7812cb*/
LABEL_72:
  if ( dword_A8B238[0] != 4 || (a1[8] & 0x100) == 0 ) /*0x7812ee*/
    return 1; /*0x7812f5*/
LABEL_75:
  if ( g_WOL_GameListRender != 12 ) /*0x7812fb*/
  {
    if ( g_WOL_GameListRender != 13 ) /*0x781307*/
    {
LABEL_84:
      if ( g_WOL_GameListRender == 12 ) /*0x781333*/
        goto LABEL_85; /*0x781333*/
      if ( g_WOL_GameListRender != 13 ) /*0x781344*/
        return 0; /*0x781344*/
LABEL_88:
      if ( a2 != 1 ) /*0x78134d*/
        return 0; /*0x78134d*/
      return dword_A8B238[0] == 4 && (a1[5] || (a1[8] & 0x100) != 0); /*0x78134d*/
    }
    if ( a2 ) /*0x78130b*/
      goto LABEL_88; /*0x78130b*/
LABEL_80:
    if ( dword_A8B238[0] != 4 || !a1[5] && (a1[8] & 0x100) == 0 ) /*0x781326*/
      return 1; /*0x78132d*/
    goto LABEL_84; /*0x781326*/
  }
  if ( a2 == 1 ) /*0x781300*/
    goto LABEL_80; /*0x781300*/
LABEL_85:
  if ( a2 ) /*0x781337*/
    return 0; /*0x78133e*/
  return dword_A8B238[0] == 4 && (a1[5] || (a1[8] & 0x100) != 0); /*0x781370*/
}



// ==== 0x00781380  sub_781380  this=-  sig=ida-proto ====
int __cdecl sub_781380(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax

  v2 = a1[1]; /*0x781388*/
  v3 = a2[1]; /*0x78138b*/
  if ( v2 >= v3 )
  {
    if ( v2 <= v3 )
      return 0; /*0x7813a9*/
    else
      return v3 != -1 ? 1 : -1;
  }
  else
  {
    v4 = -(v2 != -1); /*0x781395*/
    LOBYTE(v4) = v4 & 0xFE; /*0x781397*/
    return v4 + 1; /*0x781399*/
  }
}



// ==== 0x007813B0  sub_7813B0  this=-  sig=ida-proto ====
int __cdecl sub_7813B0(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = a1[1]; /*0x7813b8*/
  v3 = a2[1]; /*0x7813bb*/
  if ( v2 >= v3 ) /*0x7813c0*/
    return (v2 <= v3) - 1; /*0x7813d0*/
  else
    return 1; /*0x7813c2*/
}



// ==== 0x007813E0  sub_7813E0  this=-  sig=ida-proto ====
void __fastcall sub_7813E0(void *Base, char a2)
{
  signed int v2; // edx
  void *v3; // esi
  signed int v4; // eax
  int v5; // ebp
  signed int *v6; // ebx
  signed int v7; // ecx
  _DWORD v10[67]; // [esp+10h] [ebp-10Ch] BYREF

  v2 = dword_B76AE0; /*0x7813eb*/
  v3 = Base; /*0x7813f1*/
  v4 = 0; /*0x7813f9*/
  memset(v10, 0, sizeof(v10)); /*0x781405*/
  if ( (int)dword_B76AE0 > 0 ) /*0x781407*/
  {
    v5 = 0; /*0x78140b*/
    v6 = (signed int *)Base; /*0x78140d*/
    do /*0x781448*/
    {
      if ( v5 >= 0 && v4 < (int)dword_B76AE0 ) /*0x781419*/
      {
        qmemcpy(v10, (char *)dword_B76AE8 + v5, sizeof(v10)); /*0x78142d*/
        v3 = Base; /*0x78142f*/
      }
      v7 = v10[10]; /*0x781433*/
      *v6 = v4; /*0x781437*/
      v6[1] = v7; /*0x781439*/
      ++v4; /*0x78143c*/
      v5 += 268; /*0x78143d*/
      v6 += 2; /*0x781443*/
    }
    while ( v4 < v2 ); /*0x781448*/
  }
  if ( a2 ) /*0x781452*/
    qsort(v3, v2, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_781380); /*0x781459*/
  else
    qsort(v3, v2, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_7813B0); /*0x781464*/
}



// ==== 0x00781480  ObjectClass::GameListRenderWOL  this=ObjectClass  sig=csp ====
void GameListRenderWOL(ObjectClass *this)
{
  HWND v1; // eax
  int v2; // ebx
  HWND DlgItem; // esi
  LRESULT v4; // eax
  LRESULT v5; // eax
  int *v6; // edx
  signed int v7; // ebp
  int v8; // eax
  int v9; // ecx
  LPARAM *v10; // esi
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  LPARAM v15; // ebx
  int v16; // edi
  BOOL v17; // eax
  int v18; // ebp
  LRESULT v19; // eax
  unsigned __int16 v20; // si
  HWND v21; // ebx
  int v22; // esi
  int v23; // eax
  const wchar_t *v24; // eax
  wchar_t *v25; // eax
  bool v26; // cc
  char *v27; // eax
  HWND v28; // esi
  LRESULT v29; // eax
  char *v30; // eax
  LRESULT v31; // eax
  HWND v32; // eax
  int (__cdecl *v33)(const void *, const void *); // [esp-Ch] [ebp-2A8h]
  wchar_t *StringCSF; // [esp-Ch] [ebp-2A8h]
  wchar_t *v35; // [esp-Ch] [ebp-2A8h]
  wchar_t *v36; // [esp-Ch] [ebp-2A8h]
  const wchar_t *v37; // [esp-Ch] [ebp-2A8h]
  void *v38; // [esp+Ch] [ebp-290h] BYREF
  Gadget v39; // [esp+10h] [ebp-28Ch] BYREF
  int v40; // [esp+1Ch] [ebp-280h]
  int v41; // [esp+20h] [ebp-27Ch]
  int v42; // [esp+24h] [ebp-278h]
  int i; // [esp+28h] [ebp-274h]
  int v44; // [esp+2Ch] [ebp-270h] BYREF
  int v45; // [esp+30h] [ebp-26Ch] BYREF
  HWND v46; // [esp+34h] [ebp-268h]
  int referenceCount; // [esp+38h] [ebp-264h]
  int *v48; // [esp+3Ch] [ebp-260h]
  int v49; // [esp+40h] [ebp-25Ch]
  LPARAM *v50; // [esp+44h] [ebp-258h]
  String v51; // [esp+48h] [ebp-254h] BYREF
  String v52; // [esp+50h] [ebp-24Ch] BYREF
  LPARAM v53; // [esp+58h] [ebp-244h]
  int v54; // [esp+5Ch] [ebp-240h] BYREF
  int v55; // [esp+60h] [ebp-23Ch] BYREF
  int v56; // [esp+64h] [ebp-238h] BYREF
  HWND v57; // [esp+68h] [ebp-234h]
  _DWORD v58[67]; // [esp+6Ch] [ebp-230h] BYREF
  wchar_t Buffer[80]; // [esp+178h] [ebp-124h] BYREF
  char Destination[132]; // [esp+218h] [ebp-84h] BYREF

  v1 = (HWND)Dialog::FindByHandle((Dialog *)0x113); /*0x78148d*/
  v2 = 0; /*0x781492*/
  v57 = v1; /*0x781494*/
  if ( !v1 ) /*0x78149a*/
    return; /*0x78149a*/
  DlgItem = GetDlgItem(v1, 1774); /*0x7814ac*/
  v46 = DlgItem; /*0x7814b0*/
  if ( !DlgItem ) /*0x7814b4*/
    return; /*0x7814b4*/
  unknown_libname_73(&v52); /*0x7814c0*/
  v4 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x7814d3*/
  if ( v4 != -1 ) /*0x7814d8*/
    GetListBoxItemText(DlgItem, v4, (void **)&v52); /*0x7814e3*/
  unknown_libname_73(&v51); /*0x7814ec*/
  v5 = SendMessageA(DlgItem, 0x18Eu, 0, 0); /*0x7814f9*/
  if ( v5 != -1 ) /*0x7814fe*/
    GetListBoxItemText(DlgItem, v5, (void **)&v51); /*0x781509*/
  SendMessageA(DlgItem, 0x49Du, 0, 1); /*0x781517*/
  byte_B77E74 = 1; /*0x781519*/
  SendMessageA(DlgItem, 0x184u, 0, 0); /*0x781528*/
  referenceCount = stru_B76AC4.?; /*0x781538*/
  *(_DWORD *)&v52.m_3[1] = 1; /*0x78153c*/
  if ( g_WOL_GameListRender == 2 /*0x78157b*/
    || g_WOL_GameListRender == 3
    || g_WOL_GameListRender == 8
    || g_WOL_GameListRender == 9
    || g_WOL_GameListRender == 10
    || g_WOL_GameListRender == 11
    || g_WOL_GameListRender == 6
    || g_WOL_GameListRender == 7
    || g_WOL_GameListRender == 4
    || g_WOL_GameListRender == 5
    || g_WOL_GameListRender == 12
    || g_WOL_GameListRender == 13 )
  {
    *(_DWORD *)&v52.m_3[1] = 2; /*0x78157d*/
  }
  v6 = (int *)__2_YAPAXI_Z(8 * stru_B76AC4.?); /*0x781592*/
  v48 = v6; /*0x781599*/
  if ( v6 ) /*0x78159d*/
  {
    if ( g_WOL_GameListRender == 15 ) /*0x781649*/
    {
      v7 = stru_B76AC4.?; /*0x78164f*/
      v13 = 0; /*0x78165a*/
      memset(v58, 0, sizeof(v58)); /*0x781662*/
      if ( stru_B76AC4.? > 0 ) /*0x781664*/
      {
        do /*0x78169e*/
        {
          if ( v2 >= 0 && v13 < stru_B76AC4.? ) /*0x781670*/
            qmemcpy(v58, (const void *)(v2 + stru_B76AC4.occupant), sizeof(v58)); /*0x781684*/
          v14 = v58[10]; /*0x781686*/
          *v6 = v13; /*0x78168d*/
          v6[1] = v14; /*0x78168f*/
          ++v13; /*0x781692*/
          v2 += 268; /*0x781693*/
          v6 += 2; /*0x781699*/
        }
        while ( v13 < v7 ); /*0x78169e*/
      }
      v33 = (int (__cdecl *)(const void *, const void *))sub_7813B0; /*0x7816a0*/
      goto LABEL_28; /*0x7816a5*/
    }
  }
  else
  {
    g_WOL_GameListRender = 0; /*0x7815a3*/
  }
  v7 = stru_B76AC4.?; /*0x7815a9*/
  v8 = 0; /*0x7815b4*/
  memset(v58, 0, sizeof(v58)); /*0x7815bc*/
  if ( stru_B76AC4.? > 0 ) /*0x7815be*/
  {
    do /*0x7815f8*/
    {
      if ( v2 >= 0 && v8 < stru_B76AC4.? ) /*0x7815ca*/
        qmemcpy(v58, (const void *)(v2 + stru_B76AC4.occupant), sizeof(v58)); /*0x7815de*/
      v9 = v58[10]; /*0x7815e0*/
      *v6 = v8; /*0x7815e7*/
      v6[1] = v9; /*0x7815e9*/
      ++v8; /*0x7815ec*/
      v2 += 268; /*0x7815ed*/
      v6 += 2; /*0x7815f3*/
    }
    while ( v8 < v7 ); /*0x7815f8*/
  }
  v33 = (int (__cdecl *)(const void *, const void *))sub_781380; /*0x7815fa*/
LABEL_28:
  v10 = v48; /*0x7815ff*/
  qsort(v48, v7, 8u, v33); /*0x781607*/
  v11 = *(_DWORD *)&v52.m_3[1]; /*0x78160c*/
  v12 = referenceCount; /*0x781610*/
  for ( i = 0; i < 2; ++i ) /*0x781619*/
  {
    v49 = 0; /*0x78161f*/
    if ( v11 <= 0 ) /*0x781623*/
      continue; /*0x781623*/
    do /*0x781bff*/
    {
      *(_DWORD *)&v51.m_3[1] = 0; /*0x78162b*/
      if ( v12 <= 0 ) /*0x78162f*/
        goto LABEL_100; /*0x78162f*/
      v50 = v10; /*0x781638*/
      v53 = v12 - 1; /*0x78163c*/
      while ( 1 ) /*0x7816b0*/
      {
        v15 = *(_DWORD *)&v51.m_3[1]; /*0x7816b0*/
        memset(v58, 0, sizeof(v58)); /*0x7816bf*/
        if ( g_WOL_GameListRender == 1 ) /*0x7816c9*/
        {
          v15 = v53; /*0x7816e1*/
        }
        else if ( g_WOL_GameListRender && *v50 >= 0 && *v50 < v12 ) /*0x7816db*/
        {
          v15 = *v50; /*0x7816dd*/
        }
        if ( v15 >= 0 && v15 < stru_B76AC4.? ) /*0x7816ef*/
          qmemcpy(v58, (const void *)(stru_B76AC4.occupant + 268 * v15), sizeof(v58)); /*0x78170d*/
        if ( *(_DWORD *)&dword_A8B238 != 4 || (v58[8] & 0x800) == 0 && (v58[8] & 0x1000) == 0 ) /*0x78173a*/
        {
          strncpy(Destination, (const char *)&v58[56], 0x80u); /*0x781757*/
          v56 = 0; /*0x781763*/
          v55 = 0; /*0x781767*/
          v54 = 0; /*0x78176b*/
          v44 = 0; /*0x78176f*/
          v45 = 0; /*0x781773*/
          unknown_libname_73(&v38); /*0x781777*/
          ParseStringCommaInts(Destination, &v56, &v55, &v54, &v44, &v45, &v38); /*0x7817a3*/
          v16 = v54 + v58[3] - v44; /*0x7817b9*/
          v17 = v44 || v45; /*0x7817cb*/
          v18 = v58[2] - v17; /*0x7817d4*/
          if ( g_MenuStateFlags ) /*0x7817dd*/
          {
            if ( !v45 || v44 ) /*0x7817e5*/
            {
              if ( i != 1 ) /*0x7817f9*/
                goto LABEL_97; /*0x7817f9*/
            }
            else if ( i ) /*0x7817ed*/
            {
              goto LABEL_97; /*0x7817ed*/
            }
LABEL_67:
            if ( !FilterWOLGameListEntry(v58, v49, v45, v44) ) /*0x781824*/
            {
              swprintf(Buffer, (const size_t)aHsDD, (const wchar_t *const)&v58[13], v16, v18); /*0x781848*/
              v19 = SendMessageA(v46, 0x4C7u, 0xFFFFFFFF, (LPARAM)&v58[13]); /*0x781864*/
              v20 = v19; /*0x78186a*/
              SendMessageA(v46, 0x19Au, v19, v15); /*0x781878*/
              Gadget::InitProperties(&v39); /*0x781882*/
              *(_DWORD *)v39.__pad_0 = 1; /*0x781893*/
              WideString::Reassign((void **)&v39.m_1[3], Buffer); /*0x78189b*/
              WideString::Reassign((void **)&v39.m_5[3], &g_TypeClass_DefaultString); /*0x7818a9*/
              v40 = -1; /*0x7818bb*/
              if ( g_MenuStateFlags ) /*0x7818bf*/
              {
                if ( !v45 || v44 ) /*0x7818cf*/
                  v40 = (int)&off_808080; /*0x7818d7*/
              }
              else if ( v16 == v18 ) /*0x7818df*/
              {
                v40 = (int)&off_808080; /*0x7818e6*/
              }
              v21 = v46; /*0x7818f0*/
              v22 = v20 << 16; /*0x781900*/
              SendMessageA(v46, 0x4A8u, v22 | (unsigned __int16)dword_B77A8C, (LPARAM)&v39); /*0x781917*/
              *(_DWORD *)v39.__pad_0 = 0; /*0x781924*/
              WideString::Reassign((void **)&v39.m_5[3], &g_TypeClass_DefaultString); /*0x781928*/
              *(_DWORD *)v39.__pad_0 = 2; /*0x781931*/
              WideString::Reassign((void **)&v39.m_5[3], &g_TypeClass_DefaultString); /*0x78193e*/
              if ( *(_DWORD *)&dword_A8B238 != 4 ) /*0x78194a*/
                goto LABEL_80; /*0x78194a*/
              if ( (v58[8] & 0x100) != 0 ) /*0x78195c*/
              {
                v41 = HashTable::Find(&g_DialogHashTable, g_Str_File_wolclan_pcx, 0); /*0x78197f*/
                StringCSF = GetStringCSF(aTxtBattleclanG, 0, g_Str_File_wonline_cpp, 3351); /*0x781988*/
                WideString::Reassign((void **)&v39.m_5[3], StringCSF); /*0x781989*/
                goto LABEL_81; /*0x781989*/
              }
              if ( v58[5] || (v58[8] & 0x100) != 0 ) /*0x781996*/
              {
                v41 = HashTable::Find(&g_DialogHashTable, g_Str_File_woltrny_pcx, 0); /*0x7819b9*/
                v35 = GetStringCSF(aTxtTournamentG, 0, g_Str_File_wonline_cpp, 3356); /*0x7819c2*/
                WideString::Reassign((void **)&v39.m_5[3], v35); /*0x7819c3*/
              }
              else
              {
LABEL_80:
                v41 = HashTable::Find(&g_DialogHashTable, g_Str_File_gt18_pcx, 0); /*0x7819d5*/
                WideString::Reassign((void **)&v39.m_5[3], &g_TypeClass_DefaultString); /*0x7819e2*/
              }
LABEL_81:
              SendMessageA(v21, 0x4A8u, v22 | (unsigned __int16)dword_B778D0, (LPARAM)&v39); /*0x7819e7*/
              *(_DWORD *)v39.__pad_0 = 2; /*0x781a07*/
              WideString::Reassign((void **)&v39.m_5[3], &g_TypeClass_DefaultString); /*0x781a14*/
              if ( (v58[7] & 0x100) != 0 ) /*0x781a23*/
              {
                v41 = HashTable::Find(&g_DialogHashTable, g_Str_File_wolpriv_pcx, 0); /*0x781a46*/
                v36 = GetStringCSF(aTxtGamePasswor, 0, g_Str_File_wonline_cpp, 3370); /*0x781a4f*/
                WideString::Reassign((void **)&v39.m_5[3], v36); /*0x781a50*/
              }
              else
              {
                *(_DWORD *)v39.__pad_0 = 0; /*0x781a52*/
                WideString::Reassign((void **)&v39.m_5[3], &g_TypeClass_DefaultString); /*0x781a5f*/
              }
              SendMessageA(v21, 0x4A8u, v22 | (unsigned __int16)dword_B778CC, (LPARAM)&v39); /*0x781a7c*/
              *(_DWORD *)v39.__pad_0 = 0; /*0x781a82*/
              WideString::Reassign((void **)&v39.m_1[3], &g_TypeClass_DefaultString); /*0x781a8b*/
              WideString::Reassign((void **)&v39.m_5[3], &g_TypeClass_DefaultString); /*0x781a99*/
              if ( (v58[8] & 0x600) != 0 ) /*0x781aac*/
              {
                if ( v44 || !v45 ) /*0x781ab6*/
                {
                  *(_DWORD *)v39.__pad_0 = 2; /*0x781ac9*/
                  v23 = HashTable::Find(&g_DialogHashTable, g_Str_File_wolreslk_pcx, 0); /*0x781ad6*/
                }
                else
                {
                  *(_DWORD *)v39.__pad_0 = 2; /*0x781ab9*/
                  v23 = HashTable::Find(&g_DialogHashTable, g_Str_File_wolrslkob_pcx, 0); /*0x781ac6*/
                }
LABEL_92:
                v41 = v23; /*0x781afa*/
              }
              else if ( !v44 && v45 ) /*0x781ae0*/
              {
                *(_DWORD *)v39.__pad_0 = 2; /*0x781ae3*/
                v23 = HashTable::Find(&g_DialogHashTable, g_Str_File_wolob_pcx, 0); /*0x781af5*/
                goto LABEL_92; /*0x781af5*/
              }
              SendMessageA(v21, 0x4A8u, v22 | LOWORD(stru_B76AC4.nextObject), (LPARAM)&v39); /*0x781b18*/
              v24 = (const wchar_t *)v58[10]; /*0x781b1a*/
              if ( v58[10] == -1 ) /*0x781b24*/
              {
                *(_DWORD *)v39.__pad_0 = 1; /*0x781b2f*/
                WideString::Reassign((void **)&v39.m_1[3], asc_84A6E0); /*0x781b37*/
                v24 = (const wchar_t *)v58[10]; /*0x781b3c*/
              }
              else
              {
                v42 = v58[10]; /*0x781b45*/
                *(_DWORD *)v39.__pad_0 = 3; /*0x781b49*/
              }
              v37 = v24; /*0x781b51*/
              v25 = GetStringCSF(aWolGameping, 0, g_Str_File_wonline_cpp, 3410); /*0x781b63*/
              swprintf(Buffer, (const size_t)v25, v37); /*0x781b71*/
              WideString::Reassign((void **)&v39.m_5[3], Buffer); /*0x781b85*/
              SendMessageA(v21, 0x4A8u, v22 | (unsigned __int16)dword_B7643C, (LPARAM)&v39); /*0x781ba2*/
              DeleteAndZero::Alt((DeleteAndZero *)&v39.m_5[3]); /*0x781ba8*/
              DeleteAndZero::Alt((DeleteAndZero *)&v39.m_1[3]); /*0x781bb1*/
            }
          }
          else
          {
            if ( v16 == v18 ) /*0x781806*/
            {
              if ( i != 1 ) /*0x78180b*/
                goto LABEL_97; /*0x78180b*/
              goto LABEL_67; /*0x78180b*/
            }
            if ( !i ) /*0x781814*/
              goto LABEL_67; /*0x781814*/
          }
LABEL_97:
          DeleteAndZero((ObjectClass *)&v38); /*0x781bb6*/
        }
        v26 = ++*(_DWORD *)&v51.m_3[1] < referenceCount; /*0x781bd4*/
        v50 += 2; /*0x781bda*/
        --v53; /*0x781bde*/
        if ( !v26 ) /*0x781be2*/
          break; /*0x781be2*/
        v12 = referenceCount; /*0x7816aa*/
      }
      v11 = *(_DWORD *)&v52.m_3[1]; /*0x781be8*/
      v10 = v48; /*0x781bec*/
      v12 = referenceCount; /*0x781bf0*/
LABEL_100:
      ++v49; /*0x781bf4*/
    }
    while ( v49 < v11 ); /*0x781bff*/
  }
  if ( v10 ) /*0x781c19*/
    __3_YAXPAX_Z(v10); /*0x781c1c*/
  v27 = String::GetOrEmpty_Alt(&v52); /*0x781c28*/
  v28 = v46; /*0x781c2d*/
  v29 = SendMessageA(v46, 0x4C5u, 0, (LPARAM)v27); /*0x781c3f*/
  SendMessageA(v28, 0x186u, v29, 0); /*0x781c49*/
  v30 = String::GetOrEmpty_Alt(&v51); /*0x781c4f*/
  v31 = SendMessageA(v28, 0x4C5u, 0, (LPARAM)v30); /*0x781c5c*/
  if ( v31 != -1 ) /*0x781c61*/
    SendMessageA(v28, 0x197u, v31, 0); /*0x781c6b*/
  SendMessageA(v28, 0x49Du, 0, 0); /*0x781c75*/
  InvalidateRect(v28, 0, 0); /*0x781c7a*/
  if ( v57 == (HWND)Dialog::GetCurrent() ) /*0x781c8d*/
  {
    v32 = GetDlgItem(v57, 1344); /*0x781c95*/
    SetFocus(v32); /*0x781c9c*/
  }
  DeleteAndZero((ObjectClass *)&v51); /*0x781ca6*/
  DeleteAndZero((ObjectClass *)&v52); /*0x781caf*/
}



// ==== 0x00781CC0  sub_781CC0  this=-  sig=ida-proto ====
int __cdecl sub_781CC0(int a1, int a2)
{
  int v2; // eax
  int v3; // eax

  v2 = *(_DWORD *)(a1 + 8); /*0x781cc9*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x781cd2*/
    return _strcmpi(*(const void **)(a1 + 4), *(const void **)(a2 + 4)); /*0x781ce4*/
  v3 = -(v2 != 0); /*0x781cd6*/
  LOBYTE(v3) = v3 & 0xFE; /*0x781cd8*/
  return v3 + 1; /*0x781cd1*/
}



// ==== 0x00781CF0  sub_781CF0  this=-  sig=ida-proto ====
int __cdecl sub_781CF0(const void *a1, char **a2)
{
  char *v2; // eax
  int v3; // eax

  v2 = (char *)*((_DWORD *)a1 + 2); /*0x781cf9*/
  if ( v2 == a2[2] ) /*0x781d02*/
    return _strcmpi(a2[1], *((char **)a1 + 1)); /*0x781d14*/
  v3 = -(v2 != 0); /*0x781d06*/
  LOBYTE(v3) = v3 & 0xFE; /*0x781d08*/
  return v3 + 1; /*0x781d01*/
}



// ==== 0x00781D20  WOLobby::BuildStateList  this=WOLobby  sig=ida-proto ====
void __fastcall WOLobby::BuildStateList(char a1)
{
  signed int v1; // esi
  signed int v2; // ebx
  int *v3; // ebp
  int v4; // eax
  int *v5; // ebp
  char *v6; // edx
  int v7; // edx
  int v8; // eax
  int v9; // esi
  char *v10; // edi
  bool v11; // zf
  void **v12; // edi
  int v14; // [esp+14h] [ebp-84h]
  signed int v15; // [esp+14h] [ebp-84h]
  int v16[2]; // [esp+18h] [ebp-80h] BYREF
  void *Block; // [esp+20h] [ebp-78h]
  signed int v18; // [esp+24h] [ebp-74h]
  int *v19; // [esp+28h] [ebp-70h]
  _DWORD v20[27]; // [esp+2Ch] [ebp-6Ch] BYREF

  v1 = dword_B77900; /*0x781d29*/
  v2 = 0; /*0x781d30*/
  v16[0] = 0; /*0x781d3d*/
  v16[1] = 0; /*0x781d41*/
  Block = 0; /*0x781d45*/
  v18 = dword_B77900; /*0x781d49*/
  v3 = (int *)__2_YAPAXI_Z(12 * dword_B77900); /*0x781d52*/
  v19 = v3; /*0x781d59*/
  if ( v3 ) /*0x781d5d*/
  {
    v4 = 0; /*0x781d80*/
    memset(v20, 0, sizeof(v20)); /*0x781d88*/
    if ( v1 <= 0 ) /*0x781d8a*/
    {
LABEL_12:
      dword_B77900 = 0; /*0x781e34*/
      if ( a1 ) /*0x781e40*/
        qsort(v3, v1, 0xCu, (_CoreCrtNonSecureSearchSortCompareFunction)sub_781CC0); /*0x781e47*/
      else
        qsort(v3, v1, 0xCu, sub_781CF0); /*0x781e72*/
      if ( v1 > 0 ) /*0x781e7c*/
      {
        v7 = dword_B77900; /*0x781e82*/
        v15 = v1; /*0x781e88*/
        do /*0x781f5d*/
        {
          v8 = *v3; /*0x781e90*/
          if ( *v3 >= 0 && v8 < v16[0] ) /*0x781e9b*/
            qmemcpy(v20, (char *)Block + 108 * v8, sizeof(v20)); /*0x781eb3*/
          v9 = v7; /*0x781eb5*/
          if ( v7 >= dword_B77904 ) /*0x781ec1*/
          {
            DynamicArray::Grow(&dword_B77900); /*0x781ec8*/
            v7 = dword_B77900; /*0x781ecd*/
          }
          if ( v7 >= dword_B77904 ) /*0x781ed9*/
          {
            DynamicArray::Grow(&dword_B77900); /*0x781ee0*/
            v7 = dword_B77900; /*0x781ee5*/
          }
          if ( v9 < v7 ) /*0x781eed*/
          {
            memcpy((char *)dword_B77908 + 108 * v9 + 108, (char *)dword_B77908 + 108 * v9, 108 * v7 - 108 * v9); /*0x781f18*/
            v7 = dword_B77900; /*0x781f1d*/
          }
          v10 = (char *)dword_B77908 + 108 * v9; /*0x781f32*/
          if ( v10 ) /*0x781f37*/
          {
            qmemcpy(v10, v20, 0x6Cu); /*0x781f42*/
            v7 = dword_B77900; /*0x781f44*/
          }
          ++v7; /*0x781f4e*/
          v3 += 3; /*0x781f4f*/
          v11 = v15 == 1; /*0x781f52*/
          dword_B77900 = v7; /*0x781f53*/
          --v15; /*0x781f59*/
        }
        while ( !v11 ); /*0x781f5d*/
        v3 = v19; /*0x781f63*/
        v1 = v18; /*0x781f67*/
      }
      v16[0] = 0; /*0x781f6f*/
      if ( v1 > 0 ) /*0x781f73*/
      {
        v12 = (void **)(v3 + 1); /*0x781f75*/
        do /*0x781f8b*/
        {
          if ( *v12 ) /*0x781f78*/
            __3_YAXPAX_Z(*v12); /*0x781f7f*/
          v12 += 3; /*0x781f87*/
          --v1; /*0x781f8a*/
        }
        while ( v1 ); /*0x781f8b*/
      }
      __3_YAXPAX_Z(v3); /*0x781f8e*/
      v16[0] = 0; /*0x781f97*/
      __3_YAXPAX_Z(Block); /*0x781f9c*/
    }
    else
    {
      v14 = 0; /*0x781d90*/
      v5 = v3 + 2; /*0x781d94*/
      while ( 1 ) /*0x781d9d*/
      {
        if ( v4 >= 0 && v2 < (int)dword_B77900 ) /*0x781da7*/
          qmemcpy(v20, (char *)dword_B77908 + v4, sizeof(v20)); /*0x781dbb*/
        *(v5 - 2) = v2; /*0x781dbf*/
        v6 = (char *)__2_YAPAXI_Z(0xAu); /*0x781dc7*/
        *(v5 - 1) = (int)v6; /*0x781dce*/
        if ( !v6 ) /*0x781dd1*/
          break; /*0x781dd1*/
        strcpy(v6, (const char *)&v20[9]); /*0x781deb*/
        *v5 = v20[0] & 1; /*0x781dff*/
        DynamicClass::Insert(v16, v20, v16[0]); /*0x781e0c*/
        ++v2; /*0x781e11*/
        v5 += 3; /*0x781e12*/
        v14 += 108; /*0x781e22*/
        if ( v2 >= v18 ) /*0x781e26*/
        {
          v3 = v19; /*0x781e2c*/
          v1 = v18; /*0x781e30*/
          goto LABEL_12; /*0x781e30*/
        }
        v4 = v14; /*0x781d99*/
      }
      v16[0] = 0; /*0x781e4d*/
      __3_YAXPAX_Z(Block); /*0x781e56*/
    }
  }
  else
  {
    v16[0] = 0; /*0x781d63*/
    __3_YAXPAX_Z(Block); /*0x781d68*/
  }
}



// ==== 0x00781FB0  InsertGameSettings  this=-  sig=csp ====
char __fastcall InsertGameSettings(char *a1, char a2)
{
  char *v2; // ebp
  int owningHouseIndex; // edx
  char result; // al
  int v5; // ebx
  ObjectClass *nextObject; // ebp
  int v7; // ebp
  int v8; // esi
  int v9; // esi
  int v10; // esi
  char *v11; // edi
  int v12; // ebp
  int v13; // ebx
  int v14; // ebx
  int v15; // esi
  int v16; // esi
  int v19; // [esp+18h] [ebp-70h]
  _BYTE v20[108]; // [esp+1Ch] [ebp-6Ch] BYREF

  v2 = a1; /*0x781fb6*/
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x781fbd*/
  memset(v20, 0, sizeof(v20)); /*0x781fce*/
  v19 = g_WOL_UserList.owningHouseIndex; /*0x781fd8*/
  if ( !g_WOL_UserList.owningHouseIndex ) /*0x781fdc*/
    return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, 0); /*0x781ff1*/
  v5 = 0; /*0x781ff2*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x781ff6*/
    qmemcpy(v20, g_WOL_UserList.nextObject, sizeof(v20)); /*0x782007*/
  if ( (v20[0] & 1) != 0 ) /*0x78200e*/
  {
    nextObject = g_WOL_UserList.nextObject; /*0x782010*/
    do /*0x782038*/
    {
      if ( v5 >= g_WOL_UserList.owningHouseIndex ) /*0x782018*/
        break; /*0x782018*/
      ++v5; /*0x78201a*/
      nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x78201b*/
      if ( v5 >= 0 && v5 < g_WOL_UserList.owningHouseIndex ) /*0x782024*/
        qmemcpy(v20, nextObject, sizeof(v20)); /*0x782031*/
    }
    while ( (v20[0] & 1) != 0 ); /*0x782038*/
    v2 = a1; /*0x78203a*/
  }
  if ( (*v2 & 1) != 0 ) /*0x782042*/
  {
    v7 = 0; /*0x782048*/
    if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x78204c*/
      qmemcpy(v20, g_WOL_UserList.nextObject, sizeof(v20)); /*0x78205d*/
    if ( a2 ) /*0x782065*/
    {
      if ( v5 <= 0 ) /*0x782069*/
        goto LABEL_34; /*0x782069*/
      v8 = 0; /*0x78206f*/
      while ( _strcmpi(&v20[36], a1 + 36) < 0 ) /*0x782088*/
      {
        owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x78208a*/
        ++v7; /*0x782090*/
        v8 += 108; /*0x782091*/
        if ( v8 >= 0 && v7 < g_WOL_UserList.owningHouseIndex ) /*0x78209c*/
          qmemcpy(v20, (char *)g_WOL_UserList.nextObject + v8, sizeof(v20)); /*0x7820ae*/
        if ( v7 >= v5 ) /*0x7820b6*/
          goto LABEL_34; /*0x7820b6*/
      }
    }
    else
    {
      if ( v5 <= 0 ) /*0x7820bc*/
        goto LABEL_34; /*0x7820bc*/
      v9 = 0; /*0x7820be*/
      while ( _strcmpi(&v20[36], a1 + 36) > 0 ) /*0x7820d7*/
      {
        owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7820d9*/
        ++v7; /*0x7820df*/
        v9 += 108; /*0x7820e0*/
        if ( v9 >= 0 && v7 < g_WOL_UserList.owningHouseIndex ) /*0x7820eb*/
          qmemcpy(v20, (char *)g_WOL_UserList.nextObject + v9, sizeof(v20)); /*0x7820fd*/
        if ( v7 >= v5 ) /*0x782105*/
          goto LABEL_34; /*0x782105*/
      }
    }
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782109*/
LABEL_34:
    v10 = v7; /*0x78210f*/
    if ( v7 > owningHouseIndex ) /*0x782113*/
      v10 = owningHouseIndex; /*0x782115*/
    if ( v10 >= g_WOL_UserList.fallRate ) /*0x78211d*/
    {
      DynamicArray::Grow((DynamicArray *)&g_WOL_UserList.owningHouseIndex); /*0x782124*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782129*/
    }
    if ( owningHouseIndex >= g_WOL_UserList.fallRate ) /*0x782135*/
    {
      DynamicArray::Grow((DynamicArray *)&g_WOL_UserList.owningHouseIndex); /*0x78213c*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782141*/
    }
    if ( v10 < owningHouseIndex ) /*0x782149*/
    {
      memcpy( /*0x782174*/
        &g_WOL_UserList.nextObject->alignmentPadding69[108 * v10 + 3],
        (char *)g_WOL_UserList.nextObject + 108 * v10,
        108 * owningHouseIndex - 108 * v10);
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782179*/
    }
    result = (char)g_WOL_UserList.nextObject; /*0x782182*/
    v11 = (char *)g_WOL_UserList.nextObject + 108 * v10; /*0x78218d*/
    if ( !v11 ) /*0x782192*/
      goto LABEL_75; /*0x782192*/
    goto LABEL_74; /*0x782192*/
  }
  v12 = v5; /*0x78219f*/
  if ( v5 >= 0 && v5 < g_WOL_UserList.owningHouseIndex ) /*0x7821a5*/
    qmemcpy(v20, (char *)g_WOL_UserList.nextObject + 108 * v5, sizeof(v20)); /*0x7821bf*/
  if ( a2 ) /*0x7821c7*/
  {
    if ( v5 >= g_WOL_UserList.owningHouseIndex ) /*0x7821cb*/
      goto LABEL_65; /*0x7821cb*/
    v13 = 108 * v5; /*0x7821d7*/
    while ( _strcmpi(&v20[36], a1 + 36) < 0 ) /*0x7821f1*/
    {
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7821f3*/
      ++v12; /*0x7821f9*/
      v13 += 108; /*0x7821fa*/
      if ( v13 >= 0 && v12 < g_WOL_UserList.owningHouseIndex ) /*0x782201*/
        qmemcpy(v20, (char *)g_WOL_UserList.nextObject + v13, sizeof(v20)); /*0x782215*/
      if ( v12 >= v19 ) /*0x78221b*/
        goto LABEL_65; /*0x78221b*/
    }
  }
  else
  {
    if ( v5 >= g_WOL_UserList.owningHouseIndex ) /*0x782221*/
      goto LABEL_65; /*0x782221*/
    v14 = 108 * v5; /*0x782229*/
    while ( _strcmpi(&v20[36], a1 + 36) > 0 ) /*0x782243*/
    {
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782245*/
      ++v12; /*0x78224b*/
      v14 += 108; /*0x78224c*/
      if ( v14 >= 0 && v12 < g_WOL_UserList.owningHouseIndex ) /*0x782253*/
        qmemcpy(v20, (char *)g_WOL_UserList.nextObject + v14, sizeof(v20)); /*0x782267*/
      if ( v12 >= v19 ) /*0x78226d*/
        goto LABEL_65; /*0x78226d*/
    }
  }
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782271*/
LABEL_65:
  v15 = v12; /*0x782277*/
  if ( v12 > owningHouseIndex ) /*0x78227b*/
    v15 = owningHouseIndex; /*0x78227d*/
  if ( v15 >= g_WOL_UserList.fallRate ) /*0x782285*/
  {
    DynamicArray::Grow((DynamicArray *)&g_WOL_UserList.owningHouseIndex); /*0x78228c*/
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782291*/
  }
  if ( owningHouseIndex >= g_WOL_UserList.fallRate ) /*0x78229d*/
  {
    DynamicArray::Grow((DynamicArray *)&g_WOL_UserList.owningHouseIndex); /*0x7822a4*/
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7822a9*/
  }
  if ( v15 < owningHouseIndex ) /*0x7822b1*/
  {
    memcpy( /*0x7822dc*/
      &g_WOL_UserList.nextObject->alignmentPadding69[108 * v15 + 3],
      (char *)g_WOL_UserList.nextObject + 108 * v15,
      108 * owningHouseIndex - 108 * v15);
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7822e1*/
  }
  v16 = 3 * v15; /*0x7822f0*/
  result = 9 * v16; /*0x7822f3*/
  v11 = (char *)g_WOL_UserList.nextObject + 36 * v16; /*0x7822f6*/
  if ( !v11 ) /*0x7822fb*/
    goto LABEL_75; /*0x7822fb*/
LABEL_74:
  qmemcpy(v11, a1, 0x6Cu); /*0x7822fd*/
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782308*/
LABEL_75:
  g_WOL_UserList.owningHouseIndex = owningHouseIndex + 1; /*0x78230e*/
  return result; /*0x781fea*/
}



// ==== 0x00782320  InsertBuddyList  this=-  sig=csp ====
int __fastcall InsertBuddyList(const char *a1, char a2)
{
  ObjectClass *nextObject; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // edi
  int v8; // ebx
  int v9; // ebp
  bool v10; // sf
  HashTable *v11; // esi
  int v12; // esi
  const void *v13; // esi
  int v14; // eax
  int v15; // ebx
  int v16; // ebp
  HashTable *v17; // esi
  int v18; // esi
  const void *v19; // esi
  int v20; // ebp
  int v21; // ebx
  HashTable *v22; // esi
  int v23; // esi
  const void *v24; // esi
  HashTable *v25; // esi
  int v26; // edi
  int v27; // esi
  const void *v28; // esi
  int v29; // ebx
  int v30; // ebp
  HashTable *v31; // esi
  int v32; // esi
  const void *v33; // esi
  int v34; // eax
  int v35; // ebp
  HashTable *v36; // esi
  int v37; // esi
  const void *v38; // esi
  int v39; // ebp
  HashTable *v40; // esi
  int v41; // esi
  const void *v42; // esi
  int v43; // esi
  int owningHouseIndex; // ecx
  char *v45; // edi
  _BYTE v47[240]; // [esp+10h] [ebp-F0h] BYREF

  *(_DWORD *)&v47[20] = a1; /*0x782332*/
  unknown_libname_73(v47); /*0x782336*/
  *(_DWORD *)&v47[16] = -1; /*0x782349*/
  memset(&v47[132], 0, 0x6Cu); /*0x782351*/
  String::Assign_Bool((String *)v47, a1 + 36); /*0x78235b*/
  String::ToLower((String *)v47); /*0x782364*/
  if ( g_WOL_HashTable ) /*0x782371*/
  {
    *(_DWORD *)&v47[12] = 0; /*0x78237d*/
    if ( (unsigned __int8)HashTable::LookupString(g_WOL_HashTable, (const char **)v47, &v47[12]) ) /*0x782385*/
    {
      if ( *(_DWORD *)&v47[12] ) /*0x782394*/
        qmemcpy(&v47[132], *(const void **)&v47[12], 0x6Cu); /*0x7823a2*/
      *(_DWORD *)&v47[16] = *(_DWORD *)&v47[160]; /*0x7823ab*/
    }
  }
  memset(&v47[24], 0, 0x6Cu); /*0x7823c0*/
  *(_DWORD *)&v47[12] = g_WOL_UserList.owningHouseIndex; /*0x7823c6*/
  if ( g_WOL_UserList.owningHouseIndex ) /*0x7823ca*/
  {
    *(_DWORD *)&v47[8] = 0; /*0x7823e3*/
    if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7823ed*/
      qmemcpy(&v47[24], g_WOL_UserList.nextObject, 0x6Cu); /*0x7823fa*/
    if ( (v47[24] & 1) != 0 ) /*0x782401*/
    {
      nextObject = g_WOL_UserList.nextObject; /*0x782403*/
      do /*0x782435*/
      {
        v5 = *(_DWORD *)&v47[8]; /*0x782409*/
        if ( *(int *)&v47[8] >= *(int *)&v47[12] ) /*0x78240f*/
          break; /*0x78240f*/
        nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x782413*/
        v6 = ++*(_DWORD *)&v47[8]; /*0x782416*/
        if ( v5 + 1 >= 0 && v6 < g_WOL_UserList.owningHouseIndex ) /*0x782421*/
          qmemcpy(&v47[24], nextObject, 0x6Cu); /*0x78242e*/
      }
      while ( (v47[24] & 1) != 0 ); /*0x782435*/
    }
    if ( (**(_BYTE **)&v47[20] & 1) != 0 ) /*0x78243e*/
    {
      *(_DWORD *)&v47[4] = 0; /*0x782446*/
      if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x78244e*/
        qmemcpy(&v47[24], g_WOL_UserList.nextObject, 0x6Cu); /*0x78245b*/
      String::Assign_Bool((String *)v47, &v47[60]); /*0x782466*/
      String::ToLower((String *)v47); /*0x78246f*/
      v7 = -1; /*0x78247a*/
      if ( g_WOL_HashTable ) /*0x78247f*/
      {
        *(_DWORD *)&v47[12] = 0; /*0x78248b*/
        if ( (unsigned __int8)HashTable::LookupString(g_WOL_HashTable, (const char **)v47, &v47[12]) ) /*0x782493*/
        {
          if ( *(_DWORD *)&v47[12] ) /*0x7824a2*/
            qmemcpy(&v47[132], *(const void **)&v47[12], 0x6Cu); /*0x7824b0*/
          v7 = *(_DWORD *)&v47[160]; /*0x7824b2*/
        }
      }
      if ( a2 ) /*0x7824bf*/
      {
        if ( *(int *)&v47[8] > 0 ) /*0x7824c7*/
        {
          v8 = *(_DWORD *)&v47[4]; /*0x7824cd*/
          v9 = 0; /*0x7824d1*/
          do /*0x782597*/
          {
            if ( v7 >= *(int *)&v47[16] || v7 <= 0 ) /*0x7824db*/
            {
              if ( *(_DWORD *)&v47[16] != -1 || v7 <= 0 ) /*0x7824ea*/
                goto LABEL_69; /*0x7824ea*/
              v8 = *(_DWORD *)&v47[4]; /*0x7824f0*/
            }
            ++v8; /*0x7824f4*/
            v10 = v9 + 108 < 0; /*0x7824f5*/
            v9 += 108; /*0x7824f5*/
            *(_DWORD *)&v47[4] = v8; /*0x7824f8*/
            if ( !v10 && v8 < g_WOL_UserList.owningHouseIndex ) /*0x782504*/
              qmemcpy(&v47[24], (char *)g_WOL_UserList.nextObject + v9, 0x6Cu); /*0x782518*/
            String::Assign_Bool((String *)v47, &v47[60]); /*0x782523*/
            String::ToLower((String *)v47); /*0x78252c*/
            v11 = g_WOL_HashTable; /*0x782531*/
            v7 = -1; /*0x782537*/
            if ( g_WOL_HashTable ) /*0x78253c*/
            {
              if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x78253e*/
              {
                v12 = *(_DWORD *)(*(_DWORD *)v11->__pad_0 /*0x782553*/
                                + 4 * HashMap::ComputeIndex_2((int *)g_WOL_HashTable->__pad_0, (int)v47));
                if ( v12 ) /*0x782558*/
                {
                  while ( !(unsigned __int8)String::Compare((String *)v12, (const char **)v47) ) /*0x782568*/
                  {
                    v12 = *(_DWORD *)(v12 + 112); /*0x78256a*/
                    if ( !v12 ) /*0x78256f*/
                      goto LABEL_45; /*0x78256f*/
                  }
                  v13 = (const void *)(v12 + 4); /*0x782577*/
                  if ( v13 ) /*0x78257c*/
                    qmemcpy(&v47[132], v13, 0x6Cu); /*0x78258a*/
                  v7 = *(_DWORD *)&v47[160]; /*0x78258c*/
                }
              }
            }
LABEL_45:
            ; /*0x782593*/
          }
          while ( v8 < *(int *)&v47[8] ); /*0x782597*/
        }
      }
      else if ( *(int *)&v47[8] > 0 ) /*0x7825a4*/
      {
        v14 = *(_DWORD *)&v47[16]; /*0x7825aa*/
        v15 = *(_DWORD *)&v47[4]; /*0x7825ae*/
        v16 = 0; /*0x7825b2*/
        while ( v7 > v14 && v7 > 0 || v14 == -1 && v7 > 0 ) /*0x7825cd*/
        {
          ++v15; /*0x7825d3*/
          v16 += 108; /*0x7825d4*/
          if ( v16 >= 0 && v15 < g_WOL_UserList.owningHouseIndex ) /*0x7825df*/
            qmemcpy(&v47[24], (char *)g_WOL_UserList.nextObject + v16, 0x6Cu); /*0x7825f2*/
          String::Assign_Bool((String *)v47, &v47[60]); /*0x7825fd*/
          String::ToLower((String *)v47); /*0x782606*/
          v17 = g_WOL_HashTable; /*0x78260b*/
          v7 = -1; /*0x782611*/
          if ( g_WOL_HashTable ) /*0x782616*/
          {
            if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x782618*/
            {
              v18 = *(_DWORD *)(*(_DWORD *)v17->__pad_0 /*0x78262d*/
                              + 4 * HashMap::ComputeIndex_2((int *)g_WOL_HashTable->__pad_0, (int)v47));
              if ( v18 ) /*0x782632*/
              {
                while ( !(unsigned __int8)String::Compare((String *)v18, (const char **)v47) ) /*0x782642*/
                {
                  v18 = *(_DWORD *)(v18 + 112); /*0x782644*/
                  if ( !v18 ) /*0x782649*/
                    goto LABEL_66; /*0x782649*/
                }
                v19 = (const void *)(v18 + 4); /*0x782651*/
                if ( v19 ) /*0x782656*/
                  qmemcpy(&v47[132], v19, 0x6Cu); /*0x782664*/
                v7 = *(_DWORD *)&v47[160]; /*0x782666*/
              }
            }
          }
LABEL_66:
          if ( v15 >= *(int *)&v47[8] ) /*0x782671*/
            goto LABEL_160; /*0x782671*/
          v14 = *(_DWORD *)&v47[16]; /*0x7825b6*/
        }
        *(_DWORD *)&v47[4] = v15; /*0x78267c*/
LABEL_69:
        if ( *(int *)&v47[4] < *(int *)&v47[8] ) /*0x78268a*/
        {
          v20 = 108 * *(_DWORD *)&v47[4]; /*0x782698*/
          do /*0x782768*/
          {
            if ( *(_DWORD *)&v47[16] != v7 || _strcmpi(&v47[60], (char *)(*(_DWORD *)&v47[20] + 36)) >= 0 ) /*0x7826bc*/
              break; /*0x7826bc*/
            v21 = *(_DWORD *)&v47[4] + 1; /*0x7826c6*/
            v10 = v20 + 108 < 0; /*0x7826c7*/
            v20 += 108; /*0x7826c7*/
            ++*(_DWORD *)&v47[4]; /*0x7826ca*/
            if ( !v10 && v21 < g_WOL_UserList.owningHouseIndex ) /*0x7826d6*/
              qmemcpy(&v47[24], (char *)g_WOL_UserList.nextObject + v20, 0x6Cu); /*0x7826e9*/
            String::Assign_Bool((String *)v47, &v47[60]); /*0x7826f4*/
            String::ToLower((String *)v47); /*0x7826fd*/
            v22 = g_WOL_HashTable; /*0x782702*/
            v7 = -1; /*0x782708*/
            if ( g_WOL_HashTable ) /*0x78270d*/
            {
              if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x78270f*/
              {
                v23 = *(_DWORD *)(*(_DWORD *)v22->__pad_0 /*0x782724*/
                                + 4 * HashMap::ComputeIndex_2((int *)g_WOL_HashTable->__pad_0, (int)v47));
                if ( v23 ) /*0x782729*/
                {
                  while ( !(unsigned __int8)String::Compare((String *)v23, (const char **)v47) ) /*0x782739*/
                  {
                    v23 = *(_DWORD *)(v23 + 112); /*0x78273b*/
                    if ( !v23 ) /*0x782740*/
                      goto LABEL_85; /*0x782740*/
                  }
                  v24 = (const void *)(v23 + 4); /*0x782748*/
                  if ( v24 ) /*0x78274d*/
                    qmemcpy(&v47[132], v24, 0x6Cu); /*0x78275b*/
                  v7 = *(_DWORD *)&v47[160]; /*0x78275d*/
                }
              }
            }
LABEL_85:
            ;
          }
          while ( v21 < *(int *)&v47[8] ); /*0x782768*/
        }
      }
    }
    else
    {
      *(_DWORD *)&v47[4] = *(_DWORD *)&v47[8]; /*0x782779*/
      if ( *(int *)&v47[8] >= 0 && *(int *)&v47[8] < g_WOL_UserList.owningHouseIndex ) /*0x782781*/
        qmemcpy(&v47[24], (char *)g_WOL_UserList.nextObject + 108 * *(_DWORD *)&v47[8], 0x6Cu); /*0x782796*/
      String::Assign_Bool((String *)v47, &v47[60]); /*0x7827a1*/
      String::ToLower((String *)v47); /*0x7827aa*/
      v25 = g_WOL_HashTable; /*0x7827af*/
      v26 = -1; /*0x7827b5*/
      if ( g_WOL_HashTable ) /*0x7827ba*/
      {
        if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x7827bc*/
        {
          v27 = *(_DWORD *)(*(_DWORD *)v25->__pad_0 /*0x7827d1*/
                          + 4 * HashMap::ComputeIndex_2((int *)g_WOL_HashTable->__pad_0, (int)v47));
          if ( v27 ) /*0x7827d6*/
          {
            while ( !(unsigned __int8)String::Compare((String *)v27, (const char **)v47) ) /*0x7827e6*/
            {
              v27 = *(_DWORD *)(v27 + 112); /*0x7827e8*/
              if ( !v27 ) /*0x7827ed*/
                goto LABEL_99; /*0x7827ed*/
            }
            v28 = (const void *)(v27 + 4); /*0x7827f5*/
            if ( v28 ) /*0x7827fa*/
              qmemcpy(&v47[132], v28, 0x6Cu); /*0x782808*/
            v26 = *(_DWORD *)&v47[160]; /*0x78280a*/
          }
        }
      }
LABEL_99:
      if ( a2 ) /*0x78281b*/
      {
        if ( *(int *)&v47[8] < *(int *)&v47[12] ) /*0x782823*/
        {
          v29 = *(_DWORD *)&v47[4]; /*0x78282b*/
          v30 = 108 * *(_DWORD *)&v47[8]; /*0x782835*/
          do /*0x7828fc*/
          {
            if ( v26 >= *(int *)&v47[16] || v26 <= 0 ) /*0x782840*/
            {
              if ( *(_DWORD *)&v47[16] != -1 || v26 <= 0 ) /*0x78284f*/
                goto LABEL_143; /*0x78284f*/
              v29 = *(_DWORD *)&v47[4]; /*0x782855*/
            }
            ++v29; /*0x782859*/
            v10 = v30 + 108 < 0; /*0x78285a*/
            v30 += 108; /*0x78285a*/
            *(_DWORD *)&v47[4] = v29; /*0x78285d*/
            if ( !v10 && v29 < g_WOL_UserList.owningHouseIndex ) /*0x782869*/
              qmemcpy(&v47[24], (char *)g_WOL_UserList.nextObject + v30, 0x6Cu); /*0x78287d*/
            String::Assign_Bool((String *)v47, &v47[60]); /*0x782888*/
            String::ToLower((String *)v47); /*0x782891*/
            v31 = g_WOL_HashTable; /*0x782896*/
            v26 = -1; /*0x78289c*/
            if ( g_WOL_HashTable ) /*0x7828a1*/
            {
              if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x7828a3*/
              {
                v32 = *(_DWORD *)(*(_DWORD *)v31->__pad_0 /*0x7828b8*/
                                + 4 * HashMap::ComputeIndex_2((int *)g_WOL_HashTable->__pad_0, (int)v47));
                if ( v32 ) /*0x7828bd*/
                {
                  while ( !(unsigned __int8)String::Compare((String *)v32, (const char **)v47) ) /*0x7828cd*/
                  {
                    v32 = *(_DWORD *)(v32 + 112); /*0x7828cf*/
                    if ( !v32 ) /*0x7828d4*/
                      goto LABEL_119; /*0x7828d4*/
                  }
                  v33 = (const void *)(v32 + 4); /*0x7828dc*/
                  if ( v33 ) /*0x7828e1*/
                    qmemcpy(&v47[132], v33, 0x6Cu); /*0x7828ef*/
                  v26 = *(_DWORD *)&v47[160]; /*0x7828f1*/
                }
              }
            }
LABEL_119:
            ; /*0x7828f8*/
          }
          while ( v29 < *(int *)&v47[12] ); /*0x7828fc*/
        }
      }
      else if ( *(int *)&v47[8] < *(int *)&v47[12] ) /*0x782909*/
      {
        v15 = *(_DWORD *)&v47[4]; /*0x782913*/
        v34 = *(_DWORD *)&v47[16]; /*0x78291d*/
        v35 = 108 * *(_DWORD *)&v47[8]; /*0x782921*/
        while ( v26 > v34 && v26 > 0 || v34 == -1 && v26 > 0 ) /*0x78293d*/
        {
          ++v15; /*0x782943*/
          v35 += 108; /*0x782944*/
          if ( v35 >= 0 && v15 < g_WOL_UserList.owningHouseIndex ) /*0x78294f*/
            qmemcpy(&v47[24], (char *)g_WOL_UserList.nextObject + v35, 0x6Cu); /*0x782963*/
          String::Assign_Bool((String *)v47, &v47[60]); /*0x78296e*/
          String::ToLower((String *)v47); /*0x782977*/
          v36 = g_WOL_HashTable; /*0x78297c*/
          v26 = -1; /*0x782982*/
          if ( g_WOL_HashTable ) /*0x782987*/
          {
            if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x782989*/
            {
              v37 = *(_DWORD *)(*(_DWORD *)v36->__pad_0 /*0x7829a6*/
                              + 4
                              * (((int (__thiscall *)(_BYTE *))g_WOL_HashTable->HashTable_field_0x18)(v47)
                               & ((1 << v36->HashTable_field_0x0C) - 1)));
              if ( v37 ) /*0x7829ab*/
              {
                while ( !(unsigned __int8)String::Compare((String *)v37, (const char **)v47) ) /*0x7829bb*/
                {
                  v37 = *(_DWORD *)(v37 + 112); /*0x7829bd*/
                  if ( !v37 ) /*0x7829c2*/
                    goto LABEL_140; /*0x7829c2*/
                }
                v38 = (const void *)(v37 + 4); /*0x7829ca*/
                if ( v38 ) /*0x7829cf*/
                  qmemcpy(&v47[132], v38, 0x6Cu); /*0x7829dd*/
                v26 = *(_DWORD *)&v47[160]; /*0x7829df*/
              }
            }
          }
LABEL_140:
          if ( v15 >= *(int *)&v47[12] ) /*0x7829ea*/
            goto LABEL_160; /*0x7829ea*/
          v34 = *(_DWORD *)&v47[16]; /*0x782926*/
        }
        *(_DWORD *)&v47[4] = v15; /*0x7829f5*/
LABEL_143:
        v15 = *(_DWORD *)&v47[4]; /*0x7829f9*/
        if ( *(int *)&v47[4] < *(int *)&v47[12] ) /*0x782a03*/
        {
          v39 = 108 * *(_DWORD *)&v47[4]; /*0x782a0f*/
          do /*0x782ae0*/
          {
            if ( *(_DWORD *)&v47[16] != v26 || _strcmpi(&v47[60], (char *)(*(_DWORD *)&v47[20] + 36)) >= 0 ) /*0x782a33*/
              break; /*0x782a33*/
            ++v15; /*0x782a39*/
            v39 += 108; /*0x782a3a*/
            if ( v39 >= 0 && v15 < g_WOL_UserList.owningHouseIndex ) /*0x782a45*/
              qmemcpy(&v47[24], (char *)g_WOL_UserList.nextObject + v39, 0x6Cu); /*0x782a59*/
            String::Assign_Bool((String *)v47, &v47[60]); /*0x782a64*/
            String::ToLower((String *)v47); /*0x782a6d*/
            v40 = g_WOL_HashTable; /*0x782a72*/
            v26 = -1; /*0x782a78*/
            if ( g_WOL_HashTable ) /*0x782a7d*/
            {
              if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x782a7f*/
              {
                v41 = *(_DWORD *)(*(_DWORD *)v40->__pad_0 /*0x782a9c*/
                                + 4
                                * (((int (__thiscall *)(_BYTE *))g_WOL_HashTable->HashTable_field_0x18)(v47)
                                 & ((1 << v40->HashTable_field_0x0C) - 1)));
                if ( v41 ) /*0x782aa1*/
                {
                  while ( !(unsigned __int8)String::Compare((String *)v41, (const char **)v47) ) /*0x782ab1*/
                  {
                    v41 = *(_DWORD *)(v41 + 112); /*0x782ab3*/
                    if ( !v41 ) /*0x782ab8*/
                      goto LABEL_159; /*0x782ab8*/
                  }
                  v42 = (const void *)(v41 + 4); /*0x782ac0*/
                  if ( v42 ) /*0x782ac5*/
                    qmemcpy(&v47[132], v42, 0x6Cu); /*0x782ad3*/
                  v26 = *(_DWORD *)&v47[160]; /*0x782ad5*/
                }
              }
            }
LABEL_159:
            ;
          }
          while ( v15 < *(int *)&v47[12] ); /*0x782ae0*/
LABEL_160:
          *(_DWORD *)&v47[4] = v15; /*0x782ae6*/
        }
      }
    }
    v43 = *(_DWORD *)&v47[4]; /*0x782aea*/
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782aee*/
    if ( *(int *)&v47[4] > g_WOL_UserList.owningHouseIndex ) /*0x782af6*/
      v43 = g_WOL_UserList.owningHouseIndex; /*0x782af8*/
    if ( v43 >= g_WOL_UserList.fallRate ) /*0x782b00*/
    {
      DynamicArray::Grow((DynamicArray *)&g_WOL_UserList.owningHouseIndex); /*0x782b07*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782b0c*/
    }
    if ( owningHouseIndex >= g_WOL_UserList.fallRate ) /*0x782b18*/
    {
      DynamicArray::Grow((DynamicArray *)&g_WOL_UserList.owningHouseIndex); /*0x782b1f*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782b24*/
    }
    if ( v43 < owningHouseIndex ) /*0x782b2c*/
    {
      memcpy( /*0x782b57*/
        &g_WOL_UserList.nextObject->alignmentPadding69[108 * v43 + 3],
        (char *)g_WOL_UserList.nextObject + 108 * v43,
        108 * owningHouseIndex - 108 * v43);
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782b5c*/
    }
    v45 = (char *)g_WOL_UserList.nextObject + 108 * v43; /*0x782b70*/
    if ( v45 ) /*0x782b75*/
    {
      qmemcpy(v45, *(const void **)&v47[20], 0x6Cu); /*0x782b80*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782b82*/
    }
    g_WOL_UserList.owningHouseIndex = owningHouseIndex + 1; /*0x782b89*/
  }
  else
  {
    DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, 0); /*0x7823d3*/
  }
  return DeleteAndZero((ObjectClass *)v47); /*0x782b98*/
}



// ==== 0x00782BB0  FindBuddyList  this=-  sig=ida-proto ====
char __fastcall FindBuddyList(_BYTE *a1, char a2)
{
  ObjectClass *nextObject; // eax
  int v4; // ebp
  int v5; // ebx
  unsigned int v6; // kr04_4
  unsigned int v7; // kr08_4
  int v8; // ecx
  bool v9; // sf
  int v10; // ebx
  unsigned int v11; // kr0C_4
  unsigned int v12; // kr10_4
  int v13; // ecx
  int v14; // ebx
  unsigned int v15; // kr14_4
  unsigned int v16; // kr18_4
  int v17; // ecx
  int v18; // ebx
  unsigned int v19; // kr1C_4
  unsigned int v20; // kr20_4
  int v21; // ecx
  int v22; // ebx
  unsigned int v23; // kr24_4
  unsigned int v24; // kr28_4
  int v25; // ebp
  int v26; // ebx
  unsigned int v27; // kr2C_4
  unsigned int v28; // kr30_4
  int v29; // [esp+Ch] [ebp-78h]
  int owningHouseIndex; // [esp+14h] [ebp-70h]
  _BYTE v32[108]; // [esp+18h] [ebp-6Ch] BYREF

  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782bd2*/
  memset(v32, 0, sizeof(v32)); /*0x782bd6*/
  if ( !g_WOL_UserList.owningHouseIndex ) /*0x782bd8*/
    return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, 0); /*0x782beb*/
  nextObject = g_WOL_UserList.nextObject; /*0x782bec*/
  v4 = 0; /*0x782bf2*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x782bf7*/
    qmemcpy(v32, g_WOL_UserList.nextObject, sizeof(v32)); /*0x782c04*/
  while ( (v32[0] & 1) != 0 ) /*0x782c0b*/
  {
    if ( v4 >= g_WOL_UserList.owningHouseIndex ) /*0x782c0f*/
      break; /*0x782c0f*/
    ++v4; /*0x782c11*/
    nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x782c12*/
    if ( v4 >= 0 && v4 < g_WOL_UserList.owningHouseIndex ) /*0x782c1b*/
      qmemcpy(v32, nextObject, sizeof(v32)); /*0x782c28*/
  }
  if ( (*a1 & 1) == 0 ) /*0x782c38*/
  {
    v29 = v4; /*0x782e3d*/
    if ( v4 >= 0 && v4 < g_WOL_UserList.owningHouseIndex ) /*0x782e45*/
      qmemcpy(v32, (char *)g_WOL_UserList.nextObject + 108 * v4, sizeof(v32)); /*0x782e60*/
    if ( a2 ) /*0x782e68*/
    {
      if ( v4 >= g_WOL_UserList.owningHouseIndex ) /*0x782e70*/
        return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782e70*/
      v18 = 108 * v4; /*0x782e7d*/
      while ( 1 ) /*0x782e89*/
      {
        v19 = strlen(&v32[87]) + 1; /*0x782e89*/
        v20 = strlen(a1 + 87) + 1; /*0x782e9e*/
        if ( v19 == 1 ) /*0x782ea5*/
          break; /*0x782ea5*/
        if ( v20 == 1 ) /*0x782ead*/
        {
          if ( (int)(v19 - 1) <= 0 ) /*0x782f08*/
            break; /*0x782f08*/
        }
        else if ( _strcmpi(&v32[87], a1 + 87) >= 0 ) /*0x782ebf*/
        {
          break; /*0x782ebf*/
        }
        v21 = v29 + 1; /*0x782ec9*/
        v9 = v18 + 108 < 0; /*0x782eca*/
        v18 += 108; /*0x782eca*/
        ++v29; /*0x782ecd*/
        if ( !v9 && v21 < g_WOL_UserList.owningHouseIndex ) /*0x782edc*/
          qmemcpy(v32, (char *)g_WOL_UserList.nextObject + v18, sizeof(v32)); /*0x782eef*/
        if ( v29 >= owningHouseIndex ) /*0x782efb*/
          return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782efb*/
      }
    }
    else
    {
      if ( v4 >= g_WOL_UserList.owningHouseIndex ) /*0x782f12*/
        return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782f12*/
      v22 = 108 * v4; /*0x782f23*/
      while ( 1 ) /*0x782f2f*/
      {
        v23 = strlen(&v32[87]) + 1; /*0x782f2f*/
        v24 = strlen(a1 + 87) + 1; /*0x782f44*/
        if ( v23 == 1 ) /*0x782f4b*/
          break; /*0x782f4b*/
        if ( v24 == 1 ) /*0x782f4f*/
        {
          if ( (int)(v23 - 1) <= 0 ) /*0x782f97*/
            break; /*0x782f97*/
        }
        else if ( _strcmpi(a1 + 87, &v32[87]) >= 0 ) /*0x782f61*/
        {
          break; /*0x782f61*/
        }
        ++v4; /*0x782f63*/
        v9 = v22 + 108 < 0; /*0x782f64*/
        v22 += 108; /*0x782f64*/
        v29 = v4; /*0x782f67*/
        if ( !v9 && v4 < g_WOL_UserList.owningHouseIndex ) /*0x782f73*/
          qmemcpy(v32, (char *)g_WOL_UserList.nextObject + v22, sizeof(v32)); /*0x782f87*/
        if ( v4 >= owningHouseIndex ) /*0x782f8d*/
          return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782f8d*/
      }
    }
    v25 = v29; /*0x782f9b*/
    if ( v29 >= owningHouseIndex ) /*0x782fa5*/
      return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782fa5*/
    v26 = 108 * v29; /*0x782fb2*/
    while ( 1 ) /*0x782fbe*/
    {
      v27 = strlen(&v32[87]) + 1; /*0x782fbe*/
      v28 = strlen(a1 + 87) + 1; /*0x782fd3*/
      if ( v27 == 1 ) /*0x782fda*/
        goto LABEL_91; /*0x782fda*/
      if ( v28 == 1 ) /*0x782fde*/
        break; /*0x782fde*/
      if ( _strcmpi(a1 + 87, &v32[87]) ) /*0x782fe6*/
        return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782ff0*/
LABEL_84:
      if ( _strcmpi(&v32[36], a1 + 36) < 0 ) /*0x783009*/
      {
        ++v25; /*0x78300b*/
        v9 = v26 + 108 < 0; /*0x78300c*/
        v26 += 108; /*0x78300c*/
        v29 = v25; /*0x78300f*/
        if ( !v9 && v25 < g_WOL_UserList.owningHouseIndex ) /*0x78301b*/
          qmemcpy(v32, (char *)g_WOL_UserList.nextObject + v26, sizeof(v32)); /*0x78302f*/
        if ( v25 < owningHouseIndex ) /*0x783035*/
          continue; /*0x783035*/
      }
      return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x783035*/
    }
    if ( (int)(v27 - 1) > 0 ) /*0x783059*/
      return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x783059*/
LABEL_91:
    if ( (int)(v28 - 1) > 0 ) /*0x78305d*/
      return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x78305d*/
    goto LABEL_84; /*0x78305d*/
  }
  v29 = 0; /*0x782c40*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x782c48*/
    qmemcpy(v32, g_WOL_UserList.nextObject, sizeof(v32)); /*0x782c59*/
  if ( a2 ) /*0x782c61*/
  {
    if ( v4 <= 0 ) /*0x782c69*/
      return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782c69*/
    v5 = 0; /*0x782c6f*/
    while ( 1 ) /*0x782c7a*/
    {
      v6 = strlen(&v32[87]) + 1; /*0x782c7a*/
      v7 = strlen(a1 + 87) + 1; /*0x782c8d*/
      if ( v6 == 1 ) /*0x782c94*/
        break; /*0x782c94*/
      if ( v7 == 1 ) /*0x782c9c*/
      {
        if ( (int)(v6 - 1) <= 0 ) /*0x782cf0*/
          break; /*0x782cf0*/
      }
      else if ( _strcmpi(&v32[87], a1 + 87) >= 0 ) /*0x782cae*/
      {
        break; /*0x782cae*/
      }
      v8 = v29 + 1; /*0x782cb8*/
      v9 = v5 + 108 < 0; /*0x782cb9*/
      v5 += 108; /*0x782cb9*/
      ++v29; /*0x782cbc*/
      if ( !v9 && v8 < g_WOL_UserList.owningHouseIndex ) /*0x782ccc*/
        qmemcpy(v32, (char *)g_WOL_UserList.nextObject + v5, sizeof(v32)); /*0x782ce0*/
      if ( v29 >= v4 ) /*0x782ce6*/
        return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782ce6*/
    }
  }
  else
  {
    if ( v4 <= 0 ) /*0x782cfa*/
      return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782cfa*/
    v10 = 0; /*0x782d00*/
    while ( 1 ) /*0x782d0b*/
    {
      v11 = strlen(&v32[87]) + 1; /*0x782d0b*/
      v12 = strlen(a1 + 87) + 1; /*0x782d20*/
      if ( v11 == 1 ) /*0x782d27*/
        break; /*0x782d27*/
      if ( v12 == 1 ) /*0x782d2b*/
      {
        if ( (int)(v11 - 1) <= 0 ) /*0x782d79*/
          break; /*0x782d79*/
      }
      else if ( _strcmpi(a1 + 87, &v32[87]) >= 0 ) /*0x782d3d*/
      {
        break; /*0x782d3d*/
      }
      v13 = v29 + 1; /*0x782d43*/
      v9 = v10 + 108 < 0; /*0x782d44*/
      v10 += 108; /*0x782d44*/
      ++v29; /*0x782d47*/
      if ( !v9 && v13 < g_WOL_UserList.owningHouseIndex ) /*0x782d56*/
        qmemcpy(v32, (char *)g_WOL_UserList.nextObject + v10, sizeof(v32)); /*0x782d69*/
      if ( v29 >= v4 ) /*0x782d6f*/
        return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782d6f*/
    }
  }
  if ( v29 < v4 ) /*0x782d83*/
  {
    v14 = 108 * v29; /*0x782d8f*/
    while ( 1 ) /*0x782d9b*/
    {
      v15 = strlen(&v32[87]) + 1; /*0x782d9b*/
      v16 = strlen(a1 + 87) + 1; /*0x782dae*/
      if ( v15 == 1 ) /*0x782db5*/
        goto LABEL_50; /*0x782db5*/
      if ( v16 == 1 ) /*0x782db9*/
        break; /*0x782db9*/
      if ( _strcmpi(a1 + 87, &v32[87]) ) /*0x782dc1*/
        return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782dcb*/
LABEL_43:
      if ( _strcmpi(&v32[36], a1 + 36) < 0 ) /*0x782de8*/
      {
        v17 = v29 + 1; /*0x782df2*/
        v9 = v14 + 108 < 0; /*0x782df3*/
        v14 += 108; /*0x782df3*/
        ++v29; /*0x782df6*/
        if ( !v9 && v17 < g_WOL_UserList.owningHouseIndex ) /*0x782e05*/
          qmemcpy(v32, (char *)g_WOL_UserList.nextObject + v14, sizeof(v32)); /*0x782e18*/
        if ( v29 < v4 ) /*0x782e1e*/
          continue; /*0x782e1e*/
      }
      return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782e1e*/
    }
    if ( (int)(v15 - 1) > 0 ) /*0x782e2b*/
      return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782e2b*/
LABEL_50:
    if ( (int)(v16 - 1) > 0 ) /*0x782e33*/
      return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782e33*/
    goto LABEL_43; /*0x782e33*/
  }
  return DynamicClass::Insert((DynamicClass *)&g_WOL_UserList.owningHouseIndex, a1, v29); /*0x782be6*/
}



// ==== 0x007830C0  sub_7830C0  this=-  sig=ida-proto ====
int __cdecl sub_7830C0(signed int *a1, signed int *a2)
{
  signed int v2; // eax
  int v3; // eax
  signed int v5; // eax
  signed int v6; // ecx
  int v7; // eax
  signed int v8; // eax
  signed int v9; // eax
  _BYTE v10[108]; // [esp+4h] [ebp-D8h] BYREF
  _BYTE v11[108]; // [esp+70h] [ebp-6Ch] BYREF

  v2 = a1[2]; /*0x7830ca*/
  if ( v2 == a2[2] )
  {
    v5 = a1[1]; /*0x7830e9*/
    v6 = a2[1]; /*0x7830ec*/
    if ( v5 >= v6 )
    {
      if ( v5 <= v6 )
      {
        memset(v11, 0, sizeof(v11)); /*0x783126*/
        memset(v10, 0, sizeof(v10)); /*0x783137*/
        v8 = *a1; /*0x783139*/
        if ( *a1 >= 0 && v8 < (int)dword_B77900 ) /*0x783147*/
          qmemcpy(v11, (char *)dword_B77908 + 108 * v8, sizeof(v11)); /*0x78315b*/
        v9 = *a2; /*0x78315d*/
        if ( *a2 >= 0 && v9 < (int)dword_B77900 ) /*0x783165*/
          qmemcpy(v10, (char *)dword_B77908 + 108 * v9, sizeof(v10)); /*0x783179*/
        return _strcmpi(&v11[36], &v10[36]); /*0x783188*/
      }
      else
      {
        return v6 != -1 ? 1 : -1;
      }
    }
    else
    {
      v7 = -(v5 != -1); /*0x7830f7*/
      LOBYTE(v7) = v7 & 0xFE; /*0x7830f9*/
      return v7 + 1; /*0x7830fb*/
    }
  }
  else
  {
    v3 = -(v2 != 0); /*0x7830dc*/
    LOBYTE(v3) = v3 & 0xFE; /*0x7830df*/
    return v3 + 1; /*0x7830e1*/
  }
}



// ==== 0x007831A0  sub_7831A0  this=-  sig=ida-proto ====
int __cdecl sub_7831A0(signed int *a1, signed int *a2)
{
  signed int v2; // eax
  int v3; // eax
  signed int v5; // eax
  signed int v6; // ecx
  signed int v7; // eax
  signed int v8; // eax
  char v9[108]; // [esp+4h] [ebp-D8h] BYREF
  char v10[108]; // [esp+70h] [ebp-6Ch] BYREF

  v2 = a1[2]; /*0x7831aa*/
  if ( v2 == a2[2] ) /*0x7831b8*/
  {
    v5 = a1[1]; /*0x7831c9*/
    v6 = a2[1]; /*0x7831cc*/
    if ( v5 <= v6 ) /*0x7831d1*/
    {
      if ( v5 >= v6 ) /*0x7831de*/
      {
        memset(v10, 0, sizeof(v10)); /*0x7831fb*/
        memset(v9, 0, sizeof(v9)); /*0x78320c*/
        v7 = *a1; /*0x78320e*/
        if ( *a1 >= 0 && v7 < (int)dword_B77900 ) /*0x78321c*/
          qmemcpy(v10, (char *)dword_B77908 + 108 * v7, sizeof(v10)); /*0x783230*/
        v8 = *a2; /*0x783232*/
        if ( *a2 >= 0 && v8 < (int)dword_B77900 ) /*0x78323a*/
          qmemcpy(v9, (char *)dword_B77908 + 108 * v8, sizeof(v9)); /*0x78324e*/
        return _strcmpi(&v10[36], &v9[36]); /*0x78325d*/
      }
      else
      {
        return 1; /*0x7831e0*/
      }
    }
    else
    {
      return -1; /*0x7831d3*/
    }
  }
  else
  {
    v3 = -(v2 != 0); /*0x7831bc*/
    LOBYTE(v3) = v3 & 0xFE; /*0x7831bf*/
    return v3 + 1; /*0x7831c1*/
  }
}



// ==== 0x00783270  SortWOLPlayerList  this=-  sig=ida-proto ====
void __fastcall SortWOLPlayerList(char a1)
{
  signed int v1; // esi
  signed int v2; // ebx
  _DWORD *v3; // ebp
  int v4; // eax
  _DWORD *v5; // ebp
  int v6; // edx
  int *v7; // ebp
  int v8; // eax
  int v9; // esi
  char *v10; // edi
  bool v11; // zf
  size_t v13; // [esp+10h] [ebp-F8h]
  signed int v14; // [esp+10h] [ebp-F8h]
  void *v15; // [esp+14h] [ebp-F4h] BYREF
  int v16; // [esp+18h] [ebp-F0h]
  int v17[2]; // [esp+1Ch] [ebp-ECh] BYREF
  void *Block; // [esp+24h] [ebp-E4h]
  void *v19; // [esp+28h] [ebp-E0h]
  const void *v20; // [esp+2Ch] [ebp-DCh] BYREF
  _DWORD v21[27]; // [esp+30h] [ebp-D8h] BYREF
  _DWORD v22[27]; // [esp+9Ch] [ebp-6Ch] BYREF

  v1 = dword_B77900; /*0x783279*/
  v2 = 0; /*0x78327f*/
  v17[0] = 0; /*0x783288*/
  v17[1] = 0; /*0x783290*/
  Block = 0; /*0x783294*/
  v13 = dword_B77900; /*0x783298*/
  v3 = __2_YAPAXI_Z(12 * dword_B77900); /*0x7832a1*/
  v19 = v3; /*0x7832a8*/
  if ( v3 ) /*0x7832ac*/
  {
    v4 = 0; /*0x7832cf*/
    memset(v21, 0, sizeof(v21)); /*0x7832d7*/
    if ( v1 > 0 ) /*0x7832d9*/
    {
      v16 = 0; /*0x7832df*/
      v5 = v3 + 1; /*0x7832e3*/
      while ( 1 ) /*0x7832ec*/
      {
        if ( v4 >= 0 && v2 < (int)dword_B77900 ) /*0x7832f6*/
        {
          qmemcpy(v21, (char *)dword_B77908 + v4, sizeof(v21)); /*0x78330a*/
          v1 = v13; /*0x78330c*/
        }
        *(v5 - 1) = v2; /*0x783310*/
        *v5 = -1; /*0x783317*/
        unknown_libname_73(&v15); /*0x78331e*/
        memset(v22, 0, sizeof(v22)); /*0x783331*/
        String::Assign_Bool(&v15, (const char *)&v21[9]); /*0x78333c*/
        String::ToLower((const char **)&v15); /*0x783345*/
        if ( g_WOL_HashTable ) /*0x783352*/
        {
          v20 = 0; /*0x78335e*/
          if ( HashTable::LookupString((_DWORD *)g_WOL_HashTable, (const char **)&v15, &v20) ) /*0x783366*/
          {
            if ( v20 ) /*0x783375*/
            {
              qmemcpy(v22, v20, sizeof(v22)); /*0x783385*/
              v1 = v13; /*0x783387*/
            }
            *v5 = v22[7]; /*0x783392*/
          }
        }
        v5[1] = v21[0] & 1; /*0x7833a0*/
        DynamicClass::Insert(v17, v21, v17[0]); /*0x7833ad*/
        DeleteAndZero(&v15); /*0x7833b6*/
        ++v2; /*0x7833bf*/
        v5 += 3; /*0x7833c3*/
        v16 += 108; /*0x7833c8*/
        if ( v2 >= v1 ) /*0x7833cc*/
          break; /*0x7833cc*/
        v4 = v16; /*0x7832e8*/
      }
      v3 = v19; /*0x7833d2*/
    }
    if ( a1 ) /*0x7833de*/
      qsort(v3, v1, 0xCu, (_CoreCrtNonSecureSearchSortCompareFunction)sub_7830C0); /*0x7833e5*/
    else
      qsort(v3, v1, 0xCu, sub_7831A0); /*0x7833f0*/
    v6 = 0; /*0x7833f8*/
    dword_B77900 = 0; /*0x7833fc*/
    if ( v1 > 0 ) /*0x783402*/
    {
      v7 = (int *)v19; /*0x783408*/
      v14 = v1; /*0x78340c*/
      do /*0x7834e1*/
      {
        v8 = *v7; /*0x783414*/
        if ( *v7 >= 0 && v8 < v17[0] ) /*0x78341f*/
          qmemcpy(v21, (char *)Block + 108 * v8, sizeof(v21)); /*0x783437*/
        v9 = v6; /*0x783439*/
        if ( v6 >= dword_B77904 ) /*0x783445*/
        {
          DynamicArray::Grow(&dword_B77900); /*0x78344c*/
          v6 = dword_B77900; /*0x783451*/
        }
        if ( v6 >= dword_B77904 ) /*0x78345d*/
        {
          DynamicArray::Grow(&dword_B77900); /*0x783464*/
          v6 = dword_B77900; /*0x783469*/
        }
        if ( v9 < v6 ) /*0x783471*/
        {
          memcpy((char *)dword_B77908 + 108 * v9 + 108, (char *)dword_B77908 + 108 * v9, 108 * v6 - 108 * v9); /*0x78349c*/
          v6 = dword_B77900; /*0x7834a1*/
        }
        v10 = (char *)dword_B77908 + 108 * v9; /*0x7834b6*/
        if ( v10 ) /*0x7834bb*/
        {
          qmemcpy(v10, v21, 0x6Cu); /*0x7834c6*/
          v6 = dword_B77900; /*0x7834c8*/
        }
        ++v6; /*0x7834d2*/
        v7 += 3; /*0x7834d3*/
        v11 = v14 == 1; /*0x7834d6*/
        dword_B77900 = v6; /*0x7834d7*/
        --v14; /*0x7834dd*/
      }
      while ( !v11 ); /*0x7834e1*/
    }
    v17[0] = 0; /*0x7834ed*/
    __3_YAXPAX_Z(v19); /*0x7834f2*/
    v17[0] = 0; /*0x7834fb*/
    __3_YAXPAX_Z(Block); /*0x783500*/
  }
  else
  {
    v17[0] = 0; /*0x7832b2*/
    __3_YAXPAX_Z(Block); /*0x7832b7*/
  }
}



// ==== 0x00783520  sub_783520  this=-  sig=ida-proto ====
int __cdecl sub_783520(const char *a1, const char *a2)
{
  unsigned int v2; // kr04_4
  unsigned int v3; // kr08_4

  v2 = strlen(a1) + 1; /*0x783532*/
  v3 = strlen(a2) + 1; /*0x78353e*/
  if ( v2 == 1 ) /*0x783545*/
    return (int)(v3 - 1) > 0; /*0x783545*/
  if ( v3 != 1 ) /*0x783549*/
    return _strcmpi(a1, a2); /*0x783558*/
  if ( (int)(v2 - 1) <= 0 ) /*0x78355b*/
    return (int)(v3 - 1) > 0; /*0x78356b*/
  else
    return -1; /*0x78355f*/
}



// ==== 0x00783570  sub_783570  this=-  sig=ida-proto ====
int __cdecl sub_783570(const char *a1, const char *a2)
{
  unsigned int v2; // kr04_4
  unsigned int v3; // kr08_4

  v2 = strlen(a1) + 1; /*0x783582*/
  v3 = strlen(a2) + 1; /*0x78358e*/
  if ( v2 == 1 ) /*0x783595*/
    return (int)(v3 - 1) > 0; /*0x783595*/
  if ( v3 != 1 ) /*0x783599*/
    return _strcmpi(a2, a1); /*0x7835a8*/
  if ( (int)(v2 - 1) <= 0 ) /*0x7835ab*/
    return (int)(v3 - 1) > 0; /*0x7835bb*/
  else
    return -1; /*0x7835af*/
}



// ==== 0x007835C0  sub_7835C0  this=-  sig=ida-proto ====
int __cdecl sub_7835C0(int a1, signed int *a2)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  const char *v5; // edx
  unsigned int v6; // kr04_4
  unsigned int v7; // kr08_4
  signed int v8; // eax
  signed int v9; // eax
  _BYTE v10[108]; // [esp+4h] [ebp-D8h] BYREF
  _BYTE v11[108]; // [esp+70h] [ebp-6Ch] BYREF

  v2 = *(_DWORD *)(a1 + 8); /*0x7835d5*/
  if ( v2 != a2[2] ) /*0x7835da*/
  {
    v3 = -(v2 != 0); /*0x7835de*/
    LOBYTE(v3) = v3 & 0xFE; /*0x7835e1*/
    return v3 + 1; /*0x7835ea*/
  }
  v5 = (const char *)a2[1]; /*0x7835eb*/
  v6 = strlen(*(const char **)(a1 + 4)) + 1; /*0x7835fb*/
  v7 = strlen(v5) + 1; /*0x783607*/
  if ( v6 != 1 ) /*0x78360e*/
  {
    if ( v7 != 1 ) /*0x783616*/
    {
      result = _strcmpi(*(const void **)(a1 + 4), v5); /*0x78361e*/
      if ( result ) /*0x783628*/
        return result; /*0x783628*/
      goto LABEL_6; /*0x783628*/
    }
    if ( (int)(v6 - 1) > 0 ) /*0x7836b4*/
      return -1; /*0x7836c3*/
  }
  if ( (int)(v7 - 1) > 0 ) /*0x7836c6*/
    return 1; /*0x7836cf*/
LABEL_6:
  memset(v11, 0, sizeof(v11)); /*0x78362a*/
  memset(v10, 0, sizeof(v10)); /*0x78364c*/
  v8 = *(_DWORD *)a1; /*0x78364e*/
  if ( *(int *)a1 >= 0 && v8 < (int)dword_B77900 ) /*0x783657*/
    qmemcpy(v11, (char *)dword_B77908 + 108 * v8, sizeof(v11)); /*0x78366b*/
  v9 = *a2; /*0x783674*/
  if ( *a2 >= 0 && v9 < (int)dword_B77900 ) /*0x78367c*/
    qmemcpy(v10, (char *)dword_B77908 + 108 * v9, sizeof(v10)); /*0x783690*/
  return _strcmpi(&v11[36], &v10[36]); /*0x7835e0*/
}



// ==== 0x007836E0  sub_7836E0  this=-  sig=ida-proto ====
int __cdecl sub_7836E0(const void *a1, signed int *a2)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  char *v5; // edx
  unsigned int v6; // kr04_4
  unsigned int v7; // kr08_4
  signed int v8; // eax
  signed int v9; // eax
  char v10[108]; // [esp+4h] [ebp-D8h] BYREF
  char v11[108]; // [esp+70h] [ebp-6Ch] BYREF

  v2 = *((_DWORD *)a1 + 2); /*0x7836f5*/
  if ( v2 != a2[2] ) /*0x7836fa*/
  {
    v3 = -(v2 != 0); /*0x7836fe*/
    LOBYTE(v3) = v3 & 0xFE; /*0x783701*/
    return v3 + 1; /*0x78370a*/
  }
  v5 = (char *)a2[1]; /*0x78370b*/
  v6 = strlen(*((const char **)a1 + 1)) + 1; /*0x78371b*/
  v7 = strlen(v5) + 1; /*0x783727*/
  if ( v6 != 1 ) /*0x78372e*/
  {
    if ( v7 != 1 ) /*0x783736*/
    {
      result = _strcmpi(v5, *((char **)a1 + 1)); /*0x78373e*/
      if ( result ) /*0x783748*/
        return result; /*0x783748*/
      goto LABEL_6; /*0x783748*/
    }
    if ( (int)(v6 - 1) > 0 ) /*0x7837d4*/
      return -1; /*0x7837e3*/
  }
  if ( (int)(v7 - 1) > 0 ) /*0x7837e6*/
    return 1; /*0x7837ef*/
LABEL_6:
  memset(v11, 0, sizeof(v11)); /*0x78374a*/
  memset(v10, 0, sizeof(v10)); /*0x78376c*/
  v8 = *(_DWORD *)a1; /*0x78376e*/
  if ( *(int *)a1 >= 0 && v8 < (int)dword_B77900 ) /*0x783777*/
    qmemcpy(v11, (char *)dword_B77908 + 108 * v8, sizeof(v11)); /*0x78378b*/
  v9 = *a2; /*0x783794*/
  if ( *a2 >= 0 && v9 < (int)dword_B77900 ) /*0x78379c*/
    qmemcpy(v10, (char *)dword_B77908 + 108 * v9, sizeof(v10)); /*0x7837b0*/
  return _strcmpi(&v11[36], &v10[36]); /*0x783700*/
}



// ==== 0x00783800  WOLobby::BuildPlayerList  this=WOLobby  sig=ida-proto ====
void __fastcall WOLobby::BuildPlayerList(char a1)
{
  signed int v1; // esi
  signed int v2; // ebx
  int *v3; // ebp
  int v4; // eax
  int *v5; // ebp
  char *v6; // edx
  int v7; // edx
  int v8; // eax
  int v9; // esi
  char *v10; // edi
  bool v11; // zf
  void **v12; // edi
  int v14; // [esp+14h] [ebp-84h]
  signed int v15; // [esp+14h] [ebp-84h]
  int v16[2]; // [esp+18h] [ebp-80h] BYREF
  void *Block; // [esp+20h] [ebp-78h]
  signed int v18; // [esp+24h] [ebp-74h]
  int *v19; // [esp+28h] [ebp-70h]
  _DWORD v20[27]; // [esp+2Ch] [ebp-6Ch] BYREF

  v1 = dword_B77900; /*0x783809*/
  v2 = 0; /*0x783810*/
  v16[0] = 0; /*0x78381d*/
  v16[1] = 0; /*0x783821*/
  Block = 0; /*0x783825*/
  v18 = dword_B77900; /*0x783829*/
  v3 = (int *)__2_YAPAXI_Z(12 * dword_B77900); /*0x783832*/
  v19 = v3; /*0x783839*/
  if ( v3 ) /*0x78383d*/
  {
    v4 = 0; /*0x783860*/
    memset(v20, 0, sizeof(v20)); /*0x783868*/
    if ( v1 <= 0 ) /*0x78386a*/
    {
LABEL_12:
      if ( a1 ) /*0x78391d*/
        qsort(v3, v1, 0xCu, (_CoreCrtNonSecureSearchSortCompareFunction)sub_7835C0); /*0x783924*/
      else
        qsort(v3, v1, 0xCu, sub_7836E0); /*0x78394f*/
      v7 = 0; /*0x783957*/
      dword_B77900 = 0; /*0x78395b*/
      if ( v1 > 0 ) /*0x783961*/
      {
        v15 = v1; /*0x783967*/
        do /*0x783a3c*/
        {
          v8 = *v3; /*0x78396f*/
          if ( *v3 >= 0 && v8 < v16[0] ) /*0x78397a*/
            qmemcpy(v20, (char *)Block + 108 * v8, sizeof(v20)); /*0x783992*/
          v9 = v7; /*0x783994*/
          if ( v7 >= dword_B77904 ) /*0x7839a0*/
          {
            DynamicArray::Grow(&dword_B77900); /*0x7839a7*/
            v7 = dword_B77900; /*0x7839ac*/
          }
          if ( v7 >= dword_B77904 ) /*0x7839b8*/
          {
            DynamicArray::Grow(&dword_B77900); /*0x7839bf*/
            v7 = dword_B77900; /*0x7839c4*/
          }
          if ( v9 < v7 ) /*0x7839cc*/
          {
            memcpy((char *)dword_B77908 + 108 * v9 + 108, (char *)dword_B77908 + 108 * v9, 108 * v7 - 108 * v9); /*0x7839f7*/
            v7 = dword_B77900; /*0x7839fc*/
          }
          v10 = (char *)dword_B77908 + 108 * v9; /*0x783a11*/
          if ( v10 ) /*0x783a16*/
          {
            qmemcpy(v10, v20, 0x6Cu); /*0x783a21*/
            v7 = dword_B77900; /*0x783a23*/
          }
          ++v7; /*0x783a2d*/
          v3 += 3; /*0x783a2e*/
          v11 = v15 == 1; /*0x783a31*/
          dword_B77900 = v7; /*0x783a32*/
          --v15; /*0x783a38*/
        }
        while ( !v11 ); /*0x783a3c*/
        v3 = v19; /*0x783a42*/
        v1 = v18; /*0x783a46*/
      }
      v16[0] = 0; /*0x783a4e*/
      if ( v1 > 0 ) /*0x783a52*/
      {
        v12 = (void **)(v3 + 1); /*0x783a54*/
        do /*0x783a6a*/
        {
          if ( *v12 ) /*0x783a57*/
            __3_YAXPAX_Z(*v12); /*0x783a5e*/
          v12 += 3; /*0x783a66*/
          --v1; /*0x783a69*/
        }
        while ( v1 ); /*0x783a6a*/
      }
      __3_YAXPAX_Z(v3); /*0x783a6d*/
      v16[0] = 0; /*0x783a76*/
      __3_YAXPAX_Z(Block); /*0x783a7b*/
    }
    else
    {
      v14 = 0; /*0x783870*/
      v5 = v3 + 2; /*0x783874*/
      while ( 1 ) /*0x78387d*/
      {
        if ( v4 >= 0 && v2 < (int)dword_B77900 ) /*0x783887*/
          qmemcpy(v20, (char *)dword_B77908 + v4, sizeof(v20)); /*0x78389b*/
        *(v5 - 2) = v2; /*0x78389f*/
        v6 = (char *)__2_YAPAXI_Z(0xAu); /*0x7838a7*/
        *(v5 - 1) = (int)v6; /*0x7838ae*/
        if ( !v6 ) /*0x7838b1*/
          break; /*0x7838b1*/
        strcpy(v6, (const char *)&v20[21] + 3); /*0x7838ce*/
        *v5 = v20[0] & 1; /*0x7838e2*/
        DynamicClass::Insert(v16, v20, v16[0]); /*0x7838ef*/
        ++v2; /*0x7838f4*/
        v5 += 3; /*0x7838f5*/
        v14 += 108; /*0x783905*/
        if ( v2 >= v18 ) /*0x783909*/
        {
          v3 = v19; /*0x78390f*/
          v1 = v18; /*0x783913*/
          goto LABEL_12; /*0x783913*/
        }
        v4 = v14; /*0x783879*/
      }
      v16[0] = 0; /*0x78392a*/
      __3_YAXPAX_Z(Block); /*0x783933*/
    }
  }
  else
  {
    v16[0] = 0; /*0x783843*/
    __3_YAXPAX_Z(Block); /*0x783848*/
  }
}



// ==== 0x00783A90  Bitmap::GetNumberBitmapWOL  this=Bitmap  sig=csp ====
int __thiscall Bitmap::GetNumberBitmapWOL(Bitmap *this)
{
  int result; // eax

  switch ( (unsigned int)this ) /*0x783a99*/
  {
    case 0u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, g_Str_File_number0_pcx, 0); /*0x783aac*/
      break; /*0x783ab1*/
    case 1u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, g_Str_File_number1_pcx, 0); /*0x783abe*/
      break; /*0x783ac3*/
    case 2u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber2Pcx, 0); /*0x783ad0*/
      break; /*0x783ad5*/
    case 3u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber3Pcx, 0); /*0x783ae2*/
      break; /*0x783ae7*/
    case 4u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber4Pcx, 0); /*0x783af4*/
      break; /*0x783af9*/
    case 5u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber5Pcx, 0); /*0x783b06*/
      break; /*0x783b0b*/
    case 6u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber6Pcx, 0); /*0x783b18*/
      break; /*0x783b1d*/
    case 7u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber7Pcx, 0); /*0x783b2a*/
      break; /*0x783b2f*/
    case 8u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber8Pcx, 0); /*0x783b3c*/
      break; /*0x783b41*/
    case 9u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber9Pcx, 0); /*0x783b4e*/
      break; /*0x783b53*/
    default:
      result = 0; /*0x783b54*/
      break; /*0x783b54*/
  }
  return result; /*0x783ab1*/
}



// ==== 0x00783B80  ObjectClass::Render_Find  this=ObjectClass  sig=csp ====
int __thiscall Render_Find(ObjectClass *this)
{
  void *ptr_C; // eax

  if ( !this ) /*0x783b82*/
    return 0; /*0x783b84*/
  ptr_C = this->?; /*0x783b87*/
  if ( (unsigned int)ptr_C > 0x7D0 ) /*0x783b8f*/
    return HashTable::Find(&g_DialogHashTable, g_Str_File_comchief_pcx, 0); /*0x783b9d*/
  if ( (unsigned int)ptr_C > 0x5DC ) /*0x783ba8*/
    return HashTable::Find(&g_DialogHashTable, aStargenPcx, 0); /*0x783bb6*/
  if ( (unsigned int)ptr_C > 0x3E8 ) /*0x783bc1*/
    return HashTable::Find(&g_DialogHashTable, aGeneralPcx, 0); /*0x783bcf*/
  if ( (unsigned int)ptr_C > 0x1F4 ) /*0x783bda*/
    return HashTable::Find(&g_DialogHashTable, aBriggenrPcx, 0); /*0x783be8*/
  if ( (unsigned int)ptr_C > 0xFA ) /*0x783bf3*/
    return HashTable::Find(&g_DialogHashTable, aColonelPcx, 0); /*0x783c01*/
  if ( (unsigned int)ptr_C > 0x96 ) /*0x783c0c*/
    return HashTable::Find(&g_DialogHashTable, aMajorPcx, 0); /*0x783c1a*/
  if ( (unsigned int)ptr_C > 0x50 ) /*0x783c23*/
    return HashTable::Find(&g_DialogHashTable, aLieutenaPcx, 0); /*0x783c31*/
  if ( (unsigned int)ptr_C > 0x3C ) /*0x783c3a*/
    return HashTable::Find(&g_DialogHashTable, aSergeantPcx, 0); /*0x783c48*/
  if ( (unsigned int)ptr_C <= 0x1F ) /*0x783c53*/
    return HashTable::Find(&g_DialogHashTable, aPrivatePcx, 0); /*0x783c6f*/
  return HashTable::Find(&g_DialogHashTable, aCorporalPcx, 0); /*0x783b86*/
}



// ==== 0x00783C80  ObjectClass::DisplayRankingsWOL  this=ObjectClass  sig=csp ====
int __thiscall DisplayRankingsWOL(ObjectClass *this)
{
  char v1; // dl
  char v2; // bl
  HWND GameUI; // eax
  int result; // eax
  ObjectClass *v5; // eax
  HWND v6; // esi
  HWND v7; // ebx
  unsigned int v8; // eax
  int v9; // ecx
  LRESULT (__stdcall *v10)(HWND, int, UINT, WPARAM, LPARAM); // ebp
  HWND v11; // ebx
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  int v14; // esi
  int v15; // esi
  char *v16; // eax
  char *v17; // eax
  int v18; // ebp
  int v19; // esi
  int v20; // esi
  int *v21; // eax
  wchar_t *v22; // eax
  HashTable *v23; // esi
  int v24; // esi
  const void *v25; // esi
  wchar_t *v26; // eax
  int v27; // esi
  unsigned __int16 v28; // si
  HWND v29; // eax
  int v30; // ebp
  HashTable *v31; // esi
  int v32; // esi
  const void *v33; // esi
  int v34; // esi
  const void *v35; // esi
  wchar_t *v36; // eax
  wchar_t *v37; // eax
  wchar_t *v38; // eax
  wchar_t *v39; // eax
  wchar_t *v40; // eax
  int v41; // eax
  char *v42; // ebp
  int v43; // e... [44324 chars total]



// ==== 0x00785360  DisplayRankingsThunkWOL  this=-  sig=ida-proto ====
void WOL_DisplayRankingsThunk()
{
  DisplayRankingsWOL(0); /*0x785364*/
}



// ==== 0x00785370  ObjectClass::InitializeWestwoodOnline  this=ObjectClass  sig=csp ====
int __thiscall InitializeWestwoodOnline(ObjectClass *this)
{
  char *v1; // eax
  char *v2; // esi
  char *v3; // edi
  int (__stdcall **v4)(LPVOID, void *, void **); // ecx
  int v5; // esi
  char *v6; // eax
  char *v7; // esi
  int v8; // eax
  int v9; // edi
  int v10; // esi
  char *v11; // eax
  char *inited; // eax
  int v13; // eax
  wchar_t *StringCSF; // eax
  ObjectClass Data; // [esp+64h] [ebp-114h] BYREF

  dword_B764F8 = (int)&unk_825CD0; /*0x785376*/
  stru_A8EB00.?[1] = (int)&dword_B76488; /*0x785380*/
  dword_B76488 = 132; /*0x78538a*/
  dword_B764EC = 768; /*0x7853a1*/
  System_Init_7A2F30((int)&dword_B76488, 0, (int)this); /*0x7853ab*/
  ppv = 0; /*0x7853b0*/
  g_UIPointerTable = 0; /*0x7853b6*/
  dword_AC1174 = 0; /*0x7853ce*/
  dword_B77E54 = 0; /*0x7853d4*/
  dword_B77E58 = 0; /*0x7853da*/
  dword_B77E5C = 0; /*0x7853e0*/
  CoCreateInstance(&stru_7F75E0, 0, 1u, &stru_7F7540, &ppv); /*0x7853e6*/
  if ( !ppv ) /*0x7853f2*/
    goto LABEL_40; /*0x7853f2*/
  v1 = (char *)__2_YAPAXI_Z(0x20u); /*0x7853fa*/
  v2 = v1; /*0x785405*/
  if ( v1 ) /*0x78540c*/
  {
    System_Init_7A41A0(v1); /*0x785410*/
    *(_DWORD *)v2 = &ATL::CComObject<CChatEventSink>::`vftable'; /*0x785415*/
    InterlockedIncrement(&Addend); /*0x785420*/
  }
  else
  {
    v2 = 0; /*0x785424*/
  }
  g_WOL_UserList.? = v2; /*0x78542f*/
  v3 = v2; /*0x785436*/
  v4 = *(int (__stdcall ***)(LPVOID, void *, void **))ppv; /*0x785444*/
  Data.? = 0; /*0x785446*/
  Data.AbstractClass = 0; /*0x78544a*/
  v5 = (*v4)(ppv, &unk_7F7CD0, &Data.?); /*0x785450*/
  if ( v5 >= 0 ) /*0x785454*/
  {
    v5 = (*(int (__stdcall **)(void *, void *, ObjectClass *))(*(_DWORD *)Data.? + 16))(Data.?, &unk_7F7550, &Data); /*0x78546a*/
    if ( v5 >= 0 ) /*0x78546e*/
      v5 = (*(int (__stdcall **)(void *, char *, int *))(*(_DWORD *)Data.AbstractClass + 20))( /*0x785480*/
             Data.AbstractClass,
             v3,
             &dword_B77E54);
  }
  if ( Data.AbstractClass ) /*0x785488*/
    (*(void (__stdcall **)(void *))(*(_DWORD *)Data.AbstractClass + 8))(Data.AbstractClass); /*0x78548d*/
  if ( Data.? ) /*0x785496*/
    (*(void (__stdcall **)(void *))(*(_DWORD *)Data.? + 8))(Data.?); /*0x78549b*/
  if ( !ppv || v5 ) /*0x7854ac*/
  {
LABEL_40:
    StringCSF = GetStringCSF(aTxtApimissing, 0, g_Str_File_wonline_cpp, 9180); /*0x785722*/
    goto LABEL_41; /*0x785722*/
  }
  CoCreateInstance(&stru_7F7600, 0, 1u, &stru_7F7580, &g_UIPointerTable); /*0x7854c4*/
  if ( !g_UIPointerTable ) /*0x7854d0*/
    goto LABEL_39; /*0x7854d0*/
  v6 = (char *)__2_YAPAXI_Z(0x20u); /*0x7854d8*/
  v7 = v6; /*0x7854dd*/
  if ( v6 ) /*0x7854e4*/
  {
    System_Init_7A2FC0(v6); /*0x7854e8*/
    *(_DWORD *)v7 = &off_7F766C; /*0x7854ed*/
    InterlockedIncrement(&Addend); /*0x7854f8*/
    v8 = (int)v7; /*0x7854fa*/
  }
  else
  {
    v8 = 0; /*0x7854fe*/
  }
  dword_B736EC = v8; /*0x785506*/
  Data.AbstractClass = 0; /*0x78550b*/
  Data.? = 0; /*0x78550f*/
  v9 = v8; /*0x785513*/
  v10 = (**(int (__stdcall ***)(LPVOID, void *, ObjectClass *))g_UIPointerTable)(g_UIPointerTable, &unk_7F7CD0, &Data); /*0x78552a*/
  if ( v10 >= 0 ) /*0x78552e*/
  {
    v10 = (*(int (__stdcall **)(void *, void *, void **))(*(_DWORD *)Data.AbstractClass + 16))( /*0x785544*/
            Data.AbstractClass,
            &unk_7F7590,
            &Data.?);
    if ( v10 >= 0 ) /*0x785548*/
      v10 = (*(int (__stdcall **)(void *, int, int *))(*(_DWORD *)Data.? + 20))(Data.?, v9, &dword_B77E58); /*0x78555a*/
  }
  System_Init_7AC680((ObjectClass *)&Data.?); /*0x785560*/
  System_Init_7AC670(&Data); /*0x785569*/
  if ( !g_UIPointerTable || v10 ) /*0x78557c*/
  {
LABEL_39:
    StringCSF = GetStringCSF(aTxtApimissing, 0, g_Str_File_wonline_cpp, 9196); /*0x78570d*/
    goto LABEL_41; /*0x78570d*/
  }
  CoCreateInstance(&stru_7F75F0, 0, 1u, &stru_7F7560, &dword_AC1174); /*0x785594*/
  if ( !dword_AC1174
    || ((v11 = (char *)__2_YAPAXI_Z(0x20u)) == 0 ? (inited = 0) : (inited = System_Init_7AD410(v11, 0)),
        (dword_B75F68 = (int)inited,
         v13 = System_Init_7A2EA0(
                 (int (__stdcall ***)(_DWORD, void *, int *))dword_AC1174,
                 (int)inited,
                 (int)&unk_7F7570,
                 (int)&dword_B77E5C),
         !dword_AC1174)
     || v13) )
  {
    StringCSF = GetStringCSF(aTxtApimissing, 0, g_Str_File_wonline_cpp, 9212); /*0x785704*/
    goto LABEL_41; /*0x785704*/
  }
  (*(void (__stdcall **)(LPVOID, void **))(*(_DWORD *)ppv + 80))(ppv, &Data.?); /*0x785604*/
  if ( Data.? < (void *)0x10010 ) /*0x78560f*/
  {
    StringCSF = GetStringCSF((wchar_t *)aTxtApiwrongver, 0, g_Str_File_wonline_cpp, 9224); /*0x785624*/
LABEL_41:
    ShowDialogConfirm(StringCSF, 0, 0, 0); /*0x785727*/
    return -2; /*0x785730*/
  }
  (*(void (__stdcall **)(LPVOID, char *, char *))(*(_DWORD *)ppv + 164))( /*0x78563b*/
    ppv,
    aRegpath,
    g_Str_SOFTWARE_Westwood_Yuri_s_Reven);
  if ( g_Str_SOFTWARE_Westwood_Yuri_s_Reven ) /*0x785648*/
  {
    if ( strlen(g_Str_SOFTWARE_Westwood_Yuri_s_Reven) ) /*0x785650*/
    {
      strcpy((char *)&Data.?, g_Str_SOFTWARE_Westwood_Yuri_s_Reven); /*0x78567f*/
      if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, (LPCSTR)&Data.?, 0, 0x20019u, (PHKEY)&Data.?) ) /*0x785699*/
      {
        Data.? = (void *)4; /*0x7856bd*/
        if ( !RegQueryValueExA((HKEY)Data.?, off_84A940, 0, (LPDWORD)&Data.?, (LPBYTE)&Data, (LPDWORD)&Data.?) ) /*0x7856c5*/
          (*(void (__stdcall **)(LPVOID, void *))(*(_DWORD *)ppv + 140))(ppv, Data.AbstractClass); /*0x7856dc*/
        RegCloseKey((HKEY)Data.?); /*0x7856e7*/
      }
    }
  }
  return 1; /*0x7856ed*/
}



// ==== 0x00785740  ObjectClass::LeaveChannelWOL  this=ObjectClass  sig=csp ====
void __thiscall LeaveChannelWOL(const char *this)
{
  const char *v2; // ebp
  char *v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  wchar_t *StringCSF; // eax
  HWND v8; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  HWND v11; // esi
  HWND v12; // eax
  HWND v13; // edi
  HWND v14; // eax
  HWND v15; // edi
  int v16; // ebx
  char **v17; // edi
  HWND GameUI; // eax
  int owningHouseIndex; // eax
  int v20; // ebx
  int v21; // ebp
  int v22; // ecx
  int v23; // ebp
  ObjectClass *v24; // eax
  ObjectClass *nextObject; // esi
  ObjectClass *v26; // ebx
  char v27; // dl
  unsigned int v28; // ecx
  int *v29; // esi
  HWND v30; // eax
  HWND v31; // eax
  HWND v32; // eax
  int v33; // esi
  char *v34; // eax
  _DWORD *v35; // ecx
  void *v36; // edi
  int v37; // eax
  int i; // esi
  ObjectClass *v39; // ecx
  char *v40; // eax
  HWND v41; // esi
  LRESULT v42; // eax
  LRESULT v43; // eax
  char *v44; // [esp-4h] [ebp-108h]
  ObjectClass *v45; // [esp+0h] [ebp-104h]
  int v46; // [esp+10h] [ebp-F4h]
  char *v47; // [esp+14h] [ebp-F0h]
  wchar_t Buffer[64]; // [esp+18h] [ebp-ECh] BYREF
  char v49[108]; // [esp+98h] [ebp-6Ch] BYREF

  v2 = this + 36; /*0x785751*/
  v44 = (char *)(this + 36); /*0x785754*/
  v47 = (char *)(this + 36); /*0x785755*/
  v3 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x785759*/
  _strcmpi(v3, v44); /*0x78575f*/
  if ( stru_B76AC4.ambientSoundController[4] ) /*0x785770*/
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1724), 0x2000, 1.0, 0); /*0x785788*/
  if ( (BYTE1(*(_DWORD *)this) & 0x80u) != 0 ) /*0x785792*/
  {
    Debug::Log(); /*0x78579d*/
    if ( g_NetworkLobbyState ) /*0x7857ac*/
      Debug::Log(); /*0x7857b3*/
    BulkCharToWide(Buffer, (unsigned __int8 *)&stru_B76AC4.needsRedraw, -1); /*0x7857c6*/
    if ( !strncmp(&stru_B76AC4.needsRedraw, g_Str_Lob_41_, 7u) ) /*0x7857d7*/
    {
      v4 = atol((const char *)&stru_B76AC4.needsRedraw + strlen(g_Str_Lob_41_)); /*0x7857fc*/
      v5 = v4 / 8; /*0x785807*/
      v6 = v4 % 8; /*0x785816*/
      if ( v5 ) /*0x785819*/
        swprintf( /*0x78584b*/
          Buffer,
          (const size_t)g_Str_Trace__s__d,
          *(const wchar_t *const *)&g_WindowManager.__pad_EC[4 * v6 + 648],
          v5 + 1);
      else
        swprintf(Buffer, (const size_t)&off_8240B4, *(const wchar_t *const *)&g_WindowManager.__pad_EC[4 * v6 + 648]); /*0x78582d*/
    }
    if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x785865*/
    {
      StringCSF = GetStringCSF(aTxtYouleft, 0, g_Str_File_wonline_cpp, 9292); /*0x78587d*/
      Dialog::ShowMessage(-1, (size_t)StringCSF, Buffer); /*0x785889*/
    }
    stru_B77D80.HashTable_field_0x50 = 0; /*0x785896*/
    Debug::Log(); /*0x78589c*/
    memset(&stru_B76AC4.ambientSoundController[4], 0, 0x10Cu); /*0x7858b0*/
    memset(&g_WOL_LoginObject.?, 0, 0x940u); /*0x7858bc*/
    g_WOL_UserList.owningHouseIndex = 0; /*0x7858c3*/
    dword_B77E4C = 0; /*0x7858c9*/
    v8 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7858cf*/
    if ( v8 ) /*0x7858d6*/
    {
      stru_B77D80.HashTable_field_0x48 &= ~0x40u; /*0x7858e1*/
      if ( !stru_B77D80.HashTable_field_0x48 ) /*0x7858e7*/
        CloseDialog(v8, 0); /*0x7858ed*/
    }
    Current = (HWND)Dialog::GetCurrent(); /*0x7858f2*/
    DlgItem = GetDlgItem(Current, 1344); /*0x7858fd*/
    if ( DlgItem ) /*0x785905*/
      SetFocus(DlgItem); /*0x785908*/
    MEMORY[0xA8B322][0] = 0; /*0x785914*/
    dword_A8BB04 = 0; /*0x78591c*/
    ++dword_A8DAB4; /*0x785922*/
    byte_A8BAE2 = 0; /*0x78592d*/
    v11 = (HWND)Dialog::FindByHandle((Dialog *)0x113); /*0x78593f*/
    if ( v11 && BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x78594c*/
    {
      ShowWindow(v11, 0); /*0x785950*/
      Dialog::InitWindow(v11, 1); /*0x785955*/
    }
    v12 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x78595f*/
    v13 = v12; /*0x78596a*/
    if ( v12 ) /*0x78596e*/
    {
      CloseDialog(v12, 2); /*0x785977*/
      CleanupFileTree(v45); /*0x78597c*/
      ShowWindow(v13, 0); /*0x785984*/
      Dialog::InitWindow(v13, 1); /*0x785989*/
      if ( dword_A8B244 == 4 ) /*0x785996*/
      {
        if ( BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x78599f*/
        {
          if ( v11 ) /*0x7859a3*/
          {
            ShowWindow(v11, 0); /*0x7859a8*/
            Dialog::InitWindow(v11, 1); /*0x7859ad*/
          }
        }
        else
        {
          JoinGameLobbyWOL(); /*0x7859b6*/
          if ( v11 ) /*0x7859bd*/
            PostMessageA(v11, 0x593u, 0, 0); /*0x7859c9*/
        }
      }
      else if ( dword_A8B244 == 5 ) /*0x7859d0*/
      {
        Debug::Log(); /*0x7859d7*/
        g_WOL_ChannelLeaveState = 1; /*0x7859df*/
      }
    }
    v14 = (HWND)Dialog::FindByHandle((Dialog *)0xC2); /*0x7859ee*/
    v15 = v14; /*0x7859f3*/
    if ( !v14 ) /*0x7859f7*/
      goto LABEL_40; /*0x7859f7*/
    CloseDialog(v14, 2); /*0x785a00*/
    CleanupFileTree(v45); /*0x785a05*/
    ShowWindow(v15, 0); /*0x785a0d*/
    Dialog::InitWindow(v15, 1); /*0x785a12*/
    if ( dword_A8B244 != 4 ) /*0x785a1f*/
    {
      if ( dword_A8B244 == 5 ) /*0x785a59*/
        Debug::Log(); /*0x785a60*/
      goto LABEL_40; /*0x785a60*/
    }
    if ( BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x785a28*/
    {
      if ( v11 ) /*0x785a2c*/
      {
        ShowWindow(v11, 0); /*0x785a31*/
        Dialog::InitWindow(v11, 1); /*0x785a36*/
        goto LABEL_40; /*0x785a3b*/
      }
    }
    else
    {
      JoinGameLobbyWOL(); /*0x785a3f*/
      if ( v11 ) /*0x785a46*/
      {
        PostMessageA(v11, 0x593u, 0, 0); /*0x785a52*/
LABEL_40:
        if ( v11 ) /*0x785a6a*/
        {
          if ( !BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x785a73*/
          {
            ShowWindow(v11, 5); /*0x785a78*/
            Dialog::InitWindow(v11, 0); /*0x785a7d*/
          }
          GameListRenderWOL(v45); /*0x785a82*/
        }
      }
    }
    --dword_A8DAB4; /*0x785a87*/
    return; /*0x785a9c*/
  }
  if ( g_NetworkLobbyState == 2 ) /*0x785aa4*/
  {
    Debug::Log(); /*0x785aab*/
    return; /*0x785abd*/
  }
  if ( this ) /*0x785ac0*/
  {
    v16 = 0; /*0x785ac2*/
    v17 = (char **)dword_A8DA90; /*0x785ac4*/
    while ( !*v17 || strcmp(ToWideStringChar(*v17), v2) ) /*0x785b01*/
    {
      ++v17; /*0x785b03*/
      ++v16; /*0x785b06*/
      if ( (int)v17 >= (int)&dword_A8DAB0 ) /*0x785b0d*/
        goto LABEL_55; /*0x785b0d*/
    }
    GameUI = (HWND)Dialog::FindGameUI(); /*0x785b11*/
    if ( GameUI ) /*0x785b18*/
      UpdateLobbyGraphicsWOL(GameUI, v16, -1); /*0x785b20*/
  }
LABEL_55:
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x785b25*/
  v20 = 0; /*0x785b2a*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x785b32*/
  {
    v21 = 0; /*0x785b38*/
    while ( 1 ) /*0x785b3a*/
    {
      if ( v21 >= 0 && v20 < owningHouseIndex ) /*0x785b40*/
        qmemcpy(v49, (char *)g_WOL_UserList.nextObject + v21, sizeof(v49)); /*0x785b56*/
      if ( !_strcmpi(&v49[36], v47) ) /*0x785b65*/
        break; /*0x785b65*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x785b71*/
      ++v20; /*0x785b76*/
      v21 += 108; /*0x785b77*/
      if ( v20 >= g_WOL_UserList.owningHouseIndex ) /*0x785b7c*/
        goto LABEL_86; /*0x785b7c*/
    }
    v46 = v20; /*0x785b8d*/
    v22 = v20; /*0x785b93*/
    if ( g_WOL_UserList.owningHouseIndex ) /*0x785b95*/
    {
      if ( v20 < 0 ) /*0x785b9d*/
        v22 = 0; /*0x785b9f*/
      if ( v22 >= g_WOL_UserList.owningHouseIndex ) /*0x785ba3*/
        v22 = g_WOL_UserList.owningHouseIndex - 1; /*0x785ba5*/
      memcpy( /*0x785bd1*/
        (char *)g_WOL_UserList.nextObject + 108 * v22,
        &g_WOL_UserList.nextObject->alignmentPadding69[108 * v22 + 3],
        108 * g_WOL_UserList.owningHouseIndex - 36 * (3 * v22 + 3));
      --g_WOL_UserList.owningHouseIndex; /*0x785be5*/
      if ( 3 * g_WOL_UserList.owningHouseIndex <= g_WOL_UserList.fallRate ) /*0x785bef*/
      {
        v23 = g_WOL_UserList.fallRate / 2; /*0x785bf8*/
        if ( g_WOL_UserList.fallRate / 2 < 10 ) /*0x785bfd*/
          v23 = 10; /*0x785bff*/
        if ( v23 < g_WOL_UserList.fallRate ) /*0x785c06*/
        {
          v24 = (ObjectClass *)__2_YAPAXI_Z(108 * v23); /*0x785c13*/
          nextObject = g_WOL_UserList.nextObject; /*0x785c18*/
          v26 = v24; /*0x785c23*/
          if ( g_WOL_UserList.nextObject ) /*0x785c25*/
          {
            v27 = 108 * LOBYTE(g_WOL_UserList.owningHouseIndex); /*0x785c37*/
            v28 = (unsigned int)(108 * g_WOL_UserList.owningHouseIndex) >> 2; /*0x785c39*/
            qmemcpy(v24, g_WOL_UserList.nextObject, 4 * v28); /*0x785c3c*/
            qmemcpy(&v24->AbstractClass + v28, &nextObject->AbstractClass + v28, v27 & 3); /*0x785c43*/
            nextObject = g_WOL_UserList.nextObject; /*0x785c45*/
          }
          __3_YAXPAX_Z(nextObject); /*0x785c4c*/
          g_WOL_UserList.nextObject = v26; /*0x785c51*/
          v20 = v46; /*0x785c57*/
          g_WOL_UserList.fallRate = v23; /*0x785c5e*/
        }
      }
    }
    if ( stru_B76AC4.ambientSoundController[4] ) /*0x785c6b*/
    {
      memcpy(&g_WOL_LoginObject.? + 37 * v20, (char *)&unk_B76ED4 + 148 * v20, 2220 - 148 * v20); /*0x785c90*/
      if ( g_NetworkLobbyState != 2 ) /*0x785ca0*/
      {
        v29 = (int *)&unk_B76EF4; /*0x785cae*/
        do /*0x785cd7*/
        {
          *v29 = 0; /*0x785cba*/
          v30 = (HWND)Dialog::FindGameUI(); /*0x785cc0*/
          v31 = GetDlgItem(v30, 1439); /*0x785cc6*/
          EnableWindow(v31, 1); /*0x785cc9*/
          v29 += 37; /*0x785ccb*/
        }
        while ( v29 < &g_WebBrowserConfig.? ); /*0x785cd7*/
        if ( !dword_B77E4C ) /*0x785ce0*/
        {
          v32 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x785ce7*/
          EnablePlayerSlotControls(v32, 1u); /*0x785cf0*/
        }
        Game::ResetReadyStates(); /*0x785cf5*/
      }
    }
    if ( !v20 ) /*0x785cfc*/
    {
      if ( !stru_B76AC4.ambientSoundController[4] ) /*0x785d05*/
        goto LABEL_109; /*0x785d05*/
      if ( !dword_B77E4C ) /*0x785d12*/
        (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x785d1c*/
    }
  }
LABEL_86:
  if ( stru_B76AC4.ambientSoundController[4] ) /*0x785d26*/
  {
    Audio_Helper((ObjectClass *)v47); /*0x785d32*/
    v33 = 0; /*0x785d3c*/
    if ( dword_A8DA84 > 0 ) /*0x785d40*/
    {
      while ( 1 ) /*0x785d4c*/
      {
        v34 = ToWideStringChar((char *)dword_A8DA78[v33]); /*0x785d4c*/
        if ( !_strcmpi(v34, v47) ) /*0x785d52*/
          break; /*0x785d52*/
        if ( ++v33 >= dword_A8DA84 ) /*0x785d66*/
          goto LABEL_97; /*0x785d66*/
      }
      v35 = dword_A8DA78; /*0x785d6a*/
      v36 = (void *)dword_A8DA78[v33]; /*0x785d78*/
      if ( v33 < dword_A8DA84 ) /*0x785d7b*/
      {
        v37 = v33; /*0x785d7e*/
        if ( v33 < --dword_A8DA84 ) /*0x785d88*/
        {
          while ( 1 ) /*0x785d96*/
          {
            v35[v37] = v35[v37 + 1]; /*0x785d96*/
            if ( ++v37 >= dword_A8DA84 ) /*0x785da2*/
              break; /*0x785da2*/
            v35 = dword_A8DA78; /*0x785d8c*/
          }
        }
      }
      Network_Disconnect_69BBF0((char *)&dword_A8B238, v33); /*0x785daa*/
      __3_YAXPAX_Z(v36); /*0x785db0*/
    }
LABEL_97:
    for ( i = 0; i < 8; ++i ) /*0x785db8*/
    {
      v39 = (ObjectClass *)dword_A8DA90[i]; /*0x785dbd*/
      if ( !v39 || !(unsigned __int8)IsKnownPointer(v39) ) /*0x785dc7*/
        dword_B76440[i] = -1; /*0x785dd0*/
      v40 = ToWideStringChar((char *)dword_A8DA90[i]); /*0x785ddc*/
      SetGameOptionsPing(v40, dword_B76440[i]); /*0x785de9*/
    }
    if ( dword_B77E4C ) /*0x785dfd*/
    {
      Game::ResetReadyStates(); /*0x785e03*/
      Lobby::BuildPlayerList((Lobby *)v45); /*0x785e08*/
      CheckGameSettingsChanged(1, 1); /*0x785e11*/
      if ( Dialog::GetCurrentType() == 107 ) /*0x785e1e*/
      {
        v41 = (HWND)Dialog::GetCurrent(); /*0x785e2b*/
        v42 = SendDlgItemMessageA(v41, 1771, 0x188u, 0, 0); /*0x785e3c*/
        if ( v42 != -1 ) /*0x785e41*/
        {
          v43 = SendDlgItemMessageA(v41, 1771, 0x199u, v42, 0); /*0x785e51*/
          if ( v43 ) /*0x785e55*/
          {
            (*(void (__thiscall **)(LRESULT))(*(_DWORD *)v43 + 144))(v43); /*0x785e5b*/
            DisplayRankingsWOL(0); /*0x785e65*/
            return; /*0x785e74*/
          }
        }
      }
      else if ( dword_A8B23C ) /*0x785e7d*/
      {
        (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 36))(dword_A8B23C); /*0x785e81*/
      }
    }
  }
LABEL_109:
  DisplayRankingsWOL(0); /*0x785e87*/
}



// ==== 0x00785EA0  ObjectClass::RunWOLMainLoop_Delete  this=ObjectClass  sig=csp ====
int RunWOLMainLoop_Delete(ObjectClass *this)
{
  unsigned int v1; // eax
  unsigned int i; // ebx
  ObjectClass *v3; // esi
  ObjectClass *v4; // edi
  int result; // eax
  HANDLE *v6; // esi
  TechnoTypeClass *v7; // ecx
  wchar_t *StringCSF; // eax
  int j; // ebp
  TechnoTypeClass *v10; // ecx
  DWORD k; // esi
  HWND v12; // eax
  HWND v13; // eax
  HWND Current; // eax
  void *v15; // [esp+Ch] [ebp-4h] BYREF

  LOBYTE(stru_B77D80.HashTable_field_0x40) = 1; /*0x785eac*/
  if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x785ec0*/
  {
    v1 = stru_B765EC.location[0]; /*0x785ec6*/
    for ( i = 0; i < stru_B765EC.location[0]; v1 = stru_B765EC.location[0] ) /*0x785ecf*/
    {
      v3 = *(ObjectClass **)(stru_B765EC.lastLayer + 4 * i); /*0x785ed6*/
      while ( v3 ) /*0x785edb*/
      {
        v4 = v3; /*0x785edd*/
        v3 = (ObjectClass *)v3->?; /*0x785edf*/
        DeleteAndZero(v4); /*0x785ee8*/
        __3_YAXPAX_Z(v4); /*0x785eee*/
      }
      ++i; /*0x785f00*/
      *(_DWORD *)(stru_B765EC.lastLayer + 4 * i - 4) = 0; /*0x785f01*/
    }
    *(_DWORD *)&stru_B765EC.isInLogic = 0; /*0x785f18*/
    if ( v1 > dword_B766B0 ) /*0x785f24*/
    {
      do /*0x785f46*/
      {
        if ( LOBYTE(stru_B765EC.lineTrailer) ) /*0x785f2d*/
          break; /*0x785f2d*/
        HashMap::Shrink((HashMap *)&stru_B765EC.lastLayer); /*0x785f34*/
      }
      while ( stru_B765EC.location[0] > (unsigned int)dword_B766B0 ); /*0x785f46*/
    }
  }
  result = (int)ppv; /*0x785f48*/
  if ( ppv ) /*0x785f4f*/
  {
    v6 = &Handles; /*0x785f5b*/
    do /*0x785f6e*/
      ResetEvent(*v6++); /*0x785f63*/
    while ( (int)v6 < (int)g_WOL_RequestObject ); /*0x785f6e*/
    Game::ProcessIdle(v7); /*0x785f70*/
    if ( !(*(int (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 52))(ppv) ) /*0x785f7d*/
    {
      StringCSF = GetStringCSF(aTxtWolLoggingO, 0, g_Str_File_wonline_cpp, 9527); /*0x785f9a*/
      WideString::Assign((wchar_t **)&v15, StringCSF); /*0x785fa4*/
      ShowUIMessage(32, (wchar_t **)&v15, 0); /*0x785fb4*/
      DeleteAndZero::Alt((DeleteAndZero *)&v15); /*0x785fbd*/
      for ( j = 0; j < 5; ++j ) /*0x785fc8*/
      {
        for ( k = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x785fdf*/
              k == 258;
              k = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u) )
        {
          Game::ProcessIdle(v10); /*0x785fe1*/
        }
        ResetEvent(*(&Handles + k)); /*0x786005*/
        if ( !k ) /*0x786009*/
          break; /*0x786009*/
        if ( k == 9 ) /*0x78600e*/
          break; /*0x78600e*/
      }
    }
    v12 = (HWND)Dialog::FindByHandle((Dialog *)0x11E); /*0x78601c*/
    if ( v12 ) /*0x786023*/
      CloseDialog(v12, 0); /*0x786029*/
    v13 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x786033*/
    if ( v13 ) /*0x78603a*/
    {
      stru_B77D80.HashTable_field_0x48 &= ~0x20u; /*0x786045*/
      if ( !stru_B77D80.HashTable_field_0x48 ) /*0x78604b*/
        CloseDialog(v13, 0); /*0x786051*/
    }
    Current = (HWND)Dialog::GetCurrent(); /*0x786056*/
    result = (int)GetDlgItem(Current, 1344); /*0x786061*/
    if ( result ) /*0x786069*/
      return (int)SetFocus((HWND)result); /*0x78606c*/
  }
  return result; /*0x786072*/
}



// ==== 0x00786080  ObjectClass::HandleLogoutWOL  this=ObjectClass  sig=csp ====
char HandleLogoutWOL(ObjectClass *this)
{
  Skirmish *v1; // esi
  HWND v2; // eax
  int (__stdcall **v3)(LPVOID, void *, int *); // ecx
  int v4; // esi
  int (__stdcall **v5)(LPVOID, void *, int *); // ecx
  int v6; // esi
  int (__stdcall **v7)(LPVOID, void *, int *); // ecx
  int v8; // esi
  HANDLE *v9; // esi
  int v11; // [esp+7Ch] [ebp-8h] BYREF
  int v12; // [esp+80h] [ebp-4h] BYREF

  v1 = g_UIControlState; /*0x786085*/
  if ( g_UIControlState ) /*0x78608f*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x786093*/
    __3_YAXPAX_Z(v1); /*0x786099*/
    g_UIControlState = 0; /*0x7860a1*/
  }
  v2 = (HWND)Dialog::FindByHandle((Dialog *)0x11E); /*0x7860ac*/
  if ( v2 ) /*0x7860b3*/
    LOBYTE(v2) = CloseDialog(v2, 0); /*0x7860b9*/
  if ( byte_B77E75 ) /*0x7860c4*/
  {
    WinMainSetup_Setup_5DB6F0_Setup(); /*0x7860ca*/
    if ( ppv ) /*0x7860d6*/
    {
      v3 = *(int (__stdcall ***)(LPVOID, void *, int *))ppv; /*0x7860d8*/
      v4 = dword_B77E54; /*0x7860da*/
      v12 = 0; /*0x7860e4*/
      v11 = 0; /*0x7860ef*/
      if ( (*v3)(ppv, &unk_7F7CD0, &v12) >= 0 /*0x78610f*/
        && (*(int (__stdcall **)(int, void *, int *))(*(_DWORD *)v12 + 16))(v12, &unk_7F7550, &v11) >= 0 )
      {
        (*(void (__stdcall **)(int, int))(*(_DWORD *)v11 + 24))(v11, v4); /*0x786119*/
      }
      if ( v11 ) /*0x786122*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x786127*/
      if ( v12 ) /*0x786130*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 8))(v12); /*0x786135*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x786140*/
    }
    if ( g_UIPointerTable ) /*0x78614a*/
    {
      v5 = *(int (__stdcall ***)(LPVOID, void *, int *))g_UIPointerTable; /*0x78614c*/
      v6 = dword_B77E58; /*0x78614e*/
      v11 = 0; /*0x786158*/
      v12 = 0; /*0x786163*/
      if ( (*v5)(g_UIPointerTable, &unk_7F7CD0, &v11) >= 0 /*0x786183*/
        && (*(int (__stdcall **)(int, void *, int *))(*(_DWORD *)v11 + 16))(v11, &unk_7F7590, &v12) >= 0 )
      {
        (*(void (__stdcall **)(int, int))(*(_DWORD *)v12 + 24))(v12, v6); /*0x78618d*/
      }
      if ( v12 ) /*0x786196*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 8))(v12); /*0x78619b*/
      if ( v11 ) /*0x7861a4*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x7861a9*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)g_UIPointerTable + 8))(g_UIPointerTable); /*0x7861b4*/
    }
    if ( dword_AC1174 ) /*0x7861be*/
    {
      v7 = *(int (__stdcall ***)(LPVOID, void *, int *))dword_AC1174; /*0x7861c0*/
      v8 = dword_B77E5C; /*0x7861c2*/
      v11 = 0; /*0x7861cc*/
      v12 = 0; /*0x7861d7*/
      if ( (*v7)(dword_AC1174, &unk_7F7CD0, &v11) >= 0 /*0x7861f7*/
        && (*(int (__stdcall **)(int, void *, int *))(*(_DWORD *)v11 + 16))(v11, &unk_7F7570, &v12) >= 0 )
      {
        (*(void (__stdcall **)(int, int))(*(_DWORD *)v12 + 24))(v12, v8); /*0x786201*/
      }
      if ( v12 ) /*0x78620a*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 8))(v12); /*0x78620f*/
      if ( v11 ) /*0x786218*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x78621d*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)dword_AC1174 + 8))(dword_AC1174); /*0x786228*/
    }
    ppv = 0; /*0x786232*/
    g_UIPointerTable = 0; /*0x786238*/
    dword_AC1174 = 0; /*0x78623e*/
    v9 = &Handles; /*0x786244*/
    do /*0x786257*/
      CloseHandle(*v9++); /*0x78624c*/
    while ( (int)v9 < (int)g_WOL_RequestObject ); /*0x786257*/
    LOBYTE(v2) = HandleLogoutWOL_Handle((int)&dword_B76488); /*0x78625e*/
    byte_B77E75 = 0; /*0x786263*/
  }
  return (char)v2; /*0x78626a*/
}



// ==== 0x00786270  ObjectClass::Event_Process  this=ObjectClass  sig=csp ====
char Event_Process_786270(ObjectClass *this)
{
  HKEY phkResult; // [esp+4h] [ebp-110h] BYREF
  BYTE Data[4]; // [esp+8h] [ebp-10Ch] BYREF
  DWORD cbData; // [esp+Ch] [ebp-108h] BYREF
  DWORD Type; // [esp+10h] [ebp-104h] BYREF
  CHAR SubKey[256]; // [esp+14h] [ebp-100h] BYREF

  *(_DWORD *)Data = 0; /*0x78627e*/
  if ( g_Str_SOFTWARE_Westwood_Yuri_s_Reven ) /*0x786286*/
  {
    if ( strlen(g_Str_SOFTWARE_Westwood_Yuri_s_Reven) ) /*0x78628e*/
    {
      strcpy(SubKey, g_Str_SOFTWARE_Westwood_Yuri_s_Reven); /*0x7862b6*/
      if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &phkResult) ) /*0x7862d5*/
      {
        cbData = 4; /*0x7862fb*/
        RegQueryValueExA(phkResult, off_84A940, 0, &Type, Data, &cbData); /*0x786303*/
        RegCloseKey(phkResult); /*0x78630e*/
      }
    }
  }
  dword_B77E50 = Data[0]; /*0x786328*/
  if ( ppv ) /*0x78632e*/
    (*(void (__stdcall **)(LPVOID, _DWORD))(*(_DWORD *)ppv + 140))(ppv, *(_DWORD *)Data); /*0x786334*/
  if ( !g_UIPointerTable ) /*0x786341*/
    return 0; /*0x78637d*/
  Debug::Log(); /*0x786353*/
  (*(void (__stdcall **)(LPVOID, char *, int, int))(*(_DWORD *)g_UIPointerTable + 44))( /*0x786371*/
    g_UIPointerTable,
    &g_WindowManager.__pad_70[28],
    stru_B76AC4.ambientSoundController[3],
    3);
  return 1; /*0x78631f*/
}



// ==== 0x00786390  LoginFlowWOL_Reset  this=-  sig=csp ====
int __usercall LoginFlowWOL_Reset@<eax>(ObjectClass *a1@<edi>)
{
  HANDLE *v2; // esi
  BYTE Data[4]; // [esp+0h] [ebp-110h] BYREF
  HKEY phkResult; // [esp+4h] [ebp-10Ch] BYREF
  DWORD cbData; // [esp+8h] [ebp-108h] BYREF
  DWORD Type; // [esp+Ch] [ebp-104h] BYREF
  CHAR SubKey[256]; // [esp+10h] [ebp-100h] BYREF

  if ( byte_B77E75 ) /*0x78639d*/
    return 1; /*0x78639f*/
  byte_B77E75 = 1; /*0x7863ad*/
  LoadNetworkShareStrings(); /*0x7863b4*/
  Game::ResetFlags(); /*0x7863b9*/
  Network::InitPlayerSlots(); /*0x7863be*/
  *(_DWORD *)Data = 0; /*0x7863c8*/
  if ( g_Str_SOFTWARE_Westwood_Yuri_s_Reven ) /*0x7863d2*/
  {
    if ( strlen(g_Str_SOFTWARE_Westwood_Yuri_s_Reven) ) /*0x7863da*/
    {
      strcpy(SubKey, g_Str_SOFTWARE_Westwood_Yuri_s_Reven); /*0x786405*/
      if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &phkResult) ) /*0x786420*/
      {
        cbData = 4; /*0x786445*/
        RegQueryValueExA(phkResult, off_84A940, 0, &Type, Data, &cbData); /*0x78644d*/
        RegCloseKey(phkResult); /*0x786458*/
      }
    }
  }
  *(_DWORD *)Data = Data[0]; /*0x786467*/
  dword_B77E50 = Data[0]; /*0x78646b*/
  g_NetworkRematchState = Data[0] + 10496; /*0x786475*/
  ResetSystemWOL(a1); /*0x78647a*/
  LOBYTE(stru_B77D80.HashTable_field_0x40) = 1; /*0x786485*/
  v2 = &Handles; /*0x78648c*/
  do /*0x7864a6*/
    *v2++ = CreateEventA(0, 0, 0, 0); /*0x78649b*/
  while ( (int)v2 < (int)g_WOL_RequestObject ); /*0x7864a6*/
  return InitializeWestwoodOnline((ObjectClass *)g_hInstance); /*0x7863a4*/
}



// ==== 0x007864C0  ObjectClass::ConnectAndLoginWOL  this=MPCooperative  sig=csp ====
char __thiscall WOL_ConnectAndLogin(char *this)
{
  HANDLE *v2; // esi
  wchar_t *String; // eax
  int v4; // edi
  DWORD v5; // esi
  HWND v7; // eax
  HWND v8; // eax
  HWND DlgItem; // eax
  wchar_t *v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND Current; // eax
  wchar_t *v16; // eax
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax
  HWND v20; // eax
  HWND v21; // eax
  HWND v22; // eax
  _DWORD *v23; // eax
  int v24; // eax
  int v25; // esi
  char *v26; // eax
  int v27; // esi
  char *v28; // eax
  HANDLE *v29; // esi
  int v30; // edi
  DWORD v31; // esi
  HWND v32; // eax
  HWND v33; // eax
  HWND v34; // eax
  wchar_t *v35; // eax
  HWND v36; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  int v40; // esi
  char *v41; // esi
  void *v42; // eax
  _DWORD *v43; // ecx
  void *v44; // edx
  void *v45; // esi
  const char **p_Block; // ecx
  int v47; // [esp+44h] [ebp-B4h]
  int v48; // [esp+50h] [ebp-A8h]
  int Block; // [esp+64h] [ebp-94h] BYREF
  const char *v50; // [esp+68h] [ebp-90h] BYREF
  int v51; // [esp+6Ch] [ebp-8Ch] BYREF
  void **v52; // [esp+70h] [ebp-88h] BYREF
  _DWORD *v53; // [esp+74h] [ebp-84h]
  int v54[3]; // [esp+78h] [ebp-80h] BYREF
  int v55; // [esp+84h] [ebp-74h] BYREF
  char v56; // [esp+88h] [ebp-70h]
  char v57[108]; // [esp+8Ch] [ebp-6Ch] BYREF

  v50 = this; /*0x7864d1*/
  strcpy(this + 228, String::GetOrEmpty((char **)&dword_B73E40)); /*0x7864f6*/
  strcpy(this + 238, String::GetOrEmpty(&g_WebBrowserConfig)); /*0x786525*/
  v2 = &Handles; /*0x786534*/
  do /*0x786547*/
    ResetEvent(*v2++); /*0x78653c*/
  while ( (int)v2 < (int)g_WOL_RequestObject ); /*0x786547*/
  String = GetStringCSF(aTxtConnectingS, 0, g_Str_File_wonline_cpp, 9702); /*0x78655a*/
  WideString::Assign((wchar_t **)&Block, String); /*0x786564*/
  ShowUIMessage(16, (wchar_t **)&Block, 0); /*0x786575*/
  DeleteAndZero::Alt((void **)&Block); /*0x78657e*/
  (*(void (__stdcall **)(LPVOID, char *, int, _DWORD))(*(_DWORD *)ppv + 20))( /*0x78659b*/
    ppv,
    this,
    20,
    (unsigned __int8)dword_84A238);
  Block = 20; /*0x7865a4*/
  do /*0x786623*/
  {
    v4 = 30000; /*0x7865b6*/
    v5 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x7865bd*/
    if ( v5 == 258 ) /*0x7865c5*/
    {
      while ( 1 ) /*0x7865c7*/
      {
        v4 -= 100; /*0x7865c7*/
        if ( v4 <= 0 ) /*0x7865cc*/
          break; /*0x7865cc*/
        Game::ProcessIdle(); /*0x7865d2*/
        v5 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x7865e3*/
        if ( v5 != 258 ) /*0x7865eb*/
          goto LABEL_7; /*0x7865eb*/
      }
LABEL_21:
      v13 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7866e4*/
      if ( v13 ) /*0x7866f0*/
      {
        dword_B77DC8 = 0; /*0x7866f6*/
        CloseDialog(v13, 0); /*0x7866fc*/
      }
      Current = Dialog::GetCurrent(); /*0x786701*/
      DlgItem = GetDlgItem(Current, 1344); /*0x78670c*/
      if ( DlgItem ) /*0x786714*/
      {
LABEL_24:
        SetFocus(DlgItem); /*0x786716*/
        return 0; /*0x786729*/
      }
      return 0; /*0x786794*/
    }
LABEL_7:
    ResetEvent(*(&Handles + v5)); /*0x7865ed*/
    switch ( v5 ) /*0x7865fd*/
    {
      case 0u: /*0x7865fd*/
        v7 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x786630*/
        if ( v7 ) /*0x786637*/
        {
          dword_B77DC8 = 0; /*0x78663d*/
          CloseDialog(v7, 0); /*0x786643*/
        }
        v8 = Dialog::GetCurrent(); /*0x786648*/
        DlgItem = GetDlgItem(v8, 1344); /*0x786653*/
        if ( DlgItem ) /*0x78665b*/
          goto LABEL_24; /*0x78665b*/
        return 0; /*0x78665b*/
      case 5u: /*0x7865fd*/
        v10 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 9715); /*0x78668c*/
        ShowDialogConfirm(v10, 0, (int)GameLoop::Thunk, 0); /*0x786695*/
        v11 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x78669f*/
        if ( v11 ) /*0x7866a6*/
        {
          dword_B77DC8 = 0; /*0x7866ac*/
          CloseDialog(v11, 0); /*0x7866b2*/
        }
        v12 = Dialog::GetCurrent(); /*0x7866b7*/
        DlgItem = GetDlgItem(v12, 1344); /*0x7866c2*/
        if ( DlgItem ) /*0x7866ca*/
          goto LABEL_24; /*0x7866ca*/
        return 0; /*0x7866ca*/
      case 0x12u: /*0x7865fd*/
        goto LABEL_21; /*0x786607*/
    }
    if ( Block-- < 0 ) /*0x786614*/
    {
      v16 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 9722); /*0x786741*/
      ShowDialogConfirm(v16, 0, (int)GameLoop::Thunk, 0); /*0x78674a*/
      v17 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x786754*/
      if ( v17 ) /*0x78675b*/
      {
        dword_B77DC8 = 0; /*0x786761*/
        CloseDialog(v17, 0); /*0x786767*/
      }
      v18 = Dialog::GetCurrent(); /*0x78676c*/
      v19 = GetDlgItem(v18, 1344); /*0x786777*/
      if ( v19 ) /*0x78677f*/
        SetFocus(v19); /*0x786782*/
      return 0; /*0x786782*/
    }
  }
  while ( v5 != 2 ); /*0x786623*/
  v20 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x78679a*/
  if ( v20 ) /*0x7867a1*/
  {
    dword_B77DC8 = 0; /*0x7867a7*/
    CloseDialog(v20, 0); /*0x7867ad*/
  }
  v21 = Dialog::GetCurrent(); /*0x7867b2*/
  v22 = GetDlgItem(v21, 1344); /*0x7867bd*/
  if ( v22 ) /*0x7867c5*/
    SetFocus(v22); /*0x7867c8*/
  (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)ppv + 212))(ppv, 65552); /*0x7867db*/
  byte_B77DC0 = 0; /*0x7867e6*/
  ScenarioClass::LoadNetworkConfig((int)dword_A8B238); /*0x7867ec*/
  v55 = 0; /*0x7867f5*/
  v56 = 0; /*0x7867f9*/
  ReadRegistryOptionsWOL(&v55); /*0x7867fd*/
  ComPtr::Constructor(&v52); /*0x786806*/
  v52 = &rc_ptr<PlayerProfile>::`vftable'; /*0x786814*/
  if ( Flag::IsNot2(&v55) ) /*0x786818*/
  {
    v23 = LoadPlayerProfile(v54, (const char **)&dword_B73E40); /*0x78682a*/
    ComPtr::Set(&v52, v23[1]); /*0x786837*/
    v54[0] = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x786840*/
    ComPtr::Release(v54); /*0x786844*/
  }
  else
  {
    ComPtr::Set(&v52, dword_B75E4C); /*0x786856*/
  }
  if ( dword_A8B244 == 4 || dword_A8B244 == 5 ) /*0x786868*/
  {
    String::Assign((char **)&Block, v50 + 24); /*0x78687a*/
    unknown_libname_73(v54); /*0x786883*/
    v24 = String::Tokenize((const char **)&Block, 0, asc_8318B8, (void **)v54); /*0x786897*/
    if ( v24 >= 0 ) /*0x78689e*/
      String::Erase((const char **)&Block, 0, v24 + 1); /*0x7868a7*/
    String::AssignFromPtr((char **)&v50, (const char **)&Block); /*0x7868b5*/
    DeleteAndZero((void **)v54); /*0x7868be*/
    DeleteAndZero((void **)&Block); /*0x7868c7*/
    WOLOption::SetValue(&v50); /*0x7868d5*/
    DeleteAndZero((void **)&v50); /*0x7868de*/
    if ( Flag::IsNot2(&v55) ) /*0x7868e7*/
      SaveProfileWOL((int)v53, (const char **)&dword_B73E40); /*0x7868f9*/
  }
  strcpy(unk_A8B380, String::GetOrEmpty((char **)&dword_B73E40)); /*0x786922*/
  SessionClass::AssignSide(dword_A8B238, v53[7], 0); /*0x786938*/
  SessionClass::AssignColor(dword_A8B238, v53[8], 0); /*0x78694b*/
  SaveConfigWOL((int)dword_A8B238); /*0x786955*/
  SavePersonaConfigWOL(&dword_B73E40); /*0x78695f*/
  if ( g_UIPointerTable && strlen(unk_B761A8) ) /*0x786973*/
  {
    v25 = *(_DWORD *)g_UIPointerTable; /*0x78697f*/
    v47 = g_NetworkRematchState & 0xFFFF00; /*0x786991*/
    v26 = String::GetOrEmpty((char **)&dword_B73E40); /*0x786997*/
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(v25 + 20))( /*0x7869af*/
      g_UIPointerTable,
      unk_B761A8,
      g_WOL_GameConfig,
      v26,
      v47,
      -1,
      0,
      0);
    v27 = *(_DWORD *)g_UIPointerTable; /*0x7869c7*/
    v48 = g_NetworkRematchState & 0xFFFF00; /*0x7869c9*/
    v28 = String::GetOrEmpty((char **)&dword_B73E40); /*0x7869ca*/
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(v27 + 56))( /*0x7869e3*/
      g_UIPointerTable,
      unk_B761A8,
      g_WOL_GameConfig,
      v28,
      v48);
  }
  v29 = &Handles; /*0x7869ec*/
  do /*0x7869ff*/
    ResetEvent(*v29++); /*0x7869f4*/
  while ( (int)v29 < (int)g_WOL_RequestObject ); /*0x7869ff*/
  memset(v57, 0, sizeof(v57)); /*0x786a0c*/
  strcpy(&v57[36], String::GetOrEmpty((char **)&dword_B73E40)); /*0x786a36*/
  (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 188))(ppv, v57); /*0x786a48*/
  while ( 1 ) /*0x786a58*/
  {
    v30 = 30000; /*0x786a58*/
    v31 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x786a5f*/
    if ( v31 == 258 ) /*0x786a67*/
      break; /*0x786a67*/
LABEL_52:
    ResetEvent(*(&Handles + v31)); /*0x786a8f*/
    switch ( v31 ) /*0x786a9f*/
    {
      case 0u: /*0x786a9f*/
        v32 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x786abf*/
        if ( v32 ) /*0x786ac6*/
        {
          dword_B77DC8 = 0; /*0x786acc*/
          CloseDialog(v32, 0); /*0x786ad2*/
        }
        v33 = Dialog::GetCurrent(); /*0x786ad7*/
        v34 = GetDlgItem(v33, 1344); /*0x786ae2*/
        if ( v34 ) /*0x786aea*/
          goto LABEL_68; /*0x786aea*/
        goto LABEL_69; /*0x786aea*/
      case 5u: /*0x786a9f*/
        v35 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 9807); /*0x786b0c*/
        ShowDialogConfirm(v35, 0, (int)GameLoop::Thunk, 0); /*0x786b15*/
        v36 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x786b1f*/
        if ( v36 ) /*0x786b26*/
        {
          dword_B77DC8 = 0; /*0x786b2c*/
          CloseDialog(v36, 0); /*0x786b32*/
        }
        v37 = Dialog::GetCurrent(); /*0x786b37*/
        v34 = GetDlgItem(v37, 1344); /*0x786b42*/
        if ( v34 ) /*0x786b4a*/
          goto LABEL_68; /*0x786b4a*/
        goto LABEL_69; /*0x786b4a*/
      case 0x12u: /*0x786a9f*/
        goto LABEL_65; /*0x786aa9*/
      case 0xEu: /*0x786a9f*/
        goto LABEL_69; /*0x786ab2*/
    }
  }
  while ( 1 ) /*0x786a69*/
  {
    v30 -= 100; /*0x786a69*/
    if ( v30 <= 0 ) /*0x786a6e*/
      break; /*0x786a6e*/
    Game::ProcessIdle(); /*0x786a74*/
    v31 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x786a85*/
    if ( v31 != 258 ) /*0x786a8d*/
      goto LABEL_52; /*0x786a8d*/
  }
LABEL_65:
  v38 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x786b4e*/
  if ( v38 ) /*0x786b5a*/
  {
    dword_B77DC8 = 0; /*0x786b60*/
    CloseDialog(v38, 0); /*0x786b66*/
  }
  v39 = Dialog::GetCurrent(); /*0x786b6b*/
  v34 = GetDlgItem(v39, 1344); /*0x786b76*/
  if ( v34 ) /*0x786b7e*/
LABEL_68:
    SetFocus(v34); /*0x786b80*/
LABEL_69:
  String::ToLowerCopy((const char **)&dword_B73E40, (char **)&v51); /*0x786b87*/
  v40 = *((_DWORD *)g_WOL_ConnectionPool + (dword_B76548(&v51) & ((1 << dword_B7653C) - 1))); /*0x786bb5*/
  if ( !v40 ) /*0x786bba*/
    goto LABEL_72; /*0x786bba*/
  while ( !String::Compare((const char **)v40, (const char **)&v51) ) /*0x786bca*/
  {
    v40 = *(_DWORD *)(v40 + 8); /*0x786bcc*/
    if ( !v40 ) /*0x786bd1*/
      goto LABEL_72; /*0x786bd1*/
  }
  Block = 0; /*0x786c39*/
  v50 = 0; /*0x786c3d*/
  if ( (unsigned __int8)ConnectAndLoginWOL_Connect_7AE180(&v51, &v50) && v50 ) /*0x786c50*/
  {
    v42 = *(void **)v50; /*0x786c52*/
    Block = *(_DWORD *)v50; /*0x786c54*/
  }
  else
  {
    v42 = (void *)Block; /*0x786c5a*/
  }
  if ( v42 ) /*0x786c60*/
  {
    v43 = v53; /*0x786c66*/
    if ( v53 ) /*0x786c6c*/
    {
      v44 = (void *)v53[4]; /*0x786c72*/
      if ( v44 != v42 ) /*0x786c77*/
      {
        if ( !v44 ) /*0x786c7f*/
        {
          GadgetClass::TrackState((int)v53, (int)v42, 2); /*0x786c84*/
          SaveProfileWOL((int)v53, (const char **)&dword_B73E40); /*0x786c92*/
          v43 = v53; /*0x786c97*/
        }
        v45 = (void *)v43[4]; /*0x786ca0*/
        (*(void (__stdcall **)(LPVOID, void *))(*(_DWORD *)ppv + 184))(ppv, v45); /*0x786ca7*/
        (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 188))(ppv, v57); /*0x786cba*/
        Block = (int)v45; /*0x786ccf*/
        if ( (unsigned __int8)HashTable::Lookup(&v51, &v50) ) /*0x786cd3*/
        {
          p_Block = (const char **)&Block; /*0x786ce0*/
          goto LABEL_93; /*0x786ce4*/
        }
      }
    }
  }
  else
  {
LABEL_72:
    if ( v53 ) /*0x786bd9*/
    {
      v41 = (char *)v53[4]; /*0x786bdb*/
      if ( v41 ) /*0x786be0*/
        goto LABEL_97; /*0x786be0*/
    }
    SimpleDialogControl::Constructor(v54); /*0x786bea*/
    v54[0] = (int)&off_7F7624; /*0x786c03*/
    v41 = (char *)RunDialog(0xFEu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LobbyDlgProcWOL, (LPARAM)v54); /*0x786c0c*/
    if ( (int)v41 >= 0 ) /*0x786c10*/
    {
      ConnectAndLoginWOL_Connect(v54); /*0x786cea*/
    }
    else
    {
      v54[0] = (int)&off_7F7624; /*0x786c1a*/
      OwnerDrawControl::InitVtable(v54); /*0x786c1e*/
      v41 = 0; /*0x786c23*/
    }
    if ( v53 ) /*0x786cf5*/
    {
      GadgetClass::TrackState((int)v53, (int)v41, 3); /*0x786cfa*/
      SaveProfileWOL((int)v53, (const char **)&dword_B73E40); /*0x786d08*/
    }
    if ( v41 ) /*0x786d0f*/
    {
LABEL_97:
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 184))(ppv, v41); /*0x786d1a*/
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 188))(ppv, v57); /*0x786d2d*/
      v50 = v41; /*0x786d42*/
      if ( (unsigned __int8)HashTable::Lookup(&v51, v54) ) /*0x786d46*/
      {
        p_Block = &v50; /*0x786d4f*/
LABEL_93:
        ConnectAndLoginWOL_Connect_7ACBE0((int)&v51, p_Block); /*0x786d53*/
      }
    }
  }
  DeleteAndZero((void **)&v51); /*0x786d67*/
  v52 = &rc_ptr<PlayerProfile>::`vftable'; /*0x786d70*/
  ComPtr::Release(&v52); /*0x786d78*/
  return 1; /*0x78666a*/
}



// ==== 0x00786DC0  ObjectClass::method_786DC0  this=ObjectClass  sig=csp ====
char __thiscall sub_786DC0(ObjectClass *this)
{
  int v2; // esi
  char *v3; // eax
  char *v5; // [esp+0h] [ebp-18h]
  char *v6; // [esp+10h] [ebp-8h] BYREF
  char *v7; // [esp+14h] [ebp-4h] BYREF

  DeleteAndZero::Alt2((DeleteAndZero *)&g_WebBrowserConfig); /*0x786dcd*/
  v2 = 1; /*0x786dd2*/
  while ( 1 ) /*0x786de5*/
  {
    if ( !(*(int (__stdcall **)(LPVOID, int, char **, char **))(*(_DWORD *)ppv + 144))(ppv, v2, &v6, &v7) ) /*0x786dea*/
    {
      if ( v6 ) /*0x786dfa*/
      {
        if ( strlen(v6) ) /*0x786dfe*/
        {
          v5 = v6; /*0x786e08*/
          v3 = String::GetOrEmpty_Alt((String *)this); /*0x786e0b*/
          if ( !_strcmpi(v3, v5) ) /*0x786e11*/
            break; /*0x786e11*/
        }
      }
    }
    if ( ++v2 > 32 ) /*0x786e21*/
    {
      DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_EC[684]); /*0x786e28*/
      return 0; /*0x786e35*/
    }
  }
  String::Assign_Alt((String *)&g_WindowManager.__pad_EC[684], v6); /*0x786e40*/
  String::Assign_Alt((String *)&g_WebBrowserConfig, v7); /*0x786e4f*/
  LOBYTE(dword_84A238) = 0; /*0x786e54*/
  return 1; /*0x786e2f*/
}



// ==== 0x00786E70  ObjectClass::method_786E70  this=ObjectClass  sig=csp ====
int __thiscall sub_786E70(ObjectClass *this)
{
  void *ptr_0; // ecx
  int v3; // edi
  int i; // esi
  char *v5; // eax
  char *v6; // eax

  if ( !String::Length((String *)this) ) /*0x786e75*/
    return -1; /*0x786e75*/
  ptr_0 = g_WOL_UserList.AbstractClass; /*0x786e7e*/
  v3 = 1; /*0x786e84*/
  if ( (int)g_WOL_UserList.AbstractClass <= 1 ) /*0x786e8b*/
    return -1; /*0x786ed8*/
  for ( i = 248; ; i += 248 ) /*0x786e8d*/
  {
    v5 = 0; /*0x786e92*/
    if ( i >= 0 && v3 < (int)ptr_0 ) /*0x786e9a*/
      v5 = (char *)g_WOL_UserList.? + i; /*0x786ea1*/
    v6 = strchr(v5 + 24, 58); /*0x786ea9*/
    if ( v6 ) /*0x786eb3*/
    {
      if ( *v6 && (unsigned __int8)String::Equals_Alt((String *)this, v6 + 1) ) /*0x786ebe*/
        break; /*0x786ebe*/
    }
    ptr_0 = g_WOL_UserList.AbstractClass; /*0x786ec7*/
    if ( ++v3 >= (int)g_WOL_UserList.AbstractClass ) /*0x786ed6*/
      return -1; /*0x786ed6*/
  }
  return v3; /*0x786ed8*/
}



// ==== 0x00786EF0  ObjectClass::LoginFlowWOL_Open  this=ObjectClass  sig=csp ====
char LoginFlowWOL_Open(ObjectClass *this)
{
  const char *v2; // [esp-8h] [ebp-110h]
  int v3; // [esp-4h] [ebp-10Ch]
  char Buffer[260]; // [esp+4h] [ebp-104h] BYREF

  if ( dword_B77DF8 == -2147221385 /*0x786f26*/
    || dword_B77DF8 == -2147221384
    || dword_B77DF8 == -2147221390
    || dword_B77DF8 == -2147221388
    || dword_B77DF8 == -2147221387
    || dword_B77DF8 == -2147221386 )
  {
    if ( ShowDialogConfirm(&word_B77AD0, 4, (unsigned __int8 (*)(void))GameLoop::Thunk, 0) == 6 ) /*0x786f60*/
    {
      switch ( dword_B77DF8 ) /*0x786f78*/
      {
        case -2147221390: /*0x786f78*/
          v3 = dword_B77E50; /*0x786f99*/
          v2 = aHttpApiregiste_1; /*0x786f9a*/
          goto LABEL_16; /*0x786f9f*/
        case -2147221388: /*0x786f78*/
          sprintf(Buffer, "http://apiregister.westwood.com/support/disabled_%d.html", dword_B77E50); /*0x786fac*/
          break; /*0x786fac*/
        case -2147221387: /*0x786f78*/
          sprintf(Buffer, "http://apiregister.westwood.com/support/serialbanned_%d.html", dword_B77E50); /*0x786fb9*/
          break; /*0x786fb9*/
        case -2147221386: /*0x786f78*/
          v3 = dword_B77E50; /*0x786fbb*/
          v2 = aHttpApiregiste_4; /*0x786fbc*/
LABEL_16:
          sprintf(Buffer, v2, v3); /*0x786fc1*/
          break; /*0x786fc6*/
        case -2147221385: /*0x786f78*/
          sprintf(Buffer, "http://apiregister.westwood.com/support/serialunknown_%d.html", dword_B77E50); /*0x786f8a*/
          break; /*0x786f8a*/
        case -2147221384: /*0x786f78*/
          sprintf(Buffer, "http://apiregister.westwood.com/support/skuserialmismatch_%d.html", dword_B77E50); /*0x786f97*/
          break; /*0x786f97*/
        default:
          break;
      }
      OpenURLWOL(Buffer, 1); /*0x786fce*/
    }
    return 1; /*0x786fdc*/
  }
  else
  {
    ShowDialogConfirm(&word_B77AD0, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x786f36*/
    return 0; /*0x786f3b*/
  }
}



// ==== 0x00787010  ObjectClass::LoginFlowWOL  this=ObjectClass  sig=csp ====
int LoginFlowWOL(ObjectClass *this)
{
  ObjectClass *v1; // edi
  int result; // eax
  wchar_t *StringCSF; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // esi
  char *v7; // eax
  int v8; // esi
  String *v9; // edi
  char *v10; // eax
  String *v11; // edi
  char *v12; // eax
  char **ConfigWOL; // eax
  int v14; // eax
  unsigned __int16 v15; // si
  Dialog *Dialog; // esi
  HWND DlgItem; // eax
  TechnoTypeClass *v18; // ecx
  TechnoTypeClass *v19; // ecx
  TechnoTypeClass *v20; // ecx
  ObjectClass *PlayerProfile; // eax
  String *v22; // ebp
  int ptr_0; // ecx
  int v24; // esi
  int v25; // edi
  char *v26; // eax
  char *v27; // eax
  int v28; // eax
  char *v29; // esi
  char *v30; // eax
  HWND v31; // eax
  HWND Current; // eax
  HWND v33; // eax
  unsigned __int8 v34; // [esp-8h] [ebp-50h]
  char *v35; // [esp-4h] [ebp-4Ch]
  int v36; // [esp-4h] [ebp-4Ch]
  ObjectClass *v37; // [esp+0h] [ebp-48h]
  char v38; // [esp+13h] [ebp-35h]
  DeleteAndZero v39; // [esp+14h] [ebp-34h] BYREF
  int v40; // [esp+20h] [ebp-28h]
  Flag v41; // [esp+24h] [ebp-24h] BYREF
  int v42; // [esp+30h] [ebp-18h]
  Flag v43; // [esp+34h] [ebp-14h] BYREF

  v38 = 0; /*0x787019*/
  dword_B77DF8 = 0; /*0x78701e*/
  result = LoginFlowWOL_Reset(v1); /*0x787024*/
  if ( result != 1 ) /*0x78702c*/
    return result; /*0x78702c*/
  memset(&stru_B76AC4.ambientSoundController[4], 0, 0x10Cu); /*0x787043*/
  memset(&g_WindowManager.__pad_EC[84], 0, 0x10Cu); /*0x78704f*/
  *(_DWORD *)&g_WindowManager.__pad_EC[636] = 0; /*0x78705d*/
  stru_B76AC4.? = 0; /*0x787063*/
  g_WOL_UserList.owningHouseIndex = 0; /*0x787069*/
  stru_B77D80.HashTable_field_0x50 = 0; /*0x78706f*/
  v40 = 0; /*0x787075*/
  StringCSF = GetStringCSF(g_Str_TXT_FETCHING_SERVLIST, 0, g_Str_File_wonline_cpp, 24300); /*0x787079*/
  WideString::Assign((wchar_t **)&v39, StringCSF); /*0x787083*/
  ShowUIMessage(16, (wchar_t **)&v39, 0); /*0x787092*/
  DeleteAndZero::Alt(&v39); /*0x78709b*/
  v4 = 8960; /*0x7870a5*/
  if ( dword_A8B244 != 3 ) /*0x7870ad*/
    v4 = 10496; /*0x7870af*/
  v5 = LoginWOL(v4); /*0x7870b4*/
  if ( v5 ) /*0x7870bb*/
  {
    v38 = 1; /*0x7870c0*/
    v40 = -2; /*0x7870c5*/
    if ( v5 == 2 ) /*0x7870cd*/
      v40 = -1; /*0x7870cf*/
  }
  *(_DWORD *)v43.__pad_0 = 0; /*0x7870db*/
  LOBYTE(v43.Flag_field_0x04) = 0; /*0x7870df*/
  ReadRegistryOptionsWOL((ObjectClass *)&v43); /*0x7870e4*/
  if ( v38 ) /*0x7870ef*/
    goto LABEL_98; /*0x7870ef*/
  if ( InfantryClass::SetField6((InfantryClass *)&v43) ) /*0x7870f9*/
  {
    ReadAutoLoginWOL((ObjectClass *)&v39); /*0x78710f*/
    if ( String::Length((String *)&v39) ) /*0x787118*/
    {
      DeleteAndZero::Alt2((DeleteAndZero *)&g_WebBrowserConfig); /*0x78712a*/
      v6 = 1; /*0x78712f*/
      while ( 1 ) /*0x787142*/
      {
        if ( !(*(int (__stdcall **)(LPVOID, int, Flag *, int *))(*(_DWORD *)ppv + 144))( /*0x787147*/
                ppv,
                v6,
                &v41,
                &v41.Flag_field_0x08) )
        {
          if ( *(_DWORD *)v41.__pad_0 ) /*0x787157*/
          {
            if ( strlen(*(const char **)v41.__pad_0) ) /*0x78715b*/
            {
              v35 = *(char **)v41.__pad_0; /*0x787165*/
              v7 = String::GetOrEmpty_Alt((String *)&v39); /*0x78716a*/
              if ( !_strcmpi(v7, v35) ) /*0x787170*/
                break; /*0x787170*/
            }
          }
        }
        if ( ++v6 > 32 ) /*0x787180*/
        {
          DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_EC[684]); /*0x787187*/
          goto LABEL_48; /*0x78718c*/
        }
      }
      String::Assign_Alt((String *)&g_WindowManager.__pad_EC[684], *(const char **)v41.__pad_0); /*0x78719b*/
      String::Assign_Alt((String *)&g_WebBrowserConfig, (const char *)v41.Flag_field_0x08); /*0x7871aa*/
      v8 = -1; /*0x7871b4*/
      LOBYTE(dword_84A238) = 0; /*0x7871ba*/
      if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x7871cb*/
      {
        LoadPlayerProfile((ObjectClass *)&v41.Flag_field_0x08, (const char **)&v39); /*0x7871d9*/
        if ( !v42 ) /*0x7871e4*/
          goto LABEL_29; /*0x7871e4*/
        v9 = (String *)(v42 + 12); /*0x7871e6*/
        if ( !String::Length((String *)(v42 + 12)) ) /*0x7871eb*/
          goto LABEL_29; /*0x7871eb*/
        v8 = 1; /*0x7871f9*/
        if ( (int)g_WOL_UserList.AbstractClass <= 1 ) /*0x787200*/
          goto LABEL_29; /*0x787200*/
        while ( 1 ) /*0x78720d*/
        {
          *(_DWORD *)v41.__pad_0 = 0; /*0x78720d*/
          GetBuddyEntryWOL(&g_WOL_UserList, &v41, v8); /*0x787211*/
          v10 = strchr((const char *)(*(_DWORD *)v41.__pad_0 + 24), 58); /*0x787220*/
          if ( v10 ) /*0x78722a*/
          {
            if ( *v10 && (unsigned __int8)String::Equals_Alt(v9, v10 + 1) ) /*0x787235*/
              break; /*0x787235*/
          }
          if ( ++v8 >= (int)g_WOL_UserList.AbstractClass ) /*0x787246*/
            goto LABEL_29; /*0x787246*/
        }
        if ( v8 == -1 ) /*0x78724d*/
LABEL_29:
          v8 = dword_B76468; /*0x78724f*/
        v41.Flag_field_0x08 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x787255*/
      }
      else
      {
        LoadPlayerProfile((ObjectClass *)&v41.Flag_field_0x08, (const char **)&v39); /*0x78726a*/
        if ( v42 ) /*0x787275*/
        {
          if ( String::Length((String *)(v42 + 12)) ) /*0x78727a*/
          {
            v11 = (String *)(v42 + 12); /*0x78728f*/
            if ( String::Length((String *)(v42 + 12)) && (v8 = 1, (int)g_WOL_UserList.AbstractClass > 1) ) /*0x7872a9*/
            {
              while ( 1 ) /*0x7872b6*/
              {
                *(_DWORD *)v41.__pad_0 = 0; /*0x7872b6*/
                GetBuddyEntryWOL(&g_WOL_UserList, &v41, v8); /*0x7872ba*/
                v12 = strchr((const char *)(*(_DWORD *)v41.__pad_0 + 24), 58); /*0x7872c9*/
                if ( v12 ) /*0x7872d3*/
                {
                  if ( *v12 && (unsigned __int8)String::Equals_Alt(v11, v12 + 1) ) /*0x7872de*/
                    break; /*0x7872de*/
                }
                if ( ++v8 >= (int)g_WOL_UserList.AbstractClass ) /*0x7872ef*/
                  goto LABEL_40; /*0x7872ef*/
              }
            }
            else
            {
LABEL_40:
              v8 = -1; /*0x7872f1*/
            }
          }
          else
          {
            v8 = dword_B76468; /*0x787283*/
          }
        }
        v41.Flag_field_0x08 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x7872f4*/
      }
      ComPtr::Release((ComPtr *)&v41.Flag_field_0x08); /*0x7872fc*/
      if ( v8 != -1 ) /*0x787304*/
      {
        dword_B76468 = v8; /*0x787309*/
        if ( v8 >= 1 && v8 < (int)g_WOL_UserList.AbstractClass ) /*0x787317*/
        {
          *(_DWORD *)v41.__pad_0 = 0; /*0x787324*/
          GetBuddyEntryWOL(&g_WOL_UserList, &v41, v8); /*0x787328*/
          if ( ConnectAndLoginWOL(*(char **)v41.__pad_0) ) /*0x787331*/
          {
            DeleteAndZero((ObjectClass *)&v39); /*0x78733e*/
            return 1; /*0x78734f*/
          }
        }
        v38 = LoginFlowWOL_Open(v37); /*0x787355*/
      }
    }
LABEL_48:
    DeleteAndZero((ObjectClass *)&v39); /*0x787359*/
  }
  if ( !String::Length((String *)&g_WindowManager.__pad_EC[684]) && (unsigned __int8)Flag::IsNot2(&v43) ) /*0x787374*/
  {
    ConfigWOL = LoadConfigWOL((ObjectClass *)&v41.Flag_field_0x08); /*0x787381*/
    String::Reassign((String *)&g_WindowManager.__pad_EC[684], (const char **)ConfigWOL); /*0x78738c*/
    DeleteAndZero((ObjectClass *)&v41.Flag_field_0x08); /*0x787395*/
  }
  String::Assign((String *)&v41, &g_INI_DefaultBuffer); /*0x7873a3*/
  ReadSettingsWOL((ObjectClass *)&v41); /*0x7873ac*/
  DeleteAndZero((ObjectClass *)&v41); /*0x7873b5*/
  if ( v38 ) /*0x7873c0*/
    return 0; /*0x7873cb*/
  Debug::Log(); /*0x7873d1*/
  SimpleDialogControl::Constructor((SimpleDialogControl *)&v43.Flag_field_0x08); /*0x7873dd*/
  v43.Flag_field_0x08 = (int)&off_7F7624; /*0x7873eb*/
  v14 = -((unsigned __int8)Flag::IsNot2(&v43) != 0); /*0x7873f6*/
  LOBYTE(v14) = v14 & 0xF2; /*0x7873f8*/
  v15 = v14 + 285; /*0x7873ff*/
  LoginFlowWOL_Load_72C600(); /*0x787401*/
  Screen::Capture(1, 0, (int)&off_7F7624, 0); /*0x78740a*/
  Dialog = (Dialog *)CreateDialog( /*0x787420*/
                       v15,
                       (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))OptionsDlgProcWOL,
                       (LPARAM)&v43.Flag_field_0x08);
  Dialog::Show(Dialog); /*0x787424*/
  if ( !String::Length((String *)&g_WindowManager.__pad_EC[684]) || String::Length((String *)&g_WebBrowserConfig) ) /*0x78743c*/
    DlgItem = GetDlgItem((HWND)Dialog, 1576); /*0x787452*/
  else
    DlgItem = GetDlgItem((HWND)Dialog, 1836); /*0x78744a*/
  SetFocus(DlgItem); /*0x787459*/
  while ( !(unsigned __int8)ObjectClass::Release(&v43.Flag_field_0x08) ) /*0x787463*/
  {
    if ( Game::ProcessIdle(v18) ) /*0x78746c*/
      break; /*0x787473*/
    if ( (unsigned __int8)Dialog::PumpMessages() ) /*0x787475*/
      break; /*0x78747c*/
    LOBYTE(v19) = 0; /*0x78747e*/
    ScreenSaver::Process(v19, v37); /*0x787480*/
  }
  Dialog::Destroy(Dialog); /*0x787494*/
  LoginFlowWOL_Destroy_72C650(v37); /*0x787499*/
  if ( ObjectClass::GetMember01(&v43.Flag_field_0x08) == 2 ) /*0x7874aa*/
  {
    v38 = 1; /*0x7874ac*/
LABEL_97:
    v43.Flag_field_0x08 = (int)&off_7F7624; /*0x787704*/
    OwnerDrawControl::InitVtable((OwnerDrawControl *)&v43.Flag_field_0x08); /*0x78770c*/
LABEL_98:
    v31 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x787711*/
    if ( v31 ) /*0x78771d*/
    {
      stru_B77D80.HashTable_field_0x48 = 0; /*0x787723*/
      CloseDialog(v31, 0); /*0x787729*/
    }
    Current = (HWND)Dialog::GetCurrent(); /*0x78772e*/
    v33 = GetDlgItem(Current, 1344); /*0x787739*/
    if ( v33 ) /*0x787741*/
      SetFocus(v33); /*0x787744*/
    if ( !v38 ) /*0x787750*/
      LoginFlowWOL_Open(v37); /*0x787752*/
    LOBYTE(stru_B77D80.HashTable_field_0x40) = 1; /*0x78775b*/
    return v40; /*0x787757*/
  }
  Game::ProcessIdle(v20); /*0x7874b6*/
  LOBYTE(stru_B77D80.HashTable_field_0x40) = 0; /*0x7874bf*/
  *(_DWORD *)v41.__pad_0 = 0; /*0x7874c6*/
  LOBYTE(v41.Flag_field_0x04) = 0; /*0x7874ca*/
  ReadRegistryOptionsWOL((ObjectClass *)&v41); /*0x7874cf*/
  ComPtr::Constructor((ComPtr *)&v41.Flag_field_0x08); /*0x7874d8*/
  v41.Flag_field_0x08 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x7874e6*/
  if ( (unsigned __int8)Flag::IsNot2(&v41) ) /*0x7874ea*/
  {
    PlayerProfile = LoadPlayerProfile((ObjectClass *)&v39, (const char **)&g_WindowManager.__pad_EC[684]); /*0x7874fc*/
    ComPtr::Set((ComPtr *)&v41.Flag_field_0x08, (int)PlayerProfile->?); /*0x787509*/
    *(_DWORD *)v39.__pad_0 = &rc_ptr<PlayerProfile>::`vftable'; /*0x787512*/
    ComPtr::Release((ComPtr *)&v39); /*0x787516*/
  }
  else
  {
    ComPtr::Set((ComPtr *)&v41.Flag_field_0x08, stru_B75E48.ComPtr_field_0x04); /*0x787528*/
  }
  v22 = (String *)(v42 + 12); /*0x787531*/
  if ( !String::Length((String *)(v42 + 12)) ) /*0x787536*/
    goto LABEL_82; /*0x787536*/
  ptr_0 = (int)g_WOL_UserList.AbstractClass; /*0x787543*/
  v24 = 1; /*0x787549*/
  if ( (int)g_WOL_UserList.AbstractClass <= 1 ) /*0x787550*/
  {
LABEL_77:
    v28 = dword_B76468; /*0x78759d*/
    goto LABEL_78; /*0x78759d*/
  }
  v25 = 248; /*0x787552*/
  while ( 1 ) /*0x787557*/
  {
    v26 = 0; /*0x787557*/
    if ( v25 >= 0 && v24 < ptr_0 ) /*0x78755f*/
      v26 = (char *)g_WOL_UserList.? + v25; /*0x787566*/
    v27 = strchr(v26 + 24, 58); /*0x78756e*/
    if ( v27 ) /*0x787578*/
    {
      if ( *v27 && (unsigned __int8)String::Equals_Alt(v22, v27 + 1) ) /*0x787583*/
        break; /*0x787583*/
    }
    ptr_0 = (int)g_WOL_UserList.AbstractClass; /*0x78758c*/
    ++v24; /*0x787592*/
    v25 += 248; /*0x787593*/
    if ( v24 >= (int)g_WOL_UserList.AbstractClass ) /*0x78759b*/
      goto LABEL_77; /*0x78759b*/
  }
  if ( v24 == -1 ) /*0x7875b5*/
  {
LABEL_82:
    v28 = dword_B76468; /*0x7875c6*/
    ptr_0 = (int)g_WOL_UserList.AbstractClass; /*0x7875cb*/
  }
  else
  {
    ptr_0 = (int)g_WOL_UserList.AbstractClass; /*0x7875b7*/
    v28 = v24; /*0x7875bd*/
    dword_B76468 = v24; /*0x7875bf*/
  }
LABEL_78:
  if ( v28 < ptr_0 ) /*0x7875a4*/
  {
    if ( v28 != -1 ) /*0x7875d6*/
    {
      if ( v28 >= 1 ) /*0x7875f0*/
        goto LABEL_87; /*0x7875f0*/
LABEL_96:
      v41.Flag_field_0x08 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x7876f1*/
      ComPtr::Release((ComPtr *)&v41.Flag_field_0x08); /*0x7876fd*/
      goto LABEL_97; /*0x7876fd*/
    }
  }
  else
  {
    dword_B76468 = -1; /*0x7875a6*/
  }
  if ( ptr_0 <= 1 ) /*0x7875db*/
    goto LABEL_96; /*0x7875db*/
  v28 = 1; /*0x7875e1*/
  dword_B76468 = 1; /*0x7875e6*/
LABEL_87:
  if ( v28 >= ptr_0 || !ConnectAndLoginWOL((char *)g_WOL_UserList.? + 248 * v28) ) /*0x787614*/
    goto LABEL_96; /*0x78761b*/
  if ( byte_B77E68 && (unsigned __int8)Flag::IsNot2(&v41) ) /*0x78762e*/
  {
    v36 = *(_DWORD *)(v42 + 16); /*0x787644*/
    v34 = dword_84A238; /*0x787645*/
    v29 = String::GetOrEmpty((String *)&g_WebBrowserConfig); /*0x787655*/
    v30 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x787657*/
    FindChannelWOL(v30, (int)v29, v34, v36); /*0x787660*/
    SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x78766a*/
  }
  if ( InfantryClass::SetField6((InfantryClass *)&v41) && ReadWOLLobbyPlayerOption() ) /*0x78767c*/
  {
    Screen::Capture(1, 0, (int)&off_7F7624, (int)v22); /*0x787689*/
    SimpleDialogControl::Constructor((SimpleDialogControl *)&v39); /*0x787692*/
    *(_DWORD *)v39.__pad_0 = &off_7F7624; /*0x787697*/
    LoginFlowWOL_Load(); /*0x78769b*/
    RunDialog(0x112u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_79AE00, (LPARAM)&v39); /*0x7876af*/
    LoginFlowWOL_Destroy(v37); /*0x7876b4*/
    *(_DWORD *)v39.__pad_0 = &off_7F7624; /*0x7876bd*/
    OwnerDrawControl::InitVtable((OwnerDrawControl *)&v39); /*0x7876c1*/
  }
  v41.Flag_field_0x08 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x7876ca*/
  ComPtr::Release((ComPtr *)&v41.Flag_field_0x08); /*0x7876d2*/
  v43.Flag_field_0x08 = (int)&off_7F7624; /*0x7876db*/
  OwnerDrawControl::InitVtable((OwnerDrawControl *)&v43.Flag_field_0x08); /*0x7876df*/
  return 1; /*0x787348*/
}



// ==== 0x00787770  NetworkLobbyWOL  this=-  sig=csp ====
int __fastcall NetworkLobbyWOL(HWND hWnd, char a2)
{
  char *v3; // eax
  int i; // edi
  int v5; // eax
  int j; // esi
  int v7; // eax
  int k; // esi
  int result; // eax
  HANDLE *v10; // esi
  int v11; // eax
  char *v12; // ebx
  char *v13; // edi
  void *v14; // ebx
  char *v15; // esi
  wchar_t *v16; // eax
  wchar_t *StringCSF; // eax
  int m; // esi
  int v19; // esi
  wchar_t *v20; // esi
  HWND v21; // eax
  HANDLE *v22; // esi
  wchar_t *v23; // esi
  HWND v24; // eax
  int v25; // eax
  TechnoTypeClass *v26; // ecx
  DWORD n; // esi
  HWND v28; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  HWND v31; // eax
  TechnoTypeClass *v32; // ecx
  DWORD ii; // ebx
  HWND v34; // eax
  HWND v35; // eax
  HWND v36; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  HWND v41; // eax
  HWND v42; // eax
  HWND v43; // eax
  HWND v44; // eax
  HWND v45; // eax
  TechnoTypeClass *v46; // ecx
  HWND v47; // eax
  HWND v48; // eax
  HWND v49; // eax
  unsigned int v50; // eax
  unsigned int jj; // ebp
  ObjectClass *v52; // esi
  ObjectClass *v53; // edi
  unsigned int v54; // ecx
  int *lastLayer; // ebp
  int v56; // esi
  int *v57; // edi
  int v58; // ebx
  int v59; // esi
  int v60; // edx
  int v61; // ecx
  int v62; // eax
  StringVector v63; // [esp+4h] [ebp-2Ch] BYREF
  char v64; // [esp+23h] [ebp-Dh]
  int v65; // [esp+24h] [ebp-Ch]
  String v66; // [esp+28h] [ebp-8h] BYREF

  v64 = a2; /*0x787780*/
  v65 = 0; /*0x787786*/
  if ( BYTE1(stru_B77D80.HashTable_field_0x40) /*0x7877bb*/
    && *(_DWORD *)&dword_A8B238 == 4
    && dword_A8B244 == 3
    && dword_A8D584 != -1
    && dword_A8D584 < 8 )
  {
    WideString::Assign((wchar_t **)&v66, (wchar_t *)&unk_A8D1FC + 56 * dword_A8D584); /*0x7877d8*/
    ToWideStringCharAlt((char **)&v66.m_3[1], (const wchar_t **)&v66); /*0x7877e5*/
    DeleteAndZero::Alt((DeleteAndZero *)&v66); /*0x7877ee*/
    v3 = String::GetOrEmpty((String *)&v66.m_3[1]); /*0x7877fe*/
    if ( !_strnicmp(v3, unk_A8B380, 0x14u) ) /*0x787804*/
    {
      if ( !dword_A8B3AC ) /*0x78781b*/
      {
        unknown_libname_73(&v66); /*0x78782e*/
        memset(&v63, 0, 12); /*0x78784e*/
        for ( i = 0; i < *(_DWORD *)&stru_B736F8; ++i ) /*0x787859*/
        {
          DynamicStringArray::Get(&stru_B736F8, (char **)&v66, i); /*0x787866*/
          StringVector::Insert(&v63, (const char **)&v66, *(int *)v63.__pad_0); /*0x787875*/
        }
LABEL_24:
        DeleteAndZero((ObjectClass *)&v66); /*0x78795b*/
        Network_Delete(*(int *)v63.__pad_0, v63.StringVector_field_0x04, (void **)v63.StringVector_field_0x08); /*0x787960*/
        goto LABEL_25; /*0x787960*/
      }
      if ( dword_A8B3AC == 1 ) /*0x787890*/
      {
        memset(&v63, 0, 12); /*0x78789f*/
        unknown_libname_73(&v66); /*0x7878a7*/
        Array::CleanupArrayWOL((Array *)&v63); /*0x7878ae*/
        v5 = *(_DWORD *)&g_WindowManager.__pad_EC[68]; /*0x7878b3*/
        for ( j = 0; j < *(int *)&g_WindowManager.__pad_EC[68]; ++j ) /*0x7878bc*/
        {
          if ( j >= 0 && j < v5 ) /*0x7878c4*/
            String::Reassign(&v66, (const char **)(*(_DWORD *)&g_WindowManager.__pad_EC[76] + 4 * j)); /*0x7878d3*/
          StringVector::Insert(&v63, (const char **)&v66, *(int *)v63.__pad_0); /*0x7878e2*/
          v5 = *(_DWORD *)&g_WindowManager.__pad_EC[68]; /*0x7878e7*/
        }
        goto LABEL_24; /*0x7878ef*/
      }
    }
    else if ( !dword_A8B3AC ) /*0x7878f9*/
    {
      memset(&v63, 0, 12); /*0x787904*/
      unknown_libname_73(&v66); /*0x78790c*/
      Array::CleanupArrayWOL((Array *)&v63); /*0x787913*/
      v7 = *(_DWORD *)stru_B76510.__pad_0; /*0x787918*/
      for ( k = 0; k < *(int *)stru_B76510.__pad_0; ++k ) /*0x787921*/
      {
        if ( k >= 0 && k < v7 ) /*0x787929*/
          String::Reassign(&v66, (const char **)(stru_B76510.StringVector_field_0x08 + 4 * k)); /*0x787939*/
        StringVector::Insert(&v63, (const char **)&v66, *(int *)v63.__pad_0); /*0x787948*/
        v7 = *(_DWORD *)stru_B76510.__pad_0; /*0x78794d*/
      }
      goto LABEL_24; /*0x787955*/
    }
LABEL_25:
    DeleteAndZero((ObjectClass *)&v66.m_3[1]); /*0x787965*/
  }
  BYTE1(stru_B77D80.HashTable_field_0x40) = 0; /*0x78796e*/
  g_NetworkLobbyState = 0; /*0x78797d*/
  if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x78798c*/
  {
    (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)ppv + 180))(ppv, dword_A8B3AC); /*0x78799d*/
    if ( !byte_B77E10 ) /*0x7879aa*/
      InitVersionStringsWOL((ObjectClass *)v63.StringVector_field_0x0C); /*0x7879ac*/
  }
  Network::Init(); /*0x7879b1*/
  if ( !BYTE2(stru_B77D80.HashTable_field_0x40) /*0x7879c7*/
    || (result = LoginFlowWOL((ObjectClass *)v63.StringVector_field_0x0C), result == 1) )
  {
    v10 = &Handles; /*0x7879d3*/
    do /*0x7879e6*/
      ResetEvent(*v10++); /*0x7879db*/
    while ( (int)v10 < (int)g_WOL_RequestObject ); /*0x7879e6*/
    if ( !hWnd ) /*0x7879ea*/
    {
      Screen::Capture(1, 0, 0, 0); /*0x7879f4*/
      Network_Load_72CD60(); /*0x7879f9*/
      hWnd = (HWND)CreateDialog(0x113u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WOLobby::DlgProc, 0); /*0x787a13*/
      if ( String::Length((String *)&g_WindowManager.Array_field_0x38) ) /*0x787a15*/
      {
        v11 = String::Length((String *)&g_WindowManager.Array_field_0x38); /*0x787a27*/
        v12 = (char *)__2_YAPAXI_Z(v11 + 1); /*0x787a33*/
        if ( v12 ) /*0x787a3a*/
        {
          v13 = String::GetOrEmpty((String *)&g_WindowManager.Array_field_0x38); /*0x787a4a*/
          v63.StringVector_field_0x08 = (int)asc_83F328; /*0x787a51*/
          v63.StringVector_field_0x04 = (int)strcpy(v12, v13); /*0x787a66*/
          v15 = strtok((char *)v63.StringVector_field_0x04, (const char *)v63.StringVector_field_0x08); /*0x787a74*/
          while ( v15 ) /*0x787a7b*/
          {
            String::Assign((String *)&v66.m_3[1], v15); /*0x787a82*/
            CharStringToWide((wchar_t **)&v66, (const char **)&v66.m_3[1]); /*0x787a8f*/
            DeleteAndZero((ObjectClass *)&v66.m_3[1]); /*0x787a98*/
            v16 = WideString::GetOrEmpty((wchar_t **)&v66); /*0x787aa1*/
            Dialog::ShowMessage(-1, (size_t)v16); /*0x787aae*/
            v15 = strtok(0, asc_83F328); /*0x787ac6*/
            DeleteAndZero::Alt((DeleteAndZero *)&v66); /*0x787ac8*/
          }
          Dialog::ShowMessage(-1, (size_t)asc_830174); /*0x787add*/
          DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.Array_field_0x38); /*0x787aea*/
          __3_YAXPAX_Z(v14); /*0x787af0*/
        }
      }
      StringCSF = GetStringCSF(aGuiLogincomple, 0, g_Str_File_wonline_cpp, 10388); /*0x787b09*/
      WideString::Assign((wchar_t **)&v66.m_3[1], StringCSF); /*0x787b13*/
      ShowUIMessage(16, (wchar_t **)&v66.m_3[1], 0); /*0x787b23*/
      DeleteAndZero::Alt((DeleteAndZero *)&v66.m_3[1]); /*0x787b2c*/
    }
    dword_B77DE0 = 1; /*0x787b3f*/
    ++dword_B77DDC; /*0x787b49*/
    (*(void (__stdcall **)(LPVOID, _DWORD))(*(_DWORD *)ppv + 176))(ppv, 0); /*0x787b53*/
    for ( m = 0; m < *(int *)g_WindowManager.__pad_0; ++m ) /*0x787b62*/
      Object::DtorWithDelete((Object *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * m), 0); /*0x787b6e*/
    v19 = 0; /*0x787b82*/
    for ( *(_DWORD *)g_WindowManager.__pad_0 = 0; v19 < *(int *)&stru_B76900.needsRedraw; ++v19 ) /*0x787b8c*/
      Object::DtorWithDelete((Object *)(&stru_B76900.parachute->AnimClass_field_0x0 + v19), 0); /*0x787b97*/
    *(_DWORD *)&stru_B76900.needsRedraw = 0; /*0x787bab*/
    HashTable::CleanupAndResize((HashTable *)&stru_B76900.isAliveFlag); /*0x787bb1*/
    HashTable::Rebuild((HashTable *)&stru_B765EC.?); /*0x787bbb*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 220))(ppv); /*0x787bc8*/
    if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x787be0*/
      RefreshChannelListWOL((ObjectClass *)v63.StringVector_field_0x0C); /*0x787be2*/
    RefreshGameListWOL((ObjectClass *)v63.StringVector_field_0x0C); /*0x787be7*/
    dword_84A1BC = 41; /*0x787bfd*/
    v20 = GetStringCSF(aTxtReqChanlist, 0, g_Str_File_wonline_cpp, 10408); /*0x787c11*/
    v21 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x787c13*/
    if ( v21 ) /*0x787c20*/
      SendDlgItemMessageA(v21, 1458, 0x4B2u, 0, (LPARAM)v20); /*0x787c30*/
    if ( !stru_B76510.StringVector_field_0x10 || RequestChannelListWOL() ) /*0x787c41*/
    {
      v22 = &Handles; /*0x787c4e*/
      do /*0x787c65*/
        ResetEvent(*v22++); /*0x787c56*/
      while ( (int)v22 < (int)g_WOL_RequestObject ); /*0x787c65*/
      v63.StringVector_field_0x08 = 0; /*0x787c67*/
      v63.StringVector_field_0x04 = 0; /*0x787c69*/
      *(_DWORD *)v63.__pad_0 = g_Str_Trace_Requesting_channel_list_type____d__ping_; /*0x787c6b*/
      *(_DWORD *)&v66.m_3[1] = 0; /*0x787c70*/
      Debug::Log(); /*0x787c78*/
      if ( (*(int (__stdcall **)(LPVOID, _DWORD, _DWORD))(*(_DWORD *)ppv + 24))(ppv, *(_DWORD *)&v66.m_3[1], 0) ) /*0x787c8f*/
      {
        SetEvent(Handles); /*0x787d0d*/
      }
      else
      {
        Network_Helper_7ADB00( /*0x787ca6*/
          (ObjectClass *)&stru_B76510.StringVector_field_0x10,
          &v66.m_3[1],
          stru_B76510.StringVector_field_0x10);
        if ( RequestChannelListWOL() ) /*0x787cab*/
        {
          v23 = GetStringCSF(g_Str_TXT_JOINLOB, 0, g_Str_File_wonline_cpp, 10415); /*0x787cd3*/
          v24 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x787cd5*/
          if ( v24 ) /*0x787cdc*/
            SendDlgItemMessageA(v24, 1458, 0x4B2u, 0, (LPARAM)v23); /*0x787cec*/
          v25 = JoinGameLobbyWOL(); /*0x787d1a*/
          byte_84A210 = 1; /*0x787d22*/
          if ( v25 != -1 ) /*0x787d29*/
          {
            for ( n = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x787d4a*/
                  n == 258;
                  n = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u) )
            {
              Game::ProcessIdle(v26); /*0x787d4c*/
            }
            ResetEvent(*(&Handles + n)); /*0x787d70*/
            if ( !n || n == 5 ) /*0x787d83*/
            {
LABEL_86:
              CloseDialog(hWnd, 0); /*0x787f79*/
              Game::ProcessIdle(v46); /*0x787f82*/
              hWnd = 0; /*0x787f8c*/
              if ( ppv ) /*0x787f90*/
                (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x787f95*/
            }
            else
            {
              g_WOL_ChannelLeaveState = 0; /*0x787d91*/
              PostMessageA(hWnd, 0x593u, 0, 0); /*0x787d97*/
              v28 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x787da2*/
              if ( v28 ) /*0x787da9*/
              {
                stru_B77D80.HashTable_field_0x48 = 0; /*0x787daf*/
                CloseDialog(v28, 0); /*0x787db5*/
              }
              Current = (HWND)Dialog::GetCurrent(); /*0x787dba*/
              DlgItem = GetDlgItem(Current, 1344); /*0x787dc5*/
              if ( DlgItem ) /*0x787dc9*/
                SetFocus(DlgItem); /*0x787dd2*/
              SetFocus(g_hWnd); /*0x787de3*/
              ShowWindow(hWnd, 1); /*0x787de8*/
              SetFocus(hWnd); /*0x787def*/
              v31 = GetDlgItem(hWnd, 1344); /*0x787df7*/
              SetFocus(v31); /*0x787dfa*/
              stru_B77D80.HashTable_field_0x3C = 0; /*0x787dfc*/
              stru_B77D80.HashTable_field_0x38 = time(0); /*0x787e11*/
              while ( 1 ) /*0x787e27*/
              {
                for ( ii = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u); /*0x787e2f*/
                      ii == 258;
                      ii = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u) )
                {
                  Game::ProcessIdle(v32); /*0x787e35*/
                  if ( g_WOL_ChannelLeaveState ) /*0x787e41*/
                  {
                    v63.StringVector_field_0x08 = 0; /*0x787e47*/
                    v34 = GetDlgItem(hWnd, 1341); /*0x787e4f*/
                    EnableWindow(v34, v63.StringVector_field_0x08); /*0x787e52*/
                    v63.StringVector_field_0x08 = 0; /*0x787e54*/
                    v35 = GetDlgItem(hWnd, 1774); /*0x787e5c*/
                    EnableWindow(v35, v63.StringVector_field_0x08); /*0x787e5f*/
                    v63.StringVector_field_0x08 = 0; /*0x787e61*/
                    v36 = GetDlgItem(hWnd, 1581); /*0x787e69*/
                    EnableWindow(v36, v63.StringVector_field_0x08); /*0x787e6c*/
                    v63.StringVector_field_0x08 = 0; /*0x787e6e*/
                    v37 = GetDlgItem(hWnd, 1579); /*0x787e76*/
                    EnableWindow(v37, v63.StringVector_field_0x08); /*0x787e79*/
                    v63.StringVector_field_0x08 = 0; /*0x787e7b*/
                    v38 = GetDlgItem(hWnd, 1673); /*0x787e83*/
                    EnableWindow(v38, v63.StringVector_field_0x08); /*0x787e86*/
                    v63.StringVector_field_0x08 = 0; /*0x787e88*/
                    v39 = GetDlgItem(hWnd, 1672); /*0x787e90*/
                    EnableWindow(v39, v63.StringVector_field_0x08); /*0x787e93*/
                    v63.StringVector_field_0x08 = 0; /*0x787e95*/
                    v40 = GetDlgItem(hWnd, 1955); /*0x787e9d*/
                    EnableWindow(v40, v63.StringVector_field_0x08); /*0x787ea0*/
                    v63.StringVector_field_0x08 = 0; /*0x787ea2*/
                    v41 = GetDlgItem(hWnd, 1958); /*0x787eaa*/
                    EnableWindow(v41, v63.StringVector_field_0x08); /*0x787ead*/
                    v63.StringVector_field_0x08 = 0; /*0x787eaf*/
                    v42 = GetDlgItem(hWnd, 1567); /*0x787eb7*/
                    EnableWindow(v42, v63.StringVector_field_0x08); /*0x787eba*/
                    v63.StringVector_field_0x08 = 0; /*0x787ebc*/
                    v43 = GetDlgItem(hWnd, 1474); /*0x787ec4*/
                    EnableWindow(v43, v63.StringVector_field_0x08); /*0x787ec7*/
                    v63.StringVector_field_0x08 = 0; /*0x787ec9*/
                    v44 = GetDlgItem(hWnd, 1670); /*0x787ed1*/
                    EnableWindow(v44, v63.StringVector_field_0x08); /*0x787ed4*/
                    if ( JoinGameLobbyWOL() == -1 ) /*0x787ee0*/
                    {
                      v63.StringVector_field_0x08 = 1; /*0x787ee2*/
                      v45 = GetDlgItem(hWnd, 1670); /*0x787eea*/
                      EnableWindow(v45, v63.StringVector_field_0x08); /*0x787eed*/
                      SetEvent(hEvent); /*0x787ef6*/
                    }
                    else
                    {
                      PostMessageA(hWnd, 0x593u, 0, 0); /*0x787f08*/
                    }
                    g_WOL_ChannelLeaveState = 0; /*0x787f0e*/
                  }
                }
                ResetEvent(*(&Handles + ii)); /*0x787f3f*/
                if ( !ii ) /*0x787f47*/
                  break; /*0x787f47*/
                switch ( ii ) /*0x787f4c*/
                {
                  case 6u: /*0x787f4c*/
                    goto LABEL_85; /*0x787f4c*/
                  case 0xFu: /*0x787f4c*/
                    v65 = 2; /*0x787f66*/
LABEL_85:
                    word_B77AD0 = 0; /*0x787f6e*/
                    goto LABEL_86; /*0x787f6e*/
                  case 5u: /*0x787f4c*/
                    goto LABEL_88; /*0x787f56*/
                  case 7u: /*0x787f4c*/
                    v65 = 1; /*0x788155*/
                    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x788160*/
                    byte_B77DEC = 0; /*0x788163*/
                    word_B77AD0 = 0; /*0x78816a*/
                    goto LABEL_88; /*0x788173*/
                }
              }
            }
          }
        }
      }
    }
LABEL_88:
    v47 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x787f98*/
    if ( v47 ) /*0x787fa6*/
    {
      stru_B77D80.HashTable_field_0x48 = 0; /*0x787fac*/
      CloseDialog(v47, 0); /*0x787fb2*/
    }
    v48 = (HWND)Dialog::GetCurrent(); /*0x787fb7*/
    v49 = GetDlgItem(v48, 1344); /*0x787fc2*/
    if ( v49 ) /*0x787fc6*/
      SetFocus(v49); /*0x787fc9*/
    ShowDialogConfirm(&word_B77AD0, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x787fdc*/
    if ( hWnd ) /*0x787fe3*/
      CloseDialog(hWnd, 0); /*0x787fe9*/
    while ( (unsigned __int8)CloseDialog(0, 0) ) /*0x787ff2*/
      ; /*0x787ffb*/
    Network_Destroy((ObjectClass *)v63.StringVector_field_0x0C); /*0x788008*/
    if ( v65 == 1 ) /*0x788012*/
      BYTE1(stru_B77D80.HashTable_field_0x40) = 1; /*0x788014*/
    if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x78802f*/
    {
      v50 = stru_B765EC.location[0]; /*0x788035*/
      for ( jj = 0; jj < stru_B765EC.location[0]; v50 = stru_B765EC.location[0] ) /*0x78803e*/
      {
        v52 = *(ObjectClass **)(stru_B765EC.lastLayer + 4 * jj); /*0x788045*/
        while ( v52 ) /*0x78804a*/
        {
          v53 = v52; /*0x78804c*/
          v52 = (ObjectClass *)v52->?; /*0x78804e*/
          DeleteAndZero(v53); /*0x788057*/
          __3_YAXPAX_Z(v53); /*0x78805d*/
        }
        ++jj; /*0x78806f*/
        *(_DWORD *)(stru_B765EC.lastLayer + 4 * jj - 4) = 0; /*0x788070*/
      }
      v54 = dword_B766B0; /*0x78807d*/
      *(_DWORD *)&stru_B765EC.isInLogic = 0; /*0x788083*/
      if ( v50 > dword_B766B0 ) /*0x78808b*/
      {
        do /*0x78813e*/
        {
          if ( LOBYTE(stru_B765EC.lineTrailer) || v50 <= v54 ) /*0x7880a1*/
            break; /*0x7880a1*/
          lastLayer = (int *)stru_B765EC.lastLayer; /*0x7880ad*/
          v56 = v50; /*0x7880b3*/
          stru_B765EC.location[0] = v50 >> 1; /*0x7880b8*/
          --stru_B765EC.location[1]; /*0x7880c4*/
          stru_B765EC.lastLayer = __2_YAPAXI_Z(4 * (v50 >> 1)); /*0x7880dd*/
          memset((void *)stru_B765EC.lastLayer, 0, 4 * stru_B765EC.location[0]); /*0x7880e5*/
          if ( v56 > 0 ) /*0x7880e7*/
          {
            v57 = lastLayer; /*0x7880e9*/
            v58 = v56; /*0x7880eb*/
            do /*0x788126*/
            {
              v59 = *v57; /*0x7880ed*/
              if ( *v57 ) /*0x7880ed*/
              {
                do /*0x788120*/
                {
                  v60 = dword_B76698(v59) & ((1 << SLOBYTE(stru_B765EC.location[1])) - 1); /*0x788109*/
                  v61 = *(_DWORD *)(stru_B765EC.lastLayer + 4 * v60); /*0x788110*/
                  *(_DWORD *)(stru_B765EC.lastLayer + 4 * v60) = v59; /*0x788113*/
                  v62 = *(_DWORD *)(v59 + 8); /*0x788116*/
                  *(_DWORD *)(v59 + 8) = v61; /*0x788119*/
                  v59 = v62; /*0x78811e*/
                }
                while ( v62 ); /*0x788120*/
              }
              ++v57; /*0x788122*/
              --v58; /*0x788125*/
            }
            while ( v58 ); /*0x788126*/
          }
          __3_YAXPAX_Z(lastLayer); /*0x788129*/
          v54 = dword_B766B0; /*0x78812e*/
          v50 = stru_B765EC.location[0]; /*0x788134*/
        }
        while ( stru_B765EC.location[0] > (unsigned int)dword_B766B0 ); /*0x78813e*/
      }
    }
    return v65; /*0x788144*/
  }
  return result; /*0x788148*/
}



// ==== 0x00788180  FindLobbyIDWOL  this=-  sig=csp ====
int __fastcall WOL_FindLobbyID(char a1)
{
  int v1; // esi
  _DWORD *v2; // eax
  int v3; // ebx
  _DWORD *v4; // ebp
  char **v5; // eax
  int v6; // ebp
  wchar_t **v7; // edi
  int v8; // ebx
  size_t v9; // eax
  char **v11; // [esp-4h] [ebp-2A4h]
  const wchar_t **v13; // [esp+14h] [ebp-28Ch] BYREF
  wchar_t **v14; // [esp+18h] [ebp-288h] BYREF
  void *v15; // [esp+1Ch] [ebp-284h] BYREF
  unsigned int v16; // [esp+20h] [ebp-280h]
  int v17; // [esp+24h] [ebp-27Ch]
  void *v18[4]; // [esp+28h] [ebp-278h] BYREF
  _DWORD v19[3]; // [esp+38h] [ebp-268h] BYREF
  _DWORD v20[6]; // [esp+44h] [ebp-25Ch] BYREF
  char v21; // [esp+5Ch] [ebp-244h]
  int v22; // [esp+60h] [ebp-240h]
  int v23; // [esp+64h] [ebp-23Ch]
  char Buffer[32]; // [esp+68h] [ebp-238h] BYREF
  char Source[32]; // [esp+88h] [ebp-218h] BYREF
  char Destination[32]; // [esp+A8h] [ebp-1F8h] BYREF
  wchar_t String2[32]; // [esp+C8h] [ebp-1D8h] BYREF
  _DWORD v28[22]; // [esp+108h] [ebp-198h] BYREF
  _BYTE v29[12]; // [esp+160h] [ebp-140h] BYREF
  int v30; // [esp+16Ch] [ebp-134h]
  char v31[32]; // [esp+174h] [ebp-12Ch] BYREF
  _DWORD v32[67]; // [esp+194h] [ebp-10Ch] BYREF

  v1 = dword_B73E10; /*0x788189*/
  v17 = dword_B73E10; /*0x7881a2*/
  memset(v32, 0, sizeof(v32)); /*0x7881a6*/
  if ( dword_A8B238[0] == 4 && dword_A8B244 == 3 ) /*0x7881bc*/
  {
    memset(Destination, 0, sizeof(Destination)); /*0x7881d2*/
    memset(String2, 0, 0x20u); /*0x7881e0*/
    memset(Buffer, 0, sizeof(Buffer)); /*0x7881eb*/
    memset(Source, 0, sizeof(Source)); /*0x7881f9*/
    v2 = __2_YAPAXI_Z(0x28u); /*0x7881fb*/
    v3 = 0; /*0x788200*/
    if ( v2 ) /*0x788207*/
      v4 = MixFileClass::FromFile(v2, g_Str_File_WDT_MIX, (int)&dword_886980); /*0x78821a*/
    else
      v4 = 0; /*0x78821e*/
    v18[1] = 0; /*0x788224*/
    v18[2] = 0; /*0x788228*/
    GenericNode::Constructor(v19); /*0x78822c*/
    GenericNode::Constructor(v20); /*0x788235*/
    LinkedList::Prepend(v19, (int)v20); /*0x78824b*/
    v18[3] = &List<INIClass::INISection *>::`vftable'; /*0x788257*/
    memset(&v20[3], 0, 12); /*0x788264*/
    v21 = 0; /*0x788270*/
    v22 = 0; /*0x788275*/
    v23 = 0; /*0x788279*/
    v18[0] = &INIClass::`vftable'; /*0x78827d*/
    CCFileClass::Construct(v28, aWdtmapmdIni); /*0x788285*/
    FileStraw::Open(v18, (int)v28, 0); /*0x788297*/
    sprintf(Buffer, "Territory%02d", *(_DWORD *)dword_A8B240); /*0x7882ad*/
    strcpy(Source, Buffer); /*0x7882d4*/
    if ( *(_BYTE *)(*(_DWORD *)(FindLobbyIDWOL_Find() + 4) + 20) ) /*0x7882ef*/
      INIClass::GetString( /*0x788313*/
        (unsigned __int8 ***)v18,
        (unsigned __int8 *)aEurope,
        (unsigned __int8 *)Buffer,
        Source,
        Destination,
        32);
    else
      INIClass::GetString( /*0x788308*/
        (unsigned __int8 ***)v18,
        (unsigned __int8 *)aNorthamerica,
        (unsigned __int8 *)Buffer,
        Source,
        Destination,
        32);
    INIClass::GetString( /*0x788338*/
      (unsigned __int8 ***)v18,
      (unsigned __int8 *)Destination,
      (unsigned __int8 *)g_INI_Key_Name,
      aATerritory,
      v31,
      32);
    BulkCharToWide(String2, (unsigned __int8 *)v31, -1); /*0x78834d*/
    dword_B75E50 = (int)_wcsdup(String2); /*0x788364*/
    if ( v4 ) /*0x788369*/
      (*(void (__thiscall **)(_DWORD *, int))*v4)(v4, 1); /*0x788372*/
    v28[0] = &CCFileClass::`vftable'; /*0x78837b*/
    v30 = 0; /*0x788386*/
    Vector::Clear((int)v29); /*0x78838d*/
    v28[0] = &off_7E1668; /*0x788399*/
    BufferIOFileClass::Dtor(v28); /*0x7883a4*/
    HashTable::DestroyHashTableINIClass(v18); /*0x7883ad*/
    v1 = v17; /*0x7883b2*/
  }
  else
  {
    v3 = 0; /*0x7883b8*/
  }
  v11 = FormatStringInt((char **)&v13, dword_B77DD4, 1); /*0x7883cf*/
  v5 = String::Assign((char **)&v14, g_Str_Lob_41_); /*0x7883da*/
  String::Concat((const char **)v5, (char **)&v15, v11); /*0x7883e1*/
  DeleteAndZero((void **)&v14); /*0x7883ea*/
  DeleteAndZero((void **)&v13); /*0x7883f3*/
  v6 = 0; /*0x7883f8*/
  if ( v1 > 0 ) /*0x7883fc*/
  {
    v7 = &dword_B73E1C; /*0x788402*/
    v14 = &dword_B73E1C; /*0x788407*/
    while ( 1 ) /*0x78840b*/
    {
      if ( (int)v7 >= (int)&dword_B73E1C && v6 < dword_B73E10 ) /*0x788419*/
      {
        qmemcpy(v32, (char *)dword_B73E18 + v3, sizeof(v32)); /*0x788430*/
        v1 = v17; /*0x788432*/
        v7 = v14; /*0x788436*/
      }
      if ( dword_A8B238[0] != 4 || dword_A8B244 != 3 ) /*0x78844a*/
        goto LABEL_23; /*0x78844a*/
      if ( !wcscmp(*v7, String2) ) /*0x788457*/
        break; /*0x788457*/
LABEL_27:
      ++v6; /*0x7884c3*/
      v3 += 268; /*0x7884c4*/
      v14 = ++v7; /*0x7884cf*/
      if ( v6 >= v1 ) /*0x7884d3*/
        goto LABEL_28; /*0x7884d3*/
    }
    if ( !a1 || v32[3] <= 25 ) /*0x788477*/
    {
LABEL_50:
      DeleteAndZero(&v15); /*0x788682*/
      return v6; /*0x788697*/
    }
LABEL_23:
    String::Assign((char **)&v13, (const char *)&v32[13]); /*0x78847d*/
    if ( String::Compare((const char **)&v13, (const char **)&v15) && (!a1 || v32[3] <= 25) ) /*0x7884b4*/
    {
      DeleteAndZero((void **)&v13); /*0x788609*/
      DeleteAndZero(&v15); /*0x788612*/
      return v6; /*0x788623*/
    }
    DeleteAndZero((void **)&v13); /*0x7884be*/
    goto LABEL_27; /*0x7884be*/
  }
LABEL_28:
  v6 = 0; /*0x7884d9*/
  v8 = -1; /*0x7884db*/
  v16 = 10000; /*0x7884e0*/
  if ( v1 <= 0 ) /*0x7884e8*/
    goto LABEL_56; /*0x7884e8*/
  v14 = 0; /*0x7884ee*/
  v13 = (const wchar_t **)&dword_B73E1C; /*0x7884f2*/
  do /*0x7885fa*/
  {
    if ( (int)v13 >= (int)&dword_B73E1C && v6 < dword_B73E10 ) /*0x78850a*/
    {
      qmemcpy(v32, (char *)dword_B73E18 + (_DWORD)v14, sizeof(v32)); /*0x788524*/
      v1 = v17; /*0x788526*/
    }
    if ( dword_A8B238[0] == 4 && dword_A8B244 == 3 ) /*0x78853a*/
    {
      v9 = wcslen(String2); /*0x788544*/
      if ( wcsncmp(*v13, String2, v9) ) /*0x788559*/
        goto LABEL_45; /*0x788563*/
      if ( !a1 || v32[3] <= 25 ) /*0x78857b*/
      {
        dword_B77DD4 = atol((const char *)&v32[13] + strlen(g_Str_Lob_41_)); /*0x788647*/
        DeleteAndZero(&v15); /*0x78864c*/
        return v6; /*0x78865d*/
      }
      if ( v32[3] < v16 ) /*0x788585*/
      {
        v8 = v6; /*0x788587*/
        v16 = v32[3]; /*0x788589*/
      }
    }
    if ( !strncmp((const char *)&v32[13], g_Str_Lob_41_, strlen(g_Str_Lob_41_)) ) /*0x7885aa*/
    {
      if ( !a1 || v32[3] <= 25 ) /*0x7885cc*/
      {
        dword_B77DD4 = atol((const char *)&v32[13] + strlen(g_Str_Lob_41_)); /*0x78867d*/
        goto LABEL_50; /*0x78867d*/
      }
      if ( v32[3] < v16 ) /*0x7885d6*/
      {
        v8 = v6; /*0x7885d8*/
        v16 = v32[3]; /*0x7885da*/
      }
    }
LABEL_45:
    ++v6; /*0x7885de*/
    v14 += 67; /*0x7885f2*/
    ++v13; /*0x7885f6*/
  }
  while ( v6 < v1 ); /*0x7885fa*/
  if ( v8 != -1 ) /*0x78869b*/
  {
    if ( v8 >= 0 && v8 < dword_B73E10 ) /*0x7886a7*/
      qmemcpy(v32, (char *)dword_B73E18 + 268 * v8, sizeof(v32)); /*0x7886c8*/
    dword_B77DD4 = atol((const char *)&v32[13] + strlen(g_Str_Lob_41_)); /*0x7886e9*/
  }
LABEL_56:
  DeleteAndZero(&v15); /*0x7886ee*/
  return v8; /*0x788619*/
}



// ==== 0x00788710  sub_788710  this=-  sig=ida-proto ====
BOOL __fastcall sub_788710(int a1, char a2)
{
  wchar_t *StringCSF; // eax
  int i; // esi
  HWND v6; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  void *v10; // [esp+8h] [ebp-4h] BYREF

  if ( dword_B77DD0 ) /*0x78871e*/
  {
    Debug::Log(); /*0x788734*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x788744*/
    StringCSF = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x788758*/
    WideString::Assign((wchar_t **)&v10, StringCSF); /*0x788762*/
    ShowUIMessage(a1, (wchar_t **)&v10, a2); /*0x78876e*/
    DeleteAndZero::Alt(&v10); /*0x788777*/
    for ( i = 0; dword_B77DD0; ++i ) /*0x788785*/
    {
      if ( i >= 150 ) /*0x788793*/
        break; /*0x788793*/
      Sleep(0x64u); /*0x788797*/
      Game::ProcessIdle(); /*0x788799*/
    }
    v6 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7887ad*/
    if ( v6 ) /*0x7887b4*/
    {
      dword_B77DC8 &= ~0x40u; /*0x7887bf*/
      if ( !dword_B77DC8 ) /*0x7887c5*/
        CloseDialog(v6, 0); /*0x7887cb*/
    }
    Current = Dialog::GetCurrent(); /*0x7887d0*/
    DlgItem = GetDlgItem(Current, 1344); /*0x7887db*/
    if ( DlgItem ) /*0x7887e3*/
      SetFocus(DlgItem); /*0x7887e6*/
  }
  return dword_B77DD0 == 0; /*0x7887f6*/
}



// ==== 0x00788800  LeaveChannelExWOL  this=ObjectClass  sig=csp ====
int __fastcall WOL_LeaveChannelEx(int a1, char **a2, void *a3)
{
  wchar_t *String; // eax
  int i; // esi
  HWND v6; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v10; // eax
  int v11; // esi
  void *v12; // [esp+10h] [ebp-8h] BYREF
  char **v13; // [esp+14h] [ebp-4h]

  v13 = a2; /*0x788809*/
  if ( !strcmp((const char *)(a1 + 52), byte_B76B44) || !strcmp((const char *)(a1 + 52), &byte_B73C1C) ) /*0x788855*/
  {
    DeleteAndZero::Alt(&a3); /*0x788a17*/
    return 0; /*0x788a1c*/
  }
  else
  {
    if ( !dword_B77DD0 ) /*0x788887*/
      goto LABEL_14; /*0x788887*/
    Debug::Log(); /*0x78889d*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x7888ad*/
    String = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x7888c1*/
    WideString::Assign((wchar_t **)&v12, String); /*0x7888cb*/
    ShowUIMessage(64, (wchar_t **)&v12, 1); /*0x7888db*/
    DeleteAndZero::Alt(&v12); /*0x7888e4*/
    for ( i = 0; dword_B77DD0; ++i ) /*0x7888f2*/
    {
      if ( i >= 150 ) /*0x788900*/
        break; /*0x788900*/
      Sleep(0x64u); /*0x788904*/
      Game::ProcessIdle(); /*0x788906*/
    }
    v6 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x78891a*/
    if ( v6 ) /*0x788921*/
    {
      dword_B77DC8 &= ~0x40u; /*0x78892c*/
      if ( !dword_B77DC8 ) /*0x788932*/
        CloseDialog(v6, 0); /*0x788938*/
    }
    Current = Dialog::GetCurrent(); /*0x78893d*/
    DlgItem = GetDlgItem(Current, 1344); /*0x788948*/
    if ( DlgItem ) /*0x788950*/
      SetFocus(DlgItem); /*0x788953*/
    if ( dword_B77DD0 ) /*0x788960*/
    {
      DeleteAndZero::Alt(&a3); /*0x788966*/
      return 1; /*0x78896b*/
    }
    else
    {
LABEL_14:
      strcpy((char *)(a1 + 215), String::GetOrEmpty_Alt(v13)); /*0x78899f*/
      qmemcpy(&dword_B73BE8, (const void *)a1, 0x10Cu); /*0x7889b4*/
      v10 = WideString::GetOrEmpty_Alt((wchar_t **)&a3); /*0x7889ba*/
      WideString::Assign((wchar_t **)&v12, v10); /*0x7889c4*/
      ShowUIMessage(2, (wchar_t **)&v12, 0); /*0x7889d4*/
      DeleteAndZero::Alt(&v12); /*0x7889dd*/
      Debug::Log(); /*0x7889e8*/
      v11 = (*(int (__stdcall **)(LPVOID, int))(*(_DWORD *)ppv + 32))(ppv, a1); /*0x788a00*/
      DeleteAndZero::Alt(&a3); /*0x788a02*/
      return v11; /*0x788a07*/
    }
  }
}



// ==== 0x00788A30  JoinGameLobbyWOL  this=-  sig=ida-proto ====
int __fastcall JoinGameLobbyWOL(char a1)
{
  int LobbyIDWOL; // eax
  int v2; // ebx
  wchar_t *StringCSF; // eax
  wchar_t *v4; // ecx
  int v5; // esi
  HWND v6; // eax
  HWND DlgItem; // eax
  wchar_t *v9; // [esp-4h] [ebp-120h] BYREF
  ObjectClass *v10; // [esp+0h] [ebp-11Ch]
  _BYTE v11[272]; // [esp+Ch] [ebp-110h] BYREF

  LobbyIDWOL = FindLobbyIDWOL(a1); /*0x788a39*/
  v2 = LobbyIDWOL; /*0x788a3e*/
  if ( LobbyIDWOL == -1 ) /*0x788a43*/
    goto LABEL_9; /*0x788a43*/
  if ( LobbyIDWOL >= 0 && LobbyIDWOL < *(int *)&g_WindowManager.__pad_EC[636] ) /*0x788a53*/
    qmemcpy(&v11[4], (const void *)(*(_DWORD *)&g_WindowManager.__pad_EC[644] + 268 * LobbyIDWOL), 0x10Cu); /*0x788a71*/
  String::Assign((String *)v11, aZotclot9); /*0x788a7c*/
  StringCSF = GetStringCSF(g_Str_TXT_JOINLOB, 0, g_Str_File_wonline_cpp, 10753); /*0x788a92*/
  v9 = v4; /*0x788a97*/
  WideString::Assign(&v9, StringCSF); /*0x788a9b*/
  v5 = LeaveChannelExWOL((int)&v11[4], (char **)v11, v9); /*0x788ab1*/
  DeleteAndZero((ObjectClass *)v11); /*0x788ab3*/
  if ( v5 ) /*0x788aba*/
  {
LABEL_9:
    GameListRenderWOL(v10); /*0x788aee*/
    return -1; /*0x788af3*/
  }
  else
  {
    v6 = (HWND)Dialog::FindByHandle((Dialog *)0x113); /*0x788ac1*/
    if ( v6 ) /*0x788ac8*/
    {
      DlgItem = GetDlgItem(v6, 1344); /*0x788ad0*/
      SetFocus(DlgItem); /*0x788ad7*/
    }
    GameListRenderWOL(v10); /*0x788add*/
    return v2; /*0x788ae2*/
  }
}



// ==== 0x00788B00  ObjectClass::CreateAccountWOL  this=ObjectClass  sig=csp ====
int __usercall CreateAccountWOL@<eax>(ObjectClass *this, int a2@<ebx>, int a3@<ebp>)
{
  HWND v3; // ecx
  HANDLE *v4; // esi
  wchar_t *StringCSF; // eax
  TechnoTypeClass *v6; // ecx
  DWORD i; // esi
  HWND v8; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  HWND DeleteAndZero_field_0x04; // esi
  int result; // eax
  Dialog *DialogIndirect; // esi
  char *v14; // edi
  HWND v15; // eax
  HWND v16; // eax
  char *v17; // edi
  HWND v18; // eax
  HWND v19; // eax
  int DeleteAndZero_field_0x08; // eax
  wchar_t *v21; // eax
  int v22; // edi
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  wchar_t *v25; // eax
  wchar_t *v26; // eax
  Dialog *v27; // esi
  char *v28; // edi
  HWND v29; // eax
  HWND v30; // eax
  char *v31; // edi
  HWND v32; // eax
  HWND v33; // eax
  char *v34; // edi
  HWND v35; // eax
  HWND v36; // eax
  char *v37; // edi
  HWND v38; // eax
  HWND v39; // eax
  char *v40; // edi
  wchar_t *v41; // eax
  wchar_t *v42; // eax
  wchar_t *v43; // eax
  wchar_t *v44; // eax
  wchar_t *v45; // eax
  wchar_t *v46; // eax
  HWND v47; // esi
  HWND v48; // esi
  ObjectClass *v49; // [esp+34h] [ebp-29Ch]
  DeleteAndZero v50; // [esp+44h] [ebp-28Ch] BYREF
  WPARAM wParam; // [esp+50h] [ebp-280h]
  DeleteAndZero v52; // [esp+54h] [ebp-27Ch] BYREF
  int v53; // [esp+60h] [ebp-270h]
  int v54; // [esp+64h] [ebp-26Ch]
  void *Array_field_0x10; // [esp+68h] [ebp-268h]
  _BYTE v56[228]; // [esp+6Ch] [ebp-264h] BYREF
  char v57[128]; // [esp+150h] [ebp-180h] BYREF
  char Buffer[256]; // [esp+1D0h] [ebp-100h] BYREF

  v50.DeleteAndZero_field_0x04 = (int)v3; /*0x788b0c*/
  RenderGadgetClassAnimation(v3, 0); /*0x788b10*/
  Screen::Capture(1, 0, a2, a3); /*0x788b19*/
  wParam = 1; /*0x788b2b*/
  v53 = 1; /*0x788b2f*/
  Array_field_0x10 = 0; /*0x788b33*/
  v50.DeleteAndZero_field_0x08 = 0; /*0x788b37*/
  v4 = &Handles; /*0x788b3b*/
  do /*0x788b4e*/
    ResetEvent(*v4++); /*0x788b43*/
  while ( (int)v4 < (int)g_WOL_RequestObject ); /*0x788b4e*/
  memset(&v56[4], 0, 224); /*0x788b6b*/
  memset(v57, 0, sizeof(v57)); /*0x788b92*/
  StringCSF = GetStringCSF(aWolNewaccountf, 0, g_Str_File_wonline_cpp, 10826); /*0x788ba0*/
  WideString::Assign((wchar_t **)&v50, StringCSF); /*0x788baa*/
  ShowUIMessage(128, (wchar_t **)&v50, 0); /*0x788bb9*/
  DeleteAndZero::Alt(&v50); /*0x788bc2*/
  Debug::Log(); /*0x788bcc*/
  (*(void (__stdcall **)(LPVOID, int, int, char *, char *, int))(*(_DWORD *)ppv + 16))( /*0x788bf4*/
    ppv,
    g_NetworkRematchState,
    65537,
    aTibsun,
    aTibpass99,
    35);
  do /*0x788c3a*/
  {
    for ( i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x788c11*/
          i == 258;
          i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u) )
    {
      Game::ProcessIdle(v6); /*0x788c13*/
    }
    ResetEvent(*(&Handles + i)); /*0x788c36*/
  }
  while ( i > 1 ); /*0x788c3a*/
  v8 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x788c46*/
  if ( v8 ) /*0x788c4d*/
  {
    stru_B77D80.HashTable_field_0x48 = 0; /*0x788c53*/
    CloseDialog(v8, 0); /*0x788c59*/
  }
  Current = (HWND)Dialog::GetCurrent(); /*0x788c5e*/
  DlgItem = GetDlgItem(Current, 1344); /*0x788c6f*/
  if ( DlgItem ) /*0x788c73*/
    SetFocus(DlgItem); /*0x788c76*/
  if ( !i ) /*0x788c7e*/
  {
    DeleteAndZero_field_0x04 = (HWND)v50.DeleteAndZero_field_0x04; /*0x788c80*/
    ShowWindow((HWND)v50.DeleteAndZero_field_0x04, 5); /*0x788c87*/
    return Dialog::InitWindow(DeleteAndZero_field_0x04, 0); /*0x788c9e*/
  }
  while ( 1 ) /*0x788cd6*/
  {
    CreateAccountWOL_Create(); /*0x788cd6*/
    Screen::Capture(1, 0, (int)GetDlgItem, (int)SendMessageA); /*0x788cdf*/
    DialogIndirect = (Dialog *)CreateDialogIndirect( /*0x788d02*/
                                 g_hInstance,
                                 (HWND)0xE7,
                                 g_hWnd,
                                 (DLGPROC)CreateAccountDlgProcWOL,
                                 0);
    SetupDialog(DialogIndirect, 231); /*0x788d0b*/
    SendDlgItemMessageA((HWND)DialogIndirect, 1582, 0x14Eu, v53 - 1, 0); /*0x788d23*/
    if ( (int)Array_field_0x10 <= 0 ) /*0x788d2f*/
    {
      v16 = GetDlgItem((HWND)DialogIndirect, 1583); /*0x788d69*/
      SendMessageA(v16, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x788d78*/
    }
    else
    {
      FromStringInt((char **)&v52.DeleteAndZero_field_0x08, (int)Array_field_0x10); /*0x788d35*/
      v14 = String::GetOrEmpty((String *)&v52.DeleteAndZero_field_0x08); /*0x788d43*/
      v15 = GetDlgItem((HWND)DialogIndirect, 1583); /*0x788d4b*/
      SendMessageA(v15, 0x4B4u, 0, (LPARAM)v14); /*0x788d56*/
      DeleteAndZero((ObjectClass *)&v52.DeleteAndZero_field_0x08); /*0x788d5c*/
    }
    if ( v50.DeleteAndZero_field_0x08 <= 0 ) /*0x788d80*/
    {
      v19 = GetDlgItem((HWND)DialogIndirect, 1584); /*0x788dba*/
      SendMessageA(v19, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x788dc9*/
    }
    else
    {
      FromStringInt((char **)v56, v50.DeleteAndZero_field_0x08); /*0x788d86*/
      v17 = String::GetOrEmpty((String *)v56); /*0x788d94*/
      v18 = GetDlgItem((HWND)DialogIndirect, 1584); /*0x788d9c*/
      SendMessageA(v18, 0x4B4u, 0, (LPARAM)v17); /*0x788da7*/
      DeleteAndZero((ObjectClass *)v56); /*0x788dad*/
    }
    SendDlgItemMessageA((HWND)DialogIndirect, 1574, 0x4B4u, 0, (LPARAM)&v56[100]); /*0x788de6*/
    SendDlgItemMessageA((HWND)DialogIndirect, 1585, 0xF1u, wParam, 0); /*0x788dfa*/
    ShowWindow((HWND)v50.DeleteAndZero_field_0x04, 0); /*0x788e09*/
    ShowWindow((HWND)DialogIndirect, 1); /*0x788e0e*/
    if ( MessageDialogLoopAlt((HWND)DialogIndirect, (unsigned __int8 (*)(void))GameLoop::Thunk, 0, 1, 1) != 1 ) /*0x788e25*/
      break; /*0x788e25*/
    v56[100] = 0; /*0x788e30*/
    strcpy(&v56[100], String::GetOrEmpty((String *)&g_WOL_LoginObject.?)); /*0x788e5a*/
    DeleteAndZero_field_0x08 = g_WebBrowserConfig.location[1]; /*0x788e5e*/
    v50.DeleteAndZero_field_0x08 = g_WebBrowserConfig.location[1]; /*0x788e66*/
    Array_field_0x10 = g_WindowManager.Array_field_0x10; /*0x788e78*/
    v53 = dword_B73A1C + 1; /*0x788e87*/
    wParam = dword_B76228; /*0x788e8b*/
    if ( dword_B73A1C + 1 <= 0 ) /*0x788e8f*/
      goto LABEL_73; /*0x788e8f*/
    if ( (int)g_WindowManager.Array_field_0x10 <= 0 || g_WebBrowserConfig.location[1] <= 0 ) /*0x788e9f*/
    {
LABEL_63:
      if ( dword_B73A1C + 1 >= 12 ) /*0x78938d*/
      {
LABEL_73:
        v45 = GetStringCSF(aTxtInvalidMont, 0, g_Str_File_wonline_cpp, 10922); /*0x789462*/
        ShowDialogConfirm(v45, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x789483*/
      }
      else if ( (int)g_WindowManager.Array_field_0x10 <= 0 || (int)g_WindowManager.Array_field_0x10 > 31 ) /*0x78939e*/
      {
        v44 = GetStringCSF(aTxtInvalidDay, 0, g_Str_File_wonline_cpp, 10924); /*0x78944f*/
        ShowDialogConfirm(v44, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x789458*/
      }
      else if ( DeleteAndZero_field_0x08 > 0 ) /*0x7893a6*/
      {
        if ( strlen(&v56[100]) >= 6 ) /*0x7893ed*/
        {
          v24 = GetStringCSF(aTxtRequiredFie, 0, g_Str_File_wonline_cpp, 10930); /*0x789424*/
LABEL_71:
          ShowDialogConfirm(v24, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x789429*/
        }
        else
        {
          v43 = GetStringCSF(aTxtInvalidEmai, 0, g_Str_File_wonline_cpp, 10928); /*0x789400*/
          ShowDialogConfirm(v43, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x789409*/
        }
      }
      else
      {
        v42 = GetStringCSF(aTxtInvalidYear, 0, g_Str_File_wonline_cpp, 10926); /*0x7893c0*/
        ShowDialogConfirm(v42, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7893c9*/
      }
    }
    else
    {
      if ( strlen(&v56[100]) < 6 ) /*0x788eb9*/
      {
        DeleteAndZero_field_0x08 = v50.DeleteAndZero_field_0x08; /*0x789386*/
        goto LABEL_63; /*0x789386*/
      }
      dword_B77E64 = 0; /*0x788ec6*/
      dword_B77E60 = -1; /*0x788ed5*/
      if ( (*(int (__stdcall **)(LPVOID, int, void *, int, _BYTE *))(*(_DWORD *)g_UIPointerTable + 40))( /*0x788ee5*/
             g_UIPointerTable,
             dword_B73A1C + 1,
             g_WindowManager.Array_field_0x10,
             v50.DeleteAndZero_field_0x08,
             &v56[100]) )
      {
        v21 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 10939); /*0x788f04*/
LABEL_26:
        ShowDialogConfirm(v21, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x788f09*/
LABEL_27:
        while ( 1 ) /*0x788f12*/
        {
          CreateAccountWOL_Create_72C420(); /*0x788f12*/
          if ( dword_B77E60 >= 13 ) /*0x788f1f*/
          {
            *(_DWORD *)v50.__pad_0 = (dword_B77E60 >= 18) + 243; /*0x78903e*/
            v22 = *(_DWORD *)v50.__pad_0; /*0x789042*/
          }
          else
          {
            v22 = 230; /*0x788f25*/
            *(_DWORD *)v50.__pad_0 = 230; /*0x788f2a*/
          }
          v27 = (Dialog *)CreateDialogIndirect(g_hInstance, (HWND)v22, g_hWnd, (DLGPROC)WOLobbySmallDlgProc, 0); /*0x78905f*/
          SetupDialog(v27, v22); /*0x789065*/
          if ( String::Length((String *)&g_WebBrowserConfig.?) ) /*0x78906f*/
          {
            v28 = String::GetOrEmpty((String *)&g_WebBrowserConfig.?); /*0x789082*/
            v29 = GetDlgItem((HWND)v27, 1576); /*0x78908a*/
            SendMessageA(v29, 0x4B4u, 0, (LPARAM)v28); /*0x78908d*/
          }
          else
          {
            v30 = GetDlgItem((HWND)v27, 1576); /*0x789095*/
            SendMessageA(v30, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x7890a4*/
          }
          if ( String::Length((String *)&stru_B765EC) ) /*0x7890ab*/
          {
            v31 = String::GetOrEmpty((String *)&stru_B765EC); /*0x7890be*/
            v32 = GetDlgItem((HWND)v27, 1509); /*0x7890c6*/
            SendMessageA(v32, 0x4B4u, 0, (LPARAM)v31); /*0x7890c9*/
          }
          else
          {
            v33 = GetDlgItem((HWND)v27, 1509); /*0x7890d1*/
            SendMessageA(v33, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x7890e0*/
          }
          if ( String::Length((String *)&g_WOL_UserList.?) ) /*0x7890e7*/
          {
            v34 = String::GetOrEmpty((String *)&g_WOL_UserList.?); /*0x7890fa*/
            v35 = GetDlgItem((HWND)v27, 1836); /*0x789102*/
            SendMessageA(v35, 0x4B4u, 0, (LPARAM)v34); /*0x789105*/
          }
          else
          {
            v36 = GetDlgItem((HWND)v27, 1836); /*0x78910d*/
            SendMessageA(v36, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x78911c*/
          }
          if ( String::Length((String *)&g_WOL_UserList.occupant) ) /*0x789123*/
          {
            v37 = String::GetOrEmpty((String *)&g_WOL_UserList.occupant); /*0x789136*/
            v38 = GetDlgItem((HWND)v27, 1575); /*0x78913e*/
            SendMessageA(v38, 0x4B4u, 0, (LPARAM)v37); /*0x789141*/
          }
          else
          {
            v39 = GetDlgItem((HWND)v27, 1575); /*0x789149*/
            SendMessageA(v39, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x789158*/
          }
          ShowWindow((HWND)v27, 1); /*0x78915d*/
          SendMessageA((HWND)v27, 0x4A9u, 0, 1); /*0x78916d*/
          if ( MessageDialogLoopAlt((HWND)v27, (unsigned __int8 (*)(void))GameLoop::Thunk, 0, 1, 1) != 1 ) /*0x789184*/
            break; /*0x789184*/
          v56[68] = 0; /*0x78918f*/
          strcpy(&v56[68], String::GetOrEmpty((String *)&g_WebBrowserConfig.?)); /*0x7891b3*/
          v56[4] = 0; /*0x7891c1*/
          v40 = String::GetOrEmpty((String *)&g_WOL_UserList.?); /*0x7891cb*/
          v56[36] = 0; /*0x7891dc*/
          strcpy(&v56[4], v40); /*0x7891ea*/
          strcpy(&v56[36], String::GetOrEmpty((String *)&g_WOL_UserList.occupant)); /*0x789217*/
          v57[0] = 0; /*0x789229*/
          if ( *(_DWORD *)v50.__pad_0 == 243 ) /*0x789231*/
            strcpy(v57, String::GetOrEmpty((String *)&stru_B765EC)); /*0x78925a*/
          v54 = 0; /*0x789267*/
          if ( *(_DWORD *)v50.__pad_0 == 244 ) /*0x789274*/
            v54 = unk_B76C20; /*0x78927c*/
          if ( strcmp(&v56[4], &v56[36]) ) /*0x78928e*/
          {
            v21 = GetStringCSF((wchar_t *)aTxtPasswordVer, 0, g_Str_File_wonline_cpp, 11073); /*0x7892cd*/
            goto LABEL_26; /*0x7892cd*/
          }
          if ( strlen(&v56[4]) != 8 ) /*0x7892e3*/
          {
            v21 = GetStringCSF((wchar_t *)aTxtPasswordToo, 0, g_Str_File_wonline_cpp, 11078); /*0x7892fc*/
            goto LABEL_26; /*0x7892fc*/
          }
          if ( (*(int (__stdcall **)(LPVOID, _BYTE *, _BYTE *, _BYTE *, char *, WPARAM, int))(*(_DWORD *)g_UIPointerTable /*0x789330*/
                                                                                            + 36))(
                 g_UIPointerTable,
                 &v56[68],
                 &v56[4],
                 &v56[100],
                 v57,
                 wParam,
                 v54) )
          {
            v46 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 11083); /*0x7894a5*/
            ShowDialogConfirm(v46, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7894ae*/
LABEL_75:
            v47 = (HWND)v50.DeleteAndZero_field_0x04; /*0x7894b3*/
            ShowWindow((HWND)v50.DeleteAndZero_field_0x04, 5); /*0x7894ba*/
            Dialog::InitWindow(v47, 0); /*0x7894c3*/
            CreateAccountWOL_Create_72C470(v49); /*0x7894c8*/
            return result; /*0x7894d7*/
          }
          v41 = GetStringCSF(aTxtReqNick, 0, g_Str_File_wonline_cpp, 11085); /*0x78934c*/
          WideString::Assign((wchar_t **)&v52.DeleteAndZero_field_0x04, v41); /*0x789356*/
          ShowUIMessage(256, (wchar_t **)&v52.DeleteAndZero_field_0x04, 1); /*0x789366*/
          DeleteAndZero::Alt((DeleteAndZero *)&v52.DeleteAndZero_field_0x04); /*0x78936f*/
          if ( dword_B77DF0 >= 0 ) /*0x78937b*/
            goto LABEL_75; /*0x78937b*/
        }
      }
      else
      {
        v23 = GetStringCSF(aWolRequestingn, 0, g_Str_File_wonline_cpp, 10942); /*0x788f44*/
        WideString::Assign((wchar_t **)&v52, v23); /*0x788f4e*/
        ShowUIMessage(256, (wchar_t **)&v52, 1); /*0x788f5e*/
        DeleteAndZero::Alt(&v52); /*0x788f67*/
        if ( dword_B77E60 >= 0 ) /*0x788f73*/
        {
          if ( dword_B77E60 >= 13 || dword_B77E64 ) /*0x788fc6*/
            goto LABEL_27; /*0x788fc6*/
          v26 = GetStringCSF(aTxtConsentRequ, 0, g_Str_File_wonline_cpp, 10957); /*0x788fe4*/
          if ( ShowDialogConfirm(v26, 4, (unsigned __int8 (*)(void))GameLoop::Thunk, 0) == 6 ) /*0x788ff8*/
          {
            sprintf(Buffer, "http://apiregister.westwood.com/consent_form/index_%d.html", dword_B77E50); /*0x789012*/
            OpenURLWOL(Buffer, 1); /*0x789026*/
          }
        }
        else
        {
          if ( dword_B77DF4 == -2147221248 ) /*0x788f86*/
          {
            v24 = GetStringCSF(aTxtRequiredFie, 0, g_Str_File_wonline_cpp, 10946); /*0x788f8d*/
            goto LABEL_71; /*0x788f8d*/
          }
          v25 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 10948); /*0x788fa3*/
          ShowDialogConfirm(v25, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x788fac*/
        }
      }
    }
  }
  v48 = (HWND)v50.DeleteAndZero_field_0x04; /*0x7894d8*/
  ShowWindow((HWND)v50.DeleteAndZero_field_0x04, 1); /*0x7894df*/
  ShowWindow(v48, 5); /*0x7894e4*/
  Dialog::InitWindow(v48, 0); /*0x7894e9*/
  CreateAccountWOL_Create_72C290(v49); /*0x7894ee*/
  return result; /*0x788c94*/
}



// ==== 0x00789500  FindChannelWOL  this=char*  sig=csp ====
int __fastcall WOL_FindChannel(const char *a1, int a2, unsigned __int8 a3, int a4)
{
  int v5; // edi
  int v6; // esi
  int v7; // eax
  const char *v9; // [esp+20h] [ebp-Ch] BYREF
  int v10; // [esp+24h] [ebp-8h] BYREF
  int v11; // [esp+28h] [ebp-4h]

  v11 = a2; /*0x789507*/
  v5 = 1; /*0x78950d*/
  while ( 1 ) /*0x789522*/
  {
    v9 = 0; /*0x789522*/
    v10 = 0; /*0x789526*/
    if ( !(*(int (__stdcall **)(LPVOID, int, const char **, int *))(*(_DWORD *)ppv + 144))(ppv, v5, &v9, &v10) /*0x789549*/
      && v9
      && !strcmp(v9, a1) )
    {
      break; /*0x789549*/
    }
    if ( ++v5 > 32 ) /*0x789574*/
      goto LABEL_8; /*0x789574*/
  }
  v6 = v5; /*0x78957a*/
  if ( v5 ) /*0x78957c*/
  {
LABEL_20:
    (*(void (__stdcall **)(LPVOID, int, const char *, int, _DWORD))(*(_DWORD *)ppv + 148))(ppv, v6, a1, v11, a3); /*0x7895f0*/
    (*(void (__stdcall **)(LPVOID, int, int))(*(_DWORD *)ppv + 200))(ppv, v6, a4); /*0x78961e*/
    return v6; /*0x78961e*/
  }
LABEL_8:
  v6 = 1; /*0x78957e*/
  while ( 1 ) /*0x789591*/
  {
    v9 = 0; /*0x789591*/
    v10 = 0; /*0x789595*/
    if ( (*(int (__stdcall **)(LPVOID, int, const char **, int *))(*(_DWORD *)ppv + 144))(ppv, v6, &v9, &v10) /*0x7895b0*/
      || !v9
      || !strlen(v9) )
    {
      break; /*0x7895b0*/
    }
    if ( ++v6 > 32 ) /*0x7895be*/
      goto LABEL_15; /*0x7895be*/
  }
  if ( v6 ) /*0x7895c4*/
    goto LABEL_20; /*0x7895c4*/
LABEL_15:
  v7 = dword_A8B544; /*0x7895c6*/
  if ( dword_A8B544 == -1 ) /*0x7895ce*/
    v7 = 1; /*0x7895d0*/
  v6 = v7; /*0x7895d5*/
  dword_A8B544 = v7 + 1; /*0x7895db*/
  if ( v7 + 1 > 32 ) /*0x7895e0*/
    dword_A8B544 = 1; /*0x7895e2*/
  if ( v7 ) /*0x7895ee*/
    goto LABEL_20; /*0x7895ee*/
  return v6; /*0x789626*/
}



// ==== 0x00789630  sub_789630  this=-  sig=ida-proto ====
String *__fastcall sub_789630(String *a1, int a2)
{
  int v3; // eax
  String v5; // [esp+4h] [ebp-8h] BYREF

  String::Assign(&v5, (const char *)(a2 + 24)); /*0x78963e*/
  unknown_libname_73(&v5.m_3[1]); /*0x789647*/
  v3 = String::Tokenize(&v5, 0, asc_8318B8, (void **)&v5.m_3[1]); /*0x78965c*/
  if ( v3 >= 0 ) /*0x789663*/
    String::Erase(&v5, 0, v3 + 1); /*0x78966d*/
  String::AssignFromPtr(a1, (const char **)&v5); /*0x789679*/
  DeleteAndZero((ObjectClass *)&v5.m_3[1]); /*0x789682*/
  DeleteAndZero((ObjectClass *)&v5); /*0x78968b*/
  return a1; /*0x789692*/
}



// ==== 0x007896A0  PopulateWOLUserList  this=ObjectClass  sig=csp ====
char __fastcall PopulateWOLUserList(HWND hWnd, char a2)
{
  LPARAM v4; // ebp
  _DWORD *PlayerProfile; // eax
  int v7; // eax
  int v8; // ecx
  char *v9; // esi
  int v10; // eax
  char *v11; // eax
  LRESULT v12; // esi
  char **v13; // eax
  WPARAM v14; // esi
  char **v15; // [esp-8h] [ebp-4Ch]
  bool v17; // [esp+Fh] [ebp-35h]
  void *v18; // [esp+10h] [ebp-34h] BYREF
  void *v19; // [esp+14h] [ebp-30h] BYREF
  WPARAM wParam; // [esp+18h] [ebp-2Ch]
  void *v21; // [esp+1Ch] [ebp-28h] BYREF
  int i; // [esp+20h] [ebp-24h]
  int v23; // [esp+24h] [ebp-20h] BYREF
  void *v24; // [esp+28h] [ebp-1Ch] BYREF
  void *v25[2]; // [esp+2Ch] [ebp-18h] BYREF
  void **v26; // [esp+34h] [ebp-10h] BYREF
  int v27; // [esp+38h] [ebp-Ch]
  int v28; // [esp+3Ch] [ebp-8h] BYREF
  char v29; // [esp+40h] [ebp-4h]

  if ( a2 ) /*0x7896b0*/
    ListBox::Clear(hWnd); /*0x7896b2*/
  else
    Memory_Pop(hWnd); /*0x7896b9*/
  v4 = 1; /*0x7896c3*/
  if ( g_WOL_UserList == 1 ) /*0x7896ca*/
  {
    if ( a2 ) /*0x7896d5*/
      SendMessageA(hWnd, 0x4BCu, 0, (LPARAM)aGuiNoserversav); /*0x7896dc*/
    else
      SendMessageA(hWnd, 0x4C8u, 0, (LPARAM)aGuiNoserversav); /*0x7896e4*/
    EnableWindow(hWnd, 0); /*0x7896ed*/
    return 0; /*0x7896f3*/
  }
  else
  {
    unknown_libname_73(&v21); /*0x789701*/
    v28 = 0; /*0x78970a*/
    v29 = 0; /*0x789712*/
    ReadRegistryOptionsWOL(&v28); /*0x789717*/
    ComPtr::Constructor(&v26); /*0x789720*/
    v26 = &rc_ptr<PlayerProfile>::`vftable'; /*0x78972e*/
    if ( Flag::IsNot2(&v28) ) /*0x789732*/
    {
      PlayerProfile = LoadPlayerProfile(v25, (const char **)&dword_B73E40); /*0x789744*/
      ComPtr::Set(&v26, PlayerProfile[1]); /*0x789751*/
      v25[0] = &rc_ptr<PlayerProfile>::`vftable'; /*0x78975a*/
      ComPtr::Release(v25); /*0x78975e*/
    }
    else
    {
      ComPtr::Set(&v26, dword_B75E4C); /*0x789770*/
    }
    if ( v27 ) /*0x78977b*/
      String::Reassign((char **)&v21, (const char **)(v27 + 12)); /*0x789785*/
    EnableWindow(hWnd, 1); /*0x78978c*/
    v7 = g_WOL_UserList; /*0x789792*/
    wParam = -1; /*0x78979f*/
    if ( g_WOL_UserList <= 1 ) /*0x7897a7*/
      goto LABEL_30; /*0x7897a7*/
    v8 = 248; /*0x7897ad*/
    for ( i = 248; ; v8 = i ) /*0x7897b2*/
    {
      v9 = 0; /*0x7897bc*/
      if ( v8 >= 0 && v4 < v7 ) /*0x7897c4*/
        v9 = (char *)dword_B778E0 + v8; /*0x7897cc*/
      Debug::Log(); /*0x7897d8*/
      String::Assign((char **)&v18, v9 + 24); /*0x7897e5*/
      unknown_libname_73(&v23); /*0x7897ee*/
      v10 = String::Tokenize((const char **)&v18, 0, asc_8318B8, (void **)&v23); /*0x789803*/
      if ( v10 >= 0 ) /*0x78980a*/
        String::Erase((const char **)&v18, 0, v10 + 1); /*0x789814*/
      String::AssignFromPtr((char **)&v19, (const char **)&v18); /*0x789822*/
      DeleteAndZero((void **)&v23); /*0x78982b*/
      DeleteAndZero(&v18); /*0x789834*/
      v11 = String::GetOrEmpty_Alt((char **)&v19); /*0x789845*/
      if ( a2 ) /*0x789843*/
      {
        v12 = SendMessageA(hWnd, 0x4BCu, 0, (LPARAM)v11); /*0x789855*/
        SendMessageA(hWnd, 0x151u, v12, v4); /*0x78985e*/
      }
      else
      {
        v12 = SendMessageA(hWnd, 0x4C8u, 0, (LPARAM)v11); /*0x789870*/
        SendMessageA(hWnd, 0x19Au, v12, v4); /*0x78987a*/
      }
      if ( String::Length((const char **)&v21) ) /*0x789880*/
      {
        v15 = String::ToLowerCopy((const char **)&v19, (char **)v25); /*0x78989b*/
        v13 = String::ToLowerCopy((const char **)&v21, (char **)&v24); /*0x7898a1*/
        v17 = String::Compare((const char **)v13, (const char **)v15); /*0x7898b1*/
        DeleteAndZero(&v24); /*0x7898b5*/
        DeleteAndZero(v25); /*0x7898be*/
        if ( v17 ) /*0x7898c9*/
        {
          wParam = v12; /*0x7898cb*/
          dword_B76468 = v4; /*0x7898cf*/
          dword_B779CC = v4; /*0x7898d5*/
        }
      }
      DeleteAndZero(&v19); /*0x7898df*/
      v7 = g_WOL_UserList; /*0x7898e8*/
      ++v4; /*0x7898ed*/
      i += 248; /*0x7898f6*/
      if ( v4 >= g_WOL_UserList ) /*0x7898fa*/
        break; /*0x7898fa*/
    }
    v14 = wParam; /*0x789900*/
    if ( wParam == -1 ) /*0x789907*/
    {
LABEL_30:
      wParam = 0; /*0x789909*/
      v14 = 0; /*0x789911*/
    }
    if ( a2 ) /*0x78991e*/
    {
      SendMessageA(hWnd, 0x14Eu, v14, 0); /*0x789925*/
    }
    else
    {
      SendMessageA(hWnd, 0x186u, v14, 0); /*0x78992d*/
      SendMessageA(hWnd, 0x197u, v14, 0); /*0x789938*/
    }
    v26 = &rc_ptr<PlayerProfile>::`vftable'; /*0x78993e*/
    ComPtr::Release(&v26); /*0x789946*/
    DeleteAndZero(&v21); /*0x78994f*/
    return 1; /*0x789954*/
  }
}



// ==== 0x00789960  ObjectClass::ValidateJoinWOL  this=ObjectClass  sig=csp ====
char __usercall ValidateJoinWOL@<al>(ObjectClass *this, int a2@<ecx>, int a3@<ebx>, int a4@<ebp>)
{
  char v4; // dl
  char result; // al
  int v7; // eax
  int v8; // esi
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  int v11; // eax
  int v12; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v14; // ecx
  char v15; // bl
  wchar_t *v16; // [esp-4h] [ebp-28h] BYREF
  String v17; // [esp+Ch] [ebp-18h] BYREF
  OwnerDrawControl v18[3]; // [esp+14h] [ebp-10h] BYREF
  char *v19; // [esp+20h] [ebp-4h] BYREF

  result = ValidateGameJoinWOL(a2, 1, v4); /*0x78996b*/
  if ( result )
  {
    v7 = *(_DWORD *)(a2 + 32); /*0x78997b*/
    if ( (v7 & 0x400) != 0 )
      v8 = 800; /*0x789988*/
    else
      v8 = (v7 & 0x200) != 0 ? 640 : 1024;
    if ( stru_A8EB00.ObjectTypeClass[33] > v8 )
    {
      v9 = (*(_DWORD *)(a2 + 32) & 0x400) != 0
         ? GetStringCSF((wchar_t *)aWolResolutionl, 0, g_Str_File_wonline_cpp, 11491)
         : GetStringCSF(aWolResolutionl_0, 0, g_Str_File_wonline_cpp, 11492);
      WideString::Assign((wchar_t **)&v17.m_3[1], v9); /*0x7899e2*/
      v10 = WideString::GetOrEmpty((wchar_t **)&v17.m_3[1]); /*0x7899f2*/
      if ( ShowDialogConfirm(v10, 4, (unsigned __int8 (*)(void))GameLoop::Thunk, 1) == 6 ) /*0x789a06*/
      {
        v11 = -(v8 != 800); /*0x789a16*/
        LOBYTE(v11) = v11 & 0x60; /*0x789a18*/
        stru_A8EB00.ObjectTypeClass[33] = v11 + 800; /*0x789a1f*/
        v12 = -(v11 != 0); /*0x789a2b*/
        LOBYTE(v12) = v12 & 0x88; /*0x789a2d*/
        stru_A8EB00.ObjectTypeClass[34] = v12 + 600; /*0x789a34*/
        ScenarioClass::SaveGameOptions((ScenarioClass *)&stru_A8EB00.ObjectTypeClass[24]); /*0x789a39*/
      }
      DeleteAndZero::Alt((DeleteAndZero *)&v17.m_3[1]); /*0x789a42*/
      if ( stru_A8EB00.ObjectTypeClass[33] > v8 ) /*0x789a4d*/
        return 0; /*0x789a57*/
    }
    unknown_libname_73(&v17); /*0x789a5c*/
    if ( (*(_DWORD *)(a2 + 28) & 0x100) != 0 ) /*0x789a67*/
    {
      Screen::Capture(1, 0, a3, a4); /*0x789a71*/
      SimpleDialogControl::Constructor((SimpleDialogControl *)v18); /*0x789a7a*/
      v18[0] = (OwnerDrawControl)&off_7F7624; /*0x789a88*/
      unknown_libname_73(&v19); /*0x789a8c*/
      v18[0] = (OwnerDrawControl)&WonlineStringDialogControl::`vftable'; /*0x789aa5*/
      if ( RunDialog( /*0x789ab1*/
             0xE1u,
             (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WOLGameClass::ParseChatMessage,
             (LPARAM)v18) == 2 )
      {
        v18[0] = (OwnerDrawControl)&WonlineStringDialogControl::`vftable'; /*0x789ab7*/
        DeleteAndZero((ObjectClass *)&v19); /*0x789abb*/
        v18[0] = (OwnerDrawControl)&off_7F7624; /*0x789ac4*/
        OwnerDrawControl::InitVtable(v18); /*0x789ac8*/
        DeleteAndZero((ObjectClass *)&v17); /*0x789ad1*/
        return 0; /*0x789ade*/
      }
      String::Reassign(&v17, (const char **)&v19); /*0x789ae8*/
      String::Replace(&v17, asc_830A14, asc_818D7C); /*0x789afb*/
      v18[0] = (OwnerDrawControl)&WonlineStringDialogControl::`vftable'; /*0x789b04*/
      DeleteAndZero((ObjectClass *)&v19); /*0x789b08*/
      v18[0] = (OwnerDrawControl)&off_7F7624; /*0x789b11*/
      OwnerDrawControl::InitVtable(v18); /*0x789b15*/
    }
    StringCSF = GetStringCSF(g_Str_TXT_JOINLOB, 0, g_Str_File_wonline_cpp, 11547); /*0x789b2b*/
    v16 = v14; /*0x789b30*/
    WideString::Assign(&v16, StringCSF); /*0x789b34*/
    v15 = LeaveChannelExWOL(a2, (char **)&v17, v16) == 0; /*0x789b4a*/
    DeleteAndZero((ObjectClass *)&v17); /*0x789b4d*/
    return v15; /*0x789b52*/
  }
  return result; /*0x789974*/
}



// ==== 0x00789B60  ObjectClass::CreateGameWOL  this=ObjectClass  sig=csp ====
char __usercall CreateGameWOL@<al>(ObjectClass *this, int a2@<esi>)
{
  int v2; // edi
  bool v3; // bl
  int v5; // eax
  wchar_t *StringCSF; // eax
  int i; // esi
  TechnoTypeClass *v8; // ecx
  int v9; // eax
  int v10; // ebp
  wchar_t *v11; // eax
  ObjectClass *PlayerProfile; // eax
  int PlayerOption; // eax
  int PlayerColor; // eax
  int v15; // eax
  wchar_t *v16; // eax
  int v17; // eax
  wchar_t *v18; // eax
  HWND v19; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  wchar_t *v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  HWND v28; // eax
  int owningHouseIndex; // eax
  char *v30; // ebx
  int v31; // esi
  int v32; // edi
  char *v33; // eax
  char *v34; // eax
  u_long v35; // edx
  int v36; // eax
  _DWORD *v37; // ebp
  int Flag_field_0x04; // eax
  int Flag_field_0x08; // ecx
  HWND v40; // eax
  HWND v41; // edi
  HWND Dialog; // esi
  String v43; // [esp+18h] [ebp-1ACh] BYREF
  DeleteAndZero v44; // [esp+20h] [ebp-1A4h] BYREF
  ComPtr v45; // [esp+2Ch] [ebp-198h] BYREF
  DeleteAndZero v46; // [esp+50h] [ebp-174h] BYREF
  Flag v47; // [esp+5Ch] [ebp-168h] BYREF
  _DWORD v48[67]; // [esp+70h] [ebp-154h] BYREF
  char v49[72]; // [esp+17Ch] [ebp-48h] BYREF

  unknown_libname_73(&v43); /*0x789b6a*/
  if ( stru_A8EB00.ObjectTypeClass[33] >= 1024 ) /*0x789b79*/
    byte_A8B540 = 0; /*0x789b7b*/
  v43.__tail_7[0] = byte_A8B540; /*0x789b9c*/
  v3 = g_MenuStateFlags == 1; /*0x789ba0*/
  CreateGameWOL_Create_7AC610((SimpleWonlineDialogControl *)&v45); /*0x789ba3*/
  LOWORD(v45.ComPtr_field_0x10) = 0; /*0x789bb4*/
  BYTE2(v45.ComPtr_field_0x10) = v43.__tail_7[0]; /*0x789bbe*/
  HIBYTE(v45.ComPtr_field_0x10) = v3; /*0x789bc2*/
  *(_DWORD *)v45.__pad_0 = &CreateGameDialogControl::`vftable'; /*0x789bc6*/
  byte_B77DEC = 0; /*0x789bce*/
  if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x789bde*/
  {
    stru_B77D80.HashTable_field_0x44 = 2; /*0x789be0*/
  }
  else
  {
    Screen::Capture(1, 0, v3, 1); /*0x789bf0*/
    if ( RunDialog(0xC3u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WOLLogin::DlgProc, (LPARAM)&v45) == 2 ) /*0x789c0c*/
    {
      *(_DWORD *)v45.__pad_0 = &WonlineStringDialogControl::`vftable'; /*0x789c12*/
      DeleteAndZero((ObjectClass *)&v45.ComPtr_field_0x0C); /*0x789c1a*/
      ConnectAndLoginWOL_Connect((SimpleWonlineDialogControl *)&v45); /*0x789c23*/
      DeleteAndZero((ObjectClass *)&v43); /*0x789c2c*/
      return 0; /*0x789c3d*/
    }
    String::Reassign(&v43, (const char **)&v45.ComPtr_field_0x0C); /*0x789c47*/
    String::Replace(&v43, asc_830A14, asc_818D7C); /*0x789c5a*/
  }
  (*(void (__stdcall **)(LPVOID, int, int))(*(_DWORD *)ppv + 36))(ppv, v2, a2); /*0x789c67*/
  memset(v48, 0, sizeof(v48)); /*0x789c7b*/
  sprintf((char *const)&v48[13], "%s's_game", *(const char **)&g_WindowManager.__pad_EC[684]); /*0x789c8b*/
  v48[0] = 41; /*0x789c9b*/
  v48[1] = 1; /*0x789ca3*/
  if ( stru_B77D80.HashTable_field_0x44 < 2 ) /*0x789ca7*/
    stru_B77D80.HashTable_field_0x44 = 6; /*0x789ca9*/
  strcpy((char *)&v48[53] + 3, String::GetOrEmpty((String *)&v44)); /*0x789cdb*/
  v48[2] = stru_B77D80.HashTable_field_0x44; /*0x789cf3*/
  memset(v49, 0, 0x50u); /*0x789cfc*/
  GameConfig::BuildChecksum(v49); /*0x789d05*/
  v49[40] = 0; /*0x789d15*/
  strcpy((char *)&v48[56], v49); /*0x789d33*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x789d49*/
  {
    if ( dword_A8B244 == 3 ) /*0x789d4e*/
    {
      v5 = v48[8]; /*0x789d50*/
      v48[5] = 1; /*0x789d57*/
      BYTE1(v5) = BYTE1(v48[8]) | 0x10; /*0x789d5b*/
      goto LABEL_22; /*0x789d5e*/
    }
  }
  else if ( dword_A8B244 == 3 ) /*0x789d63*/
  {
LABEL_29:
    v5 = v48[8]; /*0x789ec4*/
    v48[5] = 1; /*0x789ee7*/
    BYTE1(v5) = BYTE1(v48[8]) | 8; /*0x789eeb*/
    goto LABEL_22; /*0x789eee*/
  }
  if ( dword_A8B244 == 1 ) /*0x789d6b*/
    goto LABEL_29; /*0x789d6b*/
  if ( dword_A8B244 == 2 )
  {
    v5 = v48[8]; /*0x789ec9*/
    v48[5] = 0; /*0x789ed0*/
    BYTE1(v5) = BYTE1(v48[8]) | 8; /*0x789ed8*/
  }
  else
  {
    v5 = v48[8]; /*0x789d8a*/
    v48[5] = LOBYTE(v45.ComPtr_field_0x18); /*0x789d91*/
    if ( BYTE1(v45.ComPtr_field_0x18) ) /*0x789d95*/
      BYTE1(v5) = BYTE1(v48[8]) | 1; /*0x789d97*/
    byte_A8B540 = BYTE2(v45.ComPtr_field_0x18); /*0x789da0*/
    if ( BYTE2(v45.ComPtr_field_0x18) )
      v5 |= stru_A8EB00.ObjectTypeClass[33] != 800 ? 512 : 1024;
  }
LABEL_22:
  v48[8] = dword_B77DD4 + v5; /*0x789dc6*/
  if ( stru_B77D80.HashTable_field_0x50 ) /*0x789dda*/
  {
    Debug::Log(); /*0x789df0*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x789e00*/
    StringCSF = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x789e14*/
    WideString::Assign((wchar_t **)&v46.DeleteAndZero_field_0x04, StringCSF); /*0x789e1e*/
    ShowUIMessage(192, (wchar_t **)&v46.DeleteAndZero_field_0x04, 0); /*0x789e2e*/
    DeleteAndZero::Alt((DeleteAndZero *)&v46.DeleteAndZero_field_0x04); /*0x789e37*/
    for ( i = 0; stru_B77D80.HashTable_field_0x50; ++i ) /*0x789e45*/
    {
      if ( i >= 150 ) /*0x789e53*/
        break; /*0x789e53*/
      Sleep(0x64u); /*0x789e57*/
      Game::ProcessIdle(v8); /*0x789e59*/
    }
    CreateGameWOL_Create(64); /*0x789e6d*/
  }
  dword_A8B23C = (ObjectClass *)MultiplayerGameMode::GetFirst(); /*0x789e77*/
  *(_DWORD *)stru_A8B250.__pad_0 = dword_A8B23C->owningHouseIndex; /*0x789e7f*/
  (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 8))(dword_A8B23C); /*0x789e89*/
  LoadScenarioClassByIndex(0); /*0x789e8e*/
  PtrVector::Destroy(&stru_A8DA74); /*0x789e98*/
  Game::ResetFlags(); /*0x789e9d*/
  Network::InitPlayerSlots(); /*0x789ea2*/
  v9 = __2_YAPAXI_Z(0x85u); /*0x789eac*/
  v10 = v9; /*0x789eb1*/
  if ( v9 ) /*0x789eb8*/
    Waypoint::InitInvalid((Waypoint *)(v9 + 40)); /*0x789ebd*/
  else
    v10 = 0; /*0x789ef3*/
  memset((void *)v10, 0, 0x84u); /*0x789f03*/
  *(_BYTE *)(v10 + 132) = 0; /*0x789f09*/
  CharStringToWide((wchar_t **)&v44.DeleteAndZero_field_0x08, (const char **)&g_WindowManager.__pad_EC[684]); /*0x789f0a*/
  v11 = WideString::GetOrEmpty((wchar_t **)&v44.DeleteAndZero_field_0x08); /*0x789f13*/
  wcscpy((wchar_t *)v10, v11); /*0x789f1a*/
  *(_DWORD *)v47.__pad_0 = 0; /*0x789f28*/
  LOBYTE(v47.Flag_field_0x04) = 0; /*0x789f2c*/
  ReadRegistryOptionsWOL((ObjectClass *)&v47); /*0x789f31*/
  ComPtr::Constructor(&v45); /*0x789f3a*/
  *(_DWORD *)v45.__pad_0 = &rc_ptr<PlayerProfile>::`vftable'; /*0x789f48*/
  if ( (unsigned __int8)Flag::IsNot2(&v47) ) /*0x789f4c*/
  {
    PlayerProfile = LoadPlayerProfile( /*0x789f5e*/
                      (ObjectClass *)&v45.ComPtr_field_0x20,
                      (const char **)&g_WindowManager.__pad_EC[684]);
    ComPtr::Set(&v45, (int)PlayerProfile->?); /*0x789f6b*/
    v45.ComPtr_field_0x20 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x789f74*/
    ComPtr::Release((ComPtr *)&v45.ComPtr_field_0x20); /*0x789f78*/
  }
  else
  {
    ComPtr::Set(&v45, stru_B75E48.ComPtr_field_0x04); /*0x789f8a*/
  }
  if ( v45.ComPtr_field_0x04 ) /*0x789f95*/
  {
    SessionClass::AssignSide((SessionClass *)&dword_A8B238, *(_DWORD *)(v45.ComPtr_field_0x04 + 28), 0); /*0x789fa1*/
    SessionClass::AssignColor((SessionClass *)&dword_A8B238, *(_DWORD *)(v45.ComPtr_field_0x04 + 32), 0); /*0x789fb4*/
  }
  dword_A8B39C = -1; /*0x789fbe*/
  dword_A8B3A0 = -2; /*0x789fc4*/
  PlayerOption = Session::GetPlayerOption((Session *)&dword_A8B238); /*0x789fce*/
  SessionClass::SetPlayerOption((int *)v10, PlayerOption); /*0x789fd6*/
  PlayerColor = Session::GetPlayerColor((Session *)&dword_A8B238); /*0x789fe0*/
  SessionClass::SetPlayerColor((int *)v10, PlayerColor); /*0x789fe8*/
  SessionClass::SetOption((int *)v10, -2); /*0x789ff1*/
  SessionClass::SetOption2((int *)v10, -2); /*0x789ffa*/
  *(_DWORD *)(v10 + 119) = 1; /*0x789fff*/
  *(_DWORD *)(v10 + 107) = 0; /*0x78a006*/
  g_MPCooperativeState = (ObjectClass *)7; /*0x78a015*/
  g_MenuStateFlags = HIBYTE(v45.ComPtr_field_0x18); /*0x78a01f*/
  Dialog::RefreshDialogsGame(0); /*0x78a025*/
  if ( g_MenuStateFlags ) /*0x78a030*/
  {
    g_MPCooperativeState = 0; /*0x78a032*/
    *(_DWORD *)(v10 + 107) = -1; /*0x78a03c*/
    SessionClass::SetPlayerOption((int *)v10, -3); /*0x78a03f*/
  }
  if ( dword_A8DA84 < dword_A8DA7C /*0x78a079*/
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA74 + 8))(
         &stru_A8DA74,
         dword_A8DA7C + dword_A8DA88,
         0) )
  {
    v15 = dword_A8DA84++; /*0x78a086*/
    dword_A8DA78[v15] = v10; /*0x78a095*/
  }
  NetworkShare::GetField(0); /*0x78a09a*/
  v16 = WideString::GetOrEmpty((wchar_t **)&v44.DeleteAndZero_field_0x08); /*0x78a0a3*/
  wcscpy((wchar_t *)&stru_A8D600.Network_field_0x10, v16); /*0x78a0ae*/
  v17 = (*(int (__cdecl **)(LPVOID, _DWORD *))(*(_DWORD *)ppv + 28))(ppv, v48); /*0x78a0c3*/
  if ( v17 == -2147221000 ) /*0x78a0cb*/
  {
    v18 = GetStringCSF(aTxtBadChankey, 0, g_Str_File_wonline_cpp, 11789); /*0x78a0e4*/
    ShowDialogConfirm(v18, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x78a0ed*/
    v19 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x78a0f7*/
    if ( v19 ) /*0x78a0fe*/
    {
      stru_B77D80.HashTable_field_0x48 &= ~0x80u; /*0x78a10c*/
      if ( !stru_B77D80.HashTable_field_0x48 ) /*0x78a112*/
        CloseDialog(v19, 0); /*0x78a118*/
    }
    Current = (HWND)Dialog::GetCurrent(); /*0x78a11d*/
    DlgItem = GetDlgItem(Current, 1344); /*0x78a128*/
    if ( !DlgItem ) /*0x78a130*/
      goto LABEL_72; /*0x78a130*/
    goto LABEL_50; /*0x78a130*/
  }
  if ( v17 ) /*0x78a144*/
  {
    v22 = GetStringCSF(aTxtCantcreateC, 0, g_Str_File_wonline_cpp, 11795); /*0x78a15d*/
    ShowDialogConfirm(v22, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x78a166*/
    v23 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x78a170*/
    if ( v23 ) /*0x78a177*/
    {
      stru_B77D80.HashTable_field_0x48 &= ~0x80u; /*0x78a185*/
      if ( !stru_B77D80.HashTable_field_0x48 ) /*0x78a18b*/
        CloseDialog(v23, 0); /*0x78a191*/
    }
    v24 = (HWND)Dialog::GetCurrent(); /*0x78a196*/
    DlgItem = GetDlgItem(v24, 1344); /*0x78a1a1*/
    if ( !DlgItem ) /*0x78a1a9*/
      goto LABEL_72; /*0x78a1a9*/
LABEL_50:
    SetFocus(DlgItem); /*0x78a136*/
LABEL_72:
    v44.DeleteAndZero_field_0x04 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x78a29d*/
    ComPtr::Release((ComPtr *)&v44.DeleteAndZero_field_0x04); /*0x78a2a5*/
    DeleteAndZero::Alt(&v44); /*0x78a2ae*/
    *(_DWORD *)v45.__pad_0 = &WonlineStringDialogControl::`vftable'; /*0x78a2b7*/
    DeleteAndZero((ObjectClass *)&v45.ComPtr_field_0x0C); /*0x78a2bf*/
    *(_DWORD *)v45.__pad_0 = &off_7F7624; /*0x78a2c8*/
    OwnerDrawControl::InitVtable((OwnerDrawControl *)&v45); /*0x78a2d0*/
    DeleteAndZero((ObjectClass *)&v43); /*0x78a2d9*/
    return 0; /*0x78a2ea*/
  }
  v25 = GetStringCSF(aGuiCreatingcha, 0, g_Str_File_wonline_cpp, 11803); /*0x78a1cc*/
  WideString::Assign((wchar_t **)&v46, v25); /*0x78a1d6*/
  ShowUIMessage(4, (wchar_t **)&v46, 0); /*0x78a1e5*/
  v26 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x78a1ef*/
  if ( v26 ) /*0x78a1f6*/
  {
    stru_B77D80.HashTable_field_0x48 &= ~0x80u; /*0x78a204*/
    if ( !stru_B77D80.HashTable_field_0x48 ) /*0x78a20a*/
      CloseDialog(v26, 0); /*0x78a210*/
  }
  v27 = (HWND)Dialog::GetCurrent(); /*0x78a215*/
  v28 = GetDlgItem(v27, 1344); /*0x78a220*/
  if ( v28 ) /*0x78a228*/
    SetFocus(v28); /*0x78a22b*/
  ShowUIMessage(4, (wchar_t **)&v46, 1); /*0x78a23c*/
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x78a241*/
  v30 = 0; /*0x78a246*/
  v31 = 0; /*0x78a248*/
  if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x78a24c*/
    goto LABEL_71; /*0x78a24c*/
  v32 = 0; /*0x78a24e*/
  while ( 1 ) /*0x78a250*/
  {
    if ( v32 >= 0 && v31 < owningHouseIndex ) /*0x78a256*/
      v30 = (char *)g_WOL_UserList.nextObject + v32; /*0x78a25e*/
    v33 = String::GetOrEmpty_Alt((String *)&g_WindowManager.__pad_EC[684]); /*0x78a26a*/
    if ( !_strcmpi(v33, v30 + 36) ) /*0x78a270*/
      break; /*0x78a270*/
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x78a27c*/
    ++v31; /*0x78a281*/
    v32 += 108; /*0x78a282*/
    if ( v31 >= g_WOL_UserList.owningHouseIndex ) /*0x78a287*/
      goto LABEL_71; /*0x78a287*/
  }
  if ( v31 < 0 ) /*0x78a28d*/
  {
LABEL_71:
    DeleteAndZero::Alt(&v46); /*0x78a294*/
    goto LABEL_72; /*0x78a298*/
  }
  v34 = 0; /*0x78a2f1*/
  if ( v31 < g_WOL_UserList.owningHouseIndex ) /*0x78a2f5*/
    v34 = (char *)g_WOL_UserList.nextObject + 108 * v31; /*0x78a303*/
  v35 = *((_DWORD *)v34 + 6); /*0x78a306*/
  v45.ComPtr_field_0x18 = 0; /*0x78a30b*/
  v45.ComPtr_field_0x20 = 0; /*0x78a310*/
  LOWORD(v45.ComPtr_field_0x1C) = 0; /*0x78a318*/
  v36 = ntohl(v35); /*0x78a31d*/
  HIBYTE(v45.ComPtr_field_0x18) = v36; /*0x78a326*/
  LOBYTE(v45.ComPtr_field_0x18) = HIBYTE(v36); /*0x78a332*/
  BYTE2(v45.ComPtr_field_0x18) = BYTE1(v36); /*0x78a336*/
  BYTE1(v45.ComPtr_field_0x18) = BYTE2(v36); /*0x78a34b*/
  NetworkAddress::Assign((NetworkAddress *)&v47, &v45.ComPtr_field_0x20, (int)&v45.ComPtr_field_0x18, 0); /*0x78a34f*/
  v37 = (_DWORD *)(v10 + 40); /*0x78a354*/
  Flag_field_0x04 = v47.Flag_field_0x04; /*0x78a35b*/
  Flag_field_0x08 = v47.Flag_field_0x08; /*0x78a35f*/
  *v37 = *(_DWORD *)v47.__pad_0; /*0x78a363*/
  v37[1] = Flag_field_0x04; /*0x78a366*/
  v37[2] = Flag_field_0x08; /*0x78a369*/
  if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x78a386*/
  {
    v40 = (HWND)Dialog::GetCurrent(); /*0x78a38c*/
    v41 = v40; /*0x78a391*/
    if ( v40 ) /*0x78a395*/
    {
      RenderGadgetClassAnimation(v40, 0); /*0x78a39b*/
      Screen::Capture(1, 0, (unsigned __int8)v30, (int)v37); /*0x78a3a4*/
    }
    Screen::Capture(1, 0, (unsigned __int8)v30, (int)v37); /*0x78a3ad*/
    LoadingScreen::Init(); /*0x78a3b2*/
    Dialog = (HWND)CreateDialog(0xC2u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WOLobby::SetupDlgProc, 0); /*0x78a3ce*/
    (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 39))(dword_A8B23C); /*0x78a3d2*/
    (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 8))(dword_A8B23C); /*0x78a3e0*/
    (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 6))(dword_A8B23C); /*0x78a3eb*/
    (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 31))(dword_A8B23C); /*0x78a3f6*/
    ShowWindow(Dialog, 1); /*0x78a402*/
    if ( v41 ) /*0x78a406*/
      ShowWindow(v41, 0); /*0x78a40b*/
  }
  DeleteAndZero::Alt(&v46); /*0x78a411*/
  v44.DeleteAndZero_field_0x04 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x78a41a*/
  ComPtr::Release((ComPtr *)&v44.DeleteAndZero_field_0x04); /*0x78a422*/
  DeleteAndZero::Alt(&v44); /*0x78a42b*/
  *(_DWORD *)v45.__pad_0 = &WonlineStringDialogControl::`vftable'; /*0x78a434*/
  DeleteAndZero((ObjectClass *)&v45.ComPtr_field_0x0C); /*0x78a43c*/
  *(_DWORD *)v45.__pad_0 = &off_7F7624; /*0x78a445*/
  OwnerDrawControl::InitVtable((OwnerDrawControl *)&v45); /*0x78a44d*/
  DeleteAndZero((ObjectClass *)&v43); /*0x78a456*/
  return 1; /*0x789c37*/
}



// ==== 0x0078A470  ObjectClass::HandleOnlineWOL  this=ObjectClass  sig=csp ====
int __thiscall HandleOnlineWOL(ObjectClass *this)
{
  wchar_t *StringCSF; // eax
  size_t v3; // eax
  int v4; // ebx
  const wchar_t *i; // esi
  wchar_t *v6; // edi
  wchar_t v7; // cx
  char *v8; // edi
  LPVOID v9; // eax
  wchar_t *v11; // eax
  HWND Current; // eax
  HWND v13; // esi
  int Type; // esi
  int v15; // eax
  const wchar_t *v16; // [esp+0h] [ebp-314h]
  wchar_t v17[16]; // [esp+8h] [ebp-30Ch] BYREF
  wchar_t String[64]; // [esp+28h] [ebp-2ECh] BYREF
  char v19[36]; // [esp+A8h] [ebp-26Ch] BYREF
  char v20[72]; // [esp+CCh] [ebp-248h] BYREF
  wchar_t Buffer[256]; // [esp+114h] [ebp-200h] BYREF

  StringCSF = GetStringCSF(aTxtOnlineComma, 0, g_Str_File_wonline_cpp, 11864); /*0x78a48d*/
  wcscpy(String, StringCSF); /*0x78a498*/
  v3 = wcslen(String); /*0x78a4a2*/
  if ( wcsncmp((const wchar_t *)this, String, v3) ) /*0x78a4ae*/
    return 0; /*0x78a697*/
  v4 = 0; /*0x78a4c4*/
  for ( i = (const wchar_t *)((char *)this + 2 * wcslen(String)); !wcsncmp(i, asc_82083C, 1u); ++i ) /*0x78a4d6*/
    ; /*0x78a4e2*/
  if ( *i ) /*0x78a4f9*/
  {
    v6 = v17; /*0x78a4ff*/
    do /*0x78a529*/
    {
      if ( !wcsncmp(i, asc_82083C, 1u) ) /*0x78a50b*/
        break; /*0x78a515*/
      if ( v4 >= 10 ) /*0x78a51a*/
        break; /*0x78a51a*/
      v7 = *i++; /*0x78a51c*/
      *v6 = v7; /*0x78a522*/
      ++v4; /*0x78a525*/
      ++v6; /*0x78a526*/
    }
    while ( *i ); /*0x78a529*/
  }
  v17[v4] = 0; /*0x78a533*/
  if ( wcslen(v17) ) /*0x78a53b*/
  {
    strcpy(v20, ToWideStringChar((char *)v17)); /*0x78a56e*/
    v8 = ToWideStringChar((char *)v17); /*0x78a580*/
    v9 = ppv; /*0x78a58d*/
    strcpy((char *)&g_WOL_LoginObject.?, v8); /*0x78a59e*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)v9 + 96))(v9, v19); /*0x78a5b2*/
    return 1; /*0x78a5b5*/
  }
  else
  {
    v11 = GetStringCSF(aTxtNoName, 0, g_Str_File_wonline_cpp, 11884); /*0x78a5d4*/
    swprintf(Buffer, (const size_t)v11, v16); /*0x78a5e2*/
    Current = (HWND)Dialog::GetCurrent(); /*0x78a5ea*/
    v13 = Current; /*0x78a5ef*/
    if ( Current ) /*0x78a5f3*/
    {
      if ( GetDlgItem(Current, 1343) ) /*0x78a601*/
        Dialog::ShowMessage(-1, (size_t)Buffer); /*0x78a616*/
      if ( GetDlgItem(v13, 1461) ) /*0x78a624*/
        Dialog::ShowStatusText(-1, (size_t)Buffer); /*0x78a639*/
    }
    if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x78a646*/
    {
      Type = BuildingAnim::GetType(); /*0x78a65a*/
      LOWORD(v15) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x78a66a*/
      MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, Buffer, Type, 22, v15, 0); /*0x78a684*/
    }
    return 1; /*0x78a68a*/
  }
}



// ==== 0x0078A6B0  ObjectClass::HandlePageWOL  this=ObjectClass  sig=csp ====
wchar_t *__thiscall HandlePageWOL(ObjectClass *this)
{
  int v2; // esi
  wchar_t *StringCSF; // eax
  size_t v4; // eax
  int v5; // ebp
  size_t v6; // esi
  wchar_t *result; // eax
  wchar_t *v8; // edi
  const wchar_t *v9; // ebx
  wchar_t *v10; // esi
  wchar_t v11; // dx
  int v12; // esi
  int Type; // esi
  int v14; // eax
  wchar_t *v15; // eax
  int v16; // [esp-Ch] [ebp-1A8h]
  wchar_t *v17; // [esp+Ch] [ebp-190h]
  wchar_t String2[16]; // [esp+10h] [ebp-18Ch] BYREF
  char v19[36]; // [esp+30h] [ebp-16Ch] BYREF
  char v20[72]; // [esp+54h] [ebp-148h] BYREF
  wchar_t String[128]; // [esp+9Ch] [ebp-100h] BYREF

  v2 = 0; /*0x78a6cc*/
  StringCSF = GetStringCSF(g_Str_TXT_PAGE_COMMAND, 0, g_Str_File_wonline_cpp, 11918); /*0x78a6ce*/
  wcscpy(String, StringCSF); /*0x78a6dc*/
  v4 = wcslen(String); /*0x78a6e9*/
  if ( _wcsnicmp((const wchar_t *)this, String, v4) ) /*0x78a6f8*/
    return (wchar_t *)v2; /*0x78a8e2*/
  v5 = 0; /*0x78a709*/
  v6 = wcslen((const wchar_t *)this) + 1; /*0x78a712*/
  result = (wchar_t *)__2_YAPAXI_Z(2 * v6); /*0x78a717*/
  if ( result ) /*0x78a721*/
  {
    result = wcsncpy(result, (const wchar_t *)this, v6); /*0x78a730*/
    v8 = result; /*0x78a735*/
    v17 = result; /*0x78a73c*/
    if ( result ) /*0x78a740*/
    {
      v9 = &result[wcslen(String)]; /*0x78a75a*/
      if ( *v9 ) /*0x78a760*/
      {
        do /*0x78a77d*/
        {
          if ( wcsncmp(v9, asc_82083C, 1u) ) /*0x78a76e*/
            break; /*0x78a778*/
          ++v9; /*0x78a77a*/
        }
        while ( *v9 ); /*0x78a77d*/
        if ( *v9 ) /*0x78a782*/
        {
          v10 = String2; /*0x78a788*/
          do /*0x78a7b2*/
          {
            if ( !wcsncmp(v9, asc_82083C, 1u) ) /*0x78a794*/
              break; /*0x78a79e*/
            if ( v5 > 10 ) /*0x78a7a3*/
              break; /*0x78a7a3*/
            v11 = *v9++; /*0x78a7a5*/
            *v10 = v11; /*0x78a7ab*/
            ++v5; /*0x78a7ae*/
            ++v10; /*0x78a7af*/
          }
          while ( *v9 ); /*0x78a7b2*/
        }
      }
      v12 = 0; /*0x78a7b8*/
      for ( String2[v5] = 0; *v9; ++v9 ) /*0x78a7bf*/
      {
        if ( wcsncmp(v9, asc_82083C, 1u) ) /*0x78a7cc*/
          break; /*0x78a7d6*/
      }
      if ( v5 <= 10 ) /*0x78a7e3*/
      {
        if ( v5 ) /*0x78a7f1*/
        {
          if ( dword_A8B538[0] && dword_A8DA84 > 0 ) /*0x78a80c*/
          {
            while ( _wcsicmp((const wchar_t *)dword_A8DA78[v12], String2) ) /*0x78a827*/
            {
              if ( ++v12 >= dword_A8DA84 ) /*0x78a831*/
                goto LABEL_23; /*0x78a831*/
            }
            Type = BuildingAnim::GetType(); /*0x78a890*/
            LOWORD(v14) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x78a8a5*/
            v16 = v14; /*0x78a8aa*/
            v15 = GetStringCSF(g_Str_TXT_OBSERVER_CANT_PAGE, 0, g_Str_File_wonline_cpp, 11978); /*0x78a8bf*/
            MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, v15, Type, 22, v16, 0); /*0x78a8ce*/
            v2 = 2; /*0x78a8d3*/
          }
          else
          {
LABEL_23:
            if ( wcslen(v9) ) /*0x78a834*/
            {
              strcpy(v20, ToWideStringChar((char *)String2)); /*0x78a868*/
              (*(void (__stdcall **)(LPVOID, char *, const wchar_t *))(*(_DWORD *)ppv + 248))(ppv, v19, v9); /*0x78a87a*/
              v8 = v17; /*0x78a880*/
            }
            v2 = 1; /*0x78a884*/
          }
        }
        else
        {
          v2 = 1; /*0x78a7f3*/
        }
      }
      else
      {
        v2 = 1; /*0x78a7e5*/
      }
      __3_YAXPAX_Z(v8); /*0x78a8d9*/
      return (wchar_t *)v2; /*0x78a8d9*/
    }
  }
  return result; /*0x78a723*/
}



// ==== 0x0078A8F0  ObjectClass::HandleReplyWOL  this=ObjectClass  sig=csp ====
wchar_t *__thiscall HandleReplyWOL(ObjectClass *this)
{
  int v2; // esi
  wchar_t *StringCSF; // eax
  wchar_t *v4; // eax
  size_t v5; // eax
  size_t v6; // eax
  size_t v7; // esi
  wchar_t *result; // eax
  wchar_t *v9; // ebp
  size_t v10; // eax
  int v11; // eax
  const wchar_t *i; // ebx
  int v13; // edi
  const wchar_t **v14; // esi
  char *v15; // eax
  wchar_t *v16; // eax
  HWND Current; // eax
  HWND v18; // esi
  int v19; // esi
  int v20; // eax
  int Type; // esi
  int v22; // eax
  wchar_t *v23; // eax
  int v24; // [esp-Ch] [ebp-384h]
  wchar_t String[128]; // [esp+Ch] [ebp-36Ch] BYREF
  char v26[36]; // [esp+10Ch] [ebp-26Ch] BYREF
  char v27[72]; // [esp+130h] [ebp-248h] BYREF
  wchar_t Destination[128]; // [esp+178h] [ebp-200h] BYREF
  wchar_t v29[128]; // [esp+278h] [ebp-100h] BYREF

  v2 = 0; /*0x78a90c*/
  StringCSF = GetStringCSF(g_Str_TXT_REPLY_COMMAND, 0, g_Str_File_wonline_cpp, 11998); /*0x78a90e*/
  wcscpy(String, StringCSF); /*0x78a919*/
  v4 = GetStringCSF(g_Str_TXT_REPLY_COMMAND_SHORT, 0, g_Str_File_wonline_cpp, 11999); /*0x78a932*/
  wcscpy(Destination, v4); /*0x78a940*/
  v5 = wcslen(String); /*0x78a94a*/
  if ( _wcsnicmp((const wchar_t *)this, String, v5) ) /*0x78a956*/
  {
    v6 = wcslen(Destination); /*0x78a96a*/
    if ( wcsncmp((const wchar_t *)this, Destination, v6) ) /*0x78a979*/
      return (wchar_t *)v2; /*0x78a983*/
  }
  v7 = wcslen((const wchar_t *)this) + 1; /*0x78a991*/
  result = (wchar_t *)__2_YAPAXI_Z(2 * v7); /*0x78a996*/
  if ( result ) /*0x78a9a0*/
  {
    result = wcsncpy(result, (const wchar_t *)this, v7); /*0x78a9af*/
    v9 = result; /*0x78a9b4*/
    if ( result ) /*0x78a9bb*/
    {
      v10 = wcslen(String); /*0x78a9cd*/
      if ( !wcsncmp((const wchar_t *)this, String, v10) ) /*0x78a9d9*/
        v11 = wcslen(String); /*0x78a9ea*/
      else
        v11 = wcslen(Destination); /*0x78a9f4*/
      for ( i = &v9[v11]; *i; ++i ) /*0x78aa00*/
      {
        if ( wcsncmp(i, asc_82083C, 1u) ) /*0x78aa0e*/
          break; /*0x78aa18*/
      }
      if ( dword_A8B538[0] && (v13 = 0, dword_A8DA84 > 0) ) /*0x78aa34*/
      {
        while ( 1 ) /*0x78aa41*/
        {
          v14 = (const wchar_t **)&dword_A8DA78[v13]; /*0x78aa41*/
          v15 = CharToWideString(byte_B77E30); /*0x78aa44*/
          if ( !_wcsicmp(*v14, (const wchar_t *)v15) ) /*0x78aa4d*/
            break; /*0x78aa4d*/
          if ( ++v13 >= dword_A8DA84 ) /*0x78aa65*/
            goto LABEL_15; /*0x78aa65*/
        }
        Type = BuildingAnim::GetType(); /*0x78ab93*/
        LOWORD(v22) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x78aba3*/
        v24 = v22; /*0x78aba8*/
        v23 = GetStringCSF(g_Str_TXT_OBSERVER_CANT_PAGE, 0, g_Str_File_wonline_cpp, 12074); /*0x78abbd*/
        MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, v23, Type, 22, v24, 0); /*0x78abcc*/
      }
      else
      {
LABEL_15:
        if ( strlen(byte_B77E30) ) /*0x78aa6c*/
        {
          if ( wcslen(i) ) /*0x78aa79*/
          {
            strcpy(v27, byte_B77E30); /*0x78aaad*/
            (*(void (__stdcall **)(LPVOID, char *, const wchar_t *))(*(_DWORD *)ppv + 248))(ppv, v26, i); /*0x78aabf*/
          }
          v2 = 1; /*0x78aac5*/
          goto LABEL_28; /*0x78aaca*/
        }
        v16 = GetStringCSF(aTxtNoOneWhomTo, 0, g_Str_File_wonline_cpp, 12050); /*0x78aae0*/
        wcscpy(v29, v16); /*0x78aaee*/
        Current = (HWND)Dialog::GetCurrent(); /*0x78aaf6*/
        v18 = Current; /*0x78aafb*/
        if ( Current ) /*0x78aaff*/
        {
          if ( GetDlgItem(Current, 1343) ) /*0x78ab0d*/
            Dialog::ShowMessage(-1, (size_t)v29); /*0x78ab22*/
          if ( GetDlgItem(v18, 1461) ) /*0x78ab30*/
            Dialog::ShowStatusText(-1, (size_t)v29); /*0x78ab45*/
        }
        if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x78ab52*/
        {
          v19 = BuildingAnim::GetType(); /*0x78ab66*/
          LOWORD(v20) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x78ab76*/
          MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, v29, v19, 22, v20, 0); /*0x78ab86*/
        }
      }
      v2 = 2; /*0x78abd1*/
LABEL_28:
      __3_YAXPAX_Z(v9); /*0x78abd6*/
      return (wchar_t *)v2; /*0x78abe0*/
    }
  }
  return result; /*0x78a9a2*/
}



// ==== 0x0078ABF0  ChatMessageWOL  this=-  sig=csp ====
__int16 __fastcall ChatMessageWOL(char a1, wchar_t *a2)
{
  byte_B77E40 = a1; /*0x78abf0*/
  return WideString::Reassign((WideString *)&unk_B76230, a2); /*0x78ac01*/
}



// ==== 0x0078AC10  WOLobby::DlgProc  this=WOLobby  sig=csp ====
int __stdcall WOLobby::DlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  LRESULT v5; // eax
  LRESULT v6; // eax
  HWND v7; // esi
  int v8; // esi
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  HWND v11; // edi
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  int v14; // ebx
  size_t v15; // esi
  wchar_t *v16; // edi
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // ebp
  const wchar_t *v20; // esi
  int *p_abstractFlags; // edi
  wchar_t v22; // ax
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  size_t v25; // esi
  wchar_t *v26; // edi
  wchar_t *v27; // eax
  wchar_t *v28; // eax
  wchar_t *v29; // eax
  wchar_t *v30; // edi
  size_t v31; // eax
  int v32; // eax
  const wchar_t *i; // esi
  char *v34; // eax
  wchar_t *v35; // eax
  wchar_t *v36; // esi
  wchar_t *v37; // eax
  size_t v38; // eax
  bool v39; // zf
  wchar_t *v40; // eax
  wchar_t *v41; // eax
  wchar_t *v42; // esi
  wchar_t *v43; // eax
  size_t v44; // eax
  wc... [54851 chars total]



// ==== 0x0078D120  OnlineLobbyDlgProcWOL  this=-  sig=csp ====
int __stdcall WOL_OnlineLobby_DlgProc(HWND hDlg, unsigned int a2, int a3, HWND hWnd)
{
  int result; // eax
  HWND v5; // eax
  BOOL v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  BOOL v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // esi
  HWND v16; // eax
  HWND v17; // eax
  int v18; // esi
  char *v19; // eax
  int v20; // esi
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  wchar_t *String; // eax
  HWND v25; // esi
  int v26; // esi
  wchar_t *v27; // eax
  wchar_t *v28; // eax
  HWND v29; // eax
  HWND v30; // eax
  int v31; // ebx
  signed int v32; // eax
  HWND v33; // eax
  HWND v34; // eax
  HWND v35; // eax
  HWND DlgItem; // eax
  BOOL v37; // [esp-4h] [ebp-10Ch]
  BOOL v38; // [esp-4h] [ebp-10Ch]
  void *v39; // [esp+10h] [ebp-F8h] BYREF
  void *v40; // [esp+14h] [ebp-F4h] BYREF
  char lParam[9]; // [esp+18h] [ebp-F0h] BYREF
  char v42; // [esp+21h] [ebp-E7h]
  int v43; // [esp+28h] [ebp-E0h]
  LPARAM v44[27]; // [esp+30h] [ebp-D8h] BYREF
  char v45[108]; // [esp+9Ch] [ebp-6Ch] BYREF

  result = BaseDialogProc(hDlg, a2, a3, (unsigned int)hWnd); /*0x78d14c*/
  if ( result ) /*0x78d153*/
    return result; /*0x78d153*/
  if ( a2 > 0x497 ) /*0x78d15f*/
  {
    if ( a2 == 1242 ) /*0x78d92d*/
    {
      DlgItem = GetDlgItem(hDlg, 1474); /*0x78da0d*/
      PostMessageA(DlgItem, 0xF5u, 0, 0); /*0x78da14*/
      return 0; /*0x78da14*/
    }
    if ( a2 != 1243 ) /*0x78d934*/
      return 0; /*0x78d934*/
    NavigateDialogTab(hWnd, a3 != 0); /*0x78d941*/
    if ( hWnd != GetDlgItem(hDlg, 1473) ) /*0x78d956*/
      return 0; /*0x78d956*/
    if ( ppv ) /*0x78d963*/
    {
      SendMessageA(hWnd, 0x4B5u, 0xAu, (LPARAM)lParam); /*0x78d972*/
      v42 = 0; /*0x78d986*/
      memset(v45, 0, sizeof(v45)); /*0x78d98b*/
      strcpy(&v45[36], lParam); /*0x78d9b1*/
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v45); /*0x78d9c3*/
    }
    v35 = GetDlgItem(hDlg, 1480); /*0x78d9cc*/
    if ( v35 ) /*0x78d9d0*/
      SendMessageA(v35, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x78d9df*/
    dword_B77E8C = 1344; /*0x78d9e8*/
    return 0; /*0x78d9fb*/
  }
  switch ( a2 ) /*0x78d165*/
  {
    case 0x497u: /*0x78d165*/
      SendDlgItemMessageA(hDlg, 1473, 0xC5u, 9u, 0); /*0x78d864*/
      v29 = GetDlgItem(hDlg, 1473); /*0x78d876*/
      SendMessageA(v29, 0x4D1u, 1u, 0); /*0x78d888*/
      v30 = GetDlgItem(hDlg, 1473); /*0x78d890*/
      SendMessageA(v30, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x78d89f*/
      v31 = dword_B76480; /*0x78d8a6*/
      if ( dword_B76478 != -1 ) /*0x78d8af*/
      {
        v32 = Timer::GetTicks() - dword_B76478; /*0x78d8bb*/
        if ( v32 >= v31 ) /*0x78d8c3*/
          return 0; /*0x78d8c3*/
        v31 -= v32; /*0x78d8c9*/
      }
      if ( v31 > 0 ) /*0x78d8cd*/
      {
        v33 = GetDlgItem(hDlg, 1473); /*0x78d8d9*/
        SendMessageA(v33, 0x4B4u, 0, (LPARAM)byte_B77E30); /*0x78d8e8*/
        v34 = GetDlgItem(hDlg, 1344); /*0x78d8f0*/
        SetFocus(v34); /*0x78d8f3*/
        dword_B76478 = Timer::GetTicks(); /*0x78d902*/
        dword_B7647C = v43; /*0x78d90f*/
        dword_B76480 = 0; /*0x78d915*/
        return 0; /*0x78d924*/
      }
      return 0; /*0x78d8cd*/
    case 0xFu: /*0x78d165*/
      Dialog::DrawBackground(hDlg); /*0x78d831*/
      Dialog::StopBink(hDlg); /*0x78d838*/
      ValidateRect(hDlg, 0); /*0x78d840*/
      return 0; /*0x78d852*/
    case 0x2Bu: /*0x78d165*/
      Dialog::Resize((char *)hWnd); /*0x78d818*/
      return 1; /*0x78d82c*/
  }
  if ( a2 != 273 ) /*0x78d183*/
    return 0; /*0x78d183*/
  if ( (unsigned __int16)a3 > 0x5C2u ) /*0x78d195*/
  {
    if ( (unsigned __int16)a3 == 1475 ) /*0x78d62e*/
    {
      if ( !ppv ) /*0x78d773*/
        return 0; /*0x78d773*/
      memset(v44, 0, 0x40u); /*0x78d784*/
      SendDlgItemMessageA(hDlg, 1473, 0x4B5u, 0x3Cu, (LPARAM)v44); /*0x78d798*/
      BYTE1(v44[2]) = 0; /*0x78d7a7*/
      strcpy(&v45[36], (const char *)v44); /*0x78d7c2*/
      if ( strlen(&v45[36]) ) /*0x78d7d4*/
      {
        (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v45); /*0x78d7ee*/
        return 0; /*0x78d7fd*/
      }
      String = GetStringCSF((wchar_t *)g_Str_TXT_NAME_ERROR, 0, g_Str_File_wonline_cpp, 14080); /*0x78d811*/
    }
    else
    {
      if ( (unsigned __int16)a3 != 1543 || !ppv ) /*0x78d644*/
        return 0; /*0x78d644*/
      if ( dword_B77DE4 ) /*0x78d651*/
      {
        unknown_libname_74(&v39); /*0x78d687*/
        v25 = GetDlgItem(hDlg, 1344); /*0x78d698*/
        GetEditControlText(v25, &v39); /*0x78d6a0*/
        SendMessageA(v25, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x78d6b2*/
        SetFocus(v25); /*0x78d6b9*/
        strcpy(&v45[36], a0); /*0x78d6df*/
        if ( WideString::Length((const wchar_t **)&v39) ) /*0x78d6ec*/
        {
          v26 = *(_DWORD *)ppv; /*0x78d6fb*/
          v27 = WideString::GetOrEmpty((wchar_t **)&v39); /*0x78d701*/
          (*(void (__stdcall **)(LPVOID, char *, wchar_t *))(v26 + 248))(ppv, v45, v27); /*0x78d715*/
        }
        else
        {
          v28 = GetStringCSF(g_Str_TXT_ENTER_MESSAGE, 0, g_Str_File_wonline_cpp, 14195); /*0x78d744*/
          Dialog::ShowStatusText(-1, (size_t)v28); /*0x78d74c*/
        }
        DeleteAndZero::Alt(&v39); /*0x78d71f*/
        return 0; /*0x78d730*/
      }
      String = GetStringCSF(aTxtNosquad, 0, g_Str_File_wonline_cpp, 14176); /*0x78d664*/
    }
    Dialog::ShowStatusText(-1, (size_t)String); /*0x78d66c*/
    return 0; /*0x78d680*/
  }
  if ( (unsigned __int16)a3 == 1474 ) /*0x78d19b*/
  {
    if ( dword_B77E8C == 1473 ) /*0x78d3aa*/
    {
      if ( ppv ) /*0x78d3b7*/
      {
        v13 = GetDlgItem(hDlg, 1473); /*0x78d3bf*/
        if ( v13 ) /*0x78d3c3*/
        {
          SendMessageA(v13, 0x4B5u, 0xAu, (LPARAM)lParam); /*0x78d3d2*/
          v42 = 0; /*0x78d3e6*/
          memset(v45, 0, sizeof(v45)); /*0x78d3eb*/
          strcpy(&v45[36], lParam); /*0x78d411*/
          (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v45); /*0x78d423*/
        }
      }
      v14 = GetDlgItem(hDlg, 1480); /*0x78d42c*/
      if ( v14 ) /*0x78d430*/
        SendMessageA(v14, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x78d43f*/
    }
    dword_B77E8C = 1474; /*0x78d44b*/
    v15 = GetDlgItem(hDlg, 1344); /*0x78d457*/
    ReadChatMessage((wchar_t **)&v40, v15); /*0x78d45f*/
    SendMessageA(v15, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x78d471*/
    v16 = GetDlgItem(hDlg, 1474); /*0x78d47f*/
    EnableWindow(v16, 0); /*0x78d482*/
    SetFocus(v15); /*0x78d489*/
    if ( !ppv ) /*0x78d496*/
    {
      DeleteAndZero::Alt(&v40); /*0x78d49c*/
      return 0; /*0x78d4ad*/
    }
    unknown_libname_73(&v39); /*0x78d4b4*/
    v17 = GetDlgItem(hDlg, 1473); /*0x78d4c3*/
    GetDialogText(v17, &v39); /*0x78d4c9*/
    String::CopyTruncated(9u); /*0x78d4d4*/
    strcpy((char *)&v44[9], String::GetOrEmpty((char **)&v39)); /*0x78d4fc*/
    if ( WideString::Length((const wchar_t **)&v40) && strlen((const char *)&v44[9]) ) /*0x78d51a*/
    {
      if ( !dword_A8B538 || (v18 = 0, dword_A8DA84 <= 0) ) /*0x78d53c*/
      {
LABEL_44:
        v20 = *(_DWORD *)ppv; /*0x78d568*/
        v21 = WideString::GetOrEmpty((wchar_t **)&v40); /*0x78d573*/
        (*(void (__stdcall **)(LPVOID, LPARAM *, wchar_t *))(v20 + 248))(ppv, v44, v21); /*0x78d585*/
        v22 = WideString::GetOrEmpty((wchar_t **)&v40); /*0x78d58f*/
        Dialog::ShowStatusText((LPARAM)Math::InitDegToRad, (size_t)g_Str_Fmt_Hs_S_Bracket, dword_B73E40, v22); /*0x78d5a7*/
LABEL_50:
        DeleteAndZero(&v39); /*0x78d608*/
        DeleteAndZero::Alt(&v40); /*0x78d615*/
        return 0; /*0x78d626*/
      }
      while ( 1 ) /*0x78d54c*/
      {
        v19 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * v18)); /*0x78d54c*/
        if ( !_strcmpi(v19, &v44[9]) ) /*0x78d552*/
          break; /*0x78d552*/
        if ( ++v18 >= dword_A8DA84 ) /*0x78d566*/
          goto LABEL_44; /*0x78d566*/
      }
      v23 = GetStringCSF(g_Str_TXT_OBSERVER_CANT_PAGE, 0, g_Str_File_wonline_cpp, 14150); /*0x78d5c2*/
    }
    else if ( strlen((const char *)&v44[9]) ) /*0x78d5c8*/
    {
      v23 = GetStringCSF(g_Str_TXT_ENTER_MESSAGE, 0, g_Str_File_wonline_cpp, 14164); /*0x78d5f8*/
    }
    else
    {
      v23 = GetStringCSF((wchar_t *)g_Str_TXT_NAME_ERROR, 0, g_Str_File_wonline_cpp, 14162); /*0x78d5e5*/
    }
    Dialog::ShowStatusText(-1, (size_t)v23); /*0x78d600*/
    goto LABEL_50; /*0x78d600*/
  }
  if ( (unsigned __int16)a3 == 2 ) /*0x78d1a4*/
  {
    CloseDialog(hDlg, 2); /*0x78d386*/
    return 0; /*0x78d397*/
  }
  if ( (unsigned __int16)a3 != 1344 ) /*0x78d1af*/
  {
    if ( (unsigned __int16)a3 == 1473 ) /*0x78d1ba*/
    {
      unknown_libname_73(&v40); /*0x78d1c4*/
      GetDialogText(hWnd, &v40); /*0x78d1cf*/
      unknown_libname_74(&v39); /*0x78d1d8*/
      v5 = GetDlgItem(hDlg, 1344); /*0x78d1ed*/
      GetEditControlText(v5, &v39); /*0x78d1f3*/
      v6 = String::Length((const char **)&v40) && WideString::Length((const wchar_t **)&v39); /*0x78d212*/
      v37 = v6; /*0x78d21b*/
      v7 = GetDlgItem(hDlg, 1474); /*0x78d222*/
      EnableWindow(v7, v37); /*0x78d225*/
      dword_B77E8C = 1473; /*0x78d231*/
      v8 = GetDlgItem(hDlg, 1480); /*0x78d23b*/
      if ( v8 ) /*0x78d23f*/
        SendMessageA(v8, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x78d24e*/
      DeleteAndZero::Alt(&v39); /*0x78d258*/
      DeleteAndZero(&v40); /*0x78d261*/
      return 0; /*0x78d272*/
    }
    return 0; /*0x78da1a*/
  }
  ReadChatMessage((wchar_t **)&v39, hWnd); /*0x78d27b*/
  unknown_libname_73(&v40); /*0x78d284*/
  v9 = GetDlgItem(hDlg, 1473); /*0x78d299*/
  GetDialogText(v9, &v40); /*0x78d29f*/
  v10 = WideString::Length((const wchar_t **)&v39) && String::Length((const char **)&v40); /*0x78d2be*/
  v38 = v10; /*0x78d2c7*/
  v11 = GetDlgItem(hDlg, 1474); /*0x78d2ce*/
  EnableWindow(v11, v38); /*0x78d2d1*/
  if ( dword_B77E8C == 1473 ) /*0x78d2e1*/
  {
    if ( ppv ) /*0x78d2ea*/
    {
      memset(v44, 0, sizeof(v44)); /*0x78d2f7*/
      strcpy((char *)&v44[9], String::GetOrEmpty((char **)&v40)); /*0x78d320*/
      (*(void (__stdcall **)(LPVOID, LPARAM *))(*(_DWORD *)ppv + 96))(ppv, v44); /*0x78d332*/
    }
    v12 = GetDlgItem(hDlg, 1480); /*0x78d33b*/
    if ( v12 ) /*0x78d33f*/
      SendMessageA(v12, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x78d34e*/
  }
  dword_B77E8C = 1344; /*0x78d358*/
  DeleteAndZero(&v40); /*0x78d362*/
  DeleteAndZero::Alt(&v39); /*0x78d36b*/
  return 0; /*0x78d266*/
}



// ==== 0x0078DA30  sub_78DA30  this=-  sig=csp ====
int __stdcall sub_78DA30(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  wchar_t *v5; // eax

  if ( a2 == 272 ) /*0x78da46*/
  {
    if ( a4 ) /*0x78da4a*/
      SetWindowLongA(hWnd, 8, *(_DWORD *)(a4 + 4)); /*0x78da53*/
  }
  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x78da63*/
  if ( !result ) /*0x78da6a*/
  {
    if ( a2 > 0x110 ) /*0x78da76*/
    {
      switch ( a2 ) /*0x78daca*/
      {
        case 0x111u: /*0x78daca*/
          if ( (unsigned __int16)a3 != 2 ) /*0x78db34*/
            return 0; /*0x78db3c*/
          (*(void (__stdcall **)(LPVOID))(*(_DWORD *)dword_AC1174 + 16))(dword_AC1174); /*0x78db47*/
          break;
        case 0x5F4u: /*0x78daca*/
          CloseDialog(hWnd, 1); /*0x78db1a*/
          return 1; /*0x78db28*/
        case 0x5F5u: /*0x78daca*/
          v5 = (wchar_t *)GetStringCSF(aTxtDownloadFai, (int)g_Str_File_wonline_cpp, 14681); /*0x78daf8*/
          ShowDialogConfirm(v5, 0, (int)GameLoop::Thunk, 0); /*0x78db01*/
          (*(void (__stdcall **)(LPVOID))(*(_DWORD *)dword_AC1174 + 16))(dword_AC1174); /*0x78db0e*/
          break;
        default:
          return 0; /*0x78dadd*/
      }
      CloseDialog(hWnd, 2); /*0x78db51*/
    }
    else if ( a2 != 272 ) /*0x78da78*/
    {
      if ( a2 == 15 ) /*0x78da81*/
      {
        Dialog::DrawBackground(hWnd); /*0x78daa6*/
        Dialog::StopBink(hWnd); /*0x78daad*/
        ValidateRect(hWnd, 0); /*0x78dab5*/
        return 0; /*0x78dac1*/
      }
      if ( a2 != 20 ) /*0x78da86*/
      {
        if ( a2 == 43 ) /*0x78da8f*/
        {
          Dialog::Resize(a4); /*0x78da93*/
          return 1; /*0x78daa1*/
        }
        return 0; /*0x78da8f*/
      }
    }
    return 1; /*0x78db56*/
  }
  return result; /*0x78da98*/
}



// ==== 0x0078DB70  WOLLogin::DlgProc  this=WOLLogin  sig=csp ====
int __stdcall WOLLogin_DlgProc(HWND hWnd, HWND a2, int a3, HWND a4)
{
  HWND v4; // ebp
  int result; // eax
  LONG WindowLongA; // edi
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND DlgItem; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  WPARAM v14; // eax
  HWND v15; // eax
  BOOL v16; // [esp-4h] [ebp-14h]
  HWND v17; // [esp+18h] [ebp+8h]

  v4 = a4; /*0x78db76*/
  if ( a2 == (HWND)272 && a4 ) /*0x78db8a*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x78db93*/
  result = BaseDialogProc(hWnd, (unsigned int)a2, a3, (unsigned int)v4); /*0x78dba3*/
  if ( !result ) /*0x78dbaa*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x78dbbf*/
    if ( (unsigned int)a2 > 0x111 ) /*0x78dbc1*/
    {
      if ( a2 == (HWND)1175 ) /*0x78de6d*/
      {
        DlgItem = GetDlgItem(hWnd, 1836); /*0x78dea6*/
        SendMessageA(DlgItem, 0x4D1u, 1u, 0); /*0x78deb8*/
        v11 = GetDlgItem(hWnd, 1836); /*0x78dec0*/
        SendMessageA(v11, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x78decf*/
        SendDlgItemMessageA(hWnd, 1836, 0xC5u, 8u, 0); /*0x78dee0*/
        v12 = GetDlgItem(hWnd, 1836); /*0x78deec*/
        SetFocus(v12); /*0x78deef*/
        CheckDlgButton(hWnd, 1577, *(_BYTE *)(WindowLongA + 16) != 0); /*0x78df06*/
        CheckDlgButton(hWnd, 1644, *(_BYTE *)(WindowLongA + 17) != 0); /*0x78df1d*/
        if ( (dword_A8B238 != 4 || dword_A8B244 != 3) && dword_B77DE4 < 1 ) /*0x78df3c*/
        {
          v13 = GetDlgItem(hWnd, 1644); /*0x78df46*/
          EnableWindow(v13, 0); /*0x78df49*/
        }
        v17 = GetDlgItem(hWnd, 1822); /*0x78df63*/
        LOBYTE(a3) = dword_A8EB84 >= 1024; /*0x78df6c*/
        EnableWindow(v17, dword_A8EB84 < 1024); /*0x78df77*/
        v14 = *(_BYTE *)(WindowLongA + 18) && !(_BYTE)a3; /*0x78df93*/
        SendMessageA(v17, 0xF1u, v14, 0); /*0x78dfa2*/
        v15 = GetDlgItem(hWnd, 1823); /*0x78dfaa*/
        SendMessageA(v15, 0xF1u, *(_BYTE *)(WindowLongA + 19) != 0, 0); /*0x78dfbf*/
      }
      else if ( a2 == (HWND)1242 ) /*0x78de72*/
      {
        v9 = GetDlgItem(hWnd, 1); /*0x78de84*/
        PostMessageA(v9, 0xF5u, 0, 0); /*0x78de8b*/
        return 0; /*0x78de97*/
      }
      return 0; /*0x78de72*/
    }
    if ( a2 != (HWND)273 ) /*0x78dbc7*/
    {
      if ( a2 == (HWND)15 ) /*0x78dbcc*/
      {
        Dialog::DrawBackground(hWnd); /*0x78dbf1*/
        Dialog::StopBink(hWnd); /*0x78dbf8*/
        ValidateRect(hWnd, 0); /*0x78dc00*/
        return 0; /*0x78dc0c*/
      }
      if ( a2 == (HWND)20 ) /*0x78dbd1*/
        return 1; /*0x78dbec*/
      if ( a2 == (HWND)43 ) /*0x78dbd6*/
      {
        Dialog::Resize((char *)v4); /*0x78dbde*/
        return 1; /*0x78dbde*/
      }
      return 0; /*0x78dbd6*/
    }
    if ( (unsigned __int16)a3 > 0x6DFu ) /*0x78dc1d*/
    {
      switch ( (__int16)a3 ) /*0x78dd8c*/
      {
        case 1760: /*0x78dd8c*/
          if ( IsDlgButtonChecked(hWnd, 1759) ) /*0x78ddeb*/
            CheckDlgButton(hWnd, 1759, 0); /*0x78ddfd*/
          else
            CheckDlgButton(hWnd, 1760, 1u); /*0x78de14*/
          result = 0; /*0x78de06*/
          break; /*0x78de09*/
        case 1822: /*0x78dd8c*/
          *(_BYTE *)(WindowLongA + 18) = SendMessageA(v4, 0xF0u, 0, 0) == 1; /*0x78de39*/
          result = 0; /*0x78de3f*/
          break; /*0x78de42*/
        case 1823: /*0x78dd8c*/
          *(_BYTE *)(WindowLongA + 19) = SendMessageA(v4, 0xF0u, 0, 0) == 1; /*0x78de5b*/
          result = 0; /*0x78de61*/
          break; /*0x78de64*/
        case 1836: /*0x78dd8c*/
          if ( !v4 ) /*0x78dd95*/
            return 0; /*0x78dd95*/
          unknown_libname_73(&a3); /*0x78dd9f*/
          GetDialogText(v4, (void **)&a3); /*0x78ddaa*/
          v16 = (unsigned __int8)ValidateStringContains(asc_84BA18) == 0; /*0x78ddc2*/
          v8 = GetDlgItem(hWnd, 1); /*0x78ddc6*/
          EnableWindow(v8, v16); /*0x78ddcd*/
          DeleteAndZero((void **)&a3); /*0x78ddd7*/
          result = 0; /*0x78dddf*/
          break; /*0x78dde2*/
        default:
          return 0;
      }
    }
    else
    {
      if ( (unsigned __int16)a3 != 1759 ) /*0x78dc23*/
      {
        if ( (unsigned __int16)a3 > 0x629u ) /*0x78dc2e*/
        {
          if ( (unsigned __int16)a3 != 1644 ) /*0x78dceb*/
            return 0; /*0x78dfc1*/
          if ( SendDlgItemMessageA(hWnd, 1644, 0xF0u, 0, 0) != 1 ) /*0x78dd07*/
          {
            *(_BYTE *)(WindowLongA + 17) = 0; /*0x78dd2b*/
            return 0; /*0x78dd35*/
          }
          SendDlgItemMessageA(hWnd, 1577, 0xF1u, 0, 0); /*0x78dd18*/
          *(_BYTE *)(WindowLongA + 17) = 1; /*0x78dd1a*/
        }
        else
        {
          if ( (unsigned __int16)a3 != 1577 ) /*0x78dc34*/
          {
            if ( (unsigned __int16)a3 == 1 ) /*0x78dc37*/
            {
              dword_B77DC4 = 7; /*0x78dc57*/
              unknown_libname_73(&a3); /*0x78dc61*/
              v7 = GetDlgItem(hWnd, 1836); /*0x78dc70*/
              GetDialogText(v7, (void **)&a3); /*0x78dc7a*/
              String::Reassign((char **)(WindowLongA + 12), (const char **)&a3); /*0x78dc87*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1); /*0x78dc93*/
              DeleteAndZero((void **)&a3); /*0x78dc9a*/
              return 0; /*0x78dca5*/
            }
            if ( (unsigned __int16)a3 == 2 ) /*0x78dc3a*/
            {
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 2); /*0x78dc47*/
              return 0; /*0x78dc50*/
            }
            return 0; /*0x78dc3a*/
          }
          if ( SendDlgItemMessageA(hWnd, 1577, 0xF0u, 0, 0) == 1 ) /*0x78dcc2*/
          {
            SendDlgItemMessageA(hWnd, 1644, 0xF1u, 0, 0); /*0x78dcd3*/
            *(_BYTE *)(WindowLongA + 17) = 0; /*0x78dcd5*/
            *(_BYTE *)(WindowLongA + 16) = 1; /*0x78dcd9*/
            return 0; /*0x78dce3*/
          }
        }
        *(_BYTE *)(WindowLongA + 16) = 0; /*0x78dd1e*/
        return 0; /*0x78dd28*/
      }
      if ( IsDlgButtonChecked(hWnd, 1760) ) /*0x78dd3e*/
        CheckDlgButton(hWnd, 1760, 0); /*0x78dd50*/
      else
        CheckDlgButton(hWnd, 1759, 1u); /*0x78dd67*/
      return 0; /*0x78dd59*/
    }
  }
  return result; /*0x78dbe3*/
}



// ==== 0x0078E030  WOLGameClass::ParseChatMessage  this=WOLGameClass  sig=csp ====
int __stdcall sub_78E030(HWND hWnd, unsigned int a2, int a3, HWND a4)
{
  HWND v4; // ebp
  int result; // eax
  char **WindowLongA; // ebx
  const char *v7; // edx
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND DlgItem; // eax
  HWND v12; // eax
  HWND v13; // eax
  BOOL v14; // [esp-4h] [ebp-14h]

  v4 = a4; /*0x78e032*/
  if ( a2 == 272 && a4 ) /*0x78e04a*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x78e053*/
  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)v4); /*0x78e063*/
  if ( !result ) /*0x78e06a*/
  {
    WindowLongA = (char **)GetWindowLongA(hWnd, 8); /*0x78e07f*/
    if ( a2 > 0x111 ) /*0x78e081*/
    {
      if ( a2 == 1175 ) /*0x78e19a*/
      {
        DlgItem = GetDlgItem(hWnd, 1836); /*0x78e1cf*/
        SendMessageA(DlgItem, 0x4D1u, 1u, 0); /*0x78e1e1*/
        v12 = GetDlgItem(hWnd, 1836); /*0x78e1e9*/
        SendMessageA(v12, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x78e1f8*/
        SendDlgItemMessageA(hWnd, 1836, 0xC5u, 8u, 0); /*0x78e209*/
        v13 = GetDlgItem(hWnd, 1836); /*0x78e215*/
        SetFocus(v13); /*0x78e218*/
      }
      else if ( a2 == 1242 ) /*0x78e19f*/
      {
        v10 = GetDlgItem(hWnd, 1); /*0x78e1ad*/
        PostMessageA(v10, 0xF5u, 0, 0); /*0x78e1b4*/
        return 0; /*0x78e1c0*/
      }
    }
    else
    {
      switch ( a2 ) /*0x78e087*/
      {
        case 0x111u: /*0x78e087*/
          if ( (unsigned __int16)a3 == 1 ) /*0x78e0d4*/
          {
            unknown_libname_73(&a3); /*0x78e14d*/
            v9 = GetDlgItem(hWnd, 1836); /*0x78e15c*/
            GetDialogText(v9, (void **)&a3); /*0x78e166*/
            String::Reassign(WindowLongA + 3, (const char **)&a3); /*0x78e173*/
            (*((void (__thiscall **)(char **, HWND, int))*WindowLongA + 1))(WindowLongA, hWnd, 1); /*0x78e17f*/
            DeleteAndZero((void **)&a3); /*0x78e186*/
            return 0; /*0x78e191*/
          }
          if ( (unsigned __int16)a3 == 2 ) /*0x78e0d7*/
          {
            (*((void (__thiscall **)(char **, HWND, int))*WindowLongA + 1))(WindowLongA, hWnd, 2); /*0x78e13d*/
            return 0; /*0x78e146*/
          }
          if ( (unsigned __int16)a3 == 1836 && v4 ) /*0x78e0e6*/
          {
            unknown_libname_73(&a3); /*0x78e0f0*/
            GetDialogText(v4, (void **)&a3); /*0x78e0fb*/
            v14 = !ValidateStringContains((const char **)&a3, v7, asc_84BA18); /*0x78e113*/
            v8 = GetDlgItem(hWnd, 1); /*0x78e117*/
            EnableWindow(v8, v14); /*0x78e11e*/
            DeleteAndZero((void **)&a3); /*0x78e128*/
            return 0; /*0x78e133*/
          }
          break;
        case 0xFu: /*0x78e087*/
          Dialog::DrawBackground(hWnd); /*0x78e0ac*/
          Dialog::StopBink(hWnd); /*0x78e0b3*/
          ValidateRect(hWnd, 0); /*0x78e0bb*/
          return 0; /*0x78e0c7*/
        case 0x2Bu: /*0x78e087*/
          Dialog::Resize((char *)v4); /*0x78e099*/
          return 1; /*0x78e0a7*/
      }
    }
    return 0; /*0x78e21e*/
  }
  return result; /*0x78e09e*/
}



// ==== 0x0078E230  CreateAccountDlgProcWOL  this=-  sig=csp ====
int __stdcall sub_78E230(HWND hWnd, UINT a2, WPARAM a3, HWND hCtl)
{
  HWND v5; // eax
  HWND v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  char *v11; // eax
  char *v12; // eax
  char *v13; // eax
  char *v14; // eax
  char *v15; // eax
  char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  char *v19; // eax
  char *v20; // eax
  char *v21; // eax
  char *v22; // eax
  char *v23; // eax
  char *v24; // eax
  char *v25; // eax
  char *v26; // eax
  char *v27; // eax
  char *v28; // eax
  char *v29; // eax
  char *v30; // eax
  HWND v31; // eax
  char *v32; // eax
  HWND v33; // eax
  char *v34; // eax
  HWND v35; // eax
  HWND DlgItem; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // edi
  wchar_t *String; // eax
  wchar_t *v42; // eax
  wchar_t *v43; // eax
  wchar_t *v44; // eax
  wchar_t *v45; // eax
  wchar_t *v46; // eax
  wchar_t *v47; // eax
  wchar_t *v48; // eax
  wchar_t *v49; // eax
  wchar_t *v50; // eax
  wchar_t *v51; // eax
  wchar_t *v52; // eax
  char *v53; // [esp-4h] [ebp-Ch]
  char *v54; // [esp-4h] [ebp-Ch]
  char *v55; // [esp-4h] [ebp-Ch]
  char *v56; // [esp-4h] [ebp-Ch]
  char *v57; // [esp-4h] [ebp-Ch]
  char *v58; // [esp-4h] [ebp-Ch]
  char *v59; // [esp-4h] [ebp-Ch]
  char *v60; // [esp-4h] [ebp-Ch]
  char *v61; // [esp-4h] [ebp-Ch]
  char *v62; // [esp-4h] [ebp-Ch]
  char *v63; // [esp-4h] [ebp-Ch]
  char *v64; // [esp-4h] [ebp-Ch]

  if ( a2 > 0x111 ) /*0x78e23b*/
  {
    if ( a2 == 1175 ) /*0x78e6fd*/
    {
      DlgItem = GetDlgItem(hWnd, 1574); /*0x78e735*/
      SendMessageA(DlgItem, 0x4D1u, 1u, 0); /*0x78e747*/
      v37 = GetDlgItem(hWnd, 1583); /*0x78e758*/
      SendMessageA(v37, 0xC5u, 2u, 0); /*0x78e75b*/
      v38 = GetDlgItem(hWnd, 1584); /*0x78e76c*/
      SendMessageA(v38, 0xC5u, 4u, 0); /*0x78e76f*/
      v39 = GetDlgItem(hWnd, 1583); /*0x78e777*/
      SetFocus(v39); /*0x78e77a*/
      v40 = GetDlgItem(hWnd, 1582); /*0x78e788*/
      ListBox::Clear(v40); /*0x78e78c*/
      String = GetStringCSF(g_Str_TXT_JANUARY, 0, g_Str_File_wonline_cpp, 15162); /*0x78e7a2*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)String); /*0x78e7b0*/
      v42 = GetStringCSF(g_Str_TXT_FEBRUARY, 0, g_Str_File_wonline_cpp, 15163); /*0x78e7c3*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v42); /*0x78e7d1*/
      v43 = GetStringCSF(g_Str_TXT_MARCH, 0, g_Str_File_wonline_cpp, 15164); /*0x78e7e4*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v43); /*0x78e7f2*/
      v44 = GetStringCSF(g_Str_TXT_APRIL, 0, g_Str_File_wonline_cpp, 15165); /*0x78e805*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v44); /*0x78e813*/
      v45 = GetStringCSF(g_Str_TXT_MAY, 0, g_Str_File_wonline_cpp, 15166); /*0x78e826*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v45); /*0x78e834*/
      v46 = GetStringCSF(g_Str_TXT_JUNE, 0, g_Str_File_wonline_cpp, 15167); /*0x78e847*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v46); /*0x78e855*/
      v47 = GetStringCSF(g_Str_TXT_JULY, 0, g_Str_File_wonline_cpp, 15168); /*0x78e868*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v47); /*0x78e876*/
      v48 = GetStringCSF(g_Str_TXT_AUGUST, 0, g_Str_File_wonline_cpp, 15169); /*0x78e889*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v48); /*0x78e897*/
      v49 = GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_wonline_cpp, 15170); /*0x78e8aa*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v49); /*0x78e8b8*/
      v50 = GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_wonline_cpp, 15171); /*0x78e8cb*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v50); /*0x78e8d9*/
      v51 = GetStringCSF(g_Str_TXT_NOVEMBER, 0, g_Str_File_wonline_cpp, 15172); /*0x78e8ec*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v51); /*0x78e8fa*/
      v52 = GetStringCSF(g_Str_TXT_DECEMBER, 0, g_Str_File_wonline_cpp, 15173); /*0x78e90d*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v52); /*0x78e91b*/
      SendDlgItemMessageA(hWnd, 1582, 0x14Eu, 0, 0); /*0x78e92c*/
      SendMessageA(hWnd, 0x4A9u, 0, 1); /*0x78e93c*/
      return 0; /*0x78e940*/
    }
    else
    {
      if ( a2 != 1243 ) /*0x78e702*/
        return 0; /*0x78e708*/
      NavigateDialogTab(hCtl, a3 != 0); /*0x78e718*/
      return 0; /*0x78e71e*/
    }
  }
  else
  {
    if ( a2 != 273 ) /*0x78e241*/
    {
      if ( a2 == 15 ) /*0x78e246*/
      {
        Dialog::DrawBackground(hWnd); /*0x78e26a*/
        Dialog::StopBink(hWnd); /*0x78e271*/
        ValidateRect(hWnd, 0); /*0x78e279*/
        return 0; /*0x78e283*/
      }
      if ( a2 == 43 ) /*0x78e24b*/
      {
        Dialog::Resize((char *)hCtl); /*0x78e255*/
        return 1; /*0x78e261*/
      }
      return 0; /*0x78e24b*/
    }
    if ( (unsigned __int16)a3 == 1 ) /*0x78e290*/
    {
      DeleteAndZero::Alt2((void **)&unk_B76E34); /*0x78e2d0*/
      v5 = GetDlgItem(hWnd, 1574); /*0x78e2e5*/
      if ( v5 ) /*0x78e2e9*/
        GetDialogText(v5, (void **)&unk_B76E34); /*0x78e2f2*/
      DeleteAndZero::Alt2((void **)&unk_B73B30); /*0x78e2fc*/
      v6 = GetDlgItem(hWnd, 1582); /*0x78e307*/
      if ( v6 /*0x78e346*/
        && (GetDialogText(v6, (void **)&unk_B73B30),
            v7 = (char *)GetStringCSF(g_Str_TXT_JANUARY, 0, g_Str_File_wonline_cpp, 15071),
            v53 = ToWideStringChar(v7),
            v8 = String::GetOrEmpty(&unk_B73B30),
            _strcmpi(v8, v53)) )
      {
        v9 = (char *)GetStringCSF(g_Str_TXT_FEBRUARY, 0, g_Str_File_wonline_cpp, 15073); /*0x78e367*/
        v54 = ToWideStringChar(v9); /*0x78e373*/
        v10 = String::GetOrEmpty(&unk_B73B30); /*0x78e379*/
        if ( _strcmpi(v10, v54) ) /*0x78e37f*/
        {
          v11 = (char *)GetStringCSF(g_Str_TXT_MARCH, 0, g_Str_File_wonline_cpp, 15075); /*0x78e3ab*/
          v55 = ToWideStringChar(v11); /*0x78e3b7*/
          v12 = String::GetOrEmpty(&unk_B73B30); /*0x78e3bd*/
          if ( _strcmpi(v12, v55) ) /*0x78e3c3*/
          {
            v13 = (char *)GetStringCSF(g_Str_TXT_APRIL, 0, g_Str_File_wonline_cpp, 15077); /*0x78e3ef*/
            v56 = ToWideStringChar(v13); /*0x78e3fb*/
            v14 = String::GetOrEmpty(&unk_B73B30); /*0x78e401*/
            if ( _strcmpi(v14, v56) ) /*0x78e407*/
            {
              v15 = (char *)GetStringCSF(g_Str_TXT_MAY, 0, g_Str_File_wonline_cpp, 15079); /*0x78e433*/
              v57 = ToWideStringChar(v15); /*0x78e43f*/
              v16 = String::GetOrEmpty(&unk_B73B30); /*0x78e445*/
              if ( _strcmpi(v16, v57) ) /*0x78e44b*/
              {
                v17 = (char *)GetStringCSF(g_Str_TXT_JUNE, 0, g_Str_File_wonline_cpp, 15081); /*0x78e477*/
                v58 = ToWideStringChar(v17); /*0x78e483*/
                v18 = String::GetOrEmpty(&unk_B73B30); /*0x78e489*/
                if ( _strcmpi(v18, v58) ) /*0x78e48f*/
                {
                  v19 = (char *)GetStringCSF(g_Str_TXT_JULY, 0, g_Str_File_wonline_cpp, 15083); /*0x78e4bb*/
                  v59 = ToWideStringChar(v19); /*0x78e4c7*/
                  v20 = String::GetOrEmpty(&unk_B73B30); /*0x78e4cd*/
                  if ( _strcmpi(v20, v59) ) /*0x78e4d3*/
                  {
                    v21 = (char *)GetStringCSF(g_Str_TXT_AUGUST, 0, g_Str_File_wonline_cpp, 15085); /*0x78e4ff*/
                    v60 = ToWideStringChar(v21); /*0x78e50b*/
                    v22 = String::GetOrEmpty(&unk_B73B30); /*0x78e511*/
                    if ( _strcmpi(v22, v60) ) /*0x78e517*/
                    {
                      v23 = (char *)GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_wonline_cpp, 15087); /*0x78e543*/
                      v61 = ToWideStringChar(v23); /*0x78e54f*/
                      v24 = String::GetOrEmpty(&unk_B73B30); /*0x78e555*/
                      if ( _strcmpi(v24, v61) ) /*0x78e55b*/
                      {
                        v25 = (char *)GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_wonline_cpp, 15089); /*0x78e587*/
                        v62 = ToWideStringChar(v25); /*0x78e593*/
                        v26 = String::GetOrEmpty(&unk_B73B30); /*0x78e599*/
                        if ( _strcmpi(v26, v62) ) /*0x78e59f*/
                        {
                          v27 = (char *)GetStringCSF(g_Str_TXT_NOVEMBER, 0, g_Str_File_wonline_cpp, 15091); /*0x78e5cb*/
                          v63 = ToWideStringChar(v27); /*0x78e5d7*/
                          v28 = String::GetOrEmpty(&unk_B73B30); /*0x78e5dd*/
                          if ( _strcmpi(v28, v63) ) /*0x78e5e3*/
                          {
                            v29 = (char *)GetStringCSF(g_Str_TXT_DECEMBER, 0, g_Str_File_wonline_cpp, 15093); /*0x78e60c*/
                            v64 = ToWideStringChar(v29); /*0x78e618*/
                            v30 = String::GetOrEmpty(&unk_B73B30); /*0x78e61e*/
                            if ( !_strcmpi(v30, v64) ) /*0x78e624*/
                              dword_B73A1C = 11; /*0x78e630*/
                          }
                          else
                          {
                            dword_B73A1C = 10; /*0x78e5ef*/
                          }
                        }
                        else
                        {
                          dword_B73A1C = 9; /*0x78e5ab*/
                        }
                      }
                      else
                      {
                        dword_B73A1C = 8; /*0x78e567*/
                      }
                    }
                    else
                    {
                      dword_B73A1C = 7; /*0x78e523*/
                    }
                  }
                  else
                  {
                    dword_B73A1C = 6; /*0x78e4df*/
                  }
                }
                else
                {
                  dword_B73A1C = 5; /*0x78e49b*/
                }
              }
              else
              {
                dword_B73A1C = 4; /*0x78e457*/
              }
            }
            else
            {
              dword_B73A1C = 3; /*0x78e413*/
            }
          }
          else
          {
            dword_B73A1C = 2; /*0x78e3cf*/
          }
        }
        else
        {
          dword_B73A1C = 1; /*0x78e38b*/
        }
      }
      else
      {
        dword_B73A1C = 0; /*0x78e63c*/
      }
      DeleteAndZero::Alt2((void **)&stru_B7622C); /*0x78e64b*/
      v31 = GetDlgItem(hWnd, 1583); /*0x78e656*/
      if ( v31 ) /*0x78e65a*/
      {
        GetDialogText(v31, (void **)&stru_B7622C); /*0x78e663*/
        v32 = String::GetOrEmpty(&stru_B7622C); /*0x78e66d*/
        dword_B73AB8 = atol(v32); /*0x78e67b*/
      }
      DeleteAndZero::Alt2((void **)&unk_B76908); /*0x78e685*/
      v33 = GetDlgItem(hWnd, 1584); /*0x78e690*/
      if ( v33 ) /*0x78e694*/
      {
        GetDialogText(v33, (void **)&unk_B76908); /*0x78e69d*/
        v34 = String::GetOrEmpty(&unk_B76908); /*0x78e6a7*/
        dword_B7782C = atol(v34); /*0x78e6b5*/
      }
      dword_B76228 = 0; /*0x78e6c0*/
      v35 = GetDlgItem(hWnd, 1585); /*0x78e6ca*/
      if ( v35 ) /*0x78e6ce*/
        dword_B76228 = SendMessageA(v35, 0xF0u, 0, 0); /*0x78e6e0*/
      CloseDialog(hWnd, 1); /*0x78e6ec*/
      return 0; /*0x78e6f2*/
    }
    else if ( (unsigned __int16)a3 == 2 ) /*0x78e293*/
    {
      CloseDialog(hWnd, 2); /*0x78e2bf*/
      return 0; /*0x78e2c5*/
    }
    else
    {
      if ( (unsigned __int16)a3 == 1398 ) /*0x78e29a*/
        OpenURLWOL(aHttpPrivacypol, 0); /*0x78e2aa*/
      return 0; /*0x78e29d*/
    }
  }
}



// ==== 0x0078E950  WOLobbySmallDlgProc  this=-  sig=csp ====
int __stdcall WOLobbySmallDlgProc(HWND hWnd, UINT a2, WPARAM a3, HWND hCtl)
{
  int v5; // ebx
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND DlgItem; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // eax
  HWND v18; // eax

  if ( a2 > 0x111 ) /*0x78e95c*/
  {
    if ( a2 == 1175 ) /*0x78ead5*/
    {
      DlgItem = GetDlgItem(hWnd, 1576); /*0x78eb17*/
      SendMessageA(DlgItem, 0x4D1u, 1u, 0); /*0x78eb29*/
      v12 = GetDlgItem(hWnd, 1836); /*0x78eb31*/
      SendMessageA(v12, 0x4D1u, 1u, 0); /*0x78eb3d*/
      v13 = GetDlgItem(hWnd, 1575); /*0x78eb45*/
      SendMessageA(v13, 0x4D1u, 1u, 0); /*0x78eb51*/
      v14 = GetDlgItem(hWnd, 1509); /*0x78eb59*/
      SendMessageA(v14, 0x4D1u, 1u, 0); /*0x78eb65*/
      v15 = GetDlgItem(hWnd, 1576); /*0x78eb76*/
      SendMessageA(v15, 0xC5u, 9u, 0); /*0x78eb79*/
      v16 = GetDlgItem(hWnd, 1836); /*0x78eb8a*/
      SendMessageA(v16, 0xC5u, 8u, 0); /*0x78eb8d*/
      v17 = GetDlgItem(hWnd, 1575); /*0x78eb9e*/
      SendMessageA(v17, 0xC5u, 8u, 0); /*0x78eba1*/
      v18 = GetDlgItem(hWnd, 1576); /*0x78eba9*/
      SetFocus(v18); /*0x78ebac*/
    }
    else if ( a2 == 1243 ) /*0x78eada*/
    {
      ++dword_B77E90; /*0x78eaed*/
      NavigateDialogTab(hCtl, a3 != 0); /*0x78eafa*/
      return 0; /*0x78eb04*/
    }
    return 0; /*0x78eada*/
  }
  if ( a2 != 273 ) /*0x78e962*/
  {
    if ( a2 == 15 ) /*0x78e967*/
    {
      Dialog::DrawBackground(hWnd); /*0x78e98c*/
      Dialog::StopBink(hWnd); /*0x78e993*/
      ValidateRect(hWnd, 0); /*0x78e99b*/
      return 0; /*0x78e9a6*/
    }
    if ( a2 == 43 ) /*0x78e96c*/
    {
      Dialog::Resize((char *)hCtl); /*0x78e976*/
      return 1; /*0x78e983*/
    }
    return 0; /*0x78ebb4*/
  }
  if ( (unsigned __int16)a3 != 1 ) /*0x78e9b3*/
  {
    if ( (unsigned __int16)a3 == 2 ) /*0x78e9b6*/
    {
      CloseDialog(hWnd, 2); /*0x78e9c5*/
      return 0; /*0x78e9cf*/
    }
    return 0; /*0x78e9b6*/
  }
  v5 = GameSetup::LookupDialogHash(hWnd); /*0x78e9e2*/
  DeleteAndZero::Alt2((void **)&unk_B77794); /*0x78e9e4*/
  v6 = GetDlgItem(hWnd, 1576); /*0x78e9f5*/
  if ( v6 ) /*0x78e9f9*/
    GetDialogText(v6, (void **)&unk_B77794); /*0x78ea02*/
  DeleteAndZero::Alt2((void **)&unk_B778F4); /*0x78ea0c*/
  v7 = GetDlgItem(hWnd, 1836); /*0x78ea17*/
  if ( v7 ) /*0x78ea1b*/
    GetDialogText(v7, (void **)&unk_B778F4); /*0x78ea24*/
  DeleteAndZero::Alt2((void **)&unk_B778FC); /*0x78ea2e*/
  v8 = GetDlgItem(hWnd, 1575); /*0x78ea39*/
  if ( v8 ) /*0x78ea3d*/
    GetDialogText(v8, (void **)&unk_B778FC); /*0x78ea46*/
  if ( v5 == 243 ) /*0x78ea51*/
  {
    DeleteAndZero::Alt2((void **)&stru_B765EC); /*0x78ea58*/
    v9 = GetDlgItem(hWnd, 1509); /*0x78ea63*/
    if ( v9 ) /*0x78ea67*/
    {
      GetDialogText(v9, (void **)&stru_B765EC); /*0x78ea70*/
      CloseDialog(hWnd, 1); /*0x78ea7c*/
      return 0; /*0x78ea86*/
    }
  }
  else if ( v5 == 244 ) /*0x78ea8f*/
  {
    unk_B76C20 = 0; /*0x78ea97*/
    v10 = GetDlgItem(hWnd, 1643); /*0x78eaa1*/
    if ( v10 ) /*0x78eaa5*/
      unk_B76C20 = SendMessageA(v10, 0xF0u, 0, 0); /*0x78eab7*/
  }
  CloseDialog(hWnd, 1); /*0x78eac3*/
  return 0; /*0x78e97b*/
}



// ==== 0x0078EBC0  DlgProcGameSetup  this=-  sig=csp ====
int __stdcall DlgProcGameSetup(HWND hWnd, unsigned int a2, int a3, HWND a4)
{
  int result; // eax
  HWND DlgItem; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  int v14; // esi
  DeleteAndZero v15; // [esp-4h] [ebp-14h]
  ObjectClass *v16; // [esp+0h] [ebp-10h]

  *(_DWORD *)v15.__pad_0 = a4; /*0x78ebd4*/
  result = BaseDialogProc(hWnd, a2, a3, v15); /*0x78ebda*/
  if ( !result ) /*0x78ebe3*/
  {
    if ( a2 > 0x111 ) /*0x78ebef*/
    {
      if ( a2 == 1175 ) /*0x78eee5*/
      {
        if ( stru_B7622C.? ) /*0x78ef16*/
          SendDlgItemMessageA(hWnd, 1525, 0xF1u, 1u, 0); /*0x78ef26*/
        if ( dword_B779F0 ) /*0x78ef2e*/
          SendDlgItemMessageA(hWnd, 1527, 0xF1u, 1u, 0); /*0x78ef3e*/
        if ( *(_DWORD *)g_WOL_BuddyList.__pad_C ) /*0x78ef46*/
          SendDlgItemMessageA(hWnd, 1526, 0xF1u, 1u, 0); /*0x78ef56*/
        if ( stru_B76900.? ) /*0x78ef5e*/
          SendDlgItemMessageA(hWnd, 1528, 0xF1u, 1u, 0); /*0x78ef6e*/
        if ( dword_B77784 ) /*0x78ef76*/
          SendDlgItemMessageA(hWnd, 1529, 0xF1u, 1u, 0); /*0x78ef86*/
        if ( dword_B779DC ) /*0x78ef8e*/
          SendDlgItemMessageA(hWnd, 1530, 0xF1u, 1u, 0); /*0x78ef9e*/
        if ( g_WOL_BuddyList.DynamicVector_field_0x10 ) /*0x78efa6*/
          SendDlgItemMessageA(hWnd, 1531, 0xF1u, 1u, 0); /*0x78efb6*/
        if ( LOBYTE(stru_B76AC4.fallRate) ) /*0x78efbe*/
          SendDlgItemMessageA(hWnd, 1908, 0xF1u, 1u, 0); /*0x78efce*/
        if ( g_WindowManager.__pad_14[20] ) /*0x78efd6*/
          SendDlgItemMessageA(hWnd, 1909, 0xF1u, 1u, 0); /*0x78efe6*/
      }
      else if ( a2 == 1261 ) /*0x78eeea*/
      {
        ShowWindow(hWnd, 0); /*0x78eef2*/
        Dialog::InitWindow(hWnd, 1); /*0x78eefb*/
        return 0; /*0x78ef06*/
      }
      return 0; /*0x78eeea*/
    }
    if ( a2 != 273 ) /*0x78ebf5*/
    {
      switch ( a2 ) /*0x78ebfa*/
      {
        case 2u: /*0x78ebfa*/
          byte_A8E9A0 = 1; /*0x78ec41*/
          return 0; /*0x78ec4b*/
        case 0xFu: /*0x78ebfa*/
          Dialog::DrawBackground((Dialog *)hWnd); /*0x78ec21*/
          Dialog::StopBink((Dialog *)hWnd); /*0x78ec28*/
          ValidateRect(hWnd, 0); /*0x78ec2f*/
          return 0; /*0x78ec3b*/
        case 0x2Bu: /*0x78ebfa*/
          Dialog::Resize((char *)a4); /*0x78ec0e*/
          return 1; /*0x78ec1c*/
      }
      return 0; /*0x78efe8*/
    }
    if ( (unsigned __int16)a3 > 0x5F8u ) /*0x78ec5a*/
    {
      if ( (unsigned __int16)a3 == 1594 ) /*0x78ee95*/
      {
        RenderGadgetClassAnimation(hWnd, 0); /*0x78ee9f*/
        Screen::Capture(1, 0, 0, a3); /*0x78eea8*/
        byte_A8E9A0 = 0; /*0x78eead*/
        DlgProcGameSetup_Setup(); /*0x78eeb3*/
        ShowAudioSettingsDialog(); /*0x78eebc*/
        ShowWindow(hWnd, 5); /*0x78eec4*/
        Dialog::InitWindow(hWnd, 0); /*0x78eecc*/
        DlgProcGameSetup_Setup_72B930(v16); /*0x78eed1*/
        return 0; /*0x78eedc*/
      }
      return 0; /*0x78ee95*/
    }
    if ( (unsigned __int16)a3 == 1528 ) /*0x78ec60*/
    {
      if ( HIWORD(a3) <= 1u ) /*0x78edfc*/
      {
        if ( SendMessageA(a4, 0xF0u, 0, 0) != 1 ) /*0x78ee21*/
        {
          Theme::QueueSong((int)&unk_A83D10, -3); /*0x78ee82*/
          return 0; /*0x78ee8d*/
        }
        if ( !Theme::IsPlaying((Theme *)&unk_A83D10) ) /*0x78ee28*/
          goto LABEL_37; /*0x78ee28*/
        v14 = dword_A83D14; /*0x78ee51*/
        if ( dword_A83D14 == -1 ) /*0x78ee5a*/
          v14 = dword_A83D18; /*0x78ee5c*/
        if ( v14 == StringList::Find((StringList *)&unk_A83D10, g_INI_Key_INTRO) ) /*0x78ee73*/
        {
LABEL_37:
          Theme::Stop((Theme *)&unk_A83D10, 0); /*0x78ee37*/
          Theme::QueueSong((int)&unk_A83D10, -2); /*0x78ee43*/
          return 0; /*0x78ee4e*/
        }
      }
      return 0; /*0x78ee73*/
    }
    if ( (unsigned __int16)a3 != 1 ) /*0x78ec67*/
    {
      if ( (unsigned __int16)a3 == 2 ) /*0x78ec6a*/
      {
        __3_YAXPAX_Z(dword_B77E98); /*0x78ec77*/
        dword_B77E98 = 0; /*0x78ec86*/
        CloseDialog(hWnd, 2); /*0x78ec8c*/
        return 0; /*0x78ec97*/
      }
      return 0; /*0x78ec6a*/
    }
    dword_B76474 = 0; /*0x78eca6*/
    DlgItem = GetDlgItem(hWnd, 1525); /*0x78ecac*/
    if ( DlgItem ) /*0x78ecb6*/
      dword_B76474 = SendMessageA(DlgItem, 0xF0u, 0, 0); /*0x78ecc2*/
    dword_B766B8 = 0; /*0x78eccd*/
    v6 = GetDlgItem(hWnd, 1527); /*0x78ecd3*/
    if ( v6 ) /*0x78ecd7*/
      dword_B766B8 = SendMessageA(v6, 0xF0u, 0, 0); /*0x78ece3*/
    stru_B76900.customSound_controller[2] = 0; /*0x78ecee*/
    v7 = GetDlgItem(hWnd, 1526); /*0x78ecf4*/
    if ( v7 ) /*0x78ecf8*/
      stru_B76900.customSound_controller[2] = SendMessageA(v7, 0xF0u, 0, 0); /*0x78ed04*/
    stru_B76900.? = 0; /*0x78ed0f*/
    v8 = GetDlgItem(hWnd, 1528); /*0x78ed15*/
    if ( v8 ) /*0x78ed19*/
      stru_B76900.? = SendMessageA(v8, 0xF0u, 0, 0); /*0x78ed25*/
    v9 = GetDlgItem(hWnd, 1529); /*0x78ed30*/
    if ( v9 ) /*0x78ed34*/
      g_WebBrowserConfig.? = (void *)SendMessageA(v9, 0xF0u, 0, 0); /*0x78ed40*/
    dword_B768F8 = 0; /*0x78ed4b*/
    v10 = GetDlgItem(hWnd, 1530); /*0x78ed51*/
    if ( v10 ) /*0x78ed55*/
      dword_B768F8 = SendMessageA(v10, 0xF0u, 0, 0); /*0x78ed61*/
    dword_B76AC0 = 0; /*0x78ed6c*/
    v11 = GetDlgItem(hWnd, 1531); /*0x78ed72*/
    if ( v11 ) /*0x78ed76*/
      dword_B76AC0 = SendMessageA(v11, 0xF0u, 0, 0); /*0x78ed82*/
    dword_B73680 = 0; /*0x78ed8d*/
    v12 = GetDlgItem(hWnd, 1908); /*0x78ed93*/
    if ( v12 ) /*0x78ed97*/
      dword_B73680 = SendMessageA(v12, 0xF0u, 0, 0); /*0x78eda3*/
    g_WebBrowserConfig.? = 0; /*0x78edae*/
    v13 = GetDlgItem(hWnd, 1909); /*0x78edb4*/
    if ( v13 ) /*0x78edb8*/
      g_WebBrowserConfig.? = (void *)SendMessageA(v13, 0xF0u, 0, 0); /*0x78edc4*/
    __3_YAXPAX_Z(dword_B77E98); /*0x78edd0*/
    dword_B77E98 = 0; /*0x78eddf*/
    CloseDialog(hWnd, 1); /*0x78ede5*/
    return 0; /*0x78eded*/
  }
  return result; /*0x78ec13*/
}



// ==== 0x0078F000  SessionClass::BuildLaunchString  this=SessionClass  sig=csp ====
void SessionClass::BuildLaunchString(SessionClass *this)
{
  signed int inited; // eax
  int v2; // ecx
  int v3; // ebp
  int v4; // ebx
  ObjectClass **v5; // edi
  ObjectClass *v6; // esi
  ObjectClass **v7; // esi
  char *v8; // esi
  char **v9; // eax
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  int v13; // edi
  char *v14; // eax
  char **v15; // [esp-14h] [ebp-A0h]
  char **v16; // [esp-Ch] [ebp-98h]
  char **v17; // [esp-4h] [ebp-90h]
  char **v18; // [esp+4h] [ebp-88h]
  char *v19; // [esp+14h] [ebp-78h] BYREF
  int v20; // [esp+18h] [ebp-74h]
  String v21; // [esp+1Ch] [ebp-70h] BYREF
  char *v22; // [esp+24h] [ebp-68h] BYREF
  String v23; // [esp+28h] [ebp-64h] BYREF
  String v24; // [esp+30h] [ebp-5Ch] BYREF
  String v25; // [esp+38h] [ebp-54h] BYREF
  char v26[80]; // [esp+3Ch] [ebp-50h] BYREF

  inited = SessionClass::initPlayers(*(SessionClass **)&stru_A8B250.__pad_0[4]); /*0x78f009*/
  v2 = 1; /*0x78f014*/
  if ( g_MenuStateFlags == 1 ) /*0x78f01b*/
    ++inited; /*0x78f01d*/
  v3 = 0; /*0x78f01f*/
  v19 = 0; /*0x78f025*/
  v20 = 0; /*0x78f029*/
  if ( inited <= 1 ) /*0x78f02d*/
    goto LABEL_15; /*0x78f02d*/
  v4 = inited - 1; /*0x78f030*/
  v5 = (ObjectClass **)&unk_A8DA94; /*0x78f033*/
  *(_DWORD *)v21.__pad_0 = inited; /*0x78f03b*/
  do /*0x78f079*/
  {
    v6 = *v5; /*0x78f03f*/
    if ( *v5 == (ObjectClass *)g_HouseClass_ObserverFlags || v6 == (ObjectClass *)g_Lobby_MaxPlayers ) /*0x78f050*/
    {
      ++v19; /*0x78f071*/
    }
    else if ( (unsigned __int8)IsKnownPointer(*v5) ) /*0x78f054*/
    {
      ++v3; /*0x78f05d*/
    }
    else if ( (unsigned __int8)Player::IsObserver((Player *)v6) ) /*0x78f062*/
    {
      ++v20; /*0x78f06b*/
    }
    ++v5; /*0x78f075*/
    --v4; /*0x78f078*/
  }
  while ( v4 ); /*0x78f079*/
  if ( *(int *)v21.__pad_0 < 8 ) /*0x78f083*/
  {
    v2 = *(_DWORD *)v21.__pad_0; /*0x78f085*/
LABEL_15:
    v7 = (ObjectClass **)(4 * v2 + 11066000); /*0x78f087*/
    do /*0x78f0b2*/
    {
      if ( *v7 == (ObjectClass *)g_Lobby_MaxPlayers ) /*0x78f097*/
      {
        ++v19; /*0x78f099*/
      }
      else if ( (unsigned __int8)IsKnownPointer(*v7) ) /*0x78f09f*/
      {
        ++v3; /*0x78f0a8*/
      }
      ++v7; /*0x78f0a9*/
    }
    while ( (int)v7 < (int)&dword_A8DAB0 ); /*0x78f0b2*/
  }
  if ( ppv ) /*0x78f0bb*/
  {
    v8 = &v19[v3 + 1]; /*0x78f0ca*/
    v18 = String::Assign(&v25, String2); /*0x78f0df*/
    v17 = FromStringInt((char **)&v24.m_3[1], (int)v8); /*0x78f0ec*/
    v16 = String::Assign(&v24, asc_84BA48); /*0x78f100*/
    v15 = String::Assign((String *)&v23.m_3[1], &stru_B76AC4.needsRedraw); /*0x78f118*/
    v9 = String::Assign(&v23, aMode_0); /*0x78f11f*/
    v10 = String::Concat((String *)v9, &v22, v15); /*0x78f126*/
    v11 = String::Concat((String *)v10, (char **)&v21.m_3[1], v16); /*0x78f12d*/
    v12 = String::Concat((String *)v11, &v19, v17); /*0x78f134*/
    String::Concat((String *)v12, (char **)&v21, v18); /*0x78f13b*/
    DeleteAndZero((ObjectClass *)&v19); /*0x78f144*/
    DeleteAndZero((ObjectClass *)&v21.m_3[1]); /*0x78f14d*/
    DeleteAndZero((ObjectClass *)&v22); /*0x78f156*/
    DeleteAndZero((ObjectClass *)&v23); /*0x78f15f*/
    DeleteAndZero((ObjectClass *)&v23.m_3[1]); /*0x78f168*/
    DeleteAndZero((ObjectClass *)&v24); /*0x78f171*/
    DeleteAndZero((ObjectClass *)&v24.m_3[1]); /*0x78f17a*/
    DeleteAndZero((ObjectClass *)&v25); /*0x78f183*/
    v13 = *(_DWORD *)ppv; /*0x78f191*/
    v14 = String::GetOrEmpty(&v21); /*0x78f193*/
    (*(void (__stdcall **)(LPVOID, char *))(v13 + 156))(ppv, v14); /*0x78f1a0*/
    memset(v26, 0, sizeof(v26)); /*0x78f1b1*/
    GameConfig::BuildChecksum(v26); /*0x78f1b7*/
    v26[40] = 0; /*0x78f1c5*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 168))(ppv, v26); /*0x78f1ce*/
    (*(void (__stdcall **)(LPVOID, int, char *))(*(_DWORD *)ppv + 252))(ppv, 1, &v8[v20]); /*0x78f1e5*/
    DeleteAndZero((ObjectClass *)&v21); /*0x78f1ef*/
  }
}



// ==== 0x0078F200  ObjectClass::BuildWOLPlayerTooltip  this=ObjectClass  sig=csp ====
wchar_t *__thiscall BuildWOLPlayerTooltip(char *this)
{
  char *v2; // eax
  _DWORD *v3; // esi
  int v4; // esi
  signed int v5; // eax
  signed int v6; // ebp
  int v7; // ebx
  const void *v8; // esi
  char v9; // bl
  int v10; // esi
  const void *v11; // esi
  char *v12; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  char *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v19; // [esp-10h] [ebp-174h]
  int v20; // [esp-Ch] [ebp-170h]
  wchar_t *v21; // [esp-Ch] [ebp-170h]
  char *v22; // [esp-8h] [ebp-16Ch]
  char *v23; // [esp-8h] [ebp-16Ch]
  wchar_t *v24; // [esp-8h] [ebp-16Ch]
  int v25; // [esp-4h] [ebp-168h]
  char *v26; // [esp-4h] [ebp-168h]
  char *v27; // [esp-4h] [ebp-168h]
  wchar_t *String; // [esp-4h] [ebp-168h]
  char v29; // [esp+12h] [ebp-152h]
  char v30; // [esp+13h] [ebp-151h]
  void *v31; // [esp+14h] [ebp-150h] BYREF
  void *v32; // [esp+18h] [ebp-14Ch] BYREF
  char *v33; // [esp+1Ch] [ebp-148h]
  char v34[108]; // [esp+20h] [ebp-144h] BYREF
  _DWORD v35[27]; // [esp+8Ch] [ebp-D8h] BYREF
  _DWORD v36[27]; // [esp+F8h] [ebp-6Ch] BYREF

  v33 = this; /*0x78f210*/
  unknown_libname_73(&v31); /*0x78f214*/
  memset(v35, 0, sizeof(v35)); /*0x78f227*/
  v2 = ToWideStringChar(this); /*0x78f22b*/
  String::Assign_Bool(&v31, v2); /*0x78f235*/
  String::ToLower((const char **)&v31); /*0x78f23e*/
  v3 = (_DWORD *)g_WOL_HashTable; /*0x78f243*/
  if ( g_WOL_HashTable /*0x78f267*/
    && *(_DWORD *)(g_WOL_HashTable + 4)
    && (v4 = *(_DWORD *)(*v3 + 4 * HashMap::ComputeIndex_2(g_WOL_HashTable, (int)&v31))) != 0 )
  {
    while ( !String::Compare((const char **)v4, (const char **)&v31) ) /*0x78f277*/
    {
      v4 = *(_DWORD *)(v4 + 112); /*0x78f27d*/
      if ( !v4 ) /*0x78f282*/
        goto LABEL_6; /*0x78f282*/
    }
    v8 = (const void *)(v4 + 4); /*0x78f309*/
    if ( v8 ) /*0x78f30e*/
      qmemcpy(v35, v8, sizeof(v35)); /*0x78f31c*/
    v30 = 1; /*0x78f31e*/
  }
  else
  {
LABEL_6:
    v30 = 0; /*0x78f284*/
  }
  memset(v36, 0, sizeof(v36)); /*0x78f297*/
  unknown_libname_73(&v32); /*0x78f29d*/
  v5 = dword_B77900; /*0x78f2a2*/
  v6 = 0; /*0x78f2a7*/
  if ( (int)dword_B77900 > 0 ) /*0x78f2ab*/
  {
    v7 = 0; /*0x78f2b1*/
    do /*0x78f33c*/
    {
      if ( v7 >= 0 && v6 < v5 ) /*0x78f2b9*/
        qmemcpy(v34, (char *)dword_B77908 + v7, sizeof(v34)); /*0x78f2cc*/
      if ( !strcmp(&v34[36], ToWideStringChar(v33)) ) /*0x78f2e3*/
        break; /*0x78f32f*/
      v5 = dword_B77900; /*0x78f331*/
      ++v6; /*0x78f336*/
      v7 += 108; /*0x78f337*/
    }
    while ( v6 < (int)dword_B77900 ); /*0x78f33c*/
  }
  v9 = 0; /*0x78f34b*/
  v29 = 0; /*0x78f352*/
  if ( strlen(&v34[46]) ) /*0x78f34d*/
  {
    v9 = 1; /*0x78f361*/
    String::Assign_Bool(&v32, &v34[87]); /*0x78f363*/
    String::ToLower((const char **)&v32); /*0x78f36c*/
    if ( dword_B768C4 ) /*0x78f378*/
    {
      v10 = *((_DWORD *)g_WOL_ListParser + (dword_B768D8(&v32) & ((1 << dword_B768CC) - 1))); /*0x78f399*/
      if ( v10 ) /*0x78f39e*/
      {
        while ( !String::Compare((const char **)v10, (const char **)&v32) ) /*0x78f3ae*/
        {
          v10 = *(_DWORD *)(v10 + 112); /*0x78f3b0*/
          if ( !v10 ) /*0x78f3b5*/
            goto LABEL_27; /*0x78f3b5*/
        }
        v11 = (const void *)(v10 + 4); /*0x78f3bd*/
        if ( v11 ) /*0x78f3c2*/
          qmemcpy(v36, v11, sizeof(v36)); /*0x78f3d0*/
        v29 = 1; /*0x78f3d2*/
      }
    }
  }
LABEL_27:
  if ( !v30 ) /*0x78f3dd*/
  {
    if ( !v9 ) /*0x78f4d2*/
    {
      String = GetStringCSF(g_Str_TXT_UNRANKED, 0, g_Str_File_wonline_cpp, 15730); /*0x78f57f*/
      v17 = GetStringCSF(aTxtPlayerToolt_4, 0, g_Str_File_wonline_cpp, 15730); /*0x78f58a*/
      swprintf(&unk_B76238, (const size_t)v17, String); /*0x78f595*/
      goto LABEL_40; /*0x78f595*/
    }
    if ( v29 ) /*0x78f4e2*/
    {
      v16 = CharToWideString(&v34[46]); /*0x78f4e4*/
      v26 = (char *)v36[7]; /*0x78f4f2*/
      v23 = v16; /*0x78f4f3*/
      v21 = GetStringCSF(g_Str_TXT_UNRANKED, 0, g_Str_File_wonline_cpp, 15722); /*0x78f50f*/
      v14 = GetStringCSF(aTxtPlayerToolt_2, 0, g_Str_File_wonline_cpp, 15722); /*0x78f51a*/
      goto LABEL_37; /*0x78f51a*/
    }
    v27 = CharToWideString(&v34[46]); /*0x78f53b*/
    v24 = GetStringCSF(g_Str_TXT_UNRANKED, 0, g_Str_File_wonline_cpp, 15726); /*0x78f552*/
    v15 = GetStringCSF((wchar_t *)aTxtPlayerToolt_3, 0, g_Str_File_wonline_cpp, 15726); /*0x78f55d*/
LABEL_33:
    swprintf(&unk_B76238, (const size_t)v15, v24, v27); /*0x78f4bd*/
    goto LABEL_40; /*0x78f4cb*/
  }
  if ( !v9 ) /*0x78f3e5*/
  {
    v27 = (char *)v35[7]; /*0x78f494*/
    v24 = GetStringCSF(g_Str_TXT_RANK, 0, g_Str_File_wonline_cpp, 15716); /*0x78f4ad*/
    v15 = GetStringCSF(aTxtPlayerToolt_1, 0, g_Str_File_wonline_cpp, 15716); /*0x78f4b8*/
    goto LABEL_33; /*0x78f4b8*/
  }
  if ( !v29 ) /*0x78f3f5*/
  {
    v26 = CharToWideString(&v34[46]); /*0x78f45b*/
    v23 = (char *)v35[7]; /*0x78f45c*/
    v21 = GetStringCSF(g_Str_TXT_RANK, 0, g_Str_File_wonline_cpp, 15712); /*0x78f478*/
    v14 = GetStringCSF((wchar_t *)aTxtPlayerToolt_0, 0, g_Str_File_wonline_cpp, 15712); /*0x78f483*/
LABEL_37:
    swprintf(&unk_B76238, (const size_t)v14, v21, v23, v26); /*0x78f51f*/
    goto LABEL_40; /*0x78f52d*/
  }
  v12 = CharToWideString(&v34[46]); /*0x78f3f7*/
  v25 = v36[7]; /*0x78f408*/
  v22 = v12; /*0x78f409*/
  v20 = v35[7]; /*0x78f413*/
  v19 = GetStringCSF(g_Str_TXT_RANK, 0, g_Str_File_wonline_cpp, 15708); /*0x78f42a*/
  v13 = GetStringCSF(aTxtPlayerToolt, 0, g_Str_File_wonline_cpp, 15708); /*0x78f435*/
  swprintf(&unk_B76238, (const size_t)v13, v19, v20, v22, v25); /*0x78f440*/
LABEL_40:
  DeleteAndZero(&v32); /*0x78f59d*/
  DeleteAndZero(&v31); /*0x78f5aa*/
  return &unk_B76238; /*0x78f5b4*/
}



// ==== 0x0078F5C0  WOLobby::FormatLatencyText  this=WOLobby  sig=csp ====
wchar_t *__thiscall WOLobby::FormatLatencyText(WOLobby *this)
{
  int v2; // eax
  wchar_t *v3; // eax
  int v5; // [esp-10h] [ebp-14h]
  WOLobby *v6; // [esp-Ch] [ebp-10h]
  wchar_t *StringCSF; // [esp-8h] [ebp-Ch]
  wchar_t *v8; // [esp-4h] [ebp-8h]

  v2 = dword_B76440[WOLobby::FindPlayerIndex(this)]; /*0x78f5c8*/
  if ( v2 >= 0 ) /*0x78f5d1*/
  {
    if ( v2 >= 300 ) /*0x78f61a*/
    {
      v8 = (wchar_t *)v2; /*0x78f641*/
      if ( v2 >= 500 ) /*0x78f642*/
      {
        StringCSF = GetStringCSF(aTxtPoor, 0, g_Str_File_wonline_cpp, 15747); /*0x78f679*/
        v6 = this; /*0x78f67a*/
        v5 = 15747; /*0x78f67b*/
      }
      else
      {
        StringCSF = GetStringCSF(aTxtFair, 0, g_Str_File_wonline_cpp, 15745); /*0x78f65a*/
        v6 = this; /*0x78f65b*/
        v5 = 15745; /*0x78f65c*/
      }
    }
    else
    {
      v8 = (wchar_t *)v2; /*0x78f61c*/
      StringCSF = GetStringCSF(aTxtGood, 0, g_Str_File_wonline_cpp, 15743); /*0x78f633*/
      v6 = this; /*0x78f634*/
      v5 = 15743; /*0x78f635*/
    }
    v3 = GetStringCSF(aTxtLatencyIcon_0, 0, g_Str_File_wonline_cpp, v5); /*0x78f68c*/
  }
  else
  {
    v8 = GetStringCSF(g_Str_TXT_UNKNOWN_PING, 0, g_Str_File_wonline_cpp, 15741); /*0x78f5f0*/
    StringCSF = GetStringCSF(aTxtUnknown, 0, g_Str_File_wonline_cpp, 15741); /*0x78f607*/
    v6 = this; /*0x78f608*/
    v3 = GetStringCSF((wchar_t *)aTxtLatencyIcon, 0, g_Str_File_wonline_cpp, 15741); /*0x78f613*/
  }
  swprintf(&word_B75F6C, (const size_t)v3, (const wchar_t *const)v6, StringCSF, v8); /*0x78f697*/
  return &word_B75F6C; /*0x78f6a4*/
}



// ==== 0x0078F7F0  WOLobby::SetupDlgProc  this=WOLobby  sig=csp ====
int __stdcall WOLobby::SetupDlgProc(HWND hDlg, unsigned int a2, unsigned int nIDDlgItem, HWND hWnd)
{
  int result; // eax
  int v5; // ecx
  HWND DlgItem; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // ebx
  HWND v10; // ebx
  _DWORD *v11; // eax
  _DWORD *v12; // eax
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
  wchar_t *v... [59148 chars total]


