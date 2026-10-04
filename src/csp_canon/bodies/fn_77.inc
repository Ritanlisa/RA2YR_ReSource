// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00770430  System_Init_770430  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_770430::System_Init_770430() {

  AudioSample *v2; // ecx
  int *v3; // eax
  int *v4; // esi
  int *v5; // esi
  int v6; // ebp
  void *v7; // eax
  ObjectClass *v8; // esi
  int v9; // ebx
  int *v10; // edi
  int v11; // [esp+10h] [ebp-8h]

  if ( *(int *)this->isUseless > 0 ) /*0x770440*/
  {
    StopThemeClass(1); /*0x770444*/
    (*(void (**)(int *))(this->targetLaserTimer[1] + 12))(&this->targetLaserTimer[1]); /*0x770455*/
  }
  this->secondaryFacing[3] = TimerGetTicks(); /*0x770469*/
  this->secondaryFacing[4] = v11; /*0x77046f*/
  this->secondaryFacing[5] = 0; /*0x770472*/
  v2 = (AudioSample *)this->turretRecoil[0]; /*0x770475*/
  if ( v2 ) /*0x77047d*/
    AudioSample::Destructor(v2); /*0x77047f*/
  v3 = (int *)this->targetLaserTimer[2]; /*0x770484*/
  this->targetLaserTimer[1] = (int)&vt_VectorClass; /*0x77048a*/
  if ( v3 && this->isSinking[0] ) /*0x770498*/
  {
    v4 = v3 - 1; /*0x7704a7*/
    Array::ForEachReverse(v3, 4, *(v3 - 1), (int (*)(int))DeleteAndZero); /*0x7704b3*/
    __3_YAXPAX_Z(v4); /*0x7704b9*/
    this->targetLaserTimer[2] = 0; /*0x7704c1*/
  }
  this->isSinking[0] = 0; /*0x7704c8*/
  *(unsigned int *)this->unknown_short_3C8 = 0; /*0x7704ce*/
  v5 = &this->secondaryFacing[3]; /*0x7704d4*/
  v6 = 2; /*0x7704da*/
  do /*0x770507*/
  {
    v7 = (void *)*(v5 - 5); /*0x7704df*/
    v5 -= 6; /*0x7704e2*/
    *v5 = (int)&vt_VectorClass; /*0x7704e7*/
    if ( v7 && *((unsigned char *)v5 + 13) ) /*0x7704ef*/
    {
      __3_YAXPAX_Z(v7); /*0x7704f5*/
      v5[1] = 0; /*0x7704fd*/
    }
    --v6; /*0x770500*/
    *((unsigned char *)v5 + 13) = 0; /*0x770501*/
    v5[2] = 0; /*0x770504*/
  }
  while ( v6 ); /*0x770507*/
  v8 = (ObjectClass *)&this->barrelFacing[3]; /*0x770509*/
  v9 = 6; /*0x77050f*/
  v10 = &this->barrelFacing[4]; /*0x770515*/
  do /*0x77053b*/
  {
    v10 -= 37; /*0x77051d*/
    v8 = (ObjectClass *)((char *)v8 - 148); /*0x770528*/
    Array::ForEachReverse(v10, 24, 6, (int (*)(int))sub_771A00); /*0x77052e*/
    DeleteAndZero(v8); /*0x770535*/
    --v9; /*0x77053a*/
  }
  while ( v9 ); /*0x77053b*/

}

// ==== BACKFILL 0x00770850  sub_770850  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_770850(unsigned int * a1, char ** a2, int a4, ObjectClass * aP4)
{
    (void)a1; (void)a2; (void)a4; (void)aP4;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00770850.json)
}

// ==== BACKFILL 0x00770970  sub_770970  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_770970(int a2, int a3, void ** a4)
{
    (void)a2; (void)a3; (void)a4; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00770970.json)
}

// ==== BACKFILL 0x00770A50  sub_770A50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_770A50(int a2, int a3, void ** a4)
{
    (void)a2; (void)a3; (void)a4; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00770A50.json)
}

