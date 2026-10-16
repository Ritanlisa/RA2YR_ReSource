// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00550000  Game::loadCampaignData  cls=Game  sig=csp  renamed_refs=0  residual=- ====
int Coord::loadCampaignData(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00550000.json)
}

// ==== BACKFILL 0x00550240  Helper_550240  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_550240()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x550240)
}

// ==== BACKFILL 0x00551630  WebBrowser::OpenURL  cls=WebBrowser  sig=csp  renamed_refs=0  residual=- ====
bool WebBrowser::OpenURL(void *a1_1)
{

  HANDLE FileA; // esi
  HINSTANCE ExecutableA; // esi
  DWORD NumberOfBytesWritten; // [esp+Ch] [ebp-468h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+10h] [ebp-464h] BYREF
  struct _STARTUPINFOA StartupInfo; // [esp+20h] [ebp-454h] BYREF
  CHAR TempFileName[260]; // [esp+64h] [ebp-410h] BYREF
  CHAR CommandLine[260]; // [esp+168h] [ebp-30Ch] BYREF
  CHAR Buffer[260]; // [esp+26Ch] [ebp-208h] BYREF
  CHAR Result[260]; // [esp+370h] [ebp-104h] BYREF

  if ( !this ) /*0x55163d*/
    return 0; /*0x55163d*/
  if ( !strlen((const char *)(this)) ) /*0x55164a*/
    return 0; /*0x55164a*/
  GetWindowsDirectoryA(Buffer, 0x104u); /*0x551662*/
  GetTempFileNameA(Buffer,(LPCSTR)(PrefixString), 0, TempFileName); /*0x55167c*/
  strcpy(strrchr(TempFileName, 46), aHtml); /*0x5516b3*/
  FileA = CreateFileA(TempFileName, 0x40000000u, 0, 0, 2u, 0x80u, 0); /*0x5516d2*/
  if ( FileA == (HANDLE)-1 ) /*0x5516d7*/
    return 0; /*0x5516d7*/
  WriteFile(FileA, aTitleViewhtmlT, strlen(aTitleViewhtmlT), &NumberOfBytesWritten, 0); /*0x5516fa*/
  CloseHandle(FileA); /*0x551701*/
  ExecutableA = (HINSTANCE)(FindExecutableA(TempFileName, 0, Result)); /*0x551720*/
  DeleteFileA(TempFileName); /*0x551723*/
  if ( (int)ExecutableA <= 32 ) /*0x55172c*/
    return 0; /*0x551791*/
  sprintf(CommandLine, "[open] %s", this); /*0x55173c*/
  memset(&StartupInfo, 0, sizeof(StartupInfo)); /*0x55174f*/
  StartupInfo.cb = 68; /*0x551771*/
  return CreateProcessA(Result, CommandLine, 0, 0, 0, 0, 0, 0, &StartupInfo, &ProcessInformation); /*0x551784*/

}

// ==== BACKFILL 0x00551A30  ProcessAutoSave  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_551A30::ProcessAutoSave() {

  int v2; // ebx
  int result; // eax
  unsigned int *vtable1; // eax
  int v5; // esi
  int v6; // edi
  int v7; // [esp+8h] [ebp-4h]

  v2 = 0; /*0x551a35*/
  result = ((unsigned int *)this)[0] - 1; /*0x551a3a*/
  if ( result > 0 ) /*0x551a3d*/
  {
    do /*0x551a7d*/
    {
      vtable1 = ((unsigned int *)this)[0]; /*0x551a41*/
      v5 = vtable1[v2 + 1]; /*0x551a44*/
      v6 = vtable1[v2]; /*0x551a48*/
      v7 = (*(int (**)(int))(*(unsigned int *)v5 + 184))(v5); /*0x551a55*/
      if ( v7 < (*(int (**)(int))(*(unsigned int *)v6 + 184))(v6) ) /*0x551a67*/
      {
        *((unsigned int *)((unsigned int *)this)[0] + v2 + 1) = v6; /*0x551a6c*/
        *((unsigned int *)((unsigned int *)this)[0] + v2) = v5; /*0x551a73*/
      }
      ++v2; /*0x551a79*/
      result = ((unsigned int *)this)[0] - 1; /*0x551a7a*/
    }
    while ( v2 < result ); /*0x551a7d*/
  }
  return result; /*0x551a81*/

}

