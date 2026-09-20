// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x004F1720  Options::InitDialogControls  cls=Options  sig=csp  renamed_refs=0 ====
HWND Options::InitDialogControls()
{
{
    HWND result;
    HWND v3;
    IUnknown *v4;
    LPARAM v5;
    IUnknown *v6;
    const char **Options;
    HWND DlgItem;
    unsigned char v9;
    int v10[14];
    result = (HWND)g_GameMode_Current[0];
    if ( !g_GameMode_Current[0] || g_GameMode_Current[0] == 5 )
  {
    Options = (const char **)LoadOptions::LoadOptions(v10);
    v9 = LoadOptions::Check(Options);
    LoadOptions::Cleanup(v10);
    DlgItem = GetDlgItem(this, 1310);
    if ( DlgItem )
    EnableWindow(DlgItem, v9);
    result = GetDlgItem(this, 1312);
    if ( result )
    return (HWND)EnableWindow(result, v9);
  }
    else if ( g_GameMode_Current[0] == 4 )
  {
    result = (HWND)MuteSWLaunches;
    if ( !MuteSWLaunches )
    {
    v3 = GetDlgItem(this, 1007);
    v4 = (IUnknown *)v3;
    if ( v3 )
      {
    v5 = 3 - (int)g_NetworkHostState;
    SendMessageA(v3, 0x406u, 1u, 196608);
    SendMessageA((HWND)v4, 0x405u, 1u, v5);
      }
    result = GetDlgItem(this, 1321);
    v6 = (IUnknown *)result;
    if ( result )
      {
    SendMessageA(result, 0x406u, 1u, 393216);
    return (HWND)SendMessageA((HWND)v6, 0x405u, 1u, 6 - *(int *)g_GameModeOptions);
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x004F1B80  sub_4F1B80  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_4F1B80()
{
{
    char **v5;
    void *v6[4];
    int v7[3];
    int v8[6];
    char v9;
    int v10;
    int v11;
    int v12[22];
    char v13[12];
    int v14;
    CCFileClass::Construct2(v12, a2);
    if ( CCFileClass::Open(v12, 0) )
  {
    v6[1] = 0;
    v6[2] = 0;
    v7[1] = 0;
    v7[2] = 0;
    v7[0] = (unsigned int)vt_GenericNode;
    GenericNode::Constructor(v8);
    LinkedList::Prepend(v7, (int)v8);
    v6[3] = (unsigned int)vt_List_INIClass_INISection;
    memset(&v8[3], 0, 12);
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v6[0] = (unsigned int)vt_INIClass;
    if ( FileStraw::Open(v6, (int)v12, 0) <= 0 )
    v5 = 0;
    else
    v5 = LoadFromINIGraphicMenu(a1, v6, a3);
    HashTable::DestroyHashTableINIClass(v6);
    v12[0] = (unsigned int)vt_CCFileClass;
    v14 = 0;
    Vector::Clear((int)v13);
    v12[0] = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(v12);
    return v5;
  }
    else
  {
    v12[0] = (unsigned int)vt_CCFileClass;
    v14 = 0;
    Vector::Clear((int)v13);
    v12[0] = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(v12);
    return 0;
  }
}
}

// ==== BACKFILL 0x004F2280  sub_4F2280  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_4F2280::sub_4F2280(int a2, int a3)
{
{
    int result;
    void **v4;
    char *v5;
    int v6;
    v6 = 0;
    v5 = this + 88;
    v4 = (unsigned int)vt_VectorCursor_GraphicMenuItem_DynamicVectorClass_GraphicMenuItem;
    for ( result = Map::CanScroll(&v4); (char)result; result = ((int (__thiscall *)(void ***))v4[1])(&v4) )
  {
    if ( *(int *)(*(int *)(*((int *)(v5) + 1) + 4 * v6) + 4) == a2 )
    sub_4F3AB0(*(char **)(*((int *)(v5) + 1) + 4 * v6), a3);
    ((void (__thiscall *)(void ***))v4[2])(&v4);
  }
    return result;
}
}

// ==== BACKFILL 0x004F26E0  sub_4F26E0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_4F26E0::sub_4F26E0(int a2)
{
{
    int v2;
    void **v4;
    char *v5;
    int v6;
    v5 = this + 88;
    v6 = 0;
    v4 = &vt_VectorCursor_GraphicMenuItem_DynamicVectorClass_GraphicMenuItem;
    if ( Map::CanScroll(&v4) )
  {
    do
    {
    v2 = *(int *)(*((int *)(v5) + 1) + 4 * v6);
    if ( (*(unsigned char (__thiscall **)(int, int))(*(int *)(v2) + 8))(v2, a2) )
    break;
    ((void (__thiscall *)(void ***))v4[2])(&v4);
    }
    while ( ((unsigned char (__thiscall *)(void ***))v4[1])(&v4) );
  }
    if ( ((unsigned char (__thiscall *)(void ***))v4[1])(&v4) )
    return *(int *)(*((int *)(v5) + 1) + 4 * v6);
    else
    return 0;
}
}

// ==== BACKFILL 0x004F2770  sub_4F2770  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_4F2770::sub_4F2770(int a2)
{
{
    int v2;
    void **v4;
    char *v5;
    int v6;
    v5 = this + 88;
    v6 = 0;
    v4 = &vt_VectorCursor_GraphicMenuItem_DynamicVectorClass_GraphicMenuItem;
    if ( Map::CanScroll(&v4) )
  {
    do
    {
    v2 = *(int *)(*((int *)(v5) + 1) + 4 * v6);
    if ( (*(unsigned char (__thiscall **)(int, int))(*(int *)(v2) + 4))(v2, a2) )
    break;
    ((void (__thiscall *)(void ***))v4[2])(&v4);
    }
    while ( ((unsigned char (__thiscall *)(void ***))v4[1])(&v4) );
  }
    if ( ((unsigned char (__thiscall *)(void ***))v4[1])(&v4) )
    return *(int *)(*((int *)(v5) + 1) + 4 * v6);
    else
    return 0;
}
}

// ==== BACKFILL 0x004F28C0  HouseClass::vt_placeholder_07  cls=VectorCursor  sig=csp  renamed_refs=0 ====
VectorCursor * HouseClass::vt_placeholder_07(char a2)
{
{
    *(int *)this = &vt_VectorCursor_GraphicMenuItem_DynamicVectorClass_GraphicMenuItem;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorCursor *)this;
}
}

// ==== BACKFILL 0x004F2B40  HouseClass::vt_placeholder_09  cls=VectorCursor  sig=csp  renamed_refs=0 ====
unsigned int * HouseClass::vt_placeholder_09()
{
{
    ++this->vtable2;
    return this;
}
}

// ==== BACKFILL 0x004F2B50  HouseClass::vt_placeholder_10  cls=VectorCursor  sig=csp  renamed_refs=0 ====
unsigned int * HouseClass::vt_placeholder_10()
{
{
    --this->vtable2;
    return this;
}
}

// ==== BACKFILL 0x004F2C00  sub_4F2C00  cls=VectorClass  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_4F2C00::sub_4F2C00(int a2, int a3)
{
{
    this->M4 = 0;
    this->M8 = a2;
    this->M12 = 1;
    this->M13 = 0;
    *(void**)this = &vt_VectorClass_GraphicMenuItem;
    if ( a2 )
  {
    if ( a3 )
    {
    this->M4 = a3;
    return this;
    }
    this->M4 = __2_YAPAXI_Z(4 * a2);
    this->M13 = 1;
  }
    return this;
}
}

// ==== BACKFILL 0x004F2F10  sub_4F2F10  cls=GraphicMenuAnimItem  sig=csp  renamed_refs=0 ====
int * E4Recv_4F2F10::sub_4F2F10(GraphicMenuAnimItem * aP1, unsigned int * a2, GraphicMenuAnimItem * aP3, int * a4, GraphicMenuAnimItem * aP5, char ** a6, GraphicMenuAnimItem * aP7, GraphicMenuAnimItem * aP8)
{
{
    int v10;
    char *v11;
    void *v12;
    MSShapeAnim *v13;
    int v15;
    int v16[22];
    char v17[12];
    int v18;
    int v19[22];
    char v20[12];
    int v21;
    GraphicMenuItem::Constructor(this, aP1);
    this->M16 = *a4;
    this->M20 = *((int*)(a4) + 1);
    this->M24 = *((int*)(a4) + 2);
    v10 = *((int*)(a4) + 3);
    this->M32 = 0;
    this->M28 = v10;
    this->M36 = 0;
    *(void**)this = (int)&vt_GraphicMenuAnimItem;
    CCFileClass::Construct2(v19, (char **)aP5);
    CCFileClass::Construct2(v16, a6);
    if ( CCFileClass::Open(v19, 0) )
  {
    if ( CCFileClass::Open(v16, 0) )
    {
    v11 = String::GetOrEmpty_Alt(a6);
    String::Assign((char **)&v15, v11);
    this->M36 = (int)PaletteClass::Load((const char **)&v15);
    DeleteAndZero((int)&v15);
    v12 = (void *)__2_YAPAXI_Z(0x40u);
    if ( v12 )
      {
    v13 = (MSShapeAnim *)MSShapeAnim::Constructor( v12, (MSShapeAnim *)aP5, *(MSShapeAnim **)aP3->__pad_0, aP3->GraphicMenuAnimItem_field_0x04, (MSShapeAnim *)this->M36, (int)aP7, (MSShapeAnim *)aP8, 0);
    if ( v13 )
    PriorityQueue::Add((Selection_WorldDominationTour *)a2, (MSAnim *)v13);
      }
    }
  }
    v16[0] = &vt_CCFileClass;
    v18 = 0;
    Vector::Clear((int)v17);
    v16[0] = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(v16);
    v19[0] = &vt_CCFileClass;
    v21 = 0;
    Vector::Clear((int)v20);
    v19[0] = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(v19);
    return this;
}
}

// ==== BACKFILL 0x004F3460  sub_4F3460  cls=GraphicMenuImageItem  sig=csp  renamed_refs=0 ====
int E4Recv_4F3460::sub_4F3460(int aP1, ReferenceCounted * aP2, unsigned int * a3, ReferenceCounted * aP4, const char ** a5, ReferenceCounted * aP6, const char ** a7, ReferenceCounted * aP8, const char ** a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4F3460(
        int this,
        int aP1,
        ReferenceCounted *aP2,
        _DWORD *a3,
        ReferenceCounted *aP4,
        const char **a5,
        ReferenceCounted *aP6,
        const char **a7,
        ReferenceCounted *aP8,
        const char **a9)
{
  char v10; // bl
  Selection_WorldDominationTour *v12; // edi
  ReferenceCounted *v13; // edx
  ReferenceCounted v14; // edx
  ObjectClass *v15; // ebp
  int v16; // eax
  ObjectClass *v17; // ebx
  unsigned int v18; // eax
  _DWORD *v19; // ebp
  _DWORD *v20; // eax
  MSAnim *v21; // eax
  ObjectClass *v22; // ebx
  _DWORD *v23; // eax
  MSAnim *v24; // eax
  ObjectClass *v25; // ebx
  _DWORD *v26; // eax
  MSAnim *v27; // eax

  v10 = 0; /*0x4f3469*/
  GraphicMenuItem::Constructor((_DWORD *)this, (GraphicMenuAnimItem *)aP1); /*0x4f3472*/
  v12 = (Selection_WorldDominationTour *)aP2; /*0x4f3477*/
  v13 = aP4; /*0x4f347b*/
  this->M16 = aP2; /*0x4f347f*/
  *(ReferenceCounted *)(this + 20) = *v13; /*0x4f3487*/
  *(ReferenceCounted *)(this + 24) = v13[1]; /*0x4f348c*/
  *(ReferenceCounted *)(this + 28) = v13[2]; /*0x4f3492*/
  v14 = v13[3]; /*0x4f3495*/
  this->M36 = 0; /*0x4f3498*/
  *(ReferenceCounted *)(this + 32) = v14; /*0x4f349b*/
  this->M40 = 0; /*0x4f34a1*/
  this->M44 = 0; /*0x4f34a4*/
  this->M48 = 0; /*0x4f34a7*/
  unknown_libname_73((_DWORD *)(this + 52)); /*0x4f34aa*/
  v15 = (ObjectClass *)aP8; /*0x4f34af*/
  *(_DWORD *)this = &vt_GraphicMenuImageItem; /*0x4f34b3*/
  if ( String::Length((const char **)v15) && (aP2 = (ReferenceCounted *)__2_YAPAXI_Z(0x10u)) != 0 ) /*0x4f34d4*/
  {
    String::Assign((char **)&aP1, aHighlightsound); /*0x4f34df*/
    v10 = 1; /*0x4f34ee*/
    v16 = Audio::ParseVolume((int)aP2, (const char **)&aP1, v15); /*0x4f34f3*/
  }
  else
  {
    v16 = 0; /*0x4f34fa*/
  }
  this->M48 = v16; /*0x4f34ff*/
  if ( (v10 & 1) != 0 ) /*0x4f3502*/
    DeleteAndZero((int)&aP1); /*0x4f3508*/
  String::Reassign((char **)(this + 52), (AbstractClass *)a9); /*0x4f3515*/
  v17 = (ObjectClass *)aP6; /*0x4f351a*/
  v18 = String::Length((const char **)aP6); /*0x4f3520*/
  v19 = a3; /*0x4f3525*/
  if ( v18 )
  {
    v20 = (_DWORD *)__2_YAPAXI_Z(0x3Cu); /*0x4f352f*/
    v21 = v20 ? (MSAnim *)MSPCXAnim::Construct(v20, v17, (MSAnim *)&v12->__pad_4[20], v19, 1) : 0;
    this->M40 = v21; /*0x4f3550*/
    if ( v21 ) /*0x4f3553*/
    {
      (*(void (__thiscall **)(MSAnim *, _DWORD))(*(_DWORD *)v21->__pad_0 + 4))(v21, 0); /*0x4f355b*/
      PriorityQueue::Add(v12, *(MSAnim **)(this + 40)); /*0x4f3564*/
    }
  }
  v22 = (ObjectClass *)a5; /*0x4f3569*/
  if ( String::Length(a5) )
  {
    v23 = (_DWORD *)__2_YAPAXI_Z(0x3Cu); /*0x4f357a*/
    v24 = v23 ? (MSAnim *)MSPCXAnim::Construct(v23, v22, (MSAnim *)&v12->__pad_4[20], v19, 1) : 0;
    this->M36 = v24; /*0x4f359b*/
    if ( v24 ) /*0x4f359e*/
      PriorityQueue::Add(v12, v24); /*0x4f35a3*/
  }
  v25 = (ObjectClass *)a7; /*0x4f35a8*/
  if ( String::Length(a7) ) /*0x4f35ae*/
  {
    v26 = (_DWORD *)__2_YAPAXI_Z(0x3Cu); /*0x4f35b9*/
    if ( v26 ) /*0x4f35c3*/
      v27 = (MSAnim *)MSPCXAnim::Construct(v26, v25, (MSAnim *)&v12->__pad_4[20], v19, 1); /*0x4f35cf*/
    else
      v27 = 0; /*0x4f35d6*/
    this->M44 = v27; /*0x4f35da*/
    if ( v27 ) /*0x4f35dd*/
    {
      (*(void (__thiscall **)(MSAnim *, _DWORD))(*(_DWORD *)v27->__pad_0 + 4))(v27, 0); /*0x4f35e5*/
      PriorityQueue::Add(v12, *(MSAnim **)(this + 44)); /*0x4f35ee*/
    }
  }
  return this; /*0x4f35f5*/
}
}

// ==== BACKFILL 0x004F37A0  GraphicMenuImageItem::ddtor  cls=GraphicMenuImageItem  sig=csp  renamed_refs=0 ====
int GraphicMenuImageItem::ddtor(int a2)
{
    int v7[22];
    unsigned char v8[12];
    int v9;
    NullGuard::Call(this, a2);
    char **v3 = &this->fileName;
    CCFileClass *v4 = CCFileClass::Construct2(v7, v3);
    char v5 = v4->vt20(0);
    v7[0] = &vt_CCFileClass;
    v9 = 0;
    Vector::Clear(v8);
    v7[0] = &off_7E1668;
    int result = BufferIOFileClass::Dtor(v7);
    if ( v5 )
    {
        result = OperatorNew(0x30u);
        if ( result )
        {
            result = MSVQAnim::ConstructMSVQAnimHidden(result, v3, DSurface_Alternate, a2 + 6, 1);
            if ( result )
                return MSEngine::ProcessEvents(a2, (char)result, 300000);
        }
    }
    return result;
}

// ==== BACKFILL 0x004F3A90  State::SetIfChanged  cls=State  sig=csp  renamed_refs=2 ====
namespace gamemd { namespace wdt { int State::SetIfChanged(int a1) {
{
      int result;
      int v3;

      result = a2;
      if ( (_BYTE)a2 != this->AIPlayers )
      {
        v3 = *(_DWORD *)this;
        this->AIPlayers = a2;
        return (*(int (__stdcall **)(int))(v3 + 16))(a2);
      }
      return result;
}
} } }

// ==== BACKFILL 0x004F3AD0  GraphicMenuAnimItem::StubReturnFalse  cls=GraphicMenuItem  sig=csp  renamed_refs=0 ====
void GraphicMenuAnimItem::StubReturnFalse() {}

// ==== BACKFILL 0x004F3AE0  GraphicMenuAnimItem::Stub  cls=GraphicMenuItem  sig=csp  renamed_refs=0 ====
void GraphicMenuAnimItem::Stub() {}

// ==== BACKFILL 0x004F3C40  sub_4F3C40  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_4F3C40::sub_4F3C40(int a2, const char ** a3)
{
{
    int *v3;
    int *v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    v3 = this;
    GraphicMenuItem::Constructor(this, a2);
    v4 = v3 + 4;
    v3[5] = 0;
    v3[6] = 0;
    *((char *)(v3) + 28) = 1;
    *((char *)(v3) + 29) = 0;
    v3[4] = &vt_DynamicVectorClass_unsigned_int;
    v3[9] = 10;
    v3[8] = 0;
    *v3 = &vt_GraphicMenuShortcutItem;
    unknown_libname_73(&a2);
    v5 = String::Tokenize(a3, 0, Delimiter, (void **)&a2);
    if ( String::Length((const char **)&a2) )
  {
    do
    {
    v6 = sub_4F3D40((const char **)&a2);
    if ( v6 )
      {
    v7 = v4[2];
    if ( v4[4] < v7 || (*((char *)(v4) + 13) || !v7) && (v8 = v4[5], v8 > 0) && (*(unsigned char (__thiscall **)(int *, int, int))(*v4 + 8))(v4, v7 + v8, 0) )
        {
    v9 = v4[4];
    v10 = v4[1];
    v4[4] = v9 + 1;
    *(int *)(v10 + 4 * v9) = v6;
        }
      }
    v5 = String::Tokenize(a3, v5, DataGlobal_824370, (void **)&a2);
    if ( v5 == -1 )
    DeleteAndZero::Alt2((void **)&a2);
    }
    while ( String::Length((const char **)&a2) );
    v3 = this;
  }
    DeleteAndZero((void **)&a2);
    return v3;
}
}

// ==== BACKFILL 0x004F4220  RadarClass::initRadarSurface  cls=RadarClass  sig=csp  renamed_refs=2 ====
unsigned int * RadarClass::initRadarSurface()
{
{
    this->RadarClass_field_0x4 = 0;
    this->RadarClass_field_0x8 = 0;
    this->IsInitialized = 2;
    *(void**)this = &vt_GScreenClass;
    return this;
}
}

// ==== BACKFILL 0x004F4240  COMObject::QueryInterface  cls=GScreenClass  sig=csp  renamed_refs=0 ====
int COMObject::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
{
    if ( !a3 )
    return -2147467261;
    if ( memcmp(a2, &IID_IUnknown, 0x10u) && memcmp(a2, &DataGlobal_7EA6E8, 0x10u) )
    return -2147467262;
    *a3 = a1;
    (*(void (__stdcall **)(int))(*(int *)(a1) + 4))(a1);
    return 0;
}
}

// ==== BACKFILL 0x004F42A0  VectorCursor_uint_DynamicVectorClass_uint____13::Add  cls=GScreenClass  sig=csp  renamed_refs=0 ====
void VectorCursor_uint_DynamicVectorClass_uint____13::Add()
{
{
    DataGlobal_A8EF54 = 0;
}
}

// ==== BACKFILL 0x004F42B0  COMObject::DtorSequence  cls=GScreenClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int COMObject::DtorSequence(int a1) {
{
      this->vt7();
      return this->vt8();
}
} }

// ==== BACKFILL 0x004F42E0  VectorCursor_uint_DynamicVectorClass_uint____13::Get  cls=GScreenClass  sig=csp  renamed_refs=0 ====
void VectorCursor_uint_DynamicVectorClass_uint____13::Get()
{
{
    DataGlobal_A8EF54 = 0;
}
}

// ==== BACKFILL 0x004F42F0  MapClass::MarkForRedraw  cls=GScreenClass  sig=csp  renamed_refs=0 ====
int MapClass::MarkForRedraw(int a2)
{
{
    int result;
    if ( g_TacticalClass_Instance )
    BYTE1(g_TacticalClass_Instance[863].__tail_0) = 1;
    result = a2;
    if ( a2 )
  {
    if ( this->IsInitialized != 2 )
    this->IsInitialized = a2;
    return MapClass::IncrementRedrawCounter(&DataGlobal_87F7E8);
  }
    return result;
}
}

// ==== BACKFILL 0x004F43F0  COMObject::IsSameType  cls=GScreenClass  sig=csp  renamed_refs=0 ====
bool COMObject::IsSameType(GScreenClass * aP0)
{
{
    return *(int *)&HouseClass_Player.__pad_5568[23712] == (*(int (__thiscall **)(GScreenClass *))(aP0->parent_gap[0] + 24))(aP0);
}
}

// ==== BACKFILL 0x004F4450  Tactical::SelectObject  cls=GScreenClass  sig=csp  renamed_refs=0 ====
char Tactical::SelectObject(int a2)
{
{
    char result;
    result = this->StubReturn56(a2);
    if ( result )
  {
    DataGlobal_A8EF54 = (*(int (__thiscall **)(int))(*(int *)(a2) + 36))(a2);
    return 1;
  }
    return result;
}
}

// ==== BACKFILL 0x004F4C00  AbstractClass::getHouseHandle  cls=GScreenClass  sig=csp  renamed_refs=0 ====
GScreenClass * AbstractClass::getHouseHandle(char a2)
{
{
    *(int *)this = &DataGlobal_7EA6FC;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (GScreenClass *)this;
}
}

// ==== BACKFILL 0x004F4C20  Byte::Zero  cls=Byte  sig=csp  renamed_refs=0 ====
unsigned char * Byte::Zero()
{
{
    *(void**)this = 0;
    return this;
}
}

// ==== BACKFILL 0x004F4D30  sub_4F4D30  cls=ObjectClass  sig=csp  renamed_refs=0 ====
bool E4Recv_4F4D30::sub_4F4D30(const char * a2)
{
{
    return strcmp(this, a2) != 0;
}
}

// ==== BACKFILL 0x004F6830  HouseClass::QueryInterface  cls=HouseClass  sig=csp  renamed_refs=0 ====
int HouseClass::QueryInterface(CCINIClass * aP0, const void * a1, unsigned int * a2)
{
{
    char *v4;
    char *v5;
    int *p_INIClass_field_2C;
    if ( !a2 )
    return -2147467261;
    *a2 = 0;
    if ( !memcmp(a1, &IID_IUnknown, 0x10u) )
    *a2 = aP0;
    if ( !memcmp(a1, &IID_IHouse, 0x10u) )
  {
    if ( aP0 )
    v4 = &aP0->__pad_20[4];
    else
    v4 = 0;
    *a2 = v4;
  }
    if ( !memcmp(a1, &IID_IPublicHouse, 0x10u) )
  {
    if ( aP0 )
    v5 = &aP0->__pad_20[8];
    else
    v5 = 0;
    *a2 = v5;
  }
    if ( !memcmp(a1, &DataGlobal_7F7CD0, 0x10u) )
  {
    if ( aP0 )
    p_INIClass_field_2C = &aP0->INIClass_field_2C;
    else
    p_INIClass_field_2C = 0;
    *a2 = p_INIClass_field_2C;
  }
    if ( !memcmp(a1, &IID_IPersist, 0x10u) )
    *a2 = aP0;
    if ( !memcmp(a1, &IID_IPersistStream, 0x10u) )
    *a2 = aP0;
    if ( !*a2 )
    return -2147467262;
    (*(void (__stdcall **)(CCINIClass *))(*(int *)aP0->__pad_0 + 4))(aP0);
    return 0;
}
}

// ==== BACKFILL 0x004F6910  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex  cls=unknown  sig=csp  renamed_refs=0 ====
bool VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex(int a1)
{
{
    return *(int*)(a1 + 21372) >= *(int*)(a1 + 21376);
}
}

// ==== BACKFILL 0x004F6930  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex_0  cls=unknown  sig=csp  renamed_refs=0 ====
void * VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex_0(int a2)
{
{
    void *v3;
    v3 = this;
    sub_429360((int)&punk, &DataGlobal_7E36C0, &v3);
    return v3;
}
}

// ==== BACKFILL 0x004F6950  VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex  cls=unknown  sig=csp  renamed_refs=0 ====
BSTR VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex(int a1)
{
{
    WCHAR WideCharStr[32];
    MultiByteToWideChar(0, 1u, (LPCCH)(*(int*)(a1 + 16) + 100), -1, WideCharStr, 32);
    return SysAllocString(WideCharStr);
}
}

// ==== BACKFILL 0x004F6990  VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex_0  cls=HouseClass  sig=csp  renamed_refs=0 ====
long long VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex_0(int a1)
{
{
    float v3;
    int TotalValue;
    v3 = *(float*)(*(int*)(a1 + 16) + 328);
    TotalValue = AbstractClass::GetTotalValue((float*)(a1 + 728));
    return Math::RoundToInt((double)TotalValue * v3 + (double)*(int*)(a1 + 744));
}
}

// ==== BACKFILL 0x004F69D0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::Destroy  cls=HouseClass  sig=csp  renamed_refs=0 ====
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::Destroy(int a1)
{
{
    double v1;
    v1 = Float4::Sum((float*)(a1 + 728));
    return *(int*)(a1 + 748) - Math::RoundToInt(v1);
}
}

// ==== BACKFILL 0x004F6A00  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem  cls=HouseClass  sig=csp  renamed_refs=0 ====
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem(int a1)
{
{
    return *(int*)(a1 + 21376);
}
}

// ==== BACKFILL 0x004F6A10  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_0  cls=HouseClass  sig=csp  renamed_refs=0 ====
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_0(int a1)
{
{
    return *(int*)(a1 + 21380);
}
}

// ==== BACKFILL 0x004F6E60  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_1  cls=unknown  sig=csp  renamed_refs=0 ====
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_1(int a1)
{
{
    return *(int*)(a1 + 12);
}
}

// ==== BACKFILL 0x004F7850  sub_4F7850  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_4F7850::sub_4F7850()
{
{
    *(void**)this = 0;
    this->M4 = 1;
    this->M8 = 0;
    this->M12 = 0;
    this->M16 = -1;
    return this;
}
}

// ==== BACKFILL 0x004F9370  HouseClass::Update  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::Update() {
{
    int v2;
    int result;
    int v4;
    int Status;
    v2 = 0;
    result = this->lastBuiltInfantryType;
    if ( result > 0 )
  {
    do
    {
    v4 = *(int *)(this->supersCount + 4 * v2);
    if ( SuperWeapon::UpdateSuperWeaponReadyState(v4, this == HouseClass_Player) )
      {
    if ( this == HouseClass_Player )
        {
    (*(void (__thiscall **)(int))(**(int **)(v4 + 40) + 64))(*(int *)(v4 + 40));
    Status = HouseClass::GetStatus((void *)0x39, 0);
    Sidebar::ActivateTab((int)&DataGlobal_87F7E8, Status);
        }
      }
    result = this->lastBuiltInfantryType;
    ++v2;
    }
    while ( v2 < result );
  }
    return result;
}
} }

