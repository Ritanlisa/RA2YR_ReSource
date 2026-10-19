// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00630090  ParticleSystemClass::g_var_1d5e6b  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleSystemClass__vt_06_(int * a1, int * a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00630090.json)
}

// ==== BACKFILL 0x00630100  ParticleSystemClass::PowerDrainUpdate  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleSystemClass::PowerDrainUpdate(void* a1) {
  int i; // edi
  int v4; // eax
  int SpotlightRadius; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // [esp-4h] [ebp-10h]

  HouseClass::ProcessPower((ObjectClass *)this); /*0x63010a*/
  for ( i = 0; i < (int)this->Owner; ++i ) /*0x630119*/
  {
    v10 = *(unsigned int *)(this->TargetCoords[0] + 4 * i) + 4; /*0x630127*/
    v4 = (*(int (**)(int))(*(unsigned int *)v10 + 16))(v10); /*0x63012a*/
    Power::TimerProcess(v4); /*0x630130*/
  }
  SpotlightRadius = this->SpotlightRadius; /*0x630140*/
  if ( SpotlightRadius ) /*0x630148*/
  {
    v6 = (*(int (**)(int))(*(unsigned int *)(SpotlightRadius + 4) + 16))(SpotlightRadius + 4); /*0x630151*/
    Power::TimerProcess(v6); /*0x630157*/
  }
  v7 = *(unsigned int *)&this->TimeToDie; /*0x63015c*/
  if ( v7 ) /*0x630164*/
  {
    v8 = (*(int (**)(int))(*(unsigned int *)(v7 + 4) + 16))(v7 + 4); /*0x63016d*/
    Power::TimerProcess(v8); /*0x630173*/
  }
  Checksummer::Add_float((Checksummer *)a1, *(unsigned int *)&this->__pad_E5[3]); /*0x630181*/
// 0x4a1d50
  return Power::TimerProcess(*(unsigned int *)&this->__pad_E5[7]); /*0x630194*/
}

// ==== BACKFILL 0x006301A0  C07EFB9C::ddtor  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
int C07EFB9C::ddtor(int a1, unsigned int *a2)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}

// ==== BACKFILL 0x006301E0  ParticleSystemClass::ProcessFrame  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
void ParticleSystemClass::ProcessFrame() {
  this->__pad_E5[19] = 1; /*0x6301e0*/
}

// ==== BACKFILL 0x006301F0  ObjectClass::SetMember59  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::SetMember59(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x6301f0.json */
}

// ==== BACKFILL 0x00630200  ParticleSystemClass::GetObjectSize  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleSystemClass::GetObjectSize()
{

  return 256; /*0x630205*/

}

// ==== BACKFILL 0x00630210  ParticleSystemClass::GetTypeIdentifier  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleSystemClass::GetTypeIdentifier()
{

  return 24; /*0x630215*/

}

// ==== BACKFILL 0x00630220  ParticleSystemClass::Stub  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleSystemClass::Stub() {
  return (int)this->Type; /*0x630226*/
}

// ==== BACKFILL 0x00630230  ParticleSystemClass::ddtor  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ParticleSystemClass::ddtor(int a2, int a3)
{

  ParticleSystemClass *v4; // [esp+0h] [ebp-4h]

  DestructParticleSystemClass(v4, (int)a3); /*0x630233*/
  if ( (a3 & 1) != 0 ) /*0x63023d*/
    __3_YAXPAX_Z((void *)(a3)); /*0x630240*/
  return (unsigned int *)(a3); /*0x63024a*/

}

// ==== BACKFILL 0x00630250  VectorClass::PushBackCopy  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
char VectorClass_flat::PushBackCopy(AbstractClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00630250.json)
}

// ==== BACKFILL 0x006302A0  ParticleSystemClass::resetSystemState  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
void* ParticleSystemClass::resetSystemState(int a1, int a2) {
  ((unsigned int *)this)[0] = 0; /*0x6302ab*/
  ((unsigned int *)this)[0] = (void *)a1; /*0x6302ae*/
  IDA_LOBYTE(((unsigned int *)this)[0]) = 1; /*0x6302b1*/
  IDA_BYTE1(((unsigned int *)this)[0]) = 0; /*0x6302b5*/
  this->ObjectClass = (void *)&VectorClass_ParticleClass___vftable; /*0x6302b8*/
  if ( a1 ) /*0x6302be*/
  {
    if ( a2 ) /*0x6302c6*/
    {
      ((unsigned int *)this)[0] = (void *)a2; /*0x6302c8*/
      return this; /*0x6302ce*/
    }
    ((unsigned int *)this)[0] = (void *)RA2_OPNEW(4 * a1); /*0x6302dd*/
    IDA_BYTE1(((unsigned int *)this)[0]) = 1; /*0x6302e0*/
  }
  return this; /*0x6302cd*/
}

