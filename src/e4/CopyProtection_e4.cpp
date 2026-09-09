// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x49F5C0
bool CopyProtection::CheckLauncher()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool CopyProtection_CheckLauncher()
{
  HANDLE MutexA; // esi
  bool v1; // bl

  Debug::Log(aCopyprotection_0); /*0x49f5c8*/
  MutexA = CreateMutexA(0, 0, unk_81F3E0); /*0x49f5df*/
  v1 = GetLastError() == 183; /*0x49f5ec*/
  if ( MutexA ) /*0x49f5f5*/
    CloseHandle(MutexA); /*0x49f5f8*/
  Debug::Log(unk_81F3D0, v1); /*0x49f60d*/
  return v1; /*0x49f617*/
}
}

// 0x49F620
char CopyProtection::NotifyLauncher()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char CopyProtection_NotifyLauncher()
{
  DWORD v0; // edi
  HANDLE v1; // esi
  DWORD v2; // esi
  struct tagMSG Msg; // [esp+10h] [ebp-1Ch] BYREF

  Debug::Log(aCopyprotection_1); /*0x49f62c*/
  PeekMessageA(&Msg, 0, 0x400u, 0x400u, 0); /*0x49f647*/
  v0 = timeGetTime() + 60000; /*0x49f657*/
  if ( timeGetTime() < v0 ) /*0x49f661*/
  {
    while ( 1 ) /*0x49f678*/
    {
      v1 = OpenEventA(2u, 1, aD6e7fc9764f94d); /*0x49f678*/
      if ( v1 ) /*0x49f67c*/
        break; /*0x49f67c*/
      Sleep(0); /*0x49f67f*/
      if ( timeGetTime() >= v0 ) /*0x49f689*/
        goto LABEL_9; /*0x49f689*/
    }
    SetEvent(v1); /*0x49f690*/
    CloseHandle(v1); /*0x49f697*/
    Debug::Log(aLauncherNotifi); /*0x49f6a2*/
    Debug::Log(aWaitingForMess); /*0x49f6ac*/
    v2 = timeGetTime() + 10000; /*0x49f6b8*/
    if ( timeGetTime() <= v2 ) /*0x49f6c2*/
    {
      while ( !PeekMessageA(&Msg, 0, 0xBEEFu, 0xBEEFu, 1u) || Msg.message != 48879 ) /*0x49f6e2*/
      {
        Sleep(0); /*0x49f6e6*/
        if ( timeGetTime() > v2 ) /*0x49f6f0*/
          goto LABEL_9; /*0x49f6f0*/
      }
      MEMORY[0x89F75C] = MapViewOfFileEx((HANDLE)Msg.lParam, 0xF001Fu, 0, 0, 0, 0); /*0x49f723*/
      if ( MEMORY[0x89F75C] ) /*0x49f728*/
        return 1; /*0x49f72d*/
    }
  }
LABEL_9:
  Debug::Log(aFailedToNotify); /*0x49f6f2*/
  return 0; /*0x49f701*/
}
}

// 0x49F7A0
char CopyProtection::CheckProtectedData()
{
return 1;
}
