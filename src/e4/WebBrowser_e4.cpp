// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WebBrowser_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/ObjectVector_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/InfantryClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Flag_e4.hpp"
#include "e4/classes/Weapon_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int CreateDialog(unsigned __int16 a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM), LPARAM a3); }  // x4:ida@0x622650

// 0x773600
namespace gamemd {  // G42.18 ns repair
int WebBrowser::LoadURLFromRegistry(const char * a2)
{

  LSTATUS v3; // esi
  LSTATUS v4; // esi

  HKEY phkResult; // [esp+10h] [ebp-558h] BYREF
  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_WOL_URL_RegKey, 0, 0x20019u, &phkResult) ) /*0x773628*/
    return 0; /*0x773628*/
  CHAR ValueName[64]; // [esp+1Ch] [ebp-54Ch] BYREF
  strcpy(ValueName, a2); /*0x77364f*/
  if ( !this->u32_8 ) /*0x773653*/
    strcat(ValueName, asc_84968C); /*0x773684*/
  DWORD cbData; // [esp+14h] [ebp-554h] BYREF
  cbData = 512; /*0x7736b1*/
  DWORD Type; // [esp+18h] [ebp-550h] BYREF
  BYTE Data[512]; // [esp+160h] [ebp-408h] BYREF
  v3 = RegQueryValueExA(phkResult, ValueName, 0, &Type, Data, &cbData); /*0x7736bf*/
  RegCloseKey(phkResult); /*0x7736c2*/
  if ( v3 ) /*0x7736ca*/
    return 0; /*0x7736ca*/
  Debug::Log(); /*0x7736e5*/
  if ( !this->u32_8 ) /*0x7736f2*/
    return WebBrowser::OpenURL(Data); /*0x773843*/
  mbstowcs(&this->q00C, (const char *)Data, 0x200u); /*0x773709*/
  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_Software_Westwood_Yuri_s_Reven, 0, 0x20019u, &phkResult) ) /*0x773726*/
    return 0; /*0x773726*/
  cbData = 260; /*0x77374a*/
  BYTE v12[260]; // [esp+5Ch] [ebp-50Ch] BYREF
  v4 = RegQueryValueExA(phkResult, g_INI_Key_HTMLPath, 0, &Type, v12, &cbData); /*0x773754*/
  RegCloseKey(phkResult); /*0x77375b*/
  if ( v4 ) /*0x773763*/
    return 0; /*0x773763*/
  char *v5; // edx
  v5 = (char *)(strrchr((const char *)v12, 92)); /*0x773775*/
  if ( !v5 || strlen((const char *)v12) > v5 - &v12->u8_1 ) /*0x773795*/
    strcat((char *)v12, asc_815E74); /*0x7737bc*/
  wchar_t Destination[260]; // [esp+360h] [ebp-208h] BYREF
  mbstowcs(Destination, (const char *)v12, 0x104u); /*0x7737d7*/
  wcscat(Destination, aFr); /*0x7737e9*/
  if ( (*(int (**)(unsigned int, wchar_t *, unsigned int, unsigned int))(**&this->u32_8 + 64))( /*0x773808*/
         this->u32_8,
         Destination,
         0,
         0) < 0 )
    return 0; /*0x773849*/
  int v6; // eax
  v6 = this->u32_8; /*0x77380a*/
  if ( v6 ) /*0x77380f*/
  {
    (*(void (**)(unsigned int))(*(unsigned int *)v6 + 28))(this->u32_8); /*0x773814*/
    this->u32_40C = 1; /*0x773817*/
  }
  return 1; /*0x77381e*/

}
}  // G42.18 ns repair
// 0x773E90
namespace gamemd {
int WebBrowser::ShowDialog(void *a1)
{
  struct tagRECT Rect; // [esp+24h] [ebp-20h] BYREF

  const char *v1; // ebp
  v1 = this; /*0x773e94*/
  const char *v9; // [esp+20h] [ebp-24h]
  v9 = this; /*0x773e99*/
  if ( !this || !strlen(this) ) /*0x773eaa*/
    return (HWND)Debug::Log(aDowebpagedialo); /*0x774060*/
  Debug::Log("Creating WebBrowser Dialog for %s.\n", v1); /*0x773ebb*/
  HWND result; // eax
  result = (HWND)CreateDialog(0x131u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_773E30, 0); /*0x773ecf*/
  HWND v3; // edi
  v3 = result; /*0x773ed4*/
  if ( result ) /*0x773ed8*/
  {
  LONG dwNewLong; // [esp+1Ch] [ebp-28h] BYREF
    dwNewLong = 0; /*0x773ee7*/
    SetWindowLongA(result, 8, (LONG)&dwNewLong); /*0x773eef*/
  int v4; // edx
    (*((unsigned char *)&(v4))) = 1; /*0x773ef5*/
    SetDialogActiveFlag(v3, v4); /*0x773ef9*/
    ((gamemd::Dialog *)(v3))->Show(); /*0x773f00*/
    GetClientRect(v3, &Rect); /*0x773f0b*/
  int v11; // [esp+34h] [ebp-10h] BYREF
    v11 = Rect.left + (Rect.right - Rect.left - 800) / 2; /*0x773f30*/
  int v13; // [esp+3Ch] [ebp-8h]
    v13 = v11 + 800; /*0x773f39*/
  int v12; // [esp+38h] [ebp-Ch]
    v12 = Rect.top + (Rect.bottom - Rect.top - 600) / 2; /*0x773f4f*/
  int v14; // [esp+40h] [ebp-4h]
    v14 = v12 + 600; /*0x773f58*/
  unsigned int *v5; // eax
    v5 = (unsigned int *)(operator new(0x414u)); /*0x773f5c*/
  int v6; // esi
    v6 = (int)v5; /*0x773f61*/
    if ( v5 ) /*0x773f68*/
    {
  unsigned int *v7; // ebp
      v7 = v5 + 2; /*0x773f6e*/
      v5[1] = 1; /*0x773f71*/
      v5[2] = 0; /*0x773f7d*/
      *((unsigned char *)v5 + 1036) = 0; /*0x773f84*/
      v5[260] = 0; /*0x773f8b*/
      *v5 = (unsigned int)(&vt_WebBrowser); /*0x773f95*/
      Debug::Log(g_Str_Instantiating_embedded_WebBrow); /*0x773f9b*/
      *(unsigned int *)(v6 + 1040) = (unsigned int)(v3); /*0x773fa3*/
      Debug::Log(g_Str_Creating_WOLBrowser_component_); /*0x773fae*/
      if ( CoCreateInstance(&stru_7F7C60, 0, 1u, &stru_7F7C30, (LPVOID *)(v6 + 8)) >= 0 ) /*0x773fcd*/
      {
        Debug::Log(g_Str_Starting_up_WOLBrowser); /*0x773fd4*/
        (*(void (__stdcall **)(unsigned int, int))(*(unsigned int *)*v7 + 20))(*v7, v6); /*0x773fe3*/
        (*(void (__stdcall **)(unsigned int, HWND, int *))(*(unsigned int *)*v7 + 12))(*v7, v3, &v11); /*0x773ff2*/
        (*(void (__stdcall **)(unsigned int, int))(*(unsigned int *)*v7 + 60))(*v7, 1); /*0x773ffe*/
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
      if ( (uint8_t)WebBrowser::LoadURLFromRegistry(v1) && !dwNewLong ) /*0x774021*/
      {
        while ( !Dialog::PumpMessages() && !dwNewLong ) /*0x774032*/
          ; /*0x774023*/
      }
      (*(void (__stdcall **)(int))(*(unsigned int *)dword_B72D0C + 8))(dword_B72D0C); /*0x77403c*/
      dword_B72D0C = 0; /*0x77403f*/
    }
    return ((Dialog *)(v3))->Destroy(); /*0x77404b*/
  }
  return result; /*0x774051*/
}
}
// 0x7740A0
namespace gamemd {
int WebBrowser::GoForward()
{


  /* X11: vtable install elided (implicit via WebBrowser virtuals 0x7740a8) */
  Debug::Log(); /*0x7740ae*/
  if ( this->WebBrowser_field_0x8 ) /*0x7740b3*/
  {
    Debug::Log(); /*0x7740c2*/
    (*(void (**)(void *, WebBrowser *))(*(unsigned int *)this->WebBrowser_field_0x8 + 24))( /*0x7740d1*/
      this->WebBrowser_field_0x8,
      this);
    (*(void (**)(void *))(*(unsigned int *)this->WebBrowser_field_0x8 + 16))(this->WebBrowser_field_0x8); /*0x7740da*/
  }
  void *WebBrowser_field_0x8; // eax
  WebBrowser_field_0x8 = this->WebBrowser_field_0x8; /*0x7740dd*/
  if ( WebBrowser_field_0x8 ) /*0x7740e2*/
    (*(void (**)(void *))(*(unsigned int *)WebBrowser_field_0x8 + 8))(this->WebBrowser_field_0x8); /*0x7740e7*/
  char v4; // [esp+10h] [ebp+4h]
  if ( (v4 & 1) != 0 ) /*0x7740ef*/
    __3_YAXPAX_Z(this); /*0x7740f2*/
  return (int)this->__pad_0; /*0x7740fc*/

}
}
// 0x551630
namespace gamemd {
bool WebBrowser::OpenURL(void *a1_1)
{
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+10h] [ebp-464h] BYREF
  struct _STARTUPINFOA StartupInfo; // [esp+20h] [ebp-454h] BYREF

