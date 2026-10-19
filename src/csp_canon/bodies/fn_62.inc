// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00620720  DrawScrollArrowUI  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void DrawScrollArrowUI(int * a0, unsigned int * a1, ObjectClass * aP2, int a4, char a5)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00620720.json)
}

// ==== BACKFILL 0x00620F60  Surface_Render  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Surface_Render(ObjectClass * aP0, unsigned short * a1, int * yTop, unsigned char * a3, int aP1, int a6)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00620F60.json)
}

// ==== BACKFILL 0x00622800  Dialog::Show  cls=Dialog  sig=csp  renamed_refs=0  residual=- ====
HWND INIClass::Show()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00622800.json)
}

// ==== BACKFILL 0x00623120  Dialog::PumpMessages  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char INIClass::PumpMessages()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00623120.json)
}

// ==== BACKFILL 0x00623170  UI_Connect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool UI_Connect(HWND hWnd, LONG, LONG, void * a2, void * a3)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00623170.json)
}

// ==== BACKFILL 0x006232B0  sub_6232B0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_6232B0(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006232B0.json)
}

// ==== BACKFILL 0x00623310  Network_Start  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool Network_Start(HWND hWnd, LPARAM lParam)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00623310.json)
}

// ==== BACKFILL 0x006235B0  sub_6235B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_6235B0(wchar_t * Format)
{
    (void)Format;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006235B0.json)
}

// ==== BACKFILL 0x00623840  ListBox::Clear  cls=ListBox  sig=csp  renamed_refs=0  residual=- ====
int ListBox::Clear() {
    LRESULT v2; // eax
    WPARAM v3; // esi

    v2 = SendMessageA((HWND)this, 0x146u, 0, 0); /*0x623855*/
    v3 = v2 - 1; /*0x623859*/
    if ( v2 ) /*0x62385c*/
    {
      do /*0x62386e*/
        SendMessageA((HWND)this, 0x144u, v3, 0); /*0x623867*/
      while ( v3-- ); /*0x62386e*/
    }
    return 0; /*0x623870*/
}

// ==== BACKFILL 0x00623CD0  CD::CreateDialog  cls=CD  sig=csp  renamed_refs=0  residual=- ====
bool CD::CreateDialog() {
  return false;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00623DA0  sub_623DA0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_623DA0(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00623DA0.json)
}

// ==== BACKFILL 0x00623E00  Memory_Pop  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_623E00::Memory_Pop(HWND hWnd) {

  LRESULT v2; // eax
  WPARAM v3; // esi

  v2 = SendMessageA((HWND)hWnd, 0x18Bu, 0, 0); /*0x623e15*/
  v3 = v2 - 1; /*0x623e19*/
  if ( v2 ) /*0x623e1c*/
  {
    do /*0x623e2e*/
      SendMessageA((HWND)hWnd, 0x182u, v3, 0); /*0x623e27*/
    while ( v3-- ); /*0x623e2e*/
  }
  return 0; /*0x623e30*/

}

// ==== BACKFILL 0x00623EA0  GetEditControlText  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT GetEditControlText(HWND hWnd, void ** a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00623EA0.json)
}

// ==== BACKFILL 0x00623F00  GetListBoxItemText  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT GetListBoxItemText(ObjectClass * aP0, WPARAM wParam, void ** a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00623F00.json)
}

// ==== BACKFILL 0x00623F60  UI_Assign_623F60  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT UI_Assign_623F60(HWND hWnd, WPARAM wParam, void ** a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00623F60.json)
}

// ==== BACKFILL 0x00623FC0  OptionsDlgProcWOL_Assign  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT OptionsDlgProcWOL_Assign(ObjectClass * aP0, WPARAM wParam, void ** a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x623FC0)
}

// ==== BACKFILL 0x00624020  MainLobbyDlgProcWOL_Assign  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT MainLobbyDlgProcWOL_Assign(HWND hWnd, WPARAM wParam, void ** a3)
{
  LRESULT v5; // esi
  wchar_t *v6; // esi
  LRESULT v7; // edi

  v5 = SendMessageA(hWnd, 0x149u, wParam, 0); /*0x624039*/
  if ( v5 <= 0 ) /*0x62403d*/
    ((SafeDelete *)(a3))->Ptr(); /*0x624043*/
  v6 = (wchar_t *)RA2_OPNEW(2 * v5 + 4); /*0x624055*/
  v7 = SendMessageA(hWnd, 0x4C3u, wParam, (LPARAM)v6); /*0x624061*/
  ((WideString *)(a3))->Assign_Alt(v6); /*0x624068*/
  RA2_OPDEL(v6); /*0x62406e*/
  return v7; /*0x624078*/
}

// ==== BACKFILL 0x00624080  sub_624080  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_624080()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00624080.json)
}

// ==== BACKFILL 0x00624090  sub_624090  cls=DialogControl@OwnerDraw  sig=csp  renamed_refs=0  residual=- ====
void sub_624090()
{
      // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00624090.json)
}

// ==== BACKFILL 0x006241C0  ObjectClass::Release  cls=SimpleDialogControl@OwnerDraw  sig=csp  renamed_refs=0  residual=- ====
char _::Release()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006241C0.json)
}

// ==== BACKFILL 0x006241D0  ObjectClass::GetMember01  cls=SimpleDialogControl@OwnerDraw  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetMember01()
{

  return *((unsigned int *)this + 1); /*0x6241d3*/

}

// ==== BACKFILL 0x00624460  Options::ClearComboBoxes  cls=Options  sig=csp  renamed_refs=0  residual=- ====
void Options::ClearComboBoxes()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x624460)
}

// ==== BACKFILL 0x006244C0  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_0  cls=SimpleDialogControl_OwnerDraw  sig=csp  renamed_refs=0  residual=- ====
unsigned int * DynamicVector::Destructor_0(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006244C0.json)
}

// ==== BACKFILL 0x006247D0  Struct::WideStringCopy  cls=Struct  sig=csp  renamed_refs=0  residual=u32_10,u32_14,u32_C ====
void* Struct::WideStringCopy(int a1) {
  this->Struct_field_00 = *(int *)a1; /*0x6247e1*/
  WideString::AssignFromPtr((wchar_t **)this + 1, (const wchar_t **)(a1 + 4)); /*0x6247e3*/
  WideString::AssignFromPtr((wchar_t **)this + 2, (const wchar_t **)(a1 + 8)); /*0x6247ef*/
  this->u32_C = a1->q00C; /*0x6247f7*/
  this->u32_10 = a1->q010; /*0x6247fd*/
  this->u32_14 = a1->u32_14; /*0x624803*/
  return (wchar_t **)this; /*0x624808*/
}

// ==== BACKFILL 0x00624810  DynamicVector::GrowCapacity  cls=DynamicVector  sig=csp  renamed_refs=0  residual=DynamicVector_field_0x1 ====
char DynamicVector::GrowCapacity()
{

  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  const void *DynamicVector_field_0x8; // esi
  int v7; // [esp+4h] [ebp-4h]

  v2 = *(unsigned int *)this->__pad_0; /*0x624814*/
  if ( *(unsigned int *)this->__pad_0 < *(unsigned int *)&(&this->DynamicVector_field_0x1)[3] ) /*0x62481b*/
    return 0; /*0x62481d*/
  v4 = 2 * v2; /*0x624823*/
  if ( 2 * v2 < 10 ) /*0x62482b*/
    v4 = 10; /*0x62482d*/
  v5 = (void *)__2_YAPAXI_Z(24 * v4); /*0x62483f*/
  memset(v5, 0, 4 * ((unsigned int)(24 * v4) >> 2)); /*0x62484a*/
  v7 = (int)v5; /*0x624854*/
  DynamicVector_field_0x8 = (const void *)this->DynamicVector_field_0x8; /*0x62485a*/
  if ( DynamicVector_field_0x8 ) /*0x62485f*/
    qmemcpy(v5, DynamicVector_field_0x8, 24 * *(unsigned int *)this->__pad_0); /*0x624870*/
  __3_YAXPAX_Z((void *)this->DynamicVector_field_0x8); /*0x62487d*/
  *(unsigned int *)&(&this->DynamicVector_field_0x1)[3] = v4; /*0x624889*/
  this->DynamicVector_field_0x8 = v7; /*0x62488c*/
  return 1; /*0x62481f*/

}

// ==== BACKFILL 0x00625070  HashTable_flat::ComputeHash  cls=HashTable  sig=csp  renamed_refs=0  residual=- ====
int HashTable_flat::ComputeHash(int a2)
{

  return ((int (*)(int))*((char *)this + 6))(a2) & ((1 << *((char *)this + 3)) - 1); /*0x625084*/

}

// ==== BACKFILL 0x00625990  ComboBoxOwnerDraw::GrowBuffer  cls=ComboBoxOwnerDraw  sig=csp  renamed_refs=0  residual=- ====
int ComboBoxOwnerDraw::GrowBuffer() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x625990.json */
}

// ==== BACKFILL 0x00625AE0  LinkedList_flat::PushFront  cls=LinkedList  sig=csp  renamed_refs=0  residual=- ====
int LinkedList_flat::PushFront(int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x625AE0)
}

// ==== BACKFILL 0x00625C00  Event_Process_625C00  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_625C00::Event_Process_625C00(ObjectClass * aP1) {

  int i; // eax
  int v5; // ecx
  u_short *v6; // edi
  int v7; // ebx
  char *v8; // ebp
  char *v9; // ebp
  unsigned int v10; // edx
  char *v11; // edi
  u_short *v13; // [esp+14h] [ebp+4h]

  *aP1 = 4; /*0x625c0a*/
  for ( i = *((unsigned int *)this + 1); i; i = *(unsigned int *)(i + 12) ) /*0x625c15*/
  {
    v5 = *aP1 + 8; /*0x625c1b*/
    *aP1 = v5; /*0x625c1e*/
    *aP1 = *(uint16_t *)(i + 6) + v5 + (-(((uint8_t)*(unsigned short *)(i + 6) + (unsigned char)v5) & 3) & 3); /*0x625c32*/
  }
  v6 = (u_short *)__2_YAPAXI_Z(*aP1); /*0x625c49*/
  v13 = v6; /*0x625c4c*/
  *v6 = htons(*(unsigned short *)aP1); /*0x625c55*/
  v6[1] = htons(*((unsigned short *)this + 1)); /*0x625c65*/
  v7 = *((unsigned int *)this + 1); /*0x625c69*/
  v8 = (char *)(v6 + 2); /*0x625c6c*/
  if ( !v7 ) /*0x625c71*/
    return v6; /*0x625d0d*/
  do /*0x625cfc*/
  {
    sub_4CB8B0(v7); /*0x625c79*/
    *(unsigned int *)v8 = *(unsigned int *)v7; /*0x625c80*/
    *((unsigned int *)v8 + 1) = *(unsigned int *)(v7 + 4); /*0x625c86*/
    v9 = v8 + 8; /*0x625c8e*/
    qmemcpy(v9, *(const void **)(v7 + 8), ntohs(*(unsigned short *)(v7 + 6))); /*0x625ca9*/
    v8 = &v9[ntohs(*(unsigned short *)(v7 + 6))]; /*0x625cc6*/
    v10 = -(ntohs(*(unsigned short *)(v7 + 6)) & 3) & 3; /*0x625cd5*/
    if ( v10 ) /*0x625cd8*/
    {
      memset(v8, 0, 4 * (v10 >> 2)); /*0x625ce5*/
      v11 = &v8[4 * (v10 >> 2)]; /*0x625ce5*/
      v8 += v10; /*0x625cec*/
      memset(v11, 0, v10 & 3); /*0x625cee*/
    }
    File::Dispatch(v7); /*0x625cf2*/
    v7 = *(unsigned int *)(v7 + 12); /*0x625cf7*/
  }
  while ( v7 ); /*0x625cfc*/
  return v13; /*0x625d06*/

}

