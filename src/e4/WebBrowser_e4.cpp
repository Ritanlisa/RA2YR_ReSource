// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WebBrowser_e4.hpp"

// 0x551630
namespace gamemd {
bool WebBrowser::OpenURL()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall WebBrowser::OpenURL(INIClass *this)
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
  if ( !strlen(this->__pad_0) ) /*0x55164a*/
    return 0; /*0x55164a*/
  GetWindowsDirectoryA(Buffer, 0x104u); /*0x551662*/
  GetTempFileNameA(Buffer, (LPCSTR)&stru_829748.fallRate, 0, TempFileName); /*0x55167c*/
  strcpy(strrchr(TempFileName, 46), (const char *)&stru_829748.objectTypeFlags); /*0x5516b3*/
  FileA = CreateFileA(TempFileName, 0x40000000u, 0, 0, 2u, 0x80u, 0); /*0x5516d2*/
  if ( FileA == (HANDLE)-1 ) /*0x5516d7*/
    return 0; /*0x5516d7*/
  WriteFile(FileA, &stru_829748.__pad_0[12], strlen(&stru_829748.__pad_0[12]), &NumberOfBytesWritten, 0); /*0x5516fa*/
  CloseHandle(FileA); /*0x551701*/
  ExecutableA = FindExecutableA(TempFileName, 0, Result); /*0x551720*/
  DeleteFileA(TempFileName); /*0x551723*/
  if ( (int)ExecutableA <= 32 ) /*0x55172c*/
    return 0; /*0x551791*/
  sprintf(CommandLine, &stru_829748, this); /*0x55173c*/
  memset(&StartupInfo, 0, sizeof(StartupInfo)); /*0x55174f*/
  StartupInfo.cb = 68; /*0x551771*/
  return CreateProcessA(Result, CommandLine, 0, 0, 0, 0, 0, 0, &StartupInfo, &ProcessInformation); /*0x551784*/
}
}
} // namespace gamemd

// 0x773600
namespace gamemd {
char WebBrowser::LoadURLFromRegistry(const char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall WebBrowser::LoadURLFromRegistry(int this, const char *a2)
{
  LSTATUS v3; // esi
  LSTATUS v4; // esi
  char *v5; // edx
  int v6; // eax
  HKEY phkResult; // [esp+10h] [ebp-558h] BYREF
  DWORD cbData; // [esp+14h] [ebp-554h] BYREF
  DWORD Type; // [esp+18h] [ebp-550h] BYREF
  CHAR ValueName[64]; // [esp+1Ch] [ebp-54Ch] BYREF
  BYTE v12[260]; // [esp+5Ch] [ebp-50Ch] BYREF
  BYTE Data[512]; // [esp+160h] [ebp-408h] BYREF
  wchar_t Destination[260]; // [esp+360h] [ebp-208h] BYREF

  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, MEMORY[0x849690], 0, 0x20019u, &phkResult) ) /*0x773628*/
    return 0; /*0x773628*/
  strcpy(ValueName, a2); /*0x77364f*/
  if ( !this->WebBrowser_field_0x8 ) /*0x773653*/
    strcat(ValueName, stru_84968C); /*0x773684*/
  cbData = 512; /*0x7736b1*/
  v3 = RegQueryValueExA(phkResult, ValueName, 0, &Type, Data, &cbData); /*0x7736bf*/
  RegCloseKey(phkResult); /*0x7736c2*/
  if ( v3 ) /*0x7736ca*/
    return 0; /*0x7736ca*/
  Debug::Log(); /*0x7736e5*/
  if ( !this->WebBrowser_field_0x8 ) /*0x7736f2*/
    return WebBrowser::OpenURL(Data); /*0x773843*/
  mbstowcs((wchar_t *)(this + 12), (const char *)Data, 0x200u); /*0x773709*/
  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, MEMORY[0x84964C], 0, 0x20019u, &phkResult) ) /*0x773726*/
    return 0; /*0x773726*/
  cbData = 260; /*0x77374a*/
  v4 = RegQueryValueExA(phkResult, MEMORY[0x849640], 0, &Type, v12, &cbData); /*0x773754*/
  RegCloseKey(phkResult); /*0x77375b*/
  if ( v4 ) /*0x773763*/
    return 0; /*0x773763*/
  v5 = strrchr((const char *)v12, 92); /*0x773775*/
  if ( !v5 || strlen((const char *)v12) > v5 - (char *)v12 + 1 ) /*0x773795*/
    strcat((char *)v12, asc_815E74); /*0x7737bc*/
  mbstowcs(Destination, (const char *)v12, 0x104u); /*0x7737d7*/
  wcscat(Destination, stru_84962C); /*0x7737e9*/
  if ( (*(int (__stdcall **)(_DWORD, wchar_t *, _DWORD, _DWORD))(**(_DWORD **)(this + 8) + 64))( /*0x773808*/
         this->WebBrowser_field_0x8,
         Destination,
         0,
         0) < 0 )
    return 0; /*0x773849*/
  v6 = this->WebBrowser_field_0x8; /*0x77380a*/
  if ( v6 ) /*0x77380f*/
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v6 + 28))(this->WebBrowser_field_0x8); /*0x773814*/
    *(_BYTE *)(this + 1036) = 1; /*0x773817*/
  }
  return 1; /*0x77381e*/
}
}
} // namespace gamemd