// ==== BACKFILL 0x004F9610  HouseClass::GiveTiberium_Storage  cls=HouseClass  sig=csp  renamed_refs=0 ====
double HouseClass::GiveTiberium_Storage(AbstractClass * aP1, BuildingClass * aP2)
{
{
    this->siloMoney = Math::RoundToInt(*(float *)&aP1 * 5.0 + (double)(int)this->siloMoney);
    this->balance = Math::RoundToInt( (double)*(int *)(*(int *)(*(int *)&g_OverlayTypeConfig.__pad_579C[9560] + 4 * (int)aP2) + 184) * *(float *)(this->relatedTagsCapacity + 328) * *(float *)&aP1 + (double)(int)this->balance);
    return *(float *)&aP1;
}
}

// ==== BACKFILL 0x004F9670  sub_4F9670  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_4F9670::sub_4F9670()
{
{
    int v2;
    int v3;
    int v4;
    double v5;
    float v7;
    float v8;
    int v9;
    v2 = 0;
    v3 = 0;
    v7 = 0.0;
    v9 = this->M120;
    if ( v9 <= 0 )
    return 0;
    do
  {
    v4 = *(int *)(this->M108 + 4 * v3);
    if ( v4 )
    {
    if ( *(char *)(v4 + 116) )
      {
    if ( *(int *)(*(int *)(v4 + 1312) + 2048) > 0 )
        {
    v8 = (float)*(int *)(*(int *)(v4 + 1312) + 2048);
    v5 = v8 - Float4::Sum((float *)(v4 + 828));
    if ( !v2 || v5 > v7 )
          {
    v7 = v5;
    v2 = v4;
          }
        }
      }
    }
    ++v3;
  }
    while ( v3 < v9 );
    return v2;
}
}