// ==== BACKFILL 0x00626020  sub_626020  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * sub_626020(int a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00626020.json)
}

// ==== BACKFILL 0x00626070  sub_626070  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void * sub_626070(const void * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00626070.json)
}

// ==== BACKFILL 0x006260A0  sub_6260A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool sub_6260A0(const void * a2)
{
    (void)a2; return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x006260A0.json)
}

// ==== BACKFILL 0x006260D0  Block::Copy  cls=Block  sig=csp  renamed_refs=0  residual=- ====
void * Block::Copy(const void * a2, void *a2_2)
{

  void *result; // eax

  result = this; /*0x6260d5*/
  if ( this != a2 ) /*0x6260d9*/
    qmemcpy(this, a2, 0x300u); /*0x6260e3*/
  return result; /*0x6260e6*/

}

// ==== BACKFILL 0x006260F0  sub_6260F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned char sub_6260F0(ObjectClass * aP1)
{
    (void)aP1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006260F0.json)
}

// ==== BACKFILL 0x00626120  Gap2Recv_6120::Render_Helper  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned char Gap2Recv_6120::Render_Helper(ObjectClass * aP1, int a3) {

  int i; // esi
  unsigned int result; // eax

  for ( i = 0; i < 256; ++i ) /*0x62612c*/
  {
    result = Color::Lerp((Color *)this, aP1, (uint8_t *)(a3 + 2 * (i % 256) + i % 256)); /*0x626149*/
    this = (ObjectClass *)((char *)this + 3); /*0x62614f*/
  }
  return result; /*0x62615a*/

}

// ==== BACKFILL 0x00626170  sub_626170  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned char sub_626170(ObjectClass * aP1, int a3)
{
    (void)aP1; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00626170.json)
}

// ==== BACKFILL 0x006261B0  sub_6261B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned char sub_6261B0(ObjectClass * aP1, int a3, int a4)
{
    (void)aP1; (void)a3; (void)a4; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006261B0.json)
}

// ==== BACKFILL 0x00626200  Palette::FindClosestColor  cls=Palette  sig=csp  renamed_refs=0  residual=- ====
int Palette::FindClosestColor(Palette *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x626200)
}

// ==== BACKFILL 0x00626250  sub_626250  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_626250(const char * a2, int a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00626250.json)
}

// ==== BACKFILL 0x00626290  sub_626290  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_626290()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00626290.json)
}

// ==== BACKFILL 0x006262F0  sub_6262F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_6262F0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006262F0.json)
}

// ==== BACKFILL 0x00626370  FileSystem::mountDrive  cls=FileSystem  sig=csp  renamed_refs=0  residual=- ====
void FileSystem::mountDrive() {
}

// ==== BACKFILL 0x00627170  FileSystem::findFile  cls=FileSystem  sig=csp  renamed_refs=0  residual=- ====
void* FileSystem::findFile() {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 8 errs): wrong-universe gap2 body; truth func_0x627170.json */
}

// ==== BACKFILL 0x006274F0  sub_6274F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_6274F0(ObjectClass * aP1)
{
    (void)aP1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006274F0.json)
}

// ==== BACKFILL 0x00628740  FileSystem::readFile  cls=FileSystem  sig=csp  renamed_refs=0  residual=- ====
int FileSystem::readFile() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x628740.json */
}

// ==== BACKFILL 0x00628B00  sub_628B00  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_628B00(int a2, unsigned char * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00628B00.json)
}

// ==== BACKFILL 0x00628ED0  FileSystem::writeFile  cls=FileSystem  sig=csp  renamed_refs=0  residual=- ====
void* FileSystem::writeFile(int a1, void* a2) {
  return nullptr;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x006293E0  AbstractClass::ProcessData  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
void AbstractClass::ProcessData() {
}

// ==== BACKFILL 0x006295B0  ParasiteClass::LoadParasite  cls=ParasiteClass  sig=csp  renamed_refs=0  residual=- ====
int ParasiteClass::LoadParasite(int * a0, AbstractClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6295B0)
}

// ==== BACKFILL 0x006296B0  ParasiteClass::SaveParasite  cls=ParasiteClass  sig=csp  renamed_refs=0  residual=- ====
int ParasiteClass::SaveParasite(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6296B0)
}

// ==== BACKFILL 0x006296D0  ParasiteClass::ddtor  cls=ParasiteClass  sig=csp  renamed_refs=0  residual=- ====
int ParasiteClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6296d6*/
    return -2147467261; /*0x6296d8*/
  *a2 = 486632321; /*0x6296e6*/
  a2[1] = 299086411; /*0x6296ee*/
  a2[2] = 268441278; /*0x6296f7*/
  a2[3] = unk_7E98AC; /*0x629700*/
  return 0; /*0x6296dd*/

}

// ==== BACKFILL 0x00629710  sub_629710  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_629710()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00629710.json)
}