// ==== BACKFILL 0x006316E0  UI_Pop_631500_Pop  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool Gap2Recv_6316E0::UI_Pop_631500_Pop(int a2) {

  HWND Dialog; // eax
  TechnoTypeClass *v5; // ecx
  int v6; // [esp+0h] [ebp-8h]

  if ( !a2 ) /*0x6316ea*/
    return 0; /*0x6316ed*/
  Dialog = (HWND)CreateDialog(0xEFu, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))NetworkSettingsDlgProc, 0); /*0x6316ff*/
  dwNewLong->AbstractClass = Dialog; /*0x631706*/
  if ( Dialog ) /*0x631708*/
  {
    ((unsigned int *)dwNewLong)[0] = a2; /*0x63170e*/
    ((unsigned int *)dwNewLong)[0] = (void *)-1; /*0x631711*/
    SetWindowLongA(Dialog, 8, (LONG)dwNewLong); /*0x631718*/
    UI_Pop_631500_Pop_Pop(dwNewLong); /*0x631720*/
    Dialog::Show((Dialog *)dwNewLong->AbstractClass); /*0x631727*/
    while ( (int)((unsigned int *)dwNewLong)[0] < 0 ) /*0x631731*/
    {
      if ( (uint8_t)Dialog::PumpMessages() == 1 ) /*0x63173a*/
        break; /*0x63173a*/
      LOBYTE(v5) = 0; /*0x63173c*/
      ScreenSaver::Process(v5, v6); /*0x63173e*/
    }
    Dialog::Destroy((Dialog *)dwNewLong->AbstractClass); /*0x63174c*/
  }
  return ((unsigned int *)dwNewLong)[0] == (void *)1; /*0x6316ec*/

}

// ==== BACKFILL 0x006319C0  Network_Set  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_6319C0::Network_Set() {

  HWND DlgItem; // eax
  wchar_t *StringCSF; // eax
  HWND v4; // eax
  HWND v5; // eax

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1509); /*0x6319d4*/
  if ( DlgItem ) /*0x6319de*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x15u, (LPARAM)((unsigned int *)this)[0] + 112); /*0x6319ef*/
    if ( wcslen((const wchar_t *)((unsigned int *)this)[0] + 56) ) /*0x6319f8*/
    {
      _wcsupr((wchar_t *)((unsigned int *)this)[0] + 56); /*0x631a0b*/
    }
    else
    {
      StringCSF = GetStringCSF((char *)&(unsigned int *)((char *)&stru_83665C + 3), 0, (const char *)&(unsigned int *)((char *)&stru_83665C + 6), 757); /*0x631a26*/
      wcscpy((wchar_t *)((unsigned int *)this)[0] + 56, StringCSF); /*0x631a33*/
    }
  }
  Debug::Log(); /*0x631a47*/
  v4 = GetDlgItem((HWND)this->AbstractClass, 1503); /*0x631a58*/
  if ( v4 ) /*0x631a5c*/
    SendMessageA(v4, 0x4B5u, 0x15u, (LPARAM)((unsigned int *)this)[0] + 154); /*0x631a70*/
  Debug::Log(); /*0x631a81*/
  v5 = GetDlgItem((HWND)this->AbstractClass, 1636); /*0x631a92*/
  if ( v5 && SendMessageA(v5, 0xF0u, 0, 0) == 1 ) /*0x631aa7*/
  {
    qmemcpy(((unsigned int *)this)[0], &((unsigned int *)this)[0], 0x70u); /*0x631ab9*/
  }
  else
  {
    *(unsigned int *)((unsigned int *)this)[0] = 0; /*0x631ac3*/
    *((unsigned int *)((unsigned int *)this)[0] + 1) = -1; /*0x631acc*/
    *((unsigned int *)((unsigned int *)this)[0] + 2) = -1; /*0x631ad2*/
    *((unsigned int *)((unsigned int *)this)[0] + 3) = 0; /*0x631ad8*/
    *((unsigned int *)((unsigned int *)this)[0] + 4) = -1; /*0x631ae2*/
    *((unsigned int *)((unsigned int *)this)[0] + 5) = 3; /*0x631ae8*/
    *((unsigned char *)((unsigned int *)this)[0] + 32) = 0; /*0x631af2*/
  }
  Debug::Log(); /*0x631b06*/

}