  if ( !a1_1 ) /*0x55163d*/
    return 0; /*0x55163d*/
  if ( !strlen((const char *)(a1_1)) ) /*0x55164a*/
    return 0; /*0x55164a*/
  CHAR Buffer[260]; // [esp+26Ch] [ebp-208h] BYREF
  GetWindowsDirectoryA(Buffer, 0x104u); /*0x551662*/
  CHAR TempFileName[260]; // [esp+64h] [ebp-410h] BYREF
  GetTempFileNameA(Buffer,(LPCSTR)(PrefixString), 0, TempFileName); /*0x55167c*/
  strcpy(strrchr(TempFileName, 46), aHtml); /*0x5516b3*/
  HANDLE FileA; // esi
  FileA = CreateFileA(TempFileName, 0x40000000u, 0, 0, 2u, 0x80u, 0); /*0x5516d2*/
  if ( FileA == (HANDLE)-1 ) /*0x5516d7*/
    return 0; /*0x5516d7*/
  DWORD NumberOfBytesWritten; // [esp+Ch] [ebp-468h] BYREF
  WriteFile(FileA, aTitleViewhtmlT, strlen(aTitleViewhtmlT), &NumberOfBytesWritten, 0); /*0x5516fa*/
  CloseHandle(FileA); /*0x551701*/
  HINSTANCE ExecutableA; // esi
  CHAR Result[260]; // [esp+370h] [ebp-104h] BYREF
  ExecutableA = (HINSTANCE)(FindExecutableA(TempFileName, 0, Result)); /*0x551720*/
  DeleteFileA(TempFileName); /*0x551723*/
  if ( (int)ExecutableA <= 32 ) /*0x55172c*/
    return 0; /*0x551791*/
  CHAR CommandLine[260]; // [esp+168h] [ebp-30Ch] BYREF
  sprintf(CommandLine, "[open] %s", a1_1); /*0x55173c*/
  memset(&StartupInfo, 0, sizeof(StartupInfo)); /*0x55174f*/
  StartupInfo.cb = 68; /*0x551771*/
  return CreateProcessA(Result, CommandLine, 0, 0, 0, 0, 0, 0, &StartupInfo, &ProcessInformation); /*0x551784*/
}
} // namespace gamemd

