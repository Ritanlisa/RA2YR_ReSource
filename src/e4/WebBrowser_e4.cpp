// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WebBrowser_e4.hpp"

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

// 0x551630
namespace gamemd {
bool WebBrowser::OpenURL()
{
{
    HANDLE FileA;
    HINSTANCE ExecutableA;
    DWORD NumberOfBytesWritten;
    struct _PROCESS_INFORMATION ProcessInformation;
    struct _STARTUPINFOA StartupInfo;
    CHAR TempFileName[260];
    CHAR CommandLine[260];
    CHAR Buffer[260];
    CHAR Result[260];
    if ( !this )
    return 0;
    if ( !strlen(this->__pad_0) )
    return 0;
    GetWindowsDirectoryA(Buffer, 0x104u);
    GetTempFileNameA(Buffer, (LPCSTR)&DataGlobal_829748.fallRate, 0, TempFileName);
    strcpy(strrchr(TempFileName, 46), (const char *)&DataGlobal_829748.objectTypeFlags);
    FileA = CreateFileA(TempFileName, 0x40000000u, 0, 0, 2u, 0x80u, 0);
    if ( FileA == (HANDLE)-1 )
    return 0;
    WriteFile(FileA, &DataGlobal_829748.__pad_0[12], strlen(&DataGlobal_829748.__pad_0[12]), &NumberOfBytesWritten, 0);
    CloseHandle(FileA);
    ExecutableA = FindExecutableA(TempFileName, 0, Result);
    DeleteFileA(TempFileName);
    if ( (int)ExecutableA <= 32 )
    return 0;
    sprintf(CommandLine, &DataGlobal_829748, this);
    memset(&StartupInfo, 0, sizeof(StartupInfo));
    StartupInfo.cb = 68;
    return CreateProcessA(Result, CommandLine, 0, 0, 0, 0, 0, 0, &StartupInfo, &ProcessInformation);
}
}
} // namespace gamemd

// 0x773A40
namespace gamemd {
int WebBrowser::QueryInterface()
{
{
    int v2;
    const void *v3;
    int *v4;
    *v4 = 0;
    if ( memcmp(v3, &IID_IUnknown, 0x10u) && memcmp(v3, &DataGlobal_7F7C20, 0x10u) )
    return -2147467262;
    *v4 = v2;
    (*(void (__stdcall **)(int))(*(int *)(v2) + 4))(v2);
    return 0;
}
}
} // namespace gamemd

// 0x773AA0
namespace gamemd {
int WebBrowser::AddRef()
{
{
    int v1;
    int v3;
    v1 = *(int *)(v3 + 4) + 1;
    *(int *)(v3 + 4) = v1;
    return v1;
}
}
} // namespace gamemd

// 0x773AB0
namespace gamemd {
int WebBrowser::Release()
{
{
    int result;
    int *v2;
    result = v2[1] - 1;
    v2[1] = result;
    if ( !result )
  {
    if ( v2 )
    (*(void (__thiscall **)(int *, int))(*v2 + 68))(v2, 1);
    return 0;
  }
    return result;
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

// 0x773B10
namespace gamemd {
int WebBrowser::Write()
{
{
    int v2;
    int v3;
    if ( v3 )
    (*(void (__stdcall **)(int, int, int, wchar_t *))(**(int **)(v2 + 8) + 64))( *(int *)(v2 + 8), v2 + 12, 0, DataGlobal_8496B8);
    return 0;
}
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

// 0x773BC0
namespace gamemd {
int WebBrowser::Clone()
{
{
    LSTATUS v1;
    char *v2;
    HKEY phkResult;
    DWORD cbData;
    DWORD Type;
    BYTE Data[260];
    wchar_t Dest[260];
    int v9;
    Debug::Log();
    if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_Software_Westwood_Yuri_s_Reven, 0, 0x20019u, &phkResult) )
    return 0;
    cbData = 260;
    v1 = RegQueryValueExA(phkResult, g_INI_Key_HTMLPath, 0, &Type, Data, &cbData);
    RegCloseKey(phkResult);
    if ( v1 )
    return 0;
    v2 = strrchr((const char *)Data, 92);
    if ( !v2 || strlen((const char *)Data) > v2 - (char *)(Data) + 1 )
    strcat((char *)Data, asc_815E74);
    mbstowcs((wchar_t *)(v9 + 12), (const char *)Data, 0x104u);
    wcscat((wchar_t *)(v9 + 12), DataGlobal_8496C4);
    mbstowcs(Dest, (const char *)Data, 0x104u);
    wcscat(Dest, DataGlobal_84962C);
    return (*(int (__stdcall **)(int, wchar_t *, int, int))(**(int **)(v9 + 8) + 64))( *(int *)(v9 + 8), Dest, 0, 0);
}
}
} // namespace gamemd

// 0x773D20
namespace gamemd {
int WebBrowser::Navigate()
{
{
    Debug::Log();
    return 0;
}
}
} // namespace gamemd

// 0x773D40
namespace gamemd {
int WebBrowser::GoBack()
{
{
    void *v2;
    int v3[2];
    int v4;
    char v5;
    char Dest[64];
    char v7[64];
    wchar_t *Source;
    wchar_t *v9;
    wcstombs(Dest, Source, 0x40u);
    wcstombs(v7, v9, 0x40u);
    String::Assign((char **)&v2, Dest);
    Debug::Log();
    LoadPlayerProfile(v3, (const char **)&v2);
    v4 = 0;
    v5 = 0;
    ReadRegistryOptionsWOL(&v4);
    if ( Flag::IsNot2(&v4) )
  {
    FindChannelWOL(Dest, (int)v7, 1u, *(int *)(v3[1] + 16));
    SaveConfigWOL((int)g_GameMode_Current);
  }
    String::Assign_Alt((void **)&g_WebBrowser, Dest);
    String::Assign_Alt((void **)&g_WebBrowserConfig, v7);
    v3[0] = &vt_rc_ptr_PlayerProfile;
    ComPtr::Release(v3);
    DeleteAndZero(&v2);
    return 0;
}
}
} // namespace gamemd
