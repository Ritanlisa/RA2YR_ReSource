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
#include "e4/classes/LoadingScreen_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/SerialPort_e4.hpp"
#include "e4/classes/FileFind_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/String_e4.hpp"

// 0x5F1950
namespace gamemd {  // G42.18 ns repair
int NullModemClass::COMStub()
{
  return this->u32_3C; /*0x5f1953*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x5F1F00
namespace gamemd {
int NullModemClass::Flush(int a2)
{

  int result = this->u32_38; // eax /*0x5f1f00*/
  if ( result ) /*0x5f1f05*/
    return ((Rect *)(result->PlayerIndex))->SetRedraw(1); /*0x5f1f0c*/
  return result; /*0x5f1f11*/
}
} // namespace gamemd

// 0x5F3560
namespace gamemd {
int NullModemClass::Release(int a2, int a3, int a4, int a5)
{

  if ( !this->u32_3C ) /*0x5f3563*/
    return 0; /*0x5f356a*/
  int result; // eax
  result = (*(int (**)(unsigned int, int, int, int, unsigned int))(*this->u32_38) + 8))( /*0x5f3586*/
             this->u32_38,
             a2,
             a3,
             a4,
             0);
  if ( !result ) /*0x5f358b*/
    ++this->u32_68; /*0x5f358d*/
  return result; /*0x5f356c*/
}
} // namespace gamemd
// 0x5F35A0
namespace gamemd {
int NullModemClass::ddtor(int a2, int a3, int a4)
{
  if ( this->u32_3C ) /*0x5f35a0*/
    return (*(int (**)(unsigned int, int, int))(*this->u32_38) + 16))(this->u32_38, a2, a3); /*0x5f35bb*/
  else
    return 0; /*0x5f35a7*/
}
} // namespace gamemd
// 0x5F35D0
namespace gamemd {
int NullModemClass::Receive()
{

  int v1 = this->u32_38; // eax /*0x5f35d0*/
  if ( v1 ) /*0x5f35d5*/
    return *(unsigned int *)(v1->PlayerIndex + 40); /*0x5f35da*/
  else
    return 0; /*0x5f35de*/
}
} // namespace gamemd
// 0x5F35F0
namespace gamemd {
int NullModemClass::CheckStatus()
{

  int v1 = this->u32_38; // eax /*0x5f35f0*/
  if ( v1 ) /*0x5f35f5*/
    return *(unsigned int *)(v1->PlayerIndex + 56); /*0x5f35fa*/
  else
    return 0; /*0x5f35fe*/
}
} // namespace gamemd
// 0x5F3610
namespace gamemd {
int NullModemClass::GetAddress(int a2)
{

  int v2 = this->u32_38; // eax /*0x5f3610*/
  if ( v2 ) /*0x5f3615*/
    return *(unsigned int *)(v2->PlayerIndex + 40); /*0x5f361a*/
  else
    return 0; /*0x5f3620*/
}
} // namespace gamemd
// 0x5F3630
namespace gamemd {
int NullModemClass::SetAddress(int a2)
{

  int v2 = this->u32_38; // eax /*0x5f3630*/
  if ( v2 ) /*0x5f3635*/
    return *(unsigned int *)(v2->PlayerIndex + 56); /*0x5f363a*/
  else
    return 0; /*0x5f3640*/
}
} // namespace gamemd
// 0x5F3650
namespace gamemd {
void * NullModemClass::QueryInterface(char a2, int a1, int a3, int a4, int a5)
{

  void **v3; // edi

  v3 = (void **)*((unsigned int *)a1 + 13); /*0x5f3654*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EEFDC) */  /*0x5f3657*/
  if ( v3 ) /*0x5f365f*/
  {
    FileFind::Close(v3); /*0x5f3663*/
    __3_YAXPAX_Z(v3); /*0x5f3669*/
  }
  ((ObjectClass *)a1)->FreeResources(); /*0x5f3673*/
  if ( *((unsigned int *)a1 + 16) != -1 ) /*0x5f3680*/
  {
    if ( !g_ClipboardBuffer ) /*0x5f368a*/
      goto LABEL_10; /*0x5f368a*/
    ((SerialPort *)g_ClipboardBuffer)->Close(); /*0x5f368c*/
    if ( g_ClipboardBuffer ) /*0x5f3699*/
      (**(void (***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f369f*/
    g_ClipboardBuffer = 0; /*0x5f36a1*/
    *((unsigned int *)a1 + 16) = -1; /*0x5f36ad*/
    ((ObjectClass *)a1)->FreeResources(); /*0x5f36b0*/
  }
  if ( g_ClipboardBuffer ) /*0x5f36bd*/
  {
    (**(void (***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f36c3*/
    g_ClipboardBuffer = 0; /*0x5f36c5*/
  }
  LABEL_10:
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EC1D4) */  /*0x5f36cf*/
  if ( (a1 & 1) != 0 ) /*0x5f36db*/
    __3_YAXPAX_Z(a1); /*0x5f36de*/
  return a1->ConnectionClass; /*0x5f36e8*/

}
} // namespace gamemd
// 0x774670
namespace gamemd {
int NullModemClass::sendData()
{

  struct _COMSTAT Stat; // [esp+14h] [ebp-28h] BYREF
  struct _DCB DCB; // [esp+20h] [ebp-1Ch] BYREF

  Debug::Log(); /*0x77467d*/
  PurgeComm(this->u32_5C, 0xFu); /*0x77468b*/
  ResetEvent(this->u32_38); /*0x77469b*/
  ResetEvent(this->u32_4C); /*0x7746a1*/
  void *v8; // [esp-8h] [ebp-44h]
  v8 = (void *)this->u32_5C; /*0x7746ad*/
  this->q050 = 0; /*0x7746ae*/
  this->u32_51 = 0; /*0x7746b1*/
  if ( GetCommState(v8, &DCB) ) /*0x7746b4*/
  {
    void *v2; // ecx
    v2 = (void *)this->u32_5C; /*0x7746c2*/
    DCB.BaudRate = 9600; /*0x7746d7*/
    DCB.Parity = 0; /*0x7746df*/
    DCB.ByteSize = 8; /*0x7746e3*/
    DCB.StopBits = 0; /*0x7746e8*/
    *((unsigned int *)&DCB + 2) = *((unsigned int *)&DCB + 2) & 0xFFFF88C0 | 0x1011; /*0x7746ec*/
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
  DWORD EvtMask; // [esp+10h] [ebp-2Ch] BYREF
  GetCommMask(this->u32_5C, &EvtMask); /*0x774728*/
  (*(void (**)(NullModemClass *, int))(*(unsigned int *)this->ptr_0 + 16))(this, 1); /*0x774734*/
  (*(void (**)(NullModemClass *))(*(unsigned int *)this->ptr_0 + 12))(this); /*0x77473b*/
  if ( !EscapeCommFunction(this->u32_5C, 3u) ) /*0x774744*/
  {
    GetLastError(); /*0x77474f*/
    Debug::Log(); /*0x77475b*/
  }
  DWORD Errors; // [esp+Ch] [ebp-30h] BYREF
  if ( ClearCommError(this->u32_5C, &Errors, &Stat) ) /*0x774771*/
  {
    DWORD v4 = Errors; // edx /*0x77477b*/
    DWORD cbInQue; // eax
    cbInQue = Stat.cbInQue; /*0x77477f*/
    DWORD cbOutQue; // ecx
    cbOutQue = Stat.cbOutQue; /*0x774783*/
    bool v7; // zf
    v7 = Errors == 0; /*0x774787*/
    this->u32_1C = Stat.cbInQue; /*0x774789*/
    this->u32_20 = cbOutQue; /*0x77478c*/
    if ( !v7 ) /*0x77478f*/
      ((WinModemClass *)this)->LogCommErrors(v4, *(unsigned char *)&Stat, cbInQue, cbOutQue); /*0x7747a5*/
  }
  return 1; /*0x77470a*/

}
} // namespace gamemd
// 0x7747C0
namespace gamemd {
int NullModemClass::receiveData()
{

  struct _COMSTAT Stat; // [esp+10h] [ebp-Ch] BYREF

  Debug::Log(); /*0x7747cd*/
  PurgeComm(this->u32_5C, 0xFu); /*0x7747db*/
  ResetEvent(this->u32_38); /*0x7747eb*/
  ResetEvent(this->u32_4C); /*0x7747f1*/
  void *v7; // [esp-8h] [ebp-24h]
  v7 = (void *)this->u32_5C; /*0x7747ff*/
  this->q050 = 0; /*0x774800*/
  this->u32_51 = 0; /*0x774803*/
  if ( !SetCommState(v7, (LPDCB)(&this->q206C)) ) /*0x774806*/
    Debug::Log(); /*0x774816*/
  if ( !EscapeCommFunction(this->u32_5C, 3u) ) /*0x774824*/
  {
    GetLastError(); /*0x77482f*/
    Debug::Log(); /*0x77483b*/
  }
  DWORD Errors; // [esp+Ch] [ebp-10h] BYREF
  if ( ClearCommError(this->u32_5C, &Errors, &Stat) ) /*0x774851*/
  {
    DWORD v2 = Errors; // edx /*0x77485b*/
    DWORD cbInQue; // eax
    cbInQue = Stat.cbInQue; /*0x77485f*/
    DWORD cbOutQue; // ecx
    cbOutQue = Stat.cbOutQue; /*0x774863*/
    bool v5; // zf
    v5 = Errors == 0; /*0x774867*/
    this->u32_1C = Stat.cbInQue; /*0x774869*/
    this->u32_20 = cbOutQue; /*0x77486c*/
    if ( !v5 ) /*0x77486f*/
      ((WinModemClass *)this)->LogCommErrors(v2, *(unsigned char *)&Stat, cbInQue, cbOutQue); /*0x774885*/
  }
  return (*(int (**)(NullModemClass *, int))(*(unsigned int *)this->ptr_0 + 16))(this, 1); /*0x774893*/

}
} // namespace gamemd
// 0x7754C0
namespace gamemd {
int NullModemClass::GetMember23()
{
  return this->u32_5C; /*0x7754c3*/
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
int NullModemClass::Send()
{
  return 0; /*0x5f3532*/
}
} // namespace gamemd
// 0x5F3540
namespace gamemd {
int NullModemClass::Disconnect(int a2, int a3, int a4)
{

  return (*(int (**)(NullModemClass *, int, int, int, int))(*(unsigned int *)this->ptr_0 + 52))( /*0x5f3556*/
           this,
           a2,
           a3,
           a4,
           1);

}
} // namespace gamemd