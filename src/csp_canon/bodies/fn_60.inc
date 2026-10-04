// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00600660  ReadPointerFromECX  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_600660::ReadPointerFromECX()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x600660)
}

// ==== BACKFILL 0x00601360  Event::IsValidActionType  cls=Event  sig=csp  renamed_refs=0  residual=- ====
bool IsValidActionType()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00601360.json)
}

// ==== BACKFILL 0x00602AE0  Dialog::IsSpecialTemplate  cls=Dialog  sig=csp  renamed_refs=0  residual=- ====
BOOL Dialog::IsSpecialTemplate()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x602AE0)
}

// ==== BACKFILL 0x00603DB0  Diplomacy_Helper  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT Diplomacy_Helper(HWND hWnd, unsigned char a2)
{
  return SendMessageA(hWnd, 0x4E5u, 0, a2); /*0x603dc5*/
}

// ==== BACKFILL 0x00603DD0  globalHelper_003DD0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT globalHelper_003DD0(HWND hWnd, unsigned char a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x603DD0)
}

// ==== BACKFILL 0x00603F00  UI_Assign  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t ** UI_Assign(wchar_t ** a1, HWND a2, LPARAM, LPARAM)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x603F00)
}

// ==== BACKFILL 0x00603F60  WOLobby_Setup  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t ** WOLobby_Setup(wchar_t ** a1, HWND a2, LPARAM)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x603F60)
}

// ==== BACKFILL 0x0060AA60  sub_60AA60  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool sub_60AA60(HWND hWnd, LPARAM)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x60AA60)
}

// ==== BACKFILL 0x0060AAA0  Dialog::EnumAndCleanup  cls=Dialog  sig=csp  renamed_refs=0  residual=- ====
BOOL INIClass::EnumAndCleanup()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0060AAA0.json)
}

// ==== BACKFILL 0x0060B350  UI_Get_60B350  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_60B350::UI_Get_60B350(HWND hWnd) {

  ObjectClass *v1; // edi
  HWND Parent; // esi
  char GameSpeed; // bl
  int v4; // ebp
  int v5; // ebx
  int v6; // ecx
  int v7; // eax
  struct tagRECT Rect; // [esp+14h] [ebp-20h] BYREF
  struct tagRECT v11; // [esp+24h] [ebp-10h] BYREF

  v1 = hWnd; /*0x60b357*/
  Parent = GetParent((HWND)hWnd); /*0x60b369*/
  GameSpeed = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60b370*/
  GetWindowRect(Parent, &Rect); /*0x60b37e*/
  GetWindowRect((HWND)v1, &v11); /*0x60b386*/
  if ( GameSpeed )
  {
    v5 = *(int16_t *)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[572] + 4); /*0x60b409*/
    v4 = *(int16_t *)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[572] + 2); /*0x60b40d*/
    v6 = Rect.right - Rect.left - 147; /*0x60b414*/
    v7 = *(unsigned int *)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1180] + 4) - v5; /*0x60b41a*/
  }
  else
  {
    v4 = *(int16_t *)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[788] + 2); /*0x60b3b5*/
    v5 = *(int16_t *)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[788] + 4); /*0x60b3b9*/
    v6 = Rect.right
       - ((Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2)
       - Rect.left
       - 156;
    v1 = hWnd; /*0x60b3e1*/
    v7 = *(unsigned int *)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1140] + 4) /*0x60b3e5*/
       + *(unsigned int *)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1140] + 12)
       * ((*(unsigned int *)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1144] + 4)
         - *(unsigned int *)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1140] + 4))
        / *(unsigned int *)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1140] + 12)
        - 1);
  }
  return MoveWindow((HWND)v1, v6, v7, v4, v5, 0); /*0x60b3f4*/

}