// ==== BACKFILL 0x00631B20  UI_Pop_631500_Pop_Pop  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_631B20::UI_Pop_631500_Pop_Pop() {

  HWND DlgItem; // eax
  HWND v3; // eax
  unsigned int *vtable2; // esi
  HWND v5; // eax
  int result; // eax
  char v7; // [esp+13h] [ebp-1h]

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1509); /*0x631b36*/
  SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)((unsigned int *)this)[0] + 112); /*0x631b4d*/
  v3 = GetDlgItem((HWND)this->AbstractClass, 1503); /*0x631b58*/
  SendMessageA(v3, 0x4B4u, 0, (LPARAM)((unsigned int *)this)[0] + 154); /*0x631b6c*/
  vtable2 = ((unsigned int *)this)[0]; /*0x631b6e*/
  if ( !*vtable2 || vtable2[1] == -1 || vtable2[2] == -1 ) /*0x631b83*/
  {
    v7 = 0; /*0x631ba3*/
    qmemcpy(&((unsigned int *)this)[0], &dword_A8DAC0, 0x70u); /*0x631ba8*/
  }
  else
  {
    qmemcpy(&((unsigned int *)this)[0], vtable2, 0x70u); /*0x631b8d*/
    v7 = 1; /*0x631b8f*/
  }
  v5 = GetDlgItem((HWND)this->AbstractClass, 1636); /*0x631bb9*/
  if ( v5 ) /*0x631bbd*/
    SendMessageA(v5, 0xF1u, v7 == 1, 0); /*0x631bd4*/
  result = (int)GetDlgItem((HWND)this->AbstractClass, 1635); /*0x631bdf*/
  if ( result ) /*0x631be3*/
    return SendMessageA((HWND)result, 0xF1u, v7 == 0, 0); /*0x631bf9*/
  return result; /*0x631bfb*/

}

// ==== BACKFILL 0x00631E30  TacticalClass::saveConfig  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
void* TacticalClass::saveConfig(int a2) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x631E30.json */
}

// ==== BACKFILL 0x00631F10  sub_631F10  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_631F10(int a2, int a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00631F10.json)
}

// ==== BACKFILL 0x00631F30  sub_631F30  cls=PixelFXClass  sig=csp  renamed_refs=0  residual=- ====
void sub_631F30()
{
      // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00631F30.json)
}

// ==== BACKFILL 0x00631F40  GameClass::saveGameState  cls=GameClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * PKStrawClass::saveGameState(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00631F40.json)
}

// ==== BACKFILL 0x00631FC0  sub_631FC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_631FC0(ObjectClass * aP1)
{
    (void)aP1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00631FC0.json)
}

// ==== BACKFILL 0x00631FE0  sub_631FE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_631FE0(unsigned char * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00631FE0.json)
}

// ==== BACKFILL 0x00632000  System_Init_632000  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_632000::System_Init_632000(char* a2) {

  int result; // eax

  DecodeLengthLCW((int)this, a2, 64); /*0x632009*/
  result = FindBitArrayHighestBit((int)this, 64) - 1; /*0x63201a*/
  this->reloadTimer[1] = result; /*0x63201b*/
  return result; /*0x632021*/

}

// ==== BACKFILL 0x00632030  System_Init_632030  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_632030::System_Init_632030(char* a2) {

  return DecodeLengthLCW((int)(unsigned int *)this + 256, a2, 64); /*0x632041*/

}

// ==== BACKFILL 0x006329C0  sub_6329C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void * sub_6329C0(void * a2, unsigned short a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006329C0.json)
}

// ==== BACKFILL 0x00632A20  sub_632A20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void * sub_632A20(void * a2, const void * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00632A20.json)
}

// ==== BACKFILL 0x00632A70  sub_632A70  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::sub_632A70(int a2, int a3, ObjectClass * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00632A70.json)
}

// ==== BACKFILL 0x00632AC0  sub_632AC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_632AC0(unsigned int * a2, unsigned short a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00632AC0.json)
}

// ==== BACKFILL 0x00632B20  sub_632B20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void * sub_632B20(void * a2, short a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00632B20.json)
}

// ==== BACKFILL 0x00632B70  Buffer::RotateBufferCrypto  cls=Buffer  sig=csp  renamed_refs=0  residual=- ====
int * Buffer::RotateBufferCrypto(int * a2, int a3)
{

  int v4[64]; // [esp+8h] [ebp-100h] BYREF

  qmemcpy(v4, this, sizeof(v4)); /*0x632b8c*/
  RotateBitBufferLeft(v4, a3, 64); /*0x632b92*/
  qmemcpy(a2, v4, 0x100u); /*0x632ba9*/
  return a2; /*0x632bab*/

}

// ==== BACKFILL 0x00632BE0  Palette::ConvertIndices  cls=Palette  sig=csp  renamed_refs=0  residual=- ====
unsigned char * Palette::ConvertIndices(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x632BE0)
}