// 0x773A40
namespace gamemd {
int WebBrowser::QueryInterface()
{

  unsigned int *v4; // [esp+18h] [ebp+Ch]
  *v4 = 0; /*0x773a59*/
  const void *v3; // [esp+14h] [ebp+8h]
  if ( memcmp(v3, &IID_IUnknown, 0x10u) && memcmp(v3, &unk_7F7C20, 0x10u) ) /*0x773a71*/
    return -2147467262; /*0x773a77*/
  int v2; // [esp+10h] [ebp+4h]
  *v4 = v2; /*0x773a84*/
  (*(void (__stdcall **)(int))(*(unsigned int *)v2 + 4))(v2); /*0x773a89*/
  return 0; /*0x773a75*/
}
} // namespace gamemd

// 0x773AA0
namespace gamemd {
int WebBrowser::AddRef(void *a1_1)
{

  int v1; // ecx
  int v3; // [esp+4h] [ebp+4h]
  v1 = *(unsigned int *)(v3 + 4) + 1; /*0x773aa7*/
  *(unsigned int *)(v3 + 4) = v1; /*0x773aa8*/
  return v1; /*0x773aad*/
}
} // namespace gamemd

// 0x773AB0
namespace gamemd {
int WebBrowser::Release(void *a1_1)
{

  int result; // eax
  unsigned int *v2; // [esp+4h] [ebp+4h]
  result = v2[1] - 1; /*0x773ab7*/
  v2->__pad_004 = result; /*0x773ab8*/
  if ( !result ) /*0x773abb*/
  {
    if ( v2 ) /*0x773abf*/
      v2->GoForward(1); /*0x773ac5*/
    return 0; /*0x773ac8*/
  }
  return result; /*0x773aca*/
}
} // namespace gamemd