// ==== BACKFILL 0x0062A8E0  ParasiteClass::CanInfect  cls=ParasiteClass  sig=csp  renamed_refs=0  residual=- ====
bool ParasiteClass::CanInfect(unsigned int *a2)
{

  int creationFrame; // ecx
  Cell *v4; // eax
  bool result; // al

  result = 0; /*0x62a977*/
  if ( a2 ) /*0x62a8ea*/
  {
    if ( !*((unsigned char *)a2 + 129) ) /*0x62a8f0*/
    {
      if ( *((unsigned char *)a2 + 144) ) /*0x62a8fa*/
      {
        if ( a2[27] ) /*0x62a904*/
        {
          if ( !a2[421] ) /*0x62a90b*/
          {
            if ( *(unsigned char *)((*(int (**)(unsigned int *))(*a2 + 132))(a2) + 3384) ) /*0x62a91f*/
            {
              if ( !a2[185] ) /*0x62a929*/
              {
                creationFrame = this->creationFrame; /*0x62a933*/
                if ( !creationFrame ) /*0x62a938*/
                  return 1; /*0x62a938*/
                if ( !*(unsigned char *)((*(int (**)(int))(*(unsigned int *)creationFrame + 132))(creationFrame) + 3278) ) /*0x62a942*/
                  return 1; /*0x62a942*/
                if ( !(*(int (**)(unsigned int *))(*a2 + 444))(a2) ) /*0x62a950*/
                  return 1; /*0x62a950*/
                v4 = (Cell *)(*(int (**)(unsigned int *))(*a2 + 444))(a2); /*0x62a95e*/
                if ( (uint8_t)((Cell*)v4)->IsValidHeight() ) /*0x62a966*/
                  return 1; /*0x62a8ea*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x62a96f*/

}

// ==== BACKFILL 0x0062AF50  ParasiteClass::StubReturn88  cls=ParasiteClass  sig=csp  renamed_refs=0  residual=- ====
int ParasiteClass::StubReturn88() const { return 88; }

// ==== BACKFILL 0x0062AF60  ParasiteClass::StubReturn67  cls=ParasiteClass  sig=csp  renamed_refs=0  residual=- ====
int ParasiteClass::StubReturn67() const { return 67; }

// ==== BACKFILL 0x0062B5E0  ParticleClass::Construct  cls=ParticleClass  sig=csp  renamed_refs=1  residual=- ====
int ParticleClass::Construct(int a1, void* a2, float a3, int a4) {
  float v6; // eax
  double v7; // st7
  int v8; // edx
  float *v9; // ebp
  int v10; // ecx
  double v11; // st7
  double v12; // st6
  unsigned char *v13; // eax
  int v14; // eax
  int v15; // eax
  int16_t v16; // ax
  double v17; // st7
  float v18; // eax
  float v19; // ecx
  float v20; // edx
  int v21; // edi
  double v22; // st7
  int v23; // eax
  int v24; // edx
  unsigned char *v25; // eax
  float v27; // [esp+Ch] [ebp-2Ch]
  int v28; // [esp+28h] [ebp-10h]
  float v29; // [esp+2Ch] [ebp-Ch]
  int v30; // [esp+2Ch] [ebp-Ch]
  float v31; // [esp+30h] [ebp-8h]
  float v32; // [esp+34h] [ebp-4h]
  float v33; // [esp+3Ch] [ebp+4h]

  ObjectClass::ctor((unsigned int *)this); /*0x62b5e9*/
  this->q0AC = a1; /*0x62b5f4*/
  this->q0B0 = 0; /*0x62b5fa*/
  this->q0B1 = 0; /*0x62b600*/
  this->q0B2 = 0; /*0x62b606*/
  this->q0B8 = 0; /*0x62b60c*/
  this->q0B4 = 0; /*0x62b612*/
  this->q0BC = 0; /*0x62b618*/
  a3 = a3; /*0x62b61e*/
  this->q0C0 = 0; /*0x62b622*/
  this->q0C4 = 0; /*0x62b628*/
  this->q0C8 = 0; /*0x62b62e*/
  this->q0CC = 0; /*0x62b634*/
  this->q0D0 = 0; /*0x62b63a*/
  this->q0D4 = -1082130432; /*0x62b640*/
  this->q0D8 = 0; /*0x62b64a*/
  this->q0DC = 0; /*0x62b650*/
  this->q0E0 = 0; /*0x62b656*/
  this->q0E4 = *(unsigned int *)(this->q0AC + 764); /*0x62b66e*/
  this->q0E8 = *(unsigned int *)IDA_LODWORD(a3); /*0x62b678*/
  this->q0EC = *(unsigned int *)(IDA_LODWORD(a3) + 4); /*0x62b67d*/
  this->q0F0 = *(unsigned int *)(IDA_LODWORD(a3) + 8); /*0x62b687*/
  this->q0F4 = *a2; /*0x62b694*/
  this->q0F8 = a2[1]; /*0x62b699*/
  this->q0FC = a2[2]; /*0x62b69f*/
  this->q100 = dword_AC49D8; /*0x62b6ae*/
  this->q104 = dword_AC49DC; /*0x62b6ba*/
  this->q108 = dword_AC49E0; /*0x62b6c3*/
  v7 = (double)(*(unsigned int *)(IDA_LODWORD(a3) + 8) - a2[2]); /*0x62b6da*/
  v8 = *(unsigned int *)(IDA_LODWORD(a3) + 4) - a2[1]; /*0x62b6e0*/
  v9 = (float *)(&this->q688); /*0x62b6f0*/
  a4 = a4; /*0x62b6fa*/
  this->q10C = (float)(*(unsigned int *)IDA_LODWORD(a3) - *a2); /*0x62b6fe*/
  this->ParticleSystem = (float)v8; /*0x62b701*/
  this->RemainingEC = v7; /*0x62b704*/
  v11 = (double)(int)a2[2]; /*0x62b707*/
  v12 = (double)(int)a2[1]; /*0x62b70a*/
  this->StateAIAdvance = (float)(int)*a2; /*0x62b70f*/
  this->q11C = v12; /*0x62b715*/
  this->q120 = v11; /*0x62b71b*/
  this->q124 = a4; /*0x62b721*/
  v13 = *(unsigned char **)(&this->u32_442); /*0x62b727*/
  IDA_LOBYTE(v8) = v13[779]; /*0x62b72d*/
  this->q12D = 0; /*0x62b733*/
  this->q12C = v8; /*0x62b739*/
  this->StartStateAI = v13[778]; /*0x62b745*/
  this->Translucency = v13[756]; /*0x62b754*/
  this->q130 = 0; /*0x62b75b*/
  this->q4C4 = 0; /*0x62b761*/
  /* X11: ptr_0 install elided (implicit via ParticleClass virtuals 0x62b767) */
  /* X11: ptr_0 install elided (implicit via ParticleClass virtuals 0x62b76d) */
  /* X11: ptr_0 install elided (implicit via ParticleClass virtuals 0x62b773) */
  /* X11: ptr_0 install elided (implicit via ParticleClass virtuals 0x62b77a) */
  this->ptr_8.GenerateUniqueID(); /*0x62b781*/
  if ( dword_A83DD8 < dword_A83DD0 /*0x62b7b9*/
    || (byte_A83DD5 || !dword_A83DD0)
    && dword_A83DDC > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_A83DC8 + 8))(
         &dword_A83DC8,
         dword_A83DDC + dword_A83DD0,
         0) )
  {
    v14 = dword_A83DD8++; /*0x62b7c6*/
    *((unsigned int *)dword_A83DCC + v14) = this; /*0x62b7d5*/
  }
  if ( *(unsigned int *)(this->q0AC + 788) == 1 ) /*0x62b7e5*/
    this->q0E4 = (double)(Random::State((unsigned int *)g_ScenarioClass_Instance + 134) % 2) /*0x62b811*/
                           + this->q0E4;
  v15 = this->q0AC; /*0x62b817*/
  this->q12A = *(unsigned short *)(v15 + 732); /*0x62b824*/
  if ( *(unsigned int *)(v15 + 788) == 4 ) /*0x62b834*/
    v16 = *(unsigned short *)(this->q0AC + 736) /*0x62b85c*/
        + abs32(Random::State((unsigned int *)g_ScenarioClass_Instance + 134) % 10);
  else
    v16 = *(unsigned short *)(this->q0AC + 736) /*0x62b889*/
        + abs32(Random::State((unsigned int *)g_ScenarioClass_Instance + 134) % *(unsigned int *)(this->q0AC + 736));
  this->q128 = v16; /*0x62b890*/
  v28 = a2[2]; /*0x62b8ad*/
  if ( v28 <= Cell::GetGroundHeight(a2) ) /*0x62b8ba*/
    Cell::GetGroundHeight(a2); /*0x62b8c2*/
  ObjectClass::SetPosition((void *)this); /*0x62b8d2*/
  v17 = Math::Sqrt(*v9 * *v9 + this->ParticleSystem * this->ParticleSystem + this->RemainingEC /*0x62b8fc*/
                                                                               * this->RemainingEC);
  if ( v17 == 0.0 ) /*0x62b90f*/
  {
    v18 = *v9; /*0x62b93c*/
    v19 = this->ParticleSystem; /*0x62b93e*/
    v20 = this->RemainingEC; /*0x62b941*/
  }
  else
  {
    v29 = *v9 / v17; /*0x62b916*/
    v18 = v29; /*0x62b91f*/
    v31 = this->ParticleSystem / v17; /*0x62b923*/
    v19 = v31; /*0x62b927*/
    v32 = this->RemainingEC / v17; /*0x62b92e*/
    v20 = v32; /*0x62b932*/
  }
  *v9 = v18; /*0x62b94a*/
  this->ParticleSystem = v19; /*0x62b950*/
  this->RemainingEC = v20; /*0x62b953*/
  if ( *(unsigned char *)(this->q0AC + 783) ) /*0x62b95c*/
  {
    v30 = *a2 - *(unsigned int *)IDA_LODWORD(a3); /*0x62b97e*/
    v21 = a2[1] - *(unsigned int *)(IDA_LODWORD(a3) + 4); /*0x62b985*/
    a3 = (float)(int)abs32(Math::RoundToInt(*v9 * this->q0E4)); /*0x62b999*/
    v33 = (float)(int)abs32(Math::RoundToInt(this->ParticleSystem * this->q0E4)); /*0x62b9bb*/
    v22 = 9999.0; /*0x62b9bf*/
    if ( a3 > 0.000001 ) /*0x62b9d4*/
      v22 = (double)(int)abs32(v30) / a3; /*0x62b9e9*/
    if ( v33 > 0.000001 ) /*0x62b9fc*/
    {
      a3 = (double)(int)abs32(v21) / v33; /*0x62ba11*/
      if ( v22 >= a3 ) /*0x62ba1e*/
        v22 = a3; /*0x62ba22*/
    }
    IDA_LODWORD(a3) = *(char *)(this->q0AC + 780) + 1; /*0x62ba34*/
    this->q12C = Math::RoundToInt(v22); /*0x62ba4b*/
  }
  v23 = this->q0AC; /*0x62ba51*/
  if ( *(int *)(v23 + 712) > 0 ) /*0x62ba5d*/
  {
    if ( *(unsigned char *)(v23 + 724) /*0x62ba8b*/
      || *(unsigned char *)(v23 + 725)
      || *(unsigned char *)(v23 + 726)
      || *(unsigned char *)(v23 + 727)
      || *(unsigned char *)(v23 + 728)
      || *(unsigned char *)(v23 + 729) )
    {
      v27 = (double)Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2147483646) * 4.656612877414201e-10; /*0x62bae5*/
      v25 = Color::Lerp2(&a3, this->q0AC + 724, this->q0AC + 727, v27); /*0x62baee*/
      this->q0B0 = *(unsigned short *)v25; /*0x62baf6*/
      this->q0B2 = v25[2]; /*0x62bb00*/
    }
    else
    {
      v24 = *(unsigned int *)(v23 + 700); /*0x62ba93*/
      this->q0B0 = *(unsigned short *)v24; /*0x62ba9c*/
      this->q0B2 = *(unsigned char *)(v24 + 2); /*0x62baa6*/
    }
  }
  ObjectClass::Deploy((void *)this); /*0x62bb0e*/
  return this; /*0x62bb15*/
}

// ==== BACKFILL 0x0062BB20  ObjectClass::ProcessUpdate  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::ProcessUpdate() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 75 errs): wrong-universe gap2 body; truth func_0x62bb20.json */
}

// ==== BACKFILL 0x0062C3A0  ParticleClass::UpdateParticlePhysics  cls=ParticleClass  sig=csp  renamed_refs=2  residual=- ====
void ParticleClass::UpdateParticlePhysics() {
  double v2; // st7
  float v3; // eax
  int v4; // eax
  double v5; // st7
  float v6; // eax
  double v7; // st7
  float v8; // eax
  int v9; // edx
  double *ParticleClass_field_0xAC; // ecx
  double v11; // st7
  IUnknown *ParticleClass_field_0xB4; // eax
  int v13; // [esp+4h] [ebp-1Ch]
  float v14; // [esp+8h] [ebp-18h]
  float v15; // [esp+Ch] [ebp-14h]
  float v16; // [esp+10h] [ebp-10h]
  int v17; // [esp+14h] [ebp-Ch] BYREF
  float v18; // [esp+18h] [ebp-8h]
  float v19; // [esp+1Ch] [ebp-4h]

  v2 = *(float *)&this->__pad_E4[40]; /*0x62c3b1*/
  v3 = *(float *)this->__pad_E4; /*0x62c3bd*/
  v18 = *(float *)&this->__pad_E4[44]; /*0x62c3c5*/
  v19 = *(float *)&this->__pad_E4[48]; /*0x62c3cf*/
  v14 = v2 * v3; /*0x62c3e1*/
  v15 = v18 * v3; /*0x62c3ed*/
  v16 = v19 * v3; /*0x62c3f9*/
  *(float *)this->__pad_E4 = ((double)Random::Range((Random *)&dword_A8B230[14].needsSave, 0, 2147483646) /*0x62c422*/
                            * 4.656612877414201e-10
                            - 0.5)
                           * 0.1
                           + *(float *)this->__pad_E4;
  *(float *)&this->__pad_E4[52] = v14 + *(float *)&this->__pad_E4[52]; /*0x62c432*/
  *(float *)&this->__pad_E4[56] = v15 + *(float *)&this->__pad_E4[56]; /*0x62c442*/
  *(float *)&this->__pad_E4[60] = v16 + *(float *)&this->__pad_E4[60]; /*0x62c452*/
  (v4) = ((v4) & ~0xFFFF) | ((Math::RoundToInt(*(float *)&this->__pad_E4[52])) & 0xFFFF); /*0x62c45e*/
  v5 = *(float *)&this->__pad_E4[56]; /*0x62c463*/
  v17 = v4; /*0x62c469*/
  IDA_LOWORD(v6) = Math::RoundToInt(v5); /*0x62c46d*/
  v7 = *(float *)&this->__pad_E4[60]; /*0x62c472*/
  v18 = v6; /*0x62c478*/
  IDA_LOWORD(v8) = Math::RoundToInt(v7); /*0x62c47c*/
  v9 = *(unsigned int *)this->__pad_0; /*0x62c481*/
  v19 = v8; /*0x62c483*/
  (*(void (**)(ParticleClass *, int *))(v9 + 436))(this, &v17); /*0x62c48e*/
  v13 = Random::Range((Random *)&dword_A8B230[14].needsSave, 0, 2147483646); /*0x62c4ac*/
  ParticleClass_field_0xAC = (double *)this->ParticleClass_field_0xAC; /*0x62c4b0*/
  v11 = (double)v13 * 4.656612877414201e-10 * 0.05 /*0x62c4cc*/
      + ParticleClass_field_0xAC[86]
      + *(double *)&this->ParticleClass_field_0xB8;
  *(double *)&this->ParticleClass_field_0xB8 = v11; /*0x62c4d2*/
  if ( v11 > 1.0 ) /*0x62c4e3*/
  {
    ParticleClass_field_0xB4 = this->ParticleClass_field_0xB4; /*0x62c4eb*/
    if ( (int)ParticleClass_field_0xB4 >= *((unsigned int *)ParticleClass_field_0xAC + 178) - 2 ) /*0x62c4f6*/
    {
      this->ParticleClass_field_0xB8 = 0; /*0x62c518*/
      this->ParticleClass_field_0xBC = (IUnknown *)1072693248; /*0x62c522*/
    }
    else
    {
      this->ParticleClass_field_0xB8 = 0; /*0x62c4f9*/
      this->ParticleClass_field_0xB4 = (IUnknown *)((char *)&ParticleClass_field_0xB4->field_0 + 1); /*0x62c503*/
      this->ParticleClass_field_0xBC = 0; /*0x62c509*/
    }
  }
}

// ==== BACKFILL 0x0062C540  ParticleClass::UpdateAnimationDrift  cls=ParticleClass  sig=csp  renamed_refs=3  residual=- ====
void ParticleClass::UpdateAnimationDrift() {
  int v2; // ebp
  int v3; // edi
  int v4; // eax
  Random *p_NeedsSaveOrLink; // ecx
  IUnknown *v6; // eax
  IUnknown *v7; // ebp
  IUnknown *ParticleClass_field_0xC4; // eax
  float *ParticleClass_field_0xAC; // ebp
  int v10; // [esp+Ch] [ebp-4h]

  if ( (((unsigned int *)&stru_A8EB00)[416] & 1) != 0 ) /*0x62c54d*/
  {
    if ( (abs32(Random::State((Random *)&dword_A8B230[14].needsSave)) & 3) == 0 ) /*0x62c56a*/
    {
      v2 = 0; /*0x62c576*/
      v3 = 0; /*0x62c57e*/
      v4 = Random::State((Random *)&dword_A8B230[14].needsSave); /*0x62c580*/
      p_NeedsSaveOrLink = (Random *)&dword_A8B230[14].needsSave; /*0x62c592*/
      if ( (abs32(v4) & 1) != 0 ) /*0x62c598*/
        v3 = (int)abs32(Random::State(p_NeedsSaveOrLink)) % 3 - 1; /*0x62c5c5*/
      else
        v2 = (int)abs32(Random::State(p_NeedsSaveOrLink)) % 3 - 1; /*0x62c5ae*/
      v6 = (IUnknown *)((char *)this->ParticleClass_field_0xC0 + v2); /*0x62c5d1*/
      v7 = (IUnknown *)((char *)this->ParticleClass_field_0xC4 + v3); /*0x62c5d9*/
      this->ParticleClass_field_0xC0 = v6; /*0x62c5dd*/
      this->ParticleClass_field_0xC4 = v7; /*0x62c5e3*/
      if ( (int)v6 >= -5 ) /*0x62c5ee*/
      {
        if ( (int)v6 > 5 ) /*0x62c5fa*/
          this->ParticleClass_field_0xC0 = (IUnknown *)5; /*0x62c5fc*/
      }
      else
      {
        this->ParticleClass_field_0xC0 = (IUnknown *)-5; /*0x62c5f0*/
      }
      ParticleClass_field_0xC4 = this->ParticleClass_field_0xC4; /*0x62c602*/
      if ( (int)ParticleClass_field_0xC4 >= -5 ) /*0x62c60a*/
      {
        if ( (int)ParticleClass_field_0xC4 > 5 ) /*0x62c616*/
          this->ParticleClass_field_0xC4 = (IUnknown *)5; /*0x62c618*/
      }
      else
      {
        this->ParticleClass_field_0xC4 = (IUnknown *)-5; /*0x62c60c*/
      }
    }
    this->ParticleClass_field_0xC8 = 0; /*0x62c61e*/
  }
  ParticleClass_field_0xAC = (float *)this->ParticleClass_field_0xAC; /*0x62c628*/
  if ( this->__pad_128[6] < *((unsigned char *)ParticleClass_field_0xAC + 777) ) /*0x62c63a*/
  {
    v10 = *((unsigned int *)this->ParticleClass_field_0xAC + 184) /*0x62c664*/
        - *(uint16_t *)this->__pad_128
        + (*(int (**)(char *))(*(unsigned int *)&this->ParticleClass_field_0x2[2] + 16))(&this->ParticleClass_field_0x2[2]);
    if ( !(v10 /*0x62c67e*/
         % (*((char *)ParticleClass_field_0xAC + 779)
          + ((*(int (**)(char *))(*(unsigned int *)&this->ParticleClass_field_0x2[2] + 16))(&this->ParticleClass_field_0x2[2])
           & 1))) )
      ++this->__pad_128[6]; /*0x62c684*/
    if ( this->__pad_128[6] == *((unsigned char *)ParticleClass_field_0xAC + 777) && *((unsigned char *)ParticleClass_field_0xAC + 776) ) /*0x62c69a*/
      this->__pad_128[9] = 1; /*0x62c6a4*/
  }
  if ( *(float *)this->__pad_E4 > 3.0 ) /*0x62c6bc*/
    *(float *)this->__pad_E4 = *(float *)this->__pad_E4 - ParticleClass_field_0xAC[192]; /*0x62c6ca*/
}

// ==== BACKFILL 0x0062CE40  ParticleClass::Dispatch  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleClass::Dispatch() {
  int result; // eax

  result = *(unsigned int *)(this->ParticleClass_field_0xAC + 788); /*0x62ce49*/
  switch ( result ) /*0x62ce54*/
  {
    case 0: /*0x62ce54*/
      IDA_LOBYTE(result) = ParasiteClass::Update(this->__pad_0); /*0x62ce5d*/
      break; /*0x62ce62*/
    case 1: /*0x62ce54*/
      ParticleClass::UpdateAnimationDrift(this); /*0x62ce66*/
      break; /*0x62ce6b*/
    case 2: /*0x62ce54*/
      UpdateAreaDamageEffect((ObjectClass *)this); /*0x62ce6f*/
      break; /*0x62ce74*/
    case 3: /*0x62ce54*/
      UpdateParticleSystem((TechnoClass *)this); /*0x62ce78*/
      break; /*0x62ce7d*/
    case 4: /*0x62ce54*/
      ParticleClass::UpdateParticlePhysics(this); /*0x62ce81*/
      break; /*0x62ce81*/
    default:
      break;
  }
  if ( !--*(unsigned short *)this->__pad_128 ) /*0x62ce8d*/
    this->__pad_128[9] = 1; /*0x62ce97*/
  return result; /*0x62ce9e*/
}

// ==== BACKFILL 0x0062D510  sub_62D510  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_62D510()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0062D510.json)
}

// ==== BACKFILL 0x0062D6F0  ParticleClass::CheckMirrorState  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
bool ParticleClass::CheckMirrorState(int a1) {
  return (uint8_t)ObjectClass::UpdateProductionDisplay((ObjectClass *)this) != 0; /*0x62d6ff*/
}

// ==== BACKFILL 0x0062D710  ParticleClass::CheckDrawFlags  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
int * ParticleClass::CheckDrawFlags(int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x62D710)
}