// ==== BACKFILL 0x004F9700  FactoryClass::AccumulateCreditsProgress  cls=FactoryClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void FactoryClass::AccumulateCreditsProgress(int a2, int a3) {
{
    int v3;
    float *v4;
    float v5;
    v3 = a2;
    if ( a2 > 0 )
  {
    v4 = this + 197;
    do
    {
    v5 = (float)g_RulesClass_Instance[1].?[1];
    if ( Float4::Sum(v4) >= v5 )
    break;
    Float::Accumulate(v4, 1.0, a3);
    --v3;
    }
    while ( v3 > 0 );
  }
}
} }

// ==== BACKFILL 0x004F9750  BuildingClass::checkRepairEligibility  cls=BuildingClass  sig=csp  renamed_refs=0 ====
namespace gamemd { double BuildingClass::checkRepairEligibility(HouseClass* pHouse) {
{
    float *v1;
    v1 = this + 197;
    if ( Float4::Sum(this + 197) == 0.0 )
    return 0.0;
    else
    return Float4::Sum(v1) / (double)g_RulesClass_Instance[1].?[1];
}
} }

// ==== BACKFILL 0x004F9950  HouseClass::AddPower  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::AddPower(int a1) {
{
    this->balance += aP1;
    return (int)aP1;
}
} }