// ==== BACKFILL 0x00770B30  sub_770B30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_770B30(int a2, void ** a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00770B30.json)
}

// ==== BACKFILL 0x00770CE0  Map_Remove_770CE0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_770CE0(int a1, int a2, char ** a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00770CE0.json)
}

// ==== BACKFILL 0x00770F10  sub_770F10  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_770F10(int a2, int a3, void ** a4)
{
    (void)a2; (void)a3; (void)a4; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00770F10.json)
}

// ==== BACKFILL 0x00770FE0  sub_770FE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_770FE0(int a2, int a3, void ** a4)
{
    (void)a2; (void)a3; (void)a4; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00770FE0.json)
}

// ==== BACKFILL 0x007710B0  INIClass::ReadTokenizedPair  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
void INIClass::ReadTokenizedPair(void* a1, void* a2, void* a3, int a4, void* a5) {
}

// ==== BACKFILL 0x00771710  sub_771710  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_771710()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00771710.json)
}

// ==== BACKFILL 0x007717A0  sub_7717A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
DWORD sub_7717A0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007717A0.json)
}

// ==== BACKFILL 0x00771850  sub_771850  cls=Anim@Voices@WorldDominationTour  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_771850(int a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00771850.json)
}

// ==== BACKFILL 0x007719E0  sub_7719E0  cls=DynamicVectorClass_uint  sig=csp  renamed_refs=0  residual=- ====
int sub_7719E0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007719E0.json)
}

// ==== BACKFILL 0x00771A00  sub_771A00  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void sub_771A00()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00771A00.json)
}

// ==== BACKFILL 0x00771F00  WeaponTypeClass::loadWeaponProperties  cls=WeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int *  WeaponTypeClass::loadWeaponProperties(int aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00771F00.json)
}

// ==== BACKFILL 0x007729F0  WeaponTypeClass::CalculateSpeed  cls=WeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
int WeaponTypeClass::CalculateSpeed()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007729F0.json)
}

// ==== BACKFILL 0x00772AC0  InfantryClass::startPanic  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
void InfantryClass::startPanic()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00772AC0.json)
}

// ==== BACKFILL 0x00772C90  WeaponTypeClass::GetClassIdentifier  cls=WeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
int WeaponTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00772C90.json)
}

// ==== BACKFILL 0x007730D0  WeaponTypeClass::GetObjectSize  cls=WeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
int WeaponTypeClass::GetObjectSize()
{

  return 352; /*0x7730d5*/

}

// ==== BACKFILL 0x007730E0  WeaponTypeClass::GetTypeIdentifier  cls=WeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
int WeaponTypeClass::GetTypeIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7730E0)
}

// ==== BACKFILL 0x007730F0  WeaponTypeClass::ddtor  cls=WeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
WeaponTypeClass * WeaponTypeClass::ddtor(void ** Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007730F0.json)
}

// ==== BACKFILL 0x00773590  sub_773590  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char AnimClass::sub_773590(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00773590.json)
}

// ==== BACKFILL 0x007738A0  sub_7738A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOL sub_7738A0(const char * cbData, LPBYTE lpData, const char * Type)
{
    (void)cbData; (void)lpData; (void)Type; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007738A0.json)
}

// ==== BACKFILL 0x00773970  sub_773970  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool sub_773970(BYTE * Type, DWORD cbData)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00773970.json)
}

// ==== BACKFILL 0x00773A40  WebBrowser::QueryInterface  cls=WebBrowser  sig=csp  renamed_refs=0  residual=- ====
int WebBrowser::QueryInterface()
{

  int v2; // [esp+10h] [ebp+4h]
  const void *v3; // [esp+14h] [ebp+8h]
  unsigned int *v4; // [esp+18h] [ebp+Ch]

  *v4 = 0; /*0x773a59*/
  if ( memcmp(v3, &IID_IUnknown, 0x10u) && memcmp(v3, &unk_7F7C20, 0x10u) ) /*0x773a71*/
    return -2147467262; /*0x773a77*/
  *v4 = v2; /*0x773a84*/
  (*(void (**)(int))(*(unsigned int *)v2 + 4))(v2); /*0x773a89*/
  return 0; /*0x773a75*/

}