// ==== BACKFILL 0x0062D770  ParticleClass::CheckStateFlag  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleClass::CheckStateFlag()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x62D770)
}

// ==== BACKFILL 0x0062D7A0  ParticleClass::LoadParticleData  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleClass::LoadParticleData(ObjectClass * aP1, int aP1a)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x62D7A0)
}

// ==== BACKFILL 0x0062D810  ParticleClass::CheckCollisionFlags  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleClass::CheckCollisionFlags(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x62D810)
}

// ==== BACKFILL 0x0062D830  ParticleClass::g_var_22c88d  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleClass::g_var_22c88d() {
  int v2; // eax
  int v3; // eax
  int v5[2]; // [esp+4h] [ebp-10h] BYREF
  int v6[2]; // [esp+Ch] [ebp-8h] BYREF

  v2 = *((unsigned int *)this->ParticleClass_field_0xAC + 197); /*0x62d83c*/
  if ( v2 >= 0 ) /*0x62d844*/
  {
    if ( v2 <= 1 ) /*0x62d84d*/
      return this->__pad_128[6]; /*0x62d84d*/
    if ( v2 == 2 ) /*0x62d856*/
    {
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_E4[16], v6); /*0x62d86e*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_E4[4], v5); /*0x62d885*/
      v3 = CalcMathFacing8(v6, v5); /*0x62d892*/
      if ( v3 == 2 || v3 == 6 ) /*0x62d89f*/
        return this->__pad_128[6] + 2 * *((char *)this->ParticleClass_field_0xAC + 777); /*0x62d91e*/
      if ( v3 != 4 && v3 ) /*0x62d8a8*/
      {
        if ( v3 == 1 || v3 == 5 ) /*0x62d8b2*/
          return this->__pad_128[6] + *((char *)this->ParticleClass_field_0xAC + 777); /*0x62d8f6*/
        if ( v3 == 3 || v3 == 7 ) /*0x62d8bc*/
          return this->__pad_128[6] + 3 * *((char *)this->ParticleClass_field_0xAC + 777); /*0x62d8db*/
        return 0; /*0x62d8bc*/
      }
      return this->__pad_128[6]; /*0x62d902*/
    }
  }
  return 0; /*0x62d8d2*/
}

// ==== BACKFILL 0x0062D930  ParticleClass::GetClassIdentifier  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleClass::GetClassIdentifier(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x62D930)
}

// ==== BACKFILL 0x0062D970  ParticleClass::GetObjectSize  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleClass::GetObjectSize()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x62D970)
}

// ==== BACKFILL 0x0062D980  ParticleClass::GetTypeIdentifier  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleClass::GetTypeIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x62D980)
}

// ==== BACKFILL 0x0062D990  ParticleClass::Stub  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleClass::Stub() {
  return (int)this->ParticleClass_field_0xAC; /*0x62d996*/
}

// ==== BACKFILL 0x0062D9A0  ParticleClass::UpdateParticle  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
void* ParticleClass::UpdateParticle(int a1) {
  int v3; // edx
  int v4; // eax
  ParticleClass *v6; // [esp+4h] [ebp-4h] BYREF

  *(unsigned int *)this->__pad_0 = (void *)&ParticleClass_vftable; /*0x62d9a4*/
  *(unsigned int *)&this->ParticleClass_field_0x2[2] = (void *)&ParticleClass_vftable; /*0x62d9aa*/
  this->ParticleClass_field_0x8[0] = (int)(void *)&ParticleClass_vftable; /*0x62d9b1*/
  this->ParticleClass_field_0xC = (void *)&ParticleClass_vftable; /*0x62d9b8*/
  ObjectClass::Undeploy((ObjectClass *)this); /*0x62d9bf*/
  (v3) = ((v3) & ~0xFF) | ((1) & 0xFF); /*0x62d9c4*/
  AbstractClass::AnnounceExpiredPointer((void **)this, v3); /*0x62d9c8*/
  this->ParticleClass_field_0xAC = 0; /*0x62d9cd*/
  v6 = this; /*0x62d9e7*/
  v4 = (*(int (**)(int *, ParticleClass **))(stru_A83D50.SuperClass_field_0x78 + 16))( /*0x62d9eb*/
         &stru_A83D50.SuperClass_field_0x78,
         &v6);
  if ( v4 != -1 && v4 < *(int *)&stru_A83D50.__pad_80[8] ) /*0x62d9fb*/
  {
    --*(unsigned int *)&stru_A83D50.__pad_80[8]; /*0x62da00*/
    for ( ; /*0x62da06*/
          v4 < *(int *)&stru_A83D50.__pad_80[8];
          *((unsigned int *)stru_A83D50.SuperClass_field_0x7C + v4 - 1) = *((unsigned int *)stru_A83D50.SuperClass_field_0x7C + v4) )
    {
      ++v4; /*0x62da0e*/
    }
  }
  ObjectClass::Dtor((ObjectClass *)this); /*0x62da22*/
  if ( (a1 & 1) != 0 ) /*0x62da2c*/
    RA2_OPDEL(this); /*0x62da2f*/
  return (void **)this; /*0x62da39*/
}