// ==== BACKFILL 0x0060B550  UI_Get_60B550  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_60B550::UI_Get_60B550(HWND hWnd) {

  HWND Parent; // edi
  char GameSpeed; // bl
  int v4; // edi
  int v5; // edx
  struct tagRECT Rect; // [esp+10h] [ebp-20h] BYREF
  struct tagRECT v8; // [esp+20h] [ebp-10h] BYREF

  Parent = GetParent((HWND)hWnd); /*0x60b565*/
  GameSpeed = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60b56c*/
  GetClientRect(Parent, &Rect); /*0x60b574*/
  GetWindowRect((HWND)hWnd, &v8); /*0x60b580*/
  v4 = 0; /*0x60b58a*/
  if ( !GameSpeed )
    v4 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
  v5 = 0; /*0x60b5ba*/
  if ( !GameSpeed )
    v5 = (Rect.bottom - Rect.top - 600) / 2 < 0 ? 0 : (Rect.bottom - Rect.top - 600) / 2;
  return MoveWindow( /*0x60b5fe*/
           (HWND)hWnd,
           v4 + Rect.left + 10,
           Rect.bottom - (v8.bottom - v8.top) - v5 - 1,
           v8.right - v8.left,
           v8.bottom - v8.top,
           0);

}

// ==== BACKFILL 0x0060B740  sub_60B740  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOL E4Recv_60B740::sub_60B740(HWND hWnd)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x60B740)
}

// ==== BACKFILL 0x0060B7A0  UI_Get_60B7A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_60B7A0::UI_Get_60B7A0(HWND hWnd) {

  HWND Parent; // edi
  char result; // al
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // esi
  struct tagRECT v11; // [esp+8h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  Parent = GetParent((HWND)hWnd); /*0x60b7b3*/
  result = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60b7b5*/
  if ( result )
  {
    GetWindowRect((HWND)hWnd, &Rect); /*0x60b7cf*/
    GetWindowRect(Parent, &v11); /*0x60b7d7*/
    v4 = v11.right - v11.left; /*0x60b7e7*/
    v5 = 0; /*0x60b7e9*/
    if ( v11.right - v11.left <= 800 )
    {
      if ( v11.right - v11.left < 800 ) /*0x60b802*/
        v5 = (v4 - 800) / 2; /*0x60b80b*/
    }
    else
    {
      v5 = (v4 - 800) / 2 < 0 ? 0 : (v4 - 800) / 2;
    }
    v6 = v11.bottom - v11.top; /*0x60b81c*/
    v7 = 0; /*0x60b81e*/
    if ( v11.bottom - v11.top <= 600 ) /*0x60b822*/
    {
      if ( v11.bottom - v11.top < 600 ) /*0x60b833*/
        v7 = (v6 - 600) / 2; /*0x60b83c*/
    }
    else
    {
      v8 = (v6 - 600) / 2; /*0x60b829*/
      LOBYTE(v7) = v8 < 0; /*0x60b82b*/
      v7 = v8 & (v7 - 1); /*0x60b82f*/
    }
    v9 = Rect.left + v5; /*0x60b84a*/
    v10 = Rect.top + v7; /*0x60b84d*/
    if ( v9 < 0 ) /*0x60b85b*/
      v9 = 0; /*0x60b85d*/
    if ( v10 < 0 ) /*0x60b861*/
      v10 = 0; /*0x60b863*/
    return MoveWindow((HWND)hWnd, v9, v10, Rect.right - Rect.left, Rect.bottom - Rect.top, 0); /*0x60b86c*/
  }
  return result; /*0x60b873*/

}

