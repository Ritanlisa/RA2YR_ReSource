// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00780A00  FormatLocaleStringWOL  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t ** WOL_FormatLocaleString(wchar_t ** a1, int a2)
{
  char **v3; // eax
  char *v4; // eax
  wchar_t *StringCSF; // eax
  DeleteAndZero v7; // [esp+8h] [ebp-Ch] BYREF

  v3 = (char **)FormatStringInt((char **)&v7.DeleteAndZero_field_0x08, a2, 2); /*0x780a0f*/
  ProcessStringAndCopy((char **)&v7.DeleteAndZero_field_0x04, aWolLocale, v3); /*0x780a1e*/
  ((DeleteAndZero *)&v7.DeleteAndZero_field_0x08)->Alt(); /*0x780a27*/
  v4 = ((String *)((String *)&v7.DeleteAndZero_field_0x04))->GetOrEmpty(); /*0x780a3a*/
  StringCSF = GetStringCSF((char *)v4, 0, g_Str_File_wonline_cpp, 2909); /*0x780a43*/
  ((WideString *)((WideString *)&v7))->Assign(StringCSF); /*0x780a4d*/
  ((WideString *)((WideString *)a1))->AssignFromPtr((const wchar_t **)&v7); /*0x780a65*/
  ((DeleteAndZero*)&v7)->Alt(); /*0x780a6e*/
  ((DeleteAndZero *)&v7.DeleteAndZero_field_0x04)->Alt(); /*0x780a77*/
  return a1; /*0x780a7e*/
}

// ==== BACKFILL 0x00781090  WOLobby_Get  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
CampaignScore * WOLobby_Get(wchar_t ** a1, HWND a2, WPARAM wParam)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x781090)
}

// ==== BACKFILL 0x00786390  LoginFlowWOL_Reset  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_786390(void * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x786390)
}

// ==== BACKFILL 0x00786E70  sub_786E70  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_786E70::sub_786E70()
{

  void *vtable0; // ecx
  int v3; // edi
  int i; // esi
  char *v5; // eax
  char *v6; // eax

  if ( !((String*)((String *)this))->Length() ) /*0x786e75*/
    return -1; /*0x786e75*/
  vtable0 = (void *)(unsigned int)(((E4Recv_76AAF0 *)&g_WOL_UserList)->AbstractClass); /*0x786e7e*/
  v3 = 1; /*0x786e84*/
  if ( (int)((E4Recv_76AAF0 *)&g_WOL_UserList)->AbstractClass <= 1 ) /*0x786e8b*/
    return -1; /*0x786ed8*/
  for ( i = 248; ; i += 248 ) /*0x786e8d*/
  {
    v5 = 0; /*0x786e92*/
    if ( i >= 0 && v3 < (int)vtable0 ) /*0x786e9a*/
      v5 = (char *)((char *)&g_WOL_UserList) + i; /*0x786ea1*/
    v6 = strchr(v5 + 24, 58); /*0x786ea9*/
    if ( v6 ) /*0x786eb3*/
    {
      if ( *v6 && (uint8_t)((String *)((String *)this))->Equals_Alt(v6 + 1) ) /*0x786ebe*/
        break; /*0x786ebe*/
    }
    vtable0 = (void *)(unsigned int)(((E4Recv_76AAF0 *)&g_WOL_UserList)->AbstractClass); /*0x786ec7*/
    if ( ++v3 >= (int)((E4Recv_76AAF0 *)&g_WOL_UserList)->AbstractClass ) /*0x786ed6*/
      return -1; /*0x786ed6*/
  }
  return v3; /*0x786ed8*/

}

// ==== BACKFILL 0x0078ABF0  ChatMessageWOL  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
short WOL_ChatMessage(char a1, wchar_t * a2)
{
  byte_B77E40 = a1; /*0x78abf0*/
// 0x7b7600
  return ((WideString *)&unk_B76230)->Reassign(a2, 0); /*0x78ac01*/
}
