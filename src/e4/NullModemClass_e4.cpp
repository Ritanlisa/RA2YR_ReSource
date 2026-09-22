// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"

// 0x5F1950
int NullModemClass::COMStub()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void NullModemClass::_vt04()
{
  return this->linkOpen; /*0x5f1953*/
}
}

// 0x5F1F00
int NullModemClass::Flush(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void NullModemClass::_vt11(int a2)
{
  int result; // eax

  result = this->linkObject; /*0x5f1f00*/
  if ( result ) /*0x5f1f05*/
    return Rect::SetRedraw(*(_DWORD **)(result + 4), 1); /*0x5f1f0c*/
  return result; /*0x5f1f11*/
}
}

// 0x5F3560
int NullModemClass::Release(int a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void NullModemClass::_vt02(int this, int a2, int a3, int a4, int a5)
{
  int result; // eax

  if ( !this->linkOpen ) /*0x5f3563*/
    return 0; /*0x5f356a*/
  result = (*(int (__thiscall **)(_DWORD, int, int, int, _DWORD))(*this->linkObject + 8))( /*0x5f3586*/
             this->linkObject,
             a2,
             a3,
             a4,
             0);
  if ( !result ) /*0x5f358b*/
    ++this->q068; /*0x5f358d*/
  return result; /*0x5f356c*/
}
}

// 0x5F35A0
int NullModemClass::ddtor(int a2, int a3, int a4)
{
    if ( this->linkOpen )
        return this->linkObject->Dispatch(a2, a3);
    return 0;
}
}

// 0x5F35D0
int NullModemClass::Receive()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void NullModemClass::_vt07()
{

  int v1 = this->linkObject; /*0x5f35d0*/
  if ( v1 ) /*0x5f35d5*/
    return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 40); /*0x5f35da*/
  else
    return 0; /*0x5f35de*/
}
}

// 0x5F35F0
int NullModemClass::CheckStatus()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void NullModemClass::_vt08()
{

  int v1 = this->linkObject; /*0x5f35f0*/
  if ( v1 ) /*0x5f35f5*/
    return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 56); /*0x5f35fa*/
  else
    return 0; /*0x5f35fe*/
}
}

// 0x5F3610
int NullModemClass::GetAddress(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void NullModemClass::_vt09(int a2)
{

  int v2 = this->linkObject; /*0x5f3610*/
  if ( v2 ) /*0x5f3615*/
    return *(_DWORD *)(*(_DWORD *)(v2 + 4) + 40); /*0x5f361a*/
  else
    return 0; /*0x5f3620*/
}
}

// 0x5F3630
int NullModemClass::SetAddress(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void NullModemClass::_vt10(int a2)
{

  int v2 = this->linkObject; /*0x5f3630*/
  if ( v2 ) /*0x5f3635*/
    return *(_DWORD *)(*(_DWORD *)(v2 + 4) + 56); /*0x5f363a*/
  else
    return 0; /*0x5f3640*/
}
}

