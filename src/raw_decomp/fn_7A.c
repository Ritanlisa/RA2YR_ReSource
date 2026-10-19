// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x007A0430  ObjectClass::CollectWOLConnectionTokens  this=ObjectClass  sig=csp ====
signed int CollectWOLConnectionTokens(ObjectClass *this)
{
  signed int result; // eax
  int v2; // ebx
  int v3; // ebp
  char *v4; // eax
  int vtable3; // eax
  int v6; // esi
  int uniqueId; // ebx
  void *v8; // ebp
  void *abstractFlags; // eax
  int v10; // ebx
  void *v11; // ebp
  void *v12; // eax
  String *v13; // ecx
  void *v14; // [esp+8h] [ebp-7Ch]
  String v15; // [esp+Ch] [ebp-78h] BYREF
  int v16; // [esp+14h] [ebp-70h]
  _BYTE v17[108]; // [esp+18h] [ebp-6Ch] BYREF

  memset(v17, 0, sizeof(v17)); /*0x7a0440*/
  Debug::Log(); /*0x7a044d*/
  result = g_WOL_UserList.owningHouseIndex; /*0x7a0452*/
  v2 = 0; /*0x7a045a*/
  *(_DWORD *)&v15.m_3[1] = 0; /*0x7a045e*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a0462*/
  {
    v3 = 0; /*0x7a0469*/
    v16 = 0; /*0x7a046c*/
    do /*0x7a0673*/
    {
      if ( v3 >= 0 && v2 < result ) /*0x7a0476*/
        qmemcpy(v17, (char *)g_WOL_UserList.nextObject + v3, sizeof(v17)); /*0x7a048a*/
      if ( (v17[0] & 1) != 0 /*0x7a04ba*/
        || (v4 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]), !_strcmpi(&v17[36], v4)) )
      {
        Debug::Log(); /*0x7a049d*/
      }
      else
      {
        String::Assign(&v15, &v17[36]); /*0x7a04e6*/
        String::GetOrEmpty(&v15); /*0x7a04ef*/
        Debug::Log(); /*0x7a04fa*/
        vtable3 = (int)stru_B76AC4.?; /*0x7a04ff*/
        v6 = (int)stru_B76AC4.?; /*0x7a0507*/
        v14 = stru_B76AC4.?; /*0x7a050b*/
        uniqueId = stru_B76AC4.?; /*0x7a0515*/
        if ( (int)stru_B76AC4.? >= stru_B76AC4.? ) /*0x7a051d*/
        {
          uniqueId = 2 * (int)stru_B76AC4.?; /*0x7a0527*/
          if ( 2 * (int)stru_B76AC4.? < 10 ) /*0x7a052d*/
            uniqueId = 10; /*0x7a052f*/
          v8 = (void *)__2_YAPAXI_Z(4 * uniqueId); /*0x7a0543*/
          memset(v8, 0, 4 * ((unsigned int)(4 * uniqueId) >> 2)); /*0x7a0551*/
          abstractFlags = (void *)stru_B76AC4.?; /*0x7a055a*/
          if ( stru_B76AC4.? ) /*0x7a0561*/
          {
            qmemcpy(v8, (const void *)stru_B76AC4.?, 4 * (int)stru_B76AC4.?); /*0x7a056d*/
            abstractFlags = (void *)stru_B76AC4.?; /*0x7a056f*/
            v6 = (int)v14; /*0x7a0574*/
          }
          __3_YAXPAX_Z(abstractFlags); /*0x7a0579*/
          vtable3 = (int)stru_B76AC4.?; /*0x7a057e*/
          stru_B76AC4.? = (int)v8; /*0x7a0586*/
          stru_B76AC4.? = uniqueId; /*0x7a058c*/
        }
        if ( vtable3 >= uniqueId ) /*0x7a0594*/
        {
          v10 = 2 * vtable3; /*0x7a0596*/
          if ( 2 * vtable3 < 10 ) /*0x7a059c*/
            v10 = 10; /*0x7a059e*/
          v11 = (void *)__2_YAPAXI_Z(4 * v10); /*0x7a05b2*/
          memset(v11, 0, 4 * ((unsigned int)(4 * v10) >> 2)); /*0x7a05c0*/
          v12 = (void *)stru_B76AC4.?; /*0x7a05c9*/
          if ( stru_B76AC4.? ) /*0x7a05d0*/
          {
            qmemcpy(v11, (const void *)stru_B76AC4.?, 4 * (int)stru_B76AC4.?); /*0x7a05dc*/
            v12 = (void *)stru_B76AC4.?; /*0x7a05de*/
            v6 = (int)v14; /*0x7a05e3*/
          }
          __3_YAXPAX_Z(v12); /*0x7a05e8*/
          vtable3 = (int)stru_B76AC4.?; /*0x7a05ed*/
          stru_B76AC4.? = (int)v11; /*0x7a05f5*/
          stru_B76AC4.? = v10; /*0x7a05fb*/
        }
        if ( v6 < vtable3 ) /*0x7a0603*/
        {
          memcpy( /*0x7a0620*/
            (void *)(stru_B76AC4.? + 4 * v6 + 4),
            (const void *)(stru_B76AC4.? + 4 * v6),
            4 * (vtable3 + 0x3FFFFFFF * v6));
          vtable3 = (int)stru_B76AC4.?; /*0x7a0625*/
        }
        v13 = (String *)(stru_B76AC4.? + 4 * v6); /*0x7a0633*/
        if ( v13 ) /*0x7a0638*/
        {
          String::AssignFromPtr(v13, (const char **)&v15); /*0x7a063f*/
          vtable3 = (int)stru_B76AC4.?; /*0x7a0644*/
        }
        stru_B76AC4.? = (void *)(vtable3 + 1); /*0x7a064e*/
        DeleteAndZero((ObjectClass *)&v15); /*0x7a0653*/
        v3 = v16; /*0x7a0658*/
        v2 = *(_DWORD *)&v15.m_3[1]; /*0x7a065c*/
      }
      result = g_WOL_UserList.owningHouseIndex; /*0x7a0660*/
      ++v2; /*0x7a0665*/
      v3 += 108; /*0x7a0666*/
      *(_DWORD *)&v15.m_3[1] = v2; /*0x7a066b*/
      v16 = v3; /*0x7a066f*/
    }
    while ( v2 < g_WOL_UserList.owningHouseIndex ); /*0x7a0673*/
  }
  return result; /*0x7a067b*/
}



// ==== 0x007A0690  ObjectClass::RequestMatchWOL  this=ObjectClass  sig=csp ====
char RequestMatchWOL(ObjectClass *this)
{
  HWND v1; // eax
  int i; // esi
  int v3; // esi
  int v4; // ebp
  int v5; // eax
  ObjectClass *nextObject; // ebx
  ObjectClass *PlayerProfile; // eax
  int v9; // esi
  int *matched; // edi
  char **v11; // eax
  wchar_t *StringCSF; // eax
  char **v13; // eax
  char **v14; // eax
  int v15; // esi
  int v16; // edi
  int v17; // esi
  char **v18; // eax
  int v19; // eax
  char **v20; // eax
  char **v21; // eax
  int v22; // esi
  char **v23; // eax
  char **v24; // eax
  char **v25; // eax
  int v26; // esi
  char *v27; // eax
  ObjectClass *v28; // [esp+0h] [ebp-124h]
  Performance *v29; // [esp+0h] [ebp-124h]
  ObjectClass *v30; // [esp+0h] [ebp-124h]
  _BYTE v31[276]; // [esp+10h] [ebp-114h] BYREF

  DeleteAndZero::Alt2((DeleteAndZero *)&stru_B76AC4); /*0x7a069f*/
  v1 = (HWND)Dialog::FindByHandle((Dialog *)0x11F); /*0x7a06a9*/
  if ( v1 ) /*0x7a06b2*/
    CloseDialog(v1, 0); /*0x7a06b8*/
  g_NetworkLobbyState = 0; /*0x7a06bd*/
  Network::Init(); /*0x7a06c3*/
  if ( g_WOL_UserList.owningHouseIndex < 2 ) /*0x7a06cf*/
    goto LABEL_17; /*0x7a06cf*/
  for ( i = 0; i < (int)stru_B76AC4.?; ++i ) /*0x7a06de*/
    DeleteAndZero((ObjectClass *)(stru_B76AC4.? + 4 * i)); /*0x7a06e8*/
  v3 = 0; /*0x7a06fc*/
  for ( stru_B76AC4.? = 0; v3 < stru_B76900.estimatedHealth; ++v3 ) /*0x7a0706*/
    DeleteAndZero((ObjectClass *)(stru_B76900.spawnStatus + 4 * v3)); /*0x7a0711*/
  stru_B76900.estimatedHealth = 0; /*0x7a0720*/
  dword_B736F4 = 0; /*0x7a0726*/
  CollectWOLConnectionTokens(v28); /*0x7a072c*/
  memset(&v31[168], 0, 0x6Cu); /*0x7a074b*/
  v4 = -1; /*0x7a074d*/
  Debug::Log(); /*0x7a0750*/
  v5 = 0; /*0x7a075e*/
  if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x7a0762*/
    goto LABEL_17; /*0x7a0762*/
  nextObject = g_WOL_UserList.nextObject; /*0x7a0764*/
  do /*0x7a0794*/
  {
    if ( v5 >= 0 && v5 < g_WOL_UserList.owningHouseIndex ) /*0x7a0770*/
      qmemcpy(&v31[168], nextObject, 0x6Cu); /*0x7a0780*/
    if ( (v31[168] & 1) != 0 ) /*0x7a078a*/
      v4 = v5; /*0x7a078c*/
    ++v5; /*0x7a078e*/
    nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x7a078f*/
  }
  while ( v5 < g_WOL_UserList.owningHouseIndex ); /*0x7a0794*/
  if ( v4 == -1 ) /*0x7a0799*/
  {
LABEL_17:
    g_WOL_GameListState = 1; /*0x7a079e*/
    g_WOL_IdleHandler = 0; /*0x7a07a8*/
    g_WOL_GameProcessState = -1; /*0x7a07ae*/
    g_WOL_GameListPool = time(0); /*0x7a07c0*/
    return 0; /*0x7a07d1*/
  }
  memset(&v31[60], 0, 0x6Cu); /*0x7a07e1*/
  if ( v4 >= 0 && v4 < g_WOL_UserList.owningHouseIndex ) /*0x7a07e7*/
    qmemcpy(&v31[60], (char *)g_WOL_UserList.nextObject + 108 * v4, 0x6Cu); /*0x7a0802*/
  *(_DWORD *)&v31[92] = 0; /*0x7a0808*/
  *(_DWORD *)&v31[36] = 0; /*0x7a080c*/
  v31[40] = 0; /*0x7a0810*/
  ReadRegistryOptionsWOL((ObjectClass *)&v31[36]); /*0x7a0815*/
  ComPtr::Constructor((ComPtr *)&v31[24]); /*0x7a081e*/
  *(_DWORD *)&v31[24] = &rc_ptr<PlayerProfile>::`vftable'; /*0x7a082c*/
  if ( (unsigned __int8)Flag::IsNot2((Flag *)&v31[36]) ) /*0x7a0830*/
  {
    PlayerProfile = LoadPlayerProfile((ObjectClass *)&v31[16], (const char **)&g_WindowManager.__pad_EC[684]); /*0x7a0842*/
    ComPtr::Set((ComPtr *)&v31[24], (int)PlayerProfile->?); /*0x7a084f*/
    *(_DWORD *)&v31[16] = &rc_ptr<PlayerProfile>::`vftable'; /*0x7a0858*/
    ComPtr::Release((ComPtr *)&v31[16]); /*0x7a085c*/
  }
  else
  {
    ComPtr::Set((ComPtr *)&v31[24], stru_B75E48.ComPtr_field_0x04); /*0x7a086d*/
  }
  v9 = *(_DWORD *)(*(_DWORD *)&v31[28] + 28); /*0x7a087b*/
  String::Assign((String *)&v31[32], aMatch); /*0x7a0882*/
  unknown_libname_73(&v31[8]); /*0x7a088b*/
  if ( dword_A8B244 != 3 ) /*0x7a0897*/
    goto LABEL_35; /*0x7a0897*/
  String::Assign_Alt((String *)&v31[32], aMatchwdt); /*0x7a08a6*/
  matched = RequestMatchWOL_Helper(); /*0x7a08b4*/
  ComPtr::Constructor((ComPtr *)&v31[16]); /*0x7a08b6*/
  *(_DWORD *)&v31[16] = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7a08c4*/
  ComPtr::Set((ComPtr *)&v31[16], matched[1]); /*0x7a08cc*/
  if ( *(_DWORD *)&v31[20] ) /*0x7a08d7*/
  {
    if ( *(_DWORD *)(*(_DWORD *)&v31[20] + 68) == 2 ) /*0x7a08f2*/
    {
      String::Assign_Alt((String *)&v31[8], aWds0); /*0x7a097a*/
      if ( v9 <= 4 ) /*0x7a0982*/
        goto LABEL_34; /*0x7a0982*/
    }
    else
    {
      if ( *(_DWORD *)(*(_DWORD *)&v31[20] + 68) != 3 ) /*0x7a08f5*/
      {
        g_WOL_GameListState = 0; /*0x7a08f8*/
        g_WOL_IdleHandler = 0; /*0x7a08fe*/
        g_WOL_GameProcessState = -1; /*0x7a0904*/
        g_WOL_GameListPool = time(0); /*0x7a091a*/
        *(_DWORD *)&v31[16] = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7a091f*/
        ComPtr::Release((ComPtr *)&v31[16]); /*0x7a0923*/
        DeleteAndZero((ObjectClass *)&v31[8]); /*0x7a092c*/
        DeleteAndZero((ObjectClass *)&v31[32]); /*0x7a0935*/
        *(_DWORD *)&v31[24] = &rc_ptr<PlayerProfile>::`vftable'; /*0x7a093e*/
        ComPtr::Release((ComPtr *)&v31[24]); /*0x7a0946*/
        return 0; /*0x7a0957*/
      }
      String::Assign_Alt((String *)&v31[8], aWds1); /*0x7a0961*/
      if ( (unsigned int)v9 > 4 ) /*0x7a0968*/
        goto LABEL_34; /*0x7a0968*/
    }
    v9 = -1; /*0x7a0984*/
    goto LABEL_34; /*0x7a0984*/
  }
  String::Assign_Alt((String *)&v31[8], aWds0); /*0x7a08e2*/
LABEL_34:
  String::Append((String *)&v31[8], aWdt); /*0x7a0987*/
  v11 = FromStringInt((char **)&v31[4], *(int *)dword_A8B240); /*0x7a099f*/
  String::Append2((String *)&v31[8], v11); /*0x7a09a9*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a09b2*/
  *(_DWORD *)&v31[16] = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7a09bb*/
  ComPtr::Release((ComPtr *)&v31[16]); /*0x7a09bf*/
LABEL_35:
  StringCSF = GetStringCSF(aWolRequestingm, 0, g_Str_File_wonline_cpp, 28395); /*0x7a09c9*/
  Dialog::ShowMessage(16744576, (size_t)StringCSF); /*0x7a09e6*/
  String::AssignFromPtr((String *)v31, (const char **)&v31[32]); /*0x7a09f7*/
  String::Append((String *)v31, aCou); /*0x7a0a05*/
  v13 = FromStringInt((char **)&v31[4], v9); /*0x7a0a10*/
  String::Append2((String *)v31, v13); /*0x7a0a1a*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0a23*/
  String::Append((String *)v31, aCol); /*0x7a0a31*/
  v14 = FromStringInt((char **)&v31[4], *(_DWORD *)(*(_DWORD *)&v31[28] + 32)); /*0x7a0a41*/
  String::Append2((String *)v31, v14); /*0x7a0a4b*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0a54*/
  String::Append((String *)v31, aMbr); /*0x7a0a62*/
  if ( *(_BYTE *)(*(_DWORD *)&v31[28] + 56) ) /*0x7a0a6b*/
    String::Append((String *)v31, (const char *)a1); /*0x7a0a77*/
  else
    String::Append((String *)v31, (const char *)&stru_82BA00.?); /*0x7a0a82*/
  String::AssignFromPtr((String *)&v31[12], (const char **)&g_WindowManager.__pad_EC[684]); /*0x7a0a90*/
  String::ToLower((String *)&v31[12]); /*0x7a0a99*/
  v15 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 /*0x7a0abd*/
                  + 4 * (dword_B76548(&v31[12]) & ((1 << SLOBYTE(g_WOL_ConnectionPool.HashMap_field_0x0C)) - 1)));
  if ( v15 ) /*0x7a0ac2*/
  {
    while ( !(unsigned __int8)String::Compare((String *)v15, (const char **)&v31[12]) ) /*0x7a0ad6*/
    {
      v15 = *(_DWORD *)(v15 + 8); /*0x7a0ad8*/
      if ( !v15 ) /*0x7a0add*/
        goto LABEL_50; /*0x7a0add*/
    }
    v16 = 0; /*0x7a0ae9*/
    if ( g_WOL_ConnectionPool.HashMap_field_0x04 ) /*0x7a0aed*/
    {
      v17 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 /*0x7a0b0e*/
                      + 4 * (dword_B76548(&v31[12]) & ((1 << SLOBYTE(g_WOL_ConnectionPool.HashMap_field_0x0C)) - 1)));
      if ( v17 ) /*0x7a0b13*/
      {
        while ( !(unsigned __int8)String::Compare((String *)v17, (const char **)&v31[12]) ) /*0x7a0b23*/
        {
          v17 = *(_DWORD *)(v17 + 8); /*0x7a0b25*/
          if ( !v17 ) /*0x7a0b2a*/
            goto LABEL_49; /*0x7a0b2a*/
        }
        if ( v17 != -4 ) /*0x7a0b37*/
          v16 = *(_DWORD *)(v17 + 4); /*0x7a0b39*/
      }
    }
LABEL_49:
    String::Append((String *)v31, aLoc); /*0x7a0b3b*/
    v18 = FromStringInt((char **)&v31[4], v16); /*0x7a0b4f*/
    String::Append2((String *)v31, v18); /*0x7a0b59*/
    DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0b62*/
  }
LABEL_50:
  String::Append((String *)v31, aRat); /*0x7a0b67*/
  v19 = Performance::Profile(v29); /*0x7a0b75*/
  v20 = FromStringInt((char **)&v31[4], v19); /*0x7a0b80*/
  String::Append2((String *)v31, v20); /*0x7a0b8a*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0b93*/
  String::Append((String *)v31, aRes); /*0x7a0ba1*/
  v21 = FromStringInt((char **)&v31[4], stru_A8EB00.ObjectTypeClass[33]); /*0x7a0bb0*/
  String::Append2((String *)v31, v21); /*0x7a0bba*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0bc3*/
  Network::GetAddress((Network *)&stru_A8DBC0, &v31[56], (int)&v31[48], &v31[46]); /*0x7a0bdc*/
  v22 = *(_DWORD *)&v31[48]; /*0x7a0be1*/
  String::Append((String *)v31, aAdr); /*0x7a0bee*/
  v23 = FromStringInt((char **)&v31[4], v22); /*0x7a0bf9*/
  String::Append2((String *)v31, v23); /*0x7a0c03*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0c0c*/
  String::Append((String *)v31, aNat); /*0x7a0c1a*/
  v24 = FromStringInt((char **)&v31[4], (unsigned __int16)dword_ABFEC8); /*0x7a0c2f*/
  String::Append2((String *)v31, v24); /*0x7a0c39*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0c42*/
  String::Append((String *)v31, aPrt); /*0x7a0c50*/
  v25 = FromStringInt((char **)&v31[4], dword_A8E228); /*0x7a0c5f*/
  String::Append2((String *)v31, v25); /*0x7a0c69*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0c72*/
  String::Append2((String *)v31, (char **)&v31[8]); /*0x7a0c80*/
  v26 = *(_DWORD *)ppv; /*0x7a0c8e*/
  v27 = String::GetOrEmpty((String *)v31); /*0x7a0c90*/
  (*(void (__stdcall **)(LPVOID, _BYTE *, char *))(v26 + 48))(ppv, &v31[60], v27); /*0x7a0ca2*/
  g_WOL_GameListState = 0; /*0x7a0ca5*/
  g_WOL_IdleHandler = 4; /*0x7a0cac*/
  g_WOL_GameProcessState = 180; /*0x7a0cb6*/
  g_WOL_GameListPool = time(0); /*0x7a0cc8*/
  ProcessPingRequestsWOL(v30); /*0x7a0ccd*/
  DeleteAndZero((ObjectClass *)&v31[12]); /*0x7a0cd6*/
  DeleteAndZero((ObjectClass *)v31); /*0x7a0cdf*/
  DeleteAndZero((ObjectClass *)&v31[8]); /*0x7a0ce8*/
  DeleteAndZero((ObjectClass *)&v31[32]); /*0x7a0cf1*/
  *(_DWORD *)&v31[24] = &rc_ptr<PlayerProfile>::`vftable'; /*0x7a0cfa*/
  ComPtr::Release((ComPtr *)&v31[24]); /*0x7a0cfe*/
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
    v3 = dword_B77900; /*0x7a0d34*/
    v7 = 0; /*0x7a0d3a*/
    v6 = dword_B77900; /*0x7a0d40*/
    if ( (int)dword_B77900 > 0 ) /*0x7a0d44*/
    {
      do /*0x7a0dba*/
      {
        if ( v1 >= 0 && v2 < (int)dword_B77900 ) /*0x7a0d51*/
        {
          qmemcpy(v9, (char *)dword_B77908 + v1, sizeof(v9)); /*0x7a0d64*/
          v3 = v6; /*0x7a0d66*/
        }
        S_addr = v9[6].S_un.S_addr; /*0x7a0d6f*/
        ntoainet(v9[6]); /*0x7a0d71*/
        Debug::Log(); /*0x7a0d81*/
        v8 = *(_DWORD *)g_UIPointerTable; /*0x7a0d9c*/
        v5 = ntoainet((struct in_addr)S_addr); /*0x7a0da0*/
        result = (*(int (__stdcall **)(LPVOID, char *, int, int *))(v8 + 24))(g_UIPointerTable, v5, 1000, &v7); /*0x7a0db1*/
        ++v2; /*0x7a0db4*/
        v1 += 108; /*0x7a0db5*/
      }
      while ( v2 < v3 ); /*0x7a0dba*/
    }
  }
  return result; /*0x7a0dbd*/
}



// ==== 0x007A0DD0  ObjectClass::method_7A0DD0  this=ObjectClass  sig=csp ====
void __thiscall sub_7A0DD0(ObjectClass *this)
{
  int v2; // ebp
  char **v3; // edi
  HWND GameUI; // eax

  if ( this ) /*0x7a0dd8*/
  {
    v2 = 0; /*0x7a0dda*/
    v3 = (char **)dword_A8DA90; /*0x7a0ddc*/
    while ( !*v3 || strcmp(ToWideStringChar(*v3), (const char *)&this->occupant) ) /*0x7a0e1a*/
    {
      ++v3; /*0x7a0e1c*/
      ++v2; /*0x7a0e1f*/
      if ( (int)v3 >= (int)&dword_A8DAB0 ) /*0x7a0e26*/
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
    v1 = *(wchar_t **)((char *)&dword_A8DA90 + i * 4); /*0x7a0e53*/
    if ( !v1 || !IsKnownPointer(v1) ) /*0x7a0e5d*/
      dword_B76440[i] = -1; /*0x7a0e66*/
    v2 = ToWideStringChar(*(char **)((char *)&dword_A8DA90 + i * 4)); /*0x7a0e76*/
    SetGameOptionsPing(v2, dword_B76440[i]); /*0x7a0e83*/
  }
}



// ==== 0x007A0EA0  SetGameOptionsPing  this=-  sig=csp ====
void __fastcall GameOptions_SetPing(const char *a1, int a2)
{
  int i; // edi
  char *v5; // ecx
  HWND GameUI; // ecx

  Debug::Log(); /*0x7a0eaf*/
  for ( i = 0; i < 8; ++i ) /*0x7a0eb7*/
  {
    v5 = (char *)*(&dword_A8DA90 + i); /*0x7a0eb9*/
    if ( v5 ) /*0x7a0ec2*/
    {
      if ( !strcmp(ToWideStringChar(v5), a1) ) /*0x7a0ed1*/
      {
        dword_B76440[i] = a2; /*0x7a0ef8*/
        GameUI = (HWND)Dialog::FindGameUI(); /*0x7a0f04*/
        if ( GameUI ) /*0x7a0f08*/
        {
          if ( a2 >= 0 ) /*0x7a0f0c*/
          {
            if ( a2 >= 300 ) /*0x7a0f18*/
            {
              if ( a2 >= 500 ) /*0x7a0f24*/
                UpdateLobbyGraphicsWOL(GameUI, 2); /*0x7a0f2e*/
              else
                UpdateLobbyGraphicsWOL(GameUI, 1); /*0x7a0f28*/
            }
            else
            {
              UpdateLobbyGraphicsWOL(GameUI, 0); /*0x7a0f1c*/
            }
          }
          else
          {
            UpdateLobbyGraphicsWOL(GameUI, -1); /*0x7a0f10*/
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

  v10 = dword_B77900; /*0x7a0f58*/
  memset(v11, 0, sizeof(v11)); /*0x7a0f5c*/
  Source[0] = 80; /*0x7a0f60*/
  Source[2] = 0; /*0x7a0f67*/
  Source[1] = dword_B77900 + 48; /*0x7a0f6c*/
  result = g_NetworkLobbyState; /*0x7a0f70*/
  if ( !g_NetworkLobbyState ) /*0x7a0f77*/
  {
    v1 = 0; /*0x7a0f7e*/
    if ( (int)dword_B77900 > 0 ) /*0x7a0f82*/
    {
      v2 = 0; /*0x7a0f8a*/
      do /*0x7a102a*/
      {
        if ( v2 >= 0 && v1 < (int)dword_B77900 ) /*0x7a0f96*/
          qmemcpy(v11, (char *)dword_B77908 + v2, sizeof(v11)); /*0x7a0faa*/
        (*(void (__stdcall **)(LPVOID, _DWORD, int *))(*(_DWORD *)g_UIPointerTable + 32))(g_UIPointerTable, v11[6], &v9); /*0x7a0fbe*/
        sprintf(Buffer, ",%s,%d", (const char *)&v11[9], v9); /*0x7a0fd8*/
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
char ProcessPingRequestsWOL(ObjectClass *this)
{
  char result; // al
  ULONG S_addr; // ebx
  char *v3; // eax
  int owningHouseIndex; // eax
  char *v5; // ebp
  int v6; // esi
  int v7; // edi
  char *v8; // eax
  int v9; // esi
  char *v10; // eax
  char *v11; // esi
  char v12; // [esp+13h] [ebp-79h]
  String v13; // [esp+14h] [ebp-78h] BYREF
  int v14; // [esp+1Ch] [ebp-70h] BYREF
  struct in_addr v15[27]; // [esp+20h] [ebp-6Ch] BYREF

  v12 = 0; /*0x7a1072*/
  memset(v15, 0, sizeof(v15)); /*0x7a1077*/
  result = g_NetworkLobbyState; /*0x7a1079*/
  if ( !g_NetworkLobbyState ) /*0x7a1080*/
  {
    Debug::Log(); /*0x7a1098*/
    result = (char)stru_B76AC4.?; /*0x7a109d*/
    if ( stru_B76AC4.? ) /*0x7a10a7*/
    {
      S_addr = v15[6].S_un.S_addr; /*0x7a10ad*/
      while ( 1 ) /*0x7a10b1*/
      {
        if ( stru_B76900.estimatedHealth >= 10 ) /*0x7a10b8*/
          return result; /*0x7a10b8*/
        result = v12; /*0x7a10be*/
        if ( v12 ) /*0x7a10c4*/
          return result; /*0x7a10c4*/
        unknown_libname_73(&v13); /*0x7a10ce*/
        if ( (int)stru_B76AC4.? > 0 ) /*0x7a10da*/
          String::Reassign(&v13, (const char **)stru_B76AC4.?); /*0x7a10e7*/
        String::GetOrEmpty(&v13); /*0x7a10f0*/
        Debug::Log(); /*0x7a10fb*/
        v3 = String::GetOrEmpty(&v13); /*0x7a1107*/
        String::Assign((String *)&v13.m_3[1], v3); /*0x7a1111*/
        owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a1116*/
        v5 = 0; /*0x7a111b*/
        v6 = 0; /*0x7a111d*/
        if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x7a1121*/
        {
LABEL_15:
          v6 = -1; /*0x7a115c*/
        }
        else
        {
          v7 = 0; /*0x7a1123*/
          while ( 1 ) /*0x7a1125*/
          {
            if ( v7 >= 0 && v6 < owningHouseIndex ) /*0x7a112b*/
              v5 = (char *)g_WOL_UserList.nextObject + v7; /*0x7a1132*/
            v8 = String::GetOrEmpty_Alt((String *)&v13.m_3[1]); /*0x7a113d*/
            if ( !_strcmpi(v8, v5 + 36) ) /*0x7a1143*/
              break; /*0x7a1143*/
            owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a114f*/
            ++v6; /*0x7a1154*/
            v7 += 108; /*0x7a1155*/
            if ( v6 >= g_WOL_UserList.owningHouseIndex ) /*0x7a115a*/
              goto LABEL_15; /*0x7a115a*/
          }
        }
        DeleteAndZero((ObjectClass *)&v13.m_3[1]); /*0x7a1163*/
        if ( v6 == -1 ) /*0x7a116b*/
        {
          if ( (int)stru_B76AC4.? > 0 ) /*0x7a127f*/
          {
            String::Reassign(&v13, (const char **)stru_B76AC4.?); /*0x7a128c*/
            v11 = 0; /*0x7a1296*/
            if ( stru_B76AC4.? ) /*0x7a129a*/
            {
              if ( (int)stru_B76AC4.? <= 0 ) /*0x7a129c*/
                v11 = (char *)stru_B76AC4.? - 1; /*0x7a129e*/
              DeleteAndZero((ObjectClass *)(stru_B76AC4.? + 4 * (_DWORD)v11)); /*0x7a12a9*/
              memcpy( /*0x7a12d2*/
                (void *)(stru_B76AC4.? + 4 * (_DWORD)v11),
                (const void *)(stru_B76AC4.? + 4 * (_DWORD)(v11 + 1)),
                4 * ((int)stru_B76AC4.? + 0x3FFFFFFF * (_DWORD)(v11 + 1)));
              if ( 3 * (int)--stru_B76AC4.? <= stru_B76AC4.? ) /*0x7a12ef*/
                VectorClass::Shrink((VectorClass *)&stru_B76AC4.?); /*0x7a12f6*/
            }
          }
          goto LABEL_36; /*0x7a12f6*/
        }
        if ( v6 >= 0 && v6 < g_WOL_UserList.owningHouseIndex ) /*0x7a117b*/
        {
          qmemcpy(v15, (char *)g_WOL_UserList.nextObject + 108 * v6, sizeof(v15)); /*0x7a1194*/
          S_addr = v15[6].S_un.S_addr; /*0x7a1196*/
        }
        if ( !S_addr ) /*0x7a119c*/
          break; /*0x7a119c*/
        String::GetOrEmpty(&v13); /*0x7a11a6*/
        Debug::Log(); /*0x7a11b1*/
        v9 = *(_DWORD *)g_UIPointerTable; /*0x7a11c3*/
        v10 = ntoainet((struct in_addr)S_addr); /*0x7a11cc*/
        if ( !(*(int (__stdcall **)(LPVOID, char *, int, int *))(v9 + 24))(g_UIPointerTable, v10, 1000, &v14) /*0x7a11e5*/
          && v14 >= 0 )
        {
          StringVector::Insert( /*0x7a11f8*/
            (StringVector *)&stru_B76900.estimatedHealth,
            (const char **)&v13,
            stru_B76900.estimatedHealth);
          if ( (int)stru_B76AC4.? > 0 ) /*0x7a1204*/
          {
            String::Reassign(&v13, (const char **)stru_B76AC4.?); /*0x7a1210*/
            DynamicArray::Remove((DynamicArray *)&stru_B76AC4.?, 0); /*0x7a121c*/
          }
LABEL_36:
          String::GetOrEmpty(&v13); /*0x7a12fb*/
          Debug::Log(); /*0x7a130a*/
          goto LABEL_37; /*0x7a130a*/
        }
        v12 = 1; /*0x7a1235*/
LABEL_37:
        DeleteAndZero((ObjectClass *)&v13); /*0x7a1312*/
        result = (char)stru_B76AC4.?; /*0x7a131b*/
        if ( !stru_B76AC4.? ) /*0x7a1322*/
          return result; /*0x7a1322*/
      }
      if ( (int)stru_B76AC4.? > 0 ) /*0x7a1246*/
      {
        String::Reassign(&v13, (const char **)stru_B76AC4.?); /*0x7a1253*/
        DynamicArray::Remove((DynamicArray *)&stru_B76AC4.?, 0); /*0x7a125f*/
      }
      goto LABEL_36; /*0x7a125f*/
    }
  }
  return result; /*0x7a1328*/
}



// ==== 0x007A1330  ObjectClass::UpdateWOLLobbyPings  this=ObjectClass  sig=csp ====
void UpdateWOLLobbyPings(ObjectClass *this)
{
  int v1; // ebp
  int v2; // esi
  char *v3; // eax
  int owningHouseIndex; // eax
  char *v5; // ebx
  int v6; // esi
  int v7; // edi
  char *v8; // eax
  char **v9; // eax
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  int v13; // eax
  ObjectClass *nextObject; // edx
  int v15; // esi
  char *v16; // eax
  char **v17; // [esp-8h] [ebp-B4h]
  char **v18; // [esp+0h] [ebp-ACh]
  String v19; // [esp+14h] [ebp-98h] BYREF
  int v20; // [esp+1Ch] [ebp-90h] BYREF
  int v21; // [esp+20h] [ebp-8Ch]
  String v22; // [esp+24h] [ebp-88h] BYREF
  String v23; // [esp+2Ch] [ebp-80h] BYREF
  char *v24; // [esp+34h] [ebp-78h] BYREF
  String v25; // [esp+38h] [ebp-74h] BYREF
  _DWORD v26[27]; // [esp+40h] [ebp-6Ch] BYREF

  memset(v26, 0, sizeof(v26)); /*0x7a1342*/
  v21 = 0; /*0x7a1349*/
  if ( !g_NetworkLobbyState ) /*0x7a1353*/
  {
    String::Assign((String *)&v19.m_3[1], aPings); /*0x7a1364*/
    Debug::Log(); /*0x7a1374*/
    if ( stru_B76900.estimatedHealth ) /*0x7a1383*/
    {
      v1 = v26[6]; /*0x7a138a*/
      do /*0x7a15ff*/
      {
        unknown_libname_73(&v19); /*0x7a1392*/
        v2 = stru_B76900.estimatedHealth - 1; /*0x7a139c*/
        if ( stru_B76900.estimatedHealth - 1 >= 0 && v2 < stru_B76900.estimatedHealth ) /*0x7a13a9*/
        {
          String::Reassign(&v19, (const char **)(stru_B76900.spawnStatus + 4 * v2)); /*0x7a13b9*/
          if ( stru_B76900.estimatedHealth ) /*0x7a13c5*/
          {
            if ( v2 >= stru_B76900.estimatedHealth ) /*0x7a13c9*/
              v2 = stru_B76900.estimatedHealth - 1; /*0x7a13cb*/
            Object::DtorWithDelete((Object *)(stru_B76900.spawnStatus + 4 * v2), 0); /*0x7a13d8*/
            memcpy( /*0x7a1401*/
              (void *)(stru_B76900.spawnStatus + 4 * v2),
              (const void *)(stru_B76900.spawnStatus + 4 * (v2 + 1)),
              4 * (stru_B76900.estimatedHealth + 0x3FFFFFFF * (v2 + 1)));
            --stru_B76900.estimatedHealth; /*0x7a140f*/
            if ( 3 * stru_B76900.estimatedHealth <= *(int *)&stru_B76900.isOnMap ) /*0x7a141e*/
              VectorClass::Shrink((VectorClass *)&stru_B76900.estimatedHealth); /*0x7a1425*/
          }
        }
        String::GetOrEmpty(&v19); /*0x7a142e*/
        Debug::Log(); /*0x7a1439*/
        v3 = String::GetOrEmpty(&v19); /*0x7a1445*/
        String::Assign(&v22, v3); /*0x7a144f*/
        owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a1454*/
        v5 = 0; /*0x7a1459*/
        v6 = 0; /*0x7a145b*/
        if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x7a145f*/
        {
LABEL_18:
          v6 = -1; /*0x7a149b*/
        }
        else
        {
          v7 = 0; /*0x7a1461*/
          while ( 1 ) /*0x7a1463*/
          {
            if ( v7 >= 0 && v6 < owningHouseIndex ) /*0x7a1469*/
              v5 = (char *)g_WOL_UserList.nextObject + v7; /*0x7a1471*/
            v8 = String::GetOrEmpty_Alt(&v22); /*0x7a147c*/
            if ( !_strcmpi(v8, v5 + 36) ) /*0x7a1482*/
              break; /*0x7a1482*/
            owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a148e*/
            ++v6; /*0x7a1493*/
            v7 += 108; /*0x7a1494*/
            if ( v6 >= g_WOL_UserList.owningHouseIndex ) /*0x7a1499*/
              goto LABEL_18; /*0x7a1499*/
          }
        }
        DeleteAndZero((ObjectClass *)&v22); /*0x7a14a2*/
        if ( v6 == -1 ) /*0x7a14aa*/
          goto LABEL_27; /*0x7a14aa*/
        if ( v6 >= 0 && v6 < g_WOL_UserList.owningHouseIndex ) /*0x7a14ca*/
        {
          qmemcpy(v26, (char *)g_WOL_UserList.nextObject + 108 * v6, sizeof(v26)); /*0x7a14e4*/
          v1 = v26[6]; /*0x7a14e6*/
        }
        if ( !v1 /*0x7a1522*/
          || (v20 = -1,
              (*(void (__stdcall **)(LPVOID, int, int *))(*(_DWORD *)g_UIPointerTable + 32))(g_UIPointerTable, v1, &v20),
              v20 == -1) )
        {
LABEL_27:
          String::GetOrEmpty(&v19); /*0x7a15dc*/
          Debug::Log(); /*0x7a15e7*/
        }
        else
        {
          String::GetOrEmpty(&v19); /*0x7a152d*/
          Debug::Log(); /*0x7a1538*/
          v18 = String::Assign(&v25, asc_81C8FC); /*0x7a1556*/
          v17 = FromStringInt((char **)&v23.m_3[1], v20); /*0x7a1565*/
          v9 = String::Assign(&v23, Str); /*0x7a1570*/
          v10 = String::Concat(&v19, &v24, v9); /*0x7a157f*/
          v11 = String::Concat((String *)v10, (char **)&v25.m_3[1], v17); /*0x7a1586*/
          v12 = String::Concat((String *)v11, (char **)&v22.m_3[1], v18); /*0x7a158d*/
          String::Append2((String *)&v19.m_3[1], v12); /*0x7a1597*/
          DeleteAndZero((ObjectClass *)&v22.m_3[1]); /*0x7a15a0*/
          DeleteAndZero((ObjectClass *)&v25.m_3[1]); /*0x7a15a9*/
          DeleteAndZero((ObjectClass *)&v24); /*0x7a15b2*/
          DeleteAndZero((ObjectClass *)&v23); /*0x7a15bb*/
          DeleteAndZero((ObjectClass *)&v23.m_3[1]); /*0x7a15c4*/
          DeleteAndZero((ObjectClass *)&v25); /*0x7a15cd*/
          ++v21; /*0x7a15d2*/
        }
        DeleteAndZero((ObjectClass *)&v19); /*0x7a15f3*/
      }
      while ( stru_B76900.estimatedHealth ); /*0x7a15ff*/
    }
    v13 = 0; /*0x7a160a*/
    dword_B736F4 = 0; /*0x7a160e*/
    if ( v21 > 0 && g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a161d*/
    {
      nextObject = g_WOL_UserList.nextObject; /*0x7a161f*/
      while ( 1 ) /*0x7a1625*/
      {
        if ( v13 >= 0 && v13 < g_WOL_UserList.owningHouseIndex ) /*0x7a162b*/
          qmemcpy(&g_WebBrowserConfig.occupant, nextObject, 0x6Cu); /*0x7a1639*/
        if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x7a1642*/
          break; /*0x7a1642*/
        ++v13; /*0x7a1644*/
        nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x7a1645*/
        if ( v13 >= g_WOL_UserList.owningHouseIndex ) /*0x7a164a*/
          goto LABEL_40; /*0x7a164a*/
      }
      if ( &g_WebBrowserConfig != (ObjectClass *)-36 ) /*0x7a1655*/
      {
        v15 = *(_DWORD *)ppv; /*0x7a165d*/
        v16 = String::GetOrEmpty((String *)&v19.m_3[1]); /*0x7a1663*/
        (*(void (__stdcall **)(LPVOID, int *, char *))(v15 + 48))(ppv, &g_WebBrowserConfig.occupant, v16); /*0x7a1675*/
        String::GetOrEmpty((String *)&v19.m_3[1]); /*0x7a167c*/
        Debug::Log(); /*0x7a1687*/
      }
    }
LABEL_40:
    DeleteAndZero((ObjectClass *)&v19.m_3[1]); /*0x7a168f*/
  }
}



// ==== 0x007A16B0  HandleWOLMatchMessage  this=-  sig=csp ====
void __fastcall HandleWOLMatchMessage(char *String1, char a2)
{
  wchar_t *StringCSF; // eax
  wchar_t *v5; // eax
  wchar_t *v6; // eax
  wchar_t *v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  char *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax

  if ( a2 ) /*0x7a16b8*/
  {
    if ( !_strnicmp(String1, aFail, 4u) ) /*0x7a16c6*/
    {
      StringCSF = GetStringCSF((wchar_t *)aWolMatchfail, 0, g_Str_File_wonline_cpp, 28671); /*0x7a16e3*/
LABEL_10:
      Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)StringCSF); /*0x7a17a2*/
      SetEvent(dword_B736C8); /*0x7a17b6*/
      return; /*0x7a17be*/
    }
    if ( !_strnicmp(String1, aPingfail, 8u) ) /*0x7a16f0*/
    {
      v5 = GetStringCSF(aWolMatchfailpi, 0, g_Str_File_wonline_cpp, 28677); /*0x7a170d*/
      Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)v5); /*0x7a1718*/
      SetEvent(dword_B736C8); /*0x7a1727*/
      return; /*0x7a172f*/
    }
    if ( !_strnicmp(String1, aRankfail, 8u) ) /*0x7a1738*/
    {
      v6 = GetStringCSF(aWolMatchfailra, 0, g_Str_File_wonline_cpp, 28683); /*0x7a1755*/
      Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)v6); /*0x7a1760*/
      SetEvent(dword_B736C8); /*0x7a176f*/
      return; /*0x7a1777*/
    }
    if ( !_strnicmp(String1, aWdtsidefail, 0xBu) ) /*0x7a1780*/
    {
      StringCSF = GetStringCSF(aWolMatchfailwd, 0, g_Str_File_wonline_cpp, 28689); /*0x7a179d*/
      goto LABEL_10; /*0x7a179d*/
    }
  }
  if ( !_strnicmp(String1, aExit_0, 4u) ) /*0x7a17c7*/
  {
    v7 = GetStringCSF(g_Str_WOL_MatchFailExit, 0, g_Str_File_wonline_cpp, 28695); /*0x7a17e4*/
    Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)v7); /*0x7a17ef*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x7a17ff*/
    v8 = GetStringCSF(g_Str_WOL_MatchFailExit, 0, g_Str_File_wonline_cpp, 28698); /*0x7a181a*/
    ShowDialogConfirm(v8, 0, (int)GameLoop::Thunk, 0); /*0x7a1823*/
    SetEvent(Handles); /*0x7a182f*/
  }
  else if ( !_strnicmp(String1, aWorking, 7u) ) /*0x7a1840*/
  {
    if ( g_WOL_IdleHandler == 4 ) /*0x7a1853*/
    {
      g_WOL_GameListState = 0; /*0x7a1857*/
      g_WOL_IdleHandler = 5; /*0x7a1861*/
      g_WOL_GameProcessState = 180; /*0x7a186b*/
      g_WOL_GameListPool = time(0); /*0x7a187d*/
    }
    v9 = GetStringCSF(aGuiMatchingpro, 0, g_Str_File_wonline_cpp, 28710); /*0x7a1893*/
    Dialog::ShowMessage(-1, (size_t)v9); /*0x7a189f*/
  }
  else if ( !_strnicmp(String1, aInfo, 5u) ) /*0x7a18b2*/
  {
    v10 = CharToWideString(String1 + 5); /*0x7a18c1*/
    Dialog::ShowMessage(16744576, (size_t)v10); /*0x7a18cc*/
  }
  else if ( !_strnicmp(String1, aPool, 5u) ) /*0x7a18df*/
  {
    v11 = GetStringCSF(aWolMatchingpla, 0, g_Str_File_wonline_cpp, 28720); /*0x7a1900*/
    Dialog::ShowMessage(16744576, (size_t)v11, String1 + 5); /*0x7a190b*/
  }
  else if ( a2 && !_strnicmp(String1, aStart_0, 6u) ) /*0x7a1922*/
  {
    strncpy(unk_B73714, String1 + 6, 0xFFu); /*0x7a193c*/
    Debug::Log(); /*0x7a194b*/
    SetEvent(dword_B736C4); /*0x7a195a*/
  }
  else if ( _strcmpi(String1, aAck) && _strcmpi(String1, aNack_0) ) /*0x7a197b*/
  {
    if ( !_strnicmp(String1, aNeed, 5u) ) /*0x7a198f*/
    {
      Debug::Log(); /*0x7a19a1*/
    }
    else if ( a2 ) /*0x7a19ae*/
    {
      v12 = GetStringCSF(aWolMatchunknow, 0, g_Str_File_wonline_cpp, 28753); /*0x7a19c1*/
      Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)v12); /*0x7a19cc*/
    }
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

  v10 = stru_B76AC4; /*0x7a19f1*/
  StringCSF = GetStringCSF(aWolMatchfoundw, 0, g_Str_File_wonline_cpp, 28774); /*0x7a19fc*/
  Dialog::ShowMessage(12648447, (size_t)StringCSF, v10); /*0x7a1a07*/
  String::ToLowerCopy((const char **)&stru_B76AC4, (char **)&v12); /*0x7a1a19*/
  if ( dword_B77D84 ) /*0x7a1a25*/
  {
    for ( i = *((_DWORD *)stru_B77D80 + (dword_B77D98(&v12) & ((1 << dword_B77D8C) - 1))); i; i = *(_DWORD *)(i + 112) ) /*0x7a1a4b*/
    {
      if ( String::Compare((const char **)i, (const char **)&v12) ) /*0x7a1a54*/
        break; /*0x7a1a5b*/
    }
  }
  v2 = String::GetOrEmpty((char **)&stru_B76AC4); /*0x7a1a6a*/
  String::Assign((char **)&v13, v2); /*0x7a1a74*/
  v3 = dword_B77900; /*0x7a1a79*/
  v4 = 0; /*0x7a1a7e*/
  v5 = 0; /*0x7a1a80*/
  if ( (int)dword_B77900 <= 0 ) /*0x7a1a84*/
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
        v4 = (char *)dword_B77908 + v6; /*0x7a1a96*/
      v7 = String::GetOrEmpty_Alt((char **)&v13); /*0x7a1aa1*/
      if ( !_strcmpi(v7, v4 + 36) ) /*0x7a1aa7*/
        break; /*0x7a1aa7*/
      v3 = dword_B77900; /*0x7a1ab3*/
      ++v5; /*0x7a1ab8*/
      v6 += 108; /*0x7a1ab9*/
      if ( v5 >= (int)dword_B77900 ) /*0x7a1abe*/
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
    if ( v5 >= 0 && v5 < (int)dword_B77900 ) /*0x7a1af3*/
      qmemcpy(v14, (char *)dword_B77908 + 108 * v5, sizeof(v14)); /*0x7a1b0d*/
    if ( v14[6] ) /*0x7a1b15*/
    {
      v13 = -1; /*0x7a1b27*/
      (*(void (__stdcall **)(LPVOID, _DWORD, int *))(*(_DWORD *)g_UIPointerTable + 32))(g_UIPointerTable, v14[6], &v13); /*0x7a1b34*/
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
char MatchGameWOL(ObjectClass *this)
{
  int v1; // ebp
  char *v2; // ebx
  char *v3; // eax
  char *v4; // esi
  char *v5; // eax
  char *v6; // eax
  wchar_t *StringCSF; // eax
  char *v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v12; // eax
  char **v13; // eax
  wchar_t *v14; // eax
  HANDLE *v15; // esi
  TechnoTypeClass *v16; // ecx
  int referenceCount; // eax
  int v18; // ebx
  char *v19; // eax
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  char **v25; // [esp-4h] [ebp-230h]
  int v26; // [esp-4h] [ebp-230h]
  ObjectClass *v27; // [esp+0h] [ebp-22Ch]
  _BYTE v28[284]; // [esp+10h] [ebp-21Ch] BYREF
  char Destination[256]; // [esp+12Ch] [ebp-100h] BYREF

  v1 = 0; /*0x7a1bb9*/
  g_NetworkLobbyState = 0; /*0x7a1bbc*/
  Network::Init(); /*0x7a1bc2*/
  strncpy(Destination, stru_B73708.__pad_C, 0x100u); /*0x7a1bd9*/
  strtok(Destination, asc_8318B8); /*0x7a1beb*/
  v2 = strtok(0, Str); /*0x7a1bfb*/
  *(_DWORD *)&v28[12] = v2; /*0x7a1c03*/
  strtok(0, Str); /*0x7a1c07*/
  strtok(0, Str); /*0x7a1c12*/
  strtok(0, Str); /*0x7a1c1d*/
  strtok(0, Str); /*0x7a1c28*/
  strtok(0, Str); /*0x7a1c33*/
  strtok(0, Str); /*0x7a1c41*/
  strtok(0, Str); /*0x7a1c4c*/
  v3 = strtok(0, Str); /*0x7a1c57*/
  v4 = v3; /*0x7a1c61*/
  if ( !v2 || !v3 ) /*0x7a1c6b*/
  {
    StringCSF = GetStringCSF(aWolMatchbadpar, 0, g_Str_File_wonline_cpp, 28847); /*0x7a20c0*/
    goto LABEL_35; /*0x7a20c0*/
  }
  v5 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7a1c76*/
  if ( _strcmpi(v2, v5) ) /*0x7a1c7d*/
  {
    v6 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7a1c8e*/
    if ( _strcmpi(v4, v6) ) /*0x7a1c95*/
    {
      StringCSF = GetStringCSF(aWolMatchbadpar, 0, g_Str_File_wonline_cpp, 28857); /*0x7a1ca6*/
LABEL_35:
      Dialog::ShowMessage(2146559, (size_t)StringCSF); /*0x7a20c5*/
      g_WOL_GameListState = 0; /*0x7a20d0*/
      g_WOL_IdleHandler = 3; /*0x7a20d6*/
      g_WOL_GameProcessState = 20; /*0x7a20e0*/
LABEL_36:
      g_WOL_GameListPool = time(0); /*0x7a20ea*/
      return 0; /*0x7a20f8*/
    }
  }
  v8 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7a1cb0*/
  if ( !_strcmpi(v2, v8) ) /*0x7a1cb7*/
  {
    String::Assign_Alt((String *)&stru_B76AC4, v4); /*0x7a1ccd*/
    MatchGameWOL_Delete(); /*0x7a1cd2*/
    v9 = GetStringCSF(aWolMatchcreati, 0, g_Str_File_wonline_cpp, 28867); /*0x7a1ce8*/
    Dialog::ShowMessage(-1, (size_t)v9); /*0x7a1cf5*/
    byte_B77DEC = 0; /*0x7a1d00*/
    g_WOL_GameListState = 0; /*0x7a1d07*/
    g_WOL_IdleHandler = 6; /*0x7a1d0d*/
    g_WOL_GameProcessState = 30; /*0x7a1d17*/
    g_WOL_GameListPool = time(0); /*0x7a1d25*/
    if ( CreateGameWOL(v27, (int)v4) ) /*0x7a1d2a*/
    {
      v10 = GetStringCSF(aWolMatchwaitin, 0, g_Str_File_wonline_cpp, 28871); /*0x7a1d45*/
      Dialog::ShowMessage(-1, (size_t)v10, v4); /*0x7a1d51*/
      return 1; /*0x7a1d65*/
    }
    v12 = GetStringCSF(aWolMatcherrorc, 0, g_Str_File_wonline_cpp, 28878); /*0x7a1d77*/
    Dialog::ShowMessage(2146559, (size_t)v12); /*0x7a1d82*/
    g_WOL_GameListState = 0; /*0x7a1d87*/
    g_WOL_IdleHandler = 2; /*0x7a1d8d*/
    g_WOL_GameProcessState = 30; /*0x7a1d97*/
    goto LABEL_36; /*0x7a1d9d*/
  }
  String::Assign_Alt((String *)&stru_B76AC4, v2); /*0x7a1da8*/
  MatchGameWOL_Delete(); /*0x7a1dad*/
  v25 = String::Assign((String *)&v28[8], aSGame); /*0x7a1dc4*/
  v13 = String::Assign((String *)&v28[4], v2); /*0x7a1dcb*/
  String::Concat((String *)v13, (char **)v28, v25); /*0x7a1dd2*/
  DeleteAndZero((ObjectClass *)&v28[4]); /*0x7a1ddb*/
  DeleteAndZero((ObjectClass *)&v28[8]); /*0x7a1de4*/
  v14 = GetStringCSF(aWolMatchattemp, 0, g_Str_File_wonline_cpp, 28885); /*0x7a1dfb*/
  Dialog::ShowMessage(-1, (size_t)v14, v2); /*0x7a1e08*/
  g_WOL_GameListState = 0; /*0x7a1e0e*/
  g_WOL_IdleHandler = 7; /*0x7a1e14*/
  g_WOL_GameProcessState = 30; /*0x7a1e1e*/
  g_WOL_GameListPool = time(0); /*0x7a1e30*/
  *(_DWORD *)&v28[4] = 1; /*0x7a1e35*/
  while ( 1 ) /*0x7a1e3d*/
  {
    if ( stru_B76510.StringVector_field_0x10 && !RequestChannelListWOL() ) /*0x7a1e4c*/
      goto LABEL_28; /*0x7a1e4c*/
    v15 = &Handles; /*0x7a1e52*/
    do /*0x7a1e69*/
      ResetEvent(*v15++); /*0x7a1e5a*/
    while ( (int)v15 < (int)g_WOL_RequestObject ); /*0x7a1e69*/
    *(_DWORD *)&v28[8] = 41; /*0x7a1e73*/
    Debug::Log(); /*0x7a1e7b*/
    if ( (*(int (__stdcall **)(LPVOID, _DWORD, _DWORD))(*(_DWORD *)ppv + 24))(ppv, *(_DWORD *)&v28[8], 0) ) /*0x7a1e91*/
    {
      SetEvent(Handles); /*0x7a1f54*/
LABEL_28:
      v21 = GetStringCSF(aWolMatchgamech, 0, g_Str_File_wonline_cpp, 28889); /*0x7a1f5a*/
      Dialog::ShowMessage(2146559, (size_t)v21, v2); /*0x7a1f77*/
      g_WOL_GameListState = 0; /*0x7a1f7c*/
      g_WOL_IdleHandler = 3; /*0x7a1f82*/
      g_WOL_GameProcessState = 20; /*0x7a1f8c*/
LABEL_29:
      g_WOL_GameListPool = time(0); /*0x7a1f96*/
      DeleteAndZero((ObjectClass *)v28); /*0x7a1fa8*/
      return 0; /*0x7a1fb9*/
    }
    Network_Helper_7ADB00( /*0x7a1eac*/
      (ObjectClass *)&stru_B76510.StringVector_field_0x10,
      &v28[8],
      stru_B76510.StringVector_field_0x10);
    if ( !RequestChannelListWOL() ) /*0x7a1eb8*/
      goto LABEL_28; /*0x7a1eb8*/
    memset(&v28[16], 0, 0x10Cu); /*0x7a1ec9*/
    v16 = 0; /*0x7a1ec9*/
    referenceCount = stru_B76AC4.?; /*0x7a1ecb*/
    if ( stru_B76AC4.? > 0 ) /*0x7a1ed2*/
      break; /*0x7a1ed2*/
LABEL_25:
    Game::ProcessIdle(v16); /*0x7a1f27*/
    Sleep(0x64u); /*0x7a1f2e*/
    if ( (*(_DWORD *)&v28[4])++ >= 30 ) /*0x7a1f3b*/
    {
      v24 = GetStringCSF(aWolMatchgamech, 0, g_Str_File_wonline_cpp, 28915); /*0x7a2080*/
      Dialog::ShowMessage(2146559, (size_t)v24, v2); /*0x7a208b*/
      g_WOL_GameListState = 0; /*0x7a2090*/
      g_WOL_IdleHandler = 2; /*0x7a2096*/
      g_WOL_GameProcessState = 30; /*0x7a20a0*/
      goto LABEL_29; /*0x7a20aa*/
    }
  }
  v18 = 0; /*0x7a1ed4*/
  while ( 1 ) /*0x7a1ed6*/
  {
    if ( v18 >= 0 && v1 < referenceCount ) /*0x7a1edc*/
      qmemcpy(&v28[16], (const void *)(v18 + stru_B76AC4.occupant), 0x10Cu); /*0x7a1ef0*/
    v19 = String::GetOrEmpty((String *)v28); /*0x7a1ef6*/
    if ( !_strcmpi(&v28[68], v19) ) /*0x7a1f01*/
      break; /*0x7a1f01*/
    referenceCount = stru_B76AC4.?; /*0x7a1f11*/
    ++v1; /*0x7a1f16*/
    v18 += 268; /*0x7a1f17*/
    if ( v1 >= stru_B76AC4.? ) /*0x7a1f1f*/
    {
      v2 = *(char **)&v28[12]; /*0x7a1f21*/
      v1 = 0; /*0x7a1f25*/
      goto LABEL_25; /*0x7a1f25*/
    }
  }
  if ( ValidateJoinWOL(v27, (int)&v28[16], v18, v1) ) /*0x7a1fc0*/
  {
    v26 = *(_DWORD *)&v28[12]; /*0x7a1fcf*/
    v22 = GetStringCSF(aWolMatchjoined, 0, g_Str_File_wonline_cpp, 28899); /*0x7a1fdf*/
    Dialog::ShowMessage(-1, (size_t)v22, v26); /*0x7a1fec*/
    g_WOL_GameListState = 0; /*0x7a1ff3*/
    g_WOL_IdleHandler = 9; /*0x7a1ffd*/
    g_WOL_GameProcessState = 90; /*0x7a2007*/
    g_WOL_GameListPool = time(0); /*0x7a201d*/
    DeleteAndZero((ObjectClass *)v28); /*0x7a2022*/
    return 1; /*0x7a2027*/
  }
  else
  {
    v23 = GetStringCSF(aWolMatcherrorj, 0, g_Str_File_wonline_cpp, 28907); /*0x7a2045*/
    Dialog::ShowMessage(2146559, (size_t)v23); /*0x7a2050*/
    DeleteAndZero((ObjectClass *)v28); /*0x7a205c*/
    return 0; /*0x7a2061*/
  }
}



// ==== 0x007A2110  sub_7A2110  this=-  sig=csp ====
int __stdcall sub_7A2110(HWND hWnd, UINT a2, WPARAM a3, char *a4)
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
            (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 44))(ppv, aStart443900100_0); /*0x7a21fc*/
            return 0; /*0x7a2201*/
          case 0x709u: /*0x7a21ce*/
            (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 44))(ppv, aStart443900100); /*0x7a21e7*/
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



// ==== 0x007A2230  Game_Setup  this=Coord  sig=csp ====
void __fastcall sub_7A2230(void *a1, char *Buffer, char *Buffera, char *a4)
{
  const char *v5; // edi
  const char *v6; // esi
  int v7; // edi
  char **v8; // esi
  char *v9; // eax
  int v10; // eax
  int v11; // [esp+10h] [ebp-10h] BYREF
  int v12; // [esp+14h] [ebp-Ch] BYREF
  char *v13; // [esp+18h] [ebp-8h] BYREF
  __int16 v14; // [esp+1Ch] [ebp-4h]

  if ( a1 ) /*0x7a223d*/
  {
    if ( Buffer ) /*0x7a2245*/
    {
      v5 = Buffera; /*0x7a224b*/
      if ( Buffera ) /*0x7a2251*/
      {
        v6 = a4; /*0x7a2257*/
        if ( a4 ) /*0x7a225d*/
        {
          Buffera = 0; /*0x7a2267*/
          a4 = 0; /*0x7a2272*/
          v11 = 0; /*0x7a2276*/
          sscanf(Buffer, "%X", &Buffera); /*0x7a227a*/
          sscanf(v5, "%X", &a4); /*0x7a228a*/
          sscanf(v6, "%X", &v11); /*0x7a229a*/
          v7 = 0; /*0x7a22a2*/
          v8 = (char **)&dword_A8DA90; /*0x7a22a4*/
          while ( 1 ) /*0x7a22ab*/
          {
            v9 = ToWideStringChar(*v8); /*0x7a22ab*/
            if ( !_strcmpi(a1, v9) ) /*0x7a22b2*/
              break; /*0x7a22b2*/
            ++v8; /*0x7a22be*/
            ++v7; /*0x7a22c1*/
            if ( (int)v8 >= (int)&dword_A8DAB0 ) /*0x7a22c8*/
              return; /*0x7a22c8*/
          }
          v13 = Buffera; /*0x7a22de*/
          v14 = 0; /*0x7a22e2*/
          v12 = 0; /*0x7a22fc*/
          NetworkID::Assign((_DWORD *)(12 * v7 + 11066316), &v12, (int)&v13, 0); /*0x7a2300*/
          v10 = v11; /*0x7a2309*/
          dword_A8DC2C[v7] = (int)a4; /*0x7a230d*/
          dword_A8E230[v7] = v10; /*0x7a2314*/
        }
      }
    }
  }
}



// ==== 0x007A2330  Game::SetupWOLTournament  this=ObjectClass  sig=csp ====
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
  v1 = strtok(String, asc_84D68C); /*0x7a2373*/
  v2 = strtok(0, Str); /*0x7a2375*/
  v3 = atol(v2); /*0x7a2387*/
  v4 = strtok(0, Str); /*0x7a2389*/
  v5 = atol(v4); /*0x7a239b*/
  v6 = strtok(0, Str); /*0x7a23a9*/
  v24 = strtok(0, Str); /*0x7a23b7*/
  v7 = strtok(0, Str); /*0x7a23bb*/
  Game_Setup(v1, v6, v24, v7); /*0x7a23cd*/
  String::Assign(&v24, v1); /*0x7a23d7*/
  SetupLobbyPlayerSlot((const char **)&v24, v3, v5, -2, -2); /*0x7a23e7*/
  DeleteAndZero((void **)&v24); /*0x7a23f0*/
  v8 = strtok(0, Str); /*0x7a2408*/
  v9 = strtok(0, Str); /*0x7a240a*/
  v10 = atol(v9); /*0x7a241c*/
  v11 = strtok(0, Str); /*0x7a241e*/
  v12 = atol(v11); /*0x7a2429*/
  v13 = strtok(0, Str); /*0x7a243e*/
  v24 = strtok(0, Str); /*0x7a244c*/
  v14 = strtok(0, Str); /*0x7a2450*/
  Game_Setup(v8, v13, v24, v14); /*0x7a2462*/
  String::Assign(&v24, v8); /*0x7a246c*/
  SetupLobbyPlayerSlot((const char **)&v24, v10, v12, -2, -2); /*0x7a247c*/
  DeleteAndZero((void **)&v24); /*0x7a2485*/
  dword_ABE028 = 4; /*0x7a2494*/
  strcpy(&byte_A8B8E0, aRandmapSed); /*0x7a24b0*/
  MEMORY[0xA8B254] = -1; /*0x7a24be*/
  v15 = (HWND)Dialog::FindByHandle((void *)0x11F); /*0x7a24c8*/
  GenerateRandomMapAndMinimap(v15, (char (*)())GameLoop::Thunk); /*0x7a24d4*/
  MapSeed::ValidateName(aRandmapSed); /*0x7a24e3*/
  v16 = 0; /*0x7a24ed*/
  v17 = 0; /*0x7a24ef*/
  if ( dword_A8B8D8 > 0 ) /*0x7a24f3*/
  {
    while ( !IsRandMap::Sed(*(_DWORD *)(dword_A8B8CC + 4 * v17)) ) /*0x7a2504*/
    {
      if ( ++v17 >= dword_A8B8D8 ) /*0x7a250e*/
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
    GameOption::SetDescriptionWStr(*(wchar_t **)(dword_A8B8CC + 4 * v17), &unk_ABE050); /*0x7a25c8*/
  }
  else
  {
    v20 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x7a2528*/
    if ( v20 ) /*0x7a2532*/
      v21 = SessionClass::ParseGameInfo(v20, aRandmapSed, &unk_ABE050, v19, 1, 0, 2, 4); /*0x7a254e*/
    else
      v21 = 0; /*0x7a2552*/
    if ( dword_A8B8D8 < dword_A8B8D0 /*0x7a258b*/
      || (byte_A8B8D5 || !dword_A8B8D0)
      && dword_A8B8DC > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8B8C8 + 8))(
           &dword_A8B8C8,
           dword_A8B8DC + dword_A8B8D0,
           0) )
    {
      v22 = dword_A8B8D8++; /*0x7a2598*/
      *(_DWORD *)(dword_A8B8CC + 4 * v22) = v21; /*0x7a25a7*/
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
      v6 = g_UIControlState; /*0x7a26bf*/
      if ( g_UIControlState ) /*0x7a26c7*/
      {
        ComPtr::Dtor(g_UIControlState); /*0x7a26cb*/
        __3_YAXPAX_Z(v6); /*0x7a26d1*/
        g_UIControlState = 0; /*0x7a26d9*/
        return 0; /*0x7a26e9*/
      }
      return 0; /*0x7a26c7*/
    }
    if ( a2 != 15 ) /*0x7a2642*/
      return a2 == 20; /*0x7a2647*/
    Dialog::DrawBackground(hWnd); /*0x7a265b*/
    Dialog::StopBink(hWnd); /*0x7a2662*/
    v5 = g_UIControlState; /*0x7a2667*/
    if ( g_UIControlState || MEMORY[0xA8B254] == -1 && (v5 = dword_ABE154) != 0 ) /*0x7a2682*/
      Skirmish::RenderPreview(v5, hWnd); /*0x7a2685*/
    if ( LoadScreen::IsActive(dword_AC4F58) ) /*0x7a268f*/
      LoadScreen::Render((int)dword_AC4F58, a3, (int)a4, NAN); /*0x7a26a5*/
    ValidateRect(hWnd, 0); /*0x7a26ad*/
    return 1; /*0x7a26b6*/
  }
  return result; /*0x7a264d*/
}



// ==== 0x007A2730  ObjectClass::Network_Create_7A2730  this=ObjectClass  sig=csp ====
int Network_Create_7A2730(ObjectClass *this)
{
  int result; // eax

  result = (int)ppv; /*0x7a2730*/
  if ( ppv ) /*0x7a2737*/
    return (*(int (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 60))(ppv, aG); /*0x7a2741*/
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
    StringCSF = GetStringCSF(aGuiHostgamesta_0, 0, g_Str_File_wonline_cpp, 29202); /*0x7a27ae*/
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
int __thiscall sub_7A2830(ObjectClass *this)
{
  int result; // eax
  int v2; // ebp
  int v3; // ebx
  char *v4; // eax
  _DWORD v6[27]; // [esp+14h] [ebp-6Ch] BYREF

  result = g_WOL_UserList.owningHouseIndex; /*0x7a2833*/
  v2 = 0; /*0x7a283a*/
  v3 = 0; /*0x7a283c*/
  v6[0] = 0; /*0x7a2846*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a284a*/
  {
    while ( 1 ) /*0x7a284c*/
    {
      if ( v2 >= 0 && v3 < result ) /*0x7a2852*/
        qmemcpy(v6, (char *)g_WOL_UserList.nextObject + v2, sizeof(v6)); /*0x7a2865*/
      v4 = String::GetOrEmpty_Alt((String *)this); /*0x7a2870*/
      if ( !_strcmpi(v4, (char *)&v6[9]) ) /*0x7a2876*/
        break; /*0x7a2876*/
      result = g_WOL_UserList.owningHouseIndex; /*0x7a2882*/
      ++v3; /*0x7a2887*/
      v2 += 108; /*0x7a2888*/
      if ( v3 >= g_WOL_UserList.owningHouseIndex ) /*0x7a288d*/
        return result; /*0x7a288d*/
    }
    return (*(int (__stdcall **)(LPVOID, _DWORD *))(*(_DWORD *)ppv + 84))(ppv, v6); /*0x7a28a4*/
  }
  return result; /*0x7a288f*/
}



// ==== 0x007A28B0  ObjectClass::PlayerSkirmishSlotHandler_Handle_7A28B0  this=ObjectClass  sig=csp ====
void __thiscall PlayerSkirmishSlotHandler_Handle_7A28B0(ObjectClass *this)
{
  int v1; // ebp
  signed int v2; // eax
  signed int v3; // ebx
  char *v4; // eax
  const wchar_t *v5; // [esp+4h] [ebp-74h] BYREF
  char *v6; // [esp+8h] [ebp-70h] BYREF
  _DWORD v7[27]; // [esp+Ch] [ebp-6Ch] BYREF

  v1 = 0; /*0x7a28b4*/
  if ( this ) /*0x7a28b8*/
  {
    WideString::Assign((WideString *)&v5, (wchar_t *)this); /*0x7a28c6*/
    ToWideStringCharAlt(&v6, &v5); /*0x7a28d3*/
    DeleteAndZero::Alt((DeleteAndZero *)&v5); /*0x7a28dc*/
    v2 = dword_B77900; /*0x7a28e1*/
    v3 = 0; /*0x7a28e6*/
    v7[0] = 0; /*0x7a28ea*/
    if ( (int)dword_B77900 > 0 ) /*0x7a28ee*/
    {
      while ( 1 ) /*0x7a28f0*/
      {
        if ( v1 >= 0 && v3 < v2 ) /*0x7a28f6*/
          qmemcpy(v7, (char *)dword_B77908 + v1, sizeof(v7)); /*0x7a2909*/
        v4 = String::GetOrEmpty_Alt((String *)&v6); /*0x7a2914*/
        if ( !_strcmpi(v4, (char *)&v7[9]) ) /*0x7a291a*/
          break; /*0x7a291a*/
        v2 = dword_B77900; /*0x7a2926*/
        ++v3; /*0x7a292b*/
        v1 += 108; /*0x7a292c*/
        if ( v3 >= (int)dword_B77900 ) /*0x7a2931*/
          goto LABEL_10; /*0x7a2931*/
      }
      (*(void (__stdcall **)(LPVOID, _DWORD *))(*(_DWORD *)ppv + 84))(ppv, v7); /*0x7a2951*/
    }
LABEL_10:
    DeleteAndZero((ObjectClass *)&v6); /*0x7a2954*/
  }
}



// ==== 0x007A2970  RunWOLMainLoop_Read_7A2970  this=-  sig=ida-proto ====
void sub_7A2970()
{
  _DWORD v0[3]; // [esp+0h] [ebp-Ch] BYREF

  byte_B77DC1 = 0; /*0x7a297a*/
  if ( !byte_B77DC2 && ReadWOLLobbyHouseOption() ) /*0x7a2983*/
  {
    if ( MapSeed::CheckName((const char **)&stru_B76AC4) ) /*0x7a2991*/
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
int __stdcall BuddyDlgProcWOL(HWND hWnd, unsigned int a2, int a3, int a4)
{
  int result; // eax
  wchar_t *StringCSF; // eax
  HWND DlgItem; // eax
  UINT v7; // eax
  UINT v8; // eax
  char *v9; // eax
  int v10; // eax
  int v11; // esi
  String *v12; // ecx
  int v13; // eax
  int v14; // esi
  String *v15; // ecx
  int v16; // eax
  int v17; // esi
  String *v18; // ecx
  DeleteAndZero v19; // [esp-4h] [ebp-1F4h]
  char *v20; // [esp-4h] [ebp-1F4h]
  ObjectClass *v21; // [esp+0h] [ebp-1F0h]
  _BYTE v22[224]; // [esp+10h] [ebp-1E0h] BYREF
  wchar_t lParam[128]; // [esp+F0h] [ebp-100h] BYREF

  if ( a2 == 272 && a4 ) /*0x7a2a09*/
    SetWindowLongA(hWnd, 8, *(_DWORD *)(a4 + 4)); /*0x7a2a12*/
  *(_DWORD *)v19.__pad_0 = a4; /*0x7a2a1f*/
  result = BaseDialogProc(hWnd, a2, a3, v19); /*0x7a2a25*/
  if ( !result ) /*0x7a2a2c*/
  {
    *(_DWORD *)&v22[4] = GetWindowLongA(hWnd, 8); /*0x7a2a3e*/
    if ( a2 <= 0x2B ) /*0x7a2a42*/
    {
      switch ( a2 ) /*0x7a2a44*/
      {
        case 0x2Bu: /*0x7a2a44*/
          Dialog::Resize((char *)a4); /*0x7a2a91*/
          return 1; /*0x7a2aa5*/
        case 0xFu: /*0x7a2a44*/
          Dialog::DrawBackground((Dialog *)hWnd); /*0x7a2a68*/
          Dialog::StopBink((Dialog *)hWnd); /*0x7a2a6f*/
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
        v20 = String::GetOrEmpty((String *)&stru_B76AC4); /*0x7a2ac6*/
        StringCSF = GetStringCSF(aWolAddbuddyque, 0, g_Str_File_wonline_cpp, 29291); /*0x7a2ad8*/
        swprintf(lParam, (const size_t)StringCSF, (const wchar_t *const)v20); /*0x7a2ae6*/
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
        v7 = IsDlgButtonChecked(hWnd, 1785); /*0x7a2b35*/
        ReadWOLLobbyOption(v7 != 1); /*0x7a2b46*/
        (*(void (__thiscall **)(_DWORD, HWND, int))(**(_DWORD **)&v22[4] + 4))(*(_DWORD *)&v22[4], hWnd, 2); /*0x7a2b54*/
        return 0; /*0x7a2b63*/
      }
      return 0; /*0x7a2b29*/
    }
    v8 = IsDlgButtonChecked(hWnd, 1785); /*0x7a2b6c*/
    ReadWOLLobbyOption(v8 != 1); /*0x7a2b7d*/
    if ( !(unsigned __int8)MapSeed::CheckName((MapSeed *)&stru_B76AC4) ) /*0x7a2b8e*/
    {
LABEL_53:
      (*(void (__thiscall **)(_DWORD, HWND, int))(**(_DWORD **)&v22[4] + 4))(*(_DWORD *)&v22[4], hWnd, 1); /*0x7a2e54*/
      return 0; /*0x7a2e60*/
    }
    memset(&v22[8], 0, 0x6Cu); /*0x7a2ba1*/
    v9 = String::GetOrEmpty_Alt((String *)&stru_B76AC4); /*0x7a2ba8*/
    strncpy(&v22[44], v9, 9u); /*0x7a2bb3*/
    (*(void (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)ppv + 224))(ppv, &v22[8]); /*0x7a2bc8*/
    if ( !(unsigned __int8)MapSeed::CheckName((MapSeed *)&stru_B76AC4) ) /*0x7a2bda*/
    {
LABEL_52:
      SendGameListWOL(v21); /*0x7a2e4f*/
      goto LABEL_53; /*0x7a2e4f*/
    }
    String::AssignFromPtr((String *)v22, (const char **)&stru_B76AC4); /*0x7a2be9*/
    v10 = *(_DWORD *)g_WindowManager.__pad_0; /*0x7a2bee*/
    v11 = *(_DWORD *)g_WindowManager.__pad_0; /*0x7a2bf3*/
    if ( *(int *)g_WindowManager.__pad_0 >= (int)g_WindowManager.Array_field_0x4 ) /*0x7a2bff*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x7a2c06*/
      v10 = *(_DWORD *)g_WindowManager.__pad_0; /*0x7a2c0b*/
    }
    if ( v10 >= (int)g_WindowManager.Array_field_0x4 ) /*0x7a2c16*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x7a2c1d*/
      v10 = *(_DWORD *)g_WindowManager.__pad_0; /*0x7a2c22*/
    }
    if ( v11 < v10 ) /*0x7a2c29*/
    {
      memcpy( /*0x7a2c46*/
        (void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v11 + 4),
        (const void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v11),
        4 * (v10 + 0x3FFFFFFF * v11));
      v10 = *(_DWORD *)g_WindowManager.__pad_0; /*0x7a2c4b*/
    }
    v12 = (String *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v11); /*0x7a2c59*/
    if ( v12 ) /*0x7a2c5e*/
    {
      String::AssignFromPtr(v12, (const char **)v22); /*0x7a2c65*/
      v10 = *(_DWORD *)g_WindowManager.__pad_0; /*0x7a2c6a*/
    }
    *(_DWORD *)g_WindowManager.__pad_0 = v10 + 1; /*0x7a2c70*/
    v13 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x7a2c75*/
    v14 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x7a2c7a*/
    if ( *(int *)&stru_B76900.needsRedraw >= *(int *)&stru_B76900.hasParachute ) /*0x7a2c86*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x7a2c8d*/
      v13 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x7a2c92*/
    }
    if ( v13 >= *(int *)&stru_B76900.hasParachute ) /*0x7a2c9d*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x7a2ca4*/
      v13 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x7a2ca9*/
    }
    if ( v14 < v13 ) /*0x7a2cb0*/
    {
      memcpy( /*0x7a2ccd*/
        &stru_B76900.parachute->AnimClass_field_0x4 + v14,
        &stru_B76900.parachute->AnimClass_field_0x0 + v14,
        4 * (v13 + 0x3FFFFFFF * v14));
      v13 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x7a2cd2*/
    }
    v15 = (String *)(&stru_B76900.parachute->AnimClass_field_0x0 + v14); /*0x7a2ce0*/
    if ( v15 ) /*0x7a2ce5*/
    {
      String::AssignFromPtr(v15, (const char **)v22); /*0x7a2cec*/
      v13 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x7a2cf1*/
    }
    *(_DWORD *)&stru_B76900.needsRedraw = v13 + 1; /*0x7a2cf7*/
    v16 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7a2cfc*/
    v17 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7a2d01*/
    if ( *(int *)g_WOL_BuddyList.__pad_0 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x7a2d0d*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7a2d14*/
      v16 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7a2d19*/
    }
    if ( v16 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x7a2d24*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7a2d2b*/
      v16 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7a2d30*/
    }
    if ( v17 < v16 ) /*0x7a2d37*/
    {
      memcpy( /*0x7a2d54*/
        (void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v17 + 4),
        (const void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v17),
        4 * (v16 + 0x3FFFFFFF * v17));
      v16 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7a2d59*/
    }
    v18 = (String *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v17); /*0x7a2d67*/
    if ( v18 ) /*0x7a2d6c*/
    {
      String::AssignFromPtr(v18, (const char **)v22); /*0x7a2d73*/
      v16 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7a2d78*/
    }
    *(_DWORD *)g_WOL_BuddyList.__pad_0 = v16 + 1; /*0x7a2d83*/
    if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x7a2d88*/
    {
      if ( (unsigned int)(time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20) < 5 ) /*0x7a2da6*/
      {
LABEL_51:
        DeleteAndZero((ObjectClass *)v22); /*0x7a2e46*/
        goto LABEL_52; /*0x7a2e4a*/
      }
      DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x7a2db1*/
    }
    if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x7a2dbd*/
    {
      if ( (unsigned __int8)DynamicStringArray::Get( /*0x7a2dcf*/
                              (DynamicStringArray *)&stru_B76900.needsRedraw,
                              (char **)&g_WindowManager.__pad_14[16],
                              0) )
        DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x7a2ddf*/
      *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x7a2deb*/
      memset(&v22[116], 0, 0x6Cu); /*0x7a2dfe*/
      strcpy(&v22[152], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x7a2e31*/
      (*(void (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)ppv + 96))(ppv, &v22[116]); /*0x7a2e43*/
    }
    goto LABEL_51; /*0x7a2e43*/
  }
  return result; /*0x7a2a54*/
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
int __stdcall sub_7A2F30(int a1, int a2, int a3)
{
  int v4; // edi

  if ( !a1 ) /*0x7a2f3a*/
    return -2147024809; /*0x7a2f3d*/
  *(_DWORD *)(a1 + 16) = a2; /*0x7a2f4d*/
  *(_DWORD *)(a1 + 8) = a3; /*0x7a2f5c*/
  *(_DWORD *)(a1 + 12) = a3; /*0x7a2f5f*/
  *(_DWORD *)(a1 + 4) = a3; /*0x7a2f62*/
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
char *__thiscall sub_7A2FC0(char *this)
{
  this->__pad_004 = 0; /*0x7a2fc6*/
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 8)); /*0x7a2fce*/
  *(_DWORD *)this = &CNetUtilEventSink::`vftable'; /*0x7a2fd4*/
  return this; /*0x7a2fdc*/
}



// ==== 0x007A2FE0  CNetUtilEventSink::SetSize  this=CNetUtilEventSink  sig=csp ====
int __thiscall ComStreamClass::SetSize(CNetUtilEventSink *this, int a2, void *a3, int a4)
{
  ComStreamClass *v4; // esi
  rc_ptr v6[4]; // [esp+0h] [ebp-8h] BYREF
  ComStreamClass *v7; // [esp+4h] [ebp-4h]
  int v8; // [esp+18h] [ebp+10h]

  if ( (int)a3 < 0 || v8 <= 0 ) /*0x7a2ff5*/
  {
    SetEvent(hEvent); /*0x7a30b9*/
    return 0; /*0x7a30bf*/
  }
  else
  {
    Audio_Set(v6, (void *)a4); /*0x7a3003*/
    if ( v7 && ComStreamClass::initStream(v7) ) /*0x7a3010*/
    {
      if ( ComStreamClass::closeStream(v7) ) /*0x7a301d*/
      {
        Debug::Log(); /*0x7a302b*/
        ComStreamClass::getStreamSize((ComStreamClass *)v6); /*0x7a3037*/
        SetEvent(dword_B736B0); /*0x7a3042*/
      }
      else
      {
        Debug::Log(); /*0x7a304a*/
        v4 = v7; /*0x7a304f*/
        dword_B7646C = v4->ComStreamClass_field_0x28 + time(0); /*0x7a3066*/
        ComStreamClass::seekToPosition((ComStreamClass *)v6); /*0x7a306b*/
        SetEvent(dword_B736B0); /*0x7a3077*/
      }
    }
    else
    {
      Debug::Log(); /*0x7a3085*/
      SetEvent(dword_B736B0); /*0x7a3094*/
    }
    *(_DWORD *)v6 = &rc_ptr<WDTState>::`vftable'; /*0x7a309e*/
    ComPtr::Release((ComPtr *)v6); /*0x7a30a6*/
    return 0; /*0x7a30ab*/
  }
}



// ==== 0x007A30D0  CNetUtilEventSink::Read  this=CNetUtilEventSink  sig=csp ====
int __stdcall C07F766C::_vt05(int a1, int a2)
{
  Debug::Log(); /*0x7a30db*/
  if ( !a2 ) /*0x7a30e6*/
    Audio_Read_6C6D00(); /*0x7a30e8*/
  Audio_Read_6C6DE0(); /*0x7a30ed*/
  return 0; /*0x7a30f4*/
}



// ==== 0x007A3100  CNetUtilEventSink::PopulateLobbyLists  this=CNetUtilEventSink  sig=csp ====
int __thiscall WOLGameList::PopulateLobbyLists(CNetUtilEventSink *this, int a2, int ***a3, int a4, int a5, int a6)
{
  int v6; // ebx
  HWND v8; // eax
  HWND DlgItem; // eax
  void (__stdcall *v10)(HWND, UINT, WPARAM, LPARAM); // edi
  HWND v11; // ebp
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  ObjectClass *v15; // esi
  ObjectClass *v16; // edi
  int v17; // eax
  wchar_t *StringCSF; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  ObjectClass *v21; // esi
  ObjectClass *v22; // edi
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  ObjectClass *v26; // esi
  ObjectClass *v27; // edi
  int v28; // eax
  int v29; // esi
  String *v30; // eax
  String *v31; // ebp
  int v32; // edx
  int v33; // eax
  WOLGameList *v34; // ecx
  String *v35; // eax
  String *v36; // ebp
  int v37; // edx
  int v38; // eax
  String *v39; // eax
  String *v40; // ebp
  int v41; // edx
  int v42; // eax
  int v43; // ebp
  int v44; // ebx
  signed int v45; // eax
  char v46; // dl
  _DWORD *v47; // esi
  HWND v48; // eax
  ObjectClass *v49; // eax
  ObjectClass *v50; // [esp+0h] [ebp-2B2Ch]
  WideString v51[216]; // [esp+10h] [ebp-2B1Ch] BYREF
  wchar_t Buffer[128]; // [esp+E8h] [ebp-2A44h] BYREF
  char v53[108]; // [esp+1E8h] [ebp-2944h] BYREF
  char v54[108]; // [esp+254h] [ebp-28D8h] BYREF
  char v55[108]; // [esp+2C0h] [ebp-286Ch] BYREF
  wchar_t String[5120]; // [esp+32Ch] [ebp-2800h] BYREF
  int v57; // [esp+2B44h] [ebp+18h]

  if ( a3 ) /*0x7a3117*/
  {
    v6 = 0; /*0x7a3119*/
    a4 = 0; /*0x7a311b*/
  }
  else
  {
    v6 = a4; /*0x7a3124*/
  }
  if ( byte_B77DC1 ) /*0x7a3132*/
  {
    byte_884CF4 = 1; /*0x7a3137*/
    return 0; /*0x7a3147*/
  }
  v8 = (HWND)Dialog::FindByHandle((Dialog *)0xC1); /*0x7a3154*/
  DlgItem = GetDlgItem(v8, 1407); /*0x7a315a*/
  v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a3160*/
  v11 = DlgItem; /*0x7a3166*/
  *(_DWORD *)&v51[20] = DlgItem; /*0x7a316a*/
  if ( DlgItem ) /*0x7a316e*/
  {
    if ( v57 != -1 || a3 ) /*0x7a3180*/
    {
      SendMessageA(DlgItem, 0x184u, 0, 0); /*0x7a3271*/
      if ( !v6 ) /*0x7a3275*/
      {
        StringCSF = GetStringCSF(aTxtNotInLadder, 0, g_Str_File_wonline_cpp, 4785); /*0x7a328c*/
        SendMessageA(v11, 0x4CCu, 0xFFFFFFFF, (LPARAM)StringCSF); /*0x7a329a*/
        InvalidateRect(v11, 0, 0); /*0x7a329f*/
        return 0; /*0x7a32b1*/
      }
      goto LABEL_11; /*0x7a3275*/
    }
    v11 = 0; /*0x7a3186*/
    *(_DWORD *)&v51[20] = 0; /*0x7a3188*/
  }
  if ( v6 ) /*0x7a318e*/
  {
LABEL_11:
    v12 = *(_DWORD *)(v6 + 28); /*0x7a3194*/
    *(_DWORD *)&v51[8] = v6; /*0x7a319b*/
    *(_DWORD *)&v51[56] = v12; /*0x7a319f*/
    Gadget::InitProperties((Gadget *)&v51[32]); /*0x7a31a3*/
    if ( *(int ***)v6 == &off_802100 ) /*0x7a31af*/
    {
      if ( (unsigned int)dword_B768C4 > 0x7D0 ) /*0x7a31bf*/
      {
        v13 = dword_B768C8; /*0x7a31c5*/
        v14 = 0; /*0x7a31cb*/
        *(_DWORD *)&v51[4] = 0; /*0x7a31cf*/
        if ( dword_B768C8 ) /*0x7a31d3*/
        {
          do /*0x7a321d*/
          {
            v15 = *(ObjectClass **)(*(_DWORD *)g_WOL_ListParser.__pad_0 + 4 * v14); /*0x7a31db*/
            while ( v15 ) /*0x7a31e0*/
            {
              v16 = v15; /*0x7a31e2*/
              v15 = (ObjectClass *)v15->estimatedHealth; /*0x7a31e4*/
              DeleteAndZero(v16); /*0x7a31ed*/
              __3_YAXPAX_Z(v16); /*0x7a31f3*/
            }
            v17 = *(_DWORD *)&v51[4]; /*0x7a31ff*/
            *(_DWORD *)(*(_DWORD *)g_WOL_ListParser.__pad_0 + 4 * *(_DWORD *)&v51[4]) = 0; /*0x7a3209*/
            v13 = dword_B768C8; /*0x7a3210*/
            v14 = v17 + 1; /*0x7a3216*/
            *(_DWORD *)&v51[4] = v14; /*0x7a3219*/
          }
          while ( v14 < dword_B768C8 ); /*0x7a321d*/
          v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a321f*/
        }
        dword_B768C4 = 0; /*0x7a322a*/
        if ( v13 > dword_B768F0 ) /*0x7a3236*/
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
    else if ( *(_DWORD *)v6 == 8960 ) /*0x7a32b9*/
    {
      if ( (unsigned int)dword_B73AFC > 0x7D0 ) /*0x7a32c9*/
      {
        v19 = dword_B73B00; /*0x7a32cf*/
        v20 = 0; /*0x7a32d5*/
        *(_DWORD *)&v51[4] = 0; /*0x7a32d9*/
        if ( dword_B73B00 ) /*0x7a32dd*/
        {
          do /*0x7a3327*/
          {
            v21 = (ObjectClass *)*((_DWORD *)dword_B73AF8 + v20); /*0x7a32e5*/
            while ( v21 ) /*0x7a32ea*/
            {
              v22 = v21; /*0x7a32ec*/
              v21 = (ObjectClass *)v21->estimatedHealth; /*0x7a32ee*/
              DeleteAndZero(v22); /*0x7a32f7*/
              __3_YAXPAX_Z(v22); /*0x7a32fd*/
            }
            v23 = *(_DWORD *)&v51[4]; /*0x7a3309*/
            *((_DWORD *)dword_B73AF8 + *(_DWORD *)&v51[4]) = 0; /*0x7a3313*/
            v19 = dword_B73B00; /*0x7a331a*/
            v20 = v23 + 1; /*0x7a3320*/
            *(_DWORD *)&v51[4] = v20; /*0x7a3323*/
          }
          while ( v20 < dword_B73B00 ); /*0x7a3327*/
          v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a3329*/
        }
        dword_B73AFC = 0; /*0x7a3334*/
        if ( v19 > dword_B73B28 ) /*0x7a3340*/
        {
          do /*0x7a336a*/
          {
            if ( byte_B73B0C ) /*0x7a334d*/
              break; /*0x7a334d*/
            HashMap::Shrink2((HashMap *)&dword_B73AF8); /*0x7a3358*/
          }
          while ( dword_B73B00 > (unsigned int)dword_B73B28 ); /*0x7a336a*/
        }
      }
    }
    else if ( (unsigned int)dword_B77D84 > 0x7D0 ) /*0x7a337b*/
    {
      v24 = dword_B77D88; /*0x7a3381*/
      v25 = 0; /*0x7a3387*/
      *(_DWORD *)&v51[4] = 0; /*0x7a338b*/
      if ( dword_B77D88 ) /*0x7a338f*/
      {
        do /*0x7a33d9*/
        {
          v26 = *(ObjectClass **)(*(_DWORD *)stru_B77D80.__pad_0 + 4 * v25); /*0x7a3397*/
          while ( v26 ) /*0x7a339c*/
          {
            v27 = v26; /*0x7a339e*/
            v26 = (ObjectClass *)v26->estimatedHealth; /*0x7a33a0*/
            DeleteAndZero(v27); /*0x7a33a9*/
            __3_YAXPAX_Z(v27); /*0x7a33af*/
          }
          v28 = *(_DWORD *)&v51[4]; /*0x7a33bb*/
          *(_DWORD *)(*(_DWORD *)stru_B77D80.__pad_0 + 4 * *(_DWORD *)&v51[4]) = 0; /*0x7a33c5*/
          v24 = dword_B77D88; /*0x7a33cc*/
          v25 = v28 + 1; /*0x7a33d2*/
          *(_DWORD *)&v51[4] = v25; /*0x7a33d5*/
        }
        while ( v25 < dword_B77D88 ); /*0x7a33d9*/
        v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a33db*/
      }
      dword_B77D84 = 0; /*0x7a33e6*/
      if ( v24 > dword_B77DB0 ) /*0x7a33f2*/
      {
        do /*0x7a3414*/
        {
          if ( byte_B77D94 ) /*0x7a33fb*/
            break; /*0x7a33fb*/
          HashMap::Shrink2((HashMap *)&stru_B77D80); /*0x7a3402*/
        }
        while ( dword_B77D88 > (unsigned int)dword_B77DB0 ); /*0x7a3414*/
      }
    }
    if ( a4 && v11 ) /*0x7a3423*/
      dword_B76E38 = *(_DWORD *)(a4 + 28); /*0x7a3428*/
    String::ToLowerCopy((String *)&dword_B73E40, (char **)&v51[24]); /*0x7a3438*/
    *(_DWORD *)&v51[4] = 0; /*0x7a3444*/
    if ( a4 ) /*0x7a344e*/
    {
      while ( *(_DWORD *)(v6 + 16) == -1 ) /*0x7a3458*/
      {
        v6 = *(_DWORD *)(v6 + 60); /*0x7a345a*/
        *(_DWORD *)&v51[8] = v6; /*0x7a345d*/
LABEL_121:
        if ( !v6 ) /*0x7a3aac*/
          goto LABEL_122; /*0x7a3aac*/
      }
      if ( v11 ) /*0x7a3468*/
      {
        *(_DWORD *)&v51[32] = 4; /*0x7a346e*/
        swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(v6 + 28)); /*0x7a3487*/
        v10(v11, 0x4CCu, 0xFFFFFFFF, (LPARAM)Buffer); /*0x7a349f*/
        v29 = *(unsigned __int16 *)&v51[4] << 16; /*0x7a34bc*/
        v10(v11, 0x4A8u, v29 | (unsigned __int16)dword_B779D8, (LPARAM)&v51[32]); /*0x7a34c8*/
        *(_DWORD *)&v51[32] = 1; /*0x7a34d6*/
        BulkCharToWide(String, (unsigned __int8 *)(v6 + 64), -1); /*0x7a34de*/
        WideString::Reassign(&v51[36], String); /*0x7a34ef*/
        v10(v11, 0x4A8u, v29 | (unsigned __int16)dword_B73E08, (LPARAM)&v51[32]); /*0x7a350e*/
        swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(v6 + 16)); /*0x7a3521*/
        WideString::Reassign(&v51[36], Buffer); /*0x7a3535*/
        v10(v11, 0x4A8u, v29 | (unsigned __int16)dword_B76904, (LPARAM)&v51[32]); /*0x7a3552*/
        swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(v6 + 8)); /*0x7a3565*/
        WideString::Reassign(&v51[36], Buffer); /*0x7a3579*/
        v10(v11, 0x4A8u, v29 | (unsigned __int16)dword_B77CE4, (LPARAM)&v51[32]); /*0x7a3598*/
        swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(v6 + 12)); /*0x7a35ab*/
        WideString::Reassign(&v51[36], Buffer); /*0x7a35bf*/
        v10(v11, 0x4A8u, v29 | (unsigned __int16)dword_B73AB4, (LPARAM)&v51[32]); /*0x7a35de*/
        swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(v6 + 32)); /*0x7a35f1*/
        WideString::Reassign(&v51[36], Buffer); /*0x7a3605*/
        v10(v11, 0x4A8u, v29 | (unsigned __int16)dword_B76AEC, (LPARAM)&v51[32]); /*0x7a3622*/
        ++*(_DWORD *)&v51[4]; /*0x7a3624*/
      }
      String::Assign((String *)v51, (const char *)(v6 + 64)); /*0x7a3630*/
      String::ToLower((String *)v51); /*0x7a3639*/
      if ( *(int ***)a4 == &off_802100 ) /*0x7a364c*/
      {
        HashTable::Insert((HashTable *)&g_WOL_ListParser, (const char **)v51, v55); /*0x7a3664*/
        v30 = (String *)__2_YAPAXI_Z(0x74u); /*0x7a366b*/
        v31 = v30; /*0x7a3670*/
        if ( v30 ) /*0x7a3677*/
          unknown_libname_73(v30); /*0x7a367b*/
        else
          v31 = 0; /*0x7a3682*/
        String::Reassign(v31, (const char **)v51); /*0x7a368b*/
        qmemcpy(&v31->m_3[1], (const void *)v6, 0x6Cu); /*0x7a369a*/
        *(_DWORD *)v31[14].__pad_0 = 0; /*0x7a36a0*/
        v32 = dword_B768D8(v51) & ((1 << dword_B768CC) - 1); /*0x7a36c1*/
        v33 = *(_DWORD *)(*(_DWORD *)g_WOL_ListParser.__pad_0 + 4 * v32); /*0x7a36c3*/
        *(_DWORD *)(*(_DWORD *)g_WOL_ListParser.__pad_0 + 4 * v32) = v31; /*0x7a36c6*/
        if ( v33 ) /*0x7a36cb*/
          *(_DWORD *)v31[14].__pad_0 = v33; /*0x7a36cd*/
        *(_DWORD *)&v51[100] = dword_B768C8; /*0x7a36dc*/
        *(_QWORD *)&v51[76] = (unsigned int)++dword_B768C4; /*0x7a36e5*/
        *(_DWORD *)&v51[104] = 0; /*0x7a36ef*/
        if ( (double)(unsigned int)dword_B768C4 / (double)dword_B768C8 < dbl_B768E8 ) /*0x7a3706*/
          goto LABEL_82; /*0x7a3706*/
        v34 = (WOLGameList *)&g_WOL_ListParser; /*0x7a370c*/
      }
      else if ( *(_DWORD *)a4 == 8960 ) /*0x7a371b*/
      {
        HashTable::Insert((HashTable *)&dword_B73AF8, (const char **)v51, v54); /*0x7a3733*/
        v35 = (String *)__2_YAPAXI_Z(0x74u); /*0x7a373a*/
        v36 = v35; /*0x7a373f*/
        if ( v35 ) /*0x7a3746*/
          unknown_libname_73(v35); /*0x7a374a*/
        else
          v36 = 0; /*0x7a3751*/
        String::Reassign(v36, (const char **)v51); /*0x7a375a*/
        qmemcpy(&v36->m_3[1], (const void *)v6, 0x6Cu); /*0x7a3769*/
        *(_DWORD *)v36[14].__pad_0 = 0; /*0x7a376f*/
        v37 = dword_B73B10(v51) & ((1 << dword_B73B04) - 1); /*0x7a3790*/
        v38 = *((_DWORD *)dword_B73AF8 + v37); /*0x7a3792*/
        *((_DWORD *)dword_B73AF8 + v37) = v36; /*0x7a3795*/
        if ( v38 ) /*0x7a379a*/
          *(_DWORD *)v36[14].__pad_0 = v38; /*0x7a379c*/
        *(_DWORD *)&v51[92] = dword_B73B00; /*0x7a37ab*/
        *(_QWORD *)&v51[60] = (unsigned int)++dword_B73AFC; /*0x7a37b4*/
        *(_DWORD *)&v51[96] = 0; /*0x7a37be*/
        if ( (double)(unsigned int)dword_B73AFC / (double)dword_B73B00 < dbl_B73B20 ) /*0x7a37d5*/
          goto LABEL_82; /*0x7a37d5*/
        v34 = (WOLGameList *)&dword_B73AF8; /*0x7a37db*/
      }
      else
      {
        HashTable::Insert(&stru_B77D80, (const char **)v51, v53); /*0x7a37f7*/
        v39 = (String *)__2_YAPAXI_Z(0x74u); /*0x7a37fe*/
        v40 = v39; /*0x7a3803*/
        if ( v39 ) /*0x7a380a*/
          unknown_libname_73(v39); /*0x7a380e*/
        else
          v40 = 0; /*0x7a3815*/
        String::Reassign(v40, (const char **)v51); /*0x7a381e*/
        qmemcpy(&v40->m_3[1], (const void *)v6, 0x6Cu); /*0x7a382d*/
        *(_DWORD *)v40[14].__pad_0 = 0; /*0x7a3833*/
        v41 = dword_B77D98(v51) & ((1 << dword_B77D8C) - 1); /*0x7a3854*/
        v42 = *(_DWORD *)(*(_DWORD *)stru_B77D80.__pad_0 + 4 * v41); /*0x7a3856*/
        *(_DWORD *)(*(_DWORD *)stru_B77D80.__pad_0 + 4 * v41) = v40; /*0x7a3859*/
        if ( v42 ) /*0x7a385e*/
          *(_DWORD *)v40[14].__pad_0 = v42; /*0x7a3860*/
        *(_DWORD *)&v51[84] = dword_B77D88; /*0x7a386f*/
        *(_QWORD *)&v51[68] = (unsigned int)++dword_B77D84; /*0x7a3878*/
        *(_DWORD *)&v51[88] = 0; /*0x7a3882*/
        if ( (double)(unsigned int)dword_B77D84 / (double)dword_B77D88 < dbl_B77DA8 ) /*0x7a3899*/
          goto LABEL_82; /*0x7a3899*/
        v34 = (WOLGameList *)&stru_B77D80; /*0x7a389b*/
      }
      WOLGameList::GrowBuffer(v34); /*0x7a38a0*/
LABEL_82:
      if ( dword_B76B10 || dword_B77E48 != 2 && dword_B77E48 != 3 ) /*0x7a38bf*/
        goto LABEL_113; /*0x7a38bf*/
      v43 = 0; /*0x7a38ca*/
      *(_DWORD *)&v51[28] = dword_B77900; /*0x7a38ce*/
      if ( (int)dword_B77900 <= 0 ) /*0x7a38d2*/
        goto LABEL_113; /*0x7a38d2*/
      v44 = 0; /*0x7a38d8*/
      while ( 1 ) /*0x7a38da*/
      {
        if ( v44 >= 0 && v43 < (int)dword_B77900 ) /*0x7a38e4*/
          qmemcpy(&v51[108], (char *)dword_B77908 + v44, 0x6Cu); /*0x7a38f7*/
        if ( !_strcmpi((char *)(*(_DWORD *)&v51[8] + 64), (char *)&v51[144]) ) /*0x7a3909*/
          break; /*0x7a3909*/
        ++v43; /*0x7a3919*/
        v44 += 108; /*0x7a391a*/
        if ( v43 >= *(int *)&v51[28] ) /*0x7a391f*/
          goto LABEL_113; /*0x7a391f*/
      }
      if ( v43 >= *(int *)&v51[28] ) /*0x7a392a*/
        goto LABEL_113; /*0x7a392a*/
      v45 = v43; /*0x7a3936*/
      if ( dword_B77900 ) /*0x7a393a*/
      {
        if ( v43 < 0 ) /*0x7a393e*/
          v45 = 0; /*0x7a3940*/
        if ( v45 >= (int)dword_B77900 ) /*0x7a3944*/
          v45 = dword_B77900 - 1; /*0x7a3946*/
        memcpy( /*0x7a3972*/
          (char *)dword_B77908 + 108 * v45,
          (char *)dword_B77908 + 108 * v45 + 108,
          108 * dword_B77900 - 36 * (3 * v45 + 3));
        --dword_B77900; /*0x7a3980*/
        if ( (int)(3 * dword_B77900) <= dword_B77904 ) /*0x7a398f*/
          WOLGameList::EnsureCapacity((WOLGameList *)&dword_B77900); /*0x7a3996*/
      }
      switch ( dword_B77E48 ) /*0x7a39a3*/
      {
        case 1: /*0x7a39a3*/
          v46 = 0; /*0x7a39a5*/
LABEL_112:
          InsertGameSettings((char *)&v51[108], v46); /*0x7a39f3*/
          break; /*0x7a39f7*/
        case 2: /*0x7a39a3*/
          InsertBuddyList((const char *)&v51[108], 1); /*0x7a39b4*/
          break;
        case 3: /*0x7a39a3*/
          InsertBuddyList((const char *)&v51[108], 0); /*0x7a39c6*/
          break;
        case 4: /*0x7a39a3*/
          FindBuddyList(&v51[108], 1); /*0x7a39d8*/
          break;
        case 5: /*0x7a39a3*/
          FindBuddyList(&v51[108], 0); /*0x7a39ea*/
          break;
        default:
          v46 = 1; /*0x7a39f1*/
          goto LABEL_112; /*0x7a39f1*/
      }
LABEL_113:
      if ( (unsigned __int8)String::Compare((String *)&v51[24], (const char **)v51) ) /*0x7a3a05*/
      {
        LoadPlayerProfile((ObjectClass *)&v51[12], (const char **)&dword_B73E40); /*0x7a3a17*/
        if ( *(_DWORD *)&v51[16] ) /*0x7a3a22*/
        {
          v47 = *(_DWORD **)&v51[8]; /*0x7a3a24*/
          if ( WOLGameList::Check(*(WOLGameList **)&v51[16], *(int *)&v51[8]) ) /*0x7a3a29*/
          {
            WOLGameList::UpdatePlayerStats(*(int *)&v51[16], v47); /*0x7a3a37*/
            SaveProfileWOL(*(int *)&v51[16], (const char **)v51); /*0x7a3a45*/
            v48 = (HWND)Dialog::FindByHandle((Dialog *)0x10E); /*0x7a3a4f*/
            if ( v48 || (v48 = (HWND)Dialog::FindByHandle((Dialog *)0x114)) != 0 ) /*0x7a3a64*/
              FillPersonaInfoWOL(*(int *)&v51[16], v48, (char **)&dword_B73E40, 0); /*0x7a3a72*/
          }
        }
        *(_DWORD *)&v51[12] = &rc_ptr<PlayerProfile>::`vftable'; /*0x7a3a7b*/
        ComPtr::Release((ComPtr *)&v51[12]); /*0x7a3a83*/
      }
      *(_DWORD *)&v51[8] = *(_DWORD *)(*(_DWORD *)&v51[8] + 60); /*0x7a3a93*/
      DeleteAndZero((ObjectClass *)v51); /*0x7a3a97*/
      v6 = *(_DWORD *)&v51[8]; /*0x7a3a9c*/
      v11 = *(HWND *)&v51[20]; /*0x7a3aa0*/
      v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a3aa4*/
      goto LABEL_121; /*0x7a3aa4*/
    }
LABEL_122:
    if ( v11 ) /*0x7a3ab4*/
    {
      v10(v11, 0x186u, v57 - *(_DWORD *)&v51[56], 0); /*0x7a3acc*/
      InvalidateRect(v11, 0, 0); /*0x7a3ad3*/
    }
    else
    {
      DisplayRankingsWOL(0); /*0x7a3adf*/
    }
    SendGameListWOL(v50); /*0x7a3ae4*/
    v49 = (ObjectClass *)Dialog::FindByHandle((Dialog *)0x116); /*0x7a3aee*/
    if ( v49 ) /*0x7a3af5*/
      ShowUserProfileWOL(v49); /*0x7a3af9*/
    DeleteAndZero((ObjectClass *)&v51[24]); /*0x7a3b02*/
    DeleteAndZero::Alt((DeleteAndZero *)&v51[40]); /*0x7a3b0b*/
    DeleteAndZero::Alt((DeleteAndZero *)&v51[36]); /*0x7a3b14*/
  }
  return 0; /*0x7a3134*/
}



// ==== 0x007A3B30  CNetUtilEventSink::Commit  this=CNetUtilEventSink  sig=csp ====
int __thiscall ComStreamClass::Commit(CNetUtilEventSink *this, int a2, float a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v7; // ebp
  int v8; // esi
  int v9; // edi
  _DWORD *v10; // edi
  int v11; // ebx
  double v12; // st7
  int v13; // esi
  String *v14; // eax
  String *v15; // ebx
  int v16; // edx
  int v17; // eax

  if ( a3 == 0.0 ) /*0x7a3b3c*/
  {
    v6 = a4; /*0x7a3b44*/
    v7 = a4; /*0x7a3b51*/
    String::Assign((String *)&a3, &g_INI_DefaultBuffer); /*0x7a3b53*/
    if ( v6 ) /*0x7a3b5a*/
    {
      do /*0x7a3b6d*/
      {
        String::Assign_Bool((String *)&a3, (const char *)(v7 + 28)); /*0x7a3b6d*/
        String::ToLower((String *)&a3); /*0x7a3b76*/
        String::GetOrEmpty((String *)&a3); /*0x7a3b87*/
        Debug::Log(); /*0x7a3b92*/
        if ( dword_B76644 ) /*0x7a3ba1*/
        {
          *(float *)&a4 = (double)(unsigned int)(dword_B76644 - 1) / (double)dword_B76648; /*0x7a3bc9*/
          v8 = dword_B76658(&a3) & ((1 << dword_B7664C) - 1); /*0x7a3be7*/
          v9 = *((_DWORD *)dword_B76640 + v8); /*0x7a3be9*/
          if ( v9 ) /*0x7a3bee*/
          {
            if ( (unsigned __int8)String::Compare(*((String **)dword_B76640 + v8), (const char **)&a3) ) /*0x7a3bfb*/
            {
              v10 = (_DWORD *)*((_DWORD *)dword_B76640 + v8); /*0x7a3c09*/
              v11 = v10[18]; /*0x7a3c0e*/
              if ( v10 ) /*0x7a3c11*/
              {
                DeleteAndZero(*((ObjectClass **)dword_B76640 + v8)); /*0x7a3c15*/
                __3_YAXPAX_Z(v10); /*0x7a3c1b*/
              }
              v12 = *(float *)&a4; /*0x7a3c29*/
              *((_DWORD *)dword_B76640 + v8) = v11; /*0x7a3c2d*/
              --dword_B76644; /*0x7a3c3c*/
              if ( v12 > dbl_B76660 ) /*0x7a3c46*/
                goto LABEL_17; /*0x7a3c46*/
            }
            else
            {
              v13 = *(_DWORD *)(v9 + 72); /*0x7a3c4a*/
              if ( v13 ) /*0x7a3c4f*/
              {
                while ( !(unsigned __int8)String::Compare((String *)v13, (const char **)&a3) ) /*0x7a3c5f*/
                {
                  v9 = v13; /*0x7a3c61*/
                  v13 = *(_DWORD *)(v13 + 72); /*0x7a3c63*/
                  if ( !v13 ) /*0x7a3c68*/
                    goto LABEL_15; /*0x7a3c68*/
                }
                *(_DWORD *)(v9 + 72) = *(_DWORD *)(v13 + 72); /*0x7a3c6f*/
                --dword_B76644; /*0x7a3c7b*/
                ComStreamClass::writeData((ComStreamClass *)v13, 1); /*0x7a3c87*/
              }
LABEL_15:
              if ( *(float *)&a4 > dbl_B76660 ) /*0x7a3c9b*/
                goto LABEL_17; /*0x7a3c9b*/
            }
            ComStreamClass::flushStream((ComStreamClass *)&dword_B76640); /*0x7a3ca2*/
          }
        }
LABEL_17:
        v14 = (String *)__2_YAPAXI_Z(0x4Cu); /*0x7a3ca7*/
        v15 = v14; /*0x7a3cae*/
        if ( v14 ) /*0x7a3cb5*/
          unknown_libname_73(v14); /*0x7a3cb9*/
        else
          v15 = 0; /*0x7a3cc0*/
        String::Reassign(v15, (const char **)&a3); /*0x7a3cc9*/
        qmemcpy(&v15->m_3[1], (const void *)v7, 0x44u); /*0x7a3cd8*/
        *(_DWORD *)v15[9].__pad_0 = 0; /*0x7a3ce0*/
        v16 = dword_B76658(&a3) & ((1 << dword_B7664C) - 1); /*0x7a3cfd*/
        v17 = *((_DWORD *)dword_B76640 + v16); /*0x7a3cff*/
        *((_DWORD *)dword_B76640 + v16) = v15; /*0x7a3d02*/
        if ( v17 ) /*0x7a3d07*/
          *(_DWORD *)v15[9].__pad_0 = v17; /*0x7a3d09*/
        if ( (double)(unsigned int)++dword_B76644 / (double)dword_B76648 >= dbl_B76668 ) /*0x7a3d40*/
          ComStreamClass::readData((ComStreamClass *)&dword_B76640); /*0x7a3d47*/
        v7 = *(_DWORD *)(v7 + 24); /*0x7a3d4c*/
      }
      while ( v7 ); /*0x7a3b6d*/
    }
    DeleteAndZero((ObjectClass *)&a3); /*0x7a3d58*/
    return 0; /*0x7a3d63*/
  }
  else
  {
    Debug::Log(); /*0x7a3d71*/
    return 0; /*0x7a3d79*/
  }
}



// ==== 0x007A3D90  CNetUtilEventSink::Write  this=CNetUtilEventSink  sig=csp ====
int __thiscall ComStreamClass::Write(
        CNetUtilEventSink *this,
        int a2,
        unsigned __int8 *a3,
        const char *lParam,
        const char *lParama)
{
  HWND v5; // esi
  HWND DlgItem; // ebx
  HWND v7; // ebx
  char *v8; // eax
  HWND v9; // eax
  void (__stdcall *v10)(HWND, BOOL); // ebx
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND Current; // eax
  HWND v18; // eax
  bool v20; // [esp+Ah] [ebp-281Ah]
  char v21; // [esp+Bh] [ebp-2819h]
  ObjectClass v22[59]; // [esp+Ch] [ebp-2818h] BYREF
  char *v23; // [esp+2838h] [ebp+14h]

  Debug::Log(); /*0x7a3da1*/
  dword_B77DF0 = (int)a3; /*0x7a3dba*/
  if ( a3 ) /*0x7a3dbf*/
    goto LABEL_16; /*0x7a3dbf*/
  String::Assign((String *)v22, lParama); /*0x7a3dd3*/
  LoadPlayerProfile((ObjectClass *)&v22[0].vtable1, (const char **)v22); /*0x7a3de0*/
  DeleteAndZero(v22); /*0x7a3de9*/
  v22[0].vtable0 = 0; /*0x7a3df2*/
  v22[0].uniqueId = 0; /*0x7a3df6*/
  LOBYTE(v22[0].abstractFlags) = 0; /*0x7a3dfa*/
  ReadRegistryOptionsWOL((ObjectClass *)&v22[0].uniqueId); /*0x7a3dfe*/
  if ( (unsigned __int8)Flag::IsNot2((Flag *)&v22[0].uniqueId) ) /*0x7a3e07*/
  {
    v22[0].vtable0 = FindChannelWOL(lParama, (int)v23, 1u, *(_DWORD *)(v22[0].vtable2 + 16)); /*0x7a3e2d*/
    SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x7a3e31*/
  }
  v21 = 1; /*0x7a3e3b*/
  v20 = 0; /*0x7a3e40*/
  v5 = (HWND)Dialog::FindByHandle((Dialog *)0x10F); /*0x7a3e4a*/
  if ( v5 /*0x7a3e7a*/
    || (v5 = (HWND)Dialog::FindByHandle((Dialog *)0x11D), v20 = v5 != 0, v5)
    || (v21 = 0, (v5 = (HWND)Dialog::FindByHandle((Dialog *)0x114)) != 0) )
  {
    DlgItem = GetDlgItem(v5, 1576); /*0x7a3e88*/
    if ( v20 ) /*0x7a3e93*/
    {
      SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)lParama); /*0x7a3ea1*/
    }
    else
    {
      v22[0].vtable3 = SendMessageA(DlgItem, 0x4BCu, 0, (LPARAM)lParama); /*0x7a3eb5*/
      SendMessageA(DlgItem, 0x151u, v22[0].vtable3, v22[0].vtable0); /*0x7a3ec1*/
      SendMessageA(DlgItem, 0x14Eu, v22[0].vtable3, 0); /*0x7a3ed0*/
    }
    if ( v21 ) /*0x7a3ed8*/
    {
      String::Assign_Alt((String *)&dword_B73E40, lParama); /*0x7a3eeb*/
      String::Assign_Alt((String *)&g_WebBrowserConfig, v23); /*0x7a3efd*/
      v7 = GetDlgItem(v5, 1836); /*0x7a3f0f*/
      v8 = String::GetOrEmpty_Alt((String *)&g_WebBrowserConfig); /*0x7a3f11*/
      SendMessageA(v7, 0x4B4u, 0, (LPARAM)v8); /*0x7a3f1f*/
      LOBYTE(dword_84A238) = 1; /*0x7a3f29*/
      v9 = GetDlgItem(v5, 1337); /*0x7a3f30*/
      v10 = (void (__stdcall *)(HWND, BOOL))EnableWindow; /*0x7a3f32*/
      EnableWindow(v9, 1); /*0x7a3f39*/
      if ( !v20 ) /*0x7a3f41*/
      {
        v11 = GetDlgItem(v5, 1837); /*0x7a3f4f*/
        EnableWindow(v11, 0); /*0x7a3f52*/
        v12 = GetDlgItem(v5, 1837); /*0x7a3f63*/
        SendMessageA(v12, 0xF1u, 1u, 0); /*0x7a3f66*/
LABEL_14:
        v15 = GetDlgItem(v5, 1771); /*0x7a3f99*/
        v10(v15, 1); /*0x7a3fa4*/
        String::Assign((String *)v22, lParama); /*0x7a3fb2*/
        FillPersonaInfoWOL(v22[0].vtable2, v5, (char **)v22, (wchar_t **)1); /*0x7a3fc3*/
        DeleteAndZero(v22); /*0x7a3fcc*/
      }
    }
    else
    {
      v13 = GetDlgItem(v5, 1791); /*0x7a3f79*/
      SendMessageA(v13, 0xF1u, 0, 0); /*0x7a3f7c*/
      v14 = GetDlgItem(v5, 1791); /*0x7a3f86*/
      v10 = (void (__stdcall *)(HWND, BOOL))EnableWindow; /*0x7a3f88*/
      EnableWindow(v14, 1); /*0x7a3f8f*/
      if ( !v20 ) /*0x7a3f97*/
        goto LABEL_14; /*0x7a3f97*/
    }
  }
  v22[0].vtable1 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x7a3fd1*/
  ComPtr::Release((ComPtr *)&v22[0].vtable1); /*0x7a3fdd*/
LABEL_16:
  if ( lParam ) /*0x7a3fed*/
  {
    BulkCharToWide(&v22[0].nextArrayIndex, (unsigned __int8 *)lParam, -1); /*0x7a3ff5*/
    ShowDialogConfirm((wchar_t *)&v22[0].nextArrayIndex, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7a4007*/
  }
  else
  {
    ShowDialogConfirm(aUnknownStatus, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7a4017*/
  }
  v16 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7a4021*/
  if ( v16 ) /*0x7a4028*/
  {
    dword_B77DC8 &= ~0x100u; /*0x7a4036*/
    if ( !dword_B77DC8 ) /*0x7a403c*/
      CloseDialog(v16, 0); /*0x7a4042*/
  }
  Current = (HWND)Dialog::GetCurrent(); /*0x7a4047*/
  v18 = GetDlgItem(Current, 1344); /*0x7a4052*/
  if ( v18 ) /*0x7a4058*/
    SetFocus(v18); /*0x7a405b*/
  return 0; /*0x7a4054*/
}



// ==== 0x007A4070  CNetUtilEventSink::Seek  this=CNetUtilEventSink  sig=csp ====
int __thiscall ComStreamClass::Seek(CNetUtilEventSink *this, int a2, int a3, int a4)
{
  HWND v4; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  int v8; // [esp+10h] [ebp+10h]

  Debug::Log(); /*0x7a4075*/
  dword_B77DF4 = a3; /*0x7a4083*/
  if ( !a3 ) /*0x7a4088*/
  {
    dword_B77E60 = a4; /*0x7a4092*/
    dword_B77E64 = v8; /*0x7a4097*/
  }
  v4 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7a40a2*/
  if ( v4 ) /*0x7a40a9*/
  {
    dword_B77DC8 &= ~0x100u; /*0x7a40b7*/
    if ( !dword_B77DC8 ) /*0x7a40bd*/
      CloseDialog(v4, 0); /*0x7a40c3*/
  }
  Current = (HWND)Dialog::GetCurrent(); /*0x7a40c8*/
  DlgItem = GetDlgItem(Current, 1344); /*0x7a40d3*/
  if ( DlgItem ) /*0x7a40db*/
    SetFocus(DlgItem); /*0x7a40de*/
  return 0; /*0x7a40e6*/
}



// ==== 0x007A40F0  CNetUtilEventSink::ddtor  this=CNetUtilEventSink  sig=csp ====
int __stdcall C07F766C::_vt03(int a1, int a2, unsigned int a3, int a4, int a5)
{
  if ( g_NetworkLobby_Init && *(_DWORD *)dword_B77780 ) /*0x7a4100*/
  {
    if ( !a2 && a3 < 0x3E8 ) /*0x7a4114*/
    {
      ++*(_DWORD *)dword_B77CE0; /*0x7a4123*/
      return 0; /*0x7a412a*/
    }
    return 0; /*0x7a4114*/
  }
  if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 ) /*0x7a413f*/
  {
    if ( g_WOL_ProcessIdle ) /*0x7a4188*/
      DisplayRankingsWOL(0); /*0x7a418e*/
    return 0; /*0x7a418e*/
  }
  Debug::Log(); /*0x7a4146*/
  if ( ++dword_B736F4 < g_WOL_LoginPool ) /*0x7a4161*/
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
int __stdcall CChatEventSink::HandleServerList(CChatEventSink *this, int a2, int a3)
{
  int v3; // ebp
  int v4; // ebx
  unsigned int v5; // eax
  wchar_t *StringCSF; // eax
  int vtable0; // eax
  int v9; // esi
  int v10; // ebp
  char *v11; // ebx
  char *v12; // esi
  char v13; // al
  unsigned int v14; // ecx
  char *v15; // edi
  int vtable1; // ebp
  char *v17; // ebx
  char *vtable2; // esi
  char v19; // al
  unsigned int v20; // ecx
  char *v21; // edi
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
  char *v36; // ebx
  int v37; // eax
  wchar_t *v38; // esi
  HWND v39; // eax
  const wchar_t *v40; // [esp+0h] [ebp-324h]
  char v41; // [esp+Fh] [ebp-315h]
  int v42; // [esp+10h] [ebp-314h]
  int v43; // [esp+10h] [ebp-314h]
  int v44; // [esp+14h] [ebp-310h]
  int v45; // [esp+14h] [ebp-310h]
  int v46; // [esp+18h] [ebp-30Ch]
  int v47; // [esp+1Ch] [ebp-308h]
  int v48; // [esp+20h] [ebp-304h]
  char v49[128]; // [esp+24h] [ebp-300h] BYREF
  char v50[128]; // [esp+A4h] [ebp-280h] BYREF
  char String[128]; // [esp+124h] [ebp-200h] BYREF
  char v52[128]; // [esp+1A4h] [ebp-180h] BYREF
  char v53[128]; // [esp+224h] [ebp-100h] BYREF
  char v54[128]; // [esp+2A4h] [ebp-80h] BYREF

  v3 = 0; /*0x7a41d0*/
  v4 = a3; /*0x7a41d2*/
  v44 = a3; /*0x7a41d5*/
  v42 = 0; /*0x7a41d9*/
  v48 = 0; /*0x7a41dd*/
  v47 = 0; /*0x7a41e1*/
  v5 = time(0); /*0x7a41e5*/
  srand(v5); /*0x7a41eb*/
  if ( a2 < 0 ) /*0x7a41fc*/
  {
    SetEvent(Handles); /*0x7a4204*/
    StringCSF = GetStringCSF(aTxtNoServList, 0, g_Str_File_wonline_cpp, 5275); /*0x7a421b*/
    swprintf(&word_B77AD0, (const size_t)StringCSF, v40); /*0x7a4226*/
    return 0; /*0x7a4239*/
  }
  vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a423c*/
  v41 = 0; /*0x7a4244*/
  if ( !a3 ) /*0x7a4249*/
    goto LABEL_75; /*0x7a4249*/
  do /*0x7a4ac2*/
  {
    if ( strcmp((const char *)(v4 + 95), "IRC") ) /*0x7a425f*/
    {
      if ( !strcmp((const char *)(v4 + 95), (const char *)&off_84AB9C) ) /*0x7a45e3*/
      {
        strcpy(v49, (const char *)(v4 + 100)); /*0x7a462c*/
        strtok(v49, asc_81C8FC); /*0x7a463a*/
        v25 = strtok(0, asc_81C8FC); /*0x7a4646*/
        if ( v25 ) /*0x7a4650*/
          strcpy(stru_B76188.__pad_20, v25); /*0x7a466b*/
        v26 = strtok(0, asc_81C8FC); /*0x7a467b*/
        if ( v26 ) /*0x7a4685*/
          g_WOL_GameConfig = atol(v26); /*0x7a4694*/
      }
      else if ( strcmp((const char *)(v4 + 95), aGam) || v47 ) /*0x7a46dc*/
      {
        if ( !strcmp((const char *)(v4 + 95), aGam) && v47 == 1 ) /*0x7a47dc*/
        {
          qmemcpy(&stru_B75E48.ComPtr_field_0x10, (const void *)v4, 0xF8u); /*0x7a47f0*/
          strcpy(v50, byte_B75EBC); /*0x7a4815*/
          strtok(v50, asc_81C8FC); /*0x7a4826*/
          v29 = strtok(0, asc_81C8FC); /*0x7a4832*/
          if ( v29 ) /*0x7a483c*/
            strcpy(&byte_B77CE8, v29); /*0x7a4857*/
          v30 = strtok(0, asc_81C8FC); /*0x7a4867*/
          if ( v30 ) /*0x7a4871*/
            dword_B75F5C = atol(v30); /*0x7a487c*/
          v47 = 2; /*0x7a4881*/
        }
        else if ( !strcmp((const char *)(v4 + 95), aWdt_1) ) /*0x7a489b*/
        {
          qmemcpy(&unk_B769C8, (const void *)v4, 0xF8u); /*0x7a48d9*/
          strcpy(v52, byte_B76A2C); /*0x7a48f7*/
          strtok(v52, asc_81C8FC); /*0x7a4908*/
          v31 = strtok(0, asc_81C8FC); /*0x7a4914*/
          if ( v31 ) /*0x7a491e*/
            strcpy(&g_WindowManager.__pad_70[28], v31); /*0x7a4939*/
          v32 = strtok(0, asc_81C8FC); /*0x7a4949*/
          if ( v32 ) /*0x7a4953*/
            stru_B76AC4.ambientSoundController[3] = atol(v32); /*0x7a4962*/
        }
        else if ( !_strcmpi((char *)(v4 + 95), aMgl) ) /*0x7a4972*/
        {
          Debug::Log(); /*0x7a4987*/
          if ( !v41 ) /*0x7a4995*/
          {
            dword_B77E1C = 0; /*0x7a49a3*/
            memset(&g_WindowManager.__pad_EC[688], 0, 0x2000u); /*0x7a49a8*/
            memset(dword_B76338, 0, sizeof(dword_B76338)); /*0x7a49b4*/
            v41 = 1; /*0x7a49b6*/
          }
          v33 = (char *)__2_YAPAXI_Z(0xF8u); /*0x7a49c5*/
          qmemcpy(v33, (const void *)v4, 0xF8u); /*0x7a49d0*/
          strcpy(v54, v33 + 100); /*0x7a49f5*/
          strtok(v54, asc_81C8FC); /*0x7a4a06*/
          v34 = strtok(0, asc_81C8FC); /*0x7a4a12*/
          if ( v34 ) /*0x7a4a1c*/
          {
            strcpy(&g_WindowManager.__pad_EC[128 * dword_B77E1C + 688], v34); /*0x7a4a4e*/
            v35 = strtok(0, asc_81C8FC); /*0x7a4a57*/
            if ( v35 ) /*0x7a4a61*/
              dword_B76338[dword_B77E1C] = atol(v35); /*0x7a4a72*/
            Debug::Log(); /*0x7a4a98*/
            ++dword_B77E1C; /*0x7a4aa6*/
          }
          __3_YAXPAX_Z(v33); /*0x7a4aac*/
        }
      }
      else
      {
        qmemcpy(&stru_B75E48.ComPtr_field_0x10, (const void *)v4, 0xF8u); /*0x7a46f0*/
        strcpy(v53, byte_B75EBC); /*0x7a4715*/
        strtok(v53, asc_81C8FC); /*0x7a4726*/
        v27 = strtok(0, asc_81C8FC); /*0x7a4732*/
        if ( v27 ) /*0x7a473c*/
          strcpy((char *)&g_WOL_UserList.customSound_controller[2], v27); /*0x7a4757*/
        v28 = strtok(0, asc_81C8FC); /*0x7a4767*/
        if ( v28 ) /*0x7a4771*/
          dword_B76184 = atol(v28); /*0x7a477c*/
        byte_B77CE8 = 0; /*0x7a4781*/
        dword_B75F5C = 0; /*0x7a4788*/
        v47 = 1; /*0x7a4792*/
      }
LABEL_72:
      vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a4ab4*/
      goto LABEL_73; /*0x7a4ab4*/
    }
    v9 = vtable0; /*0x7a428e*/
    if ( v42 ) /*0x7a4292*/
    {
      v46 = vtable0; /*0x7a43d4*/
      vtable1 = (int)g_WOL_UserList.?; /*0x7a43e0*/
      if ( vtable0 >= (int)g_WOL_UserList.? ) /*0x7a43e8*/
      {
        vtable1 = 2 * vtable0; /*0x7a43f6*/
        if ( 2 * vtable0 < 10 ) /*0x7a43fc*/
          vtable1 = 10; /*0x7a43fe*/
        v17 = (char *)__2_YAPAXI_Z(248 * vtable1); /*0x7a4415*/
        memset(v17, 0, 4 * ((unsigned int)(248 * vtable1) >> 2)); /*0x7a4423*/
        vtable2 = (char *)g_WOL_UserList.?; /*0x7a442c*/
        if ( g_WOL_UserList.? ) /*0x7a4434*/
        {
          v19 = -8 * LOBYTE(g_WOL_UserList.AbstractClass); /*0x7a4447*/
          v20 = (unsigned int)(248 * (int)g_WOL_UserList.AbstractClass) >> 2; /*0x7a4449*/
          qmemcpy(v17, g_WOL_UserList.?, 4 * v20); /*0x7a444c*/
          qmemcpy(&v17[4 * v20], &vtable2[4 * v20], v19 & 3); /*0x7a4453*/
          vtable2 = (char *)g_WOL_UserList.?; /*0x7a4455*/
        }
        __3_YAXPAX_Z(vtable2); /*0x7a445c*/
        vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a4461*/
        v9 = v46; /*0x7a4466*/
        g_WOL_UserList.? = v17; /*0x7a446a*/
        v4 = v44; /*0x7a4470*/
        g_WOL_UserList.? = (void *)vtable1; /*0x7a4477*/
      }
      if ( vtable0 >= vtable1 ) /*0x7a447f*/
      {
        CChatEventSink::ProcessChatEvent((CChatEventSink *)&g_WOL_UserList); /*0x7a4486*/
        vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a448b*/
      }
      if ( v9 < vtable0 ) /*0x7a4492*/
      {
        memcpy((char *)g_WOL_UserList.? + 248 * v9 + 248, (char *)g_WOL_UserList.? + 248 * v9, 248 * vtable0 - 248 * v9); /*0x7a44c2*/
        vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a44c7*/
      }
      v21 = (char *)g_WOL_UserList.? + 248 * v9; /*0x7a44dc*/
      if ( v21 ) /*0x7a44e1*/
      {
        qmemcpy(v21, (const void *)v4, 0xF8u); /*0x7a44ea*/
        vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a44ec*/
      }
      g_WOL_UserList.AbstractClass = (void *)(vtable0 + 1); /*0x7a44f5*/
      strcpy(String, (const char *)(v4 + 24)); /*0x7a451a*/
      v22 = -1; /*0x7a452a*/
      v23 = strtok(String, Str); /*0x7a4533*/
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
            v23 = strtok(0, Str); /*0x7a4572*/
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
      if ( v22 == v24 && 1.0 / (double)++v48 >= (double)rand() * 0.00003051850947599719 ) /*0x7a45b1*/
        dword_B76468 = v42; /*0x7a45b7*/
      g_WOL_BuddyList.DynamicVector_field_0x1C = (AbstractClass *)dword_B76468; /*0x7a45c7*/
      ++v42; /*0x7a45cd*/
      goto LABEL_72; /*0x7a45d1*/
    }
    v43 = vtable0; /*0x7a429a*/
    v10 = (int)g_WOL_UserList.?; /*0x7a42a4*/
    if ( vtable0 >= (int)g_WOL_UserList.? ) /*0x7a42ac*/
    {
      v10 = 2 * vtable0; /*0x7a42ba*/
      if ( 2 * vtable0 < 10 ) /*0x7a42c0*/
        v10 = 10; /*0x7a42c2*/
      v11 = (char *)__2_YAPAXI_Z(248 * v10); /*0x7a42d9*/
      memset(v11, 0, 4 * ((unsigned int)(248 * v10) >> 2)); /*0x7a42e7*/
      v12 = (char *)g_WOL_UserList.?; /*0x7a42f0*/
      if ( g_WOL_UserList.? ) /*0x7a42f8*/
      {
        v13 = -8 * LOBYTE(g_WOL_UserList.AbstractClass); /*0x7a430b*/
        v14 = (unsigned int)(248 * (int)g_WOL_UserList.AbstractClass) >> 2; /*0x7a430d*/
        qmemcpy(v11, g_WOL_UserList.?, 4 * v14); /*0x7a4310*/
        qmemcpy(&v11[4 * v14], &v12[4 * v14], v13 & 3); /*0x7a4317*/
        v12 = (char *)g_WOL_UserList.?; /*0x7a4319*/
      }
      __3_YAXPAX_Z(v12); /*0x7a4320*/
      vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a4325*/
      v9 = v43; /*0x7a432a*/
      g_WOL_UserList.? = v11; /*0x7a432e*/
      v4 = v44; /*0x7a4334*/
      g_WOL_UserList.? = (void *)v10; /*0x7a433b*/
    }
    if ( vtable0 >= v10 ) /*0x7a4343*/
    {
      CChatEventSink::ProcessChatEvent((CChatEventSink *)&g_WOL_UserList); /*0x7a434a*/
      vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a434f*/
    }
    if ( v9 < vtable0 ) /*0x7a4356*/
    {
      memcpy((char *)g_WOL_UserList.? + 248 * v9 + 248, (char *)g_WOL_UserList.? + 248 * v9, 248 * vtable0 - 248 * v9); /*0x7a4386*/
      vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a438b*/
    }
    v15 = (char *)g_WOL_UserList.? + 248 * v9; /*0x7a43a0*/
    if ( v15 ) /*0x7a43a5*/
    {
      qmemcpy(v15, (const void *)v4, 0xF8u); /*0x7a43ae*/
      vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a43b0*/
    }
    ++vtable0; /*0x7a43b5*/
    dword_B76468 = 0; /*0x7a43b6*/
    g_WOL_UserList.AbstractClass = (void *)vtable0; /*0x7a43c0*/
    v42 = 1; /*0x7a43c5*/
LABEL_73:
    v4 = *(_DWORD *)(v4 + 20); /*0x7a4ab9*/
    v44 = v4; /*0x7a4abe*/
  }
  while ( v4 ); /*0x7a4ac2*/
  v3 = 0; /*0x7a4ac8*/
LABEL_75:
  v36 = 0; /*0x7a4aca*/
  if ( vtable0 > 0 ) /*0x7a4ace*/
  {
    v45 = 0; /*0x7a4ad4*/
    do /*0x7a4b60*/
    {
      if ( v45 >= 0 && v3 < vtable0 ) /*0x7a4ae2*/
        v36 = (char *)g_WOL_UserList.? + v45; /*0x7a4ae9*/
      strcpy(v36 + 228, String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684])); /*0x7a4b12*/
      strcpy(v36 + 238, String::GetOrEmpty((String *)&g_WebBrowserConfig)); /*0x7a4b45*/
      ++v3; /*0x7a4b52*/
      vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a4b55*/
      v45 += 248; /*0x7a4b5a*/
    }
    while ( v3 < (int)g_WOL_UserList.AbstractClass ); /*0x7a4b60*/
  }
  Debug::Log(); /*0x7a4b72*/
  if ( dword_B77E1C <= 1 ) /*0x7a4b83*/
    v37 = 0; /*0x7a4b95*/
  else
    v37 = Random::Range(&Randomizer_Global, 0, dword_B77E1C - 1); /*0x7a4b8e*/
  dword_B77E20 = v37; /*0x7a4b9d*/
  Debug::Log(); /*0x7a4ba2*/
  v38 = GetStringCSF(aTxtDetectingFi, 0, g_Str_File_wonline_cpp, 5458); /*0x7a4bc5*/
  v39 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7a4bc7*/
  if ( v39 ) /*0x7a4bce*/
    SendDlgItemMessageA(v39, 1458, 0x4B2u, 0, (LPARAM)v38); /*0x7a4bde*/
  CCFileClass::WriteINIString((CCFileClass *)&dword_ABFEC8); /*0x7a4be9*/
  SetEvent(dword_B73688); /*0x7a4bf5*/
  return 0; /*0x7a4230*/
}



// ==== 0x007A4C10  CChatEventSink::?  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::g_var_9d376d(int a1, int a2, int a3)
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
    dword_B77DC8 &= ~0x10u; /*0x7a4c66*/
    if ( !dword_B77DC8 ) /*0x7a4c6c*/
      CloseDialog(v6, 0); /*0x7a4c72*/
  }
  Current = Dialog::GetCurrent(); /*0x7a4c77*/
  DlgItem = GetDlgItem(Current, 1344); /*0x7a4c82*/
  if ( DlgItem ) /*0x7a4c8a*/
    SetFocus(DlgItem); /*0x7a4c8d*/
  v9 = GetStringCSF(aTxtUpgraderequ, 0, g_Str_File_wonline_cpp, 5504); /*0x7a4cab*/
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
      sprintf(v22, "%s/%s", (const char *)(v4 + 81), (const char *)(v4 + 337)); /*0x7a4cef*/
      sprintf(v23, "%s\\%s", (const char *)(v4 + 468), (const char *)(v4 + 337)); /*0x7a4d09*/
      CreateDirectoryA((LPCSTR)(v4 + 468), 0); /*0x7a4d14*/
      (*(void (__stdcall **)(LPVOID, int, int, int, char *, char *, char *))(*(_DWORD *)dword_AC1174 + 12))( /*0x7a4d49*/
        dword_AC1174,
        v4 + 16,
        v4 + 370,
        v4 + 403,
        v22,
        v23,
        g_Str_SOFTWARE_Westwood_Yuri_s_Reven);
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
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_32(CChatEventSink *this, int a2, int a3, int a4)
{
  int v4; // ebp
  int owningHouseIndex; // ecx
  int v6; // eax
  char *v7; // edx
  int v8; // eax
  int v9; // ebx
  ObjectClass *v10; // eax
  ObjectClass *nextObject; // esi
  ObjectClass *v12; // ebp
  char v13; // dl
  unsigned int v14; // ecx
  char v15; // dl
  bool v16; // cc
  int v17; // esi
  int v19; // [esp+1Ch] [ebp-E8h]
  _BYTE v20[228]; // [esp+20h] [ebp-E4h] BYREF

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
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a4f3e*/
  v6 = 0; /*0x7a4f44*/
  v19 = 0; /*0x7a4f48*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a4f4c*/
  {
    *(_DWORD *)&v20[4] = 0; /*0x7a4f53*/
    while ( 1 ) /*0x7a4f57*/
    {
      v7 = 0; /*0x7a4f57*/
      if ( v4 >= 0 && v6 < owningHouseIndex ) /*0x7a4f5f*/
        v7 = (char *)g_WOL_UserList.nextObject + v4; /*0x7a4f66*/
      if ( *((_DWORD *)v7 + 5) != a3 ) /*0x7a4f75*/
        goto LABEL_38; /*0x7a4f75*/
      *(_DWORD *)&v20[8] = v7 + 87; /*0x7a4f90*/
      strcpy(v7 + 87, (const char *)(a4 + 401)); /*0x7a4fa8*/
      strcpy(v7 + 46, (const char *)(a4 + 360)); /*0x7a4fcb*/
      memset(&v20[120], 0, 0x6Cu); /*0x7a4ff0*/
      if ( v4 >= 0 && v19 < g_WOL_UserList.owningHouseIndex ) /*0x7a4ff8*/
        qmemcpy(&v20[120], (char *)g_WOL_UserList.nextObject + v4, 0x6Cu); /*0x7a5009*/
      v8 = v19; /*0x7a500b*/
      qmemcpy(&v20[12], &v20[120], 0x6Cu); /*0x7a501f*/
      *(_DWORD *)&v20[44] = 0; /*0x7a5023*/
      if ( g_WOL_UserList.owningHouseIndex ) /*0x7a502b*/
      {
        if ( v4 < 0 ) /*0x7a5033*/
          v8 = 0; /*0x7a5035*/
        if ( v8 >= g_WOL_UserList.owningHouseIndex ) /*0x7a5039*/
          v8 = g_WOL_UserList.owningHouseIndex - 1; /*0x7a503b*/
        memcpy( /*0x7a5061*/
          (char *)g_WOL_UserList.nextObject + 108 * v8,
          &g_WOL_UserList.nextObject->alignmentPadding69[108 * v8 + 3],
          108 * g_WOL_UserList.owningHouseIndex - 36 * (3 * v8 + 3));
        --g_WOL_UserList.owningHouseIndex; /*0x7a5075*/
        if ( 3 * g_WOL_UserList.owningHouseIndex <= g_WOL_UserList.fallRate ) /*0x7a507f*/
        {
          v9 = g_WOL_UserList.fallRate / 2; /*0x7a5088*/
          if ( g_WOL_UserList.fallRate / 2 < 10 ) /*0x7a508d*/
            v9 = 10; /*0x7a508f*/
          if ( v9 < g_WOL_UserList.fallRate ) /*0x7a5096*/
          {
            v10 = (ObjectClass *)__2_YAPAXI_Z(108 * v9); /*0x7a50a2*/
            nextObject = g_WOL_UserList.nextObject; /*0x7a50a7*/
            v12 = v10; /*0x7a50b2*/
            if ( g_WOL_UserList.nextObject ) /*0x7a50b4*/
            {
              v13 = 108 * LOBYTE(g_WOL_UserList.owningHouseIndex); /*0x7a50c6*/
              v14 = (unsigned int)(108 * g_WOL_UserList.owningHouseIndex) >> 2; /*0x7a50c8*/
              qmemcpy(v10, g_WOL_UserList.nextObject, 4 * v14); /*0x7a50cb*/
              qmemcpy(&v10->AbstractClass + v14, &nextObject->AbstractClass + v14, v13 & 3); /*0x7a50d2*/
              nextObject = g_WOL_UserList.nextObject; /*0x7a50d4*/
            }
            __3_YAXPAX_Z(nextObject); /*0x7a50db*/
            g_WOL_UserList.nextObject = v12; /*0x7a50e0*/
            v4 = *(_DWORD *)&v20[4]; /*0x7a50e6*/
            g_WOL_UserList.fallRate = v9; /*0x7a50ed*/
          }
        }
      }
      if ( dword_B77E48 == 1 ) /*0x7a50fb*/
        break; /*0x7a50fb*/
      switch ( dword_B77E48 ) /*0x7a5104*/
      {
        case 2: /*0x7a5104*/
          InsertBuddyList(&v20[12], 1); /*0x7a510c*/
          break;
        case 3: /*0x7a5104*/
          InsertBuddyList(&v20[12], 0); /*0x7a511e*/
          break;
        case 4: /*0x7a5104*/
          FindBuddyList(&v20[12], 1); /*0x7a5130*/
          break;
        case 5: /*0x7a5104*/
          FindBuddyList(&v20[12], 0); /*0x7a5142*/
          break;
        default:
          v15 = 1; /*0x7a5149*/
          goto LABEL_37; /*0x7a5149*/
      }
LABEL_38:
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a5154*/
      v6 = v19 + 1; /*0x7a515e*/
      v4 += 108; /*0x7a515f*/
      v16 = ++v19 < g_WOL_UserList.owningHouseIndex; /*0x7a5162*/
      *(_DWORD *)&v20[4] = v4; /*0x7a5168*/
      if ( !v16 ) /*0x7a516c*/
        goto LABEL_39; /*0x7a516c*/
    }
    v15 = 0; /*0x7a50fd*/
LABEL_37:
    InsertGameSettings(&v20[12], v15); /*0x7a514b*/
    goto LABEL_38; /*0x7a514f*/
  }
LABEL_39:
  String::Assign((String *)v20, (const char *)(a4 + 401)); /*0x7a5173*/
  String::ToLower((String *)v20); /*0x7a518e*/
  v17 = *(_DWORD *)(*(_DWORD *)g_WOL_ListParser.__pad_0 /*0x7a51b2*/
                  + 4 * (dword_B768D8(v20) & ((1 << SLOBYTE(g_WOL_ListParser.HashMap_field_0x0C)) - 1)));
  if ( v17 ) /*0x7a51b7*/
  {
    while ( !(unsigned __int8)String::Compare((String *)v17, (const char **)v20) ) /*0x7a51c7*/
    {
      v17 = *(_DWORD *)(v17 + 112); /*0x7a51c9*/
      if ( !v17 ) /*0x7a51ce*/
        goto LABEL_42; /*0x7a51ce*/
    }
  }
  else
  {
LABEL_42:
    (*(void (__stdcall **)(LPVOID, char *, int, int, int **, int, _DWORD, _DWORD))(*(_DWORD *)g_UIPointerTable + 20))( /*0x7a51d0*/
      g_UIPointerTable,
      stru_B76188.__pad_20,
      g_WOL_GameConfig,
      a4 + 401,
      &off_802100,
      -1,
      0,
      0);
  }
  if ( !dword_B77DDC ) /*0x7a51fa*/
    DisplayRankingsWOL(0); /*0x7a5200*/
  DeleteAndZero((ObjectClass *)v20); /*0x7a5209*/
  return 0; /*0x7a520e*/
}



// ==== 0x007A5220  CChatEventSink::DispatchStub_20  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_20(CChatEventSink *this, int a2, const char *a3)
{
  if ( a2 >= 0 ) /*0x7a5226*/
    LeaveChannelWOL(a3); /*0x7a522c*/
  return 0; /*0x7a5233*/
}



// ==== 0x007A5240  CChatEventSink::GetTypeInfoCount  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::GetTypeInfoCount(CChatEventSink *this, int a2, int a3)
{
  wchar_t *StringCSF; // eax
  wchar_t Buffer[512]; // [esp+0h] [ebp-400h] BYREF

  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7a524d*/
  {
    StringCSF = GetStringCSF(aTxtServerError, 0, g_Str_File_wonline_cpp, 5655); /*0x7a5260*/
    swprintf(Buffer, (const size_t)&off_8240B4, StringCSF); /*0x7a5270*/
    Dialog::ShowMessage(-1, (size_t)Buffer); /*0x7a527c*/
  }
  return 0; /*0x7a5286*/
}



// ==== 0x007A5290  CChatEventSink::GetTypeInfo  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::GetTypeInfo(CChatEventSink *this, int a2, const char *a3)
{
  wchar_t *StringCSF; // eax
  wchar_t *v4; // eax
  char *v6; // ebp
  char *i; // eax
  int v8; // esi
  int v9; // [esp+24h] [ebp-50h] BYREF
  int v10; // [esp+28h] [ebp-4Ch] BYREF
  _BYTE v11[4]; // [esp+2Ch] [ebp-48h] BYREF
  char v12[4]; // [esp+30h] [ebp-44h] BYREF
  char Buffer[64]; // [esp+34h] [ebp-40h] BYREF

  dword_B77DF8 = a2; /*0x7a5299*/
  if ( a2 < 0 ) /*0x7a529e*/
    LOBYTE(stru_B77D80.HashTable_field_0x40) = 1; /*0x7a52a0*/
  if ( a2 <= -2147221387 ) /*0x7a52ac*/
  {
    if ( a2 == -2147221387 ) /*0x7a52b2*/
    {
      StringCSF = GetStringCSF((wchar_t *)aTxtBanned, 0, g_Str_File_wonline_cpp, 5758); /*0x7a5383*/
    }
    else
    {
      switch ( a2 ) /*0x7a52ce*/
      {
        case -2147221404: /*0x7a52ce*/
          StringCSF = GetStringCSF(aTxtLoginUsed, 0, g_Str_File_wonline_cpp, 5737); /*0x7a52e6*/
          break; /*0x7a52e6*/
        case -2147221403: /*0x7a52ce*/
          StringCSF = GetStringCSF(g_Str_TXT_BADPASS, 0, g_Str_File_wonline_cpp, 5742); /*0x7a531f*/
          break; /*0x7a532a*/
        case -2147221390: /*0x7a52ce*/
          StringCSF = GetStringCSF((wchar_t *)aTxtBanned, 0, g_Str_File_wonline_cpp, 5747); /*0x7a5357*/
          break; /*0x7a5357*/
        case -2147221388: /*0x7a52ce*/
          StringCSF = GetStringCSF((wchar_t *)aTxtDisabled, 0, g_Str_File_wonline_cpp, 5753); /*0x7a536d*/
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
      v4 = GetStringCSF(aTxtSkuserialmi, 0, g_Str_File_wonline_cpp, 5773); /*0x7a53d6*/
      wcscpy(&word_B77AD0, v4); /*0x7a53e1*/
      SetEvent(Handles); /*0x7a53ef*/
      return 0; /*0x7a53fa*/
    }
    if ( a2 == -2147221386 ) /*0x7a5393*/
      StringCSF = GetStringCSF((wchar_t *)aTxtSerialdup, 0, g_Str_File_wonline_cpp, 5763); /*0x7a53c0*/
    else
      StringCSF = GetStringCSF((wchar_t *)aTxtSerialunkno, 0, g_Str_File_wonline_cpp, 5768); /*0x7a53ad*/
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
    (*(void (__stdcall **)(LPVOID, int *))(*(_DWORD *)ppv + 132))(ppv, &a2); /*0x7a5457*/
    v6 = (char *)__2_YAPAXI_Z(strlen((const char *)a2) + 32); /*0x7a5477*/
    strcpy(v6, (const char *)a2); /*0x7a5493*/
    strcat(v6, a1018); /*0x7a54bb*/
    for ( i = strtok(v6, Str); i; i = strtok(0, Str) ) /*0x7a54ce*/
    {
      v8 = atol(i); /*0x7a54dd*/
      (*(void (__stdcall **)(LPVOID, int, int, int *, int *, char *, _BYTE *))(*(_DWORD *)ppv + 92))( /*0x7a54ff*/
        ppv,
        v8,
        dword_84A1C0,
        &v10,
        &v9,
        v12,
        v11);
      sprintf(Buffer, "gt%d.bmp", v8); /*0x7a550d*/
      ChatEvent::ProcessStrings((int)&g_DialogHashTable, Buffer, v10, v9, 2); /*0x7a552b*/
    }
    __3_YAXPAX_Z(v6); /*0x7a5544*/
    dword_B77EA4 = 1; /*0x7a554c*/
  }
  if ( byte_84A1B8 ) /*0x7a555f*/
    String::Assign_Alt((String *)&g_WindowManager.Array_field_0x38, a3); /*0x7a556b*/
  else
    DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.Array_field_0x38); /*0x7a5577*/
  memset(&stru_B76AC4.ambientSoundController[4], 0, 0x10Cu); /*0x7a558e*/
  memset(&g_WindowManager.__pad_EC[84], 0, 0x10Cu); /*0x7a559a*/
  BYTE2(stru_B77D80.HashTable_field_0x40) = 0; /*0x7a559d*/
  stru_B77D80.HashTable_field_0x50 = 0; /*0x7a55a4*/
  SetEvent(dword_B7368C); /*0x7a55ae*/
  QueryNATPortWOL(&stru_A8DBC0); /*0x7a55b9*/
  return 0; /*0x7a5308*/
}



// ==== 0x007A55F0  CChatEventSink::GetIDsOfNames  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::GetIDsOfNames(CChatEventSink *this, int a2, char *Source)
{
  char *v4; // esi
  unsigned __int8 *i; // eax
  size_t BufferCount[512]; // [esp+0h] [ebp-800h] BYREF

  if ( a2 < 0 ) /*0x7a55fc*/
    return 0; /*0x7a55fe*/
  v4 = _strdup(Source); /*0x7a5617*/
  for ( i = (unsigned __int8 *)strtok(v4, asc_83F328); i; i = (unsigned __int8 *)strtok(0, asc_83F328) ) /*0x7a5629*/
  {
    BulkCharToWide(BufferCount, i, -1); /*0x7a5633*/
    Dialog::ShowMessage(-1, (size_t)BufferCount); /*0x7a5644*/
  }
  free(v4); /*0x7a565d*/
  Dialog::ShowMessage(-1, (size_t)asc_830174); /*0x7a566d*/
  return 0; /*0x7a5600*/
}



// ==== 0x007A5690  CChatEventSink::FireEvent  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::FireEvent(CChatEventSink *this, int a2, _BYTE *a3)
{
  wchar_t *v3; // eax
  HWND v4; // eax
  HWND v5; // eax
  HWND v6; // eax
  wchar_t *StringCSF; // eax
  char *v9; // edi
  TagClass *v10; // eax
  HWND v11; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  char *v14; // [esp-10h] [ebp-60h]
  char Buffer[80]; // [esp+0h] [ebp-50h] BYREF

  if ( a2 >= 0 ) /*0x7a5699*/
  {
    if ( *(_DWORD *)a3 ) /*0x7a572c*/
    {
      memset(&g_WOL_LoginObject.?, 0, 0x940u); /*0x7a576f*/
      v9 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7a577b*/
      v10 = (TagClass *)dword_A8B3AC; /*0x7a5788*/
      strcpy((char *)&g_WOL_LoginObject.?, v9); /*0x7a5799*/
      g_WOL_LoginObject.attachedTag = v10; /*0x7a57a8*/
      g_WOL_LoginObject.attachedBomb = 0; /*0x7a57ad*/
      g_WOL_LoginObject.nextObject = (ObjectClass *)dword_A8B394; /*0x7a57b7*/
      g_WOL_LoginObject.ambientSoundController[0] = 1; /*0x7a57bd*/
    }
    else
    {
      v14 = CharToWideString(a3 + 52); /*0x7a573a*/
      StringCSF = GetStringCSF(aTxtCreatedChan, 0, g_Str_File_wonline_cpp, 5835); /*0x7a574c*/
      Dialog::ShowMessage(-1, (size_t)StringCSF, v14); /*0x7a5759*/
    }
    qmemcpy(&stru_B76AC4.ambientSoundController[4], a3, 0x10Cu); /*0x7a57d8*/
    dword_B77E4C = 1; /*0x7a57e0*/
    ++stru_B77D80.HashTable_field_0x50; /*0x7a57eb*/
    Debug::Log(); /*0x7a57f1*/
    if ( ppv && *(_DWORD *)a3 ) /*0x7a5802*/
    {
      memset(Buffer, 0, sizeof(Buffer)); /*0x7a5813*/
      GameConfig::BuildChecksum(Buffer); /*0x7a5819*/
      Buffer[40] = 0; /*0x7a5827*/
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 168))(ppv, Buffer); /*0x7a5830*/
    }
    v11 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7a583b*/
    if ( v11 ) /*0x7a5845*/
    {
      stru_B77D80.HashTable_field_0x48 &= ~4u; /*0x7a5850*/
      if ( !stru_B77D80.HashTable_field_0x48 ) /*0x7a5856*/
        CloseDialog(v11, 0); /*0x7a585c*/
    }
    Current = (HWND)Dialog::GetCurrent(); /*0x7a5861*/
    DlgItem = GetDlgItem(Current, 1344); /*0x7a586c*/
    if ( DlgItem ) /*0x7a5874*/
      SetFocus(DlgItem); /*0x7a5877*/
  }
  else
  {
    v3 = GetStringCSF(aTxtChancreateF, 0, g_Str_File_wonline_cpp, 5825); /*0x7a56b0*/
    Dialog::ShowMessage(-1, (size_t)v3); /*0x7a56bc*/
    dword_B77E4C = 0; /*0x7a56c9*/
    stru_B76AC4.needsRedraw = 0; /*0x7a56d3*/
    v4 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7a56da*/
    if ( v4 ) /*0x7a56e1*/
    {
      stru_B77D80.HashTable_field_0x48 &= ~4u; /*0x7a56ec*/
      if ( !stru_B77D80.HashTable_field_0x48 ) /*0x7a56f2*/
        CloseDialog(v4, 0); /*0x7a56f8*/
    }
    v5 = (HWND)Dialog::GetCurrent(); /*0x7a56fd*/
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
int __stdcall CChatEventSink::HandleChatEvent(CChatEventSink *this, int a2, unsigned __int8 *a3, char *a4)
{
  unsigned __int8 *v4; // ebp
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  void (__stdcall *v8)(HANDLE); // esi
  int v9; // ebx
  int v10; // ebp
  int v11; // eax
  int v12; // ebp
  int occupant; // edx
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
  HWND v26; // eax
  HWND v27; // esi
  HWND v29; // eax
  HWND v30; // eax
  HWND v31; // eax
  wchar_t *v32; // eax
  HWND v33; // eax
  HWND v34; // eax
  void (__stdcall *v35)(HWND, BOOL); // esi
  HWND v36; // edi
  LRESULT v37; // eax
  LRESULT v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  HWND v41; // eax
  HWND v42; // eax
  HWND v43; // eax
  HWND v44; // eax
  HWND v45; // eax
  HWND v... [46810 chars total]



// ==== 0x007A70E0  CChatEventSink::Disconnect  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::Disconnect(CChatEventSink *this, int a2, int a3, const char *a4)
{
  if ( a2 >= 0 ) /*0x7a70e6*/
    LeaveChannelWOL(a4); /*0x7a70fe*/
  else
    Debug::Log(); /*0x7a70ed*/
  return 0; /*0x7a70f7*/
}



// ==== 0x007A7110  CChatEventSink::HandleChannelJoin  this=CChatEventSink  sig=csp ====
int __stdcall CChatEventSink::HandleChannelJoin(CChatEventSink *this, int a2, int a3, const char *a4)
{
  HWND Current; // eax
  int v5; // edx
  const char *v6; // ebp
  int v7; // esi
  int v8; // ebx
  int v9; // esi
  int v10; // esi
  HashTable *v11; // esi
  int v12; // esi
  int owningHouseIndex; // eax
  char *v14; // ebp
  int v15; // esi
  int v16; // edi
  char *v17; // eax
  int v18; // eax
  void *v19; // edx
  char *v20; // eax
  char *v21; // eax
  int v22; // eax
  int v23; // esi
  wchar_t *v24; // eax
  u_long v25; // edx
  int v26; // eax
  BombClass *attachedBomb; // ecx
  int v28; // eax
  int v29; // eax
  int v30; // ebx
  int v31; // ebp
  char *v32; // eax
  char *v33; // eax
  HWND v34; // eax
  ObjectClass *PlayerProfile; // eax
  int v36; // eax
  int PlayerSide; // eax
  int PlayerOption; // eax
  int v40; // [esp+74h] [ebp-154h]
  void *vtable2; // [esp+80h] [ebp-148h]
  int PlayerColor; // [esp+84h] [ebp-144h]
  int v43; // [esp+84h] [ebp-144h]
  int v44; // [esp+88h] [ebp-140h]
  ObjectClass *v45; // [esp+94h] [ebp-134h]
  ObjectClass v46; // [esp+9Ch] [ebp-12Ch] BYREF
  char v47[128]; // [esp+148h] [ebp-80h] BYREF

  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7a7121*/
  {
    memset(byte_B78620, 0, sizeof(byte_B78620)); /*0x7a7133*/
    unknown_libname_73(&v46); /*0x7a7139*/
    if ( a2 >= 0 ) /*0x7a7145*/
    {
      Current = (HWND)Dialog::GetCurrent(); /*0x7a7159*/
      SendDlgItemMessageA(Current, 1342, 0x184u, 0, 0); /*0x7a715f*/
      g_WOL_UserList.owningHouseIndex = 0; /*0x7a7165*/
      v46.? = 0; /*0x7a7172*/
      v46.occupant = 0; /*0x7a7178*/
      for ( BYTE2(v46.?) = 0; a4; a4 = (const char *)*((_DWORD *)a4 + 8) ) /*0x7a7181*/
      {
        v5 = *((_DWORD *)a4 + 5); /*0x7a7193*/
        ++v46.occupant; /*0x7a7196*/
        if ( !v5 || strlen(a4 + 87) ) /*0x7a71a1*/
        {
          if ( g_UIPointerTable ) /*0x7a71d8*/
          {
            if ( v5 ) /*0x7a71e0*/
            {
              v6 = a4 + 87; /*0x7a71e6*/
              if ( strlen(a4 + 87) ) /*0x7a71f0*/
              {
                String::Assign((String *)&v46.?, v6); /*0x7a71fc*/
                String::ToLower((String *)&v46.?); /*0x7a7205*/
                v7 = *(_DWORD *)(*(_DWORD *)g_WOL_ListParser.__pad_0 /*0x7a7229*/
                               + 4 * (dword_B768D8(&v46.?) & ((1 << SLOBYTE(g_WOL_ListParser.HashMap_field_0x0C)) - 1)));
                if ( v7 ) /*0x7a722e*/
                {
                  while ( !(unsigned __int8)String::Compare((String *)v7, (const char **)&v46.?) ) /*0x7a723e*/
                  {
                    v7 = *(_DWORD *)(v7 + 112); /*0x7a7240*/
                    if ( !v7 ) /*0x7a7245*/
                      goto LABEL_13; /*0x7a7245*/
                  }
                }
                else
                {
LABEL_13:
                  (*(void (__stdcall **)(LPVOID, char *, int, const char *, int **, int, _DWORD, _DWORD))(*(_DWORD *)g_UIPointerTable + 20))( /*0x7a7247*/
                    g_UIPointerTable,
                    stru_B76188.__pad_20,
                    g_WOL_GameConfig,
                    v6,
                    &off_802100,
                    -1,
                    0,
                    0);
                }
                DeleteAndZero((ObjectClass *)&v46.?); /*0x7a726e*/
              }
            }
          }
        }
        else
        {
          ++dword_B77DDC; /*0x7a71b9*/
          (*(void (__stdcall **)(LPVOID, _DWORD))(*(_DWORD *)ppv + 176))(ppv, *((_DWORD *)a4 + 5)); /*0x7a71c6*/
        }
        v46.? = (int)v47; /*0x7a7289*/
        v8 = *(_DWORD *)a4; /*0x7a728f*/
        strcpy(v47, a4 + 36); /*0x7a72a2*/
        qmemcpy(&v46.ambientSoundController[1], a4, 0x6Cu); /*0x7a72bb*/
        v46.customSound_controller[4] = 0; /*0x7a72bf*/
        if ( stru_B76AC4.ambientSoundController[4] ) /*0x7a72c7*/
        {
          DynamicClass::Insert( /*0x7a7346*/
            (DynamicClass *)&g_WOL_UserList.owningHouseIndex,
            &v46.ambientSoundController[1],
            g_WOL_UserList.owningHouseIndex);
        }
        else
        {
          switch ( dword_B77E48 ) /*0x7a72d1*/
          {
            case 1: /*0x7a72d1*/
              InsertGameSettings((char *)&v46.ambientSoundController[1], 0); /*0x7a72d9*/
              break;
            case 2: /*0x7a72d1*/
              InsertBuddyList((const char *)&v46.ambientSoundController[1], 1); /*0x7a72eb*/
              break;
            case 3: /*0x7a72d1*/
              InsertBuddyList((const char *)&v46.ambientSoundController[1], 0); /*0x7a72fd*/
              break;
            case 4: /*0x7a72d1*/
              FindBuddyList(&v46.ambientSoundController[1], 1); /*0x7a730f*/
              break;
            case 5: /*0x7a72d1*/
              FindBuddyList(&v46.ambientSoundController[1], 0); /*0x7a7321*/
              break;
            default:
              InsertGameSettings((char *)&v46.ambientSoundController[1], 1); /*0x7a732e*/
              break;
          }
        }
        if ( (v8 & 1) != 0 ) /*0x7a734e*/
          BYTE2(v46.?) = 1; /*0x7a7350*/
        String::Assign_Bool((String *)&v46, a4 + 36); /*0x7a735a*/
        String::ToLower((String *)&v46); /*0x7a7363*/
        if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x7a7378*/
        {
          v9 = *(_DWORD *)(stru_B765EC.lastLayer /*0x7a7399*/
                         + 4 * (dword_B76698(&v46) & ((1 << SLOBYTE(stru_B765EC.location[1])) - 1)));
          if ( v9 ) /*0x7a739e*/
          {
            while ( !(unsigned __int8)String::Compare((String *)v9, (const char **)&v46) ) /*0x7a73ae*/
            {
              v9 = *(_DWORD *)(v9 + 8); /*0x7a73b0*/
              if ( !v9 ) /*0x7a73b5*/
                goto LABEL_35; /*0x7a73b5*/
            }
          }
          else
          {
LABEL_35:
            StringVector::Insert((StringVector *)&g_WebBrowserConfig.?, (const char **)&v46, 0); /*0x7a73b7*/
          }
        }
        v10 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 /*0x7a73e7*/
                        + 4 * (dword_B76548(&v46) & ((1 << SLOBYTE(g_WOL_ConnectionPool.HashMap_field_0x0C)) - 1)));
        if ( v10 ) /*0x7a73ec*/
        {
          while ( !(unsigned __int8)String::Compare((String *)v10, (const char **)&v46) ) /*0x7a73fc*/
          {
            v10 = *(_DWORD *)(v10 + 8); /*0x7a73fe*/
            if ( !v10 ) /*0x7a7403*/
              goto LABEL_39; /*0x7a7403*/
          }
        }
        else
        {
LABEL_39:
          StringVector::Insert((StringVector *)&stru_B765EC.?, (const char **)&v46, 0); /*0x7a7405*/
        }
        v11 = g_WOL_HashTable; /*0x7a7416*/
        v12 = *(_DWORD *)(*(_DWORD *)v11->__pad_0 /*0x7a7432*/
                        + 4
                        * (((int (__thiscall *)(ObjectClass *))g_WOL_HashTable->HashTable_field_0x18)(&v46)
                         & ((1 << v11->HashTable_field_0x0C) - 1)));
        if ( v12 ) /*0x7a7437*/
        {
          while ( !(unsigned __int8)String::Compare((String *)v12, (const char **)&v46) ) /*0x7a7447*/
          {
            v12 = *(_DWORD *)(v12 + 112); /*0x7a744d*/
            if ( !v12 ) /*0x7a7452*/
              goto LABEL_43; /*0x7a7452*/
          }
        }
        else
        {
LABEL_43:
          if ( v46.occupant < 100 ) /*0x7a7459*/
          {
            String::Assign_Bool((String *)&v46, a4 + 36); /*0x7a746e*/
            String::ToLower((String *)&v46); /*0x7a7477*/
            strcat(byte_B78620, String::GetOrEmpty((String *)&v46)); /*0x7a74a6*/
            strcat(byte_B78620, asc_8318B8); /*0x7a74d1*/
            ++v46.?; /*0x7a74df*/
          }
        }
        if ( v46.? > 20 ) /*0x7a74e8*/
        {
          (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(*(_DWORD *)g_UIPointerTable + 20))( /*0x7a7516*/
            g_UIPointerTable,
            stru_B76188.__pad_20,
            g_WOL_GameConfig,
            byte_B78620,
            g_NetworkRematchState & 0xFFFF00,
            -1,
            0,
            0);
          (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(_DWORD *)g_UIPointerTable + 56))( /*0x7a753f*/
            g_UIPointerTable,
            stru_B76188.__pad_20,
            g_WOL_GameConfig,
            byte_B78620,
            g_NetworkRematchState & 0xFFFF00);
          v46.? = 0; /*0x7a754e*/
          memset(byte_B78620, 0, sizeof(byte_B78620)); /*0x7a7556*/
        }
        if ( stru_B76AC4.ambientSoundController[4] && !dword_B77E4C ) /*0x7a756c*/
        {
          String::Assign((String *)&v46.?, a4 + 36); /*0x7a7581*/
          owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a7586*/
          v14 = 0; /*0x7a758b*/
          v15 = 0; /*0x7a758d*/
          if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x7a7591*/
          {
LABEL_56:
            v18 = -1; /*0x7a75d0*/
          }
          else
          {
            v16 = 0; /*0x7a7593*/
            while ( 1 ) /*0x7a7595*/
            {
              if ( v16 >= 0 && v15 < owningHouseIndex ) /*0x7a759b*/
                v14 = (char *)g_WOL_UserList.nextObject + v16; /*0x7a75a2*/
              v17 = String::GetOrEmpty_Alt((String *)&v46.?); /*0x7a75ad*/
              if ( !_strcmpi(v17, v14 + 36) ) /*0x7a75b3*/
                break; /*0x7a75b3*/
              owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a75c3*/
              ++v15; /*0x7a75c8*/
              v16 += 108; /*0x7a75c9*/
              if ( v15 >= g_WOL_UserList.owningHouseIndex ) /*0x7a75ce*/
                goto LABEL_56; /*0x7a75ce*/
            }
            v18 = v15; /*0x7a7662*/
          }
          v19 = (void *)(148 * v18 + 12021312); /*0x7a75e1*/
          memset(v19, 0, 0x94u); /*0x7a75ec*/
          strcpy((char *)v19, a4 + 36); /*0x7a7602*/
          v20 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7a7610*/
          if ( _strcmpi((char *)a4 + 36, v20) ) /*0x7a7617*/
          {
            if ( dword_A8DA84 == 1 ) /*0x7a762e*/
            {
              v21 = CharToWideString((_BYTE *)a4 + 36); /*0x7a7632*/
              wcscpy((wchar_t *)&stru_A8D600.Network_field_0x10, (const wchar_t *)v21); /*0x7a763d*/
            }
            v22 = __2_YAPAXI_Z(0x85u); /*0x7a764a*/
            v23 = v22; /*0x7a764f*/
            if ( v22 ) /*0x7a7656*/
              Waypoint::InitInvalid((Waypoint *)(v22 + 40)); /*0x7a765b*/
            else
              v23 = 0; /*0x7a7669*/
            memset((void *)v23, 0, 0x84u); /*0x7a7675*/
            *(_BYTE *)(v23 + 132) = 0; /*0x7a767b*/
            String::Assign((String *)&v46.nextObject, a4 + 36); /*0x7a767c*/
            CharStringToWide((wchar_t **)&v46.owningHouseIndex, (const char **)&v46.nextObject); /*0x7a7689*/
            DeleteAndZero((ObjectClass *)&v46.nextObject); /*0x7a7692*/
            v24 = WideString::GetOrEmpty((wchar_t **)&v46.owningHouseIndex); /*0x7a769b*/
            wcscpy((wchar_t *)v23, v24); /*0x7a76a2*/
            v25 = *((_DWORD *)a4 + 6); /*0x7a76a7*/
            v46.? = 0; /*0x7a76af*/
            v46.? = 0; /*0x7a76b7*/
            LOWORD(v46.?) = 0; /*0x7a76bc*/
            v26 = ntohl(v25); /*0x7a76c1*/
            HIBYTE(v46.?) = v26; /*0x7a76ca*/
            LOBYTE(v46.?) = HIBYTE(v26); /*0x7a76d6*/
            BYTE2(v46.?) = BYTE1(v26); /*0x7a76da*/
            BYTE1(v46.?) = BYTE2(v26); /*0x7a76ef*/
            NetworkAddress::Assign((NetworkAddress *)&v46.attachedTag, &v46.?, (int)&v46.?, 0); /*0x7a76f3*/
            attachedBomb = v46.attachedBomb; /*0x7a7701*/
            *(_DWORD *)(v23 + 40) = v46.attachedTag; /*0x7a7705*/
            v28 = v46.ambientSoundController[0]; /*0x7a7707*/
            *(_DWORD *)(v23 + 44) = attachedBomb; /*0x7a770b*/
            *(_DWORD *)(v23 + 48) = v28; /*0x7a7710*/
            SessionClass::SetPlayerOption((int *)v23, -2); /*0x7a7713*/
            SessionClass::SetPlayerColor((int *)v23, -2); /*0x7a771c*/
            SessionClass::SetOption((int *)v23, -2); /*0x7a7725*/
            SessionClass::SetOption2((int *)v23, -2); /*0x7a772e*/
            if ( dword_A8DA84 < dword_A8DA7C /*0x7a776a*/
              || (byte_A8DA81 || !dword_A8DA7C)
              && dword_A8DA88 > 0
              && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA74 + 8))(
                   &stru_A8DA74,
                   dword_A8DA7C + dword_A8DA88,
                   0) )
            {
              v29 = dword_A8DA84++; /*0x7a7777*/
              dword_A8DA78[v29] = v23; /*0x7a7786*/
            }
            DeleteAndZero::Alt((DeleteAndZero *)&v46.owningHouseIndex); /*0x7a778d*/
          }
          DeleteAndZero((ObjectClass *)&v46.?); /*0x7a7796*/
        }
      }
      if ( strlen(byte_B78620) ) /*0x7a77b9*/
      {
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(*(_DWORD *)g_UIPointerTable + 20))( /*0x7a77f1*/
          g_UIPointerTable,
          stru_B76188.__pad_20,
          g_WOL_GameConfig,
          byte_B78620,
          g_NetworkRematchState & 0xFFFF00,
          -1,
          0,
          0);
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(_DWORD *)g_UIPointerTable + 56))( /*0x7a781a*/
          g_UIPointerTable,
          stru_B76188.__pad_20,
          g_WOL_GameConfig,
          byte_B78620,
          g_NetworkRematchState & 0xFFFF00);
      }
      if ( stru_B76AC4.ambientSoundController[4] ) /*0x7a7824*/
      {
        if ( !BYTE2(v46.?) ) /*0x7a7830*/
        {
          v30 = 0; /*0x7a7837*/
          if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a783b*/
          {
            v31 = 0; /*0x7a783d*/
            while ( 1 ) /*0x7a7841*/
            {
              if ( v31 >= 0 && v30 < g_WOL_UserList.owningHouseIndex ) /*0x7a7849*/
              {
                qmemcpy(&v46.ambientSoundController[1], (char *)g_WOL_UserList.nextObject + v31, 0x6Cu); /*0x7a785c*/
                v32 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7a7863*/
                if ( !_strcmpi((char *)&v46.customSound, v32) ) /*0x7a786e*/
                  break; /*0x7a786e*/
              }
              ++v30; /*0x7a787f*/
              v31 += 108; /*0x7a7880*/
              if ( v30 >= g_WOL_UserList.owningHouseIndex ) /*0x7a7885*/
                goto LABEL_85; /*0x7a7885*/
            }
            LeaveChannelWOL((const char *)&v46.ambientSoundController[1]); /*0x7a788d*/
          }
        }
LABEL_85:
        if ( stru_B76AC4.ambientSoundController[4] ) /*0x7a7899*/
        {
          if ( !dword_B77E4C && g_WOL_UserList.owningHouseIndex == 1 ) /*0x7a78af*/
          {
            v33 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7a78b6*/
            if ( !_strcmpi((char *)a4 + 36, v33) ) /*0x7a78c7*/
              LeaveChannelWOL(a4); /*0x7a78d5*/
          }
          if ( stru_B76AC4.ambientSoundController[4] ) /*0x7a78e1*/
          {
            dword_AC1178 = 1; /*0x7a78ec*/
            if ( !dword_B77E4C ) /*0x7a78f8*/
            {
              v34 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x7a78ff*/
              EnablePlayerSlotControls(v34, 1u); /*0x7a7908*/
            }
            Game::ResetReadyStates(); /*0x7a790d*/
            v46.owningHouseIndex = 0; /*0x7a7916*/
            LOBYTE(v46.fallRate) = 0; /*0x7a791e*/
            ReadRegistryOptionsWOL((ObjectClass *)&v46.owningHouseIndex); /*0x7a7923*/
            ComPtr::Constructor((ComPtr *)&v46.?); /*0x7a792c*/
            v46.? = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x7a793a*/
            if ( (unsigned __int8)Flag::IsNot2((Flag *)&v46.owningHouseIndex) ) /*0x7a793e*/
            {
              PlayerProfile = LoadPlayerProfile((ObjectClass *)&v46.?, (const char **)&g_WindowManager.__pad_EC[684]); /*0x7a7950*/
              ComPtr::Set((ComPtr *)&v46.?, (int)PlayerProfile->?); /*0x7a795d*/
              v46.? = &rc_ptr<PlayerProfile>::`vftable'; /*0x7a7966*/
              ComPtr::Release((ComPtr *)&v46.?); /*0x7a796a*/
            }
            else
            {
              ComPtr::Set((ComPtr *)&v46.?, stru_B75E48.ComPtr_field_0x04); /*0x7a797c*/
            }
            SessionClass::AssignSide((SessionClass *)&dword_A8B238, *(_DWORD *)(v46.? + 28), 0); /*0x7a7990*/
            SessionClass::AssignColor((SessionClass *)&dword_A8B238, *(_DWORD *)(v46.? + 32), 0); /*0x7a79a4*/
            v36 = dword_A8B244; /*0x7a79b0*/
            if ( !g_MenuStateFlags ) /*0x7a79b5*/
              goto LABEL_105; /*0x7a79b5*/
            if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x7a79c4*/
            {
              SessionClass::AssignSide((SessionClass *)&dword_A8B238, -3, 0); /*0x7a79cf*/
              SessionClass::AssignColor((SessionClass *)&dword_A8B238, -2, 0); /*0x7a79dd*/
              v36 = dword_A8B244; /*0x7a79e2*/
            }
            if ( !g_MenuStateFlags ) /*0x7a79ef*/
            {
LABEL_105:
              if ( v36 != 3 && v36 != 1 && v36 != 2 && Session::GetPlayerOption((Session *)&dword_A8B238) == -3 ) /*0x7a7a0d*/
              {
                if ( dword_A8DA84 ) /*0x7a7a18*/
                {
                  PlayerSide = SessionClass::GetPlayerSide((int *)*dword_A8DA78); /*0x7a7a21*/
                  SessionClass::AssignSide((SessionClass *)&dword_A8B238, PlayerSide, 0); /*0x7a7a2c*/
                  PlayerColor = SessionClass::GetPlayerColor((SessionClass *)*dword_A8DA78); /*0x7a7a40*/
                  SessionClass::AssignColor((SessionClass *)&dword_A8B238, PlayerColor, 0); /*0x7a7a41*/
                }
                else
                {
                  SessionClass::AssignSide((SessionClass *)&dword_A8B238, -2, 0); /*0x7a7a4a*/
                  SessionClass::AssignColor((SessionClass *)&dword_A8B238, -2, 0); /*0x7a7a58*/
                }
              }
            }
            Network::GetAddress((Network *)&stru_A8DBC0, &v46.?, (int)&v46.?, (_WORD *)&v46.? + 1); /*0x7a7a71*/
            v44 = dword_A8E228; /*0x7a7a8a*/
            v43 = (unsigned __int16)dword_ABFEC8; /*0x7a7a8b*/
            vtable2 = v46.?; /*0x7a7a8c*/
            v40 = Session::GetPlayerColor((Session *)&dword_A8B238); /*0x7a7a9b*/
            PlayerOption = Session::GetPlayerOption((Session *)&dword_A8B238); /*0x7a7aa1*/
            sprintf(v47, "R%d,%d,%d,%d,%x,%x,%x", PlayerOption, v40, -2, -2, vtable2, v43, v44); /*0x7a7ab4*/
            Debug::Log(); /*0x7a7ac6*/
            if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a7ad5*/
            {
              qmemcpy(&v46.ambientSoundController[1], g_WOL_UserList.nextObject, 0x6Cu); /*0x7a7af3*/
              (*(void (__stdcall **)(LPVOID, int *, char *))(*(_DWORD *)ppv + 56))( /*0x7a7afd*/
                ppv,
                &v46.ambientSoundController[1],
                v47);
            }
            v46.? = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x7a7b04*/
            ComPtr::Release((ComPtr *)&v46.?); /*0x7a7b08*/
          }
        }
      }
      if ( (dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2) /*0x7a7b2c*/
        && !stru_B76AC4.ambientSoundController[4]
        && !RequestMatchWOL(v45) )
      {
        SetEvent(hEvent); /*0x7a7b3b*/
      }
      DisplayRankingsWOL(0); /*0x7a7b45*/
    }
    DeleteAndZero(&v46); /*0x7a7b4e*/
  }
  return 0; /*0x7a7b53*/
}



// ==== 0x007A7B60  CChatEventSink::DispatchStub_23  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_23(
        CChatEventSink *this,
        int a2,
        int a3,
        int a4,
        wchar_t *a5)
{
  Network *v5; // edi
  int owningHouseIndex; // esi
  int v8; // ebp
  int v9; // ebx
  int v10; // edi
  HWND v11; // eax
  HWND v12; // eax
  char *v13; // edi
  int v14; // eax
  int v15; // eax
  ObjectClass *nextObject; // edx
  Network *v17; // [esp-Ch] [ebp-A0h]
  char v18; // [esp+7h] [ebp-8Dh]
  String v19; // [esp+8h] [ebp-8Ch] BYREF
  int v20; // [esp+10h] [ebp-84h]
  int v21; // [esp+14h] [ebp-80h]
  int v22; // [esp+18h] [ebp-7Ch]
  int v23; // [esp+20h] [ebp-74h]
  char v24[108]; // [esp+28h] [ebp-6Ch] BYREF

  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a7b67*/
  v18 = 1; /*0x7a7b71*/
  v22 = g_WOL_UserList.owningHouseIndex; /*0x7a7b76*/
  v21 = 0; /*0x7a7b7a*/
  dword_B76478 = Timer::GetTicks(); /*0x7a7b87*/
  dword_B7647C = v23; /*0x7a7b90*/
  dword_B76480 = 0; /*0x7a7b9e*/
  if ( byte_B77E27 ) /*0x7a7ba4*/
    return 0; /*0x7a7ba6*/
  v17 = v5; /*0x7a7bbb*/
  stru_B77D80.HashTable_field_0x4C = 1; /*0x7a7bbe*/
  v20 = a4; /*0x7a7bc8*/
  if ( a4 ) /*0x7a7bcc*/
  {
    while ( 1 ) /*0x7a7be3*/
    {
      ++v21; /*0x7a7be3*/
      String::Assign((String *)&v19.m_3[1], (const char *)(v20 + 36)); /*0x7a7be7*/
      String::ToLower((String *)&v19.m_3[1]); /*0x7a7bf0*/
      v8 = 0; /*0x7a7bf5*/
      if ( owningHouseIndex <= 0 ) /*0x7a7bf9*/
        break; /*0x7a7bf9*/
      v9 = 0; /*0x7a7bff*/
      while ( 1 ) /*0x7a7c01*/
      {
        if ( v9 >= 0 && v8 < g_WOL_UserList.owningHouseIndex ) /*0x7a7c0b*/
        {
          qmemcpy(v24, (char *)g_WOL_UserList.nextObject + v9, sizeof(v24)); /*0x7a7c1f*/
          owningHouseIndex = v22; /*0x7a7c21*/
        }
        String::Assign(&v19, &v24[36]); /*0x7a7c2e*/
        String::ToLower(&v19); /*0x7a7c37*/
        if ( (unsigned __int8)String::Compare((String *)&v19.m_3[1], (const char **)&v19) ) /*0x7a7c45*/
          break; /*0x7a7c45*/
        DeleteAndZero((ObjectClass *)&v19); /*0x7a7c52*/
        ++v8; /*0x7a7c57*/
        v9 += 108; /*0x7a7c58*/
        if ( v8 >= owningHouseIndex ) /*0x7a7c5d*/
          goto LABEL_15; /*0x7a7c5d*/
      }
      DeleteAndZero((ObjectClass *)&v19); /*0x7a7c61*/
      if ( v8 >= owningHouseIndex ) /*0x7a7c68*/
        break; /*0x7a7c68*/
      v20 = *(_DWORD *)(v20 + 32); /*0x7a7c75*/
      v10 = v20; /*0x7a7c72*/
      DeleteAndZero((ObjectClass *)&v19.m_3[1]); /*0x7a7c79*/
      if ( !v10 ) /*0x7a7c80*/
        goto LABEL_16; /*0x7a7c80*/
    }
LABEL_15:
    v18 = 0; /*0x7a7c87*/
    DeleteAndZero((ObjectClass *)&v19.m_3[1]); /*0x7a7c90*/
  }
LABEL_16:
  if ( v21 == owningHouseIndex && v18 ) /*0x7a7ca1*/
  {
    if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x7a7cd9*/
    {
      v11 = (HWND)Dialog::FindByHandle((Dialog *)0x117); /*0x7a7ce0*/
      CloseDialog(v11, 0); /*0x7a7ce9*/
    }
    v12 = (HWND)Dialog::FindByHandle((Dialog *)0xCF); /*0x7a7cf3*/
    CloseDialog(v12, 0); /*0x7a7cfc*/
    *(_DWORD *)&g_WOL_BuddyList.__pad_20[4] = a5; /*0x7a7d14*/
    *(_DWORD *)dword_B77D6C = g_NetworkRematchState; /*0x7a7d1e*/
    dword_B73814 = 8960; /*0x7a7d27*/
    *(_DWORD *)g_WOL_BuddyList.__pad_14 = stru_B76AC4.customSound_controller[4]; /*0x7a7d31*/
    if ( *(_DWORD *)&dword_A8B238 == 4 && (stru_B76AC4.health & 0x100) != 0 ) /*0x7a7d47*/
      *(_DWORD *)g_WOL_BuddyList.__pad_14 = 2; /*0x7a7d49*/
    v13 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7a7d59*/
    v14 = g_WOL_UserList.owningHouseIndex; /*0x7a7d66*/
    strcpy((char *)&g_WebBrowserConfig.location[2], v13); /*0x7a7d77*/
    if ( v14 > 0 && g_WOL_UserList.nextObject ) /*0x7a7d8b*/
      strcpy(byte_B779E0, (const char *)&g_WOL_UserList.nextObject->occupant); /*0x7a7da7*/
    *(_DWORD *)dword_B77788 = time(0); /*0x7a7dbc*/
    Debug::Log(); /*0x7a7dc1*/
    if ( a3 ) /*0x7a7dd2*/
      dword_B77DD4 = (unsigned __int8)*(_DWORD *)(a3 + 32); /*0x7a7ddd*/
    byte_B77E26 = 0; /*0x7a7dea*/
    byte_B77E27 = 1; /*0x7a7df1*/
    Network::SyncPlayerList(v17); /*0x7a7df8*/
    g_NetworkLobbyState = 2; /*0x7a7e03*/
    Debug::Log(); /*0x7a7e0f*/
    v15 = 0; /*0x7a7e1d*/
    if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a7e21*/
    {
      nextObject = g_WOL_UserList.nextObject; /*0x7a7e23*/
      while ( 1 ) /*0x7a7e29*/
      {
        if ( v15 >= 0 && v15 < g_WOL_UserList.owningHouseIndex ) /*0x7a7e2f*/
          qmemcpy(&g_WebBrowserConfig.occupant, nextObject, 0x6Cu); /*0x7a7e3d*/
        if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x7a7e46*/
          break; /*0x7a7e46*/
        ++v15; /*0x7a7e48*/
        nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x7a7e49*/
        if ( v15 >= g_WOL_UserList.owningHouseIndex ) /*0x7a7e4e*/
          goto LABEL_41; /*0x7a7e4e*/
      }
      if ( &g_WebBrowserConfig != (ObjectClass *)-36 ) /*0x7a7e59*/
        BulkCharToWide(word_A8E258, (unsigned __int8 *)&g_WebBrowserConfig.ambientSoundController[3], -1); /*0x7a7e67*/
    }
LABEL_41:
    dword_A8E2AC = -1; /*0x7a7e6c*/
    dword_A8E04C = CComObject_CChatEventSink___ATL::DispatchConnectionPairs(&stru_A8DBC0.onBridge); /*0x7a7e82*/
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
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_22(
        CChatEventSink *this,
        int a2,
        int a3,
        int a4,
        char *Source)
{
  ObjectClass *v5; // edi
  char *v6; // esi
  bool v7; // bl
  char *Flagged; // esi
  char *v9; // eax
  wchar_t *v10; // eax
  int *v11; // eax
  SessionClass *v12; // esi
  HWND Current; // ebp
  Skirmish *v15; // eax
  int v16; // edx
  bool v17; // bl
  HWND DlgItem; // eax
  HWND v19; // eax
  HWND v20; // eax
  HWND v21; // eax
  char v22; // [esp+7h] [ebp-B9h]
  DeleteAndZero v23; // [esp+8h] [ebp-B8h] BYREF
  int Buffer[16]; // [esp+14h] [ebp-ACh] BYREF
  _BYTE v25[108]; // [esp+54h] [ebp-6Ch] BYREF

  if ( (byte_B78600 & 1) == 0 ) /*0x7a7ead*/
  {
    byte_B78600 |= 1u; /*0x7a7eb9*/
    dword_B78608 = Timer::GetTicks(); /*0x7a7ec9*/
    atexit(nullsub_265); /*0x7a7ece*/
  }
  if ( a2 < 0 ) /*0x7a7ee3*/
    return 0; /*0x7a7ee3*/
  v6 = _strdup(Source); /*0x7a7ef6*/
  v7 = SetupNetworkLobbyDialog(v6, (void *)(a4 + 36)); /*0x7a7f0d*/
  free(v6); /*0x7a7f0f*/
  if ( BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7a7f1e*/
    return 0; /*0x7a7f1e*/
  if ( g_NetworkLobbyState ) /*0x7a7f2b*/
    return 0; /*0x7a7f2b*/
  if ( *Source == 90 ) /*0x7a7f35*/
    return 0; /*0x7a7f35*/
  if ( *Source == 87 ) /*0x7a7f3d*/
    return 0; /*0x7a7f3d*/
  v22 = 0; /*0x7a7f43*/
  Flagged = GameSettings::FindFlagged(); /*0x7a7f4d*/
  if ( Flagged ) /*0x7a7f51*/
  {
    v9 = String::GetOrEmpty_Alt((String *)&g_WindowManager.__pad_EC[684]); /*0x7a7f58*/
    if ( !_strcmpi(Flagged + 36, v9) ) /*0x7a7f62*/
      return 0; /*0x7a7f6c*/
  }
  if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x7a7f84*/
  {
    CharStringToWide((wchar_t **)&v23, (const char **)&g_WindowManager.__pad_EC[684]); /*0x7a7f93*/
    v10 = WideString::GetOrEmpty((wchar_t **)&v23); /*0x7a7f9c*/
    v11 = (int *)Player::FindByName((Player *)v10); /*0x7a7fa3*/
    v12 = (SessionClass *)v11; /*0x7a7fa8*/
    if ( v11 /*0x7a7fed*/
      && SessionClass::GetPlayerSide(v11) >= 0
      && SessionClass::GetPlayerColor(v12) >= 0
      && *Source >= 48
      && *Source <= 57
      && g_WOL_UserList.owningHouseIndex == 2 )
    {
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 60))(ppv, g_INI_Key_A1); /*0x7a7ffc*/
    }
    DeleteAndZero::Alt(&v23); /*0x7a8003*/
    return 0; /*0x7a8014*/
  }
  Current = (HWND)Dialog::GetCurrent(); /*0x7a801c*/
  if ( !g_UIControlState ) /*0x7a8025*/
  {
    if ( v7 ) /*0x7a802d*/
    {
      v22 = 1; /*0x7a8033*/
      dword_B78608 = Timer::GetTicks(); /*0x7a8046*/
      dword_B7860C = v23.DeleteAndZero_field_0x04; /*0x7a804b*/
      Debug::Log(); /*0x7a8051*/
    }
    if ( Timer::GetTicks() - dword_B78608 > 900 ) /*0x7a806e*/
    {
      v15 = g_UIControlState; /*0x7a8070*/
      if ( (!g_UIControlState || !*(_DWORD *)g_UIControlState) && !byte_B77E2C ) /*0x7a8085*/
      {
        if ( !byte_A8B8E0[0] /*0x7a80a8*/
          || (LOBYTE(v15) = dword_A8BB08, FindAndValidateMap(byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, (int)v15, 0)) )
        {
          dword_B78608 = Timer::GetTicks(); /*0x7a80d2*/
          dword_B7860C = v23.DeleteAndZero_field_0x04; /*0x7a80d7*/
        }
        else
        {
          v22 = 1; /*0x7a80b6*/
          Debug::Log(); /*0x7a80bb*/
        }
      }
    }
    if ( !(unsigned __int8)IsRandMap::Sed2((IsRandMap *)&dword_A8B238) ) /*0x7a80e2*/
    {
      LOBYTE(v16) = dword_A8BB08; /*0x7a80ef*/
      if ( !FindAndValidateMap(byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, v16, 0) /*0x7a813d*/
        || (RawFileClass::Construct((RawFileClass *)Buffer, (int)byte_A8B8E0),
            v17 = (unsigned __int8)FileClass::Open((RawFileClass *)Buffer, 0) != 0,
            RawFileClass::Dtor((RawFileClass *)Buffer),
            v17) )
      {
        if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x7a814c*/
        {
          if ( stru_B76AC4.customSound_controller[4] /*0x7a8165*/
            || (HIBYTE(v23.DeleteAndZero_field_0x08) = BYTE1(stru_B76AC4.health) & 1, (stru_B76AC4.health & 0x100) != 0) )
          {
            if ( *(_DWORD *)(*dword_A8DA78 + 119) ) /*0x7a816f*/
            {
              *(_DWORD *)(*dword_A8DA78 + 119) = 0; /*0x7a817b*/
              Network::SendOptionsGame(aA0); /*0x7a8182*/
              DlgItem = GetDlgItem(Current, 1439); /*0x7a818f*/
              EnableWindow(DlgItem, 0); /*0x7a8196*/
            }
          }
        }
      }
      else
      {
        v22 = 0; /*0x7a813f*/
      }
      if ( Dialog::GetCurrentType() == 201 ) /*0x7a81a6*/
      {
        v19 = (HWND)Dialog::GetCurrent(); /*0x7a81ac*/
        InvalidateRect(v19, 0, 0); /*0x7a81b2*/
      }
    }
    if ( v22 ) /*0x7a81be*/
    {
      sprintf((char *const)Buffer, "P%s", byte_A8B8E0); /*0x7a81cf*/
      if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a81de*/
        qmemcpy(v25, g_WOL_UserList.nextObject, sizeof(v25)); /*0x7a81ef*/
      (*(void (__stdcall **)(LPVOID, _BYTE *, int *))(*(_DWORD *)ppv + 56))(ppv, v25, Buffer); /*0x7a8203*/
      Debug::Log(); /*0x7a820b*/
      Event_Play(v5); /*0x7a8213*/
    }
    return 0; /*0x7a8224*/
  }
  v20 = GetDlgItem(Current, 1823); /*0x7a8233*/
  if ( v20 ) /*0x7a823d*/
    ShowWindow(v20, 0); /*0x7a8242*/
  v21 = GetDlgItem(Current, 1128); /*0x7a824c*/
  ShowWindow(v21, 1); /*0x7a824f*/
  return 0; /*0x7a7fbd*/
}



// ==== 0x007A8260  CChatEventSink::HandleLobbyPlayerUpdate  this=CChatEventSink  sig=csp ====
int __stdcall CChatEventSink::HandleLobbyPlayerUpdate(CChatEventSink *this, int a2, int a3, int a4)
{
  int owningHouseIndex; // eax
  char *v5; // ebx
  int v6; // esi
  int v7; // edi
  char *v8; // eax
  __int16 v9; // bx
  int v10; // edi
  char **v11; // esi
  char *v12; // eax
  int v14; // edi
  wchar_t **v15; // esi
  char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  char *v19; // eax
  char *v20; // eax
  char *v21; // eax
  int v22; // esi
  _DWORD *v23; // eax
  int v24; // edx
  int v25; // ecx
  char *v26; // eax
  unsigned int v27; // esi
  char *v28; // eax
  int v29; // ecx
  HWND v30; // ebp
  int v31; // esi
  int PlayerSide; // eax
  int *v33; // ebx
  int v34; // edx
  int v35; // eax
  char *v36; // eax
  int v37; // eax
  char *v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // esi
  int v42; // eax
  unsigned int v43; // ecx
  int v44; // eax
  _DWORD *v45; // edx
  _DWORD *v46; // eax
  int v47; // eax
  int v48; // edi
  int v49; // esi
  b... [22709 chars total]



// ==== 0x007A8DA0  CChatEventSink::DispatchStub_16  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_16(
        CChatEventSink *this,
        int a2,
        int a3,
        const char *a4,
        char *String1)
{
  char *v6; // edi
  const char *v7; // esi
  bool v8; // bl
  int v9; // edi
  char *v10; // esi
  wchar_t *v11; // eax

  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) && a2 >= 0 ) /*0x7a8db5*/
  {
    if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x7a8dcd*/
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
      String::Assign((String *)&String1, String1); /*0x7a8df8*/
      v7 = a4; /*0x7a8dfd*/
      if ( a4 ) /*0x7a8e03*/
      {
        if ( (*a4 & 1) != 0 ) /*0x7a8e0c*/
        {
          v8 = 1; /*0x7a8e0e*/
        }
        else if ( Dialog::FindByHandle((Dialog *)0xC2) ) /*0x7a8e17*/
        {
          v8 = 1; /*0x7a8e20*/
        }
        else if ( Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7a8e29*/
        {
          v8 = 1; /*0x7a8e32*/
        }
        else
        {
          v8 = g_WOL_BuddyList.DynamicVector_field_0x10 != 0; /*0x7a8e3d*/
        }
      }
      else
      {
        v8 = 0; /*0x7a8e05*/
      }
      DeleteAndZero((ObjectClass *)&String1); /*0x7a8e44*/
      if ( v8 && IsBuddyOrIgnoreWOL(v7) ) /*0x7a8e50*/
      {
        String::Assign((String *)&String1, v6); /*0x7a8e5e*/
        CharStringToWide((wchar_t **)&a2, (const char **)&String1); /*0x7a8e6b*/
        DeleteAndZero((ObjectClass *)&String1); /*0x7a8e74*/
        v9 = 61680; /*0x7a8e7b*/
        if ( (*v7 & 1) != 0 ) /*0x7a8e83*/
          v9 = 16776960; /*0x7a8e85*/
        v10 = (char *)(v7 + 36); /*0x7a8e8b*/
        if ( _strcmpi(unk_A8B380, v10) ) /*0x7a8e94*/
        {
          v11 = WideString::GetOrEmpty((wchar_t **)&a2); /*0x7a8ea4*/
          Dialog::ShowMessage(v9, (size_t)aHsS_1, v10, v11); /*0x7a8eb1*/
        }
        DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x7a8ebd*/
      }
    }
  }
  return 0; /*0x7a8de7*/
}



// ==== 0x007A8ED0  CChatEventSink::DispatchStub_40  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_40(
        CChatEventSink *this,
        int a2,
        int a3,
        const char *a4,
        wchar_t *String)
{
  const char *v6; // esi
  bool v7; // zf
  void *DynamicVector_field_0x10; // eax
  int v9; // edi
  char *v10; // esi
  wchar_t *v11; // eax

  if ( BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7a8ed8*/
    return 0; /*0x7a8eda*/
  if ( a2 < 0 ) /*0x7a8ee6*/
    return 0; /*0x7a8ee8*/
  WideString::Assign((wchar_t **)&a2, String); /*0x7a8ef7*/
  v6 = a4; /*0x7a8efc*/
  if ( a4 ) /*0x7a8f02*/
  {
    if ( (*a4 & 1) != 0 || Dialog::FindByHandle((Dialog *)0xC2) || Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7a8f1c*/
      goto LABEL_21; /*0x7a8f1c*/
    v7 = (unsigned __int8)WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7a8f2e*/
    DynamicVector_field_0x10 = g_WOL_BuddyList.DynamicVector_field_0x10; /*0x7a8f30*/
    if ( v7 ) /*0x7a8f35*/
      DynamicVector_field_0x10 = (void *)dword_B779DC; /*0x7a8f37*/
    if ( DynamicVector_field_0x10 ) /*0x7a8f43*/
    {
LABEL_21:
      if ( IsBuddyOrIgnoreWOL(v6) ) /*0x7a8f56*/
      {
        v9 = 61680; /*0x7a8f71*/
        if ( (*v6 & 1) != 0 ) /*0x7a8f79*/
          v9 = 16776960; /*0x7a8f7b*/
        v10 = (char *)(v6 + 36); /*0x7a8f81*/
        if ( _strcmpi(unk_A8B380, v10) ) /*0x7a8f8a*/
        {
          v11 = WideString::GetOrEmpty((wchar_t **)&a2); /*0x7a8f9a*/
          Dialog::ShowMessage(v9, (size_t)aHsS_1, v10, v11); /*0x7a8fa7*/
        }
      }
    }
  }
  DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x7a8fb3*/
  return 0; /*0x7a8edc*/
}



// ==== 0x007A8FC0  CChatEventSink::DispatchStub_17  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_17(
        CChatEventSink *this,
        int a2,
        const char *a3,
        char *String1)
{
  char *v5; // edi
  const char *v6; // esi
  bool v7; // bl
  int v8; // edi
  char *v9; // esi
  wchar_t *v10; // eax

  if ( BYTE1(stru_B77D80.HashTable_field_0x40) || a2 < 0 ) /*0x7a8fd5*/
    return 0; /*0x7a90fc*/
  if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x7a8fed*/
  {
    v5 = String1; /*0x7a9027*/
    String::Assign((String *)&String1, String1); /*0x7a9031*/
    v6 = a3; /*0x7a9036*/
    if ( a3 ) /*0x7a903c*/
    {
      if ( (*a3 & 1) != 0 ) /*0x7a9045*/
      {
        v7 = 1; /*0x7a9047*/
      }
      else if ( Dialog::FindByHandle((Dialog *)0xC2) ) /*0x7a9050*/
      {
        v7 = 1; /*0x7a9059*/
      }
      else if ( Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7a9062*/
      {
        v7 = 1; /*0x7a906b*/
      }
      else
      {
        v7 = g_WOL_BuddyList.DynamicVector_field_0x10 != 0; /*0x7a9076*/
      }
    }
    else
    {
      v7 = 0; /*0x7a903e*/
    }
    DeleteAndZero((ObjectClass *)&String1); /*0x7a907d*/
    if ( v7 && IsBuddyOrIgnoreWOL(v6) ) /*0x7a9089*/
    {
      String::Assign((String *)&String1, v5); /*0x7a9097*/
      CharStringToWide((wchar_t **)&a2, (const char **)&String1); /*0x7a90a4*/
      DeleteAndZero((ObjectClass *)&String1); /*0x7a90ad*/
      v8 = 16744576; /*0x7a90b4*/
      if ( (*v6 & 1) != 0 ) /*0x7a90bc*/
        v8 = 16776960; /*0x7a90be*/
      v9 = (char *)(v6 + 36); /*0x7a90c4*/
      if ( _strcmpi(unk_A8B380, v9) ) /*0x7a90cd*/
      {
        v10 = WideString::GetOrEmpty((wchar_t **)&a2); /*0x7a90dd*/
        Dialog::ShowMessage(v8, (size_t)aHsS_2, v9, v10); /*0x7a90ea*/
      }
      DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x7a90f6*/
    }
    return 0; /*0x7a90f6*/
  }
  if ( (*a3 & 1) != 0 ) /*0x7a8ff6*/
    HandleWOLMatchMessage(String1, 1); /*0x7a8ffe*/
  else
    Debug::Log(); /*0x7a9018*/
  return 0; /*0x7a9003*/
}



// ==== 0x007A9110  CChatEventSink::DispatchStub_41  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_41(
        CChatEventSink *this,
        int a2,
        const char *a3,
        wchar_t *String)
{
  const char *v5; // esi
  bool v6; // zf
  void *DynamicVector_field_0x10; // eax
  int v8; // edi
  char *v9; // esi
  wchar_t *v10; // eax

  if ( BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7a9118*/
    return 0; /*0x7a911a*/
  if ( a2 < 0 ) /*0x7a9126*/
    return 0; /*0x7a9128*/
  WideString::Assign((wchar_t **)&a2, String); /*0x7a9137*/
  v5 = a3; /*0x7a913c*/
  if ( a3 ) /*0x7a9142*/
  {
    if ( (*a3 & 1) != 0 || Dialog::FindByHandle((Dialog *)0xC2) || Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7a915c*/
      goto LABEL_21; /*0x7a915c*/
    v6 = (unsigned __int8)WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7a916e*/
    DynamicVector_field_0x10 = g_WOL_BuddyList.DynamicVector_field_0x10; /*0x7a9170*/
    if ( v6 ) /*0x7a9175*/
      DynamicVector_field_0x10 = (void *)dword_B779DC; /*0x7a9177*/
    if ( DynamicVector_field_0x10 ) /*0x7a9183*/
    {
LABEL_21:
      if ( IsBuddyOrIgnoreWOL(v5) ) /*0x7a9196*/
      {
        v8 = 16744576; /*0x7a91b1*/
        if ( (*v5 & 1) != 0 ) /*0x7a91b9*/
          v8 = 16776960; /*0x7a91bb*/
        v9 = (char *)(v5 + 36); /*0x7a91c1*/
        if ( _strcmpi(unk_A8B380, v9) ) /*0x7a91ca*/
        {
          v10 = WideString::GetOrEmpty((wchar_t **)&a2); /*0x7a91da*/
          Dialog::ShowMessage(v8, (size_t)aHsS_2, v9, v10); /*0x7a91e7*/
        }
      }
    }
  }
  DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x7a91f3*/
  return 0; /*0x7a911c*/
}



// ==== 0x007A9200  CChatEventSink::DispatchStub_28  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_28(
        CChatEventSink *this,
        int a2,
        const char *a3,
        const char *a4)
{
  bool v5; // zf
  void *DynamicVector_field_0x10; // eax
  char v7; // al
  wchar_t *v8; // eax
  int Type; // esi
  int v10; // eax
  int v11; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v13; // eax
  Dialog *Current; // esi
  wchar_t *v15; // eax
  wchar_t *v16; // eax
  HWND Dialog; // eax
  wchar_t *v18; // eax
  HWND DlgItem; // eax
  String *ChatCommand; // ebx
  HWND v21; // esi
  char *v22; // eax
  int v23; // esi
  wchar_t *v24; // eax
  int v25; // [esp-Ch] [ebp-22Ch]
  DeleteAndZero v26; // [esp+Ch] [ebp-214h] BYREF
  int v27; // [esp+18h] [ebp-208h]
  wchar_t v28[256]; // [esp+20h] [ebp-200h] BYREF

  if ( a2 < 0 ) /*0x7a920d*/
    return 0; /*0x7a920f*/
  String::Assign((String *)&v26.DeleteAndZero_field_0x04, a4); /*0x7a9227*/
  CharStringToWide((wchar_t **)&v26, (const char **)&v26.DeleteAndZero_field_0x04); /*0x7a9234*/
  DeleteAndZero((ObjectClass *)&v26.DeleteAndZero_field_0x04); /*0x7a923d*/
  if ( !a3 ) /*0x7a924b*/
    goto LABEL_12; /*0x7a924b*/
  if ( (*a3 & 1) == 0 && !Dialog::FindByHandle((Dialog *)0xC2) && !Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7a9266*/
  {
    v5 = (unsigned __int8)WideString::IsASCII((const wchar_t **)&v26) == 0; /*0x7a9278*/
    DynamicVector_field_0x10 = g_WOL_BuddyList.DynamicVector_field_0x10; /*0x7a927a*/
    if ( v5 ) /*0x7a927f*/
      DynamicVector_field_0x10 = (void *)dword_B779DC; /*0x7a9281*/
    if ( !DynamicVector_field_0x10 ) /*0x7a928d*/
      goto LABEL_12; /*0x7a928d*/
  }
  if ( IsBuddyOrIgnoreWOL(a3) ) /*0x7a92a6*/
  {
    v7 = BYTE1(stru_B77D80.HashTable_field_0x40); /*0x7a92d7*/
    strcpy(byte_B77E30, a3 + 36); /*0x7a92e8*/
    if ( v7 ) /*0x7a92f3*/
    {
      v8 = WideString::GetOrEmpty((wchar_t **)&v26); /*0x7a92fd*/
      swprintf(v28, (const size_t)g_Str_Trace___hs_, (const wchar_t *const)a3 + 18, v8); /*0x7a930e*/
      Type = BuildingAnim::GetType(); /*0x7a9321*/
      LOWORD(v10) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x7a9331*/
      MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, v28, Type, 22, v10, 0); /*0x7a9348*/
      LOWORD(v11) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x7a9360*/
      v25 = v11; /*0x7a9365*/
      StringCSF = GetStringCSF(aTxtHowToReply, 0, g_Str_File_wonline_cpp, 8066); /*0x7a937a*/
      MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, StringCSF, Type, 22, v25, 0); /*0x7a9389*/
      MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x7a9395*/
      v13 = WideString::GetOrEmpty((wchar_t **)&v26); /*0x7a939e*/
      Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v13); /*0x7a93b1*/
      dword_B76478 = Timer::GetTicks(); /*0x7a93cb*/
      dword_B7647C = v27; /*0x7a93d0*/
      dword_B76480 = 300; /*0x7a93d6*/
    }
    else
    {
      Current = (Dialog *)Dialog::GetCurrent(); /*0x7a93ec*/
      if ( Current ) /*0x7a93f0*/
      {
        while ( !GetDlgItem((HWND)Current, 1343) ) /*0x7a93fc*/
        {
          if ( GetDlgItem((HWND)Current, 1461) ) /*0x7a9404*/
          {
            v15 = WideString::GetOrEmpty((wchar_t **)&v26); /*0x7a940e*/
            Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v15); /*0x7a9420*/
          }
          Current = (Dialog *)Dialog::FindByPtr(Current); /*0x7a942f*/
          if ( !Current ) /*0x7a9433*/
            goto LABEL_22; /*0x7a9433*/
        }
        v16 = WideString::GetOrEmpty((wchar_t **)&v26); /*0x7a943b*/
        Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v16); /*0x7a944e*/
      }
      else
      {
LABEL_22:
        ReleaseCapture(); /*0x7a945a*/
        Screen::Capture(1, 0, (int)(a3 + 36), (int)a3); /*0x7a9464*/
        Dialog = (HWND)CreateDialog(0x11Eu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))ChatDialog::DlgProc, 0); /*0x7a9475*/
        Current = (Dialog *)Dialog; /*0x7a947a*/
        if ( Dialog ) /*0x7a947e*/
        {
          SetFocus(Dialog); /*0x7a9481*/
          v18 = WideString::GetOrEmpty((wchar_t **)&v26); /*0x7a948b*/
          Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v18); /*0x7a949e*/
          ShowWindow((HWND)Current, 1); /*0x7a94a9*/
        }
      }
      DlgItem = GetDlgItem((HWND)Current, 1343); /*0x7a94b5*/
      ChatCommand = ExtractChatCommand((String *)&v26.DeleteAndZero_field_0x04, DlgItem); /*0x7a94c8*/
      v21 = GetDlgItem((HWND)Current, 1816); /*0x7a94ce*/
      v22 = String::GetOrEmpty_Alt(ChatCommand); /*0x7a94d0*/
      SendMessageA(v21, 0x4B4u, 0, (LPARAM)v22); /*0x7a94de*/
      DeleteAndZero((ObjectClass *)&v26.DeleteAndZero_field_0x04); /*0x7a94e8*/
    }
    if ( byte_B77E40 ) /*0x7a94f4*/
    {
      v23 = *(_DWORD *)ppv; /*0x7a9500*/
      v24 = WideString::GetOrEmpty((wchar_t **)&stru_B7622C.?); /*0x7a9502*/
      (*(void (__stdcall **)(LPVOID, const char *, wchar_t *))(v23 + 236))(ppv, a3, v24); /*0x7a9510*/
    }
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1708), 0x2000, 1.0, 0); /*0x7a952d*/
    DeleteAndZero::Alt(&v26); /*0x7a9536*/
    return 0; /*0x7a953e*/
  }
  else
  {
LABEL_12:
    DeleteAndZero::Alt(&v26); /*0x7a92b3*/
    return 0; /*0x7a92b8*/
  }
}



// ==== 0x007A9550  CChatEventSink::DispatchStub_44  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_44(CChatEventSink *this, int a2, int a3, wchar_t *String)
{
  int v5; // edi
  bool v6; // bl
  bool v7; // zf
  void *DynamicVector_field_0x10; // eax
  int Type; // ebx
  int v10; // eax
  Dialog *Current; // esi
  HWND DlgItem; // eax
  String *ChatCommand; // ebx
  HWND v14; // esi
  char *v15; // eax
  int v16; // esi
  wchar_t *v17; // eax
  ObjectClass v18[3]; // [esp+Ch] [ebp-204h] BYREF

  if ( a2 < 0 ) /*0x7a955f*/
    return 0; /*0x7a9563*/
  WideString::Assign((wchar_t **)v18, String); /*0x7a957b*/
  v5 = a3; /*0x7a9580*/
  if ( a3 ) /*0x7a9589*/
  {
    if ( (*(_BYTE *)a3 & 1) != 0 ) /*0x7a9592*/
    {
      v6 = 1; /*0x7a9594*/
    }
    else if ( Dialog::FindByHandle((Dialog *)0xC2) ) /*0x7a959d*/
    {
      v6 = 1; /*0x7a95a6*/
    }
    else if ( Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7a95af*/
    {
      v6 = 1; /*0x7a95b8*/
    }
    else
    {
      v7 = (unsigned __int8)WideString::IsASCII((const wchar_t **)v18) == 0; /*0x7a95c5*/
      DynamicVector_field_0x10 = g_WOL_BuddyList.DynamicVector_field_0x10; /*0x7a95c7*/
      if ( v7 ) /*0x7a95cc*/
        DynamicVector_field_0x10 = (void *)dword_B779DC; /*0x7a95ce*/
      v6 = DynamicVector_field_0x10 != 0; /*0x7a95d5*/
    }
  }
  else
  {
    v6 = 0; /*0x7a958b*/
  }
  DeleteAndZero::Alt((DeleteAndZero *)v18); /*0x7a95dc*/
  if ( !v6 ) /*0x7a95e3*/
    return 0; /*0x7a95e7*/
  if ( !IsBuddyOrIgnoreWOL((const char *)a3) ) /*0x7a95f5*/
    return 0; /*0x7a9600*/
  if ( BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7a9614*/
  {
    swprintf((wchar_t *const)&v18[0].?, (const size_t)g_Str_Trace___hs_, (const wchar_t *const)(a3 + 36), String); /*0x7a9625*/
    Type = BuildingAnim::GetType(); /*0x7a9638*/
    LOWORD(v10) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x7a9648*/
    MessageListClass::AddMessage( /*0x7a965f*/
      (MessageListClass *)&stru_A8BB1C.__pad_87[189],
      0,
      0,
      (wchar_t *)&v18[0].?,
      Type,
      22,
      v10,
      0);
    MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x7a966b*/
    Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String); /*0x7a967d*/
  }
  else
  {
    Current = (Dialog *)Dialog::GetCurrent(); /*0x7a9695*/
    if ( Current ) /*0x7a9699*/
    {
      while ( !GetDlgItem((HWND)Current, 1343) ) /*0x7a96a5*/
      {
        if ( GetDlgItem((HWND)Current, 1461) ) /*0x7a96ad*/
          Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String); /*0x7a96cb*/
        Current = (Dialog *)Dialog::FindByPtr(Current); /*0x7a96da*/
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
      Current = (Dialog *)CreateDialog( /*0x7a9726*/
                            0x11Eu,
                            (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))ChatDialog::DlgProc,
                            0);
      SetFocus((HWND)Current); /*0x7a9729*/
      Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String); /*0x7a9746*/
      ShowWindow((HWND)Current, 1); /*0x7a9751*/
    }
    DlgItem = GetDlgItem((HWND)Current, 1343); /*0x7a975d*/
    ChatCommand = ExtractChatCommand((String *)v18, DlgItem); /*0x7a9770*/
    v14 = GetDlgItem((HWND)Current, 1816); /*0x7a9776*/
    v15 = String::GetOrEmpty_Alt(ChatCommand); /*0x7a9778*/
    SendMessageA(v14, 0x4B4u, 0, (LPARAM)v15); /*0x7a9786*/
    DeleteAndZero(v18); /*0x7a9790*/
    v5 = a3; /*0x7a9795*/
  }
  if ( byte_B77E40 ) /*0x7a97a3*/
  {
    v16 = *(_DWORD *)ppv; /*0x7a97ab*/
    v17 = WideString::GetOrEmpty((wchar_t **)&stru_B7622C.?); /*0x7a97b2*/
    (*(void (__stdcall **)(LPVOID, int, wchar_t *))(v16 + 236))(ppv, v5, v17); /*0x7a97c0*/
  }
  PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1708), 0x2000, 1.0, 0); /*0x7a97dd*/
  return 0; /*0x7a9561*/
}



// ==== 0x007A9800  CChatEventSink::DispatchStub_27  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_27(CChatEventSink *this, int a2)
{
  wchar_t *StringCSF; // eax
  HWND Current; // eax
  HWND v5; // esi
  int Type; // esi
  int v7; // eax
  wchar_t *v8; // [esp-4h] [ebp-10Ch]
  wchar_t *v9; // [esp-4h] [ebp-10Ch]
  const wchar_t *v10; // [esp+0h] [ebp-108h]
  wchar_t Buffer[128]; // [esp+8h] [ebp-100h] BYREF

  if ( !a2 ) /*0x7a980e*/
  {
    StringCSF = GetStringCSF(aTxtPagesent, 0, g_Str_File_wonline_cpp, 8189); /*0x7a9821*/
    Dialog::ShowStatusText(-1, (size_t)StringCSF); /*0x7a982d*/
    return 0; /*0x7a983f*/
  }
  if ( a2 == 262452 ) /*0x7a9847*/
  {
    v8 = GetStringCSF(aTxtPagedisable, 0, g_Str_File_wonline_cpp, 8193); /*0x7a9863*/
    swprintf(Buffer, (const size_t)v8, v10); /*0x7a9865*/
  }
  else
  {
    if ( a2 == 262451 ) /*0x7a986c*/
      v9 = GetStringCSF(aTxtPageusergon, 0, g_Str_File_wonline_cpp, 8195); /*0x7a9888*/
    else
      v9 = GetStringCSF(aTxtPagefailed, 0, g_Str_File_wonline_cpp, 8197); /*0x7a98a2*/
    swprintf(Buffer, (const size_t)v9, v10); /*0x7a988a*/
  }
  Current = (HWND)Dialog::GetCurrent(); /*0x7a98b0*/
  v5 = Current; /*0x7a98b5*/
  if ( !Current ) /*0x7a98b9*/
    goto LABEL_19; /*0x7a98b9*/
  if ( GetDlgItem(Current, 1343) ) /*0x7a98c7*/
  {
    Dialog::ShowMessage(-1, (size_t)Buffer); /*0x7a98d9*/
    return 0; /*0x7a98eb*/
  }
  if ( GetDlgItem(v5, 1461) ) /*0x7a98f4*/
  {
    Dialog::ShowStatusText(-1, (size_t)Buffer); /*0x7a9906*/
    return 0; /*0x7a990e*/
  }
  else
  {
LABEL_19:
    if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x7a9920*/
    {
      Type = BuildingAnim::GetType(); /*0x7a9934*/
      LOWORD(v7) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x7a9944*/
      MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, Buffer, Type, 22, v7, 0); /*0x7a995b*/
    }
    return 0; /*0x7a9961*/
  }
}



// ==== 0x007A9970  CChatEventSink::HandleUserSearch  this=CChatEventSink  sig=csp ====
int __stdcall CChatEventSink::HandleUserSearch(CChatEventSink *this, int a2, const char *a3)
{
  HWND v3; // esi
  int v4; // esi
  _DWORD *v5; // esi
  const char *v6; // esi
  const char *v7; // ebx
  int v8; // eax
  int v9; // ebp
  int referenceCount; // eax
  int v11; // ebx
  char *v12; // eax
  String *v13; // eax
  String *v14; // ebp
  int v15; // edx
  int v16; // eax
  int occupant; // esi
  int *v18; // ebx
  int *v19; // edi
  int v20; // ebp
  int v21; // esi
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // esi
  int v29; // edi
  _DWORD *v30; // edi
  int v31; // ebp
  double v32; // st7
  int *v33; // ebx
  int v34; // esi
  int *v35; // edi
  int v36; // ebp
  int v37; // esi
  int v38; // eax
  int v39; // edx
  int v40; // eax
  int v41; // esi
  String *v42; // eax
  String *v43; // esi
  int v44; // edx
  int v45; // eax
  int v46; // esi
  int *v47; // ebx
  int *v48; // edi
  int v49; // ebp
  int v50; // esi
  int v51; // edx
  int v52; // ecx
  int v53; // eax
  ObjectClass *v54; // eax
  int v55; // esi
  int v56; // ebp
  AnimClass *v57; // eax
  AnimClass *parachute; // esi
  AnimClass *v59; // ebx
  HWND DlgItem; // eax
  HWND v62; // ebp
  int v63; // eax
  int v64; // esi
  wchar_t **v65; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v67; // eax
  int v68; // eax
  int v69; // esi
  wchar_t **v70; // eax
  char *v71; // esi
  wchar_t *v72; // eax
  char *v73; // edi
  wchar_t *v74; // eax
  wchar_t *v75; // eax
  HWND Current; // eax
  HWND v77; // esi
  int Type; // esi
  int v79; // eax
  wchar_t *v80; // [esp-8h] [ebp-1E4h]
  wchar_t *v81; // [esp-8h] [ebp-1E4h]
  wchar_t *v82; // [esp-4h] [ebp-1E0h]
  char *v83; // [esp-4h] [ebp-1E0h]
  char *v84; // [esp-4h] [ebp-1E0h]
  char *v85; // [esp-4h] [ebp-1E0h]
  char *v86; // [esp-4h] [ebp-1E0h]
  DeleteAndZero v87; // [esp+10h] [ebp-1CCh] BYREF
  bool v88; // [esp+1Fh] [ebp-1BDh]
  const char *v89; // [esp+20h] [ebp-1BCh]
  char v90[64]; // [esp+24h] [ebp-1B8h] BYREF
  wchar_t v91[134]; // [esp+64h] [ebp-178h] BYREF
  char v92[108]; // [esp+170h] [ebp-6Ch] BYREF

  v3 = (HWND)Dialog::FindByHandle((Dialog *)0xCF); /*0x7a998b*/
  *(_DWORD *)v87.__pad_0 = 0; /*0x7a998d*/
  if ( !String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x7a9998*/
  {
    if ( v3 ) /*0x7aa25f*/
    {
      if ( (HWND)Dialog::GetCurrent() != v3 ) /*0x7aa26c*/
        return 0; /*0x7aa26c*/
      unknown_libname_74(&v87); /*0x7aa276*/
      DlgItem = GetDlgItem(v3, 1480); /*0x7aa281*/
      v62 = DlgItem; /*0x7aa287*/
      if ( a3 && DlgItem ) /*0x7aa29a*/
      {
        if ( !*(_DWORD *)a3 && !strncmp(a3 + 52, g_Str_Lob_41_, strlen(g_Str_Lob_41_)) ) /*0x7aa2c2*/
        {
          v63 = atol(&a3[strlen(g_Str_Lob_41_) + 52]); /*0x7aa2e0*/
          v64 = v63 / 8; /*0x7aa2f2*/
          WideString::Reassign((void **)&v87, *(wchar_t **)&g_WindowManager.__pad_EC[4 * (v63 % 8) + 648]); /*0x7aa30e*/
          if ( v64 ) /*0x7aa315*/
          {
            WideString::Append2((wchar_t **)&v87, (wchar_t *)asc_82083C); /*0x7aa324*/
            v65 = FormatWideString((wchar_t **)&v87.DeleteAndZero_field_0x04, (const wchar_t *)(v64 + 1)); /*0x7aa330*/
            WideString::Append((wchar_t **)&v87, (const wchar_t **)v65); /*0x7aa33a*/
            DeleteAndZero::Alt((DeleteAndZero *)&v87.DeleteAndZero_field_0x04); /*0x7aa343*/
          }
          goto LABEL_123; /*0x7aa348*/
        }
        StringCSF = (wchar_t *)CharToWideString((_BYTE *)a3 + 52); /*0x7aa34d*/
      }
      else
      {
        switch ( a2 ) /*0x7aa360*/
        {
          case 262448: /*0x7aa360*/
            StringCSF = GetStringCSF(aTxtFindpageNot_0, 0, g_Str_File_wonline_cpp, 8261); /*0x7aa367*/
            break;
          case 262449: /*0x7aa360*/
            StringCSF = GetStringCSF((wchar_t *)aTxtFindpageNot, 0, g_Str_File_wonline_cpp, 8263); /*0x7aa381*/
            break;
          case 262450: /*0x7aa360*/
            StringCSF = GetStringCSF((wchar_t *)aTxtFindpageFin, 0, g_Str_File_wonline_cpp, 8265); /*0x7aa39b*/
            break;
          default:
            StringCSF = GetStringCSF(aTxtFindpageNot_0, 0, g_Str_File_wonline_cpp, 8267); /*0x7aa3ae*/
            break;
        }
      }
      WideString::Reassign((void **)&v87, StringCSF); /*0x7aa3b8*/
LABEL_123:
      v67 = WideString::GetOrEmpty_Alt((wchar_t **)&v87); /*0x7aa3bd*/
      SendMessageA(v62, 0x4B2u, 0, (LPARAM)v67); /*0x7aa3cf*/
      DeleteAndZero::Alt(&v87); /*0x7aa3d9*/
      return 0; /*0x7aa3ea*/
    }
    if ( a3 ) /*0x7aa3f6*/
    {
      if ( *(_DWORD *)a3 || strncmp(a3 + 52, g_Str_Lob_41_, strlen(g_Str_Lob_41_)) ) /*0x7aa41d*/
      {
        v73 = CharToWideString(&g_WOL_LoginObject.?); /*0x7aa4f9*/
        v83 = CharToWideString((_BYTE *)a3 + 52); /*0x7aa500*/
        v74 = GetStringCSF(aTxtUserFound, 0, g_Str_File_wonline_cpp, 8288); /*0x7aa513*/
        swprintf(v91, (const size_t)v74, (const wchar_t *const)v73, v83); /*0x7aa51e*/
      }
      else
      {
        v68 = atol(&a3[strlen(g_Str_Lob_41_) + 52]); /*0x7aa43f*/
        v69 = v68 / 8; /*0x7aa451*/
        WideString::Assign((wchar_t **)&v87, *(wchar_t **)&g_WindowManager.__pad_EC[4 * (v68 % 8) + 648]); /*0x7aa46d*/
        if ( v69 ) /*0x7aa474*/
        {
          WideString::Append2((wchar_t **)&v87, (wchar_t *)asc_82083C); /*0x7aa47f*/
          v70 = FormatWideString((wchar_t **)&v87.DeleteAndZero_field_0x04, (const wchar_t *)(v69 + 1)); /*0x7aa48b*/
          WideString::Append((wchar_t **)&v87, (const wchar_t **)v70); /*0x7aa495*/
          DeleteAndZero::Alt((DeleteAndZero *)&v87.DeleteAndZero_field_0x04); /*0x7aa49e*/
        }
        v71 = CharToWideString(&g_WOL_LoginObject.?); /*0x7aa4b1*/
        v82 = WideString::GetOrEmpty((wchar_t **)&v87); /*0x7aa4b8*/
        v72 = GetStringCSF(aTxtUserFound, 0, g_Str_File_wonline_cpp, 8286); /*0x7aa4cb*/
        swprintf(v91, (const size_t)v72, (const wchar_t *const)v71, v82); /*0x7aa4d6*/
        DeleteAndZero::Alt(&v87); /*0x7aa4e2*/
      }
    }
    else
    {
      switch ( a2 ) /*0x7aa537*/
      {
        case 262448: /*0x7aa537*/
          v84 = CharToWideString(&g_WOL_LoginObject.?); /*0x7aa543*/
          v75 = GetStringCSF(aTxtUserNotOnli, 0, g_Str_File_wonline_cpp, 8295); /*0x7aa549*/
          break;
        case 262449: /*0x7aa537*/
          v85 = CharToWideString(&g_WOL_LoginObject.?); /*0x7aa55c*/
          v80 = GetStringCSF(aTxtUserNotInCh, 0, g_Str_File_wonline_cpp, 8297); /*0x7aa573*/
          swprintf(v91, (const size_t)v80, (const wchar_t *const)v85); /*0x7aa579*/
          goto LABEL_139; /*0x7aa579*/
        case 262450: /*0x7aa537*/
          v86 = CharToWideString(&g_WOL_LoginObject.?); /*0x7aa58c*/
          v81 = GetStringCSF(aTxtUserFindDis, 0, g_Str_File_wonline_cpp, 8299); /*0x7aa5a7*/
          swprintf(v91, (const size_t)v81, (const wchar_t *const)v86); /*0x7aa5a9*/
          goto LABEL_139; /*0x7aa5a9*/
        default:
          v84 = CharToWideString(&g_WOL_LoginObject.?); /*0x7aa5b0*/
          v75 = GetStringCSF(aTxtUserNotOnli, 0, g_Str_File_wonline_cpp, 8301); /*0x7aa5c2*/
          break;
      }
      swprintf(v91, (const size_t)v75, (const wchar_t *const)v84); /*0x7aa5cd*/
    }
LABEL_139:
    Current = (HWND)Dialog::GetCurrent(); /*0x7aa5d5*/
    v77 = Current; /*0x7aa5da*/
    if ( Current ) /*0x7aa5de*/
    {
      if ( GetDlgItem(Current, 1343) ) /*0x7aa5ec*/
      {
        Dialog::ShowMessage(-1, (size_t)v91); /*0x7aa5fe*/
        return 0; /*0x7aa612*/
      }
      if ( GetDlgItem(v77, 1461) ) /*0x7aa61b*/
      {
        Dialog::ShowStatusText(-1, (size_t)v91); /*0x7aa62c*/
        return 0; /*0x7aa640*/
      }
    }
    if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x7aa648*/
    {
      Type = BuildingAnim::GetType(); /*0x7aa65c*/
      LOWORD(v79) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x7aa66b*/
      MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, v91, Type, 22, v79, 0); /*0x7aa680*/
    }
    LOBYTE(g_WOL_LoginObject.?) = 0; /*0x7aa685*/
    return 0; /*0x7aa685*/
  }
  if ( stru_B76900.lastLayer ) /*0x7a99a4*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag /*0x7a99c6*/
                   + 4
                   * (((int (__thiscall *)(char *))stru_B76900.lineTrailer)(&g_WindowManager.__pad_14[16])
                    & ((1 << SLOBYTE(stru_B76900.location[0])) - 1)));
    if ( v4 ) /*0x7a99cb*/
    {
      while ( !(unsigned __int8)String::Compare((String *)v4, (const char **)&g_WindowManager.__pad_14[16]) ) /*0x7a99db*/
      {
        v4 = *(_DWORD *)(v4 + 8); /*0x7a99dd*/
        if ( !v4 ) /*0x7a99e2*/
          goto LABEL_9; /*0x7a99e2*/
      }
      v5 = (_DWORD *)(v4 + 4); /*0x7a99ea*/
      if ( v5 ) /*0x7a99ef*/
        *(_DWORD *)v87.__pad_0 = *v5; /*0x7a99f3*/
    }
  }
LABEL_9:
  v6 = a3; /*0x7a99f7*/
  v90[0] = 0; /*0x7a99fe*/
  if ( a3 ) /*0x7a9a05*/
  {
    if ( *(_DWORD *)a3 ) /*0x7a9a0b*/
    {
      *(_DWORD *)v87.__pad_0 = 5; /*0x7a9a7d*/
      v89 = a3 + 52; /*0x7a9a85*/
      String::Assign((String *)&v87.DeleteAndZero_field_0x04, a3 + 52); /*0x7a9a89*/
      v9 = 0; /*0x7a9a99*/
      memset(v91, 0, sizeof(v91)); /*0x7a9a9b*/
      referenceCount = stru_B76AC4.?; /*0x7a9a9d*/
      if ( stru_B76AC4.? <= 0 ) /*0x7a9aa4*/
      {
LABEL_21:
        memset(v91, 0, sizeof(v91)); /*0x7a9afd*/
      }
      else
      {
        v11 = 0; /*0x7a9aa6*/
        while ( 1 ) /*0x7a9aa8*/
        {
          if ( v11 >= 0 && v9 < referenceCount ) /*0x7a9aae*/
            qmemcpy(v91, (const void *)(v11 + stru_B76AC4.occupant), sizeof(v91)); /*0x7a9ac2*/
          v12 = String::GetOrEmpty_Alt((String *)&v87.DeleteAndZero_field_0x04); /*0x7a9ac8*/
          if ( !_strcmpi((char *)&v91[26], v12) ) /*0x7a9ad6*/
            break; /*0x7a9ad6*/
          referenceCount = stru_B76AC4.?; /*0x7a9ae2*/
          ++v9; /*0x7a9ae7*/
          v11 += 268; /*0x7a9ae8*/
          if ( v9 >= stru_B76AC4.? ) /*0x7a9af0*/
            goto LABEL_21; /*0x7a9af0*/
        }
        if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x7a9b08*/
        {
          v88 = (v91[16] & 0x1000) != 0; /*0x7a9b19*/
          if ( (v91[16] & 0x1000) != 0 ) /*0x7a9b1d*/
          {
            *(_DWORD *)v87.__pad_0 = 8; /*0x7a9b1f*/
          }
          else
          {
            v88 = (v91[16] & 0x800) != 0; /*0x7a9b2e*/
            if ( (v91[16] & 0x800) != 0 ) /*0x7a9b32*/
              *(_DWORD *)v87.__pad_0 = 7; /*0x7a9b34*/
          }
        }
      }
      DeleteAndZero((ObjectClass *)&v87.DeleteAndZero_field_0x04); /*0x7a9b40*/
      v6 = a3; /*0x7a9b45*/
      v7 = v89; /*0x7a9b4c*/
    }
    else
    {
      v7 = a3 + 52; /*0x7a9a19*/
      v89 = a3 + 52; /*0x7a9a21*/
      if ( !_strnicmp(a3 + 52, g_Str_Lob_40_, strlen(g_Str_Lob_40_)) ) /*0x7a9a2c*/
      {
        *(_DWORD *)v87.__pad_0 = 7; /*0x7a9a38*/
      }
      else
      {
        v8 = -(_strnicmp(a3 + 52, aLob35, strlen(aLob35)) != 0); /*0x7a9a65*/
        LOBYTE(v8) = v8 & 0xFC; /*0x7a9a67*/
        *(_DWORD *)v87.__pad_0 = v8 + 8; /*0x7a9a6c*/
      }
    }
    if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x7a9b55*/
    {
      v13 = (String *)__2_YAPAXI_Z(0x114u); /*0x7a9b67*/
      v14 = v13; /*0x7a9b6c*/
      if ( v13 ) /*0x7a9b73*/
        unknown_libname_73(v13); /*0x7a9b77*/
      else
        v14 = 0; /*0x7a9b7e*/
      String::Reassign(v14, (const char **)&g_WindowManager.__pad_14[16]); /*0x7a9b87*/
      qmemcpy(&v14->m_3[1], v6, 0x10Cu); /*0x7a9b94*/
      *(_DWORD *)v14[34].__pad_0 = 0; /*0x7a9b9b*/
      v15 = ((int (__thiscall *)(char *))stru_B765EC.attachedTag)(&g_WindowManager.__pad_14[16]) /*0x7a9bbf*/
          & ((1 << SLOBYTE(stru_B765EC.owningHouseIndex)) - 1);
      v16 = *(_DWORD *)(stru_B765EC.? + 4 * v15); /*0x7a9bc1*/
      *(_DWORD *)(stru_B765EC.? + 4 * v15) = v14; /*0x7a9bc4*/
      if ( v16 ) /*0x7a9bc9*/
        *(_DWORD *)v14[34].__pad_0 = v16; /*0x7a9bcb*/
      occupant = stru_B765EC.occupant; /*0x7a9bd6*/
      *(_QWORD *)&v87.DeleteAndZero_field_0x04 = (unsigned int)++stru_B765EC.?; /*0x7a9be2*/
      v87.DeleteAndZero_field_0x04 = stru_B765EC.occupant; /*0x7a9bf0*/
      if ( (double)(unsigned int)stru_B765EC.? / (double)stru_B765EC.occupant >= *(double *)&stru_B765EC.ambientSoundController[2] /*0x7a9c14*/
        && LOBYTE(stru_B765EC.nextObject) != 1 )
      {
        v18 = (int *)stru_B765EC.?; /*0x7a9c20*/
        stru_B765EC.occupant *= 2; /*0x7a9c2a*/
        ++stru_B765EC.owningHouseIndex; /*0x7a9c2f*/
        stru_B765EC.? = __2_YAPAXI_Z(8 * occupant); /*0x7a9c4f*/
        memset((void *)stru_B765EC.?, 0, 4 * stru_B765EC.occupant); /*0x7a9c57*/
        if ( occupant > 0 ) /*0x7a9c59*/
        {
          v19 = v18; /*0x7a9c5b*/
          v20 = occupant; /*0x7a9c5d*/
          do /*0x7a9c9e*/
          {
            v21 = *v19; /*0x7a9c5f*/
            if ( *v19 ) /*0x7a9c5f*/
            {
              do /*0x7a9c98*/
              {
                v22 = ((int (__thiscall *)(int))stru_B765EC.attachedTag)(v21) /*0x7a9c7b*/
                    & ((1 << SLOBYTE(stru_B765EC.owningHouseIndex)) - 1);
                v23 = *(_DWORD *)(stru_B765EC.? + 4 * v22); /*0x7a9c82*/
                *(_DWORD *)(stru_B765EC.? + 4 * v22) = v21; /*0x7a9c85*/
                v24 = *(_DWORD *)(v21 + 272); /*0x7a9c88*/
                *(_DWORD *)(v21 + 272) = v23; /*0x7a9c8e*/
                v21 = v24; /*0x7a9c96*/
              }
              while ( v24 ); /*0x7a9c98*/
            }
            ++v19; /*0x7a9c9a*/
            --v20; /*0x7a9c9d*/
          }
          while ( v20 ); /*0x7a9c9e*/
        }
        __3_YAXPAX_Z(v18); /*0x7a9ca1*/
        v7 = v89; /*0x7a9ca6*/
      }
    }
    strcpy(v90, v7); /*0x7a9cce*/
    if ( !strncmp(v90, g_Str_Lob_41_, 7u) ) /*0x7a9cdc*/
    {
      v25 = atol(&v90[strlen(g_Str_Lob_41_)]); /*0x7a9d03*/
      v26 = v25 / 8; /*0x7a9d0e*/
      v27 = v25 % 8; /*0x7a9d1d*/
      if ( v26 ) /*0x7a9d20*/
        sprintf(v90, "%s %d", *(const char **)&g_WindowManager.__pad_EC[4 * v27 + 648], v26 + 1); /*0x7a9d55*/
      else
        sprintf(v90, "%s", *(const char **)&g_WindowManager.__pad_EC[4 * v27 + 648]); /*0x7a9d34*/
    }
  }
  else
  {
    if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x7a9d67*/
    {
      if ( stru_B765EC.? ) /*0x7a9d7b*/
      {
        *(_QWORD *)&v87.DeleteAndZero_field_0x04 = (unsigned int)stru_B765EC.? - 1; /*0x7a9d88*/
        *(float *)&v87.DeleteAndZero_field_0x04 = (double)*(__int64 *)&v87.DeleteAndZero_field_0x04 /*0x7a9da5*/
                                                / (double)stru_B765EC.occupant;
        v28 = ((int (__thiscall *)(char *))stru_B765EC.attachedTag)(&g_WindowManager.__pad_14[16]) /*0x7a9dc3*/
            & ((1 << SLOBYTE(stru_B765EC.owningHouseIndex)) - 1);
        v29 = *(_DWORD *)(stru_B765EC.? + 4 * v28); /*0x7a9dc5*/
        if ( v29 ) /*0x7a9dca*/
        {
          if ( (unsigned __int8)String::Compare((String *)v29, (const char **)&g_WindowManager.__pad_14[16]) ) /*0x7a9dd7*/
          {
            v30 = *(_DWORD **)(stru_B765EC.? + 4 * v28); /*0x7a9de9*/
            v31 = v30[68]; /*0x7a9dee*/
            if ( v30 ) /*0x7a9df4*/
            {
              DeleteAndZero(*(ObjectClass **)(stru_B765EC.? + 4 * v28)); /*0x7a9df8*/
              __3_YAXPAX_Z(v30); /*0x7a9dfe*/
            }
            v32 = *(float *)&v87.DeleteAndZero_field_0x04; /*0x7a9e0c*/
            *(_DWORD *)(stru_B765EC.? + 4 * v28) = v31; /*0x7a9e10*/
            --stru_B765EC.?; /*0x7a9e1f*/
            if ( v32 <= *(double *)stru_B765EC.ambientSoundController /*0x7a9e49*/
              && stru_B765EC.occupant > (unsigned int)stru_B765EC.ambientSoundController[4]
              && LOBYTE(stru_B765EC.nextObject) != 1 )
            {
              v33 = (int *)stru_B765EC.?; /*0x7a9e55*/
              v34 = stru_B765EC.occupant; /*0x7a9e5b*/
              stru_B765EC.occupant = (unsigned int)stru_B765EC.occupant >> 1; /*0x7a9e60*/
              --stru_B765EC.owningHouseIndex; /*0x7a9e6c*/
              stru_B765EC.? = __2_YAPAXI_Z(4 * stru_B765EC.occupant); /*0x7a9e85*/
              memset((void *)stru_B765EC.?, 0, 4 * stru_B765EC.occupant); /*0x7a9e8d*/
              if ( v34 > 0 ) /*0x7a9e8f*/
              {
                v35 = v33; /*0x7a9e91*/
                v36 = v34; /*0x7a9e93*/
                do /*0x7a9ec8*/
                {
                  v37 = *v35; /*0x7a9e95*/
                  if ( *v35 ) /*0x7a9e95*/
                  {
                    do /*0x7a9ec2*/
                    {
                      v38 = CChatEventSink::ComputeBucketMask((int)&stru_B765EC.?, v37); /*0x7a9ea1*/
                      v39 = *(_DWORD *)(stru_B765EC.? + 4 * v38); /*0x7a9eac*/
                      *(_DWORD *)(stru_B765EC.? + 4 * v38) = v37; /*0x7a9eaf*/
                      v40 = *(_DWORD *)(v37 + 272); /*0x7a9eb2*/
                      *(_DWORD *)(v37 + 272) = v39; /*0x7a9eb8*/
                      v37 = v40; /*0x7a9ec0*/
                    }
                    while ( v40 ); /*0x7a9ec2*/
                  }
                  ++v35; /*0x7a9ec4*/
                  --v36; /*0x7a9ec7*/
                }
                while ( v36 ); /*0x7a9ec8*/
              }
              __3_YAXPAX_Z(v33); /*0x7a9ecb*/
            }
          }
          else
          {
            v41 = *(_DWORD *)(v29 + 272); /*0x7a9ed5*/
            if ( v41 ) /*0x7a9edd*/
            {
              while ( !(unsigned __int8)String::Compare((String *)v41, (const char **)&g_WindowManager.__pad_14[16]) ) /*0x7a9eed*/
              {
                v29 = v41; /*0x7a9eef*/
                v41 = *(_DWORD *)(v41 + 272); /*0x7a9ef1*/
                if ( !v41 ) /*0x7a9ef9*/
                  goto LABEL_66; /*0x7a9ef9*/
              }
              *(_DWORD *)(v29 + 272) = *(_DWORD *)(v41 + 272); /*0x7a9f03*/
              --stru_B765EC.?; /*0x7a9f12*/
              CChatEventSink::DeleteAndZero((CChatEventSink *)v41, 1); /*0x7a9f1e*/
            }
LABEL_66:
            if ( *(float *)&v87.DeleteAndZero_field_0x04 <= *(double *)stru_B765EC.ambientSoundController ) /*0x7a9f32*/
              HashTable::Shrink((HashTable *)&stru_B765EC.?); /*0x7a9f39*/
          }
        }
      }
    }
    switch ( a2 ) /*0x7a9f4a*/
    {
      case 262449: /*0x7a9f4a*/
        *(_DWORD *)v87.__pad_0 = 3; /*0x7a9f4c*/
        break;
      case 262448: /*0x7a9f4a*/
        *(_DWORD *)v87.__pad_0 = 2; /*0x7a9f5d*/
        break;
      case 262450: /*0x7a9f4a*/
        *(_DWORD *)v87.__pad_0 = 1; /*0x7a9f6e*/
        break;
    }
  }
  if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x7a9f7b*/
  {
    v42 = (String *)__2_YAPAXI_Z(0xCu); /*0x7a9f8a*/
    v43 = v42; /*0x7a9f8f*/
    if ( v42 ) /*0x7a9f98*/
      unknown_libname_73(v42); /*0x7a9f9c*/
    else
      v43 = 0; /*0x7a9fa3*/
    String::Reassign(v43, (const char **)&g_WindowManager.__pad_14[16]); /*0x7a9fac*/
    *(_DWORD *)v43[1].__pad_0 = 0; /*0x7a9fb1*/
    *(_DWORD *)&v43->m_3[1] = *(_DWORD *)v87.__pad_0; /*0x7a9fb8*/
    v44 = ((int (__thiscall *)(char *))stru_B76900.lineTrailer)(&g_WindowManager.__pad_14[16]) /*0x7a9fda*/
        & ((1 << SLOBYTE(stru_B76900.location[0])) - 1);
    v45 = *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v44); /*0x7a9fdc*/
    *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v44) = v43; /*0x7a9fdf*/
    if ( v45 ) /*0x7a9fe4*/
      *(_DWORD *)v43[1].__pad_0 = v45; /*0x7a9fe6*/
    v46 = *(_DWORD *)&stru_B76900.isInLogic; /*0x7a9fee*/
    *(_QWORD *)&v87.DeleteAndZero_field_0x04 = (unsigned int)++stru_B76900.lastLayer; /*0x7a9ff9*/
    v87.DeleteAndZero_field_0x04 = *(_DWORD *)&stru_B76900.isInLogic; /*0x7aa006*/
    if ( (double)(unsigned int)stru_B76900.lastLayer / (double)*(int *)&stru_B76900.isInLogic >= dbl_B769B8 /*0x7aa02a*/
      && LOBYTE(stru_B76900.location[2]) != 1 )
    {
      v47 = *(int **)&stru_B76900.isAliveFlag; /*0x7aa036*/
      *(_DWORD *)&stru_B76900.isInLogic *= 2; /*0x7aa040*/
      ++stru_B76900.location[0]; /*0x7aa045*/
      *(_DWORD *)&stru_B76900.isAliveFlag = __2_YAPAXI_Z(8 * v46); /*0x7aa065*/
      memset(*(void **)&stru_B76900.isAliveFlag, 0, 4 * *(_DWORD *)&stru_B76900.isInLogic); /*0x7aa06d*/
      if ( v46 > 0 ) /*0x7aa06f*/
      {
        v48 = v47; /*0x7aa071*/
        v49 = v46; /*0x7aa073*/
        do /*0x7aa0ae*/
        {
          v50 = *v48; /*0x7aa075*/
          if ( *v48 ) /*0x7aa075*/
          {
            do /*0x7aa0a8*/
            {
              v51 = ((int (__thiscall *)(int))stru_B76900.lineTrailer)(v50) /*0x7aa091*/
                  & ((1 << SLOBYTE(stru_B76900.location[0])) - 1);
              v52 = *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v51); /*0x7aa098*/
              *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v51) = v50; /*0x7aa09b*/
              v53 = *(_DWORD *)(v50 + 8); /*0x7aa09e*/
              *(_DWORD *)(v50 + 8) = v52; /*0x7aa0a1*/
              v50 = v53; /*0x7aa0a6*/
            }
            while ( v53 ); /*0x7aa0a8*/
          }
          ++v48; /*0x7aa0aa*/
          --v49; /*0x7aa0ad*/
        }
        while ( v49 ); /*0x7aa0ae*/
      }
      __3_YAXPAX_Z(v47); /*0x7aa0b1*/
    }
    DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x7aa0be*/
    v54 = (ObjectClass *)Dialog::FindByHandle((Dialog *)0x116); /*0x7aa0c8*/
    if ( v54 ) /*0x7aa0cf*/
      FillBuddyListWOL(v54); /*0x7aa0d3*/
  }
  if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x7aa0dd*/
  {
    if ( (unsigned int)(time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20) < 5 ) /*0x7aa0fb*/
      return 0; /*0x7aa68f*/
    DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x7aa106*/
  }
  if ( !*(_DWORD *)&stru_B76900.needsRedraw ) /*0x7aa112*/
    return 0; /*0x7aa112*/
  if ( *(int *)&stru_B76900.needsRedraw > 0 ) /*0x7aa118*/
  {
    String::Reassign((String *)&g_WindowManager.__pad_14[16], (const char **)stru_B76900.parachute); /*0x7aa129*/
    v55 = 0; /*0x7aa133*/
    if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x7aa137*/
    {
      if ( *(int *)&stru_B76900.needsRedraw <= 0 ) /*0x7aa13d*/
        v55 = *(_DWORD *)&stru_B76900.needsRedraw - 1; /*0x7aa13f*/
      DeleteAndZero((ObjectClass *)(&stru_B76900.parachute->AnimClass_field_0x0 + v55)); /*0x7aa14b*/
      memcpy( /*0x7aa174*/
        &stru_B76900.parachute->AnimClass_field_0x0 + v55,
        &stru_B76900.parachute->AnimClass_field_0x4 + v55,
        4 * (*(_DWORD *)&stru_B76900.needsRedraw + 0x3FFFFFFF * (v55 + 1)));
      --*(_DWORD *)&stru_B76900.needsRedraw; /*0x7aa188*/
      if ( 3 * *(_DWORD *)&stru_B76900.needsRedraw <= *(int *)&stru_B76900.hasParachute ) /*0x7aa192*/
      {
        v56 = *(_DWORD *)&stru_B76900.hasParachute / 2; /*0x7aa19b*/
        if ( *(_DWORD *)&stru_B76900.hasParachute / 2 < 10 ) /*0x7aa1a0*/
          v56 = 10; /*0x7aa1a2*/
        if ( v56 < *(int *)&stru_B76900.hasParachute ) /*0x7aa1a9*/
        {
          v57 = (AnimClass *)__2_YAPAXI_Z(4 * v56); /*0x7aa1b3*/
          parachute = stru_B76900.parachute; /*0x7aa1b8*/
          v59 = v57; /*0x7aa1c3*/
          if ( stru_B76900.parachute ) /*0x7aa1c5*/
          {
            qmemcpy(v57, stru_B76900.parachute, 4 * *(_DWORD *)&stru_B76900.needsRedraw); /*0x7aa1cf*/
            parachute = stru_B76900.parachute; /*0x7aa1d1*/
          }
          __3_YAXPAX_Z(parachute); /*0x7aa1d8*/
          stru_B76900.parachute = v59; /*0x7aa1e0*/
          *(_DWORD *)&stru_B76900.hasParachute = v56; /*0x7aa1e6*/
        }
      }
    }
  }
  *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x7aa1f3*/
  memset(v92, 0, sizeof(v92)); /*0x7aa206*/
  strcpy(&v92[36], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x7aa239*/
  (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v92); /*0x7aa24b*/
  return 0; /*0x7aa24e*/
}


// ==== 0x007AA6A0  CChatEventSink::DispatchStub_18  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_18(CChatEventSink *this, int a2, int a3)
{
  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) && a2 >= 0 ) /*0x7aa6af*/
    Dialog::ShowMessage(-1, (size_t)aHs_2, a3); /*0x7aa6c2*/
  return 0; /*0x7aa6cc*/
}



// ==== 0x007AA6D0  CChatEventSink::DispatchStub_19  this=CChatEventSink  sig=csp ====
int __userpurge CComObject_CChatEventSink___ATL::DispatchStub_19@<eax>(CChatEventSink *this, int a2, int a3)
{
  const wchar_t *v3; // esi
  wchar_t *StringCSF; // eax
  int Type; // esi
  int v7; // eax
  wchar_t *v8; // eax
  wchar_t Buffer[256]; // [esp+0h] [ebp-200h] BYREF

  if ( LOBYTE(stru_B77D80.HashTable_field_0x40) ) /*0x7aa6dd*/
  {
    SetEvent(dword_B736A8); /*0x7aa6e5*/
    dword_B77DE8 = a2; /*0x7aa6f4*/
    return 0; /*0x7aa700*/
  }
  if ( a2 == 262447 ) /*0x7aa710*/
  {
    if ( BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7aa71d*/
    {
      if ( !BYTE2(stru_B77D80.HashTable_field_0x40) ) /*0x7aa72a*/
      {
        Buffer[0] = 0; /*0x7aa742*/
        StringCSF = GetStringCSF(aTxtWolConnlost, 0, g_Str_File_wonline_cpp, 8460); /*0x7aa749*/
        swprintf(Buffer, (const size_t)StringCSF, v3); /*0x7aa754*/
        Type = BuildingAnim::GetType(); /*0x7aa761*/
        LOWORD(v7) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x7aa776*/
        MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, Buffer, Type, 22, v7, 0); /*0x7aa78d*/
        MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x7aa799*/
        memset(&stru_B76AC4.ambientSoundController[4], 0, 0x10Cu); /*0x7aa7af*/
        memset(&g_WindowManager.__pad_EC[84], 0, 0x10Cu); /*0x7aa7bb*/
        BYTE2(stru_B77D80.HashTable_field_0x40) = 1; /*0x7aa7bd*/
        stru_B77D80.HashTable_field_0x50 = 0; /*0x7aa7c4*/
        Debug::Log(); /*0x7aa7ce*/
        return 0; /*0x7aa7e0*/
      }
    }
    else
    {
      if ( Dialog::FindByHandle((Dialog *)0x113) ) /*0x7aa7e8*/
      {
        v8 = GetStringCSF(aTxtYoureDiscon, 0, g_Str_File_wonline_cpp, 8478); /*0x7aa809*/
        ShowDialogConfirm(v8, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7aa812*/
      }
      LOBYTE(stru_B77D80.HashTable_field_0x40) = 1; /*0x7aa820*/
      BYTE2(stru_B77D80.HashTable_field_0x40) = 1; /*0x7aa825*/
      SetEvent(Handles); /*0x7aa82a*/
      memset(&stru_B76AC4.ambientSoundController[4], 0, 0x10Cu); /*0x7aa841*/
      memset(&g_WindowManager.__pad_EC[84], 0, 0x10Cu); /*0x7aa84d*/
      stru_B77D80.HashTable_field_0x50 = 0; /*0x7aa84f*/
      Debug::Log(); /*0x7aa859*/
    }
  }
  return 0; /*0x7aa6fa*/
}



// ==== 0x007AA870  CChatEventSink::HandleChatChannelList  this=CChatEventSink  sig=csp ====
int __stdcall CChatEventSink::HandleChatChannelList(CChatEventSink *this, int a2, const char *a3)
{
  int referenceCount; // eax
  int v4; // ebx
  int v5; // ebp
  const char *v6; // ebx
  int v7; // eax
  int v8; // ebp
  int v9; // edi
  int occupant; // edx
  int v11; // eax
  int v12; // ebp
  int v13; // eax
  char *v14; // edx
  int v15; // esi
  int abstractFlags; // eax
  int v17; // esi
  int v18; // esi
  String *v19; // ecx
  int v20; // esi
  char *vtable3; // eax
  int v22; // esi
  int v23; // esi
  String *v24; // ecx
  HashTable *v25; // esi
  int v26; // esi
  ObjectClass *v27; // eax
  HWND v28; // eax
  HWND v29; // esi
  HWND DlgItem; // eax
  ObjectClass *v32; // [esp+58h] [ebp-340h]
  _BYTE v33[300]; // [esp+68h] [ebp-330h] BYREF
  char v34[516]; // [esp+194h] [ebp-204h] BYREF

  unknown_libname_73(v33); /*0x7aa87e*/
  memset(v34, 0, 513); /*0x7aa893*/
  *(_DWORD *)&v33[4] = 0; /*0x7aa89b*/
  memset(&v33[12], 0, 12); /*0x7aa8a1*/
  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7aa8ad*/
  {
    *(_DWORD *)&v33[8] = 0; /*0x7aa8c0*/
    if ( a2 == 262459 ) /*0x7aa8ca*/
    {
      *(_DWORD *)&v33[8] = 41; /*0x7aa8cc*/
    }
    else
    {
      if ( CChatEventSink::Check((CChatEventSink *)&stru_B76510.StringVector_field_0x10, &v33[8], 0) ) /*0x7aa8e4*/
        CChatEventSink::EnsureCapacity((CChatEventSink *)&stru_B76510.StringVector_field_0x10, 0); /*0x7aa8f3*/
      if ( a2 < 0 ) /*0x7aa8fa*/
      {
LABEL_103:
        *(_DWORD *)&v33[12] = 0; /*0x7aaf7c*/
        __3_YAXPAX_Z(*(void **)&v33[20]); /*0x7aaf89*/
        goto LABEL_104; /*0x7aaf89*/
      }
      if ( *(_DWORD *)&v33[8] ) /*0x7aa90e*/
      {
        Debug::Log(); /*0x7aa91d*/
        memset(&v33[32], 0, 0x10Cu); /*0x7aa930*/
        referenceCount = stru_B76AC4.?; /*0x7aa932*/
        v4 = 0; /*0x7aa937*/
        if ( stru_B76AC4.? > 0 ) /*0x7aa93b*/
        {
          v5 = 0; /*0x7aa93d*/
          do /*0x7aa985*/
          {
            if ( v5 >= 0 && v4 < referenceCount ) /*0x7aa945*/
              qmemcpy(&v33[32], (const void *)(stru_B76AC4.occupant + v5), 0x10Cu); /*0x7aa959*/
            if ( *(_DWORD *)&v33[72] != -1 ) /*0x7aa962*/
            {
              Array::InsertElement((Array *)&v33[12], &v33[32], *(int *)&v33[12]); /*0x7aa972*/
              referenceCount = stru_B76AC4.?; /*0x7aa977*/
            }
            ++v4; /*0x7aa97c*/
            v5 += 268; /*0x7aa97d*/
          }
          while ( v4 < referenceCount ); /*0x7aa985*/
        }
        stru_B76AC4.? = 0; /*0x7aa987*/
      }
      else
      {
        *(_DWORD *)&g_WindowManager.__pad_EC[636] = 0; /*0x7aa910*/
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
              v7 = stru_B76AC4.?; /*0x7aa9d3*/
              v8 = 0; /*0x7aa9d8*/
              v9 = 0; /*0x7aa9da*/
              if ( stru_B76AC4.? > 0 ) /*0x7aa9de*/
              {
                occupant = stru_B76AC4.occupant; /*0x7aa9e4*/
                while ( 1 ) /*0x7aa9ea*/
                {
                  if ( v9 >= 0 && v9 < v7 ) /*0x7aa9f0*/
                    v8 = occupant; /*0x7aa9f2*/
                  if ( v8 ) /*0x7aa9f6*/
                  {
                    v11 = strcmp((const char *)(v8 + 52), v6 + 52); /*0x7aaa04*/
                    v6 = a3; /*0x7aaa27*/
                    if ( !v11 ) /*0x7aaa30*/
                      break; /*0x7aaa30*/
                  }
                  v7 = stru_B76AC4.?; /*0x7aaa32*/
                  ++v9; /*0x7aaa37*/
                  occupant += 268; /*0x7aaa38*/
                  if ( v9 >= stru_B76AC4.? ) /*0x7aaa40*/
                    goto LABEL_88; /*0x7aaa40*/
                }
                Debug::Log(); /*0x7aaa54*/
                *(_DWORD *)(v8 + 40) = *((_DWORD *)a3 + 10); /*0x7aaa5f*/
              }
            }
          }
          else
          {
            Array::InsertElement((Array *)&stru_B76AC4.?, v6, stru_B76AC4.?); /*0x7aaa74*/
            v12 = 0; /*0x7aaa79*/
            v13 = *(_DWORD *)&v33[12]; /*0x7aaa7b*/
            if ( *(int *)&v33[12] > 0 ) /*0x7aaa81*/
            {
              v14 = *(char **)&v33[20]; /*0x7aaa87*/
              while ( 1 ) /*0x7aaa8b*/
              {
                if ( v12 >= 0 && v12 < v13 ) /*0x7aaa91*/
                  qmemcpy(&v33[32], v14, 0x10Cu); /*0x7aaa9e*/
                if ( !strcmp(&v33[84], v6 + 52) ) /*0x7aaaad*/
                  break; /*0x7aaaad*/
                v13 = *(_DWORD *)&v33[12]; /*0x7aaad4*/
                v6 = a3; /*0x7aaad8*/
                ++v12; /*0x7aaadf*/
                v14 += 268; /*0x7aaae0*/
                if ( v12 >= *(int *)&v33[12] ) /*0x7aaae8*/
                  goto LABEL_43; /*0x7aaae8*/
              }
              v6 = a3; /*0x7aaaec*/
              v15 = *(_DWORD *)&v33[72]; /*0x7aaaf3*/
              Debug::Log(); /*0x7aab01*/
              *((_DWORD *)a3 + 10) = v15; /*0x7aab09*/
            }
LABEL_43:
            String::Assign_Bool((String *)v33, v6 + 52); /*0x7aab0c*/
            CChatEventSink::EncodeString((CChatEventSink *)v33, 39); /*0x7aab1f*/
            String::ToLower((String *)v33); /*0x7aab28*/
            if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x7aab41*/
            {
              unknown_libname_73(&v33[24]); /*0x7aab4b*/
              abstractFlags = g_WebBrowserConfig.?; /*0x7aab50*/
              v17 = 0; /*0x7aab55*/
              if ( g_WebBrowserConfig.? <= 0 ) /*0x7aab59*/
              {
LABEL_51:
                v18 = 0; /*0x7aab96*/
                if ( abstractFlags < 0 ) /*0x7aab9a*/
                  v18 = abstractFlags; /*0x7aab9c*/
                if ( v18 >= g_WebBrowserConfig.? ) /*0x7aaba4*/
                {
                  DynamicVector::EnsureCapacity((DynamicVector *)&g_WebBrowserConfig.?); /*0x7aabab*/
                  abstractFlags = g_WebBrowserConfig.?; /*0x7aabb0*/
                }
                if ( abstractFlags >= g_WebBrowserConfig.? ) /*0x7aabbb*/
                {
                  DynamicVector::EnsureCapacity((DynamicVector *)&g_WebBrowserConfig.?); /*0x7aabc2*/
                  abstractFlags = g_WebBrowserConfig.?; /*0x7aabc7*/
                }
                if ( v18 < abstractFlags ) /*0x7aabce*/
                {
                  memcpy( /*0x7aabeb*/
                    (void *)(g_WebBrowserConfig.? + 4 * v18 + 4),
                    (const void *)(g_WebBrowserConfig.? + 4 * v18),
                    4 * (abstractFlags + 0x3FFFFFFF * v18));
                  abstractFlags = g_WebBrowserConfig.?; /*0x7aabf0*/
                }
                v19 = (String *)(g_WebBrowserConfig.? + 4 * v18); /*0x7aabfe*/
                if ( v19 ) /*0x7aac03*/
                {
                  String::AssignFromPtr(v19, (const char **)v33); /*0x7aac0a*/
                  abstractFlags = g_WebBrowserConfig.?; /*0x7aac0f*/
                }
                g_WebBrowserConfig.? = abstractFlags + 1; /*0x7aac15*/
              }
              else
              {
                while ( 1 ) /*0x7aab5b*/
                {
                  if ( v17 >= 0 && v17 < abstractFlags ) /*0x7aab61*/
                    String::Reassign((String *)&v33[24], (const char **)(g_WebBrowserConfig.? + 4 * v17)); /*0x7aab71*/
                  if ( (unsigned __int8)String::Compare((String *)&v33[24], (const char **)v33) ) /*0x7aab7f*/
                    break; /*0x7aab7f*/
                  abstractFlags = g_WebBrowserConfig.?; /*0x7aab8c*/
                  if ( ++v17 >= g_WebBrowserConfig.? ) /*0x7aab94*/
                    goto LABEL_51; /*0x7aab94*/
                }
              }
              DeleteAndZero((ObjectClass *)&v33[24]); /*0x7aac1e*/
            }
            v20 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 /*0x7aac42*/
                            + 4 * (dword_B76548(v33) & ((1 << SLOBYTE(g_WOL_ConnectionPool.HashMap_field_0x0C)) - 1)));
            if ( v20 ) /*0x7aac47*/
            {
              while ( !(unsigned __int8)String::Compare((String *)v20, (const char **)v33) ) /*0x7aac57*/
              {
                v20 = *(_DWORD *)(v20 + 8); /*0x7aac5d*/
                if ( !v20 ) /*0x7aac62*/
                  goto LABEL_66; /*0x7aac62*/
              }
            }
            else
            {
LABEL_66:
              unknown_libname_73(&v33[28]); /*0x7aac64*/
              vtable3 = (char *)stru_B765EC.?; /*0x7aac6d*/
              v22 = 0; /*0x7aac72*/
              if ( (int)stru_B765EC.? <= 0 ) /*0x7aac76*/
              {
LABEL_72:
                v23 = 0; /*0x7aacb3*/
                if ( (int)vtable3 < 0 ) /*0x7aacb7*/
                  v23 = (int)vtable3; /*0x7aacb9*/
                if ( v23 >= stru_B765EC.? ) /*0x7aacc1*/
                {
                  DynamicVector::EnsureCapacity((DynamicVector *)&stru_B765EC.?); /*0x7aacc8*/
                  vtable3 = (char *)stru_B765EC.?; /*0x7aaccd*/
                }
                if ( (int)vtable3 >= stru_B765EC.? ) /*0x7aacd8*/
                {
                  DynamicVector::EnsureCapacity((DynamicVector *)&stru_B765EC.?); /*0x7aacdf*/
                  vtable3 = (char *)stru_B765EC.?; /*0x7aace4*/
                }
                if ( v23 < (int)vtable3 ) /*0x7aaceb*/
                {
                  memcpy( /*0x7aad08*/
                    (void *)(stru_B765EC.? + 4 * v23 + 4),
                    (const void *)(stru_B765EC.? + 4 * v23),
                    4 * (_DWORD)&vtable3[0x3FFFFFFF * v23]);
                  vtable3 = (char *)stru_B765EC.?; /*0x7aad0d*/
                }
                v24 = (String *)(stru_B765EC.? + 4 * v23); /*0x7aad1b*/
                if ( v24 ) /*0x7aad20*/
                {
                  String::AssignFromPtr(v24, (const char **)v33); /*0x7aad27*/
                  vtable3 = (char *)stru_B765EC.?; /*0x7aad2c*/
                }
                stru_B765EC.? = vtable3 + 1; /*0x7aad32*/
              }
              else
              {
                while ( 1 ) /*0x7aac78*/
                {
                  if ( v22 >= 0 && v22 < (int)vtable3 ) /*0x7aac7e*/
                    String::Reassign((String *)&v33[28], (const char **)(stru_B765EC.? + 4 * v22)); /*0x7aac8e*/
                  if ( (unsigned __int8)String::Compare((String *)&v33[28], (const char **)v33) ) /*0x7aac9c*/
                    break; /*0x7aac9c*/
                  vtable3 = (char *)stru_B765EC.?; /*0x7aaca9*/
                  if ( ++v22 >= (int)stru_B765EC.? ) /*0x7aacb1*/
                    goto LABEL_72; /*0x7aacb1*/
                }
              }
              DeleteAndZero((ObjectClass *)&v33[28]); /*0x7aad3b*/
            }
            v25 = g_WOL_HashTable; /*0x7aad40*/
            v26 = *(_DWORD *)(*(_DWORD *)v25->__pad_0 /*0x7aad5c*/
                            + 4
                            * (((int (__thiscall *)(_BYTE *))g_WOL_HashTable->HashTable_field_0x18)(v33)
                             & ((1 << v25->HashTable_field_0x0C) - 1)));
            if ( v26 ) /*0x7aad61*/
            {
              while ( !(unsigned __int8)String::Compare((String *)v26, (const char **)v33) ) /*0x7aad71*/
              {
                v26 = *(_DWORD *)(v26 + 112); /*0x7aad73*/
                if ( !v26 ) /*0x7aad78*/
                  goto LABEL_87; /*0x7aad78*/
              }
            }
            else
            {
LABEL_87:
              strcat(v34, String::GetOrEmpty((String *)v33)); /*0x7aad7a*/
              strcat(v34, asc_8318B8); /*0x7aadd7*/
              ++*(_DWORD *)&v33[4]; /*0x7aade5*/
            }
          }
        }
        else
        {
          Array::InsertElement((Array *)&g_WindowManager.__pad_EC[636], v6, *(int *)&g_WindowManager.__pad_EC[636]); /*0x7aa9ae*/
        }
LABEL_88:
        if ( *(int *)&v33[4] > 20 ) /*0x7aadee*/
        {
          (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(*(_DWORD *)g_UIPointerTable + 20))( /*0x7aae1f*/
            g_UIPointerTable,
            stru_B76188.__pad_20,
            g_WOL_GameConfig,
            v34,
            g_NetworkRematchState & 0xFFFF00,
            -1,
            0,
            0);
          (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(_DWORD *)g_UIPointerTable + 56))( /*0x7aae4b*/
            g_UIPointerTable,
            stru_B76188.__pad_20,
            g_WOL_GameConfig,
            v34,
            g_NetworkRematchState & 0xFFFF00);
          *(_DWORD *)&v33[4] = 0; /*0x7aae5c*/
          memset(v34, 0, 0x200u); /*0x7aae64*/
        }
        v6 = (const char *)*((_DWORD *)v6 + 12); /*0x7aae66*/
        a3 = v6; /*0x7aae6b*/
      }
      while ( v6 ); /*0x7aae72*/
      if ( *(_DWORD *)&v33[4] ) /*0x7aae7e*/
      {
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(*(_DWORD *)g_UIPointerTable + 20))( /*0x7aaead*/
          g_UIPointerTable,
          stru_B76188.__pad_20,
          g_WOL_GameConfig,
          v34,
          g_NetworkRematchState & 0xFFFF00,
          -1,
          0,
          0);
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(_DWORD *)g_UIPointerTable + 56))( /*0x7aaed9*/
          g_UIPointerTable,
          stru_B76188.__pad_20,
          g_WOL_GameConfig,
          v34,
          g_NetworkRematchState & 0xFFFF00);
        memset(v34, 0, 0x200u); /*0x7aaeea*/
      }
    }
    SetEvent(dword_B73690); /*0x7aaef2*/
    if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x7aaf0a*/
    {
      Debug::Log(); /*0x7aaf18*/
    }
    else
    {
      v27 = (ObjectClass *)Dialog::FindByHandle((Dialog *)0x116); /*0x7aaf27*/
      if ( v27 ) /*0x7aaf2e*/
        FillBuddyListWOL(v27); /*0x7aaf32*/
      if ( *(_DWORD *)&v33[8] ) /*0x7aaf3d*/
      {
        GameListRenderWOL(v32); /*0x7aaf77*/
      }
      else
      {
        PopulateWOLLobbyListBox(v32); /*0x7aaf3f*/
        v28 = (HWND)Dialog::FindByHandle((Dialog *)0x113); /*0x7aaf49*/
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
  *(_DWORD *)&v33[12] = 0; /*0x7aa8af*/
  __3_YAXPAX_Z(0); /*0x7aa8b4*/
LABEL_104:
  DeleteAndZero((ObjectClass *)v33); /*0x7aaf8e*/
  return 0; /*0x7aaf9a*/
}



// ==== 0x007AAFB0  CChatEventSink::Unadvise  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::Unadvise(CChatEventSink *this, int a2, const char *a3, const char *a4)
{
  const char *v4; // edi
  const char *v5; // esi
  bool v6; // bl
  char *v7; // esi
  wchar_t *v8; // eax

  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) && a2 >= 0 ) /*0x7aafc5*/
  {
    v4 = a4; /*0x7aafcb*/
    String::Assign((String *)&a2, a4); /*0x7aafd5*/
    v5 = a3; /*0x7aafda*/
    if ( a3 ) /*0x7aafe0*/
    {
      if ( (*a3 & 1) != 0 ) /*0x7aafe9*/
      {
        v6 = 1; /*0x7aafeb*/
      }
      else if ( Dialog::FindByHandle((Dialog *)0xC2) ) /*0x7aaff4*/
      {
        v6 = 1; /*0x7aaffd*/
      }
      else
      {
        v6 = Dialog::FindByHandle((Dialog *)0xC9) || g_WOL_BuddyList.DynamicVector_field_0x10 != 0; /*0x7ab00d*/
      }
    }
    else
    {
      v6 = 0; /*0x7aafe2*/
    }
    DeleteAndZero((ObjectClass *)&a2); /*0x7ab021*/
    if ( v6 && IsBuddyOrIgnoreWOL(v5) ) /*0x7ab02d*/
    {
      String::Assign((String *)&a2, v4); /*0x7ab03b*/
      CharStringToWide((wchar_t **)&a4, (const char **)&a2); /*0x7ab048*/
      DeleteAndZero((ObjectClass *)&a2); /*0x7ab051*/
      v7 = (char *)(v5 + 36); /*0x7ab056*/
      if ( _strcmpi(unk_A8B380, v7) ) /*0x7ab05f*/
      {
        v8 = WideString::GetOrEmpty((wchar_t **)&a4); /*0x7ab06f*/
        Dialog::ShowMessage(16711935, (size_t)g_Str_Trace__hs, v7, v8); /*0x7ab081*/
      }
      DeleteAndZero::Alt((DeleteAndZero *)&a4); /*0x7ab08d*/
    }
  }
  return 0; /*0x7ab092*/
}



// ==== 0x007AB0A0  CChatEventSink::DispatchStub_42  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_42(
        CChatEventSink *this,
        int a2,
        const char *a3,
        wchar_t *String)
{
  wchar_t *v4; // edi
  const char *v5; // esi
  bool v6; // bl
  bool v7; // zf
  void *DynamicVector_field_0x10; // eax
  char *v9; // esi

  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) && a2 >= 0 ) /*0x7ab0b5*/
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
      else if ( Dialog::FindByHandle((Dialog *)0xC2) ) /*0x7ab0e4*/
      {
        v6 = 1; /*0x7ab0ed*/
      }
      else if ( Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7ab0f6*/
      {
        v6 = 1; /*0x7ab0ff*/
      }
      else
      {
        v7 = (unsigned __int8)WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7ab10c*/
        DynamicVector_field_0x10 = g_WOL_BuddyList.DynamicVector_field_0x10; /*0x7ab10e*/
        if ( v7 ) /*0x7ab113*/
          DynamicVector_field_0x10 = (void *)dword_B779DC; /*0x7ab115*/
        v6 = DynamicVector_field_0x10 != 0; /*0x7ab11c*/
      }
    }
    else
    {
      v6 = 0; /*0x7ab0d2*/
    }
    DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x7ab123*/
    if ( v6 && IsBuddyOrIgnoreWOL(v5) ) /*0x7ab12f*/
    {
      v9 = (char *)(v5 + 36); /*0x7ab138*/
      if ( _strcmpi(unk_A8B380, v9) ) /*0x7ab141*/
        Dialog::ShowMessage(16711935, (size_t)g_Str_Trace__hs, v9, v4); /*0x7ab15a*/
    }
  }
  return 0; /*0x7ab162*/
}



// ==== 0x007AB170  CChatEventSink::EnumDependents  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::EnumDependents(
        CChatEventSink *this,
        int a2,
        int a3,
        const char *a4,
        const char *a5)
{
  const char *v5; // edi
  const char *v6; // esi
  bool v7; // bl
  char *v8; // esi
  wchar_t *v9; // eax

  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) && a2 >= 0 ) /*0x7ab185*/
  {
    v5 = a5; /*0x7ab18b*/
    String::Assign((String *)&a2, a5); /*0x7ab195*/
    v6 = a4; /*0x7ab19a*/
    if ( a4 ) /*0x7ab1a0*/
    {
      if ( (*a4 & 1) != 0 ) /*0x7ab1a9*/
      {
        v7 = 1; /*0x7ab1ab*/
      }
      else if ( Dialog::FindByHandle((Dialog *)0xC2) ) /*0x7ab1b4*/
      {
        v7 = 1; /*0x7ab1bd*/
      }
      else
      {
        v7 = Dialog::FindByHandle((Dialog *)0xC9) || g_WOL_BuddyList.DynamicVector_field_0x10 != 0; /*0x7ab1cd*/
      }
    }
    else
    {
      v7 = 0; /*0x7ab1a2*/
    }
    DeleteAndZero((ObjectClass *)&a2); /*0x7ab1e1*/
    if ( v7 && IsBuddyOrIgnoreWOL(v6) ) /*0x7ab1ed*/
    {
      String::Assign((String *)&a2, v5); /*0x7ab1fb*/
      CharStringToWide((wchar_t **)&a5, (const char **)&a2); /*0x7ab208*/
      DeleteAndZero((ObjectClass *)&a2); /*0x7ab211*/
      v8 = (char *)(v6 + 36); /*0x7ab216*/
      if ( _strcmpi(unk_A8B380, v8) ) /*0x7ab21f*/
      {
        v9 = WideString::GetOrEmpty((wchar_t **)&a5); /*0x7ab22f*/
        Dialog::ShowMessage(3166463, (size_t)g_Str_Trace__hs, v8, v9); /*0x7ab241*/
      }
      DeleteAndZero::Alt((DeleteAndZero *)&a5); /*0x7ab24d*/
    }
  }
  return 0; /*0x7ab252*/
}



// ==== 0x007AB260  CChatEventSink::DispatchStub_43  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_43(
        CChatEventSink *this,
        int a2,
        int a3,
        const char *a4,
        wchar_t *String)
{
  wchar_t *v5; // edi
  const char *v6; // esi
  bool v7; // bl
  bool v8; // zf
  void *DynamicVector_field_0x10; // eax
  char *v10; // esi

  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) && a2 >= 0 ) /*0x7ab275*/
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
      else if ( Dialog::FindByHandle((Dialog *)0xC2) ) /*0x7ab2a4*/
      {
        v7 = 1; /*0x7ab2ad*/
      }
      else if ( Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7ab2b6*/
      {
        v7 = 1; /*0x7ab2bf*/
      }
      else
      {
        v8 = (unsigned __int8)WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7ab2cc*/
        DynamicVector_field_0x10 = g_WOL_BuddyList.DynamicVector_field_0x10; /*0x7ab2ce*/
        if ( v8 ) /*0x7ab2d3*/
          DynamicVector_field_0x10 = (void *)dword_B779DC; /*0x7ab2d5*/
        v7 = DynamicVector_field_0x10 != 0; /*0x7ab2dc*/
      }
    }
    else
    {
      v7 = 0; /*0x7ab292*/
    }
    DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x7ab2e3*/
    if ( v7 && IsBuddyOrIgnoreWOL(v6) ) /*0x7ab2ef*/
    {
      v10 = (char *)(v6 + 36); /*0x7ab2f8*/
      if ( _strcmpi(unk_A8B380, v10) ) /*0x7ab301*/
        Dialog::ShowMessage(3166463, (size_t)g_Str_Trace__hs, v10, v5); /*0x7ab31a*/
    }
  }
  return 0; /*0x7ab322*/
}



// ==== 0x007AB330  CChatEventSink::COMStub_Return0  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::COMStub_Return0(CChatEventSink *this, int a2, int a3, int a4)
{
  return 0; /*0x7ab332*/
}



// ==== 0x007AB340  CChatEventSink::StubReturnFalse  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::StubReturnFalse(CChatEventSink *this, int a2, int a3)
{
  return 0; /*0x7ab342*/
}



// ==== 0x007AB350  CChatEventSink::DispatchStub_29  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_29(CChatEventSink *this, int a2, __time32_t Time)
{
  wchar_t *StringCSF; // eax
  char *v5; // [esp-4h] [ebp-194h]
  wchar_t Buffer[200]; // [esp+0h] [ebp-190h] BYREF

  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) && !a2 ) /*0x7ab368*/
  {
    v5 = unknown_libname_75(&Time); /*0x7ab381*/
    StringCSF = GetStringCSF(aTxtBannedtill, 0, g_Str_File_wonline_cpp, 8809); /*0x7ab38c*/
    swprintf(Buffer, (const size_t)StringCSF, (const wchar_t *const)v5); /*0x7ab397*/
    ShowDialogConfirm(Buffer, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7ab3ac*/
  }
  return 0; /*0x7ab3b3*/
}



// ==== 0x007AB3C0  CChatEventSink::DispatchStub_31  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_31(CChatEventSink *this, int a2, _BYTE *a3, int a4)
{
  wchar_t *StringCSF; // eax
  wchar_t *v6; // eax
  char *v7; // [esp-4h] [ebp-4h]
  char *v8; // [esp-4h] [ebp-4h]

  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7ab3c7*/
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
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_30(CChatEventSink *this, int a2, void *a3, int a4, int a5)
{
  int owningHouseIndex; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  ObjectClass *v10; // eax
  ObjectClass *nextObject; // esi
  ObjectClass *v12; // ebp
  char v13; // dl
  unsigned int v14; // ecx
  char v15; // dl
  int v17; // [esp+0h] [ebp-E0h]
  int v18; // [esp+4h] [ebp-DCh]
  char v19[108]; // [esp+8h] [ebp-D8h] BYREF
  _DWORD v20[27]; // [esp+74h] [ebp-6Ch] BYREF

  if ( a2 ) /*0x7ab44c*/
    return 0; /*0x7ab65d*/
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7ab452*/
  v6 = 0; /*0x7ab458*/
  v18 = 0; /*0x7ab45c*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7ab460*/
  {
    v7 = 0; /*0x7ab467*/
    v17 = 0; /*0x7ab46b*/
    while ( 1 ) /*0x7ab46f*/
    {
      if ( v7 < 0 ) /*0x7ab471*/
        goto LABEL_30; /*0x7ab471*/
      if ( v6 >= owningHouseIndex ) /*0x7ab479*/
        goto LABEL_30; /*0x7ab479*/
      qmemcpy(v20, (char *)g_WOL_UserList.nextObject + v7, sizeof(v20)); /*0x7ab49a*/
      if ( _strcmpi((char *)&v20[9], (char *)a3) ) /*0x7ab4a5*/
        goto LABEL_30; /*0x7ab4af*/
      v20[0] = a4 | a5 & v20[0]; /*0x7ab4d4*/
      v8 = v6; /*0x7ab4db*/
      if ( g_WOL_UserList.owningHouseIndex ) /*0x7ab4df*/
      {
        if ( v6 >= g_WOL_UserList.owningHouseIndex ) /*0x7ab4ed*/
          v8 = g_WOL_UserList.owningHouseIndex - 1; /*0x7ab4ef*/
        memcpy( /*0x7ab51b*/
          (char *)g_WOL_UserList.nextObject + 108 * v8,
          &g_WOL_UserList.nextObject->alignmentPadding69[108 * v8 + 3],
          108 * g_WOL_UserList.owningHouseIndex - 36 * (3 * v8 + 3));
        --g_WOL_UserList.owningHouseIndex; /*0x7ab52f*/
        if ( 3 * g_WOL_UserList.owningHouseIndex <= g_WOL_UserList.fallRate ) /*0x7ab539*/
        {
          v9 = g_WOL_UserList.fallRate / 2; /*0x7ab542*/
          if ( g_WOL_UserList.fallRate / 2 < 10 ) /*0x7ab547*/
            v9 = 10; /*0x7ab549*/
          if ( v9 < g_WOL_UserList.fallRate ) /*0x7ab550*/
          {
            v10 = (ObjectClass *)__2_YAPAXI_Z(108 * v9); /*0x7ab55c*/
            nextObject = g_WOL_UserList.nextObject; /*0x7ab561*/
            v12 = v10; /*0x7ab56c*/
            if ( g_WOL_UserList.nextObject ) /*0x7ab56e*/
            {
              v13 = 108 * LOBYTE(g_WOL_UserList.owningHouseIndex); /*0x7ab580*/
              v14 = (unsigned int)(108 * g_WOL_UserList.owningHouseIndex) >> 2; /*0x7ab582*/
              qmemcpy(v10, g_WOL_UserList.nextObject, 4 * v14); /*0x7ab585*/
              qmemcpy(&v10->AbstractClass + v14, &nextObject->AbstractClass + v14, v13 & 3); /*0x7ab58c*/
              nextObject = g_WOL_UserList.nextObject; /*0x7ab58e*/
            }
            __3_YAXPAX_Z(nextObject); /*0x7ab595*/
            g_WOL_UserList.nextObject = v12; /*0x7ab59a*/
            v6 = v18; /*0x7ab5a0*/
            g_WOL_UserList.fallRate = v9; /*0x7ab5a7*/
          }
          v7 = v17; /*0x7ab5ad*/
        }
      }
      qmemcpy(v19, v20, sizeof(v19)); /*0x7ab5c6*/
      *(_DWORD *)&v19[32] = 0; /*0x7ab5cb*/
      if ( dword_B77E48 == 1 ) /*0x7ab5d3*/
        break; /*0x7ab5d3*/
      switch ( dword_B77E48 ) /*0x7ab5dc*/
      {
        case 2: /*0x7ab5dc*/
          InsertBuddyList(v19, 1); /*0x7ab5e4*/
          break;
        case 3: /*0x7ab5dc*/
          InsertBuddyList(v19, 0); /*0x7ab5f6*/
          break;
        case 4: /*0x7ab5dc*/
          FindBuddyList(v19, 1); /*0x7ab608*/
          break;
        case 5: /*0x7ab5dc*/
          FindBuddyList(v19, 0); /*0x7ab61a*/
          break;
        default:
          v15 = 1; /*0x7ab621*/
          goto LABEL_29; /*0x7ab621*/
      }
LABEL_30:
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7ab62c*/
      ++v6; /*0x7ab631*/
      v7 += 108; /*0x7ab632*/
      v18 = v6; /*0x7ab637*/
      v17 = v7; /*0x7ab63b*/
      if ( v6 >= g_WOL_UserList.owningHouseIndex ) /*0x7ab63f*/
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
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_24(CChatEventSink *this, int a2, int a3, int a4, int a5)
{
  NetworkLobby *v5; // edi
  char *v7; // ebx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  HWND v13; // eax
  wchar_t *v14; // eax
  wchar_t *StringCSF; // eax
  char *v16; // [esp-18h] [ebp-81Ch]
  char *v17; // [esp-14h] [ebp-818h]
  char *v18; // [esp-14h] [ebp-818h]
  wchar_t *v19; // [esp-10h] [ebp-814h]
  char *v20; // [esp-10h] [ebp-814h]
  HWND DlgItem; // [esp-10h] [ebp-814h]
  char *v22; // [esp-10h] [ebp-814h]
  ObjectClass *v23; // [esp-Ch] [ebp-810h]
  DeleteAndZero v24[171]; // [esp+0h] [ebp-804h] BYREF

  if ( BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7ab67d*/
    return 0; /*0x7ab67f*/
  if ( a2 < 0 ) /*0x7ab693*/
    return 0; /*0x7ab695*/
  v23 = (ObjectClass *)v5; /*0x7ab6a2*/
  memset(byte_B785C0, 0, sizeof(byte_B785C0)); /*0x7ab6af*/
  v7 = (char *)(a3 + 52); /*0x7ab6c5*/
  if ( !_strnicmp((const char *)(a3 + 52), g_Str_Lob_41_, strlen(g_Str_Lob_41_)) ) /*0x7ab6cf*/
  {
    v8 = atol((const char *)(strlen(g_Str_Lob_41_) + a3 + 52)); /*0x7ab6f2*/
    v9 = v8 / 8; /*0x7ab6fd*/
    v10 = v8 % 8; /*0x7ab70c*/
    if ( v9 ) /*0x7ab70f*/
      sprintf(byte_B785C0, "%s %d", *(const char **)&g_WindowManager.__pad_EC[4 * v10 + 648], v9 + 1); /*0x7ab72f*/
    else
      sprintf(byte_B785C0, "%s", *(const char **)&g_WindowManager.__pad_EC[4 * v10 + 648]); /*0x7ab719*/
  }
  else
  {
    sprintf(byte_B785C0, "%s", v7); /*0x7ab744*/
  }
  if ( (BYTE1(*(_DWORD *)a4) & 0x80u) == 0 ) /*0x7ab758*/
  {
    if ( !NetworkLobby::CheckMinPlayers(v5) ) /*0x7ab860*/
    {
      v22 = CharToWideString((_BYTE *)(a5 + 36)); /*0x7ab878*/
      v18 = CharToWideString(v7); /*0x7ab880*/
      v16 = CharToWideString((_BYTE *)(a4 + 36)); /*0x7ab889*/
      StringCSF = GetStringCSF(aTxtUserKicked, 0, g_Str_File_wonline_cpp, 8940); /*0x7ab89b*/
      Dialog::ShowMessage(-1, (size_t)StringCSF, v16, v18, v22); /*0x7ab8a8*/
    }
  }
  else
  {
    unknown_libname_74(v24); /*0x7ab762*/
    if ( stru_B76AC4.ambientSoundController[4] && Event_Helper((ObjectClass *)v5) ) /*0x7ab770*/
    {
      v19 = GetStringCSF(g_Str_TXT_CHANNEL_FULL, 0, g_Str_File_wonline_cpp, 8912); /*0x7ab78f*/
      WideString::Assign_Alt((void **)v24, v19); /*0x7ab790*/
    }
    else
    {
      memset(&v24[0].DeleteAndZero_field_0x04, 0, 0x800u); /*0x7ab79d*/
      v20 = CharToWideString((_BYTE *)(a5 + 36)); /*0x7ab7ae*/
      v17 = CharToWideString(v7); /*0x7ab7b6*/
      v11 = GetStringCSF(aTxtYoureKicked, 0, g_Str_File_wonline_cpp, 8916); /*0x7ab7c8*/
      swprintf((wchar_t *const)&v24[0].DeleteAndZero_field_0x04, (const size_t)v11, (const wchar_t *const)v17, v20); /*0x7ab7d3*/
      WideString::Assign_Alt((void **)v24, (wchar_t *)&v24[0].DeleteAndZero_field_0x04); /*0x7ab7e4*/
    }
    if ( stru_B76AC4.ambientSoundController[4] ) /*0x7ab7f0*/
    {
      v13 = (HWND)Dialog::FindByHandle((Dialog *)0x113); /*0x7ab829*/
      if ( v13 ) /*0x7ab830*/
      {
        DlgItem = GetDlgItem(v13, 1343); /*0x7ab83e*/
        v14 = WideString::GetOrEmpty((wchar_t **)v24); /*0x7ab843*/
        DrawDialogText(-1, v14, DlgItem); /*0x7ab850*/
      }
      DeleteAndZero::Alt(v24); /*0x7ab859*/
    }
    else
    {
      v12 = WideString::GetOrEmpty((wchar_t **)v24); /*0x7ab7fd*/
      ShowDialogConfirm(v12, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7ab806*/
      ++dword_B77DD4; /*0x7ab815*/
      DeleteAndZero::Alt(v24); /*0x7ab81a*/
    }
  }
  LeaveChannelWOL((const char *)a4); /*0x7ab8b2*/
  DisplayRankingsWOL(0); /*0x7ab8bb*/
  GameListRenderWOL(v23); /*0x7ab8c0*/
  return 0; /*0x7ab681*/
}



// ==== 0x007AB8E0  CChatEventSink::DispatchStub_33  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_33(CChatEventSink *this, int a2, int a3)
{
  int v4; // ebp
  int v5; // edi
  String *v6; // eax
  String *v7; // esi
  int v8; // eax
  int v9; // ecx
  char *v10; // eax
  ObjectClass *PlayerProfile; // eax
  char v12; // [esp+7h] [ebp-2Dh]
  int v13; // [esp+8h] [ebp-2Ch] BYREF
  ComPtr v14; // [esp+Ch] [ebp-28h] BYREF

  v12 = 0; /*0x7ab8ec*/
  if ( a2 >= 0 ) /*0x7ab8f0*/
  {
    v4 = a3; /*0x7ab909*/
    if ( a3 ) /*0x7ab90f*/
    {
      do /*0x7abac8*/
      {
        unknown_libname_73(&a2); /*0x7ab91b*/
        String::Assign_Bool((String *)&a2, (const char *)(v4 + 36)); /*0x7ab928*/
        String::ToLower((String *)&a2); /*0x7ab931*/
        HashTable::Lookup((HashTable *)&g_WOL_ConnectionPool, (const char **)&a2, &v13); /*0x7ab945*/
        v5 = *(_DWORD *)(v4 + 100); /*0x7ab94a*/
        v6 = (String *)__2_YAPAXI_Z(0xCu); /*0x7ab94f*/
        v7 = v6; /*0x7ab954*/
        if ( v6 ) /*0x7ab95b*/
          unknown_libname_73(v6); /*0x7ab95f*/
        else
          v7 = 0; /*0x7ab966*/
        String::Reassign(v7, (const char **)&a2); /*0x7ab96f*/
        *(_DWORD *)&v7->m_3[1] = v5; /*0x7ab978*/
        *(_DWORD *)v7[1].__pad_0 = 0; /*0x7ab981*/
        v8 = CComObject_CChatEventSink___ATL::Check((int)&g_WOL_ConnectionPool, (int)&a2); /*0x7ab984*/
        v9 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * v8); /*0x7ab98f*/
        *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * v8) = v7; /*0x7ab992*/
        if ( v9 ) /*0x7ab997*/
          *(_DWORD *)v7[1].__pad_0 = v9; /*0x7ab999*/
        v14.ComPtr_field_0x18 = g_WOL_ConnectionPool.HashMap_field_0x08; /*0x7ab9b0*/
        v14.ComPtr_field_0x1C = 0; /*0x7ab9b8*/
        *(_QWORD *)&v14.ComPtr_field_0x10 = (unsigned int)++g_WOL_ConnectionPool.HashMap_field_0x04; /*0x7ab9ac*/
        if ( (double)(unsigned int)g_WOL_ConnectionPool.HashMap_field_0x04 /*0x7ab9d0*/
           / (double)g_WOL_ConnectionPool.HashMap_field_0x08 >= dbl_B76558 )
          HashTable::Grow((HashTable *)&g_WOL_ConnectionPool); /*0x7ab9d7*/
        v10 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7ab9e1*/
        if ( !_strcmpi((char *)(a3 + 36), v10) ) /*0x7ab9ef*/
        {
          v14.ComPtr_field_0x08 = 0; /*0x7aba03*/
          LOBYTE(v14.ComPtr_field_0x0C) = 0; /*0x7aba07*/
          ReadRegistryOptionsWOL((ObjectClass *)&v14.ComPtr_field_0x08); /*0x7aba0b*/
          ComPtr::Constructor(&v14); /*0x7aba14*/
          *(_DWORD *)v14.__pad_0 = &rc_ptr<PlayerProfile>::`vftable'; /*0x7aba22*/
          if ( (unsigned __int8)Flag::IsNot2((Flag *)&v14.ComPtr_field_0x08) ) /*0x7aba26*/
          {
            PlayerProfile = LoadPlayerProfile( /*0x7aba38*/
                              (ObjectClass *)&v14.ComPtr_field_0x20,
                              (const char **)&g_WindowManager.__pad_EC[684]);
            ComPtr::Set(&v14, (int)PlayerProfile->?); /*0x7aba45*/
            v14.ComPtr_field_0x20 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x7aba4e*/
            ComPtr::Release((ComPtr *)&v14.ComPtr_field_0x20); /*0x7aba52*/
          }
          else
          {
            ComPtr::Set(&v14, stru_B75E48.ComPtr_field_0x04); /*0x7aba64*/
          }
          GadgetClass::TrackState(v14.ComPtr_field_0x04, *(_DWORD *)(a3 + 100), 2); /*0x7aba77*/
          if ( (unsigned __int8)Flag::IsNot2((Flag *)&v14.ComPtr_field_0x08) ) /*0x7aba80*/
            SaveProfileWOL(v14.ComPtr_field_0x04, (const char **)&g_WindowManager.__pad_EC[684]); /*0x7aba92*/
          Debug::Log(); /*0x7abaa0*/
          v12 = 1; /*0x7abaac*/
          *(_DWORD *)v14.__pad_0 = &rc_ptr<PlayerProfile>::`vftable'; /*0x7abab1*/
          ComPtr::Release(&v14); /*0x7abab5*/
        }
        v4 = *(_DWORD *)(v4 + 32); /*0x7ababa*/
        DeleteAndZero((ObjectClass *)&a2); /*0x7abac1*/
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
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_35(CChatEventSink *this, int a2, char *a3)
{
  int v3; // esi
  int v4; // esi
  int v5; // edi
  ScalarDtor *v6; // ecx
  ScalarDtor v7; // edi
  double v8; // st7
  int v9; // esi
  String *v10; // eax
  String *v11; // esi
  int v12; // edx
  int v13; // eax
  _BYTE v15[12]; // [esp+0h] [ebp-4Ch] BYREF
  char v16[64]; // [esp+Ch] [ebp-40h] BYREF

  unknown_libname_73(v15); /*0x7abafa*/
  strcpy(v16, unk_A8B380); /*0x7abb1c*/
  String::Assign_Bool((String *)v15, v16); /*0x7abb2e*/
  String::ToLower((String *)v15); /*0x7abb37*/
  v3 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 /*0x7abb5d*/
                 + 4 * (dword_B76548(v15) & ((1 << SLOBYTE(g_WOL_ConnectionPool.HashMap_field_0x0C)) - 1)));
  if ( v3 ) /*0x7abb62*/
  {
    while ( !(unsigned __int8)String::Compare((String *)v3, (const char **)v15) ) /*0x7abb76*/
    {
      v3 = *(_DWORD *)(v3 + 8); /*0x7abb78*/
      if ( !v3 ) /*0x7abb7d*/
        goto LABEL_19; /*0x7abb7d*/
    }
    if ( g_WOL_ConnectionPool.HashMap_field_0x04 ) /*0x7abb8b*/
    {
      *(_QWORD *)&v15[4] = (unsigned int)(g_WOL_ConnectionPool.HashMap_field_0x04 - 1); /*0x7abb98*/
      *(float *)&v15[4] = (double)*(__int64 *)&v15[4] / (double)g_WOL_ConnectionPool.HashMap_field_0x08; /*0x7abbb4*/
      v4 = dword_B76548(v15) & ((1 << SLOBYTE(g_WOL_ConnectionPool.HashMap_field_0x0C)) - 1); /*0x7abbcc*/
      v5 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * v4); /*0x7abbd3*/
      if ( v5 ) /*0x7abbd8*/
      {
        if ( (unsigned __int8)String::Compare((String *)v5, (const char **)v15) ) /*0x7abbe5*/
        {
          v6 = *(ScalarDtor **)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * v4); /*0x7abbf4*/
          v7 = v6[2]; /*0x7abbf9*/
          if ( v6 ) /*0x7abbfc*/
            ScalarDtor::DeleteAndZero(v6, 1); /*0x7abc00*/
          v8 = *(float *)&v15[4]; /*0x7abc0a*/
          *(ScalarDtor *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * v4) = v7; /*0x7abc0e*/
          --g_WOL_ConnectionPool.HashMap_field_0x04; /*0x7abc1d*/
          if ( v8 <= dbl_B76550 ) /*0x7abc27*/
LABEL_18:
            HashMap::Shrink(&g_WOL_ConnectionPool); /*0x7abc7e*/
        }
        else
        {
          v9 = *(_DWORD *)(v5 + 8); /*0x7abc2b*/
          if ( v9 ) /*0x7abc30*/
          {
            while ( !(unsigned __int8)String::Compare((String *)v9, (const char **)v15) ) /*0x7abc40*/
            {
              v5 = v9; /*0x7abc42*/
              v9 = *(_DWORD *)(v9 + 8); /*0x7abc44*/
              if ( !v9 ) /*0x7abc49*/
                goto LABEL_17; /*0x7abc49*/
            }
            *(_DWORD *)(v5 + 8) = *(_DWORD *)(v9 + 8); /*0x7abc50*/
            --g_WOL_ConnectionPool.HashMap_field_0x04; /*0x7abc5c*/
            ScalarDtor::DeleteAndZero((ScalarDtor *)v9, 1); /*0x7abc68*/
          }
LABEL_17:
          if ( *(float *)&v15[4] <= dbl_B76550 ) /*0x7abc7c*/
            goto LABEL_18; /*0x7abc7c*/
        }
      }
    }
  }
LABEL_19:
  v10 = (String *)__2_YAPAXI_Z(0xCu); /*0x7abc88*/
  v11 = v10; /*0x7abc8f*/
  if ( v10 ) /*0x7abc96*/
    unknown_libname_73(v10); /*0x7abc9a*/
  else
    v11 = 0; /*0x7abca1*/
  String::Reassign(v11, (const char **)v15); /*0x7abcaa*/
  *(_DWORD *)v11[1].__pad_0 = 0; /*0x7abcaf*/
  *(_DWORD *)&v11->m_3[1] = a3; /*0x7abcb6*/
  v12 = dword_B76548(v15) & ((1 << SLOBYTE(g_WOL_ConnectionPool.HashMap_field_0x0C)) - 1); /*0x7abcd7*/
  v13 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * v12); /*0x7abcd9*/
  *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * v12) = v11; /*0x7abcdc*/
  if ( v13 ) /*0x7abce1*/
    *(_DWORD *)v11[1].__pad_0 = v13; /*0x7abce3*/
  *(_QWORD *)&v15[4] = (unsigned int)++g_WOL_ConnectionPool.HashMap_field_0x04; /*0x7abcf6*/
  *(_DWORD *)&v15[4] = g_WOL_ConnectionPool.HashMap_field_0x08; /*0x7abd03*/
  if ( (double)(unsigned int)g_WOL_ConnectionPool.HashMap_field_0x04 / (double)g_WOL_ConnectionPool.HashMap_field_0x08 >= dbl_B76558 ) /*0x7abd1d*/
    HashTable::Grow((HashTable *)&g_WOL_ConnectionPool); /*0x7abd24*/
  DeleteAndZero((ObjectClass *)v15); /*0x7abd2d*/
  return 0; /*0x7abd34*/
}



// ==== 0x007ABD40  CChatEventSink::DispatchStub_34  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_34(CChatEventSink *this, int a2, float a3)
{
  float v3; // esi
  float v4; // ebp
  int v5; // esi
  int v6; // esi
  int v7; // edi
  ScalarDtor *v8; // ecx
  ScalarDtor v9; // edi
  double v10; // st7
  int v11; // esi
  int v12; // edi
  String *v13; // eax
  String *v14; // esi
  int v15; // edx
  int v16; // eax

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
        String::Assign_Bool((String *)&a2, (const char *)(LODWORD(v4) + 36)); /*0x7abd74*/
        v5 = *(_DWORD *)(stru_B765EC.lastLayer + 4 * (dword_B76698(&a2) & ((1 << SLOBYTE(stru_B765EC.location[1])) - 1))); /*0x7abd98*/
        if ( !v5 ) /*0x7abd9d*/
          goto LABEL_21; /*0x7abd9d*/
        while ( !(unsigned __int8)String::Compare((String *)v5, (const char **)&a2) ) /*0x7abdb1*/
        {
          v5 = *(_DWORD *)(v5 + 8); /*0x7abdb3*/
          if ( !v5 ) /*0x7abdb8*/
            goto LABEL_21; /*0x7abdb8*/
        }
        if ( !*(_DWORD *)&stru_B765EC.isInLogic ) /*0x7abdc6*/
          goto LABEL_21; /*0x7abdc6*/
        a3 = (double)(unsigned int)(*(_DWORD *)&stru_B765EC.isInLogic - 1) / (double)stru_B765EC.location[0]; /*0x7abdef*/
        v6 = dword_B76698(&a2) & ((1 << SLOBYTE(stru_B765EC.location[1])) - 1); /*0x7abe07*/
        v7 = *(_DWORD *)(stru_B765EC.lastLayer + 4 * v6); /*0x7abe0e*/
        if ( !v7 ) /*0x7abe13*/
          goto LABEL_21; /*0x7abe13*/
        if ( (unsigned __int8)String::Compare((String *)v7, (const char **)&a2) ) /*0x7abe20*/
        {
          v8 = *(ScalarDtor **)(stru_B765EC.lastLayer + 4 * v6); /*0x7abe2f*/
          v9 = v8[2]; /*0x7abe34*/
          if ( v8 ) /*0x7abe37*/
            ScalarDtor::DeleteAndZero(v8, 1); /*0x7abe3b*/
          v10 = a3; /*0x7abe45*/
          *(ScalarDtor *)(stru_B765EC.lastLayer + 4 * v6) = v9; /*0x7abe49*/
          --*(_DWORD *)&stru_B765EC.isInLogic; /*0x7abe58*/
          if ( v10 > dbl_B766A0 ) /*0x7abe62*/
            goto LABEL_21; /*0x7abe62*/
        }
        else
        {
          v11 = *(_DWORD *)(v7 + 8); /*0x7abe66*/
          if ( v11 ) /*0x7abe6b*/
          {
            while ( !(unsigned __int8)String::Compare((String *)v11, (const char **)&a2) ) /*0x7abe7b*/
            {
              v7 = v11; /*0x7abe7d*/
              v11 = *(_DWORD *)(v11 + 8); /*0x7abe7f*/
              if ( !v11 ) /*0x7abe84*/
                goto LABEL_19; /*0x7abe84*/
            }
            *(_DWORD *)(v7 + 8) = *(_DWORD *)(v11 + 8); /*0x7abe8b*/
            --*(_DWORD *)&stru_B765EC.isInLogic; /*0x7abe97*/
            ScalarDtor::DeleteAndZero((ScalarDtor *)v11, 1); /*0x7abea3*/
          }
LABEL_19:
          if ( a3 > dbl_B766A0 ) /*0x7abeb7*/
            goto LABEL_21; /*0x7abeb7*/
        }
        HashMap::Shrink((HashMap *)&stru_B765EC.lastLayer); /*0x7abebe*/
LABEL_21:
        v12 = *(_DWORD *)(LODWORD(v4) + 104); /*0x7abec3*/
        v13 = (String *)__2_YAPAXI_Z(0xCu); /*0x7abec8*/
        v14 = v13; /*0x7abecd*/
        if ( v13 ) /*0x7abed4*/
          unknown_libname_73(v13); /*0x7abed8*/
        else
          v14 = 0; /*0x7abedf*/
        String::Reassign(v14, (const char **)&a2); /*0x7abee8*/
        *(_DWORD *)&v14->m_3[1] = v12; /*0x7abef1*/
        *(_DWORD *)v14[1].__pad_0 = 0; /*0x7abef4*/
        v15 = dword_B76698(&a2) & ((1 << SLOBYTE(stru_B765EC.location[1])) - 1); /*0x7abf11*/
        v16 = *(_DWORD *)(stru_B765EC.lastLayer + 4 * v15); /*0x7abf13*/
        *(_DWORD *)(stru_B765EC.lastLayer + 4 * v15) = v14; /*0x7abf16*/
        if ( v16 ) /*0x7abf1b*/
          *(_DWORD *)v14[1].__pad_0 = v16; /*0x7abf1d*/
        ++*(_DWORD *)&stru_B765EC.isInLogic; /*0x7abf40*/
        if ( (double)*(unsigned int *)&stru_B765EC.isInLogic / (double)stru_B765EC.location[0] >= dbl_B766A8 ) /*0x7abf54*/
          HashTable::Grow((HashTable *)&stru_B765EC.lastLayer); /*0x7abf5b*/
        v4 = *(float *)(LODWORD(v4) + 32); /*0x7abf60*/
      }
      while ( v4 != 0.0 ); /*0x7abd74*/
    }
    DisplayRankingsWOL(0); /*0x7abf6c*/
    DeleteAndZero((ObjectClass *)&a2); /*0x7abf79*/
    return 0; /*0x7abf80*/
  }
}



// ==== 0x007ABFA0  CChatEventSink::DispatchStub_36  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_36(CChatEventSink *this, int a2, int a3)
{
  int v3; // ebp
  int v4; // esi
  int v5; // esi
  int v6; // edi
  ScalarDtor *v7; // ecx
  ScalarDtor v8; // edi
  int v9; // esi
  String *v10; // eax
  String *v11; // esi
  int v12; // edx
  int v13; // eax
  char v15[64]; // [esp+Ch] [ebp-40h] BYREF
  int v16; // [esp+54h] [ebp+8h]

  if ( a2 ) /*0x7abfac*/
  {
    Debug::Log(); /*0x7ac208*/
    return 0; /*0x7ac210*/
  }
  v3 = a3; /*0x7abfb3*/
  dword_A8B3AC = a3; /*0x7abfbd*/
  unknown_libname_73(&a3); /*0x7abfc3*/
  strcpy(v15, unk_A8B380); /*0x7abfe5*/
  String::Assign_Bool((String *)&a3, v15); /*0x7abff7*/
  String::ToLower((String *)&a3); /*0x7ac000*/
  v4 = *(_DWORD *)(stru_B765EC.lastLayer + 4 * (dword_B76698(&a3) & ((1 << SLOBYTE(stru_B765EC.location[1])) - 1))); /*0x7ac024*/
  if ( v4 ) /*0x7ac029*/
  {
    while ( !(unsigned __int8)String::Compare((String *)v4, (const char **)&a3) ) /*0x7ac03d*/
    {
      v4 = *(_DWORD *)(v4 + 8); /*0x7ac03f*/
      if ( !v4 ) /*0x7ac044*/
        goto LABEL_20; /*0x7ac044*/
    }
    if ( *(_DWORD *)&stru_B765EC.isInLogic ) /*0x7ac052*/
    {
      *(float *)&v16 = (double)(unsigned int)(*(_DWORD *)&stru_B765EC.isInLogic - 1) / (double)stru_B765EC.location[0]; /*0x7ac07b*/
      v5 = dword_B76698(&a3) & ((1 << SLOBYTE(stru_B765EC.location[1])) - 1); /*0x7ac093*/
      v6 = *(_DWORD *)(stru_B765EC.lastLayer + 4 * v5); /*0x7ac09a*/
      if ( v6 ) /*0x7ac09f*/
      {
        if ( (unsigned __int8)String::Compare((String *)v6, (const char **)&a3) ) /*0x7ac0ac*/
        {
          v7 = *(ScalarDtor **)(stru_B765EC.lastLayer + 4 * v5); /*0x7ac0bb*/
          v8 = v7[2]; /*0x7ac0c0*/
          if ( v7 ) /*0x7ac0c3*/
            ScalarDtor::DeleteAndZero(v7, 1); /*0x7ac0c7*/
          *(ScalarDtor *)(stru_B765EC.lastLayer + 4 * v5) = v8; /*0x7ac0d5*/
          --*(_DWORD *)&stru_B765EC.isInLogic; /*0x7ac0e4*/
          if ( *(float *)&v16 > dbl_B766A0 ) /*0x7ac0ee*/
            goto LABEL_20; /*0x7ac0ee*/
        }
        else
        {
          v9 = *(_DWORD *)(v6 + 8); /*0x7ac0f2*/
          if ( v9 ) /*0x7ac0f7*/
          {
            while ( !(unsigned __int8)String::Compare((String *)v9, (const char **)&a3) ) /*0x7ac107*/
            {
              v6 = v9; /*0x7ac109*/
              v9 = *(_DWORD *)(v9 + 8); /*0x7ac10b*/
              if ( !v9 ) /*0x7ac110*/
                goto LABEL_18; /*0x7ac110*/
            }
            *(_DWORD *)(v6 + 8) = *(_DWORD *)(v9 + 8); /*0x7ac117*/
            --*(_DWORD *)&stru_B765EC.isInLogic; /*0x7ac123*/
            ScalarDtor::DeleteAndZero((ScalarDtor *)v9, 1); /*0x7ac12f*/
          }
LABEL_18:
          if ( *(float *)&v16 > dbl_B766A0 ) /*0x7ac143*/
            goto LABEL_20; /*0x7ac143*/
        }
        HashMap::Shrink((HashMap *)&stru_B765EC.lastLayer); /*0x7ac14a*/
      }
    }
  }
LABEL_20:
  v10 = (String *)__2_YAPAXI_Z(0xCu); /*0x7ac14f*/
  v11 = v10; /*0x7ac156*/
  if ( v10 ) /*0x7ac15d*/
    unknown_libname_73(v10); /*0x7ac161*/
  else
    v11 = 0; /*0x7ac168*/
  String::Reassign(v11, (const char **)&a3); /*0x7ac171*/
  *(_DWORD *)&v11->m_3[1] = v3; /*0x7ac17a*/
  *(_DWORD *)v11[1].__pad_0 = 0; /*0x7ac17d*/
  v12 = dword_B76698(&a3) & ((1 << SLOBYTE(stru_B765EC.location[1])) - 1); /*0x7ac19a*/
  v13 = *(_DWORD *)(stru_B765EC.lastLayer + 4 * v12); /*0x7ac19c*/
  *(_DWORD *)(stru_B765EC.lastLayer + 4 * v12) = v11; /*0x7ac19f*/
  if ( v13 ) /*0x7ac1a4*/
    *(_DWORD *)v11[1].__pad_0 = v13; /*0x7ac1a6*/
  ++*(_DWORD *)&stru_B765EC.isInLogic; /*0x7ac1bd*/
  if ( (double)*(unsigned int *)&stru_B765EC.isInLogic / (double)stru_B765EC.location[0] >= dbl_B766A8 ) /*0x7ac1e0*/
    HashTable::Grow((HashTable *)&stru_B765EC.lastLayer); /*0x7ac1e7*/
  DeleteAndZero((ObjectClass *)&a3); /*0x7ac1f0*/
  return 0; /*0x7ac1f7*/
}



// ==== 0x007AC220  CChatEventSink::DispatchStub_37  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_37(CChatEventSink *this, int a2, int a3)
{
  ObjectClass *v3; // ebx
  int v4; // ebx
  int v5; // eax
  int v6; // esi
  String *v7; // ecx
  HWND v8; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  ObjectClass *v11; // eax
  HWND v12; // esi
  HWND v13; // eax
  ObjectClass *v15; // [esp-4h] [ebp-78h]
  char v16[108]; // [esp+8h] [ebp-6Ch] BYREF

  if ( a2 >= 0 ) /*0x7ac22b*/
  {
    v15 = v3; /*0x7ac238*/
    v4 = a3; /*0x7ac23b*/
    if ( a3 ) /*0x7ac23d*/
    {
      while ( 1 ) /*0x7ac24e*/
      {
        String::Assign((String *)&a3, (const char *)(v4 + 36)); /*0x7ac24e*/
        if ( (unsigned __int8)MapSeed::CheckName((MapSeed *)&a3) ) /*0x7ac25a*/
          break; /*0x7ac25a*/
LABEL_20:
        DeleteAndZero((ObjectClass *)&a3); /*0x7ac3f9*/
        v4 = *(_DWORD *)(v4 + 32); /*0x7ac405*/
        if ( !v4 ) /*0x7ac40a*/
          goto LABEL_21; /*0x7ac40a*/
      }
      String::AssignFromPtr((String *)&a2, (const char **)&a3); /*0x7ac276*/
      StringVector::Insert((StringVector *)&g_WindowManager, (const char **)&a2, *(int *)g_WindowManager.__pad_0); /*0x7ac28f*/
      StringVector::Insert( /*0x7ac2a8*/
        (StringVector *)&stru_B76900.needsRedraw,
        (const char **)&a2,
        *(int *)&stru_B76900.needsRedraw);
      v5 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7ac2ad*/
      v6 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7ac2b2*/
      if ( *(int *)g_WOL_BuddyList.__pad_0 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x7ac2be*/
      {
        DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7ac2c5*/
        v5 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7ac2ca*/
      }
      if ( v5 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x7ac2d5*/
      {
        DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7ac2dc*/
        v5 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7ac2e1*/
      }
      if ( v6 < v5 ) /*0x7ac2e8*/
      {
        memcpy( /*0x7ac305*/
          (void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v6 + 4),
          (const void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v6),
          4 * (v5 + 0x3FFFFFFF * v6));
        v5 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7ac30a*/
      }
      v7 = (String *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v6); /*0x7ac318*/
      if ( v7 ) /*0x7ac31d*/
      {
        String::AssignFromPtr(v7, (const char **)&a2); /*0x7ac327*/
        v5 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7ac32c*/
      }
      *(_DWORD *)g_WOL_BuddyList.__pad_0 = v5 + 1; /*0x7ac337*/
      if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x7ac33c*/
      {
        if ( (unsigned int)(time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20) < 5 ) /*0x7ac35a*/
        {
LABEL_19:
          DeleteAndZero((ObjectClass *)&a2); /*0x7ac3ed*/
          goto LABEL_20; /*0x7ac3f4*/
        }
        DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x7ac365*/
      }
      if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x7ac371*/
      {
        if ( (unsigned __int8)DynamicStringArray::Get( /*0x7ac37f*/
                                (DynamicStringArray *)&stru_B76900.needsRedraw,
                                (char **)&g_WindowManager.__pad_14[16],
                                0) )
          DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x7ac38f*/
        *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x7ac39b*/
        memset(v16, 0, sizeof(v16)); /*0x7ac3ab*/
        strcpy(&v16[36], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x7ac3d8*/
        (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v16); /*0x7ac3ea*/
      }
      goto LABEL_19; /*0x7ac3ea*/
    }
LABEL_21:
    SendGameListWOL(v15); /*0x7ac410*/
    v8 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7ac41a*/
    if ( v8 ) /*0x7ac422*/
    {
      stru_B77D80.HashTable_field_0x48 &= ~0x200u; /*0x7ac430*/
      if ( !stru_B77D80.HashTable_field_0x48 ) /*0x7ac436*/
        CloseDialog(v8, 0); /*0x7ac43c*/
    }
    Current = (HWND)Dialog::GetCurrent(); /*0x7ac441*/
    DlgItem = GetDlgItem(Current, 1344); /*0x7ac452*/
    if ( DlgItem ) /*0x7ac456*/
      SetFocus(DlgItem); /*0x7ac459*/
    v11 = (ObjectClass *)Dialog::FindByHandle((Dialog *)0x116); /*0x7ac464*/
    v12 = (HWND)v11; /*0x7ac469*/
    if ( v11 ) /*0x7ac46d*/
    {
      FillBuddyListWOL(v11); /*0x7ac471*/
      KillTimer(v12, 0x704u); /*0x7ac47c*/
      v13 = GetDlgItem(v12, 1796); /*0x7ac48a*/
      EnableWindow(v13, 1); /*0x7ac48d*/
    }
  }
  return 0; /*0x7ac493*/
}



// ==== 0x007AC4A0  CChatEventSink::DispatchStub_38  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_38(CChatEventSink *this, int a2, int a3)
{
  return 0; /*0x7ac4a2*/
}



// ==== 0x007AC4B0  CChatEventSink::DispatchStub_39  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_39(CChatEventSink *this, int a2, int a3)
{
  return 0; /*0x7ac4b2*/
}



// ==== 0x007AC4C0  CChatEventSink::DispatchStub_45  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_45(CChatEventSink *this, int a2, int a3)
{
  return 0; /*0x7ac4c2*/
}



// ==== 0x007AC4D0  CChatEventSink::DispatchStub_46  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_46(CChatEventSink *this, int a2, int a3)
{
  return 0; /*0x7ac4d2*/
}



// ==== 0x007AC4E0  CChatEventSink::DispatchStub_47  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_47(CChatEventSink *this, int a2, int a3)
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
void **__thiscall WonlineStringDialogControl::QueryInterface(WonlineStringDialogControl *this, char a2)
{
  *this = (WonlineStringDialogControl)&WonlineStringDialogControl::`vftable'; /*0x7ac5d6*/
  DeleteAndZero((ObjectClass *)(this + 3)); /*0x7ac5dc*/
  *this = (WonlineStringDialogControl)&off_7F7624; /*0x7ac5e3*/
  OwnerDrawControl::InitVtable((OwnerDrawControl *)this); /*0x7ac5e9*/
  if ( (a2 & 1) != 0 ) /*0x7ac5f3*/
    __3_YAXPAX_Z(this); /*0x7ac5f6*/
  return (void **)this; /*0x7ac600*/
}



// ==== 0x007AC610  SimpleWonlineDialogControl::CreateGameWOL_Create_7AC610  this=WonlineStringDialogControl  sig=csp ====
_DWORD *__thiscall CreateGameWOL_Create_7AC610(SimpleWonlineDialogControl *this)
{
  SimpleDialogControl::Constructor((SimpleDialogControl *)this); /*0x7ac613*/
  *(_DWORD *)this->__pad_0 = &off_7F7624; /*0x7ac61b*/
  unknown_libname_73((_DWORD *)this + 3); /*0x7ac621*/
  *(_DWORD *)this->__pad_0 = &WonlineStringDialogControl::`vftable'; /*0x7ac626*/
  return this->__pad_0; /*0x7ac62e*/
}



// ==== 0x007AC630  CreateGameDialogControl::Constructor_WonlineStringDialogControl  this=CreateGameDialogControl  sig=csp ====
void **__thiscall WonlineStringDialogControl_12::Constructor_WonlineStringDialogControl(
        CreateGameDialogControl *this,
        char a2)
{
  this->m_0 = (int)&WonlineStringDialogControl::`vftable'; /*0x7ac636*/
  DeleteAndZero((ObjectClass *)&this->__pad_9[3]); /*0x7ac63c*/
  this->m_0 = (int)&off_7F7624; /*0x7ac643*/
  OwnerDrawControl::InitVtable((OwnerDrawControl *)this); /*0x7ac649*/
  if ( (a2 & 1) != 0 ) /*0x7ac653*/
    __3_YAXPAX_Z(this); /*0x7ac656*/
  return (void **)this; /*0x7ac660*/
}



// ==== 0x007AC670  ObjectClass::System_Init_7AC670  this=ObjectClass  sig=csp ====
int __thiscall System_Init_7AC670(ObjectClass *this)
{
  int result; // eax

  result = (int)this->AbstractClass; /*0x7ac670*/
  if ( this->AbstractClass ) /*0x7ac670*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x7ac679*/
  return result; /*0x7ac67c*/
}



// ==== 0x007AC680  ObjectClass::System_Init_7AC680  this=ObjectClass  sig=csp ====
int __thiscall System_Init_7AC680(ObjectClass *this)
{
  int result; // eax

  result = (int)this->AbstractClass; /*0x7ac680*/
  if ( this->AbstractClass ) /*0x7ac680*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x7ac689*/
  return result; /*0x7ac68c*/
}



// ==== 0x007AC690  _CComObject_VCChatEventSink_ATL::AddRef  this=?$CComObject@VCChatEventSink@@@ATL  sig=csp ====
LONG __thiscall CComObject_CChatEventSink___ATL::AddRef(_CComObject_VCChatEventSink_ATL *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x7ac69e*/
}



// ==== 0x007AC6B0  _CComObject_VCChatEventSink_ATL::Release  this=?$CComObject@VCChatEventSink@@@ATL  sig=csp ====
LONG __thiscall CComObject_CChatEventSink___ATL::Release(_CComObject_VCChatEventSink_ATL *this)
{
  LONG v1; // ebx
  char *Block; // [esp+14h] [ebp+4h]

  v1 = InterlockedDecrement((volatile LONG *)Block + 1); /*0x7ac6c4*/
  if ( !v1 && Block ) /*0x7ac6cc*/
  {
    *(_DWORD *)Block = &ATL::CComObject<CChatEventSink>::`vftable'; /*0x7ac6d3*/
    *((_DWORD *)Block + 1) = 1; /*0x7ac6d9*/
    InterlockedDecrement(&Addend); /*0x7ac6df*/
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 8)); /*0x7ac6e5*/
    __3_YAXPAX_Z(Block); /*0x7ac6ec*/
  }
  return v1; /*0x7ac6f4*/
}



// ==== 0x007AC700  _CComObject_VCChatEventSink_ATL::QueryInterface  this=?$CComObject@VCChatEventSink@@@ATL  sig=csp ====
int __thiscall CComObject_CChatEventSink___ATL::QueryInterface(
        _CComObject_VCChatEventSink_ATL *this,
        _DWORD *a2,
        char **a3)
{
  char ***v3; // esi
  int result; // eax
  char **v5; // eax
  BOOL v6; // ebp
  char **v7; // eax
  char **v8; // eax
  char *v9; // esi
  _DWORD *v10; // [esp+1Ch] [ebp+Ch]

  v3 = (char ***)&off_7F7698; /*0x7ac70a*/
  if ( !v10 ) /*0x7ac70f*/
    return -2147467261; /*0x7ac71a*/
  *v10 = 0; /*0x7ac721*/
  if ( !*a3 && !a3[1] && a3[2] == (char *)192 && a3[3] == (char *)1174405120 ) /*0x7ac743*/
  {
    (*(void (__stdcall **)(_DWORD *))(*a2 + 4))(a2); /*0x7ac756*/
    *v10 = a2; /*0x7ac759*/
    return 0; /*0x7ac761*/
  }
  while ( 1 ) /*0x7ac76d*/
  {
    v5 = *v3; /*0x7ac76d*/
    v6 = *v3 == 0; /*0x7ac776*/
    if ( !*v3 || *v5 == *a3 && v5[1] == a3[1] && v5[2] == a3[2] && v5[3] == a3[3] ) /*0x7ac7a0*/
      break; /*0x7ac7a0*/
LABEL_17:
    v8 = v3[5]; /*0x7ac7c3*/
    v3 += 3; /*0x7ac7c6*/
    if ( !v8 ) /*0x7ac7cb*/
      return -2147467262; /*0x7ac7cd*/
  }
  v7 = v3[2]; /*0x7ac7a2*/
  if ( v7 != (char **)1 ) /*0x7ac7a8*/
  {
    result = ((int (__stdcall *)(_DWORD *, char **, _DWORD *, char **))v7)(a2, a3, v10, v3[1]); /*0x7ac7b5*/
    if ( !result || !v6 && result < 0 ) /*0x7ac7c1*/
      return result; /*0x7ac7c1*/
    goto LABEL_17; /*0x7ac7c1*/
  }
  v9 = (char *)v3[1] + (_DWORD)a2; /*0x7ac7e0*/
  (*(void (__stdcall **)(char *))(*(_DWORD *)v9 + 4))(v9); /*0x7ac7e5*/
  *v10 = v9; /*0x7ac7e8*/
  return 0; /*0x7ac711*/
}



// ==== 0x007AC800  _CComObject_VCNetUtilEventSink_ATL::AddRef  this=?$CComObject@VCNetUtilEventSink@@@ATL  sig=csp ====
LONG __thiscall ComStreamClass::AddRef(_CComObject_VCNetUtilEventSink_ATL *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x7ac80e*/
}



// ==== 0x007AC820  _CComObject_VCNetUtilEventSink_ATL::Release  this=?$CComObject@VCNetUtilEventSink@@@ATL  sig=csp ====
LONG __thiscall ComStreamClass::Release(_CComObject_VCNetUtilEventSink_ATL *this)
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
int __thiscall ComStreamClass::QueryInterface(_CComObject_VCNetUtilEventSink_ATL *this, _DWORD *a2, char **a3)
{
  char ***v3; // esi
  int result; // eax
  char **v5; // eax
  BOOL v6; // ebp
  char **v7; // eax
  char **v8; // eax
  char *v9; // esi
  _DWORD *v10; // [esp+1Ch] [ebp+Ch]

  v3 = (char ***)&off_7F7650; /*0x7ac87a*/
  if ( !v10 ) /*0x7ac87f*/
    return -2147467261; /*0x7ac88a*/
  *v10 = 0; /*0x7ac891*/
  if ( !*a3 && !a3[1] && a3[2] == (char *)192 && a3[3] == (char *)1174405120 ) /*0x7ac8b3*/
  {
    (*(void (__stdcall **)(_DWORD *))(*a2 + 4))(a2); /*0x7ac8c6*/
    *v10 = a2; /*0x7ac8c9*/
    return 0; /*0x7ac8d1*/
  }
  while ( 1 ) /*0x7ac8dd*/
  {
    v5 = *v3; /*0x7ac8dd*/
    v6 = *v3 == 0; /*0x7ac8e6*/
    if ( !*v3 || *v5 == *a3 && v5[1] == a3[1] && v5[2] == a3[2] && v5[3] == a3[3] ) /*0x7ac910*/
      break; /*0x7ac910*/
LABEL_17:
    v8 = v3[5]; /*0x7ac933*/
    v3 += 3; /*0x7ac936*/
    if ( !v8 ) /*0x7ac93b*/
      return -2147467262; /*0x7ac93d*/
  }
  v7 = v3[2]; /*0x7ac912*/
  if ( v7 != (char **)1 ) /*0x7ac918*/
  {
    result = ((int (__stdcall *)(_DWORD *, char **, _DWORD *, char **))v7)(a2, a3, v10, v3[1]); /*0x7ac925*/
    if ( !result || !v6 && result < 0 ) /*0x7ac931*/
      return result; /*0x7ac931*/
    goto LABEL_17; /*0x7ac931*/
  }
  v9 = (char *)v3[1] + (_DWORD)a2; /*0x7ac950*/
  (*(void (__stdcall **)(char *))(*(_DWORD *)v9 + 4))(v9); /*0x7ac955*/
  *v10 = v9; /*0x7ac958*/
  return 0; /*0x7ac881*/
}



// ==== 0x007AC970  _DynamicVectorClass_PAUtConnInfoStruct::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall WonlineStringDialogControl_12::ClearBuffer(_DynamicVectorClass_PAUtConnInfoStruct *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x7ac976*/
  this->m_10 = 0; /*0x7ac979*/
  if ( v2 && BYTE1(this->m_C) ) /*0x7ac980*/
  {
    __3_YAXPAX_Z(v2); /*0x7ac986*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7ac98e*/
  }
  BYTE1(this->m_C) = 0; /*0x7ac991*/
  this->m_8 = 0; /*0x7ac994*/
}



// ==== 0x007AC9A0  _DynamicVectorClass_PAUtConnInfoStruct::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall WonlineStringDialogControl_12::PointerToIndex(
        _DynamicVectorClass_PAUtConnInfoStruct *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7ac9a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x7ac9b5*/
  else
    return 0; /*0x7ac9a7*/
}



// ==== 0x007AC9C0  _VectorClass_PAUtConnInfoStruct::Seek  this=VectorClass  sig=csp ====
int __thiscall WonlineStringDialogControl_12::Seek(_VectorClass_PAUtConnInfoStruct *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x7ac9ca*/
}



// ==== 0x007AC9D0  ObjectClass::GetBuddyEntryWOL  this=ObjectClass  sig=csp ====
int __thiscall GetBuddyEntryWOL(ObjectClass *this, _DWORD *a2, int a3)
{
  int result; // eax
  int v4; // ecx

  result = a3; /*0x7ac9d0*/
  if ( a3 < 0 || a3 >= (int)this->AbstractClass ) /*0x7ac9da*/
  {
    LOBYTE(result) = 0; /*0x7ac9f4*/
  }
  else
  {
    result = (int)this->?; /*0x7ac9e3*/
    v4 = result + 248 * a3; /*0x7ac9e6*/
    LOBYTE(result) = 1; /*0x7ac9ed*/
    *a2 = v4; /*0x7ac9ef*/
  }
  return result; /*0x7ac9f1*/
}



// ==== 0x007ACA00  DynamicClass::Insert  this=DynamicClass  sig=csp ====
char __thiscall DynamicClass::Insert(DynamicClass *this, const void *a2, int a3)
{
  int v4; // ebp
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // esi
  void *v9; // edx
  const void *v10; // esi
  int v11; // eax
  unsigned int v12; // esi
  void *v13; // edx
  const void *v14; // esi
  void *v15; // edi
  void *v17; // [esp+10h] [ebp-4h]
  void *v18; // [esp+10h] [ebp-4h]
  int v19; // [esp+1Ch] [ebp+8h]
  int v20; // [esp+1Ch] [ebp+8h]

  v4 = a3; /*0x7aca05*/
  v5 = (int)*this; /*0x7aca09*/
  if ( a3 > v5 ) /*0x7aca0f*/
    v4 = v5; /*0x7aca11*/
  v6 = *((_DWORD *)this + 1); /*0x7aca13*/
  if ( v4 >= v6 && v5 >= v6 ) /*0x7aca20*/
  {
    v7 = 2 * v5; /*0x7aca22*/
    v19 = 2 * v5; /*0x7aca28*/
    if ( 2 * v5 < 10 ) /*0x7aca2c*/
    {
      v19 = 10; /*0x7aca2e*/
      v7 = 10; /*0x7aca36*/
    }
    v8 = 108 * v7; /*0x7aca40*/
    v9 = (void *)__2_YAPAXI_Z(108 * v7); /*0x7aca49*/
    memset(v9, 0, v8); /*0x7aca54*/
    v17 = v9; /*0x7aca5e*/
    v10 = (const void *)*((_DWORD *)this + 2); /*0x7aca64*/
    if ( v10 ) /*0x7aca69*/
      qmemcpy(v9, v10, 108 * *(_DWORD *)this); /*0x7aca7d*/
    __3_YAXPAX_Z(*((void **)this + 2)); /*0x7aca8a*/
    *((_DWORD *)this + 2) = v17; /*0x7aca9a*/
    *((_DWORD *)this + 1) = v19; /*0x7aca9d*/
  }
  if ( *(_DWORD *)this >= *((_DWORD *)this + 1) ) /*0x7acaa7*/
  {
    v11 = 2 * *(_DWORD *)this; /*0x7acaa9*/
    v20 = v11; /*0x7acaae*/
    if ( v11 < 10 ) /*0x7acab2*/
    {
      v20 = 10; /*0x7acab4*/
      v11 = 10; /*0x7acabc*/
    }
    v12 = 108 * v11; /*0x7acac6*/
    v13 = (void *)__2_YAPAXI_Z(108 * v11); /*0x7acacf*/
    memset(v13, 0, v12); /*0x7acada*/
    v18 = v13; /*0x7acae4*/
    v14 = (const void *)*((_DWORD *)this + 2); /*0x7acaea*/
    if ( v14 ) /*0x7acaef*/
      qmemcpy(v13, v14, 108 * *(_DWORD *)this); /*0x7acb03*/
    __3_YAXPAX_Z(*((void **)this + 2)); /*0x7acb10*/
    *((_DWORD *)this + 2) = v18; /*0x7acb20*/
    *((_DWORD *)this + 1) = v20; /*0x7acb23*/
  }
  if ( v4 < *(_DWORD *)this ) /*0x7acb2a*/
    memcpy( /*0x7acb53*/
      (void *)(*((_DWORD *)this + 2) + 36 * (3 * v4 + 3)),
      (const void *)(*((_DWORD *)this + 2) + 108 * v4),
      108 * *(_DWORD *)this - 108 * v4);
  v15 = (void *)(*((_DWORD *)this + 2) + 108 * v4); /*0x7acb65*/
  if ( v15 ) /*0x7acb6a*/
    qmemcpy(v15, a2, 0x6Cu); /*0x7acb75*/
  ++*(_DWORD *)this; /*0x7acb7c*/
  return 1; /*0x7acb79*/
}



// ==== 0x007ACB90  ObjectClass::StartGameWOL_Start_7ACB90  this=ObjectClass  sig=csp ====
char __thiscall StartGameWOL_Start_7ACB90(ObjectClass *this, void *a2, int a3)
{
  if ( a3 < 0 || a3 >= (int)this->AbstractClass ) /*0x7acb9b*/
    return 0; /*0x7acbbc*/
  qmemcpy(a2, (char *)this->? + 108 * a3, 0x6Cu); /*0x7acbb3*/
  return 1; /*0x7acbb8*/
}



// ==== 0x007ACBD0  ObjectClass::?_Release__NonReentrantLock_details_Concurrency__QAEXXZ_1  this=ObjectClass  sig=csp ====
void __thiscall __Release__NonReentrantLock_details_Concurrency__QAEXXZ_1(
        Concurrency::details::_NonReentrantLock *this)
{
  *(_DWORD *)this = 0; /*0x7acbd0*/
}



// ==== 0x007ACBE0  ObjectClass::ConnectAndLoginWOL_Connect_7ACBE0  this=ObjectClass  sig=csp ====
char __thiscall ConnectAndLoginWOL_Connect_7ACBE0(ObjectClass *this, const char **a2, char **Block)
{
  String *v4; // eax
  String *v5; // esi
  char *v6; // ecx
  int v7; // edx
  int v8; // ecx
  int vtable2; // esi
  char *v10; // eax
  char *v11; // ecx
  void *v12; // edi
  unsigned int v13; // edx
  char **v14; // edi
  char *v15; // esi
  int v16; // edx
  int v17; // ecx
  char *v18; // eax
  const char **v20; // [esp+18h] [ebp+4h]
  char **Blocka; // [esp+1Ch] [ebp+8h]

  v4 = (String *)__2_YAPAXI_Z(0xCu); /*0x7acbea*/
  v5 = v4; /*0x7acbef*/
  if ( v4 ) /*0x7acbf6*/
    unknown_libname_73(v4); /*0x7acbfa*/
  else
    v5 = 0; /*0x7acc01*/
  String::Reassign(v5, a2); /*0x7acc0a*/
  v6 = *Block; /*0x7acc13*/
  *(_DWORD *)v5[1].__pad_0 = 0; /*0x7acc15*/
  *(_DWORD *)&v5->m_3[1] = v6; /*0x7acc1c*/
  v7 = ((int (__thiscall *)(const char **))this->?)(a2) & ((1 << (int)this->?) - 1); /*0x7acc2f*/
  v8 = *((_DWORD *)this->AbstractClass + v7); /*0x7acc33*/
  *((_DWORD *)this->AbstractClass + v7) = v5; /*0x7acc3b*/
  if ( v8 ) /*0x7acc3d*/
    *(_DWORD *)v5[1].__pad_0 = v8; /*0x7acc3f*/
  vtable2 = (int)this->?; /*0x7acc45*/
  v10 = (char *)this->? + 1; /*0x7acc48*/
  this->? = v10; /*0x7acc55*/
  if ( (double)(unsigned int)v10 / (double)vtable2 >= *(double *)&this->owningHouseIndex && LOBYTE(this->?) != 1 ) /*0x7acc7e*/
  {
    Blocka = (char **)this->AbstractClass; /*0x7acc89*/
    v11 = (char *)this->? + 1; /*0x7acc97*/
    this->? = (void *)(2 * vtable2); /*0x7acc99*/
    this->? = v11; /*0x7acc9c*/
    v12 = (void *)__2_YAPAXI_Z(8 * vtable2); /*0x7acca7*/
    v13 = 4 * (int)this->?; /*0x7accac*/
    this->AbstractClass = v12; /*0x7accb3*/
    memset(v12, 0, v13); /*0x7accb8*/
    if ( vtable2 > 0 ) /*0x7accc3*/
    {
      v14 = Blocka; /*0x7accc5*/
      v20 = (const char **)vtable2; /*0x7accc9*/
      do /*0x7acd07*/
      {
        v15 = *v14; /*0x7acccd*/
        if ( *v14 ) /*0x7acccd*/
        {
          do /*0x7accf9*/
          {
            v16 = ((int (__thiscall *)(char *))this->?)(v15) & ((1 << (int)this->?) - 1); /*0x7acce3*/
            v17 = *((_DWORD *)this->AbstractClass + v16); /*0x7acce7*/
            *((_DWORD *)this->AbstractClass + v16) = v15; /*0x7acced*/
            v18 = (char *)*((_DWORD *)v15 + 2); /*0x7accef*/
            *((_DWORD *)v15 + 2) = v17; /*0x7accf2*/
            v15 = v18; /*0x7accf5*/
          }
          while ( v18 ); /*0x7accf9*/
        }
        ++v14; /*0x7accff*/
        v20 = (const char **)((char *)v20 - 1); /*0x7acd03*/
      }
      while ( v20 ); /*0x7acd07*/
    }
    __3_YAXPAX_Z(Blocka); /*0x7acd0e*/
  }
  return 1; /*0x7acd16*/
}



// ==== 0x007ACD30  Array::CleanupArrayWOL  this=Array  sig=csp ====
int __thiscall Array::CleanupArrayWOL(Array *this)
{
  int i; // edi
  int result; // eax

  for ( i = 0; i < *(_DWORD *)this->__pad_0; ++i ) /*0x7acd39*/
  {
    DeleteAndZero((ObjectClass *)(*(_DWORD *)this->__pad_8 + 4 * i)); /*0x7acd41*/
    result = *(_DWORD *)this->__pad_0; /*0x7acd46*/
  }
  *(_DWORD *)this->__pad_0 = 0; /*0x7acd4d*/
  return result; /*0x7acd53*/
}



// ==== 0x007ACD60  DynamicArray::Remove  this=DynamicArray  sig=csp ====
char __thiscall DynamicArray::Remove(DynamicArray *this, int a2)
{
  int v3; // eax
  int v5; // esi
  int v6; // eax
  int DynamicArray_field_0x04; // ecx
  int v8; // ebp
  void *v9; // eax
  const void *DynamicArray_field_0x08; // esi
  int v11; // [esp+8h] [ebp+4h]

  v3 = *(_DWORD *)this->__pad_0; /*0x7acd63*/
  if ( !*(_DWORD *)this->__pad_0 ) /*0x7acd63*/
    return 0; /*0x7acd69*/
  v5 = a2; /*0x7acd71*/
  if ( a2 < 0 ) /*0x7acd78*/
    v5 = 0; /*0x7acd7a*/
  if ( v5 >= v3 ) /*0x7acd7e*/
    v5 = v3 - 1; /*0x7acd80*/
  DeleteAndZero((ObjectClass *)(4 * v5 + this->DynamicArray_field_0x08)); /*0x7acd8f*/
  memcpy( /*0x7acdb0*/
    (void *)(this->DynamicArray_field_0x08 + 4 * v5),
    (const void *)(this->DynamicArray_field_0x08 + 4 * (v5 + 1)),
    4 * (*(_DWORD *)this->__pad_0 + 0x3FFFFFFF * (v5 + 1)));
  v6 = *(_DWORD *)this->__pad_0 - 1; /*0x7acdbb*/
  *(_DWORD *)this->__pad_0 = v6; /*0x7acdbd*/
  DynamicArray_field_0x04 = this->DynamicArray_field_0x04; /*0x7acdbf*/
  if ( 3 * v6 <= DynamicArray_field_0x04 ) /*0x7acdc7*/
  {
    v8 = DynamicArray_field_0x04 / 2; /*0x7acdd0*/
    if ( DynamicArray_field_0x04 / 2 < 10 ) /*0x7acdd5*/
      v8 = 10; /*0x7acdd7*/
    if ( v8 < DynamicArray_field_0x04 ) /*0x7acdde*/
    {
      v9 = (void *)__2_YAPAXI_Z(4 * v8); /*0x7acde8*/
      DynamicArray_field_0x08 = (const void *)this->DynamicArray_field_0x08; /*0x7acded*/
      v11 = (int)v9; /*0x7acdf5*/
      if ( DynamicArray_field_0x08 ) /*0x7acdf9*/
        qmemcpy(v9, DynamicArray_field_0x08, 4 * *(_DWORD *)this->__pad_0); /*0x7ace07*/
      __3_YAXPAX_Z((void *)this->DynamicArray_field_0x08); /*0x7ace14*/
      this->DynamicArray_field_0x08 = v11; /*0x7ace20*/
      this->DynamicArray_field_0x04 = v8; /*0x7ace23*/
    }
  }
  return 1; /*0x7acd6b*/
}



// ==== 0x007ACE30  DynamicStringArray::Get  this=DynamicStringArray  sig=csp ====
int __thiscall DynamicStringArray::Get(DynamicStringArray *this, char **a2, int a3)
{
  int result; // eax

  result = a3; /*0x7ace30*/
  if ( a3 < 0 || a3 >= *(_DWORD *)this ) /*0x7ace3a*/
  {
    LOBYTE(result) = 0; /*0x7ace51*/
  }
  else
  {
    result = (int)String::Reassign((String *)a2, (const char **)(*((_DWORD *)this + 2) + 4 * a3)); /*0x7ace47*/
    LOBYTE(result) = 1; /*0x7ace4c*/
  }
  return result; /*0x7ace4e*/
}



// ==== 0x007ACE60  HashTable::CleanupAndResize  this=HashTable  sig=csp ====
int __thiscall HashTable::CleanupAndResize(HashTable *this)
{
  unsigned int i; // ebp
  ObjectClass *v3; // esi
  ObjectClass *v4; // edi
  int result; // eax
  unsigned int HashTable_field_0x08; // esi
  int HashTable_field_0x0C; // ecx
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

  for ( i = 0; i < this->HashTable_field_0x08; *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * i - 4) = 0 ) /*0x7ace67*/
  {
    v3 = *(ObjectClass **)(*(_DWORD *)this->__pad_0 + 4 * i); /*0x7ace72*/
    while ( v3 ) /*0x7ace77*/
    {
      v4 = v3; /*0x7ace79*/
      v3 = (ObjectClass *)v3->?; /*0x7ace7b*/
      DeleteAndZero(v4); /*0x7ace84*/
      __3_YAXPAX_Z(v4); /*0x7ace8a*/
    }
    ++i; /*0x7ace98*/
  }
  result = this->HashTable_field_0x30; /*0x7acea8*/
  HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7aceab*/
  for ( this->HashTable_field_0x04 = 0; HashTable_field_0x08 > result; HashTable_field_0x08 = this->HashTable_field_0x08 ) /*0x7aceb7*/
  {
    if ( LOBYTE(this->HashTable_field_0x14) ) /*0x7acebd*/
      break; /*0x7acec2*/
    if ( HashTable_field_0x08 > result ) /*0x7aceca*/
    {
      HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x7aced0*/
      v8 = *(int **)this->__pad_0; /*0x7aced3*/
      v17 = *(int **)this->__pad_0; /*0x7aced7*/
      this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x7acede*/
      this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x7acee8*/
      v9 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x7acef4*/
      v10 = 4 * this->HashTable_field_0x08; /*0x7acef9*/
      *(_DWORD *)this->__pad_0 = v9; /*0x7acf00*/
      memset(v9, 0, v10); /*0x7acf05*/
      if ( (int)HashTable_field_0x08 > 0 ) /*0x7acf10*/
      {
        v11 = v8; /*0x7acf12*/
        v12 = HashTable_field_0x08; /*0x7acf14*/
        do /*0x7acf48*/
        {
          v13 = *v11; /*0x7acf16*/
          if ( *v11 ) /*0x7acf16*/
          {
            do /*0x7acf42*/
            {
              v14 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v13) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7acf2c*/
              v15 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v14); /*0x7acf30*/
              *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v14) = v13; /*0x7acf36*/
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
    result = this->HashTable_field_0x30; /*0x7acf57*/
  }
  return result; /*0x7acf65*/
}



// ==== 0x007ACF70  HashTable::Rebuild  this=HashTable  sig=csp ====
int __thiscall HashTable::Rebuild(HashTable *this)
{
  unsigned int i; // ebp
  ObjectClass *customSound; // esi
  ObjectClass *v4; // edi
  int result; // eax
  unsigned int HashTable_field_0x08; // esi
  int HashTable_field_0x0C; // ecx
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

  for ( i = 0; i < this->HashTable_field_0x08; *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * i - 4) = 0 ) /*0x7acf77*/
  {
    customSound = *(ObjectClass **)(*(_DWORD *)this->__pad_0 + 4 * i); /*0x7acf82*/
    while ( customSound ) /*0x7acf87*/
    {
      v4 = customSound; /*0x7acf89*/
      customSound = (ObjectClass *)customSound[1].customSound; /*0x7acf8b*/
      DeleteAndZero(v4); /*0x7acf97*/
      __3_YAXPAX_Z(v4); /*0x7acf9d*/
    }
    ++i; /*0x7acfab*/
  }
  result = this->HashTable_field_0x30; /*0x7acfbb*/
  HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7acfbe*/
  for ( this->HashTable_field_0x04 = 0; HashTable_field_0x08 > result; HashTable_field_0x08 = this->HashTable_field_0x08 ) /*0x7acfca*/
  {
    if ( LOBYTE(this->HashTable_field_0x14) ) /*0x7acfd0*/
      break; /*0x7acfd5*/
    if ( HashTable_field_0x08 > result ) /*0x7acfdd*/
    {
      HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x7acfe3*/
      v8 = *(int **)this->__pad_0; /*0x7acfe6*/
      v17 = *(int **)this->__pad_0; /*0x7acfea*/
      this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x7acff1*/
      this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x7acffb*/
      v9 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x7ad007*/
      v10 = 4 * this->HashTable_field_0x08; /*0x7ad00c*/
      *(_DWORD *)this->__pad_0 = v9; /*0x7ad013*/
      memset(v9, 0, v10); /*0x7ad018*/
      if ( (int)HashTable_field_0x08 > 0 ) /*0x7ad023*/
      {
        v11 = v8; /*0x7ad025*/
        v12 = HashTable_field_0x08; /*0x7ad027*/
        do /*0x7ad061*/
        {
          v13 = *v11; /*0x7ad029*/
          if ( *v11 ) /*0x7ad029*/
          {
            do /*0x7ad05b*/
            {
              v14 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v13) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7ad03f*/
              v15 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v14); /*0x7ad043*/
              *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v14) = v13; /*0x7ad049*/
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
    result = this->HashTable_field_0x30; /*0x7ad070*/
  }
  return result; /*0x7ad07e*/
}



// ==== 0x007AD090  _VectorClass_PAUtConnInfoStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall WonlineStringDialogControl_12::AddRef(_VectorClass_PAUtConnInfoStruct *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x7ad092*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x7ad09d*/
  {
    v3 = 0; /*0x7ad09f*/
    if ( m_8 <= 0 ) /*0x7ad0a3*/
      return 1; /*0x7ad0c3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x7ad0a5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x7ad0ab*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x7ad0b4*/
    {
      ++v3; /*0x7ad0b6*/
      ++v4; /*0x7ad0b7*/
      if ( v3 >= m_8 ) /*0x7ad0bc*/
        return 1; /*0x7ad0bc*/
    }
  }
  return 0; /*0x7ad0be*/
}



// ==== 0x007AD0D0  _VectorClass_PAUtConnInfoStruct::Release  this=VectorClass  sig=csp ====
char __thiscall WonlineStringDialogControl_12::Release(_VectorClass_PAUtConnInfoStruct *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x7ad0dc*/
  {
    LOBYTE(this->m_C) = 0; /*0x7ad0e6*/
    if ( a3 ) /*0x7ad0ec*/
      v4 = a3; /*0x7ad102*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x7ad0fe*/
    LOBYTE(this->m_C) = 1; /*0x7ad106*/
    if ( v4 ) /*0x7ad10a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x7ad115*/
      {
        m_8 = this->m_8; /*0x7ad11c*/
        if ( a2 < m_8 ) /*0x7ad121*/
          m_8 = a2; /*0x7ad123*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x7ad129*/
          ++i; /*0x7ad12e*/
        if ( BYTE1(this->m_C) ) /*0x7ad13b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7ad146*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x7ad14e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x7ad157*/
      this->m_8 = a2; /*0x7ad15f*/
      BYTE1(this->m_C) = a3 == 0; /*0x7ad162*/
      return 1; /*0x7ad168*/
    }
    else
    {
      return 0; /*0x7ad10f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUtConnInfoStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x7ad172*/
    return 1; /*0x7ad178*/
  }
}



// ==== 0x007AD180  _VectorClass_PAUtConnInfoStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall WonlineStringDialogControl_12::ddtor(_VectorClass_PAUtConnInfoStruct *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x7ad18d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7ad193*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7ad19b*/
  }
  BYTE1(this->m_C) = 0; /*0x7ad19e*/
  this->m_8 = 0; /*0x7ad1a1*/
}



// ==== 0x007AD1B0  _VectorClass_PAUtConnInfoStruct::Read  this=VectorClass  sig=csp ====
int __thiscall WonlineStringDialogControl_12::Read(_VectorClass_PAUtConnInfoStruct *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x7ad1b0*/
    return 0; /*0x7ad1b8*/
  m_8 = this->m_8; /*0x7ad1be*/
  result = 0; /*0x7ad1c1*/
  if ( m_8 <= 0 ) /*0x7ad1c5*/
    return -1; /*0x7ad1dc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7ad1cb*/
  {
    if ( ++result >= m_8 ) /*0x7ad1da*/
      return -1; /*0x7ad1da*/
  }
  return result; /*0x7ad1ba*/
}



// ==== 0x007AD1F0  _VectorClass_PAUtConnInfoStruct::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall WonlineStringDialogControl_12::Write(_VectorClass_PAUtConnInfoStruct *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7ad1f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x7ad205*/
  else
    return 0; /*0x7ad1f7*/
}



// ==== 0x007AD210  _DynamicVectorClass_PAUtConnInfoStruct::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall WonlineStringDialogControl_12::SetCapacity(
        _DynamicVectorClass_PAUtConnInfoStruct *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x7ad21c*/
  {
    LOBYTE(this->m_C) = 0; /*0x7ad222*/
    if ( a3 ) /*0x7ad228*/
      v4 = a3; /*0x7ad23e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x7ad23a*/
    LOBYTE(this->m_C) = 1; /*0x7ad242*/
    if ( !v4 ) /*0x7ad246*/
      return 0; /*0x7ad2ba*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x7ad248*/
    {
      m_8 = this->m_8; /*0x7ad24f*/
      if ( a2 < m_8 ) /*0x7ad254*/
        m_8 = a2; /*0x7ad256*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x7ad25c*/
        ++i; /*0x7ad261*/
      if ( BYTE1(this->m_C) ) /*0x7ad26e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7ad279*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x7ad281*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x7ad28a*/
    this->m_8 = a2; /*0x7ad292*/
    BYTE1(this->m_C) = a3 == 0; /*0x7ad295*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUtConnInfoStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x7ad29e*/
  }
  v7 = this->m_8; /*0x7ad2a1*/
  if ( v7 < this->m_10 ) /*0x7ad2a9*/
    this->m_10 = v7; /*0x7ad2ab*/
  return 1; /*0x7ad2ae*/
}



// ==== 0x007AD2C0  _DynamicVectorClass_PAUtConnInfoStruct::FindItem  this=DynamicVector  sig=csp ====
int __thiscall WonlineStringDialogControl_12::FindItem(_DynamicVectorClass_PAUtConnInfoStruct *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x7ad2c0*/
  result = 0; /*0x7ad2c3*/
  if ( m_10 <= 0 ) /*0x7ad2c8*/
    return -1; /*0x7ad2df*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7ad2ce*/
  {
    if ( ++result >= m_10 ) /*0x7ad2dd*/
      return -1; /*0x7ad2dd*/
  }
  return result; /*0x7ad2e2*/
}



// ==== 0x007AD2F0  ObjectClass::ResetSystemWOL_Reset  this=ObjectClass  sig=csp ====
void **__thiscall ResetSystemWOL_Reset(ObjectClass *this, char a2)
{
  DeleteAndZero(this); /*0x7ad2f3*/
  if ( (a2 & 1) != 0 ) /*0x7ad2fd*/
    __3_YAXPAX_Z(this); /*0x7ad300*/
  return &this->AbstractClass; /*0x7ad30a*/
}



// ==== 0x007AD310  ScalarDtor::DeleteAndZero  this=ScalarDtor  sig=csp ====
void **__thiscall ScalarDtor::DeleteAndZero(ScalarDtor *this, char a2)
{
  DeleteAndZero((ObjectClass *)this); /*0x7ad313*/
  if ( (a2 & 1) != 0 ) /*0x7ad31d*/
    __3_YAXPAX_Z(this); /*0x7ad320*/
  return (void **)this; /*0x7ad32a*/
}



// ==== 0x007AD330  Object::DtorWithDelete  this=Object  sig=csp ====
void **__thiscall Object::DtorWithDelete(Object *this, char a2)
{
  DeleteAndZero((ObjectClass *)this); /*0x7ad333*/
  if ( (a2 & 1) != 0 ) /*0x7ad33d*/
    __3_YAXPAX_Z(this); /*0x7ad340*/
  return (void **)this; /*0x7ad34a*/
}



// ==== 0x007AD350  CChatEventSink::DeleteAndZero  this=CChatEventSink  sig=csp ====
void **__thiscall CChatEventSink::DeleteAndZero(CChatEventSink *this, char a2)
{
  DeleteAndZero((ObjectClass *)this); /*0x7ad353*/
  if ( (a2 & 1) != 0 ) /*0x7ad35d*/
    __3_YAXPAX_Z(this); /*0x7ad360*/
  return (void **)this; /*0x7ad36a*/
}



// ==== 0x007AD370  _VectorClass_PAUtConnInfoStruct::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall WonlineStringDialogControl_12::QueryInterface(_VectorClass_PAUtConnInfoStruct *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x7ad373*/
  *(_DWORD *)this->__pad_0 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x7ad376*/
  if ( v3 && BYTE1(this->m_C) ) /*0x7ad380*/
  {
    __3_YAXPAX_Z(v3); /*0x7ad388*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7ad390*/
  }
  BYTE1(this->m_C) = 0; /*0x7ad39b*/
  this->m_8 = 0; /*0x7ad3a1*/
  if ( (a2 & 1) != 0 ) /*0x7ad3a8*/
    __3_YAXPAX_Z(this); /*0x7ad3ab*/
  return this->__pad_0; /*0x7ad3b5*/
}



// ==== 0x007AD3C0  _DynamicVectorClass_PAUtConnInfoStruct::Constructor_VectorClass_tConnInfoStruct___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall WonlineStringDialogControl_12::Constructor_VectorClass_tConnInfoStruct___(
        _DynamicVectorClass_PAUtConnInfoStruct *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x7ad3c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x7ad3c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x7ad3d0*/
  {
    __3_YAXPAX_Z(v3); /*0x7ad3d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7ad3e0*/
  }
  BYTE1(this->m_C) = 0; /*0x7ad3eb*/
  this->m_8 = 0; /*0x7ad3f1*/
  if ( (a2 & 1) != 0 ) /*0x7ad3f8*/
    __3_YAXPAX_Z(this); /*0x7ad3fb*/
  return this->__pad_0; /*0x7ad405*/
}



// ==== 0x007AD410  ?$CComObject@VCDownloadEventSink@@@ATL::System_Init_7AD410  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
char *__thiscall sub_7AD410(char *this, int a2)
{
  this->q010 = 0; /*0x7ad416*/
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 8)); /*0x7ad41e*/
  *(_DWORD *)this = &ATL::CComObject<CDownloadEventSink>::`vftable'; /*0x7ad429*/
  InterlockedIncrement(&Addend); /*0x7ad42f*/
  return this; /*0x7ad437*/
}



// ==== 0x007AD440  _CComObject_VCDownloadEventSink_ATL::ddtor  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
int __thiscall WonlineStringDialogControl_28::ddtor(_CComObject_VCDownloadEventSink_ATL *this)
{
  HWND Current; // eax

  Current = (HWND)Dialog::GetCurrent(); /*0x7ad449*/
  SendMessageA(Current, 0x5F4u, 0, 0); /*0x7ad44f*/
  return 0; /*0x7ad457*/
}



// ==== 0x007AD460  _CComObject_VCDownloadEventSink_ATL::Read  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
int __thiscall WonlineStringDialogControl_28::Read(_CComObject_VCDownloadEventSink_ATL *this, LPARAM lParam)
{
  HWND Current; // eax
  LPARAM lParama; // [esp+8h] [ebp+8h]

  Current = (HWND)Dialog::GetCurrent(); /*0x7ad46c*/
  SendMessageA(Current, 0x5F5u, 0, lParama); /*0x7ad472*/
  return 0; /*0x7ad47a*/
}



// ==== 0x007AD480  _CComObject_VCDownloadEventSink_ATL::Write  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
int __thiscall WonlineStringDialogControl_28::Write(
        _CComObject_VCDownloadEventSink_ATL *this,
        wchar_t *Format,
        unsigned int Formata,
        int a4,
        int a5)
{
  HWND Current; // eax
  wchar_t *v6; // eax
  wchar_t *StringCSF; // eax
  HWND v8; // eax
  HWND DlgItem; // eax
  wchar_t Buffer[200]; // [esp+8h] [ebp-190h] BYREF
  int v12; // [esp+1ACh] [ebp+14h]

  Buffer[0] = 0; /*0x7ad49d*/
  Current = (HWND)Dialog::GetCurrent(); /*0x7ad4b7*/
  SendDlgItemMessageA(Current, 1478, 0x402u, 100 * Formata / a4, 0); /*0x7ad4bd*/
  if ( v12 <= 0 ) /*0x7ad4cc*/
  {
    StringCSF = GetStringCSF(aTxtBytesWoTime, 0, g_Str_File_wonline_cpp, 5172); /*0x7ad50a*/
    swprintf(Buffer, (const size_t)StringCSF, (const wchar_t *const)Formata, a4); /*0x7ad515*/
  }
  else
  {
    v6 = GetStringCSF(aTxtBytesWTime, 0, g_Str_File_wonline_cpp, 5167); /*0x7ad4e2*/
    swprintf(Buffer, (const size_t)v6, (const wchar_t *const)Formata, a4, v12); /*0x7ad4ed*/
  }
  if ( time(0) != dword_B77EA8 ) /*0x7ad52d*/
  {
    v8 = (HWND)Dialog::GetCurrent(); /*0x7ad538*/
    DlgItem = GetDlgItem(v8, 1480); /*0x7ad53e*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x7ad551*/
    dword_B77EA8 = time(0); /*0x7ad561*/
  }
  return 0; /*0x7ad52f*/
}



// ==== 0x007AD580  _CComObject_VCDownloadEventSink_ATL::Draw  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
int __thiscall WonlineStringDialogControl_28::Draw(_CComObject_VCDownloadEventSink_ATL *this, int a2)
{
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v5; // [esp-4h] [ebp-194h]
  wchar_t *StringCSF; // [esp-4h] [ebp-194h]
  wchar_t Buffer[200]; // [esp+0h] [ebp-190h] BYREF
  int v8; // [esp+198h] [ebp+8h]

  Buffer[0] = 0; /*0x7ad58d*/
  if ( v8 == 2 ) /*0x7ad597*/
  {
    StringCSF = GetStringCSF(aTxtConnecting, 0, g_Str_File_wonline_cpp, 5191); /*0x7ad5d6*/
    swprintf(Buffer, (const size_t)StringCSF, *(const wchar_t *const *)Buffer); /*0x7ad5d8*/
  }
  else if ( v8 == 4 ) /*0x7ad59c*/
  {
    v5 = GetStringCSF(aTxtFindingPatc, 0, g_Str_File_wonline_cpp, 5195); /*0x7ad5b4*/
    swprintf(Buffer, (const size_t)v5, *(const wchar_t *const *)Buffer); /*0x7ad5ba*/
  }
  Current = (HWND)Dialog::GetCurrent(); /*0x7ad5e5*/
  DlgItem = GetDlgItem(Current, 1480); /*0x7ad5eb*/
  SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x7ad5fe*/
  return 0; /*0x7ad606*/
}



// ==== 0x007AD610  _CComObject_VCDownloadEventSink_ATL::StubReturnFalse  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
int __thiscall WonlineStringDialogControl_28::StubReturnFalse(_CComObject_VCDownloadEventSink_ATL *this)
{
  return 0; /*0x7ad612*/
}



// ==== 0x007AD620  _CComObject_VCDownloadEventSink_ATL::AddRef  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
LONG __thiscall WonlineStringDialogControl_28::AddRef(_CComObject_VCDownloadEventSink_ATL *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x7ad62e*/
}



// ==== 0x007AD640  _CComObject_VCDownloadEventSink_ATL::Release  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
LONG __thiscall WonlineStringDialogControl_28::Release(_CComObject_VCDownloadEventSink_ATL *this)
{
  LONG v1; // ebx
  char *Block; // [esp+14h] [ebp+4h]

  v1 = InterlockedDecrement((volatile LONG *)Block + 1); /*0x7ad654*/
  if ( !v1 && Block ) /*0x7ad65c*/
  {
    *(_DWORD *)Block = &ATL::CComObject<CDownloadEventSink>::`vftable'; /*0x7ad663*/
    *((_DWORD *)Block + 1) = 1; /*0x7ad669*/
    InterlockedDecrement(&Addend); /*0x7ad66f*/
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 8)); /*0x7ad675*/
    __3_YAXPAX_Z(Block); /*0x7ad67c*/
  }
  return v1; /*0x7ad684*/
}



// ==== 0x007AD690  _CComObject_VCDownloadEventSink_ATL::QueryInterface  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
int __thiscall WonlineStringDialogControl_28::QueryInterface(
        _CComObject_VCDownloadEventSink_ATL *this,
        _DWORD *a2,
        char **a3)
{
  char ***v3; // esi
  int result; // eax
  char **v5; // eax
  BOOL v6; // ebp
  char **v7; // eax
  char **v8; // eax
  char *v9; // esi
  _DWORD *v10; // [esp+1Ch] [ebp+Ch]

  v3 = (char ***)&off_7F7638; /*0x7ad69a*/
  if ( !v10 ) /*0x7ad69f*/
    return -2147467261; /*0x7ad6aa*/
  *v10 = 0; /*0x7ad6b1*/
  if ( !*a3 && !a3[1] && a3[2] == (char *)192 && a3[3] == (char *)1174405120 ) /*0x7ad6d3*/
  {
    (*(void (__stdcall **)(_DWORD *))(*a2 + 4))(a2); /*0x7ad6e6*/
    *v10 = a2; /*0x7ad6e9*/
    return 0; /*0x7ad6f1*/
  }
  while ( 1 ) /*0x7ad6fd*/
  {
    v5 = *v3; /*0x7ad6fd*/
    v6 = *v3 == 0; /*0x7ad706*/
    if ( !*v3 || *v5 == *a3 && v5[1] == a3[1] && v5[2] == a3[2] && v5[3] == a3[3] ) /*0x7ad730*/
      break; /*0x7ad730*/
LABEL_17:
    v8 = v3[5]; /*0x7ad753*/
    v3 += 3; /*0x7ad756*/
    if ( !v8 ) /*0x7ad75b*/
      return -2147467262; /*0x7ad75d*/
  }
  v7 = v3[2]; /*0x7ad732*/
  if ( v7 != (char **)1 ) /*0x7ad738*/
  {
    result = ((int (__stdcall *)(_DWORD *, char **, _DWORD *, char **))v7)(a2, a3, v10, v3[1]); /*0x7ad745*/
    if ( !result || !v6 && result < 0 ) /*0x7ad751*/
      return result; /*0x7ad751*/
    goto LABEL_17; /*0x7ad751*/
  }
  v9 = (char *)v3[1] + (_DWORD)a2; /*0x7ad770*/
  (*(void (__stdcall **)(char *))(*(_DWORD *)v9 + 4))(v9); /*0x7ad775*/
  *v10 = v9; /*0x7ad778*/
  return 0; /*0x7ad6a1*/
}



// ==== 0x007AD790  Array::InsertElement  this=Array  sig=csp ====
char __thiscall Array::InsertElement(Array *this, const void *a2, int a3)
{
  int v4; // esi
  int v5; // ecx
  void *Array_field_0x4; // eax
  int v7; // ebp
  void *v8; // edx
  const void *v9; // esi
  int v10; // eax
  int v11; // ebp
  void *v12; // edx
  const void *v13; // esi
  void *v14; // edi
  void *v16; // [esp+Ch] [ebp-4h]
  void *v17; // [esp+Ch] [ebp-4h]

  v4 = a3; /*0x7ad795*/
  v5 = *(_DWORD *)this->__pad_0; /*0x7ad799*/
  if ( a3 > v5 ) /*0x7ad79e*/
  {
    a3 = v5; /*0x7ad7a0*/
    v4 = v5; /*0x7ad7a4*/
  }
  Array_field_0x4 = this->Array_field_0x4; /*0x7ad7a6*/
  if ( v4 >= (int)Array_field_0x4 && v5 >= (int)Array_field_0x4 ) /*0x7ad7b4*/
  {
    v7 = 2 * v5; /*0x7ad7b6*/
    if ( 2 * v5 < 10 ) /*0x7ad7bc*/
      v7 = 10; /*0x7ad7be*/
    v8 = (void *)__2_YAPAXI_Z(268 * v7); /*0x7ad7d7*/
    memset(v8, 0, 4 * ((unsigned int)(268 * v7) >> 2)); /*0x7ad7e2*/
    v16 = v8; /*0x7ad7ec*/
    v9 = *(const void **)this->__pad_8; /*0x7ad7f2*/
    if ( v9 ) /*0x7ad7f7*/
      qmemcpy(v8, v9, 268 * *(_DWORD *)this->__pad_0); /*0x7ad80f*/
    __3_YAXPAX_Z(*(void **)this->__pad_8); /*0x7ad81c*/
    v4 = a3; /*0x7ad825*/
    *(_DWORD *)this->__pad_8 = v16; /*0x7ad82c*/
    this->Array_field_0x4 = (void *)v7; /*0x7ad82f*/
  }
  v10 = *(_DWORD *)this->__pad_0; /*0x7ad832*/
  if ( *(_DWORD *)this->__pad_0 >= (int)this->Array_field_0x4 ) /*0x7ad839*/
  {
    v11 = 2 * v10; /*0x7ad83b*/
    if ( 2 * v10 < 10 ) /*0x7ad841*/
      v11 = 10; /*0x7ad843*/
    v12 = (void *)__2_YAPAXI_Z(268 * v11); /*0x7ad85c*/
    memset(v12, 0, 4 * ((unsigned int)(268 * v11) >> 2)); /*0x7ad867*/
    v17 = v12; /*0x7ad871*/
    v13 = *(const void **)this->__pad_8; /*0x7ad877*/
    if ( v13 ) /*0x7ad87c*/
      qmemcpy(v12, v13, 268 * *(_DWORD *)this->__pad_0); /*0x7ad894*/
    __3_YAXPAX_Z(*(void **)this->__pad_8); /*0x7ad8a1*/
    v4 = a3; /*0x7ad8aa*/
    *(_DWORD *)this->__pad_8 = v17; /*0x7ad8b1*/
    this->Array_field_0x4 = (void *)v11; /*0x7ad8b4*/
  }
  if ( v4 < *(_DWORD *)this->__pad_0 ) /*0x7ad8bc*/
    memcpy( /*0x7ad8f2*/
      (void *)(*(_DWORD *)this->__pad_8 + 268 * (v4 + 1)),
      (const void *)(*(_DWORD *)this->__pad_8 + 268 * v4),
      268 * *(_DWORD *)this->__pad_0 - 268 * v4);
  v14 = (void *)(*(_DWORD *)this->__pad_8 + 268 * v4); /*0x7ad907*/
  if ( v14 ) /*0x7ad90c*/
    qmemcpy(v14, a2, 0x10Cu); /*0x7ad917*/
  ++*(_DWORD *)this->__pad_0; /*0x7ad91e*/
  return 1; /*0x7ad91b*/
}



// ==== 0x007AD930  CChatEventSink::GrowBuffer  this=CChatEventSink  sig=csp ====
char __thiscall CChatEventSink::GrowBuffer(CChatEventSink *this)
{
  int v2; // eax
  int CChatEventSink_field_0x04; // ecx
  int v5; // ebx
  void *v6; // eax
  const void *CChatEventSink_field_0x08; // esi
  int v8; // [esp+8h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x7ad935*/
  CChatEventSink_field_0x04 = this->CChatEventSink_field_0x04; /*0x7ad938*/
  if ( 3 * v2 > CChatEventSink_field_0x04 ) /*0x7ad940*/
    return 0; /*0x7ad943*/
  v5 = CChatEventSink_field_0x04 / 2; /*0x7ad94f*/
  if ( CChatEventSink_field_0x04 / 2 < 10 ) /*0x7ad954*/
    v5 = 10; /*0x7ad956*/
  if ( v5 >= CChatEventSink_field_0x04 ) /*0x7ad95d*/
    return 0; /*0x7ad960*/
  v6 = (void *)__2_YAPAXI_Z(268 * v5); /*0x7ad974*/
  CChatEventSink_field_0x08 = (const void *)this->CChatEventSink_field_0x08; /*0x7ad979*/
  v8 = (int)v6; /*0x7ad981*/
  if ( CChatEventSink_field_0x08 ) /*0x7ad985*/
    qmemcpy(v6, CChatEventSink_field_0x08, 268 * *(_DWORD *)this->__pad_0); /*0x7ad99f*/
  __3_YAXPAX_Z((void *)this->CChatEventSink_field_0x08); /*0x7ad9ad*/
  this->CChatEventSink_field_0x08 = v8; /*0x7ad9b9*/
  this->CChatEventSink_field_0x04 = v5; /*0x7ad9bc*/
  return 1; /*0x7ad942*/
}



// ==== 0x007AD9D0  DynamicArray::Grow  this=DynamicArray  sig=csp ====
int __thiscall DynamicArray::Grow(DynamicArray *this)
{
  int result; // eax
  int v3; // eax
  unsigned int v4; // esi
  void *v5; // ebp
  const void *DynamicArray_field_0x08; // esi
  int v7; // [esp+4h] [ebp-4h]

  result = *(_DWORD *)this->__pad_0; /*0x7ad9d4*/
  if ( *(_DWORD *)this->__pad_0 >= this->DynamicArray_field_0x04 ) /*0x7ad9db*/
  {
    v3 = 2 * result; /*0x7ad9e2*/
    v7 = v3; /*0x7ad9e7*/
    if ( v3 < 10 ) /*0x7ad9eb*/
    {
      v7 = 10; /*0x7ad9ed*/
      v3 = 10; /*0x7ad9f5*/
    }
    v4 = 108 * v3; /*0x7ada02*/
    v5 = (void *)__2_YAPAXI_Z(108 * v3); /*0x7ada0d*/
    memset(v5, 0, v4); /*0x7ada1b*/
    DynamicArray_field_0x08 = (const void *)this->DynamicArray_field_0x08; /*0x7ada24*/
    if ( DynamicArray_field_0x08 ) /*0x7ada29*/
      qmemcpy(v5, DynamicArray_field_0x08, 108 * *(_DWORD *)this->__pad_0); /*0x7ada3d*/
    __3_YAXPAX_Z((void *)this->DynamicArray_field_0x08); /*0x7ada4a*/
    this->DynamicArray_field_0x08 = (int)v5; /*0x7ada56*/
    this->DynamicArray_field_0x04 = v7; /*0x7ada59*/
    LOBYTE(result) = 1; /*0x7ada5f*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x7ad9dd*/
  }
  return result; /*0x7ad9df*/
}



// ==== 0x007ADA70  WOLGameList::EnsureCapacity  this=WOLGameList  sig=csp ====
char __thiscall WOLGameList::EnsureCapacity(WOLGameList *this)
{
  int v2; // eax
  int WOLGameList_field_0x04; // ecx
  int v5; // ebx
  void *v6; // eax
  const void *WOLGameList_field_0x08; // esi
  int v8; // [esp+8h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x7ada75*/
  WOLGameList_field_0x04 = this->WOLGameList_field_0x04; /*0x7ada78*/
  if ( 3 * v2 > WOLGameList_field_0x04 ) /*0x7ada80*/
    return 0; /*0x7ada83*/
  v5 = WOLGameList_field_0x04 / 2; /*0x7ada8f*/
  if ( WOLGameList_field_0x04 / 2 < 10 ) /*0x7ada94*/
    v5 = 10; /*0x7ada96*/
  if ( v5 >= WOLGameList_field_0x04 ) /*0x7ada9d*/
    return 0; /*0x7adaa0*/
  v6 = (void *)__2_YAPAXI_Z(108 * v5); /*0x7adab0*/
  WOLGameList_field_0x08 = (const void *)this->WOLGameList_field_0x08; /*0x7adab5*/
  v8 = (int)v6; /*0x7adabd*/
  if ( WOLGameList_field_0x08 ) /*0x7adac1*/
    qmemcpy(v6, WOLGameList_field_0x08, 108 * *(_DWORD *)this->__pad_0); /*0x7adad7*/
  __3_YAXPAX_Z((void *)this->WOLGameList_field_0x08); /*0x7adae5*/
  this->WOLGameList_field_0x08 = v8; /*0x7adaf1*/
  this->WOLGameList_field_0x04 = v5; /*0x7adaf4*/
  return 1; /*0x7ada82*/
}



// ==== 0x007ADB00  ObjectClass::Network_Helper_7ADB00  this=ObjectClass  sig=csp ====
char __thiscall Network_Helper_7ADB00(ObjectClass *this, _DWORD *a2, int a3)
{
  int v4; // esi
  int vtable0; // ecx
  void *vtable1; // eax
  int v7; // eax
  unsigned int v8; // esi
  void *v9; // ebp
  void *vtable2; // esi
  int v11; // eax
  unsigned int v12; // esi
  void *v13; // ebp
  void *v14; // esi
  _DWORD *v15; // eax
  int v17; // [esp+8h] [ebp-4h]
  int v18; // [esp+8h] [ebp-4h]

  v4 = a3; /*0x7adb05*/
  vtable0 = (int)this->AbstractClass; /*0x7adb09*/
  if ( a3 > vtable0 ) /*0x7adb0d*/
  {
    a3 = vtable0; /*0x7adb0f*/
    v4 = vtable0; /*0x7adb13*/
  }
  vtable1 = this->?; /*0x7adb15*/
  if ( v4 >= (int)vtable1 && vtable0 >= (int)vtable1 ) /*0x7adb20*/
  {
    v7 = 2 * vtable0; /*0x7adb22*/
    v17 = 2 * vtable0; /*0x7adb28*/
    if ( 2 * vtable0 < 10 ) /*0x7adb2c*/
    {
      v17 = 10; /*0x7adb2e*/
      v7 = 10; /*0x7adb36*/
    }
    v8 = 4 * v7; /*0x7adb3a*/
    v9 = (void *)__2_YAPAXI_Z(4 * v7); /*0x7adb49*/
    memset(v9, 0, v8); /*0x7adb57*/
    vtable2 = this->?; /*0x7adb60*/
    if ( vtable2 ) /*0x7adb65*/
      qmemcpy(v9, vtable2, 4 * (int)this->AbstractClass); /*0x7adb73*/
    __3_YAXPAX_Z(this->?); /*0x7adb80*/
    v4 = a3; /*0x7adb89*/
    this->? = v9; /*0x7adb90*/
    this->? = (void *)v17; /*0x7adb93*/
  }
  if ( (int)this->AbstractClass >= (int)this->? ) /*0x7adb9d*/
  {
    v11 = 2 * (int)this->AbstractClass; /*0x7adb9f*/
    v18 = v11; /*0x7adba4*/
    if ( v11 < 10 ) /*0x7adba8*/
    {
      v18 = 10; /*0x7adbaa*/
      v11 = 10; /*0x7adbb2*/
    }
    v12 = 4 * v11; /*0x7adbb6*/
    v13 = (void *)__2_YAPAXI_Z(4 * v11); /*0x7adbc5*/
    memset(v13, 0, v12); /*0x7adbd3*/
    v14 = this->?; /*0x7adbdc*/
    if ( v14 ) /*0x7adbe1*/
      qmemcpy(v13, v14, 4 * (int)this->AbstractClass); /*0x7adbef*/
    __3_YAXPAX_Z(this->?); /*0x7adbfc*/
    v4 = a3; /*0x7adc05*/
    this->? = v13; /*0x7adc0c*/
    this->? = (void *)v18; /*0x7adc0f*/
  }
  if ( v4 < (int)this->AbstractClass ) /*0x7adc18*/
    memcpy((char *)this->? + 4 * v4 + 4, (char *)this->? + 4 * v4, 4 * ((int)this->AbstractClass + 0x3FFFFFFF * v4)); /*0x7adc33*/
  v15 = (char *)this->? + 4 * v4; /*0x7adc3e*/
  if ( v15 ) /*0x7adc43*/
    *v15 = *a2; /*0x7adc4b*/
  ++this->AbstractClass; /*0x7adc51*/
  return 1; /*0x7adc4f*/
}



// ==== 0x007ADC60  HashTable::LookupString  this=HashTable  sig=csp ====
int __thiscall HashTable::LookupString(HashTable *this, const char **a2, _DWORD *a3)
{
  int result; // eax
  int v5; // edx
  int v6; // esi

  result = this->HashTable_field_0x04; /*0x7adc64*/
  if ( result ) /*0x7adc69*/
  {
    v5 = ((int (__thiscall *)(const char **))this->HashTable_field_0x18)(a2) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7adc86*/
    result = *(_DWORD *)this->__pad_0; /*0x7adc88*/
    v6 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v5); /*0x7adc8a*/
    if ( v6 ) /*0x7adc8f*/
    {
      while ( 1 ) /*0x7adc9b*/
      {
        result = String::Compare((String *)v6, a2); /*0x7adc9b*/
        if ( (_BYTE)result ) /*0x7adca2*/
          break; /*0x7adca2*/
        v6 = *(_DWORD *)(v6 + 112); /*0x7adca4*/
        if ( !v6 ) /*0x7adca9*/
          return result; /*0x7adca9*/
      }
      LOBYTE(result) = 1; /*0x7adcc3*/
      *a3 = v6 + 4; /*0x7adcc5*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x7adc92*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x7adc6c*/
  }
  return result; /*0x7adc6b*/
}



// ==== 0x007ADCD0  HashTable::Insert  this=HashTable  sig=csp ====
char __thiscall HashTable::Insert(HashTable *this, const char **a2, void *a3)
{
  int HashTable_field_0x04; // eax
  int v7; // ebx
  int v8; // esi
  _DWORD *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int HashTable_field_0x08; // esi
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
  int HashTable_field_0x0C; // edi
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

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x7adcdb*/
  if ( !HashTable_field_0x04 ) /*0x7adce0*/
    return 0; /*0x7adce5*/
  v37 = (double)(unsigned int)(HashTable_field_0x04 - 1) / (double)this->HashTable_field_0x08; /*0x7add10*/
  v7 = ((int (__thiscall *)(const char **))this->HashTable_field_0x18)(a2) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7add25*/
  v8 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x7add27*/
  v36 = v8; /*0x7add2c*/
  if ( !v8 ) /*0x7add30*/
    return 0; /*0x7add35*/
  if ( (unsigned __int8)String::Compare((String *)v8, a2) ) /*0x7add41*/
  {
    qmemcpy(a3, (const void *)(v8 + 4), 0x6Cu); /*0x7add5a*/
    v9 = *(_DWORD **)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x7add5f*/
    v10 = v9[28]; /*0x7add64*/
    if ( v9 ) /*0x7add67*/
    {
      DeleteAndZero(*(ObjectClass **)(*(_DWORD *)this->__pad_0 + 4 * v7)); /*0x7add6b*/
      __3_YAXPAX_Z(v9); /*0x7add71*/
    }
    *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v7) = v10; /*0x7add80*/
    v11 = v37 < *(double *)&this->HashTable_field_0x20; /*0x7add86*/
    v12 = v37 == *(double *)&this->HashTable_field_0x20; /*0x7add86*/
    --this->HashTable_field_0x04; /*0x7add8a*/
    if ( v11 || v12 ) /*0x7add8f*/
    {
      HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7add98*/
      if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7addaa*/
      {
        v14 = *(int **)this->__pad_0; /*0x7addb3*/
        v39 = *(int **)this->__pad_0; /*0x7addb8*/
        v15 = this->HashTable_field_0x0C - 1; /*0x7addbe*/
        this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x7addbf*/
        this->HashTable_field_0x0C = v15; /*0x7addc9*/
        v16 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x7addd5*/
        v17 = 4 * this->HashTable_field_0x08; /*0x7addda*/
        *(_DWORD *)this->__pad_0 = v16; /*0x7adde1*/
        memset(v16, 0, v17); /*0x7adde7*/
        if ( (int)HashTable_field_0x08 > 0 ) /*0x7addf2*/
        {
          v18 = v14; /*0x7addf4*/
          v19 = HashTable_field_0x08; /*0x7addf6*/
          do /*0x7ade2b*/
          {
            v20 = *v18; /*0x7addf8*/
            if ( *v18 ) /*0x7addf8*/
            {
              do /*0x7ade25*/
              {
                v21 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v20) /*0x7ade0e*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v22 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v21); /*0x7ade13*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v21) = v20; /*0x7ade19*/
                v23 = *(_DWORD *)(v20 + 112); /*0x7ade1b*/
                *(_DWORD *)(v20 + 112) = v22; /*0x7ade1e*/
                v20 = v23; /*0x7ade21*/
              }
              while ( v23 ); /*0x7ade25*/
            }
            ++v18; /*0x7ade27*/
            --v19; /*0x7ade2a*/
          }
          while ( v19 ); /*0x7ade2b*/
          v14 = v39; /*0x7ade2d*/
        }
        __3_YAXPAX_Z(v14); /*0x7ade32*/
      }
    }
    return 1; /*0x7ade3d*/
  }
  else
  {
    v24 = *(_DWORD *)(v8 + 112); /*0x7ade46*/
    v38 = 0; /*0x7ade49*/
    if ( v24 ) /*0x7ade50*/
    {
      while ( !(unsigned __int8)String::Compare((String *)v24, a2) ) /*0x7ade5c*/
      {
        v36 = v24; /*0x7ade5e*/
        v24 = *(_DWORD *)(v24 + 112); /*0x7ade62*/
        if ( !v24 ) /*0x7ade67*/
          goto LABEL_24; /*0x7ade67*/
      }
      qmemcpy(a3, (const void *)(v24 + 4), 0x6Cu); /*0x7ade7b*/
      *(_DWORD *)(v36 + 112) = *(_DWORD *)(v24 + 112); /*0x7ade80*/
      --this->HashTable_field_0x04; /*0x7ade89*/
      DeleteAndZero((ObjectClass *)v24); /*0x7ade90*/
      __3_YAXPAX_Z((void *)v24); /*0x7ade96*/
      v38 = 1; /*0x7ade9e*/
    }
LABEL_24:
    if ( v37 <= *(double *)&this->HashTable_field_0x20 ) /*0x7adeaf*/
    {
      v25 = this->HashTable_field_0x08; /*0x7adeb5*/
      if ( v25 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7adec7*/
      {
        HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x7adecd*/
        v27 = *(int **)this->__pad_0; /*0x7aded0*/
        v40 = *(int **)this->__pad_0; /*0x7aded5*/
        this->HashTable_field_0x08 = v25 >> 1; /*0x7adedb*/
        this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x7adee3*/
        v28 = (void *)__2_YAPAXI_Z(4 * (v25 >> 1)); /*0x7adeee*/
        v29 = 4 * this->HashTable_field_0x08; /*0x7adef3*/
        *(_DWORD *)this->__pad_0 = v28; /*0x7adefa*/
        memset(v28, 0, v29); /*0x7adf00*/
        if ( (int)v25 > 0 ) /*0x7adf0b*/
        {
          v30 = v27; /*0x7adf0d*/
          v31 = v25; /*0x7adf0f*/
          do /*0x7adf44*/
          {
            v32 = *v30; /*0x7adf11*/
            if ( *v30 ) /*0x7adf11*/
            {
              do /*0x7adf3e*/
              {
                v33 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v32) /*0x7adf27*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v34 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v33); /*0x7adf2c*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v33) = v32; /*0x7adf32*/
                v35 = *(_DWORD *)(v32 + 112); /*0x7adf34*/
                *(_DWORD *)(v32 + 112) = v34; /*0x7adf37*/
                v32 = v35; /*0x7adf3a*/
              }
              while ( v35 ); /*0x7adf3e*/
            }
            ++v30; /*0x7adf40*/
            --v31; /*0x7adf43*/
          }
          while ( v31 ); /*0x7adf44*/
          v27 = v40; /*0x7adf46*/
        }
        __3_YAXPAX_Z(v27); /*0x7adf4b*/
      }
    }
    return v38; /*0x7adf53*/
  }
}



// ==== 0x007ADF70  HashMap::Shrink2  this=HashMap  sig=csp ====
int __thiscall HashMap::Shrink2(HashMap *this)
{
  unsigned int HashMap_field_0x08; // esi
  int result; // eax
  int *v4; // ebp
  int HashMap_field_0x0C; // edi
  void *v6; // edi
  unsigned int v7; // edx
  int *v8; // edi
  unsigned int v9; // ebp
  int v10; // esi
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int *v14; // [esp+8h] [ebp-4h]

  HashMap_field_0x08 = this->HashMap_field_0x08; /*0x7adf75*/
  result = this->q00C; /*0x7adf78*/
  if ( HashMap_field_0x08 > result && *((_BYTE *)this + 20) != 1 ) /*0x7adf87*/
  {
    v4 = *(int **)this->__pad_0; /*0x7adf90*/
    HashMap_field_0x0C = this->HashMap_field_0x0C; /*0x7adf93*/
    v14 = *(int **)this->__pad_0; /*0x7adf96*/
    this->HashMap_field_0x08 = HashMap_field_0x08 >> 1; /*0x7adf9c*/
    this->HashMap_field_0x0C = HashMap_field_0x0C - 1; /*0x7adfa4*/
    v6 = (void *)__2_YAPAXI_Z(4 * (HashMap_field_0x08 >> 1)); /*0x7adfaf*/
    v7 = 4 * this->HashMap_field_0x08; /*0x7adfb4*/
    *(_DWORD *)this->__pad_0 = v6; /*0x7adfbb*/
    memset(v6, 0, v7); /*0x7adfc0*/
    if ( (int)HashMap_field_0x08 > 0 ) /*0x7adfcb*/
    {
      v8 = v4; /*0x7adfcd*/
      v9 = HashMap_field_0x08; /*0x7adfcf*/
      do /*0x7ae003*/
      {
        v10 = *v8; /*0x7adfd1*/
        if ( *v8 ) /*0x7adfd1*/
        {
          do /*0x7adffd*/
          {
            v11 = (*((int (__thiscall **)(int))this + 6))(v10) & ((1 << this->HashMap_field_0x0C) - 1); /*0x7adfe7*/
            v12 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v11); /*0x7adfeb*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v11) = v10; /*0x7adff1*/
            v13 = *(_DWORD *)(v10 + 112); /*0x7adff3*/
            *(_DWORD *)(v10 + 112) = v12; /*0x7adff6*/
            v10 = v13; /*0x7adff9*/
          }
          while ( v13 ); /*0x7adffd*/
        }
        ++v8; /*0x7adfff*/
        --v9; /*0x7ae002*/
      }
      while ( v9 ); /*0x7ae003*/
      v4 = v14; /*0x7ae005*/
    }
    __3_YAXPAX_Z(v4); /*0x7ae00a*/
  }
  return result; /*0x7ae014*/
}



// ==== 0x007AE020  WOLGameList::GrowBuffer  this=WOLGameList  sig=csp ====
void __thiscall WOLGameList::GrowBuffer(WOLGameList *this)
{
  int WOLGameList_field_0x08; // esi
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

  if ( *((_BYTE *)this + 20) != 1 ) /*0x7ae028*/
  {
    WOLGameList_field_0x08 = this->WOLGameList_field_0x08; /*0x7ae030*/
    v3 = *(_DWORD **)this->__pad_0; /*0x7ae033*/
    v4 = this->WOLGameList_field_0x0C + 1; /*0x7ae03c*/
    this->WOLGameList_field_0x08 = 2 * WOLGameList_field_0x08; /*0x7ae03d*/
    v13 = v3; /*0x7ae040*/
    this->WOLGameList_field_0x0C = v4; /*0x7ae048*/
    v5 = (void *)__2_YAPAXI_Z(8 * WOLGameList_field_0x08); /*0x7ae053*/
    v6 = 4 * this->WOLGameList_field_0x08; /*0x7ae058*/
    *(_DWORD *)this->__pad_0 = v5; /*0x7ae05f*/
    memset(v5, 0, v6); /*0x7ae064*/
    if ( WOLGameList_field_0x08 > 0 ) /*0x7ae06f*/
    {
      v7 = v3; /*0x7ae071*/
      v8 = WOLGameList_field_0x08; /*0x7ae073*/
      do /*0x7ae0a7*/
      {
        v9 = *v7; /*0x7ae075*/
        if ( *v7 ) /*0x7ae075*/
        {
          do /*0x7ae0a1*/
          {
            v10 = (*((int (__thiscall **)(int))this + 6))(v9) & ((1 << this->WOLGameList_field_0x0C) - 1); /*0x7ae08b*/
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x7ae08f*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x7ae095*/
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
int __thiscall HashMap::ComputeIndex_2(int *this, int a2)
{
  return ((int (__thiscall *)(int))*(this + 6))(a2) & ((1 << this->q00C) - 1); /*0x7ae0d4*/
}



// ==== 0x007AE0E0  ComStreamClass::readData  this=ComStreamClass  sig=csp ====
void __thiscall ComStreamClass::readData(ComStreamClass *this)
{
  int ComStreamClass_field_0x08; // esi
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

  if ( LOBYTE(this->ComStreamClass_field_0x14) != 1 ) /*0x7ae0e8*/
  {
    ComStreamClass_field_0x08 = this->ComStreamClass_field_0x08; /*0x7ae0f0*/
    v3 = *(_DWORD **)this->__pad_0; /*0x7ae0f3*/
    v4 = this->ComStreamClass_field_0x0C + 1; /*0x7ae0fc*/
    this->ComStreamClass_field_0x08 = 2 * ComStreamClass_field_0x08; /*0x7ae0fd*/
    v13 = v3; /*0x7ae100*/
    this->ComStreamClass_field_0x0C = v4; /*0x7ae108*/
    v5 = (void *)__2_YAPAXI_Z(8 * ComStreamClass_field_0x08); /*0x7ae113*/
    v6 = 4 * this->ComStreamClass_field_0x08; /*0x7ae118*/
    *(_DWORD *)this->__pad_0 = v5; /*0x7ae11f*/
    memset(v5, 0, v6); /*0x7ae124*/
    if ( ComStreamClass_field_0x08 > 0 ) /*0x7ae12f*/
    {
      v7 = v3; /*0x7ae131*/
      v8 = ComStreamClass_field_0x08; /*0x7ae133*/
      do /*0x7ae167*/
      {
        v9 = *v7; /*0x7ae135*/
        if ( *v7 ) /*0x7ae135*/
        {
          do /*0x7ae161*/
          {
            v10 = ((int (__thiscall *)(int))this->ComStreamClass_field_0x18)(v9) /*0x7ae14b*/
                & ((1 << this->ComStreamClass_field_0x0C) - 1);
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x7ae14f*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x7ae155*/
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



// ==== 0x007AE180  ObjectClass::ConnectAndLoginWOL_Connect_7AE180  this=ObjectClass  sig=csp ====
bool __thiscall ConnectAndLoginWOL_Connect_7AE180(ObjectClass *this, const char **a2, _DWORD *a3)
{
  bool result; // al
  int v4; // esi

  if ( !this->? ) /*0x7ae184*/
    return 0; /*0x7ae18c*/
  v4 = *((_DWORD *)this->AbstractClass + (((int (__thiscall *)(const char **))this->?)(a2) & ((1 << (int)this->?) - 1))); /*0x7ae1aa*/
  if ( !v4 ) /*0x7ae1af*/
    return 0; /*0x7ae1b2*/
  while ( 1 ) /*0x7ae1bb*/
  {
    result = String::Compare((String *)v4, a2); /*0x7ae1bb*/
    if ( result ) /*0x7ae1c2*/
      break; /*0x7ae1c2*/
    v4 = *(_DWORD *)(v4 + 8); /*0x7ae1c4*/
    if ( !v4 ) /*0x7ae1c9*/
      return result; /*0x7ae1c9*/
  }
  *a3 = v4 + 4; /*0x7ae1e5*/
  return 1; /*0x7ae18b*/
}



// ==== 0x007AE1F0  HashTable::Lookup  this=HashTable  sig=csp ====
char __thiscall HashTable::Lookup(HashTable *this, const char **a2, _DWORD *a3)
{
  int HashTable_field_0x04; // eax
  int v7; // edi
  int v8; // ebp
  _DWORD *v9; // ebp
  int v10; // ebx
  bool v11; // c0
  bool v12; // c3
  unsigned int HashTable_field_0x08; // ebp
  int HashTable_field_0x0C; // edi
  int *v15; // ebx
  void *v16; // edi
  unsigned int v17; // edx
  int v18; // edi
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  int v22; // edi
  unsigned int v23; // ebp
  int *v24; // ebx
  int v25; // edi
  void *v26; // edi
  unsigned int v27; // edx
  int v28; // edi
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  float v32; // [esp+10h] [ebp-8h]
  char v33; // [esp+1Ch] [ebp+4h]
  int *v34; // [esp+20h] [ebp+8h]
  int *v35; // [esp+20h] [ebp+8h]

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x7ae1fb*/
  if ( !HashTable_field_0x04 ) /*0x7ae200*/
    return 0; /*0x7ae205*/
  v32 = (double)(unsigned int)(HashTable_field_0x04 - 1) / (double)this->HashTable_field_0x08; /*0x7ae230*/
  v7 = ((int (__thiscall *)(const char **))this->HashTable_field_0x18)(a2) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7ae244*/
  v8 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x7ae246*/
  if ( !v8 ) /*0x7ae24b*/
    return 0; /*0x7ae250*/
  if ( (unsigned __int8)String::Compare((String *)v8, a2) ) /*0x7ae25c*/
  {
    *a3 = *(_DWORD *)(v8 + 4); /*0x7ae270*/
    v9 = *(_DWORD **)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x7ae274*/
    v10 = v9[2]; /*0x7ae279*/
    if ( v9 ) /*0x7ae27c*/
    {
      DeleteAndZero(*(ObjectClass **)(*(_DWORD *)this->__pad_0 + 4 * v7)); /*0x7ae280*/
      __3_YAXPAX_Z(v9); /*0x7ae286*/
    }
    *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v7) = v10; /*0x7ae294*/
    v11 = v32 < *(double *)&this->HashTable_field_0x20; /*0x7ae29a*/
    v12 = v32 == *(double *)&this->HashTable_field_0x20; /*0x7ae29a*/
    --this->HashTable_field_0x04; /*0x7ae29e*/
    if ( v11 || v12 ) /*0x7ae2a3*/
    {
      HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7ae2ac*/
      if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7ae2be*/
      {
        HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x7ae2c0*/
        v15 = *(int **)this->__pad_0; /*0x7ae2c3*/
        v34 = *(int **)this->__pad_0; /*0x7ae2c7*/
        this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x7ae2cd*/
        this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x7ae2d5*/
        v16 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x7ae2e0*/
        v17 = 4 * this->HashTable_field_0x08; /*0x7ae2e5*/
        *(_DWORD *)this->__pad_0 = v16; /*0x7ae2ec*/
        memset(v16, 0, v17); /*0x7ae2f1*/
        if ( (int)HashTable_field_0x08 > 0 ) /*0x7ae2fc*/
        {
          do /*0x7ae330*/
          {
            v18 = *v15; /*0x7ae2fe*/
            if ( *v15 ) /*0x7ae2fe*/
            {
              do /*0x7ae32a*/
              {
                v19 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v18) /*0x7ae314*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v20 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v19); /*0x7ae318*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v19) = v18; /*0x7ae31e*/
                v21 = *(_DWORD *)(v18 + 8); /*0x7ae320*/
                *(_DWORD *)(v18 + 8) = v20; /*0x7ae323*/
                v18 = v21; /*0x7ae326*/
              }
              while ( v21 ); /*0x7ae32a*/
            }
            ++v15; /*0x7ae32c*/
            --HashTable_field_0x08; /*0x7ae32f*/
          }
          while ( HashTable_field_0x08 ); /*0x7ae330*/
          v15 = v34; /*0x7ae332*/
        }
        __3_YAXPAX_Z(v15); /*0x7ae337*/
      }
    }
    return 1; /*0x7ae342*/
  }
  else
  {
    v22 = *(_DWORD *)(v8 + 8); /*0x7ae34b*/
    v33 = 0; /*0x7ae34e*/
    if ( v22 ) /*0x7ae355*/
    {
      while ( !(unsigned __int8)String::Compare((String *)v22, a2) ) /*0x7ae361*/
      {
        v8 = v22; /*0x7ae363*/
        v22 = *(_DWORD *)(v22 + 8); /*0x7ae365*/
        if ( !v22 ) /*0x7ae36a*/
          goto LABEL_23; /*0x7ae36a*/
      }
      *a3 = *(_DWORD *)(v22 + 4); /*0x7ae375*/
      *(_DWORD *)(v8 + 8) = *(_DWORD *)(v22 + 8); /*0x7ae37a*/
      --this->HashTable_field_0x04; /*0x7ae383*/
      DeleteAndZero((ObjectClass *)v22); /*0x7ae38a*/
      __3_YAXPAX_Z((void *)v22); /*0x7ae390*/
      v33 = 1; /*0x7ae398*/
    }
LABEL_23:
    if ( v32 <= *(double *)&this->HashTable_field_0x20 ) /*0x7ae3a9*/
    {
      v23 = this->HashTable_field_0x08; /*0x7ae3af*/
      if ( v23 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7ae3c1*/
      {
        v24 = *(int **)this->__pad_0; /*0x7ae3ca*/
        v35 = *(int **)this->__pad_0; /*0x7ae3ce*/
        v25 = this->HashTable_field_0x0C - 1; /*0x7ae3d4*/
        this->HashTable_field_0x08 = v23 >> 1; /*0x7ae3d5*/
        this->HashTable_field_0x0C = v25; /*0x7ae3df*/
        v26 = (void *)__2_YAPAXI_Z(4 * (v23 >> 1)); /*0x7ae3eb*/
        v27 = 4 * this->HashTable_field_0x08; /*0x7ae3f0*/
        *(_DWORD *)this->__pad_0 = v26; /*0x7ae3f7*/
        memset(v26, 0, v27); /*0x7ae3fc*/
        if ( (int)v23 > 0 ) /*0x7ae407*/
        {
          do /*0x7ae43b*/
          {
            v28 = *v24; /*0x7ae409*/
            if ( *v24 ) /*0x7ae409*/
            {
              do /*0x7ae435*/
              {
                v29 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v28) /*0x7ae41f*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v30 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v29); /*0x7ae423*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v29) = v28; /*0x7ae429*/
                v31 = *(_DWORD *)(v28 + 8); /*0x7ae42b*/
                *(_DWORD *)(v28 + 8) = v30; /*0x7ae42e*/
                v28 = v31; /*0x7ae431*/
              }
              while ( v31 ); /*0x7ae435*/
            }
            ++v24; /*0x7ae437*/
            --v23; /*0x7ae43a*/
          }
          while ( v23 ); /*0x7ae43b*/
          v24 = v35; /*0x7ae43d*/
        }
        __3_YAXPAX_Z(v24); /*0x7ae442*/
      }
    }
    return v33; /*0x7ae44a*/
  }
}



// ==== 0x007AE460  HashMap::Shrink  this=HashMap  sig=csp ====
int __thiscall HashMap::Shrink(HashMap *this)
{
  unsigned int HashMap_field_0x08; // esi
  int result; // eax
  int *v4; // ebp
  int HashMap_field_0x0C; // edi
  void *v6; // edi
  unsigned int v7; // edx
  int *v8; // edi
  unsigned int v9; // ebp
  int v10; // esi
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int *v14; // [esp+8h] [ebp-4h]

  HashMap_field_0x08 = this->HashMap_field_0x08; /*0x7ae465*/
  result = this->q00C; /*0x7ae468*/
  if ( HashMap_field_0x08 > result && *((_BYTE *)this + 20) != 1 ) /*0x7ae477*/
  {
    v4 = *(int **)this->__pad_0; /*0x7ae480*/
    HashMap_field_0x0C = this->HashMap_field_0x0C; /*0x7ae483*/
    v14 = *(int **)this->__pad_0; /*0x7ae486*/
    this->HashMap_field_0x08 = HashMap_field_0x08 >> 1; /*0x7ae48c*/
    this->HashMap_field_0x0C = HashMap_field_0x0C - 1; /*0x7ae494*/
    v6 = (void *)__2_YAPAXI_Z(4 * (HashMap_field_0x08 >> 1)); /*0x7ae49f*/
    v7 = 4 * this->HashMap_field_0x08; /*0x7ae4a4*/
    *(_DWORD *)this->__pad_0 = v6; /*0x7ae4ab*/
    memset(v6, 0, v7); /*0x7ae4b0*/
    if ( (int)HashMap_field_0x08 > 0 ) /*0x7ae4bb*/
    {
      v8 = v4; /*0x7ae4bd*/
      v9 = HashMap_field_0x08; /*0x7ae4bf*/
      do /*0x7ae4f3*/
      {
        v10 = *v8; /*0x7ae4c1*/
        if ( *v8 ) /*0x7ae4c1*/
        {
          do /*0x7ae4ed*/
          {
            v11 = (*((int (__thiscall **)(int))this + 6))(v10) & ((1 << this->HashMap_field_0x0C) - 1); /*0x7ae4d7*/
            v12 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v11); /*0x7ae4db*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v11) = v10; /*0x7ae4e1*/
            v13 = *(_DWORD *)(v10 + 8); /*0x7ae4e3*/
            *(_DWORD *)(v10 + 8) = v12; /*0x7ae4e6*/
            v10 = v13; /*0x7ae4e9*/
          }
          while ( v13 ); /*0x7ae4ed*/
        }
        ++v8; /*0x7ae4ef*/
        --v9; /*0x7ae4f2*/
      }
      while ( v9 ); /*0x7ae4f3*/
      v4 = v14; /*0x7ae4f5*/
    }
    __3_YAXPAX_Z(v4); /*0x7ae4fa*/
  }
  return result; /*0x7ae504*/
}



// ==== 0x007AE510  HashTable::Grow  this=HashTable  sig=csp ====
void __thiscall HashTable::Grow(HashTable *this)
{
  int HashTable_field_0x08; // esi
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

  if ( LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7ae518*/
  {
    HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7ae520*/
    v3 = *(_DWORD **)this->__pad_0; /*0x7ae523*/
    v4 = this->HashTable_field_0x0C + 1; /*0x7ae52c*/
    this->HashTable_field_0x08 = 2 * HashTable_field_0x08; /*0x7ae52d*/
    v13 = v3; /*0x7ae530*/
    this->HashTable_field_0x0C = v4; /*0x7ae538*/
    v5 = (void *)__2_YAPAXI_Z(8 * HashTable_field_0x08); /*0x7ae543*/
    v6 = 4 * this->HashTable_field_0x08; /*0x7ae548*/
    *(_DWORD *)this->__pad_0 = v5; /*0x7ae54f*/
    memset(v5, 0, v6); /*0x7ae554*/
    if ( HashTable_field_0x08 > 0 ) /*0x7ae55f*/
    {
      v7 = v3; /*0x7ae561*/
      v8 = HashTable_field_0x08; /*0x7ae563*/
      do /*0x7ae597*/
      {
        v9 = *v7; /*0x7ae565*/
        if ( *v7 ) /*0x7ae565*/
        {
          do /*0x7ae591*/
          {
            v10 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v9) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7ae57b*/
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x7ae57f*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x7ae585*/
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



// ==== 0x007AE5B0  CComObject_CChatEventSink___ATL::Check  this=CComObject_CChatEventSink___ATL  sig=csp ====
int __thiscall sub_7AE5B0(int this, int a2)
{
  return (*(int (__thiscall **)(int))(this + 24))(a2) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x7ae5c4*/
}



// ==== 0x007AE5D0  StringVector::Insert  this=StringVector  sig=csp ====
char __thiscall StringVector::Insert(StringVector *this, const char **a2, int a3)
{
  int v4; // esi
  int v5; // ecx
  int StringVector_field_0x04; // eax
  int v7; // eax
  unsigned int v8; // esi
  void *v9; // ebp
  const void *StringVector_field_0x08; // esi
  int v11; // eax
  unsigned int v12; // esi
  void *v13; // ebp
  const void *v14; // esi
  String *v15; // ecx
  int v17; // [esp+8h] [ebp-4h]
  int v18; // [esp+8h] [ebp-4h]

  v4 = a3; /*0x7ae5d5*/
  v5 = *(_DWORD *)this->__pad_0; /*0x7ae5d9*/
  if ( a3 > v5 ) /*0x7ae5dd*/
  {
    a3 = v5; /*0x7ae5df*/
    v4 = v5; /*0x7ae5e3*/
  }
  StringVector_field_0x04 = this->StringVector_field_0x04; /*0x7ae5e5*/
  if ( v4 >= StringVector_field_0x04 && v5 >= StringVector_field_0x04 ) /*0x7ae5f0*/
  {
    v7 = 2 * v5; /*0x7ae5f2*/
    v17 = 2 * v5; /*0x7ae5f8*/
    if ( 2 * v5 < 10 ) /*0x7ae5fc*/
    {
      v17 = 10; /*0x7ae5fe*/
      v7 = 10; /*0x7ae606*/
    }
    v8 = 4 * v7; /*0x7ae60a*/
    v9 = (void *)__2_YAPAXI_Z(4 * v7); /*0x7ae619*/
    memset(v9, 0, v8); /*0x7ae627*/
    StringVector_field_0x08 = (const void *)this->StringVector_field_0x08; /*0x7ae630*/
    if ( StringVector_field_0x08 ) /*0x7ae635*/
      qmemcpy(v9, StringVector_field_0x08, 4 * *(_DWORD *)this->__pad_0); /*0x7ae643*/
    __3_YAXPAX_Z((void *)this->StringVector_field_0x08); /*0x7ae650*/
    v4 = a3; /*0x7ae659*/
    this->StringVector_field_0x08 = (int)v9; /*0x7ae660*/
    this->StringVector_field_0x04 = v17; /*0x7ae663*/
  }
  if ( *(_DWORD *)this->__pad_0 >= this->StringVector_field_0x04 ) /*0x7ae66d*/
  {
    v11 = 2 * *(_DWORD *)this->__pad_0; /*0x7ae66f*/
    v18 = v11; /*0x7ae674*/
    if ( v11 < 10 ) /*0x7ae678*/
    {
      v18 = 10; /*0x7ae67a*/
      v11 = 10; /*0x7ae682*/
    }
    v12 = 4 * v11; /*0x7ae686*/
    v13 = (void *)__2_YAPAXI_Z(4 * v11); /*0x7ae695*/
    memset(v13, 0, v12); /*0x7ae6a3*/
    v14 = (const void *)this->StringVector_field_0x08; /*0x7ae6ac*/
    if ( v14 ) /*0x7ae6b1*/
      qmemcpy(v13, v14, 4 * *(_DWORD *)this->__pad_0); /*0x7ae6bf*/
    __3_YAXPAX_Z((void *)this->StringVector_field_0x08); /*0x7ae6cc*/
    v4 = a3; /*0x7ae6d5*/
    this->StringVector_field_0x08 = (int)v13; /*0x7ae6dc*/
    this->StringVector_field_0x04 = v18; /*0x7ae6df*/
  }
  if ( v4 < *(_DWORD *)this->__pad_0 ) /*0x7ae6e8*/
    memcpy( /*0x7ae703*/
      (void *)(this->StringVector_field_0x08 + 4 * v4 + 4),
      (const void *)(this->StringVector_field_0x08 + 4 * v4),
      4 * (*(_DWORD *)this->__pad_0 + 0x3FFFFFFF * v4));
  v15 = (String *)(this->StringVector_field_0x08 + 4 * v4); /*0x7ae70e*/
  if ( v15 ) /*0x7ae713*/
    String::AssignFromPtr(v15, a2); /*0x7ae71a*/
  ++*(_DWORD *)this->__pad_0; /*0x7ae723*/
  return 1; /*0x7ae721*/
}



// ==== 0x007AE730  VectorClass::Shrink  this=VectorClass  sig=csp ====
int __thiscall VectorClass::Shrink(VectorClass *this)
{
  void *vtable0; // eax
  int Items; // ecx
  int result; // eax
  int v5; // ebx
  void *v6; // eax
  const void *Capacity; // esi
  int v8; // [esp+8h] [ebp-4h]

  vtable0 = this->vtable0; /*0x7ae735*/
  Items = (int)this->Items; /*0x7ae738*/
  result = 3 * (_DWORD)vtable0; /*0x7ae73b*/
  if ( result <= Items ) /*0x7ae740*/
  {
    result = Items - (Items >> 31); /*0x7ae74b*/
    v5 = Items / 2; /*0x7ae74f*/
    if ( Items / 2 < 10 ) /*0x7ae754*/
      v5 = 10; /*0x7ae756*/
    if ( v5 < Items ) /*0x7ae75d*/
    {
      v6 = (void *)__2_YAPAXI_Z(4 * v5); /*0x7ae76e*/
      Capacity = (const void *)this->Capacity; /*0x7ae773*/
      v8 = (int)v6; /*0x7ae77b*/
      if ( Capacity ) /*0x7ae77f*/
        qmemcpy(v6, Capacity, 4 * (int)this->vtable0); /*0x7ae78f*/
      __3_YAXPAX_Z((void *)this->Capacity); /*0x7ae79d*/
      this->Capacity = v8; /*0x7ae7a9*/
      this->Items = (void *)v5; /*0x7ae7ac*/
      LOBYTE(result) = 1; /*0x7ae7b1*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x7ae760*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x7ae743*/
  }
  return result; /*0x7ae742*/
}



// ==== 0x007AE7C0  ObjectClass::GameOptionsScreenWOL_Helper_7AE7C0  this=ObjectClass  sig=csp ====
bool __thiscall GameOptionsScreenWOL_Helper_7AE7C0(ObjectClass *this, const char **a2, _DWORD *a3)
{
  bool result; // al
  int v4; // esi

  if ( !this->? ) /*0x7ae7c4*/
    return 0; /*0x7ae7cc*/
  v4 = *((_DWORD *)this->AbstractClass + (((int (__thiscall *)(const char **))this->?)(a2) & ((1 << (int)this->?) - 1))); /*0x7ae7ea*/
  if ( !v4 ) /*0x7ae7ef*/
    return 0; /*0x7ae7f2*/
  while ( 1 ) /*0x7ae7fb*/
  {
    result = String::Compare((String *)v4, a2); /*0x7ae7fb*/
    if ( result ) /*0x7ae802*/
      break; /*0x7ae802*/
    v4 = *(_DWORD *)(v4 + 8); /*0x7ae804*/
    if ( !v4 ) /*0x7ae809*/
      return result; /*0x7ae809*/
  }
  *a3 = v4 + 4; /*0x7ae825*/
  return 1; /*0x7ae7cb*/
}



// ==== 0x007AE830  ObjectClass::RemoveWOLPlayerLogin_Remove  this=ObjectClass  sig=csp ====
void __thiscall RemoveWOLPlayerLogin_Remove(ObjectClass *this)
{
  unsigned int vtable2; // esi
  int *vtable0; // ebp
  char *vtable3; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  vtable2 = (unsigned int)this->?; /*0x7ae835*/
  if ( (ObjectClass *)vtable2 > this->nextObject && LOBYTE(this->?) != 1 ) /*0x7ae847*/
  {
    vtable0 = (int *)this->AbstractClass; /*0x7ae850*/
    vtable3 = (char *)this->?; /*0x7ae853*/
    v13 = (int *)this->AbstractClass; /*0x7ae856*/
    this->? = (void *)(vtable2 >> 1); /*0x7ae85c*/
    this->? = vtable3 - 1; /*0x7ae864*/
    v5 = (void *)__2_YAPAXI_Z(4 * (vtable2 >> 1)); /*0x7ae86f*/
    v6 = 4 * (int)this->?; /*0x7ae874*/
    this->AbstractClass = v5; /*0x7ae87b*/
    memset(v5, 0, v6); /*0x7ae880*/
    if ( (int)vtable2 > 0 ) /*0x7ae88b*/
    {
      v7 = vtable0; /*0x7ae88d*/
      v8 = vtable2; /*0x7ae88f*/
      do /*0x7ae8c3*/
      {
        v9 = *v7; /*0x7ae891*/
        if ( *v7 ) /*0x7ae891*/
        {
          do /*0x7ae8bd*/
          {
            v10 = ((int (__thiscall *)(int))this->?)(v9) & ((1 << (int)this->?) - 1); /*0x7ae8a7*/
            v11 = *((_DWORD *)this->AbstractClass + v10); /*0x7ae8ab*/
            *((_DWORD *)this->AbstractClass + v10) = v9; /*0x7ae8b1*/
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
      vtable0 = v13; /*0x7ae8c5*/
    }
    __3_YAXPAX_Z(vtable0); /*0x7ae8ca*/
  }
}



// ==== 0x007AE8E0  ObjectClass::GameOptionsScreenWOL_Helper_7AE8E0  this=ObjectClass  sig=csp ====
bool __thiscall GameOptionsScreenWOL_Helper_7AE8E0(ObjectClass *this, const char **a2, _DWORD *a3)
{
  bool result; // al
  int v4; // esi

  if ( !this->? ) /*0x7ae8e4*/
    return 0; /*0x7ae8ec*/
  v4 = *((_DWORD *)this->AbstractClass + (((int (__thiscall *)(const char **))this->?)(a2) & ((1 << (int)this->?) - 1))); /*0x7ae90a*/
  if ( !v4 ) /*0x7ae90f*/
    return 0; /*0x7ae912*/
  while ( 1 ) /*0x7ae91b*/
  {
    result = String::Compare((String *)v4, a2); /*0x7ae91b*/
    if ( result ) /*0x7ae922*/
      break; /*0x7ae922*/
    v4 = *(_DWORD *)(v4 + 272); /*0x7ae924*/
    if ( !v4 ) /*0x7ae92c*/
      return result; /*0x7ae92c*/
  }
  *a3 = v4 + 4; /*0x7ae948*/
  return 1; /*0x7ae8eb*/
}



// ==== 0x007AE950  HashTable::FindWOLHashTableEntry  this=HashTable  sig=csp ====
char __thiscall HashTable::FindWOLHashTableEntry(HashTable *this, const char **a2, void *a3)
{
  int HashTable_field_0x04; // eax
  int v7; // ebx
  int v8; // esi
  _DWORD *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int HashTable_field_0x08; // esi
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
  int HashTable_field_0x0C; // edi
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

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x7ae95b*/
  if ( !HashTable_field_0x04 ) /*0x7ae960*/
    return 0; /*0x7ae965*/
  v37 = (double)(unsigned int)(HashTable_field_0x04 - 1) / (double)this->HashTable_field_0x08; /*0x7ae990*/
  v7 = ((int (__thiscall *)(const char **))this->HashTable_field_0x18)(a2) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7ae9a5*/
  v8 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x7ae9a7*/
  v36 = v8; /*0x7ae9ac*/
  if ( !v8 ) /*0x7ae9b0*/
    return 0; /*0x7ae9b5*/
  if ( (unsigned __int8)String::Compare((String *)v8, a2) ) /*0x7ae9c1*/
  {
    qmemcpy(a3, (const void *)(v8 + 4), 0x10Cu); /*0x7ae9da*/
    v9 = *(_DWORD **)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x7ae9df*/
    v10 = v9[68]; /*0x7ae9e4*/
    if ( v9 ) /*0x7ae9ea*/
    {
      DeleteAndZero(*(ObjectClass **)(*(_DWORD *)this->__pad_0 + 4 * v7)); /*0x7ae9ee*/
      __3_YAXPAX_Z(v9); /*0x7ae9f4*/
    }
    *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v7) = v10; /*0x7aea03*/
    v11 = v37 < *(double *)&this->HashTable_field_0x20; /*0x7aea09*/
    v12 = v37 == *(double *)&this->HashTable_field_0x20; /*0x7aea09*/
    --this->HashTable_field_0x04; /*0x7aea0d*/
    if ( v11 || v12 ) /*0x7aea12*/
    {
      HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7aea1b*/
      if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7aea2d*/
      {
        v14 = *(int **)this->__pad_0; /*0x7aea36*/
        v39 = *(int **)this->__pad_0; /*0x7aea3b*/
        v15 = this->HashTable_field_0x0C - 1; /*0x7aea41*/
        this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x7aea42*/
        this->HashTable_field_0x0C = v15; /*0x7aea4c*/
        v16 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x7aea58*/
        v17 = 4 * this->HashTable_field_0x08; /*0x7aea5d*/
        *(_DWORD *)this->__pad_0 = v16; /*0x7aea64*/
        memset(v16, 0, v17); /*0x7aea6a*/
        if ( (int)HashTable_field_0x08 > 0 ) /*0x7aea75*/
        {
          v18 = v14; /*0x7aea77*/
          v19 = HashTable_field_0x08; /*0x7aea79*/
          do /*0x7aeab4*/
          {
            v20 = *v18; /*0x7aea7b*/
            if ( *v18 ) /*0x7aea7b*/
            {
              do /*0x7aeaae*/
              {
                v21 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v20) /*0x7aea91*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v22 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v21); /*0x7aea96*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v21) = v20; /*0x7aea9c*/
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
      while ( !(unsigned __int8)String::Compare((String *)v24, a2) ) /*0x7aeae8*/
      {
        v36 = v24; /*0x7aeaea*/
        v24 = *(_DWORD *)(v24 + 272); /*0x7aeaee*/
        if ( !v24 ) /*0x7aeaf6*/
          goto LABEL_24; /*0x7aeaf6*/
      }
      qmemcpy(a3, (const void *)(v24 + 4), 0x10Cu); /*0x7aeb0a*/
      *(_DWORD *)(v36 + 272) = *(_DWORD *)(v24 + 272); /*0x7aeb12*/
      --this->HashTable_field_0x04; /*0x7aeb1e*/
      DeleteAndZero((ObjectClass *)v24); /*0x7aeb25*/
      __3_YAXPAX_Z((void *)v24); /*0x7aeb2b*/
      v38 = 1; /*0x7aeb33*/
    }
LABEL_24:
    if ( v37 <= *(double *)&this->HashTable_field_0x20 ) /*0x7aeb44*/
    {
      v25 = this->HashTable_field_0x08; /*0x7aeb4a*/
      if ( v25 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7aeb5c*/
      {
        HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x7aeb62*/
        v27 = *(int **)this->__pad_0; /*0x7aeb65*/
        v40 = *(int **)this->__pad_0; /*0x7aeb6a*/
        this->HashTable_field_0x08 = v25 >> 1; /*0x7aeb70*/
        this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x7aeb78*/
        v28 = (void *)__2_YAPAXI_Z(4 * (v25 >> 1)); /*0x7aeb83*/
        v29 = 4 * this->HashTable_field_0x08; /*0x7aeb88*/
        *(_DWORD *)this->__pad_0 = v28; /*0x7aeb8f*/
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
                v33 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v32) /*0x7aebbc*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v34 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v33); /*0x7aebc1*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v33) = v32; /*0x7aebc7*/
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
int __thiscall HashTable::Shrink(HashTable *this)
{
  unsigned int HashTable_field_0x08; // esi
  int result; // eax
  int *v4; // ebp
  int HashTable_field_0x0C; // edi
  void *v6; // edi
  unsigned int v7; // edx
  int *v8; // edi
  unsigned int v9; // ebp
  int v10; // esi
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int *v14; // [esp+8h] [ebp-4h]

  HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7aec05*/
  result = this->HashTable_field_0x30; /*0x7aec08*/
  if ( HashTable_field_0x08 > result && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7aec17*/
  {
    v4 = *(int **)this->__pad_0; /*0x7aec20*/
    HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x7aec23*/
    v14 = *(int **)this->__pad_0; /*0x7aec26*/
    this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x7aec2c*/
    this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x7aec34*/
    v6 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x7aec3f*/
    v7 = 4 * this->HashTable_field_0x08; /*0x7aec44*/
    *(_DWORD *)this->__pad_0 = v6; /*0x7aec4b*/
    memset(v6, 0, v7); /*0x7aec50*/
    if ( (int)HashTable_field_0x08 > 0 ) /*0x7aec5b*/
    {
      v8 = v4; /*0x7aec5d*/
      v9 = HashTable_field_0x08; /*0x7aec5f*/
      do /*0x7aec99*/
      {
        v10 = *v8; /*0x7aec61*/
        if ( *v8 ) /*0x7aec61*/
        {
          do /*0x7aec93*/
          {
            v11 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v10) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7aec77*/
            v12 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v11); /*0x7aec7b*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v11) = v10; /*0x7aec81*/
            v13 = *(_DWORD *)(v10 + 272); /*0x7aec83*/
            *(_DWORD *)(v10 + 272) = v12; /*0x7aec89*/
            v10 = v13; /*0x7aec8f*/
          }
          while ( v13 ); /*0x7aec93*/
        }
        ++v8; /*0x7aec95*/
        --v9; /*0x7aec98*/
      }
      while ( v9 ); /*0x7aec99*/
      v4 = v14; /*0x7aec9b*/
    }
    __3_YAXPAX_Z(v4); /*0x7aeca0*/
  }
  return result; /*0x7aecaa*/
}



// ==== 0x007AECB0  CChatEventSink::ComputeBucketMask  this=CChatEventSink  sig=csp ====
int __thiscall sub_7AECB0(int this, int a2)
{
  return (*(int (__thiscall **)(int))(this + 24))(a2) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x7aecc4*/
}



// ==== 0x007AECD0  VectorClass::QueryNATPortWOL_Helper  this=VectorClass  sig=csp ====
_DWORD *__thiscall QueryNATPortWOL_Helper(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x7aecdb*/
  this->Capacity = a2; /*0x7aecde*/
  this->IsInitialized = 1; /*0x7aece1*/
  this->IsAllocated = 0; /*0x7aece5*/
  this->vtable0 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x7aece8*/
  if ( a2 ) /*0x7aecee*/
  {
    if ( a3 ) /*0x7aecf6*/
    {
      this->Items = (void *)a3; /*0x7aecf8*/
      return &this->vtable0; /*0x7aecfe*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x7aed0d*/
    this->IsAllocated = 1; /*0x7aed10*/
  }
  return &this->vtable0; /*0x7aecfd*/
}



// ==== 0x007AED20  ComStreamClass::writeData  this=ComStreamClass  sig=csp ====
void **__thiscall ComStreamClass::writeData(ComStreamClass *this, char a2)
{
  DeleteAndZero((ObjectClass *)this); /*0x7aed23*/
  if ( (a2 & 1) != 0 ) /*0x7aed2d*/
    __3_YAXPAX_Z(this); /*0x7aed30*/
  return (void **)this; /*0x7aed3a*/
}



// ==== 0x007AED40  CChatEventSink::ProcessChatEvent  this=CChatEventSink  sig=csp ====
char __thiscall CChatEventSink::ProcessChatEvent(CChatEventSink *this)
{
  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  const void *CChatEventSink_field_0x08; // esi
  int v7; // [esp+4h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x7aed44*/
  if ( *(_DWORD *)this->__pad_0 < this->CChatEventSink_field_0x04 ) /*0x7aed4b*/
    return 0; /*0x7aed4d*/
  v4 = 2 * v2; /*0x7aed53*/
  if ( 2 * v2 < 10 ) /*0x7aed5b*/
    v4 = 10; /*0x7aed5d*/
  v5 = (void *)__2_YAPAXI_Z(248 * v4); /*0x7aed72*/
  memset(v5, 0, 4 * ((unsigned int)(248 * v4) >> 2)); /*0x7aed7d*/
  v7 = (int)v5; /*0x7aed87*/
  CChatEventSink_field_0x08 = (const void *)this->CChatEventSink_field_0x08; /*0x7aed8d*/
  if ( CChatEventSink_field_0x08 ) /*0x7aed92*/
    qmemcpy(v5, CChatEventSink_field_0x08, 248 * *(_DWORD *)this->__pad_0); /*0x7aeda7*/
  __3_YAXPAX_Z((void *)this->CChatEventSink_field_0x08); /*0x7aedb4*/
  this->CChatEventSink_field_0x04 = v4; /*0x7aedc0*/
  this->CChatEventSink_field_0x08 = v7; /*0x7aedc3*/
  return 1; /*0x7aed4f*/
}



// ==== 0x007AEDD0  CChatEventSink::EnsureCapacity  this=CChatEventSink  sig=csp ====
char __thiscall CChatEventSink::EnsureCapacity(CChatEventSink *this, int a2)
{
  int v3; // esi
  int v5; // ecx
  int v6; // eax
  int CChatEventSink_field_0x04; // ecx
  int v8; // ebp
  void *v9; // eax
  const void *CChatEventSink_field_0x08; // esi
  int v11; // [esp+Ch] [ebp+4h]

  v3 = *(_DWORD *)this->__pad_0; /*0x7aedd4*/
  if ( !*(_DWORD *)this->__pad_0 ) /*0x7aedd4*/
    return 0; /*0x7aeddb*/
  v5 = a2; /*0x7aede1*/
  if ( a2 < 0 ) /*0x7aede7*/
    v5 = 0; /*0x7aede9*/
  if ( v5 >= v3 ) /*0x7aeded*/
    v5 = v3 - 1; /*0x7aedef*/
  memcpy( /*0x7aee0f*/
    (void *)(this->CChatEventSink_field_0x08 + 4 * v5),
    (const void *)(this->CChatEventSink_field_0x08 + 4 * (v5 + 1)),
    4 * (v3 + 0x3FFFFFFF * (v5 + 1)));
  v6 = *(_DWORD *)this->__pad_0 - 1; /*0x7aee1a*/
  *(_DWORD *)this->__pad_0 = v6; /*0x7aee1c*/
  CChatEventSink_field_0x04 = this->CChatEventSink_field_0x04; /*0x7aee1e*/
  if ( 3 * v6 <= CChatEventSink_field_0x04 ) /*0x7aee26*/
  {
    v8 = CChatEventSink_field_0x04 / 2; /*0x7aee2f*/
    if ( CChatEventSink_field_0x04 / 2 < 10 ) /*0x7aee34*/
      v8 = 10; /*0x7aee36*/
    if ( v8 < CChatEventSink_field_0x04 ) /*0x7aee3d*/
    {
      v9 = (void *)__2_YAPAXI_Z(4 * v8); /*0x7aee47*/
      CChatEventSink_field_0x08 = (const void *)this->CChatEventSink_field_0x08; /*0x7aee4c*/
      v11 = (int)v9; /*0x7aee54*/
      if ( CChatEventSink_field_0x08 ) /*0x7aee58*/
        qmemcpy(v9, CChatEventSink_field_0x08, 4 * *(_DWORD *)this->__pad_0); /*0x7aee66*/
      __3_YAXPAX_Z((void *)this->CChatEventSink_field_0x08); /*0x7aee73*/
      this->CChatEventSink_field_0x08 = v11; /*0x7aee7f*/
      this->CChatEventSink_field_0x04 = v8; /*0x7aee82*/
    }
  }
  return 1; /*0x7aedda*/
}



// ==== 0x007AEE90  CChatEventSink::Check  this=CChatEventSink  sig=csp ====
char __thiscall CChatEventSink::Check(CChatEventSink *this, _DWORD *a2, int a3)
{
  if ( a3 < 0 || a3 >= *(_DWORD *)this->__pad_0 ) /*0x7aee9a*/
    return 0; /*0x7aeead*/
  *a2 = *(_DWORD *)(this->CChatEventSink_field_0x08 + 4 * a3); /*0x7aeea6*/
  return 1; /*0x7aeeaa*/
}



// ==== 0x007AEEC0  Vector::Grow  this=Vector  sig=csp ====
char __thiscall Vector::Grow(Vector *this)
{
  int v2; // eax
  int v4; // esi
  void *v5; // ebp
  int v6; // [esp+4h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x7aeec4*/
  if ( *(_DWORD *)this->__pad_0 < (int)this->Vector_field_0x4 ) /*0x7aeecb*/
    return 0; /*0x7aeecd*/
  v4 = 2 * v2; /*0x7aeed4*/
  v6 = 2 * v2; /*0x7aeedb*/
  if ( 2 * v2 < 10 ) /*0x7aeedf*/
  {
    v6 = 10; /*0x7aeee1*/
    v4 = 10; /*0x7aeee9*/
  }
  v5 = (void *)__2_YAPAXI_Z(4 * v4); /*0x7aeefc*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x7aef0a*/
  if ( this->Vector_field_0x8 ) /*0x7aef13*/
  {
    qmemcpy(v5, this->Vector_field_0x8, 4 * *(_DWORD *)this->__pad_0); /*0x7aef28*/
    v4 = v6; /*0x7aef31*/
  }
  __3_YAXPAX_Z(this->Vector_field_0x8); /*0x7aef39*/
  this->Vector_field_0x4 = (void *)v4; /*0x7aef41*/
  this->Vector_field_0x8 = v5; /*0x7aef44*/
  return 1; /*0x7aeecf*/
}



// ==== 0x007AEF50  ComStreamClass::flushStream  this=ComStreamClass  sig=csp ====
void __thiscall ComStreamClass::flushStream(ComStreamClass *this)
{
  unsigned int ComStreamClass_field_0x08; // esi
  int *v3; // ebp
  int ComStreamClass_field_0x0C; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  ComStreamClass_field_0x08 = this->ComStreamClass_field_0x08; /*0x7aef55*/
  if ( ComStreamClass_field_0x08 > this->ComStreamClass_field_0x30 && LOBYTE(this->ComStreamClass_field_0x14) != 1 ) /*0x7aef67*/
  {
    v3 = *(int **)this->__pad_0; /*0x7aef70*/
    ComStreamClass_field_0x0C = this->ComStreamClass_field_0x0C; /*0x7aef73*/
    v13 = *(int **)this->__pad_0; /*0x7aef76*/
    this->ComStreamClass_field_0x08 = ComStreamClass_field_0x08 >> 1; /*0x7aef7c*/
    this->ComStreamClass_field_0x0C = ComStreamClass_field_0x0C - 1; /*0x7aef84*/
    v5 = (void *)__2_YAPAXI_Z(4 * (ComStreamClass_field_0x08 >> 1)); /*0x7aef8f*/
    v6 = 4 * this->ComStreamClass_field_0x08; /*0x7aef94*/
    *(_DWORD *)this->__pad_0 = v5; /*0x7aef9b*/
    memset(v5, 0, v6); /*0x7aefa0*/
    if ( (int)ComStreamClass_field_0x08 > 0 ) /*0x7aefab*/
    {
      v7 = v3; /*0x7aefad*/
      v8 = ComStreamClass_field_0x08; /*0x7aefaf*/
      do /*0x7aefe3*/
      {
        v9 = *v7; /*0x7aefb1*/
        if ( *v7 ) /*0x7aefb1*/
        {
          do /*0x7aefdd*/
          {
            v10 = ((int (__thiscall *)(int))this->ComStreamClass_field_0x18)(v9) /*0x7aefc7*/
                & ((1 << this->ComStreamClass_field_0x0C) - 1);
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x7aefcb*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x7aefd1*/
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
int __thiscall DynamicVector::EnsureCapacity(DynamicVector *this)
{
  int result; // eax
  int v3; // esi
  void *v4; // ebp
  int v5; // [esp+4h] [ebp-4h]

  result = *(_DWORD *)this->__pad_0; /*0x7af004*/
  if ( *(_DWORD *)this->__pad_0 >= *(_DWORD *)&this->DynamicVector_field_0x1[3] ) /*0x7af00b*/
  {
    v3 = 2 * result; /*0x7af014*/
    v5 = 2 * result; /*0x7af01b*/
    if ( 2 * result < 10 ) /*0x7af01f*/
    {
      v5 = 10; /*0x7af021*/
      v3 = 10; /*0x7af029*/
    }
    v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x7af03c*/
    memset(v4, 0, 4 * ((unsigned int)(4 * v3) >> 2)); /*0x7af04a*/
    if ( this->DynamicVector_field_0x8 ) /*0x7af053*/
    {
      qmemcpy(v4, (const void *)this->DynamicVector_field_0x8, 4 * *(_DWORD *)this->__pad_0); /*0x7af068*/
      v3 = v5; /*0x7af071*/
    }
    __3_YAXPAX_Z((void *)this->DynamicVector_field_0x8); /*0x7af079*/
    *(_DWORD *)&this->DynamicVector_field_0x1[3] = v3; /*0x7af081*/
    this->DynamicVector_field_0x8 = (int)v4; /*0x7af084*/
    LOBYTE(result) = 1; /*0x7af087*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x7af00d*/
  }
  return result; /*0x7af00f*/
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



// ==== 0x007AF2A0  StaticString::Factory  this=StaticString  sig=csp ====
char **__thiscall StaticString::Factory(StaticString *this)
{
  if ( (stru_B77EB0.customSound_controller[3] & 1) == 0 ) /*0x7af2ad*/
  {
    LOBYTE(stru_B77EB0.customSound_controller[3]) |= 1u; /*0x7af2b6*/
    String::Assign((String *)&stru_B77EB0.estimatedHealth, off_84D784); /*0x7af2c1*/
    atexit(unknown_libname_64); /*0x7af2cb*/
  }
  if ( (stru_B77EB0.customSound_controller[3] & 2) == 0 ) /*0x7af2dd*/
  {
    LOBYTE(stru_B77EB0.customSound_controller[3]) |= 2u; /*0x7af2e6*/
    String::Assign((String *)&stru_B77EB0.customSound_controller[2], off_816148); /*0x7af2f1*/
    atexit(unknown_libname_63); /*0x7af2fb*/
  }
  if ( (stru_B77EB0.customSound_controller[3] & 4) == 0 ) /*0x7af30d*/
  {
    LOBYTE(stru_B77EB0.customSound_controller[3]) |= 4u; /*0x7af316*/
    String::Assign((String *)&stru_B77EB0.needsRedraw, off_84D780); /*0x7af321*/
    atexit(unknown_libname_62); /*0x7af32b*/
  }
  if ( this == (StaticString *)1 ) /*0x7af337*/
    return (char **)&stru_B77EB0.estimatedHealth; /*0x7af381*/
  if ( this == (StaticString *)2 ) /*0x7af33a*/
    return (char **)&stru_B77EB0.customSound_controller[2]; /*0x7af37b*/
  if ( this == (StaticString *)3 ) /*0x7af33d*/
    return (char **)&stru_B77EB0.needsRedraw; /*0x7af375*/
  if ( (stru_B77EB0.customSound_controller[3] & 8) == 0 ) /*0x7af349*/
  {
    LOBYTE(stru_B77EB0.customSound_controller[3]) |= 8u; /*0x7af352*/
    String::Assign((String *)&stru_B77EB0.ambientSoundController[1], aXx); /*0x7af35d*/
    atexit(unknown_libname_61); /*0x7af367*/
  }
  return (char **)&stru_B77EB0.ambientSoundController[1]; /*0x7af335*/
}



// ==== 0x007AF390  unknown_libname_61  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_61()
{
  DeleteAndZero(&unk_B77EF0); /*0x7af395*/
}



// ==== 0x007AF3A0  unknown_libname_62  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_62()
{
  DeleteAndZero(&unk_B77F30); /*0x7af3a5*/
}



// ==== 0x007AF3B0  unknown_libname_63  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_63()
{
  DeleteAndZero((void **)&unk_B77F08); /*0x7af3b5*/
}



// ==== 0x007AF3C0  unknown_libname_64  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_64()
{
  DeleteAndZero(&unk_B77F20); /*0x7af3c5*/
}



// ==== 0x007AF3D0  ObjectClass::GetRegionStringWOL  this=ObjectClass  sig=csp ====
char **__thiscall GetRegionStringWOL(ObjectClass *this)
{
  if ( (stru_B77EB0.? & 1) == 0 ) /*0x7af3dd*/
  {
    LOBYTE(stru_B77EB0.?) |= 1u; /*0x7af3e6*/
    String::Assign((String *)&stru_B77EB0.?, "NA"); /*0x7af3f1*/
    atexit(unknown_libname_68); /*0x7af3fb*/
  }
  if ( (stru_B77EB0.? & 2) == 0 ) /*0x7af40d*/
  {
    LOBYTE(stru_B77EB0.?) |= 2u; /*0x7af416*/
    String::Assign((String *)&stru_B77EB0.?, "EU"); /*0x7af421*/
    atexit(unknown_libname_67); /*0x7af42b*/
  }
  if ( (stru_B77EB0.? & 4) == 0 ) /*0x7af43d*/
  {
    LOBYTE(stru_B77EB0.?) |= 4u; /*0x7af446*/
    String::Assign((String *)&stru_B77EB0.health, "AS"); /*0x7af451*/
    atexit(unknown_libname_66); /*0x7af45b*/
  }
  if ( this == (ObjectClass *)1 ) /*0x7af467*/
    return (char **)&stru_B77EB0.?; /*0x7af4b1*/
  if ( this == (ObjectClass *)2 ) /*0x7af46a*/
    return (char **)&stru_B77EB0.?; /*0x7af4ab*/
  if ( this == (ObjectClass *)3 ) /*0x7af46d*/
    return (char **)&stru_B77EB0.health; /*0x7af4a5*/
  if ( (stru_B77EB0.? & 8) == 0 ) /*0x7af479*/
  {
    LOBYTE(stru_B77EB0.?) |= 8u; /*0x7af482*/
    String::Assign((String *)&stru_B77EB0, "XX"); /*0x7af48d*/
    atexit(unknown_libname_65); /*0x7af497*/
  }
  return (char **)&stru_B77EB0; /*0x7af465*/
}



// ==== 0x007AF4C0  unknown_libname_65  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_65()
{
  DeleteAndZero(&stru_B77EB0); /*0x7af4c5*/
}



// ==== 0x007AF4D0  unknown_libname_66  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_66()
{
  DeleteAndZero((void **)&unk_B77F1C); /*0x7af4d5*/
}



// ==== 0x007AF4E0  unknown_libname_67  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_67()
{
  DeleteAndZero(&unk_B77EC8); /*0x7af4e5*/
}



// ==== 0x007AF4F0  unknown_libname_68  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_68()
{
  DeleteAndZero((void **)&unk_B77EC0); /*0x7af4f5*/
}



// ==== 0x007AF500  FactionSelectDialogControl@WorldDominationTour::Team_Start_7AF500  this=FactionSelectDialogControl@WorldDominationTour  sig=csp ====
void __thiscall Team_Start_7AF500(OwnerDrawControl *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx

  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 4); /*0x7af503*/
  *this = (OwnerDrawControl)&WorldDominationTour::FactionSelectDialogControl::`vftable'; /*0x7af506*/
  if ( v2 ) /*0x7af50e*/
    (**v2)(v2, 1); /*0x7af514*/
  v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 5); /*0x7af516*/
  if ( v3 ) /*0x7af51b*/
    (**v3)(v3, 1); /*0x7af521*/
  v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 6); /*0x7af523*/
  if ( v4 ) /*0x7af528*/
    (**v4)(v4, 1); /*0x7af52e*/
  OwnerDrawControl::InitVtable(this); /*0x7af532*/
}



// ==== 0x007AF540  ObjectClass::WorldDominationFactionDlgProc_Helper  this=ObjectClass  sig=csp ====
int __thiscall WorldDominationFactionDlgProc_Helper(ObjectClass *this, HWND hWnd, int *a3)
{
  int result; // eax
  int v5; // edi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // ecx

  result = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 2))(this); /*0x7af546*/
  if ( !(_BYTE)result ) /*0x7af54b*/
  {
    v5 = 0; /*0x7af554*/
    this->? = this->?; /*0x7af556*/
    result = *a3; /*0x7af55d*/
    if ( *a3 >= 16 && result < 364 && (v6 = a3[1], v6 >= 20) && v6 < 136 /*0x7af5bc*/
      || result >= 130 && result < 300 && (v7 = a3[1], v7 >= 100) && v7 < 216
      || result >= 175 && result < 245 && (v8 = a3[1], v8 >= 216) && v8 < 262 )
    {
      result = this->?; /*0x7af60d*/
      v5 = 2; /*0x7af610*/
      this->? = result; /*0x7af615*/
    }
    else if ( result >= 252 && result < 466 && (v9 = a3[1], v9 >= 180) && v9 < 382 /*0x7af5fe*/
           || result >= 212 && result < 496 && (v10 = a3[1], v10 >= 262) && v10 < 422 )
    {
      v5 = 3; /*0x7af603*/
      this->? = this->?; /*0x7af608*/
    }
    if ( this->? != (void *)v5 ) /*0x7af61b*/
    {
      this->? = (void *)v5; /*0x7af626*/
      return InvalidateRect(hWnd, 0, 0); /*0x7af629*/
    }
  }
  return result; /*0x7af62f*/
}



// ==== 0x007AF640  ObjectClass::method_7AF640  this=ObjectClass  sig=csp ====
int __thiscall sub_7AF640(ObjectClass *this, int a2)
{
  int result; // eax
  int referenceCount; // ecx
  _DWORD *v5; // eax
  _DWORD v6[4]; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v7[16]; // [esp+1Ch] [ebp-10h] BYREF

  result = (int)DSurface_Alternate; /*0x7af640*/
  if ( DSurface_Alternate ) /*0x7af64d*/
  {
    referenceCount = this->?; /*0x7af64f*/
    if ( referenceCount ) /*0x7af654*/
    {
      v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)referenceCount + 120))(referenceCount, v7); /*0x7af65d*/
      v6[0] = *v5; /*0x7af664*/
      v6[1] = v5[1]; /*0x7af66b*/
      v6[2] = v5[2]; /*0x7af672*/
      v6[3] = v5[3]; /*0x7af67f*/
      (*((void (__thiscall **)(DSurface *, _DWORD *, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 5))( /*0x7af68a*/
        DSurface_Alternate,
        v6,
        0);
      return (*((int (__thiscall **)(DSurface *, _DWORD *, int, _DWORD *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 /*0x7af6a7*/
              + 2))(
               DSurface_Alternate,
               v6,
               this->?,
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
          StringCSF = GetStringCSF((wchar_t *)aWdtFactionsele, 0, g_Str_File_WorldDom_cpp, 182); /*0x7af86f*/
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
            if ( DSurface_Alternate ) /*0x7af78a*/
            {
              v8 = v7[7]; /*0x7af78c*/
              if ( v8 ) /*0x7af791*/
              {
                v9 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 120))(v8, v15); /*0x7af79a*/
                v11 = *v9; /*0x7af7a1*/
                v12 = v9[1]; /*0x7af7a8*/
                v13 = v9[2]; /*0x7af7af*/
                v14 = v9[3]; /*0x7af7bc*/
                (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)DSurface_Alternate + 20))( /*0x7af7c7*/
                  DSurface_Alternate,
                  &v11,
                  0);
                (*(void (__thiscall **)(int, int *, _DWORD, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x7af7e4*/
                  DSurface_Alternate,
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
int __usercall sub_7AF970@<eax>(ObjectClass *this, int a2@<ebp>)
{
  int v2; // ebx
  _DWORD *v3; // eax
  int v4; // edi
  OwnerDrawControl v6; // [esp+Ch] [ebp-8Ch] BYREF
  int v7; // [esp+18h] [ebp-80h]
  _DWORD *v8; // [esp+1Ch] [ebp-7Ch]
  void (__thiscall ***v9)(_DWORD, int); // [esp+20h] [ebp-78h]
  _DWORD *v10; // [esp+24h] [ebp-74h]
  _DWORD *v11; // [esp+28h] [ebp-70h]
  CCFileClass v12; // [esp+2Ch] [ebp-6Ch] BYREF
  int v13[3]; // [esp+84h] [ebp-14h] BYREF
  int v14; // [esp+90h] [ebp-8h]

  Screen::Capture(1, 0, v2, a2); /*0x7af97c*/
  SimpleDialogControl::Constructor((SimpleDialogControl *)&v6); /*0x7af985*/
  v7 = 0; /*0x7af995*/
  v8 = 0; /*0x7af999*/
  v9 = 0; /*0x7af99d*/
  v10 = 0; /*0x7af9a1*/
  v6 = (OwnerDrawControl)&WorldDominationTour::FactionSelectDialogControl::`vftable'; /*0x7af9a5*/
  CCFileClass::Construct(&v12, aWdtfsbsmPcx); /*0x7af9ad*/
  v8 = DecodeFrameSHP((int)&v12, 0, 0, 0); /*0x7af9cb*/
  *(_DWORD *)v12.CDFileClass = &CCFileClass::`vftable'; /*0x7af9cf*/
  v14 = 0; /*0x7af9d3*/
  Vector::Clear((int)v13); /*0x7af9da*/
  *(_DWORD *)v12.CDFileClass = &off_7E1668; /*0x7af9e3*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v12); /*0x7af9eb*/
  if ( !v9 ) /*0x7af9f4*/
  {
    CCFileClass::Construct(&v12, aWdtfsasmPcx); /*0x7af9ff*/
    v3 = DecodeFrameSHP((int)&v12, 0, 0, 0); /*0x7afa0c*/
    *(_DWORD *)v12.CDFileClass = &CCFileClass::`vftable'; /*0x7afa18*/
    v9 = (void (__thiscall ***)(_DWORD, int))v3; /*0x7afa1c*/
    v14 = 0; /*0x7afa20*/
    Vector::Clear((int)v13); /*0x7afa27*/
    BufferIOFileClass::Destruct((BufferIOFileClass *)&v12); /*0x7afa30*/
  }
  if ( !v10 ) /*0x7afa39*/
  {
    CCFileClass::Construct(&v12, aWdtfsssmPcx); /*0x7afa44*/
    v10 = DecodeFrameSHP((int)&v12, 0, 0, 0); /*0x7afa5a*/
    CCFileClass::Destruct(&v12); /*0x7afa5e*/
  }
  v11 = v8; /*0x7afa76*/
  RunDialog(0x125u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WorldDominationFactionDlgProc, (LPARAM)&v6); /*0x7afa7a*/
  v4 = v7; /*0x7afa7f*/
  v6 = (OwnerDrawControl)&WorldDominationTour::FactionSelectDialogControl::`vftable'; /*0x7afa83*/
  if ( v8 ) /*0x7afa91*/
    (*(void (__thiscall **)(_DWORD *, int))*v8)(v8, 1); /*0x7afa97*/
  if ( v9 ) /*0x7afa9f*/
    (**v9)(v9, 1); /*0x7afaa5*/
  if ( v10 ) /*0x7afaad*/
    (*(void (__thiscall **)(_DWORD *, int))*v10)(v10, 1); /*0x7afab3*/
  OwnerDrawControl::InitVtable(&v6); /*0x7afab9*/
  return v4; /*0x7afac0*/
}



// ==== 0x007AFAD0  Team_Start_7AFAD0  this=AbstractClass  sig=csp ====
int __usercall sub_7AFAD0@<eax>(void *a1@<ecx>, int a2@<edi>)
{
  char **v2; // eax
  char **v3; // esi
  int v5; // edi
  void *v6; // [esp+4h] [ebp-88h] BYREF
  void *v7; // [esp+8h] [ebp-84h] BYREF
  char Buffer[128]; // [esp+Ch] [ebp-80h] BYREF

  v2 = StaticString::Factory(a1); /*0x7afad7*/
  sprintf(Buffer, "TheaterChoice%sMenu", *v2); /*0x7afae9*/
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
  wchar_t *v4; // eax
  void (__thiscall ***v6)(_DWORD, int); // ebp
  _DWORD *v7; // eax
  char v8; // bl
  MixFileClass *v9; // eax
  _DWORD *v10; // eax
  char v11; // bl
  MixFileClass *v12; // eax
  _DWORD *v13; // eax
  char v14; // bl
  MixFileClass *v15; // eax
  int v16; // esi
  OwnerDrawControl v17; // esi
  ObjectClass *v18; // [esp+0h] [ebp-13Ch]
  DeleteAndZero v19; // [esp+10h] [ebp-12Ch] BYREF
  ObjectClass *v20; // [esp+1Ch] [ebp-120h]
  _DWORD *v21; // [esp+20h] [ebp-11Ch]
  void (__stdcall ***v22)(int); // [esp+24h] [ebp-118h]
  ComPtr v23; // [esp+28h] [ebp-114h] BYREF
  int v24[3]; // [esp+88h] [ebp-B4h] BYREF
  int v25; // [esp+94h] [ebp-A8h]
  OwnerDrawControl v26[8]; // [esp+9Ch] [ebp-A0h] BYREF

  HIBYTE(v19.DeleteAndZero_field_0x04) = a1; /*0x7afba6*/
  if ( (int)g_DisplayWidth > 640 ) /*0x7afbaa*/
  {
    StringCSF = GetStringCSF(aWolWdtresoluti, 0, g_Str_File_WorldDom_cpp, 385); /*0x7afbc1*/
    WideString::Assign((wchar_t **)&v19, StringCSF); /*0x7afbcb*/
    v4 = WideString::GetOrEmpty((wchar_t **)&v19); /*0x7afbdb*/
    if ( ShowDialogConfirm(v4, 4, (unsigned __int8 (*)(void))Game::ProcessIdle, 1) != 6 /*0x7afc0e*/
      || !Team_Start(v18, 0x1E0u, a2, a3) )
    {
      DeleteAndZero::Alt(&v19); /*0x7afbf5*/
      return 0; /*0x7afc06*/
    }
    stru_A8EB00.ObjectTypeClass[33] = 640; /*0x7afc32*/
    stru_A8EB00.ObjectTypeClass[34] = 480; /*0x7afc38*/
    ScenarioClass::SaveGameOptions((ScenarioClass *)&stru_A8EB00.ObjectTypeClass[24]); /*0x7afc42*/
    DeleteAndZero::Alt(&v19); /*0x7afc4b*/
  }
  v6 = 0; /*0x7afc52*/
  v22 = 0; /*0x7afc5d*/
  v21 = 0; /*0x7afc61*/
  *(_DWORD *)v19.__pad_0 = 0; /*0x7afc65*/
  v7 = CCFileClass::Construct((CCFileClass *)&v23.ComPtr_field_0x08, g_Str_File_WDT_MIX); /*0x7afc69*/
  v8 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 20))(v7, 0); /*0x7afc82*/
  v23.ComPtr_field_0x08 = (int)&CCFileClass::`vftable'; /*0x7afc84*/
  v25 = 0; /*0x7afc88*/
  Vector::Clear((int)v24); /*0x7afc8f*/
  v23.ComPtr_field_0x08 = (int)&off_7E1668; /*0x7afc98*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v23.ComPtr_field_0x08); /*0x7afca0*/
  if ( v8 ) /*0x7afca7*/
  {
    v9 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x7afcab*/
    if ( v9 ) /*0x7afcb5*/
      v22 = (void (__stdcall ***)(int))MixFileClass::FromFile(v9, g_Str_File_WDT_MIX, (int)dword_886980); /*0x7afcc8*/
    else
      v22 = 0; /*0x7afcce*/
  }
  v10 = CCFileClass::Construct((CCFileClass *)&v23.ComPtr_field_0x08, aWdtvoxMix); /*0x7afcdb*/
  v11 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v10 + 20))(v10, 0); /*0x7afcef*/
  v23.ComPtr_field_0x08 = (int)&CCFileClass::`vftable'; /*0x7afcf1*/
  v25 = 0; /*0x7afcf5*/
  Vector::Clear((int)v24); /*0x7afcfc*/
  v23.ComPtr_field_0x08 = (int)&off_7E1668; /*0x7afd05*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v23.ComPtr_field_0x08); /*0x7afd0d*/
  if ( v11 ) /*0x7afd14*/
  {
    v12 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x7afd18*/
    if ( v12 ) /*0x7afd22*/
      v21 = MixFileClass::FromFile(v12, aWdtvoxMix, (int)dword_886980); /*0x7afd35*/
    else
      v21 = 0; /*0x7afd3b*/
  }
  v13 = CCFileClass::Construct((CCFileClass *)&v23.ComPtr_field_0x08, aLocalMix_1); /*0x7afd48*/
  v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 20))(v13, 0); /*0x7afd5c*/
  v23.ComPtr_field_0x08 = (int)&CCFileClass::`vftable'; /*0x7afd5e*/
  v25 = 0; /*0x7afd62*/
  Vector::Clear((int)v24); /*0x7afd69*/
  v23.ComPtr_field_0x08 = (int)&off_7E1668; /*0x7afd72*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v23.ComPtr_field_0x08); /*0x7afd7a*/
  if ( v14 ) /*0x7afd81*/
  {
    v15 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x7afd85*/
    if ( v15 ) /*0x7afd8f*/
      *(_DWORD *)v19.__pad_0 = MixFileClass::FromFile(v15, aLocalMix_1, (int)dword_886980); /*0x7afda2*/
    else
      *(_DWORD *)v19.__pad_0 = 0; /*0x7afda8*/
    v6 = *(void (__thiscall ****)(_DWORD, int))v19.__pad_0; /*0x7afdac*/
  }
  if ( !v22 ) /*0x7afdb6*/
    goto LABEL_46; /*0x7afdb6*/
  if ( !v6 ) /*0x7afdbe*/
  {
    (**v22)(1); /*0x7b004a*/
LABEL_46:
    if ( v6 ) /*0x7b004e*/
      (**v6)(v6, 1); /*0x7b0057*/
    if ( v21 ) /*0x7b005f*/
      (*(void (__thiscall **)(_DWORD *, int))*v21)(v21, 1); /*0x7b0065*/
    return 0; /*0x7b006a*/
  }
  v16 = HIBYTE(v19.DeleteAndZero_field_0x04) != 0 ? 4 : 1;
  if ( (HIBYTE(v19.DeleteAndZero_field_0x04) != 0 ? 3 : 0) == 0xFFFFFFFF )
    goto LABEL_41; /*0x7afdd2*/
  while ( 2 )
  {
    if ( v16 == 6 ) /*0x7afde0*/
      goto LABEL_40; /*0x7afde0*/
    switch ( v16 )
    {
      case 1:
        Screen::Capture(1, 0, v14, (int)&rc_ptr<WorldDominationTour::Campaign>::`vftable'); /*0x7afdf9*/
        Team_Start_7B0490(v26); /*0x7afe05*/
        RunDialog(0x125u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WorldDominationFactionDlgProc, (LPARAM)v26); /*0x7afe1c*/
        v17 = v26[3]; /*0x7afe21*/
        Team_Start_7AF500(v26); /*0x7afe2f*/
        dword_B77F94 = (char *)v17; /*0x7afe34*/
        v16 = v17 != 0 ? 4 : 0;
        goto LABEL_25; /*0x7afe3e*/
      case 4:
        if ( FetchWOLData(v18) ) /*0x7afeef*/
        {
          ComPtr::Constructor((ComPtr *)&v19.DeleteAndZero_field_0x08); /*0x7aff00*/
          v19.DeleteAndZero_field_0x08 = (int)&rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7aff0f*/
          ComPtr::Set((ComPtr *)&v19.DeleteAndZero_field_0x08, stru_B77F68.ComPtr_field_0x04); /*0x7aff13*/
          if ( !v20 ) /*0x7aff1e*/
          {
            v19.DeleteAndZero_field_0x08 = (int)&rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7b0030*/
            ComPtr::Release((ComPtr *)&v19.DeleteAndZero_field_0x08); /*0x7b0034*/
            return 0; /*0x7b0045*/
          }
          Team_Start_765410((int)v20, dword_B77F94); /*0x7aff2b*/
          if ( Team_Start_764FA0(v20) ) /*0x7aff34*/
          {
            ComPtr::Constructor(&v23); /*0x7aff41*/
            *(_DWORD *)v23.__pad_0 = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7aff50*/
            ComPtr::Set(&v23, stru_B77F68.ComPtr_field_0x14); /*0x7aff54*/
            if ( v23.ComPtr_field_0x04 && !Team_Start_764FA0((ObjectClass *)v23.ComPtr_field_0x04) ) /*0x7aff61*/
              Team_Start_76ECD0((int)&v23, dword_B77F98); /*0x7aff74*/
            *(_DWORD *)v23.__pad_0 = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7aff7d*/
            ComPtr::Release(&v23); /*0x7aff81*/
          }
          dword_A8B3AC = dword_B77F94 == (char *)3; /*0x7aff9a*/
          if ( Team_Start_76ED10((int)&v19.DeleteAndZero_field_0x08, dword_B77F98) ) /*0x7affa4*/
          {
            stru_B77D80.HashTable_field_0x44 = 0; /*0x7affb2*/
            Team_Start_597430((ObjectClass *)&g_MissionQueueFrame.briefing[356]); /*0x7affb8*/
            v16 = 5; /*0x7affbd*/
          }
          else
          {
            v16 = 1; /*0x7affc4*/
          }
          v19.DeleteAndZero_field_0x08 = (int)&rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7affcd*/
          ComPtr::Release((ComPtr *)&v19.DeleteAndZero_field_0x08); /*0x7affd1*/
LABEL_25:
          if ( !v16 ) /*0x7afe43*/
            goto LABEL_40; /*0x7afe43*/
          continue; /*0x7afe43*/
        }
        v16 = 0; /*0x7afff2*/
LABEL_40:
        v6 = *(void (__thiscall ****)(_DWORD, int))v19.__pad_0; /*0x7afff4*/
LABEL_41:
        ((void (__thiscall *)(void (__stdcall ***)(int), int))**v22)(v22, 1); /*0x7afff8*/
        (**v6)(v6, 1); /*0x7b0009*/
        if ( v21 ) /*0x7b0011*/
          (*(void (__thiscall **)(_DWORD *, int))*v21)(v21, 1); /*0x7b0017*/
        return v16 == 6;
      case 5:
        v16 = JoinLobbyWOL(v18) != 1 ? 4 : 6;
        continue; /*0x7affed*/
    }
  }
}



// ==== 0x007A0430  ObjectClass::CollectWOLConnectionTokens  this=ObjectClass  sig=csp ====
signed int CollectWOLConnectionTokens(ObjectClass *this)
{
  signed int result; // eax
  int v2; // ebx
  int v3; // ebp
  char *v4; // eax
  int vtable3; // eax
  int v6; // esi
  int uniqueId; // ebx
  void *v8; // ebp
  void *abstractFlags; // eax
  int v10; // ebx
  void *v11; // ebp
  void *v12; // eax
  String *v13; // ecx
  void *v14; // [esp+8h] [ebp-7Ch]
  String v15; // [esp+Ch] [ebp-78h] BYREF
  int v16; // [esp+14h] [ebp-70h]
  _BYTE v17[108]; // [esp+18h] [ebp-6Ch] BYREF

  memset(v17, 0, sizeof(v17)); /*0x7a0440*/
  Debug::Log(); /*0x7a044d*/
  result = g_WOL_UserList.owningHouseIndex; /*0x7a0452*/
  v2 = 0; /*0x7a045a*/
  *(_DWORD *)&v15.m_3[1] = 0; /*0x7a045e*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a0462*/
  {
    v3 = 0; /*0x7a0469*/
    v16 = 0; /*0x7a046c*/
    do /*0x7a0673*/
    {
      if ( v3 >= 0 && v2 < result ) /*0x7a0476*/
        qmemcpy(v17, (char *)g_WOL_UserList.nextObject + v3, sizeof(v17)); /*0x7a048a*/
      if ( (v17[0] & 1) != 0 /*0x7a04ba*/
        || (v4 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]), !_strcmpi(&v17[36], v4)) )
      {
        Debug::Log(); /*0x7a049d*/
      }
      else
      {
        String::Assign(&v15, &v17[36]); /*0x7a04e6*/
        String::GetOrEmpty(&v15); /*0x7a04ef*/
        Debug::Log(); /*0x7a04fa*/
        vtable3 = (int)stru_B76AC4.?; /*0x7a04ff*/
        v6 = (int)stru_B76AC4.?; /*0x7a0507*/
        v14 = stru_B76AC4.?; /*0x7a050b*/
        uniqueId = stru_B76AC4.?; /*0x7a0515*/
        if ( (int)stru_B76AC4.? >= stru_B76AC4.? ) /*0x7a051d*/
        {
          uniqueId = 2 * (int)stru_B76AC4.?; /*0x7a0527*/
          if ( 2 * (int)stru_B76AC4.? < 10 ) /*0x7a052d*/
            uniqueId = 10; /*0x7a052f*/
          v8 = (void *)__2_YAPAXI_Z(4 * uniqueId); /*0x7a0543*/
          memset(v8, 0, 4 * ((unsigned int)(4 * uniqueId) >> 2)); /*0x7a0551*/
          abstractFlags = (void *)stru_B76AC4.?; /*0x7a055a*/
          if ( stru_B76AC4.? ) /*0x7a0561*/
          {
            qmemcpy(v8, (const void *)stru_B76AC4.?, 4 * (int)stru_B76AC4.?); /*0x7a056d*/
            abstractFlags = (void *)stru_B76AC4.?; /*0x7a056f*/
            v6 = (int)v14; /*0x7a0574*/
          }
          __3_YAXPAX_Z(abstractFlags); /*0x7a0579*/
          vtable3 = (int)stru_B76AC4.?; /*0x7a057e*/
          stru_B76AC4.? = (int)v8; /*0x7a0586*/
          stru_B76AC4.? = uniqueId; /*0x7a058c*/
        }
        if ( vtable3 >= uniqueId ) /*0x7a0594*/
        {
          v10 = 2 * vtable3; /*0x7a0596*/
          if ( 2 * vtable3 < 10 ) /*0x7a059c*/
            v10 = 10; /*0x7a059e*/
          v11 = (void *)__2_YAPAXI_Z(4 * v10); /*0x7a05b2*/
          memset(v11, 0, 4 * ((unsigned int)(4 * v10) >> 2)); /*0x7a05c0*/
          v12 = (void *)stru_B76AC4.?; /*0x7a05c9*/
          if ( stru_B76AC4.? ) /*0x7a05d0*/
          {
            qmemcpy(v11, (const void *)stru_B76AC4.?, 4 * (int)stru_B76AC4.?); /*0x7a05dc*/
            v12 = (void *)stru_B76AC4.?; /*0x7a05de*/
            v6 = (int)v14; /*0x7a05e3*/
          }
          __3_YAXPAX_Z(v12); /*0x7a05e8*/
          vtable3 = (int)stru_B76AC4.?; /*0x7a05ed*/
          stru_B76AC4.? = (int)v11; /*0x7a05f5*/
          stru_B76AC4.? = v10; /*0x7a05fb*/
        }
        if ( v6 < vtable3 ) /*0x7a0603*/
        {
          memcpy( /*0x7a0620*/
            (void *)(stru_B76AC4.? + 4 * v6 + 4),
            (const void *)(stru_B76AC4.? + 4 * v6),
            4 * (vtable3 + 0x3FFFFFFF * v6));
          vtable3 = (int)stru_B76AC4.?; /*0x7a0625*/
        }
        v13 = (String *)(stru_B76AC4.? + 4 * v6); /*0x7a0633*/
        if ( v13 ) /*0x7a0638*/
        {
          String::AssignFromPtr(v13, (const char **)&v15); /*0x7a063f*/
          vtable3 = (int)stru_B76AC4.?; /*0x7a0644*/
        }
        stru_B76AC4.? = (void *)(vtable3 + 1); /*0x7a064e*/
        DeleteAndZero((ObjectClass *)&v15); /*0x7a0653*/
        v3 = v16; /*0x7a0658*/
        v2 = *(_DWORD *)&v15.m_3[1]; /*0x7a065c*/
      }
      result = g_WOL_UserList.owningHouseIndex; /*0x7a0660*/
      ++v2; /*0x7a0665*/
      v3 += 108; /*0x7a0666*/
      *(_DWORD *)&v15.m_3[1] = v2; /*0x7a066b*/
      v16 = v3; /*0x7a066f*/
    }
    while ( v2 < g_WOL_UserList.owningHouseIndex ); /*0x7a0673*/
  }
  return result; /*0x7a067b*/
}



// ==== 0x007A0690  ObjectClass::RequestMatchWOL  this=ObjectClass  sig=csp ====
char RequestMatchWOL(ObjectClass *this)
{
  HWND v1; // eax
  int i; // esi
  int v3; // esi
  int v4; // ebp
  int v5; // eax
  ObjectClass *nextObject; // ebx
  ObjectClass *PlayerProfile; // eax
  int v9; // esi
  int *matched; // edi
  char **v11; // eax
  wchar_t *StringCSF; // eax
  char **v13; // eax
  char **v14; // eax
  int v15; // esi
  int v16; // edi
  int v17; // esi
  char **v18; // eax
  int v19; // eax
  char **v20; // eax
  char **v21; // eax
  int v22; // esi
  char **v23; // eax
  char **v24; // eax
  char **v25; // eax
  int v26; // esi
  char *v27; // eax
  ObjectClass *v28; // [esp+0h] [ebp-124h]
  Performance *v29; // [esp+0h] [ebp-124h]
  ObjectClass *v30; // [esp+0h] [ebp-124h]
  _BYTE v31[276]; // [esp+10h] [ebp-114h] BYREF

  DeleteAndZero::Alt2((DeleteAndZero *)&stru_B76AC4); /*0x7a069f*/
  v1 = (HWND)Dialog::FindByHandle((Dialog *)0x11F); /*0x7a06a9*/
  if ( v1 ) /*0x7a06b2*/
    CloseDialog(v1, 0); /*0x7a06b8*/
  g_NetworkLobbyState = 0; /*0x7a06bd*/
  Network::Init(); /*0x7a06c3*/
  if ( g_WOL_UserList.owningHouseIndex < 2 ) /*0x7a06cf*/
    goto LABEL_17; /*0x7a06cf*/
  for ( i = 0; i < (int)stru_B76AC4.?; ++i ) /*0x7a06de*/
    DeleteAndZero((ObjectClass *)(stru_B76AC4.? + 4 * i)); /*0x7a06e8*/
  v3 = 0; /*0x7a06fc*/
  for ( stru_B76AC4.? = 0; v3 < stru_B76900.estimatedHealth; ++v3 ) /*0x7a0706*/
    DeleteAndZero((ObjectClass *)(stru_B76900.spawnStatus + 4 * v3)); /*0x7a0711*/
  stru_B76900.estimatedHealth = 0; /*0x7a0720*/
  dword_B736F4 = 0; /*0x7a0726*/
  CollectWOLConnectionTokens(v28); /*0x7a072c*/
  memset(&v31[168], 0, 0x6Cu); /*0x7a074b*/
  v4 = -1; /*0x7a074d*/
  Debug::Log(); /*0x7a0750*/
  v5 = 0; /*0x7a075e*/
  if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x7a0762*/
    goto LABEL_17; /*0x7a0762*/
  nextObject = g_WOL_UserList.nextObject; /*0x7a0764*/
  do /*0x7a0794*/
  {
    if ( v5 >= 0 && v5 < g_WOL_UserList.owningHouseIndex ) /*0x7a0770*/
      qmemcpy(&v31[168], nextObject, 0x6Cu); /*0x7a0780*/
    if ( (v31[168] & 1) != 0 ) /*0x7a078a*/
      v4 = v5; /*0x7a078c*/
    ++v5; /*0x7a078e*/
    nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x7a078f*/
  }
  while ( v5 < g_WOL_UserList.owningHouseIndex ); /*0x7a0794*/
  if ( v4 == -1 ) /*0x7a0799*/
  {
LABEL_17:
    g_WOL_GameListState = 1; /*0x7a079e*/
    g_WOL_IdleHandler = 0; /*0x7a07a8*/
    g_WOL_GameProcessState = -1; /*0x7a07ae*/
    g_WOL_GameListPool = time(0); /*0x7a07c0*/
    return 0; /*0x7a07d1*/
  }
  memset(&v31[60], 0, 0x6Cu); /*0x7a07e1*/
  if ( v4 >= 0 && v4 < g_WOL_UserList.owningHouseIndex ) /*0x7a07e7*/
    qmemcpy(&v31[60], (char *)g_WOL_UserList.nextObject + 108 * v4, 0x6Cu); /*0x7a0802*/
  *(_DWORD *)&v31[92] = 0; /*0x7a0808*/
  *(_DWORD *)&v31[36] = 0; /*0x7a080c*/
  v31[40] = 0; /*0x7a0810*/
  ReadRegistryOptionsWOL((ObjectClass *)&v31[36]); /*0x7a0815*/
  ComPtr::Constructor((ComPtr *)&v31[24]); /*0x7a081e*/
  *(_DWORD *)&v31[24] = &rc_ptr<PlayerProfile>::`vftable'; /*0x7a082c*/
  if ( (unsigned __int8)Flag::IsNot2((Flag *)&v31[36]) ) /*0x7a0830*/
  {
    PlayerProfile = LoadPlayerProfile((ObjectClass *)&v31[16], (const char **)&g_WindowManager.__pad_EC[684]); /*0x7a0842*/
    ComPtr::Set((ComPtr *)&v31[24], (int)PlayerProfile->?); /*0x7a084f*/
    *(_DWORD *)&v31[16] = &rc_ptr<PlayerProfile>::`vftable'; /*0x7a0858*/
    ComPtr::Release((ComPtr *)&v31[16]); /*0x7a085c*/
  }
  else
  {
    ComPtr::Set((ComPtr *)&v31[24], stru_B75E48.ComPtr_field_0x04); /*0x7a086d*/
  }
  v9 = *(_DWORD *)(*(_DWORD *)&v31[28] + 28); /*0x7a087b*/
  String::Assign((String *)&v31[32], aMatch); /*0x7a0882*/
  unknown_libname_73(&v31[8]); /*0x7a088b*/
  if ( dword_A8B244 != 3 ) /*0x7a0897*/
    goto LABEL_35; /*0x7a0897*/
  String::Assign_Alt((String *)&v31[32], aMatchwdt); /*0x7a08a6*/
  matched = RequestMatchWOL_Helper(); /*0x7a08b4*/
  ComPtr::Constructor((ComPtr *)&v31[16]); /*0x7a08b6*/
  *(_DWORD *)&v31[16] = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7a08c4*/
  ComPtr::Set((ComPtr *)&v31[16], matched[1]); /*0x7a08cc*/
  if ( *(_DWORD *)&v31[20] ) /*0x7a08d7*/
  {
    if ( *(_DWORD *)(*(_DWORD *)&v31[20] + 68) == 2 ) /*0x7a08f2*/
    {
      String::Assign_Alt((String *)&v31[8], aWds0); /*0x7a097a*/
      if ( v9 <= 4 ) /*0x7a0982*/
        goto LABEL_34; /*0x7a0982*/
    }
    else
    {
      if ( *(_DWORD *)(*(_DWORD *)&v31[20] + 68) != 3 ) /*0x7a08f5*/
      {
        g_WOL_GameListState = 0; /*0x7a08f8*/
        g_WOL_IdleHandler = 0; /*0x7a08fe*/
        g_WOL_GameProcessState = -1; /*0x7a0904*/
        g_WOL_GameListPool = time(0); /*0x7a091a*/
        *(_DWORD *)&v31[16] = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7a091f*/
        ComPtr::Release((ComPtr *)&v31[16]); /*0x7a0923*/
        DeleteAndZero((ObjectClass *)&v31[8]); /*0x7a092c*/
        DeleteAndZero((ObjectClass *)&v31[32]); /*0x7a0935*/
        *(_DWORD *)&v31[24] = &rc_ptr<PlayerProfile>::`vftable'; /*0x7a093e*/
        ComPtr::Release((ComPtr *)&v31[24]); /*0x7a0946*/
        return 0; /*0x7a0957*/
      }
      String::Assign_Alt((String *)&v31[8], aWds1); /*0x7a0961*/
      if ( (unsigned int)v9 > 4 ) /*0x7a0968*/
        goto LABEL_34; /*0x7a0968*/
    }
    v9 = -1; /*0x7a0984*/
    goto LABEL_34; /*0x7a0984*/
  }
  String::Assign_Alt((String *)&v31[8], aWds0); /*0x7a08e2*/
LABEL_34:
  String::Append((String *)&v31[8], aWdt); /*0x7a0987*/
  v11 = FromStringInt((char **)&v31[4], *(int *)dword_A8B240); /*0x7a099f*/
  String::Append2((String *)&v31[8], v11); /*0x7a09a9*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a09b2*/
  *(_DWORD *)&v31[16] = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7a09bb*/
  ComPtr::Release((ComPtr *)&v31[16]); /*0x7a09bf*/
LABEL_35:
  StringCSF = GetStringCSF(aWolRequestingm, 0, g_Str_File_wonline_cpp, 28395); /*0x7a09c9*/
  Dialog::ShowMessage(16744576, (size_t)StringCSF); /*0x7a09e6*/
  String::AssignFromPtr((String *)v31, (const char **)&v31[32]); /*0x7a09f7*/
  String::Append((String *)v31, aCou); /*0x7a0a05*/
  v13 = FromStringInt((char **)&v31[4], v9); /*0x7a0a10*/
  String::Append2((String *)v31, v13); /*0x7a0a1a*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0a23*/
  String::Append((String *)v31, aCol); /*0x7a0a31*/
  v14 = FromStringInt((char **)&v31[4], *(_DWORD *)(*(_DWORD *)&v31[28] + 32)); /*0x7a0a41*/
  String::Append2((String *)v31, v14); /*0x7a0a4b*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0a54*/
  String::Append((String *)v31, aMbr); /*0x7a0a62*/
  if ( *(_BYTE *)(*(_DWORD *)&v31[28] + 56) ) /*0x7a0a6b*/
    String::Append((String *)v31, (const char *)a1); /*0x7a0a77*/
  else
    String::Append((String *)v31, (const char *)&stru_82BA00.?); /*0x7a0a82*/
  String::AssignFromPtr((String *)&v31[12], (const char **)&g_WindowManager.__pad_EC[684]); /*0x7a0a90*/
  String::ToLower((String *)&v31[12]); /*0x7a0a99*/
  v15 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 /*0x7a0abd*/
                  + 4 * (dword_B76548(&v31[12]) & ((1 << SLOBYTE(g_WOL_ConnectionPool.HashMap_field_0x0C)) - 1)));
  if ( v15 ) /*0x7a0ac2*/
  {
    while ( !(unsigned __int8)String::Compare((String *)v15, (const char **)&v31[12]) ) /*0x7a0ad6*/
    {
      v15 = *(_DWORD *)(v15 + 8); /*0x7a0ad8*/
      if ( !v15 ) /*0x7a0add*/
        goto LABEL_50; /*0x7a0add*/
    }
    v16 = 0; /*0x7a0ae9*/
    if ( g_WOL_ConnectionPool.HashMap_field_0x04 ) /*0x7a0aed*/
    {
      v17 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 /*0x7a0b0e*/
                      + 4 * (dword_B76548(&v31[12]) & ((1 << SLOBYTE(g_WOL_ConnectionPool.HashMap_field_0x0C)) - 1)));
      if ( v17 ) /*0x7a0b13*/
      {
        while ( !(unsigned __int8)String::Compare((String *)v17, (const char **)&v31[12]) ) /*0x7a0b23*/
        {
          v17 = *(_DWORD *)(v17 + 8); /*0x7a0b25*/
          if ( !v17 ) /*0x7a0b2a*/
            goto LABEL_49; /*0x7a0b2a*/
        }
        if ( v17 != -4 ) /*0x7a0b37*/
          v16 = *(_DWORD *)(v17 + 4); /*0x7a0b39*/
      }
    }
LABEL_49:
    String::Append((String *)v31, aLoc); /*0x7a0b3b*/
    v18 = FromStringInt((char **)&v31[4], v16); /*0x7a0b4f*/
    String::Append2((String *)v31, v18); /*0x7a0b59*/
    DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0b62*/
  }
LABEL_50:
  String::Append((String *)v31, aRat); /*0x7a0b67*/
  v19 = Performance::Profile(v29); /*0x7a0b75*/
  v20 = FromStringInt((char **)&v31[4], v19); /*0x7a0b80*/
  String::Append2((String *)v31, v20); /*0x7a0b8a*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0b93*/
  String::Append((String *)v31, aRes); /*0x7a0ba1*/
  v21 = FromStringInt((char **)&v31[4], stru_A8EB00.ObjectTypeClass[33]); /*0x7a0bb0*/
  String::Append2((String *)v31, v21); /*0x7a0bba*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0bc3*/
  Network::GetAddress((Network *)&stru_A8DBC0, &v31[56], (int)&v31[48], &v31[46]); /*0x7a0bdc*/
  v22 = *(_DWORD *)&v31[48]; /*0x7a0be1*/
  String::Append((String *)v31, aAdr); /*0x7a0bee*/
  v23 = FromStringInt((char **)&v31[4], v22); /*0x7a0bf9*/
  String::Append2((String *)v31, v23); /*0x7a0c03*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0c0c*/
  String::Append((String *)v31, aNat); /*0x7a0c1a*/
  v24 = FromStringInt((char **)&v31[4], (unsigned __int16)dword_ABFEC8); /*0x7a0c2f*/
  String::Append2((String *)v31, v24); /*0x7a0c39*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0c42*/
  String::Append((String *)v31, aPrt); /*0x7a0c50*/
  v25 = FromStringInt((char **)&v31[4], dword_A8E228); /*0x7a0c5f*/
  String::Append2((String *)v31, v25); /*0x7a0c69*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0c72*/
  String::Append2((String *)v31, (char **)&v31[8]); /*0x7a0c80*/
  v26 = *(_DWORD *)ppv; /*0x7a0c8e*/
  v27 = String::GetOrEmpty((String *)v31); /*0x7a0c90*/
  (*(void (__stdcall **)(LPVOID, _BYTE *, char *))(v26 + 48))(ppv, &v31[60], v27); /*0x7a0ca2*/
  g_WOL_GameListState = 0; /*0x7a0ca5*/
  g_WOL_IdleHandler = 4; /*0x7a0cac*/
  g_WOL_GameProcessState = 180; /*0x7a0cb6*/
  g_WOL_GameListPool = time(0); /*0x7a0cc8*/
  ProcessPingRequestsWOL(v30); /*0x7a0ccd*/
  DeleteAndZero((ObjectClass *)&v31[12]); /*0x7a0cd6*/
  DeleteAndZero((ObjectClass *)v31); /*0x7a0cdf*/
  DeleteAndZero((ObjectClass *)&v31[8]); /*0x7a0ce8*/
  DeleteAndZero((ObjectClass *)&v31[32]); /*0x7a0cf1*/
  *(_DWORD *)&v31[24] = &rc_ptr<PlayerProfile>::`vftable'; /*0x7a0cfa*/
  ComPtr::Release((ComPtr *)&v31[24]); /*0x7a0cfe*/
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
    v3 = dword_B77900; /*0x7a0d34*/
    v7 = 0; /*0x7a0d3a*/
    v6 = dword_B77900; /*0x7a0d40*/
    if ( (int)dword_B77900 > 0 ) /*0x7a0d44*/
    {
      do /*0x7a0dba*/
      {
        if ( v1 >= 0 && v2 < (int)dword_B77900 ) /*0x7a0d51*/
        {
          qmemcpy(v9, (char *)dword_B77908 + v1, sizeof(v9)); /*0x7a0d64*/
          v3 = v6; /*0x7a0d66*/
        }
        S_addr = v9[6].S_un.S_addr; /*0x7a0d6f*/
        ntoainet(v9[6]); /*0x7a0d71*/
        Debug::Log(); /*0x7a0d81*/
        v8 = *(_DWORD *)g_UIPointerTable; /*0x7a0d9c*/
        v5 = ntoainet((struct in_addr)S_addr); /*0x7a0da0*/
        result = (*(int (__stdcall **)(LPVOID, char *, int, int *))(v8 + 24))(g_UIPointerTable, v5, 1000, &v7); /*0x7a0db1*/
        ++v2; /*0x7a0db4*/
        v1 += 108; /*0x7a0db5*/
      }
      while ( v2 < v3 ); /*0x7a0dba*/
    }
  }
  return result; /*0x7a0dbd*/
}



// ==== 0x007A0DD0  ObjectClass::method_7A0DD0  this=ObjectClass  sig=csp ====
void __thiscall sub_7A0DD0(ObjectClass *this)
{
  int v2; // ebp
  char **v3; // edi
  HWND GameUI; // eax

  if ( this ) /*0x7a0dd8*/
  {
    v2 = 0; /*0x7a0dda*/
    v3 = (char **)dword_A8DA90; /*0x7a0ddc*/
    while ( !*v3 || strcmp(ToWideStringChar(*v3), (const char *)&this->occupant) ) /*0x7a0e1a*/
    {
      ++v3; /*0x7a0e1c*/
      ++v2; /*0x7a0e1f*/
      if ( (int)v3 >= (int)&dword_A8DAB0 ) /*0x7a0e26*/
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
    v1 = *(wchar_t **)((char *)&dword_A8DA90 + i * 4); /*0x7a0e53*/
    if ( !v1 || !IsKnownPointer(v1) ) /*0x7a0e5d*/
      dword_B76440[i] = -1; /*0x7a0e66*/
    v2 = ToWideStringChar(*(char **)((char *)&dword_A8DA90 + i * 4)); /*0x7a0e76*/
    SetGameOptionsPing(v2, dword_B76440[i]); /*0x7a0e83*/
  }
}



// ==== 0x007A0EA0  SetGameOptionsPing  this=-  sig=csp ====
void __fastcall GameOptions_SetPing(const char *a1, int a2)
{
  int i; // edi
  char *v5; // ecx
  HWND GameUI; // ecx

  Debug::Log(); /*0x7a0eaf*/
  for ( i = 0; i < 8; ++i ) /*0x7a0eb7*/
  {
    v5 = (char *)*(&dword_A8DA90 + i); /*0x7a0eb9*/
    if ( v5 ) /*0x7a0ec2*/
    {
      if ( !strcmp(ToWideStringChar(v5), a1) ) /*0x7a0ed1*/
      {
        dword_B76440[i] = a2; /*0x7a0ef8*/
        GameUI = (HWND)Dialog::FindGameUI(); /*0x7a0f04*/
        if ( GameUI ) /*0x7a0f08*/
        {
          if ( a2 >= 0 ) /*0x7a0f0c*/
          {
            if ( a2 >= 300 ) /*0x7a0f18*/
            {
              if ( a2 >= 500 ) /*0x7a0f24*/
                UpdateLobbyGraphicsWOL(GameUI, 2); /*0x7a0f2e*/
              else
                UpdateLobbyGraphicsWOL(GameUI, 1); /*0x7a0f28*/
            }
            else
            {
              UpdateLobbyGraphicsWOL(GameUI, 0); /*0x7a0f1c*/
            }
          }
          else
          {
            UpdateLobbyGraphicsWOL(GameUI, -1); /*0x7a0f10*/
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

  v10 = dword_B77900; /*0x7a0f58*/
  memset(v11, 0, sizeof(v11)); /*0x7a0f5c*/
  Source[0] = 80; /*0x7a0f60*/
  Source[2] = 0; /*0x7a0f67*/
  Source[1] = dword_B77900 + 48; /*0x7a0f6c*/
  result = g_NetworkLobbyState; /*0x7a0f70*/
  if ( !g_NetworkLobbyState ) /*0x7a0f77*/
  {
    v1 = 0; /*0x7a0f7e*/
    if ( (int)dword_B77900 > 0 ) /*0x7a0f82*/
    {
      v2 = 0; /*0x7a0f8a*/
      do /*0x7a102a*/
      {
        if ( v2 >= 0 && v1 < (int)dword_B77900 ) /*0x7a0f96*/
          qmemcpy(v11, (char *)dword_B77908 + v2, sizeof(v11)); /*0x7a0faa*/
        (*(void (__stdcall **)(LPVOID, _DWORD, int *))(*(_DWORD *)g_UIPointerTable + 32))(g_UIPointerTable, v11[6], &v9); /*0x7a0fbe*/
        sprintf(Buffer, ",%s,%d", (const char *)&v11[9], v9); /*0x7a0fd8*/
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
char ProcessPingRequestsWOL(ObjectClass *this)
{
  char result; // al
  ULONG S_addr; // ebx
  char *v3; // eax
  int owningHouseIndex; // eax
  char *v5; // ebp
  int v6; // esi
  int v7; // edi
  char *v8; // eax
  int v9; // esi
  char *v10; // eax
  char *v11; // esi
  char v12; // [esp+13h] [ebp-79h]
  String v13; // [esp+14h] [ebp-78h] BYREF
  int v14; // [esp+1Ch] [ebp-70h] BYREF
  struct in_addr v15[27]; // [esp+20h] [ebp-6Ch] BYREF

  v12 = 0; /*0x7a1072*/
  memset(v15, 0, sizeof(v15)); /*0x7a1077*/
  result = g_NetworkLobbyState; /*0x7a1079*/
  if ( !g_NetworkLobbyState ) /*0x7a1080*/
  {
    Debug::Log(); /*0x7a1098*/
    result = (char)stru_B76AC4.?; /*0x7a109d*/
    if ( stru_B76AC4.? ) /*0x7a10a7*/
    {
      S_addr = v15[6].S_un.S_addr; /*0x7a10ad*/
      while ( 1 ) /*0x7a10b1*/
      {
        if ( stru_B76900.estimatedHealth >= 10 ) /*0x7a10b8*/
          return result; /*0x7a10b8*/
        result = v12; /*0x7a10be*/
        if ( v12 ) /*0x7a10c4*/
          return result; /*0x7a10c4*/
        unknown_libname_73(&v13); /*0x7a10ce*/
        if ( (int)stru_B76AC4.? > 0 ) /*0x7a10da*/
          String::Reassign(&v13, (const char **)stru_B76AC4.?); /*0x7a10e7*/
        String::GetOrEmpty(&v13); /*0x7a10f0*/
        Debug::Log(); /*0x7a10fb*/
        v3 = String::GetOrEmpty(&v13); /*0x7a1107*/
        String::Assign((String *)&v13.m_3[1], v3); /*0x7a1111*/
        owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a1116*/
        v5 = 0; /*0x7a111b*/
        v6 = 0; /*0x7a111d*/
        if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x7a1121*/
        {
LABEL_15:
          v6 = -1; /*0x7a115c*/
        }
        else
        {
          v7 = 0; /*0x7a1123*/
          while ( 1 ) /*0x7a1125*/
          {
            if ( v7 >= 0 && v6 < owningHouseIndex ) /*0x7a112b*/
              v5 = (char *)g_WOL_UserList.nextObject + v7; /*0x7a1132*/
            v8 = String::GetOrEmpty_Alt((String *)&v13.m_3[1]); /*0x7a113d*/
            if ( !_strcmpi(v8, v5 + 36) ) /*0x7a1143*/
              break; /*0x7a1143*/
            owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a114f*/
            ++v6; /*0x7a1154*/
            v7 += 108; /*0x7a1155*/
            if ( v6 >= g_WOL_UserList.owningHouseIndex ) /*0x7a115a*/
              goto LABEL_15; /*0x7a115a*/
          }
        }
        DeleteAndZero((ObjectClass *)&v13.m_3[1]); /*0x7a1163*/
        if ( v6 == -1 ) /*0x7a116b*/
        {
          if ( (int)stru_B76AC4.? > 0 ) /*0x7a127f*/
          {
            String::Reassign(&v13, (const char **)stru_B76AC4.?); /*0x7a128c*/
            v11 = 0; /*0x7a1296*/
            if ( stru_B76AC4.? ) /*0x7a129a*/
            {
              if ( (int)stru_B76AC4.? <= 0 ) /*0x7a129c*/
                v11 = (char *)stru_B76AC4.? - 1; /*0x7a129e*/
              DeleteAndZero((ObjectClass *)(stru_B76AC4.? + 4 * (_DWORD)v11)); /*0x7a12a9*/
              memcpy( /*0x7a12d2*/
                (void *)(stru_B76AC4.? + 4 * (_DWORD)v11),
                (const void *)(stru_B76AC4.? + 4 * (_DWORD)(v11 + 1)),
                4 * ((int)stru_B76AC4.? + 0x3FFFFFFF * (_DWORD)(v11 + 1)));
              if ( 3 * (int)--stru_B76AC4.? <= stru_B76AC4.? ) /*0x7a12ef*/
                VectorClass::Shrink((VectorClass *)&stru_B76AC4.?); /*0x7a12f6*/
            }
          }
          goto LABEL_36; /*0x7a12f6*/
        }
        if ( v6 >= 0 && v6 < g_WOL_UserList.owningHouseIndex ) /*0x7a117b*/
        {
          qmemcpy(v15, (char *)g_WOL_UserList.nextObject + 108 * v6, sizeof(v15)); /*0x7a1194*/
          S_addr = v15[6].S_un.S_addr; /*0x7a1196*/
        }
        if ( !S_addr ) /*0x7a119c*/
          break; /*0x7a119c*/
        String::GetOrEmpty(&v13); /*0x7a11a6*/
        Debug::Log(); /*0x7a11b1*/
        v9 = *(_DWORD *)g_UIPointerTable; /*0x7a11c3*/
        v10 = ntoainet((struct in_addr)S_addr); /*0x7a11cc*/
        if ( !(*(int (__stdcall **)(LPVOID, char *, int, int *))(v9 + 24))(g_UIPointerTable, v10, 1000, &v14) /*0x7a11e5*/
          && v14 >= 0 )
        {
          StringVector::Insert( /*0x7a11f8*/
            (StringVector *)&stru_B76900.estimatedHealth,
            (const char **)&v13,
            stru_B76900.estimatedHealth);
          if ( (int)stru_B76AC4.? > 0 ) /*0x7a1204*/
          {
            String::Reassign(&v13, (const char **)stru_B76AC4.?); /*0x7a1210*/
            DynamicArray::Remove((DynamicArray *)&stru_B76AC4.?, 0); /*0x7a121c*/
          }
LABEL_36:
          String::GetOrEmpty(&v13); /*0x7a12fb*/
          Debug::Log(); /*0x7a130a*/
          goto LABEL_37; /*0x7a130a*/
        }
        v12 = 1; /*0x7a1235*/
LABEL_37:
        DeleteAndZero((ObjectClass *)&v13); /*0x7a1312*/
        result = (char)stru_B76AC4.?; /*0x7a131b*/
        if ( !stru_B76AC4.? ) /*0x7a1322*/
          return result; /*0x7a1322*/
      }
      if ( (int)stru_B76AC4.? > 0 ) /*0x7a1246*/
      {
        String::Reassign(&v13, (const char **)stru_B76AC4.?); /*0x7a1253*/
        DynamicArray::Remove((DynamicArray *)&stru_B76AC4.?, 0); /*0x7a125f*/
      }
      goto LABEL_36; /*0x7a125f*/
    }
  }
  return result; /*0x7a1328*/
}



// ==== 0x007A1330  ObjectClass::UpdateWOLLobbyPings  this=ObjectClass  sig=csp ====
void UpdateWOLLobbyPings(ObjectClass *this)
{
  int v1; // ebp
  int v2; // esi
  char *v3; // eax
  int owningHouseIndex; // eax
  char *v5; // ebx
  int v6; // esi
  int v7; // edi
  char *v8; // eax
  char **v9; // eax
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  int v13; // eax
  ObjectClass *nextObject; // edx
  int v15; // esi
  char *v16; // eax
  char **v17; // [esp-8h] [ebp-B4h]
  char **v18; // [esp+0h] [ebp-ACh]
  String v19; // [esp+14h] [ebp-98h] BYREF
  int v20; // [esp+1Ch] [ebp-90h] BYREF
  int v21; // [esp+20h] [ebp-8Ch]
  String v22; // [esp+24h] [ebp-88h] BYREF
  String v23; // [esp+2Ch] [ebp-80h] BYREF
  char *v24; // [esp+34h] [ebp-78h] BYREF
  String v25; // [esp+38h] [ebp-74h] BYREF
  _DWORD v26[27]; // [esp+40h] [ebp-6Ch] BYREF

  memset(v26, 0, sizeof(v26)); /*0x7a1342*/
  v21 = 0; /*0x7a1349*/
  if ( !g_NetworkLobbyState ) /*0x7a1353*/
  {
    String::Assign((String *)&v19.m_3[1], aPings); /*0x7a1364*/
    Debug::Log(); /*0x7a1374*/
    if ( stru_B76900.estimatedHealth ) /*0x7a1383*/
    {
      v1 = v26[6]; /*0x7a138a*/
      do /*0x7a15ff*/
      {
        unknown_libname_73(&v19); /*0x7a1392*/
        v2 = stru_B76900.estimatedHealth - 1; /*0x7a139c*/
        if ( stru_B76900.estimatedHealth - 1 >= 0 && v2 < stru_B76900.estimatedHealth ) /*0x7a13a9*/
        {
          String::Reassign(&v19, (const char **)(stru_B76900.spawnStatus + 4 * v2)); /*0x7a13b9*/
          if ( stru_B76900.estimatedHealth ) /*0x7a13c5*/
          {
            if ( v2 >= stru_B76900.estimatedHealth ) /*0x7a13c9*/
              v2 = stru_B76900.estimatedHealth - 1; /*0x7a13cb*/
            Object::DtorWithDelete((Object *)(stru_B76900.spawnStatus + 4 * v2), 0); /*0x7a13d8*/
            memcpy( /*0x7a1401*/
              (void *)(stru_B76900.spawnStatus + 4 * v2),
              (const void *)(stru_B76900.spawnStatus + 4 * (v2 + 1)),
              4 * (stru_B76900.estimatedHealth + 0x3FFFFFFF * (v2 + 1)));
            --stru_B76900.estimatedHealth; /*0x7a140f*/
            if ( 3 * stru_B76900.estimatedHealth <= *(int *)&stru_B76900.isOnMap ) /*0x7a141e*/
              VectorClass::Shrink((VectorClass *)&stru_B76900.estimatedHealth); /*0x7a1425*/
          }
        }
        String::GetOrEmpty(&v19); /*0x7a142e*/
        Debug::Log(); /*0x7a1439*/
        v3 = String::GetOrEmpty(&v19); /*0x7a1445*/
        String::Assign(&v22, v3); /*0x7a144f*/
        owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a1454*/
        v5 = 0; /*0x7a1459*/
        v6 = 0; /*0x7a145b*/
        if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x7a145f*/
        {
LABEL_18:
          v6 = -1; /*0x7a149b*/
        }
        else
        {
          v7 = 0; /*0x7a1461*/
          while ( 1 ) /*0x7a1463*/
          {
            if ( v7 >= 0 && v6 < owningHouseIndex ) /*0x7a1469*/
              v5 = (char *)g_WOL_UserList.nextObject + v7; /*0x7a1471*/
            v8 = String::GetOrEmpty_Alt(&v22); /*0x7a147c*/
            if ( !_strcmpi(v8, v5 + 36) ) /*0x7a1482*/
              break; /*0x7a1482*/
            owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a148e*/
            ++v6; /*0x7a1493*/
            v7 += 108; /*0x7a1494*/
            if ( v6 >= g_WOL_UserList.owningHouseIndex ) /*0x7a1499*/
              goto LABEL_18; /*0x7a1499*/
          }
        }
        DeleteAndZero((ObjectClass *)&v22); /*0x7a14a2*/
        if ( v6 == -1 ) /*0x7a14aa*/
          goto LABEL_27; /*0x7a14aa*/
        if ( v6 >= 0 && v6 < g_WOL_UserList.owningHouseIndex ) /*0x7a14ca*/
        {
          qmemcpy(v26, (char *)g_WOL_UserList.nextObject + 108 * v6, sizeof(v26)); /*0x7a14e4*/
          v1 = v26[6]; /*0x7a14e6*/
        }
        if ( !v1 /*0x7a1522*/
          || (v20 = -1,
              (*(void (__stdcall **)(LPVOID, int, int *))(*(_DWORD *)g_UIPointerTable + 32))(g_UIPointerTable, v1, &v20),
              v20 == -1) )
        {
LABEL_27:
          String::GetOrEmpty(&v19); /*0x7a15dc*/
          Debug::Log(); /*0x7a15e7*/
        }
        else
        {
          String::GetOrEmpty(&v19); /*0x7a152d*/
          Debug::Log(); /*0x7a1538*/
          v18 = String::Assign(&v25, asc_81C8FC); /*0x7a1556*/
          v17 = FromStringInt((char **)&v23.m_3[1], v20); /*0x7a1565*/
          v9 = String::Assign(&v23, Str); /*0x7a1570*/
          v10 = String::Concat(&v19, &v24, v9); /*0x7a157f*/
          v11 = String::Concat((String *)v10, (char **)&v25.m_3[1], v17); /*0x7a1586*/
          v12 = String::Concat((String *)v11, (char **)&v22.m_3[1], v18); /*0x7a158d*/
          String::Append2((String *)&v19.m_3[1], v12); /*0x7a1597*/
          DeleteAndZero((ObjectClass *)&v22.m_3[1]); /*0x7a15a0*/
          DeleteAndZero((ObjectClass *)&v25.m_3[1]); /*0x7a15a9*/
          DeleteAndZero((ObjectClass *)&v24); /*0x7a15b2*/
          DeleteAndZero((ObjectClass *)&v23); /*0x7a15bb*/
          DeleteAndZero((ObjectClass *)&v23.m_3[1]); /*0x7a15c4*/
          DeleteAndZero((ObjectClass *)&v25); /*0x7a15cd*/
          ++v21; /*0x7a15d2*/
        }
        DeleteAndZero((ObjectClass *)&v19); /*0x7a15f3*/
      }
      while ( stru_B76900.estimatedHealth ); /*0x7a15ff*/
    }
    v13 = 0; /*0x7a160a*/
    dword_B736F4 = 0; /*0x7a160e*/
    if ( v21 > 0 && g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a161d*/
    {
      nextObject = g_WOL_UserList.nextObject; /*0x7a161f*/
      while ( 1 ) /*0x7a1625*/
      {
        if ( v13 >= 0 && v13 < g_WOL_UserList.owningHouseIndex ) /*0x7a162b*/
          qmemcpy(&g_WebBrowserConfig.occupant, nextObject, 0x6Cu); /*0x7a1639*/
        if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x7a1642*/
          break; /*0x7a1642*/
        ++v13; /*0x7a1644*/
        nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x7a1645*/
        if ( v13 >= g_WOL_UserList.owningHouseIndex ) /*0x7a164a*/
          goto LABEL_40; /*0x7a164a*/
      }
      if ( &g_WebBrowserConfig != (ObjectClass *)-36 ) /*0x7a1655*/
      {
        v15 = *(_DWORD *)ppv; /*0x7a165d*/
        v16 = String::GetOrEmpty((String *)&v19.m_3[1]); /*0x7a1663*/
        (*(void (__stdcall **)(LPVOID, int *, char *))(v15 + 48))(ppv, &g_WebBrowserConfig.occupant, v16); /*0x7a1675*/
        String::GetOrEmpty((String *)&v19.m_3[1]); /*0x7a167c*/
        Debug::Log(); /*0x7a1687*/
      }
    }
LABEL_40:
    DeleteAndZero((ObjectClass *)&v19.m_3[1]); /*0x7a168f*/
  }
}



// ==== 0x007A16B0  HandleWOLMatchMessage  this=-  sig=csp ====
void __fastcall HandleWOLMatchMessage(char *String1, char a2)
{
  wchar_t *StringCSF; // eax
  wchar_t *v5; // eax
  wchar_t *v6; // eax
  wchar_t *v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  char *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax

  if ( a2 ) /*0x7a16b8*/
  {
    if ( !_strnicmp(String1, aFail, 4u) ) /*0x7a16c6*/
    {
      StringCSF = GetStringCSF((wchar_t *)aWolMatchfail, 0, g_Str_File_wonline_cpp, 28671); /*0x7a16e3*/
LABEL_10:
      Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)StringCSF); /*0x7a17a2*/
      SetEvent(dword_B736C8); /*0x7a17b6*/
      return; /*0x7a17be*/
    }
    if ( !_strnicmp(String1, aPingfail, 8u) ) /*0x7a16f0*/
    {
      v5 = GetStringCSF(aWolMatchfailpi, 0, g_Str_File_wonline_cpp, 28677); /*0x7a170d*/
      Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)v5); /*0x7a1718*/
      SetEvent(dword_B736C8); /*0x7a1727*/
      return; /*0x7a172f*/
    }
    if ( !_strnicmp(String1, aRankfail, 8u) ) /*0x7a1738*/
    {
      v6 = GetStringCSF(aWolMatchfailra, 0, g_Str_File_wonline_cpp, 28683); /*0x7a1755*/
      Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)v6); /*0x7a1760*/
      SetEvent(dword_B736C8); /*0x7a176f*/
      return; /*0x7a1777*/
    }
    if ( !_strnicmp(String1, aWdtsidefail, 0xBu) ) /*0x7a1780*/
    {
      StringCSF = GetStringCSF(aWolMatchfailwd, 0, g_Str_File_wonline_cpp, 28689); /*0x7a179d*/
      goto LABEL_10; /*0x7a179d*/
    }
  }
  if ( !_strnicmp(String1, aExit_0, 4u) ) /*0x7a17c7*/
  {
    v7 = GetStringCSF(g_Str_WOL_MatchFailExit, 0, g_Str_File_wonline_cpp, 28695); /*0x7a17e4*/
    Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)v7); /*0x7a17ef*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x7a17ff*/
    v8 = GetStringCSF(g_Str_WOL_MatchFailExit, 0, g_Str_File_wonline_cpp, 28698); /*0x7a181a*/
    ShowDialogConfirm(v8, 0, (int)GameLoop::Thunk, 0); /*0x7a1823*/
    SetEvent(Handles); /*0x7a182f*/
  }
  else if ( !_strnicmp(String1, aWorking, 7u) ) /*0x7a1840*/
  {
    if ( g_WOL_IdleHandler == 4 ) /*0x7a1853*/
    {
      g_WOL_GameListState = 0; /*0x7a1857*/
      g_WOL_IdleHandler = 5; /*0x7a1861*/
      g_WOL_GameProcessState = 180; /*0x7a186b*/
      g_WOL_GameListPool = time(0); /*0x7a187d*/
    }
    v9 = GetStringCSF(aGuiMatchingpro, 0, g_Str_File_wonline_cpp, 28710); /*0x7a1893*/
    Dialog::ShowMessage(-1, (size_t)v9); /*0x7a189f*/
  }
  else if ( !_strnicmp(String1, aInfo, 5u) ) /*0x7a18b2*/
  {
    v10 = CharToWideString(String1 + 5); /*0x7a18c1*/
    Dialog::ShowMessage(16744576, (size_t)v10); /*0x7a18cc*/
  }
  else if ( !_strnicmp(String1, aPool, 5u) ) /*0x7a18df*/
  {
    v11 = GetStringCSF(aWolMatchingpla, 0, g_Str_File_wonline_cpp, 28720); /*0x7a1900*/
    Dialog::ShowMessage(16744576, (size_t)v11, String1 + 5); /*0x7a190b*/
  }
  else if ( a2 && !_strnicmp(String1, aStart_0, 6u) ) /*0x7a1922*/
  {
    strncpy(unk_B73714, String1 + 6, 0xFFu); /*0x7a193c*/
    Debug::Log(); /*0x7a194b*/
    SetEvent(dword_B736C4); /*0x7a195a*/
  }
  else if ( _strcmpi(String1, aAck) && _strcmpi(String1, aNack_0) ) /*0x7a197b*/
  {
    if ( !_strnicmp(String1, aNeed, 5u) ) /*0x7a198f*/
    {
      Debug::Log(); /*0x7a19a1*/
    }
    else if ( a2 ) /*0x7a19ae*/
    {
      v12 = GetStringCSF(aWolMatchunknow, 0, g_Str_File_wonline_cpp, 28753); /*0x7a19c1*/
      Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)v12); /*0x7a19cc*/
    }
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

  v10 = stru_B76AC4; /*0x7a19f1*/
  StringCSF = GetStringCSF(aWolMatchfoundw, 0, g_Str_File_wonline_cpp, 28774); /*0x7a19fc*/
  Dialog::ShowMessage(12648447, (size_t)StringCSF, v10); /*0x7a1a07*/
  String::ToLowerCopy((const char **)&stru_B76AC4, (char **)&v12); /*0x7a1a19*/
  if ( dword_B77D84 ) /*0x7a1a25*/
  {
    for ( i = *((_DWORD *)stru_B77D80 + (dword_B77D98(&v12) & ((1 << dword_B77D8C) - 1))); i; i = *(_DWORD *)(i + 112) ) /*0x7a1a4b*/
    {
      if ( String::Compare((const char **)i, (const char **)&v12) ) /*0x7a1a54*/
        break; /*0x7a1a5b*/
    }
  }
  v2 = String::GetOrEmpty((char **)&stru_B76AC4); /*0x7a1a6a*/
  String::Assign((char **)&v13, v2); /*0x7a1a74*/
  v3 = dword_B77900; /*0x7a1a79*/
  v4 = 0; /*0x7a1a7e*/
  v5 = 0; /*0x7a1a80*/
  if ( (int)dword_B77900 <= 0 ) /*0x7a1a84*/
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
        v4 = (char *)dword_B77908 + v6; /*0x7a1a96*/
      v7 = String::GetOrEmpty_Alt((char **)&v13); /*0x7a1aa1*/
      if ( !_strcmpi(v7, v4 + 36) ) /*0x7a1aa7*/
        break; /*0x7a1aa7*/
      v3 = dword_B77900; /*0x7a1ab3*/
      ++v5; /*0x7a1ab8*/
      v6 += 108; /*0x7a1ab9*/
      if ( v5 >= (int)dword_B77900 ) /*0x7a1abe*/
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
    if ( v5 >= 0 && v5 < (int)dword_B77900 ) /*0x7a1af3*/
      qmemcpy(v14, (char *)dword_B77908 + 108 * v5, sizeof(v14)); /*0x7a1b0d*/
    if ( v14[6] ) /*0x7a1b15*/
    {
      v13 = -1; /*0x7a1b27*/
      (*(void (__stdcall **)(LPVOID, _DWORD, int *))(*(_DWORD *)g_UIPointerTable + 32))(g_UIPointerTable, v14[6], &v13); /*0x7a1b34*/
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
char MatchGameWOL(ObjectClass *this)
{
  int v1; // ebp
  char *v2; // ebx
  char *v3; // eax
  char *v4; // esi
  char *v5; // eax
  char *v6; // eax
  wchar_t *StringCSF; // eax
  char *v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v12; // eax
  char **v13; // eax
  wchar_t *v14; // eax
  HANDLE *v15; // esi
  TechnoTypeClass *v16; // ecx
  int referenceCount; // eax
  int v18; // ebx
  char *v19; // eax
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  char **v25; // [esp-4h] [ebp-230h]
  int v26; // [esp-4h] [ebp-230h]
  ObjectClass *v27; // [esp+0h] [ebp-22Ch]
  _BYTE v28[284]; // [esp+10h] [ebp-21Ch] BYREF
  char Destination[256]; // [esp+12Ch] [ebp-100h] BYREF

  v1 = 0; /*0x7a1bb9*/
  g_NetworkLobbyState = 0; /*0x7a1bbc*/
  Network::Init(); /*0x7a1bc2*/
  strncpy(Destination, stru_B73708.__pad_C, 0x100u); /*0x7a1bd9*/
  strtok(Destination, asc_8318B8); /*0x7a1beb*/
  v2 = strtok(0, Str); /*0x7a1bfb*/
  *(_DWORD *)&v28[12] = v2; /*0x7a1c03*/
  strtok(0, Str); /*0x7a1c07*/
  strtok(0, Str); /*0x7a1c12*/
  strtok(0, Str); /*0x7a1c1d*/
  strtok(0, Str); /*0x7a1c28*/
  strtok(0, Str); /*0x7a1c33*/
  strtok(0, Str); /*0x7a1c41*/
  strtok(0, Str); /*0x7a1c4c*/
  v3 = strtok(0, Str); /*0x7a1c57*/
  v4 = v3; /*0x7a1c61*/
  if ( !v2 || !v3 ) /*0x7a1c6b*/
  {
    StringCSF = GetStringCSF(aWolMatchbadpar, 0, g_Str_File_wonline_cpp, 28847); /*0x7a20c0*/
    goto LABEL_35; /*0x7a20c0*/
  }
  v5 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7a1c76*/
  if ( _strcmpi(v2, v5) ) /*0x7a1c7d*/
  {
    v6 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7a1c8e*/
    if ( _strcmpi(v4, v6) ) /*0x7a1c95*/
    {
      StringCSF = GetStringCSF(aWolMatchbadpar, 0, g_Str_File_wonline_cpp, 28857); /*0x7a1ca6*/
LABEL_35:
      Dialog::ShowMessage(2146559, (size_t)StringCSF); /*0x7a20c5*/
      g_WOL_GameListState = 0; /*0x7a20d0*/
      g_WOL_IdleHandler = 3; /*0x7a20d6*/
      g_WOL_GameProcessState = 20; /*0x7a20e0*/
LABEL_36:
      g_WOL_GameListPool = time(0); /*0x7a20ea*/
      return 0; /*0x7a20f8*/
    }
  }
  v8 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7a1cb0*/
  if ( !_strcmpi(v2, v8) ) /*0x7a1cb7*/
  {
    String::Assign_Alt((String *)&stru_B76AC4, v4); /*0x7a1ccd*/
    MatchGameWOL_Delete(); /*0x7a1cd2*/
    v9 = GetStringCSF(aWolMatchcreati, 0, g_Str_File_wonline_cpp, 28867); /*0x7a1ce8*/
    Dialog::ShowMessage(-1, (size_t)v9); /*0x7a1cf5*/
    byte_B77DEC = 0; /*0x7a1d00*/
    g_WOL_GameListState = 0; /*0x7a1d07*/
    g_WOL_IdleHandler = 6; /*0x7a1d0d*/
    g_WOL_GameProcessState = 30; /*0x7a1d17*/
    g_WOL_GameListPool = time(0); /*0x7a1d25*/
    if ( CreateGameWOL(v27, (int)v4) ) /*0x7a1d2a*/
    {
      v10 = GetStringCSF(aWolMatchwaitin, 0, g_Str_File_wonline_cpp, 28871); /*0x7a1d45*/
      Dialog::ShowMessage(-1, (size_t)v10, v4); /*0x7a1d51*/
      return 1; /*0x7a1d65*/
    }
    v12 = GetStringCSF(aWolMatcherrorc, 0, g_Str_File_wonline_cpp, 28878); /*0x7a1d77*/
    Dialog::ShowMessage(2146559, (size_t)v12); /*0x7a1d82*/
    g_WOL_GameListState = 0; /*0x7a1d87*/
    g_WOL_IdleHandler = 2; /*0x7a1d8d*/
    g_WOL_GameProcessState = 30; /*0x7a1d97*/
    goto LABEL_36; /*0x7a1d9d*/
  }
  String::Assign_Alt((String *)&stru_B76AC4, v2); /*0x7a1da8*/
  MatchGameWOL_Delete(); /*0x7a1dad*/
  v25 = String::Assign((String *)&v28[8], aSGame); /*0x7a1dc4*/
  v13 = String::Assign((String *)&v28[4], v2); /*0x7a1dcb*/
  String::Concat((String *)v13, (char **)v28, v25); /*0x7a1dd2*/
  DeleteAndZero((ObjectClass *)&v28[4]); /*0x7a1ddb*/
  DeleteAndZero((ObjectClass *)&v28[8]); /*0x7a1de4*/
  v14 = GetStringCSF(aWolMatchattemp, 0, g_Str_File_wonline_cpp, 28885); /*0x7a1dfb*/
  Dialog::ShowMessage(-1, (size_t)v14, v2); /*0x7a1e08*/
  g_WOL_GameListState = 0; /*0x7a1e0e*/
  g_WOL_IdleHandler = 7; /*0x7a1e14*/
  g_WOL_GameProcessState = 30; /*0x7a1e1e*/
  g_WOL_GameListPool = time(0); /*0x7a1e30*/
  *(_DWORD *)&v28[4] = 1; /*0x7a1e35*/
  while ( 1 ) /*0x7a1e3d*/
  {
    if ( stru_B76510.StringVector_field_0x10 && !RequestChannelListWOL() ) /*0x7a1e4c*/
      goto LABEL_28; /*0x7a1e4c*/
    v15 = &Handles; /*0x7a1e52*/
    do /*0x7a1e69*/
      ResetEvent(*v15++); /*0x7a1e5a*/
    while ( (int)v15 < (int)g_WOL_RequestObject ); /*0x7a1e69*/
    *(_DWORD *)&v28[8] = 41; /*0x7a1e73*/
    Debug::Log(); /*0x7a1e7b*/
    if ( (*(int (__stdcall **)(LPVOID, _DWORD, _DWORD))(*(_DWORD *)ppv + 24))(ppv, *(_DWORD *)&v28[8], 0) ) /*0x7a1e91*/
    {
      SetEvent(Handles); /*0x7a1f54*/
LABEL_28:
      v21 = GetStringCSF(aWolMatchgamech, 0, g_Str_File_wonline_cpp, 28889); /*0x7a1f5a*/
      Dialog::ShowMessage(2146559, (size_t)v21, v2); /*0x7a1f77*/
      g_WOL_GameListState = 0; /*0x7a1f7c*/
      g_WOL_IdleHandler = 3; /*0x7a1f82*/
      g_WOL_GameProcessState = 20; /*0x7a1f8c*/
LABEL_29:
      g_WOL_GameListPool = time(0); /*0x7a1f96*/
      DeleteAndZero((ObjectClass *)v28); /*0x7a1fa8*/
      return 0; /*0x7a1fb9*/
    }
    Network_Helper_7ADB00( /*0x7a1eac*/
      (ObjectClass *)&stru_B76510.StringVector_field_0x10,
      &v28[8],
      stru_B76510.StringVector_field_0x10);
    if ( !RequestChannelListWOL() ) /*0x7a1eb8*/
      goto LABEL_28; /*0x7a1eb8*/
    memset(&v28[16], 0, 0x10Cu); /*0x7a1ec9*/
    v16 = 0; /*0x7a1ec9*/
    referenceCount = stru_B76AC4.?; /*0x7a1ecb*/
    if ( stru_B76AC4.? > 0 ) /*0x7a1ed2*/
      break; /*0x7a1ed2*/
LABEL_25:
    Game::ProcessIdle(v16); /*0x7a1f27*/
    Sleep(0x64u); /*0x7a1f2e*/
    if ( (*(_DWORD *)&v28[4])++ >= 30 ) /*0x7a1f3b*/
    {
      v24 = GetStringCSF(aWolMatchgamech, 0, g_Str_File_wonline_cpp, 28915); /*0x7a2080*/
      Dialog::ShowMessage(2146559, (size_t)v24, v2); /*0x7a208b*/
      g_WOL_GameListState = 0; /*0x7a2090*/
      g_WOL_IdleHandler = 2; /*0x7a2096*/
      g_WOL_GameProcessState = 30; /*0x7a20a0*/
      goto LABEL_29; /*0x7a20aa*/
    }
  }
  v18 = 0; /*0x7a1ed4*/
  while ( 1 ) /*0x7a1ed6*/
  {
    if ( v18 >= 0 && v1 < referenceCount ) /*0x7a1edc*/
      qmemcpy(&v28[16], (const void *)(v18 + stru_B76AC4.occupant), 0x10Cu); /*0x7a1ef0*/
    v19 = String::GetOrEmpty((String *)v28); /*0x7a1ef6*/
    if ( !_strcmpi(&v28[68], v19) ) /*0x7a1f01*/
      break; /*0x7a1f01*/
    referenceCount = stru_B76AC4.?; /*0x7a1f11*/
    ++v1; /*0x7a1f16*/
    v18 += 268; /*0x7a1f17*/
    if ( v1 >= stru_B76AC4.? ) /*0x7a1f1f*/
    {
      v2 = *(char **)&v28[12]; /*0x7a1f21*/
      v1 = 0; /*0x7a1f25*/
      goto LABEL_25; /*0x7a1f25*/
    }
  }
  if ( ValidateJoinWOL(v27, (int)&v28[16], v18, v1) ) /*0x7a1fc0*/
  {
    v26 = *(_DWORD *)&v28[12]; /*0x7a1fcf*/
    v22 = GetStringCSF(aWolMatchjoined, 0, g_Str_File_wonline_cpp, 28899); /*0x7a1fdf*/
    Dialog::ShowMessage(-1, (size_t)v22, v26); /*0x7a1fec*/
    g_WOL_GameListState = 0; /*0x7a1ff3*/
    g_WOL_IdleHandler = 9; /*0x7a1ffd*/
    g_WOL_GameProcessState = 90; /*0x7a2007*/
    g_WOL_GameListPool = time(0); /*0x7a201d*/
    DeleteAndZero((ObjectClass *)v28); /*0x7a2022*/
    return 1; /*0x7a2027*/
  }
  else
  {
    v23 = GetStringCSF(aWolMatcherrorj, 0, g_Str_File_wonline_cpp, 28907); /*0x7a2045*/
    Dialog::ShowMessage(2146559, (size_t)v23); /*0x7a2050*/
    DeleteAndZero((ObjectClass *)v28); /*0x7a205c*/
    return 0; /*0x7a2061*/
  }
}



// ==== 0x007A2110  sub_7A2110  this=-  sig=csp ====
int __stdcall sub_7A2110(HWND hWnd, UINT a2, WPARAM a3, char *a4)
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
            (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 44))(ppv, aStart443900100_0); /*0x7a21fc*/
            return 0; /*0x7a2201*/
          case 0x709u: /*0x7a21ce*/
            (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 44))(ppv, aStart443900100); /*0x7a21e7*/
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



// ==== 0x007A2230  Game_Setup  this=Coord  sig=csp ====
void __fastcall sub_7A2230(void *a1, char *Buffer, char *Buffera, char *a4)
{
  const char *v5; // edi
  const char *v6; // esi
  int v7; // edi
  char **v8; // esi
  char *v9; // eax
  int v10; // eax
  int v11; // [esp+10h] [ebp-10h] BYREF
  int v12; // [esp+14h] [ebp-Ch] BYREF
  char *v13; // [esp+18h] [ebp-8h] BYREF
  __int16 v14; // [esp+1Ch] [ebp-4h]

  if ( a1 ) /*0x7a223d*/
  {
    if ( Buffer ) /*0x7a2245*/
    {
      v5 = Buffera; /*0x7a224b*/
      if ( Buffera ) /*0x7a2251*/
      {
        v6 = a4; /*0x7a2257*/
        if ( a4 ) /*0x7a225d*/
        {
          Buffera = 0; /*0x7a2267*/
          a4 = 0; /*0x7a2272*/
          v11 = 0; /*0x7a2276*/
          sscanf(Buffer, "%X", &Buffera); /*0x7a227a*/
          sscanf(v5, "%X", &a4); /*0x7a228a*/
          sscanf(v6, "%X", &v11); /*0x7a229a*/
          v7 = 0; /*0x7a22a2*/
          v8 = (char **)&dword_A8DA90; /*0x7a22a4*/
          while ( 1 ) /*0x7a22ab*/
          {
            v9 = ToWideStringChar(*v8); /*0x7a22ab*/
            if ( !_strcmpi(a1, v9) ) /*0x7a22b2*/
              break; /*0x7a22b2*/
            ++v8; /*0x7a22be*/
            ++v7; /*0x7a22c1*/
            if ( (int)v8 >= (int)&dword_A8DAB0 ) /*0x7a22c8*/
              return; /*0x7a22c8*/
          }
          v13 = Buffera; /*0x7a22de*/
          v14 = 0; /*0x7a22e2*/
          v12 = 0; /*0x7a22fc*/
          NetworkID::Assign((_DWORD *)(12 * v7 + 11066316), &v12, (int)&v13, 0); /*0x7a2300*/
          v10 = v11; /*0x7a2309*/
          dword_A8DC2C[v7] = (int)a4; /*0x7a230d*/
          dword_A8E230[v7] = v10; /*0x7a2314*/
        }
      }
    }
  }
}



// ==== 0x007A2330  Game::SetupWOLTournament  this=ObjectClass  sig=csp ====
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
  v1 = strtok(String, asc_84D68C); /*0x7a2373*/
  v2 = strtok(0, Str); /*0x7a2375*/
  v3 = atol(v2); /*0x7a2387*/
  v4 = strtok(0, Str); /*0x7a2389*/
  v5 = atol(v4); /*0x7a239b*/
  v6 = strtok(0, Str); /*0x7a23a9*/
  v24 = strtok(0, Str); /*0x7a23b7*/
  v7 = strtok(0, Str); /*0x7a23bb*/
  Game_Setup(v1, v6, v24, v7); /*0x7a23cd*/
  String::Assign(&v24, v1); /*0x7a23d7*/
  SetupLobbyPlayerSlot((const char **)&v24, v3, v5, -2, -2); /*0x7a23e7*/
  DeleteAndZero((void **)&v24); /*0x7a23f0*/
  v8 = strtok(0, Str); /*0x7a2408*/
  v9 = strtok(0, Str); /*0x7a240a*/
  v10 = atol(v9); /*0x7a241c*/
  v11 = strtok(0, Str); /*0x7a241e*/
  v12 = atol(v11); /*0x7a2429*/
  v13 = strtok(0, Str); /*0x7a243e*/
  v24 = strtok(0, Str); /*0x7a244c*/
  v14 = strtok(0, Str); /*0x7a2450*/
  Game_Setup(v8, v13, v24, v14); /*0x7a2462*/
  String::Assign(&v24, v8); /*0x7a246c*/
  SetupLobbyPlayerSlot((const char **)&v24, v10, v12, -2, -2); /*0x7a247c*/
  DeleteAndZero((void **)&v24); /*0x7a2485*/
  dword_ABE028 = 4; /*0x7a2494*/
  strcpy(&byte_A8B8E0, aRandmapSed); /*0x7a24b0*/
  MEMORY[0xA8B254] = -1; /*0x7a24be*/
  v15 = (HWND)Dialog::FindByHandle((void *)0x11F); /*0x7a24c8*/
  GenerateRandomMapAndMinimap(v15, (char (*)())GameLoop::Thunk); /*0x7a24d4*/
  MapSeed::ValidateName(aRandmapSed); /*0x7a24e3*/
  v16 = 0; /*0x7a24ed*/
  v17 = 0; /*0x7a24ef*/
  if ( dword_A8B8D8 > 0 ) /*0x7a24f3*/
  {
    while ( !IsRandMap::Sed(*(_DWORD *)(dword_A8B8CC + 4 * v17)) ) /*0x7a2504*/
    {
      if ( ++v17 >= dword_A8B8D8 ) /*0x7a250e*/
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
    GameOption::SetDescriptionWStr(*(wchar_t **)(dword_A8B8CC + 4 * v17), &unk_ABE050); /*0x7a25c8*/
  }
  else
  {
    v20 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x7a2528*/
    if ( v20 ) /*0x7a2532*/
      v21 = SessionClass::ParseGameInfo(v20, aRandmapSed, &unk_ABE050, v19, 1, 0, 2, 4); /*0x7a254e*/
    else
      v21 = 0; /*0x7a2552*/
    if ( dword_A8B8D8 < dword_A8B8D0 /*0x7a258b*/
      || (byte_A8B8D5 || !dword_A8B8D0)
      && dword_A8B8DC > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8B8C8 + 8))(
           &dword_A8B8C8,
           dword_A8B8DC + dword_A8B8D0,
           0) )
    {
      v22 = dword_A8B8D8++; /*0x7a2598*/
      *(_DWORD *)(dword_A8B8CC + 4 * v22) = v21; /*0x7a25a7*/
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
      v6 = g_UIControlState; /*0x7a26bf*/
      if ( g_UIControlState ) /*0x7a26c7*/
      {
        ComPtr::Dtor(g_UIControlState); /*0x7a26cb*/
        __3_YAXPAX_Z(v6); /*0x7a26d1*/
        g_UIControlState = 0; /*0x7a26d9*/
        return 0; /*0x7a26e9*/
      }
      return 0; /*0x7a26c7*/
    }
    if ( a2 != 15 ) /*0x7a2642*/
      return a2 == 20; /*0x7a2647*/
    Dialog::DrawBackground(hWnd); /*0x7a265b*/
    Dialog::StopBink(hWnd); /*0x7a2662*/
    v5 = g_UIControlState; /*0x7a2667*/
    if ( g_UIControlState || MEMORY[0xA8B254] == -1 && (v5 = dword_ABE154) != 0 ) /*0x7a2682*/
      Skirmish::RenderPreview(v5, hWnd); /*0x7a2685*/
    if ( LoadScreen::IsActive(dword_AC4F58) ) /*0x7a268f*/
      LoadScreen::Render((int)dword_AC4F58, a3, (int)a4, NAN); /*0x7a26a5*/
    ValidateRect(hWnd, 0); /*0x7a26ad*/
    return 1; /*0x7a26b6*/
  }
  return result; /*0x7a264d*/
}



// ==== 0x007A2730  ObjectClass::Network_Create_7A2730  this=ObjectClass  sig=csp ====
int Network_Create_7A2730(ObjectClass *this)
{
  int result; // eax

  result = (int)ppv; /*0x7a2730*/
  if ( ppv ) /*0x7a2737*/
    return (*(int (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 60))(ppv, aG); /*0x7a2741*/
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
    StringCSF = GetStringCSF(aGuiHostgamesta_0, 0, g_Str_File_wonline_cpp, 29202); /*0x7a27ae*/
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
int __thiscall sub_7A2830(ObjectClass *this)
{
  int result; // eax
  int v2; // ebp
  int v3; // ebx
  char *v4; // eax
  _DWORD v6[27]; // [esp+14h] [ebp-6Ch] BYREF

  result = g_WOL_UserList.owningHouseIndex; /*0x7a2833*/
  v2 = 0; /*0x7a283a*/
  v3 = 0; /*0x7a283c*/
  v6[0] = 0; /*0x7a2846*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a284a*/
  {
    while ( 1 ) /*0x7a284c*/
    {
      if ( v2 >= 0 && v3 < result ) /*0x7a2852*/
        qmemcpy(v6, (char *)g_WOL_UserList.nextObject + v2, sizeof(v6)); /*0x7a2865*/
      v4 = String::GetOrEmpty_Alt((String *)this); /*0x7a2870*/
      if ( !_strcmpi(v4, (char *)&v6[9]) ) /*0x7a2876*/
        break; /*0x7a2876*/
      result = g_WOL_UserList.owningHouseIndex; /*0x7a2882*/
      ++v3; /*0x7a2887*/
      v2 += 108; /*0x7a2888*/
      if ( v3 >= g_WOL_UserList.owningHouseIndex ) /*0x7a288d*/
        return result; /*0x7a288d*/
    }
    return (*(int (__stdcall **)(LPVOID, _DWORD *))(*(_DWORD *)ppv + 84))(ppv, v6); /*0x7a28a4*/
  }
  return result; /*0x7a288f*/
}



// ==== 0x007A28B0  ObjectClass::PlayerSkirmishSlotHandler_Handle_7A28B0  this=ObjectClass  sig=csp ====
void __thiscall PlayerSkirmishSlotHandler_Handle_7A28B0(ObjectClass *this)
{
  int v1; // ebp
  signed int v2; // eax
  signed int v3; // ebx
  char *v4; // eax
  const wchar_t *v5; // [esp+4h] [ebp-74h] BYREF
  char *v6; // [esp+8h] [ebp-70h] BYREF
  _DWORD v7[27]; // [esp+Ch] [ebp-6Ch] BYREF

  v1 = 0; /*0x7a28b4*/
  if ( this ) /*0x7a28b8*/
  {
    WideString::Assign((WideString *)&v5, (wchar_t *)this); /*0x7a28c6*/
    ToWideStringCharAlt(&v6, &v5); /*0x7a28d3*/
    DeleteAndZero::Alt((DeleteAndZero *)&v5); /*0x7a28dc*/
    v2 = dword_B77900; /*0x7a28e1*/
    v3 = 0; /*0x7a28e6*/
    v7[0] = 0; /*0x7a28ea*/
    if ( (int)dword_B77900 > 0 ) /*0x7a28ee*/
    {
      while ( 1 ) /*0x7a28f0*/
      {
        if ( v1 >= 0 && v3 < v2 ) /*0x7a28f6*/
          qmemcpy(v7, (char *)dword_B77908 + v1, sizeof(v7)); /*0x7a2909*/
        v4 = String::GetOrEmpty_Alt((String *)&v6); /*0x7a2914*/
        if ( !_strcmpi(v4, (char *)&v7[9]) ) /*0x7a291a*/
          break; /*0x7a291a*/
        v2 = dword_B77900; /*0x7a2926*/
        ++v3; /*0x7a292b*/
        v1 += 108; /*0x7a292c*/
        if ( v3 >= (int)dword_B77900 ) /*0x7a2931*/
          goto LABEL_10; /*0x7a2931*/
      }
      (*(void (__stdcall **)(LPVOID, _DWORD *))(*(_DWORD *)ppv + 84))(ppv, v7); /*0x7a2951*/
    }
LABEL_10:
    DeleteAndZero((ObjectClass *)&v6); /*0x7a2954*/
  }
}



// ==== 0x007A2970  RunWOLMainLoop_Read_7A2970  this=-  sig=ida-proto ====
void sub_7A2970()
{
  _DWORD v0[3]; // [esp+0h] [ebp-Ch] BYREF

  byte_B77DC1 = 0; /*0x7a297a*/
  if ( !byte_B77DC2 && ReadWOLLobbyHouseOption() ) /*0x7a2983*/
  {
    if ( MapSeed::CheckName((const char **)&stru_B76AC4) ) /*0x7a2991*/
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
int __stdcall BuddyDlgProcWOL(HWND hWnd, unsigned int a2, int a3, int a4)
{
  int result; // eax
  wchar_t *StringCSF; // eax
  HWND DlgItem; // eax
  UINT v7; // eax
  UINT v8; // eax
  char *v9; // eax
  int v10; // eax
  int v11; // esi
  String *v12; // ecx
  int v13; // eax
  int v14; // esi
  String *v15; // ecx
  int v16; // eax
  int v17; // esi
  String *v18; // ecx
  DeleteAndZero v19; // [esp-4h] [ebp-1F4h]
  char *v20; // [esp-4h] [ebp-1F4h]
  ObjectClass *v21; // [esp+0h] [ebp-1F0h]
  _BYTE v22[224]; // [esp+10h] [ebp-1E0h] BYREF
  wchar_t lParam[128]; // [esp+F0h] [ebp-100h] BYREF

  if ( a2 == 272 && a4 ) /*0x7a2a09*/
    SetWindowLongA(hWnd, 8, *(_DWORD *)(a4 + 4)); /*0x7a2a12*/
  *(_DWORD *)v19.__pad_0 = a4; /*0x7a2a1f*/
  result = BaseDialogProc(hWnd, a2, a3, v19); /*0x7a2a25*/
  if ( !result ) /*0x7a2a2c*/
  {
    *(_DWORD *)&v22[4] = GetWindowLongA(hWnd, 8); /*0x7a2a3e*/
    if ( a2 <= 0x2B ) /*0x7a2a42*/
    {
      switch ( a2 ) /*0x7a2a44*/
      {
        case 0x2Bu: /*0x7a2a44*/
          Dialog::Resize((char *)a4); /*0x7a2a91*/
          return 1; /*0x7a2aa5*/
        case 0xFu: /*0x7a2a44*/
          Dialog::DrawBackground((Dialog *)hWnd); /*0x7a2a68*/
          Dialog::StopBink((Dialog *)hWnd); /*0x7a2a6f*/
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
        v20 = String::GetOrEmpty((String *)&stru_B76AC4); /*0x7a2ac6*/
        StringCSF = GetStringCSF(aWolAddbuddyque, 0, g_Str_File_wonline_cpp, 29291); /*0x7a2ad8*/
        swprintf(lParam, (const size_t)StringCSF, (const wchar_t *const)v20); /*0x7a2ae6*/
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
        v7 = IsDlgButtonChecked(hWnd, 1785); /*0x7a2b35*/
        ReadWOLLobbyOption(v7 != 1); /*0x7a2b46*/
        (*(void (__thiscall **)(_DWORD, HWND, int))(**(_DWORD **)&v22[4] + 4))(*(_DWORD *)&v22[4], hWnd, 2); /*0x7a2b54*/
        return 0; /*0x7a2b63*/
      }
      return 0; /*0x7a2b29*/
    }
    v8 = IsDlgButtonChecked(hWnd, 1785); /*0x7a2b6c*/
    ReadWOLLobbyOption(v8 != 1); /*0x7a2b7d*/
    if ( !(unsigned __int8)MapSeed::CheckName((MapSeed *)&stru_B76AC4) ) /*0x7a2b8e*/
    {
LABEL_53:
      (*(void (__thiscall **)(_DWORD, HWND, int))(**(_DWORD **)&v22[4] + 4))(*(_DWORD *)&v22[4], hWnd, 1); /*0x7a2e54*/
      return 0; /*0x7a2e60*/
    }
    memset(&v22[8], 0, 0x6Cu); /*0x7a2ba1*/
    v9 = String::GetOrEmpty_Alt((String *)&stru_B76AC4); /*0x7a2ba8*/
    strncpy(&v22[44], v9, 9u); /*0x7a2bb3*/
    (*(void (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)ppv + 224))(ppv, &v22[8]); /*0x7a2bc8*/
    if ( !(unsigned __int8)MapSeed::CheckName((MapSeed *)&stru_B76AC4) ) /*0x7a2bda*/
    {
LABEL_52:
      SendGameListWOL(v21); /*0x7a2e4f*/
      goto LABEL_53; /*0x7a2e4f*/
    }
    String::AssignFromPtr((String *)v22, (const char **)&stru_B76AC4); /*0x7a2be9*/
    v10 = *(_DWORD *)g_WindowManager.__pad_0; /*0x7a2bee*/
    v11 = *(_DWORD *)g_WindowManager.__pad_0; /*0x7a2bf3*/
    if ( *(int *)g_WindowManager.__pad_0 >= (int)g_WindowManager.Array_field_0x4 ) /*0x7a2bff*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x7a2c06*/
      v10 = *(_DWORD *)g_WindowManager.__pad_0; /*0x7a2c0b*/
    }
    if ( v10 >= (int)g_WindowManager.Array_field_0x4 ) /*0x7a2c16*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x7a2c1d*/
      v10 = *(_DWORD *)g_WindowManager.__pad_0; /*0x7a2c22*/
    }
    if ( v11 < v10 ) /*0x7a2c29*/
    {
      memcpy( /*0x7a2c46*/
        (void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v11 + 4),
        (const void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v11),
        4 * (v10 + 0x3FFFFFFF * v11));
      v10 = *(_DWORD *)g_WindowManager.__pad_0; /*0x7a2c4b*/
    }
    v12 = (String *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v11); /*0x7a2c59*/
    if ( v12 ) /*0x7a2c5e*/
    {
      String::AssignFromPtr(v12, (const char **)v22); /*0x7a2c65*/
      v10 = *(_DWORD *)g_WindowManager.__pad_0; /*0x7a2c6a*/
    }
    *(_DWORD *)g_WindowManager.__pad_0 = v10 + 1; /*0x7a2c70*/
    v13 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x7a2c75*/
    v14 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x7a2c7a*/
    if ( *(int *)&stru_B76900.needsRedraw >= *(int *)&stru_B76900.hasParachute ) /*0x7a2c86*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x7a2c8d*/
      v13 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x7a2c92*/
    }
    if ( v13 >= *(int *)&stru_B76900.hasParachute ) /*0x7a2c9d*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x7a2ca4*/
      v13 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x7a2ca9*/
    }
    if ( v14 < v13 ) /*0x7a2cb0*/
    {
      memcpy( /*0x7a2ccd*/
        &stru_B76900.parachute->AnimClass_field_0x4 + v14,
        &stru_B76900.parachute->AnimClass_field_0x0 + v14,
        4 * (v13 + 0x3FFFFFFF * v14));
      v13 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x7a2cd2*/
    }
    v15 = (String *)(&stru_B76900.parachute->AnimClass_field_0x0 + v14); /*0x7a2ce0*/
    if ( v15 ) /*0x7a2ce5*/
    {
      String::AssignFromPtr(v15, (const char **)v22); /*0x7a2cec*/
      v13 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x7a2cf1*/
    }
    *(_DWORD *)&stru_B76900.needsRedraw = v13 + 1; /*0x7a2cf7*/
    v16 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7a2cfc*/
    v17 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7a2d01*/
    if ( *(int *)g_WOL_BuddyList.__pad_0 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x7a2d0d*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7a2d14*/
      v16 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7a2d19*/
    }
    if ( v16 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x7a2d24*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7a2d2b*/
      v16 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7a2d30*/
    }
    if ( v17 < v16 ) /*0x7a2d37*/
    {
      memcpy( /*0x7a2d54*/
        (void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v17 + 4),
        (const void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v17),
        4 * (v16 + 0x3FFFFFFF * v17));
      v16 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7a2d59*/
    }
    v18 = (String *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v17); /*0x7a2d67*/
    if ( v18 ) /*0x7a2d6c*/
    {
      String::AssignFromPtr(v18, (const char **)v22); /*0x7a2d73*/
      v16 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7a2d78*/
    }
    *(_DWORD *)g_WOL_BuddyList.__pad_0 = v16 + 1; /*0x7a2d83*/
    if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x7a2d88*/
    {
      if ( (unsigned int)(time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20) < 5 ) /*0x7a2da6*/
      {
LABEL_51:
        DeleteAndZero((ObjectClass *)v22); /*0x7a2e46*/
        goto LABEL_52; /*0x7a2e4a*/
      }
      DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x7a2db1*/
    }
    if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x7a2dbd*/
    {
      if ( (unsigned __int8)DynamicStringArray::Get( /*0x7a2dcf*/
                              (DynamicStringArray *)&stru_B76900.needsRedraw,
                              (char **)&g_WindowManager.__pad_14[16],
                              0) )
        DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x7a2ddf*/
      *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x7a2deb*/
      memset(&v22[116], 0, 0x6Cu); /*0x7a2dfe*/
      strcpy(&v22[152], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x7a2e31*/
      (*(void (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)ppv + 96))(ppv, &v22[116]); /*0x7a2e43*/
    }
    goto LABEL_51; /*0x7a2e43*/
  }
  return result; /*0x7a2a54*/
}



// ==== 0x007A2E70  SimpleWonlineDialogControl::ScalarDtor  this=SimpleWonlineDialogControl  sig=csp ====
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
int __stdcall sub_7A2F30(int a1, int a2, int a3)
{
  int v4; // edi

  if ( !a1 ) /*0x7a2f3a*/
    return -2147024809; /*0x7a2f3d*/
  *(_DWORD *)(a1 + 16) = a2; /*0x7a2f4d*/
  *(_DWORD *)(a1 + 8) = a3; /*0x7a2f5c*/
  *(_DWORD *)(a1 + 12) = a3; /*0x7a2f5f*/
  *(_DWORD *)(a1 + 4) = a3; /*0x7a2f62*/
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
char *__thiscall sub_7A2FC0(char *this)
{
  this->__pad_004 = 0; /*0x7a2fc6*/
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 8)); /*0x7a2fce*/
  *(_DWORD *)this = &CNetUtilEventSink::`vftable'; /*0x7a2fd4*/
  return this; /*0x7a2fdc*/
}



// ==== 0x007A2FE0  CNetUtilEventSink::SetSize  this=CNetUtilEventSink  sig=csp ====
int __thiscall ComStreamClass::SetSize(CNetUtilEventSink *this, int a2, void *a3, int a4)
{
  ComStreamClass *v4; // esi
  rc_ptr v6[4]; // [esp+0h] [ebp-8h] BYREF
  ComStreamClass *v7; // [esp+4h] [ebp-4h]
  int v8; // [esp+18h] [ebp+10h]

  if ( (int)a3 < 0 || v8 <= 0 ) /*0x7a2ff5*/
  {
    SetEvent(hEvent); /*0x7a30b9*/
    return 0; /*0x7a30bf*/
  }
  else
  {
    Audio_Set(v6, (void *)a4); /*0x7a3003*/
    if ( v7 && ComStreamClass::initStream(v7) ) /*0x7a3010*/
    {
      if ( ComStreamClass::closeStream(v7) ) /*0x7a301d*/
      {
        Debug::Log(); /*0x7a302b*/
        ComStreamClass::getStreamSize((ComStreamClass *)v6); /*0x7a3037*/
        SetEvent(dword_B736B0); /*0x7a3042*/
      }
      else
      {
        Debug::Log(); /*0x7a304a*/
        v4 = v7; /*0x7a304f*/
        dword_B7646C = v4->ComStreamClass_field_0x28 + time(0); /*0x7a3066*/
        ComStreamClass::seekToPosition((ComStreamClass *)v6); /*0x7a306b*/
        SetEvent(dword_B736B0); /*0x7a3077*/
      }
    }
    else
    {
      Debug::Log(); /*0x7a3085*/
      SetEvent(dword_B736B0); /*0x7a3094*/
    }
    *(_DWORD *)v6 = &rc_ptr<WDTState>::`vftable'; /*0x7a309e*/
    ComPtr::Release((ComPtr *)v6); /*0x7a30a6*/
    return 0; /*0x7a30ab*/
  }
}



// ==== 0x007A30D0  CNetUtilEventSink::Read  this=CNetUtilEventSink  sig=csp ====
int __stdcall C07F766C::_vt05(int a1, int a2)
{
  Debug::Log(); /*0x7a30db*/
  if ( !a2 ) /*0x7a30e6*/
    Audio_Read_6C6D00(); /*0x7a30e8*/
  Audio_Read_6C6DE0(); /*0x7a30ed*/
  return 0; /*0x7a30f4*/
}



// ==== 0x007A3100  CNetUtilEventSink::PopulateLobbyLists  this=CNetUtilEventSink  sig=csp ====
int __thiscall WOLGameList::PopulateLobbyLists(CNetUtilEventSink *this, int a2, int ***a3, int a4, int a5, int a6)
{
  int v6; // ebx
  HWND v8; // eax
  HWND DlgItem; // eax
  void (__stdcall *v10)(HWND, UINT, WPARAM, LPARAM); // edi
  HWND v11; // ebp
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  ObjectClass *v15; // esi
  ObjectClass *v16; // edi
  int v17; // eax
  wchar_t *StringCSF; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  ObjectClass *v21; // esi
  ObjectClass *v22; // edi
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  ObjectClass *v26; // esi
  ObjectClass *v27; // edi
  int v28; // eax
  int v29; // esi
  String *v30; // eax
  String *v31; // ebp
  int v32; // edx
  int v33; // eax
  WOLGameList *v34; // ecx
  String *v35; // eax
  String *v36; // ebp
  int v37; // edx
  int v38; // eax
  String *v39; // eax
  String *v40; // ebp
  int v41; // edx
  int v42; // eax
  int v43; // ebp
  int v44; // ebx
  signed int v45; // eax
  char v46; // dl
  _DWORD *v47; // esi
  HWND v48; // eax
  ObjectClass *v49; // eax
  ObjectClass *v50; // [esp+0h] [ebp-2B2Ch]
  WideString v51[216]; // [esp+10h] [ebp-2B1Ch] BYREF
  wchar_t Buffer[128]; // [esp+E8h] [ebp-2A44h] BYREF
  char v53[108]; // [esp+1E8h] [ebp-2944h] BYREF
  char v54[108]; // [esp+254h] [ebp-28D8h] BYREF
  char v55[108]; // [esp+2C0h] [ebp-286Ch] BYREF
  wchar_t String[5120]; // [esp+32Ch] [ebp-2800h] BYREF
  int v57; // [esp+2B44h] [ebp+18h]

  if ( a3 ) /*0x7a3117*/
  {
    v6 = 0; /*0x7a3119*/
    a4 = 0; /*0x7a311b*/
  }
  else
  {
    v6 = a4; /*0x7a3124*/
  }
  if ( byte_B77DC1 ) /*0x7a3132*/
  {
    byte_884CF4 = 1; /*0x7a3137*/
    return 0; /*0x7a3147*/
  }
  v8 = (HWND)Dialog::FindByHandle((Dialog *)0xC1); /*0x7a3154*/
  DlgItem = GetDlgItem(v8, 1407); /*0x7a315a*/
  v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a3160*/
  v11 = DlgItem; /*0x7a3166*/
  *(_DWORD *)&v51[20] = DlgItem; /*0x7a316a*/
  if ( DlgItem ) /*0x7a316e*/
  {
    if ( v57 != -1 || a3 ) /*0x7a3180*/
    {
      SendMessageA(DlgItem, 0x184u, 0, 0); /*0x7a3271*/
      if ( !v6 ) /*0x7a3275*/
      {
        StringCSF = GetStringCSF(aTxtNotInLadder, 0, g_Str_File_wonline_cpp, 4785); /*0x7a328c*/
        SendMessageA(v11, 0x4CCu, 0xFFFFFFFF, (LPARAM)StringCSF); /*0x7a329a*/
        InvalidateRect(v11, 0, 0); /*0x7a329f*/
        return 0; /*0x7a32b1*/
      }
      goto LABEL_11; /*0x7a3275*/
    }
    v11 = 0; /*0x7a3186*/
    *(_DWORD *)&v51[20] = 0; /*0x7a3188*/
  }
  if ( v6 ) /*0x7a318e*/
  {
LABEL_11:
    v12 = *(_DWORD *)(v6 + 28); /*0x7a3194*/
    *(_DWORD *)&v51[8] = v6; /*0x7a319b*/
    *(_DWORD *)&v51[56] = v12; /*0x7a319f*/
    Gadget::InitProperties((Gadget *)&v51[32]); /*0x7a31a3*/
    if ( *(int ***)v6 == &off_802100 ) /*0x7a31af*/
    {
      if ( (unsigned int)dword_B768C4 > 0x7D0 ) /*0x7a31bf*/
      {
        v13 = dword_B768C8; /*0x7a31c5*/
        v14 = 0; /*0x7a31cb*/
        *(_DWORD *)&v51[4] = 0; /*0x7a31cf*/
        if ( dword_B768C8 ) /*0x7a31d3*/
        {
          do /*0x7a321d*/
          {
            v15 = *(ObjectClass **)(*(_DWORD *)g_WOL_ListParser.__pad_0 + 4 * v14); /*0x7a31db*/
            while ( v15 ) /*0x7a31e0*/
            {
              v16 = v15; /*0x7a31e2*/
              v15 = (ObjectClass *)v15->estimatedHealth; /*0x7a31e4*/
              DeleteAndZero(v16); /*0x7a31ed*/
              __3_YAXPAX_Z(v16); /*0x7a31f3*/
            }
            v17 = *(_DWORD *)&v51[4]; /*0x7a31ff*/
            *(_DWORD *)(*(_DWORD *)g_WOL_ListParser.__pad_0 + 4 * *(_DWORD *)&v51[4]) = 0; /*0x7a3209*/
            v13 = dword_B768C8; /*0x7a3210*/
            v14 = v17 + 1; /*0x7a3216*/
            *(_DWORD *)&v51[4] = v14; /*0x7a3219*/
          }
          while ( v14 < dword_B768C8 ); /*0x7a321d*/
          v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a321f*/
        }
        dword_B768C4 = 0; /*0x7a322a*/
        if ( v13 > dword_B768F0 ) /*0x7a3236*/
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
    else if ( *(_DWORD *)v6 == 8960 ) /*0x7a32b9*/
    {
      if ( (unsigned int)dword_B73AFC > 0x7D0 ) /*0x7a32c9*/
      {
        v19 = dword_B73B00; /*0x7a32cf*/
        v20 = 0; /*0x7a32d5*/
        *(_DWORD *)&v51[4] = 0; /*0x7a32d9*/
        if ( dword_B73B00 ) /*0x7a32dd*/
        {
          do /*0x7a3327*/
          {
            v21 = (ObjectClass *)*((_DWORD *)dword_B73AF8 + v20); /*0x7a32e5*/
            while ( v21 ) /*0x7a32ea*/
            {
              v22 = v21; /*0x7a32ec*/
              v21 = (ObjectClass *)v21->estimatedHealth; /*0x7a32ee*/
              DeleteAndZero(v22); /*0x7a32f7*/
              __3_YAXPAX_Z(v22); /*0x7a32fd*/
            }
            v23 = *(_DWORD *)&v51[4]; /*0x7a3309*/
            *((_DWORD *)dword_B73AF8 + *(_DWORD *)&v51[4]) = 0; /*0x7a3313*/
            v19 = dword_B73B00; /*0x7a331a*/
            v20 = v23 + 1; /*0x7a3320*/
            *(_DWORD *)&v51[4] = v20; /*0x7a3323*/
          }
          while ( v20 < dword_B73B00 ); /*0x7a3327*/
          v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a3329*/
        }
        dword_B73AFC = 0; /*0x7a3334*/
        if ( v19 > dword_B73B28 ) /*0x7a3340*/
        {
          do /*0x7a336a*/
          {
            if ( byte_B73B0C ) /*0x7a334d*/
              break; /*0x7a334d*/
            HashMap::Shrink2((HashMap *)&dword_B73AF8); /*0x7a3358*/
          }
          while ( dword_B73B00 > (unsigned int)dword_B73B28 ); /*0x7a336a*/
        }
      }
    }
    else if ( (unsigned int)dword_B77D84 > 0x7D0 ) /*0x7a337b*/
    {
      v24 = dword_B77D88; /*0x7a3381*/
      v25 = 0; /*0x7a3387*/
      *(_DWORD *)&v51[4] = 0; /*0x7a338b*/
      if ( dword_B77D88 ) /*0x7a338f*/
      {
        do /*0x7a33d9*/
        {
          v26 = *(ObjectClass **)(*(_DWORD *)stru_B77D80.__pad_0 + 4 * v25); /*0x7a3397*/
          while ( v26 ) /*0x7a339c*/
          {
            v27 = v26; /*0x7a339e*/
            v26 = (ObjectClass *)v26->estimatedHealth; /*0x7a33a0*/
            DeleteAndZero(v27); /*0x7a33a9*/
            __3_YAXPAX_Z(v27); /*0x7a33af*/
          }
          v28 = *(_DWORD *)&v51[4]; /*0x7a33bb*/
          *(_DWORD *)(*(_DWORD *)stru_B77D80.__pad_0 + 4 * *(_DWORD *)&v51[4]) = 0; /*0x7a33c5*/
          v24 = dword_B77D88; /*0x7a33cc*/
          v25 = v28 + 1; /*0x7a33d2*/
          *(_DWORD *)&v51[4] = v25; /*0x7a33d5*/
        }
        while ( v25 < dword_B77D88 ); /*0x7a33d9*/
        v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a33db*/
      }
      dword_B77D84 = 0; /*0x7a33e6*/
      if ( v24 > dword_B77DB0 ) /*0x7a33f2*/
      {
        do /*0x7a3414*/
        {
          if ( byte_B77D94 ) /*0x7a33fb*/
            break; /*0x7a33fb*/
          HashMap::Shrink2((HashMap *)&stru_B77D80); /*0x7a3402*/
        }
        while ( dword_B77D88 > (unsigned int)dword_B77DB0 ); /*0x7a3414*/
      }
    }
    if ( a4 && v11 ) /*0x7a3423*/
      dword_B76E38 = *(_DWORD *)(a4 + 28); /*0x7a3428*/
    String::ToLowerCopy((String *)&dword_B73E40, (char **)&v51[24]); /*0x7a3438*/
    *(_DWORD *)&v51[4] = 0; /*0x7a3444*/
    if ( a4 ) /*0x7a344e*/
    {
      while ( *(_DWORD *)(v6 + 16) == -1 ) /*0x7a3458*/
      {
        v6 = *(_DWORD *)(v6 + 60); /*0x7a345a*/
        *(_DWORD *)&v51[8] = v6; /*0x7a345d*/
LABEL_121:
        if ( !v6 ) /*0x7a3aac*/
          goto LABEL_122; /*0x7a3aac*/
      }
      if ( v11 ) /*0x7a3468*/
      {
        *(_DWORD *)&v51[32] = 4; /*0x7a346e*/
        swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(v6 + 28)); /*0x7a3487*/
        v10(v11, 0x4CCu, 0xFFFFFFFF, (LPARAM)Buffer); /*0x7a349f*/
        v29 = *(unsigned __int16 *)&v51[4] << 16; /*0x7a34bc*/
        v10(v11, 0x4A8u, v29 | (unsigned __int16)dword_B779D8, (LPARAM)&v51[32]); /*0x7a34c8*/
        *(_DWORD *)&v51[32] = 1; /*0x7a34d6*/
        BulkCharToWide(String, (unsigned __int8 *)(v6 + 64), -1); /*0x7a34de*/
        WideString::Reassign(&v51[36], String); /*0x7a34ef*/
        v10(v11, 0x4A8u, v29 | (unsigned __int16)dword_B73E08, (LPARAM)&v51[32]); /*0x7a350e*/
        swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(v6 + 16)); /*0x7a3521*/
        WideString::Reassign(&v51[36], Buffer); /*0x7a3535*/
        v10(v11, 0x4A8u, v29 | (unsigned __int16)dword_B76904, (LPARAM)&v51[32]); /*0x7a3552*/
        swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(v6 + 8)); /*0x7a3565*/
        WideString::Reassign(&v51[36], Buffer); /*0x7a3579*/
        v10(v11, 0x4A8u, v29 | (unsigned __int16)dword_B77CE4, (LPARAM)&v51[32]); /*0x7a3598*/
        swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(v6 + 12)); /*0x7a35ab*/
        WideString::Reassign(&v51[36], Buffer); /*0x7a35bf*/
        v10(v11, 0x4A8u, v29 | (unsigned __int16)dword_B73AB4, (LPARAM)&v51[32]); /*0x7a35de*/
        swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(v6 + 32)); /*0x7a35f1*/
        WideString::Reassign(&v51[36], Buffer); /*0x7a3605*/
        v10(v11, 0x4A8u, v29 | (unsigned __int16)dword_B76AEC, (LPARAM)&v51[32]); /*0x7a3622*/
        ++*(_DWORD *)&v51[4]; /*0x7a3624*/
      }
      String::Assign((String *)v51, (const char *)(v6 + 64)); /*0x7a3630*/
      String::ToLower((String *)v51); /*0x7a3639*/
      if ( *(int ***)a4 == &off_802100 ) /*0x7a364c*/
      {
        HashTable::Insert((HashTable *)&g_WOL_ListParser, (const char **)v51, v55); /*0x7a3664*/
        v30 = (String *)__2_YAPAXI_Z(0x74u); /*0x7a366b*/
        v31 = v30; /*0x7a3670*/
        if ( v30 ) /*0x7a3677*/
          unknown_libname_73(v30); /*0x7a367b*/
        else
          v31 = 0; /*0x7a3682*/
        String::Reassign(v31, (const char **)v51); /*0x7a368b*/
        qmemcpy(&v31->m_3[1], (const void *)v6, 0x6Cu); /*0x7a369a*/
        *(_DWORD *)v31[14].__pad_0 = 0; /*0x7a36a0*/
        v32 = dword_B768D8(v51) & ((1 << dword_B768CC) - 1); /*0x7a36c1*/
        v33 = *(_DWORD *)(*(_DWORD *)g_WOL_ListParser.__pad_0 + 4 * v32); /*0x7a36c3*/
        *(_DWORD *)(*(_DWORD *)g_WOL_ListParser.__pad_0 + 4 * v32) = v31; /*0x7a36c6*/
        if ( v33 ) /*0x7a36cb*/
          *(_DWORD *)v31[14].__pad_0 = v33; /*0x7a36cd*/
        *(_DWORD *)&v51[100] = dword_B768C8; /*0x7a36dc*/
        *(_QWORD *)&v51[76] = (unsigned int)++dword_B768C4; /*0x7a36e5*/
        *(_DWORD *)&v51[104] = 0; /*0x7a36ef*/
        if ( (double)(unsigned int)dword_B768C4 / (double)dword_B768C8 < dbl_B768E8 ) /*0x7a3706*/
          goto LABEL_82; /*0x7a3706*/
        v34 = (WOLGameList *)&g_WOL_ListParser; /*0x7a370c*/
      }
      else if ( *(_DWORD *)a4 == 8960 ) /*0x7a371b*/
      {
        HashTable::Insert((HashTable *)&dword_B73AF8, (const char **)v51, v54); /*0x7a3733*/
        v35 = (String *)__2_YAPAXI_Z(0x74u); /*0x7a373a*/
        v36 = v35; /*0x7a373f*/
        if ( v35 ) /*0x7a3746*/
          unknown_libname_73(v35); /*0x7a374a*/
        else
          v36 = 0; /*0x7a3751*/
        String::Reassign(v36, (const char **)v51); /*0x7a375a*/
        qmemcpy(&v36->m_3[1], (const void *)v6, 0x6Cu); /*0x7a3769*/
        *(_DWORD *)v36[14].__pad_0 = 0; /*0x7a376f*/
        v37 = dword_B73B10(v51) & ((1 << dword_B73B04) - 1); /*0x7a3790*/
        v38 = *((_DWORD *)dword_B73AF8 + v37); /*0x7a3792*/
        *((_DWORD *)dword_B73AF8 + v37) = v36; /*0x7a3795*/
        if ( v38 ) /*0x7a379a*/
          *(_DWORD *)v36[14].__pad_0 = v38; /*0x7a379c*/
        *(_DWORD *)&v51[92] = dword_B73B00; /*0x7a37ab*/
        *(_QWORD *)&v51[60] = (unsigned int)++dword_B73AFC; /*0x7a37b4*/
        *(_DWORD *)&v51[96] = 0; /*0x7a37be*/
        if ( (double)(unsigned int)dword_B73AFC / (double)dword_B73B00 < dbl_B73B20 ) /*0x7a37d5*/
          goto LABEL_82; /*0x7a37d5*/
        v34 = (WOLGameList *)&dword_B73AF8; /*0x7a37db*/
      }
      else
      {
        HashTable::Insert(&stru_B77D80, (const char **)v51, v53); /*0x7a37f7*/
        v39 = (String *)__2_YAPAXI_Z(0x74u); /*0x7a37fe*/
        v40 = v39; /*0x7a3803*/
        if ( v39 ) /*0x7a380a*/
          unknown_libname_73(v39); /*0x7a380e*/
        else
          v40 = 0; /*0x7a3815*/
        String::Reassign(v40, (const char **)v51); /*0x7a381e*/
        qmemcpy(&v40->m_3[1], (const void *)v6, 0x6Cu); /*0x7a382d*/
        *(_DWORD *)v40[14].__pad_0 = 0; /*0x7a3833*/
        v41 = dword_B77D98(v51) & ((1 << dword_B77D8C) - 1); /*0x7a3854*/
        v42 = *(_DWORD *)(*(_DWORD *)stru_B77D80.__pad_0 + 4 * v41); /*0x7a3856*/
        *(_DWORD *)(*(_DWORD *)stru_B77D80.__pad_0 + 4 * v41) = v40; /*0x7a3859*/
        if ( v42 ) /*0x7a385e*/
          *(_DWORD *)v40[14].__pad_0 = v42; /*0x7a3860*/
        *(_DWORD *)&v51[84] = dword_B77D88; /*0x7a386f*/
        *(_QWORD *)&v51[68] = (unsigned int)++dword_B77D84; /*0x7a3878*/
        *(_DWORD *)&v51[88] = 0; /*0x7a3882*/
        if ( (double)(unsigned int)dword_B77D84 / (double)dword_B77D88 < dbl_B77DA8 ) /*0x7a3899*/
          goto LABEL_82; /*0x7a3899*/
        v34 = (WOLGameList *)&stru_B77D80; /*0x7a389b*/
      }
      WOLGameList::GrowBuffer(v34); /*0x7a38a0*/
LABEL_82:
      if ( dword_B76B10 || dword_B77E48 != 2 && dword_B77E48 != 3 ) /*0x7a38bf*/
        goto LABEL_113; /*0x7a38bf*/
      v43 = 0; /*0x7a38ca*/
      *(_DWORD *)&v51[28] = dword_B77900; /*0x7a38ce*/
      if ( (int)dword_B77900 <= 0 ) /*0x7a38d2*/
        goto LABEL_113; /*0x7a38d2*/
      v44 = 0; /*0x7a38d8*/
      while ( 1 ) /*0x7a38da*/
      {
        if ( v44 >= 0 && v43 < (int)dword_B77900 ) /*0x7a38e4*/
          qmemcpy(&v51[108], (char *)dword_B77908 + v44, 0x6Cu); /*0x7a38f7*/
        if ( !_strcmpi((char *)(*(_DWORD *)&v51[8] + 64), (char *)&v51[144]) ) /*0x7a3909*/
          break; /*0x7a3909*/
        ++v43; /*0x7a3919*/
        v44 += 108; /*0x7a391a*/
        if ( v43 >= *(int *)&v51[28] ) /*0x7a391f*/
          goto LABEL_113; /*0x7a391f*/
      }
      if ( v43 >= *(int *)&v51[28] ) /*0x7a392a*/
        goto LABEL_113; /*0x7a392a*/
      v45 = v43; /*0x7a3936*/
      if ( dword_B77900 ) /*0x7a393a*/
      {
        if ( v43 < 0 ) /*0x7a393e*/
          v45 = 0; /*0x7a3940*/
        if ( v45 >= (int)dword_B77900 ) /*0x7a3944*/
          v45 = dword_B77900 - 1; /*0x7a3946*/
        memcpy( /*0x7a3972*/
          (char *)dword_B77908 + 108 * v45,
          (char *)dword_B77908 + 108 * v45 + 108,
          108 * dword_B77900 - 36 * (3 * v45 + 3));
        --dword_B77900; /*0x7a3980*/
        if ( (int)(3 * dword_B77900) <= dword_B77904 ) /*0x7a398f*/
          WOLGameList::EnsureCapacity((WOLGameList *)&dword_B77900); /*0x7a3996*/
      }
      switch ( dword_B77E48 ) /*0x7a39a3*/
      {
        case 1: /*0x7a39a3*/
          v46 = 0; /*0x7a39a5*/
LABEL_112:
          InsertGameSettings((char *)&v51[108], v46); /*0x7a39f3*/
          break; /*0x7a39f7*/
        case 2: /*0x7a39a3*/
          InsertBuddyList((const char *)&v51[108], 1); /*0x7a39b4*/
          break;
        case 3: /*0x7a39a3*/
          InsertBuddyList((const char *)&v51[108], 0); /*0x7a39c6*/
          break;
        case 4: /*0x7a39a3*/
          FindBuddyList(&v51[108], 1); /*0x7a39d8*/
          break;
        case 5: /*0x7a39a3*/
          FindBuddyList(&v51[108], 0); /*0x7a39ea*/
          break;
        default:
          v46 = 1; /*0x7a39f1*/
          goto LABEL_112; /*0x7a39f1*/
      }
LABEL_113:
      if ( (unsigned __int8)String::Compare((String *)&v51[24], (const char **)v51) ) /*0x7a3a05*/
      {
        LoadPlayerProfile((ObjectClass *)&v51[12], (const char **)&dword_B73E40); /*0x7a3a17*/
        if ( *(_DWORD *)&v51[16] ) /*0x7a3a22*/
        {
          v47 = *(_DWORD **)&v51[8]; /*0x7a3a24*/
          if ( WOLGameList::Check(*(WOLGameList **)&v51[16], *(int *)&v51[8]) ) /*0x7a3a29*/
          {
            WOLGameList::UpdatePlayerStats(*(int *)&v51[16], v47); /*0x7a3a37*/
            SaveProfileWOL(*(int *)&v51[16], (const char **)v51); /*0x7a3a45*/
            v48 = (HWND)Dialog::FindByHandle((Dialog *)0x10E); /*0x7a3a4f*/
            if ( v48 || (v48 = (HWND)Dialog::FindByHandle((Dialog *)0x114)) != 0 ) /*0x7a3a64*/
              FillPersonaInfoWOL(*(int *)&v51[16], v48, (char **)&dword_B73E40, 0); /*0x7a3a72*/
          }
        }
        *(_DWORD *)&v51[12] = &rc_ptr<PlayerProfile>::`vftable'; /*0x7a3a7b*/
        ComPtr::Release((ComPtr *)&v51[12]); /*0x7a3a83*/
      }
      *(_DWORD *)&v51[8] = *(_DWORD *)(*(_DWORD *)&v51[8] + 60); /*0x7a3a93*/
      DeleteAndZero((ObjectClass *)v51); /*0x7a3a97*/
      v6 = *(_DWORD *)&v51[8]; /*0x7a3a9c*/
      v11 = *(HWND *)&v51[20]; /*0x7a3aa0*/
      v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a3aa4*/
      goto LABEL_121; /*0x7a3aa4*/
    }
LABEL_122:
    if ( v11 ) /*0x7a3ab4*/
    {
      v10(v11, 0x186u, v57 - *(_DWORD *)&v51[56], 0); /*0x7a3acc*/
      InvalidateRect(v11, 0, 0); /*0x7a3ad3*/
    }
    else
    {
      DisplayRankingsWOL(0); /*0x7a3adf*/
    }
    SendGameListWOL(v50); /*0x7a3ae4*/
    v49 = (ObjectClass *)Dialog::FindByHandle((Dialog *)0x116); /*0x7a3aee*/
    if ( v49 ) /*0x7a3af5*/
      ShowUserProfileWOL(v49); /*0x7a3af9*/
    DeleteAndZero((ObjectClass *)&v51[24]); /*0x7a3b02*/
    DeleteAndZero::Alt((DeleteAndZero *)&v51[40]); /*0x7a3b0b*/
    DeleteAndZero::Alt((DeleteAndZero *)&v51[36]); /*0x7a3b14*/
  }
  return 0; /*0x7a3134*/
}



// ==== 0x007A3B30  CNetUtilEventSink::Commit  this=CNetUtilEventSink  sig=csp ====
int __thiscall ComStreamClass::Commit(CNetUtilEventSink *this, int a2, float a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v7; // ebp
  int v8; // esi
  int v9; // edi
  _DWORD *v10; // edi
  int v11; // ebx
  double v12; // st7
  int v13; // esi
  String *v14; // eax
  String *v15; // ebx
  int v16; // edx
  int v17; // eax

  if ( a3 == 0.0 ) /*0x7a3b3c*/
  {
    v6 = a4; /*0x7a3b44*/
    v7 = a4; /*0x7a3b51*/
    String::Assign((String *)&a3, &g_INI_DefaultBuffer); /*0x7a3b53*/
    if ( v6 ) /*0x7a3b5a*/
    {
      do /*0x7a3b6d*/
      {
        String::Assign_Bool((String *)&a3, (const char *)(v7 + 28)); /*0x7a3b6d*/
        String::ToLower((String *)&a3); /*0x7a3b76*/
        String::GetOrEmpty((String *)&a3); /*0x7a3b87*/
        Debug::Log(); /*0x7a3b92*/
        if ( dword_B76644 ) /*0x7a3ba1*/
        {
          *(float *)&a4 = (double)(unsigned int)(dword_B76644 - 1) / (double)dword_B76648; /*0x7a3bc9*/
          v8 = dword_B76658(&a3) & ((1 << dword_B7664C) - 1); /*0x7a3be7*/
          v9 = *((_DWORD *)dword_B76640 + v8); /*0x7a3be9*/
          if ( v9 ) /*0x7a3bee*/
          {
            if ( (unsigned __int8)String::Compare(*((String **)dword_B76640 + v8), (const char **)&a3) ) /*0x7a3bfb*/
            {
              v10 = (_DWORD *)*((_DWORD *)dword_B76640 + v8); /*0x7a3c09*/
              v11 = v10[18]; /*0x7a3c0e*/
              if ( v10 ) /*0x7a3c11*/
              {
                DeleteAndZero(*((ObjectClass **)dword_B76640 + v8)); /*0x7a3c15*/
                __3_YAXPAX_Z(v10); /*0x7a3c1b*/
              }
              v12 = *(float *)&a4; /*0x7a3c29*/
              *((_DWORD *)dword_B76640 + v8) = v11; /*0x7a3c2d*/
              --dword_B76644; /*0x7a3c3c*/
              if ( v12 > dbl_B76660 ) /*0x7a3c46*/
                goto LABEL_17; /*0x7a3c46*/
            }
            else
            {
              v13 = *(_DWORD *)(v9 + 72); /*0x7a3c4a*/
              if ( v13 ) /*0x7a3c4f*/
              {
                while ( !(unsigned __int8)String::Compare((String *)v13, (const char **)&a3) ) /*0x7a3c5f*/
                {
                  v9 = v13; /*0x7a3c61*/
                  v13 = *(_DWORD *)(v13 + 72); /*0x7a3c63*/
                  if ( !v13 ) /*0x7a3c68*/
                    goto LABEL_15; /*0x7a3c68*/
                }
                *(_DWORD *)(v9 + 72) = *(_DWORD *)(v13 + 72); /*0x7a3c6f*/
                --dword_B76644; /*0x7a3c7b*/
                ComStreamClass::writeData((ComStreamClass *)v13, 1); /*0x7a3c87*/
              }
LABEL_15:
              if ( *(float *)&a4 > dbl_B76660 ) /*0x7a3c9b*/
                goto LABEL_17; /*0x7a3c9b*/
            }
            ComStreamClass::flushStream((ComStreamClass *)&dword_B76640); /*0x7a3ca2*/
          }
        }
LABEL_17:
        v14 = (String *)__2_YAPAXI_Z(0x4Cu); /*0x7a3ca7*/
        v15 = v14; /*0x7a3cae*/
        if ( v14 ) /*0x7a3cb5*/
          unknown_libname_73(v14); /*0x7a3cb9*/
        else
          v15 = 0; /*0x7a3cc0*/
        String::Reassign(v15, (const char **)&a3); /*0x7a3cc9*/
        qmemcpy(&v15->m_3[1], (const void *)v7, 0x44u); /*0x7a3cd8*/
        *(_DWORD *)v15[9].__pad_0 = 0; /*0x7a3ce0*/
        v16 = dword_B76658(&a3) & ((1 << dword_B7664C) - 1); /*0x7a3cfd*/
        v17 = *((_DWORD *)dword_B76640 + v16); /*0x7a3cff*/
        *((_DWORD *)dword_B76640 + v16) = v15; /*0x7a3d02*/
        if ( v17 ) /*0x7a3d07*/
          *(_DWORD *)v15[9].__pad_0 = v17; /*0x7a3d09*/
        if ( (double)(unsigned int)++dword_B76644 / (double)dword_B76648 >= dbl_B76668 ) /*0x7a3d40*/
          ComStreamClass::readData((ComStreamClass *)&dword_B76640); /*0x7a3d47*/
        v7 = *(_DWORD *)(v7 + 24); /*0x7a3d4c*/
      }
      while ( v7 ); /*0x7a3b6d*/
    }
    DeleteAndZero((ObjectClass *)&a3); /*0x7a3d58*/
    return 0; /*0x7a3d63*/
  }
  else
  {
    Debug::Log(); /*0x7a3d71*/
    return 0; /*0x7a3d79*/
  }
}



// ==== 0x007A3D90  CNetUtilEventSink::Write  this=CNetUtilEventSink  sig=csp ====
int __thiscall ComStreamClass::Write(
        CNetUtilEventSink *this,
        int a2,
        unsigned __int8 *a3,
        const char *lParam,
        const char *lParama)
{
  HWND v5; // esi
  HWND DlgItem; // ebx
  HWND v7; // ebx
  char *v8; // eax
  HWND v9; // eax
  void (__stdcall *v10)(HWND, BOOL); // ebx
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND Current; // eax
  HWND v18; // eax
  bool v20; // [esp+Ah] [ebp-281Ah]
  char v21; // [esp+Bh] [ebp-2819h]
  ObjectClass v22[59]; // [esp+Ch] [ebp-2818h] BYREF
  char *v23; // [esp+2838h] [ebp+14h]

  Debug::Log(); /*0x7a3da1*/
  dword_B77DF0 = (int)a3; /*0x7a3dba*/
  if ( a3 ) /*0x7a3dbf*/
    goto LABEL_16; /*0x7a3dbf*/
  String::Assign((String *)v22, lParama); /*0x7a3dd3*/
  LoadPlayerProfile((ObjectClass *)&v22[0].vtable1, (const char **)v22); /*0x7a3de0*/
  DeleteAndZero(v22); /*0x7a3de9*/
  v22[0].vtable0 = 0; /*0x7a3df2*/
  v22[0].uniqueId = 0; /*0x7a3df6*/
  LOBYTE(v22[0].abstractFlags) = 0; /*0x7a3dfa*/
  ReadRegistryOptionsWOL((ObjectClass *)&v22[0].uniqueId); /*0x7a3dfe*/
  if ( (unsigned __int8)Flag::IsNot2((Flag *)&v22[0].uniqueId) ) /*0x7a3e07*/
  {
    v22[0].vtable0 = FindChannelWOL(lParama, (int)v23, 1u, *(_DWORD *)(v22[0].vtable2 + 16)); /*0x7a3e2d*/
    SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x7a3e31*/
  }
  v21 = 1; /*0x7a3e3b*/
  v20 = 0; /*0x7a3e40*/
  v5 = (HWND)Dialog::FindByHandle((Dialog *)0x10F); /*0x7a3e4a*/
  if ( v5 /*0x7a3e7a*/
    || (v5 = (HWND)Dialog::FindByHandle((Dialog *)0x11D), v20 = v5 != 0, v5)
    || (v21 = 0, (v5 = (HWND)Dialog::FindByHandle((Dialog *)0x114)) != 0) )
  {
    DlgItem = GetDlgItem(v5, 1576); /*0x7a3e88*/
    if ( v20 ) /*0x7a3e93*/
    {
      SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)lParama); /*0x7a3ea1*/
    }
    else
    {
      v22[0].vtable3 = SendMessageA(DlgItem, 0x4BCu, 0, (LPARAM)lParama); /*0x7a3eb5*/
      SendMessageA(DlgItem, 0x151u, v22[0].vtable3, v22[0].vtable0); /*0x7a3ec1*/
      SendMessageA(DlgItem, 0x14Eu, v22[0].vtable3, 0); /*0x7a3ed0*/
    }
    if ( v21 ) /*0x7a3ed8*/
    {
      String::Assign_Alt((String *)&dword_B73E40, lParama); /*0x7a3eeb*/
      String::Assign_Alt((String *)&g_WebBrowserConfig, v23); /*0x7a3efd*/
      v7 = GetDlgItem(v5, 1836); /*0x7a3f0f*/
      v8 = String::GetOrEmpty_Alt((String *)&g_WebBrowserConfig); /*0x7a3f11*/
      SendMessageA(v7, 0x4B4u, 0, (LPARAM)v8); /*0x7a3f1f*/
      LOBYTE(dword_84A238) = 1; /*0x7a3f29*/
      v9 = GetDlgItem(v5, 1337); /*0x7a3f30*/
      v10 = (void (__stdcall *)(HWND, BOOL))EnableWindow; /*0x7a3f32*/
      EnableWindow(v9, 1); /*0x7a3f39*/
      if ( !v20 ) /*0x7a3f41*/
      {
        v11 = GetDlgItem(v5, 1837); /*0x7a3f4f*/
        EnableWindow(v11, 0); /*0x7a3f52*/
        v12 = GetDlgItem(v5, 1837); /*0x7a3f63*/
        SendMessageA(v12, 0xF1u, 1u, 0); /*0x7a3f66*/
LABEL_14:
        v15 = GetDlgItem(v5, 1771); /*0x7a3f99*/
        v10(v15, 1); /*0x7a3fa4*/
        String::Assign((String *)v22, lParama); /*0x7a3fb2*/
        FillPersonaInfoWOL(v22[0].vtable2, v5, (char **)v22, (wchar_t **)1); /*0x7a3fc3*/
        DeleteAndZero(v22); /*0x7a3fcc*/
      }
    }
    else
    {
      v13 = GetDlgItem(v5, 1791); /*0x7a3f79*/
      SendMessageA(v13, 0xF1u, 0, 0); /*0x7a3f7c*/
      v14 = GetDlgItem(v5, 1791); /*0x7a3f86*/
      v10 = (void (__stdcall *)(HWND, BOOL))EnableWindow; /*0x7a3f88*/
      EnableWindow(v14, 1); /*0x7a3f8f*/
      if ( !v20 ) /*0x7a3f97*/
        goto LABEL_14; /*0x7a3f97*/
    }
  }
  v22[0].vtable1 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x7a3fd1*/
  ComPtr::Release((ComPtr *)&v22[0].vtable1); /*0x7a3fdd*/
LABEL_16:
  if ( lParam ) /*0x7a3fed*/
  {
    BulkCharToWide(&v22[0].nextArrayIndex, (unsigned __int8 *)lParam, -1); /*0x7a3ff5*/
    ShowDialogConfirm((wchar_t *)&v22[0].nextArrayIndex, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7a4007*/
  }
  else
  {
    ShowDialogConfirm(aUnknownStatus, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7a4017*/
  }
  v16 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7a4021*/
  if ( v16 ) /*0x7a4028*/
  {
    dword_B77DC8 &= ~0x100u; /*0x7a4036*/
    if ( !dword_B77DC8 ) /*0x7a403c*/
      CloseDialog(v16, 0); /*0x7a4042*/
  }
  Current = (HWND)Dialog::GetCurrent(); /*0x7a4047*/
  v18 = GetDlgItem(Current, 1344); /*0x7a4052*/
  if ( v18 ) /*0x7a4058*/
    SetFocus(v18); /*0x7a405b*/
  return 0; /*0x7a4054*/
}



// ==== 0x007A4070  CNetUtilEventSink::Seek  this=CNetUtilEventSink  sig=csp ====
int __thiscall ComStreamClass::Seek(CNetUtilEventSink *this, int a2, int a3, int a4)
{
  HWND v4; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  int v8; // [esp+10h] [ebp+10h]

  Debug::Log(); /*0x7a4075*/
  dword_B77DF4 = a3; /*0x7a4083*/
  if ( !a3 ) /*0x7a4088*/
  {
    dword_B77E60 = a4; /*0x7a4092*/
    dword_B77E64 = v8; /*0x7a4097*/
  }
  v4 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7a40a2*/
  if ( v4 ) /*0x7a40a9*/
  {
    dword_B77DC8 &= ~0x100u; /*0x7a40b7*/
    if ( !dword_B77DC8 ) /*0x7a40bd*/
      CloseDialog(v4, 0); /*0x7a40c3*/
  }
  Current = (HWND)Dialog::GetCurrent(); /*0x7a40c8*/
  DlgItem = GetDlgItem(Current, 1344); /*0x7a40d3*/
  if ( DlgItem ) /*0x7a40db*/
    SetFocus(DlgItem); /*0x7a40de*/
  return 0; /*0x7a40e6*/
}



// ==== 0x007A40F0  CNetUtilEventSink::ddtor  this=CNetUtilEventSink  sig=csp ====
int __stdcall C07F766C::_vt03(int a1, int a2, unsigned int a3, int a4, int a5)
{
  if ( g_NetworkLobby_Init && *(_DWORD *)dword_B77780 ) /*0x7a4100*/
  {
    if ( !a2 && a3 < 0x3E8 ) /*0x7a4114*/
    {
      ++*(_DWORD *)dword_B77CE0; /*0x7a4123*/
      return 0; /*0x7a412a*/
    }
    return 0; /*0x7a4114*/
  }
  if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 ) /*0x7a413f*/
  {
    if ( g_WOL_ProcessIdle ) /*0x7a4188*/
      DisplayRankingsWOL(0); /*0x7a418e*/
    return 0; /*0x7a418e*/
  }
  Debug::Log(); /*0x7a4146*/
  if ( ++dword_B736F4 < g_WOL_LoginPool ) /*0x7a4161*/
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
int __stdcall CChatEventSink::HandleServerList(CChatEventSink *this, int a2, int a3)
{
  int v3; // ebp
  int v4; // ebx
  unsigned int v5; // eax
  wchar_t *StringCSF; // eax
  int vtable0; // eax
  int v9; // esi
  int v10; // ebp
  char *v11; // ebx
  char *v12; // esi
  char v13; // al
  unsigned int v14; // ecx
  char *v15; // edi
  int vtable1; // ebp
  char *v17; // ebx
  char *vtable2; // esi
  char v19; // al
  unsigned int v20; // ecx
  char *v21; // edi
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
  char *v36; // ebx
  int v37; // eax
  wchar_t *v38; // esi
  HWND v39; // eax
  const wchar_t *v40; // [esp+0h] [ebp-324h]
  char v41; // [esp+Fh] [ebp-315h]
  int v42; // [esp+10h] [ebp-314h]
  int v43; // [esp+10h] [ebp-314h]
  int v44; // [esp+14h] [ebp-310h]
  int v45; // [esp+14h] [ebp-310h]
  int v46; // [esp+18h] [ebp-30Ch]
  int v47; // [esp+1Ch] [ebp-308h]
  int v48; // [esp+20h] [ebp-304h]
  char v49[128]; // [esp+24h] [ebp-300h] BYREF
  char v50[128]; // [esp+A4h] [ebp-280h] BYREF
  char String[128]; // [esp+124h] [ebp-200h] BYREF
  char v52[128]; // [esp+1A4h] [ebp-180h] BYREF
  char v53[128]; // [esp+224h] [ebp-100h] BYREF
  char v54[128]; // [esp+2A4h] [ebp-80h] BYREF

  v3 = 0; /*0x7a41d0*/
  v4 = a3; /*0x7a41d2*/
  v44 = a3; /*0x7a41d5*/
  v42 = 0; /*0x7a41d9*/
  v48 = 0; /*0x7a41dd*/
  v47 = 0; /*0x7a41e1*/
  v5 = time(0); /*0x7a41e5*/
  srand(v5); /*0x7a41eb*/
  if ( a2 < 0 ) /*0x7a41fc*/
  {
    SetEvent(Handles); /*0x7a4204*/
    StringCSF = GetStringCSF(aTxtNoServList, 0, g_Str_File_wonline_cpp, 5275); /*0x7a421b*/
    swprintf(&word_B77AD0, (const size_t)StringCSF, v40); /*0x7a4226*/
    return 0; /*0x7a4239*/
  }
  vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a423c*/
  v41 = 0; /*0x7a4244*/
  if ( !a3 ) /*0x7a4249*/
    goto LABEL_75; /*0x7a4249*/
  do /*0x7a4ac2*/
  {
    if ( strcmp((const char *)(v4 + 95), "IRC") ) /*0x7a425f*/
    {
      if ( !strcmp((const char *)(v4 + 95), (const char *)&off_84AB9C) ) /*0x7a45e3*/
      {
        strcpy(v49, (const char *)(v4 + 100)); /*0x7a462c*/
        strtok(v49, asc_81C8FC); /*0x7a463a*/
        v25 = strtok(0, asc_81C8FC); /*0x7a4646*/
        if ( v25 ) /*0x7a4650*/
          strcpy(stru_B76188.__pad_20, v25); /*0x7a466b*/
        v26 = strtok(0, asc_81C8FC); /*0x7a467b*/
        if ( v26 ) /*0x7a4685*/
          g_WOL_GameConfig = atol(v26); /*0x7a4694*/
      }
      else if ( strcmp((const char *)(v4 + 95), aGam) || v47 ) /*0x7a46dc*/
      {
        if ( !strcmp((const char *)(v4 + 95), aGam) && v47 == 1 ) /*0x7a47dc*/
        {
          qmemcpy(&stru_B75E48.ComPtr_field_0x10, (const void *)v4, 0xF8u); /*0x7a47f0*/
          strcpy(v50, byte_B75EBC); /*0x7a4815*/
          strtok(v50, asc_81C8FC); /*0x7a4826*/
          v29 = strtok(0, asc_81C8FC); /*0x7a4832*/
          if ( v29 ) /*0x7a483c*/
            strcpy(&byte_B77CE8, v29); /*0x7a4857*/
          v30 = strtok(0, asc_81C8FC); /*0x7a4867*/
          if ( v30 ) /*0x7a4871*/
            dword_B75F5C = atol(v30); /*0x7a487c*/
          v47 = 2; /*0x7a4881*/
        }
        else if ( !strcmp((const char *)(v4 + 95), aWdt_1) ) /*0x7a489b*/
        {
          qmemcpy(&unk_B769C8, (const void *)v4, 0xF8u); /*0x7a48d9*/
          strcpy(v52, byte_B76A2C); /*0x7a48f7*/
          strtok(v52, asc_81C8FC); /*0x7a4908*/
          v31 = strtok(0, asc_81C8FC); /*0x7a4914*/
          if ( v31 ) /*0x7a491e*/
            strcpy(&g_WindowManager.__pad_70[28], v31); /*0x7a4939*/
          v32 = strtok(0, asc_81C8FC); /*0x7a4949*/
          if ( v32 ) /*0x7a4953*/
            stru_B76AC4.ambientSoundController[3] = atol(v32); /*0x7a4962*/
        }
        else if ( !_strcmpi((char *)(v4 + 95), aMgl) ) /*0x7a4972*/
        {
          Debug::Log(); /*0x7a4987*/
          if ( !v41 ) /*0x7a4995*/
          {
            dword_B77E1C = 0; /*0x7a49a3*/
            memset(&g_WindowManager.__pad_EC[688], 0, 0x2000u); /*0x7a49a8*/
            memset(dword_B76338, 0, sizeof(dword_B76338)); /*0x7a49b4*/
            v41 = 1; /*0x7a49b6*/
          }
          v33 = (char *)__2_YAPAXI_Z(0xF8u); /*0x7a49c5*/
          qmemcpy(v33, (const void *)v4, 0xF8u); /*0x7a49d0*/
          strcpy(v54, v33 + 100); /*0x7a49f5*/
          strtok(v54, asc_81C8FC); /*0x7a4a06*/
          v34 = strtok(0, asc_81C8FC); /*0x7a4a12*/
          if ( v34 ) /*0x7a4a1c*/
          {
            strcpy(&g_WindowManager.__pad_EC[128 * dword_B77E1C + 688], v34); /*0x7a4a4e*/
            v35 = strtok(0, asc_81C8FC); /*0x7a4a57*/
            if ( v35 ) /*0x7a4a61*/
              dword_B76338[dword_B77E1C] = atol(v35); /*0x7a4a72*/
            Debug::Log(); /*0x7a4a98*/
            ++dword_B77E1C; /*0x7a4aa6*/
          }
          __3_YAXPAX_Z(v33); /*0x7a4aac*/
        }
      }
      else
      {
        qmemcpy(&stru_B75E48.ComPtr_field_0x10, (const void *)v4, 0xF8u); /*0x7a46f0*/
        strcpy(v53, byte_B75EBC); /*0x7a4715*/
        strtok(v53, asc_81C8FC); /*0x7a4726*/
        v27 = strtok(0, asc_81C8FC); /*0x7a4732*/
        if ( v27 ) /*0x7a473c*/
          strcpy((char *)&g_WOL_UserList.customSound_controller[2], v27); /*0x7a4757*/
        v28 = strtok(0, asc_81C8FC); /*0x7a4767*/
        if ( v28 ) /*0x7a4771*/
          dword_B76184 = atol(v28); /*0x7a477c*/
        byte_B77CE8 = 0; /*0x7a4781*/
        dword_B75F5C = 0; /*0x7a4788*/
        v47 = 1; /*0x7a4792*/
      }
LABEL_72:
      vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a4ab4*/
      goto LABEL_73; /*0x7a4ab4*/
    }
    v9 = vtable0; /*0x7a428e*/
    if ( v42 ) /*0x7a4292*/
    {
      v46 = vtable0; /*0x7a43d4*/
      vtable1 = (int)g_WOL_UserList.?; /*0x7a43e0*/
      if ( vtable0 >= (int)g_WOL_UserList.? ) /*0x7a43e8*/
      {
        vtable1 = 2 * vtable0; /*0x7a43f6*/
        if ( 2 * vtable0 < 10 ) /*0x7a43fc*/
          vtable1 = 10; /*0x7a43fe*/
        v17 = (char *)__2_YAPAXI_Z(248 * vtable1); /*0x7a4415*/
        memset(v17, 0, 4 * ((unsigned int)(248 * vtable1) >> 2)); /*0x7a4423*/
        vtable2 = (char *)g_WOL_UserList.?; /*0x7a442c*/
        if ( g_WOL_UserList.? ) /*0x7a4434*/
        {
          v19 = -8 * LOBYTE(g_WOL_UserList.AbstractClass); /*0x7a4447*/
          v20 = (unsigned int)(248 * (int)g_WOL_UserList.AbstractClass) >> 2; /*0x7a4449*/
          qmemcpy(v17, g_WOL_UserList.?, 4 * v20); /*0x7a444c*/
          qmemcpy(&v17[4 * v20], &vtable2[4 * v20], v19 & 3); /*0x7a4453*/
          vtable2 = (char *)g_WOL_UserList.?; /*0x7a4455*/
        }
        __3_YAXPAX_Z(vtable2); /*0x7a445c*/
        vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a4461*/
        v9 = v46; /*0x7a4466*/
        g_WOL_UserList.? = v17; /*0x7a446a*/
        v4 = v44; /*0x7a4470*/
        g_WOL_UserList.? = (void *)vtable1; /*0x7a4477*/
      }
      if ( vtable0 >= vtable1 ) /*0x7a447f*/
      {
        CChatEventSink::ProcessChatEvent((CChatEventSink *)&g_WOL_UserList); /*0x7a4486*/
        vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a448b*/
      }
      if ( v9 < vtable0 ) /*0x7a4492*/
      {
        memcpy((char *)g_WOL_UserList.? + 248 * v9 + 248, (char *)g_WOL_UserList.? + 248 * v9, 248 * vtable0 - 248 * v9); /*0x7a44c2*/
        vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a44c7*/
      }
      v21 = (char *)g_WOL_UserList.? + 248 * v9; /*0x7a44dc*/
      if ( v21 ) /*0x7a44e1*/
      {
        qmemcpy(v21, (const void *)v4, 0xF8u); /*0x7a44ea*/
        vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a44ec*/
      }
      g_WOL_UserList.AbstractClass = (void *)(vtable0 + 1); /*0x7a44f5*/
      strcpy(String, (const char *)(v4 + 24)); /*0x7a451a*/
      v22 = -1; /*0x7a452a*/
      v23 = strtok(String, Str); /*0x7a4533*/
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
            v23 = strtok(0, Str); /*0x7a4572*/
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
      if ( v22 == v24 && 1.0 / (double)++v48 >= (double)rand() * 0.00003051850947599719 ) /*0x7a45b1*/
        dword_B76468 = v42; /*0x7a45b7*/
      g_WOL_BuddyList.DynamicVector_field_0x1C = (AbstractClass *)dword_B76468; /*0x7a45c7*/
      ++v42; /*0x7a45cd*/
      goto LABEL_72; /*0x7a45d1*/
    }
    v43 = vtable0; /*0x7a429a*/
    v10 = (int)g_WOL_UserList.?; /*0x7a42a4*/
    if ( vtable0 >= (int)g_WOL_UserList.? ) /*0x7a42ac*/
    {
      v10 = 2 * vtable0; /*0x7a42ba*/
      if ( 2 * vtable0 < 10 ) /*0x7a42c0*/
        v10 = 10; /*0x7a42c2*/
      v11 = (char *)__2_YAPAXI_Z(248 * v10); /*0x7a42d9*/
      memset(v11, 0, 4 * ((unsigned int)(248 * v10) >> 2)); /*0x7a42e7*/
      v12 = (char *)g_WOL_UserList.?; /*0x7a42f0*/
      if ( g_WOL_UserList.? ) /*0x7a42f8*/
      {
        v13 = -8 * LOBYTE(g_WOL_UserList.AbstractClass); /*0x7a430b*/
        v14 = (unsigned int)(248 * (int)g_WOL_UserList.AbstractClass) >> 2; /*0x7a430d*/
        qmemcpy(v11, g_WOL_UserList.?, 4 * v14); /*0x7a4310*/
        qmemcpy(&v11[4 * v14], &v12[4 * v14], v13 & 3); /*0x7a4317*/
        v12 = (char *)g_WOL_UserList.?; /*0x7a4319*/
      }
      __3_YAXPAX_Z(v12); /*0x7a4320*/
      vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a4325*/
      v9 = v43; /*0x7a432a*/
      g_WOL_UserList.? = v11; /*0x7a432e*/
      v4 = v44; /*0x7a4334*/
      g_WOL_UserList.? = (void *)v10; /*0x7a433b*/
    }
    if ( vtable0 >= v10 ) /*0x7a4343*/
    {
      CChatEventSink::ProcessChatEvent((CChatEventSink *)&g_WOL_UserList); /*0x7a434a*/
      vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a434f*/
    }
    if ( v9 < vtable0 ) /*0x7a4356*/
    {
      memcpy((char *)g_WOL_UserList.? + 248 * v9 + 248, (char *)g_WOL_UserList.? + 248 * v9, 248 * vtable0 - 248 * v9); /*0x7a4386*/
      vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a438b*/
    }
    v15 = (char *)g_WOL_UserList.? + 248 * v9; /*0x7a43a0*/
    if ( v15 ) /*0x7a43a5*/
    {
      qmemcpy(v15, (const void *)v4, 0xF8u); /*0x7a43ae*/
      vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a43b0*/
    }
    ++vtable0; /*0x7a43b5*/
    dword_B76468 = 0; /*0x7a43b6*/
    g_WOL_UserList.AbstractClass = (void *)vtable0; /*0x7a43c0*/
    v42 = 1; /*0x7a43c5*/
LABEL_73:
    v4 = *(_DWORD *)(v4 + 20); /*0x7a4ab9*/
    v44 = v4; /*0x7a4abe*/
  }
  while ( v4 ); /*0x7a4ac2*/
  v3 = 0; /*0x7a4ac8*/
LABEL_75:
  v36 = 0; /*0x7a4aca*/
  if ( vtable0 > 0 ) /*0x7a4ace*/
  {
    v45 = 0; /*0x7a4ad4*/
    do /*0x7a4b60*/
    {
      if ( v45 >= 0 && v3 < vtable0 ) /*0x7a4ae2*/
        v36 = (char *)g_WOL_UserList.? + v45; /*0x7a4ae9*/
      strcpy(v36 + 228, String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684])); /*0x7a4b12*/
      strcpy(v36 + 238, String::GetOrEmpty((String *)&g_WebBrowserConfig)); /*0x7a4b45*/
      ++v3; /*0x7a4b52*/
      vtable0 = (int)g_WOL_UserList.AbstractClass; /*0x7a4b55*/
      v45 += 248; /*0x7a4b5a*/
    }
    while ( v3 < (int)g_WOL_UserList.AbstractClass ); /*0x7a4b60*/
  }
  Debug::Log(); /*0x7a4b72*/
  if ( dword_B77E1C <= 1 ) /*0x7a4b83*/
    v37 = 0; /*0x7a4b95*/
  else
    v37 = Random::Range(&Randomizer_Global, 0, dword_B77E1C - 1); /*0x7a4b8e*/
  dword_B77E20 = v37; /*0x7a4b9d*/
  Debug::Log(); /*0x7a4ba2*/
  v38 = GetStringCSF(aTxtDetectingFi, 0, g_Str_File_wonline_cpp, 5458); /*0x7a4bc5*/
  v39 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7a4bc7*/
  if ( v39 ) /*0x7a4bce*/
    SendDlgItemMessageA(v39, 1458, 0x4B2u, 0, (LPARAM)v38); /*0x7a4bde*/
  CCFileClass::WriteINIString((CCFileClass *)&dword_ABFEC8); /*0x7a4be9*/
  SetEvent(dword_B73688); /*0x7a4bf5*/
  return 0; /*0x7a4230*/
}



// ==== 0x007A4C10  CChatEventSink::?  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::g_var_9d376d(int a1, int a2, int a3)
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
    dword_B77DC8 &= ~0x10u; /*0x7a4c66*/
    if ( !dword_B77DC8 ) /*0x7a4c6c*/
      CloseDialog(v6, 0); /*0x7a4c72*/
  }
  Current = Dialog::GetCurrent(); /*0x7a4c77*/
  DlgItem = GetDlgItem(Current, 1344); /*0x7a4c82*/
  if ( DlgItem ) /*0x7a4c8a*/
    SetFocus(DlgItem); /*0x7a4c8d*/
  v9 = GetStringCSF(aTxtUpgraderequ, 0, g_Str_File_wonline_cpp, 5504); /*0x7a4cab*/
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
      sprintf(v22, "%s/%s", (const char *)(v4 + 81), (const char *)(v4 + 337)); /*0x7a4cef*/
      sprintf(v23, "%s\\%s", (const char *)(v4 + 468), (const char *)(v4 + 337)); /*0x7a4d09*/
      CreateDirectoryA((LPCSTR)(v4 + 468), 0); /*0x7a4d14*/
      (*(void (__stdcall **)(LPVOID, int, int, int, char *, char *, char *))(*(_DWORD *)dword_AC1174 + 12))( /*0x7a4d49*/
        dword_AC1174,
        v4 + 16,
        v4 + 370,
        v4 + 403,
        v22,
        v23,
        g_Str_SOFTWARE_Westwood_Yuri_s_Reven);
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
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_32(CChatEventSink *this, int a2, int a3, int a4)
{
  int v4; // ebp
  int owningHouseIndex; // ecx
  int v6; // eax
  char *v7; // edx
  int v8; // eax
  int v9; // ebx
  ObjectClass *v10; // eax
  ObjectClass *nextObject; // esi
  ObjectClass *v12; // ebp
  char v13; // dl
  unsigned int v14; // ecx
  char v15; // dl
  bool v16; // cc
  int v17; // esi
  int v19; // [esp+1Ch] [ebp-E8h]
  _BYTE v20[228]; // [esp+20h] [ebp-E4h] BYREF

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
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a4f3e*/
  v6 = 0; /*0x7a4f44*/
  v19 = 0; /*0x7a4f48*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a4f4c*/
  {
    *(_DWORD *)&v20[4] = 0; /*0x7a4f53*/
    while ( 1 ) /*0x7a4f57*/
    {
      v7 = 0; /*0x7a4f57*/
      if ( v4 >= 0 && v6 < owningHouseIndex ) /*0x7a4f5f*/
        v7 = (char *)g_WOL_UserList.nextObject + v4; /*0x7a4f66*/
      if ( *((_DWORD *)v7 + 5) != a3 ) /*0x7a4f75*/
        goto LABEL_38; /*0x7a4f75*/
      *(_DWORD *)&v20[8] = v7 + 87; /*0x7a4f90*/
      strcpy(v7 + 87, (const char *)(a4 + 401)); /*0x7a4fa8*/
      strcpy(v7 + 46, (const char *)(a4 + 360)); /*0x7a4fcb*/
      memset(&v20[120], 0, 0x6Cu); /*0x7a4ff0*/
      if ( v4 >= 0 && v19 < g_WOL_UserList.owningHouseIndex ) /*0x7a4ff8*/
        qmemcpy(&v20[120], (char *)g_WOL_UserList.nextObject + v4, 0x6Cu); /*0x7a5009*/
      v8 = v19; /*0x7a500b*/
      qmemcpy(&v20[12], &v20[120], 0x6Cu); /*0x7a501f*/
      *(_DWORD *)&v20[44] = 0; /*0x7a5023*/
      if ( g_WOL_UserList.owningHouseIndex ) /*0x7a502b*/
      {
        if ( v4 < 0 ) /*0x7a5033*/
          v8 = 0; /*0x7a5035*/
        if ( v8 >= g_WOL_UserList.owningHouseIndex ) /*0x7a5039*/
          v8 = g_WOL_UserList.owningHouseIndex - 1; /*0x7a503b*/
        memcpy( /*0x7a5061*/
          (char *)g_WOL_UserList.nextObject + 108 * v8,
          &g_WOL_UserList.nextObject->alignmentPadding69[108 * v8 + 3],
          108 * g_WOL_UserList.owningHouseIndex - 36 * (3 * v8 + 3));
        --g_WOL_UserList.owningHouseIndex; /*0x7a5075*/
        if ( 3 * g_WOL_UserList.owningHouseIndex <= g_WOL_UserList.fallRate ) /*0x7a507f*/
        {
          v9 = g_WOL_UserList.fallRate / 2; /*0x7a5088*/
          if ( g_WOL_UserList.fallRate / 2 < 10 ) /*0x7a508d*/
            v9 = 10; /*0x7a508f*/
          if ( v9 < g_WOL_UserList.fallRate ) /*0x7a5096*/
          {
            v10 = (ObjectClass *)__2_YAPAXI_Z(108 * v9); /*0x7a50a2*/
            nextObject = g_WOL_UserList.nextObject; /*0x7a50a7*/
            v12 = v10; /*0x7a50b2*/
            if ( g_WOL_UserList.nextObject ) /*0x7a50b4*/
            {
              v13 = 108 * LOBYTE(g_WOL_UserList.owningHouseIndex); /*0x7a50c6*/
              v14 = (unsigned int)(108 * g_WOL_UserList.owningHouseIndex) >> 2; /*0x7a50c8*/
              qmemcpy(v10, g_WOL_UserList.nextObject, 4 * v14); /*0x7a50cb*/
              qmemcpy(&v10->AbstractClass + v14, &nextObject->AbstractClass + v14, v13 & 3); /*0x7a50d2*/
              nextObject = g_WOL_UserList.nextObject; /*0x7a50d4*/
            }
            __3_YAXPAX_Z(nextObject); /*0x7a50db*/
            g_WOL_UserList.nextObject = v12; /*0x7a50e0*/
            v4 = *(_DWORD *)&v20[4]; /*0x7a50e6*/
            g_WOL_UserList.fallRate = v9; /*0x7a50ed*/
          }
        }
      }
      if ( dword_B77E48 == 1 ) /*0x7a50fb*/
        break; /*0x7a50fb*/
      switch ( dword_B77E48 ) /*0x7a5104*/
      {
        case 2: /*0x7a5104*/
          InsertBuddyList(&v20[12], 1); /*0x7a510c*/
          break;
        case 3: /*0x7a5104*/
          InsertBuddyList(&v20[12], 0); /*0x7a511e*/
          break;
        case 4: /*0x7a5104*/
          FindBuddyList(&v20[12], 1); /*0x7a5130*/
          break;
        case 5: /*0x7a5104*/
          FindBuddyList(&v20[12], 0); /*0x7a5142*/
          break;
        default:
          v15 = 1; /*0x7a5149*/
          goto LABEL_37; /*0x7a5149*/
      }
LABEL_38:
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a5154*/
      v6 = v19 + 1; /*0x7a515e*/
      v4 += 108; /*0x7a515f*/
      v16 = ++v19 < g_WOL_UserList.owningHouseIndex; /*0x7a5162*/
      *(_DWORD *)&v20[4] = v4; /*0x7a5168*/
      if ( !v16 ) /*0x7a516c*/
        goto LABEL_39; /*0x7a516c*/
    }
    v15 = 0; /*0x7a50fd*/
LABEL_37:
    InsertGameSettings(&v20[12], v15); /*0x7a514b*/
    goto LABEL_38; /*0x7a514f*/
  }
LABEL_39:
  String::Assign((String *)v20, (const char *)(a4 + 401)); /*0x7a5173*/
  String::ToLower((String *)v20); /*0x7a518e*/
  v17 = *(_DWORD *)(*(_DWORD *)g_WOL_ListParser.__pad_0 /*0x7a51b2*/
                  + 4 * (dword_B768D8(v20) & ((1 << SLOBYTE(g_WOL_ListParser.HashMap_field_0x0C)) - 1)));
  if ( v17 ) /*0x7a51b7*/
  {
    while ( !(unsigned __int8)String::Compare((String *)v17, (const char **)v20) ) /*0x7a51c7*/
    {
      v17 = *(_DWORD *)(v17 + 112); /*0x7a51c9*/
      if ( !v17 ) /*0x7a51ce*/
        goto LABEL_42; /*0x7a51ce*/
    }
  }
  else
  {
LABEL_42:
    (*(void (__stdcall **)(LPVOID, char *, int, int, int **, int, _DWORD, _DWORD))(*(_DWORD *)g_UIPointerTable + 20))( /*0x7a51d0*/
      g_UIPointerTable,
      stru_B76188.__pad_20,
      g_WOL_GameConfig,
      a4 + 401,
      &off_802100,
      -1,
      0,
      0);
  }
  if ( !dword_B77DDC ) /*0x7a51fa*/
    DisplayRankingsWOL(0); /*0x7a5200*/
  DeleteAndZero((ObjectClass *)v20); /*0x7a5209*/
  return 0; /*0x7a520e*/
}



// ==== 0x007A5220  CChatEventSink::DispatchStub_20  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_20(CChatEventSink *this, int a2, const char *a3)
{
  if ( a2 >= 0 ) /*0x7a5226*/
    LeaveChannelWOL(a3); /*0x7a522c*/
  return 0; /*0x7a5233*/
}



// ==== 0x007A5240  CChatEventSink::GetTypeInfoCount  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::GetTypeInfoCount(CChatEventSink *this, int a2, int a3)
{
  wchar_t *StringCSF; // eax
  wchar_t Buffer[512]; // [esp+0h] [ebp-400h] BYREF

  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7a524d*/
  {
    StringCSF = GetStringCSF(aTxtServerError, 0, g_Str_File_wonline_cpp, 5655); /*0x7a5260*/
    swprintf(Buffer, (const size_t)&off_8240B4, StringCSF); /*0x7a5270*/
    Dialog::ShowMessage(-1, (size_t)Buffer); /*0x7a527c*/
  }
  return 0; /*0x7a5286*/
}



// ==== 0x007A5290  CChatEventSink::GetTypeInfo  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::GetTypeInfo(CChatEventSink *this, int a2, const char *a3)
{
  wchar_t *StringCSF; // eax
  wchar_t *v4; // eax
  char *v6; // ebp
  char *i; // eax
  int v8; // esi
  int v9; // [esp+24h] [ebp-50h] BYREF
  int v10; // [esp+28h] [ebp-4Ch] BYREF
  _BYTE v11[4]; // [esp+2Ch] [ebp-48h] BYREF
  char v12[4]; // [esp+30h] [ebp-44h] BYREF
  char Buffer[64]; // [esp+34h] [ebp-40h] BYREF

  dword_B77DF8 = a2; /*0x7a5299*/
  if ( a2 < 0 ) /*0x7a529e*/
    LOBYTE(stru_B77D80.HashTable_field_0x40) = 1; /*0x7a52a0*/
  if ( a2 <= -2147221387 ) /*0x7a52ac*/
  {
    if ( a2 == -2147221387 ) /*0x7a52b2*/
    {
      StringCSF = GetStringCSF((wchar_t *)aTxtBanned, 0, g_Str_File_wonline_cpp, 5758); /*0x7a5383*/
    }
    else
    {
      switch ( a2 ) /*0x7a52ce*/
      {
        case -2147221404: /*0x7a52ce*/
          StringCSF = GetStringCSF(aTxtLoginUsed, 0, g_Str_File_wonline_cpp, 5737); /*0x7a52e6*/
          break; /*0x7a52e6*/
        case -2147221403: /*0x7a52ce*/
          StringCSF = GetStringCSF(g_Str_TXT_BADPASS, 0, g_Str_File_wonline_cpp, 5742); /*0x7a531f*/
          break; /*0x7a532a*/
        case -2147221390: /*0x7a52ce*/
          StringCSF = GetStringCSF((wchar_t *)aTxtBanned, 0, g_Str_File_wonline_cpp, 5747); /*0x7a5357*/
          break; /*0x7a5357*/
        case -2147221388: /*0x7a52ce*/
          StringCSF = GetStringCSF((wchar_t *)aTxtDisabled, 0, g_Str_File_wonline_cpp, 5753); /*0x7a536d*/
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
      v4 = GetStringCSF(aTxtSkuserialmi, 0, g_Str_File_wonline_cpp, 5773); /*0x7a53d6*/
      wcscpy(&word_B77AD0, v4); /*0x7a53e1*/
      SetEvent(Handles); /*0x7a53ef*/
      return 0; /*0x7a53fa*/
    }
    if ( a2 == -2147221386 ) /*0x7a5393*/
      StringCSF = GetStringCSF((wchar_t *)aTxtSerialdup, 0, g_Str_File_wonline_cpp, 5763); /*0x7a53c0*/
    else
      StringCSF = GetStringCSF((wchar_t *)aTxtSerialunkno, 0, g_Str_File_wonline_cpp, 5768); /*0x7a53ad*/
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
    (*(void (__stdcall **)(LPVOID, int *))(*(_DWORD *)ppv + 132))(ppv, &a2); /*0x7a5457*/
    v6 = (char *)__2_YAPAXI_Z(strlen((const char *)a2) + 32); /*0x7a5477*/
    strcpy(v6, (const char *)a2); /*0x7a5493*/
    strcat(v6, a1018); /*0x7a54bb*/
    for ( i = strtok(v6, Str); i; i = strtok(0, Str) ) /*0x7a54ce*/
    {
      v8 = atol(i); /*0x7a54dd*/
      (*(void (__stdcall **)(LPVOID, int, int, int *, int *, char *, _BYTE *))(*(_DWORD *)ppv + 92))( /*0x7a54ff*/
        ppv,
        v8,
        dword_84A1C0,
        &v10,
        &v9,
        v12,
        v11);
      sprintf(Buffer, "gt%d.bmp", v8); /*0x7a550d*/
      ChatEvent::ProcessStrings((int)&g_DialogHashTable, Buffer, v10, v9, 2); /*0x7a552b*/
    }
    __3_YAXPAX_Z(v6); /*0x7a5544*/
    dword_B77EA4 = 1; /*0x7a554c*/
  }
  if ( byte_84A1B8 ) /*0x7a555f*/
    String::Assign_Alt((String *)&g_WindowManager.Array_field_0x38, a3); /*0x7a556b*/
  else
    DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.Array_field_0x38); /*0x7a5577*/
  memset(&stru_B76AC4.ambientSoundController[4], 0, 0x10Cu); /*0x7a558e*/
  memset(&g_WindowManager.__pad_EC[84], 0, 0x10Cu); /*0x7a559a*/
  BYTE2(stru_B77D80.HashTable_field_0x40) = 0; /*0x7a559d*/
  stru_B77D80.HashTable_field_0x50 = 0; /*0x7a55a4*/
  SetEvent(dword_B7368C); /*0x7a55ae*/
  QueryNATPortWOL(&stru_A8DBC0); /*0x7a55b9*/
  return 0; /*0x7a5308*/
}



// ==== 0x007A55F0  CChatEventSink::GetIDsOfNames  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::GetIDsOfNames(CChatEventSink *this, int a2, char *Source)
{
  char *v4; // esi
  unsigned __int8 *i; // eax
  size_t BufferCount[512]; // [esp+0h] [ebp-800h] BYREF

  if ( a2 < 0 ) /*0x7a55fc*/
    return 0; /*0x7a55fe*/
  v4 = _strdup(Source); /*0x7a5617*/
  for ( i = (unsigned __int8 *)strtok(v4, asc_83F328); i; i = (unsigned __int8 *)strtok(0, asc_83F328) ) /*0x7a5629*/
  {
    BulkCharToWide(BufferCount, i, -1); /*0x7a5633*/
    Dialog::ShowMessage(-1, (size_t)BufferCount); /*0x7a5644*/
  }
  free(v4); /*0x7a565d*/
  Dialog::ShowMessage(-1, (size_t)asc_830174); /*0x7a566d*/
  return 0; /*0x7a5600*/
}



// ==== 0x007A5690  CChatEventSink::FireEvent  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::FireEvent(CChatEventSink *this, int a2, _BYTE *a3)
{
  wchar_t *v3; // eax
  HWND v4; // eax
  HWND v5; // eax
  HWND v6; // eax
  wchar_t *StringCSF; // eax
  char *v9; // edi
  TagClass *v10; // eax
  HWND v11; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  char *v14; // [esp-10h] [ebp-60h]
  char Buffer[80]; // [esp+0h] [ebp-50h] BYREF

  if ( a2 >= 0 ) /*0x7a5699*/
  {
    if ( *(_DWORD *)a3 ) /*0x7a572c*/
    {
      memset(&g_WOL_LoginObject.?, 0, 0x940u); /*0x7a576f*/
      v9 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7a577b*/
      v10 = (TagClass *)dword_A8B3AC; /*0x7a5788*/
      strcpy((char *)&g_WOL_LoginObject.?, v9); /*0x7a5799*/
      g_WOL_LoginObject.attachedTag = v10; /*0x7a57a8*/
      g_WOL_LoginObject.attachedBomb = 0; /*0x7a57ad*/
      g_WOL_LoginObject.nextObject = (ObjectClass *)dword_A8B394; /*0x7a57b7*/
      g_WOL_LoginObject.ambientSoundController[0] = 1; /*0x7a57bd*/
    }
    else
    {
      v14 = CharToWideString(a3 + 52); /*0x7a573a*/
      StringCSF = GetStringCSF(aTxtCreatedChan, 0, g_Str_File_wonline_cpp, 5835); /*0x7a574c*/
      Dialog::ShowMessage(-1, (size_t)StringCSF, v14); /*0x7a5759*/
    }
    qmemcpy(&stru_B76AC4.ambientSoundController[4], a3, 0x10Cu); /*0x7a57d8*/
    dword_B77E4C = 1; /*0x7a57e0*/
    ++stru_B77D80.HashTable_field_0x50; /*0x7a57eb*/
    Debug::Log(); /*0x7a57f1*/
    if ( ppv && *(_DWORD *)a3 ) /*0x7a5802*/
    {
      memset(Buffer, 0, sizeof(Buffer)); /*0x7a5813*/
      GameConfig::BuildChecksum(Buffer); /*0x7a5819*/
      Buffer[40] = 0; /*0x7a5827*/
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 168))(ppv, Buffer); /*0x7a5830*/
    }
    v11 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7a583b*/
    if ( v11 ) /*0x7a5845*/
    {
      stru_B77D80.HashTable_field_0x48 &= ~4u; /*0x7a5850*/
      if ( !stru_B77D80.HashTable_field_0x48 ) /*0x7a5856*/
        CloseDialog(v11, 0); /*0x7a585c*/
    }
    Current = (HWND)Dialog::GetCurrent(); /*0x7a5861*/
    DlgItem = GetDlgItem(Current, 1344); /*0x7a586c*/
    if ( DlgItem ) /*0x7a5874*/
      SetFocus(DlgItem); /*0x7a5877*/
  }
  else
  {
    v3 = GetStringCSF(aTxtChancreateF, 0, g_Str_File_wonline_cpp, 5825); /*0x7a56b0*/
    Dialog::ShowMessage(-1, (size_t)v3); /*0x7a56bc*/
    dword_B77E4C = 0; /*0x7a56c9*/
    stru_B76AC4.needsRedraw = 0; /*0x7a56d3*/
    v4 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7a56da*/
    if ( v4 ) /*0x7a56e1*/
    {
      stru_B77D80.HashTable_field_0x48 &= ~4u; /*0x7a56ec*/
      if ( !stru_B77D80.HashTable_field_0x48 ) /*0x7a56f2*/
        CloseDialog(v4, 0); /*0x7a56f8*/
    }
    v5 = (HWND)Dialog::GetCurrent(); /*0x7a56fd*/
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
int __stdcall CChatEventSink::HandleChatEvent(CChatEventSink *this, int a2, unsigned __int8 *a3, char *a4)
{
  unsigned __int8 *v4; // ebp
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  void (__stdcall *v8)(HANDLE); // esi
  int v9; // ebx
  int v10; // ebp
  int v11; // eax
  int v12; // ebp
  int occupant; // edx
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
  HWND v26; // eax
  HWND v27; // esi
  HWND v29; // eax
  HWND v30; // eax
  HWND v31; // eax
  wchar_t *v32; // eax
  HWND v33; // eax
  HWND v34; // eax
  void (__stdcall *v35)(HWND, BOOL); // esi
  HWND v36; // edi
  LRESULT v37; // eax
  LRESULT v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  HWND v41; // eax
  HWND v42; // eax
  HWND v43; // eax
  HWND v44; // eax
  HWND v45; // eax
  HWND v... [46810 chars total]



// ==== 0x007A70E0  CChatEventSink::Disconnect  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::Disconnect(CChatEventSink *this, int a2, int a3, const char *a4)
{
  if ( a2 >= 0 ) /*0x7a70e6*/
    LeaveChannelWOL(a4); /*0x7a70fe*/
  else
    Debug::Log(); /*0x7a70ed*/
  return 0; /*0x7a70f7*/
}



// ==== 0x007A7110  CChatEventSink::HandleChannelJoin  this=CChatEventSink  sig=csp ====
int __stdcall CChatEventSink::HandleChannelJoin(CChatEventSink *this, int a2, int a3, const char *a4)
{
  HWND Current; // eax
  int v5; // edx
  const char *v6; // ebp
  int v7; // esi
  int v8; // ebx
  int v9; // esi
  int v10; // esi
  HashTable *v11; // esi
  int v12; // esi
  int owningHouseIndex; // eax
  char *v14; // ebp
  int v15; // esi
  int v16; // edi
  char *v17; // eax
  int v18; // eax
  void *v19; // edx
  char *v20; // eax
  char *v21; // eax
  int v22; // eax
  int v23; // esi
  wchar_t *v24; // eax
  u_long v25; // edx
  int v26; // eax
  BombClass *attachedBomb; // ecx
  int v28; // eax
  int v29; // eax
  int v30; // ebx
  int v31; // ebp
  char *v32; // eax
  char *v33; // eax
  HWND v34; // eax
  ObjectClass *PlayerProfile; // eax
  int v36; // eax
  int PlayerSide; // eax
  int PlayerOption; // eax
  int v40; // [esp+74h] [ebp-154h]
  void *vtable2; // [esp+80h] [ebp-148h]
  int PlayerColor; // [esp+84h] [ebp-144h]
  int v43; // [esp+84h] [ebp-144h]
  int v44; // [esp+88h] [ebp-140h]
  ObjectClass *v45; // [esp+94h] [ebp-134h]
  ObjectClass v46; // [esp+9Ch] [ebp-12Ch] BYREF
  char v47[128]; // [esp+148h] [ebp-80h] BYREF

  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7a7121*/
  {
    memset(byte_B78620, 0, sizeof(byte_B78620)); /*0x7a7133*/
    unknown_libname_73(&v46); /*0x7a7139*/
    if ( a2 >= 0 ) /*0x7a7145*/
    {
      Current = (HWND)Dialog::GetCurrent(); /*0x7a7159*/
      SendDlgItemMessageA(Current, 1342, 0x184u, 0, 0); /*0x7a715f*/
      g_WOL_UserList.owningHouseIndex = 0; /*0x7a7165*/
      v46.? = 0; /*0x7a7172*/
      v46.occupant = 0; /*0x7a7178*/
      for ( BYTE2(v46.?) = 0; a4; a4 = (const char *)*((_DWORD *)a4 + 8) ) /*0x7a7181*/
      {
        v5 = *((_DWORD *)a4 + 5); /*0x7a7193*/
        ++v46.occupant; /*0x7a7196*/
        if ( !v5 || strlen(a4 + 87) ) /*0x7a71a1*/
        {
          if ( g_UIPointerTable ) /*0x7a71d8*/
          {
            if ( v5 ) /*0x7a71e0*/
            {
              v6 = a4 + 87; /*0x7a71e6*/
              if ( strlen(a4 + 87) ) /*0x7a71f0*/
              {
                String::Assign((String *)&v46.?, v6); /*0x7a71fc*/
                String::ToLower((String *)&v46.?); /*0x7a7205*/
                v7 = *(_DWORD *)(*(_DWORD *)g_WOL_ListParser.__pad_0 /*0x7a7229*/
                               + 4 * (dword_B768D8(&v46.?) & ((1 << SLOBYTE(g_WOL_ListParser.HashMap_field_0x0C)) - 1)));
                if ( v7 ) /*0x7a722e*/
                {
                  while ( !(unsigned __int8)String::Compare((String *)v7, (const char **)&v46.?) ) /*0x7a723e*/
                  {
                    v7 = *(_DWORD *)(v7 + 112); /*0x7a7240*/
                    if ( !v7 ) /*0x7a7245*/
                      goto LABEL_13; /*0x7a7245*/
                  }
                }
                else
                {
LABEL_13:
                  (*(void (__stdcall **)(LPVOID, char *, int, const char *, int **, int, _DWORD, _DWORD))(*(_DWORD *)g_UIPointerTable + 20))( /*0x7a7247*/
                    g_UIPointerTable,
                    stru_B76188.__pad_20,
                    g_WOL_GameConfig,
                    v6,
                    &off_802100,
                    -1,
                    0,
                    0);
                }
                DeleteAndZero((ObjectClass *)&v46.?); /*0x7a726e*/
              }
            }
          }
        }
        else
        {
          ++dword_B77DDC; /*0x7a71b9*/
          (*(void (__stdcall **)(LPVOID, _DWORD))(*(_DWORD *)ppv + 176))(ppv, *((_DWORD *)a4 + 5)); /*0x7a71c6*/
        }
        v46.? = (int)v47; /*0x7a7289*/
        v8 = *(_DWORD *)a4; /*0x7a728f*/
        strcpy(v47, a4 + 36); /*0x7a72a2*/
        qmemcpy(&v46.ambientSoundController[1], a4, 0x6Cu); /*0x7a72bb*/
        v46.customSound_controller[4] = 0; /*0x7a72bf*/
        if ( stru_B76AC4.ambientSoundController[4] ) /*0x7a72c7*/
        {
          DynamicClass::Insert( /*0x7a7346*/
            (DynamicClass *)&g_WOL_UserList.owningHouseIndex,
            &v46.ambientSoundController[1],
            g_WOL_UserList.owningHouseIndex);
        }
        else
        {
          switch ( dword_B77E48 ) /*0x7a72d1*/
          {
            case 1: /*0x7a72d1*/
              InsertGameSettings((char *)&v46.ambientSoundController[1], 0); /*0x7a72d9*/
              break;
            case 2: /*0x7a72d1*/
              InsertBuddyList((const char *)&v46.ambientSoundController[1], 1); /*0x7a72eb*/
              break;
            case 3: /*0x7a72d1*/
              InsertBuddyList((const char *)&v46.ambientSoundController[1], 0); /*0x7a72fd*/
              break;
            case 4: /*0x7a72d1*/
              FindBuddyList(&v46.ambientSoundController[1], 1); /*0x7a730f*/
              break;
            case 5: /*0x7a72d1*/
              FindBuddyList(&v46.ambientSoundController[1], 0); /*0x7a7321*/
              break;
            default:
              InsertGameSettings((char *)&v46.ambientSoundController[1], 1); /*0x7a732e*/
              break;
          }
        }
        if ( (v8 & 1) != 0 ) /*0x7a734e*/
          BYTE2(v46.?) = 1; /*0x7a7350*/
        String::Assign_Bool((String *)&v46, a4 + 36); /*0x7a735a*/
        String::ToLower((String *)&v46); /*0x7a7363*/
        if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x7a7378*/
        {
          v9 = *(_DWORD *)(stru_B765EC.lastLayer /*0x7a7399*/
                         + 4 * (dword_B76698(&v46) & ((1 << SLOBYTE(stru_B765EC.location[1])) - 1)));
          if ( v9 ) /*0x7a739e*/
          {
            while ( !(unsigned __int8)String::Compare((String *)v9, (const char **)&v46) ) /*0x7a73ae*/
            {
              v9 = *(_DWORD *)(v9 + 8); /*0x7a73b0*/
              if ( !v9 ) /*0x7a73b5*/
                goto LABEL_35; /*0x7a73b5*/
            }
          }
          else
          {
LABEL_35:
            StringVector::Insert((StringVector *)&g_WebBrowserConfig.?, (const char **)&v46, 0); /*0x7a73b7*/
          }
        }
        v10 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 /*0x7a73e7*/
                        + 4 * (dword_B76548(&v46) & ((1 << SLOBYTE(g_WOL_ConnectionPool.HashMap_field_0x0C)) - 1)));
        if ( v10 ) /*0x7a73ec*/
        {
          while ( !(unsigned __int8)String::Compare((String *)v10, (const char **)&v46) ) /*0x7a73fc*/
          {
            v10 = *(_DWORD *)(v10 + 8); /*0x7a73fe*/
            if ( !v10 ) /*0x7a7403*/
              goto LABEL_39; /*0x7a7403*/
          }
        }
        else
        {
LABEL_39:
          StringVector::Insert((StringVector *)&stru_B765EC.?, (const char **)&v46, 0); /*0x7a7405*/
        }
        v11 = g_WOL_HashTable; /*0x7a7416*/
        v12 = *(_DWORD *)(*(_DWORD *)v11->__pad_0 /*0x7a7432*/
                        + 4
                        * (((int (__thiscall *)(ObjectClass *))g_WOL_HashTable->HashTable_field_0x18)(&v46)
                         & ((1 << v11->HashTable_field_0x0C) - 1)));
        if ( v12 ) /*0x7a7437*/
        {
          while ( !(unsigned __int8)String::Compare((String *)v12, (const char **)&v46) ) /*0x7a7447*/
          {
            v12 = *(_DWORD *)(v12 + 112); /*0x7a744d*/
            if ( !v12 ) /*0x7a7452*/
              goto LABEL_43; /*0x7a7452*/
          }
        }
        else
        {
LABEL_43:
          if ( v46.occupant < 100 ) /*0x7a7459*/
          {
            String::Assign_Bool((String *)&v46, a4 + 36); /*0x7a746e*/
            String::ToLower((String *)&v46); /*0x7a7477*/
            strcat(byte_B78620, String::GetOrEmpty((String *)&v46)); /*0x7a74a6*/
            strcat(byte_B78620, asc_8318B8); /*0x7a74d1*/
            ++v46.?; /*0x7a74df*/
          }
        }
        if ( v46.? > 20 ) /*0x7a74e8*/
        {
          (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(*(_DWORD *)g_UIPointerTable + 20))( /*0x7a7516*/
            g_UIPointerTable,
            stru_B76188.__pad_20,
            g_WOL_GameConfig,
            byte_B78620,
            g_NetworkRematchState & 0xFFFF00,
            -1,
            0,
            0);
          (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(_DWORD *)g_UIPointerTable + 56))( /*0x7a753f*/
            g_UIPointerTable,
            stru_B76188.__pad_20,
            g_WOL_GameConfig,
            byte_B78620,
            g_NetworkRematchState & 0xFFFF00);
          v46.? = 0; /*0x7a754e*/
          memset(byte_B78620, 0, sizeof(byte_B78620)); /*0x7a7556*/
        }
        if ( stru_B76AC4.ambientSoundController[4] && !dword_B77E4C ) /*0x7a756c*/
        {
          String::Assign((String *)&v46.?, a4 + 36); /*0x7a7581*/
          owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a7586*/
          v14 = 0; /*0x7a758b*/
          v15 = 0; /*0x7a758d*/
          if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x7a7591*/
          {
LABEL_56:
            v18 = -1; /*0x7a75d0*/
          }
          else
          {
            v16 = 0; /*0x7a7593*/
            while ( 1 ) /*0x7a7595*/
            {
              if ( v16 >= 0 && v15 < owningHouseIndex ) /*0x7a759b*/
                v14 = (char *)g_WOL_UserList.nextObject + v16; /*0x7a75a2*/
              v17 = String::GetOrEmpty_Alt((String *)&v46.?); /*0x7a75ad*/
              if ( !_strcmpi(v17, v14 + 36) ) /*0x7a75b3*/
                break; /*0x7a75b3*/
              owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a75c3*/
              ++v15; /*0x7a75c8*/
              v16 += 108; /*0x7a75c9*/
              if ( v15 >= g_WOL_UserList.owningHouseIndex ) /*0x7a75ce*/
                goto LABEL_56; /*0x7a75ce*/
            }
            v18 = v15; /*0x7a7662*/
          }
          v19 = (void *)(148 * v18 + 12021312); /*0x7a75e1*/
          memset(v19, 0, 0x94u); /*0x7a75ec*/
          strcpy((char *)v19, a4 + 36); /*0x7a7602*/
          v20 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7a7610*/
          if ( _strcmpi((char *)a4 + 36, v20) ) /*0x7a7617*/
          {
            if ( dword_A8DA84 == 1 ) /*0x7a762e*/
            {
              v21 = CharToWideString((_BYTE *)a4 + 36); /*0x7a7632*/
              wcscpy((wchar_t *)&stru_A8D600.Network_field_0x10, (const wchar_t *)v21); /*0x7a763d*/
            }
            v22 = __2_YAPAXI_Z(0x85u); /*0x7a764a*/
            v23 = v22; /*0x7a764f*/
            if ( v22 ) /*0x7a7656*/
              Waypoint::InitInvalid((Waypoint *)(v22 + 40)); /*0x7a765b*/
            else
              v23 = 0; /*0x7a7669*/
            memset((void *)v23, 0, 0x84u); /*0x7a7675*/
            *(_BYTE *)(v23 + 132) = 0; /*0x7a767b*/
            String::Assign((String *)&v46.nextObject, a4 + 36); /*0x7a767c*/
            CharStringToWide((wchar_t **)&v46.owningHouseIndex, (const char **)&v46.nextObject); /*0x7a7689*/
            DeleteAndZero((ObjectClass *)&v46.nextObject); /*0x7a7692*/
            v24 = WideString::GetOrEmpty((wchar_t **)&v46.owningHouseIndex); /*0x7a769b*/
            wcscpy((wchar_t *)v23, v24); /*0x7a76a2*/
            v25 = *((_DWORD *)a4 + 6); /*0x7a76a7*/
            v46.? = 0; /*0x7a76af*/
            v46.? = 0; /*0x7a76b7*/
            LOWORD(v46.?) = 0; /*0x7a76bc*/
            v26 = ntohl(v25); /*0x7a76c1*/
            HIBYTE(v46.?) = v26; /*0x7a76ca*/
            LOBYTE(v46.?) = HIBYTE(v26); /*0x7a76d6*/
            BYTE2(v46.?) = BYTE1(v26); /*0x7a76da*/
            BYTE1(v46.?) = BYTE2(v26); /*0x7a76ef*/
            NetworkAddress::Assign((NetworkAddress *)&v46.attachedTag, &v46.?, (int)&v46.?, 0); /*0x7a76f3*/
            attachedBomb = v46.attachedBomb; /*0x7a7701*/
            *(_DWORD *)(v23 + 40) = v46.attachedTag; /*0x7a7705*/
            v28 = v46.ambientSoundController[0]; /*0x7a7707*/
            *(_DWORD *)(v23 + 44) = attachedBomb; /*0x7a770b*/
            *(_DWORD *)(v23 + 48) = v28; /*0x7a7710*/
            SessionClass::SetPlayerOption((int *)v23, -2); /*0x7a7713*/
            SessionClass::SetPlayerColor((int *)v23, -2); /*0x7a771c*/
            SessionClass::SetOption((int *)v23, -2); /*0x7a7725*/
            SessionClass::SetOption2((int *)v23, -2); /*0x7a772e*/
            if ( dword_A8DA84 < dword_A8DA7C /*0x7a776a*/
              || (byte_A8DA81 || !dword_A8DA7C)
              && dword_A8DA88 > 0
              && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA74 + 8))(
                   &stru_A8DA74,
                   dword_A8DA7C + dword_A8DA88,
                   0) )
            {
              v29 = dword_A8DA84++; /*0x7a7777*/
              dword_A8DA78[v29] = v23; /*0x7a7786*/
            }
            DeleteAndZero::Alt((DeleteAndZero *)&v46.owningHouseIndex); /*0x7a778d*/
          }
          DeleteAndZero((ObjectClass *)&v46.?); /*0x7a7796*/
        }
      }
      if ( strlen(byte_B78620) ) /*0x7a77b9*/
      {
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(*(_DWORD *)g_UIPointerTable + 20))( /*0x7a77f1*/
          g_UIPointerTable,
          stru_B76188.__pad_20,
          g_WOL_GameConfig,
          byte_B78620,
          g_NetworkRematchState & 0xFFFF00,
          -1,
          0,
          0);
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(_DWORD *)g_UIPointerTable + 56))( /*0x7a781a*/
          g_UIPointerTable,
          stru_B76188.__pad_20,
          g_WOL_GameConfig,
          byte_B78620,
          g_NetworkRematchState & 0xFFFF00);
      }
      if ( stru_B76AC4.ambientSoundController[4] ) /*0x7a7824*/
      {
        if ( !BYTE2(v46.?) ) /*0x7a7830*/
        {
          v30 = 0; /*0x7a7837*/
          if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a783b*/
          {
            v31 = 0; /*0x7a783d*/
            while ( 1 ) /*0x7a7841*/
            {
              if ( v31 >= 0 && v30 < g_WOL_UserList.owningHouseIndex ) /*0x7a7849*/
              {
                qmemcpy(&v46.ambientSoundController[1], (char *)g_WOL_UserList.nextObject + v31, 0x6Cu); /*0x7a785c*/
                v32 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7a7863*/
                if ( !_strcmpi((char *)&v46.customSound, v32) ) /*0x7a786e*/
                  break; /*0x7a786e*/
              }
              ++v30; /*0x7a787f*/
              v31 += 108; /*0x7a7880*/
              if ( v30 >= g_WOL_UserList.owningHouseIndex ) /*0x7a7885*/
                goto LABEL_85; /*0x7a7885*/
            }
            LeaveChannelWOL((const char *)&v46.ambientSoundController[1]); /*0x7a788d*/
          }
        }
LABEL_85:
        if ( stru_B76AC4.ambientSoundController[4] ) /*0x7a7899*/
        {
          if ( !dword_B77E4C && g_WOL_UserList.owningHouseIndex == 1 ) /*0x7a78af*/
          {
            v33 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7a78b6*/
            if ( !_strcmpi((char *)a4 + 36, v33) ) /*0x7a78c7*/
              LeaveChannelWOL(a4); /*0x7a78d5*/
          }
          if ( stru_B76AC4.ambientSoundController[4] ) /*0x7a78e1*/
          {
            dword_AC1178 = 1; /*0x7a78ec*/
            if ( !dword_B77E4C ) /*0x7a78f8*/
            {
              v34 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x7a78ff*/
              EnablePlayerSlotControls(v34, 1u); /*0x7a7908*/
            }
            Game::ResetReadyStates(); /*0x7a790d*/
            v46.owningHouseIndex = 0; /*0x7a7916*/
            LOBYTE(v46.fallRate) = 0; /*0x7a791e*/
            ReadRegistryOptionsWOL((ObjectClass *)&v46.owningHouseIndex); /*0x7a7923*/
            ComPtr::Constructor((ComPtr *)&v46.?); /*0x7a792c*/
            v46.? = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x7a793a*/
            if ( (unsigned __int8)Flag::IsNot2((Flag *)&v46.owningHouseIndex) ) /*0x7a793e*/
            {
              PlayerProfile = LoadPlayerProfile((ObjectClass *)&v46.?, (const char **)&g_WindowManager.__pad_EC[684]); /*0x7a7950*/
              ComPtr::Set((ComPtr *)&v46.?, (int)PlayerProfile->?); /*0x7a795d*/
              v46.? = &rc_ptr<PlayerProfile>::`vftable'; /*0x7a7966*/
              ComPtr::Release((ComPtr *)&v46.?); /*0x7a796a*/
            }
            else
            {
              ComPtr::Set((ComPtr *)&v46.?, stru_B75E48.ComPtr_field_0x04); /*0x7a797c*/
            }
            SessionClass::AssignSide((SessionClass *)&dword_A8B238, *(_DWORD *)(v46.? + 28), 0); /*0x7a7990*/
            SessionClass::AssignColor((SessionClass *)&dword_A8B238, *(_DWORD *)(v46.? + 32), 0); /*0x7a79a4*/
            v36 = dword_A8B244; /*0x7a79b0*/
            if ( !g_MenuStateFlags ) /*0x7a79b5*/
              goto LABEL_105; /*0x7a79b5*/
            if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x7a79c4*/
            {
              SessionClass::AssignSide((SessionClass *)&dword_A8B238, -3, 0); /*0x7a79cf*/
              SessionClass::AssignColor((SessionClass *)&dword_A8B238, -2, 0); /*0x7a79dd*/
              v36 = dword_A8B244; /*0x7a79e2*/
            }
            if ( !g_MenuStateFlags ) /*0x7a79ef*/
            {
LABEL_105:
              if ( v36 != 3 && v36 != 1 && v36 != 2 && Session::GetPlayerOption((Session *)&dword_A8B238) == -3 ) /*0x7a7a0d*/
              {
                if ( dword_A8DA84 ) /*0x7a7a18*/
                {
                  PlayerSide = SessionClass::GetPlayerSide((int *)*dword_A8DA78); /*0x7a7a21*/
                  SessionClass::AssignSide((SessionClass *)&dword_A8B238, PlayerSide, 0); /*0x7a7a2c*/
                  PlayerColor = SessionClass::GetPlayerColor((SessionClass *)*dword_A8DA78); /*0x7a7a40*/
                  SessionClass::AssignColor((SessionClass *)&dword_A8B238, PlayerColor, 0); /*0x7a7a41*/
                }
                else
                {
                  SessionClass::AssignSide((SessionClass *)&dword_A8B238, -2, 0); /*0x7a7a4a*/
                  SessionClass::AssignColor((SessionClass *)&dword_A8B238, -2, 0); /*0x7a7a58*/
                }
              }
            }
            Network::GetAddress((Network *)&stru_A8DBC0, &v46.?, (int)&v46.?, (_WORD *)&v46.? + 1); /*0x7a7a71*/
            v44 = dword_A8E228; /*0x7a7a8a*/
            v43 = (unsigned __int16)dword_ABFEC8; /*0x7a7a8b*/
            vtable2 = v46.?; /*0x7a7a8c*/
            v40 = Session::GetPlayerColor((Session *)&dword_A8B238); /*0x7a7a9b*/
            PlayerOption = Session::GetPlayerOption((Session *)&dword_A8B238); /*0x7a7aa1*/
            sprintf(v47, "R%d,%d,%d,%d,%x,%x,%x", PlayerOption, v40, -2, -2, vtable2, v43, v44); /*0x7a7ab4*/
            Debug::Log(); /*0x7a7ac6*/
            if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a7ad5*/
            {
              qmemcpy(&v46.ambientSoundController[1], g_WOL_UserList.nextObject, 0x6Cu); /*0x7a7af3*/
              (*(void (__stdcall **)(LPVOID, int *, char *))(*(_DWORD *)ppv + 56))( /*0x7a7afd*/
                ppv,
                &v46.ambientSoundController[1],
                v47);
            }
            v46.? = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x7a7b04*/
            ComPtr::Release((ComPtr *)&v46.?); /*0x7a7b08*/
          }
        }
      }
      if ( (dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2) /*0x7a7b2c*/
        && !stru_B76AC4.ambientSoundController[4]
        && !RequestMatchWOL(v45) )
      {
        SetEvent(hEvent); /*0x7a7b3b*/
      }
      DisplayRankingsWOL(0); /*0x7a7b45*/
    }
    DeleteAndZero(&v46); /*0x7a7b4e*/
  }
  return 0; /*0x7a7b53*/
}



// ==== 0x007A7B60  CChatEventSink::DispatchStub_23  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_23(
        CChatEventSink *this,
        int a2,
        int a3,
        int a4,
        wchar_t *a5)
{
  Network *v5; // edi
  int owningHouseIndex; // esi
  int v8; // ebp
  int v9; // ebx
  int v10; // edi
  HWND v11; // eax
  HWND v12; // eax
  char *v13; // edi
  int v14; // eax
  int v15; // eax
  ObjectClass *nextObject; // edx
  Network *v17; // [esp-Ch] [ebp-A0h]
  char v18; // [esp+7h] [ebp-8Dh]
  String v19; // [esp+8h] [ebp-8Ch] BYREF
  int v20; // [esp+10h] [ebp-84h]
  int v21; // [esp+14h] [ebp-80h]
  int v22; // [esp+18h] [ebp-7Ch]
  int v23; // [esp+20h] [ebp-74h]
  char v24[108]; // [esp+28h] [ebp-6Ch] BYREF

  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a7b67*/
  v18 = 1; /*0x7a7b71*/
  v22 = g_WOL_UserList.owningHouseIndex; /*0x7a7b76*/
  v21 = 0; /*0x7a7b7a*/
  dword_B76478 = Timer::GetTicks(); /*0x7a7b87*/
  dword_B7647C = v23; /*0x7a7b90*/
  dword_B76480 = 0; /*0x7a7b9e*/
  if ( byte_B77E27 ) /*0x7a7ba4*/
    return 0; /*0x7a7ba6*/
  v17 = v5; /*0x7a7bbb*/
  stru_B77D80.HashTable_field_0x4C = 1; /*0x7a7bbe*/
  v20 = a4; /*0x7a7bc8*/
  if ( a4 ) /*0x7a7bcc*/
  {
    while ( 1 ) /*0x7a7be3*/
    {
      ++v21; /*0x7a7be3*/
      String::Assign((String *)&v19.m_3[1], (const char *)(v20 + 36)); /*0x7a7be7*/
      String::ToLower((String *)&v19.m_3[1]); /*0x7a7bf0*/
      v8 = 0; /*0x7a7bf5*/
      if ( owningHouseIndex <= 0 ) /*0x7a7bf9*/
        break; /*0x7a7bf9*/
      v9 = 0; /*0x7a7bff*/
      while ( 1 ) /*0x7a7c01*/
      {
        if ( v9 >= 0 && v8 < g_WOL_UserList.owningHouseIndex ) /*0x7a7c0b*/
        {
          qmemcpy(v24, (char *)g_WOL_UserList.nextObject + v9, sizeof(v24)); /*0x7a7c1f*/
          owningHouseIndex = v22; /*0x7a7c21*/
        }
        String::Assign(&v19, &v24[36]); /*0x7a7c2e*/
        String::ToLower(&v19); /*0x7a7c37*/
        if ( (unsigned __int8)String::Compare((String *)&v19.m_3[1], (const char **)&v19) ) /*0x7a7c45*/
          break; /*0x7a7c45*/
        DeleteAndZero((ObjectClass *)&v19); /*0x7a7c52*/
        ++v8; /*0x7a7c57*/
        v9 += 108; /*0x7a7c58*/
        if ( v8 >= owningHouseIndex ) /*0x7a7c5d*/
          goto LABEL_15; /*0x7a7c5d*/
      }
      DeleteAndZero((ObjectClass *)&v19); /*0x7a7c61*/
      if ( v8 >= owningHouseIndex ) /*0x7a7c68*/
        break; /*0x7a7c68*/
      v20 = *(_DWORD *)(v20 + 32); /*0x7a7c75*/
      v10 = v20; /*0x7a7c72*/
      DeleteAndZero((ObjectClass *)&v19.m_3[1]); /*0x7a7c79*/
      if ( !v10 ) /*0x7a7c80*/
        goto LABEL_16; /*0x7a7c80*/
    }
LABEL_15:
    v18 = 0; /*0x7a7c87*/
    DeleteAndZero((ObjectClass *)&v19.m_3[1]); /*0x7a7c90*/
  }
LABEL_16:
  if ( v21 == owningHouseIndex && v18 ) /*0x7a7ca1*/
  {
    if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x7a7cd9*/
    {
      v11 = (HWND)Dialog::FindByHandle((Dialog *)0x117); /*0x7a7ce0*/
      CloseDialog(v11, 0); /*0x7a7ce9*/
    }
    v12 = (HWND)Dialog::FindByHandle((Dialog *)0xCF); /*0x7a7cf3*/
    CloseDialog(v12, 0); /*0x7a7cfc*/
    *(_DWORD *)&g_WOL_BuddyList.__pad_20[4] = a5; /*0x7a7d14*/
    *(_DWORD *)dword_B77D6C = g_NetworkRematchState; /*0x7a7d1e*/
    dword_B73814 = 8960; /*0x7a7d27*/
    *(_DWORD *)g_WOL_BuddyList.__pad_14 = stru_B76AC4.customSound_controller[4]; /*0x7a7d31*/
    if ( *(_DWORD *)&dword_A8B238 == 4 && (stru_B76AC4.health & 0x100) != 0 ) /*0x7a7d47*/
      *(_DWORD *)g_WOL_BuddyList.__pad_14 = 2; /*0x7a7d49*/
    v13 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7a7d59*/
    v14 = g_WOL_UserList.owningHouseIndex; /*0x7a7d66*/
    strcpy((char *)&g_WebBrowserConfig.location[2], v13); /*0x7a7d77*/
    if ( v14 > 0 && g_WOL_UserList.nextObject ) /*0x7a7d8b*/
      strcpy(byte_B779E0, (const char *)&g_WOL_UserList.nextObject->occupant); /*0x7a7da7*/
    *(_DWORD *)dword_B77788 = time(0); /*0x7a7dbc*/
    Debug::Log(); /*0x7a7dc1*/
    if ( a3 ) /*0x7a7dd2*/
      dword_B77DD4 = (unsigned __int8)*(_DWORD *)(a3 + 32); /*0x7a7ddd*/
    byte_B77E26 = 0; /*0x7a7dea*/
    byte_B77E27 = 1; /*0x7a7df1*/
    Network::SyncPlayerList(v17); /*0x7a7df8*/
    g_NetworkLobbyState = 2; /*0x7a7e03*/
    Debug::Log(); /*0x7a7e0f*/
    v15 = 0; /*0x7a7e1d*/
    if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a7e21*/
    {
      nextObject = g_WOL_UserList.nextObject; /*0x7a7e23*/
      while ( 1 ) /*0x7a7e29*/
      {
        if ( v15 >= 0 && v15 < g_WOL_UserList.owningHouseIndex ) /*0x7a7e2f*/
          qmemcpy(&g_WebBrowserConfig.occupant, nextObject, 0x6Cu); /*0x7a7e3d*/
        if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x7a7e46*/
          break; /*0x7a7e46*/
        ++v15; /*0x7a7e48*/
        nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x7a7e49*/
        if ( v15 >= g_WOL_UserList.owningHouseIndex ) /*0x7a7e4e*/
          goto LABEL_41; /*0x7a7e4e*/
      }
      if ( &g_WebBrowserConfig != (ObjectClass *)-36 ) /*0x7a7e59*/
        BulkCharToWide(word_A8E258, (unsigned __int8 *)&g_WebBrowserConfig.ambientSoundController[3], -1); /*0x7a7e67*/
    }
LABEL_41:
    dword_A8E2AC = -1; /*0x7a7e6c*/
    dword_A8E04C = CComObject_CChatEventSink___ATL::DispatchConnectionPairs(&stru_A8DBC0.onBridge); /*0x7a7e82*/
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
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_22(
        CChatEventSink *this,
        int a2,
        int a3,
        int a4,
        char *Source)
{
  ObjectClass *v5; // edi
  char *v6; // esi
  bool v7; // bl
  char *Flagged; // esi
  char *v9; // eax
  wchar_t *v10; // eax
  int *v11; // eax
  SessionClass *v12; // esi
  HWND Current; // ebp
  Skirmish *v15; // eax
  int v16; // edx
  bool v17; // bl
  HWND DlgItem; // eax
  HWND v19; // eax
  HWND v20; // eax
  HWND v21; // eax
  char v22; // [esp+7h] [ebp-B9h]
  DeleteAndZero v23; // [esp+8h] [ebp-B8h] BYREF
  int Buffer[16]; // [esp+14h] [ebp-ACh] BYREF
  _BYTE v25[108]; // [esp+54h] [ebp-6Ch] BYREF

  if ( (byte_B78600 & 1) == 0 ) /*0x7a7ead*/
  {
    byte_B78600 |= 1u; /*0x7a7eb9*/
    dword_B78608 = Timer::GetTicks(); /*0x7a7ec9*/
    atexit(nullsub_265); /*0x7a7ece*/
  }
  if ( a2 < 0 ) /*0x7a7ee3*/
    return 0; /*0x7a7ee3*/
  v6 = _strdup(Source); /*0x7a7ef6*/
  v7 = SetupNetworkLobbyDialog(v6, (void *)(a4 + 36)); /*0x7a7f0d*/
  free(v6); /*0x7a7f0f*/
  if ( BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7a7f1e*/
    return 0; /*0x7a7f1e*/
  if ( g_NetworkLobbyState ) /*0x7a7f2b*/
    return 0; /*0x7a7f2b*/
  if ( *Source == 90 ) /*0x7a7f35*/
    return 0; /*0x7a7f35*/
  if ( *Source == 87 ) /*0x7a7f3d*/
    return 0; /*0x7a7f3d*/
  v22 = 0; /*0x7a7f43*/
  Flagged = GameSettings::FindFlagged(); /*0x7a7f4d*/
  if ( Flagged ) /*0x7a7f51*/
  {
    v9 = String::GetOrEmpty_Alt((String *)&g_WindowManager.__pad_EC[684]); /*0x7a7f58*/
    if ( !_strcmpi(Flagged + 36, v9) ) /*0x7a7f62*/
      return 0; /*0x7a7f6c*/
  }
  if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x7a7f84*/
  {
    CharStringToWide((wchar_t **)&v23, (const char **)&g_WindowManager.__pad_EC[684]); /*0x7a7f93*/
    v10 = WideString::GetOrEmpty((wchar_t **)&v23); /*0x7a7f9c*/
    v11 = (int *)Player::FindByName((Player *)v10); /*0x7a7fa3*/
    v12 = (SessionClass *)v11; /*0x7a7fa8*/
    if ( v11 /*0x7a7fed*/
      && SessionClass::GetPlayerSide(v11) >= 0
      && SessionClass::GetPlayerColor(v12) >= 0
      && *Source >= 48
      && *Source <= 57
      && g_WOL_UserList.owningHouseIndex == 2 )
    {
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 60))(ppv, g_INI_Key_A1); /*0x7a7ffc*/
    }
    DeleteAndZero::Alt(&v23); /*0x7a8003*/
    return 0; /*0x7a8014*/
  }
  Current = (HWND)Dialog::GetCurrent(); /*0x7a801c*/
  if ( !g_UIControlState ) /*0x7a8025*/
  {
    if ( v7 ) /*0x7a802d*/
    {
      v22 = 1; /*0x7a8033*/
      dword_B78608 = Timer::GetTicks(); /*0x7a8046*/
      dword_B7860C = v23.DeleteAndZero_field_0x04; /*0x7a804b*/
      Debug::Log(); /*0x7a8051*/
    }
    if ( Timer::GetTicks() - dword_B78608 > 900 ) /*0x7a806e*/
    {
      v15 = g_UIControlState; /*0x7a8070*/
      if ( (!g_UIControlState || !*(_DWORD *)g_UIControlState) && !byte_B77E2C ) /*0x7a8085*/
      {
        if ( !byte_A8B8E0[0] /*0x7a80a8*/
          || (LOBYTE(v15) = dword_A8BB08, FindAndValidateMap(byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, (int)v15, 0)) )
        {
          dword_B78608 = Timer::GetTicks(); /*0x7a80d2*/
          dword_B7860C = v23.DeleteAndZero_field_0x04; /*0x7a80d7*/
        }
        else
        {
          v22 = 1; /*0x7a80b6*/
          Debug::Log(); /*0x7a80bb*/
        }
      }
    }
    if ( !(unsigned __int8)IsRandMap::Sed2((IsRandMap *)&dword_A8B238) ) /*0x7a80e2*/
    {
      LOBYTE(v16) = dword_A8BB08; /*0x7a80ef*/
      if ( !FindAndValidateMap(byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, v16, 0) /*0x7a813d*/
        || (RawFileClass::Construct((RawFileClass *)Buffer, (int)byte_A8B8E0),
            v17 = (unsigned __int8)FileClass::Open((RawFileClass *)Buffer, 0) != 0,
            RawFileClass::Dtor((RawFileClass *)Buffer),
            v17) )
      {
        if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x7a814c*/
        {
          if ( stru_B76AC4.customSound_controller[4] /*0x7a8165*/
            || (HIBYTE(v23.DeleteAndZero_field_0x08) = BYTE1(stru_B76AC4.health) & 1, (stru_B76AC4.health & 0x100) != 0) )
          {
            if ( *(_DWORD *)(*dword_A8DA78 + 119) ) /*0x7a816f*/
            {
              *(_DWORD *)(*dword_A8DA78 + 119) = 0; /*0x7a817b*/
              Network::SendOptionsGame(aA0); /*0x7a8182*/
              DlgItem = GetDlgItem(Current, 1439); /*0x7a818f*/
              EnableWindow(DlgItem, 0); /*0x7a8196*/
            }
          }
        }
      }
      else
      {
        v22 = 0; /*0x7a813f*/
      }
      if ( Dialog::GetCurrentType() == 201 ) /*0x7a81a6*/
      {
        v19 = (HWND)Dialog::GetCurrent(); /*0x7a81ac*/
        InvalidateRect(v19, 0, 0); /*0x7a81b2*/
      }
    }
    if ( v22 ) /*0x7a81be*/
    {
      sprintf((char *const)Buffer, "P%s", byte_A8B8E0); /*0x7a81cf*/
      if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a81de*/
        qmemcpy(v25, g_WOL_UserList.nextObject, sizeof(v25)); /*0x7a81ef*/
      (*(void (__stdcall **)(LPVOID, _BYTE *, int *))(*(_DWORD *)ppv + 56))(ppv, v25, Buffer); /*0x7a8203*/
      Debug::Log(); /*0x7a820b*/
      Event_Play(v5); /*0x7a8213*/
    }
    return 0; /*0x7a8224*/
  }
  v20 = GetDlgItem(Current, 1823); /*0x7a8233*/
  if ( v20 ) /*0x7a823d*/
    ShowWindow(v20, 0); /*0x7a8242*/
  v21 = GetDlgItem(Current, 1128); /*0x7a824c*/
  ShowWindow(v21, 1); /*0x7a824f*/
  return 0; /*0x7a7fbd*/
}



// ==== 0x007A8260  CChatEventSink::HandleLobbyPlayerUpdate  this=CChatEventSink  sig=csp ====
int __stdcall CChatEventSink::HandleLobbyPlayerUpdate(CChatEventSink *this, int a2, int a3, int a4)
{
  int owningHouseIndex; // eax
  char *v5; // ebx
  int v6; // esi
  int v7; // edi
  char *v8; // eax
  __int16 v9; // bx
  int v10; // edi
  char **v11; // esi
  char *v12; // eax
  int v14; // edi
  wchar_t **v15; // esi
  char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  char *v19; // eax
  char *v20; // eax
  char *v21; // eax
  int v22; // esi
  _DWORD *v23; // eax
  int v24; // edx
  int v25; // ecx
  char *v26; // eax
  unsigned int v27; // esi
  char *v28; // eax
  int v29; // ecx
  HWND v30; // ebp
  int v31; // esi
  int PlayerSide; // eax
  int *v33; // ebx
  int v34; // edx
  int v35; // eax
  char *v36; // eax
  int v37; // eax
  char *v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // esi
  int v42; // eax
  unsigned int v43; // ecx
  int v44; // eax
  _DWORD *v45; // edx
  _DWORD *v46; // eax
  int v47; // eax
  int v48; // edi
  int v49; // esi
  b... [22709 chars total]



// ==== 0x007A8DA0  CChatEventSink::DispatchStub_16  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_16(
        CChatEventSink *this,
        int a2,
        int a3,
        const char *a4,
        char *String1)
{
  char *v6; // edi
  const char *v7; // esi
  bool v8; // bl
  int v9; // edi
  char *v10; // esi
  wchar_t *v11; // eax

  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) && a2 >= 0 ) /*0x7a8db5*/
  {
    if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x7a8dcd*/
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
      String::Assign((String *)&String1, String1); /*0x7a8df8*/
      v7 = a4; /*0x7a8dfd*/
      if ( a4 ) /*0x7a8e03*/
      {
        if ( (*a4 & 1) != 0 ) /*0x7a8e0c*/
        {
          v8 = 1; /*0x7a8e0e*/
        }
        else if ( Dialog::FindByHandle((Dialog *)0xC2) ) /*0x7a8e17*/
        {
          v8 = 1; /*0x7a8e20*/
        }
        else if ( Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7a8e29*/
        {
          v8 = 1; /*0x7a8e32*/
        }
        else
        {
          v8 = g_WOL_BuddyList.DynamicVector_field_0x10 != 0; /*0x7a8e3d*/
        }
      }
      else
      {
        v8 = 0; /*0x7a8e05*/
      }
      DeleteAndZero((ObjectClass *)&String1); /*0x7a8e44*/
      if ( v8 && IsBuddyOrIgnoreWOL(v7) ) /*0x7a8e50*/
      {
        String::Assign((String *)&String1, v6); /*0x7a8e5e*/
        CharStringToWide((wchar_t **)&a2, (const char **)&String1); /*0x7a8e6b*/
        DeleteAndZero((ObjectClass *)&String1); /*0x7a8e74*/
        v9 = 61680; /*0x7a8e7b*/
        if ( (*v7 & 1) != 0 ) /*0x7a8e83*/
          v9 = 16776960; /*0x7a8e85*/
        v10 = (char *)(v7 + 36); /*0x7a8e8b*/
        if ( _strcmpi(unk_A8B380, v10) ) /*0x7a8e94*/
        {
          v11 = WideString::GetOrEmpty((wchar_t **)&a2); /*0x7a8ea4*/
          Dialog::ShowMessage(v9, (size_t)aHsS_1, v10, v11); /*0x7a8eb1*/
        }
        DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x7a8ebd*/
      }
    }
  }
  return 0; /*0x7a8de7*/
}



// ==== 0x007A8ED0  CChatEventSink::DispatchStub_40  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_40(
        CChatEventSink *this,
        int a2,
        int a3,
        const char *a4,
        wchar_t *String)
{
  const char *v6; // esi
  bool v7; // zf
  void *DynamicVector_field_0x10; // eax
  int v9; // edi
  char *v10; // esi
  wchar_t *v11; // eax

  if ( BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7a8ed8*/
    return 0; /*0x7a8eda*/
  if ( a2 < 0 ) /*0x7a8ee6*/
    return 0; /*0x7a8ee8*/
  WideString::Assign((wchar_t **)&a2, String); /*0x7a8ef7*/
  v6 = a4; /*0x7a8efc*/
  if ( a4 ) /*0x7a8f02*/
  {
    if ( (*a4 & 1) != 0 || Dialog::FindByHandle((Dialog *)0xC2) || Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7a8f1c*/
      goto LABEL_21; /*0x7a8f1c*/
    v7 = (unsigned __int8)WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7a8f2e*/
    DynamicVector_field_0x10 = g_WOL_BuddyList.DynamicVector_field_0x10; /*0x7a8f30*/
    if ( v7 ) /*0x7a8f35*/
      DynamicVector_field_0x10 = (void *)dword_B779DC; /*0x7a8f37*/
    if ( DynamicVector_field_0x10 ) /*0x7a8f43*/
    {
LABEL_21:
      if ( IsBuddyOrIgnoreWOL(v6) ) /*0x7a8f56*/
      {
        v9 = 61680; /*0x7a8f71*/
        if ( (*v6 & 1) != 0 ) /*0x7a8f79*/
          v9 = 16776960; /*0x7a8f7b*/
        v10 = (char *)(v6 + 36); /*0x7a8f81*/
        if ( _strcmpi(unk_A8B380, v10) ) /*0x7a8f8a*/
        {
          v11 = WideString::GetOrEmpty((wchar_t **)&a2); /*0x7a8f9a*/
          Dialog::ShowMessage(v9, (size_t)aHsS_1, v10, v11); /*0x7a8fa7*/
        }
      }
    }
  }
  DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x7a8fb3*/
  return 0; /*0x7a8edc*/
}



// ==== 0x007A8FC0  CChatEventSink::DispatchStub_17  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_17(
        CChatEventSink *this,
        int a2,
        const char *a3,
        char *String1)
{
  char *v5; // edi
  const char *v6; // esi
  bool v7; // bl
  int v8; // edi
  char *v9; // esi
  wchar_t *v10; // eax

  if ( BYTE1(stru_B77D80.HashTable_field_0x40) || a2 < 0 ) /*0x7a8fd5*/
    return 0; /*0x7a90fc*/
  if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x7a8fed*/
  {
    v5 = String1; /*0x7a9027*/
    String::Assign((String *)&String1, String1); /*0x7a9031*/
    v6 = a3; /*0x7a9036*/
    if ( a3 ) /*0x7a903c*/
    {
      if ( (*a3 & 1) != 0 ) /*0x7a9045*/
      {
        v7 = 1; /*0x7a9047*/
      }
      else if ( Dialog::FindByHandle((Dialog *)0xC2) ) /*0x7a9050*/
      {
        v7 = 1; /*0x7a9059*/
      }
      else if ( Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7a9062*/
      {
        v7 = 1; /*0x7a906b*/
      }
      else
      {
        v7 = g_WOL_BuddyList.DynamicVector_field_0x10 != 0; /*0x7a9076*/
      }
    }
    else
    {
      v7 = 0; /*0x7a903e*/
    }
    DeleteAndZero((ObjectClass *)&String1); /*0x7a907d*/
    if ( v7 && IsBuddyOrIgnoreWOL(v6) ) /*0x7a9089*/
    {
      String::Assign((String *)&String1, v5); /*0x7a9097*/
      CharStringToWide((wchar_t **)&a2, (const char **)&String1); /*0x7a90a4*/
      DeleteAndZero((ObjectClass *)&String1); /*0x7a90ad*/
      v8 = 16744576; /*0x7a90b4*/
      if ( (*v6 & 1) != 0 ) /*0x7a90bc*/
        v8 = 16776960; /*0x7a90be*/
      v9 = (char *)(v6 + 36); /*0x7a90c4*/
      if ( _strcmpi(unk_A8B380, v9) ) /*0x7a90cd*/
      {
        v10 = WideString::GetOrEmpty((wchar_t **)&a2); /*0x7a90dd*/
        Dialog::ShowMessage(v8, (size_t)aHsS_2, v9, v10); /*0x7a90ea*/
      }
      DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x7a90f6*/
    }
    return 0; /*0x7a90f6*/
  }
  if ( (*a3 & 1) != 0 ) /*0x7a8ff6*/
    HandleWOLMatchMessage(String1, 1); /*0x7a8ffe*/
  else
    Debug::Log(); /*0x7a9018*/
  return 0; /*0x7a9003*/
}



// ==== 0x007A9110  CChatEventSink::DispatchStub_41  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_41(
        CChatEventSink *this,
        int a2,
        const char *a3,
        wchar_t *String)
{
  const char *v5; // esi
  bool v6; // zf
  void *DynamicVector_field_0x10; // eax
  int v8; // edi
  char *v9; // esi
  wchar_t *v10; // eax

  if ( BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7a9118*/
    return 0; /*0x7a911a*/
  if ( a2 < 0 ) /*0x7a9126*/
    return 0; /*0x7a9128*/
  WideString::Assign((wchar_t **)&a2, String); /*0x7a9137*/
  v5 = a3; /*0x7a913c*/
  if ( a3 ) /*0x7a9142*/
  {
    if ( (*a3 & 1) != 0 || Dialog::FindByHandle((Dialog *)0xC2) || Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7a915c*/
      goto LABEL_21; /*0x7a915c*/
    v6 = (unsigned __int8)WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7a916e*/
    DynamicVector_field_0x10 = g_WOL_BuddyList.DynamicVector_field_0x10; /*0x7a9170*/
    if ( v6 ) /*0x7a9175*/
      DynamicVector_field_0x10 = (void *)dword_B779DC; /*0x7a9177*/
    if ( DynamicVector_field_0x10 ) /*0x7a9183*/
    {
LABEL_21:
      if ( IsBuddyOrIgnoreWOL(v5) ) /*0x7a9196*/
      {
        v8 = 16744576; /*0x7a91b1*/
        if ( (*v5 & 1) != 0 ) /*0x7a91b9*/
          v8 = 16776960; /*0x7a91bb*/
        v9 = (char *)(v5 + 36); /*0x7a91c1*/
        if ( _strcmpi(unk_A8B380, v9) ) /*0x7a91ca*/
        {
          v10 = WideString::GetOrEmpty((wchar_t **)&a2); /*0x7a91da*/
          Dialog::ShowMessage(v8, (size_t)aHsS_2, v9, v10); /*0x7a91e7*/
        }
      }
    }
  }
  DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x7a91f3*/
  return 0; /*0x7a911c*/
}



// ==== 0x007A9200  CChatEventSink::DispatchStub_28  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_28(
        CChatEventSink *this,
        int a2,
        const char *a3,
        const char *a4)
{
  bool v5; // zf
  void *DynamicVector_field_0x10; // eax
  char v7; // al
  wchar_t *v8; // eax
  int Type; // esi
  int v10; // eax
  int v11; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v13; // eax
  Dialog *Current; // esi
  wchar_t *v15; // eax
  wchar_t *v16; // eax
  HWND Dialog; // eax
  wchar_t *v18; // eax
  HWND DlgItem; // eax
  String *ChatCommand; // ebx
  HWND v21; // esi
  char *v22; // eax
  int v23; // esi
  wchar_t *v24; // eax
  int v25; // [esp-Ch] [ebp-22Ch]
  DeleteAndZero v26; // [esp+Ch] [ebp-214h] BYREF
  int v27; // [esp+18h] [ebp-208h]
  wchar_t v28[256]; // [esp+20h] [ebp-200h] BYREF

  if ( a2 < 0 ) /*0x7a920d*/
    return 0; /*0x7a920f*/
  String::Assign((String *)&v26.DeleteAndZero_field_0x04, a4); /*0x7a9227*/
  CharStringToWide((wchar_t **)&v26, (const char **)&v26.DeleteAndZero_field_0x04); /*0x7a9234*/
  DeleteAndZero((ObjectClass *)&v26.DeleteAndZero_field_0x04); /*0x7a923d*/
  if ( !a3 ) /*0x7a924b*/
    goto LABEL_12; /*0x7a924b*/
  if ( (*a3 & 1) == 0 && !Dialog::FindByHandle((Dialog *)0xC2) && !Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7a9266*/
  {
    v5 = (unsigned __int8)WideString::IsASCII((const wchar_t **)&v26) == 0; /*0x7a9278*/
    DynamicVector_field_0x10 = g_WOL_BuddyList.DynamicVector_field_0x10; /*0x7a927a*/
    if ( v5 ) /*0x7a927f*/
      DynamicVector_field_0x10 = (void *)dword_B779DC; /*0x7a9281*/
    if ( !DynamicVector_field_0x10 ) /*0x7a928d*/
      goto LABEL_12; /*0x7a928d*/
  }
  if ( IsBuddyOrIgnoreWOL(a3) ) /*0x7a92a6*/
  {
    v7 = BYTE1(stru_B77D80.HashTable_field_0x40); /*0x7a92d7*/
    strcpy(byte_B77E30, a3 + 36); /*0x7a92e8*/
    if ( v7 ) /*0x7a92f3*/
    {
      v8 = WideString::GetOrEmpty((wchar_t **)&v26); /*0x7a92fd*/
      swprintf(v28, (const size_t)g_Str_Trace___hs_, (const wchar_t *const)a3 + 18, v8); /*0x7a930e*/
      Type = BuildingAnim::GetType(); /*0x7a9321*/
      LOWORD(v10) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x7a9331*/
      MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, v28, Type, 22, v10, 0); /*0x7a9348*/
      LOWORD(v11) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x7a9360*/
      v25 = v11; /*0x7a9365*/
      StringCSF = GetStringCSF(aTxtHowToReply, 0, g_Str_File_wonline_cpp, 8066); /*0x7a937a*/
      MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, StringCSF, Type, 22, v25, 0); /*0x7a9389*/
      MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x7a9395*/
      v13 = WideString::GetOrEmpty((wchar_t **)&v26); /*0x7a939e*/
      Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v13); /*0x7a93b1*/
      dword_B76478 = Timer::GetTicks(); /*0x7a93cb*/
      dword_B7647C = v27; /*0x7a93d0*/
      dword_B76480 = 300; /*0x7a93d6*/
    }
    else
    {
      Current = (Dialog *)Dialog::GetCurrent(); /*0x7a93ec*/
      if ( Current ) /*0x7a93f0*/
      {
        while ( !GetDlgItem((HWND)Current, 1343) ) /*0x7a93fc*/
        {
          if ( GetDlgItem((HWND)Current, 1461) ) /*0x7a9404*/
          {
            v15 = WideString::GetOrEmpty((wchar_t **)&v26); /*0x7a940e*/
            Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v15); /*0x7a9420*/
          }
          Current = (Dialog *)Dialog::FindByPtr(Current); /*0x7a942f*/
          if ( !Current ) /*0x7a9433*/
            goto LABEL_22; /*0x7a9433*/
        }
        v16 = WideString::GetOrEmpty((wchar_t **)&v26); /*0x7a943b*/
        Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v16); /*0x7a944e*/
      }
      else
      {
LABEL_22:
        ReleaseCapture(); /*0x7a945a*/
        Screen::Capture(1, 0, (int)(a3 + 36), (int)a3); /*0x7a9464*/
        Dialog = (HWND)CreateDialog(0x11Eu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))ChatDialog::DlgProc, 0); /*0x7a9475*/
        Current = (Dialog *)Dialog; /*0x7a947a*/
        if ( Dialog ) /*0x7a947e*/
        {
          SetFocus(Dialog); /*0x7a9481*/
          v18 = WideString::GetOrEmpty((wchar_t **)&v26); /*0x7a948b*/
          Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v18); /*0x7a949e*/
          ShowWindow((HWND)Current, 1); /*0x7a94a9*/
        }
      }
      DlgItem = GetDlgItem((HWND)Current, 1343); /*0x7a94b5*/
      ChatCommand = ExtractChatCommand((String *)&v26.DeleteAndZero_field_0x04, DlgItem); /*0x7a94c8*/
      v21 = GetDlgItem((HWND)Current, 1816); /*0x7a94ce*/
      v22 = String::GetOrEmpty_Alt(ChatCommand); /*0x7a94d0*/
      SendMessageA(v21, 0x4B4u, 0, (LPARAM)v22); /*0x7a94de*/
      DeleteAndZero((ObjectClass *)&v26.DeleteAndZero_field_0x04); /*0x7a94e8*/
    }
    if ( byte_B77E40 ) /*0x7a94f4*/
    {
      v23 = *(_DWORD *)ppv; /*0x7a9500*/
      v24 = WideString::GetOrEmpty((wchar_t **)&stru_B7622C.?); /*0x7a9502*/
      (*(void (__stdcall **)(LPVOID, const char *, wchar_t *))(v23 + 236))(ppv, a3, v24); /*0x7a9510*/
    }
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1708), 0x2000, 1.0, 0); /*0x7a952d*/
    DeleteAndZero::Alt(&v26); /*0x7a9536*/
    return 0; /*0x7a953e*/
  }
  else
  {
LABEL_12:
    DeleteAndZero::Alt(&v26); /*0x7a92b3*/
    return 0; /*0x7a92b8*/
  }
}



// ==== 0x007A9550  CChatEventSink::DispatchStub_44  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_44(CChatEventSink *this, int a2, int a3, wchar_t *String)
{
  int v5; // edi
  bool v6; // bl
  bool v7; // zf
  void *DynamicVector_field_0x10; // eax
  int Type; // ebx
  int v10; // eax
  Dialog *Current; // esi
  HWND DlgItem; // eax
  String *ChatCommand; // ebx
  HWND v14; // esi
  char *v15; // eax
  int v16; // esi
  wchar_t *v17; // eax
  ObjectClass v18[3]; // [esp+Ch] [ebp-204h] BYREF

  if ( a2 < 0 ) /*0x7a955f*/
    return 0; /*0x7a9563*/
  WideString::Assign((wchar_t **)v18, String); /*0x7a957b*/
  v5 = a3; /*0x7a9580*/
  if ( a3 ) /*0x7a9589*/
  {
    if ( (*(_BYTE *)a3 & 1) != 0 ) /*0x7a9592*/
    {
      v6 = 1; /*0x7a9594*/
    }
    else if ( Dialog::FindByHandle((Dialog *)0xC2) ) /*0x7a959d*/
    {
      v6 = 1; /*0x7a95a6*/
    }
    else if ( Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7a95af*/
    {
      v6 = 1; /*0x7a95b8*/
    }
    else
    {
      v7 = (unsigned __int8)WideString::IsASCII((const wchar_t **)v18) == 0; /*0x7a95c5*/
      DynamicVector_field_0x10 = g_WOL_BuddyList.DynamicVector_field_0x10; /*0x7a95c7*/
      if ( v7 ) /*0x7a95cc*/
        DynamicVector_field_0x10 = (void *)dword_B779DC; /*0x7a95ce*/
      v6 = DynamicVector_field_0x10 != 0; /*0x7a95d5*/
    }
  }
  else
  {
    v6 = 0; /*0x7a958b*/
  }
  DeleteAndZero::Alt((DeleteAndZero *)v18); /*0x7a95dc*/
  if ( !v6 ) /*0x7a95e3*/
    return 0; /*0x7a95e7*/
  if ( !IsBuddyOrIgnoreWOL((const char *)a3) ) /*0x7a95f5*/
    return 0; /*0x7a9600*/
  if ( BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7a9614*/
  {
    swprintf((wchar_t *const)&v18[0].?, (const size_t)g_Str_Trace___hs_, (const wchar_t *const)(a3 + 36), String); /*0x7a9625*/
    Type = BuildingAnim::GetType(); /*0x7a9638*/
    LOWORD(v10) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x7a9648*/
    MessageListClass::AddMessage( /*0x7a965f*/
      (MessageListClass *)&stru_A8BB1C.__pad_87[189],
      0,
      0,
      (wchar_t *)&v18[0].?,
      Type,
      22,
      v10,
      0);
    MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x7a966b*/
    Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String); /*0x7a967d*/
  }
  else
  {
    Current = (Dialog *)Dialog::GetCurrent(); /*0x7a9695*/
    if ( Current ) /*0x7a9699*/
    {
      while ( !GetDlgItem((HWND)Current, 1343) ) /*0x7a96a5*/
      {
        if ( GetDlgItem((HWND)Current, 1461) ) /*0x7a96ad*/
          Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String); /*0x7a96cb*/
        Current = (Dialog *)Dialog::FindByPtr(Current); /*0x7a96da*/
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
      Current = (Dialog *)CreateDialog( /*0x7a9726*/
                            0x11Eu,
                            (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))ChatDialog::DlgProc,
                            0);
      SetFocus((HWND)Current); /*0x7a9729*/
      Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String); /*0x7a9746*/
      ShowWindow((HWND)Current, 1); /*0x7a9751*/
    }
    DlgItem = GetDlgItem((HWND)Current, 1343); /*0x7a975d*/
    ChatCommand = ExtractChatCommand((String *)v18, DlgItem); /*0x7a9770*/
    v14 = GetDlgItem((HWND)Current, 1816); /*0x7a9776*/
    v15 = String::GetOrEmpty_Alt(ChatCommand); /*0x7a9778*/
    SendMessageA(v14, 0x4B4u, 0, (LPARAM)v15); /*0x7a9786*/
    DeleteAndZero(v18); /*0x7a9790*/
    v5 = a3; /*0x7a9795*/
  }
  if ( byte_B77E40 ) /*0x7a97a3*/
  {
    v16 = *(_DWORD *)ppv; /*0x7a97ab*/
    v17 = WideString::GetOrEmpty((wchar_t **)&stru_B7622C.?); /*0x7a97b2*/
    (*(void (__stdcall **)(LPVOID, int, wchar_t *))(v16 + 236))(ppv, v5, v17); /*0x7a97c0*/
  }
  PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1708), 0x2000, 1.0, 0); /*0x7a97dd*/
  return 0; /*0x7a9561*/
}



// ==== 0x007A9800  CChatEventSink::DispatchStub_27  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_27(CChatEventSink *this, int a2)
{
  wchar_t *StringCSF; // eax
  HWND Current; // eax
  HWND v5; // esi
  int Type; // esi
  int v7; // eax
  wchar_t *v8; // [esp-4h] [ebp-10Ch]
  wchar_t *v9; // [esp-4h] [ebp-10Ch]
  const wchar_t *v10; // [esp+0h] [ebp-108h]
  wchar_t Buffer[128]; // [esp+8h] [ebp-100h] BYREF

  if ( !a2 ) /*0x7a980e*/
  {
    StringCSF = GetStringCSF(aTxtPagesent, 0, g_Str_File_wonline_cpp, 8189); /*0x7a9821*/
    Dialog::ShowStatusText(-1, (size_t)StringCSF); /*0x7a982d*/
    return 0; /*0x7a983f*/
  }
  if ( a2 == 262452 ) /*0x7a9847*/
  {
    v8 = GetStringCSF(aTxtPagedisable, 0, g_Str_File_wonline_cpp, 8193); /*0x7a9863*/
    swprintf(Buffer, (const size_t)v8, v10); /*0x7a9865*/
  }
  else
  {
    if ( a2 == 262451 ) /*0x7a986c*/
      v9 = GetStringCSF(aTxtPageusergon, 0, g_Str_File_wonline_cpp, 8195); /*0x7a9888*/
    else
      v9 = GetStringCSF(aTxtPagefailed, 0, g_Str_File_wonline_cpp, 8197); /*0x7a98a2*/
    swprintf(Buffer, (const size_t)v9, v10); /*0x7a988a*/
  }
  Current = (HWND)Dialog::GetCurrent(); /*0x7a98b0*/
  v5 = Current; /*0x7a98b5*/
  if ( !Current ) /*0x7a98b9*/
    goto LABEL_19; /*0x7a98b9*/
  if ( GetDlgItem(Current, 1343) ) /*0x7a98c7*/
  {
    Dialog::ShowMessage(-1, (size_t)Buffer); /*0x7a98d9*/
    return 0; /*0x7a98eb*/
  }
  if ( GetDlgItem(v5, 1461) ) /*0x7a98f4*/
  {
    Dialog::ShowStatusText(-1, (size_t)Buffer); /*0x7a9906*/
    return 0; /*0x7a990e*/
  }
  else
  {
LABEL_19:
    if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x7a9920*/
    {
      Type = BuildingAnim::GetType(); /*0x7a9934*/
      LOWORD(v7) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x7a9944*/
      MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, Buffer, Type, 22, v7, 0); /*0x7a995b*/
    }
    return 0; /*0x7a9961*/
  }
}



// ==== 0x007A9970  CChatEventSink::HandleUserSearch  this=CChatEventSink  sig=csp ====
int __stdcall CChatEventSink::HandleUserSearch(CChatEventSink *this, int a2, const char *a3)
{
  HWND v3; // esi
  int v4; // esi
  _DWORD *v5; // esi
  const char *v6; // esi
  const char *v7; // ebx
  int v8; // eax
  int v9; // ebp
  int referenceCount; // eax
  int v11; // ebx
  char *v12; // eax
  String *v13; // eax
  String *v14; // ebp
  int v15; // edx
  int v16; // eax
  int occupant; // esi
  int *v18; // ebx
  int *v19; // edi
  int v20; // ebp
  int v21; // esi
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // esi
  int v29; // edi
  _DWORD *v30; // edi
  int v31; // ebp
  double v32; // st7
  int *v33; // ebx
  int v34; // esi
  int *v35; // edi
  int v36; // ebp
  int v37; // esi
  int v38; // eax
  int v39; // edx
  int v40; // eax
  int v41; // esi
  String *v42; // eax
  String *v43; // esi
  int v44; // edx
  int v45; // eax
  int v46; // esi
  int *v47; // ebx
  int *v48; // edi
  int v49; // ebp
  int v50; // esi
  int v51; // edx
  int v52; // ecx
  int v53; // eax
  ObjectClass *v54; // eax
  int v55; // esi
  int v56; // ebp
  AnimClass *v57; // eax
  AnimClass *parachute; // esi
  AnimClass *v59; // ebx
  HWND DlgItem; // eax
  HWND v62; // ebp
  int v63; // eax
  int v64; // esi
  wchar_t **v65; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v67; // eax
  int v68; // eax
  int v69; // esi
  wchar_t **v70; // eax
  char *v71; // esi
  wchar_t *v72; // eax
  char *v73; // edi
  wchar_t *v74; // eax
  wchar_t *v75; // eax
  HWND Current; // eax
  HWND v77; // esi
  int Type; // esi
  int v79; // eax
  wchar_t *v80; // [esp-8h] [ebp-1E4h]
  wchar_t *v81; // [esp-8h] [ebp-1E4h]
  wchar_t *v82; // [esp-4h] [ebp-1E0h]
  char *v83; // [esp-4h] [ebp-1E0h]
  char *v84; // [esp-4h] [ebp-1E0h]
  char *v85; // [esp-4h] [ebp-1E0h]
  char *v86; // [esp-4h] [ebp-1E0h]
  DeleteAndZero v87; // [esp+10h] [ebp-1CCh] BYREF
  bool v88; // [esp+1Fh] [ebp-1BDh]
  const char *v89; // [esp+20h] [ebp-1BCh]
  char v90[64]; // [esp+24h] [ebp-1B8h] BYREF
  wchar_t v91[134]; // [esp+64h] [ebp-178h] BYREF
  char v92[108]; // [esp+170h] [ebp-6Ch] BYREF

  v3 = (HWND)Dialog::FindByHandle((Dialog *)0xCF); /*0x7a998b*/
  *(_DWORD *)v87.__pad_0 = 0; /*0x7a998d*/
  if ( !String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x7a9998*/
  {
    if ( v3 ) /*0x7aa25f*/
    {
      if ( (HWND)Dialog::GetCurrent() != v3 ) /*0x7aa26c*/
        return 0; /*0x7aa26c*/
      unknown_libname_74(&v87); /*0x7aa276*/
      DlgItem = GetDlgItem(v3, 1480); /*0x7aa281*/
      v62 = DlgItem; /*0x7aa287*/
      if ( a3 && DlgItem ) /*0x7aa29a*/
      {
        if ( !*(_DWORD *)a3 && !strncmp(a3 + 52, g_Str_Lob_41_, strlen(g_Str_Lob_41_)) ) /*0x7aa2c2*/
        {
          v63 = atol(&a3[strlen(g_Str_Lob_41_) + 52]); /*0x7aa2e0*/
          v64 = v63 / 8; /*0x7aa2f2*/
          WideString::Reassign((void **)&v87, *(wchar_t **)&g_WindowManager.__pad_EC[4 * (v63 % 8) + 648]); /*0x7aa30e*/
          if ( v64 ) /*0x7aa315*/
          {
            WideString::Append2((wchar_t **)&v87, (wchar_t *)asc_82083C); /*0x7aa324*/
            v65 = FormatWideString((wchar_t **)&v87.DeleteAndZero_field_0x04, (const wchar_t *)(v64 + 1)); /*0x7aa330*/
            WideString::Append((wchar_t **)&v87, (const wchar_t **)v65); /*0x7aa33a*/
            DeleteAndZero::Alt((DeleteAndZero *)&v87.DeleteAndZero_field_0x04); /*0x7aa343*/
          }
          goto LABEL_123; /*0x7aa348*/
        }
        StringCSF = (wchar_t *)CharToWideString((_BYTE *)a3 + 52); /*0x7aa34d*/
      }
      else
      {
        switch ( a2 ) /*0x7aa360*/
        {
          case 262448: /*0x7aa360*/
            StringCSF = GetStringCSF(aTxtFindpageNot_0, 0, g_Str_File_wonline_cpp, 8261); /*0x7aa367*/
            break;
          case 262449: /*0x7aa360*/
            StringCSF = GetStringCSF((wchar_t *)aTxtFindpageNot, 0, g_Str_File_wonline_cpp, 8263); /*0x7aa381*/
            break;
          case 262450: /*0x7aa360*/
            StringCSF = GetStringCSF((wchar_t *)aTxtFindpageFin, 0, g_Str_File_wonline_cpp, 8265); /*0x7aa39b*/
            break;
          default:
            StringCSF = GetStringCSF(aTxtFindpageNot_0, 0, g_Str_File_wonline_cpp, 8267); /*0x7aa3ae*/
            break;
        }
      }
      WideString::Reassign((void **)&v87, StringCSF); /*0x7aa3b8*/
LABEL_123:
      v67 = WideString::GetOrEmpty_Alt((wchar_t **)&v87); /*0x7aa3bd*/
      SendMessageA(v62, 0x4B2u, 0, (LPARAM)v67); /*0x7aa3cf*/
      DeleteAndZero::Alt(&v87); /*0x7aa3d9*/
      return 0; /*0x7aa3ea*/
    }
    if ( a3 ) /*0x7aa3f6*/
    {
      if ( *(_DWORD *)a3 || strncmp(a3 + 52, g_Str_Lob_41_, strlen(g_Str_Lob_41_)) ) /*0x7aa41d*/
      {
        v73 = CharToWideString(&g_WOL_LoginObject.?); /*0x7aa4f9*/
        v83 = CharToWideString((_BYTE *)a3 + 52); /*0x7aa500*/
        v74 = GetStringCSF(aTxtUserFound, 0, g_Str_File_wonline_cpp, 8288); /*0x7aa513*/
        swprintf(v91, (const size_t)v74, (const wchar_t *const)v73, v83); /*0x7aa51e*/
      }
      else
      {
        v68 = atol(&a3[strlen(g_Str_Lob_41_) + 52]); /*0x7aa43f*/
        v69 = v68 / 8; /*0x7aa451*/
        WideString::Assign((wchar_t **)&v87, *(wchar_t **)&g_WindowManager.__pad_EC[4 * (v68 % 8) + 648]); /*0x7aa46d*/
        if ( v69 ) /*0x7aa474*/
        {
          WideString::Append2((wchar_t **)&v87, (wchar_t *)asc_82083C); /*0x7aa47f*/
          v70 = FormatWideString((wchar_t **)&v87.DeleteAndZero_field_0x04, (const wchar_t *)(v69 + 1)); /*0x7aa48b*/
          WideString::Append((wchar_t **)&v87, (const wchar_t **)v70); /*0x7aa495*/
          DeleteAndZero::Alt((DeleteAndZero *)&v87.DeleteAndZero_field_0x04); /*0x7aa49e*/
        }
        v71 = CharToWideString(&g_WOL_LoginObject.?); /*0x7aa4b1*/
        v82 = WideString::GetOrEmpty((wchar_t **)&v87); /*0x7aa4b8*/
        v72 = GetStringCSF(aTxtUserFound, 0, g_Str_File_wonline_cpp, 8286); /*0x7aa4cb*/
        swprintf(v91, (const size_t)v72, (const wchar_t *const)v71, v82); /*0x7aa4d6*/
        DeleteAndZero::Alt(&v87); /*0x7aa4e2*/
      }
    }
    else
    {
      switch ( a2 ) /*0x7aa537*/
      {
        case 262448: /*0x7aa537*/
          v84 = CharToWideString(&g_WOL_LoginObject.?); /*0x7aa543*/
          v75 = GetStringCSF(aTxtUserNotOnli, 0, g_Str_File_wonline_cpp, 8295); /*0x7aa549*/
          break;
        case 262449: /*0x7aa537*/
          v85 = CharToWideString(&g_WOL_LoginObject.?); /*0x7aa55c*/
          v80 = GetStringCSF(aTxtUserNotInCh, 0, g_Str_File_wonline_cpp, 8297); /*0x7aa573*/
          swprintf(v91, (const size_t)v80, (const wchar_t *const)v85); /*0x7aa579*/
          goto LABEL_139; /*0x7aa579*/
        case 262450: /*0x7aa537*/
          v86 = CharToWideString(&g_WOL_LoginObject.?); /*0x7aa58c*/
          v81 = GetStringCSF(aTxtUserFindDis, 0, g_Str_File_wonline_cpp, 8299); /*0x7aa5a7*/
          swprintf(v91, (const size_t)v81, (const wchar_t *const)v86); /*0x7aa5a9*/
          goto LABEL_139; /*0x7aa5a9*/
        default:
          v84 = CharToWideString(&g_WOL_LoginObject.?); /*0x7aa5b0*/
          v75 = GetStringCSF(aTxtUserNotOnli, 0, g_Str_File_wonline_cpp, 8301); /*0x7aa5c2*/
          break;
      }
      swprintf(v91, (const size_t)v75, (const wchar_t *const)v84); /*0x7aa5cd*/
    }
LABEL_139:
    Current = (HWND)Dialog::GetCurrent(); /*0x7aa5d5*/
    v77 = Current; /*0x7aa5da*/
    if ( Current ) /*0x7aa5de*/
    {
      if ( GetDlgItem(Current, 1343) ) /*0x7aa5ec*/
      {
        Dialog::ShowMessage(-1, (size_t)v91); /*0x7aa5fe*/
        return 0; /*0x7aa612*/
      }
      if ( GetDlgItem(v77, 1461) ) /*0x7aa61b*/
      {
        Dialog::ShowStatusText(-1, (size_t)v91); /*0x7aa62c*/
        return 0; /*0x7aa640*/
      }
    }
    if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x7aa648*/
    {
      Type = BuildingAnim::GetType(); /*0x7aa65c*/
      LOWORD(v79) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x7aa66b*/
      MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, v91, Type, 22, v79, 0); /*0x7aa680*/
    }
    LOBYTE(g_WOL_LoginObject.?) = 0; /*0x7aa685*/
    return 0; /*0x7aa685*/
  }
  if ( stru_B76900.lastLayer ) /*0x7a99a4*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag /*0x7a99c6*/
                   + 4
                   * (((int (__thiscall *)(char *))stru_B76900.lineTrailer)(&g_WindowManager.__pad_14[16])
                    & ((1 << SLOBYTE(stru_B76900.location[0])) - 1)));
    if ( v4 ) /*0x7a99cb*/
    {
      while ( !(unsigned __int8)String::Compare((String *)v4, (const char **)&g_WindowManager.__pad_14[16]) ) /*0x7a99db*/
      {
        v4 = *(_DWORD *)(v4 + 8); /*0x7a99dd*/
        if ( !v4 ) /*0x7a99e2*/
          goto LABEL_9; /*0x7a99e2*/
      }
      v5 = (_DWORD *)(v4 + 4); /*0x7a99ea*/
      if ( v5 ) /*0x7a99ef*/
        *(_DWORD *)v87.__pad_0 = *v5; /*0x7a99f3*/
    }
  }
LABEL_9:
  v6 = a3; /*0x7a99f7*/
  v90[0] = 0; /*0x7a99fe*/
  if ( a3 ) /*0x7a9a05*/
  {
    if ( *(_DWORD *)a3 ) /*0x7a9a0b*/
    {
      *(_DWORD *)v87.__pad_0 = 5; /*0x7a9a7d*/
      v89 = a3 + 52; /*0x7a9a85*/
      String::Assign((String *)&v87.DeleteAndZero_field_0x04, a3 + 52); /*0x7a9a89*/
      v9 = 0; /*0x7a9a99*/
      memset(v91, 0, sizeof(v91)); /*0x7a9a9b*/
      referenceCount = stru_B76AC4.?; /*0x7a9a9d*/
      if ( stru_B76AC4.? <= 0 ) /*0x7a9aa4*/
      {
LABEL_21:
        memset(v91, 0, sizeof(v91)); /*0x7a9afd*/
      }
      else
      {
        v11 = 0; /*0x7a9aa6*/
        while ( 1 ) /*0x7a9aa8*/
        {
          if ( v11 >= 0 && v9 < referenceCount ) /*0x7a9aae*/
            qmemcpy(v91, (const void *)(v11 + stru_B76AC4.occupant), sizeof(v91)); /*0x7a9ac2*/
          v12 = String::GetOrEmpty_Alt((String *)&v87.DeleteAndZero_field_0x04); /*0x7a9ac8*/
          if ( !_strcmpi((char *)&v91[26], v12) ) /*0x7a9ad6*/
            break; /*0x7a9ad6*/
          referenceCount = stru_B76AC4.?; /*0x7a9ae2*/
          ++v9; /*0x7a9ae7*/
          v11 += 268; /*0x7a9ae8*/
          if ( v9 >= stru_B76AC4.? ) /*0x7a9af0*/
            goto LABEL_21; /*0x7a9af0*/
        }
        if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x7a9b08*/
        {
          v88 = (v91[16] & 0x1000) != 0; /*0x7a9b19*/
          if ( (v91[16] & 0x1000) != 0 ) /*0x7a9b1d*/
          {
            *(_DWORD *)v87.__pad_0 = 8; /*0x7a9b1f*/
          }
          else
          {
            v88 = (v91[16] & 0x800) != 0; /*0x7a9b2e*/
            if ( (v91[16] & 0x800) != 0 ) /*0x7a9b32*/
              *(_DWORD *)v87.__pad_0 = 7; /*0x7a9b34*/
          }
        }
      }
      DeleteAndZero((ObjectClass *)&v87.DeleteAndZero_field_0x04); /*0x7a9b40*/
      v6 = a3; /*0x7a9b45*/
      v7 = v89; /*0x7a9b4c*/
    }
    else
    {
      v7 = a3 + 52; /*0x7a9a19*/
      v89 = a3 + 52; /*0x7a9a21*/
      if ( !_strnicmp(a3 + 52, g_Str_Lob_40_, strlen(g_Str_Lob_40_)) ) /*0x7a9a2c*/
      {
        *(_DWORD *)v87.__pad_0 = 7; /*0x7a9a38*/
      }
      else
      {
        v8 = -(_strnicmp(a3 + 52, aLob35, strlen(aLob35)) != 0); /*0x7a9a65*/
        LOBYTE(v8) = v8 & 0xFC; /*0x7a9a67*/
        *(_DWORD *)v87.__pad_0 = v8 + 8; /*0x7a9a6c*/
      }
    }
    if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x7a9b55*/
    {
      v13 = (String *)__2_YAPAXI_Z(0x114u); /*0x7a9b67*/
      v14 = v13; /*0x7a9b6c*/
      if ( v13 ) /*0x7a9b73*/
        unknown_libname_73(v13); /*0x7a9b77*/
      else
        v14 = 0; /*0x7a9b7e*/
      String::Reassign(v14, (const char **)&g_WindowManager.__pad_14[16]); /*0x7a9b87*/
      qmemcpy(&v14->m_3[1], v6, 0x10Cu); /*0x7a9b94*/
      *(_DWORD *)v14[34].__pad_0 = 0; /*0x7a9b9b*/
      v15 = ((int (__thiscall *)(char *))stru_B765EC.attachedTag)(&g_WindowManager.__pad_14[16]) /*0x7a9bbf*/
          & ((1 << SLOBYTE(stru_B765EC.owningHouseIndex)) - 1);
      v16 = *(_DWORD *)(stru_B765EC.? + 4 * v15); /*0x7a9bc1*/
      *(_DWORD *)(stru_B765EC.? + 4 * v15) = v14; /*0x7a9bc4*/
      if ( v16 ) /*0x7a9bc9*/
        *(_DWORD *)v14[34].__pad_0 = v16; /*0x7a9bcb*/
      occupant = stru_B765EC.occupant; /*0x7a9bd6*/
      *(_QWORD *)&v87.DeleteAndZero_field_0x04 = (unsigned int)++stru_B765EC.?; /*0x7a9be2*/
      v87.DeleteAndZero_field_0x04 = stru_B765EC.occupant; /*0x7a9bf0*/
      if ( (double)(unsigned int)stru_B765EC.? / (double)stru_B765EC.occupant >= *(double *)&stru_B765EC.ambientSoundController[2] /*0x7a9c14*/
        && LOBYTE(stru_B765EC.nextObject) != 1 )
      {
        v18 = (int *)stru_B765EC.?; /*0x7a9c20*/
        stru_B765EC.occupant *= 2; /*0x7a9c2a*/
        ++stru_B765EC.owningHouseIndex; /*0x7a9c2f*/
        stru_B765EC.? = __2_YAPAXI_Z(8 * occupant); /*0x7a9c4f*/
        memset((void *)stru_B765EC.?, 0, 4 * stru_B765EC.occupant); /*0x7a9c57*/
        if ( occupant > 0 ) /*0x7a9c59*/
        {
          v19 = v18; /*0x7a9c5b*/
          v20 = occupant; /*0x7a9c5d*/
          do /*0x7a9c9e*/
          {
            v21 = *v19; /*0x7a9c5f*/
            if ( *v19 ) /*0x7a9c5f*/
            {
              do /*0x7a9c98*/
              {
                v22 = ((int (__thiscall *)(int))stru_B765EC.attachedTag)(v21) /*0x7a9c7b*/
                    & ((1 << SLOBYTE(stru_B765EC.owningHouseIndex)) - 1);
                v23 = *(_DWORD *)(stru_B765EC.? + 4 * v22); /*0x7a9c82*/
                *(_DWORD *)(stru_B765EC.? + 4 * v22) = v21; /*0x7a9c85*/
                v24 = *(_DWORD *)(v21 + 272); /*0x7a9c88*/
                *(_DWORD *)(v21 + 272) = v23; /*0x7a9c8e*/
                v21 = v24; /*0x7a9c96*/
              }
              while ( v24 ); /*0x7a9c98*/
            }
            ++v19; /*0x7a9c9a*/
            --v20; /*0x7a9c9d*/
          }
          while ( v20 ); /*0x7a9c9e*/
        }
        __3_YAXPAX_Z(v18); /*0x7a9ca1*/
        v7 = v89; /*0x7a9ca6*/
      }
    }
    strcpy(v90, v7); /*0x7a9cce*/
    if ( !strncmp(v90, g_Str_Lob_41_, 7u) ) /*0x7a9cdc*/
    {
      v25 = atol(&v90[strlen(g_Str_Lob_41_)]); /*0x7a9d03*/
      v26 = v25 / 8; /*0x7a9d0e*/
      v27 = v25 % 8; /*0x7a9d1d*/
      if ( v26 ) /*0x7a9d20*/
        sprintf(v90, "%s %d", *(const char **)&g_WindowManager.__pad_EC[4 * v27 + 648], v26 + 1); /*0x7a9d55*/
      else
        sprintf(v90, "%s", *(const char **)&g_WindowManager.__pad_EC[4 * v27 + 648]); /*0x7a9d34*/
    }
  }
  else
  {
    if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x7a9d67*/
    {
      if ( stru_B765EC.? ) /*0x7a9d7b*/
      {
        *(_QWORD *)&v87.DeleteAndZero_field_0x04 = (unsigned int)stru_B765EC.? - 1; /*0x7a9d88*/
        *(float *)&v87.DeleteAndZero_field_0x04 = (double)*(__int64 *)&v87.DeleteAndZero_field_0x04 /*0x7a9da5*/
                                                / (double)stru_B765EC.occupant;
        v28 = ((int (__thiscall *)(char *))stru_B765EC.attachedTag)(&g_WindowManager.__pad_14[16]) /*0x7a9dc3*/
            & ((1 << SLOBYTE(stru_B765EC.owningHouseIndex)) - 1);
        v29 = *(_DWORD *)(stru_B765EC.? + 4 * v28); /*0x7a9dc5*/
        if ( v29 ) /*0x7a9dca*/
        {
          if ( (unsigned __int8)String::Compare((String *)v29, (const char **)&g_WindowManager.__pad_14[16]) ) /*0x7a9dd7*/
          {
            v30 = *(_DWORD **)(stru_B765EC.? + 4 * v28); /*0x7a9de9*/
            v31 = v30[68]; /*0x7a9dee*/
            if ( v30 ) /*0x7a9df4*/
            {
              DeleteAndZero(*(ObjectClass **)(stru_B765EC.? + 4 * v28)); /*0x7a9df8*/
              __3_YAXPAX_Z(v30); /*0x7a9dfe*/
            }
            v32 = *(float *)&v87.DeleteAndZero_field_0x04; /*0x7a9e0c*/
            *(_DWORD *)(stru_B765EC.? + 4 * v28) = v31; /*0x7a9e10*/
            --stru_B765EC.?; /*0x7a9e1f*/
            if ( v32 <= *(double *)stru_B765EC.ambientSoundController /*0x7a9e49*/
              && stru_B765EC.occupant > (unsigned int)stru_B765EC.ambientSoundController[4]
              && LOBYTE(stru_B765EC.nextObject) != 1 )
            {
              v33 = (int *)stru_B765EC.?; /*0x7a9e55*/
              v34 = stru_B765EC.occupant; /*0x7a9e5b*/
              stru_B765EC.occupant = (unsigned int)stru_B765EC.occupant >> 1; /*0x7a9e60*/
              --stru_B765EC.owningHouseIndex; /*0x7a9e6c*/
              stru_B765EC.? = __2_YAPAXI_Z(4 * stru_B765EC.occupant); /*0x7a9e85*/
              memset((void *)stru_B765EC.?, 0, 4 * stru_B765EC.occupant); /*0x7a9e8d*/
              if ( v34 > 0 ) /*0x7a9e8f*/
              {
                v35 = v33; /*0x7a9e91*/
                v36 = v34; /*0x7a9e93*/
                do /*0x7a9ec8*/
                {
                  v37 = *v35; /*0x7a9e95*/
                  if ( *v35 ) /*0x7a9e95*/
                  {
                    do /*0x7a9ec2*/
                    {
                      v38 = CChatEventSink::ComputeBucketMask((int)&stru_B765EC.?, v37); /*0x7a9ea1*/
                      v39 = *(_DWORD *)(stru_B765EC.? + 4 * v38); /*0x7a9eac*/
                      *(_DWORD *)(stru_B765EC.? + 4 * v38) = v37; /*0x7a9eaf*/
                      v40 = *(_DWORD *)(v37 + 272); /*0x7a9eb2*/
                      *(_DWORD *)(v37 + 272) = v39; /*0x7a9eb8*/
                      v37 = v40; /*0x7a9ec0*/
                    }
                    while ( v40 ); /*0x7a9ec2*/
                  }
                  ++v35; /*0x7a9ec4*/
                  --v36; /*0x7a9ec7*/
                }
                while ( v36 ); /*0x7a9ec8*/
              }
              __3_YAXPAX_Z(v33); /*0x7a9ecb*/
            }
          }
          else
          {
            v41 = *(_DWORD *)(v29 + 272); /*0x7a9ed5*/
            if ( v41 ) /*0x7a9edd*/
            {
              while ( !(unsigned __int8)String::Compare((String *)v41, (const char **)&g_WindowManager.__pad_14[16]) ) /*0x7a9eed*/
              {
                v29 = v41; /*0x7a9eef*/
                v41 = *(_DWORD *)(v41 + 272); /*0x7a9ef1*/
                if ( !v41 ) /*0x7a9ef9*/
                  goto LABEL_66; /*0x7a9ef9*/
              }
              *(_DWORD *)(v29 + 272) = *(_DWORD *)(v41 + 272); /*0x7a9f03*/
              --stru_B765EC.?; /*0x7a9f12*/
              CChatEventSink::DeleteAndZero((CChatEventSink *)v41, 1); /*0x7a9f1e*/
            }
LABEL_66:
            if ( *(float *)&v87.DeleteAndZero_field_0x04 <= *(double *)stru_B765EC.ambientSoundController ) /*0x7a9f32*/
              HashTable::Shrink((HashTable *)&stru_B765EC.?); /*0x7a9f39*/
          }
        }
      }
    }
    switch ( a2 ) /*0x7a9f4a*/
    {
      case 262449: /*0x7a9f4a*/
        *(_DWORD *)v87.__pad_0 = 3; /*0x7a9f4c*/
        break;
      case 262448: /*0x7a9f4a*/
        *(_DWORD *)v87.__pad_0 = 2; /*0x7a9f5d*/
        break;
      case 262450: /*0x7a9f4a*/
        *(_DWORD *)v87.__pad_0 = 1; /*0x7a9f6e*/
        break;
    }
  }
  if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x7a9f7b*/
  {
    v42 = (String *)__2_YAPAXI_Z(0xCu); /*0x7a9f8a*/
    v43 = v42; /*0x7a9f8f*/
    if ( v42 ) /*0x7a9f98*/
      unknown_libname_73(v42); /*0x7a9f9c*/
    else
      v43 = 0; /*0x7a9fa3*/
    String::Reassign(v43, (const char **)&g_WindowManager.__pad_14[16]); /*0x7a9fac*/
    *(_DWORD *)v43[1].__pad_0 = 0; /*0x7a9fb1*/
    *(_DWORD *)&v43->m_3[1] = *(_DWORD *)v87.__pad_0; /*0x7a9fb8*/
    v44 = ((int (__thiscall *)(char *))stru_B76900.lineTrailer)(&g_WindowManager.__pad_14[16]) /*0x7a9fda*/
        & ((1 << SLOBYTE(stru_B76900.location[0])) - 1);
    v45 = *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v44); /*0x7a9fdc*/
    *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v44) = v43; /*0x7a9fdf*/
    if ( v45 ) /*0x7a9fe4*/
      *(_DWORD *)v43[1].__pad_0 = v45; /*0x7a9fe6*/
    v46 = *(_DWORD *)&stru_B76900.isInLogic; /*0x7a9fee*/
    *(_QWORD *)&v87.DeleteAndZero_field_0x04 = (unsigned int)++stru_B76900.lastLayer; /*0x7a9ff9*/
    v87.DeleteAndZero_field_0x04 = *(_DWORD *)&stru_B76900.isInLogic; /*0x7aa006*/
    if ( (double)(unsigned int)stru_B76900.lastLayer / (double)*(int *)&stru_B76900.isInLogic >= dbl_B769B8 /*0x7aa02a*/
      && LOBYTE(stru_B76900.location[2]) != 1 )
    {
      v47 = *(int **)&stru_B76900.isAliveFlag; /*0x7aa036*/
      *(_DWORD *)&stru_B76900.isInLogic *= 2; /*0x7aa040*/
      ++stru_B76900.location[0]; /*0x7aa045*/
      *(_DWORD *)&stru_B76900.isAliveFlag = __2_YAPAXI_Z(8 * v46); /*0x7aa065*/
      memset(*(void **)&stru_B76900.isAliveFlag, 0, 4 * *(_DWORD *)&stru_B76900.isInLogic); /*0x7aa06d*/
      if ( v46 > 0 ) /*0x7aa06f*/
      {
        v48 = v47; /*0x7aa071*/
        v49 = v46; /*0x7aa073*/
        do /*0x7aa0ae*/
        {
          v50 = *v48; /*0x7aa075*/
          if ( *v48 ) /*0x7aa075*/
          {
            do /*0x7aa0a8*/
            {
              v51 = ((int (__thiscall *)(int))stru_B76900.lineTrailer)(v50) /*0x7aa091*/
                  & ((1 << SLOBYTE(stru_B76900.location[0])) - 1);
              v52 = *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v51); /*0x7aa098*/
              *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v51) = v50; /*0x7aa09b*/
              v53 = *(_DWORD *)(v50 + 8); /*0x7aa09e*/
              *(_DWORD *)(v50 + 8) = v52; /*0x7aa0a1*/
              v50 = v53; /*0x7aa0a6*/
            }
            while ( v53 ); /*0x7aa0a8*/
          }
          ++v48; /*0x7aa0aa*/
          --v49; /*0x7aa0ad*/
        }
        while ( v49 ); /*0x7aa0ae*/
      }
      __3_YAXPAX_Z(v47); /*0x7aa0b1*/
    }
    DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x7aa0be*/
    v54 = (ObjectClass *)Dialog::FindByHandle((Dialog *)0x116); /*0x7aa0c8*/
    if ( v54 ) /*0x7aa0cf*/
      FillBuddyListWOL(v54); /*0x7aa0d3*/
  }
  if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x7aa0dd*/
  {
    if ( (unsigned int)(time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20) < 5 ) /*0x7aa0fb*/
      return 0; /*0x7aa68f*/
    DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x7aa106*/
  }
  if ( !*(_DWORD *)&stru_B76900.needsRedraw ) /*0x7aa112*/
    return 0; /*0x7aa112*/
  if ( *(int *)&stru_B76900.needsRedraw > 0 ) /*0x7aa118*/
  {
    String::Reassign((String *)&g_WindowManager.__pad_14[16], (const char **)stru_B76900.parachute); /*0x7aa129*/
    v55 = 0; /*0x7aa133*/
    if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x7aa137*/
    {
      if ( *(int *)&stru_B76900.needsRedraw <= 0 ) /*0x7aa13d*/
        v55 = *(_DWORD *)&stru_B76900.needsRedraw - 1; /*0x7aa13f*/
      DeleteAndZero((ObjectClass *)(&stru_B76900.parachute->AnimClass_field_0x0 + v55)); /*0x7aa14b*/
      memcpy( /*0x7aa174*/
        &stru_B76900.parachute->AnimClass_field_0x0 + v55,
        &stru_B76900.parachute->AnimClass_field_0x4 + v55,
        4 * (*(_DWORD *)&stru_B76900.needsRedraw + 0x3FFFFFFF * (v55 + 1)));
      --*(_DWORD *)&stru_B76900.needsRedraw; /*0x7aa188*/
      if ( 3 * *(_DWORD *)&stru_B76900.needsRedraw <= *(int *)&stru_B76900.hasParachute ) /*0x7aa192*/
      {
        v56 = *(_DWORD *)&stru_B76900.hasParachute / 2; /*0x7aa19b*/
        if ( *(_DWORD *)&stru_B76900.hasParachute / 2 < 10 ) /*0x7aa1a0*/
          v56 = 10; /*0x7aa1a2*/
        if ( v56 < *(int *)&stru_B76900.hasParachute ) /*0x7aa1a9*/
        {
          v57 = (AnimClass *)__2_YAPAXI_Z(4 * v56); /*0x7aa1b3*/
          parachute = stru_B76900.parachute; /*0x7aa1b8*/
          v59 = v57; /*0x7aa1c3*/
          if ( stru_B76900.parachute ) /*0x7aa1c5*/
          {
            qmemcpy(v57, stru_B76900.parachute, 4 * *(_DWORD *)&stru_B76900.needsRedraw); /*0x7aa1cf*/
            parachute = stru_B76900.parachute; /*0x7aa1d1*/
          }
          __3_YAXPAX_Z(parachute); /*0x7aa1d8*/
          stru_B76900.parachute = v59; /*0x7aa1e0*/
          *(_DWORD *)&stru_B76900.hasParachute = v56; /*0x7aa1e6*/
        }
      }
    }
  }
  *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x7aa1f3*/
  memset(v92, 0, sizeof(v92)); /*0x7aa206*/
  strcpy(&v92[36], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x7aa239*/
  (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v92); /*0x7aa24b*/
  return 0; /*0x7aa24e*/
}


// ==== 0x007AA6A0  CChatEventSink::DispatchStub_18  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_18(CChatEventSink *this, int a2, int a3)
{
  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) && a2 >= 0 ) /*0x7aa6af*/
    Dialog::ShowMessage(-1, (size_t)aHs_2, a3); /*0x7aa6c2*/
  return 0; /*0x7aa6cc*/
}



// ==== 0x007AA6D0  CChatEventSink::DispatchStub_19  this=CChatEventSink  sig=csp ====
int __userpurge CComObject_CChatEventSink___ATL::DispatchStub_19@<eax>(CChatEventSink *this, int a2, int a3)
{
  const wchar_t *v3; // esi
  wchar_t *StringCSF; // eax
  int Type; // esi
  int v7; // eax
  wchar_t *v8; // eax
  wchar_t Buffer[256]; // [esp+0h] [ebp-200h] BYREF

  if ( LOBYTE(stru_B77D80.HashTable_field_0x40) ) /*0x7aa6dd*/
  {
    SetEvent(dword_B736A8); /*0x7aa6e5*/
    dword_B77DE8 = a2; /*0x7aa6f4*/
    return 0; /*0x7aa700*/
  }
  if ( a2 == 262447 ) /*0x7aa710*/
  {
    if ( BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7aa71d*/
    {
      if ( !BYTE2(stru_B77D80.HashTable_field_0x40) ) /*0x7aa72a*/
      {
        Buffer[0] = 0; /*0x7aa742*/
        StringCSF = GetStringCSF(aTxtWolConnlost, 0, g_Str_File_wonline_cpp, 8460); /*0x7aa749*/
        swprintf(Buffer, (const size_t)StringCSF, v3); /*0x7aa754*/
        Type = BuildingAnim::GetType(); /*0x7aa761*/
        LOWORD(v7) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x7aa776*/
        MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, Buffer, Type, 22, v7, 0); /*0x7aa78d*/
        MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x7aa799*/
        memset(&stru_B76AC4.ambientSoundController[4], 0, 0x10Cu); /*0x7aa7af*/
        memset(&g_WindowManager.__pad_EC[84], 0, 0x10Cu); /*0x7aa7bb*/
        BYTE2(stru_B77D80.HashTable_field_0x40) = 1; /*0x7aa7bd*/
        stru_B77D80.HashTable_field_0x50 = 0; /*0x7aa7c4*/
        Debug::Log(); /*0x7aa7ce*/
        return 0; /*0x7aa7e0*/
      }
    }
    else
    {
      if ( Dialog::FindByHandle((Dialog *)0x113) ) /*0x7aa7e8*/
      {
        v8 = GetStringCSF(aTxtYoureDiscon, 0, g_Str_File_wonline_cpp, 8478); /*0x7aa809*/
        ShowDialogConfirm(v8, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7aa812*/
      }
      LOBYTE(stru_B77D80.HashTable_field_0x40) = 1; /*0x7aa820*/
      BYTE2(stru_B77D80.HashTable_field_0x40) = 1; /*0x7aa825*/
      SetEvent(Handles); /*0x7aa82a*/
      memset(&stru_B76AC4.ambientSoundController[4], 0, 0x10Cu); /*0x7aa841*/
      memset(&g_WindowManager.__pad_EC[84], 0, 0x10Cu); /*0x7aa84d*/
      stru_B77D80.HashTable_field_0x50 = 0; /*0x7aa84f*/
      Debug::Log(); /*0x7aa859*/
    }
  }
  return 0; /*0x7aa6fa*/
}



// ==== 0x007AA870  CChatEventSink::HandleChatChannelList  this=CChatEventSink  sig=csp ====
int __stdcall CChatEventSink::HandleChatChannelList(CChatEventSink *this, int a2, const char *a3)
{
  int referenceCount; // eax
  int v4; // ebx
  int v5; // ebp
  const char *v6; // ebx
  int v7; // eax
  int v8; // ebp
  int v9; // edi
  int occupant; // edx
  int v11; // eax
  int v12; // ebp
  int v13; // eax
  char *v14; // edx
  int v15; // esi
  int abstractFlags; // eax
  int v17; // esi
  int v18; // esi
  String *v19; // ecx
  int v20; // esi
  char *vtable3; // eax
  int v22; // esi
  int v23; // esi
  String *v24; // ecx
  HashTable *v25; // esi
  int v26; // esi
  ObjectClass *v27; // eax
  HWND v28; // eax
  HWND v29; // esi
  HWND DlgItem; // eax
  ObjectClass *v32; // [esp+58h] [ebp-340h]
  _BYTE v33[300]; // [esp+68h] [ebp-330h] BYREF
  char v34[516]; // [esp+194h] [ebp-204h] BYREF

  unknown_libname_73(v33); /*0x7aa87e*/
  memset(v34, 0, 513); /*0x7aa893*/
  *(_DWORD *)&v33[4] = 0; /*0x7aa89b*/
  memset(&v33[12], 0, 12); /*0x7aa8a1*/
  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7aa8ad*/
  {
    *(_DWORD *)&v33[8] = 0; /*0x7aa8c0*/
    if ( a2 == 262459 ) /*0x7aa8ca*/
    {
      *(_DWORD *)&v33[8] = 41; /*0x7aa8cc*/
    }
    else
    {
      if ( CChatEventSink::Check((CChatEventSink *)&stru_B76510.StringVector_field_0x10, &v33[8], 0) ) /*0x7aa8e4*/
        CChatEventSink::EnsureCapacity((CChatEventSink *)&stru_B76510.StringVector_field_0x10, 0); /*0x7aa8f3*/
      if ( a2 < 0 ) /*0x7aa8fa*/
      {
LABEL_103:
        *(_DWORD *)&v33[12] = 0; /*0x7aaf7c*/
        __3_YAXPAX_Z(*(void **)&v33[20]); /*0x7aaf89*/
        goto LABEL_104; /*0x7aaf89*/
      }
      if ( *(_DWORD *)&v33[8] ) /*0x7aa90e*/
      {
        Debug::Log(); /*0x7aa91d*/
        memset(&v33[32], 0, 0x10Cu); /*0x7aa930*/
        referenceCount = stru_B76AC4.?; /*0x7aa932*/
        v4 = 0; /*0x7aa937*/
        if ( stru_B76AC4.? > 0 ) /*0x7aa93b*/
        {
          v5 = 0; /*0x7aa93d*/
          do /*0x7aa985*/
          {
            if ( v5 >= 0 && v4 < referenceCount ) /*0x7aa945*/
              qmemcpy(&v33[32], (const void *)(stru_B76AC4.occupant + v5), 0x10Cu); /*0x7aa959*/
            if ( *(_DWORD *)&v33[72] != -1 ) /*0x7aa962*/
            {
              Array::InsertElement((Array *)&v33[12], &v33[32], *(int *)&v33[12]); /*0x7aa972*/
              referenceCount = stru_B76AC4.?; /*0x7aa977*/
            }
            ++v4; /*0x7aa97c*/
            v5 += 268; /*0x7aa97d*/
          }
          while ( v4 < referenceCount ); /*0x7aa985*/
        }
        stru_B76AC4.? = 0; /*0x7aa987*/
      }
      else
      {
        *(_DWORD *)&g_WindowManager.__pad_EC[636] = 0; /*0x7aa910*/
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
              v7 = stru_B76AC4.?; /*0x7aa9d3*/
              v8 = 0; /*0x7aa9d8*/
              v9 = 0; /*0x7aa9da*/
              if ( stru_B76AC4.? > 0 ) /*0x7aa9de*/
              {
                occupant = stru_B76AC4.occupant; /*0x7aa9e4*/
                while ( 1 ) /*0x7aa9ea*/
                {
                  if ( v9 >= 0 && v9 < v7 ) /*0x7aa9f0*/
                    v8 = occupant; /*0x7aa9f2*/
                  if ( v8 ) /*0x7aa9f6*/
                  {
                    v11 = strcmp((const char *)(v8 + 52), v6 + 52); /*0x7aaa04*/
                    v6 = a3; /*0x7aaa27*/
                    if ( !v11 ) /*0x7aaa30*/
                      break; /*0x7aaa30*/
                  }
                  v7 = stru_B76AC4.?; /*0x7aaa32*/
                  ++v9; /*0x7aaa37*/
                  occupant += 268; /*0x7aaa38*/
                  if ( v9 >= stru_B76AC4.? ) /*0x7aaa40*/
                    goto LABEL_88; /*0x7aaa40*/
                }
                Debug::Log(); /*0x7aaa54*/
                *(_DWORD *)(v8 + 40) = *((_DWORD *)a3 + 10); /*0x7aaa5f*/
              }
            }
          }
          else
          {
            Array::InsertElement((Array *)&stru_B76AC4.?, v6, stru_B76AC4.?); /*0x7aaa74*/
            v12 = 0; /*0x7aaa79*/
            v13 = *(_DWORD *)&v33[12]; /*0x7aaa7b*/
            if ( *(int *)&v33[12] > 0 ) /*0x7aaa81*/
            {
              v14 = *(char **)&v33[20]; /*0x7aaa87*/
              while ( 1 ) /*0x7aaa8b*/
              {
                if ( v12 >= 0 && v12 < v13 ) /*0x7aaa91*/
                  qmemcpy(&v33[32], v14, 0x10Cu); /*0x7aaa9e*/
                if ( !strcmp(&v33[84], v6 + 52) ) /*0x7aaaad*/
                  break; /*0x7aaaad*/
                v13 = *(_DWORD *)&v33[12]; /*0x7aaad4*/
                v6 = a3; /*0x7aaad8*/
                ++v12; /*0x7aaadf*/
                v14 += 268; /*0x7aaae0*/
                if ( v12 >= *(int *)&v33[12] ) /*0x7aaae8*/
                  goto LABEL_43; /*0x7aaae8*/
              }
              v6 = a3; /*0x7aaaec*/
              v15 = *(_DWORD *)&v33[72]; /*0x7aaaf3*/
              Debug::Log(); /*0x7aab01*/
              *((_DWORD *)a3 + 10) = v15; /*0x7aab09*/
            }
LABEL_43:
            String::Assign_Bool((String *)v33, v6 + 52); /*0x7aab0c*/
            CChatEventSink::EncodeString((CChatEventSink *)v33, 39); /*0x7aab1f*/
            String::ToLower((String *)v33); /*0x7aab28*/
            if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x7aab41*/
            {
              unknown_libname_73(&v33[24]); /*0x7aab4b*/
              abstractFlags = g_WebBrowserConfig.?; /*0x7aab50*/
              v17 = 0; /*0x7aab55*/
              if ( g_WebBrowserConfig.? <= 0 ) /*0x7aab59*/
              {
LABEL_51:
                v18 = 0; /*0x7aab96*/
                if ( abstractFlags < 0 ) /*0x7aab9a*/
                  v18 = abstractFlags; /*0x7aab9c*/
                if ( v18 >= g_WebBrowserConfig.? ) /*0x7aaba4*/
                {
                  DynamicVector::EnsureCapacity((DynamicVector *)&g_WebBrowserConfig.?); /*0x7aabab*/
                  abstractFlags = g_WebBrowserConfig.?; /*0x7aabb0*/
                }
                if ( abstractFlags >= g_WebBrowserConfig.? ) /*0x7aabbb*/
                {
                  DynamicVector::EnsureCapacity((DynamicVector *)&g_WebBrowserConfig.?); /*0x7aabc2*/
                  abstractFlags = g_WebBrowserConfig.?; /*0x7aabc7*/
                }
                if ( v18 < abstractFlags ) /*0x7aabce*/
                {
                  memcpy( /*0x7aabeb*/
                    (void *)(g_WebBrowserConfig.? + 4 * v18 + 4),
                    (const void *)(g_WebBrowserConfig.? + 4 * v18),
                    4 * (abstractFlags + 0x3FFFFFFF * v18));
                  abstractFlags = g_WebBrowserConfig.?; /*0x7aabf0*/
                }
                v19 = (String *)(g_WebBrowserConfig.? + 4 * v18); /*0x7aabfe*/
                if ( v19 ) /*0x7aac03*/
                {
                  String::AssignFromPtr(v19, (const char **)v33); /*0x7aac0a*/
                  abstractFlags = g_WebBrowserConfig.?; /*0x7aac0f*/
                }
                g_WebBrowserConfig.? = abstractFlags + 1; /*0x7aac15*/
              }
              else
              {
                while ( 1 ) /*0x7aab5b*/
                {
                  if ( v17 >= 0 && v17 < abstractFlags ) /*0x7aab61*/
                    String::Reassign((String *)&v33[24], (const char **)(g_WebBrowserConfig.? + 4 * v17)); /*0x7aab71*/
                  if ( (unsigned __int8)String::Compare((String *)&v33[24], (const char **)v33) ) /*0x7aab7f*/
                    break; /*0x7aab7f*/
                  abstractFlags = g_WebBrowserConfig.?; /*0x7aab8c*/
                  if ( ++v17 >= g_WebBrowserConfig.? ) /*0x7aab94*/
                    goto LABEL_51; /*0x7aab94*/
                }
              }
              DeleteAndZero((ObjectClass *)&v33[24]); /*0x7aac1e*/
            }
            v20 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 /*0x7aac42*/
                            + 4 * (dword_B76548(v33) & ((1 << SLOBYTE(g_WOL_ConnectionPool.HashMap_field_0x0C)) - 1)));
            if ( v20 ) /*0x7aac47*/
            {
              while ( !(unsigned __int8)String::Compare((String *)v20, (const char **)v33) ) /*0x7aac57*/
              {
                v20 = *(_DWORD *)(v20 + 8); /*0x7aac5d*/
                if ( !v20 ) /*0x7aac62*/
                  goto LABEL_66; /*0x7aac62*/
              }
            }
            else
            {
LABEL_66:
              unknown_libname_73(&v33[28]); /*0x7aac64*/
              vtable3 = (char *)stru_B765EC.?; /*0x7aac6d*/
              v22 = 0; /*0x7aac72*/
              if ( (int)stru_B765EC.? <= 0 ) /*0x7aac76*/
              {
LABEL_72:
                v23 = 0; /*0x7aacb3*/
                if ( (int)vtable3 < 0 ) /*0x7aacb7*/
                  v23 = (int)vtable3; /*0x7aacb9*/
                if ( v23 >= stru_B765EC.? ) /*0x7aacc1*/
                {
                  DynamicVector::EnsureCapacity((DynamicVector *)&stru_B765EC.?); /*0x7aacc8*/
                  vtable3 = (char *)stru_B765EC.?; /*0x7aaccd*/
                }
                if ( (int)vtable3 >= stru_B765EC.? ) /*0x7aacd8*/
                {
                  DynamicVector::EnsureCapacity((DynamicVector *)&stru_B765EC.?); /*0x7aacdf*/
                  vtable3 = (char *)stru_B765EC.?; /*0x7aace4*/
                }
                if ( v23 < (int)vtable3 ) /*0x7aaceb*/
                {
                  memcpy( /*0x7aad08*/
                    (void *)(stru_B765EC.? + 4 * v23 + 4),
                    (const void *)(stru_B765EC.? + 4 * v23),
                    4 * (_DWORD)&vtable3[0x3FFFFFFF * v23]);
                  vtable3 = (char *)stru_B765EC.?; /*0x7aad0d*/
                }
                v24 = (String *)(stru_B765EC.? + 4 * v23); /*0x7aad1b*/
                if ( v24 ) /*0x7aad20*/
                {
                  String::AssignFromPtr(v24, (const char **)v33); /*0x7aad27*/
                  vtable3 = (char *)stru_B765EC.?; /*0x7aad2c*/
                }
                stru_B765EC.? = vtable3 + 1; /*0x7aad32*/
              }
              else
              {
                while ( 1 ) /*0x7aac78*/
                {
                  if ( v22 >= 0 && v22 < (int)vtable3 ) /*0x7aac7e*/
                    String::Reassign((String *)&v33[28], (const char **)(stru_B765EC.? + 4 * v22)); /*0x7aac8e*/
                  if ( (unsigned __int8)String::Compare((String *)&v33[28], (const char **)v33) ) /*0x7aac9c*/
                    break; /*0x7aac9c*/
                  vtable3 = (char *)stru_B765EC.?; /*0x7aaca9*/
                  if ( ++v22 >= (int)stru_B765EC.? ) /*0x7aacb1*/
                    goto LABEL_72; /*0x7aacb1*/
                }
              }
              DeleteAndZero((ObjectClass *)&v33[28]); /*0x7aad3b*/
            }
            v25 = g_WOL_HashTable; /*0x7aad40*/
            v26 = *(_DWORD *)(*(_DWORD *)v25->__pad_0 /*0x7aad5c*/
                            + 4
                            * (((int (__thiscall *)(_BYTE *))g_WOL_HashTable->HashTable_field_0x18)(v33)
                             & ((1 << v25->HashTable_field_0x0C) - 1)));
            if ( v26 ) /*0x7aad61*/
            {
              while ( !(unsigned __int8)String::Compare((String *)v26, (const char **)v33) ) /*0x7aad71*/
              {
                v26 = *(_DWORD *)(v26 + 112); /*0x7aad73*/
                if ( !v26 ) /*0x7aad78*/
                  goto LABEL_87; /*0x7aad78*/
              }
            }
            else
            {
LABEL_87:
              strcat(v34, String::GetOrEmpty((String *)v33)); /*0x7aad7a*/
              strcat(v34, asc_8318B8); /*0x7aadd7*/
              ++*(_DWORD *)&v33[4]; /*0x7aade5*/
            }
          }
        }
        else
        {
          Array::InsertElement((Array *)&g_WindowManager.__pad_EC[636], v6, *(int *)&g_WindowManager.__pad_EC[636]); /*0x7aa9ae*/
        }
LABEL_88:
        if ( *(int *)&v33[4] > 20 ) /*0x7aadee*/
        {
          (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(*(_DWORD *)g_UIPointerTable + 20))( /*0x7aae1f*/
            g_UIPointerTable,
            stru_B76188.__pad_20,
            g_WOL_GameConfig,
            v34,
            g_NetworkRematchState & 0xFFFF00,
            -1,
            0,
            0);
          (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(_DWORD *)g_UIPointerTable + 56))( /*0x7aae4b*/
            g_UIPointerTable,
            stru_B76188.__pad_20,
            g_WOL_GameConfig,
            v34,
            g_NetworkRematchState & 0xFFFF00);
          *(_DWORD *)&v33[4] = 0; /*0x7aae5c*/
          memset(v34, 0, 0x200u); /*0x7aae64*/
        }
        v6 = (const char *)*((_DWORD *)v6 + 12); /*0x7aae66*/
        a3 = v6; /*0x7aae6b*/
      }
      while ( v6 ); /*0x7aae72*/
      if ( *(_DWORD *)&v33[4] ) /*0x7aae7e*/
      {
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(*(_DWORD *)g_UIPointerTable + 20))( /*0x7aaead*/
          g_UIPointerTable,
          stru_B76188.__pad_20,
          g_WOL_GameConfig,
          v34,
          g_NetworkRematchState & 0xFFFF00,
          -1,
          0,
          0);
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(_DWORD *)g_UIPointerTable + 56))( /*0x7aaed9*/
          g_UIPointerTable,
          stru_B76188.__pad_20,
          g_WOL_GameConfig,
          v34,
          g_NetworkRematchState & 0xFFFF00);
        memset(v34, 0, 0x200u); /*0x7aaeea*/
      }
    }
    SetEvent(dword_B73690); /*0x7aaef2*/
    if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x7aaf0a*/
    {
      Debug::Log(); /*0x7aaf18*/
    }
    else
    {
      v27 = (ObjectClass *)Dialog::FindByHandle((Dialog *)0x116); /*0x7aaf27*/
      if ( v27 ) /*0x7aaf2e*/
        FillBuddyListWOL(v27); /*0x7aaf32*/
      if ( *(_DWORD *)&v33[8] ) /*0x7aaf3d*/
      {
        GameListRenderWOL(v32); /*0x7aaf77*/
      }
      else
      {
        PopulateWOLLobbyListBox(v32); /*0x7aaf3f*/
        v28 = (HWND)Dialog::FindByHandle((Dialog *)0x113); /*0x7aaf49*/
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
  *(_DWORD *)&v33[12] = 0; /*0x7aa8af*/
  __3_YAXPAX_Z(0); /*0x7aa8b4*/
LABEL_104:
  DeleteAndZero((ObjectClass *)v33); /*0x7aaf8e*/
  return 0; /*0x7aaf9a*/
}



// ==== 0x007AAFB0  CChatEventSink::Unadvise  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::Unadvise(CChatEventSink *this, int a2, const char *a3, const char *a4)
{
  const char *v4; // edi
  const char *v5; // esi
  bool v6; // bl
  char *v7; // esi
  wchar_t *v8; // eax

  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) && a2 >= 0 ) /*0x7aafc5*/
  {
    v4 = a4; /*0x7aafcb*/
    String::Assign((String *)&a2, a4); /*0x7aafd5*/
    v5 = a3; /*0x7aafda*/
    if ( a3 ) /*0x7aafe0*/
    {
      if ( (*a3 & 1) != 0 ) /*0x7aafe9*/
      {
        v6 = 1; /*0x7aafeb*/
      }
      else if ( Dialog::FindByHandle((Dialog *)0xC2) ) /*0x7aaff4*/
      {
        v6 = 1; /*0x7aaffd*/
      }
      else
      {
        v6 = Dialog::FindByHandle((Dialog *)0xC9) || g_WOL_BuddyList.DynamicVector_field_0x10 != 0; /*0x7ab00d*/
      }
    }
    else
    {
      v6 = 0; /*0x7aafe2*/
    }
    DeleteAndZero((ObjectClass *)&a2); /*0x7ab021*/
    if ( v6 && IsBuddyOrIgnoreWOL(v5) ) /*0x7ab02d*/
    {
      String::Assign((String *)&a2, v4); /*0x7ab03b*/
      CharStringToWide((wchar_t **)&a4, (const char **)&a2); /*0x7ab048*/
      DeleteAndZero((ObjectClass *)&a2); /*0x7ab051*/
      v7 = (char *)(v5 + 36); /*0x7ab056*/
      if ( _strcmpi(unk_A8B380, v7) ) /*0x7ab05f*/
      {
        v8 = WideString::GetOrEmpty((wchar_t **)&a4); /*0x7ab06f*/
        Dialog::ShowMessage(16711935, (size_t)g_Str_Trace__hs, v7, v8); /*0x7ab081*/
      }
      DeleteAndZero::Alt((DeleteAndZero *)&a4); /*0x7ab08d*/
    }
  }
  return 0; /*0x7ab092*/
}



// ==== 0x007AB0A0  CChatEventSink::DispatchStub_42  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_42(
        CChatEventSink *this,
        int a2,
        const char *a3,
        wchar_t *String)
{
  wchar_t *v4; // edi
  const char *v5; // esi
  bool v6; // bl
  bool v7; // zf
  void *DynamicVector_field_0x10; // eax
  char *v9; // esi

  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) && a2 >= 0 ) /*0x7ab0b5*/
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
      else if ( Dialog::FindByHandle((Dialog *)0xC2) ) /*0x7ab0e4*/
      {
        v6 = 1; /*0x7ab0ed*/
      }
      else if ( Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7ab0f6*/
      {
        v6 = 1; /*0x7ab0ff*/
      }
      else
      {
        v7 = (unsigned __int8)WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7ab10c*/
        DynamicVector_field_0x10 = g_WOL_BuddyList.DynamicVector_field_0x10; /*0x7ab10e*/
        if ( v7 ) /*0x7ab113*/
          DynamicVector_field_0x10 = (void *)dword_B779DC; /*0x7ab115*/
        v6 = DynamicVector_field_0x10 != 0; /*0x7ab11c*/
      }
    }
    else
    {
      v6 = 0; /*0x7ab0d2*/
    }
    DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x7ab123*/
    if ( v6 && IsBuddyOrIgnoreWOL(v5) ) /*0x7ab12f*/
    {
      v9 = (char *)(v5 + 36); /*0x7ab138*/
      if ( _strcmpi(unk_A8B380, v9) ) /*0x7ab141*/
        Dialog::ShowMessage(16711935, (size_t)g_Str_Trace__hs, v9, v4); /*0x7ab15a*/
    }
  }
  return 0; /*0x7ab162*/
}



// ==== 0x007AB170  CChatEventSink::EnumDependents  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::EnumDependents(
        CChatEventSink *this,
        int a2,
        int a3,
        const char *a4,
        const char *a5)
{
  const char *v5; // edi
  const char *v6; // esi
  bool v7; // bl
  char *v8; // esi
  wchar_t *v9; // eax

  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) && a2 >= 0 ) /*0x7ab185*/
  {
    v5 = a5; /*0x7ab18b*/
    String::Assign((String *)&a2, a5); /*0x7ab195*/
    v6 = a4; /*0x7ab19a*/
    if ( a4 ) /*0x7ab1a0*/
    {
      if ( (*a4 & 1) != 0 ) /*0x7ab1a9*/
      {
        v7 = 1; /*0x7ab1ab*/
      }
      else if ( Dialog::FindByHandle((Dialog *)0xC2) ) /*0x7ab1b4*/
      {
        v7 = 1; /*0x7ab1bd*/
      }
      else
      {
        v7 = Dialog::FindByHandle((Dialog *)0xC9) || g_WOL_BuddyList.DynamicVector_field_0x10 != 0; /*0x7ab1cd*/
      }
    }
    else
    {
      v7 = 0; /*0x7ab1a2*/
    }
    DeleteAndZero((ObjectClass *)&a2); /*0x7ab1e1*/
    if ( v7 && IsBuddyOrIgnoreWOL(v6) ) /*0x7ab1ed*/
    {
      String::Assign((String *)&a2, v5); /*0x7ab1fb*/
      CharStringToWide((wchar_t **)&a5, (const char **)&a2); /*0x7ab208*/
      DeleteAndZero((ObjectClass *)&a2); /*0x7ab211*/
      v8 = (char *)(v6 + 36); /*0x7ab216*/
      if ( _strcmpi(unk_A8B380, v8) ) /*0x7ab21f*/
      {
        v9 = WideString::GetOrEmpty((wchar_t **)&a5); /*0x7ab22f*/
        Dialog::ShowMessage(3166463, (size_t)g_Str_Trace__hs, v8, v9); /*0x7ab241*/
      }
      DeleteAndZero::Alt((DeleteAndZero *)&a5); /*0x7ab24d*/
    }
  }
  return 0; /*0x7ab252*/
}



// ==== 0x007AB260  CChatEventSink::DispatchStub_43  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_43(
        CChatEventSink *this,
        int a2,
        int a3,
        const char *a4,
        wchar_t *String)
{
  wchar_t *v5; // edi
  const char *v6; // esi
  bool v7; // bl
  bool v8; // zf
  void *DynamicVector_field_0x10; // eax
  char *v10; // esi

  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) && a2 >= 0 ) /*0x7ab275*/
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
      else if ( Dialog::FindByHandle((Dialog *)0xC2) ) /*0x7ab2a4*/
      {
        v7 = 1; /*0x7ab2ad*/
      }
      else if ( Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7ab2b6*/
      {
        v7 = 1; /*0x7ab2bf*/
      }
      else
      {
        v8 = (unsigned __int8)WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7ab2cc*/
        DynamicVector_field_0x10 = g_WOL_BuddyList.DynamicVector_field_0x10; /*0x7ab2ce*/
        if ( v8 ) /*0x7ab2d3*/
          DynamicVector_field_0x10 = (void *)dword_B779DC; /*0x7ab2d5*/
        v7 = DynamicVector_field_0x10 != 0; /*0x7ab2dc*/
      }
    }
    else
    {
      v7 = 0; /*0x7ab292*/
    }
    DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x7ab2e3*/
    if ( v7 && IsBuddyOrIgnoreWOL(v6) ) /*0x7ab2ef*/
    {
      v10 = (char *)(v6 + 36); /*0x7ab2f8*/
      if ( _strcmpi(unk_A8B380, v10) ) /*0x7ab301*/
        Dialog::ShowMessage(3166463, (size_t)g_Str_Trace__hs, v10, v5); /*0x7ab31a*/
    }
  }
  return 0; /*0x7ab322*/
}



// ==== 0x007AB330  CChatEventSink::COMStub_Return0  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::COMStub_Return0(CChatEventSink *this, int a2, int a3, int a4)
{
  return 0; /*0x7ab332*/
}



// ==== 0x007AB340  CChatEventSink::StubReturnFalse  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::StubReturnFalse(CChatEventSink *this, int a2, int a3)
{
  return 0; /*0x7ab342*/
}



// ==== 0x007AB350  CChatEventSink::DispatchStub_29  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_29(CChatEventSink *this, int a2, __time32_t Time)
{
  wchar_t *StringCSF; // eax
  char *v5; // [esp-4h] [ebp-194h]
  wchar_t Buffer[200]; // [esp+0h] [ebp-190h] BYREF

  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) && !a2 ) /*0x7ab368*/
  {
    v5 = unknown_libname_75(&Time); /*0x7ab381*/
    StringCSF = GetStringCSF(aTxtBannedtill, 0, g_Str_File_wonline_cpp, 8809); /*0x7ab38c*/
    swprintf(Buffer, (const size_t)StringCSF, (const wchar_t *const)v5); /*0x7ab397*/
    ShowDialogConfirm(Buffer, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7ab3ac*/
  }
  return 0; /*0x7ab3b3*/
}



// ==== 0x007AB3C0  CChatEventSink::DispatchStub_31  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_31(CChatEventSink *this, int a2, _BYTE *a3, int a4)
{
  wchar_t *StringCSF; // eax
  wchar_t *v6; // eax
  char *v7; // [esp-4h] [ebp-4h]
  char *v8; // [esp-4h] [ebp-4h]

  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7ab3c7*/
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
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_30(CChatEventSink *this, int a2, void *a3, int a4, int a5)
{
  int owningHouseIndex; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  ObjectClass *v10; // eax
  ObjectClass *nextObject; // esi
  ObjectClass *v12; // ebp
  char v13; // dl
  unsigned int v14; // ecx
  char v15; // dl
  int v17; // [esp+0h] [ebp-E0h]
  int v18; // [esp+4h] [ebp-DCh]
  char v19[108]; // [esp+8h] [ebp-D8h] BYREF
  _DWORD v20[27]; // [esp+74h] [ebp-6Ch] BYREF

  if ( a2 ) /*0x7ab44c*/
    return 0; /*0x7ab65d*/
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7ab452*/
  v6 = 0; /*0x7ab458*/
  v18 = 0; /*0x7ab45c*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7ab460*/
  {
    v7 = 0; /*0x7ab467*/
    v17 = 0; /*0x7ab46b*/
    while ( 1 ) /*0x7ab46f*/
    {
      if ( v7 < 0 ) /*0x7ab471*/
        goto LABEL_30; /*0x7ab471*/
      if ( v6 >= owningHouseIndex ) /*0x7ab479*/
        goto LABEL_30; /*0x7ab479*/
      qmemcpy(v20, (char *)g_WOL_UserList.nextObject + v7, sizeof(v20)); /*0x7ab49a*/
      if ( _strcmpi((char *)&v20[9], (char *)a3) ) /*0x7ab4a5*/
        goto LABEL_30; /*0x7ab4af*/
      v20[0] = a4 | a5 & v20[0]; /*0x7ab4d4*/
      v8 = v6; /*0x7ab4db*/
      if ( g_WOL_UserList.owningHouseIndex ) /*0x7ab4df*/
      {
        if ( v6 >= g_WOL_UserList.owningHouseIndex ) /*0x7ab4ed*/
          v8 = g_WOL_UserList.owningHouseIndex - 1; /*0x7ab4ef*/
        memcpy( /*0x7ab51b*/
          (char *)g_WOL_UserList.nextObject + 108 * v8,
          &g_WOL_UserList.nextObject->alignmentPadding69[108 * v8 + 3],
          108 * g_WOL_UserList.owningHouseIndex - 36 * (3 * v8 + 3));
        --g_WOL_UserList.owningHouseIndex; /*0x7ab52f*/
        if ( 3 * g_WOL_UserList.owningHouseIndex <= g_WOL_UserList.fallRate ) /*0x7ab539*/
        {
          v9 = g_WOL_UserList.fallRate / 2; /*0x7ab542*/
          if ( g_WOL_UserList.fallRate / 2 < 10 ) /*0x7ab547*/
            v9 = 10; /*0x7ab549*/
          if ( v9 < g_WOL_UserList.fallRate ) /*0x7ab550*/
          {
            v10 = (ObjectClass *)__2_YAPAXI_Z(108 * v9); /*0x7ab55c*/
            nextObject = g_WOL_UserList.nextObject; /*0x7ab561*/
            v12 = v10; /*0x7ab56c*/
            if ( g_WOL_UserList.nextObject ) /*0x7ab56e*/
            {
              v13 = 108 * LOBYTE(g_WOL_UserList.owningHouseIndex); /*0x7ab580*/
              v14 = (unsigned int)(108 * g_WOL_UserList.owningHouseIndex) >> 2; /*0x7ab582*/
              qmemcpy(v10, g_WOL_UserList.nextObject, 4 * v14); /*0x7ab585*/
              qmemcpy(&v10->AbstractClass + v14, &nextObject->AbstractClass + v14, v13 & 3); /*0x7ab58c*/
              nextObject = g_WOL_UserList.nextObject; /*0x7ab58e*/
            }
            __3_YAXPAX_Z(nextObject); /*0x7ab595*/
            g_WOL_UserList.nextObject = v12; /*0x7ab59a*/
            v6 = v18; /*0x7ab5a0*/
            g_WOL_UserList.fallRate = v9; /*0x7ab5a7*/
          }
          v7 = v17; /*0x7ab5ad*/
        }
      }
      qmemcpy(v19, v20, sizeof(v19)); /*0x7ab5c6*/
      *(_DWORD *)&v19[32] = 0; /*0x7ab5cb*/
      if ( dword_B77E48 == 1 ) /*0x7ab5d3*/
        break; /*0x7ab5d3*/
      switch ( dword_B77E48 ) /*0x7ab5dc*/
      {
        case 2: /*0x7ab5dc*/
          InsertBuddyList(v19, 1); /*0x7ab5e4*/
          break;
        case 3: /*0x7ab5dc*/
          InsertBuddyList(v19, 0); /*0x7ab5f6*/
          break;
        case 4: /*0x7ab5dc*/
          FindBuddyList(v19, 1); /*0x7ab608*/
          break;
        case 5: /*0x7ab5dc*/
          FindBuddyList(v19, 0); /*0x7ab61a*/
          break;
        default:
          v15 = 1; /*0x7ab621*/
          goto LABEL_29; /*0x7ab621*/
      }
LABEL_30:
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7ab62c*/
      ++v6; /*0x7ab631*/
      v7 += 108; /*0x7ab632*/
      v18 = v6; /*0x7ab637*/
      v17 = v7; /*0x7ab63b*/
      if ( v6 >= g_WOL_UserList.owningHouseIndex ) /*0x7ab63f*/
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
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_24(CChatEventSink *this, int a2, int a3, int a4, int a5)
{
  NetworkLobby *v5; // edi
  char *v7; // ebx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  HWND v13; // eax
  wchar_t *v14; // eax
  wchar_t *StringCSF; // eax
  char *v16; // [esp-18h] [ebp-81Ch]
  char *v17; // [esp-14h] [ebp-818h]
  char *v18; // [esp-14h] [ebp-818h]
  wchar_t *v19; // [esp-10h] [ebp-814h]
  char *v20; // [esp-10h] [ebp-814h]
  HWND DlgItem; // [esp-10h] [ebp-814h]
  char *v22; // [esp-10h] [ebp-814h]
  ObjectClass *v23; // [esp-Ch] [ebp-810h]
  DeleteAndZero v24[171]; // [esp+0h] [ebp-804h] BYREF

  if ( BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7ab67d*/
    return 0; /*0x7ab67f*/
  if ( a2 < 0 ) /*0x7ab693*/
    return 0; /*0x7ab695*/
  v23 = (ObjectClass *)v5; /*0x7ab6a2*/
  memset(byte_B785C0, 0, sizeof(byte_B785C0)); /*0x7ab6af*/
  v7 = (char *)(a3 + 52); /*0x7ab6c5*/
  if ( !_strnicmp((const char *)(a3 + 52), g_Str_Lob_41_, strlen(g_Str_Lob_41_)) ) /*0x7ab6cf*/
  {
    v8 = atol((const char *)(strlen(g_Str_Lob_41_) + a3 + 52)); /*0x7ab6f2*/
    v9 = v8 / 8; /*0x7ab6fd*/
    v10 = v8 % 8; /*0x7ab70c*/
    if ( v9 ) /*0x7ab70f*/
      sprintf(byte_B785C0, "%s %d", *(const char **)&g_WindowManager.__pad_EC[4 * v10 + 648], v9 + 1); /*0x7ab72f*/
    else
      sprintf(byte_B785C0, "%s", *(const char **)&g_WindowManager.__pad_EC[4 * v10 + 648]); /*0x7ab719*/
  }
  else
  {
    sprintf(byte_B785C0, "%s", v7); /*0x7ab744*/
  }
  if ( (BYTE1(*(_DWORD *)a4) & 0x80u) == 0 ) /*0x7ab758*/
  {
    if ( !NetworkLobby::CheckMinPlayers(v5) ) /*0x7ab860*/
    {
      v22 = CharToWideString((_BYTE *)(a5 + 36)); /*0x7ab878*/
      v18 = CharToWideString(v7); /*0x7ab880*/
      v16 = CharToWideString((_BYTE *)(a4 + 36)); /*0x7ab889*/
      StringCSF = GetStringCSF(aTxtUserKicked, 0, g_Str_File_wonline_cpp, 8940); /*0x7ab89b*/
      Dialog::ShowMessage(-1, (size_t)StringCSF, v16, v18, v22); /*0x7ab8a8*/
    }
  }
  else
  {
    unknown_libname_74(v24); /*0x7ab762*/
    if ( stru_B76AC4.ambientSoundController[4] && Event_Helper((ObjectClass *)v5) ) /*0x7ab770*/
    {
      v19 = GetStringCSF(g_Str_TXT_CHANNEL_FULL, 0, g_Str_File_wonline_cpp, 8912); /*0x7ab78f*/
      WideString::Assign_Alt((void **)v24, v19); /*0x7ab790*/
    }
    else
    {
      memset(&v24[0].DeleteAndZero_field_0x04, 0, 0x800u); /*0x7ab79d*/
      v20 = CharToWideString((_BYTE *)(a5 + 36)); /*0x7ab7ae*/
      v17 = CharToWideString(v7); /*0x7ab7b6*/
      v11 = GetStringCSF(aTxtYoureKicked, 0, g_Str_File_wonline_cpp, 8916); /*0x7ab7c8*/
      swprintf((wchar_t *const)&v24[0].DeleteAndZero_field_0x04, (const size_t)v11, (const wchar_t *const)v17, v20); /*0x7ab7d3*/
      WideString::Assign_Alt((void **)v24, (wchar_t *)&v24[0].DeleteAndZero_field_0x04); /*0x7ab7e4*/
    }
    if ( stru_B76AC4.ambientSoundController[4] ) /*0x7ab7f0*/
    {
      v13 = (HWND)Dialog::FindByHandle((Dialog *)0x113); /*0x7ab829*/
      if ( v13 ) /*0x7ab830*/
      {
        DlgItem = GetDlgItem(v13, 1343); /*0x7ab83e*/
        v14 = WideString::GetOrEmpty((wchar_t **)v24); /*0x7ab843*/
        DrawDialogText(-1, v14, DlgItem); /*0x7ab850*/
      }
      DeleteAndZero::Alt(v24); /*0x7ab859*/
    }
    else
    {
      v12 = WideString::GetOrEmpty((wchar_t **)v24); /*0x7ab7fd*/
      ShowDialogConfirm(v12, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7ab806*/
      ++dword_B77DD4; /*0x7ab815*/
      DeleteAndZero::Alt(v24); /*0x7ab81a*/
    }
  }
  LeaveChannelWOL((const char *)a4); /*0x7ab8b2*/
  DisplayRankingsWOL(0); /*0x7ab8bb*/
  GameListRenderWOL(v23); /*0x7ab8c0*/
  return 0; /*0x7ab681*/
}



// ==== 0x007AB8E0  CChatEventSink::DispatchStub_33  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_33(CChatEventSink *this, int a2, int a3)
{
  int v4; // ebp
  int v5; // edi
  String *v6; // eax
  String *v7; // esi
  int v8; // eax
  int v9; // ecx
  char *v10; // eax
  ObjectClass *PlayerProfile; // eax
  char v12; // [esp+7h] [ebp-2Dh]
  int v13; // [esp+8h] [ebp-2Ch] BYREF
  ComPtr v14; // [esp+Ch] [ebp-28h] BYREF

  v12 = 0; /*0x7ab8ec*/
  if ( a2 >= 0 ) /*0x7ab8f0*/
  {
    v4 = a3; /*0x7ab909*/
    if ( a3 ) /*0x7ab90f*/
    {
      do /*0x7abac8*/
      {
        unknown_libname_73(&a2); /*0x7ab91b*/
        String::Assign_Bool((String *)&a2, (const char *)(v4 + 36)); /*0x7ab928*/
        String::ToLower((String *)&a2); /*0x7ab931*/
        HashTable::Lookup((HashTable *)&g_WOL_ConnectionPool, (const char **)&a2, &v13); /*0x7ab945*/
        v5 = *(_DWORD *)(v4 + 100); /*0x7ab94a*/
        v6 = (String *)__2_YAPAXI_Z(0xCu); /*0x7ab94f*/
        v7 = v6; /*0x7ab954*/
        if ( v6 ) /*0x7ab95b*/
          unknown_libname_73(v6); /*0x7ab95f*/
        else
          v7 = 0; /*0x7ab966*/
        String::Reassign(v7, (const char **)&a2); /*0x7ab96f*/
        *(_DWORD *)&v7->m_3[1] = v5; /*0x7ab978*/
        *(_DWORD *)v7[1].__pad_0 = 0; /*0x7ab981*/
        v8 = CComObject_CChatEventSink___ATL::Check((int)&g_WOL_ConnectionPool, (int)&a2); /*0x7ab984*/
        v9 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * v8); /*0x7ab98f*/
        *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * v8) = v7; /*0x7ab992*/
        if ( v9 ) /*0x7ab997*/
          *(_DWORD *)v7[1].__pad_0 = v9; /*0x7ab999*/
        v14.ComPtr_field_0x18 = g_WOL_ConnectionPool.HashMap_field_0x08; /*0x7ab9b0*/
        v14.ComPtr_field_0x1C = 0; /*0x7ab9b8*/
        *(_QWORD *)&v14.ComPtr_field_0x10 = (unsigned int)++g_WOL_ConnectionPool.HashMap_field_0x04; /*0x7ab9ac*/
        if ( (double)(unsigned int)g_WOL_ConnectionPool.HashMap_field_0x04 /*0x7ab9d0*/
           / (double)g_WOL_ConnectionPool.HashMap_field_0x08 >= dbl_B76558 )
          HashTable::Grow((HashTable *)&g_WOL_ConnectionPool); /*0x7ab9d7*/
        v10 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7ab9e1*/
        if ( !_strcmpi((char *)(a3 + 36), v10) ) /*0x7ab9ef*/
        {
          v14.ComPtr_field_0x08 = 0; /*0x7aba03*/
          LOBYTE(v14.ComPtr_field_0x0C) = 0; /*0x7aba07*/
          ReadRegistryOptionsWOL((ObjectClass *)&v14.ComPtr_field_0x08); /*0x7aba0b*/
          ComPtr::Constructor(&v14); /*0x7aba14*/
          *(_DWORD *)v14.__pad_0 = &rc_ptr<PlayerProfile>::`vftable'; /*0x7aba22*/
          if ( (unsigned __int8)Flag::IsNot2((Flag *)&v14.ComPtr_field_0x08) ) /*0x7aba26*/
          {
            PlayerProfile = LoadPlayerProfile( /*0x7aba38*/
                              (ObjectClass *)&v14.ComPtr_field_0x20,
                              (const char **)&g_WindowManager.__pad_EC[684]);
            ComPtr::Set(&v14, (int)PlayerProfile->?); /*0x7aba45*/
            v14.ComPtr_field_0x20 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x7aba4e*/
            ComPtr::Release((ComPtr *)&v14.ComPtr_field_0x20); /*0x7aba52*/
          }
          else
          {
            ComPtr::Set(&v14, stru_B75E48.ComPtr_field_0x04); /*0x7aba64*/
          }
          GadgetClass::TrackState(v14.ComPtr_field_0x04, *(_DWORD *)(a3 + 100), 2); /*0x7aba77*/
          if ( (unsigned __int8)Flag::IsNot2((Flag *)&v14.ComPtr_field_0x08) ) /*0x7aba80*/
            SaveProfileWOL(v14.ComPtr_field_0x04, (const char **)&g_WindowManager.__pad_EC[684]); /*0x7aba92*/
          Debug::Log(); /*0x7abaa0*/
          v12 = 1; /*0x7abaac*/
          *(_DWORD *)v14.__pad_0 = &rc_ptr<PlayerProfile>::`vftable'; /*0x7abab1*/
          ComPtr::Release(&v14); /*0x7abab5*/
        }
        v4 = *(_DWORD *)(v4 + 32); /*0x7ababa*/
        DeleteAndZero((ObjectClass *)&a2); /*0x7abac1*/
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
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_35(CChatEventSink *this, int a2, char *a3)
{
  int v3; // esi
  int v4; // esi
  int v5; // edi
  ScalarDtor *v6; // ecx
  ScalarDtor v7; // edi
  double v8; // st7
  int v9; // esi
  String *v10; // eax
  String *v11; // esi
  int v12; // edx
  int v13; // eax
  _BYTE v15[12]; // [esp+0h] [ebp-4Ch] BYREF
  char v16[64]; // [esp+Ch] [ebp-40h] BYREF

  unknown_libname_73(v15); /*0x7abafa*/
  strcpy(v16, unk_A8B380); /*0x7abb1c*/
  String::Assign_Bool((String *)v15, v16); /*0x7abb2e*/
  String::ToLower((String *)v15); /*0x7abb37*/
  v3 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 /*0x7abb5d*/
                 + 4 * (dword_B76548(v15) & ((1 << SLOBYTE(g_WOL_ConnectionPool.HashMap_field_0x0C)) - 1)));
  if ( v3 ) /*0x7abb62*/
  {
    while ( !(unsigned __int8)String::Compare((String *)v3, (const char **)v15) ) /*0x7abb76*/
    {
      v3 = *(_DWORD *)(v3 + 8); /*0x7abb78*/
      if ( !v3 ) /*0x7abb7d*/
        goto LABEL_19; /*0x7abb7d*/
    }
    if ( g_WOL_ConnectionPool.HashMap_field_0x04 ) /*0x7abb8b*/
    {
      *(_QWORD *)&v15[4] = (unsigned int)(g_WOL_ConnectionPool.HashMap_field_0x04 - 1); /*0x7abb98*/
      *(float *)&v15[4] = (double)*(__int64 *)&v15[4] / (double)g_WOL_ConnectionPool.HashMap_field_0x08; /*0x7abbb4*/
      v4 = dword_B76548(v15) & ((1 << SLOBYTE(g_WOL_ConnectionPool.HashMap_field_0x0C)) - 1); /*0x7abbcc*/
      v5 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * v4); /*0x7abbd3*/
      if ( v5 ) /*0x7abbd8*/
      {
        if ( (unsigned __int8)String::Compare((String *)v5, (const char **)v15) ) /*0x7abbe5*/
        {
          v6 = *(ScalarDtor **)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * v4); /*0x7abbf4*/
          v7 = v6[2]; /*0x7abbf9*/
          if ( v6 ) /*0x7abbfc*/
            ScalarDtor::DeleteAndZero(v6, 1); /*0x7abc00*/
          v8 = *(float *)&v15[4]; /*0x7abc0a*/
          *(ScalarDtor *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * v4) = v7; /*0x7abc0e*/
          --g_WOL_ConnectionPool.HashMap_field_0x04; /*0x7abc1d*/
          if ( v8 <= dbl_B76550 ) /*0x7abc27*/
LABEL_18:
            HashMap::Shrink(&g_WOL_ConnectionPool); /*0x7abc7e*/
        }
        else
        {
          v9 = *(_DWORD *)(v5 + 8); /*0x7abc2b*/
          if ( v9 ) /*0x7abc30*/
          {
            while ( !(unsigned __int8)String::Compare((String *)v9, (const char **)v15) ) /*0x7abc40*/
            {
              v5 = v9; /*0x7abc42*/
              v9 = *(_DWORD *)(v9 + 8); /*0x7abc44*/
              if ( !v9 ) /*0x7abc49*/
                goto LABEL_17; /*0x7abc49*/
            }
            *(_DWORD *)(v5 + 8) = *(_DWORD *)(v9 + 8); /*0x7abc50*/
            --g_WOL_ConnectionPool.HashMap_field_0x04; /*0x7abc5c*/
            ScalarDtor::DeleteAndZero((ScalarDtor *)v9, 1); /*0x7abc68*/
          }
LABEL_17:
          if ( *(float *)&v15[4] <= dbl_B76550 ) /*0x7abc7c*/
            goto LABEL_18; /*0x7abc7c*/
        }
      }
    }
  }
LABEL_19:
  v10 = (String *)__2_YAPAXI_Z(0xCu); /*0x7abc88*/
  v11 = v10; /*0x7abc8f*/
  if ( v10 ) /*0x7abc96*/
    unknown_libname_73(v10); /*0x7abc9a*/
  else
    v11 = 0; /*0x7abca1*/
  String::Reassign(v11, (const char **)v15); /*0x7abcaa*/
  *(_DWORD *)v11[1].__pad_0 = 0; /*0x7abcaf*/
  *(_DWORD *)&v11->m_3[1] = a3; /*0x7abcb6*/
  v12 = dword_B76548(v15) & ((1 << SLOBYTE(g_WOL_ConnectionPool.HashMap_field_0x0C)) - 1); /*0x7abcd7*/
  v13 = *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * v12); /*0x7abcd9*/
  *(_DWORD *)(*(_DWORD *)g_WOL_ConnectionPool.__pad_0 + 4 * v12) = v11; /*0x7abcdc*/
  if ( v13 ) /*0x7abce1*/
    *(_DWORD *)v11[1].__pad_0 = v13; /*0x7abce3*/
  *(_QWORD *)&v15[4] = (unsigned int)++g_WOL_ConnectionPool.HashMap_field_0x04; /*0x7abcf6*/
  *(_DWORD *)&v15[4] = g_WOL_ConnectionPool.HashMap_field_0x08; /*0x7abd03*/
  if ( (double)(unsigned int)g_WOL_ConnectionPool.HashMap_field_0x04 / (double)g_WOL_ConnectionPool.HashMap_field_0x08 >= dbl_B76558 ) /*0x7abd1d*/
    HashTable::Grow((HashTable *)&g_WOL_ConnectionPool); /*0x7abd24*/
  DeleteAndZero((ObjectClass *)v15); /*0x7abd2d*/
  return 0; /*0x7abd34*/
}



// ==== 0x007ABD40  CChatEventSink::DispatchStub_34  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_34(CChatEventSink *this, int a2, float a3)
{
  float v3; // esi
  float v4; // ebp
  int v5; // esi
  int v6; // esi
  int v7; // edi
  ScalarDtor *v8; // ecx
  ScalarDtor v9; // edi
  double v10; // st7
  int v11; // esi
  int v12; // edi
  String *v13; // eax
  String *v14; // esi
  int v15; // edx
  int v16; // eax

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
        String::Assign_Bool((String *)&a2, (const char *)(LODWORD(v4) + 36)); /*0x7abd74*/
        v5 = *(_DWORD *)(stru_B765EC.lastLayer + 4 * (dword_B76698(&a2) & ((1 << SLOBYTE(stru_B765EC.location[1])) - 1))); /*0x7abd98*/
        if ( !v5 ) /*0x7abd9d*/
          goto LABEL_21; /*0x7abd9d*/
        while ( !(unsigned __int8)String::Compare((String *)v5, (const char **)&a2) ) /*0x7abdb1*/
        {
          v5 = *(_DWORD *)(v5 + 8); /*0x7abdb3*/
          if ( !v5 ) /*0x7abdb8*/
            goto LABEL_21; /*0x7abdb8*/
        }
        if ( !*(_DWORD *)&stru_B765EC.isInLogic ) /*0x7abdc6*/
          goto LABEL_21; /*0x7abdc6*/
        a3 = (double)(unsigned int)(*(_DWORD *)&stru_B765EC.isInLogic - 1) / (double)stru_B765EC.location[0]; /*0x7abdef*/
        v6 = dword_B76698(&a2) & ((1 << SLOBYTE(stru_B765EC.location[1])) - 1); /*0x7abe07*/
        v7 = *(_DWORD *)(stru_B765EC.lastLayer + 4 * v6); /*0x7abe0e*/
        if ( !v7 ) /*0x7abe13*/
          goto LABEL_21; /*0x7abe13*/
        if ( (unsigned __int8)String::Compare((String *)v7, (const char **)&a2) ) /*0x7abe20*/
        {
          v8 = *(ScalarDtor **)(stru_B765EC.lastLayer + 4 * v6); /*0x7abe2f*/
          v9 = v8[2]; /*0x7abe34*/
          if ( v8 ) /*0x7abe37*/
            ScalarDtor::DeleteAndZero(v8, 1); /*0x7abe3b*/
          v10 = a3; /*0x7abe45*/
          *(ScalarDtor *)(stru_B765EC.lastLayer + 4 * v6) = v9; /*0x7abe49*/
          --*(_DWORD *)&stru_B765EC.isInLogic; /*0x7abe58*/
          if ( v10 > dbl_B766A0 ) /*0x7abe62*/
            goto LABEL_21; /*0x7abe62*/
        }
        else
        {
          v11 = *(_DWORD *)(v7 + 8); /*0x7abe66*/
          if ( v11 ) /*0x7abe6b*/
          {
            while ( !(unsigned __int8)String::Compare((String *)v11, (const char **)&a2) ) /*0x7abe7b*/
            {
              v7 = v11; /*0x7abe7d*/
              v11 = *(_DWORD *)(v11 + 8); /*0x7abe7f*/
              if ( !v11 ) /*0x7abe84*/
                goto LABEL_19; /*0x7abe84*/
            }
            *(_DWORD *)(v7 + 8) = *(_DWORD *)(v11 + 8); /*0x7abe8b*/
            --*(_DWORD *)&stru_B765EC.isInLogic; /*0x7abe97*/
            ScalarDtor::DeleteAndZero((ScalarDtor *)v11, 1); /*0x7abea3*/
          }
LABEL_19:
          if ( a3 > dbl_B766A0 ) /*0x7abeb7*/
            goto LABEL_21; /*0x7abeb7*/
        }
        HashMap::Shrink((HashMap *)&stru_B765EC.lastLayer); /*0x7abebe*/
LABEL_21:
        v12 = *(_DWORD *)(LODWORD(v4) + 104); /*0x7abec3*/
        v13 = (String *)__2_YAPAXI_Z(0xCu); /*0x7abec8*/
        v14 = v13; /*0x7abecd*/
        if ( v13 ) /*0x7abed4*/
          unknown_libname_73(v13); /*0x7abed8*/
        else
          v14 = 0; /*0x7abedf*/
        String::Reassign(v14, (const char **)&a2); /*0x7abee8*/
        *(_DWORD *)&v14->m_3[1] = v12; /*0x7abef1*/
        *(_DWORD *)v14[1].__pad_0 = 0; /*0x7abef4*/
        v15 = dword_B76698(&a2) & ((1 << SLOBYTE(stru_B765EC.location[1])) - 1); /*0x7abf11*/
        v16 = *(_DWORD *)(stru_B765EC.lastLayer + 4 * v15); /*0x7abf13*/
        *(_DWORD *)(stru_B765EC.lastLayer + 4 * v15) = v14; /*0x7abf16*/
        if ( v16 ) /*0x7abf1b*/
          *(_DWORD *)v14[1].__pad_0 = v16; /*0x7abf1d*/
        ++*(_DWORD *)&stru_B765EC.isInLogic; /*0x7abf40*/
        if ( (double)*(unsigned int *)&stru_B765EC.isInLogic / (double)stru_B765EC.location[0] >= dbl_B766A8 ) /*0x7abf54*/
          HashTable::Grow((HashTable *)&stru_B765EC.lastLayer); /*0x7abf5b*/
        v4 = *(float *)(LODWORD(v4) + 32); /*0x7abf60*/
      }
      while ( v4 != 0.0 ); /*0x7abd74*/
    }
    DisplayRankingsWOL(0); /*0x7abf6c*/
    DeleteAndZero((ObjectClass *)&a2); /*0x7abf79*/
    return 0; /*0x7abf80*/
  }
}



// ==== 0x007ABFA0  CChatEventSink::DispatchStub_36  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_36(CChatEventSink *this, int a2, int a3)
{
  int v3; // ebp
  int v4; // esi
  int v5; // esi
  int v6; // edi
  ScalarDtor *v7; // ecx
  ScalarDtor v8; // edi
  int v9; // esi
  String *v10; // eax
  String *v11; // esi
  int v12; // edx
  int v13; // eax
  char v15[64]; // [esp+Ch] [ebp-40h] BYREF
  int v16; // [esp+54h] [ebp+8h]

  if ( a2 ) /*0x7abfac*/
  {
    Debug::Log(); /*0x7ac208*/
    return 0; /*0x7ac210*/
  }
  v3 = a3; /*0x7abfb3*/
  dword_A8B3AC = a3; /*0x7abfbd*/
  unknown_libname_73(&a3); /*0x7abfc3*/
  strcpy(v15, unk_A8B380); /*0x7abfe5*/
  String::Assign_Bool((String *)&a3, v15); /*0x7abff7*/
  String::ToLower((String *)&a3); /*0x7ac000*/
  v4 = *(_DWORD *)(stru_B765EC.lastLayer + 4 * (dword_B76698(&a3) & ((1 << SLOBYTE(stru_B765EC.location[1])) - 1))); /*0x7ac024*/
  if ( v4 ) /*0x7ac029*/
  {
    while ( !(unsigned __int8)String::Compare((String *)v4, (const char **)&a3) ) /*0x7ac03d*/
    {
      v4 = *(_DWORD *)(v4 + 8); /*0x7ac03f*/
      if ( !v4 ) /*0x7ac044*/
        goto LABEL_20; /*0x7ac044*/
    }
    if ( *(_DWORD *)&stru_B765EC.isInLogic ) /*0x7ac052*/
    {
      *(float *)&v16 = (double)(unsigned int)(*(_DWORD *)&stru_B765EC.isInLogic - 1) / (double)stru_B765EC.location[0]; /*0x7ac07b*/
      v5 = dword_B76698(&a3) & ((1 << SLOBYTE(stru_B765EC.location[1])) - 1); /*0x7ac093*/
      v6 = *(_DWORD *)(stru_B765EC.lastLayer + 4 * v5); /*0x7ac09a*/
      if ( v6 ) /*0x7ac09f*/
      {
        if ( (unsigned __int8)String::Compare((String *)v6, (const char **)&a3) ) /*0x7ac0ac*/
        {
          v7 = *(ScalarDtor **)(stru_B765EC.lastLayer + 4 * v5); /*0x7ac0bb*/
          v8 = v7[2]; /*0x7ac0c0*/
          if ( v7 ) /*0x7ac0c3*/
            ScalarDtor::DeleteAndZero(v7, 1); /*0x7ac0c7*/
          *(ScalarDtor *)(stru_B765EC.lastLayer + 4 * v5) = v8; /*0x7ac0d5*/
          --*(_DWORD *)&stru_B765EC.isInLogic; /*0x7ac0e4*/
          if ( *(float *)&v16 > dbl_B766A0 ) /*0x7ac0ee*/
            goto LABEL_20; /*0x7ac0ee*/
        }
        else
        {
          v9 = *(_DWORD *)(v6 + 8); /*0x7ac0f2*/
          if ( v9 ) /*0x7ac0f7*/
          {
            while ( !(unsigned __int8)String::Compare((String *)v9, (const char **)&a3) ) /*0x7ac107*/
            {
              v6 = v9; /*0x7ac109*/
              v9 = *(_DWORD *)(v9 + 8); /*0x7ac10b*/
              if ( !v9 ) /*0x7ac110*/
                goto LABEL_18; /*0x7ac110*/
            }
            *(_DWORD *)(v6 + 8) = *(_DWORD *)(v9 + 8); /*0x7ac117*/
            --*(_DWORD *)&stru_B765EC.isInLogic; /*0x7ac123*/
            ScalarDtor::DeleteAndZero((ScalarDtor *)v9, 1); /*0x7ac12f*/
          }
LABEL_18:
          if ( *(float *)&v16 > dbl_B766A0 ) /*0x7ac143*/
            goto LABEL_20; /*0x7ac143*/
        }
        HashMap::Shrink((HashMap *)&stru_B765EC.lastLayer); /*0x7ac14a*/
      }
    }
  }
LABEL_20:
  v10 = (String *)__2_YAPAXI_Z(0xCu); /*0x7ac14f*/
  v11 = v10; /*0x7ac156*/
  if ( v10 ) /*0x7ac15d*/
    unknown_libname_73(v10); /*0x7ac161*/
  else
    v11 = 0; /*0x7ac168*/
  String::Reassign(v11, (const char **)&a3); /*0x7ac171*/
  *(_DWORD *)&v11->m_3[1] = v3; /*0x7ac17a*/
  *(_DWORD *)v11[1].__pad_0 = 0; /*0x7ac17d*/
  v12 = dword_B76698(&a3) & ((1 << SLOBYTE(stru_B765EC.location[1])) - 1); /*0x7ac19a*/
  v13 = *(_DWORD *)(stru_B765EC.lastLayer + 4 * v12); /*0x7ac19c*/
  *(_DWORD *)(stru_B765EC.lastLayer + 4 * v12) = v11; /*0x7ac19f*/
  if ( v13 ) /*0x7ac1a4*/
    *(_DWORD *)v11[1].__pad_0 = v13; /*0x7ac1a6*/
  ++*(_DWORD *)&stru_B765EC.isInLogic; /*0x7ac1bd*/
  if ( (double)*(unsigned int *)&stru_B765EC.isInLogic / (double)stru_B765EC.location[0] >= dbl_B766A8 ) /*0x7ac1e0*/
    HashTable::Grow((HashTable *)&stru_B765EC.lastLayer); /*0x7ac1e7*/
  DeleteAndZero((ObjectClass *)&a3); /*0x7ac1f0*/
  return 0; /*0x7ac1f7*/
}



// ==== 0x007AC220  CChatEventSink::DispatchStub_37  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_37(CChatEventSink *this, int a2, int a3)
{
  ObjectClass *v3; // ebx
  int v4; // ebx
  int v5; // eax
  int v6; // esi
  String *v7; // ecx
  HWND v8; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  ObjectClass *v11; // eax
  HWND v12; // esi
  HWND v13; // eax
  ObjectClass *v15; // [esp-4h] [ebp-78h]
  char v16[108]; // [esp+8h] [ebp-6Ch] BYREF

  if ( a2 >= 0 ) /*0x7ac22b*/
  {
    v15 = v3; /*0x7ac238*/
    v4 = a3; /*0x7ac23b*/
    if ( a3 ) /*0x7ac23d*/
    {
      while ( 1 ) /*0x7ac24e*/
      {
        String::Assign((String *)&a3, (const char *)(v4 + 36)); /*0x7ac24e*/
        if ( (unsigned __int8)MapSeed::CheckName((MapSeed *)&a3) ) /*0x7ac25a*/
          break; /*0x7ac25a*/
LABEL_20:
        DeleteAndZero((ObjectClass *)&a3); /*0x7ac3f9*/
        v4 = *(_DWORD *)(v4 + 32); /*0x7ac405*/
        if ( !v4 ) /*0x7ac40a*/
          goto LABEL_21; /*0x7ac40a*/
      }
      String::AssignFromPtr((String *)&a2, (const char **)&a3); /*0x7ac276*/
      StringVector::Insert((StringVector *)&g_WindowManager, (const char **)&a2, *(int *)g_WindowManager.__pad_0); /*0x7ac28f*/
      StringVector::Insert( /*0x7ac2a8*/
        (StringVector *)&stru_B76900.needsRedraw,
        (const char **)&a2,
        *(int *)&stru_B76900.needsRedraw);
      v5 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7ac2ad*/
      v6 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7ac2b2*/
      if ( *(int *)g_WOL_BuddyList.__pad_0 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x7ac2be*/
      {
        DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7ac2c5*/
        v5 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7ac2ca*/
      }
      if ( v5 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x7ac2d5*/
      {
        DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7ac2dc*/
        v5 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7ac2e1*/
      }
      if ( v6 < v5 ) /*0x7ac2e8*/
      {
        memcpy( /*0x7ac305*/
          (void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v6 + 4),
          (const void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v6),
          4 * (v5 + 0x3FFFFFFF * v6));
        v5 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7ac30a*/
      }
      v7 = (String *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v6); /*0x7ac318*/
      if ( v7 ) /*0x7ac31d*/
      {
        String::AssignFromPtr(v7, (const char **)&a2); /*0x7ac327*/
        v5 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x7ac32c*/
      }
      *(_DWORD *)g_WOL_BuddyList.__pad_0 = v5 + 1; /*0x7ac337*/
      if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x7ac33c*/
      {
        if ( (unsigned int)(time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20) < 5 ) /*0x7ac35a*/
        {
LABEL_19:
          DeleteAndZero((ObjectClass *)&a2); /*0x7ac3ed*/
          goto LABEL_20; /*0x7ac3f4*/
        }
        DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x7ac365*/
      }
      if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x7ac371*/
      {
        if ( (unsigned __int8)DynamicStringArray::Get( /*0x7ac37f*/
                                (DynamicStringArray *)&stru_B76900.needsRedraw,
                                (char **)&g_WindowManager.__pad_14[16],
                                0) )
          DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x7ac38f*/
        *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x7ac39b*/
        memset(v16, 0, sizeof(v16)); /*0x7ac3ab*/
        strcpy(&v16[36], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x7ac3d8*/
        (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v16); /*0x7ac3ea*/
      }
      goto LABEL_19; /*0x7ac3ea*/
    }
LABEL_21:
    SendGameListWOL(v15); /*0x7ac410*/
    v8 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7ac41a*/
    if ( v8 ) /*0x7ac422*/
    {
      stru_B77D80.HashTable_field_0x48 &= ~0x200u; /*0x7ac430*/
      if ( !stru_B77D80.HashTable_field_0x48 ) /*0x7ac436*/
        CloseDialog(v8, 0); /*0x7ac43c*/
    }
    Current = (HWND)Dialog::GetCurrent(); /*0x7ac441*/
    DlgItem = GetDlgItem(Current, 1344); /*0x7ac452*/
    if ( DlgItem ) /*0x7ac456*/
      SetFocus(DlgItem); /*0x7ac459*/
    v11 = (ObjectClass *)Dialog::FindByHandle((Dialog *)0x116); /*0x7ac464*/
    v12 = (HWND)v11; /*0x7ac469*/
    if ( v11 ) /*0x7ac46d*/
    {
      FillBuddyListWOL(v11); /*0x7ac471*/
      KillTimer(v12, 0x704u); /*0x7ac47c*/
      v13 = GetDlgItem(v12, 1796); /*0x7ac48a*/
      EnableWindow(v13, 1); /*0x7ac48d*/
    }
  }
  return 0; /*0x7ac493*/
}



// ==== 0x007AC4A0  CChatEventSink::DispatchStub_38  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_38(CChatEventSink *this, int a2, int a3)
{
  return 0; /*0x7ac4a2*/
}



// ==== 0x007AC4B0  CChatEventSink::DispatchStub_39  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_39(CChatEventSink *this, int a2, int a3)
{
  return 0; /*0x7ac4b2*/
}



// ==== 0x007AC4C0  CChatEventSink::DispatchStub_45  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_45(CChatEventSink *this, int a2, int a3)
{
  return 0; /*0x7ac4c2*/
}



// ==== 0x007AC4D0  CChatEventSink::DispatchStub_46  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_46(CChatEventSink *this, int a2, int a3)
{
  return 0; /*0x7ac4d2*/
}



// ==== 0x007AC4E0  CChatEventSink::DispatchStub_47  this=CChatEventSink  sig=csp ====
int __stdcall CComObject_CChatEventSink___ATL::DispatchStub_47(CChatEventSink *this, int a2, int a3)
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
void **__thiscall WonlineStringDialogControl::QueryInterface(WonlineStringDialogControl *this, char a2)
{
  *this = (WonlineStringDialogControl)&WonlineStringDialogControl::`vftable'; /*0x7ac5d6*/
  DeleteAndZero((ObjectClass *)(this + 3)); /*0x7ac5dc*/
  *this = (WonlineStringDialogControl)&off_7F7624; /*0x7ac5e3*/
  OwnerDrawControl::InitVtable((OwnerDrawControl *)this); /*0x7ac5e9*/
  if ( (a2 & 1) != 0 ) /*0x7ac5f3*/
    __3_YAXPAX_Z(this); /*0x7ac5f6*/
  return (void **)this; /*0x7ac600*/
}



// ==== 0x007AC610  SimpleWonlineDialogControl::CreateGameWOL_Create_7AC610  this=WonlineStringDialogControl  sig=csp ====
_DWORD *__thiscall CreateGameWOL_Create_7AC610(SimpleWonlineDialogControl *this)
{
  SimpleDialogControl::Constructor((SimpleDialogControl *)this); /*0x7ac613*/
  *(_DWORD *)this->__pad_0 = &off_7F7624; /*0x7ac61b*/
  unknown_libname_73((_DWORD *)this + 3); /*0x7ac621*/
  *(_DWORD *)this->__pad_0 = &WonlineStringDialogControl::`vftable'; /*0x7ac626*/
  return this->__pad_0; /*0x7ac62e*/
}



// ==== 0x007AC630  CreateGameDialogControl::Constructor_WonlineStringDialogControl  this=CreateGameDialogControl  sig=csp ====
void **__thiscall WonlineStringDialogControl_12::Constructor_WonlineStringDialogControl(
        CreateGameDialogControl *this,
        char a2)
{
  this->m_0 = (int)&WonlineStringDialogControl::`vftable'; /*0x7ac636*/
  DeleteAndZero((ObjectClass *)&this->__pad_9[3]); /*0x7ac63c*/
  this->m_0 = (int)&off_7F7624; /*0x7ac643*/
  OwnerDrawControl::InitVtable((OwnerDrawControl *)this); /*0x7ac649*/
  if ( (a2 & 1) != 0 ) /*0x7ac653*/
    __3_YAXPAX_Z(this); /*0x7ac656*/
  return (void **)this; /*0x7ac660*/
}



// ==== 0x007AC670  ObjectClass::System_Init_7AC670  this=ObjectClass  sig=csp ====
int __thiscall System_Init_7AC670(ObjectClass *this)
{
  int result; // eax

  result = (int)this->AbstractClass; /*0x7ac670*/
  if ( this->AbstractClass ) /*0x7ac670*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x7ac679*/
  return result; /*0x7ac67c*/
}



// ==== 0x007AC680  ObjectClass::System_Init_7AC680  this=ObjectClass  sig=csp ====
int __thiscall System_Init_7AC680(ObjectClass *this)
{
  int result; // eax

  result = (int)this->AbstractClass; /*0x7ac680*/
  if ( this->AbstractClass ) /*0x7ac680*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x7ac689*/
  return result; /*0x7ac68c*/
}



// ==== 0x007AC690  _CComObject_VCChatEventSink_ATL::AddRef  this=?$CComObject@VCChatEventSink@@@ATL  sig=csp ====
LONG __thiscall CComObject_CChatEventSink___ATL::AddRef(_CComObject_VCChatEventSink_ATL *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x7ac69e*/
}



// ==== 0x007AC6B0  _CComObject_VCChatEventSink_ATL::Release  this=?$CComObject@VCChatEventSink@@@ATL  sig=csp ====
LONG __thiscall CComObject_CChatEventSink___ATL::Release(_CComObject_VCChatEventSink_ATL *this)
{
  LONG v1; // ebx
  char *Block; // [esp+14h] [ebp+4h]

  v1 = InterlockedDecrement((volatile LONG *)Block + 1); /*0x7ac6c4*/
  if ( !v1 && Block ) /*0x7ac6cc*/
  {
    *(_DWORD *)Block = &ATL::CComObject<CChatEventSink>::`vftable'; /*0x7ac6d3*/
    *((_DWORD *)Block + 1) = 1; /*0x7ac6d9*/
    InterlockedDecrement(&Addend); /*0x7ac6df*/
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 8)); /*0x7ac6e5*/
    __3_YAXPAX_Z(Block); /*0x7ac6ec*/
  }
  return v1; /*0x7ac6f4*/
}



// ==== 0x007AC700  _CComObject_VCChatEventSink_ATL::QueryInterface  this=?$CComObject@VCChatEventSink@@@ATL  sig=csp ====
int __thiscall CComObject_CChatEventSink___ATL::QueryInterface(
        _CComObject_VCChatEventSink_ATL *this,
        _DWORD *a2,
        char **a3)
{
  char ***v3; // esi
  int result; // eax
  char **v5; // eax
  BOOL v6; // ebp
  char **v7; // eax
  char **v8; // eax
  char *v9; // esi
  _DWORD *v10; // [esp+1Ch] [ebp+Ch]

  v3 = (char ***)&off_7F7698; /*0x7ac70a*/
  if ( !v10 ) /*0x7ac70f*/
    return -2147467261; /*0x7ac71a*/
  *v10 = 0; /*0x7ac721*/
  if ( !*a3 && !a3[1] && a3[2] == (char *)192 && a3[3] == (char *)1174405120 ) /*0x7ac743*/
  {
    (*(void (__stdcall **)(_DWORD *))(*a2 + 4))(a2); /*0x7ac756*/
    *v10 = a2; /*0x7ac759*/
    return 0; /*0x7ac761*/
  }
  while ( 1 ) /*0x7ac76d*/
  {
    v5 = *v3; /*0x7ac76d*/
    v6 = *v3 == 0; /*0x7ac776*/
    if ( !*v3 || *v5 == *a3 && v5[1] == a3[1] && v5[2] == a3[2] && v5[3] == a3[3] ) /*0x7ac7a0*/
      break; /*0x7ac7a0*/
LABEL_17:
    v8 = v3[5]; /*0x7ac7c3*/
    v3 += 3; /*0x7ac7c6*/
    if ( !v8 ) /*0x7ac7cb*/
      return -2147467262; /*0x7ac7cd*/
  }
  v7 = v3[2]; /*0x7ac7a2*/
  if ( v7 != (char **)1 ) /*0x7ac7a8*/
  {
    result = ((int (__stdcall *)(_DWORD *, char **, _DWORD *, char **))v7)(a2, a3, v10, v3[1]); /*0x7ac7b5*/
    if ( !result || !v6 && result < 0 ) /*0x7ac7c1*/
      return result; /*0x7ac7c1*/
    goto LABEL_17; /*0x7ac7c1*/
  }
  v9 = (char *)v3[1] + (_DWORD)a2; /*0x7ac7e0*/
  (*(void (__stdcall **)(char *))(*(_DWORD *)v9 + 4))(v9); /*0x7ac7e5*/
  *v10 = v9; /*0x7ac7e8*/
  return 0; /*0x7ac711*/
}



// ==== 0x007AC800  _CComObject_VCNetUtilEventSink_ATL::AddRef  this=?$CComObject@VCNetUtilEventSink@@@ATL  sig=csp ====
LONG __thiscall ComStreamClass::AddRef(_CComObject_VCNetUtilEventSink_ATL *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x7ac80e*/
}



// ==== 0x007AC820  _CComObject_VCNetUtilEventSink_ATL::Release  this=?$CComObject@VCNetUtilEventSink@@@ATL  sig=csp ====
LONG __thiscall ComStreamClass::Release(_CComObject_VCNetUtilEventSink_ATL *this)
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
int __thiscall ComStreamClass::QueryInterface(_CComObject_VCNetUtilEventSink_ATL *this, _DWORD *a2, char **a3)
{
  char ***v3; // esi
  int result; // eax
  char **v5; // eax
  BOOL v6; // ebp
  char **v7; // eax
  char **v8; // eax
  char *v9; // esi
  _DWORD *v10; // [esp+1Ch] [ebp+Ch]

  v3 = (char ***)&off_7F7650; /*0x7ac87a*/
  if ( !v10 ) /*0x7ac87f*/
    return -2147467261; /*0x7ac88a*/
  *v10 = 0; /*0x7ac891*/
  if ( !*a3 && !a3[1] && a3[2] == (char *)192 && a3[3] == (char *)1174405120 ) /*0x7ac8b3*/
  {
    (*(void (__stdcall **)(_DWORD *))(*a2 + 4))(a2); /*0x7ac8c6*/
    *v10 = a2; /*0x7ac8c9*/
    return 0; /*0x7ac8d1*/
  }
  while ( 1 ) /*0x7ac8dd*/
  {
    v5 = *v3; /*0x7ac8dd*/
    v6 = *v3 == 0; /*0x7ac8e6*/
    if ( !*v3 || *v5 == *a3 && v5[1] == a3[1] && v5[2] == a3[2] && v5[3] == a3[3] ) /*0x7ac910*/
      break; /*0x7ac910*/
LABEL_17:
    v8 = v3[5]; /*0x7ac933*/
    v3 += 3; /*0x7ac936*/
    if ( !v8 ) /*0x7ac93b*/
      return -2147467262; /*0x7ac93d*/
  }
  v7 = v3[2]; /*0x7ac912*/
  if ( v7 != (char **)1 ) /*0x7ac918*/
  {
    result = ((int (__stdcall *)(_DWORD *, char **, _DWORD *, char **))v7)(a2, a3, v10, v3[1]); /*0x7ac925*/
    if ( !result || !v6 && result < 0 ) /*0x7ac931*/
      return result; /*0x7ac931*/
    goto LABEL_17; /*0x7ac931*/
  }
  v9 = (char *)v3[1] + (_DWORD)a2; /*0x7ac950*/
  (*(void (__stdcall **)(char *))(*(_DWORD *)v9 + 4))(v9); /*0x7ac955*/
  *v10 = v9; /*0x7ac958*/
  return 0; /*0x7ac881*/
}



// ==== 0x007AC970  _DynamicVectorClass_PAUtConnInfoStruct::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall WonlineStringDialogControl_12::ClearBuffer(_DynamicVectorClass_PAUtConnInfoStruct *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x7ac976*/
  this->m_10 = 0; /*0x7ac979*/
  if ( v2 && BYTE1(this->m_C) ) /*0x7ac980*/
  {
    __3_YAXPAX_Z(v2); /*0x7ac986*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7ac98e*/
  }
  BYTE1(this->m_C) = 0; /*0x7ac991*/
  this->m_8 = 0; /*0x7ac994*/
}



// ==== 0x007AC9A0  _DynamicVectorClass_PAUtConnInfoStruct::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall WonlineStringDialogControl_12::PointerToIndex(
        _DynamicVectorClass_PAUtConnInfoStruct *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7ac9a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x7ac9b5*/
  else
    return 0; /*0x7ac9a7*/
}



// ==== 0x007AC9C0  _VectorClass_PAUtConnInfoStruct::Seek  this=VectorClass  sig=csp ====
int __thiscall WonlineStringDialogControl_12::Seek(_VectorClass_PAUtConnInfoStruct *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x7ac9ca*/
}



// ==== 0x007AC9D0  ObjectClass::GetBuddyEntryWOL  this=ObjectClass  sig=csp ====
int __thiscall GetBuddyEntryWOL(ObjectClass *this, _DWORD *a2, int a3)
{
  int result; // eax
  int v4; // ecx

  result = a3; /*0x7ac9d0*/
  if ( a3 < 0 || a3 >= (int)this->AbstractClass ) /*0x7ac9da*/
  {
    LOBYTE(result) = 0; /*0x7ac9f4*/
  }
  else
  {
    result = (int)this->?; /*0x7ac9e3*/
    v4 = result + 248 * a3; /*0x7ac9e6*/
    LOBYTE(result) = 1; /*0x7ac9ed*/
    *a2 = v4; /*0x7ac9ef*/
  }
  return result; /*0x7ac9f1*/
}



// ==== 0x007ACA00  DynamicClass::Insert  this=DynamicClass  sig=csp ====
char __thiscall DynamicClass::Insert(DynamicClass *this, const void *a2, int a3)
{
  int v4; // ebp
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // esi
  void *v9; // edx
  const void *v10; // esi
  int v11; // eax
  unsigned int v12; // esi
  void *v13; // edx
  const void *v14; // esi
  void *v15; // edi
  void *v17; // [esp+10h] [ebp-4h]
  void *v18; // [esp+10h] [ebp-4h]
  int v19; // [esp+1Ch] [ebp+8h]
  int v20; // [esp+1Ch] [ebp+8h]

  v4 = a3; /*0x7aca05*/
  v5 = (int)*this; /*0x7aca09*/
  if ( a3 > v5 ) /*0x7aca0f*/
    v4 = v5; /*0x7aca11*/
  v6 = *((_DWORD *)this + 1); /*0x7aca13*/
  if ( v4 >= v6 && v5 >= v6 ) /*0x7aca20*/
  {
    v7 = 2 * v5; /*0x7aca22*/
    v19 = 2 * v5; /*0x7aca28*/
    if ( 2 * v5 < 10 ) /*0x7aca2c*/
    {
      v19 = 10; /*0x7aca2e*/
      v7 = 10; /*0x7aca36*/
    }
    v8 = 108 * v7; /*0x7aca40*/
    v9 = (void *)__2_YAPAXI_Z(108 * v7); /*0x7aca49*/
    memset(v9, 0, v8); /*0x7aca54*/
    v17 = v9; /*0x7aca5e*/
    v10 = (const void *)*((_DWORD *)this + 2); /*0x7aca64*/
    if ( v10 ) /*0x7aca69*/
      qmemcpy(v9, v10, 108 * *(_DWORD *)this); /*0x7aca7d*/
    __3_YAXPAX_Z(*((void **)this + 2)); /*0x7aca8a*/
    *((_DWORD *)this + 2) = v17; /*0x7aca9a*/
    *((_DWORD *)this + 1) = v19; /*0x7aca9d*/
  }
  if ( *(_DWORD *)this >= *((_DWORD *)this + 1) ) /*0x7acaa7*/
  {
    v11 = 2 * *(_DWORD *)this; /*0x7acaa9*/
    v20 = v11; /*0x7acaae*/
    if ( v11 < 10 ) /*0x7acab2*/
    {
      v20 = 10; /*0x7acab4*/
      v11 = 10; /*0x7acabc*/
    }
    v12 = 108 * v11; /*0x7acac6*/
    v13 = (void *)__2_YAPAXI_Z(108 * v11); /*0x7acacf*/
    memset(v13, 0, v12); /*0x7acada*/
    v18 = v13; /*0x7acae4*/
    v14 = (const void *)*((_DWORD *)this + 2); /*0x7acaea*/
    if ( v14 ) /*0x7acaef*/
      qmemcpy(v13, v14, 108 * *(_DWORD *)this); /*0x7acb03*/
    __3_YAXPAX_Z(*((void **)this + 2)); /*0x7acb10*/
    *((_DWORD *)this + 2) = v18; /*0x7acb20*/
    *((_DWORD *)this + 1) = v20; /*0x7acb23*/
  }
  if ( v4 < *(_DWORD *)this ) /*0x7acb2a*/
    memcpy( /*0x7acb53*/
      (void *)(*((_DWORD *)this + 2) + 36 * (3 * v4 + 3)),
      (const void *)(*((_DWORD *)this + 2) + 108 * v4),
      108 * *(_DWORD *)this - 108 * v4);
  v15 = (void *)(*((_DWORD *)this + 2) + 108 * v4); /*0x7acb65*/
  if ( v15 ) /*0x7acb6a*/
    qmemcpy(v15, a2, 0x6Cu); /*0x7acb75*/
  ++*(_DWORD *)this; /*0x7acb7c*/
  return 1; /*0x7acb79*/
}



// ==== 0x007ACB90  ObjectClass::StartGameWOL_Start_7ACB90  this=ObjectClass  sig=csp ====
char __thiscall StartGameWOL_Start_7ACB90(ObjectClass *this, void *a2, int a3)
{
  if ( a3 < 0 || a3 >= (int)this->AbstractClass ) /*0x7acb9b*/
    return 0; /*0x7acbbc*/
  qmemcpy(a2, (char *)this->? + 108 * a3, 0x6Cu); /*0x7acbb3*/
  return 1; /*0x7acbb8*/
}



// ==== 0x007ACBD0  ObjectClass::?_Release__NonReentrantLock_details_Concurrency__QAEXXZ_1  this=ObjectClass  sig=csp ====
void __thiscall __Release__NonReentrantLock_details_Concurrency__QAEXXZ_1(
        Concurrency::details::_NonReentrantLock *this)
{
  *(_DWORD *)this = 0; /*0x7acbd0*/
}



// ==== 0x007ACBE0  ObjectClass::ConnectAndLoginWOL_Connect_7ACBE0  this=ObjectClass  sig=csp ====
char __thiscall ConnectAndLoginWOL_Connect_7ACBE0(ObjectClass *this, const char **a2, char **Block)
{
  String *v4; // eax
  String *v5; // esi
  char *v6; // ecx
  int v7; // edx
  int v8; // ecx
  int vtable2; // esi
  char *v10; // eax
  char *v11; // ecx
  void *v12; // edi
  unsigned int v13; // edx
  char **v14; // edi
  char *v15; // esi
  int v16; // edx
  int v17; // ecx
  char *v18; // eax
  const char **v20; // [esp+18h] [ebp+4h]
  char **Blocka; // [esp+1Ch] [ebp+8h]

  v4 = (String *)__2_YAPAXI_Z(0xCu); /*0x7acbea*/
  v5 = v4; /*0x7acbef*/
  if ( v4 ) /*0x7acbf6*/
    unknown_libname_73(v4); /*0x7acbfa*/
  else
    v5 = 0; /*0x7acc01*/
  String::Reassign(v5, a2); /*0x7acc0a*/
  v6 = *Block; /*0x7acc13*/
  *(_DWORD *)v5[1].__pad_0 = 0; /*0x7acc15*/
  *(_DWORD *)&v5->m_3[1] = v6; /*0x7acc1c*/
  v7 = ((int (__thiscall *)(const char **))this->?)(a2) & ((1 << (int)this->?) - 1); /*0x7acc2f*/
  v8 = *((_DWORD *)this->AbstractClass + v7); /*0x7acc33*/
  *((_DWORD *)this->AbstractClass + v7) = v5; /*0x7acc3b*/
  if ( v8 ) /*0x7acc3d*/
    *(_DWORD *)v5[1].__pad_0 = v8; /*0x7acc3f*/
  vtable2 = (int)this->?; /*0x7acc45*/
  v10 = (char *)this->? + 1; /*0x7acc48*/
  this->? = v10; /*0x7acc55*/
  if ( (double)(unsigned int)v10 / (double)vtable2 >= *(double *)&this->owningHouseIndex && LOBYTE(this->?) != 1 ) /*0x7acc7e*/
  {
    Blocka = (char **)this->AbstractClass; /*0x7acc89*/
    v11 = (char *)this->? + 1; /*0x7acc97*/
    this->? = (void *)(2 * vtable2); /*0x7acc99*/
    this->? = v11; /*0x7acc9c*/
    v12 = (void *)__2_YAPAXI_Z(8 * vtable2); /*0x7acca7*/
    v13 = 4 * (int)this->?; /*0x7accac*/
    this->AbstractClass = v12; /*0x7accb3*/
    memset(v12, 0, v13); /*0x7accb8*/
    if ( vtable2 > 0 ) /*0x7accc3*/
    {
      v14 = Blocka; /*0x7accc5*/
      v20 = (const char **)vtable2; /*0x7accc9*/
      do /*0x7acd07*/
      {
        v15 = *v14; /*0x7acccd*/
        if ( *v14 ) /*0x7acccd*/
        {
          do /*0x7accf9*/
          {
            v16 = ((int (__thiscall *)(char *))this->?)(v15) & ((1 << (int)this->?) - 1); /*0x7acce3*/
            v17 = *((_DWORD *)this->AbstractClass + v16); /*0x7acce7*/
            *((_DWORD *)this->AbstractClass + v16) = v15; /*0x7acced*/
            v18 = (char *)*((_DWORD *)v15 + 2); /*0x7accef*/
            *((_DWORD *)v15 + 2) = v17; /*0x7accf2*/
            v15 = v18; /*0x7accf5*/
          }
          while ( v18 ); /*0x7accf9*/
        }
        ++v14; /*0x7accff*/
        v20 = (const char **)((char *)v20 - 1); /*0x7acd03*/
      }
      while ( v20 ); /*0x7acd07*/
    }
    __3_YAXPAX_Z(Blocka); /*0x7acd0e*/
  }
  return 1; /*0x7acd16*/
}



// ==== 0x007ACD30  Array::CleanupArrayWOL  this=Array  sig=csp ====
int __thiscall Array::CleanupArrayWOL(Array *this)
{
  int i; // edi
  int result; // eax

  for ( i = 0; i < *(_DWORD *)this->__pad_0; ++i ) /*0x7acd39*/
  {
    DeleteAndZero((ObjectClass *)(*(_DWORD *)this->__pad_8 + 4 * i)); /*0x7acd41*/
    result = *(_DWORD *)this->__pad_0; /*0x7acd46*/
  }
  *(_DWORD *)this->__pad_0 = 0; /*0x7acd4d*/
  return result; /*0x7acd53*/
}



// ==== 0x007ACD60  DynamicArray::Remove  this=DynamicArray  sig=csp ====
char __thiscall DynamicArray::Remove(DynamicArray *this, int a2)
{
  int v3; // eax
  int v5; // esi
  int v6; // eax
  int DynamicArray_field_0x04; // ecx
  int v8; // ebp
  void *v9; // eax
  const void *DynamicArray_field_0x08; // esi
  int v11; // [esp+8h] [ebp+4h]

  v3 = *(_DWORD *)this->__pad_0; /*0x7acd63*/
  if ( !*(_DWORD *)this->__pad_0 ) /*0x7acd63*/
    return 0; /*0x7acd69*/
  v5 = a2; /*0x7acd71*/
  if ( a2 < 0 ) /*0x7acd78*/
    v5 = 0; /*0x7acd7a*/
  if ( v5 >= v3 ) /*0x7acd7e*/
    v5 = v3 - 1; /*0x7acd80*/
  DeleteAndZero((ObjectClass *)(4 * v5 + this->DynamicArray_field_0x08)); /*0x7acd8f*/
  memcpy( /*0x7acdb0*/
    (void *)(this->DynamicArray_field_0x08 + 4 * v5),
    (const void *)(this->DynamicArray_field_0x08 + 4 * (v5 + 1)),
    4 * (*(_DWORD *)this->__pad_0 + 0x3FFFFFFF * (v5 + 1)));
  v6 = *(_DWORD *)this->__pad_0 - 1; /*0x7acdbb*/
  *(_DWORD *)this->__pad_0 = v6; /*0x7acdbd*/
  DynamicArray_field_0x04 = this->DynamicArray_field_0x04; /*0x7acdbf*/
  if ( 3 * v6 <= DynamicArray_field_0x04 ) /*0x7acdc7*/
  {
    v8 = DynamicArray_field_0x04 / 2; /*0x7acdd0*/
    if ( DynamicArray_field_0x04 / 2 < 10 ) /*0x7acdd5*/
      v8 = 10; /*0x7acdd7*/
    if ( v8 < DynamicArray_field_0x04 ) /*0x7acdde*/
    {
      v9 = (void *)__2_YAPAXI_Z(4 * v8); /*0x7acde8*/
      DynamicArray_field_0x08 = (const void *)this->DynamicArray_field_0x08; /*0x7acded*/
      v11 = (int)v9; /*0x7acdf5*/
      if ( DynamicArray_field_0x08 ) /*0x7acdf9*/
        qmemcpy(v9, DynamicArray_field_0x08, 4 * *(_DWORD *)this->__pad_0); /*0x7ace07*/
      __3_YAXPAX_Z((void *)this->DynamicArray_field_0x08); /*0x7ace14*/
      this->DynamicArray_field_0x08 = v11; /*0x7ace20*/
      this->DynamicArray_field_0x04 = v8; /*0x7ace23*/
    }
  }
  return 1; /*0x7acd6b*/
}



// ==== 0x007ACE30  DynamicStringArray::Get  this=DynamicStringArray  sig=csp ====
int __thiscall DynamicStringArray::Get(DynamicStringArray *this, char **a2, int a3)
{
  int result; // eax

  result = a3; /*0x7ace30*/
  if ( a3 < 0 || a3 >= *(_DWORD *)this ) /*0x7ace3a*/
  {
    LOBYTE(result) = 0; /*0x7ace51*/
  }
  else
  {
    result = (int)String::Reassign((String *)a2, (const char **)(*((_DWORD *)this + 2) + 4 * a3)); /*0x7ace47*/
    LOBYTE(result) = 1; /*0x7ace4c*/
  }
  return result; /*0x7ace4e*/
}



// ==== 0x007ACE60  HashTable::CleanupAndResize  this=HashTable  sig=csp ====
int __thiscall HashTable::CleanupAndResize(HashTable *this)
{
  unsigned int i; // ebp
  ObjectClass *v3; // esi
  ObjectClass *v4; // edi
  int result; // eax
  unsigned int HashTable_field_0x08; // esi
  int HashTable_field_0x0C; // ecx
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

  for ( i = 0; i < this->HashTable_field_0x08; *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * i - 4) = 0 ) /*0x7ace67*/
  {
    v3 = *(ObjectClass **)(*(_DWORD *)this->__pad_0 + 4 * i); /*0x7ace72*/
    while ( v3 ) /*0x7ace77*/
    {
      v4 = v3; /*0x7ace79*/
      v3 = (ObjectClass *)v3->?; /*0x7ace7b*/
      DeleteAndZero(v4); /*0x7ace84*/
      __3_YAXPAX_Z(v4); /*0x7ace8a*/
    }
    ++i; /*0x7ace98*/
  }
  result = this->HashTable_field_0x30; /*0x7acea8*/
  HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7aceab*/
  for ( this->HashTable_field_0x04 = 0; HashTable_field_0x08 > result; HashTable_field_0x08 = this->HashTable_field_0x08 ) /*0x7aceb7*/
  {
    if ( LOBYTE(this->HashTable_field_0x14) ) /*0x7acebd*/
      break; /*0x7acec2*/
    if ( HashTable_field_0x08 > result ) /*0x7aceca*/
    {
      HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x7aced0*/
      v8 = *(int **)this->__pad_0; /*0x7aced3*/
      v17 = *(int **)this->__pad_0; /*0x7aced7*/
      this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x7acede*/
      this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x7acee8*/
      v9 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x7acef4*/
      v10 = 4 * this->HashTable_field_0x08; /*0x7acef9*/
      *(_DWORD *)this->__pad_0 = v9; /*0x7acf00*/
      memset(v9, 0, v10); /*0x7acf05*/
      if ( (int)HashTable_field_0x08 > 0 ) /*0x7acf10*/
      {
        v11 = v8; /*0x7acf12*/
        v12 = HashTable_field_0x08; /*0x7acf14*/
        do /*0x7acf48*/
        {
          v13 = *v11; /*0x7acf16*/
          if ( *v11 ) /*0x7acf16*/
          {
            do /*0x7acf42*/
            {
              v14 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v13) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7acf2c*/
              v15 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v14); /*0x7acf30*/
              *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v14) = v13; /*0x7acf36*/
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
    result = this->HashTable_field_0x30; /*0x7acf57*/
  }
  return result; /*0x7acf65*/
}



// ==== 0x007ACF70  HashTable::Rebuild  this=HashTable  sig=csp ====
int __thiscall HashTable::Rebuild(HashTable *this)
{
  unsigned int i; // ebp
  ObjectClass *customSound; // esi
  ObjectClass *v4; // edi
  int result; // eax
  unsigned int HashTable_field_0x08; // esi
  int HashTable_field_0x0C; // ecx
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

  for ( i = 0; i < this->HashTable_field_0x08; *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * i - 4) = 0 ) /*0x7acf77*/
  {
    customSound = *(ObjectClass **)(*(_DWORD *)this->__pad_0 + 4 * i); /*0x7acf82*/
    while ( customSound ) /*0x7acf87*/
    {
      v4 = customSound; /*0x7acf89*/
      customSound = (ObjectClass *)customSound[1].customSound; /*0x7acf8b*/
      DeleteAndZero(v4); /*0x7acf97*/
      __3_YAXPAX_Z(v4); /*0x7acf9d*/
    }
    ++i; /*0x7acfab*/
  }
  result = this->HashTable_field_0x30; /*0x7acfbb*/
  HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7acfbe*/
  for ( this->HashTable_field_0x04 = 0; HashTable_field_0x08 > result; HashTable_field_0x08 = this->HashTable_field_0x08 ) /*0x7acfca*/
  {
    if ( LOBYTE(this->HashTable_field_0x14) ) /*0x7acfd0*/
      break; /*0x7acfd5*/
    if ( HashTable_field_0x08 > result ) /*0x7acfdd*/
    {
      HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x7acfe3*/
      v8 = *(int **)this->__pad_0; /*0x7acfe6*/
      v17 = *(int **)this->__pad_0; /*0x7acfea*/
      this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x7acff1*/
      this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x7acffb*/
      v9 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x7ad007*/
      v10 = 4 * this->HashTable_field_0x08; /*0x7ad00c*/
      *(_DWORD *)this->__pad_0 = v9; /*0x7ad013*/
      memset(v9, 0, v10); /*0x7ad018*/
      if ( (int)HashTable_field_0x08 > 0 ) /*0x7ad023*/
      {
        v11 = v8; /*0x7ad025*/
        v12 = HashTable_field_0x08; /*0x7ad027*/
        do /*0x7ad061*/
        {
          v13 = *v11; /*0x7ad029*/
          if ( *v11 ) /*0x7ad029*/
          {
            do /*0x7ad05b*/
            {
              v14 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v13) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7ad03f*/
              v15 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v14); /*0x7ad043*/
              *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v14) = v13; /*0x7ad049*/
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
    result = this->HashTable_field_0x30; /*0x7ad070*/
  }
  return result; /*0x7ad07e*/
}



// ==== 0x007AD090  _VectorClass_PAUtConnInfoStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall WonlineStringDialogControl_12::AddRef(_VectorClass_PAUtConnInfoStruct *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x7ad092*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x7ad09d*/
  {
    v3 = 0; /*0x7ad09f*/
    if ( m_8 <= 0 ) /*0x7ad0a3*/
      return 1; /*0x7ad0c3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x7ad0a5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x7ad0ab*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x7ad0b4*/
    {
      ++v3; /*0x7ad0b6*/
      ++v4; /*0x7ad0b7*/
      if ( v3 >= m_8 ) /*0x7ad0bc*/
        return 1; /*0x7ad0bc*/
    }
  }
  return 0; /*0x7ad0be*/
}



// ==== 0x007AD0D0  _VectorClass_PAUtConnInfoStruct::Release  this=VectorClass  sig=csp ====
char __thiscall WonlineStringDialogControl_12::Release(_VectorClass_PAUtConnInfoStruct *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x7ad0dc*/
  {
    LOBYTE(this->m_C) = 0; /*0x7ad0e6*/
    if ( a3 ) /*0x7ad0ec*/
      v4 = a3; /*0x7ad102*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x7ad0fe*/
    LOBYTE(this->m_C) = 1; /*0x7ad106*/
    if ( v4 ) /*0x7ad10a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x7ad115*/
      {
        m_8 = this->m_8; /*0x7ad11c*/
        if ( a2 < m_8 ) /*0x7ad121*/
          m_8 = a2; /*0x7ad123*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x7ad129*/
          ++i; /*0x7ad12e*/
        if ( BYTE1(this->m_C) ) /*0x7ad13b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7ad146*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x7ad14e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x7ad157*/
      this->m_8 = a2; /*0x7ad15f*/
      BYTE1(this->m_C) = a3 == 0; /*0x7ad162*/
      return 1; /*0x7ad168*/
    }
    else
    {
      return 0; /*0x7ad10f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUtConnInfoStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x7ad172*/
    return 1; /*0x7ad178*/
  }
}



// ==== 0x007AD180  _VectorClass_PAUtConnInfoStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall WonlineStringDialogControl_12::ddtor(_VectorClass_PAUtConnInfoStruct *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x7ad18d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7ad193*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7ad19b*/
  }
  BYTE1(this->m_C) = 0; /*0x7ad19e*/
  this->m_8 = 0; /*0x7ad1a1*/
}



// ==== 0x007AD1B0  _VectorClass_PAUtConnInfoStruct::Read  this=VectorClass  sig=csp ====
int __thiscall WonlineStringDialogControl_12::Read(_VectorClass_PAUtConnInfoStruct *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x7ad1b0*/
    return 0; /*0x7ad1b8*/
  m_8 = this->m_8; /*0x7ad1be*/
  result = 0; /*0x7ad1c1*/
  if ( m_8 <= 0 ) /*0x7ad1c5*/
    return -1; /*0x7ad1dc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7ad1cb*/
  {
    if ( ++result >= m_8 ) /*0x7ad1da*/
      return -1; /*0x7ad1da*/
  }
  return result; /*0x7ad1ba*/
}



// ==== 0x007AD1F0  _VectorClass_PAUtConnInfoStruct::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall WonlineStringDialogControl_12::Write(_VectorClass_PAUtConnInfoStruct *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7ad1f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x7ad205*/
  else
    return 0; /*0x7ad1f7*/
}



// ==== 0x007AD210  _DynamicVectorClass_PAUtConnInfoStruct::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall WonlineStringDialogControl_12::SetCapacity(
        _DynamicVectorClass_PAUtConnInfoStruct *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x7ad21c*/
  {
    LOBYTE(this->m_C) = 0; /*0x7ad222*/
    if ( a3 ) /*0x7ad228*/
      v4 = a3; /*0x7ad23e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x7ad23a*/
    LOBYTE(this->m_C) = 1; /*0x7ad242*/
    if ( !v4 ) /*0x7ad246*/
      return 0; /*0x7ad2ba*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x7ad248*/
    {
      m_8 = this->m_8; /*0x7ad24f*/
      if ( a2 < m_8 ) /*0x7ad254*/
        m_8 = a2; /*0x7ad256*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x7ad25c*/
        ++i; /*0x7ad261*/
      if ( BYTE1(this->m_C) ) /*0x7ad26e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7ad279*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x7ad281*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x7ad28a*/
    this->m_8 = a2; /*0x7ad292*/
    BYTE1(this->m_C) = a3 == 0; /*0x7ad295*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUtConnInfoStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x7ad29e*/
  }
  v7 = this->m_8; /*0x7ad2a1*/
  if ( v7 < this->m_10 ) /*0x7ad2a9*/
    this->m_10 = v7; /*0x7ad2ab*/
  return 1; /*0x7ad2ae*/
}



// ==== 0x007AD2C0  _DynamicVectorClass_PAUtConnInfoStruct::FindItem  this=DynamicVector  sig=csp ====
int __thiscall WonlineStringDialogControl_12::FindItem(_DynamicVectorClass_PAUtConnInfoStruct *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x7ad2c0*/
  result = 0; /*0x7ad2c3*/
  if ( m_10 <= 0 ) /*0x7ad2c8*/
    return -1; /*0x7ad2df*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7ad2ce*/
  {
    if ( ++result >= m_10 ) /*0x7ad2dd*/
      return -1; /*0x7ad2dd*/
  }
  return result; /*0x7ad2e2*/
}



// ==== 0x007AD2F0  ObjectClass::ResetSystemWOL_Reset  this=ObjectClass  sig=csp ====
void **__thiscall ResetSystemWOL_Reset(ObjectClass *this, char a2)
{
  DeleteAndZero(this); /*0x7ad2f3*/
  if ( (a2 & 1) != 0 ) /*0x7ad2fd*/
    __3_YAXPAX_Z(this); /*0x7ad300*/
  return &this->AbstractClass; /*0x7ad30a*/
}



// ==== 0x007AD310  ScalarDtor::DeleteAndZero  this=ScalarDtor  sig=csp ====
void **__thiscall ScalarDtor::DeleteAndZero(ScalarDtor *this, char a2)
{
  DeleteAndZero((ObjectClass *)this); /*0x7ad313*/
  if ( (a2 & 1) != 0 ) /*0x7ad31d*/
    __3_YAXPAX_Z(this); /*0x7ad320*/
  return (void **)this; /*0x7ad32a*/
}



// ==== 0x007AD330  Object::DtorWithDelete  this=Object  sig=csp ====
void **__thiscall Object::DtorWithDelete(Object *this, char a2)
{
  DeleteAndZero((ObjectClass *)this); /*0x7ad333*/
  if ( (a2 & 1) != 0 ) /*0x7ad33d*/
    __3_YAXPAX_Z(this); /*0x7ad340*/
  return (void **)this; /*0x7ad34a*/
}



// ==== 0x007AD350  CChatEventSink::DeleteAndZero  this=CChatEventSink  sig=csp ====
void **__thiscall CChatEventSink::DeleteAndZero(CChatEventSink *this, char a2)
{
  DeleteAndZero((ObjectClass *)this); /*0x7ad353*/
  if ( (a2 & 1) != 0 ) /*0x7ad35d*/
    __3_YAXPAX_Z(this); /*0x7ad360*/
  return (void **)this; /*0x7ad36a*/
}



// ==== 0x007AD370  _VectorClass_PAUtConnInfoStruct::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall WonlineStringDialogControl_12::QueryInterface(_VectorClass_PAUtConnInfoStruct *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x7ad373*/
  *(_DWORD *)this->__pad_0 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x7ad376*/
  if ( v3 && BYTE1(this->m_C) ) /*0x7ad380*/
  {
    __3_YAXPAX_Z(v3); /*0x7ad388*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7ad390*/
  }
  BYTE1(this->m_C) = 0; /*0x7ad39b*/
  this->m_8 = 0; /*0x7ad3a1*/
  if ( (a2 & 1) != 0 ) /*0x7ad3a8*/
    __3_YAXPAX_Z(this); /*0x7ad3ab*/
  return this->__pad_0; /*0x7ad3b5*/
}



// ==== 0x007AD3C0  _DynamicVectorClass_PAUtConnInfoStruct::Constructor_VectorClass_tConnInfoStruct___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall WonlineStringDialogControl_12::Constructor_VectorClass_tConnInfoStruct___(
        _DynamicVectorClass_PAUtConnInfoStruct *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x7ad3c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x7ad3c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x7ad3d0*/
  {
    __3_YAXPAX_Z(v3); /*0x7ad3d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7ad3e0*/
  }
  BYTE1(this->m_C) = 0; /*0x7ad3eb*/
  this->m_8 = 0; /*0x7ad3f1*/
  if ( (a2 & 1) != 0 ) /*0x7ad3f8*/
    __3_YAXPAX_Z(this); /*0x7ad3fb*/
  return this->__pad_0; /*0x7ad405*/
}



// ==== 0x007AD410  ?$CComObject@VCDownloadEventSink@@@ATL::System_Init_7AD410  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
char *__thiscall sub_7AD410(char *this, int a2)
{
  this->q010 = 0; /*0x7ad416*/
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 8)); /*0x7ad41e*/
  *(_DWORD *)this = &ATL::CComObject<CDownloadEventSink>::`vftable'; /*0x7ad429*/
  InterlockedIncrement(&Addend); /*0x7ad42f*/
  return this; /*0x7ad437*/
}



// ==== 0x007AD440  _CComObject_VCDownloadEventSink_ATL::ddtor  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
int __thiscall WonlineStringDialogControl_28::ddtor(_CComObject_VCDownloadEventSink_ATL *this)
{
  HWND Current; // eax

  Current = (HWND)Dialog::GetCurrent(); /*0x7ad449*/
  SendMessageA(Current, 0x5F4u, 0, 0); /*0x7ad44f*/
  return 0; /*0x7ad457*/
}



// ==== 0x007AD460  _CComObject_VCDownloadEventSink_ATL::Read  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
int __thiscall WonlineStringDialogControl_28::Read(_CComObject_VCDownloadEventSink_ATL *this, LPARAM lParam)
{
  HWND Current; // eax
  LPARAM lParama; // [esp+8h] [ebp+8h]

  Current = (HWND)Dialog::GetCurrent(); /*0x7ad46c*/
  SendMessageA(Current, 0x5F5u, 0, lParama); /*0x7ad472*/
  return 0; /*0x7ad47a*/
}



// ==== 0x007AD480  _CComObject_VCDownloadEventSink_ATL::Write  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
int __thiscall WonlineStringDialogControl_28::Write(
        _CComObject_VCDownloadEventSink_ATL *this,
        wchar_t *Format,
        unsigned int Formata,
        int a4,
        int a5)
{
  HWND Current; // eax
  wchar_t *v6; // eax
  wchar_t *StringCSF; // eax
  HWND v8; // eax
  HWND DlgItem; // eax
  wchar_t Buffer[200]; // [esp+8h] [ebp-190h] BYREF
  int v12; // [esp+1ACh] [ebp+14h]

  Buffer[0] = 0; /*0x7ad49d*/
  Current = (HWND)Dialog::GetCurrent(); /*0x7ad4b7*/
  SendDlgItemMessageA(Current, 1478, 0x402u, 100 * Formata / a4, 0); /*0x7ad4bd*/
  if ( v12 <= 0 ) /*0x7ad4cc*/
  {
    StringCSF = GetStringCSF(aTxtBytesWoTime, 0, g_Str_File_wonline_cpp, 5172); /*0x7ad50a*/
    swprintf(Buffer, (const size_t)StringCSF, (const wchar_t *const)Formata, a4); /*0x7ad515*/
  }
  else
  {
    v6 = GetStringCSF(aTxtBytesWTime, 0, g_Str_File_wonline_cpp, 5167); /*0x7ad4e2*/
    swprintf(Buffer, (const size_t)v6, (const wchar_t *const)Formata, a4, v12); /*0x7ad4ed*/
  }
  if ( time(0) != dword_B77EA8 ) /*0x7ad52d*/
  {
    v8 = (HWND)Dialog::GetCurrent(); /*0x7ad538*/
    DlgItem = GetDlgItem(v8, 1480); /*0x7ad53e*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x7ad551*/
    dword_B77EA8 = time(0); /*0x7ad561*/
  }
  return 0; /*0x7ad52f*/
}



// ==== 0x007AD580  _CComObject_VCDownloadEventSink_ATL::Draw  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
int __thiscall WonlineStringDialogControl_28::Draw(_CComObject_VCDownloadEventSink_ATL *this, int a2)
{
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v5; // [esp-4h] [ebp-194h]
  wchar_t *StringCSF; // [esp-4h] [ebp-194h]
  wchar_t Buffer[200]; // [esp+0h] [ebp-190h] BYREF
  int v8; // [esp+198h] [ebp+8h]

  Buffer[0] = 0; /*0x7ad58d*/
  if ( v8 == 2 ) /*0x7ad597*/
  {
    StringCSF = GetStringCSF(aTxtConnecting, 0, g_Str_File_wonline_cpp, 5191); /*0x7ad5d6*/
    swprintf(Buffer, (const size_t)StringCSF, *(const wchar_t *const *)Buffer); /*0x7ad5d8*/
  }
  else if ( v8 == 4 ) /*0x7ad59c*/
  {
    v5 = GetStringCSF(aTxtFindingPatc, 0, g_Str_File_wonline_cpp, 5195); /*0x7ad5b4*/
    swprintf(Buffer, (const size_t)v5, *(const wchar_t *const *)Buffer); /*0x7ad5ba*/
  }
  Current = (HWND)Dialog::GetCurrent(); /*0x7ad5e5*/
  DlgItem = GetDlgItem(Current, 1480); /*0x7ad5eb*/
  SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x7ad5fe*/
  return 0; /*0x7ad606*/
}



// ==== 0x007AD610  _CComObject_VCDownloadEventSink_ATL::StubReturnFalse  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
int __thiscall WonlineStringDialogControl_28::StubReturnFalse(_CComObject_VCDownloadEventSink_ATL *this)
{
  return 0; /*0x7ad612*/
}



// ==== 0x007AD620  _CComObject_VCDownloadEventSink_ATL::AddRef  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
LONG __thiscall WonlineStringDialogControl_28::AddRef(_CComObject_VCDownloadEventSink_ATL *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x7ad62e*/
}



// ==== 0x007AD640  _CComObject_VCDownloadEventSink_ATL::Release  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
LONG __thiscall WonlineStringDialogControl_28::Release(_CComObject_VCDownloadEventSink_ATL *this)
{
  LONG v1; // ebx
  char *Block; // [esp+14h] [ebp+4h]

  v1 = InterlockedDecrement((volatile LONG *)Block + 1); /*0x7ad654*/
  if ( !v1 && Block ) /*0x7ad65c*/
  {
    *(_DWORD *)Block = &ATL::CComObject<CDownloadEventSink>::`vftable'; /*0x7ad663*/
    *((_DWORD *)Block + 1) = 1; /*0x7ad669*/
    InterlockedDecrement(&Addend); /*0x7ad66f*/
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 8)); /*0x7ad675*/
    __3_YAXPAX_Z(Block); /*0x7ad67c*/
  }
  return v1; /*0x7ad684*/
}



// ==== 0x007AD690  _CComObject_VCDownloadEventSink_ATL::QueryInterface  this=?$CComObject@VCDownloadEventSink@@@ATL  sig=csp ====
int __thiscall WonlineStringDialogControl_28::QueryInterface(
        _CComObject_VCDownloadEventSink_ATL *this,
        _DWORD *a2,
        char **a3)
{
  char ***v3; // esi
  int result; // eax
  char **v5; // eax
  BOOL v6; // ebp
  char **v7; // eax
  char **v8; // eax
  char *v9; // esi
  _DWORD *v10; // [esp+1Ch] [ebp+Ch]

  v3 = (char ***)&off_7F7638; /*0x7ad69a*/
  if ( !v10 ) /*0x7ad69f*/
    return -2147467261; /*0x7ad6aa*/
  *v10 = 0; /*0x7ad6b1*/
  if ( !*a3 && !a3[1] && a3[2] == (char *)192 && a3[3] == (char *)1174405120 ) /*0x7ad6d3*/
  {
    (*(void (__stdcall **)(_DWORD *))(*a2 + 4))(a2); /*0x7ad6e6*/
    *v10 = a2; /*0x7ad6e9*/
    return 0; /*0x7ad6f1*/
  }
  while ( 1 ) /*0x7ad6fd*/
  {
    v5 = *v3; /*0x7ad6fd*/
    v6 = *v3 == 0; /*0x7ad706*/
    if ( !*v3 || *v5 == *a3 && v5[1] == a3[1] && v5[2] == a3[2] && v5[3] == a3[3] ) /*0x7ad730*/
      break; /*0x7ad730*/
LABEL_17:
    v8 = v3[5]; /*0x7ad753*/
    v3 += 3; /*0x7ad756*/
    if ( !v8 ) /*0x7ad75b*/
      return -2147467262; /*0x7ad75d*/
  }
  v7 = v3[2]; /*0x7ad732*/
  if ( v7 != (char **)1 ) /*0x7ad738*/
  {
    result = ((int (__stdcall *)(_DWORD *, char **, _DWORD *, char **))v7)(a2, a3, v10, v3[1]); /*0x7ad745*/
    if ( !result || !v6 && result < 0 ) /*0x7ad751*/
      return result; /*0x7ad751*/
    goto LABEL_17; /*0x7ad751*/
  }
  v9 = (char *)v3[1] + (_DWORD)a2; /*0x7ad770*/
  (*(void (__stdcall **)(char *))(*(_DWORD *)v9 + 4))(v9); /*0x7ad775*/
  *v10 = v9; /*0x7ad778*/
  return 0; /*0x7ad6a1*/
}



// ==== 0x007AD790  Array::InsertElement  this=Array  sig=csp ====
char __thiscall Array::InsertElement(Array *this, const void *a2, int a3)
{
  int v4; // esi
  int v5; // ecx
  void *Array_field_0x4; // eax
  int v7; // ebp
  void *v8; // edx
  const void *v9; // esi
  int v10; // eax
  int v11; // ebp
  void *v12; // edx
  const void *v13; // esi
  void *v14; // edi
  void *v16; // [esp+Ch] [ebp-4h]
  void *v17; // [esp+Ch] [ebp-4h]

  v4 = a3; /*0x7ad795*/
  v5 = *(_DWORD *)this->__pad_0; /*0x7ad799*/
  if ( a3 > v5 ) /*0x7ad79e*/
  {
    a3 = v5; /*0x7ad7a0*/
    v4 = v5; /*0x7ad7a4*/
  }
  Array_field_0x4 = this->Array_field_0x4; /*0x7ad7a6*/
  if ( v4 >= (int)Array_field_0x4 && v5 >= (int)Array_field_0x4 ) /*0x7ad7b4*/
  {
    v7 = 2 * v5; /*0x7ad7b6*/
    if ( 2 * v5 < 10 ) /*0x7ad7bc*/
      v7 = 10; /*0x7ad7be*/
    v8 = (void *)__2_YAPAXI_Z(268 * v7); /*0x7ad7d7*/
    memset(v8, 0, 4 * ((unsigned int)(268 * v7) >> 2)); /*0x7ad7e2*/
    v16 = v8; /*0x7ad7ec*/
    v9 = *(const void **)this->__pad_8; /*0x7ad7f2*/
    if ( v9 ) /*0x7ad7f7*/
      qmemcpy(v8, v9, 268 * *(_DWORD *)this->__pad_0); /*0x7ad80f*/
    __3_YAXPAX_Z(*(void **)this->__pad_8); /*0x7ad81c*/
    v4 = a3; /*0x7ad825*/
    *(_DWORD *)this->__pad_8 = v16; /*0x7ad82c*/
    this->Array_field_0x4 = (void *)v7; /*0x7ad82f*/
  }
  v10 = *(_DWORD *)this->__pad_0; /*0x7ad832*/
  if ( *(_DWORD *)this->__pad_0 >= (int)this->Array_field_0x4 ) /*0x7ad839*/
  {
    v11 = 2 * v10; /*0x7ad83b*/
    if ( 2 * v10 < 10 ) /*0x7ad841*/
      v11 = 10; /*0x7ad843*/
    v12 = (void *)__2_YAPAXI_Z(268 * v11); /*0x7ad85c*/
    memset(v12, 0, 4 * ((unsigned int)(268 * v11) >> 2)); /*0x7ad867*/
    v17 = v12; /*0x7ad871*/
    v13 = *(const void **)this->__pad_8; /*0x7ad877*/
    if ( v13 ) /*0x7ad87c*/
      qmemcpy(v12, v13, 268 * *(_DWORD *)this->__pad_0); /*0x7ad894*/
    __3_YAXPAX_Z(*(void **)this->__pad_8); /*0x7ad8a1*/
    v4 = a3; /*0x7ad8aa*/
    *(_DWORD *)this->__pad_8 = v17; /*0x7ad8b1*/
    this->Array_field_0x4 = (void *)v11; /*0x7ad8b4*/
  }
  if ( v4 < *(_DWORD *)this->__pad_0 ) /*0x7ad8bc*/
    memcpy( /*0x7ad8f2*/
      (void *)(*(_DWORD *)this->__pad_8 + 268 * (v4 + 1)),
      (const void *)(*(_DWORD *)this->__pad_8 + 268 * v4),
      268 * *(_DWORD *)this->__pad_0 - 268 * v4);
  v14 = (void *)(*(_DWORD *)this->__pad_8 + 268 * v4); /*0x7ad907*/
  if ( v14 ) /*0x7ad90c*/
    qmemcpy(v14, a2, 0x10Cu); /*0x7ad917*/
  ++*(_DWORD *)this->__pad_0; /*0x7ad91e*/
  return 1; /*0x7ad91b*/
}



// ==== 0x007AD930  CChatEventSink::GrowBuffer  this=CChatEventSink  sig=csp ====
char __thiscall CChatEventSink::GrowBuffer(CChatEventSink *this)
{
  int v2; // eax
  int CChatEventSink_field_0x04; // ecx
  int v5; // ebx
  void *v6; // eax
  const void *CChatEventSink_field_0x08; // esi
  int v8; // [esp+8h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x7ad935*/
  CChatEventSink_field_0x04 = this->CChatEventSink_field_0x04; /*0x7ad938*/
  if ( 3 * v2 > CChatEventSink_field_0x04 ) /*0x7ad940*/
    return 0; /*0x7ad943*/
  v5 = CChatEventSink_field_0x04 / 2; /*0x7ad94f*/
  if ( CChatEventSink_field_0x04 / 2 < 10 ) /*0x7ad954*/
    v5 = 10; /*0x7ad956*/
  if ( v5 >= CChatEventSink_field_0x04 ) /*0x7ad95d*/
    return 0; /*0x7ad960*/
  v6 = (void *)__2_YAPAXI_Z(268 * v5); /*0x7ad974*/
  CChatEventSink_field_0x08 = (const void *)this->CChatEventSink_field_0x08; /*0x7ad979*/
  v8 = (int)v6; /*0x7ad981*/
  if ( CChatEventSink_field_0x08 ) /*0x7ad985*/
    qmemcpy(v6, CChatEventSink_field_0x08, 268 * *(_DWORD *)this->__pad_0); /*0x7ad99f*/
  __3_YAXPAX_Z((void *)this->CChatEventSink_field_0x08); /*0x7ad9ad*/
  this->CChatEventSink_field_0x08 = v8; /*0x7ad9b9*/
  this->CChatEventSink_field_0x04 = v5; /*0x7ad9bc*/
  return 1; /*0x7ad942*/
}



// ==== 0x007AD9D0  DynamicArray::Grow  this=DynamicArray  sig=csp ====
int __thiscall DynamicArray::Grow(DynamicArray *this)
{
  int result; // eax
  int v3; // eax
  unsigned int v4; // esi
  void *v5; // ebp
  const void *DynamicArray_field_0x08; // esi
  int v7; // [esp+4h] [ebp-4h]

  result = *(_DWORD *)this->__pad_0; /*0x7ad9d4*/
  if ( *(_DWORD *)this->__pad_0 >= this->DynamicArray_field_0x04 ) /*0x7ad9db*/
  {
    v3 = 2 * result; /*0x7ad9e2*/
    v7 = v3; /*0x7ad9e7*/
    if ( v3 < 10 ) /*0x7ad9eb*/
    {
      v7 = 10; /*0x7ad9ed*/
      v3 = 10; /*0x7ad9f5*/
    }
    v4 = 108 * v3; /*0x7ada02*/
    v5 = (void *)__2_YAPAXI_Z(108 * v3); /*0x7ada0d*/
    memset(v5, 0, v4); /*0x7ada1b*/
    DynamicArray_field_0x08 = (const void *)this->DynamicArray_field_0x08; /*0x7ada24*/
    if ( DynamicArray_field_0x08 ) /*0x7ada29*/
      qmemcpy(v5, DynamicArray_field_0x08, 108 * *(_DWORD *)this->__pad_0); /*0x7ada3d*/
    __3_YAXPAX_Z((void *)this->DynamicArray_field_0x08); /*0x7ada4a*/
    this->DynamicArray_field_0x08 = (int)v5; /*0x7ada56*/
    this->DynamicArray_field_0x04 = v7; /*0x7ada59*/
    LOBYTE(result) = 1; /*0x7ada5f*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x7ad9dd*/
  }
  return result; /*0x7ad9df*/
}



// ==== 0x007ADA70  WOLGameList::EnsureCapacity  this=WOLGameList  sig=csp ====
char __thiscall WOLGameList::EnsureCapacity(WOLGameList *this)
{
  int v2; // eax
  int WOLGameList_field_0x04; // ecx
  int v5; // ebx
  void *v6; // eax
  const void *WOLGameList_field_0x08; // esi
  int v8; // [esp+8h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x7ada75*/
  WOLGameList_field_0x04 = this->WOLGameList_field_0x04; /*0x7ada78*/
  if ( 3 * v2 > WOLGameList_field_0x04 ) /*0x7ada80*/
    return 0; /*0x7ada83*/
  v5 = WOLGameList_field_0x04 / 2; /*0x7ada8f*/
  if ( WOLGameList_field_0x04 / 2 < 10 ) /*0x7ada94*/
    v5 = 10; /*0x7ada96*/
  if ( v5 >= WOLGameList_field_0x04 ) /*0x7ada9d*/
    return 0; /*0x7adaa0*/
  v6 = (void *)__2_YAPAXI_Z(108 * v5); /*0x7adab0*/
  WOLGameList_field_0x08 = (const void *)this->WOLGameList_field_0x08; /*0x7adab5*/
  v8 = (int)v6; /*0x7adabd*/
  if ( WOLGameList_field_0x08 ) /*0x7adac1*/
    qmemcpy(v6, WOLGameList_field_0x08, 108 * *(_DWORD *)this->__pad_0); /*0x7adad7*/
  __3_YAXPAX_Z((void *)this->WOLGameList_field_0x08); /*0x7adae5*/
  this->WOLGameList_field_0x08 = v8; /*0x7adaf1*/
  this->WOLGameList_field_0x04 = v5; /*0x7adaf4*/
  return 1; /*0x7ada82*/
}



// ==== 0x007ADB00  ObjectClass::Network_Helper_7ADB00  this=ObjectClass  sig=csp ====
char __thiscall Network_Helper_7ADB00(ObjectClass *this, _DWORD *a2, int a3)
{
  int v4; // esi
  int vtable0; // ecx
  void *vtable1; // eax
  int v7; // eax
  unsigned int v8; // esi
  void *v9; // ebp
  void *vtable2; // esi
  int v11; // eax
  unsigned int v12; // esi
  void *v13; // ebp
  void *v14; // esi
  _DWORD *v15; // eax
  int v17; // [esp+8h] [ebp-4h]
  int v18; // [esp+8h] [ebp-4h]

  v4 = a3; /*0x7adb05*/
  vtable0 = (int)this->AbstractClass; /*0x7adb09*/
  if ( a3 > vtable0 ) /*0x7adb0d*/
  {
    a3 = vtable0; /*0x7adb0f*/
    v4 = vtable0; /*0x7adb13*/
  }
  vtable1 = this->?; /*0x7adb15*/
  if ( v4 >= (int)vtable1 && vtable0 >= (int)vtable1 ) /*0x7adb20*/
  {
    v7 = 2 * vtable0; /*0x7adb22*/
    v17 = 2 * vtable0; /*0x7adb28*/
    if ( 2 * vtable0 < 10 ) /*0x7adb2c*/
    {
      v17 = 10; /*0x7adb2e*/
      v7 = 10; /*0x7adb36*/
    }
    v8 = 4 * v7; /*0x7adb3a*/
    v9 = (void *)__2_YAPAXI_Z(4 * v7); /*0x7adb49*/
    memset(v9, 0, v8); /*0x7adb57*/
    vtable2 = this->?; /*0x7adb60*/
    if ( vtable2 ) /*0x7adb65*/
      qmemcpy(v9, vtable2, 4 * (int)this->AbstractClass); /*0x7adb73*/
    __3_YAXPAX_Z(this->?); /*0x7adb80*/
    v4 = a3; /*0x7adb89*/
    this->? = v9; /*0x7adb90*/
    this->? = (void *)v17; /*0x7adb93*/
  }
  if ( (int)this->AbstractClass >= (int)this->? ) /*0x7adb9d*/
  {
    v11 = 2 * (int)this->AbstractClass; /*0x7adb9f*/
    v18 = v11; /*0x7adba4*/
    if ( v11 < 10 ) /*0x7adba8*/
    {
      v18 = 10; /*0x7adbaa*/
      v11 = 10; /*0x7adbb2*/
    }
    v12 = 4 * v11; /*0x7adbb6*/
    v13 = (void *)__2_YAPAXI_Z(4 * v11); /*0x7adbc5*/
    memset(v13, 0, v12); /*0x7adbd3*/
    v14 = this->?; /*0x7adbdc*/
    if ( v14 ) /*0x7adbe1*/
      qmemcpy(v13, v14, 4 * (int)this->AbstractClass); /*0x7adbef*/
    __3_YAXPAX_Z(this->?); /*0x7adbfc*/
    v4 = a3; /*0x7adc05*/
    this->? = v13; /*0x7adc0c*/
    this->? = (void *)v18; /*0x7adc0f*/
  }
  if ( v4 < (int)this->AbstractClass ) /*0x7adc18*/
    memcpy((char *)this->? + 4 * v4 + 4, (char *)this->? + 4 * v4, 4 * ((int)this->AbstractClass + 0x3FFFFFFF * v4)); /*0x7adc33*/
  v15 = (char *)this->? + 4 * v4; /*0x7adc3e*/
  if ( v15 ) /*0x7adc43*/
    *v15 = *a2; /*0x7adc4b*/
  ++this->AbstractClass; /*0x7adc51*/
  return 1; /*0x7adc4f*/
}



// ==== 0x007ADC60  HashTable::LookupString  this=HashTable  sig=csp ====
int __thiscall HashTable::LookupString(HashTable *this, const char **a2, _DWORD *a3)
{
  int result; // eax
  int v5; // edx
  int v6; // esi

  result = this->HashTable_field_0x04; /*0x7adc64*/
  if ( result ) /*0x7adc69*/
  {
    v5 = ((int (__thiscall *)(const char **))this->HashTable_field_0x18)(a2) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7adc86*/
    result = *(_DWORD *)this->__pad_0; /*0x7adc88*/
    v6 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v5); /*0x7adc8a*/
    if ( v6 ) /*0x7adc8f*/
    {
      while ( 1 ) /*0x7adc9b*/
      {
        result = String::Compare((String *)v6, a2); /*0x7adc9b*/
        if ( (_BYTE)result ) /*0x7adca2*/
          break; /*0x7adca2*/
        v6 = *(_DWORD *)(v6 + 112); /*0x7adca4*/
        if ( !v6 ) /*0x7adca9*/
          return result; /*0x7adca9*/
      }
      LOBYTE(result) = 1; /*0x7adcc3*/
      *a3 = v6 + 4; /*0x7adcc5*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x7adc92*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x7adc6c*/
  }
  return result; /*0x7adc6b*/
}



// ==== 0x007ADCD0  HashTable::Insert  this=HashTable  sig=csp ====
char __thiscall HashTable::Insert(HashTable *this, const char **a2, void *a3)
{
  int HashTable_field_0x04; // eax
  int v7; // ebx
  int v8; // esi
  _DWORD *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int HashTable_field_0x08; // esi
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
  int HashTable_field_0x0C; // edi
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

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x7adcdb*/
  if ( !HashTable_field_0x04 ) /*0x7adce0*/
    return 0; /*0x7adce5*/
  v37 = (double)(unsigned int)(HashTable_field_0x04 - 1) / (double)this->HashTable_field_0x08; /*0x7add10*/
  v7 = ((int (__thiscall *)(const char **))this->HashTable_field_0x18)(a2) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7add25*/
  v8 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x7add27*/
  v36 = v8; /*0x7add2c*/
  if ( !v8 ) /*0x7add30*/
    return 0; /*0x7add35*/
  if ( (unsigned __int8)String::Compare((String *)v8, a2) ) /*0x7add41*/
  {
    qmemcpy(a3, (const void *)(v8 + 4), 0x6Cu); /*0x7add5a*/
    v9 = *(_DWORD **)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x7add5f*/
    v10 = v9[28]; /*0x7add64*/
    if ( v9 ) /*0x7add67*/
    {
      DeleteAndZero(*(ObjectClass **)(*(_DWORD *)this->__pad_0 + 4 * v7)); /*0x7add6b*/
      __3_YAXPAX_Z(v9); /*0x7add71*/
    }
    *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v7) = v10; /*0x7add80*/
    v11 = v37 < *(double *)&this->HashTable_field_0x20; /*0x7add86*/
    v12 = v37 == *(double *)&this->HashTable_field_0x20; /*0x7add86*/
    --this->HashTable_field_0x04; /*0x7add8a*/
    if ( v11 || v12 ) /*0x7add8f*/
    {
      HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7add98*/
      if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7addaa*/
      {
        v14 = *(int **)this->__pad_0; /*0x7addb3*/
        v39 = *(int **)this->__pad_0; /*0x7addb8*/
        v15 = this->HashTable_field_0x0C - 1; /*0x7addbe*/
        this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x7addbf*/
        this->HashTable_field_0x0C = v15; /*0x7addc9*/
        v16 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x7addd5*/
        v17 = 4 * this->HashTable_field_0x08; /*0x7addda*/
        *(_DWORD *)this->__pad_0 = v16; /*0x7adde1*/
        memset(v16, 0, v17); /*0x7adde7*/
        if ( (int)HashTable_field_0x08 > 0 ) /*0x7addf2*/
        {
          v18 = v14; /*0x7addf4*/
          v19 = HashTable_field_0x08; /*0x7addf6*/
          do /*0x7ade2b*/
          {
            v20 = *v18; /*0x7addf8*/
            if ( *v18 ) /*0x7addf8*/
            {
              do /*0x7ade25*/
              {
                v21 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v20) /*0x7ade0e*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v22 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v21); /*0x7ade13*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v21) = v20; /*0x7ade19*/
                v23 = *(_DWORD *)(v20 + 112); /*0x7ade1b*/
                *(_DWORD *)(v20 + 112) = v22; /*0x7ade1e*/
                v20 = v23; /*0x7ade21*/
              }
              while ( v23 ); /*0x7ade25*/
            }
            ++v18; /*0x7ade27*/
            --v19; /*0x7ade2a*/
          }
          while ( v19 ); /*0x7ade2b*/
          v14 = v39; /*0x7ade2d*/
        }
        __3_YAXPAX_Z(v14); /*0x7ade32*/
      }
    }
    return 1; /*0x7ade3d*/
  }
  else
  {
    v24 = *(_DWORD *)(v8 + 112); /*0x7ade46*/
    v38 = 0; /*0x7ade49*/
    if ( v24 ) /*0x7ade50*/
    {
      while ( !(unsigned __int8)String::Compare((String *)v24, a2) ) /*0x7ade5c*/
      {
        v36 = v24; /*0x7ade5e*/
        v24 = *(_DWORD *)(v24 + 112); /*0x7ade62*/
        if ( !v24 ) /*0x7ade67*/
          goto LABEL_24; /*0x7ade67*/
      }
      qmemcpy(a3, (const void *)(v24 + 4), 0x6Cu); /*0x7ade7b*/
      *(_DWORD *)(v36 + 112) = *(_DWORD *)(v24 + 112); /*0x7ade80*/
      --this->HashTable_field_0x04; /*0x7ade89*/
      DeleteAndZero((ObjectClass *)v24); /*0x7ade90*/
      __3_YAXPAX_Z((void *)v24); /*0x7ade96*/
      v38 = 1; /*0x7ade9e*/
    }
LABEL_24:
    if ( v37 <= *(double *)&this->HashTable_field_0x20 ) /*0x7adeaf*/
    {
      v25 = this->HashTable_field_0x08; /*0x7adeb5*/
      if ( v25 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7adec7*/
      {
        HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x7adecd*/
        v27 = *(int **)this->__pad_0; /*0x7aded0*/
        v40 = *(int **)this->__pad_0; /*0x7aded5*/
        this->HashTable_field_0x08 = v25 >> 1; /*0x7adedb*/
        this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x7adee3*/
        v28 = (void *)__2_YAPAXI_Z(4 * (v25 >> 1)); /*0x7adeee*/
        v29 = 4 * this->HashTable_field_0x08; /*0x7adef3*/
        *(_DWORD *)this->__pad_0 = v28; /*0x7adefa*/
        memset(v28, 0, v29); /*0x7adf00*/
        if ( (int)v25 > 0 ) /*0x7adf0b*/
        {
          v30 = v27; /*0x7adf0d*/
          v31 = v25; /*0x7adf0f*/
          do /*0x7adf44*/
          {
            v32 = *v30; /*0x7adf11*/
            if ( *v30 ) /*0x7adf11*/
            {
              do /*0x7adf3e*/
              {
                v33 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v32) /*0x7adf27*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v34 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v33); /*0x7adf2c*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v33) = v32; /*0x7adf32*/
                v35 = *(_DWORD *)(v32 + 112); /*0x7adf34*/
                *(_DWORD *)(v32 + 112) = v34; /*0x7adf37*/
                v32 = v35; /*0x7adf3a*/
              }
              while ( v35 ); /*0x7adf3e*/
            }
            ++v30; /*0x7adf40*/
            --v31; /*0x7adf43*/
          }
          while ( v31 ); /*0x7adf44*/
          v27 = v40; /*0x7adf46*/
        }
        __3_YAXPAX_Z(v27); /*0x7adf4b*/
      }
    }
    return v38; /*0x7adf53*/
  }
}



// ==== 0x007ADF70  HashMap::Shrink2  this=HashMap  sig=csp ====
int __thiscall HashMap::Shrink2(HashMap *this)
{
  unsigned int HashMap_field_0x08; // esi
  int result; // eax
  int *v4; // ebp
  int HashMap_field_0x0C; // edi
  void *v6; // edi
  unsigned int v7; // edx
  int *v8; // edi
  unsigned int v9; // ebp
  int v10; // esi
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int *v14; // [esp+8h] [ebp-4h]

  HashMap_field_0x08 = this->HashMap_field_0x08; /*0x7adf75*/
  result = this->q00C; /*0x7adf78*/
  if ( HashMap_field_0x08 > result && *((_BYTE *)this + 20) != 1 ) /*0x7adf87*/
  {
    v4 = *(int **)this->__pad_0; /*0x7adf90*/
    HashMap_field_0x0C = this->HashMap_field_0x0C; /*0x7adf93*/
    v14 = *(int **)this->__pad_0; /*0x7adf96*/
    this->HashMap_field_0x08 = HashMap_field_0x08 >> 1; /*0x7adf9c*/
    this->HashMap_field_0x0C = HashMap_field_0x0C - 1; /*0x7adfa4*/
    v6 = (void *)__2_YAPAXI_Z(4 * (HashMap_field_0x08 >> 1)); /*0x7adfaf*/
    v7 = 4 * this->HashMap_field_0x08; /*0x7adfb4*/
    *(_DWORD *)this->__pad_0 = v6; /*0x7adfbb*/
    memset(v6, 0, v7); /*0x7adfc0*/
    if ( (int)HashMap_field_0x08 > 0 ) /*0x7adfcb*/
    {
      v8 = v4; /*0x7adfcd*/
      v9 = HashMap_field_0x08; /*0x7adfcf*/
      do /*0x7ae003*/
      {
        v10 = *v8; /*0x7adfd1*/
        if ( *v8 ) /*0x7adfd1*/
        {
          do /*0x7adffd*/
          {
            v11 = (*((int (__thiscall **)(int))this + 6))(v10) & ((1 << this->HashMap_field_0x0C) - 1); /*0x7adfe7*/
            v12 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v11); /*0x7adfeb*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v11) = v10; /*0x7adff1*/
            v13 = *(_DWORD *)(v10 + 112); /*0x7adff3*/
            *(_DWORD *)(v10 + 112) = v12; /*0x7adff6*/
            v10 = v13; /*0x7adff9*/
          }
          while ( v13 ); /*0x7adffd*/
        }
        ++v8; /*0x7adfff*/
        --v9; /*0x7ae002*/
      }
      while ( v9 ); /*0x7ae003*/
      v4 = v14; /*0x7ae005*/
    }
    __3_YAXPAX_Z(v4); /*0x7ae00a*/
  }
  return result; /*0x7ae014*/
}



// ==== 0x007AE020  WOLGameList::GrowBuffer  this=WOLGameList  sig=csp ====
void __thiscall WOLGameList::GrowBuffer(WOLGameList *this)
{
  int WOLGameList_field_0x08; // esi
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

  if ( *((_BYTE *)this + 20) != 1 ) /*0x7ae028*/
  {
    WOLGameList_field_0x08 = this->WOLGameList_field_0x08; /*0x7ae030*/
    v3 = *(_DWORD **)this->__pad_0; /*0x7ae033*/
    v4 = this->WOLGameList_field_0x0C + 1; /*0x7ae03c*/
    this->WOLGameList_field_0x08 = 2 * WOLGameList_field_0x08; /*0x7ae03d*/
    v13 = v3; /*0x7ae040*/
    this->WOLGameList_field_0x0C = v4; /*0x7ae048*/
    v5 = (void *)__2_YAPAXI_Z(8 * WOLGameList_field_0x08); /*0x7ae053*/
    v6 = 4 * this->WOLGameList_field_0x08; /*0x7ae058*/
    *(_DWORD *)this->__pad_0 = v5; /*0x7ae05f*/
    memset(v5, 0, v6); /*0x7ae064*/
    if ( WOLGameList_field_0x08 > 0 ) /*0x7ae06f*/
    {
      v7 = v3; /*0x7ae071*/
      v8 = WOLGameList_field_0x08; /*0x7ae073*/
      do /*0x7ae0a7*/
      {
        v9 = *v7; /*0x7ae075*/
        if ( *v7 ) /*0x7ae075*/
        {
          do /*0x7ae0a1*/
          {
            v10 = (*((int (__thiscall **)(int))this + 6))(v9) & ((1 << this->WOLGameList_field_0x0C) - 1); /*0x7ae08b*/
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x7ae08f*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x7ae095*/
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
int __thiscall HashMap::ComputeIndex_2(int *this, int a2)
{
  return ((int (__thiscall *)(int))*(this + 6))(a2) & ((1 << this->q00C) - 1); /*0x7ae0d4*/
}



// ==== 0x007AE0E0  ComStreamClass::readData  this=ComStreamClass  sig=csp ====
void __thiscall ComStreamClass::readData(ComStreamClass *this)
{
  int ComStreamClass_field_0x08; // esi
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

  if ( LOBYTE(this->ComStreamClass_field_0x14) != 1 ) /*0x7ae0e8*/
  {
    ComStreamClass_field_0x08 = this->ComStreamClass_field_0x08; /*0x7ae0f0*/
    v3 = *(_DWORD **)this->__pad_0; /*0x7ae0f3*/
    v4 = this->ComStreamClass_field_0x0C + 1; /*0x7ae0fc*/
    this->ComStreamClass_field_0x08 = 2 * ComStreamClass_field_0x08; /*0x7ae0fd*/
    v13 = v3; /*0x7ae100*/
    this->ComStreamClass_field_0x0C = v4; /*0x7ae108*/
    v5 = (void *)__2_YAPAXI_Z(8 * ComStreamClass_field_0x08); /*0x7ae113*/
    v6 = 4 * this->ComStreamClass_field_0x08; /*0x7ae118*/
    *(_DWORD *)this->__pad_0 = v5; /*0x7ae11f*/
    memset(v5, 0, v6); /*0x7ae124*/
    if ( ComStreamClass_field_0x08 > 0 ) /*0x7ae12f*/
    {
      v7 = v3; /*0x7ae131*/
      v8 = ComStreamClass_field_0x08; /*0x7ae133*/
      do /*0x7ae167*/
      {
        v9 = *v7; /*0x7ae135*/
        if ( *v7 ) /*0x7ae135*/
        {
          do /*0x7ae161*/
          {
            v10 = ((int (__thiscall *)(int))this->ComStreamClass_field_0x18)(v9) /*0x7ae14b*/
                & ((1 << this->ComStreamClass_field_0x0C) - 1);
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x7ae14f*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x7ae155*/
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



// ==== 0x007AE180  ObjectClass::ConnectAndLoginWOL_Connect_7AE180  this=ObjectClass  sig=csp ====
bool __thiscall ConnectAndLoginWOL_Connect_7AE180(ObjectClass *this, const char **a2, _DWORD *a3)
{
  bool result; // al
  int v4; // esi

  if ( !this->? ) /*0x7ae184*/
    return 0; /*0x7ae18c*/
  v4 = *((_DWORD *)this->AbstractClass + (((int (__thiscall *)(const char **))this->?)(a2) & ((1 << (int)this->?) - 1))); /*0x7ae1aa*/
  if ( !v4 ) /*0x7ae1af*/
    return 0; /*0x7ae1b2*/
  while ( 1 ) /*0x7ae1bb*/
  {
    result = String::Compare((String *)v4, a2); /*0x7ae1bb*/
    if ( result ) /*0x7ae1c2*/
      break; /*0x7ae1c2*/
    v4 = *(_DWORD *)(v4 + 8); /*0x7ae1c4*/
    if ( !v4 ) /*0x7ae1c9*/
      return result; /*0x7ae1c9*/
  }
  *a3 = v4 + 4; /*0x7ae1e5*/
  return 1; /*0x7ae18b*/
}



// ==== 0x007AE1F0  HashTable::Lookup  this=HashTable  sig=csp ====
char __thiscall HashTable::Lookup(HashTable *this, const char **a2, _DWORD *a3)
{
  int HashTable_field_0x04; // eax
  int v7; // edi
  int v8; // ebp
  _DWORD *v9; // ebp
  int v10; // ebx
  bool v11; // c0
  bool v12; // c3
  unsigned int HashTable_field_0x08; // ebp
  int HashTable_field_0x0C; // edi
  int *v15; // ebx
  void *v16; // edi
  unsigned int v17; // edx
  int v18; // edi
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  int v22; // edi
  unsigned int v23; // ebp
  int *v24; // ebx
  int v25; // edi
  void *v26; // edi
  unsigned int v27; // edx
  int v28; // edi
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  float v32; // [esp+10h] [ebp-8h]
  char v33; // [esp+1Ch] [ebp+4h]
  int *v34; // [esp+20h] [ebp+8h]
  int *v35; // [esp+20h] [ebp+8h]

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x7ae1fb*/
  if ( !HashTable_field_0x04 ) /*0x7ae200*/
    return 0; /*0x7ae205*/
  v32 = (double)(unsigned int)(HashTable_field_0x04 - 1) / (double)this->HashTable_field_0x08; /*0x7ae230*/
  v7 = ((int (__thiscall *)(const char **))this->HashTable_field_0x18)(a2) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7ae244*/
  v8 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x7ae246*/
  if ( !v8 ) /*0x7ae24b*/
    return 0; /*0x7ae250*/
  if ( (unsigned __int8)String::Compare((String *)v8, a2) ) /*0x7ae25c*/
  {
    *a3 = *(_DWORD *)(v8 + 4); /*0x7ae270*/
    v9 = *(_DWORD **)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x7ae274*/
    v10 = v9[2]; /*0x7ae279*/
    if ( v9 ) /*0x7ae27c*/
    {
      DeleteAndZero(*(ObjectClass **)(*(_DWORD *)this->__pad_0 + 4 * v7)); /*0x7ae280*/
      __3_YAXPAX_Z(v9); /*0x7ae286*/
    }
    *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v7) = v10; /*0x7ae294*/
    v11 = v32 < *(double *)&this->HashTable_field_0x20; /*0x7ae29a*/
    v12 = v32 == *(double *)&this->HashTable_field_0x20; /*0x7ae29a*/
    --this->HashTable_field_0x04; /*0x7ae29e*/
    if ( v11 || v12 ) /*0x7ae2a3*/
    {
      HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7ae2ac*/
      if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7ae2be*/
      {
        HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x7ae2c0*/
        v15 = *(int **)this->__pad_0; /*0x7ae2c3*/
        v34 = *(int **)this->__pad_0; /*0x7ae2c7*/
        this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x7ae2cd*/
        this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x7ae2d5*/
        v16 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x7ae2e0*/
        v17 = 4 * this->HashTable_field_0x08; /*0x7ae2e5*/
        *(_DWORD *)this->__pad_0 = v16; /*0x7ae2ec*/
        memset(v16, 0, v17); /*0x7ae2f1*/
        if ( (int)HashTable_field_0x08 > 0 ) /*0x7ae2fc*/
        {
          do /*0x7ae330*/
          {
            v18 = *v15; /*0x7ae2fe*/
            if ( *v15 ) /*0x7ae2fe*/
            {
              do /*0x7ae32a*/
              {
                v19 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v18) /*0x7ae314*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v20 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v19); /*0x7ae318*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v19) = v18; /*0x7ae31e*/
                v21 = *(_DWORD *)(v18 + 8); /*0x7ae320*/
                *(_DWORD *)(v18 + 8) = v20; /*0x7ae323*/
                v18 = v21; /*0x7ae326*/
              }
              while ( v21 ); /*0x7ae32a*/
            }
            ++v15; /*0x7ae32c*/
            --HashTable_field_0x08; /*0x7ae32f*/
          }
          while ( HashTable_field_0x08 ); /*0x7ae330*/
          v15 = v34; /*0x7ae332*/
        }
        __3_YAXPAX_Z(v15); /*0x7ae337*/
      }
    }
    return 1; /*0x7ae342*/
  }
  else
  {
    v22 = *(_DWORD *)(v8 + 8); /*0x7ae34b*/
    v33 = 0; /*0x7ae34e*/
    if ( v22 ) /*0x7ae355*/
    {
      while ( !(unsigned __int8)String::Compare((String *)v22, a2) ) /*0x7ae361*/
      {
        v8 = v22; /*0x7ae363*/
        v22 = *(_DWORD *)(v22 + 8); /*0x7ae365*/
        if ( !v22 ) /*0x7ae36a*/
          goto LABEL_23; /*0x7ae36a*/
      }
      *a3 = *(_DWORD *)(v22 + 4); /*0x7ae375*/
      *(_DWORD *)(v8 + 8) = *(_DWORD *)(v22 + 8); /*0x7ae37a*/
      --this->HashTable_field_0x04; /*0x7ae383*/
      DeleteAndZero((ObjectClass *)v22); /*0x7ae38a*/
      __3_YAXPAX_Z((void *)v22); /*0x7ae390*/
      v33 = 1; /*0x7ae398*/
    }
LABEL_23:
    if ( v32 <= *(double *)&this->HashTable_field_0x20 ) /*0x7ae3a9*/
    {
      v23 = this->HashTable_field_0x08; /*0x7ae3af*/
      if ( v23 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7ae3c1*/
      {
        v24 = *(int **)this->__pad_0; /*0x7ae3ca*/
        v35 = *(int **)this->__pad_0; /*0x7ae3ce*/
        v25 = this->HashTable_field_0x0C - 1; /*0x7ae3d4*/
        this->HashTable_field_0x08 = v23 >> 1; /*0x7ae3d5*/
        this->HashTable_field_0x0C = v25; /*0x7ae3df*/
        v26 = (void *)__2_YAPAXI_Z(4 * (v23 >> 1)); /*0x7ae3eb*/
        v27 = 4 * this->HashTable_field_0x08; /*0x7ae3f0*/
        *(_DWORD *)this->__pad_0 = v26; /*0x7ae3f7*/
        memset(v26, 0, v27); /*0x7ae3fc*/
        if ( (int)v23 > 0 ) /*0x7ae407*/
        {
          do /*0x7ae43b*/
          {
            v28 = *v24; /*0x7ae409*/
            if ( *v24 ) /*0x7ae409*/
            {
              do /*0x7ae435*/
              {
                v29 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v28) /*0x7ae41f*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v30 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v29); /*0x7ae423*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v29) = v28; /*0x7ae429*/
                v31 = *(_DWORD *)(v28 + 8); /*0x7ae42b*/
                *(_DWORD *)(v28 + 8) = v30; /*0x7ae42e*/
                v28 = v31; /*0x7ae431*/
              }
              while ( v31 ); /*0x7ae435*/
            }
            ++v24; /*0x7ae437*/
            --v23; /*0x7ae43a*/
          }
          while ( v23 ); /*0x7ae43b*/
          v24 = v35; /*0x7ae43d*/
        }
        __3_YAXPAX_Z(v24); /*0x7ae442*/
      }
    }
    return v33; /*0x7ae44a*/
  }
}



// ==== 0x007AE460  HashMap::Shrink  this=HashMap  sig=csp ====
int __thiscall HashMap::Shrink(HashMap *this)
{
  unsigned int HashMap_field_0x08; // esi
  int result; // eax
  int *v4; // ebp
  int HashMap_field_0x0C; // edi
  void *v6; // edi
  unsigned int v7; // edx
  int *v8; // edi
  unsigned int v9; // ebp
  int v10; // esi
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int *v14; // [esp+8h] [ebp-4h]

  HashMap_field_0x08 = this->HashMap_field_0x08; /*0x7ae465*/
  result = this->q00C; /*0x7ae468*/
  if ( HashMap_field_0x08 > result && *((_BYTE *)this + 20) != 1 ) /*0x7ae477*/
  {
    v4 = *(int **)this->__pad_0; /*0x7ae480*/
    HashMap_field_0x0C = this->HashMap_field_0x0C; /*0x7ae483*/
    v14 = *(int **)this->__pad_0; /*0x7ae486*/
    this->HashMap_field_0x08 = HashMap_field_0x08 >> 1; /*0x7ae48c*/
    this->HashMap_field_0x0C = HashMap_field_0x0C - 1; /*0x7ae494*/
    v6 = (void *)__2_YAPAXI_Z(4 * (HashMap_field_0x08 >> 1)); /*0x7ae49f*/
    v7 = 4 * this->HashMap_field_0x08; /*0x7ae4a4*/
    *(_DWORD *)this->__pad_0 = v6; /*0x7ae4ab*/
    memset(v6, 0, v7); /*0x7ae4b0*/
    if ( (int)HashMap_field_0x08 > 0 ) /*0x7ae4bb*/
    {
      v8 = v4; /*0x7ae4bd*/
      v9 = HashMap_field_0x08; /*0x7ae4bf*/
      do /*0x7ae4f3*/
      {
        v10 = *v8; /*0x7ae4c1*/
        if ( *v8 ) /*0x7ae4c1*/
        {
          do /*0x7ae4ed*/
          {
            v11 = (*((int (__thiscall **)(int))this + 6))(v10) & ((1 << this->HashMap_field_0x0C) - 1); /*0x7ae4d7*/
            v12 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v11); /*0x7ae4db*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v11) = v10; /*0x7ae4e1*/
            v13 = *(_DWORD *)(v10 + 8); /*0x7ae4e3*/
            *(_DWORD *)(v10 + 8) = v12; /*0x7ae4e6*/
            v10 = v13; /*0x7ae4e9*/
          }
          while ( v13 ); /*0x7ae4ed*/
        }
        ++v8; /*0x7ae4ef*/
        --v9; /*0x7ae4f2*/
      }
      while ( v9 ); /*0x7ae4f3*/
      v4 = v14; /*0x7ae4f5*/
    }
    __3_YAXPAX_Z(v4); /*0x7ae4fa*/
  }
  return result; /*0x7ae504*/
}



// ==== 0x007AE510  HashTable::Grow  this=HashTable  sig=csp ====
void __thiscall HashTable::Grow(HashTable *this)
{
  int HashTable_field_0x08; // esi
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

  if ( LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7ae518*/
  {
    HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7ae520*/
    v3 = *(_DWORD **)this->__pad_0; /*0x7ae523*/
    v4 = this->HashTable_field_0x0C + 1; /*0x7ae52c*/
    this->HashTable_field_0x08 = 2 * HashTable_field_0x08; /*0x7ae52d*/
    v13 = v3; /*0x7ae530*/
    this->HashTable_field_0x0C = v4; /*0x7ae538*/
    v5 = (void *)__2_YAPAXI_Z(8 * HashTable_field_0x08); /*0x7ae543*/
    v6 = 4 * this->HashTable_field_0x08; /*0x7ae548*/
    *(_DWORD *)this->__pad_0 = v5; /*0x7ae54f*/
    memset(v5, 0, v6); /*0x7ae554*/
    if ( HashTable_field_0x08 > 0 ) /*0x7ae55f*/
    {
      v7 = v3; /*0x7ae561*/
      v8 = HashTable_field_0x08; /*0x7ae563*/
      do /*0x7ae597*/
      {
        v9 = *v7; /*0x7ae565*/
        if ( *v7 ) /*0x7ae565*/
        {
          do /*0x7ae591*/
          {
            v10 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v9) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7ae57b*/
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x7ae57f*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x7ae585*/
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



// ==== 0x007AE5B0  CComObject_CChatEventSink___ATL::Check  this=CComObject_CChatEventSink___ATL  sig=csp ====
int __thiscall sub_7AE5B0(int this, int a2)
{
  return (*(int (__thiscall **)(int))(this + 24))(a2) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x7ae5c4*/
}



// ==== 0x007AE5D0  StringVector::Insert  this=StringVector  sig=csp ====
char __thiscall StringVector::Insert(StringVector *this, const char **a2, int a3)
{
  int v4; // esi
  int v5; // ecx
  int StringVector_field_0x04; // eax
  int v7; // eax
  unsigned int v8; // esi
  void *v9; // ebp
  const void *StringVector_field_0x08; // esi
  int v11; // eax
  unsigned int v12; // esi
  void *v13; // ebp
  const void *v14; // esi
  String *v15; // ecx
  int v17; // [esp+8h] [ebp-4h]
  int v18; // [esp+8h] [ebp-4h]

  v4 = a3; /*0x7ae5d5*/
  v5 = *(_DWORD *)this->__pad_0; /*0x7ae5d9*/
  if ( a3 > v5 ) /*0x7ae5dd*/
  {
    a3 = v5; /*0x7ae5df*/
    v4 = v5; /*0x7ae5e3*/
  }
  StringVector_field_0x04 = this->StringVector_field_0x04; /*0x7ae5e5*/
  if ( v4 >= StringVector_field_0x04 && v5 >= StringVector_field_0x04 ) /*0x7ae5f0*/
  {
    v7 = 2 * v5; /*0x7ae5f2*/
    v17 = 2 * v5; /*0x7ae5f8*/
    if ( 2 * v5 < 10 ) /*0x7ae5fc*/
    {
      v17 = 10; /*0x7ae5fe*/
      v7 = 10; /*0x7ae606*/
    }
    v8 = 4 * v7; /*0x7ae60a*/
    v9 = (void *)__2_YAPAXI_Z(4 * v7); /*0x7ae619*/
    memset(v9, 0, v8); /*0x7ae627*/
    StringVector_field_0x08 = (const void *)this->StringVector_field_0x08; /*0x7ae630*/
    if ( StringVector_field_0x08 ) /*0x7ae635*/
      qmemcpy(v9, StringVector_field_0x08, 4 * *(_DWORD *)this->__pad_0); /*0x7ae643*/
    __3_YAXPAX_Z((void *)this->StringVector_field_0x08); /*0x7ae650*/
    v4 = a3; /*0x7ae659*/
    this->StringVector_field_0x08 = (int)v9; /*0x7ae660*/
    this->StringVector_field_0x04 = v17; /*0x7ae663*/
  }
  if ( *(_DWORD *)this->__pad_0 >= this->StringVector_field_0x04 ) /*0x7ae66d*/
  {
    v11 = 2 * *(_DWORD *)this->__pad_0; /*0x7ae66f*/
    v18 = v11; /*0x7ae674*/
    if ( v11 < 10 ) /*0x7ae678*/
    {
      v18 = 10; /*0x7ae67a*/
      v11 = 10; /*0x7ae682*/
    }
    v12 = 4 * v11; /*0x7ae686*/
    v13 = (void *)__2_YAPAXI_Z(4 * v11); /*0x7ae695*/
    memset(v13, 0, v12); /*0x7ae6a3*/
    v14 = (const void *)this->StringVector_field_0x08; /*0x7ae6ac*/
    if ( v14 ) /*0x7ae6b1*/
      qmemcpy(v13, v14, 4 * *(_DWORD *)this->__pad_0); /*0x7ae6bf*/
    __3_YAXPAX_Z((void *)this->StringVector_field_0x08); /*0x7ae6cc*/
    v4 = a3; /*0x7ae6d5*/
    this->StringVector_field_0x08 = (int)v13; /*0x7ae6dc*/
    this->StringVector_field_0x04 = v18; /*0x7ae6df*/
  }
  if ( v4 < *(_DWORD *)this->__pad_0 ) /*0x7ae6e8*/
    memcpy( /*0x7ae703*/
      (void *)(this->StringVector_field_0x08 + 4 * v4 + 4),
      (const void *)(this->StringVector_field_0x08 + 4 * v4),
      4 * (*(_DWORD *)this->__pad_0 + 0x3FFFFFFF * v4));
  v15 = (String *)(this->StringVector_field_0x08 + 4 * v4); /*0x7ae70e*/
  if ( v15 ) /*0x7ae713*/
    String::AssignFromPtr(v15, a2); /*0x7ae71a*/
  ++*(_DWORD *)this->__pad_0; /*0x7ae723*/
  return 1; /*0x7ae721*/
}



// ==== 0x007AE730  VectorClass::Shrink  this=VectorClass  sig=csp ====
int __thiscall VectorClass::Shrink(VectorClass *this)
{
  void *vtable0; // eax
  int Items; // ecx
  int result; // eax
  int v5; // ebx
  void *v6; // eax
  const void *Capacity; // esi
  int v8; // [esp+8h] [ebp-4h]

  vtable0 = this->vtable0; /*0x7ae735*/
  Items = (int)this->Items; /*0x7ae738*/
  result = 3 * (_DWORD)vtable0; /*0x7ae73b*/
  if ( result <= Items ) /*0x7ae740*/
  {
    result = Items - (Items >> 31); /*0x7ae74b*/
    v5 = Items / 2; /*0x7ae74f*/
    if ( Items / 2 < 10 ) /*0x7ae754*/
      v5 = 10; /*0x7ae756*/
    if ( v5 < Items ) /*0x7ae75d*/
    {
      v6 = (void *)__2_YAPAXI_Z(4 * v5); /*0x7ae76e*/
      Capacity = (const void *)this->Capacity; /*0x7ae773*/
      v8 = (int)v6; /*0x7ae77b*/
      if ( Capacity ) /*0x7ae77f*/
        qmemcpy(v6, Capacity, 4 * (int)this->vtable0); /*0x7ae78f*/
      __3_YAXPAX_Z((void *)this->Capacity); /*0x7ae79d*/
      this->Capacity = v8; /*0x7ae7a9*/
      this->Items = (void *)v5; /*0x7ae7ac*/
      LOBYTE(result) = 1; /*0x7ae7b1*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x7ae760*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x7ae743*/
  }
  return result; /*0x7ae742*/
}



// ==== 0x007AE7C0  ObjectClass::GameOptionsScreenWOL_Helper_7AE7C0  this=ObjectClass  sig=csp ====
bool __thiscall GameOptionsScreenWOL_Helper_7AE7C0(ObjectClass *this, const char **a2, _DWORD *a3)
{
  bool result; // al
  int v4; // esi

  if ( !this->? ) /*0x7ae7c4*/
    return 0; /*0x7ae7cc*/
  v4 = *((_DWORD *)this->AbstractClass + (((int (__thiscall *)(const char **))this->?)(a2) & ((1 << (int)this->?) - 1))); /*0x7ae7ea*/
  if ( !v4 ) /*0x7ae7ef*/
    return 0; /*0x7ae7f2*/
  while ( 1 ) /*0x7ae7fb*/
  {
    result = String::Compare((String *)v4, a2); /*0x7ae7fb*/
    if ( result ) /*0x7ae802*/
      break; /*0x7ae802*/
    v4 = *(_DWORD *)(v4 + 8); /*0x7ae804*/
    if ( !v4 ) /*0x7ae809*/
      return result; /*0x7ae809*/
  }
  *a3 = v4 + 4; /*0x7ae825*/
  return 1; /*0x7ae7cb*/
}



// ==== 0x007AE830  ObjectClass::RemoveWOLPlayerLogin_Remove  this=ObjectClass  sig=csp ====
void __thiscall RemoveWOLPlayerLogin_Remove(ObjectClass *this)
{
  unsigned int vtable2; // esi
  int *vtable0; // ebp
  char *vtable3; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  vtable2 = (unsigned int)this->?; /*0x7ae835*/
  if ( (ObjectClass *)vtable2 > this->nextObject && LOBYTE(this->?) != 1 ) /*0x7ae847*/
  {
    vtable0 = (int *)this->AbstractClass; /*0x7ae850*/
    vtable3 = (char *)this->?; /*0x7ae853*/
    v13 = (int *)this->AbstractClass; /*0x7ae856*/
    this->? = (void *)(vtable2 >> 1); /*0x7ae85c*/
    this->? = vtable3 - 1; /*0x7ae864*/
    v5 = (void *)__2_YAPAXI_Z(4 * (vtable2 >> 1)); /*0x7ae86f*/
    v6 = 4 * (int)this->?; /*0x7ae874*/
    this->AbstractClass = v5; /*0x7ae87b*/
    memset(v5, 0, v6); /*0x7ae880*/
    if ( (int)vtable2 > 0 ) /*0x7ae88b*/
    {
      v7 = vtable0; /*0x7ae88d*/
      v8 = vtable2; /*0x7ae88f*/
      do /*0x7ae8c3*/
      {
        v9 = *v7; /*0x7ae891*/
        if ( *v7 ) /*0x7ae891*/
        {
          do /*0x7ae8bd*/
          {
            v10 = ((int (__thiscall *)(int))this->?)(v9) & ((1 << (int)this->?) - 1); /*0x7ae8a7*/
            v11 = *((_DWORD *)this->AbstractClass + v10); /*0x7ae8ab*/
            *((_DWORD *)this->AbstractClass + v10) = v9; /*0x7ae8b1*/
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
      vtable0 = v13; /*0x7ae8c5*/
    }
    __3_YAXPAX_Z(vtable0); /*0x7ae8ca*/
  }
}



// ==== 0x007AE8E0  ObjectClass::GameOptionsScreenWOL_Helper_7AE8E0  this=ObjectClass  sig=csp ====
bool __thiscall GameOptionsScreenWOL_Helper_7AE8E0(ObjectClass *this, const char **a2, _DWORD *a3)
{
  bool result; // al
  int v4; // esi

  if ( !this->? ) /*0x7ae8e4*/
    return 0; /*0x7ae8ec*/
  v4 = *((_DWORD *)this->AbstractClass + (((int (__thiscall *)(const char **))this->?)(a2) & ((1 << (int)this->?) - 1))); /*0x7ae90a*/
  if ( !v4 ) /*0x7ae90f*/
    return 0; /*0x7ae912*/
  while ( 1 ) /*0x7ae91b*/
  {
    result = String::Compare((String *)v4, a2); /*0x7ae91b*/
    if ( result ) /*0x7ae922*/
      break; /*0x7ae922*/
    v4 = *(_DWORD *)(v4 + 272); /*0x7ae924*/
    if ( !v4 ) /*0x7ae92c*/
      return result; /*0x7ae92c*/
  }
  *a3 = v4 + 4; /*0x7ae948*/
  return 1; /*0x7ae8eb*/
}



// ==== 0x007AE950  HashTable::FindWOLHashTableEntry  this=HashTable  sig=csp ====
char __thiscall HashTable::FindWOLHashTableEntry(HashTable *this, const char **a2, void *a3)
{
  int HashTable_field_0x04; // eax
  int v7; // ebx
  int v8; // esi
  _DWORD *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int HashTable_field_0x08; // esi
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
  int HashTable_field_0x0C; // edi
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

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x7ae95b*/
  if ( !HashTable_field_0x04 ) /*0x7ae960*/
    return 0; /*0x7ae965*/
  v37 = (double)(unsigned int)(HashTable_field_0x04 - 1) / (double)this->HashTable_field_0x08; /*0x7ae990*/
  v7 = ((int (__thiscall *)(const char **))this->HashTable_field_0x18)(a2) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7ae9a5*/
  v8 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x7ae9a7*/
  v36 = v8; /*0x7ae9ac*/
  if ( !v8 ) /*0x7ae9b0*/
    return 0; /*0x7ae9b5*/
  if ( (unsigned __int8)String::Compare((String *)v8, a2) ) /*0x7ae9c1*/
  {
    qmemcpy(a3, (const void *)(v8 + 4), 0x10Cu); /*0x7ae9da*/
    v9 = *(_DWORD **)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x7ae9df*/
    v10 = v9[68]; /*0x7ae9e4*/
    if ( v9 ) /*0x7ae9ea*/
    {
      DeleteAndZero(*(ObjectClass **)(*(_DWORD *)this->__pad_0 + 4 * v7)); /*0x7ae9ee*/
      __3_YAXPAX_Z(v9); /*0x7ae9f4*/
    }
    *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v7) = v10; /*0x7aea03*/
    v11 = v37 < *(double *)&this->HashTable_field_0x20; /*0x7aea09*/
    v12 = v37 == *(double *)&this->HashTable_field_0x20; /*0x7aea09*/
    --this->HashTable_field_0x04; /*0x7aea0d*/
    if ( v11 || v12 ) /*0x7aea12*/
    {
      HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7aea1b*/
      if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7aea2d*/
      {
        v14 = *(int **)this->__pad_0; /*0x7aea36*/
        v39 = *(int **)this->__pad_0; /*0x7aea3b*/
        v15 = this->HashTable_field_0x0C - 1; /*0x7aea41*/
        this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x7aea42*/
        this->HashTable_field_0x0C = v15; /*0x7aea4c*/
        v16 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x7aea58*/
        v17 = 4 * this->HashTable_field_0x08; /*0x7aea5d*/
        *(_DWORD *)this->__pad_0 = v16; /*0x7aea64*/
        memset(v16, 0, v17); /*0x7aea6a*/
        if ( (int)HashTable_field_0x08 > 0 ) /*0x7aea75*/
        {
          v18 = v14; /*0x7aea77*/
          v19 = HashTable_field_0x08; /*0x7aea79*/
          do /*0x7aeab4*/
          {
            v20 = *v18; /*0x7aea7b*/
            if ( *v18 ) /*0x7aea7b*/
            {
              do /*0x7aeaae*/
              {
                v21 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v20) /*0x7aea91*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v22 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v21); /*0x7aea96*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v21) = v20; /*0x7aea9c*/
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
      while ( !(unsigned __int8)String::Compare((String *)v24, a2) ) /*0x7aeae8*/
      {
        v36 = v24; /*0x7aeaea*/
        v24 = *(_DWORD *)(v24 + 272); /*0x7aeaee*/
        if ( !v24 ) /*0x7aeaf6*/
          goto LABEL_24; /*0x7aeaf6*/
      }
      qmemcpy(a3, (const void *)(v24 + 4), 0x10Cu); /*0x7aeb0a*/
      *(_DWORD *)(v36 + 272) = *(_DWORD *)(v24 + 272); /*0x7aeb12*/
      --this->HashTable_field_0x04; /*0x7aeb1e*/
      DeleteAndZero((ObjectClass *)v24); /*0x7aeb25*/
      __3_YAXPAX_Z((void *)v24); /*0x7aeb2b*/
      v38 = 1; /*0x7aeb33*/
    }
LABEL_24:
    if ( v37 <= *(double *)&this->HashTable_field_0x20 ) /*0x7aeb44*/
    {
      v25 = this->HashTable_field_0x08; /*0x7aeb4a*/
      if ( v25 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7aeb5c*/
      {
        HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x7aeb62*/
        v27 = *(int **)this->__pad_0; /*0x7aeb65*/
        v40 = *(int **)this->__pad_0; /*0x7aeb6a*/
        this->HashTable_field_0x08 = v25 >> 1; /*0x7aeb70*/
        this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x7aeb78*/
        v28 = (void *)__2_YAPAXI_Z(4 * (v25 >> 1)); /*0x7aeb83*/
        v29 = 4 * this->HashTable_field_0x08; /*0x7aeb88*/
        *(_DWORD *)this->__pad_0 = v28; /*0x7aeb8f*/
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
                v33 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v32) /*0x7aebbc*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v34 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v33); /*0x7aebc1*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v33) = v32; /*0x7aebc7*/
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
int __thiscall HashTable::Shrink(HashTable *this)
{
  unsigned int HashTable_field_0x08; // esi
  int result; // eax
  int *v4; // ebp
  int HashTable_field_0x0C; // edi
  void *v6; // edi
  unsigned int v7; // edx
  int *v8; // edi
  unsigned int v9; // ebp
  int v10; // esi
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int *v14; // [esp+8h] [ebp-4h]

  HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7aec05*/
  result = this->HashTable_field_0x30; /*0x7aec08*/
  if ( HashTable_field_0x08 > result && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7aec17*/
  {
    v4 = *(int **)this->__pad_0; /*0x7aec20*/
    HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x7aec23*/
    v14 = *(int **)this->__pad_0; /*0x7aec26*/
    this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x7aec2c*/
    this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x7aec34*/
    v6 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x7aec3f*/
    v7 = 4 * this->HashTable_field_0x08; /*0x7aec44*/
    *(_DWORD *)this->__pad_0 = v6; /*0x7aec4b*/
    memset(v6, 0, v7); /*0x7aec50*/
    if ( (int)HashTable_field_0x08 > 0 ) /*0x7aec5b*/
    {
      v8 = v4; /*0x7aec5d*/
      v9 = HashTable_field_0x08; /*0x7aec5f*/
      do /*0x7aec99*/
      {
        v10 = *v8; /*0x7aec61*/
        if ( *v8 ) /*0x7aec61*/
        {
          do /*0x7aec93*/
          {
            v11 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v10) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7aec77*/
            v12 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v11); /*0x7aec7b*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v11) = v10; /*0x7aec81*/
            v13 = *(_DWORD *)(v10 + 272); /*0x7aec83*/
            *(_DWORD *)(v10 + 272) = v12; /*0x7aec89*/
            v10 = v13; /*0x7aec8f*/
          }
          while ( v13 ); /*0x7aec93*/
        }
        ++v8; /*0x7aec95*/
        --v9; /*0x7aec98*/
      }
      while ( v9 ); /*0x7aec99*/
      v4 = v14; /*0x7aec9b*/
    }
    __3_YAXPAX_Z(v4); /*0x7aeca0*/
  }
  return result; /*0x7aecaa*/
}



// ==== 0x007AECB0  CChatEventSink::ComputeBucketMask  this=CChatEventSink  sig=csp ====
int __thiscall sub_7AECB0(int this, int a2)
{
  return (*(int (__thiscall **)(int))(this + 24))(a2) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x7aecc4*/
}



// ==== 0x007AECD0  VectorClass::QueryNATPortWOL_Helper  this=VectorClass  sig=csp ====
_DWORD *__thiscall QueryNATPortWOL_Helper(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x7aecdb*/
  this->Capacity = a2; /*0x7aecde*/
  this->IsInitialized = 1; /*0x7aece1*/
  this->IsAllocated = 0; /*0x7aece5*/
  this->vtable0 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x7aece8*/
  if ( a2 ) /*0x7aecee*/
  {
    if ( a3 ) /*0x7aecf6*/
    {
      this->Items = (void *)a3; /*0x7aecf8*/
      return &this->vtable0; /*0x7aecfe*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x7aed0d*/
    this->IsAllocated = 1; /*0x7aed10*/
  }
  return &this->vtable0; /*0x7aecfd*/
}



// ==== 0x007AED20  ComStreamClass::writeData  this=ComStreamClass  sig=csp ====
void **__thiscall ComStreamClass::writeData(ComStreamClass *this, char a2)
{
  DeleteAndZero((ObjectClass *)this); /*0x7aed23*/
  if ( (a2 & 1) != 0 ) /*0x7aed2d*/
    __3_YAXPAX_Z(this); /*0x7aed30*/
  return (void **)this; /*0x7aed3a*/
}



// ==== 0x007AED40  CChatEventSink::ProcessChatEvent  this=CChatEventSink  sig=csp ====
char __thiscall CChatEventSink::ProcessChatEvent(CChatEventSink *this)
{
  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  const void *CChatEventSink_field_0x08; // esi
  int v7; // [esp+4h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x7aed44*/
  if ( *(_DWORD *)this->__pad_0 < this->CChatEventSink_field_0x04 ) /*0x7aed4b*/
    return 0; /*0x7aed4d*/
  v4 = 2 * v2; /*0x7aed53*/
  if ( 2 * v2 < 10 ) /*0x7aed5b*/
    v4 = 10; /*0x7aed5d*/
  v5 = (void *)__2_YAPAXI_Z(248 * v4); /*0x7aed72*/
  memset(v5, 0, 4 * ((unsigned int)(248 * v4) >> 2)); /*0x7aed7d*/
  v7 = (int)v5; /*0x7aed87*/
  CChatEventSink_field_0x08 = (const void *)this->CChatEventSink_field_0x08; /*0x7aed8d*/
  if ( CChatEventSink_field_0x08 ) /*0x7aed92*/
    qmemcpy(v5, CChatEventSink_field_0x08, 248 * *(_DWORD *)this->__pad_0); /*0x7aeda7*/
  __3_YAXPAX_Z((void *)this->CChatEventSink_field_0x08); /*0x7aedb4*/
  this->CChatEventSink_field_0x04 = v4; /*0x7aedc0*/
  this->CChatEventSink_field_0x08 = v7; /*0x7aedc3*/
  return 1; /*0x7aed4f*/
}



// ==== 0x007AEDD0  CChatEventSink::EnsureCapacity  this=CChatEventSink  sig=csp ====
char __thiscall CChatEventSink::EnsureCapacity(CChatEventSink *this, int a2)
{
  int v3; // esi
  int v5; // ecx
  int v6; // eax
  int CChatEventSink_field_0x04; // ecx
  int v8; // ebp
  void *v9; // eax
  const void *CChatEventSink_field_0x08; // esi
  int v11; // [esp+Ch] [ebp+4h]

  v3 = *(_DWORD *)this->__pad_0; /*0x7aedd4*/
  if ( !*(_DWORD *)this->__pad_0 ) /*0x7aedd4*/
    return 0; /*0x7aeddb*/
  v5 = a2; /*0x7aede1*/
  if ( a2 < 0 ) /*0x7aede7*/
    v5 = 0; /*0x7aede9*/
  if ( v5 >= v3 ) /*0x7aeded*/
    v5 = v3 - 1; /*0x7aedef*/
  memcpy( /*0x7aee0f*/
    (void *)(this->CChatEventSink_field_0x08 + 4 * v5),
    (const void *)(this->CChatEventSink_field_0x08 + 4 * (v5 + 1)),
    4 * (v3 + 0x3FFFFFFF * (v5 + 1)));
  v6 = *(_DWORD *)this->__pad_0 - 1; /*0x7aee1a*/
  *(_DWORD *)this->__pad_0 = v6; /*0x7aee1c*/
  CChatEventSink_field_0x04 = this->CChatEventSink_field_0x04; /*0x7aee1e*/
  if ( 3 * v6 <= CChatEventSink_field_0x04 ) /*0x7aee26*/
  {
    v8 = CChatEventSink_field_0x04 / 2; /*0x7aee2f*/
    if ( CChatEventSink_field_0x04 / 2 < 10 ) /*0x7aee34*/
      v8 = 10; /*0x7aee36*/
    if ( v8 < CChatEventSink_field_0x04 ) /*0x7aee3d*/
    {
      v9 = (void *)__2_YAPAXI_Z(4 * v8); /*0x7aee47*/
      CChatEventSink_field_0x08 = (const void *)this->CChatEventSink_field_0x08; /*0x7aee4c*/
      v11 = (int)v9; /*0x7aee54*/
      if ( CChatEventSink_field_0x08 ) /*0x7aee58*/
        qmemcpy(v9, CChatEventSink_field_0x08, 4 * *(_DWORD *)this->__pad_0); /*0x7aee66*/
      __3_YAXPAX_Z((void *)this->CChatEventSink_field_0x08); /*0x7aee73*/
      this->CChatEventSink_field_0x08 = v11; /*0x7aee7f*/
      this->CChatEventSink_field_0x04 = v8; /*0x7aee82*/
    }
  }
  return 1; /*0x7aedda*/
}



// ==== 0x007AEE90  CChatEventSink::Check  this=CChatEventSink  sig=csp ====
char __thiscall CChatEventSink::Check(CChatEventSink *this, _DWORD *a2, int a3)
{
  if ( a3 < 0 || a3 >= *(_DWORD *)this->__pad_0 ) /*0x7aee9a*/
    return 0; /*0x7aeead*/
  *a2 = *(_DWORD *)(this->CChatEventSink_field_0x08 + 4 * a3); /*0x7aeea6*/
  return 1; /*0x7aeeaa*/
}



// ==== 0x007AEEC0  Vector::Grow  this=Vector  sig=csp ====
char __thiscall Vector::Grow(Vector *this)
{
  int v2; // eax
  int v4; // esi
  void *v5; // ebp
  int v6; // [esp+4h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x7aeec4*/
  if ( *(_DWORD *)this->__pad_0 < (int)this->Vector_field_0x4 ) /*0x7aeecb*/
    return 0; /*0x7aeecd*/
  v4 = 2 * v2; /*0x7aeed4*/
  v6 = 2 * v2; /*0x7aeedb*/
  if ( 2 * v2 < 10 ) /*0x7aeedf*/
  {
    v6 = 10; /*0x7aeee1*/
    v4 = 10; /*0x7aeee9*/
  }
  v5 = (void *)__2_YAPAXI_Z(4 * v4); /*0x7aeefc*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x7aef0a*/
  if ( this->Vector_field_0x8 ) /*0x7aef13*/
  {
    qmemcpy(v5, this->Vector_field_0x8, 4 * *(_DWORD *)this->__pad_0); /*0x7aef28*/
    v4 = v6; /*0x7aef31*/
  }
  __3_YAXPAX_Z(this->Vector_field_0x8); /*0x7aef39*/
  this->Vector_field_0x4 = (void *)v4; /*0x7aef41*/
  this->Vector_field_0x8 = v5; /*0x7aef44*/
  return 1; /*0x7aeecf*/
}



// ==== 0x007AEF50  ComStreamClass::flushStream  this=ComStreamClass  sig=csp ====
void __thiscall ComStreamClass::flushStream(ComStreamClass *this)
{
  unsigned int ComStreamClass_field_0x08; // esi
  int *v3; // ebp
  int ComStreamClass_field_0x0C; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  ComStreamClass_field_0x08 = this->ComStreamClass_field_0x08; /*0x7aef55*/
  if ( ComStreamClass_field_0x08 > this->ComStreamClass_field_0x30 && LOBYTE(this->ComStreamClass_field_0x14) != 1 ) /*0x7aef67*/
  {
    v3 = *(int **)this->__pad_0; /*0x7aef70*/
    ComStreamClass_field_0x0C = this->ComStreamClass_field_0x0C; /*0x7aef73*/
    v13 = *(int **)this->__pad_0; /*0x7aef76*/
    this->ComStreamClass_field_0x08 = ComStreamClass_field_0x08 >> 1; /*0x7aef7c*/
    this->ComStreamClass_field_0x0C = ComStreamClass_field_0x0C - 1; /*0x7aef84*/
    v5 = (void *)__2_YAPAXI_Z(4 * (ComStreamClass_field_0x08 >> 1)); /*0x7aef8f*/
    v6 = 4 * this->ComStreamClass_field_0x08; /*0x7aef94*/
    *(_DWORD *)this->__pad_0 = v5; /*0x7aef9b*/
    memset(v5, 0, v6); /*0x7aefa0*/
    if ( (int)ComStreamClass_field_0x08 > 0 ) /*0x7aefab*/
    {
      v7 = v3; /*0x7aefad*/
      v8 = ComStreamClass_field_0x08; /*0x7aefaf*/
      do /*0x7aefe3*/
      {
        v9 = *v7; /*0x7aefb1*/
        if ( *v7 ) /*0x7aefb1*/
        {
          do /*0x7aefdd*/
          {
            v10 = ((int (__thiscall *)(int))this->ComStreamClass_field_0x18)(v9) /*0x7aefc7*/
                & ((1 << this->ComStreamClass_field_0x0C) - 1);
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x7aefcb*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x7aefd1*/
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
int __thiscall DynamicVector::EnsureCapacity(DynamicVector *this)
{
  int result; // eax
  int v3; // esi
  void *v4; // ebp
  int v5; // [esp+4h] [ebp-4h]

  result = *(_DWORD *)this->__pad_0; /*0x7af004*/
  if ( *(_DWORD *)this->__pad_0 >= *(_DWORD *)&this->DynamicVector_field_0x1[3] ) /*0x7af00b*/
  {
    v3 = 2 * result; /*0x7af014*/
    v5 = 2 * result; /*0x7af01b*/
    if ( 2 * result < 10 ) /*0x7af01f*/
    {
      v5 = 10; /*0x7af021*/
      v3 = 10; /*0x7af029*/
    }
    v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x7af03c*/
    memset(v4, 0, 4 * ((unsigned int)(4 * v3) >> 2)); /*0x7af04a*/
    if ( this->DynamicVector_field_0x8 ) /*0x7af053*/
    {
      qmemcpy(v4, (const void *)this->DynamicVector_field_0x8, 4 * *(_DWORD *)this->__pad_0); /*0x7af068*/
      v3 = v5; /*0x7af071*/
    }
    __3_YAXPAX_Z((void *)this->DynamicVector_field_0x8); /*0x7af079*/
    *(_DWORD *)&this->DynamicVector_field_0x1[3] = v3; /*0x7af081*/
    this->DynamicVector_field_0x8 = (int)v4; /*0x7af084*/
    LOBYTE(result) = 1; /*0x7af087*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x7af00d*/
  }
  return result; /*0x7af00f*/
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



// ==== 0x007AF2A0  StaticString::Factory  this=StaticString  sig=csp ====
char **__thiscall StaticString::Factory(StaticString *this)
{
  if ( (stru_B77EB0.customSound_controller[3] & 1) == 0 ) /*0x7af2ad*/
  {
    LOBYTE(stru_B77EB0.customSound_controller[3]) |= 1u; /*0x7af2b6*/
    String::Assign((String *)&stru_B77EB0.estimatedHealth, off_84D784); /*0x7af2c1*/
    atexit(unknown_libname_64); /*0x7af2cb*/
  }
  if ( (stru_B77EB0.customSound_controller[3] & 2) == 0 ) /*0x7af2dd*/
  {
    LOBYTE(stru_B77EB0.customSound_controller[3]) |= 2u; /*0x7af2e6*/
    String::Assign((String *)&stru_B77EB0.customSound_controller[2], off_816148); /*0x7af2f1*/
    atexit(unknown_libname_63); /*0x7af2fb*/
  }
  if ( (stru_B77EB0.customSound_controller[3] & 4) == 0 ) /*0x7af30d*/
  {
    LOBYTE(stru_B77EB0.customSound_controller[3]) |= 4u; /*0x7af316*/
    String::Assign((String *)&stru_B77EB0.needsRedraw, off_84D780); /*0x7af321*/
    atexit(unknown_libname_62); /*0x7af32b*/
  }
  if ( this == (StaticString *)1 ) /*0x7af337*/
    return (char **)&stru_B77EB0.estimatedHealth; /*0x7af381*/
  if ( this == (StaticString *)2 ) /*0x7af33a*/
    return (char **)&stru_B77EB0.customSound_controller[2]; /*0x7af37b*/
  if ( this == (StaticString *)3 ) /*0x7af33d*/
    return (char **)&stru_B77EB0.needsRedraw; /*0x7af375*/
  if ( (stru_B77EB0.customSound_controller[3] & 8) == 0 ) /*0x7af349*/
  {
    LOBYTE(stru_B77EB0.customSound_controller[3]) |= 8u; /*0x7af352*/
    String::Assign((String *)&stru_B77EB0.ambientSoundController[1], aXx); /*0x7af35d*/
    atexit(unknown_libname_61); /*0x7af367*/
  }
  return (char **)&stru_B77EB0.ambientSoundController[1]; /*0x7af335*/
}



// ==== 0x007AF390  unknown_libname_61  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_61()
{
  DeleteAndZero(&unk_B77EF0); /*0x7af395*/
}



// ==== 0x007AF3A0  unknown_libname_62  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_62()
{
  DeleteAndZero(&unk_B77F30); /*0x7af3a5*/
}



// ==== 0x007AF3B0  unknown_libname_63  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_63()
{
  DeleteAndZero((void **)&unk_B77F08); /*0x7af3b5*/
}



// ==== 0x007AF3C0  unknown_libname_64  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_64()
{
  DeleteAndZero(&unk_B77F20); /*0x7af3c5*/
}



// ==== 0x007AF3D0  ObjectClass::GetRegionStringWOL  this=ObjectClass  sig=csp ====
char **__thiscall GetRegionStringWOL(ObjectClass *this)
{
  if ( (stru_B77EB0.? & 1) == 0 ) /*0x7af3dd*/
  {
    LOBYTE(stru_B77EB0.?) |= 1u; /*0x7af3e6*/
    String::Assign((String *)&stru_B77EB0.?, "NA"); /*0x7af3f1*/
    atexit(unknown_libname_68); /*0x7af3fb*/
  }
  if ( (stru_B77EB0.? & 2) == 0 ) /*0x7af40d*/
  {
    LOBYTE(stru_B77EB0.?) |= 2u; /*0x7af416*/
    String::Assign((String *)&stru_B77EB0.?, "EU"); /*0x7af421*/
    atexit(unknown_libname_67); /*0x7af42b*/
  }
  if ( (stru_B77EB0.? & 4) == 0 ) /*0x7af43d*/
  {
    LOBYTE(stru_B77EB0.?) |= 4u; /*0x7af446*/
    String::Assign((String *)&stru_B77EB0.health, "AS"); /*0x7af451*/
    atexit(unknown_libname_66); /*0x7af45b*/
  }
  if ( this == (ObjectClass *)1 ) /*0x7af467*/
    return (char **)&stru_B77EB0.?; /*0x7af4b1*/
  if ( this == (ObjectClass *)2 ) /*0x7af46a*/
    return (char **)&stru_B77EB0.?; /*0x7af4ab*/
  if ( this == (ObjectClass *)3 ) /*0x7af46d*/
    return (char **)&stru_B77EB0.health; /*0x7af4a5*/
  if ( (stru_B77EB0.? & 8) == 0 ) /*0x7af479*/
  {
    LOBYTE(stru_B77EB0.?) |= 8u; /*0x7af482*/
    String::Assign((String *)&stru_B77EB0, "XX"); /*0x7af48d*/
    atexit(unknown_libname_65); /*0x7af497*/
  }
  return (char **)&stru_B77EB0; /*0x7af465*/
}



// ==== 0x007AF4C0  unknown_libname_65  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_65()
{
  DeleteAndZero(&stru_B77EB0); /*0x7af4c5*/
}



// ==== 0x007AF4D0  unknown_libname_66  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_66()
{
  DeleteAndZero((void **)&unk_B77F1C); /*0x7af4d5*/
}



// ==== 0x007AF4E0  unknown_libname_67  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_67()
{
  DeleteAndZero(&unk_B77EC8); /*0x7af4e5*/
}



// ==== 0x007AF4F0  unknown_libname_68  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_68()
{
  DeleteAndZero((void **)&unk_B77EC0); /*0x7af4f5*/
}



// ==== 0x007AF500  FactionSelectDialogControl@WorldDominationTour::Team_Start_7AF500  this=FactionSelectDialogControl@WorldDominationTour  sig=csp ====
void __thiscall Team_Start_7AF500(OwnerDrawControl *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx

  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 4); /*0x7af503*/
  *this = (OwnerDrawControl)&WorldDominationTour::FactionSelectDialogControl::`vftable'; /*0x7af506*/
  if ( v2 ) /*0x7af50e*/
    (**v2)(v2, 1); /*0x7af514*/
  v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 5); /*0x7af516*/
  if ( v3 ) /*0x7af51b*/
    (**v3)(v3, 1); /*0x7af521*/
  v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 6); /*0x7af523*/
  if ( v4 ) /*0x7af528*/
    (**v4)(v4, 1); /*0x7af52e*/
  OwnerDrawControl::InitVtable(this); /*0x7af532*/
}



// ==== 0x007AF540  ObjectClass::WorldDominationFactionDlgProc_Helper  this=ObjectClass  sig=csp ====
int __thiscall WorldDominationFactionDlgProc_Helper(ObjectClass *this, HWND hWnd, int *a3)
{
  int result; // eax
  int v5; // edi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // ecx

  result = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 2))(this); /*0x7af546*/
  if ( !(_BYTE)result ) /*0x7af54b*/
  {
    v5 = 0; /*0x7af554*/
    this->? = this->?; /*0x7af556*/
    result = *a3; /*0x7af55d*/
    if ( *a3 >= 16 && result < 364 && (v6 = a3[1], v6 >= 20) && v6 < 136 /*0x7af5bc*/
      || result >= 130 && result < 300 && (v7 = a3[1], v7 >= 100) && v7 < 216
      || result >= 175 && result < 245 && (v8 = a3[1], v8 >= 216) && v8 < 262 )
    {
      result = this->?; /*0x7af60d*/
      v5 = 2; /*0x7af610*/
      this->? = result; /*0x7af615*/
    }
    else if ( result >= 252 && result < 466 && (v9 = a3[1], v9 >= 180) && v9 < 382 /*0x7af5fe*/
           || result >= 212 && result < 496 && (v10 = a3[1], v10 >= 262) && v10 < 422 )
    {
      v5 = 3; /*0x7af603*/
      this->? = this->?; /*0x7af608*/
    }
    if ( this->? != (void *)v5 ) /*0x7af61b*/
    {
      this->? = (void *)v5; /*0x7af626*/
      return InvalidateRect(hWnd, 0, 0); /*0x7af629*/
    }
  }
  return result; /*0x7af62f*/
}



// ==== 0x007AF640  ObjectClass::method_7AF640  this=ObjectClass  sig=csp ====
int __thiscall sub_7AF640(ObjectClass *this, int a2)
{
  int result; // eax
  int referenceCount; // ecx
  _DWORD *v5; // eax
  _DWORD v6[4]; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v7[16]; // [esp+1Ch] [ebp-10h] BYREF

  result = (int)DSurface_Alternate; /*0x7af640*/
  if ( DSurface_Alternate ) /*0x7af64d*/
  {
    referenceCount = this->?; /*0x7af64f*/
    if ( referenceCount ) /*0x7af654*/
    {
      v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)referenceCount + 120))(referenceCount, v7); /*0x7af65d*/
      v6[0] = *v5; /*0x7af664*/
      v6[1] = v5[1]; /*0x7af66b*/
      v6[2] = v5[2]; /*0x7af672*/
      v6[3] = v5[3]; /*0x7af67f*/
      (*((void (__thiscall **)(DSurface *, _DWORD *, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 5))( /*0x7af68a*/
        DSurface_Alternate,
        v6,
        0);
      return (*((int (__thiscall **)(DSurface *, _DWORD *, int, _DWORD *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 /*0x7af6a7*/
              + 2))(
               DSurface_Alternate,
               v6,
               this->?,
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
          StringCSF = GetStringCSF((wchar_t *)aWdtFactionsele, 0, g_Str_File_WorldDom_cpp, 182); /*0x7af86f*/
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
            if ( DSurface_Alternate ) /*0x7af78a*/
            {
              v8 = v7[7]; /*0x7af78c*/
              if ( v8 ) /*0x7af791*/
              {
                v9 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 120))(v8, v15); /*0x7af79a*/
                v11 = *v9; /*0x7af7a1*/
                v12 = v9[1]; /*0x7af7a8*/
                v13 = v9[2]; /*0x7af7af*/
                v14 = v9[3]; /*0x7af7bc*/
                (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)DSurface_Alternate + 20))( /*0x7af7c7*/
                  DSurface_Alternate,
                  &v11,
                  0);
                (*(void (__thiscall **)(int, int *, _DWORD, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x7af7e4*/
                  DSurface_Alternate,
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
int __usercall sub_7AF970@<eax>(ObjectClass *this, int a2@<ebp>)
{
  int v2; // ebx
  _DWORD *v3; // eax
  int v4; // edi
  OwnerDrawControl v6; // [esp+Ch] [ebp-8Ch] BYREF
  int v7; // [esp+18h] [ebp-80h]
  _DWORD *v8; // [esp+1Ch] [ebp-7Ch]
  void (__thiscall ***v9)(_DWORD, int); // [esp+20h] [ebp-78h]
  _DWORD *v10; // [esp+24h] [ebp-74h]
  _DWORD *v11; // [esp+28h] [ebp-70h]
  CCFileClass v12; // [esp+2Ch] [ebp-6Ch] BYREF
  int v13[3]; // [esp+84h] [ebp-14h] BYREF
  int v14; // [esp+90h] [ebp-8h]

  Screen::Capture(1, 0, v2, a2); /*0x7af97c*/
  SimpleDialogControl::Constructor((SimpleDialogControl *)&v6); /*0x7af985*/
  v7 = 0; /*0x7af995*/
  v8 = 0; /*0x7af999*/
  v9 = 0; /*0x7af99d*/
  v10 = 0; /*0x7af9a1*/
  v6 = (OwnerDrawControl)&WorldDominationTour::FactionSelectDialogControl::`vftable'; /*0x7af9a5*/
  CCFileClass::Construct(&v12, aWdtfsbsmPcx); /*0x7af9ad*/
  v8 = DecodeFrameSHP((int)&v12, 0, 0, 0); /*0x7af9cb*/
  *(_DWORD *)v12.CDFileClass = &CCFileClass::`vftable'; /*0x7af9cf*/
  v14 = 0; /*0x7af9d3*/
  Vector::Clear((int)v13); /*0x7af9da*/
  *(_DWORD *)v12.CDFileClass = &off_7E1668; /*0x7af9e3*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v12); /*0x7af9eb*/
  if ( !v9 ) /*0x7af9f4*/
  {
    CCFileClass::Construct(&v12, aWdtfsasmPcx); /*0x7af9ff*/
    v3 = DecodeFrameSHP((int)&v12, 0, 0, 0); /*0x7afa0c*/
    *(_DWORD *)v12.CDFileClass = &CCFileClass::`vftable'; /*0x7afa18*/
    v9 = (void (__thiscall ***)(_DWORD, int))v3; /*0x7afa1c*/
    v14 = 0; /*0x7afa20*/
    Vector::Clear((int)v13); /*0x7afa27*/
    BufferIOFileClass::Destruct((BufferIOFileClass *)&v12); /*0x7afa30*/
  }
  if ( !v10 ) /*0x7afa39*/
  {
    CCFileClass::Construct(&v12, aWdtfsssmPcx); /*0x7afa44*/
    v10 = DecodeFrameSHP((int)&v12, 0, 0, 0); /*0x7afa5a*/
    CCFileClass::Destruct(&v12); /*0x7afa5e*/
  }
  v11 = v8; /*0x7afa76*/
  RunDialog(0x125u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WorldDominationFactionDlgProc, (LPARAM)&v6); /*0x7afa7a*/
  v4 = v7; /*0x7afa7f*/
  v6 = (OwnerDrawControl)&WorldDominationTour::FactionSelectDialogControl::`vftable'; /*0x7afa83*/
  if ( v8 ) /*0x7afa91*/
    (*(void (__thiscall **)(_DWORD *, int))*v8)(v8, 1); /*0x7afa97*/
  if ( v9 ) /*0x7afa9f*/
    (**v9)(v9, 1); /*0x7afaa5*/
  if ( v10 ) /*0x7afaad*/
    (*(void (__thiscall **)(_DWORD *, int))*v10)(v10, 1); /*0x7afab3*/
  OwnerDrawControl::InitVtable(&v6); /*0x7afab9*/
  return v4; /*0x7afac0*/
}



// ==== 0x007AFAD0  Team_Start_7AFAD0  this=AbstractClass  sig=csp ====
int __usercall sub_7AFAD0@<eax>(void *a1@<ecx>, int a2@<edi>)
{
  char **v2; // eax
  char **v3; // esi
  int v5; // edi
  void *v6; // [esp+4h] [ebp-88h] BYREF
  void *v7; // [esp+8h] [ebp-84h] BYREF
  char Buffer[128]; // [esp+Ch] [ebp-80h] BYREF

  v2 = StaticString::Factory(a1); /*0x7afad7*/
  sprintf(Buffer, "TheaterChoice%sMenu", *v2); /*0x7afae9*/
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
  wchar_t *v4; // eax
  void (__thiscall ***v6)(_DWORD, int); // ebp
  _DWORD *v7; // eax
  char v8; // bl
  MixFileClass *v9; // eax
  _DWORD *v10; // eax
  char v11; // bl
  MixFileClass *v12; // eax
  _DWORD *v13; // eax
  char v14; // bl
  MixFileClass *v15; // eax
  int v16; // esi
  OwnerDrawControl v17; // esi
  ObjectClass *v18; // [esp+0h] [ebp-13Ch]
  DeleteAndZero v19; // [esp+10h] [ebp-12Ch] BYREF
  ObjectClass *v20; // [esp+1Ch] [ebp-120h]
  _DWORD *v21; // [esp+20h] [ebp-11Ch]
  void (__stdcall ***v22)(int); // [esp+24h] [ebp-118h]
  ComPtr v23; // [esp+28h] [ebp-114h] BYREF
  int v24[3]; // [esp+88h] [ebp-B4h] BYREF
  int v25; // [esp+94h] [ebp-A8h]
  OwnerDrawControl v26[8]; // [esp+9Ch] [ebp-A0h] BYREF

  HIBYTE(v19.DeleteAndZero_field_0x04) = a1; /*0x7afba6*/
  if ( (int)g_DisplayWidth > 640 ) /*0x7afbaa*/
  {
    StringCSF = GetStringCSF(aWolWdtresoluti, 0, g_Str_File_WorldDom_cpp, 385); /*0x7afbc1*/
    WideString::Assign((wchar_t **)&v19, StringCSF); /*0x7afbcb*/
    v4 = WideString::GetOrEmpty((wchar_t **)&v19); /*0x7afbdb*/
    if ( ShowDialogConfirm(v4, 4, (unsigned __int8 (*)(void))Game::ProcessIdle, 1) != 6 /*0x7afc0e*/
      || !Team_Start(v18, 0x1E0u, a2, a3) )
    {
      DeleteAndZero::Alt(&v19); /*0x7afbf5*/
      return 0; /*0x7afc06*/
    }
    stru_A8EB00.ObjectTypeClass[33] = 640; /*0x7afc32*/
    stru_A8EB00.ObjectTypeClass[34] = 480; /*0x7afc38*/
    ScenarioClass::SaveGameOptions((ScenarioClass *)&stru_A8EB00.ObjectTypeClass[24]); /*0x7afc42*/
    DeleteAndZero::Alt(&v19); /*0x7afc4b*/
  }
  v6 = 0; /*0x7afc52*/
  v22 = 0; /*0x7afc5d*/
  v21 = 0; /*0x7afc61*/
  *(_DWORD *)v19.__pad_0 = 0; /*0x7afc65*/
  v7 = CCFileClass::Construct((CCFileClass *)&v23.ComPtr_field_0x08, g_Str_File_WDT_MIX); /*0x7afc69*/
  v8 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 20))(v7, 0); /*0x7afc82*/
  v23.ComPtr_field_0x08 = (int)&CCFileClass::`vftable'; /*0x7afc84*/
  v25 = 0; /*0x7afc88*/
  Vector::Clear((int)v24); /*0x7afc8f*/
  v23.ComPtr_field_0x08 = (int)&off_7E1668; /*0x7afc98*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v23.ComPtr_field_0x08); /*0x7afca0*/
  if ( v8 ) /*0x7afca7*/
  {
    v9 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x7afcab*/
    if ( v9 ) /*0x7afcb5*/
      v22 = (void (__stdcall ***)(int))MixFileClass::FromFile(v9, g_Str_File_WDT_MIX, (int)dword_886980); /*0x7afcc8*/
    else
      v22 = 0; /*0x7afcce*/
  }
  v10 = CCFileClass::Construct((CCFileClass *)&v23.ComPtr_field_0x08, aWdtvoxMix); /*0x7afcdb*/
  v11 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v10 + 20))(v10, 0); /*0x7afcef*/
  v23.ComPtr_field_0x08 = (int)&CCFileClass::`vftable'; /*0x7afcf1*/
  v25 = 0; /*0x7afcf5*/
  Vector::Clear((int)v24); /*0x7afcfc*/
  v23.ComPtr_field_0x08 = (int)&off_7E1668; /*0x7afd05*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v23.ComPtr_field_0x08); /*0x7afd0d*/
  if ( v11 ) /*0x7afd14*/
  {
    v12 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x7afd18*/
    if ( v12 ) /*0x7afd22*/
      v21 = MixFileClass::FromFile(v12, aWdtvoxMix, (int)dword_886980); /*0x7afd35*/
    else
      v21 = 0; /*0x7afd3b*/
  }
  v13 = CCFileClass::Construct((CCFileClass *)&v23.ComPtr_field_0x08, aLocalMix_1); /*0x7afd48*/
  v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 20))(v13, 0); /*0x7afd5c*/
  v23.ComPtr_field_0x08 = (int)&CCFileClass::`vftable'; /*0x7afd5e*/
  v25 = 0; /*0x7afd62*/
  Vector::Clear((int)v24); /*0x7afd69*/
  v23.ComPtr_field_0x08 = (int)&off_7E1668; /*0x7afd72*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v23.ComPtr_field_0x08); /*0x7afd7a*/
  if ( v14 ) /*0x7afd81*/
  {
    v15 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x7afd85*/
    if ( v15 ) /*0x7afd8f*/
      *(_DWORD *)v19.__pad_0 = MixFileClass::FromFile(v15, aLocalMix_1, (int)dword_886980); /*0x7afda2*/
    else
      *(_DWORD *)v19.__pad_0 = 0; /*0x7afda8*/
    v6 = *(void (__thiscall ****)(_DWORD, int))v19.__pad_0; /*0x7afdac*/
  }
  if ( !v22 ) /*0x7afdb6*/
    goto LABEL_46; /*0x7afdb6*/
  if ( !v6 ) /*0x7afdbe*/
  {
    (**v22)(1); /*0x7b004a*/
LABEL_46:
    if ( v6 ) /*0x7b004e*/
      (**v6)(v6, 1); /*0x7b0057*/
    if ( v21 ) /*0x7b005f*/
      (*(void (__thiscall **)(_DWORD *, int))*v21)(v21, 1); /*0x7b0065*/
    return 0; /*0x7b006a*/
  }
  v16 = HIBYTE(v19.DeleteAndZero_field_0x04) != 0 ? 4 : 1;
  if ( (HIBYTE(v19.DeleteAndZero_field_0x04) != 0 ? 3 : 0) == 0xFFFFFFFF )
    goto LABEL_41; /*0x7afdd2*/
  while ( 2 )
  {
    if ( v16 == 6 ) /*0x7afde0*/
      goto LABEL_40; /*0x7afde0*/
    switch ( v16 )
    {
      case 1:
        Screen::Capture(1, 0, v14, (int)&rc_ptr<WorldDominationTour::Campaign>::`vftable'); /*0x7afdf9*/
        Team_Start_7B0490(v26); /*0x7afe05*/
        RunDialog(0x125u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WorldDominationFactionDlgProc, (LPARAM)v26); /*0x7afe1c*/
        v17 = v26[3]; /*0x7afe21*/
        Team_Start_7AF500(v26); /*0x7afe2f*/
        dword_B77F94 = (char *)v17; /*0x7afe34*/
        v16 = v17 != 0 ? 4 : 0;
        goto LABEL_25; /*0x7afe3e*/
      case 4:
        if ( FetchWOLData(v18) ) /*0x7afeef*/
        {
          ComPtr::Constructor((ComPtr *)&v19.DeleteAndZero_field_0x08); /*0x7aff00*/
          v19.DeleteAndZero_field_0x08 = (int)&rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7aff0f*/
          ComPtr::Set((ComPtr *)&v19.DeleteAndZero_field_0x08, stru_B77F68.ComPtr_field_0x04); /*0x7aff13*/
          if ( !v20 ) /*0x7aff1e*/
          {
            v19.DeleteAndZero_field_0x08 = (int)&rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7b0030*/
            ComPtr::Release((ComPtr *)&v19.DeleteAndZero_field_0x08); /*0x7b0034*/
            return 0; /*0x7b0045*/
          }
          Team_Start_765410((int)v20, dword_B77F94); /*0x7aff2b*/
          if ( Team_Start_764FA0(v20) ) /*0x7aff34*/
          {
            ComPtr::Constructor(&v23); /*0x7aff41*/
            *(_DWORD *)v23.__pad_0 = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7aff50*/
            ComPtr::Set(&v23, stru_B77F68.ComPtr_field_0x14); /*0x7aff54*/
            if ( v23.ComPtr_field_0x04 && !Team_Start_764FA0((ObjectClass *)v23.ComPtr_field_0x04) ) /*0x7aff61*/
              Team_Start_76ECD0((int)&v23, dword_B77F98); /*0x7aff74*/
            *(_DWORD *)v23.__pad_0 = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7aff7d*/
            ComPtr::Release(&v23); /*0x7aff81*/
          }
          dword_A8B3AC = dword_B77F94 == (char *)3; /*0x7aff9a*/
          if ( Team_Start_76ED10((int)&v19.DeleteAndZero_field_0x08, dword_B77F98) ) /*0x7affa4*/
          {
            stru_B77D80.HashTable_field_0x44 = 0; /*0x7affb2*/
            Team_Start_597430((ObjectClass *)&g_MissionQueueFrame.briefing[356]); /*0x7affb8*/
            v16 = 5; /*0x7affbd*/
          }
          else
          {
            v16 = 1; /*0x7affc4*/
          }
          v19.DeleteAndZero_field_0x08 = (int)&rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7affcd*/
          ComPtr::Release((ComPtr *)&v19.DeleteAndZero_field_0x08); /*0x7affd1*/
LABEL_25:
          if ( !v16 ) /*0x7afe43*/
            goto LABEL_40; /*0x7afe43*/
          continue; /*0x7afe43*/
        }
        v16 = 0; /*0x7afff2*/
LABEL_40:
        v6 = *(void (__thiscall ****)(_DWORD, int))v19.__pad_0; /*0x7afff4*/
LABEL_41:
        ((void (__thiscall *)(void (__stdcall ***)(int), int))**v22)(v22, 1); /*0x7afff8*/
        (**v6)(v6, 1); /*0x7b0009*/
        if ( v21 ) /*0x7b0011*/
          (*(void (__thiscall **)(_DWORD *, int))*v21)(v21, 1); /*0x7b0017*/
        return v16 == 6;
      case 5:
        v16 = JoinLobbyWOL(v18) != 1 ? 4 : 6;
        continue; /*0x7affed*/
    }
  }
}