// ==== BACKFILL 0x00632D60  sub_632D60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_632D60(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00632D60.json)
}

// ==== BACKFILL 0x00632FE0  GameClass::loadGameState  cls=PKPipe  sig=csp  renamed_refs=0  residual=- ====
int PKStrawClass::loadGameState(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00632FE0.json)
}

// ==== BACKFILL 0x00632FF0  GameClass::validateGameFile  cls=PKPipe  sig=csp  renamed_refs=0  residual=- ====
PKPipe * PKStrawClass::validateGameFile(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00632FF0.json)
}

// ==== BACKFILL 0x00633360  GameClass::parseGameOptions  cls=PKStrawClass  sig=csp  renamed_refs=0  residual=- ====
int PKStrawClass::parseGameOptions(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00633360.json)
}

// ==== BACKFILL 0x00633370  GameClass::applyGameSettings  cls=PKStrawClass  sig=csp  renamed_refs=0  residual=- ====
PKStrawClass * PKStrawClass::applyGameSettings(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633370.json)
}

// ==== BACKFILL 0x00633A20  sub_633A20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_633A20()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633A20.json)
}

// ==== BACKFILL 0x00633A40  sub_633A40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_633A40(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633A40.json)
}

// ==== BACKFILL 0x00633A60  sub_633A60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_633A60(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633A60.json)
}

// ==== BACKFILL 0x00633A70  sub_633A70  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_633A70(char a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633A70.json)
}

// ==== BACKFILL 0x00633A80  ReadPointerFromECX_2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_633A80::ReadPointerFromECX_2()
{

  return (gamemd::ObjectClass *)((int)this->AbstractClass);

}

// ==== BACKFILL 0x00633A90  sub_633A90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_633A90::sub_633A90()
{

  return (int)((unsigned int *)this)[0]; /*0x633a93*/

}

// ==== BACKFILL 0x00633AA0  sub_633AA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_633AA0::sub_633AA0()
{

  return (int)((unsigned int *)this)[0]; /*0x633aa3*/

}

// ==== BACKFILL 0x00633AC0  ExecuteActionPlanManager_Helper  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_633AC0::sub_633AC0()
{

  LOBYTE(this->AbstractClass) = 0; /*0x633ac2*/
  this->estimatedHealth = 0; /*0x633ac5*/
  *(unsigned int *)&this->isOnMap = -1; /*0x633acc*/
  return (unsigned int *)(this); /*0x633ad3*/

}

// ==== BACKFILL 0x00633AE0  sub_633AE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_633AE0::sub_633AE0(const void * a2)
{

  qmemcpy(this, a2, 0x6Fu); /*0x633aed*/

}

// ==== BACKFILL 0x00633B00  sub_633B00  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_633B00(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633B00.json)
}

// ==== BACKFILL 0x00633B10  sub_633B10  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_633B10(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633B10.json)
}

// ==== BACKFILL 0x00633B20  sub_633B20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_633B20()
{
      // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00633B20.json)
}

// ==== BACKFILL 0x00633B30  sub_633B30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_633B30()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633B30.json)
}

// ==== BACKFILL 0x00633B40  sub_633B40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_633B40()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633B40.json)
}

// ==== BACKFILL 0x00633B70  sub_633B70  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_633B70()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00633B70.json)
}

// ==== BACKFILL 0x00633B80  sub_633B80  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_633B80()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00633B80.json)
}

// ==== BACKFILL 0x00633B90  ScenarioClass::GetActionCoordsCopy  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
void* ScenarioClass::GetActionCoordsCopy(void* a1) {
  return nullptr;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00633C60  sub_633C60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_633C60(unsigned int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633C60.json)
}

// ==== BACKFILL 0x00633E50  sub_633E50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_633E50::sub_633E50()
{

  return ((unsigned int *)this)[0]; /*0x633e53*/

}

// ==== BACKFILL 0x00633E60  sub_633E60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_633E60::sub_633E60()
{

  return ((unsigned int *)this)[0]; /*0x633e63*/

}

// ==== BACKFILL 0x00633EA0  TeamClass::FindScriptAction  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TeamClass::FindScriptAction(unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633EA0.json)
}

// ==== BACKFILL 0x00633F20  TeamClass::GetNextScriptAction  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TeamClass::GetNextScriptAction(unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633F20.json)
}

// ==== BACKFILL 0x00634360  sub_634360  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOL sub_634360(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00634360.json)
}

// ==== BACKFILL 0x006343B0  sub_6343B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6343B0::sub_6343B0()
{

  return *(unsigned int *)(**(unsigned int **)((unsigned int *)this)[0] + 540); /*0x6343bd*/

}

