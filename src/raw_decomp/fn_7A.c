// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x007A0430  ObjectClass::CollectWOLConnectionTokens  this=ObjectClass  sig=csp ====
signed int CollectWOLConnectionTokens()
{
  signed int result; // eax
  signed int v1; // ebx
  int v2; // ebp
  char *v3; // eax
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  void *v7; // ebp
  void *v8; // eax
  int v9; // ebx
  void *v10; // ebp
  void *v11; // eax
  char **v12; // ecx
  int v13; // [esp+8h] [ebp-7Ch]
  void *v14; // [esp+Ch] [ebp-78h] BYREF
  signed int v15; // [esp+10h] [ebp-74h]
  int v16; // [esp+14h] [ebp-70h]
  _BYTE v17[108]; // [esp+18h] [ebp-6Ch] BYREF

  memset(v17, 0, sizeof(v17)); /*0x7a0440*/
  Debug::Log(); /*0x7a044d*/
  result = g_WOL_State; /*0x7a0452*/
  v1 = 0; /*0x7a045a*/
  v15 = 0; /*0x7a045e*/
  if ( (int)g_WOL_State > 0 ) /*0x7a0462*/
  {
    v2 = 0; /*0x7a0469*/
    v16 = 0; /*0x7a046c*/
    do /*0x7a0673*/
    {
      if ( v2 >= 0 && v1 < result ) /*0x7a0476*/
        qmemcpy(v17, (char *)g_WOL_ConnectionFlags + v2, sizeof(v17)); /*0x7a048a*/
      if ( (v17[0] & 1) != 0 || (v3 = String::GetOrEmpty((char **)&g_WebBrowser), !_strcmpi(&v17[36], v3)) ) /*0x7a04ba*/
      {
        Debug::Log(); /*0x7a049d*/
      }
      else
      {
        String::Assign((char **)&v14, &v17[36]); /*0x7a04e6*/
        String::GetOrEmpty((char **)&v14); /*0x7a04ef*/
        Debug::Log(); /*0x7a04fa*/
        v4 = g_WOL_ConnectionToken; /*0x7a04ff*/
        v5 = g_WOL_ConnectionToken; /*0x7a0507*/
        v13 = g_WOL_ConnectionToken; /*0x7a050b*/
        v6 = dword_B76AD4; /*0x7a0515*/
        if ( g_WOL_ConnectionToken >= dword_B76AD4 ) /*0x7a051d*/
        {
          v6 = 2 * g_WOL_ConnectionToken; /*0x7a0527*/
          if ( 2 * g_WOL_ConnectionToken < 10 ) /*0x7a052d*/
            v6 = 10; /*0x7a052f*/
          v7 = __2_YAPAXI_Z(4 * v6); /*0x7a0543*/
          memset(v7, 0, 4 * ((unsigned int)(4 * v6) >> 2)); /*0x7a0551*/
          v8 = g_WOL_ObjectState; /*0x7a055a*/
          if ( g_WOL_ObjectState ) /*0x7a0561*/
          {
            qmemcpy(v7, g_WOL_ObjectState, 4 * g_WOL_ConnectionToken); /*0x7a056d*/
            v8 = g_WOL_ObjectState; /*0x7a056f*/
            v5 = v13; /*0x7a0574*/
          }
          __3_YAXPAX_Z(v8); /*0x7a0579*/
          v4 = g_WOL_ConnectionToken; /*0x7a057e*/
          g_WOL_ObjectState = v7; /*0x7a0586*/
          dword_B76AD4 = v6; /*0x7a058c*/
        }
        if ( v4 >= v6 ) /*0x7a0594*/
        {
          v9 = 2 * v4; /*0x7a0596*/
          if ( 2 * v4 < 10 ) /*0x7a059c*/
            v9 = 10; /*0x7a059e*/
          v10 = __2_YAPAXI_Z(4 * v9); /*0x7a05b2*/
          memset(v10, 0, 4 * ((unsigned int)(4 * v9) >> 2)); /*0x7a05c0*/
          v11 = g_WOL_ObjectState; /*0x7a05c9*/
          if ( g_WOL_ObjectState ) /*0x7a05d0*/
          {
            qmemcpy(v10, g_WOL_ObjectState, 4 * g_WOL_ConnectionToken); /*0x7a05dc*/
            v11 = g_WOL_ObjectState; /*0x7a05de*/
            v5 = v13; /*0x7a05e3*/
          }
          __3_YAXPAX_Z(v11); /*0x7a05e8*/
          v4 = g_WOL_ConnectionToken; /*0x7a05ed*/
          g_WOL_ObjectState = v10; /*0x7a05f5*/
          dword_B76AD4 = v9; /*0x7a05fb*/
        }
        if ( v5 < v4 ) /*0x7a0603*/
        {
          memcpy((char *)g_WOL_ObjectState + 4 * v5 + 4, (char *)g_WOL_ObjectState + 4 * v5, 4 * (v4 + 0x3FFFFFFF * v5)); /*0x7a0620*/
          v4 = g_WOL_ConnectionToken; /*0x7a0625*/
        }
        v12 = (char **)((char *)g_WOL_ObjectState + 4 * v5); /*0x7a0633*/
        if ( v12 ) /*0x7a0638*/
        {
          String::AssignFromPtr(v12, (const char **)&v14); /*0x7a063f*/
          v4 = g_WOL_ConnectionToken; /*0x7a0644*/
        }
        g_WOL_ConnectionToken = v4 + 1; /*0x7a064e*/
        DeleteAndZero(&v14); /*0x7a0653*/
        v2 = v16; /*0x7a0658*/
        v1 = v15; /*0x7a065c*/
      }
      result = g_WOL_State; /*0x7a0660*/
      ++v1; /*0x7a0665*/
      v2 += 108; /*0x7a0666*/
      v15 = v1; /*0x7a066b*/
      v16 = v2; /*0x7a066f*/
    }
    while ( v1 < (int)g_WOL_State ); /*0x7a0673*/
  }
  return result; /*0x7a067b*/
}


// ==== 0x007A0690  ObjectClass::RequestMatchWOL  this=ObjectClass  sig=csp ====
char WOL_RequestMatch()
{
  HWND v0; // eax
  int i; // esi
  int v2; // esi
  int v3; // ebp
  int v4; // eax
  char *v5; // ebx
  _DWORD *v7; // eax
  int v8; // esi
  int v9; // edi
  char **v10; // eax
  wchar_t *String; // eax
  char **v12; // eax
  char **v13; // eax
  int v14; // esi
  int v15; // edi
  int v16; // esi
  char **v17; // eax
  int v18; // eax
  char **v19; // eax
  char **v20; // eax
  int v21; // esi
  char **v22; // eax
  char **v23; // eax
  char **v24; // eax
  int v25; // esi
  char *v26; // eax
  void *v27; // [esp+10h] [ebp-114h] BYREF
  void *v28; // [esp+14h] [ebp-110h] BYREF
  void *v29; // [esp+18h] [ebp-10Ch] BYREF
  void *v30; // [esp+1Ch] [ebp-108h] BYREF
  void **v31; // [esp+20h] [ebp-104h] BYREF
  int v32; // [esp+24h] [ebp-100h]
  void **v33; // [esp+28h] [ebp-FCh] BYREF
  int v34; // [esp+2Ch] [ebp-F8h]
  void *v35; // [esp+30h] [ebp-F4h] BYREF
  int v36; // [esp+34h] [ebp-F0h] BYREF
  char v37; // [esp+38h] [ebp-ECh]
  __int16 v38; // [esp+3Eh] [ebp-E6h] BYREF
  int v39; // [esp+40h] [ebp-E4h] BYREF
  int v40; // [esp+48h] [ebp-DCh] BYREF
  _DWORD v41[27]; // [esp+4Ch] [ebp-D8h] BYREF
  _BYTE v42[108]; // [esp+B8h] [ebp-6Ch] BYREF

  DeleteAndZero::Alt2((void **)&dword_B76AC4); /*0x7a069f*/
  v0 = (HWND)Dialog::FindByHandle((void *)0x11F); /*0x7a06a9*/
  if ( v0 ) /*0x7a06b2*/
    CloseDialog(v0, 0); /*0x7a06b8*/
  g_NetworkLobbyState = 0; /*0x7a06bd*/
  Network::Init(); /*0x7a06c3*/
  if ( (int)g_WOL_State < 2 ) /*0x7a06cf*/
    goto LABEL_17; /*0x7a06cf*/
  for ( i = 0; i < g_WOL_ConnectionToken; ++i ) /*0x7a06de*/
    DeleteAndZero((void **)g_WOL_ObjectState + i); /*0x7a06e8*/
  v2 = 0; /*0x7a06fc*/
  for ( g_WOL_ConnectionToken = 0; v2 < g_WOL_LoginPool; ++v2 ) /*0x7a0706*/
    DeleteAndZero((void **)dword_B76978 + v2); /*0x7a0711*/
  g_WOL_LoginPool = 0; /*0x7a0720*/
  dword_B736F4 = 0; /*0x7a0726*/
  CollectWOLConnectionTokens(); /*0x7a072c*/
  memset(v42, 0, sizeof(v42)); /*0x7a074b*/
  v3 = -1; /*0x7a074d*/
  Debug::Log(); /*0x7a0750*/
  v4 = 0; /*0x7a075e*/
  if ( (int)g_WOL_State <= 0 ) /*0x7a0762*/
    goto LABEL_17; /*0x7a0762*/
  v5 = (char *)g_WOL_ConnectionFlags; /*0x7a0764*/
  do /*0x7a0794*/
  {
    if ( v4 >= 0 && v4 < (int)g_WOL_State ) /*0x7a0770*/
      qmemcpy(v42, v5, sizeof(v42)); /*0x7a0780*/
    if ( (v42[0] & 1) != 0 ) /*0x7a078a*/
      v3 = v4; /*0x7a078c*/
    ++v4; /*0x7a078e*/
    v5 += 108; /*0x7a078f*/
  }
  while ( v4 < (int)g_WOL_State ); /*0x7a0794*/
  if ( v3 == -1 ) /*0x7a0799*/
  {
LABEL_17:
    g_WOL_GameListState = 1; /*0x7a079e*/
    g_WOL_IdleHandler = 0; /*0x7a07a8*/
    g_WOL_GameProcessState = -1; /*0x7a07ae*/
    g_WOL_GameListPool = time(0); /*0x7a07c0*/
    return 0; /*0x7a07d1*/
  }
  memset(v41, 0, sizeof(v41)); /*0x7a07e1*/
  if ( v3 >= 0 && v3 < (int)g_WOL_State ) /*0x7a07e7*/
    qmemcpy(v41, (char *)g_WOL_ConnectionFlags + 108 * v3, sizeof(v41)); /*0x7a0802*/
  v41[8] = 0; /*0x7a0808*/
  v36 = 0; /*0x7a080c*/
  v37 = 0; /*0x7a0810*/
  ReadRegistryOptionsWOL(&v36); /*0x7a0815*/
  ComPtr::Constructor(&v33); /*0x7a081e*/
  v33 = &vt_rc_ptr_PlayerProfile; /*0x7a082c*/
  if ( Flag::IsNot2(&v36) ) /*0x7a0830*/
  {
    v7 = LoadPlayerProfile(&v31, (const char **)&g_WebBrowser); /*0x7a0842*/
    ComPtr::Set(&v33, v7[1]); /*0x7a084f*/
    v31 = &vt_rc_ptr_PlayerProfile; /*0x7a0858*/
    ComPtr::Release(&v31); /*0x7a085c*/
  }
  else
  {
    ComPtr::Set(&v33, dword_B75E4C); /*0x7a086d*/
  }
  v8 = *(_DWORD *)(v34 + 28); /*0x7a087b*/
  String::Assign((char **)&v35, unk_84D1F0); /*0x7a0882*/
  unknown_libname_73(&v29); /*0x7a088b*/
  if ( MEMORY[0xA8B244] != 3 ) /*0x7a0897*/
    goto LABEL_35; /*0x7a0897*/
  String::Assign_Alt(&v35, unk_84D1E4); /*0x7a08a6*/
  v9 = RequestMatchWOL_Helper(); /*0x7a08b4*/
  ComPtr::Constructor(&v31); /*0x7a08b6*/
  v31 = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x7a08c4*/
  ComPtr::Set(&v31, *(_DWORD *)(v9 + 4)); /*0x7a08cc*/
  if ( v32 ) /*0x7a08d7*/
  {
    if ( *(_DWORD *)(v32 + 68) == 2 ) /*0x7a08f2*/
    {
      String::Assign_Alt(&v29, unk_84D1DC); /*0x7a097a*/
      if ( v8 <= 4 ) /*0x7a0982*/
        goto LABEL_34; /*0x7a0982*/
    }
    else
    {
      if ( *(_DWORD *)(v32 + 68) != 3 ) /*0x7a08f5*/
      {
        g_WOL_GameListState = 0; /*0x7a08f8*/
        g_WOL_IdleHandler = 0; /*0x7a08fe*/
        g_WOL_GameProcessState = -1; /*0x7a0904*/
        g_WOL_GameListPool = time(0); /*0x7a091a*/
        v31 = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x7a091f*/
        ComPtr::Release(&v31); /*0x7a0923*/
        DeleteAndZero(&v29); /*0x7a092c*/
        DeleteAndZero(&v35); /*0x7a0935*/
        v33 = &vt_rc_ptr_PlayerProfile; /*0x7a093e*/
        ComPtr::Release(&v33); /*0x7a0946*/
        return 0; /*0x7a0957*/
      }
      String::Assign_Alt(&v29, unk_84D1D4); /*0x7a0961*/
      if ( (unsigned int)v8 > 4 ) /*0x7a0968*/
        goto LABEL_34; /*0x7a0968*/
    }
    v8 = -1; /*0x7a0984*/
    goto LABEL_34; /*0x7a0984*/
  }
  String::Assign_Alt(&v29, unk_84D1DC); /*0x7a08e2*/
LABEL_34:
  String::Append((const char **)&v29, unk_84D1CC); /*0x7a0987*/
  v10 = FromStringInt((char **)&v28, *(int *)MEMORY[0xA8B240]); /*0x7a099f*/
  String::Append2((const char **)&v29, v10); /*0x7a09a9*/
  DeleteAndZero(&v28); /*0x7a09b2*/
  v31 = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x7a09bb*/
  ComPtr::Release(&v31); /*0x7a09bf*/
LABEL_35:
  String = GetStringCSF(MEMORY[0x84D1B8], 0, g_Str_File_wonline_cpp, 28395); /*0x7a09c9*/
  Dialog::ShowMessage(16744576, (size_t)String); /*0x7a09e6*/
  String::AssignFromPtr((char **)&v27, (const char **)&v35); /*0x7a09f7*/
  String::Append((const char **)&v27, MEMORY[0x84D1B0]); /*0x7a0a05*/
  v12 = FromStringInt((char **)&v28, v8); /*0x7a0a10*/
  String::Append2((const char **)&v27, v12); /*0x7a0a1a*/
  DeleteAndZero(&v28); /*0x7a0a23*/
  String::Append((const char **)&v27, MEMORY[0x84D1A8]); /*0x7a0a31*/
  v13 = FromStringInt((char **)&v28, *(_DWORD *)(v34 + 32)); /*0x7a0a41*/
  String::Append2((const char **)&v27, v13); /*0x7a0a4b*/
  DeleteAndZero(&v28); /*0x7a0a54*/
  String::Append((const char **)&v27, MEMORY[0x84D1A0]); /*0x7a0a62*/
  if ( *(_BYTE *)(v34 + 56) ) /*0x7a0a6b*/
    String::Append((const char **)&v27, MEMORY[0x831898]); /*0x7a0a77*/
  else
    String::Append((const char **)&v27, MEMORY[0x82BFAC]); /*0x7a0a82*/
  String::AssignFromPtr((char **)&v30, (const char **)&g_WebBrowser); /*0x7a0a90*/
  String::ToLower((const char **)&v30); /*0x7a0a99*/
  v14 = *((_DWORD *)g_WOL_ConnectionPool + (dword_B76548(&v30) & ((1 << dword_B7653C) - 1))); /*0x7a0abd*/
  if ( v14 ) /*0x7a0ac2*/
  {
    while ( !String::Compare((const char **)v14, (const char **)&v30) ) /*0x7a0ad6*/
    {
      v14 = *(_DWORD *)(v14 + 8); /*0x7a0ad8*/
      if ( !v14 ) /*0x7a0add*/
        goto LABEL_50; /*0x7a0add*/
    }
    v15 = 0; /*0x7a0ae9*/
    if ( dword_B76534 ) /*0x7a0aed*/
    {
      v16 = *((_DWORD *)g_WOL_ConnectionPool + (dword_B76548(&v30) & ((1 << dword_B7653C) - 1))); /*0x7a0b0e*/
      if ( v16 ) /*0x7a0b13*/
      {
        while ( !String::Compare((const char **)v16, (const char **)&v30) ) /*0x7a0b23*/
        {
          v16 = *(_DWORD *)(v16 + 8); /*0x7a0b25*/
          if ( !v16 ) /*0x7a0b2a*/
            goto LABEL_49; /*0x7a0b2a*/
        }
        if ( v16 != -4 ) /*0x7a0b37*/
          v15 = *(_DWORD *)(v16 + 4); /*0x7a0b39*/
      }
    }
LABEL_49:
    String::Append((const char **)&v27, MEMORY[0x84D198]); /*0x7a0b3b*/
    v17 = FromStringInt((char **)&v28, v15); /*0x7a0b4f*/
    String::Append2((const char **)&v27, v17); /*0x7a0b59*/
    DeleteAndZero(&v28); /*0x7a0b62*/
  }
LABEL_50:
  String::Append((const char **)&v27, MEMORY[0x84D190]); /*0x7a0b67*/
  v18 = Performance::Profile(); /*0x7a0b75*/
  v19 = FromStringInt((char **)&v28, v18); /*0x7a0b80*/
  String::Append2((const char **)&v27, v19); /*0x7a0b8a*/
  DeleteAndZero(&v28); /*0x7a0b93*/
  String::Append((const char **)&v27, MEMORY[0x84D188]); /*0x7a0ba1*/
  v20 = FromStringInt((char **)&v28, MEMORY[0xA8EB84]); /*0x7a0bb0*/
  String::Append2((const char **)&v27, v20); /*0x7a0bba*/
  DeleteAndZero(&v28); /*0x7a0bc3*/
  Network::GetAddress(MEMORY[0xA8DBC0], &v40, (int)&v39, &v38); /*0x7a0bdc*/
  v21 = v39; /*0x7a0be1*/
  String::Append((const char **)&v27, MEMORY[0x84D180]); /*0x7a0bee*/
  v22 = FromStringInt((char **)&v28, v21); /*0x7a0bf9*/
  String::Append2((const char **)&v27, v22); /*0x7a0c03*/
  DeleteAndZero(&v28); /*0x7a0c0c*/
  String::Append((const char **)&v27, MEMORY[0x84D178]); /*0x7a0c1a*/
  v23 = FromStringInt((char **)&v28, (unsigned __int16)MEMORY[0xABFEC8]); /*0x7a0c2f*/
  String::Append2((const char **)&v27, v23); /*0x7a0c39*/
  DeleteAndZero(&v28); /*0x7a0c42*/
  String::Append((const char **)&v27, stru_84D170); /*0x7a0c50*/
  v24 = FromStringInt((char **)&v28, MEMORY[0xA8E228]); /*0x7a0c5f*/
  String::Append2((const char **)&v27, v24); /*0x7a0c69*/
  DeleteAndZero(&v28); /*0x7a0c72*/
  String::Append2((const char **)&v27, (char **)&v29); /*0x7a0c80*/
  v25 = *(_DWORD *)MEMORY[0xAC116C]; /*0x7a0c8e*/
  v26 = String::GetOrEmpty((char **)&v27); /*0x7a0c90*/
  (*(void (__stdcall **)(LPVOID, _DWORD *, char *))(v25 + 48))(MEMORY[0xAC116C], v41, v26); /*0x7a0ca2*/
  g_WOL_GameListState = 0; /*0x7a0ca5*/
  g_WOL_IdleHandler = 4; /*0x7a0cac*/
  g_WOL_GameProcessState = 180; /*0x7a0cb6*/
  g_WOL_GameListPool = time(0); /*0x7a0cc8*/
  ProcessPingRequestsWOL(); /*0x7a0ccd*/
  DeleteAndZero(&v30); /*0x7a0cd6*/
  DeleteAndZero(&v27); /*0x7a0cdf*/
  DeleteAndZero(&v29); /*0x7a0ce8*/
  DeleteAndZero(&v35); /*0x7a0cf1*/
  v33 = &vt_rc_ptr_PlayerProfile; /*0x7a0cfa*/
  ComPtr::Release(&v33); /*0x7a0cfe*/
  return 1; /*0x7a07c7*/
}


// ==== 0x007A0D10  sub_7A0D10  this=-  sig=ida-proto ====
int sub_7A0D10()
{
  int result; // eax
  int v1; // ebp
  signed int v2; // ebx
  signed int v3; // edi
  ULONG S_addr; // esi
  char *v5; // eax
  size_t v6; // [esp+Ch] [ebp-78h]
  int v7; // [esp+10h] [ebp-74h] BYREF
  int v8; // [esp+14h] [ebp-70h]
  struct in_addr v9[27]; // [esp+18h] [ebp-6Ch] BYREF

  result = g_NetworkLobbyState; /*0x7a0d10*/
  v1 = 0; /*0x7a0d1a*/
  if ( !g_NetworkLobbyState ) /*0x7a0d1f*/
  {
    result = 0; /*0x7a0d2a*/
    v2 = 0; /*0x7a0d30*/
    memset(v9, 0, sizeof(v9)); /*0x7a0d32*/
    v3 = g_WOL_State; /*0x7a0d34*/
    v7 = 0; /*0x7a0d3a*/
    v6 = g_WOL_State; /*0x7a0d40*/
    if ( (int)g_WOL_State > 0 ) /*0x7a0d44*/
    {
      do /*0x7a0dba*/
      {
        if ( v1 >= 0 && v2 < (int)g_WOL_State ) /*0x7a0d51*/
        {
          qmemcpy(v9, (char *)g_WOL_ConnectionFlags + v1, sizeof(v9)); /*0x7a0d64*/
          v3 = v6; /*0x7a0d66*/
        }
        S_addr = v9[6].S_un.S_addr; /*0x7a0d6f*/
        ntoainet(v9[6]); /*0x7a0d71*/
        Debug::Log(); /*0x7a0d81*/
        v8 = *(_DWORD *)MEMORY[0xAC1170]; /*0x7a0d9c*/
        v5 = ntoainet((struct in_addr)S_addr); /*0x7a0da0*/
        result = (*(int (__stdcall **)(LPVOID, char *, int, int *))(v8 + 24))(MEMORY[0xAC1170], v5, 1000, &v7); /*0x7a0db1*/
        ++v2; /*0x7a0db4*/
        v1 += 108; /*0x7a0db5*/
      }
      while ( v2 < v3 ); /*0x7a0dba*/
    }
  }
  return result; /*0x7a0dbd*/
}


// ==== 0x007A0DD0  ObjectClass::method_7A0DD0  this=ObjectClass  sig=csp ====
void __thiscall sub_7A0DD0(const char *this)
{
  int v2; // ebp
  char **v3; // edi
  HWND GameUI; // eax

  if ( this ) /*0x7a0dd8*/
  {
    v2 = 0; /*0x7a0dda*/
    v3 = (char **)&MEMORY[0xA8DA90]; /*0x7a0ddc*/
    while ( !*v3 || strcmp(ToWideStringChar(*v3), this + 36) ) /*0x7a0e1a*/
    {
      ++v3; /*0x7a0e1c*/
      ++v2; /*0x7a0e1f*/
      if ( (int)v3 >= (int)&MEMORY[0xA8DAB0] ) /*0x7a0e26*/
        return; /*0x7a0e26*/
    }
    GameUI = (HWND)Dialog::FindGameUI(); /*0x7a0e2d*/
    if ( GameUI ) /*0x7a0e34*/
      UpdateLobbyGraphicsWOL(GameUI, v2, -1); /*0x7a0e3c*/
  }
}


// ==== 0x007A0E50  RefreshLobbyAll_Set  this=-  sig=ida-proto ====
void sub_7A0E50()
{
  int i; // esi
  wchar_t *v1; // ecx
  char *v2; // eax

  for ( i = 0; i < 8; ++i ) /*0x7a0e51*/
  {
    v1 = *(wchar_t **)((char *)&MEMORY[0xA8DA90] + i * 4); /*0x7a0e53*/
    if ( !v1 || !IsKnownPointer(v1) ) /*0x7a0e5d*/
      dword_B76440[i] = -1; /*0x7a0e66*/
    v2 = ToWideStringChar(*(char **)((char *)&MEMORY[0xA8DA90] + i * 4)); /*0x7a0e76*/
    SetGameOptionsPing(v2, dword_B76440[i]); /*0x7a0e83*/
  }
}


// ==== 0x007A0EA0  SetGameOptionsPing  this=INIClass  sig=csp ====
void __thiscall SetGameOptionsPing(INIClass *this)
{
  int v1; // edx
  int v2; // ebp
  int i; // edi
  char *v5; // ecx
  HWND GameUI; // ecx

  v2 = v1; /*0x7a0ea3*/
  Debug::Log(); /*0x7a0eaf*/
  for ( i = 0; i < 8; ++i ) /*0x7a0eb7*/
  {
    v5 = (char *)*(&MEMORY[0xA8DA90] + i); /*0x7a0eb9*/
    if ( v5 ) /*0x7a0ec2*/
    {
      if ( !strcmp(ToWideStringChar(v5), this->__pad_0) ) /*0x7a0ed1*/
      {
        dword_B76440[i] = v2; /*0x7a0ef8*/
        GameUI = (HWND)Dialog::FindGameUI(); /*0x7a0f04*/
        if ( GameUI ) /*0x7a0f08*/
        {
          if ( v2 >= 0 ) /*0x7a0f0c*/
          {
            if ( v2 >= 300 ) /*0x7a0f18*/
            {
              if ( v2 >= 500 ) /*0x7a0f24*/
                UpdateLobbyGraphicsWOL(GameUI, i, 2); /*0x7a0f2e*/
              else
                UpdateLobbyGraphicsWOL(GameUI, i, 1); /*0x7a0f28*/
            }
            else
            {
              UpdateLobbyGraphicsWOL(GameUI, i, 0); /*0x7a0f1c*/
            }
          }
          else
          {
            UpdateLobbyGraphicsWOL(GameUI, i, -1); /*0x7a0f10*/
          }
        }
      }
    }
  }
}


// ==== 0x007A0F40  Event_Handle_7A0F40  this=-  sig=ida-proto ====
int sub_7A0F40()
{
  int result; // eax
  signed int v1; // ebp
  int v2; // ebx
  unsigned int v3; // edx
  char *v4; // edi
  char *v5; // edi
  char *v6; // esi
  char v7; // cl
  int v8; // edx
  int v9; // [esp+Ch] [ebp-1F4h] BYREF
  signed int v10; // [esp+10h] [ebp-1F0h]
  _DWORD v11[27]; // [esp+14h] [ebp-1ECh] BYREF
  char Source[256]; // [esp+80h] [ebp-180h] BYREF
  char Buffer[128]; // [esp+180h] [ebp-80h] BYREF

  v10 = g_WOL_State; /*0x7a0f58*/
  memset(v11, 0, sizeof(v11)); /*0x7a0f5c*/
  Source[0] = 80; /*0x7a0f60*/
  Source[2] = 0; /*0x7a0f67*/
  Source[1] = g_WOL_State + 48; /*0x7a0f6c*/
  result = g_NetworkLobbyState; /*0x7a0f70*/
  if ( !g_NetworkLobbyState ) /*0x7a0f77*/
  {
    v1 = 0; /*0x7a0f7e*/
    if ( (int)g_WOL_State > 0 ) /*0x7a0f82*/
    {
      v2 = 0; /*0x7a0f8a*/
      do /*0x7a102a*/
      {
        if ( v2 >= 0 && v1 < (int)g_WOL_State ) /*0x7a0f96*/
          qmemcpy(v11, (char *)g_WOL_ConnectionFlags + v2, sizeof(v11)); /*0x7a0faa*/
        (*(void (__stdcall **)(LPVOID, _DWORD, int *))(*(_DWORD *)MEMORY[0xAC1170] + 32))(MEMORY[0xAC1170], v11[6], &v9); /*0x7a0fbe*/
        sprintf(Buffer, stru_84D24C, (const char *)&v11[9], v9); /*0x7a0fd8*/
        v3 = strlen(Buffer) + 1; /*0x7a0ffd*/
        v4 = &Source[strlen(Source)]; /*0x7a1006*/
        qmemcpy(v4, Buffer, 4 * (v3 >> 2)); /*0x7a100a*/
        v6 = &Buffer[4 * (v3 >> 2)]; /*0x7a100a*/
        v5 = &v4[4 * (v3 >> 2)]; /*0x7a100a*/
        v7 = v3; /*0x7a100c*/
        v8 = v9; /*0x7a100e*/
        qmemcpy(v5, v6, v7 & 3); /*0x7a1015*/
        SetGameOptionsPing((const char *)&v11[9], v8); /*0x7a101b*/
        ++v1; /*0x7a1024*/
        v2 += 108; /*0x7a1025*/
      }
      while ( v1 < v10 ); /*0x7a102a*/
    }
    Debug::Log(); /*0x7a103c*/
    return Network::SendOptionsGame(Source); /*0x7a1048*/
  }
  return result; /*0x7a104e*/
}


// ==== 0x007A1060  ObjectClass::ProcessPingRequestsWOL  this=ObjectClass  sig=csp ====
char WOL_ProcessPingRequests()
{
  char result; // al
  ULONG S_addr; // ebx
  char *v2; // eax
  signed int v3; // eax
  char *v4; // ebp
  int v5; // esi
  int v6; // edi
  char *v7; // eax
  int v8; // esi
  char *v9; // eax
  int v10; // esi
  char v11; // [esp+13h] [ebp-79h]
  void *v12; // [esp+14h] [ebp-78h] BYREF
  void *v13; // [esp+18h] [ebp-74h] BYREF
  int v14; // [esp+1Ch] [ebp-70h] BYREF
  struct in_addr v15[27]; // [esp+20h] [ebp-6Ch] BYREF

  v11 = 0; /*0x7a1072*/
  memset(v15, 0, sizeof(v15)); /*0x7a1077*/
  result = g_NetworkLobbyState; /*0x7a1079*/
  if ( !g_NetworkLobbyState ) /*0x7a1080*/
  {
    Debug::Log(); /*0x7a1098*/
    result = g_WOL_ConnectionToken; /*0x7a109d*/
    if ( g_WOL_ConnectionToken ) /*0x7a10a7*/
    {
      S_addr = v15[6].S_un.S_addr; /*0x7a10ad*/
      while ( 1 ) /*0x7a10b1*/
      {
        if ( g_WOL_LoginPool >= 10 ) /*0x7a10b8*/
          return result; /*0x7a10b8*/
        result = v11; /*0x7a10be*/
        if ( v11 ) /*0x7a10c4*/
          return result; /*0x7a10c4*/
        unknown_libname_73(&v12); /*0x7a10ce*/
        if ( g_WOL_ConnectionToken > 0 ) /*0x7a10da*/
          String::Reassign((char **)&v12, (const char **)g_WOL_ObjectState); /*0x7a10e7*/
        String::GetOrEmpty((char **)&v12); /*0x7a10f0*/
        Debug::Log(); /*0x7a10fb*/
        v2 = String::GetOrEmpty((char **)&v12); /*0x7a1107*/
        String::Assign((char **)&v13, v2); /*0x7a1111*/
        v3 = g_WOL_State; /*0x7a1116*/
        v4 = 0; /*0x7a111b*/
        v5 = 0; /*0x7a111d*/
        if ( (int)g_WOL_State <= 0 ) /*0x7a1121*/
        {
LABEL_15:
          v5 = -1; /*0x7a115c*/
        }
        else
        {
          v6 = 0; /*0x7a1123*/
          while ( 1 ) /*0x7a1125*/
          {
            if ( v6 >= 0 && v5 < v3 ) /*0x7a112b*/
              v4 = (char *)g_WOL_ConnectionFlags + v6; /*0x7a1132*/
            v7 = String::GetOrEmpty_Alt((char **)&v13); /*0x7a113d*/
            if ( !_strcmpi(v7, v4 + 36) ) /*0x7a1143*/
              break; /*0x7a1143*/
            v3 = g_WOL_State; /*0x7a114f*/
            ++v5; /*0x7a1154*/
            v6 += 108; /*0x7a1155*/
            if ( v5 >= (int)g_WOL_State ) /*0x7a115a*/
              goto LABEL_15; /*0x7a115a*/
          }
        }
        DeleteAndZero(&v13); /*0x7a1163*/
        if ( v5 == -1 ) /*0x7a116b*/
        {
          if ( g_WOL_ConnectionToken > 0 ) /*0x7a127f*/
          {
            String::Reassign((char **)&v12, (const char **)g_WOL_ObjectState); /*0x7a128c*/
            v10 = 0; /*0x7a1296*/
            if ( g_WOL_ConnectionToken ) /*0x7a129a*/
            {
              if ( g_WOL_ConnectionToken <= 0 ) /*0x7a129c*/
                v10 = g_WOL_ConnectionToken - 1; /*0x7a129e*/
              DeleteAndZero((void **)g_WOL_ObjectState + v10); /*0x7a12a9*/
              memcpy( /*0x7a12d2*/
                (char *)g_WOL_ObjectState + 4 * v10,
                (char *)g_WOL_ObjectState + 4 * v10 + 4,
                4 * (g_WOL_ConnectionToken + 0x3FFFFFFF * (v10 + 1)));
              --g_WOL_ConnectionToken; /*0x7a12e0*/
              if ( 3 * g_WOL_ConnectionToken <= dword_B76AD4 ) /*0x7a12ef*/
                VectorClass::Shrink(&g_WOL_ConnectionToken); /*0x7a12f6*/
            }
          }
          goto LABEL_36; /*0x7a12f6*/
        }
        if ( v5 >= 0 && v5 < (int)g_WOL_State ) /*0x7a117b*/
        {
          qmemcpy(v15, (char *)g_WOL_ConnectionFlags + 108 * v5, sizeof(v15)); /*0x7a1194*/
          S_addr = v15[6].S_un.S_addr; /*0x7a1196*/
        }
        if ( !S_addr ) /*0x7a119c*/
          break; /*0x7a119c*/
        String::GetOrEmpty((char **)&v12); /*0x7a11a6*/
        Debug::Log(); /*0x7a11b1*/
        v8 = *(_DWORD *)MEMORY[0xAC1170]; /*0x7a11c3*/
        v9 = ntoainet((struct in_addr)S_addr); /*0x7a11cc*/
        if ( !(*(int (__stdcall **)(LPVOID, char *, int, int *))(v8 + 24))(MEMORY[0xAC1170], v9, 1000, &v14) && v14 >= 0 ) /*0x7a11e5*/
        {
          StringVector::Insert(&g_WOL_LoginPool, (const char **)&v12, g_WOL_LoginPool); /*0x7a11f8*/
          if ( g_WOL_ConnectionToken > 0 ) /*0x7a1204*/
          {
            String::Reassign((char **)&v12, (const char **)g_WOL_ObjectState); /*0x7a1210*/
            DynamicArray::Remove(&g_WOL_ConnectionToken, 0); /*0x7a121c*/
          }
LABEL_36:
          String::GetOrEmpty((char **)&v12); /*0x7a12fb*/
          Debug::Log(); /*0x7a130a*/
          goto LABEL_37; /*0x7a130a*/
        }
        v11 = 1; /*0x7a1235*/
LABEL_37:
        DeleteAndZero(&v12); /*0x7a1312*/
        result = g_WOL_ConnectionToken; /*0x7a131b*/
        if ( !g_WOL_ConnectionToken ) /*0x7a1322*/
          return result; /*0x7a1322*/
      }
      if ( g_WOL_ConnectionToken > 0 ) /*0x7a1246*/
      {
        String::Reassign((char **)&v12, (const char **)g_WOL_ObjectState); /*0x7a1253*/
        DynamicArray::Remove(&g_WOL_ConnectionToken, 0); /*0x7a125f*/
      }
      goto LABEL_36; /*0x7a125f*/
    }
  }
  return result; /*0x7a1328*/
}


// ==== 0x007A1330  ObjectClass::UpdateWOLLobbyPings  this=ObjectClass  sig=csp ====
void UpdateWOLLobbyPings()
{
  int v0; // ebp
  int v1; // esi
  char *v2; // eax
  signed int v3; // eax
  char *v4; // ebx
  int v5; // esi
  int v6; // edi
  char *v7; // eax
  char **v8; // eax
  char **v9; // eax
  char **v10; // eax
  char **v11; // eax
  int v12; // eax
  char *v13; // edx
  int v14; // esi
  char *v15; // eax
  char **v16; // [esp-8h] [ebp-B4h]
  char **v17; // [esp+0h] [ebp-ACh]
  void *v18; // [esp+14h] [ebp-98h] BYREF
  void *v19; // [esp+18h] [ebp-94h] BYREF
  int v20; // [esp+1Ch] [ebp-90h] BYREF
  int v21; // [esp+20h] [ebp-8Ch]
  void *v22; // [esp+24h] [ebp-88h] BYREF
  void *v23; // [esp+28h] [ebp-84h] BYREF
  void *v24; // [esp+2Ch] [ebp-80h] BYREF
  void *v25; // [esp+30h] [ebp-7Ch] BYREF
  void *v26; // [esp+34h] [ebp-78h] BYREF
  void *v27; // [esp+38h] [ebp-74h] BYREF
  void *v28; // [esp+3Ch] [ebp-70h] BYREF
  _DWORD v29[27]; // [esp+40h] [ebp-6Ch] BYREF

  memset(v29, 0, sizeof(v29)); /*0x7a1342*/
  v21 = 0; /*0x7a1349*/
  if ( !g_NetworkLobbyState ) /*0x7a1353*/
  {
    String::Assign((char **)&v19, aPings); /*0x7a1364*/
    Debug::Log(); /*0x7a1374*/
    if ( g_WOL_LoginPool ) /*0x7a1383*/
    {
      v0 = v29[6]; /*0x7a138a*/
      do /*0x7a15ff*/
      {
        unknown_libname_73(&v18); /*0x7a1392*/
        v1 = g_WOL_LoginPool - 1; /*0x7a139c*/
        if ( g_WOL_LoginPool - 1 >= 0 && v1 < g_WOL_LoginPool ) /*0x7a13a9*/
        {
          String::Reassign((char **)&v18, (const char **)dword_B76978 + v1); /*0x7a13b9*/
          if ( g_WOL_LoginPool ) /*0x7a13c5*/
          {
            if ( v1 >= g_WOL_LoginPool ) /*0x7a13c9*/
              v1 = g_WOL_LoginPool - 1; /*0x7a13cb*/
            Object::DtorWithDelete((void **)dword_B76978 + v1, 0); /*0x7a13d8*/
            memcpy( /*0x7a1401*/
              (char *)dword_B76978 + 4 * v1,
              (char *)dword_B76978 + 4 * v1 + 4,
              4 * (g_WOL_LoginPool + 0x3FFFFFFF * (v1 + 1)));
            --g_WOL_LoginPool; /*0x7a140f*/
            if ( 3 * g_WOL_LoginPool <= dword_B76974 ) /*0x7a141e*/
              VectorClass::Shrink(&g_WOL_LoginPool); /*0x7a1425*/
          }
        }
        String::GetOrEmpty((char **)&v18); /*0x7a142e*/
        Debug::Log(); /*0x7a1439*/
        v2 = String::GetOrEmpty((char **)&v18); /*0x7a1445*/
        String::Assign((char **)&v22, v2); /*0x7a144f*/
        v3 = g_WOL_State; /*0x7a1454*/
        v4 = 0; /*0x7a1459*/
        v5 = 0; /*0x7a145b*/
        if ( (int)g_WOL_State <= 0 ) /*0x7a145f*/
        {
LABEL_18:
          v5 = -1; /*0x7a149b*/
        }
        else
        {
          v6 = 0; /*0x7a1461*/
          while ( 1 ) /*0x7a1463*/
          {
            if ( v6 >= 0 && v5 < v3 ) /*0x7a1469*/
              v4 = (char *)g_WOL_ConnectionFlags + v6; /*0x7a1471*/
            v7 = String::GetOrEmpty_Alt((char **)&v22); /*0x7a147c*/
            if ( !_strcmpi(v7, v4 + 36) ) /*0x7a1482*/
              break; /*0x7a1482*/
            v3 = g_WOL_State; /*0x7a148e*/
            ++v5; /*0x7a1493*/
            v6 += 108; /*0x7a1494*/
            if ( v5 >= (int)g_WOL_State ) /*0x7a1499*/
              goto LABEL_18; /*0x7a1499*/
          }
        }
        DeleteAndZero(&v22); /*0x7a14a2*/
        if ( v5 == -1 ) /*0x7a14aa*/
          goto LABEL_27; /*0x7a14aa*/
        if ( v5 >= 0 && v5 < (int)g_WOL_State ) /*0x7a14ca*/
        {
          qmemcpy(v29, (char *)g_WOL_ConnectionFlags + 108 * v5, sizeof(v29)); /*0x7a14e4*/
          v0 = v29[6]; /*0x7a14e6*/
        }
        if ( !v0 /*0x7a1522*/
          || (v20 = -1,
              (*(void (__stdcall **)(LPVOID, int, int *))(*(_DWORD *)MEMORY[0xAC1170] + 32))(MEMORY[0xAC1170], v0, &v20),
              v20 == -1) )
        {
LABEL_27:
          String::GetOrEmpty((char **)&v18); /*0x7a15dc*/
          Debug::Log(); /*0x7a15e7*/
        }
        else
        {
          String::GetOrEmpty((char **)&v18); /*0x7a152d*/
          Debug::Log(); /*0x7a1538*/
          v17 = String::Assign((char **)&v27, Control); /*0x7a1556*/
          v16 = FromStringInt((char **)&v25, v20); /*0x7a1565*/
          v8 = String::Assign((char **)&v24, MEMORY[0x817F70]); /*0x7a1570*/
          v9 = String::Concat((const char **)&v18, (char **)&v26, v8); /*0x7a157f*/
          v10 = String::Concat((const char **)v9, (char **)&v28, v16); /*0x7a1586*/
          v11 = String::Concat((const char **)v10, (char **)&v23, v17); /*0x7a158d*/
          String::Append2((const char **)&v19, v11); /*0x7a1597*/
          DeleteAndZero(&v23); /*0x7a15a0*/
          DeleteAndZero(&v28); /*0x7a15a9*/
          DeleteAndZero(&v26); /*0x7a15b2*/
          DeleteAndZero(&v24); /*0x7a15bb*/
          DeleteAndZero(&v25); /*0x7a15c4*/
          DeleteAndZero(&v27); /*0x7a15cd*/
          ++v21; /*0x7a15d2*/
        }
        DeleteAndZero(&v18); /*0x7a15f3*/
      }
      while ( g_WOL_LoginPool ); /*0x7a15ff*/
    }
    v12 = 0; /*0x7a160a*/
    dword_B736F4 = 0; /*0x7a160e*/
    if ( v21 > 0 && (int)g_WOL_State > 0 ) /*0x7a161d*/
    {
      v13 = (char *)g_WOL_ConnectionFlags; /*0x7a161f*/
      while ( 1 ) /*0x7a1625*/
      {
        if ( v12 >= 0 && v12 < (int)g_WOL_State ) /*0x7a162b*/
          qmemcpy(&g_IsMultiplayerSession, v13, 0x6Cu); /*0x7a1639*/
        if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7a1642*/
          break; /*0x7a1642*/
        ++v12; /*0x7a1644*/
        v13 += 108; /*0x7a1645*/
        if ( v12 >= (int)g_WOL_State ) /*0x7a164a*/
          goto LABEL_40; /*0x7a164a*/
      }
      if ( &g_IsMultiplayerSession ) /*0x7a1655*/
      {
        v14 = *(_DWORD *)MEMORY[0xAC116C]; /*0x7a165d*/
        v15 = String::GetOrEmpty((char **)&v19); /*0x7a1663*/
        (*(void (__stdcall **)(LPVOID, char *, char *))(v14 + 48))(MEMORY[0xAC116C], &g_IsMultiplayerSession, v15); /*0x7a1675*/
        String::GetOrEmpty((char **)&v19); /*0x7a167c*/
        Debug::Log(); /*0x7a1687*/
      }
    }
LABEL_40:
    DeleteAndZero(&v19); /*0x7a168f*/
  }
}


// ==== 0x007A16B0  HandleWOLMatchMessage  this=-  sig=csp ====
char WOL_MatchGame()
{
  int v0; // ebp
  char *v1; // ebx
  char *v2; // eax
  char *v3; // esi
  char *v4; // eax
  char *v5; // eax
  wchar_t *String; // eax
  char *v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  wchar_t *v11; // eax
  char **v12; // eax
  wchar_t *v13; // eax
  HANDLE *v14; // esi
  signed int v15; // eax
  int v16; // ebx
  char *v17; // eax
  wchar_t *v19; // eax
  wchar_t *v20; // eax
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  char **v23; // [esp-4h] [ebp-230h]
  char *v24; // [esp-4h] [ebp-230h]
  void *v25; // [esp+10h] [ebp-21Ch] BYREF
  int v26; // [esp+14h] [ebp-218h] BYREF
  int v27; // [esp+18h] [ebp-214h] BYREF
  char *v28; // [esp+1Ch] [ebp-210h]
  char v29[268]; // [esp+20h] [ebp-20Ch] BYREF
  char Destination[256]; // [esp+12Ch] [ebp-100h] BYREF

  v0 = 0; /*0x7a1bb9*/
  g_NetworkLobbyState = 0; /*0x7a1bbc*/
  Network::Init(); /*0x7a1bc2*/
  strncpy(Destination, ::Destination, 0x100u); /*0x7a1bd9*/
  strtok(Destination, MEMORY[0x8318B8]); /*0x7a1beb*/
  v1 = strtok(0, MEMORY[0x817F70]); /*0x7a1bfb*/
  v28 = v1; /*0x7a1c03*/
  strtok(0, MEMORY[0x817F70]); /*0x7a1c07*/
  strtok(0, MEMORY[0x817F70]); /*0x7a1c12*/
  strtok(0, MEMORY[0x817F70]); /*0x7a1c1d*/
  strtok(0, MEMORY[0x817F70]); /*0x7a1c28*/
  strtok(0, MEMORY[0x817F70]); /*0x7a1c33*/
  strtok(0, MEMORY[0x817F70]); /*0x7a1c41*/
  strtok(0, MEMORY[0x817F70]); /*0x7a1c4c*/
  v2 = strtok(0, MEMORY[0x817F70]); /*0x7a1c57*/
  v3 = v2; /*0x7a1c61*/
  if ( !v1 || !v2 ) /*0x7a1c6b*/
  {
    String = GetStringCSF(aWolMatchbadpar, 0, g_Str_File_wonline_cpp, 28847); /*0x7a20c0*/
    goto LABEL_35; /*0x7a20c0*/
  }
  v4 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a1c76*/
  if ( _strcmpi(v1, v4) ) /*0x7a1c7d*/
  {
    v5 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a1c8e*/
    if ( _strcmpi(v3, v5) ) /*0x7a1c95*/
    {
      String = GetStringCSF(aWolMatchbadpar, 0, g_Str_File_wonline_cpp, 28857); /*0x7a1ca6*/
LABEL_35:
      Dialog::ShowMessage(2146559, (size_t)String); /*0x7a20c5*/
      g_WOL_GameListState = 0; /*0x7a20d0*/
      g_WOL_IdleHandler = 3; /*0x7a20d6*/
      g_WOL_GameProcessState = 20; /*0x7a20e0*/
LABEL_36:
      g_WOL_GameListPool = time(0); /*0x7a20ea*/
      return 0; /*0x7a20f8*/
    }
  }
  v7 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a1cb0*/
  if ( !_strcmpi(v1, v7) ) /*0x7a1cb7*/
  {
    String::Assign_Alt((void **)&dword_B76AC4, v3); /*0x7a1ccd*/
    MatchGameWOL_Delete(); /*0x7a1cd2*/
    v8 = GetStringCSF(aWolMatchcreati, 0, g_Str_File_wonline_cpp, 28867); /*0x7a1ce8*/
    Dialog::ShowMessage(-1, (size_t)v8); /*0x7a1cf5*/
    byte_B77DEC = 0; /*0x7a1d00*/
    g_WOL_GameListState = 0; /*0x7a1d07*/
    g_WOL_IdleHandler = 6; /*0x7a1d0d*/
    g_WOL_GameProcessState = 30; /*0x7a1d17*/
    g_WOL_GameListPool = time(0); /*0x7a1d25*/
    if ( CreateGameWOL(30, (int)v3) ) /*0x7a1d2a*/
    {
      v9 = GetStringCSF(aWolMatchwaitin, 0, g_Str_File_wonline_cpp, 28871); /*0x7a1d45*/
      Dialog::ShowMessage(-1, (size_t)v9, v3); /*0x7a1d51*/
      return 1; /*0x7a1d65*/
    }
    v11 = GetStringCSF(aWolMatcherrorc, 0, g_Str_File_wonline_cpp, 28878); /*0x7a1d77*/
    Dialog::ShowMessage(2146559, (size_t)v11); /*0x7a1d82*/
    g_WOL_GameListState = 0; /*0x7a1d87*/
    g_WOL_IdleHandler = 2; /*0x7a1d8d*/
    g_WOL_GameProcessState = 30; /*0x7a1d97*/
    goto LABEL_36; /*0x7a1d9d*/
  }
  String::Assign_Alt((void **)&dword_B76AC4, v1); /*0x7a1da8*/
  MatchGameWOL_Delete(); /*0x7a1dad*/
  v23 = String::Assign((char **)&v27, aSGame); /*0x7a1dc4*/
  v12 = String::Assign((char **)&v26, v1); /*0x7a1dcb*/
  String::Concat((const char **)v12, (char **)&v25, v23); /*0x7a1dd2*/
  DeleteAndZero((void **)&v26); /*0x7a1ddb*/
  DeleteAndZero((void **)&v27); /*0x7a1de4*/
  v13 = GetStringCSF(aWolMatchattemp, 0, g_Str_File_wonline_cpp, 28885); /*0x7a1dfb*/
  Dialog::ShowMessage(-1, (size_t)v13, v1); /*0x7a1e08*/
  g_WOL_GameListState = 0; /*0x7a1e0e*/
  g_WOL_IdleHandler = 7; /*0x7a1e14*/
  g_WOL_GameProcessState = 30; /*0x7a1e1e*/
  g_WOL_GameListPool = time(0); /*0x7a1e30*/
  v26 = 1; /*0x7a1e35*/
  while ( 1 ) /*0x7a1e3d*/
  {
    if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x7a1e4c*/
      goto LABEL_28; /*0x7a1e4c*/
    v14 = &Handles; /*0x7a1e52*/
    do /*0x7a1e69*/
      ResetEvent(*v14++); /*0x7a1e5a*/
    while ( (int)v14 < (int)g_WOL_RequestObject ); /*0x7a1e69*/
    v27 = 41; /*0x7a1e73*/
    Debug::Log(); /*0x7a1e7b*/
    if ( (*(int (__stdcall **)(LPVOID, int, _DWORD))(*(_DWORD *)MEMORY[0xAC116C] + 24))(MEMORY[0xAC116C], v27, 0) ) /*0x7a1e91*/
    {
      SetEvent(Handles); /*0x7a1f54*/
LABEL_28:
      v19 = GetStringCSF(aWolMatchgamech, 0, g_Str_File_wonline_cpp, 28889); /*0x7a1f5a*/
      Dialog::ShowMessage(2146559, (size_t)v19, v1); /*0x7a1f77*/
      g_WOL_GameListState = 0; /*0x7a1f7c*/
      g_WOL_IdleHandler = 3; /*0x7a1f82*/
      g_WOL_GameProcessState = 20; /*0x7a1f8c*/
LABEL_29:
      g_WOL_GameListPool = time(0); /*0x7a1f96*/
      DeleteAndZero(&v25); /*0x7a1fa8*/
      return 0; /*0x7a1fb9*/
    }
    Network_Helper_7ADB00(&v27, g_WOL_RequestState); /*0x7a1eac*/
    if ( !RequestChannelListWOL() ) /*0x7a1eb8*/
      goto LABEL_28; /*0x7a1eb8*/
    memset(v29, 0, sizeof(v29)); /*0x7a1ec9*/
    v15 = g_WOL_ChatState; /*0x7a1ecb*/
    if ( (int)g_WOL_ChatState > 0 ) /*0x7a1ed2*/
      break; /*0x7a1ed2*/
LABEL_25:
    Game::ProcessIdle(); /*0x7a1f27*/
    Sleep(0x64u); /*0x7a1f2e*/
    if ( v26++ >= 30 ) /*0x7a1f3b*/
    {
      v22 = GetStringCSF(aWolMatchgamech, 0, g_Str_File_wonline_cpp, 28915); /*0x7a2080*/
      Dialog::ShowMessage(2146559, (size_t)v22, v1); /*0x7a208b*/
      g_WOL_GameListState = 0; /*0x7a2090*/
      g_WOL_IdleHandler = 2; /*0x7a2096*/
      g_WOL_GameProcessState = 30; /*0x7a20a0*/
      goto LABEL_29; /*0x7a20aa*/
    }
  }
  v16 = 0; /*0x7a1ed4*/
  while ( 1 ) /*0x7a1ed6*/
  {
    if ( v16 >= 0 && v0 < v15 ) /*0x7a1edc*/
      qmemcpy(v29, (char *)g_WOL_ConnectionHandler + v16, sizeof(v29)); /*0x7a1ef0*/
    v17 = String::GetOrEmpty((char **)&v25); /*0x7a1ef6*/
    if ( !_strcmpi(&v29[52], v17) ) /*0x7a1f01*/
      break; /*0x7a1f01*/
    v15 = g_WOL_ChatState; /*0x7a1f11*/
    ++v0; /*0x7a1f16*/
    v16 += 268; /*0x7a1f17*/
    if ( v0 >= (int)g_WOL_ChatState ) /*0x7a1f1f*/
    {
      v1 = v28; /*0x7a1f21*/
      v0 = 0; /*0x7a1f25*/
      goto LABEL_25; /*0x7a1f25*/
    }
  }
  if ( ValidateJoinWOL(0, (int)v29, v16, v0) ) /*0x7a1fc0*/
  {
    v24 = v28; /*0x7a1fcf*/
    v20 = GetStringCSF(aWolMatchjoined, 0, g_Str_File_wonline_cpp, 28899); /*0x7a1fdf*/
    Dialog::ShowMessage(-1, (size_t)v20, v24); /*0x7a1fec*/
    g_WOL_GameListState = 0; /*0x7a1ff3*/
    g_WOL_IdleHandler = 9; /*0x7a1ffd*/
    g_WOL_GameProcessState = 90; /*0x7a2007*/
    g_WOL_GameListPool = time(0); /*0x7a201d*/
    DeleteAndZero(&v25); /*0x7a2022*/
    return 1; /*0x7a2027*/
  }
  else
  {
    v21 = GetStringCSF(aWolMatcherrorj, 0, g_Str_File_wonline_cpp, 28907); /*0x7a2045*/
    Dialog::ShowMessage(2146559, (size_t)v21); /*0x7a2050*/
    DeleteAndZero(&v25); /*0x7a205c*/
    return 0; /*0x7a2061*/
  }
}


// ==== 0x007A19E0  MatchGameWOL_Delete  this=-  sig=ida-proto ====
void sub_7A19E0()
{
  wchar_t *StringCSF; // eax
  int i; // esi
  char *v2; // eax
  signed int v3; // eax
  char *v4; // ebx
  int v5; // esi
  int v6; // edi
  char *v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  int v10; // [esp+0h] [ebp-80h]
  void *v11; // [esp+0h] [ebp-80h]
  void *v12; // [esp+Ch] [ebp-74h] BYREF
  int v13; // [esp+10h] [ebp-70h] BYREF
  _DWORD v14[27]; // [esp+14h] [ebp-6Ch] BYREF

  v10 = dword_B76AC4; /*0x7a19f1*/
  StringCSF = GetStringCSF(aWolMatchfoundw, 0, g_Str_File_wonline_cpp, 28774); /*0x7a19fc*/
  Dialog::ShowMessage(12648447, (size_t)StringCSF, v10); /*0x7a1a07*/
  String::ToLowerCopy((const char **)&dword_B76AC4, (char **)&v12); /*0x7a1a19*/
  if ( dword_B77D84 ) /*0x7a1a25*/
  {
    for ( i = *((_DWORD *)dword_B77D80 + (dword_B77D98(&v12) & ((1 << dword_B77D8C) - 1))); i; i = *(_DWORD *)(i + 112) ) /*0x7a1a4b*/
    {
      if ( String::Compare((const char **)i, (const char **)&v12) ) /*0x7a1a54*/
        break; /*0x7a1a5b*/
    }
  }
  v2 = String::GetOrEmpty((char **)&dword_B76AC4); /*0x7a1a6a*/
  String::Assign((char **)&v13, v2); /*0x7a1a74*/
  v3 = g_WOL_State; /*0x7a1a79*/
  v4 = 0; /*0x7a1a7e*/
  v5 = 0; /*0x7a1a80*/
  if ( (int)g_WOL_State <= 0 ) /*0x7a1a84*/
  {
LABEL_12:
    v5 = -1; /*0x7a1ac0*/
  }
  else
  {
    v6 = 0; /*0x7a1a86*/
    while ( 1 ) /*0x7a1a88*/
    {
      if ( v6 >= 0 && v5 < v3 ) /*0x7a1a8e*/
        v4 = (char *)g_WOL_ConnectionFlags + v6; /*0x7a1a96*/
      v7 = String::GetOrEmpty_Alt((char **)&v13); /*0x7a1aa1*/
      if ( !_strcmpi(v7, v4 + 36) ) /*0x7a1aa7*/
        break; /*0x7a1aa7*/
      v3 = g_WOL_State; /*0x7a1ab3*/
      ++v5; /*0x7a1ab8*/
      v6 += 108; /*0x7a1ab9*/
      if ( v5 >= (int)g_WOL_State ) /*0x7a1abe*/
        goto LABEL_12; /*0x7a1abe*/
    }
  }
  DeleteAndZero((void **)&v13); /*0x7a1ac7*/
  if ( v5 == -1 ) /*0x7a1ad0*/
  {
    v8 = GetStringCSF(aWolMatchoppone_0, 0, g_Str_File_wonline_cpp, 28787); /*0x7a1ad7*/
  }
  else
  {
    memset(v14, 0, sizeof(v14)); /*0x7a1ae9*/
    if ( v5 >= 0 && v5 < (int)g_WOL_State ) /*0x7a1af3*/
      qmemcpy(v14, (char *)g_WOL_ConnectionFlags + 108 * v5, sizeof(v14)); /*0x7a1b0d*/
    if ( v14[6] ) /*0x7a1b15*/
    {
      v13 = -1; /*0x7a1b27*/
      (*(void (__stdcall **)(LPVOID, _DWORD, int *))(*(_DWORD *)MEMORY[0xAC1170] + 32))(MEMORY[0xAC1170], v14[6], &v13); /*0x7a1b34*/
      if ( v13 != -1 ) /*0x7a1b3e*/
      {
        v11 = (void *)v13; /*0x7a1b40*/
        v9 = GetStringCSF(aWolMatchoppone, 0, g_Str_File_wonline_cpp, 28800); /*0x7a1b52*/
        Dialog::ShowMessage(12648447, (size_t)v9, v11); /*0x7a1b5d*/
        DeleteAndZero(&v12); /*0x7a1b69*/
        return; /*0x7a1b73*/
      }
      v8 = GetStringCSF(aWolMatchoppone_0, 0, g_Str_File_wonline_cpp, 28802); /*0x7a1b85*/
    }
    else
    {
      v8 = GetStringCSF(aWolMatchoppone_0, 0, g_Str_File_wonline_cpp, 28794); /*0x7a1b1c*/
    }
  }
  Dialog::ShowMessage(12648447, (size_t)v8); /*0x7a1b90*/
  DeleteAndZero(&v12); /*0x7a1b9c*/
}


// ==== 0x007A1BB0  ObjectClass::MatchGameWOL  this=ObjectClass  sig=csp ====
char WOL_MatchGame()
{
  int v0; // ebp
  char *v1; // ebx
  char *v2; // eax
  char *v3; // esi
  char *v4; // eax
  char *v5; // eax
  wchar_t *String; // eax
  char *v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  wchar_t *v11; // eax
  char **v12; // eax
  wchar_t *v13; // eax
  HANDLE *v14; // esi
  signed int v15; // eax
  int v16; // ebx
  char *v17; // eax
  wchar_t *v19; // eax
  wchar_t *v20; // eax
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  char **v23; // [esp-4h] [ebp-230h]
  char *v24; // [esp-4h] [ebp-230h]
  void *v25; // [esp+10h] [ebp-21Ch] BYREF
  int v26; // [esp+14h] [ebp-218h] BYREF
  int v27; // [esp+18h] [ebp-214h] BYREF
  char *v28; // [esp+1Ch] [ebp-210h]
  char v29[268]; // [esp+20h] [ebp-20Ch] BYREF
  char Destination[256]; // [esp+12Ch] [ebp-100h] BYREF

  v0 = 0; /*0x7a1bb9*/
  g_NetworkLobbyState = 0; /*0x7a1bbc*/
  Network::Init(); /*0x7a1bc2*/
  strncpy(Destination, ::Destination, 0x100u); /*0x7a1bd9*/
  strtok(Destination, MEMORY[0x8318B8]); /*0x7a1beb*/
  v1 = strtok(0, MEMORY[0x817F70]); /*0x7a1bfb*/
  v28 = v1; /*0x7a1c03*/
  strtok(0, MEMORY[0x817F70]); /*0x7a1c07*/
  strtok(0, MEMORY[0x817F70]); /*0x7a1c12*/
  strtok(0, MEMORY[0x817F70]); /*0x7a1c1d*/
  strtok(0, MEMORY[0x817F70]); /*0x7a1c28*/
  strtok(0, MEMORY[0x817F70]); /*0x7a1c33*/
  strtok(0, MEMORY[0x817F70]); /*0x7a1c41*/
  strtok(0, MEMORY[0x817F70]); /*0x7a1c4c*/
  v2 = strtok(0, MEMORY[0x817F70]); /*0x7a1c57*/
  v3 = v2; /*0x7a1c61*/
  if ( !v1 || !v2 ) /*0x7a1c6b*/
  {
    String = GetStringCSF(aWolMatchbadpar, 0, g_Str_File_wonline_cpp, 28847); /*0x7a20c0*/
    goto LABEL_35; /*0x7a20c0*/
  }
  v4 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a1c76*/
  if ( _strcmpi(v1, v4) ) /*0x7a1c7d*/
  {
    v5 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a1c8e*/
    if ( _strcmpi(v3, v5) ) /*0x7a1c95*/
    {
      String = GetStringCSF(aWolMatchbadpar, 0, g_Str_File_wonline_cpp, 28857); /*0x7a1ca6*/
LABEL_35:
      Dialog::ShowMessage(2146559, (size_t)String); /*0x7a20c5*/
      g_WOL_GameListState = 0; /*0x7a20d0*/
      g_WOL_IdleHandler = 3; /*0x7a20d6*/
      g_WOL_GameProcessState = 20; /*0x7a20e0*/
LABEL_36:
      g_WOL_GameListPool = time(0); /*0x7a20ea*/
      return 0; /*0x7a20f8*/
    }
  }
  v7 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a1cb0*/
  if ( !_strcmpi(v1, v7) ) /*0x7a1cb7*/
  {
    String::Assign_Alt((void **)&dword_B76AC4, v3); /*0x7a1ccd*/
    MatchGameWOL_Delete(); /*0x7a1cd2*/
    v8 = GetStringCSF(aWolMatchcreati, 0, g_Str_File_wonline_cpp, 28867); /*0x7a1ce8*/
    Dialog::ShowMessage(-1, (size_t)v8); /*0x7a1cf5*/
    byte_B77DEC = 0; /*0x7a1d00*/
    g_WOL_GameListState = 0; /*0x7a1d07*/
    g_WOL_IdleHandler = 6; /*0x7a1d0d*/
    g_WOL_GameProcessState = 30; /*0x7a1d17*/
    g_WOL_GameListPool = time(0); /*0x7a1d25*/
    if ( CreateGameWOL(30, (int)v3) ) /*0x7a1d2a*/
    {
      v9 = GetStringCSF(aWolMatchwaitin, 0, g_Str_File_wonline_cpp, 28871); /*0x7a1d45*/
      Dialog::ShowMessage(-1, (size_t)v9, v3); /*0x7a1d51*/
      return 1; /*0x7a1d65*/
    }
    v11 = GetStringCSF(aWolMatcherrorc, 0, g_Str_File_wonline_cpp, 28878); /*0x7a1d77*/
    Dialog::ShowMessage(2146559, (size_t)v11); /*0x7a1d82*/
    g_WOL_GameListState = 0; /*0x7a1d87*/
    g_WOL_IdleHandler = 2; /*0x7a1d8d*/
    g_WOL_GameProcessState = 30; /*0x7a1d97*/
    goto LABEL_36; /*0x7a1d9d*/
  }
  String::Assign_Alt((void **)&dword_B76AC4, v1); /*0x7a1da8*/
  MatchGameWOL_Delete(); /*0x7a1dad*/
  v23 = String::Assign((char **)&v27, aSGame); /*0x7a1dc4*/
  v12 = String::Assign((char **)&v26, v1); /*0x7a1dcb*/
  String::Concat((const char **)v12, (char **)&v25, v23); /*0x7a1dd2*/
  DeleteAndZero((void **)&v26); /*0x7a1ddb*/
  DeleteAndZero((void **)&v27); /*0x7a1de4*/
  v13 = GetStringCSF(aWolMatchattemp, 0, g_Str_File_wonline_cpp, 28885); /*0x7a1dfb*/
  Dialog::ShowMessage(-1, (size_t)v13, v1); /*0x7a1e08*/
  g_WOL_GameListState = 0; /*0x7a1e0e*/
  g_WOL_IdleHandler = 7; /*0x7a1e14*/
  g_WOL_GameProcessState = 30; /*0x7a1e1e*/
  g_WOL_GameListPool = time(0); /*0x7a1e30*/
  v26 = 1; /*0x7a1e35*/
  while ( 1 ) /*0x7a1e3d*/
  {
    if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x7a1e4c*/
      goto LABEL_28; /*0x7a1e4c*/
    v14 = &Handles; /*0x7a1e52*/
    do /*0x7a1e69*/
      ResetEvent(*v14++); /*0x7a1e5a*/
    while ( (int)v14 < (int)g_WOL_RequestObject ); /*0x7a1e69*/
    v27 = 41; /*0x7a1e73*/
    Debug::Log(); /*0x7a1e7b*/
    if ( (*(int (__stdcall **)(LPVOID, int, _DWORD))(*(_DWORD *)MEMORY[0xAC116C] + 24))(MEMORY[0xAC116C], v27, 0) ) /*0x7a1e91*/
    {
      SetEvent(Handles); /*0x7a1f54*/
LABEL_28:
      v19 = GetStringCSF(aWolMatchgamech, 0, g_Str_File_wonline_cpp, 28889); /*0x7a1f5a*/
      Dialog::ShowMessage(2146559, (size_t)v19, v1); /*0x7a1f77*/
      g_WOL_GameListState = 0; /*0x7a1f7c*/
      g_WOL_IdleHandler = 3; /*0x7a1f82*/
      g_WOL_GameProcessState = 20; /*0x7a1f8c*/
LABEL_29:
      g_WOL_GameListPool = time(0); /*0x7a1f96*/
      DeleteAndZero(&v25); /*0x7a1fa8*/
      return 0; /*0x7a1fb9*/
    }
    Network_Helper_7ADB00(&v27, g_WOL_RequestState); /*0x7a1eac*/
    if ( !RequestChannelListWOL() ) /*0x7a1eb8*/
      goto LABEL_28; /*0x7a1eb8*/
    memset(v29, 0, sizeof(v29)); /*0x7a1ec9*/
    v15 = g_WOL_ChatState; /*0x7a1ecb*/
    if ( (int)g_WOL_ChatState > 0 ) /*0x7a1ed2*/
      break; /*0x7a1ed2*/
LABEL_25:
    Game::ProcessIdle(); /*0x7a1f27*/
    Sleep(0x64u); /*0x7a1f2e*/
    if ( v26++ >= 30 ) /*0x7a1f3b*/
    {
      v22 = GetStringCSF(aWolMatchgamech, 0, g_Str_File_wonline_cpp, 28915); /*0x7a2080*/
      Dialog::ShowMessage(2146559, (size_t)v22, v1); /*0x7a208b*/
      g_WOL_GameListState = 0; /*0x7a2090*/
      g_WOL_IdleHandler = 2; /*0x7a2096*/
      g_WOL_GameProcessState = 30; /*0x7a20a0*/
      goto LABEL_29; /*0x7a20aa*/
    }
  }
  v16 = 0; /*0x7a1ed4*/
  while ( 1 ) /*0x7a1ed6*/
  {
    if ( v16 >= 0 && v0 < v15 ) /*0x7a1edc*/
      qmemcpy(v29, (char *)g_WOL_ConnectionHandler + v16, sizeof(v29)); /*0x7a1ef0*/
    v17 = String::GetOrEmpty((char **)&v25); /*0x7a1ef6*/
    if ( !_strcmpi(&v29[52], v17) ) /*0x7a1f01*/
      break; /*0x7a1f01*/
    v15 = g_WOL_ChatState; /*0x7a1f11*/
    ++v0; /*0x7a1f16*/
    v16 += 268; /*0x7a1f17*/
    if ( v0 >= (int)g_WOL_ChatState ) /*0x7a1f1f*/
    {
      v1 = v28; /*0x7a1f21*/
      v0 = 0; /*0x7a1f25*/
      goto LABEL_25; /*0x7a1f25*/
    }
  }
  if ( ValidateJoinWOL(0, (int)v29, v16, v0) ) /*0x7a1fc0*/
  {
    v24 = v28; /*0x7a1fcf*/
    v20 = GetStringCSF(aWolMatchjoined, 0, g_Str_File_wonline_cpp, 28899); /*0x7a1fdf*/
    Dialog::ShowMessage(-1, (size_t)v20, v24); /*0x7a1fec*/
    g_WOL_GameListState = 0; /*0x7a1ff3*/
    g_WOL_IdleHandler = 9; /*0x7a1ffd*/
    g_WOL_GameProcessState = 90; /*0x7a2007*/
    g_WOL_GameListPool = time(0); /*0x7a201d*/
    DeleteAndZero(&v25); /*0x7a2022*/
    return 1; /*0x7a2027*/
  }
  else
  {
    v21 = GetStringCSF(aWolMatcherrorj, 0, g_Str_File_wonline_cpp, 28907); /*0x7a2045*/
    Dialog::ShowMessage(2146559, (size_t)v21); /*0x7a2050*/
    DeleteAndZero(&v25); /*0x7a205c*/
    return 0; /*0x7a2061*/
  }
}


// ==== 0x007A2110  sub_7A2110  this=-  sig=csp ====
INT_PTR __stdcall sub_7A2110(HWND hWnd, UINT a2, WPARAM a3, char *a4)
{
  if ( a2 > 0x2B ) /*0x7a2117*/
  {
    switch ( a2 ) /*0x7a2183*/
    {
      case 0x111u: /*0x7a2183*/
        switch ( (unsigned __int16)a3 ) /*0x7a21ce*/
        {
          case 0x5C0u: /*0x7a21ce*/
            if ( g_WOL_IdleHandler == 11 ) /*0x7a220b*/
            {
              CloseDialog(hWnd, 0); /*0x7a2213*/
              return 0; /*0x7a221a*/
            }
            SetEvent(Handles); /*0x7a2224*/
            break;
          case 0x708u: /*0x7a21ce*/
            (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 44))( /*0x7a21fc*/
              *(&g_MatrixTransformState + 2263),
              aStart443900100_0);
            return 0; /*0x7a2201*/
          case 0x709u: /*0x7a21ce*/
            (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 44))( /*0x7a21e7*/
              *(&g_MatrixTransformState + 2263),
              aStart443900100);
            return 0; /*0x7a21ec*/
        }
        break;
      case 0x113u: /*0x7a2183*/
        if ( !a3 ) /*0x7a21b4*/
        {
          sub_5E2AC0(); /*0x7a21b6*/
          return 0; /*0x7a21bd*/
        }
        break;
      case 0x497u: /*0x7a2183*/
        SetTimer(hWnd, 0, 0x7D0u, 0); /*0x7a21a3*/
        return 0; /*0x7a21ab*/
    }
  }
  else
  {
    switch ( a2 ) /*0x7a2119*/
    {
      case 0x2Bu: /*0x7a2119*/
        Dialog::Resize(a4); /*0x7a2171*/
        return 1; /*0x7a217b*/
      case 2u: /*0x7a2119*/
        KillTimer(hWnd, 0); /*0x7a2162*/
        return 0; /*0x7a216a*/
      case 0xFu: /*0x7a2119*/
        Dialog::DrawBackground(hWnd); /*0x7a213d*/
        Dialog::StopBink(hWnd); /*0x7a2144*/
        ValidateRect(hWnd, 0); /*0x7a214c*/
        return 1; /*0x7a2158*/
      case 0x14u: /*0x7a2119*/
        return 1; /*0x7a2133*/
    }
  }
  return 0; /*0x7a2133*/
}


// ==== 0x007A2230  Game_Setup  this=-  sig=csp ====
void __fastcall Game_Setup(CCINIClass *aP0, CCINIClass *aP1, char *Buffera, char *a3)
{
  Color *v5; // edi
  Color *v6; // esi
  int v7; // edi
  SessionClass *v8; // esi
  char *v9; // eax
  int v10; // eax
  int v11; // [esp+10h] [ebp-10h] BYREF
  IPXManagerClass aP1a; // [esp+14h] [ebp-Ch] BYREF
  __int16 v13; // [esp+1Ch] [ebp-4h]

  if ( aP0 ) /*0x7a223d*/
  {
    if ( aP1 ) /*0x7a2245*/
    {
      v5 = (Color *)Buffera; /*0x7a224b*/
      if ( Buffera ) /*0x7a2251*/
      {
        v6 = (Color *)a3; /*0x7a2257*/
        if ( a3 ) /*0x7a225d*/
        {
          Buffera = 0; /*0x7a2267*/
          a3 = 0; /*0x7a2272*/
          v11 = 0; /*0x7a2276*/
          sscanf(aP1->__pad_0, (const char *const)&stru_825BAC.objectTypeFlags, &Buffera); /*0x7a227a*/
          sscanf((const char *const)v5, (const char *const)&stru_825BAC.objectTypeFlags, &a3); /*0x7a228a*/
          sscanf((const char *const)v6, (const char *const)&stru_825BAC.objectTypeFlags, &v11); /*0x7a229a*/
          v7 = 0; /*0x7a22a2*/
          v8 = (SessionClass *)&HouseClass_Player.__pad_5568[18396]; /*0x7a22a4*/
          while ( 1 ) /*0x7a22ab*/
          {
            v9 = ToWideStringChar((IUnknown *)v8->GameMode[0]); /*0x7a22ab*/
            if ( !_strcmpi(aP0, v9) ) /*0x7a22b2*/
              break; /*0x7a22b2*/
            v8 = (SessionClass *)((char *)v8 + 4); /*0x7a22be*/
            ++v7; /*0x7a22c1*/
            if ( (int)v8 >= (int)&HouseClass_Player.__pad_5568[18428] ) /*0x7a22c8*/
              return; /*0x7a22c8*/
          }
          *(_DWORD *)&aP1a.Initialized = Buffera; /*0x7a22de*/
          v13 = 0; /*0x7a22e2*/
          aP1a.Socket = 0; /*0x7a22fc*/
          NetworkID::Assign((_DWORD *)(12 * v7 + 11066316), &aP1a, (int)&aP1a.Initialized, 0); /*0x7a2300*/
          v10 = v11; /*0x7a2309*/
          *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v7 + 18808] = a3; /*0x7a230d*/
          *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v7 + 20348] = v10; /*0x7a2314*/
        }
      }
    }
  }
}


// ==== 0x007A2330  Game::SetupWOLTournament  this=Coord  sig=csp ====
char __thiscall SetupWOLTournamentGame(const char *this)
{
  char *v1; // esi
  char *v2; // eax
  int v3; // edi
  char *v4; // eax
  int v5; // ebx
  char *v6; // ebp
  char *v7; // eax
  char *v8; // esi
  char *v9; // eax
  int v10; // edi
  char *v11; // eax
  int v12; // ebx
  char *v13; // ebp
  char *v14; // eax
  HWND v15; // eax
  char v16; // bl
  int v17; // esi
  char *v18; // eax
  char *v19; // ebp
  wchar_t *v20; // eax
  wchar_t *v21; // edi
  int v22; // eax
  char result; // al
  char *v24; // [esp+10h] [ebp-104h] BYREF
  char String[256]; // [esp+14h] [ebp-100h] BYREF

  strcpy(String, this); /*0x7a2359*/
  v1 = strtok(String, stru_84D68C); /*0x7a2373*/
  v2 = strtok(0, MEMORY[0x817F70]); /*0x7a2375*/
  v3 = atol(v2); /*0x7a2387*/
  v4 = strtok(0, MEMORY[0x817F70]); /*0x7a2389*/
  v5 = atol(v4); /*0x7a239b*/
  v6 = strtok(0, MEMORY[0x817F70]); /*0x7a23a9*/
  v24 = strtok(0, MEMORY[0x817F70]); /*0x7a23b7*/
  v7 = strtok(0, MEMORY[0x817F70]); /*0x7a23bb*/
  Game_Setup(v1, v6, v24, v7); /*0x7a23cd*/
  String::Assign(&v24, v1); /*0x7a23d7*/
  SetupLobbyPlayerSlot((const char **)&v24, v3, v5, -2, -2); /*0x7a23e7*/
  DeleteAndZero((void **)&v24); /*0x7a23f0*/
  v8 = strtok(0, MEMORY[0x817F70]); /*0x7a2408*/
  v9 = strtok(0, MEMORY[0x817F70]); /*0x7a240a*/
  v10 = atol(v9); /*0x7a241c*/
  v11 = strtok(0, MEMORY[0x817F70]); /*0x7a241e*/
  v12 = atol(v11); /*0x7a2429*/
  v13 = strtok(0, MEMORY[0x817F70]); /*0x7a243e*/
  v24 = strtok(0, MEMORY[0x817F70]); /*0x7a244c*/
  v14 = strtok(0, MEMORY[0x817F70]); /*0x7a2450*/
  Game_Setup(v8, v13, v24, v14); /*0x7a2462*/
  String::Assign(&v24, v8); /*0x7a246c*/
  SetupLobbyPlayerSlot((const char **)&v24, v10, v12, -2, -2); /*0x7a247c*/
  DeleteAndZero((void **)&v24); /*0x7a2485*/
  dword_ABE028 = 4; /*0x7a2494*/
  strcpy(&MEMORY[0xA8B8E0], aRandmapSed); /*0x7a24b0*/
  MEMORY[0xA8B254] = -1; /*0x7a24be*/
  v15 = (HWND)Dialog::FindByHandle((void *)0x11F); /*0x7a24c8*/
  GenerateRandomMapAndMinimap(v15, (char (*)())GameLoop::Thunk); /*0x7a24d4*/
  MapSeed::ValidateName(aRandmapSed); /*0x7a24e3*/
  v16 = 0; /*0x7a24ed*/
  v17 = 0; /*0x7a24ef*/
  if ( MEMORY[0xA8B8D8] > 0 ) /*0x7a24f3*/
  {
    while ( !IsRandMap::Sed(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * v17)) ) /*0x7a2504*/
    {
      if ( ++v17 >= MEMORY[0xA8B8D8] ) /*0x7a250e*/
        goto LABEL_6; /*0x7a250e*/
    }
    v16 = 1; /*0x7a2512*/
  }
LABEL_6:
  v18 = GameConfig::ComputeCRC(); /*0x7a2514*/
  v19 = v18; /*0x7a251b*/
  if ( v16 ) /*0x7a251d*/
  {
    GameOption::SetDigest(v18); /*0x7a25b6*/
    GameOption::SetDescriptionWStr(*(wchar_t **)(MEMORY[0xA8B8CC] + 4 * v17), &word_ABE050); /*0x7a25c8*/
  }
  else
  {
    v20 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x7a2528*/
    if ( v20 ) /*0x7a2532*/
      v21 = SessionClass::ParseGameInfo(v20, aRandmapSed, &word_ABE050, v19, 1, 0, 2, 4); /*0x7a254e*/
    else
      v21 = 0; /*0x7a2552*/
    if ( MEMORY[0xA8B8D8] < MEMORY[0xA8B8D0] /*0x7a258b*/
      || (MEMORY[0xA8B8D5] || !MEMORY[0xA8B8D0])
      && MEMORY[0xA8B8DC] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8B8C8] + 8))(
           &MEMORY[0xA8B8C8],
           MEMORY[0xA8B8DC] + MEMORY[0xA8B8D0],
           0) )
    {
      v22 = MEMORY[0xA8B8D8]++; /*0x7a2598*/
      *(_DWORD *)(MEMORY[0xA8B8CC] + 4 * v22) = v21; /*0x7a25a7*/
    }
  }
  __3_YAXPAX_Z(v19); /*0x7a25ce*/
  result = LoadScenarioClassByIndex(v17); /*0x7a25d8*/
  if ( result == 1 ) /*0x7a25df*/
    MEMORY[0xA8B254] = v17; /*0x7a25e1*/
  return result; /*0x7a25e7*/
}


// ==== 0x007A2600  sub_7A2600  this=-  sig=csp ====
int __stdcall sub_7A2600(HWND hWnd, unsigned int a2, int a3, char *a4)
{
  int result; // eax
  _DWORD *v5; // ecx
  void *v6; // esi

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x7a261a*/
  if ( !result ) /*0x7a2621*/
  {
    if ( a2 > 0x2B ) /*0x7a262a*/
    {
      if ( a2 == 273 && (_WORD)a3 == 1472 ) /*0x7a270c*/
      {
        SetEvent(Handles); /*0x7a2714*/
        CloseDialog(hWnd, 1472); /*0x7a2721*/
      }
      return 0; /*0x7a2726*/
    }
    if ( a2 == 43 ) /*0x7a2630*/
    {
      Dialog::Resize(a4); /*0x7a26ee*/
      return 1; /*0x7a26fc*/
    }
    if ( a2 == 2 ) /*0x7a2639*/
    {
      v6 = MEMORY[0xAC1154]; /*0x7a26bf*/
      if ( MEMORY[0xAC1154] ) /*0x7a26c7*/
      {
        ComPtr::Dtor(MEMORY[0xAC1154]); /*0x7a26cb*/
        __3_YAXPAX_Z(v6); /*0x7a26d1*/
        MEMORY[0xAC1154] = 0; /*0x7a26d9*/
        return 0; /*0x7a26e9*/
      }
      return 0; /*0x7a26c7*/
    }
    if ( a2 != 15 ) /*0x7a2642*/
      return a2 == 20; /*0x7a2647*/
    Dialog::DrawBackground(hWnd); /*0x7a265b*/
    Dialog::StopBink(hWnd); /*0x7a2662*/
    v5 = MEMORY[0xAC1154]; /*0x7a2667*/
    if ( MEMORY[0xAC1154] || MEMORY[0xA8B254] == -1 && (v5 = g_Map_TiberiumConfig) != 0 ) /*0x7a2682*/
      Skirmish::RenderPreview(v5, hWnd); /*0x7a2685*/
    if ( LoadScreen::IsActive(MEMORY[0xAC4F58]) ) /*0x7a268f*/
      LoadScreen::Render((int)MEMORY[0xAC4F58], a3, (int)a4, NAN); /*0x7a26a5*/
    ValidateRect(hWnd, 0); /*0x7a26ad*/
    return 1; /*0x7a26b6*/
  }
  return result; /*0x7a264d*/
}


// ==== 0x007A2730  ObjectClass::Network_Create_7A2730  this=ObjectClass  sig=csp ====
LPVOID sub_7A2730()
{
  LPVOID result; // eax

  result = MEMORY[0xAC116C]; /*0x7a2730*/
  if ( MEMORY[0xAC116C] ) /*0x7a2737*/
    return (LPVOID)(*(int (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 60))( /*0x7a2741*/
                     MEMORY[0xAC116C],
                     MEMORY[0x84D690]);
  return result; /*0x7a2744*/
}


// ==== 0x007A2750  UI_Setup_7A2750  this=-  sig=ida-proto ====
void sub_7A2750()
{
  HWND Current; // eax
  HWND DlgItem; // esi
  bool v2; // bl
  wchar_t *StringCSF; // eax
  void *v4; // [esp+8h] [ebp-4h] BYREF

  Current = Dialog::GetCurrent(); /*0x7a2753*/
  DlgItem = GetDlgItem(Current, 1439); /*0x7a2768*/
  String::Assign((char **)&v4, 0); /*0x7a276c*/
  v2 = SendMultiplayerStartSignal_Start_77EBA0((const char **)&v4) != 1; /*0x7a2781*/
  DeleteAndZero(&v4); /*0x7a2784*/
  if ( v2 ) /*0x7a278b*/
  {
    SendMessageA(DlgItem, 0x4DCu, 0, 1); /*0x7a2797*/
    StringCSF = GetStringCSF(MEMORY[0x83168C], 0, g_Str_File_wonline_cpp, 29202); /*0x7a27ae*/
    Dialog::ShowMessage(-1, (size_t)StringCSF); /*0x7a27b6*/
  }
}


// ==== 0x007A27D0  SendMultiplayerStartSignal_Start_7A27D0  this=-  sig=ida-proto ====
LRESULT sub_7A27D0()
{
  HWND Current; // eax
  HWND DlgItem; // eax

  Current = Dialog::GetCurrent(); /*0x7a27d0*/
  DlgItem = GetDlgItem(Current, 1439); /*0x7a27db*/
  return SendMessageA(DlgItem, 0x4DCu, 0, 0); /*0x7a27f1*/
}


// ==== 0x007A2800  Map_Handle_7A2800  this=-  sig=csp ====
char __fastcall sub_7A2800(int a1, char a2, char a3)
{
  HWND v5; // eax

  v5 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x7a280b*/
  return Map_Handle_5EC880(v5, a1, a2, a3); /*0x7a281f*/
}


// ==== 0x007A2830  ObjectClass::method_7A2830  this=ObjectClass  sig=csp ====
int __thiscall sub_7A2830(char **this)
{
  int result; // eax
  int v2; // ebp
  signed int v3; // ebx
  char *v4; // eax
  _DWORD v6[27]; // [esp+14h] [ebp-6Ch] BYREF

  result = g_WOL_State; /*0x7a2833*/
  v2 = 0; /*0x7a283a*/
  v3 = 0; /*0x7a283c*/
  v6[0] = 0; /*0x7a2846*/
  if ( (int)g_WOL_State > 0 ) /*0x7a284a*/
  {
    while ( 1 ) /*0x7a284c*/
    {
      if ( v2 >= 0 && v3 < result ) /*0x7a2852*/
        qmemcpy(v6, (char *)g_WOL_ConnectionFlags + v2, sizeof(v6)); /*0x7a2865*/
      v4 = String::GetOrEmpty_Alt(this); /*0x7a2870*/
      if ( !_strcmpi(v4, &v6[9]) ) /*0x7a2876*/
        break; /*0x7a2876*/
      result = g_WOL_State; /*0x7a2882*/
      ++v3; /*0x7a2887*/
      v2 += 108; /*0x7a2888*/
      if ( v3 >= (int)g_WOL_State ) /*0x7a288d*/
        return result; /*0x7a288d*/
    }
    return (*(int (__stdcall **)(LPVOID, _DWORD *))(*(_DWORD *)MEMORY[0xAC116C] + 84))(MEMORY[0xAC116C], v6); /*0x7a28a4*/
  }
  return result; /*0x7a288f*/
}


// ==== 0x007A28B0  ObjectClass::PlayerSkirmishSlotHandler_Handle_7A28B0  this=ObjectClass  sig=csp ====
void __thiscall PlayerSkirmishSlotHandler_Handle_7A28B0(CampaignScore *String)
{
  int v1; // ebp
  signed int v2; // eax
  signed int v3; // ebx
  char *v4; // eax
  wchar_t *v5; // [esp+4h] [ebp-74h] BYREF
  void *v6; // [esp+8h] [ebp-70h] BYREF
  _DWORD v7[27]; // [esp+Ch] [ebp-6Ch] BYREF

  v1 = 0; /*0x7a28b4*/
  if ( String ) /*0x7a28b8*/
  {
    WideString::Assign(&v5, String); /*0x7a28c6*/
    ToWideStringCharAlt((char **)&v6, (const wchar_t **)&v5); /*0x7a28d3*/
    DeleteAndZero::Alt((void **)&v5); /*0x7a28dc*/
    v2 = g_WOL_State; /*0x7a28e1*/
    v3 = 0; /*0x7a28e6*/
    v7[0] = 0; /*0x7a28ea*/
    if ( (int)g_WOL_State > 0 ) /*0x7a28ee*/
    {
      while ( 1 ) /*0x7a28f0*/
      {
        if ( v1 >= 0 && v3 < v2 ) /*0x7a28f6*/
          qmemcpy(v7, &g_WOL_ConnectionFlags[v1], sizeof(v7)); /*0x7a2909*/
        v4 = String::GetOrEmpty_Alt((char **)&v6); /*0x7a2914*/
        if ( !_strcmpi(v4, (char *)&v7[9]) ) /*0x7a291a*/
          break; /*0x7a291a*/
        v2 = g_WOL_State; /*0x7a2926*/
        ++v3; /*0x7a292b*/
        v1 += 3; /*0x7a292c*/
        if ( v3 >= (int)g_WOL_State ) /*0x7a2931*/
          goto LABEL_10; /*0x7a2931*/
      }
      (*(void (__stdcall **)(_DWORD, _DWORD *))((*(&g_MatrixTransformState + 2263))->X + 84))( /*0x7a2951*/
        *(&g_MatrixTransformState + 2263),
        v7);
    }
LABEL_10:
    DeleteAndZero(&v6); /*0x7a2954*/
  }
}


// ==== 0x007A2970  RunWOLMainLoop_Read_7A2970  this=-  sig=ida-proto ====
void sub_7A2970()
{
  _DWORD v0[3]; // [esp+0h] [ebp-Ch] BYREF

  g_NetworkLobby_Init = 0; /*0x7a297a*/
  if ( !byte_B77DC2 && ReadWOLLobbyHouseOption() ) /*0x7a2983*/
  {
    if ( MapSeed::CheckName((const char **)&dword_B76AC4) ) /*0x7a2991*/
    {
      SimpleDialogControl::Constructor(v0); /*0x7a299e*/
      v0[0] = &off_7F7624; /*0x7a29b2*/
      RunDialog(0x122u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))BuddyDlgProcWOL, (LPARAM)v0); /*0x7a29ba*/
      v0[0] = &off_7F7624; /*0x7a29c3*/
      OwnerDrawControl::InitVtable(v0); /*0x7a29cb*/
    }
  }
}


// ==== 0x007A29E0  BuddyDlgProcWOL  this=-  sig=csp ====
int __stdcall BuddyDlgProcWOL(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  wchar_t *StringCSF; // eax
  HWND DlgItem; // eax
  INIClass *v7; // ecx
  INIClass *v8; // ecx
  char *v9; // eax
  int v10; // eax
  int v11; // esi
  char **v12; // ecx
  int v13; // eax
  BlowStraw *v14; // esi
  char **v15; // ecx
  int v16; // eax
  BlowStraw *v17; // esi
  char **v18; // ecx
  char *v19; // [esp-4h] [ebp-1F4h]
  CampaignScore *v20; // [esp+0h] [ebp-1F0h]
  int v21; // [esp+10h] [ebp-1E0h] BYREF
  LONG WindowLongA; // [esp+14h] [ebp-1DCh]
  char v23[108]; // [esp+18h] [ebp-1D8h] BYREF
  char v24[108]; // [esp+84h] [ebp-16Ch] BYREF
  wchar_t lParam[128]; // [esp+F0h] [ebp-100h] BYREF

  if ( a2 == 272 && a4 ) /*0x7a2a09*/
    SetWindowLongA(hWnd, 8, *(_DWORD *)(a4 + 4)); /*0x7a2a12*/
  result = BaseDialogProc((SkirmishDialog *)hWnd, a2, a3, a4); /*0x7a2a25*/
  if ( !result ) /*0x7a2a2c*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x7a2a3e*/
    if ( a2 <= 0x2B ) /*0x7a2a42*/
    {
      switch ( a2 ) /*0x7a2a44*/
      {
        case 0x2Bu: /*0x7a2a44*/
          Dialog::Resize((char *)a4); /*0x7a2a91*/
          return 1; /*0x7a2aa5*/
        case 0xFu: /*0x7a2a44*/
          Dialog::DrawBackground(hWnd); /*0x7a2a68*/
          Dialog::StopBink(hWnd); /*0x7a2a6f*/
          ValidateRect(hWnd, 0); /*0x7a2a77*/
          return 1; /*0x7a2a8c*/
        case 0x14u: /*0x7a2a44*/
          return 1; /*0x7a2a63*/
      }
      return 0; /*0x7a2a4e*/
    }
    if ( a2 != 273 ) /*0x7a2aae*/
    {
      if ( a2 == 1175 ) /*0x7a2ab6*/
      {
        v19 = String::GetOrEmpty(&dword_B76AC4); /*0x7a2ac6*/
        StringCSF = GetStringCSF((wchar_t *)&stru_84D68C.__pad_0[8], 0, (CampaignScore *)g_Str_File_wonline_cpp, 29291); /*0x7a2ad8*/
        swprintf(lParam, (const size_t)StringCSF, (const wchar_t *const)v19, v20); /*0x7a2ae6*/
        DlgItem = GetDlgItem(hWnd, 1819); /*0x7a2af4*/
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x7a2b0a*/
        return 0; /*0x7a2b1c*/
      }
      return 0; /*0x7a2ab6*/
    }
    if ( (unsigned __int16)a3 != 1 ) /*0x7a2b26*/
    {
      if ( (unsigned __int16)a3 == 2 ) /*0x7a2b29*/
      {
        LOBYTE(v7) = IsDlgButtonChecked(hWnd, 1785) != 1; /*0x7a2b43*/
        ReadWOLLobbyOption(v7); /*0x7a2b46*/
        (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 2); /*0x7a2b54*/
        return 0; /*0x7a2b63*/
      }
      return 0; /*0x7a2b29*/
    }
    LOBYTE(v8) = IsDlgButtonChecked(hWnd, 1785) != 1; /*0x7a2b7a*/
    ReadWOLLobbyOption(v8); /*0x7a2b7d*/
    if ( !MapSeed::CheckName((const char **)&dword_B76AC4) ) /*0x7a2b8e*/
    {
LABEL_53:
      (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1); /*0x7a2e54*/
      return 0; /*0x7a2e60*/
    }
    memset(v23, 0, sizeof(v23)); /*0x7a2ba1*/
    v9 = String::GetOrEmpty_Alt(&dword_B76AC4); /*0x7a2ba8*/
    strncpy(&v23[36], v9, (IUnknown *)9); /*0x7a2bb3*/
    (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 224))( /*0x7a2bc8*/
      *(&g_MatrixTransformState + 2263),
      v23);
    if ( !MapSeed::CheckName((const char **)&dword_B76AC4) ) /*0x7a2bda*/
    {
LABEL_52:
      SendGameListWOL(); /*0x7a2e4f*/
      goto LABEL_53; /*0x7a2e4f*/
    }
    String::AssignFromPtr((char **)&v21, (const char **)&dword_B76AC4); /*0x7a2be9*/
    v10 = g_WindowManager; /*0x7a2bee*/
    v11 = g_WindowManager; /*0x7a2bf3*/
    if ( g_WindowManager >= dword_B73AAC ) /*0x7a2bff*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x7a2c06*/
      v10 = g_WindowManager; /*0x7a2c0b*/
    }
    if ( v10 >= dword_B73AAC ) /*0x7a2c16*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x7a2c1d*/
      v10 = g_WindowManager; /*0x7a2c22*/
    }
    if ( v11 < v10 ) /*0x7a2c29*/
    {
      memcpy( /*0x7a2c46*/
        &g_WOL_LoginQueue->__pad_0[4 * v11 + 4],
        (AbstractClass *)((char *)g_WOL_LoginQueue + 4 * v11),
        4 * (v10 + 0x3FFFFFFF * v11));
      v10 = g_WindowManager; /*0x7a2c4b*/
    }
    v12 = (char **)((char *)g_WOL_LoginQueue + 4 * v11); /*0x7a2c59*/
    if ( v12 ) /*0x7a2c5e*/
    {
      String::AssignFromPtr(v12, (const char **)&v21); /*0x7a2c65*/
      v10 = g_WindowManager; /*0x7a2c6a*/
    }
    g_WindowManager = v10 + 1; /*0x7a2c70*/
    v13 = g_WOL_RequestManager; /*0x7a2c75*/
    v14 = (BlowStraw *)g_WOL_RequestManager; /*0x7a2c7a*/
    if ( g_WOL_RequestManager >= dword_B76984 ) /*0x7a2c86*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x7a2c8d*/
      v13 = g_WOL_RequestManager; /*0x7a2c92*/
    }
    if ( v13 >= dword_B76984 ) /*0x7a2c9d*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x7a2ca4*/
      v13 = g_WOL_RequestManager; /*0x7a2ca9*/
    }
    if ( (int)v14 < v13 ) /*0x7a2cb0*/
    {
      memcpy( /*0x7a2ccd*/
        &g_WOL_SessionID->__pad_0[4 * (_DWORD)v14 + 4],
        (AbstractClass *)((char *)g_WOL_SessionID + 4 * (_DWORD)v14),
        4 * (v13 + 0x3FFFFFFF * (_DWORD)v14));
      v13 = g_WOL_RequestManager; /*0x7a2cd2*/
    }
    v15 = (char **)((char *)g_WOL_SessionID + 4 * (_DWORD)v14); /*0x7a2ce0*/
    if ( v15 ) /*0x7a2ce5*/
    {
      String::AssignFromPtr(v15, (const char **)&v21); /*0x7a2cec*/
      v13 = g_WOL_RequestManager; /*0x7a2cf1*/
    }
    g_WOL_RequestManager = v13 + 1; /*0x7a2cf7*/
    v16 = g_WOL_BuddyList; /*0x7a2cfc*/
    v17 = (BlowStraw *)g_WOL_BuddyList; /*0x7a2d01*/
    if ( g_WOL_BuddyList >= dword_B779B4 ) /*0x7a2d0d*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7a2d14*/
      v16 = g_WOL_BuddyList; /*0x7a2d19*/
    }
    if ( v16 >= dword_B779B4 ) /*0x7a2d24*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7a2d2b*/
      v16 = g_WOL_BuddyList; /*0x7a2d30*/
    }
    if ( (int)v17 < v16 ) /*0x7a2d37*/
    {
      memcpy( /*0x7a2d54*/
        &g_WOL_ChannelMgr->__pad_0[4 * (_DWORD)v17 + 4],
        (AbstractClass *)((char *)g_WOL_ChannelMgr + 4 * (_DWORD)v17),
        4 * (v16 + 0x3FFFFFFF * (_DWORD)v17));
      v16 = g_WOL_BuddyList; /*0x7a2d59*/
    }
    v18 = (char **)((char *)g_WOL_ChannelMgr + 4 * (_DWORD)v17); /*0x7a2d67*/
    if ( v18 ) /*0x7a2d6c*/
    {
      String::AssignFromPtr(v18, (const char **)&v21); /*0x7a2d73*/
      v16 = g_WOL_BuddyList; /*0x7a2d78*/
    }
    g_WOL_BuddyList = v16 + 1; /*0x7a2d83*/
    if ( String::Length((const char **)&g_WOL_AuthObject) ) /*0x7a2d88*/
    {
      if ( (unsigned int)(time(0) - (_DWORD)g_WOL_ParseState) < 5 ) /*0x7a2da6*/
      {
LABEL_51:
        DeleteAndZero((int)&v21); /*0x7a2e46*/
        goto LABEL_52; /*0x7a2e4a*/
      }
      DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x7a2db1*/
    }
    if ( g_WOL_RequestManager ) /*0x7a2dbd*/
    {
      if ( DynamicStringArray::Get(&g_WOL_RequestManager, &g_WOL_AuthObject, 0) ) /*0x7a2dcf*/
        DynamicArray::Remove(&g_WOL_RequestManager, 0); /*0x7a2ddf*/
      g_WOL_ParseState = (AbstractClass *)time(0); /*0x7a2deb*/
      memset(v24, 0, sizeof(v24)); /*0x7a2dfe*/
      strcpy(&v24[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x7a2e31*/
      (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 96))( /*0x7a2e43*/
        *(&g_MatrixTransformState + 2263),
        v24);
    }
    goto LABEL_51; /*0x7a2e43*/
  }
  return result; /*0x7a2a54*/
}


// ==== 0x007A2E70    this=SimpleWonlineDialogControl  sig=? ====
_DWORD *__thiscall ObjectClass::loc_7A2E70(SimpleWonlineDialogControl *this, char a2)
{
  this->vfptr = &off_7F7624; /*0x7a2e73*/
  OwnerDrawControl::InitVtable((DialogControl_OwnerDraw *)this); /*0x7a2e79*/
  if ( (a2 & 1) != 0 ) /*0x7a2e83*/
    __3_YAXPAX_Z(this); /*0x7a2e86*/
  return &this->vfptr; /*0x7a2e90*/
}


// ==== 0x007A2EA0  System_Init_7A2EA0  this=-  sig=csp ====
int __stdcall sub_7A2EA0(int (__stdcall ***a1)(_DWORD, void *, int *), int a2, int a3, int a4)
{
  int (__stdcall **v4)(_DWORD, void *, int *); // ecx
  int v5; // esi
  int v7; // [esp+24h] [ebp-8h] BYREF
  int v8; // [esp+28h] [ebp-4h] BYREF

  v4 = *a1; /*0x7a2ead*/
  v8 = 0; /*0x7a2eb5*/
  v7 = 0; /*0x7a2ebd*/
  v5 = (*v4)(a1, &unk_7F7CD0, &v8); /*0x7a2ec7*/
  if ( v5 >= 0 ) /*0x7a2ecb*/
  {
    v5 = (*(int (__stdcall **)(int, int, int *))(*(_DWORD *)v8 + 16))(v8, a3, &v7); /*0x7a2ee1*/
    if ( v5 >= 0 ) /*0x7a2ee5*/
      v5 = (*(int (__stdcall **)(int, int, int))(*(_DWORD *)v7 + 20))(v7, a2, a4); /*0x7a2efb*/
  }
  if ( v7 ) /*0x7a2f03*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x7a2f08*/
  if ( v8 ) /*0x7a2f11*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x7a2f16*/
  return v5; /*0x7a2f1b*/
}


// ==== 0x007A2F30  System_Init_7A2F30  this=-  sig=csp ====
int __stdcall System_Init_7A2F30(int a1, int a2, ObjectClass *aP2)
{
  int v4; // edi

  if ( !a1 ) /*0x7a2f3a*/
    return -2147024809; /*0x7a2f3d*/
  *(_DWORD *)(a1 + 16) = a2; /*0x7a2f4d*/
  *(_DWORD *)(a1 + 8) = aP2; /*0x7a2f5c*/
  *(_DWORD *)(a1 + 12) = aP2; /*0x7a2f5f*/
  *(_DWORD *)(a1 + 4) = aP2; /*0x7a2f62*/
  *(_DWORD *)(a1 + 20) = 0; /*0x7a2f65*/
  *(_DWORD *)(a1 + 24) = 0; /*0x7a2f68*/
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 28)); /*0x7a2f6b*/
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 52)); /*0x7a2f71*/
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 76)); /*0x7a2f77*/
  v4 = *(_DWORD *)(a1 + 16); /*0x7a2f79*/
  *(_DWORD *)(a1 + 104) = 0; /*0x7a2f7c*/
  *(_BYTE *)(a1 + 108) = 1; /*0x7a2f81*/
  *(_DWORD *)(a1 + 116) = 0; /*0x7a2f85*/
  *(_DWORD *)(a1 + 124) = 0; /*0x7a2f88*/
  *(_DWORD *)(a1 + 120) = 0; /*0x7a2f8b*/
  *(_DWORD *)(a1 + 128) = 0; /*0x7a2f8e*/
  if ( v4 && *(_DWORD *)v4 ) /*0x7a2f96*/
  {
    do /*0x7a2fac*/
    {
      (*(void (__stdcall **)(int))(v4 + 32))(1); /*0x7a2f9c*/
      if ( *(_DWORD *)a1 == 100 ) /*0x7a2fa2*/
        v4 += 28; /*0x7a2fa4*/
      else
        v4 += 36; /*0x7a2fa9*/
    }
    while ( *(_DWORD *)v4 ); /*0x7a2fac*/
  }
  return 0; /*0x7a2f3c*/
}


// ==== 0x007A2FC0  CNetUtilEventSink::System_Init_7A2FC0  this=CNetUtilEventSink  sig=csp ====
char *__thiscall System_Init_7A2FC0(CNetUtilEventSink *this)
{
  *((_DWORD *)this + 1) = 0; /*0x7a2fc6*/
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 2)); /*0x7a2fce*/
  this->vfptr = &CNetUtilEventSink::`vftable'; /*0x7a2fd4*/
  return (char *)this; /*0x7a2fdc*/
}


// ==== 0x007A2FE0  CNetUtilEventSink::SetSize  this=CNetUtilEventSink  sig=csp ====
int __thiscall ComStreamClass::SetSize(CNetUtilEventSink *this)
{
  _BYTE *v1; // esi
  rc_ptr_base v3; // [esp+0h] [ebp-8h] BYREF
  _BYTE *v4; // [esp+4h] [ebp-4h]
  int v5; // [esp+10h] [ebp+8h]
  void *v6; // [esp+14h] [ebp+Ch]
  int v7; // [esp+18h] [ebp+10h]

  if ( v5 < 0 || v7 <= 0 ) /*0x7a2ff5*/
  {
    SetEvent(hEvent); /*0x7a30b9*/
    return 0; /*0x7a30bf*/
  }
  else
  {
    Audio_Set(&v3, v6); /*0x7a3003*/
    if ( v4 && ComStreamClass::initStream(v4) ) /*0x7a3010*/
    {
      if ( ComStreamClass::closeStream(v4) ) /*0x7a301d*/
      {
        Debug::Log(); /*0x7a302b*/
        ComStreamClass::getStreamSize((int *)&v3); /*0x7a3037*/
        SetEvent(dword_B736B0); /*0x7a3042*/
      }
      else
      {
        Debug::Log(); /*0x7a304a*/
        v1 = v4; /*0x7a304f*/
        dword_B7646C = *((_DWORD *)v1 + 10) + time(0); /*0x7a3066*/
        ComStreamClass::seekToPosition((int *)&v3); /*0x7a306b*/
        SetEvent(dword_B736B0); /*0x7a3077*/
      }
    }
    else
    {
      Debug::Log(); /*0x7a3085*/
      SetEvent(dword_B736B0); /*0x7a3094*/
    }
    v3.vfptr = &vt_rc_ptr_WDTState; /*0x7a309e*/
    ComPtr::Release(&v3); /*0x7a30a6*/
    return 0; /*0x7a30ab*/
  }
}


// ==== 0x007A30D0  CNetUtilEventSink::Read  this=CNetUtilEventSink  sig=csp ====
int __thiscall ComStreamClass::Read(CNetUtilEventSink *this)
{
  int v2; // [esp+8h] [ebp+8h]

  Debug::Log(); /*0x7a30db*/
  if ( !v2 ) /*0x7a30e6*/
    Audio_Read_6C6D00(); /*0x7a30e8*/
  Audio_Read_6C6DE0(); /*0x7a30ed*/
  return 0; /*0x7a30f4*/
}


// ==== 0x007A3100  CNetUtilEventSink::PopulateLobbyLists  this=CNetUtilEventSink  sig=csp ====
int __thiscall WOLGameList::PopulateLobbyLists(CNetUtilEventSink *this)
{
  ObjectClass *v1; // ebx
  HWND v3; // eax
  HWND DlgItem; // eax
  void (__stdcall *v5)(HWND, UINT, WPARAM, LPARAM); // edi
  HWND v6; // ebp
  int referenceCount; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  SessionClass *v15; // esi
  SessionClass *v16; // edi
  unsigned int v12; // eax
  wchar_t *StringCSF; // eax
  void *attachedTag; // ecx
  unsigned int eax28; // eax
  SessionClass *v21; // esi
  SessionClass *v22; // edi
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  SessionClass *v26; // esi
  SessionClass *v27; // edi
  unsigned int v23; // eax
  int v24; // esi
  char **v25; // eax
  char **ebp59; // ebp
  int edx62; // edx
  char *v28; // eax
  void **p_fallRate; // ecx
  char **v30; // eax
  char **v31; // ebp
  int v32; // edx
  char *v33; // eax
  char **v34; // eax
  char **v35; // ebp
  int v36; // edx
  char *v37; // eax
  int v38; // ebp
  int v39; // ebx
  signed int v40; // eax
  char v41; // dl
  ObjectClass *v42; // esi
  HWND v43; // eax
  HWND v44; // eax
  CampaignScore *v45; // [esp+0h] [ebp-2B2Ch]
  CampaignScore *v46; // [esp+0h] [ebp-2B2Ch]
  CampaignScore *v47; // [esp+0h] [ebp-2B2Ch]
  CampaignScore *v48; // [esp+0h] [ebp-2B2Ch]
  CampaignScore *v49; // [esp+0h] [ebp-2B2Ch]
  ObjectClass *v50; // [esp+10h] [ebp-2B1Ch] BYREF
  unsigned int aP1_4; // [esp+14h] [ebp-2B18h]
  ObjectClass *v52; // [esp+18h] [ebp-2B14h]
  rc_ptr_base aP1_12; // [esp+1Ch] [ebp-2B10h] BYREF
  _DWORD *aP1_16; // [esp+20h] [ebp-2B0Ch]
  HWND aP1_20; // [esp+24h] [ebp-2B08h]
  _BYTE aP1_24[192]; // [esp+28h] [ebp-2B04h] BYREF
  wchar_t Buffer[128]; // [esp+E8h] [ebp-2A44h] BYREF
  char v58[108]; // [esp+1E8h] [ebp-2944h] BYREF
  char v59[108]; // [esp+254h] [ebp-28D8h] BYREF
  char a2[108]; // [esp+2C0h] [ebp-286Ch] BYREF
  wchar_t String[5120]; // [esp+32Ch] [ebp-2800h] BYREF
  int v62; // [esp+2B34h] [ebp+8h]
  ObjectClass *v63; // [esp+2B38h] [ebp+Ch]
  int v64; // [esp+2B44h] [ebp+18h]

  if ( v62 ) /*0x7a3117*/
  {
    v1 = 0; /*0x7a3119*/
    v63 = 0; /*0x7a311b*/
  }
  else
  {
    v1 = v63; /*0x7a3124*/
  }
  if ( g_NetworkLobby_Init ) /*0x7a3132*/
  {
    stru_87C374.__pad_579C[12772] = 1; /*0x7a3137*/
    return 0; /*0x7a3147*/
  }
  v3 = (HWND)Dialog::FindByHandle((void *)0xC1); /*0x7a3154*/
  DlgItem = GetDlgItem(v3, 1407); /*0x7a315a*/
  v5 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a3160*/
  v6 = DlgItem; /*0x7a3166*/
  aP1_20 = DlgItem; /*0x7a316a*/
  if ( DlgItem ) /*0x7a316e*/
  {
    if ( v64 != -1 || v62 ) /*0x7a3180*/
    {
      SendMessageA(DlgItem, 0x184u, 0, 0); /*0x7a3271*/
      if ( !v1 ) /*0x7a3275*/
      {
        StringCSF = GetStringCSF(aTxtNotInLadder, 0, (CampaignScore *)g_Str_File_wonline_cpp, 4785); /*0x7a328c*/
        SendMessageA(v6, 0x4CCu, 0xFFFFFFFF, (LPARAM)StringCSF); /*0x7a329a*/
        InvalidateRect(v6, 0, 0); /*0x7a329f*/
        return 0; /*0x7a32b1*/
      }
      goto LABEL_11; /*0x7a3275*/
    }
    v6 = 0; /*0x7a3186*/
    aP1_20 = 0; /*0x7a3188*/
  }
  if ( v1 ) /*0x7a318e*/
  {
LABEL_11:
    referenceCount = v1->referenceCount; /*0x7a3194*/
    v52 = v1; /*0x7a319b*/
    *(_DWORD *)&aP1_24[32] = referenceCount; /*0x7a319f*/
    Gadget::InitProperties(&aP1_24[8]); /*0x7a31a3*/
    if ( *(_UNKNOWN **)v1->__pad_0 == &unk_802100 ) /*0x7a31af*/
    {
      if ( (unsigned int)dword_B768C4 > 0x7D0 ) /*0x7a31bf*/
      {
        v8 = dword_B768C8; /*0x7a31c5*/
        v9 = 0; /*0x7a31cb*/
        aP1_4 = 0; /*0x7a31cf*/
        if ( dword_B768C8 ) /*0x7a31d3*/
        {
          do /*0x7a321d*/
          {
            v15 = (SessionClass *)*((_DWORD *)g_WOL_ListParser + v9); /*0x7a31db*/
            while ( v15 ) /*0x7a31e0*/
            {
              v16 = v15; /*0x7a31e2*/
              v15 = *(SessionClass **)&v15->__pad_50[32]; /*0x7a31e4*/
              DeleteAndZero((int)v16); /*0x7a31ed*/
              __3_YAXPAX_Z(v16); /*0x7a31f3*/
            }
            v12 = aP1_4; /*0x7a31ff*/
            *((_DWORD *)g_WOL_ListParser + aP1_4) = 0; /*0x7a3209*/
            v8 = dword_B768C8; /*0x7a3210*/
            v9 = v12 + 1; /*0x7a3216*/
            aP1_4 = v9; /*0x7a3219*/
          }
          while ( v9 < dword_B768C8 ); /*0x7a321d*/
          v5 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a321f*/
        }
        dword_B768C4 = 0; /*0x7a322a*/
        if ( v8 > dword_B768F0 ) /*0x7a3236*/
        {
          do /*0x7a3260*/
          {
            if ( byte_B768D4 ) /*0x7a3243*/
              break; /*0x7a3243*/
            HashMap::Shrink2(&g_WOL_ListParser); /*0x7a324e*/
          }
          while ( dword_B768C8 > (unsigned int)dword_B768F0 ); /*0x7a3260*/
        }
      }
    }
    else if ( *(_DWORD *)v1->__pad_0 == 8960 ) /*0x7a32b9*/
    {
      if ( g_WOL_AuthObject.nextObject > (void *)0x7D0 ) /*0x7a32c9*/
      {
        attachedTag = g_WOL_AuthObject.attachedTag; /*0x7a32cf*/
        eax28 = 0; /*0x7a32d5*/
        aP1_4 = 0; /*0x7a32d9*/
        if ( g_WOL_AuthObject.attachedTag ) /*0x7a32dd*/
        {
          do /*0x7a3327*/
          {
            v21 = *(SessionClass **)(g_WOL_AuthObject.fallRate + 4 * eax28); /*0x7a32e5*/
            while ( v21 ) /*0x7a32ea*/
            {
              v22 = v21; /*0x7a32ec*/
              v21 = *(SessionClass **)&v21->__pad_50[32]; /*0x7a32ee*/
              DeleteAndZero((int)v22); /*0x7a32f7*/
              __3_YAXPAX_Z(v22); /*0x7a32fd*/
            }
            v18 = aP1_4; /*0x7a3309*/
            *(_DWORD *)(g_WOL_AuthObject.fallRate + 4 * aP1_4) = 0; /*0x7a3313*/
            attachedTag = g_WOL_AuthObject.attachedTag; /*0x7a331a*/
            eax28 = v18 + 1; /*0x7a3320*/
            aP1_4 = eax28; /*0x7a3323*/
          }
          while ( (void *)eax28 < g_WOL_AuthObject.attachedTag ); /*0x7a3327*/
          v5 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a3329*/
        }
        g_WOL_AuthObject.nextObject = 0; /*0x7a3334*/
        if ( (unsigned int)attachedTag > g_WOL_AuthObject.customSound_controller[3] ) /*0x7a3340*/
        {
          do /*0x7a336a*/
          {
            if ( LOBYTE(g_WOL_AuthObject.ambientSoundController[1]) ) /*0x7a334d*/
              break; /*0x7a334d*/
            HashMap::Shrink2(&g_WOL_AuthObject.fallRate); /*0x7a3358*/
          }
          while ( g_WOL_AuthObject.attachedTag > (void *)g_WOL_AuthObject.customSound_controller[3] ); /*0x7a336a*/
        }
      }
    }
    else if ( (unsigned int)dword_B77D84 > 0x7D0 ) /*0x7a337b*/
    {
      v19 = dword_B77D88; /*0x7a3381*/
      v20 = 0; /*0x7a3387*/
      aP1_4 = 0; /*0x7a338b*/
      if ( dword_B77D88 ) /*0x7a338f*/
      {
        do /*0x7a33d9*/
        {
          v26 = (SessionClass *)*((_DWORD *)dword_B77D80 + v20); /*0x7a3397*/
          while ( v26 ) /*0x7a339c*/
          {
            v27 = v26; /*0x7a339e*/
            v26 = *(SessionClass **)&v26->__pad_50[32]; /*0x7a33a0*/
            DeleteAndZero((int)v27); /*0x7a33a9*/
            __3_YAXPAX_Z(v27); /*0x7a33af*/
          }
          v23 = aP1_4; /*0x7a33bb*/
          *((_DWORD *)dword_B77D80 + aP1_4) = 0; /*0x7a33c5*/
          v19 = dword_B77D88; /*0x7a33cc*/
          v20 = v23 + 1; /*0x7a33d2*/
          aP1_4 = v20; /*0x7a33d5*/
        }
        while ( v20 < dword_B77D88 ); /*0x7a33d9*/
        v5 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a33db*/
      }
      dword_B77D84 = 0; /*0x7a33e6*/
      if ( v19 > dword_B77DB0 ) /*0x7a33f2*/
      {
        do /*0x7a3414*/
        {
          if ( byte_B77D94 ) /*0x7a33fb*/
            break; /*0x7a33fb*/
          HashMap::Shrink2(&dword_B77D80); /*0x7a3402*/
        }
        while ( dword_B77D88 > (unsigned int)dword_B77DB0 ); /*0x7a3414*/
      }
    }
    if ( v63 && v6 ) /*0x7a3423*/
      g_WOL_LoginObject.abstractFlags = v63->referenceCount; /*0x7a3428*/
    String::ToLowerCopy((const char **)&g_WebBrowser, (ObjectClass *)aP1_24); /*0x7a3438*/
    aP1_4 = 0; /*0x7a3444*/
    if ( v63 ) /*0x7a344e*/
    {
      while ( v1->uniqueId == -1 ) /*0x7a3458*/
      {
        v1 = (ObjectClass *)v1->ambientSoundController[0]; /*0x7a345a*/
        v52 = v1; /*0x7a345d*/
LABEL_121:
        if ( !v1 ) /*0x7a3aac*/
          goto LABEL_122; /*0x7a3aac*/
      }
      if ( v6 ) /*0x7a3468*/
      {
        *(_DWORD *)&aP1_24[8] = 4; /*0x7a346e*/
        swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v1->referenceCount, v45); /*0x7a3487*/
        v5(v6, 0x4CCu, 0xFFFFFFFF, (LPARAM)Buffer); /*0x7a349f*/
        v24 = (unsigned __int16)aP1_4 << 16; /*0x7a34bc*/
        v5(v6, 0x4A8u, v24 | (unsigned __int16)dword_B779D8, (LPARAM)&aP1_24[8]); /*0x7a34c8*/
        *(_DWORD *)&aP1_24[8] = 1; /*0x7a34d6*/
        BulkCharToWide(String, (unsigned __int8 *)&v1->ambientSoundController[1], -1); /*0x7a34de*/
        WideString::Reassign((void **)&aP1_24[12], String); /*0x7a34ef*/
        v5(v6, 0x4A8u, v24 | (unsigned __int16)dword_B73E08, (LPARAM)&aP1_24[8]); /*0x7a350e*/
        swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v1->uniqueId, v46); /*0x7a3521*/
        WideString::Reassign((void **)&aP1_24[12], Buffer); /*0x7a3535*/
        v5(v6, 0x4A8u, v24 | (unsigned __int16)dword_B76904, (LPARAM)&aP1_24[8]); /*0x7a3552*/
        swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, *(const wchar_t *const *)&v1->__pad_0[8], v47); /*0x7a3565*/
        WideString::Reassign((void **)&aP1_24[12], Buffer); /*0x7a3579*/
        v5(v6, 0x4A8u, v24 | (unsigned __int16)dword_B77CE4, (LPARAM)&aP1_24[8]); /*0x7a3598*/
        swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, *(const wchar_t *const *)&v1->__pad_0[12], v48); /*0x7a35ab*/
        WideString::Reassign((void **)&aP1_24[12], Buffer); /*0x7a35bf*/
        v5(v6, 0x4A8u, v24 | (unsigned __int16)dword_B73AB4, (LPARAM)&aP1_24[8]); /*0x7a35de*/
        swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v1->NeedsSaveOrLink, v49); /*0x7a35f1*/
        WideString::Reassign((void **)&aP1_24[12], Buffer); /*0x7a3605*/
        v5(v6, 0x4A8u, v24 | (unsigned __int16)dword_B76AEC, (LPARAM)&aP1_24[8]); /*0x7a3622*/
        ++aP1_4; /*0x7a3624*/
      }
      String::Assign((char **)&v50, (const char *)&v1->ambientSoundController[1]); /*0x7a3630*/
      String::ToLower((const char **)&v50); /*0x7a3639*/
      if ( *(_UNKNOWN **)v63->__pad_0 == &unk_802100 ) /*0x7a364c*/
      {
        HashTable::Insert(&g_WOL_ListParser, (ObjectClass *)&v50, a2); /*0x7a3664*/
        v25 = (char **)__2_YAPAXI_Z(0x74u); /*0x7a366b*/
        ebp59 = v25; /*0x7a3670*/
        if ( v25 ) /*0x7a3677*/
          unknown_libname_73(v25); /*0x7a367b*/
        else
          ebp59 = 0; /*0x7a3682*/
        String::Reassign(ebp59, (AbstractClass *)&v50); /*0x7a368b*/
        qmemcpy(ebp59 + 1, v1, 0x6Cu); /*0x7a369a*/
        ebp59[28] = 0; /*0x7a36a0*/
        edx62 = dword_B768D8(&v50) & ((1 << dword_B768CC) - 1); /*0x7a36c1*/
        v28 = (char *)*((_DWORD *)g_WOL_ListParser + edx62); /*0x7a36c3*/
        *((_DWORD *)g_WOL_ListParser + edx62) = ebp59; /*0x7a36c6*/
        if ( v28 ) /*0x7a36cb*/
          ebp59[28] = v28; /*0x7a36cd*/
        *(_DWORD *)&aP1_24[76] = dword_B768C8; /*0x7a36dc*/
        *(_QWORD *)&aP1_24[52] = (unsigned int)++dword_B768C4; /*0x7a36e5*/
        *(_DWORD *)&aP1_24[80] = 0; /*0x7a36ef*/
        if ( (double)(unsigned int)dword_B768C4 / (double)dword_B768C8 < dbl_B768E8 ) /*0x7a3706*/
          goto LABEL_82; /*0x7a3706*/
        p_fallRate = &g_WOL_ListParser; /*0x7a370c*/
      }
      else if ( *(_DWORD *)v63->__pad_0 == 8960 ) /*0x7a371b*/
      {
        HashTable::Insert(&g_WOL_AuthObject.fallRate, (ObjectClass *)&v50, v59); /*0x7a3733*/
        v30 = (char **)__2_YAPAXI_Z(0x74u); /*0x7a373a*/
        v31 = v30; /*0x7a373f*/
        if ( v30 ) /*0x7a3746*/
          unknown_libname_73(v30); /*0x7a374a*/
        else
          v31 = 0; /*0x7a3751*/
        String::Reassign(v31, (AbstractClass *)&v50); /*0x7a375a*/
        qmemcpy(v31 + 1, v1, 0x6Cu); /*0x7a3769*/
        v31[28] = 0; /*0x7a376f*/
        v32 = ((int (__thiscall *)(ObjectClass **))g_WOL_AuthObject.ambientSoundController[2])(&v50) /*0x7a3790*/
            & ((1 << SLOBYTE(g_WOL_AuthObject.attachedBomb)) - 1);
        v33 = *(char **)(g_WOL_AuthObject.fallRate + 4 * v32); /*0x7a3792*/
        *(_DWORD *)(g_WOL_AuthObject.fallRate + 4 * v32) = v31; /*0x7a3795*/
        if ( v33 ) /*0x7a379a*/
          v31[28] = v33; /*0x7a379c*/
        *(_DWORD *)&aP1_24[68] = g_WOL_AuthObject.attachedTag; /*0x7a37ab*/
        *(_QWORD *)&aP1_24[36] = (unsigned int)++g_WOL_AuthObject.nextObject; /*0x7a37b4*/
        *(_DWORD *)&aP1_24[72] = 0; /*0x7a37be*/
        if ( (double)(unsigned int)g_WOL_AuthObject.nextObject / (double)(int)g_WOL_AuthObject.attachedTag < *(double *)&g_WOL_AuthObject.customSound_controller[1] ) /*0x7a37d5*/
          goto LABEL_82; /*0x7a37d5*/
        p_fallRate = (void **)&g_WOL_AuthObject.fallRate; /*0x7a37db*/
      }
      else
      {
        HashTable::Insert(&dword_B77D80, (ObjectClass *)&v50, v58); /*0x7a37f7*/
        v34 = (char **)__2_YAPAXI_Z(0x74u); /*0x7a37fe*/
        v35 = v34; /*0x7a3803*/
        if ( v34 ) /*0x7a380a*/
          unknown_libname_73(v34); /*0x7a380e*/
        else
          v35 = 0; /*0x7a3815*/
        String::Reassign(v35, (AbstractClass *)&v50); /*0x7a381e*/
        qmemcpy(v35 + 1, v1, 0x6Cu); /*0x7a382d*/
        v35[28] = 0; /*0x7a3833*/
        v36 = dword_B77D98(&v50) & ((1 << dword_B77D8C) - 1); /*0x7a3854*/
        v37 = (char *)*((_DWORD *)dword_B77D80 + v36); /*0x7a3856*/
        *((_DWORD *)dword_B77D80 + v36) = v35; /*0x7a3859*/
        if ( v37 ) /*0x7a385e*/
          v35[28] = v37; /*0x7a3860*/
        *(_DWORD *)&aP1_24[60] = dword_B77D88; /*0x7a386f*/
        *(_QWORD *)&aP1_24[44] = (unsigned int)++dword_B77D84; /*0x7a3878*/
        *(_DWORD *)&aP1_24[64] = 0; /*0x7a3882*/
        if ( (double)(unsigned int)dword_B77D84 / (double)dword_B77D88 < dbl_B77DA8 ) /*0x7a3899*/
          goto LABEL_82; /*0x7a3899*/
        p_fallRate = &dword_B77D80; /*0x7a389b*/
      }
      WOLGameList::GrowBuffer(p_fallRate); /*0x7a38a0*/
LABEL_82:
      if ( g_WOL_ProcessIdle || dword_B77E48 != 2 && dword_B77E48 != 3 ) /*0x7a38bf*/
        goto LABEL_113; /*0x7a38bf*/
      v38 = 0; /*0x7a38ca*/
      *(_DWORD *)&aP1_24[4] = g_WOL_State; /*0x7a38ce*/
      if ( (int)g_WOL_State <= 0 ) /*0x7a38d2*/
        goto LABEL_113; /*0x7a38d2*/
      v39 = 0; /*0x7a38d8*/
      while ( 1 ) /*0x7a38da*/
      {
        if ( v39 >= 0 && v38 < (int)g_WOL_State ) /*0x7a38e4*/
          qmemcpy(&aP1_24[84], &g_WOL_ConnectionFlags[v39], 0x6Cu); /*0x7a38f7*/
        if ( !_strcmpi(&v52->ambientSoundController[1], &aP1_24[120]) ) /*0x7a3909*/
          break; /*0x7a3909*/
        ++v38; /*0x7a3919*/
        v39 += 3; /*0x7a391a*/
        if ( v38 >= *(int *)&aP1_24[4] ) /*0x7a391f*/
          goto LABEL_113; /*0x7a391f*/
      }
      if ( v38 >= *(int *)&aP1_24[4] ) /*0x7a392a*/
        goto LABEL_113; /*0x7a392a*/
      v40 = v38; /*0x7a3936*/
      if ( g_WOL_State ) /*0x7a393a*/
      {
        if ( v38 < 0 ) /*0x7a393e*/
          v40 = 0; /*0x7a3940*/
        if ( v40 >= (int)g_WOL_State ) /*0x7a3944*/
          v40 = g_WOL_State - 1; /*0x7a3946*/
        memcpy( /*0x7a3972*/
          &g_WOL_ConnectionFlags[3 * v40],
          &g_WOL_ConnectionFlags[3 * v40 + 3],
          108 * g_WOL_State - 36 * (3 * v40 + 3));
        --g_WOL_State; /*0x7a3980*/
        if ( (int)(3 * g_WOL_State) <= g_WOL_StateFlags ) /*0x7a398f*/
          WOLGameList::EnsureCapacity((int *)&g_WOL_State); /*0x7a3996*/
      }
      switch ( dword_B77E48 ) /*0x7a39a3*/
      {
        case 1: /*0x7a39a3*/
          v41 = 0; /*0x7a39a5*/
LABEL_112:
          InsertGameSettings(&aP1_24[84], v41); /*0x7a39f3*/
          break; /*0x7a39f7*/
        case 2: /*0x7a39a3*/
          InsertBuddyList(&aP1_24[84], 1); /*0x7a39b4*/
          break;
        case 3: /*0x7a39a3*/
          InsertBuddyList(&aP1_24[84], 0); /*0x7a39c6*/
          break;
        case 4: /*0x7a39a3*/
          FindBuddyList((int)&aP1_24[84], 1); /*0x7a39d8*/
          break;
        case 5: /*0x7a39a3*/
          FindBuddyList((int)&aP1_24[84], 0); /*0x7a39ea*/
          break;
        default:
          v41 = 1; /*0x7a39f1*/
          goto LABEL_112; /*0x7a39f1*/
      }
LABEL_113:
      if ( String::Compare((const char **)aP1_24, (const char **)&v50) ) /*0x7a3a05*/
      {
        LoadPlayerProfile(&aP1_12, (const char **)&g_WebBrowser); /*0x7a3a17*/
        if ( aP1_16 ) /*0x7a3a22*/
        {
          v42 = v52; /*0x7a3a24*/
          if ( WOLGameList::Check(aP1_16, (int)v52) ) /*0x7a3a29*/
          {
            WOLGameList::UpdatePlayerStats((int)aP1_16, v42); /*0x7a3a37*/
            SaveProfileWOL((int)aP1_16, (ObjectClass *)&v50); /*0x7a3a45*/
            v43 = (HWND)Dialog::FindByHandle((void *)0x10E); /*0x7a3a4f*/
            if ( v43 || (v43 = (HWND)Dialog::FindByHandle((void *)0x114)) != 0 ) /*0x7a3a64*/
              FillPersonaInfoWOL((int)aP1_16, v43, &g_WebBrowser, 0); /*0x7a3a72*/
          }
        }
        aP1_12.vfptr = &vt_rc_ptr_PlayerProfile; /*0x7a3a7b*/
        ComPtr::Release(&aP1_12); /*0x7a3a83*/
      }
      v52 = (ObjectClass *)v52->ambientSoundController[0]; /*0x7a3a93*/
      DeleteAndZero((int)&v50); /*0x7a3a97*/
      v1 = v52; /*0x7a3a9c*/
      v6 = aP1_20; /*0x7a3aa0*/
      v5 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a3aa4*/
      goto LABEL_121; /*0x7a3aa4*/
    }
LABEL_122:
    if ( v6 ) /*0x7a3ab4*/
    {
      v5(v6, 0x186u, v64 - *(_DWORD *)&aP1_24[32], 0); /*0x7a3acc*/
      InvalidateRect(v6, 0, 0); /*0x7a3ad3*/
    }
    else
    {
      DisplayRankingsWOL(0, 0); /*0x7a3adf*/
    }
    SendGameListWOL(); /*0x7a3ae4*/
    v44 = (HWND)Dialog::FindByHandle((void *)0x116); /*0x7a3aee*/
    if ( v44 ) /*0x7a3af5*/
      ShowUserProfileWOL(v44); /*0x7a3af9*/
    DeleteAndZero((int)aP1_24); /*0x7a3b02*/
    DeleteAndZero::Alt((void **)&aP1_24[16]); /*0x7a3b0b*/
    DeleteAndZero::Alt((void **)&aP1_24[12]); /*0x7a3b14*/
  }
  return 0; /*0x7a3134*/
}


// ==== 0x007A3B30  CNetUtilEventSink::Commit  this=CNetUtilEventSink  sig=csp ====
int __thiscall ComStreamClass::Commit(CNetUtilEventSink *this)
{
  ObjectClass *v6; // esi
  int v2; // ebp
  int v3; // esi
  ObjectClass *v9; // edi
  SessionClass *v10; // edi
  int ebx6; // ebx
  double v7; // st7
  ObjectClass *v13; // esi
  ObjectClass *eax17; // eax
  ObjectClass *v15; // ebx
  int v11; // edx
  int v12; // eax
  AbstractClass aP1; // [esp+2Ch] [ebp+8h] BYREF

  if ( *(_DWORD *)aP1.__pad_0 ) /*0x7a3b3c*/
  {
    Debug::Log(); /*0x7a3d71*/
    return 0; /*0x7a3d79*/
  }
  else
  {
    v6 = *(ObjectClass **)&aP1.__pad_0[4]; /*0x7a3b44*/
    v2 = *(_DWORD *)&aP1.__pad_0[4]; /*0x7a3b51*/
    String::Assign((char **)&aP1, &MEMORY[0x87F8E4].__pad_5568[20760]); /*0x7a3b53*/
    if ( v6 ) /*0x7a3b5a*/
    {
      do /*0x7a3b6d*/
      {
        String::Assign_Bool((void **)&aP1, (const char *)(v2 + 28)); /*0x7a3b6d*/
        String::ToLower((const char **)&aP1); /*0x7a3b76*/
        String::GetOrEmpty((char **)&aP1); /*0x7a3b87*/
        Debug::Log(); /*0x7a3b92*/
        if ( dword_B76644 ) /*0x7a3ba1*/
        {
          *(float *)&aP1.__pad_0[4] = (double)(unsigned int)(dword_B76644 - 1) / (double)dword_B76648; /*0x7a3bc9*/
          v3 = dword_B76658(&aP1) & ((1 << dword_B7664C) - 1); /*0x7a3be7*/
          v9 = (ObjectClass *)*((_DWORD *)dword_B76640 + v3); /*0x7a3be9*/
          if ( v9 ) /*0x7a3bee*/
          {
            if ( String::Compare(*((const char ***)dword_B76640 + v3), (const char **)&aP1) ) /*0x7a3bfb*/
            {
              v10 = (SessionClass *)*((_DWORD *)dword_B76640 + v3); /*0x7a3c09*/
              ebx6 = v10->Handle[4]; /*0x7a3c0e*/
              if ( v10 ) /*0x7a3c11*/
              {
                DeleteAndZero(*((void ***)dword_B76640 + v3)); /*0x7a3c15*/
                __3_YAXPAX_Z(v10); /*0x7a3c1b*/
              }
              v7 = *(float *)&aP1.__pad_0[4]; /*0x7a3c29*/
              *((_DWORD *)dword_B76640 + v3) = ebx6; /*0x7a3c2d*/
              --dword_B76644; /*0x7a3c3c*/
              if ( v7 > dbl_B76660 ) /*0x7a3c46*/
                goto LABEL_17; /*0x7a3c46*/
            }
            else
            {
              v13 = (ObjectClass *)v9->ambientSoundController[3]; /*0x7a3c4a*/
              if ( v13 ) /*0x7a3c4f*/
              {
                while ( !String::Compare((const char **)v13, (const char **)&aP1) ) /*0x7a3c5f*/
                {
                  v9 = v13; /*0x7a3c61*/
                  v13 = (ObjectClass *)v13->ambientSoundController[3]; /*0x7a3c63*/
                  if ( !v13 ) /*0x7a3c68*/
                    goto LABEL_15; /*0x7a3c68*/
                }
                v9->ambientSoundController[3] = v13->ambientSoundController[3]; /*0x7a3c6f*/
                --dword_B76644; /*0x7a3c7b*/
                ComStreamClass::writeData((void **)v13, 1); /*0x7a3c87*/
              }
LABEL_15:
              if ( *(float *)&aP1.__pad_0[4] > dbl_B76660 ) /*0x7a3c9b*/
                goto LABEL_17; /*0x7a3c9b*/
            }
            ComStreamClass::flushStream(&dword_B76640); /*0x7a3ca2*/
          }
        }
LABEL_17:
        eax17 = (ObjectClass *)__2_YAPAXI_Z(0x4Cu); /*0x7a3ca7*/
        v15 = eax17; /*0x7a3cae*/
        if ( eax17 ) /*0x7a3cb5*/
          unknown_libname_73(eax17); /*0x7a3cb9*/
        else
          v15 = 0; /*0x7a3cc0*/
        String::Reassign((char **)v15, &aP1); /*0x7a3cc9*/
        qmemcpy(&v15->__pad_0[4], (const void *)v2, 0x44u); /*0x7a3cd8*/
        v15->ambientSoundController[3] = 0; /*0x7a3ce0*/
        v11 = dword_B76658(&aP1) & ((1 << dword_B7664C) - 1); /*0x7a3cfd*/
        v12 = *((_DWORD *)dword_B76640 + v11); /*0x7a3cff*/
        *((_DWORD *)dword_B76640 + v11) = v15; /*0x7a3d02*/
        if ( v12 ) /*0x7a3d07*/
          v15->ambientSoundController[3] = v12; /*0x7a3d09*/
        if ( (double)(unsigned int)++dword_B76644 / (double)dword_B76648 >= dbl_B76668 ) /*0x7a3d40*/
          ComStreamClass::readData(&dword_B76640); /*0x7a3d47*/
        v2 = *(_DWORD *)(v2 + 24); /*0x7a3d4c*/
      }
      while ( v2 ); /*0x7a3b6d*/
    }
    DeleteAndZero((void **)&aP1); /*0x7a3d58*/
    return 0; /*0x7a3d63*/
  }
}


// ==== 0x007A3D90  CNetUtilEventSink::Write  this=CNetUtilEventSink  sig=csp ====
int __thiscall ComStreamClass::Write(CNetUtilEventSink *this)
{
  HWND v1; // esi
  HWND DlgItem; // ebx
  CCINIClass *v7; // ebx
  char *v4; // eax
  HWND v5; // eax
  void (__stdcall *v6)(HWND, BOOL); // ebx
  HWND eax12; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND Current; // eax
  HWND v14; // eax
  bool v16; // [esp+Ah] [ebp-281Ah]
  char v17; // [esp+Bh] [ebp-2819h]
  LPARAM ChannelWOL; // [esp+Ch] [ebp-2818h] BYREF
  rc_ptr_base v19; // [esp+10h] [ebp-2814h] BYREF
  int v20; // [esp+14h] [ebp-2810h]
  WPARAM wParam; // [esp+18h] [ebp-280Ch]
  int v22; // [esp+1Ch] [ebp-2808h] BYREF
  char v23; // [esp+20h] [ebp-2804h]
  wchar_t v24[5120]; // [esp+24h] [ebp-2800h] BYREF
  int v25; // [esp+282Ch] [ebp+8h]
  unsigned __int8 *v26; // [esp+2830h] [ebp+Ch]
  CCINIClass *lParam; // [esp+2834h] [ebp+10h]
  CCINIClass *aP1; // [esp+2838h] [ebp+14h]

  Debug::Log(); /*0x7a3da1*/
  dword_B77DF0 = v25; /*0x7a3dba*/
  if ( v25 ) /*0x7a3dbf*/
    goto LABEL_16; /*0x7a3dbf*/
  String::Assign((char **)&ChannelWOL, lParam->__pad_0); /*0x7a3dd3*/
  LoadPlayerProfile(&v19, (const char **)&ChannelWOL); /*0x7a3de0*/
  DeleteAndZero((void **)&ChannelWOL); /*0x7a3de9*/
  ChannelWOL = 0; /*0x7a3df2*/
  v22 = 0; /*0x7a3df6*/
  v23 = 0; /*0x7a3dfa*/
  ReadRegistryOptionsWOL(&v22); /*0x7a3dfe*/
  if ( Flag::IsNot2(&v22) ) /*0x7a3e07*/
  {
    ChannelWOL = FindChannelWOL(lParam->__pad_0, (int)aP1, 1u, *(_DWORD *)(v20 + 16)); /*0x7a3e2d*/
    SaveConfigWOL((int)&MEMORY[0xA8B238]); /*0x7a3e31*/
  }
  v17 = 1; /*0x7a3e3b*/
  v16 = 0; /*0x7a3e40*/
  v1 = (HWND)Dialog::FindByHandle((void *)0x10F); /*0x7a3e4a*/
  if ( v1 /*0x7a3e7a*/
    || (v1 = (HWND)Dialog::FindByHandle((void *)0x11D), v16 = v1 != 0, v1)
    || (v17 = 0, (v1 = (HWND)Dialog::FindByHandle((void *)0x114)) != 0) )
  {
    DlgItem = GetDlgItem(v1, 1576); /*0x7a3e88*/
    if ( v16 ) /*0x7a3e93*/
    {
      SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)lParam); /*0x7a3ea1*/
    }
    else
    {
      wParam = SendMessageA(DlgItem, 0x4BCu, 0, (LPARAM)lParam); /*0x7a3eb5*/
      SendMessageA(DlgItem, 0x151u, wParam, ChannelWOL); /*0x7a3ec1*/
      SendMessageA(DlgItem, 0x14Eu, wParam, 0); /*0x7a3ed0*/
    }
    if ( v17 ) /*0x7a3ed8*/
    {
      String::Assign_Alt((void **)&g_WebBrowser, lParam); /*0x7a3eeb*/
      String::Assign_Alt((void **)&g_WebBrowserConfig, aP1); /*0x7a3efd*/
      v7 = (CCINIClass *)GetDlgItem(v1, 1836); /*0x7a3f0f*/
      v4 = String::GetOrEmpty_Alt(&g_WebBrowserConfig); /*0x7a3f11*/
      SendMessageA((HWND)v7, 0x4B4u, 0, (LPARAM)v4); /*0x7a3f1f*/
      LOBYTE(dword_84A238) = 1; /*0x7a3f29*/
      v5 = GetDlgItem(v1, 1337); /*0x7a3f30*/
      v6 = (void (__stdcall *)(HWND, BOOL))EnableWindow; /*0x7a3f32*/
      EnableWindow(v5, 1); /*0x7a3f39*/
      if ( !v16 ) /*0x7a3f41*/
      {
        eax12 = GetDlgItem(v1, 1837); /*0x7a3f4f*/
        EnableWindow(eax12, 0); /*0x7a3f52*/
        v8 = GetDlgItem(v1, 1837); /*0x7a3f63*/
        SendMessageA(v8, 0xF1u, 1u, 0); /*0x7a3f66*/
LABEL_14:
        v11 = GetDlgItem(v1, 1771); /*0x7a3f99*/
        v6(v11, 1); /*0x7a3fa4*/
        String::Assign((char **)&ChannelWOL, lParam->__pad_0); /*0x7a3fb2*/
        FillPersonaInfoWOL(v20, v1, (ObjectClass *)&ChannelWOL, (wchar_t **)1); /*0x7a3fc3*/
        DeleteAndZero((void **)&ChannelWOL); /*0x7a3fcc*/
      }
    }
    else
    {
      v9 = GetDlgItem(v1, 1791); /*0x7a3f79*/
      SendMessageA(v9, 0xF1u, 0, 0); /*0x7a3f7c*/
      v10 = GetDlgItem(v1, 1791); /*0x7a3f86*/
      v6 = (void (__stdcall *)(HWND, BOOL))EnableWindow; /*0x7a3f88*/
      EnableWindow(v10, 1); /*0x7a3f8f*/
      if ( !v16 ) /*0x7a3f97*/
        goto LABEL_14; /*0x7a3f97*/
    }
  }
  v19.vfptr = &vt_rc_ptr_PlayerProfile; /*0x7a3fd1*/
  ComPtr::Release(&v19); /*0x7a3fdd*/
LABEL_16:
  if ( v26 ) /*0x7a3fed*/
  {
    BulkCharToWide(v24, v26, -1); /*0x7a3ff5*/
    ShowDialogConfirm(v24, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7a4007*/
  }
  else
  {
    ShowDialogConfirm(aUnknownStatus, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7a4017*/
  }
  v12 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7a4021*/
  if ( v12 ) /*0x7a4028*/
  {
    g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFEFF); /*0x7a4036*/
    if ( !g_WOL_ChannelList ) /*0x7a403c*/
      CloseDialog(v12, 0); /*0x7a4042*/
  }
  Current = Dialog::GetCurrent(); /*0x7a4047*/
  v14 = GetDlgItem(Current, 1344); /*0x7a4052*/
  if ( v14 ) /*0x7a4058*/
    SetFocus(v14); /*0x7a405b*/
  return 0; /*0x7a4054*/
}


// ==== 0x007A4070  CNetUtilEventSink::Seek  this=CNetUtilEventSink  sig=csp ====
int __thiscall ComStreamClass::Seek(CNetUtilEventSink *this)
{
  HWND v1; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  int v5; // [esp+8h] [ebp+8h]
  CampaignScore *v6; // [esp+Ch] [ebp+Ch]
  int v7; // [esp+10h] [ebp+10h]

  Debug::Log(); /*0x7a4075*/
  dword_B77DF4 = v5; /*0x7a4083*/
  if ( !v5 ) /*0x7a4088*/
  {
    dword_B77E60 = v6; /*0x7a4092*/
    dword_B77E64 = v7; /*0x7a4097*/
  }
  v1 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7a40a2*/
  if ( v1 ) /*0x7a40a9*/
  {
    g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFEFF); /*0x7a40b7*/
    if ( !g_WOL_ChannelList ) /*0x7a40bd*/
      CloseDialog(v1, 0); /*0x7a40c3*/
  }
  Current = Dialog::GetCurrent(); /*0x7a40c8*/
  DlgItem = GetDlgItem(Current, 1344); /*0x7a40d3*/
  if ( DlgItem ) /*0x7a40db*/
    SetFocus(DlgItem); /*0x7a40de*/
  return 0; /*0x7a40e6*/
}


// ==== 0x007A40F0  CNetUtilEventSink::ddtor  this=CNetUtilEventSink  sig=csp ====
int __thiscall ComStreamClass::ddtor(CNetUtilEventSink *this)
{
  int v2; // [esp+8h] [ebp+8h]
  unsigned int v3; // [esp+Ch] [ebp+Ch]

  if ( g_NetworkLobby_Init && dword_B77780 ) /*0x7a4100*/
  {
    if ( !v2 && v3 < 0x3E8 ) /*0x7a4114*/
    {
      dword_B77CE0 = (ObjectClass *)((char *)dword_B77CE0 + 1); /*0x7a4123*/
      return 0; /*0x7a412a*/
    }
    return 0; /*0x7a4114*/
  }
  if ( MEMORY[0xA8B244] != 3 && MEMORY[0xA8B244] != 1 && MEMORY[0xA8B244] != 2 ) /*0x7a413f*/
  {
    if ( g_WOL_ProcessIdle ) /*0x7a4188*/
      DisplayRankingsWOL(0, 0); /*0x7a418e*/
    return 0; /*0x7a418e*/
  }
  Debug::Log(); /*0x7a4146*/
  if ( ++dword_B736F4 < (int)g_WOL_LoginPool ) /*0x7a4161*/
    return 0; /*0x7a4193*/
  if ( g_WOL_IdleHandler == 4 || g_WOL_IdleHandler == 5 ) /*0x7a4170*/
    UpdateWOLLobbyPings(); /*0x7a4172*/
  ProcessPingRequestsWOL(); /*0x7a4177*/
  return 0; /*0x7a412a*/
}


// ==== 0x007A41A0  CChatEventSink::System_Init_7A41A0  this=CChatEventSink  sig=csp ====
char *__thiscall sub_7A41A0(char *this)
{
  this->q004 = 0; /*0x7a41a6*/
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 8)); /*0x7a41ae*/
  *(_DWORD *)this = &CChatEventSink::`vftable'; /*0x7a41b4*/
  return this; /*0x7a41bc*/
}


// ==== 0x007A41C0  CChatEventSink::HandleServerList  this=CChatEventSink  sig=csp ====
int __stdcall CChatEventSink::HandleServerList(int a1, int a2, int a3)
{
  int v3; // ebp
  int v4; // ebx
  unsigned int v5; // eax
  #72 *StringCSF; // eax
  int v8; // eax
  int v9; // esi
  int v10; // ebp
  char *v11; // ebx
  char *v12; // esi
  char v13; // al
  unsigned int v14; // ecx
  void *v15; // edi
  int v16; // ebp
  char *v17; // ebx
  char *v18; // esi
  char v19; // al
  unsigned int v20; // ecx
  void *v21; // edi
  int v22; // edi
  char *v23; // esi
  unsigned __int8 v24; // al
  char *v25; // eax
  char *v26; // eax
  char *v27; // eax
  char *v28; // eax
  char *v29; // eax
  char *v30; // eax
  char *v31; // eax
  char *v32; // eax
  char *v33; // ebp
  char *v34; // eax
  char *v35; // eax
  int v36; // ebx
  int v37; // eax
  #72 *v38; // esi
  int v39; // eax
  char v40; // [esp+Fh] [ebp-315h]
  int v41; // [esp+10h] [ebp-314h]
  int v42; // [esp+10h] [ebp-314h]
  int v43; // [esp+14h] [ebp-310h]
  int v44; // [esp+14h] [ebp-310h]
  int v45; // [esp+18h] [ebp-30Ch]
  int v46; // [esp+1Ch] [ebp-308h]
  int v47; // [esp+20h] [ebp-304h]
  char v48[128]; // [esp+24h] [ebp-300h] BYREF
  char v49[128]; // [esp+A4h] [ebp-280h] BYREF
  char String[128]; // [esp+124h] [ebp-200h] BYREF
  char v51[128]; // [esp+1A4h] [ebp-180h] BYREF
  char v52[128]; // [esp+224h] [ebp-100h] BYREF
  char v53[128]; // [esp+2A4h] [ebp-80h] BYREF

  v3 = 0; /*0x7a41d0*/
  v4 = a3; /*0x7a41d2*/
  v43 = a3; /*0x7a41d5*/
  v41 = 0; /*0x7a41d9*/
  v47 = 0; /*0x7a41dd*/
  v46 = 0; /*0x7a41e1*/
  v5 = time(0); /*0x7a41e5*/
  srand(v5); /*0x7a41eb*/
  if ( a2 < 0 ) /*0x7a41fc*/
  {
    ((void (__stdcall *)(int))SetEvent)(dword_A8ED54[234060]); /*0x7a4204*/
    StringCSF = GetStringCSF((#72 *)aTxtNoServList, 0, g_Str_File_wonline_cpp, 5275); /*0x7a421b*/
    swprintf((#72 *const)&dword_A8ED54[238431], StringCSF); /*0x7a4226*/
    return 0; /*0x7a4239*/
  }
  v8 = dword_A8ED54[238305]; /*0x7a423c*/
  v40 = 0; /*0x7a4244*/
  if ( !a3 ) /*0x7a4249*/
    goto LABEL_75; /*0x7a4249*/
  do /*0x7a4ac2*/
  {
    if ( strcmp((const char *)(v4 + 95), "IRC") ) /*0x7a425f*/
    {
      if ( !strcmp((const char *)(v4 + 95), (const char *)&off_84AB9C) ) /*0x7a45e3*/
      {
        strcpy(v48, (const char *)(v4 + 100)); /*0x7a462c*/
        strtok(v48, asc_81C8FC); /*0x7a463a*/
        v25 = strtok(0, asc_81C8FC); /*0x7a4646*/
        if ( v25 ) /*0x7a4650*/
          strcpy((char *)&dword_A8ED54[236821], v25); /*0x7a466b*/
        v26 = strtok(0, asc_81C8FC); /*0x7a467b*/
        if ( v26 ) /*0x7a4685*/
          dword_A8ED54[238415] = atol(v26); /*0x7a4694*/
      }
      else if ( strcmp((const char *)(v4 + 95), aGam) || v46 ) /*0x7a46dc*/
      {
        if ( !strcmp((const char *)(v4 + 95), aGam) && v46 == 1 ) /*0x7a47dc*/
        {
          qmemcpy(&dword_A8ED54[236609], (const void *)v4, 0xF8u); /*0x7a47f0*/
          strcpy(v49, (const char *)&dword_A8ED54[236634]); /*0x7a4815*/
          strtok(v49, asc_81C8FC); /*0x7a4826*/
          v29 = strtok(0, asc_81C8FC); /*0x7a4832*/
          if ( v29 ) /*0x7a483c*/
            strcpy((char *)&dword_A8ED54[238565], v29); /*0x7a4857*/
          v30 = strtok(0, asc_81C8FC); /*0x7a4867*/
          if ( v30 ) /*0x7a4871*/
            dword_A8ED54[236674] = atol(v30); /*0x7a487c*/
          v46 = 2; /*0x7a4881*/
        }
        else if ( !strcmp((const char *)(v4 + 95), aWdt_1) ) /*0x7a489b*/
        {
          qmemcpy(&dword_A8ED54[237341], (const void *)v4, 0xF8u); /*0x7a48d9*/
          strcpy(v51, (const char *)&dword_A8ED54[237366]); /*0x7a48f7*/
          strtok(v51, asc_81C8FC); /*0x7a4908*/
          v31 = strtok(0, asc_81C8FC); /*0x7a4914*/
          if ( v31 ) /*0x7a491e*/
            strcpy((char *)&dword_A8ED54[234360], v31); /*0x7a4939*/
          v32 = strtok(0, asc_81C8FC); /*0x7a4949*/
          if ( v32 ) /*0x7a4953*/
            dword_A8ED54[237422] = atol(v32); /*0x7a4962*/
        }
        else if ( !_strcmpi((const void *)(v4 + 95), aMgl) ) /*0x7a4972*/
        {
          Debug::Log(); /*0x7a4987*/
          if ( !v40 ) /*0x7a4995*/
          {
            dword_A8ED54[238642] = 0; /*0x7a49a3*/
            memset(&dword_A8ED54[234556], 0, 0x2000u); /*0x7a49a8*/
            memset(&dword_A8ED54[236921], 0, 0x100u); /*0x7a49b4*/
            v40 = 1; /*0x7a49b6*/
          }
          v33 = (char *)__2_YAPAXI_Z(248); /*0x7a49c5*/
          qmemcpy(v33, (const void *)v4, 0xF8u); /*0x7a49d0*/
          strcpy(v53, v33 + 100); /*0x7a49f5*/
          strtok(v53, asc_81C8FC); /*0x7a4a06*/
          v34 = strtok(0, asc_81C8FC); /*0x7a4a12*/
          if ( v34 ) /*0x7a4a1c*/
          {
            strcpy((char *)&dword_A8ED54[32 * dword_A8ED54[238642] + 234556], v34); /*0x7a4a4e*/
            v35 = strtok(0, asc_81C8FC); /*0x7a4a57*/
            if ( v35 ) /*0x7a4a61*/
              dword_A8ED54[dword_A8ED54[238642] + 236921] = atol(v35); /*0x7a4a72*/
            Debug::Log(); /*0x7a4a98*/
            ++dword_A8ED54[238642]; /*0x7a4aa6*/
          }
          __3_YAXPAX_Z(v33); /*0x7a4aac*/
        }
      }
      else
      {
        qmemcpy(&dword_A8ED54[236609], (const void *)v4, 0xF8u); /*0x7a46f0*/
        strcpy(v52, (const char *)&dword_A8ED54[236634]); /*0x7a4715*/
        strtok(v52, asc_81C8FC); /*0x7a4726*/
        v27 = strtok(0, asc_81C8FC); /*0x7a4732*/
        if ( v27 ) /*0x7a473c*/
          strcpy((char *)&dword_A8ED54[238327], v27); /*0x7a4757*/
        v28 = strtok(0, asc_81C8FC); /*0x7a4767*/
        if ( v28 ) /*0x7a4771*/
          dword_A8ED54[236812] = atol(v28); /*0x7a477c*/
        LOBYTE(dword_A8ED54[238565]) = 0; /*0x7a4781*/
        dword_A8ED54[236674] = 0; /*0x7a4788*/
        v46 = 1; /*0x7a4792*/
      }
LABEL_72:
      v8 = dword_A8ED54[238305]; /*0x7a4ab4*/
      goto LABEL_73; /*0x7a4ab4*/
    }
    v9 = v8; /*0x7a428e*/
    if ( v41 ) /*0x7a4292*/
    {
      v45 = v8; /*0x7a43d4*/
      v16 = dword_A8ED54[238306]; /*0x7a43e0*/
      if ( v8 >= dword_A8ED54[238306] ) /*0x7a43e8*/
      {
        v16 = 2 * v8; /*0x7a43f6*/
        if ( 2 * v8 < 10 ) /*0x7a43fc*/
          v16 = 10; /*0x7a43fe*/
        v17 = (char *)__2_YAPAXI_Z(248 * v16); /*0x7a4415*/
        memset(v17, 0, 4 * ((unsigned int)(248 * v16) >> 2)); /*0x7a4423*/
        v18 = (char *)dword_A8ED54[238307]; /*0x7a442c*/
        if ( dword_A8ED54[238307] ) /*0x7a4434*/
        {
          v19 = -8 * LOBYTE(dword_A8ED54[238305]); /*0x7a4447*/
          v20 = (unsigned int)(248 * dword_A8ED54[238305]) >> 2; /*0x7a4449*/
          qmemcpy(v17, (const void *)dword_A8ED54[238307], 4 * v20); /*0x7a444c*/
          qmemcpy(&v17[4 * v20], &v18[4 * v20], v19 & 3); /*0x7a4453*/
          v18 = (char *)dword_A8ED54[238307]; /*0x7a4455*/
        }
        __3_YAXPAX_Z(v18); /*0x7a445c*/
        v8 = dword_A8ED54[238305]; /*0x7a4461*/
        v9 = v45; /*0x7a4466*/
        dword_A8ED54[238307] = (int)v17; /*0x7a446a*/
        v4 = v43; /*0x7a4470*/
        dword_A8ED54[238306] = v16; /*0x7a4477*/
      }
      if ( v8 >= v16 ) /*0x7a447f*/
      {
        CChatEventSink::ProcessChatEvent(&dword_A8ED54[238305]); /*0x7a4486*/
        v8 = dword_A8ED54[238305]; /*0x7a448b*/
      }
      if ( v9 < v8 ) /*0x7a4492*/
      {
        memcpy( /*0x7a44c2*/
          (void *)(dword_A8ED54[238307] + 248 * (v9 + 1)),
          (const void *)(dword_A8ED54[238307] + 248 * v9),
          248 * v8 - 248 * v9);
        v8 = dword_A8ED54[238305]; /*0x7a44c7*/
      }
      v21 = (void *)(dword_A8ED54[238307] + 248 * v9); /*0x7a44dc*/
      if ( v21 ) /*0x7a44e1*/
      {
        qmemcpy(v21, (const void *)v4, 0xF8u); /*0x7a44ea*/
        v8 = dword_A8ED54[238305]; /*0x7a44ec*/
      }
      dword_A8ED54[238305] = v8 + 1; /*0x7a44f5*/
      strcpy(String, (const char *)(v4 + 24)); /*0x7a451a*/
      v22 = -1; /*0x7a452a*/
      v23 = strtok(String, Delimiter); /*0x7a4533*/
      if ( v23 ) /*0x7a453a*/
      {
        while ( 1 ) /*0x7a4542*/
        {
          v22 = atol(v23); /*0x7a4542*/
          v24 = g_NetworkRematchState; /*0x7a4544*/
          if ( v22 == (unsigned __int8)g_NetworkRematchState ) /*0x7a4556*/
            break; /*0x7a4556*/
          if ( !strchr(v23, 58) ) /*0x7a455b*/
          {
            v23 = strtok(0, Delimiter); /*0x7a4572*/
            if ( v23 ) /*0x7a4579*/
              continue; /*0x7a4579*/
          }
          goto LABEL_35; /*0x7a4579*/
        }
      }
      else
      {
LABEL_35:
        v24 = g_NetworkRematchState; /*0x7a457b*/
      }
      if ( v22 == v24 && 1.0 / (double)++v47 >= (double)rand() * 0.00003051850947599719 ) /*0x7a45b1*/
        dword_A8ED54[236997] = v41; /*0x7a45b7*/
      dword_A8ED54[238366] = dword_A8ED54[236997]; /*0x7a45c7*/
      ++v41; /*0x7a45cd*/
      goto LABEL_72; /*0x7a45d1*/
    }
    v42 = v8; /*0x7a429a*/
    v10 = dword_A8ED54[238306]; /*0x7a42a4*/
    if ( v8 >= dword_A8ED54[238306] ) /*0x7a42ac*/
    {
      v10 = 2 * v8; /*0x7a42ba*/
      if ( 2 * v8 < 10 ) /*0x7a42c0*/
        v10 = 10; /*0x7a42c2*/
      v11 = (char *)__2_YAPAXI_Z(248 * v10); /*0x7a42d9*/
      memset(v11, 0, 4 * ((unsigned int)(248 * v10) >> 2)); /*0x7a42e7*/
      v12 = (char *)dword_A8ED54[238307]; /*0x7a42f0*/
      if ( dword_A8ED54[238307] ) /*0x7a42f8*/
      {
        v13 = -8 * LOBYTE(dword_A8ED54[238305]); /*0x7a430b*/
        v14 = (unsigned int)(248 * dword_A8ED54[238305]) >> 2; /*0x7a430d*/
        qmemcpy(v11, (const void *)dword_A8ED54[238307], 4 * v14); /*0x7a4310*/
        qmemcpy(&v11[4 * v14], &v12[4 * v14], v13 & 3); /*0x7a4317*/
        v12 = (char *)dword_A8ED54[238307]; /*0x7a4319*/
      }
      __3_YAXPAX_Z(v12); /*0x7a4320*/
      v8 = dword_A8ED54[238305]; /*0x7a4325*/
      v9 = v42; /*0x7a432a*/
      dword_A8ED54[238307] = (int)v11; /*0x7a432e*/
      v4 = v43; /*0x7a4334*/
      dword_A8ED54[238306] = v10; /*0x7a433b*/
    }
    if ( v8 >= v10 ) /*0x7a4343*/
    {
      CChatEventSink::ProcessChatEvent(&dword_A8ED54[238305]); /*0x7a434a*/
      v8 = dword_A8ED54[238305]; /*0x7a434f*/
    }
    if ( v9 < v8 ) /*0x7a4356*/
    {
      memcpy( /*0x7a4386*/
        (void *)(dword_A8ED54[238307] + 248 * (v9 + 1)),
        (const void *)(dword_A8ED54[238307] + 248 * v9),
        248 * v8 - 248 * v9);
      v8 = dword_A8ED54[238305]; /*0x7a438b*/
    }
    v15 = (void *)(dword_A8ED54[238307] + 248 * v9); /*0x7a43a0*/
    if ( v15 ) /*0x7a43a5*/
    {
      qmemcpy(v15, (const void *)v4, 0xF8u); /*0x7a43ae*/
      v8 = dword_A8ED54[238305]; /*0x7a43b0*/
    }
    ++v8; /*0x7a43b5*/
    dword_A8ED54[236997] = 0; /*0x7a43b6*/
    dword_A8ED54[238305] = v8; /*0x7a43c0*/
    v41 = 1; /*0x7a43c5*/
LABEL_73:
    v4 = *(_DWORD *)(v4 + 20); /*0x7a4ab9*/
    v43 = v4; /*0x7a4abe*/
  }
  while ( v4 ); /*0x7a4ac2*/
  v3 = 0; /*0x7a4ac8*/
LABEL_75:
  v36 = 0; /*0x7a4aca*/
  if ( v8 > 0 ) /*0x7a4ace*/
  {
    v44 = 0; /*0x7a4ad4*/
    do /*0x7a4b60*/
    {
      if ( v44 >= 0 && v3 < v8 ) /*0x7a4ae2*/
        v36 = v44 + dword_A8ED54[238307]; /*0x7a4ae9*/
      strcpy((char *)(v36 + 228), String::GetOrEmpty((char **)&dword_A8ED54[234555])); /*0x7a4b12*/
      strcpy((char *)(v36 + 238), String::GetOrEmpty((char **)&dword_A8ED54[238222])); /*0x7a4b45*/
      ++v3; /*0x7a4b52*/
      v8 = dword_A8ED54[238305]; /*0x7a4b55*/
      v44 += 248; /*0x7a4b5a*/
    }
    while ( v3 < dword_A8ED54[238305] ); /*0x7a4b60*/
  }
  Debug::Log(); /*0x7a4b72*/
  if ( dword_A8ED54[238642] <= 1 ) /*0x7a4b83*/
    v37 = 0; /*0x7a4b95*/
  else
    v37 = Random::Range(&MEMORY[0x87F7E8][7400], 0, dword_A8ED54[238642] - 1); /*0x7a4b8e*/
  dword_A8ED54[238643] = v37; /*0x7a4b9d*/
  Debug::Log(); /*0x7a4ba2*/
  v38 = GetStringCSF((#72 *)aTxtDetectingFi, 0, g_Str_File_wonline_cpp, 5458); /*0x7a4bc5*/
  v39 = Dialog::FindByHandle((void *)0xC4); /*0x7a4bc7*/
  if ( v39 ) /*0x7a4bce*/
    ((void (__stdcall *)(int, int, int, _DWORD, #72 *))SendDlgItemMessageA)(v39, 1458, 1202, 0, v38); /*0x7a4bde*/
  CCFileClass::WriteINIString(&dword_A8ED54[50269]); /*0x7a4be9*/
  ((void (__stdcall *)(int))SetEvent)(dword_A8ED54[234061]); /*0x7a4bf5*/
  return 0; /*0x7a4230*/
}


// ==== 0x007A4C10  CChatEventSink::?  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::vt_04_(int a1, int a2, int a3)
{
  int v3; // ecx
  int v4; // esi
  int v5; // eax
  HWND v6; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v9; // eax
  const wchar_t *v10; // ebp
  wchar_t *v11; // eax
  HWND v12; // edi
  HWND v13; // ebx
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  int v17; // [esp+8h] [ebp-4C4h]
  void *v18; // [esp+1Ch] [ebp-4B0h] BYREF
  int v19; // [esp+20h] [ebp-4ACh]
  _DWORD v20[3]; // [esp+24h] [ebp-4A8h] BYREF
  CHAR Buffer[260]; // [esp+30h] [ebp-49Ch] BYREF
  char v22[260]; // [esp+134h] [ebp-398h] BYREF
  char v23[260]; // [esp+238h] [ebp-294h] BYREF
  wchar_t String[200]; // [esp+33Ch] [ebp-190h] BYREF

  v3 = 0; /*0x7a4c1a*/
  if ( a2 < 0 ) /*0x7a4c22*/
    goto LABEL_16; /*0x7a4c22*/
  v4 = a3; /*0x7a4c28*/
  if ( !a3 ) /*0x7a4c31*/
    goto LABEL_16; /*0x7a4c31*/
  dword_B77DCC = 1; /*0x7a4c37*/
  v5 = a3; /*0x7a4c41*/
  do /*0x7a4c49*/
  {
    v5 = *(_DWORD *)(v5 + 12); /*0x7a4c43*/
    ++v3; /*0x7a4c46*/
  }
  while ( v5 ); /*0x7a4c49*/
  v19 = v3; /*0x7a4c4b*/
  v6 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7a4c54*/
  if ( v6 ) /*0x7a4c5b*/
  {
    g_WOL_ChannelList &= ~0x10u; /*0x7a4c66*/
    if ( !g_WOL_ChannelList ) /*0x7a4c6c*/
      CloseDialog(v6, 0); /*0x7a4c72*/
  }
  Current = Dialog::GetCurrent(); /*0x7a4c77*/
  DlgItem = GetDlgItem(Current, 1344); /*0x7a4c82*/
  if ( DlgItem ) /*0x7a4c8a*/
    SetFocus(DlgItem); /*0x7a4c8d*/
  v9 = GetStringCSF(MEMORY[0x84ABEC], 0, g_Str_File_wonline_cpp, 5504); /*0x7a4cab*/
  if ( ShowDialogConfirm(v9, 4, (int)GameLoop::Thunk, 0) == 7 ) /*0x7a4cbf*/
  {
LABEL_16:
    SetEvent(Handles); /*0x7a4ea4*/
    return 0; /*0x7a4ead*/
  }
  else
  {
    GetCurrentDirectoryA(0x100u, Buffer); /*0x7a4ccf*/
    v10 = 0; /*0x7a4cd5*/
    while ( 1 ) /*0x7a4cef*/
    {
      sprintf(v22, stru_84ABE4, (const char *)(v4 + 81), (const char *)(v4 + 337)); /*0x7a4cef*/
      sprintf(v23, MEMORY[0x840B78], (const char *)(v4 + 468), (const char *)(v4 + 337)); /*0x7a4d09*/
      CreateDirectoryA((LPCSTR)(v4 + 468), 0); /*0x7a4d14*/
      (*(void (__stdcall **)(LPVOID, int, int, int, char *, char *, char *))(*(_DWORD *)MEMORY[0xAC1174] + 12))( /*0x7a4d49*/
        MEMORY[0xAC1174],
        v4 + 16,
        v4 + 370,
        v4 + 403,
        v22,
        v23,
        MEMORY[0x8313B0]);
      v10 = (const wchar_t *)((char *)v10 + 1); /*0x7a4d4c*/
      v17 = v19; /*0x7a4d56*/
      v11 = GetStringCSF(aTxtDownloading, 0, g_Str_File_wonline_cpp, 5526); /*0x7a4d64*/
      swprintf(String, (const size_t)v11, v10, v17); /*0x7a4d72*/
      WideString::Assign((wchar_t **)&v18, String); /*0x7a4d86*/
      SimpleDialogControl::Constructor(v20); /*0x7a4d8f*/
      v20[0] = &off_7F7624; /*0x7a4da0*/
      v12 = (HWND)CreateDialog(0xD3u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_78DA30, 0); /*0x7a4dad*/
      v13 = GetDlgItem(v12, 1479); /*0x7a4dbf*/
      v14 = WideString::GetOrEmpty_Alt((wchar_t **)&v18); /*0x7a4dc1*/
      SendMessageA(v13, 0x4B2u, 0, (LPARAM)v14); /*0x7a4dcf*/
      if ( MessageDialogLoopAlt(v12, (unsigned __int8 (*)(void))GameLoop::Thunk, 0, 1, 1) == 2 ) /*0x7a4dea*/
        break; /*0x7a4dea*/
      v4 = *(_DWORD *)(v4 + 12); /*0x7a4dec*/
      v20[0] = &off_7F7624; /*0x7a4df3*/
      OwnerDrawControl::InitVtable(v20); /*0x7a4dfb*/
      DeleteAndZero::Alt(&v18); /*0x7a4e04*/
      if ( !v4 ) /*0x7a4e0b*/
      {
        v15 = GetStringCSF(aTxtGameRestart, 0, g_Str_File_wonline_cpp, 5558); /*0x7a4e28*/
        ShowDialogConfirm(v15, 0, (int)GameLoop::Thunk, 0); /*0x7a4e31*/
        SetEvent(dword_B736A4); /*0x7a4e3d*/
        SetCurrentDirectoryA(Buffer); /*0x7a4e48*/
        return 0; /*0x7a4e5a*/
      }
    }
    SetEvent(Handles); /*0x7a4e64*/
    SetCurrentDirectoryA(Buffer); /*0x7a4e6f*/
    v20[0] = &off_7F7624; /*0x7a4e79*/
    OwnerDrawControl::InitVtable(v20); /*0x7a4e81*/
    DeleteAndZero::Alt(&v18); /*0x7a4e8a*/
    return 0; /*0x7a4e92*/
  }
}


// ==== 0x007A4EC0  CChatEventSink::DispatchStub_32  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::vt_32_(int a1, int a2, int a3, int a4)
{
  int v4; // ebp
  signed int v5; // ecx
  signed int v6; // eax
  char *v7; // edx
  signed int v8; // eax
  int v9; // ebx
  char *v10; // eax
  char *v11; // esi
  void *v12; // ebp
  char v13; // dl
  size_t v14; // ecx
  char v15; // dl
  bool v16; // cc
  int v17; // esi
  signed int v19; // [esp+1Ch] [ebp-E8h]
  void *v20; // [esp+20h] [ebp-E4h] BYREF
  int v21; // [esp+24h] [ebp-E0h]
  char *v22; // [esp+28h] [ebp-DCh]
  _DWORD v23[27]; // [esp+2Ch] [ebp-D8h] BYREF
  _BYTE v24[108]; // [esp+98h] [ebp-6Ch] BYREF

  --dword_B77DDC; /*0x7a4ed2*/
  v4 = 0; /*0x7a4ed9*/
  if ( dword_B77DE0 ) /*0x7a4edf*/
  {
    dword_B77DE0 = 0; /*0x7a4ee8*/
    dword_B77DE4 = a3; /*0x7a4eee*/
    if ( a2 ) /*0x7a4efc*/
      return 0; /*0x7a4efc*/
    strcpy(byte_B77A94, (const char *)(a4 + 401)); /*0x7a4f26*/
  }
  else if ( a2 ) /*0x7a4f38*/
  {
    return 0; /*0x7a4f38*/
  }
  v5 = g_WOL_State; /*0x7a4f3e*/
  v6 = 0; /*0x7a4f44*/
  v19 = 0; /*0x7a4f48*/
  if ( (int)g_WOL_State > 0 ) /*0x7a4f4c*/
  {
    v21 = 0; /*0x7a4f53*/
    while ( 1 ) /*0x7a4f57*/
    {
      v7 = 0; /*0x7a4f57*/
      if ( v4 >= 0 && v6 < v5 ) /*0x7a4f5f*/
        v7 = (char *)g_WOL_ConnectionFlags + v4; /*0x7a4f66*/
      if ( *((_DWORD *)v7 + 5) != a3 ) /*0x7a4f75*/
        goto LABEL_38; /*0x7a4f75*/
      v22 = v7 + 87; /*0x7a4f90*/
      strcpy(v7 + 87, (const char *)(a4 + 401)); /*0x7a4fa8*/
      strcpy(v7 + 46, (const char *)(a4 + 360)); /*0x7a4fcb*/
      memset(v24, 0, sizeof(v24)); /*0x7a4ff0*/
      if ( v4 >= 0 && v19 < (int)g_WOL_State ) /*0x7a4ff8*/
        qmemcpy(v24, (char *)g_WOL_ConnectionFlags + v4, sizeof(v24)); /*0x7a5009*/
      v8 = v19; /*0x7a500b*/
      qmemcpy(v23, v24, sizeof(v23)); /*0x7a501f*/
      v23[8] = 0; /*0x7a5023*/
      if ( g_WOL_State ) /*0x7a502b*/
      {
        if ( v4 < 0 ) /*0x7a5033*/
          v8 = 0; /*0x7a5035*/
        if ( v8 >= (int)g_WOL_State ) /*0x7a5039*/
          v8 = g_WOL_State - 1; /*0x7a503b*/
        memcpy( /*0x7a5061*/
          (char *)g_WOL_ConnectionFlags + 108 * v8,
          (char *)g_WOL_ConnectionFlags + 108 * v8 + 108,
          108 * g_WOL_State - 36 * (3 * v8 + 3));
        --g_WOL_State; /*0x7a5075*/
        if ( (int)(3 * g_WOL_State) <= g_WOL_StateFlags ) /*0x7a507f*/
        {
          v9 = g_WOL_StateFlags / 2; /*0x7a5088*/
          if ( g_WOL_StateFlags / 2 < 10 ) /*0x7a508d*/
            v9 = 10; /*0x7a508f*/
          if ( v9 < g_WOL_StateFlags ) /*0x7a5096*/
          {
            v10 = (char *)__2_YAPAXI_Z(108 * v9); /*0x7a50a2*/
            v11 = (char *)g_WOL_ConnectionFlags; /*0x7a50a7*/
            v12 = v10; /*0x7a50b2*/
            if ( g_WOL_ConnectionFlags ) /*0x7a50b4*/
            {
              v13 = 108 * g_WOL_State; /*0x7a50c6*/
              v14 = (108 * g_WOL_State) >> 2; /*0x7a50c8*/
              qmemcpy(v10, g_WOL_ConnectionFlags, 4 * v14); /*0x7a50cb*/
              qmemcpy(&v10[4 * v14], &v11[4 * v14], v13 & 3); /*0x7a50d2*/
              v11 = (char *)g_WOL_ConnectionFlags; /*0x7a50d4*/
            }
            __3_YAXPAX_Z(v11); /*0x7a50db*/
            g_WOL_ConnectionFlags = v12; /*0x7a50e0*/
            v4 = v21; /*0x7a50e6*/
            g_WOL_StateFlags = v9; /*0x7a50ed*/
          }
        }
      }
      if ( dword_B77E48 == 1 ) /*0x7a50fb*/
        break; /*0x7a50fb*/
      switch ( dword_B77E48 ) /*0x7a5104*/
      {
        case 2: /*0x7a5104*/
          InsertBuddyList((const char *)v23, 1); /*0x7a510c*/
          break;
        case 3: /*0x7a5104*/
          InsertBuddyList((const char *)v23, 0); /*0x7a511e*/
          break;
        case 4: /*0x7a5104*/
          FindBuddyList((int)v23, 1); /*0x7a5130*/
          break;
        case 5: /*0x7a5104*/
          FindBuddyList((int)v23, 0); /*0x7a5142*/
          break;
        default:
          v15 = 1; /*0x7a5149*/
          goto LABEL_37; /*0x7a5149*/
      }
LABEL_38:
      v5 = g_WOL_State; /*0x7a5154*/
      v6 = v19 + 1; /*0x7a515e*/
      v4 += 108; /*0x7a515f*/
      v16 = ++v19 < (int)g_WOL_State; /*0x7a5162*/
      v21 = v4; /*0x7a5168*/
      if ( !v16 ) /*0x7a516c*/
        goto LABEL_39; /*0x7a516c*/
    }
    v15 = 0; /*0x7a50fd*/
LABEL_37:
    InsertGameSettings(v23, v15); /*0x7a514b*/
    goto LABEL_38; /*0x7a514f*/
  }
LABEL_39:
  String::Assign((char **)&v20, (const char *)(a4 + 401)); /*0x7a5173*/
  String::ToLower((const char **)&v20); /*0x7a518e*/
  v17 = *((_DWORD *)g_WOL_ListParser + (dword_B768D8(&v20) & ((1 << dword_B768CC) - 1))); /*0x7a51b2*/
  if ( v17 ) /*0x7a51b7*/
  {
    while ( !String::Compare((const char **)v17, (const char **)&v20) ) /*0x7a51c7*/
    {
      v17 = *(_DWORD *)(v17 + 112); /*0x7a51c9*/
      if ( !v17 ) /*0x7a51ce*/
        goto LABEL_42; /*0x7a51ce*/
    }
  }
  else
  {
LABEL_42:
    (*(void (__stdcall **)(LPVOID, char *, int, int, int **, int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0xAC1170] + 20))( /*0x7a51d0*/
      MEMORY[0xAC1170],
      g_WOL_ConnectFlag,
      g_WOL_GameConfig,
      a4 + 401,
      &unk_802100,
      -1,
      0,
      0);
  }
  if ( !dword_B77DDC ) /*0x7a51fa*/
    DisplayRankingsWOL(0); /*0x7a5200*/
  DeleteAndZero(&v20); /*0x7a5209*/
  return 0; /*0x7a520e*/
}


// ==== 0x007A5220  CChatEventSink::DispatchStub_20  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt20(int a1, int a2, const char *a3)
{
  if ( a2 >= 0 ) /*0x7a5226*/
    LeaveChannelWOL(a3); /*0x7a522c*/
  return 0; /*0x7a5233*/
}


// ==== 0x007A5240  CChatEventSink::GetTypeInfoCount  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt05(int a1, int a2, int a3)
{
  wchar_t *StringCSF; // eax
  wchar_t Buffer[512]; // [esp+0h] [ebp-400h] BYREF

  if ( !g_NetworkLobby_Init ) /*0x7a524d*/
  {
    StringCSF = GetStringCSF(MEMORY[0x84AC00], 0, g_Str_File_wonline_cpp, 5655); /*0x7a5260*/
    swprintf(Buffer, (const size_t)&off_8240B4, StringCSF); /*0x7a5270*/
    Dialog::ShowMessage(-1, (size_t)Buffer); /*0x7a527c*/
  }
  return 0; /*0x7a5286*/
}


// ==== 0x007A5290  CChatEventSink::GetTypeInfo  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt06(int a1, int a2, const char *a3)
{
  wchar_t *StringCSF; // eax
  wchar_t *v4; // eax
  char *v6; // ebp
  char *i; // eax
  int v8; // esi
  int v9; // [esp+24h] [ebp-50h] BYREF
  int v10; // [esp+28h] [ebp-4Ch] BYREF
  _BYTE v11[4]; // [esp+2Ch] [ebp-48h] BYREF
  _BYTE v12[4]; // [esp+30h] [ebp-44h] BYREF
  char Buffer[64]; // [esp+34h] [ebp-40h] BYREF

  dword_B77DF8 = a2; /*0x7a5299*/
  if ( a2 < 0 ) /*0x7a529e*/
    byte_B77DC0 = 1; /*0x7a52a0*/
  if ( a2 <= -2147221387 ) /*0x7a52ac*/
  {
    if ( a2 == -2147221387 ) /*0x7a52b2*/
    {
      StringCSF = GetStringCSF((wchar_t *)MEMORY[0x84AC78], 0, g_Str_File_wonline_cpp, 5758); /*0x7a5383*/
    }
    else
    {
      switch ( a2 ) /*0x7a52ce*/
      {
        case -2147221404: /*0x7a52ce*/
          StringCSF = GetStringCSF(aTxtLoginUsed, 0, g_Str_File_wonline_cpp, 5737); /*0x7a52e6*/
          break; /*0x7a52e6*/
        case -2147221403: /*0x7a52ce*/
          StringCSF = GetStringCSF(MEMORY[0x84AC84], 0, g_Str_File_wonline_cpp, 5742); /*0x7a531f*/
          break; /*0x7a532a*/
        case -2147221390: /*0x7a52ce*/
          StringCSF = GetStringCSF((wchar_t *)MEMORY[0x84AC78], 0, g_Str_File_wonline_cpp, 5747); /*0x7a5357*/
          break; /*0x7a5357*/
        case -2147221388: /*0x7a52ce*/
          StringCSF = GetStringCSF((wchar_t *)MEMORY[0x84AC68], 0, g_Str_File_wonline_cpp, 5753); /*0x7a536d*/
          break; /*0x7a536d*/
        default:
          goto LABEL_19;
      }
    }
    goto LABEL_20; /*0x7a536d*/
  }
  if ( a2 <= -2147221384 ) /*0x7a538a*/
  {
    if ( a2 == -2147221384 ) /*0x7a538c*/
    {
      v4 = GetStringCSF(MEMORY[0x84AC2C], 0, g_Str_File_wonline_cpp, 5773); /*0x7a53d6*/
      wcscpy(&word_B77AD0, v4); /*0x7a53e1*/
      SetEvent(Handles); /*0x7a53ef*/
      return 0; /*0x7a53fa*/
    }
    if ( a2 == -2147221386 ) /*0x7a5393*/
      StringCSF = GetStringCSF((wchar_t *)MEMORY[0x84AC44], 0, g_Str_File_wonline_cpp, 5763); /*0x7a53c0*/
    else
      StringCSF = GetStringCSF((wchar_t *)MEMORY[0x84AC54], 0, g_Str_File_wonline_cpp, 5768); /*0x7a53ad*/
    goto LABEL_20; /*0x7a53ad*/
  }
  if ( a2 ) /*0x7a53ff*/
  {
LABEL_19:
    StringCSF = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 5779); /*0x7a5401*/
LABEL_20:
    wcscpy(&word_B77AD0, StringCSF); /*0x7a5417*/
    SetEvent(Handles); /*0x7a542c*/
    return 0; /*0x7a5437*/
  }
  if ( !dword_B77EA4 ) /*0x7a5442*/
  {
    (*(void (__stdcall **)(LPVOID, int *))(*(_DWORD *)MEMORY[0xAC116C] + 132))(MEMORY[0xAC116C], &a2); /*0x7a5457*/
    v6 = (char *)__2_YAPAXI_Z(strlen((const char *)a2) + 32); /*0x7a5477*/
    strcpy(v6, (const char *)a2); /*0x7a5493*/
    strcat(v6, MEMORY[0x84AC20]); /*0x7a54bb*/
    for ( i = strtok(v6, MEMORY[0x817F70]); i; i = strtok(0, MEMORY[0x817F70]) ) /*0x7a54ce*/
    {
      v8 = atol(i); /*0x7a54dd*/
      (*(void (__stdcall **)(LPVOID, int, int, int *, int *, _BYTE *, _BYTE *))(*(_DWORD *)MEMORY[0xAC116C] + 92))( /*0x7a54ff*/
        MEMORY[0xAC116C],
        v8,
        dword_84A1C0,
        &v10,
        &v9,
        v12,
        v11);
      sprintf(Buffer, MEMORY[0x84AC14], v8); /*0x7a550d*/
      ChatEvent::ProcessStrings((int)MEMORY[0xAC4848], Buffer, v10, v9, 2); /*0x7a552b*/
    }
    __3_YAXPAX_Z(v6); /*0x7a5544*/
    dword_B77EA4 = 1; /*0x7a554c*/
  }
  if ( byte_84A1B8 ) /*0x7a555f*/
    String::Assign_Alt(&MEMORY[0xB73AE0], a3); /*0x7a556b*/
  else
    DeleteAndZero::Alt2(&MEMORY[0xB73AE0]); /*0x7a5577*/
  memset(&g_WOL_ProcessIdle, 0, 0x10Cu); /*0x7a558e*/
  memset(&dword_B73BE8, 0, 0x10Cu); /*0x7a559a*/
  byte_B77DC2 = 0; /*0x7a559d*/
  g_WOL_ChannelState = 0; /*0x7a55a4*/
  SetEvent(dword_B7368C); /*0x7a55ae*/
  QueryNATPortWOL((unsigned __int16 *)MEMORY[0xA8DBC0]); /*0x7a55b9*/
  return 0; /*0x7a5308*/
}


// ==== 0x007A55F0  CChatEventSink::GetIDsOfNames  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt07(int a1, int a2, char *Source)
{
  char *v4; // esi
  unsigned __int8 *i; // eax
  _WORD v6[1024]; // [esp+0h] [ebp-800h] BYREF

  if ( a2 < 0 ) /*0x7a55fc*/
    return 0; /*0x7a55fe*/
  v4 = _strdup(Source); /*0x7a5617*/
  for ( i = (unsigned __int8 *)strtok(v4, MEMORY[0x83F328]); i; i = (unsigned __int8 *)strtok(0, MEMORY[0x83F328]) ) /*0x7a5629*/
  {
    BulkCharToWide(v6, i, -1); /*0x7a5633*/
    Dialog::ShowMessage(-1, (size_t)v6); /*0x7a5644*/
  }
  free(v4); /*0x7a565d*/
  Dialog::ShowMessage(-1, (size_t)asc_830174); /*0x7a566d*/
  return 0; /*0x7a5600*/
}


// ==== 0x007A5690  CChatEventSink::FireEvent  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::vt_09_(int a1, int a2, _BYTE *a3)
{
  wchar_t *v3; // eax
  HWND v4; // eax
  HWND v5; // eax
  HWND v6; // eax
  wchar_t *String; // eax
  char *v9; // edi
  int v10; // eax
  HWND v11; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  char *v14; // [esp-10h] [ebp-60h]
  char Buffer[80]; // [esp+0h] [ebp-50h] BYREF

  if ( a2 >= 0 ) /*0x7a5699*/
  {
    if ( *(_DWORD *)a3 ) /*0x7a572c*/
    {
      memset(MEMORY[0xB76E40], 0, 0x940u); /*0x7a576f*/
      v9 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a577b*/
      v10 = MEMORY[0xA8B3AC]; /*0x7a5788*/
      strcpy(MEMORY[0xB76E40], v9); /*0x7a5799*/
      MEMORY[0xB76E58][0] = v10; /*0x7a57a8*/
      MEMORY[0xB76E5C] = 0; /*0x7a57ad*/
      MEMORY[0xB76E54][0] = MEMORY[0xA8B394]; /*0x7a57b7*/
      MEMORY[0xB76E60][0] = 1; /*0x7a57bd*/
    }
    else
    {
      v14 = CharToWideString(a3 + 52); /*0x7a573a*/
      String = GetStringCSF(aTxtCreatedChan, 0, g_Str_File_wonline_cpp, 5835); /*0x7a574c*/
      Dialog::ShowMessage(-1, (size_t)String, v14); /*0x7a5759*/
    }
    qmemcpy(&g_WOL_ProcessIdle, a3, 0x10Cu); /*0x7a57d8*/
    dword_B77E4C = 1; /*0x7a57e0*/
    ++g_WOL_ChannelState; /*0x7a57eb*/
    Debug::Log(); /*0x7a57f1*/
    if ( MEMORY[0xAC116C] && *(_DWORD *)a3 ) /*0x7a5802*/
    {
      memset(Buffer, 0, sizeof(Buffer)); /*0x7a5813*/
      GameConfig::BuildChecksum(Buffer); /*0x7a5819*/
      Buffer[40] = 0; /*0x7a5827*/
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 168))(MEMORY[0xAC116C], Buffer); /*0x7a5830*/
    }
    v11 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7a583b*/
    if ( v11 ) /*0x7a5845*/
    {
      g_WOL_ChannelList &= ~4u; /*0x7a5850*/
      if ( !g_WOL_ChannelList ) /*0x7a5856*/
        CloseDialog(v11, 0); /*0x7a585c*/
    }
    Current = Dialog::GetCurrent(); /*0x7a5861*/
    DlgItem = GetDlgItem(Current, 1344); /*0x7a586c*/
    if ( DlgItem ) /*0x7a5874*/
      SetFocus(DlgItem); /*0x7a5877*/
  }
  else
  {
    v3 = GetStringCSF(aTxtChancreateF, 0, g_Str_File_wonline_cpp, 5825); /*0x7a56b0*/
    Dialog::ShowMessage(-1, (size_t)v3); /*0x7a56bc*/
    dword_B77E4C = 0; /*0x7a56c9*/
    g_WOL_IdleFlag[0] = 0; /*0x7a56d3*/
    v4 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7a56da*/
    if ( v4 ) /*0x7a56e1*/
    {
      g_WOL_ChannelList &= ~4u; /*0x7a56ec*/
      if ( !g_WOL_ChannelList ) /*0x7a56f2*/
        CloseDialog(v4, 0); /*0x7a56f8*/
    }
    v5 = Dialog::GetCurrent(); /*0x7a56fd*/
    v6 = GetDlgItem(v5, 1344); /*0x7a5708*/
    if ( v6 ) /*0x7a5710*/
    {
      SetFocus(v6); /*0x7a5717*/
      return 0; /*0x7a5722*/
    }
  }
  return 0; /*0x7a571f*/
}


// ==== 0x007A5890  CChatEventSink::HandleChatEvent  this=CChatEventSink  sig=csp ====
// local variable allocation has failed, the output may be wrong!
int __stdcall CChatEventSink::HandleChatEvent(int a1, AnimClass *a2, unsigned __int8 *a3, char *a4)
{
  HWND v4; // ebp
  CCINIClass *v5; // ecx
  int v6; // eax
  int v7; // ecx
  void (__stdcall *v8)(HANDLE); // esi
  char *v9; // ebx
  int v10; // ebp
  int v11; // eax
  int v12; // ebp
  char *v13; // edx
  int v14; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // eax
  wchar_t *v20; // eax
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  HWND v23; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  SkirmishDialog *v26; // eax
  SkirmishDialog *v27; // esi
  HWND v29; // eax
  HWND v30; // eax
  HWND v31; // eax
  wchar_t *v32; // eax
  HWND v33; // eax
  HWND v34; // eax
  void (__stdcall *v35)(HWND, BOOL); // esi
  CCINIClass *v36; // edi
  LRESULT v37; // eax
  LRESULT v38; // eax
  ObjectClass *v39; // edx
  char v40; // al
  ObjectClass *v41; // edx
  HWND v42; // eax
  BOOL v43; // eax
  HWND v44; // eax
  HWND v45; // eax
  HWND v46; // eax
  HWND v47; // eax
  HWND v48; // eax
  HWND v49; // eax
  HWND v50; // eax
  HWND v51; // eax
  HWND v52; // eax
  HWND eax89i; // eax
  int First; // eax
  int v55; // eax
  SkirmishDialog *v53; // esi
  char *eax96; // eax
  u_long v58; // ecx
  u_long v59; // eax
  AnimClass *v57; // eax
  int v61; // edx
  int v62; // eax
  CoordStruct *DialogIndirect; // esi
  HWND v64; // eax
  SkirmishDialog *edi110; // edi
  int v66; // eax
  int v67; // esi
  ObjectClass *v65; // esi
  int v69; // eax
  int v70; // esi
  int esi144; // esi
  char **v72; // ecx
  _DWORD *v73; // esi
  ObjectClass *v71; // esi
  int X; // esi
  char *v76; // eax
  ObjectClass *v74; // esi
  int v78; // esi
  char *v79; // eax
  int *v80; // esi
  HWND GameUI; // eax
  HWND v82; // eax
  HWND v83; // eax
  char *v84; // ebx
  unsigned __int8 *v85; // edi
  signed int v86; // ebp
  signed int v87; // eax
  int v88; // ebx
  int v89; // eax
  int v90; // ecx
  int v91; // ecx
  int ebx198; // ebx
  int v93; // eax
  int v94; // ebp
  ObjectClass *v92; // esi
  int v96; // edi
  char al208; // al
  size_t ecx208; // ecx
  AbstractClass *v99; // edi
  WinModemClass *v97; // eax
  BlowStraw *v98; // esi
  char **v102; // ecx
  signed int v103; // eax
  AbstractClass *v104; // ebx
  signed int v105; // esi
  int edi235; // edi
  char *eax239; // eax
  int v108; // ebp
  AbstractClass *v106; // ebx
  ObjectClass *v107; // eax
  signed int v111; // eax
  int v112; // ebp
  signed int v113; // ebx
  char *v114; // eax
  int v115; // ebx
  int v116; // edi
  char *v117; // edx
  int v118; // esi
  int v119; // eax
  void **p_nextObject; // ecx
  int v121; // eax
  int v122; // esi
  _BYTE *v123; // ecx
  char *v124; // eax
  u_long v125; // ecx
  u_long v126; // eax
  int v127; // eax
  int v128; // edx
  int v129; // eax
  int v130; // eax
  char *v131; // eax
  int v132; // esi
  char v133; // al
  int v134; // ebp
  signed int v135; // edi
  signed int v136; // ebx
  struct in_addr v137; // esi
  char *v138; // eax
  int v139; // eax
  int v140; // esi
  _BYTE *v141; // ecx
  char *eax319; // eax
  u_long v143; // ecx
  u_long eax319a; // eax
  AnimClass *v142; // eax
  int v146; // edx
  ObjectClass *v144; // eax
  HWND v148; // eax
  unsigned int _28; // [esp+28h] [ebp-2ACh]
  AnimClass *v149; // [esp+34h] [ebp-2A0h] OVERLAPPED
  _BYTE v151[272]; // [esp+38h] [ebp-29Ch] BYREF
  wchar_t Buffer[64]; // [esp+148h] [ebp-18Ch] BYREF
  _BYTE aP0[268]; // [esp+1C8h] [ebp-10Ch] BYREF

  if ( a2 != (AnimClass *)-2147221396 )
  {
    v4 = (HWND)a3;
    Buffer[0] = 0;
    if ( a3 )
    {
      BulkCharToWide(Buffer, a3 + 52, -1);
      if ( !strncmp((AnimClass *)(a3 + 52), g_Str_Lob_41_, 7u) )
      {
        v5 = (CCINIClass *)atol((const char *)&a3[strlen(g_Str_Lob_41_) + 52]);
        v6 = (int)v5 / 8;
        v7 = (int)v5 % 8;
        if ( v6 )
          swprintf(
            Buffer,
            (const size_t)stru_84A738.customSound_controller,
            (const wchar_t *const)*(&dword_B73E1C + v7),
            (CampaignScore *)(v6 + 1));
        else
          swprintf(
            Buffer,
            (const size_t)&off_8240B4,
            (const wchar_t *const)*(&dword_B73E1C + v7),
            *(CampaignScore **)v151);
      }
    }
    if ( (int)a2 < 0 )
    {
      v8 = (void (__stdcall *)(HANDLE))SetEvent;
      if ( a2 == (AnimClass *)-2147221392 )
      {
        v9 = 0;
        v10 = 0;
        *(_DWORD *)&v151[16] = 0;
        if ( (int)g_WOL_AuthPool > 0 )
        {
          *(_DWORD *)&v151[20] = dword_B73E18;
          while ( 1 )
          {
            if ( v10 >= 0 && v10 < (int)g_WOL_AuthPool )
              v9 = *(char **)&v151[20];
            if ( !strcmp(&byte_B73C1C, v9 + 52) )
              break;
            ++v10;
            *(_DWORD *)&v151[20] += 268;
            if ( v10 >= (int)g_WOL_AuthPool )
            {
              *(_DWORD *)&v151[16] = v9;
              goto LABEL_24;
            }
          }
          *(_DWORD *)&v151[16] = v9;
          v11 = v10;
          if ( g_WOL_AuthPool )
          {
            if ( v10 < 0 )
              v11 = 0;
            if ( v11 >= (int)g_WOL_AuthPool )
              v11 = (int)&g_WOL_AuthPool[-1].lineTrailer + 3;
            memcpy(
              (char *)dword_B73E18 + 268 * v11,
              (AbstractClass *)((char *)dword_B73E18 + 268 * v11 + 268),
              268 * (_DWORD)g_WOL_AuthPool - 268 * (v11 + 1));
            g_WOL_AuthPool = (ObjectClass *)((char *)g_WOL_AuthPool - 1);
            if ( 3 * (int)g_WOL_AuthPool <= dword_B73E14 )
              CChatEventSink::GrowBuffer((int *)&g_WOL_AuthPool);
          }
        }
LABEL_24:
        v12 = 0;
        if ( (int)g_WOL_ChatState > 0 )
        {
          v13 = (char *)g_WOL_ConnectionHandler;
          while ( 1 )
          {
            if ( v12 >= 0 && v12 < (int)g_WOL_ChatState )
            {
              v9 = v13;
              *(_DWORD *)&v151[16] = v13;
            }
            if ( !strcmp(&byte_B73C1C, v9 + 52) )
              break;
            ++v12;
            v13 += 268;
            if ( v12 >= (int)g_WOL_ChatState )
              goto LABEL_40;
            v9 = *(char **)&v151[16];
          }
          v14 = v12;
          if ( g_WOL_ChatState )
          {
            if ( v12 < 0 )
              v14 = 0;
            if ( v14 >= (int)g_WOL_ChatState )
              v14 = (int)&g_WOL_ChatState[-1].lineTrailer + 3;
            memcpy(
              (char *)g_WOL_ConnectionHandler + 268 * v14,
              (AbstractClass *)((char *)g_WOL_ConnectionHandler + 268 * v14 + 268),
              268 * (_DWORD)g_WOL_ChatState - 268 * (v14 + 1));
            g_WOL_ChatState = (ObjectClass *)((char *)g_WOL_ChatState - 1);
            if ( 3 * (int)g_WOL_ChatState <= dword_B76AE4 )
              CChatEventSink::GrowBuffer((int *)&g_WOL_ChatState);
          }
        }
LABEL_40:
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 3
          || *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 1
          || *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 2 )
        {
          StringCSF = GetStringCSF(aTxtGameClosed, 0, (CampaignScore *)g_Str_File_wonline_cpp, 5945);
          Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)StringCSF, *(ObjectClass *)v151);
          SetEvent(hEvent);
          v8 = (void (__stdcall *)(HANDLE))SetEvent;
        }
        else
        {
          v16 = GetStringCSF(aTxtGameClosed, 0, (CampaignScore *)g_Str_File_wonline_cpp, 5948);
          ShowDialogConfirm((CampaignScore *)v16, 0, (unsigned __int8 (*)())GameLoop::Thunk, 0);
          v8 = (void (__stdcall *)(HANDLE))SetEvent;
        }
LABEL_62:
        g_WOL_ChannelLeaveState = dword_B73BE8 != 0;
        memset(&dword_B73BE8, 0, 0x10Cu);
        dword_B77E4C = 0;
        LOBYTE(g_WOL_IdleFlag.field_0) = 0;
        v23 = (HWND)Dialog::FindByHandle((void *)0xC4);
        if ( v23 )
        {
          g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFFFD);
          if ( !g_WOL_ChannelList )
            CloseDialog(v23, 0);
        }
        Current = Dialog::GetCurrent();
        DlgItem = GetDlgItem(Current, 1344);
        if ( DlgItem )
          SetFocus(DlgItem);
        byte_B73C1C = 0;
        GameListRenderWOL((CampaignScore *)&unk_B73CF4);
        DisplayRankingsWOL(0, 0);
        v8(dword_B736AC);
        v26 = (SkirmishDialog *)Dialog::FindByHandle((void *)0x113);
        v27 = v26;
        if ( v26 )
        {
          ShowWindow((HWND)v26, 5);
          Dialog::InitWindow(v27, 0);
          return 0;
        }
        return 0;
      }
      if ( a2 == (AnimClass *)-2147221391 )
      {
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 3
          && *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 1
          && *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 2 )
        {
          v18 = GetStringCSF((wchar_t *)&stru_84ABE4.location[1], 0, (CampaignScore *)g_Str_File_wonline_cpp, 5958);
          ShowDialogConfirm((CampaignScore *)v18, 0, (unsigned __int8 (*)())GameLoop::Thunk, 0);
          goto LABEL_62;
        }
        v17 = GetStringCSF((wchar_t *)&stru_84ABE4.location[1], 0, (CampaignScore *)g_Str_File_wonline_cpp, 5955);
        Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v17, *(ObjectClass *)v151);
      }
      else if ( a2 == (AnimClass *)-2147221394 )
      {
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 3
          || *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 1
          || *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 2 )
        {
          v19 = GetStringCSF(g_Str_TXT_CHANNEL_FULL, 0, (CampaignScore *)g_Str_File_wonline_cpp, 5965);
          Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v19, *(ObjectClass *)v151);
          SetEvent(hEvent);
          goto LABEL_62;
        }
        v20 = GetStringCSF(g_Str_TXT_CHANNEL_FULL, 0, (CampaignScore *)g_Str_File_wonline_cpp, 5968);
        ShowDialogConfirm((CampaignScore *)v20, 0, (unsigned __int8 (*)())GameLoop::Thunk, 0);
        if ( dword_B73BE8 )
          goto LABEL_62;
      }
      else
      {
        if ( a2 == (AnimClass *)-2147221390 )
        {
          v21 = GetStringCSF(aTxtJoinban, 0, (CampaignScore *)g_Str_File_wonline_cpp, 5977);
          ShowDialogConfirm((CampaignScore *)v21, 0, (unsigned __int8 (*)())GameLoop::Thunk, 0);
          SetEvent(hEvent);
          dword_B77DD4 = (MPCooperative *)((char *)dword_B77DD4 + 1);
          goto LABEL_62;
        }
        v149 = a2;
        v22 = GetStringCSF(aTxtCantJoincha, 0, (CampaignScore *)g_Str_File_wonline_cpp, 5984);
        Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v22, *(ObjectClass *)&v149);
      }
      SetEvent(hEvent);
      goto LABEL_62;
    }
    byte_B73C1C = 0;
    if ( (BYTE1(*(_DWORD *)a4) & 0x80u) == 0 )
    {
      if ( g_WOL_ProcessIdle == (WinModemClass *)41 )
        PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1728), 0x2000, 1.0, 0);
      if ( *(_DWORD *)a3 && (byte_B77DEC || g_NetworkLobbyState || byte_B77E27) )
      {
        (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 84))(
          *(&g_MatrixTransformState + 2263),
          a4);
        return 0;
      }
      if ( *((_DWORD *)a4 + 5) && !strlen(a4 + 87) )
      {
        dword_B77DDC = (CChatEventSink *)((char *)dword_B77DDC + 1);
        (*(void (__stdcall **)(_DWORD, _DWORD))((*(&g_MatrixTransformState + 2263))->X + 176))(
          *(&g_MatrixTransformState + 2263),
          *((_DWORD *)a4 + 5));
      }
      unknown_libname_73(&v151[16]);
      String::Assign_Bool((void **)&v151[16], a4 + 36);
      String::ToLower((const char **)&v151[16]);
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 && *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 3 )
      {
        unknown_libname_73(&v151[20]);
        v66 = g_WOL_ChatPool;
        v67 = 0;
        if ( g_WOL_ChatPool <= 0 )
        {
LABEL_133:
          StringVector::Insert(&g_WOL_ChatPool, (const char **)&v151[16], 0);
        }
        else
        {
          while ( 1 )
          {
            if ( v67 >= 0 && v67 < v66 )
              String::Reassign((char **)&v151[20], (AbstractClass *)((char *)dword_B777A8 + 4 * v67));
            if ( String::Compare((const char **)&v151[20], (const char **)&v151[16]) )
              break;
            v66 = g_WOL_ChatPool;
            if ( ++v67 >= g_WOL_ChatPool )
              goto LABEL_133;
          }
        }
        DeleteAndZero((int)&v151[20]);
      }
      v65 = *(ObjectClass **)&g_WOL_ConnectionPool->__pad_0[4 * (dword_B76548(&v151[16]) & ((1 << dword_B7653C) - 1))];
      if ( v65 )
      {
        while ( !String::Compare((const char **)v65, (const char **)&v151[16]) )
        {
          v65 = *(ObjectClass **)&v65->__pad_0[8];
          if ( !v65 )
            goto LABEL_138;
        }
      }
      else
      {
LABEL_138:
        unknown_libname_73(&v151[20]);
        v69 = g_WOL_LoginToken;
        v70 = 0;
        if ( g_WOL_LoginToken <= 0 )
        {
LABEL_144:
          esi144 = 0;
          if ( v69 < 0 )
            esi144 = v69;
          if ( esi144 >= dword_B765FC )
          {
            DynamicVector::EnsureCapacity(&g_WOL_LoginToken);
            v69 = g_WOL_LoginToken;
          }
          if ( v69 >= dword_B765FC )
          {
            DynamicVector::EnsureCapacity(&g_WOL_LoginToken);
            v69 = g_WOL_LoginToken;
          }
          if ( esi144 < v69 )
          {
            memcpy(
              &dword_B76600->__pad_0[4 * esi144 + 4],
              (AbstractClass *)((char *)dword_B76600 + 4 * esi144),
              4 * (v69 + 0x3FFFFFFF * esi144));
            v69 = g_WOL_LoginToken;
          }
          v72 = (char **)((char *)dword_B76600 + 4 * esi144);
          if ( v72 )
          {
            String::AssignFromPtr(v72, (const char **)&v151[16]);
            v69 = g_WOL_LoginToken;
          }
          g_WOL_LoginToken = v69 + 1;
        }
        else
        {
          while ( 1 )
          {
            if ( v70 >= 0 && v70 < v69 )
              String::Reassign((char **)&v151[20], (AbstractClass *)((char *)dword_B76600 + 4 * v70));
            if ( String::Compare((const char **)&v151[20], (const char **)&v151[16]) )
              break;
            v69 = g_WOL_LoginToken;
            if ( ++v70 >= g_WOL_LoginToken )
              goto LABEL_144;
          }
        }
        DeleteAndZero((int)&v151[20]);
      }
      v73 = (_DWORD *)g_WOL_HashTable;
      v71 = *(ObjectClass **)(*v73
                            + 4
                            * ((*(int (__thiscall **)(_BYTE *))(g_WOL_HashTable + 24))(&v151[16]) & ((1 << v73[3]) - 1)));
      if ( v71 )
      {
        while ( !String::Compare((const char **)v71, (const char **)&v151[16]) )
        {
          v71 = (ObjectClass *)v71->estimatedHealth;
          if ( !v71 )
            goto LABEL_159;
        }
      }
      else
      {
LABEL_159:
        X = (*(&g_MatrixTransformState + 2264))->X;
        _28 = (unsigned int)g_NetworkRematchState & 0xFFFF00;
        v76 = String::GetOrEmpty((char **)&v151[16]);
        (*(void (__stdcall **)(_DWORD, char *, CCINIClass *, char *, unsigned int, int, _DWORD, _DWORD))(X + 20))(
          *(&g_MatrixTransformState + 2264),
          g_WOL_ConnectFlag,
          g_WOL_GameConfig,
          v76,
          _28,
          -1,
          0,
          0);
      }
      v74 = (ObjectClass *)*((_DWORD *)dword_B76640 + (dword_B76658(&v151[16]) & ((1 << dword_B7664C) - 1)));
      if ( v74 )
      {
        while ( !String::Compare((const char **)v74, (const char **)&v151[16]) )
        {
          v74 = (ObjectClass *)v74->ambientSoundController[3];
          if ( !v74 )
            goto LABEL_163;
        }
      }
      else
      {
LABEL_163:
        v78 = (*(&g_MatrixTransformState + 2264))->X;
        v149 = (AnimClass *)((unsigned int)g_NetworkRematchState & 0xFFFF00);
        v79 = String::GetOrEmpty((char **)&v151[16]);
        (*(void (__stdcall **)(_DWORD, char *, CCINIClass *, char *, AnimClass *))(v78 + 56))(
          *(&g_MatrixTransformState + 2264),
          g_WOL_ConnectFlag,
          g_WOL_GameConfig,
          v79,
          v149);
      }
      DeleteAndZero((int)&v151[16]);
      if ( *(_DWORD *)a3 )
      {
        v80 = (int *)&unk_B76EF4;
        do
        {
          *v80 = 0;
          GameUI = (HWND)Dialog::FindGameUI();
          v82 = GetDlgItem(GameUI, 1439);
          EnableWindow(v82, 1);
          v80 += 37;
        }
        while ( v80 < &g_WOL_ChatPool );
        if ( !dword_B77E4C )
        {
          v83 = (HWND)Dialog::FindByHandle((void *)0xC9);
          EnablePlayerSlotControls(v83, 1);
        }
        Game::ResetReadyStates();
      }
    }
    else
    {
      qmemcpy(&g_WOL_ProcessIdle, a3, 0x10Cu);
      memset(&dword_B73BE8, 0, 0x10Cu);
      v29 = (HWND)Dialog::FindByHandle((void *)0xC4);
      if ( v29 )
      {
        g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFFFD);
        if ( !g_WOL_ChannelList )
          CloseDialog(v29, 0);
      }
      v30 = Dialog::GetCurrent();
      v31 = GetDlgItem(v30, 1344);
      if ( v31 )
        SetFocus(v31);
      g_WOL_ChannelState = (SkirmishDialog *)((char *)g_WOL_ChannelState + 1);
      Debug::Log();
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 3
        && *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 1
        && *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 2 )
      {
        v149 = (AnimClass *)Buffer;
        v32 = GetStringCSF(aTxtJoinedS, 0, (CampaignScore *)g_Str_File_wonline_cpp, 6032);
        Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v32, *(ObjectClass *)&v149);
      }
      if ( !*(_DWORD *)a3 )
      {
        dword_B77DD4 = (MPCooperative *)atol((const char *)&a3[strlen(g_Str_Lob_41_) + 52]);
        v33 = (HWND)Dialog::FindByHandle((void *)0x113);
        v4 = v33;
        if ( v33 )
        {
          v34 = GetDlgItem(v33, 1341);
          v35 = (void (__stdcall *)(HWND, BOOL))EnableWindow;
          EnableWindow(v34, 1);
          v151[34] = 0;
          v151[35] = 0;
          v36 = (CCINIClass *)GetDlgItem(v4, 1774);
          v37 = SendMessageA((HWND)v36, 0x188u, 0, 0);
          if ( v37 != -1 )
          {
            v38 = SendMessageA((HWND)v36, 0x199u, v37, 0);
            if ( v38 >= 0 && v38 < (int)g_WOL_ChatState )
            {
              v39 = (ObjectClass *)(67 * v38);
              LOBYTE(v39) = 0;
              qmemcpy(aP0, (char *)g_WOL_ConnectionHandler + 268 * v38, sizeof(aP0));
              v40 = ValidateGameJoinWOL((BlowStraw *)aP0, v39, 0);
              LOBYTE(v41) = 0;
              v151[34] = v40;
              v35 = (void (__stdcall *)(HWND, BOOL))EnableWindow;
              v151[35] = ValidateGameJoinWOL((BlowStraw *)aP0, v41, 1);
            }
          }
          v42 = GetDlgItem(v4, 1774);
          v35(v42, 1);
          v43 = v151[34] || v151[35];
          v149 = (AnimClass *)v43;
          v44 = GetDlgItem(v4, 1581);
          v35(v44, (BOOL)v149);
          v45 = GetDlgItem(v4, 1579);
          v35(v45, 1);
          v46 = GetDlgItem(v4, 1673);
          v35(v46, 1);
          v47 = GetDlgItem(v4, 1672);
          v35(v47, 1);
          v48 = GetDlgItem(v4, 1955);
          v35(v48, 1);
          v49 = GetDlgItem(v4, 1958);
          v35(v49, 1);
          v50 = GetDlgItem(v4, 1567);
          v35(v50, 1);
          v51 = GetDlgItem(v4, 1474);
          v35(v51, 1);
          v52 = GetDlgItem(v4, 1670);
          v35(v52, 1);
          eax89i = GetDlgItem(v4, 1344);
          SetFocus(eax89i);
        }
      }
      if ( *(_DWORD *)a3 == 41 )
      {
        First = MultiplayerGameMode::GetFirst();
        *(_DWORD *)&HouseClass_Player.__pad_5568[8072] = First;
        *(_DWORD *)&HouseClass_Player.__pad_5568[10328] = 8;
        *(_DWORD *)&stru_830620.__pad_DFC[648] = 7;
        if ( First )
          (*(void (__thiscall **)(int))(*(_DWORD *)First + 36))(First);
        PtrVector::Destroy(&HouseClass_Player.__pad_5568[18368]);
        Game::ResetFlags();
        Network::InitPlayerSlots();
        v55 = __2_YAPAXI_Z(0x85u);
        v53 = (SkirmishDialog *)v55;
        if ( v55 )
          Waypoint::InitInvalid((_BYTE *)(v55 + 40));
        else
          v53 = 0;
        memset(v53, 0, 0x84u);
        v53[11].__pad_0[0] = 0;
        eax96 = CharToWideString(a4 + 36);
        wcscpy((wchar_t *)v53, (const wchar_t *)eax96);
        v58 = *((_DWORD *)a4 + 6);
        *(_DWORD *)&v151[24] = 0;
        *(_WORD *)&v151[40] = 0;
        v59 = ntohl(v58);
        v151[38] = BYTE1(v59);
        *(_WORD *)&v151[39] = (unsigned __int8)v59;
        v151[36] = HIBYTE(v59);
        v151[37] = BYTE2(v59);
        NetworkAddress::Assign(&v151[44], &v151[24], (IUnknown *)&v151[36], 0);
        v57 = *(AnimClass **)&v151[48];
        v53[3].SkirmishDialog_field_0x04 = *(_DWORD *)&v151[44];
        v61 = *(_DWORD *)&v151[52];
        v53[3].SkirmishDialog_field_0x08 = (int)v57;
        *(_DWORD *)v53[4].__pad_0 = v61;
        SessionClass::SetPlayerOption((int)v53, (SkirmishDialog *)0xFFFFFFFE);
        SessionClass::SetPlayerColor((int)v53, -2);
        SessionClass::SetOption((int)v53, (SessionClass *)0xFFFFFFFE);
        SessionClass::SetOption2((int)v53, (SessionClass *)0xFFFFFFFE);
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 3
          && *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 1
          && *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 2
          && *(&g_MatrixTransformState + 2222) )
        {
          SessionClass::SetPlayerOption((int)v53, (SkirmishDialog *)0xFFFFFFFD);
          *(int *)((char *)&v53[8].SkirmishDialog_field_0x08 + 3) = -1;
        }
        if ( *(int *)&HouseClass_Player.__pad_5568[18384] < *(int *)&HouseClass_Player.__pad_5568[18376]
          || (HouseClass_Player.__pad_5568[18381] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18376])
          && *(int *)&HouseClass_Player.__pad_5568[18388] > 0
          && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368] + 8))(
               &HouseClass_Player.__pad_5568[18368],
               *(_DWORD *)&HouseClass_Player.__pad_5568[18376] + *(_DWORD *)&HouseClass_Player.__pad_5568[18388],
               0) )
        {
          v62 = (*(_DWORD *)&HouseClass_Player.__pad_5568[18384])++;
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v62) = v53;
        }
        *(_WORD *)&HouseClass_Player.__pad_5568[17244] = 0;
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 3
          && *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 1
          && *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 2 )
        {
          Screen::Capture(1, 0, 0, (int)v4);
          LoadingScreen::Init();
          DialogIndirect = (CoordStruct *)CreateDialogIndirect(
                                            g_hInstance,
                                            (HWND)0xC9,
                                            g_hWnd,
                                            (DLGPROC)WOLobby::ChatDlgProc,
                                            0);
          SetupDialog(DialogIndirect, 201);
          v64 = (HWND)Dialog::FindByHandle((void *)0x113);
          edi110 = (SkirmishDialog *)v64;
          if ( v64 )
          {
            ShowWindow(v64, 0);
            Dialog::InitWindow(edi110, 0);
          }
          SendMessageA((HWND)DialogIndirect, 0x4A9u, 0, 1);
          ShowWindow((HWND)DialogIndirect, 1);
          memset(dword_B76440, 0xFFu, 0x20u);
          if ( *((_DWORD *)a4 + 5) && !strlen(a4 + 87) )
          {
            dword_B77DDC = (CChatEventSink *)((char *)dword_B77DDC + 1);
            (*(void (__stdcall **)(_DWORD, _DWORD))((*(&g_MatrixTransformState + 2263))->X + 176))(
              *(&g_MatrixTransformState + 2263),
              *((_DWORD *)a4 + 5));
          }
        }
      }
    }
    v84 = a4;
    qmemcpy(&v151[164], a4, 0x6Cu);
    v85 = a3;
    v86 = 0;
    *(_DWORD *)&v151[196] = 0;
    if ( !*(_DWORD *)a3 )
    {
      switch ( dword_B77E48 )
      {
        case 1:
          InsertGameSettings(&v151[164], 0);
          break;
        case 2:
          InsertBuddyList(&v151[164], 1);
          break;
        case 3:
          InsertBuddyList(&v151[164], 0);
          break;
        case 4:
          FindBuddyList((int)&v151[164], 1);
          break;
        case 5:
          FindBuddyList((int)&v151[164], 0);
          break;
        default:
          InsertGameSettings(&v151[164], 1);
          break;
      }
LABEL_217:
      if ( (BYTE1(*(_DWORD *)v84) & 0x80u) == 0
        && !*(_DWORD *)v85
        && (*(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 3
         || *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 1
         || *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 2) )
      {
        String::Assign((char **)&v151[20], v84 + 36);
        v97 = (WinModemClass *)g_WOL_ConnectionToken;
        v98 = (BlowStraw *)g_WOL_ConnectionToken;
        if ( g_WOL_ConnectionToken >= (int)dword_B76AD4 )
        {
          DynamicVector::EnsureCapacity(&g_WOL_ConnectionToken);
          v97 = (WinModemClass *)g_WOL_ConnectionToken;
        }
        if ( (int)v97 >= (int)dword_B76AD4 )
        {
          DynamicVector::EnsureCapacity(&g_WOL_ConnectionToken);
          v97 = (WinModemClass *)g_WOL_ConnectionToken;
        }
        if ( (int)v98 < (int)v97 )
        {
          memcpy(
            &g_WOL_ObjectState->__pad_0[4 * (_DWORD)v98 + 4],
            (AbstractClass *)((char *)g_WOL_ObjectState + 4 * (_DWORD)v98),
            4 * ((_DWORD)v97 + 0x3FFFFFFF * (_DWORD)v98));
          v97 = (WinModemClass *)g_WOL_ConnectionToken;
        }
        v102 = (char **)((char *)g_WOL_ObjectState + 4 * (_DWORD)v98);
        if ( v102 )
        {
          String::AssignFromPtr(v102, (const char **)&v151[20]);
          v97 = (WinModemClass *)g_WOL_ConnectionToken;
        }
        g_WOL_ConnectionToken = (int)&v97->__pad_0[1];
        if ( !g_WOL_LoginPool )
          ProcessPingRequestsWOL();
        DeleteAndZero((int)&v151[20]);
      }
      *(_DWORD *)&v151[36] = g_WOL_State;
      if ( *(_DWORD *)v85 )
      {
        *(_DWORD *)&v151[20] = a4 + 36;
        String::Assign((char **)&v151[24], a4 + 36);
        v103 = g_WOL_State;
        v104 = 0;
        v105 = 0;
        if ( (int)g_WOL_State <= 0 )
        {
LABEL_241:
          *(_DWORD *)&v151[16] = -1;
        }
        else
        {
          edi235 = 0;
          while ( 1 )
          {
            if ( edi235 >= 0 && v105 < v103 )
              v104 = &g_WOL_ConnectionFlags[edi235];
            eax239 = String::GetOrEmpty_Alt((char **)&v151[24]);
            if ( !_strcmpi(eax239, &v104[1]) )
              break;
            v103 = g_WOL_State;
            ++v105;
            edi235 += 3;
            if ( v105 >= (int)g_WOL_State )
              goto LABEL_241;
          }
          *(_DWORD *)&v151[16] = v105;
        }
        DeleteAndZero((int)&v151[24]);
        v108 = 148 * *(_DWORD *)&v151[16];
        v106 = (AbstractClass *)(&g_WOL_LoginObject.referenceCount + 37 * *(_DWORD *)&v151[16]);
        memcpy((char *)&unk_B76ED4 + 148 * *(_DWORD *)&v151[16], v106, 2220 - 148 * *(_DWORD *)&v151[16]);
        memset(v106, 0, 0x94u);
        v107 = dword_B77E4C;
        strcpy(v106->__pad_0, *(const char **)&v151[20]);
        if ( v107 == (ObjectClass *)1 )
        {
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 3
            && *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 1
            && *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 2 )
          {
            SessionClass::BuildLaunchString();
          }
          if ( NetworkLobby::CheckMinPlayers() && GameOption::CheckDuplicate() )
          {
            String::Assign((char **)&v151[24], *(const char **)&v151[20]);
            v111 = g_WOL_State;
            v112 = 0;
            v113 = 0;
            *(_DWORD *)&v151[56] = 0;
            if ( (int)g_WOL_State > 0 )
            {
              while ( 1 )
              {
                if ( v112 >= 0 && v113 < v111 )
                  qmemcpy(&v151[56], &g_WOL_ConnectionFlags[v112], 0x6Cu);
                v114 = String::GetOrEmpty_Alt((char **)&v151[24]);
                if ( !_strcmpi(v114, &v151[92]) )
                  break;
                v111 = g_WOL_State;
                ++v113;
                v112 += 3;
                if ( v113 >= (int)g_WOL_State )
                  goto LABEL_255;
              }
              (*(void (__stdcall **)(_DWORD, _BYTE *))((*(&g_MatrixTransformState + 2263))->X + 84))(
                *(&g_MatrixTransformState + 2263),
                &v151[56]);
            }
LABEL_255:
            DeleteAndZero((int)&v151[24]);
          }
          else
          {
            v115 = *(_DWORD *)&v151[16];
            v116 = *(_DWORD *)&v151[36];
            v117 = 0;
            do
            {
              v118 = 0;
              v119 = 0;
              *(void **)((char *)&g_WOL_LoginObject.nextObject + v108) = v117;
              if ( v116 <= 0 )
                break;
              p_nextObject = &g_WOL_LoginObject.nextObject;
              do
              {
                if ( v119 != v115 && *p_nextObject == v117 )
                {
                  ++v117;
                  v118 = 1;
                }
                ++v119;
                p_nextObject += 37;
              }
              while ( v119 < v116 );
            }
            while ( v118 );
            v121 = __2_YAPAXI_Z(0x85u);
            v122 = v121;
            if ( v121 )
              Waypoint::InitInvalid((_BYTE *)(v121 + 40));
            else
              v122 = 0;
            memset((void *)v122, 0, 0x84u);
            v123 = *(_BYTE **)&v151[20];
            *(_BYTE *)(v122 + 132) = 0;
            v124 = CharToWideString(v123);
            wcscpy((wchar_t *)v122, (const wchar_t *)v124);
            *(_DWORD *)&v151[36] = 0;
            v125 = *((_DWORD *)a4 + 6);
            *(_DWORD *)&v151[24] = 0;
            *(_WORD *)&v151[28] = 0;
            v126 = ntohl(v125);
            v151[26] = BYTE1(v126);
            v151[27] = v126;
            v151[24] = HIBYTE(v126);
            v151[25] = BYTE2(v126);
            NetworkAddress::Assign(&v151[44], &v151[36], (IUnknown *)&v151[24], 0);
            v127 = *(_DWORD *)&v151[48];
            *(_DWORD *)(v122 + 40) = *(_DWORD *)&v151[44];
            v128 = *(_DWORD *)&v151[52];
            *(_DWORD *)(v122 + 44) = v127;
            *(_DWORD *)(v122 + 48) = v128;
            if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
            {
              v149 = (AnimClass *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 40))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
              SessionClass::SetPlayerOption(v122, (SkirmishDialog *)v149);
            }
            else
            {
              SessionClass::SetPlayerOption(v122, (SkirmishDialog *)0xFFFFFFFE);
            }
            SessionClass::SetPlayerColor(v122, -2);
            SessionClass::SetOption(v122, (SessionClass *)0xFFFFFFFE);
            SessionClass::SetOption2(v122, (SessionClass *)0xFFFFFFFE);
            v129 = *(_DWORD *)&HouseClass_Player.__pad_5568[8080];
            if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 3
              && *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 1
              && *(_DWORD *)&HouseClass_Player.__pad_5568[8080] != 2 )
            {
              if ( NetworkLobby::CheckMinPlayers() )
              {
                SessionClass::SetPlayerOption(v122, (SkirmishDialog *)0xFFFFFFFD);
                SessionClass::SetPlayerColor(v122, -2);
                *(_DWORD *)(v122 + 107) = -1;
              }
              v129 = *(_DWORD *)&HouseClass_Player.__pad_5568[8080];
            }
            if ( (BYTE1(*(_DWORD *)a4) & 0x80u) != 0
              && v129 != 3
              && v129 != 1
              && v129 != 2
              && *(&g_MatrixTransformState + 2222) )
            {
              SessionClass::SetPlayerOption(v122, (SkirmishDialog *)0xFFFFFFFD);
              SessionClass::SetPlayerColor(v122, -2);
              *(_DWORD *)(v122 + 107) = -1;
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
              v130 = (*(_DWORD *)&HouseClass_Player.__pad_5568[18384])++;
              *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v130) = v122;
            }
            NetworkLobby::AssignPlayerSlot(v122);
            if ( (*(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 3
               || *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 1
               || *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 2)
              && *(_DWORD *)a3 )
            {
              if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 3 )
              {
                v131 = strchr(Destination, 58);
                Game::SetupWOLTournament(v131);
              }
              else
              {
                SetupNetworkLobbyDialog((INIClass *)Destination, 0);
              }
              v132 = 0;
              if ( *(int *)&HouseClass_Player.__pad_5568[9764] > 0 )
              {
                while ( _strcmpi(
                          &HouseClass_Player.__pad_5568[9772],
                          (const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v132) + 88)) )
                {
                  if ( ++v132 >= *(int *)&HouseClass_Player.__pad_5568[9764] )
                    goto LABEL_303;
                }
                LoadScenarioClassByIndex(v132);
              }
LABEL_303:
              if ( v132 >= *(int *)&HouseClass_Player.__pad_5568[9764] )
                LoadScenarioClassByIndex(0);
            }
            Game::ResetReadyStates();
            Event_Handle();
            v133 = stru_830620.__pad_DFC[648];
            v151[16] = 79;
            if ( *(int *)&stru_830620.__pad_DFC[648] < 0 )
              v133 = 8;
            *(_WORD *)&v151[17] = (unsigned __int8)(v133 + 48);
            Debug::Log();
            (*(void (__stdcall **)(_DWORD, _BYTE *))((*(&g_MatrixTransformState + 2263))->X + 60))(
              *(&g_MatrixTransformState + 2263),
              &v151[16]);
            Lobby::BuildPlayerList();
            CheckGameSettingsChanged(1, 0);
            if ( Settings::CheckString() )
            {
              Event_Handle_7A0F40();
              if ( !g_NetworkLobbyState )
              {
                v134 = 0;
                memset(&v151[56], 0, 0x6Cu);
                v135 = g_WOL_State;
                v136 = 0;
                *(_DWORD *)&v151[36] = g_WOL_State;
                for ( *(_DWORD *)&v151[24] = 0; v136 < v135; v134 += 3 )
                {
                  if ( v134 >= 0 && v136 < (int)g_WOL_State )
                  {
                    qmemcpy(&v151[56], &g_WOL_ConnectionFlags[v134], 0x6Cu);
                    v135 = *(_DWORD *)&v151[36];
                  }
                  v137 = *(struct in_addr *)&v151[80];
                  ntoainet(*(struct in_addr *)&v151[80]);
                  Debug::Log();
                  *(_DWORD *)&v151[20] = (*(&g_MatrixTransformState + 2264))->X;
                  v138 = ntoainet(v137);
                  (*(void (__stdcall **)(_DWORD, char *, int, _BYTE *))(*(_DWORD *)&v151[20] + 24))(
                    *(&g_MatrixTransformState + 2264),
                    v138,
                    1000,
                    &v151[24]);
                  ++v136;
                }
              }
            }
          }
        }
        else if ( (BYTE1(*(_DWORD *)a4) & 0x80u) == 0 )
        {
          v139 = __2_YAPAXI_Z(0x85u);
          v140 = v139;
          if ( v139 )
            Waypoint::InitInvalid((_BYTE *)(v139 + 40));
          else
            v140 = 0;
          memset((void *)v140, 0, 0x84u);
          v141 = *(_BYTE **)&v151[20];
          *(_BYTE *)(v140 + 132) = 0;
          eax319 = CharToWideString(v141);
          wcscpy((wchar_t *)v140, (const wchar_t *)eax319);
          v143 = *((_DWORD *)a4 + 6);
          *(_DWORD *)&v151[36] = 0;
          *(_DWORD *)&v151[24] = 0;
          *(_WORD *)&v151[28] = 0;
          eax319a = ntohl(v143);
          v151[26] = BYTE1(eax319a);
          v151[27] = eax319a;
          v151[24] = HIBYTE(eax319a);
          v151[25] = BYTE2(eax319a);
          NetworkAddress::Assign(&v151[44], &v151[36], (IUnknown *)&v151[24], 0);
          v142 = *(AnimClass **)&v151[48];
          *(_DWORD *)(v140 + 40) = *(_DWORD *)&v151[44];
          v146 = *(_DWORD *)&v151[52];
          *(_DWORD *)(v140 + 44) = v142;
          *(_DWORD *)(v140 + 48) = v146;
          SessionClass::SetPlayerOption(v140, (SkirmishDialog *)0xFFFFFFFE);
          SessionClass::SetPlayerColor(v140, -2);
          SessionClass::SetOption(v140, (SessionClass *)0xFFFFFFFE);
          SessionClass::SetOption2(v140, (SessionClass *)0xFFFFFFFE);
          if ( *(int *)&HouseClass_Player.__pad_5568[18384] < *(int *)&HouseClass_Player.__pad_5568[18376]
            || (HouseClass_Player.__pad_5568[18381] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18376])
            && *(int *)&HouseClass_Player.__pad_5568[18388] > 0
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368]
                                                                      + 8))(
                 &HouseClass_Player.__pad_5568[18368],
                 *(_DWORD *)&HouseClass_Player.__pad_5568[18376] + *(_DWORD *)&HouseClass_Player.__pad_5568[18388],
                 0) )
          {
            v144 = (ObjectClass *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18384])++;
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * (_DWORD)v144) = v140;
          }
          v148 = (HWND)Dialog::FindByHandle((void *)0xC9);
          EnablePlayerSlotControls(v148, 1);
          Game::ResetReadyStates();
        }
      }
      SetEvent(dword_B73694);
      DisplayRankingsWOL(0, 0);
      return 0;
    }
    v87 = g_WOL_State;
    *(_DWORD *)&v151[20] = g_WOL_State;
    if ( (int)g_WOL_State <= 0 )
    {
      ebx198 = *(_DWORD *)&v151[20];
      v91 = g_WOL_State;
    }
    else
    {
      *(_DWORD *)&v151[28] = &v151[56];
      *(_DWORD *)&v151[24] = a4;
      v88 = 0;
      while ( 1 )
      {
        if ( v88 >= 0 && v86 < v87 )
          qmemcpy(&v151[56], &g_WOL_ConnectionFlags[v88], 0x6Cu);
        v89 = 0;
        *(_DWORD *)&v151[36] = 0;
        *(_DWORD *)&v151[40] = 0;
        do
        {
          v90 = **(_DWORD **)&v151[v89 + 24];
          if ( (v90 & 1) != 0 )
            *(_DWORD *)&v151[v89 + 36] += 4;
          if ( (v90 & 2) != 0 )
            *(_DWORD *)&v151[v89 + 36] += 2;
          v89 += 4;
        }
        while ( v89 < 8 );
        if ( *(int *)&v151[36] >= *(int *)&v151[40]
          && (*(int *)&v151[36] > *(int *)&v151[40] || _strcmpi(a4 + 36, &v151[92]) < 0) )
        {
          v91 = g_WOL_State;
          ebx198 = v86;
          goto LABEL_201;
        }
        v91 = g_WOL_State;
        ++v86;
        v88 += 3;
        if ( v86 >= (int)g_WOL_State )
          break;
        v87 = g_WOL_State;
      }
      ebx198 = *(_DWORD *)&v151[20];
    }
LABEL_201:
    if ( ebx198 > v91 )
      ebx198 = v91;
    v93 = g_WOL_StateFlags;
    if ( ebx198 >= g_WOL_StateFlags )
    {
      if ( v91 < g_WOL_StateFlags )
      {
LABEL_212:
        if ( ebx198 < v91 )
        {
          memcpy(&g_WOL_ConnectionFlags[3 * ebx198 + 3], &g_WOL_ConnectionFlags[3 * ebx198], 108 * v91 - 108 * ebx198);
          v91 = g_WOL_State;
        }
        v99 = &g_WOL_ConnectionFlags[3 * ebx198];
        if ( v99 )
        {
          qmemcpy(v99, &v151[164], 0x6Cu);
          v91 = g_WOL_State;
        }
        v84 = a4;
        v85 = a3;
        g_WOL_State = v91 + 1;
        goto LABEL_217;
      }
      v94 = 2 * v91;
      if ( 2 * v91 < 10 )
        v94 = 10;
      *(_DWORD *)&v151[20] = __2_YAPAXI_Z(108 * v94);
      memset(*(void **)&v151[20], 0, 4 * ((unsigned int)(108 * v94) >> 2));
      v92 = (ObjectClass *)g_WOL_ConnectionFlags;
      if ( g_WOL_ConnectionFlags )
      {
        v96 = *(_DWORD *)&v151[20];
        al208 = 108 * g_WOL_State;
        ecx208 = (108 * g_WOL_State) >> 2;
        qmemcpy(*(void **)&v151[20], g_WOL_ConnectionFlags, 4 * ecx208);
        qmemcpy((void *)(v96 + 4 * ecx208), (char *)v92 + 4 * ecx208, al208 & 3);
        v92 = (ObjectClass *)g_WOL_ConnectionFlags;
      }
      __3_YAXPAX_Z(v92);
      v93 = v94;
      g_WOL_ConnectionFlags = *(AbstractClass **)&v151[20];
      v91 = g_WOL_State;
      g_WOL_StateFlags = v94;
    }
    if ( v91 >= v93 )
    {
      DynamicArray::Grow(&g_WOL_State);
      v91 = g_WOL_State;
    }
    goto LABEL_212;
  }
  return 0;
}



// ==== 0x007A70E0  CChatEventSink::Disconnect  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt11(int a1, int a2, int a3, const char *a4)
{
  if ( a2 >= 0 ) /*0x7a70e6*/
    LeaveChannelWOL(a4); /*0x7a70fe*/
  else
    Debug::Log(); /*0x7a70ed*/
  return 0; /*0x7a70f7*/
}


// ==== 0x007A7110  CChatEventSink::HandleChannelJoin  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::vt_15_(int a1, int a2, int a3, const char *a4)
{
  HWND Current; // eax
  int v5; // edx
  const char *v6; // ebp
  int v7; // esi
  int v8; // ebx
  int v9; // esi
  int v10; // esi
  _DWORD *v11; // esi
  int v12; // esi
  signed int v13; // eax
  char *v14; // ebp
  signed int v15; // esi
  int v16; // edi
  char *v17; // eax
  int v18; // eax
  void *v19; // edx
  char *v20; // eax
  char *v21; // eax
  _BYTE *v22; // eax
  int v23; // esi
  wchar_t *v24; // eax
  u_long v25; // edx
  u_long v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  signed int v30; // ebx
  int v31; // ebp
  char *v32; // eax
  char *v33; // eax
  HWND v34; // eax
  _DWORD *v35; // eax
  int v36; // eax
  int PlayerSide; // eax
  int PlayerOption; // eax
  int v40; // [esp+74h] [ebp-154h]
  void **v41; // [esp+80h] [ebp-148h]
  int PlayerColor; // [esp+84h] [ebp-144h]
  int v43; // [esp+84h] [ebp-144h]
  int v44; // [esp+88h] [ebp-140h]
  const char *v45; // [esp+9Ch] [ebp-12Ch] BYREF
  __int16 v46; // [esp+A2h] [ebp-126h] BYREF
  void **v47; // [esp+A4h] [ebp-124h] BYREF
  __int16 v48; // [esp+A8h] [ebp-120h]
  void **v49; // [esp+ACh] [ebp-11Ch] BYREF
  int v50; // [esp+B0h] [ebp-118h]
  int v51; // [esp+B4h] [ebp-114h]
  char *v52; // [esp+B8h] [ebp-110h] BYREF
  void *v53; // [esp+BCh] [ebp-10Ch] BYREF
  int v54; // [esp+C0h] [ebp-108h]
  void *v55; // [esp+C4h] [ebp-104h] BYREF
  char v56; // [esp+C8h] [ebp-100h]
  void *v57; // [esp+CCh] [ebp-FCh] BYREF
  _DWORD v58[3]; // [esp+D0h] [ebp-F8h] BYREF
  _DWORD v59[27]; // [esp+DCh] [ebp-ECh] BYREF
  char Buffer[128]; // [esp+148h] [ebp-80h] BYREF

  if ( !g_NetworkLobby_Init ) /*0x7a7121*/
  {
    memset(byte_B78620, 0, sizeof(byte_B78620)); /*0x7a7133*/
    unknown_libname_73(&v45); /*0x7a7139*/
    if ( a2 >= 0 ) /*0x7a7145*/
    {
      Current = Dialog::GetCurrent(); /*0x7a7159*/
      SendDlgItemMessageA(Current, 1342, 0x184u, 0, 0); /*0x7a715f*/
      g_WOL_State = 0; /*0x7a7165*/
      v51 = 0; /*0x7a7172*/
      v54 = 0; /*0x7a7178*/
      for ( LOBYTE(v46) = 0; a4; a4 = (const char *)*((_DWORD *)a4 + 8) ) /*0x7a7181*/
      {
        v5 = *((_DWORD *)a4 + 5); /*0x7a7193*/
        ++v54; /*0x7a7196*/
        if ( !v5 || strlen(a4 + 87) ) /*0x7a71a1*/
        {
          if ( MEMORY[0xAC1170] ) /*0x7a71d8*/
          {
            if ( v5 ) /*0x7a71e0*/
            {
              v6 = a4 + 87; /*0x7a71e6*/
              if ( strlen(a4 + 87) ) /*0x7a71f0*/
              {
                String::Assign((char **)&v53, v6); /*0x7a71fc*/
                String::ToLower((const char **)&v53); /*0x7a7205*/
                v7 = *((_DWORD *)g_WOL_ListParser + (dword_B768D8(&v53) & ((1 << dword_B768CC) - 1))); /*0x7a7229*/
                if ( v7 ) /*0x7a722e*/
                {
                  while ( !String::Compare((const char **)v7, (const char **)&v53) ) /*0x7a723e*/
                  {
                    v7 = *(_DWORD *)(v7 + 112); /*0x7a7240*/
                    if ( !v7 ) /*0x7a7245*/
                      goto LABEL_13; /*0x7a7245*/
                  }
                }
                else
                {
LABEL_13:
                  (*(void (__stdcall **)(LPVOID, char *, int, const char *, int **, int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0xAC1170] + 20))( /*0x7a7247*/
                    MEMORY[0xAC1170],
                    g_WOL_ConnectFlag,
                    g_WOL_GameConfig,
                    v6,
                    &unk_802100,
                    -1,
                    0,
                    0);
                }
                DeleteAndZero(&v53); /*0x7a726e*/
              }
            }
          }
        }
        else
        {
          ++dword_B77DDC; /*0x7a71b9*/
          (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)MEMORY[0xAC116C] + 176))( /*0x7a71c6*/
            MEMORY[0xAC116C],
            *((_DWORD *)a4 + 5));
        }
        v52 = Buffer; /*0x7a7289*/
        v8 = *(_DWORD *)a4; /*0x7a728f*/
        strcpy(Buffer, a4 + 36); /*0x7a72a2*/
        qmemcpy(v59, a4, sizeof(v59)); /*0x7a72bb*/
        v59[8] = 0; /*0x7a72bf*/
        if ( g_WOL_ProcessIdle ) /*0x7a72c7*/
        {
          DynamicClass::Insert((int *)&g_WOL_State, v59, g_WOL_State); /*0x7a7346*/
        }
        else
        {
          switch ( dword_B77E48 ) /*0x7a72d1*/
          {
            case 1: /*0x7a72d1*/
              InsertGameSettings(v59, 0); /*0x7a72d9*/
              break;
            case 2: /*0x7a72d1*/
              InsertBuddyList((const char *)v59, 1); /*0x7a72eb*/
              break;
            case 3: /*0x7a72d1*/
              InsertBuddyList((const char *)v59, 0); /*0x7a72fd*/
              break;
            case 4: /*0x7a72d1*/
              FindBuddyList((int)v59, 1); /*0x7a730f*/
              break;
            case 5: /*0x7a72d1*/
              FindBuddyList((int)v59, 0); /*0x7a7321*/
              break;
            default:
              InsertGameSettings(v59, 1); /*0x7a732e*/
              break;
          }
        }
        if ( (v8 & 1) != 0 ) /*0x7a734e*/
          LOBYTE(v46) = 1; /*0x7a7350*/
        String::Assign_Bool((void **)&v45, a4 + 36); /*0x7a735a*/
        String::ToLower(&v45); /*0x7a7363*/
        if ( MEMORY[0xA8B238][0] == 4 && MEMORY[0xA8B244] == 3 ) /*0x7a7378*/
        {
          v9 = *((_DWORD *)g_WOL_MessageQueue + (dword_B76698(&v45) & ((1 << dword_B7668C) - 1))); /*0x7a7399*/
          if ( v9 ) /*0x7a739e*/
          {
            while ( !String::Compare((const char **)v9, &v45) ) /*0x7a73ae*/
            {
              v9 = *(_DWORD *)(v9 + 8); /*0x7a73b0*/
              if ( !v9 ) /*0x7a73b5*/
                goto LABEL_35; /*0x7a73b5*/
            }
          }
          else
          {
LABEL_35:
            StringVector::Insert(&g_WOL_ChatPool, &v45, 0); /*0x7a73b7*/
          }
        }
        v10 = *((_DWORD *)g_WOL_ConnectionPool + (dword_B76548(&v45) & ((1 << dword_B7653C) - 1))); /*0x7a73e7*/
        if ( v10 ) /*0x7a73ec*/
        {
          while ( !String::Compare((const char **)v10, &v45) ) /*0x7a73fc*/
          {
            v10 = *(_DWORD *)(v10 + 8); /*0x7a73fe*/
            if ( !v10 ) /*0x7a7403*/
              goto LABEL_39; /*0x7a7403*/
          }
        }
        else
        {
LABEL_39:
          StringVector::Insert(&g_WOL_LoginToken, &v45, 0); /*0x7a7405*/
        }
        v11 = (_DWORD *)g_WOL_HashTable; /*0x7a7416*/
        v12 = *(_DWORD *)(*v11 /*0x7a7432*/
                        + 4
                        * ((*(int (__thiscall **)(const char **))(g_WOL_HashTable + 24))(&v45) & ((1 << v11[3]) - 1)));
        if ( v12 ) /*0x7a7437*/
        {
          while ( !String::Compare((const char **)v12, &v45) ) /*0x7a7447*/
          {
            v12 = *(_DWORD *)(v12 + 112); /*0x7a744d*/
            if ( !v12 ) /*0x7a7452*/
              goto LABEL_43; /*0x7a7452*/
          }
        }
        else
        {
LABEL_43:
          if ( v54 < 100 ) /*0x7a7459*/
          {
            String::Assign_Bool((void **)&v45, a4 + 36); /*0x7a746e*/
            String::ToLower(&v45); /*0x7a7477*/
            strcat(byte_B78620, String::GetOrEmpty((char **)&v45)); /*0x7a74a6*/
            strcat(byte_B78620, MEMORY[0x8318B8]); /*0x7a74d1*/
            ++v51; /*0x7a74df*/
          }
        }
        if ( v51 > 20 ) /*0x7a74e8*/
        {
          (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0xAC1170] + 20))( /*0x7a7516*/
            MEMORY[0xAC1170],
            g_WOL_ConnectFlag,
            g_WOL_GameConfig,
            byte_B78620,
            g_NetworkRematchState & 0xFFFF00,
            -1,
            0,
            0);
          (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(_DWORD *)MEMORY[0xAC1170] + 56))( /*0x7a753f*/
            MEMORY[0xAC1170],
            g_WOL_ConnectFlag,
            g_WOL_GameConfig,
            byte_B78620,
            g_NetworkRematchState & 0xFFFF00);
          v51 = 0; /*0x7a754e*/
          memset(byte_B78620, 0, sizeof(byte_B78620)); /*0x7a7556*/
        }
        if ( g_WOL_ProcessIdle && !dword_B77E4C ) /*0x7a756c*/
        {
          String::Assign((char **)&v49, a4 + 36); /*0x7a7581*/
          v13 = g_WOL_State; /*0x7a7586*/
          v14 = 0; /*0x7a758b*/
          v15 = 0; /*0x7a758d*/
          if ( (int)g_WOL_State <= 0 ) /*0x7a7591*/
          {
LABEL_56:
            v18 = -1; /*0x7a75d0*/
          }
          else
          {
            v16 = 0; /*0x7a7593*/
            while ( 1 ) /*0x7a7595*/
            {
              if ( v16 >= 0 && v15 < v13 ) /*0x7a759b*/
                v14 = (char *)g_WOL_ConnectionFlags + v16; /*0x7a75a2*/
              v17 = String::GetOrEmpty_Alt((char **)&v49); /*0x7a75ad*/
              if ( !_strcmpi(v17, v14 + 36) ) /*0x7a75b3*/
                break; /*0x7a75b3*/
              v13 = g_WOL_State; /*0x7a75c3*/
              ++v15; /*0x7a75c8*/
              v16 += 108; /*0x7a75c9*/
              if ( v15 >= (int)g_WOL_State ) /*0x7a75ce*/
                goto LABEL_56; /*0x7a75ce*/
            }
            v18 = v15; /*0x7a7662*/
          }
          v19 = (void *)(148 * v18 + 12021312); /*0x7a75e1*/
          memset(v19, 0, 0x94u); /*0x7a75ec*/
          strcpy((char *)v19, a4 + 36); /*0x7a7602*/
          v20 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a7610*/
          if ( _strcmpi(a4 + 36, v20) ) /*0x7a7617*/
          {
            if ( MEMORY[0xA8DA84] == 1 ) /*0x7a762e*/
            {
              v21 = CharToWideString((_BYTE *)a4 + 36); /*0x7a7632*/
              wcscpy(MEMORY[0xA8D610], (const wchar_t *)v21); /*0x7a763d*/
            }
            v22 = __2_YAPAXI_Z(0x85u); /*0x7a764a*/
            v23 = (int)v22; /*0x7a764f*/
            if ( v22 ) /*0x7a7656*/
              Waypoint::InitInvalid(v22 + 40); /*0x7a765b*/
            else
              v23 = 0; /*0x7a7669*/
            memset((void *)v23, 0, 0x84u); /*0x7a7675*/
            *(_BYTE *)(v23 + 132) = 0; /*0x7a767b*/
            String::Assign((char **)&v57, a4 + 36); /*0x7a767c*/
            CharStringToWide((wchar_t **)&v55, (const char **)&v57); /*0x7a7689*/
            DeleteAndZero(&v57); /*0x7a7692*/
            v24 = WideString::GetOrEmpty((wchar_t **)&v55); /*0x7a769b*/
            wcscpy((wchar_t *)v23, v24); /*0x7a76a2*/
            v25 = *((_DWORD *)a4 + 6); /*0x7a76a7*/
            v52 = 0; /*0x7a76af*/
            v47 = 0; /*0x7a76b7*/
            v48 = 0; /*0x7a76bc*/
            v26 = ntohl(v25); /*0x7a76c1*/
            HIBYTE(v47) = v26; /*0x7a76ca*/
            LOBYTE(v47) = HIBYTE(v26); /*0x7a76d6*/
            BYTE2(v47) = BYTE1(v26); /*0x7a76da*/
            BYTE1(v47) = BYTE2(v26); /*0x7a76ef*/
            NetworkAddress::Assign(v58, &v52, (int)&v47, 0); /*0x7a76f3*/
            v27 = v58[1]; /*0x7a7701*/
            *(_DWORD *)(v23 + 40) = v58[0]; /*0x7a7705*/
            v28 = v58[2]; /*0x7a7707*/
            *(_DWORD *)(v23 + 44) = v27; /*0x7a770b*/
            *(_DWORD *)(v23 + 48) = v28; /*0x7a7710*/
            SessionClass::SetPlayerOption(v23, -2); /*0x7a7713*/
            SessionClass::SetPlayerColor(v23, -2); /*0x7a771c*/
            SessionClass::SetOption(v23, -2); /*0x7a7725*/
            SessionClass::SetOption2(v23, -2); /*0x7a772e*/
            if ( MEMORY[0xA8DA84] < MEMORY[0xA8DA7C] /*0x7a776a*/
              || (MEMORY[0xA8DA81] || !MEMORY[0xA8DA7C])
              && MEMORY[0xA8DA88] > 0
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8DA74] + 8))(
                   &MEMORY[0xA8DA74],
                   MEMORY[0xA8DA7C] + MEMORY[0xA8DA88],
                   0) )
            {
              v29 = MEMORY[0xA8DA84]++; /*0x7a7777*/
              *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v29) = v23; /*0x7a7786*/
            }
            DeleteAndZero::Alt(&v55); /*0x7a778d*/
          }
          DeleteAndZero((void **)&v49); /*0x7a7796*/
        }
      }
      if ( strlen(byte_B78620) ) /*0x7a77b9*/
      {
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0xAC1170] + 20))( /*0x7a77f1*/
          MEMORY[0xAC1170],
          g_WOL_ConnectFlag,
          g_WOL_GameConfig,
          byte_B78620,
          g_NetworkRematchState & 0xFFFF00,
          -1,
          0,
          0);
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(_DWORD *)MEMORY[0xAC1170] + 56))( /*0x7a781a*/
          MEMORY[0xAC1170],
          g_WOL_ConnectFlag,
          g_WOL_GameConfig,
          byte_B78620,
          g_NetworkRematchState & 0xFFFF00);
      }
      if ( g_WOL_ProcessIdle ) /*0x7a7824*/
      {
        if ( !(_BYTE)v46 ) /*0x7a7830*/
        {
          v30 = 0; /*0x7a7837*/
          if ( (int)g_WOL_State > 0 ) /*0x7a783b*/
          {
            v31 = 0; /*0x7a783d*/
            while ( 1 ) /*0x7a7841*/
            {
              if ( v31 >= 0 && v30 < (int)g_WOL_State ) /*0x7a7849*/
              {
                qmemcpy(v59, (char *)g_WOL_ConnectionFlags + v31, sizeof(v59)); /*0x7a785c*/
                v32 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a7863*/
                if ( !_strcmpi(&v59[9], v32) ) /*0x7a786e*/
                  break; /*0x7a786e*/
              }
              ++v30; /*0x7a787f*/
              v31 += 108; /*0x7a7880*/
              if ( v30 >= (int)g_WOL_State ) /*0x7a7885*/
                goto LABEL_85; /*0x7a7885*/
            }
            LeaveChannelWOL((const char *)v59); /*0x7a788d*/
          }
        }
LABEL_85:
        if ( g_WOL_ProcessIdle ) /*0x7a7899*/
        {
          if ( !dword_B77E4C && g_WOL_State == 1 ) /*0x7a78af*/
          {
            v33 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a78b6*/
            if ( !_strcmpi(a4 + 36, v33) ) /*0x7a78c7*/
              LeaveChannelWOL(a4); /*0x7a78d5*/
          }
          if ( g_WOL_ProcessIdle ) /*0x7a78e1*/
          {
            MEMORY[0xAC1178] = 1; /*0x7a78ec*/
            if ( !dword_B77E4C ) /*0x7a78f8*/
            {
              v34 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x7a78ff*/
              EnablePlayerSlotControls(v34, 1u); /*0x7a7908*/
            }
            Game::ResetReadyStates(); /*0x7a790d*/
            v55 = 0; /*0x7a7916*/
            v56 = 0; /*0x7a791e*/
            ReadRegistryOptionsWOL(&v55); /*0x7a7923*/
            ComPtr::Constructor(&v49); /*0x7a792c*/
            v49 = &vt_rc_ptr_PlayerProfile; /*0x7a793a*/
            if ( Flag::IsNot2(&v55) ) /*0x7a793e*/
            {
              v35 = LoadPlayerProfile(&v47, (const char **)&g_WebBrowser); /*0x7a7950*/
              ComPtr::Set(&v49, v35[1]); /*0x7a795d*/
              v47 = &vt_rc_ptr_PlayerProfile; /*0x7a7966*/
              ComPtr::Release(&v47); /*0x7a796a*/
            }
            else
            {
              ComPtr::Set(&v49, dword_B75E4C); /*0x7a797c*/
            }
            SessionClass::AssignSide(MEMORY[0xA8B238], *(_DWORD *)(v50 + 28), 0); /*0x7a7990*/
            SessionClass::AssignColor(MEMORY[0xA8B238], *(_DWORD *)(v50 + 32), 0); /*0x7a79a4*/
            v36 = MEMORY[0xA8B244]; /*0x7a79b0*/
            if ( !MEMORY[0xAC10C8] ) /*0x7a79b5*/
              goto LABEL_105; /*0x7a79b5*/
            if ( MEMORY[0xA8B244] != 3 && MEMORY[0xA8B244] != 1 && MEMORY[0xA8B244] != 2 ) /*0x7a79c4*/
            {
              SessionClass::AssignSide(MEMORY[0xA8B238], -3, 0); /*0x7a79cf*/
              SessionClass::AssignColor(MEMORY[0xA8B238], -2, 0); /*0x7a79dd*/
              v36 = MEMORY[0xA8B244]; /*0x7a79e2*/
            }
            if ( !MEMORY[0xAC10C8] ) /*0x7a79ef*/
            {
LABEL_105:
              if ( v36 != 3 && v36 != 1 && v36 != 2 && Session::GetPlayerOption(MEMORY[0xA8B238]) == -3 ) /*0x7a7a0d*/
              {
                if ( MEMORY[0xA8DA84] ) /*0x7a7a18*/
                {
                  PlayerSide = SessionClass::GetPlayerSide(*(_DWORD *)MEMORY[0xA8DA78]); /*0x7a7a21*/
                  SessionClass::AssignSide(MEMORY[0xA8B238], PlayerSide, 0); /*0x7a7a2c*/
                  PlayerColor = SessionClass::GetPlayerColor(*(_DWORD *)MEMORY[0xA8DA78]); /*0x7a7a40*/
                  SessionClass::AssignColor(MEMORY[0xA8B238], PlayerColor, 0); /*0x7a7a41*/
                }
                else
                {
                  SessionClass::AssignSide(MEMORY[0xA8B238], -2, 0); /*0x7a7a4a*/
                  SessionClass::AssignColor(MEMORY[0xA8B238], -2, 0); /*0x7a7a58*/
                }
              }
            }
            Network::GetAddress(MEMORY[0xA8DBC0], &v52, (int)&v47, &v46); /*0x7a7a71*/
            v44 = MEMORY[0xA8E228]; /*0x7a7a8a*/
            v43 = (unsigned __int16)MEMORY[0xABFEC8]; /*0x7a7a8b*/
            v41 = v47; /*0x7a7a8c*/
            v40 = Session::GetPlayerColor(MEMORY[0xA8B238]); /*0x7a7a9b*/
            PlayerOption = Session::GetPlayerOption(MEMORY[0xA8B238]); /*0x7a7aa1*/
            sprintf(Buffer, stru_84ADC4, PlayerOption, v40, -2, -2, v41, v43, v44); /*0x7a7ab4*/
            Debug::Log(); /*0x7a7ac6*/
            if ( (int)g_WOL_State > 0 ) /*0x7a7ad5*/
            {
              qmemcpy(v59, g_WOL_ConnectionFlags, sizeof(v59)); /*0x7a7af3*/
              (*(void (__stdcall **)(LPVOID, _DWORD *, char *))(*(_DWORD *)MEMORY[0xAC116C] + 56))( /*0x7a7afd*/
                MEMORY[0xAC116C],
                v59,
                Buffer);
            }
            v49 = &vt_rc_ptr_PlayerProfile; /*0x7a7b04*/
            ComPtr::Release(&v49); /*0x7a7b08*/
          }
        }
      }
      if ( (MEMORY[0xA8B244] == 3 || MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2) /*0x7a7b2c*/
        && !g_WOL_ProcessIdle
        && !RequestMatchWOL() )
      {
        SetEvent(hEvent); /*0x7a7b3b*/
      }
      DisplayRankingsWOL(0); /*0x7a7b45*/
    }
    DeleteAndZero((void **)&v45); /*0x7a7b4e*/
  }
  return 0; /*0x7a7b53*/
}


// ==== 0x007A7B60  CChatEventSink::DispatchStub_23  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::vt_23_(int a1, int a2, int a3, int a4, wchar_t *a5)
{
  int v5; // esi
  signed int v7; // ebp
  int v8; // ebx
  int v9; // edi
  HWND v10; // eax
  HWND v11; // eax
  char *v12; // edi
  int v13; // eax
  int v14; // eax
  char *v15; // edx
  char v16; // [esp+7h] [ebp-8Dh]
  void *v17; // [esp+8h] [ebp-8Ch] BYREF
  void *v18; // [esp+Ch] [ebp-88h] BYREF
  int v19; // [esp+10h] [ebp-84h]
  int v20; // [esp+14h] [ebp-80h]
  size_t v21; // [esp+18h] [ebp-7Ch]
  int v22; // [esp+20h] [ebp-74h]
  char v23[108]; // [esp+28h] [ebp-6Ch] BYREF

  v5 = g_WOL_State; /*0x7a7b67*/
  v16 = 1; /*0x7a7b71*/
  v21 = g_WOL_State; /*0x7a7b76*/
  v20 = 0; /*0x7a7b7a*/
  dword_B76478 = Timer::GetTicks(); /*0x7a7b87*/
  dword_B7647C = v22; /*0x7a7b90*/
  dword_B76480 = 0; /*0x7a7b9e*/
  if ( byte_B77E27 ) /*0x7a7ba4*/
    return 0; /*0x7a7ba6*/
  dword_B77DCC = 1; /*0x7a7bbe*/
  v19 = a4; /*0x7a7bc8*/
  if ( a4 ) /*0x7a7bcc*/
  {
    while ( 1 ) /*0x7a7be3*/
    {
      ++v20; /*0x7a7be3*/
      String::Assign((char **)&v18, (const char *)(v19 + 36)); /*0x7a7be7*/
      String::ToLower((const char **)&v18); /*0x7a7bf0*/
      v7 = 0; /*0x7a7bf5*/
      if ( v5 <= 0 ) /*0x7a7bf9*/
        break; /*0x7a7bf9*/
      v8 = 0; /*0x7a7bff*/
      while ( 1 ) /*0x7a7c01*/
      {
        if ( v8 >= 0 && v7 < (int)g_WOL_State ) /*0x7a7c0b*/
        {
          qmemcpy(v23, (char *)g_WOL_ConnectionFlags + v8, sizeof(v23)); /*0x7a7c1f*/
          v5 = v21; /*0x7a7c21*/
        }
        String::Assign((char **)&v17, &v23[36]); /*0x7a7c2e*/
        String::ToLower((const char **)&v17); /*0x7a7c37*/
        if ( String::Compare((const char **)&v18, (const char **)&v17) ) /*0x7a7c45*/
          break; /*0x7a7c45*/
        DeleteAndZero(&v17); /*0x7a7c52*/
        ++v7; /*0x7a7c57*/
        v8 += 108; /*0x7a7c58*/
        if ( v7 >= v5 ) /*0x7a7c5d*/
          goto LABEL_15; /*0x7a7c5d*/
      }
      DeleteAndZero(&v17); /*0x7a7c61*/
      if ( v7 >= v5 ) /*0x7a7c68*/
        break; /*0x7a7c68*/
      v19 = *(_DWORD *)(v19 + 32); /*0x7a7c75*/
      v9 = v19; /*0x7a7c72*/
      DeleteAndZero(&v18); /*0x7a7c79*/
      if ( !v9 ) /*0x7a7c80*/
        goto LABEL_16; /*0x7a7c80*/
    }
LABEL_15:
    v16 = 0; /*0x7a7c87*/
    DeleteAndZero(&v18); /*0x7a7c90*/
  }
LABEL_16:
  if ( v20 == v5 && v16 ) /*0x7a7ca1*/
  {
    if ( MEMORY[0xA8B244] == 3 || MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2 ) /*0x7a7cd9*/
    {
      v10 = (HWND)Dialog::FindByHandle((void *)0x117); /*0x7a7ce0*/
      CloseDialog(v10, 0); /*0x7a7ce9*/
    }
    v11 = (HWND)Dialog::FindByHandle((void *)0xCF); /*0x7a7cf3*/
    CloseDialog(v11, 0); /*0x7a7cfc*/
    dword_B779D4 = a5; /*0x7a7d14*/
    *(_DWORD *)dword_B77D6C = g_NetworkRematchState; /*0x7a7d1e*/
    dword_B73814 = 8960; /*0x7a7d27*/
    *(_DWORD *)dword_B779C4 = dword_B76B24; /*0x7a7d31*/
    if ( MEMORY[0xA8B238][0] == 4 && (dword_B76B30 & 0x100) != 0 ) /*0x7a7d47*/
      *(_DWORD *)dword_B779C4 = 2; /*0x7a7d49*/
    v12 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a7d59*/
    v13 = g_WOL_State; /*0x7a7d66*/
    strcpy(byte_B77830, v12); /*0x7a7d77*/
    if ( v13 > 0 && g_WOL_ConnectionFlags ) /*0x7a7d8b*/
      strcpy(byte_B779E0, (const char *)g_WOL_ConnectionFlags + 36); /*0x7a7da7*/
    *(_DWORD *)dword_B77788 = time(0); /*0x7a7dbc*/
    Debug::Log(); /*0x7a7dc1*/
    if ( a3 ) /*0x7a7dd2*/
      dword_B77DD4 = (unsigned __int8)*(_DWORD *)(a3 + 32); /*0x7a7ddd*/
    byte_B77E26 = 0; /*0x7a7dea*/
    byte_B77E27 = 1; /*0x7a7df1*/
    Network::SyncPlayerList(); /*0x7a7df8*/
    g_NetworkLobbyState = 2; /*0x7a7e03*/
    Debug::Log(); /*0x7a7e0f*/
    v14 = 0; /*0x7a7e1d*/
    if ( (int)g_WOL_State > 0 ) /*0x7a7e21*/
    {
      v15 = (char *)g_WOL_ConnectionFlags; /*0x7a7e23*/
      while ( 1 ) /*0x7a7e29*/
      {
        if ( v14 >= 0 && v14 < (int)g_WOL_State ) /*0x7a7e2f*/
          qmemcpy(&g_IsMultiplayerSession, v15, 0x6Cu); /*0x7a7e3d*/
        if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7a7e46*/
          break; /*0x7a7e46*/
        ++v14; /*0x7a7e48*/
        v15 += 108; /*0x7a7e49*/
        if ( v14 >= (int)g_WOL_State ) /*0x7a7e4e*/
          goto LABEL_41; /*0x7a7e4e*/
      }
      if ( &g_IsMultiplayerSession ) /*0x7a7e59*/
        BulkCharToWide(MEMORY[0xA8E258], byte_B777D4, -1); /*0x7a7e67*/
    }
LABEL_41:
    MEMORY[0xA8E2AC] = -1; /*0x7a7e6c*/
    MEMORY[0xA8E04C] = CComObject_CChatEventSink___ATL::DispatchConnectionPairs(&MEMORY[0xA8DC4C]); /*0x7a7e82*/
    return 0; /*0x7a7e88*/
  }
  else
  {
    byte_B77DEC = 0; /*0x7a7ca6*/
    g_NetworkLobbyState = 0; /*0x7a7cad*/
    return 0; /*0x7a7cb7*/
  }
}


// ==== 0x007A7EA0  CChatEventSink::DispatchStub_22  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt22(int a1, int a2, int a3, int a4, char *Source)
{
  char *v5; // esi
  bool v6; // bl
  char *Flagged; // esi
  char *v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  int v11; // esi
  HWND Current; // ebp
  void *v14; // eax
  int v15; // edx
  bool v16; // bl
  HWND DlgItem; // eax
  HWND v18; // eax
  HWND v19; // eax
  HWND v20; // eax
  char v21; // [esp+7h] [ebp-B9h]
  void *v22; // [esp+8h] [ebp-B8h] BYREF
  int v23; // [esp+Ch] [ebp-B4h]
  char v24; // [esp+13h] [ebp-ADh]
  int Buffer[16]; // [esp+14h] [ebp-ACh] BYREF
  _BYTE v26[108]; // [esp+54h] [ebp-6Ch] BYREF

  if ( (byte_B78600 & 1) == 0 ) /*0x7a7ead*/
  {
    byte_B78600 |= 1u; /*0x7a7eb9*/
    dword_B78608 = Timer::GetTicks(); /*0x7a7ec9*/
    atexit(nullsub_265); /*0x7a7ece*/
  }
  if ( a2 < 0 ) /*0x7a7ee3*/
    return 0; /*0x7a7ee3*/
  v5 = _strdup(Source); /*0x7a7ef6*/
  v6 = SetupNetworkLobbyDialog(v5, (void *)(a4 + 36)); /*0x7a7f0d*/
  free(v5); /*0x7a7f0f*/
  if ( g_NetworkLobby_Init ) /*0x7a7f1e*/
    return 0; /*0x7a7f1e*/
  if ( g_NetworkLobbyState ) /*0x7a7f2b*/
    return 0; /*0x7a7f2b*/
  if ( *Source == 90 ) /*0x7a7f35*/
    return 0; /*0x7a7f35*/
  if ( *Source == 87 ) /*0x7a7f3d*/
    return 0; /*0x7a7f3d*/
  v21 = 0; /*0x7a7f43*/
  Flagged = GameSettings::FindFlagged(); /*0x7a7f4d*/
  if ( Flagged ) /*0x7a7f51*/
  {
    v8 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x7a7f58*/
    if ( !_strcmpi(Flagged + 36, v8) ) /*0x7a7f62*/
      return 0; /*0x7a7f6c*/
  }
  if ( MEMORY[0xA8B244] == 3 || MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2 ) /*0x7a7f84*/
  {
    CharStringToWide((wchar_t **)&v22, (const char **)&g_WebBrowser); /*0x7a7f93*/
    v9 = WideString::GetOrEmpty((wchar_t **)&v22); /*0x7a7f9c*/
    v10 = Player::FindByName(v9); /*0x7a7fa3*/
    v11 = (int)v10; /*0x7a7fa8*/
    if ( v10 /*0x7a7fed*/
      && SessionClass::GetPlayerSide((int)v10) >= 0
      && SessionClass::GetPlayerColor(v11) >= 0
      && *Source >= 48
      && *Source <= 57
      && g_WOL_State == 2 )
    {
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 60))(MEMORY[0xAC116C], MEMORY[0x831688]); /*0x7a7ffc*/
    }
    DeleteAndZero::Alt(&v22); /*0x7a8003*/
    return 0; /*0x7a8014*/
  }
  Current = Dialog::GetCurrent(); /*0x7a801c*/
  if ( !MEMORY[0xAC1154] ) /*0x7a8025*/
  {
    if ( v6 ) /*0x7a802d*/
    {
      v21 = 1; /*0x7a8033*/
      dword_B78608 = Timer::GetTicks(); /*0x7a8046*/
      dword_B7860C = v23; /*0x7a804b*/
      Debug::Log(); /*0x7a8051*/
    }
    if ( (int)(Timer::GetTicks() - dword_B78608) > 900 ) /*0x7a806e*/
    {
      v14 = MEMORY[0xAC1154]; /*0x7a8070*/
      if ( (!MEMORY[0xAC1154] || !*(_DWORD *)MEMORY[0xAC1154]) && !byte_B77E2C ) /*0x7a8085*/
      {
        if ( !MEMORY[0xA8B8E0] /*0x7a80a8*/
          || (LOBYTE(v14) = MEMORY[0xA8BB08],
              FindAndValidateMap(&MEMORY[0xA8B8E0], MEMORY[0xA8BB04], &MEMORY[0xA8BAE2], (int)v14, 0)) )
        {
          dword_B78608 = Timer::GetTicks(); /*0x7a80d2*/
          dword_B7860C = v23; /*0x7a80d7*/
        }
        else
        {
          v21 = 1; /*0x7a80b6*/
          Debug::Log(); /*0x7a80bb*/
        }
      }
    }
    if ( !IsRandMap::Sed2((int)MEMORY[0xA8B238]) ) /*0x7a80e2*/
    {
      LOBYTE(v15) = MEMORY[0xA8BB08]; /*0x7a80ef*/
      if ( !FindAndValidateMap(&MEMORY[0xA8B8E0], MEMORY[0xA8BB04], &MEMORY[0xA8BAE2], v15, 0) /*0x7a813d*/
        || (RawFileClass::Construct(Buffer, (int)&MEMORY[0xA8B8E0]),
            v16 = FileClass::Open(Buffer, 0) != 0,
            RawFileClass::Dtor(Buffer),
            v16) )
      {
        if ( MEMORY[0xA8B238][0] == 4 ) /*0x7a814c*/
        {
          if ( dword_B76B24 || (v24 = BYTE1(dword_B76B30) & 1, (dword_B76B30 & 0x100) != 0) ) /*0x7a8165*/
          {
            if ( *(_DWORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 119) ) /*0x7a816f*/
            {
              *(_DWORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 119) = 0; /*0x7a817b*/
              Network::SendOptionsGame(MEMORY[0x8317F4]); /*0x7a8182*/
              DlgItem = GetDlgItem(Current, 1439); /*0x7a818f*/
              EnableWindow(DlgItem, 0); /*0x7a8196*/
            }
          }
        }
      }
      else
      {
        v21 = 0; /*0x7a813f*/
      }
      if ( Dialog::GetCurrentType() == 201 ) /*0x7a81a6*/
      {
        v18 = Dialog::GetCurrent(); /*0x7a81ac*/
        InvalidateRect(v18, 0, 0); /*0x7a81b2*/
      }
    }
    if ( v21 ) /*0x7a81be*/
    {
      sprintf((char *const)Buffer, MEMORY[0x84AE48], &MEMORY[0xA8B8E0]); /*0x7a81cf*/
      if ( (int)g_WOL_State > 0 ) /*0x7a81de*/
        qmemcpy(v26, g_WOL_ConnectionFlags, sizeof(v26)); /*0x7a81ef*/
      (*(void (__stdcall **)(LPVOID, _BYTE *, int *))(*(_DWORD *)MEMORY[0xAC116C] + 56))(MEMORY[0xAC116C], v26, Buffer); /*0x7a8203*/
      Debug::Log(); /*0x7a820b*/
      Event_Play(); /*0x7a8213*/
    }
    return 0; /*0x7a8224*/
  }
  v19 = GetDlgItem(Current, 1823); /*0x7a8233*/
  if ( v19 ) /*0x7a823d*/
    ShowWindow(v19, 0); /*0x7a8242*/
  v20 = GetDlgItem(Current, 1128); /*0x7a824c*/
  ShowWindow(v20, 1); /*0x7a824f*/
  return 0; /*0x7a7fbd*/
}


// ==== 0x007A8260  CChatEventSink::HandleLobbyPlayerUpdate  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::vt_21_(int a1, int a2, int a3, int a4)
{
  signed int v4; // eax
  char *v5; // ebx
  signed int v6; // esi
  int v7; // edi
  char *v8; // eax
  __int16 v9; // bx
  int v10; // edi
  char **v11; // esi
  char *v12; // eax
  char *v14; // edi
  wchar_t **v15; // esi
  char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  char *v19; // eax
  char *v20; // eax
  char *v21; // eax
  char *v22; // esi
  _DWORD *v23; // eax
  int v24; // edx
  int v25; // ecx
  char *v26; // eax
  int v27; // esi
  char *v28; // eax
  int v29; // ecx
  HWND v30; // ebp
  int v31; // esi
  int PlayerSide; // eax
  int v33; // ebx
  int v34; // edx
  int v35; // eax
  char *v36; // eax
  int v37; // eax
  char *v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // esi
  int v42; // eax
  int v43; // ecx
  char *v44; // eax
  _DWORD *v45; // edx
  _DWORD *v46; // eax
  int v47; // eax
  int v48; // edi
  int v49; // esi
  bool v50; // bl
  char *v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int ResourceID2; // eax
  int v56; // eax
  HWND DlgItem; // eax
  int ResourceID; // esi
  int v59; // esi
  int v60; // edx
  _DWORD *v61; // ecx
  int *v62; // eax
  int v63; // ecx
  void *v64; // eax
  int v65; // edi
  void *PlayerColor; // eax
  int v67; // esi
  int Option; // eax
  int v69; // esi
  int Option2; // eax
  int v71; // esi
  bool v72; // bl
  int v73; // eax
  char *i; // edx
  char *v75; // eax
  signed int v76; // eax
  char *v77; // ebx
  int v78; // esi
  int v79; // edi
  char *v80; // eax
  int v81; // esi
  LPARAM v82; // [esp-8h] [ebp-DCh]
  LPARAM v83; // [esp-8h] [ebp-DCh]
  LPARAM v84; // [esp-8h] [ebp-DCh]
  LPARAM v85; // [esp-8h] [ebp-DCh]
  int v86; // [esp-4h] [ebp-D8h]
  bool v87; // [esp+11h] [ebp-C3h]
  bool v88; // [esp+11h] [ebp-C3h]
  char v89; // [esp+12h] [ebp-C2h]
  bool v90; // [esp+12h] [ebp-C2h]
  bool v91; // [esp+13h] [ebp-C1h]
  bool v92; // [esp+13h] [ebp-C1h]
  const char *v93; // [esp+14h] [ebp-C0h]
  char *v94; // [esp+14h] [ebp-C0h]
  char *v95; // [esp+14h] [ebp-C0h]
  char *v96; // [esp+14h] [ebp-C0h]
  int v97; // [esp+18h] [ebp-BCh] BYREF
  char *v98; // [esp+1Ch] [ebp-B8h]
  void *v99; // [esp+20h] [ebp-B4h] BYREF
  int v100; // [esp+24h] [ebp-B0h]
  int *v101; // [esp+28h] [ebp-ACh] BYREF
  char *v102; // [esp+2Ch] [ebp-A8h]
  int v103; // [esp+30h] [ebp-A4h] BYREF
  __int16 v104; // [esp+34h] [ebp-A0h]
  int v105; // [esp+38h] [ebp-9Ch] BYREF
  int v106; // [esp+3Ch] [ebp-98h]
  void *Block; // [esp+40h] [ebp-94h]
  int *v108; // [esp+44h] [ebp-90h]
  void *v109; // [esp+48h] [ebp-8Ch] BYREF
  int v110; // [esp+4Ch] [ebp-88h]
  int v111; // [esp+50h] [ebp-84h] BYREF
  void *v112; // [esp+54h] [ebp-80h] BYREF
  int v113; // [esp+58h] [ebp-7Ch] BYREF
  _DWORD v114[3]; // [esp+5Ch] [ebp-78h] BYREF
  _DWORD v115[27]; // [esp+68h] [ebp-6Ch] BYREF

  if ( g_NetworkLobby_Init /*0x7a82a9*/
    || g_NetworkLobbyState && *(_BYTE *)a4 != 90
    || (MEMORY[0xA8B244] == 3 || MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2) && *(_BYTE *)a4 != 90 )
  {
    return 0; /*0x7a82a9*/
  }
  v93 = (const char *)(a3 + 36); /*0x7a82be*/
  String::Assign((char **)&v99, (const char *)(a3 + 36)); /*0x7a82c2*/
  v4 = g_WOL_State; /*0x7a82c7*/
  v5 = 0; /*0x7a82cc*/
  v6 = 0; /*0x7a82ce*/
  if ( (int)g_WOL_State <= 0 ) /*0x7a82d2*/
  {
LABEL_15:
    v6 = -1; /*0x7a830e*/
  }
  else
  {
    v7 = 0; /*0x7a82d4*/
    while ( 1 ) /*0x7a82d6*/
    {
      if ( v7 >= 0 && v6 < v4 ) /*0x7a82dc*/
        v5 = (char *)g_WOL_ConnectionFlags + v7; /*0x7a82e4*/
      v8 = String::GetOrEmpty_Alt((char **)&v99); /*0x7a82ef*/
      if ( !_strcmpi(v8, v5 + 36) ) /*0x7a82f5*/
        break; /*0x7a82f5*/
      v4 = g_WOL_State; /*0x7a8301*/
      ++v6; /*0x7a8306*/
      v7 += 108; /*0x7a8307*/
      if ( v6 >= (int)g_WOL_State ) /*0x7a830c*/
        goto LABEL_15; /*0x7a830c*/
    }
  }
  DeleteAndZero(&v99); /*0x7a8315*/
  if ( v6 == -1 ) /*0x7a831d*/
    return 0; /*0x7a831d*/
  if ( *(_BYTE *)a4 == 80 ) /*0x7a832a*/
  {
    if ( dword_B77E4C == 1 ) /*0x7a8bfa*/
    {
      Debug::Log(); /*0x7a8c05*/
      if ( (int)g_WOL_State >= 2 ) /*0x7a8c16*/
      {
        v73 = 0; /*0x7a8c1c*/
        if ( (int)g_WOL_State > 0 ) /*0x7a8c20*/
        {
          for ( i = (char *)g_WOL_ConnectionFlags; ; i += 108 ) /*0x7a8c26*/
          {
            if ( v73 >= 0 && v73 < (int)g_WOL_State ) /*0x7a8c32*/
              qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu); /*0x7a8c40*/
            if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7a8c49*/
              break; /*0x7a8c49*/
            if ( ++v73 >= (int)g_WOL_State ) /*0x7a8c51*/
              return 0; /*0x7a8c5f*/
          }
          if ( &g_IsMultiplayerSession ) /*0x7a8c69*/
          {
            v75 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x7a8c74*/
            if ( !_strcmpi(&byte_B777D4, v75) /*0x7a8cc6*/
              && !g_NetworkLobbyState
              && g_WOL_ProcessIdle
              && MEMORY[0xAC1154]
              && *(_DWORD *)MEMORY[0xAC1154]
              && MEMORY[0x8316D4] )
            {
              String::Assign((char **)&v109, v93); /*0x7a8cd5*/
              v76 = g_WOL_State; /*0x7a8cda*/
              v77 = 0; /*0x7a8cdf*/
              v78 = 0; /*0x7a8ce1*/
              if ( (int)g_WOL_State <= 0 ) /*0x7a8ce5*/
              {
LABEL_150:
                v78 = -1; /*0x7a8d20*/
              }
              else
              {
                v79 = 0; /*0x7a8ce7*/
                while ( 1 ) /*0x7a8ce9*/
                {
                  if ( v79 >= 0 && v78 < v76 ) /*0x7a8cef*/
                    v77 = (char *)g_WOL_ConnectionFlags + v79; /*0x7a8cf6*/
                  v80 = String::GetOrEmpty_Alt((char **)&v109); /*0x7a8d01*/
                  if ( !_strcmpi(v80, v77 + 36) ) /*0x7a8d07*/
                    break; /*0x7a8d07*/
                  v76 = g_WOL_State; /*0x7a8d13*/
                  ++v78; /*0x7a8d18*/
                  v79 += 108; /*0x7a8d19*/
                  if ( v78 >= (int)g_WOL_State ) /*0x7a8d1e*/
                    goto LABEL_150; /*0x7a8d1e*/
                }
              }
              DeleteAndZero(&v109); /*0x7a8d27*/
              if ( v78 != -1 ) /*0x7a8d2f*/
              {
                if ( v78 >= 0 && v78 < (int)g_WOL_State ) /*0x7a8d3b*/
                  qmemcpy(v115, (char *)g_WOL_ConnectionFlags + 108 * v78, sizeof(v115)); /*0x7a8d54*/
                v115[8] = 0; /*0x7a8d5a*/
                Network::SyncPlayerList(); /*0x7a8d65*/
                v81 = dword_B77DCC; /*0x7a8d6a*/
                dword_B77DCC = 1; /*0x7a8d76*/
                MapPreview::Upload((int *)MEMORY[0xAC1154]); /*0x7a8d80*/
                dword_B77DCC = v81; /*0x7a8d85*/
              }
            }
          }
        }
      }
    }
    return 0; /*0x7a8d85*/
  }
  if ( *(_BYTE *)a4 == 82 ) /*0x7a8333*/
  {
    v14 = 0; /*0x7a83da*/
    Block = _strdup((const char *)(a4 + 1)); /*0x7a83dc*/
    v98 = 0; /*0x7a83e0*/
    v15 = (wchar_t **)&MEMORY[0xA8DA90]; /*0x7a83e4*/
    while ( 1 ) /*0x7a83f0*/
    {
      WideString::Assign((wchar_t **)&v112, *v15); /*0x7a83f0*/
      ToWideStringCharAlt((char **)&v97, (const wchar_t **)&v112); /*0x7a83fd*/
      DeleteAndZero::Alt(&v112); /*0x7a8406*/
      v16 = String::GetOrEmpty((char **)&v97); /*0x7a8410*/
      if ( !_strcmpi(v16, v93) ) /*0x7a8416*/
        break; /*0x7a8416*/
      DeleteAndZero((void **)&v97); /*0x7a8426*/
      ++v15; /*0x7a842b*/
      ++v14; /*0x7a842e*/
      if ( (int)v15 >= (int)&MEMORY[0xA8DAB0] ) /*0x7a8435*/
      {
        v98 = v14; /*0x7a843b*/
        free(Block); /*0x7a8440*/
        return 0; /*0x7a8454*/
      }
    }
    v98 = v14; /*0x7a845b*/
    v102 = v14; /*0x7a845f*/
    DeleteAndZero((void **)&v97); /*0x7a8463*/
    if ( v14 == (char *)-1 ) /*0x7a846b*/
      goto LABEL_125; /*0x7a846b*/
    v17 = strtok((char *)Block, MEMORY[0x817F70]); /*0x7a847b*/
    v100 = 0; /*0x7a8487*/
    if ( v17 ) /*0x7a848b*/
      v100 = atol(v17); /*0x7a8496*/
    v18 = strtok(0, MEMORY[0x817F70]); /*0x7a84a0*/
    v99 = 0; /*0x7a84aa*/
    if ( v18 ) /*0x7a84ae*/
      v99 = (void *)atol(v18); /*0x7a84b9*/
    v19 = strtok(0, MEMORY[0x817F70]); /*0x7a84c5*/
    v110 = 0; /*0x7a84d1*/
    if ( v19 ) /*0x7a84d5*/
      v110 = atol(v19); /*0x7a84e2*/
    v20 = strtok(0, MEMORY[0x817F70]); /*0x7a84ec*/
    v106 = 0; /*0x7a84f8*/
    if ( v20 ) /*0x7a84fc*/
      v106 = atol(v20); /*0x7a8509*/
    v21 = strtok(0, MEMORY[0x817F70]); /*0x7a8513*/
    v105 = 0; /*0x7a851c*/
    sscanf(v21, MEMORY[0x825BD0], &v105); /*0x7a8527*/
    Waypoint::InitInvalid(v114); /*0x7a8533*/
    if ( v105 ) /*0x7a853e*/
    {
      v103 = v105; /*0x7a8547*/
      v101 = 0; /*0x7a8559*/
      v104 = 0; /*0x7a855d*/
      NetworkID::Assign(v114, &v101, (int)&v103, 0); /*0x7a8562*/
      v22 = v98; /*0x7a8567*/
      v23 = (_DWORD *)(12 * (_DWORD)v98 + 11066316); /*0x7a8572*/
      v24 = v114[1]; /*0x7a8579*/
      *v23 = v114[0]; /*0x7a857d*/
      v25 = v114[2]; /*0x7a857f*/
      v23[1] = v24; /*0x7a8583*/
      v23[2] = v25; /*0x7a8586*/
    }
    else
    {
      v22 = v98; /*0x7a858b*/
    }
    v26 = strtok(0, MEMORY[0x817F70]); /*0x7a8595*/
    v111 = 0; /*0x7a859f*/
    if ( v26 ) /*0x7a85a3*/
      sscanf(v26, MEMORY[0x825BD0], &v111); /*0x7a85b0*/
    v27 = (int)v22; /*0x7a85c1*/
    v97 = v27 * 4; /*0x7a85c6*/
    v108 = &MEMORY[0xA8DC2C][v27]; /*0x7a85d0*/
    *v108 = v111; /*0x7a85d4*/
    v28 = strtok(0, MEMORY[0x817F70]); /*0x7a85d6*/
    v29 = 0; /*0x7a85de*/
    v113 = 0; /*0x7a85e2*/
    if ( v28 ) /*0x7a85e6*/
    {
      sscanf(v28, MEMORY[0x825BD0], &v113); /*0x7a85f3*/
      v29 = v113; /*0x7a85f8*/
    }
    v101 = &MEMORY[0xA8E230][v27]; /*0x7a8606*/
    *v101 = v29; /*0x7a860a*/
    Network::FormatAddress((unsigned __int16 *)v114, 0); /*0x7a8615*/
    Debug::Log(); /*0x7a8631*/
    v30 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x7a8643*/
    if ( !v30 ) /*0x7a8647*/
      v30 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x7a8653*/
    v31 = v97; /*0x7a8655*/
    PlayerSide = SessionClass::GetPlayerSide(*(LPARAM *)((char *)&MEMORY[0xA8DA90] + v97)); /*0x7a865f*/
    v33 = *(LPARAM *)((char *)&MEMORY[0xA8DA90] + v31); /*0x7a8664*/
    v103 = PlayerSide; /*0x7a866f*/
    v87 = 0; /*0x7a8679*/
    v91 = 0; /*0x7a867e*/
    v89 = 0; /*0x7a8683*/
    if ( PlayerSide == -3 ) /*0x7a8688*/
      v91 = v100 != -3; /*0x7a868e*/
    else
      v87 = v100 == -3; /*0x7a8699*/
    v34 = g_WOL_State; /*0x7a869e*/
    v35 = 0; /*0x7a86a4*/
    if ( (int)g_WOL_State > 0 ) /*0x7a86a8*/
    {
      v94 = (char *)g_WOL_ConnectionFlags; /*0x7a86b4*/
      while ( 1 ) /*0x7a86b8*/
      {
        if ( v35 >= 0 && v35 < (int)g_WOL_State ) /*0x7a86be*/
          qmemcpy(&g_IsMultiplayerSession, v94, 0x6Cu); /*0x7a86ce*/
        if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7a86d7*/
          break; /*0x7a86d7*/
        ++v35; /*0x7a86dd*/
        v94 += 108; /*0x7a86e3*/
        if ( v35 >= (int)g_WOL_State ) /*0x7a86e7*/
          goto LABEL_67; /*0x7a86e7*/
      }
      if ( &g_IsMultiplayerSession ) /*0x7a86f2*/
      {
        v36 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x7a86f9*/
        if ( !_strcmpi(&byte_B777D4, v36) /*0x7a872c*/
          && !v98
          && v87
          && MEMORY[0xA8B23C]
          && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 188))(MEMORY[0xA8B23C]) )
        {
          v87 = 0; /*0x7a8736*/
          v89 = 1; /*0x7a873a*/
        }
        v34 = g_WOL_State; /*0x7a873f*/
      }
    }
LABEL_67:
    if ( v91 ) /*0x7a874b*/
    {
      v37 = 0; /*0x7a8751*/
      if ( v34 > 0 ) /*0x7a8755*/
      {
        v95 = (char *)g_WOL_ConnectionFlags; /*0x7a8761*/
        while ( 1 ) /*0x7a8765*/
        {
          if ( v37 >= 0 && v37 < v34 ) /*0x7a876b*/
            qmemcpy(&g_IsMultiplayerSession, v95, 0x6Cu); /*0x7a877b*/
          if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7a8784*/
            break; /*0x7a8784*/
          ++v37; /*0x7a878a*/
          v95 += 108; /*0x7a8790*/
          if ( v37 >= v34 ) /*0x7a8794*/
            goto LABEL_82; /*0x7a8794*/
        }
        if ( &g_IsMultiplayerSession ) /*0x7a87a2*/
        {
          v38 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x7a87ad*/
          if ( !_strcmpi(&byte_B777D4, v38) ) /*0x7a87b8*/
          {
            if ( NetworkLobby::CheckMinPlayers() ) /*0x7a87c8*/
            {
              v82 = MEMORY[0xAC11B4]; /*0x7a87d9*/
              v39 = PlayerSlot::IndexToDlgID(v98); /*0x7a87de*/
              PlayerSkirmishSlotHandler(v30, v39, v82, 0); /*0x7a87e7*/
              v89 = 1; /*0x7a87ec*/
              Lobby::BuildPlayerList(); /*0x7a87f1*/
              CheckGameSettingsChanged(1, 0); /*0x7a87fa*/
              DisplayRankingsWOL(0); /*0x7a8803*/
            }
            else
            {
              SessionClass::SetPlayerOption(v33, -2); /*0x7a8811*/
              *(_DWORD *)(v33 + 107) = 0; /*0x7a8816*/
              v83 = MEMORY[0xAC11B4]; /*0x7a882b*/
              v40 = PlayerSlot::IndexToDlgID((void *)MEMORY[0x8316A4]); /*0x7a882c*/
              PlayerSkirmishSlotHandler(v30, v40, v83, 0); /*0x7a8835*/
              v41 = NetworkLobby::AssignPlayerSlot(v33); /*0x7a8841*/
              v102 = (char *)v41; /*0x7a8848*/
              v42 = PlayerSlot::IndexToDlgID((void *)v41); /*0x7a884c*/
              PlayerSkirmishSlotHandler(v30, v42, v33, 0); /*0x7a8855*/
              Lobby::BuildPlayerList(); /*0x7a885a*/
              v43 = v41; /*0x7a8863*/
              v97 = v43 * 4; /*0x7a886a*/
              v44 = v98; /*0x7a8870*/
              MEMORY[0xA8DC2C][v43] = *v108; /*0x7a8874*/
              v45 = (_DWORD *)(12 * (_DWORD)v44 + 11066316); /*0x7a887d*/
              v46 = (_DWORD *)(12 * v41 + 11066316); /*0x7a8889*/
              *v46 = *v45; /*0x7a8890*/
              v46[1] = v45[1]; /*0x7a8895*/
              v46[2] = v45[2]; /*0x7a889b*/
              MEMORY[0xA8E230][v43] = *v101; /*0x7a88a4*/
            }
          }
          v34 = g_WOL_State; /*0x7a88aa*/
        }
      }
    }
LABEL_82:
    if ( v87 ) /*0x7a88b6*/
    {
      v47 = 0; /*0x7a88b8*/
      if ( v34 > 0 ) /*0x7a88bc*/
      {
        v96 = (char *)g_WOL_ConnectionFlags; /*0x7a88c4*/
        while ( 1 ) /*0x7a88c8*/
        {
          if ( v47 >= 0 && v47 < v34 ) /*0x7a88ce*/
            qmemcpy(&g_IsMultiplayerSession, v96, 0x6Cu); /*0x7a88de*/
          if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7a88e7*/
            break; /*0x7a88e7*/
          ++v47; /*0x7a88ed*/
          v96 += 108; /*0x7a88f3*/
          if ( v47 >= v34 ) /*0x7a88f7*/
            goto LABEL_90; /*0x7a88f7*/
        }
        if ( &g_IsMultiplayerSession ) /*0x7a8959*/
        {
          v51 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x7a8960*/
          if ( !_strcmpi(&byte_B777D4, v51) ) /*0x7a896b*/
          {
            if ( !GameOption::CheckDuplicate() ) /*0x7a897e*/
            {
              SessionClass::SetPlayerOption(v33, -3); /*0x7a89a8*/
              *(_DWORD *)(v33 + 107) = -1; /*0x7a89ad*/
              v85 = MEMORY[0xAC119C]; /*0x7a89bc*/
              v53 = PlayerSlot::IndexToDlgID(v102); /*0x7a89c1*/
              PlayerSkirmishSlotHandler(v30, v53, v85, 0); /*0x7a89ca*/
              v54 = PlayerSlot::IndexToDlgID((void *)MEMORY[0x8316A4]); /*0x7a89d8*/
              PlayerSkirmishSlotHandler(v30, v54, v33, 0); /*0x7a89e1*/
              Lobby::BuildPlayerList(); /*0x7a89e6*/
              ResourceID2 = GetResourceID2CSF((void *)MEMORY[0x8316A4]); /*0x7a89f1*/
              SetupComboBoxObserver(v30, ResourceID2); /*0x7a89fa*/
              v56 = PlayerSlot::IndexToDlgID((void *)MEMORY[0x8316A4]); /*0x7a8a05*/
              DlgItem = GetDlgItem(v30, v56); /*0x7a8a15*/
              SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x7a8a1c*/
              ResourceID = GetResourceIDCSF((void *)MEMORY[0x8316A4]); /*0x7a8a2d*/
              FillListBox(v30, ResourceID); /*0x7a8a33*/
              SetupSkirmishSpawnLocations(v30, ResourceID, 8); /*0x7a8a3e*/
              v59 = MEMORY[0x8316A4]; /*0x7a8a43*/
              CheckGameSettingsChanged(1, 0); /*0x7a8a4d*/
              DisplayRankingsWOL(0); /*0x7a8a56*/
              MEMORY[0xA8DC2C][v59] = *v108; /*0x7a8a61*/
              v60 = 12 * (_DWORD)v98 + 11066316; /*0x7a8a72*/
              v61 = (_DWORD *)(12 * v59 + 11066316); /*0x7a8a79*/
              *v61 = MEMORY[0xA8DBCC][3 * (_DWORD)v98]; /*0x7a8a82*/
              v61[1] = *(_DWORD *)(v60 + 4); /*0x7a8a87*/
              v62 = v101; /*0x7a8a8a*/
              v61[2] = *(_DWORD *)(v60 + 8); /*0x7a8a91*/
              v63 = *v62; /*0x7a8a94*/
              v64 = Block; /*0x7a8a96*/
              MEMORY[0xA8E230][v59] = v63; /*0x7a8a9a*/
              free(v64); /*0x7a8aa2*/
              return 0; /*0x7a8ab6*/
            }
            v84 = MEMORY[0xAC119C]; /*0x7a898b*/
            v52 = PlayerSlot::IndexToDlgID(v102); /*0x7a898c*/
            PlayerSkirmishSlotHandler(v30, v52, v84, 0); /*0x7a8995*/
            Lobby::BuildPlayerList(); /*0x7a899a*/
LABEL_124:
            CheckGameSettingsChanged(1, 0); /*0x7a8bc5*/
            DisplayRankingsWOL(0); /*0x7a8bd2*/
            goto LABEL_125; /*0x7a8bd2*/
          }
        }
      }
    }
LABEL_90:
    if ( v89 ) /*0x7a88ff*/
    {
LABEL_125:
      free(Block); /*0x7a8bd7*/
      return 0; /*0x7a8bf0*/
    }
    v48 = v103; /*0x7a8905*/
    v49 = v100; /*0x7a8909*/
    v50 = v103 != v100; /*0x7a8915*/
    v92 = v103 != v100; /*0x7a891a*/
    if ( !MEMORY[0xA8B23C] /*0x7a8927*/
      || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0xA8B23C] + 28))(MEMORY[0xA8B23C], v100) )
    {
      if ( !v50 ) /*0x7a8acf*/
      {
        v65 = v97; /*0x7a8ae3*/
LABEL_105:
        PlayerColor = (void *)SessionClass::GetPlayerColor(*(LPARAM *)((char *)&MEMORY[0xA8DA90] + v65)); /*0x7a8ae7*/
        v67 = (int)v99; /*0x7a8af2*/
        v90 = PlayerColor != v99; /*0x7a8afd*/
        if ( PlayerColor != v99 ) /*0x7a8b01*/
        {
          if ( (unsigned __int8)NetworkSession::IsPlayerInGame(v99) ) /*0x7a8b09*/
            v67 = -2; /*0x7a8b12*/
          SessionClass::SetPlayerColor(*(LPARAM *)((char *)&MEMORY[0xA8DA90] + v65), v67); /*0x7a8b1e*/
        }
        Option = SessionClass::GetOption(*(LPARAM *)((char *)&MEMORY[0xA8DA90] + v65)); /*0x7a8b29*/
        v69 = v110; /*0x7a8b2e*/
        v88 = Option != v110; /*0x7a8b39*/
        if ( Option != v110 ) /*0x7a8b3d*/
        {
          if ( (unsigned __int8)NetworkLobby::CheckPlayerNames(v110) ) /*0x7a8b41*/
            v69 = -2; /*0x7a8b4a*/
          SessionClass::SetOption(*(LPARAM *)((char *)&MEMORY[0xA8DA90] + v65), v69); /*0x7a8b56*/
        }
        Option2 = SessionClass::GetOption2(*(LPARAM *)((char *)&MEMORY[0xA8DA90] + v65)); /*0x7a8b61*/
        v71 = v106; /*0x7a8b66*/
        v72 = Option2 != v106; /*0x7a8b6c*/
        if ( Option2 != v106 ) /*0x7a8b71*/
        {
          if ( !MEMORY[0xA8B23C] /*0x7a8b80*/
            || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0xA8B23C] + 52))(MEMORY[0xA8B23C], v106) )
          {
            SessionClass::SetOption2(*(LPARAM *)((char *)&MEMORY[0xA8DA90] + v65), v71); /*0x7a8ba4*/
          }
          else if ( MEMORY[0xA8B23C] ) /*0x7a8b8f*/
          {
            v86 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 44))(MEMORY[0xA8B23C]); /*0x7a8b96*/
            SessionClass::SetOption2(*(LPARAM *)((char *)&MEMORY[0xA8DA90] + v65), v86); /*0x7a8b97*/
          }
          else
          {
            SessionClass::SetOption2(*(LPARAM *)((char *)&MEMORY[0xA8DA90] + v65), -2); /*0x7a8b9b*/
          }
        }
        if ( !v92 && !v90 && !v88 && !v72 ) /*0x7a8bc3*/
          goto LABEL_125; /*0x7a8bc3*/
        goto LABEL_124; /*0x7a8bc3*/
      }
    }
    else
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0xA8B23C] + 28))(MEMORY[0xA8B23C], v48) ) /*0x7a893b*/
        v49 = v48; /*0x7a8946*/
      else
        v49 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 40))(MEMORY[0xA8B23C]); /*0x7a8ac4*/
      v92 = 1; /*0x7a8948*/
    }
    v65 = v97; /*0x7a8ad1*/
    SessionClass::SetPlayerOption(*(LPARAM *)((char *)&MEMORY[0xA8DA90] + v97), v49); /*0x7a8adc*/
    goto LABEL_105; /*0x7a8ae1*/
  }
  if ( *(_BYTE *)a4 != 90 || *(_BYTE *)(a4 + 1) != 52 ) /*0x7a8346*/
    return 0; /*0x7a8d8e*/
  Debug::Log(); /*0x7a8356*/
  v9 = atol((const char *)(a4 + 2)); /*0x7a8364*/
  Debug::Log(); /*0x7a8372*/
  v10 = 0; /*0x7a837e*/
  v11 = (char **)&MEMORY[0xA8DA90]; /*0x7a8380*/
  while ( 1 ) /*0x7a8388*/
  {
    v12 = ToWideStringChar(*v11); /*0x7a8388*/
    if ( !_strcmpi(v12, v93) ) /*0x7a838e*/
      break; /*0x7a838e*/
    ++v11; /*0x7a839a*/
    ++v10; /*0x7a839d*/
    if ( (int)v11 >= (int)&MEMORY[0xA8DAB0] ) /*0x7a83a4*/
      return 0; /*0x7a83b2*/
  }
  *((_WORD *)&MEMORY[0xA8E050] + v10) = v9; /*0x7a83b5*/
  return 0; /*0x7a83a6*/
}


// ==== 0x007A8DA0  CChatEventSink::DispatchStub_16  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt16(int a1, int a2, int a3, const char *a4, char *String1)
{
  const char *v6; // edi
  const char *v7; // esi
  bool v8; // bl
  int v9; // edi
  const void *v10; // esi
  wchar_t *v11; // eax

  if ( !g_NetworkLobby_Init && a2 >= 0 ) /*0x7a8db5*/
  {
    if ( MEMORY[0xA8B244] == 3 || MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2 ) /*0x7a8dcd*/
    {
      if ( (*a4 & 1) != 0 ) /*0x7a8dd6*/
      {
        HandleWOLMatchMessage(String1, 0); /*0x7a8de2*/
        return 0; /*0x7a8deb*/
      }
    }
    else
    {
      v6 = String1; /*0x7a8dee*/
      String::Assign(&String1, String1); /*0x7a8df8*/
      v7 = a4; /*0x7a8dfd*/
      if ( a4 ) /*0x7a8e03*/
      {
        if ( (*a4 & 1) != 0 ) /*0x7a8e0c*/
        {
          v8 = 1; /*0x7a8e0e*/
        }
        else if ( Dialog::FindByHandle((void *)0xC2) ) /*0x7a8e17*/
        {
          v8 = 1; /*0x7a8e20*/
        }
        else if ( Dialog::FindByHandle((void *)0xC9) ) /*0x7a8e29*/
        {
          v8 = 1; /*0x7a8e32*/
        }
        else
        {
          v8 = dword_B779C0 != 0; /*0x7a8e3d*/
        }
      }
      else
      {
        v8 = 0; /*0x7a8e05*/
      }
      DeleteAndZero((void **)&String1); /*0x7a8e44*/
      if ( v8 && IsBuddyOrIgnoreWOL(v7) ) /*0x7a8e50*/
      {
        String::Assign(&String1, v6); /*0x7a8e5e*/
        CharStringToWide((wchar_t **)&a2, (const char **)&String1); /*0x7a8e6b*/
        DeleteAndZero((void **)&String1); /*0x7a8e74*/
        v9 = 61680; /*0x7a8e7b*/
        if ( (*v7 & 1) != 0 ) /*0x7a8e83*/
          v9 = 16776960; /*0x7a8e85*/
        v10 = v7 + 36; /*0x7a8e8b*/
        if ( _strcmpi(MEMORY[0xA8B380], v10) ) /*0x7a8e94*/
        {
          v11 = WideString::GetOrEmpty((wchar_t **)&a2); /*0x7a8ea4*/
          Dialog::ShowMessage(v9, (size_t)aHsS_1, v10, v11); /*0x7a8eb1*/
        }
        DeleteAndZero::Alt((void **)&a2); /*0x7a8ebd*/
      }
    }
  }
  return 0; /*0x7a8de7*/
}


// ==== 0x007A8ED0  CChatEventSink::DispatchStub_40  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt40(int a1, int a2, int a3, const char *a4, wchar_t *String)
{
  const char *v6; // esi
  bool v7; // zf
  int v8; // eax
  int v9; // edi
  const void *v10; // esi
  wchar_t *v11; // eax

  if ( g_NetworkLobby_Init ) /*0x7a8ed8*/
    return 0; /*0x7a8eda*/
  if ( a2 < 0 ) /*0x7a8ee6*/
    return 0; /*0x7a8ee8*/
  WideString::Assign((wchar_t **)&a2, String); /*0x7a8ef7*/
  v6 = a4; /*0x7a8efc*/
  if ( a4 ) /*0x7a8f02*/
  {
    if ( (*a4 & 1) != 0 || Dialog::FindByHandle((void *)0xC2) || Dialog::FindByHandle((void *)0xC9) ) /*0x7a8f1c*/
      goto LABEL_21; /*0x7a8f1c*/
    v7 = WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7a8f2e*/
    v8 = dword_B779C0; /*0x7a8f30*/
    if ( v7 ) /*0x7a8f35*/
      v8 = dword_B779DC; /*0x7a8f37*/
    if ( v8 ) /*0x7a8f43*/
    {
LABEL_21:
      if ( IsBuddyOrIgnoreWOL(v6) ) /*0x7a8f56*/
      {
        v9 = 61680; /*0x7a8f71*/
        if ( (*v6 & 1) != 0 ) /*0x7a8f79*/
          v9 = 16776960; /*0x7a8f7b*/
        v10 = v6 + 36; /*0x7a8f81*/
        if ( _strcmpi(MEMORY[0xA8B380], v10) ) /*0x7a8f8a*/
        {
          v11 = WideString::GetOrEmpty((wchar_t **)&a2); /*0x7a8f9a*/
          Dialog::ShowMessage(v9, (size_t)aHsS_1, v10, v11); /*0x7a8fa7*/
        }
      }
    }
  }
  DeleteAndZero::Alt((void **)&a2); /*0x7a8fb3*/
  return 0; /*0x7a8edc*/
}


// ==== 0x007A8FC0  CChatEventSink::DispatchStub_17  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt41(int a1, int a2, const char *a3, wchar_t *String)
{
  const char *v5; // esi
  bool v6; // zf
  int v7; // eax
  int v8; // edi
  const void *v9; // esi
  wchar_t *v10; // eax

  if ( g_NetworkLobby_Init ) /*0x7a9118*/
    return 0; /*0x7a911a*/
  if ( a2 < 0 ) /*0x7a9126*/
    return 0; /*0x7a9128*/
  WideString::Assign((wchar_t **)&a2, String); /*0x7a9137*/
  v5 = a3; /*0x7a913c*/
  if ( a3 ) /*0x7a9142*/
  {
    if ( (*a3 & 1) != 0 || Dialog::FindByHandle((void *)0xC2) || Dialog::FindByHandle((void *)0xC9) ) /*0x7a915c*/
      goto LABEL_21; /*0x7a915c*/
    v6 = WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7a916e*/
    v7 = dword_B779C0; /*0x7a9170*/
    if ( v6 ) /*0x7a9175*/
      v7 = dword_B779DC; /*0x7a9177*/
    if ( v7 ) /*0x7a9183*/
    {
LABEL_21:
      if ( IsBuddyOrIgnoreWOL(v5) ) /*0x7a9196*/
      {
        v8 = 16744576; /*0x7a91b1*/
        if ( (*v5 & 1) != 0 ) /*0x7a91b9*/
          v8 = 16776960; /*0x7a91bb*/
        v9 = v5 + 36; /*0x7a91c1*/
        if ( _strcmpi(MEMORY[0xA8B380], v9) ) /*0x7a91ca*/
        {
          v10 = WideString::GetOrEmpty((wchar_t **)&a2); /*0x7a91da*/
          Dialog::ShowMessage(v8, (size_t)aHsS_2, v9, v10); /*0x7a91e7*/
        }
      }
    }
  }
  DeleteAndZero::Alt((void **)&a2); /*0x7a91f3*/
  return 0; /*0x7a911c*/
}


// ==== 0x007A9110  CChatEventSink::DispatchStub_41  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt41(int a1, int a2, const char *a3, wchar_t *String)
{
  const char *v5; // esi
  bool v6; // zf
  int v7; // eax
  int v8; // edi
  const void *v9; // esi
  wchar_t *v10; // eax

  if ( g_NetworkLobby_Init ) /*0x7a9118*/
    return 0; /*0x7a911a*/
  if ( a2 < 0 ) /*0x7a9126*/
    return 0; /*0x7a9128*/
  WideString::Assign((wchar_t **)&a2, String); /*0x7a9137*/
  v5 = a3; /*0x7a913c*/
  if ( a3 ) /*0x7a9142*/
  {
    if ( (*a3 & 1) != 0 || Dialog::FindByHandle((void *)0xC2) || Dialog::FindByHandle((void *)0xC9) ) /*0x7a915c*/
      goto LABEL_21; /*0x7a915c*/
    v6 = WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7a916e*/
    v7 = dword_B779C0; /*0x7a9170*/
    if ( v6 ) /*0x7a9175*/
      v7 = dword_B779DC; /*0x7a9177*/
    if ( v7 ) /*0x7a9183*/
    {
LABEL_21:
      if ( IsBuddyOrIgnoreWOL(v5) ) /*0x7a9196*/
      {
        v8 = 16744576; /*0x7a91b1*/
        if ( (*v5 & 1) != 0 ) /*0x7a91b9*/
          v8 = 16776960; /*0x7a91bb*/
        v9 = v5 + 36; /*0x7a91c1*/
        if ( _strcmpi(MEMORY[0xA8B380], v9) ) /*0x7a91ca*/
        {
          v10 = WideString::GetOrEmpty((wchar_t **)&a2); /*0x7a91da*/
          Dialog::ShowMessage(v8, (size_t)aHsS_2, v9, v10); /*0x7a91e7*/
        }
      }
    }
  }
  DeleteAndZero::Alt((void **)&a2); /*0x7a91f3*/
  return 0; /*0x7a911c*/
}


// ==== 0x007A9200  CChatEventSink::DispatchStub_28  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt28(int a1, int a2, const char *a3, const char *a4)
{
  bool v5; // zf
  int v6; // eax
  char v7; // al
  wchar_t *v8; // eax
  int Type; // esi
  int v10; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v12; // eax
  HWND Current; // esi
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  HWND Dialog; // eax
  wchar_t *v17; // eax
  HWND DlgItem; // eax
  char **ChatCommand; // ebx
  HWND v20; // esi
  char *v21; // eax
  int v22; // esi
  wchar_t *v23; // eax
  int v24; // [esp-Ch] [ebp-22Ch]
  void *v25; // [esp+Ch] [ebp-214h] BYREF
  void *v26[4]; // [esp+10h] [ebp-210h] BYREF
  wchar_t Buffer[256]; // [esp+20h] [ebp-200h] BYREF

  if ( a2 < 0 ) /*0x7a920d*/
    return 0; /*0x7a920f*/
  String::Assign((char **)v26, a4); /*0x7a9227*/
  CharStringToWide((wchar_t **)&v25, (const char **)v26); /*0x7a9234*/
  DeleteAndZero(v26); /*0x7a923d*/
  if ( !a3 ) /*0x7a924b*/
    goto LABEL_12; /*0x7a924b*/
  if ( (*a3 & 1) == 0 && !Dialog::FindByHandle((void *)0xC2) && !Dialog::FindByHandle((void *)0xC9) ) /*0x7a9266*/
  {
    v5 = WideString::IsASCII((const wchar_t **)&v25) == 0; /*0x7a9278*/
    v6 = dword_B779C0; /*0x7a927a*/
    if ( v5 ) /*0x7a927f*/
      v6 = dword_B779DC; /*0x7a9281*/
    if ( !v6 ) /*0x7a928d*/
      goto LABEL_12; /*0x7a928d*/
  }
  if ( IsBuddyOrIgnoreWOL(a3) ) /*0x7a92a6*/
  {
    v7 = g_NetworkLobby_Init; /*0x7a92d7*/
    strcpy(byte_B77E30, a3 + 36); /*0x7a92e8*/
    if ( v7 ) /*0x7a92f3*/
    {
      v8 = WideString::GetOrEmpty((wchar_t **)&v25); /*0x7a92fd*/
      swprintf(Buffer, (const size_t)g_Str_Trace___hs_, (const wchar_t *const)a3 + 18, v8); /*0x7a930e*/
      Type = BuildingAnim::GetType(); /*0x7a9321*/
      v10 = Math::RoundToInt(*(double *)&MEMORY[0x8871E0][1].__pad_A0 * 900.0); /*0x7a9331*/
      MessageListClass::AddMessage(MEMORY[0xA8BC60], 0, 0, Buffer, Type, 22, v10, 0); /*0x7a9348*/
      v24 = Math::RoundToInt(*(double *)&MEMORY[0x8871E0][1].__pad_A0 * 900.0); /*0x7a9365*/
      StringCSF = GetStringCSF(aTxtHowToReply, 0, g_Str_File_wonline_cpp, 8066); /*0x7a937a*/
      MessageListClass::AddMessage(MEMORY[0xA8BC60], 0, 0, StringCSF, Type, 22, v24, 0); /*0x7a9389*/
      MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x7a9395*/
      v12 = WideString::GetOrEmpty((wchar_t **)&v25); /*0x7a939e*/
      Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v12); /*0x7a93b1*/
      dword_B76478 = Timer::GetTicks(); /*0x7a93cb*/
      dword_B7647C = (int)v26[2]; /*0x7a93d0*/
      dword_B76480 = 300; /*0x7a93d6*/
    }
    else
    {
      Current = Dialog::GetCurrent(); /*0x7a93ec*/
      if ( Current ) /*0x7a93f0*/
      {
        while ( !GetDlgItem(Current, 1343) ) /*0x7a93fc*/
        {
          if ( GetDlgItem(Current, 1461) ) /*0x7a9404*/
          {
            v14 = WideString::GetOrEmpty((wchar_t **)&v25); /*0x7a940e*/
            Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v14); /*0x7a9420*/
          }
          Current = (HWND)Dialog::FindByPtr(Current); /*0x7a942f*/
          if ( !Current ) /*0x7a9433*/
            goto LABEL_22; /*0x7a9433*/
        }
        v15 = WideString::GetOrEmpty((wchar_t **)&v25); /*0x7a943b*/
        Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v15); /*0x7a944e*/
      }
      else
      {
LABEL_22:
        ReleaseCapture(); /*0x7a945a*/
        Screen::Capture(1, 0, (int)(a3 + 36), (int)a3); /*0x7a9464*/
        Dialog = (HWND)CreateDialog(0x11Eu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))ChatDialog::DlgProc, 0); /*0x7a9475*/
        Current = Dialog; /*0x7a947a*/
        if ( Dialog ) /*0x7a947e*/
        {
          SetFocus(Dialog); /*0x7a9481*/
          v17 = WideString::GetOrEmpty((wchar_t **)&v25); /*0x7a948b*/
          Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v17); /*0x7a949e*/
          ShowWindow(Current, 1); /*0x7a94a9*/
        }
      }
      DlgItem = GetDlgItem(Current, 1343); /*0x7a94b5*/
      ChatCommand = ExtractChatCommand((char **)v26, DlgItem); /*0x7a94c8*/
      v20 = GetDlgItem(Current, 1816); /*0x7a94ce*/
      v21 = String::GetOrEmpty_Alt(ChatCommand); /*0x7a94d0*/
      SendMessageA(v20, 0x4B4u, 0, (LPARAM)v21); /*0x7a94de*/
      DeleteAndZero(v26); /*0x7a94e8*/
    }
    if ( byte_B77E40 ) /*0x7a94f4*/
    {
      v22 = *(_DWORD *)MEMORY[0xAC116C]; /*0x7a9500*/
      v23 = WideString::GetOrEmpty((wchar_t **)&dword_B76230); /*0x7a9502*/
      (*(void (__stdcall **)(LPVOID, const char *, wchar_t *))(v22 + 236))(MEMORY[0xAC116C], a3, v23); /*0x7a9510*/
    }
    PlayVocClass(MEMORY[0x8871E0]->MovieOn, 0x2000, 1.0, 0); /*0x7a952d*/
    DeleteAndZero::Alt(&v25); /*0x7a9536*/
    return 0; /*0x7a953e*/
  }
  else
  {
LABEL_12:
    DeleteAndZero::Alt(&v25); /*0x7a92b3*/
    return 0; /*0x7a92b8*/
  }
}


// ==== 0x007A9550  CChatEventSink::DispatchStub_44  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt44(int a1, int a2, int a3, wchar_t *String)
{
  int v5; // edi
  bool v6; // bl
  bool v7; // zf
  int v8; // eax
  int Type; // ebx
  int v10; // eax
  HWND Current; // esi
  HWND DlgItem; // eax
  char **ChatCommand; // ebx
  HWND v14; // esi
  char *v15; // eax
  int v16; // esi
  wchar_t *v17; // eax
  void *v18; // [esp+Ch] [ebp-204h] BYREF
  wchar_t Buffer[256]; // [esp+10h] [ebp-200h] BYREF

  if ( a2 < 0 ) /*0x7a955f*/
    return 0; /*0x7a9563*/
  WideString::Assign((wchar_t **)&v18, String); /*0x7a957b*/
  v5 = a3; /*0x7a9580*/
  if ( a3 ) /*0x7a9589*/
  {
    if ( (*(_BYTE *)a3 & 1) != 0 ) /*0x7a9592*/
    {
      v6 = 1; /*0x7a9594*/
    }
    else if ( Dialog::FindByHandle((void *)0xC2) ) /*0x7a959d*/
    {
      v6 = 1; /*0x7a95a6*/
    }
    else if ( Dialog::FindByHandle((void *)0xC9) ) /*0x7a95af*/
    {
      v6 = 1; /*0x7a95b8*/
    }
    else
    {
      v7 = WideString::IsASCII((const wchar_t **)&v18) == 0; /*0x7a95c5*/
      v8 = dword_B779C0; /*0x7a95c7*/
      if ( v7 ) /*0x7a95cc*/
        v8 = dword_B779DC; /*0x7a95ce*/
      v6 = v8 != 0; /*0x7a95d5*/
    }
  }
  else
  {
    v6 = 0; /*0x7a958b*/
  }
  DeleteAndZero::Alt(&v18); /*0x7a95dc*/
  if ( !v6 ) /*0x7a95e3*/
    return 0; /*0x7a95e7*/
  if ( !IsBuddyOrIgnoreWOL((const char *)a3) ) /*0x7a95f5*/
    return 0; /*0x7a9600*/
  if ( g_NetworkLobby_Init ) /*0x7a9614*/
  {
    swprintf(Buffer, (const size_t)g_Str_Trace___hs_, (const wchar_t *const)(a3 + 36), String); /*0x7a9625*/
    Type = BuildingAnim::GetType(); /*0x7a9638*/
    v10 = Math::RoundToInt(*(double *)&MEMORY[0x8871E0][1].__pad_A0 * 900.0); /*0x7a9648*/
    MessageListClass::AddMessage(MEMORY[0xA8BC60], 0, 0, Buffer, Type, 22, v10, 0); /*0x7a965f*/
    MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x7a966b*/
    Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String); /*0x7a967d*/
  }
  else
  {
    Current = Dialog::GetCurrent(); /*0x7a9695*/
    if ( Current ) /*0x7a9699*/
    {
      while ( !GetDlgItem(Current, 1343) ) /*0x7a96a5*/
      {
        if ( GetDlgItem(Current, 1461) ) /*0x7a96ad*/
          Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String); /*0x7a96cb*/
        Current = (HWND)Dialog::FindByPtr(Current); /*0x7a96da*/
        if ( !Current ) /*0x7a96de*/
          goto LABEL_27; /*0x7a96de*/
      }
      Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String); /*0x7a96fa*/
    }
    else
    {
LABEL_27:
      ReleaseCapture(); /*0x7a9706*/
      Screen::Capture(1, 0, v6, (int)String); /*0x7a9710*/
      Current = (HWND)CreateDialog(0x11Eu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))ChatDialog::DlgProc, 0); /*0x7a9726*/
      SetFocus(Current); /*0x7a9729*/
      Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String); /*0x7a9746*/
      ShowWindow(Current, 1); /*0x7a9751*/
    }
    DlgItem = GetDlgItem(Current, 1343); /*0x7a975d*/
    ChatCommand = ExtractChatCommand((char **)&v18, DlgItem); /*0x7a9770*/
    v14 = GetDlgItem(Current, 1816); /*0x7a9776*/
    v15 = String::GetOrEmpty_Alt(ChatCommand); /*0x7a9778*/
    SendMessageA(v14, 0x4B4u, 0, (LPARAM)v15); /*0x7a9786*/
    DeleteAndZero(&v18); /*0x7a9790*/
    v5 = a3; /*0x7a9795*/
  }
  if ( byte_B77E40 ) /*0x7a97a3*/
  {
    v16 = *(_DWORD *)MEMORY[0xAC116C]; /*0x7a97ab*/
    v17 = WideString::GetOrEmpty((wchar_t **)&dword_B76230); /*0x7a97b2*/
    (*(void (__stdcall **)(LPVOID, int, wchar_t *))(v16 + 236))(MEMORY[0xAC116C], v5, v17); /*0x7a97c0*/
  }
  PlayVocClass(MEMORY[0x8871E0]->MovieOn, 0x2000, 1.0, 0); /*0x7a97dd*/
  return 0; /*0x7a9561*/
}


// ==== 0x007A9800  CChatEventSink::DispatchStub_27  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_27(int a1, int a2)
{
  wchar_t *StringCSF; // eax
  HWND Current; // eax
  HWND v5; // esi
  int Type; // esi
  int v7; // eax
  wchar_t *v8; // [esp-4h] [ebp-10Ch]
  wchar_t *v9; // [esp-4h] [ebp-10Ch]
  ObjectClass v10; // [esp+0h] [ebp-108h] BYREF

  if ( !a2 ) /*0x7a980e*/
  {
    StringCSF = GetStringCSF(aTxtPagesent, 0, (CampaignScore *)g_Str_File_wonline_cpp, 8189); /*0x7a9821*/
    Dialog::ShowStatusText((SessionClass *)0xFFFFFFFF, (CampaignScore *)StringCSF, *(CampaignScore **)v10.__pad_0); /*0x7a982d*/
    return 0; /*0x7a983f*/
  }
  if ( a2 == 262452 ) /*0x7a9847*/
  {
    v8 = GetStringCSF(aTxtPagedisable, 0, (CampaignScore *)g_Str_File_wonline_cpp, 8193); /*0x7a9863*/
    swprintf( /*0x7a9865*/
      (wchar_t *const)&v10.__pad_0[8],
      (const size_t)v8,
      *(const wchar_t *const *)v10.__pad_0,
      *(CampaignScore **)&v10.__pad_0[4]);
  }
  else
  {
    if ( a2 == 262451 ) /*0x7a986c*/
      v9 = GetStringCSF(aTxtPageusergon, 0, (CampaignScore *)g_Str_File_wonline_cpp, 8195); /*0x7a9888*/
    else
      v9 = GetStringCSF( /*0x7a98a2*/
             (wchar_t *)&g_Str_Trace___hs_.CampaignScore_field_0x14,
             0,
             (CampaignScore *)g_Str_File_wonline_cpp,
             8197);
    swprintf( /*0x7a988a*/
      (wchar_t *const)&v10.__pad_0[8],
      (const size_t)v9,
      *(const wchar_t *const *)v10.__pad_0,
      *(CampaignScore **)&v10.__pad_0[4]);
  }
  Current = Dialog::GetCurrent(); /*0x7a98b0*/
  v5 = Current; /*0x7a98b5*/
  if ( !Current ) /*0x7a98b9*/
    goto LABEL_19; /*0x7a98b9*/
  if ( GetDlgItem(Current, 1343) ) /*0x7a98c7*/
  {
    Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)&v10.__pad_0[8], v10); /*0x7a98d9*/
    return 0; /*0x7a98eb*/
  }
  if ( GetDlgItem(v5, 1461) ) /*0x7a98f4*/
  {
    Dialog::ShowStatusText((SessionClass *)0xFFFFFFFF, (CampaignScore *)&v10.__pad_0[8], *(CampaignScore **)v10.__pad_0); /*0x7a9906*/
    return 0; /*0x7a990e*/
  }
  else
  {
LABEL_19:
    if ( SessionClass::GetGameSpeed(&HouseClass_Player.__pad_5568[8068]) ) /*0x7a9920*/
    {
      Type = BuildingAnim::GetType(); /*0x7a9934*/
      v7 = Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5312) * 900.0); /*0x7a9944*/
      MessageListClass::AddMessage( /*0x7a995b*/
        &HouseClass_Player.__pad_5568[10668],
        0,
        0,
        (CellStruct *)&v10.__pad_0[8],
        Type,
        (IUnknown *)0x16,
        v7,
        0);
    }
    return 0; /*0x7a9961*/
  }
}


// ==== 0x007AA6A0  CChatEventSink::DispatchStub_18  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt18(int a1, int a2, int a3)
{
  if ( !g_NetworkLobby_Init && a2 >= 0 ) /*0x7aa6af*/
    Dialog::ShowMessage(-1, (size_t)MEMORY[0x84B128], a3); /*0x7aa6c2*/
  return 0; /*0x7aa6cc*/
}


// ==== 0x007AA6D0  CChatEventSink::DispatchStub_19  this=CChatEventSink  sig=csp ====
int __userpurge CComObject_CChatEventSink___ATL::DispatchStub_19@<eax>(
        const wchar_t *a1@<esi>,
        CampaignScore *a2@<edi>,
        int a3,
        int a4)
{
  wchar_t *StringCSF; // eax
  CampaignScore *Type; // esi
  int v7; // eax
  wchar_t *v8; // eax
  wchar_t Buffer[256]; // [esp+0h] [ebp-200h] BYREF

  if ( byte_B77DC0 ) /*0x7aa6dd*/
  {
    SetEvent(dword_B736A8); /*0x7aa6e5*/
    dword_B77DE8 = a4; /*0x7aa6f4*/
    return 0; /*0x7aa700*/
  }
  if ( a4 == 262447 ) /*0x7aa710*/
  {
    if ( g_NetworkLobby_Init ) /*0x7aa71d*/
    {
      if ( !byte_B77DC2 ) /*0x7aa72a*/
      {
        Buffer[0] = 0; /*0x7aa742*/
        StringCSF = GetStringCSF( /*0x7aa749*/
                      (wchar_t *)&stru_84B120.estimatedHealth,
                      0,
                      (CampaignScore *)g_Str_File_wonline_cpp,
                      8460);
        swprintf(Buffer, (const size_t)StringCSF, a1, a2); /*0x7aa754*/
        Type = (CampaignScore *)BuildingAnim::GetType(); /*0x7aa761*/
        v7 = Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5312) * 900.0); /*0x7aa776*/
        MessageListClass::AddMessage( /*0x7aa78d*/
          &HouseClass_Player.__pad_5568[10668],
          0,
          0,
          (CellStruct *)Buffer,
          (int)Type,
          (IUnknown *)0x16,
          v7,
          0);
        MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 0); /*0x7aa799*/
        memset(&g_WOL_ProcessIdle, 0, 0x10Cu); /*0x7aa7af*/
        memset(&dword_B73BE8, 0, 0x10Cu); /*0x7aa7bb*/
        byte_B77DC2 = 1; /*0x7aa7bd*/
        g_WOL_ChannelState = 0; /*0x7aa7c4*/
        Debug::Log(); /*0x7aa7ce*/
        return 0; /*0x7aa7e0*/
      }
    }
    else
    {
      if ( Dialog::FindByHandle((void *)0x113) ) /*0x7aa7e8*/
      {
        v8 = GetStringCSF( /*0x7aa809*/
               (wchar_t *)stru_84B120.ambientSoundController,
               0,
               (CampaignScore *)g_Str_File_wonline_cpp,
               8478);
        ShowDialogConfirm((CampaignScore *)v8, 0, (unsigned __int8 (*)())GameLoop::Thunk, 0); /*0x7aa812*/
      }
      byte_B77DC0 = 1; /*0x7aa820*/
      byte_B77DC2 = 1; /*0x7aa825*/
      SetEvent(Handles); /*0x7aa82a*/
      memset(&g_WOL_ProcessIdle, 0, 0x10Cu); /*0x7aa841*/
      memset(&dword_B73BE8, 0, 0x10Cu); /*0x7aa84d*/
      g_WOL_ChannelState = 0; /*0x7aa84f*/
      Debug::Log(); /*0x7aa859*/
    }
  }
  return 0; /*0x7aa6fa*/
}


// ==== 0x007AA870  CChatEventSink::HandleChatChannelList  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::vt_08_(int a1, int a2, const char *a3)
{
  signed int v3; // eax
  signed int v4; // ebx
  int v5; // ebp
  const char *v6; // ebx
  signed int v7; // eax
  char *v8; // ebp
  int v9; // edi
  char *v10; // edx
  int v11; // eax
  int v12; // ebp
  int v13; // eax
  char *v14; // edx
  int v15; // esi
  int v16; // eax
  int v17; // esi
  int v18; // esi
  char **v19; // ecx
  int v20; // esi
  int v21; // eax
  int v22; // esi
  int v23; // esi
  char **v24; // ecx
  _DWORD *v25; // esi
  int v26; // esi
  HWND v27; // eax
  HWND v28; // eax
  HWND v29; // esi
  HWND DlgItem; // eax
  void *v32; // [esp+68h] [ebp-330h] BYREF
  int v33; // [esp+6Ch] [ebp-32Ch]
  int v34; // [esp+70h] [ebp-328h] BYREF
  int v35[2]; // [esp+74h] [ebp-324h] BYREF
  void *Block; // [esp+7Ch] [ebp-31Ch]
  void *v37; // [esp+80h] [ebp-318h] BYREF
  void *v38; // [esp+84h] [ebp-314h] BYREF
  _DWORD v39[67]; // [esp+88h] [ebp-310h] BYREF
  char v40[516]; // [esp+194h] [ebp-204h] BYREF

  unknown_libname_73(&v32); /*0x7aa87e*/
  memset(v40, 0, 513); /*0x7aa893*/
  v33 = 0; /*0x7aa89b*/
  v35[0] = 0; /*0x7aa8a1*/
  v35[1] = 0; /*0x7aa8a5*/
  Block = 0; /*0x7aa8a9*/
  if ( !g_NetworkLobby_Init ) /*0x7aa8ad*/
  {
    v34 = 0; /*0x7aa8c0*/
    if ( a2 == 262459 ) /*0x7aa8ca*/
    {
      v34 = 41; /*0x7aa8cc*/
    }
    else
    {
      if ( (unsigned __int8)CChatEventSink::Check(&v34, 0) ) /*0x7aa8e4*/
        CChatEventSink::EnsureCapacity(0); /*0x7aa8f3*/
      if ( a2 < 0 ) /*0x7aa8fa*/
      {
LABEL_103:
        v35[0] = 0; /*0x7aaf7c*/
        __3_YAXPAX_Z(Block); /*0x7aaf89*/
        goto LABEL_104; /*0x7aaf89*/
      }
      if ( v34 ) /*0x7aa90e*/
      {
        Debug::Log(); /*0x7aa91d*/
        memset(v39, 0, sizeof(v39)); /*0x7aa930*/
        v3 = g_WOL_ChatState; /*0x7aa932*/
        v4 = 0; /*0x7aa937*/
        if ( (int)g_WOL_ChatState > 0 ) /*0x7aa93b*/
        {
          v5 = 0; /*0x7aa93d*/
          do /*0x7aa985*/
          {
            if ( v5 >= 0 && v4 < v3 ) /*0x7aa945*/
              qmemcpy(v39, (char *)g_WOL_ConnectionHandler + v5, sizeof(v39)); /*0x7aa959*/
            if ( v39[10] != -1 ) /*0x7aa962*/
            {
              Array::InsertElement(v35, v39, v35[0]); /*0x7aa972*/
              v3 = g_WOL_ChatState; /*0x7aa977*/
            }
            ++v4; /*0x7aa97c*/
            v5 += 268; /*0x7aa97d*/
          }
          while ( v4 < v3 ); /*0x7aa985*/
        }
        g_WOL_ChatState = 0; /*0x7aa987*/
      }
      else
      {
        g_WOL_AuthPool = 0; /*0x7aa910*/
      }
    }
    v6 = a3; /*0x7aa98d*/
    if ( a3 ) /*0x7aa996*/
    {
      do /*0x7aae72*/
      {
        if ( *(_DWORD *)v6 ) /*0x7aa99c*/
        {
          if ( a2 == 262459 ) /*0x7aa9c3*/
          {
            if ( *((_DWORD *)v6 + 10) != -1 ) /*0x7aa9cd*/
            {
              v7 = g_WOL_ChatState; /*0x7aa9d3*/
              v8 = 0; /*0x7aa9d8*/
              v9 = 0; /*0x7aa9da*/
              if ( (int)g_WOL_ChatState > 0 ) /*0x7aa9de*/
              {
                v10 = (char *)g_WOL_ConnectionHandler; /*0x7aa9e4*/
                while ( 1 ) /*0x7aa9ea*/
                {
                  if ( v9 >= 0 && v9 < v7 ) /*0x7aa9f0*/
                    v8 = v10; /*0x7aa9f2*/
                  if ( v8 ) /*0x7aa9f6*/
                  {
                    v11 = strcmp(v8 + 52, v6 + 52); /*0x7aaa04*/
                    v6 = a3; /*0x7aaa27*/
                    if ( !v11 ) /*0x7aaa30*/
                      break; /*0x7aaa30*/
                  }
                  v7 = g_WOL_ChatState; /*0x7aaa32*/
                  ++v9; /*0x7aaa37*/
                  v10 += 268; /*0x7aaa38*/
                  if ( v9 >= (int)g_WOL_ChatState ) /*0x7aaa40*/
                    goto LABEL_88; /*0x7aaa40*/
                }
                Debug::Log(); /*0x7aaa54*/
                *((_DWORD *)v8 + 10) = *((_DWORD *)a3 + 10); /*0x7aaa5f*/
              }
            }
          }
          else
          {
            Array::InsertElement((int *)&g_WOL_ChatState, v6, g_WOL_ChatState); /*0x7aaa74*/
            v12 = 0; /*0x7aaa79*/
            v13 = v35[0]; /*0x7aaa7b*/
            if ( v35[0] > 0 ) /*0x7aaa81*/
            {
              v14 = (char *)Block; /*0x7aaa87*/
              while ( 1 ) /*0x7aaa8b*/
              {
                if ( v12 >= 0 && v12 < v13 ) /*0x7aaa91*/
                  qmemcpy(v39, v14, sizeof(v39)); /*0x7aaa9e*/
                if ( !strcmp((const char *)&v39[13], v6 + 52) ) /*0x7aaaad*/
                  break; /*0x7aaaad*/
                v13 = v35[0]; /*0x7aaad4*/
                v6 = a3; /*0x7aaad8*/
                ++v12; /*0x7aaadf*/
                v14 += 268; /*0x7aaae0*/
                if ( v12 >= v35[0] ) /*0x7aaae8*/
                  goto LABEL_43; /*0x7aaae8*/
              }
              v6 = a3; /*0x7aaaec*/
              v15 = v39[10]; /*0x7aaaf3*/
              Debug::Log(); /*0x7aab01*/
              *((_DWORD *)a3 + 10) = v15; /*0x7aab09*/
            }
LABEL_43:
            String::Assign_Bool(&v32, v6 + 52); /*0x7aab0c*/
            CChatEventSink::EncodeString(39); /*0x7aab1f*/
            String::ToLower((const char **)&v32); /*0x7aab28*/
            if ( MEMORY[0xA8B238][0] == 4 && MEMORY[0xA8B244] == 3 ) /*0x7aab41*/
            {
              unknown_libname_73(&v37); /*0x7aab4b*/
              v16 = g_WOL_ChatPool; /*0x7aab50*/
              v17 = 0; /*0x7aab55*/
              if ( g_WOL_ChatPool <= 0 ) /*0x7aab59*/
              {
LABEL_51:
                v18 = 0; /*0x7aab96*/
                if ( v16 < 0 ) /*0x7aab9a*/
                  v18 = v16; /*0x7aab9c*/
                if ( v18 >= dword_B777A4 ) /*0x7aaba4*/
                {
                  DynamicVector::EnsureCapacity(&g_WOL_ChatPool); /*0x7aabab*/
                  v16 = g_WOL_ChatPool; /*0x7aabb0*/
                }
                if ( v16 >= dword_B777A4 ) /*0x7aabbb*/
                {
                  DynamicVector::EnsureCapacity(&g_WOL_ChatPool); /*0x7aabc2*/
                  v16 = g_WOL_ChatPool; /*0x7aabc7*/
                }
                if ( v18 < v16 ) /*0x7aabce*/
                {
                  memcpy( /*0x7aabeb*/
                    (char *)dword_B777A8 + 4 * v18 + 4,
                    (char *)dword_B777A8 + 4 * v18,
                    4 * (v16 + 0x3FFFFFFF * v18));
                  v16 = g_WOL_ChatPool; /*0x7aabf0*/
                }
                v19 = (char **)((char *)dword_B777A8 + 4 * v18); /*0x7aabfe*/
                if ( v19 ) /*0x7aac03*/
                {
                  String::AssignFromPtr(v19, (const char **)&v32); /*0x7aac0a*/
                  v16 = g_WOL_ChatPool; /*0x7aac0f*/
                }
                g_WOL_ChatPool = v16 + 1; /*0x7aac15*/
              }
              else
              {
                while ( 1 ) /*0x7aab5b*/
                {
                  if ( v17 >= 0 && v17 < v16 ) /*0x7aab61*/
                    String::Reassign((char **)&v37, (const char **)dword_B777A8 + v17); /*0x7aab71*/
                  if ( String::Compare((const char **)&v37, (const char **)&v32) ) /*0x7aab7f*/
                    break; /*0x7aab7f*/
                  v16 = g_WOL_ChatPool; /*0x7aab8c*/
                  if ( ++v17 >= g_WOL_ChatPool ) /*0x7aab94*/
                    goto LABEL_51; /*0x7aab94*/
                }
              }
              DeleteAndZero(&v37); /*0x7aac1e*/
            }
            v20 = *((_DWORD *)g_WOL_ConnectionPool + (dword_B76548(&v32) & ((1 << dword_B7653C) - 1))); /*0x7aac42*/
            if ( v20 ) /*0x7aac47*/
            {
              while ( !String::Compare((const char **)v20, (const char **)&v32) ) /*0x7aac57*/
              {
                v20 = *(_DWORD *)(v20 + 8); /*0x7aac5d*/
                if ( !v20 ) /*0x7aac62*/
                  goto LABEL_66; /*0x7aac62*/
              }
            }
            else
            {
LABEL_66:
              unknown_libname_73(&v38); /*0x7aac64*/
              v21 = g_WOL_LoginToken; /*0x7aac6d*/
              v22 = 0; /*0x7aac72*/
              if ( g_WOL_LoginToken <= 0 ) /*0x7aac76*/
              {
LABEL_72:
                v23 = 0; /*0x7aacb3*/
                if ( v21 < 0 ) /*0x7aacb7*/
                  v23 = v21; /*0x7aacb9*/
                if ( v23 >= dword_B765FC ) /*0x7aacc1*/
                {
                  DynamicVector::EnsureCapacity(&g_WOL_LoginToken); /*0x7aacc8*/
                  v21 = g_WOL_LoginToken; /*0x7aaccd*/
                }
                if ( v21 >= dword_B765FC ) /*0x7aacd8*/
                {
                  DynamicVector::EnsureCapacity(&g_WOL_LoginToken); /*0x7aacdf*/
                  v21 = g_WOL_LoginToken; /*0x7aace4*/
                }
                if ( v23 < v21 ) /*0x7aaceb*/
                {
                  memcpy( /*0x7aad08*/
                    (char *)dword_B76600 + 4 * v23 + 4,
                    (char *)dword_B76600 + 4 * v23,
                    4 * (v21 + 0x3FFFFFFF * v23));
                  v21 = g_WOL_LoginToken; /*0x7aad0d*/
                }
                v24 = (char **)((char *)dword_B76600 + 4 * v23); /*0x7aad1b*/
                if ( v24 ) /*0x7aad20*/
                {
                  String::AssignFromPtr(v24, (const char **)&v32); /*0x7aad27*/
                  v21 = g_WOL_LoginToken; /*0x7aad2c*/
                }
                g_WOL_LoginToken = v21 + 1; /*0x7aad32*/
              }
              else
              {
                while ( 1 ) /*0x7aac78*/
                {
                  if ( v22 >= 0 && v22 < v21 ) /*0x7aac7e*/
                    String::Reassign((char **)&v38, (const char **)dword_B76600 + v22); /*0x7aac8e*/
                  if ( String::Compare((const char **)&v38, (const char **)&v32) ) /*0x7aac9c*/
                    break; /*0x7aac9c*/
                  v21 = g_WOL_LoginToken; /*0x7aaca9*/
                  if ( ++v22 >= g_WOL_LoginToken ) /*0x7aacb1*/
                    goto LABEL_72; /*0x7aacb1*/
                }
              }
              DeleteAndZero(&v38); /*0x7aad3b*/
            }
            v25 = (_DWORD *)g_WOL_HashTable; /*0x7aad40*/
            v26 = *(_DWORD *)(*v25 /*0x7aad5c*/
                            + 4 * ((*(int (__thiscall **)(void **))(g_WOL_HashTable + 24))(&v32) & ((1 << v25[3]) - 1)));
            if ( v26 ) /*0x7aad61*/
            {
              while ( !String::Compare((const char **)v26, (const char **)&v32) ) /*0x7aad71*/
              {
                v26 = *(_DWORD *)(v26 + 112); /*0x7aad73*/
                if ( !v26 ) /*0x7aad78*/
                  goto LABEL_87; /*0x7aad78*/
              }
            }
            else
            {
LABEL_87:
              strcat(v40, String::GetOrEmpty((char **)&v32)); /*0x7aad7a*/
              strcat(v40, MEMORY[0x8318B8]); /*0x7aadd7*/
              ++v33; /*0x7aade5*/
            }
          }
        }
        else
        {
          Array::InsertElement(&g_WOL_AuthPool, v6, g_WOL_AuthPool); /*0x7aa9ae*/
        }
LABEL_88:
        if ( v33 > 20 ) /*0x7aadee*/
        {
          (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0xAC1170] + 20))( /*0x7aae1f*/
            MEMORY[0xAC1170],
            g_WOL_ConnectFlag,
            g_WOL_GameConfig,
            v40,
            g_NetworkRematchState & 0xFFFF00,
            -1,
            0,
            0);
          (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(_DWORD *)MEMORY[0xAC1170] + 56))( /*0x7aae4b*/
            MEMORY[0xAC1170],
            g_WOL_ConnectFlag,
            g_WOL_GameConfig,
            v40,
            g_NetworkRematchState & 0xFFFF00);
          v33 = 0; /*0x7aae5c*/
          memset(v40, 0, 0x200u); /*0x7aae64*/
        }
        v6 = (const char *)*((_DWORD *)v6 + 12); /*0x7aae66*/
        a3 = v6; /*0x7aae6b*/
      }
      while ( v6 ); /*0x7aae72*/
      if ( v33 ) /*0x7aae7e*/
      {
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0xAC1170] + 20))( /*0x7aaead*/
          MEMORY[0xAC1170],
          g_WOL_ConnectFlag,
          g_WOL_GameConfig,
          v40,
          g_NetworkRematchState & 0xFFFF00,
          -1,
          0,
          0);
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(_DWORD *)MEMORY[0xAC1170] + 56))( /*0x7aaed9*/
          MEMORY[0xAC1170],
          g_WOL_ConnectFlag,
          g_WOL_GameConfig,
          v40,
          g_NetworkRematchState & 0xFFFF00);
        memset(v40, 0, 0x200u); /*0x7aaeea*/
      }
    }
    SetEvent(dword_B73690); /*0x7aaef2*/
    if ( MEMORY[0xA8B244] == 3 || MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2 ) /*0x7aaf0a*/
    {
      Debug::Log(); /*0x7aaf18*/
    }
    else
    {
      v27 = (HWND)Dialog::FindByHandle((void *)0x116); /*0x7aaf27*/
      if ( v27 ) /*0x7aaf2e*/
        FillBuddyListWOL(v27); /*0x7aaf32*/
      if ( v34 ) /*0x7aaf3d*/
      {
        GameListRenderWOL(); /*0x7aaf77*/
      }
      else
      {
        PopulateWOLLobbyListBox(); /*0x7aaf3f*/
        v28 = (HWND)Dialog::FindByHandle((void *)0x113); /*0x7aaf49*/
        v29 = v28; /*0x7aaf4e*/
        if ( v28 ) /*0x7aaf52*/
        {
          KillTimer(v28, 0x55Du); /*0x7aaf5a*/
          DlgItem = GetDlgItem(v29, 1373); /*0x7aaf68*/
          EnableWindow(DlgItem, 1); /*0x7aaf6f*/
        }
      }
    }
    goto LABEL_103; /*0x7aaf20*/
  }
  v35[0] = 0; /*0x7aa8af*/
  __3_YAXPAX_Z(0); /*0x7aa8b4*/
LABEL_104:
  DeleteAndZero(&v32); /*0x7aaf8e*/
  return 0; /*0x7aaf9a*/
}


// ==== 0x007AAFB0  CChatEventSink::Unadvise  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt13(int a1, int a2, const char *a3, const char *a4)
{
  const char *v4; // edi
  const char *v5; // esi
  bool v6; // bl
  const void *v7; // esi
  wchar_t *v8; // eax

  if ( !g_NetworkLobby_Init && a2 >= 0 ) /*0x7aafc5*/
  {
    v4 = a4; /*0x7aafcb*/
    String::Assign((char **)&a2, a4); /*0x7aafd5*/
    v5 = a3; /*0x7aafda*/
    if ( a3 ) /*0x7aafe0*/
    {
      if ( (*a3 & 1) != 0 ) /*0x7aafe9*/
      {
        v6 = 1; /*0x7aafeb*/
      }
      else if ( Dialog::FindByHandle((void *)0xC2) ) /*0x7aaff4*/
      {
        v6 = 1; /*0x7aaffd*/
      }
      else
      {
        v6 = Dialog::FindByHandle((void *)0xC9) || dword_B779C0 != 0; /*0x7ab00d*/
      }
    }
    else
    {
      v6 = 0; /*0x7aafe2*/
    }
    DeleteAndZero((void **)&a2); /*0x7ab021*/
    if ( v6 && IsBuddyOrIgnoreWOL(v5) ) /*0x7ab02d*/
    {
      String::Assign((char **)&a2, v4); /*0x7ab03b*/
      CharStringToWide((wchar_t **)&a4, (const char **)&a2); /*0x7ab048*/
      DeleteAndZero((void **)&a2); /*0x7ab051*/
      v7 = v5 + 36; /*0x7ab056*/
      if ( _strcmpi(MEMORY[0xA8B380], v7) ) /*0x7ab05f*/
      {
        v8 = WideString::GetOrEmpty((wchar_t **)&a4); /*0x7ab06f*/
        Dialog::ShowMessage(16711935, (size_t)g_Str_Trace__hs, v7, v8); /*0x7ab081*/
      }
      DeleteAndZero::Alt((void **)&a4); /*0x7ab08d*/
    }
  }
  return 0; /*0x7ab092*/
}


// ==== 0x007AB0A0  CChatEventSink::DispatchStub_42  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt42(int a1, int a2, const char *a3, wchar_t *String)
{
  wchar_t *v4; // edi
  const char *v5; // esi
  bool v6; // bl
  bool v7; // zf
  int v8; // eax
  const void *v9; // esi

  if ( !g_NetworkLobby_Init && a2 >= 0 ) /*0x7ab0b5*/
  {
    v4 = String; /*0x7ab0bb*/
    WideString::Assign((wchar_t **)&a2, String); /*0x7ab0c5*/
    v5 = a3; /*0x7ab0ca*/
    if ( a3 ) /*0x7ab0d0*/
    {
      if ( (*a3 & 1) != 0 ) /*0x7ab0d9*/
      {
        v6 = 1; /*0x7ab0db*/
      }
      else if ( Dialog::FindByHandle((void *)0xC2) ) /*0x7ab0e4*/
      {
        v6 = 1; /*0x7ab0ed*/
      }
      else if ( Dialog::FindByHandle((void *)0xC9) ) /*0x7ab0f6*/
      {
        v6 = 1; /*0x7ab0ff*/
      }
      else
      {
        v7 = WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7ab10c*/
        v8 = dword_B779C0; /*0x7ab10e*/
        if ( v7 ) /*0x7ab113*/
          v8 = dword_B779DC; /*0x7ab115*/
        v6 = v8 != 0; /*0x7ab11c*/
      }
    }
    else
    {
      v6 = 0; /*0x7ab0d2*/
    }
    DeleteAndZero::Alt((void **)&a2); /*0x7ab123*/
    if ( v6 && IsBuddyOrIgnoreWOL(v5) ) /*0x7ab12f*/
    {
      v9 = v5 + 36; /*0x7ab138*/
      if ( _strcmpi(MEMORY[0xA8B380], v9) ) /*0x7ab141*/
        Dialog::ShowMessage(16711935, (size_t)g_Str_Trace__hs, v9, v4); /*0x7ab15a*/
    }
  }
  return 0; /*0x7ab162*/
}


// ==== 0x007AB170  CChatEventSink::EnumDependents  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt14(int a1, int a2, int a3, const char *a4, const char *a5)
{
  const char *v5; // edi
  const char *v6; // esi
  bool v7; // bl
  const void *v8; // esi
  wchar_t *v9; // eax

  if ( !g_NetworkLobby_Init && a2 >= 0 ) /*0x7ab185*/
  {
    v5 = a5; /*0x7ab18b*/
    String::Assign((char **)&a2, a5); /*0x7ab195*/
    v6 = a4; /*0x7ab19a*/
    if ( a4 ) /*0x7ab1a0*/
    {
      if ( (*a4 & 1) != 0 ) /*0x7ab1a9*/
      {
        v7 = 1; /*0x7ab1ab*/
      }
      else if ( Dialog::FindByHandle((void *)0xC2) ) /*0x7ab1b4*/
      {
        v7 = 1; /*0x7ab1bd*/
      }
      else
      {
        v7 = Dialog::FindByHandle((void *)0xC9) || dword_B779C0 != 0; /*0x7ab1cd*/
      }
    }
    else
    {
      v7 = 0; /*0x7ab1a2*/
    }
    DeleteAndZero((void **)&a2); /*0x7ab1e1*/
    if ( v7 && IsBuddyOrIgnoreWOL(v6) ) /*0x7ab1ed*/
    {
      String::Assign((char **)&a2, v5); /*0x7ab1fb*/
      CharStringToWide((wchar_t **)&a5, (const char **)&a2); /*0x7ab208*/
      DeleteAndZero((void **)&a2); /*0x7ab211*/
      v8 = v6 + 36; /*0x7ab216*/
      if ( _strcmpi(MEMORY[0xA8B380], v8) ) /*0x7ab21f*/
      {
        v9 = WideString::GetOrEmpty((wchar_t **)&a5); /*0x7ab22f*/
        Dialog::ShowMessage(3166463, (size_t)g_Str_Trace__hs, v8, v9); /*0x7ab241*/
      }
      DeleteAndZero::Alt((void **)&a5); /*0x7ab24d*/
    }
  }
  return 0; /*0x7ab252*/
}


// ==== 0x007AB260  CChatEventSink::DispatchStub_43  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt43(int a1, int a2, int a3, const char *a4, wchar_t *String)
{
  wchar_t *v5; // edi
  const char *v6; // esi
  bool v7; // bl
  bool v8; // zf
  int v9; // eax
  const void *v10; // esi

  if ( !g_NetworkLobby_Init && a2 >= 0 ) /*0x7ab275*/
  {
    v5 = String; /*0x7ab27b*/
    WideString::Assign((wchar_t **)&a2, String); /*0x7ab285*/
    v6 = a4; /*0x7ab28a*/
    if ( a4 ) /*0x7ab290*/
    {
      if ( (*a4 & 1) != 0 ) /*0x7ab299*/
      {
        v7 = 1; /*0x7ab29b*/
      }
      else if ( Dialog::FindByHandle((void *)0xC2) ) /*0x7ab2a4*/
      {
        v7 = 1; /*0x7ab2ad*/
      }
      else if ( Dialog::FindByHandle((void *)0xC9) ) /*0x7ab2b6*/
      {
        v7 = 1; /*0x7ab2bf*/
      }
      else
      {
        v8 = WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7ab2cc*/
        v9 = dword_B779C0; /*0x7ab2ce*/
        if ( v8 ) /*0x7ab2d3*/
          v9 = dword_B779DC; /*0x7ab2d5*/
        v7 = v9 != 0; /*0x7ab2dc*/
      }
    }
    else
    {
      v7 = 0; /*0x7ab292*/
    }
    DeleteAndZero::Alt((void **)&a2); /*0x7ab2e3*/
    if ( v7 && IsBuddyOrIgnoreWOL(v6) ) /*0x7ab2ef*/
    {
      v10 = v6 + 36; /*0x7ab2f8*/
      if ( _strcmpi(MEMORY[0xA8B380], v10) ) /*0x7ab301*/
        Dialog::ShowMessage(3166463, (size_t)g_Str_Trace__hs, v10, v5); /*0x7ab31a*/
    }
  }
  return 0; /*0x7ab322*/
}


// ==== 0x007AB330  CChatEventSink::COMStub_Return0  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt12(int a1, int a2, int a3, int a4)
{
  return 0; /*0x7ab332*/
}


// ==== 0x007AB340  CChatEventSink::StubReturnFalse  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt25(int a1, int a2, int a3)
{
  return 0; /*0x7ab342*/
}


// ==== 0x007AB350  CChatEventSink::DispatchStub_29  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt29(int a1, int a2, __time32_t Time)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v5; // [esp-4h] [ebp-194h]
  wchar_t Buffer[200]; // [esp+0h] [ebp-190h] BYREF

  if ( !g_NetworkLobby_Init && !a2 ) /*0x7ab368*/
  {
    v5 = (const wchar_t *)unknown_libname_75(&Time); /*0x7ab381*/
    StringCSF = GetStringCSF(aTxtBannedtill, 0, g_Str_File_wonline_cpp, 8809); /*0x7ab38c*/
    swprintf(Buffer, (const size_t)StringCSF, v5); /*0x7ab397*/
    ShowDialogConfirm(Buffer, 0, (int)GameLoop::Thunk, 0); /*0x7ab3ac*/
  }
  return 0; /*0x7ab3b3*/
}


// ==== 0x007AB3C0  CChatEventSink::DispatchStub_31  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt31(int a1, int a2, _BYTE *a3, int a4)
{
  wchar_t *StringCSF; // eax
  wchar_t *v6; // eax
  char *v7; // [esp-4h] [ebp-4h]
  char *v8; // [esp-4h] [ebp-4h]

  if ( !g_NetworkLobby_Init ) /*0x7ab3c7*/
  {
    if ( a4 ) /*0x7ab3d3*/
    {
      v7 = CharToWideString(a3); /*0x7ab3da*/
      StringCSF = GetStringCSF(aTxtChanBan, 0, g_Str_File_wonline_cpp, 8822); /*0x7ab3ec*/
      Dialog::ShowMessage(-1, (size_t)StringCSF, v7); /*0x7ab3f8*/
      return 0; /*0x7ab402*/
    }
    v8 = CharToWideString(a3); /*0x7ab40a*/
    v6 = GetStringCSF(aTxtChanUnban, 0, g_Str_File_wonline_cpp, 8825); /*0x7ab41c*/
    Dialog::ShowMessage(-1, (size_t)v6, v8); /*0x7ab429*/
  }
  return 0; /*0x7ab402*/
}


// ==== 0x007AB440  CChatEventSink::DispatchStub_30  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt30(int a1, int a2, void *a3, int a4, int a5)
{
  signed int v5; // eax
  signed int v6; // ebp
  int v7; // ebx
  size_t v8; // eax
  int v9; // ebx
  char *v10; // eax
  char *v11; // esi
  void *v12; // ebp
  char v13; // dl
  size_t v14; // ecx
  char v15; // dl
  int v17; // [esp+0h] [ebp-E0h]
  signed int v18; // [esp+4h] [ebp-DCh]
  _DWORD v19[27]; // [esp+8h] [ebp-D8h] BYREF
  _DWORD v20[27]; // [esp+74h] [ebp-6Ch] BYREF

  if ( a2 ) /*0x7ab44c*/
    return 0; /*0x7ab65d*/
  v5 = g_WOL_State; /*0x7ab452*/
  v6 = 0; /*0x7ab458*/
  v18 = 0; /*0x7ab45c*/
  if ( (int)g_WOL_State > 0 ) /*0x7ab460*/
  {
    v7 = 0; /*0x7ab467*/
    v17 = 0; /*0x7ab46b*/
    while ( 1 ) /*0x7ab46f*/
    {
      if ( v7 < 0 ) /*0x7ab471*/
        goto LABEL_30; /*0x7ab471*/
      if ( v6 >= v5 ) /*0x7ab479*/
        goto LABEL_30; /*0x7ab479*/
      qmemcpy(v20, (char *)g_WOL_ConnectionFlags + v7, sizeof(v20)); /*0x7ab49a*/
      if ( _strcmpi(&v20[9], a3) ) /*0x7ab4a5*/
        goto LABEL_30; /*0x7ab4af*/
      v20[0] = a4 | a5 & v20[0]; /*0x7ab4d4*/
      v8 = v6; /*0x7ab4db*/
      if ( g_WOL_State ) /*0x7ab4df*/
      {
        if ( v6 >= (int)g_WOL_State ) /*0x7ab4ed*/
          v8 = g_WOL_State - 1; /*0x7ab4ef*/
        memcpy( /*0x7ab51b*/
          (char *)g_WOL_ConnectionFlags + 108 * v8,
          (char *)g_WOL_ConnectionFlags + 108 * v8 + 108,
          108 * g_WOL_State - 36 * (3 * v8 + 3));
        --g_WOL_State; /*0x7ab52f*/
        if ( (int)(3 * g_WOL_State) <= g_WOL_StateFlags ) /*0x7ab539*/
        {
          v9 = g_WOL_StateFlags / 2; /*0x7ab542*/
          if ( g_WOL_StateFlags / 2 < 10 ) /*0x7ab547*/
            v9 = 10; /*0x7ab549*/
          if ( v9 < g_WOL_StateFlags ) /*0x7ab550*/
          {
            v10 = (char *)__2_YAPAXI_Z(108 * v9); /*0x7ab55c*/
            v11 = (char *)g_WOL_ConnectionFlags; /*0x7ab561*/
            v12 = v10; /*0x7ab56c*/
            if ( g_WOL_ConnectionFlags ) /*0x7ab56e*/
            {
              v13 = 108 * g_WOL_State; /*0x7ab580*/
              v14 = (108 * g_WOL_State) >> 2; /*0x7ab582*/
              qmemcpy(v10, g_WOL_ConnectionFlags, 4 * v14); /*0x7ab585*/
              qmemcpy(&v10[4 * v14], &v11[4 * v14], v13 & 3); /*0x7ab58c*/
              v11 = (char *)g_WOL_ConnectionFlags; /*0x7ab58e*/
            }
            __3_YAXPAX_Z(v11); /*0x7ab595*/
            g_WOL_ConnectionFlags = v12; /*0x7ab59a*/
            v6 = v18; /*0x7ab5a0*/
            g_WOL_StateFlags = v9; /*0x7ab5a7*/
          }
          v7 = v17; /*0x7ab5ad*/
        }
      }
      qmemcpy(v19, v20, sizeof(v19)); /*0x7ab5c6*/
      v19[8] = 0; /*0x7ab5cb*/
      if ( dword_B77E48 == 1 ) /*0x7ab5d3*/
        break; /*0x7ab5d3*/
      switch ( dword_B77E48 ) /*0x7ab5dc*/
      {
        case 2: /*0x7ab5dc*/
          InsertBuddyList((const char *)v19, 1); /*0x7ab5e4*/
          break;
        case 3: /*0x7ab5dc*/
          InsertBuddyList((const char *)v19, 0); /*0x7ab5f6*/
          break;
        case 4: /*0x7ab5dc*/
          FindBuddyList((int)v19, 1); /*0x7ab608*/
          break;
        case 5: /*0x7ab5dc*/
          FindBuddyList((int)v19, 0); /*0x7ab61a*/
          break;
        default:
          v15 = 1; /*0x7ab621*/
          goto LABEL_29; /*0x7ab621*/
      }
LABEL_30:
      v5 = g_WOL_State; /*0x7ab62c*/
      ++v6; /*0x7ab631*/
      v7 += 108; /*0x7ab632*/
      v18 = v6; /*0x7ab637*/
      v17 = v7; /*0x7ab63b*/
      if ( v6 >= (int)g_WOL_State ) /*0x7ab63f*/
        goto LABEL_31; /*0x7ab63f*/
    }
    v15 = 0; /*0x7ab5d5*/
LABEL_29:
    InsertGameSettings(v19, v15); /*0x7ab623*/
    goto LABEL_30; /*0x7ab627*/
  }
LABEL_31:
  DisplayRankingsWOL(0); /*0x7ab648*/
  return 0; /*0x7ab654*/
}


// ==== 0x007AB670  CChatEventSink::DispatchStub_24  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt24(int a1, int a2, int a3, int a4, int a5)
{
  char *v6; // ebx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  HWND v12; // eax
  wchar_t *v13; // eax
  wchar_t *StringCSF; // eax
  char *v15; // [esp-18h] [ebp-81Ch]
  char *v16; // [esp-14h] [ebp-818h]
  char *v17; // [esp-14h] [ebp-818h]
  wchar_t *v18; // [esp-10h] [ebp-814h]
  char *v19; // [esp-10h] [ebp-814h]
  HWND DlgItem; // [esp-10h] [ebp-814h]
  char *v21; // [esp-10h] [ebp-814h]
  void *v22; // [esp+0h] [ebp-804h] BYREF
  wchar_t Buffer[1024]; // [esp+4h] [ebp-800h] BYREF

  if ( g_NetworkLobby_Init ) /*0x7ab67d*/
    return 0; /*0x7ab67f*/
  if ( a2 < 0 ) /*0x7ab693*/
    return 0; /*0x7ab695*/
  memset(byte_B785C0, 0, sizeof(byte_B785C0)); /*0x7ab6af*/
  v6 = (char *)(a3 + 52); /*0x7ab6c5*/
  if ( !_strnicmp((const char *)(a3 + 52), g_Str_Lob_41_, strlen(g_Str_Lob_41_)) ) /*0x7ab6cf*/
  {
    v7 = atol((const char *)(strlen(g_Str_Lob_41_) + a3 + 52)); /*0x7ab6f2*/
    v8 = v7 / 8; /*0x7ab6fd*/
    v9 = v7 % 8; /*0x7ab70c*/
    if ( v8 ) /*0x7ab70f*/
      sprintf(byte_B785C0, stru_84B120, (const char *)(&dword_B73E1C)[v9], v8 + 1); /*0x7ab72f*/
    else
      sprintf(byte_B785C0, MEMORY[0x832904], (const char *)(&dword_B73E1C)[v9]); /*0x7ab719*/
  }
  else
  {
    sprintf(byte_B785C0, MEMORY[0x832904], v6); /*0x7ab744*/
  }
  if ( (BYTE1(*(_DWORD *)a4) & 0x80u) == 0 ) /*0x7ab758*/
  {
    if ( !NetworkLobby::CheckMinPlayers() ) /*0x7ab860*/
    {
      v21 = CharToWideString((_BYTE *)(a5 + 36)); /*0x7ab878*/
      v17 = CharToWideString(v6); /*0x7ab880*/
      v15 = CharToWideString((_BYTE *)(a4 + 36)); /*0x7ab889*/
      StringCSF = GetStringCSF(aTxtUserKicked, 0, g_Str_File_wonline_cpp, 8940); /*0x7ab89b*/
      Dialog::ShowMessage(-1, (size_t)StringCSF, v15, v17, v21); /*0x7ab8a8*/
    }
  }
  else
  {
    unknown_libname_74(&v22); /*0x7ab762*/
    if ( g_WOL_ProcessIdle && Event_Helper() ) /*0x7ab770*/
    {
      v18 = GetStringCSF(g_Str_TXT_CHANNEL_FULL, 0, g_Str_File_wonline_cpp, 8912); /*0x7ab78f*/
      WideString::Assign_Alt(&v22, v18); /*0x7ab790*/
    }
    else
    {
      memset(Buffer, 0, sizeof(Buffer)); /*0x7ab79d*/
      v19 = CharToWideString((_BYTE *)(a5 + 36)); /*0x7ab7ae*/
      v16 = CharToWideString(v6); /*0x7ab7b6*/
      v10 = GetStringCSF(aTxtYoureKicked, 0, g_Str_File_wonline_cpp, 8916); /*0x7ab7c8*/
      swprintf(Buffer, (const size_t)v10, (const wchar_t *const)v16, v19); /*0x7ab7d3*/
      WideString::Assign_Alt(&v22, Buffer); /*0x7ab7e4*/
    }
    if ( g_WOL_ProcessIdle ) /*0x7ab7f0*/
    {
      v12 = (HWND)Dialog::FindByHandle((void *)0x113); /*0x7ab829*/
      if ( v12 ) /*0x7ab830*/
      {
        DlgItem = GetDlgItem(v12, 1343); /*0x7ab83e*/
        v13 = WideString::GetOrEmpty((wchar_t **)&v22); /*0x7ab843*/
        DrawDialogText(-1, v13, DlgItem); /*0x7ab850*/
      }
      DeleteAndZero::Alt(&v22); /*0x7ab859*/
    }
    else
    {
      v11 = WideString::GetOrEmpty((wchar_t **)&v22); /*0x7ab7fd*/
      ShowDialogConfirm(v11, 0, (int)GameLoop::Thunk, 0); /*0x7ab806*/
      ++dword_B77DD4; /*0x7ab815*/
      DeleteAndZero::Alt(&v22); /*0x7ab81a*/
    }
  }
  LeaveChannelWOL((const char *)a4); /*0x7ab8b2*/
  DisplayRankingsWOL(0); /*0x7ab8bb*/
  GameListRenderWOL(); /*0x7ab8c0*/
  return 0; /*0x7ab681*/
}


// ==== 0x007AB8E0  CChatEventSink::DispatchStub_33  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt33(int a1, int a2, int a3)
{
  int v4; // ebp
  char *v5; // edi
  char **v6; // eax
  char **v7; // esi
  int v8; // eax
  char *v9; // ecx
  char *v10; // eax
  _DWORD *PlayerProfile; // eax
  char v12; // [esp+7h] [ebp-2Dh]
  int v13; // [esp+8h] [ebp-2Ch] BYREF
  void **v14; // [esp+Ch] [ebp-28h] BYREF
  int v15; // [esp+10h] [ebp-24h]
  int v16; // [esp+14h] [ebp-20h] BYREF
  char v17; // [esp+18h] [ebp-1Ch]
  __int64 v18; // [esp+1Ch] [ebp-18h]
  int v19; // [esp+24h] [ebp-10h]
  int v20; // [esp+28h] [ebp-Ch]
  _DWORD v21[2]; // [esp+2Ch] [ebp-8h] BYREF

  v12 = 0; /*0x7ab8ec*/
  if ( a2 >= 0 ) /*0x7ab8f0*/
  {
    v4 = a3; /*0x7ab909*/
    if ( a3 ) /*0x7ab90f*/
    {
      do /*0x7abac8*/
      {
        unknown_libname_73(&a2); /*0x7ab91b*/
        String::Assign_Bool((void **)&a2, (const char *)(v4 + 36)); /*0x7ab928*/
        String::ToLower((const char **)&a2); /*0x7ab931*/
        HashTable::Lookup(&g_WOL_ConnectionPool, (const char **)&a2, &v13); /*0x7ab945*/
        v5 = *(char **)(v4 + 100); /*0x7ab94a*/
        v6 = (char **)__2_YAPAXI_Z(0xCu); /*0x7ab94f*/
        v7 = v6; /*0x7ab954*/
        if ( v6 ) /*0x7ab95b*/
          unknown_libname_73(v6); /*0x7ab95f*/
        else
          v7 = 0; /*0x7ab966*/
        String::Reassign(v7, (const char **)&a2); /*0x7ab96f*/
        v7[1] = v5; /*0x7ab978*/
        v7[2] = 0; /*0x7ab981*/
        v8 = CComObject_CChatEventSink___ATL::Check((int)&g_WOL_ConnectionPool, (int)&a2); /*0x7ab984*/
        v9 = (char *)*((_DWORD *)g_WOL_ConnectionPool + v8); /*0x7ab98f*/
        *((_DWORD *)g_WOL_ConnectionPool + v8) = v7; /*0x7ab992*/
        if ( v9 ) /*0x7ab997*/
          v7[2] = v9; /*0x7ab999*/
        v19 = dword_B76538; /*0x7ab9b0*/
        v20 = 0; /*0x7ab9b8*/
        v18 = (unsigned int)++dword_B76534; /*0x7ab9ac*/
        if ( (double)(unsigned int)dword_B76534 / (double)dword_B76538 >= dbl_B76558 ) /*0x7ab9d0*/
          HashTable::Grow(&g_WOL_ConnectionPool); /*0x7ab9d7*/
        v10 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7ab9e1*/
        if ( !_strcmpi((const void *)(a3 + 36), v10) ) /*0x7ab9ef*/
        {
          v16 = 0; /*0x7aba03*/
          v17 = 0; /*0x7aba07*/
          ReadRegistryOptionsWOL(&v16); /*0x7aba0b*/
          ComPtr::Constructor(&v14); /*0x7aba14*/
          v14 = &vt_rc_ptr_PlayerProfile; /*0x7aba22*/
          if ( Flag::IsNot2(&v16) ) /*0x7aba26*/
          {
            PlayerProfile = LoadPlayerProfile(v21, (const char **)&g_WebBrowser); /*0x7aba38*/
            ComPtr::Set(&v14, PlayerProfile[1]); /*0x7aba45*/
            v21[0] = &vt_rc_ptr_PlayerProfile; /*0x7aba4e*/
            ComPtr::Release(v21); /*0x7aba52*/
          }
          else
          {
            ComPtr::Set(&v14, dword_B75E4C); /*0x7aba64*/
          }
          GadgetClass::TrackState(v15, *(_DWORD *)(a3 + 100), 2); /*0x7aba77*/
          if ( Flag::IsNot2(&v16) ) /*0x7aba80*/
            SaveProfileWOL(v15, (const char **)&g_WebBrowser); /*0x7aba92*/
          Debug::Log(); /*0x7abaa0*/
          v12 = 1; /*0x7abaac*/
          v14 = &vt_rc_ptr_PlayerProfile; /*0x7abab1*/
          ComPtr::Release(&v14); /*0x7abab5*/
        }
        v4 = *(_DWORD *)(v4 + 32); /*0x7ababa*/
        DeleteAndZero((void **)&a2); /*0x7abac1*/
      }
      while ( v4 ); /*0x7abac8*/
      if ( v12 ) /*0x7abad6*/
        SetEvent(dword_B736BC); /*0x7abadf*/
    }
    return 0; /*0x7abae6*/
  }
  else
  {
    Debug::Log(); /*0x7ab8f7*/
    return 0; /*0x7ab8ff*/
  }
}


// ==== 0x007ABAF0  CChatEventSink::DispatchStub_35  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt35(int a1, int a2, char *a3)
{
  int v3; // esi
  int v4; // esi
  int v5; // edi
  int v6; // ecx
  int v7; // edi
  double v8; // st7
  int v9; // esi
  char **v10; // eax
  char **v11; // esi
  int v12; // edx
  char *v13; // eax
  void *v15; // [esp+0h] [ebp-4Ch] BYREF
  __int64 v16; // [esp+4h] [ebp-48h]
  char v17[64]; // [esp+Ch] [ebp-40h] BYREF

  unknown_libname_73(&v15); /*0x7abafa*/
  strcpy(v17, MEMORY[0xA8B380]); /*0x7abb1c*/
  String::Assign_Bool(&v15, v17); /*0x7abb2e*/
  String::ToLower((const char **)&v15); /*0x7abb37*/
  v3 = *((_DWORD *)g_WOL_ConnectionPool + (dword_B76548(&v15) & ((1 << dword_B7653C) - 1))); /*0x7abb5d*/
  if ( v3 ) /*0x7abb62*/
  {
    while ( !String::Compare((const char **)v3, (const char **)&v15) ) /*0x7abb76*/
    {
      v3 = *(_DWORD *)(v3 + 8); /*0x7abb78*/
      if ( !v3 ) /*0x7abb7d*/
        goto LABEL_19; /*0x7abb7d*/
    }
    if ( dword_B76534 ) /*0x7abb8b*/
    {
      v16 = (unsigned int)(dword_B76534 - 1); /*0x7abb98*/
      *(float *)&v16 = (double)v16 / (double)dword_B76538; /*0x7abbb4*/
      v4 = dword_B76548(&v15) & ((1 << dword_B7653C) - 1); /*0x7abbcc*/
      v5 = *((_DWORD *)g_WOL_ConnectionPool + v4); /*0x7abbd3*/
      if ( v5 ) /*0x7abbd8*/
      {
        if ( String::Compare((const char **)v5, (const char **)&v15) ) /*0x7abbe5*/
        {
          v6 = *((_DWORD *)g_WOL_ConnectionPool + v4); /*0x7abbf4*/
          v7 = *(_DWORD *)(v6 + 8); /*0x7abbf9*/
          if ( v6 ) /*0x7abbfc*/
            ScalarDtor::DeleteAndZero((void **)v6, 1); /*0x7abc00*/
          v8 = *(float *)&v16; /*0x7abc0a*/
          *((_DWORD *)g_WOL_ConnectionPool + v4) = v7; /*0x7abc0e*/
          --dword_B76534; /*0x7abc1d*/
          if ( v8 <= dbl_B76550 ) /*0x7abc27*/
LABEL_18:
            HashMap::Shrink(&g_WOL_ConnectionPool); /*0x7abc7e*/
        }
        else
        {
          v9 = *(_DWORD *)(v5 + 8); /*0x7abc2b*/
          if ( v9 ) /*0x7abc30*/
          {
            while ( !String::Compare((const char **)v9, (const char **)&v15) ) /*0x7abc40*/
            {
              v5 = v9; /*0x7abc42*/
              v9 = *(_DWORD *)(v9 + 8); /*0x7abc44*/
              if ( !v9 ) /*0x7abc49*/
                goto LABEL_17; /*0x7abc49*/
            }
            *(_DWORD *)(v5 + 8) = *(_DWORD *)(v9 + 8); /*0x7abc50*/
            --dword_B76534; /*0x7abc5c*/
            ScalarDtor::DeleteAndZero((void **)v9, 1); /*0x7abc68*/
          }
LABEL_17:
          if ( *(float *)&v16 <= dbl_B76550 ) /*0x7abc7c*/
            goto LABEL_18; /*0x7abc7c*/
        }
      }
    }
  }
LABEL_19:
  v10 = (char **)__2_YAPAXI_Z(0xCu); /*0x7abc88*/
  v11 = v10; /*0x7abc8f*/
  if ( v10 ) /*0x7abc96*/
    unknown_libname_73(v10); /*0x7abc9a*/
  else
    v11 = 0; /*0x7abca1*/
  String::Reassign(v11, (const char **)&v15); /*0x7abcaa*/
  v11[2] = 0; /*0x7abcaf*/
  v11[1] = a3; /*0x7abcb6*/
  v12 = dword_B76548(&v15) & ((1 << dword_B7653C) - 1); /*0x7abcd7*/
  v13 = (char *)*((_DWORD *)g_WOL_ConnectionPool + v12); /*0x7abcd9*/
  *((_DWORD *)g_WOL_ConnectionPool + v12) = v11; /*0x7abcdc*/
  if ( v13 ) /*0x7abce1*/
    v11[2] = v13; /*0x7abce3*/
  v16 = (unsigned int)++dword_B76534; /*0x7abcf6*/
  LODWORD(v16) = dword_B76538; /*0x7abd03*/
  if ( (double)(unsigned int)dword_B76534 / (double)dword_B76538 >= dbl_B76558 ) /*0x7abd1d*/
    HashTable::Grow(&g_WOL_ConnectionPool); /*0x7abd24*/
  DeleteAndZero(&v15); /*0x7abd2d*/
  return 0; /*0x7abd34*/
}


// ==== 0x007ABD40  CChatEventSink::DispatchStub_34  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt34(int a1, int a2, float a3)
{
  float v3; // esi
  float v4; // ebp
  int v5; // esi
  int v6; // esi
  int v7; // edi
  int v8; // ecx
  int v9; // edi
  double v10; // st7
  int v11; // esi
  char *v12; // edi
  char **v13; // eax
  char **v14; // esi
  int v15; // edx
  char *v16; // eax

  if ( a2 < 0 ) /*0x7abd4c*/
  {
    Debug::Log(); /*0x7abf8e*/
    return 0; /*0x7abf96*/
  }
  else
  {
    v3 = a3; /*0x7abd54*/
    v4 = a3; /*0x7abd5c*/
    unknown_libname_73(&a2); /*0x7abd5e*/
    if ( v3 != 0.0 ) /*0x7abd65*/
    {
      do /*0x7abd74*/
      {
        String::Assign_Bool((void **)&a2, (const char *)(LODWORD(v4) + 36)); /*0x7abd74*/
        v5 = *((_DWORD *)g_WOL_MessageQueue + (dword_B76698(&a2) & ((1 << dword_B7668C) - 1))); /*0x7abd98*/
        if ( !v5 ) /*0x7abd9d*/
          goto LABEL_21; /*0x7abd9d*/
        while ( !String::Compare((const char **)v5, (const char **)&a2) ) /*0x7abdb1*/
        {
          v5 = *(_DWORD *)(v5 + 8); /*0x7abdb3*/
          if ( !v5 ) /*0x7abdb8*/
            goto LABEL_21; /*0x7abdb8*/
        }
        if ( !g_WOL_MessageConfig ) /*0x7abdc6*/
          goto LABEL_21; /*0x7abdc6*/
        a3 = (double)(unsigned int)(g_WOL_MessageConfig - 1) / (double)g_WOL_MsgPool; /*0x7abdef*/
        v6 = dword_B76698(&a2) & ((1 << dword_B7668C) - 1); /*0x7abe07*/
        v7 = *((_DWORD *)g_WOL_MessageQueue + v6); /*0x7abe0e*/
        if ( !v7 ) /*0x7abe13*/
          goto LABEL_21; /*0x7abe13*/
        if ( String::Compare((const char **)v7, (const char **)&a2) ) /*0x7abe20*/
        {
          v8 = *((_DWORD *)g_WOL_MessageQueue + v6); /*0x7abe2f*/
          v9 = *(_DWORD *)(v8 + 8); /*0x7abe34*/
          if ( v8 ) /*0x7abe37*/
            ScalarDtor::DeleteAndZero((void **)v8, 1); /*0x7abe3b*/
          v10 = a3; /*0x7abe45*/
          *((_DWORD *)g_WOL_MessageQueue + v6) = v9; /*0x7abe49*/
          --g_WOL_MessageConfig; /*0x7abe58*/
          if ( v10 > dbl_B766A0 ) /*0x7abe62*/
            goto LABEL_21; /*0x7abe62*/
        }
        else
        {
          v11 = *(_DWORD *)(v7 + 8); /*0x7abe66*/
          if ( v11 ) /*0x7abe6b*/
          {
            while ( !String::Compare((const char **)v11, (const char **)&a2) ) /*0x7abe7b*/
            {
              v7 = v11; /*0x7abe7d*/
              v11 = *(_DWORD *)(v11 + 8); /*0x7abe7f*/
              if ( !v11 ) /*0x7abe84*/
                goto LABEL_19; /*0x7abe84*/
            }
            *(_DWORD *)(v7 + 8) = *(_DWORD *)(v11 + 8); /*0x7abe8b*/
            --g_WOL_MessageConfig; /*0x7abe97*/
            ScalarDtor::DeleteAndZero((void **)v11, 1); /*0x7abea3*/
          }
LABEL_19:
          if ( a3 > dbl_B766A0 ) /*0x7abeb7*/
            goto LABEL_21; /*0x7abeb7*/
        }
        HashMap::Shrink(&g_WOL_MessageQueue); /*0x7abebe*/
LABEL_21:
        v12 = *(char **)(LODWORD(v4) + 104); /*0x7abec3*/
        v13 = (char **)__2_YAPAXI_Z(0xCu); /*0x7abec8*/
        v14 = v13; /*0x7abecd*/
        if ( v13 ) /*0x7abed4*/
          unknown_libname_73(v13); /*0x7abed8*/
        else
          v14 = 0; /*0x7abedf*/
        String::Reassign(v14, (const char **)&a2); /*0x7abee8*/
        v14[1] = v12; /*0x7abef1*/
        v14[2] = 0; /*0x7abef4*/
        v15 = dword_B76698(&a2) & ((1 << dword_B7668C) - 1); /*0x7abf11*/
        v16 = (char *)*((_DWORD *)g_WOL_MessageQueue + v15); /*0x7abf13*/
        *((_DWORD *)g_WOL_MessageQueue + v15) = v14; /*0x7abf16*/
        if ( v16 ) /*0x7abf1b*/
          v14[2] = v16; /*0x7abf1d*/
        if ( (double)(unsigned int)++g_WOL_MessageConfig / (double)g_WOL_MsgPool >= dbl_B766A8 ) /*0x7abf54*/
          HashTable::Grow(&g_WOL_MessageQueue); /*0x7abf5b*/
        v4 = *(float *)(LODWORD(v4) + 32); /*0x7abf60*/
      }
      while ( v4 != 0.0 ); /*0x7abd74*/
    }
    DisplayRankingsWOL(0); /*0x7abf6c*/
    DeleteAndZero((void **)&a2); /*0x7abf79*/
    return 0; /*0x7abf80*/
  }
}


// ==== 0x007ABFA0  CChatEventSink::DispatchStub_36  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt36(int a1, int a2, int a3)
{
  int v3; // ebp
  int v4; // esi
  int v5; // esi
  int v6; // edi
  int v7; // ecx
  int v8; // edi
  int v9; // esi
  char **v10; // eax
  char **v11; // esi
  int v12; // edx
  char *v13; // eax
  char v15[64]; // [esp+Ch] [ebp-40h] BYREF
  float v16; // [esp+54h] [ebp+8h]

  if ( a2 ) /*0x7abfac*/
  {
    Debug::Log(); /*0x7ac208*/
    return 0; /*0x7ac210*/
  }
  v3 = a3; /*0x7abfb3*/
  MEMORY[0xA8B3AC] = a3; /*0x7abfbd*/
  unknown_libname_73(&a3); /*0x7abfc3*/
  strcpy(v15, MEMORY[0xA8B380]); /*0x7abfe5*/
  String::Assign_Bool((void **)&a3, v15); /*0x7abff7*/
  String::ToLower((const char **)&a3); /*0x7ac000*/
  v4 = *((_DWORD *)g_WOL_MessageQueue + (dword_B76698(&a3) & ((1 << dword_B7668C) - 1))); /*0x7ac024*/
  if ( v4 ) /*0x7ac029*/
  {
    while ( !String::Compare((const char **)v4, (const char **)&a3) ) /*0x7ac03d*/
    {
      v4 = *(_DWORD *)(v4 + 8); /*0x7ac03f*/
      if ( !v4 ) /*0x7ac044*/
        goto LABEL_20; /*0x7ac044*/
    }
    if ( g_WOL_MessageConfig ) /*0x7ac052*/
    {
      v16 = (double)(unsigned int)(g_WOL_MessageConfig - 1) / (double)g_WOL_MsgPool; /*0x7ac07b*/
      v5 = dword_B76698(&a3) & ((1 << dword_B7668C) - 1); /*0x7ac093*/
      v6 = *((_DWORD *)g_WOL_MessageQueue + v5); /*0x7ac09a*/
      if ( v6 ) /*0x7ac09f*/
      {
        if ( String::Compare((const char **)v6, (const char **)&a3) ) /*0x7ac0ac*/
        {
          v7 = *((_DWORD *)g_WOL_MessageQueue + v5); /*0x7ac0bb*/
          v8 = *(_DWORD *)(v7 + 8); /*0x7ac0c0*/
          if ( v7 ) /*0x7ac0c3*/
            ScalarDtor::DeleteAndZero((void **)v7, 1); /*0x7ac0c7*/
          *((_DWORD *)g_WOL_MessageQueue + v5) = v8; /*0x7ac0d5*/
          --g_WOL_MessageConfig; /*0x7ac0e4*/
          if ( v16 > dbl_B766A0 ) /*0x7ac0ee*/
            goto LABEL_20; /*0x7ac0ee*/
        }
        else
        {
          v9 = *(_DWORD *)(v6 + 8); /*0x7ac0f2*/
          if ( v9 ) /*0x7ac0f7*/
          {
            while ( !String::Compare((const char **)v9, (const char **)&a3) ) /*0x7ac107*/
            {
              v6 = v9; /*0x7ac109*/
              v9 = *(_DWORD *)(v9 + 8); /*0x7ac10b*/
              if ( !v9 ) /*0x7ac110*/
                goto LABEL_18; /*0x7ac110*/
            }
            *(_DWORD *)(v6 + 8) = *(_DWORD *)(v9 + 8); /*0x7ac117*/
            --g_WOL_MessageConfig; /*0x7ac123*/
            ScalarDtor::DeleteAndZero((void **)v9, 1); /*0x7ac12f*/
          }
LABEL_18:
          if ( v16 > dbl_B766A0 ) /*0x7ac143*/
            goto LABEL_20; /*0x7ac143*/
        }
        HashMap::Shrink(&g_WOL_MessageQueue); /*0x7ac14a*/
      }
    }
  }
LABEL_20:
  v10 = (char **)__2_YAPAXI_Z(0xCu); /*0x7ac14f*/
  v11 = v10; /*0x7ac156*/
  if ( v10 ) /*0x7ac15d*/
    unknown_libname_73(v10); /*0x7ac161*/
  else
    v11 = 0; /*0x7ac168*/
  String::Reassign(v11, (const char **)&a3); /*0x7ac171*/
  v11[1] = (char *)v3; /*0x7ac17a*/
  v11[2] = 0; /*0x7ac17d*/
  v12 = dword_B76698(&a3) & ((1 << dword_B7668C) - 1); /*0x7ac19a*/
  v13 = (char *)*((_DWORD *)g_WOL_MessageQueue + v12); /*0x7ac19c*/
  *((_DWORD *)g_WOL_MessageQueue + v12) = v11; /*0x7ac19f*/
  if ( v13 ) /*0x7ac1a4*/
    v11[2] = v13; /*0x7ac1a6*/
  if ( (double)(unsigned int)++g_WOL_MessageConfig / (double)g_WOL_MsgPool >= dbl_B766A8 ) /*0x7ac1e0*/
    HashTable::Grow(&g_WOL_MessageQueue); /*0x7ac1e7*/
  DeleteAndZero((void **)&a3); /*0x7ac1f0*/
  return 0; /*0x7ac1f7*/
}


// ==== 0x007AC220  CChatEventSink::DispatchStub_37  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::vt_37_(int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // eax
  int v5; // esi
  char **v6; // ecx
  HWND v7; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  HWND v10; // eax
  HWND v11; // esi
  HWND v12; // eax
  char v14[108]; // [esp+8h] [ebp-6Ch] BYREF

  if ( a2 >= 0 ) /*0x7ac22b*/
  {
    v3 = a3; /*0x7ac23b*/
    if ( a3 ) /*0x7ac23d*/
    {
      while ( 1 ) /*0x7ac24e*/
      {
        String::Assign((char **)&a3, (const char *)(v3 + 36)); /*0x7ac24e*/
        if ( MapSeed::CheckName((const char **)&a3) ) /*0x7ac25a*/
          break; /*0x7ac25a*/
LABEL_20:
        DeleteAndZero((void **)&a3); /*0x7ac3f9*/
        v3 = *(_DWORD *)(v3 + 32); /*0x7ac405*/
        if ( !v3 ) /*0x7ac40a*/
          goto LABEL_21; /*0x7ac40a*/
      }
      String::AssignFromPtr((char **)&a2, (const char **)&a3); /*0x7ac276*/
      StringVector::Insert(&g_WindowManager, (const char **)&a2, g_WindowManager); /*0x7ac28f*/
      StringVector::Insert(&g_WOL_RequestManager, (const char **)&a2, g_WOL_RequestManager); /*0x7ac2a8*/
      v4 = g_WOL_BuddyList; /*0x7ac2ad*/
      v5 = g_WOL_BuddyList; /*0x7ac2b2*/
      if ( g_WOL_BuddyList >= dword_B779B4 ) /*0x7ac2be*/
      {
        DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7ac2c5*/
        v4 = g_WOL_BuddyList; /*0x7ac2ca*/
      }
      if ( v4 >= dword_B779B4 ) /*0x7ac2d5*/
      {
        DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7ac2dc*/
        v4 = g_WOL_BuddyList; /*0x7ac2e1*/
      }
      if ( v5 < v4 ) /*0x7ac2e8*/
      {
        memcpy((char *)g_WOL_ChannelMgr + 4 * v5 + 4, (char *)g_WOL_ChannelMgr + 4 * v5, 4 * (v4 + 0x3FFFFFFF * v5)); /*0x7ac305*/
        v4 = g_WOL_BuddyList; /*0x7ac30a*/
      }
      v6 = (char **)((char *)g_WOL_ChannelMgr + 4 * v5); /*0x7ac318*/
      if ( v6 ) /*0x7ac31d*/
      {
        String::AssignFromPtr(v6, (const char **)&a2); /*0x7ac327*/
        v4 = g_WOL_BuddyList; /*0x7ac32c*/
      }
      g_WOL_BuddyList = v4 + 1; /*0x7ac337*/
      if ( String::Length(&g_WOL_AuthObject) ) /*0x7ac33c*/
      {
        if ( (unsigned int)(time(0) - g_WOL_ParseState) < 5 ) /*0x7ac35a*/
        {
LABEL_19:
          DeleteAndZero((void **)&a2); /*0x7ac3ed*/
          goto LABEL_20; /*0x7ac3f4*/
        }
        DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x7ac365*/
      }
      if ( g_WOL_RequestManager ) /*0x7ac371*/
      {
        if ( DynamicStringArray::Get(&g_WOL_RequestManager, (char **)&g_WOL_AuthObject, 0) ) /*0x7ac37f*/
          DynamicArray::Remove(&g_WOL_RequestManager, 0); /*0x7ac38f*/
        g_WOL_ParseState = time(0); /*0x7ac39b*/
        memset(v14, 0, sizeof(v14)); /*0x7ac3ab*/
        strcpy(&v14[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x7ac3d8*/
        (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 96))(MEMORY[0xAC116C], v14); /*0x7ac3ea*/
      }
      goto LABEL_19; /*0x7ac3ea*/
    }
LABEL_21:
    SendGameListWOL(); /*0x7ac410*/
    v7 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7ac41a*/
    if ( v7 ) /*0x7ac422*/
    {
      g_WOL_ChannelList &= ~0x200u; /*0x7ac430*/
      if ( !g_WOL_ChannelList ) /*0x7ac436*/
        CloseDialog(v7, 0); /*0x7ac43c*/
    }
    Current = Dialog::GetCurrent(); /*0x7ac441*/
    DlgItem = GetDlgItem(Current, 1344); /*0x7ac452*/
    if ( DlgItem ) /*0x7ac456*/
      SetFocus(DlgItem); /*0x7ac459*/
    v10 = (HWND)Dialog::FindByHandle((void *)0x116); /*0x7ac464*/
    v11 = v10; /*0x7ac469*/
    if ( v10 ) /*0x7ac46d*/
    {
      FillBuddyListWOL(v10); /*0x7ac471*/
      KillTimer(v11, 0x704u); /*0x7ac47c*/
      v12 = GetDlgItem(v11, 1796); /*0x7ac48a*/
      EnableWindow(v12, 1); /*0x7ac48d*/
    }
  }
  return 0; /*0x7ac493*/
}


// ==== 0x007AC4A0  CChatEventSink::DispatchStub_38  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt38(int a1, int a2, int a3)
{
  return 0; /*0x7ac4a2*/
}


// ==== 0x007AC4B0  CChatEventSink::DispatchStub_39  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt39(int a1, int a2, int a3)
{
  return 0; /*0x7ac4b2*/
}


// ==== 0x007AC4C0  CChatEventSink::DispatchStub_45  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt45(int a1, int a2, int a3)
{
  return 0; /*0x7ac4c2*/
}


// ==== 0x007AC4D0  CChatEventSink::DispatchStub_46  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt46(int a1, int a2, int a3)
{
  return 0; /*0x7ac4d2*/
}


// ==== 0x007AC4E0  CChatEventSink::DispatchStub_47  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::_vt47(int a1, int a2, int a3)
{
  return 0; /*0x7ac4e2*/
}


// ==== 0x007AC4F0  nullsub_265  this=-  sig=ida-proto ====
void __cdecl nullsub_265()
{
  ; /*0x7ac4f0*/
}


// ==== 0x007AC500  HandleLogoutWOL_Handle  this=-  sig=csp ====
int __stdcall sub_7AC500(int a1)
{
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // ebp
  unsigned int v6; // esi

  if ( !a1 ) /*0x7ac507*/
    return -2147024809; /*0x7ac509*/
  v2 = *(_DWORD *)(a1 + 16); /*0x7ac514*/
  if ( v2 && *(_DWORD *)v2 ) /*0x7ac51b*/
  {
    do /*0x7ac546*/
    {
      v3 = *(_DWORD *)(v2 + 16); /*0x7ac520*/
      if ( v3 ) /*0x7ac525*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*(_DWORD *)(v2 + 16)); /*0x7ac52a*/
      *(_DWORD *)(v2 + 16) = 0; /*0x7ac52f*/
      (*(void (__stdcall **)(_DWORD))(v2 + 32))(0); /*0x7ac536*/
      if ( *(_DWORD *)a1 == 100 ) /*0x7ac53c*/
        v2 += 28; /*0x7ac53e*/
      else
        v2 += 36; /*0x7ac543*/
    }
    while ( *(_DWORD *)v2 ); /*0x7ac546*/
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 28)); /*0x7ac555*/
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 52)); /*0x7ac55b*/
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 76)); /*0x7ac561*/
  v4 = *(_DWORD **)(a1 + 128); /*0x7ac563*/
  if ( v4 ) /*0x7ac56b*/
  {
    do /*0x7ac583*/
    {
      ((void (__stdcall *)(_DWORD))*v4)(v4[1]); /*0x7ac571*/
      v5 = (_DWORD *)v4[2]; /*0x7ac573*/
      __3_YAXPAX_Z(v4); /*0x7ac577*/
      v4 = v5; /*0x7ac57f*/
    }
    while ( v5 ); /*0x7ac583*/
  }
  if ( *(_DWORD *)(a1 + 24) && *(_BYTE *)(a1 + 108) ) /*0x7ac58c*/
  {
    if ( *(_DWORD *)(a1 + 120) ) /*0x7ac593*/
    {
      v6 = 0; /*0x7ac5a0*/
      do /*0x7ac5b1*/
        HeapDestroy(*(HANDLE *)(*(_DWORD *)(a1 + 120) + 4 * v6++)); /*0x7ac5a9*/
      while ( v6 <= *(_DWORD *)(a1 + 116) ); /*0x7ac5b1*/
    }
    HeapDestroy(*(HANDLE *)(a1 + 24)); /*0x7ac5b7*/
  }
  return 0; /*0x7ac50e*/
}


// ==== 0x007AC5D0  WonlineStringDialogControl::QueryInterface  this=WonlineStringDialogControl  sig=csp ====
WonlineStringDialogControl *__thiscall WonlineStringDialogControl::QueryInterface(
        DialogControl_OwnerDraw *Block,
        char a2)
{
  Block->vfptr = &vt_WonlineStringDialogControl; /*0x7ac5d6*/
  DeleteAndZero((void **)Block + 3); /*0x7ac5dc*/
  Block->vfptr = &off_7F7624; /*0x7ac5e3*/
  OwnerDrawControl::InitVtable(Block); /*0x7ac5e9*/
  if ( (a2 & 1) != 0 ) /*0x7ac5f3*/
    __3_YAXPAX_Z(Block); /*0x7ac5f6*/
  return (WonlineStringDialogControl *)Block; /*0x7ac600*/
}


// ==== 0x007AC610  SimpleWonlineDialogControl::CreateGameWOL_Create_7AC610  this=WonlineStringDialogControl  sig=csp ====
_DWORD *__thiscall CreateGameWOL_Create_7AC610(SimpleWonlineDialogControl *this)
{
  SimpleDialogControl::Constructor((SimpleDialogControl_OwnerDraw *)this); /*0x7ac613*/
  this->vfptr = &off_7F7624; /*0x7ac61b*/
  unknown_libname_73((_DWORD *)this + 3); /*0x7ac621*/
  this->vfptr = &vt_WonlineStringDialogControl; /*0x7ac626*/
  return &this->vfptr; /*0x7ac62e*/
}


// ==== 0x007AC630  CreateGameDialogControl::Constructor_WonlineStringDialogControl  this=CreateGameDialogControl  sig=csp ====
CreateGameDialogControl *__thiscall WonlineStringDialogControl_12_::Constructor_WonlineStringDialogControl(
        DialogControl_OwnerDraw *Block,
        char a2)
{
  Block->vfptr = &vt_WonlineStringDialogControl; /*0x7ac636*/
  DeleteAndZero((void **)Block + 3); /*0x7ac63c*/
  Block->vfptr = &off_7F7624; /*0x7ac643*/
  OwnerDrawControl::InitVtable(Block); /*0x7ac649*/
  if ( (a2 & 1) != 0 ) /*0x7ac653*/
    __3_YAXPAX_Z(Block); /*0x7ac656*/
  return (CreateGameDialogControl *)Block; /*0x7ac660*/
}


// ==== 0x007AC670  ObjectClass::System_Init_7AC670  this=ObjectClass  sig=csp ====
int __thiscall sub_7AC670(int *this)
{
  int result; // eax

  result = *this; /*0x7ac670*/
  if ( *this ) /*0x7ac670*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x7ac679*/
  return result; /*0x7ac67c*/
}


// ==== 0x007AC680  ObjectClass::System_Init_7AC680  this=ObjectClass  sig=csp ====
int __thiscall sub_7AC680(int *this)
{
  int result; // eax

  result = *this; /*0x7ac680*/
  if ( *this ) /*0x7ac680*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x7ac689*/
  return result; /*0x7ac68c*/
}


// ==== 0x007AC690  _CComObject_VCChatEventSink_ATL::AddRef  this=?$CComObject@VCChatEventSink@@@ATL  sig=csp ====
LONG __thiscall CComObject_CChatEventSink___ATL::AddRef(CComObject_VCChatEventSink___ATL *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x7ac69e*/
}


// ==== 0x007AC6B0  _CComObject_VCChatEventSink_ATL::Release  this=?$CComObject@VCChatEventSink@@@ATL  sig=csp ====
LONG __thiscall CComObject_CChatEventSink___ATL::Release(CComObject_VCChatEventSink___ATL *this)
{
  LONG v1; // ebx
  char *Block; // [esp+14h] [ebp+4h]

  v1 = InterlockedDecrement((volatile LONG *)Block + 1); /*0x7ac6c4*/
  if ( !v1 && Block ) /*0x7ac6cc*/
  {
    *(_DWORD *)Block = &vt_ATL_CComObject_CChatEventSink; /*0x7ac6d3*/
    *((_DWORD *)Block + 1) = 1; /*0x7ac6d9*/
    InterlockedDecrement(&Addend); /*0x7ac6df*/
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 8)); /*0x7ac6e5*/
    __3_YAXPAX_Z(Block); /*0x7ac6ec*/
  }
  return v1; /*0x7ac6f4*/
}


// ==== 0x007AC700  _CComObject_VCChatEventSink_ATL::QueryInterface  this=?$CComObject@VCChatEventSink@@@ATL  sig=csp ====
int __thiscall CComObject_CChatEventSink___ATL::QueryInterface(CComObject_VCChatEventSink___ATL *this)
{
  _UNKNOWN **v1; // esi
  int result; // eax
  _DWORD *v3; // eax
  BOOL v4; // ebp
  int (__stdcall *v5)(char *, _DWORD *, char **, void *); // eax
  void *v6; // eax
  char *v7; // esi
  char *v8; // [esp+14h] [ebp+4h]
  _DWORD *v9; // [esp+18h] [ebp+8h]
  char **v10; // [esp+1Ch] [ebp+Ch]

  v1 = &off_7F7698; /*0x7ac70a*/
  if ( !v10 ) /*0x7ac70f*/
    return -2147467261; /*0x7ac71a*/
  *v10 = 0; /*0x7ac721*/
  if ( !*v9 && !v9[1] && v9[2] == 192 && v9[3] == 1174405120 ) /*0x7ac743*/
  {
    (*(void (__stdcall **)(char *))(*(_DWORD *)v8 + 4))(v8); /*0x7ac756*/
    *v10 = v8; /*0x7ac759*/
    return 0; /*0x7ac761*/
  }
  while ( 1 ) /*0x7ac76d*/
  {
    v3 = *v1; /*0x7ac76d*/
    v4 = *v1 == 0; /*0x7ac776*/
    if ( !*v1 || *v3 == *v9 && v3[1] == v9[1] && v3[2] == v9[2] && v3[3] == v9[3] ) /*0x7ac7a0*/
      break; /*0x7ac7a0*/
LABEL_17:
    v6 = v1[5]; /*0x7ac7c3*/
    v1 += 3; /*0x7ac7c6*/
    if ( !v6 ) /*0x7ac7cb*/
      return -2147467262; /*0x7ac7cd*/
  }
  v5 = (int (__stdcall *)(char *, _DWORD *, char **, void *))v1[2]; /*0x7ac7a2*/
  if ( v5 != (int (__stdcall *)(char *, _DWORD *, char **, void *))1 ) /*0x7ac7a8*/
  {
    result = v5(v8, v9, v10, v1[1]); /*0x7ac7b5*/
    if ( !result || !v4 && result < 0 ) /*0x7ac7c1*/
      return result; /*0x7ac7c1*/
    goto LABEL_17; /*0x7ac7c1*/
  }
  v7 = (char *)v1[1] + (_DWORD)v8; /*0x7ac7e0*/
  (*(void (__stdcall **)(char *))(*(_DWORD *)v7 + 4))(v7); /*0x7ac7e5*/
  *v10 = v7; /*0x7ac7e8*/
  return 0; /*0x7ac711*/
}


// ==== 0x007AC800  _CComObject_VCNetUtilEventSink_ATL::AddRef  this=?$CComObject@VCNetUtilEventSink@@@ATL  sig=csp ====
LONG __thiscall ComStreamClass::AddRef(CComObject_VCNetUtilEventSink___ATL *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x7ac80e*/
}


// ==== 0x007AC820  _CComObject_VCNetUtilEventSink_ATL::Release  this=?$CComObject@VCNetUtilEventSink@@@ATL  sig=csp ====
LONG __thiscall ComStreamClass::Release(CComObject_VCNetUtilEventSink___ATL *this)
{
  LONG v1; // ebx
  char *Block; // [esp+14h] [ebp+4h]

  v1 = InterlockedDecrement((volatile LONG *)Block + 1); /*0x7ac834*/
  if ( !v1 && Block ) /*0x7ac83c*/
  {
    *(_DWORD *)Block = &off_7F766C; /*0x7ac843*/
    *((_DWORD *)Block + 1) = 1; /*0x7ac849*/
    InterlockedDecrement(&Addend); /*0x7ac84f*/
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 8)); /*0x7ac855*/
    __3_YAXPAX_Z(Block); /*0x7ac85c*/
  }
  return v1; /*0x7ac864*/
}


// ==== 0x007AC870  _CComObject_VCNetUtilEventSink_ATL::QueryInterface  this=?$CComObject@VCNetUtilEventSink@@@ATL  sig=csp ====
int __thiscall ComStreamClass::QueryInterface(CComObject_VCNetUtilEventSink___ATL *this)
{
  _UNKNOWN **v1; // esi
  int result; // eax
  _DWORD *v3; // eax
  BOOL v4; // ebp
  int (__stdcall *v5)(char *, _DWORD *, char **, void *); // eax
  void *v6; // eax
  char *v7; // esi
  char *v8; // [esp+14h] [ebp+4h]
  _DWORD *v9; // [esp+18h] [ebp+8h]
  char **v10; // [esp+1Ch] [ebp+Ch]

  v1 = &off_7F7650; /*0x7ac87a*/
  if ( !v10 ) /*0x7ac87f*/
    return -2147467261; /*0x7ac88a*/
  *v10 = 0; /*0x7ac891*/
  if ( !*v9 && !v9[1] && v9[2] == 192 && v9[3] == 1174405120 ) /*0x7ac8b3*/
  {
    (*(void (__stdcall **)(char *))(*(_DWORD *)v8 + 4))(v8); /*0x7ac8c6*/
    *v10 = v8; /*0x7ac8c9*/
    return 0; /*0x7ac8d1*/
  }
  while ( 1 ) /*0x7ac8dd*/
  {
    v3 = *v1; /*0x7ac8dd*/
    v4 = *v1 == 0; /*0x7ac8e6*/
    if ( !*v1 || *v3 == *v9 && v3[1] == v9[1] && v3[2] == v9[2] && v3[3] == v9[3] ) /*0x7ac910*/
      break; /*0x7ac910*/
LABEL_17:
    v6 = v1[5]; /*0x7ac933*/
    v1 += 3; /*0x7ac936*/
    if ( !v6 ) /*0x7ac93b*/
      return -2147467262; /*0x7ac93d*/
  }
  v5 = (int (__stdcall *)(char *, _DWORD *, char **, void *))v1[2]; /*0x7ac912*/
  if ( v5 != (int (__stdcall *)(char *, _DWORD *, char **, void *))1 ) /*0x7ac918*/
  {
    result = v5(v8, v9, v10, v1[1]); /*0x7ac925*/
    if ( !result || !v4 && result < 0 ) /*0x7ac931*/
      return result; /*0x7ac931*/
    goto LABEL_17; /*0x7ac931*/
  }
  v7 = (char *)v1[1] + (_DWORD)v8; /*0x7ac950*/
  (*(void (__stdcall **)(char *))(*(_DWORD *)v7 + 4))(v7); /*0x7ac955*/
  *v10 = v7; /*0x7ac958*/
  return 0; /*0x7ac881*/
}


// ==== 0x007AC970  _DynamicVectorClass_PAUtConnInfoStruct::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall WonlineStringDialogControl_12_::sub_7AC970(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x7ac976*/
  *(_DWORD *)(this + 16) = 0; /*0x7ac979*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x7ac980*/
  {
    __3_YAXPAX_Z(v2); /*0x7ac986*/
    *(_DWORD *)(this + 4) = 0; /*0x7ac98e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x7ac991*/
  *(_DWORD *)(this + 8) = 0; /*0x7ac994*/
}


// ==== 0x007AC9A0  _DynamicVectorClass_PAUtConnInfoStruct::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall WonlineStringDialogControl_12_::sub_7AC9A0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x7ac9a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x7ac9b5*/
  else
    return 0; /*0x7ac9a7*/
}


// ==== 0x007AC9C0  _VectorClass_PAUtConnInfoStruct::Seek  this=VectorClass  sig=csp ====
int __thiscall WonlineStringDialogControl_12_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x7ac9ca*/
}


// ==== 0x007AC9D0  ObjectClass::GetBuddyEntryWOL  this=ObjectClass  sig=csp ====
char __thiscall WOL_GetBuddyEntry(int *this, _DWORD *a2, int a3)
{
  if ( a3 < 0 || a3 >= *this ) /*0x7ac9da*/
    return 0; /*0x7ac9f4*/
  *a2 = this->vtable3 + 248 * a3; /*0x7ac9ef*/
  return 1; /*0x7ac9f1*/
}


// ==== 0x007ACA00  DynamicClass::Insert  this=HashTable  sig=csp ====
char __thiscall DynamicClass::Insert(int *this, HashTable *aP1, IUnknown *aP2)
{
  int v4; // ebp
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  AbstractClass *v8; // esi
  CCINIClass *v9; // edx
  CCINIClass *v10; // esi
  int v11; // eax
  AbstractClass *v12; // esi
  CCINIClass *v13; // edx
  CCINIClass *v14; // esi
  HashTable *v15; // edi
  int v17; // [esp+10h] [ebp-4h]
  int v18; // [esp+10h] [ebp-4h]
  int aP2a; // [esp+1Ch] [ebp+8h]
  int aP2b; // [esp+1Ch] [ebp+8h]

  v4 = (int)aP2; /*0x7aca05*/
  v5 = *this; /*0x7aca09*/
  if ( (int)aP2 > v5 ) /*0x7aca0f*/
    v4 = v5; /*0x7aca11*/
  v6 = this->q004; /*0x7aca13*/
  if ( v4 >= v6 && v5 >= v6 ) /*0x7aca20*/
  {
    v7 = 2 * v5; /*0x7aca22*/
    aP2a = 2 * v5; /*0x7aca28*/
    if ( 2 * v5 < 10 ) /*0x7aca2c*/
    {
      aP2a = 10; /*0x7aca2e*/
      v7 = 10; /*0x7aca36*/
    }
    v8 = (AbstractClass *)(108 * v7); /*0x7aca40*/
    v9 = (CCINIClass *)__2_YAPAXI_Z(108 * v7); /*0x7aca49*/
    memset(v9, 0, (unsigned int)v8); /*0x7aca54*/
    v17 = (int)v9; /*0x7aca5e*/
    v10 = (CCINIClass *)this->q008; /*0x7aca64*/
    if ( v10 ) /*0x7aca69*/
      qmemcpy(v9, v10, 108 * *this); /*0x7aca7d*/
    __3_YAXPAX_Z((void *)this->q008); /*0x7aca8a*/
    this->q008 = v17; /*0x7aca9a*/
    this->q004 = aP2a; /*0x7aca9d*/
  }
  if ( *this >= this->q004 ) /*0x7acaa7*/
  {
    v11 = 2 * *this; /*0x7acaa9*/
    aP2b = v11; /*0x7acaae*/
    if ( v11 < 10 ) /*0x7acab2*/
    {
      aP2b = 10; /*0x7acab4*/
      v11 = 10; /*0x7acabc*/
    }
    v12 = (AbstractClass *)(108 * v11); /*0x7acac6*/
    v13 = (CCINIClass *)__2_YAPAXI_Z(108 * v11); /*0x7acacf*/
    memset(v13, 0, (unsigned int)v12); /*0x7acada*/
    v18 = (int)v13; /*0x7acae4*/
    v14 = (CCINIClass *)this->q008; /*0x7acaea*/
    if ( v14 ) /*0x7acaef*/
      qmemcpy(v13, v14, 108 * *this); /*0x7acb03*/
    __3_YAXPAX_Z((void *)this->q008); /*0x7acb10*/
    this->q008 = v18; /*0x7acb20*/
    this->q004 = aP2b; /*0x7acb23*/
  }
  if ( v4 < *this ) /*0x7acb2a*/
    memcpy((void *)(this->q008 + 36 * (3 * v4 + 3)), (const void *)(this->q008 + 108 * v4), 108 * *this - 108 * v4); /*0x7acb53*/
  v15 = (HashTable *)(this->q008 + 108 * v4); /*0x7acb65*/
  if ( v15 ) /*0x7acb6a*/
    qmemcpy(v15, aP1, 0x6Cu); /*0x7acb75*/
  ++*this; /*0x7acb7c*/
  return 1; /*0x7acb79*/
}


// ==== 0x007ACB90  ObjectClass::StartGameWOL_Start_7ACB90  this=ObjectClass  sig=csp ====
char __thiscall StartGameWOL_Start_7ACB90(int *this, IUnknown *aP1, int a3)
{
  if ( a3 < 0 || a3 >= *this ) /*0x7acb9b*/
    return 0; /*0x7acbbc*/
  qmemcpy(aP1, (const void *)(this->vtable3 + 108 * a3), 0x6Cu); /*0x7acbb3*/
  return 1; /*0x7acbb8*/
}


// ==== 0x007ACBD0  ObjectClass::?_Release__NonReentrantLock_details_Concurrency__QAEXXZ_1  this=ObjectClass  sig=csp ====
void __thiscall __Release__NonReentrantLock_details_Concurrency__QAEXXZ_1(
        Concurrency::details::_NonReentrantLock *this)
{
  *(_DWORD *)this = 0; /*0x7acbd0*/
}


// ==== 0x007ACBE0  ObjectClass::ConnectAndLoginWOL_Connect_7ACBE0  this=TechnoTypeClass  sig=csp ====
char __thiscall ConnectAndLoginWOL_Connect_7ACBE0(void *this, const char **a1, TechnoTypeClass *aP2)
{
  ObjectClass *v4; // eax
  ObjectClass *v5; // esi
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  CCINIClass *v9; // esi
  int v10; // eax
  int v11; // ecx
  void *v12; // edi
  unsigned int v13; // edx
  CCINIClass *v14; // edi
  int v15; // esi
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  CCINIClass *v20; // [esp+18h] [ebp+4h]
  CCINIClass *Block; // [esp+1Ch] [ebp+8h]

  v4 = (ObjectClass *)__2_YAPAXI_Z(0xCu); /*0x7acbea*/
  v5 = v4; /*0x7acbef*/
  if ( v4 ) /*0x7acbf6*/
    unknown_libname_73(v4); /*0x7acbfa*/
  else
    v5 = 0; /*0x7acc01*/
  String::Reassign((char **)v5, (AbstractClass *)a1); /*0x7acc0a*/
  v6 = *(_DWORD *)aP2->vtable0; /*0x7acc13*/
  *(_DWORD *)&v5->__pad_0[8] = 0; /*0x7acc15*/
  *(_DWORD *)&v5->__pad_0[4] = v6; /*0x7acc1c*/
  v7 = (*((int (__thiscall **)(const char **))this + 6))(a1) & ((1 << this->vtable4) - 1); /*0x7acc2f*/
  v8 = *(_DWORD *)(*(_DWORD *)this + 4 * v7); /*0x7acc33*/
  *(_DWORD *)(*(_DWORD *)this + 4 * v7) = v5; /*0x7acc3b*/
  if ( v8 ) /*0x7acc3d*/
    *(_DWORD *)&v5->__pad_0[8] = v8; /*0x7acc3f*/
  v9 = (CCINIClass *)this->vtable3; /*0x7acc45*/
  v10 = this->vtable2 + 1; /*0x7acc48*/
  this->vtable2 = v10; /*0x7acc55*/
  if ( (double)(unsigned int)v10 / (double)(int)v9 >= *((double *)this + 5) && this->abstractFlags != 1 ) /*0x7acc7e*/
  {
    Block = *(CCINIClass **)this; /*0x7acc89*/
    v11 = this->vtable4 + 1; /*0x7acc97*/
    this->vtable3 = 2 * (_DWORD)v9; /*0x7acc99*/
    this->vtable4 = v11; /*0x7acc9c*/
    v12 = (void *)__2_YAPAXI_Z(8 * (_DWORD)v9); /*0x7acca7*/
    v13 = 4 * this->vtable3; /*0x7accac*/
    *(_DWORD *)this = v12; /*0x7accb3*/
    memset(v12, 0, v13); /*0x7accb8*/
    if ( (int)v9 > 0 ) /*0x7accc3*/
    {
      v14 = Block; /*0x7accc5*/
      v20 = v9; /*0x7accc9*/
      do /*0x7acd07*/
      {
        v15 = *(_DWORD *)v14->__pad_0; /*0x7acccd*/
        if ( *(_DWORD *)v14->__pad_0 ) /*0x7acccd*/
        {
          do /*0x7accf9*/
          {
            v16 = (*((int (__thiscall **)(int))this + 6))(v15) & ((1 << this->vtable4) - 1); /*0x7acce3*/
            v17 = *(_DWORD *)(*(_DWORD *)this + 4 * v16); /*0x7acce7*/
            *(_DWORD *)(*(_DWORD *)this + 4 * v16) = v15; /*0x7acced*/
            v18 = *(_DWORD *)(v15 + 8); /*0x7accef*/
            *(_DWORD *)(v15 + 8) = v17; /*0x7accf2*/
            v15 = v18; /*0x7accf5*/
          }
          while ( v18 ); /*0x7accf9*/
        }
        v14 = (CCINIClass *)((char *)v14 + 4); /*0x7accff*/
        v20 = (CCINIClass *)((char *)v20 - 1); /*0x7acd03*/
      }
      while ( v20 ); /*0x7acd07*/
    }
    __3_YAXPAX_Z(Block); /*0x7acd0e*/
  }
  return 1; /*0x7acd16*/
}


// ==== 0x007ACD30  Array::CleanupArrayWOL  this=Array  sig=csp ====
int __thiscall WOL_CleanupArray(int *this)
{
  int i; // edi
  int result; // eax

  for ( i = 0; i < *this; ++i ) /*0x7acd39*/
  {
    DeleteAndZero((void **)(this->q008 + 4 * i)); /*0x7acd41*/
    result = *this; /*0x7acd46*/
  }
  *this = 0; /*0x7acd4d*/
  return result; /*0x7acd53*/
}


// ==== 0x007ACD60  DynamicArray::Remove  this=DynamicArray  sig=csp ====
char __thiscall DynamicArray_Remove(void *this, int a2)
{
  int v3; // eax
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // ebp
  void *v9; // eax
  const void *v10; // esi
  void *v11; // [esp+8h] [ebp+4h]

  v3 = *(_DWORD *)this; /*0x7acd63*/
  if ( !*(_DWORD *)this ) /*0x7acd63*/
    return 0; /*0x7acd69*/
  v5 = a2; /*0x7acd71*/
  if ( a2 < 0 ) /*0x7acd78*/
    v5 = 0; /*0x7acd7a*/
  if ( v5 >= v3 ) /*0x7acd7e*/
    v5 = v3 - 1; /*0x7acd80*/
  DeleteAndZero((void **)(4 * v5 + this->q008)); /*0x7acd8f*/
  memcpy( /*0x7acdb0*/
    (void *)(this->q008 + 4 * v5),
    (const void *)(this->q008 + 4 * (v5 + 1)),
    4 * (*(_DWORD *)this + 0x3FFFFFFF * (v5 + 1)));
  v6 = *(_DWORD *)this - 1; /*0x7acdbb*/
  *(_DWORD *)this = v6; /*0x7acdbd*/
  v7 = this->q004; /*0x7acdbf*/
  if ( 3 * v6 <= v7 ) /*0x7acdc7*/
  {
    v8 = v7 / 2; /*0x7acdd0*/
    if ( v7 / 2 < 10 ) /*0x7acdd5*/
      v8 = 10; /*0x7acdd7*/
    if ( v8 < v7 ) /*0x7acdde*/
    {
      v9 = __2_YAPAXI_Z(4 * v8); /*0x7acde8*/
      v10 = (const void *)this->q008; /*0x7acded*/
      v11 = v9; /*0x7acdf5*/
      if ( v10 ) /*0x7acdf9*/
        qmemcpy(v9, v10, 4 * *(_DWORD *)this); /*0x7ace07*/
      __3_YAXPAX_Z(*((void **)this + 2)); /*0x7ace14*/
      this->q008 = v11; /*0x7ace20*/
      this->q004 = v8; /*0x7ace23*/
    }
  }
  return 1; /*0x7acd6b*/
}


// ==== 0x007ACE30  DynamicStringArray::Get  this=DynamicStringArray  sig=csp ====
char __thiscall DynamicStringArray::Get(int *this, ObjectClass *aP1, int a3)
{
  if ( a3 < 0 || a3 >= *this ) /*0x7ace3a*/
    return 0; /*0x7ace51*/
  String::Reassign((char **)aP1, (AbstractClass *)(this->q008 + 4 * a3)); /*0x7ace47*/
  return 1; /*0x7ace4e*/
}


// ==== 0x007ACE60  HashTable::CleanupAndResize  this=HashTable  sig=csp ====
unsigned int __thiscall HashTable_CleanupAndResize(_DWORD *this)
{
  unsigned int i; // ebp
  int v3; // esi
  void **v4; // edi
  unsigned int result; // eax
  unsigned int v6; // esi
  int v7; // ecx
  int *v8; // ebp
  void *v9; // edi
  unsigned int v10; // edx
  int *v11; // edi
  unsigned int v12; // ebp
  int v13; // esi
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int *v17; // [esp+10h] [ebp-4h]

  for ( i = 0; i < this->q008; *(_DWORD *)(*this + 4 * i - 4) = 0 ) /*0x7ace67*/
  {
    v3 = *(_DWORD *)(*this + 4 * i); /*0x7ace72*/
    while ( v3 ) /*0x7ace77*/
    {
      v4 = (void **)v3; /*0x7ace79*/
      v3 = *(_DWORD *)(v3 + 8); /*0x7ace7b*/
      DeleteAndZero(v4); /*0x7ace84*/
      __3_YAXPAX_Z(v4); /*0x7ace8a*/
    }
    ++i; /*0x7ace98*/
  }
  result = this->q030; /*0x7acea8*/
  v6 = this->q008; /*0x7aceab*/
  for ( this->q004 = 0; v6 > result; v6 = this->q008 ) /*0x7aceb7*/
  {
    if ( this->q050 ) /*0x7acebd*/
      break; /*0x7acec2*/
    if ( v6 > result ) /*0x7aceca*/
    {
      v7 = this->q00C; /*0x7aced0*/
      v8 = (int *)*this; /*0x7aced3*/
      v17 = (int *)*this; /*0x7aced7*/
      this->q008 = v6 >> 1; /*0x7acede*/
      this->q00C = v7 - 1; /*0x7acee8*/
      v9 = __2_YAPAXI_Z(4 * (v6 >> 1)); /*0x7acef4*/
      v10 = 4 * this->q008; /*0x7acef9*/
      *this = v9; /*0x7acf00*/
      memset(v9, 0, v10); /*0x7acf05*/
      if ( (int)v6 > 0 ) /*0x7acf10*/
      {
        v11 = v8; /*0x7acf12*/
        v12 = v6; /*0x7acf14*/
        do /*0x7acf48*/
        {
          v13 = *v11; /*0x7acf16*/
          if ( *v11 ) /*0x7acf16*/
          {
            do /*0x7acf42*/
            {
              v14 = ((int (__thiscall *)(int))this->q018)(v13) & ((1 << this->q00C) - 1); /*0x7acf2c*/
              v15 = *(_DWORD *)(*this + 4 * v14); /*0x7acf30*/
              *(_DWORD *)(*this + 4 * v14) = v13; /*0x7acf36*/
              v16 = *(_DWORD *)(v13 + 8); /*0x7acf38*/
              *(_DWORD *)(v13 + 8) = v15; /*0x7acf3b*/
              v13 = v16; /*0x7acf3e*/
            }
            while ( v16 ); /*0x7acf42*/
          }
          ++v11; /*0x7acf44*/
          --v12; /*0x7acf47*/
        }
        while ( v12 ); /*0x7acf48*/
        v8 = v17; /*0x7acf4a*/
      }
      __3_YAXPAX_Z(v8); /*0x7acf4f*/
    }
    result = this->q030; /*0x7acf57*/
  }
  return result; /*0x7acf65*/
}


// ==== 0x007ACF70  HashTable::Rebuild  this=HashTable  sig=csp ====
unsigned int __thiscall HashTable_Rebuild(_DWORD *this)
{
  unsigned int i; // ebp
  int v3; // esi
  void **v4; // edi
  unsigned int result; // eax
  unsigned int v6; // esi
  int v7; // ecx
  int *v8; // ebp
  void *v9; // edi
  unsigned int v10; // edx
  int *v11; // edi
  unsigned int v12; // ebp
  int v13; // esi
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int *v17; // [esp+10h] [ebp-4h]

  for ( i = 0; i < this->q008; *(_DWORD *)(*this + 4 * i - 4) = 0 ) /*0x7acf77*/
  {
    v3 = *(_DWORD *)(*this + 4 * i); /*0x7acf82*/
    while ( v3 ) /*0x7acf87*/
    {
      v4 = (void **)v3; /*0x7acf89*/
      v3 = *(_DWORD *)(v3 + 272); /*0x7acf8b*/
      DeleteAndZero(v4); /*0x7acf97*/
      __3_YAXPAX_Z(v4); /*0x7acf9d*/
    }
    ++i; /*0x7acfab*/
  }
  result = this->q030; /*0x7acfbb*/
  v6 = this->q008; /*0x7acfbe*/
  for ( this->q004 = 0; v6 > result; v6 = this->q008 ) /*0x7acfca*/
  {
    if ( this->q050 ) /*0x7acfd0*/
      break; /*0x7acfd5*/
    if ( v6 > result ) /*0x7acfdd*/
    {
      v7 = this->q00C; /*0x7acfe3*/
      v8 = (int *)*this; /*0x7acfe6*/
      v17 = (int *)*this; /*0x7acfea*/
      this->q008 = v6 >> 1; /*0x7acff1*/
      this->q00C = v7 - 1; /*0x7acffb*/
      v9 = __2_YAPAXI_Z(4 * (v6 >> 1)); /*0x7ad007*/
      v10 = 4 * this->q008; /*0x7ad00c*/
      *this = v9; /*0x7ad013*/
      memset(v9, 0, v10); /*0x7ad018*/
      if ( (int)v6 > 0 ) /*0x7ad023*/
      {
        v11 = v8; /*0x7ad025*/
        v12 = v6; /*0x7ad027*/
        do /*0x7ad061*/
        {
          v13 = *v11; /*0x7ad029*/
          if ( *v11 ) /*0x7ad029*/
          {
            do /*0x7ad05b*/
            {
              v14 = ((int (__thiscall *)(int))this->q018)(v13) & ((1 << this->q00C) - 1); /*0x7ad03f*/
              v15 = *(_DWORD *)(*this + 4 * v14); /*0x7ad043*/
              *(_DWORD *)(*this + 4 * v14) = v13; /*0x7ad049*/
              v16 = *(_DWORD *)(v13 + 272); /*0x7ad04b*/
              *(_DWORD *)(v13 + 272) = v15; /*0x7ad051*/
              v13 = v16; /*0x7ad057*/
            }
            while ( v16 ); /*0x7ad05b*/
          }
          ++v11; /*0x7ad05d*/
          --v12; /*0x7ad060*/
        }
        while ( v12 ); /*0x7ad061*/
        v8 = v17; /*0x7ad063*/
      }
      __3_YAXPAX_Z(v8); /*0x7ad068*/
    }
    result = this->q030; /*0x7ad070*/
  }
  return result; /*0x7ad07e*/
}


// ==== 0x007AD090  _VectorClass_PAUtConnInfoStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall WonlineStringDialogControl_12_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x7ad092*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x7ad09d*/
  {
    v3 = 0; /*0x7ad09f*/
    if ( v2 <= 0 ) /*0x7ad0a3*/
      return 1; /*0x7ad0c3*/
    v4 = (_DWORD *)this->Items; /*0x7ad0a5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x7ad0ab*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x7ad0b4*/
    {
      ++v3; /*0x7ad0b6*/
      ++v4; /*0x7ad0b7*/
      if ( v3 >= v2 ) /*0x7ad0bc*/
        return 1; /*0x7ad0bc*/
    }
  }
  return 0; /*0x7ad0be*/
}


// ==== 0x007AD0D0  _VectorClass_PAUtConnInfoStruct::Release  this=VectorClass  sig=csp ====
char __thiscall WonlineStringDialogControl_12_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x7ad0dc*/
  {
    this->IsInitialized = 0; /*0x7ad0e6*/
    if ( a3 ) /*0x7ad0ec*/
      v4 = a3; /*0x7ad102*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x7ad0fe*/
    this->IsInitialized = 1; /*0x7ad106*/
    if ( v4 ) /*0x7ad10a*/
    {
      if ( this->Items ) /*0x7ad115*/
      {
        v6 = this->Capacity; /*0x7ad11c*/
        if ( a2 < v6 ) /*0x7ad121*/
          v6 = a2; /*0x7ad123*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x7ad129*/
          ++i; /*0x7ad12e*/
        if ( this->IsAllocated ) /*0x7ad13b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x7ad146*/
          this->Items = 0; /*0x7ad14e*/
        }
      }
      this->Items = v4; /*0x7ad157*/
      this->Capacity = a2; /*0x7ad15f*/
      this->IsAllocated = a3 == 0; /*0x7ad162*/
      return 1; /*0x7ad168*/
    }
    else
    {
      return 0; /*0x7ad10f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x7ad172*/
    return 1; /*0x7ad178*/
  }
}


// ==== 0x007AD180  _VectorClass_PAUtConnInfoStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall WonlineStringDialogControl_12_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x7ad18d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x7ad193*/
    *(_DWORD *)(this + 4) = 0; /*0x7ad19b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x7ad19e*/
  *(_DWORD *)(this + 8) = 0; /*0x7ad1a1*/
}


// ==== 0x007AD1B0  _VectorClass_PAUtConnInfoStruct::Read  this=VectorClass  sig=csp ====
int __thiscall WonlineStringDialogControl_12_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x7ad1b0*/
    return 0; /*0x7ad1b8*/
  v3 = *(_DWORD *)(this + 8); /*0x7ad1be*/
  result = 0; /*0x7ad1c1*/
  if ( v3 <= 0 ) /*0x7ad1c5*/
    return -1; /*0x7ad1dc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x7ad1cb*/
  {
    if ( ++result >= v3 ) /*0x7ad1da*/
      return -1; /*0x7ad1da*/
  }
  return result; /*0x7ad1ba*/
}


// ==== 0x007AD1F0  _VectorClass_PAUtConnInfoStruct::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall WonlineStringDialogControl_12_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x7ad1f0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x7ad205*/
  else
    return 0; /*0x7ad1f7*/
}


// ==== 0x007AD210  _DynamicVectorClass_PAUtConnInfoStruct::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall WonlineStringDialogControl_12_::sub_7AD210(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x7ad21c*/
  {
    this->IsInitialized = 0; /*0x7ad222*/
    if ( a3 ) /*0x7ad228*/
      v4 = a3; /*0x7ad23e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x7ad23a*/
    this->IsInitialized = 1; /*0x7ad242*/
    if ( !v4 ) /*0x7ad246*/
      return 0; /*0x7ad2ba*/
    if ( this->Items ) /*0x7ad248*/
    {
      v5 = this->q008; /*0x7ad24f*/
      if ( a2 < v5 ) /*0x7ad254*/
        v5 = a2; /*0x7ad256*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x7ad25c*/
        ++i; /*0x7ad261*/
      if ( this->IsAllocated ) /*0x7ad26e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x7ad279*/
        this->Items = 0; /*0x7ad281*/
      }
    }
    this->Items = v4; /*0x7ad28a*/
    this->q008 = a2; /*0x7ad292*/
    this->IsAllocated = a3 == 0; /*0x7ad295*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x7ad29e*/
  }
  v7 = this->q008; /*0x7ad2a1*/
  if ( v7 < this->Items ) /*0x7ad2a9*/
    this->Items = v7; /*0x7ad2ab*/
  return 1; /*0x7ad2ae*/
}


// ==== 0x007AD2C0  _DynamicVectorClass_PAUtConnInfoStruct::FindItem  this=DynamicVector  sig=csp ====
int __thiscall WonlineStringDialogControl_12_::sub_7AD2C0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x7ad2c0*/
  result = 0; /*0x7ad2c3*/
  if ( v2 <= 0 ) /*0x7ad2c8*/
    return -1; /*0x7ad2df*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x7ad2ce*/
  {
    if ( ++result >= v2 ) /*0x7ad2dd*/
      return -1; /*0x7ad2dd*/
  }
  return result; /*0x7ad2e2*/
}


// ==== 0x007AD2F0  ObjectClass::ResetSystemWOL_Reset  this=SessionClass  sig=csp ====
void **__thiscall ResetSystemWOL_Reset(SessionClass *this, char a2)
{
  DeleteAndZero((void **)this); /*0x7ad2f3*/
  if ( (a2 & 1) != 0 ) /*0x7ad2fd*/
    __3_YAXPAX_Z(this); /*0x7ad300*/
  return (void **)this; /*0x7ad30a*/
}


// ==== 0x007AD310  ScalarDtor::DeleteAndZero  this=ScalarDtor  sig=csp ====
void **__thiscall ScalarDtor::DeleteAndZero(void **Block, char a2)
{
  DeleteAndZero(Block); /*0x7ad313*/
  if ( (a2 & 1) != 0 ) /*0x7ad31d*/
    __3_YAXPAX_Z(Block); /*0x7ad320*/
  return Block; /*0x7ad32a*/
}


// ==== 0x007AD330  Object::DtorWithDelete  this=AbstractClass  sig=csp ====
SessionClass *__thiscall Object::DtorWithDelete(void **Block, char a2)
{
  DeleteAndZero(Block); /*0x7ad333*/
  if ( (a2 & 1) != 0 ) /*0x7ad33d*/
    __3_YAXPAX_Z(Block); /*0x7ad340*/
  return (SessionClass *)Block; /*0x7ad34a*/
}


// ==== 0x007AD350  CChatEventSink::DeleteAndZero  this=CChatEventSink  sig=csp ====
ObjectClass *__thiscall CChatEventSink::DeleteAndZero(void **Block, char a2)
{
  DeleteAndZero(Block); /*0x7ad353*/
  if ( (a2 & 1) != 0 ) /*0x7ad35d*/
    __3_YAXPAX_Z(Block); /*0x7ad360*/
  return (ObjectClass *)Block; /*0x7ad36a*/
}


// ==== 0x007AD370  _VectorClass_PAUtConnInfoStruct::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall WonlineStringDialogControl_12_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x7ad373*/
  *Block = &vt_VectorClass_tConnInfoStruct; /*0x7ad376*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x7ad380*/
  {
    __3_YAXPAX_Z(v3); /*0x7ad388*/
    *(Block + 1) = 0; /*0x7ad390*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x7ad39b*/
  *(Block + 2) = 0; /*0x7ad3a1*/
  if ( (a2 & 1) != 0 ) /*0x7ad3a8*/
    __3_YAXPAX_Z(Block); /*0x7ad3ab*/
  return (VectorClass *)Block; /*0x7ad3b5*/
}


// ==== 0x007AD3C0  _DynamicVectorClass_PAUtConnInfoStruct::Constructor_VectorClass_tConnInfoStruct___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall WonlineStringDialogControl_12_::Constructor_VectorClass_tConnInfoStruct___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x7ad3c3*/
  *Block = &vt_VectorClass_tConnInfoStruct; /*0x7ad3c6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x7ad3d0*/
  {
    __3_YAXPAX_Z(v3); /*0x7ad3d8*/
    *(Block + 1) = 0; /*0x7ad3e0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x7ad3eb*/
  *(Block + 2) = 0; /*0x7ad3f1*/
  if ( (a2 & 1) != 0 ) /*0x7ad3f8*/
    __3_YAXPAX_Z(Block); /*0x7ad3fb*/
  return (DynamicVector *)Block; /*0x7ad405*/
}


// ==== 0x007AD410  ?$CComObject@VCDownloadEventSink@@@ATL::System_Init_7AD410  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
char *__thiscall System_Init_7AD410(CComObject_VCDownloadEventSink___ATL *this, int a2)
{
  *((_DWORD *)this + 1) = 0; /*0x7ad416*/
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 2)); /*0x7ad41e*/
  this->vfptr = &vt_ATL_CComObject_CDownloadEventSink; /*0x7ad429*/
  InterlockedIncrement(&Addend); /*0x7ad42f*/
  return (char *)this; /*0x7ad437*/
}


// ==== 0x007AD440  _CComObject_VCDownloadEventSink_ATL::ddtor  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
int __stdcall WonlineStringDialogControl_28_::_vt03(int a1)
{
  HWND Current; // eax

  Current = Dialog::GetCurrent(); /*0x7ad449*/
  SendMessageA(Current, 0x5F4u, 0, 0); /*0x7ad44f*/
  return 0; /*0x7ad457*/
}


// ==== 0x007AD460  _CComObject_VCDownloadEventSink_ATL::Read  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
int __stdcall WonlineStringDialogControl_28_::_vt04(int a1, LPARAM lParam)
{
  HWND Current; // eax

  Current = Dialog::GetCurrent(); /*0x7ad46c*/
  SendMessageA(Current, 0x5F5u, 0, lParam); /*0x7ad472*/
  return 0; /*0x7ad47a*/
}


// ==== 0x007AD480  _CComObject_VCDownloadEventSink_ATL::Write  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
int __stdcall WonlineStringDialogControl_28_::_vt05(int a1, wchar_t *Format, unsigned int a3, int a4, int a5)
{
  HWND Current; // eax
  wchar_t *v6; // eax
  wchar_t *StringCSF; // eax
  HWND v8; // eax
  HWND DlgItem; // eax
  wchar_t Buffer[200]; // [esp+8h] [ebp-190h] BYREF

  Buffer[0] = 0; /*0x7ad49d*/
  Current = Dialog::GetCurrent(); /*0x7ad4b7*/
  SendDlgItemMessageA(Current, 1478, 0x402u, 100 * (int)Format / a3, 0); /*0x7ad4bd*/
  if ( a5 <= 0 ) /*0x7ad4cc*/
  {
    StringCSF = GetStringCSF(MEMORY[0x84D730], 0, g_Str_File_wonline_cpp, 5172); /*0x7ad50a*/
    swprintf(Buffer, (const size_t)StringCSF, Format, a3); /*0x7ad515*/
  }
  else
  {
    v6 = GetStringCSF(aTxtBytesWTime, 0, g_Str_File_wonline_cpp, 5167); /*0x7ad4e2*/
    swprintf(Buffer, (const size_t)v6, Format, a3, a5); /*0x7ad4ed*/
  }
  if ( time(0) != dword_B77EA8 ) /*0x7ad52d*/
  {
    v8 = Dialog::GetCurrent(); /*0x7ad538*/
    DlgItem = GetDlgItem(v8, 1480); /*0x7ad53e*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x7ad551*/
    dword_B77EA8 = time(0); /*0x7ad561*/
  }
  return 0; /*0x7ad52f*/
}


// ==== 0x007AD580  _CComObject_VCDownloadEventSink_ATL::Draw  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
int __stdcall WonlineStringDialogControl_28_::_vt07(int a1, int a2)
{
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v5; // [esp-4h] [ebp-194h]
  wchar_t *StringCSF; // [esp-4h] [ebp-194h]
  wchar_t Buffer[200]; // [esp+0h] [ebp-190h] BYREF

  Buffer[0] = 0; /*0x7ad58d*/
  if ( a2 == 2 ) /*0x7ad597*/
  {
    StringCSF = GetStringCSF(aTxtConnecting, 0, g_Str_File_wonline_cpp, 5191); /*0x7ad5d6*/
    swprintf(Buffer, (const size_t)StringCSF, *(const wchar_t *const *)Buffer); /*0x7ad5d8*/
  }
  else if ( a2 == 4 ) /*0x7ad59c*/
  {
    v5 = GetStringCSF(aTxtFindingPatc, 0, g_Str_File_wonline_cpp, 5195); /*0x7ad5b4*/
    swprintf(Buffer, (const size_t)v5, *(const wchar_t *const *)Buffer); /*0x7ad5ba*/
  }
  Current = Dialog::GetCurrent(); /*0x7ad5e5*/
  DlgItem = GetDlgItem(Current, 1480); /*0x7ad5eb*/
  SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x7ad5fe*/
  return 0; /*0x7ad606*/
}


// ==== 0x007AD610  _CComObject_VCDownloadEventSink_ATL::StubReturnFalse  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
int __stdcall WonlineStringDialogControl_28_::_vt06(int a1)
{
  return 0; /*0x7ad612*/
}


// ==== 0x007AD620  _CComObject_VCDownloadEventSink_ATL::AddRef  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
LONG __stdcall WonlineStringDialogControl_28_::_vt01(int a1)
{
  return InterlockedIncrement((volatile LONG *)(a1 + 4)); /*0x7ad62e*/
}


// ==== 0x007AD640  _CComObject_VCDownloadEventSink_ATL::Release  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
LONG __stdcall WonlineStringDialogControl_28_::_vt02(char *Block)
{
  LONG v1; // ebx

  v1 = InterlockedDecrement((volatile LONG *)Block + 1); /*0x7ad654*/
  if ( !v1 && Block ) /*0x7ad65c*/
  {
    *(_DWORD *)Block = &vt_ATL_CComObject_CDownloadEventSink; /*0x7ad663*/
    *((_DWORD *)Block + 1) = 1; /*0x7ad669*/
    InterlockedDecrement(&Addend); /*0x7ad66f*/
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 8)); /*0x7ad675*/
    __3_YAXPAX_Z(Block); /*0x7ad67c*/
  }
  return v1; /*0x7ad684*/
}


// ==== 0x007AD690  _CComObject_VCDownloadEventSink_ATL::QueryInterface  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
int __stdcall WonlineStringDialogControl_28_::_vt00(char *a1, _DWORD *a2, char **a3)
{
  _UNKNOWN **v3; // esi
  int result; // eax
  _DWORD *v5; // eax
  BOOL v6; // ebp
  int (__stdcall *v7)(char *, _DWORD *, char **, void *); // eax
  void *v8; // eax
  char *v9; // esi

  v3 = &off_7F7638; /*0x7ad69a*/
  if ( !a3 ) /*0x7ad69f*/
    return -2147467261; /*0x7ad6aa*/
  *a3 = 0; /*0x7ad6b1*/
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 ) /*0x7ad6d3*/
  {
    (*(void (__stdcall **)(char *))(*(_DWORD *)a1 + 4))(a1); /*0x7ad6e6*/
    *a3 = a1; /*0x7ad6e9*/
    return 0; /*0x7ad6f1*/
  }
  while ( 1 ) /*0x7ad6fd*/
  {
    v5 = *v3; /*0x7ad6fd*/
    v6 = *v3 == 0; /*0x7ad706*/
    if ( !*v3 || *v5 == *a2 && v5[1] == a2[1] && v5[2] == a2[2] && v5[3] == a2[3] ) /*0x7ad730*/
      break; /*0x7ad730*/
LABEL_17:
    v8 = v3[5]; /*0x7ad753*/
    v3 += 3; /*0x7ad756*/
    if ( !v8 ) /*0x7ad75b*/
      return -2147467262; /*0x7ad75d*/
  }
  v7 = (int (__stdcall *)(char *, _DWORD *, char **, void *))v3[2]; /*0x7ad732*/
  if ( v7 != (int (__stdcall *)(char *, _DWORD *, char **, void *))1 ) /*0x7ad738*/
  {
    result = v7(a1, a2, a3, v3[1]); /*0x7ad745*/
    if ( !result || !v6 && result < 0 ) /*0x7ad751*/
      return result; /*0x7ad751*/
    goto LABEL_17; /*0x7ad751*/
  }
  v9 = (char *)v3[1] + (_DWORD)a1; /*0x7ad770*/
  (*(void (__stdcall **)(char *))(*(_DWORD *)v9 + 4))(v9); /*0x7ad775*/
  *a3 = v9; /*0x7ad778*/
  return 0; /*0x7ad6a1*/
}


// ==== 0x007AD790  Array::InsertElement  this=Array  sig=csp ====
char __thiscall Array::InsertElement(int *this, const void *a1, ObjectClass *aP2)
{
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // ebp
  CCINIClass *v8; // edx
  CCINIClass *v9; // esi
  int v10; // eax
  int v11; // ebp
  CCINIClass *v12; // edx
  CCINIClass *v13; // esi
  void *v14; // edi
  int v16; // [esp+Ch] [ebp-4h]
  int v17; // [esp+Ch] [ebp-4h]

  v4 = (int)aP2; /*0x7ad795*/
  v5 = *this; /*0x7ad799*/
  if ( (int)aP2 > v5 ) /*0x7ad79e*/
  {
    aP2 = (ObjectClass *)v5; /*0x7ad7a0*/
    v4 = v5; /*0x7ad7a4*/
  }
  v6 = this->q004; /*0x7ad7a6*/
  if ( v4 >= v6 && v5 >= v6 ) /*0x7ad7b4*/
  {
    v7 = 2 * v5; /*0x7ad7b6*/
    if ( 2 * v5 < 10 ) /*0x7ad7bc*/
      v7 = 10; /*0x7ad7be*/
    v8 = (CCINIClass *)__2_YAPAXI_Z(268 * v7); /*0x7ad7d7*/
    memset(v8, 0, 4 * ((unsigned int)(268 * v7) >> 2)); /*0x7ad7e2*/
    v16 = (int)v8; /*0x7ad7ec*/
    v9 = (CCINIClass *)this->q008; /*0x7ad7f2*/
    if ( v9 ) /*0x7ad7f7*/
      qmemcpy(v8, v9, 268 * *this); /*0x7ad80f*/
    __3_YAXPAX_Z((void *)this->q008); /*0x7ad81c*/
    v4 = (int)aP2; /*0x7ad825*/
    this->q008 = v16; /*0x7ad82c*/
    this->q004 = v7; /*0x7ad82f*/
  }
  v10 = *this; /*0x7ad832*/
  if ( *this >= this->q004 ) /*0x7ad839*/
  {
    v11 = 2 * v10; /*0x7ad83b*/
    if ( 2 * v10 < 10 ) /*0x7ad841*/
      v11 = 10; /*0x7ad843*/
    v12 = (CCINIClass *)__2_YAPAXI_Z(268 * v11); /*0x7ad85c*/
    memset(v12, 0, 4 * ((unsigned int)(268 * v11) >> 2)); /*0x7ad867*/
    v17 = (int)v12; /*0x7ad871*/
    v13 = (CCINIClass *)this->q008; /*0x7ad877*/
    if ( v13 ) /*0x7ad87c*/
      qmemcpy(v12, v13, 268 * *this); /*0x7ad894*/
    __3_YAXPAX_Z((void *)this->q008); /*0x7ad8a1*/
    v4 = (int)aP2; /*0x7ad8aa*/
    this->q008 = v17; /*0x7ad8b1*/
    this->q004 = v11; /*0x7ad8b4*/
  }
  if ( v4 < *this ) /*0x7ad8bc*/
    memcpy((void *)(this->q008 + 268 * (v4 + 1)), (const void *)(this->q008 + 268 * v4), 268 * *this - 268 * v4); /*0x7ad8f2*/
  v14 = (void *)(this->q008 + 268 * v4); /*0x7ad907*/
  if ( v14 ) /*0x7ad90c*/
    qmemcpy(v14, a1, 0x10Cu); /*0x7ad917*/
  ++*this; /*0x7ad91e*/
  return 1; /*0x7ad91b*/
}


// ==== 0x007AD930  CChatEventSink::GrowBuffer  this=CChatEventSink  sig=csp ====
char __thiscall sub_7AD930(int *this)
{
  int v2; // eax
  int v3; // ecx
  int v5; // ebx
  void *v6; // eax
  const void *v7; // esi
  int v8; // [esp+8h] [ebp-4h]

  v2 = *this; /*0x7ad935*/
  v3 = this->q004; /*0x7ad938*/
  if ( 3 * v2 > v3 ) /*0x7ad940*/
    return 0; /*0x7ad943*/
  v5 = v3 / 2; /*0x7ad94f*/
  if ( v3 / 2 < 10 ) /*0x7ad954*/
    v5 = 10; /*0x7ad956*/
  if ( v5 >= v3 ) /*0x7ad95d*/
    return 0; /*0x7ad960*/
  v6 = __2_YAPAXI_Z(268 * v5); /*0x7ad974*/
  v7 = (const void *)this->q008; /*0x7ad979*/
  v8 = (int)v6; /*0x7ad981*/
  if ( v7 ) /*0x7ad985*/
    qmemcpy(v6, v7, 268 * *this); /*0x7ad99f*/
  __3_YAXPAX_Z((void *)this->q008); /*0x7ad9ad*/
  this->q008 = v8; /*0x7ad9b9*/
  this->q004 = v5; /*0x7ad9bc*/
  return 1; /*0x7ad942*/
}


// ==== 0x007AD9D0  DynamicArray::Grow  this=DynamicArray  sig=csp ====
char __thiscall DynamicArray_Grow(void *this)
{
  int v3; // eax
  unsigned int v4; // esi
  void *v5; // ebp
  const void *v6; // esi
  int v7; // [esp+4h] [ebp-4h]

  if ( *(_DWORD *)this < this->q004 ) /*0x7ad9db*/
    return 0; /*0x7ad9dd*/
  v3 = 2 * *(_DWORD *)this; /*0x7ad9e2*/
  v7 = v3; /*0x7ad9e7*/
  if ( v3 < 10 ) /*0x7ad9eb*/
  {
    v7 = 10; /*0x7ad9ed*/
    v3 = 10; /*0x7ad9f5*/
  }
  v4 = 108 * v3; /*0x7ada02*/
  v5 = __2_YAPAXI_Z(108 * v3); /*0x7ada0d*/
  memset(v5, 0, v4); /*0x7ada1b*/
  v6 = (const void *)this->q008; /*0x7ada24*/
  if ( v6 ) /*0x7ada29*/
    qmemcpy(v5, v6, 108 * *(_DWORD *)this); /*0x7ada3d*/
  __3_YAXPAX_Z(*((void **)this + 2)); /*0x7ada4a*/
  this->q008 = v5; /*0x7ada56*/
  this->q004 = v7; /*0x7ada59*/
  return 1; /*0x7ad9df*/
}


// ==== 0x007ADA70  WOLGameList::EnsureCapacity  this=WOLGameList  sig=csp ====
char __thiscall sub_7ADA70(int *this)
{
  int v2; // eax
  int v3; // ecx
  int v5; // ebx
  void *v6; // eax
  const void *v7; // esi
  int v8; // [esp+8h] [ebp-4h]

  v2 = *this; /*0x7ada75*/
  v3 = this->q004; /*0x7ada78*/
  if ( 3 * v2 > v3 ) /*0x7ada80*/
    return 0; /*0x7ada83*/
  v5 = v3 / 2; /*0x7ada8f*/
  if ( v3 / 2 < 10 ) /*0x7ada94*/
    v5 = 10; /*0x7ada96*/
  if ( v5 >= v3 ) /*0x7ada9d*/
    return 0; /*0x7adaa0*/
  v6 = __2_YAPAXI_Z(108 * v5); /*0x7adab0*/
  v7 = (const void *)this->q008; /*0x7adab5*/
  v8 = (int)v6; /*0x7adabd*/
  if ( v7 ) /*0x7adac1*/
    qmemcpy(v6, v7, 108 * *this); /*0x7adad7*/
  __3_YAXPAX_Z((void *)this->q008); /*0x7adae5*/
  this->q008 = v8; /*0x7adaf1*/
  this->q004 = v5; /*0x7adaf4*/
  return 1; /*0x7ada82*/
}


// ==== 0x007ADB00  ObjectClass::Network_Helper_7ADB00  this=ObjectClass  sig=csp ====
char __thiscall sub_7ADB00(int *this, _DWORD *a2, int a3)
{
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // esi
  void *v9; // ebp
  const void *v10; // esi
  int v11; // eax
  unsigned int v12; // esi
  void *v13; // ebp
  const void *v14; // esi
  _DWORD *v15; // eax
  int v17; // [esp+8h] [ebp-4h]
  int v18; // [esp+8h] [ebp-4h]

  v4 = a3; /*0x7adb05*/
  v5 = *this; /*0x7adb09*/
  if ( a3 > v5 ) /*0x7adb0d*/
  {
    a3 = v5; /*0x7adb0f*/
    v4 = v5; /*0x7adb13*/
  }
  v6 = this->vtable2; /*0x7adb15*/
  if ( v4 >= v6 && v5 >= v6 ) /*0x7adb20*/
  {
    v7 = 2 * v5; /*0x7adb22*/
    v17 = 2 * v5; /*0x7adb28*/
    if ( 2 * v5 < 10 ) /*0x7adb2c*/
    {
      v17 = 10; /*0x7adb2e*/
      v7 = 10; /*0x7adb36*/
    }
    v8 = 4 * v7; /*0x7adb3a*/
    v9 = __2_YAPAXI_Z(4 * v7); /*0x7adb49*/
    memset(v9, 0, v8); /*0x7adb57*/
    v10 = (const void *)this->vtable3; /*0x7adb60*/
    if ( v10 ) /*0x7adb65*/
      qmemcpy(v9, v10, 4 * *this); /*0x7adb73*/
    __3_YAXPAX_Z((void *)this->vtable3); /*0x7adb80*/
    v4 = a3; /*0x7adb89*/
    this->vtable3 = (int)v9; /*0x7adb90*/
    this->vtable2 = v17; /*0x7adb93*/
  }
  if ( *this >= this->vtable2 ) /*0x7adb9d*/
  {
    v11 = 2 * *this; /*0x7adb9f*/
    v18 = v11; /*0x7adba4*/
    if ( v11 < 10 ) /*0x7adba8*/
    {
      v18 = 10; /*0x7adbaa*/
      v11 = 10; /*0x7adbb2*/
    }
    v12 = 4 * v11; /*0x7adbb6*/
    v13 = __2_YAPAXI_Z(4 * v11); /*0x7adbc5*/
    memset(v13, 0, v12); /*0x7adbd3*/
    v14 = (const void *)this->vtable3; /*0x7adbdc*/
    if ( v14 ) /*0x7adbe1*/
      qmemcpy(v13, v14, 4 * *this); /*0x7adbef*/
    __3_YAXPAX_Z((void *)this->vtable3); /*0x7adbfc*/
    v4 = a3; /*0x7adc05*/
    this->vtable3 = (int)v13; /*0x7adc0c*/
    this->vtable2 = v18; /*0x7adc0f*/
  }
  if ( v4 < *this ) /*0x7adc18*/
    memcpy((void *)(this->vtable3 + 4 * v4 + 4), (const void *)(this->vtable3 + 4 * v4), 4 * (*this + 0x3FFFFFFF * v4)); /*0x7adc33*/
  v15 = (_DWORD *)(this->vtable3 + 4 * v4); /*0x7adc3e*/
  if ( v15 ) /*0x7adc43*/
    *v15 = *a2; /*0x7adc4b*/
  ++*this; /*0x7adc51*/
  return 1; /*0x7adc4f*/
}


// ==== 0x007ADC60  HashTable::LookupString  this=HashTable  sig=csp ====
bool __thiscall HashTable_LookupString(_DWORD *this, const char **a2, _DWORD *a3)
{
  bool result; // al
  int v4; // esi

  if ( !this->q004 ) /*0x7adc64*/
    return 0; /*0x7adc6c*/
  v4 = *(_DWORD *)(*this + 4 * (((int (__thiscall *)(const char **))this->q018)(a2) & ((1 << this->q00C) - 1))); /*0x7adc8a*/
  if ( !v4 ) /*0x7adc8f*/
    return 0; /*0x7adc92*/
  while ( 1 ) /*0x7adc9b*/
  {
    result = String::Compare((const char **)v4, a2); /*0x7adc9b*/
    if ( result ) /*0x7adca2*/
      break; /*0x7adca2*/
    v4 = *(_DWORD *)(v4 + 112); /*0x7adca4*/
    if ( !v4 ) /*0x7adca9*/
      return result; /*0x7adca9*/
  }
  *a3 = v4 + 4; /*0x7adcc5*/
  return 1; /*0x7adc6b*/
}


// ==== 0x007ADCD0  HashTable::Insert  this=HashTable  sig=csp ====
char __thiscall HashTable::Insert(_DWORD *this, ObjectClass *aP1, void *a2)
{
  int v4; // eax
  int v7; // ebx
  int v8; // esi
  SessionClass *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int v13; // esi
  AbstractClass *v14; // ebx
  int v15; // edi
  void *v16; // edi
  unsigned int v17; // edx
  AbstractClass *v18; // edi
  unsigned int v19; // ebx
  int v20; // esi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  ObjectClass *v24; // ebx
  unsigned int v25; // esi
  int v26; // edi
  AbstractClass *v27; // ebx
  AbstractClass *v28; // edi
  unsigned int v29; // edx
  AbstractClass *v30; // edi
  unsigned int v31; // ebx
  ObjectClass *v32; // esi
  int v33; // edx
  int v34; // ecx
  ObjectClass *v35; // eax
  ObjectClass *v36; // [esp+10h] [ebp-Ch]
  float v37; // [esp+14h] [ebp-8h]
  char aP1a; // [esp+20h] [ebp+4h]
  AbstractClass *a2a; // [esp+24h] [ebp+8h]
  AbstractClass *a2b; // [esp+24h] [ebp+8h]

  v4 = this->q004; /*0x7adcdb*/
  if ( !v4 ) /*0x7adce0*/
    return 0; /*0x7adce5*/
  v37 = (double)(unsigned int)(v4 - 1) / (double)(int)this->q008; /*0x7add10*/
  v7 = ((int (__thiscall *)(ObjectClass *))this->q018)(aP1) & ((1 << this->q00C) - 1); /*0x7add25*/
  v8 = *(_DWORD *)(*this + 4 * v7); /*0x7add27*/
  v36 = (ObjectClass *)v8; /*0x7add2c*/
  if ( !v8 ) /*0x7add30*/
    return 0; /*0x7add35*/
  if ( String::Compare((const char **)v8, (const char **)aP1) ) /*0x7add41*/
  {
    qmemcpy(a2, (const void *)(v8 + 4), 0x6Cu); /*0x7add5a*/
    v9 = *(SessionClass **)(*this + 4 * v7); /*0x7add5f*/
    v10 = *(_DWORD *)&v9->__pad_50[32]; /*0x7add64*/
    if ( v9 ) /*0x7add67*/
    {
      DeleteAndZero(*(void ***)(*this + 4 * v7)); /*0x7add6b*/
      __3_YAXPAX_Z(v9); /*0x7add71*/
    }
    *(_DWORD *)(*this + 4 * v7) = v10; /*0x7add80*/
    v11 = v37 < *((double *)this + 4); /*0x7add86*/
    v12 = v37 == *((double *)this + 4); /*0x7add86*/
    --this->q004; /*0x7add8a*/
    if ( v11 || v12 ) /*0x7add8f*/
    {
      v13 = this->q008; /*0x7add98*/
      if ( v13 > this->q030 && this->q050 != 1 ) /*0x7addaa*/
      {
        v14 = (AbstractClass *)*this; /*0x7addb3*/
        a2a = (AbstractClass *)*this; /*0x7addb8*/
        v15 = this->q00C - 1; /*0x7addbe*/
        this->q008 = v13 >> 1; /*0x7addbf*/
        this->q00C = v15; /*0x7addc9*/
        v16 = (void *)__2_YAPAXI_Z(4 * (v13 >> 1)); /*0x7addd5*/
        v17 = 4 * this->q008; /*0x7addda*/
        *this = v16; /*0x7adde1*/
        memset(v16, 0, v17); /*0x7adde7*/
        if ( (int)v13 > 0 ) /*0x7addf2*/
        {
          v18 = v14; /*0x7addf4*/
          v19 = v13; /*0x7addf6*/
          do /*0x7ade2b*/
          {
            v20 = *(_DWORD *)v18->__pad_0; /*0x7addf8*/
            if ( *(_DWORD *)v18->__pad_0 ) /*0x7addf8*/
            {
              do /*0x7ade25*/
              {
                v21 = ((int (__thiscall *)(int))this->q018)(v20) & ((1 << this->q00C) - 1); /*0x7ade0e*/
                v22 = *(_DWORD *)(*this + 4 * v21); /*0x7ade13*/
                *(_DWORD *)(*this + 4 * v21) = v20; /*0x7ade19*/
                v23 = *(_DWORD *)(v20 + 112); /*0x7ade1b*/
                *(_DWORD *)(v20 + 112) = v22; /*0x7ade1e*/
                v20 = v23; /*0x7ade21*/
              }
              while ( v23 ); /*0x7ade25*/
            }
            v18 = (AbstractClass *)((char *)v18 + 4); /*0x7ade27*/
            --v19; /*0x7ade2a*/
          }
          while ( v19 ); /*0x7ade2b*/
          v14 = a2a; /*0x7ade2d*/
        }
        __3_YAXPAX_Z(v14); /*0x7ade32*/
      }
    }
    return 1; /*0x7ade3d*/
  }
  else
  {
    v24 = *(ObjectClass **)(v8 + 112); /*0x7ade46*/
    aP1a = 0; /*0x7ade49*/
    if ( v24 ) /*0x7ade50*/
    {
      while ( !String::Compare((const char **)v24, (const char **)aP1) ) /*0x7ade5c*/
      {
        v36 = v24; /*0x7ade5e*/
        v24 = (ObjectClass *)v24->estimatedHealth; /*0x7ade62*/
        if ( !v24 ) /*0x7ade67*/
          goto LABEL_24; /*0x7ade67*/
      }
      qmemcpy(a2, &v24->__pad_0[4], 0x6Cu); /*0x7ade7b*/
      v36->estimatedHealth = v24->estimatedHealth; /*0x7ade80*/
      --this->q004; /*0x7ade89*/
      DeleteAndZero((void **)v24); /*0x7ade90*/
      __3_YAXPAX_Z(v24); /*0x7ade96*/
      aP1a = 1; /*0x7ade9e*/
    }
LABEL_24:
    if ( v37 <= *((double *)this + 4) ) /*0x7adeaf*/
    {
      v25 = this->q008; /*0x7adeb5*/
      if ( v25 > this->q030 && this->q050 != 1 ) /*0x7adec7*/
      {
        v26 = this->q00C; /*0x7adecd*/
        v27 = (AbstractClass *)*this; /*0x7aded0*/
        a2b = (AbstractClass *)*this; /*0x7aded5*/
        this->q008 = v25 >> 1; /*0x7adedb*/
        this->q00C = v26 - 1; /*0x7adee3*/
        v28 = (AbstractClass *)__2_YAPAXI_Z(4 * (v25 >> 1)); /*0x7adeee*/
        v29 = 4 * this->q008; /*0x7adef3*/
        *this = v28; /*0x7adefa*/
        memset(v28, 0, v29); /*0x7adf00*/
        if ( (int)v25 > 0 ) /*0x7adf0b*/
        {
          v30 = v27; /*0x7adf0d*/
          v31 = v25; /*0x7adf0f*/
          do /*0x7adf44*/
          {
            v32 = *(ObjectClass **)v30->__pad_0; /*0x7adf11*/
            if ( *(_DWORD *)v30->__pad_0 ) /*0x7adf11*/
            {
              do /*0x7adf3e*/
              {
                v33 = ((int (__thiscall *)(ObjectClass *))this->q018)(v32) & ((1 << this->q00C) - 1); /*0x7adf27*/
                v34 = *(_DWORD *)(*this + 4 * v33); /*0x7adf2c*/
                *(_DWORD *)(*this + 4 * v33) = v32; /*0x7adf32*/
                v35 = (ObjectClass *)v32->estimatedHealth; /*0x7adf34*/
                v32->estimatedHealth = v34; /*0x7adf37*/
                v32 = v35; /*0x7adf3a*/
              }
              while ( v35 ); /*0x7adf3e*/
            }
            v30 = (AbstractClass *)((char *)v30 + 4); /*0x7adf40*/
            --v31; /*0x7adf43*/
          }
          while ( v31 ); /*0x7adf44*/
          v27 = a2b; /*0x7adf46*/
        }
        __3_YAXPAX_Z(v27); /*0x7adf4b*/
      }
    }
    return aP1a; /*0x7adf53*/
  }
}


// ==== 0x007ADF70  HashMap::Shrink2  this=HashMap  sig=csp ====
void __thiscall HashMap_Shrink2(_DWORD *this)
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

  v2 = this->q008; /*0x7adf75*/
  if ( v2 > this->q00C && *((_BYTE *)this + 20) != 1 ) /*0x7adf87*/
  {
    v3 = (int *)*this; /*0x7adf90*/
    v4 = this->q00C; /*0x7adf93*/
    v13 = (int *)*this; /*0x7adf96*/
    this->q008 = v2 >> 1; /*0x7adf9c*/
    this->q00C = v4 - 1; /*0x7adfa4*/
    v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x7adfaf*/
    v6 = 4 * this->q008; /*0x7adfb4*/
    *this = v5; /*0x7adfbb*/
    memset(v5, 0, v6); /*0x7adfc0*/
    if ( (int)v2 > 0 ) /*0x7adfcb*/
    {
      v7 = v3; /*0x7adfcd*/
      v8 = v2; /*0x7adfcf*/
      do /*0x7ae003*/
      {
        v9 = *v7; /*0x7adfd1*/
        if ( *v7 ) /*0x7adfd1*/
        {
          do /*0x7adffd*/
          {
            v10 = ((int (__thiscall *)(int))this->q006)(v9) & ((1 << this->q00C) - 1); /*0x7adfe7*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x7adfeb*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x7adff1*/
            v12 = *(_DWORD *)(v9 + 112); /*0x7adff3*/
            *(_DWORD *)(v9 + 112) = v11; /*0x7adff6*/
            v9 = v12; /*0x7adff9*/
          }
          while ( v12 ); /*0x7adffd*/
        }
        ++v7; /*0x7adfff*/
        --v8; /*0x7ae002*/
      }
      while ( v8 ); /*0x7ae003*/
      v3 = v13; /*0x7ae005*/
    }
    __3_YAXPAX_Z(v3); /*0x7ae00a*/
  }
}


// ==== 0x007AE020  WOLGameList::GrowBuffer  this=WOLGameList  sig=csp ====
void __thiscall sub_7AE020(_DWORD *this)
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

  if ( this->q014 != 1 ) /*0x7ae028*/
  {
    v2 = this->q008; /*0x7ae030*/
    v3 = (_DWORD *)*this; /*0x7ae033*/
    v4 = this->q00C + 1; /*0x7ae03c*/
    this->q008 = 2 * v2; /*0x7ae03d*/
    v13 = v3; /*0x7ae040*/
    this->q00C = v4; /*0x7ae048*/
    v5 = __2_YAPAXI_Z(8 * v2); /*0x7ae053*/
    v6 = 4 * this->q008; /*0x7ae058*/
    *this = v5; /*0x7ae05f*/
    memset(v5, 0, v6); /*0x7ae064*/
    if ( v2 > 0 ) /*0x7ae06f*/
    {
      v7 = v3; /*0x7ae071*/
      v8 = v2; /*0x7ae073*/
      do /*0x7ae0a7*/
      {
        v9 = *v7; /*0x7ae075*/
        if ( *v7 ) /*0x7ae075*/
        {
          do /*0x7ae0a1*/
          {
            v10 = ((int (__thiscall *)(int))this->q006)(v9) & ((1 << this->q00C) - 1); /*0x7ae08b*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x7ae08f*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x7ae095*/
            v12 = *(_DWORD *)(v9 + 112); /*0x7ae097*/
            *(_DWORD *)(v9 + 112) = v11; /*0x7ae09a*/
            v9 = v12; /*0x7ae09d*/
          }
          while ( v12 ); /*0x7ae0a1*/
        }
        ++v7; /*0x7ae0a3*/
        --v8; /*0x7ae0a6*/
      }
      while ( v8 ); /*0x7ae0a7*/
      v3 = v13; /*0x7ae0a9*/
    }
    __3_YAXPAX_Z(v3); /*0x7ae0ae*/
  }
}


// ==== 0x007AE0C0  HashMap::ComputeIndex_2  this=HashMap  sig=csp ====
int __thiscall HashMap_ComputeIndex_2(int this, int a2)
{
  return (*(int (__thiscall **)(int))(this + 24))(a2) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x7ae0d4*/
}


// ==== 0x007AE0E0  ComStreamClass::readData  this=ComStreamClass  sig=csp ====
void __thiscall sub_7AE0E0(_DWORD *this)
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

  if ( this->q014 != 1 ) /*0x7ae0e8*/
  {
    v2 = this->q008; /*0x7ae0f0*/
    v3 = (_DWORD *)*this; /*0x7ae0f3*/
    v4 = this->q00C + 1; /*0x7ae0fc*/
    this->q008 = 2 * v2; /*0x7ae0fd*/
    v13 = v3; /*0x7ae100*/
    this->q00C = v4; /*0x7ae108*/
    v5 = __2_YAPAXI_Z(8 * v2); /*0x7ae113*/
    v6 = 4 * this->q008; /*0x7ae118*/
    *this = v5; /*0x7ae11f*/
    memset(v5, 0, v6); /*0x7ae124*/
    if ( v2 > 0 ) /*0x7ae12f*/
    {
      v7 = v3; /*0x7ae131*/
      v8 = v2; /*0x7ae133*/
      do /*0x7ae167*/
      {
        v9 = *v7; /*0x7ae135*/
        if ( *v7 ) /*0x7ae135*/
        {
          do /*0x7ae161*/
          {
            v10 = ((int (__thiscall *)(int))this->q018)(v9) & ((1 << this->q00C) - 1); /*0x7ae14b*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x7ae14f*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x7ae155*/
            v12 = *(_DWORD *)(v9 + 72); /*0x7ae157*/
            *(_DWORD *)(v9 + 72) = v11; /*0x7ae15a*/
            v9 = v12; /*0x7ae15d*/
          }
          while ( v12 ); /*0x7ae161*/
        }
        ++v7; /*0x7ae163*/
        --v8; /*0x7ae166*/
      }
      while ( v8 ); /*0x7ae167*/
      v3 = v13; /*0x7ae169*/
    }
    __3_YAXPAX_Z(v3); /*0x7ae16e*/
  }
}


// ==== 0x007AE180  ObjectClass::ConnectAndLoginWOL_Connect_7AE180  this=TechnoTypeClass  sig=csp ====
bool __thiscall sub_7AE180(_DWORD *this, const char **a2, _DWORD *a3)
{
  bool result; // al
  int v4; // esi

  if ( !this->vtable2 ) /*0x7ae184*/
    return 0; /*0x7ae18c*/
  v4 = *(_DWORD *)(*this + 4 * (((int (__thiscall *)(const char **))this->nextArrayIndex)(a2) & ((1 << this->vtable4) - 1))); /*0x7ae1aa*/
  if ( !v4 ) /*0x7ae1af*/
    return 0; /*0x7ae1b2*/
  while ( 1 ) /*0x7ae1bb*/
  {
    result = String::Compare((const char **)v4, a2); /*0x7ae1bb*/
    if ( result ) /*0x7ae1c2*/
      break; /*0x7ae1c2*/
    v4 = *(_DWORD *)(v4 + 8); /*0x7ae1c4*/
    if ( !v4 ) /*0x7ae1c9*/
      return result; /*0x7ae1c9*/
  }
  *a3 = v4 + 4; /*0x7ae1e5*/
  return 1; /*0x7ae18b*/
}


// ==== 0x007AE1F0  HashTable::Lookup  this=TechnoTypeClass  sig=csp ====
char __thiscall HashTable::Lookup(_DWORD *this, ObjectClass *aP1, TechnoTypeClass *aP2)
{
  int v4; // eax
  int v7; // edi
  ObjectClass *v8; // ebp
  TechnoTypeClass **v9; // ebp
  TechnoTypeClass *v10; // ebx
  bool v11; // c0
  bool v12; // c3
  unsigned int v13; // ebp
  int v14; // edi
  AbstractClass *v15; // ebx
  AbstractClass *v16; // edi
  unsigned int v17; // edx
  int v18; // edi
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  ObjectClass *v22; // edi
  unsigned int v23; // ebp
  AbstractClass *v24; // ebx
  int v25; // edi
  void *v26; // edi
  unsigned int v27; // edx
  int v28; // edi
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  float v32; // [esp+10h] [ebp-8h]
  char aP1a; // [esp+1Ch] [ebp+4h]
  AbstractClass *aP2a; // [esp+20h] [ebp+8h]
  AbstractClass *aP2b; // [esp+20h] [ebp+8h]

  v4 = this->vtable2; /*0x7ae1fb*/
  if ( !v4 ) /*0x7ae200*/
    return 0; /*0x7ae205*/
  v32 = (double)(unsigned int)(v4 - 1) / (double)(int)this->vtable3; /*0x7ae230*/
  v7 = ((int (__thiscall *)(ObjectClass *))this->nextArrayIndex)(aP1) & ((1 << this->vtable4) - 1); /*0x7ae244*/
  v8 = *(ObjectClass **)(*this + 4 * v7); /*0x7ae246*/
  if ( !v8 ) /*0x7ae24b*/
    return 0; /*0x7ae250*/
  if ( String::Compare((const char **)v8, (const char **)aP1) ) /*0x7ae25c*/
  {
    *(_DWORD *)aP2->vtable0 = *(_DWORD *)&v8->__pad_0[4]; /*0x7ae270*/
    v9 = *(TechnoTypeClass ***)(*this + 4 * v7); /*0x7ae274*/
    v10 = v9[2]; /*0x7ae279*/
    if ( v9 ) /*0x7ae27c*/
    {
      DeleteAndZero(*(void ***)(*this + 4 * v7)); /*0x7ae280*/
      __3_YAXPAX_Z(v9); /*0x7ae286*/
    }
    *(_DWORD *)(*this + 4 * v7) = v10; /*0x7ae294*/
    v11 = v32 < *((double *)this + 4); /*0x7ae29a*/
    v12 = v32 == *((double *)this + 4); /*0x7ae29a*/
    --this->vtable2; /*0x7ae29e*/
    if ( v11 || v12 ) /*0x7ae2a3*/
    {
      v13 = this->vtable3; /*0x7ae2ac*/
      if ( v13 > this->TargetSpecialThreatCoefficient && this->SlowdownDistance != 1 ) /*0x7ae2be*/
      {
        v14 = this->vtable4; /*0x7ae2c0*/
        v15 = (AbstractClass *)*this; /*0x7ae2c3*/
        aP2a = (AbstractClass *)*this; /*0x7ae2c7*/
        this->vtable3 = v13 >> 1; /*0x7ae2cd*/
        this->vtable4 = v14 - 1; /*0x7ae2d5*/
        v16 = (AbstractClass *)__2_YAPAXI_Z(4 * (v13 >> 1)); /*0x7ae2e0*/
        v17 = 4 * this->vtable3; /*0x7ae2e5*/
        *this = v16; /*0x7ae2ec*/
        memset(v16, 0, v17); /*0x7ae2f1*/
        if ( (int)v13 > 0 ) /*0x7ae2fc*/
        {
          do /*0x7ae330*/
          {
            v18 = *(_DWORD *)v15->__pad_0; /*0x7ae2fe*/
            if ( *(_DWORD *)v15->__pad_0 ) /*0x7ae2fe*/
            {
              do /*0x7ae32a*/
              {
                v19 = ((int (__thiscall *)(int))this->nextArrayIndex)(v18) & ((1 << this->vtable4) - 1); /*0x7ae314*/
                v20 = *(_DWORD *)(*this + 4 * v19); /*0x7ae318*/
                *(_DWORD *)(*this + 4 * v19) = v18; /*0x7ae31e*/
                v21 = *(_DWORD *)(v18 + 8); /*0x7ae320*/
                *(_DWORD *)(v18 + 8) = v20; /*0x7ae323*/
                v18 = v21; /*0x7ae326*/
              }
              while ( v21 ); /*0x7ae32a*/
            }
            v15 = (AbstractClass *)((char *)v15 + 4); /*0x7ae32c*/
            --v13; /*0x7ae32f*/
          }
          while ( v13 ); /*0x7ae330*/
          v15 = aP2a; /*0x7ae332*/
        }
        __3_YAXPAX_Z(v15); /*0x7ae337*/
      }
    }
    return 1; /*0x7ae342*/
  }
  else
  {
    v22 = *(ObjectClass **)&v8->__pad_0[8]; /*0x7ae34b*/
    aP1a = 0; /*0x7ae34e*/
    if ( v22 ) /*0x7ae355*/
    {
      while ( !String::Compare((const char **)v22, (const char **)aP1) ) /*0x7ae361*/
      {
        v8 = v22; /*0x7ae363*/
        v22 = *(ObjectClass **)&v22->__pad_0[8]; /*0x7ae365*/
        if ( !v22 ) /*0x7ae36a*/
          goto LABEL_23; /*0x7ae36a*/
      }
      *(_DWORD *)aP2->vtable0 = *(_DWORD *)&v22->__pad_0[4]; /*0x7ae375*/
      *(_DWORD *)&v8->__pad_0[8] = *(_DWORD *)&v22->__pad_0[8]; /*0x7ae37a*/
      --this->vtable2; /*0x7ae383*/
      DeleteAndZero((void **)v22); /*0x7ae38a*/
      __3_YAXPAX_Z(v22); /*0x7ae390*/
      aP1a = 1; /*0x7ae398*/
    }
LABEL_23:
    if ( v32 <= *((double *)this + 4) ) /*0x7ae3a9*/
    {
      v23 = this->vtable3; /*0x7ae3af*/
      if ( v23 > this->TargetSpecialThreatCoefficient && this->SlowdownDistance != 1 ) /*0x7ae3c1*/
      {
        v24 = (AbstractClass *)*this; /*0x7ae3ca*/
        aP2b = (AbstractClass *)*this; /*0x7ae3ce*/
        v25 = this->vtable4 - 1; /*0x7ae3d4*/
        this->vtable3 = v23 >> 1; /*0x7ae3d5*/
        this->vtable4 = v25; /*0x7ae3df*/
        v26 = (void *)__2_YAPAXI_Z(4 * (v23 >> 1)); /*0x7ae3eb*/
        v27 = 4 * this->vtable3; /*0x7ae3f0*/
        *this = v26; /*0x7ae3f7*/
        memset(v26, 0, v27); /*0x7ae3fc*/
        if ( (int)v23 > 0 ) /*0x7ae407*/
        {
          do /*0x7ae43b*/
          {
            v28 = *(_DWORD *)v24->__pad_0; /*0x7ae409*/
            if ( *(_DWORD *)v24->__pad_0 ) /*0x7ae409*/
            {
              do /*0x7ae435*/
              {
                v29 = ((int (__thiscall *)(int))this->nextArrayIndex)(v28) & ((1 << this->vtable4) - 1); /*0x7ae41f*/
                v30 = *(_DWORD *)(*this + 4 * v29); /*0x7ae423*/
                *(_DWORD *)(*this + 4 * v29) = v28; /*0x7ae429*/
                v31 = *(_DWORD *)(v28 + 8); /*0x7ae42b*/
                *(_DWORD *)(v28 + 8) = v30; /*0x7ae42e*/
                v28 = v31; /*0x7ae431*/
              }
              while ( v31 ); /*0x7ae435*/
            }
            v24 = (AbstractClass *)((char *)v24 + 4); /*0x7ae437*/
            --v23; /*0x7ae43a*/
          }
          while ( v23 ); /*0x7ae43b*/
          v24 = aP2b; /*0x7ae43d*/
        }
        __3_YAXPAX_Z(v24); /*0x7ae442*/
      }
    }
    return aP1a; /*0x7ae44a*/
  }
}


// ==== 0x007AE460  HashMap::Shrink  this=TechnoTypeClass  sig=csp ====
void __thiscall HashMap_Shrink(_DWORD *this)
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

  v2 = this->vtable3; /*0x7ae465*/
  if ( v2 > this->TargetSpecialThreatCoefficient && this->SlowdownDistance != 1 ) /*0x7ae477*/
  {
    v3 = (int *)*this; /*0x7ae480*/
    v4 = this->vtable4; /*0x7ae483*/
    v13 = (int *)*this; /*0x7ae486*/
    this->vtable3 = v2 >> 1; /*0x7ae48c*/
    this->vtable4 = v4 - 1; /*0x7ae494*/
    v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x7ae49f*/
    v6 = 4 * this->vtable3; /*0x7ae4a4*/
    *this = v5; /*0x7ae4ab*/
    memset(v5, 0, v6); /*0x7ae4b0*/
    if ( (int)v2 > 0 ) /*0x7ae4bb*/
    {
      v7 = v3; /*0x7ae4bd*/
      v8 = v2; /*0x7ae4bf*/
      do /*0x7ae4f3*/
      {
        v9 = *v7; /*0x7ae4c1*/
        if ( *v7 ) /*0x7ae4c1*/
        {
          do /*0x7ae4ed*/
          {
            v10 = ((int (__thiscall *)(int))this->nextArrayIndex)(v9) & ((1 << this->vtable4) - 1); /*0x7ae4d7*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x7ae4db*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x7ae4e1*/
            v12 = *(_DWORD *)(v9 + 8); /*0x7ae4e3*/
            *(_DWORD *)(v9 + 8) = v11; /*0x7ae4e6*/
            v9 = v12; /*0x7ae4e9*/
          }
          while ( v12 ); /*0x7ae4ed*/
        }
        ++v7; /*0x7ae4ef*/
        --v8; /*0x7ae4f2*/
      }
      while ( v8 ); /*0x7ae4f3*/
      v3 = v13; /*0x7ae4f5*/
    }
    __3_YAXPAX_Z(v3); /*0x7ae4fa*/
  }
}


// ==== 0x007AE510  HashTable::Grow  this=TechnoTypeClass  sig=csp ====
void __thiscall HashTable_Grow(_DWORD *this)
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

  if ( this->SlowdownDistance != 1 ) /*0x7ae518*/
  {
    v2 = this->vtable3; /*0x7ae520*/
    v3 = (_DWORD *)*this; /*0x7ae523*/
    v4 = this->vtable4 + 1; /*0x7ae52c*/
    this->vtable3 = 2 * v2; /*0x7ae52d*/
    v13 = v3; /*0x7ae530*/
    this->vtable4 = v4; /*0x7ae538*/
    v5 = __2_YAPAXI_Z(8 * v2); /*0x7ae543*/
    v6 = 4 * this->vtable3; /*0x7ae548*/
    *this = v5; /*0x7ae54f*/
    memset(v5, 0, v6); /*0x7ae554*/
    if ( v2 > 0 ) /*0x7ae55f*/
    {
      v7 = v3; /*0x7ae561*/
      v8 = v2; /*0x7ae563*/
      do /*0x7ae597*/
      {
        v9 = *v7; /*0x7ae565*/
        if ( *v7 ) /*0x7ae565*/
        {
          do /*0x7ae591*/
          {
            v10 = ((int (__thiscall *)(int))this->nextArrayIndex)(v9) & ((1 << this->vtable4) - 1); /*0x7ae57b*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x7ae57f*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x7ae585*/
            v12 = *(_DWORD *)(v9 + 8); /*0x7ae587*/
            *(_DWORD *)(v9 + 8) = v11; /*0x7ae58a*/
            v9 = v12; /*0x7ae58d*/
          }
          while ( v12 ); /*0x7ae591*/
        }
        ++v7; /*0x7ae593*/
        --v8; /*0x7ae596*/
      }
      while ( v8 ); /*0x7ae597*/
      v3 = v13; /*0x7ae599*/
    }
    __3_YAXPAX_Z(v3); /*0x7ae59e*/
  }
}


// ==== 0x007AE5B0  CComObject_CChatEventSink___ATL::Check  this=TechnoTypeClass  sig=csp ====
int __thiscall CComObject_CChatEventSink___ATL::Check(int this, TechnoTypeClass *aP1)
{
  return (*(int (__thiscall **)(TechnoTypeClass *))(this + 24))(aP1) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x7ae5c4*/
}


// ==== 0x007AE5D0  StringVector::Insert  this=StringVector  sig=csp ====
char __thiscall StringVector_Insert(int *this, const char **a2, int a3)
{
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // esi
  void *v9; // ebp
  const void *v10; // esi
  int v11; // eax
  unsigned int v12; // esi
  void *v13; // ebp
  const void *v14; // esi
  char **v15; // ecx
  int v17; // [esp+8h] [ebp-4h]
  int v18; // [esp+8h] [ebp-4h]

  v4 = a3; /*0x7ae5d5*/
  v5 = *this; /*0x7ae5d9*/
  if ( a3 > v5 ) /*0x7ae5dd*/
  {
    a3 = v5; /*0x7ae5df*/
    v4 = v5; /*0x7ae5e3*/
  }
  v6 = this->q004; /*0x7ae5e5*/
  if ( v4 >= v6 && v5 >= v6 ) /*0x7ae5f0*/
  {
    v7 = 2 * v5; /*0x7ae5f2*/
    v17 = 2 * v5; /*0x7ae5f8*/
    if ( 2 * v5 < 10 ) /*0x7ae5fc*/
    {
      v17 = 10; /*0x7ae5fe*/
      v7 = 10; /*0x7ae606*/
    }
    v8 = 4 * v7; /*0x7ae60a*/
    v9 = __2_YAPAXI_Z(4 * v7); /*0x7ae619*/
    memset(v9, 0, v8); /*0x7ae627*/
    v10 = (const void *)this->q008; /*0x7ae630*/
    if ( v10 ) /*0x7ae635*/
      qmemcpy(v9, v10, 4 * *this); /*0x7ae643*/
    __3_YAXPAX_Z((void *)this->q008); /*0x7ae650*/
    v4 = a3; /*0x7ae659*/
    this->q008 = (int)v9; /*0x7ae660*/
    this->q004 = v17; /*0x7ae663*/
  }
  if ( *this >= this->q004 ) /*0x7ae66d*/
  {
    v11 = 2 * *this; /*0x7ae66f*/
    v18 = v11; /*0x7ae674*/
    if ( v11 < 10 ) /*0x7ae678*/
    {
      v18 = 10; /*0x7ae67a*/
      v11 = 10; /*0x7ae682*/
    }
    v12 = 4 * v11; /*0x7ae686*/
    v13 = __2_YAPAXI_Z(4 * v11); /*0x7ae695*/
    memset(v13, 0, v12); /*0x7ae6a3*/
    v14 = (const void *)this->q008; /*0x7ae6ac*/
    if ( v14 ) /*0x7ae6b1*/
      qmemcpy(v13, v14, 4 * *this); /*0x7ae6bf*/
    __3_YAXPAX_Z((void *)this->q008); /*0x7ae6cc*/
    v4 = a3; /*0x7ae6d5*/
    this->q008 = (int)v13; /*0x7ae6dc*/
    this->q004 = v18; /*0x7ae6df*/
  }
  if ( v4 < *this ) /*0x7ae6e8*/
    memcpy((void *)(this->q008 + 4 * v4 + 4), (const void *)(this->q008 + 4 * v4), 4 * (*this + 0x3FFFFFFF * v4)); /*0x7ae703*/
  v15 = (char **)(this->q008 + 4 * v4); /*0x7ae70e*/
  if ( v15 ) /*0x7ae713*/
    String::AssignFromPtr(v15, a2); /*0x7ae71a*/
  ++*this; /*0x7ae723*/
  return 1; /*0x7ae721*/
}


// ==== 0x007AE730  VectorClass::Shrink  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Shrink(int *this)
{
  int v2; // eax
  int v3; // ecx
  int v5; // ebx
  void *v6; // eax
  const void *v7; // esi
  int v8; // [esp+8h] [ebp-4h]

  v2 = *this; /*0x7ae735*/
  v3 = this->Items; /*0x7ae738*/
  if ( 3 * v2 > v3 ) /*0x7ae740*/
    return 0; /*0x7ae743*/
  v5 = v3 / 2; /*0x7ae74f*/
  if ( v3 / 2 < 10 ) /*0x7ae754*/
    v5 = 10; /*0x7ae756*/
  if ( v5 >= v3 ) /*0x7ae75d*/
    return 0; /*0x7ae760*/
  v6 = __2_YAPAXI_Z(4 * v5); /*0x7ae76e*/
  v7 = (const void *)this->Capacity; /*0x7ae773*/
  v8 = (int)v6; /*0x7ae77b*/
  if ( v7 ) /*0x7ae77f*/
    qmemcpy(v6, v7, 4 * *this); /*0x7ae78f*/
  __3_YAXPAX_Z((void *)this->Capacity); /*0x7ae79d*/
  this->Capacity = v8; /*0x7ae7a9*/
  this->Items = v5; /*0x7ae7ac*/
  return 1; /*0x7ae742*/
}


// ==== 0x007AE7C0  ObjectClass::GameOptionsScreenWOL_Helper_7AE7C0  this=ObjectClass  sig=csp ====
bool __thiscall GameOptionsScreenWOL_Helper_7AE7C0(_DWORD *this, ObjectClass *aP1, _DWORD *a2)
{
  bool result; // al
  int v4; // esi

  if ( !this->vtable2 ) /*0x7ae7c4*/
    return 0; /*0x7ae7cc*/
  v4 = *(_DWORD *)(*this + 4 * (((int (__thiscall *)(ObjectClass *))this->nextArrayIndex)(aP1) & ((1 << this->vtable4) - 1))); /*0x7ae7ea*/
  if ( !v4 ) /*0x7ae7ef*/
    return 0; /*0x7ae7f2*/
  while ( 1 ) /*0x7ae7fb*/
  {
    result = String::Compare((const char **)v4, (const char **)aP1); /*0x7ae7fb*/
    if ( result ) /*0x7ae802*/
      break; /*0x7ae802*/
    v4 = *(_DWORD *)(v4 + 8); /*0x7ae804*/
    if ( !v4 ) /*0x7ae809*/
      return result; /*0x7ae809*/
  }
  *a2 = v4 + 4; /*0x7ae825*/
  return 1; /*0x7ae7cb*/
}


// ==== 0x007AE830  ObjectClass::RemoveWOLPlayerLogin_Remove  this=ObjectClass  sig=csp ====
void __thiscall sub_7AE830(_DWORD *this)
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

  v2 = this->vtable3; /*0x7ae835*/
  if ( v2 > this->nextObject && this->customSound_controller != 1 ) /*0x7ae847*/
  {
    v3 = (int *)*this; /*0x7ae850*/
    v4 = this->vtable4; /*0x7ae853*/
    v13 = (int *)*this; /*0x7ae856*/
    this->vtable3 = v2 >> 1; /*0x7ae85c*/
    this->vtable4 = v4 - 1; /*0x7ae864*/
    v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x7ae86f*/
    v6 = 4 * this->vtable3; /*0x7ae874*/
    *this = v5; /*0x7ae87b*/
    memset(v5, 0, v6); /*0x7ae880*/
    if ( (int)v2 > 0 ) /*0x7ae88b*/
    {
      v7 = v3; /*0x7ae88d*/
      v8 = v2; /*0x7ae88f*/
      do /*0x7ae8c3*/
      {
        v9 = *v7; /*0x7ae891*/
        if ( *v7 ) /*0x7ae891*/
        {
          do /*0x7ae8bd*/
          {
            v10 = ((int (__thiscall *)(int))this->nextArrayIndex)(v9) & ((1 << this->vtable4) - 1); /*0x7ae8a7*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x7ae8ab*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x7ae8b1*/
            v12 = *(_DWORD *)(v9 + 8); /*0x7ae8b3*/
            *(_DWORD *)(v9 + 8) = v11; /*0x7ae8b6*/
            v9 = v12; /*0x7ae8b9*/
          }
          while ( v12 ); /*0x7ae8bd*/
        }
        ++v7; /*0x7ae8bf*/
        --v8; /*0x7ae8c2*/
      }
      while ( v8 ); /*0x7ae8c3*/
      v3 = v13; /*0x7ae8c5*/
    }
    __3_YAXPAX_Z(v3); /*0x7ae8ca*/
  }
}


// ==== 0x007AE8E0  ObjectClass::GameOptionsScreenWOL_Helper_7AE8E0  this=ObjectClass  sig=csp ====
bool __thiscall GameOptionsScreenWOL_Helper_7AE8E0(_DWORD *this, ObjectClass *aP1, _DWORD *a2)
{
  bool result; // al
  int v4; // esi

  if ( !this->vtable2 ) /*0x7ae8e4*/
    return 0; /*0x7ae8ec*/
  v4 = *(_DWORD *)(*this + 4 * (((int (__thiscall *)(ObjectClass *))this->nextArrayIndex)(aP1) & ((1 << this->vtable4) - 1))); /*0x7ae90a*/
  if ( !v4 ) /*0x7ae90f*/
    return 0; /*0x7ae912*/
  while ( 1 ) /*0x7ae91b*/
  {
    result = String::Compare((const char **)v4, (const char **)aP1); /*0x7ae91b*/
    if ( result ) /*0x7ae922*/
      break; /*0x7ae922*/
    v4 = *(_DWORD *)(v4 + 272); /*0x7ae924*/
    if ( !v4 ) /*0x7ae92c*/
      return result; /*0x7ae92c*/
  }
  *a2 = v4 + 4; /*0x7ae948*/
  return 1; /*0x7ae8eb*/
}


// ==== 0x007AE950  HashTable::FindWOLHashTableEntry  this=HashTable  sig=csp ====
char __thiscall FindWOLHashTableEntry(_DWORD *this, const char **a2, void *a3)
{
  int v4; // eax
  int v7; // ebx
  int v8; // esi
  _DWORD *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int v13; // esi
  int *v14; // ebx
  int v15; // edi
  void *v16; // edi
  unsigned int v17; // edx
  int *v18; // edi
  unsigned int v19; // ebx
  int v20; // esi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // ebx
  unsigned int v25; // esi
  int v26; // edi
  int *v27; // ebx
  void *v28; // edi
  unsigned int v29; // edx
  int *v30; // edi
  unsigned int v31; // ebx
  int v32; // esi
  int v33; // edx
  int v34; // ecx
  int v35; // eax
  int v36; // [esp+10h] [ebp-Ch]
  float v37; // [esp+14h] [ebp-8h]
  char v38; // [esp+20h] [ebp+4h]
  int *v39; // [esp+24h] [ebp+8h]
  int *v40; // [esp+24h] [ebp+8h]

  v4 = this->q004; /*0x7ae95b*/
  if ( !v4 ) /*0x7ae960*/
    return 0; /*0x7ae965*/
  v37 = (double)(unsigned int)(v4 - 1) / (double)(int)this->q008; /*0x7ae990*/
  v7 = ((int (__thiscall *)(const char **))this->q018)(a2) & ((1 << this->q00C) - 1); /*0x7ae9a5*/
  v8 = *(_DWORD *)(*this + 4 * v7); /*0x7ae9a7*/
  v36 = v8; /*0x7ae9ac*/
  if ( !v8 ) /*0x7ae9b0*/
    return 0; /*0x7ae9b5*/
  if ( String::Compare((const char **)v8, a2) ) /*0x7ae9c1*/
  {
    qmemcpy(a3, (const void *)(v8 + 4), 0x10Cu); /*0x7ae9da*/
    v9 = *(_DWORD **)(*this + 4 * v7); /*0x7ae9df*/
    v10 = v9[68]; /*0x7ae9e4*/
    if ( v9 ) /*0x7ae9ea*/
    {
      DeleteAndZero(*(void ***)(*this + 4 * v7)); /*0x7ae9ee*/
      __3_YAXPAX_Z(v9); /*0x7ae9f4*/
    }
    *(_DWORD *)(*this + 4 * v7) = v10; /*0x7aea03*/
    v11 = v37 < *((double *)this + 4); /*0x7aea09*/
    v12 = v37 == *((double *)this + 4); /*0x7aea09*/
    --this->q004; /*0x7aea0d*/
    if ( v11 || v12 ) /*0x7aea12*/
    {
      v13 = this->q008; /*0x7aea1b*/
      if ( v13 > this->q030 && this->q050 != 1 ) /*0x7aea2d*/
      {
        v14 = (int *)*this; /*0x7aea36*/
        v39 = (int *)*this; /*0x7aea3b*/
        v15 = this->q00C - 1; /*0x7aea41*/
        this->q008 = v13 >> 1; /*0x7aea42*/
        this->q00C = v15; /*0x7aea4c*/
        v16 = __2_YAPAXI_Z(4 * (v13 >> 1)); /*0x7aea58*/
        v17 = 4 * this->q008; /*0x7aea5d*/
        *this = v16; /*0x7aea64*/
        memset(v16, 0, v17); /*0x7aea6a*/
        if ( (int)v13 > 0 ) /*0x7aea75*/
        {
          v18 = v14; /*0x7aea77*/
          v19 = v13; /*0x7aea79*/
          do /*0x7aeab4*/
          {
            v20 = *v18; /*0x7aea7b*/
            if ( *v18 ) /*0x7aea7b*/
            {
              do /*0x7aeaae*/
              {
                v21 = ((int (__thiscall *)(int))this->q018)(v20) & ((1 << this->q00C) - 1); /*0x7aea91*/
                v22 = *(_DWORD *)(*this + 4 * v21); /*0x7aea96*/
                *(_DWORD *)(*this + 4 * v21) = v20; /*0x7aea9c*/
                v23 = *(_DWORD *)(v20 + 272); /*0x7aea9e*/
                *(_DWORD *)(v20 + 272) = v22; /*0x7aeaa4*/
                v20 = v23; /*0x7aeaaa*/
              }
              while ( v23 ); /*0x7aeaae*/
            }
            ++v18; /*0x7aeab0*/
            --v19; /*0x7aeab3*/
          }
          while ( v19 ); /*0x7aeab4*/
          v14 = v39; /*0x7aeab6*/
        }
        __3_YAXPAX_Z(v14); /*0x7aeabb*/
      }
    }
    return 1; /*0x7aeac6*/
  }
  else
  {
    v24 = *(_DWORD *)(v8 + 272); /*0x7aeacf*/
    v38 = 0; /*0x7aead5*/
    if ( v24 ) /*0x7aeadc*/
    {
      while ( !String::Compare((const char **)v24, a2) ) /*0x7aeae8*/
      {
        v36 = v24; /*0x7aeaea*/
        v24 = *(_DWORD *)(v24 + 272); /*0x7aeaee*/
        if ( !v24 ) /*0x7aeaf6*/
          goto LABEL_24; /*0x7aeaf6*/
      }
      qmemcpy(a3, (const void *)(v24 + 4), 0x10Cu); /*0x7aeb0a*/
      *(_DWORD *)(v36 + 272) = *(_DWORD *)(v24 + 272); /*0x7aeb12*/
      --this->q004; /*0x7aeb1e*/
      DeleteAndZero((void **)v24); /*0x7aeb25*/
      __3_YAXPAX_Z((void *)v24); /*0x7aeb2b*/
      v38 = 1; /*0x7aeb33*/
    }
LABEL_24:
    if ( v37 <= *((double *)this + 4) ) /*0x7aeb44*/
    {
      v25 = this->q008; /*0x7aeb4a*/
      if ( v25 > this->q030 && this->q050 != 1 ) /*0x7aeb5c*/
      {
        v26 = this->q00C; /*0x7aeb62*/
        v27 = (int *)*this; /*0x7aeb65*/
        v40 = (int *)*this; /*0x7aeb6a*/
        this->q008 = v25 >> 1; /*0x7aeb70*/
        this->q00C = v26 - 1; /*0x7aeb78*/
        v28 = __2_YAPAXI_Z(4 * (v25 >> 1)); /*0x7aeb83*/
        v29 = 4 * this->q008; /*0x7aeb88*/
        *this = v28; /*0x7aeb8f*/
        memset(v28, 0, v29); /*0x7aeb95*/
        if ( (int)v25 > 0 ) /*0x7aeba0*/
        {
          v30 = v27; /*0x7aeba2*/
          v31 = v25; /*0x7aeba4*/
          do /*0x7aebdf*/
          {
            v32 = *v30; /*0x7aeba6*/
            if ( *v30 ) /*0x7aeba6*/
            {
              do /*0x7aebd9*/
              {
                v33 = ((int (__thiscall *)(int))this->q018)(v32) & ((1 << this->q00C) - 1); /*0x7aebbc*/
                v34 = *(_DWORD *)(*this + 4 * v33); /*0x7aebc1*/
                *(_DWORD *)(*this + 4 * v33) = v32; /*0x7aebc7*/
                v35 = *(_DWORD *)(v32 + 272); /*0x7aebc9*/
                *(_DWORD *)(v32 + 272) = v34; /*0x7aebcf*/
                v32 = v35; /*0x7aebd5*/
              }
              while ( v35 ); /*0x7aebd9*/
            }
            ++v30; /*0x7aebdb*/
            --v31; /*0x7aebde*/
          }
          while ( v31 ); /*0x7aebdf*/
          v27 = v40; /*0x7aebe1*/
        }
        __3_YAXPAX_Z(v27); /*0x7aebe6*/
      }
    }
    return v38; /*0x7aebee*/
  }
}


// ==== 0x007AEC00  HashTable::Shrink  this=HashTable  sig=csp ====
void __thiscall sub_7AEC00(_DWORD *this)
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

  v2 = this->q008; /*0x7aec05*/
  if ( v2 > this->q030 && this->q050 != 1 ) /*0x7aec17*/
  {
    v3 = (int *)*this; /*0x7aec20*/
    v4 = this->q00C; /*0x7aec23*/
    v13 = (int *)*this; /*0x7aec26*/
    this->q008 = v2 >> 1; /*0x7aec2c*/
    this->q00C = v4 - 1; /*0x7aec34*/
    v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x7aec3f*/
    v6 = 4 * this->q008; /*0x7aec44*/
    *this = v5; /*0x7aec4b*/
    memset(v5, 0, v6); /*0x7aec50*/
    if ( (int)v2 > 0 ) /*0x7aec5b*/
    {
      v7 = v3; /*0x7aec5d*/
      v8 = v2; /*0x7aec5f*/
      do /*0x7aec99*/
      {
        v9 = *v7; /*0x7aec61*/
        if ( *v7 ) /*0x7aec61*/
        {
          do /*0x7aec93*/
          {
            v10 = ((int (__thiscall *)(int))this->q018)(v9) & ((1 << this->q00C) - 1); /*0x7aec77*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x7aec7b*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x7aec81*/
            v12 = *(_DWORD *)(v9 + 272); /*0x7aec83*/
            *(_DWORD *)(v9 + 272) = v11; /*0x7aec89*/
            v9 = v12; /*0x7aec8f*/
          }
          while ( v12 ); /*0x7aec93*/
        }
        ++v7; /*0x7aec95*/
        --v8; /*0x7aec98*/
      }
      while ( v8 ); /*0x7aec99*/
      v3 = v13; /*0x7aec9b*/
    }
    __3_YAXPAX_Z(v3); /*0x7aeca0*/
  }
}


// ==== 0x007AECB0  CChatEventSink::ComputeBucketMask  this=CChatEventSink  sig=csp ====
int __thiscall sub_7AECB0(int this, int a2)
{
  return (*(int (__thiscall **)(int))(this + 24))(a2) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x7aecc4*/
}


// ==== 0x007AECD0  VectorClass::QueryNATPortWOL_Helper  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_7AECD0(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x7aecdb*/
  this->Capacity = a2; /*0x7aecde*/
  this->q030 = 1; /*0x7aece1*/
  this->q034 = 0; /*0x7aece5*/
  *this = &vt_VectorClass_tConnInfoStruct; /*0x7aece8*/
  if ( a2 ) /*0x7aecee*/
  {
    if ( a3 ) /*0x7aecf6*/
    {
      this->Items = a3; /*0x7aecf8*/
      return this; /*0x7aecfe*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x7aed0d*/
    this->q034 = 1; /*0x7aed10*/
  }
  return this; /*0x7aecfd*/
}


// ==== 0x007AED20  ComStreamClass::writeData  this=ComStreamClass  sig=csp ====
void **__thiscall ComStreamClass::writeData(void **Block, char a2)
{
  DeleteAndZero(Block); /*0x7aed23*/
  if ( (a2 & 1) != 0 ) /*0x7aed2d*/
    __3_YAXPAX_Z(Block); /*0x7aed30*/
  return Block; /*0x7aed3a*/
}


// ==== 0x007AED40  CChatEventSink::ProcessChatEvent  this=CChatEventSink  sig=csp ====
char __thiscall sub_7AED40(int *this)
{
  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  const void *v6; // esi
  int v7; // [esp+4h] [ebp-4h]

  v2 = *this; /*0x7aed44*/
  if ( *this < this->q004 ) /*0x7aed4b*/
    return 0; /*0x7aed4d*/
  v4 = 2 * v2; /*0x7aed53*/
  if ( 2 * v2 < 10 ) /*0x7aed5b*/
    v4 = 10; /*0x7aed5d*/
  v5 = __2_YAPAXI_Z(248 * v4); /*0x7aed72*/
  memset(v5, 0, 4 * ((unsigned int)(248 * v4) >> 2)); /*0x7aed7d*/
  v7 = (int)v5; /*0x7aed87*/
  v6 = (const void *)this->q008; /*0x7aed8d*/
  if ( v6 ) /*0x7aed92*/
    qmemcpy(v5, v6, 248 * *this); /*0x7aeda7*/
  __3_YAXPAX_Z((void *)this->q008); /*0x7aedb4*/
  this->q004 = v4; /*0x7aedc0*/
  this->q008 = v7; /*0x7aedc3*/
  return 1; /*0x7aed4f*/
}


// ==== 0x007AEDD0  CChatEventSink::EnsureCapacity  this=CChatEventSink  sig=csp ====
char __thiscall sub_7AEDD0(void *this, int a2)
{
  int v3; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // ebp
  void *v9; // eax
  const void *v10; // esi
  void *v11; // [esp+Ch] [ebp+4h]

  v3 = *(_DWORD *)this; /*0x7aedd4*/
  if ( !*(_DWORD *)this ) /*0x7aedd4*/
    return 0; /*0x7aeddb*/
  v5 = a2; /*0x7aede1*/
  if ( a2 < 0 ) /*0x7aede7*/
    v5 = 0; /*0x7aede9*/
  if ( v5 >= v3 ) /*0x7aeded*/
    v5 = v3 - 1; /*0x7aedef*/
  memcpy( /*0x7aee0f*/
    (void *)(this->q008 + 4 * v5),
    (const void *)(this->q008 + 4 * (v5 + 1)),
    4 * (v3 + 0x3FFFFFFF * (v5 + 1)));
  v6 = *(_DWORD *)this - 1; /*0x7aee1a*/
  *(_DWORD *)this = v6; /*0x7aee1c*/
  v7 = this->q004; /*0x7aee1e*/
  if ( 3 * v6 <= v7 ) /*0x7aee26*/
  {
    v8 = v7 / 2; /*0x7aee2f*/
    if ( v7 / 2 < 10 ) /*0x7aee34*/
      v8 = 10; /*0x7aee36*/
    if ( v8 < v7 ) /*0x7aee3d*/
    {
      v9 = __2_YAPAXI_Z(4 * v8); /*0x7aee47*/
      v10 = (const void *)this->q008; /*0x7aee4c*/
      v11 = v9; /*0x7aee54*/
      if ( v10 ) /*0x7aee58*/
        qmemcpy(v9, v10, 4 * *(_DWORD *)this); /*0x7aee66*/
      __3_YAXPAX_Z(*((void **)this + 2)); /*0x7aee73*/
      this->q008 = v11; /*0x7aee7f*/
      this->q004 = v8; /*0x7aee82*/
    }
  }
  return 1; /*0x7aedda*/
}


// ==== 0x007AEE90  CChatEventSink::Check  this=CChatEventSink  sig=csp ====
char __thiscall sub_7AEE90(int *this, _DWORD *a2, int a3)
{
  if ( a3 < 0 || a3 >= *this ) /*0x7aee9a*/
    return 0; /*0x7aeead*/
  *a2 = *(_DWORD *)(this->q008 + 4 * a3); /*0x7aeea6*/
  return 1; /*0x7aeeaa*/
}


// ==== 0x007AEEC0  Vector::Grow  this=Vector  sig=csp ====
char __thiscall Vector_Grow(int *this)
{
  int v2; // eax
  int v4; // esi
  void *v5; // ebp
  int v6; // [esp+4h] [ebp-4h]

  v2 = *this; /*0x7aeec4*/
  if ( *this < this->q004 ) /*0x7aeecb*/
    return 0; /*0x7aeecd*/
  v4 = 2 * v2; /*0x7aeed4*/
  v6 = 2 * v2; /*0x7aeedb*/
  if ( 2 * v2 < 10 ) /*0x7aeedf*/
  {
    v6 = 10; /*0x7aeee1*/
    v4 = 10; /*0x7aeee9*/
  }
  v5 = __2_YAPAXI_Z(4 * v4); /*0x7aeefc*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x7aef0a*/
  if ( this->q008 ) /*0x7aef13*/
  {
    qmemcpy(v5, (const void *)this->q008, 4 * *this); /*0x7aef28*/
    v4 = v6; /*0x7aef31*/
  }
  __3_YAXPAX_Z((void *)this->q008); /*0x7aef39*/
  this->q004 = v4; /*0x7aef41*/
  this->q008 = (int)v5; /*0x7aef44*/
  return 1; /*0x7aeecf*/
}


// ==== 0x007AEF50  ComStreamClass::flushStream  this=ComStreamClass  sig=csp ====
void __thiscall sub_7AEF50(_DWORD *this)
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

  v2 = this->q008; /*0x7aef55*/
  if ( v2 > this->q030 && this->q014 != 1 ) /*0x7aef67*/
  {
    v3 = (int *)*this; /*0x7aef70*/
    v4 = this->q00C; /*0x7aef73*/
    v13 = (int *)*this; /*0x7aef76*/
    this->q008 = v2 >> 1; /*0x7aef7c*/
    this->q00C = v4 - 1; /*0x7aef84*/
    v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x7aef8f*/
    v6 = 4 * this->q008; /*0x7aef94*/
    *this = v5; /*0x7aef9b*/
    memset(v5, 0, v6); /*0x7aefa0*/
    if ( (int)v2 > 0 ) /*0x7aefab*/
    {
      v7 = v3; /*0x7aefad*/
      v8 = v2; /*0x7aefaf*/
      do /*0x7aefe3*/
      {
        v9 = *v7; /*0x7aefb1*/
        if ( *v7 ) /*0x7aefb1*/
        {
          do /*0x7aefdd*/
          {
            v10 = ((int (__thiscall *)(int))this->q018)(v9) & ((1 << this->q00C) - 1); /*0x7aefc7*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x7aefcb*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x7aefd1*/
            v12 = *(_DWORD *)(v9 + 72); /*0x7aefd3*/
            *(_DWORD *)(v9 + 72) = v11; /*0x7aefd6*/
            v9 = v12; /*0x7aefd9*/
          }
          while ( v12 ); /*0x7aefdd*/
        }
        ++v7; /*0x7aefdf*/
        --v8; /*0x7aefe2*/
      }
      while ( v8 ); /*0x7aefe3*/
      v3 = v13; /*0x7aefe5*/
    }
    __3_YAXPAX_Z(v3); /*0x7aefea*/
  }
}


// ==== 0x007AF000  DynamicVector::EnsureCapacity  this=DynamicVector  sig=csp ====
char __thiscall DynamicVector_EnsureCapacity(int *this)
{
  int v2; // eax
  int v4; // esi
  void *v5; // ebp
  int v6; // [esp+4h] [ebp-4h]

  v2 = *this; /*0x7af004*/
  if ( *this < this->Items ) /*0x7af00b*/
    return 0; /*0x7af00d*/
  v4 = 2 * v2; /*0x7af014*/
  v6 = 2 * v2; /*0x7af01b*/
  if ( 2 * v2 < 10 ) /*0x7af01f*/
  {
    v6 = 10; /*0x7af021*/
    v4 = 10; /*0x7af029*/
  }
  v5 = __2_YAPAXI_Z(4 * v4); /*0x7af03c*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x7af04a*/
  if ( this->q008 ) /*0x7af053*/
  {
    qmemcpy(v5, (const void *)this->q008, 4 * *this); /*0x7af068*/
    v4 = v6; /*0x7af071*/
  }
  __3_YAXPAX_Z((void *)this->q008); /*0x7af079*/
  this->Items = v4; /*0x7af081*/
  this->q008 = (int)v5; /*0x7af084*/
  return 1; /*0x7af00f*/
}


// ==== 0x007AF090  sub_7AF090  this=-  sig=ida-proto ====
int sub_7AF090()
{
  dword_B77ED0 = 0; /*0x7af092*/
  dword_B77ED4 = 0; /*0x7af097*/
  dword_B77ED8 = 0; /*0x7af09c*/
  dword_B77EDC = 0; /*0x7af0a1*/
  return 0; /*0x7af0a6*/
}


// ==== 0x007AF0B0  sub_7AF0B0  this=-  sig=ida-proto ====
void sub_7AF0B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7af0bc*/
  dbl_B77EE8 = Math::Sqrt(v0 + v0); /*0x7af0ce*/
}


// ==== 0x007AF0E0  sub_7AF0E0  this=-  sig=ida-proto ====
void sub_7AF0E0()
{
  dbl_B77F88 = dbl_B77EE8 / 60.0; /*0x7af0ec*/
}


// ==== 0x007AF100  sub_7AF100  this=-  sig=ida-proto ====
void sub_7AF100()
{
  dbl_B77F40 = 1.0 / dbl_B77F88; /*0x7af10c*/
}


// ==== 0x007AF120  sub_7AF120  this=-  sig=ida-proto ====
void sub_7AF120()
{
  dbl_B77F38 = 0.0174532925199433 * 45.0; /*0x7af12c*/
}


// ==== 0x007AF140  sub_7AF140  this=-  sig=ida-proto ====
void sub_7AF140()
{
  dbl_B77EF8 = 0.0174532925199433 * 60.0; /*0x7af14c*/
}


// ==== 0x007AF160  sub_7AF160  this=-  sig=ida-proto ====
void sub_7AF160()
{
  dbl_B77EB8 = 0.0174532925199433 * 90.0; /*0x7af16c*/
}


// ==== 0x007AF180  sub_7AF180  this=-  sig=ida-proto ====
__int64 sub_7AF180()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B77EB8 - dbl_B77EF8); /*0x7af192*/
  result = Math::RoundToInt(v0 * dbl_B77EE8 * 0.5); /*0x7af1a6*/
  dword_B77F90 = result; /*0x7af1ab*/
  return result; /*0x7af1b0*/
}


// ==== 0x007AF1C0  sub_7AF1C0  this=-  sig=ida-proto ====
void sub_7AF1C0()
{
  dbl_B77F00 = Math::ArcTan((double)dword_B77F90 * 0.00390625); /*0x7af1d7*/
}


// ==== 0x007AF1F0  sub_7AF1F0  this=-  sig=ida-proto ====
void sub_7AF1F0()
{
  dbl_B77F28 = Math::ArcTan((double)(2 * dword_B77F90) / dbl_B77EE8); /*0x7af212*/
}


// ==== 0x007AF220  sub_7AF220  this=-  sig=ida-proto ====
__int64 sub_7AF220()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B77F90) + 0.5); /*0x7af23b*/
  dword_B77F80 = result; /*0x7af240*/
  return result; /*0x7af246*/
}


// ==== 0x007AF250  sub_7AF250  this=-  sig=ida-proto ====
int sub_7AF250()
{
  word_B77EE0 = 0; /*0x7af252*/
  word_B77EE2 = 0; /*0x7af258*/
  return 0; /*0x7af25e*/
}


// ==== 0x007AF260  sub_7AF260  this=-  sig=ida-proto ====
int sub_7AF260()
{
  dword_B77F10 = 0; /*0x7af262*/
  dword_B77F14 = 0; /*0x7af267*/
  dword_B77F18 = 0; /*0x7af26c*/
  return 0; /*0x7af271*/
}


// ==== 0x007AF280  sub_7AF280  this=-  sig=ida-proto ====
int sub_7AF280()
{
  dword_B77F50 = 0; /*0x7af285*/
  dword_B77F48 = 128; /*0x7af28f*/
  dword_B77F4C = 128; /*0x7af294*/
  return 128; /*0x7af299*/
}


// ==== 0x007AF2A0  StaticString::Factory  this=ObjectClass  sig=csp ====
Selection_WorldDominationTour *__thiscall StaticString::Factory(void *this)
{
  if ( (byte_B77F0C & 1) == 0 ) /*0x7af2ad*/
  {
    byte_B77F0C |= 1u; /*0x7af2b6*/
    String::Assign((char **)&unk_B77F20, (const char *)&off_84D784); /*0x7af2c1*/
    atexit(unknown_libname_64); /*0x7af2cb*/
  }
  if ( (byte_B77F0C & 2) == 0 ) /*0x7af2dd*/
  {
    byte_B77F0C |= 2u; /*0x7af2e6*/
    String::Assign(&dword_B77F08, (const char *)&off_816148); /*0x7af2f1*/
    atexit(unknown_libname_63); /*0x7af2fb*/
  }
  if ( (byte_B77F0C & 4) == 0 ) /*0x7af30d*/
  {
    byte_B77F0C |= 4u; /*0x7af316*/
    String::Assign((char **)&unk_B77F30, (const char *)&off_84D780); /*0x7af321*/
    atexit(unknown_libname_62); /*0x7af32b*/
  }
  if ( this == (void *)1 ) /*0x7af337*/
    return (Selection_WorldDominationTour *)&unk_B77F20; /*0x7af381*/
  if ( this == (void *)2 ) /*0x7af33a*/
    return (Selection_WorldDominationTour *)&dword_B77F08; /*0x7af37b*/
  if ( this == (void *)3 ) /*0x7af33d*/
    return (Selection_WorldDominationTour *)&unk_B77F30; /*0x7af375*/
  if ( (byte_B77F0C & 8) == 0 ) /*0x7af349*/
  {
    byte_B77F0C |= 8u; /*0x7af352*/
    String::Assign((char **)&unk_B77EF0, aXx); /*0x7af35d*/
    atexit(unknown_libname_61); /*0x7af367*/
  }
  return (Selection_WorldDominationTour *)&unk_B77EF0; /*0x7af335*/
}


// ==== 0x007AF390  unknown_libname_61  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_61()
{
  DeleteAndZero((void **)&unk_B77EF0); /*0x7af395*/
}


// ==== 0x007AF3A0  unknown_libname_62  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_62()
{
  DeleteAndZero((void **)&unk_B77F30); /*0x7af3a5*/
}


// ==== 0x007AF3B0  unknown_libname_63  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_63()
{
  DeleteAndZero((void **)&dword_B77F08); /*0x7af3b5*/
}


// ==== 0x007AF3C0  unknown_libname_64  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_64()
{
  DeleteAndZero((void **)&unk_B77F20); /*0x7af3c5*/
}


// ==== 0x007AF3D0  ObjectClass::GetRegionStringWOL  this=ObjectClass  sig=csp ====
Selection_WorldDominationTour *__thiscall GetRegionStringWOL(void *this)
{
  if ( (byte_B77EC4 & 1) == 0 ) /*0x7af3dd*/
  {
    byte_B77EC4 |= 1u; /*0x7af3e6*/
    String::Assign(&dword_B77EC0, "NA"); /*0x7af3f1*/
    atexit(unknown_libname_68); /*0x7af3fb*/
  }
  if ( (byte_B77EC4 & 2) == 0 ) /*0x7af40d*/
  {
    byte_B77EC4 |= 2u; /*0x7af416*/
    String::Assign((char **)&unk_B77EC8, "EU"); /*0x7af421*/
    atexit(unknown_libname_67); /*0x7af42b*/
  }
  if ( (byte_B77EC4 & 4) == 0 ) /*0x7af43d*/
  {
    byte_B77EC4 |= 4u; /*0x7af446*/
    String::Assign(&dword_B77F1C, "AS"); /*0x7af451*/
    atexit(unknown_libname_66); /*0x7af45b*/
  }
  if ( this == (void *)1 ) /*0x7af467*/
    return (Selection_WorldDominationTour *)&dword_B77EC0; /*0x7af4b1*/
  if ( this == (void *)2 ) /*0x7af46a*/
    return (Selection_WorldDominationTour *)&unk_B77EC8; /*0x7af4ab*/
  if ( this == (void *)3 ) /*0x7af46d*/
    return (Selection_WorldDominationTour *)&dword_B77F1C; /*0x7af4a5*/
  if ( (byte_B77EC4 & 8) == 0 ) /*0x7af479*/
  {
    byte_B77EC4 |= 8u; /*0x7af482*/
    String::Assign((char **)&unk_B77EB0, "XX"); /*0x7af48d*/
    atexit(unknown_libname_65); /*0x7af497*/
  }
  return (Selection_WorldDominationTour *)&unk_B77EB0; /*0x7af465*/
}


// ==== 0x007AF4C0  unknown_libname_65  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_65()
{
  DeleteAndZero((void **)&unk_B77EB0); /*0x7af4c5*/
}


// ==== 0x007AF4D0  unknown_libname_66  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_66()
{
  DeleteAndZero((void **)&dword_B77F1C); /*0x7af4d5*/
}


// ==== 0x007AF4E0  unknown_libname_67  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_67()
{
  DeleteAndZero((void **)&unk_B77EC8); /*0x7af4e5*/
}


// ==== 0x007AF4F0  unknown_libname_68  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_68()
{
  DeleteAndZero((void **)&dword_B77EC0); /*0x7af4f5*/
}


// ==== 0x007AF500  FactionSelectDialogControl@WorldDominationTour::Team_Start_7AF500  this=FactionSelectDialogControl@WorldDominationTour  sig=csp ====
void __thiscall Team_Start_7AF500(FactionSelectDialogControl_WorldDominationTour *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx

  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 4); /*0x7af503*/
  this->vfptr = &vt_WorldDominationTour_FactionSelectDialogControl; /*0x7af506*/
  if ( v2 ) /*0x7af50e*/
    (**v2)(v2, 1); /*0x7af514*/
  v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 5); /*0x7af516*/
  if ( v3 ) /*0x7af51b*/
    (**v3)(v3, 1); /*0x7af521*/
  v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 6); /*0x7af523*/
  if ( v4 ) /*0x7af528*/
    (**v4)(v4, 1); /*0x7af52e*/
  OwnerDrawControl::InitVtable((DialogControl_OwnerDraw *)this); /*0x7af532*/
}


// ==== 0x007AF540  ObjectClass::WorldDominationFactionDlgProc_Helper  this=ObjectClass  sig=csp ====
int __thiscall sub_7AF540(_DWORD *this, HWND hWnd, int *a3)
{
  int result; // eax
  int v5; // edi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // ecx

  result = (*(int (__thiscall **)(_DWORD *))(*this + 8))(this); /*0x7af546*/
  if ( !(_BYTE)result ) /*0x7af54b*/
  {
    v5 = 0; /*0x7af554*/
    this->referenceCount = this->uniqueId; /*0x7af556*/
    result = *a3; /*0x7af55d*/
    if ( *a3 >= 16 && result < 364 && (v6 = a3[1], v6 >= 20) && v6 < 136 /*0x7af5bc*/
      || result >= 130 && result < 300 && (v7 = a3[1], v7 >= 100) && v7 < 216
      || result >= 175 && result < 245 && (v8 = a3[1], v8 >= 216) && v8 < 262 )
    {
      result = this->abstractFlags; /*0x7af60d*/
      v5 = 2; /*0x7af610*/
      this->referenceCount = result; /*0x7af615*/
    }
    else if ( result >= 252 && result < 466 && (v9 = a3[1], v9 >= 180) && v9 < 382 /*0x7af5fe*/
           || result >= 212 && result < 496 && (v10 = a3[1], v10 >= 262) && v10 < 422 )
    {
      v5 = 3; /*0x7af603*/
      this->referenceCount = this->nextArrayIndex; /*0x7af608*/
    }
    if ( this->vtable4 != v5 ) /*0x7af61b*/
    {
      this->vtable4 = v5; /*0x7af626*/
      return InvalidateRect(hWnd, 0, 0); /*0x7af629*/
    }
  }
  return result; /*0x7af62f*/
}


// ==== 0x007AF640  ObjectClass::method_7AF640  this=ObjectClass  sig=csp ====
int __thiscall sub_7AF640(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ecx
  _DWORD *v5; // eax
  _DWORD v6[4]; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v7[16]; // [esp+1Ch] [ebp-10h] BYREF

  result = MEMORY[0x887310]; /*0x7af640*/
  if ( MEMORY[0x887310] ) /*0x7af64d*/
  {
    v4 = this->referenceCount; /*0x7af64f*/
    if ( v4 ) /*0x7af654*/
    {
      v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 120))(v4, v7); /*0x7af65d*/
      v6[0] = *v5; /*0x7af664*/
      v6[1] = v5[1]; /*0x7af66b*/
      v6[2] = v5[2]; /*0x7af672*/
      v6[3] = v5[3]; /*0x7af67f*/
      (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 20))(MEMORY[0x887310], v6, 0); /*0x7af68a*/
      return (*(int (__thiscall **)(int, _DWORD *, _DWORD, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887310] + 8))( /*0x7af6a7*/
               MEMORY[0x887310],
               v6,
               this->referenceCount,
               v6,
               0,
               1);
    }
  }
  return result; /*0x7af6aa*/
}


// ==== 0x007AF6C0  WorldDominationFactionDlgProc  this=-  sig=csp ====
int __stdcall WorldDominationFactionDlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v4; // ebp
  int result; // eax
  _DWORD *WindowLongA; // eax
  _DWORD *v7; // esi
  int v8; // ecx
  int *v9; // eax
  wchar_t *StringCSF; // eax
  int v11; // [esp+10h] [ebp-20h] BYREF
  unsigned int v12; // [esp+14h] [ebp-1Ch]
  int v13; // [esp+18h] [ebp-18h]
  int v14; // [esp+1Ch] [ebp-14h]
  _BYTE v15[16]; // [esp+20h] [ebp-10h] BYREF

  v4 = a4; /*0x7af6c9*/
  if ( a2 == 272 && a4 ) /*0x7af6dd*/
    SetWindowLongA(hWnd, 8, *(_DWORD *)(a4 + 4)); /*0x7af6e6*/
  result = BaseDialogProc(hWnd, a2, a3, v4); /*0x7af6f6*/
  if ( !result ) /*0x7af6fd*/
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x7af706*/
    v7 = WindowLongA; /*0x7af712*/
    if ( a2 > 0x111 ) /*0x7af714*/
    {
      if ( a2 == 514 ) /*0x7af82f*/
      {
        if ( WindowLongA[3] ) /*0x7af8c6*/
          (*(void (__thiscall **)(_DWORD *, HWND, int))(*WindowLongA + 4))(WindowLongA, hWnd, 1); /*0x7af8d4*/
      }
      else if ( a2 == 1257 && *(HWND *)v4 == hWnd ) /*0x7af84d*/
      {
        if ( WindowLongA[3] == 2 ) /*0x7af859*/
        {
          StringCSF = GetStringCSF(aWdtFactionsele_1, 0, g_Str_File_WorldDom_cpp, 176); /*0x7af895*/
        }
        else if ( WindowLongA[3] == 3 ) /*0x7af85c*/
        {
          StringCSF = GetStringCSF((wchar_t *)aWdtFactionsele_0, 0, g_Str_File_WorldDom_cpp, 179); /*0x7af882*/
        }
        else
        {
          StringCSF = GetStringCSF((wchar_t *)MEMORY[0x833CEC], 0, g_Str_File_WorldDom_cpp, 182); /*0x7af86f*/
        }
        WideString::Assign((wchar_t **)&a3, StringCSF); /*0x7af89f*/
        WideString::Reassign_Alt((void **)(v4 + 8), (const wchar_t **)&a3); /*0x7af8ac*/
        DeleteAndZero::Alt((void **)&a3); /*0x7af8b5*/
        return 0; /*0x7af8c3*/
      }
    }
    else
    {
      if ( a2 != 273 ) /*0x7af71a*/
      {
        switch ( a2 ) /*0x7af734*/
        {
          case 0xFu: /*0x7af734*/
            Dialog::DrawBackground(hWnd); /*0x7af77e*/
            if ( MEMORY[0x887310] ) /*0x7af78a*/
            {
              v8 = v7[7]; /*0x7af78c*/
              if ( v8 ) /*0x7af791*/
              {
                v9 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 120))(v8, v15); /*0x7af79a*/
                v11 = *v9; /*0x7af7a1*/
                v12 = v9[1]; /*0x7af7a8*/
                v13 = v9[2]; /*0x7af7af*/
                v14 = v9[3]; /*0x7af7bc*/
                (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 20))( /*0x7af7c7*/
                  MEMORY[0x887310],
                  &v11,
                  0);
                (*(void (__thiscall **)(int, int *, _DWORD, int *, _DWORD, int))(*(_DWORD *)MEMORY[0x887310] + 8))( /*0x7af7e4*/
                  MEMORY[0x887310],
                  &v11,
                  v7[7],
                  &v11,
                  0,
                  1);
              }
            }
            Dialog::StopBink(hWnd); /*0x7af7e9*/
            ValidateRect(hWnd, 0); /*0x7af7f1*/
            goto LABEL_14; /*0x7af7f1*/
          case 0x14u: /*0x7af734*/
LABEL_14:
            result = 1; /*0x7af7f7*/
            break; /*0x7af803*/
          case 0x2Bu: /*0x7af734*/
            Dialog::Resize((char *)v4); /*0x7af768*/
            result = 1; /*0x7af770*/
            break; /*0x7af779*/
          case 0x84u: /*0x7af734*/
            v11 = (unsigned __int16)v4; /*0x7af74d*/
            v12 = HIWORD(v4); /*0x7af751*/
            WorldDominationFactionDlgProc_Helper(hWnd, (int)&v11); /*0x7af755*/
            result = 0; /*0x7af75d*/
            break; /*0x7af763*/
          default:
            return 0;
        }
        return result; /*0x7af763*/
      }
      if ( (_WORD)a3 == 1670 ) /*0x7af80d*/
      {
        (*(void (__thiscall **)(_DWORD *, HWND, int))(*WindowLongA + 4))(WindowLongA, hWnd, -1); /*0x7af81a*/
        return 0; /*0x7af826*/
      }
    }
    return 0; /*0x7af8d7*/
  }
  return result; /*0x7af75a*/
}


// ==== 0x007AF970  ObjectClass::method_7AF970  this=ObjectClass  sig=csp ====
int __usercall sub_7AF970@<eax>(int a1@<ebx>, int a2@<ebp>)
{
  _DWORD *v2; // eax
  int v3; // edi
  _DWORD v5[3]; // [esp+Ch] [ebp-8Ch] BYREF
  int v6; // [esp+18h] [ebp-80h]
  _DWORD *v7; // [esp+1Ch] [ebp-7Ch]
  void (__thiscall ***v8)(_DWORD, int); // [esp+20h] [ebp-78h]
  _DWORD *v9; // [esp+24h] [ebp-74h]
  _DWORD *v10; // [esp+28h] [ebp-70h]
  _DWORD v11[22]; // [esp+2Ch] [ebp-6Ch] BYREF
  _BYTE v12[12]; // [esp+84h] [ebp-14h] BYREF
  int v13; // [esp+90h] [ebp-8h]

  Screen::Capture(1, 0, a1, a2); /*0x7af97c*/
  SimpleDialogControl::Constructor(v5); /*0x7af985*/
  v6 = 0; /*0x7af995*/
  v7 = 0; /*0x7af999*/
  v8 = 0; /*0x7af99d*/
  v9 = 0; /*0x7af9a1*/
  v5[0] = &vt_WorldDominationTour_FactionSelectDialogControl; /*0x7af9a5*/
  CCFileClass::Construct(v11, aWdtfsbsmPcx); /*0x7af9ad*/
  v7 = DecodeFrameSHP((int)v11, 0, 0, 0); /*0x7af9cb*/
  v11[0] = &vt_CCFileClass; /*0x7af9cf*/
  v13 = 0; /*0x7af9d3*/
  Vector::Clear((int)v12); /*0x7af9da*/
  v11[0] = &off_7E1668; /*0x7af9e3*/
  BufferIOFileClass::Dtor(v11); /*0x7af9eb*/
  if ( !v8 ) /*0x7af9f4*/
  {
    CCFileClass::Construct(v11, aWdtfsasmPcx); /*0x7af9ff*/
    v2 = DecodeFrameSHP((int)v11, 0, 0, 0); /*0x7afa0c*/
    v11[0] = &vt_CCFileClass; /*0x7afa18*/
    v8 = (void (__thiscall ***)(_DWORD, int))v2; /*0x7afa1c*/
    v13 = 0; /*0x7afa20*/
    Vector::Clear((int)v12); /*0x7afa27*/
    BufferIOFileClass::Destruct(v11); /*0x7afa30*/
  }
  if ( !v9 ) /*0x7afa39*/
  {
    CCFileClass::Construct(v11, aWdtfsssmPcx); /*0x7afa44*/
    v9 = DecodeFrameSHP((int)v11, 0, 0, 0); /*0x7afa5a*/
    CCFileClass::Destruct(v11); /*0x7afa5e*/
  }
  v10 = v7; /*0x7afa76*/
  RunDialog(0x125u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WorldDominationFactionDlgProc, (LPARAM)v5); /*0x7afa7a*/
  v3 = v6; /*0x7afa7f*/
  v5[0] = &vt_WorldDominationTour_FactionSelectDialogControl; /*0x7afa83*/
  if ( v7 ) /*0x7afa91*/
    (*(void (__thiscall **)(_DWORD *, int))*v7)(v7, 1); /*0x7afa97*/
  if ( v8 ) /*0x7afa9f*/
    (**v8)(v8, 1); /*0x7afaa5*/
  if ( v9 ) /*0x7afaad*/
    (*(void (__thiscall **)(_DWORD *, int))*v9)(v9, 1); /*0x7afab3*/
  OwnerDrawControl::InitVtable(v5); /*0x7afab9*/
  return v3; /*0x7afac0*/
}


// ==== 0x007AFAD0  Team_Start_7AFAD0  this=-  sig=csp ====
int __usercall sub_7AFAD0@<eax>(void *a1@<ecx>, int a2@<edi>)
{
  char **v2; // eax
  char **v3; // esi
  int v5; // edi
  void *v6; // [esp+4h] [ebp-88h] BYREF
  void *v7; // [esp+8h] [ebp-84h] BYREF
  char Buffer[128]; // [esp+Ch] [ebp-80h] BYREF

  v2 = StaticString::Factory(a1); /*0x7afad7*/
  sprintf(Buffer, stru_84D874, *v2); /*0x7afae9*/
  String::Assign((char **)&v6, Buffer); /*0x7afafa*/
  String::Assign((char **)&v7, aWdtchoicemdIni); /*0x7afb08*/
  v3 = sub_4F1B80((char **)&v6, (char **)&v7, a2); /*0x7afb1e*/
  DeleteAndZero(&v7); /*0x7afb20*/
  DeleteAndZero(&v6); /*0x7afb29*/
  if ( !v3 ) /*0x7afb30*/
    return 0; /*0x7afb32*/
  v5 = ProcessGraphicMenu((int)v3); /*0x7afb44*/
  (*(void (__thiscall **)(char **, int))*v3)(v3, 1); /*0x7afb4c*/
  switch ( v5 ) /*0x7afb52*/
  {
    case 1: /*0x7afb52*/
      return 1; /*0x7afb7e*/
    case 2: /*0x7afb52*/
      return 2; /*0x7afb71*/
    case 3: /*0x7afb52*/
      return 3; /*0x7afb64*/
  }
  return 0; /*0x7afb34*/
}


// ==== 0x007AFB90  StartWDTCampaign  this=-  sig=ida-proto ====
BOOL __usercall StartWDTCampaign@<eax>(char a1@<cl>, char a2@<bl>, int a3@<edi>)
{
  wchar_t *StringCSF; // eax
  CampaignScore *v2; // eax
  wchar_t *v6; // ebp
  CCFileClass *v7; // eax
  char v8; // bl
  _DWORD *v9; // eax
  CCFileClass *v10; // eax
  char v11; // bl
  _DWORD *v12; // eax
  CCFileClass *v13; // eax
  char v14; // bl
  _DWORD *v15; // eax
  int v16; // esi
  INIClass *v17; // esi
  wchar_t *v18; // [esp+10h] [ebp-12Ch] BYREF
  char v19; // [esp+17h] [ebp-125h]
  rc_ptr_base v20; // [esp+18h] [ebp-124h] BYREF
  int v21; // [esp+1Ch] [ebp-120h]
  _DWORD *v22; // [esp+20h] [ebp-11Ch]
  void (__stdcall ***v23)(int); // [esp+24h] [ebp-118h]
  rc_ptr_base v24; // [esp+28h] [ebp-114h] BYREF
  int v25; // [esp+2Ch] [ebp-110h]
  _DWORD v26[22]; // [esp+30h] [ebp-10Ch] BYREF
  _DWORD v27[3]; // [esp+88h] [ebp-B4h] BYREF
  int v28; // [esp+94h] [ebp-A8h]
  FactionSelectDialogControl_WorldDominationTour v29; // [esp+9Ch] [ebp-A0h] BYREF
  INIClass *v30; // [esp+A8h] [ebp-94h]

  v19 = a1; /*0x7afba6*/
  if ( *(int *)&stru_89E138.__pad_14B0[2748] > 640 ) /*0x7afbaa*/
  {
    StringCSF = GetStringCSF( /*0x7afbc1*/
                  (wchar_t *)&stru_84D874.ambientSoundController[1],
                  0,
                  (CampaignScore *)g_Str_File_WorldDom_cpp,
                  385);
    WideString::Assign(&v18, (CampaignScore *)StringCSF); /*0x7afbcb*/
    v2 = WideString::GetOrEmpty(&v18); /*0x7afbdb*/
    if ( ShowDialogConfirm(v2, 4, (unsigned __int8 (*)())Game::ProcessIdle, 1) != 6 || !Team_Start(640, 480, a2, a3) ) /*0x7afc0e*/
    {
      DeleteAndZero::Alt((void **)&v18); /*0x7afbf5*/
      return 0; /*0x7afc06*/
    }
    *(_DWORD *)&HouseClass_Player.__pad_5568[22736] = 640; /*0x7afc32*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[22740] = 480; /*0x7afc38*/
    ScenarioClass::SaveGameOptions((int)&HouseClass_Player.__pad_5568[22700]); /*0x7afc42*/
    DeleteAndZero::Alt((void **)&v18); /*0x7afc4b*/
  }
  v6 = 0; /*0x7afc52*/
  v23 = 0; /*0x7afc5d*/
  v22 = 0; /*0x7afc61*/
  v18 = 0; /*0x7afc65*/
  v7 = CCFileClass::Construct(v26, &stru_84B608.needsSave_flag); /*0x7afc69*/
  v8 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v7->__pad_0 + 20))(v7, 0); /*0x7afc82*/
  v26[0] = &vt_CCFileClass; /*0x7afc84*/
  v28 = 0; /*0x7afc88*/
  Vector::Clear((int)v27); /*0x7afc8f*/
  v26[0] = &off_7E1668; /*0x7afc98*/
  BufferIOFileClass::Dtor(v26); /*0x7afca0*/
  if ( v8 ) /*0x7afca7*/
  {
    v9 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x7afcab*/
    if ( v9 ) /*0x7afcb5*/
      v23 = (void (__stdcall ***)(int))MixFileClass::FromFile( /*0x7afcc8*/
                                         v9,
                                         (MixFileClass *)&stru_84B608.needsSave_flag,
                                         (int)&stru_87C374.__pad_579C[20080]);
    else
      v23 = 0; /*0x7afcce*/
  }
  v10 = CCFileClass::Construct(v26, (char *)&stru_84D874.attachedTag); /*0x7afcdb*/
  v11 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v10->__pad_0 + 20))(v10, 0); /*0x7afcef*/
  v26[0] = &vt_CCFileClass; /*0x7afcf1*/
  v28 = 0; /*0x7afcf5*/
  Vector::Clear((int)v27); /*0x7afcfc*/
  v26[0] = &off_7E1668; /*0x7afd05*/
  BufferIOFileClass::Dtor(v26); /*0x7afd0d*/
  if ( v11 ) /*0x7afd14*/
  {
    v12 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x7afd18*/
    if ( v12 ) /*0x7afd22*/
      v22 = MixFileClass::FromFile(v12, (MixFileClass *)&stru_84D874.attachedTag, (int)&stru_87C374.__pad_579C[20080]); /*0x7afd35*/
    else
      v22 = 0; /*0x7afd3b*/
  }
  v13 = CCFileClass::Construct(v26, (char *)&stru_84D874.owningHouseIndex); /*0x7afd48*/
  v14 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v13->__pad_0 + 20))(v13, 0); /*0x7afd5c*/
  v26[0] = &vt_CCFileClass; /*0x7afd5e*/
  v28 = 0; /*0x7afd62*/
  Vector::Clear((int)v27); /*0x7afd69*/
  v26[0] = &off_7E1668; /*0x7afd72*/
  BufferIOFileClass::Dtor(v26); /*0x7afd7a*/
  if ( v14 ) /*0x7afd81*/
  {
    v15 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x7afd85*/
    if ( v15 ) /*0x7afd8f*/
      v18 = (wchar_t *)MixFileClass::FromFile( /*0x7afda2*/
                         v15,
                         (MixFileClass *)&stru_84D874.owningHouseIndex,
                         (int)&stru_87C374.__pad_579C[20080]);
    else
      v18 = 0; /*0x7afda8*/
    v6 = v18; /*0x7afdac*/
  }
  if ( !v23 ) /*0x7afdb6*/
    goto LABEL_46; /*0x7afdb6*/
  if ( !v6 ) /*0x7afdbe*/
  {
    (**v23)(1); /*0x7b004a*/
LABEL_46:
    if ( v6 ) /*0x7b004e*/
      (**(void (__thiscall ***)(wchar_t *, int))v6)(v6, 1); /*0x7b0057*/
    if ( v22 ) /*0x7b005f*/
      (*(void (__thiscall **)(_DWORD *, int))*v22)(v22, 1); /*0x7b0065*/
    return 0; /*0x7b006a*/
  }
  v16 = v19 != 0 ? 4 : 1;
  if ( (v19 != 0 ? 3 : 0) == 0xFFFFFFFF )
    goto LABEL_41; /*0x7afdd2*/
  while ( 2 )
  {
    if ( v16 == 6 ) /*0x7afde0*/
      goto LABEL_40; /*0x7afde0*/
    switch ( v16 )
    {
      case 1:
        Screen::Capture(1, 0, v14, (int)&vt_rc_ptr_WorldDominationTour_Campaign); /*0x7afdf9*/
        Team_Start_7B0490(&v29); /*0x7afe05*/
        RunDialog( /*0x7afe1c*/
          0x125u,
          (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WorldDominationFactionDlgProc,
          (LPARAM)&v29);
        v17 = v30; /*0x7afe21*/
        Team_Start_7AF500(&v29); /*0x7afe2f*/
        dword_B77F94 = v17; /*0x7afe34*/
        v16 = v17 != 0 ? 4 : 0;
        goto LABEL_25; /*0x7afe3e*/
      case 4:
        if ( FetchWOLData() ) /*0x7afeef*/
        {
          ComPtr::Constructor(&v20); /*0x7aff00*/
          v20.vfptr = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x7aff0f*/
          ComPtr::Set(&v20, (int)dword_B77F6C); /*0x7aff13*/
          if ( !v21 ) /*0x7aff1e*/
          {
            v20.vfptr = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x7b0030*/
            ComPtr::Release(&v20); /*0x7b0034*/
            return 0; /*0x7b0045*/
          }
          Team_Start_765410(v21, dword_B77F94); /*0x7aff2b*/
          if ( Team_Start_764FA0(v21) ) /*0x7aff34*/
          {
            ComPtr::Constructor(&v24); /*0x7aff41*/
            v24.vfptr = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x7aff50*/
            ComPtr::Set(&v24, (int)dword_B77F7C); /*0x7aff54*/
            if ( v25 && !Team_Start_764FA0(v25) ) /*0x7aff61*/
              Team_Start_76ECD0((int)&v24, (ScoreScreen *)dword_B77F98); /*0x7aff74*/
            v24.vfptr = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x7aff7d*/
            ComPtr::Release(&v24); /*0x7aff81*/
          }
          *(_DWORD *)&HouseClass_Player.__pad_5568[8440] = dword_B77F94 == (INIClass *)3; /*0x7aff9a*/
          if ( Team_Start_76ED10((int)&v20, dword_B77F98, v14) ) /*0x7affa4*/
          {
            dword_B77DC4 = 0; /*0x7affb2*/
            Team_Start_597430(dword_ABDFD8); /*0x7affb8*/
            v16 = 5; /*0x7affbd*/
          }
          else
          {
            v16 = 1; /*0x7affc4*/
          }
          v20.vfptr = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x7affcd*/
          ComPtr::Release(&v20); /*0x7affd1*/
LABEL_25:
          if ( !v16 ) /*0x7afe43*/
            goto LABEL_40; /*0x7afe43*/
          continue; /*0x7afe43*/
        }
        v16 = 0; /*0x7afff2*/
LABEL_40:
        v6 = v18; /*0x7afff4*/
LABEL_41:
        ((void (__thiscall *)(void (__stdcall ***)(int), int))**v23)(v23, 1); /*0x7afff8*/
        (**(void (__thiscall ***)(wchar_t *, int))v6)(v6, 1); /*0x7b0009*/
        if ( v22 ) /*0x7b0011*/
          (*(void (__thiscall **)(_DWORD *, int))*v22)(v22, 1); /*0x7b0017*/
        return v16 == 6;
      case 5:
        v16 = JoinLobbyWOL() != 1 ? 4 : 6;
        continue; /*0x7affed*/
    }
  }
}