// ==== BACKFILL 0x00773AA0  WebBrowser::AddRef  cls=WebBrowser  sig=csp  renamed_refs=0  residual=- ====
int WebBrowser::AddRef(void *a1_1)
{

  int v1; // ecx
  int v3; // [esp+4h] [ebp+4h]

  v1 = *(unsigned int *)(v3 + 4) + 1; /*0x773aa7*/
  *(unsigned int *)(v3 + 4) = v1; /*0x773aa8*/
  return v1; /*0x773aad*/

}

// ==== BACKFILL 0x00773AB0  WebBrowser::Release  cls=WebBrowser  sig=csp  renamed_refs=0  residual=- ====
int WebBrowser::Release(void *a1_1)
{

  int result; // eax
  unsigned int *v2; // [esp+4h] [ebp+4h]

  result = v2[1] - 1; /*0x773ab7*/
  v2[1] = result; /*0x773ab8*/
  if ( !result ) /*0x773abb*/
  {
    if ( v2 ) /*0x773abf*/
      (*(void (**)(unsigned int *, int))(*v2 + 68))(v2, 1); /*0x773ac5*/
    return 0; /*0x773ac8*/
  }
  return result; /*0x773aca*/

}

// ==== BACKFILL 0x00773AD0  WebBrowser::?  cls=WebBrowser  sig=csp  renamed_refs=0  residual=- ====
int WebBrowser::WebBrowser___vt03()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00773AD0.json)
}

// ==== BACKFILL 0x00773B00  WebBrowser::COMStub_Return0  cls=WebBrowser  sig=csp  renamed_refs=0  residual=- ====
int WebBrowser::COMStub_Return0()
{

  return 0; /*0x773b02*/

}

// ==== BACKFILL 0x00773B10  WebBrowser::Write  cls=WebBrowser  sig=csp  renamed_refs=0  residual=- ====
int WebBrowser::Write()
{

  int v2; // [esp+4h] [ebp+4h]
  int v3; // [esp+Ch] [ebp+Ch]

  if ( v3 ) /*0x773b16*/
    (*(void (**)(unsigned int, int, unsigned int, wchar_t *))(**(unsigned int **)(v2 + 8) + 64))( /*0x773b2d*/
      *(unsigned int *)(v2 + 8),
      v2 + 12,
      0,
      (wchar_t *)aMain);
  return 0; /*0x773b32*/

}

// ==== BACKFILL 0x00773B40  WebBrowser::StubReturnFalse  cls=WebBrowser  sig=csp  renamed_refs=0  residual=- ====
int WebBrowser::StubReturnFalse()
{

  return 0; /*0x773b42*/

}

// ==== BACKFILL 0x00773B50  WebBrowser::SetSize  cls=WebBrowser  sig=csp  renamed_refs=0  residual=- ====
int WebBrowser::SetSize()
{

  return 0; /*0x773b52*/

}

// ==== BACKFILL 0x00773B60  WebBrowser::CopyTo  cls=WebBrowser  sig=csp  renamed_refs=0  residual=- ====
int WebBrowser::CopyTo()
{

  return 0; /*0x773b62*/

}

// ==== BACKFILL 0x00773B70  WebBrowser::Commit  cls=WebBrowser  sig=csp  renamed_refs=0  residual=- ====
int WebBrowser::Commit()
{

  return 0; /*0x773b72*/

}

// ==== BACKFILL 0x00773B80  WebBrowser::Revert  cls=WebBrowser  sig=csp  renamed_refs=0  residual=- ====
int WebBrowser::Revert()
{

  return 0; /*0x773b82*/

}

// ==== BACKFILL 0x00773B90  WebBrowser::LockRegion  cls=WebBrowser  sig=csp  renamed_refs=0  residual=- ====
int WebBrowser::LockRegion()
{

  return 0; /*0x773b92*/

}

// ==== BACKFILL 0x00773BA0  WebBrowser::UnlockRegion  cls=WebBrowser  sig=csp  renamed_refs=0  residual=- ====
int WebBrowser::UnlockRegion()
{

  return -2147467259; /*0x773ba5*/

}