// ==== BACKFILL 0x00551B20  LayerClass::Save  cls=LayerClass  sig=csp  renamed_refs=0  residual=- ====
int LayerClass::Save(void* a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00554AA0  TacticalClass::UpdateScrollTarget  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::UpdateScrollTarget(int a1, int a2, int a3, int a4, int a5) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00554AF0  TacticalClass::ScrollView  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::ScrollView(int a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00555070  LightSourceClass::Stat  cls=LightSourceClass  sig=csp  renamed_refs=0  residual=- ====
int LightSourceClass::Stat(AbstractClass * aP1)
{

  return ((AbstractClass *)(AbstractClass *)this)->ProcessPower(); /*0x55507a*/

}

// ==== BACKFILL 0x00555080  LightSourceClass::ddtor  cls=LightSourceClass  sig=csp  renamed_refs=0  residual=- ====
int LightSourceClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x555086*/
    return -2147467261; /*0x555088*/
  *a2 = 1872513264; /*0x555096*/
  a2[1] = 298979847; /*0x55509e*/
  a2[2] = 1610642561; /*0x5550a7*/
  a2[3] = unk_7E98FC; /*0x5550b0*/
  return 0; /*0x55508d*/

}

// ==== BACKFILL 0x005550C0  LightSourceClass::Write  cls=LightSourceClass  sig=csp  renamed_refs=0  residual=- ====
int LightSourceClass::Write(AbstractClass * aP0, int aP1)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0,(gamemd::AbstractClass *)(aP1)); /*0x5550cb*/
  if ( result >= 0 ) /*0x5550d2*/
  {
    if ( aP0 ) /*0x5550d6*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x5550df*/
      /* X11: vtable install elided (implicit via LightSourceClass virtuals 0x5550e4) */
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_LightSourceClass); /*0x5550ea*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_LightSourceClass); /*0x5550f1*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_LightSourceClass); /*0x5550f8*/
    }
    return 0; /*0x5550ff*/
  }
  return result; /*0x555101*/

}

// ==== BACKFILL 0x00555110  LightSourceClass::Seek  cls=LightSourceClass  sig=csp  renamed_refs=0  residual=- ====
int LightSourceClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x55511f*/
  if ( result >= 0 ) /*0x555126*/
    return 0; /*0x555128*/
  return result; /*0x55512a*/

}

// ==== BACKFILL 0x00555130  LightSourceClass::StubReturn76  cls=LightSourceClass  sig=csp  renamed_refs=0  residual=- ====
int LightSourceClass::StubReturn76()
{

  return 76; /*0x555135*/

}

// ==== BACKFILL 0x00555140  LightSourceClass::StubReturn54  cls=LightSourceClass  sig=csp  renamed_refs=0  residual=- ====
int LightSourceClass::StubReturn54()
{

  return 54; /*0x555145*/

}

// ==== BACKFILL 0x00555150  LightSourceClass::CopyTo  cls=LightSourceClass  sig=csp  renamed_refs=0  residual=- ====
LightSourceClass * LightSourceClass::CopyTo(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x555150)
}

// ==== BACKFILL 0x00555AC0  QuantizeColorRGB  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int * Color_QuantizeRGB(int * a1, int * a2, int * a3)
{
  int v4; // eax
  int v5; // eax
  int *result; // eax
  int v7; // ecx

  v4 = *a1; /*0x555ac4*/
  if ( *a1 >= 1000 ) /*0x555acb*/
    v4 = 1000; /*0x555acd*/
  *a1 = v4; /*0x555ad2*/
  v5 = *a2; /*0x555ad4*/
  if ( *a2 >= 1000 ) /*0x555adb*/
    v5 = 1000; /*0x555add*/
  *a2 = v5; /*0x555ae2*/
  result = a3; /*0x555ae4*/
  v7 = *a3; /*0x555ae8*/
  if ( *a3 >= 1000 ) /*0x555af0*/
    v7 = 1000; /*0x555af2*/
  *a3 = v7; /*0x555af7*/
  *a1 &= (*a1 <= 0) - 1; /*0x555b05*/
  *a2 &= (*a2 <= 0) - 1; /*0x555b13*/
  *a3 &= (*a3 <= 0) - 1; /*0x555b21*/
  if ( dword_A8EB78 ) /*0x555b2c*/
  {
    if ( dword_A8EB78 == 1 ) /*0x555b2f*/
    {
      *a1 &= 0xFFFFFFC0; /*0x555b53*/
      *a2 &= 0xFFFFFFC0; /*0x555b5b*/
      *a3 &= 0xFFFFFFC0; /*0x555b63*/
    }
    else if ( dword_A8EB78 == 2 ) /*0x555b32*/
    {
      *a1 &= 0xFFFFFFE0; /*0x555b39*/
      *a2 &= 0xFFFFFFE0; /*0x555b41*/
      *a3 &= 0xFFFFFFE0; /*0x555b49*/
    }
  }
  else
  {
    *a1 &= 0xFFFFFF80; /*0x555b6d*/
    *a2 &= 0xFFFFFF80; /*0x555b74*/
    *a3 &= 0xFFFFFF80; /*0x555b7b*/
  }
  return result; /*0x555b40*/
}