// ==== BACKFILL 0x0062DC50  ParticleSystemClass::Constructor  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleSystemClass::Constructor(int a2, int *a3, int a4, void *a5, unsigned int *a6, int a7) {
  int *v8; // ebp
  int v9; // edx
  int *v10; // eax
  int v11; // eax
  int *v12; // eax
  unsigned int *v13; // eax
  unsigned int *v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // ebp
  int v18; // ebx
  unsigned int *v19; // eax
  int v20; // ecx
  int v21; // ebp
  int v22; // eax
  unsigned char v24[12]; // [esp+1Ch] [ebp-Ch] BYREF

  ObjectClass::ctor((ObjectClass *)this); /*0x62dc59*/
  *(&this->uniqueId3) = a1; /*0x62dc6a*/
  v8 = &this->SpawnFrames; /*0x62dc70*/
  *(&this->uniqueId4) = 0; /*0x62dc76*/
  *(&this->uniqueId5) = 0; /*0x62dc7c*/
  *(&this->uniqueId6) = 0; /*0x62dc82*/
  *(&this->uniqueId8) = 0; /*0x62dc88*/
  *(&this->uniqueId9) = 0; /*0x62dc8b*/
  this->q0C8 = 1; /*0x62dc8e*/
  this->q0C9 = 0; /*0x62dc92*/
  *(&this->uniqueId7) = (int)(void *)&DynamicVectorClass_ParticleClass___vftable; /*0x62dc95*/
  *(&this->abstractFlags2) = 10; /*0x62dc9b*/
  *(&this->abstractFlags1) = 0; /*0x62dca2*/
  *(&this->abstractFlags3) = dword_AC4A58; /*0x62dcad*/
  *(&this->abstractFlags4) = dword_AC4A5C; /*0x62dcb4*/
  dword_AC4A60 = dword_AC4A60; /*0x62dcb7*/
  v10 = (int *)*(&this->uniqueId3); /*0x62dcbd*/
  *(&this->abstractFlags6) = 0; /*0x62dcc3*/
  *(&this->abstractFlags5) = dword_AC4A60; /*0x62dcc9*/
  *(&this->abstractFlags7) = 0; /*0x62dccc*/
  this->q0E8 = (float)v10[167]; /*0x62dcd8*/
  *(&this->abstractFlags9) = v10[174]; /*0x62dce4*/
  *(&this->nextArrayIndex0) = v10[192]; /*0x62dcf3*/
  *(&this->nextArrayIndex1) = 29; /*0x62dcfa*/
  this->q0F8 = 0; /*0x62dd04*/
  this->ParticleSystemClass_field_bool_F9 = 0; /*0x62dd0a*/
  *(&this->nextArrayIndex3) = 0; /*0x62dd10*/
  *this = (int)(void *)&ParticleSystemClass_vftable; /*0x62dd16*/
  /* X11: ptr_0 install elided (implicit via ParticleSystemClass virtuals 0x62dd1c) */
  /* X11: ptr_0 install elided (implicit via ParticleSystemClass virtuals 0x62dd22) */
  /* X11: ptr_0 install elided (implicit via off_7EFB70 virtuals 0x62dd29) */
  AbstractClass::GenerateUniqueID((AbstractClass *)(this + 1)); /*0x62dd30*/
  if ( g_GameCleanupState < dword_A80210 /*0x62dd6a*/
    || (byte_A80215 || !dword_A80210)
    && dword_A8021C > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_A80208 + 8))(
         &dword_A80208,
         dword_A80210 + dword_A8021C,
         0) )
  {
    v11 = g_GameCleanupState++; /*0x62dd77*/
    *((unsigned int *)dword_A8020C + v11) = this; /*0x62dd86*/
  }
  (*(void (**)(int *))(*(&this->uniqueId7) + 12))(&this->uniqueId7); /*0x62dd8d*/
  *(&this->nextArrayIndex3) = a6; /*0x62dd9a*/
  if ( a3 ) /*0x62dda0*/
  {
    v12 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)a3 + 72))(a3, v24); /*0x62ddab*/
    *v8 = *v12; /*0x62ddb0*/
    *(&this->abstractFlags4) = v12[1]; /*0x62ddb8*/
    *(&this->abstractFlags5) = v12[2]; /*0x62ddbe*/
    v13 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)a3 + 72))(a3, v24); /*0x62ddc8*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v13)->flags[0] & 0x100) != 0 /*0x62ddeb*/
      && (*(int (**)(int))(*(unsigned int *)a3 + 44))(a3) == 11 )
    {
      *(&this->abstractFlags5) += dword_AC4A8C; /*0x62ddfa*/
    }
  }
  else
  {
    *v8 = *a5; /*0x62de08*/
    *(&this->abstractFlags4) = a5[1]; /*0x62de0e*/
    *(&this->abstractFlags5) = a5[2]; /*0x62de14*/
  }
  if ( a4 ) /*0x62de35*/
  {
    *(&this->abstractFlags6) = (int)a4; /*0x62de37*/
    v14 = AbstractClass::IsTechnoType((AbstractClass *)a4); /*0x62de3d*/
    if ( v14 ) /*0x62de44*/
      *(&this->abstractFlags7) = v14[173]; /*0x62de4c*/
  }
  else
  {
    *(&this->abstractFlags6) = 0; /*0x62de54*/
    *(&this->abstractFlags7) = a3; /*0x62de5a*/
  }
  ObjectClass::Deploy((ObjectClass *)this); /*0x62de68*/
  v15 = *(&this->abstractFlags6); /*0x62de6d*/
  if ( v15 ) /*0x62de75*/
  {
    v16 = *(&this->ptr_C4); /*0x62de7f*/
    v17 = *(&this->uniqueId0); /*0x62de81*/
    v18 = *(&this->uniqueId1); /*0x62de84*/
    v19 = (unsigned int *)(*(int (**)(int, unsigned char *))(v15->u32_48)(v15, v24); /*0x62de8c*/
    v20 = v19[2]; /*0x62de96*/
    v21 = v17 - v19[1]; /*0x62de99*/
    *(&this->uniqueId4) = v16 - *v19; /*0x62de9d*/
    *(&this->uniqueId5) = v21; /*0x62dea3*/
    *(&this->uniqueId6) = v18 - v20; /*0x62dea9*/
  }
  if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x62dee6*/
    || (IDA_BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
    && g_BuildingLoadQueue_Array.Height > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
         &g_BuildingLoadQueue_Array.PowerBonus,
         g_BuildingLoadQueue_Array.Height + g_BuildingLoadQueue_Array.ExtraPowerBonus,
         0) )
  {
    v22 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x62def3*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v22) = this; /*0x62df02*/
  }
  return (int)this; /*0x62df07*/
}

// ==== BACKFILL 0x0062DF20  ParticleClass::ProcessCreation  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleClass::ProcessCreation() {
  int v2; // edx
  int v3; // eax
  int v4; // eax
  int v5; // eax

  ObjectClass::ctor((ObjectClass *)this); /*0x62df24*/
  this->Type = 0; /*0x62df31*/
  this->TargetCoords[0] = 0; /*0x62df3d*/
  this->TargetCoords[1] = 0; /*0x62df40*/
  IDA_LOBYTE(this->TargetCoords[2]) = 1; /*0x62df43*/
  IDA_BYTE1(this->TargetCoords[2]) = 0; /*0x62df47*/
  this->Particles[0] = (int)(void *)&DynamicVectorClass_ParticleClass___vftable; /*0x62df4a*/
  this->Target = (void *)10; /*0x62df50*/
  this->Owner = 0; /*0x62df57*/
  this->SpawnFrames = dword_AC4A58; /*0x62df60*/
  this->Lifetime = dword_AC4A5C; /*0x62df68*/
  v2 = dword_AC4A60; /*0x62df6b*/
  this->SpotlightRadius = 0; /*0x62df71*/
  *(unsigned int *)&this->TimeToDie = 0; /*0x62df77*/
  this->SparkSpawnFrames = v2; /*0x62df7d*/
  v3 = this->Particles[0]; /*0x62df80*/
  *(unsigned int *)&this->__pad_E5[3] = 0; /*0x62df82*/
  *(unsigned int *)&this->__pad_E5[7] = 0; /*0x62df88*/
  *(unsigned int *)&this->__pad_E5[11] = 0; /*0x62df8e*/
  *(unsigned int *)&this->__pad_E5[15] = 0; /*0x62df94*/
  this->__pad_E5[19] = 0; /*0x62df9a*/
  this->ParticleSystemClass_field_bool_F9 = 0; /*0x62dfa0*/
  this->ObjectClass = (void *)&ParticleSystemClass_vftable; /*0x62dfa6*/
  ((unsigned int *)this)[0] = (void *)&ParticleSystemClass_vftable; /*0x62dfac*/
  ((unsigned int *)this)[0] = (void *)&ParticleSystemClass_vftable; /*0x62dfb3*/
  ((unsigned int *)this)[0] = &off_7EFB70; /*0x62dfba*/
  (*(void (**)(void))(v3 + 12))(); /*0x62dfc1*/
  if ( g_GameCleanupState < dword_A80210 /*0x62dff8*/
    || (byte_A80215 || !dword_A80210)
    && dword_A8021C > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_A80208 + 8))(
         &dword_A80208,
         dword_A80210 + dword_A8021C,
         0) )
  {
    v4 = g_GameCleanupState++; /*0x62e005*/
    *((unsigned int *)dword_A8020C + v4) = this; /*0x62e014*/
  }
  if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x62e04b*/
    || (IDA_BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
    && g_BuildingLoadQueue_Array.Height > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
         &g_BuildingLoadQueue_Array.PowerBonus,
         g_BuildingLoadQueue_Array.ExtraPowerBonus + g_BuildingLoadQueue_Array.Height,
         0) )
  {
    v5 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x62e058*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v5) = this; /*0x62e067*/
  }
  return (int)this; /*0x62e06c*/
}

// ==== BACKFILL 0x0062E280  ParticleSystemClass::CreateBuildingLight  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
void ParticleSystemClass::CreateBuildingLight(int a1, int a2) {
  __m64 v3; // mm0
  ParticleSystemTypeClass *Type; // eax
  double v6; // st7
  double v7; // st6
  int v8; // eax
  int v9; // esi
  ObjectClass *v10; // eax
  BuildingLightQueue *v11; // esi
  BuildingLight *v12; // [esp+0h] [ebp-10h]

  Type = this->Type; /*0x62e287*/
  if ( IDA_LOBYTE(Type[1].ParticleSystemTypeClass_field_0x0) && *(int *)Type->__pad_304 > 0 && (int)this->Owner > 0 ) /*0x62e2b9*/
  {
    v6 = (double)(int)this->Owner / (double)IDA_SLODWORD(Type->ParticleSystemTypeClass_field_0x2A4); /*0x62e2c3*/
    if ( v6 <= 1.0 ) /*0x62e2d6*/
      v7 = v6; /*0x62e2e0*/
    else
      v7 = 1.0; /*0x62e2d8*/
    if ( v7 >= 0.4 ) /*0x62e2ed*/
    {
      if ( v6 > 1.0 ) /*0x62e306*/
        v6 = 1.0; /*0x62e30a*/
    }
    else
    {
      v6 = 0.4; /*0x62e2f1*/
    }
    (v8) = ((v8) & ~0xFFFF) | ((Math::RoundToInt(v6 * (double)*(int *)Type->__pad_304)) & 0xFFFF); /*0x62e314*/
    v9 = v8; /*0x62e31b*/
    v10 = (ObjectClass *)RA2_OPNEW(0x18u); /*0x62e31d*/
    if ( v10 ) /*0x62e327*/
      v11 = (BuildingLightQueue *)ObjectClass::RegisterInArray(v10, ((unsigned int *)this)[0], ((unsigned int *)this)[1], ((unsigned int *)this)[2], v9); /*0x62e34c*/
    else
      v11 = 0; /*0x62e350*/
    v11[3] = *(BuildingLightQueue *)&this->__pad_E5[15]; /*0x62e35a*/
    BuildingLight::CalculateShading(v12, v3); /*0x62e35d*/
    if ( v11 ) /*0x62e364*/
    {
      BuildingLightQueue::RemoveEntry(v11); /*0x62e368*/
      RA2_OPDEL(v11); /*0x62e36e*/
    }
  }
}