// ==== BACKFILL 0x00773BB0  WebBrowser::Stat  cls=WebBrowser  sig=csp  renamed_refs=0  residual=- ====
int WebBrowser::Stat()
{

  return 0; /*0x773bb2*/

}

// ==== BACKFILL 0x00773BC0  WebBrowser::Clone  cls=WebBrowser  sig=csp  renamed_refs=0  residual=- ====
int WebBrowser::Clone()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x773BC0)
}

// ==== BACKFILL 0x00773D20  WebBrowser::Navigate  cls=WebBrowser  sig=csp  renamed_refs=0  residual=- ====
int WebBrowser::Navigate()
{

  ((gamemd::Debug *)this)->Log(); /*0x773d2a*/
  return 0; /*0x773d34*/

}

// ==== BACKFILL 0x00773D40  WebBrowser::GoBack  cls=WebBrowser  sig=csp  renamed_refs=0  residual=- ====
int WebBrowser::GoBack()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x773D40)
}

// ==== BACKFILL 0x00773E30  sub_773E30  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_773E30(HWND hWndParent, unsigned int a2, int a3, unsigned int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00773E30.json)
}

// ==== BACKFILL 0x007754A0  WinModemClass::ddtor  cls=WinModemClass  sig=csp  renamed_refs=0  residual=- ====
int WinModemClass::ddtor(int a2)
{

  *((unsigned int *)this + 25) = a2; /*0x7754a4*/
  return a2; /*0x7754a7*/

}

// ==== BACKFILL 0x00775610  WinModemClass::QueryInterface  cls=WinModemClass  sig=csp  renamed_refs=0  residual=- ====
WinModemClass * WinModemClass::QueryInterface(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x775610)
}

// ==== BACKFILL 0x007759B0  Dialog::FindByPtr  cls=Dialog  sig=csp  renamed_refs=0  residual=- ====
int INIClass::FindByPtr()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007759B0.json)
}

// ==== BACKFILL 0x00775B40  sub_775B40  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
INT_PTR sub_775B40(HWND a1, UINT, WPARAM, LPARAM)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x775B40)
}

// ==== BACKFILL 0x00775B50  sub_775B50  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_775B50(unsigned short a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM) a2, int a3, LONG * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00775B50.json)
}

// ==== BACKFILL 0x00775BA0  Dialog::GetField  cls=Dialog  sig=csp  renamed_refs=0  residual=- ====
BOOL INIClass::GetField()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00775BA0.json)
}

// ==== BACKFILL 0x00776670  sub_776670  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectClass::sub_776670(LPARAM lParam)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00776670.json)
}

// ==== BACKFILL 0x007767F0  sub_7767F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int sub_7767F0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007767F0.json)
}

// ==== BACKFILL 0x007768F0  LoadWOLSettings  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool sub_7768F0(HWND hWnd, LPARAM)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007768F0.json)
}

// ==== BACKFILL 0x00776B40  SaveWOLUISettings  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool SaveWOLUISettings(HWND hWnd, char * a2)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00776B40.json)
}

// ==== BACKFILL 0x00776D80  Window::ClampToScreen  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char Window::ClampToScreen(int * a1)
{

  char v1; // bl
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int result; // eax

  v1 = 0; /*0x776d86*/
  v2 = *a1; /*0x776d89*/
  if ( *a1 < 0 ) /*0x776d8d*/
  {
    v3 = a1[2]; /*0x776d8f*/
    *a1 = 0; /*0x776d92*/
    v1 = 1; /*0x776d9a*/
    a1[2] = v3 - v2; /*0x776d9c*/
  }
  v4 = a1[1]; /*0x776d9f*/
  if ( v4 < 0 ) /*0x776da4*/
  {
    v5 = a1[3]; /*0x776da6*/
    a1[1] = 0; /*0x776da9*/
    v1 = 1; /*0x776db2*/
    a1[3] = v5 - v4; /*0x776db4*/
  }
  if ( a1[2] > GetSystemMetrics(16) ) /*0x776dc4*/
  {
    *a1 += GetSystemMetrics(16) - a1[2]; /*0x776dd5*/
    a1[2] = GetSystemMetrics(16); /*0x776dd9*/
    v1 = 1; /*0x776ddc*/
  }
  result = GetSystemMetrics(17); /*0x776de0*/
  if ( a1[3] <= result ) /*0x776de5*/
  {
    LOBYTE(result) = v1; /*0x776e08*/
  }
  else
  {
    a1[1] += GetSystemMetrics(17) - a1[3]; /*0x776df7*/
    result = GetSystemMetrics(17); /*0x776dfa*/
    a1[3] = result; /*0x776dfc*/
    LOBYTE(result) = 1; /*0x776dff*/
  }
  return result; /*0x776e01*/

}