// 0x5F3650
NullModemClass * NullModemClass::QueryInterface(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
NullModemClass *__thiscall NullModemClass::QueryInterface(void ***this, char a2)
{
  void **v3; // edi

  v3 = this->q034; /*0x5f3654*/
  *this = &vt_NullModemClass; /*0x5f3657*/
  if ( v3 ) /*0x5f365f*/
  {
    FileFind::Close(v3); /*0x5f3663*/
    __3_YAXPAX_Z(v3); /*0x5f3669*/
  }
  ObjectClass::FreeResources((int)this); /*0x5f3673*/
  if ( this->PacketsSent != (void **)-1 ) /*0x5f3680*/
  {
    if ( !g_ClipboardBuffer ) /*0x5f368a*/
      goto LABEL_10; /*0x5f368a*/
    SerialPort::Close((HANDLE *)g_ClipboardBuffer); /*0x5f368c*/
    if ( g_ClipboardBuffer ) /*0x5f3699*/
      (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f369f*/
    g_ClipboardBuffer = 0; /*0x5f36a1*/
    this->PacketsSent = (void **)-1; /*0x5f36ad*/
    ObjectClass::FreeResources((int)this); /*0x5f36b0*/
  }
  if ( g_ClipboardBuffer ) /*0x5f36bd*/
  {
    (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f36c3*/
    g_ClipboardBuffer = 0; /*0x5f36c5*/
  }
LABEL_10:
  *this = &vt_ConnManClass; /*0x5f36cf*/
  if ( (a2 & 1) != 0 ) /*0x5f36db*/
    __3_YAXPAX_Z(this); /*0x5f36de*/
  return (NullModemClass *)this; /*0x5f36e8*/
}
}

// 0x774670
char NullModemClass::sendData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void NullModemClass::sendData(int this)
{
  NullModemClass *v4; // edx
  DWORD cbInQue; // eax
  DWORD cbOutQue; // ecx
  DWORD Errors; // [esp+Ch] [ebp-30h] BYREF
  DWORD EvtMask; // [esp+10h] [ebp-2Ch] BYREF
  struct _COMSTAT Stat; // [esp+14h] [ebp-28h] BYREF
  struct _DCB DCB; // [esp+20h] [ebp-1Ch] BYREF

  Debug::Log(); /*0x77467d*/
  PurgeComm(this->q05C, 0xFu); /*0x77468b*/
  ResetEvent(this->linkObject); /*0x77469b*/
  ResetEvent(*(HANDLE *)(this + 76)); /*0x7746a1*/
  void * v8 = this->q05C; /*0x7746ad*/
  this->q050 = 0; /*0x7746ae*/
  *(_BYTE *)(this + 81) = 0; /*0x7746b1*/
  if ( GetCommState(v8, &DCB) ) /*0x7746b4*/
  {
    void * v2 = this->q05C; /*0x7746c2*/
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
  GetCommMask(this->q05C, &EvtMask); /*0x774728*/
  (*(void (__thiscall **)(int, int))(this->PacketsSent)(this, 1); /*0x774734*/
  (*(void (__thiscall **)(int))(this->LastPacketTime)(this); /*0x77473b*/
  if ( !EscapeCommFunction(this->q05C, 3u) ) /*0x774744*/
  {
    GetLastError(); /*0x77474f*/
    Debug::Log(); /*0x77475b*/
  }
  if ( ClearCommError(this->q05C, &Errors, &Stat) ) /*0x774771*/
  {
    v4 = (NullModemClass *)Errors; /*0x77477b*/
    cbInQue = Stat.cbInQue; /*0x77477f*/
    cbOutQue = Stat.cbOutQue; /*0x774783*/
    bool v7 = Errors == 0; /*0x774787*/
    this->q01C = Stat.cbInQue; /*0x774789*/
    this->q020 = cbOutQue; /*0x77478c*/
    if ( !v7 ) /*0x77478f*/
      WinModemClass::LogCommErrors((_DWORD *)this, v4, *(_BYTE *)&Stat, cbInQue, cbOutQue); /*0x7747a5*/
  }
  return 1; /*0x77470a*/
}
}

// 0x7747C0
int NullModemClass::receiveData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void NullModemClass::receiveData(int this)
{
  NullModemClass *v2; // edx
  DWORD cbInQue; // eax
  DWORD cbOutQue; // ecx
  DWORD Errors; // [esp+Ch] [ebp-10h] BYREF
  struct _COMSTAT Stat; // [esp+10h] [ebp-Ch] BYREF

  Debug::Log(); /*0x7747cd*/
  PurgeComm(this->q05C, 0xFu); /*0x7747db*/
  ResetEvent(this->linkObject); /*0x7747eb*/
  ResetEvent(*(HANDLE *)(this + 76)); /*0x7747f1*/
  void * v7 = this->q05C; /*0x7747ff*/
  this->q050 = 0; /*0x774800*/
  *(_BYTE *)(this + 81) = 0; /*0x774803*/
  if ( !SetCommState(v7, (LPDCB)(this + 8300)) ) /*0x774806*/
    Debug::Log(); /*0x774816*/
  if ( !EscapeCommFunction(this->q05C, 3u) ) /*0x774824*/
  {
    GetLastError(); /*0x77482f*/
    Debug::Log(); /*0x77483b*/
  }
  if ( ClearCommError(this->q05C, &Errors, &Stat) ) /*0x774851*/
  {
    v2 = (NullModemClass *)Errors; /*0x77485b*/
    cbInQue = Stat.cbInQue; /*0x77485f*/
    cbOutQue = Stat.cbOutQue; /*0x774863*/
    bool v5 = Errors == 0; /*0x774867*/
    this->q01C = Stat.cbInQue; /*0x774869*/
    this->q020 = cbOutQue; /*0x77486c*/
    if ( !v5 ) /*0x77486f*/
      WinModemClass::LogCommErrors((_DWORD *)this, v2, *(_BYTE *)&Stat, cbInQue, cbOutQue); /*0x774885*/
  }
  return (*(int (__thiscall **)(int, int))(this->PacketsSent)(this, 1); /*0x774893*/
}
}

// 0x7754C0
int NullModemClass::GetMember23()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void NullModemClass_GetMember23(_DWORD *this)
{
  return this->q05C; /*0x7754c3*/
}
}

// 0x5F3520
int NullModemClass::COMStub_Return0(int a1)
{
return 0;
}

// 0x5F3530
int NullModemClass::Send(int a1)
{
return 0;
}

// 0x5F3540
int NullModemClass::Disconnect(int a2, int a3, int a4)
{
{
    return this->Connect(a2, a3, a4, 1);
}
}