// ==== BACKFILL 0x0060C7D0  UI_Helper_60C7D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_60C7D0::UI_Helper_60C7D0() {

  ObjectClass **v1; // eax
  unsigned int *v3; // ecx
  ObjectClass *v4; // eax
  ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60c7d6*/
  if ( !*(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x60c7dc*/
    return 0; /*0x60c7dc*/
  v1 = *(ObjectClass ***)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x60c7fd*/
                        + 4
                        * ((*(int (**)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v5)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x60c802*/
    return 0; /*0x60c802*/
  while ( *v1 != v5 ) /*0x60c80a*/
  {
    v1 = (ObjectClass **)v1[129]; /*0x60c80c*/
    if ( !v1 ) /*0x60c814*/
      return 0; /*0x60c819*/
  }
  v3 = v1 + 1; /*0x60c81e*/
  if ( v1 == (ObjectClass **)-4 ) /*0x60c823*/
    return 0; /*0x60c825*/
  v4 = v1[28]; /*0x60c829*/
  if ( v4 != (ObjectClass *)269 /*0x60c8b3*/
    && v4 != (ObjectClass *)217
    && v4 != (ObjectClass *)240
    && v4 != (ObjectClass *)206
    && v4 != (ObjectClass *)288
    && v4 != (ObjectClass *)289
    && v4 != (ObjectClass *)277
    && v4 != (ObjectClass *)211
    && v4 != (ObjectClass *)207
    && v4 != (ObjectClass *)287
    && v4 != (ObjectClass *)195
    && v4 != (ObjectClass *)283
    && v4 != (ObjectClass *)225
    && v4 != (ObjectClass *)286
    && v4 != (ObjectClass *)196
    && v4 != (ObjectClass *)304
    && v4 != (ObjectClass *)208
    && v4 != (ObjectClass *)252
    && v4 != (ObjectClass *)294 )
  {
    return 0; /*0x60c8b5*/
  }
  v3[44] = 2; /*0x60c8bb*/
  return 1; /*0x60c819*/

}

// ==== BACKFILL 0x0060C930  UI_Helper_60C930  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_60C930::UI_Helper_60C930() {

  ObjectClass **v1; // eax
  unsigned int *v3; // ecx
  ObjectClass *v4; // eax
  ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60c936*/
  if ( !*(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x60c93c*/
    return 0; /*0x60c93c*/
  v1 = *(ObjectClass ***)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x60c95d*/
                        + 4
                        * ((*(int (**)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v5)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x60c962*/
    return 0; /*0x60c962*/
  while ( *v1 != v5 ) /*0x60c96a*/
  {
    v1 = (ObjectClass **)v1[129]; /*0x60c96c*/
    if ( !v1 ) /*0x60c974*/
      return 0; /*0x60c979*/
  }
  v3 = v1 + 1; /*0x60c97e*/
  if ( v1 == (ObjectClass **)-4 ) /*0x60c983*/
    return 0; /*0x60c985*/
  v4 = v1[28]; /*0x60c989*/
  if ( v4 == (ObjectClass *)188 /*0x60c9b4*/
    || v4 == (ObjectClass *)189
    || v4 == (ObjectClass *)258
    || v4 == (ObjectClass *)194
    || v4 == (ObjectClass *)201
    || v4 == (ObjectClass *)3014 )
  {
    *((unsigned char *)v3 + 214) = 1; /*0x60c9c5*/
    return 1; /*0x60c9c0*/
  }
  else
  {
    *((unsigned char *)v3 + 214) = 0; /*0x60c9b8*/
    return 0; /*0x60c9b6*/
  }

}

// ==== BACKFILL 0x0060CAF0  UI_Helper_60CAF0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_60CAF0::UI_Helper_60CAF0() {

  ObjectClass **v1; // eax
  unsigned int *v3; // ecx
  ObjectClass *v4; // eax
  ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60caf6*/
  if ( !*(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x60cafc*/
    return 0; /*0x60cafc*/
  v1 = *(ObjectClass ***)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x60cb1d*/
                        + 4
                        * ((*(int (**)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v5)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x60cb22*/
    return 0; /*0x60cb22*/
  while ( *v1 != v5 ) /*0x60cb2a*/
  {
    v1 = (ObjectClass **)v1[129]; /*0x60cb2c*/
    if ( !v1 ) /*0x60cb34*/
      return 0; /*0x60cb39*/
  }
  v3 = v1 + 1; /*0x60cb3e*/
  if ( v1 == (ObjectClass **)-4 ) /*0x60cb43*/
    return 0; /*0x60cb45*/
  v4 = v1[28]; /*0x60cb49*/
  if ( v4 == (ObjectClass *)188 /*0x60cb87*/
    || v4 == (ObjectClass *)189
    || v4 == (ObjectClass *)258
    || v4 == (ObjectClass *)194
    || v4 == (ObjectClass *)201
    || v4 == (ObjectClass *)3014
    || v4 == (ObjectClass *)261
    || v4 == (ObjectClass *)107
    || v4 == (ObjectClass *)275 )
  {
    *((unsigned char *)v3 + 213) = 1; /*0x60cb98*/
    return 1; /*0x60cb93*/
  }
  else
  {
    *((unsigned char *)v3 + 213) = 0; /*0x60cb8b*/
    return 0; /*0x60cb89*/
  }

}

// ==== BACKFILL 0x0060CBA0  CampaignScore::LookupDialogHash  cls=CampaignScore  sig=csp  renamed_refs=0  residual=- ====
int CampaignScore::LookupDialogHash() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x60CBA0.json */
}

// ==== BACKFILL 0x0060CC00  CampaignScore::FindDialogTemplate  cls=CampaignScore  sig=csp  renamed_refs=0  residual=- ====
int CampaignScore::FindDialogTemplate() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x60CC00.json */
}

// ==== BACKFILL 0x0060CCC0  UI_Helper_60CCC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_60CCC0::UI_Helper_60CCC0() {

  ObjectClass **v1; // eax
  unsigned int *v3; // ecx
  ObjectClass *v4; // eax
  ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60ccc6*/
  if ( !*(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x60cccc*/
    return 0; /*0x60cccc*/
  v1 = *(ObjectClass ***)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x60cced*/
                        + 4
                        * ((*(int (**)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v5)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x60ccf2*/
    return 0; /*0x60ccf2*/
  while ( *v1 != v5 ) /*0x60ccfa*/
  {
    v1 = (ObjectClass **)v1[129]; /*0x60ccfc*/
    if ( !v1 ) /*0x60cd04*/
      return 0; /*0x60cd09*/
  }
  v3 = v1 + 1; /*0x60cd0e*/
  if ( v1 == (ObjectClass **)-4 ) /*0x60cd13*/
    return 0; /*0x60cd15*/
  v4 = v1[28]; /*0x60cd19*/
  if ( v4 == (ObjectClass *)259 || v4 == (ObjectClass *)3015 ) /*0x60cd28*/
  {
    *((unsigned char *)v3 + 215) = 1; /*0x60cd39*/
    return 1; /*0x60cd34*/
  }
  else
  {
    *((unsigned char *)v3 + 215) = 0; /*0x60cd2c*/
    return 0; /*0x60cd2a*/
  }

}

// ==== BACKFILL 0x0060CDB0  UI_Helper_60CDB0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_60CDB0::UI_Helper_60CDB0() {

  ObjectClass **v1; // eax
  unsigned int *v3; // ecx
  ObjectClass *v4; // eax
  ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60cdb6*/
  if ( !*(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x60cdbc*/
    return 0; /*0x60cdbc*/
  v1 = *(ObjectClass ***)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x60cddd*/
                        + 4
                        * ((*(int (**)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v5)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x60cde2*/
    return 0; /*0x60cde2*/
  while ( *v1 != v5 ) /*0x60cdea*/
  {
    v1 = (ObjectClass **)v1[129]; /*0x60cdec*/
    if ( !v1 ) /*0x60cdf4*/
      return 0; /*0x60cdf9*/
  }
  v3 = v1 + 1; /*0x60cdfe*/
  if ( v1 == (ObjectClass **)-4 ) /*0x60ce03*/
    return 0; /*0x60ce05*/
  v4 = v1[28]; /*0x60ce09*/
  if ( v4 == (ObjectClass *)264 || v4 == (ObjectClass *)3014 ) /*0x60ce18*/
  {
    *((unsigned char *)v3 + 216) = 1; /*0x60ce29*/
    return 1; /*0x60ce24*/
  }
  else
  {
    *((unsigned char *)v3 + 216) = 0; /*0x60ce1c*/
    return 0; /*0x60ce1a*/
  }

}

// ==== BACKFILL 0x0060D380  Campaign::Screen  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG Campaign::Screen(char a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0060D380.json)
}

// ==== BACKFILL 0x0060D450  DialogClass::RegisterWinClasses  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
ATOM DialogClass::RegisterWinClasses()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x60D450)
}

// ==== BACKFILL 0x0060D520  sub_60D520  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT sub_60D520(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x60D520)
}

// ==== BACKFILL 0x0060F320  Dialog::SubclassEditControl  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL INIClass::SubclassEditControl(HWND hWnd, LPARAM)
{
    (void)hWnd; (void)LPARAM; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0060F320.json)
}