// ==== BACKFILL 0x00776E10  FindListBoxItem  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT FindListBoxItem(HWND hWnd, LRESULT wParam, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00776E10.json)
}

// ==== BACKFILL 0x00776EB0  sub_776EB0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void * sub_776EB0()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00776EB0.json)
}

// ==== BACKFILL 0x00777060  Dialog::RestoreParent  cls=Dialog  sig=csp  renamed_refs=0  residual=- ====
HWND INIClass::RestoreParent()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00777060.json)
}

// ==== BACKFILL 0x00777AC0  Time::FormatDate  cls=Time  sig=csp  renamed_refs=0  residual=- ====
int Time::FormatDate(char * Buffer)
{

  int result; // eax
  struct _SYSTEMTIME SystemTime; // [esp+4h] [ebp-10h] BYREF

  result = FileTimeToSystemTime((const FILETIME *)(&FileTime), &SystemTime); /*0x777ad0*/
  if ( result ) /*0x777ad8*/
    return sprintf( /*0x777b20*/
             Buffer,
             "%02d/%02d/%04d - %02d:%02d:%02d",
             SystemTime.wMonth,
             SystemTime.wDay,
             SystemTime.wYear,
             SystemTime.wHour,
             SystemTime.wMinute,
             SystemTime.wSecond);
  return result; /*0x777b28*/

}

// ==== BACKFILL 0x00777B30  String::FormatDword  cls=String  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * String::FormatDword(char * Buffer)
{

  sprintf(Buffer, "%d", dword_822D1C); /*0x777b3f*/
  return (gamemd::ObjectClass *)(Buffer); /*0x777b49*/

}

// ==== BACKFILL 0x00777B60  String::CopyConstant  cls=String  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * String::CopyConstant(char * Destination)
{

  strncpy(Destination,(const char *)(g_Str_gsmallwoo), 0x20u); /*0x777b6b*/
  return (gamemd::ObjectClass *)(Destination); /*0x777b75*/

}

// ==== BACKFILL 0x00777F90  sub_777F90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
LONG ObjectClass::sub_777F90(HWND hWnd)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00777F90.json)
}

// ==== BACKFILL 0x007781A0  DisableIME  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HIMC IME_Disable()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7781A0)
}

// ==== BACKFILL 0x007784A0  CCToolTip::QueryInterface  cls=CCToolTip  sig=csp  renamed_refs=0  residual=- ====
CCToolTip * CCToolTip::QueryInterface(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7784A0)
}