// ==== BACKFILL 0x004F9970  HouseClass::UpdateAllSilos  cls=HouseClass  sig=csp  renamed_refs=0 ====
char HouseClass::UpdateAllSilos(int a2, int a3)
{
{
    int v3;
    int v5;
    double v6;
    int v7;
    int i;
    int v9;
    v3 = 0;
    if ( a3 )
    v3 = Math::RoundToInt((double)a2 / (double)a3 * 4.0 + 0.5);
    v5 = 0;
    if ( this->totalStorage )
  {
    v6 = Float4::Sum((float *)(this + 764));
    v5 = Math::RoundToInt(v6 / (double)this->totalStorage * 4.0 + 0.5);
  }
    if ( v3 != v5 )
  {
    v7 = this->bunkersCount;
    for ( i = 0; i < v7; ++i )
    {
    v5 = this->absorbersCount;
    v9 = *(int *)(v5 + 4 * i);
    if ( v9 )
      {
    LOBYTE(v5) = *(char *)(v9 + 129);
    if ( !(char)v5 )
        {
    LOBYTE(v5) = *(char *)(*(int *)(v9 + 1312) + 5800);
    if ( (char)v5 )
    LOBYTE(v5) = (*(int (__thiscall **)(int, int))(*(int *)(v9) + 292))(v9, 2);
        }
      }
    }
  }
    return v5;
}
}

// ==== BACKFILL 0x004F9B50  HouseClass::MakeAlly  cls=HouseClass  sig=csp  renamed_refs=0 ====
int HouseClass::MakeAlly(int a2, char a3)
{
{
    return HouseClass::HandleAlliance((int)this, *(int *)&HouseClass_Array->__pad_0[4 * a2], a3);
}
}