// ==== BACKFILL 0x00556510  sub_556510  cls=LightConvertClass  sig=csp  renamed_refs=0  residual=- ====
int sub_556510()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00556510.json)
}

// ==== BACKFILL 0x00556520  sub_556520  cls=LightConvertClass  sig=csp  renamed_refs=0  residual=- ====
LightConvertClass * LightConvertClass::sub_556520(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00556520.json)
}

// ==== BACKFILL 0x00556620  ObjectClass::GetWidth  cls=LinkClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetWidth()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x556620)
}

// ==== BACKFILL 0x00556630  ObjectClass::GetHeight  cls=LinkClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetHeight() const {
    return *(int *)((char *)this + 8); /*0x556633 真值 [ecx+8]*/
}

// ==== BACKFILL 0x00556670  LinkedList_flat::FindNext  cls=LinkClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * LinkedList_flat::FindNext()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x556670)
}

// ==== BACKFILL 0x00556B30  TacticalClass::GetField  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::GetField() {

  int result; // eax

  result = (int)((unsigned int *)this)[0]; /*0x556b30*/
  if ( result ) /*0x556b37*/
  {
    *(unsigned int *)(result + 168) = 0; /*0x556b39*/
    ((unsigned int *)this)[0] = 0; /*0x556b3f*/
  }
  return result; /*0x556b42*/

}

// ==== BACKFILL 0x00556B50  ObjectClass::updateMissionState  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::updateMissionState(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00556B50.json)
}

// ==== BACKFILL 0x00556B70  Render_Render_556B70  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_556B70::Render_Render_556B70() {

  char *vtable1; // eax
  void **v2; // eax
  void *v3; // edx
  void *v4; // esi
  void *v5; // edi
  void **v6; // eax
  char *v7; // eax
  void **v8; // ebp
  int result; // eax
  int v10; // edx
  int *v11; // eax
  signed int v12; // edi

  vtable1 = (char *)((unsigned int *)this)[0]; /*0x556b70*/
  if ( vtable1 ) /*0x556b78*/
  {
    v2 = (void **)(vtable1 + 156); /*0x556b7a*/
    v3 = *v2; /*0x556b7f*/
    v4 = v2[1]; /*0x556b81*/
    v5 = v2[2]; /*0x556b84*/
    v6 = this + 4 * ((int)((unsigned int *)this)[0] + 1); /*0x556b8e*/
    if ( v3 != *v6 || v4 != v6[1] || v5 != v6[2] ) /*0x556b9c*/
    {
      v7 = (char *)((unsigned int *)this)[0] - 1; /*0x556ba1*/
      ((unsigned int *)this)[0] = v7; /*0x556ba2*/
      if ( (int)v7 < 0 ) /*0x556ba5*/
        ((unsigned int *)this)[0] = (void *)31; /*0x556ba7*/
      v8 = this + 4 * ((int)((unsigned int *)this)[0] + 1); /*0x556bb7*/
      v8[3] = (void *)255; /*0x556bb9*/
      *v8 = v3; /*0x556bc0*/
      v8[1] = v4; /*0x556bc3*/
      v8[2] = v5; /*0x556bc6*/
    }
  }
  result = (int)((unsigned int *)this)[0]; /*0x556bc9*/
  do /*0x556bf6*/
  {
    v10 = result + 1; /*0x556bcc*/
    v11 = &((unsigned int *)this)[0] + 4 * result; /*0x556bd7*/
    v12 = v11[3] - (unsigned int)((unsigned int *)this)[0]; /*0x556bdc*/
    v11[3] = v12; /*0x556bde*/
    if ( v12 < 0 ) /*0x556be1*/
      v11[3] = 0; /*0x556be3*/
    result = v10; /*0x556bea*/
    if ( v10 >= 32 ) /*0x556bef*/
      result = 0; /*0x556bf1*/
  }
  while ( (void *)result != ((unsigned int *)this)[0] ); /*0x556bf6*/
  return result; /*0x556bf8*/

}