// 0x773A40
namespace gamemd {
int WebBrowser::QueryInterface()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WebBrowser::_vt00(WebBrowser *this)
{
  int v2; // [esp+10h] [ebp+4h]
  const void *v3; // [esp+14h] [ebp+8h]
  _DWORD *v4; // [esp+18h] [ebp+Ch]

  *v4 = 0; /*0x773a59*/
  if ( memcmp(v3, &IID_IUnknown, 0x10u) && memcmp(v3, &unk_7F7C20, 0x10u) ) /*0x773a71*/
    return -2147467262; /*0x773a77*/
  *v4 = v2; /*0x773a84*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x773a89*/
  return 0; /*0x773a75*/
}
}
} // namespace gamemd

// 0x773AA0
namespace gamemd {
int WebBrowser::AddRef()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WebBrowser::_vt01(WebBrowser *this)
{
  int v1; // ecx
  int v3; // [esp+4h] [ebp+4h]

  v1 = *(_DWORD *)(v3 + 4) + 1; /*0x773aa7*/
  *(_DWORD *)(v3 + 4) = v1; /*0x773aa8*/
  return v1; /*0x773aad*/
}
}
} // namespace gamemd

// 0x773AB0
namespace gamemd {
int WebBrowser::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WebBrowser::_vt02(WebBrowser *this)
{
  int result; // eax
  _DWORD *v2; // [esp+4h] [ebp+4h]

  result = v2[1] - 1; /*0x773ab7*/
  v2[1] = result; /*0x773ab8*/
  if ( !result ) /*0x773abb*/
  {
    if ( v2 ) /*0x773abf*/
      (*(void (__thiscall **)(_DWORD *, int))(*v2 + 68))(v2, 1); /*0x773ac5*/
    return 0; /*0x773ac8*/
  }
  return result; /*0x773aca*/
}
}
} // namespace gamemd

// 0x773B10
namespace gamemd {
int WebBrowser::Write()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WebBrowser::_vt05(WebBrowser *this)
{
  int v2; // [esp+4h] [ebp+4h]
  int v3; // [esp+Ch] [ebp+Ch]

  if ( v3 ) /*0x773b16*/
    (*(void (__stdcall **)(_DWORD, int, _DWORD, wchar_t *))(**(_DWORD **)(v2 + 8) + 64))( /*0x773b2d*/
      *(_DWORD *)(v2 + 8),
      v2 + 12,
      0,
      MEMORY[0x8496B8]);
  return 0; /*0x773b32*/
}
}
} // namespace gamemd

// 0x773BC0
namespace gamemd {
int WebBrowser::Clone()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WebBrowser::_vt14(WebBrowser *this)
{
  LSTATUS v1; // esi
  char *v2; // edx
  HKEY phkResult; // [esp+4h] [ebp-318h] BYREF
  DWORD cbData; // [esp+8h] [ebp-314h] BYREF
  DWORD Type; // [esp+Ch] [ebp-310h] BYREF
  BYTE Data[260]; // [esp+10h] [ebp-30Ch] BYREF
  wchar_t Dest[260]; // [esp+114h] [ebp-208h] BYREF
  int v9; // [esp+320h] [ebp+4h]

  Debug::Log(); /*0x773bcc*/
  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, MEMORY[0x84964C], 0, 0x20019u, &phkResult) ) /*0x773bea*/
    return 0; /*0x773bea*/
  cbData = 260; /*0x773c13*/
  v1 = RegQueryValueExA(phkResult, MEMORY[0x849640], 0, &Type, Data, &cbData); /*0x773c21*/
  RegCloseKey(phkResult); /*0x773c28*/
  if ( v1 ) /*0x773c30*/
    return 0; /*0x773d06*/
  v2 = strrchr((const char *)Data, 92); /*0x773c43*/
  if ( !v2 || strlen((const char *)Data) > v2 - (char *)Data + 1 ) /*0x773c63*/
    strcat((char *)Data, asc_815E74); /*0x773c8b*/
  mbstowcs((wchar_t *)(v9 + 12), (const char *)Data, 0x104u); /*0x773caa*/
  wcscat((wchar_t *)(v9 + 12), MEMORY[0x8496C4]); /*0x773cb5*/
  mbstowcs(Dest, (const char *)Data, 0x104u); /*0x773ccc*/
  wcscat(Dest, stru_84962C); /*0x773cde*/
  return (*(int (__stdcall **)(_DWORD, wchar_t *, _DWORD, _DWORD))(**(_DWORD **)(v9 + 8) + 64))( /*0x773cfc*/
           *(_DWORD *)(v9 + 8),
           Dest,
           0,
           0);
}
}
} // namespace gamemd