// ==== BACKFILL 0x00778710  LoadAccountInfoWOL  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_778710::LoadAccountInfoWOL() {

  int v1; // edi
  int Int; // esi
  int v3; // ebp
  uint8_t *v4; // eax
  char *v5; // eax
  char *v6; // eax
  ReferenceCounted *v7; // eax
  void *AccountInfoWOL_Load; // esi
  ComPtr *abstractFlags; // edi
  ObjectClass v11; // [esp+10h] [ebp-B0h] BYREF

  ((unsigned int *)&v11)[0] = (int)this; /*0x778718*/
  unknown_libname_73(&((char *)&v11)); /*0x778722*/
  v1 = -2; /*0x778727*/
  Int = 0; /*0x778732*/
  v3 = -2; /*0x778734*/
  unknown_libname_73(&((char *)&v11)); /*0x778736*/
  unknown_libname_74(&((char *)&v11)); /*0x77873f*/
  unknown_libname_74(&((char *)&v11)); /*0x778748*/
  BufferIOFile::Constructor((BufferIOFile *)&v11.customSound_controller[2], g_Str_File_wolinfoMD_ini); /*0x778756*/
  if ( !(uint8_t)File::IsReady((BufferIOFileClass *)&v11.customSound_controller[2], 0) ) /*0x778760*/
  {
    FileClass::Close((RawFileClass *)&v11.customSound_controller[2]); /*0x77876d*/
    CCFileClass::Close((BufferIOFileClass *)&v11.customSound_controller[2]); /*0x778776*/
    CCFileClass::Reopen((CDFileClass *)&v11.customSound_controller[2], g_Str_File_wolinfoMD_ini, (CHAR *)1); /*0x778786*/
  }
  if ( (uint8_t)File::IsReady((BufferIOFileClass *)&v11.customSound_controller[2], 0) ) /*0x778790*/
  {
    ((unsigned int *)&v11)[0] = 0; /*0x7787a1*/
    ((unsigned int *)&v11)[0] = 0; /*0x7787a5*/
    GenericNode::Constructor((GenericNode *)&v11.owningHouseIndex); /*0x7787a9*/
    GenericNode::Constructor((GenericNode *)&v11.attachedTag); /*0x7787b2*/
    v11.occupant = (int)&vt_GenericList; /*0x7787c0*/
    LinkedList::Prepend((LinkedList *)&v11.owningHouseIndex, (int)&v11.attachedTag); /*0x7787c8*/
    v11.occupant = (int)&vt_List; /*0x7787d1*/
    memset(&v11.ambientSoundController[1], 0, 13); /*0x7787df*/
    v11.customSound_controller[0] = 0; /*0x7787ef*/
    v11.customSound_controller[1] = 0; /*0x7787f3*/
    ((unsigned int *)&v11)[0] = (int)&vt_INIClass; /*0x7787f7*/
    FileStraw::Open((FileStraw *)&((char *)&v11), (int)&v11.customSound_controller[2], 0); /*0x7787ff*/
    CCFileClass::Close((BufferIOFileClass *)&v11.customSound_controller[2]); /*0x778808*/
    v4 = (uint8_t *)String::GetOrEmpty_Alt((String *)&stru_B73590); /*0x778812*/
    if ( INIClass::BinarySearchSection((int)&((char *)&v11), v4) ) /*0x77881c*/
    {
      String::Assign((String *)&v11, g_INI_Key_Server); /*0x778832*/
      INIClass::ReadString((INIClass *)&((char *)&v11), (char **)&stru_B73590, (char **)&v11, (char **)&((char *)&v11), (int)&((char *)&v11)); /*0x77884f*/
      DeleteAndZero(&v11); /*0x778858*/
      String::Assign((String *)&v11, g_INI_Key_Locale); /*0x778866*/
      Int = INIClass::ReadInt((bool *)&((char *)&v11), (char **)&stru_B73590, (char **)&v11, 0); /*0x778883*/
      DeleteAndZero(&v11); /*0x778885*/
      String::Assign((String *)&v11, g_INI_Key_Country); /*0x778893*/
      v1 = INIClass::ReadInt((bool *)&((char *)&v11), (char **)&stru_B73590, (char **)&v11, -2); /*0x7788b1*/
      DeleteAndZero(&v11); /*0x7788b3*/
      String::Assign((String *)&v11, &(unsigned int *)((char *)&stru_81AF8C + 95)); /*0x7788c1*/
      v3 = INIClass::ReadInt((bool *)&((char *)&v11), (char **)&stru_B73590, (char **)&v11, -2); /*0x7788df*/
      DeleteAndZero(&v11); /*0x7788e1*/
      String::Assign((String *)&v11, g_INI_Key_UpdateTime); /*0x7788ef*/
      INIClass::ReadString((INIClass *)&((char *)&v11), (char **)&stru_B73590, (char **)&v11, (char **)&((char *)&v11), (int)&((char *)&v11)); /*0x77890c*/
      DeleteAndZero(&v11); /*0x778915*/
      LocalizeWOLDateString((char **)&((char *)&v11), &((char *)&v11)); /*0x778922*/
      DeleteAndZero::Alt2((DeleteAndZero *)&((char *)&v11)); /*0x77892b*/
      String::Assign((String *)&v11, g_INI_Key_UpdateDate); /*0x778939*/
      INIClass::ReadString((INIClass *)&((char *)&v11), (char **)&stru_B73590, (char **)&v11, (char **)&((char *)&v11), (int)&((char *)&v11)); /*0x778956*/
      DeleteAndZero(&v11); /*0x77895f*/
      v5 = String::GetOrEmpty_Alt((String *)&((char *)&v11)); /*0x778968*/
      v6 = CharToWideString(v5); /*0x77896f*/
      WideString::Reassign((void **)&((char *)&v11), (wchar_t *)v6); /*0x778979*/
    }
    HashTable::DestroyHashTableINIClass((INIClass *)&((char *)&v11)); /*0x778982*/
  }
  v7 = (ReferenceCounted *)__2_YAPAXI_Z(0x44u); /*0x778989*/
  if ( v7 ) /*0x778993*/
    AccountInfoWOL_Load = LoadAccountInfoWOL_Load( /*0x7789bc*/
                            v7,
                            (const char **)&((char *)&v11),
                            Int,
                            0,
                            0,
                            v1,
                            v3,
                            -1,
                            -1,
                            -1,
                            -1,
                            -1,
                            1,
                            (const wchar_t **)&((char *)&v11),
                            (const wchar_t **)&((char *)&v11));
  else
    AccountInfoWOL_Load = 0; /*0x7789c0*/
  abstractFlags = (ComPtr *)((char *)&v11); /*0x7789c2*/
  ComPtr::Constructor((ComPtr *)((char *)&v11)); /*0x7789c8*/
  *(unsigned int *)abstractFlags->__pad_0 = &vt_rc_ptr; /*0x7789cf*/
  ComPtr::Set(abstractFlags, (int)AccountInfoWOL_Load); /*0x7789d6*/
  v11.customSound_controller[2] = (int)&off_7E1668; /*0x7789df*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v11.customSound_controller[2]); /*0x7789e7*/
  DeleteAndZero::Alt((DeleteAndZero *)&((char *)&v11)); /*0x7789f0*/
  DeleteAndZero::Alt((DeleteAndZero *)&((char *)&v11)); /*0x7789f9*/
  DeleteAndZero((ObjectClass *)&((char *)&v11)); /*0x778a02*/
  DeleteAndZero((ObjectClass *)&((char *)&v11)); /*0x778a0b*/
  return abstractFlags->__pad_0; /*0x778a12*/

}