// ==== BACKFILL 0x00634470  sub_634470  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOL sub_634470(int a2, int a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00634470.json)
}

// ==== BACKFILL 0x00634510  ComputeBounds  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ComputeBounds(AbstractClass * aP0, ObjectClass * aP1, int a3, int a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x634510)
}

// ==== BACKFILL 0x00634700  sub_634700  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_634700()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00634700.json)
}

// ==== BACKFILL 0x00634770  Render_Render_634770  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_634770::Render_Render_634770() {

  int uniqueId; // esi
  int v2; // eax
  int **i; // ecx

  uniqueId = ((unsigned int *)this)[0]; /*0x634772*/
  v2 = 0; /*0x634775*/
  if ( uniqueId <= 0 ) /*0x634779*/
    return 0; /*0x63478f*/
  for ( i = (int **)((unsigned int *)this)[0]; !*((unsigned char *)*i + 12); ++i ) /*0x63477b*/
  {
    if ( ++v2 >= uniqueId ) /*0x63478d*/
      return 0; /*0x63478d*/
  }
  return **i; /*0x63478f*/

}

// ==== BACKFILL 0x006347A0  sub_6347A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_6347A0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x006347A0.json)
}

// ==== BACKFILL 0x00634800  sub_634800  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * sub_634800()
{
     return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00634800.json)
}

// ==== BACKFILL 0x00634810  sub_634810  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_634810(unsigned int * a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00634810.json)
}

// ==== BACKFILL 0x00634850  sub_634850  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_634850(unsigned int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00634850.json)
}

// ==== BACKFILL 0x00634880  sub_634880  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_634880(unsigned int * a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00634880.json)
}

// ==== BACKFILL 0x006348F0  sub_6348F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_6348F0(unsigned int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006348F0.json)
}

// ==== BACKFILL 0x00634950  sub_634950  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_634950::sub_634950()
{

  LOBYTE(((unsigned int *)this)[0]) = 1; /*0x634950*/

}

// ==== BACKFILL 0x00634960  sub_634960  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_634960::sub_634960()
{

  return ((unsigned int *)this)[0]; /*0x634963*/

}

// ==== BACKFILL 0x00634970  Helper_634970  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_634970::Helper_634970() {

  int uniqueId; // ebx
  int i; // edi
  int result; // eax

  FactoryClass::ClearObjects((FactoryClass *)this); /*0x634975*/
  uniqueId = ((unsigned int *)this)[0]; /*0x63497a*/
  for ( i = 0; i < uniqueId; ++i ) /*0x634981*/
    ScriptAction::PlaceObject((int)this, *((unsigned int **)((unsigned int *)this)[0] + i)); /*0x63498c*/
  result = ScriptAction::FindSquadMember((ScriptAction *)this); /*0x634998*/
  LOBYTE(((unsigned int *)this)[0]) = 0; /*0x63499d*/
  return result; /*0x6349a1*/

}

// ==== BACKFILL 0x00635120  FactoryClass::ClearObjects  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
int FactoryClass::ClearObjects() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x635120.json */
}

// ==== BACKFILL 0x00635210  sub_635210  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_635210()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00635210.json)
}

// ==== BACKFILL 0x006352D0  sub_6352D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_6352D0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006352D0.json)
}

// ==== BACKFILL 0x00635310  sub_635310  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_635310()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00635310.json)
}

// ==== BACKFILL 0x00635350  ScenarioClass::RenderAction  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::RenderAction(int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 5 errs): wrong-universe gap2 body; truth func_0x635350.json */
}

