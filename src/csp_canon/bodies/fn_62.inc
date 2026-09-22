// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00620720  DrawScrollArrowUI  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void DrawScrollArrowUI(int * a0, unsigned int * a1, ObjectClass * aP2, int a4, char a5)
{
{
    char v7;
    ObjectClass *v8;
    int v9;
    int v10;
    ObjectClass *v11;
    int v12;
    int v13;
    int v14[2];
    int v15;
    ObjectClass *v16;
    int v17[4];
    char Buffer[32];
    if ( a0 )
  {
    v7 = 114;
    if ( a4 )
    v7 = 112;
    if ( aP2 )
    sprintf(Buffer, (ObjectClass *)&DataGlobal_830620[24000], (INIClass *)v7);
    else
    sprintf(Buffer, (ObjectClass *)&DataGlobal_830620[23984], (INIClass *)v7);
    v8 = (ObjectClass *)HashTable::Find(&g_MatrixTransformState + 5774, &Buffer[a5 == 0], 0);
    if ( v8 )
    {
    v9 = *((int*)(a1) + 1);
    v10 = *((int*)(a1) + 2);
    v14[0] = *a1;
    v11 = (ObjectClass *)*((int*)(a1) + 3);
    v14[1] = v9;
    v15 = v10;
    v16 = v11;
    v15 = (*(int (__thiscall **)(ObjectClass *))(*(int *)v8->__pad_0 + 124))(v8);
    v16 = (ObjectClass *)(*(int (__thiscall **)(ObjectClass *))(*(int *)v8->__pad_0 + 128))(v8);
    v17[1] = 0;
    v17[0] = 0;
    v17[2] = (*(int (__thiscall **)(ObjectClass *))(*(int *)v8->__pad_0 + 124))(v8);
    v12 = (*(int (__thiscall **)(ObjectClass *))(*(int *)v8->__pad_0 + 128))(v8);
    v13 = *a0;
    v17[3] = v12;
    (*(void (__thiscall **)(int *, int *, ObjectClass *, int *, int, int))(v13 + 8))(a0, v14, v8, v17, 0, 1);
    }
  }
}
}

// ==== BACKFILL 0x00620F60  Surface_Render  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Surface_Render(ObjectClass * aP0, unsigned short * a1, int * yTop, unsigned char * a3, int aP1, int a6)
{
{
    AbstractClass *v6;
    int v8;
    AbstractClass *v9;
    AbstractClass *v10;
    int v12;
    int *yTopa;
    AbstractClass *aP1a;
    v6 = (AbstractClass *)a3;
    v8 = yTop[2];
    v9 = (AbstractClass *)(yTop[3] - yTop[1]);
    yTopa = (int *)yTop[1];
    v10 = (AbstractClass *)(v8 - *yTop);
    aP1a = (AbstractClass *)(((unsigned char)aP1 >> DataGlobal_89E138[11420] << DataGlobal_89E138[11416]) | (BYTE2(aP1) >> DataGlobal_89E138[11428] << DataGlobal_89E138[11424]) | (BYTE1(aP1) >> DataGlobal_89E138[11436] << DataGlobal_89E138[11432]));
    v12 = *yTop;
    if ( !a3 )
    v6 = ::aP0;
    Char::Swap(v6, (ObjectClass *)1);
    TextGroup::SetRect(v6, (AbstractClass *)yTop);
    Property::Set(v6, aP1a);
    Font::Print(v6, (AbstractClass *)aP0, (AbstractClass *)a1, v12, (AbstractClass *)yTopa, v10, v9, 0, 0, 0);
    return 0;
}
}

// ==== BACKFILL 0x00622800  Dialog::Show  cls=Dialog  sig=csp  renamed_refs=0  residual=- ====
HWND Dialog::Show()
{
{
    ShowWindow(this, 1);
    SetForegroundWindow(this);
    return Timer::PumpMessages((HWND *)g_BinkMoviePlayer);
}
}

// ==== BACKFILL 0x00623120  Dialog::PumpMessages  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char Dialog::PumpMessages()
{
{
    MessageLoop();
    if ( !g_GameMode_Current || g_GameMode_Current == 5 || g_NetworkQuitFlag || g_GameFlags_Campaign )
  {
    Event::Dispatch();
  }
    else if ( !(unsigned char)VtableStub::Method_55CBF0() && GameFrameLoop() )
  {
    return 1;
  }
    return 0;
}
}

// ==== BACKFILL 0x00623170  UI_Connect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL UI_Connect(HWND hWnd, LONG a2, LONG a3)
{
{
    LONG v5;
    LONG v6;
    struct tagRECT Rect;
    struct tagPOINT Point;
    struct tagPOINT v10;
    v10 = *(struct tagPOINT *)&g_DisplayWidth;
    Point.x = 0;
    Point.y = 0;
    ClientToScreen(g_hWnd, &Point);
    ClientToScreen(g_hWnd, &v10);
    GetWindowRect(hWnd, &Rect);
    Rect.right -= Rect.left;
    Rect.bottom -= Rect.top;
    if ( a2 == -1 )
    v5 = Rect.left - Point.x;
    else
    v5 = a2;
    Rect.left = v5;
    if ( a3 == -1 )
    v6 = Rect.top - Point.y;
    else
    v6 = a3;
    Rect.top = v6;
    return MoveWindow(hWnd, v5, v6, Rect.right, Rect.bottom, 0);
}
}

// ==== BACKFILL 0x006232B0  sub_6232B0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_6232B0(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
{
    int result;
    char *WindowLongA;
    result = BaseDialogProc(hWnd, a2, a3, a4);
    if ( !result )
  {
    if ( a2 == 273 && a3 == 1472 )
    {
    WindowLongA = (char *)GetWindowLongA(hWnd, 8);
    if ( WindowLongA )
      {
    EventBuffer::Enqueue(g_BinkMoviePlayer, 27);
    *WindowLongA = 1;
      }
    }
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x00623310  Network_Start  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL Network_Start(HWND hWnd, LPARAM lParam)
{
{
    HWND DlgItem;
    DlgItem = GetDlgItem(hWnd, 1456);
    SendMessageA(DlgItem, 0x4B2u, 0, lParam);
    return UpdateWindow(hWnd);
}
}

// ==== BACKFILL 0x006235B0  sub_6235B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_6235B0::sub_6235B0(wchar_t * Format)
{
{
    wchar_t *v3;
    if ( this->M40 )
  {
    __3_YAXPAX_Z(this->M40);
    this->M40 = 0;
  }
    if ( Format )
  {
    if ( *(char *)Format )
    {
    v3 = (wchar_t *)__2_YAPAXI_Z(2 * strlen((const char *)Format) + 2);
    this->M40 = v3;
    swprintf(v3, (const size_t)g_Str_Trace__hs, Format);
    }
  }
}
}

// ==== BACKFILL 0x00623CD0  CD::CreateDialog  cls=CD  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool CD::CreateDialog() {
{
    ObjectClass *Dialog;
    ObjectClass *v3;
    HWND DlgItem;
    LONG dwNewLong;
    dwNewLong = -1;
    Dialog = (ObjectClass *)CreateDialog(0x10Du, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_623DA0, 0);
    v3 = Dialog;
    if ( Dialog )
  {
    DlgItem = GetDlgItem((HWND)Dialog, 1456);
    SendMessageA(DlgItem, 0x4B2u, 0, lParam);
    SetWindowLongA((HWND)v3, 8, (LONG)&dwNewLong);
    ShowWindow((HWND)v3, 1);
    SetForegroundWindow((HWND)v3);
    Timer::PumpMessages((HWND *)g_BinkMoviePlayer);
    if ( dwNewLong < 0 )
    {
    do
    MessageLoop();
    while ( (!g_GameMode_Current[0] || g_GameMode_Current[0] == 5 || g_NetworkQuitFlag || g_GameFlags_Campaign || VtableStub::Method_55CBF0() || !GameFrameLoop()) && dwNewLong < 0 );
    }
    Dialog::Destroy((HWND)v3);
  }
    return dwNewLong == 1473;
}
} }

// ==== BACKFILL 0x00623DA0  sub_623DA0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_623DA0(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
{
    int result;
    int *WindowLongA;
    result = BaseDialogProc(hWnd, a2, a3, a4);
    if ( !result )
  {
    WindowLongA = (int *)GetWindowLongA(hWnd, 8);
    if ( a2 == 273 && (unsigned short)a3 >= 0x5C0u && (unsigned short)a3 <= 0x5C1u )
    *WindowLongA = (unsigned short)a3;
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x00623EA0  GetEditControlText  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT GetEditControlText(HWND hWnd, void ** a2)
{
{
    LRESULT v4;
    wchar_t *v6;
    LRESULT v7;
    v4 = SendMessageA(hWnd, 0xEu, 0, 0);
    if ( v4 > 0 )
  {
    v6 = (wchar_t *)__2_YAPAXI_Z(2 * v4 + 4);
    v7 = SendMessageA(hWnd, 0x4B3u, v4 + 1, (LPARAM)v6);
    WideString::Assign_Alt(a2, v6);
    __3_YAXPAX_Z(v6);
    return v7;
  }
    else
  {
    SafeDelete::Ptr(a2);
    return 0;
  }
}
}

// ==== BACKFILL 0x00623F00  GetListBoxItemText  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT GetListBoxItemText(ObjectClass * aP0, WPARAM wParam, void ** a2)
{
{
    LRESULT v5;
    CCINIClass *v6;
    LRESULT v7;
    v5 = SendMessageA((HWND)aP0, 0x18Au, wParam, 0);
    if ( v5 <= 0 )
    DeleteAndZero::Alt2(a2);
    v6 = (CCINIClass *)__2_YAPAXI_Z(v5 + 2);
    v7 = SendMessageA((HWND)aP0, 0x4B7u, wParam, (LPARAM)v6);
    String::Assign_Alt(a2, v6);
    __3_YAXPAX_Z(v6);
    return v7;
}
}

// ==== BACKFILL 0x00623F60  UI_Assign_623F60  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT UI_Assign_623F60(HWND hWnd, WPARAM wParam, void ** a3)
{
{
    LRESULT v5;
    wchar_t *v6;
    LRESULT v7;
    v5 = SendMessageA(hWnd, 0x18Au, wParam, 0);
    if ( v5 <= 0 )
    SafeDelete::Ptr(a3);
    v6 = (wchar_t *)__2_YAPAXI_Z(2 * v5 + 4);
    v7 = SendMessageA(hWnd, 0x4B6u, wParam, (LPARAM)v6);
    WideString::Assign_Alt(a3, v6);
    __3_YAXPAX_Z(v6);
    return v7;
}
}

// ==== BACKFILL 0x00623FC0  OptionsDlgProcWOL_Assign  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT OptionsDlgProcWOL_Assign(ObjectClass * aP0, WPARAM wParam, void ** a2)
{
{
    LRESULT v5;
    CCINIClass *v6;
    LRESULT v7;
    v5 = SendMessageA((HWND)aP0, 0x149u, wParam, 0);
    if ( v5 <= 0 )
    DeleteAndZero::Alt2(a2);
    v6 = (CCINIClass *)__2_YAPAXI_Z(v5 + 2);
    v7 = SendMessageA((HWND)aP0, 0x4BDu, wParam, (LPARAM)v6);
    String::Assign_Alt(a2, v6);
    __3_YAXPAX_Z(v6);
    return v7;
}
}

// ==== BACKFILL 0x00624020  MainLobbyDlgProcWOL_Assign  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT MainLobbyDlgProcWOL_Assign(HWND hWnd, WPARAM wParam, void ** a3)
{
{
    LRESULT v5;
    wchar_t *v6;
    LRESULT v7;
    v5 = SendMessageA(hWnd, 0x149u, wParam, 0);
    if ( v5 <= 0 )
    SafeDelete::Ptr(a3);
    v6 = (wchar_t *)__2_YAPAXI_Z(2 * v5 + 4);
    v7 = SendMessageA(hWnd, 0x4C3u, wParam, (LPARAM)v6);
    WideString::Assign_Alt(a3, v6);
    __3_YAXPAX_Z(v6);
    return v7;
}
}

// ==== BACKFILL 0x00624080  sub_624080  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_624080::sub_624080()
{
{
    this->vfptr = &vt_OwnerDraw_DialogControl;
    return &this->vfptr;
}
}

// ==== BACKFILL 0x00624090  sub_624090  cls=DialogControl@OwnerDraw  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_624090::sub_624090()
{
{
    this->vfptr = &vt_OwnerDraw_DialogControl;
}
}

// ==== BACKFILL 0x006241C0  ObjectClass::Release  cls=SimpleDialogControl@OwnerDraw  sig=csp  renamed_refs=0  residual=- ====
char ObjectClass::Release()
{
{
    return (unsigned char)this->vtable2;
}
}

// ==== BACKFILL 0x006241D0  ObjectClass::GetMember01  cls=SimpleDialogControl@OwnerDraw  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetMember01()
{
{
    return this->vtable1;
}
}

// ==== BACKFILL 0x00624460  Options::ClearComboBoxes  cls=Options  sig=csp  renamed_refs=0  residual=- ====
void Options::ClearComboBoxes()
{
{
    DeleteAndZero::Alt(this + 2);
    DeleteAndZero::Alt(this + 1);
}
}

// ==== BACKFILL 0x006247D0  Struct::WideStringCopy  cls=Struct  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* Struct::WideStringCopy(int a1) {
{
      *this = *(wchar_t **)aP1->__pad_0;
      WideString::AssignFromPtr(this + 1, (const wchar_t **)&aP1->__pad_0[4]);
      WideString::AssignFromPtr(this + 2, (const wchar_t **)&aP1->__pad_0[8]);
      this->q00C = *(wchar_t **)&aP1->__pad_0[12];
      this->q010 = (wchar_t *)aP1->uniqueId;
      this->q014 = (wchar_t *)aP1->abstractFlags;
      return this;
}
} }