// ==== BACKFILL 0x00556C00  Render_Render_556C00  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_556C00::Render_Render_556C00() {

  int v1; // ebp
  unsigned int *result; // eax
  int v3; // ebp
  void **v4; // edi
  void **i; // esi
  int v6; // ebx
  int v7; // eax
  char *v8; // edx
  int v10[2]; // [esp+14h] [ebp-10h] BYREF
  int v11[2]; // [esp+1Ch] [ebp-8h] BYREF

  v1 = (int)((unsigned int *)this)[0] + 1; /*0x556c09*/
  if ( v1 >= 32 ) /*0x556c14*/
    v1 = 0; /*0x556c16*/
  result = this + 4 * ((int)((unsigned int *)this)[0] + 1); /*0x556c21*/
  if ( *result != g_MissionQueueFrame.random[209] /*0x556c41*/
    || result[1] != g_MissionQueueFrame.random[210]
    || result[2] != g_MissionQueueFrame.random[211] )
  {
    v3 = v1 + 1; /*0x556c47*/
    v4 = this + 4 * ((int)((unsigned int *)this)[0] + 1); /*0x556c48*/
    result = (unsigned int *)result[3]; /*0x556c4c*/
    for ( i = this + 4 * v3; result; i = this + 4 * (unsigned int)v8 ) /*0x556c56*/
    {
      if ( *i == (void *)g_MissionQueueFrame.random[209] && i[1] == (void *)g_MissionQueueFrame.random[210] ) /*0x556c72*/
      {
        result = i[2]; /*0x556c7a*/
        if ( result == (unsigned int *)g_MissionQueueFrame.random[211] ) /*0x556c7f*/
          break; /*0x556c7f*/
      }
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, v4, v11); /*0x556c91*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, i, v10); /*0x556ca2*/
      v6 = -2 - ZCoordToScreenY((int)v4[2]); /*0x556cb7*/
      v7 = ZCoordToScreenY((int)i[2]); /*0x556cb9*/
      AudioStream::DrawWaveform( /*0x556ce5*/
        DSurface_Composite,
        &DSurface_ViewBounds.field_0,
        v11,
        v10,
        (uint8_t *)this,
        (int)v4[3],
        v6,
        -2 - v7);
      result = (unsigned int *)v3; /*0x556cea*/
      if ( v3 >= 32 ) /*0x556cef*/
        result = 0; /*0x556cf1*/
      if ( result == ((unsigned int *)this)[0] ) /*0x556cf6*/
        break; /*0x556cf6*/
      v3 = (int)result + 1; /*0x556cf8*/
      v4 = i; /*0x556cfb*/
      v8 = (char *)result + 1; /*0x556cfd*/
      result = i[3]; /*0x556cff*/
    }
  }
  return result; /*0x556d11*/

}

// ==== BACKFILL 0x00556D40  Render_Render_556D40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_556D40()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00556D40.json)
}

// ==== BACKFILL 0x00556DF0  Game_Destroy  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_556DF0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00556DF0.json)
}

// ==== BACKFILL 0x00557570  CheckListClass::RemoveItem  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
int CheckListClass::RemoveItem(int a1, int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x557570.json */
}

// ==== BACKFILL 0x00557800  ListClass::Destru_vt43  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
int ListClass::Destru_vt43(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x557800.json */
}

// ==== BACKFILL 0x00557A20  CheckListClass::SetItemState  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
int CheckListClass::SetItemState(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x557A20.json */
}

// ==== BACKFILL 0x00557A70  CheckListClass::OnKeyUp  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
int CheckListClass::OnKeyUp(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x557A70.json */
}

// ==== BACKFILL 0x00557B00  CheckListClass::GetItemCount  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
int CheckListClass::GetItemCount() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x557B00.json */
}

// ==== BACKFILL 0x00557BE0  GadgetClass::InitControls  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
int GadgetClass::InitControls() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x557BE0.json */
}

// ==== BACKFILL 0x00557CB0  CheckListClass::GetItemData  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
int CheckListClass::GetItemData() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 10 errs): wrong-universe gap2 body; truth func_0x557CB0.json */
}

