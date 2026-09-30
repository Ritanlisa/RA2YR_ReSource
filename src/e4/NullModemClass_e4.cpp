// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/NullModemClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/WinModemClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/ParasiteClass_e4.hpp"

// 0x5F1950
namespace gamemd {
int NullModemClass::COMStub()
{

  return *((unsigned int *)this + 15); /*0x5f1953*/

}
} // namespace gamemd
// 0x5F1F00
namespace gamemd {
int NullModemClass::Flush(int a2)
{

  int result; // eax

  result = *((char *)this + 14); /*0x5f1f00*/
  if ( result ) /*0x5f1f05*/
    return Rect::SetRedraw(*(unsigned int **)(result + 4), 1); /*0x5f1f0c*/
  return result; /*0x5f1f11*/

}
} // namespace gamemd

// 0x5F3560
namespace gamemd {
int NullModemClass::Release(int a2, int a3, int a4, int a5)
{

  int result; // eax

  if ( !*((unsigned int *)this + 15) ) /*0x5f3563*/
    return 0; /*0x5f356a*/
  result = (*(int (**)(unsigned int, int, int, int, unsigned int))(**(unsigned int **)((char *)this + 56) + 8))( /*0x5f3586*/
             *((unsigned int *)this + 14),
             a2,
             a3,
             a4,
             0);
  if ( !result ) /*0x5f358b*/
    ++*((unsigned int *)this + 26); /*0x5f358d*/
  return result; /*0x5f356c*/

}
} // namespace gamemd
// 0x5F35A0
namespace gamemd {
int NullModemClass::ddtor(int a2, int a3, int a4)
{

  if ( *((unsigned int *)this + 15) ) /*0x5f35a0*/
    return (*(int (**)(unsigned int, int, int))(**(unsigned int **)((char *)this + 56) + 16))(*((unsigned int *)this + 14), a2, a3); /*0x5f35bb*/
  else
    return 0; /*0x5f35a7*/

}
} // namespace gamemd
// 0x5F35D0
namespace gamemd {
int NullModemClass::Receive()
{

  int v1; // eax

  v1 = *((unsigned int *)this + 14); /*0x5f35d0*/
  if ( v1 ) /*0x5f35d5*/
    return *(unsigned int *)(*(unsigned int *)(v1 + 4) + 40); /*0x5f35da*/
  else
    return 0; /*0x5f35de*/

}
} // namespace gamemd
// 0x5F35F0
namespace gamemd {
int NullModemClass::CheckStatus()
{

  int v1; // eax

  v1 = *((unsigned int *)this + 14); /*0x5f35f0*/
  if ( v1 ) /*0x5f35f5*/
    return *(unsigned int *)(*(unsigned int *)(v1 + 4) + 56); /*0x5f35fa*/
  else
    return 0; /*0x5f35fe*/

}
} // namespace gamemd
// 0x5F3610
namespace gamemd {
void NullModemClass::GetAddress( int a2)
{

  int v2; // eax

  v2 = (int)(*(this + 14));
  if ( v2 ) /*0x5f3615*/
    return *(unsigned int *)(*(unsigned int *)(v2 + 4) + 40); /*0x5f361a*/
  else
    return 0; /*0x5f3620*/

}
} // namespace gamemd
// 0x5F3630
namespace gamemd {
int NullModemClass::SetAddress(int a2)
{

  int v2; // eax

  v2 = *((unsigned int *)this + 14); /*0x5f3630*/
  if ( v2 ) /*0x5f3635*/
    return *(unsigned int *)(*(unsigned int *)(v2 + 4) + 56); /*0x5f363a*/
  else
    return 0; /*0x5f3640*/

}
} // namespace gamemd
// 0x5F3650
namespace gamemd {
void * NullModemClass::QueryInterface(void *** Block, char a2)
{

  void **v3; // edi

  v3 = (void **)(*(Block + 13));
  *Block = (void **)(&vt_NullModemClass);
  if ( v3 ) /*0x5f365f*/
  {
    FileFind::Close(v3); /*0x5f3663*/
    RA2_OPDEL(v3); /*0x5f3669*/
  }
  ObjectClass::FreeResources((int)Block); /*0x5f3673*/
  if ( *(Block + 16) != (void **)-1 ) /*0x5f3680*/
  {
    if ( !g_ClipboardBuffer ) /*0x5f368a*/
      goto LABEL_10; /*0x5f368a*/
    SerialPort::Close((HANDLE *)g_ClipboardBuffer); /*0x5f368c*/
    if ( g_ClipboardBuffer ) /*0x5f3699*/
      (**(void (***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f369f*/
    g_ClipboardBuffer = 0; /*0x5f36a1*/
    *(Block + 16) = (void **)-1; /*0x5f36ad*/
    ObjectClass::FreeResources((int)Block); /*0x5f36b0*/
  }
  if ( g_ClipboardBuffer ) /*0x5f36bd*/
  {
    (**(void (***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f36c3*/
    g_ClipboardBuffer = 0; /*0x5f36c5*/
  }
LABEL_10: *Block = (void **)(&vt_ConnManClass);
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x5f36db*/
    RA2_OPDEL(Block); /*0x5f36de*/
  return (NullModemClass *)Block; /*0x5f36e8*/

}
} // namespace gamemd
// 0x774670
namespace gamemd {
int NullModemClass::sendData()
{

  void *v2; // ecx
  NullModemClass *v4; // edx
  DWORD cbInQue; // eax
  DWORD cbOutQue; // ecx
  bool v7; // zf
  void *v8; // [esp-8h] [ebp-44h]
  DWORD Errors; // [esp+Ch] [ebp-30h] BYREF
  DWORD EvtMask; // [esp+10h] [ebp-2Ch] BYREF
  struct _COMSTAT Stat; // [esp+14h] [ebp-28h] BYREF
  struct _DCB DCB; // [esp+20h] [ebp-1Ch] BYREF

  this->Debug::Log(); /*0x77467d*/
  PurgeComm(*(HANDLE *)((char *)this + 92), 0xFu); /*0x77468b*/
  ResetEvent(*(HANDLE *)((char *)this + 56)); /*0x77469b*/
  ResetEvent(*(HANDLE *)((char *)this + 76)); /*0x7746a1*/
  v8 = *(void **)((char *)this + 92); /*0x7746ad*/
  *((unsigned char *)this + 80) = 0; /*0x7746ae*/
  *((unsigned char *)this + 81) = 0; /*0x7746b1*/
  if ( GetCommState(v8, &DCB) ) /*0x7746b4*/
  {
    v2 = *(void **)((char *)this + 92); /*0x7746c2*/
    DCB.BaudRate = 9600; /*0x7746d7*/
    DCB.Parity = 0; /*0x7746df*/
    DCB.ByteSize = 8; /*0x7746e3*/
    DCB.StopBits = 0; /*0x7746e8*/
    *((unsigned int *)&DCB + 2) = *((unsigned int *)&DCB + 2) & 0xFFFF88C0 | 0x1011; /*0x7746ec*/
    if ( !SetCommState(v2, &DCB) ) /*0x7746f0*/
    {
      this->Debug::Log(); /*0x774700*/
      return 0; /*0x774710*/
    }
  }
  else
  {
    this->Debug::Log(); /*0x774717*/
  }
  GetCommMask(*(HANDLE *)((char *)this + 92), &EvtMask); /*0x774728*/
  (*(void (**)(NullModemClass *))(*(unsigned int *)this->ConnectionClass + 12))(this);
  (*(void (**)(NullModemClass *))(*(unsigned int *)this->ConnectionClass + 12))(this);
  if ( !EscapeCommFunction(*(HANDLE *)((char *)this + 92), 3u) ) /*0x774744*/
  {
    GetLastError(); /*0x77474f*/
    this->Debug::Log(); /*0x77475b*/
  }
  if ( ClearCommError(*(HANDLE *)((char *)this + 92), &Errors, &Stat) ) /*0x774771*/
  {
    v4 = (NullModemClass *)Errors; /*0x77477b*/
    cbInQue = Stat.cbInQue; /*0x77477f*/
    cbOutQue = Stat.cbOutQue; /*0x774783*/
    v7 = Errors == 0; /*0x774787*/
    *((unsigned int *)this + 7) = Stat.cbInQue; /*0x774789*/
    *((unsigned int *)this + 8) = cbOutQue; /*0x77478c*/
    if ( !v7 ) /*0x77478f*/
      WinModemClass::LogCommErrors((unsigned int *)this, v4, *(unsigned char *)&Stat, cbInQue, cbOutQue); /*0x7747a5*/
  }
  return 1; /*0x77470a*/

}
} // namespace gamemd
// 0x7747C0
namespace gamemd {
int NullModemClass::receiveData()
{

  NullModemClass *v2; // edx
  DWORD cbInQue; // eax
  DWORD cbOutQue; // ecx
  bool v5; // zf
  void *v7; // [esp-8h] [ebp-24h]
  DWORD Errors; // [esp+Ch] [ebp-10h] BYREF
  struct _COMSTAT Stat; // [esp+10h] [ebp-Ch] BYREF

  this->Debug::Log(); /*0x7747cd*/
  PurgeComm(*(HANDLE *)((char *)this + 92), 0xFu); /*0x7747db*/
  ResetEvent(*(HANDLE *)((char *)this + 56)); /*0x7747eb*/
  ResetEvent(*(HANDLE *)((char *)this + 76)); /*0x7747f1*/
  v7 = *(void **)((char *)this + 92); /*0x7747ff*/
  *((unsigned char *)this + 80) = 0; /*0x774800*/
  *((unsigned char *)this + 81) = 0; /*0x774803*/
  if ( !SetCommState(v7, (LPDCB)((char *)this + 8300)) ) /*0x774806*/
    this->Debug::Log(); /*0x774816*/
  if ( !EscapeCommFunction(*(HANDLE *)((char *)this + 92), 3u) ) /*0x774824*/
  {
    GetLastError(); /*0x77482f*/
    this->Debug::Log(); /*0x77483b*/
  }
  if ( ClearCommError(*(HANDLE *)((char *)this + 92), &Errors, &Stat) ) /*0x774851*/
  {
    v2 = (NullModemClass *)Errors; /*0x77485b*/
    cbInQue = Stat.cbInQue; /*0x77485f*/
    cbOutQue = Stat.cbOutQue; /*0x774863*/
    v5 = Errors == 0; /*0x774867*/
    *((unsigned int *)this + 7) = Stat.cbInQue; /*0x774869*/
    *((unsigned int *)this + 8) = cbOutQue; /*0x77486c*/
    if ( !v5 ) /*0x77486f*/
      WinModemClass::LogCommErrors((unsigned int *)this, v2, *(unsigned char *)&Stat, cbInQue, cbOutQue); /*0x774885*/
  }
  int NullModemClass::receiveData(NullModemClass *this)

}
} // namespace gamemd
// 0x7754C0
namespace gamemd {
int NullModemClass::GetMember23()
{

  return *((unsigned int *)this + 23); /*0x7754c3*/

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
void NullModemClass::Send(int a1)
{

  return 0; /*0x5f3532*/

}
} // namespace gamemd
// 0x5F3540
namespace gamemd {
int NullModemClass::Disconnect(int a2, int a3, int a4)
{

  ( this, a2, a3, a4, 1)

}
} // namespace gamemd