// ==== BACKFILL 0x00624810  DynamicVector::GrowCapacity  cls=DynamicVector  sig=csp  renamed_refs=3  residual=- ====
char DynamicVector::GrowCapacity()
{
{
    int v2;
    int v4;
    void *v5;
    const void *v6;
    int v7;
    v2 = *(void**)this;
    if ( *(void**)this < this->Items )
    return 0;
    v4 = 2 * v2;
    if ( 2 * v2 < 10 )
    v4 = 10;
    v5 = __2_YAPAXI_Z(24 * v4);
    memset(v5, 0, 4 * ((unsigned int)(24 * v4) >> 2));
    v7 = (int)v5;
    v6 = (const void *)this->q008;
    if ( v6 )
    qmemcpy(v5, v6, 24 * *(void**)this);
    __3_YAXPAX_Z((void *)this->q008);
    this->Items = v4;
    this->q008 = v7;
    return 1;
}
}

// ==== BACKFILL 0x00625070  HashTable::ComputeHash  cls=HashTable  sig=csp  renamed_refs=0  residual=- ====
int HashTable::ComputeHash(int a2)
{
{
    return (*(int (__thiscall **)(int))(this + 24))(a2) & ((1 << this->HashTable_field_0x0C) - 1);
}
}

// ==== BACKFILL 0x00625990  ComboBoxOwnerDraw::GrowBuffer  cls=ComboBoxOwnerDraw  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ComboBoxOwnerDraw::GrowBuffer() {
{
      int v2;
      int v4;
      void *v5;
      int v6;

      v2 = *this;
      if ( *this < this->q004 )
        return 0;
      v4 = 2 * v2;
      v6 = 2 * v2;
      if ( 2 * v2 < 10 )
      {
        v6 = 10;
        v4 = 10;
      }
      v5 = __2_YAPAXI_Z(4 * v4);
      memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2));
      if ( this->q008 )
      {
        qmemcpy(v5, (const void *)this->q008, 4 * *this);
        v4 = v6;
      }
      __3_YAXPAX_Z((void *)this->q008);
      this->q004 = v4;
      this->q008 = (int)v5;
      return 1;
}
} }

// ==== BACKFILL 0x00625AE0  LinkedList::PushFront  cls=LinkedList  sig=csp  renamed_refs=0  residual=- ====
int LinkedList::PushFront(IUnknown * aP1)
{
{
    aP1->field_C = this->Tail;
    this->Tail = aP1;
    return (int)aP1;
}
}

// ==== BACKFILL 0x00626020  sub_626020  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_626020::sub_626020(int a2)
{
{
    char *result;
    char *v3;
    int v4;
    char *v5;
    int v6;
    char *v7;
    result = this;
    v3 = this + 2;
    v4 = 256;
    do
  {
    *(v3 - 2) = 0;
    *(v3 - 1) = 0;
    *v3 = 0;
    v3 += 3;
    --v4;
  }
    while ( v4 );
    v5 = this;
    v6 = 256;
    do
  {
    v7 = v5;
    v5 += 3;
    --v6;
    *(short *)v7 = *(short *)a2;
    v7[2] = *(char *)(a2 + 2);
  }
    while ( v6 );
    return result;
}
}

// ==== BACKFILL 0x00626070  sub_626070  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void * E4Recv_626070::sub_626070(const void * a2)
{
{
    void *result;
    char *v3;
    int v4;
    result = this;
    v3 = this + 2;
    v4 = 256;
    do
  {
    *(v3 - 2) = 0;
    *(v3 - 1) = 0;
    *v3 = 0;
    v3 += 3;
    --v4;
  }
    while ( v4 );
    qmemcpy(result, a2, 0x300u);
    return result;
}
}

// ==== BACKFILL 0x006260A0  sub_6260A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool E4Recv_6260A0::sub_6260A0(const void * a2)
{
{
    return this == a2 || memcmp(this, a2, 0x300u) == 0;
}
}

// ==== BACKFILL 0x006260D0  Block::Copy  cls=Block  sig=csp  renamed_refs=0  residual=- ====
void * Block::Copy(const void * a2)
{
{
    void *result;
    result = this;
    if ( this != a2 )
    qmemcpy(this, a2, 0x300u);
    return result;
}
}

// ==== BACKFILL 0x006260F0  sub_6260F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned char E4Recv_6260F0::sub_6260F0(ObjectClass * aP1)
{
{
    int v3;
    unsigned char result;
    v3 = 256;
    do
  {
    result = Color::Lerp(this, aP1, &DataGlobal_A83CD9);
    this += 3;
    --v3;
  }
    while ( v3 );
    return result;
}
}

// ==== BACKFILL 0x00626170  sub_626170  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned char E4Recv_626170::sub_626170(ObjectClass * aP1, int a3)
{
{
    int i;
    unsigned char result;
    for ( i = 0; i < 256; ++i )
  {
    if ( *(char *)(i + a3) )
    result = Color::Lerp(this, aP1, &DataGlobal_A83CD9);
    this += 3;
  }
    return result;
}
}

// ==== BACKFILL 0x006261B0  sub_6261B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned char E4Recv_6261B0::sub_6261B0(ObjectClass * aP1, int a3, int a4)
{
{
    int i;
    unsigned char result;
    for ( i = 0; i < 256; ++i )
  {
    result = a4;
    if ( *(char *)(i + a4) )
    result = Color::Lerp(this, aP1, (unsigned char *)(a3 + 2 * (i % 256) + i % 256));
    this += 3;
  }
    return result;
}
}

// ==== BACKFILL 0x00626200  Palette::FindClosestColor  cls=Palette  sig=csp  renamed_refs=0  residual=- ====
int Palette::FindClosestColor(int a2)
{
{
    int v2;
    int v3;
    int v5;
    char *v7;
    int v8;
    v2 = 0;
    v8 = 0;
    v3 = -1;
    do
  {
    v7 = this;
    this += 3;
    v5 = Palette::CalcColorDistance(v7);
    if ( v3 == -1 || v5 < v3 )
    {
    v3 = v5;
    v8 = v2;
    }
    ++v2;
  }
    while ( v2 < 256 );
    return v8;
}
}

// ==== BACKFILL 0x00626250  sub_626250  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_626250::sub_626250(const char * a2, int a3)
{
{
    strcpy((char *)this, a2);
    this->M256 = a3;
    return this;
}
}

// ==== BACKFILL 0x00626290  sub_626290  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_626290::sub_626290()
{
{
    int v2;
    int v3;
    int i;
    int v5;
    void *v6;
    void (__thiscall ***v7)(int, int);
    v2 = this->M256;
    if ( v2 )
  {
    v3 = *(int *)(v2 + 16);
    for ( i = 0; i < v3; ++i )
    {
    v5 = *(int *)(this->M256 + 4);
    v6 = *(void **)(v5 + 4 * i);
    if ( v6 )
      {
    ColorScheme::Destructor(*(int *)(v5 + 4 * i));
    __3_YAXPAX_Z(v6);
      }
    }
    v7 = (void (__thiscall ***)(int, int))this->M256;
    if ( v7 )
    (**v7)(v7, 1);
    this->M256 = 0;
  }
}
}

// ==== BACKFILL 0x006262F0  sub_6262F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6262F0::sub_6262F0(int a2)
{
{
    int result;
    int v4;
    int i;
    int v6;
    void *v7;
    void (__thiscall ***v8)(int, int);
    result = this->M256;
    if ( result )
  {
    v4 = *(int *)(result + 16);
    for ( i = 0; i < v4; ++i )
    {
    v6 = *(int *)(this->M256 + 4);
    v7 = *(void **)(v6 + 4 * i);
    if ( v7 )
      {
    ColorScheme::Destructor(*(int *)(v6 + 4 * i));
    __3_YAXPAX_Z(v7);
      }
    }
    v8 = (void (__thiscall ***)(int, int))this->M256;
    if ( v8 )
    (**v8)(v8, 1);
    this->M256 = 0;
    this->M256 = a2;
    return a2;
  }
    else
  {
    this->M256 = a2;
  }
    return result;
}
}

// ==== BACKFILL 0x00626370  FileSystem::mountDrive  cls=FileSystem  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void FileSystem::mountDrive() {
{
      int v2;
      int v3;
      int i;
      int v5;
      void *v6;
      void (__thiscall ***v7)(_DWORD, int); // ecx

      v2 = this->q100;
      if ( v2 )
      {
        v3 = *(_DWORD *)(v2 + 16);
        for ( i = 0; i < v3; ++i )
        {
          v5 = *(_DWORD *)(this->q100 + 4);
          v6 = *(void **)(v5 + 4 * i);
          if ( v6 )
          {
            ColorScheme::Destructor(*(_DWORD *)(v5 + 4 * i));
            __3_YAXPAX_Z(v6);
          }
        }
        v7 = (void (__thiscall ***)(_DWORD, int))this->q100;
        if ( v7 )
          (**v7)(v7, 1);
        this->q100 = 0;
      }
}
} }