// ==== BACKFILL 0x004FA210  sub_4FA210  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_4FA210::sub_4FA210(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4FA210(void *this, int a2, int a3)
{
  int v3; // eax
  bool v4; // zf
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  CCINIClass *v9; // eax
  CCINIClass *v11; // [esp+8h] [ebp-1Ch] BYREF
  void *Block; // [esp+Ch] [ebp-18h]
  int v13; // [esp+10h] [ebp-14h]
  char v14; // [esp+15h] [ebp-Fh]
  int v15; // [esp+18h] [ebp-Ch]
  int v16; // [esp+1Ch] [ebp-8h]

  AISelectTeamHouseClass((IUnknown *)&v11, (int)this, a3); /*0x4fa220*/
  *(_DWORD *)(a2 + 4) = 0; /*0x4fa231*/
  *(_DWORD *)(a2 + 8) = 0; /*0x4fa234*/
  *(_BYTE *)(a2 + 12) = 1; /*0x4fa237*/
  *(_BYTE *)(a2 + 13) = 0; /*0x4fa23b*/
  *(_DWORD *)a2 = &vt_VectorClass_TeamTypeClass_const; /*0x4fa23e*/
  if ( (CCINIClass **)a2 != &v11 ) /*0x4fa244*/
  {
    VectorClass::ClearAndFree3(a2); /*0x4fa248*/
    v3 = v13; /*0x4fa24e*/
    v4 = v13 == 0; /*0x4fa252*/
    *(_DWORD *)(a2 + 8) = v13; /*0x4fa254*/
    if ( v4 ) /*0x4fa257*/
    {
      *(_DWORD *)(a2 + 4) = 0; /*0x4fa294*/
      *(_BYTE *)(a2 + 13) = 0; /*0x4fa297*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(4 * v3); /*0x4fa261*/
      *(_DWORD *)(a2 + 4) = v5; /*0x4fa26b*/
      if ( v5 ) /*0x4fa26e*/
      {
        v6 = *(_DWORD *)(a2 + 8); /*0x4fa270*/
        v7 = 0; /*0x4fa273*/
        *(_BYTE *)(a2 + 13) = 1; /*0x4fa277*/
        if ( v6 > 0 ) /*0x4fa27b*/
        {
          do /*0x4fa290*/
          {
            *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v7) = *((_DWORD *)Block + v7); /*0x4fa287*/
            ++v7; /*0x4fa28d*/
          }
          while ( v7 < *(_DWORD *)(a2 + 8) ); /*0x4fa290*/
        }
      }
    }
  }
  v8 = v16; /*0x4fa29e*/
  *(_DWORD *)(a2 + 16) = v15; /*0x4fa2a2*/
  v9 = (CCINIClass *)Block; /*0x4fa2a5*/
  v4 = Block == 0; /*0x4fa2a9*/
  *(_DWORD *)(a2 + 20) = v8; /*0x4fa2ab*/
  *(_DWORD *)a2 = &vt_TypeList_TeamTypeClass_const; /*0x4fa2ae*/
  v11 = (CCINIClass *)&vt_VectorClass_TeamTypeClass_const; /*0x4fa2b4*/
  if ( !v4 && v14 ) /*0x4fa2c2*/
    __3_YAXPAX_Z(v9); /*0x4fa2c5*/
  return a2; /*0x4fa2cf*/
}
}

// ==== BACKFILL 0x004FA2E0  HouseClass::SetThreat_Bounds  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::SetThreat_Bounds(int a1, int a2) {
{
      int v3;
      int v5;
      int v6;
      int v7;
      int *v8;
      int result;
      int v10;

      v3 = a3;
      if ( a3 >= 0 )
      {
        v5 = 0;
      }
      else
      {
        v3 = -a3;
        v5 = 1;
      }
      v6 = 0;
      v10 = 9;
      do
      {
        v7 = v3 >> DataGlobal_8243EC[v6];
        v8 = (int *)(this + 4 * a2 + 4 * DataGlobal_8243C8[v6] + 22500);
        if ( v5 )
          *v8 -= v7;
        else
          *v8 += v7;
        if ( *v8 < 0 )
          *v8 = 0;
        ++v6;
        result = --v10;
      }
      while ( v10 );
      return result;
}
} }

// ==== BACKFILL 0x004FAD20  SuperWeapon::SelectSuperWeaponTarget  cls=SuperWeapon  sig=csp  renamed_refs=0 ====
namespace gamemd { int SuperWeapon::SelectSuperWeaponTarget(int a1) {
{
      int v3;
      int v4;
      int v5;
      int v6;
      int v7;
      int v8;
      bool v9;
      _DWORD *v10;
      int v12;
      int v13;
      int v14;
      _BYTE v15[12];

      v3 = 0;
      v4 = -1;
      v5 = 0;
      v12 = 0;
      if ( *(int *)&g_NetworkPlayerBuffer.__pad_14B0[100] > 0 )
      {
        do
        {
          v6 = *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer.__pad_14B0[88] + 4 * v5);
          if ( v6 && !*(_BYTE *)(v6 + 129) && *(_DWORD *)(v6 + 108) )
          {
            v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 60))(v6);
            if ( !v7
              || (_DWORD *)v7 != this
              && ((v8 = *(_DWORD *)(v7 + 48), v8 != this->q030)
                ? (v8 == -1
                 ? (v9 = 0)
                 : (v9 = ((1 << v8) & this->q5788) != 0))
                : (v9 = 1),
                  !v9) )
            {
              if ( Random::Range(&g_ScenarioClass_Instance->random[1], 0, (IUnknown *)0x63) < 90
                && ((*(int (__thiscall **)(int))(*(_DWORD *)v6 + 384))(v6) > v4 || v4 == -1) )
              {
                v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 384))(v6);
                v3 = v6;
              }
            }
          }
          v5 = ++v12;
        }
        while ( v12 < *(int *)&g_NetworkPlayerBuffer.__pad_14B0[100] );
        if ( v3 )
        {
          v10 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 72))(v3, v15);
          LOWORD(v13) = *v10 / 256;
          HIWORD(v13) = v10[1] / 256;
          v14 = v13;
          LOBYTE(v5) = SuperWeapon::FireSuperWeaponHouseClass(this, aP1, (AbstractClass *)&v14);
        }
      }
      return v5;
}
} }

// ==== BACKFILL 0x004FAE50  SuperWeapon::FireSuperWeaponHouseClass  cls=SuperWeapon  sig=csp  renamed_refs=0 ====
namespace gamemd { int SuperWeapon::FireSuperWeaponHouseClass(int a1, int a2) {
{
      int v4;
      int v5;
      int v6;
      int v7;
      IUnknown *v8;
      int i;
      int v10;

      v4 = this->q258;
      v5 = 0;
      v6 = *(_DWORD *)(v4 + 4 * (_DWORD)aP1);
      v7 = *(_DWORD *)(v6 + 40);
      if ( *(_BYTE *)(v7 + 238) )
      {
        v5 = *(_DWORD *)(v4 + 4 * *(_DWORD *)(v7 + 240));
        if ( v5 )
          *(_DWORD *)(v6 + 98) = *(_DWORD *)(v5 + 98);
      }
      LOBYTE(v7) = this == HouseClass_Player;
      SuperClass::ClickFire(v6, v7, (__int16 *)aP2->__pad_0);
      if ( *(_BYTE *)(*(_DWORD *)(v6 + 40) + 238) && v5 )
      {
        SuperClass::SetReadiness((_BYTE *)v5, 0);
        LOBYTE(v8) = this == HouseClass_Player;
        SuperClass::StopPreclickAnim(v5, v8);
      }
      for ( i = (int)&HouseClass_Count[-1].__tail_1602E[1]; i >= 0; --i )
      {
        v10 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * i];
        if ( v10 )
          SuperWeapon::EvaluateAITarget(v10, v6, (__int16 *)aP2->__pad_0);
      }
      return 1;
}
} }

// ==== BACKFILL 0x004FAF00  SuperWeapon::EvaluateAITarget  cls=SuperWeapon  sig=csp  renamed_refs=0 ====
namespace gamemd { int SuperWeapon::EvaluateAITarget(int a1, void* a2) {
{
      int v4;
      int v5;
      int v6;
      int v7;
      int v8;
      void *v9;
      int *v10;
      _DWORD *v11;
      int *v12;
      int v13;
      _DWORD *v14;
      int v16[3];
      char v17[12];
      char v18[12];
      _DWORD v19[3];