// ==== BACKFILL 0x00635490  Render_Render_635490  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_635490::Render_Render_635490(int a2) {

  int *Viewport; // eax
  int v4; // edx
  void *vtable1; // eax
  unsigned int *ScenarioClassActionCoords; // eax
  int v8[2]; // [esp+4h] [ebp-44h] BYREF
  unsigned int v9[3]; // [esp+Ch] [ebp-3Ch] BYREF
  int v10[4]; // [esp+18h] [ebp-30h] BYREF
  unsigned int v11[4]; // [esp+28h] [ebp-20h] BYREF
  unsigned int v12[4]; // [esp+38h] [ebp-10h] BYREF

  Viewport = Display::GetViewport(v10); /*0x63549a*/
  v12[0] = *Viewport; /*0x6354a1*/
  v12[1] = Viewport[1]; /*0x6354a8*/
  v12[2] = Viewport[2]; /*0x6354af*/
  v4 = Viewport[3]; /*0x6354b3*/
  vtable1 = ((unsigned int *)this)[0]; /*0x6354b6*/
  v12[3] = v4; /*0x6354b9*/
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v10, *(unsigned char **)(*(unsigned int *)vtable1 + 4)); /*0x6354c6*/
  v9[0] = *ScenarioClassActionCoords; /*0x6354cd*/
  v9[1] = ScenarioClassActionCoords[1]; /*0x6354d4*/
  v9[2] = ScenarioClassActionCoords[2]; /*0x6354eb*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v9, v8); /*0x6354ef*/
  v8[0] += DSurface_ViewBounds.field_0; /*0x63550a*/
  v11[0] = v8[0] - 4 + 1; /*0x635520*/
  v11[1] = (char *)DSurface_ViewBounds.field_4 + v8[1] - 3; /*0x63552c*/
  v11[2] = 6; /*0x635541*/
  v11[3] = 6; /*0x635545*/
  return (*(int (**)(AudioStream *, unsigned int *, unsigned int *, int))(*(unsigned int *)DSurface_Composite->__pad_0 + 16))( /*0x635553*/
           DSurface_Composite,
           v12,
           v11,
           a2);

}

// ==== BACKFILL 0x006357D0  ShrinkRect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Rect_Shrink(unsigned int * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006357D0.json)
}

// ==== BACKFILL 0x00635DF0  sub_635DF0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_635DF0(unsigned int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00635DF0.json)
}

// ==== BACKFILL 0x00635E90  sub_635E90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int * sub_635E90(int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00635E90.json)
}

// ==== BACKFILL 0x00636110  ReadPointerFromECX2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * ReadPointerFromECX2()
{
     return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00636110.json)
}

// ==== BACKFILL 0x00636520  sub_636520  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_636520::sub_636520()
{

  LOBYTE(((unsigned int *)this)[0]) = 1; /*0x636520*/

}

// ==== BACKFILL 0x00636530  sub_636530  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_636530::sub_636530()
{

  LOBYTE(((unsigned int *)this)[0]) = 0; /*0x636530*/

}

// ==== BACKFILL 0x00636540  sub_636540  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_636540::sub_636540()
{

  return ((unsigned int *)this)[0]; /*0x636543*/

}

// ==== BACKFILL 0x00636D90  ?GetExecutionResourceId_irtualProcessor_details_Concurrency__QBEIXZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int E4Recv_636D90::_GetExecutionResourceId_irtualProcessor_details_Concurrency__QBEIXZ()
{

  return *((unsigned int *)this + 35); /*0x636d96*/

}

// ==== BACKFILL 0x00636DC0  FactoryClass::GetState  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
int FactoryClass::GetState(void *a1)
{

  return ((unsigned int *)this)[0]; /*0x636dc3*/

}

// ==== BACKFILL 0x00636EB0  ExecuteActionPlanManager_Helper_636EB0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_636EB0::sub_636EB0()
{

  int v1; // eax

  v1 = ((unsigned int *)this)[0] - 1; /*0x636eb3*/
  if ( v1 >= 0 ) /*0x636eb4*/
    return *((unsigned int *)((unsigned int *)this)[0] + v1); /*0x636ebc*/
  else
    return 0; /*0x636eb6*/

}

// ==== BACKFILL 0x00636FA0  sub_636FA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_636FA0(int a2, int a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00636FA0.json)
}

// ==== BACKFILL 0x00636FC0  ?GetMaskId_irtualProcessor_details_Concurrency__QBEIXZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int E4Recv_636FC0::_GetMaskId_irtualProcessor_details_Concurrency__QBEIXZ()
{

  return *((unsigned int *)this + 36); /*0x636fc6*/

}

// ==== BACKFILL 0x00636FD0  sub_636FD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_636FD0()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00636FD0.json)
}

// ==== BACKFILL 0x00637020  ?WasExplicitlyAttached_ExternalContextBase_details_Concurrency__QBE_NXZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool E4Recv_637020::_WasExplicitlyAttached_ExternalContextBase_details_Concurrency__QBE_NXZ()
{

  return *((unsigned char *)this + 152); /*0x637026*/

}

// ==== BACKFILL 0x00637030  sub_637030  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_637030()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00637030.json)
}

// ==== BACKFILL 0x00637060  TabClass::processTabInput  cls=TabClass  sig=csp  renamed_refs=0  residual=- ====
void TabClass::processTabInput() {
}

// ==== BACKFILL 0x00637550  FlushPlanningQueue  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void __usercall FlushPlanningQueue(CCINIClass * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x637550)
}

// ==== BACKFILL 0x006379C0  UI_Create_731A50_Create  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_6379C0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006379C0.json)
}

// ==== BACKFILL 0x00637A10  House_Play  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_637A10()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x637A10)
}