// ==== BACKFILL 0x00627170  FileSystem::findFile  cls=FileSystem  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* FileSystem::findFile() {
{
      _DWORD *v1;
      _DWORD *v2;
      _DWORD *v3;
      _DWORD *v4;
      _DWORD *v5;
      int v6;
      _DWORD *v7;
      _DWORD *v8;
      _DWORD *v9;
      int v10;
      int v11;
      int v12;
      _DWORD *v14;

      v1 = this;
      *this = -1;
      v2 = __2_YAPAXI_Z(0x18u);
      if ( v2 )
      {
        v2[1] = 0;
        v2[2] = 0;
        *((_BYTE *)v2 + 12) = 1;
        *((_BYTE *)v2 + 13) = 0;
        *v2 = &vt_DynamicVectorClass_char;
        v2[5] = 10;
        v2[4] = 0;
      }
      else
      {
        v2 = 0;
      }
      v1[1] = v2;
      v3 = __2_YAPAXI_Z(0x18u);
      if ( v3 )
      {
        v3[1] = 0;
        v3[2] = 0;
        *((_BYTE *)v3 + 12) = 1;
        *((_BYTE *)v3 + 13) = 0;
        *v3 = &vt_DynamicVectorClass_HSVClass;
        v3[5] = 10;
        v3[4] = 0;
      }
      else
      {
        v3 = 0;
      }
      v1[2] = v3;
      v4 = __2_YAPAXI_Z(0x10u);
      v5 = v4;
      if ( v4 )
      {
        v6 = 31;
        v4[1] = HashStringMod31;
        v4[2] = 31;
        v4[3] = 10;
        v7 = __2_YAPAXI_Z(0x2ECu);
        if ( v7 )
        {
          *v7 = 31;
          v14 = v7 + 1;
          v8 = v7 + 1;
          do
          {
            FileSystem::writeFile(v8, 0, 0);
            *v8 = &vt_DynamicVectorClass_HashObject_HashString_SchemeNode;
            v8[5] = 10;
            v8[4] = 0;
            v8 += 6;
            --v6;
          }
          while ( v6 );
          v9 = v14;
          v1 = this;
        }
        else
        {
          v9 = 0;
        }
        v10 = v5[2];
        *v5 = v9;
        v11 = 0;
        if ( v10 > 0 )
        {
          v12 = 0;
          do
          {
            ++v11;
            *(_DWORD *)(*v5 + v12 + 20) = 10;
            v12 += 24;
          }
          while ( v11 < v5[2] );
        }
        v1[3] = v5;
        return v1;
      }
      else
      {
        v1[3] = 0;
        return v1;
      }
}
} }

// ==== BACKFILL 0x006274F0  sub_6274F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6274F0::sub_6274F0(ObjectClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int i;
    int v7;
    ObjectClass String;
    String::CopyUpper(String[0], aP1);
    v3 = this->M12;
    v4 = *(int *)(v3) + 24 * ((*(int (__thiscall **)(ObjectClass *))(v3 + 4))(&String) % *(int *)(v3 + 8));
    v5 = *(int *)(v4 + 16) - 1;
    if ( v5 < 0 )
    return 0;
    for ( i = 260 * v5; ; i -= 260 )
  {
    v7 = *(int *)(v4 + 4) + i;
    if ( String::Equals((const char *)v7, &String) )
    break;
    if ( --v5 < 0 )
    return 0;
  }
    if ( v7 == -256 )
    return 0;
    else
    return *(int *)(*(int *)(v7 + 256) + 256);
}
}

// ==== BACKFILL 0x00628740  FileSystem::readFile  cls=FileSystem  sig=csp  renamed_refs=0  residual=q00D ====
namespace gamemd { int FileSystem::readFile() {
{
      this->q00C = 1;
      this->q004 = 0;
      this->q008 = 0;
      this->q00D = 0;
      *(_DWORD *)this = &vt_DynamicVectorClass_HashObject_HashString_SchemeNode;
      this->q014 = 10;
      this->q010 = 0;
      return 0;
}
} }

// ==== BACKFILL 0x00628B00  sub_628B00  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_628B00::sub_628B00(int a2, unsigned char * a3)
{
{
    int v3;
    char *v5;
    char *v6;
    char *v7;
    v3 = a2;
    this->M4 = 0;
    this->M8 = a2;
    this->M12 = 1;
    this->M13 = 0;
    *(void**)this = &vt_VectorClass_HashObject_HashString_SchemeNode;
    if ( a2 )
  {
    if ( a3 )
    {
    v5 = a3;
    if ( a2 - 1 >= 0 )
      {
    do
        {
    Byte::Zero(v5);
    v5 += 260;
    --v3;
        }
    while ( v3 );
      }
    this->M4 = a3;
    }
    else
    {
    v6 = __2_YAPAXI_Z(260 * a2);
    if ( v6 )
      {
    v7 = v6;
    if ( a2 - 1 >= 0 )
        {
    do
          {
    Byte::Zero(v7);
    v7 += 260;
    --v3;
          }
    while ( v3 );
        }
      }
    else
      {
    v6 = 0;
      }
    this->M4 = v6;
    this->M13 = 1;
    }
  }
    *(void**)this = &vt_DynamicVectorClass_HashObject_HashString_SchemeNode;
    this->M20 = 10;
    this->M16 = 0;
    return this;
}
}

// ==== BACKFILL 0x00628DF0  VectorClass::ConstructHSV  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * VectorClass::ConstructHSV(int a2, int a3)
{
{
    char *v4;
    _BYTE *v5;
    int v6;
    char *v8;
    _BYTE *v9;
    int v10;
    v4 = 0;
    this->Items = (void*)(0);
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->vfptr = vt_VectorClass_HSVClass;
    if ( !a2 )
    return this;
    if ( !a3 )
  {
    v8 = (char*)__2_YAPAXI_Z(3 * a2);
    if ( v8 )
    {
    if ( a2 - 1 >= 0 )
      {
    v9 = v8 + 2;
    v10 = a2;
    do
        {
    *(v9 - 2) = 0;
    *(v9 - 1) = 0;
    *v9 = 0;
    v9 += 3;
    --v10;
        }
    while ( v10 );
      }
    v4 = v8;
    }
    this->Items = (void*)(v4);
    this->IsAllocated = 1;
    return this;
  }
    if ( a2 - 1 >= 0 )
  {
    v5 = (char*)(a3 + 2);
    v6 = a2;
    do
    {
    *(v5 - 2) = 0;
    *(v5 - 1) = 0;
    *v5 = 0;
    v5 += 3;
    --v6;
    }
    while ( v6 );
  }
    this->Items = (void*)(a3);
    return this;
}
}

// ==== BACKFILL 0x00628ED0  FileSystem::writeFile  cls=FileSystem  sig=csp  renamed_refs=0  residual=q00D ====
namespace gamemd { void* FileSystem::writeFile(int a1, void* a2) {
{
      int v3;
      _BYTE *v5;
      _BYTE *v7;
      _BYTE *v8;

      v3 = a2;
      this->q004 = 0;
      this->q008 = a2;
      this->q00C = 1;
      this->q00D = 0;
      *this = &vt_VectorClass_HashObject_HashString_SchemeNode;
      if ( !a2 )
        return this;
      if ( !a3 )
      {
        v7 = __2_YAPAXI_Z(260 * a2);
        if ( v7 )
        {
          v8 = v7;
          if ( a2 - 1 >= 0 )
          {
            do
            {
              Byte::Zero(v8);
              v8 += 260;
              --v3;
            }
            while ( v3 );
            this->q004 = v7;
            this->q00D = 1;
            return this;
          }
        }
        else
        {
          v7 = 0;
        }
        this->q004 = v7;
        this->q00D = 1;
        return this;
      }
      v5 = a3;
      if ( a2 - 1 >= 0 )
      {
        do
        {
          Byte::Zero(v5);
          v5 += 260;
          --v3;
        }
        while ( v3 );
      }
      this->q004 = a3;
      return this;
}
} }

// ==== BACKFILL 0x006293E0  AbstractClass::ProcessData  cls=AbstractClass  sig=csp  renamed_refs=2  residual=- ====
namespace ra2 { namespace game { void AbstractClass::ProcessData() {
{
      int v2;
      int v3;
      int v4;
      int v5;