      v4 = this->q034;
      if ( !*(_BYTE *)(v4 + 422) )
      {
        LOBYTE(v4) = this->q1EC;
        if ( !(_BYTE)v4 )
        {
          LOBYTE(v4) = a2;
          if ( a2 )
          {
            LOBYTE(v4) = *(_BYTE *)(*(_DWORD *)(a2 + 40) + 236);
            if ( (_BYTE)v4 )
            {
              a3 = (__int16 *)CellCoord::To_CellObj(&DataGlobal_87F7E8, a3);
              v5 = CellStruct::Equals((_WORD *)(this + 21652), &g_ControlGroupState)
                 ? this->q5490
                 : this->q5494;
              a2 = v5;
              if ( CellStruct::Equals(&a2, &g_ControlGroupState) )
              {
                v6 = g_ControlGroupPool;
                v7 = g_ControlGroupConfig;
                v8 = g_ControlGroupLimit;
              }
              else
              {
                v9 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a2);
                v10 = (int *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v9 + 72))(v9, v17);
                v6 = *v10;
                v7 = v10[1];
                v8 = v10[2];
              }
              v11 = (_DWORD *)(*(int (__thiscall **)(__int16 *, char *))(*(_DWORD *)a3 + 72))(a3, v18);
              v12 = Coord::Subtract(v19, v6 - *v11, v7 - v11[1], v8 - v11[2]);
              v16[0] = *v12;
              v16[1] = v12[1];
              v16[2] = v12[2];
              v4 = Coord::Length(v16);
              if ( v4 <= g_RulesClass_Instance->?[3] )
              {
                v13 = *(_DWORD *)(g_RulesClass_Instance->?[0] + 4 * this->q184);
                v4 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99);
                if ( v4 <= v13 )
                {
                  if ( this->q060 <= 0 )
                  {
                    if ( this->q5494 == g_ControlGroupState )
                      v4 = this->q5490;
                    else
                      v4 = this->q5494;
                  }
                  else
                  {
                    v14 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(***(_DWORD ***)(this + 84) + 72))(
                                      **(_DWORD **)(this + 84),
                                      v19);
                    LOWORD(a2) = *v14 / 256;
                    HIWORD(a2) = v14[1] / 256;
                    v4 = a2;
                  }
                  this->q54F4 = v4;
                  this->q54FC = g_CurrentFrame;
                }
              }
            }
          }
        }
      }
      return v4;
}
} }

// ==== BACKFILL 0x004FB6B0  HouseClass::ProcessPromotionSound  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::ProcessPromotionSound(void* a1) {
{
      int ScoreAnimSound;
      int v4;
      int v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      _DWORD v12[3];

      ScoreAnimSound = -1;
      this->unknownBool246 = 1;
      v4 = (*(int (__thiscall **)(int))(*a2 + 132))(this);
      v5 = (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) - 1;
      switch ( v5 )
      {
        case 0:
          this->repairTimer = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 64))(v4);
          LOBYTE(v5) = *(_BYTE *)(v4 + 3231);
          if ( !(_BYTE)v5 )
          {
            v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 64))(v4);
            LOBYTE(v5) = RefCount::Increment((_DWORD *)(this + 21940), v6);
          }
          ScoreAnimSound = g_RulesClass_Instance->SinkingSound;
          break;
        case 1:
          this->q278 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 64))(v4);
          LOBYTE(v5) = *(_BYTE *)(v4 + 3231);
          if ( !(_BYTE)v5 )
          {
            v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 64))(v4);
            LOBYTE(v5) = RefCount::Increment((_DWORD *)(this + 21980), v9);
          }
          ScoreAnimSound = g_RulesClass_Instance->BombAttachSound;
          break;
        case 5:
          this->lastBuiltVehicleType = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 64))(v4);
          LOBYTE(v5) = *(_BYTE *)(v4 + 3231);
          if ( !(_BYTE)v5 )
          {
            v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 64))(v4);
            LOBYTE(v5) = RefCount::Increment((_DWORD *)(this + 21920), v8);
          }
          break;
        case 14:
          this->allowWinBlocks = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 64))(v4);
          LOBYTE(v5) = *(_BYTE *)(v4 + 3231);
          if ( !(_BYTE)v5 )
          {
            v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 64))(v4);
            LOBYTE(v5) = RefCount::Increment((_DWORD *)(this + 21960), v7);
          }
          ScoreAnimSound = g_RulesClass_Instance->BombTickingSound;
          break;
        default:
          break;
      }
      v10 = *(_DWORD *)(v4 + 1332);
      if ( v10 != -1 )
        ScoreAnimSound = v10;
      if ( ScoreAnimSound != -1 )
      {
        v12[0] = a2[39];
        v12[1] = a2[40];
        v12[2] = a2[41];
        LOBYTE(v5) = StartAudioControllerAt(ScoreAnimSound, (int)v12, 0);
      }
      this->recheckTechTree = 1;
      return v5;
}
} }

// ==== BACKFILL 0x004FB920  HouseClass::SDDTORAllAndTriggers  cls=HouseClass  sig=csp  renamed_refs=0 ====
unsigned int * HouseClass::SDDTORAllAndTriggers()
{
{
    int v1;
    int *v3;
    int *v4;
    int *result;
    int v6;
    int v7;
    v1 = 0;
    if ( g_SidebarState > 0 )
  {
    v3 = g_TechnoClass_Count;
    do
    {
    v4 = (int *)v3[v1];
    if ( (int *)v4[135] == this )
      {
    if ( v4 )
        {
    (*(void (__thiscall **)(int *, int))(*v4 + 32))(v4, 1);
    v3 = g_TechnoClass_Count;
        }
    --v1;
      }
    ++v1;
    }
    while ( v1 < g_SidebarState );
  }
    result = (int *)g_ProductionQueueState;
    v6 = 0;
    if ( g_ProductionQueueState > 0 )
  {
    result = g_TriggerClassCapacity;
    do
    {
    if ( *(int *)(*(int *)(result[v6] + 36) + 164) == this->relatedTagsCapacity )
      {
    v7 = result[v6];
    if ( v7 )
        {
    (*(void (__thiscall **)(int, int))(*(int *)(v7) + 32))(v7, 1);
    result = g_TriggerClassCapacity;
        }
    --v6;
      }
    ++v6;
    }
    while ( v6 < g_ProductionQueueState );
  }
    if ( this )
    return (int *)this->getMovementSpeed(1);
    return result;
}
}

// ==== BACKFILL 0x004FBD00  sub_4FBD00  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_4FBD00::sub_4FBD00(int a2)
{
{
    int v2;
    int *v4;
    int v5;
    v2 = 0;
    if ( HouseClass_Count <= 0 )
    return 0;
    while ( 1 )
  {
    v4 = *(int **)&HouseClass_Array->__pad_0[4 * v2];
    if ( v4 )
    {
    if ( v4 != this )
      {
    v5 = v4[12];
    if ( v5 != this->M48 && (v5 == -1 || ((1 << v5) & this->M22408) == 0) && DynamicVector::GetOrGrow(v4 + 5460, a2) > 0 )
        {
    break;
        }
      }
    }
    if ( ++v2 >= HouseClass_Count )
    return 0;
  }
    return 1;
}
}

// ==== BACKFILL 0x004FBF60  HouseClass::DroppedFlag  cls=HouseClass  sig=csp  renamed_refs=0 ====
char HouseClass::DroppedFlag(UnitClass * aP1, int a3)
{
{
    MouseClass *v3;
    HouseClass *v5;
    void *v6;
    char v7;
    void *v8;
    int productionFactory_plants_capacity;
    int v11;
    int v12;
    v3 = (MouseClass *)aP1;
    if ( !LayerClass::CoordinatesLegal(&DataGlobal_87F7E8, (IUnknown *)aP1) )
    return 0;
    HouseClass::IsCellOccupied((int)this, (IUnknown *)this->ourFlagCoords, a3);
    v5 = (HouseClass *)this->relatedTagsCapacity;
    aP1 = (UnitClass *)v3->field_0;
    productionFactory_plants_capacity = v5->productionFactory_plants_capacity;
    v6 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&aP1);
    v7 = HouseClass::MarkCellBuildable((int)v6, productionFactory_plants_capacity);
    if ( v7 || (a3 = 0, aP1 = (UnitClass *)*LayerClass::Pathfinding_Find( &DataGlobal_87F7E8, 0, &v12, (short *)v3, 1, -1, 0, 0, 1, 1, 0, 0, 0, 1, (short *)&a3, 0, 0), aP1 != *(UnitClass **)&g_NetworkPlayerBuffer.__pad_14B0[1196]) && (v11 = *(int *)(this->relatedTagsCapacity + 184), v8 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&aP1), (v7 = HouseClass::MarkCellBuildable((int)v8, v11)) != 0) )
  {
    this->ourFlagCoords = (int)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&aP1);
  }
    return v7;
}
}

