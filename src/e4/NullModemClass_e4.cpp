// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/NullModemClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/WinModemClass_e4.hpp"
#include "e4/e4_protos.h"

// 0x5F1950
namespace gamemd {
int NullModemClass::COMStub()
{
  return *(&this->PlayerIndex5); /*0x5f1953*/
}
} // namespace gamemd
// 0x5F1F00
namespace gamemd {
int NullModemClass::Flush(int a2)
{
  int result; // eax

  result = this->linkObject; /*0x5f1f00*/
  if ( result ) /*0x5f1f05*/
    return Rect::SetRedraw(result->PlayerIndex, 1); /*0x5f1f0c*/
  return result; /*0x5f1f11*/
}
} // namespace gamemd

// 0x5F3560
namespace gamemd {
int NullModemClass::Release(int a2, int a3, int a4, int a5)
{
  int result; // eax

  if ( !this->q03C ) /*0x5f3563*/
    return 0; /*0x5f356a*/
  result = (*(int (__thiscall **)(_DWORD, int, int, int, _DWORD))(**(_DWORD **)(&this->PacketsReceived6) + 8))( /*0x5f3586*/
             this->q038,
             a2,
             a3,
             a4,
             0);
  if ( !result ) /*0x5f358b*/
    ++this->q068; /*0x5f358d*/
  return result; /*0x5f356c*/
}
} // namespace gamemd
// 0x5F35A0
namespace gamemd {
int NullModemClass::ddtor(int a2, int a3, int a4)
{
  if ( this->q03C ) /*0x5f35a0*/
    return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(&this->PacketsReceived6) + 16))(this->q038, a2, a3); /*0x5f35bb*/
  else
    return 0; /*0x5f35a7*/
}
} // namespace gamemd
// 0x5F35D0
namespace gamemd {
int NullModemClass::Receive()
{
  int v1; // eax

  v1 = *(&this->PlayerIndex4); /*0x5f35d0*/
  if ( v1 ) /*0x5f35d5*/
    return *(_DWORD *)(v1->PlayerIndex + 40); /*0x5f35da*/
  else
    return 0; /*0x5f35de*/
}
} // namespace gamemd
// 0x5F35F0
namespace gamemd {
int NullModemClass::CheckStatus()
{
  int v1; // eax

  v1 = *(&this->PlayerIndex4); /*0x5f35f0*/
  if ( v1 ) /*0x5f35f5*/
    return *(_DWORD *)(v1->PlayerIndex + 56); /*0x5f35fa*/
  else
    return 0; /*0x5f35fe*/
}
} // namespace gamemd
// 0x5F3610
namespace gamemd {
int NullModemClass::GetAddress(int a2)
{
  int v2; // eax

  v2 = *(&this->PlayerIndex4); /*0x5f3610*/
  if ( v2 ) /*0x5f3615*/
    return *(_DWORD *)(v2->PlayerIndex + 40); /*0x5f361a*/
  else
    return 0; /*0x5f3620*/
}
} // namespace gamemd
// 0x5F3630
namespace gamemd {
int NullModemClass::SetAddress(int a2)
{
  int v2; // eax

  v2 = *(&this->PlayerIndex4); /*0x5f3630*/
  if ( v2 ) /*0x5f3635*/
    return *(_DWORD *)(v2->PlayerIndex + 56); /*0x5f363a*/
  else
    return 0; /*0x5f3640*/
}
} // namespace gamemd
// 0x5F3650
namespace gamemd {
void * NullModemClass::QueryInterface(char a2)
{
  void *v3; // edi

  v3 = (void *)*(&this->PlayerIndex3); /*0x5f3654*/
  *this = &(void*)(void*)&NullModemClass_vftable; /*0x5f3657*/
  if ( v3 ) /*0x5f365f*/
  {
    FileFind::Close(); /*0x5f3663*/
    RA2_OPDEL(v3); /*0x5f3669*/
  }
  ObjectClass::FreeResources(); /*0x5f3673*/
  if ( *(&this->PlayerIndex6) != -1 ) /*0x5f3680*/
  {
    if ( !g_ClipboardBuffer ) /*0x5f368a*/
      goto LABEL_10; /*0x5f368a*/
    SerialPort::Close((HANDLE *)g_ClipboardBuffer); /*0x5f368c*/
    if ( g_ClipboardBuffer ) /*0x5f3699*/
      (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f369f*/
    g_ClipboardBuffer = 0; /*0x5f36a1*/
    *(&this->PlayerIndex6) = -1; /*0x5f36ad*/
    ObjectClass::FreeResources(); /*0x5f36b0*/
  }
  if ( g_ClipboardBuffer ) /*0x5f36bd*/
  {
    (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f36c3*/
    g_ClipboardBuffer = 0; /*0x5f36c5*/
  }
  LABEL_10:
  *this = &(void*)(void*)&ConnManClass_vftable; /*0x5f36cf*/
  if ( (a2 & 1) != 0 ) /*0x5f36db*/
    RA2_OPDEL(); /*0x5f36de*/
  return this; /*0x5f36e8*/
}
} // namespace gamemd
// 0x774670
namespace gamemd {
int NullModemClass::sendData()
{
  void *v2; // ecx
  DWORD v4; // edx
  DWORD cbInQue; // eax
  DWORD cbOutQue; // ecx
  bool v7; // zf
  void *v8; // [esp-8h] [ebp-44h]
  DWORD Errors; // [esp+Ch] [ebp-30h] BYREF
  DWORD EvtMask; // [esp+10h] [ebp-2Ch] BYREF
  struct _COMSTAT Stat; // [esp+14h] [ebp-28h] BYREF
  struct _DCB DCB; // [esp+20h] [ebp-1Ch] BYREF

  Debug::Log(); /*0x77467d*/
  PurgeComm(*(HANDLE *)(&this->q0242), 0xFu); /*0x77468b*/
  ResetEvent(*(HANDLE *)(&this->PacketsReceived6)); /*0x77469b*/
  ResetEvent(*(HANDLE *)(&this->q01C6)); /*0x7746a1*/
  v8 = *(void **)(&this->q0242); /*0x7746ad*/
  this->q050 = 0; /*0x7746ae*/
  this->ptr_51 = 0; /*0x7746b1*/
  if ( GetCommState(v8, &DCB) ) /*0x7746b4*/
  {
    v2 = *(void **)(&this->q0242); /*0x7746c2*/
    DCB.BaudRate = 9600; /*0x7746d7*/
    DCB.Parity = 0; /*0x7746df*/
    DCB.ByteSize = 8; /*0x7746e3*/
    DCB.StopBits = 0; /*0x7746e8*/
    *((_DWORD *)&DCB + 2) = *((_DWORD *)&DCB + 2) & 0xFFFF88C0 | 0x1011; /*0x7746ec*/
    if ( !SetCommState(v2, &DCB) ) /*0x7746f0*/
    {
      Debug::Log(); /*0x774700*/
      return 0; /*0x774710*/
    }
  }
  else
  {
    Debug::Log(); /*0x774717*/
  }
  GetCommMask(*(HANDLE *)(&this->q0242), &EvtMask); /*0x774728*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)&this->PlayerIndex6))(this, 1); /*0x774734*/
  (*(void (__thiscall **)(int))(*(_DWORD *)&this->PlayerIndex2))(this); /*0x77473b*/
  if ( !EscapeCommFunction(*(HANDLE *)(&this->q0242), 3u) ) /*0x774744*/
  {
    GetLastError(); /*0x77474f*/
    Debug::Log(); /*0x77475b*/
  }
  if ( ClearCommError(*(HANDLE *)(&this->q0242), &Errors, &Stat) ) /*0x774771*/
  {
    v4 = Errors; /*0x77477b*/
    cbInQue = Stat.cbInQue; /*0x77477f*/
    cbOutQue = Stat.cbOutQue; /*0x774783*/
    v7 = Errors == 0; /*0x774787*/
    this->q01C = Stat.cbInQue; /*0x774789*/
    this->u32_20 = cbOutQue; /*0x77478c*/
    if ( !v7 ) /*0x77478f*/
      WinModemClass::LogCommErrors(v4, *(_BYTE *)&Stat, cbInQue, cbOutQue); /*0x7747a5*/
  }
  return 1; /*0x77470a*/
}
} // namespace gamemd
// 0x7747C0
namespace gamemd {
int NullModemClass::receiveData()
{
  DWORD v2; // edx
  DWORD cbInQue; // eax
  DWORD cbOutQue; // ecx
  bool v5; // zf
  void *v7; // [esp-8h] [ebp-24h]
  DWORD Errors; // [esp+Ch] [ebp-10h] BYREF
  struct _COMSTAT Stat; // [esp+10h] [ebp-Ch] BYREF

  Debug::Log(); /*0x7747cd*/
  PurgeComm(*(HANDLE *)(&this->q0242), 0xFu); /*0x7747db*/
  ResetEvent(*(HANDLE *)(&this->PacketsReceived6)); /*0x7747eb*/
  ResetEvent(*(HANDLE *)(&this->q01C6)); /*0x7747f1*/
  v7 = *(void **)(&this->q0242); /*0x7747ff*/
  this->q050 = 0; /*0x774800*/
  this->ptr_51 = 0; /*0x774803*/
  if ( !SetCommState(v7, (LPDCB)(&this->u32_CF80)) ) /*0x774806*/
    Debug::Log(); /*0x774816*/
  if ( !EscapeCommFunction(*(HANDLE *)(&this->q0242), 3u) ) /*0x774824*/
  {
    GetLastError(); /*0x77482f*/
    Debug::Log(); /*0x77483b*/
  }
  if ( ClearCommError(*(HANDLE *)(&this->q0242), &Errors, &Stat) ) /*0x774851*/
  {
    v2 = Errors; /*0x77485b*/
    cbInQue = Stat.cbInQue; /*0x77485f*/
    cbOutQue = Stat.cbOutQue; /*0x774863*/
    v5 = Errors == 0; /*0x774867*/
    this->q01C = Stat.cbInQue; /*0x774869*/
    this->u32_20 = cbOutQue; /*0x77486c*/
    if ( !v5 ) /*0x77486f*/
      WinModemClass::LogCommErrors(v2, *(_BYTE *)&Stat, cbInQue, cbOutQue); /*0x774885*/
  }
  return (1); /*0x774893*/
}
} // namespace gamemd
// 0x7754C0
namespace gamemd {
int NullModemClass::GetMember23()
{
  return *(&this->Active3); /*0x7754c3*/
}
} // namespace gamemd
// 0x5F3520
namespace gamemd {
int NullModemClass::COMStub_Return0(int a1)
{
  return 0; /*0x5f3522*/
}
} // namespace gamemd
// 0x5F3530
namespace gamemd {
int NullModemClass::Send(int a1)
{
  return 0; /*0x5f3532*/
}
} // namespace gamemd
// 0x5F3540
namespace gamemd {
int NullModemClass::Disconnect(int a2, int a3, int a4)
{
  return (a2, a3, a4, 1); /*0x5f3556*/
}
} // namespace gamemd