      v2 = this->q044;
      *(_DWORD *)this = &ParasiteClass::`vftable';
      this->vtable3 = &ParasiteClass::`vftable';
      this->vtable4 = &ParasiteClass::`vftable';
      this->vtable4 = &vt_ParasiteClass;
      this->q04C = 0;
      this->q050 = 0;
      this->q048 = 0;
      if ( v2 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 248))(v2);
        this->q044 = 0;
      }
      if ( this->q054 )
      {
        v5 = this;
        v3 = (*(int (__thiscall **)(int *, int *))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, &v5);
        if ( v3 != -1 && v3 < g_BuildingTypeInstanceCount && v3 < --g_BuildingTypeInstanceCount )
        {
          do
          {
            ++v3;
            *((_DWORD *)g_BuildingClassPoolManager + v3 - 1) = *((_DWORD *)g_BuildingClassPoolManager + v3);
          }
          while ( v3 < g_BuildingTypeInstanceCount );
        }
        this->q054 = 0;
      }
      v5 = this;
      v4 = (*(int (__thiscall **)(int *, int *))(DataGlobal_AC4910 + 16))(&DataGlobal_AC4910, &v5);
      if ( v4 != -1 && v4 < DataGlobal_AC4920 && v4 < --DataGlobal_AC4920 )
      {
        do
        {
          ++v4;
          *((_DWORD *)DataGlobal_AC4914 + v4 - 1) = *((_DWORD *)DataGlobal_AC4914 + v4);
        }
        while ( v4 < DataGlobal_AC4920 );
      }
      AbstractClass::DTOR((_DWORD *)this);
}
} } }

// ==== BACKFILL 0x006295B0  ParasiteClass::LoadParasite  cls=ParasiteClass  sig=csp  renamed_refs=0  residual=- ====
int ParasiteClass::LoadParasite(int * a0, AbstractClass * aP1)
{
{
    int result;
    int v3;
    IUnknown *v4;
    int v5;
    result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)a0, aP1);
    v3 = result;
    if ( result >= 0 )
  {
    if ( a0 )
    {
    AbstractClass::InitVtables(a0, (IUnknown *)&aP1);
    v4 = *(IUnknown **)&HouseClass_Player[45112];
    *((int*)(a0) + 13) = 0;
    *((int*)(a0) + 11) = (int)v4;
    *((int*)(a0) + 14) = *(int *)&HouseClass_Player[45112];
    *((int*)(a0) + 16) = 0;
    *a0 = (int)(unsigned int)vt_ParasiteClass;
    a0[1] = (unsigned int)vt_ParasiteClass;
    a0[2] = (unsigned int)vt_ParasiteClass;
    *((int*)(a0) + 3) = (int)&vt_ParasiteClass;
    }
    if ( *((int*)(a0) + 17) && (*(int *)&DataGlobal_B05488[41280] < *(int *)&DataGlobal_B05488[41272] || (DataGlobal_B05488[41277] || !*(int *)&DataGlobal_B05488[41272]) && *(int *)&DataGlobal_B05488[41284] > 0 && (*(unsigned char (__thiscall **)(char *, int, int))(*(int *)&DataGlobal_B05488[41264] + 8))( &DataGlobal_B05488[41264], *(int *)&DataGlobal_B05488[41272] + *(int *)&DataGlobal_B05488[41284], 0)) )
    {
    v5 = (*(int *)&DataGlobal_B05488[41280])++;
    *(int *)(*(int *)&DataGlobal_B05488[41268] + 4 * v5) = a0;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)(a0 + 9));
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)(a0 + 10));
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)(a0 + 17));
    return v3;
  }
    return result;
}
}

// ==== BACKFILL 0x006296B0  ParasiteClass::SaveParasite  cls=ParasiteClass  sig=csp  renamed_refs=0  residual=- ====
int ParasiteClass::SaveParasite(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}

// ==== BACKFILL 0x006296D0  ParasiteClass::ddtor  cls=ParasiteClass  sig=csp  renamed_refs=0  residual=- ====
int ParasiteClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 486632321;
  a2[1] = 299086411;
  a2[2] = 268441278;
  a2[3] = 1822515787;
  return 0;
}

// ==== BACKFILL 0x00629710  sub_629710  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_629710::sub_629710()
{
{
    this->M80 = 0;
    this->M76 = 0;
    return 0;
}
}

// ==== BACKFILL 0x0062A8E0  ParasiteClass::CanInfect  cls=ParasiteClass  sig=csp  renamed_refs=0  residual=- ====
bool ParasiteClass::CanInfect(unsigned int * a2)
{
{
    int v3;
    int *v4;
    bool result;
    result = 0;
    if ( a2 )
  {
    if ( !*((char *)(a2) + 129) )
    {
    if ( *((char *)(a2) + 144) )
      {
    if ( *((int*)(a2) + 27) )
        {
    if ( !*((int*)(a2) + 421) )
          {
    if ( *(char *)((*(int (__thiscall **)(int *))(*a2 + 132))(a2) + 3384) )
            {
    if ( !*((int*)(a2) + 185) )
              {
    v3 = this->creationFrame;
    if ( !v3 )
    return 1;
    if ( !*(char *)((*(int (__thiscall **)(int))(*(int *)(v3) + 132))(v3) + 3278) )
    return 1;
    if ( !(*(int (__thiscall **)(int *))(*a2 + 444))(a2) )
    return 1;
    v4 = (int *)(*(int (__thiscall **)(int *))(*a2 + 444))(a2);
    if ( Cell::IsValidHeight(v4) )
    return 1;
              }
            }
          }
        }
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0062AF50  ParasiteClass::StubReturn88  cls=ParasiteClass  sig=csp  renamed_refs=0  residual=- ====
int ParasiteClass::StubReturn88() const { return 88; }

// ==== BACKFILL 0x0062AF60  ParasiteClass::StubReturn67  cls=ParasiteClass  sig=csp  renamed_refs=0  residual=- ====
int ParasiteClass::StubReturn67() const { return 67; }

// ==== BACKFILL 0x0062B5E0  ParticleClass::Construct  cls=ParticleClass  sig=csp  renamed_refs=21  residual=- ====
namespace gamemd { int ParticleClass::Construct(int a1, void* a2, float a3, int a4) {
{
      BuildingTypeClass *v6;
      double v7;
      int v8;
      float *v9;
      AbstractClass *v10;
      double v11;
      double v12;
      _BYTE *v13;
      int v14;
      int v15;
      __int16 v16;
      double v17;
      float v18;
      IUnknown *v19;
      BuildingTypeClass *v20;
      int v21;
      double v22;
      int v23;
      int v24;
      _BYTE *v25;
      AbstractClass *v27;
      void *v28;
      float v29;
      int v30;
      IUnknown *v31;
      BuildingTypeClass *v32;
      float aP1a;

      ObjectClass::ctor((_DWORD *)this);
      this->q0AC = aP1;
      this->q0B0 = 0;
      this->q0B1 = 0;
      this->q0B2 = 0;
      this->q0B8 = 0;
      this->q0B4 = 0;
      this->q0BC = 0;
      v6 = (BuildingTypeClass *)aP3;
      this->q0C0 = 0;
      this->q0C4 = 0;
      this->q0C8 = 0;
      this->q0CC = 0;
      this->q0D0 = 0;
      this->q0D4 = -1082130432;
      this->q0D8 = 0;
      this->q0DC = 0;
      this->q0E0 = 0;
      this->q0E4 = *(_DWORD *)(this->q0AC + 764);
      this->q0E8 = *(_DWORD *)v6->vtable1;
      this->q0EC = *(_DWORD *)&v6->vtable1[4];
      this->q0F0 = *(_DWORD *)&v6->vtable1[8];
      this->q0F4 = *(_DWORD *)aP2->__pad_0;
      this->q0F8 = *(_DWORD *)&aP2->field_2[2];
      this->q0FC = aP2->field_8;
      this->q100 = *((_QWORD *)&g_MatrixTransformState + 2937);
      this->q108 = *(&g_MatrixTransformState + 5876);
      v7 = (double)(*(_DWORD *)&v6->vtable1[8] - (unsigned int)aP2->field_8);
      v8 = *(_DWORD *)&v6->vtable1[4] - *(_DWORD *)&aP2->field_2[2];
      v9 = (float *)(this + 268);
      v10 = (AbstractClass *)aP4;
      this->q10C = (float)(*(_DWORD *)v6->vtable1 - *(_DWORD *)aP2->__pad_0);
      this->ParticleSystem = (float)v8;
      this->RemainingEC = v7;
      v11 = (double)(int)aP2->field_8;
      v12 = (double)*(int *)&aP2->field_2[2];
      this->StateAIAdvance = (float)*(int *)aP2->__pad_0;
      this->q11C = v12;
      this->q120 = v11;
      this->q124 = v10;
      v13 = *(_BYTE **)(this + 172);
      LOBYTE(v8) = v13[779];
      this->q12D = 0;
      this->q12C = v8;
      this->StartStateAI = v13[778];
      this->Translucency = v13[756];
      this->q130 = 0;
      this->q131 = 0;
      *(_DWORD *)this = &ParticleClass::`vftable';
      this->vtable3 = &ParticleClass::`vftable';
      this->vtable4 = &ParticleClass::`vftable';
      this->vtable4 = &vt_ParticleClass;
      AbstractClass::GenerateUniqueID(this + 4);
      if ( *(int *)&HouseClass_Player[140] < *(int *)&HouseClass_Player[132]
        || (HouseClass_Player[137] || !*(_DWORD *)&HouseClass_Player[132])
        && *(int *)&HouseClass_Player[144] > 0
        && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player[124] + 8))(
             &HouseClass_Player[124],
             *(_DWORD *)&HouseClass_Player[144] + *(_DWORD *)&HouseClass_Player[132],
             0) )
      {
        v14 = (*(_DWORD *)&HouseClass_Player[140])++;
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player[128] + 4 * v14) = this;
      }
      if ( *(_DWORD *)(this->q0AC + 788) == 1 )
        this->q0E4 = (double)(Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536)) % 2)
                               + this->q0E4;
      v15 = this->q0AC;
      this->q12A = *(_WORD *)(v15 + 732);
      if ( *(_DWORD *)(v15 + 788) == 4 )
        v16 = *(_WORD *)(this->q0AC + 736)
            + abs32(Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536)) % 10);
      else
        v16 = *(_WORD *)(this->q0AC + 736)
            + abs32(
                Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536))
              % *(_DWORD *)(this->q0AC + 736));
      this->q128 = v16;
      v28 = aP2->field_8;
      if ( (int)v28 <= Cell::GetGroundHeight((IUnknown *)aP2) )
        Cell::GetGroundHeight((IUnknown *)aP2);
      ObjectClass::SetPosition((#374 *)this);
      v17 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                          *v9 * *v9
                                        + this->ParticleSystem * this->ParticleSystem
                                        + this->RemainingEC * this->RemainingEC));
      if ( v17 == 0.0 )
      {
        v18 = *v9;
        v19 = *(IUnknown **)(this + 272);
        v20 = *(BuildingTypeClass **)(this + 276);
      }
      else
      {
        v29 = *v9 / v17;
        v18 = v29;
        *(float *)&v31 = this->ParticleSystem / v17;
        v19 = v31;
        *(float *)&v32 = this->RemainingEC / v17;
        v20 = v32;
      }
      *v9 = v18;
      this->ParticleSystem = v19;
      this->RemainingEC = v20;
      if ( *(_BYTE *)(this->q0AC + 783) )
      {
        v30 = *(_DWORD *)aP2->__pad_0 - *(_DWORD *)aP3->__pad_0;
        v21 = *(_DWORD *)&aP2->field_2[2] - *(_DWORD *)&aP3->__pad_0[4];
        *(float *)&aP3 = (float)(int)abs32(Math::RoundToInt(*v9 * this->q0E4));
        aP1a = (float)(int)abs32(Math::RoundToInt(this->ParticleSystem * this->q0E4));
        v22 = 9999.0;
        if ( *(float *)&aP3 > 0.000001 )
          v22 = (double)(int)abs32(v30) / *(float *)&aP3;
        if ( aP1a > 0.000001 )
        {
          *(float *)&aP3 = (double)(int)abs32(v21) / aP1a;
          if ( v22 >= *(float *)&aP3 )
            v22 = *(float *)&aP3;
        }
        aP3 = (AbstractClass *)(*(char *)(this->q0AC + 780) + 1);
        this->q12C = Math::RoundToInt(v22);
      }
      v23 = this->q0AC;
      if ( *(int *)(v23 + 712) > 0 )
      {
        if ( *(_BYTE *)(v23 + 724)
          || *(_BYTE *)(v23 + 725)
          || *(_BYTE *)(v23 + 726)
          || *(_BYTE *)(v23 + 727)
          || *(_BYTE *)(v23 + 728)
          || *(_BYTE *)(v23 + 729) )
        {
          *(float *)&v27 = (double)Random::Range(
                                     (_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536),
                                     0,
                                     (IUnknown *)0x7FFFFFFE)
                         * 4.656612877414201e-10;
          v25 = Color::Lerp2(&aP3, this->q0AC + 724, this->q0AC + 727, *(float *)&v27);
          this->q0B0 = *(_WORD *)v25;
          this->q0B2 = v25[2];
        }
        else
        {
          v24 = *(_DWORD *)(v23 + 700);
          this->q0B0 = *(_WORD *)v24;
          this->q0B2 = *(_BYTE *)(v24 + 2);
        }
      }
      ObjectClass::Deploy((#374 *)this);
      return (ParticleClass *)this;
}
} }

// ==== BACKFILL 0x0062BB20  ObjectClass::ProcessUpdate  cls=ObjectClass  sig=csp  renamed_refs=2  residual=- ====
namespace ra2 { namespace game { int ObjectClass::ProcessUpdate() {
{
      int v2;