// ==== BACKFILL 0x00557D10  CheckListClass::KillFocus  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
int CheckListClass::KillFocus(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x557D10.json */
}

// ==== BACKFILL 0x00557D20  ListClass::Destru_vt50  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
void* ListClass::Destru_vt50(int a1, int a2, int a3, int a4, int a5) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x557D20.json */
}

// ==== BACKFILL 0x00557E10  ListClass::ddtor  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
int CheckListClass::ddtor(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x557E10)
}

// ==== BACKFILL 0x00557E60  CheckListClass::HitTest  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
void* CheckListClass::HitTest(int a1) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 9 errs): wrong-universe gap2 body; truth func_0x557E60.json */
}

// ==== BACKFILL 0x00557EB0  CheckListClass::Draw  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
int CheckListClass::Draw(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 10 errs): wrong-universe gap2 body; truth func_0x557EB0.json */
}

// ==== BACKFILL 0x00557F00  CheckListClass::OnDblClick  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
int CheckListClass::OnDblClick() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 8 errs): wrong-universe gap2 body; truth func_0x557F00.json */
}

// ==== BACKFILL 0x00557FD0  CheckListClass::AddItem  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
void CheckListClass::AddItem() {
}

// ==== BACKFILL 0x00558060  ListClass::Destru_vt00  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
void* ListClass::Destru_vt00(int a2) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 16 errs): wrong-universe gap2 body; truth func_0x558060.json */
}

// ==== BACKFILL 0x005581A0  sub_5581A0  cls=GaugeClass  sig=csp  renamed_refs=0  residual=- ====
int sub_5581A0(GaugeClass * aP1)
{
    (void)aP1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005581A0.json)
}

// ==== BACKFILL 0x005584F0  sub_5584F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
size_t sub_5584F0(char * a1, void * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005584F0.json)
}

// ==== BACKFILL 0x005588E0  sub_5588E0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT sub_5588E0(HWND hDlg, int a2, HWND hWnd, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005588E0.json)
}

// ==== BACKFILL 0x00558A30  sub_558A30  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_558A30(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00558A30.json)
}

// ==== BACKFILL 0x00558B90  sub_558B90  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_558B90(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00558B90.json)
}

// ==== BACKFILL 0x00558CB0  sub_558CB0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_558CB0(HWND hWnd, unsigned int a2, unsigned int a3, int * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00558CB0.json)
}

// ==== BACKFILL 0x005595F0  sub_5595F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_5595F0(char * Buffer)
{
    (void)Buffer; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005595F0.json)
}

// ==== BACKFILL 0x00559D60  LoadOptions::AddRef  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
char LoadOptions::AddRef(LPCCH lpMultiByteStr)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x559D60)
}

// ==== BACKFILL 0x00559E40  LoadOptions::Release  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
char LoadOptions::Release(LPCCH lpMultiByteStr, wchar_t * Source)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x559E40)
}

// ==== BACKFILL 0x00559EB0  LoadOptions::ddtor  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
bool LoadOptions::ddtor(LPCSTR lpFileName)
{

  return DeleteFileA(lpFileName); /*0x559ec1*/

}

// ==== BACKFILL 0x00559ED0  LoadOptions::Read  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
char LoadOptions::Read(wchar_t * Destination, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x559ED0)
}

// ==== BACKFILL 0x0055A050  LoadOptions::Write  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
wchar_t * LoadOptions::Write()
{

  return GetStringCSF((char *)(aGuiLoadmission), 0,(const char *)(g_Str_File_LoadDlg_CPP), 1216); /*0x55a066*/

}

// ==== BACKFILL 0x0055A070  LoadOptions::Seek  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
wchar_t * LoadOptions::Seek(void *a1, void *a2, void *a3)
{

  return GetStringCSF((char *)(aGuiSavemission), 0,(const char *)(g_Str_File_LoadDlg_CPP), 1222); /*0x55a086*/

}

// ==== BACKFILL 0x0055A090  LoadOptions::Open  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
wchar_t * LoadOptions::Open(void *a1, void *a2, void *a3)
{

  return GetStringCSF((char *)(aGuiDeletemissi), 0,(const char *)(g_Str_File_LoadDlg_CPP), 1228); /*0x55a0a6*/

}