// ==== BACKFILL 0x00637AA0  FactoryClass::GetFlag  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char FactoryClass::GetFlag()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00637AA0.json)
}

// ==== BACKFILL 0x00637DB0  ScriptAction::SetField10  cls=ScriptAction  sig=csp  renamed_refs=0  residual=- ====
bool ScriptAction::SetField10()
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x637DB0)
}

// ==== BACKFILL 0x00637DD0  Object_Helper_637DD0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_637DD0(char a1, int a2, int a3, int a4, int a5, int a6, int a7, short a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00637DD0.json)
}

// ==== BACKFILL 0x00638C40  ExecuteActionPlanManager_Helper_638C40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool sub_638C40(int a2, char a3)
{
    (void)a2; (void)a3; return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00638C40.json)
}

// ==== BACKFILL 0x00638CE0  ScriptAction::ClassifyAction  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ScriptAction::ClassifyAction(int *a1, char *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00638CE0.json)
}

// ==== BACKFILL 0x00638F90  sub_638F90  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_638F90(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00638F90.json)
}

// ==== BACKFILL 0x0063A4A0  sub_63A4A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_63A4A0::sub_63A4A0()
{

  *(unsigned int *)&stru_AC4B30.__pad_EC[116] = this; /*0x63a4a0*/

}

// ==== BACKFILL 0x0063AAC0  UI_Handle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char UI_Handle(MouseClass * aP0, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063AAC0.json)
}

// ==== BACKFILL 0x0063AB00  UI_Handle_63AB00  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_63AB00(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063AB00.json)
}

// ==== BACKFILL 0x0063AD30  sub_63AD30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_63AD30::sub_63AD30()
{

  *(unsigned int *)&stru_AC4B30.__pad_EC[28] = this; /*0x63ad30*/

}

// ==== BACKFILL 0x0063CA80  Render_Render_63CA80  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_63CA80(unsigned int * a1, unsigned char * a2, int a3)
{
  int *ScenarioClassActionCoords; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // esi
  int *v8; // ecx
  unsigned int v10[3]; // [esp+8h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = (int *)(GetScenarioClassActionCoords(v10, a2)); /*0x63ca90*/
  v5 = *ScenarioClassActionCoords; /*0x63ca92*/
  v6 = ScenarioClassActionCoords[1]; /*0x63ca97*/
  v7 = ScenarioClassActionCoords[2]; /*0x63ca9a*/
  if ( *ScenarioClassActionCoords == -1 && v6 == -1 && v7 == -1 && a3 ) /*0x63caad*/
  {
    v8 = (int *)(*(int (**)(int, unsigned int *))(*(unsigned int *)a3 + 88))(a3, v10); /*0x63cab9*/
    v5 = *v8; /*0x63cabb*/
    v6 = v8[1]; /*0x63cabd*/
    v7 = v8[2]; /*0x63cac0*/
  }
  *a1 = v5; /*0x63cac5*/
  a1[1] = v6; /*0x63caca*/
  a1[2] = v7; /*0x63cacd*/
  return a1; /*0x63cac9*/
}

// ==== BACKFILL 0x0063D070  ColorLerpAndPack  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int ColorLerpAndPack(short * a1, unsigned char * a2, ObjectClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063D070.json)
}

// ==== BACKFILL 0x0063D210  ActionScenarioClassCoordToScreen  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int * ActionScenarioClassCoordToScreen(BuildingClass * aP0, const void * a1, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x63D210)
}

// ==== BACKFILL 0x0063D2D0  sub_63D2D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_63D2D0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063D2D0.json)
}

// ==== BACKFILL 0x0063D400  DSurface::DrawMarker  cls=DSurface  sig=csp  renamed_refs=0  residual=- ====
int DSurface::DrawMarker(AbstractClass * aP1, ObjectClass * aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063D400.json)
}

// ==== BACKFILL 0x0063D540  BuildingClass::updateAnimationState  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingClass::updateAnimationState()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063D540.json)
}

// ==== BACKFILL 0x0063D910  DrawTacticalFillScanline  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char DrawTacticalFillScanline(AbstractClass * aP0, BuildingClass * aP1, int a3, BuildingClass * aP3, int a5, int a6)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063D910.json)
}

// ==== BACKFILL 0x0063D960  globalHelper_03D960  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char globalHelper_03D960(Tactical * aP0, int a2, int a3, int a4, int a5, int a6)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063D960.json)
}