      ObjectClass::ctor((_DWORD *)this);
      this->q0AC = 0;
      this->q0B0 = 0;
      this->q0B1 = 0;
      this->q0B2 = 0;
      this->q0B8 = 0;
      this->q0B4 = 0;
      this->q0BC = 0;
      this->q0C0 = 0;
      this->q0C4 = 0;
      this->q0C8 = 0;
      this->q0CC = 0;
      this->q0D0 = 0;
      this->q0D4 = -1082130432;
      this->q0D8 = 0;
      this->q0DC = 0;
      this->q0E0 = 0;
      this->q0E4 = 0;
      this->q0E8 = DataGlobal_AC49D8;
      this->q0EC = DataGlobal_AC49DC;
      this->q0F0 = DataGlobal_AC49E0;
      this->q0F4 = DataGlobal_AC49D8;
      this->q0F8 = DataGlobal_AC49DC;
      this->q0FC = DataGlobal_AC49E0;
      this->q100 = DataGlobal_AC49D8;
      this->q104 = DataGlobal_AC49DC;
      this->q108 = DataGlobal_AC49E0;
      this->q10C = 0;
      this->q110 = 0;
      this->q114 = 0;
      this->q118 = 0;
      this->q11C = 0;
      this->q120 = 0;
      this->q124 = 0;
      this->q12C = 0;
      this->q12D = 0;
      this->q12E = 0;
      this->q12F = 0;
      this->q130 = 0;
      this->q131 = 0;
      *(_DWORD *)this = &ParticleClass::`vftable';
      this->vtable3 = &ParticleClass::`vftable';
      this->vtable4 = &ParticleClass::`vftable';
      this->vtable4 = &vt_ParticleClass;
      if ( DataGlobal_A83DD8 < DataGlobal_A83DD0
        || (DataGlobal_A83DD5 || !DataGlobal_A83DD0)
        && DataGlobal_A83DDC > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(DataGlobal_A83DC8 + 8))(
             &DataGlobal_A83DC8,
             DataGlobal_A83DD0 + DataGlobal_A83DDC,
             0) )
      {
        v2 = DataGlobal_A83DD8++;
        *((_DWORD *)DataGlobal_A83DCC + v2) = this;
      }
      return this;
}
} } }

// ==== BACKFILL 0x0062C3A0  ParticleClass::UpdateParticlePhysics  cls=ParticleClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { void ParticleClass::UpdateParticlePhysics() {
{
      double v2;
      float v3;
      int v4;
      double v5;
      float v6;
      double v7;
      float v8;
      float v9;
      int v10;
      double v11;
      int v12;
      int v13;
      float v14;
      float v15;
      float v16;
      int v17;
      float v18;
      float v19;

      v2 = this->q10C;
      v3 = this->q0E4;
      v18 = this->ParticleSystem;
      v19 = this->RemainingEC;
      v14 = v2 * v3;
      v15 = v18 * v3;
      v16 = v19 * v3;
      this->q0E4 = ((double)Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2147483646)
                             * 4.656612877414201e-10
                             - 0.5)
                            * 0.1
                            + this->q0E4;
      this->StateAIAdvance = v14 + this->StateAIAdvance;
      this->q11C = v15 + this->q11C;
      this->q120 = v16 + this->q120;
      v4 = Math::RoundToInt(this->StateAIAdvance);
      v5 = this->q11C;
      v17 = v4;
      LODWORD(v6) = Math::RoundToInt(v5);
      v7 = this->q120;
      v18 = v6;
      LODWORD(v8) = Math::RoundToInt(v7);
      v9 = *(float *)this;
      v19 = v8;
      (*(void (__thiscall **)(void *, int *))(LODWORD(v9) + 436))(this, &v17);
      v13 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2147483646);
      v10 = this->q0AC;
      v11 = (double)v13 * 4.656612877414201e-10 * 0.05 + *(double *)(v10 + 688) + *((double *)this + 23);
      *((double *)this + 23) = v11;
      if ( v11 > 1.0 )
      {
        v12 = this->q0B4;
        if ( v12 >= *(_DWORD *)(v10 + 712) - 2 )
        {
          this->q0B8 = 0;
          this->q0BC = 1072693248;
        }
        else
        {
          this->q0B8 = 0;
          this->q0B4 = v12 + 1;
          this->q0BC = 0;
        }
      }
}
} }

// ==== BACKFILL 0x0062C540  ParticleClass::UpdateAnimationDrift  cls=ParticleClass  sig=csp  renamed_refs=8  residual=- ====
namespace gamemd { void ParticleClass::UpdateAnimationDrift() {
{
      int v2;
      int v3;
      int v4;
      _DWORD *v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;

      if ( ((unsigned __int8)g_CurrentFrame & 1) != 0 )
      {
        if ( (abs32(Random::State((_DWORD *)g_ScenarioClass_Instance + 134)) & 3) == 0 )
        {
          v2 = 0;
          v3 = 0;
          v4 = Random::State((_DWORD *)g_ScenarioClass_Instance + 134);
          v5 = (char *)g_ScenarioClass_Instance + 536;
          if ( (abs32(v4) & 1) != 0 )
            v3 = (int)abs32(Random::State(v5)) % 3 - 1;
          else
            v2 = (int)abs32(Random::State(v5)) % 3 - 1;
          v6 = v2 + this->q0C0;
          v7 = v3 + this->q0C4;
          this->q0C0 = v6;
          this->q0C4 = v7;
          if ( v6 >= -5 )
          {
            if ( v6 > 5 )
              this->q0C0 = 5;
          }
          else
          {
            this->q0C0 = -5;
          }
          v8 = this->q0C4;
          if ( v8 >= -5 )
          {
            if ( v8 > 5 )
              this->q0C4 = 5;
          }
          else
          {
            this->q0C4 = -5;
          }
        }
        this->q0C8 = 0;
      }
      v9 = this->q0AC;
      if ( this->StartStateAI < *(_BYTE *)(v9 + 777) )
      {
        v10 = *(_DWORD *)(this->q0AC + 736)
            - *(unsigned __int16 *)(this + 296)
            + (*(int (__stdcall **)(int))(this->vtable2 + 16))(this + 4);
        if ( !(v10 % (*(char *)(v9 + 779) + ((*(int (__stdcall **)(int))(this->vtable2 + 16))(this + 4) & 1))) )
          ++this->StartStateAI;
        if ( this->StartStateAI == *(_BYTE *)(v9 + 777) && *(_BYTE *)(v9 + 776) )
          this->q131 = 1;
      }
      if ( this->q0E4 > 3.0 )
        this->q0E4 = this->q0E4 - *(float *)(v9 + 768);
}
} }

// ==== BACKFILL 0x0062CE40  ParticleClass::Dispatch  cls=ParticleClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int ParticleClass::Dispatch() {
{
      int result;

      result = *(_DWORD *)(this->q0AC + 788);
      switch ( result )
      {
        case 0:
          result = ParasiteClass::Update(this);
          break;
        case 1:
          result = ParticleClass::UpdateAnimationDrift(this);
          break;
        case 2:
          result = UpdateAreaDamageEffect(this);
          break;
        case 3:
          result = UpdateParticleSystem(this);
          break;
        case 4:
          result = ParticleClass::UpdateParticlePhysics(this);
          break;
        default:
          break;
      }
      if ( !--this->q128 )
        this->q131 = 1;
      return result;
}
} }

// ==== BACKFILL 0x0062D510  sub_62D510  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_62D510::sub_62D510()
{
{
    double v2;
    char *v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int GroundHeight;
    int v12;
    int v13;
    int v14;
    int v15[3];
    v2 = this->M228;
    v3 = (char *)(this + 39);
    *(float *)v15 = this->M156;
    v4 = this->M160;
    v5 = this->M164;
    v6 = this->M156;
    v15[2] = v5;
    v7 = *((int *)(v3) + 1);
    v12 = v6;
    v8 = *((int *)(v3) + 2);
    v13 = v7;
    v14 = v8;
    v15[1] = v4;
    if ( v2 > 0.0 )
  {
    v9 = this->M264;
    v12 = this->M256 + v6;
    v13 = this->M260 + v7;
    v14 = v9 + v8;
  }
    if ( this->M228 > 0.0 )
  {
    GroundHeight = Cell::GetGroundHeight(v15);
    if ( Cell::GetGroundHeight(&v12) > GroundHeight )
    {
    this->M301 = 1;
    this->M305 = 1;
    }
  }
    return this->Vf436(&v12);
}
}

// ==== BACKFILL 0x0062D6F0  ParticleClass::CheckMirrorState  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool ParticleClass::CheckMirrorState(int a1) {
{
    return (unsigned char)ObjectClass::UpdateProductionDisplay((#374 *)this) != 0;
}
} }

// ==== BACKFILL 0x0062D710  ParticleClass::CheckDrawFlags  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
int * ParticleClass::CheckDrawFlags(int a1)
{
{
    if ( (DataGlobal_AC4998 & 1) == 0 )
  {
    DataGlobal_AC4998 |= 1u;
    DataGlobal_AC49D0 = 2147450879;
    atexit(nullsub_214);
  }
    return &DataGlobal_AC49D0;
}
}

// ==== BACKFILL 0x0062D770  ParticleClass::CheckStateFlag  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleClass::CheckStateFlag()
{
return 3;
}

// ==== BACKFILL 0x0062D7A0  ParticleClass::LoadParticleData  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleClass::LoadParticleData(ObjectClass * aP1, int aP1a)
{
{
    int result;
    result = BuildingClass::SaveLoad_Register((AnimClass *)this);
    if ( result >= 0 )
  {
    if ( aP1 )
    {
    ObjectClass::Init(aP1, (AbstractClass *)&aP1a);
    *(int *)aP1->__pad_0 = (unsigned int)vt_ParticleClass;
    *(int *)&aP1->__pad_0[4] = (unsigned int)vt_ParticleClass;
    *(int *)&aP1->__pad_0[8] = (unsigned int)vt_ParticleClass;
    *(int *)&aP1->__pad_0[12] = &vt_ParticleClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP1[1]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP1[1].spawnStatus);
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x0062D810  ParticleClass::CheckCollisionFlags  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleClass::CheckCollisionFlags(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    LOBYTE(aP0->ChargerBarrels[11]) = 1;
    return result;
}
}

// ==== BACKFILL 0x0062D830  ParticleClass::vt_entry_1E8  cls=ParticleClass  sig=csp  renamed_refs=4  residual=- ====
namespace gamemd { int ParticleClass::vt_entry_1E8() {
{
    int v2;
    int v3;
    int v5[2];
    int v6[2];
    v2 = *(int *)(this->q0AC + 788);
    if ( v2 >= 0 )
  {
    if ( v2 <= 1 )
    return this->StartStateAI;
    if ( v2 == 2 )
    {
    Coord::To_Screen(g_TacticalClass_Instance, (int *)(this + 244), v6);
    Coord::To_Screen(g_TacticalClass_Instance, (int *)(this + 232), v5);
    v3 = CalcMathFacing8(v6, v5);
    if ( v3 == 2 || v3 == 6 )
    return this->StartStateAI + 2 * *(char *)(this->q0AC + 777);
    if ( v3 != 4 && v3 )
      {
    if ( v3 == 1 || v3 == 5 )
    return this->StartStateAI + *(char *)(this->q0AC + 777);
    if ( v3 == 3 || v3 == 7 )
    return this->StartStateAI + 3 * *(char *)(this->q0AC + 777);
    return 0;
      }
    return this->StartStateAI;
    }
  }
    return 0;
}
} }

// ==== BACKFILL 0x0062D930  ParticleClass::GetClassIdentifier  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448652;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// ==== BACKFILL 0x0062D970  ParticleClass::GetObjectSize  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleClass::GetObjectSize()
{
return 312;
}

// ==== BACKFILL 0x0062D980  ParticleClass::GetTypeIdentifier  cls=ParticleClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleClass::GetTypeIdentifier()
{
return 22;
}

// ==== BACKFILL 0x0062D990  ParticleClass::Stub  cls=ParticleClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int ParticleClass::Stub() {
{
    return this->q0AC;
}
} }

// ==== BACKFILL 0x0062D9A0  ParticleClass::UpdateParticle  cls=ParticleClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { void* ParticleClass::UpdateParticle(int a1) {
{
      AbstractClass *v3;
      int v4;
      void **v6;

      *this = &ParticleClass::`vftable';
      *(this + 1) = &ParticleClass::`vftable';
      *(this + 2) = &ParticleClass::`vftable';
      *(this + 3) = &vt_ParticleClass;
      ObjectClass::Undeploy((#374 *)this);
      LOBYTE(v3) = 1;
      AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, v3);
      this->q0AC = 0;
      v6 = this;
      v4 = (*(int (__thiscall **)(char *, void ***))(*(_DWORD *)&HouseClass_Player[124] + 16))(
             &HouseClass_Player[124],
             &v6);
      if ( v4 != -1 && v4 < *(int *)&HouseClass_Player[140] )
      {
        --*(_DWORD *)&HouseClass_Player[140];
        for ( ;
              v4 < *(int *)&HouseClass_Player[140];
              *(_DWORD *)(*(_DWORD *)&HouseClass_Player[128] + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[128]
                                                                                               + 4 * v4) )
        {
          ++v4;
        }
      }
      ObjectClass::Dtor(this);
      if ( (a2 & 1) != 0 )
        __3_YAXPAX_Z(this);
      return (ParticleClass *)this;
}
} }

// ==== BACKFILL 0x0062DC50  ParticleSystemClass::Constructor  cls=ParticleSystemClass  sig=csp  renamed_refs=4  residual=- ====
namespace gamemd { int ParticleSystemClass::Constructor(int a1, void* a2, int a3, void* a4, void* a5, int a6) {
{
      int *v8;
      int v9;
      ParticleSystemTypeClass *v10;
      int v11;
      int *v12;
      IUnknown *v13;
      _DWORD *v14;
      TechnoClass *v15;
      int v16;
      int v17;
      int v18;
      _DWORD *v19;
      int v20;
      int v21;
      int v22;
      _BYTE v24[12];