// 0x773D20
namespace gamemd {
int WebBrowser::Navigate()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WebBrowser::_vt15(WebBrowser *this)
{
  Debug::Log(); /*0x773d2a*/
  return 0; /*0x773d34*/
}
}
} // namespace gamemd

// 0x773D40
namespace gamemd {
int WebBrowser::GoBack()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WebBrowser::_vt16(WebBrowser *this)
{
  void *v2; // [esp+0h] [ebp-94h] BYREF
  _DWORD v3[2]; // [esp+4h] [ebp-90h] BYREF
  int v4; // [esp+Ch] [ebp-88h] BYREF
  char v5; // [esp+10h] [ebp-84h]
  char Dest[64]; // [esp+14h] [ebp-80h] BYREF
  char v7[64]; // [esp+54h] [ebp-40h] BYREF
  wchar_t *Source; // [esp+9Ch] [ebp+8h]
  wchar_t *v9; // [esp+A0h] [ebp+Ch]

  wcstombs(Dest, Source, 0x40u); /*0x773d55*/
  wcstombs(v7, v9, 0x40u); /*0x773d69*/
  String::Assign((char **)&v2, Dest); /*0x773d7a*/
  Debug::Log(); /*0x773d8e*/
  LoadPlayerProfile(v3, (const char **)&v2); /*0x773d9e*/
  v4 = 0; /*0x773da9*/
  v5 = 0; /*0x773dad*/
  ReadRegistryOptionsWOL(&v4); /*0x773db1*/
  if ( Flag::IsNot2(&v4) ) /*0x773dba*/
  {
    FindChannelWOL(Dest, (int)v7, 1u, *(_DWORD *)(v3[1] + 16)); /*0x773dd5*/
    SaveConfigWOL((int)MEMORY[0xA8B238]); /*0x773ddf*/
  }
  String::Assign_Alt((void **)&g_WebBrowser, Dest); /*0x773dee*/
  String::Assign_Alt((void **)&g_WebBrowserConfig, v7); /*0x773dfd*/
  v3[0] = &vt_rc_ptr_PlayerProfile; /*0x773e06*/
  ComPtr::Release(v3); /*0x773e0e*/
  DeleteAndZero(&v2); /*0x773e17*/
  return 0; /*0x773e1e*/
}
}
} // namespace gamemd