// ==== BACKFILL 0x0063D9C0  FactoryClass::RemoveFromArrays  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
void* FactoryClass::RemoveFromArrays(int a1) {
  return nullptr;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0063DB20  HandlePlanningModeClick_Handle  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOLsub_63DB20(unsigned int * a2)
{
    (void)a2;  // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0063DB20.json)
}

// ==== BACKFILL 0x0063DEC0  ExecuteActionPlanManager_Helper_63DEC0  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_63DEC0::ExecuteActionPlanManager_Helper_63DEC0(int a2, int a3) {

  this->Items = 0; /*0x63dec9*/
  this->Capacity = a2; /*0x63ded0*/
  this->IsInitialized = 1; /*0x63ded3*/
  this->IsAllocated = 0; /*0x63ded7*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x63dedb) */
  if ( a2 ) /*0x63dee1*/
  {
    if ( a3 ) /*0x63dee9*/
    {
      this->Items = (void *)a3; /*0x63deeb*/
    }
    else
    {
      this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x63defc*/
      this->IsAllocated = 1; /*0x63deff*/
    }
  }
  /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x63df03) */
  *((unsigned int *)this + 5) = 10; /*0x63df09*/
  *((unsigned int *)this + 4) = 0; /*0x63df10*/
  return &this->vtable0; /*0x63df19*/

}

// ==== BACKFILL 0x0063DFD0  FactoryClass::RemoveItemAt  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
int FactoryClass::RemoveItemAt(int a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0063E1D0  ExecuteActionPlanManager_Helper_63E1D0  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_63E1D0::ExecuteActionPlanManager_Helper_63E1D0(int a2, int a3) {

  this->Items = 0; /*0x63e1d9*/
  this->Capacity = a2; /*0x63e1e0*/
  this->IsInitialized = 1; /*0x63e1e3*/
  this->IsAllocated = 0; /*0x63e1e7*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x63e1eb) */
  if ( a2 ) /*0x63e1f1*/
  {
    if ( a3 ) /*0x63e1f9*/
    {
      this->Items = (void *)a3; /*0x63e1fb*/
    }
    else
    {
      this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x63e20c*/
      this->IsAllocated = 1; /*0x63e20f*/
    }
  }
  /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x63e213) */
  *((unsigned int *)this + 5) = 10; /*0x63e219*/
  *((unsigned int *)this + 4) = 0; /*0x63e220*/
  return &this->vtable0; /*0x63e229*/

}

// ==== BACKFILL 0x0063E5D0  Team_Destroy  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_63E5D0::Team_Destroy(int aP1) {

  int v3; // eax
  int uniqueId; // ecx
  int v5; // ecx

  v3 = (*((int (**)(ObjectClass *, int))this->vtable1 + 4))(this, aP1); /*0x63e5dc*/
  if ( v3 == -1 ) /*0x63e5e2*/
    return 0; /*0x63e5e2*/
  uniqueId = ((unsigned int *)this)[0]; /*0x63e5e4*/
  if ( v3 >= uniqueId ) /*0x63e5e9*/
    return 0; /*0x63e60b*/
  v5 = uniqueId - 1; /*0x63e5eb*/
  for ( ((unsigned int *)this)[0] = v5; v3 < ((unsigned int *)this)[0]; *((unsigned int *)((unsigned int *)this)[0] + v3 - 1) = *((unsigned int *)((unsigned int *)this)[0] + v3) ) /*0x63e5f1*/
    ++v3; /*0x63e5f6*/
  return 1; /*0x63e607*/

}

// ==== BACKFILL 0x0063E900  VectorClass::EraseAt  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int _::EraseAt(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063E900.json)
}

// ==== BACKFILL 0x0063F000  FactoryClass::RemoveItem  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
int FactoryClass::RemoveItem(int a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0063F6B0  RadarClass::Create  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
int RadarClass::Create() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 5 errs): wrong-universe gap2 body; truth func_0x63F6B0.json */
}

// ==== BACKFILL 0x0063F730  PowerClass::updateDrain  cls=PowerClass  sig=csp  renamed_refs=0  residual=- ====
void* PowerClass::updateDrain() {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 17 errs): wrong-universe gap2 body; truth func_0x63F730.json */
}

// ==== BACKFILL 0x0063F7C0  PowerClass::checkBlackout  cls=PowerClass  sig=csp  renamed_refs=0  residual=- ====
void PowerClass::checkBlackout() {
}

// ==== BACKFILL 0x0063F810  sub_63F810  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_63F810()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063F810.json)
}

// ==== BACKFILL 0x0063F8F0  sub_63F8F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
long long sub_63F8F0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063F8F0.json)
}

// ==== BACKFILL 0x0063FDC0  sub_63FDC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_63FDC0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063FDC0.json)
}

// ==== BACKFILL 0x0063FE30  sub_63FE30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_63FE30()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063FE30.json)
}