      ObjectClass::ctor((_DWORD *)this);
      this->Type = aP1;
      v8 = (int *)(this + 212);
      this->SpawnDistanceToOwner = 0;
      this->q0B4 = 0;
      this->q0B8 = 0;
      this->TargetCoords = 0;
      this->q0C4 = 0;
      this->q0C8 = 1;
      this->q0C9 = 0;
      this->Particles = &vt_DynamicVectorClass_ParticleClass;
      this->Target = 10;
      this->Owner = 0;
      this->SpawnFrames = *((_QWORD *)&(&g_MatrixTransformState)[492] + 1);
      v9 = (int)*(&g_MatrixTransformState + 5908);
      v10 = *(ParticleSystemTypeClass **)(this + 172);
      this->SpotlightRadius = 0;
      this->SparkSpawnFrames = v9;
      this->TimeToDie = 0;
      this->q0E8 = (float)v10->field_29C;
      this->q0EC = v10->field_2B8;
      this->q0F0 = v10->field_300;
      this->q0F4 = 29;
      this->q0F8 = 0;
      this->ParticleSystemClass_field_bool_F9 = 0;
      this->OwnerHouse = 0;
      *(_DWORD *)this = &ParticleSystemClass::`vftable';
      this->vtable3 = &ParticleSystemClass::`vftable';
      this->vtable4 = &vt_ParticleSystemClass;
      this->vtable4 = &off_7EFB70;
      AbstractClass::GenerateUniqueID(this + 4);
      if ( g_GameCleanupState < DataGlobal_A80210
        || (DataGlobal_A80215 || !DataGlobal_A80210)
        && DataGlobal_A8021C > 0
        && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))DataGlobal_A80208->field_8)(
             &DataGlobal_A80208,
             DataGlobal_A80210 + DataGlobal_A8021C,
             0) )
      {
        v11 = g_GameCleanupState++;
        *(_DWORD *)&DataGlobal_A8020C->__pad_0[4 * v11] = this;
      }
      (*(void (__thiscall **)(int))(this->Particles + 12))(this + 188);
      this->OwnerHouse = aP6;
      if ( aP3 )
      {
        v12 = (int *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(aP3->field_0 + 72))(aP3, v24);
        *v8 = *v12;
        this->Lifetime = v12[1];
        this->SparkSpawnFrames = v12[2];
        v13 = (IUnknown *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(aP3->field_0 + 72))(aP3, v24);
        if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374[13428], v13) + 80) & 0x100) != 0
          && (*(int (__thiscall **)(IUnknown *))(aP3->field_0 + 44))(aP3) == 11 )
        {
          this->SparkSpawnFrames += *(&g_MatrixTransformState + 5919);
        }
      }
      else
      {
        *v8 = aP5->field_0;
        this->Lifetime = aP5->field_4;
        this->SparkSpawnFrames = aP5->field_8;
      }
      if ( aP4 )
      {
        this->SpotlightRadius = aP4;
        v14 = AbstractClass::IsTechnoType(aP4);
        if ( v14 )
          this->TimeToDie = v14[173];
      }
      else
      {
        this->SpotlightRadius = 0;
        this->TimeToDie = aP3;
      }
      ObjectClass::Deploy((#374 *)this);
      v15 = *(TechnoClass **)(this + 224);
      if ( v15 )
      {
        v16 = this->location;
        v17 = this->q0A0;
        v18 = this->q0A4;
        v19 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, _BYTE *))(*(_DWORD *)v15->__pad_0 + 72))(v15, v24);
        v20 = v19[2];
        v21 = v17 - v19[1];
        this->SpawnDistanceToOwner = v16 - *v19;
        this->q0B4 = v21;
        this->q0B8 = v18 - v20;
      }
      if ( *(int *)&stru_B05488[41640] < *(int *)&stru_B05488[41632]
        || (stru_B05488[41637] || !*(_DWORD *)&stru_B05488[41632])
        && *(int *)&stru_B05488[41644] > 0
        && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488[41624] + 8))(
             &stru_B05488[41624],
             *(_DWORD *)&stru_B05488[41644] + *(_DWORD *)&stru_B05488[41632],
             0) )
      {
        v22 = (*(_DWORD *)&stru_B05488[41640])++;
        *(_DWORD *)(*(_DWORD *)&stru_B05488[41628] + 4 * v22) = this;
      }
      return (ParticleSystemClass *)this;
}
} }

// ==== BACKFILL 0x0062DF20  ParticleClass::ProcessCreation  cls=ParticleSystemClass  sig=csp  renamed_refs=13  residual=- ====
namespace gamemd { int ParticleClass::ProcessCreation() {
{
      int v2;
      int v3;
      int v4;
      int v5;

      ObjectClass::ctor((_DWORD *)this);
      this->Type = 0;
      this->Velocity = 0;
      this->q0C4 = 0;
      this->q0C8 = 1;
      this->q0C9 = 0;
      this->Particles = &vt_DynamicVectorClass_ParticleClass;
      this->Target = 10;
      this->Owner = 0;
      this->SpawnFrames = DataGlobal_AC4A58;
      this->Lifetime = DataGlobal_AC4A5C;
      v2 = DataGlobal_AC4A60;
      this->SpotlightRadius = 0;
      this->TimeToDie = 0;
      this->SparkSpawnFrames = v2;
      v3 = this->Particles;
      this->q0E8 = 0;
      this->q0EC = 0;
      this->q0F0 = 0;
      this->q0F4 = 0;
      this->q0F8 = 0;
      this->ParticleSystemClass_field_bool_F9 = 0;
      *(_DWORD *)this = &ParticleSystemClass::`vftable';
      this->vtable3 = &ParticleSystemClass::`vftable';
      this->vtable4 = &vt_ParticleSystemClass;
      this->vtable4 = &off_7EFB70;
      (*(void (**)(void))(v3 + 12))();
      if ( g_GameCleanupState < DataGlobal_A80210
        || (DataGlobal_A80215 || !DataGlobal_A80210)
        && DataGlobal_A8021C > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(DataGlobal_A80208 + 8))(
             &DataGlobal_A80208,
             DataGlobal_A80210 + DataGlobal_A8021C,
             0) )
      {
        v4 = g_GameCleanupState++;
        *((_DWORD *)DataGlobal_A8020C + v4) = this;
      }
      if ( g_AlphaShapePool < DataGlobal_B0F728
        || (DataGlobal_B0F72D || !DataGlobal_B0F728)
        && DataGlobal_B0F734 > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(AbstractClass_Array + 8))(
             &AbstractClass_Array,
             DataGlobal_B0F728 + DataGlobal_B0F734,
             0) )
      {
        v5 = g_AlphaShapePool++;
        *((_DWORD *)DataGlobal_B0F724 + v5) = this;
      }
      return this;
}
} }

// ==== BACKFILL 0x0062E280  ParticleSystemClass::CreateBuildingLight  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void ParticleSystemClass::CreateBuildingLight(int a1, int a2) {
{
      ParticleSystemTypeClass *v4;
      double v5;
      double v6;
      ParticleSystemTypeClass *v7;
      _DWORD *v8;
      ParticleSystemTypeClass *v9;

      v4 = (ParticleSystemTypeClass *)this->Type;
      if ( LOBYTE(v4[1].field_0) && *(int *)v4->__pad_304 > 0 && this->Owner > 0 )
      {
        v5 = (double)this->Owner / (double)v4->field_2A4;
        if ( v5 <= 1.0 )
          v6 = v5;
        else
          v6 = 1.0;
        if ( v6 >= 0.4 )
        {
          if ( v5 > 1.0 )
            v5 = 1.0;
        }
        else
        {
          v5 = 0.4;
        }
        v7 = (ParticleSystemTypeClass *)Math::RoundToInt(v5 * (double)*(int *)v4->__pad_304);
        v8 = (_DWORD *)__2_YAPAXI_Z(0x18u);
        if ( v8 )
          v9 = (ParticleSystemTypeClass *)ObjectClass::RegisterInArray(
                                            v8,
                                            (AbstractClass *)this->location,
                                            this->q0A0,
                                            this->q0A4,
                                            (int)v7);
        else
          v9 = 0;
        *(_DWORD *)v9->__pad_C = this->q0F4;
        BuildingLight::CalculateShading((IUnknown *)v9);
        if ( v9 )
        {
          BuildingLightQueue::RemoveEntry(v9);
          __3_YAXPAX_Z(v9);
        }
      }
}
} }

// ==== BACKFILL 0x0062E380  ParticleSystemClass::CreateParticle  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ParticleSystemClass::CreateParticle(void* a1, void* a2) {
{
      int v4;
      ParticleClass *v5;
      int v6;
      int v7;
      _DWORD *v8;
      int v9;
      int v10;
      int v11;

      if ( *(_DWORD *)(this->Type + 660) == -1 )
        return 0;
      v4 = __2_YAPAXI_Z(0x138u);
      if ( !v4 )
        return 0;
      v5 = ParticleClass::Construct(
             v4,
             *(ParticleClass **)(*(_DWORD *)&HouseClass_Player[80] + 4 * *(_DWORD *)(this->Type + 660)),
             (ParticleClass *)aP1,
             (AbstractClass *)aP2,
             (IUnknown *)this);
      if ( !v5 )
        return 0;
      v6 = this->q0C4;
      v7 = this->Owner;
      v8 = this + 47;
      if ( v7 < v6
        || (*((_BYTE *)v8 + 13) || !v6)
        && (v9 = v8[5], v9 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v8 + 8))(v8, v6 + v9, 0) )
      {
        v10 = v8[4];
        v11 = v8[1];
        v8[4] = v10 + 1;
        *(_DWORD *)(v11 + 4 * v10) = v5;
      }
      return (int)v5->__pad_0;
}
} }

// ==== BACKFILL 0x0062E4C0  ParticleClass::CreateInstance  cls=ParticleClass  sig=csp  renamed_refs=3  residual=- ====
namespace gamemd { int ParticleClass::CreateInstance(void* a1, float a2, int a3) {
{
      int v5;
      ParticleClass *v6;
      TechnoClass *v7;
      int v8;
      int v9;
      int v10;
      int v11;
      TechnoClass *v12;
      CoordStruct *v13;
      int v14;
      char *v15;
      char *v16;
      int *v17;
      int v18;