// ==== BACKFILL 0x0055A0B0  LoadOptions::Close  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
wchar_t * LoadOptions::Close(void *a1, void *a2)
{

  return GetStringCSF((char *)(aTxtGameWasSave), 0,(const char *)(g_Str_File_LoadDlg_CPP), 1234); /*0x55a0c6*/

}

// ==== BACKFILL 0x0055A0D0  LoadOptions::QueryInterface  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
LoadOptions * LoadOptions::QueryInterface(char a2, int a3, int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55A0D0)
}

// ==== BACKFILL 0x0055A710  StreamClass::ResetPosition  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int StreamClass::ResetPosition(LocomotionClass * aP0, int a2)
{

  aP0->Owner = (unsigned int)((FootClass *)a2);
  *(unsigned int *)&(&aP0->ILocomotion)[4] = a2; /*0x55a71b*/
  return 0; /*0x55a720*/

}

// ==== BACKFILL 0x0055A730  Turret::GetTransform  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
float * Turret::GetTransform(signed int a1, float * a2, unsigned int * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55A730)
}

// ==== BACKFILL 0x0055A8C0  ObjectClass::ComputeScreenYOffset  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ObjectClass::ComputeScreenYOffset(BuildingTypeClass * aP0, unsigned int * a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055A8C0.json)
}

// ==== BACKFILL 0x0055A8F0  StreamClass::SetDirty  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int StreamClass::SetDirty(unsigned char * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55A8F0)
}

// ==== BACKFILL 0x0055A910  StreamClass::ClearDirty  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int StreamClass::ClearDirty(unsigned char * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55A910)
}

// ==== BACKFILL 0x0055A930  StreamClass::GetDirty  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
char StreamClass::GetDirty(int a1)
{

  int result; // eax

  result = (int)a1; /*0x55a930*/
  LOBYTE(result) = a1->field_C; /*0x55a934*/
  return result; /*0x55a937*/

}

// ==== BACKFILL 0x0055A940  JumpjetLocomotionClass::MissionStub  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::MissionStub(int a1)
{

  return 0; /*0x55a942*/

}

// ==== BACKFILL 0x0055A950  COM::AddRef  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
LONG COM::AddRef(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55A950)
}

// ==== BACKFILL 0x0055A970  COM::ReleaseRef  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
LONG COM::ReleaseRef(volatile LONG * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55A970)
}

// ==== BACKFILL 0x0055AA60  LoadIPersistStream  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int IPersistStream_Load(int * a1, int * a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055AA60.json)
}

// ==== BACKFILL 0x0055AB40  COMObject::GetStringValue  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int COMObject::GetStringValue(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55AB40)
}

// ==== BACKFILL 0x0055AB70  JumpjetLocomotionClass::MissionStub2  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::MissionStub2(int a1, int a2)
{

  return 0; /*0x55ab72*/

}

// ==== BACKFILL 0x0055AB80  JumpjetLocomotionClass::MissionStub3  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::MissionStub3(int a1, int a2)
{

  return 0; /*0x55ab82*/

}

// ==== BACKFILL 0x0055AB90  JumpjetLocomotionClass::Stub10  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub10(int a1)
{

  ; /*0x55ab90*/

}

// ==== BACKFILL 0x0055ABA0  JumpjetLocomotionClass::StubReturnFalse  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnFalse(int a1)
{

  return 0; /*0x55aba2*/

}

// ==== BACKFILL 0x0055ABB0  JumpjetLocomotionClass::CheckState  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::CheckState(TunnelLocomotionClass * aP0)
{

  return 2; /*0x55abb5*/

}

// ==== BACKFILL 0x0055ABC0  JumpjetLocomotionClass::CheckState2  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::CheckState2(int a1, int a2)
{

  return 0; /*0x55abc2*/

}

// ==== BACKFILL 0x0055ABD0  COMObject::ReturnZeroPos  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * COMObject::ReturnZeroPos(int a1, unsigned int * a2)
{

  *a2 = 0; /*0x55abd8*/
  a2[1] = 0; /*0x55abda*/
  return a2; /*0x55abdd*/

}

// ==== BACKFILL 0x0055ABE0  JumpjetLocomotionClass::MissionStub4  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::MissionStub4(int a1)
{

  return 1; /*0x55abe2*/

}

// ==== BACKFILL 0x0055ABF0  JumpjetLocomotionClass::MissionStub5  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::MissionStub5(int a1, int a2)
{

  return 0; /*0x55abf2*/

}