// ==== BACKFILL 0x0062E380  ParticleSystemClass::CreateParticle  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleSystemClass::CreateParticle(void* a1, void* a2) {
  double v3; // st7
  ObjectClass *v5; // eax
  int v6; // edi
  int v7; // ecx
  void *Owner; // eax
  int *Particles; // esi
  int v10; // eax
  int v11; // eax
  int v12; // edx

  if ( this->Type->ParticleSystemTypeClass_field_0x294 == (IUnknown *)-1 ) /*0x62e391*/
    return 0; /*0x62e391*/
  v5 = (ObjectClass *)RA2_OPNEW(0x138u); /*0x62e39c*/
  if ( !v5 ) /*0x62e3a6*/
    return 0; /*0x62e3a6*/
  v6 = ParticleClass::Construct( /*0x62e3d0*/
         v5,
         v3,
         *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_3C[16] + 4 * (int)this->Type->ParticleSystemTypeClass_field_0x294),
         a1,
         *(float *)&a2,
         (int)this);
  if ( !v6 ) /*0x62e3d4*/
    return 0; /*0x62e425*/
  v7 = this->TargetCoords[1]; /*0x62e3d6*/
  Owner = this->Owner; /*0x62e3dc*/
  Particles = this->Particles; /*0x62e3e2*/
  if ( (int)Owner < v7 /*0x62e407*/
    || (*((unsigned char *)Particles + 13) || !v7)
    && (v10 = Particles[5], v10 > 0)
    && (*(uint8_t (**)(int *, int, unsigned int))(*Particles + 8))(Particles, v7 + v10, 0) )
  {
    v11 = Particles[4]; /*0x62e40e*/
    v12 = Particles[1]; /*0x62e411*/
    Particles[4] = v11 + 1; /*0x62e417*/
    *(unsigned int *)(v12 + 4 * v11) = v6; /*0x62e41a*/
  }
  return v6; /*0x62e41f*/
}

// ==== BACKFILL 0x0062E430  CreateFireAtSW  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_62E430::CreateFireAtSW(int aP1, IUnknown * aP2) {

  double v3; // st7
  ObjectClass *v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  char *v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // edx

  v5 = (ObjectClass *)__2_YAPAXI_Z(0x138u); /*0x62e439*/
  if ( !v5 ) /*0x62e443*/
    return 0; /*0x62e443*/
  v6 = ParticleClass::Construct(v5, v3, aP1, (unsigned int *)aP2, COERCE_FLOAT(&dword_AC4A58), (int)this); /*0x62e45c*/
  if ( !v6 ) /*0x62e460*/
    return 0; /*0x62e4b1*/
  v7 = *((unsigned int *)this + 49); /*0x62e462*/
  v8 = *((unsigned int *)this + 51); /*0x62e468*/
  v9 = (char *)this + 188; /*0x62e46e*/
  if ( v8 < v7 /*0x62e493*/
    || (v9[13] || !v7)
    && (v10 = *((unsigned int *)v9 + 5), v10 > 0)
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)v9 + 8))(v9, v7 + v10, 0) )
  {
    v11 = *((unsigned int *)v9 + 4); /*0x62e49a*/
    v12 = *((unsigned int *)v9 + 1); /*0x62e49d*/
    *((unsigned int *)v9 + 4) = v11 + 1; /*0x62e4a3*/
    *(unsigned int *)(v12 + 4 * v11) = v6; /*0x62e4a6*/
  }
  return v6; /*0x62e4ab*/

}

// ==== BACKFILL 0x0062E4C0  ParticleClass::CreateInstance  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleClass::CreateInstance(void* a1, float a2, int a3) {
  void *v5; // eax
  int v6; // ebp
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // esi
  int v13; // ebx
  int v14; // edx
  int v15; // eax
  int v16; // esi
  unsigned int *v17; // ecx
  int v18; // eax

  if ( this->Type->q294 == -1 ) /*0x62e4d2*/
    return 0; /*0x62e4d2*/
  v5 = RA2_OPNEW(0x138u); /*0x62e4dd*/
  if ( !v5 ) /*0x62e4e7*/
    return 0; /*0x62e4e7*/
  v6 = ParticleClass::Construct( /*0x62e515*/
         (int)v5,
         *((unsigned int *)dword_A83D9C + this->Type->q294),
         a1,
         a2,
         this);
  if ( !v6 ) /*0x62e519*/
    return 0; /*0x62e519*/
  v7 = a3; /*0x62e51f*/
  if ( a3 <= 0 ) /*0x62e525*/
    return 0; /*0x62e5c8*/
  v8 = this->q0C4; /*0x62e52b*/
  if ( this->Owner < v8 /*0x62e55d*/
    || (this->q0C9 || !v8)
    && (v9 = this->Target, v9 > 0)
    && (*(uint8_t (**)(int, int, unsigned int))(this->Particles + 8))(&this->Particles, v8 + v9, 0) )
  {
    v10 = this->Owner; /*0x62e564*/
    v11 = this->TargetCoords; /*0x62e567*/
    this->Owner = v10 + 1; /*0x62e56d*/
    *(unsigned int *)(v11 + 4 * v10) = v6; /*0x62e570*/
  }
  v12 = this->Owner; /*0x62e573*/
  v13 = this->TargetCoords; /*0x62e579*/
  if ( v12 < a3 ) /*0x62e581*/
    v7 = v12; /*0x62e583*/
  v14 = (int)abs32(Random::State((unsigned int *)dword_A8B230 + 134)) % v7; /*0x62e59b*/
  v15 = v12 - 2; /*0x62e59d*/
  v16 = v12 - v14; /*0x62e5a0*/
  if ( v15 > v16 - 2 ) /*0x62e5a7*/
  {
    v17 = (unsigned int *)(v13 + 4 * v15); /*0x62e5a9*/
    v18 = v15 - (v16 - 2); /*0x62e5ac*/
    do /*0x62e5b7*/
    {
      v17[1] = *v17; /*0x62e5b0*/
      --v17; /*0x62e5b3*/
      --v18; /*0x62e5b6*/
    }
    while ( v18 ); /*0x62e5b7*/
  }
  *(unsigned int *)(v13 + 4 * v16 - 4) = v6; /*0x62e5b9*/
  return v6; /*0x62e5c0*/
}

// ==== BACKFILL 0x0062E650  ScenarioClass::DestroyAndClearVector  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
void ScenarioClass::DestroyAndClearVector() {
}

// ==== BACKFILL 0x0062E6D0  ParticleSystemClass::UpdateAllParticles  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
void ParticleSystemClass::UpdateAllParticles() {
  double v1; // st7
  ParticleSystemClass *v2; // edi
  int i; // esi
  int v4; // esi
  int v5; // ecx
  int v6; // ebx
  unsigned int *v7; // edx
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int v11; // ecx
  int v12; // esi
  int v13; // edx
  int v14; // edi
  ObjectClass *v15; // eax
  int v16; // ebp
  int v17; // ecx
  void *Target; // eax
  void *Owner; // eax
  int v20; // edx
  unsigned int *v21; // ebp
  int j; // [esp+Ch] [ebp-10h]
  unsigned int v24[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = this; /*0x62e6d5*/
  for ( i = (int)this->Owner - 1; i >= 0; --i ) /*0x62e6e2*/
    ParticleClass::Dispatch(*(ParticleClass **)(v2->TargetCoords[0] + 4 * i)); /*0x62e6ed*/
  v4 = (int)v2->Owner - 1; /*0x62e6fb*/
  for ( j = v4; v4 >= 0; j = v4 ) /*0x62e700*/
  {
    v5 = v2->TargetCoords[0]; /*0x62e708*/
    v6 = *(unsigned int *)(v5 + 4 * v4); /*0x62e70e*/
    if ( *(unsigned char *)(v6 + 305) ) /*0x62e711*/
    {
      v7 = *(unsigned int **)(v6 + 172); /*0x62e71f*/
      v8 = v7[196]; /*0x62e725*/
      if ( v8 != -1 ) /*0x62e72e*/
      {
        v9 = *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_3C[16] + 4 * v8); /*0x62e747*/
        v10 = *(unsigned int *)(v6 + 156) + v7[165]; /*0x62e753*/
        v11 = v7[166]; /*0x62e755*/
        v12 = *(unsigned int *)(v6 + 160); /*0x62e75b*/
        v13 = v7[167]; /*0x62e75e*/
        v24[0] = v10; /*0x62e766*/
        v14 = *(unsigned int *)(v6 + 164); /*0x62e76a*/
        v24[1] = v12 + v11; /*0x62e76d*/
        v24[2] = v14 + v13; /*0x62e773*/
        v15 = (ObjectClass *)RA2_OPNEW(0x138u); /*0x62e777*/
        v2 = this; /*0x62e77c*/
        if ( v15 ) /*0x62e785*/
        {
          v16 = ParticleClass::Construct(v15, v1, v9, v24, COERCE_FLOAT(&dword_AC4A58), (int)this); /*0x62e79e*/
          if ( v16 ) /*0x62e7a2*/
          {
            v17 = this->TargetCoords[1]; /*0x62e7a4*/
            if ( (int)this->Owner < v17 /*0x62e7d5*/
              || (IDA_BYTE1(this->TargetCoords[2]) || !v17)
              && (Target = this->Target, (int)Target > 0)
              && (*(uint8_t (**)(int *, int, unsigned int))(this->Particles[0] + 8))(
                   this->Particles,
                   (int)Target + v17,
                   0) )
            {
              Owner = this->Owner; /*0x62e7dc*/
              v20 = this->TargetCoords[0]; /*0x62e7df*/
              this->Owner = (char *)Owner + 1; /*0x62e7e5*/
              *(unsigned int *)(v20 + 4 * (unsigned int)Owner) = v16; /*0x62e7e8*/
            }
            *(unsigned int *)(v16 + 228) = *(unsigned int *)(v6 + 228); /*0x62e7f7*/
            v21 = (unsigned int *)(v16 + 192); /*0x62e7fd*/
            *v21 = *(unsigned int *)(v6 + 192); /*0x62e805*/
            v21[1] = *(unsigned int *)(v6 + 196); /*0x62e80b*/
            v21[2] = *(unsigned int *)(v6 + 200); /*0x62e811*/
          }
        }
      }
      (*(void (**)(int))(*(unsigned int *)v6 + 248))(v6); /*0x62e818*/
      v4 = j; /*0x62e81e*/
    }
    else
    {
      BuildingClass::AdjustHeight(*(int **)(v5 + 4 * v4)); /*0x62e826*/
    }
    --v4; /*0x62e82b*/
  }
}