      if ( *(_DWORD *)(this->q0AC + 660) == -1 )
        return 0;
      v5 = __2_YAPAXI_Z(0x138u);
      if ( !v5 )
        return 0;
      v6 = ParticleClass::Construct(
             v5,
             *(ParticleClass **)(*(_DWORD *)&HouseClass_Player[80] + 4 * *(_DWORD *)(this->q0AC + 660)),
             (ParticleClass *)aP1,
             (AbstractClass *)LODWORD(aP3),
             (IUnknown *)this);
      if ( !v6 )
        return 0;
      v7 = (TechnoClass *)a4;
      if ( a4 <= 0 )
        return 0;
      v8 = this->q0C4;
      if ( this->q0CC < v8
        || (this->q0C9 || !v8)
        && (v9 = this->q0D0, v9 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->q0BC + 8))(this + 188, v8 + v9, 0) )
      {
        v10 = this->q0CC;
        v11 = this->q0C0;
        this->q0CC = v10 + 1;
        *(_DWORD *)(v11 + 4 * v10) = v6;
      }
      v12 = *(TechnoClass **)(this + 204);
      v13 = *(CoordStruct **)(this + 192);
      if ( (int)v12 < a4 )
        v7 = v12;
      v14 = (int)abs32(Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536))) % (int)v7;
      v15 = (char *)&v12[-1].isDisguisedFlag_as_house + 2;
      v16 = &v12->__pad_0[-v14];
      if ( (int)v15 > (int)(v16 - 2) )
      {
        v17 = &v13->X + (_DWORD)v15;
        v18 = v15 - (v16 - 2);
        do
        {
          v17[1] = *v17;
          --v17;
          --v18;
        }
        while ( v18 );
      }
      *((_DWORD *)v13 + (_DWORD)v16 - 1) = v6;
      return (int)v6->__pad_0;
}
} }

// ==== BACKFILL 0x0062E650  ScenarioClass::DestroyAndClearVector  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void ScenarioClass::DestroyAndClearVector() {
{
      int i;
      int v3;
      int v4;
      int v5;
      int v6;

      for ( i = this->q0CC - 1; i >= 0; --i )
      {
        if ( i < this->q0CC )
        {
          v3 = *(_DWORD *)(this->q0C0 + 4 * i);
          (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 248))(v3);
          v4 = (*(int (__thiscall **)(int *, int))(this->q0BC + 16))(this + 47, 4 * i + this->q0C0);
          if ( v4 != -1 )
          {
            v5 = this->q0CC;
            if ( v4 < v5 )
            {
              v6 = v5 - 1;
              for ( this->q0CC = v6;
                    v4 < this->q0CC;
                    *(_DWORD *)(this->q0C0 + 4 * v4 - 4) = *(_DWORD *)(this->q0C0 + 4 * v4) )
              {
                ++v4;
              }
            }
          }
        }
      }
}
} }

// ==== BACKFILL 0x0062E6D0  ParticleSystemClass::UpdateAllParticles  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void ParticleSystemClass::UpdateAllParticles() {
{
      int v1;
      int i;
      int v3;
      int v4;
      int v5;
      _DWORD *v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      int v12;
      int v13;
      void *v14;
      int v15;
      int v16;
      int v17;
      int v18;
      int v19;
      _DWORD *v20;
      int j;
      _DWORD v23[3];

      v1 = this;
      for ( i = this->Owner - 1; i >= 0; --i )
        ParticleClass::Dispatch(*(_DWORD *)(*(_DWORD *)(v1 + 192) + 4 * i));
      v3 = *(_DWORD *)(v1 + 204) - 1;
      for ( j = v3; v3 >= 0; j = v3 )
      {
        v4 = *(_DWORD *)(v1 + 192);
        v5 = *(_DWORD *)(v4 + 4 * v3);
        if ( *(_BYTE *)(v5 + 305) )
        {
          v6 = *(_DWORD **)(v5 + 172);
          v7 = v6[196];
          if ( v7 != -1 )
          {
            v8 = *((_DWORD *)g_BuildingProductionQueue + v7);
            v9 = *(_DWORD *)(v5 + 156) + v6[165];
            v10 = v6[166];
            v11 = *(_DWORD *)(v5 + 160);
            v12 = v6[167];
            v23[0] = v9;
            v13 = *(_DWORD *)(v5 + 164);
            v23[1] = v11 + v10;
            v23[2] = v13 + v12;
            v14 = __2_YAPAXI_Z(0x138u);
            v1 = this;
            if ( v14 )
            {
              v15 = ParticleClass::Construct((int)v14, v8, v23, COERCE_FLOAT(&DataGlobal_AC4A58), this);
              if ( v15 )
              {
                v16 = this->q0C4;
                if ( this->Owner < v16
                  || (this->q0C9 || !v16)
                  && (v17 = this->Target, v17 > 0)
                  && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->Particles + 8))(
                       this + 188,
                       v16 + v17,
                       0) )
                {
                  v18 = this->Owner;
                  v19 = this->TargetCoords;
                  this->Owner = v18 + 1;
                  *(_DWORD *)(v19 + 4 * v18) = v15;
                }
                *(_DWORD *)(v15 + 228) = *(_DWORD *)(v5 + 228);
                v20 = (_DWORD *)(v15 + 192);
                *v20 = *(_DWORD *)(v5 + 192);
                v20[1] = *(_DWORD *)(v5 + 196);
                v20[2] = *(_DWORD *)(v5 + 200);
              }
            }
          }
          (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 248))(v5);
          v3 = j;
        }
        else
        {
          ParticleClass::AdjustHeight(*(float **)(v4 + 4 * v3));
        }
        --v3;
      }
}
} }

// ==== BACKFILL 0x0062F230  ParticleSystemClass::SpawnParticle  cls=ParticleSystemClass  sig=csp  renamed_refs=5  residual=- ====
namespace gamemd { int ParticleSystemClass::SpawnParticle() {
{
      int v2;
      int v3;
      int v4;
      ParticleClass *v5;
      int v6;
      ParticleClass *v7;
      int v8;
      int v9;
      double v10;
      double v11;
      double v12;
      int v13;
      int eax9;
      ParticleSystemTypeClass *v14;
      ParticleSystemTypeClass *v15;
      ObjectClass *v16;
      IUnknown *v18;
      float *v19;
      float edx15;
      float v21;
      ParticleSystemTypeClass *v20;
      double v23;
      ParticleSystemTypeClass *v22;
      double st7_15a;
      int edx15b;
      BuildingTypeClass *v25;
      BuildingTypeClass *v26;
      int v29;
      BuildingTypeClass *v28;
      int *v31;
      int v32;
      int ecx15;
      int v34;
      ParticleSystemTypeClass *v33;
      ScenarioClass *ebx16;
      int eax17;
      TechnoTypeClass *v36;
      ParticleSystemTypeClass *v37;
      double v40;
      double v41;
      double v42;
      float eax21;
      float v44;
      float v45;
      ParticleSystemTypeClass *v43;
      double v47;
      double v48;
      double v49;
      bool v50;
      char *v51;
      char ecx_3_33;
      char v53;
      char v54;
      TechnoClass *v52;
      int i;
      int j;
      _BYTE *v58;
      int v60;
      int *v61;
      int _FFFFFFF0[3];
      int v63;
      AbstractClass *aP0[2];
      AbstractClass *aP1;
      ScenarioClass *v62;
      int v67;
      double v68;
      int v69;
      float v70;
      int v71;
      float v72;
      float v73;
      ParticleClass *v74;
      float v75;
      double v76;
      int v77;
      float v78;
      ParticleSystemTypeClass *v79;
      float v80;
      float v81;
      float v82;
      float v83;
      float v84;
      float v85;
      float v86;
      AbstractClass aP3;
      float v88;
      float v89;
      AbstractClass v90;