// ==== BACKFILL 0x004FC060  HouseClass::PickedUpFlag  cls=HouseClass  sig=csp  renamed_refs=0 ====
char HouseClass::PickedUpFlag(ObjectClass * aP1, char a3)
{
{
    if ( !aP1 || aP1->inLimbo )
    return 0;
    HouseClass::IsCellOccupied((int)this, (IUnknown *)this->ourFlagCoords, a3);
    HouseClass::SetPrimaryFactory(aP1, *(int *)(this->relatedTagsCapacity + 184));
    this->ourFlagCoords = (int)aP1;
    return 1;
}
}

// ==== BACKFILL 0x004FC6D0  HouseClass::ClearLowPowerTargets  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::ClearLowPowerTargets() {
{
      int result;
      int v2;
      _DWORD *v3;
      _DWORD *v4;
      int PriorityTarget;
      int v6;
      int v8;

      result = g_SidebarState;
      v2 = 0;
      v3 = 0;
      while ( v2 < g_SidebarState )
      {
        v4 = (_DWORD *)*((_DWORD *)g_TechnoClass_Count + v2);
        PriorityTarget = ObjectClass::GetPriorityTarget(v4);
        result = v4[135];
        if ( PriorityTarget != result
          && ((void *)PriorityTarget != this
           || (result = v4[176]) != 0 && (result = HouseClass::AssignCivilianToLowPowerTargets(v4), (_BYTE)result))
          || (void *)PriorityTarget != this
          || v4 == v3 )
        {
          ++v2;
        }
        else
        {
          v8 = v4[27];
          v6 = v4[158];
          if ( v6 )
            TriggerClass::UnlinkTags(v6);
          result = (*(int (__thiscall **)(_DWORD *, int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(*v4 + 364))(
                     v4,
                     &v8,
                     0,
                     *((_DWORD *)g_RulesClass_Instance + 1002),
                     0,
                     1,
                     1,
                     0);
          v3 = v4;
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x004FCE00  sub_4FCE00  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_4FCE00::sub_4FCE00(ObjectClass * aP1, int a3, ObjectClass * aP3)
{
{
    int v4;
    v4 = this->M52;
    this->M476 = aP3;
    this->M780 = aP3;
    *(int *)(v4 + 192) = aP1;
    this->M90196 = aP1;
    return (int)aP1->__pad_0;
}
}

// ==== BACKFILL 0x004FCE30  HouseClass::GetPowerRatio  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { double HouseClass::GetPowerRatio() {
{
    int v1;
    int v2;
    v1 = this->powerOutput;
    v2 = this->powerDrain;
    if ( v1 >= v2 || !v2 )
    return 1.0;
    if ( v1 )
    return (double)v1 / (double)v2;
    return 0.0;
}
} }

// ==== BACKFILL 0x004FD120  sub_4FD120  cls=unknown  sig=csp  renamed_refs=0 ====
unsigned int * sub_4FD120(unsigned int * a1, int a2)
{
{
    *a1 = g_ControlGroupPool;
    *((int*)(a1) + 1) = g_ControlGroupConfig;
    *((int*)(a1) + 2) = g_ControlGroupLimit;
    return a1;
}
}

// ==== BACKFILL 0x004FEEE0  HouseClass::AIInfantryProduction  cls=HouseClass  sig=csp  renamed_refs=1 ====
namespace gamemd { int HouseClass::AIInfantryProduction() {
{
      AbstractClass *v1;
      int v3;
      int v4;
      int v5;
      int v6;
      _DWORD *v7;
      int v8;
      int v9;
      _DWORD *v10;
      int j;
      _DWORD *v12;
      _DWORD *v13;
      int v14;
      int v15;
      int v16;
      int i;
      int v18;
      int v20;
      CCINIClass *v21;
      int v22;
      void **v23;
      void *Block;
      int v25;
      char v26;
      int v27;
      int v28;
      _DWORD v29[100];
      _DWORD v30[200];

      v1 = this;
      if ( this->baseDefenseTeamCount != -1 )
        return 15;
      memset(v29, 0, sizeof(v29));
      memset32(v30, 0x7FFFFFFF, 0x64u);
      v3 = 0;
      for ( i = 0; v3 < *(int *)&g_CellDirectionOffsets.__pad_579C[62156]; i = v3 )
      {
        v4 = *(_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets.__pad_579C[62144] + 4 * v3);
        if ( v4 )
        {
          if ( (v5 = *(_DWORD *)(v4 + 80), *(_BYTE *)(*(_DWORD *)(v4 + 36) + 171)) && !*(_BYTE *)(v4 + 121)
            || !*(_BYTE *)(v4 + 119) && !*(_BYTE *)(v4 + 120) )
          {
            if ( *(AbstractClass **)(v4 + 44) == v1 )
            {
              TechnoTypeVector::Constructor(&v23, 0, 0);
              v6 = 0;
              v23 = &vt_DynamicVectorClass_TechnoTypeClass_const;
              v28 = 10;
              v27 = 0;
              HouseClass::UpdateProductionQueue((_DWORD *)v4, (int)&v23);
              if ( v27 > 0 )
              {
                do
                {
                  v7 = (_DWORD *)*((_DWORD *)Block + v6);
                  if ( (*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7) == 16 )
                  {
                    v8 = v7[894];
                    v9 = v30[v8];
                    ++v29[v8];
                    v10 = &v30[v8];
                    if ( v5 < v9 )
                      *v10 = v5;
                  }
                  ++v6;
                }
                while ( v6 < v27 );
              }
              v23 = &vt_VectorClass_TechnoTypeClass_const;
              if ( Block && v26 )
              {
                __3_YAXPAX_Z(Block);
                Block = 0;
              }
              v3 = i;
              v25 = 0;
              v1 = this;
              v26 = 0;
            }
          }
        }
        ++v3;
      }
      for ( j = 0; j < (int)g_BuildingClass_Count; ++j )
      {
        v12 = *(_DWORD **)&g_InfantryClassLimit->__pad_0[4 * j];
        if ( v12 && (int)v29[*(_DWORD *)(v12[432] + 3576)] > 0 && FootClass::CanBeRecruited(v12, v1) )
        {
          v13 = &v29[*(_DWORD *)(v12[432] + 3576)];
          --*v13;
        }
      }
      v14 = 0;
      v22 = -1;
      v18 = -1;
      v15 = 0;
      v21 = (CCINIClass *)0x7FFFFFFF;
      if ( *(int *)&g_NetworkPlayerBuffer.__pad_BC0[348] > 0 )
      {
        do
        {
          v16 = v29[v15];
          if ( v16 > 0 )
          {
            if ( HouseClass::CanBuild(this, *(IUnknown **)(*(_DWORD *)&g_NetworkPlayerBuffer.__pad_BC0[336] + 4 * v15), 0, 0) )
            {
              v20 = (*(int (__thiscall **)(_DWORD, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&g_NetworkPlayerBuffer.__pad_BC0[336]
                                                                                 + 4 * v15)
                                                                   + 132))(
                      *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer.__pad_BC0[336] + 4 * v15),
                      this);
              if ( v20 <= (*(int (__stdcall **)(_DWORD *))(this->vtable5 + 24))((_DWORD *)this + 9) )
              {
                if ( v22 == -1 || v22 < v16 )
                {
                  v22 = v16;
                  v14 = 0;
                }
                v30[v14++ + 100] = v15;
                if ( v18 == -1 || v30[v15] < (int)v21 )
                {
                  v18 = v15;
                  v21 = (CCINIClass *)v30[v15];
                }
              }
            }
          }
          ++v15;
        }
        while ( v15 < *(int *)&g_NetworkPlayerBuffer.__pad_BC0[348] );
        v1 = this;
      }
      if ( (double)*(int *)(*(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5108) + 4 * v1[10].referenceCount)
         * 0.01 <= (double)Random::Range(&g_ScenarioClass_Instance->random[1], 0, (IUnknown *)0x7FFFFFFE) * 4.656612877414201e-10 )
      {
        if ( v14 )
          v1[613].NeedsSaveOrLink = (void *)v30[Random::Range(&g_ScenarioClass_Instance->random[1], 0, (IUnknown *)(v14 - 1)) + 100];
        return 15;
      }
      else
      {
        v1[613].NeedsSaveOrLink = (void *)v18;
        return 15;
      }
}
} }

// ==== BACKFILL 0x004FF210  HouseClass::AIAircraftProduction  cls=HouseClass  sig=csp  renamed_refs=1 ====
namespace gamemd { int HouseClass::AIAircraftProduction() {
{
      AbstractClass *v1;
      int v3;
      int v4;
      int v5;
      int v6;
      _DWORD *v7;
      int v8;
      int v9;
      _DWORD *v10;
      int j;
      _DWORD *v12;
      _DWORD *v13;
      int v14;
      int v15;
      int v16;
      int i;
      int v18;
      int v20;
      CCINIClass *v21;
      int v22;
      void **v23;
      void *Block;
      int v25;
      char v26;
      int v27;
      int v28;
      _DWORD v29[100];
      _DWORD v30[200];

      v1 = this;
      if ( this->dropshipData != -1 )
        return 15;
      memset(v29, 0, sizeof(v29));
      memset32(v30, 0x7FFFFFFF, 0x64u);
      v3 = 0;
      for ( i = 0; v3 < *(int *)&g_CellDirectionOffsets.__pad_579C[62156]; i = v3 )
      {
        v4 = *(_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets.__pad_579C[62144] + 4 * v3);
        if ( v4 )
        {
          if ( (v5 = *(_DWORD *)(v4 + 80), *(_BYTE *)(*(_DWORD *)(v4 + 36) + 171)) && !*(_BYTE *)(v4 + 121)
            || !*(_BYTE *)(v4 + 119) && !*(_BYTE *)(v4 + 120) )
          {
            if ( *(AbstractClass **)(v4 + 44) == v1 )
            {
              TechnoTypeVector::Constructor(&v23, 0, 0);
              v6 = 0;
              v23 = &vt_DynamicVectorClass_TechnoTypeClass_const;
              v28 = 10;
              v27 = 0;
              HouseClass::UpdateProductionQueue((_DWORD *)v4, (int)&v23);
              if ( v27 > 0 )
              {
                do
                {
                  v7 = (_DWORD *)*((_DWORD *)Block + v6);
                  if ( (*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7) == 3 )
                  {
                    v8 = v7[894];
                    v9 = v30[v8];
                    ++v29[v8];
                    v10 = &v30[v8];
                    if ( v5 < v9 )
                      *v10 = v5;
                  }
                  ++v6;
                }
                while ( v6 < v27 );
              }
              v23 = &vt_VectorClass_TechnoTypeClass_const;
              if ( Block && v26 )
              {
                __3_YAXPAX_Z(Block);
                Block = 0;
              }
              v3 = i;
              v25 = 0;
              v1 = this;
              v26 = 0;
            }
          }
        }
        ++v3;
      }
      for ( j = 0; j < *(int *)&g_NetworkPlayerBuffer.__pad_BC0[420]; ++j )
      {
        v12 = *(_DWORD **)(*(_DWORD *)&g_NetworkPlayerBuffer.__pad_BC0[408] + 4 * j);
        if ( v12 && (int)v29[*(_DWORD *)(v12[433] + 3576)] > 0 && FootClass::CanBeRecruited(v12, v1) )
        {
          v13 = &v29[*(_DWORD *)(v12[433] + 3576)];
          --*v13;
        }
      }
      v14 = 0;
      v22 = -1;
      v18 = -1;
      v15 = 0;
      v21 = (CCINIClass *)0x7FFFFFFF;
      if ( (int)g_TypeClass_FindCache > 0 )
      {
        do
        {
          v16 = v29[v15];
          if ( v16 > 0 )
          {
            if ( HouseClass::CanBuild(this, *(IUnknown **)&g_AircraftTypeCount->__pad_0[4 * v15], 0, 0) )
            {
              v20 = (*(int (__thiscall **)(_DWORD, AbstractClass *))(**(_DWORD **)&g_AircraftTypeCount->__pad_0[4 * v15] + 132))(
                      *(_DWORD *)&g_AircraftTypeCount->__pad_0[4 * v15],
                      this);
              if ( v20 <= (*(int (__stdcall **)(_DWORD *))(this->vtable5 + 24))((_DWORD *)this + 9) )
              {
                if ( v22 == -1 || v22 < v16 )
                {
                  v22 = v16;
                  v14 = 0;
                }
                v30[v14++ + 100] = v15;
                if ( v18 == -1 || v30[v15] < (int)v21 )
                {
                  v18 = v15;
                  v21 = (CCINIClass *)v30[v15];
                }
              }
            }
          }
          ++v15;
        }
        while ( v15 < (int)g_TypeClass_FindCache );
        v1 = this;
      }
      if ( (double)*(int *)(*(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5108) + 4 * v1[10].referenceCount)
         * 0.01 <= (double)Random::Range(&g_ScenarioClass_Instance->random[1], 0, (IUnknown *)0x7FFFFFFE) * 4.656612877414201e-10 )
      {
        if ( v14 )
          *(_DWORD *)v1[614].__pad_0 = v30[Random::Range(&g_ScenarioClass_Instance->random[1], 0, (IUnknown *)(v14 - 1)) + 100];
        return 15;
      }
      else
      {
        *(_DWORD *)v1[614].__pad_0 = v18;
        return 15;
      }
}
} }

// ==== BACKFILL 0x004FF540  nullsub_100  cls=unknown  sig=csp  renamed_refs=0 ====
void nullsub_100(int a1)
{
  ;
}

// ==== BACKFILL 0x004FF550  HouseClass::DecrementUnitCount  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::DecrementUnitCount(void* a1) {
{
      int v3;
      int result;
      int v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      int v12;
      int v13;

      v3 = *(_DWORD *)aP1->__pad_0;
      LOBYTE(aP1->barrelRecoil[4]) = 0;
      result = (*(int (__thiscall **)(TechnoClass *))(v3 + 132))(aP1);
      if ( !*(_BYTE *)(result + 562) )
      {
        result = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1);
        if ( !*(_BYTE *)(result + 3231) )
        {
          result = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) - 1;
          switch ( result )
          {
            case 0:
              --this->ownedUnits;
              v12 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1);
              v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 64))(v12);
              CounterClass::Decrement(this + 5445, v13);
              result = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1);
              if ( *(_BYTE *)(result + 3278) )
              {
                result = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1);
                if ( !*(_DWORD *)(result + 1504) )
                  --this->ownedNavy;
              }
              break;
            case 1:
              --this->ownedAircraft;
              v8 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1);
              v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 64))(v8);
              result = CounterClass::Decrement(this + 5455, v9);
              break;
            case 5:
              if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 128))(aP1)
                || (v5 = *(_DWORD *)(*(_DWORD *)aP1[1].__pad_0 + 1032)) != 0 && *(_BYTE *)(v5 + 1516) )
              {
                --this->ownedUnits;
              }
              else
              {
                --this->ownedBuildings;
              }
              v6 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1);
              v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 64))(v6);
              result = CounterClass::Decrement(this + 5440, v7);
              break;
            case 14:
              if ( aP1->isCountedAsOwned_special )
              {
                --this->ownedInfantry;
                aP1->isCountedAsOwned_special = 0;
              }
              v10 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1);
              v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 64))(v10);
              result = CounterClass::Decrement(this + 5450, v11);
              break;
            default:
              return result;
          }
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x004FFD50  sub_4FFD50  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_4FFD50::sub_4FFD50(int a2)
{
{
    ObjectClass *v4;
    char v5[12];
    if ( !a2 )
    return -1;
    v4 = (ObjectClass *)(*(int (__thiscall **)(int, char *))(*(int *)(a2) + 72))(a2, v5);
    return PathfindingClass::FindPath(this, v4);
}
}

// ==== BACKFILL 0x004FFD90  sub_4FFD90  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_4FFD90::sub_4FFD90(short * a2)
{
{
    int v2;
    unsigned int v4[3];
    v4[2] = 0;
    v2 = *((int*)(a2) + 1);
    v4[0] = (*a2 << 8) + 128;
    v4[1] = (v2 << 8) + 128;
    return PathfindingClass::FindPath(this, v4);
}
}