// 0x773B00
namespace gamemd {
int WebBrowser::COMStub_Return0()
{
  return 0; /*0x773b02*/
}
} // namespace gamemd

// 0x773B10
namespace gamemd {
int WebBrowser::Write(void *a1)
{

  int v2; // [esp+4h] [ebp+4h]
  int v3; // [esp+Ch] [ebp+Ch]
  if ( v3 ) /*0x773b16*/
    (*(void (__stdcall **)(unsigned int, int, unsigned int, wchar_t *))(**(unsigned int **)(v2 + 8) + 64))( /*0x773b2d*/
      *(unsigned int *)(v2 + 8),
      v2 + 12,
      0,
      aMain);
  return 0; /*0x773b32*/
}
} // namespace gamemd

// 0x773B40
namespace gamemd {
int WebBrowser::StubReturnFalse()
{
  return 0; /*0x773b42*/
}
} // namespace gamemd

// 0x773B50
namespace gamemd {
int WebBrowser::SetSize()
{
  return 0; /*0x773b52*/
}
} // namespace gamemd

// 0x773B60
namespace gamemd {
int WebBrowser::CopyTo()
{
  return 0; /*0x773b62*/
}
} // namespace gamemd

// 0x773B70
namespace gamemd {
int WebBrowser::Commit()
{
  return 0; /*0x773b72*/
}
} // namespace gamemd

// 0x773B80
namespace gamemd {
int WebBrowser::Revert()
{
  return 0; /*0x773b82*/
}
} // namespace gamemd

// 0x773B90
namespace gamemd {
int WebBrowser::LockRegion()
{
  return 0; /*0x773b92*/
}
} // namespace gamemd

// 0x773BA0
namespace gamemd {
int WebBrowser::UnlockRegion()
{
  return -2147467259; /*0x773ba5*/
}
} // namespace gamemd

// 0x773BB0
namespace gamemd {
int WebBrowser::Stat()
{
  return 0; /*0x773bb2*/
}
} // namespace gamemd

