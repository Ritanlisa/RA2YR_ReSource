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

// 0x773600
namespace gamemd {
int WebBrowser::LoadURLFromRegistry(const char * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x773600)
}
}
// 0x773E90
namespace gamemd {
int WebBrowser::ShowDialog()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x773E90)
}
}
// 0x7740A0
namespace gamemd {
int WebBrowser::GoForward()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7740A0)
}
}
// 0x551630
namespace gamemd {
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
} // namespace gamemd

// 0x773A40
namespace gamemd {
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
  v2[1] = result; /*0x773ab8*/
  if ( !result ) /*0x773abb*/
  {
    if ( v2 ) /*0x773abf*/
      (*(void (**)(unsigned int *, int))(*v2 + 68))(v2, 1); /*0x773ac5*/
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x773BC0)
}
} // namespace gamemd

// 0x773D20
namespace gamemd {
int WebBrowser::Navigate()
{

  ((gamemd::Debug *)this)->Log(); /*0x773d2a*/
  return 0; /*0x773d34*/

}
} // namespace gamemd

// 0x773D40
namespace gamemd {
int WebBrowser::GoBack()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x773D40)
}
} // namespace gamemd
