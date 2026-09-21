// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x005C0080  Entity_Load  this=unknown  sig=csp ====
char __fastcall sub_5C0080(char **a1, _BYTE *a2)
{
  char result; // al

  if ( MEMORY[0xABF3F4] ) /*0x5c0087*/
    return 0; /*0x5c0089*/
  MEMORY[0xABF3F4] = (int)a1; /*0x5c008c*/
  result = VQAClass::AdvanceFrame(*a1, a2); /*0x5c0095*/
  MEMORY[0xABF3F4] = 0; /*0x5c009a*/
  return result; /*0x5c008b*/
}


// ==== 0x005C00E0  ObjectClass::method_5C00E0  this=ObjectClass  sig=csp ====
char __usercall sub_5C00E0@<al>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>)
{
  char result; // al
  int v4; // edx
  int v5; // ecx
  int v6; // edi
  int v7; // [esp+4h] [ebp-20h] BYREF
  int v8; // [esp+8h] [ebp-1Ch]
  int *v9; // [esp+Ch] [ebp-18h]
  int v10; // [esp+10h] [ebp-14h]
  struct tagRECT Rect; // [esp+14h] [ebp-10h] BYREF

  result = MEMORY[0xABF3F4]; /*0x5c00e0*/
  if ( MEMORY[0xABF3F4] ) /*0x5c00ea*/
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 24))(MEMORY[0x887310], 0); /*0x5c00fa*/
    Frame::Present(MEMORY[0x887310], a1, a2, a3, 0, v7, v8, v9); /*0x5c0107*/
    result = TestBitArray(15); /*0x5c0111*/
    if ( !result ) /*0x5c0118*/
    {
      GetClientRect(g_hWnd, &Rect); /*0x5c0129*/
      ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5c013b*/
      v4 = *(_DWORD *)(MEMORY[0xABF3F4] + 64); /*0x5c0156*/
      v5 = Rect.top + *(_DWORD *)(MEMORY[0xABF3F4] + 56); /*0x5c0159*/
      v6 = *(_DWORD *)(MEMORY[0xABF3F4] + 52); /*0x5c015b*/
      v9 = *(int **)(MEMORY[0xABF3F4] + 60); /*0x5c015e*/
      v8 = v5; /*0x5c0164*/
      v7 = Rect.left + v6; /*0x5c016e*/
      v10 = v4; /*0x5c0172*/
      return (*(int (__thiscall **)(int, int *, _DWORD, int, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x5c0187*/
               MEMORY[0x887308],
               &v7,
               *(_DWORD *)(MEMORY[0xABF3F4] + 8),
               MEMORY[0xABF3F4] + 36,
               0,
               1);
    }
  }
  return result; /*0x5c018d*/
}


// ==== 0x005C01F0  BinkMovie::Cleanup  this=AbstractClass  sig=csp ====
void __thiscall BinkMovie_Cleanup(_DWORD *this)
{
  void *v2; // edi
  void *v3; // edi

  if ( *this ) /*0x5c01f4*/
  {
    DSurface::FlipIfNeeded(); /*0x5c01fa*/
    v2 = (void *)*this; /*0x5c01ff*/
    if ( *this ) /*0x5c01ff*/
    {
      CCFileClass::Cleanup(*this); /*0x5c0207*/
      __3_YAXPAX_Z(v2); /*0x5c020d*/
    }
  }
  v3 = (void *)this->q048; /*0x5c0215*/
  if ( v3 ) /*0x5c021a*/
  {
    BinkMovie::FreeSurfaceTracker((int *)this->q048); /*0x5c021e*/
    __3_YAXPAX_Z(v3); /*0x5c0224*/
    this->q048 = 0; /*0x5c022c*/
  }
}


// ==== 0x005C0280  VQMovieHandle::checkLOS  this=VQMovieHandle  sig=csp ====
void __thiscall AbstractClass::sub_5C0280(int **this, char a2)
{
  int *v2; // eax
  int v3; // eax
  _BYTE *v4; // eax

  v2 = this->dataSize; /*0x5c0286*/
  if ( a2 ) /*0x5c0289*/
  {
    if ( v2 ) /*0x5c028d*/
    {
      v3 = *v2; /*0x5c028f*/
      if ( v3 ) /*0x5c0293*/
        AbstractClass::processConstruction(v3); /*0x5c0297*/
    }
  }
  else if ( v2 ) /*0x5c02a1*/
  {
    v4 = (_BYTE *)*v2; /*0x5c02a3*/
    if ( v4 ) /*0x5c02a7*/
      AbstractClass::checkBuildProgress(v4); /*0x5c02ab*/
  }
}


// ==== 0x005C02C0  VQMovieHandle::computePathCost  this=VQMovieHandle  sig=csp ====
char __thiscall AbstractClass::sub_5C02C0(int *this)
{
  char result; // al

  MEMORY[0xABF3F8] = (int)this; /*0x5c02c0*/
  result = RenderMovieFrame(this->dataSize, 1, -1, 0); /*0x5c02cf*/
  MEMORY[0xABF3F8] = 0; /*0x5c02d4*/
  return result; /*0x5c02de*/
}


// ==== 0x005C02E0  VQMovieHandle::validatePathNode  this=VQMovieHandle  sig=csp ====
char __thiscall AbstractClass::sub_5C02E0(_BYTE *this)
{
  return this->playing; /*0x5c02e3*/
}


// ==== 0x005C02F0  VQMovieHandle::processPathNode  this=VQMovieHandle  sig=csp ====
char __thiscall AbstractClass::sub_5C02F0(int this)
{
  char **v1; // eax
  char result; // al

  v1 = *(char ***)(this + 16); /*0x5c02f0*/
  if ( (*v1)[1360] || !*((_BYTE *)v1 + 69) || MEMORY[0xABF3F4] ) /*0x5c0310*/
    return 0; /*0x5c032d*/
  MEMORY[0xABF3F4] = *(_DWORD *)(this + 16); /*0x5c0315*/
  result = VQAClass::AdvanceFrame(*v1, (_BYTE *)(this + 20)); /*0x5c031d*/
  MEMORY[0xABF3F4] = 0; /*0x5c0322*/
  return result; /*0x5c02fe*/
}


// ==== 0x005C0330  VQMovieHandle::nullsub_176  this=VQMovieHandle  sig=csp ====
void nullsub_176()
{
  ; /*0x5c0330*/
}


// ==== 0x005C0340  VQMovieHandle::computePathDistance  this=VQMovieHandle  sig=csp ====
int __thiscall AbstractClass::sub_5C0340(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // eax
  int result; // eax

  *(_DWORD *)(this->currentFrame + 36) = a2; /*0x5c0347*/
  *(_DWORD *)(this->currentFrame + 40) = a3; /*0x5c0351*/
  v3 = (_DWORD *)this->currentFrame; /*0x5c0354*/
  v4 = v3 + 9; /*0x5c0357*/
  v3 += 13; /*0x5c035a*/
  *v3 = *v4; /*0x5c035f*/
  v3[1] = v4[1]; /*0x5c0364*/
  v3[2] = v4[2]; /*0x5c036a*/
  result = v4[3]; /*0x5c036d*/
  v3[3] = result; /*0x5c0370*/
  return result; /*0x5c0373*/
}


// ==== 0x005C0380  VQMovieHandle::checkPathEnd  this=VQMovieHandle  sig=csp ====
int __thiscall AbstractClass::sub_5C0380(_DWORD *this, int a2)
{
  return AbstractClass::getTotalValue(*(_DWORD **)(this->currentFrame + 72), a2); /*0x5c0390*/
}


// ==== 0x005C03A0  VQMovieHandle::finalizePath  this=VQMovieHandle  sig=csp ====
void __thiscall AbstractClass::sub_5C03A0(int ***this, signed int a2)
{
  AbstractClass::finalizeConstruction(*this->dataSize); /*0x5c03a8*/
  AbstractClass::updateBuildingState(*this->dataSize, a2); /*0x5c03b7*/
}


// ==== 0x005C03C0  VQMovieHandle::resetPathState  this=VQMovieHandle  sig=csp ====
int AbstractClass::sub_5C03C0()
{
  return 33; /*0x5c03c5*/
}


// ==== 0x005C03D0  VQMovieHandle::getPathDirection  this=VQMovieHandle  sig=csp ====
char __usercall AbstractClass::sub_5C03D0@<al>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>)
{
  char result; // al
  int v4; // edx
  int v5; // ecx
  int v6; // edi
  int v7; // [esp+4h] [ebp-20h] BYREF
  int v8; // [esp+8h] [ebp-1Ch]
  int *v9; // [esp+Ch] [ebp-18h]
  int v10; // [esp+10h] [ebp-14h]
  struct tagRECT Rect; // [esp+14h] [ebp-10h] BYREF

  result = MEMORY[0xABF3F4]; /*0x5c03d0*/
  if ( MEMORY[0xABF3F4] ) /*0x5c03da*/
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 24))(MEMORY[0x887310], 0); /*0x5c03ea*/
    Frame::Present(MEMORY[0x887310], a1, a2, a3, 0, v7, v8, v9); /*0x5c03f7*/
    result = TestBitArray(15); /*0x5c0401*/
    if ( !result ) /*0x5c0408*/
    {
      GetClientRect(g_hWnd, &Rect); /*0x5c0419*/
      ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5c042b*/
      v4 = *(_DWORD *)(MEMORY[0xABF3F4] + 64); /*0x5c0446*/
      v5 = Rect.top + *(_DWORD *)(MEMORY[0xABF3F4] + 56); /*0x5c0449*/
      v6 = *(_DWORD *)(MEMORY[0xABF3F4] + 52); /*0x5c044b*/
      v9 = *(int **)(MEMORY[0xABF3F4] + 60); /*0x5c044e*/
      v8 = v5; /*0x5c0454*/
      v7 = Rect.left + v6; /*0x5c045e*/
      v10 = v4; /*0x5c0462*/
      return (*(int (__thiscall **)(int, int *, _DWORD, int, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x5c0477*/
               MEMORY[0x887308],
               &v7,
               *(_DWORD *)(MEMORY[0xABF3F4] + 8),
               MEMORY[0xABF3F4] + 36,
               0,
               1);
    }
  }
  return result; /*0x5c047d*/
}


// ==== 0x005C0540  BinkMovieHandle::?  this=BinkMovieHandle  sig=csp ====
int __thiscall BinkMovieHandle::_vt03(_DWORD **this, unsigned __int8 a2)
{
  return BinkMovie::Pause(this->tempPath, a2); /*0x5c054d*/
}


// ==== 0x005C0550  BinkMovieHandle::InitFromFile  this=BinkMovieHandle  sig=csp ====
int __thiscall BinkMovieHandle::_vt04(_BYTE **this)
{
  int result; // eax

  MEMORY[0xABF3F8] = (int)this; /*0x5c0550*/
  result = BinkMovie::Play(this->tempPath); /*0x5c0559*/
  MEMORY[0xABF3F8] = 0; /*0x5c055e*/
  return result; /*0x5c0568*/
}


// ==== 0x005C0570  BinkMovieHandle::COMStub  this=BinkMovieHandle  sig=csp ====
BOOL __thiscall BinkMovieHandle::_vt05(_DWORD **this)
{
  return BinkMovie::IsAtEnd(this->tempPath);
}


// ==== 0x005C0580  BinkMovieHandle::AddRef  this=BinkMovieHandle  sig=csp ====
bool __thiscall BinkMovieHandle::_vt01(int **this)
{
  return BinkMovie::RenderFrameToSurface(this->tempPath);
}


// ==== 0x005C0590  BinkMovieHandle::Release  this=BinkMovieHandle  sig=csp ====
int __thiscall BinkMovieHandle::_vt02(_DWORD *this)
{
  int v1; // esi
  int result; // eax

  v1 = this->height; /*0x433021*/
  result = BinkWait(*(_DWORD *)(v1 + 4)); /*0x433027*/
  if ( !result ) /*0x43302f*/
    *(_BYTE *)(v1 + 45) = 1; /*0x433031*/
  return result; /*0x433036*/
}


// ==== 0x005C05A0  BinkMovieHandle::Pause  this=BinkMovieHandle  sig=csp ====
int __thiscall BinkMovieHandle::_vt06(int *this, int a2, int a3)
{
  return BinkMovieHandle::RenderFrameClipped(this->tempPath, a2, a3); /*0x5c05b2*/
}


// ==== 0x005C05C0  BinkMovieHandle::RenderLoop  this=BinkMovieHandle  sig=csp ====
int __thiscall BinkMovieHandle::_vt08(_DWORD **this, int a2)
{
  return COMStub_432C10(this->tempPath, a2); /*0x5c05cd*/
}


// ==== 0x005C05D0  BinkMovieHandle::AdjustSurfaceFormat  this=BinkMovieHandle  sig=csp ====
int __thiscall sub_5C05D0(_DWORD **this, int a2)
{
  return BinkMovieHandle::Check(this->tempPath, a2); /*0x5c05dd*/
}


// ==== 0x005C05E0  BinkMovieHandle::BlitToTarget  this=BinkMovieHandle  sig=csp ====
unsigned int __thiscall BinkMovieHandle::_vt09(_DWORD *this)
{
  return 0x3E8 /*0x432c06*/
       / (unsigned int)(*(_DWORD *)(*(_DWORD *)(this->height + 4) + 20) / *(_DWORD *)(*(_DWORD *)(this->height + 4) + 24));
}


// ==== 0x005C05F0  BinkMovieHandle::Close  this=BinkMovieHandle  sig=csp ====
_DWORD *__thiscall BinkMovieHandle::_vt10(int **this)
{
  return BinkMovieHandle::CopyFrameToSurface(this->tempPath);
}


// ==== 0x005C0630  MovieHandle::method_5C0630  this=MovieHandle  sig=csp ====
void __thiscall sub_5C0630(_DWORD *this)
{
  *this = &vt_MovieHandle; /*0x5c0630*/
}


// ==== 0x005C0640  Render_Play  this=VOID_PTR  sig=csp ====
char __fastcall sub_5C0640(const char *a1, char *a2, int a3)
{
  char *v3; // ebp
  char i; // al
  _DWORD *v5; // eax
  char v6; // bl
  _DWORD *v7; // eax
  char v8; // bl
  _DWORD v11[22]; // [esp+14h] [ebp-134h] BYREF
  _BYTE v12[12]; // [esp+6Ch] [ebp-DCh] BYREF
  int v13; // [esp+78h] [ebp-D0h]
  char Source[200]; // [esp+80h] [ebp-C8h] BYREF

  v3 = strcpy(Source, a1); /*0x5c0672*/
  for ( i = Source[0]; i; i = *++v3 ) /*0x5c0684*/
  {
    if ( i == 46 ) /*0x5c0688*/
      break; /*0x5c0688*/
  }
  *v3 = 0; /*0x5c0699*/
  GameOptionsClass::UnlockMovieIfNeeded_MoviesList(MEMORY[0xA8EB60], Source); /*0x5c06a3*/
  strcpy(v3, aBik_0); /*0x5c06c9*/
  v5 = CCFileClass::Construct(v11, Source); /*0x5c06d6*/
  v6 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v5 + 20))(v5, 0); /*0x5c06e8*/
  v11[0] = &vt_CCFileClass; /*0x5c06ea*/
  v13 = 0; /*0x5c06f2*/
  Vector::Clear((int)v12); /*0x5c06fa*/
  v11[0] = &off_7E1668; /*0x5c0703*/
  BufferIOFileClass::Dtor(v11); /*0x5c070b*/
  if ( !v6 ) /*0x5c0712*/
  {
    strcpy(v3, aVqa); /*0x5c0735*/
    v7 = CCFileClass::Construct(v11, Source); /*0x5c0742*/
    v8 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 20))(v7, 0); /*0x5c0754*/
    v11[0] = &vt_CCFileClass; /*0x5c0756*/
    v13 = 0; /*0x5c075e*/
    Vector::Clear((int)v12); /*0x5c0766*/
    v11[0] = &off_7E1668; /*0x5c076f*/
    BufferIOFileClass::Dtor(v11); /*0x5c0777*/
    if ( !v8 ) /*0x5c077e*/
      return 0; /*0x5c07be*/
  }
  if ( a2 ) /*0x5c0786*/
    strcpy(a2, Source); /*0x5c07a3*/
  return 1; /*0x5c07ac*/
}


// ==== 0x005C07D0  CreateMovie  this=int  sig=csp ====
_DWORD *__fastcall Movie_Create(int a1, int a2, int *a3)
{
  int *v4; // eax
  int v5; // ebx
  int v6; // edx
  char *v7; // eax
  int v8; // esi
  _DWORD *result; // eax
  _DWORD *v10; // edi
  _BYTE *v11; // eax
  _BYTE *v12; // esi
  int v13; // [esp+14h] [ebp-E4h]
  int v14; // [esp+18h] [ebp-E0h]
  int v15; // [esp+1Ch] [ebp-DCh]
  _BYTE v16[16]; // [esp+20h] [ebp-D8h] BYREF
  char Str[200]; // [esp+30h] [ebp-C8h] BYREF

  if ( !a2 || !(unsigned __int8)Render_Play(1) ) /*0x5c07ea*/
    return 0; /*0x5c07f1*/
  v4 = a3; /*0x5c07f7*/
  if ( a3 ) /*0x5c0800*/
  {
    v5 = *a3; /*0x5c0805*/
    v6 = a3[2]; /*0x5c0807*/
    v13 = a3[1]; /*0x5c080a*/
  }
  else
  {
    v4 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 120))(a2, v16); /*0x5c0819*/
    v5 = *v4; /*0x5c081c*/
    v13 = v4[1]; /*0x5c0821*/
    v6 = v4[2]; /*0x5c0825*/
  }
  v14 = v6; /*0x5c0832*/
  v15 = v4[3]; /*0x5c0836*/
  v7 = strrchr(Str, 46); /*0x5c083a*/
  if ( v7 && !_strcmpi(v7, aBik) ) /*0x5c084c*/
  {
    Debug::Log(aPlayMovieAsBin); /*0x5c085d*/
    if ( __2_YAPAXI_Z(0x34u) ) /*0x5c0864*/
      v8 = BinkMovie::Open(Str, a2); /*0x5c087d*/
    else
      v8 = 0; /*0x5c0881*/
    result = __2_YAPAXI_Z(0x14u); /*0x5c0885*/
    if ( result ) /*0x5c088f*/
    {
      *result = &vt_BinkMovieHandle; /*0x5c0897*/
      result[4] = v8; /*0x5c089d*/
      if ( v8 ) /*0x5c08a0*/
      {
        result[2] = **(_DWORD **)(v8 + 4); /*0x5c08ab*/
        result[3] = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4); /*0x5c08b4*/
      }
      return result; /*0x5c08c1*/
    }
    return 0; /*0x5c0964*/
  }
  v10 = (_DWORD *)LoadVQMovie(Str, 0, 0, 0, 0, v5, v13, v14, v15, 255, 0); /*0x5c090a*/
  if ( !v10 ) /*0x5c090e*/
    return 0; /*0x5c090e*/
  v11 = __2_YAPAXI_Z(0x18u); /*0x5c0912*/
  v12 = v11; /*0x5c0917*/
  if ( !v11 ) /*0x5c091e*/
    return 0; /*0x5c0955*/
  v11[20] = 0; /*0x5c0920*/
  *(_DWORD *)v11 = &vt_VQMovieHandle; /*0x5c0924*/
  *((_DWORD *)v11 + 4) = v10; /*0x5c092a*/
  *((_DWORD *)v11 + 2) = MovieClass::GetWidth(*v10); /*0x5c0934*/
  *((_DWORD *)v12 + 3) = MovieClass::GetHeight(**((_DWORD **)v12 + 4)); /*0x5c0941*/
  return v12; /*0x5c08b7*/
}


// ==== 0x005C0980  MainWindowProc_Helper  this=-  sig=ida-proto ====
BOOL sub_5C0980()
{
  return MEMORY[0xABF3F4] || MEMORY[0xABF3F8]; /*0x5c0994*/
}


// ==== 0x005C09A0  ObjectClass::MainWindowProc_Helper_5C09A0  this=ObjectClass  sig=csp ====
int sub_5C09A0()
{
  int result; // eax

  if ( MEMORY[0xABF3F8] ) /*0x5c09a8*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xABF3F8] + 40))(MEMORY[0xABF3F8]); /*0x5c09ac*/
  return result; /*0x5c09af*/
}


// ==== 0x005C09B0  VQMovieHandle::processCombatState  this=VQMovieHandle  sig=csp ====
VQMovieHandle *__thiscall AbstractClass::processCombatState(AbstractClass ***Block, char a2)
{
  AbstractClass **v3; // esi
  AbstractClass *v4; // edi
  AbstractClass *v5; // edi

  v3 = *(Block + 4); /*0x5c09b4*/
  *Block = (AbstractClass **)&vt_VQMovieHandle; /*0x5c09b7*/
  if ( v3 ) /*0x5c09c0*/
  {
    if ( *v3 ) /*0x5c09c2*/
    {
      DSurface::FlipIfNeeded((int)*v3); /*0x5c09c9*/
      v4 = *v3; /*0x5c09ce*/
      if ( *v3 ) /*0x5c09ce*/
      {
        CCFileClass::Cleanup(*v3); /*0x5c09d6*/
        __3_YAXPAX_Z(v4); /*0x5c09dc*/
      }
      *v3 = 0; /*0x5c09e4*/
    }
    v5 = v3[18]; /*0x5c09ea*/
    if ( v5 ) /*0x5c09ef*/
    {
      BinkMovie::FreeSurfaceTracker((int *)v3[18]->__pad_0); /*0x5c09f3*/
      __3_YAXPAX_Z(v5); /*0x5c09f9*/
      v3[18] = 0; /*0x5c0a01*/
    }
    *((_BYTE *)v3 + 69) = 0; /*0x5c0a08*/
  }
  *Block = (AbstractClass **)&vt_MovieHandle; /*0x5c0a11*/
  if ( (a2 & 1) != 0 ) /*0x5c0a1a*/
    __3_YAXPAX_Z(Block); /*0x5c0a1d*/
  return (VQMovieHandle *)Block; /*0x5c0a27*/
}


// ==== 0x005C0A30  BinkMovieHandle::QueryInterface  this=BinkMovieHandle  sig=csp ====
BinkMovieHandle *__thiscall BinkMovieHandle::QueryInterface(BinkMovie **Block, char a2)
{
  BinkMovie *v3; // edi

  v3 = *(Block + 4); /*0x5c0a34*/
  *Block = (BinkMovie *)&vt_BinkMovieHandle; /*0x5c0a37*/
  if ( v3 ) /*0x5c0a3f*/
  {
    BinkMovie::Stop((int)v3); /*0x5c0a43*/
    __3_YAXPAX_Z(v3); /*0x5c0a49*/
  }
  *Block = (BinkMovie *)&vt_MovieHandle; /*0x5c0a55*/
  if ( (a2 & 1) != 0 ) /*0x5c0a5d*/
    __3_YAXPAX_Z(Block); /*0x5c0a60*/
  return (BinkMovieHandle *)Block; /*0x5c0a6a*/
}


// ==== 0x005C0A70  ?$DynamicVectorClass@PBD::ClearVector  this=DynamicVector  sig=csp ====
void __thiscall TacticalClass::ClearVector(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5c0a76*/
  *(_DWORD *)(this + 16) = 0; /*0x5c0a79*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5c0a80*/
  {
    __3_YAXPAX_Z(v2); /*0x5c0a86*/
    *(_DWORD *)(this + 4) = 0; /*0x5c0a8e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5c0a91*/
  *(_DWORD *)(this + 8) = 0; /*0x5c0a94*/
}


// ==== 0x005C0AA0  ?$DynamicVectorClass@PBD::ProbeCalling  this=DynamicVector  sig=csp ====
unsigned int __thiscall TacticalClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5c0aa0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5c0ab5*/
  else
    return 0; /*0x5c0aa7*/
}


// ==== 0x005C0AC0  _VectorClass_PBD::ProbeCalling2  this=VectorClass  sig=csp ====
int __thiscall TacticalClass::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5c0aca*/
}


// ==== 0x005C0AD0  _VectorClass_PBD::CompareVector  this=VectorClass  sig=csp ====
char __thiscall TacticalClass::CompareVector(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x5c0ad2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5c0add*/
  {
    v3 = 0; /*0x5c0adf*/
    if ( v2 <= 0 ) /*0x5c0ae3*/
      return 1; /*0x5c0b03*/
    v4 = (_DWORD *)this->Items; /*0x5c0ae5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5c0aeb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5c0af4*/
    {
      ++v3; /*0x5c0af6*/
      ++v4; /*0x5c0af7*/
      if ( v3 >= v2 ) /*0x5c0afc*/
        return 1; /*0x5c0afc*/
    }
  }
  return 0; /*0x5c0afe*/
}


// ==== 0x005C0B10  ?$VectorClass@PBD::checkCombatFlags  this=VectorClass  sig=csp ====
char __thiscall AbstractClass::sub_5C0B10(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5c0b1c*/
  {
    this->IsInitialized = 0; /*0x5c0b26*/
    if ( a3 ) /*0x5c0b2c*/
      v4 = a3; /*0x5c0b42*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5c0b3e*/
    this->IsInitialized = 1; /*0x5c0b46*/
    if ( v4 ) /*0x5c0b4a*/
    {
      if ( this->Items ) /*0x5c0b55*/
      {
        v6 = this->Capacity; /*0x5c0b5c*/
        if ( a2 < v6 ) /*0x5c0b61*/
          v6 = a2; /*0x5c0b63*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5c0b69*/
          ++i; /*0x5c0b6e*/
        if ( this->IsAllocated ) /*0x5c0b7b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5c0b86*/
          this->Items = 0; /*0x5c0b8e*/
        }
      }
      this->Items = v4; /*0x5c0b97*/
      this->Capacity = a2; /*0x5c0b9f*/
      this->IsAllocated = a3 == 0; /*0x5c0ba2*/
      return 1; /*0x5c0ba8*/
    }
    else
    {
      return 0; /*0x5c0b4f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5c0bb2*/
    return 1; /*0x5c0bb8*/
  }
}


// ==== 0x005C0BC0  ?$VectorClass@PBD::processDamageEvent  this=VectorClass  sig=csp ====
void __thiscall AbstractClass::sub_5C0BC0(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5c0bcd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5c0bd3*/
    *(_DWORD *)(this + 4) = 0; /*0x5c0bdb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5c0bde*/
  *(_DWORD *)(this + 8) = 0; /*0x5c0be1*/
}


// ==== 0x005C0BF0  ?$VectorClass@PBD::applyDamageEffects  this=VectorClass  sig=csp ====
int __thiscall AbstractClass::sub_5C0BF0(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5c0bf0*/
    return 0; /*0x5c0bf8*/
  v3 = *(_DWORD *)(this + 8); /*0x5c0bfe*/
  result = 0; /*0x5c0c01*/
  if ( v3 <= 0 ) /*0x5c0c05*/
    return -1; /*0x5c0c1c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5c0c0b*/
  {
    if ( ++result >= v3 ) /*0x5c0c1a*/
      return -1; /*0x5c0c1a*/
  }
  return result; /*0x5c0bfa*/
}


// ==== 0x005C0C30  ?$VectorClass@PBD::checkDamageThreshold  this=VectorClass  sig=csp ====
unsigned int __thiscall AbstractClass::sub_5C0C30(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5c0c30*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5c0c45*/
  else
    return 0; /*0x5c0c37*/
}


// ==== 0x005C0C50  ?$DynamicVectorClass@PBD::ReallocVector  this=DynamicVector  sig=csp ====
char __thiscall TacticalClass::ReallocVector(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5c0c5c*/
  {
    this->IsInitialized = 0; /*0x5c0c62*/
    if ( a3 ) /*0x5c0c68*/
      v4 = a3; /*0x5c0c7e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5c0c7a*/
    this->IsInitialized = 1; /*0x5c0c82*/
    if ( !v4 ) /*0x5c0c86*/
      return 0; /*0x5c0cfa*/
    if ( this->Items ) /*0x5c0c88*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5c0c8f*/
      if ( a2 < v5 ) /*0x5c0c94*/
        v5 = a2; /*0x5c0c96*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5c0c9c*/
        ++i; /*0x5c0ca1*/
      if ( this->IsAllocated ) /*0x5c0cae*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5c0cb9*/
        this->Items = 0; /*0x5c0cc1*/
      }
    }
    this->Items = v4; /*0x5c0cca*/
    this->DynamicVector_field_0x8 = a2; /*0x5c0cd2*/
    this->IsAllocated = a3 == 0; /*0x5c0cd5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5c0cde*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5c0ce1*/
  if ( v7 < this->Items ) /*0x5c0ce9*/
    this->Items = v7; /*0x5c0ceb*/
  return 1; /*0x5c0cee*/
}


// ==== 0x005C0D00  ?$DynamicVectorClass@PBD::FindInVector  this=DynamicVector  sig=csp ====
int __thiscall TacticalClass::FindInVector(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5c0d00*/
  result = 0; /*0x5c0d03*/
  if ( v2 <= 0 ) /*0x5c0d08*/
    return -1; /*0x5c0d1f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x5c0d0e*/
  {
    if ( ++result >= v2 ) /*0x5c0d1d*/
      return -1; /*0x5c0d1d*/
  }
  return result; /*0x5c0d22*/
}


// ==== 0x005C0D30  ?$VectorClass@PBD::processDeathEvent  this=VectorClass  sig=csp ====
VectorClass *__thiscall AbstractClass::processDeathEvent(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5c0d33*/
  *Block = &vt_VectorClass_char_const; /*0x5c0d36*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5c0d40*/
  {
    __3_YAXPAX_Z(v3); /*0x5c0d48*/
    *(Block + 1) = 0; /*0x5c0d50*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5c0d5b*/
  *(Block + 2) = 0; /*0x5c0d61*/
  if ( (a2 & 1) != 0 ) /*0x5c0d68*/
    __3_YAXPAX_Z(Block); /*0x5c0d6b*/
  return (VectorClass *)Block; /*0x5c0d75*/
}


// ==== 0x005C0D80  ?$DynamicVectorClass@PBD::DestroyVector  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall TacticalClass::DestroyVector(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5c0d83*/
  *Block = &vt_VectorClass_char_const; /*0x5c0d86*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5c0d90*/
  {
    __3_YAXPAX_Z(v3); /*0x5c0d98*/
    *(Block + 1) = 0; /*0x5c0da0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5c0dab*/
  *(Block + 2) = 0; /*0x5c0db1*/
  if ( (a2 & 1) != 0 ) /*0x5c0db8*/
    __3_YAXPAX_Z(Block); /*0x5c0dbb*/
  return (DynamicVector *)Block; /*0x5c0dc5*/
}


// ==== 0x005C0DD0  MPBattleClass::initGame  this=MultiplayerBattle  sig=csp ====
_DWORD *__thiscall MPBattleClass::initGame(
        MultiplayerBattle *this,
        const wchar_t **a1,
        MultiplayerBattle *aP2,
        const char **a3,
        MultiplayerBattle *aP4,
        char aP5,
        MultiplayerBattle *aP6)
{
  MultiplayerGameMode::Construct( /*0x5c0df3*/
    this,
    (MultiplayerGameMode *)a1,
    (MultiplayerGameMode *)aP2,
    (MultiplayerGameMode *)a3,
    (MultiplayerGameMode *)aP4,
    (MultiplayerGameMode *)aP5,
    (MultiplayerGameMode *)aP6);
  this->vfptr = &vt_MultiplayerBattle; /*0x5c0df8*/
  return &this->vfptr; /*0x5c0e00*/
}


// ==== 0x005C0E10  MultiplayerBattle::method_5C0E10  this=MultiplayerBattle  sig=csp ====
void __thiscall sub_5C0E10(MultiplayerBattle *this)
{
  this->vfptr = &vt_MultiplayerBattle; /*0x5c0e10*/
  MultiplayerGameMode::Dtor(this); /*0x5c0e16*/
}


// ==== 0x005C0E20  MultiplayerBattle::initUnits  this=MultiplayerBattle  sig=csp ====
char __thiscall ScenarioClass::initUnits(MultiplayerBattle *this)
{
  return 1; /*0x5c0e22*/
}


// ==== 0x005C0E30  MultiplayerGameMode::StubReturnFalse  this=MultiplayerGameMode  sig=csp ====
char ScenarioClass::_vt1()
{
  return 0; /*0x5c0e32*/
}


// ==== 0x005C0E40  MultiplayerGameMode::StubReturnFalse2  this=MultiplayerGameMode  sig=csp ====
char ScenarioClass::_vt2()
{
  return 0; /*0x5c0e42*/
}


// ==== 0x005C0E50  MultiplayerGameMode::StubReturnFalse3  this=MultiplayerGameMode  sig=csp ====
char __stdcall ScenarioClass::_vt3(int a1)
{
  return 1; /*0x5c0e52*/
}


// ==== 0x005C0E60  MultiplayerGameMode::StubReturnTrue  this=MultiplayerGameMode  sig=csp ====
void ScenarioClass::StubReturnTrue()
{
  ; /*0x5c0e60*/
}


// ==== 0x005C0E70  MultiplayerGameMode::StubReturnTrue2  this=MultiplayerGameMode  sig=csp ====
void ScenarioClass::StubReturnTrue2()
{
  ; /*0x5c0e70*/
}


// ==== 0x005C0E80  MultiplayerGameMode::StubReturnFalse4  this=MultiplayerGameMode  sig=csp ====
void __stdcall ScenarioClass::StubReturnFalse4(int a1)
{
  ; /*0x5c0e80*/
}


// ==== 0x005C0E90  MultiplayerGameMode::FreeConditional  this=MultiplayerGameMode  sig=csp ====
char __stdcall Memory_FreeConditional(int a1, int a2, void *Block, int a4, __int16 a5, int a6, int a7, int a8, int a9)
{
  if ( Block && HIBYTE(a5) ) /*0x5c0e9e*/
    __3_YAXPAX_Z(Block); /*0x5c0ea1*/
  return 0; /*0x5c0eab*/
}


// ==== 0x005C0EB0  MultiplayerGameMode::Conditional  this=MultiplayerGameMode  sig=csp ====
char __stdcall SafeDelete_Conditional(int a1, int a2, void *Block, int a4, __int16 a5, int a6, int a7)
{
  if ( Block && HIBYTE(a5) ) /*0x5c0ebe*/
    __3_YAXPAX_Z(Block); /*0x5c0ec1*/
  return 0; /*0x5c0ecb*/
}


// ==== 0x005C0ED0  MultiplayerGameMode::StubReturnFalse5  this=MultiplayerGameMode  sig=csp ====
char __stdcall ScenarioClass::_vt23(int a1, int a2, int a3)
{
  return 1; /*0x5c0ed2*/
}


// ==== 0x005C0EE0  MultiplayerGameMode::initTriggers  this=MultiplayerGameMode  sig=csp ====
char __thiscall ScenarioClass::initTriggers(std::codecvt_base *this)
{
  return 1; /*0x5c0ee2*/
}


// ==== 0x005C0EF0  MultiplayerGameMode::StubReturnFalse6  this=MultiplayerGameMode  sig=csp ====
void __stdcall ScenarioClass::StubReturnFalse6(int a1, int a2)
{
  ; /*0x5c0ef0*/
}


// ==== 0x005C0F00  MultiplayerGameMode::StubReturnFalse7  this=MultiplayerGameMode  sig=csp ====
void __stdcall ScenarioClass::StubReturnFalse7(int a1)
{
  ; /*0x5c0f00*/
}


// ==== 0x005C0F10  MultiplayerGameMode::StubReturnTrue3  this=MultiplayerGameMode  sig=csp ====
void ScenarioClass::StubReturnTrue3()
{
  ; /*0x5c0f10*/
}


// ==== 0x005C0F20  MultiplayerGameMode::StubReturnTrue4  this=MultiplayerGameMode  sig=csp ====
void ScenarioClass::StubReturnTrue4()
{
  ; /*0x5c0f20*/
}


// ==== 0x005C0F30  MultiplayerGameMode::initTeams  this=MultiplayerGameMode  sig=csp ====
int ScenarioClass::initTeams()
{
  return -1; /*0x5c0f33*/
}


// ==== 0x005C0F40  MultiplayerGameMode::StubReturnTrue5  this=MultiplayerGameMode  sig=csp ====
void ScenarioClass::StubReturnTrue5()
{
  ; /*0x5c0f40*/
}


// ==== 0x005C0F50  MultiplayerGameMode::StubReturnFalse8  this=MultiplayerGameMode  sig=csp ====
void __stdcall ScenarioClass::StubReturnFalse8(int a1)
{
  ; /*0x5c0f50*/
}


// ==== 0x005C0F60  MultiplayerGameMode::StubReturnFalse9  this=MultiplayerGameMode  sig=csp ====
void __stdcall ScenarioClass::StubReturnFalse9(int a1)
{
  ; /*0x5c0f60*/
}


// ==== 0x005C0F70  MultiplayerGameMode::StubReturnFalse10  this=MultiplayerGameMode  sig=csp ====
char ScenarioClass::_vt42()
{
  return 0; /*0x5c0f72*/
}


// ==== 0x005C0F80  MultiplayerGameMode::StubReturnTrue6  this=MultiplayerGameMode  sig=csp ====
void ScenarioClass::StubReturnTrue6()
{
  ; /*0x5c0f80*/
}


// ==== 0x005C0F90  MultiplayerGameMode::StubReturnTrue7  this=MultiplayerGameMode  sig=csp ====
void ScenarioClass::StubReturnTrue7()
{
  ; /*0x5c0f90*/
}


// ==== 0x005C0FA0  MultiplayerGameMode::FreeConditional2  this=MultiplayerGameMode  sig=csp ====
char __stdcall Memory_FreeConditional2(int a1, void *Block, int a3, __int16 a4, int a5, int a6, int a7)
{
  if ( Block && HIBYTE(a4) ) /*0x5c0fae*/
    __3_YAXPAX_Z(Block); /*0x5c0fb1*/
  return 0; /*0x5c0fbb*/
}


// ==== 0x005C0FC0  MultiplayerGameMode::StubReturnFalse11  this=MultiplayerGameMode  sig=csp ====
int ScenarioClass::_vt46()
{
  return 0; /*0x5c0fc2*/
}


// ==== 0x005C0FD0  MultiplayerGameMode::initWaypoints  this=MultiplayerGameMode  sig=csp ====
char __thiscall ScenarioClass::initWaypoints(std::codecvt_base *this)
{
  return 1; /*0x5c0fd2*/
}


// ==== 0x005C0FE0  MultiplayerBattle::initAI  this=MultiplayerBattle  sig=csp ====
_DWORD *__thiscall ScenarioClass::initAI(MultiplayerBattle *this, char a2)
{
  this->vfptr = &vt_MultiplayerBattle; /*0x5c0fe3*/
  MultiplayerGameMode::Dtor(this); /*0x5c0fe9*/
  if ( (a2 & 1) != 0 ) /*0x5c0ff3*/
    __3_YAXPAX_Z(this); /*0x5c0ff6*/
  return &this->vfptr; /*0x5c1000*/
}


// ==== 0x005C1030  ListBox::Constructor  this=int  sig=csp ====
wchar_t **__thiscall ListBox::Constructor(wchar_t *this)
{
  char v1; // bl
  MultiplayerTeam *v3; // esi
  GameSetup *v4; // eax
  void *v6[2]; // [esp+Ch] [ebp-8h] BYREF

  v1 = 0; /*0x5c1036*/
  v6[1] = 0; /*0x5c103c*/
  v3 = (MultiplayerTeam *)__2_YAPAXI_Z(0xCu); /*0x5c1045*/
  if ( v3 ) /*0x5c104c*/
  {
    v1 = 1; /*0x5c1054*/
    v4 = (GameSetup *)FormatWideString((wchar_t **)v6, this); /*0x5c1059*/
    MultiplayerTeam::Constructor((wchar_t **)v3, (MPCooperative *)v4, this); /*0x5c1062*/
    *(_DWORD *)v3->__pad_0 = &MultiplayerBattleTeam::`vftable'; /*0x5c1067*/
  }
  else
  {
    v3 = 0; /*0x5c106f*/
  }
  if ( (v1 & 1) != 0 ) /*0x5c1074*/
    DeleteAndZero::Alt(v6); /*0x5c107a*/
  return (wchar_t **)v3; /*0x5c1081*/
}


// ==== 0x005C1090  MultiplayerBattleTeam::AddRef  this=MultiplayerBattleTeam  sig=csp ====
bool __stdcall MultiplayerBattleTeam::_vt01(int a1)
{
  return PlayerClass::IsValidIndex(a1); /*0x5c109f*/
}


// ==== 0x005C10B0  MultiplayerBattleTeam::Release  this=MultiplayerBattleTeam  sig=csp ====
bool __thiscall MultiplayerBattleTeam::_vt02(_DWORD *this, int a2)
{
  return PlayerClass::SetHouse(this, a2) != 0; /*0x5c10bf*/
}


// ==== 0x005C10D0  MultiplayerBattleTeam::QueryInterface  this=MultiplayerBattleTeam  sig=csp ====
MultiplayerBattleTeam *__thiscall MultiplayerBattleTeam::QueryInterface(void **Block, char a2)
{
  MultiplayerTeam::Destructor(Block); /*0x5c10d3*/
  if ( (a2 & 1) != 0 ) /*0x5c10dd*/
    __3_YAXPAX_Z(Block); /*0x5c10e0*/
  return (MultiplayerBattleTeam *)Block; /*0x5c10ea*/
}


// ==== 0x005C10F0  sub_5C10F0  this=-  sig=ida-proto ====
void sub_5C10F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5c10fc*/
  MEMORY[0xABF420] = Math::Sqrt(v0 + v0); /*0x5c110e*/
}


// ==== 0x005C1120  sub_5C1120  this=-  sig=ida-proto ====
void sub_5C1120()
{
  MEMORY[0xABF490] = MEMORY[0xABF420] / 60.0; /*0x5c112c*/
}


// ==== 0x005C1140  sub_5C1140  this=-  sig=ida-proto ====
void sub_5C1140()
{
  MEMORY[0xABF458] = 1.0 / MEMORY[0xABF490]; /*0x5c114c*/
}


// ==== 0x005C1160  sub_5C1160  this=-  sig=ida-proto ====
void sub_5C1160()
{
  MEMORY[0xABF450] = 0.0174532925199433 * 45.0; /*0x5c116c*/
}


// ==== 0x005C1180  sub_5C1180  this=-  sig=ida-proto ====
void sub_5C1180()
{
  MEMORY[0xABF428] = 0.0174532925199433 * 60.0; /*0x5c118c*/
}


// ==== 0x005C11A0  sub_5C11A0  this=-  sig=ida-proto ====
void sub_5C11A0()
{
  MEMORY[0xABF400] = 0.0174532925199433 * 90.0; /*0x5c11ac*/
}


// ==== 0x005C11C0  sub_5C11C0  this=-  sig=ida-proto ====
__int64 sub_5C11C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF400] - MEMORY[0xABF428]); /*0x5c11d2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF420] * 0.5); /*0x5c11e6*/
  MEMORY[0xABF498] = result; /*0x5c11eb*/
  return result; /*0x5c11f0*/
}


// ==== 0x005C1200  sub_5C1200  this=-  sig=ida-proto ====
void sub_5C1200()
{
  MEMORY[0xABF430] = Math::ArcTan((double)MEMORY[0xABF498] * 0.00390625); /*0x5c1217*/
}


// ==== 0x005C1230  sub_5C1230  this=-  sig=ida-proto ====
void sub_5C1230()
{
  MEMORY[0xABF448] = Math::ArcTan((double)(2 * MEMORY[0xABF498]) / MEMORY[0xABF420]); /*0x5c1252*/
}


// ==== 0x005C1260  sub_5C1260  this=-  sig=ida-proto ====
__int64 sub_5C1260()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF498]) + 0.5); /*0x5c127b*/
  MEMORY[0xABF48C] = result; /*0x5c1280*/
  return result; /*0x5c1286*/
}


// ==== 0x005C1290  sub_5C1290  this=-  sig=ida-proto ====
int sub_5C1290()
{
  MEMORY[0xABF418] = 0; /*0x5c1292*/
  MEMORY[0xABF41A] = 0; /*0x5c1298*/
  return 0; /*0x5c129e*/
}


// ==== 0x005C12A0  sub_5C12A0  this=-  sig=ida-proto ====
int sub_5C12A0()
{
  MEMORY[0xABF438] = 0; /*0x5c12a2*/
  MEMORY[0xABF43C] = 0; /*0x5c12a7*/
  MEMORY[0xABF440] = 0; /*0x5c12ac*/
  return 0; /*0x5c12b1*/
}


// ==== 0x005C12C0  sub_5C12C0  this=-  sig=ida-proto ====
int sub_5C12C0()
{
  MEMORY[0xABF488] = 0; /*0x5c12c5*/
  MEMORY[0xABF480] = 128; /*0x5c12cf*/
  MEMORY[0xABF484] = 128; /*0x5c12d4*/
  return 128; /*0x5c12d9*/
}


// ==== 0x005C12E0  sub_5C12E0  this=-  sig=ida-proto ====
int sub_5C12E0()
{
  MEMORY[0xABF408] = 0; /*0x5c12e2*/
  MEMORY[0xABF40C] = 0; /*0x5c12e7*/
  MEMORY[0xABF410] = 0; /*0x5c12ec*/
  MEMORY[0xABF414] = 0; /*0x5c12f1*/
  return 0; /*0x5c12f6*/
}


// ==== 0x005C1300  ObjectClass::ReadMPMapsINI  this=ObjectClass  sig=csp ====
int __thiscall sub_5C1300(char *Source)
{
  int Int_Overwrite; // edi
  int i; // esi
  void *v4[4]; // [esp+4h] [ebp-CCh] BYREF
  _DWORD v5[3]; // [esp+14h] [ebp-BCh] BYREF
  _DWORD v6[6]; // [esp+20h] [ebp-B0h] BYREF
  char v7; // [esp+38h] [ebp-98h]
  int v8; // [esp+3Ch] [ebp-94h]
  int v9; // [esp+40h] [ebp-90h]
  _DWORD v10[22]; // [esp+44h] [ebp-8Ch] BYREF
  _BYTE v11[12]; // [esp+9Ch] [ebp-34h] BYREF
  int v12; // [esp+A8h] [ebp-28h]
  char Buffer[32]; // [esp+B0h] [ebp-20h] BYREF

  if ( !Source ) /*0x5c130b*/
    return 0; /*0x5c130d*/
  CCFileClass::Construct(v10, Source); /*0x5c131c*/
  v4[1] = 0; /*0x5c1325*/
  v4[2] = 0; /*0x5c1329*/
  GenericNode::Constructor(v5); /*0x5c132d*/
  GenericNode::Constructor(v6); /*0x5c1336*/
  LinkedList::Prepend(v5, (int)v6); /*0x5c134c*/
  v4[3] = &vt_List_INIClass_INISection; /*0x5c1355*/
  memset(&v6[3], 0, 12); /*0x5c1363*/
  v7 = 0; /*0x5c136f*/
  v8 = 0; /*0x5c1373*/
  v9 = 0; /*0x5c1377*/
  v4[0] = &vt_INIClass; /*0x5c137b*/
  if ( FileStraw::Open(v4, (int)v10, 0) ) /*0x5c1383*/
  {
    Int_Overwrite = 0; /*0x5c13cd*/
    for ( i = 0; i < 8; ++i ) /*0x5c13cf*/
    {
      sprintf(Buffer, MEMORY[0x817F6C], i); /*0x5c13df*/
      if ( INIClass::ReadInt_Overwrite((int)v4, (unsigned __int8 *)g_INI_Key_Waypoints, (unsigned __int8 *)Buffer, -1) != -1 ) /*0x5c1402*/
        ++Int_Overwrite; /*0x5c1404*/
    }
    if ( !Int_Overwrite ) /*0x5c140d*/
      Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x5c1423*/
                        (int)v4,
                        (unsigned __int8 *)g_INI_Key_RandomMap,
                        (unsigned __int8 *)MEMORY[0x82BBD8],
                        0);
    HashTable::DestroyHashTableINIClass(v4); /*0x5c1429*/
    v10[0] = &vt_CCFileClass; /*0x5c1435*/
    v12 = 0; /*0x5c143d*/
    Vector::Clear((int)v11); /*0x5c1444*/
    v10[0] = &off_7E1668; /*0x5c144d*/
    BufferIOFileClass::Dtor(v10); /*0x5c1455*/
    return Int_Overwrite; /*0x5c145a*/
  }
  else
  {
    HashTable::DestroyHashTableINIClass(v4); /*0x5c1390*/
    v10[0] = &vt_CCFileClass; /*0x5c139c*/
    v12 = 0; /*0x5c13a4*/
    Vector::Clear((int)v11); /*0x5c13ab*/
    v10[0] = &off_7E1668; /*0x5c13b4*/
    BufferIOFileClass::Dtor(v10); /*0x5c13bc*/
    return 0; /*0x5c13c1*/
  }
}


// ==== 0x005C1470  MPCooperative::ctor  this=MPCooperative  sig=csp ====
_DWORD *__thiscall MPCooperative::ctor(
        _DWORD *this,
        MultiplayerGameMode *aP1,
        MPCooperative *aP2,
        MultiplayerGameMode *aP3,
        MPCooperative *aP4,
        MultiplayerGameMode *aP5,
        MPCooperative *aP6)
{
  IPXManagerClass *v8; // esi
  int v9; // ebp
  VectorClass *v10; // esi
  int v11; // ebp
  VectorClass *v12; // esi
  int v13; // ebp
  VectorClass *v14; // esi
  int i; // ebp
  int v16; // edx
  Array *v17; // ebx
  int v18; // ebp
  _DWORD *v19; // eax
  _DWORD *v20; // ebp
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // edx

  MultiplayerGameMode::Construct( /*0x5c1494*/
    this,
    aP1,
    (MultiplayerGameMode *)aP2,
    aP3,
    (MultiplayerGameMode *)aP4,
    0,
    (MultiplayerGameMode *)aP6);
  AbstractClass::updateAnimationState(this + 22, 0, 0); /*0x5c14a0*/
  this->MPCooperative_field_0x58 = &vt_DynamicVectorClass_NodeNameType; /*0x5c14a5*/
  this->MPCooperative_field_0x6C = 10; /*0x5c14ab*/
  this->MPCooperative_field_0x68 = 0; /*0x5c14b2*/
  v8 = (IPXManagerClass *)(this + 49); /*0x5c14b5*/
  v9 = 8; /*0x5c14bb*/
  do /*0x5c14cb*/
  {
    Waypoint::InitInvalid(v8); /*0x5c14c2*/
    v8 = (IPXManagerClass *)((char *)v8 + 12); /*0x5c14c7*/
    --v9; /*0x5c14ca*/
  }
  while ( v9 ); /*0x5c14cb*/
  v10 = (VectorClass *)(this + 105); /*0x5c14cd*/
  v11 = 8; /*0x5c14d3*/
  do /*0x5c14f5*/
  {
    VectorClass::Construct(v10, 0, 0); /*0x5c14dc*/
    v10->vtable0 = &vt_DynamicVectorClass_int; /*0x5c14e1*/
    v10[1].Items = (void *)10; /*0x5c14e7*/
    v10[1].vtable0 = 0; /*0x5c14ee*/
    v10 = (VectorClass *)((char *)v10 + 24); /*0x5c14f1*/
    --v11; /*0x5c14f4*/
  }
  while ( v11 ); /*0x5c14f5*/
  v12 = (VectorClass *)(this + 153); /*0x5c14f7*/
  v13 = 8; /*0x5c14fd*/
  do /*0x5c151f*/
  {
    VectorClass::Construct(v12, 0, 0); /*0x5c1506*/
    v12->vtable0 = &vt_DynamicVectorClass_int; /*0x5c150b*/
    v12[1].Items = (void *)10; /*0x5c1511*/
    v12[1].vtable0 = 0; /*0x5c1518*/
    v12 = (VectorClass *)((char *)v12 + 24); /*0x5c151b*/
    --v13; /*0x5c151e*/
  }
  while ( v13 ); /*0x5c151f*/
  v14 = (VectorClass *)(this + 201); /*0x5c1521*/
  CoopCampaignVector::Construct(this + 201, 0, 0); /*0x5c152b*/
  this->MPCooperative_field_0x324 = &vt_DynamicVectorClass_CoopCampaignClass; /*0x5c1530*/
  *(this + 206) = 10; /*0x5c1536*/
  *(this + 205) = 0; /*0x5c153d*/
  *this = &vt_MPCooperative; /*0x5c1540*/
  this->MPCooperative_field_0x10 = 0; /*0x5c1546*/
  this->MPCooperative_field_0x44 = 0; /*0x5c1549*/
  this->MPCooperative_field_0x33C = 0; /*0x5c154c*/
  this->MPCooperative_field_0x14 = 0; /*0x5c1552*/
  this->MPCooperative_field_0x4 = 0; /*0x5c1555*/
  this->MPCooperative_field_0x48 = 0; /*0x5c1559*/
  *((_BYTE *)this + 73) = 0; /*0x5c155d*/
  this->MPCooperative_field_0x4C = 0; /*0x5c1561*/
  this->MPCooperative_field_0x340 = 1; /*0x5c1564*/
  for ( i = *(this + 205) - 1; i >= 0; --i ) /*0x5c1572*/
  {
    v16 = this->__pad_328; /*0x5c1574*/
    v17 = *(Array **)(v16 + 4 * i); /*0x5c157a*/
    if ( v17 ) /*0x5c157f*/
    {
      Array::Cleanup(*(_DWORD *)(v16 + 4 * i)); /*0x5c1583*/
      __3_YAXPAX_Z(v17); /*0x5c1589*/
    }
  }
  v18 = *(this + 203); /*0x5c1598*/
  (*((void (__thiscall **)(_DWORD *))v14->vtable0 + 3))(this + 201); /*0x5c159d*/
  (*((void (__thiscall **)(_DWORD *, int, _DWORD))v14->vtable0 + 2))(this + 201, v18, 0); /*0x5c15a6*/
  CampaignClass::GetValue((int)&stru_89E138.__pad_1258[392], (CCINIClass *)&aP4); /*0x5c15b3*/
  for ( aP6 = 0; (int)aP6 < (int)aP4; aP6 = (MPCooperative *)((char *)aP6 + 1) ) /*0x5c15c2*/
  {
    v19 = (_DWORD *)__2_YAPAXI_Z(0x70u); /*0x5c15c6*/
    if ( v19 ) /*0x5c15d0*/
      v20 = MissionClass::Init(v19); /*0x5c15d9*/
    else
      v20 = 0; /*0x5c15dd*/
    Movie::SetupScreen((int)v20, (CCINIClass *)aP6); /*0x5c15e6*/
    v21 = *(this + 203); /*0x5c15eb*/
    if ( *(this + 205) >= v21 ) /*0x5c15f3*/
    {
      if ( !*((_BYTE *)this + 817) && v21 ) /*0x5c15fe*/
        continue; /*0x5c15fe*/
      v22 = *(this + 206); /*0x5c1600*/
      if ( v22 <= 0 /*0x5c160f*/
        || !(*((unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))v14->vtable0 + 2))(this + 201, v21 + v22, 0) )
      {
        continue; /*0x5c160f*/
      }
    }
    v23 = *(this + 205); /*0x5c1616*/
    v24 = this->__pad_328; /*0x5c1619*/
    *(this + 205) = v23 + 1; /*0x5c161f*/
    *(_DWORD *)(v24 + 4 * v23) = v20; /*0x5c1622*/
  }
  return this; /*0x5c1638*/
}


// ==== 0x005C1640  MPCooperative::MPCooperative_Cleanup  this=MPCooperative  sig=csp ====
void MPCooperative_Cleanup(MPCooperative *aP0, int a2)
{
  int v2; // ecx
  MPCooperative *ebp0; // ebp
  MPCooperative *v4; // edi
  Array *v3; // esi
  int i; // ebp
  int v7; // eax
  Array *v6; // esi
  char *j; // ebp
  void (__thiscall ***ecx9)(void *, int); // ecx
  void *v11; // eax
  VectorClass *v10; // esi
  int ebp14; // ebp
  void *v14; // eax
  VectorClass *v13; // esi
  int ebp19; // ebp
  void *v17; // eax
  CCINIClass *v16; // eax
  MPCooperative *v19; // [esp-4h] [ebp-10h]

  v4 = (MPCooperative *)v2; /*0x5c1643*/
  v3 = *(Array **)(v2 + 64); /*0x5c1647*/
  *(_DWORD *)v2 = &vt_MPCooperative; /*0x5c164a*/
  if ( v3 ) /*0x5c1652*/
  {
    Array::Cleanup((int)v3); /*0x5c1656*/
    __3_YAXPAX_Z(v3); /*0x5c165c*/
    v4->field_40 = 0; /*0x5c1664*/
  }
  v19 = ebp0; /*0x5c1667*/
  for ( i = *(_DWORD *)&v4->__pad_328[12] - 1; i >= 0; --i ) /*0x5c166f*/
  {
    v7 = *(_DWORD *)v4->__pad_328; /*0x5c1671*/
    v6 = *(Array **)(v7 + 4 * i); /*0x5c1677*/
    if ( v6 ) /*0x5c167c*/
    {
      Array::Cleanup(*(_DWORD *)(v7 + 4 * i)); /*0x5c1680*/
      __3_YAXPAX_Z(v6); /*0x5c1686*/
    }
  }
  (*(void (__thiscall **)(int *, MPCooperative *))(v4->field_324 + 12))(&v4->field_324, v19); /*0x5c169f*/
  for ( j = (char *)v4->field_68 - 1; (int)j >= 0; --j ) /*0x5c16a6*/
    __3_YAXPAX_Z(*((void **)v4->field_5C + (_DWORD)j)); /*0x5c16af*/
  (*((void (__thiscall **)(void **))v4->field_58 + 3))(&v4->field_58); /*0x5c16c3*/
  (*((void (__thiscall **)(void **))v4->field_58 + 2))(&v4->field_58); /*0x5c16ce*/
  ecx9 = (void (__thiscall ***)(void *, int))v4->field_50; /*0x5c16d1*/
  if ( ecx9 ) /*0x5c16d6*/
  {
    (**ecx9)(ecx9, 1); /*0x5c16dc*/
    v4->field_50 = 0; /*0x5c16de*/
  }
  LOBYTE(v4->field_4) = 0; /*0x5c16e1*/
  v11 = *(void **)v4->__pad_328; /*0x5c16e4*/
  v4->field_324 = (int)&vt_VectorClass_CoopCampaignClass; /*0x5c16e9*/
  if ( v11 && v4->__pad_328[9] ) /*0x5c16f1*/
  {
    __3_YAXPAX_Z(v11); /*0x5c16f7*/
    *(_DWORD *)v4->__pad_328 = 0; /*0x5c16ff*/
  }
  v4->__pad_328[9] = 0; /*0x5c1702*/
  *(_DWORD *)&v4->__pad_328[4] = 0; /*0x5c1705*/
  v10 = (VectorClass *)&v4->field_324; /*0x5c1708*/
  ebp14 = 8; /*0x5c170e*/
  do /*0x5c173b*/
  {
    v14 = *(void **)&v10[-2].IsInitialized; /*0x5c1713*/
    v10 = (VectorClass *)((char *)v10 - 24); /*0x5c1716*/
    v10->vtable0 = &vt_VectorClass_int; /*0x5c171b*/
    if ( v14 && v10->IsAllocated ) /*0x5c1723*/
    {
      __3_YAXPAX_Z(v14); /*0x5c1729*/
      v10->Items = 0; /*0x5c1731*/
    }
    --ebp14; /*0x5c1734*/
    v10->IsAllocated = 0; /*0x5c1735*/
    v10->Capacity = 0; /*0x5c1738*/
  }
  while ( ebp14 ); /*0x5c173b*/
  v13 = (VectorClass *)&v4->field_264; /*0x5c173d*/
  ebp19 = 8; /*0x5c1743*/
  do /*0x5c1770*/
  {
    v17 = *(void **)&v13[-2].IsInitialized; /*0x5c1748*/
    v13 = (VectorClass *)((char *)v13 - 24); /*0x5c174b*/
    v13->vtable0 = &vt_VectorClass_int; /*0x5c1750*/
    if ( v17 && v13->IsAllocated ) /*0x5c1758*/
    {
      __3_YAXPAX_Z(v17); /*0x5c175e*/
      v13->Items = 0; /*0x5c1766*/
    }
    --ebp19; /*0x5c1769*/
    v13->IsAllocated = 0; /*0x5c176a*/
    v13->Capacity = 0; /*0x5c176d*/
  }
  while ( ebp19 ); /*0x5c1770*/
  v16 = (CCINIClass *)v4->field_5C; /*0x5c1772*/
  v4->field_58 = &vt_VectorClass_NodeNameType; /*0x5c1775*/
  if ( v16 && BYTE1(v4->field_64) ) /*0x5c1781*/
  {
    __3_YAXPAX_Z(v16); /*0x5c1787*/
    v4->field_5C = 0; /*0x5c178f*/
  }
  BYTE1(v4->field_64) = 0; /*0x5c1794*/
  v4->field_60 = 0; /*0x5c1797*/
  MultiplayerGameMode::Dtor(v4); /*0x5c179a*/
}


// ==== 0x005C17B0  MPCooperative::?  this=MPCooperative  sig=csp ====
char __thiscall MPCooperative::_vt07(int *this, int a2)
{
  char v3; // bl
  int v4; // edx
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // [esp-8h] [ebp-1Ch]
  int v11; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h] BYREF

  v3 = 0; /*0x5c17c3*/
  v10 = this->MPCooperative_field_0x33C; /*0x5c17c5*/
  v11 = 0; /*0x5c17cb*/
  Movie::GetSection((int)&MEMORY[0x89F518], v10, &v12); /*0x5c17cf*/
  v4 = v12; /*0x5c17d4*/
  if ( !v12 ) /*0x5c17da*/
    return 1; /*0x5c17e4*/
  v6 = this->MPCooperative_field_0x10; /*0x5c17e7*/
  if ( v6 ) /*0x5c17ec*/
  {
    if ( Movie::GetState(v6, &v11) ) /*0x5c17f3*/
    {
      v7 = v11; /*0x5c180c*/
    }
    else
    {
      v7 = 0; /*0x5c17fc*/
      v11 = 0; /*0x5c17fe*/
    }
    v4 = v12; /*0x5c1810*/
  }
  else
  {
    v7 = 0; /*0x5c1804*/
    v11 = 0; /*0x5c1806*/
  }
  if ( v7 >= *(_DWORD *)(v4 + 32) ) /*0x5c1817*/
    return 1; /*0x5c1821*/
  if ( a2 == -2 ) /*0x5c182b*/
  {
    if ( *(int *)(*(_DWORD *)(*(_DWORD *)(v4 + 20) + 4 * v7) + 16) > 1 ) /*0x5c1837*/
      return 1; /*0x5c1841*/
  }
  else if ( a2 == -3 ) /*0x5c1847*/
  {
    return 1; /*0x5c1851*/
  }
  v8 = 0; /*0x5c1857*/
  v9 = *(_DWORD *)(*(_DWORD *)(v4 + 20) + 4 * v7); /*0x5c1859*/
  if ( *(int *)(v9 + 16) > 0 ) /*0x5c185f*/
  {
    while ( SideClass::FindByName(*(void **)(*(_DWORD *)(v9 + 4) + 4 * v8)) != a2 ) /*0x5c186e*/
    {
      ++v8; /*0x5c1878*/
      v9 = *(_DWORD *)(*(_DWORD *)(v12 + 20) + 4 * v11); /*0x5c187c*/
      if ( v8 >= *(_DWORD *)(v9 + 16) ) /*0x5c1882*/
        return 0; /*0x5c188c*/
    }
    return 1; /*0x5c188f*/
  }
  return v3; /*0x5c17dc*/
}


// ==== 0x005C18A0  MPCooperative::Read  this=MPCooperative  sig=csp ====
char __thiscall MPCooperative::_vt04(_DWORD *this)
{
  int i; // edi
  int v3; // eax
  void *v4; // esi
  int v5; // edi
  _DWORD *v6; // esi
  int j; // ebx
  _DWORD *v8; // eax
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v15; // [esp+10h] [ebp-4h] BYREF

  for ( i = *(this + 205) - 1; i >= 0; --i ) /*0x5c18ad*/
  {
    v3 = this->__pad_328; /*0x5c18af*/
    v4 = *(void **)(v3 + 4 * i); /*0x5c18b5*/
    if ( v4 ) /*0x5c18ba*/
    {
      Array::Cleanup(*(_DWORD *)(v3 + 4 * i)); /*0x5c18be*/
      __3_YAXPAX_Z(v4); /*0x5c18c4*/
    }
  }
  v5 = *(this + 203); /*0x5c18d5*/
  v6 = this + 201; /*0x5c18db*/
  (*(void (__thiscall **)(_DWORD *))(this->MPCooperative_field_0x324 + 12))(this + 201); /*0x5c18e3*/
  (*(void (__thiscall **)(_DWORD *, int, _DWORD))(this->MPCooperative_field_0x324 + 8))(this + 201, v5, 0); /*0x5c18ed*/
  CampaignClass::GetValue((int)&MEMORY[0x89F518], &v15); /*0x5c18fa*/
  for ( j = 0; j < v15; ++j ) /*0x5c1907*/
  {
    v8 = __2_YAPAXI_Z(0x70u); /*0x5c190b*/
    if ( v8 ) /*0x5c1915*/
      v9 = MissionClass::Init(v8); /*0x5c191e*/
    else
      v9 = 0; /*0x5c1922*/
    Movie::SetupScreen((int)v9, j); /*0x5c1927*/
    v10 = v6[2]; /*0x5c192c*/
    if ( v6[4] >= v10 ) /*0x5c1934*/
    {
      if ( !*((_BYTE *)v6 + 13) && v10 ) /*0x5c193f*/
        continue; /*0x5c193f*/
      v11 = v6[5]; /*0x5c1941*/
      if ( v11 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 8))(v6, v10 + v11, 0) ) /*0x5c1951*/
        continue; /*0x5c1951*/
    }
    v12 = v6[4]; /*0x5c1958*/
    v13 = v6[1]; /*0x5c195b*/
    v6[4] = v12 + 1; /*0x5c1961*/
    *(_DWORD *)(v13 + 4 * v12) = v9; /*0x5c1964*/
  }
  return 1; /*0x5c1970*/
}


// ==== 0x005C1980  ObjectClass::MPCooperative_Copy  this=ObjectClass  sig=csp ====
int sub_5C1980()
{
  int result; // eax
  int v1; // ebp
  int i; // ebx
  int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+8h] [ebp-4h] BYREF

  result = -1; /*0x5c198a*/
  v1 = 0; /*0x5c198d*/
  v3 = -1; /*0x5c1991*/
  if ( MEMORY[0x89F574] > 0 ) /*0x5c1995*/
  {
    do /*0x5c1a00*/
    {
      Movie::GetSection((int)&MEMORY[0x89F518], v1, &v4); /*0x5c19a5*/
      for ( i = 0; i < 780; i += 260 ) /*0x5c19aa*/
      {
        if ( MEMORY[0xA8B254] ) /*0x5c19b3*/
        {
          if ( !_strnicmp( /*0x5c19da*/
                  (const char *)(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254]) + 88),
                  (const char *)(*(_DWORD *)(v4 + 12) + i),
                  strlen((const char *)(*(_DWORD *)(v4 + 12) + i))) )
            v3 = v1; /*0x5c19e6*/
        }
      }
      ++v1; /*0x5c19fd*/
    }
    while ( v1 < MEMORY[0x89F574] ); /*0x5c1a00*/
    return v3; /*0x5c1a02*/
  }
  return result; /*0x5c1a09*/
}


// ==== 0x005C1A10  MPCooperative::CopyTo  this=MPCooperative  sig=csp ====
HWND __thiscall MPCooperative::vt_08_(int this)
{
  int v2; // ecx
  char *v3; // eax
  void *v4; // edi
  char *v5; // ecx
  _DWORD *v6; // eax
  HWND result; // eax
  int v8; // ebx
  int v9; // ecx
  int v10; // ebx
  int v11; // ecx
  HWND v12; // edi
  char *String2; // [esp+10h] [ebp-Ch] BYREF
  BOOL v14; // [esp+14h] [ebp-8h]
  int v15; // [esp+18h] [ebp-4h] BYREF

  MEMORY[0x8316A4] = -1; /*0x5c1a13*/
  Debug::Log(); /*0x5c1a28*/
  Network::SendOptionsGame(aO8); /*0x5c1a35*/
  if ( Dialog::FindByHandle((void *)0xC2) || Dialog::FindByHandle((void *)0xBC) ) /*0x5c1a4d*/
  {
    v2 = *(_DWORD *)(this + 64); /*0x5c1a56*/
    if ( v2 ) /*0x5c1a5b*/
    {
      if ( (Movie::GetSectionID(v2, &String2), v3 = (char *)MPCooperative_Copy(this), v3 != String2) /*0x5c1a86*/
        && Dialog::GetCurrentType() == 107
        || Dialog::GetCurrentType() != 107 )
      {
        v4 = *(void **)(this + 64); /*0x5c1a88*/
        if ( v4 ) /*0x5c1a8d*/
        {
          Array::Cleanup(*(_DWORD *)(this + 64)); /*0x5c1a91*/
          __3_YAXPAX_Z(v4); /*0x5c1a97*/
        }
        *(_DWORD *)(this + 64) = 0; /*0x5c1a9f*/
      }
    }
    v5 = *(char **)(this + 64); /*0x5c1aa6*/
    if ( v5 ) /*0x5c1aab*/
    {
      if ( MEMORY[0xA8DA84] == 2 ) /*0x5c1ab4*/
        String::AssignWideToChar(v5, *(char **)MEMORY[0xA8DA78], *(char **)(MEMORY[0xA8DA78] + 4)); /*0x5c1ac2*/
      else
        String::AssignWideToChar(v5, (char *)&MEMORY[0x887734], (char *)&MEMORY[0x887734]); /*0x5c1ace*/
    }
  }
  if ( *(_DWORD *)(this + 64) ) /*0x5c1ad3*/
  {
LABEL_30:
    *(_BYTE *)(this + 832) = 1; /*0x5c1c7b*/
    result = (HWND)Dialog::FindGameUI(); /*0x5c1c82*/
    v12 = result; /*0x5c1c87*/
    if ( result ) /*0x5c1c8b*/
    {
      Campaign::SetupMovie((int *)this, result); /*0x5c1c90*/
      return CampaignCoop::Setup((int *)this, v12, 1); /*0x5c1c9a*/
    }
    return result; /*0x5c1c9a*/
  }
  v6 = __2_YAPAXI_Z(0x70u); /*0x5c1ae2*/
  if ( v6 ) /*0x5c1aec*/
    result = (HWND)MissionClass::Init(v6); /*0x5c1af0*/
  else
    result = 0; /*0x5c1af7*/
  *(_DWORD *)(this + 64) = result; /*0x5c1afb*/
  if ( result ) /*0x5c1afe*/
  {
    Movie::SetupScreen((int)result, 0); /*0x5c1b07*/
    v8 = MPCooperative_Copy(this); /*0x5c1b13*/
    if ( v8 >= 0 ) /*0x5c1b17*/
    {
      *(_DWORD *)(this + 828) = v8; /*0x5c1bb1*/
      Movie::GetSection((int)&MEMORY[0x89F518], v8, &v15); /*0x5c1bb7*/
      v11 = *(_DWORD *)(this + 64); /*0x5c1bc2*/
      String2 = 0; /*0x5c1bc5*/
      Array::GetElementAt(v11, &String2, 0); /*0x5c1bc9*/
      Debug::Log(); /*0x5c1be5*/
      if ( _strnicmp( /*0x5c1c0e*/
             (const char *)(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254]) + 88),
             String2,
             strlen(String2)) )
      {
        v14 = v8 == 0; /*0x5c1c21*/
        do /*0x5c1c6f*/
        {
          Movie::SetupScreen(*(_DWORD *)(this + 64), v14); /*0x5c1c2d*/
          Movie::SetupScreen(*(_DWORD *)(this + 64), v8); /*0x5c1c36*/
          Array::GetElementAt(*(_DWORD *)(this + 64), &String2, 0); /*0x5c1c45*/
        }
        while ( _strnicmp( /*0x5c1c6f*/
                  (const char *)(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254]) + 88),
                  String2,
                  strlen(String2)) );
      }
    }
    else
    {
      v9 = *(_DWORD *)(this + 64); /*0x5c1b23*/
      *(_DWORD *)(this + 828) = 0; /*0x5c1b26*/
      String2 = 0; /*0x5c1b2c*/
      Array::GetElementAt(v9, &String2, 0); /*0x5c1b30*/
      v10 = 0; /*0x5c1b3a*/
      if ( MEMORY[0xA8B8D8] > 0 ) /*0x5c1b3e*/
      {
        while ( _strnicmp((const char *)(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * v10) + 88), String2, strlen(String2)) ) /*0x5c1b69*/
        {
          if ( ++v10 >= MEMORY[0xA8B8D8] ) /*0x5c1b73*/
            goto LABEL_25; /*0x5c1b73*/
        }
        MEMORY[0xA8B254] = v10; /*0x5c1b79*/
        LoadScenarioClassByIndex(v10); /*0x5c1b7f*/
      }
LABEL_25:
      if ( v10 == MEMORY[0xA8B8D8] ) /*0x5c1b8a*/
      {
        MEMORY[0xA8B254] = 0; /*0x5c1b92*/
        LoadScenarioClassByIndex(0); /*0x5c1b9c*/
      }
    }
    goto LABEL_30; /*0x5c1ba1*/
  }
  return result; /*0x5c1c9f*/
}


// ==== 0x005C1CB0  MPCooperative::COMStub  this=MPCooperative  sig=csp ====
void __thiscall MPCooperative::_vt09(_BYTE *this)
{
  this->MPCooperative_field_0x340 = 1; /*0x5c1cb0*/
}


// ==== 0x005C1CC0  MPCooperative::InitSession  this=MPCooperative  sig=csp ====
int __thiscall MPCooperative::vt_17_(int *this)
{
  int v2; // ebx
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v6; // [esp+10h] [ebp-8h] BYREF
  char *String2; // [esp+14h] [ebp-4h] BYREF

  v2 = 0; /*0x5c1ccd*/
  v6 = 0; /*0x5c1cd5*/
  String2 = 0; /*0x5c1cd9*/
  CampaignClass::GetValue((int)&MEMORY[0x89F518], &v6); /*0x5c1cdd*/
  if ( !v6 ) /*0x5c1ce6*/
    return -1; /*0x5c1ce6*/
  if ( !this->MPCooperative_field_0x10 ) /*0x5c1ce8*/
  {
    v3 = __2_YAPAXI_Z(0x70u); /*0x5c1cef*/
    if ( v3 ) /*0x5c1cf9*/
      v4 = MissionClass::Init(v3); /*0x5c1cfd*/
    else
      v4 = 0; /*0x5c1d04*/
    this->MPCooperative_field_0x10 = (int)v4; /*0x5c1d06*/
  }
  Movie::SetupScreen(this->MPCooperative_field_0x10, 0); /*0x5c1d0d*/
  Array::GetElementAt(this->MPCooperative_field_0x10, &String2, 0); /*0x5c1d1b*/
  if ( MEMORY[0xA8B8D8] <= 0 ) /*0x5c1d26*/
  {
LABEL_10:
    (*(void (__thiscall **)(int *))(*this + 16))(this); /*0x5c1d5d*/
    return -1; /*0x5c1d6f*/
  }
  while ( _strnicmp((const char *)(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * v2) + 88), String2, strlen(String2)) ) /*0x5c1d51*/
  {
    if ( ++v2 >= MEMORY[0xA8B8D8] ) /*0x5c1d5b*/
      goto LABEL_10; /*0x5c1d5b*/
  }
  return v2; /*0x5c1d65*/
}


// ==== 0x005C1D80  MPCooperative::Write  this=MPCooperative  sig=csp ====
char __thiscall MPCooperative::_vt05(char **this, int a2)
{
  char *v2; // ecx

  if ( MEMORY[0xA8DA84] == 2 ) /*0x5c1d8b*/
  {
    v2 = this->MPCooperative_field_0x10; /*0x5c1d8d*/
    if ( v2 ) /*0x5c1d92*/
      String::AssignWideToChar(v2, *(char **)MEMORY[0xA8DA78], *(char **)(MEMORY[0xA8DA78] + 4)); /*0x5c1da0*/
  }
  return ScenarioClass::MissionStubReturnZero2(a2); /*0x5c1db1*/
}


// ==== 0x005C1DC0  MPCooperative::Seek  this=MPCooperative  sig=csp ====
char __thiscall MPCooperative::_vt06(int this)
{
  char result; // al
  LRESULT v3; // edi
  void *v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  HWND GameUI; // eax
  int i; // edi
  int v13; // ebp
  int PlayerSide; // eax
  int v15; // [esp-8h] [ebp-20h]
  int v16; // [esp-8h] [ebp-20h]
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h] BYREF
  LRESULT v19; // [esp+14h] [ebp-4h] BYREF

  if ( !*(_DWORD *)(this + 64) ) /*0x5c1dc8*/
    return 0; /*0x5c1dd7*/
  CampaignClass::GetValue((int)&MEMORY[0x89F518], &v19); /*0x5c1de2*/
  v3 = MPCooperative_Helper(); /*0x5c1dec*/
  if ( v3 < v19 ) /*0x5c1df4*/
  {
    if ( Dialog::GetCurrentType() == 107 ) /*0x5c1e34*/
    {
      v4 = *(void **)(this + 64); /*0x5c1e36*/
      if ( v4 ) /*0x5c1e3b*/
      {
        Array::Cleanup(*(_DWORD *)(this + 64)); /*0x5c1e3f*/
        __3_YAXPAX_Z(v4); /*0x5c1e45*/
      }
      *(_DWORD *)(this + 64) = *(_DWORD *)(*(_DWORD *)(this + 808) + 4 * v3); /*0x5c1e58*/
      v5 = __2_YAPAXI_Z(0x70u); /*0x5c1e5b*/
      if ( v5 ) /*0x5c1e65*/
        v6 = MissionClass::Init(v5); /*0x5c1e69*/
      else
        v6 = 0; /*0x5c1e70*/
      *(_DWORD *)(*(_DWORD *)(this + 808) + 4 * v3) = v6; /*0x5c1e79*/
      Movie::SetupScreen(*(_DWORD *)(*(_DWORD *)(this + 808) + 4 * v3), v3); /*0x5c1e85*/
      *(_DWORD *)(this + 76) = v3; /*0x5c1e8a*/
      if ( MEMORY[0xA8DA84] == 2 ) /*0x5c1e95*/
        String::AssignWideToChar(*(char **)(this + 64), *(char **)MEMORY[0xA8DA78], *(char **)(MEMORY[0xA8DA78] + 4)); /*0x5c1ea6*/
    }
    goto LABEL_16; /*0x5c1ea6*/
  }
  if ( MEMORY[0xA8DA84] == 2 ) /*0x5c1dfd*/
    String::AssignWideToChar(*(char **)(this + 64), *(char **)MEMORY[0xA8DA78], *(char **)(MEMORY[0xA8DA78] + 4)); /*0x5c1e0e*/
  result = LoadCampaignCoopSave(*(char **)(this + 64)); /*0x5c1e16*/
  if ( result ) /*0x5c1e1d*/
  {
    *(_BYTE *)(this + 72) = 1; /*0x5c1e26*/
LABEL_16:
    v15 = *(_DWORD *)(this + 828); /*0x5c1eab*/
    v17 = 0; /*0x5c1ebc*/
    Movie::GetSection((int)&MEMORY[0x89F518], v15, &v18); /*0x5c1ec4*/
    if ( v18 ) /*0x5c1ecf*/
    {
      v7 = *(_DWORD *)(this + 64); /*0x5c1eda*/
      if ( v7 && Movie::GetState(v7, &v17) ) /*0x5c1ee6*/
      {
        v8 = v17; /*0x5c1ef7*/
      }
      else
      {
        v8 = 0; /*0x5c1eef*/
        v17 = 0; /*0x5c1ef1*/
      }
      v9 = *(_DWORD *)(v18 + 32); /*0x5c1eff*/
      if ( v8 < v9 ) /*0x5c1f04*/
      {
        if ( v9 ) /*0x5c1f11*/
        {
          v10 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v18 + 20) + 4 * v8) + 16); /*0x5c1f22*/
          GameUI = (HWND)Dialog::FindGameUI(); /*0x5c1f25*/
          Campaign::SetupMovie((int *)this, GameUI); /*0x5c1f2d*/
          for ( i = 0; i < MEMORY[0xA8DA84]; ++i ) /*0x5c1f3b*/
          {
            v13 = *(_DWORD *)this; /*0x5c1f43*/
            PlayerSide = SessionClass::GetPlayerSide(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * i)); /*0x5c1f48*/
            if ( !(*(unsigned __int8 (__thiscall **)(int, int))(v13 + 28))(this, PlayerSide) ) /*0x5c1f50*/
            {
              if ( v10 <= 1 ) /*0x5c1f5a*/
              {
                v16 = SideClass::FindByName(**(void ***)(*(_DWORD *)(*(_DWORD *)(v18 + 20) + 4 * v17) + 4)); /*0x5c1f78*/
                SessionClass::SetPlayerOption(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * i), v16); /*0x5c1f82*/
              }
              else
              {
                SessionClass::SetPlayerOption(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * i), -2); /*0x5c1f5e*/
              }
            }
          }
          return 1; /*0x5c1f94*/
        }
        else
        {
          return 0; /*0x5c1f15*/
        }
      }
      else
      {
        return 0; /*0x5c1f08*/
      }
    }
    else
    {
      return 0; /*0x5c1ed3*/
    }
  }
  return result; /*0x5c1dcf*/
}


// ==== 0x005C1FA0  MPCooperative::Revert  this=MPCooperative  sig=csp ====
int __thiscall MPCooperative::_vt10(int *this)
{
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF

  v7 = 0; /*0x5c1faa*/
  Movie::GetSection((int)&MEMORY[0x89F518], this->MPCooperative_field_0x33C, &v8); /*0x5c1fbf*/
  if ( !v8 ) /*0x5c1fca*/
    return -2; /*0x5c1fcc*/
  v3 = this->MPCooperative_field_0x10; /*0x5c1fd6*/
  if ( v3 && Movie::GetState(v3, &v7) ) /*0x5c1fe2*/
  {
    v4 = v7; /*0x5c1ff3*/
  }
  else
  {
    v4 = 0; /*0x5c1feb*/
    v7 = 0; /*0x5c1fed*/
  }
  if ( v4 >= *(_DWORD *)(v8 + 32) ) /*0x5c1ffe*/
    return -2; /*0x5c2000*/
  v5 = *(_DWORD *)(*(_DWORD *)(v8 + 20) + 4 * v4); /*0x5c200d*/
  v6 = *(_DWORD *)(v5 + 16); /*0x5c2010*/
  if ( !v6 ) /*0x5c2015*/
    return -2; /*0x5c2017*/
  if ( v6 <= 1 ) /*0x5c2024*/
    return SideClass::FindByName(**(void ***)(v5 + 4)); /*0x5c2035*/
  return -2; /*0x5c1fd1*/
}


// ==== 0x005C2040  MPCooperative::StartGame  this=MPCooperative  sig=csp ====
char __thiscall MPCooperative::_vt22(
        int this,
        int a2,
        void **a3,
        void *Block,
        int a5,
        __int16 a6,
        int a7,
        int a8,
        char *a9,
        char *a10)
{
  int v11; // ecx
  void *v13; // eax
  int v14[3]; // [esp-20h] [ebp-2Ch] BYREF
  __int16 v15; // [esp-14h] [ebp-20h]
  int v16; // [esp-10h] [ebp-1Ch]
  int v17; // [esp-Ch] [ebp-18h]
  char *v18; // [esp-8h] [ebp-14h]
  char *v19; // [esp-4h] [ebp-10h]
  int v20; // [esp+8h] [ebp-4h] BYREF

  if ( !*(_DWORD *)(this + 64) ) /*0x5c2045*/
  {
    MovieClass::Create((int *)this); /*0x5c204c*/
    *(_BYTE *)(this + 832) = 1; /*0x5c2051*/
  }
  v11 = *(_DWORD *)(this + 64); /*0x5c2058*/
  if ( v11 ) /*0x5c205d*/
  {
    Movie::GetSectionID(v11, &v20); /*0x5c208d*/
    if ( v20 != a2 ) /*0x5c209c*/
      *(_BYTE *)(this + 832) = 1; /*0x5c209e*/
    v19 = a10; /*0x5c20ad*/
    v18 = a9; /*0x5c20ae*/
    DynamicVectorClass::Copy(v14, &a3); /*0x5c20b9*/
    DecodeCampaignPlayerName(*(_DWORD *)(this + 64), a2, v14[0], (void *)v14[1], v14[2], v15, v16, v17, v18, v19); /*0x5c20c2*/
    v13 = Block; /*0x5c20c7*/
    *(_DWORD *)(this + 828) = a2; /*0x5c20cb*/
    a3 = &vt_VectorClass_int; /*0x5c20d3*/
    if ( v13 && HIBYTE(a6) ) /*0x5c20e3*/
      __3_YAXPAX_Z(v13); /*0x5c20e6*/
    return 1; /*0x5c20ef*/
  }
  else
  {
    a3 = &vt_VectorClass_int; /*0x5c2063*/
    if ( Block ) /*0x5c206d*/
    {
      if ( HIBYTE(a6) ) /*0x5c2075*/
        __3_YAXPAX_Z(Block); /*0x5c2078*/
    }
    return 0; /*0x5c2080*/
  }
}


// ==== 0x005C2100  MPCooperative::EndGame  this=MPCooperative  sig=csp ====
char __thiscall MPCooperative::_vt23(int this, int a2, int a3, int a4)
{
  int v5; // ecx
  char v7; // bl
  HWND GameUI; // eax
  int v9[28]; // [esp-E0h] [ebp-F4h] BYREF
  int v10[28]; // [esp-70h] [ebp-84h] BYREF
  int v11; // [esp+10h] [ebp-4h] BYREF

  v5 = *(_DWORD *)(this + 64); /*0x5c2107*/
  if ( !v5 ) /*0x5c210c*/
    return 0; /*0x5c210e*/
  Movie::GetState(v5, &v11); /*0x5c211d*/
  qmemcpy(v10, (const void *)(a4 + 112), sizeof(v10)); /*0x5c2136*/
  qmemcpy(v9, (const void *)a4, sizeof(v9)); /*0x5c2141*/
  v7 = MPCooperative::validateMove( /*0x5c215b*/
         *(_DWORD **)(this + 64),
         a2,
         a3,
         v9[0],
         v9[1],
         v9[2],
         v9[3],
         v9[4],
         v9[5],
         v9[6],
         v9[7],
         v9[8],
         v9[9],
         v9[10],
         v9[11],
         v9[12],
         v9[13],
         v9[14],
         v9[15],
         v9[16],
         v9[17],
         v9[18],
         v9[19],
         v9[20],
         v9[21],
         v9[22],
         v9[23],
         v9[24],
         v9[25],
         v9[26],
         v9[27],
         v10[0],
         v10[1],
         v10[2],
         v10[3],
         v10[4],
         v10[5],
         v10[6],
         v10[7],
         v10[8],
         v10[9],
         v10[10],
         v10[11],
         v10[12],
         v10[13],
         v10[14],
         v10[15],
         v10[16],
         v10[17],
         v10[18],
         v10[19],
         v10[20],
         v10[21],
         v10[22],
         v10[23],
         v10[24],
         v10[25],
         v10[26],
         v10[27]);
  if ( v11 != a2 || *(_BYTE *)(this + 832) ) /*0x5c2165*/
  {
    GameUI = (HWND)Dialog::FindGameUI(); /*0x5c216f*/
    if ( GameUI ) /*0x5c2176*/
    {
      Campaign::SetupMovie((int *)this, GameUI); /*0x5c217b*/
      *(_BYTE *)(this + 832) = 0; /*0x5c2180*/
    }
  }
  return v7; /*0x5c2110*/
}


// ==== 0x005C21A0  MPCooperative::CheckReady  this=MPCooperative  sig=csp ====
HWND __stdcall MPCooperative::_vt30(HWND hDlg)
{
  HWND result; // eax

  result = GetDlgItem(hDlg, 1842); /*0x5c21aa*/
  if ( result ) /*0x5c21b2*/
    return (HWND)PostMessageA(result, 0x405u, 1u, MEMORY[0xA8EB68]); /*0x5c21c3*/
  return result; /*0x5c21c9*/
}


// ==== 0x005C21D0  CampaignCoop::Setup  this=MPCooperative  sig=csp ====
HWND __thiscall CampaignCoop_Setup(int *this, HWND hDlg, char a3)
{
  char v4; // bl
  HWND v5; // edi
  int v6; // ecx
  HWND (__stdcall *v7)(HWND, int); // ebx
  HWND result; // eax
  HWND v9; // esi
  wchar_t *String; // eax
  HWND v11; // eax
  HWND v12; // esi
  HWND v13; // eax
  HWND v14; // eax
  BOOL v15; // [esp-4h] [ebp-5Ch]
  int v16; // [esp+10h] [ebp-48h] BYREF
  int v17; // [esp+14h] [ebp-44h] BYREF
  wchar_t Buffer[32]; // [esp+18h] [ebp-40h] BYREF

  v4 = 1; /*0x5c21df*/
  v5 = hDlg; /*0x5c21e3*/
  if ( a3 ) /*0x5c21e1*/
    DisableCampaignSlots(hDlg); /*0x5c21ee*/
  v6 = this->MPCooperative_field_0x10; /*0x5c21f9*/
  if ( !v6 ) /*0x5c2204*/
    goto LABEL_13; /*0x5c2204*/
  if ( !Movie::GetSectionID(v6, &v17) ) /*0x5c220f*/
    v4 = 0; /*0x5c2218*/
  if ( Movie::GetState(this->MPCooperative_field_0x10, &v16) && v4 ) /*0x5c2231*/
  {
    sprintf((char *const)Buffer, stru_82DC64, v17 + 1, v16 + 1); /*0x5c224d*/
    v7 = GetDlgItem; /*0x5c2252*/
    result = GetDlgItem(hDlg, 1839); /*0x5c2261*/
    v9 = result; /*0x5c2263*/
    if ( !result ) /*0x5c2267*/
      return result; /*0x5c2267*/
    String = GetStringCSF(Buffer, 0, g_Str_File_MPCoop_cpp, 641); /*0x5c227d*/
    SendMessageA(v9, 0x4B2u, 0, (LPARAM)String); /*0x5c228b*/
    if ( a3 ) /*0x5c2297*/
      ShowWindow(v9, 5); /*0x5c229c*/
    else
      ShowWindow(v9, 0); /*0x5c22ae*/
    InvalidateRect(v9, 0, 0); /*0x5c22a3*/
  }
  else
  {
LABEL_13:
    v7 = GetDlgItem; /*0x5c22bd*/
  }
  v11 = v7(hDlg, 1842); /*0x5c22c9*/
  v12 = v11; /*0x5c22cb*/
  if ( v11 ) /*0x5c22cf*/
  {
    PostMessageA(v11, 0x4ACu, 0, 0); /*0x5c22e1*/
    PostMessageA(v12, 0x406u, 1u, 0x20000); /*0x5c22f0*/
    PostMessageA(v12, 0x405u, 1u, MEMORY[0xA8EB68]); /*0x5c2301*/
    if ( a3 ) /*0x5c2309*/
      ShowWindow(v12, 5); /*0x5c230d*/
    else
      ShowWindow(v12, 0); /*0x5c2312*/
    v15 = Settings::CheckString(); /*0x5c231b*/
    EnableWindow(v12, v15); /*0x5c2324*/
    InvalidateRect(v12, 0, 1); /*0x5c232f*/
    v5 = hDlg; /*0x5c2335*/
  }
  v13 = v7(v5, 1934); /*0x5c233f*/
  if ( v13 ) /*0x5c2343*/
  {
    if ( a3 ) /*0x5c234b*/
      ShowWindow(v13, 5); /*0x5c234f*/
    else
      ShowWindow(v13, 0); /*0x5c2354*/
  }
  v14 = v7(v5, 1933); /*0x5c235c*/
  if ( v14 ) /*0x5c2360*/
  {
    if ( a3 ) /*0x5c2368*/
      ShowWindow(v14, 5); /*0x5c236c*/
    else
      ShowWindow(v14, 0); /*0x5c2371*/
  }
  result = v7(v5, 1932); /*0x5c2379*/
  if ( result ) /*0x5c237d*/
  {
    if ( a3 ) /*0x5c2385*/
      return (HWND)ShowWindow(result, 5); /*0x5c238a*/
    else
      return (HWND)ShowWindow(result, 0); /*0x5c2399*/
  }
  return result; /*0x5c238c*/
}


// ==== 0x005C23B0  MovieClass::ReadConfig  this=MPCooperative  sig=csp ====
HWND __thiscall MovieClass::ReadConfig(int *this, IUnknown *aP1, int nIDDlgItem)
{
  HWND result; // eax
  int v4; // ebp
  HWND DlgItem; // edi
  int v7; // esi
  int v8; // esi
  wchar_t *StringCSF; // eax
  LRESULT v10; // eax
  int v11; // eax
  LPARAM v12; // esi
  LRESULT v13; // eax
  CCINIClass *v14; // [esp-8h] [ebp-20h]
  int v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  result = (HWND)g_SuperWeaponTypeArray; /*0x5c23b3*/
  v4 = 0; /*0x5c23ba*/
  v15 = g_SuperWeaponTypeArray; /*0x5c23c2*/
  if ( g_SuperWeaponTypeArray ) /*0x5c23c6*/
  {
    DlgItem = GetDlgItem((HWND)aP1, nIDDlgItem); /*0x5c23dc*/
    ShowWindow(DlgItem, 0); /*0x5c23e0*/
    SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x5c23f4*/
    v14 = (CCINIClass *)this->MPCooperative_field_0x33C; /*0x5c2401*/
    nIDDlgItem = 0; /*0x5c2407*/
    Movie::GetSection((int)&MEMORY[0x89F518], v14, (CCINIClass *)&aP1); /*0x5c240b*/
    result = (HWND)aP1; /*0x5c2410*/
    if ( aP1 ) /*0x5c2416*/
    {
      if ( aP1->field_20 ) /*0x5c241c*/
      {
        v7 = this->MPCooperative_field_0x10; /*0x5c2425*/
        if ( !v7 || !Movie::GetState(v7, (CCINIClass *)&nIDDlgItem) ) /*0x5c2433*/
          nIDDlgItem = 0; /*0x5c243c*/
        result = (HWND)nIDDlgItem; /*0x5c2444*/
        if ( nIDDlgItem < aP1->field_20 ) /*0x5c244b*/
        {
          v8 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&aP1->__pad_10[4] + 4 * nIDDlgItem) + 16); /*0x5c2457*/
          v16 = v8; /*0x5c245d*/
          if ( v8 > 1 ) /*0x5c2461*/
          {
            StringCSF = GetStringCSF(MEMORY[0x82DC78], 0, g_Str_File_MPCoop_cpp, 749); /*0x5c2474*/
            v10 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x5c2481*/
            SendMessageA(DlgItem, 0x151u, v10, -2); /*0x5c248c*/
          }
          if ( v8 > 0 ) /*0x5c2490*/
          {
            do /*0x5c24de*/
            {
              v11 = SideClass::FindByName(*(void **)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)&aP1->__pad_10[4] /*0x5c24a6*/
                                                                           + 4 * nIDDlgItem)
                                                               + 4)
                                                   + 4 * v4));
              v12 = v11; /*0x5c24ab*/
              if ( v11 >= 0 && v11 < v15 ) /*0x5c24b5*/
              {
                v13 = SendMessageA(DlgItem, 0x4C2u, 0, *(_DWORD *)(*((_DWORD *)g_SuperWeaponTypeCount + v11) + 96)); /*0x5c24cb*/
                SendMessageA(DlgItem, 0x151u, v13, v12); /*0x5c24d5*/
              }
              ++v4; /*0x5c24db*/
            }
            while ( v4 < v16 ); /*0x5c24de*/
          }
          SendMessageA(DlgItem, 0x14Eu, 0, 0); /*0x5c24ea*/
          return (HWND)ShowWindow(DlgItem, 5); /*0x5c24ef*/
        }
      }
    }
  }
  return result; /*0x5c24f5*/
}


// ==== 0x005C2500  Campaign::SetupMovie  this=MPCooperative  sig=csp ====
void __thiscall Campaign_SetupMovie(int *this, HWND hDlg)
{
  HWND v2; // ebx
  char *v3; // edi
  int *v4; // ebp
  int v5; // ecx
  int v6; // esi
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int *v10; // ebp
  int ResourceID2; // esi
  int v12; // ebx
  HWND GameUI; // eax
  int v14; // [esp+10h] [ebp-14h] BYREF
  int v15; // [esp+14h] [ebp-10h] BYREF
  int v16; // [esp+18h] [ebp-Ch]
  int *v17; // [esp+1Ch] [ebp-8h]
  int v18; // [esp+20h] [ebp-4h]

  v2 = hDlg; /*0x5c2504*/
  v3 = 0; /*0x5c250b*/
  v4 = this; /*0x5c250d*/
  v17 = this; /*0x5c2511*/
  if ( hDlg ) /*0x5c2515*/
  {
    v5 = this->MPCooperative_field_0x33C; /*0x5c251b*/
    v6 = MEMORY[0xA8BB0C]; /*0x5c2521*/
    v16 = MEMORY[0xA8BB0C]; /*0x5c252b*/
    v14 = 0; /*0x5c2536*/
    Movie::GetSection((int)&MEMORY[0x89F518], v5, &v15); /*0x5c253a*/
    v7 = v15; /*0x5c253f*/
    if ( v15 ) /*0x5c2545*/
    {
      if ( *(_DWORD *)(v15 + 32) ) /*0x5c254b*/
      {
        v8 = v4[16]; /*0x5c2554*/
        if ( v8 ) /*0x5c2559*/
        {
          if ( Movie::GetState(v8, &v14) ) /*0x5c2560*/
          {
            v9 = v14; /*0x5c2579*/
          }
          else
          {
            v9 = 0; /*0x5c2569*/
            v14 = 0; /*0x5c256b*/
          }
          v7 = v15; /*0x5c257d*/
        }
        else
        {
          v9 = 0; /*0x5c2571*/
          v14 = 0; /*0x5c2573*/
        }
        if ( v9 < *(_DWORD *)(v7 + 32) ) /*0x5c2584*/
        {
          v18 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v7 + 20) + 4 * v9) + 16); /*0x5c2595*/
          if ( v6 > 0 ) /*0x5c2599*/
          {
            v10 = &MEMORY[0xA8DA90]; /*0x5c259b*/
            do /*0x5c260f*/
            {
              ResourceID2 = GetResourceID2CSF(v3); /*0x5c25ab*/
              MovieClass::ReadConfig(v2, ResourceID2); /*0x5c25af*/
              if ( v18 <= 1 ) /*0x5c25b9*/
              {
                v12 = SideClass::FindByName(**(void ***)(*(_DWORD *)(*(_DWORD *)(v15 + 20) + 4 * v14) + 4)); /*0x5c25ee*/
                SetupLobbyCountryCombo(hDlg, ResourceID2, v12); /*0x5c25f3*/
                SessionClass::SetPlayerOption(*v10, v12); /*0x5c25fc*/
                v2 = hDlg; /*0x5c2601*/
              }
              else
              {
                SetupLobbyCountryCombo(v2, ResourceID2, -2); /*0x5c25c1*/
                SessionClass::SetPlayerOption(*v10, -2); /*0x5c25cb*/
              }
              ++v3; /*0x5c2609*/
              ++v10; /*0x5c260a*/
            }
            while ( (int)v3 < v16 ); /*0x5c260f*/
            v4 = v17; /*0x5c2611*/
            v6 = v16; /*0x5c2615*/
          }
          DisableCampaignSlots(v2, v6); /*0x5c261b*/
          GameUI = (HWND)Dialog::FindGameUI(); /*0x5c2620*/
          if ( GameUI ) /*0x5c2627*/
            CampaignCoop::Setup(v4, GameUI, 1); /*0x5c262e*/
        }
      }
    }
  }
}


// ==== 0x005C2640  MPCooperative::Clone  this=MPCooperative  sig=csp ====
void __thiscall MPCooperative::Clone(int *this, HWND hDlg)
{
  int v3; // edi
  char *i; // esi
  int ResourceID2CSF; // eax

  if ( hDlg ) /*0x5c264a*/
  {
    v3 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_430[24]; /*0x5c264e*/
    for ( i = 0; (int)i < v3; ++i ) /*0x5c2658*/
    {
      ResourceID2CSF = GetResourceID2CSF(i); /*0x5c265c*/
      MovieClass::ReadConfig(this, (IUnknown *)hDlg, ResourceID2CSF); /*0x5c2665*/
    }
    CampaignCoop::Setup(this, hDlg, 1); /*0x5c2674*/
  }
}


// ==== 0x005C2680  MPCooperative::ProcessTurn  this=MPCooperative  sig=csp ====
char __thiscall MPCooperative::_vt24(int this)
{
  int v2; // ecx
  HWND GameUI; // eax

  v2 = *(_DWORD *)(this + 64); /*0x5c2683*/
  if ( !v2 ) /*0x5c2688*/
    return 0; /*0x5c268a*/
  Movie::GetSectionID(v2, (_DWORD *)(this + 828)); /*0x5c2695*/
  GameUI = (HWND)Dialog::FindGameUI(); /*0x5c269a*/
  if ( GameUI ) /*0x5c26a1*/
  {
    if ( *(_BYTE *)(this + 832) ) /*0x5c26a3*/
    {
      Campaign::SetupMovie((int *)this, GameUI); /*0x5c26b0*/
      *(_BYTE *)(this + 832) = 0; /*0x5c26b5*/
    }
  }
  return SerializeCampaignOptions(*(char **)(this + 64)); /*0x5c268c*/
}


// ==== 0x005C2710  MPCooperative::SyncState  this=MPCooperative  sig=csp ====
char __thiscall MPCooperative::_vt25(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // ebp
  int v4; // edi
  int v5; // ebx
  int v6; // esi
  int v7; // edi
  _DWORD *v8; // ecx
  int *v9; // ebp
  int *v10; // ebx
  int v11; // esi
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // edx
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // esi
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // edx
  int v25; // esi
  int *v26; // eax
  int v27; // eax
  int v28; // edx
  int v29; // eax
  int v30; // edx
  int v32; // [esp+8h] [ebp-1CCh]
  int i; // [esp+20h] [ebp-1B4h]
  int v34; // [esp+24h] [ebp-1B0h]
  int v35; // [esp+28h] [ebp-1ACh] BYREF
  _DWORD *v36; // [esp+2Ch] [ebp-1A8h]
  int v37; // [esp+30h] [ebp-1A4h]
  char v38[16]; // [esp+34h] [ebp-1A0h] BYREF
  char Buffer[400]; // [esp+44h] [ebp-190h] BYREF

  v32 = this->MPCooperative_field_0x33C; /*0x5c2727*/
  v36 = this; /*0x5c272d*/
  Movie::GetSection((int)&MEMORY[0x89F518], v32, &v35); /*0x5c2731*/
  sprintf(Buffer, MEMORY[0x82DCB8], *(char *)(v35 + 8)); /*0x5c2749*/
  v2 = this + 105; /*0x5c2751*/
  v3 = 8; /*0x5c2757*/
  do /*0x5c2795*/
  {
    v4 = v2[2]; /*0x5c275e*/
    (*(void (__thiscall **)(_DWORD *))(*v2 + 12))(v2); /*0x5c2763*/
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v4, 0); /*0x5c276d*/
    v5 = v2[50]; /*0x5c2776*/
    (*(void (__thiscall **)(_DWORD *))(v2[48] + 12))(v2 + 48); /*0x5c2784*/
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(v2[48] + 8))(v2 + 48, v5, 0); /*0x5c278e*/
    v2 += 6; /*0x5c2791*/
    --v3; /*0x5c2794*/
  }
  while ( v3 ); /*0x5c2795*/
  v37 = MEMORY[0xA8DA84]; /*0x5c27a1*/
  for ( i = 0; i < *(char *)(v35 + 8); ++i ) /*0x5c27b2*/
  {
    v6 = 0; /*0x5c27c7*/
    memset32(MEMORY[0xABF460], -2, 8u); /*0x5c27c9*/
    v7 = MEMORY[0xA8DA84]; /*0x5c27cb*/
    if ( MEMORY[0xA8DA84] > 0 ) /*0x5c27d3*/
    {
      do /*0x5c27ec*/
      {
        MEMORY[0xABF460][v6] = MPCooperative::finalizeSession(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v6)); /*0x5c27e2*/
        ++v6; /*0x5c27e9*/
      }
      while ( v6 < v7 ); /*0x5c27ec*/
    }
    v8 = v36; /*0x5c27ee*/
    v34 = 0; /*0x5c27f2*/
    v9 = MEMORY[0xABF460]; /*0x5c27fa*/
    v10 = v36 + 107; /*0x5c27ff*/
    while ( 1 ) /*0x5c2815*/
    {
      if ( v34 >= v37 ) /*0x5c2815*/
      {
        v20 = (*(int (__thiscall **)(_DWORD *))(*v8 + 112))(v8); /*0x5c28d2*/
        v21 = *v10; /*0x5c28d4*/
        if ( v10[2] < *v10 /*0x5c28f7*/
          || (*((_BYTE *)v10 + 5) || !v21)
          && (v22 = v10[3], v22 > 0)
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*(v10 - 2) + 8))(v10 - 2, v21 + v22, 0) )
        {
          v23 = v10[2]; /*0x5c28fe*/
          v24 = *(v10 - 1); /*0x5c2901*/
          v10[2] = v23 + 1; /*0x5c2907*/
          *(_DWORD *)(v24 + 4 * v23) = v20; /*0x5c290a*/
        }
        while ( 1 ) /*0x5c2921*/
        {
          v25 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 7); /*0x5c2921*/
          if ( v25 == -2 ) /*0x5c2926*/
            break; /*0x5c2926*/
          v26 = MEMORY[0xABF460]; /*0x5c2928*/
          while ( *v26 != v25 ) /*0x5c292f*/
          {
            if ( (int)++v26 >= (int)&MEMORY[0xABF480] ) /*0x5c2939*/
              goto LABEL_31; /*0x5c2939*/
          }
        }
LABEL_31:
        *v9 = v25; /*0x5c293b*/
        v27 = v10[48]; /*0x5c293e*/
        if ( v10[50] < v27 /*0x5c2975*/
          || (*((_BYTE *)v10 + 197) || !v27)
          && (v28 = v10[51], v28 > 0)
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v10[46] + 8))(v10 + 46, v27 + v28, 0) )
        {
          v29 = v10[50]; /*0x5c297c*/
          v30 = v10[47]; /*0x5c2982*/
          v10[50] = v29 + 1; /*0x5c298b*/
          *(_DWORD *)(v30 + 4 * v29) = v25; /*0x5c2991*/
        }
      }
      else
      {
        v11 = (*(int (__thiscall **)(_DWORD *))(*v8 + 108))(v8); /*0x5c2823*/
        v12 = *v10; /*0x5c2825*/
        if ( v10[2] < *v10 /*0x5c2848*/
          || (*((_BYTE *)v10 + 5) || !v12)
          && (v13 = v10[3], v13 > 0)
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*(v10 - 2) + 8))(v10 - 2, v12 + v13, 0) )
        {
          v14 = v10[2]; /*0x5c284f*/
          v15 = *(v10 - 1); /*0x5c2852*/
          v10[2] = v14 + 1; /*0x5c2858*/
          *(_DWORD *)(v15 + 4 * v14) = v11; /*0x5c285b*/
        }
        v16 = v10[48]; /*0x5c285e*/
        if ( v10[50] < v16 /*0x5c289f*/
          || (*((_BYTE *)v10 + 197) || !v16)
          && (v17 = v10[51], v17 > 0)
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v10[46] + 8))(v10 + 46, v16 + v17, 0) )
        {
          v18 = v10[50]; /*0x5c28aa*/
          v19 = v10[47]; /*0x5c28b0*/
          v10[50] = v18 + 1; /*0x5c28b9*/
          *(_DWORD *)(v19 + 4 * v18) = *v9; /*0x5c28c2*/
        }
      }
      sprintf(v38, MEMORY[0x82DCB0], *(_DWORD *)(*(v10 - 1) + 4 * i), *(_DWORD *)(v10[47] + 4 * i)); /*0x5c29b3*/
      strcat(Buffer, v38); /*0x5c29df*/
      ++v9; /*0x5c29e3*/
      v10 += 6; /*0x5c29e9*/
      ++v34; /*0x5c29f9*/
      if ( (int)v9 >= (int)&MEMORY[0xABF480] ) /*0x5c29fd*/
        break; /*0x5c29fd*/
      v8 = v36; /*0x5c2807*/
    }
  }
  Debug::Log(); /*0x5c2a26*/
  Network::SendOptionsGame(Buffer); /*0x5c2a32*/
  Debug::Log(); /*0x5c2a3c*/
  return 1; /*0x5c2a46*/
}


// ==== 0x005C2A60  MPCooperative::UpdateLobby  this=MPCooperative  sig=csp ====
const char *__thiscall MPCooperative::_vt29(_DWORD *this, const char *a2, char *String)
{
  const char *result; // eax
  _DWORD *v5; // esi
  int v6; // ebp
  int v7; // edi
  int v8; // ebx
  int v9; // ebx
  char *v10; // esi
  char *v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  char *v21; // eax
  int v22; // edi
  int v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // ecx
  const char *v32; // [esp+20h] [ebp+4h]

  result = a2; /*0x5c2a61*/
  if ( a2 == (const char *)1 ) /*0x5c2a72*/
  {
    result = strtok(String, MEMORY[0x817F70]); /*0x5c2a82*/
    if ( result ) /*0x5c2a8c*/
    {
      result = (const char *)atol(result); /*0x5c2a93*/
      v32 = result; /*0x5c2a9e*/
      if ( (int)result >= 1 ) /*0x5c2aa2*/
      {
        v5 = this + 105; /*0x5c2aa8*/
        v6 = 8; /*0x5c2aae*/
        do /*0x5c2aec*/
        {
          v7 = v5[2]; /*0x5c2ab5*/
          (*(void (__thiscall **)(_DWORD *))(*v5 + 12))(v5); /*0x5c2aba*/
          (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v5 + 8))(v5, v7, 0); /*0x5c2ac4*/
          v8 = v5[50]; /*0x5c2acd*/
          (*(void (__thiscall **)(_DWORD *))(v5[48] + 12))(v5 + 48); /*0x5c2adb*/
          (*(void (__thiscall **)(_DWORD *, int, _DWORD))(v5[48] + 8))(v5 + 48, v8, 0); /*0x5c2ae5*/
          v5 += 6; /*0x5c2ae8*/
          --v6; /*0x5c2aeb*/
        }
        while ( v6 ); /*0x5c2aec*/
        result = v32; /*0x5c2aee*/
        if ( (int)v32 > 0 ) /*0x5c2af4*/
        {
          do /*0x5c2c98*/
          {
            v9 = 8; /*0x5c2b02*/
            v10 = (char *)(this + 107); /*0x5c2b07*/
            do /*0x5c2c89*/
            {
              v11 = strtok(0, MEMORY[0x817F70]); /*0x5c2b14*/
              if ( v11 ) /*0x5c2b1e*/
              {
                v12 = atol(v11); /*0x5c2b29*/
                v13 = *(_DWORD *)v10; /*0x5c2b2b*/
                if ( *((_DWORD *)v10 + 2) < *(_DWORD *)v10 /*0x5c2b51*/
                  || (v10[5] || !v13)
                  && (v14 = *((_DWORD *)v10 + 3), v14 > 0)
                  && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)v10 - 2) + 8))(
                       v10 - 8,
                       v13 + v14,
                       0) )
                {
                  v15 = *((_DWORD *)v10 + 2); /*0x5c2b58*/
                  v16 = *((_DWORD *)v10 - 1); /*0x5c2b5b*/
                  *((_DWORD *)v10 + 2) = v15 + 1; /*0x5c2b61*/
                  *(_DWORD *)(v16 + 4 * v15) = v12; /*0x5c2b64*/
                }
              }
              else
              {
                v17 = *(_DWORD *)v10; /*0x5c2b69*/
                if ( *((_DWORD *)v10 + 2) < *(_DWORD *)v10 /*0x5c2b8f*/
                  || (v10[5] || !v17)
                  && (v18 = *((_DWORD *)v10 + 3), v18 > 0)
                  && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)v10 - 2) + 8))(
                       v10 - 8,
                       v17 + v18,
                       0) )
                {
                  v19 = *((_DWORD *)v10 + 2); /*0x5c2b96*/
                  v20 = *((_DWORD *)v10 - 1); /*0x5c2b99*/
                  *((_DWORD *)v10 + 2) = v19 + 1; /*0x5c2b9f*/
                  *(_DWORD *)(v20 + 4 * v19) = -1; /*0x5c2ba2*/
                }
              }
              v21 = strtok(0, MEMORY[0x817F70]); /*0x5c2bb0*/
              if ( v21 ) /*0x5c2bba*/
              {
                v22 = atol(v21); /*0x5c2bc8*/
                v23 = *((_DWORD *)v10 + 48); /*0x5c2bca*/
                if ( *((_DWORD *)v10 + 50) < v23 /*0x5c2c08*/
                  || (v10[197] || !v23)
                  && (v24 = *((_DWORD *)v10 + 51), v24 > 0)
                  && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)v10 + 46) + 8))(
                       v10 + 184,
                       v23 + v24,
                       0) )
                {
                  v25 = *((_DWORD *)v10 + 50); /*0x5c2c0f*/
                  v26 = *((_DWORD *)v10 + 47); /*0x5c2c15*/
                  *((_DWORD *)v10 + 50) = v25 + 1; /*0x5c2c1e*/
                  *(_DWORD *)(v26 + 4 * v25) = v22; /*0x5c2c24*/
                }
              }
              else
              {
                v27 = *((_DWORD *)v10 + 48); /*0x5c2c29*/
                if ( *((_DWORD *)v10 + 50) < v27 /*0x5c2c62*/
                  || (v10[197] || !v27)
                  && (v28 = *((_DWORD *)v10 + 51), v28 > 0)
                  && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)v10 + 46) + 8))(
                       v10 + 184,
                       v27 + v28,
                       0) )
                {
                  v29 = *((_DWORD *)v10 + 50); /*0x5c2c69*/
                  v30 = *((_DWORD *)v10 + 47); /*0x5c2c6f*/
                  *((_DWORD *)v10 + 50) = v29 + 1; /*0x5c2c78*/
                  *(_DWORD *)(v30 + 4 * v29) = -1; /*0x5c2c7e*/
                }
              }
              v10 += 24; /*0x5c2c85*/
              --v9; /*0x5c2c88*/
            }
            while ( v9 ); /*0x5c2c89*/
            result = --v32; /*0x5c2c93*/
          }
          while ( v32 ); /*0x5c2c98*/
        }
      }
    }
  }
  return result; /*0x5c2c9e*/
}


// ==== 0x005C2CB0  MPCooperative::ValidateSettings  this=MPCooperative  sig=csp ====
char __thiscall MPCooperative::_vt31(int *this)
{
  HWND GameUI; // eax

  GameUI = (HWND)Dialog::FindGameUI(); /*0x5c2cb3*/
  if ( GameUI || (GameUI = (HWND)Dialog::FindByHandle((void *)0xBC6)) != 0 ) /*0x5c2cc8*/
    CampaignCoop::Setup(this, GameUI, 1); /*0x5c2ccf*/
  return 1; /*0x5c2cd6*/
}


// ==== 0x005C2CE0  MPCooperative::SaveSettings  this=MPCooperative  sig=csp ====
int __thiscall MPCooperative::_vt20(_DWORD *this, HWND hWnd, int a3)
{
  return ListBox::FillPlayers(this, hWnd, a3); /*0x5c2cef*/
}


// ==== 0x005C2D00  MPCooperative_Play  this=int  sig=csp ====
int __stdcall MPCooperative_Play(AnimClass *aP0, int a2, int a3)
{
  int v3; // ecx
  int v4; // ebp
  int i; // eax
  int v6; // ebx
  int j; // esi
  #375 *v8; // ecx
  int result; // eax
  char v10; // dl

  v3 = *(_DWORD *)(a2 + 16); /*0x5c2d07*/
  v4 = 0; /*0x5c2d0a*/
  for ( i = 0; i < v3; ++i ) /*0x5c2d15*/
  {
    if ( *(_BYTE *)(i + a3) ) /*0x5c2d17*/
      ++v4; /*0x5c2d1d*/
  }
  v6 = 0; /*0x5c2d28*/
  for ( j = 0; j < (int)HouseClass_Count; ++j ) /*0x5c2d2e*/
  {
    v8 = *(#375 **)&HouseClass_Array->__pad_0[4 * j]; /*0x5c2d36*/
    if ( v8 && (unsigned __int8)House::IsCurrentPlayer(v8) ) /*0x5c2d3d*/
      ++v6; /*0x5c2d46*/
  }
  if ( v4 >= v6 ) /*0x5c2d53*/
  {
    result = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4580); /*0x5c2d96*/
    if ( *(_BYTE *)(result + a3) ) /*0x5c2d9c*/
    {
      do /*0x5c2db4*/
      {
        if ( result >= *(_DWORD *)(a2 + 16) ) /*0x5c2dab*/
          break; /*0x5c2dab*/
        v10 = *(_BYTE *)(result + a3 + 1); /*0x5c2dad*/
        ++result; /*0x5c2db1*/
      }
      while ( v10 ); /*0x5c2db4*/
    }
  }
  else
  {
    for ( result = Random::Range( /*0x5c2d70*/
                     (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                     0,
                     (IUnknown *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4580) - 1));
          *(_BYTE *)(result + a3);
          result = (result + 1) % *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4580) )
    {
      ; /*0x5c2d86*/
    }
  }
  *(_BYTE *)(result + a3) = 1; /*0x5c2dba*/
  *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4 * result + 4480) = aP0; /*0x5c2dc7*/
  return result; /*0x5c2dc4*/
}


// ==== 0x005C2DE0  MPCooperative::selectTeam  this=MPCooperative  sig=csp ====
_DWORD *__stdcall MPCooperative::sub_5C2DE0(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // edx
  int v5; // ebp
  int v6; // ecx
  int i; // eax
  int v8; // ebx
  int v9; // edi
  #375 *v10; // ecx
  int j; // eax
  int v12; // edx
  int v14; // eax
  char v15; // bl
  int v16; // ecx

  v4 = a3; /*0x5c2de0*/
  v5 = 0; /*0x5c2de6*/
  v6 = *(_DWORD *)(a3 + 16); /*0x5c2de8*/
  for ( i = 0; i < v6; ++i ) /*0x5c2df4*/
  {
    if ( *(_BYTE *)(i + a4) ) /*0x5c2df6*/
      ++v5; /*0x5c2dfc*/
  }
  v8 = 0; /*0x5c2e08*/
  v9 = 0; /*0x5c2e0a*/
  if ( HouseClass_Count > 0 ) /*0x5c2e0e*/
  {
    do /*0x5c2e2e*/
    {
      v10 = *(#375 **)&HouseClass_Array->__pad_0[4 * v9]; /*0x5c2e15*/
      if ( v10 && (unsigned __int8)House::IsCurrentPlayer(v10) ) /*0x5c2e1c*/
        ++v8; /*0x5c2e25*/
      ++v9; /*0x5c2e2b*/
    }
    while ( v9 < HouseClass_Count ); /*0x5c2e2e*/
    v4 = a3; /*0x5c2e30*/
  }
  if ( v5 >= v8 ) /*0x5c2e37*/
  {
    v14 = *((_DWORD *)MEMORY[0xA8B230] + 1145); /*0x5c2ea2*/
    if ( *(_BYTE *)(v14 + a4) ) /*0x5c2ea8*/
    {
      do /*0x5c2ebc*/
      {
        if ( v14 >= *(_DWORD *)(v4 + 16) ) /*0x5c2eb3*/
          break; /*0x5c2eb3*/
        v15 = *(_BYTE *)(v14 + a4 + 1); /*0x5c2eb5*/
        ++v14; /*0x5c2eb9*/
      }
      while ( v15 ); /*0x5c2ebc*/
    }
    *(_BYTE *)(v14 + a4) = 1; /*0x5c2ec2*/
    *((_DWORD *)MEMORY[0xA8B230] + v14 + 1120) = a2; /*0x5c2ecc*/
    v16 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v14); /*0x5c2ed8*/
    *a1 = v16; /*0x5c2ee0*/
    return a1; /*0x5c2edb*/
  }
  else
  {
    for ( j = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, *((_DWORD *)MEMORY[0xA8B230] + 1145) - 1); /*0x5c2e54*/
          *(_BYTE *)(j + a4);
          j = (j + 1) % *((_DWORD *)MEMORY[0xA8B230] + 1145) )
    {
      ; /*0x5c2e6a*/
    }
    *(_BYTE *)(j + a4) = 1; /*0x5c2e76*/
    *((_DWORD *)MEMORY[0xA8B230] + j + 1120) = a2; /*0x5c2e83*/
    v12 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * j); /*0x5c2e91*/
    *a1 = v12; /*0x5c2e98*/
    return a1; /*0x5c2e94*/
  }
}


// ==== 0x005C2EF0  MPCooperative::GetPlayerCount  this=MPCooperative  sig=csp ====
char __stdcall MPCooperative::_vt33(int a1)
{
  int v1; // eax
  _DWORD *v2; // ecx
  int i; // ebp
  char v4; // bl
  int v5; // edx
  _DWORD *v6; // edi
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // ebx
  int v10; // esi
  int v11; // ecx
  int v12; // ecx
  int *j; // eax
  int *v14; // edi
  _BYTE v16[16]; // [esp+4h] [ebp-28h] BYREF
  void **v17; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]
  char v19; // [esp+21h] [ebp-Bh]
  _DWORD *v20; // [esp+30h] [ebp+4h]

  Multiplayer::FindStartPositions(&v17); /*0x5c2eff*/
  v1 = 0; /*0x5c2f0a*/
  v2 = (char *)MEMORY[0xA8B230] + 4480; /*0x5c2f0c*/
  do /*0x5c2f2a*/
    v16[v1++] = *v2++ != -1; /*0x5c2f17*/
  while ( v1 < 16 ); /*0x5c2f2a*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x5c2f36*/
  {
    v4 = 0; /*0x5c2f44*/
    v5 = -1; /*0x5c2f46*/
    v6 = *(_DWORD **)&HouseClass_Array->__pad_0[4 * i]; /*0x5c2f49*/
    v20 = v6; /*0x5c2f4c*/
    if ( !*(_BYTE *)(v6[13] + 422) ) /*0x5c2f53*/
    {
      v7 = 0; /*0x5c2f67*/
      v8 = (char *)MEMORY[0xA8B230] + 4480; /*0x5c2f69*/
      do /*0x5c2f7e*/
      {
        if ( *v8 == i ) /*0x5c2f71*/
        {
          v4 = 1; /*0x5c2f73*/
          v5 = v7; /*0x5c2f75*/
        }
        ++v7; /*0x5c2f77*/
        ++v8; /*0x5c2f78*/
      }
      while ( v7 < 16 ); /*0x5c2f7e*/
      if ( v4 ) /*0x5c2f82*/
      {
        HouseClass::SetMapSeed(v6, *((_DWORD *)Block + v5)); /*0x5c3073*/
      }
      else
      {
        Debug::Log(); /*0x5c2f92*/
        v9 = MPCooperative_Play(i, (int)&v17, (int)v16); /*0x5c2fae*/
        v10 = 0; /*0x5c2fb5*/
        if ( MEMORY[0xA8DA84] <= 0 ) /*0x5c2fb9*/
          goto LABEL_17; /*0x5c2fb9*/
        v11 = MEMORY[0xA8DA78]; /*0x5c2fc1*/
        while ( *(_DWORD *)(*(_DWORD *)v11 + 111) != i ) /*0x5c2fc8*/
        {
          ++v10; /*0x5c2fca*/
          v11 += 4; /*0x5c2fcb*/
          if ( v10 >= MEMORY[0xA8DA84] ) /*0x5c2fd0*/
            goto LABEL_17; /*0x5c2fd0*/
        }
        if ( v10 == -1 ) /*0x5c2ff4*/
        {
LABEL_17:
          v12 = 0; /*0x5c2fd2*/
          for ( j = MEMORY[0xA8B2DC]; (*(j - 16) == -1 || *j != -2) && (int)j < (int)MEMORY[0xA8B2FC]; ++j ) /*0x5c2fd4*/
            ++v12; /*0x5c2feb*/
          MEMORY[0xA8B2DC][v12] = v9; /*0x5c3031*/
          MEMORY[0xA8B2FC][v12] = 1; /*0x5c3038*/
        }
        else
        {
          SessionClass::SetOption(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v10), v9); /*0x5c2ffa*/
          SessionClass::SetOption2(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v10), 0); /*0x5c300a*/
          v14 = (int *)(MEMORY[0xA8DA78] + 4 * v10); /*0x5c3018*/
          SessionClass::GetOption2(*v14); /*0x5c301b*/
          SessionClass::GetOption(*v14); /*0x5c3023*/
        }
        Debug::Log(); /*0x5c3053*/
        HouseClass::SetMapSeed(v20, *((_DWORD *)Block + v9)); /*0x5c3067*/
      }
    }
  }
  v17 = &vt_VectorClass_Cell; /*0x5c308d*/
  if ( Block && v19 ) /*0x5c30a0*/
    __3_YAXPAX_Z(Block); /*0x5c30a3*/
  return 1; /*0x5c30ad*/
}


// ==== 0x005C30C0  MPCooperative::BroadcastMessage  this=MPCooperative  sig=csp ====
char __thiscall MPCooperative::_vt26(int *this)
{
  int v2; // ebp
  int v4; // edx
  int v5; // ecx
  int v6; // edi
  int *v7; // esi
  int v8; // eax
  int v9; // [esp+10h] [ebp-Ch] BYREF
  int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h] BYREF

  v2 = ReadPlayerCountMap(MEMORY[0xA8B254]) - *((_DWORD *)MEMORY[0xA8B230] + 1145); /*0x5c30db*/
  Debug::Log(); /*0x5c30e7*/
  if ( v2 <= 0 ) /*0x5c30f3*/
    return 0; /*0x5c30f8*/
  MEMORY[0xA8B274] = v2; /*0x5c30ff*/
  v4 = this->MPCooperative_field_0x33C; /*0x5c3105*/
  v10 = 0; /*0x5c310f*/
  v9 = 0; /*0x5c311a*/
  Movie::GetSection((int)&MEMORY[0x89F518], v4, &v11); /*0x5c311e*/
  if ( !v11 ) /*0x5c3129*/
    return 0; /*0x5c312e*/
  if ( !*(_DWORD *)(v11 + 56) ) /*0x5c3135*/
    return 0; /*0x5c313d*/
  v5 = this->MPCooperative_field_0x10; /*0x5c3144*/
  if ( !v5 || !Movie::GetState(v5, &v9) ) /*0x5c3150*/
    v9 = 0; /*0x5c3159*/
  if ( v9 >= *(_DWORD *)(v11 + 56) ) /*0x5c3168*/
    return 0; /*0x5c316d*/
  v6 = *((_DWORD *)MEMORY[0xA8B230] + 1145); /*0x5c3179*/
  if ( v6 < 8 ) /*0x5c3182*/
  {
    v7 = (int *)(4 * v6 + 11055740); /*0x5c3188*/
    do /*0x5c320b*/
    {
      if ( v10 >= v2 ) /*0x5c3198*/
      {
        *v7 = -1; /*0x5c31f0*/
        v7[8] = -1; /*0x5c31f2*/
        v7[16] = -1; /*0x5c31f5*/
        v7[24] = -1; /*0x5c31f8*/
        v7[32] = -1; /*0x5c31fb*/
      }
      else
      {
        Debug::Log(); /*0x5c31a0*/
        if ( MEMORY[0xA8EB68] ) /*0x5c31af*/
          *v7 = MEMORY[0xA8EB68] == 1; /*0x5c31c1*/
        else
          *v7 = 2; /*0x5c31b1*/
        Debug::Log(); /*0x5c31cb*/
        v8 = v10; /*0x5c31d0*/
        v7[8] = -2; /*0x5c31d7*/
        v7[16] = -2; /*0x5c31da*/
        v7[24] = -2; /*0x5c31de*/
        v7[32] = -2; /*0x5c31e1*/
        v10 = v8 + 1; /*0x5c31e7*/
      }
      ++v7; /*0x5c3201*/
      ++v6; /*0x5c3204*/
    }
    while ( (int)v7 < (int)MEMORY[0xA8B29C] ); /*0x5c320b*/
  }
  return 1; /*0x5c30f5*/
}


// ==== 0x005C3220  MPCooperative::GetMapData  this=MPCooperative  sig=csp ====
char MPCooperative::_vt34()
{
  int v0; // ebp
  int v1; // edi
  int v2; // eax
  int v3; // esi
  int v4; // ebp
  int v5; // edi
  int v6; // esi
  int v8; // [esp+10h] [ebp-Ch]
  int v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+14h] [ebp-8h]
  int v12; // [esp+18h] [ebp-4h]
  int v13; // [esp+18h] [ebp-4h]

  Debug::Log(); /*0x5c322c*/
  if ( HouseClass_Count > 0 ) /*0x5c323b*/
  {
    v0 = 1; /*0x5c3241*/
    v8 = 0; /*0x5c3246*/
    v12 = 1; /*0x5c324e*/
    do /*0x5c337f*/
    {
      v1 = *(_DWORD *)&HouseClass_Array->__pad_0[v8]; /*0x5c325b*/
      ToWideStringChar((char *)(v1 + 90154)); /*0x5c3264*/
      Debug::Log(); /*0x5c3276*/
      if ( *(_BYTE *)(*(_DWORD *)(v1 + 52) + 422) || !*(_BYTE *)(v1 + 492) ) /*0x5c328f*/
      {
        v2 = HouseClass_Count; /*0x5c34e1*/
      }
      else
      {
        v2 = HouseClass_Count; /*0x5c329d*/
        v10 = v0; /*0x5c32a2*/
        if ( v0 < HouseClass_Count ) /*0x5c32a8*/
        {
          do /*0x5c3360*/
          {
            v3 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v0]; /*0x5c32b4*/
            ToWideStringChar((char *)(v3 + 90154)); /*0x5c32bf*/
            Debug::Log(); /*0x5c32ca*/
            if ( !*(_BYTE *)(*(_DWORD *)(v3 + 52) + 422) && *(_BYTE *)(v3 + 492) ) /*0x5c32df*/
            {
              ToWideStringChar((char *)(v3 + 90154)); /*0x5c32eb*/
              ToWideStringChar((char *)(v1 + 90154)); /*0x5c32f8*/
              Debug::Log(); /*0x5c3334*/
              HouseClass::HandleAlliance(v1, v3, 0); /*0x5c3341*/
              HouseClass::HandleAlliance(v3, v1, 0); /*0x5c334b*/
              v0 = v10; /*0x5c3350*/
            }
            v2 = HouseClass_Count; /*0x5c3354*/
            v10 = ++v0; /*0x5c335c*/
          }
          while ( v0 < HouseClass_Count ); /*0x5c3360*/
          v0 = v12; /*0x5c3366*/
        }
      }
      ++v0; /*0x5c3371*/
      v8 += 4; /*0x5c3372*/
      v12 = v0; /*0x5c3376*/
    }
    while ( v0 - 1 < v2 ); /*0x5c337f*/
    if ( v2 > 0 ) /*0x5c3387*/
    {
      v4 = 1; /*0x5c338d*/
      v9 = 0; /*0x5c3392*/
      v11 = 1; /*0x5c339a*/
      do /*0x5c34d1*/
      {
        v5 = *(_DWORD *)&HouseClass_Array->__pad_0[v9]; /*0x5c33a8*/
        ToWideStringChar((char *)(v5 + 90154)); /*0x5c33b1*/
        Debug::Log(); /*0x5c33c3*/
        if ( !*(_BYTE *)(*(_DWORD *)(v5 + 52) + 422) && !*(_BYTE *)(v5 + 492) ) /*0x5c33dc*/
        {
          v13 = v4; /*0x5c33ef*/
          if ( v4 < HouseClass_Count ) /*0x5c33f5*/
          {
            do /*0x5c34ac*/
            {
              v6 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v4]; /*0x5c3400*/
              ToWideStringChar((char *)(v6 + 90154)); /*0x5c340b*/
              Debug::Log(); /*0x5c3416*/
              if ( !*(_BYTE *)(*(_DWORD *)(v6 + 52) + 422) && !*(_BYTE *)(v6 + 492) ) /*0x5c342b*/
              {
                ToWideStringChar((char *)(v6 + 90154)); /*0x5c3437*/
                ToWideStringChar((char *)(v5 + 90154)); /*0x5c3444*/
                Debug::Log(); /*0x5c3480*/
                HouseClass::HandleAlliance(v5, v6, 0); /*0x5c348d*/
                HouseClass::HandleAlliance(v6, v5, 0); /*0x5c3497*/
                v4 = v13; /*0x5c349c*/
              }
              v13 = ++v4; /*0x5c34a8*/
            }
            while ( v4 < HouseClass_Count ); /*0x5c34ac*/
            v4 = v11; /*0x5c34b2*/
          }
        }
        ++v4; /*0x5c34c3*/
        v9 += 4; /*0x5c34c4*/
        v11 = v4; /*0x5c34c8*/
      }
      while ( v4 - 1 < HouseClass_Count ); /*0x5c34d1*/
    }
  }
  return 1; /*0x5c34d7*/
}


// ==== 0x005C34F0  MPCooperative::ReceiveMessage  this=MPCooperative  sig=csp ====
int __thiscall MPCooperative::_vt27(int *this)
{
  int v2; // ecx
  int v3; // edi
  char v4; // bl
  int v6; // ecx
  int v7; // ebp
  int v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+14h] [ebp-8h] BYREF
  int v13; // [esp+18h] [ebp-4h] BYREF

  v2 = this->MPCooperative_field_0x10; /*0x5c34fd*/
  v3 = g_SuperWeaponTypeArray; /*0x5c3500*/
  v4 = 0; /*0x5c3509*/
  v13 = 0; /*0x5c350b*/
  Movie::GetSectionID(v2, &v13); /*0x5c350f*/
  v11 = 0; /*0x5c3523*/
  Movie::GetSection((int)&MEMORY[0x89F518], v13, &v12); /*0x5c3527*/
  if ( !v12 ) /*0x5c3530*/
    return 0; /*0x5c3535*/
  v6 = this->MPCooperative_field_0x10; /*0x5c353c*/
  if ( !v6 || !Movie::GetState(v6, &v11) ) /*0x5c3548*/
    v11 = 0; /*0x5c3551*/
  if ( v11 >= *(_DWORD *)(v12 + 32) ) /*0x5c3560*/
    return 0; /*0x5c3565*/
  v7 = v3 - 1; /*0x5c356c*/
  do /*0x5c35c2*/
  {
    v8 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, v7); /*0x5c3586*/
    v9 = 0; /*0x5c358c*/
    v10 = *(_DWORD *)(*(_DWORD *)(v12 + 20) + 4 * v11); /*0x5c3591*/
    if ( *(int *)(v10 + 16) > 0 ) /*0x5c3599*/
    {
      do /*0x5c35be*/
      {
        if ( v8 == SideClass::FindByName(*(void **)(*(_DWORD *)(v10 + 4) + 4 * v9)) ) /*0x5c35a8*/
          v4 = 1; /*0x5c35aa*/
        ++v9; /*0x5c35b4*/
        v10 = *(_DWORD *)(*(_DWORD *)(v12 + 20) + 4 * v11); /*0x5c35b8*/
      }
      while ( v9 < *(_DWORD *)(v10 + 16) ); /*0x5c35be*/
    }
  }
  while ( !v4 ); /*0x5c35c2*/
  ToWideStringChar(*(char **)(*((_DWORD *)g_SuperWeaponTypeCount + v8) + 96)); /*0x5c35d0*/
  Debug::Log(); /*0x5c35dc*/
  return v8; /*0x5c3532*/
}


// ==== 0x005C35F0  MPCooperative::HandleEvent  this=MPCooperative  sig=csp ====
int __thiscall MPCooperative::_vt28(int *this)
{
  int v2; // ecx
  int v3; // edi
  char v4; // bl
  int v6; // ecx
  int v7; // ebp
  int v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+14h] [ebp-8h] BYREF
  int v13; // [esp+18h] [ebp-4h] BYREF

  v2 = this->MPCooperative_field_0x10; /*0x5c35fd*/
  v3 = g_SuperWeaponTypeArray; /*0x5c3600*/
  v4 = 0; /*0x5c3609*/
  v13 = 0; /*0x5c360b*/
  Movie::GetSectionID(v2, &v13); /*0x5c360f*/
  v11 = 0; /*0x5c3623*/
  Movie::GetSection((int)&MEMORY[0x89F518], v13, &v12); /*0x5c3627*/
  if ( !v12 ) /*0x5c3630*/
    return 0; /*0x5c3635*/
  v6 = this->MPCooperative_field_0x10; /*0x5c363c*/
  if ( !v6 || !Movie::GetState(v6, &v11) ) /*0x5c3648*/
    v11 = 0; /*0x5c3651*/
  if ( v11 >= *(_DWORD *)(v12 + 56) ) /*0x5c3660*/
    return 0; /*0x5c3665*/
  v7 = v3 - 1; /*0x5c366c*/
  do /*0x5c36c2*/
  {
    v8 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, v7); /*0x5c3686*/
    v9 = 0; /*0x5c368c*/
    v10 = *(_DWORD *)(*(_DWORD *)(v12 + 44) + 4 * v11); /*0x5c3691*/
    if ( *(int *)(v10 + 16) > 0 ) /*0x5c3699*/
    {
      do /*0x5c36be*/
      {
        if ( v8 == SideClass::FindByName(*(void **)(*(_DWORD *)(v10 + 4) + 4 * v9)) ) /*0x5c36a8*/
          v4 = 1; /*0x5c36aa*/
        ++v9; /*0x5c36b4*/
        v10 = *(_DWORD *)(*(_DWORD *)(v12 + 44) + 4 * v11); /*0x5c36b8*/
      }
      while ( v9 < *(_DWORD *)(v10 + 16) ); /*0x5c36be*/
    }
  }
  while ( !v4 ); /*0x5c36c2*/
  ToWideStringChar(*(char **)(*((_DWORD *)g_SuperWeaponTypeCount + v8) + 96)); /*0x5c36d0*/
  Debug::Log(); /*0x5c36dc*/
  return v8; /*0x5c3632*/
}


// ==== 0x005C36F0  MPCooperative::j_?do_always_noconv_codecvt_base_std__MBE_NXZ_17  this=MPCooperative  sig=csp ====
// attributes: thunk
bool __thiscall MPCooperative::j__do_always_noconv_codecvt_base_std__MBE_NXZ_17(std::codecvt_base *this)
{
  return ScenarioClass::processAI(this);
}


// ==== 0x005C3700  MPCooperative::StubReturnFalse  this=MPCooperative  sig=csp ====
char MPCooperative::_vt15()
{
  return 0; /*0x5c3702*/
}


// ==== 0x005C3B10  MPCooperative::LoadSettings  this=MPCooperative  sig=csp ====
void __thiscall MPCooperative::_vt19(int this, HWND hWnd, int a3, int a4)
{
  int v4; // edi
  int v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  char *v8; // ecx
  void *v9; // eax
  int i; // ebp
  _DWORD *v11; // eax
  _DWORD *v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  signed int v17; // ebp
  LPARAM v18; // edi
  int v19; // esi
  char *v20; // ecx
  LPARAM v21; // edi
  int v22; // esi
  wchar_t *StringCSF; // eax
  int v24; // [esp+10h] [ebp-334h] BYREF
  int v25; // [esp+14h] [ebp-330h]
  int v26; // [esp+18h] [ebp-32Ch]
  void **v27; // [esp+1Ch] [ebp-328h] BYREF
  void *Block; // [esp+20h] [ebp-324h]
  int v29; // [esp+24h] [ebp-320h]
  int v30; // [esp+28h] [ebp-31Ch]
  int v31; // [esp+2Ch] [ebp-318h]
  int v32; // [esp+30h] [ebp-314h]
  const char *v33; // [esp+34h] [ebp-310h] BYREF
  char Buffer[260]; // [esp+38h] [ebp-30Ch] BYREF
  wchar_t v35[260]; // [esp+13Ch] [ebp-208h] BYREF

  v4 = this; /*0x5c3b1a*/
  v26 = this; /*0x5c3b1c*/
  v5 = *(_DWORD *)(this + 80); /*0x5c3b20*/
  *(_BYTE *)(this + 4) = 1; /*0x5c3b23*/
  if ( !v5 ) /*0x5c3b29*/
  {
    v6 = __2_YAPAXI_Z(8u); /*0x5c3b2d*/
    if ( v6 ) /*0x5c3b37*/
      v7 = MPCooperative::initGame(v6); /*0x5c3b3b*/
    else
      v7 = 0; /*0x5c3b42*/
    *(_DWORD *)(v4 + 80) = v7; /*0x5c3b44*/
  }
  SendMessageA(hWnd, 0x184u, 0, 0); /*0x5c3b58*/
  v8 = *(char **)(v4 + 64); /*0x5c3b5e*/
  *(_BYTE *)(v4 + 73) = 0; /*0x5c3b61*/
  if ( v8 ) /*0x5c3b6c*/
  {
    if ( MEMORY[0xA8DA84] != 2 ) /*0x5c3ba4*/
      String::AssignWideToChar(v8, (char *)&MEMORY[0x887734], (char *)&MEMORY[0x887734]); /*0x5c3bb0*/
  }
  else if ( MEMORY[0xA8DA84] == 2 ) /*0x5c3b71*/
  {
    v9 = __2_YAPAXI_Z(0x70u); /*0x5c3b75*/
    if ( v9 ) /*0x5c3b7f*/
      *(_DWORD *)(v4 + 64) = MPCooperative::processTurn( /*0x5c3b95*/
                               (int)v9,
                               *(char **)MEMORY[0xA8DA78],
                               *(char **)(MEMORY[0xA8DA78] + 4));
    else
      *(_DWORD *)(v4 + 64) = 0; /*0x5c3b9c*/
  }
  if ( !*(_DWORD *)(v4 + 820) ) /*0x5c3bb5*/
  {
    CampaignClass::GetValue((int)&MEMORY[0x89F518], &v24); /*0x5c3bcd*/
    for ( i = 0; i < v24; ++i ) /*0x5c3bda*/
    {
      v11 = __2_YAPAXI_Z(0x70u); /*0x5c3be4*/
      if ( v11 ) /*0x5c3bee*/
        v12 = MissionClass::Init(v11); /*0x5c3bf7*/
      else
        v12 = 0; /*0x5c3bfb*/
      Movie::SetupScreen((int)v12, i); /*0x5c3c00*/
      v13 = *(_DWORD *)(v4 + 812); /*0x5c3c05*/
      if ( *(_DWORD *)(v4 + 820) >= v13 ) /*0x5c3c0d*/
      {
        if ( !*(_BYTE *)(v4 + 817) && v13 ) /*0x5c3c18*/
          continue; /*0x5c3c18*/
        v14 = *(_DWORD *)(v4 + 824); /*0x5c3c1a*/
        if ( v14 <= 0 /*0x5c3c2a*/
          || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v4 + 804) + 8))(v4 + 804, v13 + v14, 0) )
        {
          continue; /*0x5c3c2a*/
        }
      }
      v15 = *(_DWORD *)(v4 + 820); /*0x5c3c31*/
      v16 = *(_DWORD *)(v4 + 808); /*0x5c3c34*/
      *(_DWORD *)(v4 + 820) = v15 + 1; /*0x5c3c3a*/
      *(_DWORD *)(v16 + 4 * v15) = v12; /*0x5c3c3d*/
    }
  }
  v17 = 0; /*0x5c3c49*/
  IsometricTileTypeClass::Constructor_0(&v27, 0, 0); /*0x5c3c51*/
  v27 = &vt_DynamicVectorClass_unsigned_short; /*0x5c3c60*/
  v32 = 10; /*0x5c3c68*/
  v31 = 0; /*0x5c3c70*/
  SmallFunc_49E740((int)&MEMORY[0x89F518], &v27); /*0x5c3c74*/
  v25 = v29; /*0x5c3c86*/
  if ( v29 > 0 ) /*0x5c3c8a*/
  {
    do /*0x5c3d96*/
    {
      if ( *((_DWORD *)Block + v17) ) /*0x5c3c94*/
      {
        Array::GetElementAt(*(_DWORD *)(*(_DWORD *)(v4 + 808) + 4 * v17), &v33, -1); /*0x5c3cae*/
        v24 = *(_DWORD *)(a3 + 16); /*0x5c3cc5*/
        v18 = 0; /*0x5c3cc9*/
        sprintf(Buffer, g_Str_File__s_MAP, v33); /*0x5c3ccb*/
        v19 = 0; /*0x5c3cd7*/
        if ( v24 <= 0 ) /*0x5c3cdb*/
        {
LABEL_34:
          Debug::Log(); /*0x5c3d61*/
        }
        else
        {
          while ( !v18 ) /*0x5c3ce3*/
          {
            if ( !_strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v19) + 88), Buffer) ) /*0x5c3cf4*/
              v18 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v19); /*0x5c3d03*/
            if ( ++v19 >= v24 ) /*0x5c3d0d*/
            {
              if ( !v18 ) /*0x5c3d11*/
                goto LABEL_34; /*0x5c3d11*/
              break; /*0x5c3d11*/
            }
          }
          swprintf(v35, (const size_t)MEMORY[0x82DF40], (const wchar_t *const)(v17 + 1), *((_DWORD *)Block + v17)); /*0x5c3d13*/
          SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)v35); /*0x5c3d4b*/
          SendMessageA(hWnd, 0x19Au, v17, v18); /*0x5c3d59*/
        }
        __3_YAXPAX_Z(*((void **)Block + v17)); /*0x5c3d83*/
        v4 = v26; /*0x5c3d88*/
      }
      ++v17; /*0x5c3d93*/
    }
    while ( v17 < v25 ); /*0x5c3d96*/
  }
  v20 = *(char **)(v4 + 64); /*0x5c3d9c*/
  if ( v20 ) /*0x5c3da1*/
  {
    if ( MPCooperative::ReadCoopSaveINI(v20) && !*(_BYTE *)(v4 + 73) ) /*0x5c3db4*/
    {
      LoadCoopCampaignSave(*(char **)(v4 + 64), Buffer); /*0x5c3dc7*/
      strcat(Buffer, MEMORY[0x82DF18]); /*0x5c3df1*/
      v25 = *(_DWORD *)(a3 + 16); /*0x5c3dfb*/
      v21 = 0; /*0x5c3e01*/
      v22 = 0; /*0x5c3e03*/
      if ( v25 > 0 ) /*0x5c3e07*/
      {
        while ( !v21 ) /*0x5c3e0b*/
        {
          if ( !_strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v22) + 88), Buffer) ) /*0x5c3e1c*/
            v21 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v22); /*0x5c3e2b*/
          if ( ++v22 >= v25 ) /*0x5c3e35*/
          {
            if ( !v21 ) /*0x5c3e39*/
              goto LABEL_47; /*0x5c3e39*/
            break; /*0x5c3e39*/
          }
        }
        StringCSF = GetStringCSF(MEMORY[0x82DF04], 0, g_Str_File_MPCoop_cpp, 1726); /*0x5c3e3b*/
        SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)StringCSF); /*0x5c3e67*/
        SendMessageA(hWnd, 0x19Au, v17, v21); /*0x5c3e71*/
        *(_BYTE *)(v26 + 73) = 1; /*0x5c3e77*/
      }
    }
  }
LABEL_47:
  SendMessageA(hWnd, 0x186u, 0, 0); /*0x5c3e7b*/
  v27 = &vt_VectorClass_unsigned_short; /*0x5c3e9b*/
  if ( Block ) /*0x5c3ea4*/
  {
    if ( BYTE1(v30) ) /*0x5c3eac*/
      __3_YAXPAX_Z(Block); /*0x5c3eaf*/
  }
}


// ==== 0x005C3EC0  MovieClass::Create  this=VOID_PTR  sig=csp ====
bool __thiscall MovieClass_Create(int *this)
{
  void *v2; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  v2 = (void *)*(this + 16); /*0x5c3ec4*/
  if ( v2 ) /*0x5c3ec9*/
  {
    Array::Cleanup(*(this + 16)); /*0x5c3ecd*/
    __3_YAXPAX_Z(v2); /*0x5c3ed3*/
  }
  *(this + 16) = 0; /*0x5c3edd*/
  v3 = __2_YAPAXI_Z(0x70u); /*0x5c3ee4*/
  if ( v3 ) /*0x5c3eee*/
    v4 = MissionClass::Init(v3); /*0x5c3ef2*/
  else
    v4 = 0; /*0x5c3ef9*/
  *(this + 16) = (int)v4; /*0x5c3eff*/
  Movie::SetupScreen((int)v4, 0); /*0x5c3f02*/
  if ( MEMORY[0xA8DA84] == 2 ) /*0x5c3f0e*/
    String::AssignWideToChar((char *)*(this + 16), *(char **)MEMORY[0xA8DA78], *(char **)(MEMORY[0xA8DA78] + 4)); /*0x5c3f1f*/
  return *(this + 16) != 0; /*0x5c3f27*/
}


// ==== 0x005C3F30  MPCooperative::Cleanup  this=MPCooperative  sig=csp ====
int __thiscall MPCooperative::_vt39(int *this)
{
  HWND GameUI; // eax
  HWND v3; // esi
  int result; // eax

  GameUI = (HWND)Dialog::FindGameUI(); /*0x5c3f34*/
  v3 = GameUI; /*0x5c3f39*/
  if ( GameUI ) /*0x5c3f3d*/
  {
    CampaignCoop::Setup(this, GameUI, 0); /*0x5c3f44*/
    SkirmishDialog::FillComboBoxes(v3); /*0x5c3f4b*/
  }
  for ( result = 0; result < MEMORY[0xA8DA84]; ++result ) /*0x5c3f5c*/
    *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * result) + 107) = result; /*0x5c3f67*/
  return result; /*0x5c3f58*/
}


// ==== 0x005C3F80  MPCooperative::SetGameMode  this=MPCooperative  sig=csp ====
void __thiscall MPCooperative::vt_36_(int this)
{
  HWND Current; // eax
  HWND DlgItem; // edi
  LRESULT v4; // ebx
  char *v5; // esi
  int v6; // ecx
  int v7; // ebx
  int i; // edi
  HWND GameUI; // eax
  HWND v10; // edi
  const char *v11; // [esp+10h] [ebp-108h] BYREF
  char Buffer[260]; // [esp+14h] [ebp-104h] BYREF

  if ( Dialog::GetCurrentType() != 107 ) /*0x5c3f94*/
  {
    v6 = *(_DWORD *)(this + 64); /*0x5c4013*/
    if ( v6 && *(_BYTE *)(this + 72) ) /*0x5c401e*/
    {
      if ( *(_DWORD *)(this + 76) ) /*0x5c4029*/
        Movie::SetupScreen(v6, 0); /*0x5c4032*/
      else
        Movie::SetupScreen(v6, 1); /*0x5c403f*/
      Movie::SetupScreen(*(_DWORD *)(this + 64), *(_DWORD *)(this + 76)); /*0x5c403b*/
      Array::GetElementAt(*(_DWORD *)(this + 64), &v11, -1); /*0x5c405a*/
      v7 = MEMORY[0xA8B8D8]; /*0x5c4063*/
      sprintf(Buffer, g_Str_File__s_MAP, v11); /*0x5c4074*/
      for ( i = 0; i < v7; ++i ) /*0x5c4080*/
      {
        if ( !_strcmpi((const void *)(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * i) + 88), Buffer) ) /*0x5c4094*/
          break; /*0x5c409e*/
      }
      MEMORY[0xA8B254] = i; /*0x5c40ab*/
      *((_DWORD *)MEMORY[0xA8B230] + 1173) = i; /*0x5c40b3*/
      LoadScenarioClassByIndex(i); /*0x5c40b9*/
    }
    GameUI = (HWND)Dialog::FindGameUI(); /*0x5c40be*/
    v10 = GameUI; /*0x5c40c3*/
    if ( GameUI ) /*0x5c40c7*/
    {
      SetDialogPlayerName(GameUI, this); /*0x5c40cd*/
      Dialog::ShowPlayerName(v10); /*0x5c40d4*/
      Session::PrepareGame(v10); /*0x5c40db*/
    }
    CheckGameSettingsChanged(1, 1); /*0x5c40e4*/
LABEL_21:
    v5 = *(char **)(this + 64); /*0x5c40e9*/
    if ( !v5 ) /*0x5c40ee*/
      return; /*0x5c40ee*/
    goto LABEL_22; /*0x5c40ee*/
  }
  if ( !*(_BYTE *)(this + 73) ) /*0x5c3f9b*/
    goto LABEL_21; /*0x5c3f9b*/
  Current = Dialog::GetCurrent(); /*0x5c3fa6*/
  DlgItem = GetDlgItem(Current, 1363); /*0x5c3fba*/
  v4 = SendMessageA(DlgItem, 0x18Bu, 0, 0); /*0x5c3fc6*/
  if ( v4 != -1 ) /*0x5c3fcb*/
  {
    if ( SendMessageA(DlgItem, 0x188u, 0, 0) == v4 - 1 ) /*0x5c3fee*/
      SendMessageA(DlgItem, 0x186u, v4 - 2, 0); /*0x5c3ffc*/
    SendMessageA(DlgItem, 0x182u, v4 - 1, 0); /*0x5c4008*/
    *(_BYTE *)(this + 73) = 0; /*0x5c400a*/
    goto LABEL_21; /*0x5c400e*/
  }
  v5 = *(char **)(this + 64); /*0x5c3fcd*/
  if ( !v5 ) /*0x5c3fd2*/
    return; /*0x5c3fd2*/
LABEL_22:
  String::AssignWideToChar(v5, (char *)&MEMORY[0x887734], (char *)&MEMORY[0x887734]); /*0x5c40f0*/
}


// ==== 0x005C4110  MPCooperative::ProcessChat  this=MPCooperative  sig=csp ====
char __thiscall MPCooperative::vt_37_(LRESULT *this)
{
  LRESULT v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  char *v5; // ecx
  LPARAM v6; // ebp
  int v7; // edi
  int v8; // esi
  bool v9; // zf
  HWND Current; // eax
  HWND DlgItem; // esi
  WPARAM v12; // ebx
  wchar_t *String; // eax
  wchar_t *v14; // eax
  char Destination[260]; // [esp+14h] [ebp-104h] BYREF

  v2 = this->MPCooperative_field_0x10; /*0x5c4120*/
  if ( !v2 ) /*0x5c4125*/
  {
    v3 = __2_YAPAXI_Z(0x70u); /*0x5c4129*/
    if ( v3 ) /*0x5c4133*/
      v4 = MissionClass::Init(v3); /*0x5c4137*/
    else
      v4 = 0; /*0x5c413e*/
    this->MPCooperative_field_0x10 = (LRESULT)v4; /*0x5c4144*/
    LOBYTE(v2) = Movie::SetupScreen((int)v4, 0); /*0x5c4147*/
  }
  v5 = (char *)this->MPCooperative_field_0x10; /*0x5c414c*/
  if ( v5 ) /*0x5c4151*/
  {
    if ( MEMORY[0xA8DA84] == 2 ) /*0x5c415e*/
      String::AssignWideToChar(v5, *(char **)MEMORY[0xA8DA78], *(char **)(MEMORY[0xA8DA78] + 4)); /*0x5c416c*/
    (*(void (__thiscall **)(LRESULT *))(*this + 96))(this); /*0x5c4175*/
    LOBYTE(v2) = MPCooperative::ReadCoopSaveINI(this->MPCooperative_field_0x10); /*0x5c417b*/
    if ( (_BYTE)v2 ) /*0x5c4182*/
    {
      if ( Dialog::GetCurrentType() == 107 ) /*0x5c4190*/
      {
        LOBYTE(v2) = *((_BYTE *)this + 73); /*0x5c4196*/
        if ( !(_BYTE)v2 ) /*0x5c419b*/
        {
          LoadCoopCampaignSave(Destination); /*0x5c41a9*/
          LOBYTE(v2) = 0; /*0x5c41b6*/
          v6 = 0; /*0x5c41c2*/
          strcat(Destination, MEMORY[0x82DF18]); /*0x5c41d5*/
          v7 = MEMORY[0xA8B8D8]; /*0x5c41de*/
          v8 = 0; /*0x5c41e4*/
          if ( MEMORY[0xA8B8D8] > 0 ) /*0x5c41e8*/
          {
            v2 = MEMORY[0xA8B8CC]; /*0x5c41ee*/
            while ( !v6 ) /*0x5c41f5*/
            {
              v9 = _strcmpi((const void *)(*(_DWORD *)(v2 + 4 * v8) + 88), Destination) == 0; /*0x5c420b*/
              v2 = MEMORY[0xA8B8CC]; /*0x5c420d*/
              if ( v9 ) /*0x5c4212*/
                v6 = *(_DWORD *)(MEMORY[0xA8B8CC] + 4 * v8); /*0x5c4214*/
              if ( ++v8 >= v7 ) /*0x5c421a*/
              {
                if ( !v6 ) /*0x5c421e*/
                  return v2; /*0x5c421e*/
                break; /*0x5c421e*/
              }
            }
            Current = Dialog::GetCurrent(); /*0x5c4224*/
            DlgItem = GetDlgItem(Current, 1363); /*0x5c423d*/
            v2 = SendMessageA(DlgItem, 0x18Bu, 0, 0); /*0x5c4247*/
            v12 = v2; /*0x5c4249*/
            if ( v2 != -1 ) /*0x5c424e*/
            {
              String = GetStringCSF(MEMORY[0x82DF04], 0, g_Str_File_MPCoop_cpp, 1914); /*0x5c4261*/
              SendMessageA(DlgItem, 0x4CDu, 0, (LPARAM)String); /*0x5c426f*/
              LOBYTE(v2) = SendMessageA(DlgItem, 0x19Au, v12, v6); /*0x5c4279*/
              *((_BYTE *)this + 73) = 1; /*0x5c4282*/
            }
          }
        }
      }
      else
      {
        v14 = GetStringCSF(aTxtSaveCampAva, 0, g_Str_File_MPCoop_cpp, 1920); /*0x5c429f*/
        LOBYTE(v2) = (unsigned __int8)Dialog::ShowMessage(-1, (size_t)v14); /*0x5c42a7*/
      }
    }
  }
  return v2; /*0x5c427f*/
}


// ==== 0x005C42C0  MPCooperative::COMStub_Ret2  this=MPCooperative  sig=csp ====
int MPCooperative::_vt38()
{
  return 2; /*0x5c42c5*/
}


// ==== 0x005C42D0  MPCooperative::UpdateMovieScore  this=MPCooperative  sig=csp ====
char __thiscall MPCooperative::UpdateMovieScore(int *this)
{
  void *v2; // eax
  int v3; // eax
  int v5; // ecx
  int v6; // esi
  _DWORD *v7; // eax
  bool v8; // zf
  int v9; // eax
  char v10; // bl
  int v11; // [esp+14h] [ebp-2Ch] BYREF
  int v12; // [esp+18h] [ebp-28h] BYREF
  int v13; // [esp+1Ch] [ebp-24h] BYREF
  int v14; // [esp+20h] [ebp-20h] BYREF
  _BYTE v15[4]; // [esp+24h] [ebp-1Ch] BYREF
  void **v16; // [esp+28h] [ebp-18h] BYREF
  void *Block; // [esp+2Ch] [ebp-14h]
  char v18; // [esp+35h] [ebp-Bh]
  int v19; // [esp+38h] [ebp-8h]
  int v20; // [esp+3Ch] [ebp-4h]

  if ( !this->MPCooperative_field_0x14 ) /*0x5c42db*/
  {
    v2 = __2_YAPAXI_Z(8u); /*0x5c42e2*/
    if ( v2 ) /*0x5c42ec*/
      v3 = MPCooperative::initGame(v2); /*0x5c42f0*/
    else
      v3 = 0; /*0x5c42f7*/
    this->MPCooperative_field_0x14 = v3; /*0x5c42f9*/
  }
  if ( !this->MPCooperative_field_0x10 ) /*0x5c42fc*/
    return 0; /*0x5c4301*/
  MPCooperative::applyVoteResult(0, 0); /*0x5c4311*/
  v16 = &vt_DynamicVectorClass_MPlayerScoreType; /*0x5c4323*/
  v20 = 10; /*0x5c432b*/
  v19 = 0; /*0x5c4333*/
  MPCooperative::BuildScoreEntries(&v16, v15); /*0x5c4337*/
  v5 = this->MPCooperative_field_0x10; /*0x5c433c*/
  v12 = 0; /*0x5c4344*/
  if ( Movie::GetSectionID(v5, &v11) ) /*0x5c4348*/
    Movie::GetSection((int)&MEMORY[0x89F518], v11, &v12); /*0x5c4369*/
  else
    v11 = -1; /*0x5c4354*/
  MPCooperative::GetMovieScore(&v14); /*0x5c43a5*/
  Movie::GetState(this->MPCooperative_field_0x10, &v13); /*0x5c43b2*/
  if ( v12 ) /*0x5c43bb*/
  {
    if ( *((_DWORD *)MEMORY[0xA8B230] + 389) != -1 ) /*0x5c43d8*/
      Timer::GetTicks(); /*0x5c43dd*/
    v6 = *(_DWORD *)this->MPCooperative_field_0x14; /*0x5c43f0*/
  }
  else
  {
    if ( *((_DWORD *)MEMORY[0xA8B230] + 389) != -1 ) /*0x5c440f*/
      Timer::GetTicks(); /*0x5c4414*/
    v6 = *(_DWORD *)this->MPCooperative_field_0x14; /*0x5c4425*/
  }
  MPCooperative::processTurnEnd(&v16); /*0x5c4441*/
  (*(void (__thiscall **)(_DWORD))(v6 + 4))(this->MPCooperative_field_0x14); /*0x5c4449*/
  if ( v19 ) /*0x5c4452*/
  {
    do /*0x5c449c*/
    {
      v7 = Block; /*0x5c4454*/
      if ( *(_DWORD *)Block ) /*0x5c4458*/
      {
        __3_YAXPAX_Z(*(void **)Block); /*0x5c4461*/
        v7 = Block; /*0x5c4466*/
      }
      *v7 = 0; /*0x5c446d*/
      v8 = v19 == 0; /*0x5c4477*/
      if ( v19 > 0 ) /*0x5c4479*/
      {
        v9 = 0; /*0x5c447c*/
        v8 = v19-- == 1; /*0x5c447e*/
        if ( v19 > 0 ) /*0x5c4484*/
        {
          do /*0x5c4498*/
          {
            ++v9; /*0x5c448a*/
            *((_DWORD *)Block + v9 - 1) = *((_DWORD *)Block + v9); /*0x5c448e*/
          }
          while ( v9 < v19 ); /*0x5c4498*/
          v8 = v19 == 0; /*0x5c449a*/
        }
      }
    }
    while ( !v8 ); /*0x5c449c*/
  }
  v10 = unk_89E04C; /*0x5c44a2*/
  unk_89E04C = 0; /*0x5c44aa*/
  v16 = &vt_VectorClass_MPlayerScoreType; /*0x5c44b1*/
  if ( Block ) /*0x5c44b9*/
  {
    if ( v18 ) /*0x5c44c1*/
      __3_YAXPAX_Z(Block); /*0x5c44c4*/
  }
  return v10; /*0x5c4303*/
}


// ==== 0x005C44E0  MPCooperative::ShowScoreScreen  this=MPCooperative  sig=csp ====
void __thiscall MPCooperative::sub_5C44E0(int *this, int a2)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  int v6; // ecx
  int v7; // ecx
  void (__thiscall **v8)(_DWORD *, int); // edi
  _DWORD *v9; // eax
  bool v10; // zf
  int v11; // eax
  _DWORD v12[6]; // [esp-14h] [ebp-58h] BYREF
  int v13; // [esp+4h] [ebp-40h]
  LPARAM v14; // [esp+8h] [ebp-3Ch]
  void ***v15; // [esp+Ch] [ebp-38h]
  int *v16; // [esp+10h] [ebp-34h]
  int v17; // [esp+1Ch] [ebp-28h] BYREF
  int v18; // [esp+20h] [ebp-24h] BYREF
  int v19; // [esp+24h] [ebp-20h] BYREF
  int v20; // [esp+28h] [ebp-1Ch] BYREF
  void **v21; // [esp+2Ch] [ebp-18h] BYREF
  void *Block; // [esp+30h] [ebp-14h]
  char v23; // [esp+39h] [ebp-Bh]
  int v24; // [esp+3Ch] [ebp-8h]
  int v25; // [esp+40h] [ebp-4h]

  v3 = this->MPCooperative_field_0x10; /*0x5c44e7*/
  if ( v3 ) /*0x5c44ec*/
  {
    MPCooperative::GetMovieScore(v3, &v19); /*0x5c44f7*/
    Movie::GetState(this->MPCooperative_field_0x10, &v18); /*0x5c4504*/
    if ( (_BYTE)a2 ) /*0x5c450f*/
    {
      if ( v18 >= v19 ) /*0x5c451f*/
      {
        v4 = __2_YAPAXI_Z(4u); /*0x5c4527*/
        if ( v4 ) /*0x5c4531*/
        {
          v5 = MPCooperative::startGame(v4); /*0x5c453e*/
          if ( v5 ) /*0x5c4542*/
          {
            MPCooperative::applyVoteResult(&v21, 0, 0); /*0x5c4550*/
            v16 = &v20; /*0x5c455d*/
            v15 = &v21; /*0x5c455e*/
            v6 = this->MPCooperative_field_0x10; /*0x5c455f*/
            v21 = &vt_DynamicVectorClass_MPlayerScoreType; /*0x5c4562*/
            v25 = 10; /*0x5c456a*/
            v24 = 0; /*0x5c4572*/
            MPCooperative::BuildScoreEntries(v6, (int)&v21, &v20); /*0x5c457a*/
            v7 = this->MPCooperative_field_0x10; /*0x5c457f*/
            v17 = 0; /*0x5c4587*/
            if ( Movie::GetSectionID(v7, &a2) ) /*0x5c458f*/
              Movie::GetSection((int)&MEMORY[0x89F518], a2, &v17); /*0x5c45b1*/
            else
              a2 = -1; /*0x5c4598*/
            v8 = (void (__thiscall **)(_DWORD *, int))*v5; /*0x5c45bf*/
            v16 = *(int **)(v17 + 4); /*0x5c45ca*/
            v15 = (void ***)(a2 + 1); /*0x5c45cf*/
            v14 = MEMORY[0xA8EB68]; /*0x5c45d0*/
            v13 = v20; /*0x5c45d1*/
            MPCooperative::processTurnEnd(v12, &v21); /*0x5c45dc*/
            ((void (__thiscall *)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, LPARAM, void ***, int *))v8[1])( /*0x5c45e3*/
              v5,
              v12[0],
              v12[1],
              v12[2],
              v12[3],
              v12[4],
              v12[5],
              v13,
              v14,
              v15,
              v16);
            (*(void (__thiscall **)(_DWORD *, int))*v5)(v5, 1); /*0x5c45ec*/
            if ( v24 ) /*0x5c45f4*/
            {
              do /*0x5c463c*/
              {
                v9 = Block; /*0x5c45f6*/
                if ( *(_DWORD *)Block ) /*0x5c45fa*/
                {
                  __3_YAXPAX_Z(*(void **)Block); /*0x5c4601*/
                  v9 = Block; /*0x5c4606*/
                }
                *v9 = 0; /*0x5c460d*/
                v10 = v24 == 0; /*0x5c4617*/
                if ( v24 > 0 ) /*0x5c4619*/
                {
                  v11 = 0; /*0x5c461c*/
                  v10 = v24-- == 1; /*0x5c461e*/
                  if ( v24 > 0 ) /*0x5c4624*/
                  {
                    do /*0x5c4638*/
                    {
                      ++v11; /*0x5c462a*/
                      *((_DWORD *)Block + v11 - 1) = *((_DWORD *)Block + v11); /*0x5c462e*/
                    }
                    while ( v11 < v24 ); /*0x5c4638*/
                    v10 = v24 == 0; /*0x5c463a*/
                  }
                }
              }
              while ( !v10 ); /*0x5c463c*/
            }
            v21 = &vt_VectorClass_MPlayerScoreType; /*0x5c4642*/
            if ( Block ) /*0x5c464c*/
            {
              if ( v23 ) /*0x5c4654*/
                __3_YAXPAX_Z(Block); /*0x5c4657*/
            }
          }
        }
      }
    }
  }
}


// ==== 0x005C4670  MPCooperative::checkVictory  this=MPCooperative  sig=csp ====
int __thiscall MPCooperative::sub_5C4670(int *this)
{
  int v2; // esi
  int v3; // ecx
  int v5; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-8h] BYREF
  int v7; // [esp+10h] [ebp-4h] BYREF

  v2 = 0; /*0x5c4677*/
  v3 = this->MPCooperative_field_0x10; /*0x5c4679*/
  if ( !v3 ) /*0x5c467e*/
    return 0; /*0x5c4681*/
  MPCooperative::GetMovieScore(v3, &v5); /*0x5c468d*/
  Movie::GetState(this->MPCooperative_field_0x10, &v6); /*0x5c469a*/
  if ( v5 == v6 ) /*0x5c46a9*/
  {
    Movie::GetSectionID(this->MPCooperative_field_0x10, &v7); /*0x5c46b3*/
    v2 = 1 << v7; /*0x5c46c1*/
    Debug::Log(); /*0x5c46ca*/
  }
  return v2; /*0x5c4680*/
}


// ==== 0x005C46E0  MPCooperative::SetupRematch  this=MPCooperative  sig=csp ====
int __thiscall sub_5C46E0(int this)
{
  char *v2; // edi
  int v3; // eax
  int *v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // esi
  int *v8; // ecx
  int v9; // edx
  wchar_t *v10; // esi
  unsigned int v11; // ecx
  int ConnectionSpeed; // eax
  int v14; // [esp+10h] [ebp-30h] BYREF
  int v15; // [esp+14h] [ebp-2Ch] BYREF
  _BYTE v16[8]; // [esp+18h] [ebp-28h] BYREF
  char v17[16]; // [esp+20h] [ebp-20h] BYREF
  int v18; // [esp+30h] [ebp-10h]
  int v19; // [esp+34h] [ebp-Ch]
  int v20; // [esp+38h] [ebp-8h]
  int i; // [esp+3Ch] [ebp-4h]

  dword_B779D4 = 0; /*0x5c46f5*/
  *(_DWORD *)dword_B77D6C = g_NetworkRematchState; /*0x5c46fb*/
  *(_DWORD *)dword_B779C4 = 0; /*0x5c4700*/
  MEMORY[0xA8F900] = 0; /*0x5c4706*/
  v2 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x5c4711*/
  v3 = MEMORY[0xA8DA78]; /*0x5c471e*/
  strcpy(byte_B77830, v2); /*0x5c472f*/
  v4 = (int *)(*(_DWORD *)(v3 + 4 * *(_DWORD *)(this + 84)) + 40); /*0x5c473e*/
  MEMORY[0xA8BB1C] = *v4; /*0x5c4743*/
  MEMORY[0xA8BB20] = v4[1]; /*0x5c474c*/
  MEMORY[0xA8BB24] = v4[2]; /*0x5c4755*/
  wcscpy(&MEMORY[0xA8E258], *(const wchar_t **)(v3 + 4 * *(_DWORD *)(this + 84))); /*0x5c4767*/
  MEMORY[0xA8E2AC] = -1; /*0x5c4772*/
  MEMORY[0xA8B3AC] = *(_DWORD *)(this + 112); /*0x5c4782*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 48))(MEMORY[0x887628]); /*0x5c4789*/
  strcpy(v17, "xxx.xxx.xxx.xxx"); /*0x5c47a3*/
  v18 = 0; /*0x5c47ac*/
  v19 = 0; /*0x5c47b9*/
  v5 = 1; /*0x5c47bd*/
  v20 = 0; /*0x5c47c2*/
  for ( i = 0; v5 < MEMORY[0xA8DA84]; ++v5 ) /*0x5c47d0*/
  {
    Network::GetAddress((_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v5) + 40), &v15, (int)v16, &v14); /*0x5c47ed*/
    (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)MEMORY[0x887628] + 44))(MEMORY[0x887628], v17, v14); /*0x5c4804*/
  }
  qmemcpy(&MEMORY[0xA8DBCC], (const void *)(this + 196), 0x60u); /*0x5c4827*/
  qmemcpy(MEMORY[0xA8DC2C], (const void *)(this + 292), sizeof(MEMORY[0xA8DC2C])); /*0x5c4839*/
  qmemcpy(&MEMORY[0xA8E230], (const void *)(this + 324), 0x20u); /*0x5c484b*/
  MEMORY[0xA8E2B2] = *(_DWORD *)(this + 404); /*0x5c484f*/
  MEMORY[0xA8E2B6] = *(_DWORD *)(this + 408); /*0x5c4858*/
  MEMORY[0xA8E2BA] = *(_DWORD *)(this + 412); /*0x5c4861*/
  MEMORY[0xA8E2BE] = *(_DWORD *)(this + 416); /*0x5c4876*/
  wcscpy(&MEMORY[0xA8E258], (const wchar_t *)(this + 356)); /*0x5c487c*/
  MEMORY[0xA8E2AC] = *(_DWORD *)(this + 400); /*0x5c488a*/
  MEMORY[0xA8ED94] = *(_DWORD *)(this + 156); /*0x5c4896*/
  InitRandomSeed(); /*0x5c489c*/
  Debug::Log("Setup Rematch: Random Seed = %d\n", MEMORY[0xA8ED94]);
  g_RulesInitConfig = *(_DWORD *)(this + 160); /*0x5c48ba*/
  MEMORY[0xA8B270] = *(_DWORD *)(this + 164); /*0x5c48c6*/
  MEMORY[0xA8B25C] = *(_DWORD *)(this + 168); /*0x5c48d2*/
  MEMORY[0xA8B31F] = *(_BYTE *)(this + 172); /*0x5c48dd*/
  MEMORY[0xA8B260] = *(_BYTE *)(this + 173); /*0x5c48e9*/
  MEMORY[0xA8B261] = *(_BYTE *)(this + 174); /*0x5c48f5*/
  LOBYTE(MEMORY[0xA8B320]) = *(_BYTE *)(this + 175); /*0x5c4900*/
  MEMORY[0xA8B31C] = *(_BYTE *)(this + 176); /*0x5c490c*/
  MEMORY[0xA8B31D] = *(_BYTE *)(this + 177); /*0x5c4918*/
  MEMORY[0xA8B258] = *(_BYTE *)(this + 178); /*0x5c4923*/
  MEMORY[0xA8B31E] = *(_BYTE *)(this + 179); /*0x5c492f*/
  MEMORY[0xA8B278] = *(_DWORD *)(this + 184); /*0x5c493b*/
  MEMORY[0xA8B262] = *(_BYTE *)(this + 188); /*0x5c4946*/
  MEMORY[0xA8B263] = *(_BYTE *)(this + 189); /*0x5c4952*/
  LOBYTE(MEMORY[0xA8B264]) = *(_BYTE *)(this + 190); /*0x5c495e*/
  MEMORY[0xA8B26C] = *(_BYTE *)(this + 191); /*0x5c4969*/
  MEMORY[0xA8B268] = *(_DWORD *)(this + 192); /*0x5c497b*/
  LoadScenarioClassByIndex(MEMORY[0xA8B254]); /*0x5c4981*/
  *(_DWORD *)MEMORY[0xA8EB60] = MEMORY[0xA8B268]; /*0x5c4997*/
  *((_DWORD *)MEMORY[0xA8B230] + 1173) = MEMORY[0xA8B254]; /*0x5c499c*/
  switch ( MEMORY[0xA8B268] ) /*0x5c49b0*/
  {
    case 0: /*0x5c49b0*/
      MEMORY[0xA8B550] = (wchar_t *)40; /*0x5c49b7*/
      MEMORY[0xA8B570] = 60; /*0x5c49c1*/
      MEMORY[0xA8B554] = 10; /*0x5c49cb*/
      goto LABEL_12; /*0x5c49d5*/
    case 1: /*0x5c49b0*/
      MEMORY[0xA8B550] = (wchar_t *)40; /*0x5c49d7*/
      MEMORY[0xA8B570] = 45; /*0x5c49e1*/
      MEMORY[0xA8B554] = 10; /*0x5c49eb*/
      goto LABEL_12; /*0x5c49f5*/
    case 2: /*0x5c49b0*/
      v6 = 30; /*0x5c49f7*/
      goto LABEL_11; /*0x5c49fc*/
    case 3: /*0x5c49b0*/
      v6 = 20; /*0x5c49fe*/
      goto LABEL_11; /*0x5c4a03*/
    case 4: /*0x5c49b0*/
      MEMORY[0xA8B550] = (wchar_t *)20; /*0x5c4a05*/
      MEMORY[0xA8B570] = 15; /*0x5c4a0f*/
      goto LABEL_12; /*0x5c4a19*/
    case 5: /*0x5c49b0*/
      MEMORY[0xA8B550] = (wchar_t *)20; /*0x5c4a1b*/
      MEMORY[0xA8B570] = 12; /*0x5c4a25*/
      goto LABEL_12; /*0x5c4a2f*/
    default:
      v6 = 10; /*0x5c4a31*/
LABEL_11:
      MEMORY[0xA8B550] = (wchar_t *)v6; /*0x5c4a36*/
      MEMORY[0xA8B570] = v6; /*0x5c4a3b*/
LABEL_12:
      MEMORY[0xA8B56C] = 0; /*0x5c4a40*/
      if ( !*(_BYTE *)(this + 4) ) /*0x5c4a46*/
        MEMORY[0xA8B570] = 0; /*0x5c4a4d*/
      v7 = 0; /*0x5c4a58*/
      if ( MEMORY[0xA8DA84] > 0 ) /*0x5c4a5c*/
      {
        v8 = &dword_B7790C; /*0x5c4a5e*/
        v9 = MEMORY[0xA8DA84]; /*0x5c4a63*/
        do /*0x5c4a71*/
        {
          if ( *v8 > v7 ) /*0x5c4a69*/
            v7 = *v8; /*0x5c4a6b*/
          ++v8; /*0x5c4a6d*/
          --v9; /*0x5c4a70*/
        }
        while ( v9 ); /*0x5c4a71*/
      }
      MEMORY[0xA8DB9C] = (wchar_t *)1; /*0x5c4a7a*/
      if ( !v7 || v7 == 1000 ) /*0x5c4a8c*/
      {
        MEMORY[0xA8B570] = 0; /*0x5c4b73*/
        Debug::Log(aPingTimesNotAv_0); /*0x5c4b79*/
LABEL_34:
        v10 = MEMORY[0xA8B550]; /*0x5c4b81*/
        goto LABEL_35; /*0x5c4b81*/
      }
      Debug::Log("Max ping is %d ms\n", v7); /*0x5c4a98*/
      if ( v7 <= 1000 ) /*0x5c4aa6*/
      {
        if ( v7 < 600 ) /*0x5c4aba*/
          MEMORY[0xA8DB9C] = (wchar_t *)1; /*0x5c4abc*/
      }
      else
      {
        MEMORY[0xA8DB9C] = (wchar_t *)2; /*0x5c4aa8*/
      }
      Network::SetConnectionParams( /*0x5c4b0b*/
        MEMORY[0xA8E9C0],
        120 * (60 * v7 / 1000) / 100 + 60 * v7 / 1000,
        -1,
        8 * (120 * (60 * v7 / 1000) / 100 + 60 * v7 / 1000),
        1);
      if ( !*(_BYTE *)(this + 4) ) /*0x5c4b10*/
        goto LABEL_34; /*0x5c4b10*/
      IPXManagerClass::sendPacket(5, -1, 120); /*0x5c4b20*/
      if ( !*(_BYTE *)(this + 4) ) /*0x5c4b25*/
        goto LABEL_34; /*0x5c4b28*/
      v10 = MEMORY[0xA8B550]; /*0x5c4b2f*/
      switch ( (unsigned int)MEMORY[0xA8DB9C] ) /*0x5c4b3a*/
      {
        case 0u: /*0x5c4b3a*/
        case 1u: /*0x5c4b3a*/
          v11 = (unsigned int)MEMORY[0xA8B550]; /*0x5c4b41*/
          break; /*0x5c4b43*/
        case 2u: /*0x5c4b3a*/
          v11 = (unsigned int)MEMORY[0xA8B550] + ((unsigned int)MEMORY[0xA8B550] >> 1); /*0x5c4b49*/
          break; /*0x5c4b4b*/
        case 3u: /*0x5c4b3a*/
          v11 = 2 * (_DWORD)MEMORY[0xA8B550]; /*0x5c4b4d*/
          break; /*0x5c4b50*/
        default:
          v11 = MEMORY[0xA8B56C]; /*0x5c4b52*/
          break; /*0x5c4b52*/
      }
      MEMORY[0xA8B56C] = 10 * (v11 / 0xA); /*0x5c4b67*/
LABEL_35:
      MEMORY[0xA8B568] = (int)v10; /*0x5c4b87*/
      memset(&MEMORY[0xA8B574], 0, 0x340u); /*0x5c4b99*/
      byte_B77A04 = 0; /*0x5c4ba1*/
      *(_DWORD *)MEMORY[0xA8EB60] = MEMORY[0xA8B268]; /*0x5c4ba7*/
      byte_B76568 = 0; /*0x5c4bad*/
      Scenario::PreGameInit(); /*0x5c4bb3*/
      dword_8B41F8 = 0; /*0x5c4bbf*/
      word_8B41FC = 0; /*0x5c4bc5*/
      unk_8B4200 = 0; /*0x5c4bcb*/
      Networking_LastEventIndex = 0; /*0x5c4bd1*/
      g_NetworkEventIndex = 0; /*0x5c4bd7*/
      Networking_NextPacketIndex = 0; /*0x5c4bdd*/
      Tooltip::Enable((void *)MEMORY[0x887368], 0); /*0x5c4be3*/
      Debug::Log("@@@@ Before destroying connections players.count() = %d\n", MEMORY[0xA8DA84]); /*0x5c4bf4*/
      while ( Network::GetSendCount(MEMORY[0xA8E9C0]) ) /*0x5c4c01*/
      {
        ConnectionSpeed = Network::GetConnectionSpeed(MEMORY[0xA8E9C0], 0); /*0x5c4c10*/
        Network::sendData(ConnectionSpeed); /*0x5c4c1b*/
      }
      if ( MEMORY[0xA8DBA0] ) /*0x5c4c34*/
      {
        if ( MEMORY[0xA8EA0C] ) /*0x5c4c3c*/
          NetworkEventQueueClass::WaitForResponse(&g_NetworkEventQueue); /*0x5c4c43*/
        MEMORY[0xA8DBA0] = 0; /*0x5c4c48*/
      }
      return Debug::Log("@@@@ After destroying connections players.count() = %d\n", MEMORY[0xA8DA84]);
  }
}


// ==== 0x005C4CA0  MPCooperative::InitializePlayers  this=MPCooperative  sig=csp ====
int __thiscall MPCooperative::sub_5C4CA0(int *this)
{
  int v2; // ebx
  int result; // eax
  int v4; // esi
  char *v5; // eax
  char *v6; // esi
  int v7; // eax
  _DWORD *v8; // [esp+8h] [ebp-14h]
  int v9; // [esp+Ch] [ebp-10h] BYREF
  int v10; // [esp+10h] [ebp-Ch] BYREF
  _BYTE v11[8]; // [esp+14h] [ebp-8h] BYREF

  PtrVector::Destroy(&MEMORY[0xA8DA74]); /*0x5c4cac*/
  v2 = 0; /*0x5c4cb1*/
  MEMORY[0xA8B54C] = 0; /*0x5c4cb3*/
  result = this->MPCooperative_field_0x68; /*0x5c4cb9*/
  if ( result > 0 ) /*0x5c4cbe*/
  {
    do /*0x5c4e7b*/
    {
      v4 = 0; /*0x5c4ccb*/
      if ( HouseClass_Count > 0 ) /*0x5c4ccf*/
      {
        while ( _wcsicmp( /*0x5c4cf5*/
                  (const wchar_t *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * v4] + 90154),
                  *(const wchar_t **)(this->MPCooperative_field_0x5C + 4 * v2)) )
        {
          if ( ++v4 >= HouseClass_Count ) /*0x5c4cff*/
            goto LABEL_16; /*0x5c4cff*/
        }
        *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 111) = v4; /*0x5c4d11*/
        v5 = (char *)__2_YAPAXI_Z(0x85u); /*0x5c4d14*/
        v6 = v5; /*0x5c4d19*/
        if ( v5 ) /*0x5c4d20*/
        {
          Waypoint::InitInvalid(v5 + 40); /*0x5c4d25*/
          v8 = v6; /*0x5c4d2a*/
        }
        else
        {
          v8 = 0; /*0x5c4d30*/
          v6 = 0; /*0x5c4d38*/
        }
        wcscpy((wchar_t *)v6, *(const wchar_t **)(this->MPCooperative_field_0x5C + 4 * v2)); /*0x5c4d44*/
        *(_DWORD *)(v6 + 123) = *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 123); /*0x5c4d55*/
        *(_DWORD *)(v6 + 75) = *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 75); /*0x5c4d61*/
        *(_DWORD *)(v6 + 83) = *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 83); /*0x5c4d6f*/
        strcpy(v6 + 52, (const char *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 52)); /*0x5c4d90*/
        *(_DWORD *)((char *)v8 + 79) = *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 79); /*0x5c4da6*/
        *(_DWORD *)((char *)v8 + 87) = *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 87); /*0x5c4db2*/
        *(_DWORD *)((char *)v8 + 107) = *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 107); /*0x5c4dbe*/
        *(_DWORD *)((char *)v8 + 115) = *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 115); /*0x5c4dca*/
        *(_DWORD *)((char *)v8 + 119) = *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 119); /*0x5c4dd6*/
        *(_DWORD *)((char *)v8 + 123) = *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 123); /*0x5c4deb*/
        Network::GetAddress((_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 40), &v10, (int)v11, &v9); /*0x5c4dfd*/
        NetworkID::Assign(v8 + 10, &v10, (int)v11, v9); /*0x5c4e14*/
        if ( MEMORY[0xA8DA84] < MEMORY[0xA8DA7C] /*0x5c4e50*/
          || (MEMORY[0xA8DA81] || !MEMORY[0xA8DA7C])
          && MEMORY[0xA8DA88] > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8DA74] + 8))(
               &MEMORY[0xA8DA74],
               MEMORY[0xA8DA7C] + MEMORY[0xA8DA88],
               0) )
        {
          v7 = MEMORY[0xA8DA84]++; /*0x5c4e5d*/
          *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v7) = v8; /*0x5c4e6c*/
        }
        ++MEMORY[0xA8B54C]; /*0x5c4e6f*/
      }
LABEL_16:
      result = this->MPCooperative_field_0x68; /*0x5c4e75*/
      ++v2; /*0x5c4e78*/
    }
    while ( v2 < result ); /*0x5c4e7b*/
  }
  return result; /*0x5c4e83*/
}


// ==== 0x005C4E90  MPCooperative::spawnUnits  this=MPCooperative  sig=csp ====
char __thiscall MPCooperative::sub_5C4E90(
        _DWORD *this,
        int a2,
        void *Block,
        int a4,
        __int16 a5,
        int a6,
        int a7,
        _DWORD *a8)
{
  *a8 = 0; /*0x5c4e94*/
  if ( this->MPCooperative_field_0x10 ) /*0x5c4e9a*/
  {
    if ( Block ) /*0x5c4ea7*/
    {
      if ( HIBYTE(a5) ) /*0x5c4eaf*/
        __3_YAXPAX_Z(Block); /*0x5c4eb2*/
    }
    return 1; /*0x5c4eba*/
  }
  else
  {
    if ( Block && HIBYTE(a5) ) /*0x5c4ec9*/
      __3_YAXPAX_Z(Block); /*0x5c4ecc*/
    return 0; /*0x5c4ed4*/
  }
}


// ==== 0x005C4EE0  MPCooperative::assignResources  this=MPCooperative  sig=csp ====
char __thiscall MPCooperative::assignResources(std::codecvt_base *this)
{
  return 1; /*0x5c4ee2*/
}


// ==== 0x005C4EF0  MPCooperative::setUpAlliances  this=MPCooperative  sig=csp ====
char __thiscall MPCooperative::setUpAlliances(std::codecvt_base *this)
{
  return 1; /*0x5c4ef2*/
}


// ==== 0x005C4F00  MPCooperative::initTurnOrder  this=MPCooperative  sig=csp ====
char MPCooperative::sub_5C4F00()
{
  return 0; /*0x5c4f02*/
}


// ==== 0x005C4F10  MPCooperative::QueryInterface  this=MPCooperative  sig=csp ====
_DWORD *__thiscall sub_5C4F30(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  this->MPCooperative_field_0x4 = 0; /*0x5c4f3d*/
  this->MPCooperative_field_0x8 = 0; /*0x5c4f40*/
  this->__pad_030 = 1; /*0x5c4f43*/
  this->IsAllocated = 0; /*0x5c4f47*/
  *this = &vt_VectorClass_MPlayerScoreType; /*0x5c4f4a*/
  if ( this != a2 ) /*0x5c4f50*/
  {
    MPCooperative::ddtor((int)this); /*0x5c4f52*/
    v3 = a2[2]; /*0x5c4f58*/
    this->MPCooperative_field_0x8 = v3; /*0x5c4f5d*/
    if ( v3 ) /*0x5c4f60*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x5c4f66*/
      this->MPCooperative_field_0x4 = v4; /*0x5c4f70*/
      if ( v4 ) /*0x5c4f73*/
      {
        v5 = this->MPCooperative_field_0x8; /*0x5c4f75*/
        v6 = 0; /*0x5c4f78*/
        this->IsAllocated = 1; /*0x5c4f7c*/
        if ( v5 > 0 ) /*0x5c4f80*/
        {
          do /*0x5c4f94*/
          {
            *(_DWORD *)(this->MPCooperative_field_0x4 + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x5c4f8b*/
            ++v6; /*0x5c4f91*/
          }
          while ( v6 < this->MPCooperative_field_0x8 ); /*0x5c4f94*/
        }
      }
    }
    else
    {
      this->MPCooperative_field_0x4 = 0; /*0x5c4f98*/
      this->IsAllocated = 0; /*0x5c4f9b*/
    }
  }
  this->MPCooperative_field_0x10 = a2[4]; /*0x5c4fa1*/
  this->MPCooperative_field_0x14 = a2[5]; /*0x5c4fa7*/
  *this = &vt_DynamicVectorClass_MPlayerScoreType; /*0x5c4faa*/
  return this; /*0x5c4fb2*/
}


// ==== 0x005C4F30  MPCooperative::processTurnEnd  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_5C4F30(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x5c4f3d*/
  this->Capacity = 0; /*0x5c4f40*/
  this->q030 = 1; /*0x5c4f43*/
  this->__pad_034 = 0; /*0x5c4f47*/
  *this = &vt_VectorClass_MPlayerScoreType; /*0x5c4f4a*/
  if ( this != a2 ) /*0x5c4f50*/
  {
    MPCooperative::ddtor((int)this); /*0x5c4f52*/
    v3 = a2[2]; /*0x5c4f58*/
    this->Capacity = v3; /*0x5c4f5d*/
    if ( v3 ) /*0x5c4f60*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x5c4f66*/
      this->Items = v4; /*0x5c4f70*/
      if ( v4 ) /*0x5c4f73*/
      {
        v5 = this->Capacity; /*0x5c4f75*/
        v6 = 0; /*0x5c4f78*/
        this->__pad_034 = 1; /*0x5c4f7c*/
        if ( v5 > 0 ) /*0x5c4f80*/
        {
          do /*0x5c4f94*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x5c4f8b*/
            ++v6; /*0x5c4f91*/
          }
          while ( v6 < this->Capacity ); /*0x5c4f94*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x5c4f98*/
      this->__pad_034 = 0; /*0x5c4f9b*/
    }
  }
  this->q010 = a2[4]; /*0x5c4fa1*/
  this->__pad_014 = a2[5]; /*0x5c4fa7*/
  *this = &vt_DynamicVectorClass_MPlayerScoreType; /*0x5c4faa*/
  return this; /*0x5c4fb2*/
}


// ==== 0x005C4FC0  ?$DynamicVectorClass@PAUMPlayerScoreType@@::saveGameState  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MPCooperative::saveGameState(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5c4fc3*/
  *Block = &vt_VectorClass_MPlayerScoreType; /*0x5c4fc6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5c4fd0*/
  {
    __3_YAXPAX_Z(v3); /*0x5c4fd8*/
    *(Block + 1) = 0; /*0x5c4fe0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5c4feb*/
  *(Block + 2) = 0; /*0x5c4ff1*/
  if ( (a2 & 1) != 0 ) /*0x5c4ff8*/
    __3_YAXPAX_Z(Block); /*0x5c4ffb*/
  return (DynamicVector *)Block; /*0x5c5005*/
}


// ==== 0x005C5010  ?$DynamicVectorClass@PAUMPlayerScoreType@@::loadGameState  this=DynamicVector  sig=csp ====
void __thiscall MPCooperative::sub_5C5010(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5c5016*/
  *(_DWORD *)(this + 16) = 0; /*0x5c5019*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5c5020*/
  {
    __3_YAXPAX_Z(v2); /*0x5c5026*/
    *(_DWORD *)(this + 4) = 0; /*0x5c502e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5c5031*/
  *(_DWORD *)(this + 8) = 0; /*0x5c5034*/
}


// ==== 0x005C5040  ?$DynamicVectorClass@PAUMPlayerScoreType@@::syncPlayers  this=DynamicVector  sig=csp ====
unsigned int __thiscall MPCooperative::sub_5C5040(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5c5040*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5c5055*/
  else
    return 0; /*0x5c5047*/
}


// ==== 0x005C5060  _VectorClass_PAUMPlayerScoreType::dispatchEvent  this=VectorClass  sig=csp ====
int __thiscall MPCooperative::sub_5C5060(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5c506a*/
}


// ==== 0x005C5070  _DynamicVectorClass_PAUNodeNameType::ddtor  this=DynamicVector  sig=csp ====
void __thiscall DynamicVectorClass_ptr_NodeNameType::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5c5076*/
  *(_DWORD *)(this + 16) = 0; /*0x5c5079*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5c5080*/
  {
    __3_YAXPAX_Z(v2); /*0x5c5086*/
    *(_DWORD *)(this + 4) = 0; /*0x5c508e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5c5091*/
  *(_DWORD *)(this + 8) = 0; /*0x5c5094*/
}


// ==== 0x005C50A0  _DynamicVectorClass_PAUNodeNameType::Get  this=DynamicVector  sig=csp ====
unsigned int __thiscall DynamicVectorClass_ptr_NodeNameType::Get(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5c50a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5c50b5*/
  else
    return 0; /*0x5c50a7*/
}


// ==== 0x005C50C0  _VectorClass_PAUNodeNameType::Clear  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass_ptr_NodeNameType::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5c50ca*/
}


// ==== 0x005C50D0  ?$DynamicVectorClass@PAVCoopCampaignClass@@::processPlayerInput  this=DynamicVector  sig=csp ====
void __thiscall MPCooperative::sub_5C50D0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5c50d6*/
  *(_DWORD *)(this + 16) = 0; /*0x5c50d9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5c50e0*/
  {
    __3_YAXPAX_Z(v2); /*0x5c50e6*/
    *(_DWORD *)(this + 4) = 0; /*0x5c50ee*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5c50f1*/
  *(_DWORD *)(this + 8) = 0; /*0x5c50f4*/
}


// ==== 0x005C5100  ?$DynamicVectorClass@PAVCoopCampaignClass@@::updateGameClock  this=DynamicVector  sig=csp ====
unsigned int __thiscall MPCooperative::sub_5C5100(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5c5100*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5c5115*/
  else
    return 0; /*0x5c5107*/
}


// ==== 0x005C5120  _VectorClass_PAVCoopCampaignClass::Seek  this=VectorClass  sig=csp ====
int __thiscall CoopCampaignVector::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5c512a*/
}


// ==== 0x005C5130  _VectorClass_PAUMPlayerScoreType::AddRef  this=VectorClass  sig=csp ====
char __thiscall MPCooperative::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x5c5132*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5c513d*/
  {
    v3 = 0; /*0x5c513f*/
    if ( v2 <= 0 ) /*0x5c5143*/
      return 1; /*0x5c5163*/
    v4 = (_DWORD *)this->Items; /*0x5c5145*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5c514b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5c5154*/
    {
      ++v3; /*0x5c5156*/
      ++v4; /*0x5c5157*/
      if ( v3 >= v2 ) /*0x5c515c*/
        return 1; /*0x5c515c*/
    }
  }
  return 0; /*0x5c515e*/
}


// ==== 0x005C5170  ?$VectorClass@PAUMPlayerScoreType@@::Release  this=VectorClass  sig=csp ====
char __thiscall MPCooperative::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5c517c*/
  {
    this->IsInitialized = 0; /*0x5c5186*/
    if ( a3 ) /*0x5c518c*/
      v4 = a3; /*0x5c51a2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5c519e*/
    this->IsInitialized = 1; /*0x5c51a6*/
    if ( v4 ) /*0x5c51aa*/
    {
      if ( this->Items ) /*0x5c51b5*/
      {
        v6 = this->Capacity; /*0x5c51bc*/
        if ( a2 < v6 ) /*0x5c51c1*/
          v6 = a2; /*0x5c51c3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5c51c9*/
          ++i; /*0x5c51ce*/
        if ( this->IsAllocated ) /*0x5c51db*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5c51e6*/
          this->Items = 0; /*0x5c51ee*/
        }
      }
      this->Items = v4; /*0x5c51f7*/
      this->Capacity = a2; /*0x5c51ff*/
      this->IsAllocated = a3 == 0; /*0x5c5202*/
      return 1; /*0x5c5208*/
    }
    else
    {
      return 0; /*0x5c51af*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5c5212*/
    return 1; /*0x5c5218*/
  }
}


// ==== 0x005C5220  ?$VectorClass@PAUMPlayerScoreType@@::ddtor  this=VectorClass  sig=csp ====
void __thiscall MPCooperative::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5c522d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5c5233*/
    *(_DWORD *)(this + 4) = 0; /*0x5c523b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5c523e*/
  *(_DWORD *)(this + 8) = 0; /*0x5c5241*/
}


// ==== 0x005C5250  ?$VectorClass@PAUMPlayerScoreType@@::checkTimeout  this=VectorClass  sig=csp ====
int __thiscall MPCooperative::sub_5C5250(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5c5250*/
    return 0; /*0x5c5258*/
  v3 = *(_DWORD *)(this + 8); /*0x5c525e*/
  result = 0; /*0x5c5261*/
  if ( v3 <= 0 ) /*0x5c5265*/
    return -1; /*0x5c527c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5c526b*/
  {
    if ( ++result >= v3 ) /*0x5c527a*/
      return -1; /*0x5c527a*/
  }
  return result; /*0x5c525a*/
}


// ==== 0x005C5290  ?$VectorClass@PAUMPlayerScoreType@@::handleDisconnect  this=VectorClass  sig=csp ====
unsigned int __thiscall MPCooperative::sub_5C5290(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5c5290*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5c52a5*/
  else
    return 0; /*0x5c5297*/
}


// ==== 0x005C52B0  ?$DynamicVectorClass@PAUMPlayerScoreType@@::migrateHost  this=DynamicVector  sig=csp ====
char __thiscall MPCooperative::sub_5C52B0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5c52bc*/
  {
    this->IsInitialized = 0; /*0x5c52c2*/
    if ( a3 ) /*0x5c52c8*/
      v4 = a3; /*0x5c52de*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5c52da*/
    this->IsInitialized = 1; /*0x5c52e2*/
    if ( !v4 ) /*0x5c52e6*/
      return 0; /*0x5c535a*/
    if ( this->Items ) /*0x5c52e8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5c52ef*/
      if ( a2 < v5 ) /*0x5c52f4*/
        v5 = a2; /*0x5c52f6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5c52fc*/
        ++i; /*0x5c5301*/
      if ( this->IsAllocated ) /*0x5c530e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5c5319*/
        this->Items = 0; /*0x5c5321*/
      }
    }
    this->Items = v4; /*0x5c532a*/
    this->DynamicVector_field_0x8 = a2; /*0x5c5332*/
    this->IsAllocated = a3 == 0; /*0x5c5335*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5c533e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5c5341*/
  if ( v7 < this->Items ) /*0x5c5349*/
    this->Items = v7; /*0x5c534b*/
  return 1; /*0x5c534e*/
}


// ==== 0x005C5360  ?$DynamicVectorClass@PAUMPlayerScoreType@@::validatePlayerAction  this=DynamicVector  sig=csp ====
int __thiscall MPCooperative::sub_5C5360(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5c5360*/
  result = 0; /*0x5c5363*/
  if ( v2 <= 0 ) /*0x5c5368*/
    return -1; /*0x5c537f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x5c536e*/
  {
    if ( ++result >= v2 ) /*0x5c537d*/
      return -1; /*0x5c537d*/
  }
  return result; /*0x5c5382*/
}


// ==== 0x005C5390  _VectorClass_PAUNodeNameType::AddRef  this=VectorClass  sig=csp ====
char __thiscall DynamicVectorClass_ptr_NodeNameType::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x5c5392*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5c539d*/
  {
    v3 = 0; /*0x5c539f*/
    if ( v2 <= 0 ) /*0x5c53a3*/
      return 1; /*0x5c53c3*/
    v4 = (_DWORD *)this->Items; /*0x5c53a5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5c53ab*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5c53b4*/
    {
      ++v3; /*0x5c53b6*/
      ++v4; /*0x5c53b7*/
      if ( v3 >= v2 ) /*0x5c53bc*/
        return 1; /*0x5c53bc*/
    }
  }
  return 0; /*0x5c53be*/
}


// ==== 0x005C53D0  ?$VectorClass@PAUNodeNameType@@::processTeamChat  this=VectorClass  sig=csp ====
char __thiscall MPCooperative::sub_5C53D0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5c53dc*/
  {
    this->IsInitialized = 0; /*0x5c53e6*/
    if ( a3 ) /*0x5c53ec*/
      v4 = a3; /*0x5c5402*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5c53fe*/
    this->IsInitialized = 1; /*0x5c5406*/
    if ( v4 ) /*0x5c540a*/
    {
      if ( this->Items ) /*0x5c5415*/
      {
        v6 = this->Capacity; /*0x5c541c*/
        if ( a2 < v6 ) /*0x5c5421*/
          v6 = a2; /*0x5c5423*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5c5429*/
          ++i; /*0x5c542e*/
        if ( this->IsAllocated ) /*0x5c543b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5c5446*/
          this->Items = 0; /*0x5c544e*/
        }
      }
      this->Items = v4; /*0x5c5457*/
      this->Capacity = a2; /*0x5c545f*/
      this->IsAllocated = a3 == 0; /*0x5c5462*/
      return 1; /*0x5c5468*/
    }
    else
    {
      return 0; /*0x5c540f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5c5472*/
    return 1; /*0x5c5478*/
  }
}


// ==== 0x005C5480  ?$VectorClass@PAUNodeNameType@@::updateScoreBoard  this=VectorClass  sig=csp ====
void __thiscall MPCooperative::sub_5C5480(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5c548d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5c5493*/
    *(_DWORD *)(this + 4) = 0; /*0x5c549b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5c549e*/
  *(_DWORD *)(this + 8) = 0; /*0x5c54a1*/
}


// ==== 0x005C54B0  ?$VectorClass@PAUNodeNameType@@::processAITurn  this=VectorClass  sig=csp ====
int __thiscall MPCooperative::sub_5C54B0(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5c54b0*/
    return 0; /*0x5c54b8*/
  v3 = *(_DWORD *)(this + 8); /*0x5c54be*/
  result = 0; /*0x5c54c1*/
  if ( v3 <= 0 ) /*0x5c54c5*/
    return -1; /*0x5c54dc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5c54cb*/
  {
    if ( ++result >= v3 ) /*0x5c54da*/
      return -1; /*0x5c54da*/
  }
  return result; /*0x5c54ba*/
}


// ==== 0x005C54F0  ?$VectorClass@PAUNodeNameType@@::evaluateAIStrategy  this=VectorClass  sig=csp ====
unsigned int __thiscall MPCooperative::sub_5C54F0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5c54f0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5c5505*/
  else
    return 0; /*0x5c54f7*/
}


// ==== 0x005C5510  _DynamicVectorClass_PAUNodeNameType::Remove  this=DynamicVector  sig=csp ====
char __thiscall DynamicVectorClass_ptr_NodeNameType::Remove(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5c551c*/
  {
    this->IsInitialized = 0; /*0x5c5522*/
    if ( a3 ) /*0x5c5528*/
      v4 = a3; /*0x5c553e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5c553a*/
    this->IsInitialized = 1; /*0x5c5542*/
    if ( !v4 ) /*0x5c5546*/
      return 0; /*0x5c55ba*/
    if ( this->Items ) /*0x5c5548*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5c554f*/
      if ( a2 < v5 ) /*0x5c5554*/
        v5 = a2; /*0x5c5556*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5c555c*/
        ++i; /*0x5c5561*/
      if ( this->IsAllocated ) /*0x5c556e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5c5579*/
        this->Items = 0; /*0x5c5581*/
      }
    }
    this->Items = v4; /*0x5c558a*/
    this->DynamicVector_field_0x8 = a2; /*0x5c5592*/
    this->IsAllocated = a3 == 0; /*0x5c5595*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5c559e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5c55a1*/
  if ( v7 < this->Items ) /*0x5c55a9*/
    this->Items = v7; /*0x5c55ab*/
  return 1; /*0x5c55ae*/
}


// ==== 0x005C55C0  _DynamicVectorClass_PAUNodeNameType::GetSize  this=DynamicVector  sig=csp ====
int __thiscall DynamicVectorClass_ptr_NodeNameType::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5c55c0*/
  result = 0; /*0x5c55c3*/
  if ( v2 <= 0 ) /*0x5c55c8*/
    return -1; /*0x5c55df*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x5c55ce*/
  {
    if ( ++result >= v2 ) /*0x5c55dd*/
      return -1; /*0x5c55dd*/
  }
  return result; /*0x5c55e2*/
}


// ==== 0x005C55F0  _VectorClass_PAVCoopCampaignClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall CoopCampaignVector::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x5c55f2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5c55fd*/
  {
    v3 = 0; /*0x5c55ff*/
    if ( v2 <= 0 ) /*0x5c5603*/
      return 1; /*0x5c5623*/
    v4 = (_DWORD *)this->Items; /*0x5c5605*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5c560b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5c5614*/
    {
      ++v3; /*0x5c5616*/
      ++v4; /*0x5c5617*/
      if ( v3 >= v2 ) /*0x5c561c*/
        return 1; /*0x5c561c*/
    }
  }
  return 0; /*0x5c561e*/
}


// ==== 0x005C5630  _VectorClass_PAVCoopCampaignClass::Release  this=VectorClass  sig=csp ====
char __thiscall CoopCampaignVector::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5c563c*/
  {
    this->IsInitialized = 0; /*0x5c5646*/
    if ( a3 ) /*0x5c564c*/
      v4 = a3; /*0x5c5662*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5c565e*/
    this->IsInitialized = 1; /*0x5c5666*/
    if ( v4 ) /*0x5c566a*/
    {
      if ( this->Items ) /*0x5c5675*/
      {
        v6 = this->Capacity; /*0x5c567c*/
        if ( a2 < v6 ) /*0x5c5681*/
          v6 = a2; /*0x5c5683*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5c5689*/
          ++i; /*0x5c568e*/
        if ( this->IsAllocated ) /*0x5c569b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5c56a6*/
          this->Items = 0; /*0x5c56ae*/
        }
      }
      this->Items = v4; /*0x5c56b7*/
      this->Capacity = a2; /*0x5c56bf*/
      this->IsAllocated = a3 == 0; /*0x5c56c2*/
      return 1; /*0x5c56c8*/
    }
    else
    {
      return 0; /*0x5c566f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5c56d2*/
    return 1; /*0x5c56d8*/
  }
}


// ==== 0x005C56E0  _VectorClass_PAVCoopCampaignClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall CoopCampaignVector::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5c56ed*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5c56f3*/
    *(_DWORD *)(this + 4) = 0; /*0x5c56fb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5c56fe*/
  *(_DWORD *)(this + 8) = 0; /*0x5c5701*/
}


// ==== 0x005C5710  _VectorClass_PAVCoopCampaignClass::Read  this=VectorClass  sig=csp ====
int __thiscall CoopCampaignVector::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5c5710*/
    return 0; /*0x5c5718*/
  v3 = *(_DWORD *)(this + 8); /*0x5c571e*/
  result = 0; /*0x5c5721*/
  if ( v3 <= 0 ) /*0x5c5725*/
    return -1; /*0x5c573c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5c572b*/
  {
    if ( ++result >= v3 ) /*0x5c573a*/
      return -1; /*0x5c573a*/
  }
  return result; /*0x5c571a*/
}


// ==== 0x005C5750  _VectorClass_PAVCoopCampaignClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall CoopCampaignVector::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5c5750*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5c5765*/
  else
    return 0; /*0x5c5757*/
}


// ==== 0x005C5770  ?$DynamicVectorClass@PAVCoopCampaignClass@@::broadcastMessage  this=DynamicVector  sig=csp ====
char __thiscall MPCooperative::sub_5C5770(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5c577c*/
  {
    this->IsInitialized = 0; /*0x5c5782*/
    if ( a3 ) /*0x5c5788*/
      v4 = a3; /*0x5c579e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5c579a*/
    this->IsInitialized = 1; /*0x5c57a2*/
    if ( !v4 ) /*0x5c57a6*/
      return 0; /*0x5c581a*/
    if ( this->Items ) /*0x5c57a8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5c57af*/
      if ( a2 < v5 ) /*0x5c57b4*/
        v5 = a2; /*0x5c57b6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5c57bc*/
        ++i; /*0x5c57c1*/
      if ( this->IsAllocated ) /*0x5c57ce*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5c57d9*/
        this->Items = 0; /*0x5c57e1*/
      }
    }
    this->Items = v4; /*0x5c57ea*/
    this->DynamicVector_field_0x8 = a2; /*0x5c57f2*/
    this->IsAllocated = a3 == 0; /*0x5c57f5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5c57fe*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5c5801*/
  if ( v7 < this->Items ) /*0x5c5809*/
    this->Items = v7; /*0x5c580b*/
  return 1; /*0x5c580e*/
}


// ==== 0x005C5820  ?$DynamicVectorClass@PAVCoopCampaignClass@@::handlePlayerReady  this=DynamicVector  sig=csp ====
int __thiscall MPCooperative::sub_5C5820(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5c5820*/
  result = 0; /*0x5c5823*/
  if ( v2 <= 0 ) /*0x5c5828*/
    return -1; /*0x5c583f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x5c582e*/
  {
    if ( ++result >= v2 ) /*0x5c583d*/
      return -1; /*0x5c583d*/
  }
  return result; /*0x5c5842*/
}


// ==== 0x005C5850  ?$VectorClass@PAUMPlayerScoreType@@::verifyGameIntegrity  this=VectorClass  sig=csp ====
VectorClass *__thiscall MPCooperative::verifyGameIntegrity(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5c5853*/
  *Block = &vt_VectorClass_MPlayerScoreType; /*0x5c5856*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5c5860*/
  {
    __3_YAXPAX_Z(v3); /*0x5c5868*/
    *(Block + 1) = 0; /*0x5c5870*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5c587b*/
  *(Block + 2) = 0; /*0x5c5881*/
  if ( (a2 & 1) != 0 ) /*0x5c5888*/
    __3_YAXPAX_Z(Block); /*0x5c588b*/
  return (VectorClass *)Block; /*0x5c5895*/
}


// ==== 0x005C58A0  ?$VectorClass@PAUNodeNameType@@::processVote  this=VectorClass  sig=csp ====
VectorClass *__thiscall MPCooperative::processVote(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5c58a3*/
  *Block = &vt_VectorClass_NodeNameType; /*0x5c58a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5c58b0*/
  {
    __3_YAXPAX_Z(v3); /*0x5c58b8*/
    *(Block + 1) = 0; /*0x5c58c0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5c58cb*/
  *(Block + 2) = 0; /*0x5c58d1*/
  if ( (a2 & 1) != 0 ) /*0x5c58d8*/
    __3_YAXPAX_Z(Block); /*0x5c58db*/
  return (VectorClass *)Block; /*0x5c58e5*/
}


// ==== 0x005C58F0  _DynamicVectorClass_PAUNodeNameType::Add  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall DynamicVectorClass_ptr_NodeNameType::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5c58f3*/
  *Block = &vt_VectorClass_NodeNameType; /*0x5c58f6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5c5900*/
  {
    __3_YAXPAX_Z(v3); /*0x5c5908*/
    *(Block + 1) = 0; /*0x5c5910*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5c591b*/
  *(Block + 2) = 0; /*0x5c5921*/
  if ( (a2 & 1) != 0 ) /*0x5c5928*/
    __3_YAXPAX_Z(Block); /*0x5c592b*/
  return (DynamicVector *)Block; /*0x5c5935*/
}


// ==== 0x005C5940  _VectorClass_PAVCoopCampaignClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall CoopCampaignVector::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5c5943*/
  *Block = &vt_VectorClass_CoopCampaignClass; /*0x5c5946*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5c5950*/
  {
    __3_YAXPAX_Z(v3); /*0x5c5958*/
    *(Block + 1) = 0; /*0x5c5960*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5c596b*/
  *(Block + 2) = 0; /*0x5c5971*/
  if ( (a2 & 1) != 0 ) /*0x5c5978*/
    __3_YAXPAX_Z(Block); /*0x5c597b*/
  return (VectorClass *)Block; /*0x5c5985*/
}


// ==== 0x005C5990  ?$DynamicVectorClass@PAVCoopCampaignClass@@::tallyVotes  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MPCooperative::tallyVotes(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5c5993*/
  *Block = &vt_VectorClass_CoopCampaignClass; /*0x5c5996*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5c59a0*/
  {
    __3_YAXPAX_Z(v3); /*0x5c59a8*/
    *(Block + 1) = 0; /*0x5c59b0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5c59bb*/
  *(Block + 2) = 0; /*0x5c59c1*/
  if ( (a2 & 1) != 0 ) /*0x5c59c8*/
    __3_YAXPAX_Z(Block); /*0x5c59cb*/
  return (DynamicVector *)Block; /*0x5c59d5*/
}


// ==== 0x005C59E0  MPCooperative::applyVoteResult  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_5C59E0(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x5c59eb*/
  this->Capacity = a2; /*0x5c59ee*/
  this->q030 = 1; /*0x5c59f1*/
  this->__pad_034 = 0; /*0x5c59f5*/
  *this = &vt_VectorClass_MPlayerScoreType; /*0x5c59f8*/
  if ( a2 ) /*0x5c59fe*/
  {
    if ( a3 ) /*0x5c5a06*/
    {
      this->Items = a3; /*0x5c5a08*/
      return this; /*0x5c5a0e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x5c5a1d*/
    this->__pad_034 = 1; /*0x5c5a20*/
  }
  return this; /*0x5c5a0d*/
}


// ==== 0x005C5A30  AbstractClass::updateAnimationState  this=VectorClass  sig=csp ====
_DWORD *__thiscall AbstractClass::updateAnimationState(
        _DWORD *this,
        MultiplayerGameMode *aP1,
        MultiplayerGameMode *aP2)
{
  this->Items = 0; /*0x5c5a3b*/
  this->Capacity = aP1; /*0x5c5a3e*/
  this->IsInitialized = 1; /*0x5c5a41*/
  this->IsAllocated = 0; /*0x5c5a45*/
  *this = &vt_VectorClass_NodeNameType; /*0x5c5a48*/
  if ( aP1 ) /*0x5c5a4e*/
  {
    if ( aP2 ) /*0x5c5a56*/
    {
      this->Items = aP2; /*0x5c5a58*/
      return this; /*0x5c5a5e*/
    }
    this->Items = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x5c5a6d*/
    this->IsAllocated = 1; /*0x5c5a70*/
  }
  return this; /*0x5c5a5d*/
}


// ==== 0x005C5A80  CoopCampaignVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall CoopCampaignVector::Construct(_DWORD *this, MultiplayerGameMode *aP1, MultiplayerGameMode *aP2)
{
  this->Items = 0; /*0x5c5a8b*/
  this->Capacity = aP1; /*0x5c5a8e*/
  this->q030 = 1; /*0x5c5a91*/
  this->__pad_034 = 0; /*0x5c5a95*/
  *this = &vt_VectorClass_CoopCampaignClass; /*0x5c5a98*/
  if ( aP1 ) /*0x5c5a9e*/
  {
    if ( aP2 ) /*0x5c5aa6*/
    {
      this->Items = aP2; /*0x5c5aa8*/
      return this; /*0x5c5aae*/
    }
    this->Items = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x5c5abd*/
    this->__pad_034 = 1; /*0x5c5ac0*/
  }
  return this; /*0x5c5aad*/
}


// ==== 0x005C5AD0  sub_5C5AD0  this=-  sig=ida-proto ====
int sub_5C5AD0()
{
  MEMORY[0xABF4A8] = 0; /*0x5c5ad2*/
  MEMORY[0xABF4AC] = 0; /*0x5c5ad7*/
  MEMORY[0xABF4B0] = 0; /*0x5c5adc*/
  MEMORY[0xABF4B4] = 0; /*0x5c5ae1*/
  return 0; /*0x5c5ae6*/
}


// ==== 0x005C5AF0  sub_5C5AF0  this=-  sig=ida-proto ====
void sub_5C5AF0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5c5afc*/
  MEMORY[0xABF4C0] = Math::Sqrt(v0 + v0); /*0x5c5b0e*/
}


// ==== 0x005C5B20  sub_5C5B20  this=-  sig=ida-proto ====
void sub_5C5B20()
{
  MEMORY[0xABF510] = MEMORY[0xABF4C0] / 60.0; /*0x5c5b2c*/
}


// ==== 0x005C5B40  sub_5C5B40  this=-  sig=ida-proto ====
void sub_5C5B40()
{
  MEMORY[0xABF4F8] = 1.0 / MEMORY[0xABF510]; /*0x5c5b4c*/
}


// ==== 0x005C5B60  sub_5C5B60  this=-  sig=ida-proto ====
void sub_5C5B60()
{
  MEMORY[0xABF4F0] = 0.0174532925199433 * 45.0; /*0x5c5b6c*/
}


// ==== 0x005C5B80  sub_5C5B80  this=-  sig=ida-proto ====
void sub_5C5B80()
{
  MEMORY[0xABF4C8] = 0.0174532925199433 * 60.0; /*0x5c5b8c*/
}


// ==== 0x005C5BA0  sub_5C5BA0  this=-  sig=ida-proto ====
void sub_5C5BA0()
{
  MEMORY[0xABF4A0] = 0.0174532925199433 * 90.0; /*0x5c5bac*/
}


// ==== 0x005C5BC0  sub_5C5BC0  this=-  sig=ida-proto ====
__int64 sub_5C5BC0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF4A0] - MEMORY[0xABF4C8]); /*0x5c5bd2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF4C0] * 0.5); /*0x5c5be6*/
  MEMORY[0xABF518] = result; /*0x5c5beb*/
  return result; /*0x5c5bf0*/
}


// ==== 0x005C5C00  sub_5C5C00  this=-  sig=ida-proto ====
void sub_5C5C00()
{
  MEMORY[0xABF4D0] = Math::ArcTan((double)MEMORY[0xABF518] * 0.00390625); /*0x5c5c17*/
}


// ==== 0x005C5C30  sub_5C5C30  this=-  sig=ida-proto ====
void sub_5C5C30()
{
  MEMORY[0xABF4E8] = Math::ArcTan((double)(2 * MEMORY[0xABF518]) / MEMORY[0xABF4C0]); /*0x5c5c52*/
}


// ==== 0x005C5C60  sub_5C5C60  this=-  sig=ida-proto ====
__int64 sub_5C5C60()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF518]) + 0.5); /*0x5c5c7b*/
  MEMORY[0xABF50C] = result; /*0x5c5c80*/
  return result; /*0x5c5c86*/
}


// ==== 0x005C5C90  sub_5C5C90  this=-  sig=ida-proto ====
int sub_5C5C90()
{
  MEMORY[0xABF4B8] = 0; /*0x5c5c92*/
  MEMORY[0xABF4BA] = 0; /*0x5c5c98*/
  return 0; /*0x5c5c9e*/
}


// ==== 0x005C5CA0  sub_5C5CA0  this=-  sig=ida-proto ====
int sub_5C5CA0()
{
  MEMORY[0xABF4D8] = 0; /*0x5c5ca2*/
  MEMORY[0xABF4DC] = 0; /*0x5c5ca7*/
  MEMORY[0xABF4E0] = 0; /*0x5c5cac*/
  return 0; /*0x5c5cb1*/
}


// ==== 0x005C5CC0  sub_5C5CC0  this=-  sig=ida-proto ====
int sub_5C5CC0()
{
  MEMORY[0xABF508] = 0; /*0x5c5cc5*/
  MEMORY[0xABF500] = 128; /*0x5c5ccf*/
  MEMORY[0xABF504] = 128; /*0x5c5cd4*/
  return 128; /*0x5c5cd9*/
}


// ==== 0x005C5CE0  MPBattleClass::MPFreeForAllClass  this=FreeForAll  sig=csp ====
_DWORD *__thiscall MPBattleClass::MPFreeForAllClass(
        FreeForAll *this,
        const wchar_t **a1,
        FreeForAll *aP2,
        const char **a3,
        FreeForAll *aP4,
        char aP5,
        FreeForAll *aP6)
{
  MultiplayerGameMode::Construct( /*0x5c5d03*/
    this,
    (MultiplayerGameMode *)a1,
    (MultiplayerGameMode *)aP2,
    (MultiplayerGameMode *)a3,
    (MultiplayerGameMode *)aP4,
    (MultiplayerGameMode *)aP5,
    (MultiplayerGameMode *)aP6);
  this->vfptr = &vt_FreeForAll; /*0x5c5d08*/
  return &this->vfptr; /*0x5c5d10*/
}


// ==== 0x005C5D20  FreeForAll::method_5C5D20  this=FreeForAll  sig=csp ====
void __thiscall sub_5C5D20(FreeForAll *this)
{
  this->vfptr = &vt_FreeForAll; /*0x5c5d20*/
  MultiplayerGameMode::Dtor(this); /*0x5c5d26*/
}


// ==== 0x005C5D30  PlayerClass::AssignPlayerIndex_0  this=FreeForAll  sig=ida-proto ====
// attributes: thunk
char __thiscall PlayerClass::AssignPlayerIndex_0(FreeForAll *this)
{
  return PlayerClass::AssignPlayerIndex();
}


// ==== 0x005C5D40  FreeForAll::Read  this=FreeForAll  sig=csp ====
char __thiscall StreamWrapper::Read(FreeForAll *this)
{
  char result; // al
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  int v5; // [esp+4h] [ebp+4h]

  result = ScenarioClass::MissionStubReturnZero2(v5); /*0x5c5d45*/
  if ( result ) /*0x5c5d4c*/
  {
    v2 = 0; /*0x5c5d57*/
    if ( MEMORY[0xA8D804].VoxelCaches[15] > 0 ) /*0x5c5d5b*/
    {
      v3 = MEMORY[0xA8D804].VoxelCaches[12]; /*0x5c5d5d*/
      do /*0x5c5d83*/
      {
        v4 = *(_DWORD *)(v3 + 4 * v2); /*0x5c5d67*/
        if ( *(_DWORD *)(v4 + 107) != -1 ) /*0x5c5d6d*/
        {
          *(_DWORD *)(v4 + 107) = v2; /*0x5c5d71*/
          v3 = MEMORY[0xA8D804].VoxelCaches[12]; /*0x5c5d74*/
        }
        ++v2; /*0x5c5d80*/
      }
      while ( v2 < MEMORY[0xA8D804].VoxelCaches[15] ); /*0x5c5d83*/
    }
    return 1; /*0x5c5d86*/
  }
  return result; /*0x5c5d4e*/
}


// ==== 0x005C5D90  FreeForAll::Write  this=FreeForAll  sig=csp ====
bool __thiscall StreamWrapper::Write(FreeForAll *this)
{
  bool result; // al
  int i; // eax
  int v3; // ecx

  result = ScenarioClass::createStartingForces((std::codecvt_base *)this); /*0x5c5d90*/
  if ( result ) /*0x5c5d97*/
  {
    for ( i = 0; i < *(int *)&MEMORY[0xA8D63C].__pad_430[24]; ++i ) /*0x5c5da4*/
    {
      v3 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * i); /*0x5c5daf*/
      if ( *(_DWORD *)(v3 + 107) != -1 ) /*0x5c5db5*/
        *(_DWORD *)(v3 + 107) = i; /*0x5c5db7*/
    }
    return 1; /*0x5c5dc5*/
  }
  return result; /*0x5c5d99*/
}


// ==== 0x005C5DD0  FreeForAll::Seek  this=FreeForAll  sig=csp ====
LRESULT __thiscall StreamWrapper::Seek(FreeForAll *this, HWND hWnd, MultiplayerGameMode *aP2)
{
  int Data; // eax
  int v5; // eax

  ListBox::Clear(hWnd); /*0x5c5dda*/
  Data = StreamWrapper::readData(this, (int)aP2); /*0x5c5de6*/
  if ( Data ) /*0x5c5ded*/
    MPCombatTeam::AddToList(Data, (MultiplayerGameMode *)hWnd); /*0x5c5df2*/
  v5 = StreamWrapper::readData(this, -1); /*0x5c5dfb*/
  if ( v5 ) /*0x5c5e02*/
    MPCombatTeam::AddToList(v5, (MultiplayerGameMode *)hWnd); /*0x5c5e07*/
  return SendMessageA(hWnd, 0x14Eu, 0, 0); /*0x5c5e1c*/
}


// ==== 0x005C5E30  FreeForAll::processTriggerEvents  this=FreeForAll  sig=csp ====
char __thiscall ScenarioClass::processTriggerEvents(FreeForAll *this)
{
  return 1; /*0x5c5e32*/
}


// ==== 0x005C5E40  FreeForAll::executeTriggerActions  this=FreeForAll  sig=csp ====
_DWORD *__thiscall ScenarioClass::executeTriggerActions(FreeForAll *this, char a2)
{
  this->vfptr = &vt_FreeForAll; /*0x5c5e43*/
  MultiplayerGameMode::Dtor(this); /*0x5c5e49*/
  if ( (a2 & 1) != 0 ) /*0x5c5e53*/
    __3_YAXPAX_Z(this); /*0x5c5e56*/
  return &this->vfptr; /*0x5c5e60*/
}


// ==== 0x005C5E70  sub_5C5E70  this=-  sig=ida-proto ====
int sub_5C5E70()
{
  MEMORY[0xABF528] = 0; /*0x5c5e72*/
  MEMORY[0xABF52C] = 0; /*0x5c5e77*/
  MEMORY[0xABF530] = 0; /*0x5c5e7c*/
  MEMORY[0xABF534] = 0; /*0x5c5e81*/
  return 0; /*0x5c5e86*/
}


// ==== 0x005C5E90  sub_5C5E90  this=-  sig=ida-proto ====
void sub_5C5E90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5c5e9c*/
  MEMORY[0xABF540] = Math::Sqrt(v0 + v0); /*0x5c5eae*/
}


// ==== 0x005C5EC0  sub_5C5EC0  this=-  sig=ida-proto ====
void sub_5C5EC0()
{
  MEMORY[0xABF590] = MEMORY[0xABF540] / 60.0; /*0x5c5ecc*/
}


// ==== 0x005C5EE0  sub_5C5EE0  this=-  sig=ida-proto ====
void sub_5C5EE0()
{
  MEMORY[0xABF578] = 1.0 / MEMORY[0xABF590]; /*0x5c5eec*/
}


// ==== 0x005C5F00  sub_5C5F00  this=-  sig=ida-proto ====
void sub_5C5F00()
{
  MEMORY[0xABF570] = 0.0174532925199433 * 45.0; /*0x5c5f0c*/
}


// ==== 0x005C5F20  sub_5C5F20  this=-  sig=ida-proto ====
void sub_5C5F20()
{
  MEMORY[0xABF548] = 0.0174532925199433 * 60.0; /*0x5c5f2c*/
}


// ==== 0x005C5F40  sub_5C5F40  this=-  sig=ida-proto ====
void sub_5C5F40()
{
  MEMORY[0xABF520] = 0.0174532925199433 * 90.0; /*0x5c5f4c*/
}


// ==== 0x005C5F60  sub_5C5F60  this=-  sig=ida-proto ====
__int64 sub_5C5F60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF520] - MEMORY[0xABF548]); /*0x5c5f72*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF540] * 0.5); /*0x5c5f86*/
  MEMORY[0xABF598] = result; /*0x5c5f8b*/
  return result; /*0x5c5f90*/
}


// ==== 0x005C5FA0  sub_5C5FA0  this=-  sig=ida-proto ====
void sub_5C5FA0()
{
  MEMORY[0xABF550] = Math::ArcTan((double)MEMORY[0xABF598] * 0.00390625); /*0x5c5fb7*/
}


// ==== 0x005C5FD0  sub_5C5FD0  this=-  sig=ida-proto ====
void sub_5C5FD0()
{
  MEMORY[0xABF568] = Math::ArcTan((double)(2 * MEMORY[0xABF598]) / MEMORY[0xABF540]); /*0x5c5ff2*/
}


// ==== 0x005C6000  sub_5C6000  this=-  sig=ida-proto ====
__int64 sub_5C6000()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF598]) + 0.5); /*0x5c601b*/
  MEMORY[0xABF58C] = result; /*0x5c6020*/
  return result; /*0x5c6026*/
}


// ==== 0x005C6030  sub_5C6030  this=-  sig=ida-proto ====
int sub_5C6030()
{
  MEMORY[0xABF538] = 0; /*0x5c6032*/
  MEMORY[0xABF53A] = 0; /*0x5c6038*/
  return 0; /*0x5c603e*/
}


// ==== 0x005C6040  sub_5C6040  this=-  sig=ida-proto ====
int sub_5C6040()
{
  MEMORY[0xABF558] = 0; /*0x5c6042*/
  MEMORY[0xABF55C] = 0; /*0x5c6047*/
  MEMORY[0xABF560] = 0; /*0x5c604c*/
  return 0; /*0x5c6051*/
}


// ==== 0x005C6060  sub_5C6060  this=-  sig=ida-proto ====
int sub_5C6060()
{
  MEMORY[0xABF588] = 0; /*0x5c6065*/
  MEMORY[0xABF580] = 128; /*0x5c606f*/
  MEMORY[0xABF584] = 128; /*0x5c6074*/
  return 128; /*0x5c6079*/
}


// ==== 0x005C6080  sub_5C6080  this=unknown  sig=csp ====
int __stdcall sub_5C6080(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x5c6099*/
  if ( !result ) /*0x5c60a0*/
  {
    if ( a2 == 273 ) /*0x5c60a8*/
      *(_DWORD *)GetWindowLongA(hWnd, 8) = (unsigned __int16)a3; /*0x5c60b9*/
    return 0; /*0x5c60bb*/
  }
  return result; /*0x5c60bd*/
}


// ==== 0x005C60D0  ShowConfirmDialog  this=IUnknown  sig=csp ====
BOOL __thiscall ShowConfirmDialog(_WORD *lParam)
{
  wchar_t *v3; // eax
  wchar_t *StringCSF; // [esp-Ch] [ebp-14h]
  int v6; // [esp+0h] [ebp-8h]

  StringCSF = GetStringCSF(g_Str_TXT_CANCEL, 0, aDRa2mdpostMpla, 108); /*0x5c60fa*/
  v3 = GetStringCSF(g_Str_TXT_OK, 0, aDRa2mdpostMpla, 108); /*0x5c6102*/
  return Dialog::ShowMessageBox((int)lParam, v3, (Movie *)StringCSF, 0, 0, v6) == 0; /*0x5c6116*/
}


// ==== 0x005C6120  PtrVector::Destroy  this=int  sig=csp ====
int __thiscall PtrVector_Destroy(_DWORD *this)
{
  int i; // edi

  for ( i = 0; i < *(this + 4); ++i ) /*0x5c612b*/
    __3_YAXPAX_Z(*(void **)(*(this + 1) + 4 * i)); /*0x5c6134*/
  return (*(int (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x5c614b*/
}


// ==== 0x005C6150  MPBattleClass::MPManBattleClass  this=MultiplayerManBattle  sig=csp ====
_DWORD *__thiscall MPBattleClass::MPManBattleClass(
        _DWORD *this,
        const wchar_t **a1,
        MultiplayerManBattle *aP2,
        const char **a3,
        MultiplayerManBattle *aP4,
        char aP5,
        MultiplayerManBattle *aP6)
{
  MultiplayerGameMode::Construct( /*0x5c6173*/
    this,
    (MultiplayerGameMode *)a1,
    (MultiplayerGameMode *)aP2,
    (MultiplayerGameMode *)a3,
    (MultiplayerGameMode *)aP4,
    (MultiplayerGameMode *)aP5,
    (MultiplayerGameMode *)aP6);
  *this = &vt_MultiplayerManBattle; /*0x5c6178*/
  return this; /*0x5c6180*/
}


// ==== 0x005C6190  MultiplayerManBattle::method_5C6190  this=MultiplayerManBattle  sig=csp ====
void __thiscall sub_5C6190(void *this)
{
  *(_DWORD *)this = &vt_MultiplayerManBattle; /*0x5c6190*/
  MultiplayerGameMode::Dtor(this); /*0x5c6196*/
}


// ==== 0x005C61A0  MultiplayerManBattle::QueryInterface  this=MultiplayerManBattle  sig=csp ====
MultiplayerManBattle *__thiscall MultiplayerManBattle::QueryInterface(_DWORD *Block, char a2)
{
  *Block = &vt_MultiplayerManBattle; /*0x5c61a3*/
  MultiplayerGameMode::Dtor(Block); /*0x5c61a9*/
  if ( (a2 & 1) != 0 ) /*0x5c61b3*/
    __3_YAXPAX_Z(Block); /*0x5c61b6*/
  return (MultiplayerManBattle *)Block; /*0x5c61c0*/
}


// ==== 0x005C61D0  Hash_Check  this=-  sig=ida-proto ====
void *sub_5C61D0()
{
  return &unk_82E174; /*0x5c61d5*/
}


// ==== 0x005C61E0  Hash_Check_5C61E0  this=unknown  sig=csp ====
int sub_5C61E0()
{
  return 3511; /*0x5c61e5*/
}


// ==== 0x005C6230  sub_5C6230  this=-  sig=ida-proto ====
int __fastcall sub_5C6230(unsigned int a1, _BYTE *a2)
{
  int result; // eax
  char v5; // al
  int i; // ecx
  int v7; // esi
  int j; // ecx
  int v9; // ecx
  unsigned int v10; // ebx

  if ( a1 > 0x7F ) /*0x5c623a*/
  {
    v5 = 4; /*0x5c6247*/
    for ( i = 24; i != -8; i -= 8 ) /*0x5c624c*/
    {
      if ( a1 >> i ) /*0x5c6253*/
        break; /*0x5c6257*/
      --v5; /*0x5c625c*/
    }
    v7 = 4; /*0x5c6264*/
    *a2 = v5 | 0x80; /*0x5c6269*/
    result = 1; /*0x5c626b*/
    for ( j = 24; j != -8; j -= 8 ) /*0x5c6270*/
    {
      if ( a1 >> j ) /*0x5c6277*/
        break; /*0x5c627b*/
      --v7; /*0x5c6280*/
    }
    if ( v7 ) /*0x5c6288*/
    {
      v9 = 8 * v7 - 8; /*0x5c628a*/
      do /*0x5c629e*/
      {
        v10 = a1 >> v9; /*0x5c6293*/
        ++result; /*0x5c6295*/
        v9 -= 8; /*0x5c6296*/
        --v7; /*0x5c6299*/
        a2[result - 1] = v10; /*0x5c629a*/
      }
      while ( v7 ); /*0x5c629e*/
    }
  }
  else
  {
    *a2 = a1; /*0x5c623c*/
    return 1; /*0x5c6240*/
  }
  return result; /*0x5c623e*/
}


// ==== 0x005C62B0  EncodeVarInt  this=unknown  sig=csp ====
int __fastcall VarInt_Encode(int a1, _BYTE *a2, int a3)
{
  unsigned int v4; // eax
  int v5; // edx
  char v6; // dl
  int i; // ecx
  int v8; // edi
  int j; // ecx
  int v10; // esi
  unsigned int v11; // ebx
  _BYTE v13[260]; // [esp+10h] [ebp-104h] BYREF

  v4 = EncodeVarInt_Helper(a3); /*0x5c62c7*/
  *a2 = 2; /*0x5c62cf*/
  if ( v4 > 0x7F ) /*0x5c62d3*/
  {
    v6 = 4; /*0x5c62df*/
    for ( i = 24; i != -8; i -= 8 ) /*0x5c62e4*/
    {
      if ( v4 >> i ) /*0x5c62eb*/
        break; /*0x5c62ef*/
      --v6; /*0x5c62f4*/
    }
    v8 = 4; /*0x5c62fd*/
    a2[1] = v6 | 0x80; /*0x5c6302*/
    v5 = 1; /*0x5c6305*/
    for ( j = 24; j != -8; j -= 8 ) /*0x5c630a*/
    {
      if ( v4 >> j ) /*0x5c6311*/
        break; /*0x5c6315*/
      --v8; /*0x5c631a*/
    }
    if ( v8 ) /*0x5c6322*/
    {
      v10 = 8 * v8 - 8; /*0x5c6324*/
      do /*0x5c6339*/
      {
        v11 = v4 >> v10; /*0x5c632f*/
        ++v5; /*0x5c6331*/
        v10 -= 8; /*0x5c6332*/
        --v8; /*0x5c6335*/
        a2[v5] = v11; /*0x5c6336*/
      }
      while ( v8 ); /*0x5c6339*/
    }
  }
  else
  {
    a2[1] = v4; /*0x5c62d5*/
    v5 = 1; /*0x5c62d8*/
  }
  qmemcpy(&a2[v5 + 1], v13, v4); /*0x5c634a*/
  return v4 + v5 + 1; /*0x5c6357*/
}


// ==== 0x005C6370  DecodeLengthLCW  this=unknown  sig=csp ====
char __fastcall LCW_DecodeLength(int a1, _BYTE *a2, int a3)
{
  int v3; // eax
  _BYTE *v4; // edx
  int v6; // edi
  unsigned __int8 *v7; // edx
  int v8; // ecx
  int v9; // esi
  char *v10; // ebx
  char v11; // al
  int v12; // edx
  _BYTE *v13; // ecx
  char v14; // dl

  LOBYTE(v3) = *a2; /*0x5c6370*/
  v4 = a2 + 1; /*0x5c6374*/
  if ( (_BYTE)v3 != 2 ) /*0x5c637b*/
    return v3; /*0x5c637b*/
  if ( (char)*v4 < 0 ) /*0x5c6381*/
  {
    v3 = *v4 & 0x7F; /*0x5c638c*/
    v7 = v4 + 1; /*0x5c638f*/
    if ( v3 > 2 ) /*0x5c6393*/
      return v3; /*0x5c6393*/
    v8 = *v7; /*0x5c6397*/
    v4 = v7 + 1; /*0x5c6399*/
    v6 = v8; /*0x5c639d*/
    if ( v3 <= 1 ) /*0x5c639f*/
      goto LABEL_8; /*0x5c639f*/
    v3 = (unsigned __int8)*v4; /*0x5c63a3*/
    v6 = v3 | (v8 << 8); /*0x5c63a8*/
  }
  else
  {
    LOBYTE(v3) = *v4; /*0x5c6383*/
    v6 = (unsigned __int8)*v4; /*0x5c6388*/
  }
  ++v4; /*0x5c63aa*/
LABEL_8:
  v9 = 4 * a3; /*0x5c63ab*/
  if ( v6 <= (unsigned int)(4 * a3) ) /*0x5c63b8*/
  {
    v10 = v4; /*0x5c63bc*/
    v11 = *v4 & 0x80; /*0x5c63be*/
    v12 = v9 - v6; /*0x5c63c6*/
    LOBYTE(v3) = -(v11 != 0); /*0x5c63c8*/
    v13 = (_BYTE *)(v9 + a1); /*0x5c63cd*/
    if ( v9 - v6 > 0 ) /*0x5c63d2*/
    {
      do /*0x5c63d8*/
      {
        --v13; /*0x5c63d4*/
        --v12; /*0x5c63d5*/
        *v13 = v3; /*0x5c63d6*/
      }
      while ( v12 ); /*0x5c63d8*/
    }
    if ( v6 > 0 ) /*0x5c63dc*/
    {
      do /*0x5c63e5*/
      {
        v14 = *v10; /*0x5c63de*/
        --v13; /*0x5c63e0*/
        ++v10; /*0x5c63e1*/
        --v6; /*0x5c63e2*/
        *v13 = v14; /*0x5c63e3*/
      }
      while ( v6 ); /*0x5c63e5*/
    }
  }
  return v3; /*0x5c63e7*/
}


// ==== 0x005C63F0  ObjectClass::method_5C63F0  this=ObjectClass  sig=csp ====
unsigned int __userpurge __spoils<ecx> sub_5C63F0@<eax>(
        unsigned int a1@<edx>,
        _BYTE *a2@<ecx>,
        int a3@<ebx>,
        int a4,
        int a5)
{
  _BYTE *v5; // edi
  unsigned int v6; // esi
  unsigned int v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  unsigned int i; // ebp
  unsigned int v12; // eax
  char v13; // al

  v5 = a2; /*0x5c63fa*/
  v6 = 4 * a5; /*0x5c63fc*/
  v7 = a1 - 4 * a5; /*0x5c6426*/
  if ( a1 != 4 * a5 ) /*0x5c6428*/
  {
    LOBYTE(a3) = (*(_DWORD *)(4 * a5 + a4 - 4) >= 0) - 1; /*0x5c642b*/
    BYTE1(a3) = a3; /*0x5c642d*/
    v8 = a3 << 16; /*0x5c6435*/
    LOWORD(v8) = a3; /*0x5c6438*/
    memset32(a2, v8, v7 >> 2); /*0x5c643f*/
    memset(&a2[4 * (v7 >> 2)], a3, v7 & 3); /*0x5c644a*/
    v5 = &a2[v7]; /*0x5c6450*/
  }
  v9 = a1; /*0x5c6454*/
  if ( a1 >= v6 ) /*0x5c6456*/
    v9 = 4 * a5; /*0x5c6458*/
  v10 = v9 + a4; /*0x5c645e*/
  for ( i = 0; ; ++i ) /*0x5c6460*/
  {
    v12 = a1; /*0x5c6464*/
    if ( a1 >= v6 ) /*0x5c6466*/
      v12 = 4 * a5; /*0x5c6468*/
    if ( i >= v12 ) /*0x5c646c*/
      break; /*0x5c646c*/
    v13 = *(_BYTE *)--v10; /*0x5c646e*/
    *v5++ = v13; /*0x5c6472*/
  }
  return a1; /*0x5c6478*/
}


// ==== 0x005C6490  EncodeVarInt_Helper  this=unknown  sig=csp ====
int __fastcall sub_5C6490(_BYTE *a1, char *a2, int a3)
{
  char *v4; // esi
  char i; // bl
  int v6; // edi
  int j; // edi
  char v8; // cl

  v4 = &a2[a3 - 1]; /*0x5c64a4*/
  for ( i = -(*(int *)&a2[4 * a3 - 4] < 0); v4 > a2; --v4 ) /*0x5c64b5*/
  {
    if ( *v4 != i ) /*0x5c64b9*/
      break; /*0x5c64b9*/
  }
  v6 = 0; /*0x5c64c2*/
  if ( *v4 < 0 && *(int *)&a2[4 * a3 - 4] >= 0 || (*v4 & 0x80) == 0 && *(int *)&a2[4 * a3 - 4] < 0 ) /*0x5c64d2*/
  {
    *a1 = i; /*0x5c64d4*/
    v6 = 1; /*0x5c64d7*/
  }
  a1[v6] = *v4; /*0x5c64de*/
  for ( j = v6 + 1; v4 != a2; ++j ) /*0x5c64e4*/
  {
    v8 = *--v4; /*0x5c64e6*/
    a1[j] = v8; /*0x5c64ea*/
  }
  return j; /*0x5c64f4*/
}


// ==== 0x005C6500  sub_5C6500  this=-  sig=ida-proto ====
char __fastcall sub_5C6500(int a1, char *a2, int a3, int a4)
{
  int v4; // esi
  char result; // al
  char *v6; // ecx
  int v7; // esi

  v4 = 4 * a4 - a3; /*0x5c651c*/
  result = -(*a2 < 0); /*0x5c651e*/
  v6 = (char *)(4 * a4 + a1); /*0x5c6523*/
  if ( v4 > 0 ) /*0x5c6527*/
  {
    do /*0x5c652d*/
    {
      --v6; /*0x5c6529*/
      --v4; /*0x5c652a*/
      *v6 = result; /*0x5c652b*/
    }
    while ( v4 ); /*0x5c652d*/
  }
  if ( a3 > 0 ) /*0x5c6531*/
  {
    v7 = a3; /*0x5c6533*/
    do /*0x5c653c*/
    {
      result = *a2; /*0x5c6535*/
      --v6; /*0x5c6537*/
      ++a2; /*0x5c6538*/
      --v7; /*0x5c6539*/
      *v6 = result; /*0x5c653a*/
    }
    while ( v7 ); /*0x5c653c*/
  }
  return result; /*0x5c653e*/
}


// ==== 0x005C6550  sub_5C6550  this=-  sig=ida-proto ====
char __fastcall sub_5C6550(int a1, _BYTE *a2, int a3, int a4)
{
  _BYTE *v4; // ecx
  int v5; // eax
  int v6; // esi

  v4 = (_BYTE *)(4 * a4 + a1); /*0x5c6563*/
  v5 = 4 * a4 - a3; /*0x5c6565*/
  if ( v5 > 0 ) /*0x5c6569*/
  {
    do /*0x5c6570*/
    {
      --v4; /*0x5c656b*/
      --v5; /*0x5c656c*/
      *v4 = 0; /*0x5c656d*/
    }
    while ( v5 ); /*0x5c6570*/
  }
  if ( a3 > 0 ) /*0x5c6574*/
  {
    v6 = a3; /*0x5c6576*/
    do /*0x5c657f*/
    {
      LOBYTE(v5) = *a2; /*0x5c6578*/
      --v4; /*0x5c657a*/
      ++a2; /*0x5c657b*/
      --v6; /*0x5c657c*/
      *v4 = v5; /*0x5c657d*/
    }
    while ( v6 ); /*0x5c657f*/
  }
  return v5; /*0x5c6581*/
}


// ==== 0x005C65B0  BigInt_Helper  this=unknown  sig=csp ====
int __fastcall sub_5C65B0(int *a1, int a2)
{
  int result; // eax

  result = *a1 + 1; /*0x5c65b2*/
  for ( *a1 = result; !result; *a1 = result ) /*0x5c65b5*/
  {
    ++a1; /*0x5c65b7*/
    if ( !--a2 ) /*0x5c65bb*/
      break; /*0x5c65bb*/
    result = *a1 + 1; /*0x5c65bf*/
  }
  return result; /*0x5c65c4*/
}


// ==== 0x005C6660  RotateBitBufferRight  this=int  sig=csp ====
void __fastcall BitBuffer_RotateRight(_DWORD *a1, int a2, int a3)
{
  int v4; // ecx
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // edx
  int *v9; // esi
  char v10; // bp
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  char v14; // cl
  int v15; // ebp
  int v16; // eax
  int v17; // edi
  int v18; // ebx
  int v19; // ebx
  unsigned int v20; // ebp
  bool v21; // zf
  int v22; // edx
  int i; // edx
  int v24; // ecx
  int v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+10h] [ebp-8h]
  int v27; // [esp+1Ch] [ebp+4h]

  v4 = 0; /*0x5c666b*/
  if ( a2 ) /*0x5c666f*/
  {
    if ( a2 == 32 ) /*0x5c6674*/
    {
      v5 = &a1[a3]; /*0x5c667a*/
      if ( a3 ) /*0x5c6682*/
      {
        v6 = a3; /*0x5c6684*/
        do /*0x5c6692*/
        {
          v7 = *--v5; /*0x5c6687*/
          --v6; /*0x5c668d*/
          *v5 = v4; /*0x5c668e*/
          v4 = v7; /*0x5c6690*/
        }
        while ( v6 ); /*0x5c6692*/
      }
    }
    else if ( a2 >= 32 ) /*0x5c669e*/
    {
      v16 = a2 / 32; /*0x5c6715*/
      v17 = a2 % 32; /*0x5c6724*/
      v18 = a3; /*0x5c6725*/
      if ( a2 / 32 < a3 - 1 ) /*0x5c672e*/
      {
        v26 = a3 - 1 - v16; /*0x5c6739*/
        do /*0x5c675d*/
        {
          v19 = a1[v16 + 1]; /*0x5c673d*/
          v20 = a1[v16]; /*0x5c6741*/
          ++a1; /*0x5c6746*/
          v21 = v26 == 1; /*0x5c6755*/
          *(a1 - 1) = (v20 >> v17) | (v19 << (32 - v17)); /*0x5c6756*/
          --v26; /*0x5c6759*/
        }
        while ( !v21 ); /*0x5c675d*/
        v18 = a3; /*0x5c675f*/
      }
      if ( v16 < v18 ) /*0x5c6765*/
      {
        v22 = a1[v16] >> v17; /*0x5c676c*/
        *a1++ = v22; /*0x5c6771*/
      }
      for ( i = 0; ; ++i ) /*0x5c6774*/
      {
        v24 = v16; /*0x5c6778*/
        if ( v16 >= v18 ) /*0x5c677a*/
          v24 = v18; /*0x5c677c*/
        if ( i >= v24 ) /*0x5c6780*/
          break; /*0x5c6780*/
        *a1++ = 0; /*0x5c6786*/
      }
    }
    else
    {
      v27 = 0; /*0x5c66a4*/
      v9 = &a1[a3]; /*0x5c66b6*/
      v10 = 32 - a2; /*0x5c66b9*/
      v11 = a3; /*0x5c66bb*/
      v12 = a3 - 1; /*0x5c66c2*/
      if ( v11 ) /*0x5c66c5*/
      {
        v25 = v12 + 1; /*0x5c66c8*/
        while ( 1 ) /*0x5c66d2*/
        {
          v13 = *--v9; /*0x5c66d2*/
          v14 = v10; /*0x5c66e8*/
          v15 = v27; /*0x5c66ea*/
          v27 = ((1 << a2) - 1) & v13; /*0x5c66ee*/
          *v9 = (v15 << v14) | (v13 >> a2); /*0x5c66f6*/
          if ( !--v25 ) /*0x5c6701*/
            break; /*0x5c6701*/
          v10 = 32 - a2; /*0x5c66ce*/
        }
      }
    }
  }
}


// ==== 0x005C67A0  RotateBitBufferLeft  this=int  sig=csp ====
void __fastcall RotateBitBufferLeft(int *a0, int a2, Buffer *aP2)
{
  char v3; // di
  int *v4; // esi
  int v5; // eax
  Buffer *v6; // edx
  int v7; // ecx
  unsigned int j; // ebp
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // edi
  Buffer *v13; // ebx
  int *v14; // edx
  int *v15; // ebx
  int *v16; // ebp
  bool v17; // zf
  int v18; // esi
  int i; // esi
  Buffer *v20; // ecx
  char v21; // [esp+10h] [ebp-4h]
  char *v22; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x5c67a5*/
  v4 = a0; /*0x5c67a7*/
  if ( a2 ) /*0x5c67ab*/
  {
    if ( a2 == 32 ) /*0x5c67b0*/
    {
      v5 = 0; /*0x5c67b6*/
      if ( aP2 ) /*0x5c67bd*/
      {
        v6 = aP2; /*0x5c67bf*/
        do /*0x5c67cc*/
        {
          v7 = *v4; /*0x5c67c2*/
          *v4++ = v5; /*0x5c67c4*/
          v6 = (Buffer *)((char *)v6 - 1); /*0x5c67c9*/
          v5 = v7; /*0x5c67ca*/
        }
        while ( v6 ); /*0x5c67cc*/
      }
    }
    else if ( a2 >= 32 ) /*0x5c67d6*/
    {
      v11 = a2 / 32; /*0x5c6833*/
      v12 = a2 % 32; /*0x5c6842*/
      v13 = aP2; /*0x5c6843*/
      v14 = &a0[(_DWORD)aP2 - 1]; /*0x5c684a*/
      if ( v11 < (int)&aP2[-1].Buffer_field_24 + 3 ) /*0x5c6850*/
      {
        v22 = (char *)&aP2[-1].Buffer_field_24 - v11 + 3; /*0x5c685b*/
        do /*0x5c6893*/
        {
          v15 = &v14[-v11 - 1]; /*0x5c6868*/
          v16 = v14--; /*0x5c686c*/
          v17 = v22 == (char *)1; /*0x5c688b*/
          v14[1] = (v16[-v11] << v12) | ((unsigned int)*v15 >> (32 - v12)); /*0x5c688c*/
          --v22; /*0x5c688f*/
        }
        while ( !v17 ); /*0x5c6893*/
        v13 = aP2; /*0x5c6895*/
      }
      if ( v11 < (int)v13 ) /*0x5c689b*/
      {
        v18 = v14[-v11] << v12; /*0x5c68ac*/
        --v14; /*0x5c68ae*/
        v14[1] = v18; /*0x5c68b1*/
      }
      for ( i = 0; ; ++i ) /*0x5c68b4*/
      {
        v20 = (Buffer *)v11; /*0x5c68b8*/
        if ( v11 >= (int)v13 ) /*0x5c68ba*/
          v20 = v13; /*0x5c68bc*/
        if ( i >= (int)v20 ) /*0x5c68c0*/
          break; /*0x5c68c0*/
        *v14-- = 0; /*0x5c68c6*/
      }
    }
    else
    {
      v21 = 32 - a2; /*0x5c67e4*/
      for ( j = 0; aP2; aP2 = (Buffer *)((char *)aP2 - 1) ) /*0x5c67f7*/
      {
        v9 = *v4++; /*0x5c6802*/
        v10 = (j >> v21) | (v9 << v3); /*0x5c6811*/
        j = ~(0xFFFFFFFF >> v3) & v9; /*0x5c6813*/
        *(v4 - 1) = v10; /*0x5c6815*/
      }
    }
  }
}


// ==== 0x005C6940  InitArrayWithValue  this=int  sig=csp ====
int __fastcall InitArrayWithValue(_DWORD *a0, int a2, AbstractClass *aP2)
{
  memset(a0, 0, 4 * (_DWORD)aP2); /*0x5c694c*/
  *a0 = a2; /*0x5c694e*/
  return 0; /*0x5c6950*/
}


// ==== 0x005C6960  FindBitArrayHighestBit  this=VOID_PTR  sig=ida-proto ====
int __fastcall BitArray_FindHighestBit(int a1, int a2)
{
  _DWORD *v2; // eax
  int v3; // esi
  int result; // eax
  int v6; // ecx
  unsigned int v7; // edx

  v2 = (_DWORD *)(a1 + 4 * a2 - 4); /*0x5c6960*/
  v3 = a2; /*0x5c6965*/
  if ( !*v2 ) /*0x5c6967*/
  {
    while ( --v3 ) /*0x5c696c*/
    {
      if ( *--v2 ) /*0x5c696f*/
        goto LABEL_4; /*0x5c6977*/
    }
    return 0; /*0x5c696d*/
  }
LABEL_4:
  if ( !v3 ) /*0x5c697b*/
    return 0; /*0x5c6980*/
  v6 = *(_DWORD *)(a1 + 4 * v3 - 4); /*0x5c6981*/
  v7 = 0x80000000; /*0x5c6987*/
  result = 32 * v3; /*0x5c698c*/
  if ( v6 >= 0 ) /*0x5c6991*/
  {
    do /*0x5c6998*/
    {
      v7 >>= 1; /*0x5c6993*/
      --result; /*0x5c6995*/
    }
    while ( (v6 & v7) == 0 ); /*0x5c6998*/
  }
  return result; /*0x5c697f*/
}


// ==== 0x005C69E0  CompareBigIntLE  this=unknown  sig=csp ====
int __fastcall CompareBigIntLE(int a1, int a2, int a3)
{
  int v3; // edi
  unsigned int v4; // eax
  _DWORD *v5; // esi
  unsigned int v6; // ecx
  _DWORD *v7; // edx
  bool v8; // cc

  v3 = a3; /*0x5c69e2*/
  v4 = *(_DWORD *)(a1 + 4 * a3 - 4); /*0x5c69e6*/
  v5 = (_DWORD *)(a1 + 4 * a3 - 4); /*0x5c69ea*/
  v6 = *(_DWORD *)(a2 + 4 * a3 - 4); /*0x5c69ee*/
  v7 = (_DWORD *)(a2 + 4 * a3 - 4); /*0x5c69f2*/
  v8 = v4 <= v6; /*0x5c69f6*/
  if ( v4 < v6 ) /*0x5c69f8*/
    return -1; /*0x5c6a0d*/
  while ( 1 ) /*0x5c69fa*/
  {
    if ( !v8 ) /*0x5c69fa*/
      return 1; /*0x5c6a1c*/
    --v5; /*0x5c69fc*/
    --v7; /*0x5c69ff*/
    if ( !--v3 ) /*0x5c6a03*/
      break; /*0x5c6a03*/
    v8 = *v5 <= *v7; /*0x5c6a09*/
    if ( *v5 < *v7 ) /*0x5c6a0b*/
      return -1; /*0x5c6a0b*/
  }
  return 0; /*0x5c6a0d*/
}


// ==== 0x005C6A30  Crypto_Helper  this=unknown  sig=csp ====
bool __fastcall Crypto_Helper(unsigned int *a0, unsigned int *a1, _DWORD *a2, Crypto *aP3, int a5)
{
  bool result; // al
  unsigned int v7; // esi
  unsigned int v8; // edi

  if ( !a5 ) /*0x5c6a3a*/
    return (char)aP3; /*0x5c6a92*/
  result = (char)aP3; /*0x5c6a47*/
  do /*0x5c6a89*/
  {
    v7 = *a1 + *a2; /*0x5c6a55*/
    v8 = v7 + (unsigned __int8)aP3; /*0x5c6a5d*/
    result = v7 < *a1 || result && !v8; /*0x5c6a6f*/
    *a0 = v8; /*0x5c6a75*/
    ++a2; /*0x5c6a77*/
    ++a1; /*0x5c6a7a*/
    ++a0; /*0x5c6a7d*/
    LOBYTE(aP3) = result; /*0x5c6a81*/
    --a5; /*0x5c6a85*/
  }
  while ( a5 ); /*0x5c6a89*/
  return result; /*0x5c6a8e*/
}


// ==== 0x005C6AA0  sub_5C6AA0  this=unknown  sig=csp ====
bool __fastcall sub_5C6AA0(unsigned int *a1, unsigned int *a2, int a3, bool a4, int a5)
{
  int v6; // ebp
  bool result; // al
  unsigned int v8; // ebx
  unsigned int v9; // esi

  if ( !a5 ) /*0x5c6aaa*/
    return a4; /*0x5c6af4*/
  v6 = a5; /*0x5c6ab2*/
  result = a4; /*0x5c6ab5*/
  do /*0x5c6aeb*/
  {
    v8 = *a2 + a3; /*0x5c6ac0*/
    v9 = v8 + a4; /*0x5c6ac8*/
    result = v8 < *a2 || result && !v9; /*0x5c6ada*/
    *a1 = v9; /*0x5c6adc*/
    a3 = 0; /*0x5c6ade*/
    ++a2; /*0x5c6ae0*/
    ++a1; /*0x5c6ae3*/
    --v6; /*0x5c6ae6*/
    a4 = result; /*0x5c6ae7*/
  }
  while ( v6 ); /*0x5c6aeb*/
  return result; /*0x5c6af0*/
}


// ==== 0x005C6B60  DecodeAudioSampleWord  this=unknown  sig=csp ====
unsigned __int8 __fastcall DecodeAudioSampleWord(
        int a1,
        unsigned __int16 *a2,
        unsigned __int16 a3,
        unsigned __int8 a4,
        int a5)
{
  int v6; // edi
  unsigned __int16 v7; // ax
  int v8; // eax
  unsigned __int8 result; // al

  if ( !(2 * a5) ) /*0x5c6b67*/
    return a4; /*0x5c6bac*/
  v6 = 2 * a5; /*0x5c6b73*/
  do /*0x5c6ba5*/
  {
    v7 = *a2++; /*0x5c6b7e*/
    a1 += 2; /*0x5c6b90*/
    v8 = v7 - a3 - a4; /*0x5c6b93*/
    a3 = 0; /*0x5c6b95*/
    *(_WORD *)(a1 - 2) = v8; /*0x5c6b97*/
    result = BYTE2(v8) & 1; /*0x5c6b9e*/
    --v6; /*0x5c6ba0*/
    a4 = BYTE2(v8) & 1; /*0x5c6ba1*/
  }
  while ( v6 ); /*0x5c6ba5*/
  return result; /*0x5c6ba8*/
}


// ==== 0x005C6BC0  FillArrayPattern  this=int  sig=csp ====
int __fastcall Array_FillPattern(_DWORD *a1, char *a2, _DWORD *a3, int a4)
{
  int v4; // ebp
  int v6; // edx
  char *v7; // eax
  int v8; // ecx
  int v9; // esi
  _DWORD *v11; // eax
  int v12; // ecx
  _DWORD *v14; // eax
  int v15; // ecx
  int v17; // esi
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // edx
  int v21; // eax
  unsigned int *v22; // esi
  bool v23; // bl
  unsigned int *v24; // edi
  unsigned int v25; // eax
  unsigned int v26; // ecx
  bool v29; // [esp+14h] [ebp-14h]
  _DWORD *v30; // [esp+18h] [ebp-10h]
  int v31; // [esp+1Ch] [ebp-Ch]
  int v32; // [esp+20h] [ebp-8h]
  char *v33; // [esp+24h] [ebp-4h]
  unsigned int v34; // [esp+2Ch] [ebp+4h]

  v4 = a4; /*0x5c6bc5*/
  v6 = a4; /*0x5c6bcf*/
  memset(a1, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c6be3*/
  v33 = a2; /*0x5c6be7*/
  *a1 = 0; /*0x5c6bf4*/
  if ( *(_DWORD *)a2 ) /*0x5c6bfa*/
    goto LABEL_10; /*0x5c6bfa*/
  v7 = &a2[v6 * 4 - 4]; /*0x5c6c00*/
  v8 = a4; /*0x5c6c04*/
  if ( !*(_DWORD *)v7 ) /*0x5c6c06*/
  {
    do /*0x5c6c16*/
    {
      if ( !--v8 ) /*0x5c6c0c*/
        break; /*0x5c6c0c*/
      v9 = *((_DWORD *)v7 - 1); /*0x5c6c0e*/
      v7 -= 4; /*0x5c6c11*/
    }
    while ( !v9 ); /*0x5c6c16*/
  }
  if ( v8 > 1 ) /*0x5c6c1b*/
  {
LABEL_10:
    if ( *a3 ) /*0x5c6c25*/
      goto LABEL_11; /*0x5c6c25*/
    v11 = &a3[v6 - 1]; /*0x5c6c2e*/
    v12 = a4; /*0x5c6c34*/
    if ( !*v11 ) /*0x5c6c2a*/
    {
      do /*0x5c6c43*/
      {
        if ( !--v12 ) /*0x5c6c39*/
          break; /*0x5c6c39*/
      }
      while ( !*--v11 ); /*0x5c6c43*/
    }
    if ( v12 > 1 ) /*0x5c6c48*/
    {
LABEL_11:
      v14 = &a3[v6 - 1]; /*0x5c6c4e*/
      v15 = a4; /*0x5c6c52*/
      if ( *v14 ) /*0x5c6c54*/
      {
LABEL_14:
        if ( v15 ) /*0x5c6c68*/
        {
          v18 = v15; /*0x5c6c72*/
          v19 = a3[v15 - 1]; /*0x5c6c74*/
          v20 = 0x80000000; /*0x5c6c78*/
          v21 = 32 * v18; /*0x5c6c7d*/
          if ( v19 >= 0 ) /*0x5c6c82*/
          {
            do /*0x5c6c89*/
            {
              v20 >>= 1; /*0x5c6c84*/
              --v21; /*0x5c6c86*/
            }
            while ( (v19 & v20) == 0 ); /*0x5c6c89*/
          }
          v17 = v21; /*0x5c6c8d*/
          if ( v21 ) /*0x5c6c8f*/
            v34 = 1 << ((v21 - 1) % 32); /*0x5c6cae*/
          else
            v34 = 0; /*0x5c6c91*/
          goto LABEL_21; /*0x5c6c95*/
        }
      }
      else
      {
        while ( --v15 ) /*0x5c6c59*/
        {
          if ( *--v14 ) /*0x5c6c5c*/
            goto LABEL_14; /*0x5c6c64*/
        }
      }
      v17 = 0; /*0x5c6c6a*/
      v34 = 0; /*0x5c6c6c*/
LABEL_21:
      if ( (v17 + 31) / 32 && v17 ) /*0x5c6cc6*/
      {
        v32 = v17; /*0x5c6cd0*/
        v30 = &a3[(v17 + 31) / 32 - 1]; /*0x5c6cd4*/
        do /*0x5c6d7b*/
        {
          RotateBitBufferLeft(v4); /*0x5c6ce2*/
          if ( (v34 & *v30) != 0 ) /*0x5c6cf1*/
          {
            v22 = a1; /*0x5c6cf3*/
            v23 = 0; /*0x5c6cf7*/
            v29 = 0; /*0x5c6cfb*/
            v24 = a1; /*0x5c6cff*/
            if ( v4 ) /*0x5c6d01*/
            {
              v31 = a4; /*0x5c6d0d*/
              do /*0x5c6d4d*/
              {
                v25 = *v24 + *(unsigned int *)((char *)v22 + v33 - (char *)a1); /*0x5c6d1c*/
                v26 = v25 + v29; /*0x5c6d24*/
                v23 = v25 < *v24 || v23 && !v26; /*0x5c6d36*/
                *v22 = v26; /*0x5c6d3c*/
                ++v24; /*0x5c6d3e*/
                ++v22; /*0x5c6d41*/
                v29 = v23; /*0x5c6d45*/
                --v31; /*0x5c6d49*/
              }
              while ( v31 ); /*0x5c6d4d*/
              v4 = a4; /*0x5c6d4f*/
            }
          }
          v34 >>= 1; /*0x5c6d59*/
          if ( !v34 ) /*0x5c6d5d*/
          {
            v34 = 0x80000000; /*0x5c6d63*/
            --v30; /*0x5c6d6e*/
          }
          --v32; /*0x5c6d77*/
        }
        while ( v32 ); /*0x5c6d7b*/
      }
    }
  }
  return 0; /*0x5c6d81*/
}


// ==== 0x005C6D90  sub_5C6D90  this=unknown  sig=csp ====
int __fastcall sub_5C6D90(int a1, unsigned __int16 *a2, __int16 a3, int a4)
{
  unsigned int v4; // esi
  int v5; // ecx
  int v6; // edi
  unsigned __int16 v7; // ax
  unsigned int v8; // eax

  v4 = 0; /*0x5c6d97*/
  if ( 2 * a4 <= 0 ) /*0x5c6d9b*/
    return 0; /*0x5c6dca*/
  v5 = a1 - (_DWORD)a2; /*0x5c6da4*/
  v6 = 2 * a4; /*0x5c6da6*/
  do /*0x5c6dc0*/
  {
    v7 = *a2++; /*0x5c6daa*/
    v8 = v4 + a3 * v7; /*0x5c6db3*/
    *(unsigned __int16 *)((char *)a2 + v5 - 2) = v8; /*0x5c6db5*/
    --v6; /*0x5c6dbd*/
    v4 = HIWORD(v8); /*0x5c6dbe*/
  }
  while ( v6 ); /*0x5c6dc0*/
  return 0; /*0x5c6dc6*/
}


// ==== 0x005C6DD0  MultiplyAddBigInteger  this=-  sig=ida-proto ====
int __fastcall MultiplyAddBigInteger(char *a1, unsigned __int16 *a2, __int16 a3, int a4)
{
  int v4; // ebx
  char *v5; // ebp
  int *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  bool v10; // zf
  _DWORD *v11; // eax
  int v12; // ebx
  unsigned int v13; // edx
  unsigned __int16 *v14; // ecx
  unsigned __int16 v15; // ax
  unsigned int v16; // eax
  int v18; // edi
  unsigned int v19; // edx
  unsigned __int16 *v20; // ecx
  unsigned __int16 v21; // ax
  unsigned int v22; // eax
  char *v23; // eax
  int v24; // ecx
  int v25; // edx
  char *v26; // eax
  unsigned int v27; // esi
  unsigned __int16 *v28; // ecx
  int v29; // edi
  int v30; // edx
  unsigned __int16 v31; // ax
  unsigned int v32; // eax
  char *v33; // eax
  int v34; // ecx
  int v35; // edx
  char *v36; // eax
  unsigned int v37; // esi
  unsigned __int16 *v38; // ecx
  int v39; // edi
  int v40; // edx
  unsigned __int16 v41; // ax
  unsigned int v42; // eax
  _DWORD v44[64]; // [esp+18h] [ebp-100h] BYREF

  v4 = a4; /*0x5c6dd7*/
  v5 = a1; /*0x5c6ddf*/
  if ( *(int *)&a2[2 * a4 - 2] >= 0 ) /*0x5c6df4*/
  {
    if ( a3 >= 0 ) /*0x5c6f1f*/
    {
      v37 = 0; /*0x5c6f97*/
      v38 = a2; /*0x5c6f9b*/
      if ( 2 * a4 > 0 ) /*0x5c6fa1*/
      {
        v39 = v5 - (char *)a2; /*0x5c6fa5*/
        v40 = 2 * a4; /*0x5c6fa7*/
        do /*0x5c6fc6*/
        {
          v41 = *v38++; /*0x5c6fb0*/
          v42 = v37 + a3 * v41; /*0x5c6fb9*/
          *(unsigned __int16 *)((char *)v38 + v39 - 2) = v42; /*0x5c6fbb*/
          --v40; /*0x5c6fc3*/
          v37 = HIWORD(v42); /*0x5c6fc4*/
        }
        while ( v40 ); /*0x5c6fc6*/
      }
    }
    else
    {
      v27 = 0; /*0x5c6f28*/
      v28 = a2; /*0x5c6f2a*/
      if ( 2 * a4 > 0 ) /*0x5c6f2e*/
      {
        v29 = a1 - (char *)a2; /*0x5c6f37*/
        v30 = 2 * a4; /*0x5c6f39*/
        do /*0x5c6f53*/
        {
          v31 = *v28++; /*0x5c6f3d*/
          v32 = v27 + (__int16)-a3 * v31; /*0x5c6f46*/
          *(unsigned __int16 *)((char *)v28 + v29 - 2) = v32; /*0x5c6f48*/
          --v30; /*0x5c6f50*/
          v27 = HIWORD(v32); /*0x5c6f51*/
        }
        while ( v30 ); /*0x5c6f53*/
        v5 = a1; /*0x5c6f55*/
      }
      v33 = v5; /*0x5c6f5b*/
      if ( a4 > 0 ) /*0x5c6f5d*/
      {
        v34 = a4; /*0x5c6f5f*/
        do /*0x5c6f6c*/
        {
          v35 = *(_DWORD *)v33; /*0x5c6f61*/
          v33 += 4; /*0x5c6f63*/
          *((_DWORD *)v33 - 1) = ~v35; /*0x5c6f68*/
          --v34; /*0x5c6f6b*/
        }
        while ( v34 ); /*0x5c6f6c*/
      }
      v36 = v5; /*0x5c6f71*/
      v10 = (*(_DWORD *)v5)++ == -1; /*0x5c6f73*/
      if ( v10 ) /*0x5c6f77*/
      {
        while ( 1 ) /*0x5c6f79*/
        {
          v36 += 4; /*0x5c6f79*/
          if ( !--v4 ) /*0x5c6f7d*/
            break; /*0x5c6f7d*/
          v10 = (*(_DWORD *)v36)++ == -1; /*0x5c6f81*/
          if ( !v10 ) /*0x5c6f84*/
            return 0; /*0x5c6f92*/
        }
      }
    }
    return 0; /*0x5c6f7d*/
  }
  qmemcpy(v44, a2, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c6e05*/
  v6 = v44; /*0x5c6e09*/
  if ( a4 > 0 ) /*0x5c6e14*/
  {
    v7 = a4; /*0x5c6e16*/
    do /*0x5c6e23*/
    {
      v8 = *v6++; /*0x5c6e18*/
      *(v6 - 1) = ~v8; /*0x5c6e1f*/
      --v7; /*0x5c6e22*/
    }
    while ( v7 ); /*0x5c6e23*/
  }
  v9 = a4; /*0x5c6e29*/
  v10 = v44[0] == -1; /*0x5c6e2b*/
  v11 = v44; /*0x5c6e2c*/
  ++v44[0]; /*0x5c6e30*/
  for ( ; v10; v10 = (*v11)++ == -1 ) /*0x5c6e34*/
  {
    ++v11; /*0x5c6e36*/
    if ( !--v9 ) /*0x5c6e3a*/
      break; /*0x5c6e3a*/
  }
  if ( a3 >= 0 ) /*0x5c6e4d*/
  {
    v18 = 2 * a4; /*0x5c6e95*/
    v19 = 0; /*0x5c6e98*/
    v20 = (unsigned __int16 *)v44; /*0x5c6e9c*/
    if ( 2 * a4 > 0 ) /*0x5c6ea0*/
    {
      do /*0x5c6ecb*/
      {
        v21 = *v20++; /*0x5c6eb3*/
        v22 = v19 + a3 * v21; /*0x5c6ebe*/
        *(unsigned __int16 *)((char *)v20 + v5 - (char *)v44 - 2) = v22; /*0x5c6ec0*/
        --v18; /*0x5c6ec8*/
        v19 = HIWORD(v22); /*0x5c6ec9*/
      }
      while ( v18 ); /*0x5c6ecb*/
    }
    v23 = v5; /*0x5c6ed3*/
    if ( a4 > 0 ) /*0x5c6ed5*/
    {
      v24 = a4; /*0x5c6ed7*/
      do /*0x5c6ee4*/
      {
        v25 = *(_DWORD *)v23; /*0x5c6ed9*/
        v23 += 4; /*0x5c6edb*/
        *((_DWORD *)v23 - 1) = ~v25; /*0x5c6ee0*/
        --v24; /*0x5c6ee3*/
      }
      while ( v24 ); /*0x5c6ee4*/
    }
    v26 = v5; /*0x5c6ee9*/
    v10 = (*(_DWORD *)v5)++ == -1; /*0x5c6eeb*/
    if ( v10 ) /*0x5c6eef*/
    {
      while ( 1 ) /*0x5c6ef5*/
      {
        v26 += 4; /*0x5c6ef5*/
        if ( !--v4 ) /*0x5c6ef9*/
          break; /*0x5c6ef9*/
        v10 = (*(_DWORD *)v26)++ == -1; /*0x5c6f01*/
        if ( !v10 ) /*0x5c6f04*/
          return 0; /*0x5c6f12*/
      }
    }
    return 0; /*0x5c6ef9*/
  }
  v12 = 2 * a4; /*0x5c6e4f*/
  v13 = 0; /*0x5c6e51*/
  v14 = (unsigned __int16 *)v44; /*0x5c6e57*/
  if ( 2 * a4 <= 0 ) /*0x5c6e5b*/
    return 0; /*0x5c6fcb*/
  do /*0x5c6e84*/
  {
    v15 = *v14++; /*0x5c6e6e*/
    v16 = v13 + (__int16)-a3 * v15; /*0x5c6e77*/
    *(unsigned __int16 *)((char *)v14 + v5 - (char *)v44 - 2) = v16; /*0x5c6e79*/
    --v12; /*0x5c6e81*/
    v13 = HIWORD(v16); /*0x5c6e82*/
  }
  while ( v12 ); /*0x5c6e84*/
  return 0; /*0x5c6e86*/
}


// ==== 0x005C6FE0  BigInt::ArrayArithmetic  this=BigInt  sig=ida-proto ====
int __fastcall BigInt::ArrayArithmetic(int *a1, char *a2, _DWORD *a3, int a4)
{
  int v4; // ebx
  unsigned int v6; // ebp
  char *v7; // eax
  int v8; // ecx
  int v9; // edx
  int *v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  bool v14; // zf
  _DWORD *v15; // eax
  int *v17; // eax
  int v18; // ecx
  int v19; // edx
  int *v20; // eax
  int *v21; // ecx
  int v22; // esi
  int v23; // edi
  int v24; // esi
  _DWORD *v25; // ecx
  int *v26; // eax
  int v27; // edx
  int v28; // esi
  int *v29; // eax
  _DWORD v31[64]; // [esp+14h] [ebp-200h] BYREF
  char v32[256]; // [esp+114h] [ebp-100h] BYREF

  v4 = a4; /*0x5c6fe7*/
  v6 = 4 * a4; /*0x5c6ff5*/
  if ( *(int *)&a2[4 * a4 - 4] >= 0 ) /*0x5c7004*/
  {
    if ( (int)a3[v6 / 4 - 1] >= 0 ) /*0x5c712b*/
    {
      FillArrayPattern(a1, a2, a3, a4); /*0x5c71c7*/
    }
    else
    {
      qmemcpy(v31, a3, 4 * (v6 >> 2)); /*0x5c713a*/
      v21 = v31; /*0x5c7145*/
      if ( a4 > 0 ) /*0x5c7149*/
      {
        v22 = a4; /*0x5c714b*/
        do /*0x5c7158*/
        {
          v23 = *v21++; /*0x5c714d*/
          *(v21 - 1) = ~v23; /*0x5c7154*/
          --v22; /*0x5c7157*/
        }
        while ( v22 ); /*0x5c7158*/
      }
      v24 = a4; /*0x5c715e*/
      v14 = v31[0] == -1; /*0x5c7160*/
      v25 = v31; /*0x5c7161*/
      ++v31[0]; /*0x5c7165*/
      for ( ; v14; v14 = (*v25)++ == -1 ) /*0x5c7169*/
      {
        ++v25; /*0x5c716b*/
        if ( !--v24 ) /*0x5c716f*/
          break; /*0x5c716f*/
      }
      FillArrayPattern(a1, a2, v31, a4); /*0x5c7180*/
      v26 = a1; /*0x5c718b*/
      if ( a4 > 0 ) /*0x5c718d*/
      {
        v27 = a4; /*0x5c718f*/
        do /*0x5c719c*/
        {
          v28 = *v26++; /*0x5c7191*/
          *(v26 - 1) = ~v28; /*0x5c7198*/
          --v27; /*0x5c719b*/
        }
        while ( v27 ); /*0x5c719c*/
      }
      v29 = a1; /*0x5c71a0*/
      v14 = (*a1)++ == -1; /*0x5c71a2*/
      if ( v14 ) /*0x5c71a5*/
      {
        while ( 1 ) /*0x5c71a7*/
        {
          ++v29; /*0x5c71a7*/
          if ( !--v4 ) /*0x5c71ab*/
            break; /*0x5c71ab*/
          v14 = (*v29)++ == -1; /*0x5c71af*/
          if ( !v14 ) /*0x5c71b2*/
            return 0; /*0x5c71c0*/
        }
      }
    }
    return 0; /*0x5c71ab*/
  }
  qmemcpy(v32, a2, 4 * (v6 >> 2)); /*0x5c701a*/
  v7 = v32; /*0x5c701e*/
  if ( a4 > 0 ) /*0x5c702c*/
  {
    v8 = a4; /*0x5c702e*/
    do /*0x5c703b*/
    {
      v9 = *(_DWORD *)v7; /*0x5c7030*/
      v7 += 4; /*0x5c7032*/
      *((_DWORD *)v7 - 1) = ~v9; /*0x5c7037*/
      --v8; /*0x5c703a*/
    }
    while ( v8 ); /*0x5c703b*/
  }
  BigInt_Helper(v32, a4); /*0x5c7046*/
  if ( (int)a3[v6 / 4 - 1] >= 0 ) /*0x5c7058*/
  {
    FillArrayPattern(a1, v32, a3, a4); /*0x5c70d7*/
    v17 = a1; /*0x5c70de*/
    if ( a4 > 0 ) /*0x5c70e0*/
    {
      v18 = a4; /*0x5c70e2*/
      do /*0x5c70ef*/
      {
        v19 = *v17++; /*0x5c70e4*/
        *(v17 - 1) = ~v19; /*0x5c70eb*/
        --v18; /*0x5c70ee*/
      }
      while ( v18 ); /*0x5c70ef*/
    }
    v20 = a1; /*0x5c70f3*/
    v14 = (*a1)++ == -1; /*0x5c70f5*/
    if ( v14 ) /*0x5c70f8*/
    {
      while ( 1 ) /*0x5c70fe*/
      {
        ++v20; /*0x5c70fe*/
        if ( !--v4 ) /*0x5c7102*/
          break; /*0x5c7102*/
        v14 = (*v20)++ == -1; /*0x5c710a*/
        if ( !v14 ) /*0x5c710d*/
          return 0; /*0x5c711b*/
      }
    }
    return 0; /*0x5c71cf*/
  }
  qmemcpy(v31, a3, 4 * (v6 >> 2)); /*0x5c7065*/
  v10 = v31; /*0x5c7069*/
  if ( a4 > 0 ) /*0x5c7074*/
  {
    v11 = a4; /*0x5c7076*/
    do /*0x5c7083*/
    {
      v12 = *v10++; /*0x5c7078*/
      *(v10 - 1) = ~v12; /*0x5c707f*/
      --v11; /*0x5c7082*/
    }
    while ( v11 ); /*0x5c7083*/
  }
  v13 = a4; /*0x5c7089*/
  v14 = v31[0] == -1; /*0x5c708b*/
  v15 = v31; /*0x5c708c*/
  ++v31[0]; /*0x5c7090*/
  for ( ; v14; v14 = (*v15)++ == -1 ) /*0x5c7094*/
  {
    ++v15; /*0x5c7096*/
    if ( !--v13 ) /*0x5c709a*/
      break; /*0x5c709a*/
  }
  FillArrayPattern(a1, v32, v31, a4); /*0x5c70b4*/
  return 0; /*0x5c70bb*/
}


// ==== 0x005C71E0  ShiftBigIntAndScan  this=int  sig=csp ====
__int16 __fastcall BigInt_ShiftAndScan(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v6; // eax
  int v7; // ecx
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // edi
  unsigned int v16; // edx
  _DWORD *v17; // eax
  int v18; // ecx
  int v19; // ebx
  int v20; // edi

  if ( !(_WORD)a3 ) /*0x5c71f5*/
    return 0; /*0x5c7201*/
  memset(a1, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c7220*/
  v6 = (_DWORD *)(4 * a4 + a2 - 4); /*0x5c722d*/
  *a1 = 0; /*0x5c7231*/
  v7 = a4; /*0x5c7238*/
  if ( *v6 ) /*0x5c723a*/
  {
LABEL_6:
    if ( v7 ) /*0x5c724e*/
    {
      v10 = v7; /*0x5c7254*/
      v11 = *(_DWORD *)(a2 + 4 * v7 - 4); /*0x5c7256*/
      v12 = 0x80000000; /*0x5c725a*/
      v13 = 32 * v10; /*0x5c725f*/
      if ( v11 >= 0 ) /*0x5c7264*/
      {
        do /*0x5c726b*/
        {
          v12 >>= 1; /*0x5c7266*/
          --v13; /*0x5c7268*/
        }
        while ( (v11 & v12) == 0 ); /*0x5c726b*/
      }
      v9 = v13; /*0x5c726d*/
      goto LABEL_11; /*0x5c726d*/
    }
  }
  else
  {
    while ( --v7 ) /*0x5c723f*/
    {
      if ( *--v6 ) /*0x5c7242*/
        goto LABEL_6; /*0x5c724a*/
    }
  }
  v9 = 0; /*0x5c7250*/
LABEL_11:
  v14 = (v9 + 31) / 32; /*0x5c726f*/
  v15 = a2 + 4 * v14 - 4; /*0x5c727b*/
  if ( !v14 ) /*0x5c727f*/
    return 0; /*0x5c7284*/
  if ( v9 ) /*0x5c7290*/
    v16 = 1 << ((v9 - 1) % 32); /*0x5c72ab*/
  else
    v16 = 0; /*0x5c7292*/
  v17 = &a1[v14 - 1]; /*0x5c72af*/
  if ( !v9 ) /*0x5c72b3*/
    return 0; /*0x5c72fb*/
  v18 = 0; /*0x5c72b5*/
  v19 = v9; /*0x5c72b9*/
  v20 = v15 - (_DWORD)v17; /*0x5c72bf*/
  do /*0x5c72e5*/
  {
    v18 *= 2; /*0x5c72c4*/
    if ( (*(_DWORD *)((char *)v17 + v20) & v16) != 0 ) /*0x5c72c8*/
      ++v18; /*0x5c72ca*/
    if ( (unsigned __int16)v18 >= (unsigned __int16)a3 ) /*0x5c72ce*/
    {
      v18 -= a3; /*0x5c72d2*/
      *v17 |= v16; /*0x5c72d6*/
    }
    v16 >>= 1; /*0x5c72d8*/
    if ( !v16 ) /*0x5c72da*/
    {
      v16 = 0x80000000; /*0x5c72dc*/
      --v17; /*0x5c72e1*/
    }
    --v19; /*0x5c72e4*/
  }
  while ( v19 ); /*0x5c72e5*/
  return v18; /*0x5c71f7*/
}


// ==== 0x005C7310  SubtractBigInteger  this=int  sig=csp ====
int __fastcall SubtractBigInteger(_DWORD *a1, _DWORD *a2, int a3, char *a4, Buffer *aP2)
{
  char *v7; // eax
  int v8; // edx
  int v9; // esi
  Buffer *v11; // ecx
  _DWORD *v12; // eax
  int v14; // esi
  Buffer *v15; // eax
  int v16; // ecx
  unsigned int v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // edx
  _DWORD *v21; // eax
  int v22; // ebx
  Buffer *v23; // ecx
  bool v24; // zf
  _DWORD *v25; // eax
  char *v26; // edx
  Buffer *v27; // esi
  unsigned int v28; // ecx
  char *v29; // eax
  int v30; // edx
  bool v31; // cc
  _DWORD *v32; // ecx
  int v33; // esi
  unsigned __int16 v34; // ax
  int v35; // eax
  _DWORD *v36; // [esp+10h] [ebp-10h]
  unsigned __int8 v37; // [esp+14h] [ebp-Ch]
  int v38; // [esp+18h] [ebp-8h]
  int i; // [esp+1Ch] [ebp-4h]
  unsigned int v40; // [esp+24h] [ebp+4h]

  if ( !*(_DWORD *)a4 ) /*0x5c731c*/
  {
    v7 = &a4[4 * (_DWORD)aP2 - 4]; /*0x5c732d*/
    v8 = (int)aP2; /*0x5c7333*/
    if ( !*(_DWORD *)v7 ) /*0x5c7329*/
    {
      do /*0x5c7342*/
      {
        if ( !--v8 ) /*0x5c7338*/
          break; /*0x5c7338*/
        v9 = *((_DWORD *)v7 - 1); /*0x5c733a*/
        v7 -= 4; /*0x5c733d*/
      }
      while ( !v9 ); /*0x5c7342*/
    }
    if ( v8 <= 1 ) /*0x5c7347*/
      return -1; /*0x5c7353*/
  }
  memset(a1, 0, 4 * ((unsigned int)(4 * (_DWORD)aP2) >> 2)); /*0x5c7368*/
  *a1 = 0; /*0x5c7377*/
  memset(a2, 0, 4 * ((unsigned int)(4 * (_DWORD)aP2) >> 2)); /*0x5c7381*/
  v11 = aP2; /*0x5c738e*/
  *a2 = 0; /*0x5c7392*/
  v12 = (_DWORD *)(4 * (_DWORD)aP2 + a3 - 4); /*0x5c7398*/
  if ( *v12 ) /*0x5c739c*/
  {
LABEL_10:
    if ( v11 ) /*0x5c73b3*/
    {
      v15 = v11; /*0x5c73b9*/
      v16 = *(_DWORD *)(a3 + 4 * (_DWORD)v11 - 4); /*0x5c73bb*/
      v17 = 0x80000000; /*0x5c73bf*/
      v18 = 32 * (_DWORD)v15; /*0x5c73c4*/
      if ( v16 >= 0 ) /*0x5c73c9*/
      {
        do /*0x5c73d0*/
        {
          v17 >>= 1; /*0x5c73cb*/
          --v18; /*0x5c73cd*/
        }
        while ( (v16 & v17) == 0 ); /*0x5c73d0*/
      }
      v14 = v18; /*0x5c73d2*/
      goto LABEL_15; /*0x5c73d2*/
    }
  }
  else
  {
    while ( 1 ) /*0x5c73a4*/
    {
      v11 = (Buffer *)((char *)v11 - 1); /*0x5c73a4*/
      if ( !v11 ) /*0x5c73a5*/
        break; /*0x5c73a5*/
      if ( *--v12 ) /*0x5c73a7*/
        goto LABEL_10; /*0x5c73af*/
    }
  }
  v14 = 0; /*0x5c73b5*/
LABEL_15:
  v19 = (v14 + 31) / 32; /*0x5c73d4*/
  if ( v19 )
  {
    v20 = a3 + 4 * v19 - 4; /*0x5c73e6*/
    v21 = &a2[v19 - 1]; /*0x5c73ea*/
    v36 = v21; /*0x5c73f0*/
    v40 = v14 ? 1 << ((v14 - 1) % 32) : 0;
    if ( v14 ) /*0x5c7419*/
    {
      v38 = v14; /*0x5c7421*/
      v22 = v20 - (_DWORD)v21; /*0x5c7425*/
      for ( i = v20 - (_DWORD)v21; ; v22 = i ) /*0x5c7427*/
      {
        RotateBitBufferLeft(a1, 1, aP2); /*0x5c743d*/
        if ( (v40 & *(_DWORD *)((char *)v36 + v22)) != 0 ) /*0x5c744d*/
        {
          v23 = aP2; /*0x5c7452*/
          v24 = *a1 == -1; /*0x5c7454*/
          v25 = a1; /*0x5c7455*/
          ++*a1; /*0x5c7457*/
          for ( ; v24; v24 = (*v25)++ == -1 ) /*0x5c745a*/
          {
            ++v25; /*0x5c745c*/
            v23 = (Buffer *)((char *)v23 - 1); /*0x5c745f*/
            if ( !v23 ) /*0x5c7460*/
              break; /*0x5c7460*/
          }
        }
        v26 = (char *)&a1[(_DWORD)aP2 - 1]; /*0x5c746d*/
        v27 = aP2; /*0x5c7471*/
        v28 = *(_DWORD *)&a4[4 * (_DWORD)aP2 - 4]; /*0x5c7473*/
        v29 = &a4[4 * (_DWORD)aP2 - 4]; /*0x5c7477*/
        if ( *(_DWORD *)v26 >= v28 ) /*0x5c747d*/
        {
          v30 = v26 - v29; /*0x5c747f*/
          v31 = *(_DWORD *)&v29[v30] <= v28; /*0x5c7481*/
          while ( v31 ) /*0x5c7484*/
          {
            v29 -= 4; /*0x5c7486*/
            v27 = (Buffer *)((char *)v27 - 1); /*0x5c7489*/
            if ( !v27 ) /*0x5c748a*/
              break; /*0x5c748a*/
            v31 = *(_DWORD *)&v29[v30] <= *(_DWORD *)v29; /*0x5c748e*/
            if ( *(_DWORD *)&v29[v30] < *(_DWORD *)v29 ) /*0x5c7491*/
              goto LABEL_36; /*0x5c7491*/
          }
          v37 = 0; /*0x5c7498*/
          v32 = a1; /*0x5c74a2*/
          if ( 2 * (_DWORD)aP2 ) /*0x5c749d*/
          {
            v33 = 2 * (_DWORD)aP2; /*0x5c74a8*/
            do /*0x5c74da*/
            {
              v34 = *(_WORD *)((char *)v32 + a4 - (char *)a1); /*0x5c74af*/
              v32 = (_DWORD *)((char *)v32 + 2); /*0x5c74b3*/
              v35 = *((unsigned __int16 *)v32 - 1) - v34 - v37; /*0x5c74ca*/
              *((_WORD *)v32 - 1) = v35; /*0x5c74cc*/
              --v33; /*0x5c74d5*/
              v37 = BYTE2(v35) & 1; /*0x5c74d6*/
            }
            while ( v33 ); /*0x5c74da*/
          }
          *v36 |= v40; /*0x5c74e4*/
        }
LABEL_36:
        v40 >>= 1; /*0x5c74e6*/
        if ( !v40 ) /*0x5c74f0*/
        {
          v40 = 0x80000000; /*0x5c74f6*/
          --v36; /*0x5c7501*/
        }
        if ( !--v38 ) /*0x5c750e*/
          break; /*0x5c750e*/
      }
    }
  }
  return 0; /*0x5c7349*/
}


// ==== 0x005C7520  SubtractBigIntegerWithSign  this=-  sig=ida-proto ====
char __fastcall SubtractBigIntegerWithSign(char *a1, int *a2, const void *a3, const void *a4, int a5)
{
  int v5; // ebp
  int *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  bool v11; // zf
  _DWORD *v12; // eax
  int *v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  _DWORD *v17; // eax
  char *v18; // esi
  char *v19; // eax
  int *v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // ecx
  int *v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // edx
  int *v28; // eax
  int v29; // ecx
  char *v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // ecx
  char *v34; // edi
  int v35; // ebx
  char *v36; // ecx
  bool v38; // [esp+13h] [ebp-209h]
  bool v39; // [esp+14h] [ebp-208h]
  char *v40; // [esp+18h] [ebp-204h]
  _DWORD v41[64]; // [esp+1Ch] [ebp-200h] BYREF
  _DWORD v42[64]; // [esp+11Ch] [ebp-100h] BYREF

  v5 = a5; /*0x5c7528*/
  v40 = a1; /*0x5c752f*/
  qmemcpy(v42, a3, 4 * ((unsigned int)(4 * a5) >> 2)); /*0x5c7553*/
  v38 = 0; /*0x5c7557*/
  qmemcpy(v41, a4, 4 * ((unsigned int)(4 * a5) >> 2)); /*0x5c7571*/
  if ( (int)v41[a5 + 63] < 0 ) /*0x5c7583*/
  {
    v7 = v42; /*0x5c7587*/
    if ( a5 > 0 ) /*0x5c758e*/
    {
      v8 = a5; /*0x5c7590*/
      do /*0x5c759d*/
      {
        v9 = *v7++; /*0x5c7592*/
        *(v7 - 1) = ~v9; /*0x5c7599*/
        --v8; /*0x5c759c*/
      }
      while ( v8 ); /*0x5c759d*/
    }
    v10 = a5; /*0x5c75a6*/
    v11 = v42[0] == -1; /*0x5c75a8*/
    v12 = v42; /*0x5c75a9*/
    ++v42[0]; /*0x5c75b0*/
    for ( ; v11; v11 = (*v12)++ == -1 ) /*0x5c75b7*/
    {
      ++v12; /*0x5c75b9*/
      if ( !--v10 ) /*0x5c75bd*/
        break; /*0x5c75bd*/
    }
    v38 = 1; /*0x5c75c6*/
  }
  if ( (int)v41[a5 - 1] < 0 ) /*0x5c75d1*/
  {
    v13 = v41; /*0x5c75d5*/
    if ( a5 > 0 ) /*0x5c75d9*/
    {
      v14 = a5; /*0x5c75db*/
      do /*0x5c75e8*/
      {
        v15 = *v13++; /*0x5c75dd*/
        *(v13 - 1) = ~v15; /*0x5c75e4*/
        --v14; /*0x5c75e7*/
      }
      while ( v14 ); /*0x5c75e8*/
    }
    v16 = a5; /*0x5c75ee*/
    v11 = v41[0] == -1; /*0x5c75f0*/
    v17 = v41; /*0x5c75f1*/
    ++v41[0]; /*0x5c75f5*/
    for ( ; v11; v11 = (*v17)++ == -1 ) /*0x5c75f9*/
    {
      ++v17; /*0x5c75fb*/
      if ( !--v16 ) /*0x5c75ff*/
        break; /*0x5c75ff*/
    }
    v38 = !v38; /*0x5c7611*/
  }
  v18 = v40; /*0x5c7615*/
  SubtractBigInteger(v40, a2, (int)v42, (char *)v41, a5); /*0x5c762b*/
  LOBYTE(v19) = v38; /*0x5c7630*/
  if ( v38 ) /*0x5c7636*/
  {
    v20 = a2; /*0x5c763e*/
    if ( a5 > 0 ) /*0x5c7640*/
    {
      v21 = a5; /*0x5c7642*/
      do /*0x5c764f*/
      {
        v22 = *v20++; /*0x5c7644*/
        *(v20 - 1) = ~v22; /*0x5c764b*/
        --v21; /*0x5c764e*/
      }
      while ( v21 ); /*0x5c764f*/
    }
    v23 = a5; /*0x5c7653*/
    v11 = *a2 == -1; /*0x5c7655*/
    v24 = a2; /*0x5c7656*/
    ++*a2; /*0x5c7658*/
    for ( ; v11; v11 = (*v24)++ == -1 ) /*0x5c765a*/
    {
      ++v24; /*0x5c765c*/
      if ( !--v23 ) /*0x5c7660*/
        break; /*0x5c7660*/
    }
    if ( *(_DWORD *)v18 ) /*0x5c7669*/
      goto LABEL_29; /*0x5c7669*/
    v19 = &v18[4 * a5 - 4]; /*0x5c7672*/
    v25 = a5; /*0x5c7678*/
    if ( !*(_DWORD *)v19 ) /*0x5c766e*/
    {
      do /*0x5c7687*/
      {
        if ( !--v25 ) /*0x5c767d*/
          break; /*0x5c767d*/
        v26 = *((_DWORD *)v19 - 1); /*0x5c767f*/
        v19 -= 4; /*0x5c7682*/
      }
      while ( !v26 ); /*0x5c7687*/
    }
    if ( v25 > 1 ) /*0x5c768c*/
    {
LABEL_29:
      v27 = a5; /*0x5c7694*/
      v28 = a2; /*0x5c7697*/
      v11 = (*a2)-- == 0; /*0x5c7699*/
      if ( v11 ) /*0x5c769e*/
      {
        do /*0x5c76b0*/
        {
          ++v28; /*0x5c76a0*/
          if ( !--v27 ) /*0x5c76a4*/
            break; /*0x5c76a4*/
          v29 = *v28 - 1; /*0x5c76a9*/
          *v28 = v29; /*0x5c76ab*/
        }
        while ( v29 == -1 ); /*0x5c76b0*/
      }
      v30 = v18; /*0x5c76b4*/
      if ( a5 > 0 ) /*0x5c76b6*/
      {
        v31 = a5; /*0x5c76b8*/
        do /*0x5c76c5*/
        {
          v32 = *(_DWORD *)v30; /*0x5c76ba*/
          v30 += 4; /*0x5c76bc*/
          *((_DWORD *)v30 - 1) = ~v32; /*0x5c76c1*/
          --v31; /*0x5c76c4*/
        }
        while ( v31 ); /*0x5c76c5*/
      }
      v33 = a5; /*0x5c76c9*/
      v11 = *(_DWORD *)v18 == -1; /*0x5c76cb*/
      v19 = v18; /*0x5c76cc*/
      ++*(_DWORD *)v18; /*0x5c76ce*/
      for ( ; v11; v11 = (*(_DWORD *)v19)++ == -1 ) /*0x5c76d0*/
      {
        v19 += 4; /*0x5c76d2*/
        if ( !--v33 ) /*0x5c76d6*/
          break; /*0x5c76d6*/
      }
      v39 = 0; /*0x5c76e1*/
      v34 = v18; /*0x5c76e6*/
      if ( a5 ) /*0x5c76e8*/
      {
        v35 = (char *)v41 - v40; /*0x5c76f2*/
        do /*0x5c772c*/
        {
          v19 = (char *)(*(_DWORD *)v34 + *(_DWORD *)&v18[v35]); /*0x5c76fd*/
          v36 = &v19[v39]; /*0x5c7705*/
          v39 = (unsigned int)v19 < *(_DWORD *)v34 || (LOBYTE(v19) = v39) != 0 && !v36; /*0x5c771e*/
          *(_DWORD *)v18 = v36; /*0x5c7723*/
          v34 += 4; /*0x5c7725*/
          v18 += 4; /*0x5c7728*/
          --v5; /*0x5c772b*/
        }
        while ( v5 ); /*0x5c772c*/
      }
    }
  }
  return (char)v19; /*0x5c772e*/
}


// ==== 0x005C7740  ModInverseBigInteger  this=unknown  sig=csp ====
int __fastcall ModInverseBigInteger(char *a1, const void *a2, const void *a3, int a4)
{
  int v4; // ebp
  int v5; // esi
  int v6; // edi
  int v7; // ebx
  int v8; // edx
  char *j; // eax
  int v10; // esi
  int v11; // edi
  char *v12; // ecx
  char *v13; // edx
  int v14; // edi
  char *v15; // esi
  unsigned __int16 v16; // ax
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // ebx
  unsigned int *v20; // edi
  unsigned int *v21; // edx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  int result; // eax
  int v25; // [esp+10h] [ebp-714h]
  bool v26; // [esp+10h] [ebp-714h]
  unsigned __int8 v27; // [esp+14h] [ebp-710h]
  int i; // [esp+18h] [ebp-70Ch]
  unsigned int v29; // [esp+1Ch] [ebp-708h]
  char *v30; // [esp+20h] [ebp-704h]
  _DWORD v31[64]; // [esp+24h] [ebp-700h] BYREF
  _DWORD v32[128]; // [esp+124h] [ebp-600h] BYREF
  _DWORD v33[64]; // [esp+324h] [ebp-400h] BYREF
  char v34[256]; // [esp+424h] [ebp-300h] BYREF
  char v35[512]; // [esp+524h] [ebp-200h] BYREF

  v4 = a4; /*0x5c7748*/
  v30 = a1; /*0x5c774f*/
  v29 = 4 * a4; /*0x5c776e*/
  qmemcpy(v34, a3, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c7775*/
  qmemcpy(v35, a2, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c7790*/
  memset(v31, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c77a2*/
  v5 = 1; /*0x5c77a6*/
  v25 = 1; /*0x5c77ae*/
  v31[0] = 0; /*0x5c77bf*/
  memset(v32, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c77ca*/
  v6 = 0; /*0x5c77d3*/
  v32[0] = 1; /*0x5c77d5*/
  for ( i = 0; ; v6 = i ) /*0x5c77dc*/
  {
    v7 = (v5 % 3) << 8; /*0x5c77ec*/
    if ( !*(_DWORD *)&v34[v7] ) /*0x5c77ef*/
    {
      v8 = a4; /*0x5c7805*/
      for ( j = &v34[v7 - 4 + v29]; !*(_DWORD *)j; j -= 4 ) /*0x5c7807*/
      {
        if ( !--v8 ) /*0x5c7813*/
          break; /*0x5c7813*/
      }
      if ( v8 <= 1 ) /*0x5c7820*/
        break; /*0x5c7820*/
    }
    v10 = (v6 % 3) << 8; /*0x5c783f*/
    v11 = ((v6 + 2) % 3) << 8; /*0x5c7853*/
    SubtractBigInteger(&v34[v11], v33, (int)&v34[v10], &v34[v7], a4); /*0x5c785d*/
    FillArrayPattern(v30, (char *)v31 + v7, v33, a4); /*0x5c7875*/
    v12 = (char *)v31 + v10; /*0x5c787e*/
    v27 = 0; /*0x5c7887*/
    v13 = (char *)v31 + v11; /*0x5c788c*/
    if ( 2 * a4 ) /*0x5c7882*/
    {
      v14 = 2 * a4; /*0x5c7894*/
      v15 = (char *)(v30 - v12); /*0x5c7897*/
      do /*0x5c78c9*/
      {
        v13 += 2; /*0x5c789b*/
        v16 = *(_WORD *)&v12[(_DWORD)v15]; /*0x5c789e*/
        v12 += 2; /*0x5c78a2*/
        v17 = *((unsigned __int16 *)v12 - 1) - v16 - v27; /*0x5c78b9*/
        *((_WORD *)v13 - 1) = v17; /*0x5c78bb*/
        --v14; /*0x5c78c4*/
        v27 = BYTE2(v17) & 1; /*0x5c78c5*/
      }
      while ( v14 ); /*0x5c78c9*/
    }
    ++v25; /*0x5c78d5*/
    ++i; /*0x5c78d9*/
    v5 = v25; /*0x5c78dd*/
  }
  v18 = (v5 - 1) % 3; /*0x5c78f1*/
  if ( (int)v31[64 * v18 - 1 + a4] < 0 ) /*0x5c7902*/
  {
    v19 = a3; /*0x5c7904*/
    v20 = &v31[64 * v18]; /*0x5c7912*/
    v26 = 0; /*0x5c7916*/
    v21 = v20; /*0x5c791b*/
    if ( a4 ) /*0x5c791d*/
    {
      do /*0x5c7959*/
      {
        v22 = *v20 + *v19; /*0x5c7927*/
        v23 = v22 + v26; /*0x5c792f*/
        v26 = v22 < *v20 || v26 && !v23; /*0x5c7948*/
        *v21 = v23; /*0x5c794d*/
        ++v19; /*0x5c794f*/
        ++v20; /*0x5c7952*/
        ++v21; /*0x5c7955*/
        --v4; /*0x5c7958*/
      }
      while ( v4 ); /*0x5c7959*/
      v18 = (v5 - 1) % 3; /*0x5c795b*/
    }
  }
  result = v18 << 8; /*0x5c7967*/
  qmemcpy(v30, (char *)v31 + result, v29); /*0x5c7973*/
  return result; /*0x5c797c*/
}


// ==== 0x005C7990  DivideBigInteger  this=int  sig=csp ====
int __fastcall DivideBigInteger(_DWORD *a1, char *a2, int a3)
{
  char *v4; // eax
  int v5; // ecx
  int v6; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // esi
  int v13; // eax
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // eax
  _DWORD *v17; // ebx
  int *v18; // ebp
  int v19; // esi
  _DWORD *v20; // eax
  int v21; // edx
  bool v22; // cc
  int *v23; // ecx
  int v24; // esi
  unsigned __int16 v25; // ax
  int v26; // eax
  unsigned int v27; // [esp+8h] [ebp-114h]
  unsigned __int8 v29; // [esp+10h] [ebp-10Ch]
  int v30; // [esp+14h] [ebp-108h]
  _DWORD *v31; // [esp+18h] [ebp-104h] BYREF
  int v32[64]; // [esp+1Ch] [ebp-100h] BYREF

  if ( !*(_DWORD *)a2 ) /*0x5c799c*/
  {
    v4 = &a2[4 * a3 - 4]; /*0x5c79b1*/
    v5 = a3; /*0x5c79b7*/
    if ( !*(_DWORD *)v4 ) /*0x5c79ad*/
    {
      do /*0x5c79c6*/
      {
        if ( !--v5 ) /*0x5c79bc*/
          break; /*0x5c79bc*/
        v6 = *((_DWORD *)v4 - 1); /*0x5c79be*/
        v4 -= 4; /*0x5c79c1*/
      }
      while ( !v6 ); /*0x5c79c6*/
    }
    if ( v5 <= 1 ) /*0x5c79cb*/
      return -1; /*0x5c79d8*/
  }
  memset(v32, 0, 4 * ((unsigned int)(4 * a3) >> 2)); /*0x5c79f1*/
  v32[0] = 0; /*0x5c7a00*/
  memset(a1, 0, 4 * ((unsigned int)(4 * a3) >> 2)); /*0x5c7a0b*/
  *a1 = 0; /*0x5c7a18*/
  v8 = a3; /*0x5c7a1e*/
  v9 = *(_DWORD *)&a2[4 * a3 - 4]; /*0x5c7a20*/
  v10 = (int)&a2[4 * a3 - 4]; /*0x5c7a24*/
  v31 = (_DWORD *)v10; /*0x5c7a2a*/
  if ( v9 ) /*0x5c7a2e*/
  {
LABEL_10:
    if ( v8 ) /*0x5c7a3f*/
    {
      v13 = v8; /*0x5c7a49*/
      v14 = 0x80000000; /*0x5c7a4b*/
      v15 = *(_DWORD *)&a2[4 * v8 - 4]; /*0x5c7a50*/
      v16 = 32 * v13; /*0x5c7a54*/
      if ( v15 >= 0 ) /*0x5c7a59*/
      {
        do /*0x5c7a60*/
        {
          v14 >>= 1; /*0x5c7a5b*/
          --v16; /*0x5c7a5d*/
        }
        while ( (v15 & v14) == 0 ); /*0x5c7a60*/
      }
      v12 = v16; /*0x5c7a62*/
      goto LABEL_15; /*0x5c7a62*/
    }
  }
  else
  {
    while ( --v8 ) /*0x5c7a30*/
    {
      v11 = *(_DWORD *)(v10 - 4); /*0x5c7a33*/
      v10 -= 4; /*0x5c7a36*/
      if ( v11 ) /*0x5c7a3b*/
        goto LABEL_10; /*0x5c7a3b*/
    }
  }
  v12 = 0; /*0x5c7a41*/
LABEL_15:
  if ( v12 == -1 ) /*0x5c7a69*/
    v27 = 0; /*0x5c7a6b*/
  else
    v27 = 1 << (v12 % 32); /*0x5c7a88*/
  v32[(unsigned int)(v12 - 1) >> 5] |= 1 << ((v12 - 1) & 0x1F); /*0x5c7aa8*/
  v17 = &a1[(v12 + 32) / 32 - 1]; /*0x5c7ab8*/
  if ( v12 ) /*0x5c7abc*/
  {
    v18 = &v32[a3 - 1]; /*0x5c7ac3*/
    v30 = v12; /*0x5c7ac7*/
    do /*0x5c7b81*/
    {
      RotateBitBufferLeft(v32, 1, a3); /*0x5c7adc*/
      v19 = a3; /*0x5c7ae4*/
      v20 = v31; /*0x5c7ae6*/
      if ( (unsigned int)*v18 >= *v31 ) /*0x5c7aee*/
      {
        v21 = (char *)v18 - (char *)v31; /*0x5c7af2*/
        v22 = (unsigned int)*v18 <= *v31; /*0x5c7af4*/
        while ( v22 ) /*0x5c7af7*/
        {
          --v20; /*0x5c7af9*/
          if ( !--v19 ) /*0x5c7afd*/
            break; /*0x5c7afd*/
          v22 = *(_DWORD *)((char *)v20 + v21) <= *v20; /*0x5c7b01*/
          if ( *(_DWORD *)((char *)v20 + v21) < *v20 ) /*0x5c7b04*/
            goto LABEL_30; /*0x5c7b04*/
        }
        v29 = 0; /*0x5c7b0b*/
        v23 = v32; /*0x5c7b15*/
        if ( 2 * a3 ) /*0x5c7b10*/
        {
          v24 = 2 * a3; /*0x5c7b25*/
          do /*0x5c7b55*/
          {
            v25 = *(_WORD *)((char *)v23 + a2 - (char *)v32); /*0x5c7b2a*/
            v23 = (int *)((char *)v23 + 2); /*0x5c7b2e*/
            v26 = *((unsigned __int16 *)v23 - 1) - v25 - v29; /*0x5c7b45*/
            *((_WORD *)v23 - 1) = v26; /*0x5c7b47*/
            --v24; /*0x5c7b50*/
            v29 = BYTE2(v26) & 1; /*0x5c7b51*/
          }
          while ( v24 ); /*0x5c7b55*/
        }
        *v17 |= v27; /*0x5c7b5f*/
      }
LABEL_30:
      v27 >>= 1; /*0x5c7b61*/
      if ( !v27 ) /*0x5c7b6b*/
      {
        v27 = 0x80000000; /*0x5c7b6d*/
        --v17; /*0x5c7b75*/
      }
      --v30; /*0x5c7b7d*/
    }
    while ( v30 ); /*0x5c7b81*/
  }
  return 0; /*0x5c79cd*/
}


// ==== 0x005C7BA0  sub_5C7BA0  this=-  sig=ida-proto ====
char __fastcall sub_5C7BA0(const char *a1, unsigned __int16 *a2, int a3)
{
  unsigned __int16 *v3; // ebp
  const char *v4; // esi
  unsigned __int16 *v5; // eax
  unsigned int v6; // kr04_4
  int v7; // ebx
  unsigned __int8 *v8; // esi
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // edx
  unsigned __int16 *v12; // ecx
  int v13; // esi
  unsigned __int16 v14; // ax
  unsigned int v15; // eax
  unsigned int *v16; // edi
  unsigned int *v17; // edx
  int v18; // ebp
  unsigned int v19; // esi
  unsigned int v20; // eax
  int *v21; // eax
  int v22; // ecx
  int v23; // esi
  int v24; // ecx
  bool v25; // zf
  bool v27; // [esp+Fh] [ebp-11h]
  __int16 v28; // [esp+10h] [ebp-10h]
  bool v29; // [esp+14h] [ebp-Ch]
  unsigned __int8 *i; // [esp+18h] [ebp-8h]

  v3 = a2; /*0x5c7ba5*/
  v4 = a1; /*0x5c7ba7*/
  LOBYTE(v5) = 0; /*0x5c7bae*/
  memset(a2, 0, 4 * a3); /*0x5c7bb2*/
  *(_DWORD *)a2 = 0; /*0x5c7bba*/
  if ( a1 )
  {
    v6 = strlen(a1) + 1; /*0x5c7bc8*/
    if ( v6 != 1 )
    {
      switch ( toupper(v4[v6 - 2]) ) /*0x5c7bf1*/
      {
        case 'B': /*0x5c7bf1*/
          v28 = 2; /*0x5c7c0c*/
          break; /*0x5c7c14*/
        case 'H': /*0x5c7bf1*/
          v28 = 16; /*0x5c7bf8*/
          break; /*0x5c7c00*/
        case 'O': /*0x5c7bf1*/
          v28 = 8; /*0x5c7c02*/
          break; /*0x5c7c0a*/
        default:
          v28 = 10; /*0x5c7c16*/
          break; /*0x5c7c16*/
      }
      v27 = *v4 == 45; /*0x5c7c26*/
      if ( *v4 == 45 ) /*0x5c7c2a*/
        ++v4; /*0x5c7c2c*/
      v7 = *(unsigned __int8 *)v4; /*0x5c7c30*/
      v8 = (unsigned __int8 *)(v4 + 1); /*0x5c7c32*/
      for ( i = v8; v7; i = v8 )
      {
        if ( v7 != 44 )
        {
          if ( !isxdigit((char)v7) ) /*0x5c7c4c*/
            break; /*0x5c7c4c*/
          v9 = isdigit((char)v7) ? v7 - 48 : (unsigned __int8)(toupper((char)v7) - 65) + 10;
          if ( v9 >= (unsigned __int16)v28 ) /*0x5c7c93*/
            break; /*0x5c7c93*/
          v10 = a3; /*0x5c7c99*/
          v11 = 0; /*0x5c7c9d*/
          v12 = v3; /*0x5c7c9f*/
          v13 = 2 * a3; /*0x5c7ca1*/
          if ( 2 * a3 > 0 ) /*0x5c7ca6*/
          {
            do /*0x5c7cc2*/
            {
              v14 = *v12++; /*0x5c7cad*/
              v15 = v11 + v28 * v14; /*0x5c7cb6*/
              *(v12 - 1) = v15; /*0x5c7cb8*/
              --v13; /*0x5c7cbf*/
              v11 = HIWORD(v15); /*0x5c7cc0*/
            }
            while ( v13 ); /*0x5c7cc2*/
            v10 = a3; /*0x5c7cc4*/
          }
          v29 = 0; /*0x5c7cca*/
          v16 = (unsigned int *)v3; /*0x5c7ccf*/
          v17 = (unsigned int *)v3; /*0x5c7cd1*/
          if ( v10 ) /*0x5c7cd3*/
          {
            v18 = v10; /*0x5c7cd5*/
            do /*0x5c7d0e*/
            {
              v19 = *v16 + v9; /*0x5c7ce2*/
              v20 = v19 + v29; /*0x5c7ce5*/
              v29 = v19 < *v16 || v29 && !v20; /*0x5c7cfe*/
              *v17 = v20; /*0x5c7d03*/
              v9 = 0; /*0x5c7d05*/
              ++v16; /*0x5c7d07*/
              ++v17; /*0x5c7d0a*/
              --v18; /*0x5c7d0d*/
            }
            while ( v18 ); /*0x5c7d0e*/
            v3 = a2; /*0x5c7d10*/
          }
          v8 = i; /*0x5c7d14*/
        }
        v7 = *v8++; /*0x5c7d1a*/
      }
      LOBYTE(v5) = v27; /*0x5c7d29*/
      if ( v27 ) /*0x5c7d30*/
      {
        v21 = (int *)v3; /*0x5c7d36*/
        if ( a3 > 0 ) /*0x5c7d3a*/
        {
          v22 = a3; /*0x5c7d3c*/
          do /*0x5c7d49*/
          {
            v23 = *v21++; /*0x5c7d3e*/
            *(v21 - 1) = ~v23; /*0x5c7d45*/
            --v22; /*0x5c7d48*/
          }
          while ( v22 ); /*0x5c7d49*/
        }
        v24 = a3; /*0x5c7d4b*/
        v25 = *(_DWORD *)v3 == -1; /*0x5c7d50*/
        v5 = v3; /*0x5c7d51*/
        ++*(_DWORD *)v3; /*0x5c7d53*/
        for ( ; v25; v25 = (*(_DWORD *)v5)++ == -1 ) /*0x5c7d56*/
        {
          v5 += 2; /*0x5c7d58*/
          if ( !--v24 ) /*0x5c7d5c*/
            break; /*0x5c7d5c*/
        }
      }
    }
  }
  return (char)v5; /*0x5c7d65*/
}


// ==== 0x005C7DB0  Math_Compute  this=unknown  sig=csp ====
void __fastcall sub_5C7DB0(_WORD *a1, unsigned __int16 *a2, unsigned __int16 a3, int a4)
{
  int v4; // ebx
  unsigned int v5; // esi
  unsigned __int16 v6; // ax
  unsigned int v7; // eax
  unsigned int v8; // eax

  v4 = a4; /*0x5c7db1*/
  v5 = 0; /*0x5c7db6*/
  if ( a4 <= 0 ) /*0x5c7dba*/
  {
    *a1 = *a1; /*0x5c7df4*/
  }
  else
  {
    do /*0x5c7de8*/
    {
      v6 = *a2++; /*0x5c7dcc*/
      v7 = v5 + (unsigned __int16)*a1 + a3 * v6; /*0x5c7dda*/
      *a1++ = v7; /*0x5c7ddc*/
      v8 = HIWORD(v7); /*0x5c7de2*/
      --v4; /*0x5c7de5*/
      v5 = v8; /*0x5c7de6*/
    }
    while ( v4 ); /*0x5c7de8*/
    *a1 += v8; /*0x5c7dea*/
  }
}


// ==== 0x005C7E00  sub_5C7E00  this=-  sig=ida-proto ====
int __fastcall sub_5C7E00(_DWORD *a1, unsigned __int16 *a2, unsigned __int16 *a3, int a4)
{
  unsigned __int16 *v4; // ebp
  int result; // eax
  char *v6; // edx
  unsigned __int16 v7; // bx
  unsigned __int16 *v8; // edi
  _WORD *v9; // ecx
  unsigned int v10; // esi
  unsigned __int16 v11; // ax
  unsigned int v12; // eax
  int v14; // [esp+14h] [ebp-8h]
  char *v15; // [esp+18h] [ebp-4h]
  int v16; // [esp+20h] [ebp+4h]
  int v17; // [esp+24h] [ebp+8h]

  v4 = a3; /*0x5c7e1e*/
  memset(a1, 0, 4 * ((unsigned int)(8 * a4) >> 2)); /*0x5c7e25*/
  result = 2 * a4; /*0x5c7e2e*/
  *a1 = 0; /*0x5c7e31*/
  v14 = 2 * a4; /*0x5c7e39*/
  if ( 2 * a4 > 0 ) /*0x5c7e3d*/
  {
    v6 = (char *)((char *)a1 - (char *)a3); /*0x5c7e3f*/
    v16 = 2 * a4; /*0x5c7e41*/
    v15 = v6; /*0x5c7e45*/
    do /*0x5c7ea5*/
    {
      v7 = *v4; /*0x5c7e49*/
      v8 = a2; /*0x5c7e4d*/
      v9 = (unsigned __int16 *)((char *)v4++ + (_DWORD)v6); /*0x5c7e51*/
      v10 = 0; /*0x5c7e57*/
      if ( result > 0 ) /*0x5c7e5b*/
      {
        v17 = result; /*0x5c7e63*/
        do /*0x5c7e8f*/
        {
          v11 = *v8++; /*0x5c7e6b*/
          v12 = v10 + (unsigned __int16)*v9 + v7 * v11; /*0x5c7e79*/
          *v9++ = v12; /*0x5c7e7b*/
          v10 = HIWORD(v12); /*0x5c7e84*/
          --v17; /*0x5c7e8b*/
        }
        while ( v17 ); /*0x5c7e8f*/
        result = v14; /*0x5c7e91*/
        v6 = v15; /*0x5c7e95*/
      }
      *v9 += v10; /*0x5c7e99*/
      --v16; /*0x5c7ea1*/
    }
    while ( v16 ); /*0x5c7ea5*/
  }
  return result; /*0x5c7ea7*/
}


// ==== 0x005C7EC0  ModBigIntExp_Helper  this=int  sig=csp ====
int __fastcall sub_5C7EC0(const void *a1, int a2)
{
  int v2; // ebx
  int v3; // edx
  int *v4; // esi
  int v5; // ecx
  int *v6; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // edx
  int *v12; // eax
  int v14; // edx
  int *v15; // eax
  int v17; // eax
  int v18; // eax
  int v19; // edx
  unsigned int v20; // ecx
  int v21; // ecx
  bool v22; // zf
  int *v23; // eax
  int v24; // edx
  int *v25; // eax
  int v27; // eax
  int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // eax

  v2 = a2; /*0x5c7ec1*/
  v3 = a2; /*0x5c7ed5*/
  qmemcpy(&MEMORY[0xABF5B4], a1, v3 * 4); /*0x5c7eda*/
  v4 = &MEMORY[0xABF5B0][v3]; /*0x5c7ee3*/
  v5 = v2; /*0x5c7ee9*/
  v6 = &MEMORY[0xABF5B0][v3]; /*0x5c7eeb*/
  if ( !MEMORY[0xABF5B0][v3] ) /*0x5c7eed*/
  {
    while ( --v5 ) /*0x5c7ef2*/
    {
      if ( *--v6 ) /*0x5c7ef5*/
        goto LABEL_4; /*0x5c7efd*/
    }
    goto LABEL_5; /*0x5c7ef3*/
  }
LABEL_4:
  if ( !v5 ) /*0x5c7f01*/
  {
LABEL_5:
    v8 = 0; /*0x5c7f03*/
    goto LABEL_8; /*0x5c7f05*/
  }
  v9 = v5; /*0x5c7f07*/
  v10 = MEMORY[0xABF5B0][v5]; /*0x5c7f09*/
  v11 = 0x80000000; /*0x5c7f10*/
  v8 = 32 * v9; /*0x5c7f15*/
  if ( v10 >= 0 ) /*0x5c7f1a*/
  {
    do /*0x5c7f21*/
    {
      v11 >>= 1; /*0x5c7f1c*/
      --v8; /*0x5c7f1e*/
    }
    while ( (v10 & v11) == 0 ); /*0x5c7f21*/
  }
LABEL_8:
  MEMORY[0xABF6B8][0] = v8; /*0x5c7f23*/
  MEMORY[0xABF59C] = (v8 + 15) / 16; /*0x5c7f34*/
  v12 = v4; /*0x5c7f39*/
  if ( !*v4 ) /*0x5c7f3b*/
  {
    do /*0x5c7f4b*/
    {
      if ( !--v2 ) /*0x5c7f41*/
        break; /*0x5c7f41*/
    }
    while ( !*--v12 ); /*0x5c7f4b*/
  }
  v14 = 2; /*0x5c7f56*/
  MEMORY[0xABF8C8] = MEMORY[0xABF5AC][v2]; /*0x5c7f5e*/
  v15 = &MEMORY[0xABF8CC]; /*0x5c7f67*/
  MEMORY[0xABF8CC] = MEMORY[0xABF5B0][v2]; /*0x5c7f6e*/
  if ( MEMORY[0xABF8CC] ) /*0x5c7f74*/
  {
LABEL_16:
    v18 = v14; /*0x5c7f8b*/
    v19 = MEMORY[0xABF8C4][v14]; /*0x5c7f8d*/
    v20 = 0x80000000; /*0x5c7f94*/
    v17 = 32 * v18; /*0x5c7f99*/
    if ( v19 >= 0 ) /*0x5c7f9e*/
    {
      do /*0x5c7fa5*/
      {
        v20 >>= 1; /*0x5c7fa0*/
        --v17; /*0x5c7fa2*/
      }
      while ( (v19 & v20) == 0 ); /*0x5c7fa5*/
    }
  }
  else
  {
    while ( --v14 ) /*0x5c7f76*/
    {
      if ( *--v15 ) /*0x5c7f79*/
        goto LABEL_16; /*0x5c7f81*/
    }
    v17 = 0; /*0x5c7f87*/
  }
  MEMORY[0xABF8C4][0] = v17 - 32; /*0x5c7fb1*/
  RotateBitBufferRight(&MEMORY[0xABF8C8], v17 - 32, 2); /*0x5c7fb7*/
  DivideBigInteger(&MEMORY[0xABF5A4], (char *)&MEMORY[0xABF8C8], 2); /*0x5c7fc8*/
  RotateBitBufferRight(&MEMORY[0xABF5A4], 1, 2); /*0x5c7fd9*/
  v21 = 2; /*0x5c7ff5*/
  MEMORY[0xABF8C4][0] = (MEMORY[0xABF8C4][0] + 15) % 16 + 1; /*0x5c7ffa*/
  v22 = MEMORY[0xABF5A4] == -1; /*0x5c8006*/
  v23 = &MEMORY[0xABF5A4]; /*0x5c8007*/
  ++MEMORY[0xABF5A4]; /*0x5c800c*/
  for ( ; v22; v22 = (*v23)++ == -1 ) /*0x5c8012*/
  {
    ++v23; /*0x5c8014*/
    if ( !--v21 ) /*0x5c8018*/
      break; /*0x5c8018*/
  }
  v24 = 2; /*0x5c8027*/
  v25 = &MEMORY[0xABF5A8]; /*0x5c802e*/
  if ( MEMORY[0xABF5A8] ) /*0x5c8033*/
  {
LABEL_24:
    v27 = v24; /*0x5c8046*/
    v28 = MEMORY[0xABF5A0][v24]; /*0x5c8048*/
    v29 = 0x80000000; /*0x5c804f*/
    v30 = 32 * v27; /*0x5c8054*/
    if ( v28 >= 0 ) /*0x5c8059*/
    {
      do /*0x5c8060*/
      {
        v29 >>= 1; /*0x5c805b*/
        --v30; /*0x5c805d*/
      }
      while ( (v28 & v29) == 0 ); /*0x5c8060*/
    }
    if ( v30 > 0x20 ) /*0x5c8065*/
    {
      RotateBitBufferRight(&MEMORY[0xABF5A4], 1, 2); /*0x5c8073*/
      --MEMORY[0xABF8C4][0]; /*0x5c8078*/
    }
  }
  else
  {
    while ( --v24 ) /*0x5c8035*/
    {
      if ( *--v25 ) /*0x5c8038*/
        goto LABEL_24; /*0x5c8040*/
    }
  }
  LOWORD(MEMORY[0xABF6B4]) = HIWORD(MEMORY[0xABF5A4]); /*0x5c8091*/
  LOWORD(MEMORY[0xABF5A0][0]) = MEMORY[0xABF5A4]; /*0x5c8091*/
  return 0; /*0x5c809a*/
}


// ==== 0x005C80A0  ObjectClass::ComputeModularInverse  this=int  sig=csp ====
int __thiscall ComputeModularInverse(int *this, _WORD *a2, int a3)
{
  int v3; // eax
  int v5; // edi
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // esi
  int v11; // edx
  int v12; // ecx
  bool v13; // zf
  int *v14; // eax
  int *v15; // eax
  int v16; // ecx
  int v17; // ebx
  int *v18; // eax
  int v19; // edi
  int v20; // ebp
  char *v21; // esi
  __int16 v22; // ax
  __int16 v23; // bx
  __int16 v24; // cx
  unsigned int v25; // eax
  unsigned int v26; // edx
  _WORD *v27; // ecx
  int v28; // ebx
  unsigned __int16 v29; // ax
  unsigned int v30; // ebp
  unsigned int v31; // eax
  int v32; // ecx
  int v33; // edx
  unsigned __int16 v34; // ax
  int v35; // eax
  int *v36; // eax
  int v37; // ecx
  int v38; // esi
  int v39; // ecx
  int *v40; // eax
  int v41; // ecx
  int *v42; // eax
  int v43; // edx
  char *v45; // [esp+10h] [ebp-14h]
  int v46; // [esp+14h] [ebp-10h]
  unsigned __int8 v47; // [esp+18h] [ebp-Ch]
  int v48; // [esp+1Ch] [ebp-8h]
  int v50; // [esp+28h] [ebp+4h]
  _WORD *v51; // [esp+28h] [ebp+4h]

  HIWORD(v3) = 0; /*0x5c80b1*/
  memset(&MEMORY[0xABF6BC], 0, 4 * ((unsigned int)(8 * a3) >> 2)); /*0x5c80c4*/
  v5 = 2 * a3; /*0x5c80d1*/
  MEMORY[0xABF6BC] = 0; /*0x5c80d4*/
  if ( 2 * a3 > 0 ) /*0x5c80e0*/
  {
    v50 = 2 * a3; /*0x5c80e7*/
    do /*0x5c8108*/
    {
      LOWORD(v3) = *a2++; /*0x5c80ed*/
      Math_Compute(v3, v5); /*0x5c80fa*/
      v3 = --v50; /*0x5c8103*/
    }
    while ( v50 ); /*0x5c8108*/
  }
  v6 = v5 + 1; /*0x5c810a*/
  v7 = v6; /*0x5c810b*/
  v8 = 4 * v6 + 11269816; /*0x5c810d*/
  MEMORY[0xABF6B8][v6] = 0; /*0x5c8114*/
  if ( !MEMORY[0xABF6B8][v6] ) /*0x5c811a*/
  {
    do /*0x5c812b*/
    {
      if ( !--v7 ) /*0x5c8121*/
        break; /*0x5c8121*/
      v9 = *(_DWORD *)(v8 - 4); /*0x5c8123*/
      v8 -= 4; /*0x5c8126*/
    }
    while ( !v9 ); /*0x5c812b*/
  }
  v10 = MEMORY[0xABF59C]; /*0x5c812d*/
  v11 = 2 * v7; /*0x5c8133*/
  if ( 2 * v7 >= MEMORY[0xABF59C] ) /*0x5c8138*/
  {
    v12 = v6; /*0x5c8144*/
    v13 = MEMORY[0xABF6BC] == -1; /*0x5c8146*/
    v14 = &MEMORY[0xABF6BC]; /*0x5c8147*/
    ++MEMORY[0xABF6BC]; /*0x5c814c*/
    for ( ; v13; v13 = (*v14)++ == -1 ) /*0x5c8152*/
    {
      ++v14; /*0x5c8154*/
      if ( !--v12 ) /*0x5c8158*/
        break; /*0x5c8158*/
    }
    v15 = &MEMORY[0xABF6BC]; /*0x5c8163*/
    if ( v6 > 0 ) /*0x5c8168*/
    {
      v16 = v6; /*0x5c816a*/
      do /*0x5c8177*/
      {
        v17 = *v15++; /*0x5c816c*/
        *(v15 - 1) = ~v17; /*0x5c8173*/
        --v16; /*0x5c8176*/
      }
      while ( v16 ); /*0x5c8177*/
    }
    v18 = &MEMORY[0xABF6BC]; /*0x5c817f*/
    if ( !++MEMORY[0xABF6BC] ) /*0x5c818b*/
    {
      do /*0x5c8198*/
      {
        ++v18; /*0x5c818d*/
        if ( !--v6 ) /*0x5c8191*/
          break; /*0x5c8191*/
        v13 = (*v18)++ == -1; /*0x5c8195*/
      }
      while ( v13 ); /*0x5c8198*/
    }
    v19 = 2 * v11 + 11269822; /*0x5c819c*/
    v20 = v19 - 2 * v10; /*0x5c81ab*/
    if ( v11 - v10 != -1 ) /*0x5c81af*/
    {
      v48 = v11 - v10 + 1; /*0x5c81ba*/
      v21 = (char *)&MEMORY[0xABF5B4] - v20; /*0x5c81be*/
      while ( 1 ) /*0x5c81c0*/
      {
        v22 = *(_WORD *)(v19 - 4); /*0x5c81c0*/
        v23 = *(_WORD *)(v19 - 6); /*0x5c81c4*/
        v24 = *(_WORD *)(v19 - 2); /*0x5c81c8*/
        v19 -= 2; /*0x5c81cc*/
        v45 = v21 + 2; /*0x5c81de*/
        v51 = (_WORD *)(v20 - 2); /*0x5c81f0*/
        v25 = ((((((unsigned __int16)MEMORY[0xABF6B4] * (unsigned int)(unsigned __int16)~v22) >> 1) /*0x5c824a*/
               + (((((unsigned __int16)MEMORY[0xABF6B4] * ((unsigned int)(unsigned __int16)~v23 + 1)) >> 1)
                 + (((unsigned __int16)MEMORY[0xABF5A0] * (unsigned int)(unsigned __int16)~v22 + 0x10000) >> 1)
                 + 1) >> 16)
               + (((unsigned __int16)MEMORY[0xABF5A0] * (unsigned int)(unsigned __int16)~v24) >> 1)
               + 1) >> 14)
             + 2 * (unsigned __int16)MEMORY[0xABF6B4] * (unsigned __int16)~v24) >> MEMORY[0xABF8C4];
        if ( v25 >= 0xFFFF ) /*0x5c8251*/
          break; /*0x5c8251*/
        if ( (_WORD)v25 ) /*0x5c825d*/
          goto LABEL_22; /*0x5c825d*/
        v20 -= 2; /*0x5c8315*/
        v21 += 2; /*0x5c8319*/
LABEL_34:
        if ( !--v48 ) /*0x5c8326*/
          goto LABEL_35; /*0x5c8326*/
      }
      LOWORD(v25) = -1; /*0x5c8253*/
LABEL_22:
      v20 -= 2; /*0x5c8263*/
      v26 = 0; /*0x5c826d*/
      v27 = v51; /*0x5c8271*/
      if ( 2 * a3 <= 0 ) /*0x5c8273*/
      {
        v21 += 2; /*0x5c830f*/
      }
      else
      {
        v46 = 2 * a3; /*0x5c827b*/
        v21 += 2; /*0x5c827f*/
        v28 = (unsigned __int16)v25; /*0x5c8283*/
        do /*0x5c82b0*/
        {
          v29 = *(_WORD *)((char *)v27 + (_DWORD)v45); /*0x5c828d*/
          v30 = v26 + (unsigned __int16)*v27++; /*0x5c8297*/
          v31 = v30 + v28 * v29; /*0x5c829c*/
          *(v27 - 1) = v31; /*0x5c829e*/
          v26 = HIWORD(v31); /*0x5c82a5*/
          --v46; /*0x5c82ac*/
        }
        while ( v46 ); /*0x5c82b0*/
        v20 = (int)v51; /*0x5c82b2*/
      }
      *v27 += v26; /*0x5c82b6*/
      if ( *(char *)(v19 + 1) >= 0 ) /*0x5c82bd*/
      {
        v47 = 0; /*0x5c82c3*/
        v32 = v20; /*0x5c82c8*/
        if ( 2 * a3 ) /*0x5c82cd*/
        {
          v33 = 2 * a3; /*0x5c82d4*/
          do /*0x5c8304*/
          {
            v34 = *(_WORD *)&v21[v32]; /*0x5c82d9*/
            v32 += 2; /*0x5c82dd*/
            v35 = *(unsigned __int16 *)(v32 - 2) - v34 - v47; /*0x5c82f4*/
            *(_WORD *)(v32 - 2) = v35; /*0x5c82f6*/
            --v33; /*0x5c82ff*/
            v47 = BYTE2(v35) & 1; /*0x5c8300*/
          }
          while ( v33 ); /*0x5c8304*/
          if ( (v35 & 0x10000) != 0 ) /*0x5c8308*/
            --*(_WORD *)v19; /*0x5c830a*/
        }
      }
      goto LABEL_34; /*0x5c830d*/
    }
LABEL_35:
    v36 = &MEMORY[0xABF6BC]; /*0x5c832c*/
    if ( a3 > 0 ) /*0x5c8337*/
    {
      v37 = a3; /*0x5c8339*/
      do /*0x5c8346*/
      {
        v38 = *v36++; /*0x5c833b*/
        *(v36 - 1) = ~v38; /*0x5c8342*/
        --v37; /*0x5c8345*/
      }
      while ( v37 ); /*0x5c8346*/
    }
    v39 = a3; /*0x5c834e*/
    v13 = MEMORY[0xABF6BC] == -1; /*0x5c8350*/
    v40 = &MEMORY[0xABF6BC]; /*0x5c8351*/
    ++MEMORY[0xABF6BC]; /*0x5c8356*/
    for ( ; v13; v13 = (*v40)++ == -1 ) /*0x5c835c*/
    {
      ++v40; /*0x5c835e*/
      if ( !--v39 ) /*0x5c8362*/
        break; /*0x5c8362*/
    }
    v41 = a3; /*0x5c836b*/
    v42 = &MEMORY[0xABF6BC]; /*0x5c8374*/
    v13 = MEMORY[0xABF6BC]-- == 0; /*0x5c8379*/
    if ( v13 ) /*0x5c8382*/
    {
      do /*0x5c8394*/
      {
        ++v42; /*0x5c8384*/
        if ( !--v41 ) /*0x5c8388*/
          break; /*0x5c8388*/
        v43 = *v42 - 1; /*0x5c838d*/
        *v42 = v43; /*0x5c838f*/
      }
      while ( v43 == -1 ); /*0x5c8394*/
    }
  }
  qmemcpy(this, &MEMORY[0xABF6BC], 4 * a3); /*0x5c83a5*/
  return 0; /*0x5c83a7*/
}


// ==== 0x005C8470  ObjectClass::method_5C8470  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_5C8470(_WORD *this)
{
  unsigned int result; // eax

  result = ((((((unsigned __int16)MEMORY[0xABF5A0] * (unsigned int)(unsigned __int16)~*this) >> 1) /*0x5c84f0*/
            + (((((unsigned __int16)MEMORY[0xABF6B4] * ((unsigned int)(unsigned __int16)~*(this - 2) + 1)) >> 1)
              + (((unsigned __int16)~*(this - 1) * (unsigned int)(unsigned __int16)MEMORY[0xABF5A0] + 0x10000) >> 1)
              + 1) >> 16)
            + (((unsigned __int16)~*(this - 1) * (unsigned int)(unsigned __int16)MEMORY[0xABF6B4]) >> 1)
            + 1) >> 14)
          + 2 * (unsigned __int16)MEMORY[0xABF6B4] * (unsigned __int16)~*this) >> MEMORY[0xABF8C4];
  if ( result >= 0xFFFF ) /*0x5c84f7*/
    return 0xFFFF; /*0x5c84f9*/
  return result; /*0x5c84ea*/
}


// ==== 0x005C8500  ModBigIntExp  this=int  sig=csp ====
int __fastcall ModBigIntExp(_DWORD *a0, AbstractClass *aP1, char *a2, char *a3, int a5)
{
  int v5; // ebp
  int v6; // edx
  char *v7; // eax
  int v8; // ecx
  int v9; // esi
  char *v10; // eax
  int v11; // ecx
  char *v13; // eax
  int v14; // ecx
  int v15; // edi
  char *v16; // ebx
  int v17; // ecx
  char *v18; // edi
  _DWORD *v19; // eax
  int v20; // edi
  bool v21; // cc
  int v22; // ecx
  char *v23; // eax
  bool v24; // cc
  unsigned int v25; // edi
  char *v26; // eax
  int v27; // esi
  int v28; // ecx
  unsigned int v29; // edi
  int v30; // ecx
  char *v31; // eax
  int v32; // edx
  int v33; // esi
  int v34; // eax
  int v35; // ecx
  unsigned int v36; // edx
  int v37; // eax
  unsigned int v38; // ebx
  _WORD *v39; // edx
  char *v40; // ebp
  unsigned int v41; // ebx
  int v43; // [esp+14h] [ebp-110h]
  int v45; // [esp+1Ch] [ebp-108h]
  unsigned int v46; // [esp+20h] [ebp-104h]
  char v47[256]; // [esp+24h] [ebp-100h] BYREF

  v5 = a5; /*0x5c8508*/
  v6 = 4 * a5; /*0x5c8516*/
  memset(a0, 0, 4 * ((unsigned int)(4 * a5) >> 2)); /*0x5c8529*/
  *a0 = 1; /*0x5c853d*/
  if ( !*(_DWORD *)a2 ) /*0x5c8543*/
  {
    v7 = &a2[v6 - 4]; /*0x5c854c*/
    v8 = a5; /*0x5c8552*/
    if ( !*(_DWORD *)v7 ) /*0x5c8548*/
    {
      do /*0x5c8561*/
      {
        if ( !--v8 ) /*0x5c8557*/
          break; /*0x5c8557*/
        v9 = *((_DWORD *)v7 - 1); /*0x5c8559*/
        v7 -= 4; /*0x5c855c*/
      }
      while ( !v9 ); /*0x5c8561*/
    }
    if ( v8 <= 1 ) /*0x5c8566*/
    {
      if ( !*(_DWORD *)aP1->__pad_0 ) /*0x5c856c*/
      {
        v10 = &aP1->__pad_0[v6 - 4]; /*0x5c8579*/
        if ( !*(_DWORD *)v10 ) /*0x5c8575*/
        {
          do /*0x5c858c*/
          {
            if ( !--v5 ) /*0x5c8582*/
              break; /*0x5c8582*/
            v11 = *((_DWORD *)v10 - 1); /*0x5c8584*/
            v10 -= 4; /*0x5c8587*/
          }
          while ( !v11 ); /*0x5c858c*/
        }
        if ( v5 <= 1 ) /*0x5c8591*/
          return -1; /*0x5c85a4*/
      }
      return 0; /*0x5c8591*/
    }
  }
  if ( !*(_DWORD *)a3 ) /*0x5c85ae*/
  {
    v13 = &a3[v6 - 4]; /*0x5c85b7*/
    v14 = a5; /*0x5c85bd*/
    if ( !*(_DWORD *)v13 ) /*0x5c85b3*/
    {
      do /*0x5c85cc*/
      {
        if ( !--v14 ) /*0x5c85c2*/
          break; /*0x5c85c2*/
        v15 = *((_DWORD *)v13 - 1); /*0x5c85c4*/
        v13 -= 4; /*0x5c85c7*/
      }
      while ( !v15 ); /*0x5c85cc*/
    }
    if ( v14 <= 1 ) /*0x5c85d1*/
      return -2; /*0x5c85e2*/
  }
  v16 = &a3[v6 - 4]; /*0x5c85e9*/
  v17 = a5; /*0x5c85ed*/
  v18 = &aP1->__pad_0[v6 - 4]; /*0x5c85ef*/
  v19 = v16; /*0x5c85f3*/
  if ( *(_DWORD *)v18 < *(_DWORD *)v16 ) /*0x5c85f9*/
  {
LABEL_23:
    v22 = a5; /*0x5c860f*/
    v23 = &a3[v6 - 4]; /*0x5c8620*/
    if ( *(_DWORD *)&a2[v6 - 4] >= *(_DWORD *)v16 ) /*0x5c8626*/
    {
      v24 = *(_DWORD *)&a2[v6 - 4] <= *(_DWORD *)v16; /*0x5c862a*/
      while ( v24 ) /*0x5c862d*/
      {
        v23 -= 4; /*0x5c862f*/
        if ( !--v22 ) /*0x5c8633*/
          break; /*0x5c8633*/
        v25 = *(_DWORD *)&v23[a2 - a3]; /*0x5c8637*/
        v24 = v25 <= *(_DWORD *)v23; /*0x5c863a*/
        if ( v25 < *(_DWORD *)v23 ) /*0x5c863c*/
          goto LABEL_31; /*0x5c863c*/
      }
      return -4; /*0x5c8661*/
    }
LABEL_31:
    v26 = &a3[v6 - 4]; /*0x5c8664*/
    v27 = a5; /*0x5c8666*/
    v45 = a5; /*0x5c8668*/
    if ( !*(_DWORD *)v16 ) /*0x5c866c*/
    {
      do /*0x5c867c*/
      {
        if ( !--v27 ) /*0x5c8672*/
          break; /*0x5c8672*/
        v28 = *((_DWORD *)v26 - 1); /*0x5c8674*/
        v26 -= 4; /*0x5c8677*/
      }
      while ( !v28 ); /*0x5c867c*/
      v45 = v27; /*0x5c867e*/
    }
    if ( ModBigIntExp_Helper(a3, v27) ) /*0x5c868b*/
      return -5; /*0x5c86a3*/
    v29 = 4 * v27; /*0x5c86ad*/
    v30 = v27; /*0x5c86b4*/
    v46 = 4 * v27; /*0x5c86b6*/
    v31 = &a2[4 * v27 - 4]; /*0x5c86be*/
    if ( *(_DWORD *)v31 ) /*0x5c86ba*/
    {
LABEL_40:
      if ( v30 ) /*0x5c86d5*/
      {
        v34 = v30; /*0x5c86db*/
        v35 = *(_DWORD *)&a2[4 * v30 - 4]; /*0x5c86dd*/
        v36 = 0x80000000; /*0x5c86e1*/
        v37 = 32 * v34; /*0x5c86e6*/
        if ( v35 >= 0 ) /*0x5c86eb*/
        {
          do /*0x5c86f2*/
          {
            v36 >>= 1; /*0x5c86ed*/
            --v37; /*0x5c86ef*/
          }
          while ( (v35 & v36) == 0 ); /*0x5c86f2*/
        }
        v33 = v37; /*0x5c86f4*/
        goto LABEL_45; /*0x5c86f4*/
      }
    }
    else
    {
      while ( --v30 ) /*0x5c86c6*/
      {
        v32 = *((_DWORD *)v31 - 1); /*0x5c86c9*/
        v31 -= 4; /*0x5c86cc*/
        if ( v32 ) /*0x5c86d1*/
          goto LABEL_40; /*0x5c86d1*/
      }
    }
    v33 = 0; /*0x5c86d7*/
LABEL_45:
    if ( (v33 + 31) / 32 ) /*0x5c86ff*/
    {
      if ( v33 ) /*0x5c870a*/
        v38 = 1 << ((v33 - 1) % 32); /*0x5c8725*/
      else
        v38 = 0; /*0x5c870c*/
      v39 = a0; /*0x5c8727*/
      v40 = &a2[4 * ((v33 + 31) / 32) - 4]; /*0x5c872d*/
      v43 = v33 - 1; /*0x5c8734*/
      qmemcpy(a0, aP1, v29); /*0x5c8741*/
      v41 = v38 >> 1; /*0x5c8748*/
      if ( !v41 ) /*0x5c874c*/
      {
        v41 = 0x80000000; /*0x5c874e*/
        v40 = &a2[4 * ((v33 + 31) / 32) - 8]; /*0x5c8753*/
      }
      if ( v33 != 1 ) /*0x5c875f*/
      {
        while ( 1 ) /*0x5c8776*/
        {
          ComputeModularInverse((int *)v47, v39, v45); /*0x5c8776*/
          if ( (v41 & *(_DWORD *)v40) != 0 ) /*0x5c877e*/
            ComputeModularInverse(a0, aP1, v45); /*0x5c878e*/
          else
            qmemcpy(a0, v47, v46); /*0x5c87a6*/
          v41 >>= 1; /*0x5c87af*/
          if ( !v41 ) /*0x5c87b1*/
          {
            v41 = 0x80000000; /*0x5c87b3*/
            v40 -= 4; /*0x5c87b8*/
          }
          if ( !--v43 ) /*0x5c87c4*/
            break; /*0x5c87c4*/
          v39 = a0; /*0x5c8768*/
        }
      }
      memset(&g_MatrixTransformState + 489, 0, v46); /*0x5c87d8*/
      *(&g_MatrixTransformState + 554) = 0; /*0x5c87e1*/
      *(&g_MatrixTransformState + 489) = 0; /*0x5c87f2*/
      memset(&g_MatrixTransformState + 555, 0, v46); /*0x5c87fb*/
      *(&g_MatrixTransformState + 685) = 0; /*0x5c87ff*/
      *((_WORD *)&g_MatrixTransformState + 968) = 0; /*0x5c8808*/
      *(_QWORD *)(&g_MatrixTransformState + 487) = 0; /*0x5c882b*/
      *((_QWORD *)&g_MatrixTransformState + 344) = 0; /*0x5c8830*/
      *(&g_MatrixTransformState + 555) = 0; /*0x5c8836*/
      *(_QWORD *)(&g_MatrixTransformState + 485) = 0; /*0x5c8841*/
      *((_QWORD *)&(&g_MatrixTransformState)[57] + 1) = 0; /*0x5c884d*/
      *((_WORD *)&(&g_MatrixTransformState)[46] + 2) = 0; /*0x5c8853*/
      *(&g_MatrixTransformState + 483) = 0; /*0x5c885a*/
    }
    return 0; /*0x5c8863*/
  }
  v20 = v18 - v16; /*0x5c85fb*/
  v21 = *(_DWORD *)&v16[v20] <= *(_DWORD *)v16; /*0x5c85fd*/
  while ( v21 ) /*0x5c8600*/
  {
    --v19; /*0x5c8602*/
    if ( !--v17 ) /*0x5c8606*/
      break; /*0x5c8606*/
    v21 = *(_DWORD *)((char *)v19 + v20) <= *v19; /*0x5c860a*/
    if ( *(_DWORD *)((char *)v19 + v20) < *v19 ) /*0x5c860d*/
      goto LABEL_23; /*0x5c860d*/
  }
  return -3; /*0x5c8597*/
}


// ==== 0x005C8930  sub_5C8930  this=-  sig=ida-proto ====
char __fastcall sub_5C8930(int a1, int a2)
{
  _WORD *v4; // esi
  _DWORD v6[64]; // [esp+Ch] [ebp-100h] BYREF

  v4 = &unk_82E174; /*0x5c893d*/
  while ( ShiftBigIntAndScan(v6, a1, *v4, a2) ) /*0x5c8955*/
  {
    if ( (unsigned int)++v4 >= 0x82FCE2 ) /*0x5c8960*/
      return 1; /*0x5c896d*/
  }
  return 0; /*0x5c8962*/
}


// ==== 0x005C8980  sub_5C8980  this=-  sig=ida-proto ====
char __fastcall sub_5C8980(char *a1, unsigned int edx0, int a3)
{
  char *v3; // edx
  int v4; // ebx
  char *v5; // eax
  int v6; // esi
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // ecx
  unsigned __int16 *i; // [esp+10h] [ebp-310h]
  int v15; // [esp+14h] [ebp-30Ch]
  char a2[256]; // [esp+20h] [ebp-300h] BYREF
  AbstractClass aP1; // [esp+120h] [ebp-200h] BYREF
  _DWORD a0[64]; // [esp+220h] [ebp-100h] BYREF

  v3 = a1; /*0x5c8993*/
  v4 = a3; /*0x5c8996*/
  qmemcpy(a2, a1, 4 * ((unsigned int)(4 * a3) >> 2)); /*0x5c89ab*/
  v5 = a2; /*0x5c89b6*/
  v6 = a3; /*0x5c89c0*/
  if ( (*(_DWORD *)a2)-- == 0 ) /*0x5c89c3*/
  {
    do /*0x5c89dc*/
    {
      v5 += 4; /*0x5c89cc*/
      if ( !--v6 ) /*0x5c89d0*/
        break; /*0x5c89d0*/
      v8 = *(_DWORD *)v5 - 1; /*0x5c89d5*/
      *(_DWORD *)v5 = v8; /*0x5c89d7*/
    }
    while ( v8 == -1 ); /*0x5c89dc*/
  }
  v15 = 0; /*0x5c89e2*/
  if ( !edx0 ) /*0x5c89ec*/
    return 1; /*0x5c8aa1*/
  for ( i = (unsigned __int16 *)&unk_82E174; ; ++i ) /*0x5c89f2*/
  {
    memset(&aP1, 0, v4 * 4); /*0x5c8a0a*/
    *(_DWORD *)aP1.__pad_0 = *i; /*0x5c8a25*/
    ModBigIntExp(a0, &aP1, a2, v3, a3); /*0x5c8a38*/
    if ( a0[0] != 1 ) /*0x5c8a45*/
      break; /*0x5c8a45*/
    v9 = &a0[v4 - 1]; /*0x5c8a4e*/
    v10 = a3; /*0x5c8a57*/
    if ( !a0[a3 - 1] ) /*0x5c8a47*/
    {
      do /*0x5c8a66*/
      {
        if ( !--v10 ) /*0x5c8a5c*/
          break; /*0x5c8a5c*/
      }
      while ( !*--v9 ); /*0x5c8a66*/
    }
    if ( v10 > 1 ) /*0x5c8a6b*/
      break; /*0x5c8a6b*/
    if ( ++v15 >= edx0 ) /*0x5c8a7d*/
      return 1; /*0x5c8a87*/
    v3 = a1; /*0x5c8a89*/
  }
  return 0; /*0x5c8a92*/
}


// ==== 0x005C8AB0  ValidateRSAKey  this=-  sig=ida-proto ====
char __fastcall ValidateRSAKey(int a1, char *a2, int a3, int a4)
{
  char *v4; // ecx
  unsigned __int16 v5; // si
  _DWORD *v6; // edx
  int v7; // edi
  unsigned __int16 v8; // ax
  int v9; // eax
  unsigned int v10; // ebx
  _BYTE *v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // eax
  int HighestBitBitArray; // esi
  _DWORD *v16; // eax
  int v17; // ecx
  _DWORD *v19; // edi
  char *v20; // edx
  _DWORD *v21; // eax
  int v22; // esi
  int v23; // edx
  bool v24; // cc
  char *v25; // ebx
  _DWORD *v26; // eax
  int v27; // esi
  int v28; // edx
  bool v29; // cc
  _DWORD *v30; // eax
  int v31; // ecx
  unsigned __int8 v34; // [esp+10h] [ebp-718h]
  int v35; // [esp+10h] [ebp-718h]
  unsigned int v36; // [esp+14h] [ebp-714h]
  unsigned __int8 v37; // [esp+18h] [ebp-710h]
  int v38; // [esp+1Ch] [ebp-70Ch]
  char *v39; // [esp+20h] [ebp-708h]
  int v40; // [esp+24h] [ebp-704h] BYREF
  _DWORD v41[64]; // [esp+28h] [ebp-700h] BYREF
  _DWORD v42[64]; // [esp+128h] [ebp-600h] BYREF
  _DWORD v43[64]; // [esp+228h] [ebp-500h] BYREF
  char v44[256]; // [esp+328h] [ebp-400h] BYREF
  _BYTE v45[256]; // [esp+428h] [ebp-300h] BYREF
  char v46[256]; // [esp+528h] [ebp-200h] BYREF
  _DWORD v47[64]; // [esp+628h] [ebp-100h] BYREF

  v40 = a1; /*0x5c8ac1*/
  v39 = a2; /*0x5c8ac9*/
  v4 = a2; /*0x5c8ad0*/
  v34 = 0; /*0x5c8ad2*/
  v5 = 1; /*0x5c8ad9*/
  v6 = v42; /*0x5c8ade*/
  if ( 2 * a4 ) /*0x5c8acd*/
  {
    v7 = 2 * a4; /*0x5c8ae7*/
    do /*0x5c8b19*/
    {
      v8 = *(_WORD *)v4; /*0x5c8af2*/
      v4 += 2; /*0x5c8af5*/
      v6 = (_DWORD *)((char *)v6 + 2); /*0x5c8b04*/
      v9 = v8 - v5 - v34; /*0x5c8b07*/
      v5 = 0; /*0x5c8b09*/
      *((_WORD *)v6 - 1) = v9; /*0x5c8b0b*/
      --v7; /*0x5c8b14*/
      v34 = BYTE2(v9) & 1; /*0x5c8b15*/
    }
    while ( v7 ); /*0x5c8b19*/
  }
  v10 = 0; /*0x5c8b1d*/
  v36 = 0; /*0x5c8b25*/
  if ( 32 * a4 ) /*0x5c8b22*/
  {
    do /*0x5c8b48*/
    {
      if ( ((1 << (v10 & 0x1F)) & v42[v10 >> 5]) != 0 ) /*0x5c8b43*/
        break; /*0x5c8b43*/
      ++v10; /*0x5c8b45*/
    }
    while ( v10 < 32 * a4 ); /*0x5c8b48*/
    v36 = v10; /*0x5c8b4a*/
  }
  qmemcpy(v46, v42, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c8b68*/
  RotateBitBufferRight(v42, v10, a4); /*0x5c8b7b*/
  v38 = 0; /*0x5c8b87*/
  if ( a3 <= 0 ) /*0x5c8b91*/
    return 1; /*0x5c8dbe*/
  while ( 1 ) /*0x5c8bac*/
  {
    memset(v44, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c8bac*/
    v37 = 0; /*0x5c8bb0*/
    *(_DWORD *)v44 = 2; /*0x5c8bbe*/
    v11 = v45; /*0x5c8bce*/
    if ( 2 * a4 ) /*0x5c8bc9*/
    {
      v12 = 2 * a4; /*0x5c8bf7*/
      do /*0x5c8c25*/
      {
        v13 = *(unsigned __int16 *)&v11[(char *)v42 - v45] - *(unsigned __int16 *)&v11[v44 - v45]; /*0x5c8c06*/
        v11 += 2; /*0x5c8c12*/
        v14 = v13 - v37; /*0x5c8c15*/
        *((_WORD *)v11 - 1) = v14; /*0x5c8c17*/
        --v12; /*0x5c8c20*/
        v37 = BYTE2(v14) & 1; /*0x5c8c21*/
      }
      while ( v12 ); /*0x5c8c25*/
      v10 = v36; /*0x5c8c27*/
    }
    HighestBitBitArray = FindBitArrayHighestBit((int)v45, a4); /*0x5c8c39*/
    do /*0x5c8c63*/
      ValidateRSAKey_Helper(HighestBitBitArray, a4); /*0x5c8c48*/
    while ( (int)CompareBigIntLE(a4) > 0 ); /*0x5c8c63*/
    Crypto_Helper(v44, 0, a4); /*0x5c8c7e*/
    ModBigIntExp(v41, v43, v46, v39, a4); /*0x5c8c9c*/
    if ( v41[0] == 1 ) /*0x5c8ca6*/
    {
      v16 = &v41[a4 - 1]; /*0x5c8cac*/
      v17 = a4; /*0x5c8cb2*/
      if ( !*v16 ) /*0x5c8ca8*/
      {
        do /*0x5c8cc1*/
        {
          if ( !--v17 ) /*0x5c8cb7*/
            break; /*0x5c8cb7*/
        }
        while ( !*--v16 ); /*0x5c8cc1*/
      }
      if ( v17 <= 1 ) /*0x5c8cc6*/
        goto LABEL_40; /*0x5c8cc6*/
    }
    v19 = &v41[a4 + 63]; /*0x5c8ccc*/
    v20 = (char *)&v41[a4 - 1]; /*0x5c8cd3*/
    v21 = v19; /*0x5c8cd7*/
    v22 = a4; /*0x5c8cd9*/
    if ( *(_DWORD *)v20 >= *v19 ) /*0x5c8cdf*/
    {
      v23 = v20 - (char *)v19; /*0x5c8ce1*/
      v24 = *(_DWORD *)((char *)v19 + v23) <= *v19; /*0x5c8ce3*/
      do /*0x5c8cf7*/
      {
        if ( !v24 ) /*0x5c8ce6*/
          break; /*0x5c8ce6*/
        --v21; /*0x5c8ce8*/
        if ( !--v22 ) /*0x5c8cec*/
          goto LABEL_40; /*0x5c8cec*/
        v24 = *(_DWORD *)((char *)v21 + v23) <= *v21; /*0x5c8cf4*/
      }
      while ( *(_DWORD *)((char *)v21 + v23) >= *v21 ); /*0x5c8cf7*/
    }
    v35 = 1; /*0x5c8cfc*/
    if ( v10 > 1 ) /*0x5c8d04*/
      break; /*0x5c8d04*/
LABEL_39:
    if ( v35 == v10 ) /*0x5c8d91*/
      return 0; /*0x5c8d91*/
LABEL_40:
    if ( ++v38 >= a3 ) /*0x5c8da5*/
      return 1; /*0x5c8da5*/
  }
  v25 = &v46[4 * a4 + 252]; /*0x5c8d0a*/
  while ( 1 ) /*0x5c8d2a*/
  {
    ModBigIntExp(v47, v41, v44, v39, a4); /*0x5c8d2a*/
    v26 = &v41[a4 + 63]; /*0x5c8d31*/
    v27 = a4; /*0x5c8d33*/
    if ( *(_DWORD *)v25 >= *v19 ) /*0x5c8d39*/
    {
      v28 = v25 - (char *)v19; /*0x5c8d3d*/
      v29 = *(_DWORD *)v25 <= *v19; /*0x5c8d3f*/
      do /*0x5c8d4f*/
      {
        if ( !v29 ) /*0x5c8d42*/
          break; /*0x5c8d42*/
        --v26; /*0x5c8d44*/
        if ( !--v27 ) /*0x5c8d48*/
          goto LABEL_38; /*0x5c8d48*/
        v29 = *(_DWORD *)((char *)v26 + v28) <= *v26; /*0x5c8d4c*/
      }
      while ( *(_DWORD *)((char *)v26 + v28) >= *v26 ); /*0x5c8d4f*/
    }
    if ( v41[0] == 1 ) /*0x5c8d56*/
    {
      v30 = &v41[a4 - 1]; /*0x5c8d5c*/
      v31 = a4; /*0x5c8d62*/
      if ( !*v30 ) /*0x5c8d58*/
      {
        do /*0x5c8d71*/
        {
          if ( !--v31 ) /*0x5c8d67*/
            break; /*0x5c8d67*/
        }
        while ( !*--v30 ); /*0x5c8d71*/
      }
      if ( v31 <= 1 ) /*0x5c8d76*/
        return 0; /*0x5c8dac*/
    }
    if ( ++v35 >= v36 ) /*0x5c8d87*/
    {
LABEL_38:
      v10 = v36; /*0x5c8d89*/
      goto LABEL_39; /*0x5c8d89*/
    }
  }
}


// ==== 0x005C8DD0  ValidateRSAKey_Helper  this=VOID_PTR  sig=csp ====
char __fastcall sub_5C8DD0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // ebp
  char result; // al

  v5 = a3; /*0x5c8dd9*/
  if ( a3 >= 32 * a4 ) /*0x5c8dea*/
    v5 = 32 * a4; /*0x5c8dec*/
  memset(a1, 0, 4 * a4); /*0x5c8dfc*/
  *a1 = 0; /*0x5c8e02*/
  (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a2 + 8))(a2, a1, v5 / 8 + 1); /*0x5c8e0c*/
  result = ~(-1 << (v5 % 8)) & *((_BYTE *)a1 + v5 / 8); /*0x5c8e2a*/
  *((_BYTE *)a1 + v5 / 8) = result; /*0x5c8e2c*/
  return result; /*0x5c8e27*/
}


// ==== 0x005C8E40  sub_5C8E40  this=ObjectClass  sig=csp ====
char __fastcall sub_5C8E40(ObjectClass *aP0, int a2, int a3, ObjectClass *aP3, int a5)
{
  int v5; // edi
  _BYTE *v7; // ecx
  int v8; // eax
  int v9; // eax
  char *v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // ebp
  int *v14; // edx
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // esi
  char v21; // cl
  int v22; // ebp
  char *v23; // edx
  unsigned int *v24; // eax
  int v25; // esi
  int v26; // edx
  bool v27; // cc
  unsigned int v28; // edi
  ObjectClass *v29; // edi
  int v30; // edx
  char *v31; // ecx
  unsigned __int8 v33; // [esp+10h] [ebp-114h]
  int v34; // [esp+10h] [ebp-114h]
  bool v35; // [esp+10h] [ebp-114h]
  int v36; // [esp+14h] [ebp-110h]
  char *v37; // [esp+14h] [ebp-110h]
  int v39; // [esp+1Ch] [ebp-108h]
  char *v40; // [esp+20h] [ebp-104h] BYREF
  _BYTE v41[256]; // [esp+24h] [ebp-100h] BYREF

  v5 = a5; /*0x5c8e4a*/
  v33 = 0; /*0x5c8e57*/
  v7 = v41; /*0x5c8e5f*/
  if ( 2 * a5 ) /*0x5c8e63*/
  {
    v36 = 2 * a5; /*0x5c8e85*/
    do /*0x5c8ebc*/
    {
      v8 = *(unsigned __int16 *)&v7[(char *)aP3 - v41] - *(unsigned __int16 *)&v7[a3 - (_DWORD)v41]; /*0x5c8e95*/
      v7 += 2; /*0x5c8ea1*/
      v9 = v8 - v33; /*0x5c8ea4*/
      *((_WORD *)v7 - 1) = v9; /*0x5c8ea6*/
      v33 = BYTE2(v9) & 1; /*0x5c8eaf*/
      --v36; /*0x5c8eb8*/
    }
    while ( v36 ); /*0x5c8ebc*/
  }
  v10 = &v41[4 * a5 - 4]; /*0x5c8ec2*/
  v11 = a5; /*0x5c8ec8*/
  v37 = v10; /*0x5c8eca*/
  if ( *(_DWORD *)v10 ) /*0x5c8ebe*/
  {
LABEL_7:
    if ( v11 ) /*0x5c8edf*/
    {
      v14 = (int *)&v41[4 * v11 - 4]; /*0x5c8ee9*/
      v15 = v11; /*0x5c8eed*/
      v16 = 0x80000000; /*0x5c8eef*/
      v17 = *v14; /*0x5c8ef4*/
      v18 = 32 * v15; /*0x5c8ef6*/
      if ( v17 >= 0 ) /*0x5c8efb*/
      {
        do /*0x5c8f02*/
        {
          v16 >>= 1; /*0x5c8efd*/
          --v18; /*0x5c8eff*/
        }
        while ( (v17 & v16) == 0 ); /*0x5c8f02*/
      }
      v34 = v18; /*0x5c8f04*/
      v13 = v18; /*0x5c8f08*/
      goto LABEL_12; /*0x5c8f08*/
    }
  }
  else
  {
    while ( --v11 ) /*0x5c8ed0*/
    {
      v12 = *((_DWORD *)v10 - 1); /*0x5c8ed3*/
      v10 -= 4; /*0x5c8ed6*/
      if ( v12 ) /*0x5c8edb*/
        goto LABEL_7; /*0x5c8edb*/
    }
  }
  v13 = 0; /*0x5c8ee1*/
  v34 = 0; /*0x5c8ee3*/
LABEL_12:
  v19 = 32 * a5; /*0x5c8f0a*/
  v39 = 32 * a5; /*0x5c8f13*/
  v40 = &aP0->__pad_0[4 * a5 - 4]; /*0x5c8f17*/
  while ( 1 ) /*0x5c8f1b*/
  {
    if ( v13 >= v19 ) /*0x5c8f1d*/
      v13 = v19; /*0x5c8f1f*/
    memset(aP0, 0, 4 * v5); /*0x5c8f3b*/
    *(_DWORD *)aP0->__pad_0 = 0; /*0x5c8f48*/
    v20 = v13 / 8 + 1; /*0x5c8f53*/
    (*(void (__thiscall **)(int, ObjectClass *, int))(*(_DWORD *)a2 + 8))(a2, aP0, v20); /*0x5c8f56*/
    v21 = v13 % 8; /*0x5c8f67*/
    v22 = a5; /*0x5c8f71*/
    v23 = v40; /*0x5c8f7c*/
    aP0->__pad_0[v20 - 1] &= ~(-1 << v21); /*0x5c8f80*/
    v24 = (unsigned int *)&v41[4 * a5 - 4]; /*0x5c8f84*/
    v25 = a5; /*0x5c8f8a*/
    if ( *(_DWORD *)v23 < *(_DWORD *)v37 ) /*0x5c8f90*/
      break; /*0x5c8f90*/
    v26 = v23 - v37; /*0x5c8f92*/
    v27 = *(_DWORD *)&v37[v26] <= *(_DWORD *)v37; /*0x5c8f94*/
    while ( v27 ) /*0x5c8f97*/
    {
      --v24; /*0x5c8f99*/
      if ( --v25 ) /*0x5c8f9d*/
      {
        v28 = *(unsigned int *)((char *)v24 + v26); /*0x5c8fa1*/
        v27 = v28 <= *v24; /*0x5c8fa4*/
        if ( v28 >= *v24 ) /*0x5c8fa6*/
          continue; /*0x5c8fa6*/
      }
      goto LABEL_20; /*0x5c8fa6*/
    }
    v5 = a5; /*0x5c8fe6*/
    v19 = v39; /*0x5c8fed*/
    v13 = v34; /*0x5c8ff1*/
  }
LABEL_20:
  v35 = 0; /*0x5c8fa8*/
  v29 = aP0; /*0x5c8faf*/
  if ( a5 ) /*0x5c8fb1*/
  {
    v30 = a3 - (_DWORD)aP0; /*0x5c8fba*/
    do /*0x5c9008*/
    {
      v24 = (unsigned int *)(*(_DWORD *)aP0->__pad_0 + *(_DWORD *)&v29->__pad_0[v30]); /*0x5c8fc5*/
      v31 = (char *)v24 + v35; /*0x5c8fcd*/
      v35 = (unsigned int)v24 < *(_DWORD *)aP0->__pad_0 || (LOBYTE(v24) = v35) != 0 && !v31; /*0x5c8ffa*/
      *(_DWORD *)v29->__pad_0 = v31; /*0x5c8fff*/
      aP0 = (ObjectClass *)((char *)aP0 + 4); /*0x5c9001*/
      v29 = (ObjectClass *)((char *)v29 + 4); /*0x5c9004*/
      --v22; /*0x5c9007*/
    }
    while ( v22 ); /*0x5c9008*/
  }
  return (char)v24; /*0x5c900a*/
}


// ==== 0x005C9020  ModCryptoExp  this=-  sig=ida-proto ====
char __fastcall ModCryptoExp(char *a1, int edx0)
{
  char *v2; // edi
  __int64 v4; // rax
  int v6; // esi
  char *v7; // eax
  int v8; // ecx
  int v9; // esi
  unsigned __int16 v10; // bp
  _WORD *v11; // edi
  int v12; // esi
  char *v13; // ecx
  _WORD *v14; // esi
  int v15; // edx
  char *v16; // eax
  int v18; // ecx
  unsigned __int16 *v19; // esi
  _DWORD *v20; // eax
  int v21; // ecx
  char a2[252]; // [esp+14h] [ebp-300h] BYREF
  _DWORD a0[64]; // [esp+114h] [ebp-200h] BYREF
  AbstractClass aP1; // [esp+214h] [ebp-100h] BYREF

  v2 = a1; /*0x5c902a*/
  HIDWORD(v4) = *(_DWORD *)a1; /*0x5c9032*/
  if ( (*(_DWORD *)a1 & 1) == 0 ) /*0x5c9037*/
    return 0; /*0x5c9045*/
  v6 = *(_DWORD *)&a1[4 * edx0 - 4]; /*0x5c9046*/
  v7 = &a1[4 * edx0 - 4]; /*0x5c904a*/
  v8 = edx0; /*0x5c9050*/
  if ( !v6 ) /*0x5c9052*/
  {
    do /*0x5c905f*/
    {
      if ( !--v8 ) /*0x5c9055*/
        break; /*0x5c9055*/
      v9 = *((_DWORD *)v7 - 1); /*0x5c9057*/
      v7 -= 4; /*0x5c905a*/
    }
    while ( !v9 ); /*0x5c905f*/
  }
  if ( v8 > 1 || HIDWORD(v4) > (unsigned __int16)dword_82FCE0 ) /*0x5c9072*/
  {
LABEL_17:
    v14 = &unk_82E174; /*0x5c90bb*/
    while ( 1 ) /*0x5c90c0*/
    {
      WORD2(v4) = *v14; /*0x5c90c0*/
      if ( !ShiftBigIntAndScan(a0, (int)v2, SHIDWORD(v4), edx0) ) /*0x5c90ce*/
        break; /*0x5c90ce*/
      if ( (unsigned int)++v14 >= 0x82FCE2 ) /*0x5c90e5*/
      {
        qmemcpy(a2, v2, 4 * ((unsigned int)(4 * edx0) >> 2)); /*0x5c90f9*/
        v15 = edx0; /*0x5c90fd*/
        v16 = a2; /*0x5c9102*/
        if ( (*(_DWORD *)a2)-- == 0 ) /*0x5c910d*/
        {
          do /*0x5c9126*/
          {
            v16 += 4; /*0x5c9116*/
            if ( !--v15 ) /*0x5c911a*/
              break; /*0x5c911a*/
            v18 = *(_DWORD *)v16 - 1; /*0x5c911f*/
            *(_DWORD *)v16 = v18; /*0x5c9121*/
          }
          while ( v18 == -1 ); /*0x5c9126*/
        }
        v19 = (unsigned __int16 *)&unk_82E174; /*0x5c9128*/
        while ( 1 ) /*0x5c9145*/
        {
          memset(&aP1, 0, 4 * ((unsigned int)(4 * edx0) >> 2)); /*0x5c9145*/
          *(_DWORD *)aP1.__pad_0 = *v19; /*0x5c916b*/
          ModBigIntExp(a0, &aP1, a2, a1, edx0); /*0x5c9172*/
          if ( a0[0] != 1 ) /*0x5c917f*/
            break; /*0x5c917f*/
          v20 = &a0[edx0 - 1]; /*0x5c918c*/
          v21 = edx0; /*0x5c9195*/
          if ( !*v20 ) /*0x5c9185*/
          {
            do /*0x5c91a4*/
            {
              if ( !--v21 ) /*0x5c919a*/
                break; /*0x5c919a*/
            }
            while ( !*--v20 ); /*0x5c91a4*/
          }
          if ( v21 > 1 ) /*0x5c91a9*/
            break; /*0x5c91a9*/
          if ( ++v19 >= word_82E178 ) /*0x5c91b8*/
            return 1; /*0x5c91b8*/
        }
        return 0; /*0x5c91a9*/
      }
    }
    return 0; /*0x5c90d6*/
  }
  v10 = *(_WORD *)v2; /*0x5c9074*/
  v11 = &unk_82E174; /*0x5c9077*/
  v12 = 3511; /*0x5c907c*/
  do /*0x5c90a6*/
  {
    v4 = v12; /*0x5c9083*/
    WORD2(v4) = v11[v12 / 2]; /*0x5c9088*/
    v13 = (char *)&v11[v12 / 2]; /*0x5c908c*/
    if ( WORD2(v4) <= v10 ) /*0x5c9092*/
    {
      if ( WORD2(v4) == v10 ) /*0x5c9098*/
        goto LABEL_15; /*0x5c9098*/
      v11 = v13 + 2; /*0x5c909a*/
      v12 += -1 - v12 / 2; /*0x5c90a2*/
    }
    else
    {
      v12 /= 2; /*0x5c9094*/
    }
  }
  while ( v12 > 0 ); /*0x5c90a6*/
  v13 = 0; /*0x5c90a8*/
LABEL_15:
  if ( !v13 ) /*0x5c90b1*/
  {
    v2 = a1; /*0x5c90b7*/
    goto LABEL_17; /*0x5c90b7*/
  }
  return 1; /*0x5c9039*/
}


// ==== 0x005C91D0  sub_5C91D0  this=-  sig=ida-proto ====
int sub_5C91D0()
{
  MEMORY[0xABF8E0] = 0; /*0x5c91d2*/
  MEMORY[0xABF8E4] = 0; /*0x5c91d7*/
  MEMORY[0xABF8E8] = 0; /*0x5c91dc*/
  MEMORY[0xABF8EC] = 0; /*0x5c91e1*/
  return 0; /*0x5c91e6*/
}


// ==== 0x005C91F0  sub_5C91F0  this=-  sig=ida-proto ====
void sub_5C91F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5c91fc*/
  MEMORY[0xABF8F8] = Math::Sqrt(v0 + v0); /*0x5c920e*/
}


// ==== 0x005C9220  sub_5C9220  this=-  sig=ida-proto ====
void sub_5C9220()
{
  MEMORY[0xABF948] = MEMORY[0xABF8F8] / 60.0; /*0x5c922c*/
}


// ==== 0x005C9240  sub_5C9240  this=-  sig=ida-proto ====
void sub_5C9240()
{
  MEMORY[0xABF930] = 1.0 / MEMORY[0xABF948]; /*0x5c924c*/
}


// ==== 0x005C9260  sub_5C9260  this=-  sig=ida-proto ====
void sub_5C9260()
{
  MEMORY[0xABF928] = 0.0174532925199433 * 45.0; /*0x5c926c*/
}


// ==== 0x005C9280  sub_5C9280  this=-  sig=ida-proto ====
void sub_5C9280()
{
  MEMORY[0xABF900] = 0.0174532925199433 * 60.0; /*0x5c928c*/
}


// ==== 0x005C92A0  sub_5C92A0  this=-  sig=ida-proto ====
void sub_5C92A0()
{
  MEMORY[0xABF8D8] = 0.0174532925199433 * 90.0; /*0x5c92ac*/
}


// ==== 0x005C92C0  sub_5C92C0  this=-  sig=ida-proto ====
__int64 sub_5C92C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF8D8] - MEMORY[0xABF900]); /*0x5c92d2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF8F8] * 0.5); /*0x5c92e6*/
  MEMORY[0xABF950] = result; /*0x5c92eb*/
  return result; /*0x5c92f0*/
}


// ==== 0x005C9300  sub_5C9300  this=-  sig=ida-proto ====
void sub_5C9300()
{
  MEMORY[0xABF908] = Math::ArcTan((double)MEMORY[0xABF950] * 0.00390625); /*0x5c9317*/
}


// ==== 0x005C9330  sub_5C9330  this=-  sig=ida-proto ====
void sub_5C9330()
{
  MEMORY[0xABF920] = Math::ArcTan((double)(2 * MEMORY[0xABF950]) / MEMORY[0xABF8F8]); /*0x5c9352*/
}


// ==== 0x005C9360  sub_5C9360  this=-  sig=ida-proto ====
__int64 sub_5C9360()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF950]) + 0.5); /*0x5c937b*/
  MEMORY[0xABF944] = result; /*0x5c9380*/
  return result; /*0x5c9386*/
}


// ==== 0x005C9390  sub_5C9390  this=-  sig=ida-proto ====
int sub_5C9390()
{
  MEMORY[0xABF8F0] = 0; /*0x5c9392*/
  MEMORY[0xABF8F2] = 0; /*0x5c9398*/
  return 0; /*0x5c939e*/
}


// ==== 0x005C93A0  sub_5C93A0  this=-  sig=ida-proto ====
int sub_5C93A0()
{
  MEMORY[0xABF910] = 0; /*0x5c93a2*/
  MEMORY[0xABF914] = 0; /*0x5c93a7*/
  MEMORY[0xABF918] = 0; /*0x5c93ac*/
  return 0; /*0x5c93b1*/
}


// ==== 0x005C93C0  sub_5C93C0  this=-  sig=ida-proto ====
int sub_5C93C0()
{
  MEMORY[0xABF940] = 0; /*0x5c93c5*/
  MEMORY[0xABF938] = 128; /*0x5c93cf*/
  MEMORY[0xABF93C] = 128; /*0x5c93d4*/
  return 128; /*0x5c93d9*/
}


// ==== 0x005C93E0  MPBattleClass::MPMegawealthClass  this=Megawealth  sig=csp ====
_DWORD *__thiscall MPBattleClass::MPMegawealthClass(
        _DWORD *this,
        const wchar_t **a1,
        const wchar_t **a2,
        const char **a3,
        MPCooperative *aP4,
        char aP5,
        int aP6)
{
  MultiplayerGameMode::Construct( /*0x5c9403*/
    this,
    (MultiplayerGameMode *)a1,
    (MultiplayerGameMode *)a2,
    (MultiplayerGameMode *)a3,
    (MultiplayerGameMode *)aP4,
    (MultiplayerGameMode *)aP5,
    (MultiplayerGameMode *)aP6);
  *this = &vt_Megawealth; /*0x5c9408*/
  return this; /*0x5c9410*/
}


// ==== 0x005C9420  Megawealth::method_5C9420  this=Megawealth  sig=csp ====
void __thiscall sub_5C9420(void *this)
{
  *(_DWORD *)this = &vt_Megawealth; /*0x5c9420*/
  MultiplayerGameMode::Dtor(this); /*0x5c9426*/
}


// ==== 0x005C9430  Megawealth::ProcessTick  this=Megawealth  sig=csp ====
char Megawealth::_vt35()
{
  MapClass::ClearShroud(&MEMORY[0x87F7E8], 0); /*0x5c9437*/
  return 1; /*0x5c943e*/
}


// ==== 0x005C9440  Megawealth::QueryInterface  this=Megawealth  sig=csp ====
Megawealth *__thiscall Megawealth::QueryInterface(_DWORD *Block, char a2)
{
  *Block = &vt_Megawealth; /*0x5c9443*/
  MultiplayerGameMode::Dtor(Block); /*0x5c9449*/
  if ( (a2 & 1) != 0 ) /*0x5c9453*/
    __3_YAXPAX_Z(Block); /*0x5c9456*/
  return (Megawealth *)Block; /*0x5c9460*/
}


// ==== 0x005C9470  MPCombatTeam::Constructor  this=MultiplayerObserverTeam  sig=csp ====
MultiplayerObserverTeam *__thiscall MPCombatTeam::Constructor(wchar_t **this)
{
  wchar_t *StringCSF; // eax
  wchar_t *v4; // [esp+4h] [ebp-4h] BYREF

  StringCSF = GetStringCSF(aMpObserverteam, 0, aDRa2mdpostMpob, 5); /*0x5c9482*/
  WideString::Assign(&v4, (CampaignScore *)StringCSF); /*0x5c948c*/
  MultiplayerTeam::Constructor(this, (MPCooperative *)&v4, (wchar_t *)0xFFFFFFFF); /*0x5c949a*/
  DeleteAndZero::Alt((void **)&v4); /*0x5c94a3*/
  *this = (wchar_t *)&MultiplayerObserverTeam::`vftable'; /*0x5c94a8*/
  return (MultiplayerObserverTeam *)this; /*0x5c94b0*/
}


// ==== 0x005C94C0  MultiplayerObserverTeam::AddRef  this=MultiplayerObserverTeam  sig=csp ====
bool __stdcall MultiplayerObserverTeam::_vt01(int a1)
{
  return PlayerClass::IsValidIndex(a1); /*0x5c94ca*/
}


// ==== 0x005C94D0  MultiplayerObserverTeam::QueryInterface  this=MultiplayerObserverTeam  sig=csp ====
MultiplayerObserverTeam *__thiscall MultiplayerObserverTeam::QueryInterface(void **Block, char a2)
{
  MultiplayerTeam::Destructor(Block); /*0x5c94d3*/
  if ( (a2 & 1) != 0 ) /*0x5c94dd*/
    __3_YAXPAX_Z(Block); /*0x5c94e0*/
  return (MultiplayerObserverTeam *)Block; /*0x5c94ea*/
}


// ==== 0x005C94F0  sub_5C94F0  this=-  sig=ida-proto ====
int sub_5C94F0()
{
  MEMORY[0xABF980] = 0; /*0x5c94f2*/
  MEMORY[0xABF984] = 0; /*0x5c94f7*/
  MEMORY[0xABF988] = 0; /*0x5c94fc*/
  MEMORY[0xABF98C] = 0; /*0x5c9501*/
  return 0; /*0x5c9506*/
}


// ==== 0x005C9510  sub_5C9510  this=-  sig=ida-proto ====
void sub_5C9510()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5c951c*/
  MEMORY[0xABF998] = Math::Sqrt(v0 + v0); /*0x5c952e*/
}


// ==== 0x005C9540  sub_5C9540  this=-  sig=ida-proto ====
void sub_5C9540()
{
  MEMORY[0xABF9E8] = MEMORY[0xABF998] / 60.0; /*0x5c954c*/
}


// ==== 0x005C9560  sub_5C9560  this=-  sig=ida-proto ====
void sub_5C9560()
{
  MEMORY[0xABF9D0] = 1.0 / MEMORY[0xABF9E8]; /*0x5c956c*/
}


// ==== 0x005C9580  sub_5C9580  this=-  sig=ida-proto ====
void sub_5C9580()
{
  MEMORY[0xABF9C8] = 0.0174532925199433 * 45.0; /*0x5c958c*/
}


// ==== 0x005C95A0  sub_5C95A0  this=-  sig=ida-proto ====
void sub_5C95A0()
{
  MEMORY[0xABF9A0] = 0.0174532925199433 * 60.0; /*0x5c95ac*/
}


// ==== 0x005C95C0  sub_5C95C0  this=-  sig=ida-proto ====
void sub_5C95C0()
{
  MEMORY[0xABF978] = 0.0174532925199433 * 90.0; /*0x5c95cc*/
}


// ==== 0x005C95E0  sub_5C95E0  this=-  sig=ida-proto ====
__int64 sub_5C95E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF978] - MEMORY[0xABF9A0]); /*0x5c95f2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF998] * 0.5); /*0x5c9606*/
  MEMORY[0xABF9F0] = result; /*0x5c960b*/
  return result; /*0x5c9610*/
}


// ==== 0x005C9620  sub_5C9620  this=-  sig=ida-proto ====
void sub_5C9620()
{
  MEMORY[0xABF9A8] = Math::ArcTan((double)MEMORY[0xABF9F0] * 0.00390625); /*0x5c9637*/
}


// ==== 0x005C9650  sub_5C9650  this=-  sig=ida-proto ====
void sub_5C9650()
{
  MEMORY[0xABF9C0] = Math::ArcTan((double)(2 * MEMORY[0xABF9F0]) / MEMORY[0xABF998]); /*0x5c9672*/
}


// ==== 0x005C9680  sub_5C9680  this=-  sig=ida-proto ====
__int64 sub_5C9680()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF9F0]) + 0.5); /*0x5c969b*/
  MEMORY[0xABF9E4] = result; /*0x5c96a0*/
  return result; /*0x5c96a6*/
}


// ==== 0x005C96B0  sub_5C96B0  this=-  sig=ida-proto ====
int sub_5C96B0()
{
  MEMORY[0xABF990] = 0; /*0x5c96b2*/
  MEMORY[0xABF992] = 0; /*0x5c96b8*/
  return 0; /*0x5c96be*/
}


// ==== 0x005C96C0  sub_5C96C0  this=-  sig=ida-proto ====
int sub_5C96C0()
{
  MEMORY[0xABF9B0] = 0; /*0x5c96c2*/
  MEMORY[0xABF9B4] = 0; /*0x5c96c7*/
  MEMORY[0xABF9B8] = 0; /*0x5c96cc*/
  return 0; /*0x5c96d1*/
}


// ==== 0x005C96E0  sub_5C96E0  this=-  sig=ida-proto ====
int sub_5C96E0()
{
  MEMORY[0xABF9E0] = 0; /*0x5c96e5*/
  MEMORY[0xABF9D8] = 128; /*0x5c96ef*/
  MEMORY[0xABF9DC] = 128; /*0x5c96f4*/
  return 128; /*0x5c96f9*/
}


// ==== 0x005C9700  Scenario::ResetDisplayArrays  this=int  sig=csp ====
void *__thiscall sub_5C9700(void *this)
{
  MEMORY[0xABF9F4] = 0; /*0x5c970f*/
  memset(MEMORY[0xABF958], 0, sizeof(MEMORY[0xABF958])); /*0x5c9714*/
  MEMORY[0xABF9F8] = 0; /*0x5c9716*/
  return this; /*0x5c971d*/
}


// ==== 0x005C9720  Map_Load_5C9720  this=IPXInterfaceClass  sig=ida-proto ====
void __usercall sub_5C9720(int a1@<ebx>, int a2@<ebp>, int a3@<edi>)
{
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+4h] [ebp-Ch]
  __int64 v5; // [esp+8h] [ebp-8h]

  Game::LoadMultiplayerScoreAssets(*((void **)MEMORY[0xA8B230] + 3374)); /*0x5c972e*/
  v5 = *(_QWORD *)&MEMORY[0x8A00A4]; /*0x5c973f*/
  v3 = 0; /*0x5c9751*/
  v4 = 0; /*0x5c9759*/
  Map_Load_72EAD0((int *)MEMORY[0x88730C], &v3); /*0x5c9761*/
  Frame::Present(MEMORY[0x88730C], a1, a2, a3, 0, v3, v4, (int *)v5); /*0x5c9770*/
  Campaign::Screen(0); /*0x5c9781*/
  Map_Load_72EAD0((int *)MEMORY[0x88730C], &v3); /*0x5c9790*/
  Frame::Present(MEMORY[0x88730C], a1, a2, a3, 0, v3, v4, (int *)v5); /*0x5c979f*/
  Map_Init_72D780(); /*0x5c97a4*/
}


// ==== 0x005C9850  sub_5C9850  this=-  sig=ida-proto ====
LRESULT __fastcall sub_5C9850(CampaignScore *aP0, int nIDDlgItem, wchar_t *Format)
{
  HWND DlgItem; // eax
  CampaignScore *v7; // [esp+0h] [ebp-48h]
  wchar_t Buffer[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, Format, v7); /*0x5c9868*/
  DlgItem = GetDlgItem((HWND)aP0, nIDDlgItem); /*0x5c9872*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x5c988b*/
}


// ==== 0x005C98A0  ObjectClass::Map_Get_5C98A0  this=ObjectClass  sig=csp ====
int sub_5C98A0()
{
  int v0; // ecx
  int result; // eax
  int v2; // edi
  size_t v3; // ebp
  int v4; // esi
  int v5; // eax
  int *v6; // ecx
  int v7; // edx
  int v8; // ebp
  int *v9; // ecx
  int v10; // edx
  int v11; // ebp
  int Count; // ebp
  int v13; // ebp
  int v14; // ebp
  int v15; // eax
  int v16; // edi
  int i; // [esp+0h] [ebp-8h]
  int v18; // [esp+4h] [ebp-4h]

  v0 = HouseClass_Count; /*0x5c98a3*/
  result = 0; /*0x5c98a9*/
  MEMORY[0xA8D580] = 0; /*0x5c98ad*/
  v18 = HouseClass_Count; /*0x5c98b2*/
  for ( i = 0; result < v0; i = result ) /*0x5c98ba*/
  {
    v2 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * result]; /*0x5c98ca*/
    if ( v2 && *(_BYTE *)(*(_DWORD *)(v2 + 52) + 422) != 1 && v2 != MEMORY[0xAC1198] ) /*0x5c98eb*/
    {
      v3 = MEMORY[0xA8D580]++; /*0x5c98f6*/
      v4 = 28 * v3; /*0x5c990e*/
      MEMORY[0xA8D228][28 * v3] = 0; /*0x5c9917*/
      wcscpy((wchar_t *)&MEMORY[0xA8D1FC] + 56 * v3, (const wchar_t *)(v2 + 90154)); /*0x5c9922*/
      v5 = 0; /*0x5c9927*/
      MEMORY[0xA8D22C][28 * v3] = 0; /*0x5c992c*/
      MEMORY[0xA8D23C][28 * v3] = 0; /*0x5c9932*/
      MEMORY[0xA8D24C][28 * v3] = 0; /*0x5c9938*/
      MEMORY[0xA8D25C][28 * v3] = 0; /*0x5c993e*/
      MEMORY[0xA8D224][28 * v3] = *(_DWORD *)(v2 + 90196); /*0x5c994a*/
      if ( !*(_BYTE *)(v2 + 501) ) /*0x5c9950*/
      {
        ++MEMORY[0xA8D228][28 * v3]; /*0x5c9961*/
        MEMORY[0xA8D584] = v3; /*0x5c9967*/
      }
      v6 = (int *)(v2 + 21476); /*0x5c996d*/
      v7 = 20; /*0x5c9973*/
      do /*0x5c9980*/
      {
        v8 = *v6++; /*0x5c9978*/
        v5 += v8; /*0x5c997d*/
        --v7; /*0x5c997f*/
      }
      while ( v7 ); /*0x5c9980*/
      v9 = (int *)(v2 + 21560); /*0x5c9982*/
      v10 = 20; /*0x5c9988*/
      do /*0x5c9995*/
      {
        v11 = *v9++; /*0x5c998d*/
        v5 += v11; /*0x5c9992*/
        --v10; /*0x5c9994*/
      }
      while ( v10 ); /*0x5c9995*/
      MEMORY[0xA8D23C][v4] = v5; /*0x5c9997*/
      MEMORY[0xA8D22C][v4] = *(_DWORD *)(v2 + 21556) + *(_DWORD *)(v2 + 21640); /*0x5c99b1*/
      Count = VectorClass::GetCount((_DWORD *)(v2 + 21920)); /*0x5c99c2*/
      v13 = VectorClass::GetCount((_DWORD *)(v2 + 21940)) + Count; /*0x5c99cf*/
      v14 = VectorClass::GetCount((_DWORD *)(v2 + 21960)) + v13; /*0x5c99dc*/
      MEMORY[0xA8D24C][v4] = v14 + VectorClass::GetCount((_DWORD *)(v2 + 21980)); /*0x5c99e5*/
      v15 = *(_DWORD *)(v2 + 21736); /*0x5c99eb*/
      if ( v15 > 0 ) /*0x5c99f3*/
        MEMORY[0xA8D25C][v4] += v15; /*0x5c99f5*/
      if ( !*(_BYTE *)(v2 + 501) ) /*0x5c99fb*/
      {
        v16 = MEMORY[0xA8D25C][v4]; /*0x5c9a05*/
        MEMORY[0xA8D25C][v4] = v16 + v16 / 2 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, v16 / 2, v16); /*0x5c9a2a*/
      }
      Debug::Log(); /*0x5c9a6e*/
      result = i; /*0x5c9a73*/
      v0 = v18; /*0x5c9a77*/
    }
    ++result; /*0x5c9a7e*/
  }
  return result; /*0x5c9a8f*/
}


// ==== 0x005C9AE0  sub_5C9AE0  this=-  sig=ida-proto ====
int __cdecl sub_5C9AE0(const void *a1, const void *a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = *(_DWORD *)(*(_DWORD *)a1 + 96); /*0x5c9aec*/
  v3 = *(_DWORD *)(*(_DWORD *)a2 + 96); /*0x5c9aef*/
  if ( v2 == v3 )
    return 0; /*0x5c9af6*/
  else
    return v2 <= v3 ? 1 : -1;
}


// ==== 0x005C9B10  MPScore::DlgProc  this=unknown  sig=csp ====
int __userpurge MPScore::DlgProc@<eax>(CampaignScore *a1@<ebp>, HWND hWnd, unsigned int a3, int a4, unsigned int a5)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  Movie *v7; // eax
  wchar_t *eax9; // eax
  CellStruct *v8; // ebx
  HWND v10; // eax
  HWND v11; // eax
  int *v12; // ecx
  _DWORD *v13; // ebp
  int v14; // ecx
  int v15; // ebp
  wchar_t *v16; // eax
  HWND v17; // eax
  IUnknown *v18; // ebp
  ObjectClass *v19; // ecx
  char *v20; // eax
  ObjectClass *v21; // edx
  HWND v22; // ebp
  HWND MultiplayerScoreScreenBar; // eax
  bool v24; // cc
  int v25; // eax
  LPARAM v26; // ebp
  HWND v27; // eax
  LPARAM v28; // ecx
  HWND v29; // eax
  HWND v30; // eax
  int v31; // ecx
  HWND v32; // eax
  HWND v33; // eax
  int v34; // ecx
  HWND v35; // eax
  HWND v36; // eax
  int v37; // ecx
  HWND v38; // eax
  HWND v39; // eax
  int v40; // ecx
  HWND v41; // eax
  HWND v42; // eax
  HWND DlgItem; // eax
  HWND v44; // eax
  wchar_t *StringCSF; // [esp-Ch] [ebp-1A4h]
  int v46; // [esp-Ch] [ebp-1A4h]
  Movie *v47; // [esp-8h] [ebp-1A0h]
  CampaignScore *v48; // [esp-4h] [ebp-19Ch] BYREF
  int nIDDlgItem; // [esp+Ch] [ebp-18Ch]
  int *v50; // [esp+10h] [ebp-188h]
  void *v51; // [esp+14h] [ebp-184h]
  int v52; // [esp+18h] [ebp-180h]
  LPARAM v53; // [esp+20h] [ebp-178h]
  int a0[4]; // [esp+24h] [ebp-174h] BYREF
  char v55[4]; // [esp+34h] [ebp-164h] BYREF
  struct tagRECT Rect; // [esp+38h] [ebp-160h] BYREF
  struct tagRECT v57; // [esp+48h] [ebp-150h] BYREF
  wchar_t lParam[32]; // [esp+58h] [ebp-140h] BYREF
  wchar_t v59[32]; // [esp+98h] [ebp-100h] BYREF
  wchar_t v60[32]; // [esp+D8h] [ebp-C0h] BYREF
  wchar_t Buffer[32]; // [esp+118h] [ebp-80h] BYREF
  wchar_t v62[32]; // [esp+158h] [ebp-40h] BYREF

  result = BaseDialogProc((SkirmishDialog *)hWnd, a3, a4, a5); /*0x5c9b38*/
  if ( result ) /*0x5c9b3f*/
    return result; /*0x5c9b3f*/
  v48 = a1; /*0x5c9b45*/
  WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x5c9b49*/
  if ( a3 == 15 ) /*0x5c9b52*/
  {
    DlgItem = GetDlgItem(hWnd, 1746); /*0x5ca08b*/
    ScreenDialogToClient(DlgItem, &Rect); /*0x5ca093*/
    v44 = GetDlgItem(hWnd, *(&off_82FD58 + 5 * *(_DWORD *)&HouseClass_Player.__pad_5568[17100])); /*0x5ca0a9*/
    ScreenDialogToClient(v44, &v57); /*0x5ca0b1*/
    a0[0] = Rect.left; /*0x5ca0c2*/
    a0[1] = Rect.top; /*0x5ca0cc*/
    a0[2] = v57.right - Rect.left; /*0x5ca0d0*/
    a0[3] = v57.bottom - Rect.top; /*0x5ca0e1*/
    CubicBezierAdvance(a0, -4, -8); /*0x5ca0e5*/
    DSurface::FillRectWithColor(a0, *(ObjectClass **)&stru_87C374.__pad_579C[22528], 0, 0x9Fu); /*0x5ca0fb*/
    return 0; /*0x5ca0fb*/
  }
  if ( a3 == 273 ) /*0x5c9b5e*/
  {
    if ( (_WORD)a4 == 1745 ) /*0x5ca064*/
    {
      *WindowLongA = 1; /*0x5ca06c*/
      return 0; /*0x5ca07c*/
    }
    return 0; /*0x5ca064*/
  }
  if ( a3 != 1175 ) /*0x5c9b6a*/
    return 0; /*0x5c9b6a*/
  v7 = (Movie *)StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_SCORE); /*0x5c9b7a*/
  ThemeClass::Play((int *)&g_BuildingTypeClass_Count, v7); /*0x5c9b85*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5c9b91*/
  {
    v47 = (Movie *)dword_B779D4; /*0x5c9b9b*/
    StringCSF = GetStringCSF(aTxtGame, 0, g_Str_File_MPScore_cpp, 372); /*0x5c9bb4*/
  }
  else
  {
    v47 = *(Movie **)&HouseClass_Player.__pad_5568[17096]; /*0x5c9bbf*/
    StringCSF = GetStringCSF(aTxtGame, 0, g_Str_File_MPScore_cpp, 374); /*0x5c9bd8*/
  }
  swprintf(lParam, (const size_t)StringCSF, (const wchar_t *const)v47, v48); /*0x5c9bb6*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 5 ) /*0x5c9bea*/
    eax9 = GetStringCSF((wchar_t *)aGuiSkirmishsco, 0, g_Str_File_MPScore_cpp, 378); /*0x5c9bfd*/
  else
    eax9 = GetStringCSF(aGuiMultiplayer, 0, g_Str_File_MPScore_cpp, 380); /*0x5c9c10*/
  v8 = (CellStruct *)eax9; /*0x5c9c21*/
  v10 = GetDlgItem(hWnd, 1684); /*0x5c9c23*/
  SendMessageA(v10, 0x4B2u, 0, (LPARAM)v8); /*0x5c9c34*/
  v11 = GetDlgItem(hWnd, 1746); /*0x5c9c3c*/
  SendMessageA(v11, 0x4B2u, 0, (LPARAM)lParam); /*0x5c9c4b*/
  v12 = *(int **)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1564); /*0x5c9c52*/
  v50 = v12; /*0x5c9c5e*/
  if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1556) != -1 ) /*0x5c9c66*/
  {
    v13 = (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1556); /*0x5c9c58*/
    v12 = (int *)((char *)v50 + Timer::GetTicks() - *v13); /*0x5c9c79*/
    v50 = v12; /*0x5c9c7b*/
  }
  v14 = (int)v12 / 60; /*0x5c9c92*/
  if ( &v48 != (CampaignScore **)-92 ) /*0x5c9c9a*/
  {
    if ( v14 / 3600 > 99 ) /*0x5c9cb6*/
      v14 = 359999; /*0x5c9cb8*/
    v15 = v14 / 3600; /*0x5c9cd0*/
    v46 = (720 * (4 * (v14 / -3600) - v14 / 3600) + v14) / 60; /*0x5c9d05*/
    v16 = GetStringCSF(g_Str_TXT_TIME_FORMAT_HOURS, 0, g_Str_File_MPScore_cpp, 217); /*0x5c9d18*/
    swprintf(lParam, (const size_t)v16, (const wchar_t *const)v15, (CampaignScore *)v46); /*0x5c9d23*/
  }
  v17 = GetDlgItem(hWnd, 1002); /*0x5c9d31*/
  SendMessageA(v17, 0x4B2u, 0, (LPARAM)lParam); /*0x5c9d40*/
  Map_Get_5C98A0(); /*0x5c9d42*/
  v18 = *(IUnknown **)&HouseClass_Player.__pad_5568[17100]; /*0x5c9d47*/
  if ( *(int *)&HouseClass_Player.__pad_5568[17100] > 0 ) /*0x5c9d4f*/
  {
    v19 = (ObjectClass *)(&(&g_MatrixTransformState)[60] + 2); /*0x5c9d51*/
    v20 = &HouseClass_Player.__pad_5568[16200]; /*0x5c9d56*/
    v21 = *(ObjectClass **)&HouseClass_Player.__pad_5568[17100]; /*0x5c9d5b*/
    do /*0x5c9d66*/
    {
      *(_DWORD *)v19->__pad_0 = v20; /*0x5c9d5d*/
      v20 += 112; /*0x5c9d5f*/
      v19 = (ObjectClass *)((char *)v19 + 4); /*0x5c9d62*/
      v21 = (ObjectClass *)((char *)v21 - 1); /*0x5c9d65*/
    }
    while ( v21 ); /*0x5c9d66*/
  }
  if ( (int)v18 > 1 ) /*0x5c9d6b*/
    qsort((AbstractClass *)(&(&g_MatrixTransformState)[60] + 2), v18, 4u, sub_5C9AE0); /*0x5c9d7a*/
  v51 = 0; /*0x5c9d82*/
  v50 = (int *)&unk_82FDFC; /*0x5c9d8a*/
  do /*0x5c9dd1*/
  {
    v22 = GetDlgItem(hWnd, *v50); /*0x5c9d9c*/
    MultiplayerScoreScreenBar = (HWND)Game::GetMultiplayerScoreScreenBar(v51); /*0x5c9da2*/
    if ( v22 && MultiplayerScoreScreenBar ) /*0x5c9dad*/
      CacheDialogInvalidate(v22, MultiplayerScoreScreenBar); /*0x5c9db3*/
    v24 = (int)(v50 + 1) < (int)dword_82FE04; /*0x5c9dc4*/
    v51 = (char *)v51 + 1; /*0x5c9dc9*/
    ++v50; /*0x5c9dcd*/
  }
  while ( v24 ); /*0x5c9dd1*/
  v51 = 0; /*0x5c9dd8*/
  if ( *(int *)&HouseClass_Player.__pad_5568[17100] <= 0 ) /*0x5c9de2*/
    return 0; /*0x5ca100*/
  v50 = (int *)&unk_82FD60; /*0x5c9de8*/
  do /*0x5ca04a*/
  {
    v25 = Color::ConvertToRGB( /*0x5c9e12*/
            (unsigned __int8 *)(*(_DWORD *)(stru_B05488.field_4C
                                          + 4 * (*(&g_MatrixTransformState + (_DWORD)v51 + 62))[3].Y)
                              + 776),
            (int)v55);
    LOWORD(v52) = *(_WORD *)v25; /*0x5c9e1a*/
    BYTE2(v52) = *(_BYTE *)(v25 + 2); /*0x5c9e22*/
    v26 = (unsigned __int8)v52 | (*(unsigned __int16 *)((char *)&v52 + 1) << 8); /*0x5c9e58*/
    nIDDlgItem = (int)GetDlgItem(hWnd, dword_82FE04[(_DWORD)v51]); /*0x5c9e5c*/
    v27 = (HWND)Game::GetMultiplayerScoreScreenBar((char *)v51 + 2); /*0x5c9e67*/
    if ( nIDDlgItem ) /*0x5c9e72*/
    {
      if ( v27 ) /*0x5c9e76*/
        CacheDialogInvalidate((HWND)nIDDlgItem, v27); /*0x5c9e7a*/
    }
    v28 = (LPARAM)*(&g_MatrixTransformState + (_DWORD)v51 + 62); /*0x5c9e8a*/
    nIDDlgItem = *(v50 - 1); /*0x5c9e93*/
    v53 = v28; /*0x5c9e97*/
    v29 = GetDlgItem(hWnd, nIDDlgItem); /*0x5c9e9b*/
    SendMessageA(v29, 0x4B2u, 0, v53); /*0x5c9eaa*/
    v30 = GetDlgItem(hWnd, nIDDlgItem); /*0x5c9eb2*/
    SendMessageA(v30, 0x498u, 0, v26); /*0x5c9ebd*/
    v31 = (int)*(&g_MatrixTransformState + (_DWORD)v51 + 62); /*0x5c9ec9*/
    nIDDlgItem = *v50; /*0x5c9ed0*/
    swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, *(const wchar_t *const *)(v31 + 64), v48); /*0x5c9ee5*/
    v32 = GetDlgItem(hWnd, nIDDlgItem); /*0x5c9ef3*/
    SendMessageA(v32, 0x4B2u, 0, (LPARAM)Buffer); /*0x5c9f05*/
    v33 = GetDlgItem(hWnd, nIDDlgItem); /*0x5c9f0d*/
    SendMessageA(v33, 0x498u, 0, v26); /*0x5c9f18*/
    v34 = (int)*(&g_MatrixTransformState + (_DWORD)v51 + 62); /*0x5c9f25*/
    nIDDlgItem = v50[1]; /*0x5c9f2c*/
    swprintf(v59, (const size_t)&g_Str_Fmt_PctD, *(const wchar_t *const *)(v34 + 48), v48); /*0x5c9f41*/
    v35 = GetDlgItem(hWnd, nIDDlgItem); /*0x5c9f4f*/
    SendMessageA(v35, 0x4B2u, 0, (LPARAM)v59); /*0x5c9f61*/
    v36 = GetDlgItem(hWnd, nIDDlgItem); /*0x5c9f69*/
    SendMessageA(v36, 0x498u, 0, v26); /*0x5c9f74*/
    v37 = (int)*(&g_MatrixTransformState + (_DWORD)v51 + 62); /*0x5c9f81*/
    nIDDlgItem = v50[2]; /*0x5c9f88*/
    swprintf(v60, (const size_t)&g_Str_Fmt_PctD, *(const wchar_t *const *)(v37 + 80), v48); /*0x5c9f9d*/
    v38 = GetDlgItem(hWnd, nIDDlgItem); /*0x5c9fab*/
    SendMessageA(v38, 0x4B2u, 0, (LPARAM)v60); /*0x5c9fbd*/
    v39 = GetDlgItem(hWnd, nIDDlgItem); /*0x5c9fc5*/
    SendMessageA(v39, 0x498u, 0, v26); /*0x5c9fd0*/
    v40 = (int)*(&g_MatrixTransformState + (_DWORD)v51 + 62); /*0x5c9fdd*/
    nIDDlgItem = v50[3]; /*0x5c9fe4*/
    swprintf(v62, (const size_t)&g_Str_Fmt_PctD, *(const wchar_t *const *)(v40 + 96), v48); /*0x5c9ff9*/
    v41 = GetDlgItem(hWnd, nIDDlgItem); /*0x5ca007*/
    SendMessageA(v41, 0x4B2u, 0, (LPARAM)v62); /*0x5ca019*/
    v42 = GetDlgItem(hWnd, nIDDlgItem); /*0x5ca021*/
    SendMessageA(v42, 0x498u, 0, v26); /*0x5ca02c*/
    v24 = (int)v51 + 1 < *(_DWORD *)&HouseClass_Player.__pad_5568[17100]; /*0x5ca040*/
    v51 = (char *)v51 + 1; /*0x5ca042*/
    v50 += 5; /*0x5ca046*/
  }
  while ( v24 ); /*0x5ca04a*/
  return 0; /*0x5ca051*/
}


// ==== 0x005CA110  Game::GetMultiplayerScoreScreenBar  this=VOID_PTR  sig=csp ====
int __thiscall Game::GetMultiplayerScoreScreenBar(void *this)
{
  int playerSideIndex; // eax

  playerSideIndex = MEMORY[0xA8B230]->playerSideIndex; /*0x5ca115*/
  if ( playerSideIndex ) /*0x5ca11d*/
  {
    if ( playerSideIndex == 1 ) /*0x5ca21f*/
    {
      if ( !this ) /*0x5ca227*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60816], 0); /*0x5ca23b*/
      if ( this == (void *)1 ) /*0x5ca23f*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60820], 0); /*0x5ca253*/
      if ( this == (void *)2 ) /*0x5ca257*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60824], 0); /*0x5ca26c*/
      if ( this == (void *)3 ) /*0x5ca270*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60828], 0); /*0x5ca285*/
      if ( this == (void *)4 ) /*0x5ca289*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60832], 0); /*0x5ca29d*/
      if ( this == (void *)5 ) /*0x5ca2a1*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60836], 0); /*0x5ca2b6*/
      if ( this == (void *)6 ) /*0x5ca2ba*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60840], 0); /*0x5ca2cf*/
      if ( this == (void *)7 ) /*0x5ca2d3*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60844], 0); /*0x5ca2e7*/
      if ( this == (void *)8 ) /*0x5ca2eb*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60848], 0); /*0x5ca300*/
      if ( this == (void *)9 ) /*0x5ca304*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60852], 0); /*0x5ca31d*/
    }
    else if ( playerSideIndex == 2 ) /*0x5ca321*/
    {
      if ( !this ) /*0x5ca329*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60856], 0); /*0x5ca33c*/
      if ( this == (void *)1 ) /*0x5ca340*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60860], 0); /*0x5ca355*/
      if ( this == (void *)2 ) /*0x5ca359*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60864], 0); /*0x5ca36e*/
      if ( this == (void *)3 ) /*0x5ca372*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60868], 0); /*0x5ca386*/
      if ( this == (void *)4 ) /*0x5ca38a*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60872], 0); /*0x5ca39f*/
      if ( this == (void *)5 ) /*0x5ca3a3*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60876], 0); /*0x5ca3b8*/
      if ( this == (void *)6 ) /*0x5ca3bc*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60880], 0); /*0x5ca3d0*/
      if ( this == (void *)7 ) /*0x5ca3d4*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60884], 0); /*0x5ca3e9*/
      if ( this == (void *)8 ) /*0x5ca3ed*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60888], 0); /*0x5ca402*/
      if ( this == (void *)9 ) /*0x5ca406*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60892], 0); /*0x5ca41a*/
    }
  }
  else
  {
    if ( !this ) /*0x5ca125*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60776], 0); /*0x5ca139*/
    if ( this == (void *)1 ) /*0x5ca13d*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60780], 0); /*0x5ca152*/
    if ( this == (void *)2 ) /*0x5ca156*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60784], 0); /*0x5ca16a*/
    if ( this == (void *)3 ) /*0x5ca16e*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60788], 0); /*0x5ca183*/
    if ( this == (void *)4 ) /*0x5ca187*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60792], 0); /*0x5ca19c*/
    if ( this == (void *)5 ) /*0x5ca1a0*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60796], 0); /*0x5ca1b4*/
    if ( this == (void *)6 ) /*0x5ca1b8*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60800], 0); /*0x5ca1cd*/
    if ( this == (void *)7 ) /*0x5ca1d1*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60804], 0); /*0x5ca1e6*/
    if ( this == (void *)8 ) /*0x5ca1ea*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60808], 0); /*0x5ca1fe*/
    if ( this == (void *)9 ) /*0x5ca202*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60812], 0); /*0x5ca21b*/
  }
  return 0; /*0x5ca139*/
}


// ==== 0x005CA420  sub_5CA420  this=-  sig=ida-proto ====
void sub_5CA420()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5ca42c*/
  MEMORY[0xABFA20] = Math::Sqrt(v0 + v0); /*0x5ca43e*/
}


// ==== 0x005CA450  sub_5CA450  this=-  sig=ida-proto ====
void sub_5CA450()
{
  MEMORY[0xABFA70] = MEMORY[0xABFA20] / 60.0; /*0x5ca45c*/
}


// ==== 0x005CA470  sub_5CA470  this=-  sig=ida-proto ====
void sub_5CA470()
{
  MEMORY[0xABFA58] = 1.0 / MEMORY[0xABFA70]; /*0x5ca47c*/
}


// ==== 0x005CA490  sub_5CA490  this=-  sig=ida-proto ====
void sub_5CA490()
{
  MEMORY[0xABFA50] = 0.0174532925199433 * 45.0; /*0x5ca49c*/
}


// ==== 0x005CA4B0  sub_5CA4B0  this=-  sig=ida-proto ====
void sub_5CA4B0()
{
  MEMORY[0xABFA28] = 0.0174532925199433 * 60.0; /*0x5ca4bc*/
}


// ==== 0x005CA4D0  sub_5CA4D0  this=-  sig=ida-proto ====
void sub_5CA4D0()
{
  MEMORY[0xABFA00] = 0.0174532925199433 * 90.0; /*0x5ca4dc*/
}


// ==== 0x005CA4F0  sub_5CA4F0  this=-  sig=ida-proto ====
__int64 sub_5CA4F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABFA00] - MEMORY[0xABFA28]); /*0x5ca502*/
  result = Math::RoundToInt(v0 * MEMORY[0xABFA20] * 0.5); /*0x5ca516*/
  MEMORY[0xABFA78] = result; /*0x5ca51b*/
  return result; /*0x5ca520*/
}


// ==== 0x005CA530  sub_5CA530  this=-  sig=ida-proto ====
void sub_5CA530()
{
  MEMORY[0xABFA30] = Math::ArcTan((double)MEMORY[0xABFA78] * 0.00390625); /*0x5ca547*/
}


// ==== 0x005CA560  sub_5CA560  this=-  sig=ida-proto ====
void sub_5CA560()
{
  MEMORY[0xABFA48] = Math::ArcTan((double)(2 * MEMORY[0xABFA78]) / MEMORY[0xABFA20]); /*0x5ca582*/
}


// ==== 0x005CA590  sub_5CA590  this=-  sig=ida-proto ====
__int64 sub_5CA590()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABFA78]) + 0.5); /*0x5ca5ab*/
  MEMORY[0xABFA6C] = result; /*0x5ca5b0*/
  return result; /*0x5ca5b6*/
}


// ==== 0x005CA5C0  sub_5CA5C0  this=-  sig=ida-proto ====
int sub_5CA5C0()
{
  MEMORY[0xABFA18] = 0; /*0x5ca5c2*/
  MEMORY[0xABFA1A] = 0; /*0x5ca5c8*/
  return 0; /*0x5ca5ce*/
}


// ==== 0x005CA5D0  sub_5CA5D0  this=-  sig=ida-proto ====
int sub_5CA5D0()
{
  MEMORY[0xABFA38] = 0; /*0x5ca5d2*/
  MEMORY[0xABFA3C] = 0; /*0x5ca5d7*/
  MEMORY[0xABFA40] = 0; /*0x5ca5dc*/
  return 0; /*0x5ca5e1*/
}


// ==== 0x005CA5F0  sub_5CA5F0  this=-  sig=ida-proto ====
int sub_5CA5F0()
{
  MEMORY[0xABFA68] = 0; /*0x5ca5f5*/
  MEMORY[0xABFA60] = 128; /*0x5ca5ff*/
  MEMORY[0xABFA64] = 128; /*0x5ca604*/
  return 128; /*0x5ca609*/
}


// ==== 0x005CA610  sub_5CA610  this=-  sig=ida-proto ====
int sub_5CA610()
{
  MEMORY[0xABFA08] = 0; /*0x5ca612*/
  MEMORY[0xABFA0C] = 0; /*0x5ca617*/
  MEMORY[0xABFA10] = 0; /*0x5ca61c*/
  MEMORY[0xABFA14] = 0; /*0x5ca621*/
  return 0; /*0x5ca626*/
}


// ==== 0x005CA630  MPBattleClass::MPSiegeClass  this=MultiplayerSiege  sig=csp ====
_DWORD *__thiscall MPBattleClass::MPSiegeClass(
        _DWORD *this,
        const wchar_t **a1,
        MultiplayerSiege *aP2,
        const char **a3,
        MultiplayerSiege *aP4,
        char aP5,
        MultiplayerSiege *aP6)
{
  MultiplayerGameMode::Construct( /*0x5ca653*/
    this,
    (MultiplayerGameMode *)a1,
    (MultiplayerGameMode *)aP2,
    (MultiplayerGameMode *)a3,
    (MultiplayerGameMode *)aP4,
    (MultiplayerGameMode *)aP5,
    (MultiplayerGameMode *)aP6);
  *this = &vt_MultiplayerSiege; /*0x5ca658*/
  return this; /*0x5ca660*/
}


// ==== 0x005CA670  MultiplayerSiege::method_5CA670  this=MultiplayerSiege  sig=csp ====
void __thiscall sub_5CA670(void *this)
{
  *(_DWORD *)this = &vt_MultiplayerSiege; /*0x5ca670*/
  MultiplayerGameMode::Dtor(this); /*0x5ca676*/
}


// ==== 0x005CA680  MultiplayerSiege::Read  this=MultiplayerSiege  sig=csp ====
char MultiplayerSiege::_vt04()
{
  char result; // al
  int v1; // ecx

  result = PlayerClass::AssignPlayerIndex(); /*0x5ca680*/
  if ( result ) /*0x5ca687*/
  {
    result = 1; /*0x5ca690*/
    if ( MEMORY[0xA8DA84] > 0 ) /*0x5ca697*/
    {
      v1 = 1; /*0x5ca6a1*/
      for ( *(_DWORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 107) = 1; /*0x5ca6ae*/
            v1 < MEMORY[0xA8DA84];
            *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4) + 107) = 2 )
      {
        ++v1; /*0x5ca6bc*/
      }
    }
  }
  return result; /*0x5ca689*/
}


// ==== 0x005CA6D0  MultiplayerSiege::Write  this=MultiplayerSiege  sig=csp ====
char __stdcall MultiplayerSiege::_vt05(void **a1)
{
  char result; // al
  char v2; // bl
  int v3; // edi
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax

  result = ScenarioClass::MissionStubReturnZero2((int)a1); /*0x5ca6d9*/
  if ( result ) /*0x5ca6e0*/
  {
    v2 = 0; /*0x5ca6ef*/
    v3 = 0; /*0x5ca6f1*/
    v4 = 0; /*0x5ca6f3*/
    if ( MEMORY[0xA8DA84] <= 0 ) /*0x5ca6f7*/
    {
LABEL_12:
      StringCSF = GetStringCSF(aMpNodefender, 0, g_Str_File_MPSiege_cpp, 65); /*0x5ca724*/
      WideString::Assign_Alt(a1, StringCSF); /*0x5ca73a*/
      return 0; /*0x5ca742*/
    }
    else
    {
      v5 = MEMORY[0xA8DA78]; /*0x5ca6f9*/
      do /*0x5ca71e*/
      {
        v6 = *(_DWORD *)(*(_DWORD *)v5 + 107); /*0x5ca701*/
        if ( v6 ) /*0x5ca707*/
        {
          v7 = v6 - 1; /*0x5ca709*/
          if ( v7 ) /*0x5ca70a*/
          {
            if ( v7 != 1 ) /*0x5ca70d*/
            {
              v9 = GetStringCSF(aMpIllegalteam, 0, g_Str_File_MPSiege_cpp, 60); /*0x5ca756*/
              WideString::Assign_Alt(a1, v9); /*0x5ca75e*/
              return 0; /*0x5ca769*/
            }
            ++v3; /*0x5ca70f*/
          }
          else
          {
            if ( v2 ) /*0x5ca714*/
            {
              v10 = GetStringCSF(aMpOnlyonebesei, 0, g_Str_File_MPSiege_cpp, 51); /*0x5ca77a*/
              WideString::Assign_Alt(a1, v10); /*0x5ca782*/
              return 0; /*0x5ca78d*/
            }
            v2 = 1; /*0x5ca716*/
          }
        }
        ++v4; /*0x5ca718*/
        v5 += 4; /*0x5ca719*/
      }
      while ( v4 < MEMORY[0xA8DA84] ); /*0x5ca71e*/
      if ( !v2 ) /*0x5ca722*/
        goto LABEL_12; /*0x5ca722*/
      if ( v3 >= 1 ) /*0x5ca793*/
      {
        return 1; /*0x5ca7bc*/
      }
      else
      {
        v11 = GetStringCSF(aMpNoattackers, 0, g_Str_File_MPSiege_cpp, 70); /*0x5ca7a3*/
        WideString::Assign_Alt(a1, v11); /*0x5ca7ab*/
        return 0; /*0x5ca7b3*/
      }
    }
  }
  return result; /*0x5ca6e3*/
}


// ==== 0x005CA7D0  MultiplayerSiege::vt_entry_18  this=MultiplayerSiege  sig=csp ====
// attributes: thunk
bool __thiscall MPBattleClass::vt_entry_18(std::codecvt_base *this)
{
  return ScenarioClass::createStartingForces(this);
}


// ==== 0x005CA7E0  MultiplayerSiege::StubReturnFalse  this=MultiplayerSiege  sig=csp ====
char MultiplayerSiege::_vt15()
{
  return 0; /*0x5ca7e2*/
}


// ==== 0x005CA7F0  ScenarioClass::ClearFlag_0  this=MultiplayerSiege  sig=ida-proto ====
// attributes: thunk
char ScenarioClass::ClearFlag_0()
{
  return ScenarioClass::ClearFlag();
}


// ==== 0x005CA800  MultiplayerSiege::ProcessTurn  this=MultiplayerSiege  sig=csp ====
char __thiscall MultiplayerSiege::_vt33(void *this, char a2)
{
  int v3; // eax
  int v4; // edx
  void *v5; // eax
  int v6; // eax
  _DWORD *v7; // ebx
  int v8; // eax
  int i; // esi
  _DWORD *v10; // edi
  int *v11; // eax
  _DWORD v13[4]; // [esp+10h] [ebp-28h] BYREF
  void **v14; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  char v16; // [esp+2Dh] [ebp-Bh]

  Multiplayer::FindStartPositions(&v14); /*0x5ca811*/
  v3 = 0; /*0x5ca81c*/
  memset(v13, 0, sizeof(v13)); /*0x5ca824*/
  if ( MEMORY[0xA8DA84] > 0 ) /*0x5ca836*/
  {
    v4 = MEMORY[0xA8DA78]; /*0x5ca838*/
    do /*0x5ca848*/
    {
      if ( *(_DWORD *)(*(_DWORD *)v4 + 107) == 1 ) /*0x5ca840*/
        break; /*0x5ca840*/
      ++v3; /*0x5ca842*/
      v4 += 4; /*0x5ca843*/
    }
    while ( v3 < MEMORY[0xA8DA84] ); /*0x5ca848*/
  }
  if ( v3 >= MEMORY[0xA8DA84] ) /*0x5ca84c*/
  {
    v5 = Block; /*0x5ca84e*/
    v14 = &vt_VectorClass_Cell; /*0x5ca852*/
    if ( !Block || !v16 ) /*0x5ca868*/
      return 0; /*0x5ca868*/
    goto LABEL_26; /*0x5ca868*/
  }
  v6 = *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v3) + 111); /*0x5ca876*/
  if ( v6 < 0 || v6 >= HouseClass_Count ) /*0x5ca887*/
  {
    v5 = Block; /*0x5ca980*/
    v14 = &vt_VectorClass_Cell; /*0x5ca984*/
    if ( !Block || !v16 ) /*0x5ca996*/
      return 0; /*0x5ca996*/
LABEL_26:
    __3_YAXPAX_Z(v5); /*0x5ca998*/
    return 0; /*0x5ca9a4*/
  }
  v7 = *(_DWORD **)&HouseClass_Array->__pad_0[4 * v6]; /*0x5ca893*/
  if ( *(_BYTE *)(v7[13] + 422) ) /*0x5ca899*/
  {
    v5 = Block; /*0x5ca8a3*/
    v14 = &vt_VectorClass_Cell; /*0x5ca8a7*/
    if ( !Block || !v16 ) /*0x5ca8bd*/
      return 0; /*0x5ca8bd*/
    goto LABEL_26; /*0x5ca8bd*/
  }
  Debug::Log(); /*0x5ca8d2*/
  v8 = *(_DWORD *)Block; /*0x5ca8e0*/
  LOBYTE(v13[0]) = 1; /*0x5ca8e2*/
  HouseClass::SetMapSeed(v7, v8); /*0x5ca8e8*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x5ca8f6*/
  {
    v10 = *(_DWORD **)&HouseClass_Array->__pad_0[4 * i]; /*0x5ca8fe*/
    if ( !*(_BYTE *)(v10[13] + 422) && v10 != v7 ) /*0x5ca910*/
    {
      Debug::Log(); /*0x5ca91c*/
      v11 = (int *)(*(int (__thiscall **)(void *, char *, int, void ***, _DWORD *))(*(_DWORD *)this + 196))( /*0x5ca939*/
                     this,
                     &a2,
                     i,
                     &v14,
                     v13);
      HouseClass::SetMapSeed(v10, *v11); /*0x5ca944*/
    }
  }
  v14 = &vt_VectorClass_Cell; /*0x5ca957*/
  if ( Block && v16 ) /*0x5ca969*/
    __3_YAXPAX_Z(Block); /*0x5ca96c*/
  return 1; /*0x5ca974*/
}


// ==== 0x005CA9B0  MultiplayerSiege::CheckStatus  this=MultiplayerSiege  sig=csp ====
char __stdcall MultiplayerSiege::_vt48(int a1)
{
  wchar_t **v1; // eax
  wchar_t **v2; // edi
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // edx
  wchar_t **v7; // eax
  wchar_t **v8; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  wchar_t **v13; // eax
  wchar_t **v14; // edi
  int v15; // ecx
  int v16; // eax
  int v17; // edx

  v1 = (wchar_t **)__2_YAPAXI_Z(0xCu); /*0x5ca9b4*/
  if ( v1 ) /*0x5ca9be*/
    v2 = MPCombatTeam::Constructor(v1); /*0x5ca9c7*/
  else
    v2 = 0; /*0x5ca9cb*/
  v3 = *(_DWORD *)(a1 + 8); /*0x5ca9d1*/
  if ( *(_DWORD *)(a1 + 16) < v3 /*0x5ca9f6*/
    || (*(_BYTE *)(a1 + 13) || !v3)
    && (v4 = *(_DWORD *)(a1 + 20), v4 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, v3 + v4, 0) )
  {
    v5 = *(_DWORD *)(a1 + 16); /*0x5ca9fd*/
    v6 = *(_DWORD *)(a1 + 4); /*0x5caa00*/
    *(_DWORD *)(a1 + 16) = v5 + 1; /*0x5caa06*/
    *(_DWORD *)(v6 + 4 * v5) = v2; /*0x5caa09*/
  }
  v7 = (wchar_t **)__2_YAPAXI_Z(0xCu); /*0x5caa0e*/
  if ( v7 ) /*0x5caa18*/
    v8 = MPCombatTeam::MPTeam(v7); /*0x5caa21*/
  else
    v8 = 0; /*0x5caa25*/
  v9 = *(_DWORD *)(a1 + 8); /*0x5caa27*/
  if ( *(_DWORD *)(a1 + 16) < v9 /*0x5caa4c*/
    || (*(_BYTE *)(a1 + 13) || !v9)
    && (v10 = *(_DWORD *)(a1 + 20), v10 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, v9 + v10, 0) )
  {
    v11 = *(_DWORD *)(a1 + 16); /*0x5caa53*/
    v12 = *(_DWORD *)(a1 + 4); /*0x5caa56*/
    *(_DWORD *)(a1 + 16) = v11 + 1; /*0x5caa5c*/
    *(_DWORD *)(v12 + 4 * v11) = v8; /*0x5caa5f*/
  }
  v13 = (wchar_t **)__2_YAPAXI_Z(0xCu); /*0x5caa64*/
  if ( v13 ) /*0x5caa6e*/
    v14 = MPCombatTeam::Constructor2(v13); /*0x5caa77*/
  else
    v14 = 0; /*0x5caa7b*/
  v15 = *(_DWORD *)(a1 + 8); /*0x5caa7d*/
  if ( *(_DWORD *)(a1 + 16) < v15 /*0x5caaa7*/
    || ((LOBYTE(v16) = *(_BYTE *)(a1 + 13), (_BYTE)v16) || !v15)
    && (v16 = *(_DWORD *)(a1 + 20), v16 > 0)
    && (LOBYTE(v16) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, v15 + v16, 0), (_BYTE)v16) )
  {
    v16 = *(_DWORD *)(a1 + 16); /*0x5caaa9*/
    v17 = *(_DWORD *)(a1 + 4); /*0x5caaac*/
    *(_DWORD *)(a1 + 16) = v16 + 1; /*0x5caab2*/
    *(_DWORD *)(v17 + 4 * v16) = v14; /*0x5caab5*/
  }
  return v16; /*0x5caab8*/
}


// ==== 0x005CAAC0  MultiplayerSiege::GetResult  this=MultiplayerSiege  sig=csp ====
char __stdcall MultiplayerSiege::_vt50(_DWORD *ppv, int a2)
{
  int v2; // eax
  int v3; // esi
  _DWORD *BuildableFromArray; // esi
  void *v6; // eax
  int *v7; // eax
  int *v8; // esi
  int v9; // ebx
  _DWORD *StartCoords; // eax
  __int16 *CurrentOption; // eax
  _DWORD v12[3]; // [esp+14h] [ebp-Ch] BYREF

  v2 = 0; /*0x5caad2*/
  if ( MEMORY[0xA8DA84] > 0 ) /*0x5caadf*/
  {
    v3 = MEMORY[0xA8DA78]; /*0x5caae4*/
    do /*0x5caaf3*/
    {
      if ( *(_DWORD *)(*(_DWORD *)v3 + 111) == ppv[12] ) /*0x5caaeb*/
        break; /*0x5caaeb*/
      ++v2; /*0x5caaed*/
      v3 += 4; /*0x5caaee*/
    }
    while ( v2 < MEMORY[0xA8DA84] ); /*0x5caaf3*/
  }
  if ( v2 >= MEMORY[0xA8DA84] ) /*0x5caafb*/
  {
    AI::CreateMCV(ppv, a2); /*0x5cab03*/
    return 0; /*0x5cab11*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v2) + 107) != 1 ) /*0x5cab1c*/
    return AI::CreateMCV(ppv, a2); /*0x5cab24*/
  BuildableFromArray = HouseClass::FirstBuildableFromArray(ppv, (int)&MEMORY[0x8871E0]->IvanWarhead[1]); /*0x5cab45*/
  if ( !BuildableFromArray ) /*0x5cab49*/
    return 0; /*0x5cab49*/
  v6 = __2_YAPAXI_Z(0x720u); /*0x5cab50*/
  if ( !v6 ) /*0x5cab5a*/
    return 0; /*0x5cab5a*/
  v7 = (int *)BuildingClass::Construct((int)v6, (int)BuildableFromArray, (int)ppv); /*0x5cab60*/
  v8 = v7; /*0x5cab65*/
  if ( !v7 ) /*0x5cab69*/
    return 0; /*0x5cab69*/
  v9 = *v7; /*0x5cab6b*/
  StartCoords = HouseClass::GetStartCoords(ppv, v12); /*0x5cab76*/
  if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(v9 + 216))(v8, StartCoords, 0) ) /*0x5cab7e*/
    return 1; /*0x5cab7e*/
  CurrentOption = (__int16 *)HouseClass::GetCurrentOption(ppv, &a2); /*0x5cab91*/
  if ( FindInfantryDeployPosition(v8, CurrentOption, 1) ) /*0x5cab9a*/
    return 1; /*0x5cabbb*/
  (*(void (__thiscall **)(int *, int))(*v8 + 32))(v8, 1); /*0x5caba9*/
  return 0; /*0x5cab08*/
}


// ==== 0x005CABD0  MultiplayerSiege::QueryInterface  this=MultiplayerSiege  sig=csp ====
MultiplayerSiege *__thiscall MultiplayerSiege::QueryInterface(_DWORD *Block, char a2)
{
  *Block = &vt_MultiplayerSiege; /*0x5cabd3*/
  MultiplayerGameMode::Dtor(Block); /*0x5cabd9*/
  if ( (a2 & 1) != 0 ) /*0x5cabe3*/
    __3_YAXPAX_Z(Block); /*0x5cabe6*/
  return (MultiplayerSiege *)Block; /*0x5cabf0*/
}


// ==== 0x005CAC00  sub_5CAC00  this=-  sig=ida-proto ====
int sub_5CAC00()
{
  MEMORY[0xABFA88] = 0; /*0x5cac02*/
  MEMORY[0xABFA8C] = 0; /*0x5cac07*/
  MEMORY[0xABFA90] = 0; /*0x5cac0c*/
  MEMORY[0xABFA94] = 0; /*0x5cac11*/
  return 0; /*0x5cac16*/
}


// ==== 0x005CAC20  sub_5CAC20  this=-  sig=ida-proto ====
void sub_5CAC20()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5cac2c*/
  MEMORY[0xABFAA0] = Math::Sqrt(v0 + v0); /*0x5cac3e*/
}


// ==== 0x005CAC50  sub_5CAC50  this=-  sig=ida-proto ====
void sub_5CAC50()
{
  MEMORY[0xABFAF0] = MEMORY[0xABFAA0] / 60.0; /*0x5cac5c*/
}


// ==== 0x005CAC70  sub_5CAC70  this=-  sig=ida-proto ====
void sub_5CAC70()
{
  MEMORY[0xABFAD8] = 1.0 / MEMORY[0xABFAF0]; /*0x5cac7c*/
}


// ==== 0x005CAC90  sub_5CAC90  this=-  sig=ida-proto ====
void sub_5CAC90()
{
  MEMORY[0xABFAD0] = 0.0174532925199433 * 45.0; /*0x5cac9c*/
}


// ==== 0x005CACB0  sub_5CACB0  this=-  sig=ida-proto ====
void sub_5CACB0()
{
  MEMORY[0xABFAA8] = 0.0174532925199433 * 60.0; /*0x5cacbc*/
}


// ==== 0x005CACD0  sub_5CACD0  this=-  sig=ida-proto ====
void sub_5CACD0()
{
  MEMORY[0xABFA80] = 0.0174532925199433 * 90.0; /*0x5cacdc*/
}


// ==== 0x005CACF0  MPBattleClass::isValidMap  this=MPBattleClass  sig=ida-proto ====
__int64 sub_5CACF0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABFA80] - MEMORY[0xABFAA8]); /*0x5cad02*/
  result = Math::RoundToInt(v0 * MEMORY[0xABFAA0] * 0.5); /*0x5cad16*/
  MEMORY[0xABFAF8] = result; /*0x5cad1b*/
  return result; /*0x5cad20*/
}


// ==== 0x005CAD30  MPBattleClass::needsHouseSelection  this=MPBattleClass  sig=ida-proto ====
void sub_5CAD30()
{
  MEMORY[0xABFAB0] = Math::ArcTan((double)MEMORY[0xABFAF8] * 0.00390625); /*0x5cad47*/
}


// ==== 0x005CAD60  MPBattleClass::validatePlayer  this=MPBattleClass  sig=ida-proto ====
void sub_5CAD60()
{
  MEMORY[0xABFAC8] = Math::ArcTan((double)(2 * MEMORY[0xABFAF8]) / MEMORY[0xABFAA0]); /*0x5cad82*/
}


// ==== 0x005CAD90  MPBattleClass::startGame  this=MPBattleClass  sig=ida-proto ====
__int64 sub_5CAD90()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABFAF8]) + 0.5); /*0x5cadab*/
  MEMORY[0xABFAEC] = result; /*0x5cadb0*/
  return result; /*0x5cadb6*/
}


// ==== 0x005CADC0  MPBattleClass::stopGame  this=MPBattleClass  sig=ida-proto ====
int sub_5CADC0()
{
  MEMORY[0xABFA98] = 0; /*0x5cadc2*/
  MEMORY[0xABFA9A] = 0; /*0x5cadc8*/
  return 0; /*0x5cadce*/
}


// ==== 0x005CADD0  MPBattleClass::areTeamChangesAllowed  this=MPBattleClass  sig=ida-proto ====
int sub_5CADD0()
{
  MEMORY[0xABFAB8] = 0; /*0x5cadd2*/
  MEMORY[0xABFABC] = 0; /*0x5cadd7*/
  MEMORY[0xABFAC0] = 0; /*0x5caddc*/
  return 0; /*0x5cade1*/
}


// ==== 0x005CADF0  MPBattleClass::isHouseAllyChangeAllowed  this=MPBattleClass  sig=ida-proto ====
int sub_5CADF0()
{
  MEMORY[0xABFAE8] = 0; /*0x5cadf5*/
  MEMORY[0xABFAE0] = 128; /*0x5cadff*/
  MEMORY[0xABFAE4] = 128; /*0x5cae04*/
  return 128; /*0x5cae09*/
}


// ==== 0x005CAE10  MPCombatTeam::MPTeam  this=MultiplayerSiegeDefenderTeam  sig=csp ====
MultiplayerSiegeDefenderTeam *__thiscall MPCombatTeam::MPTeam(wchar_t **this)
{
  wchar_t *StringCSF; // eax
  wchar_t *v4; // [esp+4h] [ebp-4h] BYREF

  StringCSF = GetStringCSF(aMpDefenderteam, 0, aDRa2mdpostMpsi_0, 6); /*0x5cae22*/
  WideString::Assign(&v4, (CampaignScore *)StringCSF); /*0x5cae2c*/
  MultiplayerTeam::Constructor(this, (MPCooperative *)&v4, (wchar_t *)1); /*0x5cae3a*/
  DeleteAndZero::Alt((void **)&v4); /*0x5cae43*/
  *this = (wchar_t *)&vt_MultiplayerSiegeDefenderTeam; /*0x5cae48*/
  return (MultiplayerSiegeDefenderTeam *)this; /*0x5cae50*/
}


// ==== 0x005CAE60  MultiplayerSiegeDefenderTeam::method_5CAE60  this=MultiplayerSiegeDefenderTeam  sig=csp ====
void __thiscall sub_5CAE60(void **this)
{
  *this = &vt_MultiplayerSiegeDefenderTeam; /*0x5cae60*/
  MultiplayerTeam::Destructor(this); /*0x5cae66*/
}


// ==== 0x005CAE70  MultiplayerSiegeDefenderTeam::AddRef  this=MultiplayerSiegeDefenderTeam  sig=csp ====
char __stdcall MultiplayerSiegeDefenderTeam::_vt01(int a1)
{
  int v1; // ecx
  char result; // al
  int i; // esi

  v1 = 0; /*0x5cae77*/
  result = 1; /*0x5cae7d*/
  if ( MEMORY[0xA8DA84] > 0 ) /*0x5cae82*/
  {
    for ( i = MEMORY[0xA8DA78]; a1 == v1 || *(_DWORD *)(*(_DWORD *)i + 107) != 1; i += 4 ) /*0x5cae84*/
    {
      if ( ++v1 >= MEMORY[0xA8DA84] ) /*0x5cae9f*/
        return result; /*0x5cae9f*/
    }
    return 0; /*0x5caea7*/
  }
  return result; /*0x5caea1*/
}


// ==== 0x005CAEB0  MPCombatTeam::Constructor2  this=MultiplayerSiegeAttackerTeam  sig=csp ====
MultiplayerSiegeAttackerTeam *__thiscall MPCombatTeam::Constructor2(wchar_t **this)
{
  wchar_t *StringCSF; // eax
  wchar_t *v4; // [esp+4h] [ebp-4h] BYREF

  StringCSF = GetStringCSF(aMpAttackerteam, 0, aDRa2mdpostMpsi_0, 22); /*0x5caec2*/
  WideString::Assign(&v4, (CampaignScore *)StringCSF); /*0x5caecc*/
  MultiplayerTeam::Constructor(this, (MPCooperative *)&v4, (wchar_t *)1); /*0x5caeda*/
  DeleteAndZero::Alt((void **)&v4); /*0x5caee3*/
  *this = (wchar_t *)&vt_MultiplayerSiegeAttackerTeam; /*0x5caee8*/
  return (MultiplayerSiegeAttackerTeam *)this; /*0x5caef0*/
}


// ==== 0x005CAF00  MultiplayerSiegeAttackerTeam::method_5CAF00  this=MultiplayerSiegeAttackerTeam  sig=csp ====
void __thiscall sub_5CAF00(void **this)
{
  *this = &vt_MultiplayerSiegeAttackerTeam; /*0x5caf00*/
  MultiplayerTeam::Destructor(this); /*0x5caf06*/
}


// ==== 0x005CAF10  MultiplayerSiegeDefenderTeam::QueryInterface  this=MultiplayerSiegeDefenderTeam  sig=csp ====
MultiplayerSiegeDefenderTeam *__thiscall MultiplayerSiegeDefenderTeam::QueryInterface(void **Block, char a2)
{
  *Block = &vt_MultiplayerSiegeDefenderTeam; /*0x5caf13*/
  MultiplayerTeam::Destructor(Block); /*0x5caf19*/
  if ( (a2 & 1) != 0 ) /*0x5caf23*/
    __3_YAXPAX_Z(Block); /*0x5caf26*/
  return (MultiplayerSiegeDefenderTeam *)Block; /*0x5caf30*/
}


// ==== 0x005CAF40  MultiplayerSiegeAttackerTeam::QueryInterface  this=MultiplayerSiegeAttackerTeam  sig=csp ====
MultiplayerSiegeAttackerTeam *__thiscall MultiplayerSiegeAttackerTeam::QueryInterface(void **Block, char a2)
{
  *Block = &vt_MultiplayerSiegeAttackerTeam; /*0x5caf43*/
  MultiplayerTeam::Destructor(Block); /*0x5caf49*/
  if ( (a2 & 1) != 0 ) /*0x5caf53*/
    __3_YAXPAX_Z(Block); /*0x5caf56*/
  return (MultiplayerSiegeAttackerTeam *)Block; /*0x5caf60*/
}


// ==== 0x005CAF70  ObjectClass::method_5CAF70  this=VOID_PTR  sig=csp ====
DWORD __thiscall sub_5CAF70(LONG *this)
{
  DWORD result; // eax
  LARGE_INTEGER Frequency; // [esp+4h] [ebp-8h] BYREF

  if ( QueryPerformanceFrequency(&Frequency) ) /*0x5caf7b*/
  {
    result = Frequency.LowPart; /*0x5caf89*/
    *this = Frequency.HighPart; /*0x5caf8d*/
  }
  else
  {
    *this = 0; /*0x5caf94*/
    return 0; /*0x5caf9a*/
  }
  return result; /*0x5caf8f*/
}


// ==== 0x005CAFC0  Performance::MeasureTicks  this=Performance  sig=csp ====
unsigned int sub_5CAFC0()
{
  int v0; // esi
  int v1; // ebx
  unsigned int result; // eax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned int v5; // esi
  DWORD v6; // edi
  int v7; // ecx
  unsigned int v8; // ecx
  LARGE_INTEGER Frequency; // [esp+8h] [ebp-34h] BYREF
  LARGE_INTEGER PerformanceCount; // [esp+10h] [ebp-2Ch] BYREF
  LARGE_INTEGER v11; // [esp+18h] [ebp-24h] BYREF
  int v12; // [esp+20h] [ebp-1Ch]
  int v13; // [esp+24h] [ebp-18h]
  int v14; // [esp+28h] [ebp-14h]
  unsigned int v15; // [esp+2Ch] [ebp-10h]
  unsigned int v16; // [esp+30h] [ebp-Ch]
  int v17; // [esp+34h] [ebp-8h]
  int v18; // [esp+38h] [ebp-4h]

  v0 = 0; /*0x5cafcb*/
  v1 = 0; /*0x5cafce*/
  v18 = 0; /*0x5cafd0*/
  v16 = 0; /*0x5cafd3*/
  v15 = 0; /*0x5cafd6*/
  result = QueryPerformanceFrequency(&Frequency); /*0x5cafd9*/
  if ( result ) /*0x5cafe1*/
  {
    while ( 1 ) /*0x5caff6*/
    {
      v14 = v0; /*0x5caff6*/
      ++v18; /*0x5cb000*/
      v17 = v1; /*0x5cb003*/
      QueryPerformanceCounter(&PerformanceCount); /*0x5cb006*/
      v11 = PerformanceCount; /*0x5cb010*/
      do /*0x5cb02c*/
        QueryPerformanceCounter(&v11); /*0x5cb01f*/
      while ( v11.LowPart - PerformanceCount.LowPart < 0x32 ); /*0x5cb02c*/
      v3 = __rdtsc(); /*0x5cb02e*/
      v12 = v3; /*0x5cb030*/
      PerformanceCount = v11; /*0x5cb03b*/
      do /*0x5cb05c*/
        QueryPerformanceCounter(&v11); /*0x5cb04c*/
      while ( v11.LowPart - PerformanceCount.LowPart < 0x3E8 ); /*0x5cb05c*/
      v4 = __rdtsc(); /*0x5cb05e*/
      v13 = v4; /*0x5cb060*/
      v5 = v4 - v12; /*0x5cb06f*/
      v6 = (100000 * v11.LowPart - 100000 * PerformanceCount.LowPart) / (Frequency.LowPart / 0xA); /*0x5cb0b1*/
      v15 += v6; /*0x5cb0ba*/
      v16 += v4 - v12; /*0x5cb0bd*/
      if ( v6 % Frequency.LowPart > Frequency.LowPart >> 1 ) /*0x5cb0ca*/
        ++v6; /*0x5cb0cc*/
      v1 = v5 / v6; /*0x5cb0d5*/
      if ( v5 % v6 > v6 >> 1 ) /*0x5cb0df*/
        ++v1; /*0x5cb0e1*/
      v7 = v1 + v14 + v17; /*0x5cb0ee*/
      if ( v18 >= 3 /*0x5cb137*/
        && (v18 >= 20 || (int)abs32(3 * v1 - v7) <= 3 && (int)abs32(3 * v17 - v7) <= 3 && (int)abs32(3 * v14 - v7) <= 3) )
      {
        break; /*0x5cb137*/
      }
      v0 = v17; /*0x5cafec*/
    }
    v8 = 10 * v16 / v15; /*0x5cb14e*/
    if ( 100 * v16 / v15 - 10 * v8 >= 6 ) /*0x5cb165*/
      ++v8; /*0x5cb167*/
    result = v16 / v15; /*0x5cb16c*/
    if ( v8 - 10 * (v16 / v15) >= 6 ) /*0x5cb179*/
      ++result; /*0x5cb17b*/
  }
  return result; /*0x5cafe3*/
}


// ==== 0x005CB190  MPBattleClass::onPlayerConnect  this=MPBattleClass  sig=ida-proto ====
void sub_5CB190()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5cb19c*/
  MEMORY[0xABFB28] = Math::Sqrt(v0 + v0); /*0x5cb1ae*/
}


// ==== 0x005CB1C0  MPBattleClass::onPlayerDisconnect  this=MPBattleClass  sig=ida-proto ====
void sub_5CB1C0()
{
  MEMORY[0xABFB78] = MEMORY[0xABFB28] / 60.0; /*0x5cb1cc*/
}


// ==== 0x005CB1E0  MPBattleClass::getMaximumPlayers  this=MPBattleClass  sig=ida-proto ====
void sub_5CB1E0()
{
  MEMORY[0xABFB60] = 1.0 / MEMORY[0xABFB78]; /*0x5cb1ec*/
}


// ==== 0x005CB200  MPBattleClass::getMinimumPlayers  this=MPBattleClass  sig=ida-proto ====
void sub_5CB200()
{
  MEMORY[0xABFB58] = 0.0174532925199433 * 45.0; /*0x5cb20c*/
}


// ==== 0x005CB220  MPBattleClass::getAlliesLimit  this=MPBattleClass  sig=ida-proto ====
void sub_5CB220()
{
  MEMORY[0xABFB30] = 0.0174532925199433 * 60.0; /*0x5cb22c*/
}


// ==== 0x005CB240  sub_5CB240  this=-  sig=ida-proto ====
void sub_5CB240()
{
  MEMORY[0xABFB08] = 0.0174532925199433 * 90.0; /*0x5cb24c*/
}


// ==== 0x005CB260  MPBattleClass::canAllyWith  this=MPBattleClass  sig=ida-proto ====
__int64 sub_5CB260()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABFB08] - MEMORY[0xABFB30]); /*0x5cb272*/
  result = Math::RoundToInt(v0 * MEMORY[0xABFB28] * 0.5); /*0x5cb286*/
  MEMORY[0xABFB80] = result; /*0x5cb28b*/
  return result; /*0x5cb290*/
}


// ==== 0x005CB2A0  sub_5CB2A0  this=-  sig=ida-proto ====
void sub_5CB2A0()
{
  MEMORY[0xABFB38] = Math::ArcTan((double)MEMORY[0xABFB80] * 0.00390625); /*0x5cb2b7*/
}


// ==== 0x005CB2D0  MPBattleClass::onGameBegin  this=MPBattleClass  sig=ida-proto ====
void sub_5CB2D0()
{
  MEMORY[0xABFB50] = Math::ArcTan((double)(2 * MEMORY[0xABFB80]) / MEMORY[0xABFB28]); /*0x5cb2f2*/
}


// ==== 0x005CB300  sub_5CB300  this=-  sig=ida-proto ====
__int64 sub_5CB300()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABFB80]) + 0.5); /*0x5cb31b*/
  MEMORY[0xABFB74] = result; /*0x5cb320*/
  return result; /*0x5cb326*/
}


// ==== 0x005CB330  sub_5CB330  this=-  sig=ida-proto ====
int sub_5CB330()
{
  MEMORY[0xABFB20] = 0; /*0x5cb332*/
  MEMORY[0xABFB22] = 0; /*0x5cb338*/
  return 0; /*0x5cb33e*/
}


// ==== 0x005CB340  sub_5CB340  this=-  sig=ida-proto ====
int sub_5CB340()
{
  MEMORY[0xABFB40] = 0; /*0x5cb342*/
  MEMORY[0xABFB44] = 0; /*0x5cb347*/
  MEMORY[0xABFB48] = 0; /*0x5cb34c*/
  return 0; /*0x5cb351*/
}


// ==== 0x005CB360  sub_5CB360  this=-  sig=ida-proto ====
int sub_5CB360()
{
  MEMORY[0xABFB70] = 0; /*0x5cb365*/
  MEMORY[0xABFB68] = 128; /*0x5cb36f*/
  MEMORY[0xABFB6C] = 128; /*0x5cb374*/
  return 128; /*0x5cb379*/
}


// ==== 0x005CB380  MPBattleClass::isAIAllowed  this=MPBattleClass  sig=ida-proto ====
int sub_5CB380()
{
  MEMORY[0xABFB10] = 0; /*0x5cb382*/
  MEMORY[0xABFB14] = 0; /*0x5cb387*/
  MEMORY[0xABFB18] = 0; /*0x5cb38c*/
  MEMORY[0xABFB1C] = 0; /*0x5cb391*/
  return 0; /*0x5cb396*/
}


// ==== 0x005CB3A0  MPBattleClass::MPUnholyAllianceClass  this=UnholyAlliance  sig=csp ====
_DWORD *__thiscall MPBattleClass::MPUnholyAllianceClass(
        _DWORD *this,
        const wchar_t **a1,
        UnholyAlliance *aP2,
        const char **a3,
        UnholyAlliance *aP4,
        char aP5,
        UnholyAlliance *aP6)
{
  MultiplayerGameMode::Construct( /*0x5cb3c3*/
    this,
    (MultiplayerGameMode *)a1,
    (MultiplayerGameMode *)aP2,
    (MultiplayerGameMode *)a3,
    (MultiplayerGameMode *)aP4,
    (MultiplayerGameMode *)aP5,
    (MultiplayerGameMode *)aP6);
  *this = &vt_UnholyAlliance; /*0x5cb3c8*/
  return this; /*0x5cb3d0*/
}


// ==== 0x005CB3E0  UnholyAlliance::method_5CB3E0  this=UnholyAlliance  sig=csp ====
void __thiscall sub_5CB3E0(void *this)
{
  *(_DWORD *)this = &vt_UnholyAlliance; /*0x5cb3e0*/
  MultiplayerGameMode::Dtor(this); /*0x5cb3e6*/
}


// ==== 0x005CB3F0  UnholyAlliance::Read  this=UnholyAlliance  sig=csp ====
char UnholyAlliance::_vt04()
{
  MEMORY[0xA8B258] = 1; /*0x5cb3f2*/
  return 1; /*0x5cb3f7*/
}


// ==== 0x005CB400  UnholyAlliance::Write  this=UnholyAlliance  sig=csp ====
BOOL __stdcall UnholyAlliance::Write(MPCooperative *aP0)
{
  return HouseClass_Player.__pad_5568[8100] && ScenarioClass::MissionStubReturnZero2(aP0); /*0x5cb41c*/
}


// ==== 0x005CB430  UnholyAlliance::Seek  this=UnholyAlliance  sig=csp ====
char UnholyAlliance::_vt06()
{
  MEMORY[0xA8B258] = 1; /*0x5cb432*/
  return 1; /*0x5cb437*/
}


// ==== 0x005CB440  UnholyAlliance::GetResult  this=UnholyAlliance  sig=csp ====
UnholyAlliance *__thiscall UnholyAlliance::QueryInterface(_DWORD *Block, char a2)
{
  *Block = &vt_UnholyAlliance; /*0x5cb543*/
  MultiplayerGameMode::Dtor(Block); /*0x5cb549*/
  if ( (a2 & 1) != 0 ) /*0x5cb553*/
    __3_YAXPAX_Z(Block); /*0x5cb556*/
  return (UnholyAlliance *)Block; /*0x5cb560*/
}


// ==== 0x005CB540  UnholyAlliance::QueryInterface  this=UnholyAlliance  sig=csp ====
UnholyAlliance *__thiscall UnholyAlliance::QueryInterface(_DWORD *Block, char a2)
{
  *Block = &vt_UnholyAlliance; /*0x5cb543*/
  MultiplayerGameMode::Dtor(Block); /*0x5cb549*/
  if ( (a2 & 1) != 0 ) /*0x5cb553*/
    __3_YAXPAX_Z(Block); /*0x5cb556*/
  return (UnholyAlliance *)Block; /*0x5cb560*/
}


// ==== 0x005CB570  MPBattleClass::isTeamsAllowed  this=MPBattleClass  sig=ida-proto ====
int sub_5CB570()
{
  MEMORY[0xABFB88] = 0; /*0x5cb572*/
  MEMORY[0xABFB8C] = 0; /*0x5cb577*/
  MEMORY[0xABFB90] = 0; /*0x5cb57c*/
  MEMORY[0xABFB94] = 0; /*0x5cb581*/
  return 0; /*0x5cb586*/
}


// ==== 0x005CB590  PaletteClass::Load  this=int  sig=csp ====
_DWORD *__thiscall PaletteClass_Load(const char **this)
{
  char *EntireFile; // eax
  int v4; // esi
  _BYTE *v5; // edx
  char v6; // bl
  char *v7; // ecx
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  __int16 v10; // [esp+4h] [ebp-70h]
  _DWORD v11[22]; // [esp+8h] [ebp-6Ch] BYREF
  _BYTE v12[12]; // [esp+60h] [ebp-14h] BYREF
  int v13; // [esp+6Ch] [ebp-8h]

  if ( String::Equals_Alt(this, 0) ) /*0x5cb598*/
    return 0; /*0x5cb59f*/
  CCFileClass::Construct2(v11, (char **)this); /*0x5cb5a6*/
  if ( !CCFileClass::Open(v11, 0) || (EntireFile = (char *)CCFileClass::ReadEntireFile(v11)) == 0 ) /*0x5cb5c5*/
  {
    v11[0] = &vt_CCFileClass; /*0x5cb5cb*/
    v13 = 0; /*0x5cb5d3*/
    Vector::Clear((int)v12); /*0x5cb5db*/
    v11[0] = &off_7E1668; /*0x5cb5e4*/
    BufferIOFileClass::Dtor(v11); /*0x5cb5ec*/
    return 0; /*0x5cb5f7*/
  }
  v4 = 0; /*0x5cb5fa*/
  v5 = EntireFile + 2; /*0x5cb5fc*/
  do /*0x5cb646*/
  {
    LOBYTE(v10) = 4 * *(v5 - 2); /*0x5cb607*/
    HIBYTE(v10) = 4 * *(v5 - 1); /*0x5cb611*/
    v6 = 4 * *v5; /*0x5cb617*/
    v7 = (char *)&MEMORY[0x886080] + 3 * (v4 % 256); /*0x5cb62f*/
    ++v4; /*0x5cb636*/
    v5 += 3; /*0x5cb637*/
    *(_WORD *)v7 = v10; /*0x5cb63a*/
    v7[2] = v6; /*0x5cb643*/
  }
  while ( v4 < 256 ); /*0x5cb646*/
  __3_YAXPAX_Z(EntireFile); /*0x5cb649*/
  v8 = __2_YAPAXI_Z(0x188u); /*0x5cb653*/
  if ( v8 ) /*0x5cb65f*/
    v9 = ConvertClass::Construct(v8, (int)&MEMORY[0x886080], (int)&MEMORY[0x886080], MEMORY[0x887308], 1, 0); /*0x5cb67d*/
  else
    v9 = 0; /*0x5cb681*/
  v11[0] = &vt_CCFileClass; /*0x5cb687*/
  v13 = 0; /*0x5cb68f*/
  Vector::Clear((int)v12); /*0x5cb697*/
  v11[0] = &off_7E1668; /*0x5cb6a0*/
  BufferIOFileClass::Dtor(v11); /*0x5cb6a8*/
  return v9; /*0x5cb5f3*/
}


// ==== 0x005CB6C0  VtableStub::5CB6C0  this=MSAnim  sig=csp ====
void __thiscall VtableStub::5CB6C0(_DWORD *this)
{
  *this = &vt_MSAnim; /*0x5cb6c0*/
}


// ==== 0x005CB6D0  MSShapeAnim::Constructor  this=MSShapeAnim  sig=csp ====
void *__thiscall MSShapeAnim::Constructor(
        void *this,
        MSShapeAnim *aP1,
        MSShapeAnim *aP2,
        int a4,
        MSShapeAnim *aP4,
        int a6,
        MSShapeAnim *aP6,
        MSShapeAnim *aP7)
{
  int FileClassToBuffer; // eax

  this->q008 = a4; /*0x5cb6db*/
  this->MSShapeAnim_field_0x04 = aP2; /*0x5cb6e1*/
  this->__pad_00C = 1; /*0x5cb6e4*/
  this->MSShapeAnim_field_0x04 = Timer::GetTicks(); /*0x5cb6f5*/
  *((_DWORD *)this + 6) = 0; /*0x5cb6fc*/
  this->q008 = aP4; /*0x5cb703*/
  *((_BYTE *)this + 52) = (_BYTE)aP6; /*0x5cb70a*/
  *((_DWORD *)this + 14) = aP7; /*0x5cb711*/
  this->q024 = a6; /*0x5cb717*/
  *((_DWORD *)this + 10) = 0; /*0x5cb71a*/
  *(_DWORD *)this = &vt_MSShapeAnim; /*0x5cb721*/
  *((_BYTE *)this + 60) = 0; /*0x5cb727*/
  FileClassToBuffer = LoadFileClassToBuffer((char **)aP1, (bool *)this + 60); /*0x5cb72a*/
  this->q01C = FileClassToBuffer; /*0x5cb72f*/
  *((_DWORD *)this + 11) = 0; /*0x5cb732*/
  this->__pad_00C = *(__int16 *)(FileClassToBuffer + 6) - 1; /*0x5cb73e*/
  return this; /*0x5cb743*/
}


// ==== 0x005CB790  ObjectClass::TerritoryUpdateDisplayWOL  this=int  sig=csp ====
unsigned int __thiscall WOL_Territory_UpdateDisplay(_DWORD *this, int a2)
{
  int *v3; // eax
  int v4; // edx
  int v5; // eax
  _DWORD *v6; // eax
  unsigned int result; // eax
  int v8; // [esp+8h] [ebp-20h] BYREF
  int v9; // [esp+Ch] [ebp-1Ch]
  int v10; // [esp+10h] [ebp-18h]
  int v11; // [esp+14h] [ebp-14h]
  _BYTE v12[16]; // [esp+18h] [ebp-10h] BYREF

  v3 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 24))(this, v12); /*0x5cb79f*/
  v8 = *v3; /*0x5cb7a4*/
  v9 = v3[1]; /*0x5cb7ab*/
  v10 = v3[2]; /*0x5cb7b6*/
  v4 = *this; /*0x5cb7ba*/
  v5 = v3[3]; /*0x5cb7bc*/
  *(this + 10) = a2; /*0x5cb7bf*/
  v11 = v5; /*0x5cb7c2*/
  v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(v4 + 24))(this, v12); /*0x5cb7cd*/
  if ( v8 != *v6 || v9 != v6[1] || v10 != v6[2] || v11 != v6[3] ) /*0x5cb7f9*/
    (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)MEMORY[0x88730C] + 8))( /*0x5cb818*/
      MEMORY[0x88730C],
      &v8,
      MEMORY[0x887310],
      &v8,
      0,
      1);
  result = *(__int16 *)(*(this + 7) + 6); /*0x5cb821*/
  if ( *(this + 10) >= result ) /*0x5cb827*/
    *(this + 10) = --result; /*0x5cb82a*/
  return result; /*0x5cb82d*/
}


// ==== 0x005CB840  MSAnim::GetField  this=int  sig=csp ====
unsigned int __thiscall MSAnim::GetField(_DWORD *this, unsigned int a2)
{
  int v2; // eax
  unsigned int result; // eax

  v2 = *(this + 7); /*0x5cb844*/
  *(this + 11) = a2; /*0x5cb847*/
  result = *(__int16 *)(v2 + 6); /*0x5cb84a*/
  if ( a2 >= result ) /*0x5cb850*/
    *(this + 11) = --result; /*0x5cb853*/
  return result; /*0x5cb856*/
}


// ==== 0x005CB860  MSAnim::SetField  this=int  sig=csp ====
unsigned int __thiscall MSAnim::SetField(_DWORD *this, unsigned int a2)
{
  int v2; // eax
  unsigned int result; // eax

  v2 = *(this + 7); /*0x5cb864*/
  *(this + 12) = a2; /*0x5cb867*/
  result = *(__int16 *)(v2 + 6); /*0x5cb86a*/
  if ( a2 >= result ) /*0x5cb870*/
    *(this + 12) = --result; /*0x5cb873*/
  return result; /*0x5cb876*/
}


// ==== 0x005CB880  MSShapeAnim::Load  this=MSShapeAnim  sig=csp ====
char __thiscall MSOverlayAnim::_vt04(int this, int a2, int *a3)
{
  signed int v4; // edi
  signed int v5; // eax
  int v6; // edi
  DWORD Ticks; // eax
  unsigned int v8; // ecx
  int *FoundationSize; // eax
  int v10; // ebx
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // ebp
  unsigned int v15; // ecx
  unsigned int v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v21; // eax
  int *v22; // eax
  int *v23; // eax
  int v24; // edi
  int v25; // edx
  int v26; // eax
  int v27; // edx
  int v28; // ebx
  int v29; // edi
  int v30; // esi
  int v31; // edx
  int v32; // esi
  int v33; // edi
  int v34; // edx
  int v35; // esi
  int v36; // edi
  int v37; // [esp-20h] [ebp-68h]
  int v38; // [esp+18h] [ebp-30h] BYREF
  int v39; // [esp+1Ch] [ebp-2Ch]
  int v40; // [esp+20h] [ebp-28h]
  int v41; // [esp+28h] [ebp-20h] BYREF
  int v42; // [esp+2Ch] [ebp-1Ch]
  int v43; // [esp+30h] [ebp-18h]
  int v44; // [esp+34h] [ebp-14h]
  _DWORD v45[4]; // [esp+38h] [ebp-10h] BYREF

  if ( *(_BYTE *)(this + 12) != 1 ) /*0x5cb88d*/
    goto LABEL_29; /*0x5cb88d*/
  v4 = *(_DWORD *)(this + 24); /*0x5cb896*/
  if ( *(_DWORD *)(this + 16) == -1 ) /*0x5cb89c*/
  {
LABEL_5:
    if ( !v4 ) /*0x5cb8b1*/
      goto LABEL_6; /*0x5cb8b1*/
LABEL_29:
    *a3 = 0; /*0x5cbb5d*/
    a3[1] = 0; /*0x5cbb67*/
    a3[2] = 0; /*0x5cbb6a*/
    a3[3] = 0; /*0x5cbb6d*/
    return 0; /*0x5cbb71*/
  }
  v5 = Timer::GetTicks() - *(_DWORD *)(this + 16); /*0x5cb8a6*/
  if ( v5 < v4 ) /*0x5cb8ab*/
  {
    v4 -= v5; /*0x5cb8ad*/
    goto LABEL_5; /*0x5cb8ad*/
  }
LABEL_6:
  v6 = *(_DWORD *)(this + 36); /*0x5cb8b7*/
  Ticks = Timer::GetTicks(); /*0x5cb8be*/
  v8 = *(_DWORD *)(this + 40); /*0x5cb8c3*/
  *(_DWORD *)(this + 16) = Ticks; /*0x5cb8c6*/
  *(_DWORD *)(this + 20) = v39; /*0x5cb8d5*/
  *(_DWORD *)(this + 24) = v6; /*0x5cb8d9*/
  FoundationSize = Building::GetFoundationSize(&v38, v8); /*0x5cb8dc*/
  v10 = *(_DWORD *)(this + 4); /*0x5cb8e3*/
  v41 = *FoundationSize; /*0x5cb8e6*/
  v11 = v10 + v41; /*0x5cb8ea*/
  v42 = FoundationSize[1]; /*0x5cb8f4*/
  v43 = FoundationSize[2]; /*0x5cb8fb*/
  v12 = *(_DWORD *)(this + 8) + v42; /*0x5cb905*/
  v44 = FoundationSize[3]; /*0x5cb907*/
  v13 = *(_DWORD *)(this + 56); /*0x5cb90b*/
  v41 += v10; /*0x5cb910*/
  v42 = v12; /*0x5cb914*/
  if ( (v13 & 0x200) != 0 ) /*0x5cb918*/
  {
    v14 = *(_DWORD *)(this + 28); /*0x5cb91a*/
    v41 = *(__int16 *)(v14 + 2) / -2 + v11; /*0x5cb92a*/
    v42 = *(__int16 *)(v14 + 4) / -2 + v12; /*0x5cb93b*/
  }
  (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)a2 + 8))( /*0x5cb95c*/
    a2,
    &v41,
    MEMORY[0x887310],
    &v41,
    0,
    1);
  v15 = *(_DWORD *)(this + 48); /*0x5cb962*/
  v16 = *(_DWORD *)(this + 40) + 1; /*0x5cb966*/
  *(_DWORD *)(this + 40) = v16; /*0x5cb968*/
  if ( v16 > v15 ) /*0x5cb96d*/
  {
    if ( !*(_BYTE *)(this + 52) ) /*0x5cb96f*/
    {
      v17 = v42; /*0x5cb97e*/
      *a3 = v41; /*0x5cb983*/
      v18 = v43; /*0x5cb985*/
      a3[1] = v17; /*0x5cb98b*/
      v19 = v44; /*0x5cb98e*/
      a3[2] = v18; /*0x5cb993*/
      a3[3] = v19; /*0x5cb996*/
      return 1; /*0x5cb99e*/
    }
    *(_DWORD *)(this + 40) = *(_DWORD *)(this + 44); /*0x5cb9a4*/
  }
  v21 = *(_DWORD *)(this + 56); /*0x5cb9b0*/
  v38 = *(_DWORD *)(this + 4); /*0x5cb9bc*/
  BYTE1(v21) |= 4u; /*0x5cb9c4*/
  v37 = v21; /*0x5cb9c8*/
  v39 = *(_DWORD *)(this + 8); /*0x5cb9c9*/
  v22 = (int *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 120))(a2, v45); /*0x5cb9d6*/
  DrawToSurfaceSHP( /*0x5cb9ec*/
    a2,
    *(_DWORD *)(this + 32),
    *(_DWORD *)(this + 28),
    *(_DWORD *)(this + 40),
    &v38,
    v22,
    v37,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
  v23 = Building::GetFoundationSize(v45, *(_DWORD *)(this + 40)); /*0x5cb9fd*/
  *a3 = *v23; /*0x5cba0a*/
  a3[1] = v23[1]; /*0x5cba0f*/
  a3[2] = v23[2]; /*0x5cba15*/
  a3[3] = v23[3]; /*0x5cba1b*/
  v24 = *(_DWORD *)(this + 4) + *a3; /*0x5cba23*/
  v25 = a3[1]; /*0x5cba25*/
  *a3 = v24; /*0x5cba28*/
  a3[1] = *(_DWORD *)(this + 8) + v25; /*0x5cba2f*/
  if ( (*(_DWORD *)(this + 56) & 0x200) != 0 ) /*0x5cba37*/
  {
    *a3 = *(__int16 *)(*(_DWORD *)(this + 28) + 2) / -2 + v24; /*0x5cba4b*/
    a3[1] += *(__int16 *)(*(_DWORD *)(this + 28) + 4) / -2; /*0x5cba60*/
  }
  if ( a3[2] <= 0 || a3[3] <= 0 ) /*0x5cba73*/
  {
    v34 = v42; /*0x5cbb3a*/
    v35 = v43; /*0x5cbb3e*/
    v36 = v44; /*0x5cbb42*/
    *a3 = v41; /*0x5cbb46*/
    a3[1] = v34; /*0x5cbb48*/
    a3[2] = v35; /*0x5cbb4b*/
    a3[3] = v36; /*0x5cbb4e*/
    return 0; /*0x5cbb54*/
  }
  else if ( v43 <= 0 || v44 <= 0 ) /*0x5cba8b*/
  {
    v31 = a3[1]; /*0x5cbb16*/
    v32 = a3[2]; /*0x5cbb19*/
    v33 = a3[3]; /*0x5cbb1c*/
    *a3 = *a3; /*0x5cbb1f*/
    a3[1] = v31; /*0x5cbb21*/
    a3[2] = v32; /*0x5cbb24*/
    a3[3] = v33; /*0x5cbb27*/
    return 0; /*0x5cbb2d*/
  }
  else
  {
    v26 = *a3; /*0x5cba93*/
    v27 = a3[1]; /*0x5cba95*/
    v28 = a3[2]; /*0x5cba98*/
    v40 = v28; /*0x5cba9b*/
    v29 = a3[3]; /*0x5cba9f*/
    if ( v26 > v41 ) /*0x5cbaa8*/
    {
      v28 += v26 - v41; /*0x5cbaac*/
      v26 = v41; /*0x5cbaae*/
      v40 = v28; /*0x5cbab0*/
    }
    if ( v27 > v42 ) /*0x5cbaba*/
    {
      v29 += v27 - v42; /*0x5cbabe*/
      v27 = v42; /*0x5cbac0*/
    }
    if ( v26 + v28 < v41 + v43 ) /*0x5cbacc*/
      v40 = v43 - v26 + v41 + 1; /*0x5cbad8*/
    if ( v29 + v27 < v42 + v44 ) /*0x5cbaeb*/
      v29 = v44 - v27 + v42 + 1; /*0x5cbaf3*/
    v30 = v40; /*0x5cbaf7*/
    *a3 = v26; /*0x5cbafb*/
    a3[1] = v27; /*0x5cbafd*/
    a3[2] = v30; /*0x5cbb00*/
    a3[3] = v29; /*0x5cbb03*/
    return 0; /*0x5cbb09*/
  }
}


// ==== 0x005CBB80  MSShapeAnim::Draw  this=MSShapeAnim  sig=csp ====
void __thiscall MSOverlayAnim::_vt05(int this, int a2, int *a3)
{
  int *FoundationSize; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ebp
  int *v9; // eax
  int v10; // ecx
  int v11; // eax
  int *v12; // eax
  int v13; // [esp-28h] [ebp-68h]
  int v14[4]; // [esp+10h] [ebp-30h] BYREF
  int v15; // [esp+20h] [ebp-20h] BYREF
  int v16; // [esp+24h] [ebp-1Ch]
  int v17; // [esp+28h] [ebp-18h]
  int v18; // [esp+2Ch] [ebp-14h]
  char v19[16]; // [esp+30h] [ebp-10h] BYREF

  v15 = 0; /*0x5cbb91*/
  v16 = 0; /*0x5cbb95*/
  v17 = 0; /*0x5cbb99*/
  v18 = 0; /*0x5cbb9d*/
  if ( !a3 ) /*0x5cbba1*/
    goto LABEL_10; /*0x5cbba1*/
  FoundationSize = Building::GetFoundationSize(v14, *(_DWORD *)(this + 40)); /*0x5cbbb3*/
  v15 = *FoundationSize; /*0x5cbbba*/
  v16 = FoundationSize[1]; /*0x5cbbc1*/
  v17 = FoundationSize[2]; /*0x5cbbc8*/
  v5 = *(_DWORD *)(this + 8) + v16; /*0x5cbbd2*/
  v18 = FoundationSize[3]; /*0x5cbbd4*/
  v6 = *(_DWORD *)(this + 4) + v15; /*0x5cbbdb*/
  v7 = *(_DWORD *)(this + 56); /*0x5cbbdd*/
  v15 = v6; /*0x5cbbe3*/
  v16 = v5; /*0x5cbbe7*/
  if ( (v7 & 0x200) != 0 ) /*0x5cbbeb*/
  {
    v8 = *(_DWORD *)(this + 28); /*0x5cbbed*/
    v15 = *(__int16 *)(v8 + 2) / -2 + v6; /*0x5cbbfd*/
    v16 = *(__int16 *)(v8 + 4) / -2 + v5; /*0x5cbc10*/
  }
  v9 = ClipRectIntersection(v14, a3, &v15, 0, 0); /*0x5cbc21*/
  v15 = *v9; /*0x5cbc2a*/
  v16 = v9[1]; /*0x5cbc31*/
  v17 = v9[2]; /*0x5cbc38*/
  v10 = v9[3]; /*0x5cbc3e*/
  v18 = v10; /*0x5cbc41*/
  if ( v17 > 0 && v10 > 0 ) /*0x5cbc49*/
  {
LABEL_10:
    if ( *(_BYTE *)(this + 12) ) /*0x5cbc4b*/
    {
      v11 = *(_DWORD *)(this + 56); /*0x5cbc5f*/
      v14[0] = *(_DWORD *)(this + 4); /*0x5cbc6b*/
      BYTE1(v11) |= 4u; /*0x5cbc73*/
      v13 = v11; /*0x5cbc77*/
      v14[1] = *(_DWORD *)(this + 8); /*0x5cbc78*/
      v12 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 120))(a2, v19); /*0x5cbc85*/
      DrawToSurfaceSHP( /*0x5cbc9b*/
        a2,
        *(_DWORD *)(this + 32),
        *(_DWORD *)(this + 28),
        *(_DWORD *)(this + 40),
        v14,
        v12,
        v13,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
    }
  }
}


// ==== 0x005CBCB0  MSShapeAnim::Update  this=MSShapeAnim  sig=csp ====
int *__thiscall MSOverlayAnim::_vt06(unsigned int *this, int *a2)
{
  _DWORD *FoundationSize; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // ebp
  int v7; // ecx
  int v8; // esi
  int v10[4]; // [esp+10h] [ebp-10h] BYREF

  FoundationSize = Building::GetFoundationSize(v10, *(this + 10)); /*0x5cbcc5*/
  v4 = this->q008 + FoundationSize[1]; /*0x5cbcd2*/
  v5 = FoundationSize[2]; /*0x5cbcd4*/
  v6 = FoundationSize[3]; /*0x5cbcd7*/
  v7 = this->MSShapeAnim_field_0x04 + *FoundationSize; /*0x5cbcdd*/
  if ( (*(this + 14) & 0x200) != 0 ) /*0x5cbce5*/
  {
    v8 = this->q01C; /*0x5cbce7*/
    v7 += *(__int16 *)(v8 + 2) / -2; /*0x5cbcf5*/
    v4 += *(__int16 *)(v8 + 4) / -2; /*0x5cbd02*/
  }
  *a2 = v7; /*0x5cbd0a*/
  a2[1] = v4; /*0x5cbd0c*/
  a2[2] = v5; /*0x5cbd11*/
  a2[3] = v6; /*0x5cbd14*/
  return a2; /*0x5cbd0f*/
}


// ==== 0x005CBD20  Trigger::initTrigger  this=MSShapeAnim  sig=csp ====
void *__thiscall Trigger::initTrigger(
        void *this,
        MSShapeAnim *aP1,
        MSShapeAnim *aP2,
        int a4,
        int a5,
        int a6,
        int a7,
        MSShapeAnim *aP7)
{
  int FileClassToBuffer; // eax
  int v10; // edx

  this->q008 = a4; /*0x5cbd2c*/
  this->MSShapeAnim_field_0x04 = aP2; /*0x5cbd32*/
  this->__pad_00C = 1; /*0x5cbd35*/
  this->MSShapeAnim_field_0x04 = Timer::GetTicks(); /*0x5cbd48*/
  *((_DWORD *)this + 6) = 0; /*0x5cbd4f*/
  this->q008 = a5; /*0x5cbd52*/
  *((_DWORD *)this + 14) = a7; /*0x5cbd58*/
  this->q024 = a6; /*0x5cbd5f*/
  *((_DWORD *)this + 10) = 0; /*0x5cbd62*/
  *((_BYTE *)this + 52) = 0; /*0x5cbd65*/
  *((_BYTE *)this + 60) = 0; /*0x5cbd68*/
  *(_DWORD *)this = &vt_MSShapeAnim; /*0x5cbd6a*/
  FileClassToBuffer = LoadFileClassToBuffer((char **)aP1, (bool *)this + 60); /*0x5cbd70*/
  this->q01C = FileClassToBuffer; /*0x5cbd75*/
  *((_DWORD *)this + 11) = 0; /*0x5cbd78*/
  v10 = *(__int16 *)(FileClassToBuffer + 6) - 1; /*0x5cbd83*/
  *((_DWORD *)this + 17) = aP7; /*0x5cbd84*/
  this->__pad_00C = v10; /*0x5cbd87*/
  this->q010 = 0; /*0x5cbd8a*/
  *(_DWORD *)this = &vt_MSFadeAnim; /*0x5cbd8d*/
  return this; /*0x5cbd95*/
}


// ==== 0x005CBDA0  MSFadeAnim::AdvanceSHPAnimationFrame  this=MSFadeAnim  sig=csp ====
char __thiscall ScenarioClass::AdvanceSHPAnimationFrame(MSFadeAnim *this, int *a1, _DWORD *a2)
{
  signed int v4; // edi
  signed int v5; // eax
  int v6; // edi
  unsigned int v7; // eax
  int v8; // edi
  int v9; // eax
  __int16 v10; // di
  int *FoundationSize; // eax
  int v12; // ebp
  int v13; // ecx
  int v14; // edi
  int *v15; // ebp
  int v16; // ecx
  MSFadeAnim *v17; // ebx
  int v18; // eax
  MSFadeAnim *i; // edi
  int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  _DWORD *v23; // eax
  unsigned int v25; // edx
  int v26; // edi
  int v27; // eax
  int v28; // edi
  int v29; // eax
  int *v30; // eax
  _DWORD *v31; // eax
  _DWORD *v32; // ecx
  _DWORD *v33; // edx
  int v34; // ebp
  int v35; // edx
  int v36; // eax
  int v37; // edx
  int v38; // ebx
  int v39; // edi
  int v40; // esi
  int v41; // edx
  int v42; // esi
  int v43; // edi
  int v44; // edx
  int v45; // esi
  int v46; // edi
  _DWORD *v47; // eax
  int v48; // [esp+24h] [ebp-30h] BYREF
  int v49; // [esp+28h] [ebp-2Ch]
  int v50; // [esp+2Ch] [ebp-28h]
  int v51; // [esp+34h] [ebp-20h] BYREF
  int v52; // [esp+38h] [ebp-1Ch]
  int v53; // [esp+3Ch] [ebp-18h]
  int v54; // [esp+40h] [ebp-14h]
  _DWORD v55[4]; // [esp+44h] [ebp-10h] BYREF

  if ( this->__pad_0[12] != 1 ) /*0x5cbdad*/
    goto LABEL_40; /*0x5cbdad*/
  v4 = *(_DWORD *)&this->__pad_0[24]; /*0x5cbdb6*/
  if ( *(_DWORD *)&this->__pad_0[16] == -1 ) /*0x5cbdbc*/
  {
LABEL_5:
    if ( !v4 ) /*0x5cbdd3*/
      goto LABEL_6; /*0x5cbdd3*/
LABEL_40:
    v47 = a2; /*0x5cc0ea*/
    *a2 = 0; /*0x5cc0f1*/
    v47[1] = 0; /*0x5cc0f3*/
    v47[2] = 0; /*0x5cc0f6*/
    v47[3] = 0; /*0x5cc0f9*/
    return 0; /*0x5cc0fc*/
  }
  v5 = Timer::GetTicks() - *(_DWORD *)&this->__pad_0[16]; /*0x5cbdc6*/
  if ( v5 < v4 ) /*0x5cbdcb*/
  {
    v4 -= v5; /*0x5cbdcd*/
    goto LABEL_5; /*0x5cbdcd*/
  }
LABEL_6:
  v6 = *((_DWORD *)this + 9); /*0x5cbddd*/
  *(_DWORD *)&this->__pad_0[16] = Timer::GetTicks(); /*0x5cbde9*/
  *(_DWORD *)&this->__pad_0[20] = v49; /*0x5cbdf0*/
  v7 = *((_DWORD *)this + 16); /*0x5cbdf3*/
  *(_DWORD *)&this->__pad_0[24] = v6; /*0x5cbdf9*/
  if ( v7 >= 4 ) /*0x5cbdfc*/
  {
    v8 = *((_DWORD *)this + 14); /*0x5cbe0a*/
    LOWORD(v9) = dword_830084; /*0x5cbe0d*/
  }
  else
  {
    v8 = dword_830078[v7]; /*0x5cbdfe*/
    v9 = *((_DWORD *)this + 14); /*0x5cbe05*/
  }
  v10 = v9 | v8; /*0x5cbe1e*/
  FoundationSize = Building::GetFoundationSize(&v48, *((_DWORD *)this + 10)); /*0x5cbe20*/
  v51 = *FoundationSize; /*0x5cbe27*/
  v52 = FoundationSize[1]; /*0x5cbe2e*/
  v53 = FoundationSize[2]; /*0x5cbe35*/
  v12 = *(_DWORD *)&this->__pad_0[8] + v52; /*0x5cbe3f*/
  v54 = FoundationSize[3]; /*0x5cbe41*/
  v13 = *(_DWORD *)&this->__pad_0[4] + v51; /*0x5cbe48*/
  v52 = v12; /*0x5cbe4a*/
  v51 = v13; /*0x5cbe54*/
  if ( (v10 & 0x200) != 0 ) /*0x5cbe58*/
  {
    v14 = this->field_1C; /*0x5cbe5a*/
    v51 = *(__int16 *)(v14 + 2) / -2 + v13; /*0x5cbe6a*/
    v52 = *(__int16 *)(v14 + 4) / -2 + v12; /*0x5cbe7b*/
  }
  v15 = a1; /*0x5cbe7f*/
  (*(void (__thiscall **)(int *, int *, _DWORD, int *, _DWORD, int))(*a1 + 8))( /*0x5cbe9c*/
    a1,
    &v51,
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
    &v51,
    0,
    1);
  v16 = *((_DWORD *)this + 17); /*0x5cbe9f*/
  if ( v16 ) /*0x5cbea4*/
  {
    a1 = (int *)this; /*0x5cbea6*/
    v17 = (MSFadeAnim *)(*(int (__thiscall **)(int, int **))(*(_DWORD *)v16 + 16))(v16, &a1); /*0x5cbeb4*/
    v18 = *((_DWORD *)this + 17); /*0x5cbeb6*/
    for ( i = 0; (int)i < *(_DWORD *)(v18 + 16); i = (MSFadeAnim *)((char *)i + 1) ) /*0x5cbec0*/
    {
      if ( i != v17 ) /*0x5cbec4*/
      {
        v20 = *(_DWORD *)(*(_DWORD *)(v18 + 4) + 4 * (_DWORD)i); /*0x5cbecf*/
        (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v20 + 20))(v20, v15, &v51); /*0x5cbed4*/
      }
      v18 = *((_DWORD *)this + 17); /*0x5cbed7*/
    }
  }
  v21 = *((_DWORD *)this + 12); /*0x5cbee5*/
  v22 = *((_DWORD *)this + 10) + 1; /*0x5cbee9*/
  *((_DWORD *)this + 10) = v22; /*0x5cbeeb*/
  if ( v22 > v21 ) /*0x5cbef0*/
  {
    if ( !*((_BYTE *)this + 52) ) /*0x5cbef2*/
    {
      v23 = a2; /*0x5cbef9*/
      *a2 = 0; /*0x5cbf00*/
      v23[1] = 0; /*0x5cbf02*/
      v23[2] = 0; /*0x5cbf05*/
      v23[3] = 0; /*0x5cbf08*/
      return 1; /*0x5cbf11*/
    }
    *((_DWORD *)this + 10) = *((_DWORD *)this + 11); /*0x5cbf17*/
  }
  v25 = *((_DWORD *)this + 16) + 1; /*0x5cbf1d*/
  *((_DWORD *)this + 16) = v25; /*0x5cbf20*/
  if ( v25 >= 4 ) /*0x5cbf26*/
  {
    v26 = *((_DWORD *)this + 14); /*0x5cbf34*/
    v27 = dword_830084; /*0x5cbf37*/
  }
  else
  {
    v26 = dword_830078[v25]; /*0x5cbf28*/
    v27 = *((_DWORD *)this + 14); /*0x5cbf2f*/
  }
  v28 = v27 | v26; /*0x5cbf3c*/
  v29 = *v15; /*0x5cbf48*/
  v48 = *(_DWORD *)&this->__pad_0[4]; /*0x5cbf59*/
  v49 = *(_DWORD *)&this->__pad_0[8]; /*0x5cbf64*/
  v30 = (int *)(*(int (__thiscall **)(int *, _DWORD *))(v29 + 120))(v15, v55); /*0x5cbf68*/
  DrawToSurfaceSHP( /*0x5cbf7e*/
    (int)v15,
    this->field_20,
    this->field_1C,
    *((_DWORD *)this + 10),
    &v48,
    v30,
    v28,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
  v31 = Building::GetFoundationSize(v55, *((_DWORD *)this + 10)); /*0x5cbf8f*/
  v32 = a2; /*0x5cbf94*/
  v33 = a2; /*0x5cbf9a*/
  *a2 = *v31; /*0x5cbf9c*/
  v33[1] = v31[1]; /*0x5cbfa1*/
  v33[2] = v31[2]; /*0x5cbfa7*/
  v33[3] = v31[3]; /*0x5cbfad*/
  v34 = *(_DWORD *)&this->__pad_0[4] + *v32; /*0x5cbfb5*/
  v35 = v32[1]; /*0x5cbfb7*/
  *v32 = v34; /*0x5cbfba*/
  v32[1] = *(_DWORD *)&this->__pad_0[8] + v35; /*0x5cbfc7*/
  if ( (v28 & 0x200) != 0 ) /*0x5cbfca*/
  {
    *v32 = *(__int16 *)(this->field_1C + 2) / -2 + v34; /*0x5cbfde*/
    v32[1] += *(__int16 *)(this->field_1C + 4) / -2; /*0x5cbff3*/
  }
  if ( (int)v32[2] <= 0 || (int)v32[3] <= 0 ) /*0x5cc002*/
  {
    v44 = v52; /*0x5cc0c5*/
    v45 = v53; /*0x5cc0c9*/
    v46 = v54; /*0x5cc0cd*/
    *v32 = v51; /*0x5cc0d1*/
    v32[1] = v44; /*0x5cc0d3*/
    v32[2] = v45; /*0x5cc0d6*/
    v32[3] = v46; /*0x5cc0d9*/
    return 0; /*0x5cc0df*/
  }
  else if ( v53 <= 0 || v54 <= 0 ) /*0x5cc016*/
  {
    v41 = v32[1]; /*0x5cc0a1*/
    v42 = v32[2]; /*0x5cc0a4*/
    v43 = v32[3]; /*0x5cc0a7*/
    *v32 = *v32; /*0x5cc0aa*/
    v32[1] = v41; /*0x5cc0ac*/
    v32[2] = v42; /*0x5cc0af*/
    v32[3] = v43; /*0x5cc0b2*/
    return 0; /*0x5cc0b8*/
  }
  else
  {
    v36 = *v32; /*0x5cc01e*/
    v37 = v32[1]; /*0x5cc020*/
    v38 = v32[2]; /*0x5cc023*/
    v50 = v38; /*0x5cc026*/
    v39 = v32[3]; /*0x5cc02a*/
    if ( v36 > v51 ) /*0x5cc033*/
    {
      v38 += v36 - v51; /*0x5cc037*/
      v36 = v51; /*0x5cc039*/
      v50 = v38; /*0x5cc03b*/
    }
    if ( v37 > v52 ) /*0x5cc045*/
    {
      v39 += v37 - v52; /*0x5cc049*/
      v37 = v52; /*0x5cc04b*/
    }
    if ( v36 + v38 < v51 + v53 ) /*0x5cc057*/
      v50 = v53 - v36 + v51 + 1; /*0x5cc063*/
    if ( v39 + v37 < v52 + v54 ) /*0x5cc076*/
      v39 = v54 - v37 + v52 + 1; /*0x5cc07e*/
    v40 = v50; /*0x5cc082*/
    *v32 = v36; /*0x5cc086*/
    v32[1] = v37; /*0x5cc088*/
    v32[2] = v40; /*0x5cc08b*/
    v32[3] = v39; /*0x5cc08e*/
    return 0; /*0x5cc094*/
  }
}


// ==== 0x005CC110  MSFadeAnim::DrawConstructionFrame  this=MSFadeAnim  sig=csp ====
void __thiscall ScenarioClass::DrawConstructionFrame(MSFadeAnim *this, int arg0, int *a2)
{
  int *FoundationSize; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int *v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ecx
  int *v14; // eax
  int v15; // [esp-28h] [ebp-68h]
  int v16[4]; // [esp+10h] [ebp-30h] BYREF
  int v17; // [esp+20h] [ebp-20h] BYREF
  int v18; // [esp+24h] [ebp-1Ch]
  int v19; // [esp+28h] [ebp-18h]
  int v20; // [esp+2Ch] [ebp-14h]
  char v21[16]; // [esp+30h] [ebp-10h] BYREF

  v17 = 0; /*0x5cc121*/
  v18 = 0; /*0x5cc125*/
  v19 = 0; /*0x5cc129*/
  v20 = 0; /*0x5cc12d*/
  if ( !a2 ) /*0x5cc131*/
    goto LABEL_6; /*0x5cc131*/
  FoundationSize = Building::GetFoundationSize(v16, *((_DWORD *)this + 10)); /*0x5cc143*/
  v17 = *FoundationSize; /*0x5cc14a*/
  v18 = FoundationSize[1]; /*0x5cc151*/
  v19 = FoundationSize[2]; /*0x5cc158*/
  v5 = *(_DWORD *)&this->__pad_0[8] + v18; /*0x5cc162*/
  v20 = FoundationSize[3]; /*0x5cc164*/
  v6 = *(_DWORD *)&this->__pad_0[4] + v17; /*0x5cc16b*/
  v7 = *((_DWORD *)this + 14); /*0x5cc16d*/
  v17 = v6; /*0x5cc173*/
  v18 = v5; /*0x5cc177*/
  if ( (v7 & 0x200) != 0 ) /*0x5cc17b*/
  {
    v8 = this->field_1C; /*0x5cc17d*/
    v17 = *(__int16 *)(v8 + 2) / -2 + v6; /*0x5cc18d*/
    v18 = *(__int16 *)(v8 + 4) / -2 + v5; /*0x5cc1a0*/
  }
  v9 = ClipRectIntersection(v16, a2, &v17, 0, 0); /*0x5cc1b1*/
  v17 = *v9; /*0x5cc1ba*/
  v18 = v9[1]; /*0x5cc1c1*/
  v19 = v9[2]; /*0x5cc1c8*/
  v10 = v9[3]; /*0x5cc1ce*/
  v20 = v10; /*0x5cc1d1*/
  if ( v19 > 0 && v10 > 0 ) /*0x5cc1d9*/
  {
LABEL_6:
    v11 = *((_DWORD *)this + 16); /*0x5cc1db*/
    if ( v11 >= 4 ) /*0x5cc1e1*/
    {
      v12 = *((_DWORD *)this + 14); /*0x5cc1ef*/
      v13 = dword_830084; /*0x5cc1f2*/
    }
    else
    {
      v12 = dword_830078[v11]; /*0x5cc1e3*/
      v13 = *((_DWORD *)this + 14); /*0x5cc1ea*/
    }
    v16[0] = *(_DWORD *)&this->__pad_0[4]; /*0x5cc205*/
    v16[1] = *(_DWORD *)&this->__pad_0[8]; /*0x5cc213*/
    v15 = v13 | v12; /*0x5cc21d*/
    v14 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)arg0 + 120))(arg0, v21); /*0x5cc227*/
    DrawToSurfaceSHP( /*0x5cc23d*/
      arg0,
      this->field_20,
      this->field_1C,
      *((_DWORD *)this + 10),
      v16,
      v14,
      v15,
      0,
      0,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  }
}


// ==== 0x005CC250  MSOverlayAnim::Init  this=MSShapeAnim  sig=csp ====
void *__thiscall MSOverlayAnim::Init(
        void *this,
        ObjectClass *aP1,
        int a3,
        int a4,
        int a5,
        int a6,
        MSShapeAnim *aP6,
        char a8,
        int a9,
        char a10)
{
  int FileClassToBuffer; // eax
  int v12; // ecx

  this->q008 = a4; /*0x5cc25c*/
  this->MSShapeAnim_field_0x04 = a3; /*0x5cc262*/
  this->__pad_00C = 1; /*0x5cc265*/
  this->MSShapeAnim_field_0x04 = Timer::GetTicks(); /*0x5cc278*/
  *((_DWORD *)this + 6) = 0; /*0x5cc27f*/
  this->q008 = a5; /*0x5cc282*/
  this->q024 = a6; /*0x5cc288*/
  *((_DWORD *)this + 10) = 0; /*0x5cc28b*/
  *((_BYTE *)this + 52) = 0; /*0x5cc28e*/
  *((_DWORD *)this + 14) = 0; /*0x5cc291*/
  *((_BYTE *)this + 60) = 0; /*0x5cc294*/
  *(_DWORD *)this = &vt_MSShapeAnim; /*0x5cc296*/
  FileClassToBuffer = LoadFileClassToBuffer((char **)aP1, (bool *)this + 60); /*0x5cc29c*/
  this->q01C = FileClassToBuffer; /*0x5cc2a1*/
  *((_DWORD *)this + 11) = 0; /*0x5cc2a4*/
  v12 = *(__int16 *)(FileClassToBuffer + 6); /*0x5cc2a7*/
  *((_BYTE *)this + 72) = a8; /*0x5cc2b4*/
  this->__pad_00C = v12 - 1; /*0x5cc2bb*/
  this->q010 = 0; /*0x5cc2c4*/
  *((_DWORD *)this + 17) = aP6; /*0x5cc2c7*/
  *(_DWORD *)this = &MSOverlayAnim::`vftable'; /*0x5cc2ca*/
  *((_DWORD *)this + 10) = a9; /*0x5cc2d0*/
  if ( !a10 ) /*0x5cc2d3*/
    this->q010 = 4; /*0x5cc2d5*/
  return this; /*0x5cc2de*/
}


// ==== 0x005CC330  MSOverlayAnim::AnimateConstructionStage  this=MSOverlayAnim  sig=csp ====
bool __userpurge ScenarioClass::sub_5CC330@<al>(int a1@<ecx>, int a2@<ebp>, int a3, _DWORD *a4)
{
  signed int v5; // edi
  signed int v6; // eax
  int v7; // edi
  unsigned int v8; // eax
  _DWORD *FoundationSize; // eax
  _DWORD *v10; // ebx
  _DWORD *v11; // ecx
  int v12; // ecx
  unsigned int v13; // edx
  int v14; // ecx
  int v15; // edx
  int *v16; // eax
  int v17; // ecx
  int v18; // eax
  int i; // ebp
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // eax
  int *v23; // eax
  _DWORD *v25; // eax
  int v26; // [esp-Ch] [ebp-54h]
  int v27; // [esp-8h] [ebp-50h]
  int v28; // [esp+28h] [ebp-20h] BYREF
  int v29; // [esp+2Ch] [ebp-1Ch]
  int v30; // [esp+30h] [ebp-18h]
  int v31; // [esp+38h] [ebp-10h] BYREF
  char v32[12]; // [esp+3Ch] [ebp-Ch] BYREF

  if ( *(_BYTE *)(a1 + 12) != 1 ) /*0x5cc33b*/
    goto LABEL_19; /*0x5cc33b*/
  v5 = *(_DWORD *)(a1 + 24); /*0x5cc344*/
  if ( *(_DWORD *)(a1 + 16) != -1 ) /*0x5cc34a*/
  {
    v6 = Timer::GetTicks() - *(_DWORD *)(a1 + 16); /*0x5cc354*/
    if ( v6 >= v5 ) /*0x5cc359*/
      goto LABEL_6; /*0x5cc359*/
    v5 -= v6; /*0x5cc35b*/
  }
  if ( v5 ) /*0x5cc35f*/
  {
LABEL_19:
    v25 = a4; /*0x5cc526*/
    *a4 = 0; /*0x5cc52c*/
    v25[1] = 0; /*0x5cc52e*/
    v25[2] = 0; /*0x5cc531*/
    v25[3] = 0; /*0x5cc534*/
    return 0; /*0x5cc534*/
  }
LABEL_6:
  v7 = *(_DWORD *)(a1 + 36); /*0x5cc365*/
  *(_DWORD *)(a1 + 16) = Timer::GetTicks(); /*0x5cc371*/
  *(_DWORD *)(a1 + 20) = v29; /*0x5cc378*/
  v8 = *(_DWORD *)(a1 + 64); /*0x5cc37b*/
  *(_DWORD *)(a1 + 24) = v7; /*0x5cc381*/
  if ( v8 >= 4 ) /*0x5cc384*/
    return 0; /*0x5cc538*/
  FoundationSize = Building::GetFoundationSize(&v28, *(_DWORD *)(a1 + 40)); /*0x5cc398*/
  v10 = a4; /*0x5cc39d*/
  v11 = a4; /*0x5cc3a3*/
  *a4 = *FoundationSize; /*0x5cc3a5*/
  v11[1] = FoundationSize[1]; /*0x5cc3aa*/
  v11[2] = FoundationSize[2]; /*0x5cc3b0*/
  v11[3] = FoundationSize[3]; /*0x5cc3b6*/
  v12 = v10[1]; /*0x5cc3c0*/
  *v10 += *(_DWORD *)(a1 + 4); /*0x5cc3c3*/
  v10[1] = *(_DWORD *)(a1 + 8) + v12; /*0x5cc3ca*/
  if ( (*(_DWORD *)(a1 + 56) & 0x200) != 0 ) /*0x5cc3d3*/
  {
    *v10 += *(__int16 *)(*(_DWORD *)(a1 + 28) + 2) / -2; /*0x5cc3e7*/
    v10[1] += *(__int16 *)(*(_DWORD *)(a1 + 28) + 4) / -2; /*0x5cc3fc*/
  }
  (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int, int))(*(_DWORD *)a3 + 8))( /*0x5cc413*/
    a3,
    v10,
    MEMORY[0x887310],
    v10,
    0,
    1,
    a2);
  v13 = *(_DWORD *)(a1 + 64); /*0x5cc41c*/
  if ( v13 >= 3 ) /*0x5cc41e*/
    v13 = 3; /*0x5cc420*/
  v14 = *(_DWORD *)(a1 + 56) | dword_830078[v13]; /*0x5cc443*/
  v15 = *(_DWORD *)a3; /*0x5cc445*/
  v29 = *(_DWORD *)(a1 + 4); /*0x5cc447*/
  v26 = v14; /*0x5cc452*/
  v30 = *(_DWORD *)(a1 + 8); /*0x5cc456*/
  v16 = (int *)(*(int (__thiscall **)(int))(v15 + 120))(a3); /*0x5cc45a*/
  DrawToSurfaceSHP( /*0x5cc470*/
    a3,
    *(_DWORD *)(a1 + 32),
    *(_DWORD *)(a1 + 28),
    *(_DWORD *)(a1 + 40),
    &v28,
    v16,
    (int)v32,
    v26,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0);
  v17 = *(_DWORD *)(a1 + 68); /*0x5cc475*/
  if ( v17 ) /*0x5cc47a*/
  {
    a4 = (_DWORD *)a1; /*0x5cc47c*/
    a4 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v17 + 16))(v17, &a4); /*0x5cc48a*/
    v18 = *(_DWORD *)(a1 + 68); /*0x5cc48e*/
    for ( i = 0; i < *(_DWORD *)(v18 + 16); ++i ) /*0x5cc498*/
    {
      if ( (_DWORD *)i != a4 ) /*0x5cc49e*/
      {
        v20 = *(_DWORD *)(*(_DWORD *)(v18 + 4) + 4 * i); /*0x5cc4a5*/
        (*(void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)v20 + 20))(v20, a3, v10); /*0x5cc4aa*/
      }
      v18 = *(_DWORD *)(a1 + 68); /*0x5cc4ad*/
    }
  }
  v21 = *(_DWORD *)(a1 + 64) + 1; /*0x5cc4bc*/
  *(_DWORD *)(a1 + 64) = v21; /*0x5cc4be*/
  if ( v21 >= 4 ) /*0x5cc4c4*/
  {
    v22 = *(_DWORD *)(a1 + 56); /*0x5cc4cf*/
    v28 = *(_DWORD *)(a1 + 4); /*0x5cc4db*/
    BYTE1(v22) |= 4u; /*0x5cc4e3*/
    v27 = v22; /*0x5cc4e7*/
    v29 = *(_DWORD *)(a1 + 8); /*0x5cc4e8*/
    v23 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a3 + 120))(a3, &v31); /*0x5cc4f5*/
    DrawToSurfaceSHP( /*0x5cc50f*/
      MEMORY[0x887310],
      *(_DWORD *)(a1 + 32),
      *(_DWORD *)(a1 + 28),
      *(_DWORD *)(a1 + 40),
      &v28,
      v23,
      v27,
      0,
      0,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  }
  return *(_BYTE *)(a1 + 72) == 0; /*0x5cc51b*/
}


// ==== 0x005CC550  MSOverlayAnim::DrawPlacementPreview  this=MSOverlayAnim  sig=csp ====
void __thiscall ScenarioClass::sub_5CC550(int this, int a2, int *a3)
{
  char v4; // al
  int *FoundationSize; // eax
  int v6; // ebp
  int v7; // ecx
  int v8; // edi
  int v9; // eax
  int v10; // ebp
  int *v11; // eax
  int v12; // ecx
  unsigned int v13; // edx
  int v14; // edx
  int v15; // ebx
  int *v16; // eax
  int v17; // [esp-28h] [ebp-64h]
  int v18[4]; // [esp+Ch] [ebp-30h] BYREF
  int v19; // [esp+1Ch] [ebp-20h] BYREF
  int v20; // [esp+20h] [ebp-1Ch]
  int v21; // [esp+24h] [ebp-18h]
  int v22; // [esp+28h] [ebp-14h]
  char v23[16]; // [esp+2Ch] [ebp-10h] BYREF

  v19 = 0; /*0x5cc55a*/
  v4 = *(_BYTE *)(this + 12); /*0x5cc55e*/
  v20 = 0; /*0x5cc561*/
  v21 = 0; /*0x5cc567*/
  v22 = 0; /*0x5cc56b*/
  if ( v4 ) /*0x5cc56f*/
  {
    FoundationSize = Building::GetFoundationSize(v18, *(_DWORD *)(this + 40)); /*0x5cc582*/
    v6 = *(_DWORD *)(this + 4); /*0x5cc589*/
    v19 = *FoundationSize; /*0x5cc58c*/
    v7 = v6 + v19; /*0x5cc590*/
    v20 = FoundationSize[1]; /*0x5cc595*/
    v21 = FoundationSize[2]; /*0x5cc59c*/
    v8 = *(_DWORD *)(this + 8) + v20; /*0x5cc5a6*/
    v22 = FoundationSize[3]; /*0x5cc5a8*/
    v9 = *(_DWORD *)(this + 56); /*0x5cc5ac*/
    v19 += v6; /*0x5cc5b2*/
    v20 = v8; /*0x5cc5b6*/
    if ( (v9 & 0x200) != 0 ) /*0x5cc5ba*/
    {
      v10 = *(_DWORD *)(this + 28); /*0x5cc5bc*/
      v19 = *(__int16 *)(v10 + 2) / -2 + v7; /*0x5cc5cc*/
      v20 = *(__int16 *)(v10 + 4) / -2 + v8; /*0x5cc5dd*/
    }
    if ( !a3 /*0x5cc61d*/
      || (v11 = ClipRectIntersection(v18, a3, &v19, 0, 0),
          v19 = *v11,
          v20 = v11[1],
          v21 = v11[2],
          v12 = v11[3],
          v22 = v12,
          v21 > 0)
      && v12 > 0 )
    {
      v13 = *(_DWORD *)(this + 64); /*0x5cc61f*/
      if ( v13 >= 3 ) /*0x5cc625*/
        v13 = 3; /*0x5cc627*/
      v14 = dword_830078[v13]; /*0x5cc635*/
      v18[0] = *(_DWORD *)(this + 4); /*0x5cc645*/
      v15 = *(_DWORD *)(this + 56); /*0x5cc64e*/
      v18[1] = *(_DWORD *)(this + 8); /*0x5cc651*/
      v17 = v15 | v14; /*0x5cc661*/
      v16 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 120))(a2, v23); /*0x5cc665*/
      DrawToSurfaceSHP( /*0x5cc67b*/
        a2,
        *(_DWORD *)(this + 32),
        *(_DWORD *)(this + 28),
        *(_DWORD *)(this + 40),
        v18,
        v16,
        v17,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
    }
  }
}


// ==== 0x005CC690  ObjectClass::Map_Process_5CC690  this=VOID_PTR  sig=csp ====
void __thiscall sub_5CC690(_DWORD *this)
{
  *(this + 16) = 0; /*0x5cc690*/
}


// ==== 0x005CC6A0  MSAnim::Reset  this=VOID_PTR  sig=csp ====
int __thiscall MSAnim::Reset(_DWORD *this, int a2)
{
  *(this + 16) = 0; /*0x5cc6a4*/
  *(this + 10) = a2; /*0x5cc6ab*/
  return a2; /*0x5cc6ae*/
}


// ==== 0x005CC6C0  MSOverlayAnim::DrawSHPFrameToSurface  this=MSOverlayAnim  sig=csp ====
void __thiscall ScenarioClass::sub_5CC6C0(int this, int a2)
{
  unsigned int v3; // edx
  int v4; // eax
  int v5; // edx
  int *v6; // eax
  int v7; // [esp-2Ch] [ebp-48h]
  int v8[2]; // [esp+4h] [ebp-18h] BYREF
  _BYTE v9[16]; // [esp+Ch] [ebp-10h] BYREF

  v3 = *(_DWORD *)(this + 64); /*0x5cc6c6*/
  if ( v3 >= 3 ) /*0x5cc6cc*/
    v3 = 3; /*0x5cc6ce*/
  if ( *(_BYTE *)(this + 12) ) /*0x5cc6d3*/
  {
    v4 = dword_830078[v3]; /*0x5cc6e4*/
    v5 = *(_DWORD *)(this + 56); /*0x5cc6eb*/
    v8[0] = *(_DWORD *)(this + 4); /*0x5cc6f8*/
    v8[1] = *(_DWORD *)(this + 8); /*0x5cc708*/
    v7 = v5 | v4; /*0x5cc70e*/
    v6 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)MEMORY[0x887310] + 120))(MEMORY[0x887310], v9); /*0x5cc714*/
    DrawToSurfaceSHP( /*0x5cc72e*/
      MEMORY[0x887310],
      *(_DWORD *)(this + 32),
      *(_DWORD *)(this + 28),
      *(_DWORD *)(this + 40),
      v8,
      v6,
      v7,
      0,
      0,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  }
}


// ==== 0x005CC740  MSOverlayAnim::updateTiberiumGrowth  this=MSOverlayAnim  sig=csp ====
BOOL __thiscall ScenarioClass::sub_5CC740(int this)
{
  return !*(_BYTE *)(this + 12) || *(_DWORD *)(this + 64) >= 4u; /*0x5cc74f*/
}


// ==== 0x005CC760  ArtConfig::loadConfig  this=MSAnim  sig=csp ====
_DWORD *__thiscall ArtConfig::loadConfig(
        _DWORD *this,
        ObjectClass *aP1,
        ObjectClass *aP2,
        ObjectClass *aP3,
        ObjectClass *aP4,
        ObjectClass *aP5)
{
  int v7; // eax
  int v8; // eax
  char *v9; // eax
  _DWORD *v10; // eax
  ObjectClass *aP5a; // [esp+24h] [ebp+14h]

  v7 = *(_DWORD *)&aP4->__pad_0[4]; /*0x5cc76c*/
  this->MSAnim_field_0x04 = *(_DWORD *)aP4->__pad_0; /*0x5cc76f*/
  this->MSAnim_field_0x08 = v7; /*0x5cc775*/
  this->__pad_00C = 1; /*0x5cc778*/
  this->MSAnim_field_0x04 = Timer::GetTicks(); /*0x5cc785*/
  *(this + 6) = 0; /*0x5cc78d*/
  this->q01C = 0; /*0x5cc790*/
  *this = &vt_MSAnim; /*0x5cc795*/
  this->MSAnim_field_0x08 = aP2; /*0x5cc79b*/
  *((MSAnim *)this + 3) = *(MSAnim *)aP4->__pad_0; /*0x5cc7a4*/
  v8 = *(_DWORD *)&aP4->__pad_0[12]; /*0x5cc7b6*/
  this->q034 = aP3; /*0x5cc7b9*/
  this->__pad_00C = v8; /*0x5cc7bc*/
  this->q038 = (_BYTE)aP5; /*0x5cc7c5*/
  *this = &MSBinkAnim::`vftable'; /*0x5cc7c8*/
  if ( String::Length((const char **)aP1) ) /*0x5cc7ce*/
  {
    aP5a = (ObjectClass *)__2_YAPAXI_Z(0x34u); /*0x5cc7e1*/
    if ( aP5a ) /*0x5cc7e7*/
    {
      v9 = String::GetOrEmpty_Alt((char **)aP1); /*0x5cc7ec*/
      v10 = BinkMovie::Open(aP5a, v9, (int)aP2); /*0x5cc7f6*/
    }
    else
    {
      v10 = 0; /*0x5cc7fd*/
    }
    this->q01C = v10; /*0x5cc7ff*/
    BinkMovieHandle::RenderFrameClipped((int)v10, *(_DWORD *)aP4->__pad_0, *(_DWORD *)&aP4->__pad_0[4]); /*0x5cc80b*/
  }
  return this; /*0x5cc812*/
}


// ==== 0x005CC850  MSBinkAnim::Pause  this=MSBinkAnim  sig=csp ====
_DWORD *__thiscall MSBinkAnim::_vt06(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ecx

  v3 = this + 9; /*0x5cc854*/
  *a2 = *v3; /*0x5cc85c*/
  a2[1] = v3[1]; /*0x5cc861*/
  a2[2] = v3[2]; /*0x5cc867*/
  a2[3] = v3[3]; /*0x5cc86e*/
  return a2; /*0x5cc86a*/
}


// ==== 0x005CC880  MSBinkAnim::Stop  this=MSBinkAnim  sig=csp ====
BOOL __thiscall MSBinkAnim::_vt07(_DWORD *this)
{
  _DWORD *v1; // ecx

  v1 = (_DWORD *)this->q01C; /*0x5cc880*/
  return !v1 || BinkMovie::IsAtEnd(v1); /*0x5cc892*/
}


// ==== 0x005CC8A0  MSBinkAnim::Load  this=MSBinkAnim  sig=csp ====
bool __thiscall MSBinkAnim::_vt04(void *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v6; // ecx
  _DWORD *v7; // edx
  int v8; // eax
  int i; // edi
  int v10; // ecx

  v3 = a2; /*0x5cc8a1*/
  if ( !a2 ) /*0x5cc8aa*/
    return 0; /*0x5cc8ad*/
  v6 = (_DWORD *)this->q01C; /*0x5cc8b3*/
  if ( !v6 ) /*0x5cc8b8*/
    return 1; /*0x5cc8bb*/
  if ( !BinkMovie::IsAtEnd(v6) && BinkMovie::RenderFrameToSurface(*((int **)this + 7)) ) /*0x5cc8cd*/
  {
    (*(void (__thiscall **)(void *, int, _DWORD))(this->__pad_014)(this, v3, 0); /*0x5cc8df*/
    v7 = a3; /*0x5cc8e2*/
    a2 = (int)this; /*0x5cc8eb*/
    *a3 = *((_DWORD *)this + 9); /*0x5cc8f1*/
    v7[1] = *((_DWORD *)this + 10); /*0x5cc8f6*/
    v7[2] = *((_DWORD *)this + 11); /*0x5cc8fc*/
    v7[3] = this->MSBinkAnim_field_0x0C; /*0x5cc907*/
    a2 = (*(int (__thiscall **)(_DWORD, int *))(**((_DWORD **)this + 13) + 16))(*((_DWORD *)this + 13), &a2); /*0x5cc912*/
    v8 = *((_DWORD *)this + 13); /*0x5cc916*/
    for ( i = 0; i < *(_DWORD *)(v8 + 16); ++i ) /*0x5cc920*/
    {
      if ( i != a2 ) /*0x5cc926*/
      {
        v10 = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * i); /*0x5cc92d*/
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 20))(v10, v3, (int)this + 36); /*0x5cc932*/
      }
      v8 = *((_DWORD *)this + 13); /*0x5cc935*/
    }
  }
  return BinkMovie::IsAtEnd(*((_DWORD **)this + 7)) && !*((_BYTE *)this + 56); /*0x5cc8ac*/
}


// ==== 0x005CC970  MSBinkAnim::Play  this=MSBinkAnim  sig=csp ====
int __thiscall MSBinkAnim::_vt05(void *this, int a2, int a3)
{
  return (*(int (__thiscall **)(int, int, int, int, _DWORD, int))(*(_DWORD *)a2 + 8))( /*0x5cca01*/
           a2,
           (int)this + 36,
           MEMORY[0x887310],
           (int)this + 36,
           0,
           1);
}


// ==== 0x005CCA10  MSBinkAnim::nullsub_189  this=MSBinkAnim  sig=csp ====
void __stdcall nullsub_189(int a1)
{
  ; /*0x5cca10*/
}


// ==== 0x005CCA20  MSVQAnim::Construct  this=MSVQAnim  sig=csp ====
_DWORD *__thiscall ConstructMSVQAnim(_DWORD *this, char **a2, int a3, int a4, _DWORD *a5, char a6)
{
  DWORD TicksTimer; // eax
  char v8; // cl
  int *v9; // edi
  int v10; // eax
  const char **v11; // ecx
  const char **v12; // ebp
  char *v13; // eax
  _DWORD *VQMovie; // eax
  int v15; // edx
  int v16; // ebx
  int v17; // eax
  int *v18; // ecx
  char **v19; // edx
  int v20; // eax
  _DWORD *v21; // edx
  _DWORD *v22; // ecx
  char **v23; // eax
  int v25; // [esp-8h] [ebp-84h]
  _DWORD v26[22]; // [esp+10h] [ebp-6Ch] BYREF
  _BYTE v27[12]; // [esp+68h] [ebp-14h] BYREF
  int v28; // [esp+74h] [ebp-8h]

  this->MSVQAnim_field_0x04 = 0; /*0x5cca2e*/
  this->MSVQAnim_field_0x08 = 0; /*0x5cca31*/
  this->MSVQAnim_field_0x0C = 0; /*0x5cca34*/
  TicksTimer = Timer::GetTicks(); /*0x5cca37*/
  v8 = a6; /*0x5cca3c*/
  v9 = (int *)a3; /*0x5cca43*/
  this->MSVQAnim_field_0x10 = TicksTimer; /*0x5cca4a*/
  v10 = a4; /*0x5cca4d*/
  this->MSVQAnim_field_0x18 = 0; /*0x5cca54*/
  this->__pad_02C = v8; /*0x5cca57*/
  v11 = (const char **)a2; /*0x5cca5a*/
  this->MSVQAnim_field_0x1C = 0; /*0x5cca62*/
  this->__pad_020 = v9; /*0x5cca65*/
  *(this + 9) = v10; /*0x5cca68*/
  this->q028 = 0; /*0x5cca6b*/
  this->q02D = 0; /*0x5cca6e*/
  *this = &vt_MSVQAnim; /*0x5cca71*/
  if ( String::NotEquals(v11, 0) && v9 ) /*0x5cca86*/
  {
    v25 = Math::RoundToInt(MEMORY[0xA8EB98] * 255.0); /*0x5ccaa0*/
    v12 = (const char **)a2; /*0x5ccab2*/
    v13 = String::GetOrEmpty_Alt(a2); /*0x5ccacc*/
    VQMovie = LoadVQMovie(v13, v9, 0, 0, 0, 0, 0, 0, 0, 0, v25, 0); /*0x5ccad5*/
    this->MSVQAnim_field_0x1C = VQMovie; /*0x5ccadc*/
    if ( VQMovie ) /*0x5ccadf*/
    {
      a3 = MEMORY[0x8A00A8]; /*0x5ccaf0*/
      v15 = *v9; /*0x5ccaf7*/
      a2 = (char **)MEMORY[0x8A00A4]; /*0x5ccafb*/
      v16 = ((*(int (__thiscall **)(int *))(v15 + 128))(v9) - MEMORY[0x8A00A8]) / 2; /*0x5ccb19*/
      v17 = (*(int (__thiscall **)(int *))(*v9 + 124))(v9); /*0x5ccb1b*/
      v18 = (int *)(this->MSVQAnim_field_0x1C + 36); /*0x5ccb29*/
      v19 = a2; /*0x5ccb2f*/
      *v18 = (v17 - MEMORY[0x8A00A4]) / 2; /*0x5ccb38*/
      v20 = a3; /*0x5ccb3a*/
      v18[1] = v16; /*0x5ccb41*/
      v18[2] = (int)v19; /*0x5ccb44*/
      v21 = a5; /*0x5ccb47*/
      v18[3] = v20; /*0x5ccb4e*/
      v22 = (_DWORD *)(this->MSVQAnim_field_0x1C + 52); /*0x5ccb56*/
      *v22 = *v21; /*0x5ccb59*/
      v22[1] = v21[1]; /*0x5ccb5e*/
      v22[2] = v21[2]; /*0x5ccb64*/
      v22[3] = v21[3]; /*0x5ccb6a*/
    }
    unknown_libname_73(&a6); /*0x5ccb74*/
    String::Tokenize(v12, 0, stru_826598, (void **)&a6); /*0x5ccb8a*/
    v23 = String::Concat2((const char **)&a6, (char **)&a2, g_Str_File__PCX); /*0x5ccba3*/
    CCFileClass::Construct2(v26, v23); /*0x5ccbad*/
    DeleteAndZero((void **)&a2); /*0x5ccbb9*/
    if ( CCFileClass::Open(v26, 0) ) /*0x5ccbc4*/
      this->q028 = DecodeFrameSHP((int)v26, 0, 0, 0); /*0x5ccbdc*/
    v26[0] = &vt_CCFileClass; /*0x5ccbe3*/
    v28 = 0; /*0x5ccbeb*/
    Vector::Clear((int)v27); /*0x5ccbf3*/
    v26[0] = &off_7E1668; /*0x5ccbfc*/
    BufferIOFileClass::Dtor(v26); /*0x5ccc04*/
    DeleteAndZero((void **)&a6); /*0x5ccc10*/
  }
  return this; /*0x5ccc17*/
}


// ==== 0x005CCC30  MSVQAnim::ConstructMSVQAnimHidden  this=MSVQAnim  sig=csp ====
_DWORD *__thiscall MSVQAnim::ConstructMSVQAnimHidden(
        _DWORD *this,
        MSVQAnim *aP1,
        ObjectClass *aP2,
        MSVQAnim *aP3,
        char aP3a)
{
  DWORD Ticks; // eax
  char v7; // cl
  int *v8; // edi
  MSVQAnim *v9; // eax
  MSVQAnim *v10; // ecx
  ObjectClass *v11; // ebx
  char *v12; // eax
  ObjectClass *VQMovie; // eax
  int v14; // ebp
  int v15; // eax
  int *v16; // edi
  int v17; // edi
  int v18; // eax
  int *v19; // ebp
  char **v20; // eax
  int v22; // [esp-8h] [ebp-84h]
  _DWORD v23[22]; // [esp+10h] [ebp-6Ch] BYREF
  _BYTE v24[12]; // [esp+68h] [ebp-14h] BYREF
  int v25; // [esp+74h] [ebp-8h]

  this->MSVQAnim_field_0x04 = 0; /*0x5ccc3e*/
  this->MSVQAnim_field_0x08 = 0; /*0x5ccc41*/
  this->MSVQAnim_field_0x0C = 0; /*0x5ccc44*/
  Ticks = Timer::GetTicks(); /*0x5ccc47*/
  v7 = aP3a; /*0x5ccc4c*/
  v8 = (int *)aP2; /*0x5ccc53*/
  this->MSVQAnim_field_0x04 = Ticks; /*0x5ccc5a*/
  v9 = aP3; /*0x5ccc5d*/
  this->MSVQAnim_field_0x18 = 0; /*0x5ccc64*/
  this->__pad_02C = v7; /*0x5ccc67*/
  v10 = aP1; /*0x5ccc6a*/
  this->MSVQAnim_field_0x1C = 0; /*0x5ccc72*/
  this->MSVQAnim_field_0x08 = v8; /*0x5ccc75*/
  *(this + 9) = v9; /*0x5ccc78*/
  this->q028 = 0; /*0x5ccc7b*/
  this->q02D = 0; /*0x5ccc7e*/
  *this = &vt_MSVQAnim; /*0x5ccc81*/
  if ( String::NotEquals((const char **)v10, 0) && v8 ) /*0x5ccc96*/
  {
    v22 = Math::RoundToInt(*(float *)&HouseClass_Player.__pad_5568[22756] * 255.0); /*0x5cccb0*/
    v11 = (ObjectClass *)aP1; /*0x5cccc2*/
    v12 = String::GetOrEmpty_Alt((char **)aP1); /*0x5cccdc*/
    VQMovie = LoadVQMovie(v12, v8, 0, 0, 0, 0, 0, 0, 0, 0, v22, 0); /*0x5ccce5*/
    this->MSVQAnim_field_0x1C = VQMovie; /*0x5cccec*/
    if ( VQMovie ) /*0x5cccef*/
    {
      v14 = ((*(int (__thiscall **)(int *))(*v8 + 128))(v8) - 400) / 2; /*0x5ccd0d*/
      v15 = (*(int (__thiscall **)(int *))(*v8 + 124))(v8); /*0x5ccd0f*/
      v16 = (int *)(this->MSVQAnim_field_0x1C + 36); /*0x5ccd1d*/
      *v16 = (v15 - 640) / 2; /*0x5ccd22*/
      v16[1] = v14; /*0x5ccd2e*/
      v16[2] = 640; /*0x5ccd31*/
      v16[3] = 400; /*0x5ccd34*/
      v17 = ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 128))(*(_DWORD *)&stru_87C374.__pad_579C[22524]) /*0x5ccd57*/
           - 400)
          / 2;
      v18 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 124))(*(_DWORD *)&stru_87C374.__pad_579C[22524]); /*0x5ccd59*/
      v19 = (int *)(this->MSVQAnim_field_0x1C + 52); /*0x5ccd6e*/
      *v19 = (v18 - 640) / 2; /*0x5ccd76*/
      v19[1] = v17; /*0x5ccd79*/
      v19[2] = 640; /*0x5ccd7c*/
      v19[3] = 400; /*0x5ccd7f*/
    }
    unknown_libname_73(&aP3a); /*0x5ccd89*/
    String::Tokenize((const char **)v11, 0, &stru_826598, (ObjectClass *)&aP3a); /*0x5ccd9f*/
    v20 = String::Concat2((const char **)&aP3a, (char **)&aP1, g_Str_File__PCX); /*0x5ccdb8*/
    CCFileClass::Construct2(v23, v20); /*0x5ccdc2*/
    DeleteAndZero((int)&aP1); /*0x5ccdce*/
    if ( CCFileClass::Open(v23, 0) ) /*0x5ccdd9*/
      this->q028 = DecodeFrameSHP((int)v23, 0, 0, 0); /*0x5ccdf1*/
    v23[0] = &vt_CCFileClass; /*0x5ccdf8*/
    v25 = 0; /*0x5cce00*/
    Vector::Clear((int)v24); /*0x5cce08*/
    v23[0] = &off_7E1668; /*0x5cce11*/
    BufferIOFileClass::Dtor(v23); /*0x5cce19*/
    DeleteAndZero((int)&aP3a); /*0x5cce25*/
  }
  return this; /*0x5cce2c*/
}


// ==== 0x005CCE90  MSVQAnim::Load  this=MSVQAnim  sig=csp ====
BOOL __thiscall MSVQAnim::_vt04(void *this, int a2, _DWORD *a3)
{
  char **v4; // ecx
  char v5; // al
  char v6; // al
  _DWORD *v7; // edi
  int v8; // ebp
  _DWORD *v9; // ecx
  int v10; // eax
  int j; // ebx
  char v12; // al
  int v13; // ecx
  int v14; // ebx
  int v15; // eax
  _DWORD *v16; // eax
  int v17; // ebx
  int v18; // eax
  int k; // edi
  int v20; // ecx
  int v21; // ecx
  int *v22; // eax
  int v23; // ecx
  int v24; // ebx
  _DWORD *v25; // ecx
  int v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // ebp
  int v30; // eax
  int i; // edi
  int v32; // ecx
  int v34; // [esp+3Eh] [ebp-24h] BYREF
  int v35; // [esp+42h] [ebp-20h] BYREF
  int v36; // [esp+46h] [ebp-1Ch]
  int v37; // [esp+4Ah] [ebp-18h]
  int v38; // [esp+4Eh] [ebp-14h]
  _BYTE v39[16]; // [esp+52h] [ebp-10h] BYREF

  v4 = (char **)this->MSVQAnim_field_0x1C; /*0x5cce99*/
  if ( !v4 ) /*0x5cce9e*/
  {
    if ( !this->q02D ) /*0x5ccfe9*/
    {
      v21 = this->q028; /*0x5ccff4*/
      if ( v21 ) /*0x5ccff9*/
      {
        v22 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v21 + 120))(v21, v39); /*0x5cd006*/
        v35 = *v22; /*0x5cd00d*/
        v36 = v22[1]; /*0x5cd016*/
        v37 = v22[2]; /*0x5cd01d*/
        v23 = this->MSVQAnim_field_0x08; /*0x5cd021*/
        v38 = v22[3]; /*0x5cd027*/
        (*(void (__thiscall **)(int, int *, _DWORD, int *, _DWORD, int))(*(_DWORD *)v23 + 8))( /*0x5cd03b*/
          v23,
          &v35,
          this->q028,
          &v35,
          0,
          1);
        v24 = a2; /*0x5cd03e*/
        (*(void (__thiscall **)(void *, int, _DWORD))(this->MSVQAnim_field_0x14)(this, a2, 0); /*0x5cd049*/
        v25 = a3; /*0x5cd04c*/
        v26 = v36; /*0x5cd054*/
        a2 = (int)this; /*0x5cd058*/
        *a3 = v35; /*0x5cd05c*/
        v27 = v37; /*0x5cd05e*/
        v25[1] = v26; /*0x5cd062*/
        v28 = v38; /*0x5cd065*/
        v25[2] = v27; /*0x5cd069*/
        v25[3] = v28; /*0x5cd06c*/
        v29 = (*(int (__thiscall **)(_DWORD, int *))(**((_DWORD **)this + 9) + 16))(*((_DWORD *)this + 9), &a2); /*0x5cd07c*/
        v30 = *((_DWORD *)this + 9); /*0x5cd07e*/
        for ( i = 0; i < *(_DWORD *)(v30 + 16); ++i ) /*0x5cd088*/
        {
          if ( i != v29 ) /*0x5cd08c*/
          {
            v32 = *(_DWORD *)(*(_DWORD *)(v30 + 4) + 4 * i); /*0x5cd097*/
            (*(void (__thiscall **)(int, int, int *))(*(_DWORD *)v32 + 20))(v32, v24, &v35); /*0x5cd09c*/
          }
          v30 = *((_DWORD *)this + 9); /*0x5cd09f*/
        }
      }
    }
    this->q02D = 1; /*0x5cd0a8*/
LABEL_24:
    if ( !this->q02D ) /*0x5cd0b1*/
      return 0; /*0x5cd0b1*/
    return !this->__pad_02C; /*0x5cd0b1*/
  }
  v5 = this->q02D; /*0x5ccea4*/
  HIBYTE(v34) = 0; /*0x5ccea7*/
  if ( !v5 ) /*0x5cceae*/
  {
    v6 = Entity_Load(v4, (_BYTE *)&v34 + 3); /*0x5cceb8*/
    v7 = a3; /*0x5ccebd*/
    v8 = a2; /*0x5ccec1*/
    if ( v6 == 1 ) /*0x5ccec7*/
    {
      (*(void (__thiscall **)(void *, int, _DWORD))(this->MSVQAnim_field_0x14)(this, a2, 0); /*0x5cced0*/
      v9 = (_DWORD *)(this->MSVQAnim_field_0x1C + 52); /*0x5cced8*/
      a2 = (int)this; /*0x5ccedb*/
      *v7 = *v9; /*0x5ccee1*/
      v7[1] = v9[1]; /*0x5ccee6*/
      v7[2] = v9[2]; /*0x5cceec*/
      v7[3] = v9[3]; /*0x5ccef7*/
      a2 = (*(int (__thiscall **)(_DWORD, int *))(**((_DWORD **)this + 9) + 16))(*((_DWORD *)this + 9), &a2); /*0x5ccf02*/
      v10 = *((_DWORD *)this + 9); /*0x5ccf06*/
      for ( j = 0; j < *(_DWORD *)(v10 + 16); ++j ) /*0x5ccf10*/
      {
        if ( j != a2 ) /*0x5ccf16*/
          (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(v10 + 4) + 4 * j) + 20))( /*0x5ccf28*/
            *(_DWORD *)(*(_DWORD *)(v10 + 4) + 4 * j),
            v8,
            this->MSVQAnim_field_0x1C + 52);
        v10 = *((_DWORD *)this + 9); /*0x5ccf2b*/
      }
    }
    v12 = HIBYTE(v34); /*0x5ccf34*/
    if ( HIBYTE(v34) == 1 ) /*0x5ccf3a*/
    {
      v13 = this->q028; /*0x5ccf40*/
      if ( !v13 ) /*0x5ccf45*/
      {
LABEL_16:
        this->q02D = v12; /*0x5ccfe1*/
        goto LABEL_24; /*0x5ccfe4*/
      }
      v14 = **((_DWORD **)this + 8); /*0x5ccf54*/
      v15 = (*(int (__thiscall **)(int, int *, _DWORD, int))(*(_DWORD *)v13 + 120))(v13, &v35, 0, 1); /*0x5ccf5b*/
      (*(void (__thiscall **)(_DWORD, int, _DWORD, int))(v14 + 8))( /*0x5ccf6d*/
        this->MSVQAnim_field_0x08,
        this->MSVQAnim_field_0x1C + 36,
        this->q028,
        v15);
      (*(void (__thiscall **)(void *, int, _DWORD))(this->MSVQAnim_field_0x14)(this, v8, 0); /*0x5ccf77*/
      v16 = (_DWORD *)this->MSVQAnim_field_0x1C; /*0x5ccf7a*/
      a2 = (int)this; /*0x5ccf7d*/
      v16 += 13; /*0x5ccf81*/
      *v7 = *v16; /*0x5ccf86*/
      v7[1] = v16[1]; /*0x5ccf8b*/
      v7[2] = v16[2]; /*0x5ccf91*/
      v7[3] = v16[3]; /*0x5ccf97*/
      v17 = (*(int (__thiscall **)(_DWORD, int *))(**((_DWORD **)this + 9) + 16))(*((_DWORD *)this + 9), &a2); /*0x5ccfa7*/
      v18 = *((_DWORD *)this + 9); /*0x5ccfa9*/
      for ( k = 0; k < *(_DWORD *)(v18 + 16); ++k ) /*0x5ccfb3*/
      {
        if ( k != v17 ) /*0x5ccfb7*/
        {
          v20 = *(_DWORD *)(*(_DWORD *)(v18 + 4) + 4 * k); /*0x5ccfbc*/
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v20 + 20))(v20, v8, this->MSVQAnim_field_0x1C + 52); /*0x5ccfc9*/
        }
        v18 = *((_DWORD *)this + 9); /*0x5ccfcc*/
      }
      v12 = HIBYTE(v34); /*0x5ccfd5*/
    }
    if ( !v12 ) /*0x5ccfdb*/
      goto LABEL_24; /*0x5ccfdb*/
    goto LABEL_16; /*0x5ccfdb*/
  }
  return !this->__pad_02C; /*0x5cd0ba*/
}


// ==== 0x005CD0E0  MSVQAnim::Play  this=MSVQAnim  sig=csp ====
void __thiscall MSVQAnim::_vt05(int this, int a2, int *a3)
{
  int v3; // esi
  int *v5; // esi
  int v6; // edx
  int v7; // ecx
  int v8; // ebp
  int v9; // ebx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // [esp+Ch] [ebp-28h]
  int v15; // [esp+10h] [ebp-24h]
  int v16; // [esp+14h] [ebp-20h] BYREF
  int v17; // [esp+18h] [ebp-1Ch]
  int v18; // [esp+1Ch] [ebp-18h]
  int v19; // [esp+20h] [ebp-14h]
  int v20; // [esp+24h] [ebp-10h]
  int v21; // [esp+28h] [ebp-Ch]
  int v22; // [esp+3Ch] [ebp+8h]

  v3 = *(_DWORD *)(this + 28); /*0x5cd0e4*/
  v15 = this; /*0x5cd0ea*/
  if ( !v3 || *(_BYTE *)(this + 45) ) /*0x5cd0f4*/
    return; /*0x5cd0f9*/
  if ( !a3 ) /*0x5cd105*/
  {
LABEL_28:
    (*(void (__thiscall **)(int, int, int, int, _DWORD, int))(*(_DWORD *)a2 + 8))( /*0x5cd217*/
      a2,
      *(_DWORD *)(this + 28) + 36,
      MEMORY[0x887310],
      *(_DWORD *)(this + 28) + 52,
      0,
      1);
    return; /*0x5cd233*/
  }
  v5 = (int *)(v3 + 52); /*0x5cd119*/
  Rect::Set(&v16, 0, 0, 0, 0); /*0x5cd11c*/
  v6 = *v5; /*0x5cd123*/
  v7 = v5[1]; /*0x5cd125*/
  v8 = v5[2]; /*0x5cd128*/
  v9 = v5[3]; /*0x5cd12b*/
  v22 = a3[2]; /*0x5cd133*/
  if ( a3[2] <= 0 ) /*0x5cd137*/
    goto LABEL_23; /*0x5cd137*/
  v14 = a3[3]; /*0x5cd142*/
  if ( v14 <= 0 || v5[2] <= 0 || v5[3] <= 0 ) /*0x5cd15c*/
    goto LABEL_23; /*0x5cd15c*/
  v10 = *a3; /*0x5cd162*/
  if ( v6 < *a3 ) /*0x5cd166*/
  {
    v8 += v6 - v10; /*0x5cd16a*/
    v6 = *a3; /*0x5cd16c*/
  }
  if ( v8 < 1 ) /*0x5cd171*/
    goto LABEL_21; /*0x5cd171*/
  v11 = a3[1]; /*0x5cd173*/
  if ( v7 < v11 ) /*0x5cd17c*/
  {
    v9 += v7 - v11; /*0x5cd180*/
    v7 = v11; /*0x5cd182*/
  }
  if ( v9 < 1 ) /*0x5cd187*/
  {
LABEL_23:
    v20 = v16; /*0x5cd1f9*/
    v21 = v17; /*0x5cd1fd*/
    goto LABEL_24; /*0x5cd1fd*/
  }
  if ( v6 + v8 > v10 + v22 ) /*0x5cd194*/
    v8 = v22 + v10 - v6; /*0x5cd19e*/
  if ( v8 < 1 ) /*0x5cd1a3*/
  {
    v20 = v16; /*0x5cd1ad*/
    v21 = v17; /*0x5cd1b1*/
LABEL_24:
    v12 = v18; /*0x5cd201*/
    v13 = v19; /*0x5cd205*/
    goto LABEL_25; /*0x5cd205*/
  }
  if ( v9 + v7 > v14 + v11 ) /*0x5cd1c6*/
    v9 = v14 + v11 - v7; /*0x5cd1ca*/
  if ( v9 < 1 ) /*0x5cd1cf*/
  {
LABEL_21:
    v20 = v16; /*0x5cd1d1*/
    v21 = v17; /*0x5cd1dd*/
    goto LABEL_24; /*0x5cd1e1*/
  }
  v21 = v7; /*0x5cd1e3*/
  v20 = v6; /*0x5cd1e7*/
  v12 = v8; /*0x5cd1eb*/
  v13 = v9; /*0x5cd1ed*/
LABEL_25:
  if ( v12 > 0 && v13 > 0 ) /*0x5cd211*/
  {
    this = v15; /*0x5cd213*/
    goto LABEL_28; /*0x5cd213*/
  }
}


// ==== 0x005CD240  MSVQAnim::Stop  this=MSVQAnim  sig=csp ====
char __thiscall MSVQAnim::_vt08(int this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  _BYTE v8[16]; // [esp+4h] [ebp-10h] BYREF

  LOBYTE(v3) = *(_BYTE *)(this + 45); /*0x5cd246*/
  if ( (_BYTE)v3 ) /*0x5cd24b*/
  {
    v3 = *(_DWORD *)(this + 28); /*0x5cd24d*/
    if ( v3 ) /*0x5cd252*/
    {
      v4 = *(_DWORD *)(this + 40); /*0x5cd254*/
      if ( v4 ) /*0x5cd259*/
      {
        v5 = **(_DWORD **)(this + 32); /*0x5cd263*/
        v6 = (*(int (__thiscall **)(int, _BYTE *, _DWORD, int))(*(_DWORD *)v4 + 120))(v4, v8, 0, 1); /*0x5cd26c*/
        LOBYTE(v3) = (*(int (__thiscall **)(_DWORD, int, _DWORD, int))(v5 + 8))( /*0x5cd27e*/
                       *(_DWORD *)(this + 32),
                       *(_DWORD *)(this + 28) + 36,
                       *(_DWORD *)(this + 40),
                       v6);
      }
    }
  }
  return v3; /*0x5cd282*/
}


// ==== 0x005CD290  MSVQAnim::GetFrameRect  this=MSVQAnim  sig=csp ====
int *__thiscall MSVQAnim::vt_06_(_DWORD *this, int *a2)
{
  int v3; // eax
  int *v4; // ecx

  if ( (MEMORY[0xABFB98] & 1) == 0 ) /*0x5cd2a0*/
  {
    MEMORY[0xABFBA0] = 0; /*0x5cd2ab*/
    MEMORY[0xABFB98] |= 1u; /*0x5cd2b1*/
    MEMORY[0xABFBA4] = 0; /*0x5cd2b7*/
    MEMORY[0xABFBA8] = 0; /*0x5cd2bd*/
    MEMORY[0xABFBAC] = 0; /*0x5cd2c3*/
    atexit(nullsub_190); /*0x5cd2c9*/
  }
  v3 = this->MSVQAnim_field_0x1C; /*0x5cd2d1*/
  v4 = (int *)(v3 + 52); /*0x5cd2d6*/
  if ( !v3 ) /*0x5cd2d9*/
    v4 = &MEMORY[0xABFBA0]; /*0x5cd2db*/
  *a2 = *v4; /*0x5cd2e9*/
  a2[1] = v4[1]; /*0x5cd2ee*/
  a2[2] = v4[2]; /*0x5cd2f4*/
  a2[3] = v4[3]; /*0x5cd2fb*/
  return a2; /*0x5cd2e8*/
}


// ==== 0x005CD310  nullsub_190  this=-  sig=ida-proto ====
void __cdecl nullsub_190()
{
  ; /*0x5cd310*/
}


// ==== 0x005CD320  MSVQAnim::Stub  this=MSVQAnim  sig=csp ====
char __thiscall MSVQAnim::_vt07(_BYTE *this)
{
  return this->q02D; /*0x5cd323*/
}


// ==== 0x005CD330  MSBitPrintAnim::Construct  this=MSAnim  sig=csp ====
void *__thiscall MSBitPrintAnim::Construct(void *this, const wchar_t **a1, MSAnim *aP2, MPCooperative *aP3)
{
  int MSAnim_field_0x04; // eax
  int v6; // edx

  MSAnim_field_0x04 = aP2->MSAnim_field_0x04; /*0x5cd33a*/
  this->MSAnim_field_0x04 = *(_DWORD *)aP2->__pad_0; /*0x5cd33d*/
  this->MSAnim_field_0x08 = MSAnim_field_0x04; /*0x5cd343*/
  this->__pad_00C = 1; /*0x5cd346*/
  this->MSAnim_field_0x04 = Timer::GetTicks(); /*0x5cd353*/
  *((_DWORD *)this + 6) = 0; /*0x5cd356*/
  *(_DWORD *)this = &vt_MSAnim; /*0x5cd361*/
  WideString::AssignFromPtr((wchar_t **)this + 7, a1); /*0x5cd367*/
  *(MSAnim *)((char *)this + 32) = *aP2; /*0x5cd371*/
  v6 = *(_DWORD *)aP2[1].__pad_0; /*0x5cd380*/
  this->q030 = 0; /*0x5cd383*/
  *(_DWORD *)this = &vt_MSBitPrintAnim; /*0x5cd387*/
  this->q02C = v6; /*0x5cd38d*/
  *((_BYTE *)this + 49) = (_BYTE)aP3; /*0x5cd394*/
  return this; /*0x5cd399*/
}


// ==== 0x005CD3C0  ScoreClass::SetState  this=MSShapeAnim  sig=csp ====
char __thiscall ScoreClass_SetState(_BYTE *this, char a2)
{
  this->__pad_00C = a2; /*0x5cd3c4*/
  return a2; /*0x5cd3c7*/
}


// ==== 0x005CD3D0  MSBitPrintAnim::Update  this=MSBitPrintAnim  sig=csp ====
_DWORD *__thiscall MSBitPrintAnim::_vt06(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ecx

  v3 = this + 8; /*0x5cd3d4*/
  *a2 = *v3; /*0x5cd3dc*/
  a2[1] = v3[1]; /*0x5cd3e1*/
  a2[2] = v3[2]; /*0x5cd3e7*/
  a2[3] = v3[3]; /*0x5cd3ee*/
  return a2; /*0x5cd3ea*/
}


// ==== 0x005CD400  MSBitPrintAnim::Stub  this=MSBitPrintAnim  sig=csp ====
char __thiscall MSBitPrintAnim::_vt07(_BYTE *this)
{
  return this->q030; /*0x5cd403*/
}


// ==== 0x005CD410  MSBitPrintAnim::SetText  this=MSBitPrintAnim  sig=csp ====
BOOL __thiscall MSBitPrintAnim::_vt04(int this, int a2, _DWORD *a3)
{
  int v4; // edx
  int v5; // edi
  wchar_t *v6; // eax
  int v8; // [esp-20h] [ebp-34h]
  int v9; // [esp-1Ch] [ebp-30h]
  int v10; // [esp-18h] [ebp-2Ch]
  int v11; // [esp-14h] [ebp-28h]
  char v12; // [esp-10h] [ebp-24h]
  _DWORD v13[4]; // [esp+4h] [ebp-10h] BYREF

  if ( unk_89C4B8 && aP0 ) /*0x5cd427*/
  {
    v4 = *(_DWORD *)(this + 36); /*0x5cd42c*/
    v5 = *(_DWORD *)(this + 40); /*0x5cd430*/
    v13[0] = *(_DWORD *)(this + 32); /*0x5cd433*/
    v13[1] = v4; /*0x5cd437*/
    v13[2] = v13[0] + v5 - 1; /*0x5cd43f*/
    v13[3] = *(_DWORD *)(this + 44) + v4 - 1; /*0x5cd44f*/
    TextGroup::SetRect((_DWORD *)aP0, v13); /*0x5cd453*/
    v12 = *(_BYTE *)(this + 49) != 0; /*0x5cd46c*/
    v11 = *(_DWORD *)(this + 44); /*0x5cd470*/
    v10 = *(_DWORD *)(this + 40); /*0x5cd474*/
    v9 = *(_DWORD *)(this + 36); /*0x5cd475*/
    v8 = *(_DWORD *)(this + 32); /*0x5cd476*/
    v6 = WideString::GetOrEmpty((wchar_t **)(this + 28)); /*0x5cd47a*/
    Font::Print(aP0, a2, v6, v8, v9, v10, v11, v12, 0, 0); /*0x5cd491*/
  }
  *a3 = *(_DWORD *)(this + 32); /*0x5cd4a1*/
  a3[1] = *(_DWORD *)(this + 36); /*0x5cd4a6*/
  a3[2] = *(_DWORD *)(this + 40); /*0x5cd4ac*/
  a3[3] = *(_DWORD *)(this + 44); /*0x5cd4b4*/
  return *(_BYTE *)(this + 48) == 0; /*0x5cd4bf*/
}


// ==== 0x005CD4D0  MSBitPrintAnim::Draw  this=MSBitPrintAnim  sig=csp ====
char __thiscall MSBitPrintAnim::_vt05(int this, int a2, int *a3)
{
  char result; // al
  int *v5; // eax
  int v6; // edx
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  wchar_t *v10; // eax
  int v11; // [esp-24h] [ebp-38h]
  int v12; // [esp-20h] [ebp-34h]
  int v13; // [esp-1Ch] [ebp-30h]
  int v14; // [esp-18h] [ebp-2Ch]
  char v15; // [esp-14h] [ebp-28h]
  _DWORD v16[4]; // [esp+4h] [ebp-10h] BYREF

  result = unk_89C4B8; /*0x5cd4d0*/
  if ( unk_89C4B8 && aP0 ) /*0x5cd4eb*/
  {
    v5 = a3; /*0x5cd4ed*/
    if ( !a3 ) /*0x5cd4f3*/
      v5 = (int *)(this + 32); /*0x5cd4f5*/
    v6 = *v5; /*0x5cd4f8*/
    v7 = v5[2]; /*0x5cd4fb*/
    v8 = v5[1]; /*0x5cd4ff*/
    v9 = v5[3]; /*0x5cd502*/
    v16[0] = v6; /*0x5cd505*/
    v16[2] = v7 + v6 - 1; /*0x5cd50d*/
    v16[1] = v8; /*0x5cd519*/
    v16[3] = v9 + v8 - 1; /*0x5cd51e*/
    TextGroup::SetRect((_DWORD *)aP0, v16); /*0x5cd522*/
    v15 = *(_BYTE *)(this + 49) != 0; /*0x5cd53b*/
    v14 = *(_DWORD *)(this + 44); /*0x5cd53f*/
    v13 = *(_DWORD *)(this + 40); /*0x5cd543*/
    v12 = *(_DWORD *)(this + 36); /*0x5cd544*/
    v11 = *(_DWORD *)(this + 32); /*0x5cd545*/
    v10 = WideString::GetOrEmpty((wchar_t **)(this + 28)); /*0x5cd549*/
    return Font::Print(aP0, a2, v10, v11, v12, v13, v14, v15, 0, 0); /*0x5cd560*/
  }
  return result; /*0x5cd567*/
}


// ==== 0x005CD570  MSAnim::method_5CD570  this=MSAnim  sig=csp ====
int __thiscall sub_5CD570(
        int this,
        const wchar_t **a2,
        int a3,
        int a4,
        int a5,
        int *a6,
        int a7,
        int a8,
        char a9,
        char a10)
{
  size_t v11; // ebx
  int v12; // ebp
  int v13; // eax
  int v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+3Ch] [ebp+20h]
  int v17; // [esp+40h] [ebp+24h]

  *(_DWORD *)(this + 8) = a4; /*0x5cd581*/
  *(_DWORD *)(this + 4) = a3; /*0x5cd587*/
  *(_BYTE *)(this + 12) = 1; /*0x5cd58a*/
  v11 = 0; /*0x5cd597*/
  *(_DWORD *)(this + 16) = Timer::GetTicks(); /*0x5cd59c*/
  *(_DWORD *)(this + 24) = 0; /*0x5cd59f*/
  *(_DWORD *)this = &vt_MSAnim; /*0x5cd5a5*/
  WideString::AssignFromPtr((wchar_t **)(this + 28), a2); /*0x5cd5ab*/
  *(_DWORD *)(this + 44) = a8; /*0x5cd5c0*/
  *(_BYTE *)(this + 48) = a9; /*0x5cd5c7*/
  *(_DWORD *)(this + 32) = 0; /*0x5cd5ce*/
  *(_DWORD *)(this + 36) = a7; /*0x5cd5d1*/
  *(_DWORD *)(this + 40) = 0; /*0x5cd5d4*/
  *(_DWORD *)(this + 52) = a5; /*0x5cd5d7*/
  *(_BYTE *)(this + 72) = 0; /*0x5cd5da*/
  *(_BYTE *)(this + 73) = a10; /*0x5cd5dd*/
  *(_DWORD *)(this + 76) = 0; /*0x5cd5e0*/
  *(_DWORD *)this = &vt_MSPrintAnim; /*0x5cd5e3*/
  *(_DWORD *)(this + 16) = Timer::GetTicks(); /*0x5cd5f6*/
  *(_DWORD *)(this + 20) = v15; /*0x5cd5f9*/
  *(_DWORD *)(this + 24) = a7; /*0x5cd5ff*/
  sub_5CD690(this, a6); /*0x5cd602*/
  if ( a10 ) /*0x5cd60b*/
  {
    v17 = 0; /*0x5cd611*/
    v16 = *(_DWORD *)(*(_DWORD *)(this + 52) + 4); /*0x5cd618*/
    if ( WideString::GetChar((const wchar_t **)(this + 28), 0) ) /*0x5cd61e*/
    {
      do /*0x5cd658*/
      {
        if ( WideString::GetChar((const wchar_t **)(this + 28), v11) == 10 ) /*0x5cd634*/
          break; /*0x5cd634*/
        v12 = **(_DWORD **)(this + 52); /*0x5cd63c*/
        LOWORD(v13) = WideString::GetChar((const wchar_t **)(this + 28), v11++); /*0x5cd63e*/
        v17 += (*(int (__thiscall **)(_DWORD, int))(v12 + 4))(*(_DWORD *)(this + 52), v13); /*0x5cd651*/
      }
      while ( WideString::GetChar((const wchar_t **)(this + 28), v11) ); /*0x5cd658*/
    }
    *(_DWORD *)(this + 76) = (*(_DWORD *)(this + 64) - v17 - v16) / 2; /*0x5cd676*/
  }
  return this; /*0x5cd67b*/
}


// ==== 0x005CD690  ObjectClass::method_5CD690  this=MSAnim  sig=csp ====
_DWORD *__thiscall sub_5CD690(int this, int *a2)
{
  int *v4; // edi
  wchar_t *v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // ebp
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // edx
  int v17; // eax
  int v18; // eax
  _DWORD *result; // eax
  _DWORD *v20; // edi
  wchar_t *v21; // eax
  int v22; // edx
  _DWORD *v23; // [esp-8h] [ebp-3Ch]
  int v24; // [esp+Ch] [ebp-28h]
  int v25; // [esp+10h] [ebp-24h]
  _DWORD v26[6]; // [esp+14h] [ebp-20h] BYREF
  int v27; // [esp+2Ch] [ebp-8h]
  int v28; // [esp+30h] [ebp-4h]
  int v29; // [esp+38h] [ebp+4h]

  if ( a2[2] <= 0 || a2[3] <= 0 ) /*0x5cd6ac*/
  {
    v20 = (_DWORD *)(this + 56); /*0x5cd81e*/
    v21 = WideString::GetOrEmpty((wchar_t **)(this + 28)); /*0x5cd825*/
    result = sub_5D30C0(*(size_t **)(this + 52), v21, (_DWORD *)(this + 56)); /*0x5cd82e*/
    v22 = *(_DWORD *)(this + 8); /*0x5cd836*/
    *v20 = *(_DWORD *)(this + 4); /*0x5cd839*/
    *(_DWORD *)(this + 60) = v22; /*0x5cd83b*/
  }
  else
  {
    v4 = (int *)(this + 56); /*0x5cd6b2*/
    v23 = (_DWORD *)(this + 56); /*0x5cd6b6*/
    v5 = WideString::GetOrEmpty((wchar_t **)(this + 28)); /*0x5cd6ba*/
    sub_5D30C0(*(size_t **)(this + 52), v5, v23); /*0x5cd6c3*/
    v6 = *(_DWORD *)(this + 52); /*0x5cd6dc*/
    *(_DWORD *)(this + 4) += (a2[2] - *(_DWORD *)(this + 64)) / 2; /*0x5cd6df*/
    v7 = a2[3] % *(_DWORD *)(v6 + 8) / 2 + *(_DWORD *)(this + 8); /*0x5cd706*/
    v8 = *(_DWORD *)(this + 60); /*0x5cd70d*/
    *v4 += *(_DWORD *)(this + 4); /*0x5cd710*/
    *(_DWORD *)(this + 8) = v7; /*0x5cd71a*/
    *(_DWORD *)(this + 60) = v7 + v8; /*0x5cd71d*/
    Rect::Set(v26, 0, 0, 0, 0); /*0x5cd720*/
    v9 = *v4; /*0x5cd727*/
    v10 = *(_DWORD *)(this + 60); /*0x5cd729*/
    v11 = *(_DWORD *)(this + 64); /*0x5cd72c*/
    v27 = v11; /*0x5cd72f*/
    v28 = *(_DWORD *)(this + 68); /*0x5cd736*/
    v29 = a2[2]; /*0x5cd73f*/
    if ( a2[2] <= 0 ) /*0x5cd743*/
      goto LABEL_20; /*0x5cd743*/
    v25 = a2[3]; /*0x5cd74e*/
    if ( v25 <= 0 || *(int *)(this + 64) <= 0 || *(int *)(this + 68) <= 0 ) /*0x5cd768*/
      goto LABEL_20; /*0x5cd768*/
    v12 = *a2; /*0x5cd76a*/
    if ( v9 < *a2 ) /*0x5cd76e*/
    {
      v11 += v9 - v12; /*0x5cd772*/
      v9 = *a2; /*0x5cd774*/
      v27 = v11; /*0x5cd776*/
    }
    if ( v11 < 1 ) /*0x5cd77d*/
      goto LABEL_20; /*0x5cd77d*/
    v13 = a2[1]; /*0x5cd77f*/
    v24 = v13; /*0x5cd784*/
    if ( v10 < v13 ) /*0x5cd788*/
    {
      v14 = v10 - v13 + v28; /*0x5cd790*/
      v10 = v24; /*0x5cd792*/
      v28 = v14; /*0x5cd796*/
    }
    if ( v28 < 1 ) /*0x5cd79f*/
      goto LABEL_20; /*0x5cd79f*/
    if ( v9 + v11 > v12 + v29 ) /*0x5cd7ab*/
      v27 = v29 + v12 - v9; /*0x5cd7b5*/
    if ( v27 < 1 ) /*0x5cd7be*/
      goto LABEL_20; /*0x5cd7be*/
    v15 = v28; /*0x5cd7c8*/
    if ( v28 + v10 > v24 + v25 ) /*0x5cd7d3*/
      v15 = v24 + v25 - v10; /*0x5cd7d7*/
    if ( v15 < 1 ) /*0x5cd7dc*/
    {
LABEL_20:
      v17 = v26[0]; /*0x5cd7e6*/
      v10 = v26[1]; /*0x5cd7ea*/
      v16 = v26[2]; /*0x5cd7ee*/
      v15 = v26[3]; /*0x5cd7f2*/
    }
    else
    {
      v16 = v27; /*0x5cd7de*/
      v17 = v9; /*0x5cd7e2*/
    }
    *v4 = v17; /*0x5cd7f6*/
    v18 = *(_DWORD *)(this + 52); /*0x5cd7f8*/
    *(_DWORD *)(this + 60) = v10; /*0x5cd7fb*/
    *(_DWORD *)(this + 64) = v16; /*0x5cd7fe*/
    *(_DWORD *)(this + 68) = v15; /*0x5cd801*/
    result = (_DWORD *)(*(_DWORD *)(v18 + 4) / 2); /*0x5cd80f*/
    *(_DWORD *)(this + 4) += result; /*0x5cd813*/
  }
  return result; /*0x5cd80e*/
}


// ==== 0x005CD850  WrapWideStringText  this=unknown  sig=csp ====
ObjectClass *__fastcall WrapWideStringText(const wchar_t **ecx0, int *a2, int a3)
{
  ObjectClass *v3; // esi
  int *v4; // ebp
  int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int v9; // eax
  int v10; // ebp
  int v11; // eax
  int v12; // edx
  int v13; // ebp
  int v14; // eax
  int v15; // ebp
  int v16; // eax
  int v17; // edx
  wchar_t **v18; // eax
  wchar_t **v19; // eax
  wchar_t **v20; // eax
  void **v21; // ecx
  wchar_t **v23; // eax
  wchar_t **v24; // eax
  wchar_t **v25; // eax
  ObjectClass *v26; // [esp-8h] [ebp-4Ch]
  ObjectClass *v27; // [esp-8h] [ebp-4Ch]
  size_t v28; // [esp-8h] [ebp-4Ch]
  ObjectClass *v30; // [esp+10h] [ebp-34h] BYREF
  wchar_t *v31; // [esp+14h] [ebp-30h] BYREF
  void *v32; // [esp+18h] [ebp-2Ch] BYREF
  wchar_t *v33; // [esp+1Ch] [ebp-28h] BYREF
  int v34; // [esp+20h] [ebp-24h]
  ObjectClass *v35; // [esp+24h] [ebp-20h]
  int v36; // [esp+28h] [ebp-1Ch]
  ObjectClass *v37; // [esp+2Ch] [ebp-18h] BYREF
  wchar_t *v38; // [esp+30h] [ebp-14h] BYREF
  wchar_t *v39; // [esp+34h] [ebp-10h] BYREF
  wchar_t *v40; // [esp+38h] [ebp-Ch] BYREF
  wchar_t *a1; // [esp+3Ch] [ebp-8h] BYREF
  wchar_t *v42; // [esp+40h] [ebp-4h] BYREF
  int v43; // [esp+48h] [ebp+4h]

  v3 = 0; /*0x5cd855*/
  v4 = a2; /*0x5cd858*/
  v34 = 0; /*0x5cd861*/
  if ( String_Helper(ecx0, 0) ) /*0x5cd865*/
    return 0; /*0x5cd865*/
  if ( !v4 ) /*0x5cd874*/
    return 0; /*0x5cd874*/
  v6 = v4[1]; /*0x5cd87a*/
  if ( a3 <= v6 ) /*0x5cd883*/
    return 0; /*0x5cdb7c*/
  v43 = a3 - v6; /*0x5cd891*/
  if ( WideString::GetChar(ecx0, 0) ) /*0x5cd895*/
  {
    do /*0x5cdac6*/
    {
      v7 = 0; /*0x5cd8a7*/
      v35 = v3; /*0x5cd8ab*/
      if ( v43 <= 0 ) /*0x5cd8af*/
        goto LABEL_12; /*0x5cd8af*/
      while ( WideString::GetChar(ecx0, v3) /*0x5cd8d8*/
           && WideString::GetChar(ecx0, v3) != 10
           && WideString::GetChar(ecx0, v3) != 64 )
      {
        v8 = *v4; /*0x5cd8da*/
        v26 = v3; /*0x5cd8df*/
        v3 = (ObjectClass *)((char *)v3 + 1); /*0x5cd8e2*/
        LOWORD(v9) = WideString::GetChar(ecx0, v26); /*0x5cd8e3*/
        v36 = v8; /*0x5cd8e8*/
        v4 = a2; /*0x5cd8ec*/
        v7 += (*(int (__thiscall **)(int *, int))(v36 + 4))(a2, v9); /*0x5cd8fa*/
        if ( v7 >= v43 ) /*0x5cd900*/
          goto LABEL_12; /*0x5cd900*/
      }
      if ( v7 >= v43 ) /*0x5cd908*/
      {
LABEL_12:
        while ( WideString::GetChar(ecx0, v3) ) /*0x5cd90d*/
        {
          if ( WideString::GetChar(ecx0, v3) == 32 || WideString::GetChar(ecx0, v3) == 10 ) /*0x5cd931*/
            break; /*0x5cd931*/
          if ( v3 == v35 ) /*0x5cd937*/
            goto LABEL_18; /*0x5cd937*/
          v10 = *v4; /*0x5cd939*/
          v3 = (ObjectClass *)((char *)v3 - 1); /*0x5cd93c*/
          LOWORD(v11) = WideString::GetChar(ecx0, v3); /*0x5cd940*/
          v12 = v10; /*0x5cd945*/
          v4 = a2; /*0x5cd947*/
          v7 -= (*(int (__thiscall **)(int *, int))(v12 + 4))(a2, v11); /*0x5cd953*/
        }
      }
      if ( v3 == v35 ) /*0x5cd964*/
      {
LABEL_18:
        if ( v7 >= v43 ) /*0x5cd96e*/
          goto LABEL_25; /*0x5cd96e*/
        while ( WideString::GetChar(ecx0, v3) /*0x5cd9c7*/
             && WideString::GetChar(ecx0, v3) != 32
             && WideString::GetChar(ecx0, v3) != 10
             && WideString::GetChar(ecx0, v3) != 64
             && WideString::GetChar(ecx0, v3) != 45 )
        {
          v13 = *v4; /*0x5cd9cd*/
          v27 = v3; /*0x5cd9d2*/
          v3 = (ObjectClass *)((char *)v3 + 1); /*0x5cd9d5*/
          LOWORD(v14) = WideString::GetChar(ecx0, v27); /*0x5cd9d6*/
          v36 = v13; /*0x5cd9db*/
          v4 = a2; /*0x5cd9df*/
          v7 += (*(int (__thiscall **)(int *, int))(v36 + 4))(a2, v14); /*0x5cd9ed*/
          if ( v7 >= v43 ) /*0x5cd9f3*/
            goto LABEL_25; /*0x5cd9f3*/
        }
        if ( v7 >= v43 ) /*0x5cdae6*/
        {
LABEL_25:
          v15 = *v4; /*0x5cd9f9*/
          LOWORD(v16) = WideString::GetChar(ecx0, v3); /*0x5cd9ff*/
          v17 = v15; /*0x5cda04*/
          v4 = a2; /*0x5cda06*/
          v7 -= (*(int (__thiscall **)(int *, int))(v17 + 4))(a2, v16); /*0x5cda14*/
          WideString::AssignFromPtr(&v33, ecx0); /*0x5cda17*/
          String::TruncateTo((void **)&v33, (size_t)v3); /*0x5cda21*/
          WideString::AssignFromPtr((wchar_t **)&v32, ecx0); /*0x5cda2b*/
          WideString::Erase((const wchar_t **)&v32, 0, (int)v3); /*0x5cda37*/
          v18 = WideString::Assign(&v42, (CampaignScore *)asc_830174); /*0x5cda4f*/
          v19 = WideString::ConcatAlloc((const wchar_t **)&v33, &a1, (ObjectClass *)v18); /*0x5cda5e*/
          v20 = WideString::ConcatAlloc((const wchar_t **)v19, &v40, (ObjectClass *)&v32); /*0x5cda65*/
          WideString::Reassign_Alt((void **)ecx0, (const wchar_t **)v20); /*0x5cda6d*/
          DeleteAndZero::Alt((void **)&v40); /*0x5cda76*/
          DeleteAndZero::Alt((void **)&a1); /*0x5cda7f*/
          DeleteAndZero::Alt((void **)&v42); /*0x5cda88*/
          DeleteAndZero::Alt(&v32); /*0x5cda91*/
          v21 = (void **)&v33; /*0x5cda96*/
        }
        else
        {
          WideString::AssignFromPtr(&v31, ecx0); /*0x5cdaf1*/
          v3 = (ObjectClass *)((char *)v3 + 1); /*0x5cdaf6*/
          String::TruncateTo((void **)&v31, (size_t)v3); /*0x5cdafc*/
          WideString::AssignFromPtr((wchar_t **)&v30, ecx0); /*0x5cdb06*/
          WideString::Erase((const wchar_t **)&v30, 0, (int)v3); /*0x5cdb12*/
          v23 = WideString::Assign(&v39, (CampaignScore *)asc_830174); /*0x5cdb2a*/
          v24 = WideString::ConcatAlloc((const wchar_t **)&v31, &v38, (ObjectClass *)v23); /*0x5cdb39*/
          v25 = WideString::ConcatAlloc((const wchar_t **)v24, (wchar_t **)&v37, (ObjectClass *)&v30); /*0x5cdb40*/
          WideString::Reassign_Alt((void **)ecx0, (const wchar_t **)v25); /*0x5cdb48*/
          DeleteAndZero::Alt((void **)&v37); /*0x5cdb51*/
          DeleteAndZero::Alt((void **)&v38); /*0x5cdb5a*/
          DeleteAndZero::Alt((void **)&v39); /*0x5cdb63*/
          DeleteAndZero::Alt((void **)&v30); /*0x5cdb6c*/
          v21 = (void **)&v31; /*0x5cdb71*/
        }
        DeleteAndZero::Alt(v21); /*0x5cda9a*/
      }
      if ( v7 > v34 ) /*0x5cdaa3*/
        v34 = v7; /*0x5cdaa5*/
      if ( WideString::GetChar(ecx0, v3) ) /*0x5cdaac*/
      {
        v28 = (size_t)v3; /*0x5cdaba*/
        v3 = (ObjectClass *)((char *)v3 + 1); /*0x5cdabd*/
        String_Helper_7B7660(ecx0, 0xAu, v28); /*0x5cdabe*/
      }
    }
    while ( WideString::GetChar(ecx0, v3) ); /*0x5cdac6*/
  }
  return (ObjectClass *)v34; /*0x5cdad9*/
}


// ==== 0x005CDB90  sub_5CDB90  this=-  sig=ida-proto ====
int __fastcall sub_5CDB90(const wchar_t **a1, int a2, int a3)
{
  int v5; // ebx
  ObjectClass *v6; // esi
  int v7; // ebp

  if ( String_Helper(a1, 0) || !a2 || a3 < *(_DWORD *)(a2 + 8) ) /*0x5cdbbb*/
    return 0; /*0x5cdc42*/
  v5 = 0; /*0x5cdbc2*/
  v6 = 0; /*0x5cdbc8*/
  v7 = 0; /*0x5cdbca*/
  while ( WideString::GetChar(a1, v6) ) /*0x5cdbcc*/
  {
    for ( ; WideString::GetChar(a1, v6); v6 = (ObjectClass *)((char *)v6 + 1) ) /*0x5cdbd9*/
    {
      if ( WideString::GetChar(a1, v6) == 10 ) /*0x5cdbef*/
        break; /*0x5cdbef*/
    }
    if ( WideString::GetChar(a1, v6) != 10 ) /*0x5cdc0b*/
    {
      v5 += *(_DWORD *)(a2 + 8); /*0x5cdc15*/
      if ( v5 >= a3 ) /*0x5cdc1a*/
      {
        v5 = 0; /*0x5cdc1d*/
        ++v7; /*0x5cdc23*/
        String_Helper_7B7660(a1, 0xCu, (size_t)v6); /*0x5cdc24*/
      }
      v6 = (ObjectClass *)((char *)v6 + 1); /*0x5cdc29*/
    }
  }
  return v7; /*0x5cdc3b*/
}


// ==== 0x005CDC50  MSPrintAnim::SetText  this=MSPrintAnim  sig=csp ====
bool __thiscall MSPrintAnim::_vt04(int this, int a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  signed int v5; // edi
  signed int v6; // eax
  int v7; // edi
  size_t v9; // ebp
  char v10; // cl
  int v11; // edx
  size_t v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // ebp
  size_t v16; // edi
  int v17; // ebx
  int v18; // eax
  wchar_t Char; // ax
  int v20; // eax
  int v21; // ecx
  char v22; // cl
  int v23; // edx
  int v24; // edi
  int v25; // eax
  unsigned int v26; // eax
  int v27; // edi
  size_t v28; // eax
  size_t i; // edi
  char v30; // [esp+2Fh] [ebp-25h]
  void *v31; // [esp+30h] [ebp-24h] BYREF
  int v32; // [esp+34h] [ebp-20h]
  int v33; // [esp+38h] [ebp-1Ch]
  int v34; // [esp+3Ch] [ebp-18h]
  size_t v35; // [esp+40h] [ebp-14h]
  int v36; // [esp+44h] [ebp-10h]
  int v37; // [esp+4Ch] [ebp-8h]

  v3 = a3; /*0x5cdc54*/
  *a3 = 0; /*0x5cdc5e*/
  a3[1] = 0; /*0x5cdc60*/
  a3[2] = 0; /*0x5cdc63*/
  a3[3] = 0; /*0x5cdc66*/
  v5 = *(_DWORD *)(this + 24); /*0x5cdc6d*/
  if ( *(_DWORD *)(this + 16) == -1 ) /*0x5cdc73*/
  {
LABEL_4:
    if ( v5 ) /*0x5cdc88*/
      return 0; /*0x5cdc88*/
    goto LABEL_5; /*0x5cdc88*/
  }
  v6 = Timer::GetTicks() - *(_DWORD *)(this + 16); /*0x5cdc7d*/
  if ( v6 < v5 ) /*0x5cdc82*/
  {
    v5 -= v6; /*0x5cdc84*/
    goto LABEL_4; /*0x5cdc84*/
  }
LABEL_5:
  if ( *(_BYTE *)(this + 12) != 1 ) /*0x5cdc92*/
    return 0; /*0x5cdc92*/
  v7 = *(_DWORD *)(this + 44); /*0x5cdc98*/
  *(_DWORD *)(this + 16) = Timer::GetTicks(); /*0x5cdca4*/
  *(_DWORD *)(this + 20) = v37; /*0x5cdcab*/
  *(_DWORD *)(this + 24) = v7; /*0x5cdcb1*/
  if ( *(_DWORD *)(this + 36) > (unsigned int)WideString::Length((const wchar_t **)(this + 28)) /*0x5cdcc2*/
    && *(_DWORD *)(this + 40) > 2u )
  {
    return *(_BYTE *)(this + 72) == 0; /*0x5cdcd5*/
  }
  if ( *(_BYTE *)(this + 48) == 1 ) /*0x5cdcdc*/
    (*(void (__thiscall **)(int, int, int, int, _DWORD, int))(*(_DWORD *)a2 + 8))( /*0x5cdcf3*/
      a2,
      this + 56,
      MEMORY[0x887310],
      this + 56,
      0,
      1);
  v9 = *(_DWORD *)(this + 32); /*0x5cdcf9*/
  v10 = *(_BYTE *)(this + 73); /*0x5cdcfc*/
  v11 = *(_DWORD *)(this + 8); /*0x5cdcff*/
  v32 = *(_DWORD *)(this + 4); /*0x5cdd02*/
  v12 = *(_DWORD *)(this + 36); /*0x5cdd06*/
  v30 = v10; /*0x5cdd0b*/
  v33 = v11; /*0x5cdd0f*/
  v35 = v9; /*0x5cdd13*/
  if ( v9 > v12 ) /*0x5cdd17*/
    goto LABEL_35; /*0x5cdd17*/
  while ( 1 ) /*0x5cdd23*/
  {
    LOWORD(v13) = MSPrintAnim::GetCharAt((const wchar_t **)(this + 28), v9); /*0x5cdd23*/
    v14 = v13; /*0x5cdd28*/
    v34 = v13; /*0x5cdd2d*/
    if ( !(_WORD)v13 ) /*0x5cdd31*/
    {
      ++*(_DWORD *)(this + 40); /*0x5cde65*/
      goto LABEL_34; /*0x5cde68*/
    }
    if ( v30 ) /*0x5cdd3d*/
    {
      WideString::AssignFromPtr((wchar_t **)&v31, (const wchar_t **)(this + 28)); /*0x5cdd48*/
      WideString::Erase((const wchar_t **)&v31, 0, v9); /*0x5cdd54*/
      v15 = 0; /*0x5cdd5c*/
      v16 = 0; /*0x5cdd5f*/
      v36 = *(_DWORD *)(*(_DWORD *)(this + 52) + 4); /*0x5cdd64*/
      if ( WideString::GetChar((const wchar_t **)&v31, 0) ) /*0x5cdd6c*/
      {
        do /*0x5cddb0*/
        {
          if ( WideString::GetChar((const wchar_t **)&v31, v16) == 10 ) /*0x5cdd84*/
            break; /*0x5cdd84*/
          v17 = **(_DWORD **)(this + 52); /*0x5cdd8e*/
          LOWORD(v18) = WideString::GetChar((const wchar_t **)&v31, v16); /*0x5cdd90*/
          v15 += (*(int (__thiscall **)(_DWORD, int))(v17 + 4))(*(_DWORD *)(this + 52), v18); /*0x5cdd9c*/
          Char = WideString::GetChar((const wchar_t **)&v31, ++v16); /*0x5cdda4*/
          v14 = v34; /*0x5cdda9*/
        }
        while ( Char ); /*0x5cddb0*/
      }
      v30 = 0; /*0x5cddc1*/
      v20 = (*(_DWORD *)(this + 64) - v15 - v36) / 2; /*0x5cddc9*/
      v21 = v20 + v32; /*0x5cddcb*/
      *(_DWORD *)(this + 76) = v20; /*0x5cddcd*/
      v32 = v21; /*0x5cddd0*/
      DeleteAndZero::Alt(&v31); /*0x5cddd8*/
      v9 = v35; /*0x5cdddd*/
    }
    if ( (_WORD)v14 != 10 ) /*0x5cdde5*/
    {
      if ( !*(_BYTE *)(this + 48) || (v26 = *(_DWORD *)(this + 36) - v9, v26 >= 2) ) /*0x5cde22*/
        v26 = 2; /*0x5cde24*/
      v27 = v32; /*0x5cde2c*/
      (*(void (__thiscall **)(_DWORD, int, int, int, int, unsigned int, int))(**(_DWORD **)(this + 52) + 16))( /*0x5cde41*/
        *(_DWORD *)(this + 52),
        a2,
        v14,
        v32,
        v33,
        v26,
        1);
      v32 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 52) + 4))(*(_DWORD *)(this + 52), v14) + v27; /*0x5cde4f*/
      goto LABEL_25; /*0x5cde4f*/
    }
    v22 = *(_BYTE *)(this + 73); /*0x5cddea*/
    v23 = *(_DWORD *)(this + 52); /*0x5cdded*/
    v24 = *(_DWORD *)(this + 8); /*0x5cddf0*/
    v32 = *(_DWORD *)(this + 4); /*0x5cddf3*/
    v30 = v22; /*0x5cddf7*/
    v25 = *(_DWORD *)(v23 + 8); /*0x5cddfb*/
    v33 += v25; /*0x5cde06*/
    if ( v33 + v25 - v24 > *(_DWORD *)(this + 68) ) /*0x5cde0f*/
      break; /*0x5cde0f*/
LABEL_25:
    v28 = *(_DWORD *)(this + 36); /*0x5cde53*/
    v35 = ++v9; /*0x5cde59*/
    if ( v9 > v28 ) /*0x5cde5d*/
      goto LABEL_34; /*0x5cde5d*/
  }
  for ( i = *(_DWORD *)(this + 32); WideString::GetChar((const wchar_t **)(this + 28), i); ++i ) /*0x5cde73*/
  {
    if ( WideString::GetChar((const wchar_t **)(this + 28), i) == 10 ) /*0x5cde89*/
      break; /*0x5cde89*/
  }
  if ( WideString::GetChar((const wchar_t **)(this + 28), i) == 10 ) /*0x5cdea5*/
    ++i; /*0x5cdea7*/
  *(_DWORD *)(this + 32) = i; /*0x5cdea8*/
LABEL_34:
  v3 = a3; /*0x5cdeab*/
LABEL_35:
  *v3 = *(_DWORD *)(this + 56); /*0x5cdeaf*/
  v3[1] = *(_DWORD *)(this + 60); /*0x5cdeba*/
  v3[2] = *(_DWORD *)(this + 64); /*0x5cdec0*/
  v3[3] = *(_DWORD *)(this + 68); /*0x5cdec6*/
  ++*(_DWORD *)(this + 36); /*0x5cdecd*/
  return 0; /*0x5cdcc9*/
}


// ==== 0x005CDEE0  MSPrintAnim::Draw  this=MSPrintAnim  sig=csp ====
int __thiscall MSPrintAnim::_vt05(int this, int a2, int *a3)
{
  int *v4; // ecx
  int result; // eax
  int v6; // ecx
  char v7; // dl
  int v8; // eax
  const wchar_t *v9; // ebx
  const wchar_t **v10; // edi
  size_t v11; // ebp
  int v12; // ebx
  size_t v13; // edi
  int v14; // ebx
  int v15; // eax
  int v16; // kr00_4
  int v17; // ecx
  int v18; // ebx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // [esp-4h] [ebp-54h]
  int v24; // [esp+0h] [ebp-50h]
  void *v25; // [esp+1Ch] [ebp-34h] BYREF
  int v26; // [esp+20h] [ebp-30h]
  int v27; // [esp+24h] [ebp-2Ch]
  const wchar_t *v28; // [esp+28h] [ebp-28h]
  int v29; // [esp+2Ch] [ebp-24h]
  int v30; // [esp+30h] [ebp-20h]
  int v31; // [esp+34h] [ebp-1Ch]
  _DWORD v32[4]; // [esp+40h] [ebp-10h] BYREF
  char v33; // [esp+58h] [ebp+8h]
  int v34; // [esp+58h] [ebp+8h]

  if ( !a3
    || (v4 = ClipRectIntersection(v32, a3, (int *)(this + 56), 0, 0),
        v30 = *v4,
        v31 = v4[1],
        result = v4[2],
        v6 = v4[3],
        result > 0)
    && v6 > 0 )
  {
    v7 = *(_BYTE *)(this + 73); /*0x5cdf2a*/
    v8 = *(_DWORD *)(this + 8); /*0x5cdf2d*/
    v9 = *(const wchar_t **)(this + 36); /*0x5cdf30*/
    v10 = (const wchar_t **)(this + 28); /*0x5cdf33*/
    v26 = *(_DWORD *)(this + 4); /*0x5cdf36*/
    v33 = v7; /*0x5cdf3c*/
    v27 = v8; /*0x5cdf40*/
    v28 = v9 >= WideString::Length((const wchar_t **)(this + 28))
        ? WideString::Length((const wchar_t **)(this + 28))
        : v9;
    v11 = *(_DWORD *)(this + 32); /*0x5cdf5e*/
    for ( result = (int)v28; v11 < (unsigned int)v28; ++v11 ) /*0x5cdf67*/
    {
      if ( WideString::GetChar(v10, v11) == 10 ) /*0x5cdf79*/
      {
        v33 = *(_BYTE *)(this + 73); /*0x5cdf84*/
        v12 = *(_DWORD *)(*(_DWORD *)(this + 52) + 8); /*0x5cdf88*/
        v26 = *(_DWORD *)(this + 4); /*0x5cdf8f*/
        v27 += v12; /*0x5cdf99*/
        result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 128))(a2); /*0x5cdf9f*/
        if ( v27 + v12 >= result ) /*0x5cdfad*/
          return result; /*0x5cdfad*/
      }
      else
      {
        if ( v33 ) /*0x5cdfbe*/
        {
          WideString::AssignFromPtr((wchar_t **)&v25, v10); /*0x5cdfc9*/
          v13 = 0; /*0x5cdfce*/
          WideString::Erase((const wchar_t **)&v25, 0, v11); /*0x5cdfd6*/
          v34 = 0; /*0x5cdfe3*/
          v29 = *(_DWORD *)(*(_DWORD *)(this + 52) + 4); /*0x5cdfea*/
          if ( WideString::GetChar((const wchar_t **)&v25, 0) ) /*0x5cdfee*/
          {
            do /*0x5ce02e*/
            {
              if ( WideString::GetChar((const wchar_t **)&v25, v13) == 10 ) /*0x5ce006*/
                break; /*0x5ce006*/
              v14 = **(_DWORD **)(this + 52); /*0x5ce00c*/
              LOWORD(v15) = WideString::GetChar((const wchar_t **)&v25, v13++); /*0x5ce012*/
              v34 += (*(int (__thiscall **)(_DWORD, int))(v14 + 4))(*(_DWORD *)(this + 52), v15); /*0x5ce025*/
            }
            while ( WideString::GetChar((const wchar_t **)&v25, v13) ); /*0x5ce02e*/
          }
          v16 = *(_DWORD *)(this + 64) - v34 - v29; /*0x5ce04c*/
          v33 = 0; /*0x5ce04e*/
          v17 = v16 / 2 + v26; /*0x5ce055*/
          *(_DWORD *)(this + 76) = v16 / 2; /*0x5ce057*/
          v26 = v17; /*0x5ce05a*/
          DeleteAndZero::Alt(&v25); /*0x5ce062*/
        }
        v24 = v27; /*0x5ce076*/
        v18 = **(_DWORD **)(this + 52); /*0x5ce077*/
        v10 = (const wchar_t **)(this + 28); /*0x5ce079*/
        v23 = v26; /*0x5ce07c*/
        LOWORD(v19) = WideString::GetChar((const wchar_t **)(this + 28), v11); /*0x5ce080*/
        (*(void (__thiscall **)(_DWORD, int, int, int, int, int, int))(v18 + 16))( /*0x5ce08e*/
          *(_DWORD *)(this + 52),
          a2,
          v19,
          v23,
          v24,
          2,
          1);
        v20 = **(_DWORD **)(this + 52); /*0x5ce097*/
        LOWORD(v21) = WideString::GetChar((const wchar_t **)(this + 28), v11); /*0x5ce099*/
        v22 = (*(int (__thiscall **)(_DWORD, int))(v20 + 4))(*(_DWORD *)(this + 52), v21); /*0x5ce0a2*/
        v26 += v22; /*0x5ce0a5*/
      }
      result = (int)v28; /*0x5ce0a9*/
    }
  }
  return result; /*0x5ce0b6*/
}


// ==== 0x005CE0C0  ObjectClass::method_5CE0C0  this=ObjectClass  sig=csp ====
char __thiscall sub_5CE0C0(int this, int a2, _DWORD *a3)
{
  signed int v4; // edi
  signed int v5; // eax
  int v6; // edi
  int v7; // eax
  int v9; // ebx
  size_t v10; // ebp
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // edx
  size_t v18; // [esp+Ch] [ebp-20h]
  size_t v19; // [esp+Ch] [ebp-20h]
  int v20; // [esp+24h] [ebp-8h]
  int v21; // [esp+30h] [ebp+4h]

  v4 = *(_DWORD *)(this + 24); /*0x5ce0cb*/
  if ( *(_DWORD *)(this + 16) != -1 ) /*0x5ce0d1*/
  {
    v5 = Timer::GetTicks() - *(_DWORD *)(this + 16); /*0x5ce0db*/
    if ( v5 >= v4 ) /*0x5ce0e0*/
      goto LABEL_5; /*0x5ce0e0*/
    v4 -= v5; /*0x5ce0e2*/
  }
  if ( v4 ) /*0x5ce0e8*/
  {
LABEL_24:
    *a3 = 0; /*0x5ce28a*/
    a3[1] = 0; /*0x5ce290*/
    a3[2] = 0; /*0x5ce293*/
    a3[3] = 0; /*0x5ce296*/
    return 0; /*0x5ce296*/
  }
LABEL_5:
  if ( *(_BYTE *)(this + 12) != 1 ) /*0x5ce0f6*/
    goto LABEL_24; /*0x5ce0f6*/
  v6 = *(_DWORD *)(this + 44); /*0x5ce0fc*/
  *(_DWORD *)(this + 16) = Timer::GetTicks(); /*0x5ce108*/
  *(_DWORD *)(this + 20) = v20; /*0x5ce10f*/
  *(_DWORD *)(this + 24) = v6; /*0x5ce112*/
  if ( *(_DWORD *)(this + 32) >= (unsigned int)WideString::Length((const wchar_t **)(this + 28)) ) /*0x5ce122*/
  {
    v7 = Math::RoundToInt(MEMORY[0xA8EB98] * 64.0); /*0x5ce130*/
    sub_406670(aBleep1, v7); /*0x5ce13c*/
    return 1; /*0x5ce149*/
  }
  if ( *(_BYTE *)(this + 48) == 1 && *(int *)(this + 92) > 0 && *(int *)(this + 96) > 0 ) /*0x5ce15f*/
    (*(void (__thiscall **)(int, int, int, int, _DWORD, int))(*(_DWORD *)a2 + 8))( /*0x5ce173*/
      a2,
      this + 84,
      MEMORY[0x887310],
      this + 84,
      0,
      1);
  v9 = *(_DWORD *)(this + 4); /*0x5ce179*/
  if ( *(_BYTE *)(this + 73) ) /*0x5ce176*/
    v9 += *(_DWORD *)(this + 76); /*0x5ce180*/
  v18 = *(_DWORD *)(this + 32); /*0x5ce18b*/
  v10 = v18 + 1; /*0x5ce18c*/
  LOWORD(v11) = WideString::GetChar((const wchar_t **)(this + 28), v18); /*0x5ce18d*/
  v12 = v11; /*0x5ce192*/
  if ( (_WORD)v11 != 10 ) /*0x5ce198*/
  {
    do /*0x5ce1d5*/
    {
      if ( !(_WORD)v12 ) /*0x5ce19d*/
        break; /*0x5ce19d*/
      (*(void (__thiscall **)(_DWORD, int, int, int, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 52) + 16))( /*0x5ce1b5*/
        *(_DWORD *)(this + 52),
        a2,
        v12,
        v9,
        *(_DWORD *)(this + 80),
        *(_DWORD *)(this + 36),
        0);
      v9 += (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 52) + 4))(*(_DWORD *)(this + 52), v12); /*0x5ce1c1*/
      v19 = v10++; /*0x5ce1c5*/
      LOWORD(v13) = WideString::GetChar((const wchar_t **)(this + 28), v19); /*0x5ce1ca*/
      v12 = v13; /*0x5ce1cf*/
    }
    while ( (_WORD)v13 != 10 ); /*0x5ce1d5*/
  }
  v14 = *(_DWORD *)(this + 64); /*0x5ce1e0*/
  v15 = *(_DWORD *)(*(_DWORD *)(this + 52) + 8); /*0x5ce1e3*/
  v21 = *(_DWORD *)(this + 80); /*0x5ce1e6*/
  *a3 = *(_DWORD *)(this + 56); /*0x5ce1ee*/
  a3[1] = v21; /*0x5ce1f4*/
  a3[2] = v14; /*0x5ce1f7*/
  a3[3] = v15; /*0x5ce1fa*/
  if ( *(_DWORD *)(this + 36) == 2 ) /*0x5ce203*/
  {
    *(_DWORD *)(this + 84) = 0; /*0x5ce20b*/
    *(_DWORD *)(this + 88) = 0; /*0x5ce20e*/
    *(_DWORD *)(this + 92) = 0; /*0x5ce211*/
    *(_DWORD *)(this + 96) = 0; /*0x5ce214*/
    *(_DWORD *)(this + 32) = v10; /*0x5ce217*/
    if ( (_WORD)v12 == 10 ) /*0x5ce21a*/
    {
      v16 = Math::RoundToInt(MEMORY[0xA8EB98] * 64.0); /*0x5ce228*/
      sub_406670(aBleep1, v16); /*0x5ce234*/
      *(_DWORD *)(this + 80) += *(_DWORD *)(*(_DWORD *)(this + 52) + 8); /*0x5ce244*/
    }
  }
  else
  {
    *(_DWORD *)(this + 84) = *a3; /*0x5ce24e*/
    *(_DWORD *)(this + 88) = a3[1]; /*0x5ce254*/
    *(_DWORD *)(this + 92) = a3[2]; /*0x5ce25a*/
    *(_DWORD *)(this + 96) = a3[3]; /*0x5ce260*/
  }
  if ( *(_BYTE *)(this + 48) == 1 ) /*0x5ce26c*/
  {
    v17 = *(_DWORD *)(this + 36) + 1; /*0x5ce271*/
    *(_DWORD *)(this + 36) = v17; /*0x5ce274*/
    if ( v17 > 2 ) /*0x5ce27a*/
    {
      *(_DWORD *)(this + 36) = 0; /*0x5ce27c*/
      return 0; /*0x5ce287*/
    }
  }
  return 0; /*0x5ce141*/
}


// ==== 0x005CE2B0  MSPrintAnim::Update  this=MSPrintAnim  sig=csp ====
_DWORD *__thiscall MSPrintAnim::_vt06(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ecx

  v3 = this + 14; /*0x5ce2b4*/
  *a2 = *v3; /*0x5ce2bc*/
  a2[1] = v3[1]; /*0x5ce2c1*/
  a2[2] = v3[2]; /*0x5ce2c7*/
  a2[3] = v3[3]; /*0x5ce2ce*/
  return a2; /*0x5ce2ca*/
}


// ==== 0x005CE300  MSPrintAnim::Clear  this=MSPrintAnim  sig=csp ====
BOOL __thiscall MSPrintAnim::_vt07(int this)
{
  return *(_BYTE *)(this + 72) /*0x5ce322*/
      && *(_DWORD *)(this + 36) > (unsigned int)WideString::Length((const wchar_t **)(this + 28))
      && *(_DWORD *)(this + 40) > 2u;
}


// ==== 0x005CE330  ObjectClass::method_5CE330  this=ObjectClass  sig=csp ====
int __thiscall sub_5CE330(_DWORD **this, const wchar_t **a2)
{
  int v3; // ebp
  size_t v4; // esi
  int v5; // ebp
  int v6; // eax
  int i; // [esp+Ch] [ebp-4h]

  v3 = 0; /*0x5ce33b*/
  v4 = 0; /*0x5ce340*/
  for ( i = 0; WideString::GetChar(a2, v4); i = v3 ) /*0x5ce346*/
  {
    if ( WideString::GetChar(a2, v4) == 10 ) /*0x5ce35c*/
      break; /*0x5ce35c*/
    v5 = *this->attachedTag; /*0x5ce364*/
    LOWORD(v6) = WideString::GetChar(a2, v4); /*0x5ce366*/
    v3 = (*(int (__thiscall **)(_DWORD, int))(v5 + 4))(this->attachedTag, v6) + i; /*0x5ce378*/
    ++v4; /*0x5ce37a*/
  }
  return v3; /*0x5ce38d*/
}


// ==== 0x005CE3A0  ObjectClass::method_5CE3A0  this=ObjectClass  sig=csp ====
int __thiscall sub_5CE3A0(int this, int a2, int *a3)
{
  _DWORD *v4; // ecx
  int result; // eax
  int v6; // ecx
  int v7; // ebp
  int v8; // ebx
  size_t v9; // edi
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // [esp+18h] [ebp-28h]
  int v15; // [esp+18h] [ebp-28h]
  size_t i; // [esp+1Ch] [ebp-24h]
  _DWORD v17[4]; // [esp+30h] [ebp-10h] BYREF
  int v18; // [esp+48h] [ebp+8h]

  if ( !a3 /*0x5ce3e1*/
    || (v4 = ClipRectIntersection(v17, a3, (int *)(this + 56), 0, 0), result = v4[2], v6 = v4[3], result > 0) && v6 > 0 )
  {
    result = *(_DWORD *)(this + 32); /*0x5ce3e7*/
    v7 = *(_DWORD *)(this + 8); /*0x5ce3ea*/
    v8 = *(_DWORD *)(this + 4); /*0x5ce3ed*/
    v9 = 0; /*0x5ce3f0*/
    v18 = v7; /*0x5ce3f4*/
    for ( i = result; v9 < i; ++v9 ) /*0x5ce3fc*/
    {
      if ( WideString::GetChar((const wchar_t **)(this + 28), v9) == 10 ) /*0x5ce40f*/
      {
        v8 = *(_DWORD *)(this + 4); /*0x5ce414*/
        v7 += *(_DWORD *)(*(_DWORD *)(this + 52) + 8); /*0x5ce41e*/
        v14 = *(_DWORD *)(*(_DWORD *)(this + 52) + 8); /*0x5ce420*/
        v18 = v7; /*0x5ce426*/
        result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 128))(a2); /*0x5ce42a*/
        if ( v7 + v14 >= result ) /*0x5ce438*/
          return result; /*0x5ce438*/
      }
      else
      {
        v15 = **(_DWORD **)(this + 52); /*0x5ce44b*/
        LOWORD(v10) = WideString::GetChar((const wchar_t **)(this + 28), v9); /*0x5ce44f*/
        (*(void (__thiscall **)(_DWORD, int, int, int, int, int, int))(v15 + 16))( /*0x5ce461*/
          *(_DWORD *)(this + 52),
          a2,
          v10,
          v8,
          v7,
          2,
          1);
        v11 = **(_DWORD **)(this + 52); /*0x5ce46b*/
        LOWORD(v12) = WideString::GetChar((const wchar_t **)(this + 28), v9); /*0x5ce46d*/
        v13 = (*(int (__thiscall **)(_DWORD, int))(v11 + 4))(*(_DWORD *)(this + 52), v12); /*0x5ce476*/
        v7 = v18; /*0x5ce479*/
        v8 += v13; /*0x5ce47d*/
      }
      result = i; /*0x5ce47f*/
    }
  }
  return result; /*0x5ce48c*/
}


// ==== 0x005CE4A0  MSAnim::UI_Load  this=MSAnim  sig=csp ====
_DWORD *__thiscall sub_5CE4A0(_DWORD *this, const char **a2, int a3, char a4)
{
  _DWORD *v5; // edi
  char **v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // ebp
  int v12; // edx
  int v13; // kr00_4
  int v14; // ecx
  int v15; // eax
  int v17; // [esp+10h] [ebp-94h] BYREF
  void *v18; // [esp+14h] [ebp-90h] BYREF
  _DWORD v19[4]; // [esp+18h] [ebp-8Ch] BYREF
  _DWORD v20[22]; // [esp+28h] [ebp-7Ch] BYREF
  _BYTE v21[12]; // [esp+80h] [ebp-24h] BYREF
  int v22; // [esp+8Ch] [ebp-18h]
  _BYTE v23[16]; // [esp+94h] [ebp-10h] BYREF

  this->MSAnim_field_0x04 = 0; /*0x5ce4b1*/
  this->MSAnim_field_0x08 = 0; /*0x5ce4b4*/
  this->q030 = 0; /*0x5ce4b7*/
  this->q040 = Timer::GetTicks(); /*0x5ce4d4*/
  *(this + 6) = 0; /*0x5ce4d7*/
  *this = &vt_MSAnim; /*0x5ce4da*/
  v5 = this + 11; /*0x5ce4e5*/
  this->q01C = MEMORY[0x887310]; /*0x5ce4e8*/
  this->q020 = a3; /*0x5ce4eb*/
  this->q024 = 0; /*0x5ce4ee*/
  this->q028 = a4; /*0x5ce4f1*/
  *((_BYTE *)this + 41) = 0; /*0x5ce4f4*/
  this->q02C = 0; /*0x5ce4f7*/
  this->q030 = 0; /*0x5ce4f9*/
  this->q034 = 0; /*0x5ce4fc*/
  this->q038 = 0; /*0x5ce4ff*/
  *this = &vt_MSPCXAnim; /*0x5ce505*/
  this->q030 = 1; /*0x5ce50b*/
  if ( String::NotEquals(a2, 0) ) /*0x5ce50f*/
  {
    unknown_libname_73(&v17); /*0x5ce520*/
    String::Tokenize(a2, 0, stru_826598, (void **)&v17); /*0x5ce532*/
    v6 = String::Concat2((const char **)&v17, (char **)&v18, g_Str_File__PCX); /*0x5ce545*/
    CCFileClass::Construct2(v20, v6); /*0x5ce54f*/
    DeleteAndZero(&v18); /*0x5ce558*/
    if ( CCFileClass::Open(v20, 0) ) /*0x5ce562*/
    {
      v7 = DecodeFrameSHP((int)v20, 0, 0, 0); /*0x5ce577*/
      this->q024 = v7; /*0x5ce57e*/
      if ( v7 ) /*0x5ce581*/
      {
        v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*v7 + 120))(v7, v19); /*0x5ce58c*/
        *v5 = *v8; /*0x5ce593*/
        this->q030 = v8[1]; /*0x5ce598*/
        this->q034 = v8[2]; /*0x5ce59e*/
        v9 = this->q01C; /*0x5ce5a4*/
        this->q038 = v8[3]; /*0x5ce5a7*/
        v10 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 120))(v9, v23); /*0x5ce5b4*/
        v11 = this->q038; /*0x5ce5b9*/
        v19[0] = *v10; /*0x5ce5be*/
        v12 = this->q034; /*0x5ce5c2*/
        v19[1] = v10[1]; /*0x5ce5c8*/
        v13 = v10[2] - v12; /*0x5ce5d5*/
        v14 = this->q030; /*0x5ce5df*/
        v15 = v10[3] - v11; /*0x5ce5e2*/
        *v5 += v13 / 2; /*0x5ce5e4*/
        this->q030 = v15 / 2 + v14; /*0x5ce5ed*/
      }
    }
    v20[0] = &vt_CCFileClass; /*0x5ce5f7*/
    v22 = 0; /*0x5ce5ff*/
    Vector::Clear((int)v21); /*0x5ce606*/
    v20[0] = &off_7E1668; /*0x5ce60f*/
    BufferIOFileClass::Dtor(v20); /*0x5ce617*/
    DeleteAndZero((void **)&v17); /*0x5ce620*/
  }
  return this; /*0x5ce627*/
}


// ==== 0x005CE640  MSPCXAnim::Construct  this=MSAnim  sig=csp ====
_DWORD *__thiscall MSPCXAnim::Construct(_DWORD *this, ObjectClass *aP1, MSAnim *aP2, _DWORD *a3, char a5)
{
  _DWORD *v6; // edi
  char **v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  ObjectClass *v10; // ecx
  int v12; // [esp+10h] [ebp-84h] BYREF
  int v13; // [esp+14h] [ebp-80h] BYREF
  _BYTE v14[16]; // [esp+18h] [ebp-7Ch] BYREF
  _DWORD v15[22]; // [esp+28h] [ebp-6Ch] BYREF
  _BYTE v16[12]; // [esp+80h] [ebp-14h] BYREF
  ObjectClass *v17; // [esp+8Ch] [ebp-8h]

  this->MSAnim_field_0x04 = 0; /*0x5ce651*/
  this->MSAnim_field_0x08 = 0; /*0x5ce654*/
  this->q030 = 0; /*0x5ce657*/
  this->q040 = Timer::GetTicks(); /*0x5ce674*/
  *(this + 6) = 0; /*0x5ce677*/
  *this = &vt_MSAnim; /*0x5ce67a*/
  v6 = this + 11; /*0x5ce685*/
  this->q01C = *(_DWORD *)&stru_87C374.__pad_579C[22528]; /*0x5ce688*/
  this->q020 = aP2; /*0x5ce68b*/
  this->q024 = 0; /*0x5ce68e*/
  this->q028 = a5; /*0x5ce691*/
  *((_BYTE *)this + 41) = 0; /*0x5ce694*/
  this->q02C = 0; /*0x5ce697*/
  this->q030 = 0; /*0x5ce699*/
  this->q034 = 0; /*0x5ce69c*/
  this->q038 = 0; /*0x5ce69f*/
  *this = &vt_MSPCXAnim; /*0x5ce6a5*/
  this->q030 = 1; /*0x5ce6ab*/
  if ( String::NotEquals((const char **)aP1, 0) ) /*0x5ce6af*/
  {
    unknown_libname_73(&v12); /*0x5ce6c0*/
    String::Tokenize((const char **)aP1, 0, &stru_826598, (ObjectClass *)&v12); /*0x5ce6d2*/
    v7 = String::Concat2((const char **)&v12, (char **)&v13, g_Str_File__PCX); /*0x5ce6e5*/
    CCFileClass::Construct2(v15, v7); /*0x5ce6ef*/
    DeleteAndZero((int)&v13); /*0x5ce6f8*/
    if ( CCFileClass::Open(v15, 0) ) /*0x5ce702*/
    {
      v8 = DecodeFrameSHP((int)v15, 0, 0, 0); /*0x5ce713*/
      this->q024 = v8; /*0x5ce71a*/
      if ( v8 ) /*0x5ce71d*/
      {
        v9 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*v8 + 120))(v8, v14); /*0x5ce728*/
        *v6 = *(_DWORD *)v9; /*0x5ce72f*/
        *((MSAnim *)this + 4) = *(MSAnim *)(v9 + 4); /*0x5ce734*/
        *v6 = *a3; /*0x5ce74c*/
        v10 = (ObjectClass *)this->q01C; /*0x5ce751*/
        this->q030 = a3[1]; /*0x5ce754*/
        (*(void (__thiscall **)(ObjectClass *, _BYTE *))(*(_DWORD *)v10->__pad_0 + 120))(v10, v14); /*0x5ce75e*/
      }
    }
    v15[0] = &vt_CCFileClass; /*0x5ce768*/
    v17 = 0; /*0x5ce770*/
    Vector::Clear((int)v16); /*0x5ce777*/
    v15[0] = &off_7E1668; /*0x5ce780*/
    BufferIOFileClass::Dtor(v15); /*0x5ce788*/
    DeleteAndZero((int)&v12); /*0x5ce791*/
  }
  return this; /*0x5ce798*/
}


// ==== 0x005CE7D0  MSPCXAnim::Load  this=MSPCXAnim  sig=csp ====
BOOL __thiscall MSPCXAnim::_vt04(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  int v4; // ecx
  int v5; // ebx
  int v6; // eax
  _DWORD *v7; // ebx
  _DWORD *v8; // ebp
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // edi
  int v13; // ebp
  int v14; // eax
  int i; // edi
  int v16; // ecx
  _DWORD v18[4]; // [esp+24h] [ebp-20h] BYREF
  char v19[16]; // [esp+34h] [ebp-10h] BYREF

  if ( !this->q029 ) /*0x5ce7d6*/
  {
    if ( this->MSPCXAnim_field_0x0C ) /*0x5ce7e1*/
    {
      v4 = *(this + 9); /*0x5ce7ec*/
      if ( v4 ) /*0x5ce7f1*/
      {
        v5 = *(_DWORD *)this->__pad_01C; /*0x5ce7fe*/
        v6 = (*(int (__thiscall **)(int, char *, _DWORD, int))(*(_DWORD *)v4 + 120))(v4, v19, 0, 1); /*0x5ce80d*/
        (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD, int))(v5 + 8))(this->__pad_01C, this + 11, *(this + 9), v6); /*0x5ce819*/
        v7 = a2; /*0x5ce81c*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*this + 20))(this, a2, 0); /*0x5ce827*/
        v8 = a3; /*0x5ce82a*/
        v9 = *(this + 11); /*0x5ce82e*/
        v10 = this->MSPCXAnim_field_0x0C; /*0x5ce830*/
        v11 = *(this + 13); /*0x5ce833*/
        v12 = *(this + 14); /*0x5ce836*/
        *a3 = v9; /*0x5ce839*/
        v18[1] = v10; /*0x5ce83c*/
        v18[2] = v11; /*0x5ce840*/
        v8[1] = v10; /*0x5ce844*/
        v18[0] = v9; /*0x5ce847*/
        v18[3] = v12; /*0x5ce84b*/
        a2 = this; /*0x5ce84f*/
        v8[2] = v11; /*0x5ce853*/
        v8[3] = v12; /*0x5ce85b*/
        v13 = (*(int (__thiscall **)(_DWORD, _DWORD **))(*(_DWORD *)this->MSPCXAnim_field_0x08 + 16))(this->MSPCXAnim_field_0x08, &a2); /*0x5ce866*/
        v14 = this->MSPCXAnim_field_0x08; /*0x5ce868*/
        for ( i = 0; i < *(_DWORD *)(v14 + 16); ++i ) /*0x5ce872*/
        {
          if ( i != v13 ) /*0x5ce876*/
          {
            v16 = *(_DWORD *)(*(_DWORD *)(v14 + 4) + 4 * i); /*0x5ce87b*/
            (*(void (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)v16 + 20))(v16, v7, v18); /*0x5ce886*/
          }
          v14 = this->MSPCXAnim_field_0x08; /*0x5ce889*/
        }
      }
      this->q029 = 1; /*0x5ce895*/
    }
    if ( !this->q029 ) /*0x5ce899*/
      return 0; /*0x5ce899*/
  }
  return !*((_BYTE *)this + 40); /*0x5ce8a7*/
}


// ==== 0x005CE8C0  MSPCXAnim::Draw  this=MSPCXAnim  sig=csp ====
char __thiscall MSPCXAnim::_vt05(int this, int *a2, int *a3)
{
  int v3; // esi
  int v4; // eax
  int *v6; // esi
  int v7; // edx
  int v8; // ecx
  int v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // edi
  int v13; // ecx
  int v14; // ebx
  int v15; // eax
  int v17; // [esp+10h] [ebp-28h]
  int v19; // [esp+18h] [ebp-20h] BYREF
  int v20; // [esp+1Ch] [ebp-1Ch]
  int v21; // [esp+20h] [ebp-18h]
  int v22; // [esp+24h] [ebp-14h]
  int v23; // [esp+28h] [ebp-10h] BYREF
  int v24; // [esp+2Ch] [ebp-Ch]
  int v25; // [esp+40h] [ebp+8h]

  v3 = this; /*0x5ce8c5*/
  v4 = *(_DWORD *)(this + 36); /*0x5ce8cc*/
  if ( !v4 ) /*0x5ce8d1*/
    return v4; /*0x5ce8d1*/
  LOBYTE(v4) = *(_BYTE *)(this + 41); /*0x5ce8d7*/
  if ( (_BYTE)v4 ) /*0x5ce8dc*/
    return v4; /*0x5ce8dc*/
  LOBYTE(v4) = *(_BYTE *)(this + 12); /*0x5ce8e2*/
  if ( !(_BYTE)v4 ) /*0x5ce8e7*/
    return v4; /*0x5ce8e7*/
  if ( !a3 ) /*0x5ce8f3*/
  {
LABEL_29:
    v14 = *a2; /*0x5cea03*/
    v15 = (*(int (__thiscall **)(_DWORD, int *, _DWORD, int))(**(_DWORD **)(v3 + 36) + 120))( /*0x5cea17*/
            *(_DWORD *)(v3 + 36),
            &v23,
            0,
            1);
    LOBYTE(v4) = (*(int (__thiscall **)(int *, int, _DWORD, int))(v14 + 8))(a2, v3 + 44, *(_DWORD *)(v3 + 36), v15); /*0x5cea25*/
    return v4; /*0x5cea25*/
  }
  v6 = (int *)(this + 44); /*0x5ce906*/
  Rect::Set(&v19, 0, 0, 0, 0); /*0x5ce909*/
  v7 = *v6; /*0x5ce910*/
  v8 = v6[1]; /*0x5ce912*/
  v9 = v6[2]; /*0x5ce915*/
  v10 = v6[3]; /*0x5ce918*/
  v25 = a3[2]; /*0x5ce920*/
  if ( a3[2] <= 0 ) /*0x5ce924*/
    goto LABEL_24; /*0x5ce924*/
  v17 = a3[3]; /*0x5ce92f*/
  if ( v17 <= 0 || v6[2] <= 0 || v6[3] <= 0 ) /*0x5ce949*/
    goto LABEL_24; /*0x5ce949*/
  v11 = *a3; /*0x5ce94f*/
  if ( v7 < *a3 ) /*0x5ce953*/
  {
    v9 += v7 - v11; /*0x5ce957*/
    v7 = *a3; /*0x5ce959*/
  }
  if ( v9 < 1 ) /*0x5ce95e*/
    goto LABEL_22; /*0x5ce95e*/
  v12 = a3[1]; /*0x5ce960*/
  if ( v8 < v12 ) /*0x5ce969*/
  {
    v10 += v8 - v12; /*0x5ce96d*/
    v8 = v12; /*0x5ce96f*/
  }
  if ( v10 < 1 ) /*0x5ce974*/
  {
LABEL_24:
    v23 = v19; /*0x5ce9e6*/
    v24 = v20; /*0x5ce9ea*/
    goto LABEL_25; /*0x5ce9ea*/
  }
  if ( v7 + v9 > v11 + v25 ) /*0x5ce981*/
    v9 = v25 + v11 - v7; /*0x5ce98b*/
  if ( v9 < 1 ) /*0x5ce990*/
  {
    v23 = v19; /*0x5ce99a*/
    v24 = v20; /*0x5ce99e*/
LABEL_25:
    v4 = v21; /*0x5ce9ee*/
    v13 = v22; /*0x5ce9f2*/
    goto LABEL_26; /*0x5ce9f2*/
  }
  if ( v10 + v8 > v17 + v12 ) /*0x5ce9b3*/
    v10 = v17 + v12 - v8; /*0x5ce9b7*/
  if ( v10 < 1 ) /*0x5ce9bc*/
  {
LABEL_22:
    v23 = v19; /*0x5ce9be*/
    v24 = v20; /*0x5ce9ca*/
    goto LABEL_25; /*0x5ce9ce*/
  }
  v24 = v8; /*0x5ce9d0*/
  v23 = v7; /*0x5ce9d4*/
  v4 = v9; /*0x5ce9d8*/
  v13 = v10; /*0x5ce9da*/
LABEL_26:
  if ( v4 > 0 && v13 > 0 ) /*0x5ce9fd*/
  {
    v3 = this; /*0x5ce9ff*/
    goto LABEL_29; /*0x5ce9ff*/
  }
  return v4; /*0x5cea28*/
}


// ==== 0x005CEA40  MSPCXAnim::SetPalette  this=MSPCXAnim  sig=csp ====
void __thiscall MSPCXAnim::_vt08(int this, int a2)
{
  int v3; // ecx
  int v4; // edi
  int v5; // eax
  _BYTE v6[16]; // [esp+4h] [ebp-10h] BYREF

  v3 = *(_DWORD *)(this + 36); /*0x5cea46*/
  if ( v3 ) /*0x5cea4b*/
  {
    if ( *(_BYTE *)(this + 12) ) /*0x5cea4d*/
    {
      v4 = **(_DWORD **)(this + 28); /*0x5cea5c*/
      v5 = (*(int (__thiscall **)(int, _BYTE *, _DWORD, int))(*(_DWORD *)v3 + 120))(v3, v6, 0, 1); /*0x5cea65*/
      (*(void (__thiscall **)(_DWORD, int, _DWORD, int))(v4 + 8))( /*0x5cea74*/
        *(_DWORD *)(this + 28),
        this + 44,
        *(_DWORD *)(this + 36),
        v5);
    }
  }
}


// ==== 0x005CEA80  MSPCXAnim::GetFrame  this=MSPCXAnim  sig=csp ====
_DWORD *__thiscall MSPCXAnim::_vt06(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ecx

  v3 = this + 11; /*0x5cea84*/
  *a2 = *v3; /*0x5cea8c*/
  a2[1] = v3[1]; /*0x5cea91*/
  a2[2] = v3[2]; /*0x5cea97*/
  a2[3] = v3[3]; /*0x5cea9e*/
  return a2; /*0x5cea9a*/
}


// ==== 0x005CEAB0  MSPCXAnim::Stub  this=MSPCXAnim  sig=csp ====
char __thiscall MSPCXAnim::_vt07(_BYTE *this)
{
  return this->q029; /*0x5ceab3*/
}


// ==== 0x005CEAC0  MSAnim::AddRef  this=MSAnim  sig=csp ====
char __thiscall MSOverlayAnim::_vt1(_BYTE *this, char a2)
{
  this->__pad_00C = a2; /*0x5ceac4*/
  return a2; /*0x5ceac7*/
}


// ==== 0x005CEAD0  MSAnim::GetRemaining  this=MSAnim  sig=csp ====
signed int __thiscall TimerClass_GetRemaining(signed int *this)
{
  signed int result; // eax
  signed int v3; // edi

  result = this->MSAnim_field_0x04; /*0x5cead3*/
  if ( result != -1 ) /*0x5cead9*/
  {
    v3 = *(this + 6); /*0x5ceadc*/
    result = Timer::GetTicks() - this->MSAnim_field_0x04; /*0x5ceaec*/
    if ( result >= v3 ) /*0x5ceaf1*/
    {
      *(this + 6) = 0; /*0x5ceb04*/
      this->MSAnim_field_0x04 = -1; /*0x5ceb07*/
    }
    else
    {
      this->MSAnim_field_0x04 = -1; /*0x5ceaf5*/
      *(this + 6) = v3 - result; /*0x5ceafc*/
    }
  }
  return result; /*0x5ceb00*/
}


// ==== 0x005CEB20  MSAnim::StartIfIdle  this=MSAnim  sig=csp ====
void __thiscall TimerClass_StartIfIdle(_DWORD *this)
{
  if ( this->q040 == -1 ) /*0x5ceb27*/
    this->q040 = Timer::GetTicks(); /*0x5ceb31*/
}


// ==== 0x005CEB40  MSAnim::COMStub_Return0_7  this=MSAnim  sig=csp ====
char AbstractClass::_vt7()
{
  return 0; /*0x5ceb42*/
}


// ==== 0x005CEB50  MSAnim::StubReturnFalse  this=MSAnim  sig=csp ====
void __stdcall MSOverlayAnim::StubReturnFalse(int a1)
{
  ; /*0x5ceb50*/
}


// ==== 0x005CEB60  MSAnim::checkWinningConditions  this=MSAnim  sig=csp ====
MSAnim *__thiscall ScenarioClass::checkWinningConditions(_DWORD *Block, char a2)
{
  *Block = &vt_MSAnim; /*0x5ceb69*/
  if ( (a2 & 1) != 0 ) /*0x5ceb6f*/
    __3_YAXPAX_Z(Block); /*0x5ceb72*/
  return (MSAnim *)Block; /*0x5ceb7c*/
}


// ==== 0x005CEB80  MSShapeAnim::QueryInterface  this=MSShapeAnim  sig=csp ====
MSShapeAnim *__thiscall MSOverlayAnim::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 7); /*0x5ceb83*/
  *Block = &vt_MSShapeAnim; /*0x5ceb86*/
  if ( v3 && *((_BYTE *)Block + 60) ) /*0x5ceb90*/
  {
    __3_YAXPAX_Z(v3); /*0x5ceb98*/
    *(Block + 7) = 0; /*0x5ceba0*/
    *((_BYTE *)Block + 60) = 0; /*0x5ceba7*/
  }
  *Block = &vt_MSAnim; /*0x5cebaf*/
  if ( (a2 & 1) != 0 ) /*0x5cebb7*/
    __3_YAXPAX_Z(Block); /*0x5cebba*/
  return (MSShapeAnim *)Block; /*0x5cebc4*/
}


// ==== 0x005CEBD0  MSFadeAnim::Destruct  this=MSFadeAnim  sig=csp ====
_DWORD *__thiscall MSShapeAnim::Destruct(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 7); /*0x5cebd3*/
  *Block = &vt_MSShapeAnim; /*0x5cebd6*/
  if ( v3 && *((_BYTE *)Block + 60) ) /*0x5cebe0*/
  {
    __3_YAXPAX_Z(v3); /*0x5cebe8*/
    *(Block + 7) = 0; /*0x5cebf0*/
    *((_BYTE *)Block + 60) = 0; /*0x5cebf7*/
  }
  *Block = &vt_MSAnim; /*0x5cebff*/
  if ( (a2 & 1) != 0 ) /*0x5cec07*/
    __3_YAXPAX_Z(Block); /*0x5cec0a*/
  return Block; /*0x5cec14*/
}


// ==== 0x005CEC20  MSOverlayAnim::processCrates  this=MSOverlayAnim  sig=csp ====
MSOverlayAnim *__thiscall ScenarioClass::processCrates(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 7); /*0x5cec23*/
  *Block = &vt_MSShapeAnim; /*0x5cec26*/
  if ( v3 && *((_BYTE *)Block + 60) ) /*0x5cec30*/
  {
    __3_YAXPAX_Z(v3); /*0x5cec38*/
    *(Block + 7) = 0; /*0x5cec40*/
    *((_BYTE *)Block + 60) = 0; /*0x5cec47*/
  }
  *Block = &vt_MSAnim; /*0x5cec4f*/
  if ( (a2 & 1) != 0 ) /*0x5cec57*/
    __3_YAXPAX_Z(Block); /*0x5cec5a*/
  return (MSOverlayAnim *)Block; /*0x5cec64*/
}


// ==== 0x005CEC70  MSBinkAnim::QueryInterface  this=MSBinkAnim  sig=csp ====
MSBinkAnim *__thiscall MSBinkAnim::QueryInterface(BinkMovie **Block, char a2)
{
  BinkMovie *v3; // edi

  v3 = *(Block + 7); /*0x5cec74*/
  *Block = (BinkMovie *)&MSBinkAnim::`vftable'; /*0x5cec77*/
  if ( v3 ) /*0x5cec7f*/
  {
    BinkMovie::Stop((int)v3); /*0x5cec83*/
    __3_YAXPAX_Z(v3); /*0x5cec89*/
  }
  *Block = (BinkMovie *)&vt_MSAnim; /*0x5cec95*/
  if ( (a2 & 1) != 0 ) /*0x5cec9d*/
    __3_YAXPAX_Z(Block); /*0x5ceca0*/
  return (MSBinkAnim *)Block; /*0x5cecaa*/
}


// ==== 0x005CECB0  MSVQAnim::QueryInterface  this=MSVQAnim  sig=csp ====
MSVQAnim *__thiscall MSVQAnim::QueryInterface(ObjectClass **Block, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx
  _DWORD **v4; // ecx
  ObjectClass *v5; // edi

  v3 = (void (__thiscall ***)(_DWORD, int))*(Block + 10); /*0x5cecb3*/
  *Block = (ObjectClass *)&vt_MSVQAnim; /*0x5cecb6*/
  if ( v3 ) /*0x5cecbe*/
    (**v3)(v3, 1); /*0x5cecc4*/
  v4 = (_DWORD **)*(Block + 7); /*0x5cecc6*/
  if ( v4 ) /*0x5ceccc*/
  {
    MovieContext::Cleanup(v4); /*0x5cecce*/
    v5 = *(Block + 7); /*0x5cecd3*/
    if ( v5 ) /*0x5cecd8*/
    {
      BinkMovie::Cleanup(*(Block + 7)); /*0x5cecdc*/
      __3_YAXPAX_Z(v5); /*0x5cece2*/
    }
  }
  *Block = (ObjectClass *)&vt_MSAnim; /*0x5cecee*/
  if ( (a2 & 1) != 0 ) /*0x5cecf7*/
    __3_YAXPAX_Z(Block); /*0x5cecfa*/
  return (MSVQAnim *)Block; /*0x5ced04*/
}


// ==== 0x005CED10  MSBitPrintAnim::QueryInterface  this=MSBitPrintAnim  sig=csp ====
MSBitPrintAnim *__thiscall MSBitPrintAnim::QueryInterface(void **Block, char a2)
{
  *Block = &vt_MSBitPrintAnim; /*0x5ced16*/
  DeleteAndZero::Alt(Block + 7); /*0x5ced1c*/
  *Block = &vt_MSAnim; /*0x5ced25*/
  if ( (a2 & 1) != 0 ) /*0x5ced2d*/
    __3_YAXPAX_Z(Block); /*0x5ced30*/
  return (MSBitPrintAnim *)Block; /*0x5ced3a*/
}


// ==== 0x005CED40  MSPrintAnim::QueryInterface  this=MSPrintAnim  sig=csp ====
MSPrintAnim *__thiscall MSPrintAnim::QueryInterface(void **Block, char a2)
{
  *Block = &vt_MSPrintAnim; /*0x5ced46*/
  DeleteAndZero::Alt(Block + 7); /*0x5ced4c*/
  *Block = &vt_MSAnim; /*0x5ced55*/
  if ( (a2 & 1) != 0 ) /*0x5ced5d*/
    __3_YAXPAX_Z(Block); /*0x5ced60*/
  return (MSPrintAnim *)Block; /*0x5ced6a*/
}


// ==== 0x005CED70  MSPCXAnim::QueryInterface  this=MSPCXAnim  sig=csp ====
MSPCXAnim *__thiscall MSPCXAnim::QueryInterface(_DWORD *Block, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = (void (__thiscall ***)(_DWORD, int))*(Block + 9); /*0x5ced73*/
  *Block = &vt_MSPCXAnim; /*0x5ced76*/
  if ( v3 ) /*0x5ced7e*/
    (**v3)(v3, 1); /*0x5ced84*/
  *Block = &vt_MSAnim; /*0x5ced8a*/
  if ( (a2 & 1) != 0 ) /*0x5ced92*/
    __3_YAXPAX_Z(Block); /*0x5ced95*/
  return (MSPCXAnim *)Block; /*0x5ced9f*/
}


// ==== 0x005CEDB0  MPBattleClass::firstValidMapIndex  this=MPBattleClass  sig=ida-proto ====
int sub_5CEDB0()
{
  MEMORY[0xABFBB0] = 0; /*0x5cedb2*/
  MEMORY[0xABFBB4] = 0; /*0x5cedb7*/
  MEMORY[0xABFBB8] = 0; /*0x5cedbc*/
  MEMORY[0xABFBBC] = 0; /*0x5cedc1*/
  return 0; /*0x5cedc6*/
}


// ==== 0x005CEDD0  DynamicVector::Map_Delete_5CEDD0  this=DynamicVector  sig=csp ====
char *__thiscall sub_5CEDD0(char *this)
{
  void **v2; // ebp

  v2 = (void **)(this + 40); /*0x5cedd8*/
  this->Items = 0; /*0x5ceddb*/
  this->DynamicVector_field_0x8 = 0; /*0x5cede0*/
  this->IsInitialized = 1; /*0x5cede3*/
  this->IsAllocated = 0; /*0x5cede7*/
  *(_DWORD *)this = &DynamicVectorClass<MapStage *>::`vftable'; /*0x5cedea*/
  this->CapacityIncrement = 10; /*0x5cedf0*/
  this->Items = 0; /*0x5cedf7*/
  unknown_libname_73(this + 40); /*0x5cedfa*/
  this->IsInitialized = 0; /*0x5cee09*/
  this->IsAllocated = 0; /*0x5cee0c*/
  this->tail_E = 1; /*0x5cee0f*/
  *(this + 57) = 0; /*0x5cee13*/
  this->__pad_02C = &DynamicVectorClass<MSAnimEntry *>::`vftable'; /*0x5cee16*/
  this->DynamicVector_field_0x10 = 10; /*0x5cee1c*/
  *((_DWORD *)this + 15) = 0; /*0x5cee1f*/
  *((_DWORD *)this + 18) = 0; /*0x5cee22*/
  *((_DWORD *)this + 19) = 0; /*0x5cee25*/
  this->CapacityIncrement = 1; /*0x5cee28*/
  *(this + 81) = 0; /*0x5cee2c*/
  *((_DWORD *)this + 17) = &DynamicVectorClass<MSSfxEntry *>::`vftable'; /*0x5cee2f*/
  *((_DWORD *)this + 22) = 10; /*0x5cee36*/
  *((_DWORD *)this + 21) = 0; /*0x5cee39*/
  (*(void (__thiscall **)(char *))(this->IsInitialized)(this); /*0x5cee3e*/
  DeleteAndZero::Alt2(v2); /*0x5cee43*/
  (*(void (__thiscall **)(char *))(this->__pad_02C + 12))(this + 44); /*0x5cee4c*/
  return this; /*0x5cee51*/
}


// ==== 0x005CEE60  MSEngine::Destructor  this=VectorClass  sig=csp ====
void __thiscall MSEngine::Destructor(int this)
{
  void *v2; // eax
  void *v3; // eax
  void *v4; // eax

  SessionClass::Destruct((_DWORD *)this); /*0x5cee64*/
  v2 = *(void **)(this + 72); /*0x5cee69*/
  *(_DWORD *)(this + 68) = &vt_VectorClass_MSSfxEntry; /*0x5cee70*/
  if ( v2 && *(_BYTE *)(this + 81) ) /*0x5cee79*/
  {
    __3_YAXPAX_Z(v2); /*0x5cee7f*/
    *(_DWORD *)(this + 72) = 0; /*0x5cee87*/
  }
  *(_BYTE *)(this + 81) = 0; /*0x5cee8a*/
  *(_DWORD *)(this + 76) = 0; /*0x5cee8d*/
  v3 = *(void **)(this + 48); /*0x5cee90*/
  *(_DWORD *)(this + 44) = &vt_VectorClass_MSAnimEntry; /*0x5cee93*/
  if ( v3 && *(_BYTE *)(this + 57) ) /*0x5cee9e*/
  {
    __3_YAXPAX_Z(v3); /*0x5ceea4*/
    *(_DWORD *)(this + 48) = 0; /*0x5ceeac*/
  }
  *(_BYTE *)(this + 57) = 0; /*0x5ceeb2*/
  *(_DWORD *)(this + 52) = 0; /*0x5ceeb5*/
  DeleteAndZero((void **)(this + 40)); /*0x5ceeb8*/
  v4 = *(void **)(this + 4); /*0x5ceebd*/
  *(_DWORD *)this = &vt_VectorClass_MapStage; /*0x5ceec0*/
  if ( v4 && *(_BYTE *)(this + 13) ) /*0x5ceeca*/
  {
    __3_YAXPAX_Z(v4); /*0x5ceed0*/
    *(_DWORD *)(this + 4) = 0; /*0x5ceed8*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5ceedb*/
  *(_DWORD *)(this + 8) = 0; /*0x5ceede*/
}


// ==== 0x005CEEF0  SessionClass::LoadMapSelection  this=ScoreScreen  sig=csp ====
char __thiscall SessionClass::LoadMapSelection(char *this, char **a1)
{
  char *v2; // ebp
  char *v3; // esi
  int v4; // edi
  char **v5; // eax
  bool v6; // bl
  char **v7; // eax
  ObjectClass *v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  bool v14; // bl
  bool v15; // bl
  ObjectClass *v16; // esi
  int v17; // eax
  ObjectClass *v18; // esi
  int v19; // eax
  ObjectClass *v20; // esi
  int v21; // eax
  int v22; // eax
  bool v23; // bl
  int v24; // ebp
  char **v25; // eax
  bool v26; // bl
  int v27; // eax
  ObjectClass *v28; // edi
  int v29; // ecx
  char *v30; // esi
  int v31; // eax
  int v32; // eax
  int v33; // edx
  bool v34; // bl
  char **StringByIndex; // eax
  bool v36; // bl
  int v37; // eax
  ReferenceCounted *v38; // edi
  int v39; // ecx
  int v40; // eax
  int v41; // eax
  int v42; // edx
  ScoreScreen *a3; // [esp+18h] [ebp-C4h] BYREF
  ObjectClass *v44; // [esp+1Ch] [ebp-C0h] BYREF
  char *a2; // [esp+20h] [ebp-BCh] BYREF
  char *v46; // [esp+24h] [ebp-B8h] BYREF
  char *v47; // [esp+28h] [ebp-B4h] BYREF
  ObjectClass *v48; // [esp+2Ch] [ebp-B0h] BYREF
  ObjectClass v49; // [esp+30h] [ebp-ACh] BYREF

  v2 = this; /*0x5ceef8*/
  v47 = this; /*0x5cef00*/
  CCFileClass::Construct3((int)&v49.ambientSoundController[1]); /*0x5cef04*/
  v3 = 0; /*0x5cef09*/
  *(_DWORD *)&v49.__pad_0[4] = 0; /*0x5cef0f*/
  *(_DWORD *)&v49.__pad_0[8] = 0; /*0x5cef13*/
  GenericList::Constructor(&v49.__pad_0[12]); /*0x5cef17*/
  *(_DWORD *)&v49.__pad_0[12] = &vt_List_INIClass_INISection; /*0x5cef20*/
  memset(&v49.owningHouseIndex, 0, 13); /*0x5cef28*/
  v49.attachedBomb = 0; /*0x5cef39*/
  v49.ambientSoundController[0] = 0; /*0x5cef3d*/
  *(_DWORD *)v49.__pad_0 = &vt_INIClass; /*0x5cef41*/
  unknown_libname_73(&v46); /*0x5cef49*/
  unknown_libname_73(&v44); /*0x5cef52*/
  SessionClass::Destruct(v2); /*0x5cef59*/
  (*(void (__thiscall **)(int *, char *))(v49.ambientSoundController[1] + 8))( /*0x5cef6b*/
    &v49.ambientSoundController[1],
    aMapselmdIni);
  (*(void (__thiscall **)(int *, int))(v49.ambientSoundController[1] + 28))(&v49.ambientSoundController[1], 1); /*0x5cef78*/
  if ( !FileStraw::Open(&v49, (int)&v49.ambientSoundController[1], 0) ) /*0x5cef85*/
    goto LABEL_17; /*0x5cef85*/
  v4 = 1; /*0x5cef98*/
  while ( 1 ) /*0x5cefa2*/
  {
    String::Assign((char **)&a3, 0); /*0x5cefa2*/
    v5 = FromStringInt(&a2, v4); /*0x5cefb7*/
    v6 = INIClass::ReadString(&v49, a1, v5, (char **)&a3, (int)&v44) == 0; /*0x5cefd4*/
    DeleteAndZero((void **)&a2); /*0x5cefd7*/
    DeleteAndZero((void **)&a3); /*0x5cefe0*/
    if ( v6 ) /*0x5cefe7*/
      break; /*0x5cefe7*/
    v7 = (char **)__2_YAPAXI_Z(0x6Cu); /*0x5cefef*/
    if ( !v7 ) /*0x5ceff9*/
      goto LABEL_17; /*0x5ceff9*/
    v8 = (ObjectClass *)MSChoiceClass::LoadFromINI(v7, &v49, (const char **)&v44); /*0x5cf00c*/
    if ( !v8 ) /*0x5cf010*/
      goto LABEL_17; /*0x5cf010*/
    v9 = *((_DWORD *)v2 + 2); /*0x5cf012*/
    if ( *((_DWORD *)v2 + 4) < v9 /*0x5cf038*/
      || (v2[13] || !v9)
      && (v10 = *((_DWORD *)v2 + 5), v10 > 0)
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v2 + 8))(v2, v9 + v10, 0) )
    {
      v11 = *((_DWORD *)v2 + 4); /*0x5cf03f*/
      v12 = *((_DWORD *)v2 + 1); /*0x5cf042*/
      *((_DWORD *)v2 + 4) = v11 + 1; /*0x5cf048*/
      *(_DWORD *)(v12 + 4 * v11) = v8; /*0x5cf04b*/
    }
    if ( ++v4 > 100 ) /*0x5cf052*/
    {
      v3 = 0; /*0x5cf071*/
      break; /*0x5cf071*/
    }
    v3 = 0; /*0x5cf054*/
  }
  if ( *((_DWORD *)v2 + 4) ) /*0x5cf073*/
  {
    String::Assign(&a2, 0); /*0x5cf0e0*/
    String::Assign((char **)&a3, aAnims); /*0x5cf0ee*/
    v14 = (int)INIClass::ReadString(&v49, a1, (char **)&a3, &a2, (int)&v46) > 0; /*0x5cf119*/
    DeleteAndZero((void **)&a3); /*0x5cf11c*/
    DeleteAndZero((void **)&a2); /*0x5cf125*/
    if ( v14 ) /*0x5cf12c*/
    {
      String::Assign((char **)&a3, 0); /*0x5cf137*/
      String::Assign(&a2, aTextrect); /*0x5cf145*/
      v15 = (int)INIClass::ReadString(&v49, &v46, &a2, (char **)&a3, (int)&v44) > 0; /*0x5cf16d*/
      DeleteAndZero((void **)&a2); /*0x5cf170*/
      DeleteAndZero((void **)&a3); /*0x5cf179*/
      if ( v15 ) /*0x5cf180*/
      {
        unknown_libname_73(&a3); /*0x5cf18a*/
        v16 = (ObjectClass *)String::Tokenize((const char **)&v44, 0, MEMORY[0x817F70], (void **)&a3); /*0x5cf1a7*/
        if ( String::Length((const char **)&a3) ) /*0x5cf1a9*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&a3); /*0x5cf1b6*/
          *((_DWORD *)v2 + 6) = v17; /*0x5cf1bb*/
        }
        v18 = (ObjectClass *)String::Tokenize((const char **)&v44, (int)v16, MEMORY[0x817F70], (void **)&a3); /*0x5cf1d6*/
        if ( String::Length((const char **)&a3) ) /*0x5cf1d8*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&a3); /*0x5cf1e5*/
          *((_DWORD *)v2 + 7) = v19; /*0x5cf1ea*/
        }
        v20 = (ObjectClass *)String::Tokenize((const char **)&v44, (int)v18, MEMORY[0x817F70], (void **)&a3); /*0x5cf205*/
        if ( String::Length((const char **)&a3) ) /*0x5cf207*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&a3); /*0x5cf214*/
          *((_DWORD *)v2 + 8) = v21; /*0x5cf219*/
        }
        String::Tokenize((const char **)&v44, (int)v20, MEMORY[0x817F70], (void **)&a3); /*0x5cf22b*/
        if ( String::Length((const char **)&a3) ) /*0x5cf234*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&a3); /*0x5cf241*/
          *((_DWORD *)v2 + 9) = v22; /*0x5cf246*/
        }
        DeleteAndZero((void **)&a3); /*0x5cf24d*/
      }
      String::Assign((char **)&a3, 0); /*0x5cf259*/
      String::Assign(&a2, MEMORY[0x824254]); /*0x5cf267*/
      v23 = (int)INIClass::ReadString(&v49, &v46, &a2, (char **)&a3, (int)&v44) > 0; /*0x5cf28f*/
      DeleteAndZero((void **)&a2); /*0x5cf292*/
      DeleteAndZero((void **)&a3); /*0x5cf29b*/
      if ( v23 ) /*0x5cf2a2*/
        String::Reassign((char **)v2 + 10, (const char **)&v44); /*0x5cf2ac*/
      v24 = 1; /*0x5cf2b1*/
      do /*0x5cf36a*/
      {
        String::Assign(&a2, 0); /*0x5cf2bc*/
        v25 = FromStringInt((char **)&a3, v24); /*0x5cf2d1*/
        v26 = INIClass::ReadString(&v49, &v46, v25, &a2, (int)&v44) == 0; /*0x5cf2eb*/
        DeleteAndZero((void **)&a3); /*0x5cf2ee*/
        DeleteAndZero((void **)&a2); /*0x5cf2f7*/
        if ( v26 ) /*0x5cf2fe*/
          break; /*0x5cf2fe*/
        v27 = __2_YAPAXI_Z(0x10u); /*0x5cf306*/
        if ( !v27 ) /*0x5cf310*/
          goto LABEL_17; /*0x5cf310*/
        v28 = (ObjectClass *)String::SplitComma(v27, (const char **)&v44); /*0x5cf31e*/
        if ( !v28 ) /*0x5cf322*/
          goto LABEL_17; /*0x5cf322*/
        v29 = *((_DWORD *)v47 + 13); /*0x5cf328*/
        v30 = v47 + 44; /*0x5cf32e*/
        if ( *((_DWORD *)v47 + 15) >= v29 ) /*0x5cf333*/
        {
          if ( !v47[57] && v29 ) /*0x5cf33e*/
            continue; /*0x5cf33e*/
          v31 = *((_DWORD *)v47 + 16); /*0x5cf340*/
          if ( v31 <= 0 /*0x5cf350*/
            || !(*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v30 + 8))(v47 + 44, v29 + v31, 0) )
          {
            continue; /*0x5cf350*/
          }
        }
        v32 = *((_DWORD *)v30 + 4); /*0x5cf357*/
        v33 = *((_DWORD *)v30 + 1); /*0x5cf35a*/
        *((_DWORD *)v30 + 4) = v32 + 1; /*0x5cf360*/
        *(_DWORD *)(v33 + 4 * v32) = v28; /*0x5cf363*/
        ++v24; /*0x5cf366*/
      }
      while ( v24 <= 100 ); /*0x5cf36a*/
      v2 = v47; /*0x5cf3dd*/
      v3 = 0; /*0x5cf3e1*/
    }
    if ( Audio::IsSoundEnabled() ) /*0x5cf3e3*/
    {
      unknown_libname_73(&a3); /*0x5cf3f4*/
      String::Assign(&a2, 0); /*0x5cf3fe*/
      String::Assign(&v47, aSounds); /*0x5cf40c*/
      v34 = (int)INIClass::ReadString(&v49, a1, &v47, &a2, (int)&v46) > 0; /*0x5cf437*/
      DeleteAndZero((void **)&v47); /*0x5cf43a*/
      DeleteAndZero((void **)&a2); /*0x5cf443*/
      if ( v34 ) /*0x5cf44a*/
      {
        a2 = 0; /*0x5cf459*/
        if ( INIClass::FindKey(v49.__pad_0, &v46) > 0 ) /*0x5cf464*/
        {
          do /*0x5cf585*/
          {
            StringByIndex = INIClass::GetStringByIndexEx(&v49, (char **)&v48, &v46, (int)v3); /*0x5cf479*/
            String::Reassign((char **)&a3, (const char **)StringByIndex); /*0x5cf483*/
            DeleteAndZero((void **)&v48); /*0x5cf48c*/
            if ( String::NotEquals((const char **)&a3, 0) ) /*0x5cf497*/
            {
              String::Assign(&v47, 0); /*0x5cf4aa*/
              v36 = (int)INIClass::ReadString(&v49, &v46, (char **)&a3, &v47, (int)&v44) > 0; /*0x5cf4d2*/
              DeleteAndZero((void **)&v47); /*0x5cf4d5*/
              if ( v36 ) /*0x5cf4dc*/
              {
                v37 = __2_YAPAXI_Z(0x10u); /*0x5cf4e4*/
                if ( v37 ) /*0x5cf4ee*/
                  v38 = (ReferenceCounted *)Audio::ParseVolume(v37, (const char **)&a3, (const char **)&v44); /*0x5cf501*/
                else
                  v38 = 0; /*0x5cf505*/
                if ( String::Equals_Alt((const char **)v38, 0) ) /*0x5cf50b*/
                {
                  if ( v38 ) /*0x5cf516*/
                  {
                    DeleteAndZero((void **)v38); /*0x5cf51a*/
                    __3_YAXPAX_Z(v38); /*0x5cf520*/
                  }
                }
                else if ( v38 ) /*0x5cf52c*/
                {
                  v39 = *((_DWORD *)v2 + 19); /*0x5cf52e*/
                  if ( *((_DWORD *)v2 + 21) < v39 /*0x5cf556*/
                    || (v2[81] || !v39)
                    && (v40 = *((_DWORD *)v2 + 22), v40 > 0)
                    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)v2 + 17) + 8))(
                         v2 + 68,
                         v39 + v40,
                         0) )
                  {
                    v41 = *((_DWORD *)v2 + 21); /*0x5cf55d*/
                    v42 = *((_DWORD *)v2 + 18); /*0x5cf560*/
                    *((_DWORD *)v2 + 21) = v41 + 1; /*0x5cf566*/
                    *(_DWORD *)(v42 + 4 * v41) = v38; /*0x5cf569*/
                  }
                }
              }
            }
            v3 = ++a2; /*0x5cf574*/
          }
          while ( (int)v3 < INIClass::FindKey(v49.__pad_0, &v46) ); /*0x5cf585*/
        }
      }
      DeleteAndZero((void **)&a3); /*0x5cf591*/
    }
    DeleteAndZero((void **)&v44); /*0x5cf59a*/
    DeleteAndZero((void **)&v46); /*0x5cf5a3*/
    HashTable::DestroyHashTableINIClass((void **)&v49); /*0x5cf5ac*/
    v49.ambientSoundController[1] = (int)&vt_CCFileClass; /*0x5cf5b8*/
    v49.location[2] = 0; /*0x5cf5c0*/
    Vector::Clear((int)&v49.isInLogic); /*0x5cf5c7*/
    v49.ambientSoundController[1] = (int)&off_7E1668; /*0x5cf5d0*/
    BufferIOFileClass::Dtor(&v49.ambientSoundController[1]); /*0x5cf5d8*/
    return 1; /*0x5cf5e0*/
  }
  else
  {
LABEL_17:
    Debug::Log(); /*0x5cf07d*/
    DeleteAndZero((void **)&v44); /*0x5cf089*/
    DeleteAndZero((void **)&v46); /*0x5cf092*/
    HashTable::DestroyHashTableINIClass((void **)&v49); /*0x5cf09b*/
    v49.ambientSoundController[1] = (int)&vt_CCFileClass; /*0x5cf0a7*/
    v49.location[2] = 0; /*0x5cf0af*/
    Vector::Clear((int)&v49.isInLogic); /*0x5cf0b6*/
    v49.ambientSoundController[1] = (int)&off_7E1668; /*0x5cf0bf*/
    BufferIOFileClass::Dtor(&v49.ambientSoundController[1]); /*0x5cf0c7*/
    return 0; /*0x5cf0cf*/
  }
}


// ==== 0x005CF5F0  SessionClass::Destruct  this=ScoreScreen  sig=csp ====
int __thiscall SessionClass_Destructor(_DWORD *this)
{
  int i; // ebx
  int v3; // eax
  void *v4; // edi
  int j; // ebx
  int v6; // eax
  void *v7; // edi
  int k; // ebx
  int v9; // eax
  void *v10; // edi

  for ( i = 0; i < *(this + 21); ++i ) /*0x5cf5fc*/
  {
    v3 = *(this + 18); /*0x5cf5fe*/
    v4 = *(void **)(v3 + 4 * i); /*0x5cf601*/
    if ( v4 ) /*0x5cf606*/
    {
      DeleteAndZero(*(void ***)(v3 + 4 * i)); /*0x5cf60a*/
      __3_YAXPAX_Z(v4); /*0x5cf610*/
    }
  }
  (*(void (__thiscall **)(_DWORD *))(*(this + 17) + 12))(this + 17); /*0x5cf626*/
  this->ScoreScreen_field_0x18 = 0; /*0x5cf629*/
  this->ScoreScreen_field_0x1C = 0; /*0x5cf630*/
  this->ScoreScreen_field_0x20 = 640; /*0x5cf637*/
  this->ScoreScreen_field_0x24 = 400; /*0x5cf63e*/
  for ( j = 0; j < *(this + 15); ++j ) /*0x5cf64c*/
  {
    v6 = this->__pad_0C0; /*0x5cf64e*/
    v7 = *(void **)(v6 + 4 * j); /*0x5cf651*/
    if ( v7 ) /*0x5cf656*/
    {
      DeleteAndZero(*(void ***)(v6 + 4 * j)); /*0x5cf65a*/
      __3_YAXPAX_Z(v7); /*0x5cf660*/
    }
  }
  (*(void (__thiscall **)(_DWORD *))(*(this + 11) + 12))(this + 11); /*0x5cf676*/
  for ( k = 0; k < this->ScoreScreen_field_0x10; ++k ) /*0x5cf680*/
  {
    v9 = this->ScoreScreen_field_0x04; /*0x5cf682*/
    v10 = *(void **)(v9 + 4 * k); /*0x5cf685*/
    if ( v10 ) /*0x5cf68a*/
    {
      SessionClass::loadSettings(*(_DWORD *)(v9 + 4 * k)); /*0x5cf68e*/
      __3_YAXPAX_Z(v10); /*0x5cf694*/
    }
  }
  return (*(int (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x5cf6ab*/
}


// ==== 0x005CF6B0  StringTable::Find  this=MapSelect  sig=csp ====
int __thiscall StringTable::Find(MapSelect *this, const char **a1)
{
  ObjectClass *v2; // ebx
  int v4; // esi
  int v6; // esi
  void *v7; // [esp+Ch] [ebp-4h] BYREF

  v2 = (ObjectClass *)a1; /*0x5cf6b2*/
  if ( !String::NotEquals(a1, 0) ) /*0x5cf6be*/
    return 0; /*0x5cf6be*/
  v4 = 0; /*0x5cf6ca*/
  if ( *((int *)this + 4) <= 0 ) /*0x5cf6ce*/
    return 0; /*0x5cf728*/
  while ( 1 ) /*0x5cf6d5*/
  {
    String::AssignFromPtr((char **)&v7, (const char **)v2); /*0x5cf6d5*/
    String::ToLower((const char **)&v7); /*0x5cf6de*/
    String::AssignFromPtr((char **)&a1, *(const char ***)(this->Items + 4 * v4)); /*0x5cf6ee*/
    String::ToLower((const char **)&a1); /*0x5cf6f7*/
    if ( String::Compare((const char **)&v7, (const char **)&a1) ) /*0x5cf705*/
      break; /*0x5cf705*/
    DeleteAndZero((void **)&a1); /*0x5cf712*/
    DeleteAndZero(&v7); /*0x5cf71b*/
    if ( ++v4 >= this->Items ) /*0x5cf726*/
      return 0; /*0x5cf726*/
  }
  v6 = *(_DWORD *)(this->Items + 4 * v4); /*0x5cf738*/
  DeleteAndZero((void **)&a1); /*0x5cf73b*/
  DeleteAndZero(&v7); /*0x5cf744*/
  return v6; /*0x5cf728*/
}


// ==== 0x005CF760  CampaignClass::DeleteAndZero  this=MapSelect  sig=csp ====
int __thiscall CampaignClass::DeleteAndZero(MapSelect *this, MSFont *aP1)
{
  ObjectClass *v2; // ebx
  int v4; // esi
  int v6; // esi
  void *v7; // [esp+Ch] [ebp-4h] BYREF

  v2 = (ObjectClass *)aP1; /*0x5cf762*/
  if ( !String::NotEquals((const char **)aP1, 0) ) /*0x5cf76e*/
    return 0; /*0x5cf76e*/
  v4 = 0; /*0x5cf77a*/
  if ( *((int *)this + 4) <= 0 ) /*0x5cf77e*/
    return 0; /*0x5cf7db*/
  while ( 1 ) /*0x5cf785*/
  {
    String::AssignFromPtr((char **)&v7, (const char **)v2); /*0x5cf785*/
    String::ToLower((const char **)&v7); /*0x5cf78e*/
    String::AssignFromPtr((char **)&aP1, (const char **)(*(_DWORD *)(this->Items + 4 * v4) + 4)); /*0x5cf7a1*/
    String::ToLower((const char **)&aP1); /*0x5cf7aa*/
    if ( String::Compare((const char **)&v7, (const char **)&aP1) ) /*0x5cf7b8*/
      break; /*0x5cf7b8*/
    DeleteAndZero((void **)&aP1); /*0x5cf7c5*/
    DeleteAndZero(&v7); /*0x5cf7ce*/
    if ( ++v4 >= this->Items ) /*0x5cf7d9*/
      return 0; /*0x5cf7d9*/
  }
  v6 = *(_DWORD *)(this->Items + 4 * v4); /*0x5cf7eb*/
  DeleteAndZero((void **)&aP1); /*0x5cf7ee*/
  DeleteAndZero(&v7); /*0x5cf7f7*/
  return v6; /*0x5cf7db*/
}


// ==== 0x005CF810  CampaignClass::Check  this=int  sig=csp ====
int __thiscall sub_5CF810(_DWORD *this, unsigned __int16 a2)
{
  if ( *(this + 4) > (int)a2 ) /*0x5cf81e*/
    return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x5cf828*/
  else
    return 0; /*0x5cf820*/
}


// ==== 0x005CF830  ObjectClass::Network_Load  this=int  sig=csp ====
int __thiscall Network_Load(void *this, ObjectClass *aP1)
{
  return (*(int (__thiscall **)(void *, ObjectClass **))(*(_DWORD *)this + 16))(this, &aP1); /*0x5cf83a*/
}


// ==== 0x005CF840  ObjectClass::method_5CF840  this=VOID_PTR  sig=csp ====
const char **__thiscall sub_5CF840(_DWORD *this, MapSelect *aP1)
{
  int v3; // esi
  const char **v4; // ebp
  ObjectClass *v5; // edi
  void *v7; // [esp+10h] [ebp-4h] BYREF

  if ( !Audio::IsSoundEnabled() ) /*0x5cf847*/
    return 0; /*0x5cf847*/
  v3 = 0; /*0x5cf853*/
  if ( (int)*(this + 21) <= 0 ) /*0x5cf857*/
    return 0; /*0x5cf8b5*/
  v4 = (const char **)aP1; /*0x5cf859*/
  while ( 1 ) /*0x5cf864*/
  {
    v5 = *(ObjectClass **)(*(this + 18) + 4 * v3); /*0x5cf864*/
    String::AssignFromPtr((char **)&v7, (const char **)v5); /*0x5cf868*/
    String::ToLower((const char **)&v7); /*0x5cf871*/
    String::AssignFromPtr((char **)&aP1, v4); /*0x5cf87b*/
    String::ToLower((const char **)&aP1); /*0x5cf884*/
    if ( String::Compare((const char **)&v7, (const char **)&aP1) ) /*0x5cf892*/
      break; /*0x5cf892*/
    DeleteAndZero((void **)&aP1); /*0x5cf89f*/
    DeleteAndZero(&v7); /*0x5cf8a8*/
    if ( ++v3 >= *(this + 21) ) /*0x5cf8b3*/
      return 0; /*0x5cf8b3*/
  }
  DeleteAndZero((void **)&aP1); /*0x5cf8bf*/
  DeleteAndZero(&v7); /*0x5cf8c8*/
  return (const char **)v5; /*0x5cf8b5*/
}


// ==== 0x005CF8E0  MSChoiceClass::LoadFromINI  this=VOID_PTR  sig=csp ====
char **__thiscall MSChoiceClass::LoadFromINI(char **this, ObjectClass *arg0, ObjectClass *aP2)
{
  ObjectClass *v4; // ebx
  ObjectClass *v5; // esi
  int v6; // edi
  char **v7; // edi
  char **v8; // esi
  char **v9; // ebp
  char *v10; // eax
  wchar_t *StringCSF; // eax
  bool v12; // bl
  int v13; // eax
  ObjectClass *v14; // ebx
  bool v15; // bl
  ObjectClass *v16; // ebx
  ObjectClass *v17; // ebx
  char **v18; // eax
  char **v19; // eax
  bool v20; // bl
  wchar_t **v21; // eax
  char *eax23; // eax
  ObjectClass *v22; // ebx
  char *v24; // ecx
  int v25; // eax
  char *v26; // eax
  char *v27; // edx
  bool v28; // bl
  int v29; // esi
  int v30; // eax
  int v31; // ebx
  int v32; // esi
  int v33; // eax
  int v34; // eax
  char *v35; // ecx
  int v36; // eax
  char *v37; // eax
  char *v38; // edx
  char **v39; // eax
  bool v40; // bl
  ObjectClass *eax51; // eax
  ObjectClass *v41; // esi
  char *v43; // eax
  int v44; // ecx
  char *v45; // eax
  char *v46; // edx
  bool v48; // [esp+17h] [ebp-29h]
  bool v49; // [esp+17h] [ebp-29h]
  bool v50; // [esp+17h] [ebp-29h]
  bool v51; // [esp+17h] [ebp-29h]
  AbstractClass aP1; // [esp+18h] [ebp-28h] BYREF
  ObjectClass *v53; // [esp+3Ch] [ebp-4h] BYREF

  *(_DWORD *)&aP1.__pad_0[8] = this; /*0x5cf8e9*/
  unknown_libname_73(this); /*0x5cf8ed*/
  v4 = (ObjectClass *)(this + 1); /*0x5cf8f2*/
  unknown_libname_73(this + 1); /*0x5cf8f7*/
  unknown_libname_73(this + 2); /*0x5cf8ff*/
  unknown_libname_73(this + 3); /*0x5cf907*/
  unknown_libname_74(this + 4); /*0x5cf90f*/
  v5 = (ObjectClass *)(this + 6); /*0x5cf914*/
  v6 = 2; /*0x5cf917*/
  do /*0x5cf927*/
  {
    unknown_libname_73(v5); /*0x5cf91e*/
    v5 = (ObjectClass *)((char *)v5 + 4); /*0x5cf923*/
    --v6; /*0x5cf926*/
  }
  while ( v6 ); /*0x5cf927*/
  unknown_libname_73(this + 8); /*0x5cf92c*/
  v7 = this + 9; /*0x5cf931*/
  v8 = this + 15; /*0x5cf93b*/
  v9 = this + 21; /*0x5cf93e*/
  v7[1] = 0; /*0x5cf941*/
  v7[2] = 0; /*0x5cf944*/
  *((_BYTE *)v7 + 12) = 1; /*0x5cf947*/
  *((_BYTE *)v7 + 13) = 0; /*0x5cf94b*/
  *v7 = (char *)&DynamicVectorClass<Point2D>::`vftable'; /*0x5cf94e*/
  v7[5] = (char *)10; /*0x5cf954*/
  v7[4] = 0; /*0x5cf957*/
  v8[1] = 0; /*0x5cf95a*/
  v8[2] = 0; /*0x5cf95d*/
  *((_BYTE *)v8 + 12) = 1; /*0x5cf960*/
  *((_BYTE *)v8 + 13) = 0; /*0x5cf964*/
  *v8 = (char *)&DynamicVectorClass<MSTextEntry *>::`vftable'; /*0x5cf967*/
  v8[5] = (char *)10; /*0x5cf96d*/
  v8[4] = 0; /*0x5cf970*/
  v9[5] = (char *)10; /*0x5cf973*/
  v9[1] = 0; /*0x5cf97a*/
  v9[2] = 0; /*0x5cf97d*/
  *((_BYTE *)v9 + 12) = 1; /*0x5cf980*/
  *((_BYTE *)v9 + 13) = 0; /*0x5cf984*/
  *v9 = (char *)&DynamicVectorClass<MapSelection *>::`vftable'; /*0x5cf987*/
  v9[4] = 0; /*0x5cf98e*/
  unknown_libname_73(&aP1); /*0x5cf991*/
  unknown_libname_74(&aP1.abstractFlags); /*0x5cf99a*/
  unknown_libname_73(&v53); /*0x5cf9a3*/
  String::Reassign(*(char ***)&aP1.__pad_0[8], (AbstractClass *)aP2); /*0x5cf9b1*/
  String::Assign_Alt((void **)v4, 0); /*0x5cf9ba*/
  String::Assign((char **)&aP1.__pad_0[12], 0); /*0x5cf9c5*/
  String::Assign((char **)&aP1.uniqueId, (const char *)&stru_81B1A4.sectionHead[2]); /*0x5cf9d3*/
  v48 = (int)INIClass::ReadString( /*0x5cf9fb*/
               arg0,
               aP2,
               (ObjectClass *)&aP1.uniqueId,
               (ReferenceCounted *)&aP1.__pad_0[12],
               (int)&aP1) > 0;
  DeleteAndZero((void **)&aP1.uniqueId); /*0x5cfa00*/
  DeleteAndZero((void **)&aP1.__pad_0[12]); /*0x5cfa09*/
  if ( v48 ) /*0x5cfa14*/
    String::Reassign((char **)v4, &aP1); /*0x5cfa1d*/
  *(_DWORD *)&aP1.__pad_0[4] = *(_DWORD *)&aP1.__pad_0[8] + 16; /*0x5cfa2b*/
  WideString::Assign_Alt((void **)(*(_DWORD *)&aP1.__pad_0[8] + 16), 0); /*0x5cfa2f*/
  String::Assign((char **)&aP1.__pad_0[12], 0); /*0x5cfa3a*/
  String::Assign((char **)&aP1.uniqueId, stru_81B1A4.__pad_0); /*0x5cfa48*/
  v49 = (int)INIClass::ReadString( /*0x5cfa70*/
               arg0,
               aP2,
               (ObjectClass *)&aP1.uniqueId,
               (ReferenceCounted *)&aP1.__pad_0[12],
               (int)&aP1) > 0;
  DeleteAndZero((void **)&aP1.uniqueId); /*0x5cfa75*/
  DeleteAndZero((void **)&aP1.__pad_0[12]); /*0x5cfa7e*/
  if ( v49 ) /*0x5cfa89*/
  {
    v10 = String::GetOrEmpty((char **)&aP1); /*0x5cfa99*/
    StringCSF = GetStringCSF((wchar_t *)v10, 0, MEMORY[0x8304E0], 482); /*0x5cfaa2*/
    WideString::Assign_Alt(*(void ***)&aP1.__pad_0[4], StringCSF); /*0x5cfaac*/
  }
  *(_DWORD *)&aP1.__pad_0[4] = *(_DWORD *)&aP1.__pad_0[8] + 12; /*0x5cfaba*/
  String::Assign_Alt((void **)(*(_DWORD *)&aP1.__pad_0[8] + 12), 0); /*0x5cfabe*/
  String::Assign((char **)&aP1.__pad_0[12], 0); /*0x5cfac9*/
  String::Assign((char **)&aP1.uniqueId, MEMORY[0x8304D4]); /*0x5cfad7*/
  v50 = (int)INIClass::ReadString( /*0x5cfafb*/
               arg0,
               aP2,
               (ObjectClass *)&aP1.uniqueId,
               (ReferenceCounted *)&aP1.__pad_0[12],
               (int)&aP1) > 0;
  DeleteAndZero((void **)&aP1.uniqueId); /*0x5cfb00*/
  DeleteAndZero((void **)&aP1.__pad_0[12]); /*0x5cfb09*/
  if ( v50 ) /*0x5cfb14*/
    String::Reassign(*(char ***)&aP1.__pad_0[4], &aP1); /*0x5cfb1f*/
  *(_DWORD *)&aP1.__pad_0[4] = *(_DWORD *)&aP1.__pad_0[8] + 8; /*0x5cfb2d*/
  String::Assign_Alt((void **)(*(_DWORD *)&aP1.__pad_0[8] + 8), 0); /*0x5cfb31*/
  String::Assign((char **)&aP1.__pad_0[12], 0); /*0x5cfb3c*/
  String::Assign((char **)&aP1.uniqueId, MEMORY[0x8304CC]); /*0x5cfb4a*/
  v12 = (int)INIClass::ReadString( /*0x5cfb6e*/
               arg0,
               aP2,
               (ObjectClass *)&aP1.uniqueId,
               (ReferenceCounted *)&aP1.__pad_0[12],
               (int)&aP1) > 0;
  DeleteAndZero((void **)&aP1.uniqueId); /*0x5cfb71*/
  DeleteAndZero((void **)&aP1.__pad_0[12]); /*0x5cfb7a*/
  if ( v12 ) /*0x5cfb81*/
    String::Reassign(*(char ***)&aP1.__pad_0[4], &aP1); /*0x5cfb8c*/
  v13 = *(_DWORD *)&aP1.__pad_0[8]; /*0x5cfb91*/
  aP1.uniqueId = 2; /*0x5cfb95*/
  *(_DWORD *)(*(_DWORD *)&aP1.__pad_0[8] + 20) = 0; /*0x5cfb9d*/
  v14 = (ObjectClass *)(v13 + 24); /*0x5cfba4*/
  do /*0x5cfbbc*/
  {
    String::Assign_Alt((void **)v14, 0); /*0x5cfbab*/
    v14 = (ObjectClass *)((char *)v14 + 4); /*0x5cfbb4*/
    --aP1.uniqueId; /*0x5cfbb8*/
  }
  while ( aP1.uniqueId ); /*0x5cfbbc*/
  String::Assign((char **)&aP1.__pad_0[12], 0); /*0x5cfbc4*/
  String::Assign((char **)&aP1.uniqueId, MEMORY[0x8304C0]); /*0x5cfbd2*/
  v15 = (int)INIClass::ReadString( /*0x5cfbfa*/
               arg0,
               aP2,
               (ObjectClass *)&aP1.uniqueId,
               (ReferenceCounted *)&aP1.__pad_0[12],
               (int)&aP1) > 0;
  DeleteAndZero((void **)&aP1.uniqueId); /*0x5cfbfd*/
  DeleteAndZero((void **)&aP1.__pad_0[12]); /*0x5cfc06*/
  if ( v15 ) /*0x5cfc0d*/
  {
    *(_DWORD *)&aP1.__pad_0[4] = 0; /*0x5cfc17*/
    unknown_libname_73(&aP1.__pad_0[12]); /*0x5cfc1f*/
    v16 = (ObjectClass *)String::Tokenize((const char **)&aP1, 0, &MEMORY[0x817F70], (ObjectClass *)&aP1.__pad_0[12]); /*0x5cfc3d*/
    if ( String::Length((const char **)&aP1.__pad_0[12]) ) /*0x5cfc3f*/
    {
      aP1.uniqueId = *(_DWORD *)&aP1.__pad_0[8] + 24; /*0x5cfc4f*/
      do /*0x5cfc96*/
      {
        if ( *(int *)&aP1.__pad_0[4] >= 2 ) /*0x5cfc58*/
          break; /*0x5cfc58*/
        String::Reassign((char **)aP1.uniqueId, (AbstractClass *)&aP1.__pad_0[12]); /*0x5cfc63*/
        v16 = (ObjectClass *)String::Tokenize( /*0x5cfc80*/
                               (const char **)&aP1,
                               (int)v16,
                               &MEMORY[0x817F70],
                               (ObjectClass *)&aP1.__pad_0[12]);
        ++*(_DWORD *)&aP1.__pad_0[4]; /*0x5cfc8e*/
        aP1.uniqueId += 4; /*0x5cfc92*/
      }
      while ( String::Length((const char **)&aP1.__pad_0[12]) ); /*0x5cfc96*/
    }
    *(_DWORD *)(*(_DWORD *)&aP1.__pad_0[8] + 20) = *(_DWORD *)&aP1.__pad_0[4]; /*0x5cfca7*/
    DeleteAndZero((void **)&aP1.__pad_0[12]); /*0x5cfcae*/
  }
  v17 = (ObjectClass *)(*(_DWORD *)&aP1.__pad_0[8] + 32); /*0x5cfcb9*/
  String::Assign_Alt((void **)(*(_DWORD *)&aP1.__pad_0[8] + 32), 0); /*0x5cfcbe*/
  String::Assign((char **)&aP1.__pad_0[12], 0); /*0x5cfcc9*/
  String::Assign((char **)&aP1.uniqueId, MEMORY[0x8304B4]); /*0x5cfcd7*/
  v51 = (int)INIClass::ReadString( /*0x5cfcff*/
               arg0,
               aP2,
               (ObjectClass *)&aP1.uniqueId,
               (ReferenceCounted *)&aP1.__pad_0[12],
               (int)&aP1) > 0;
  DeleteAndZero((void **)&aP1.uniqueId); /*0x5cfd04*/
  DeleteAndZero((void **)&aP1.__pad_0[12]); /*0x5cfd0d*/
  if ( v51 ) /*0x5cfd18*/
    String::Reassign((char **)v17, &aP1); /*0x5cfd21*/
  *(_DWORD *)&aP1.__pad_0[4] = 1; /*0x5cfd26*/
  do /*0x5cfe19*/
  {
    String::Assign((char **)&aP1.uniqueId, 0); /*0x5cfd34*/
    v18 = FromStringInt((char **)&aP1.nextArrayIndex, *(int *)&aP1.__pad_0[4]); /*0x5cfd4b*/
    v19 = ProcessStringAndCopy((char **)&aP1.__pad_0[12], stru_8304AC, v18); /*0x5cfd5a*/
    v20 = (int)INIClass::ReadString(arg0, aP2, (ObjectClass *)v19, (ReferenceCounted *)&aP1.uniqueId, (int)&aP1) > 0; /*0x5cfd74*/
    DeleteAndZero((void **)&aP1.__pad_0[12]); /*0x5cfd77*/
    DeleteAndZero((void **)&aP1.nextArrayIndex); /*0x5cfd80*/
    DeleteAndZero((void **)&aP1.uniqueId); /*0x5cfd89*/
    if ( v20 ) /*0x5cfd90*/
    {
      v21 = CharStringToWide((wchar_t **)&aP1.referenceCount, (const char **)&aP1); /*0x5cfd9a*/
      WideString::Reassign_Alt((void **)&aP1.abstractFlags, (const wchar_t **)v21); /*0x5cfda4*/
      DeleteAndZero::Alt((void **)&aP1.referenceCount); /*0x5cfdad*/
      eax23 = (char *)__2_YAPAXI_Z(0x10u); /*0x5cfdb4*/
      if ( eax23 ) /*0x5cfdbe*/
      {
        v22 = (ObjectClass *)MSChoiceClass::DeleteAndZero(eax23, (ObjectClass *)&aP1.abstractFlags); /*0x5cfdcc*/
        if ( v22 ) /*0x5cfdd0*/
        {
          v24 = v8[2]; /*0x5cfdd2*/
          if ( (int)v8[4] < (int)v24 /*0x5cfdf7*/
            || (*((_BYTE *)v8 + 13) || !v24)
            && (v25 = (int)v8[5], v25 > 0)
            && (*((unsigned __int8 (__thiscall **)(char **, char *, _DWORD))*v8 + 2))(v8, &v24[v25], 0) )
          {
            v26 = v8[4]; /*0x5cfdfe*/
            v27 = v8[1]; /*0x5cfe01*/
            v8[4] = v26 + 1; /*0x5cfe07*/
            *(_DWORD *)&v27[4 * (_DWORD)v26] = v22; /*0x5cfe0a*/
          }
        }
      }
    }
    ++*(_DWORD *)&aP1.__pad_0[4]; /*0x5cfe15*/
  }
  while ( *(int *)&aP1.__pad_0[4] < 8 ); /*0x5cfe19*/
  String::Assign((char **)&aP1.__pad_0[12], 0); /*0x5cfe25*/
  String::Assign((char **)&aP1.uniqueId, aTargets); /*0x5cfe33*/
  v28 = (int)INIClass::ReadString( /*0x5cfe5b*/
               arg0,
               aP2,
               (ObjectClass *)&aP1.uniqueId,
               (ReferenceCounted *)&aP1.__pad_0[12],
               (int)&aP1) > 0;
  DeleteAndZero((void **)&aP1.uniqueId); /*0x5cfe5e*/
  DeleteAndZero((void **)&aP1.__pad_0[12]); /*0x5cfe67*/
  if ( v28 ) /*0x5cfe6e*/
  {
    v29 = 0; /*0x5cfe78*/
    unknown_libname_73(&aP1.__pad_0[4]); /*0x5cfe7a*/
    aP1.uniqueId = String::Tokenize((const char **)&aP1, 0, &MEMORY[0x817F70], (ObjectClass *)&aP1.__pad_0[4]); /*0x5cfe97*/
    if ( String::Length((const char **)&aP1.__pad_0[4]) ) /*0x5cfe9b*/
    {
      __1_Timevec_std__QAE_XZ((std::_Timevec *)&aP1.__pad_0[4]); /*0x5cfea8*/
      v29 = v30; /*0x5cfead*/
    }
    if ( v29 > 0 ) /*0x5cfeb1*/
    {
      *(_DWORD *)&aP1.__pad_0[12] = v29; /*0x5cfeb7*/
      do /*0x5cff72*/
      {
        v31 = -1; /*0x5cfec4*/
        aP1.referenceCount = -1; /*0x5cfed1*/
        v32 = String::Tokenize((const char **)&aP1, aP1.uniqueId, &MEMORY[0x817F70], (ObjectClass *)&aP1.__pad_0[4]); /*0x5cfede*/
        if ( String::Length((const char **)&aP1.__pad_0[4]) ) /*0x5cfee0*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&aP1.__pad_0[4]); /*0x5cfeed*/
          aP1.referenceCount = v33; /*0x5cfef2*/
        }
        aP1.uniqueId = String::Tokenize((const char **)&aP1, v32, &MEMORY[0x817F70], (ObjectClass *)&aP1.__pad_0[4]); /*0x5cff0e*/
        if ( String::Length((const char **)&aP1.__pad_0[4]) ) /*0x5cff12*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&aP1.__pad_0[4]); /*0x5cff1f*/
          v31 = v34; /*0x5cff24*/
        }
        v35 = v7[2]; /*0x5cff26*/
        if ( (int)v7[4] < (int)v35 /*0x5cff4b*/
          || (*((_BYTE *)v7 + 13) || !v35)
          && (v36 = (int)v7[5], v36 > 0)
          && (*((unsigned __int8 (__thiscall **)(char **, char *, _DWORD))*v7 + 2))(v7, &v35[v36], 0) )
        {
          v37 = v7[4]; /*0x5cff52*/
          v38 = v7[1]; /*0x5cff55*/
          v7[4] = v37 + 1; /*0x5cff5b*/
          *(_DWORD *)&v38[8 * (_DWORD)v37] = aP1.referenceCount; /*0x5cff62*/
          *(_DWORD *)&v38[8 * (_DWORD)v37 + 4] = v31; /*0x5cff65*/
        }
        --*(_DWORD *)&aP1.__pad_0[12]; /*0x5cff6e*/
      }
      while ( *(_DWORD *)&aP1.__pad_0[12] ); /*0x5cff72*/
    }
    DeleteAndZero((void **)&aP1.__pad_0[4]); /*0x5cff7c*/
  }
  *(_DWORD *)&aP1.__pad_0[4] = 0; /*0x5cff81*/
  do /*0x5d0040*/
  {
    String::Assign((char **)&aP1.uniqueId, 0); /*0x5cff8f*/
    v39 = FromStringInt((char **)&aP1.referenceCount, *(int *)&aP1.__pad_0[4]); /*0x5cffa6*/
    v40 = (int)INIClass::ReadString(arg0, aP2, (ObjectClass *)v39, (ReferenceCounted *)&aP1.uniqueId, (int)&aP1) > 0; /*0x5cffc0*/
    DeleteAndZero((void **)&aP1.referenceCount); /*0x5cffc3*/
    DeleteAndZero((void **)&aP1.uniqueId); /*0x5cffcc*/
    if ( v40 ) /*0x5cffd3*/
    {
      eax51 = (ObjectClass *)__2_YAPAXI_Z(0xCu); /*0x5cffd7*/
      v41 = eax51; /*0x5cffdc*/
      if ( eax51 ) /*0x5cffe3*/
      {
        String::AssignFromPtr((char **)eax51, (const char **)&aP1); /*0x5cffec*/
        v41->__pad_0[4] = aP1.__pad_0[4]; /*0x5cfff5*/
        v43 = v9[2]; /*0x5cfff8*/
        if ( (int)v9[4] < (int)v43 /*0x5d001c*/
          || (*((_BYTE *)v9 + 13) || !v43)
          && (v44 = (int)v9[5], v44 > 0)
          && (*((unsigned __int8 (__thiscall **)(char **, char *, _DWORD))*v9 + 2))(v9, &v43[v44], 0) )
        {
          v45 = v9[4]; /*0x5d0023*/
          v46 = v9[1]; /*0x5d0026*/
          v9[4] = v45 + 1; /*0x5d002c*/
          *(_DWORD *)&v46[4 * (_DWORD)v45] = v41; /*0x5d002f*/
        }
      }
    }
    ++*(_DWORD *)&aP1.__pad_0[4]; /*0x5d003c*/
  }
  while ( *(int *)&aP1.__pad_0[4] < 256 ); /*0x5d0040*/
  DeleteAndZero((void **)&v53); /*0x5d004a*/
  DeleteAndZero::Alt((void **)&aP1.abstractFlags); /*0x5d0053*/
  DeleteAndZero((void **)&aP1); /*0x5d005c*/
  return *(char ***)&aP1.__pad_0[8]; /*0x5d0065*/
}