      if ( !this->q0F8 && !this->Owner )
      {
        v2 = this->SparkSpawnFrames;
        v3 = this->Lifetime;
        v4 = this->location;
        v5 = (ParticleClass *)(this->SpawnFrames - v4);
        v6 = this->q0A0;
        LODWORD(v73) = this->SpawnFrames - v4;
        v7 = (ParticleClass *)(v3 - v6);
        v8 = this->q0A4;
        v74 = v7;
        v9 = v2 - v8;
        v75 = *(float *)&v9;
        v68 = (double)(int)v7;
        v76 = (double)SLODWORD(v73);
        v10 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(v76 * v76 + v68 * v68 + (double)v9 * (double)v9));
        aP1 = (AbstractClass *)Math::RoundToInt(v10);
        v11 = v68 * v68 + v76 * v76;
        *(double *)aP0 = v11;
        v12 = Math::Sqrt((AbstractClass *)LODWORD(v11));
        v13 = Math::RoundToInt(v12);
        v69 = v13;
        v67 = v9;
        v62 = (ScenarioClass *)v5;
        if ( v9 >= (int)aP1 )
        {
          v9 = (int)aP1;
          v67 = (int)aP1;
        }
        if ( v9 <= -(int)aP1 )
          v67 = -(int)aP1;
        if ( (int)v5 >= v13 )
        {
          v5 = (ParticleClass *)v13;
          v62 = (ScenarioClass *)v13;
        }
        eax9 = -v13;
        if ( (int)v5 <= eax9 )
          v62 = (ScenarioClass *)eax9;
        v14 = (ParticleSystemTypeClass *)Math::RoundToInt((double)(int)aP1 * *(double *)(this->Type + 712));
        v79 = v14;
        v78 = (float)(int)aP1;
        *(float *)&aP1 = BuildingLight::CalcIntensity((double)v67 / v78);
        *(float *)&v62 = Math::ArcTan2_Table((double)(int)v62 / (double)v69);
        if ( (int)v7 < 0 )
          *(float *)&v62 = -*(float *)&v62;
        Matrix3x4::Identity(&v90.nextArrayIndex);
        Matrix2D::Rotate((float *)&v90.nextArrayIndex, (AbstractClass *)v62);
        Matrix3x3::RotateX((float *)&v90.nextArrayIndex, aP1);
        *(float *)&aP1 = 0.0;
        v67 = 0;
        if ( (int)v14 > 0 )
        {
          v86 = (float)(int)v79;
          do
          {
            v15 = *(ParticleSystemTypeClass **)(this + 172);
            *(float *)&v69 = (double)v67 / v86;
            v68 = v78 * *(float *)&v69 * *(double *)&v15->field_2D0;
            v16 = (ObjectClass *)HIDWORD(v68);
            v18 = (IUnknown *)LODWORD(v68);
            v68 = Math::SinCos((IUnknown *)LODWORD(v68));
            v63 = (int)v16;
            *(float *)&v71 = Math::ArcTan2(v18);
            v72 = v68;
            v70 = 0.0;
            v19 = TransformMatrix3x4Point(&v90, (IUnknown *)&v90.nextArrayIndex, (IUnknown *)&v70);
            edx15 = *v19;
            aP0[1] = (AbstractClass *)2147483646;
            v70 = edx15;
            aP0[0] = 0;
            v71 = *((int *)v19 + 1);
            v21 = v19[2];
            v20 = *(ParticleSystemTypeClass **)(this + 172);
            v72 = v21;
            v23 = *(double *)&v20->__pad_2D4[4];
            v73 = v70 * v23;
            v80 = v73;
            *(float *)&v74 = *(float *)&v71 * v23;
            v81 = *(float *)&v74;
            v75 = v21 * v23;
            v82 = v75;
            LODWORD(v68) = Random::Range(
                             (_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536),
                             0,
                             (IUnknown *)0x7FFFFFFE);
            LODWORD(v76) = Random::Range(
                             (_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536),
                             0,
                             (IUnknown *)0x7FFFFFFE);
            v77 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536), 0, (IUnknown *)0x7FFFFFFE);
            v22 = *(ParticleSystemTypeClass **)(this + 172);
            st7_15a = ((double)v77 * 4.656612877414201e-10 - 0.5) * *(double *)&v22->__pad_2D4[12];
            *(float *)&aP3.referenceCount = ((double)SLODWORD(v76) * 4.656612877414201e-10 - 0.5)
                                          * *(double *)&v22->__pad_2D4[12];
            *(float *)&aP3.NeedsSaveOrLink = ((double)SLODWORD(v68) * 4.656612877414201e-10 - 0.5)
                                           * *(double *)&v22->__pad_2D4[12];
            edx15b = this->q0A0;
            *(_DWORD *)&aP3[12] = this->location;
            aP3.uniqueId = edx15b;
            v25 = *(BuildingTypeClass **)(this + 164);
            v81 = *(float *)&aP3.referenceCount + v81;
            aP3.abstractFlags = (int)v25;
            v82 = *(float *)&aP3.NeedsSaveOrLink + v82;
            v26 = (BuildingTypeClass *)Math::RoundToInt(st7_15a + v73);
            v29 = Math::RoundToInt(v81);
            v28 = (BuildingTypeClass *)Math::RoundToInt(v82);
            v31 = Color::RGBFromFloat(&v90[12], (IUnknown *)(this + 212), *(float *)&v69);
            v32 = v31[1];
            ecx15 = *v31;
            v34 = v31[2];
            *(_DWORD *)&aP3[4] = v29 + v32;
            v33 = *(ParticleSystemTypeClass **)(this + 172);
            *(_DWORD *)aP3[0] = (char *)v26 + ecx15;
            *(_DWORD *)&aP3[8] = (char *)v28 + v34;
            if ( v33->field_294 == -1 )
            {
              ebx16 = 0;
            }
            else
            {
              eax17 = __2_YAPAXI_Z(0x138u);
              ebx16 = 0;
              if ( eax17 )
              {
                v62 = (ScenarioClass *)ParticleClass::Construct(
                                         eax17,
                                         *(ParticleClass **)(*(_DWORD *)&HouseClass_Player[80]
                                                           + 4 * *(_DWORD *)(this->Type + 660)),
                                         (ParticleClass *)&aP3,
                                         &aP3,
                                         (IUnknown *)this);
                if ( v62 )
                {
                  VectorClass::PushBackCopy((_DWORD *)(this + 188), (AbstractClass *)&v62);
                  ebx16 = v62;
                }
              }
              else
              {
                v62 = 0;
              }
            }
            v36 = (TechnoTypeClass *)&ebx16->altNextScenario[2];
            aP0[1] = (AbstractClass *)2147483646;
            aP0[0] = 0;
            *(float *)&ebx16->altNextScenario[2] = v70;
            ebx16->altNextScenario[3] = v71;
            *(float *)&ebx16->altNextScenario[4] = v72;
            v77 = Random::Range(
                    (_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536),
                    (IUnknown *)aP0[0],
                    (IUnknown *)aP0[1]);
            LODWORD(v76) = Random::Range(
                             (_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536),
                             0,
                             (IUnknown *)0x7FFFFFFE);
            LODWORD(v68) = Random::Range(
                             (_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536),
                             0,
                             (IUnknown *)0x7FFFFFFE);
            v37 = *(ParticleSystemTypeClass **)(this + 172);
            v40 = ((double)SLODWORD(v68) * 4.656612877414201e-10 - 0.5) * *(double *)&v37->field_2E8;
            v88 = ((double)SLODWORD(v76) * 4.656612877414201e-10 - 0.5) * *(double *)&v37->field_2E8;
            v89 = ((double)v77 * 4.656612877414201e-10 - 0.5) * *(double *)&v37->field_2E8;
            *(float *)&ebx16->altNextScenario[2] = v40 + *(float *)&ebx16->altNextScenario[2];
            *(float *)&ebx16->altNextScenario[3] = v88 + *(float *)&ebx16->altNextScenario[3];
            *(float *)&ebx16->altNextScenario[4] = v89 + *(float *)&ebx16->altNextScenario[4];
            v41 = *(float *)v36->vtable1 * *(float *)v36->vtable1
                + *(float *)&ebx16->altNextScenario[3] * *(float *)&ebx16->altNextScenario[3]
                + *(float *)&ebx16->altNextScenario[4] * *(float *)&ebx16->altNextScenario[4];
            *(double *)aP0 = v41;
            v42 = Math::Sqrt((AbstractClass *)LODWORD(v41));
            if ( v42 == 0.0 )
            {
              eax21 = *(float *)v36->vtable1;
              v44 = *(float *)&ebx16->altNextScenario[3];
              v45 = *(float *)&ebx16->altNextScenario[4];
            }
            else
            {
              v83 = *(float *)v36->vtable1 / v42;
              eax21 = v83;
              v84 = *(float *)&ebx16->altNextScenario[3] / v42;
              v44 = v84;
              v85 = *(float *)&ebx16->altNextScenario[4] / v42;
              v45 = v85;
            }
            *(float *)v36->vtable1 = eax21;
            *(float *)&ebx16->altNextScenario[3] = v44;
            *(float *)&ebx16->altNextScenario[4] = v45;
            LODWORD(v68) = Random::Range(
                             (_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536),
                             0,
                             (IUnknown *)0x7FFFFFFE);
            v43 = *(ParticleSystemTypeClass **)(this + 172);
            v47 = ((double)SLODWORD(v68) * 4.656612877414201e-10 + *(float *)&aP1 - 0.5)
                * (*(double *)&v43->__pad_2EC[4]
                 * 0.5);
            if ( *(double *)&v43->__pad_2EC[4] <= v47 )
              v48 = *(double *)&v43->__pad_2EC[4];
            else
              v48 = v47;
            v68 = -*(double *)&v43->field_2E8;
            if ( v48 <= v68 )
            {
              v47 = v68;
            }
            else if ( *(double *)&v43->__pad_2EC[4] <= v47 )
            {
              v47 = *(double *)&v43->__pad_2EC[4];
            }
            *(float *)&aP1 = v47;
            v49 = *(float *)&aP1 + *(float *)(ebx16->nextScenario[43] + 764);
            v50 = ++v67 < (int)v79;
            *(float *)&ebx16->nextScenario[57] = v49;
          }
          while ( v50 );
        }
        if ( *(_BYTE *)(this->Type + 779) )
        {
          v51 = (char *)__2_YAPAXI_Z(0x5Cu);
          if ( v51 )
          {
            aP0[1] = 0;
            aP0[0] = (AbstractClass *)1056964608;
            v63 = 1;
            _FFFFFFF0[2] = 0;
            _FFFFFFF0[1] = 10;
            HIBYTE(_FFFFFFF0[0]) = ecx_3_33;
            LOWORD(v67) = 0;
            v54 = v53;
            LOWORD(_FFFFFFF0[0]) = 0;
            LOWORD(aP1) = 0;
            v61 = _FFFFFFF0;
            BYTE2(_FFFFFFF0[0]) = 0;
            HIBYTE(v60) = v54;
            LOWORD(v61) = 0;
            BYTE2(v61) = 0;
            LOWORD(v60) = *(_WORD *)(this->Type + 776);
            BYTE2(v60) = *(_BYTE *)(this->Type + 778);
            TimerClass::Construct(
              v51,
              this->location,
              this->q0A0,
              *(TechnoTypeClass **)(this + 164),
              this->SpawnFrames,
              this->Lifetime,
              this->SparkSpawnFrames,
              0,
              1,
              v60,
              (int)v61,
              _FFFFFFF0[0],
              10,
              0,
              1,
              1056964608,
              0);
          }
        }
        this->q0F8 = 1;
      }
      v52 = *(TechnoClass **)(this + 204);
      for ( i = 0; i < (int)v52; ++i )
      {
        ParticleClass::Dispatch(*(_DWORD *)(this->TargetCoords + 4 * i));
        v52 = *(TechnoClass **)(this + 204);
      }
      for ( j = this->Owner - 1; j >= 0; --j )
      {
        v58 = *(_BYTE **)(this->TargetCoords + 4 * j);
        LOBYTE(v52) = v58[305];
        if ( (_BYTE)v52 )
          LOBYTE(v52) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v58 + 248))(v58);
      }
      return (char)v52;
}
} }

// ==== BACKFILL 0x0062FD60  ParticleSystemClass::Update  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ParticleSystemClass::Update() {
{
      int v2;
      int v3;

      switch ( *(_DWORD *)(this->Type + 692) )
      {
        case 0:
          UpdateBuildingParticleSystem(this);
          break;
        case 1:
          ParticleSystemClass::UpdateAllParticles(this);
          break;
        case 2:
          UpdateBuildingDamageParticles(this);
          break;
        case 3:
          UpdateProductionParticleSystem(this);
          break;
        case 4:
          ParticleSystemClass::SpawnParticle((int)this);
          break;
        default:
          break;
      }
      v2 = this->q0EC - 1;
      this->q0EC = v2;
      if ( !v2 )
        this->vt62();
      LOBYTE(v3) = this->isAliveFlag;
      if ( (_BYTE)v3 )
      {
        LOBYTE(v3) = this->q0F8;
        if ( (_BYTE)v3 )
        {
          v3 = this->Owner;
          if ( !v3 )
          {
            this->vt53();
            this->isAliveFlag = 0;
            LOBYTE(v3) = DataGlobal_B0F6A0;
            if ( DataGlobal_B0F6A8 < DataGlobal_B0F6A0
              || (DataGlobal_B0F6A5 || !DataGlobal_B0F6A0)
              && DataGlobal_B0F6AC > 0
              && (LOBYTE(v3) = (*(int (__thiscall **)(int *, int, _DWORD))(DataGlobal_B0F698 + 8))(
                                 &DataGlobal_B0F698,
                                 DataGlobal_B0F6A0 + DataGlobal_B0F6AC,
                                 0),
                  (_BYTE)v3) )
            {
              v3 = DataGlobal_B0F6A8++;
              *((_DWORD *)DataGlobal_B0F69C + v3) = this;
            }
          }
        }
      }
      return v3;
}
} }

// ==== BACKFILL 0x0062FE80  ParticleSystemClass::StubReturn2  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleSystemClass::StubReturn2()
{
return 2;
}

// ==== BACKFILL 0x0062FE90  ParticleSystemClass::UpdateSystem  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ParticleSystemClass::UpdateSystem(int a1, int a2) {
{
      DynamicVector *v4;
      int v5;
      int v6;
      int v7;
      ParticleSystemTypeClass *result;

      Object::Unlink((#374 *)this);
      v4 = *(DynamicVector **)(this + 188);
      a3 = (int)aP1;
      v5 = ((int (__thiscall *)(int, int *))v4->field_10)(this + 188, &a3);
      if ( v5 != -1 )
      {
        v6 = this->Owner;
        if ( v5 < v6 )
        {
          v7 = v6 - 1;
          for ( this->Owner = v7;
                v5 < this->Owner;
                *(_DWORD *)(this->TargetCoords + 4 * v5 - 4) = *(_DWORD *)(this->TargetCoords + 4 * v5) )
          {
            ++v5;
          }
        }
      }
      result = 0;
      if ( aP1 == *(IUnknown **)(this + 172) )
        this->Type = 0;
      if ( aP1 == *(IUnknown **)(this + 228) )
        this->TimeToDie = 0;
      if ( aP1 == *(IUnknown **)(this + 224) )
      {
        this->q0F8 = 1;
        this->SpotlightRadius = 0;
      }
      return (int)result;
}
} }