// ==== BACKFILL 0x00779690  LoadAccountInfoWOL_Load  cls=ReferenceCounted  sig=csp  renamed_refs=0  residual=- ====
void * LoadAccountInfoWOL_Load(void* aP1, ObjectClass * aP2, void* aP3, void* aP4, int a6, ObjectClass * aP6, void* aP7, void* aP8, void* aP9, void* aP10, void* aP11, void* aP12, void* aP13, void* aP14)
{
    (void)aP1; (void)aP2; (void)aP3; (void)aP4; (void)a6; (void)aP6; (void)aP7; (void)aP8; (void)aP9; (void)aP10; (void)aP11; (void)aP12; (void)aP13; (void)aP14; return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00779690.json)
}

// ==== BACKFILL 0x0077A8D0  MainLobbyDlgProcWOL_Get  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void MainLobbyDlgProcWOL_Get(HWND hDlg, char a2)
{
  HWND DlgItem; // ebp
  wchar_t * v4;
  wchar_t *StringCSF; // eax
  HWND v6; // ebp
  wchar_t *v7; // eax
  HWND v8; // ebp
  wchar_t *v9; // eax
  HWND v10; // ebp
  wchar_t *v11; // eax
  HWND v12; // ebp
  wchar_t *v13; // eax
  HWND v14; // esi
  wchar_t *v15; // eax
  void *v16; // [esp+10h] [ebp-4h] BYREF

  if ( a2 ) /*0x77a8e5*/
  {
    DlgItem = GetDlgItem(hDlg, 1576); /*0x77a8ef*/
    SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x77a8fe*/
    InvalidateRect(DlgItem, 0, 0); /*0x77a905*/
  }
  v4 = (wchar_t *)((HWND)((wchar_t *)(GetDlgItem(hDlg, 1775))));
  SendMessageA((HWND)(v4), 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x77a920*/
  StringCSF = (wchar_t *)(GetStringCSF((wchar_t *)(g_Str_GUI_UnknownStats), 0,(const char *)(g_Str_File_WOLPersonaInformation_cpp), 892)); /*0x77a933*/
  ((WideString *)((wchar_t **)&v16))->Assign(StringCSF); /*0x77a93d*/
  v6 = GetDlgItem(hDlg, 1776); /*0x77a94e*/
  v7 = (wchar_t *)(((WideString*)(wchar_t **)&v16)->GetOrEmpty_Alt()); /*0x77a950*/
  SendMessageA(v6, 0x4B2u, 0, (LPARAM)v7); /*0x77a95e*/
  v8 = GetDlgItem(hDlg, 1777); /*0x77a96c*/
  v9 = (wchar_t *)(((WideString*)(wchar_t **)&v16)->GetOrEmpty_Alt()); /*0x77a96e*/
  SendMessageA(v8, 0x4B2u, 0, (LPARAM)v9); /*0x77a97c*/
  v10 = GetDlgItem(hDlg, 1793); /*0x77a98a*/
  v11 = (wchar_t *)(((WideString*)(wchar_t **)&v16)->GetOrEmpty_Alt()); /*0x77a98c*/
  SendMessageA(v10, 0x4B2u, 0, (LPARAM)v11); /*0x77a99a*/
  v12 = GetDlgItem(hDlg, 1780); /*0x77a9a8*/
  v13 = (wchar_t *)(((WideString*)(wchar_t **)&v16)->GetOrEmpty_Alt()); /*0x77a9aa*/
  SendMessageA(v12, 0x4B2u, 0, (LPARAM)v13); /*0x77a9b8*/
  v14 = GetDlgItem(hDlg, 1781); /*0x77a9c6*/
  v15 = (wchar_t *)(((WideString*)(wchar_t **)&v16)->GetOrEmpty_Alt()); /*0x77a9c8*/
  SendMessageA(v14, 0x4B2u, 0, (LPARAM)v15); /*0x77a9d6*/
  ((DeleteAndZero*)&v16)->Alt(); /*0x77a9dc*/
}

// ==== BACKFILL 0x0077D1F0  ConnectAndLoginWOL_Connect  cls=SimpleWonlineDialogControl  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_77D1F0::ConnectAndLoginWOL_Connect()
{

  *(unsigned int *)this->__pad_0 = (unsigned int)(&off_7F7624); /*0x77d1f0*/
  ((OwnerDrawControl *)((OwnerDrawControl *)this))->InitVtable(); /*0x77d1f6*/

}

// ==== BACKFILL 0x0077D240  sub_77D240  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_77D240()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0077D240.json)
}

// ==== BACKFILL 0x0077D350  sub_77D350  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool ObjectClass::sub_77D350(ObjectClass * String1)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0077D350.json)
}

// ==== BACKFILL 0x0077D3A0  sub_77D3A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool ObjectClass::sub_77D3A0(ObjectClass * String1)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0077D3A0.json)
}

// ==== BACKFILL 0x0077E7A0  GameConfig::BuildChecksum  cls=GameConfig  sig=csp  renamed_refs=0  residual=- ====
int CCINIClass::BuildChecksum(char * Buffer)
{
    (void)Buffer; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0077E7A0.json)
}

// ==== BACKFILL 0x0077E820  ParseStringCommaInts  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void ** ParseStringCommaInts(char * String, int * a2, int * a3, int * a4, int * a5, int * a6, void ** a7)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x77E820)
}