// 0x773E90
namespace gamemd {
HWND WebBrowser::ShowDialog()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __thiscall WebBrowser_ShowDialog(const char *this)
{
  const char *v1; // ebp
  HWND result; // eax
  HWND v3; // edi
  int v4; // edx
  _DWORD *v5; // eax
  int v6; // esi
  _DWORD *v7; // ebp
  LONG dwNewLong; // [esp+1Ch] [ebp-28h] BYREF
  const char *v9; // [esp+20h] [ebp-24h]
  struct tagRECT Rect; // [esp+24h] [ebp-20h] BYREF
  int v11; // [esp+34h] [ebp-10h] BYREF
  int v12; // [esp+38h] [ebp-Ch]
  int v13; // [esp+3Ch] [ebp-8h]
  int v14; // [esp+40h] [ebp-4h]

  v1 = this; /*0x773e94*/
  v9 = this; /*0x773e99*/
  if ( !this || !strlen(this) ) /*0x773eaa*/
    return (HWND)Debug::Log(aDowebpagedialo); /*0x774060*/
  Debug::Log("Creating WebBrowser Dialog for %s.\n", v1); /*0x773ebb*/
  result = (HWND)CreateDialog(0x131u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_773E30, 0); /*0x773ecf*/
  v3 = result; /*0x773ed4*/
  if ( result ) /*0x773ed8*/
  {
    dwNewLong = 0; /*0x773ee7*/
    SetWindowLongA(result, 8, (LONG)&dwNewLong); /*0x773eef*/
    LOBYTE(v4) = 1; /*0x773ef5*/
    SetDialogActiveFlag(v3, v4); /*0x773ef9*/
    Dialog::Show(v3); /*0x773f00*/
    GetClientRect(v3, &Rect); /*0x773f0b*/
    v11 = Rect.left + (Rect.right - Rect.left - 800) / 2; /*0x773f30*/
    v13 = v11 + 800; /*0x773f39*/
    v12 = Rect.top + (Rect.bottom - Rect.top - 600) / 2; /*0x773f4f*/
    v14 = v12 + 600; /*0x773f58*/
    v5 = __2_YAPAXI_Z(0x414u); /*0x773f5c*/
    v6 = (int)v5; /*0x773f61*/
    if ( v5 ) /*0x773f68*/
    {
      v7 = v5 + 2; /*0x773f6e*/
      v5[1] = 1; /*0x773f71*/
      v5[2] = 0; /*0x773f7d*/
      *((_BYTE *)v5 + 1036) = 0; /*0x773f84*/
      v5[260] = 0; /*0x773f8b*/
      *v5 = &vt_WebBrowser; /*0x773f95*/
      Debug::Log(g_Str_Instantiating_embedded_WebBrow); /*0x773f9b*/
      *(_DWORD *)(v6 + 1040) = v3; /*0x773fa3*/
      Debug::Log(g_Str_Creating_WOLBrowser_component_); /*0x773fae*/
      if ( CoCreateInstance(&stru_7F7C60, 0, 1u, &stru_7F7C30, (LPVOID *)(v6 + 8)) >= 0 ) /*0x773fcd*/
      {
        Debug::Log(unk_849594); /*0x773fd4*/
        (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*v7 + 20))(*v7, v6); /*0x773fe3*/
        (*(void (__stdcall **)(_DWORD, HWND, int *))(*(_DWORD *)*v7 + 12))(*v7, v3, &v11); /*0x773ff2*/
        (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*v7 + 60))(*v7, 1); /*0x773ffe*/
      }
      v1 = v9; /*0x774001*/
    }
    else
    {
      v6 = 0; /*0x774057*/
    }
    dword_B72D0C = v6; /*0x774007*/
    if ( v6 ) /*0x77400d*/
    {
      if ( (unsigned __int8)WebBrowser::LoadURLFromRegistry(v1) && !dwNewLong ) /*0x774021*/
      {
        while ( !Dialog::PumpMessages() && !dwNewLong ) /*0x774032*/
          ; /*0x774023*/
      }
      (*(void (__stdcall **)(int))(*(_DWORD *)dword_B72D0C + 8))(dword_B72D0C); /*0x77403c*/
      dword_B72D0C = 0; /*0x77403f*/
    }
    return Dialog::Destroy(v3); /*0x77404b*/
  }
  return result; /*0x774051*/
}
}
} // namespace gamemd

// 0x7740A0
namespace gamemd {
int WebBrowser::GoForward()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WebBrowser::GoForward(WebBrowser *this)
{
  void *v2; // eax
  char v4; // [esp+10h] [ebp+4h]

  *(_DWORD *)this->__pad_0 = &vt_WebBrowser; /*0x7740a8*/
  Debug::Log(); /*0x7740ae*/
  if ( this->field_8 ) /*0x7740b3*/
  {
    Debug::Log(); /*0x7740c2*/
    (*(void (__stdcall **)(void *, WebBrowser *))(*(_DWORD *)this->field_8 + 24))(this->field_8, this); /*0x7740d1*/
    (*(void (__stdcall **)(void *))(*(_DWORD *)this->field_8 + 16))(this->field_8); /*0x7740da*/
  }
  v2 = this->field_8; /*0x7740dd*/
  if ( v2 ) /*0x7740e2*/
    (*(void (__stdcall **)(void *))(*(_DWORD *)v2 + 8))(this->field_8); /*0x7740e7*/
  if ( (v4 & 1) != 0 ) /*0x7740ef*/
    __3_YAXPAX_Z(this); /*0x7740f2*/
  return (int)this->__pad_0; /*0x7740fc*/
}
}
} // namespace gamemd

// 0x773B00
namespace gamemd {
int WebBrowser::COMStub_Return0()
{
return 0;
}
} // namespace gamemd

// 0x773B40
namespace gamemd {
int WebBrowser::StubReturnFalse()
{
return 0;
}
} // namespace gamemd

// 0x773B50
namespace gamemd {
int WebBrowser::SetSize()
{
return 0;
}
} // namespace gamemd

// 0x773B60
namespace gamemd {
int WebBrowser::CopyTo()
{
return 0;
}
} // namespace gamemd

// 0x773B70
namespace gamemd {
int WebBrowser::Commit()
// 0x773b60
{
return 0;
}
} // namespace gamemd

// 0x773B80
namespace gamemd {
int WebBrowser::Revert()
{
return 0;
}
} // namespace gamemd

// 0x773B90
namespace gamemd {
int WebBrowser::LockRegion()
{
return 0;
}
} // namespace gamemd

// 0x773BA0
namespace gamemd {
int WebBrowser::UnlockRegion()
{
return -2147467259;
}
} // namespace gamemd

// 0x773BB0
namespace gamemd {
int WebBrowser::Stat()
{
return 0;
}
} // namespace gamemd