// ==== BACKFILL 0x0062F230  ParticleSystemClass::SpawnParticle  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=q294,q2D0,q2E0,q308,q30A,q350,u32_2D8 ====
int ParticleSystemClass::SpawnParticle() {
  int v2; // esi
  int v4; // eax
  float v5; // ebx
  int v6; // ecx
  int v7; // ebp
  int v8; // edx
  int v9; // esi
  double v10; // st7
  double v11; // st7
  float v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // eax
  unsigned int v16; // esi
  unsigned int v17; // ebp
  float *v18; // eax
  float v19; // edx
  int v20; // eax
  double v21; // st7
  int v22; // eax
  double v23; // st7
  int v24; // edx
  int v25; // eax
  int v26; // esi
  int v27; // ebp
  int v28; // ebx
  int *v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  float v34; // ebx
  void *v35; // eax
  float *v36; // esi
  int v37; // eax
  double v38; // st7
  double v39; // st7
  float v40; // eax
  float v41; // ecx
  float v42; // edx
  int v43; // ecx
  double v44; // st7
  double v45; // st6
  double v46; // st7
  bool v47; // cc
  char *v48; // eax
  char v49; // ecx^3
  char v50; // esp^3
  int v52; // eax
  int i; // esi
  int j; // esi
  unsigned char *v55; // ecx
  int v57; // [esp-18h] [ebp-110h]
  int v59[4]; // [esp-10h] [ebp-108h] BYREF
  int64_t v60; // [esp+0h] [ebp-F8h]
  float v61; // [esp+1Ch] [ebp-DCh]
  float v62; // [esp+20h] [ebp-D8h] BYREF
  int v63; // [esp+24h] [ebp-D4h]
  double v64; // [esp+28h] [ebp-D0h]
  int v65; // [esp+34h] [ebp-C4h]
  float v66; // [esp+38h] [ebp-C0h] BYREF
  float v67; // [esp+3Ch] [ebp-BCh]
  float v68; // [esp+40h] [ebp-B8h]
  float v69; // [esp+44h] [ebp-B4h]
  float v70; // [esp+48h] [ebp-B0h]
  float v71; // [esp+4Ch] [ebp-ACh]
  double v72; // [esp+50h] [ebp-A8h]
  int v73; // [esp+58h] [ebp-A0h]
  float v74; // [esp+5Ch] [ebp-9Ch]
  float v77; // [esp+68h] [ebp-90h]
  float v78; // [esp+6Ch] [ebp-8Ch]
  float v79; // [esp+70h] [ebp-88h]
  float v80; // [esp+74h] [ebp-84h]
  float v81; // [esp+78h] [ebp-80h]
  float v82; // [esp+7Ch] [ebp-7Ch]
  unsigned int v83[7]; // [esp+80h] [ebp-78h] BYREF
  float v84; // [esp+9Ch] [ebp-5Ch]
  float v85; // [esp+A0h] [ebp-58h]
  float v86; // [esp+A8h] [ebp-50h]
  float v87; // [esp+ACh] [ebp-4Ch]
  float v88[3]; // [esp+B0h] [ebp-48h] BYREF
  unsigned int v89[3]; // [esp+BCh] [ebp-3Ch] BYREF
  float v90[12]; // [esp+C8h] [ebp-30h] BYREF

  if ( !this->q0F8 && !this->Owner ) /*0x62f250*/
  {
    v2 = this->SparkSpawnFrames; /*0x62f264*/
    v3 = this->Lifetime; /*0x62f26c*/
    v4 = this->location; /*0x62f27b*/
    IDA_LODWORD(v12) = this->SpawnFrames - v4; /*0x62f27d*/
    v6 = this->q0A0; /*0x62f27f*/
    IDA_LODWORD(v69) = this->SpawnFrames - v4; /*0x62f282*/
    v7 = v3 - v6; /*0x62f286*/
    v8 = this->q0A4; /*0x62f288*/
    v70 = *(float *)&v7; /*0x62f28b*/
    v9 = v2 - v8; /*0x62f28f*/
    v71 = *(float *)&v9; /*0x62f291*/
    v64 = (double)v7; /*0x62f29d*/
    v72 = (double)IDA_SLODWORD(v69); /*0x62f2a5*/
    v10 = Math::Sqrt(v72 * v72 + v64 * v64 + (double)v9 * (double)v9); /*0x62f2c2*/
    IDA_LODWORD(v61) = Math::RoundToInt(v10); /*0x62f2dc*/
    v11 = Math::Sqrt(v64 * v64 + v72 * v72); /*0x62f2e9*/
    IDA_LODWORD(v12) = Math::RoundToInt(v11); /*0x62f2f1*/
    *(float *)&v65 = v12; /*0x62f2fa*/
    v63 = v9; /*0x62f300*/
    v62 = v12; /*0x62f304*/
    if ( v9 >= IDA_SLODWORD(v61) ) /*0x62f308*/
    {
      *(float *)&v9 = v61; /*0x62f30a*/
      v63 = IDA_LODWORD(v61); /*0x62f30c*/
    }
    if ( v9 <= -IDA_LODWORD(v61) ) /*0x62f314*/
      v63 = -IDA_LODWORD(v61); /*0x62f316*/
    if ( IDA_SLODWORD(v12) >= IDA_SLODWORD(v12) ) /*0x62f31c*/
    {
      v12 = v12; /*0x62f31e*/
      v62 = v12; /*0x62f320*/
    }
    v13 = -IDA_LODWORD(v12); /*0x62f324*/
    if ( IDA_SLODWORD(v12) <= v13 ) /*0x62f328*/
      v62 = *(float *)&v13; /*0x62f32a*/
    v14 = Math::RoundToInt((double)IDA_SLODWORD(v61) * this->Type->Beam); /*0x62f34a*/
    v14 = v14; /*0x62f34c*/
    v74 = (float)IDA_SLODWORD(v61); /*0x62f350*/
    v61 = BuildingLight::CalcIntensity((double)v63 / v74); /*0x62f364*/
    v62 = Math::ArcTan2_Table((double)IDA_SLODWORD(v62) / (double)v65); /*0x62f378*/
    if ( v7 < 0 ) /*0x62f381*/
      v62 = -v62; /*0x62f389*/
    Matrix3x4::Identity(v90); /*0x62f394*/
    Matrix2D::Rotate(v90, v62); /*0x62f3a5*/
    Matrix3x3::RotateX(v90, v61); /*0x62f3b6*/
    v61 = 0.0; /*0x62f3bd*/
    v63 = 0; /*0x62f3c5*/
    if ( v14 > 0 ) /*0x62f3cd*/
    {
      v82 = (float)v14; /*0x62f3d7*/
      do /*0x62f876*/
      {
        v15 = this->Type; /*0x62f3df*/
        *(float *)&v65 = (double)v63 / v82; /*0x62f3e9*/
        v64 = v74 * *(float *)&v65 * v15->q2D0; /*0x62f3fb*/
        v16 = IDA_HIDWORD(v64); /*0x62f3ff*/
        v17 = IDA_LODWORD(v64); /*0x62f403*/
        v64 = Math::SinCos(v64); /*0x62f40e*/
        v67 = Math::ArcTan2(COERCE_DOUBLE((((v16 & 0xFFFFFFFFull)) << 32 | (v17 & 0xFFFFFFFFull)))); /*0x62f419*/
        v68 = v64; /*0x62f428*/
        v66 = 0.0; /*0x62f43b*/
        v18 = TransformMatrix3x4Point(v88, v90, &v66); /*0x62f443*/
        v66 = *v18; /*0x62f44f*/
        v60 = 0x7FFFFFFE00000000LL; /*0x62f453*/
        v67 = v18[1]; /*0x62f458*/
        v19 = v18[2]; /*0x62f45c*/
        v20 = this->Type; /*0x62f45f*/
        v68 = v19; /*0x62f465*/
        v21 = v20->u32_2D8; /*0x62f469*/
        v69 = v66 * v21; /*0x62f475*/
        v69 = v69; /*0x62f483*/
        v70 = v67 * v21; /*0x62f48d*/
        v77 = v70; /*0x62f4a1*/
        v71 = v19 * v21; /*0x62f4a5*/
        v78 = v71; /*0x62f4af*/
        IDA_LODWORD(v64) = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2147483646); /*0x62f4c5*/
        IDA_LODWORD(v72) = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2147483646); /*0x62f4d4*/
        v73 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2147483646); /*0x62f4ef*/
        v22 = this->Type; /*0x62f4f3*/
        v23 = ((double)v73 * 4.656612877414201e-10 - 0.5) * v22->q2E0; /*0x62f509*/
        v84 = ((double)IDA_SLODWORD(v72) * 4.656612877414201e-10 - 0.5) * v22->q2E0; /*0x62f525*/
        v85 = ((double)IDA_SLODWORD(v64) * 4.656612877414201e-10 - 0.5) * v22->q2E0; /*0x62f548*/
        v24 = this->q0A0; /*0x62f560*/
        v83[3] = this->location; /*0x62f563*/
        v83[4] = v24; /*0x62f56a*/
        v25 = this->q0A4; /*0x62f571*/
        v77 = v84 + v77; /*0x62f574*/
        v83[5] = v25; /*0x62f583*/
        v78 = v85 + v78; /*0x62f58a*/
        v26 = Math::RoundToInt(v23 + v69); /*0x62f597*/
        v27 = Math::RoundToInt(v77); /*0x62f5a2*/
        v28 = Math::RoundToInt(v78); /*0x62f5ad*/
        v29 = Color::RGBFromFloat(v89, &this->q350, *(float *)&v65); /*0x62f5c5*/
        v30 = v29[1]; /*0x62f5ca*/
        v31 = *v29; /*0x62f5cd*/
        v32 = v29[2]; /*0x62f5cf*/
        v83[1] = v27 + v30; /*0x62f5d4*/
        v33 = this->Type; /*0x62f5d8*/
        v83[0] = v26 + v31; /*0x62f5e2*/
        v83[2] = v28 + v32; /*0x62f5e6*/
        if ( v33->q294 == -1 ) /*0x62f5f4*/
        {
          v34 = 0.0; /*0x62f5f6*/
        }
        else
        {
          v35 = RA2_OPNEW(0x138u); /*0x62f5ff*/
          v34 = 0.0; /*0x62f604*/
          if ( v35 ) /*0x62f60b*/
          {
            v62 = COERCE_FLOAT( /*0x62f63e*/
                    ParticleClass::Construct(
                      (int)v35,
                      *((unsigned int *)g_BuildingProductionQueue + this->Type->q294),
                      v83,
                      v83,
                      this));
            if ( v62 != 0.0 ) /*0x62f642*/
            {
              VectorClass::PushBackCopy((unsigned int *)(&this->u32_488), &v62); /*0x62f64f*/
              v34 = v62; /*0x62f654*/
            }
          }
          else
          {
            v62 = 0.0; /*0x62f79a*/
          }
        }
        v36 = (float *)(IDA_LODWORD(v34) + 268); /*0x62f65c*/
        v60 = 0x7FFFFFFE00000000LL; /*0x62f669*/
        *(float *)(IDA_LODWORD(v34) + 268) = v66; /*0x62f66b*/
        *(float *)(IDA_LODWORD(v34) + 272) = v67; /*0x62f671*/
        *(float *)(IDA_LODWORD(v34) + 276) = v68; /*0x62f678*/
        v73 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, v60, (int)(((v60) >> 32) & 0xFFFFFFFFu)); /*0x62f69e*/
        IDA_LODWORD(v72) = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2147483646); /*0x62f6b4*/
        IDA_LODWORD(v64) = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2147483646); /*0x62f6c3*/
        v37 = this->Type; /*0x62f6c7*/
        v38 = ((double)IDA_SLODWORD(v64) * 4.656612877414201e-10 - 0.5) * v37->q2E8; /*0x62f6e0*/
        v86 = ((double)IDA_SLODWORD(v72) * 4.656612877414201e-10 - 0.5) * v37->q2E8; /*0x62f6fc*/
        v87 = ((double)v73 * 4.656612877414201e-10 - 0.5) * v37->q2E8; /*0x62f719*/
        *(float *)(IDA_LODWORD(v34) + 268) = v38 + *(float *)(IDA_LODWORD(v34) + 268); /*0x62f722*/
        *(float *)(IDA_LODWORD(v34) + 272) = v86 + *(float *)(IDA_LODWORD(v34) + 272); /*0x62f72e*/
        *(float *)(IDA_LODWORD(v34) + 276) = v87 + *(float *)(IDA_LODWORD(v34) + 276); /*0x62f73b*/
        v39 = Math::Sqrt( /*0x62f75f*/
                *v36 * *v36
              + *(float *)(IDA_LODWORD(v34) + 272) * *(float *)(IDA_LODWORD(v34) + 272)
              + *(float *)(IDA_LODWORD(v34) + 276) * *(float *)(IDA_LODWORD(v34) + 276));
        if ( v39 == 0.0 ) /*0x62f772*/
        {
          v40 = *v36; /*0x62f7a7*/
          v41 = *(float *)(IDA_LODWORD(v34) + 272); /*0x62f7a9*/
          v42 = *(float *)(IDA_LODWORD(v34) + 276); /*0x62f7ac*/
        }
        else
        {
          v79 = *v36 / v39; /*0x62f778*/
          v40 = v79; /*0x62f781*/
          v80 = *(float *)(IDA_LODWORD(v34) + 272) / v39; /*0x62f785*/
          v41 = v80; /*0x62f789*/
          v81 = *(float *)(IDA_LODWORD(v34) + 276) / v39; /*0x62f790*/
          v42 = v81; /*0x62f794*/
        }
        *v36 = v40; /*0x62f7af*/
        *(float *)(IDA_LODWORD(v34) + 272) = v41; /*0x62f7b1*/
        *(float *)(IDA_LODWORD(v34) + 276) = v42; /*0x62f7b4*/
        IDA_LODWORD(v64) = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2147483646); /*0x62f7ce*/
        v43 = this->Type; /*0x62f7d2*/
        v44 = ((double)IDA_SLODWORD(v64) * 4.656612877414201e-10 + v61 - 0.5) * (v43->q2F0 * 0.5); /*0x62f7f8*/
        if ( v43->q2F0 <= v44 ) /*0x62f809*/
          v45 = v43->q2F0; /*0x62f80f*/
        else
          v45 = v44; /*0x62f80b*/
        v64 = -v43->q2E8; /*0x62f81d*/
        if ( v45 <= v64 ) /*0x62f82a*/
        {
          v44 = v64; /*0x62f849*/
        }
        else if ( v43->q2F0 <= v44 ) /*0x62f83b*/
        {
          v44 = v43->q2F0; /*0x62f83f*/
        }
        v61 = v44; /*0x62f84d*/
        v46 = v61 + *(float *)(*(unsigned int *)(IDA_LODWORD(v34) + 172) + 764); /*0x62f85f*/
        v47 = ++v63 < v14; /*0x62f86a*/
        *(float *)(IDA_LODWORD(v34) + 228) = v46; /*0x62f870*/
      }
      while ( v47 ); /*0x62f876*/
    }
    if ( this->Type->u8_30B ) /*0x62f882*/
    {
      v48 = (char *)RA2_OPNEW(0x5Cu); /*0x62f892*/
      if ( v48 ) /*0x62f89c*/
      {
        v60 = 1056964608; /*0x62f8a4*/
        v59[3] = 1; /*0x62f8a9*/
        v59[2] = 0; /*0x62f8ab*/
        v59[1] = 10; /*0x62f8ad*/
        IDA_HIBYTE(v59[0]) = v49; /*0x62f8af*/
        (v63) = ((v63) & ~0xFFFF) | ((0) & 0xFFFF); /*0x62f8b0*/
        v50 = v50; /*0x62f8bf*/
        IDA_LOWORD(v59[0]) = 0; /*0x62f8c5*/
        IDA_LOWORD(v61) = 0; /*0x62f8c8*/
        v59 = v59; /*0x62f8cc*/
        IDA_BYTE2(v59[0]) = 0; /*0x62f8d1*/
        IDA_HIBYTE(v57) = v50; /*0x62f8db*/
        (v59) = ((v59) & ~0xFFFF) | ((0) & 0xFFFF); /*0x62f8dc*/
        (v59) = ((v59) & ~(0xFF << 16)) | (((0) & 0xFF) << 16); /*0x62f8e5*/
        IDA_LOWORD(v57) = this->Type->q308; /*0x62f8fa*/
        IDA_BYTE2(v57) = this->Type->q30A; /*0x62f900*/
        TimerClass::Construct( /*0x62f940*/
          v48,
          this->location,
          this->q0A0,
          this->q0A4,
          this->SpawnFrames,
          this->Lifetime,
          this->SparkSpawnFrames,
          0,
          1,
          v57,
          (int)v59,
          v59[0],
          10,
          0,
          1,
          1056964608,
          0);
      }
    }
    this->q0F8 = 1; /*0x62f945*/
  }
  v52 = this->Owner; /*0x62f94c*/
  for ( i = 0; i < v52; ++i ) /*0x62f956*/
  {
    ParticleClass::Dispatch(*(unsigned int *)(this->TargetCoords + 4 * i)); /*0x62f961*/
    v52 = this->Owner; /*0x62f966*/
  }
  for ( j = this->Owner - 1; j >= 0; --j ) /*0x62f978*/
  {
    v55 = *(unsigned char **)(this->TargetCoords + 4 * j); /*0x62f980*/
    IDA_LOBYTE(v52) = v55[305]; /*0x62f983*/
    if ( (unsigned char)v52 ) /*0x62f98b*/
      IDA_LOBYTE(v52) = (*(int (**)(unsigned char *))(*(unsigned int *)v55 + 248))(v55); /*0x62f98f*/
  }
  return v52; /*0x62f998*/
}