// 0x773BC0
namespace gamemd {
int WebBrowser::Clone()
{
  LSTATUS v1; // esi

  Debug::Log(); /*0x773bcc*/
  HKEY phkResult; // [esp+4h] [ebp-318h] BYREF
  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE,(LPCSTR)(g_Str_Software_Westwood_Yuri_s_Reven), 0, 0x20019u, &phkResult) ) /*0x773bea*/
    return 0; /*0x773bea*/
  DWORD cbData; // [esp+8h] [ebp-314h] BYREF
  cbData = 260; /*0x773c13*/
  DWORD Type; // [esp+Ch] [ebp-310h] BYREF
  BYTE Data[260]; // [esp+10h] [ebp-30Ch] BYREF
  v1 = RegQueryValueExA(phkResult,(LPCSTR)(g_INI_Key_HTMLPath), 0, &Type, Data, &cbData); /*0x773c21*/
  RegCloseKey(phkResult); /*0x773c28*/
  if ( v1 ) /*0x773c30*/
    return 0; /*0x773d06*/
  char *v2; // edx
  v2 = (char *)(strrchr((const char *)Data, 92)); /*0x773c43*/
  if ( !v2 || strlen((const char *)Data) > v2 - &Data->u8_1 ) /*0x773c63*/
    strcat((char *)Data,(const char *)(asc_815E74)); /*0x773c8b*/
  int v9; // [esp+320h] [ebp+4h]
  mbstowcs((wchar_t *)(v9 + 12), (const char *)Data, 0x104u); /*0x773caa*/
  wcscat((wchar_t *)(v9 + 12), L"BadPage.htm"); /*0x773cb5*/
  wchar_t Dest[260]; // [esp+114h] [ebp-208h] BYREF
  mbstowcs(Dest, (const char *)Data, 0x104u); /*0x773ccc*/
  wcscat(Dest,(const wchar_t *)(aFr)); /*0x773cde*/
  return (*(int (__stdcall **)(unsigned int, wchar_t *, unsigned int, unsigned int))(**(unsigned int **)(v9 + 8) + 64))( /*0x773cfc*/
           *(unsigned int *)(v9 + 8),
           Dest,
           0,
           0);
}
} // namespace gamemd

// 0x773D20
namespace gamemd {
int WebBrowser::Navigate()
{
  Debug::Log(); /*0x773d2a*/
  return 0; /*0x773d34*/
}
} // namespace gamemd

// 0x773D40
namespace gamemd {
int WebBrowser::GoBack()
{
  String v2; // [esp+0h] [ebp-94h] BYREF
  Flag v4[6]; // [esp+Ch] [ebp-88h] BYREF

  wchar_t *Source; // [esp+9Ch] [ebp+8h]
  wcstombs((char *)&v4[0].Flag_field_0x08, Source, 0x40u); /*0x773d55*/
  char v5[64]; // [esp+54h] [ebp-40h] BYREF
  wchar_t *v7; // [esp+A0h] [ebp+Ch]
  wcstombs(v5, v7, 0x40u); /*0x773d69*/
  ((String *)(&v2))->Assign((const char *)&v4[0].Flag_field_0x08); /*0x773d7a*/
  Debug::Log(); /*0x773d8e*/
  LoadPlayerProfile((gamemd::ObjectClass *)(&v2.ptr_4), (const char **)&v2); /*0x773d9e*/
  *v4->__pad_000.__pad_0 = 0; /*0x773da9*/
  (*((unsigned char *)&(v4[0].Flag_field_0x04))) = 0; /*0x773dad*/
  ReadRegistryOptionsWOL((ObjectClass *)v4); /*0x773db1*/
  if ( (uint8_t)Flag::IsNot2(v4) ) /*0x773dba*/
  {
  int v3; // [esp+8h] [ebp-8Ch]
    FindChannelWOL((const char *)&v4[0].Flag_field_0x08, (int)v5, 1u, v3->u32_10); /*0x773dd5*/
    SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x773ddf*/
  }
  ((String *)((String *)&g_WebBrowser))->Assign_Alt((const char *)&v4[0].Flag_field_0x08); /*0x773dee*/
  ((String *)((String *)&g_WebBrowserConfig))->Assign_Alt(v5); /*0x773dfd*/
  *(unsigned int *)&v2.ptr_4 = (unsigned int)(&vt_rc_ptr); /*0x773e06*/
  ComPtr::Release((ComPtr *)&v2.ptr_4); /*0x773e0e*/
  DeleteAndZero((ObjectClass *)&v2); /*0x773e17*/
  return 0; /*0x773e1e*/
}
} // namespace gamemd