// ==== BACKFILL 0x0055AC00  JumpjetLocomotionClass::Stub11  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub11(int a1, int a2, int a3, int a4)
{

  ; /*0x55ac00*/

}

// ==== BACKFILL 0x0055AC10  JumpjetLocomotionClass::Stub12  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub12(int a1, int a2, int a3, int a4, int a5)
{

  ; /*0x55ac10*/

}

// ==== BACKFILL 0x0055AC20  JumpjetLocomotionClass::Stub13  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub13(int a1)
{

  ; /*0x55ac20*/

}

// ==== BACKFILL 0x0055AC30  JumpjetLocomotionClass::Stub14  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub14(int a1, int a2)
{

  ; /*0x55ac30*/

}

// ==== BACKFILL 0x0055AC40  nullsub_164  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_164(int a1)
{
  ; /*0x55ac40*/
}

// ==== BACKFILL 0x0055AC50  JumpjetLocomotionClass::Stub15  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub15(int a1, int a2, int a3, int a4)
{

  ; /*0x55ac50*/

}

// ==== BACKFILL 0x0055AC60  JumpjetLocomotionClass::StubReturnTrue_3  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::StubReturnTrue_3(int a1)
{

  return 1; /*0x55ac62*/

}

// ==== BACKFILL 0x0055AC70  JumpjetLocomotionClass::GetGlobalCoordinate  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetGlobalCoordinate(int a1, unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055AC70.json)
}

// ==== BACKFILL 0x0055ACA0  COMObject::GetCoord3D  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * COMObject::GetCoord3D(int a1, unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55ACA0)
}

// ==== BACKFILL 0x0055ACD0  JumpjetLocomotionClass::StubReturnZero_11  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::StubReturnZero_11(int a1)
{

  return 0; /*0x55acd2*/

}

// ==== BACKFILL 0x0055ACE0  JumpjetLocomotionClass::Stub16  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub16(int a1, int a2)
{

  ; /*0x55ace0*/

}

// ==== BACKFILL 0x0055ACF0  JumpjetLocomotionClass::MissionStub10  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::MissionStub10(int a1)
{

  return 0; /*0x55acf2*/

}

// ==== BACKFILL 0x0055AD00  JumpjetLocomotionClass::MissionStub11  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::MissionStub11(int a1)
{

  return 0; /*0x55ad02*/

}

// ==== BACKFILL 0x0055AD10  COMObject::GetSpecialValue  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int COMObject::GetSpecialValue(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55AD10)
}

// ==== BACKFILL 0x0055AF40  RadarClass::SetGlobal  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
void RadarClass::SetGlobal() {
}

// ==== BACKFILL 0x0055AF50  Map_Init  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_55AF50::Map_Init() {

  dword_829FF8 = (int)this; /*0x55af50*/

}

// ==== BACKFILL 0x0055B880  Array::RemoveItemByValue  cls=LogicClass  sig=csp  renamed_refs=0  residual=- ====
void Array::RemoveItemByValue(AbstractClass * aP0, int a2)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55B880)
}

// ==== BACKFILL 0x0055BAA0  ObjectClass::SetDeployState  cls=LogicClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectClass::SetDeployState(ObjectClass * aP0, char a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055BAA0.json)
}

// ==== BACKFILL 0x0055BB40  ScenarioClass::ProcessAmbientEffects  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
void* ScenarioClass::ProcessAmbientEffects(int a2, int a3) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x55BB40.json */
}

// ==== BACKFILL 0x0055BB90  WriteCompressionBlock  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int WriteCompressionBlock(Pipe * aP0, unsigned int aP1, CCINIClass * aP2, int *a3, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055BB90.json)
}

// ==== BACKFILL 0x0055F690  CheckNetworkSync  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_55F690::CheckNetworkSync(int a2, int a3) {

  this->AbstractClass = (void *)(a3 & 0xFFFFFF); /*0x55f69f*/
  LOBYTE(((unsigned int *)this)[0]) = HIBYTE(a3); /*0x55f6a5*/
  *(unsigned int *)a2 = this->AbstractClass; /*0x55f6ac*/
  *(unsigned char *)(a2 + 4) = ((unsigned int *)this)[0]; /*0x55f6b2*/
  return a2; /*0x55f6b1*/

}

// ==== BACKFILL 0x0055F980  sub_55F980  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_55F980(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055F980.json)
}