// ==== BACKFILL 0x0062FD60  ParticleSystemClass::Update  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=q2B4 ====
int ParticleSystemClass::Update() {
  int v2; // eax
  int Owner; // eax

  switch ( this->Type->q2B4 ) /*0x62fd74*/
  {
    case 0: /*0x62fd74*/
      UpdateBuildingParticleSystem((TechnoClass *)this); /*0x62fd7d*/
      break; /*0x62fd82*/
    case 1: /*0x62fd74*/
      ParticleSystemClass::UpdateAllParticles(this); /*0x62fd86*/
      break; /*0x62fd8b*/
    case 2: /*0x62fd74*/
      UpdateBuildingDamageParticles((char *)this); /*0x62fd8f*/
      break; /*0x62fd94*/
    case 3: /*0x62fd74*/
      UpdateProductionParticleSystem((TechnoClass *)this); /*0x62fd98*/
      break; /*0x62fd9d*/
    case 4: /*0x62fd74*/
      ParticleSystemClass::SpawnParticle(this); /*0x62fda1*/
      break; /*0x62fda1*/
    default:
      break;
  }
  v2 = *(unsigned int *)&this->__pad_E5[7] - 1; /*0x62fda6*/
  *(unsigned int *)&this->__pad_E5[7] = v2; /*0x62fdad*/
  if ( !v2 ) /*0x62fdb3*/
    (*(void (**)(ParticleSystemClass *))(this->ptr_0 + 248))(this); /*0x62fdb9*/
  IDA_LOBYTE(Owner) = this->isAliveFlag[0]; /*0x62fdbf*/
  if ( (unsigned char)Owner ) /*0x62fdc7*/
  {
    (Owner) = ((Owner) & ~0xFF) | ((this->__pad_E5[19]) & 0xFF); /*0x62fdc9*/
    if ( (unsigned char)Owner ) /*0x62fdd1*/
    {
      Owner = this->Owner; /*0x62fdd3*/
      if ( !Owner ) /*0x62fddb*/
      {
        (*(void (**)(ParticleSystemClass *))(this->ptr_0 + 212))(this); /*0x62fde1*/
        this->isAliveFlag[0] = 0; /*0x62fde7*/
        IDA_LOBYTE(Owner) = stru_B0F698.Capacity; /*0x62fdee*/
        if ( stru_B0F698.Count < stru_B0F698.Capacity /*0x62fe28*/
          || (stru_B0F698.IsAllocated[0] || !stru_B0F698.Capacity)
          && stru_B0F698.CapacityIncrement > 0
          && (IDA_LOBYTE(Owner) = (*(int (**)(DynamicVectorClass *, int, unsigned int))(stru_B0F698.ptr_0 + 8))(
                                &stru_B0F698,
                                stru_B0F698.Capacity + stru_B0F698.CapacityIncrement,
                                0),
              (unsigned char)Owner) )
        {
          Owner = stru_B0F698.Count++; /*0x62fe30*/
          *(unsigned int *)(stru_B0F698.Items + 4 * Owner) = this; /*0x62fe3f*/
        }
      }
    }
  }
  return Owner; /*0x62fe42*/
}

// ==== BACKFILL 0x0062FE80  ParticleSystemClass::StubReturn2  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleSystemClass::StubReturn2()
{

  return 2; /*0x62fe85*/

}

// ==== BACKFILL 0x0062FE90  ParticleSystemClass::UpdateSystem  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleSystemClass::UpdateSystem(int a1, int a1_2) {
  int v4; // edx
  int v5; // eax
  char *Owner; // ecx
  char *v7; // ecx
  int result; // eax

  Object::Unlink((ObjectClass *)this); /*0x62fe9f*/
  v4 = this->Particles[0]; /*0x62fea4*/
  a1 = a1; /*0x62feb7*/
  v5 = (*(int (**)(int *, int *))(v4 + 16))(this->Particles, &a1); /*0x62febb*/
  if ( v5 != -1 ) /*0x62fec1*/
  {
    Owner = (char *)this->Owner; /*0x62fec3*/
    if ( v5 < (int)Owner ) /*0x62fec8*/
    {
      v7 = Owner - 1; /*0x62feca*/
      for ( this->Owner = v7; /*0x62fed0*/
            v5 < (int)this->Owner;
            *(unsigned int *)(this->TargetCoords[0] + 4 * v5 - 4) = *(unsigned int *)(this->TargetCoords[0] + 4 * v5) )
      {
        ++v5; /*0x62fed5*/
      }
    }
  }
  result = 0; /*0x62feea*/
  if ( (ParticleSystemTypeClass *)a1 == this->Type ) /*0x62feee*/
    this->Type = 0; /*0x62fef0*/
  if ( a1 == *(unsigned int *)&this->TimeToDie ) /*0x62fefc*/
    *(unsigned int *)&this->TimeToDie = 0; /*0x62fefe*/
  if ( a1 == this->SpotlightRadius ) /*0x62ff0a*/
  {
    this->__pad_E5[19] = 1; /*0x62ff0c*/
    this->SpotlightRadius = 0; /*0x62ff13*/
  }
  return result; /*0x62ff19*/
}
