// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00780110  ObjectClass::ResetSystemWOL  this=ObjectClass  sig=csp ====
int WOL_ResetSystem()
{
  int v0; // eax
  int v1; // esi
  unsigned int v2; // eax
  unsigned int v3; // ebp
  int v4; // esi
  void **v5; // edi
  int i; // esi
  unsigned int v7; // eax
  unsigned int v8; // ebp
  int v9; // esi
  void **v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // edi
  _DWORD *v13; // esi
  void *v14; // ecx
  unsigned int v15; // eax
  unsigned int j; // edi
  _DWORD *v17; // esi
  void *v18; // ecx
  unsigned int v19; // eax
  unsigned int k; // edi
  _DWORD *v21; // esi
  void *v22; // ecx
  int result; // eax
  _DWORD v24[2]; // [esp+10h] [ebp-8h] BYREF

  v0 = LoadAccountInfoWOL(v24); /*0x78011b*/
  ComPtr::Set(&stru_B75E48, *(_DWORD *)(v0 + 4)); /*0x780129*/
  v24[0] = &vt_rc_ptr_PlayerProfile; /*0x780132*/
  ComPtr::Release(v24); /*0x78013a*/
  v1 = 0; /*0x780146*/
  g_WOL_AuthPool = 0; /*0x78014a*/
  g_WOL_ChatState = 0; /*0x780150*/
  for ( g_WOL_State = 0; v1 < g_WOL_ChatPool; ++v1 ) /*0x78015c*/
    DeleteAndZero((void **)dword_B777A8 + v1); /*0x780167*/
  v2 = g_WOL_MsgPool; /*0x780176*/
  v3 = 0; /*0x78017b*/
  for ( g_WOL_ChatPool = 0; v3 < g_WOL_MsgPool; v2 = g_WOL_MsgPool ) /*0x780185*/
  {
    v4 = *((_DWORD *)g_WOL_MessageQueue + v3); /*0x78018d*/
    while ( v4 ) /*0x780192*/
    {
      v5 = (void **)v4; /*0x780194*/
      v4 = *(_DWORD *)(v4 + 8); /*0x780196*/
      DeleteAndZero(v5); /*0x78019f*/
      __3_YAXPAX_Z(v5); /*0x7801a5*/
    }
    *((_DWORD *)g_WOL_MessageQueue + v3++) = 0; /*0x7801b7*/
  }
  g_WOL_MessageConfig = 0; /*0x7801ca*/
  if ( v2 > dword_B766B0 ) /*0x7801d2*/
  {
    do /*0x7801f3*/
    {
      if ( byte_B76694 ) /*0x7801da*/
        break; /*0x7801da*/
      HashMap::Shrink(&g_WOL_MessageQueue); /*0x7801e1*/
    }
    while ( g_WOL_MsgPool > (unsigned int)dword_B766B0 ); /*0x7801f3*/
  }
  for ( i = 0; i < g_WOL_LoginToken; ++i ) /*0x7801fe*/
    DeleteAndZero((void **)dword_B76600 + i); /*0x780209*/
  v7 = dword_B76538; /*0x780218*/
  v8 = 0; /*0x78021d*/
  for ( g_WOL_LoginToken = 0; v8 < dword_B76538; v7 = dword_B76538 ) /*0x780227*/
  {
    v9 = *((_DWORD *)g_WOL_ConnectionPool + v8); /*0x78022e*/
    while ( v9 ) /*0x780233*/
    {
      v10 = (void **)v9; /*0x780235*/
      v9 = *(_DWORD *)(v9 + 8); /*0x780237*/
      DeleteAndZero(v10); /*0x780240*/
      __3_YAXPAX_Z(v10); /*0x780246*/
    }
    *((_DWORD *)g_WOL_ConnectionPool + v8++) = 0; /*0x780259*/
  }
  dword_B76534 = 0; /*0x78026c*/
  if ( v7 > dword_B76560 ) /*0x780274*/
  {
    do /*0x780295*/
    {
      if ( byte_B76544 ) /*0x78027c*/
        break; /*0x78027c*/
      HashMap::Shrink(&g_WOL_ConnectionPool); /*0x780283*/
    }
    while ( dword_B76538 > (unsigned int)dword_B76560 ); /*0x780295*/
  }
  dword_B7646C = time(0) + 86400; /*0x7802a5*/
  v11 = dword_B768C8; /*0x7802aa*/
  v12 = 0; /*0x7802af*/
  dword_B7617C = 0; /*0x7802b3*/
  for ( dword_B76180 = 0; v12 < dword_B768C8; v11 = dword_B768C8 ) /*0x7802bf*/
  {
    v13 = (_DWORD *)*((_DWORD *)g_WOL_ListParser + v12); /*0x7802c6*/
    while ( v13 ) /*0x7802cb*/
    {
      v14 = v13; /*0x7802cd*/
      v13 = (_DWORD *)v13[28]; /*0x7802cf*/
      ResetSystemWOL_Reset(v14, 1); /*0x7802d8*/
    }
    *((_DWORD *)g_WOL_ListParser + v12++) = 0; /*0x7802e8*/
  }
  dword_B768C4 = 0; /*0x7802fb*/
  if ( v11 > dword_B768F0 ) /*0x780303*/
  {
    do /*0x780324*/
    {
      if ( byte_B768D4 ) /*0x78030b*/
        break; /*0x78030b*/
      HashMap::Shrink2(&g_WOL_ListParser); /*0x780312*/
    }
    while ( dword_B768C8 > (unsigned int)dword_B768F0 ); /*0x780324*/
  }
  v15 = MEMORY[0xB73B00]; /*0x780326*/
  for ( j = 0; j < MEMORY[0xB73B00]; v15 = MEMORY[0xB73B00] ) /*0x78032f*/
  {
    v17 = (_DWORD *)*((_DWORD *)MEMORY[0xB73AF8] + j); /*0x780336*/
    while ( v17 ) /*0x78033b*/
    {
      v18 = v17; /*0x78033d*/
      v17 = (_DWORD *)v17[28]; /*0x78033f*/
      ResetSystemWOL_Reset(v18, 1); /*0x780348*/
    }
    *((_DWORD *)MEMORY[0xB73AF8] + j++) = 0; /*0x780358*/
  }
  MEMORY[0xB73AFC] = 0; /*0x78036b*/
  if ( v15 > MEMORY[0xB73B28] ) /*0x780373*/
  {
    do /*0x780394*/
    {
      if ( MEMORY[0xB73B0C] ) /*0x78037b*/
        break; /*0x78037b*/
      HashMap::Shrink2(&MEMORY[0xB73AF8]); /*0x780382*/
    }
    while ( MEMORY[0xB73B00] > (unsigned int)MEMORY[0xB73B28] ); /*0x780394*/
  }
  v19 = g_WOL_PacketQueue; /*0x780396*/
  for ( k = 0; k < g_WOL_PacketQueue; v19 = g_WOL_PacketQueue ) /*0x78039f*/
  {
    v21 = (_DWORD *)*((_DWORD *)g_WOL_EventQueue + k); /*0x7803a6*/
    while ( v21 ) /*0x7803ab*/
    {
      v22 = v21; /*0x7803ad*/
      v21 = (_DWORD *)v21[68]; /*0x7803af*/
      CChatEventSink::DeleteAndZero(v22, 1); /*0x7803bb*/
    }
    *((_DWORD *)g_WOL_EventQueue + k++) = 0; /*0x7803cb*/
  }
  dword_B7660C = 0; /*0x7803de*/
  if ( v19 > dword_B76638 ) /*0x7803e6*/
  {
    do /*0x780407*/
    {
      if ( byte_B7661C ) /*0x7803ee*/
        break; /*0x7803ee*/
      HashTable::Shrink(&g_WOL_EventQueue); /*0x7803f5*/
    }
    while ( g_WOL_PacketQueue > (unsigned int)dword_B76638 ); /*0x780407*/
  }
  Array::CleanupArrayWOL(&g_WindowManager); /*0x78040e*/
  Array::CleanupArrayWOL(&g_WOL_RequestManager); /*0x780418*/
  HashTable::CleanupAndResize(&g_WOL_AccountInfo); /*0x780422*/
  if ( MEMORY[0xA8B238] == 4 && MEMORY[0xA8B244] == 3 ) /*0x780437*/
  {
    g_WOL_HashTable = (int)&MEMORY[0xB73AF8]; /*0x78043e*/
    dword_B779C8 = 8960; /*0x780448*/
    dword_B736F0 = 8960; /*0x78044d*/
  }
  else
  {
    g_WOL_HashTable = (int)&dword_B77D80; /*0x780459*/
    dword_B779C8 = g_NetworkRematchState; /*0x780463*/
    dword_B736F0 = g_NetworkRematchState; /*0x780468*/
  }
  memset(&g_WOL_ProcessIdle, 0, 0x10Cu); /*0x78047e*/
  memset(&dword_B73BE8, 0, 0x10Cu); /*0x78048a*/
  memset(&unk_B75E58, 0, 0xF8u); /*0x780496*/
  memset(&unk_B769C8, 0, 0xF8u); /*0x7804a6*/
  word_B77AD0 = 0; /*0x7804a8*/
  g_WOL_GameListState = 0; /*0x7804af*/
  g_WOL_IdleHandler = 1; /*0x7804b5*/
  g_WOL_GameProcessState = -1; /*0x7804bb*/
  g_WOL_GameListPool = time(0); /*0x7804ce*/
  dword_B76468 = 0; /*0x7804d3*/
  dword_B779CC = 0; /*0x7804d9*/
  dword_B77E4C = 0; /*0x7804df*/
  g_WOL_ChannelList = 0; /*0x7804e5*/
  byte_B77DEC = 0; /*0x7804eb*/
  byte_B77DC0 = 0; /*0x7804f1*/
  byte_84A1B8 = 1; /*0x7804f7*/
  DeleteAndZero::Alt2(&MEMORY[0xB73AE0]); /*0x7804fe*/
  memset(&Handles, 0, 0x48u); /*0x780514*/
  g_NetworkLobby_Init = 0; /*0x780522*/
  byte_B77DC2 = 0; /*0x780528*/
  dword_84A1BC = -1; /*0x78052e*/
  dword_B77DCC = 0; /*0x780534*/
  dword_B77DB8 = -1; /*0x78053a*/
  dword_B77DBC = -1; /*0x780540*/
  dword_B73E1C = GetStringCSF(aTxtLob1, 0, g_Str_File_wonline_cpp, 2752); /*0x78055c*/
  dword_B73E20 = (int)GetStringCSF(aTxtLob2, 0, g_Str_File_wonline_cpp, 2753); /*0x780577*/
  dword_B73E24 = (int)GetStringCSF(aTxtLob3, 0, g_Str_File_wonline_cpp, 2754); /*0x780592*/
  dword_B73E28 = (int)GetStringCSF(aTxtLob4, 0, g_Str_File_wonline_cpp, 2755); /*0x7805ad*/
  dword_B73E2C = (int)GetStringCSF(aTxtLob5, 0, g_Str_File_wonline_cpp, 2756); /*0x7805c8*/
  dword_B73E30 = (int)GetStringCSF(aTxtLob6, 0, g_Str_File_wonline_cpp, 2757); /*0x7805d2*/
  dword_B73E34 = (int)GetStringCSF(aTxtLob7, 0, g_Str_File_wonline_cpp, 2758); /*0x7805fe*/
  dword_B73E38 = (int)GetStringCSF(aTxtLob8, 0, g_Str_File_wonline_cpp, 2759); /*0x780608*/
  memset(&g_WOL_RequestObject, 0xFFu, 0x20u); /*0x780619*/
  MEMORY[0xAC116C] = 0; /*0x780627*/
  memset(&byte_B77A94, 0, 0x28u); /*0x78062d*/
  MEMORY[0xAC1170] = 0; /*0x780634*/
  MEMORY[0xAC1174] = 0; /*0x78063a*/
  dword_B77E54 = 0; /*0x780640*/
  dword_B77E58 = 0; /*0x780646*/
  dword_B77E5C = 0; /*0x78064c*/
  dword_B77DDC = 0; /*0x780652*/
  dword_B77DE0 = 0; /*0x780658*/
  unk_B77ABC = 0; /*0x78065e*/
  dword_B77DE4 = 0; /*0x78065f*/
  g_WOL_ChannelState = 0; /*0x780665*/
  MEMORY[0xB76E38] = 1; /*0x78066b*/
  g_WOL_ChannelLeaveState = 0; /*0x780671*/
  __Release__NonReentrantLock_details_Concurrency__QAEXXZ_1((Concurrency::details::_NonReentrantLock *)&g_WOL_RequestState); /*0x780677*/
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
void PopulateWOLLobbyListBox()
{
  HWND v0; // eax
  HWND DlgItem; // ebp
  LRESULT (__stdcall *v2)(HWND, UINT, WPARAM, LPARAM); // esi
  LRESULT v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  LRESULT v8; // esi
  signed int v9; // ebx
  LRESULT v10; // eax
  int v11; // eax
  LRESULT v12; // esi
  char *v13; // eax
  LRESULT v14; // eax
  bool v15; // [esp+7h] [ebp-2E9h]
  LPARAM v16; // [esp+8h] [ebp-2E8h]
  int v17; // [esp+Ch] [ebp-2E4h] BYREF
  int v18; // [esp+10h] [ebp-2E0h]
  int v19; // [esp+14h] [ebp-2DCh]
  LRESULT i; // [esp+18h] [ebp-2D8h]
  int v21; // [esp+1Ch] [ebp-2D4h]
  LPARAM v22; // [esp+20h] [ebp-2D0h] BYREF
  void *v23; // [esp+24h] [ebp-2CCh] BYREF
  void *v24[4]; // [esp+28h] [ebp-2C8h] BYREF
  LPARAM v25[67]; // [esp+38h] [ebp-2B8h] BYREF
  wchar_t Buffer[80]; // [esp+144h] [ebp-1ACh] BYREF
  char v27[268]; // [esp+1E4h] [ebp-10Ch] BYREF

  v0 = (HWND)Dialog::FindByHandle((void *)0x113); /*0x7806cc*/
  if ( v0 ) /*0x7806d3*/
  {
    DlgItem = GetDlgItem(v0, 1341); /*0x7806e5*/
    if ( DlgItem ) /*0x7806e9*/
    {
      unknown_libname_73(&v17); /*0x7806f4*/
      v2 = SendMessageA; /*0x7806f9*/
      v3 = SendMessageA(DlgItem, 0x18Eu, 0, 0); /*0x780709*/
      if ( v3 != -1 ) /*0x78070e*/
        GetListBoxItemText(DlgItem, v3, (void **)&v17); /*0x780719*/
      SendMessageA(DlgItem, 0x49Du, 0, 1); /*0x780729*/
      Memory_Pop(DlgItem); /*0x78072d*/
      v4 = 0; /*0x780737*/
      v21 = g_WOL_AuthPool; /*0x78073b*/
      v16 = 0; /*0x78073f*/
      if ( g_WOL_AuthPool > 0 ) /*0x780743*/
      {
        v5 = 0; /*0x780749*/
        v18 = 0; /*0x78074c*/
        do /*0x7809a5*/
        {
          if ( v5 >= 0 && v4 < g_WOL_AuthPool ) /*0x78075a*/
            qmemcpy(v25, (char *)dword_B73E18 + v5, sizeof(v25)); /*0x78076e*/
          if ( !strncmp((const char *)&v25[13], g_Str_Lob_41_, strlen(g_Str_Lob_41_)) ) /*0x78078a*/
          {
            v6 = atol((const char *)&v25[13] + strlen(g_Str_Lob_41_)); /*0x7807b1*/
            v19 = v6; /*0x7807b6*/
            v15 = strcmp((const char *)&v25[13], g_WOL_IdleFlag) == 0; /*0x7807f7*/
            v7 = v6 % 8; /*0x780810*/
            if ( v6 / 8 ) /*0x780801*/
              swprintf(Buffer, (const size_t)aSDD_0, (&dword_B73E1C)[v7], v6 / 8 + 1, v25[3]); /*0x780855*/
            else
              swprintf(Buffer, (const size_t)aSD_3, (&dword_B73E1C)[v7], v25[3]); /*0x78082f*/
            v8 = SendMessageA(DlgItem, 0x18Bu, 0, 0); /*0x78086d*/
            v9 = 0; /*0x78086f*/
            for ( i = v8; v9 < v8; ++v9 ) /*0x780877*/
            {
              v10 = SendMessageA(DlgItem, 0x199u, v9, 0); /*0x780882*/
              if ( v10 >= 0 && v10 < g_WOL_AuthPool ) /*0x780892*/
              {
                qmemcpy(v27, (char *)dword_B73E18 + 268 * v10, sizeof(v27)); /*0x7808b3*/
                v8 = i; /*0x7808b5*/
              }
              v11 = atol(&v27[strlen(g_Str_Lob_41_) + 52]); /*0x7808d0*/
              if ( v11 > v19 ) /*0x7808de*/
                break; /*0x7808de*/
            }
            v12 = SendMessageA(DlgItem, 0x4C7u, v9, (LPARAM)&v25[13]); /*0x7808fd*/
            SendMessageA(DlgItem, 0x19Au, v12, v16); /*0x78090b*/
            Gadget::InitProperties(&v22); /*0x780911*/
            v22 = 1; /*0x780922*/
            WideString::Reassign(&v23, Buffer); /*0x78092a*/
            WideString::Reassign(v24, &MEMORY[0x887734]); /*0x780938*/
            SendMessageA(DlgItem, 0x4A8u, (unsigned __int16)dword_B76C1C | ((unsigned __int16)v12 << 16), (LPARAM)&v22); /*0x780962*/
            if ( v15 ) /*0x78096a*/
              SendMessageA(DlgItem, 0x186u, v12, 0); /*0x780975*/
            DeleteAndZero::Alt(v24); /*0x78097b*/
            DeleteAndZero::Alt(&v23); /*0x780984*/
            v4 = v16; /*0x780989*/
          }
          ++v4; /*0x780995*/
          v5 = v18 + 268; /*0x780996*/
          v16 = v4; /*0x78099d*/
          v18 += 268; /*0x7809a1*/
        }
        while ( v4 < v21 ); /*0x7809a5*/
        v2 = SendMessageA; /*0x7809ab*/
      }
      v13 = String::GetOrEmpty_Alt((char **)&v17); /*0x7809b6*/
      v14 = v2(DlgItem, 0x4C5u, 0, (LPARAM)v13); /*0x7809c4*/
      if ( v14 != -1 ) /*0x7809ca*/
        v2(DlgItem, 0x197u, v14, 0); /*0x7809d5*/
      v2(DlgItem, 0x49Du, 0, 0); /*0x7809e1*/
      InvalidateRect(DlgItem, 0, 0); /*0x7809e8*/
      DeleteAndZero((void **)&v17); /*0x7809f2*/
    }
  }
}


// ==== 0x00780A00  FormatLocaleStringWOL  this=unknown  sig=csp ====
wchar_t **__fastcall WOL_FormatLocaleString(wchar_t **a1, int a2)
{
  char **v3; // eax
  char *v4; // eax
  wchar_t *String; // eax
  void *v7; // [esp+8h] [ebp-Ch] BYREF
  void *v8; // [esp+Ch] [ebp-8h] BYREF
  void *v9; // [esp+10h] [ebp-4h] BYREF

  v3 = FormatStringInt((char **)&v9, a2, 2); /*0x780a0f*/
  ProcessStringAndCopy((char **)&v8, stru_84A684, v3); /*0x780a1e*/
  DeleteAndZero(&v9); /*0x780a27*/
  v4 = String::GetOrEmpty((char **)&v8); /*0x780a3a*/
  String = GetStringCSF((wchar_t *)v4, 0, g_Str_File_wonline_cpp, 2909); /*0x780a43*/
  WideString::Assign((wchar_t **)&v7, String); /*0x780a4d*/
  WideString::AssignFromPtr(a1, (const wchar_t **)&v7); /*0x780a65*/
  DeleteAndZero::Alt(&v7); /*0x780a6e*/
  DeleteAndZero(&v8); /*0x780a77*/
  return a1; /*0x780a7e*/
}


// ==== 0x00780A90  FormatWOLPlayerInfo  this=CampaignScore  sig=csp ====
wchar_t **__fastcall FormatWOLPlayerInfo(wchar_t **a1, const char *a2)
{
  wchar_t **v4; // eax
  _DWORD *v5; // esi
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
  void *v23; // [esp+10h] [ebp-8Ch] BYREF
  int v24; // [esp+14h] [ebp-88h] BYREF
  void *v25; // [esp+18h] [ebp-84h] BYREF
  void *v26; // [esp+1Ch] [ebp-80h] BYREF
  void *v27; // [esp+20h] [ebp-7Ch] BYREF
  void *v28; // [esp+24h] [ebp-78h] BYREF
  void *v29; // [esp+28h] [ebp-74h] BYREF
  void *v30; // [esp+2Ch] [ebp-70h] BYREF
  const wchar_t *v31[27]; // [esp+30h] [ebp-6Ch] BYREF

  String::Assign((char **)&v23, a2 + 36); /*0x780aa6*/
  v4 = CharStringToWide((wchar_t **)&v28, (const char **)&v23); /*0x780abd*/
  WideString::AssignConcat((const wchar_t **)v4, (wchar_t **)&v24, (wchar_t *)MEMORY[0x84A6A4]); /*0x780ac4*/
  DeleteAndZero::Alt(&v28); /*0x780acd*/
  String::ToLower((const char **)&v23); /*0x780ad6*/
  v5 = (_DWORD *)g_WOL_HashTable; /*0x780adb*/
  memset(v31, 0, sizeof(v31)); /*0x780aee*/
  if ( g_WOL_HashTable /*0x780b14*/
    && *(_DWORD *)(g_WOL_HashTable + 4)
    && (v6 = *(_DWORD *)(*v5 + 4 * ((*(int (__thiscall **)(void **))(g_WOL_HashTable + 24))(&v23) & ((1 << v5[3]) - 1)))) != 0 )
  {
    while ( !String::Compare((const char **)v6, (const char **)&v23) ) /*0x780b24*/
    {
      v6 = *(_DWORD *)(v6 + 112); /*0x780b2a*/
      if ( !v6 ) /*0x780b2f*/
        goto LABEL_6; /*0x780b2f*/
    }
    v11 = (const void *)(v6 + 4); /*0x780c0f*/
    if ( v11 ) /*0x780c14*/
      qmemcpy(v31, v11, sizeof(v31)); /*0x780c1f*/
    v22 = FormatWideString((wchar_t **)&v26, v31[7]); /*0x780c36*/
    v21 = WideString::Assign((wchar_t **)&v27, (wchar_t *)stru_82083C); /*0x780c49*/
    StringCSF = GetStringCSF(MEMORY[0x84A690], 0, g_Str_File_wonline_cpp, 2937); /*0x780c59*/
    v13 = WideString::Assign((wchar_t **)&v30, StringCSF); /*0x780c63*/
    v14 = WideString::ConcatAlloc((const wchar_t **)v13, (wchar_t **)&v29, (const wchar_t **)v21); /*0x780c6a*/
    v15 = WideString::ConcatAlloc((const wchar_t **)v14, (wchar_t **)&v28, (const wchar_t **)v22); /*0x780c71*/
    WideString::Append((wchar_t **)&v24, (const wchar_t **)v15); /*0x780c7b*/
    DeleteAndZero::Alt(&v28); /*0x780c84*/
    DeleteAndZero::Alt(&v29); /*0x780c8d*/
    DeleteAndZero::Alt(&v30); /*0x780c96*/
    DeleteAndZero::Alt(&v27); /*0x780c9f*/
    DeleteAndZero::Alt(&v26); /*0x780ca8*/
  }
  else
  {
LABEL_6:
    v7 = GetStringCSF(MEMORY[0x83FB1C], 0, g_Str_File_wonline_cpp, 2939); /*0x780b31*/
    WideString::Append2((wchar_t **)&v24, v7); /*0x780b4c*/
  }
  String::Assign((char **)&v25, a2 + 46); /*0x780b59*/
  if ( !String::Length((const char **)&v25) ) /*0x780b62*/
    String::Assign_Alt(&v25, a2 + 87); /*0x780b73*/
  if ( String::Length((const char **)&v25) ) /*0x780b7c*/
  {
    v8 = CharStringToWide((wchar_t **)&v27, (const char **)&v25); /*0x780b8d*/
    v9 = FormatWideStringPrefix((wchar_t **)&v26, MEMORY[0x84A69C], v8); /*0x780b9c*/
    WideString::Append((wchar_t **)&v24, (const wchar_t **)v9); /*0x780ba6*/
    DeleteAndZero::Alt(&v26); /*0x780baf*/
    DeleteAndZero::Alt(&v27); /*0x780bb8*/
  }
  v10 = *((_DWORD *)g_WOL_ConnectionPool + (dword_B76548(&v23) & ((1 << dword_B7653C) - 1))); /*0x780bdc*/
  if ( v10 ) /*0x780be1*/
  {
    while ( !String::Compare((const char **)v10, (const char **)&v23) ) /*0x780bf5*/
    {
      v10 = *(_DWORD *)(v10 + 8); /*0x780bfb*/
      if ( !v10 ) /*0x780c00*/
        goto LABEL_27; /*0x780c00*/
    }
    if ( MEMORY[0xAC116C] ) /*0x780cb9*/
    {
      if ( dword_B76534 ) /*0x780cc6*/
      {
        v16 = *((_DWORD *)g_WOL_ConnectionPool + (dword_B76548(&v23) & ((1 << dword_B7653C) - 1))); /*0x780ceb*/
        if ( v16 ) /*0x780cf0*/
        {
          while ( !String::Compare((const char **)v16, (const char **)&v23) ) /*0x780d00*/
          {
            v16 = *(_DWORD *)(v16 + 8); /*0x780d02*/
            if ( !v16 ) /*0x780d07*/
              goto LABEL_27; /*0x780d07*/
          }
          if ( v16 != -4 ) /*0x780d14*/
          {
            v17 = *(_DWORD *)(v16 + 4); /*0x780d16*/
            if ( v17 ) /*0x780d1a*/
            {
              v18 = FormatLocaleStringWOL((wchar_t **)&v27, v17); /*0x780d22*/
              v19 = FormatWideStringPrefix((wchar_t **)&v26, MEMORY[0x84A6A4], v18); /*0x780d31*/
              WideString::Append((wchar_t **)&v24, (const wchar_t **)v19); /*0x780d3b*/
              DeleteAndZero::Alt(&v26); /*0x780d44*/
              DeleteAndZero::Alt(&v27); /*0x780d4d*/
            }
          }
        }
      }
    }
  }
LABEL_27:
  WideString::AssignFromPtr(a1, (const wchar_t **)&v24); /*0x780d52*/
  DeleteAndZero(&v25); /*0x780d62*/
  DeleteAndZero::Alt((void **)&v24); /*0x780d6b*/
  DeleteAndZero(&v23); /*0x780d74*/
  return a1; /*0x780d7b*/
}


// ==== 0x00780D90  Render_Format  this=unknown  sig=csp ====
wchar_t **__fastcall Render_Format(wchar_t **a1, char **a2)
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
    if ( MEMORY[0xA8B8D8] <= 0 ) /*0x780ddf*/
    {
LABEL_6:
      WideString::Assign(a1, (CampaignScore *)&MEMORY[0x87F8E4].__pad_5568[10472]); /*0x780e0b*/
      return a1; /*0x780e17*/
    }
    else
    {
      while ( 1 ) /*0x780de6*/
      {
        v8 = *(_DWORD *)(MEMORY[0xA8B8CC] + 4 * v7); /*0x780de6*/
        v9 = String::GetOrEmpty_Alt(a2); /*0x780def*/
        if ( !_strcmpi(v9, (char *)(v8 + 88)) ) /*0x780df5*/
          break; /*0x780df5*/
        if ( ++v7 >= MEMORY[0xA8B8D8] ) /*0x780e09*/
          goto LABEL_6; /*0x780e09*/
      }
      WideString::Assign(a1, (CampaignScore *)v8); /*0x780e21*/
      return a1; /*0x780e26*/
    }
  }
  else
  {
    StringCSF = GetStringCSF(g_Str_TXT_RANDOM_MAP_DESCRIPTION, 0, g_Str_File_wonline_cpp, 2970); /*0x780dc2*/
    WideString::Assign(a1, (CampaignScore *)StringCSF); /*0x780dca*/
    return a1; /*0x780dcf*/
  }
}


// ==== 0x00780E30  FormatWOLPlayerInfoForDisplay  this=unknown  sig=csp ====
CampaignScore *__fastcall FormatWOLPlayerInfoForDisplay(wchar_t **a1, HWND a2, WPARAM wParam)
{
  wchar_t *StringCSF; // eax
  LRESULT v5; // eax
  char *v6; // eax
  wchar_t **v7; // eax
  wchar_t *v8; // eax
  const wchar_t *v10; // [esp-4h] [ebp-2B4h]
  wchar_t *v11; // [esp-4h] [ebp-2B4h]
  CampaignScore *v12; // [esp+0h] [ebp-2B0h]
  wchar_t *v13; // [esp+10h] [ebp-2A0h] BYREF
  void *aP1; // [esp+14h] [ebp-29Ch] BYREF
  void *aP1_4; // [esp+18h] [ebp-298h] BYREF
  char *aP1_8; // [esp+1Ch] [ebp-294h] BYREF
  int aP1_12; // [esp+20h] [ebp-290h] BYREF
  int aP1_16; // [esp+24h] [ebp-28Ch] BYREF
  int aP1_20; // [esp+28h] [ebp-288h] BYREF
  int aP1_24; // [esp+2Ch] [ebp-284h] BYREF
  int aP1_28; // [esp+30h] [ebp-280h] BYREF
  char aP1_32[108]; // [esp+34h] [ebp-27Ch] BYREF
  wchar_t *v23[67]; // [esp+A0h] [ebp-210h] BYREF
  char String[132]; // [esp+1ACh] [ebp-104h] BYREF
  CampaignScore Buffer[3]; // [esp+230h] [ebp-80h] BYREF

  if ( wParam == -1 ) /*0x780e46*/
  {
    StringCSF = GetStringCSF( /*0x780e4d*/
                  (wchar_t *)&stru_830620.__pad_14B0[14548],
                  0,
                  (CampaignScore *)g_Str_File_wonline_cpp,
                  2987);
LABEL_14:
    WideString::Assign(a1, (CampaignScore *)StringCSF); /*0x78106f*/
    return (CampaignScore *)a1; /*0x781077*/
  }
  memset(v23, 0, sizeof(v23)); /*0x780e6a*/
  v5 = SendMessageA(a2, 0x199u, wParam, 0); /*0x780e6c*/
  if ( v5 < 0 || v5 >= (int)g_WOL_ChatState ) /*0x780e80*/
  {
    StringCSF = GetStringCSF( /*0x78106a*/
                  (wchar_t *)&stru_830620.__pad_14B0[14548],
                  0,
                  (CampaignScore *)g_Str_File_wonline_cpp,
                  2994);
    goto LABEL_14; /*0x78106a*/
  }
  qmemcpy(v23, (char *)g_WOL_ConnectionHandler + 268 * v5, sizeof(v23)); /*0x780ea4*/
  String::Assign(&aP1_8, (const char *)&v23[13]); /*0x780eb2*/
  CChatEventSink::EncodeString((const char **)&aP1_8, 39); /*0x780ebd*/
  memset(aP1_32, 0, sizeof(aP1_32)); /*0x780ecf*/
  v6 = String::GetOrEmpty(&aP1_8); /*0x780ed5*/
  strncpy(&aP1_32[36], v6, (IUnknown *)0xA); /*0x780ee0*/
  FormatWOLPlayerInfo(&v13, aP1_32); /*0x780ef0*/
  v7 = WideString::Assign((wchar_t **)&aP1, (CampaignScore *)&stru_830620.__pad_579C[50716]); /*0x780efe*/
  WideString::Append(&v13, (CampaignScore *)v7); /*0x780f08*/
  DeleteAndZero::Alt(&aP1); /*0x780f11*/
  if ( v23[10] == (wchar_t *)-1 ) /*0x780f20*/
  {
    v11 = GetStringCSF((wchar_t *)&stru_84A684.__pad_20[8], 0, (CampaignScore *)g_Str_File_wonline_cpp, 3024); /*0x780f6a*/
    WideString::Append2(&v13, (CampaignScore *)v11); /*0x780f6f*/
  }
  else
  {
    v10 = v23[10]; /*0x780f22*/
    v8 = GetStringCSF((wchar_t *)&stru_84A684.INIClass_field_3C, 0, (CampaignScore *)g_Str_File_wonline_cpp, 3021); /*0x780f34*/
    swprintf((wchar_t *const)Buffer, (const size_t)v8, v10, v12); /*0x780f42*/
    WideString::Append2(&v13, Buffer); /*0x780f52*/
  }
  strncpy(String, (const char *)&v23[56], (IUnknown *)0x80); /*0x780f89*/
  aP1_16 = 0; /*0x780f95*/
  aP1_20 = 0; /*0x780f99*/
  aP1_12 = 0; /*0x780f9d*/
  aP1_28 = 0; /*0x780fa1*/
  aP1_24 = 0; /*0x780fa5*/
  unknown_libname_73(&aP1_4); /*0x780fa9*/
  ParseStringCommaInts(String, &aP1_16, &aP1_20, &aP1_12, &aP1_28, &aP1_24, &aP1_4); /*0x780fd2*/
  if ( String::Length((const char **)&aP1_4) ) /*0x780fdb*/
  {
    Render_Format((wchar_t **)&aP1, (char **)&aP1_4); /*0x780fec*/
    if ( WideString::Length((const wchar_t **)&aP1) ) /*0x780ff5*/
    {
      WideString::Append2(&v13, (CampaignScore *)&stru_830620.__pad_579C[50716]); /*0x781007*/
      WideString::Append(&v13, (CampaignScore *)&aP1); /*0x781015*/
    }
    DeleteAndZero::Alt(&aP1); /*0x78101e*/
  }
  WideString::AssignFromPtr(a1, (const wchar_t **)&v13); /*0x78102a*/
  DeleteAndZero((int)&aP1_4); /*0x781033*/
  DeleteAndZero::Alt((void **)&v13); /*0x78103c*/
  DeleteAndZero((int)&aP1_8); /*0x781045*/
  return (CampaignScore *)a1; /*0x78104c*/
}


// ==== 0x00781090  WOLobby_Get  this=unknown  sig=csp ====
CampaignScore *__fastcall WOLobby_Get(wchar_t **a1, HWND a2, WPARAM wParam)
{
  wchar_t *StringCSF; // eax
  LRESULT v5; // eax
  char v7[108]; // [esp+4h] [ebp-6Ch] BYREF

  if ( wParam == -1 ) /*0x78109d*/
  {
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[14568], 0, g_Str_File_wonline_cpp, 3050); /*0x7810a4*/
  }
  else
  {
    v5 = SendMessageA(a2, 0x199u, wParam, 0); /*0x7810af*/
    if ( v5 >= 0 && v5 < (int)g_WOL_State ) /*0x7810c1*/
    {
      qmemcpy(v7, &g_WOL_ConnectionFlags[3 * v5], sizeof(v7)); /*0x7810ee*/
      FormatWOLPlayerInfo(a1, v7); /*0x7810f2*/
      return (CampaignScore *)a1; /*0x7810ff*/
    }
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[14568], 0, g_Str_File_wonline_cpp, 3055); /*0x781113*/
  }
  WideString::Assign(a1, (CampaignScore *)StringCSF); /*0x78111b*/
  return (CampaignScore *)a1; /*0x7810fb*/
}


// ==== 0x00781130  FilterWOLGameListEntry  this=unknown  sig=csp ====
bool __fastcall FilterWOLGameListEntry(AbstractClass *aP0, int a2, int a3, int a4)
{
  if ( g_WOL_GameListRender != (ObjectClass *)2 ) /*0x781142*/
  {
    if ( g_WOL_GameListRender != (ObjectClass *)3 ) /*0x78114e*/
    {
LABEL_8:
      if ( g_WOL_GameListRender == (ObjectClass *)2 ) /*0x781164*/
        goto LABEL_9; /*0x781164*/
      if ( g_WOL_GameListRender != (ObjectClass *)3 ) /*0x781175*/
        goto LABEL_15; /*0x781175*/
LABEL_12:
      if ( a2 != 1 ) /*0x78117a*/
        return 0; /*0x78117a*/
      goto LABEL_13; /*0x78117a*/
    }
    if ( a2 ) /*0x781152*/
      goto LABEL_12; /*0x781152*/
LABEL_6:
    if ( (aP0->referenceCount & 0x100) != 0 ) /*0x781157*/
      return 1; /*0x78115e*/
    goto LABEL_8; /*0x781157*/
  }
  if ( a2 == 1 ) /*0x781147*/
    goto LABEL_6; /*0x781147*/
LABEL_9:
  if ( a2 ) /*0x781168*/
    return 0; /*0x78116f*/
LABEL_13:
  if ( (aP0->referenceCount & 0x100) == 0 ) /*0x78117f*/
    return 1; /*0x781186*/
LABEL_15:
  if ( g_WOL_GameListRender != (ObjectClass *)4 ) /*0x781194*/
  {
    if ( g_WOL_GameListRender != (ObjectClass *)5 ) /*0x7811a0*/
    {
LABEL_23:
      if ( g_WOL_GameListRender == (ObjectClass *)4 ) /*0x7811b9*/
        goto LABEL_24; /*0x7811b9*/
      if ( g_WOL_GameListRender != (ObjectClass *)5 ) /*0x7811ca*/
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
  if ( g_WOL_GameListRender != (ObjectClass *)6 ) /*0x7811e9*/
  {
    if ( g_WOL_GameListRender != (ObjectClass *)7 ) /*0x7811f5*/
    {
LABEL_38:
      if ( g_WOL_GameListRender == (ObjectClass *)6 ) /*0x78120b*/
        goto LABEL_39; /*0x78120b*/
      if ( g_WOL_GameListRender != (ObjectClass *)7 ) /*0x78121c*/
        goto LABEL_45; /*0x78121c*/
LABEL_42:
      if ( a2 != 1 ) /*0x781221*/
        return 0; /*0x781221*/
      goto LABEL_43; /*0x781221*/
    }
    if ( a2 ) /*0x7811f9*/
      goto LABEL_42; /*0x7811f9*/
LABEL_36:
    if ( ((int)aP0->NeedsSaveOrLink & 0x600) != 0 ) /*0x7811fe*/
      return 1; /*0x781205*/
    goto LABEL_38; /*0x7811fe*/
  }
  if ( a2 == 1 ) /*0x7811ee*/
    goto LABEL_36; /*0x7811ee*/
LABEL_39:
  if ( a2 ) /*0x78120f*/
    return 0; /*0x781216*/
LABEL_43:
  if ( ((int)aP0->NeedsSaveOrLink & 0x600) == 0 ) /*0x78122a*/
    return 1; /*0x781231*/
LABEL_45:
  if ( g_WOL_GameListRender != (ObjectClass *)8 ) /*0x781237*/
  {
    if ( g_WOL_GameListRender != (ObjectClass *)9 ) /*0x781243*/
    {
LABEL_52:
      if ( g_WOL_GameListRender == (ObjectClass *)8 ) /*0x78125b*/
        goto LABEL_53; /*0x78125b*/
      if ( g_WOL_GameListRender != (ObjectClass *)9 ) /*0x78126c*/
        goto LABEL_59; /*0x78126c*/
LABEL_56:
      if ( a2 != 1 ) /*0x781271*/
        return 0; /*0x781271*/
      goto LABEL_57; /*0x781271*/
    }
    if ( a2 ) /*0x781247*/
      goto LABEL_56; /*0x781247*/
LABEL_50:
    if ( aP0->abstractFlags ) /*0x781249*/
      return 1; /*0x781255*/
    goto LABEL_52; /*0x78124e*/
  }
  if ( a2 == 1 ) /*0x78123c*/
    goto LABEL_50; /*0x78123c*/
LABEL_53:
  if ( a2 ) /*0x78125f*/
    return 0; /*0x781266*/
LABEL_57:
  if ( !aP0->abstractFlags ) /*0x781277*/
    return 1; /*0x781283*/
LABEL_59:
  if ( g_WOL_GameListRender != (ObjectClass *)10 ) /*0x78128f*/
  {
    if ( g_WOL_GameListRender != (ObjectClass *)11 ) /*0x78129b*/
    {
LABEL_67:
      if ( g_WOL_GameListRender == (ObjectClass *)10 ) /*0x7812c0*/
        goto LABEL_68; /*0x7812c0*/
      if ( g_WOL_GameListRender != (ObjectClass *)11 ) /*0x7812d1*/
        goto LABEL_75; /*0x7812d1*/
LABEL_71:
      if ( a2 != 1 ) /*0x7812d6*/
        return 0; /*0x7812d6*/
      goto LABEL_72; /*0x7812d6*/
    }
    if ( a2 ) /*0x78129f*/
      goto LABEL_71; /*0x78129f*/
LABEL_64:
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 && ((int)aP0->NeedsSaveOrLink & 0x100) != 0 ) /*0x7812b3*/
      return 1; /*0x7812ba*/
    goto LABEL_67; /*0x7812b3*/
  }
  if ( a2 == 1 ) /*0x781294*/
    goto LABEL_64; /*0x781294*/
LABEL_68:
  if ( a2 ) /*0x7812c4*/
    return 0; /*0x7812cb*/
LABEL_72:
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 4 || ((int)aP0->NeedsSaveOrLink & 0x100) == 0 ) /*0x7812ee*/
    return 1; /*0x7812f5*/
LABEL_75:
  if ( g_WOL_GameListRender != (ObjectClass *)12 ) /*0x7812fb*/
  {
    if ( g_WOL_GameListRender != (ObjectClass *)13 ) /*0x781307*/
    {
LABEL_84:
      if ( g_WOL_GameListRender == (ObjectClass *)12 ) /*0x781333*/
        goto LABEL_85; /*0x781333*/
      if ( g_WOL_GameListRender != (ObjectClass *)13 ) /*0x781344*/
        return 0; /*0x781344*/
LABEL_88:
      if ( a2 != 1 ) /*0x78134d*/
        return 0; /*0x78134d*/
      return *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 /*0x78134d*/
          && (aP0->abstractFlags || ((int)aP0->NeedsSaveOrLink & 0x100) != 0);
    }
    if ( a2 ) /*0x78130b*/
      goto LABEL_88; /*0x78130b*/
LABEL_80:
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 4 /*0x781326*/
      || !aP0->abstractFlags && ((int)aP0->NeedsSaveOrLink & 0x100) == 0 )
    {
      return 1; /*0x78132d*/
    }
    goto LABEL_84; /*0x781326*/
  }
  if ( a2 == 1 ) /*0x781300*/
    goto LABEL_80; /*0x781300*/
LABEL_85:
  if ( a2 ) /*0x781337*/
    return 0; /*0x78133e*/
  return *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 /*0x781370*/
      && (aP0->abstractFlags || ((int)aP0->NeedsSaveOrLink & 0x100) != 0);
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
void __fastcall sub_7813E0(AbstractClass *Base, char a2)
{
  ObjectClass *v2; // edx
  AbstractClass *v3; // esi
  int v4; // eax
  int v5; // ebp
  int *v6; // ebx
  int v7; // ecx
  _DWORD v10[67]; // [esp+10h] [ebp-10Ch] BYREF

  v2 = g_WOL_ChatState; /*0x7813eb*/
  v3 = Base; /*0x7813f1*/
  v4 = 0; /*0x7813f9*/
  memset(v10, 0, sizeof(v10)); /*0x781405*/
  if ( (int)g_WOL_ChatState > 0 ) /*0x781407*/
  {
    v5 = 0; /*0x78140b*/
    v6 = (int *)Base; /*0x78140d*/
    do /*0x781448*/
    {
      if ( v5 >= 0 && v4 < (int)g_WOL_ChatState ) /*0x781419*/
      {
        qmemcpy(v10, (char *)g_WOL_ConnectionHandler + v5, sizeof(v10)); /*0x78142d*/
        v3 = Base; /*0x78142f*/
      }
      v7 = v10[10]; /*0x781433*/
      *v6 = v4; /*0x781437*/
      v6[1] = v7; /*0x781439*/
      ++v4; /*0x78143c*/
      v5 += 268; /*0x78143d*/
      v6 += 2; /*0x781443*/
    }
    while ( v4 < (int)v2 ); /*0x781448*/
  }
  if ( a2 ) /*0x781452*/
    qsort(v3, (IUnknown *)v2, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_781380); /*0x781459*/
  else
    qsort(v3, (IUnknown *)v2, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_7813B0); /*0x781464*/
}


// ==== 0x00781480  ObjectClass::GameListRenderWOL  this=ObjectClass  sig=csp ====
void __usercall GameListRenderWOL(CampaignScore *a1@<edi>)
{
  HWND v1; // eax
  int v2; // ebx
  ObjectClass *DlgItem; // esi
  LRESULT v4; // eax
  LRESULT eax5; // eax
  AbstractClass *v5; // edx
  IUnknown *v7; // ebp
  int v8; // eax
  int ecx26; // ecx
  AbstractClass *v9; // esi
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int ebx40; // ebx
  CampaignScore *v15; // edi
  BOOL v17; // eax
  CampaignScore *v18; // ebp
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
  CampaignScore *v38; // [esp-8h] [ebp-2A4h]
  int v39; // [esp+Ch] [ebp-290h] BYREF
  LPARAM v40; // [esp+10h] [ebp-28Ch] BYREF
  void *v41; // [esp+14h] [ebp-288h] BYREF
  void *v42; // [esp+18h] [ebp-284h] BYREF
  int var280; // [esp+1Ch] [ebp-280h]
  int v44; // [esp+20h] [ebp-27Ch]
  ObjectClass *v43; // [esp+24h] [ebp-278h]
  AbstractClass *i; // [esp+28h] [ebp-274h]
  int v47; // [esp+2Ch] [ebp-270h] BYREF
  AbstractClass *v46; // [esp+30h] [ebp-26Ch] BYREF
  HWND hWnd; // [esp+34h] [ebp-268h]
  ObjectClass *v50; // [esp+38h] [ebp-264h]
  void *Base; // [esp+3Ch] [ebp-260h]
  int v52; // [esp+40h] [ebp-25Ch]
  AbstractClass *v53; // [esp+44h] [ebp-258h]
  void *v54; // [esp+48h] [ebp-254h] BYREF
  LPARAM v55; // [esp+4Ch] [ebp-250h]
  void *a2; // [esp+50h] [ebp-24Ch] BYREF
  int v57; // [esp+54h] [ebp-248h]
  int v58; // [esp+58h] [ebp-244h]
  int v59; // [esp+5Ch] [ebp-240h] BYREF
  int v60; // [esp+60h] [ebp-23Ch] BYREF
  int v61; // [esp+64h] [ebp-238h] BYREF
  HWND hDlg; // [esp+68h] [ebp-234h]
  _BYTE aP0[268]; // [esp+6Ch] [ebp-230h] BYREF
  wchar_t Buffer[80]; // [esp+178h] [ebp-124h] BYREF
  char Destination[132]; // [esp+218h] [ebp-84h] BYREF

  v1 = (HWND)Dialog::FindByHandle((void *)0x113); /*0x78148d*/
  v2 = 0; /*0x781492*/
  hDlg = v1; /*0x781494*/
  if ( !v1 ) /*0x78149a*/
    return; /*0x78149a*/
  DlgItem = (ObjectClass *)GetDlgItem(v1, 1774); /*0x7814ac*/
  hWnd = (HWND)DlgItem; /*0x7814b0*/
  if ( !DlgItem ) /*0x7814b4*/
    return; /*0x7814b4*/
  v38 = a1; /*0x7814bb*/
  unknown_libname_73(&a2); /*0x7814c0*/
  v4 = SendMessageA((HWND)DlgItem, 0x188u, 0, 0); /*0x7814d3*/
  if ( v4 != -1 ) /*0x7814d8*/
    GetListBoxItemText(DlgItem, v4, &a2); /*0x7814e3*/
  unknown_libname_73(&v54); /*0x7814ec*/
  eax5 = SendMessageA((HWND)DlgItem, 0x18Eu, 0, 0); /*0x7814f9*/
  if ( eax5 != -1 ) /*0x7814fe*/
    GetListBoxItemText(DlgItem, eax5, &v54); /*0x781509*/
  SendMessageA((HWND)DlgItem, 0x49Du, 0, 1); /*0x781517*/
  byte_B77E74 = 1; /*0x781519*/
  SendMessageA((HWND)DlgItem, 0x184u, 0, 0); /*0x781528*/
  v50 = g_WOL_ChatState; /*0x781538*/
  v57 = 1; /*0x78153c*/
  if ( g_WOL_GameListRender == (ObjectClass *)2 /*0x78157b*/
    || g_WOL_GameListRender == (ObjectClass *)3
    || g_WOL_GameListRender == (ObjectClass *)8
    || g_WOL_GameListRender == (ObjectClass *)9
    || g_WOL_GameListRender == (ObjectClass *)10
    || g_WOL_GameListRender == (ObjectClass *)11
    || g_WOL_GameListRender == (ObjectClass *)6
    || g_WOL_GameListRender == (ObjectClass *)7
    || g_WOL_GameListRender == (ObjectClass *)4
    || g_WOL_GameListRender == (ObjectClass *)5
    || g_WOL_GameListRender == (ObjectClass *)12
    || g_WOL_GameListRender == (ObjectClass *)13 )
  {
    v57 = 2; /*0x78157d*/
  }
  v5 = (AbstractClass *)__2_YAPAXI_Z(8 * (_DWORD)g_WOL_ChatState); /*0x781592*/
  Base = v5; /*0x781599*/
  if ( v5 ) /*0x78159d*/
  {
    if ( g_WOL_GameListRender == (ObjectClass *)15 ) /*0x781649*/
    {
      v7 = (IUnknown *)g_WOL_ChatState; /*0x78164f*/
      v13 = 0; /*0x78165a*/
      memset(aP0, 0, sizeof(aP0)); /*0x781662*/
      if ( (int)g_WOL_ChatState > 0 ) /*0x781664*/
      {
        do /*0x78169e*/
        {
          if ( v2 >= 0 && v13 < (int)g_WOL_ChatState ) /*0x781670*/
            qmemcpy(aP0, (char *)g_WOL_ConnectionHandler + v2, sizeof(aP0)); /*0x781684*/
          v14 = *(_DWORD *)&aP0[40]; /*0x781686*/
          *(_DWORD *)v5->__pad_0 = v13; /*0x78168d*/
          *(_DWORD *)&v5->__pad_0[4] = v14; /*0x78168f*/
          ++v13; /*0x781692*/
          v2 += 268; /*0x781693*/
          v5 = (AbstractClass *)((char *)v5 + 8); /*0x781699*/
        }
        while ( v13 < (int)v7 ); /*0x78169e*/
      }
      v33 = (int (__cdecl *)(const void *, const void *))sub_7813B0; /*0x7816a0*/
      goto LABEL_28; /*0x7816a5*/
    }
  }
  else
  {
    g_WOL_GameListRender = 0; /*0x7815a3*/
  }
  v7 = (IUnknown *)g_WOL_ChatState; /*0x7815a9*/
  v8 = 0; /*0x7815b4*/
  memset(aP0, 0, sizeof(aP0)); /*0x7815bc*/
  if ( (int)g_WOL_ChatState > 0 ) /*0x7815be*/
  {
    do /*0x7815f8*/
    {
      if ( v2 >= 0 && v8 < (int)g_WOL_ChatState ) /*0x7815ca*/
        qmemcpy(aP0, (char *)g_WOL_ConnectionHandler + v2, sizeof(aP0)); /*0x7815de*/
      ecx26 = *(_DWORD *)&aP0[40]; /*0x7815e0*/
      *(_DWORD *)v5->__pad_0 = v8; /*0x7815e7*/
      *(_DWORD *)&v5->__pad_0[4] = ecx26; /*0x7815e9*/
      ++v8; /*0x7815ec*/
      v2 += 268; /*0x7815ed*/
      v5 = (AbstractClass *)((char *)v5 + 8); /*0x7815f3*/
    }
    while ( v8 < (int)v7 ); /*0x7815f8*/
  }
  v33 = (int (__cdecl *)(const void *, const void *))sub_781380; /*0x7815fa*/
LABEL_28:
  v9 = (AbstractClass *)Base; /*0x7815ff*/
  qsort((AbstractClass *)Base, v7, 8u, v33); /*0x781607*/
  v11 = v57; /*0x78160c*/
  v12 = (int)v50; /*0x781610*/
  for ( i = 0; (int)i < 2; i = (AbstractClass *)((char *)i + 1) ) /*0x781619*/
  {
    v52 = 0; /*0x78161f*/
    if ( v11 <= 0 ) /*0x781623*/
      continue; /*0x781623*/
    do /*0x781bff*/
    {
      v55 = 0; /*0x78162b*/
      if ( v12 <= 0 ) /*0x78162f*/
        goto LABEL_100; /*0x78162f*/
      v53 = v9; /*0x781638*/
      v58 = v12 - 1; /*0x78163c*/
      while ( 1 ) /*0x7816b0*/
      {
        ebx40 = v55; /*0x7816b0*/
        memset(aP0, 0, sizeof(aP0)); /*0x7816bf*/
        if ( g_WOL_GameListRender == (ObjectClass *)1 ) /*0x7816c9*/
        {
          ebx40 = v58; /*0x7816e1*/
        }
        else if ( g_WOL_GameListRender && *(int *)v53->__pad_0 >= 0 && *(_DWORD *)v53->__pad_0 < v12 ) /*0x7816db*/
        {
          ebx40 = *(_DWORD *)v53->__pad_0; /*0x7816dd*/
        }
        if ( ebx40 >= 0 && ebx40 < (int)g_WOL_ChatState ) /*0x7816ef*/
          qmemcpy(aP0, (char *)g_WOL_ConnectionHandler + 268 * ebx40, sizeof(aP0)); /*0x78170d*/
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 4 /*0x78173a*/
          || (*(_WORD *)&aP0[32] & 0x800) == 0 && (*(_WORD *)&aP0[32] & 0x1000) == 0 )
        {
          strncpy(Destination, &aP0[224], (IUnknown *)0x80); /*0x781757*/
          v61 = 0; /*0x781763*/
          v60 = 0; /*0x781767*/
          v59 = 0; /*0x78176b*/
          v47 = 0; /*0x78176f*/
          v46 = 0; /*0x781773*/
          unknown_libname_73(&v39); /*0x781777*/
          ParseStringCommaInts(Destination, &v61, &v60, &v59, &v47, (int *)&v46, (void **)&v39); /*0x7817a3*/
          v15 = (CampaignScore *)(v59 + *(_DWORD *)&aP0[12] - v47); /*0x7817b9*/
          v17 = v47 || v46; /*0x7817cb*/
          v18 = (CampaignScore *)(*(_DWORD *)&aP0[8] - v17); /*0x7817d4*/
          if ( *(&g_MatrixTransformState + 2222) ) /*0x7817dd*/
          {
            if ( !v46 || v47 ) /*0x7817e5*/
            {
              if ( i != (AbstractClass *)1 ) /*0x7817f9*/
                goto LABEL_97; /*0x7817f9*/
            }
            else if ( i ) /*0x7817ed*/
            {
              goto LABEL_97; /*0x7817ed*/
            }
LABEL_67:
            if ( !FilterWOLGameListEntry((AbstractClass *)aP0, v52, (int)v46, v47) ) /*0x781824*/
            {
              swprintf(Buffer, (const size_t)aHsDD, (const wchar_t *const)&aP0[52], v15); /*0x781848*/
              v19 = SendMessageA(hWnd, 0x4C7u, 0xFFFFFFFF, (LPARAM)&aP0[52]); /*0x781864*/
              v20 = v19; /*0x78186a*/
              SendMessageA(hWnd, 0x19Au, v19, ebx40); /*0x781878*/
              Gadget::InitProperties(&v40); /*0x781882*/
              v40 = 1; /*0x781893*/
              WideString::Reassign(&v41, Buffer); /*0x78189b*/
              WideString::Reassign(&v42, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x7818a9*/
              var280 = -1; /*0x7818bb*/
              if ( *(&g_MatrixTransformState + 2222) ) /*0x7818bf*/
              {
                if ( !v46 || v47 ) /*0x7818cf*/
                  var280 = (int)&unk_808080; /*0x7818d7*/
              }
              else if ( v15 == v18 ) /*0x7818df*/
              {
                var280 = (int)&unk_808080; /*0x7818e6*/
              }
              v21 = hWnd; /*0x7818f0*/
              v22 = v20 << 16; /*0x781900*/
              SendMessageA(hWnd, 0x4A8u, v22 | (unsigned __int16)dword_B77A8C, (LPARAM)&v40); /*0x781917*/
              v40 = 0; /*0x781924*/
              WideString::Reassign(&v42, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x781928*/
              v40 = 2; /*0x781931*/
              WideString::Reassign(&v42, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x78193e*/
              if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 4 ) /*0x78194a*/
                goto LABEL_80; /*0x78194a*/
              if ( (aP0[33] & 1) != 0 ) /*0x78195c*/
              {
                v44 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[736], 0); /*0x78197f*/
                StringCSF = GetStringCSF(aTxtBattleclanG, 0, (CampaignScore *)g_Str_File_wonline_cpp, 3351); /*0x781988*/
                WideString::Reassign(&v42, StringCSF); /*0x781989*/
                goto LABEL_81; /*0x781989*/
              }
              if ( *(_DWORD *)&aP0[20] || (aP0[33] & 1) != 0 ) /*0x781996*/
              {
                v44 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[788], 0); /*0x7819b9*/
                v35 = GetStringCSF(aTxtTournamentG, 0, (CampaignScore *)g_Str_File_wonline_cpp, 3356); /*0x7819c2*/
                WideString::Reassign(&v42, v35); /*0x7819c3*/
              }
              else
              {
LABEL_80:
                v44 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[692], 0); /*0x7819d5*/
                WideString::Reassign(&v42, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x7819e2*/
              }
LABEL_81:
              SendMessageA(v21, 0x4A8u, v22 | (unsigned __int16)dword_B778D0, (LPARAM)&v40); /*0x7819e7*/
              v40 = 2; /*0x781a07*/
              WideString::Reassign(&v42, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x781a14*/
              if ( (aP0[29] & 1) != 0 ) /*0x781a23*/
              {
                v44 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[748], 0); /*0x781a46*/
                v36 = GetStringCSF(aTxtGamePasswor, 0, (CampaignScore *)g_Str_File_wonline_cpp, 3370); /*0x781a4f*/
                WideString::Reassign(&v42, v36); /*0x781a50*/
              }
              else
              {
                v40 = 0; /*0x781a52*/
                WideString::Reassign(&v42, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x781a5f*/
              }
              SendMessageA(v21, 0x4A8u, v22 | (unsigned __int16)dword_B778CC, (LPARAM)&v40); /*0x781a7c*/
              v40 = 0; /*0x781a82*/
              WideString::Reassign(&v41, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x781a8b*/
              WideString::Reassign(&v42, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x781a99*/
              if ( (aP0[33] & 6) != 0 ) /*0x781aac*/
              {
                if ( v47 || !v46 ) /*0x781ab6*/
                {
                  v40 = 2; /*0x781ac9*/
                  v23 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_566C[136], 0); /*0x781ad6*/
                }
                else
                {
                  v40 = 2; /*0x781ab9*/
                  v23 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[720], 0); /*0x781ac6*/
                }
LABEL_92:
                v44 = v23; /*0x781afa*/
              }
              else if ( !v47 && v46 ) /*0x781ae0*/
              {
                v40 = 2; /*0x781ae3*/
                v23 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_14B0[780], 0); /*0x781af5*/
                goto LABEL_92; /*0x781af5*/
              }
              SendMessageA(v21, 0x4A8u, v22 | (unsigned __int16)dword_B76AF4, (LPARAM)&v40); /*0x781b18*/
              v24 = *(const wchar_t **)&aP0[40]; /*0x781b1a*/
              if ( *(_DWORD *)&aP0[40] == -1 ) /*0x781b24*/
              {
                v40 = 1; /*0x781b2f*/
                WideString::Reassign(&v41, asc_84A6E0); /*0x781b37*/
                v24 = *(const wchar_t **)&aP0[40]; /*0x781b3c*/
              }
              else
              {
                v43 = *(ObjectClass **)&aP0[40]; /*0x781b45*/
                v40 = 3; /*0x781b49*/
              }
              v37 = v24; /*0x781b51*/
              v25 = GetStringCSF( /*0x781b63*/
                      (wchar_t *)&stru_84A684.CCINIClass_field_4C,
                      0,
                      (CampaignScore *)g_Str_File_wonline_cpp,
                      3410);
              swprintf(Buffer, (const size_t)v25, v37, v38); /*0x781b71*/
              WideString::Reassign(&v42, Buffer); /*0x781b85*/
              SendMessageA(v21, 0x4A8u, v22 | (unsigned __int16)dword_B7643C, (LPARAM)&v40); /*0x781ba2*/
              DeleteAndZero::Alt(&v42); /*0x781ba8*/
              DeleteAndZero::Alt(&v41); /*0x781bb1*/
            }
          }
          else
          {
            if ( v15 == v18 ) /*0x781806*/
            {
              if ( i != (AbstractClass *)1 ) /*0x78180b*/
                goto LABEL_97; /*0x78180b*/
              goto LABEL_67; /*0x78180b*/
            }
            if ( !i ) /*0x781814*/
              goto LABEL_67; /*0x781814*/
          }
LABEL_97:
          DeleteAndZero((int)&v39); /*0x781bb6*/
        }
        v26 = ++v55 < (int)v50; /*0x781bd4*/
        v53 = (AbstractClass *)((char *)v53 + 8); /*0x781bda*/
        --v58; /*0x781bde*/
        if ( !v26 ) /*0x781be2*/
          break; /*0x781be2*/
        v12 = (int)v50; /*0x7816aa*/
      }
      v11 = v57; /*0x781be8*/
      v9 = (AbstractClass *)Base; /*0x781bec*/
      v12 = (int)v50; /*0x781bf0*/
LABEL_100:
      ++v52; /*0x781bf4*/
    }
    while ( v52 < v11 ); /*0x781bff*/
  }
  if ( v9 ) /*0x781c19*/
    __3_YAXPAX_Z(v9); /*0x781c1c*/
  v27 = String::GetOrEmpty_Alt((char **)&a2); /*0x781c28*/
  v28 = hWnd; /*0x781c2d*/
  v29 = SendMessageA(hWnd, 0x4C5u, 0, (LPARAM)v27); /*0x781c3f*/
  SendMessageA(v28, 0x186u, v29, 0); /*0x781c49*/
  v30 = String::GetOrEmpty_Alt((char **)&v54); /*0x781c4f*/
  v31 = SendMessageA(v28, 0x4C5u, 0, (LPARAM)v30); /*0x781c5c*/
  if ( v31 != -1 ) /*0x781c61*/
    SendMessageA(v28, 0x197u, v31, 0); /*0x781c6b*/
  SendMessageA(v28, 0x49Du, 0, 0); /*0x781c75*/
  InvalidateRect(v28, 0, 0); /*0x781c7a*/
  if ( hDlg == Dialog::GetCurrent() ) /*0x781c8d*/
  {
    v32 = GetDlgItem(hDlg, 1344); /*0x781c95*/
    SetFocus(v32); /*0x781c9c*/
  }
  DeleteAndZero((int)&v54); /*0x781ca6*/
  DeleteAndZero((int)&a2); /*0x781caf*/
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
int __cdecl sub_781CF0(const void *a1, const void **a2)
{
  const void *v2; // eax
  int v3; // eax

  v2 = (const void *)*((_DWORD *)a1 + 2); /*0x781cf9*/
  if ( v2 == a2[2] ) /*0x781d02*/
    return _strcmpi(a2[1], *((const void **)a1 + 1)); /*0x781d14*/
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

  v1 = g_WOL_State; /*0x781d29*/
  v2 = 0; /*0x781d30*/
  v16[0] = 0; /*0x781d3d*/
  v16[1] = 0; /*0x781d41*/
  Block = 0; /*0x781d45*/
  v18 = g_WOL_State; /*0x781d49*/
  v3 = (int *)__2_YAPAXI_Z(12 * g_WOL_State); /*0x781d52*/
  v19 = v3; /*0x781d59*/
  if ( v3 ) /*0x781d5d*/
  {
    v4 = 0; /*0x781d80*/
    memset(v20, 0, sizeof(v20)); /*0x781d88*/
    if ( v1 <= 0 ) /*0x781d8a*/
    {
LABEL_12:
      g_WOL_State = 0; /*0x781e34*/
      if ( a1 ) /*0x781e40*/
        qsort(v3, v1, 0xCu, (_CoreCrtNonSecureSearchSortCompareFunction)sub_781CC0); /*0x781e47*/
      else
        qsort(v3, v1, 0xCu, sub_781CF0); /*0x781e72*/
      if ( v1 > 0 ) /*0x781e7c*/
      {
        v7 = g_WOL_State; /*0x781e82*/
        v15 = v1; /*0x781e88*/
        do /*0x781f5d*/
        {
          v8 = *v3; /*0x781e90*/
          if ( *v3 >= 0 && v8 < v16[0] ) /*0x781e9b*/
            qmemcpy(v20, (char *)Block + 108 * v8, sizeof(v20)); /*0x781eb3*/
          v9 = v7; /*0x781eb5*/
          if ( v7 >= g_WOL_StateFlags ) /*0x781ec1*/
          {
            DynamicArray::Grow(&g_WOL_State); /*0x781ec8*/
            v7 = g_WOL_State; /*0x781ecd*/
          }
          if ( v7 >= g_WOL_StateFlags ) /*0x781ed9*/
          {
            DynamicArray::Grow(&g_WOL_State); /*0x781ee0*/
            v7 = g_WOL_State; /*0x781ee5*/
          }
          if ( v9 < v7 ) /*0x781eed*/
          {
            memcpy( /*0x781f18*/
              (char *)g_WOL_ConnectionFlags + 108 * v9 + 108,
              (char *)g_WOL_ConnectionFlags + 108 * v9,
              108 * v7 - 108 * v9);
            v7 = g_WOL_State; /*0x781f1d*/
          }
          v10 = (char *)g_WOL_ConnectionFlags + 108 * v9; /*0x781f32*/
          if ( v10 ) /*0x781f37*/
          {
            qmemcpy(v10, v20, 0x6Cu); /*0x781f42*/
            v7 = g_WOL_State; /*0x781f44*/
          }
          ++v7; /*0x781f4e*/
          v3 += 3; /*0x781f4f*/
          v11 = v15 == 1; /*0x781f52*/
          g_WOL_State = v7; /*0x781f53*/
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
        if ( v4 >= 0 && v2 < (int)g_WOL_State ) /*0x781da7*/
          qmemcpy(v20, (char *)g_WOL_ConnectionFlags + v4, sizeof(v20)); /*0x781dbb*/
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


// ==== 0x00781FB0  InsertGameSettings  this=unknown  sig=csp ====
char __fastcall InsertGameSettings(_BYTE *a1, char a2)
{
  _BYTE *v2; // ebp
  int v3; // edx
  char result; // al
  int v5; // ebx
  AbstractClass *v6; // ebp
  signed int v7; // ebp
  int v8; // esi
  int v9; // esi
  int v10; // esi
  AbstractClass *v11; // edi
  signed int v12; // ebp
  int v13; // ebx
  int v14; // ebx
  int v15; // esi
  int v16; // esi
  signed int v19; // [esp+18h] [ebp-70h]
  _BYTE v20[108]; // [esp+1Ch] [ebp-6Ch] BYREF

  v2 = a1; /*0x781fb6*/
  v3 = g_WOL_State; /*0x781fbd*/
  memset(v20, 0, sizeof(v20)); /*0x781fce*/
  v19 = g_WOL_State; /*0x781fd8*/
  if ( !g_WOL_State ) /*0x781fdc*/
    return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, 0); /*0x781ff1*/
  v5 = 0; /*0x781ff2*/
  if ( (int)g_WOL_State > 0 ) /*0x781ff6*/
    qmemcpy(v20, g_WOL_ConnectionFlags, sizeof(v20)); /*0x782007*/
  if ( (v20[0] & 1) != 0 ) /*0x78200e*/
  {
    v6 = g_WOL_ConnectionFlags; /*0x782010*/
    do /*0x782038*/
    {
      if ( v5 >= (int)g_WOL_State ) /*0x782018*/
        break; /*0x782018*/
      ++v5; /*0x78201a*/
      v6 += 3; /*0x78201b*/
      if ( v5 >= 0 && v5 < (int)g_WOL_State ) /*0x782024*/
        qmemcpy(v20, v6, sizeof(v20)); /*0x782031*/
    }
    while ( (v20[0] & 1) != 0 ); /*0x782038*/
    v2 = a1; /*0x78203a*/
  }
  if ( (*v2 & 1) != 0 ) /*0x782042*/
  {
    v7 = 0; /*0x782048*/
    if ( (int)g_WOL_State > 0 ) /*0x78204c*/
      qmemcpy(v20, g_WOL_ConnectionFlags, sizeof(v20)); /*0x78205d*/
    if ( a2 ) /*0x782065*/
    {
      if ( v5 <= 0 ) /*0x782069*/
        goto LABEL_34; /*0x782069*/
      v8 = 0; /*0x78206f*/
      while ( _strcmpi(&v20[36], a1 + 36) < 0 ) /*0x782088*/
      {
        v3 = g_WOL_State; /*0x78208a*/
        ++v7; /*0x782090*/
        v8 += 3; /*0x782091*/
        if ( v8 >= 0 && v7 < (int)g_WOL_State ) /*0x78209c*/
          qmemcpy(v20, &g_WOL_ConnectionFlags[v8], sizeof(v20)); /*0x7820ae*/
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
        v3 = g_WOL_State; /*0x7820d9*/
        ++v7; /*0x7820df*/
        v9 += 3; /*0x7820e0*/
        if ( v9 >= 0 && v7 < (int)g_WOL_State ) /*0x7820eb*/
          qmemcpy(v20, &g_WOL_ConnectionFlags[v9], sizeof(v20)); /*0x7820fd*/
        if ( v7 >= v5 ) /*0x782105*/
          goto LABEL_34; /*0x782105*/
      }
    }
    v3 = g_WOL_State; /*0x782109*/
LABEL_34:
    v10 = v7; /*0x78210f*/
    if ( v7 > v3 ) /*0x782113*/
      v10 = v3; /*0x782115*/
    if ( v10 >= g_WOL_StateFlags ) /*0x78211d*/
    {
      DynamicArray::Grow(&g_WOL_State); /*0x782124*/
      v3 = g_WOL_State; /*0x782129*/
    }
    if ( v3 >= g_WOL_StateFlags ) /*0x782135*/
    {
      DynamicArray::Grow(&g_WOL_State); /*0x78213c*/
      v3 = g_WOL_State; /*0x782141*/
    }
    if ( v10 < v3 ) /*0x782149*/
    {
      memcpy(&g_WOL_ConnectionFlags[3 * v10 + 3], &g_WOL_ConnectionFlags[3 * v10], 108 * v3 - 108 * v10); /*0x782174*/
      v3 = g_WOL_State; /*0x782179*/
    }
    result = (char)g_WOL_ConnectionFlags; /*0x782182*/
    v11 = &g_WOL_ConnectionFlags[3 * v10]; /*0x78218d*/
    if ( !v11 ) /*0x782192*/
      goto LABEL_75; /*0x782192*/
    goto LABEL_74; /*0x782192*/
  }
  v12 = v5; /*0x78219f*/
  if ( v5 >= 0 && v5 < (int)g_WOL_State ) /*0x7821a5*/
    qmemcpy(v20, &g_WOL_ConnectionFlags[3 * v5], sizeof(v20)); /*0x7821bf*/
  if ( a2 ) /*0x7821c7*/
  {
    if ( v5 >= (int)g_WOL_State ) /*0x7821cb*/
      goto LABEL_65; /*0x7821cb*/
    v13 = 3 * v5; /*0x7821d7*/
    while ( _strcmpi(&v20[36], a1 + 36) < 0 ) /*0x7821f1*/
    {
      v3 = g_WOL_State; /*0x7821f3*/
      ++v12; /*0x7821f9*/
      v13 += 3; /*0x7821fa*/
      if ( v13 >= 0 && v12 < (int)g_WOL_State ) /*0x782201*/
        qmemcpy(v20, &g_WOL_ConnectionFlags[v13], sizeof(v20)); /*0x782215*/
      if ( v12 >= v19 ) /*0x78221b*/
        goto LABEL_65; /*0x78221b*/
    }
  }
  else
  {
    if ( v5 >= (int)g_WOL_State ) /*0x782221*/
      goto LABEL_65; /*0x782221*/
    v14 = 3 * v5; /*0x782229*/
    while ( _strcmpi(&v20[36], a1 + 36) > 0 ) /*0x782243*/
    {
      v3 = g_WOL_State; /*0x782245*/
      ++v12; /*0x78224b*/
      v14 += 3; /*0x78224c*/
      if ( v14 >= 0 && v12 < (int)g_WOL_State ) /*0x782253*/
        qmemcpy(v20, &g_WOL_ConnectionFlags[v14], sizeof(v20)); /*0x782267*/
      if ( v12 >= v19 ) /*0x78226d*/
        goto LABEL_65; /*0x78226d*/
    }
  }
  v3 = g_WOL_State; /*0x782271*/
LABEL_65:
  v15 = v12; /*0x782277*/
  if ( v12 > v3 ) /*0x78227b*/
    v15 = v3; /*0x78227d*/
  if ( v15 >= g_WOL_StateFlags ) /*0x782285*/
  {
    DynamicArray::Grow(&g_WOL_State); /*0x78228c*/
    v3 = g_WOL_State; /*0x782291*/
  }
  if ( v3 >= g_WOL_StateFlags ) /*0x78229d*/
  {
    DynamicArray::Grow(&g_WOL_State); /*0x7822a4*/
    v3 = g_WOL_State; /*0x7822a9*/
  }
  if ( v15 < v3 ) /*0x7822b1*/
  {
    memcpy(&g_WOL_ConnectionFlags[3 * v15 + 3], &g_WOL_ConnectionFlags[3 * v15], 108 * v3 - 108 * v15); /*0x7822dc*/
    v3 = g_WOL_State; /*0x7822e1*/
  }
  v16 = 3 * v15; /*0x7822f0*/
  result = 9 * v16; /*0x7822f3*/
  v11 = &g_WOL_ConnectionFlags[v16]; /*0x7822f6*/
  if ( !v11 ) /*0x7822fb*/
    goto LABEL_75; /*0x7822fb*/
LABEL_74:
  qmemcpy(v11, a1, 0x6Cu); /*0x7822fd*/
  v3 = g_WOL_State; /*0x782308*/
LABEL_75:
  g_WOL_State = v3 + 1; /*0x78230e*/
  return result; /*0x781fea*/
}


// ==== 0x00782320  InsertBuddyList  this=unknown  sig=csp ====
void __fastcall InsertBuddyList(char *a1, char a2)
{
  ObjectClass *v4; // eax
  ObjectClass *v5; // esi
  char *v6; // ecx
  int v7; // edi
  int v8; // ebx
  int v9; // ebp
  bool v10; // sf
  _DWORD *v11; // esi
  ObjectClass *v12; // esi
  char *v13; // esi
  int v14; // eax
  int v15; // ebx
  int v16; // ebp
  _DWORD *v17; // esi
  ObjectClass *v18; // esi
  char *v19; // esi
  int v20; // ebp
  int v21; // ebx
  _DWORD *v22; // esi
  ObjectClass *v23; // esi
  char *v24; // esi
  _DWORD *v25; // esi
  int v26; // edi
  ObjectClass *v27; // esi
  char *v28; // esi
  int v29; // ebx
  int v30; // ebp
  _DWORD *v31; // esi
  ObjectClass *v32; // esi
  char *v33; // esi
  int v34; // eax
  int v35; // ebp
  _DWORD *v36; // esi
  ObjectClass *v37; // esi
  char *v38; // esi
  int v39; // ebp
  _DWORD *v40; // esi
  ObjectClass *v41; // esi
  char *v42; // esi
  int v43; // esi
  int v44; // ecx
  AbstractClass *v45; // edi
  void *v46; // [esp+10h] [ebp-F0h] BYREF
  int v47; // [esp+14h] [ebp-ECh]
  ObjectClass *v48; // [esp+18h] [ebp-E8h]
  ObjectClass *v49; // [esp+1Ch] [ebp-E4h] BYREF
  int v50; // [esp+20h] [ebp-E0h]
  char *v51; // [esp+24h] [ebp-DCh]
  _BYTE v52[108]; // [esp+28h] [ebp-D8h] BYREF
  _DWORD v53[27]; // [esp+94h] [ebp-6Ch] BYREF

  v51 = a1; /*0x782332*/
  unknown_libname_73(&v46); /*0x782336*/
  v50 = -1; /*0x782349*/
  memset(v53, 0, sizeof(v53)); /*0x782351*/
  String::Assign_Bool(&v46, a1 + 36); /*0x78235b*/
  String::ToLower((const char **)&v46); /*0x782364*/
  if ( g_WOL_HashTable ) /*0x782371*/
  {
    v49 = 0; /*0x78237d*/
    if ( HashTable::LookupString((_DWORD *)g_WOL_HashTable, (const char **)&v46, &v49) ) /*0x782385*/
    {
      if ( v49 ) /*0x782394*/
        qmemcpy(v53, v49, sizeof(v53)); /*0x7823a2*/
      v50 = v53[7]; /*0x7823ab*/
    }
  }
  memset(v52, 0, sizeof(v52)); /*0x7823c0*/
  v49 = (ObjectClass *)g_WOL_State; /*0x7823c6*/
  if ( g_WOL_State ) /*0x7823ca*/
  {
    v48 = 0; /*0x7823e3*/
    if ( (int)g_WOL_State > 0 ) /*0x7823ed*/
      qmemcpy(v52, g_WOL_ConnectionFlags, sizeof(v52)); /*0x7823fa*/
    if ( (v52[0] & 1) != 0 ) /*0x782401*/
    {
      v4 = (ObjectClass *)g_WOL_ConnectionFlags; /*0x782403*/
      do /*0x782435*/
      {
        v5 = v48; /*0x782409*/
        if ( (int)v48 >= (int)v49 ) /*0x78240f*/
          break; /*0x78240f*/
        v4 = (ObjectClass *)((char *)v4 + 108); /*0x782413*/
        v6 = &v48->__pad_0[1]; /*0x782416*/
        v48 = (ObjectClass *)((char *)v48 + 1); /*0x782419*/
        if ( (int)&v5->__pad_0[1] >= 0 && (int)v6 < (int)g_WOL_State ) /*0x782421*/
          qmemcpy(v52, v4, sizeof(v52)); /*0x78242e*/
      }
      while ( (v52[0] & 1) != 0 ); /*0x782435*/
    }
    if ( (*v51 & 1) != 0 ) /*0x78243e*/
    {
      v47 = 0; /*0x782446*/
      if ( (int)g_WOL_State > 0 ) /*0x78244e*/
        qmemcpy(v52, g_WOL_ConnectionFlags, sizeof(v52)); /*0x78245b*/
      String::Assign_Bool(&v46, &v52[36]); /*0x782466*/
      String::ToLower((const char **)&v46); /*0x78246f*/
      v7 = -1; /*0x78247a*/
      if ( g_WOL_HashTable ) /*0x78247f*/
      {
        v49 = 0; /*0x78248b*/
        if ( HashTable::LookupString((_DWORD *)g_WOL_HashTable, (const char **)&v46, &v49) ) /*0x782493*/
        {
          if ( v49 ) /*0x7824a2*/
            qmemcpy(v53, v49, sizeof(v53)); /*0x7824b0*/
          v7 = v53[7]; /*0x7824b2*/
        }
      }
      if ( a2 ) /*0x7824bf*/
      {
        if ( (int)v48 > 0 ) /*0x7824c7*/
        {
          v8 = v47; /*0x7824cd*/
          v9 = 0; /*0x7824d1*/
          do /*0x782597*/
          {
            if ( v7 >= v50 || v7 <= 0 ) /*0x7824db*/
            {
              if ( v50 != -1 || v7 <= 0 ) /*0x7824ea*/
                goto LABEL_69; /*0x7824ea*/
              v8 = v47; /*0x7824f0*/
            }
            ++v8; /*0x7824f4*/
            v10 = v9 * 36 + 108 < 0; /*0x7824f5*/
            v9 += 3; /*0x7824f5*/
            v47 = v8; /*0x7824f8*/
            if ( !v10 && v8 < (int)g_WOL_State ) /*0x782504*/
              qmemcpy(v52, &g_WOL_ConnectionFlags[v9], sizeof(v52)); /*0x782518*/
            String::Assign_Bool(&v46, &v52[36]); /*0x782523*/
            String::ToLower((const char **)&v46); /*0x78252c*/
            v11 = (_DWORD *)g_WOL_HashTable; /*0x782531*/
            v7 = -1; /*0x782537*/
            if ( g_WOL_HashTable ) /*0x78253c*/
            {
              if ( *(_DWORD *)(g_WOL_HashTable + 4) ) /*0x78253e*/
              {
                v12 = *(ObjectClass **)(*v11 + 4 * HashMap::ComputeIndex_2(g_WOL_HashTable, (int)&v46)); /*0x782553*/
                if ( v12 ) /*0x782558*/
                {
                  while ( !String::Compare((const char **)v12, (const char **)&v46) ) /*0x782568*/
                  {
                    v12 = (ObjectClass *)v12->estimatedHealth; /*0x78256a*/
                    if ( !v12 ) /*0x78256f*/
                      goto LABEL_45; /*0x78256f*/
                  }
                  v13 = &v12->__pad_0[4]; /*0x782577*/
                  if ( v13 ) /*0x78257c*/
                    qmemcpy(v53, v13, sizeof(v53)); /*0x78258a*/
                  v7 = v53[7]; /*0x78258c*/
                }
              }
            }
LABEL_45:
            ; /*0x782593*/
          }
          while ( v8 < (int)v48 ); /*0x782597*/
        }
      }
      else if ( (int)v48 > 0 ) /*0x7825a4*/
      {
        v14 = v50; /*0x7825aa*/
        v15 = v47; /*0x7825ae*/
        v16 = 0; /*0x7825b2*/
        while ( v7 > v14 && v7 > 0 || v14 == -1 && v7 > 0 ) /*0x7825cd*/
        {
          ++v15; /*0x7825d3*/
          v16 += 3; /*0x7825d4*/
          if ( v16 >= 0 && v15 < (int)g_WOL_State ) /*0x7825df*/
            qmemcpy(v52, &g_WOL_ConnectionFlags[v16], sizeof(v52)); /*0x7825f2*/
          String::Assign_Bool(&v46, &v52[36]); /*0x7825fd*/
          String::ToLower((const char **)&v46); /*0x782606*/
          v17 = (_DWORD *)g_WOL_HashTable; /*0x78260b*/
          v7 = -1; /*0x782611*/
          if ( g_WOL_HashTable ) /*0x782616*/
          {
            if ( *(_DWORD *)(g_WOL_HashTable + 4) ) /*0x782618*/
            {
              v18 = *(ObjectClass **)(*v17 + 4 * HashMap::ComputeIndex_2(g_WOL_HashTable, (int)&v46)); /*0x78262d*/
              if ( v18 ) /*0x782632*/
              {
                while ( !String::Compare((const char **)v18, (const char **)&v46) ) /*0x782642*/
                {
                  v18 = (ObjectClass *)v18->estimatedHealth; /*0x782644*/
                  if ( !v18 ) /*0x782649*/
                    goto LABEL_66; /*0x782649*/
                }
                v19 = &v18->__pad_0[4]; /*0x782651*/
                if ( v19 ) /*0x782656*/
                  qmemcpy(v53, v19, sizeof(v53)); /*0x782664*/
                v7 = v53[7]; /*0x782666*/
              }
            }
          }
LABEL_66:
          if ( v15 >= (int)v48 ) /*0x782671*/
            goto LABEL_160; /*0x782671*/
          v14 = v50; /*0x7825b6*/
        }
        v47 = v15; /*0x78267c*/
LABEL_69:
        if ( v47 < (int)v48 ) /*0x78268a*/
        {
          v20 = 3 * v47; /*0x782698*/
          do /*0x782768*/
          {
            if ( v50 != v7 || _strcmpi(&v52[36], v51 + 36) >= 0 ) /*0x7826bc*/
              break; /*0x7826bc*/
            v21 = v47 + 1; /*0x7826c6*/
            v10 = v20 * 36 + 108 < 0; /*0x7826c7*/
            v20 += 3; /*0x7826c7*/
            ++v47; /*0x7826ca*/
            if ( !v10 && v21 < (int)g_WOL_State ) /*0x7826d6*/
              qmemcpy(v52, &g_WOL_ConnectionFlags[v20], sizeof(v52)); /*0x7826e9*/
            String::Assign_Bool(&v46, &v52[36]); /*0x7826f4*/
            String::ToLower((const char **)&v46); /*0x7826fd*/
            v22 = (_DWORD *)g_WOL_HashTable; /*0x782702*/
            v7 = -1; /*0x782708*/
            if ( g_WOL_HashTable ) /*0x78270d*/
            {
              if ( *(_DWORD *)(g_WOL_HashTable + 4) ) /*0x78270f*/
              {
                v23 = *(ObjectClass **)(*v22 + 4 * HashMap::ComputeIndex_2(g_WOL_HashTable, (int)&v46)); /*0x782724*/
                if ( v23 ) /*0x782729*/
                {
                  while ( !String::Compare((const char **)v23, (const char **)&v46) ) /*0x782739*/
                  {
                    v23 = (ObjectClass *)v23->estimatedHealth; /*0x78273b*/
                    if ( !v23 ) /*0x782740*/
                      goto LABEL_85; /*0x782740*/
                  }
                  v24 = &v23->__pad_0[4]; /*0x782748*/
                  if ( v24 ) /*0x78274d*/
                    qmemcpy(v53, v24, sizeof(v53)); /*0x78275b*/
                  v7 = v53[7]; /*0x78275d*/
                }
              }
            }
LABEL_85:
            ;
          }
          while ( v21 < (int)v48 ); /*0x782768*/
        }
      }
    }
    else
    {
      v47 = (int)v48; /*0x782779*/
      if ( (int)v48 >= 0 && (int)v48 < (int)g_WOL_State ) /*0x782781*/
        qmemcpy(v52, &g_WOL_ConnectionFlags[3 * (int)v48], sizeof(v52)); /*0x782796*/
      String::Assign_Bool(&v46, &v52[36]); /*0x7827a1*/
      String::ToLower((const char **)&v46); /*0x7827aa*/
      v25 = (_DWORD *)g_WOL_HashTable; /*0x7827af*/
      v26 = -1; /*0x7827b5*/
      if ( g_WOL_HashTable ) /*0x7827ba*/
      {
        if ( *(_DWORD *)(g_WOL_HashTable + 4) ) /*0x7827bc*/
        {
          v27 = *(ObjectClass **)(*v25 + 4 * HashMap::ComputeIndex_2(g_WOL_HashTable, (int)&v46)); /*0x7827d1*/
          if ( v27 ) /*0x7827d6*/
          {
            while ( !String::Compare((const char **)v27, (const char **)&v46) ) /*0x7827e6*/
            {
              v27 = (ObjectClass *)v27->estimatedHealth; /*0x7827e8*/
              if ( !v27 ) /*0x7827ed*/
                goto LABEL_99; /*0x7827ed*/
            }
            v28 = &v27->__pad_0[4]; /*0x7827f5*/
            if ( v28 ) /*0x7827fa*/
              qmemcpy(v53, v28, sizeof(v53)); /*0x782808*/
            v26 = v53[7]; /*0x78280a*/
          }
        }
      }
LABEL_99:
      if ( a2 ) /*0x78281b*/
      {
        if ( (int)v48 < (int)v49 ) /*0x782823*/
        {
          v29 = v47; /*0x78282b*/
          v30 = 3 * (_DWORD)v48; /*0x782835*/
          do /*0x7828fc*/
          {
            if ( v26 >= v50 || v26 <= 0 ) /*0x782840*/
            {
              if ( v50 != -1 || v26 <= 0 ) /*0x78284f*/
                goto LABEL_143; /*0x78284f*/
              v29 = v47; /*0x782855*/
            }
            ++v29; /*0x782859*/
            v10 = v30 * 36 + 108 < 0; /*0x78285a*/
            v30 += 3; /*0x78285a*/
            v47 = v29; /*0x78285d*/
            if ( !v10 && v29 < (int)g_WOL_State ) /*0x782869*/
              qmemcpy(v52, &g_WOL_ConnectionFlags[v30], sizeof(v52)); /*0x78287d*/
            String::Assign_Bool(&v46, &v52[36]); /*0x782888*/
            String::ToLower((const char **)&v46); /*0x782891*/
            v31 = (_DWORD *)g_WOL_HashTable; /*0x782896*/
            v26 = -1; /*0x78289c*/
            if ( g_WOL_HashTable ) /*0x7828a1*/
            {
              if ( *(_DWORD *)(g_WOL_HashTable + 4) ) /*0x7828a3*/
              {
                v32 = *(ObjectClass **)(*v31 + 4 * HashMap::ComputeIndex_2(g_WOL_HashTable, (int)&v46)); /*0x7828b8*/
                if ( v32 ) /*0x7828bd*/
                {
                  while ( !String::Compare((const char **)v32, (const char **)&v46) ) /*0x7828cd*/
                  {
                    v32 = (ObjectClass *)v32->estimatedHealth; /*0x7828cf*/
                    if ( !v32 ) /*0x7828d4*/
                      goto LABEL_119; /*0x7828d4*/
                  }
                  v33 = &v32->__pad_0[4]; /*0x7828dc*/
                  if ( v33 ) /*0x7828e1*/
                    qmemcpy(v53, v33, sizeof(v53)); /*0x7828ef*/
                  v26 = v53[7]; /*0x7828f1*/
                }
              }
            }
LABEL_119:
            ; /*0x7828f8*/
          }
          while ( v29 < (int)v49 ); /*0x7828fc*/
        }
      }
      else if ( (int)v48 < (int)v49 ) /*0x782909*/
      {
        v15 = v47; /*0x782913*/
        v34 = v50; /*0x78291d*/
        v35 = 3 * (_DWORD)v48; /*0x782921*/
        while ( v26 > v34 && v26 > 0 || v34 == -1 && v26 > 0 ) /*0x78293d*/
        {
          ++v15; /*0x782943*/
          v35 += 3; /*0x782944*/
          if ( v35 >= 0 && v15 < (int)g_WOL_State ) /*0x78294f*/
            qmemcpy(v52, &g_WOL_ConnectionFlags[v35], sizeof(v52)); /*0x782963*/
          String::Assign_Bool(&v46, &v52[36]); /*0x78296e*/
          String::ToLower((const char **)&v46); /*0x782977*/
          v36 = (_DWORD *)g_WOL_HashTable; /*0x78297c*/
          v26 = -1; /*0x782982*/
          if ( g_WOL_HashTable ) /*0x782987*/
          {
            if ( *(_DWORD *)(g_WOL_HashTable + 4) ) /*0x782989*/
            {
              v37 = *(ObjectClass **)(*v36 /*0x7829a6*/
                                    + 4
                                    * ((*(int (__thiscall **)(void **))(g_WOL_HashTable + 24))(&v46)
                                     & ((1 << v36[3]) - 1)));
              if ( v37 ) /*0x7829ab*/
              {
                while ( !String::Compare((const char **)v37, (const char **)&v46) ) /*0x7829bb*/
                {
                  v37 = (ObjectClass *)v37->estimatedHealth; /*0x7829bd*/
                  if ( !v37 ) /*0x7829c2*/
                    goto LABEL_140; /*0x7829c2*/
                }
                v38 = &v37->__pad_0[4]; /*0x7829ca*/
                if ( v38 ) /*0x7829cf*/
                  qmemcpy(v53, v38, sizeof(v53)); /*0x7829dd*/
                v26 = v53[7]; /*0x7829df*/
              }
            }
          }
LABEL_140:
          if ( v15 >= (int)v49 ) /*0x7829ea*/
            goto LABEL_160; /*0x7829ea*/
          v34 = v50; /*0x782926*/
        }
        v47 = v15; /*0x7829f5*/
LABEL_143:
        v15 = v47; /*0x7829f9*/
        if ( v47 < (int)v49 ) /*0x782a03*/
        {
          v39 = 3 * v47; /*0x782a0f*/
          do /*0x782ae0*/
          {
            if ( v50 != v26 || _strcmpi(&v52[36], v51 + 36) >= 0 ) /*0x782a33*/
              break; /*0x782a33*/
            ++v15; /*0x782a39*/
            v39 += 3; /*0x782a3a*/
            if ( v39 >= 0 && v15 < (int)g_WOL_State ) /*0x782a45*/
              qmemcpy(v52, &g_WOL_ConnectionFlags[v39], sizeof(v52)); /*0x782a59*/
            String::Assign_Bool(&v46, &v52[36]); /*0x782a64*/
            String::ToLower((const char **)&v46); /*0x782a6d*/
            v40 = (_DWORD *)g_WOL_HashTable; /*0x782a72*/
            v26 = -1; /*0x782a78*/
            if ( g_WOL_HashTable ) /*0x782a7d*/
            {
              if ( *(_DWORD *)(g_WOL_HashTable + 4) ) /*0x782a7f*/
              {
                v41 = *(ObjectClass **)(*v40 /*0x782a9c*/
                                      + 4
                                      * ((*(int (__thiscall **)(void **))(g_WOL_HashTable + 24))(&v46)
                                       & ((1 << v40[3]) - 1)));
                if ( v41 ) /*0x782aa1*/
                {
                  while ( !String::Compare((const char **)v41, (const char **)&v46) ) /*0x782ab1*/
                  {
                    v41 = (ObjectClass *)v41->estimatedHealth; /*0x782ab3*/
                    if ( !v41 ) /*0x782ab8*/
                      goto LABEL_159; /*0x782ab8*/
                  }
                  v42 = &v41->__pad_0[4]; /*0x782ac0*/
                  if ( v42 ) /*0x782ac5*/
                    qmemcpy(v53, v42, sizeof(v53)); /*0x782ad3*/
                  v26 = v53[7]; /*0x782ad5*/
                }
              }
            }
LABEL_159:
            ;
          }
          while ( v15 < (int)v49 ); /*0x782ae0*/
LABEL_160:
          v47 = v15; /*0x782ae6*/
        }
      }
    }
    v43 = v47; /*0x782aea*/
    v44 = g_WOL_State; /*0x782aee*/
    if ( v47 > (int)g_WOL_State ) /*0x782af6*/
      v43 = g_WOL_State; /*0x782af8*/
    if ( v43 >= g_WOL_StateFlags ) /*0x782b00*/
    {
      DynamicArray::Grow(&g_WOL_State); /*0x782b07*/
      v44 = g_WOL_State; /*0x782b0c*/
    }
    if ( v44 >= g_WOL_StateFlags ) /*0x782b18*/
    {
      DynamicArray::Grow(&g_WOL_State); /*0x782b1f*/
      v44 = g_WOL_State; /*0x782b24*/
    }
    if ( v43 < v44 ) /*0x782b2c*/
    {
      memcpy(&g_WOL_ConnectionFlags[3 * v43 + 3], &g_WOL_ConnectionFlags[3 * v43], 108 * v44 - 108 * v43); /*0x782b57*/
      v44 = g_WOL_State; /*0x782b5c*/
    }
    v45 = &g_WOL_ConnectionFlags[3 * v43]; /*0x782b70*/
    if ( v45 ) /*0x782b75*/
    {
      qmemcpy(v45, v51, 0x6Cu); /*0x782b80*/
      v44 = g_WOL_State; /*0x782b82*/
    }
    g_WOL_State = v44 + 1; /*0x782b89*/
  }
  else
  {
    DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, 0); /*0x7823d3*/
  }
  DeleteAndZero(&v46); /*0x782b93*/
}


// ==== 0x00782BB0  FindBuddyList  this=-  sig=ida-proto ====
char __fastcall FindBuddyList(int a1, char a2)
{
  ObjectClass *v3; // eax
  int v4; // ebp
  int v5; // ebx
  unsigned int v6; // kr04_4
  unsigned int v7; // kr08_4
  signed int v8; // ecx
  bool v9; // sf
  int v10; // ebx
  unsigned int v11; // kr0C_4
  unsigned int v12; // kr10_4
  signed int v13; // ecx
  int v14; // ebx
  unsigned int v15; // kr14_4
  unsigned int v16; // kr18_4
  signed int v17; // ecx
  int v18; // ebx
  unsigned int v19; // kr1C_4
  unsigned int v20; // kr20_4
  signed int v21; // ecx
  int v22; // ebx
  unsigned int v23; // kr24_4
  unsigned int v24; // kr28_4
  signed int v25; // ebp
  int v26; // ebx
  unsigned int v27; // kr2C_4
  unsigned int v28; // kr30_4
  signed int aP2; // [esp+Ch] [ebp-78h]
  signed int v31; // [esp+14h] [ebp-70h]
  _BYTE v32[108]; // [esp+18h] [ebp-6Ch] BYREF

  v31 = g_WOL_State; /*0x782bd2*/
  memset(v32, 0, sizeof(v32)); /*0x782bd6*/
  if ( !g_WOL_State ) /*0x782bd8*/
    return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, 0); /*0x782beb*/
  v3 = (ObjectClass *)g_WOL_ConnectionFlags; /*0x782bec*/
  v4 = 0; /*0x782bf2*/
  if ( (int)g_WOL_State > 0 ) /*0x782bf7*/
    qmemcpy(v32, g_WOL_ConnectionFlags, sizeof(v32)); /*0x782c04*/
  while ( (v32[0] & 1) != 0 ) /*0x782c0b*/
  {
    if ( v4 >= (int)g_WOL_State ) /*0x782c0f*/
      break; /*0x782c0f*/
    ++v4; /*0x782c11*/
    v3 = (ObjectClass *)((char *)v3 + 108); /*0x782c12*/
    if ( v4 >= 0 && v4 < (int)g_WOL_State ) /*0x782c1b*/
      qmemcpy(v32, v3, sizeof(v32)); /*0x782c28*/
  }
  if ( (*(_BYTE *)a1 & 1) == 0 ) /*0x782c38*/
  {
    aP2 = v4; /*0x782e3d*/
    if ( v4 >= 0 && v4 < (int)g_WOL_State ) /*0x782e45*/
      qmemcpy(v32, &g_WOL_ConnectionFlags[3 * v4], sizeof(v32)); /*0x782e60*/
    if ( a2 ) /*0x782e68*/
    {
      if ( v4 >= (int)g_WOL_State ) /*0x782e70*/
        return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782e70*/
      v18 = 3 * v4; /*0x782e7d*/
      while ( 1 ) /*0x782e89*/
      {
        v19 = strlen(&v32[87]) + 1; /*0x782e89*/
        v20 = strlen((const char *)(a1 + 87)) + 1; /*0x782e9e*/
        if ( v19 == 1 ) /*0x782ea5*/
          break; /*0x782ea5*/
        if ( v20 == 1 ) /*0x782ead*/
        {
          if ( (int)(v19 - 1) <= 0 ) /*0x782f08*/
            break; /*0x782f08*/
        }
        else if ( _strcmpi(&v32[87], (char *)(a1 + 87)) >= 0 ) /*0x782ebf*/
        {
          break; /*0x782ebf*/
        }
        v21 = aP2 + 1; /*0x782ec9*/
        v9 = v18 * 36 + 108 < 0; /*0x782eca*/
        v18 += 3; /*0x782eca*/
        ++aP2; /*0x782ecd*/
        if ( !v9 && v21 < (int)g_WOL_State ) /*0x782edc*/
          qmemcpy(v32, &g_WOL_ConnectionFlags[v18], sizeof(v32)); /*0x782eef*/
        if ( aP2 >= v31 ) /*0x782efb*/
          return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782efb*/
      }
    }
    else
    {
      if ( v4 >= (int)g_WOL_State ) /*0x782f12*/
        return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782f12*/
      v22 = 3 * v4; /*0x782f23*/
      while ( 1 ) /*0x782f2f*/
      {
        v23 = strlen(&v32[87]) + 1; /*0x782f2f*/
        v24 = strlen((const char *)(a1 + 87)) + 1; /*0x782f44*/
        if ( v23 == 1 ) /*0x782f4b*/
          break; /*0x782f4b*/
        if ( v24 == 1 ) /*0x782f4f*/
        {
          if ( (int)(v23 - 1) <= 0 ) /*0x782f97*/
            break; /*0x782f97*/
        }
        else if ( _strcmpi((char *)(a1 + 87), &v32[87]) >= 0 ) /*0x782f61*/
        {
          break; /*0x782f61*/
        }
        ++v4; /*0x782f63*/
        v9 = v22 * 36 + 108 < 0; /*0x782f64*/
        v22 += 3; /*0x782f64*/
        aP2 = v4; /*0x782f67*/
        if ( !v9 && v4 < (int)g_WOL_State ) /*0x782f73*/
          qmemcpy(v32, &g_WOL_ConnectionFlags[v22], sizeof(v32)); /*0x782f87*/
        if ( v4 >= v31 ) /*0x782f8d*/
          return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782f8d*/
      }
    }
    v25 = aP2; /*0x782f9b*/
    if ( aP2 >= v31 ) /*0x782fa5*/
      return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782fa5*/
    v26 = 3 * aP2; /*0x782fb2*/
    while ( 1 ) /*0x782fbe*/
    {
      v27 = strlen(&v32[87]) + 1; /*0x782fbe*/
      v28 = strlen((const char *)(a1 + 87)) + 1; /*0x782fd3*/
      if ( v27 == 1 ) /*0x782fda*/
        goto LABEL_91; /*0x782fda*/
      if ( v28 == 1 ) /*0x782fde*/
        break; /*0x782fde*/
      if ( _strcmpi((char *)(a1 + 87), &v32[87]) ) /*0x782fe6*/
        return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782ff0*/
LABEL_84:
      if ( _strcmpi(&v32[36], (char *)(a1 + 36)) < 0 ) /*0x783009*/
      {
        ++v25; /*0x78300b*/
        v9 = v26 * 36 + 108 < 0; /*0x78300c*/
        v26 += 3; /*0x78300c*/
        aP2 = v25; /*0x78300f*/
        if ( !v9 && v25 < (int)g_WOL_State ) /*0x78301b*/
          qmemcpy(v32, &g_WOL_ConnectionFlags[v26], sizeof(v32)); /*0x78302f*/
        if ( v25 < v31 ) /*0x783035*/
          continue; /*0x783035*/
      }
      return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x783035*/
    }
    if ( (int)(v27 - 1) > 0 ) /*0x783059*/
      return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x783059*/
LABEL_91:
    if ( (int)(v28 - 1) > 0 ) /*0x78305d*/
      return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x78305d*/
    goto LABEL_84; /*0x78305d*/
  }
  aP2 = 0; /*0x782c40*/
  if ( (int)g_WOL_State > 0 ) /*0x782c48*/
    qmemcpy(v32, g_WOL_ConnectionFlags, sizeof(v32)); /*0x782c59*/
  if ( a2 ) /*0x782c61*/
  {
    if ( v4 <= 0 ) /*0x782c69*/
      return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782c69*/
    v5 = 0; /*0x782c6f*/
    while ( 1 ) /*0x782c7a*/
    {
      v6 = strlen(&v32[87]) + 1; /*0x782c7a*/
      v7 = strlen((const char *)(a1 + 87)) + 1; /*0x782c8d*/
      if ( v6 == 1 ) /*0x782c94*/
        break; /*0x782c94*/
      if ( v7 == 1 ) /*0x782c9c*/
      {
        if ( (int)(v6 - 1) <= 0 ) /*0x782cf0*/
          break; /*0x782cf0*/
      }
      else if ( _strcmpi(&v32[87], (char *)(a1 + 87)) >= 0 ) /*0x782cae*/
      {
        break; /*0x782cae*/
      }
      v8 = aP2 + 1; /*0x782cb8*/
      v9 = v5 * 36 + 108 < 0; /*0x782cb9*/
      v5 += 3; /*0x782cb9*/
      ++aP2; /*0x782cbc*/
      if ( !v9 && v8 < (int)g_WOL_State ) /*0x782ccc*/
        qmemcpy(v32, &g_WOL_ConnectionFlags[v5], sizeof(v32)); /*0x782ce0*/
      if ( aP2 >= v4 ) /*0x782ce6*/
        return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782ce6*/
    }
  }
  else
  {
    if ( v4 <= 0 ) /*0x782cfa*/
      return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782cfa*/
    v10 = 0; /*0x782d00*/
    while ( 1 ) /*0x782d0b*/
    {
      v11 = strlen(&v32[87]) + 1; /*0x782d0b*/
      v12 = strlen((const char *)(a1 + 87)) + 1; /*0x782d20*/
      if ( v11 == 1 ) /*0x782d27*/
        break; /*0x782d27*/
      if ( v12 == 1 ) /*0x782d2b*/
      {
        if ( (int)(v11 - 1) <= 0 ) /*0x782d79*/
          break; /*0x782d79*/
      }
      else if ( _strcmpi((char *)(a1 + 87), &v32[87]) >= 0 ) /*0x782d3d*/
      {
        break; /*0x782d3d*/
      }
      v13 = aP2 + 1; /*0x782d43*/
      v9 = v10 * 36 + 108 < 0; /*0x782d44*/
      v10 += 3; /*0x782d44*/
      ++aP2; /*0x782d47*/
      if ( !v9 && v13 < (int)g_WOL_State ) /*0x782d56*/
        qmemcpy(v32, &g_WOL_ConnectionFlags[v10], sizeof(v32)); /*0x782d69*/
      if ( aP2 >= v4 ) /*0x782d6f*/
        return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782d6f*/
    }
  }
  if ( aP2 < v4 ) /*0x782d83*/
  {
    v14 = 3 * aP2; /*0x782d8f*/
    while ( 1 ) /*0x782d9b*/
    {
      v15 = strlen(&v32[87]) + 1; /*0x782d9b*/
      v16 = strlen((const char *)(a1 + 87)) + 1; /*0x782dae*/
      if ( v15 == 1 ) /*0x782db5*/
        goto LABEL_50; /*0x782db5*/
      if ( v16 == 1 ) /*0x782db9*/
        break; /*0x782db9*/
      if ( _strcmpi((char *)(a1 + 87), &v32[87]) ) /*0x782dc1*/
        return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782dcb*/
LABEL_43:
      if ( _strcmpi(&v32[36], (char *)(a1 + 36)) < 0 ) /*0x782de8*/
      {
        v17 = aP2 + 1; /*0x782df2*/
        v9 = v14 * 36 + 108 < 0; /*0x782df3*/
        v14 += 3; /*0x782df3*/
        ++aP2; /*0x782df6*/
        if ( !v9 && v17 < (int)g_WOL_State ) /*0x782e05*/
          qmemcpy(v32, &g_WOL_ConnectionFlags[v14], sizeof(v32)); /*0x782e18*/
        if ( aP2 < v4 ) /*0x782e1e*/
          continue; /*0x782e1e*/
      }
      return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782e1e*/
    }
    if ( (int)(v15 - 1) > 0 ) /*0x782e2b*/
      return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782e2b*/
LABEL_50:
    if ( (int)(v16 - 1) > 0 ) /*0x782e33*/
      return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782e33*/
    goto LABEL_43; /*0x782e33*/
  }
  return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782be6*/
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
        if ( *a1 >= 0 && v8 < (int)g_WOL_State ) /*0x783147*/
          qmemcpy(v11, (char *)g_WOL_ConnectionFlags + 108 * v8, sizeof(v11)); /*0x78315b*/
        v9 = *a2; /*0x78315d*/
        if ( *a2 >= 0 && v9 < (int)g_WOL_State ) /*0x783165*/
          qmemcpy(v10, (char *)g_WOL_ConnectionFlags + 108 * v9, sizeof(v10)); /*0x783179*/
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
  _BYTE v9[108]; // [esp+4h] [ebp-D8h] BYREF
  _BYTE v10[108]; // [esp+70h] [ebp-6Ch] BYREF

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
        if ( *a1 >= 0 && v7 < (int)g_WOL_State ) /*0x78321c*/
          qmemcpy(v10, &g_WOL_ConnectionFlags[3 * v7], sizeof(v10)); /*0x783230*/
        v8 = *a2; /*0x783232*/
        if ( *a2 >= 0 && v8 < (int)g_WOL_State ) /*0x78323a*/
          qmemcpy(v9, &g_WOL_ConnectionFlags[3 * v8], sizeof(v9)); /*0x78324e*/
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

  v1 = g_WOL_State; /*0x783279*/
  v2 = 0; /*0x78327f*/
  v17[0] = 0; /*0x783288*/
  v17[1] = 0; /*0x783290*/
  Block = 0; /*0x783294*/
  v13 = g_WOL_State; /*0x783298*/
  v3 = __2_YAPAXI_Z(12 * g_WOL_State); /*0x7832a1*/
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
        if ( v4 >= 0 && v2 < (int)g_WOL_State ) /*0x7832f6*/
        {
          qmemcpy(v21, (char *)g_WOL_ConnectionFlags + v4, sizeof(v21)); /*0x78330a*/
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
    g_WOL_State = 0; /*0x7833fc*/
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
        if ( v6 >= g_WOL_StateFlags ) /*0x783445*/
        {
          DynamicArray::Grow(&g_WOL_State); /*0x78344c*/
          v6 = g_WOL_State; /*0x783451*/
        }
        if ( v6 >= g_WOL_StateFlags ) /*0x78345d*/
        {
          DynamicArray::Grow(&g_WOL_State); /*0x783464*/
          v6 = g_WOL_State; /*0x783469*/
        }
        if ( v9 < v6 ) /*0x783471*/
        {
          memcpy( /*0x78349c*/
            (char *)g_WOL_ConnectionFlags + 108 * v9 + 108,
            (char *)g_WOL_ConnectionFlags + 108 * v9,
            108 * v6 - 108 * v9);
          v6 = g_WOL_State; /*0x7834a1*/
        }
        v10 = (char *)g_WOL_ConnectionFlags + 108 * v9; /*0x7834b6*/
        if ( v10 ) /*0x7834bb*/
        {
          qmemcpy(v10, v21, 0x6Cu); /*0x7834c6*/
          v6 = g_WOL_State; /*0x7834c8*/
        }
        ++v6; /*0x7834d2*/
        v7 += 3; /*0x7834d3*/
        v11 = v14 == 1; /*0x7834d6*/
        g_WOL_State = v6; /*0x7834d7*/
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
  if ( *(int *)a1 >= 0 && v8 < (int)g_WOL_State ) /*0x783657*/
    qmemcpy(v11, (char *)g_WOL_ConnectionFlags + 108 * v8, sizeof(v11)); /*0x78366b*/
  v9 = *a2; /*0x783674*/
  if ( *a2 >= 0 && v9 < (int)g_WOL_State ) /*0x78367c*/
    qmemcpy(v10, (char *)g_WOL_ConnectionFlags + 108 * v9, sizeof(v10)); /*0x783690*/
  return _strcmpi(&v11[36], &v10[36]); /*0x7835e0*/
}


// ==== 0x007836E0  sub_7836E0  this=-  sig=ida-proto ====
int __cdecl sub_7836E0(const void *a1, signed int *a2)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  const char *v5; // edx
  unsigned int v6; // kr04_4
  unsigned int v7; // kr08_4
  ObjectClass *v8; // eax
  signed int v9; // eax
  _BYTE v10[108]; // [esp+4h] [ebp-D8h] BYREF
  _BYTE v11[108]; // [esp+70h] [ebp-6Ch] BYREF

  v2 = *((_DWORD *)a1 + 2); /*0x7836f5*/
  if ( v2 != a2[2] ) /*0x7836fa*/
  {
    v3 = -(v2 != 0); /*0x7836fe*/
    LOBYTE(v3) = v3 & 0xFE; /*0x783701*/
    return v3 + 1; /*0x78370a*/
  }
  v5 = (const char *)a2[1]; /*0x78370b*/
  v6 = strlen(*((const char **)a1 + 1)) + 1; /*0x78371b*/
  v7 = strlen(v5) + 1; /*0x783727*/
  if ( v6 != 1 ) /*0x78372e*/
  {
    if ( v7 != 1 ) /*0x783736*/
    {
      result = _strcmpi(v5, *((const void **)a1 + 1)); /*0x78373e*/
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
  v8 = *(ObjectClass **)a1; /*0x78376e*/
  if ( *(int *)a1 >= 0 && (int)v8 < (int)g_WOL_State ) /*0x783777*/
    qmemcpy(v11, &g_WOL_ConnectionFlags[3 * (int)v8], sizeof(v11)); /*0x78378b*/
  v9 = *a2; /*0x783794*/
  if ( *a2 >= 0 && v9 < (int)g_WOL_State ) /*0x78379c*/
    qmemcpy(v10, &g_WOL_ConnectionFlags[3 * v9], sizeof(v10)); /*0x7837b0*/
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

  v1 = g_WOL_State; /*0x783809*/
  v2 = 0; /*0x783810*/
  v16[0] = 0; /*0x78381d*/
  v16[1] = 0; /*0x783821*/
  Block = 0; /*0x783825*/
  v18 = g_WOL_State; /*0x783829*/
  v3 = (int *)__2_YAPAXI_Z(12 * g_WOL_State); /*0x783832*/
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
      g_WOL_State = 0; /*0x78395b*/
      if ( v1 > 0 ) /*0x783961*/
      {
        v15 = v1; /*0x783967*/
        do /*0x783a3c*/
        {
          v8 = *v3; /*0x78396f*/
          if ( *v3 >= 0 && v8 < v16[0] ) /*0x78397a*/
            qmemcpy(v20, (char *)Block + 108 * v8, sizeof(v20)); /*0x783992*/
          v9 = v7; /*0x783994*/
          if ( v7 >= g_WOL_StateFlags ) /*0x7839a0*/
          {
            DynamicArray::Grow(&g_WOL_State); /*0x7839a7*/
            v7 = g_WOL_State; /*0x7839ac*/
          }
          if ( v7 >= g_WOL_StateFlags ) /*0x7839b8*/
          {
            DynamicArray::Grow(&g_WOL_State); /*0x7839bf*/
            v7 = g_WOL_State; /*0x7839c4*/
          }
          if ( v9 < v7 ) /*0x7839cc*/
          {
            memcpy( /*0x7839f7*/
              (char *)g_WOL_ConnectionFlags + 108 * v9 + 108,
              (char *)g_WOL_ConnectionFlags + 108 * v9,
              108 * v7 - 108 * v9);
            v7 = g_WOL_State; /*0x7839fc*/
          }
          v10 = (char *)g_WOL_ConnectionFlags + 108 * v9; /*0x783a11*/
          if ( v10 ) /*0x783a16*/
          {
            qmemcpy(v10, v20, 0x6Cu); /*0x783a21*/
            v7 = g_WOL_State; /*0x783a23*/
          }
          ++v7; /*0x783a2d*/
          v3 += 3; /*0x783a2e*/
          v11 = v15 == 1; /*0x783a31*/
          g_WOL_State = v7; /*0x783a32*/
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
        if ( v4 >= 0 && v2 < (int)g_WOL_State ) /*0x783887*/
          qmemcpy(v20, (char *)g_WOL_ConnectionFlags + v4, sizeof(v20)); /*0x78389b*/
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


// ==== 0x00783A90  Bitmap::GetNumberBitmapWOL  this=int  sig=csp ====
int __thiscall WOL_GetNumberBitmap(void *this)
{
  int result; // eax

  switch ( (unsigned int)this ) /*0x783a99*/
  {
    case 0u: /*0x783a99*/
      result = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FC8], 0); /*0x783aac*/
      break; /*0x783ab1*/
    case 1u: /*0x783a99*/
      result = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FBC], 0); /*0x783abe*/
      break; /*0x783ac3*/
    case 2u: /*0x783a99*/
      result = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FB0], 0); /*0x783ad0*/
      break; /*0x783ad5*/
    case 3u: /*0x783a99*/
      result = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FA4], 0); /*0x783ae2*/
      break; /*0x783ae7*/
    case 4u: /*0x783a99*/
      result = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835F98], 0); /*0x783af4*/
      break; /*0x783af9*/
    case 5u: /*0x783a99*/
      result = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835F8C], 0); /*0x783b06*/
      break; /*0x783b0b*/
    case 6u: /*0x783a99*/
      result = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835F80], 0); /*0x783b18*/
      break; /*0x783b1d*/
    case 7u: /*0x783a99*/
      result = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835F74], 0); /*0x783b2a*/
      break; /*0x783b2f*/
    case 8u: /*0x783a99*/
      result = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835F68], 0); /*0x783b3c*/
      break; /*0x783b41*/
    case 9u: /*0x783a99*/
      result = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835F5C], 0); /*0x783b4e*/
      break; /*0x783b53*/
    default:
      result = 0; /*0x783b54*/
      break; /*0x783b54*/
  }
  return result; /*0x783ab1*/
}


// ==== 0x00783B80  ObjectClass::Render_Find  this=VOID_PTR  sig=csp ====
int __thiscall sub_783B80(unsigned int *this)
{
  unsigned int v2; // eax

  if ( !this ) /*0x783b82*/
    return 0; /*0x783b84*/
  v2 = *(this + 3); /*0x783b87*/
  if ( v2 > 0x7D0 ) /*0x783b8f*/
    return HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FE4], 0); /*0x783b9d*/
  if ( v2 > 0x5DC ) /*0x783ba8*/
    return HashTable::Find(MEMORY[0xAC4848], MEMORY[0x836010], 0); /*0x783bb6*/
  if ( v2 > 0x3E8 ) /*0x783bc1*/
    return HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FF4], 0); /*0x783bcf*/
  if ( v2 > 0x1F4 ) /*0x783bda*/
    return HashTable::Find(MEMORY[0xAC4848], MEMORY[0x836000], 0); /*0x783be8*/
  if ( v2 > 0xFA ) /*0x783bf3*/
    return HashTable::Find(MEMORY[0xAC4848], MEMORY[0x83601C], 0); /*0x783c01*/
  if ( v2 > 0x96 ) /*0x783c0c*/
    return HashTable::Find(MEMORY[0xAC4848], MEMORY[0x836028], 0); /*0x783c1a*/
  if ( v2 > 0x50 ) /*0x783c23*/
    return HashTable::Find(MEMORY[0xAC4848], MEMORY[0x836034], 0); /*0x783c31*/
  if ( v2 > 0x3C ) /*0x783c3a*/
    return HashTable::Find(MEMORY[0xAC4848], MEMORY[0x836044], 0); /*0x783c48*/
  if ( v2 <= 0x1F ) /*0x783c53*/
    return HashTable::Find(MEMORY[0xAC4848], MEMORY[0x836064], 0); /*0x783c6f*/
  return HashTable::Find(MEMORY[0xAC4848], MEMORY[0x836054], 0); /*0x783b86*/
}


// ==== 0x00783C80  ObjectClass::DisplayRankingsWOL  this=int  sig=csp ====
void __fastcall DisplayRankingsWOL(void *this, char a2)
{
  HWND GameUI; // eax
  HWND v4; // eax
  HWND v5; // esi
  HWND DlgItem; // eax
  HWND v7; // ebx
  unsigned int v8; // eax
  int v9; // ecx
  LRESULT (__stdcall *v10)(HWND, int, UINT, WPARAM, LPARAM); // ebp
  HWND v11; // ebx
  wchar_t *eax17; // eax
  CampaignScore *eax20; // eax
  ObjectClass *v12; // esi
  ObjectClass *v13; // esi
  char *v16; // eax
  CampaignScore *eax31a; // eax
  int ebp34; // ebp
  ObjectClass *v17; // esi
  ObjectClass *v18; // esi
  CampaignScore *v21; // eax
  CampaignScore *eax46; // eax
  _DWORD *v23; // esi
  ObjectClass *v22; // esi
  char *esi52; // esi
  wchar_t *v26; // eax
  ObjectClass *v25; // esi
  unsigned __int16 v28; // si
  HWND v29; // eax
  int ebp62; // ebp
  _DWORD *v31; // esi
  ObjectClass *v30; // esi
  char *v33; // esi
  ObjectClass *v32; // esi
  char *v35; // esi
  wchar_t *v36; // eax
  wchar_t *v37; // eax
  wchar_t *v38; // eax
  wchar_t *v39; // eax
  wchar_t *v40; // eax
  signed int v41; // eax
  AbstractClass *v42; // ebp
  signed int v43; // esi
  int v44; // edi
  char *v45; // eax
  signed int v46; // ebp
  int v47; // ecx
  wchar_t *v48; // edi
  wchar_t *StringCSF; // eax
  _DWORD *v50; // esi
  ObjectClass *v49; // esi
  char *v52; // esi
  wchar_t *v53; // eax
  int ebp127; // ebp
  _DWORD *v55; // esi
  ObjectClass *v54; // esi
  wchar_t *v57; // eax
  char *v58; // esi
  wchar_t *v59; // eax
  int v60; // eax
  CampaignScore *v61; // eax
  wchar_t *eax161; // eax
  wchar_t *v63; // eax
  ObjectClass *v62; // eax
  bool v65; // bl
  unsigned int v66; // eax
  unsigned int j; // ebp
  CCINIClass *v69; // esi
  CCINIClass *v70; // edi
  ObjectClass *ecx176; // ecx
  CCINIClass *v71; // ebp
  int v72; // esi
  CCINIClass *v74; // edi
  int ebx180; // ebx
  int v75; // esi
  int v76; // eax
  int v77; // edx
  int v78; // ecx
  int v79; // eax
  HWND v80; // eax
  unsigned int v81; // eax
  unsigned int i; // ebp
  CCINIClass *v84; // esi
  CCINIClass *v85; // edi
  ObjectClass *ecx191; // ecx
  CCINIClass *v87; // ebx
  int esi194; // esi
  CCINIClass *v89; // edi
  int ebp195; // ebp
  int v90; // esi
  int v91; // eax
  int v92; // edx
  int v93; // ecx
  int v94; // eax
  WPARAM v95; // [esp-8h] [ebp-64Ch]
  CampaignScore *v96; // [esp-4h] [ebp-648h]
  LPARAM v97; // [esp-4h] [ebp-648h]
  wchar_t *v98; // [esp-4h] [ebp-648h]
  wchar_t *v99; // [esp-4h] [ebp-648h]
  CampaignScore *v100; // [esp-4h] [ebp-648h]
  CampaignScore *v101; // [esp-4h] [ebp-648h]
  wchar_t *v102; // [esp-4h] [ebp-648h]
  CampaignScore *v103; // [esp-4h] [ebp-648h]
  CampaignScore *v104; // [esp+0h] [ebp-644h]
  wchar_t *v105; // [esp+0h] [ebp-644h]
  CampaignScore *_4; // [esp+4h] [ebp-640h]
  wchar_t *v106; // [esp+10h] [ebp-634h] BYREF
  LPARAM var630; // [esp+14h] [ebp-630h] BYREF
  wchar_t *v108; // [esp+18h] [ebp-62Ch] BYREF
  wchar_t *v110; // [esp+1Ch] [ebp-628h] BYREF
  int v111; // [esp+20h] [ebp-624h]
  int NumberBitmapWOL; // [esp+24h] [ebp-620h]
  CampaignScore *v113; // [esp+28h] [ebp-61Ch]
  int v114; // [esp+2Ch] [ebp-618h] BYREF
  LPARAM v115; // [esp+30h] [ebp-614h]
  HWND hDlg; // [esp+34h] [ebp-610h]
  WPARAM wParam; // [esp+38h] [ebp-60Ch]
  wchar_t *v118; // [esp+3Ch] [ebp-608h] BYREF
  const char *aP1; // [esp+40h] [ebp-604h] BYREF
  CCINIClass *aP1_4; // [esp+44h] [ebp-600h] BYREF
  int aP1_8; // [esp+48h] [ebp-5FCh]
  unsigned int aP1_12; // [esp+4Ch] [ebp-5F8h]
  int aP1_16; // [esp+50h] [ebp-5F4h]
  int aP1_20; // [esp+54h] [ebp-5F0h]
  char aP1_24; // [esp+58h] [ebp-5ECh]
  const wchar_t *(__thiscall *aP1_28)(const wchar_t **); // [esp+5Ch] [ebp-5E8h]
  int aP1_36; // [esp+64h] [ebp-5E0h]
  int aP1_40; // [esp+68h] [ebp-5DCh]
  ObjectClass *v128; // [esp+6Ch] [ebp-5D8h]
  int aP1_48; // [esp+70h] [ebp-5D4h]
  ObjectClass *v130; // [esp+74h] [ebp-5D0h]
  void *aP1_60; // [esp+7Ch] [ebp-5C8h] BYREF
  char *aP1_64; // [esp+80h] [ebp-5C4h] BYREF
  char *aP1_68; // [esp+84h] [ebp-5C0h] BYREF
  char *aP1_72; // [esp+88h] [ebp-5BCh] BYREF
  void *aP1_76; // [esp+8Ch] [ebp-5B8h] BYREF
  CCINIClass *v136; // [esp+90h] [ebp-5B4h] BYREF
  void *aP1_84; // [esp+94h] [ebp-5B0h] BYREF
  int aP1_88; // [esp+98h] [ebp-5ACh]
  ObjectClass aP1_92; // [esp+9Ch] [ebp-5A8h] BYREF
  LRESULT aP1_96; // [esp+A0h] [ebp-5A4h]
  HWND aP1_100; // [esp+A4h] [ebp-5A0h]
  void *aP1_104; // [esp+A8h] [ebp-59Ch]
  LPARAM aP1_108; // [esp+ACh] [ebp-598h]
  int aP1_112; // [esp+B0h] [ebp-594h]
  _DWORD aP1_116[27]; // [esp+B4h] [ebp-590h] BYREF
  wchar_t lParam[80]; // [esp+120h] [ebp-524h] BYREF
  LPARAM v148[5]; // [esp+1C0h] [ebp-484h] BYREF
  unsigned int v149[17]; // [esp+1D4h] [ebp-470h] BYREF
  CampaignScore *v150[27]; // [esp+218h] [ebp-42Ch] BYREF
  wchar_t Buffer[80]; // [esp+284h] [ebp-3C0h] BYREF
  wchar_t v152[200]; // [esp+324h] [ebp-320h] BYREF
  wchar_t String[200]; // [esp+4B4h] [ebp-190h] BYREF

  aP1_104 = this;
  GameUI = (HWND)Dialog::FindGameUI();
  if ( GameUI )
  {
    RefreshLobbyAll(GameUI, a2);
    return;
  }
  if ( !Dialog::FindByHandle((void *)0x6B) )
  {
    v4 = (HWND)Dialog::FindByHandle((void *)0x116);
    v5 = v4;
    hDlg = v4;
    if ( v4 )
    {
      FillBuddyListWOL(v4);
    }
    else
    {
      v5 = (HWND)Dialog::FindByHandle((void *)0x113);
      hDlg = v5;
    }
    DlgItem = GetDlgItem(v5, 1342);
    v7 = DlgItem;
    aP1_100 = DlgItem;
    if ( v5 )
    {
      if ( DlgItem )
      {
        v8 = 128;
        aP1_36 = -1717986918;
        aP1_40 = 1070176665;
        v128 = (ObjectClass *)-1717986918;
        aP1_48 = 1072273817;
        v130 = (ObjectClass *)128;
        v9 = 0;
        do
        {
          ++v9;
          v8 >>= 1;
        }
        while ( v8 );
        aP1_20 = 0;
        aP1_16 = v9 - 1;
        aP1_8 = 0;
        aP1_24 = 0;
        aP1_12 = 1 << (v9 - 1);
        aP1_4 = (CCINIClass *)__2_YAPAXI_Z(4 * aP1_12);
        memset(aP1_4, 0, 4 * aP1_12);
        aP1_28 = GameSetup::CompareWideString;
        RehashGenericHashMap(v7, (int)&aP1_4);
        v10 = SendDlgItemMessageA;
        aP1_96 = SendDlgItemMessageA(v5, 1342, 0x18Eu, 0, 0);
        SendDlgItemMessageA(v5, 1342, 0x49Du, 0, 1);
        SendDlgItemMessageA(v5, 1342, 0x184u, 0, 0);
        unknown_libname_73(&v106);
        memset(v150, 0, sizeof(v150));
        Gadget::InitProperties(&var630);
        String::ToLowerCopy((const char **)&g_WebBrowser, (ObjectClass *)&aP1);
        aP1_108 = g_WOL_State;
        v115 = 0;
        if ( (int)g_WOL_State <= 0 )
        {
LABEL_168:
          if ( !aP1_104 )
            ProcessComboBoxAddString(v7, (int)&aP1_4);
          if ( v10(v5, 1342, 0x190u, 0, 0) <= 0 )
            sprintf((char *const)v148, (ObjectClass *)&stru_817F40.fallRate, (INIClass *)g_WOL_State);
          else
            sprintf((char *const)v148, &stru_84A738, (INIClass *)g_WOL_State);
          v10(v5, 1547, 0x4B4u, 0, (LPARAM)v148);
          v10(v5, 1342, 0x197u, aP1_96, 0);
          v10(v5, 1342, 0x49Du, 0, 0);
          v80 = GetDlgItem(v5, 1342);
          InvalidateRect(v80, 0, 0);
          DeleteAndZero((int)&aP1);
          DeleteAndZero::Alt((void **)&v110);
          DeleteAndZero::Alt((void **)&v108);
          DeleteAndZero((int)&v106);
          v81 = aP1_12;
          for ( i = 0; i < aP1_12; v81 = aP1_12 )
          {
            v84 = *(CCINIClass **)&aP1_4->__pad_0[4 * i];
            while ( v84 )
            {
              v85 = v84;
              v84 = (CCINIClass *)v84->headNode[1];
              DeleteAndZero::Alt((void **)v85);
              __3_YAXPAX_Z(v85);
            }
            ++i;
            *(_DWORD *)&aP1_4->__pad_0[4 * i - 4] = 0;
          }
          ecx191 = v130;
          aP1_8 = 0;
          if ( v81 > (unsigned int)v130 )
          {
            do
            {
              if ( aP1_24 || v81 <= (unsigned int)ecx191 )
                break;
              v87 = aP1_4;
              esi194 = v81;
              aP1_12 = v81 >> 1;
              --aP1_16;
              aP1_4 = (CCINIClass *)__2_YAPAXI_Z(4 * (v81 >> 1));
              memset(aP1_4, 0, 4 * aP1_12);
              if ( esi194 > 0 )
              {
                v89 = v87;
                ebp195 = esi194;
                do
                {
                  v90 = *(_DWORD *)v89->__pad_0;
                  if ( *(_DWORD *)v89->__pad_0 )
                  {
                    do
                    {
                      v91 = (int)aP1_28((const wchar_t **)v90);
                      v92 = v91 & ((1 << aP1_16) - 1);
                      v93 = *(_DWORD *)&aP1_4->__pad_0[4 * v92];
                      *(_DWORD *)&aP1_4->__pad_0[4 * v92] = v90;
                      v94 = *(_DWORD *)(v90 + 8);
                      *(_DWORD *)(v90 + 8) = v93;
                      v90 = v94;
                    }
                    while ( v94 );
                  }
                  v89 = (CCINIClass *)((char *)v89 + 4);
                  --ebp195;
                }
                while ( ebp195 );
              }
              __3_YAXPAX_Z(v87);
              ecx191 = v130;
              v81 = aP1_12;
            }
            while ( aP1_12 > (unsigned int)v130 );
          }
          goto LABEL_200;
        }
        v11 = hDlg;
        while ( 1 )
        {
          if ( v115 >= 0 && v115 < (int)g_WOL_State )
            qmemcpy(aP1_116, &g_WOL_ConnectionFlags[3 * v115], sizeof(aP1_116));
          String::Assign(&aP1_68, (const char *)&aP1_116[9]);
          if ( g_WOL_ProcessIdle )
          {
            if ( g_SuperWeaponTypeArray <= 1 )
            {
              DeleteAndZero((int)&aP1_68);
              DeleteAndZero((int)&aP1);
              DeleteAndZero::Alt((void **)&v110);
              DeleteAndZero::Alt((void **)&v108);
              DeleteAndZero((int)&v106);
              v66 = aP1_12;
              for ( j = 0; j < aP1_12; v66 = aP1_12 )
              {
                v69 = *(CCINIClass **)&aP1_4->__pad_0[4 * j];
                while ( v69 )
                {
                  v70 = v69;
                  v69 = (CCINIClass *)v69->headNode[1];
                  DeleteAndZero::Alt((void **)v70);
                  __3_YAXPAX_Z(v70);
                }
                ++j;
                *(_DWORD *)&aP1_4->__pad_0[4 * j - 4] = 0;
              }
              ecx176 = v130;
              aP1_8 = 0;
              if ( v66 > (unsigned int)v130 )
              {
                do
                {
                  if ( aP1_24 || v66 <= (unsigned int)ecx176 )
                    break;
                  v71 = aP1_4;
                  v72 = v66;
                  aP1_12 = v66 >> 1;
                  --aP1_16;
                  aP1_4 = (CCINIClass *)__2_YAPAXI_Z(4 * (v66 >> 1));
                  memset(aP1_4, 0, 4 * aP1_12);
                  if ( v72 > 0 )
                  {
                    v74 = v71;
                    ebx180 = v72;
                    do
                    {
                      v75 = *(_DWORD *)v74->__pad_0;
                      if ( *(_DWORD *)v74->__pad_0 )
                      {
                        do
                        {
                          v76 = (int)aP1_28((const wchar_t **)v75);
                          v77 = v76 & ((1 << aP1_16) - 1);
                          v78 = *(_DWORD *)&aP1_4->__pad_0[4 * v77];
                          *(_DWORD *)&aP1_4->__pad_0[4 * v77] = v75;
                          v79 = *(_DWORD *)(v75 + 8);
                          *(_DWORD *)(v75 + 8) = v78;
                          v75 = v79;
                        }
                        while ( v79 );
                      }
                      v74 = (CCINIClass *)((char *)v74 + 4);
                      --ebx180;
                    }
                    while ( ebx180 );
                  }
                  __3_YAXPAX_Z(v71);
                  ecx176 = v130;
                  v66 = aP1_12;
                }
                while ( aP1_12 > (unsigned int)v130 );
              }
LABEL_200:
              __3_YAXPAX_Z(aP1_4);
              return;
            }
            String::Assign(&aP1_72, (const char *)&aP1_116[9]);
            v41 = g_WOL_State;
            v42 = 0;
            v43 = 0;
            if ( (int)g_WOL_State <= 0 )
            {
LABEL_112:
              v43 = -1;
            }
            else
            {
              v44 = 0;
              while ( 1 )
              {
                if ( v44 >= 0 && v43 < v41 )
                  v42 = &g_WOL_ConnectionFlags[v44];
                v45 = String::GetOrEmpty_Alt(&aP1_72);
                if ( !_strcmpi(v45, &v42[1]) )
                  break;
                v41 = g_WOL_State;
                ++v43;
                v44 += 3;
                if ( v43 >= (int)g_WOL_State )
                  goto LABEL_112;
              }
            }
            DeleteAndZero((int)&aP1_72);
            v46 = 0;
            v47 = 0;
            wParam = 0;
            if ( v43 != -1 )
            {
              v47 = *((_DWORD *)&g_WOL_LoginObject.attachedTag + 37 * v43);
              wParam = g_WOL_LoginObject.ambientSoundController[37 * v43] != 0;
              if ( !v43 )
              {
                g_WOL_LoginObject.ambientSoundController[0] = 1;
                wParam = 2;
              }
            }
            aP1_88 = v47 <= 0 ? 0 : v47;
            String::Assign_Bool((void **)&v106, (const char *)&aP1_116[9]);
            String::ToLower((const char **)&v106);
            swprintf(lParam, (const size_t)&stru_830620.__pad_14B0[15780], (const wchar_t *const)&aP1_116[9], v104);
            if ( (int)wcslen(lParam) > 0 )
            {
              v48 = lParam;
              do
              {
                *v48 = tolower(*v48);
                ++v46;
                ++v48;
              }
              while ( v46 < (int)wcslen(lParam) );
            }
            SendDlgItemMessageA(v11, 1342, 0x4CCu, 0xFFFFFFFF, (LPARAM)lParam);
            var630 = 4;
            v111 = *(_DWORD *)&stru_830620.__pad_DFC[4 * *((_DWORD *)&g_WOL_LoginObject.nextObject + 37 * v43) + 652];
            StringCSF = GetStringCSF(
                          (wchar_t *)&stru_830620.__pad_579C[40288],
                          0,
                          (CampaignScore *)g_Str_File_wonline_cpp,
                          4428);
            WideString::Reassign((void **)&v110, StringCSF);
            v50 = (_DWORD *)g_WOL_HashTable;
            if ( *(_DWORD *)(g_WOL_HashTable + 4) )
            {
              v49 = *(ObjectClass **)(*v50
                                    + 4
                                    * ((*(int (__thiscall **)(wchar_t **))(g_WOL_HashTable + 24))(&v106)
                                     & ((1 << v50[3]) - 1)));
              if ( v49 )
              {
                while ( !String::Compare((const char **)v49, (const char **)&v106) )
                {
                  v49 = (ObjectClass *)v49->estimatedHealth;
                  if ( !v49 )
                    goto LABEL_127;
                }
                v52 = &v49->__pad_0[4];
                if ( v52 )
                  qmemcpy(v150, v52, sizeof(v150));
                v100 = v150[7];
                v53 = GetStringCSF(
                        (wchar_t *)&stru_84A684.headNode[2],
                        0,
                        (CampaignScore *)g_Str_File_wonline_cpp,
                        4431);
                swprintf(Buffer, (const size_t)stru_84A738.customSound_controller, v53, v100);
                WideString::Reassign((void **)&v110, Buffer);
              }
            }
LABEL_127:
            ebp127 = (unsigned __int16)v115 << 16;
            SendDlgItemMessageA(v11, 1342, 0x4A8u, ebp127 | (unsigned __int16)dword_B779F4, (LPARAM)&var630);
            var630 = 1;
            if ( strlen((const char *)&aP1_116[21] + 3) )
            {
              BulkCharToWide(lParam, (unsigned __int8 *)&aP1_116[11] + 2, -1);
              WideString::Reassign((void **)&v110, lParam);
              BulkCharToWide(lParam, (unsigned __int8 *)&aP1_116[21] + 3, -1);
            }
            else
            {
              v55 = (_DWORD *)g_WOL_HashTable;
              if ( *(_DWORD *)(g_WOL_HashTable + 4)
                && (v54 = *(ObjectClass **)(*v55
                                          + 4
                                          * ((*(int (__thiscall **)(wchar_t **))(g_WOL_HashTable + 24))(&v106)
                                           & ((1 << v55[3]) - 1)))) != 0 )
              {
                while ( !String::Compare((const char **)v54, (const char **)&v106) )
                {
                  v54 = (ObjectClass *)v54->estimatedHealth;
                  if ( !v54 )
                    goto LABEL_133;
                }
                v58 = &v54->__pad_0[4];
                if ( v58 )
                  qmemcpy(v150, v58, sizeof(v150));
                v101 = v150[7];
                v59 = GetStringCSF(
                        (wchar_t *)&stru_84A684.headNode[2],
                        0,
                        (CampaignScore *)g_Str_File_wonline_cpp,
                        4450);
                swprintf(lParam, (const size_t)&stru_84A738.referenceCount, v59, v101);
              }
              else
              {
LABEL_133:
                swprintf(lParam, (const size_t)&stru_87C374.__pad_579C[23588], v105, _4);
              }
              WideString::Reassign((void **)&v110, (wchar_t *)&stru_87C374.__pad_579C[23588]);
            }
            WideString::Reassign((void **)&v108, lParam);
            SendDlgItemMessageA(v11, 1342, 0x4A8u, ebp127 | (unsigned __int16)dword_B77D68, (LPARAM)&var630);
            var630 = 2;
            switch ( aP1_88 )
            {
              case 0:
                NumberBitmapWOL = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[1508], 0);
                v57 = GetStringCSF(
                        (wchar_t *)&stru_830620.__pad_BC0[160],
                        0,
                        (CampaignScore *)g_Str_File_wonline_cpp,
                        4486);
                goto LABEL_150;
              case 1:
                NumberBitmapWOL = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[1496], 0);
                v57 = GetStringCSF(
                        (wchar_t *)&stru_830620.__pad_BC0[160],
                        0,
                        (CampaignScore *)g_Str_File_wonline_cpp,
                        4490);
                goto LABEL_150;
              case 2:
                NumberBitmapWOL = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[1484], 0);
                v57 = GetStringCSF(
                        (wchar_t *)&stru_830620.__pad_BC0[160],
                        0,
                        (CampaignScore *)g_Str_File_wonline_cpp,
                        4494);
                goto LABEL_150;
              case 3:
                NumberBitmapWOL = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[1472], 0);
                v57 = GetStringCSF(
                        (wchar_t *)&stru_830620.__pad_BC0[160],
                        0,
                        (CampaignScore *)g_Str_File_wonline_cpp,
                        4498);
                goto LABEL_150;
              case 4:
                NumberBitmapWOL = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[1460], 0);
                v57 = GetStringCSF(
                        (wchar_t *)&stru_830620.__pad_BC0[160],
                        0,
                        (CampaignScore *)g_Str_File_wonline_cpp,
                        4502);
                goto LABEL_150;
              case 5:
                NumberBitmapWOL = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[1448], 0);
                v57 = GetStringCSF(
                        (wchar_t *)&stru_830620.__pad_BC0[152],
                        0,
                        (CampaignScore *)g_Str_File_wonline_cpp,
                        4506);
                goto LABEL_150;
              case 6:
                NumberBitmapWOL = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[1436], 0);
                v57 = GetStringCSF(
                        (wchar_t *)&stru_830620.__pad_BC0[152],
                        0,
                        (CampaignScore *)g_Str_File_wonline_cpp,
                        4510);
                goto LABEL_150;
              case 7:
                NumberBitmapWOL = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[1424], 0);
                v57 = GetStringCSF(
                        (wchar_t *)&stru_830620.__pad_BC0[152],
                        0,
                        (CampaignScore *)g_Str_File_wonline_cpp,
                        4514);
                goto LABEL_150;
              case 8:
                NumberBitmapWOL = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[1412], 0);
                v57 = GetStringCSF(
                        (wchar_t *)&stru_830620.__pad_BC0[152],
                        0,
                        (CampaignScore *)g_Str_File_wonline_cpp,
                        4518);
LABEL_150:
                swprintf(lParam, (const size_t)&off_8240B4, v57, (CampaignScore *)v105);
                break;
              default:
                break;
            }
            WideString::Reassign((void **)&v110, lParam);
            SendDlgItemMessageA(v11, 1342, 0x4A8u, ebp127 | (unsigned __int16)dword_B76470, (LPARAM)&var630);
            var630 = 2;
            if ( wParam )
            {
              if ( wParam == 2 )
                v60 = HashTable::Find(&g_MatrixTransformState + 5774, g_Str_File_wolhost_pcx, 0);
              else
                v60 = HashTable::Find(&g_MatrixTransformState + 5774, g_Str_File_wolacpt_pcx, 0);
              NumberBitmapWOL = v60;
              v102 = GetStringCSF((wchar_t *)&stru_84A738.__pad_0[12], 0, (CampaignScore *)g_Str_File_wonline_cpp, 4532);
              WideString::Reassign((void **)&v110, v102);
            }
            else
            {
              var630 = 0;
              WideString::Reassign((void **)&v110, (wchar_t *)&stru_87C374.__pad_579C[23588]);
            }
            SendDlgItemMessageA(v11, 1342, 0x4A8u, ebp127 | (unsigned __int16)dword_B768FC, (LPARAM)&var630);
            if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
              (*(void (__thiscall **)(_DWORD, HWND))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 120))(
                *(_DWORD *)&HouseClass_Player.__pad_5568[8072],
                v11);
            v118 = 0;
            (*(void (__stdcall **)(_DWORD, _DWORD, wchar_t **))((*(&g_MatrixTransformState + 2264))->X + 32))(
              *(&g_MatrixTransformState + 2264),
              aP1_116[6],
              &v118);
            v61 = (CampaignScore *)v118;
            if ( (int)v118 < 0 )
            {
              v61 = 0;
              v118 = 0;
            }
            v103 = v61;
            var630 = 3;
            v113 = v61;
            eax161 = GetStringCSF(
                       (wchar_t *)&stru_84A684.INIClass_field_3C,
                       0,
                       (CampaignScore *)g_Str_File_wonline_cpp,
                       4552);
            swprintf(v152, (const size_t)eax161, (const wchar_t *const)v103, (CampaignScore *)v105);
            if ( !v118 )
            {
              v63 = GetStringCSF((wchar_t *)&stru_84A684.__pad_20[8], 0, (CampaignScore *)g_Str_File_wonline_cpp, 4554);
              swprintf(v152, (const size_t)v63, (const wchar_t *const)v104, _4);
            }
            WideString::Reassign((void **)&v110, v152);
            String::Assign(&aP1_64, (const char *)&aP1_116[9]);
            v62 = (ObjectClass *)String::ToLowerCopy((const char **)&aP1_64, &aP1_92);
            v65 = String::Compare(&aP1, (const char **)v62);
            DeleteAndZero((int)&aP1_92);
            if ( v65 )
              var630 = 0;
            SendDlgItemMessageA(hDlg, 1342, 0x4A8u, ebp127 | LOWORD(g_WOL_AuthObject.nextArrayIndex), (LPARAM)&var630);
            DeleteAndZero((int)&aP1_64);
            v11 = hDlg;
          }
          else
          {
            swprintf(lParam, (const size_t)&stru_830620.__pad_14B0[15780], (const wchar_t *const)&aP1_116[9], v104);
            wParam = SendDlgItemMessageA(v11, 1342, 0x4CCu, 0xFFFFFFFF, (LPARAM)lParam);
            var630 = 1;
            eax17 = GetStringCSF(
                      (wchar_t *)&stru_830620.__pad_579C[40288],
                      0,
                      (CampaignScore *)g_Str_File_wonline_cpp,
                      4170);
            WideString::Reassign((void **)&v110, eax17);
            BulkCharToWide(lParam, (unsigned __int8 *)&aP1_116[9], -1);
            WideString::Reassign((void **)&v108, lParam);
            if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4
              && *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 3 )
            {
              if ( (aP1_116[0] & 1) != 0 )
              {
                v111 = -1;
              }
              else
              {
                eax20 = WideString::GetOrEmpty(&v108);
                WideString::Assign((wchar_t **)&aP1_60, eax20);
                ToWideStringCharAlt((char **)&v114, (const wchar_t **)&aP1_60);
                DeleteAndZero::Alt(&aP1_60);
                v12 = (ObjectClass *)*((_DWORD *)g_WOL_MessageQueue + (dword_B76698(&v114) & ((1 << dword_B7668C) - 1)));
                if ( v12 )
                {
                  while ( !String::Compare((const char **)v12, (const char **)&v114) )
                  {
                    v12 = *(ObjectClass **)&v12->__pad_0[8];
                    if ( !v12 )
                      goto LABEL_23;
                  }
                  if ( g_WOL_MessageConfig )
                  {
                    v13 = (ObjectClass *)*((_DWORD *)g_WOL_MessageQueue
                                         + (dword_B76698(&v114) & ((1 << dword_B7668C) - 1)));
                    if ( v13 )
                    {
                      while ( !String::Compare((const char **)v13, (const char **)&v114) )
                      {
                        v13 = *(ObjectClass **)&v13->__pad_0[8];
                        if ( !v13 )
                          goto LABEL_31;
                      }
                      if ( v13 != (ObjectClass *)-4 )
                        aP1_112 = *(_DWORD *)&v13->__pad_0[4];
                    }
                  }
LABEL_31:
                  v16 = String::GetOrEmpty((char **)&v114);
                  eax31a = (CampaignScore *)CharToWideString(v16);
                  WideString::Assign((wchar_t **)&aP1_76, eax31a);
                  WideString::Reassign_Alt((void **)&v108, (const wchar_t **)&aP1_76);
                  v111 = *(_DWORD *)&stru_830620.__pad_DFC[4 * aP1_112 + 652];
                  DeleteAndZero::Alt(&aP1_76);
                  DeleteAndZero((int)&v114);
                }
                else
                {
LABEL_23:
                  v111 = -1;
                  DeleteAndZero((int)&v114);
                }
              }
            }
            else
            {
              v111 = -1;
            }
            String::Assign_Bool((void **)&v106, (const char *)&aP1_116[9]);
            String::ToLower((const char **)&v106);
            ebp34 = 0;
            memset(&word_B77840, 0, 0x80u);
            v17 = *(ObjectClass **)&g_WOL_ConnectionPool->__pad_0[4 * (dword_B76548(&v106) & ((1 << dword_B7653C) - 1))];
            if ( v17 )
            {
              while ( !String::Compare((const char **)v17, (const char **)&v106) )
              {
                v17 = *(ObjectClass **)&v17->__pad_0[8];
                if ( !v17 )
                  goto LABEL_47;
              }
              if ( *(&g_MatrixTransformState + 2263) )
              {
                if ( dword_B76534 )
                {
                  v18 = *(ObjectClass **)&g_WOL_ConnectionPool->__pad_0[4
                                                                      * (dword_B76548(&v106) & ((1 << dword_B7653C) - 1))];
                  if ( v18 )
                  {
                    while ( !String::Compare((const char **)v18, (const char **)&v106) )
                    {
                      v18 = *(ObjectClass **)&v18->__pad_0[8];
                      if ( !v18 )
                        goto LABEL_47;
                    }
                    v21 = (CampaignScore *)&v18->__pad_0[4];
                    if ( v18 != (ObjectClass *)-4 )
                    {
                      ebp34 = *(_DWORD *)v21->__pad_0;
                      if ( *(_DWORD *)v21->__pad_0 )
                      {
                        FormatLocaleStringWOL((wchar_t **)&aP1_84, *(_DWORD *)v21->__pad_0);
                        eax46 = WideString::GetOrEmpty((wchar_t **)&aP1_84);
                        swprintf(
                          &word_B77840,
                          (const size_t)&stru_84A738.customSound_controller[3],
                          (const wchar_t *const)eax46,
                          v104);
                        DeleteAndZero::Alt(&aP1_84);
                      }
                    }
                  }
                }
              }
            }
LABEL_47:
            v23 = (_DWORD *)g_WOL_HashTable;
            if ( *(_DWORD *)(g_WOL_HashTable + 4) )
            {
              v22 = *(ObjectClass **)(*v23
                                    + 4
                                    * ((*(int (__thiscall **)(wchar_t **))(g_WOL_HashTable + 24))(&v106)
                                     & ((1 << v23[3]) - 1)));
              if ( v22 )
              {
                while ( !String::Compare((const char **)v22, (const char **)&v106) )
                {
                  v22 = (ObjectClass *)v22->estimatedHealth;
                  if ( !v22 )
                    goto LABEL_55;
                }
                esi52 = &v22->__pad_0[4];
                if ( esi52 )
                  qmemcpy(v150, esi52, sizeof(v150));
                v96 = v150[7];
                v26 = GetStringCSF(
                        (wchar_t *)&stru_84A684.headNode[2],
                        0,
                        (CampaignScore *)g_Str_File_wonline_cpp,
                        4227);
                swprintf(Buffer, (const size_t)stru_84A738.customSound_controller, v26, v96);
                WideString::Reassign((void **)&v110, Buffer);
              }
            }
LABEL_55:
            v25 = *(ObjectClass **)&g_WOL_ConnectionPool->__pad_0[4 * (dword_B76548(&v106) & ((1 << dword_B7653C) - 1))];
            if ( v25 )
            {
              while ( !String::Compare((const char **)v25, (const char **)&v106) )
              {
                v25 = *(ObjectClass **)&v25->__pad_0[8];
                if ( !v25 )
                  goto LABEL_62;
              }
              if ( ebp34 )
                Render_Helper_7B71D0((const wchar_t **)&v110, &stru_82083C, 0);
              Render_Helper_7B71D0((const wchar_t **)&v110, (CampaignScore *)&word_B77840, 0);
            }
LABEL_62:
            v28 = v115;
            v97 = v115;
            v95 = wParam;
            v29 = GetDlgItem(v11, 1342);
            SendMessageA(v29, 0x19Au, v95, v97);
            ebp62 = v28 << 16;
            SendDlgItemMessageA(v11, 1342, 0x4A8u, ebp62 | (unsigned __int16)dword_B779F4, (LPARAM)&var630);
            var630 = 1;
            String::Assign_Bool((void **)&v106, (const char *)&aP1_116[9]);
            String::ToLower((const char **)&v106);
            Buffer[0] = 0;
            if ( strlen((const char *)&aP1_116[21] + 3) )
            {
              swprintf(
                Buffer,
                (const size_t)&stru_84A738.ambientSoundController[2],
                (const wchar_t *const)((char *)&aP1_116[21] + 3),
                v104);
              BulkCharToWide(String, (unsigned __int8 *)&aP1_116[11] + 2, -1);
              WideString::Reassign((void **)&v110, String);
            }
            WideString::Reassign((void **)&v108, Buffer);
            SendDlgItemMessageA(v11, 1342, 0x4A8u, ebp62 | (unsigned __int16)dword_B76604, (LPARAM)&var630);
            v31 = (_DWORD *)g_WOL_HashTable;
            Buffer[0] = 0;
            if ( *(_DWORD *)(g_WOL_HashTable + 4) )
            {
              v30 = *(ObjectClass **)(*v31
                                    + 4
                                    * ((*(int (__thiscall **)(wchar_t **))(g_WOL_HashTable + 24))(&v106)
                                     & ((1 << v31[3]) - 1)));
              if ( v30 )
              {
                while ( !String::Compare((const char **)v30, (const char **)&v106) )
                {
                  v30 = (ObjectClass *)v30->estimatedHealth;
                  if ( !v30 )
                    goto LABEL_72;
                }
                v33 = &v30->__pad_0[4];
                if ( v33 )
                  qmemcpy(v150, v33, sizeof(v150));
                swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v150[7], v104);
                WideString::Reassign((void **)&v110, (wchar_t *)&stru_87C374.__pad_579C[23588]);
              }
            }
LABEL_72:
            WideString::Reassign((void **)&v108, Buffer);
            SendDlgItemMessageA(v11, 1342, 0x4A8u, ebp62 | (unsigned __int16)dword_B76438, (LPARAM)&var630);
            var630 = 1;
            if ( (aP1_116[0] & 1) != 0 )
            {
              var630 = 2;
              NumberBitmapWOL = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[816], 0);
              v98 = GetStringCSF((wchar_t *)&stru_84A738.attachedBomb, 0, (CampaignScore *)g_Str_File_wonline_cpp, 4279);
              WideString::Reassign((void **)&v110, v98);
            }
            else if ( (aP1_116[0] & 2) != 0 )
            {
              var630 = 2;
              NumberBitmapWOL = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[760], 0);
              v99 = GetStringCSF((wchar_t *)&stru_84A738.fallRate, 0, (CampaignScore *)g_Str_File_wonline_cpp, 4285);
              WideString::Reassign((void **)&v110, v99);
            }
            else
            {
              WideString::Reassign((void **)&v108, (wchar_t *)&stru_87C374.__pad_579C[23588]);
              WideString::Reassign((void **)&v110, (wchar_t *)&stru_87C374.__pad_579C[23588]);
            }
            SendDlgItemMessageA(v11, 1342, 0x4A8u, ebp62 | (unsigned __int16)dword_B73704, (LPARAM)&var630);
            memset(v149, 0, sizeof(v149));
            if ( dword_B76644 )
            {
              v32 = (ObjectClass *)*((_DWORD *)dword_B76640 + (dword_B76658(&v106) & ((1 << dword_B7664C) - 1)));
              if ( v32 )
              {
                while ( !String::Compare((const char **)v32, (const char **)&v106) )
                {
                  v32 = (ObjectClass *)v32->ambientSoundController[3];
                  if ( !v32 )
                    goto LABEL_166;
                }
                v35 = &v32->__pad_0[4];
                if ( v35 )
                  qmemcpy(v149, v35, sizeof(v149));
                var630 = 1;
                if ( v149[4] > 0x3E7 || v149[4] < 0x64 )
                {
                  WideString::Reassign((void **)&v108, (wchar_t *)&stru_87C374.__pad_579C[23588]);
                }
                else
                {
                  var630 = 2;
                  NumberBitmapWOL = Bitmap::GetNumberBitmapWOL((void *)(v149[4] % 0x3E8 / 0x64));
                }
                v36 = GetStringCSF(
                        (wchar_t *)&stru_84A738.attachedBomb,
                        0,
                        (CampaignScore *)g_Str_File_wonline_cpp,
                        4308);
                WideString::Reassign((void **)&v110, v36);
                SendDlgItemMessageA(v11, 1342, 0x4A8u, ebp62 | (unsigned __int16)dword_B7619C, (LPARAM)&var630);
                var630 = 1;
                if ( v149[4] > 0x3E7 || v149[4] < 0xA )
                {
                  WideString::Reassign((void **)&v108, (wchar_t *)&stru_87C374.__pad_579C[23588]);
                }
                else
                {
                  var630 = 2;
                  NumberBitmapWOL = Bitmap::GetNumberBitmapWOL((void *)(v149[4] % 0x64 / 0xA));
                }
                v37 = GetStringCSF(
                        (wchar_t *)&stru_84A738.attachedBomb,
                        0,
                        (CampaignScore *)g_Str_File_wonline_cpp,
                        4319);
                WideString::Reassign((void **)&v110, v37);
                SendDlgItemMessageA(v11, 1342, 0x4A8u, ebp62 | (unsigned __int16)dword_B76194, (LPARAM)&var630);
                var630 = 1;
                if ( v149[4] <= 0x3E7 && v149[4] )
                {
                  var630 = 2;
                  NumberBitmapWOL = Bitmap::GetNumberBitmapWOL((void *)(v149[4] % 0xA));
                }
                else
                {
                  WideString::Reassign((void **)&v108, (wchar_t *)&stru_87C374.__pad_579C[23588]);
                }
                v38 = GetStringCSF(
                        (wchar_t *)&stru_84A738.attachedBomb,
                        0,
                        (CampaignScore *)g_Str_File_wonline_cpp,
                        4330);
                WideString::Reassign((void **)&v110, v38);
                SendDlgItemMessageA(v11, 1342, 0x4A8u, ebp62 | (unsigned __int16)dword_B76198, (LPARAM)&var630);
                NumberBitmapWOL = Render_Find(v149);
                if ( NumberBitmapWOL )
                {
                  var630 = 2;
                }
                else
                {
                  var630 = 1;
                  WideString::Reassign((void **)&v108, (wchar_t *)&stru_87C374.__pad_579C[23588]);
                }
                v39 = GetStringCSF(
                        (wchar_t *)&stru_84A738.attachedBomb,
                        0,
                        (CampaignScore *)g_Str_File_wonline_cpp,
                        4341);
                WideString::Reassign((void **)&v110, v39);
                SendDlgItemMessageA(v11, 1342, 0x4A8u, ebp62 | (unsigned __int16)dword_B766BC, (LPARAM)&var630);
                v136 = 0;
                CampaignClass::GetValue((int)&stru_89E138.__pad_1258[392], (CCINIClass *)&v136);
                if ( (((1 << (char)v136) - 1) & v149[5]) == (1 << (char)v136) - 1 && (int)v136 > 0 )
                {
                  var630 = 2;
                  NumberBitmapWOL = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[536], 0);
                }
                else
                {
                  var630 = 1;
                  WideString::Reassign((void **)&v108, (wchar_t *)&stru_87C374.__pad_579C[23588]);
                }
                v40 = GetStringCSF(
                        (wchar_t *)&stru_84A738.attachedBomb,
                        0,
                        (CampaignScore *)g_Str_File_wonline_cpp,
                        4357);
                WideString::Reassign((void **)&v110, v40);
                SendDlgItemMessageA(v11, 1342, 0x4A8u, ebp62 | (unsigned __int16)dword_B76AC8, (LPARAM)&var630);
              }
            }
          }
LABEL_166:
          DeleteAndZero((int)&aP1_68);
          if ( ++v115 >= aP1_108 )
          {
            v10 = SendDlgItemMessageA;
            v7 = aP1_100;
            v5 = hDlg;
            goto LABEL_168;
          }
        }
      }
    }
  }
}


// ==== 0x00785360  DisplayRankingsThunkWOL  this=-  sig=ida-proto ====
void WOL_DisplayRankingsThunk()
{
  DisplayRankingsWOL(0); /*0x785364*/
}


// ==== 0x00785370  ObjectClass::InitializeWestwoodOnline  this=ObjectClass  sig=csp ====
int __thiscall InitializeWestwoodOnline(ObjectClass *this)
{
  CChatEventSink *v1; // eax
  CChatEventSink *v2; // esi
  CChatEventSink *v3; // edi
  int (__stdcall **X)(_DWORD, void *, DWORD *); // ecx
  int v5; // esi
  CNetUtilEventSink *v6; // eax
  CNetUtilEventSink *v7; // esi
  CNetUtilEventSink *v8; // eax
  CNetUtilEventSink *v9; // edi
  CampaignScore *v10; // esi
  CComObject_VCDownloadEventSink___ATL *v11; // eax
  char *inited; // eax
  int v13; // eax
  wchar_t *StringCSF; // eax
  BYTE Data[4]; // [esp+64h] [ebp-114h] BYREF
  DWORD cbData; // [esp+68h] [ebp-110h] BYREF
  HKEY phkResult; // [esp+6Ch] [ebp-10Ch] BYREF
  unsigned int v19; // [esp+70h] [ebp-108h] BYREF
  DWORD Type; // [esp+74h] [ebp-104h] BYREF
  CHAR SubKey[256]; // [esp+78h] [ebp-100h] BYREF

  dword_B764F8 = (int)&unk_825CD0; /*0x785376*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[25916] = &dword_B76488; /*0x785380*/
  dword_B76488 = 132; /*0x78538a*/
  dword_B764EC = 768; /*0x7853a1*/
  System_Init_7A2F30((int)&dword_B76488, 0, this); /*0x7853ab*/
  *(_QWORD *)(&g_MatrixTransformState + 2263) = 0; /*0x7853b0*/
  *(&g_MatrixTransformState + 2265) = 0; /*0x7853ce*/
  dword_B77E54 = 0; /*0x7853d4*/
  dword_B77E58 = 0; /*0x7853da*/
  dword_B77E5C = 0; /*0x7853e0*/
  CoCreateInstance(&stru_7F75E0, 0, 1u, &stru_7F7540, (LPVOID *)&g_MatrixTransformState + 2263); /*0x7853e6*/
  if ( !*(&g_MatrixTransformState + 2263) ) /*0x7853f2*/
    goto LABEL_40; /*0x7853f2*/
  v1 = (CChatEventSink *)__2_YAPAXI_Z(0x20u); /*0x7853fa*/
  v2 = v1; /*0x785405*/
  if ( v1 ) /*0x78540c*/
  {
    System_Init_7A41A0(v1->__pad_0); /*0x785410*/
    *(_DWORD *)v2->__pad_0 = &vt_ATL_CComObject_CChatEventSink; /*0x785415*/
    InterlockedIncrement(&Addend); /*0x785420*/
  }
  else
  {
    v2 = 0; /*0x785424*/
  }
  dword_B778F8 = (int)v2; /*0x78542f*/
  v3 = v2; /*0x785436*/
  X = (int (__stdcall **)(_DWORD, void *, DWORD *))(*(&g_MatrixTransformState + 2263))->X; /*0x785444*/
  cbData = 0; /*0x785446*/
  *(_DWORD *)Data = 0; /*0x78544a*/
  v5 = (*X)(*(&g_MatrixTransformState + 2263), &unk_7F7CD0, &cbData); /*0x785450*/
  if ( v5 >= 0 ) /*0x785454*/
  {
    v5 = (*(int (__stdcall **)(DWORD, void *, BYTE *))(*(_DWORD *)cbData + 16))(cbData, &unk_7F7550, Data); /*0x78546a*/
    if ( v5 >= 0 ) /*0x78546e*/
      v5 = (*(int (__stdcall **)(_DWORD, CChatEventSink *, int *))(**(_DWORD **)Data + 20))( /*0x785480*/
             *(_DWORD *)Data,
             v3,
             &dword_B77E54);
  }
  if ( *(_DWORD *)Data ) /*0x785488*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)Data + 8))(*(_DWORD *)Data); /*0x78548d*/
  if ( cbData ) /*0x785496*/
    (*(void (__stdcall **)(DWORD))(*(_DWORD *)cbData + 8))(cbData); /*0x78549b*/
  if ( !*(&g_MatrixTransformState + 2263) || v5 ) /*0x7854ac*/
  {
LABEL_40:
    StringCSF = GetStringCSF(aTxtApimissing, 0, (CampaignScore *)g_Str_File_wonline_cpp, 9180); /*0x785722*/
    goto LABEL_41; /*0x785722*/
  }
  CoCreateInstance(&stru_7F7600, 0, 1u, &stru_7F7580, (LPVOID *)&g_MatrixTransformState + 2264); /*0x7854c4*/
  if ( !*(&g_MatrixTransformState + 2264) ) /*0x7854d0*/
    goto LABEL_39; /*0x7854d0*/
  v6 = (CNetUtilEventSink *)__2_YAPAXI_Z(0x20u); /*0x7854d8*/
  v7 = v6; /*0x7854dd*/
  if ( v6 ) /*0x7854e4*/
  {
    System_Init_7A2FC0(v6); /*0x7854e8*/
    v7->vfptr = &off_7F766C; /*0x7854ed*/
    InterlockedIncrement(&Addend); /*0x7854f8*/
    v8 = v7; /*0x7854fa*/
  }
  else
  {
    v8 = 0; /*0x7854fe*/
  }
  dword_B736EC = (int)v8; /*0x785506*/
  *(_DWORD *)Data = 0; /*0x78550b*/
  cbData = 0; /*0x78550f*/
  v9 = v8; /*0x785513*/
  v10 = (CampaignScore *)(*(int (__stdcall **)(_DWORD, void *, BYTE *))(*(&g_MatrixTransformState + 2264))->X)( /*0x78552a*/
                           *(&g_MatrixTransformState + 2264),
                           &unk_7F7CD0,
                           Data);
  if ( (int)v10 >= 0 ) /*0x78552e*/
  {
    v10 = (CampaignScore *)(*(int (__stdcall **)(_DWORD, void *, DWORD *))(**(_DWORD **)Data + 16))( /*0x785544*/
                             *(_DWORD *)Data,
                             &unk_7F7590,
                             &cbData);
    if ( (int)v10 >= 0 ) /*0x785548*/
      v10 = (CampaignScore *)(*(int (__stdcall **)(DWORD, CNetUtilEventSink *, int *))(*(_DWORD *)cbData + 20))( /*0x78555a*/
                               cbData,
                               v9,
                               &dword_B77E58);
  }
  System_Init_7AC680((int *)&cbData); /*0x785560*/
  System_Init_7AC670((int *)Data); /*0x785569*/
  if ( !*(&g_MatrixTransformState + 2264) || v10 ) /*0x78557c*/
  {
LABEL_39:
    StringCSF = GetStringCSF(aTxtApimissing, 0, (CampaignScore *)g_Str_File_wonline_cpp, 9196); /*0x78570d*/
    goto LABEL_41; /*0x78570d*/
  }
  CoCreateInstance(&stru_7F75F0, 0, 1u, &stru_7F7560, (LPVOID *)&g_MatrixTransformState + 2265); /*0x785594*/
  if ( !*(&g_MatrixTransformState + 2265)
    || ((v11 = (CComObject_VCDownloadEventSink___ATL *)__2_YAPAXI_Z(0x20u)) == 0
      ? (inited = 0)
      : (inited = System_Init_7AD410(v11, 0)),
        (dword_B75F68 = (int)inited,
         v13 = System_Init_7A2EA0(
                 (int (__stdcall ***)(_DWORD, void *, int *))*(&g_MatrixTransformState + 2265),
                 (int)inited,
                 (int)&unk_7F7570,
                 (int)&dword_B77E5C),
         !*(&g_MatrixTransformState + 2265))
     || v13) )
  {
    StringCSF = GetStringCSF(aTxtApimissing, 0, (CampaignScore *)g_Str_File_wonline_cpp, 9212); /*0x785704*/
    goto LABEL_41; /*0x785704*/
  }
  (*(void (__stdcall **)(_DWORD, unsigned int *))((*(&g_MatrixTransformState + 2263))->X + 80))( /*0x785604*/
    *(&g_MatrixTransformState + 2263),
    &v19);
  if ( v19 < 0x10010 ) /*0x78560f*/
  {
    StringCSF = GetStringCSF((wchar_t *)aTxtApiwrongver, 0, (CampaignScore *)g_Str_File_wonline_cpp, 9224); /*0x785624*/
LABEL_41:
    ShowDialogConfirm((CampaignScore *)StringCSF, 0, 0, 0); /*0x785727*/
    return -2; /*0x785730*/
  }
  (*(void (__stdcall **)(_DWORD, char *, char *))((*(&g_MatrixTransformState + 2263))->X + 164))( /*0x78563b*/
    *(&g_MatrixTransformState + 2263),
    aRegpath,
    &stru_830620.__pad_BC0[464]);
  if ( &stru_830620 != (IUnknown *)-3472 ) /*0x785648*/
  {
    if ( strlen(&stru_830620.__pad_BC0[464]) ) /*0x785650*/
    {
      strcpy(SubKey, &stru_830620.__pad_BC0[464]); /*0x78567f*/
      if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &phkResult) ) /*0x785699*/
      {
        cbData = 4; /*0x7856bd*/
        if ( !RegQueryValueExA(phkResult, off_84A940, 0, &Type, Data, &cbData) ) /*0x7856c5*/
          (*(void (__stdcall **)(_DWORD, _DWORD))((*(&g_MatrixTransformState + 2263))->X + 140))( /*0x7856dc*/
            *(&g_MatrixTransformState + 2263),
            *(_DWORD *)Data);
        RegCloseKey(phkResult); /*0x7856e7*/
      }
    }
  }
  return 1; /*0x7856ed*/
}


// ==== 0x00785740  ObjectClass::LeaveChannelWOL  this=int  sig=csp ====
void __thiscall LeaveChannelWOL(const char *this)
{
  const char *v2; // ebp
  char *v3; // eax
  CellStruct *v4; // ecx
  int v5; // eax
  int v6; // ecx
  wchar_t *StringCSF; // eax
  HWND v8; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  SkirmishDialog *v11; // esi
  SkirmishDialog *v12; // eax
  SkirmishDialog *v13; // edi
  HWND v14; // eax
  SkirmishDialog *v15; // edi
  int v16; // ebx
  SessionClass *v19; // edi
  HWND GameUI; // eax
  signed int eax55; // eax
  int v20; // ebx
  int v21; // ebp
  signed int v22; // ecx
  int v23; // ebp
  AbstractClass *v24; // eax
  ObjectClass *v27; // esi
  AbstractClass *v28; // ebx
  char dl73; // dl
  size_t ecx73; // ecx
  int *v29; // esi
  HWND v30; // eax
  HWND v31; // eax
  HWND v32; // eax
  int v33; // esi
  char *v34; // eax
  int v35; // ecx
  CCINIClass *v38; // edi
  int v37; // eax
  int i; // esi
  wchar_t *v39; // ecx
  INIClass *v40; // eax
  ObjectClass *v43; // esi
  LRESULT v42; // eax
  LRESULT eax105; // eax
  _BYTE v44[264]; // [esp-4h] [ebp-108h] BYREF

  v2 = this + 36; /*0x785751*/
  *(_DWORD *)v44 = this + 36; /*0x785754*/
  *(_DWORD *)&v44[24] = this + 36; /*0x785755*/
  v3 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x785759*/
  _strcmpi(v3, *(const void **)v44); /*0x78575f*/
  if ( g_WOL_ProcessIdle ) /*0x785770*/
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1724), 0x2000, 1.0, 0); /*0x785788*/
  if ( (BYTE1(*(_DWORD *)this) & 0x80u) != 0 ) /*0x785792*/
  {
    Debug::Log(); /*0x78579d*/
    if ( g_NetworkLobbyState ) /*0x7857ac*/
      Debug::Log(); /*0x7857b3*/
    BulkCharToWide(&v44[28], (unsigned __int8 *)&g_WOL_IdleFlag, -1); /*0x7857c6*/
    if ( !strncmp(&g_WOL_IdleFlag, g_Str_Lob_41_, 7u) ) /*0x7857d7*/
    {
      v4 = (CellStruct *)atol((const char *)&g_WOL_IdleFlag + strlen(g_Str_Lob_41_)); /*0x7857fc*/
      v5 = (int)v4 / 8; /*0x785807*/
      v6 = (int)v4 % 8; /*0x785816*/
      if ( v5 ) /*0x785819*/
        swprintf( /*0x78584b*/
          (wchar_t *const)&v44[28],
          (const size_t)stru_84A738.customSound_controller,
          (const wchar_t *const)*(&dword_B73E1C + v6),
          (CampaignScore *)(v5 + 1));
      else
        swprintf( /*0x78582d*/
          (wchar_t *const)&v44[28],
          (const size_t)&off_8240B4,
          (const wchar_t *const)*(&dword_B73E1C + v6),
          *(CampaignScore **)&v44[4]);
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 3 /*0x785865*/
      && *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 1
      && *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 2 )
    {
      *(_DWORD *)v44 = &v44[28]; /*0x785870*/
      StringCSF = GetStringCSF(aTxtYouleft, 0, (CampaignScore *)g_Str_File_wonline_cpp, 9292); /*0x78587d*/
      Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)StringCSF, *(ObjectClass *)v44); /*0x785889*/
    }
    g_WOL_ChannelState = 0; /*0x785896*/
    Debug::Log(); /*0x78589c*/
    memset(&g_WOL_ProcessIdle, 0, 0x10Cu); /*0x7858b0*/
    memset(&g_WOL_LoginObject.referenceCount, 0, 0x940u); /*0x7858bc*/
    g_WOL_State = 0; /*0x7858c3*/
    dword_B77E4C = 0; /*0x7858c9*/
    v8 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7858cf*/
    if ( v8 ) /*0x7858d6*/
    {
      g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFFBF); /*0x7858e1*/
      if ( !g_WOL_ChannelList ) /*0x7858e7*/
        CloseDialog(v8, 0); /*0x7858ed*/
    }
    Current = Dialog::GetCurrent(); /*0x7858f2*/
    DlgItem = GetDlgItem(Current, 1344); /*0x7858fd*/
    if ( DlgItem ) /*0x785905*/
      SetFocus(DlgItem); /*0x785908*/
    *(_WORD *)&HouseClass_Player.__pad_5568[8302] = 0; /*0x785914*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[10320] = 0; /*0x78591c*/
    ++*(_DWORD *)&HouseClass_Player.__pad_5568[18432]; /*0x785922*/
    HouseClass_Player.__pad_5568[10286] = 0; /*0x78592d*/
    v11 = (SkirmishDialog *)Dialog::FindByHandle((void *)0x113); /*0x78593f*/
    if ( v11 && g_NetworkLobby_Init ) /*0x78594c*/
    {
      ShowWindow((HWND)v11, 0); /*0x785950*/
      Dialog::InitWindow(v11, 1); /*0x785955*/
    }
    v12 = (SkirmishDialog *)Dialog::FindByHandle((void *)0xC9); /*0x78595f*/
    v13 = v12; /*0x78596a*/
    if ( v12 ) /*0x78596e*/
    {
      CloseDialog((HWND)v12, 2); /*0x785977*/
      CleanupFileTree(); /*0x78597c*/
      ShowWindow((HWND)v13, 0); /*0x785984*/
      Dialog::InitWindow(v13, 1); /*0x785989*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 4 ) /*0x785996*/
      {
        if ( g_NetworkLobby_Init ) /*0x78599f*/
        {
          if ( v11 ) /*0x7859a3*/
          {
            ShowWindow((HWND)v11, 0); /*0x7859a8*/
            Dialog::InitWindow(v11, 1); /*0x7859ad*/
          }
        }
        else
        {
          JoinGameLobbyWOL(); /*0x7859b6*/
          if ( v11 ) /*0x7859bd*/
            PostMessageA((HWND)v11, 0x593u, 0, 0); /*0x7859c9*/
        }
      }
      else if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 5 ) /*0x7859d0*/
      {
        Debug::Log(); /*0x7859d7*/
        g_WOL_ChannelLeaveState = 1; /*0x7859df*/
      }
    }
    v14 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x7859ee*/
    v15 = (SkirmishDialog *)v14; /*0x7859f3*/
    if ( !v14 ) /*0x7859f7*/
      goto LABEL_40; /*0x7859f7*/
    CloseDialog(v14, 2); /*0x785a00*/
    CleanupFileTree(); /*0x785a05*/
    ShowWindow((HWND)v15, 0); /*0x785a0d*/
    Dialog::InitWindow(v15, 1); /*0x785a12*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 4 ) /*0x785a1f*/
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 5 ) /*0x785a59*/
        Debug::Log(); /*0x785a60*/
      goto LABEL_40; /*0x785a60*/
    }
    if ( g_NetworkLobby_Init ) /*0x785a28*/
    {
      if ( v11 ) /*0x785a2c*/
      {
        ShowWindow((HWND)v11, 0); /*0x785a31*/
        Dialog::InitWindow(v11, 1); /*0x785a36*/
        goto LABEL_40; /*0x785a3b*/
      }
    }
    else
    {
      JoinGameLobbyWOL(); /*0x785a3f*/
      if ( v11 ) /*0x785a46*/
      {
        PostMessageA((HWND)v11, 0x593u, 0, 0); /*0x785a52*/
LABEL_40:
        if ( v11 ) /*0x785a6a*/
        {
          if ( !g_NetworkLobby_Init ) /*0x785a73*/
          {
            ShowWindow((HWND)v11, 5); /*0x785a78*/
            Dialog::InitWindow(v11, 0); /*0x785a7d*/
          }
          GameListRenderWOL((CampaignScore *)v15); /*0x785a82*/
        }
      }
    }
    --*(_DWORD *)&HouseClass_Player.__pad_5568[18432]; /*0x785a87*/
    return; /*0x785a9c*/
  }
  if ( g_NetworkLobbyState == (CellStruct *)2 ) /*0x785aa4*/
  {
    Debug::Log(); /*0x785aab*/
    return; /*0x785abd*/
  }
  if ( this ) /*0x785ac0*/
  {
    v16 = 0; /*0x785ac2*/
    v19 = (SessionClass *)&HouseClass_Player.__pad_5568[18396]; /*0x785ac4*/
    while ( !v19->GameMode[0] || strcmp(ToWideStringChar((IUnknown *)v19->GameMode[0]), v2) ) /*0x785b01*/
    {
      v19 = (SessionClass *)((char *)v19 + 4); /*0x785b03*/
      ++v16; /*0x785b06*/
      if ( (int)v19 >= (int)&HouseClass_Player.__pad_5568[18428] ) /*0x785b0d*/
        goto LABEL_55; /*0x785b0d*/
    }
    GameUI = (HWND)Dialog::FindGameUI(); /*0x785b11*/
    if ( GameUI ) /*0x785b18*/
      UpdateLobbyGraphicsWOL(GameUI, v16, -1); /*0x785b20*/
  }
LABEL_55:
  eax55 = g_WOL_State; /*0x785b25*/
  v20 = 0; /*0x785b2a*/
  if ( (int)g_WOL_State > 0 ) /*0x785b32*/
  {
    v21 = 0; /*0x785b38*/
    while ( 1 ) /*0x785b3a*/
    {
      if ( v21 >= 0 && v20 < eax55 ) /*0x785b40*/
        qmemcpy(&v44[156], &g_WOL_ConnectionFlags[v21], 0x6Cu); /*0x785b56*/
      if ( !_strcmpi(&v44[192], *(const void **)&v44[24]) ) /*0x785b65*/
        break; /*0x785b65*/
      eax55 = g_WOL_State; /*0x785b71*/
      ++v20; /*0x785b76*/
      v21 += 3; /*0x785b77*/
      if ( v20 >= (int)g_WOL_State ) /*0x785b7c*/
        goto LABEL_86; /*0x785b7c*/
    }
    *(_DWORD *)&v44[20] = v20; /*0x785b8d*/
    v22 = v20; /*0x785b93*/
    if ( g_WOL_State ) /*0x785b95*/
    {
      if ( v20 < 0 ) /*0x785b9d*/
        v22 = 0; /*0x785b9f*/
      if ( v22 >= (int)g_WOL_State ) /*0x785ba3*/
        v22 = g_WOL_State - 1; /*0x785ba5*/
      memcpy( /*0x785bd1*/
        &g_WOL_ConnectionFlags[3 * v22],
        &g_WOL_ConnectionFlags[3 * v22 + 3],
        108 * g_WOL_State - 36 * (3 * v22 + 3));
      --g_WOL_State; /*0x785be5*/
      if ( (int)(3 * g_WOL_State) <= g_WOL_StateFlags ) /*0x785bef*/
      {
        v23 = g_WOL_StateFlags / 2; /*0x785bf8*/
        if ( g_WOL_StateFlags / 2 < 10 ) /*0x785bfd*/
          v23 = 10; /*0x785bff*/
        if ( v23 < g_WOL_StateFlags ) /*0x785c06*/
        {
          v24 = (AbstractClass *)__2_YAPAXI_Z(108 * v23); /*0x785c13*/
          v27 = (ObjectClass *)g_WOL_ConnectionFlags; /*0x785c18*/
          v28 = v24; /*0x785c23*/
          if ( g_WOL_ConnectionFlags ) /*0x785c25*/
          {
            dl73 = 108 * g_WOL_State; /*0x785c37*/
            ecx73 = (108 * g_WOL_State) >> 2; /*0x785c39*/
            qmemcpy(v24, g_WOL_ConnectionFlags, 4 * ecx73); /*0x785c3c*/
            qmemcpy((char *)v24 + 4 * ecx73, (char *)v27 + 4 * ecx73, dl73 & 3); /*0x785c43*/
            v27 = (ObjectClass *)g_WOL_ConnectionFlags; /*0x785c45*/
          }
          __3_YAXPAX_Z(v27); /*0x785c4c*/
          g_WOL_ConnectionFlags = v28; /*0x785c51*/
          v20 = *(_DWORD *)&v44[20]; /*0x785c57*/
          g_WOL_StateFlags = v23; /*0x785c5e*/
        }
      }
    }
    if ( g_WOL_ProcessIdle ) /*0x785c6b*/
    {
      memcpy( /*0x785c90*/
        &g_WOL_LoginObject.referenceCount + 37 * v20,
        (AbstractClass *)((char *)&unk_B76ED4 + 148 * v20),
        2220 - 148 * v20);
      if ( g_NetworkLobbyState != (CellStruct *)2 ) /*0x785ca0*/
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
        while ( v29 < &g_WOL_ChatPool ); /*0x785cd7*/
        if ( !dword_B77E4C ) /*0x785ce0*/
        {
          v32 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x785ce7*/
          EnablePlayerSlotControls(v32, 1); /*0x785cf0*/
        }
        Game::ResetReadyStates(); /*0x785cf5*/
      }
    }
    if ( !v20 ) /*0x785cfc*/
    {
      if ( !g_WOL_ProcessIdle ) /*0x785d05*/
        goto LABEL_109; /*0x785d05*/
      if ( !dword_B77E4C ) /*0x785d12*/
        (*(void (__stdcall **)(_DWORD))((*(&g_MatrixTransformState + 2263))->X + 36))(*(&g_MatrixTransformState + 2263)); /*0x785d1c*/
    }
  }
LABEL_86:
  if ( g_WOL_ProcessIdle ) /*0x785d26*/
  {
    Audio_Helper(*(void **)&v44[24]); /*0x785d32*/
    v33 = 0; /*0x785d3c*/
    if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x785d40*/
    {
      while ( 1 ) /*0x785d4c*/
      {
        v34 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v33)); /*0x785d4c*/
        if ( !_strcmpi(v34, *(const void **)&v44[24]) ) /*0x785d52*/
          break; /*0x785d52*/
        if ( ++v33 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x785d66*/
          goto LABEL_97; /*0x785d66*/
      }
      v35 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372]; /*0x785d6a*/
      v38 = *(CCINIClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v33); /*0x785d78*/
      if ( v33 < *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x785d7b*/
      {
        v37 = v33; /*0x785d7e*/
        --*(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x785d82*/
        if ( v33 < *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x785d88*/
        {
          while ( 1 ) /*0x785d96*/
          {
            *(_DWORD *)(v35 + 4 * v37) = *(_DWORD *)(v35 + 4 * v37 + 4); /*0x785d96*/
            if ( ++v37 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x785da2*/
              break; /*0x785da2*/
            v35 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372]; /*0x785d8c*/
          }
        }
      }
      Network_Disconnect_69BBF0(&HouseClass_Player.__pad_5568[8068], v33); /*0x785daa*/
      __3_YAXPAX_Z(v38); /*0x785db0*/
    }
LABEL_97:
    for ( i = 0; i < 8; ++i ) /*0x785db8*/
    {
      v39 = *(wchar_t **)&HouseClass_Player.__pad_5568[i * 4 + 18396]; /*0x785dbd*/
      if ( !v39 || !IsKnownPointer(v39) ) /*0x785dc7*/
        dword_B76440[i] = -1; /*0x785dd0*/
      v40 = (INIClass *)ToWideStringChar(*(IUnknown **)&HouseClass_Player.__pad_5568[i * 4 + 18396]); /*0x785ddc*/
      SetGameOptionsPing(v40); /*0x785de9*/
    }
    if ( dword_B77E4C ) /*0x785dfd*/
    {
      Game::ResetReadyStates(); /*0x785e03*/
      Lobby::BuildPlayerList(); /*0x785e08*/
      CheckGameSettingsChanged(1, 1); /*0x785e11*/
      if ( Dialog::GetCurrentType() == 107 ) /*0x785e1e*/
      {
        v43 = (ObjectClass *)Dialog::GetCurrent(); /*0x785e2b*/
        v42 = SendDlgItemMessageA((HWND)v43, 1771, 0x188u, 0, 0); /*0x785e3c*/
        if ( v42 != -1 ) /*0x785e41*/
        {
          eax105 = SendDlgItemMessageA((HWND)v43, 1771, 0x199u, v42, 0); /*0x785e51*/
          if ( eax105 ) /*0x785e55*/
          {
            (*(void (__thiscall **)(LRESULT))(*(_DWORD *)eax105 + 144))(eax105); /*0x785e5b*/
            DisplayRankingsWOL(0, 0); /*0x785e65*/
            return; /*0x785e74*/
          }
        }
      }
      else if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] ) /*0x785e7d*/
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 144))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x785e81*/
      }
    }
  }
LABEL_109:
  DisplayRankingsWOL(0, 0); /*0x785e87*/
}


// ==== 0x00785EA0  ObjectClass::RunWOLMainLoop_Delete  this=ObjectClass  sig=csp ====
HWND sub_785EA0()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  HWND result; // eax
  HANDLE *v5; // esi
  wchar_t *StringCSF; // eax
  int j; // ebp
  DWORD k; // esi
  HWND v9; // eax
  HWND v10; // eax
  HWND Current; // eax
  void *v12; // [esp+Ch] [ebp-4h] BYREF

  byte_B77DC0 = 1; /*0x785eac*/
  if ( MEMORY[0xA8B238][0] == 4 && MEMORY[0xA8B244] == 3 ) /*0x785ec0*/
  {
    v0 = g_WOL_MsgPool; /*0x785ec6*/
    for ( i = 0; i < g_WOL_MsgPool; v0 = g_WOL_MsgPool ) /*0x785ecf*/
    {
      v2 = *((_DWORD *)g_WOL_MessageQueue + i); /*0x785ed6*/
      while ( v2 ) /*0x785edb*/
      {
        v3 = (void **)v2; /*0x785edd*/
        v2 = *(_DWORD *)(v2 + 8); /*0x785edf*/
        DeleteAndZero(v3); /*0x785ee8*/
        __3_YAXPAX_Z(v3); /*0x785eee*/
      }
      *((_DWORD *)g_WOL_MessageQueue + i++) = 0; /*0x785f01*/
    }
    g_WOL_MessageConfig = 0; /*0x785f18*/
    if ( v0 > dword_B766B0 ) /*0x785f24*/
    {
      do /*0x785f46*/
      {
        if ( byte_B76694 ) /*0x785f2d*/
          break; /*0x785f2d*/
        HashMap::Shrink(&g_WOL_MessageQueue); /*0x785f34*/
      }
      while ( g_WOL_MsgPool > (unsigned int)dword_B766B0 ); /*0x785f46*/
    }
  }
  result = (HWND)MEMORY[0xAC116C]; /*0x785f48*/
  if ( MEMORY[0xAC116C] ) /*0x785f4f*/
  {
    v5 = &Handles; /*0x785f5b*/
    do /*0x785f6e*/
      ResetEvent(*v5++); /*0x785f63*/
    while ( (int)v5 < (int)g_WOL_RequestObject ); /*0x785f6e*/
    Game::ProcessIdle(); /*0x785f70*/
    if ( !(*(int (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 52))(MEMORY[0xAC116C]) ) /*0x785f7d*/
    {
      StringCSF = GetStringCSF(aTxtWolLoggingO, 0, g_Str_File_wonline_cpp, 9527); /*0x785f9a*/
      WideString::Assign((wchar_t **)&v12, StringCSF); /*0x785fa4*/
      ShowUIMessage(32, (wchar_t **)&v12, 0); /*0x785fb4*/
      DeleteAndZero::Alt(&v12); /*0x785fbd*/
      for ( j = 0; j < 5; ++j ) /*0x785fc8*/
      {
        for ( k = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x785fdf*/
              k == 258;
              k = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u) )
        {
          Game::ProcessIdle(); /*0x785fe1*/
        }
        ResetEvent(*(&Handles + k)); /*0x786005*/
        if ( !k ) /*0x786009*/
          break; /*0x786009*/
        if ( k == 9 ) /*0x78600e*/
          break; /*0x78600e*/
      }
    }
    v9 = (HWND)Dialog::FindByHandle((void *)0x11E); /*0x78601c*/
    if ( v9 ) /*0x786023*/
      CloseDialog(v9, 0); /*0x786029*/
    v10 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x786033*/
    if ( v10 ) /*0x78603a*/
    {
      g_WOL_ChannelList &= ~0x20u; /*0x786045*/
      if ( !g_WOL_ChannelList ) /*0x78604b*/
        CloseDialog(v10, 0); /*0x786051*/
    }
    Current = Dialog::GetCurrent(); /*0x786056*/
    result = GetDlgItem(Current, 1344); /*0x786061*/
    if ( result ) /*0x786069*/
      return SetFocus(result); /*0x78606c*/
  }
  return result; /*0x786072*/
}


// ==== 0x00786080  ObjectClass::HandleLogoutWOL  this=ObjectClass  sig=csp ====
char WOL_HandleLogout()
{
  void *v0; // esi
  HWND v1; // eax
  int (__stdcall **v2)(LPVOID, void *, int *); // ecx
  int v3; // esi
  int (__stdcall **v4)(LPVOID, void *, int *); // ecx
  int v5; // esi
  int (__stdcall **v6)(LPVOID, void *, int *); // ecx
  int v7; // esi
  HANDLE *v8; // esi
  int v10; // [esp+7Ch] [ebp-8h] BYREF
  int v11; // [esp+80h] [ebp-4h] BYREF

  v0 = MEMORY[0xAC1154]; /*0x786085*/
  if ( MEMORY[0xAC1154] ) /*0x78608f*/
  {
    ComPtr::Dtor(MEMORY[0xAC1154]); /*0x786093*/
    __3_YAXPAX_Z(v0); /*0x786099*/
    MEMORY[0xAC1154] = 0; /*0x7860a1*/
  }
  v1 = (HWND)Dialog::FindByHandle((void *)0x11E); /*0x7860ac*/
  if ( v1 ) /*0x7860b3*/
    LOBYTE(v1) = CloseDialog(v1, 0); /*0x7860b9*/
  if ( byte_B77E75 ) /*0x7860c4*/
  {
    WinMainSetup_Setup_5DB6F0_Setup(); /*0x7860ca*/
    if ( MEMORY[0xAC116C] ) /*0x7860d6*/
    {
      v2 = *(int (__stdcall ***)(LPVOID, void *, int *))MEMORY[0xAC116C]; /*0x7860d8*/
      v3 = dword_B77E54; /*0x7860da*/
      v11 = 0; /*0x7860e4*/
      v10 = 0; /*0x7860ef*/
      if ( (*v2)(MEMORY[0xAC116C], &unk_7F7CD0, &v11) >= 0 /*0x78610f*/
        && (*(int (__stdcall **)(int, void *, int *))(*(_DWORD *)v11 + 16))(v11, &unk_7F7550, &v10) >= 0 )
      {
        (*(void (__stdcall **)(int, int))(*(_DWORD *)v10 + 24))(v10, v3); /*0x786119*/
      }
      if ( v10 ) /*0x786122*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x786127*/
      if ( v11 ) /*0x786130*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x786135*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 8))(MEMORY[0xAC116C]); /*0x786140*/
    }
    if ( MEMORY[0xAC1170] ) /*0x78614a*/
    {
      v4 = *(int (__stdcall ***)(LPVOID, void *, int *))MEMORY[0xAC1170]; /*0x78614c*/
      v5 = dword_B77E58; /*0x78614e*/
      v10 = 0; /*0x786158*/
      v11 = 0; /*0x786163*/
      if ( (*v4)(MEMORY[0xAC1170], &unk_7F7CD0, &v10) >= 0 /*0x786183*/
        && (*(int (__stdcall **)(int, void *, int *))(*(_DWORD *)v10 + 16))(v10, &unk_7F7590, &v11) >= 0 )
      {
        (*(void (__stdcall **)(int, int))(*(_DWORD *)v11 + 24))(v11, v5); /*0x78618d*/
      }
      if ( v11 ) /*0x786196*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x78619b*/
      if ( v10 ) /*0x7861a4*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x7861a9*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC1170] + 8))(MEMORY[0xAC1170]); /*0x7861b4*/
    }
    if ( MEMORY[0xAC1174] ) /*0x7861be*/
    {
      v6 = *(int (__stdcall ***)(LPVOID, void *, int *))MEMORY[0xAC1174]; /*0x7861c0*/
      v7 = dword_B77E5C; /*0x7861c2*/
      v10 = 0; /*0x7861cc*/
      v11 = 0; /*0x7861d7*/
      if ( (*v6)(MEMORY[0xAC1174], &unk_7F7CD0, &v10) >= 0 /*0x7861f7*/
        && (*(int (__stdcall **)(int, void *, int *))(*(_DWORD *)v10 + 16))(v10, &unk_7F7570, &v11) >= 0 )
      {
        (*(void (__stdcall **)(int, int))(*(_DWORD *)v11 + 24))(v11, v7); /*0x786201*/
      }
      if ( v11 ) /*0x78620a*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x78620f*/
      if ( v10 ) /*0x786218*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x78621d*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC1174] + 8))(MEMORY[0xAC1174]); /*0x786228*/
    }
    MEMORY[0xAC116C] = 0; /*0x786232*/
    MEMORY[0xAC1170] = 0; /*0x786238*/
    MEMORY[0xAC1174] = 0; /*0x78623e*/
    v8 = &Handles; /*0x786244*/
    do /*0x786257*/
      CloseHandle(*v8++); /*0x78624c*/
    while ( (int)v8 < (int)g_WOL_RequestObject ); /*0x786257*/
    LOBYTE(v1) = HandleLogoutWOL_Handle(&dword_B76488); /*0x78625e*/
    byte_B77E75 = 0; /*0x786263*/
  }
  return (char)v1; /*0x78626a*/
}


// ==== 0x00786270  ObjectClass::Event_Process  this=ObjectClass  sig=csp ====
char sub_786270()
{
  HKEY phkResult; // [esp+4h] [ebp-110h] BYREF
  BYTE Data[4]; // [esp+8h] [ebp-10Ch] BYREF
  DWORD cbData; // [esp+Ch] [ebp-108h] BYREF
  DWORD Type; // [esp+10h] [ebp-104h] BYREF
  CHAR SubKey[256]; // [esp+14h] [ebp-100h] BYREF

  *(_DWORD *)Data = 0; /*0x78627e*/
  if ( MEMORY[0x8313B0] ) /*0x786286*/
  {
    if ( strlen(MEMORY[0x8313B0]) ) /*0x78628e*/
    {
      strcpy(SubKey, MEMORY[0x8313B0]); /*0x7862b6*/
      if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &phkResult) ) /*0x7862d5*/
      {
        cbData = 4; /*0x7862fb*/
        RegQueryValueExA(phkResult, off_84A940, 0, &Type, Data, &cbData); /*0x786303*/
        RegCloseKey(phkResult); /*0x78630e*/
      }
    }
  }
  dword_B77E50 = Data[0]; /*0x786328*/
  if ( MEMORY[0xAC116C] ) /*0x78632e*/
    (*(void (__stdcall **)(LPVOID, _DWORD))(*(_DWORD *)MEMORY[0xAC116C] + 140))(MEMORY[0xAC116C], *(_DWORD *)Data); /*0x786334*/
  if ( !MEMORY[0xAC1170] ) /*0x786341*/
    return 0; /*0x78637d*/
  Debug::Log(); /*0x786353*/
  (*(void (__stdcall **)(LPVOID, char *, int, int))(*(_DWORD *)MEMORY[0xAC1170] + 44))( /*0x786371*/
    MEMORY[0xAC1170],
    MEMORY[0xB73B34],
    dword_B76B0C,
    3);
  return 1; /*0x78631f*/
}


// ==== 0x00786390  LoginFlowWOL_Reset  this=unknown  sig=csp ====
int sub_786390()
{
  HANDLE *v1; // esi
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
  if ( MEMORY[0x8313B0] ) /*0x7863d2*/
  {
    if ( strlen(MEMORY[0x8313B0]) ) /*0x7863da*/
    {
      strcpy(SubKey, MEMORY[0x8313B0]); /*0x786405*/
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
  ResetSystemWOL(); /*0x78647a*/
  byte_B77DC0 = 1; /*0x786485*/
  v1 = &Handles; /*0x78648c*/
  do /*0x7864a6*/
    *v1++ = CreateEventA(0, 0, 0, 0); /*0x78649b*/
  while ( (int)v1 < (int)g_WOL_RequestObject ); /*0x7864a6*/
  return InitializeWestwoodOnline(g_hInstance); /*0x7863a4*/
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
  strcpy(this + 228, String::GetOrEmpty((char **)&g_WebBrowser)); /*0x7864f6*/
  strcpy(this + 238, String::GetOrEmpty(&g_WebBrowserConfig)); /*0x786525*/
  v2 = &Handles; /*0x786534*/
  do /*0x786547*/
    ResetEvent(*v2++); /*0x78653c*/
  while ( (int)v2 < (int)g_WOL_RequestObject ); /*0x786547*/
  String = GetStringCSF(aTxtConnectingS, 0, g_Str_File_wonline_cpp, 9702); /*0x78655a*/
  WideString::Assign((wchar_t **)&Block, String); /*0x786564*/
  ShowUIMessage(16, (wchar_t **)&Block, 0); /*0x786575*/
  DeleteAndZero::Alt((void **)&Block); /*0x78657e*/
  (*(void (__stdcall **)(LPVOID, char *, int, _DWORD))(*(_DWORD *)MEMORY[0xAC116C] + 20))( /*0x78659b*/
    MEMORY[0xAC116C],
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
        g_WOL_ChannelList = 0; /*0x7866f6*/
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
          g_WOL_ChannelList = 0; /*0x78663d*/
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
          g_WOL_ChannelList = 0; /*0x7866ac*/
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
        g_WOL_ChannelList = 0; /*0x786761*/
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
    g_WOL_ChannelList = 0; /*0x7867a7*/
    CloseDialog(v20, 0); /*0x7867ad*/
  }
  v21 = Dialog::GetCurrent(); /*0x7867b2*/
  v22 = GetDlgItem(v21, 1344); /*0x7867bd*/
  if ( v22 ) /*0x7867c5*/
    SetFocus(v22); /*0x7867c8*/
  (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)MEMORY[0xAC116C] + 212))(MEMORY[0xAC116C], 65552); /*0x7867db*/
  byte_B77DC0 = 0; /*0x7867e6*/
  ScenarioClass::LoadNetworkConfig((int)MEMORY[0xA8B238]); /*0x7867ec*/
  v55 = 0; /*0x7867f5*/
  v56 = 0; /*0x7867f9*/
  ReadRegistryOptionsWOL(&v55); /*0x7867fd*/
  ComPtr::Constructor(&v52); /*0x786806*/
  v52 = &vt_rc_ptr_PlayerProfile; /*0x786814*/
  if ( Flag::IsNot2(&v55) ) /*0x786818*/
  {
    v23 = LoadPlayerProfile(v54, (const char **)&g_WebBrowser); /*0x78682a*/
    ComPtr::Set(&v52, v23[1]); /*0x786837*/
    v54[0] = (int)&vt_rc_ptr_PlayerProfile; /*0x786840*/
    ComPtr::Release(v54); /*0x786844*/
  }
  else
  {
    ComPtr::Set(&v52, dword_B75E4C); /*0x786856*/
  }
  if ( MEMORY[0xA8B244] == 4 || MEMORY[0xA8B244] == 5 ) /*0x786868*/
  {
    String::Assign((char **)&Block, v50 + 24); /*0x78687a*/
    unknown_libname_73(v54); /*0x786883*/
    v24 = String::Tokenize((const char **)&Block, 0, MEMORY[0x8318B8], (void **)v54); /*0x786897*/
    if ( v24 >= 0 ) /*0x78689e*/
      String::Erase((const char **)&Block, 0, v24 + 1); /*0x7868a7*/
    String::AssignFromPtr((char **)&v50, (const char **)&Block); /*0x7868b5*/
    DeleteAndZero((void **)v54); /*0x7868be*/
    DeleteAndZero((void **)&Block); /*0x7868c7*/
    WOLOption::SetValue(&v50); /*0x7868d5*/
    DeleteAndZero((void **)&v50); /*0x7868de*/
    if ( Flag::IsNot2(&v55) ) /*0x7868e7*/
      SaveProfileWOL((int)v53, (const char **)&g_WebBrowser); /*0x7868f9*/
  }
  strcpy(MEMORY[0xA8B380], String::GetOrEmpty((char **)&g_WebBrowser)); /*0x786922*/
  SessionClass::AssignSide(MEMORY[0xA8B238], v53[7], 0); /*0x786938*/
  SessionClass::AssignColor(MEMORY[0xA8B238], v53[8], 0); /*0x78694b*/
  SaveConfigWOL((int)MEMORY[0xA8B238]); /*0x786955*/
  SavePersonaConfigWOL(&g_WebBrowser); /*0x78695f*/
  if ( MEMORY[0xAC1170] && strlen(g_WOL_ConnectFlag) ) /*0x786973*/
  {
    v25 = *(_DWORD *)MEMORY[0xAC1170]; /*0x78697f*/
    v47 = g_NetworkRematchState & 0xFFFF00; /*0x786991*/
    v26 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x786997*/
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(v25 + 20))( /*0x7869af*/
      MEMORY[0xAC1170],
      g_WOL_ConnectFlag,
      g_WOL_GameConfig,
      v26,
      v47,
      -1,
      0,
      0);
    v27 = *(_DWORD *)MEMORY[0xAC1170]; /*0x7869c7*/
    v48 = g_NetworkRematchState & 0xFFFF00; /*0x7869c9*/
    v28 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7869ca*/
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(v27 + 56))( /*0x7869e3*/
      MEMORY[0xAC1170],
      g_WOL_ConnectFlag,
      g_WOL_GameConfig,
      v28,
      v48);
  }
  v29 = &Handles; /*0x7869ec*/
  do /*0x7869ff*/
    ResetEvent(*v29++); /*0x7869f4*/
  while ( (int)v29 < (int)g_WOL_RequestObject ); /*0x7869ff*/
  memset(v57, 0, sizeof(v57)); /*0x786a0c*/
  strcpy(&v57[36], String::GetOrEmpty((char **)&g_WebBrowser)); /*0x786a36*/
  (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 188))(MEMORY[0xAC116C], v57); /*0x786a48*/
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
          g_WOL_ChannelList = 0; /*0x786acc*/
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
          g_WOL_ChannelList = 0; /*0x786b2c*/
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
    g_WOL_ChannelList = 0; /*0x786b60*/
    CloseDialog(v38, 0); /*0x786b66*/
  }
  v39 = Dialog::GetCurrent(); /*0x786b6b*/
  v34 = GetDlgItem(v39, 1344); /*0x786b76*/
  if ( v34 ) /*0x786b7e*/
LABEL_68:
    SetFocus(v34); /*0x786b80*/
LABEL_69:
  String::ToLowerCopy((const char **)&g_WebBrowser, (char **)&v51); /*0x786b87*/
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
          SaveProfileWOL((int)v53, (const char **)&g_WebBrowser); /*0x786c92*/
          v43 = v53; /*0x786c97*/
        }
        v45 = (void *)v43[4]; /*0x786ca0*/
        (*(void (__stdcall **)(LPVOID, void *))(*(_DWORD *)MEMORY[0xAC116C] + 184))(MEMORY[0xAC116C], v45); /*0x786ca7*/
        (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 188))(MEMORY[0xAC116C], v57); /*0x786cba*/
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
      SaveProfileWOL((int)v53, (const char **)&g_WebBrowser); /*0x786d08*/
    }
    if ( v41 ) /*0x786d0f*/
    {
LABEL_97:
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 184))(MEMORY[0xAC116C], v41); /*0x786d1a*/
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 188))(MEMORY[0xAC116C], v57); /*0x786d2d*/
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
  v52 = &vt_rc_ptr_PlayerProfile; /*0x786d70*/
  ComPtr::Release(&v52); /*0x786d78*/
  return 1; /*0x78666a*/
}


// ==== 0x00786DC0  ObjectClass::method_786DC0  this=ObjectClass  sig=csp ====
char __thiscall sub_786DC0(char **this)
{
  int v2; // esi
  char *v3; // eax
  void *v5; // [esp+0h] [ebp-18h]
  void *v6; // [esp+10h] [ebp-8h] BYREF
  const char *v7; // [esp+14h] [ebp-4h] BYREF

  DeleteAndZero::Alt2((void **)&g_WebBrowserConfig); /*0x786dcd*/
  v2 = 1; /*0x786dd2*/
  while ( 1 ) /*0x786de5*/
  {
    if ( !(*(int (__stdcall **)(LPVOID, int, void **, const char **))(*(_DWORD *)MEMORY[0xAC116C] + 144))( /*0x786dea*/
            MEMORY[0xAC116C],
            v2,
            &v6,
            &v7) )
    {
      if ( v6 ) /*0x786dfa*/
      {
        if ( strlen((const char *)v6) ) /*0x786dfe*/
        {
          v5 = v6; /*0x786e08*/
          v3 = String::GetOrEmpty_Alt(this); /*0x786e0b*/
          if ( !_strcmpi(v3, v5) ) /*0x786e11*/
            break; /*0x786e11*/
        }
      }
    }
    if ( ++v2 > 32 ) /*0x786e21*/
    {
      DeleteAndZero::Alt2((void **)&g_WebBrowser); /*0x786e28*/
      return 0; /*0x786e35*/
    }
  }
  String::Assign_Alt((void **)&g_WebBrowser, (const char *)v6); /*0x786e40*/
  String::Assign_Alt((void **)&g_WebBrowserConfig, v7); /*0x786e4f*/
  LOBYTE(dword_84A238) = 0; /*0x786e54*/
  return 1; /*0x786e2f*/
}


// ==== 0x00786E70  ObjectClass::method_786E70  this=ObjectClass  sig=csp ====
int __thiscall sub_786E70(const char **this)
{
  int v2; // ecx
  int v3; // edi
  int i; // esi
  char *v5; // eax
  char *v6; // eax

  if ( !String::Length(this) ) /*0x786e75*/
    return -1; /*0x786e75*/
  v2 = g_WOL_UserList; /*0x786e7e*/
  v3 = 1; /*0x786e84*/
  if ( g_WOL_UserList <= 1 ) /*0x786e8b*/
    return -1; /*0x786ed8*/
  for ( i = 248; ; i += 248 ) /*0x786e8d*/
  {
    v5 = 0; /*0x786e92*/
    if ( i >= 0 && v3 < v2 ) /*0x786e9a*/
      v5 = (char *)dword_B778E0 + i; /*0x786ea1*/
    v6 = strchr(v5 + 24, 58); /*0x786ea9*/
    if ( v6 ) /*0x786eb3*/
    {
      if ( *v6 && String::Equals_Alt(this, v6 + 1) ) /*0x786ebe*/
        break; /*0x786ebe*/
    }
    v2 = g_WOL_UserList; /*0x786ec7*/
    if ( ++v3 >= g_WOL_UserList ) /*0x786ed6*/
      return -1; /*0x786ed6*/
  }
  return v3; /*0x786ed8*/
}


// ==== 0x00786EF0  ObjectClass::LoginFlowWOL_Open  this=ObjectClass  sig=csp ====
char sub_786EF0()
{
  const char *v1; // [esp-8h] [ebp-110h]
  int v2; // [esp-4h] [ebp-10Ch]
  char Buffer[260]; // [esp+4h] [ebp-104h] BYREF

  if ( dword_B77DF8 == -2147221385 /*0x786f26*/
    || dword_B77DF8 == -2147221384
    || dword_B77DF8 == -2147221390
    || dword_B77DF8 == -2147221388
    || dword_B77DF8 == -2147221387
    || dword_B77DF8 == -2147221386 )
  {
    if ( ShowDialogConfirm(&word_B77AD0, 4, (int)GameLoop::Thunk, 0) == 6 ) /*0x786f60*/
    {
      switch ( dword_B77DF8 ) /*0x786f78*/
      {
        case -2147221390: /*0x786f78*/
          v2 = dword_B77E50; /*0x786f99*/
          v1 = aHttpApiregiste_1; /*0x786f9a*/
          goto LABEL_16; /*0x786f9f*/
        case -2147221388: /*0x786f78*/
          sprintf(Buffer, MEMORY[0x84B4C4], dword_B77E50); /*0x786fac*/
          break; /*0x786fac*/
        case -2147221387: /*0x786f78*/
          sprintf(Buffer, MEMORY[0x84B484], dword_B77E50); /*0x786fb9*/
          break; /*0x786fb9*/
        case -2147221386: /*0x786f78*/
          v2 = dword_B77E50; /*0x786fbb*/
          v1 = stru_84B448; /*0x786fbc*/
LABEL_16:
          sprintf(Buffer, v1, v2); /*0x786fc1*/
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
    ShowDialogConfirm(&word_B77AD0, 0, (int)GameLoop::Thunk, 0); /*0x786f36*/
    return 0; /*0x786f3b*/
  }
}


// ==== 0x00787010  ObjectClass::LoginFlowWOL  this=ObjectClass  sig=csp ====
int WOL_LoginFlow()
{
  int result; // eax
  wchar_t *String; // eax
  int v2; // ecx
  int v3; // eax
  int v4; // esi
  char *v5; // eax
  int v6; // esi
  const char **v7; // edi
  char *v8; // eax
  const char **v9; // edi
  char *v10; // eax
  char **Config; // eax
  int v12; // eax
  unsigned __int16 v13; // si
  HWND v14; // esi
  HWND DlgItem; // eax
  int v16; // ecx
  _DWORD *v17; // eax
  const char **v18; // ebp
  int v19; // ecx
  int v20; // esi
  int v21; // edi
  char *v22; // eax
  char *v23; // eax
  int v24; // eax
  char *v25; // esi
  char *v26; // eax
  HWND v27; // eax
  HWND Current; // eax
  HWND v29; // eax
  unsigned __int8 v30; // [esp-8h] [ebp-50h]
  void *v31; // [esp-4h] [ebp-4Ch]
  int v32; // [esp-4h] [ebp-4Ch]
  char v33; // [esp+13h] [ebp-35h]
  void *v34[3]; // [esp+14h] [ebp-34h] BYREF
  int v35; // [esp+20h] [ebp-28h]
  void *v36; // [esp+24h] [ebp-24h] BYREF
  char v37; // [esp+28h] [ebp-20h]
  const char *v38; // [esp+2Ch] [ebp-1Ch] BYREF
  int v39; // [esp+30h] [ebp-18h]
  int v40; // [esp+34h] [ebp-14h] BYREF
  char v41; // [esp+38h] [ebp-10h]
  _DWORD v42[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v33 = 0; /*0x787019*/
  dword_B77DF8 = 0; /*0x78701e*/
  result = LoginFlowWOL_Reset(); /*0x787024*/
  if ( result != 1 ) /*0x78702c*/
    return result; /*0x78702c*/
  memset(&g_WOL_ProcessIdle, 0, 0x10Cu); /*0x787043*/
  memset(&dword_B73BE8, 0, 0x10Cu); /*0x78704f*/
  g_WOL_AuthPool = 0; /*0x78705d*/
  g_WOL_ChatState = 0; /*0x787063*/
  g_WOL_State = 0; /*0x787069*/
  g_WOL_ChannelState = 0; /*0x78706f*/
  v35 = 0; /*0x787075*/
  String = GetStringCSF(g_Str_TXT_FETCHING_SERVLIST, 0, g_Str_File_wonline_cpp, 24300); /*0x787079*/
  WideString::Assign((wchar_t **)v34, String); /*0x787083*/
  ShowUIMessage(16, (wchar_t **)v34, 0); /*0x787092*/
  DeleteAndZero::Alt(v34); /*0x78709b*/
  v2 = 8960; /*0x7870a5*/
  if ( MEMORY[0xA8B244] != 3 ) /*0x7870ad*/
    v2 = 10496; /*0x7870af*/
  v3 = LoginWOL(v2); /*0x7870b4*/
  if ( v3 ) /*0x7870bb*/
  {
    v33 = 1; /*0x7870c0*/
    v35 = -2; /*0x7870c5*/
    if ( v3 == 2 ) /*0x7870cd*/
      v35 = -1; /*0x7870cf*/
  }
  v40 = 0; /*0x7870db*/
  v41 = 0; /*0x7870df*/
  ReadRegistryOptionsWOL(&v40); /*0x7870e4*/
  if ( v33 ) /*0x7870ef*/
    goto LABEL_98; /*0x7870ef*/
  if ( (unsigned __int8)InfantryClass::SetField6(&v40) ) /*0x7870f9*/
  {
    ReadAutoLoginWOL((char **)v34); /*0x78710f*/
    if ( String::Length((const char **)v34) ) /*0x787118*/
    {
      DeleteAndZero::Alt2((void **)&g_WebBrowserConfig); /*0x78712a*/
      v4 = 1; /*0x78712f*/
      while ( 1 ) /*0x787142*/
      {
        if ( !(*(int (__stdcall **)(LPVOID, int, void **, const char **))(*(_DWORD *)MEMORY[0xAC116C] + 144))( /*0x787147*/
                MEMORY[0xAC116C],
                v4,
                &v36,
                &v38) )
        {
          if ( v36 ) /*0x787157*/
          {
            if ( strlen((const char *)v36) ) /*0x78715b*/
            {
              v31 = v36; /*0x787165*/
              v5 = String::GetOrEmpty_Alt((char **)v34); /*0x78716a*/
              if ( !_strcmpi(v5, v31) ) /*0x787170*/
                break; /*0x787170*/
            }
          }
        }
        if ( ++v4 > 32 ) /*0x787180*/
        {
          DeleteAndZero::Alt2((void **)&g_WebBrowser); /*0x787187*/
          goto LABEL_48; /*0x78718c*/
        }
      }
      String::Assign_Alt((void **)&g_WebBrowser, (const char *)v36); /*0x78719b*/
      String::Assign_Alt((void **)&g_WebBrowserConfig, v38); /*0x7871aa*/
      v6 = -1; /*0x7871b4*/
      LOBYTE(dword_84A238) = 0; /*0x7871ba*/
      if ( MEMORY[0xA8B244] == 3 || MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2 ) /*0x7871cb*/
      {
        LoadPlayerProfile(&v38, (const char **)v34); /*0x7871d9*/
        if ( !v39 ) /*0x7871e4*/
          goto LABEL_29; /*0x7871e4*/
        v7 = (const char **)(v39 + 12); /*0x7871e6*/
        if ( !String::Length((const char **)(v39 + 12)) ) /*0x7871eb*/
          goto LABEL_29; /*0x7871eb*/
        v6 = 1; /*0x7871f9*/
        if ( g_WOL_UserList <= 1 ) /*0x787200*/
          goto LABEL_29; /*0x787200*/
        while ( 1 ) /*0x78720d*/
        {
          v36 = 0; /*0x78720d*/
          GetBuddyEntryWOL(&g_WOL_UserList, &v36, v6); /*0x787211*/
          v8 = strchr((const char *)v36 + 24, 58); /*0x787220*/
          if ( v8 ) /*0x78722a*/
          {
            if ( *v8 && String::Equals_Alt(v7, v8 + 1) ) /*0x787235*/
              break; /*0x787235*/
          }
          if ( ++v6 >= g_WOL_UserList ) /*0x787246*/
            goto LABEL_29; /*0x787246*/
        }
        if ( v6 == -1 ) /*0x78724d*/
LABEL_29:
          v6 = dword_B76468; /*0x78724f*/
        v38 = (const char *)&vt_rc_ptr_PlayerProfile; /*0x787255*/
      }
      else
      {
        LoadPlayerProfile(&v38, (const char **)v34); /*0x78726a*/
        if ( v39 ) /*0x787275*/
        {
          if ( String::Length((const char **)(v39 + 12)) ) /*0x78727a*/
          {
            v9 = (const char **)(v39 + 12); /*0x78728f*/
            if ( String::Length((const char **)(v39 + 12)) && (v6 = 1, g_WOL_UserList > 1) ) /*0x7872a9*/
            {
              while ( 1 ) /*0x7872b6*/
              {
                v36 = 0; /*0x7872b6*/
                GetBuddyEntryWOL(&g_WOL_UserList, &v36, v6); /*0x7872ba*/
                v10 = strchr((const char *)v36 + 24, 58); /*0x7872c9*/
                if ( v10 ) /*0x7872d3*/
                {
                  if ( *v10 && String::Equals_Alt(v9, v10 + 1) ) /*0x7872de*/
                    break; /*0x7872de*/
                }
                if ( ++v6 >= g_WOL_UserList ) /*0x7872ef*/
                  goto LABEL_40; /*0x7872ef*/
              }
            }
            else
            {
LABEL_40:
              v6 = -1; /*0x7872f1*/
            }
          }
          else
          {
            v6 = dword_B76468; /*0x787283*/
          }
        }
        v38 = (const char *)&vt_rc_ptr_PlayerProfile; /*0x7872f4*/
      }
      ComPtr::Release(&v38); /*0x7872fc*/
      if ( v6 != -1 ) /*0x787304*/
      {
        dword_B76468 = v6; /*0x787309*/
        if ( v6 >= 1 && v6 < g_WOL_UserList ) /*0x787317*/
        {
          v36 = 0; /*0x787324*/
          GetBuddyEntryWOL(&g_WOL_UserList, &v36, v6); /*0x787328*/
          if ( ConnectAndLoginWOL((char *)v36) ) /*0x787331*/
          {
            DeleteAndZero(v34); /*0x78733e*/
            return 1; /*0x78734f*/
          }
        }
        v33 = LoginFlowWOL_Open(); /*0x787355*/
      }
    }
LABEL_48:
    DeleteAndZero(v34); /*0x787359*/
  }
  if ( !String::Length((const char **)&g_WebBrowser) && Flag::IsNot2(&v40) ) /*0x787374*/
  {
    Config = LoadConfigWOL((char **)&v38); /*0x787381*/
    String::Reassign((char **)&g_WebBrowser, (const char **)Config); /*0x78738c*/
    DeleteAndZero((void **)&v38); /*0x787395*/
  }
  String::Assign((char **)&v36, &MEMORY[0x889F64]); /*0x7873a3*/
  ReadSettingsWOL(&v36); /*0x7873ac*/
  DeleteAndZero(&v36); /*0x7873b5*/
  if ( v33 ) /*0x7873c0*/
    return 0; /*0x7873cb*/
  Debug::Log(); /*0x7873d1*/
  SimpleDialogControl::Constructor(v42); /*0x7873dd*/
  v42[0] = &off_7F7624; /*0x7873eb*/
  v12 = -Flag::IsNot2(&v40); /*0x7873f6*/
  LOBYTE(v12) = v12 & 0xF2; /*0x7873f8*/
  v13 = v12 + 285; /*0x7873ff*/
  LoginFlowWOL_Load_72C600(); /*0x787401*/
  Screen::Capture(1, 0, (int)&off_7F7624, 0); /*0x78740a*/
  v14 = (HWND)CreateDialog(v13, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))OptionsDlgProcWOL, (LPARAM)v42); /*0x787420*/
  Dialog::Show(v14); /*0x787424*/
  if ( !String::Length((const char **)&g_WebBrowser) || String::Length((const char **)&g_WebBrowserConfig) ) /*0x78743c*/
    DlgItem = GetDlgItem(v14, 1576); /*0x787452*/
  else
    DlgItem = GetDlgItem(v14, 1836); /*0x78744a*/
  SetFocus(DlgItem); /*0x787459*/
  while ( !(unsigned __int8)ObjectClass::Release(v42) ) /*0x787463*/
  {
    if ( Game::ProcessIdle() ) /*0x78746c*/
      break; /*0x787473*/
    if ( Dialog::PumpMessages() ) /*0x787475*/
      break; /*0x78747c*/
    LOBYTE(v16) = 0; /*0x78747e*/
    ScreenSaver::Process(v16); /*0x787480*/
  }
  Dialog::Destroy(v14); /*0x787494*/
  LoginFlowWOL_Destroy_72C650(); /*0x787499*/
  if ( ObjectClass::GetMember01(v42) == 2 ) /*0x7874aa*/
  {
    v33 = 1; /*0x7874ac*/
LABEL_97:
    v42[0] = &off_7F7624; /*0x787704*/
    OwnerDrawControl::InitVtable(v42); /*0x78770c*/
LABEL_98:
    v27 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x787711*/
    if ( v27 ) /*0x78771d*/
    {
      g_WOL_ChannelList = 0; /*0x787723*/
      CloseDialog(v27, 0); /*0x787729*/
    }
    Current = Dialog::GetCurrent(); /*0x78772e*/
    v29 = GetDlgItem(Current, 1344); /*0x787739*/
    if ( v29 ) /*0x787741*/
      SetFocus(v29); /*0x787744*/
    if ( !v33 ) /*0x787750*/
      LoginFlowWOL_Open(); /*0x787752*/
    byte_B77DC0 = 1; /*0x78775b*/
    return v35; /*0x787757*/
  }
  Game::ProcessIdle(); /*0x7874b6*/
  byte_B77DC0 = 0; /*0x7874bf*/
  v36 = 0; /*0x7874c6*/
  v37 = 0; /*0x7874ca*/
  ReadRegistryOptionsWOL(&v36); /*0x7874cf*/
  ComPtr::Constructor(&v38); /*0x7874d8*/
  v38 = (const char *)&vt_rc_ptr_PlayerProfile; /*0x7874e6*/
  if ( Flag::IsNot2(&v36) ) /*0x7874ea*/
  {
    v17 = LoadPlayerProfile(v34, (const char **)&g_WebBrowser); /*0x7874fc*/
    ComPtr::Set(&v38, v17[1]); /*0x787509*/
    v34[0] = &vt_rc_ptr_PlayerProfile; /*0x787512*/
    ComPtr::Release(v34); /*0x787516*/
  }
  else
  {
    ComPtr::Set(&v38, dword_B75E4C); /*0x787528*/
  }
  v18 = (const char **)(v39 + 12); /*0x787531*/
  if ( !String::Length((const char **)(v39 + 12)) ) /*0x787536*/
    goto LABEL_82; /*0x787536*/
  v19 = g_WOL_UserList; /*0x787543*/
  v20 = 1; /*0x787549*/
  if ( g_WOL_UserList <= 1 ) /*0x787550*/
  {
LABEL_77:
    v24 = dword_B76468; /*0x78759d*/
    goto LABEL_78; /*0x78759d*/
  }
  v21 = 248; /*0x787552*/
  while ( 1 ) /*0x787557*/
  {
    v22 = 0; /*0x787557*/
    if ( v21 >= 0 && v20 < v19 ) /*0x78755f*/
      v22 = (char *)dword_B778E0 + v21; /*0x787566*/
    v23 = strchr(v22 + 24, 58); /*0x78756e*/
    if ( v23 ) /*0x787578*/
    {
      if ( *v23 && String::Equals_Alt(v18, v23 + 1) ) /*0x787583*/
        break; /*0x787583*/
    }
    v19 = g_WOL_UserList; /*0x78758c*/
    ++v20; /*0x787592*/
    v21 += 248; /*0x787593*/
    if ( v20 >= g_WOL_UserList ) /*0x78759b*/
      goto LABEL_77; /*0x78759b*/
  }
  if ( v20 == -1 ) /*0x7875b5*/
  {
LABEL_82:
    v24 = dword_B76468; /*0x7875c6*/
    v19 = g_WOL_UserList; /*0x7875cb*/
  }
  else
  {
    v19 = g_WOL_UserList; /*0x7875b7*/
    v24 = v20; /*0x7875bd*/
    dword_B76468 = v20; /*0x7875bf*/
  }
LABEL_78:
  if ( v24 < v19 ) /*0x7875a4*/
  {
    if ( v24 != -1 ) /*0x7875d6*/
    {
      if ( v24 >= 1 ) /*0x7875f0*/
        goto LABEL_87; /*0x7875f0*/
LABEL_96:
      v38 = (const char *)&vt_rc_ptr_PlayerProfile; /*0x7876f1*/
      ComPtr::Release(&v38); /*0x7876fd*/
      goto LABEL_97; /*0x7876fd*/
    }
  }
  else
  {
    dword_B76468 = -1; /*0x7875a6*/
  }
  if ( v19 <= 1 ) /*0x7875db*/
    goto LABEL_96; /*0x7875db*/
  v24 = 1; /*0x7875e1*/
  dword_B76468 = 1; /*0x7875e6*/
LABEL_87:
  if ( v24 >= v19 || !ConnectAndLoginWOL((char *)dword_B778E0 + 248 * v24) ) /*0x787614*/
    goto LABEL_96; /*0x78761b*/
  if ( byte_B77E68 && Flag::IsNot2(&v36) ) /*0x78762e*/
  {
    v32 = *(_DWORD *)(v39 + 16); /*0x787644*/
    v30 = dword_84A238; /*0x787645*/
    v25 = String::GetOrEmpty(&g_WebBrowserConfig); /*0x787655*/
    v26 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x787657*/
    FindChannelWOL(v26, (int)v25, v30, v32); /*0x787660*/
    SaveConfigWOL((int)MEMORY[0xA8B238]); /*0x78766a*/
  }
  if ( (unsigned __int8)InfantryClass::SetField6(&v36) && (unsigned __int8)ReadWOLLobbyPlayerOption() ) /*0x78767c*/
  {
    Screen::Capture(1, 0, (int)&off_7F7624, (int)v18); /*0x787689*/
    SimpleDialogControl::Constructor(v34); /*0x787692*/
    v34[0] = &off_7F7624; /*0x787697*/
    LoginFlowWOL_Load(); /*0x78769b*/
    RunDialog(0x112u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_79AE00, (LPARAM)v34); /*0x7876af*/
    LoginFlowWOL_Destroy(); /*0x7876b4*/
    v34[0] = &off_7F7624; /*0x7876bd*/
    OwnerDrawControl::InitVtable(v34); /*0x7876c1*/
  }
  v38 = (const char *)&vt_rc_ptr_PlayerProfile; /*0x7876ca*/
  ComPtr::Release(&v38); /*0x7876d2*/
  v42[0] = &off_7F7624; /*0x7876db*/
  OwnerDrawControl::InitVtable(v42); /*0x7876df*/
  return 1; /*0x787348*/
}


// ==== 0x00787770  NetworkLobbyWOL  this=unknown  sig=csp ====
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
  unsigned int v11; // eax
  VectorClass *v12; // ebx
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
  DWORD n; // esi
  HWND v27; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  HWND v30; // eax
  DWORD ii; // ebx
  HWND v32; // eax
  HWND v33; // eax
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
  HWND v46; // eax
  unsigned int v47; // eax
  unsigned int jj; // ebp
  SessionClass *v49; // esi
  SessionClass *v50; // edi
  unsigned int v51; // ecx
  int *v52; // ebp
  int v53; // esi
  int *v54; // edi
  int v55; // ebx
  int v56; // esi
  int v57; // edx
  int v58; // ecx
  int v59; // eax
  char *v60; // [esp+4h] [ebp-2Ch] BYREF
  char *v61; // [esp+8h] [ebp-28h]
  int v62; // [esp+Ch] [ebp-24h]
  char v63; // [esp+23h] [ebp-Dh]
  int v64; // [esp+24h] [ebp-Ch]
  void *v65; // [esp+28h] [ebp-8h] BYREF
  void *v66; // [esp+2Ch] [ebp-4h] BYREF

  v63 = a2; /*0x787780*/
  v64 = 0; /*0x787786*/
  if ( g_NetworkLobby_Init /*0x7877bb*/
    && MEMORY[0xA8B238][0] == 4
    && MEMORY[0xA8B244] == 3
    && MEMORY[0xA8D584] != -1
    && MEMORY[0xA8D584] < 8 )
  {
    WideString::Assign((wchar_t **)&v65, (wchar_t *)&MEMORY[0xA8D1FC] + 56 * MEMORY[0xA8D584]); /*0x7877d8*/
    ToWideStringCharAlt((char **)&v66, (const wchar_t **)&v65); /*0x7877e5*/
    DeleteAndZero::Alt(&v65); /*0x7877ee*/
    v3 = String::GetOrEmpty((char **)&v66); /*0x7877fe*/
    if ( !_strnicmp(v3, MEMORY[0xA8B380], 0x14u) ) /*0x787804*/
    {
      if ( !MEMORY[0xA8B3AC] ) /*0x78781b*/
      {
        v61 = 0; /*0x787828*/
        v62 = 0; /*0x78782b*/
        unknown_libname_73(&v65); /*0x78782e*/
        v60 = 0; /*0x78784e*/
        for ( i = 0; i < dword_B736F8; ++i ) /*0x787859*/
        {
          DynamicStringArray::Get(&dword_B736F8, (char **)&v65, i); /*0x787866*/
          StringVector::Insert((int *)&v60, (const char **)&v65, (int)v60); /*0x787875*/
        }
LABEL_24:
        DeleteAndZero(&v65); /*0x78795b*/
        Network_Delete((int)v60, (int)v61, (void **)v62); /*0x787960*/
        goto LABEL_25; /*0x787960*/
      }
      if ( MEMORY[0xA8B3AC] == 1 ) /*0x787890*/
      {
        v60 = 0; /*0x78789f*/
        v61 = 0; /*0x7878a1*/
        v62 = 0; /*0x7878a4*/
        unknown_libname_73(&v65); /*0x7878a7*/
        Array::CleanupArrayWOL((int *)&v60); /*0x7878ae*/
        v5 = dword_B73BD8; /*0x7878b3*/
        for ( j = 0; j < dword_B73BD8; ++j ) /*0x7878bc*/
        {
          if ( j >= 0 && j < v5 ) /*0x7878c4*/
            String::Reassign((char **)&v65, (const char **)dword_B73BE0 + j); /*0x7878d3*/
          StringVector::Insert((int *)&v60, (const char **)&v65, (int)v60); /*0x7878e2*/
          v5 = dword_B73BD8; /*0x7878e7*/
        }
        goto LABEL_24; /*0x7878ef*/
      }
    }
    else if ( !MEMORY[0xA8B3AC] ) /*0x7878f9*/
    {
      v60 = 0; /*0x787904*/
      v61 = 0; /*0x787906*/
      v62 = 0; /*0x787909*/
      unknown_libname_73(&v65); /*0x78790c*/
      Array::CleanupArrayWOL((int *)&v60); /*0x787913*/
      v7 = dword_B76510; /*0x787918*/
      for ( k = 0; k < dword_B76510; ++k ) /*0x787921*/
      {
        if ( k >= 0 && k < v7 ) /*0x787929*/
          String::Reassign((char **)&v65, (const char **)dword_B76518 + k); /*0x787939*/
        StringVector::Insert((int *)&v60, (const char **)&v65, (int)v60); /*0x787948*/
        v7 = dword_B76510; /*0x78794d*/
      }
      goto LABEL_24; /*0x787955*/
    }
LABEL_25:
    DeleteAndZero(&v66); /*0x787965*/
  }
  g_NetworkLobby_Init = 0; /*0x78796e*/
  g_NetworkLobbyState = 0; /*0x78797d*/
  if ( MEMORY[0xA8B238][0] == 4 && MEMORY[0xA8B244] == 3 ) /*0x78798c*/
  {
    (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)MEMORY[0xAC116C] + 180))(MEMORY[0xAC116C], MEMORY[0xA8B3AC]); /*0x78799d*/
    if ( !byte_B77E10 ) /*0x7879aa*/
      InitVersionStringsWOL(); /*0x7879ac*/
  }
  Network::Init(); /*0x7879b1*/
  if ( !byte_B77DC2 || (result = LoginFlowWOL(), result == 1) ) /*0x7879c7*/
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
      if ( String::Length((const char **)&MEMORY[0xB73AE0]) ) /*0x787a15*/
      {
        v11 = String::Length((const char **)&MEMORY[0xB73AE0]); /*0x787a27*/
        v12 = (VectorClass *)__2_YAPAXI_Z(v11 + 1); /*0x787a33*/
        if ( v12 ) /*0x787a3a*/
        {
          v13 = String::GetOrEmpty((char **)&MEMORY[0xB73AE0]); /*0x787a4a*/
          v62 = (int)MEMORY[0x83F328]; /*0x787a51*/
          v61 = strcpy(v12->vtable0, v13); /*0x787a66*/
          v15 = strtok(v61, (const char *)v62); /*0x787a74*/
          while ( v15 ) /*0x787a7b*/
          {
            String::Assign((char **)&v66, v15); /*0x787a82*/
            CharStringToWide((wchar_t **)&v65, (const char **)&v66); /*0x787a8f*/
            DeleteAndZero(&v66); /*0x787a98*/
            v16 = WideString::GetOrEmpty((wchar_t **)&v65); /*0x787aa1*/
            Dialog::ShowMessage(-1, (size_t)v16); /*0x787aae*/
            v15 = strtok(0, MEMORY[0x83F328]); /*0x787ac6*/
            DeleteAndZero::Alt(&v65); /*0x787ac8*/
          }
          Dialog::ShowMessage(-1, (size_t)asc_830174); /*0x787add*/
          DeleteAndZero::Alt2(&MEMORY[0xB73AE0]); /*0x787aea*/
          __3_YAXPAX_Z(v14); /*0x787af0*/
        }
      }
      StringCSF = GetStringCSF(aGuiLogincomple, 0, g_Str_File_wonline_cpp, 10388); /*0x787b09*/
      WideString::Assign((wchar_t **)&v66, StringCSF); /*0x787b13*/
      ShowUIMessage(16, (wchar_t **)&v66, 0); /*0x787b23*/
      DeleteAndZero::Alt(&v66); /*0x787b2c*/
    }
    dword_B77DE0 = 1; /*0x787b3f*/
    ++dword_B77DDC; /*0x787b49*/
    (*(void (__stdcall **)(LPVOID, _DWORD))(*(_DWORD *)MEMORY[0xAC116C] + 176))(MEMORY[0xAC116C], 0); /*0x787b53*/
    for ( m = 0; m < g_WindowManager; ++m ) /*0x787b62*/
      Object::DtorWithDelete((void **)g_WOL_LoginQueue + m, 0); /*0x787b6e*/
    v19 = 0; /*0x787b82*/
    for ( g_WindowManager = 0; v19 < g_WOL_RequestManager; ++v19 ) /*0x787b8c*/
      Object::DtorWithDelete((void **)g_WOL_SessionID + v19, 0); /*0x787b97*/
    g_WOL_RequestManager = 0; /*0x787bab*/
    HashTable::CleanupAndResize(&g_WOL_AccountInfo); /*0x787bb1*/
    HashTable::Rebuild(&g_WOL_EventQueue); /*0x787bbb*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 220))(MEMORY[0xAC116C]); /*0x787bc8*/
    if ( MEMORY[0xA8B244] != 3 && MEMORY[0xA8B244] != 1 && MEMORY[0xA8B244] != 2 ) /*0x787be0*/
      RefreshChannelListWOL(); /*0x787be2*/
    RefreshGameListWOL(); /*0x787be7*/
    dword_84A1BC = 41; /*0x787bfd*/
    v20 = GetStringCSF(aTxtReqChanlist, 0, g_Str_File_wonline_cpp, 10408); /*0x787c11*/
    v21 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x787c13*/
    if ( v21 ) /*0x787c20*/
      SendDlgItemMessageA(v21, 1458, 0x4B2u, 0, (LPARAM)v20); /*0x787c30*/
    if ( !g_WOL_RequestState || RequestChannelListWOL() ) /*0x787c41*/
    {
      v22 = &Handles; /*0x787c4e*/
      do /*0x787c65*/
        ResetEvent(*v22++); /*0x787c56*/
      while ( (int)v22 < (int)g_WOL_RequestObject ); /*0x787c65*/
      v62 = 0; /*0x787c67*/
      v61 = 0; /*0x787c69*/
      v60 = MEMORY[0x84A554]; /*0x787c6b*/
      v66 = 0; /*0x787c70*/
      Debug::Log(); /*0x787c78*/
      if ( (*(int (__stdcall **)(LPVOID, void *, _DWORD))(*(_DWORD *)MEMORY[0xAC116C] + 24))(MEMORY[0xAC116C], v66, 0) ) /*0x787c8f*/
      {
        SetEvent(Handles); /*0x787d0d*/
      }
      else
      {
        Network_Helper_7ADB00((int *)&g_WOL_RequestState, &v66, g_WOL_RequestState); /*0x787ca6*/
        if ( RequestChannelListWOL() ) /*0x787cab*/
        {
          v23 = GetStringCSF(g_Str_TXT_JOINLOB, 0, g_Str_File_wonline_cpp, 10415); /*0x787cd3*/
          v24 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x787cd5*/
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
              Game::ProcessIdle(); /*0x787d4c*/
            }
            ResetEvent(*(&Handles + n)); /*0x787d70*/
            if ( !n || n == 5 ) /*0x787d83*/
            {
LABEL_86:
              CloseDialog(hWnd, 0); /*0x787f79*/
              Game::ProcessIdle(); /*0x787f82*/
              hWnd = 0; /*0x787f8c*/
              if ( MEMORY[0xAC116C] ) /*0x787f90*/
                (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]); /*0x787f95*/
            }
            else
            {
              g_WOL_ChannelLeaveState = 0; /*0x787d91*/
              PostMessageA(hWnd, 0x593u, 0, 0); /*0x787d97*/
              v27 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x787da2*/
              if ( v27 ) /*0x787da9*/
              {
                g_WOL_ChannelList = 0; /*0x787daf*/
                CloseDialog(v27, 0); /*0x787db5*/
              }
              Current = Dialog::GetCurrent(); /*0x787dba*/
              DlgItem = GetDlgItem(Current, 1344); /*0x787dc5*/
              if ( DlgItem ) /*0x787dc9*/
                SetFocus(DlgItem); /*0x787dd2*/
              SetFocus(g_hWnd); /*0x787de3*/
              ShowWindow(hWnd, 1); /*0x787de8*/
              SetFocus(hWnd); /*0x787def*/
              v30 = GetDlgItem(hWnd, 1344); /*0x787df7*/
              SetFocus(v30); /*0x787dfa*/
              dword_B77DBC = 0; /*0x787dfc*/
              dword_B77DB8 = time(0); /*0x787e11*/
              while ( 1 ) /*0x787e27*/
              {
                for ( ii = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u); /*0x787e2f*/
                      ii == 258;
                      ii = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u) )
                {
                  Game::ProcessIdle(); /*0x787e35*/
                  if ( g_WOL_ChannelLeaveState ) /*0x787e41*/
                  {
                    v62 = 0; /*0x787e47*/
                    v32 = GetDlgItem(hWnd, 1341); /*0x787e4f*/
                    EnableWindow(v32, v62); /*0x787e52*/
                    v62 = 0; /*0x787e54*/
                    v33 = GetDlgItem(hWnd, 1774); /*0x787e5c*/
                    EnableWindow(v33, v62); /*0x787e5f*/
                    v62 = 0; /*0x787e61*/
                    v34 = GetDlgItem(hWnd, 1581); /*0x787e69*/
                    EnableWindow(v34, v62); /*0x787e6c*/
                    v62 = 0; /*0x787e6e*/
                    v35 = GetDlgItem(hWnd, 1579); /*0x787e76*/
                    EnableWindow(v35, v62); /*0x787e79*/
                    v62 = 0; /*0x787e7b*/
                    v36 = GetDlgItem(hWnd, 1673); /*0x787e83*/
                    EnableWindow(v36, v62); /*0x787e86*/
                    v62 = 0; /*0x787e88*/
                    v37 = GetDlgItem(hWnd, 1672); /*0x787e90*/
                    EnableWindow(v37, v62); /*0x787e93*/
                    v62 = 0; /*0x787e95*/
                    v38 = GetDlgItem(hWnd, 1955); /*0x787e9d*/
                    EnableWindow(v38, v62); /*0x787ea0*/
                    v62 = 0; /*0x787ea2*/
                    v39 = GetDlgItem(hWnd, 1958); /*0x787eaa*/
                    EnableWindow(v39, v62); /*0x787ead*/
                    v62 = 0; /*0x787eaf*/
                    v40 = GetDlgItem(hWnd, 1567); /*0x787eb7*/
                    EnableWindow(v40, v62); /*0x787eba*/
                    v62 = 0; /*0x787ebc*/
                    v41 = GetDlgItem(hWnd, 1474); /*0x787ec4*/
                    EnableWindow(v41, v62); /*0x787ec7*/
                    v62 = 0; /*0x787ec9*/
                    v42 = GetDlgItem(hWnd, 1670); /*0x787ed1*/
                    EnableWindow(v42, v62); /*0x787ed4*/
                    if ( JoinGameLobbyWOL() == -1 ) /*0x787ee0*/
                    {
                      v62 = 1; /*0x787ee2*/
                      v43 = GetDlgItem(hWnd, 1670); /*0x787eea*/
                      EnableWindow(v43, v62); /*0x787eed*/
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
                    v64 = 2; /*0x787f66*/
LABEL_85:
                    word_B77AD0 = 0; /*0x787f6e*/
                    goto LABEL_86; /*0x787f6e*/
                  case 5u: /*0x787f4c*/
                    goto LABEL_88; /*0x787f56*/
                  case 7u: /*0x787f4c*/
                    v64 = 1; /*0x788155*/
                    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]); /*0x788160*/
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
    v44 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x787f98*/
    if ( v44 ) /*0x787fa6*/
    {
      g_WOL_ChannelList = 0; /*0x787fac*/
      CloseDialog(v44, 0); /*0x787fb2*/
    }
    v45 = Dialog::GetCurrent(); /*0x787fb7*/
    v46 = GetDlgItem(v45, 1344); /*0x787fc2*/
    if ( v46 ) /*0x787fc6*/
      SetFocus(v46); /*0x787fc9*/
    ShowDialogConfirm(&word_B77AD0, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x787fdc*/
    if ( hWnd ) /*0x787fe3*/
      CloseDialog(hWnd, 0); /*0x787fe9*/
    while ( CloseDialog(0, 0) ) /*0x787ff2*/
      ; /*0x787ffb*/
    Network_Destroy(); /*0x788008*/
    if ( v64 == 1 ) /*0x788012*/
      g_NetworkLobby_Init = 1; /*0x788014*/
    if ( MEMORY[0xA8B238][0] == 4 && MEMORY[0xA8B244] == 3 ) /*0x78802f*/
    {
      v47 = g_WOL_MsgPool; /*0x788035*/
      for ( jj = 0; jj < g_WOL_MsgPool; v47 = g_WOL_MsgPool ) /*0x78803e*/
      {
        v49 = (SessionClass *)*((_DWORD *)g_WOL_MessageQueue + jj); /*0x788045*/
        while ( v49 ) /*0x78804a*/
        {
          v50 = v49; /*0x78804c*/
          v49 = (SessionClass *)v49->unknown_08; /*0x78804e*/
          DeleteAndZero((void **)v50); /*0x788057*/
          __3_YAXPAX_Z(v50); /*0x78805d*/
        }
        *((_DWORD *)g_WOL_MessageQueue + jj++) = 0; /*0x788070*/
      }
      v51 = dword_B766B0; /*0x78807d*/
      g_WOL_MessageConfig = 0; /*0x788083*/
      if ( v47 > dword_B766B0 ) /*0x78808b*/
      {
        do /*0x78813e*/
        {
          if ( byte_B76694 || v47 <= v51 ) /*0x7880a1*/
            break; /*0x7880a1*/
          v52 = (int *)g_WOL_MessageQueue; /*0x7880ad*/
          v53 = v47; /*0x7880b3*/
          g_WOL_MsgPool = v47 >> 1; /*0x7880b8*/
          --dword_B7668C; /*0x7880c4*/
          g_WOL_MessageQueue = __2_YAPAXI_Z(4 * (v47 >> 1)); /*0x7880dd*/
          memset(g_WOL_MessageQueue, 0, 4 * g_WOL_MsgPool); /*0x7880e5*/
          if ( v53 > 0 ) /*0x7880e7*/
          {
            v54 = v52; /*0x7880e9*/
            v55 = v53; /*0x7880eb*/
            do /*0x788126*/
            {
              v56 = *v54; /*0x7880ed*/
              if ( *v54 ) /*0x7880ed*/
              {
                do /*0x788120*/
                {
                  v57 = dword_B76698(v56) & ((1 << dword_B7668C) - 1); /*0x788109*/
                  v58 = *((_DWORD *)g_WOL_MessageQueue + v57); /*0x788110*/
                  *((_DWORD *)g_WOL_MessageQueue + v57) = v56; /*0x788113*/
                  v59 = *(_DWORD *)(v56 + 8); /*0x788116*/
                  *(_DWORD *)(v56 + 8) = v58; /*0x788119*/
                  v56 = v59; /*0x78811e*/
                }
                while ( v59 ); /*0x788120*/
              }
              ++v54; /*0x788122*/
              --v55; /*0x788125*/
            }
            while ( v55 ); /*0x788126*/
          }
          __3_YAXPAX_Z(v52); /*0x788129*/
          v51 = dword_B766B0; /*0x78812e*/
          v47 = g_WOL_MsgPool; /*0x788134*/
        }
        while ( g_WOL_MsgPool > (unsigned int)dword_B766B0 ); /*0x78813e*/
      }
    }
    return v64; /*0x788144*/
  }
  return result; /*0x788148*/
}


// ==== 0x00788180  FindLobbyIDWOL  this=unknown  sig=csp ====
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

  v1 = g_WOL_AuthPool; /*0x788189*/
  v17 = g_WOL_AuthPool; /*0x7881a2*/
  memset(v32, 0, sizeof(v32)); /*0x7881a6*/
  if ( MEMORY[0xA8B238][0] == 4 && MEMORY[0xA8B244] == 3 ) /*0x7881bc*/
  {
    memset(Destination, 0, sizeof(Destination)); /*0x7881d2*/
    memset(String2, 0, 0x20u); /*0x7881e0*/
    memset(Buffer, 0, sizeof(Buffer)); /*0x7881eb*/
    memset(Source, 0, sizeof(Source)); /*0x7881f9*/
    v2 = __2_YAPAXI_Z(0x28u); /*0x7881fb*/
    v3 = 0; /*0x788200*/
    if ( v2 ) /*0x788207*/
      v4 = MixFileClass::FromFile(v2, MEMORY[0x84B63C], (int)&MEMORY[0x886980]); /*0x78821a*/
    else
      v4 = 0; /*0x78821e*/
    v18[1] = 0; /*0x788224*/
    v18[2] = 0; /*0x788228*/
    GenericNode::Constructor(v19); /*0x78822c*/
    GenericNode::Constructor(v20); /*0x788235*/
    LinkedList::Prepend(v19, (int)v20); /*0x78824b*/
    v18[3] = &vt_List_INIClass_INISection; /*0x788257*/
    memset(&v20[3], 0, 12); /*0x788264*/
    v21 = 0; /*0x788270*/
    v22 = 0; /*0x788275*/
    v23 = 0; /*0x788279*/
    v18[0] = &vt_INIClass; /*0x78827d*/
    CCFileClass::Construct(v28, aWdtmapmdIni); /*0x788285*/
    FileStraw::Open(v18, (int)v28, 0); /*0x788297*/
    sprintf(Buffer, MEMORY[0x84B62C], *(_DWORD *)MEMORY[0xA8B240]); /*0x7882ad*/
    strcpy(Source, Buffer); /*0x7882d4*/
    if ( *(_BYTE *)(*(_DWORD *)(FindLobbyIDWOL_Find() + 4) + 20) ) /*0x7882ef*/
      INIClass::GetString( /*0x788313*/
        (unsigned __int8 ***)v18,
        (unsigned __int8 *)MEMORY[0x84B614],
        (unsigned __int8 *)Buffer,
        Source,
        Destination,
        32);
    else
      INIClass::GetString( /*0x788308*/
        (unsigned __int8 ***)v18,
        (unsigned __int8 *)MEMORY[0x84B61C],
        (unsigned __int8 *)Buffer,
        Source,
        Destination,
        32);
    INIClass::GetString( /*0x788338*/
      (unsigned __int8 ***)v18,
      (unsigned __int8 *)Destination,
      (unsigned __int8 *)MEMORY[0x817854],
      stru_84B608,
      v31,
      32);
    BulkCharToWide(String2, (unsigned __int8 *)v31, -1); /*0x78834d*/
    dword_B75E50 = (int)_wcsdup(String2); /*0x788364*/
    if ( v4 ) /*0x788369*/
      (*(void (__thiscall **)(_DWORD *, int))*v4)(v4, 1); /*0x788372*/
    v28[0] = &vt_CCFileClass; /*0x78837b*/
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
      if ( (int)v7 >= (int)&dword_B73E1C && v6 < g_WOL_AuthPool ) /*0x788419*/
      {
        qmemcpy(v32, (char *)dword_B73E18 + v3, sizeof(v32)); /*0x788430*/
        v1 = v17; /*0x788432*/
        v7 = v14; /*0x788436*/
      }
      if ( MEMORY[0xA8B238][0] != 4 || MEMORY[0xA8B244] != 3 ) /*0x78844a*/
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
    if ( (int)v13 >= (int)&dword_B73E1C && v6 < g_WOL_AuthPool ) /*0x78850a*/
    {
      qmemcpy(v32, (char *)dword_B73E18 + (_DWORD)v14, sizeof(v32)); /*0x788524*/
      v1 = v17; /*0x788526*/
    }
    if ( MEMORY[0xA8B238][0] == 4 && MEMORY[0xA8B244] == 3 ) /*0x78853a*/
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
    if ( v8 >= 0 && v8 < g_WOL_AuthPool ) /*0x7886a7*/
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

  if ( g_WOL_ChannelState ) /*0x78871e*/
  {
    Debug::Log(); /*0x788734*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]); /*0x788744*/
    StringCSF = GetStringCSF(MEMORY[0x84B644], 0, g_Str_File_wonline_cpp, 10704); /*0x788758*/
    WideString::Assign((wchar_t **)&v10, StringCSF); /*0x788762*/
    ShowUIMessage(a1, (wchar_t **)&v10, a2); /*0x78876e*/
    DeleteAndZero::Alt(&v10); /*0x788777*/
    for ( i = 0; g_WOL_ChannelState; ++i ) /*0x788785*/
    {
      if ( i >= 150 ) /*0x788793*/
        break; /*0x788793*/
      Sleep(0x64u); /*0x788797*/
      Game::ProcessIdle(); /*0x788799*/
    }
    v6 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7887ad*/
    if ( v6 ) /*0x7887b4*/
    {
      g_WOL_ChannelList &= ~0x40u; /*0x7887bf*/
      if ( !g_WOL_ChannelList ) /*0x7887c5*/
        CloseDialog(v6, 0); /*0x7887cb*/
    }
    Current = Dialog::GetCurrent(); /*0x7887d0*/
    DlgItem = GetDlgItem(Current, 1344); /*0x7887db*/
    if ( DlgItem ) /*0x7887e3*/
      SetFocus(DlgItem); /*0x7887e6*/
  }
  return g_WOL_ChannelState == 0; /*0x7887f6*/
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
  if ( !strcmp((const char *)(a1 + 52), g_WOL_IdleFlag) || !strcmp((const char *)(a1 + 52), &byte_B73C1C) ) /*0x788855*/
  {
    DeleteAndZero::Alt(&a3); /*0x788a17*/
    return 0; /*0x788a1c*/
  }
  else
  {
    if ( !g_WOL_ChannelState ) /*0x788887*/
      goto LABEL_14; /*0x788887*/
    Debug::Log(); /*0x78889d*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]); /*0x7888ad*/
    String = GetStringCSF(MEMORY[0x84B644], 0, g_Str_File_wonline_cpp, 10704); /*0x7888c1*/
    WideString::Assign((wchar_t **)&v12, String); /*0x7888cb*/
    ShowUIMessage(64, (wchar_t **)&v12, 1); /*0x7888db*/
    DeleteAndZero::Alt(&v12); /*0x7888e4*/
    for ( i = 0; g_WOL_ChannelState; ++i ) /*0x7888f2*/
    {
      if ( i >= 150 ) /*0x788900*/
        break; /*0x788900*/
      Sleep(0x64u); /*0x788904*/
      Game::ProcessIdle(); /*0x788906*/
    }
    v6 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x78891a*/
    if ( v6 ) /*0x788921*/
    {
      g_WOL_ChannelList &= ~0x40u; /*0x78892c*/
      if ( !g_WOL_ChannelList ) /*0x788932*/
        CloseDialog(v6, 0); /*0x788938*/
    }
    Current = Dialog::GetCurrent(); /*0x78893d*/
    DlgItem = GetDlgItem(Current, 1344); /*0x788948*/
    if ( DlgItem ) /*0x788950*/
      SetFocus(DlgItem); /*0x788953*/
    if ( g_WOL_ChannelState ) /*0x788960*/
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
      v11 = (*(int (__stdcall **)(LPVOID, int))(*(_DWORD *)MEMORY[0xAC116C] + 32))(MEMORY[0xAC116C], a1); /*0x788a00*/
      DeleteAndZero::Alt(&a3); /*0x788a02*/
      return v11; /*0x788a07*/
    }
  }
}


// ==== 0x00788A30  JoinGameLobbyWOL  this=-  sig=ida-proto ====
int WOL_JoinGameLobby()
{
  int v0; // eax
  int v1; // ebx
  wchar_t *String; // eax
  wchar_t *v3; // ecx
  int v4; // esi
  HWND v5; // eax
  HWND DlgItem; // eax
  wchar_t *v8; // [esp-4h] [ebp-120h] BYREF
  void *v9; // [esp+Ch] [ebp-110h] BYREF
  _BYTE v10[268]; // [esp+10h] [ebp-10Ch] BYREF

  v0 = FindLobbyIDWOL(); /*0x788a39*/
  v1 = v0; /*0x788a3e*/
  if ( v0 == -1 ) /*0x788a43*/
    goto LABEL_9; /*0x788a43*/
  if ( v0 >= 0 && v0 < g_WOL_AuthPool ) /*0x788a53*/
    qmemcpy(v10, (char *)dword_B73E18 + 268 * v0, sizeof(v10)); /*0x788a71*/
  String::Assign((char **)&v9, aZotclot9); /*0x788a7c*/
  String = GetStringCSF(g_Str_TXT_JOINLOB, 0, g_Str_File_wonline_cpp, 10753); /*0x788a92*/
  v8 = v3; /*0x788a97*/
  WideString::Assign(&v8, String); /*0x788a9b*/
  v4 = LeaveChannelExWOL((char)v8); /*0x788ab1*/
  DeleteAndZero(&v9); /*0x788ab3*/
  if ( v4 ) /*0x788aba*/
  {
LABEL_9:
    GameListRenderWOL(); /*0x788aee*/
    return -1; /*0x788af3*/
  }
  else
  {
    v5 = (HWND)Dialog::FindByHandle((void *)0x113); /*0x788ac1*/
    if ( v5 ) /*0x788ac8*/
    {
      DlgItem = GetDlgItem(v5, 1344); /*0x788ad0*/
      SetFocus(DlgItem); /*0x788ad7*/
    }
    GameListRenderWOL(); /*0x788add*/
    return v1; /*0x788ae2*/
  }
}


// ==== 0x00788B00  ObjectClass::CreateAccountWOL  this=int  sig=csp ====
int __usercall WOL_CreateAccount@<eax>(HWND a1@<ecx>, int a2@<ebx>, int a3@<ebp>)
{
  HANDLE *v3; // esi
  wchar_t *String; // eax
  DWORD i; // esi
  HWND v6; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  HWND v9; // esi
  DLGTEMPLATE *Indirect; // esi
  char *v12; // edi
  HWND v13; // eax
  HWND v14; // eax
  char *v15; // edi
  HWND v16; // eax
  HWND v17; // eax
  int v18; // eax
  wchar_t *v19; // eax
  int v20; // edi
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  DLGTEMPLATE *v25; // esi
  char *v26; // edi
  HWND v27; // eax
  HWND v28; // eax
  char *v29; // edi
  HWND v30; // eax
  HWND v31; // eax
  char *v32; // edi
  HWND v33; // eax
  HWND v34; // eax
  char *v35; // edi
  HWND v36; // eax
  HWND v37; // eax
  char *v38; // edi
  wchar_t *v39; // eax
  wchar_t *v40; // eax
  wchar_t *v41; // eax
  wchar_t *v42; // eax
  wchar_t *v43; // eax
  wchar_t *v44; // eax
  HWND v45; // esi
  HWND v46; // esi
  int v47; // [esp+44h] [ebp-28Ch] BYREF
  HWND hWnd; // [esp+48h] [ebp-288h]
  int v49; // [esp+4Ch] [ebp-284h]
  WPARAM wParam; // [esp+50h] [ebp-280h]
  void *v51; // [esp+54h] [ebp-27Ch] BYREF
  void *v52; // [esp+58h] [ebp-278h] BYREF
  void *v53; // [esp+5Ch] [ebp-274h] BYREF
  int v54; // [esp+60h] [ebp-270h]
  int v55; // [esp+64h] [ebp-26Ch]
  int v56; // [esp+68h] [ebp-268h]
  void *v57; // [esp+6Ch] [ebp-264h] BYREF
  char v58[32]; // [esp+70h] [ebp-260h] BYREF
  char v59[32]; // [esp+90h] [ebp-240h] BYREF
  char v60[32]; // [esp+B0h] [ebp-220h] BYREF
  LPARAM lParam[32]; // [esp+D0h] [ebp-200h] BYREF
  char v62[128]; // [esp+150h] [ebp-180h] BYREF
  char Buffer[256]; // [esp+1D0h] [ebp-100h] BYREF

  hWnd = a1; /*0x788b0c*/
  RenderGadgetClassAnimation(a1, 0); /*0x788b10*/
  Screen::Capture(1, 0, a2, a3); /*0x788b19*/
  wParam = 1; /*0x788b2b*/
  v54 = 1; /*0x788b2f*/
  v56 = 0; /*0x788b33*/
  v49 = 0; /*0x788b37*/
  v3 = &Handles; /*0x788b3b*/
  do /*0x788b4e*/
    ResetEvent(*v3++); /*0x788b43*/
  while ( (int)v3 < (int)g_WOL_RequestObject ); /*0x788b4e*/
  memset(v60, 0, sizeof(v60)); /*0x788b60*/
  memset(v58, 0, sizeof(v58)); /*0x788b6b*/
  memset(v59, 0, sizeof(v59)); /*0x788b76*/
  memset(lParam, 0, sizeof(lParam)); /*0x788b84*/
  memset(v62, 0, sizeof(v62)); /*0x788b92*/
  String = GetStringCSF(MEMORY[0x84B7D8], 0, g_Str_File_wonline_cpp, 10826); /*0x788ba0*/
  WideString::Assign((wchar_t **)&v47, String); /*0x788baa*/
  ShowUIMessage(128, (wchar_t **)&v47, 0); /*0x788bb9*/
  DeleteAndZero::Alt((void **)&v47); /*0x788bc2*/
  Debug::Log(); /*0x788bcc*/
  (*(void (__stdcall **)(LPVOID, int, int, char *, char *, int))(*(_DWORD *)MEMORY[0xAC116C] + 16))( /*0x788bf4*/
    MEMORY[0xAC116C],
    g_NetworkRematchState,
    65537,
    MEMORY[0x84B7AC],
    MEMORY[0x84B7B4],
    35);
  do /*0x788c3a*/
  {
    for ( i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x788c11*/
          i == 258;
          i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u) )
    {
      Game::ProcessIdle(); /*0x788c13*/
    }
    ResetEvent(*(&Handles + i)); /*0x788c36*/
  }
  while ( i > 1 ); /*0x788c3a*/
  v6 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x788c46*/
  if ( v6 ) /*0x788c4d*/
  {
    g_WOL_ChannelList = 0; /*0x788c53*/
    CloseDialog(v6, 0); /*0x788c59*/
  }
  Current = Dialog::GetCurrent(); /*0x788c5e*/
  DlgItem = GetDlgItem(Current, 1344); /*0x788c6f*/
  if ( DlgItem ) /*0x788c73*/
    SetFocus(DlgItem); /*0x788c76*/
  if ( !i ) /*0x788c7e*/
  {
    v9 = hWnd; /*0x788c80*/
    ShowWindow(hWnd, 5); /*0x788c87*/
    return Dialog::InitWindow(v9, 0); /*0x788c9e*/
  }
  while ( 1 ) /*0x788cd6*/
  {
    CreateAccountWOL_Create(); /*0x788cd6*/
    Screen::Capture(1, 0, (int)GetDlgItem, (int)SendMessageA); /*0x788cdf*/
    Indirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, 231, g_hWnd, (DLGPROC)CreateAccountDlgProcWOL, 0); /*0x788d02*/
    SetupDialog((HWND)Indirect, 231); /*0x788d0b*/
    SendDlgItemMessageA((HWND)Indirect, 1582, 0x14Eu, v54 - 1, 0); /*0x788d23*/
    if ( v56 <= 0 ) /*0x788d2f*/
    {
      v14 = GetDlgItem((HWND)Indirect, 1583); /*0x788d69*/
      SendMessageA(v14, 0x4B4u, 0, (LPARAM)&MEMORY[0x889F64]); /*0x788d78*/
    }
    else
    {
      FromStringInt((char **)&v53, v56); /*0x788d35*/
      v12 = String::GetOrEmpty((char **)&v53); /*0x788d43*/
      v13 = GetDlgItem((HWND)Indirect, 1583); /*0x788d4b*/
      SendMessageA(v13, 0x4B4u, 0, (LPARAM)v12); /*0x788d56*/
      DeleteAndZero(&v53); /*0x788d5c*/
    }
    if ( v49 <= 0 ) /*0x788d80*/
    {
      v17 = GetDlgItem((HWND)Indirect, 1584); /*0x788dba*/
      SendMessageA(v17, 0x4B4u, 0, (LPARAM)&MEMORY[0x889F64]); /*0x788dc9*/
    }
    else
    {
      FromStringInt((char **)&v57, v49); /*0x788d86*/
      v15 = String::GetOrEmpty((char **)&v57); /*0x788d94*/
      v16 = GetDlgItem((HWND)Indirect, 1584); /*0x788d9c*/
      SendMessageA(v16, 0x4B4u, 0, (LPARAM)v15); /*0x788da7*/
      DeleteAndZero(&v57); /*0x788dad*/
    }
    SendDlgItemMessageA((HWND)Indirect, 1574, 0x4B4u, 0, (LPARAM)lParam); /*0x788de6*/
    SendDlgItemMessageA((HWND)Indirect, 1585, 0xF1u, wParam, 0); /*0x788dfa*/
    ShowWindow(hWnd, 0); /*0x788e09*/
    ShowWindow((HWND)Indirect, 1); /*0x788e0e*/
    if ( MessageDialogLoopAlt((HWND)Indirect, (unsigned __int8 (*)(void))GameLoop::Thunk, 0, 1, 1) != 1 ) /*0x788e25*/
      break; /*0x788e25*/
    LOBYTE(lParam[0]) = 0; /*0x788e30*/
    strcpy((char *)lParam, String::GetOrEmpty(&MEMORY[0xB76E34])); /*0x788e5a*/
    v18 = dword_B7782C; /*0x788e5e*/
    v49 = dword_B7782C; /*0x788e66*/
    v56 = dword_B73AB8; /*0x788e78*/
    v54 = dword_B73A1C + 1; /*0x788e87*/
    wParam = dword_B76228; /*0x788e8b*/
    if ( dword_B73A1C + 1 <= 0 ) /*0x788e8f*/
      goto LABEL_73; /*0x788e8f*/
    if ( dword_B73AB8 <= 0 || dword_B7782C <= 0 ) /*0x788e9f*/
    {
LABEL_63:
      if ( dword_B73A1C + 1 >= 12 ) /*0x78938d*/
      {
LABEL_73:
        v43 = GetStringCSF(aTxtInvalidMont, 0, g_Str_File_wonline_cpp, 10922); /*0x789462*/
        ShowDialogConfirm(v43, 0, (int)GameLoop::Thunk, 0); /*0x789483*/
      }
      else if ( dword_B73AB8 <= 0 || dword_B73AB8 > 31 ) /*0x78939e*/
      {
        v42 = GetStringCSF(aTxtInvalidDay, 0, g_Str_File_wonline_cpp, 10924); /*0x78944f*/
        ShowDialogConfirm(v42, 0, (int)GameLoop::Thunk, 0); /*0x789458*/
      }
      else if ( v18 > 0 ) /*0x7893a6*/
      {
        if ( strlen((const char *)lParam) >= 6 ) /*0x7893ed*/
        {
          v22 = GetStringCSF(aTxtRequiredFie, 0, g_Str_File_wonline_cpp, 10930); /*0x789424*/
LABEL_71:
          ShowDialogConfirm(v22, 0, (int)GameLoop::Thunk, 0); /*0x789429*/
        }
        else
        {
          v41 = GetStringCSF(aTxtInvalidEmai, 0, g_Str_File_wonline_cpp, 10928); /*0x789400*/
          ShowDialogConfirm(v41, 0, (int)GameLoop::Thunk, 0); /*0x789409*/
        }
      }
      else
      {
        v40 = GetStringCSF(aTxtInvalidYear, 0, g_Str_File_wonline_cpp, 10926); /*0x7893c0*/
        ShowDialogConfirm(v40, 0, (int)GameLoop::Thunk, 0); /*0x7893c9*/
      }
    }
    else
    {
      if ( strlen((const char *)lParam) < 6 ) /*0x788eb9*/
      {
        v18 = v49; /*0x789386*/
        goto LABEL_63; /*0x789386*/
      }
      dword_B77E64 = 0; /*0x788ec6*/
      dword_B77E60 = -1; /*0x788ed5*/
      if ( (*(int (__stdcall **)(LPVOID, int, int, int, LPARAM *))(*(_DWORD *)MEMORY[0xAC1170] + 40))( /*0x788ee5*/
             MEMORY[0xAC1170],
             dword_B73A1C + 1,
             dword_B73AB8,
             v49,
             lParam) )
      {
        v19 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 10939); /*0x788f04*/
LABEL_26:
        ShowDialogConfirm(v19, 0, (int)GameLoop::Thunk, 0); /*0x788f09*/
LABEL_27:
        while ( 1 ) /*0x788f12*/
        {
          CreateAccountWOL_Create_72C420(); /*0x788f12*/
          if ( dword_B77E60 >= 13 ) /*0x788f1f*/
          {
            v47 = (dword_B77E60 >= 18) + 243; /*0x78903e*/
            v20 = v47; /*0x789042*/
          }
          else
          {
            v20 = 230; /*0x788f25*/
            v47 = 230; /*0x788f2a*/
          }
          v25 = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, v20, g_hWnd, (DLGPROC)WOLobbySmallDlgProc, 0); /*0x78905f*/
          SetupDialog((HWND)v25, v20); /*0x789065*/
          if ( String::Length(&dword_B77794) ) /*0x78906f*/
          {
            v26 = String::GetOrEmpty((char **)&dword_B77794); /*0x789082*/
            v27 = GetDlgItem((HWND)v25, 1576); /*0x78908a*/
            SendMessageA(v27, 0x4B4u, 0, (LPARAM)v26); /*0x78908d*/
          }
          else
          {
            v28 = GetDlgItem((HWND)v25, 1576); /*0x789095*/
            SendMessageA(v28, 0x4B4u, 0, (LPARAM)&MEMORY[0x889F64]); /*0x7890a4*/
          }
          if ( String::Length(&dword_B765EC) ) /*0x7890ab*/
          {
            v29 = String::GetOrEmpty((char **)&dword_B765EC); /*0x7890be*/
            v30 = GetDlgItem((HWND)v25, 1509); /*0x7890c6*/
            SendMessageA(v30, 0x4B4u, 0, (LPARAM)v29); /*0x7890c9*/
          }
          else
          {
            v31 = GetDlgItem((HWND)v25, 1509); /*0x7890d1*/
            SendMessageA(v31, 0x4B4u, 0, (LPARAM)&MEMORY[0x889F64]); /*0x7890e0*/
          }
          if ( String::Length(&dword_B778F4) ) /*0x7890e7*/
          {
            v32 = String::GetOrEmpty((char **)&dword_B778F4); /*0x7890fa*/
            v33 = GetDlgItem((HWND)v25, 1836); /*0x789102*/
            SendMessageA(v33, 0x4B4u, 0, (LPARAM)v32); /*0x789105*/
          }
          else
          {
            v34 = GetDlgItem((HWND)v25, 1836); /*0x78910d*/
            SendMessageA(v34, 0x4B4u, 0, (LPARAM)&MEMORY[0x889F64]); /*0x78911c*/
          }
          if ( String::Length(&dword_B778FC) ) /*0x789123*/
          {
            v35 = String::GetOrEmpty((char **)&dword_B778FC); /*0x789136*/
            v36 = GetDlgItem((HWND)v25, 1575); /*0x78913e*/
            SendMessageA(v36, 0x4B4u, 0, (LPARAM)v35); /*0x789141*/
          }
          else
          {
            v37 = GetDlgItem((HWND)v25, 1575); /*0x789149*/
            SendMessageA(v37, 0x4B4u, 0, (LPARAM)&MEMORY[0x889F64]); /*0x789158*/
          }
          ShowWindow((HWND)v25, 1); /*0x78915d*/
          SendMessageA((HWND)v25, 0x4A9u, 0, 1); /*0x78916d*/
          if ( MessageDialogLoopAlt((HWND)v25, (unsigned __int8 (*)(void))GameLoop::Thunk, 0, 1, 1) != 1 ) /*0x789184*/
            break; /*0x789184*/
          v60[0] = 0; /*0x78918f*/
          strcpy(v60, String::GetOrEmpty((char **)&dword_B77794)); /*0x7891b3*/
          v58[0] = 0; /*0x7891c1*/
          v38 = String::GetOrEmpty((char **)&dword_B778F4); /*0x7891cb*/
          v59[0] = 0; /*0x7891dc*/
          strcpy(v58, v38); /*0x7891ea*/
          strcpy(v59, String::GetOrEmpty((char **)&dword_B778FC)); /*0x789217*/
          v62[0] = 0; /*0x789229*/
          if ( v47 == 243 ) /*0x789231*/
            strcpy(v62, String::GetOrEmpty((char **)&dword_B765EC)); /*0x78925a*/
          v55 = 0; /*0x789267*/
          if ( v47 == 244 ) /*0x789274*/
            v55 = unk_B76C20; /*0x78927c*/
          if ( strcmp(v58, v59) ) /*0x78928e*/
          {
            v19 = GetStringCSF((wchar_t *)aTxtPasswordVer, 0, g_Str_File_wonline_cpp, 11073); /*0x7892cd*/
            goto LABEL_26; /*0x7892cd*/
          }
          if ( strlen(v58) != 8 ) /*0x7892e3*/
          {
            v19 = GetStringCSF((wchar_t *)aTxtPasswordToo, 0, g_Str_File_wonline_cpp, 11078); /*0x7892fc*/
            goto LABEL_26; /*0x7892fc*/
          }
          if ( (*(int (__stdcall **)(LPVOID, char *, char *, LPARAM *, char *, WPARAM, int))(*(_DWORD *)MEMORY[0xAC1170] /*0x789330*/
                                                                                           + 36))(
                 MEMORY[0xAC1170],
                 v60,
                 v58,
                 lParam,
                 v62,
                 wParam,
                 v55) )
          {
            v44 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 11083); /*0x7894a5*/
            ShowDialogConfirm(v44, 0, (int)GameLoop::Thunk, 0); /*0x7894ae*/
LABEL_75:
            v45 = hWnd; /*0x7894b3*/
            ShowWindow(hWnd, 5); /*0x7894ba*/
            Dialog::InitWindow(v45, 0); /*0x7894c3*/
            return CreateAccountWOL_Create_72C470(); /*0x7894d7*/
          }
          v39 = GetStringCSF(aTxtReqNick, 0, g_Str_File_wonline_cpp, 11085); /*0x78934c*/
          WideString::Assign((wchar_t **)&v52, v39); /*0x789356*/
          ShowUIMessage(256, (wchar_t **)&v52, 1); /*0x789366*/
          DeleteAndZero::Alt(&v52); /*0x78936f*/
          if ( dword_B77DF0 >= 0 ) /*0x78937b*/
            goto LABEL_75; /*0x78937b*/
        }
      }
      else
      {
        v21 = GetStringCSF(MEMORY[0x84B794], 0, g_Str_File_wonline_cpp, 10942); /*0x788f44*/
        WideString::Assign((wchar_t **)&v51, v21); /*0x788f4e*/
        ShowUIMessage(256, (wchar_t **)&v51, 1); /*0x788f5e*/
        DeleteAndZero::Alt(&v51); /*0x788f67*/
        if ( dword_B77E60 >= 0 ) /*0x788f73*/
        {
          if ( dword_B77E60 >= 13 || dword_B77E64 ) /*0x788fc6*/
            goto LABEL_27; /*0x788fc6*/
          v24 = GetStringCSF(MEMORY[0x84B77C], 0, g_Str_File_wonline_cpp, 10957); /*0x788fe4*/
          if ( ShowDialogConfirm(v24, 4, (int)GameLoop::Thunk, 0) == 6 ) /*0x788ff8*/
          {
            sprintf(Buffer, stru_84B740, dword_B77E50); /*0x789012*/
            OpenURLWOL(Buffer, 1); /*0x789026*/
          }
        }
        else
        {
          if ( dword_B77DF4 == -2147221248 ) /*0x788f86*/
          {
            v22 = GetStringCSF(aTxtRequiredFie, 0, g_Str_File_wonline_cpp, 10946); /*0x788f8d*/
            goto LABEL_71; /*0x788f8d*/
          }
          v23 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 10948); /*0x788fa3*/
          ShowDialogConfirm(v23, 0, (int)GameLoop::Thunk, 0); /*0x788fac*/
        }
      }
    }
  }
  v46 = hWnd; /*0x7894d8*/
  ShowWindow(hWnd, 1); /*0x7894df*/
  ShowWindow(v46, 5); /*0x7894e4*/
  Dialog::InitWindow(v46, 0); /*0x7894e9*/
  return CreateAccountWOL_Create_72C290(); /*0x788c94*/
}


// ==== 0x00789500  FindChannelWOL  this=ObjectClass  sig=csp ====
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
    if ( !(*(int (__stdcall **)(LPVOID, int, const char **, int *))(*(_DWORD *)MEMORY[0xAC116C] + 144))( /*0x789549*/
            MEMORY[0xAC116C],
            v5,
            &v9,
            &v10)
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
    (*(void (__stdcall **)(LPVOID, int, const char *, int, _DWORD))(*(_DWORD *)MEMORY[0xAC116C] + 148))( /*0x7895f0*/
      MEMORY[0xAC116C],
      v6,
      a1,
      v11,
      a3);
    (*(void (__stdcall **)(LPVOID, int, int))(*(_DWORD *)MEMORY[0xAC116C] + 200))(MEMORY[0xAC116C], v6, a4); /*0x78961e*/
    return v6; /*0x78961e*/
  }
LABEL_8:
  v6 = 1; /*0x78957e*/
  while ( 1 ) /*0x789591*/
  {
    v9 = 0; /*0x789591*/
    v10 = 0; /*0x789595*/
    if ( (*(int (__stdcall **)(LPVOID, int, const char **, int *))(*(_DWORD *)MEMORY[0xAC116C] + 144))( /*0x7895b0*/
           MEMORY[0xAC116C],
           v6,
           &v9,
           &v10)
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
  v7 = MEMORY[0xA8B544]; /*0x7895c6*/
  if ( MEMORY[0xA8B544] == -1 ) /*0x7895ce*/
    v7 = 1; /*0x7895d0*/
  v6 = v7; /*0x7895d5*/
  MEMORY[0xA8B544] = v7 + 1; /*0x7895db*/
  if ( v7 + 1 > 32 ) /*0x7895e0*/
    MEMORY[0xA8B544] = 1; /*0x7895e2*/
  if ( v7 ) /*0x7895ee*/
    goto LABEL_20; /*0x7895ee*/
  return v6; /*0x789626*/
}


// ==== 0x00789630  sub_789630  this=-  sig=ida-proto ====
char **__fastcall sub_789630(char **a1, int a2)
{
  int v3; // eax
  void *v5; // [esp+4h] [ebp-8h] BYREF
  int v6; // [esp+8h] [ebp-4h] BYREF

  String::Assign((char **)&v5, (const char *)(a2 + 24)); /*0x78963e*/
  unknown_libname_73(&v6); /*0x789647*/
  v3 = String::Tokenize((const char **)&v5, 0, MEMORY[0x8318B8], (void **)&v6); /*0x78965c*/
  if ( v3 >= 0 ) /*0x789663*/
    String::Erase((const char **)&v5, 0, v3 + 1); /*0x78966d*/
  String::AssignFromPtr(a1, (const char **)&v5); /*0x789679*/
  DeleteAndZero((void **)&v6); /*0x789682*/
  DeleteAndZero(&v5); /*0x78968b*/
  return a1; /*0x789692*/
}


// ==== 0x007896A0  PopulateWOLUserList  this=int  sig=csp ====
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
  ObjectClass *v13; // eax
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
    v26 = &vt_rc_ptr_PlayerProfile; /*0x78972e*/
    if ( Flag::IsNot2(&v28) ) /*0x789732*/
    {
      PlayerProfile = LoadPlayerProfile(v25, (const char **)&g_WebBrowser); /*0x789744*/
      ComPtr::Set(&v26, PlayerProfile[1]); /*0x789751*/
      v25[0] = &vt_rc_ptr_PlayerProfile; /*0x78975a*/
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
      v10 = String::Tokenize((const char **)&v18, 0, MEMORY[0x8318B8], (void **)&v23); /*0x789803*/
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
        v13 = (ObjectClass *)String::ToLowerCopy((const char **)&v21, (char **)&v24); /*0x7898a1*/
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
    v26 = &vt_rc_ptr_PlayerProfile; /*0x78993e*/
    ComPtr::Release(&v26); /*0x789946*/
    DeleteAndZero(&v21); /*0x78994f*/
    return 1; /*0x789954*/
  }
}


// ==== 0x00789960  ObjectClass::ValidateJoinWOL  this=ObjectClass  sig=csp ====
char __usercall ValidateJoinWOL@<al>(ObjectClass *a1@<edx>, BlowStraw *a2@<ecx>, int a3@<ebx>, int a4@<ebp>)
{
  char result; // al
  int BlowStraw_field_0x08; // eax
  int v7; // esi
  CampaignScore *v8; // eax
  CampaignScore *v9; // eax
  int v10; // eax
  int v11; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v13; // ecx
  bool v14; // bl
  wchar_t *v15; // [esp-4h] [ebp-28h] BYREF
  CampaignScore *v16; // [esp+Ch] [ebp-18h] BYREF
  wchar_t *v17; // [esp+10h] [ebp-14h] BYREF
  SimpleDialogControl_OwnerDraw v18; // [esp+14h] [ebp-10h] BYREF
  int v19; // [esp+20h] [ebp-4h] BYREF

  LOBYTE(v15) = (_BYTE)a1; /*0x789966*/
  LOBYTE(a1) = 1; /*0x789969*/
  result = ValidateGameJoinWOL(a2, a1, (char)v15); /*0x78996b*/
  if ( result )
  {
    BlowStraw_field_0x08 = a2[2].BlowStraw_field_0x08; /*0x78997b*/
    if ( (BlowStraw_field_0x08 & 0x400) != 0 )
      v7 = 800; /*0x789988*/
    else
      v7 = (BlowStraw_field_0x08 & 0x200) != 0 ? 640 : 1024;
    if ( *(int *)&HouseClass_Player.__pad_5568[22736] > v7 )
    {
      v8 = (CampaignScore *)((a2[2].BlowStraw_field_0x08 & 0x400) != 0
                           ? GetStringCSF((wchar_t *)aWolResolutionl, 0, (CampaignScore *)g_Str_File_wonline_cpp, 11491)
                           : GetStringCSF(aWolResolutionl_0, 0, (CampaignScore *)g_Str_File_wonline_cpp, 11492));
      WideString::Assign(&v17, v8); /*0x7899e2*/
      v9 = WideString::GetOrEmpty(&v17); /*0x7899f2*/
      if ( ShowDialogConfirm(v9, 4, (unsigned __int8 (*)())GameLoop::Thunk, 1) == 6 ) /*0x789a06*/
      {
        v10 = -(v7 != 800); /*0x789a16*/
        LOBYTE(v10) = v10 & 0x60; /*0x789a18*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[22736] = v10 + 800; /*0x789a1f*/
        v11 = -(v10 != 0); /*0x789a2b*/
        LOBYTE(v11) = v11 & 0x88; /*0x789a2d*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[22740] = v11 + 600; /*0x789a34*/
        ScenarioClass::SaveGameOptions((int)&HouseClass_Player.__pad_5568[22700]); /*0x789a39*/
      }
      DeleteAndZero::Alt((void **)&v17); /*0x789a42*/
      if ( *(int *)&HouseClass_Player.__pad_5568[22736] > v7 ) /*0x789a4d*/
        return 0; /*0x789a57*/
    }
    unknown_libname_73(&v16); /*0x789a5c*/
    if ( (a2[2].BlowStraw_field_0x04 & 0x100) != 0 ) /*0x789a67*/
    {
      Screen::Capture(1, 0, a3, a4); /*0x789a71*/
      SimpleDialogControl::Constructor(&v18); /*0x789a7a*/
      v18.vfptr = &off_7F7624; /*0x789a88*/
      unknown_libname_73(&v19); /*0x789a8c*/
      v18.vfptr = &vt_WonlineStringDialogControl; /*0x789aa5*/
      if ( RunDialog( /*0x789ab1*/
             0xE1u,
             (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WOLGameClass::ParseChatMessage,
             (LPARAM)&v18) == 2 )
      {
        v18.vfptr = &vt_WonlineStringDialogControl; /*0x789ab7*/
        DeleteAndZero((int)&v19); /*0x789abb*/
        v18.vfptr = &off_7F7624; /*0x789ac4*/
        OwnerDrawControl::InitVtable((DialogControl_OwnerDraw *)&v18); /*0x789ac8*/
        DeleteAndZero((int)&v16); /*0x789ad1*/
        return 0; /*0x789ade*/
      }
      String::Reassign((char **)&v16, (AbstractClass *)&v19); /*0x789ae8*/
      String::Replace((char **)&v16, &stru_830620.__pad_3BC[56], asc_818D7C); /*0x789afb*/
      v18.vfptr = &vt_WonlineStringDialogControl; /*0x789b04*/
      DeleteAndZero((int)&v19); /*0x789b08*/
      v18.vfptr = &off_7F7624; /*0x789b11*/
      OwnerDrawControl::InitVtable((DialogControl_OwnerDraw *)&v18); /*0x789b15*/
    }
    StringCSF = GetStringCSF(g_Str_TXT_JOINLOB, 0, (CampaignScore *)g_Str_File_wonline_cpp, 11547); /*0x789b2b*/
    v15 = v13; /*0x789b30*/
    WideString::Assign(&v15, (CampaignScore *)StringCSF); /*0x789b34*/
    v14 = LeaveChannelExWOL((int)a2, (char **)&v16, v15) == 0; /*0x789b4a*/
    DeleteAndZero((int)&v16); /*0x789b4d*/
    return v14; /*0x789b52*/
  }
  return result; /*0x789974*/
}


// ==== 0x00789B60  ObjectClass::CreateGameWOL  this=ObjectClass  sig=csp ====
char __usercall CreateGameWOL@<al>(int a1@<edi>, int a2@<esi>)
{
  bool v2; // bl
  int v4; // eax
  wchar_t *StringCSF; // eax
  int i; // esi
  CreateGameDialogControl *v7; // ecx
  int v8; // eax
  int ebp27; // ebp
  CampaignScore *v9; // eax
  _DWORD *PlayerProfile; // eax
  SkirmishDialog *PlayerOption; // eax
  int PlayerColor; // eax
  int eax44; // eax
  CampaignScore *v14; // eax
  int v16; // eax
  wchar_t *v17; // eax
  HWND v18; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v21; // eax
  HWND v22; // eax
  HWND v23; // eax
  wchar_t *v24; // eax
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  signed int v28; // eax
  AbstractClass *v29; // ebx
  int v30; // esi
  int v31; // edi
  char *v32; // eax
  AbstractClass *v33; // eax
  u_long nextArrayIndex; // edx
  u_long v35; // eax
  _DWORD *v36; // ebp
  int v37; // eax
  int v38; // ecx
  HWND v39; // eax
  HWND v40; // edi
  HWND Dialog; // esi
  char *v42; // [esp+18h] [ebp-1ACh] BYREF
  int v43; // [esp+1Ch] [ebp-1A8h]
  SkirmishDialog *v44; // [esp+20h] [ebp-1A4h] BYREF
  rc_ptr_base v45; // [esp+24h] [ebp-1A0h] BYREF
  wchar_t *aP0; // [esp+28h] [ebp-19Ch] BYREF
  DialogControl_OwnerDraw aP0_4; // [esp+2Ch] [ebp-198h] BYREF
  int aP0_8; // [esp+30h] [ebp-194h]
  AbstractClass aP0_16; // [esp+38h] [ebp-18Ch] BYREF
  int aP0_52; // [esp+5Ch] [ebp-168h] BYREF
  int aP0_56; // [esp+60h] [ebp-164h]
  int aP0_60; // [esp+64h] [ebp-160h]
  _DWORD aP0_72[67]; // [esp+70h] [ebp-154h] BYREF
  char v54[72]; // [esp+17Ch] [ebp-48h] BYREF

  unknown_libname_73(&v42); /*0x789b6a*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22736] >= 1024 ) /*0x789b79*/
    HouseClass_Player.__pad_5568[8844] = 0; /*0x789b7b*/
  HIBYTE(v43) = HouseClass_Player.__pad_5568[8844]; /*0x789b9c*/
  v2 = *(&g_MatrixTransformState + 2222) == (CoordStruct *)1; /*0x789ba0*/
  CreateGameWOL_Create_7AC610((SimpleWonlineDialogControl *)&aP0_4); /*0x789ba3*/
  *(_WORD *)&aP0_16.__pad_0[4] = 0; /*0x789bb4*/
  aP0_16.__pad_0[6] = HIBYTE(v43); /*0x789bbe*/
  aP0_16.__pad_0[7] = v2; /*0x789bc2*/
  aP0_4.vfptr = &vt_CreateGameDialogControl; /*0x789bc6*/
  byte_B77DEC = 0; /*0x789bce*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 3 /*0x789bde*/
    || *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 1
    || *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 2 )
  {
    dword_B77DC4 = 2; /*0x789be0*/
  }
  else
  {
    Screen::Capture(1, 0, v2, 1); /*0x789bf0*/
    if ( RunDialog(0xC3u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WOLLogin::DlgProc, (LPARAM)&aP0_4) == 2 ) /*0x789c0c*/
    {
      aP0_4.vfptr = &vt_WonlineStringDialogControl; /*0x789c12*/
      DeleteAndZero((int)&aP0_16); /*0x789c1a*/
      ConnectAndLoginWOL_Connect((SimpleWonlineDialogControl *)&aP0_4); /*0x789c23*/
      DeleteAndZero((int)&v42); /*0x789c2c*/
      return 0; /*0x789c3d*/
    }
    String::Reassign(&v42, &aP0_16); /*0x789c47*/
    String::Replace(&v42, &stru_830620.__pad_3BC[56], asc_818D7C); /*0x789c5a*/
  }
  (*(void (__stdcall **)(_DWORD, int, int))((*(&g_MatrixTransformState + 2263))->X + 36))( /*0x789c67*/
    *(&g_MatrixTransformState + 2263),
    a1,
    a2);
  memset(aP0_72, 0, sizeof(aP0_72)); /*0x789c7b*/
  sprintf((char *const)&aP0_72[13], &stru_84B8E0, *(INIClass **)g_WebBrowser.__pad_0); /*0x789c8b*/
  aP0_72[0] = 41; /*0x789c9b*/
  aP0_72[1] = 1; /*0x789ca3*/
  if ( dword_B77DC4 < 2 ) /*0x789ca7*/
    dword_B77DC4 = 6; /*0x789ca9*/
  strcpy((char *)&aP0_72[53] + 3, String::GetOrEmpty((char **)&v44)); /*0x789cdb*/
  aP0_72[2] = dword_B77DC4; /*0x789cf3*/
  memset(v54, 0, 0x50u); /*0x789cfc*/
  GameConfig::BuildChecksum(v54); /*0x789d05*/
  v54[40] = 0; /*0x789d15*/
  strcpy((char *)&aP0_72[56], v54); /*0x789d33*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x789d49*/
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 3 ) /*0x789d4e*/
    {
      v4 = aP0_72[8]; /*0x789d50*/
      aP0_72[5] = 1; /*0x789d57*/
      BYTE1(v4) = BYTE1(aP0_72[8]) | 0x10; /*0x789d5b*/
      goto LABEL_22; /*0x789d5e*/
    }
  }
  else if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 3 ) /*0x789d63*/
  {
LABEL_29:
    v4 = aP0_72[8]; /*0x789ec4*/
    aP0_72[5] = 1; /*0x789ee7*/
    BYTE1(v4) = BYTE1(aP0_72[8]) | 8; /*0x789eeb*/
    goto LABEL_22; /*0x789eee*/
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 1 ) /*0x789d6b*/
    goto LABEL_29; /*0x789d6b*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 2 )
  {
    v4 = aP0_72[8]; /*0x789ec9*/
    aP0_72[5] = 0; /*0x789ed0*/
    BYTE1(v4) = BYTE1(aP0_72[8]) | 8; /*0x789ed8*/
  }
  else
  {
    v4 = aP0_72[8]; /*0x789d8a*/
    aP0_72[5] = (unsigned __int8)aP0_16.__pad_0[12]; /*0x789d91*/
    if ( aP0_16.__pad_0[13] ) /*0x789d95*/
      BYTE1(v4) = BYTE1(aP0_72[8]) | 1; /*0x789d97*/
    HouseClass_Player.__pad_5568[8844] = aP0_16.__pad_0[14]; /*0x789da0*/
    if ( aP0_16.__pad_0[14] )
      v4 |= *(_DWORD *)&HouseClass_Player.__pad_5568[22736] != 800 ? 512 : 1024;
  }
LABEL_22:
  aP0_72[8] = (char *)dword_B77DD4 + v4; /*0x789dc6*/
  if ( g_WOL_ChannelState ) /*0x789dda*/
  {
    Debug::Log(); /*0x789df0*/
    (*(void (__stdcall **)(_DWORD))((*(&g_MatrixTransformState + 2263))->X + 36))(*(&g_MatrixTransformState + 2263)); /*0x789e00*/
    StringCSF = GetStringCSF( /*0x789e14*/
                  (wchar_t *)&stru_84B608.INIClass_field_3C,
                  0,
                  (CampaignScore *)g_Str_File_wonline_cpp,
                  10704);
    WideString::Assign((wchar_t **)&aP0_16.referenceCount, (CampaignScore *)StringCSF); /*0x789e1e*/
    ShowUIMessage((MPCooperative *)0xC0, (wchar_t **)&aP0_16.referenceCount, 0); /*0x789e2e*/
    DeleteAndZero::Alt((void **)&aP0_16.referenceCount); /*0x789e37*/
    for ( i = 0; g_WOL_ChannelState; ++i ) /*0x789e45*/
    {
      if ( i >= 150 ) /*0x789e53*/
        break; /*0x789e53*/
      Sleep(0x64u); /*0x789e57*/
      Game::ProcessIdle(v7); /*0x789e59*/
    }
    CreateGameWOL_Create(64); /*0x789e6d*/
  }
  *(_DWORD *)&HouseClass_Player.__pad_5568[8072] = MultiplayerGameMode::GetFirst(); /*0x789e77*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8092] = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8072] + 40); /*0x789e7f*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 32))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x789e89*/
  LoadScenarioClassByIndex(0); /*0x789e8e*/
  PtrVector::Destroy(&HouseClass_Player.__pad_5568[18368]); /*0x789e98*/
  Game::ResetFlags(); /*0x789e9d*/
  Network::InitPlayerSlots(); /*0x789ea2*/
  v8 = __2_YAPAXI_Z(0x85u); /*0x789eac*/
  ebp27 = v8; /*0x789eb1*/
  if ( v8 ) /*0x789eb8*/
    Waypoint::InitInvalid((_BYTE *)(v8 + 40)); /*0x789ebd*/
  else
    ebp27 = 0; /*0x789ef3*/
  memset((void *)ebp27, 0, 0x84u); /*0x789f03*/
  *(_BYTE *)(ebp27 + 132) = 0; /*0x789f09*/
  CharStringToWide((ObjectClass *)&aP0, (const char **)&g_WebBrowser); /*0x789f0a*/
  v9 = WideString::GetOrEmpty(&aP0); /*0x789f13*/
  wcscpy((wchar_t *)ebp27, (const wchar_t *)v9); /*0x789f1a*/
  aP0_52 = 0; /*0x789f28*/
  LOBYTE(aP0_56) = 0; /*0x789f2c*/
  ReadRegistryOptionsWOL(&aP0_52); /*0x789f31*/
  ComPtr::Constructor((rc_ptr_base *)&aP0_4); /*0x789f3a*/
  aP0_4.vfptr = &vt_rc_ptr_PlayerProfile; /*0x789f48*/
  if ( Flag::IsNot2(&aP0_52) ) /*0x789f4c*/
  {
    PlayerProfile = LoadPlayerProfile(&aP0_16.abstractFlags, (const char **)&g_WebBrowser); /*0x789f5e*/
    ComPtr::Set((rc_ptr_base *)&aP0_4, PlayerProfile[1]); /*0x789f6b*/
    aP0_16.abstractFlags = (int)&vt_rc_ptr_PlayerProfile; /*0x789f74*/
    ComPtr::Release((rc_ptr_base *)&aP0_16.abstractFlags); /*0x789f78*/
  }
  else
  {
    ComPtr::Set((rc_ptr_base *)&aP0_4, (int)dword_B75E4C); /*0x789f8a*/
  }
  if ( aP0_8 ) /*0x789f95*/
  {
    SessionClass::AssignSide(&HouseClass_Player.__pad_5568[8068], *(_DWORD *)(aP0_8 + 28), 0); /*0x789fa1*/
    SessionClass::AssignColor(&HouseClass_Player.__pad_5568[8068], *(_DWORD *)(aP0_8 + 32), 0); /*0x789fb4*/
  }
  *(_DWORD *)&HouseClass_Player.__pad_5568[8424] = -1; /*0x789fbe*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8428] = -2; /*0x789fc4*/
  PlayerOption = (SkirmishDialog *)Session::GetPlayerOption(&HouseClass_Player.__pad_5568[8068]); /*0x789fce*/
  SessionClass::SetPlayerOption(ebp27, PlayerOption); /*0x789fd6*/
  PlayerColor = Session::GetPlayerColor(&HouseClass_Player.__pad_5568[8068]); /*0x789fe0*/
  SessionClass::SetPlayerColor(ebp27, PlayerColor); /*0x789fe8*/
  SessionClass::SetOption(ebp27, (SessionClass *)0xFFFFFFFE); /*0x789ff1*/
  SessionClass::SetOption2(ebp27, (SessionClass *)0xFFFFFFFE); /*0x789ffa*/
  *(_DWORD *)(ebp27 + 119) = 1; /*0x789fff*/
  *(_DWORD *)(ebp27 + 107) = 0; /*0x78a006*/
  *(_DWORD *)&stru_830620.__pad_DFC[648] = 7; /*0x78a015*/
  *(&g_MatrixTransformState + 2222) = (CoordStruct *)(unsigned __int8)aP0_16.__pad_0[15]; /*0x78a01f*/
  Dialog::RefreshDialogsGame(0); /*0x78a025*/
  if ( *(&g_MatrixTransformState + 2222) ) /*0x78a030*/
  {
    *(_DWORD *)&stru_830620.__pad_DFC[648] = 0; /*0x78a032*/
    *(_DWORD *)(ebp27 + 107) = -1; /*0x78a03c*/
    SessionClass::SetPlayerOption(ebp27, (SkirmishDialog *)0xFFFFFFFD); /*0x78a03f*/
  }
  if ( *(int *)&HouseClass_Player.__pad_5568[18384] < *(int *)&HouseClass_Player.__pad_5568[18376] /*0x78a079*/
    || (HouseClass_Player.__pad_5568[18381] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18376])
    && *(int *)&HouseClass_Player.__pad_5568[18388] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368] + 8))(
         &HouseClass_Player.__pad_5568[18368],
         *(_DWORD *)&HouseClass_Player.__pad_5568[18376] + *(_DWORD *)&HouseClass_Player.__pad_5568[18388],
         0) )
  {
    eax44 = (*(_DWORD *)&HouseClass_Player.__pad_5568[18384])++; /*0x78a086*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * eax44) = ebp27; /*0x78a095*/
  }
  NetworkShare::GetField(0); /*0x78a09a*/
  v14 = WideString::GetOrEmpty(&aP0); /*0x78a0a3*/
  wcscpy((wchar_t *)&HouseClass_Player.__pad_5568[17244], (const wchar_t *)v14); /*0x78a0ae*/
  v16 = (*(int (__cdecl **)(_DWORD, _DWORD *))((*(&g_MatrixTransformState + 2263))->X + 28))( /*0x78a0c3*/
          *(&g_MatrixTransformState + 2263),
          aP0_72);
  if ( v16 == -2147221000 ) /*0x78a0cb*/
  {
    v17 = GetStringCSF(aTxtBadChankey, 0, (CampaignScore *)g_Str_File_wonline_cpp, 11789); /*0x78a0e4*/
    ShowDialogConfirm((CampaignScore *)v17, 0, (unsigned __int8 (*)())GameLoop::Thunk, 0); /*0x78a0ed*/
    v18 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x78a0f7*/
    if ( v18 ) /*0x78a0fe*/
    {
      g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFF7F); /*0x78a10c*/
      if ( !g_WOL_ChannelList ) /*0x78a112*/
        CloseDialog(v18, 0); /*0x78a118*/
    }
    Current = Dialog::GetCurrent(); /*0x78a11d*/
    DlgItem = GetDlgItem(Current, 1344); /*0x78a128*/
    if ( !DlgItem ) /*0x78a130*/
      goto LABEL_72; /*0x78a130*/
    goto LABEL_50; /*0x78a130*/
  }
  if ( v16 ) /*0x78a144*/
  {
    v21 = GetStringCSF(aTxtCantcreateC, 0, (CampaignScore *)g_Str_File_wonline_cpp, 11795); /*0x78a15d*/
    ShowDialogConfirm((CampaignScore *)v21, 0, (unsigned __int8 (*)())GameLoop::Thunk, 0); /*0x78a166*/
    v22 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x78a170*/
    if ( v22 ) /*0x78a177*/
    {
      g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFF7F); /*0x78a185*/
      if ( !g_WOL_ChannelList ) /*0x78a18b*/
        CloseDialog(v22, 0); /*0x78a191*/
    }
    v23 = Dialog::GetCurrent(); /*0x78a196*/
    DlgItem = GetDlgItem(v23, 1344); /*0x78a1a1*/
    if ( !DlgItem ) /*0x78a1a9*/
      goto LABEL_72; /*0x78a1a9*/
LABEL_50:
    SetFocus(DlgItem); /*0x78a136*/
LABEL_72:
    v45.vfptr = &vt_rc_ptr_PlayerProfile; /*0x78a29d*/
    ComPtr::Release(&v45); /*0x78a2a5*/
    DeleteAndZero::Alt((void **)&v44); /*0x78a2ae*/
    aP0_4.vfptr = &vt_WonlineStringDialogControl; /*0x78a2b7*/
    DeleteAndZero((int)&aP0_16); /*0x78a2bf*/
    aP0_4.vfptr = &off_7F7624; /*0x78a2c8*/
    OwnerDrawControl::InitVtable(&aP0_4); /*0x78a2d0*/
    DeleteAndZero((int)&v42); /*0x78a2d9*/
    return 0; /*0x78a2ea*/
  }
  v24 = GetStringCSF(aGuiCreatingcha, 0, (CampaignScore *)g_Str_File_wonline_cpp, 11803); /*0x78a1cc*/
  WideString::Assign((wchar_t **)&aP0_16.nextArrayIndex, (CampaignScore *)v24); /*0x78a1d6*/
  ShowUIMessage((MPCooperative *)4, (wchar_t **)&aP0_16.nextArrayIndex, 0); /*0x78a1e5*/
  v25 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x78a1ef*/
  if ( v25 ) /*0x78a1f6*/
  {
    g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFF7F); /*0x78a204*/
    if ( !g_WOL_ChannelList ) /*0x78a20a*/
      CloseDialog(v25, 0); /*0x78a210*/
  }
  v26 = Dialog::GetCurrent(); /*0x78a215*/
  v27 = GetDlgItem(v26, 1344); /*0x78a220*/
  if ( v27 ) /*0x78a228*/
    SetFocus(v27); /*0x78a22b*/
  ShowUIMessage((MPCooperative *)4, (wchar_t **)&aP0_16.nextArrayIndex, 1); /*0x78a23c*/
  v28 = g_WOL_State; /*0x78a241*/
  v29 = 0; /*0x78a246*/
  v30 = 0; /*0x78a248*/
  if ( (int)g_WOL_State <= 0 ) /*0x78a24c*/
    goto LABEL_71; /*0x78a24c*/
  v31 = 0; /*0x78a24e*/
  while ( 1 ) /*0x78a250*/
  {
    if ( v31 >= 0 && v30 < v28 ) /*0x78a256*/
      v29 = &g_WOL_ConnectionFlags[v31]; /*0x78a25e*/
    v32 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x78a26a*/
    if ( !_strcmpi(v32, &v29[1]) ) /*0x78a270*/
      break; /*0x78a270*/
    v28 = g_WOL_State; /*0x78a27c*/
    ++v30; /*0x78a281*/
    v31 += 3; /*0x78a282*/
    if ( v30 >= (int)g_WOL_State ) /*0x78a287*/
      goto LABEL_71; /*0x78a287*/
  }
  if ( v30 < 0 ) /*0x78a28d*/
  {
LABEL_71:
    DeleteAndZero::Alt((void **)&aP0_16.nextArrayIndex); /*0x78a294*/
    goto LABEL_72; /*0x78a298*/
  }
  v33 = 0; /*0x78a2f1*/
  if ( v30 < (int)g_WOL_State ) /*0x78a2f5*/
    v33 = &g_WOL_ConnectionFlags[3 * v30]; /*0x78a303*/
  nextArrayIndex = v33->nextArrayIndex; /*0x78a306*/
  *(_DWORD *)&aP0_16.__pad_0[12] = 0; /*0x78a30b*/
  aP0_16.abstractFlags = 0; /*0x78a310*/
  LOWORD(aP0_16.uniqueId) = 0; /*0x78a318*/
  v35 = ntohl(nextArrayIndex); /*0x78a31d*/
  aP0_16.__pad_0[15] = v35; /*0x78a326*/
  aP0_16.__pad_0[12] = HIBYTE(v35); /*0x78a332*/
  aP0_16.__pad_0[14] = BYTE1(v35); /*0x78a336*/
  aP0_16.__pad_0[13] = BYTE2(v35); /*0x78a34b*/
  NetworkAddress::Assign(&aP0_52, &aP0_16.abstractFlags, (IUnknown *)&aP0_16.__pad_0[12], 0); /*0x78a34f*/
  v36 = (_DWORD *)(ebp27 + 40); /*0x78a354*/
  v37 = aP0_56; /*0x78a35b*/
  v38 = aP0_60; /*0x78a35f*/
  *v36 = aP0_52; /*0x78a363*/
  v36[1] = v37; /*0x78a366*/
  v36[2] = v38; /*0x78a369*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 3 /*0x78a386*/
    && *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 1
    && *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 2 )
  {
    v39 = Dialog::GetCurrent(); /*0x78a38c*/
    v40 = v39; /*0x78a391*/
    if ( v39 ) /*0x78a395*/
    {
      RenderGadgetClassAnimation(v39, 0); /*0x78a39b*/
      Screen::Capture(1, 0, (unsigned __int8)v29, (int)v36); /*0x78a3a4*/
    }
    Screen::Capture(1, 0, (unsigned __int8)v29, (int)v36); /*0x78a3ad*/
    LoadingScreen::Init(); /*0x78a3b2*/
    Dialog = (HWND)CreateDialog(0xC2u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WOLobby::SetupDlgProc, 0); /*0x78a3ce*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 156))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x78a3d2*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 32))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x78a3e0*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 24))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x78a3eb*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 124))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x78a3f6*/
    ShowWindow(Dialog, 1); /*0x78a402*/
    if ( v40 ) /*0x78a406*/
      ShowWindow(v40, 0); /*0x78a40b*/
  }
  DeleteAndZero::Alt((void **)&aP0_16.nextArrayIndex); /*0x78a411*/
  v45.vfptr = &vt_rc_ptr_PlayerProfile; /*0x78a41a*/
  ComPtr::Release(&v45); /*0x78a422*/
  DeleteAndZero::Alt((void **)&v44); /*0x78a42b*/
  aP0_4.vfptr = &vt_WonlineStringDialogControl; /*0x78a434*/
  DeleteAndZero((int)&aP0_16); /*0x78a43c*/
  aP0_4.vfptr = &off_7F7624; /*0x78a445*/
  OwnerDrawControl::InitVtable(&aP0_4); /*0x78a44d*/
  DeleteAndZero((int)&v42); /*0x78a456*/
  return 1; /*0x789c37*/
}


// ==== 0x0078A470  ObjectClass::HandleOnlineWOL  this=int  sig=csp ====
int __thiscall HandleOnlineWOL(wchar_t *String1)
{
  wchar_t *StringCSF; // eax
  size_t v3; // eax
  EditClass *v4; // ebx
  const wchar_t *i; // esi
  char *v6; // edi
  wchar_t v7; // cx
  char *v8; // edi
  int v9; // eax
  wchar_t *v11; // eax
  HWND Current; // eax
  HWND v13; // esi
  int Type; // esi
  int v15; // eax
  ObjectClass v16; // [esp+0h] [ebp-314h] BYREF
  char v17[72]; // [esp+CCh] [ebp-248h] BYREF
  CampaignScore Buffer[14]; // [esp+114h] [ebp-200h] BYREF

  StringCSF = GetStringCSF((wchar_t *)&stru_84B8E0.nextArrayIndex, 0, (CampaignScore *)g_Str_File_wonline_cpp, 11864); /*0x78a48d*/
  wcscpy((wchar_t *)&v16.owningHouseIndex, StringCSF); /*0x78a498*/
  v3 = wcslen((const wchar_t *)&v16.owningHouseIndex); /*0x78a4a2*/
  if ( wcsncmp(String1, (CampaignScore *)&v16.owningHouseIndex, v3) ) /*0x78a4ae*/
    return 0; /*0x78a697*/
  v4 = 0; /*0x78a4c4*/
  for ( i = String1 + wcslen((const wchar_t *)&v16.owningHouseIndex); !wcsncmp(i, &stru_82083C, 1u); ++i ) /*0x78a4d6*/
    ; /*0x78a4e2*/
  if ( *i ) /*0x78a4f9*/
  {
    v6 = &v16.__pad_0[8]; /*0x78a4ff*/
    do /*0x78a529*/
    {
      if ( !wcsncmp(i, &stru_82083C, 1u) ) /*0x78a50b*/
        break; /*0x78a515*/
      if ( (int)v4 >= 10 ) /*0x78a51a*/
        break; /*0x78a51a*/
      v7 = *i++; /*0x78a51c*/
      *(_WORD *)v6 = v7; /*0x78a522*/
      v4 = (EditClass *)((char *)v4 + 1); /*0x78a525*/
      v6 += 2; /*0x78a526*/
    }
    while ( *i ); /*0x78a529*/
  }
  *(_WORD *)&v16.__pad_0[2 * (_DWORD)v4 + 8] = 0; /*0x78a533*/
  if ( wcslen((const wchar_t *)&v16.__pad_0[8]) ) /*0x78a53b*/
  {
    strcpy(v17, ToWideStringChar((IUnknown *)&v16.__pad_0[8])); /*0x78a56e*/
    v8 = ToWideStringChar((IUnknown *)&v16.__pad_0[8]); /*0x78a580*/
    v9 = (int)*(&g_MatrixTransformState + 2263); /*0x78a58d*/
    strcpy(&g_WOL_LoginObject.__pad_0[4], v8); /*0x78a59e*/
    (*(void (__stdcall **)(int, void **))(*(_DWORD *)v9 + 96))(v9, &v16.lineTrailer); /*0x78a5b2*/
    return 1; /*0x78a5b5*/
  }
  else
  {
    v11 = GetStringCSF((wchar_t *)&stru_84B8E0.__pad_0[12], 0, (CampaignScore *)g_Str_File_wonline_cpp, 11884); /*0x78a5d4*/
    swprintf( /*0x78a5e2*/
      (wchar_t *const)Buffer,
      (const size_t)v11,
      *(const wchar_t *const *)v16.__pad_0,
      *(CampaignScore **)&v16.__pad_0[4]);
    Current = Dialog::GetCurrent(); /*0x78a5ea*/
    v13 = Current; /*0x78a5ef*/
    if ( Current ) /*0x78a5f3*/
    {
      if ( GetDlgItem(Current, 1343) ) /*0x78a601*/
        Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, Buffer, v16); /*0x78a616*/
      if ( GetDlgItem(v13, 1461) ) /*0x78a624*/
        Dialog::ShowStatusText((SessionClass *)0xFFFFFFFF, Buffer, *(CampaignScore **)v16.__pad_0); /*0x78a639*/
    }
    if ( SessionClass::GetGameSpeed(&HouseClass_Player.__pad_5568[8068]) ) /*0x78a646*/
    {
      Type = BuildingAnim::GetType(); /*0x78a65a*/
      v15 = Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5312) * 900.0); /*0x78a66a*/
      MessageListClass::AddMessage( /*0x78a684*/
        &HouseClass_Player.__pad_5568[10668],
        0,
        0,
        (CellStruct *)Buffer,
        Type,
        (IUnknown *)0x16,
        v15,
        0);
    }
    return 1; /*0x78a68a*/
  }
}


// ==== 0x0078A6B0  ObjectClass::HandlePageWOL  this=int  sig=csp ====
wchar_t *__thiscall HandlePageWOL(ObjectClass *String1)
{
  int v2; // esi
  wchar_t *StringCSF; // eax
  size_t v4; // eax
  int v5; // ebp
  size_t v6; // esi
  wchar_t *result; // eax
  AbstractClass *v8; // edi
  const wchar_t *v9; // ebx
  CampaignScore *v10; // esi
  wchar_t v11; // dx
  int v12; // esi
  int Type; // esi
  wchar_t *v14; // eax
  CampaignScore *v15; // [esp-Ch] [ebp-1A8h]
  AbstractClass *v16; // [esp+Ch] [ebp-190h]
  wchar_t String2[16]; // [esp+10h] [ebp-18Ch] BYREF
  char v18[36]; // [esp+30h] [ebp-16Ch] BYREF
  char v19[72]; // [esp+54h] [ebp-148h] BYREF
  wchar_t String[128]; // [esp+9Ch] [ebp-100h] BYREF

  v2 = 0; /*0x78a6cc*/
  StringCSF = GetStringCSF(g_Str_TXT_PAGE_COMMAND, 0, (CampaignScore *)g_Str_File_wonline_cpp, 11918); /*0x78a6ce*/
  wcscpy(String, StringCSF); /*0x78a6dc*/
  v4 = wcslen(String); /*0x78a6e9*/
  if ( _wcsnicmp(String1, String, v4) ) /*0x78a6f8*/
    return (wchar_t *)v2; /*0x78a8e2*/
  v5 = 0; /*0x78a709*/
  v6 = wcslen((const wchar_t *)String1) + 1; /*0x78a712*/
  result = (wchar_t *)__2_YAPAXI_Z(2 * v6); /*0x78a717*/
  if ( result ) /*0x78a721*/
  {
    result = wcsncpy(result, (const wchar_t *)String1, (DropListClass *)v6); /*0x78a730*/
    v8 = (AbstractClass *)result; /*0x78a735*/
    v16 = (AbstractClass *)result; /*0x78a73c*/
    if ( result ) /*0x78a740*/
    {
      v9 = &result[wcslen(String)]; /*0x78a75a*/
      if ( *v9 ) /*0x78a760*/
      {
        do /*0x78a77d*/
        {
          if ( wcsncmp(v9, &stru_82083C, 1u) ) /*0x78a76e*/
            break; /*0x78a778*/
          ++v9; /*0x78a77a*/
        }
        while ( *v9 ); /*0x78a77d*/
        if ( *v9 ) /*0x78a782*/
        {
          v10 = (CampaignScore *)String2; /*0x78a788*/
          do /*0x78a7b2*/
          {
            if ( !wcsncmp(v9, &stru_82083C, 1u) ) /*0x78a794*/
              break; /*0x78a79e*/
            if ( v5 > 10 ) /*0x78a7a3*/
              break; /*0x78a7a3*/
            v11 = *v9++; /*0x78a7a5*/
            *(_WORD *)v10->__pad_0 = v11; /*0x78a7ab*/
            ++v5; /*0x78a7ae*/
            v10 = (CampaignScore *)((char *)v10 + 2); /*0x78a7af*/
          }
          while ( *v9 ); /*0x78a7b2*/
        }
      }
      v12 = 0; /*0x78a7b8*/
      for ( String2[v5] = 0; *v9; ++v9 ) /*0x78a7bf*/
      {
        if ( wcsncmp(v9, &stru_82083C, 1u) ) /*0x78a7cc*/
          break; /*0x78a7d6*/
      }
      if ( v5 <= 10 ) /*0x78a7e3*/
      {
        if ( v5 ) /*0x78a7f1*/
        {
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8836] && *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x78a80c*/
          {
            while ( _wcsicmp(*(const wchar_t **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v12), String2) ) /*0x78a827*/
            {
              if ( ++v12 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x78a831*/
                goto LABEL_23; /*0x78a831*/
            }
            Type = BuildingAnim::GetType(); /*0x78a890*/
            v15 = (CampaignScore *)Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5312) * 900.0); /*0x78a8aa*/
            v14 = GetStringCSF((wchar_t *)&stru_84B8E0.fallRate, 0, (CampaignScore *)g_Str_File_wonline_cpp, 11978); /*0x78a8bf*/
            MessageListClass::AddMessage( /*0x78a8ce*/
              &HouseClass_Player.__pad_5568[10668],
              0,
              0,
              (CellStruct *)v14,
              Type,
              (IUnknown *)0x16,
              (int)v15,
              0);
            v2 = 2; /*0x78a8d3*/
          }
          else
          {
LABEL_23:
            if ( wcslen(v9) ) /*0x78a834*/
            {
              strcpy(v19, ToWideStringChar((IUnknown *)String2)); /*0x78a868*/
              (*(void (__stdcall **)(_DWORD, char *, const wchar_t *))((*(&g_MatrixTransformState + 2263))->X + 248))( /*0x78a87a*/
                *(&g_MatrixTransformState + 2263),
                v18,
                v9);
              v8 = v16; /*0x78a880*/
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


// ==== 0x0078A8F0  ObjectClass::HandleReplyWOL  this=int  sig=csp ====
wchar_t *__usercall HandleReplyWOL@<eax>(wchar_t *String1@<ecx>, int a2@<ebx>)
{
  int v3; // esi
  wchar_t *StringCSF; // eax
  wchar_t *v5; // eax
  size_t v6; // eax
  size_t v7; // eax
  size_t v8; // esi
  wchar_t *result; // eax
  wchar_t *v10; // ebp
  size_t v11; // eax
  size_t v12; // eax
  const wchar_t *i; // ebx
  int v14; // edi
  const wchar_t **v15; // esi
  char *v16; // eax
  wchar_t *v17; // eax
  HWND Current; // eax
  HWND v19; // esi
  int v20; // esi
  CellStruct *Type; // esi
  wchar_t *eax26; // eax
  CampaignScore *v22; // [esp-Ch] [ebp-384h]
  CampaignScore *v23; // [esp-Ch] [ebp-384h]
  ObjectClass v25; // [esp-4h] [ebp-37Ch] BYREF
  char v26[36]; // [esp+10Ch] [ebp-26Ch] BYREF
  char v27[72]; // [esp+130h] [ebp-248h] BYREF
  CampaignScore Destination[7]; // [esp+178h] [ebp-200h] BYREF
  CampaignScore v29[7]; // [esp+278h] [ebp-100h] BYREF

  v3 = 0; /*0x78a90c*/
  StringCSF = GetStringCSF((wchar_t *)stru_82A038.location, 0, (CampaignScore *)g_Str_File_wonline_cpp, 11998); /*0x78a90e*/
  wcscpy((wchar_t *)&v25.uniqueId, StringCSF); /*0x78a919*/
  v5 = GetStringCSF((wchar_t *)&stru_82A038.hasParachute, 0, (CampaignScore *)g_Str_File_wonline_cpp, 11999); /*0x78a932*/
  wcscpy((wchar_t *)Destination, v5); /*0x78a940*/
  v6 = wcslen((const wchar_t *)&v25.uniqueId); /*0x78a94a*/
  if ( _wcsnicmp((ObjectClass *)String1, (const wchar_t *)&v25.uniqueId, v6) ) /*0x78a956*/
  {
    v7 = wcslen((const wchar_t *)Destination); /*0x78a96a*/
    if ( wcsncmp(String1, Destination, v7) ) /*0x78a979*/
      return (wchar_t *)v3; /*0x78a983*/
  }
  v8 = wcslen(String1) + 1; /*0x78a991*/
  result = (wchar_t *)__2_YAPAXI_Z(2 * v8); /*0x78a996*/
  if ( result ) /*0x78a9a0*/
  {
    result = wcsncpy(result, String1, (DropListClass *)v8); /*0x78a9af*/
    v10 = result; /*0x78a9b4*/
    if ( result ) /*0x78a9bb*/
    {
      *(_DWORD *)v25.__pad_0 = a2; /*0x78a9cb*/
      v11 = wcslen((const wchar_t *)&v25.uniqueId); /*0x78a9cd*/
      if ( !wcsncmp(String1, (CampaignScore *)&v25.uniqueId, v11) ) /*0x78a9d9*/
        v12 = wcslen((const wchar_t *)&v25.uniqueId); /*0x78a9ea*/
      else
        v12 = wcslen((const wchar_t *)Destination); /*0x78a9f4*/
      for ( i = &v10[v12]; *i; ++i ) /*0x78aa00*/
      {
        if ( wcsncmp(i, &stru_82083C, 1u) ) /*0x78aa0e*/
          break; /*0x78aa18*/
      }
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8836] && (v14 = 0, *(int *)&HouseClass_Player.__pad_5568[18384] > 0) ) /*0x78aa34*/
      {
        while ( 1 ) /*0x78aa41*/
        {
          v15 = (const wchar_t **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v14); /*0x78aa41*/
          v16 = CharToWideString(byte_B77E30); /*0x78aa44*/
          if ( !_wcsicmp(*v15, (const wchar_t *)v16) ) /*0x78aa4d*/
            break; /*0x78aa4d*/
          if ( ++v14 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x78aa65*/
            goto LABEL_15; /*0x78aa65*/
        }
        Type = (CellStruct *)BuildingAnim::GetType(); /*0x78ab93*/
        v23 = (CampaignScore *)Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5312) * 900.0); /*0x78aba8*/
        eax26 = GetStringCSF((wchar_t *)&stru_84B8E0.fallRate, 0, (CampaignScore *)g_Str_File_wonline_cpp, 12074); /*0x78abbd*/
        MessageListClass::AddMessage( /*0x78abcc*/
          &HouseClass_Player.__pad_5568[10668],
          0,
          0,
          (CellStruct *)eax26,
          (int)Type,
          (IUnknown *)0x16,
          (int)v23,
          0);
      }
      else
      {
LABEL_15:
        if ( strlen(byte_B77E30) ) /*0x78aa6c*/
        {
          if ( wcslen(i) ) /*0x78aa79*/
          {
            strcpy(v27, byte_B77E30); /*0x78aaad*/
            (*(void (__stdcall **)(_DWORD, char *, const wchar_t *))((*(&g_MatrixTransformState + 2263))->X + 248))( /*0x78aabf*/
              *(&g_MatrixTransformState + 2263),
              v26,
              i);
          }
          v3 = 1; /*0x78aac5*/
          goto LABEL_28; /*0x78aaca*/
        }
        v17 = GetStringCSF( /*0x78aae0*/
                (wchar_t *)&stru_84B8E0.ambientSoundController[2],
                0,
                (CampaignScore *)g_Str_File_wonline_cpp,
                12050);
        wcscpy((wchar_t *)v29, v17); /*0x78aaee*/
        Current = Dialog::GetCurrent(); /*0x78aaf6*/
        v19 = Current; /*0x78aafb*/
        if ( Current ) /*0x78aaff*/
        {
          if ( GetDlgItem(Current, 1343) ) /*0x78ab0d*/
            Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, v29, v25); /*0x78ab22*/
          if ( GetDlgItem(v19, 1461) ) /*0x78ab30*/
            Dialog::ShowStatusText((SessionClass *)0xFFFFFFFF, v29, *(CampaignScore **)v25.__pad_0); /*0x78ab45*/
        }
        if ( SessionClass::GetGameSpeed(&HouseClass_Player.__pad_5568[8068]) ) /*0x78ab52*/
        {
          v20 = BuildingAnim::GetType(); /*0x78ab66*/
          v22 = (CampaignScore *)Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5312) * 900.0); /*0x78ab7b*/
          MessageListClass::AddMessage( /*0x78ab86*/
            &HouseClass_Player.__pad_5568[10668],
            0,
            0,
            (CellStruct *)v29,
            v20,
            (IUnknown *)0x16,
            (int)v22,
            0);
        }
      }
      v3 = 2; /*0x78abd1*/
LABEL_28:
      __3_YAXPAX_Z(v10); /*0x78abd6*/
      return (wchar_t *)v3; /*0x78abe0*/
    }
  }
  return result; /*0x78a9a2*/
}


// ==== 0x0078ABF0  ChatMessageWOL  this=unknown  sig=csp ====
__int16 __fastcall WOL_ChatMessage(char a1, wchar_t *a2)
{
  byte_B77E40 = a1; /*0x78abf0*/
  return WideString::Reassign(&dword_B76230, a2); /*0x78ac01*/
}


// ==== 0x0078AC10  WOLobby::DlgProc  this=unknown  sig=csp ====
int __stdcall WOLobby::DlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  LRESULT v5; // eax
  LRESULT v6; // eax
  HWND v7; // esi
  int v8; // esi
  wchar_t *v9; // eax
  HWND v10; // edi
  CampaignScore *v12; // eax
  wchar_t *eax35; // eax
  int v13; // ebx
  DropListClass *v14; // esi
  AbstractClass *v16; // edi
  wchar_t *eax37; // eax
  CampaignScore *v18; // eax
  wchar_t *ebp39; // ebp
  const wchar_t *v19; // esi
  wchar_t *v20; // edi
  wchar_t v21; // ax
  wchar_t *v22; // eax
  CampaignScore *v24; // eax
  DropListClass *esi60; // esi
  wchar_t *v25; // edi
  wchar_t *v26; // eax
  wchar_t *v27; // eax
  CampaignScore *v29; // eax
  wchar_t *edi62; // edi
  size_t v30; // eax
  size_t v31; // eax
  const wchar_t *i; // esi
  char *v33; // eax
  wchar_t *v34; // eax
  ObjectClass *v35; // esi
  wchar_t *v36; // eax
  size_t v37; // eax
  bool v38; // zf
  wchar_t *v39; // eax
  ObjectClass *v40; // esi
  wchar_t *v41; // eax
  size_t v42; // eax
  CampaignScore *v46; // eax
  wchar_t *v44; // eax
  int v45; // esi
  void (__stdcall *ebx94)(HANDLE); // ebx
  HANDLE *v47; // esi
  int v48; // eax
  int v49; // esi
  int v50; // ebp
  CCINIClass *v51; // ebx
  CCINIClass *v56; // eax
  int v53; // ebp
  CCINIClass *v54; // ebx
  CCINIClass *v59; // eax
  char *ecx113; // ecx
  SkirmishDialog *v61; // esi
  int v58; // esi
  IUnknown *esi122; // esi
  SkirmishDialog *Dialog; // esi
  int GameUI; // eax
  char (*v62)(); // edx
  HWND v63; // esi
  LRESULT v64; // eax
  LRESULT v65; // eax
  ObjectClass *v66; // edx
  HWND v67; // eax
  HWND v68; // eax
  HWND v69; // eax
  HWND v70; // eax
  HWND v71; // eax
  HWND v72; // eax
  HWND v73; // eax
  HWND v74; // eax
  HWND v75; // eax
  HWND v76; // eax
  ObjectClass *v77; // edx
  HWND v78; // eax
  HWND v79; // eax
  HWND v80; // eax
  HWND v81; // eax
  HWND v82; // eax
  HWND v83; // eax
  HWND v84; // eax
  HWND v85; // eax
  HWND v86; // eax
  HWND v87; // eax
  HWND v88; // eax
  HWND v89; // eax
  HWND v90; // eax
  HWND v91; // eax
  HWND v92; // eax
  HWND v93; // eax
  HWND v94; // eax
  HWND v95; // eax
  HWND v96; // eax
  HWND v97; // eax
  HWND v98; // eax
  HWND v99; // eax
  HWND v100; // eax
  HWND v101; // eax
  HWND v102; // eax
  HWND v103; // eax
  HWND v104; // esi
  int X; // esi
  CampaignScore *v108; // eax
  wchar_t *StringCSF; // eax
  const char *ecx149; // ecx
  LRESULT v109; // eax
  LRESULT v110; // eax
  int v111; // eax
  BOOL v112; // edx
  HWND v113; // eax
  HWND v114; // eax
  HWND v115; // eax
  HWND v116; // eax
  HWND v117; // eax
  HWND v118; // eax
  HWND v119; // eax
  HWND v120; // eax
  HWND v121; // eax
  HWND v122; // eax
  ObjectClass *v123; // edx
  HWND v124; // eax
  HWND v125; // eax
  HWND v126; // eax
  HWND v127; // eax
  HWND v128; // eax
  HWND v129; // eax
  HWND v130; // eax
  HWND v131; // eax
  LRESULT v132; // eax
  HWND v133; // eax
  LRESULT v134; // edi
  HWND v135; // eax
  ObjectClass *v138; // eax
  LPARAM v137; // eax
  LPARAM eax220a; // eax
  LPARAM v139; // eax
  LPARAM v140; // eax
  LPARAM v141; // eax
  LPARAM v142; // eax
  LPARAM v143; // eax
  LPARAM v144; // eax
  LPARAM v145; // eax
  LPARAM v146; // eax
  HWND DlgItem; // eax
  HWND v148; // eax
  HANDLE *v149; // esi
  int v150; // esi
  char *v151; // esi
  HANDLE *v152; // esi
  BlowStraw *v154; // esi
  char *esi255; // esi
  int DlgCtrlID; // eax
  const wchar_t **v156; // eax
  const wchar_t **v157; // eax
  HWND v158; // eax
  HANDLE *v159; // esi
  int v160; // eax
  BlowStraw *v162; // esi
  char *esi275; // esi
  HANDLE *v163; // esi
  int v164; // eax
  int v165; // esi
  char *v166; // esi
  HWND v167; // eax
  _BYTE v168[188]; // [esp-Ch] [ebp-350h] BYREF
  BlowStraw Buffer[42]; // [esp+C4h] [ebp-280h] BYREF
  wchar_t v170[64]; // [esp+2C4h] [ebp-80h] BYREF

  result = BaseDialogProc((SkirmishDialog *)hWnd, a2, a3, (unsigned int)a4);
  if ( result )
    return result;
  if ( a2 > 0x111 )
  {
    if ( a2 <= 0x4E9 )
    {
      if ( a2 == 1257 )
      {
        if ( a4 )
        {
          DlgCtrlID = GetDlgCtrlID(*(HWND *)a4);
          if ( DlgCtrlID == 1342 )
          {
            v157 = (const wchar_t **)WOLobby_Get((wchar_t **)&v168[40], *(HWND *)a4, *((_DWORD *)a4 + 1));
            WideString::Reassign_Alt((void **)a4 + 2, v157);
            DeleteAndZero::Alt((void **)&v168[40]);
            return 0;
          }
          if ( DlgCtrlID == 1774 )
          {
            v156 = (const wchar_t **)FormatWOLPlayerInfoForDisplay(
                                       (wchar_t **)&v168[44],
                                       *(HWND *)a4,
                                       *((_DWORD *)a4 + 1));
            WideString::Reassign_Alt((void **)a4 + 2, v156);
            DeleteAndZero::Alt((void **)&v168[44]);
            return 0;
          }
        }
        return 0;
      }
      if ( a2 != 275 )
      {
        if ( a2 == 1175 )
        {
          Dialog::RefreshDialogsGame(hWnd);
          v137 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[912], 0);
          SendDlgItemMessageA(hWnd, 1005, 0x49Cu, 0, v137);
          eax220a = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[924], 0);
          SendDlgItemMessageA(hWnd, 1005, 0x4AAu, 0, eax220a);
          v139 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[900], 0);
          SendDlgItemMessageA(hWnd, 1373, 0x49Cu, 0, v139);
          v140 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[888], 0);
          SendDlgItemMessageA(hWnd, 1373, 0x4AAu, 0, v140);
          v141 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_566C[120], 0);
          SendDlgItemMessageA(hWnd, 1897, 0x49Cu, 0, v141);
          v142 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_566C[104], 0);
          SendDlgItemMessageA(hWnd, 1897, 0x4AAu, 0, v142);
          v143 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_566C[88], 0);
          SendDlgItemMessageA(hWnd, 1896, 0x49Cu, 0, v143);
          v144 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_566C[72], 0);
          SendDlgItemMessageA(hWnd, 1896, 0x4AAu, 0, v144);
          v145 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_566C[56], 0);
          SendDlgItemMessageA(hWnd, 1895, 0x49Cu, 0, v145);
          v146 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_566C[40], 0);
          SendDlgItemMessageA(hWnd, 1895, 0x4AAu, 0, v146);
          dword_B778D0 = 2;
          dword_B778CC = 19;
          dword_B76AF4 = 36;
          dword_B77A8C = 53;
          dword_B7643C = 200;
          SendDlgItemMessageA(hWnd, 1774, 0x4A6u, 0x93u, 53);
          SendDlgItemMessageA(hWnd, 1774, 0x4A6u, 0, dword_B778D0);
          SendDlgItemMessageA(hWnd, 1774, 0x4A6u, 0, dword_B778CC);
          SendDlgItemMessageA(hWnd, 1774, 0x4A6u, 0, dword_B7643C);
          SendDlgItemMessageA(hWnd, 1774, 0x4A6u, 0, dword_B76AF4);
          dword_B76C1C = 2;
          SendDlgItemMessageA(hWnd, 1341, 0x4A6u, 0, 2);
          dword_B73704 = 2;
          dword_B7619C = 18;
          dword_B76194 = 26;
          dword_B76198 = 34;
          dword_B76AC8 = 44;
          dword_B766BC = 61;
          dword_B779F4 = 78;
          dword_B76438 = 240;
          dword_B76604 = 170;
          SendDlgItemMessageA(hWnd, 1342, 0x4A6u, 0xA2u, 78);
          SendDlgItemMessageA(hWnd, 1342, 0x4A6u, 0, dword_B73704);
          SendDlgItemMessageA(hWnd, 1342, 0x4A6u, 0, dword_B76438);
          SendDlgItemMessageA(hWnd, 1342, 0x4A6u, 0, dword_B7619C);
          SendDlgItemMessageA(hWnd, 1342, 0x4A6u, 0, dword_B76194);
          SendDlgItemMessageA(hWnd, 1342, 0x4A6u, 0, dword_B76198);
          SendDlgItemMessageA(hWnd, 1342, 0x4A6u, 0, dword_B76AC8);
          SendDlgItemMessageA(hWnd, 1342, 0x4A6u, 0, dword_B766BC);
          SendDlgItemMessageA(hWnd, 1342, 0x4A6u, dword_B76438 - dword_B76604, dword_B76604);
          PopulateWOLLobbyListBox();
          GameListRenderWOL((CampaignScore *)2);
          DisplayRankingsWOL(0, 0);
          DlgItem = GetDlgItem(hWnd, 1344);
          SetFocus(DlgItem);
          SetTimer(hWnd, 0, 0x7530u, 0);
          SetTimer(hWnd, 1u, 0xCF08u, 0);
          return 0;
        }
        return 0;
      }
      if ( a3 )
      {
        if ( a3 != 1 )
        {
          if ( a3 == 1373 )
          {
            KillTimer(hWnd, 0x55Du);
            v148 = GetDlgItem(hWnd, 1373);
            EnableWindow(v148, 1);
            return 0;
          }
          return 0;
        }
        if ( Dialog::GetCurrent() != hWnd )
          return 0;
        ebx94 = (void (__stdcall *)(HANDLE))SetEvent;
        if ( g_WOL_RequestState && !RequestChannelListWOL() )
          goto LABEL_242;
        v149 = (HANDLE *)&Handles;
        do
          ResetEvent(*v149++);
        while ( (int)v149 < (int)g_WOL_RequestObject );
        Debug::Log();
        if ( (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD))((*(&g_MatrixTransformState + 2263))->X + 24))(
               *(&g_MatrixTransformState + 2263),
               0,
               0) )
        {
          goto LABEL_241;
        }
        v48 = g_WOL_RequestState;
        v150 = g_WOL_RequestState;
        if ( g_WOL_RequestState >= g_WOL_RequestToken )
        {
          Vector::Grow((int *)&g_WOL_RequestState);
          v48 = g_WOL_RequestState;
        }
        if ( v48 >= g_WOL_RequestToken )
        {
          Vector::Grow((int *)&g_WOL_RequestState);
          v48 = g_WOL_RequestState;
        }
        if ( v150 < v48 )
        {
          memcpy(
            &g_WOL_RequestFlags->headNode[v150],
            (AbstractClass *)((char *)g_WOL_RequestFlags + 4 * v150),
            4 * (v48 + 0x3FFFFFFF * v150));
          v48 = g_WOL_RequestState;
        }
        v151 = &g_WOL_RequestFlags->__pad_0[4 * v150];
        if ( v151 )
        {
          *(_DWORD *)v151 = 0;
LABEL_239:
          v48 = g_WOL_RequestState;
        }
      }
      else
      {
        if ( Dialog::GetCurrent() != hWnd )
          return 0;
        ebx94 = (void (__stdcall *)(HANDLE))SetEvent;
        if ( g_WOL_RequestState && !RequestChannelListWOL() )
          goto LABEL_242;
        v152 = (HANDLE *)&Handles;
        do
          ResetEvent(*v152++);
        while ( (int)v152 < (int)g_WOL_RequestObject );
        Debug::Log();
        if ( (*(int (__stdcall **)(_DWORD, int, int))((*(&g_MatrixTransformState + 2263))->X + 24))(
               *(&g_MatrixTransformState + 2263),
               41,
               1) )
        {
          goto LABEL_241;
        }
        v48 = g_WOL_RequestState;
        v154 = (BlowStraw *)g_WOL_RequestState;
        if ( g_WOL_RequestState >= g_WOL_RequestToken )
        {
          Vector::Grow((int *)&g_WOL_RequestState);
          v48 = g_WOL_RequestState;
        }
        if ( v48 >= g_WOL_RequestToken )
        {
          Vector::Grow((int *)&g_WOL_RequestState);
          v48 = g_WOL_RequestState;
        }
        if ( (int)v154 < v48 )
        {
          memcpy(
            &g_WOL_RequestFlags->headNode[(_DWORD)v154],
            (AbstractClass *)((char *)g_WOL_RequestFlags + 4 * (_DWORD)v154),
            4 * (v48 + 0x3FFFFFFF * (_DWORD)v154));
          v48 = g_WOL_RequestState;
        }
        esi255 = &g_WOL_RequestFlags->__pad_0[4 * (_DWORD)v154];
        if ( esi255 )
        {
          *(_DWORD *)esi255 = 41;
          goto LABEL_239;
        }
      }
LABEL_240:
      g_WOL_RequestState = v48 + 1;
      return 0;
    }
    if ( a2 == 1261 )
    {
      ShowWindow(hWnd, 0);
      Dialog::InitWindow((SkirmishDialog *)hWnd, 1);
      return 0;
    }
    if ( a2 != 1427 )
      return 0;
    v158 = GetDlgItem(hWnd, 1341);
    EnableWindow(v158, 0);
    if ( g_WOL_RequestState && !RequestChannelListWOL() )
      goto LABEL_293;
    v159 = (HANDLE *)&Handles;
    do
      ResetEvent(*v159++);
    while ( (int)v159 < (int)g_WOL_RequestObject );
    Debug::Log();
    if ( !(*(int (__stdcall **)(_DWORD, _DWORD, _DWORD))((*(&g_MatrixTransformState + 2263))->X + 24))(
            *(&g_MatrixTransformState + 2263),
            0,
            0) )
    {
      v160 = g_WOL_RequestState;
      v162 = (BlowStraw *)g_WOL_RequestState;
      if ( g_WOL_RequestState >= g_WOL_RequestToken )
      {
        Vector::Grow((int *)&g_WOL_RequestState);
        v160 = g_WOL_RequestState;
      }
      if ( v160 >= g_WOL_RequestToken )
      {
        Vector::Grow((int *)&g_WOL_RequestState);
        v160 = g_WOL_RequestState;
      }
      if ( (int)v162 < v160 )
      {
        memcpy(
          &g_WOL_RequestFlags->headNode[(_DWORD)v162],
          (AbstractClass *)((char *)g_WOL_RequestFlags + 4 * (_DWORD)v162),
          4 * (v160 + 0x3FFFFFFF * (_DWORD)v162));
        v160 = g_WOL_RequestState;
      }
      esi275 = &g_WOL_RequestFlags->__pad_0[4 * (_DWORD)v162];
      if ( esi275 )
      {
        *(_DWORD *)esi275 = 0;
        v160 = g_WOL_RequestState;
      }
      g_WOL_RequestState = v160 + 1;
      if ( !RequestChannelListWOL() || g_WOL_RequestState && !RequestChannelListWOL() )
        goto LABEL_293;
      v163 = (HANDLE *)&Handles;
      do
        ResetEvent(*v163++);
      while ( (int)v163 < (int)g_WOL_RequestObject );
      Debug::Log();
      if ( !(*(int (__stdcall **)(_DWORD, int, int))((*(&g_MatrixTransformState + 2263))->X + 24))(
              *(&g_MatrixTransformState + 2263),
              41,
              1) )
      {
        v164 = g_WOL_RequestState;
        v165 = g_WOL_RequestState;
        if ( g_WOL_RequestState >= g_WOL_RequestToken )
        {
          Vector::Grow((int *)&g_WOL_RequestState);
          v164 = g_WOL_RequestState;
        }
        if ( v164 >= g_WOL_RequestToken )
        {
          Vector::Grow((int *)&g_WOL_RequestState);
          v164 = g_WOL_RequestState;
        }
        if ( v165 < v164 )
        {
          memcpy(
            &g_WOL_RequestFlags->headNode[v165],
            (AbstractClass *)((char *)g_WOL_RequestFlags + 4 * v165),
            4 * (v164 + 0x3FFFFFFF * v165));
          v164 = g_WOL_RequestState;
        }
        v166 = &g_WOL_RequestFlags->__pad_0[4 * v165];
        if ( v166 )
        {
          *(_DWORD *)v166 = 41;
          v164 = g_WOL_RequestState;
        }
        g_WOL_RequestState = v164 + 1;
        goto LABEL_294;
      }
    }
    SetEvent(Handles);
LABEL_293:
    SetEvent(hEvent);
LABEL_294:
    v167 = GetDlgItem(hWnd, 1341);
    EnableWindow(v167, 1);
    return 0;
  }
  if ( a2 != 273 )
  {
    switch ( a2 )
    {
      case 2u:
        KillTimer(hWnd, 0);
        KillTimer(hWnd, 0x55Du);
        Config::SaveObserverMode();
        return 0;
      case 7u:
        goto LABEL_145;
      case 0xFu:
        Dialog::DrawBackground(hWnd);
        Dialog::StopBink(hWnd);
        ValidateRect(hWnd, 0);
        return 0;
      case 0x14u:
        goto LABEL_7;
      case 0x2Bu:
        Dialog::Resize((char *)a4);
LABEL_7:
        result = 1;
        break;
      default:
        return 0;
    }
    return result;
  }
  if ( (unsigned __int16)a3 > 0x688u )
  {
    if ( (unsigned __int16)a3 > 0x768u )
    {
      switch ( (__int16)a3 )
      {
        case 1897:
          v138 = g_WOL_GameListRender;
          if ( g_WOL_GameListRender == (ObjectClass *)12 || g_WOL_GameListRender == (ObjectClass *)13 )
          {
            g_WOL_GameListRender = (ObjectClass *)8;
            GameListRenderWOL((CampaignScore *)0x111);
            return 0;
          }
          if ( g_WOL_GameListRender == (ObjectClass *)8 )
          {
            g_WOL_GameListRender = (ObjectClass *)10;
            GameListRenderWOL((CampaignScore *)0x111);
            return 0;
          }
          g_WOL_GameListRender = (ObjectClass *)10;
          if ( v138 != (ObjectClass *)9 )
            g_WOL_GameListRender = (ObjectClass *)12;
          break;
        case 1898:
          if ( dword_B77E48 )
          {
            dword_B77E48 = 0;
            WOLobby::BuildStateList(1);
          }
          else
          {
            dword_B77E48 = 1;
            WOLobby::BuildStateList(0);
          }
          goto LABEL_214;
        case 1899:
          if ( dword_B77E48 == 2 )
          {
            dword_B77E48 = 3;
            SortWOLPlayerList(0);
          }
          else
          {
            dword_B77E48 = 2;
            SortWOLPlayerList(1);
          }
          goto LABEL_214;
        case 1900:
          if ( dword_B77E48 == 4 )
          {
            dword_B77E48 = 5;
            WOLobby::BuildPlayerList(0);
          }
          else
          {
            dword_B77E48 = 4;
            WOLobby::BuildPlayerList(1);
          }
LABEL_214:
          DisplayRankingsWOL(0, 1);
          return 0;
        case 1955:
          ecx149 = g_INI_Key_Ladder;
          goto LABEL_150;
        case 1958:
          ecx149 = aNews;
          goto LABEL_150;
        default:
          return 0;
      }
    }
    else
    {
      if ( (unsigned __int16)a3 == 1896 )
      {
        g_WOL_GameListRender = (ObjectClass *)((g_WOL_GameListRender == (ObjectClass *)2) + 2);
        GameListRenderWOL((CampaignScore *)0x111);
        return 0;
      }
      switch ( (__int16)a3 )
      {
        case 1673:
          *(_DWORD *)&HouseClass_Player.__pad_5568[8080] = 5;
          *(_DWORD *)&HouseClass_Player.__pad_5568[8084] = 4;
          HashTable::LookupAndMark(hWnd);
          SetEvent(dword_B7369C);
          return 0;
        case 1774:
          v168[35] = 0;
          if ( HIWORD(a3) == 1 )
            goto LABEL_167;
          if ( HIWORD(a3) != 2 )
            return 0;
          v168[35] = 1;
LABEL_167:
          v109 = SendMessageA(a4, 0x188u, 0, 0);
          *(_DWORD *)&v168[28] = -1;
          v168[36] = 0;
          if ( v109 != -1 )
          {
            v110 = SendMessageA(a4, 0x199u, v109, 0);
            *(_DWORD *)&v168[28] = v110;
            if ( v110 < 0 || v110 >= (int)g_WOL_ChatState )
            {
              byte_B77E78 = 0;
            }
            else
            {
              qmemcpy(Buffer, (char *)g_WOL_ConnectionHandler + 268 * *(_DWORD *)&v168[28], 0x10Cu);
              if ( dword_84A240 == (BlowStraw *)-1 )
                byte_B77E78 = 0;
              v111 = strcmp(&byte_B77E78, (const char *)&Buffer[4].BlowStraw_field_0x04);
              v112 = v168[35] || v111;
              v168[36] = ValidateGameJoinWOL(Buffer, (ObjectClass *)v112, *(&g_MatrixTransformState + 2222) != 0);
              strcpy(&byte_B77E78, (const char *)&Buffer[4].BlowStraw_field_0x04);
              if ( v168[36] && v168[35] )
              {
                v113 = GetDlgItem(hWnd, 1579);
                EnableWindow(v113, 0);
                v114 = GetDlgItem(hWnd, 1581);
                EnableWindow(v114, 0);
                v115 = GetDlgItem(hWnd, 1774);
                SendMessageA(v115, 0x186u, 0xFFFFFFFF, 0);
                v116 = GetDlgItem(hWnd, 1673);
                EnableWindow(v116, 0);
                v117 = GetDlgItem(hWnd, 1672);
                EnableWindow(v117, 0);
                v118 = GetDlgItem(hWnd, 1955);
                EnableWindow(v118, 0);
                v119 = GetDlgItem(hWnd, 1958);
                EnableWindow(v119, 0);
                v120 = GetDlgItem(hWnd, 1567);
                EnableWindow(v120, 0);
                v121 = GetDlgItem(hWnd, 1474);
                EnableWindow(v121, 0);
                v122 = GetDlgItem(hWnd, 1670);
                EnableWindow(v122, 0);
                v123 = (ObjectClass *)*(&g_MatrixTransformState + 2222);
                LOBYTE(v123) = *(&g_MatrixTransformState + 2222) == (CoordStruct *)1;
                if ( ValidateJoinWOL(v123, Buffer, (int)GetDlgItem, (int)hWnd) )
                {
                  RenderGadgetClassAnimation(hWnd, 0);
                  Screen::Capture(1, 0, (int)GetDlgItem, (int)hWnd);
                  ShowWindow(hWnd, 0);
                  Dialog::InitWindow((SkirmishDialog *)hWnd, 1);
                }
                v124 = GetDlgItem(hWnd, 1579);
                EnableWindow(v124, 1);
                v125 = GetDlgItem(hWnd, 1673);
                EnableWindow(v125, 1);
                v126 = GetDlgItem(hWnd, 1672);
                EnableWindow(v126, 1);
                v127 = GetDlgItem(hWnd, 1955);
                EnableWindow(v127, 1);
                v128 = GetDlgItem(hWnd, 1958);
                EnableWindow(v128, 1);
                v129 = GetDlgItem(hWnd, 1567);
                EnableWindow(v129, 1);
                v130 = GetDlgItem(hWnd, 1474);
                EnableWindow(v130, 1);
                v131 = GetDlgItem(hWnd, 1670);
                EnableWindow(v131, 1);
              }
            }
          }
          v132 = SendMessageA(a4, 0x188u, 0, 0);
          if ( !byte_B77E74 || v132 != -1 )
            dword_84A240 = *(BlowStraw **)&v168[28];
          if ( byte_B77E74 && v132 == -1 )
            byte_B77E74 = 0;
          v133 = GetDlgItem(hWnd, 1581);
          EnableWindow(v133, v168[36]);
          return 0;
        case 1887:
        case 1888:
          v134 = 0;
          v135 = GetDlgItem(hWnd, 1888);
          if ( v135 )
            v134 = SendMessageA(v135, 0xF0u, 0, 0);
          if ( (_WORD)a3 == 1887 )
            v134 = v134 == 0;
          *(&g_MatrixTransformState + 2222) = (CoordStruct *)v134;
          Dialog::RefreshDialogsGame(0);
          return 0;
        case 1893:
          g_WOL_GameListRender = (ObjectClass *)(g_WOL_GameListRender == 0);
          GameListRenderWOL((CampaignScore *)0x111);
          return 0;
        case 1894:
          g_WOL_GameListRender = (ObjectClass *)((g_WOL_GameListRender == (ObjectClass *)14) + 14);
          GameListRenderWOL((CampaignScore *)0x111);
          return 0;
        case 1895:
          if ( g_WOL_GameListRender == (ObjectClass *)6 )
          {
            g_WOL_GameListRender = (ObjectClass *)7;
            GameListRenderWOL((CampaignScore *)0x111);
            return 0;
          }
          if ( g_WOL_GameListRender == (ObjectClass *)7 )
            g_WOL_GameListRender = (ObjectClass *)4;
          else
            g_WOL_GameListRender = (ObjectClass *)((g_WOL_GameListRender != (ObjectClass *)4) + 5);
          break;
        default:
          return 0;
      }
    }
    GameListRenderWOL((CampaignScore *)0x111);
    return 0;
  }
  if ( (unsigned __int16)a3 == 1672 )
  {
    ecx149 = g_INI_Key_Battleclans;
LABEL_150:
    WebBrowser::ShowDialog(ecx149);
    goto LABEL_145;
  }
  if ( (unsigned __int16)a3 > 0x5C0u )
  {
    switch ( (__int16)a3 )
    {
      case 1474:
        Dialog = (SkirmishDialog *)CreateDialog(
                                     0xCFu,
                                     (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))OnlineLobbyDlgProcWOL,
                                     0);
        HouseClass_Player.__pad_5568[23272] = 1;
        Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]);
        ShowWindow((HWND)Dialog, 1);
        GameUI = Dialog::FindGameUI();
        v62 = Dialog::UpdateGameUI;
        if ( !GameUI )
          v62 = Dialog::PumpMessages;
        MessageDialogLoopAlt((HWND)Dialog, (unsigned __int8 (*)(void))v62, 0, 1, 1);
        Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]);
        HouseClass_Player.__pad_5568[23272] = *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13730);
        MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2);
        return 0;
      case 1544:
        unknown_libname_74(&v168[28]);
        v104 = GetDlgItem(hWnd, 1344);
        GetEditControlText(v104, (void **)&v168[28]);
        SendMessageA(v104, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]);
        SetFocus(v104);
        if ( dword_B77DE4 )
        {
          memset(&v168[80], 0, 0x6Cu);
          strcpy(&v168[116], &g_INI_Key_Lighting.__pad_20[4]);
          X = (*(&g_MatrixTransformState + 2263))->X;
          v108 = WideString::GetOrEmpty((wchar_t **)&v168[28]);
          (*(void (__stdcall **)(_DWORD, _BYTE *, CampaignScore *))(X + 236))(
            *(&g_MatrixTransformState + 2263),
            &v168[80],
            v108);
        }
        else
        {
          StringCSF = GetStringCSF(
                        (wchar_t *)&stru_84B8E0.customSound_controller[4],
                        0,
                        (CampaignScore *)g_Str_File_wonline_cpp,
                        12908);
          Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)StringCSF, *(ObjectClass *)&v168[12]);
        }
        goto LABEL_63;
      case 1567:
        RenderGadgetClassAnimation(hWnd, 0);
        Screen::Capture(1, 0, (int)a4, (int)hWnd);
        WOLobby_Load();
        v61 = (SkirmishDialog *)CreateDialog(
                                  0x2BCu,
                                  (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))DlgProcGameSetup,
                                  0);
        ShowWindow((HWND)v61, 1);
        v58 = MessageDialogLoopAlt((HWND)v61, (unsigned __int8 (*)(void))GameLoop::Thunk, 0, 1, 1);
        InvalidateRect(hWnd, 0, 0);
        ShowWindow(hWnd, 5);
        Dialog::InitWindow((SkirmishDialog *)hWnd, 0);
        WOLobby_Destroy();
        if ( v58 == 2 )
        {
          if ( *(&g_MatrixTransformState + 2263) )
          {
            (*(void (__stdcall **)(_DWORD, CCINIClass *))((*(&g_MatrixTransformState + 2263))->X + 124))(
              *(&g_MatrixTransformState + 2263),
              dword_B779BC);
            (*(void (__stdcall **)(_DWORD, INIClass *, CCINIClass *))((*(&g_MatrixTransformState + 2263))->X + 104))(
              *(&g_MatrixTransformState + 2263),
              dword_B779F0,
              dword_B76234);
          }
          Dialog::RefreshDialogsGame(0);
          if ( dword_B7690C )
          {
            if ( Theme::IsPlaying((int)&g_BuildingTypeClass_Count) )
            {
              esi122 = dword_A83D14;
              if ( dword_A83D14 != (IUnknown *)-1 )
                goto LABEL_131;
LABEL_130:
              esi122 = dword_A83D18;
LABEL_131:
              if ( esi122 == (IUnknown *)StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_INTRO) )
                goto LABEL_128;
LABEL_145:
              v103 = GetDlgItem(hWnd, 1344);
              SetFocus(v103);
              return 0;
            }
            goto LABEL_128;
          }
        }
        else
        {
          dword_B779BC = (CCINIClass *)dword_B76958;
          dword_B779F0 = (INIClass *)dword_B766B8;
          dword_B779DC = (CCINIClass *)dword_B768F8;
          dword_B76234 = (CCINIClass *)dword_B76474;
          dword_B77784 = (INIClass *)dword_B77798;
          dword_B7690C = (CCINIClass *)dword_B76910;
          dword_B779C0 = (CCINIClass *)dword_B76AC0;
          byte_B76AF0 = dword_B73680 != 0;
          g_WOL_AuthObject.__pad_0[4] = dword_B77790 != 0;
          SaveCCINI();
          if ( *(&g_MatrixTransformState + 2263) )
          {
            (*(void (__stdcall **)(_DWORD, CCINIClass *))((*(&g_MatrixTransformState + 2263))->X + 124))(
              *(&g_MatrixTransformState + 2263),
              dword_B779BC);
            (*(void (__stdcall **)(_DWORD, INIClass *, CCINIClass *))((*(&g_MatrixTransformState + 2263))->X + 104))(
              *(&g_MatrixTransformState + 2263),
              dword_B779F0,
              dword_B76234);
          }
          Dialog::RefreshDialogsGame(0);
          if ( dword_B7690C )
          {
            if ( Theme::IsPlaying((int)&g_BuildingTypeClass_Count) )
            {
              esi122 = dword_A83D14;
              if ( dword_A83D14 != (IUnknown *)-1 )
                goto LABEL_131;
              goto LABEL_130;
            }
LABEL_128:
            Theme::Stop(&g_BuildingTypeClass_Count, 0);
            Theme::QueueSong((int)&g_BuildingTypeClass_Count, (IUnknown *)0xFFFFFFFE);
            goto LABEL_145;
          }
        }
        Theme::QueueSong((int)&g_BuildingTypeClass_Count, (IUnknown *)0xFFFFFFFD);
        goto LABEL_145;
      case 1579:
        EnableWindow(a4, 0);
        v87 = GetDlgItem(hWnd, 1581);
        EnableWindow(v87, 0);
        v88 = GetDlgItem(hWnd, 1774);
        SendMessageA(v88, 0x186u, 0xFFFFFFFF, 0);
        v89 = GetDlgItem(hWnd, 1673);
        EnableWindow(v89, 0);
        v90 = GetDlgItem(hWnd, 1672);
        EnableWindow(v90, 0);
        v91 = GetDlgItem(hWnd, 1955);
        EnableWindow(v91, 0);
        v92 = GetDlgItem(hWnd, 1958);
        EnableWindow(v92, 0);
        v93 = GetDlgItem(hWnd, 1567);
        EnableWindow(v93, 0);
        v94 = GetDlgItem(hWnd, 1474);
        EnableWindow(v94, 0);
        v95 = GetDlgItem(hWnd, 1670);
        EnableWindow(v95, 0);
        v168[35] = CreateGameWOL((int)GetDlgItem, (int)EnableWindow);
        EnableWindow(a4, 1);
        v96 = GetDlgItem(hWnd, 1673);
        EnableWindow(v96, 1);
        v97 = GetDlgItem(hWnd, 1672);
        EnableWindow(v97, 1);
        v98 = GetDlgItem(hWnd, 1955);
        EnableWindow(v98, 1);
        v99 = GetDlgItem(hWnd, 1958);
        EnableWindow(v99, 1);
        v100 = GetDlgItem(hWnd, 1567);
        EnableWindow(v100, 1);
        v101 = GetDlgItem(hWnd, 1474);
        EnableWindow(v101, 1);
        v102 = GetDlgItem(hWnd, 1670);
        EnableWindow(v102, 1);
        if ( !v168[35] )
          goto LABEL_145;
        return 0;
      case 1581:
        v63 = GetDlgItem(hWnd, 1774);
        v64 = SendMessageA(v63, 0x188u, 0, 0);
        v168[36] = 0;
        *(_DWORD *)&v168[28] = -1;
        if ( v64 != -1 )
        {
          v65 = SendMessageA(v63, 0x199u, v64, 0);
          *(_DWORD *)&v168[28] = v65;
          if ( v65 >= 0 && v65 < (int)g_WOL_ChatState )
          {
            qmemcpy(Buffer, (char *)g_WOL_ConnectionHandler + 268 * v65, 0x10Cu);
            v66 = (ObjectClass *)dword_84A23C;
            LOBYTE(v66) = v65 != (_DWORD)dword_84A23C;
            v168[36] = ValidateGameJoinWOL(Buffer, v66, *(&g_MatrixTransformState + 2222) != 0);
            if ( v168[36] )
            {
              v67 = GetDlgItem(hWnd, 1579);
              EnableWindow(v67, 0);
              v68 = GetDlgItem(hWnd, 1581);
              EnableWindow(v68, 0);
              v69 = GetDlgItem(hWnd, 1774);
              SendMessageA(v69, 0x186u, 0xFFFFFFFF, 0);
              v70 = GetDlgItem(hWnd, 1673);
              EnableWindow(v70, 0);
              v71 = GetDlgItem(hWnd, 1672);
              EnableWindow(v71, 0);
              v72 = GetDlgItem(hWnd, 1955);
              EnableWindow(v72, 0);
              v73 = GetDlgItem(hWnd, 1958);
              EnableWindow(v73, 0);
              v74 = GetDlgItem(hWnd, 1567);
              EnableWindow(v74, 0);
              v75 = GetDlgItem(hWnd, 1474);
              EnableWindow(v75, 0);
              v76 = GetDlgItem(hWnd, 1670);
              EnableWindow(v76, 0);
              LOBYTE(v77) = *(&g_MatrixTransformState + 2222) == (CoordStruct *)1;
              v168[35] = ValidateJoinWOL(v77, Buffer, (int)GetDlgItem, (int)hWnd);
              v78 = GetDlgItem(hWnd, 1579);
              EnableWindow(v78, 1);
              v79 = GetDlgItem(hWnd, 1673);
              EnableWindow(v79, 1);
              v80 = GetDlgItem(hWnd, 1672);
              EnableWindow(v80, 1);
              v81 = GetDlgItem(hWnd, 1955);
              EnableWindow(v81, 1);
              v82 = GetDlgItem(hWnd, 1958);
              EnableWindow(v82, 1);
              v83 = GetDlgItem(hWnd, 1567);
              EnableWindow(v83, 1);
              v84 = GetDlgItem(hWnd, 1474);
              EnableWindow(v84, 1);
              v85 = GetDlgItem(hWnd, 1670);
              EnableWindow(v85, 1);
              if ( v168[35] )
              {
                RenderGadgetClassAnimation(hWnd, 0);
                Screen::Capture(1, 0, (int)GetDlgItem, (int)hWnd);
                ShowWindow(hWnd, 0);
                Dialog::InitWindow((SkirmishDialog *)hWnd, 1);
              }
            }
          }
        }
        dword_84A23C = *(BlowStraw **)&v168[28];
        EnableWindow(a4, v168[36]);
        v86 = GetDlgItem(hWnd, 1344);
        SetFocus(v86);
        return 0;
      case 1670:
        goto LABEL_116;
      default:
        return 0;
    }
  }
  if ( (unsigned __int16)a3 == 1472 )
    goto LABEL_116;
  if ( (unsigned __int16)a3 > 0x540u )
  {
    if ( (unsigned __int16)a3 != 1351 )
    {
      if ( (unsigned __int16)a3 == 1373 )
      {
        EnableWindow(a4, 0);
        SetTimer(hWnd, 0x55Du, 0xBB8u, 0);
        ebx94 = (void (__stdcall *)(HANDLE))SetEvent;
        if ( g_WOL_RequestState && !RequestChannelListWOL() )
          goto LABEL_242;
        v47 = (HANDLE *)&Handles;
        do
          ResetEvent(*v47++);
        while ( (int)v47 < (int)g_WOL_RequestObject );
        Debug::Log();
        if ( !(*(int (__stdcall **)(_DWORD, int, int))((*(&g_MatrixTransformState + 2263))->X + 24))(
                *(&g_MatrixTransformState + 2263),
                41,
                1) )
        {
          v48 = g_WOL_RequestState;
          v49 = g_WOL_RequestState;
          *(_DWORD *)&v168[28] = g_WOL_RequestState;
          v50 = g_WOL_RequestToken;
          if ( g_WOL_RequestState >= g_WOL_RequestToken )
          {
            v50 = 2 * g_WOL_RequestState;
            if ( 2 * g_WOL_RequestState < 10 )
              v50 = 10;
            v51 = (CCINIClass *)__2_YAPAXI_Z(4 * v50);
            memset(v51, 0, 4 * ((unsigned int)(4 * v50) >> 2));
            v56 = g_WOL_RequestFlags;
            if ( g_WOL_RequestFlags )
            {
              qmemcpy(v51, g_WOL_RequestFlags, 4 * g_WOL_RequestState);
              v56 = g_WOL_RequestFlags;
              v49 = *(_DWORD *)&v168[28];
            }
            __3_YAXPAX_Z(v56);
            v48 = g_WOL_RequestState;
            g_WOL_RequestFlags = v51;
            g_WOL_RequestToken = v50;
          }
          if ( v48 >= v50 )
          {
            v53 = 2 * v48;
            if ( 2 * v48 < 10 )
              v53 = 10;
            v54 = (CCINIClass *)__2_YAPAXI_Z(4 * v53);
            memset(v54, 0, 4 * ((unsigned int)(4 * v53) >> 2));
            v59 = g_WOL_RequestFlags;
            if ( g_WOL_RequestFlags )
            {
              qmemcpy(v54, g_WOL_RequestFlags, 4 * g_WOL_RequestState);
              v59 = g_WOL_RequestFlags;
              v49 = *(_DWORD *)&v168[28];
            }
            __3_YAXPAX_Z(v59);
            v48 = g_WOL_RequestState;
            g_WOL_RequestFlags = v54;
            g_WOL_RequestToken = v53;
          }
          if ( v49 < v48 )
          {
            memcpy(
              &g_WOL_RequestFlags->headNode[v49],
              (AbstractClass *)((char *)g_WOL_RequestFlags + 4 * v49),
              4 * (v48 + 0x3FFFFFFF * v49));
            v48 = g_WOL_RequestState;
          }
          ecx113 = &g_WOL_RequestFlags->__pad_0[4 * v49];
          if ( ecx113 )
          {
            *(_DWORD *)ecx113 = 41;
            ++g_WOL_RequestState;
            return 0;
          }
          goto LABEL_240;
        }
LABEL_241:
        ebx94(Handles);
LABEL_242:
        ebx94(hEvent);
        return 0;
      }
      return 0;
    }
LABEL_116:
    HashTable::LookupAndMark(hWnd);
    SetEvent(dword_B7369C);
    return 0;
  }
  if ( (unsigned __int16)a3 == 1344 )
  {
    v10 = GetDlgItem(hWnd, 1344);
    ReadChatMessage((wchar_t **)&v168[28], v10);
    if ( HIWORD(a3) != 1281 )
      goto LABEL_38;
    SendMessageA(v10, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]);
    if ( !WideString::Length((const wchar_t **)&v168[28]) )
      goto LABEL_38;
    v12 = WideString::GetOrEmpty((wchar_t **)&v168[28]);
    eax35 = HandlePageWOL((ObjectClass *)v12);
    if ( eax35 )
    {
      if ( eax35 != (wchar_t *)1 )
        goto LABEL_38;
      v13 = 0;
      v14 = (DropListClass *)((char *)WideString::Length((const wchar_t **)&v168[28]) + 1);
      v16 = (AbstractClass *)__2_YAPAXI_Z(2 * (_DWORD)v14);
      eax37 = GetStringCSF(g_Str_TXT_PAGE_COMMAND, 0, (CampaignScore *)g_Str_File_wonline_cpp, 12739);
      wcscpy((wchar_t *)&v168[80], eax37);
      if ( !v16 )
        goto LABEL_38;
      v18 = WideString::GetOrEmpty((wchar_t **)&v168[28]);
      ebp39 = wcsncpy((wchar_t *)v16, (const wchar_t *)v18, v14);
      if ( ebp39 )
      {
        v19 = &ebp39[wcslen((const wchar_t *)&v168[80])];
        if ( *v19 )
        {
          do
          {
            if ( wcsncmp(v19, &stru_82083C, 1u) )
              break;
            ++v19;
          }
          while ( *v19 );
          if ( *v19 )
          {
            v20 = (wchar_t *)&v168[48];
            do
            {
              if ( !wcsncmp(v19, &stru_82083C, 1u) )
                break;
              if ( v13 > 10 )
                break;
              v21 = *v19++;
              *v20 = v21;
              ++v13;
              ++v20;
            }
            while ( *v19 );
          }
        }
        for ( *(_WORD *)&v168[2 * v13 + 48] = 0; *v19; ++v19 )
        {
          if ( wcsncmp(v19, &stru_82083C, 1u) )
            break;
        }
        if ( v13 <= 10 )
        {
          if ( v13 )
          {
            if ( wcslen(v19) )
            {
              *(_DWORD *)&v168[8] = v19;
              *(_DWORD *)&v168[4] = &v168[48];
              *(_DWORD *)v168 = *(_DWORD *)g_WebBrowser.__pad_0;
              Dialog::ShowMessage(
                (ObjectClass *)0xFF8080,
                (CampaignScore *)g_Str_Trace___hs____s_,
                *(ObjectClass *)v168);
              __3_YAXPAX_Z(ebp39);
              DeleteAndZero::Alt((void **)&v168[28]);
              return 0;
            }
            v22 = GetStringCSF(g_Str_TXT_CANT_SEND_BLANK_PAGE, 0, (CampaignScore *)g_Str_File_wonline_cpp, 12777);
          }
          else
          {
            v22 = GetStringCSF(g_Str_TXT_NO_NAME_SPECIFIED, 0, (CampaignScore *)g_Str_File_wonline_cpp, 12771);
          }
        }
        else
        {
          v22 = GetStringCSF((wchar_t *)g_Str_TXT_NAME_TOO_LONG, 0, (CampaignScore *)g_Str_File_wonline_cpp, 12769);
        }
        Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v22, *(ObjectClass *)&v168[12]);
        __3_YAXPAX_Z(ebp39);
        DeleteAndZero::Alt((void **)&v168[28]);
        return 0;
      }
    }
    else
    {
      v24 = WideString::GetOrEmpty((wchar_t **)&v168[28]);
      if ( !HandleReplyWOL((wchar_t *)v24, (int)a4) )
      {
        v35 = (ObjectClass *)WideString::GetOrEmpty((wchar_t **)&v168[28]);
        v36 = GetStringCSF(aTxtBuddyFilter, 0, (CampaignScore *)g_Str_File_wonline_cpp, 873);
        swprintf(
          (wchar_t *const)Buffer,
          (const size_t)v36,
          *(const wchar_t *const *)&v168[12],
          *(CampaignScore **)&v168[16]);
        v37 = wcslen((const wchar_t *)Buffer);
        if ( _wcsnicmp(v35, (const wchar_t *)Buffer, v37) )
        {
          v40 = (ObjectClass *)WideString::GetOrEmpty((wchar_t **)&v168[28]);
          v41 = GetStringCSF(aTxtClanFilter, 0, (CampaignScore *)g_Str_File_wonline_cpp, 879);
          swprintf(
            (wchar_t *const)Buffer,
            (const size_t)v41,
            *(const wchar_t *const *)&v168[12],
            *(CampaignScore **)&v168[16]);
          v42 = wcslen((const wchar_t *)Buffer);
          if ( _wcsnicmp(v40, (const wchar_t *)Buffer, v42) )
          {
            v46 = WideString::GetOrEmpty((wchar_t **)&v168[28]);
            if ( !HandleOnlineWOL((wchar_t *)v46) )
            {
              if ( !strlen((const char *)&g_WOL_IdleFlag) )
              {
                v44 = GetStringCSF(g_Str_TXT_NOT_IN_CHAN, 0, (CampaignScore *)g_Str_File_wonline_cpp, 12848);
                Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v44, *(ObjectClass *)&v168[12]);
                DeleteAndZero::Alt((void **)&v168[28]);
                return 0;
              }
              v45 = (int)Math::InitDegToRad;
              if ( FillPlayerListWOL((wchar_t **)&v168[28]) == 1 )
                v45 = 16744576;
              *(_DWORD *)&v168[8] = WideString::GetOrEmpty((wchar_t **)&v168[28]);
              *(_DWORD *)&v168[4] = *(_DWORD *)g_WebBrowser.__pad_0;
              Dialog::ShowMessage((ObjectClass *)v45, (CampaignScore *)&stru_84B8E0.health, *(ObjectClass *)&v168[4]);
            }
LABEL_38:
            DeleteAndZero::Alt((void **)&v168[28]);
            return 0;
          }
          v38 = g_WOL_AuthObject.__pad_0[4] != 0;
          g_WOL_AuthObject.__pad_0[4] = g_WOL_AuthObject.__pad_0[4] == 0;
          if ( !v38 )
          {
            *(_DWORD *)&v168[8] = GetStringCSF(
                                    (wchar_t *)&stru_84B8E0.lastLayer,
                                    0,
                                    (CampaignScore *)g_Str_File_wonline_cpp,
                                    12842);
            Dialog::ShowMessage((ObjectClass *)0x3050FF, (CampaignScore *)&off_8240B4, *(ObjectClass *)&v168[8]);
            DeleteAndZero::Alt((void **)&v168[28]);
            return 0;
          }
          v39 = GetStringCSF((wchar_t *)&stru_84B8E0.needsRedraw, 0, (CampaignScore *)g_Str_File_wonline_cpp, 12844);
        }
        else
        {
          v38 = byte_B76AF0 != 0;
          byte_B76AF0 = byte_B76AF0 == 0;
          if ( v38 )
          {
            *(_DWORD *)&v168[8] = GetStringCSF(
                                    (wchar_t *)&stru_84B8E0.lineTrailer,
                                    0,
                                    (CampaignScore *)g_Str_File_wonline_cpp,
                                    12837);
            Dialog::ShowMessage((ObjectClass *)0x3050FF, (CampaignScore *)&off_8240B4, *(ObjectClass *)&v168[8]);
            DeleteAndZero::Alt((void **)&v168[28]);
            return 0;
          }
          v39 = GetStringCSF(aTxtBuddyFilter_0, 0, (CampaignScore *)g_Str_File_wonline_cpp, 12835);
        }
        *(_DWORD *)&v168[8] = v39;
        Dialog::ShowMessage((ObjectClass *)0x3050FF, (CampaignScore *)&off_8240B4, *(ObjectClass *)&v168[8]);
        DeleteAndZero::Alt((void **)&v168[28]);
        return 0;
      }
      esi60 = (DropListClass *)((char *)WideString::Length((const wchar_t **)&v168[28]) + 1);
      v25 = (wchar_t *)__2_YAPAXI_Z(2 * (_DWORD)esi60);
      v26 = GetStringCSF((wchar_t *)stru_82A038.location, 0, (CampaignScore *)g_Str_File_wonline_cpp, 12795);
      wcscpy((wchar_t *)&v168[80], v26);
      v27 = GetStringCSF((wchar_t *)&stru_82A038.hasParachute, 0, (CampaignScore *)g_Str_File_wonline_cpp, 12796);
      wcscpy(v170, v27);
      if ( v25 )
      {
        v29 = WideString::GetOrEmpty((wchar_t **)&v168[28]);
        edi62 = wcsncpy(v25, (const wchar_t *)v29, esi60);
        if ( edi62 )
        {
          v30 = wcslen((const wchar_t *)&v168[80]);
          if ( !wcsncmp(edi62, (CampaignScore *)&v168[80], v30) )
            v31 = wcslen((const wchar_t *)&v168[80]);
          else
            v31 = wcslen(v170);
          for ( i = &edi62[v31]; *i; ++i )
          {
            if ( wcsncmp(i, &stru_82083C, 1u) )
              break;
          }
          v33 = CharToWideString(byte_B77E30);
          wcscpy((wchar_t *)&v168[48], (const wchar_t *)v33);
          if ( wcslen((const wchar_t *)&v168[48]) && wcslen(i) )
          {
            *(_DWORD *)&v168[8] = i;
            *(_DWORD *)&v168[4] = &v168[48];
            *(_DWORD *)v168 = *(_DWORD *)g_WebBrowser.__pad_0;
            Dialog::ShowMessage((ObjectClass *)0xFF8080, (CampaignScore *)g_Str_Trace___hs____s_, *(ObjectClass *)v168);
            __3_YAXPAX_Z(edi62);
            DeleteAndZero::Alt((void **)&v168[28]);
            return 0;
          }
          else
          {
            if ( wcslen((const wchar_t *)&v168[48]) )
            {
              v34 = GetStringCSF(g_Str_TXT_CANT_SEND_BLANK_PAGE, 0, (CampaignScore *)g_Str_File_wonline_cpp, 12825);
              Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v34, *(ObjectClass *)&v168[12]);
            }
            __3_YAXPAX_Z(edi62);
            DeleteAndZero::Alt((void **)&v168[28]);
            return 0;
          }
        }
      }
    }
LABEL_63:
    DeleteAndZero::Alt((void **)&v168[28]);
    return 0;
  }
  if ( (unsigned __int16)a3 != 1005 )
  {
    if ( (unsigned __int16)a3 != 1341 )
      return 0;
    v5 = SendMessageA(a4, 0x188u, 0, 0);
    if ( v5 != -1 )
    {
      v6 = SendMessageA(a4, 0x199u, v5, 0);
      if ( HIWORD(a3) == 1 && v6 >= 0 && v6 < (int)g_WOL_AuthPool )
      {
        qmemcpy(Buffer, (char *)dword_B73E18 + 268 * v6, 0x10Cu);
        if ( strcmp((const char *)&Buffer[4].BlowStraw_field_0x04, (const char *)&g_WOL_IdleFlag) )
        {
          if ( strcmp((const char *)&Buffer[4].BlowStraw_field_0x04, &byte_B73C1C) )
          {
            g_WOL_ChannelLeaveState = 1;
            dword_B77DD4 = (MPCooperative *)atol(&Buffer[4].__pad_0[strlen(g_Str_Lob_41_) + 4]);
            SetEvent(dword_B736A8);
            return 0;
          }
        }
      }
    }
    return 0;
  }
  v7 = GetDlgItem(hWnd, 1344);
  ReadChatMessage((wchar_t **)&v168[28], v7);
  SendMessageA(v7, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]);
  SetFocus(v7);
  InvalidateRect(v7, 0, 0);
  v8 = 3166463;
  if ( !strlen((const char *)&g_WOL_IdleFlag) )
  {
    v9 = GetStringCSF(g_Str_TXT_NOT_IN_CHAN, 0, (CampaignScore *)g_Str_File_wonline_cpp, 12874);
LABEL_32:
    Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v9, *(ObjectClass *)&v168[12]);
    DeleteAndZero::Alt((void **)&v168[28]);
    return 0;
  }
  if ( !WideString::Length((const wchar_t **)&v168[28]) )
  {
    v9 = GetStringCSF(g_Str_TXT_ENTER_MESSAGE, 0, (CampaignScore *)g_Str_File_wonline_cpp, 12882);
    goto LABEL_32;
  }
  if ( FillBuddyListExWOL((wchar_t **)&v168[28]) )
    v8 = 16711935;
  *(_DWORD *)&v168[8] = WideString::GetOrEmpty((wchar_t **)&v168[28]);
  *(_DWORD *)&v168[4] = *(_DWORD *)g_WebBrowser.__pad_0;
  Dialog::ShowMessage((ObjectClass *)v8, (CampaignScore *)g_Str_Trace__hs, *(ObjectClass *)&v168[4]);
  DeleteAndZero::Alt((void **)&v168[28]);
  return 0;
}



// ==== 0x0078D120  OnlineLobbyDlgProcWOL  this=unknown  sig=csp ====
int __stdcall OnlineLobbyDlgProcWOL(HWND hDlg, unsigned int a2, int a3, HWND hWnd)
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
  CampaignScore *v21; // eax
  wchar_t *v22; // eax
  wchar_t *StringCSF; // eax
  HWND v24; // esi
  int X; // esi
  CampaignScore *v27; // eax
  wchar_t *eax60; // eax
  HWND v28; // eax
  HWND v29; // eax
  int v30; // ebx
  signed int v31; // eax
  HWND v32; // eax
  HWND v33; // eax
  HWND v34; // eax
  HWND DlgItem; // eax
  BOOL v36; // [esp-4h] [ebp-10Ch]
  BOOL v37; // [esp-4h] [ebp-10Ch]
  CampaignScore *v38; // [esp+0h] [ebp-108h]
  wchar_t *v39; // [esp+10h] [ebp-F8h] BYREF
  wchar_t *v40; // [esp+14h] [ebp-F4h] BYREF
  char lParam[9]; // [esp+18h] [ebp-F0h] BYREF
  char v42; // [esp+21h] [ebp-E7h]
  int v43; // [esp+28h] [ebp-E0h]
  LPARAM v44[27]; // [esp+30h] [ebp-D8h] BYREF
  char v45[108]; // [esp+9Ch] [ebp-6Ch] BYREF

  result = BaseDialogProc((SkirmishDialog *)hDlg, a2, a3, (unsigned int)hWnd); /*0x78d14c*/
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
    if ( *(&g_MatrixTransformState + 2263) ) /*0x78d963*/
    {
      SendMessageA(hWnd, 0x4B5u, 0xAu, (LPARAM)lParam); /*0x78d972*/
      v42 = 0; /*0x78d986*/
      memset(v45, 0, sizeof(v45)); /*0x78d98b*/
      strcpy(&v45[36], lParam); /*0x78d9b1*/
      (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 96))( /*0x78d9c3*/
        *(&g_MatrixTransformState + 2263),
        v45);
    }
    v34 = GetDlgItem(hDlg, 1480); /*0x78d9cc*/
    if ( v34 ) /*0x78d9d0*/
      SendMessageA(v34, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]); /*0x78d9df*/
    dword_B77E8C = 1344; /*0x78d9e8*/
    return 0; /*0x78d9fb*/
  }
  switch ( a2 ) /*0x78d165*/
  {
    case 0x497u: /*0x78d165*/
      SendDlgItemMessageA(hDlg, 1473, 0xC5u, 9u, 0); /*0x78d864*/
      v28 = GetDlgItem(hDlg, 1473); /*0x78d876*/
      SendMessageA(v28, 0x4D1u, 1u, 0); /*0x78d888*/
      v29 = GetDlgItem(hDlg, 1473); /*0x78d890*/
      SendMessageA(v29, 0x4B4u, 0, (LPARAM)&stru_87C374.__pad_579C[33876]); /*0x78d89f*/
      v30 = dword_B76480; /*0x78d8a6*/
      if ( dword_B76478 != (CellStruct *)-1 ) /*0x78d8af*/
      {
        v31 = Timer::GetTicks() - (_DWORD)dword_B76478; /*0x78d8bb*/
        if ( v31 >= v30 ) /*0x78d8c3*/
          return 0; /*0x78d8c3*/
        v30 -= v31; /*0x78d8c9*/
      }
      if ( v30 > 0 ) /*0x78d8cd*/
      {
        v32 = GetDlgItem(hDlg, 1473); /*0x78d8d9*/
        SendMessageA(v32, 0x4B4u, 0, (LPARAM)byte_B77E30); /*0x78d8e8*/
        v33 = GetDlgItem(hDlg, 1344); /*0x78d8f0*/
        SetFocus(v33); /*0x78d8f3*/
        dword_B76478 = (CellStruct *)Timer::GetTicks(); /*0x78d902*/
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
      if ( !*(&g_MatrixTransformState + 2263) ) /*0x78d773*/
        return 0; /*0x78d773*/
      memset(v44, 0, 0x40u); /*0x78d784*/
      SendDlgItemMessageA(hDlg, 1473, 0x4B5u, 0x3Cu, (LPARAM)v44); /*0x78d798*/
      BYTE1(v44[2]) = 0; /*0x78d7a7*/
      strcpy(&v45[36], (const char *)v44); /*0x78d7c2*/
      if ( strlen(&v45[36]) ) /*0x78d7d4*/
      {
        (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 96))( /*0x78d7ee*/
          *(&g_MatrixTransformState + 2263),
          v45);
        return 0; /*0x78d7fd*/
      }
      StringCSF = GetStringCSF( /*0x78d811*/
                    (wchar_t *)&stru_830620.__pad_DFC[404],
                    0,
                    (CampaignScore *)g_Str_File_wonline_cpp,
                    14080);
    }
    else
    {
      if ( (unsigned __int16)a3 != 1543 || !*(&g_MatrixTransformState + 2263) ) /*0x78d644*/
        return 0; /*0x78d644*/
      if ( dword_B77DE4 ) /*0x78d651*/
      {
        unknown_libname_74(&v39); /*0x78d687*/
        v24 = GetDlgItem(hDlg, 1344); /*0x78d698*/
        GetEditControlText(v24, (void **)&v39); /*0x78d6a0*/
        SendMessageA(v24, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]); /*0x78d6b2*/
        SetFocus(v24); /*0x78d6b9*/
        strcpy(&v45[36], &g_INI_Key_Lighting.__pad_20[4]); /*0x78d6df*/
        if ( WideString::Length((const wchar_t **)&v39) ) /*0x78d6ec*/
        {
          X = (*(&g_MatrixTransformState + 2263))->X; /*0x78d6fb*/
          v27 = WideString::GetOrEmpty(&v39); /*0x78d701*/
          (*(void (__stdcall **)(_DWORD, char *, CampaignScore *))(X + 248))( /*0x78d715*/
            *(&g_MatrixTransformState + 2263),
            v45,
            v27);
        }
        else
        {
          eax60 = GetStringCSF(g_Str_TXT_ENTER_MESSAGE, 0, (CampaignScore *)g_Str_File_wonline_cpp, 14195); /*0x78d744*/
          Dialog::ShowStatusText((SessionClass *)0xFFFFFFFF, (CampaignScore *)eax60, v38); /*0x78d74c*/
        }
        DeleteAndZero::Alt((void **)&v39); /*0x78d71f*/
        return 0; /*0x78d730*/
      }
      StringCSF = GetStringCSF( /*0x78d664*/
                    (wchar_t *)&stru_84B8E0.customSound_controller[4],
                    0,
                    (CampaignScore *)g_Str_File_wonline_cpp,
                    14176);
    }
    Dialog::ShowStatusText((SessionClass *)0xFFFFFFFF, (CampaignScore *)StringCSF, v38); /*0x78d66c*/
    return 0; /*0x78d680*/
  }
  if ( (unsigned __int16)a3 == 1474 ) /*0x78d19b*/
  {
    if ( dword_B77E8C == 1473 ) /*0x78d3aa*/
    {
      if ( *(&g_MatrixTransformState + 2263) ) /*0x78d3b7*/
      {
        v13 = GetDlgItem(hDlg, 1473); /*0x78d3bf*/
        if ( v13 ) /*0x78d3c3*/
        {
          SendMessageA(v13, 0x4B5u, 0xAu, (LPARAM)lParam); /*0x78d3d2*/
          v42 = 0; /*0x78d3e6*/
          memset(v45, 0, sizeof(v45)); /*0x78d3eb*/
          strcpy(&v45[36], lParam); /*0x78d411*/
          (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 96))( /*0x78d423*/
            *(&g_MatrixTransformState + 2263),
            v45);
        }
      }
      v14 = GetDlgItem(hDlg, 1480); /*0x78d42c*/
      if ( v14 ) /*0x78d430*/
        SendMessageA(v14, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]); /*0x78d43f*/
    }
    dword_B77E8C = 1474; /*0x78d44b*/
    v15 = GetDlgItem(hDlg, 1344); /*0x78d457*/
    ReadChatMessage(&v40, v15); /*0x78d45f*/
    SendMessageA(v15, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]); /*0x78d471*/
    v16 = GetDlgItem(hDlg, 1474); /*0x78d47f*/
    EnableWindow(v16, 0); /*0x78d482*/
    SetFocus(v15); /*0x78d489*/
    if ( !*(&g_MatrixTransformState + 2263) ) /*0x78d496*/
    {
      DeleteAndZero::Alt((void **)&v40); /*0x78d49c*/
      return 0; /*0x78d4ad*/
    }
    unknown_libname_73(&v39); /*0x78d4b4*/
    v17 = GetDlgItem(hDlg, 1473); /*0x78d4c3*/
    GetDialogText(v17, (void **)&v39); /*0x78d4c9*/
    String::CopyTruncated((void **)&v39, 9u); /*0x78d4d4*/
    strcpy((char *)&v44[9], String::GetOrEmpty((char **)&v39)); /*0x78d4fc*/
    if ( WideString::Length((const wchar_t **)&v40) && strlen((const char *)&v44[9]) ) /*0x78d51a*/
    {
      if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8836] /*0x78d53c*/
        || (v18 = 0, *(int *)&HouseClass_Player.__pad_5568[18384] <= 0) )
      {
LABEL_44:
        v20 = (*(&g_MatrixTransformState + 2263))->X; /*0x78d568*/
        v21 = WideString::GetOrEmpty(&v40); /*0x78d573*/
        (*(void (__stdcall **)(_DWORD, LPARAM *, CampaignScore *))(v20 + 248))( /*0x78d585*/
          *(&g_MatrixTransformState + 2263),
          v44,
          v21);
        WideString::GetOrEmpty(&v40); /*0x78d58f*/
        Dialog::ShowStatusText( /*0x78d5a7*/
          (SessionClass *)Math::InitDegToRad,
          (CampaignScore *)&stru_84B8E0.health,
          *(CampaignScore **)g_WebBrowser.__pad_0);
LABEL_50:
        DeleteAndZero((int)&v39); /*0x78d608*/
        DeleteAndZero::Alt((void **)&v40); /*0x78d615*/
        return 0; /*0x78d626*/
      }
      while ( 1 ) /*0x78d54c*/
      {
        v19 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v18)); /*0x78d54c*/
        if ( !_strcmpi(v19, &v44[9]) ) /*0x78d552*/
          break; /*0x78d552*/
        if ( ++v18 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x78d566*/
          goto LABEL_44; /*0x78d566*/
      }
      v22 = GetStringCSF((wchar_t *)&stru_84B8E0.fallRate, 0, (CampaignScore *)g_Str_File_wonline_cpp, 14150); /*0x78d5c2*/
    }
    else if ( strlen((const char *)&v44[9]) ) /*0x78d5c8*/
    {
      v22 = GetStringCSF(g_Str_TXT_ENTER_MESSAGE, 0, (CampaignScore *)g_Str_File_wonline_cpp, 14164); /*0x78d5f8*/
    }
    else
    {
      v22 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[404], 0, (CampaignScore *)g_Str_File_wonline_cpp, 14162); /*0x78d5e5*/
    }
    Dialog::ShowStatusText((SessionClass *)0xFFFFFFFF, (CampaignScore *)v22, v38); /*0x78d600*/
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
      GetDialogText(hWnd, (void **)&v40); /*0x78d1cf*/
      unknown_libname_74(&v39); /*0x78d1d8*/
      v5 = GetDlgItem(hDlg, 1344); /*0x78d1ed*/
      GetEditControlText(v5, (void **)&v39); /*0x78d1f3*/
      v6 = String::Length((const char **)&v40) && WideString::Length((const wchar_t **)&v39); /*0x78d212*/
      v36 = v6; /*0x78d21b*/
      v7 = GetDlgItem(hDlg, 1474); /*0x78d222*/
      EnableWindow(v7, v36); /*0x78d225*/
      dword_B77E8C = 1473; /*0x78d231*/
      v8 = GetDlgItem(hDlg, 1480); /*0x78d23b*/
      if ( v8 ) /*0x78d23f*/
        SendMessageA(v8, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]); /*0x78d24e*/
      DeleteAndZero::Alt((void **)&v39); /*0x78d258*/
      DeleteAndZero((int)&v40); /*0x78d261*/
      return 0; /*0x78d272*/
    }
    return 0; /*0x78da1a*/
  }
  ReadChatMessage(&v39, hWnd); /*0x78d27b*/
  unknown_libname_73(&v40); /*0x78d284*/
  v9 = GetDlgItem(hDlg, 1473); /*0x78d299*/
  GetDialogText(v9, (void **)&v40); /*0x78d29f*/
  v10 = WideString::Length((const wchar_t **)&v39) && String::Length((const char **)&v40); /*0x78d2be*/
  v37 = v10; /*0x78d2c7*/
  v11 = GetDlgItem(hDlg, 1474); /*0x78d2ce*/
  EnableWindow(v11, v37); /*0x78d2d1*/
  if ( dword_B77E8C == 1473 ) /*0x78d2e1*/
  {
    if ( *(&g_MatrixTransformState + 2263) ) /*0x78d2ea*/
    {
      memset(v44, 0, sizeof(v44)); /*0x78d2f7*/
      strcpy((char *)&v44[9], String::GetOrEmpty((char **)&v40)); /*0x78d320*/
      (*(void (__stdcall **)(_DWORD, LPARAM *))((*(&g_MatrixTransformState + 2263))->X + 96))( /*0x78d332*/
        *(&g_MatrixTransformState + 2263),
        v44);
    }
    v12 = GetDlgItem(hDlg, 1480); /*0x78d33b*/
    if ( v12 ) /*0x78d33f*/
      SendMessageA(v12, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]); /*0x78d34e*/
  }
  dword_B77E8C = 1344; /*0x78d358*/
  DeleteAndZero((int)&v40); /*0x78d362*/
  DeleteAndZero::Alt((void **)&v39); /*0x78d36b*/
  return 0; /*0x78d266*/
}


// ==== 0x0078DA30  sub_78DA30  this=unknown  sig=csp ====
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
          (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC1174] + 16))(MEMORY[0xAC1174]); /*0x78db47*/
          break;
        case 0x5F4u: /*0x78daca*/
          CloseDialog(hWnd, 1); /*0x78db1a*/
          return 1; /*0x78db28*/
        case 0x5F5u: /*0x78daca*/
          v5 = (wchar_t *)GetStringCSF(aTxtDownloadFai, (int)g_Str_File_wonline_cpp, 14681); /*0x78daf8*/
          ShowDialogConfirm(v5, 0, (int)GameLoop::Thunk, 0); /*0x78db01*/
          (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC1174] + 16))(MEMORY[0xAC1174]); /*0x78db0e*/
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


// ==== 0x0078DB70  WOLLogin::DlgProc  this=unknown  sig=csp ====
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
        SendMessageA(v11, 0x4B4u, 0, (LPARAM)&MEMORY[0x889F64]); /*0x78decf*/
        SendDlgItemMessageA(hWnd, 1836, 0xC5u, 8u, 0); /*0x78dee0*/
        v12 = GetDlgItem(hWnd, 1836); /*0x78deec*/
        SetFocus(v12); /*0x78deef*/
        CheckDlgButton(hWnd, 1577, *(_BYTE *)(WindowLongA + 16) != 0); /*0x78df06*/
        CheckDlgButton(hWnd, 1644, *(_BYTE *)(WindowLongA + 17) != 0); /*0x78df1d*/
        if ( (MEMORY[0xA8B238] != 4 || MEMORY[0xA8B244] != 3) && dword_B77DE4 < 1 ) /*0x78df3c*/
        {
          v13 = GetDlgItem(hWnd, 1644); /*0x78df46*/
          EnableWindow(v13, 0); /*0x78df49*/
        }
        v17 = GetDlgItem(hWnd, 1822); /*0x78df63*/
        LOBYTE(a3) = MEMORY[0xA8EB84] >= 1024; /*0x78df6c*/
        EnableWindow(v17, MEMORY[0xA8EB84] < 1024); /*0x78df77*/
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


// ==== 0x0078E030  WOLGameClass::ParseChatMessage  this=unknown  sig=csp ====
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
        SendMessageA(v12, 0x4B4u, 0, (LPARAM)&MEMORY[0x889F64]); /*0x78e1f8*/
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


// ==== 0x0078E230  CreateAccountDlgProcWOL  this=unknown  sig=csp ====
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
      String = GetStringCSF(unk_84A0C4, 0, g_Str_File_wonline_cpp, 15162); /*0x78e7a2*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)String); /*0x78e7b0*/
      v42 = GetStringCSF(unk_84A0AC, 0, g_Str_File_wonline_cpp, 15163); /*0x78e7c3*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v42); /*0x78e7d1*/
      v43 = GetStringCSF(unk_84A098, 0, g_Str_File_wonline_cpp, 15164); /*0x78e7e4*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v43); /*0x78e7f2*/
      v44 = GetStringCSF(unk_84A084, 0, g_Str_File_wonline_cpp, 15165); /*0x78e805*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v44); /*0x78e813*/
      v45 = GetStringCSF(unk_84A074, 0, g_Str_File_wonline_cpp, 15166); /*0x78e826*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v45); /*0x78e834*/
      v46 = GetStringCSF(unk_84A060, 0, g_Str_File_wonline_cpp, 15167); /*0x78e847*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v46); /*0x78e855*/
      v47 = GetStringCSF(unk_84A04C, 0, g_Str_File_wonline_cpp, 15168); /*0x78e868*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v47); /*0x78e876*/
      v48 = GetStringCSF(unk_84A038, 0, g_Str_File_wonline_cpp, 15169); /*0x78e889*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v48); /*0x78e897*/
      v49 = GetStringCSF(MEMORY[0x84A020], 0, g_Str_File_wonline_cpp, 15170); /*0x78e8aa*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v49); /*0x78e8b8*/
      v50 = GetStringCSF(MEMORY[0x84A00C], 0, g_Str_File_wonline_cpp, 15171); /*0x78e8cb*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v50); /*0x78e8d9*/
      v51 = GetStringCSF(unk_849FF4, 0, g_Str_File_wonline_cpp, 15172); /*0x78e8ec*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v51); /*0x78e8fa*/
      v52 = GetStringCSF(unk_849FDC, 0, g_Str_File_wonline_cpp, 15173); /*0x78e90d*/
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
      DeleteAndZero::Alt2((void **)&MEMORY[0xB76E34]); /*0x78e2d0*/
      v5 = GetDlgItem(hWnd, 1574); /*0x78e2e5*/
      if ( v5 ) /*0x78e2e9*/
        GetDialogText(v5, (void **)&MEMORY[0xB76E34]); /*0x78e2f2*/
      DeleteAndZero::Alt2((void **)&MEMORY[0xB73B30]); /*0x78e2fc*/
      v6 = GetDlgItem(hWnd, 1582); /*0x78e307*/
      if ( v6 /*0x78e346*/
        && (GetDialogText(v6, (void **)&MEMORY[0xB73B30]),
            v7 = (char *)GetStringCSF(unk_84A0C4, 0, g_Str_File_wonline_cpp, 15071),
            v53 = ToWideStringChar(v7),
            v8 = String::GetOrEmpty(&MEMORY[0xB73B30]),
            _strcmpi(v8, v53)) )
      {
        v9 = (char *)GetStringCSF(unk_84A0AC, 0, g_Str_File_wonline_cpp, 15073); /*0x78e367*/
        v54 = ToWideStringChar(v9); /*0x78e373*/
        v10 = String::GetOrEmpty(&MEMORY[0xB73B30]); /*0x78e379*/
        if ( _strcmpi(v10, v54) ) /*0x78e37f*/
        {
          v11 = (char *)GetStringCSF(unk_84A098, 0, g_Str_File_wonline_cpp, 15075); /*0x78e3ab*/
          v55 = ToWideStringChar(v11); /*0x78e3b7*/
          v12 = String::GetOrEmpty(&MEMORY[0xB73B30]); /*0x78e3bd*/
          if ( _strcmpi(v12, v55) ) /*0x78e3c3*/
          {
            v13 = (char *)GetStringCSF(unk_84A084, 0, g_Str_File_wonline_cpp, 15077); /*0x78e3ef*/
            v56 = ToWideStringChar(v13); /*0x78e3fb*/
            v14 = String::GetOrEmpty(&MEMORY[0xB73B30]); /*0x78e401*/
            if ( _strcmpi(v14, v56) ) /*0x78e407*/
            {
              v15 = (char *)GetStringCSF(unk_84A074, 0, g_Str_File_wonline_cpp, 15079); /*0x78e433*/
              v57 = ToWideStringChar(v15); /*0x78e43f*/
              v16 = String::GetOrEmpty(&MEMORY[0xB73B30]); /*0x78e445*/
              if ( _strcmpi(v16, v57) ) /*0x78e44b*/
              {
                v17 = (char *)GetStringCSF(unk_84A060, 0, g_Str_File_wonline_cpp, 15081); /*0x78e477*/
                v58 = ToWideStringChar(v17); /*0x78e483*/
                v18 = String::GetOrEmpty(&MEMORY[0xB73B30]); /*0x78e489*/
                if ( _strcmpi(v18, v58) ) /*0x78e48f*/
                {
                  v19 = (char *)GetStringCSF(unk_84A04C, 0, g_Str_File_wonline_cpp, 15083); /*0x78e4bb*/
                  v59 = ToWideStringChar(v19); /*0x78e4c7*/
                  v20 = String::GetOrEmpty(&MEMORY[0xB73B30]); /*0x78e4cd*/
                  if ( _strcmpi(v20, v59) ) /*0x78e4d3*/
                  {
                    v21 = (char *)GetStringCSF(unk_84A038, 0, g_Str_File_wonline_cpp, 15085); /*0x78e4ff*/
                    v60 = ToWideStringChar(v21); /*0x78e50b*/
                    v22 = String::GetOrEmpty(&MEMORY[0xB73B30]); /*0x78e511*/
                    if ( _strcmpi(v22, v60) ) /*0x78e517*/
                    {
                      v23 = (char *)GetStringCSF(MEMORY[0x84A020], 0, g_Str_File_wonline_cpp, 15087); /*0x78e543*/
                      v61 = ToWideStringChar(v23); /*0x78e54f*/
                      v24 = String::GetOrEmpty(&MEMORY[0xB73B30]); /*0x78e555*/
                      if ( _strcmpi(v24, v61) ) /*0x78e55b*/
                      {
                        v25 = (char *)GetStringCSF(MEMORY[0x84A00C], 0, g_Str_File_wonline_cpp, 15089); /*0x78e587*/
                        v62 = ToWideStringChar(v25); /*0x78e593*/
                        v26 = String::GetOrEmpty(&MEMORY[0xB73B30]); /*0x78e599*/
                        if ( _strcmpi(v26, v62) ) /*0x78e59f*/
                        {
                          v27 = (char *)GetStringCSF(unk_849FF4, 0, g_Str_File_wonline_cpp, 15091); /*0x78e5cb*/
                          v63 = ToWideStringChar(v27); /*0x78e5d7*/
                          v28 = String::GetOrEmpty(&MEMORY[0xB73B30]); /*0x78e5dd*/
                          if ( _strcmpi(v28, v63) ) /*0x78e5e3*/
                          {
                            v29 = (char *)GetStringCSF(unk_849FDC, 0, g_Str_File_wonline_cpp, 15093); /*0x78e60c*/
                            v64 = ToWideStringChar(v29); /*0x78e618*/
                            v30 = String::GetOrEmpty(&MEMORY[0xB73B30]); /*0x78e61e*/
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
      DeleteAndZero::Alt2((void **)&dword_B7622C); /*0x78e64b*/
      v31 = GetDlgItem(hWnd, 1583); /*0x78e656*/
      if ( v31 ) /*0x78e65a*/
      {
        GetDialogText(v31, (void **)&dword_B7622C); /*0x78e663*/
        v32 = String::GetOrEmpty(&dword_B7622C); /*0x78e66d*/
        dword_B73AB8 = atol(v32); /*0x78e67b*/
      }
      DeleteAndZero::Alt2((void **)&dword_B76908); /*0x78e685*/
      v33 = GetDlgItem(hWnd, 1584); /*0x78e690*/
      if ( v33 ) /*0x78e694*/
      {
        GetDialogText(v33, (void **)&dword_B76908); /*0x78e69d*/
        v34 = String::GetOrEmpty(&dword_B76908); /*0x78e6a7*/
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


// ==== 0x0078E950  WOLobbySmallDlgProc  this=unknown  sig=csp ====
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
  DeleteAndZero::Alt2((void **)&dword_B77794); /*0x78e9e4*/
  v6 = GetDlgItem(hWnd, 1576); /*0x78e9f5*/
  if ( v6 ) /*0x78e9f9*/
    GetDialogText(v6, (void **)&dword_B77794); /*0x78ea02*/
  DeleteAndZero::Alt2((void **)&dword_B778F4); /*0x78ea0c*/
  v7 = GetDlgItem(hWnd, 1836); /*0x78ea17*/
  if ( v7 ) /*0x78ea1b*/
    GetDialogText(v7, (void **)&dword_B778F4); /*0x78ea24*/
  DeleteAndZero::Alt2((void **)&dword_B778FC); /*0x78ea2e*/
  v8 = GetDlgItem(hWnd, 1575); /*0x78ea39*/
  if ( v8 ) /*0x78ea3d*/
    GetDialogText(v8, (void **)&dword_B778FC); /*0x78ea46*/
  if ( v5 == 243 ) /*0x78ea51*/
  {
    DeleteAndZero::Alt2((void **)&dword_B765EC); /*0x78ea58*/
    v9 = GetDlgItem(hWnd, 1509); /*0x78ea63*/
    if ( v9 ) /*0x78ea67*/
    {
      GetDialogText(v9, (void **)&dword_B765EC); /*0x78ea70*/
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


// ==== 0x0078EBC0  DlgProcGameSetup  this=unknown  sig=csp ====
int __stdcall GameSetup_DlgProc(HWND hWnd, unsigned int a2, int a3, HWND a4)
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

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x78ebda*/
  if ( !result ) /*0x78ebe3*/
  {
    if ( a2 > 0x111 ) /*0x78ebef*/
    {
      if ( a2 == 1175 ) /*0x78eee5*/
      {
        if ( dword_B76234 ) /*0x78ef16*/
          SendDlgItemMessageA(hWnd, 1525, 0xF1u, 1u, 0); /*0x78ef26*/
        if ( dword_B779F0 ) /*0x78ef2e*/
          SendDlgItemMessageA(hWnd, 1527, 0xF1u, 1u, 0); /*0x78ef3e*/
        if ( dword_B779BC ) /*0x78ef46*/
          SendDlgItemMessageA(hWnd, 1526, 0xF1u, 1u, 0); /*0x78ef56*/
        if ( dword_B7690C ) /*0x78ef5e*/
          SendDlgItemMessageA(hWnd, 1528, 0xF1u, 1u, 0); /*0x78ef6e*/
        if ( dword_B77784 ) /*0x78ef76*/
          SendDlgItemMessageA(hWnd, 1529, 0xF1u, 1u, 0); /*0x78ef86*/
        if ( dword_B779DC ) /*0x78ef8e*/
          SendDlgItemMessageA(hWnd, 1530, 0xF1u, 1u, 0); /*0x78ef9e*/
        if ( dword_B779C0 ) /*0x78efa6*/
          SendDlgItemMessageA(hWnd, 1531, 0xF1u, 1u, 0); /*0x78efb6*/
        if ( byte_B76AF0 ) /*0x78efbe*/
          SendDlgItemMessageA(hWnd, 1908, 0xF1u, 1u, 0); /*0x78efce*/
        if ( MEMORY[0xB73AD0] ) /*0x78efd6*/
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
          MEMORY[0xA8E9A0] = 1; /*0x78ec41*/
          return 0; /*0x78ec4b*/
        case 0xFu: /*0x78ebfa*/
          Dialog::DrawBackground(hWnd); /*0x78ec21*/
          Dialog::StopBink(hWnd); /*0x78ec28*/
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
        MEMORY[0xA8E9A0] = 0; /*0x78eead*/
        DlgProcGameSetup_Setup(); /*0x78eeb3*/
        ShowAudioSettingsDialog(&a4); /*0x78eebc*/
        ShowWindow(hWnd, 5); /*0x78eec4*/
        Dialog::InitWindow(hWnd, 0); /*0x78eecc*/
        DlgProcGameSetup_Setup_72B930(); /*0x78eed1*/
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
          Theme::QueueSong((int)&g_BuildingTypeClass_Count, -3); /*0x78ee82*/
          return 0; /*0x78ee8d*/
        }
        if ( !Theme::IsPlaying((int)&g_BuildingTypeClass_Count) ) /*0x78ee28*/
          goto LABEL_37; /*0x78ee28*/
        v14 = dword_A83D14; /*0x78ee51*/
        if ( dword_A83D14 == -1 ) /*0x78ee5a*/
          v14 = dword_A83D18; /*0x78ee5c*/
        if ( v14 == StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_INTRO) ) /*0x78ee73*/
        {
LABEL_37:
          Theme::Stop(&g_BuildingTypeClass_Count, 0); /*0x78ee37*/
          Theme::QueueSong((int)&g_BuildingTypeClass_Count, -2); /*0x78ee43*/
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
    dword_B76958 = 0; /*0x78ecee*/
    v7 = GetDlgItem(hWnd, 1526); /*0x78ecf4*/
    if ( v7 ) /*0x78ecf8*/
      dword_B76958 = SendMessageA(v7, 0xF0u, 0, 0); /*0x78ed04*/
    dword_B76910 = 0; /*0x78ed0f*/
    v8 = GetDlgItem(hWnd, 1528); /*0x78ed15*/
    if ( v8 ) /*0x78ed19*/
      dword_B76910 = SendMessageA(v8, 0xF0u, 0, 0); /*0x78ed25*/
    v9 = GetDlgItem(hWnd, 1529); /*0x78ed30*/
    if ( v9 ) /*0x78ed34*/
      dword_B77798 = SendMessageA(v9, 0xF0u, 0, 0); /*0x78ed40*/
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
    dword_B77790 = 0; /*0x78edae*/
    v13 = GetDlgItem(hWnd, 1909); /*0x78edb4*/
    if ( v13 ) /*0x78edb8*/
      dword_B77790 = SendMessageA(v13, 0xF0u, 0, 0); /*0x78edc4*/
    __3_YAXPAX_Z(dword_B77E98); /*0x78edd0*/
    dword_B77E98 = 0; /*0x78eddf*/
    CloseDialog(hWnd, 1); /*0x78ede5*/
    return 0; /*0x78eded*/
  }
  return result; /*0x78ec13*/
}


// ==== 0x0078F000  SessionClass::BuildLaunchString  this=SessionClass  sig=csp ====
void SessionClass_BuildLaunchString()
{
  int v0; // eax
  int v1; // ecx
  int v2; // ebp
  int v3; // ebx
  wchar_t **v4; // edi
  wchar_t *v5; // esi
  wchar_t **v6; // esi
  char *v7; // esi
  char **v8; // eax
  char **v9; // eax
  char **v10; // eax
  char **v11; // eax
  int v12; // edi
  char *v13; // eax
  char **v14; // [esp-14h] [ebp-A0h]
  char **v15; // [esp-Ch] [ebp-98h]
  char **v16; // [esp-4h] [ebp-90h]
  char **v17; // [esp+4h] [ebp-88h]
  char *v18; // [esp+14h] [ebp-78h] BYREF
  int v19; // [esp+18h] [ebp-74h]
  int v20; // [esp+1Ch] [ebp-70h] BYREF
  void *v21; // [esp+20h] [ebp-6Ch] BYREF
  void *v22; // [esp+24h] [ebp-68h] BYREF
  void *v23; // [esp+28h] [ebp-64h] BYREF
  void *v24; // [esp+2Ch] [ebp-60h] BYREF
  void *v25; // [esp+30h] [ebp-5Ch] BYREF
  void *v26; // [esp+34h] [ebp-58h] BYREF
  void *v27; // [esp+38h] [ebp-54h] BYREF
  char Buffer[80]; // [esp+3Ch] [ebp-50h] BYREF

  v0 = SessionClass::initPlayers(MEMORY[0xA8B254]); /*0x78f009*/
  v1 = 1; /*0x78f014*/
  if ( MEMORY[0xAC10C8] == 1 ) /*0x78f01b*/
    ++v0; /*0x78f01d*/
  v2 = 0; /*0x78f01f*/
  v18 = 0; /*0x78f025*/
  v19 = 0; /*0x78f029*/
  if ( v0 <= 1 ) /*0x78f02d*/
    goto LABEL_15; /*0x78f02d*/
  v3 = v0 - 1; /*0x78f030*/
  v4 = (wchar_t **)&MEMORY[0xA8DA94]; /*0x78f033*/
  v20 = v0; /*0x78f03b*/
  do /*0x78f079*/
  {
    v5 = *v4; /*0x78f03f*/
    if ( *v4 == (wchar_t *)MEMORY[0xAC119C] || v5 == (wchar_t *)MEMORY[0xAC11B4] ) /*0x78f050*/
    {
      ++v18; /*0x78f071*/
    }
    else if ( IsKnownPointer(*v4) ) /*0x78f054*/
    {
      ++v2; /*0x78f05d*/
    }
    else if ( Player::IsObserver(v5) ) /*0x78f062*/
    {
      ++v19; /*0x78f06b*/
    }
    ++v4; /*0x78f075*/
    --v3; /*0x78f078*/
  }
  while ( v3 ); /*0x78f079*/
  if ( v20 < 8 ) /*0x78f083*/
  {
    v1 = v20; /*0x78f085*/
LABEL_15:
    v6 = (wchar_t **)(4 * v1 + 11066000); /*0x78f087*/
    do /*0x78f0b2*/
    {
      if ( *v6 == (wchar_t *)MEMORY[0xAC11B4] ) /*0x78f097*/
      {
        ++v18; /*0x78f099*/
      }
      else if ( IsKnownPointer(*v6) ) /*0x78f09f*/
      {
        ++v2; /*0x78f0a8*/
      }
      ++v6; /*0x78f0a9*/
    }
    while ( (int)v6 < (int)&MEMORY[0xA8DAB0] ); /*0x78f0b2*/
  }
  if ( MEMORY[0xAC116C] ) /*0x78f0bb*/
  {
    v7 = &v18[v2 + 1]; /*0x78f0ca*/
    v17 = String::Assign((char **)&v27, String2); /*0x78f0df*/
    v16 = FromStringInt((char **)&v26, (int)v7); /*0x78f0ec*/
    v15 = String::Assign((char **)&v25, asc_84BA48); /*0x78f100*/
    v14 = String::Assign((char **)&v24, g_WOL_IdleFlag); /*0x78f118*/
    v8 = String::Assign((char **)&v23, aMode_0); /*0x78f11f*/
    v9 = String::Concat((const char **)v8, (char **)&v22, v14); /*0x78f126*/
    v10 = String::Concat((const char **)v9, (char **)&v21, v15); /*0x78f12d*/
    v11 = String::Concat((const char **)v10, &v18, v16); /*0x78f134*/
    String::Concat((const char **)v11, (char **)&v20, v17); /*0x78f13b*/
    DeleteAndZero((void **)&v18); /*0x78f144*/
    DeleteAndZero(&v21); /*0x78f14d*/
    DeleteAndZero(&v22); /*0x78f156*/
    DeleteAndZero(&v23); /*0x78f15f*/
    DeleteAndZero(&v24); /*0x78f168*/
    DeleteAndZero(&v25); /*0x78f171*/
    DeleteAndZero(&v26); /*0x78f17a*/
    DeleteAndZero(&v27); /*0x78f183*/
    v12 = *(_DWORD *)MEMORY[0xAC116C]; /*0x78f191*/
    v13 = String::GetOrEmpty((char **)&v20); /*0x78f193*/
    (*(void (__stdcall **)(LPVOID, char *))(v12 + 156))(MEMORY[0xAC116C], v13); /*0x78f1a0*/
    memset(Buffer, 0, sizeof(Buffer)); /*0x78f1b1*/
    GameConfig::BuildChecksum(Buffer); /*0x78f1b7*/
    Buffer[40] = 0; /*0x78f1c5*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 168))(MEMORY[0xAC116C], Buffer); /*0x78f1ce*/
    (*(void (__stdcall **)(LPVOID, int, char *))(*(_DWORD *)MEMORY[0xAC116C] + 252))(MEMORY[0xAC116C], 1, &v7[v19]); /*0x78f1e5*/
    DeleteAndZero((void **)&v20); /*0x78f1ef*/
  }
}


// ==== 0x0078F200  ObjectClass::BuildWOLPlayerTooltip  this=int  sig=csp ====
wchar_t *__thiscall BuildWOLPlayerTooltip(IUnknown *this)
{
  char *v2; // eax
  _DWORD *v3; // esi
  ObjectClass *v4; // esi
  signed int v5; // eax
  signed int v6; // ebp
  int v7; // ebx
  char *v8; // esi
  char v9; // bl
  ObjectClass *v10; // esi
  char *v11; // esi
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  wchar_t *v17; // [esp-10h] [ebp-174h]
  CampaignScore *v18; // [esp-Ch] [ebp-170h]
  wchar_t *v19; // [esp-Ch] [ebp-170h]
  CampaignScore *v20; // [esp-8h] [ebp-16Ch]
  wchar_t *v21; // [esp-8h] [ebp-16Ch]
  CampaignScore *v22; // [esp-4h] [ebp-168h]
  wchar_t *StringCSF; // [esp-4h] [ebp-168h]
  CampaignScore *v24; // [esp+0h] [ebp-164h]
  char v25; // [esp+12h] [ebp-152h]
  char v26; // [esp+13h] [ebp-151h]
  int v27; // [esp+14h] [ebp-150h] BYREF
  int v28; // [esp+18h] [ebp-14Ch] BYREF
  IUnknown *aP0; // [esp+1Ch] [ebp-148h]
  char v30[108]; // [esp+20h] [ebp-144h] BYREF
  CampaignScore *v31[27]; // [esp+8Ch] [ebp-D8h] BYREF
  _DWORD v32[27]; // [esp+F8h] [ebp-6Ch] BYREF

  aP0 = this; /*0x78f210*/
  unknown_libname_73(&v27); /*0x78f214*/
  memset(v31, 0, sizeof(v31)); /*0x78f227*/
  v2 = ToWideStringChar(this); /*0x78f22b*/
  String::Assign_Bool((void **)&v27, v2); /*0x78f235*/
  String::ToLower((const char **)&v27); /*0x78f23e*/
  v3 = (_DWORD *)g_WOL_HashTable; /*0x78f243*/
  if ( g_WOL_HashTable /*0x78f267*/
    && *(_DWORD *)(g_WOL_HashTable + 4)
    && (v4 = *(ObjectClass **)(*v3 + 4 * HashMap::ComputeIndex_2(g_WOL_HashTable, (int)&v27))) != 0 )
  {
    while ( !String::Compare((const char **)v4, (const char **)&v27) ) /*0x78f277*/
    {
      v4 = (ObjectClass *)v4->estimatedHealth; /*0x78f27d*/
      if ( !v4 ) /*0x78f282*/
        goto LABEL_6; /*0x78f282*/
    }
    v8 = &v4->__pad_0[4]; /*0x78f309*/
    if ( v8 ) /*0x78f30e*/
      qmemcpy(v31, v8, sizeof(v31)); /*0x78f31c*/
    v26 = 1; /*0x78f31e*/
  }
  else
  {
LABEL_6:
    v26 = 0; /*0x78f284*/
  }
  memset(v32, 0, sizeof(v32)); /*0x78f297*/
  unknown_libname_73(&v28); /*0x78f29d*/
  v5 = g_WOL_State; /*0x78f2a2*/
  v6 = 0; /*0x78f2a7*/
  if ( (int)g_WOL_State > 0 ) /*0x78f2ab*/
  {
    v7 = 0; /*0x78f2b1*/
    do /*0x78f33c*/
    {
      if ( v7 >= 0 && v6 < v5 ) /*0x78f2b9*/
        qmemcpy(v30, &g_WOL_ConnectionFlags[v7], sizeof(v30)); /*0x78f2cc*/
      if ( !strcmp(&v30[36], ToWideStringChar(aP0)) ) /*0x78f2e3*/
        break; /*0x78f32f*/
      v5 = g_WOL_State; /*0x78f331*/
      ++v6; /*0x78f336*/
      v7 += 3; /*0x78f337*/
    }
    while ( v6 < (int)g_WOL_State ); /*0x78f33c*/
  }
  v9 = 0; /*0x78f34b*/
  v25 = 0; /*0x78f352*/
  if ( strlen(&v30[46]) ) /*0x78f34d*/
  {
    v9 = 1; /*0x78f361*/
    String::Assign_Bool((void **)&v28, &v30[87]); /*0x78f363*/
    String::ToLower((const char **)&v28); /*0x78f36c*/
    if ( dword_B768C4 ) /*0x78f378*/
    {
      v10 = (ObjectClass *)*((_DWORD *)g_WOL_ListParser + (dword_B768D8(&v28) & ((1 << dword_B768CC) - 1))); /*0x78f399*/
      if ( v10 ) /*0x78f39e*/
      {
        while ( !String::Compare((const char **)v10, (const char **)&v28) ) /*0x78f3ae*/
        {
          v10 = (ObjectClass *)v10->estimatedHealth; /*0x78f3b0*/
          if ( !v10 ) /*0x78f3b5*/
            goto LABEL_27; /*0x78f3b5*/
        }
        v11 = &v10->__pad_0[4]; /*0x78f3bd*/
        if ( v11 ) /*0x78f3c2*/
          qmemcpy(v32, v11, sizeof(v32)); /*0x78f3d0*/
        v25 = 1; /*0x78f3d2*/
      }
    }
  }
LABEL_27:
  if ( !v26 ) /*0x78f3dd*/
  {
    if ( !v9 ) /*0x78f4d2*/
    {
      StringCSF = GetStringCSF( /*0x78f57f*/
                    (wchar_t *)&stru_830620.__pad_579C[40288],
                    0,
                    (CampaignScore *)g_Str_File_wonline_cpp,
                    15730);
      v15 = GetStringCSF(aTxtPlayerToolt_4, 0, (CampaignScore *)g_Str_File_wonline_cpp, 15730); /*0x78f58a*/
      swprintf(&word_B76238, (const size_t)v15, StringCSF, v24); /*0x78f595*/
      goto LABEL_40; /*0x78f595*/
    }
    if ( v25 ) /*0x78f4e2*/
    {
      v20 = (CampaignScore *)CharToWideString(&v30[46]); /*0x78f4f3*/
      v19 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40288], 0, (CampaignScore *)g_Str_File_wonline_cpp, 15722); /*0x78f50f*/
      v13 = GetStringCSF(aTxtPlayerToolt_2, 0, (CampaignScore *)g_Str_File_wonline_cpp, 15722); /*0x78f51a*/
      goto LABEL_37; /*0x78f51a*/
    }
    v22 = (CampaignScore *)CharToWideString(&v30[46]); /*0x78f53b*/
    v21 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40288], 0, (CampaignScore *)g_Str_File_wonline_cpp, 15726); /*0x78f552*/
    v14 = GetStringCSF((wchar_t *)aTxtPlayerToolt_3, 0, (CampaignScore *)g_Str_File_wonline_cpp, 15726); /*0x78f55d*/
LABEL_33:
    swprintf(&word_B76238, (const size_t)v14, v21, v22); /*0x78f4bd*/
    goto LABEL_40; /*0x78f4cb*/
  }
  if ( !v9 ) /*0x78f3e5*/
  {
    v22 = v31[7]; /*0x78f494*/
    v21 = GetStringCSF((wchar_t *)&stru_84A684.headNode[2], 0, (CampaignScore *)g_Str_File_wonline_cpp, 15716); /*0x78f4ad*/
    v14 = GetStringCSF(aTxtPlayerToolt_1, 0, (CampaignScore *)g_Str_File_wonline_cpp, 15716); /*0x78f4b8*/
    goto LABEL_33; /*0x78f4b8*/
  }
  if ( !v25 ) /*0x78f3f5*/
  {
    CharToWideString(&v30[46]); /*0x78f44d*/
    v20 = v31[7]; /*0x78f45c*/
    v19 = GetStringCSF((wchar_t *)&stru_84A684.headNode[2], 0, (CampaignScore *)g_Str_File_wonline_cpp, 15712); /*0x78f478*/
    v13 = GetStringCSF((wchar_t *)aTxtPlayerToolt_0, 0, (CampaignScore *)g_Str_File_wonline_cpp, 15712); /*0x78f483*/
LABEL_37:
    swprintf(&word_B76238, (const size_t)v13, v19, v20); /*0x78f51f*/
    goto LABEL_40; /*0x78f52d*/
  }
  CharToWideString(&v30[46]); /*0x78f3f7*/
  v18 = v31[7]; /*0x78f413*/
  v17 = GetStringCSF((wchar_t *)&stru_84A684.headNode[2], 0, (CampaignScore *)g_Str_File_wonline_cpp, 15708); /*0x78f42a*/
  v12 = GetStringCSF(aTxtPlayerToolt, 0, (CampaignScore *)g_Str_File_wonline_cpp, 15708); /*0x78f435*/
  swprintf(&word_B76238, (const size_t)v12, v17, v18); /*0x78f440*/
LABEL_40:
  DeleteAndZero((int)&v28); /*0x78f59d*/
  DeleteAndZero((int)&v27); /*0x78f5aa*/
  return &word_B76238; /*0x78f5b4*/
}


// ==== 0x0078F5C0  WOLobby::FormatLatencyText  this=int  sig=csp ====
wchar_t *__thiscall WOLobby::FormatLatencyText(wchar_t *Format)
{
  int v2; // eax
  wchar_t *v3; // eax
  int v5; // [esp-10h] [ebp-14h]
  const wchar_t *v6; // [esp-Ch] [ebp-10h]
  wchar_t *StringCSF; // [esp-8h] [ebp-Ch]

  v2 = dword_B76440[WOLobby::FindPlayerIndex(Format)]; /*0x78f5c8*/
  if ( v2 >= 0 ) /*0x78f5d1*/
  {
    if ( v2 >= 300 ) /*0x78f61a*/
    {
      if ( v2 >= 500 ) /*0x78f642*/
      {
        StringCSF = GetStringCSF(aTxtPoor, 0, (CampaignScore *)g_Str_File_wonline_cpp, 15747); /*0x78f679*/
        v6 = Format; /*0x78f67a*/
        v5 = 15747; /*0x78f67b*/
      }
      else
      {
        StringCSF = GetStringCSF(aTxtFair, 0, (CampaignScore *)g_Str_File_wonline_cpp, 15745); /*0x78f65a*/
        v6 = Format; /*0x78f65b*/
        v5 = 15745; /*0x78f65c*/
      }
    }
    else
    {
      StringCSF = GetStringCSF(aTxtGood, 0, (CampaignScore *)g_Str_File_wonline_cpp, 15743); /*0x78f633*/
      v6 = Format; /*0x78f634*/
      v5 = 15743; /*0x78f635*/
    }
    v3 = GetStringCSF(aTxtLatencyIcon_0, 0, (CampaignScore *)g_Str_File_wonline_cpp, v5); /*0x78f68c*/
  }
  else
  {
    GetStringCSF((wchar_t *)&stru_84A684.__pad_20[8], 0, (CampaignScore *)g_Str_File_wonline_cpp, 15741); /*0x78f5e4*/
    StringCSF = GetStringCSF(aTxtUnknown, 0, (CampaignScore *)g_Str_File_wonline_cpp, 15741); /*0x78f607*/
    v6 = Format; /*0x78f608*/
    v3 = GetStringCSF((wchar_t *)aTxtLatencyIcon, 0, (CampaignScore *)g_Str_File_wonline_cpp, 15741); /*0x78f613*/
  }
  swprintf(&word_B75F6C, (const size_t)v3, v6, (CampaignScore *)StringCSF); /*0x78f697*/
  return &word_B75F6C; /*0x78f6a4*/
}


// ==== 0x0078F7F0  WOLobby::SetupDlgProc  this=VOID_PTR  sig=csp ====
int __stdcall sub_78F7F0(HWND hDlg, unsigned int a2, unsigned int nIDDlgItem, HWND hWnd)
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
  const wchar_t **v21; // eax
  wchar_t *v22; // eax
  wchar_t **OwnerName; // eax
  wchar_t *v24; // eax
  void *v25; // esi
  _DWORD *v26; // ecx
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
  void (__stdcall **v59)(LPVOID, char *, int, char **); // esi
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
  _DWORD *v110; // eax
  int v111; // esi
  int v112; // ecx
  int v113; // ebp
  signed int v114; // edi
  signed int v115; // ebx
  ULONG v116; // esi
  char *v117; // eax
  LPARAM v118; // eax
  LPARAM v119; // eax
  _DWORD *First; // ebx
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
  void (__stdcall **v164)(LPVOID, char *, int, char **); // [esp+18h] [ebp-244h] BYREF
  int v165; // [esp+1Ch] [ebp-240h]
  char *v166; // [esp+20h] [ebp-23Ch]
  void (__stdcall **v167)(LPVOID, char *, int, char **); // [esp+24h] [ebp-238h]
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
      if ( (_WORD)nIDDlgItem == 8 )
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
      First = (_DWORD *)MultiplayerGameMode::GetFirst();
      v121 = First[10];
      MEMORY[0xA8B23C] = (int)First;
      *(_DWORD *)MEMORY[0xA8B250] = v121;
      (*(void (__thiscall **)(_DWORD *))(*First + 32))(First);
      SetDialogPlayerName(hDlg, (int)First);
      MEMORY[0xA8B254] = (*(int (__thiscall **)(_DWORD *))(*First + 68))(First);
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
        && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 188))(MEMORY[0xA8B23C]) )
      {
        MEMORY[0x8316A4] = -1;
        MEMORY[0xAC10C8] = 0;
        Dialog::RefreshDialogsGame(0);
        *(_DWORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 107) = 0;
        v129 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 40))(MEMORY[0xA8B23C]);
        SessionClass::SetPlayerOption(MEMORY[0xA8DA90], v129);
        SessionClass::SetPlayerColor(MEMORY[0xA8DA90], -2);
        SessionClass::SetOption(MEMORY[0xA8DA90], -2);
        v130 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 44))(MEMORY[0xA8B23C]);
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
        || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 4))(MEMORY[0xA8B23C])
        || (v132 = *((_DWORD *)MEMORY[0xA8B230] + 1145), v132 > PlayerCount) )
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
            v167 = *(void (__stdcall ***)(LPVOID, char *, int, char **))MEMORY[0xAC1170];
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
            v167 = *(void (__stdcall ***)(LPVOID, char *, int, char **))MEMORY[0xAC1170];
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
    if ( *(_DWORD *)hWnd )
    {
      DlgCtrlID = (void *)GetDlgCtrlID(*(HWND *)hWnd);
      if ( *((_DWORD *)hWnd + 1) != -1 )
      {
        if ( Dialog::MapPlayerIDToIndex(DlgCtrlID) != -1 )
        {
          SelectedDefault = (void *)GetComboBoxSelectedDefault(hDlg, (int)DlgCtrlID, *((_DWORD *)hWnd + 1));
          DifficultyString = GameClass::GetDifficultyString(SelectedDefault);
          WideString::Assign_Alt(v139, DifficultyString);
          return 1;
        }
        if ( CountryCombo::IDToIndex(DlgCtrlID) == -1 )
        {
          if ( StartCombo::IDToIndex(DlgCtrlID) != -1 )
          {
            SelectedRaw = GetComboBoxSelectedRaw(hDlg, (int)DlgCtrlID, *((_DWORD *)hWnd + 1));
            ColorTooltip = (wchar_t *)GameSetup::GetColorTooltip(SelectedRaw);
            WideString::Assign_Alt(v139, ColorTooltip);
            return 1;
          }
        }
        else
        {
          Selected = (void *)GetComboBoxSelected(hDlg, (int)DlgCtrlID, *((_DWORD *)hWnd + 1));
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
        v100 = (HWND)CreateDialog(0xCFu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))OnlineLobbyDlgProcWOL, 0);
        MEMORY[0xA8ED9C] = 1;
        Timer::PumpMessages((HWND *)MEMORY[0x87F770]);
        ShowWindow(v100, 1);
        GameUI = Dialog::FindGameUI();
        v102 = Dialog::UpdateGameUI;
        if ( !GameUI )
          v102 = Dialog::PumpMessages;
        MessageDialogLoopAlt(v100, (unsigned __int8 (*)(void))v102, 0, 1, 1);
        Timer::PumpMessages((HWND *)MEMORY[0x87F770]);
        MEMORY[0xA8ED9C] = *((_BYTE *)MEMORY[0xA8B230] + 13730);
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
    v164 = (void (__stdcall **)(LPVOID, char *, int, char **))MEMORY[0xA8B254];
    if ( MEMORY[0xA8B23C] )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 64))(MEMORY[0xA8B23C]) )
      {
        v103 = MEMORY[0xA8B23C];
        v163 = 0;
LABEL_260:
        if ( !v103 || (v104 = (*(int (__thiscall **)(int))(*(_DWORD *)v103 + 188))(v103), HIBYTE(v165) = 0, v104) )
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
            || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 4))(MEMORY[0xA8B23C])
            || (v112 = *((_DWORD *)MEMORY[0xA8B230] + 1145), v112 > v111) )
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
          if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 64))(MEMORY[0xA8B23C]) )
          {
            v107 = MEMORY[0xA8B23C];
            v108 = 0;
            goto LABEL_272;
          }
          v107 = MEMORY[0xA8B23C];
        }
        v108 = 1;
LABEL_272:
        if ( !v107 || (v109 = (*(int (__thiscall **)(int))(*(_DWORD *)v107 + 188))(v107)) != 0 )
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
        if ( *(_DWORD *)(*(_DWORD *)v60 + 107) == -1 )
          v59 = (void (__stdcall **)(LPVOID, char *, int, char **))((char *)v59 + 1);
        v60 += 4;
        --v61;
      }
      while ( v61 );
      v164 = v59;
    }
    if ( (int)(g_WOL_State - (_DWORD)v59) < 2 )
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
        if ( !*(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v64) + 127) )
        {
          v158 = *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v64);
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
        if ( !IsKnownPointer((wchar_t *)v69) || *(_DWORD *)(v69 + 107) == -1 )
        {
          if ( Player::IsObserver((void *)v69) && *(_DWORD *)(v69 + 107) != -1 && v67 != MEMORY[0xA8B2FC][i] )
            goto LABEL_184;
        }
        else if ( i )
        {
          if ( v67 != *(_DWORD *)(v69 + 99) )
            goto LABEL_184;
        }
        else
        {
          v67 = *(_DWORD *)(v69 + 99);
        }
      }
    }
    if ( v67 < 0 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 4))(MEMORY[0xA8B23C]) )
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
          if ( v79 < (int)(SendDlgItemMessageA(hDlg, 1362, 0x400u, 0, 0) + g_WOL_State - (_DWORD)v164) )
          {
            v80 = GetStringCSF(g_Str_TXT_SCENARIO_TOO_SMALL, 0, g_Str_File_wonline_cpp, 16611);
            Dialog::ShowMessage(-1, (size_t)v80, v79);
            return 0;
          }
          if ( (int)g_WOL_State <= 6 )
          {
            v81 = MEMORY[0xA8B23C];
            unknown_libname_74(&v162);
            if ( (*(unsigned __int8 (__thiscall **)(int, const wchar_t **))(*(_DWORD *)v81 + 20))(v81, &v162) )
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
                  if ( *(_DWORD *)(v86 + 107) == -1 )
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
                    v90 = *((_DWORD *)v166 + 5);
                    if ( !v90 )
                    {
                      v92 = GetStringCSF(g_Str_TXT_CLAN_NOSTART, 0, g_Str_File_wonline_cpp, 16661);
                      Dialog::ShowMessage(-1, (size_t)v92);
                      DeleteAndZero::Alt((void **)&v162);
                      return 0;
                    }
                    if ( !v85 || v85 == v90 )
                    {
                      v85 = *((_DWORD *)v166 + 5);
                      v164 = (void (__stdcall **)(LPVOID, char *, int, char **))((char *)v164 + 1);
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
                      v168 = *((_DWORD *)v166 + 5);
                      v167 = (void (__stdcall **)(LPVOID, char *, int, char **))((char *)v167 + 1);
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
                (*(void (__thiscall **)(int))(*(_DWORD *)v81 + 104))(v81);
                Player::RandomAssign(MEMORY[0xA8B238]);
                Lobby::BuildPlayerList();
                CheckGameSettingsChanged(1, 1);
                (*(void (__thiscall **)(int))(*(_DWORD *)v81 + 100))(v81);
                (*(void (__thiscall **)(int))(*(_DWORD *)v81 + 36))(v81);
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
                      qmemcpy(String, &v166[(_DWORD)g_WOL_ConnectionFlags], 0x6Cu);
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
                (*(void (__stdcall **)(LPVOID, struct in_addr *))(*(_DWORD *)MEMORY[0xAC116C] + 72))(
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
          for ( *((_WORD *)&Rect.left + v32) = 0; *v38; ++v38 )
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
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]);
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

