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
    return *((unsigned int *)this + 60);
}
} // namespace gamemd
// 0x5F1F00
namespace gamemd {
int NullModemClass::Flush(int a2)
{
  int result; // eax

    result = *((unsigned int *)this + 56);
  if ( result ) /*0x5f1f05*/
// 0x48baa0
    return Rect::SetRedraw(result->vtable2, 1); /*0x5f1f0c*/
  return result; /*0x5f1f11*/
}
} // namespace gamemd

// 0x5F3560
namespace gamemd {
int NullModemClass::Release(int a2, int a3, int a4, int a5)
{
  int result; // eax

    if ( !*((unsigned int *)this + 240) )
    return 0; /*0x5f356a*/
  result = (*(int (**)(unsigned int, int, int, int, unsigned int))(**((unsigned int **)&this->PlayerIndex4) + 8))( /*0x5f3586*/
             this->u32_38,
             a2,
             a3,
             a4,
             0);
  if ( !result ) /*0x5f358b*/
        ++*((unsigned int *)this + 416);
  return result; /*0x5f356c*/
}
} // namespace gamemd
// 0x5F35A0
namespace gamemd {
int NullModemClass::ddtor(int a2, int a3, int a4)
{
    if ( *((unsigned int *)this + 240) )
        return (*(int (**)(unsigned int, int, int))(**(unsigned int **)((char *)this + 224) + 16))(*((unsigned int *)this + 224), a2, a3);
  else
    return 0; /*0x5f35a7*/
}
} // namespace gamemd
// 0x5F35D0
namespace gamemd {
int NullModemClass::Receive()
{
  int v1; // eax

    v1 = *((unsigned int *)this + 56);
  if ( v1 ) /*0x5f35d5*/
    return *(unsigned int *)(v1->vtable2 + 40); /*0x5f35da*/
  else
    return 0; /*0x5f35de*/
}
} // namespace gamemd
// 0x5F35F0
namespace gamemd {
int NullModemClass::CheckStatus()
{
  int v1; // eax

    v1 = *((unsigned int *)this + 56);
  if ( v1 ) /*0x5f35f5*/
    return *(unsigned int *)(v1->vtable2 + 56); /*0x5f35fa*/
  else
    return 0; /*0x5f35fe*/
}
} // namespace gamemd
// 0x5F3610
namespace gamemd {
void NullModemClass::GetAddress()
{
  int v2; // eax

    v2 = *((unsigned int *)this + 56);
  if ( v2 ) /*0x5f3615*/
    return *(unsigned int *)(v2->vtable2 + 40); /*0x5f361a*/
  else
    return 0; /*0x5f3620*/
}
} // namespace gamemd
// 0x5F3630
namespace gamemd {
int NullModemClass::SetAddress(int a2)
{
  int v2; // eax

    v2 = *((unsigned int *)this + 56);
  if ( v2 ) /*0x5f3635*/
    return *(unsigned int *)(v2->vtable2 + 56); /*0x5f363a*/
  else
    return 0; /*0x5f3640*/
}
} // namespace gamemd
// 0x5F3650
namespace gamemd {
void * NullModemClass::QueryInterface(char a2)
{
  void * v3;
v3 = (void *)((unsigned int)((void **)((unsigned int)((void **)this->u32_34))));
  *(unsigned int *)this->ConnectionClass = (void*)&NullModemClass_vftable; /*0x5f3657*/
  if ( v3 ) /*0x5f365f*/
  {
    FileFind::Close(v3); /*0x5f3663*/
    RA2_OPDEL(v3); /*0x5f3669*/
  }
  ObjectClass::FreeResources(); /*0x5f3673*/
    if ( *(Block + 16) != (void **)-1 )
  {
    if ( !g_ClipboardBuffer ) /*0x5f368a*/
      goto LABEL_10; /*0x5f368a*/
    SerialPort::Close((SerialPort *)g_ClipboardBuffer); /*0x5f368c*/
    if ( g_ClipboardBuffer ) /*0x5f3699*/
      (**(void (***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f369f*/
    g_ClipboardBuffer = 0; /*0x5f36a1*/
    this->PacketsSent = -1; /*0x5f36ad*/
    ObjectClass::FreeResources(); /*0x5f36b0*/
  }
  if ( g_ClipboardBuffer ) /*0x5f36bd*/
  {
    (**(void (***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f36c3*/
    g_ClipboardBuffer = 0; /*0x5f36c5*/
  }
  LABEL_10:
    *Block = &vt_ConnManClass;
  if ( (a2 & 1) != 0 ) /*0x5f36db*/
    RA2_OPDEL(); /*0x5f36de*/
    return (NullModemClass *)Block;
}
} // namespace gamemd
// 0x774670
namespace gamemd {
int NullModemClass::sendData()
{
  void *v2; // ecx
  void * v4;
  DWORD cbInQue; // eax
  DWORD cbOutQue; // ecx
  bool v7; // zf
  void *v8; // [esp-8h] [ebp-44h]
  DWORD Errors; // [esp+Ch] [ebp-30h] BYREF
  DWORD EvtMask; // [esp+10h] [ebp-2Ch] BYREF
  struct _COMSTAT Stat; // [esp+14h] [ebp-28h] BYREF
  struct _DCB DCB; // [esp+20h] [ebp-1Ch] BYREF

    Debug::Log();
    PurgeComm(*(HANDLE *)((char *)this + 368), 0xFu);
    ResetEvent(*(HANDLE *)((char *)this + 224));
    ResetEvent(*(HANDLE *)((char *)this + 304));
    v8 = *(void **)((char *)this + 368);
    *((unsigned char *)this + 320) = 0;
    *((unsigned char *)this + 324) = 0;
  if ( GetCommState(v8, &DCB) ) /*0x7746b4*/
  {
        v2 = *(void **)((char *)this + 368);
    DCB.BaudRate = 9600; /*0x7746d7*/
    DCB.Parity = 0; /*0x7746df*/
    DCB.ByteSize = 8; /*0x7746e3*/
    DCB.StopBits = 0; /*0x7746e8*/
    *((unsigned int *)&DCB + 2) = *((unsigned int *)&DCB + 2) & 0xFFFF88C0 | 0x1011; /*0x7746ec*/
    if ( !SetCommState(v2, &DCB) ) /*0x7746f0*/
    {
            Debug::Log();
      return 0; /*0x774710*/
    }
  }
  else
  {
        Debug::Log();
  }
    GetCommMask(*(HANDLE *)((char *)this + 368), &EvtMask);
    (*(void (**)(int, int))(*(unsigned int *)this + 16))(this, 1);
    (*(void (**)(int))(*(unsigned int *)this + 12))(this);
    if ( !EscapeCommFunction(*(HANDLE *)((char *)this + 368), 3u) )
  {
    GetLastError(); /*0x77474f*/
        Debug::Log();
  }
    if ( ClearCommError(*(HANDLE *)((char *)this + 368), &Errors, &Stat) )
  {
    v4 = (void *)((DWORD)((void *)(Errors)));
    cbInQue = Stat.cbInQue; /*0x77477f*/
    cbOutQue = Stat.cbOutQue; /*0x774783*/
    v7 = Errors == 0; /*0x774787*/
        *((unsigned int *)this + 112) = Stat.cbInQue;
        *((unsigned int *)this + 128) = cbOutQue;
    if ( !v7 ) /*0x77478f*/
      WinModemClass::LogCommErrors(v4, *(unsigned char *)&Stat, cbInQue, cbOutQue); /*0x7747a5*/
  }
  return 1; /*0x77470a*/
}
} // namespace gamemd
// 0x7747C0
namespace gamemd {
int NullModemClass::receiveData()
{
  void * v2;
  DWORD cbInQue; // eax
  DWORD cbOutQue; // ecx
  bool v5; // zf
  void *v7; // [esp-8h] [ebp-24h]
  DWORD Errors; // [esp+Ch] [ebp-10h] BYREF
  struct _COMSTAT Stat; // [esp+10h] [ebp-Ch] BYREF

    Debug::Log();
    PurgeComm(*(HANDLE *)((char *)this + 368), 0xFu);
    ResetEvent(*(HANDLE *)((char *)this + 224));
    ResetEvent(*(HANDLE *)((char *)this + 304));
    v7 = *(void **)((char *)this + 368);
    *((unsigned char *)this + 320) = 0;
    *((unsigned char *)this + 324) = 0;
  if ( !SetCommState(v7, (LPDCB)((char *)this + 8300)) ) /*0x774806*/
        Debug::Log();
    if ( !EscapeCommFunction(*(HANDLE *)((char *)this + 368), 3u) )
  {
    GetLastError(); /*0x77482f*/
        Debug::Log();
  }
    if ( ClearCommError(*(HANDLE *)((char *)this + 368), &Errors, &Stat) )
  {
    v2 = (void *)((DWORD)((void *)(Errors)));
    cbInQue = Stat.cbInQue; /*0x77485f*/
    cbOutQue = Stat.cbOutQue; /*0x774863*/
    v5 = Errors == 0; /*0x774867*/
        *((unsigned int *)this + 112) = Stat.cbInQue;
        *((unsigned int *)this + 128) = cbOutQue;
    if ( !v5 ) /*0x77486f*/
      WinModemClass::LogCommErrors(v2, *(unsigned char *)&Stat, cbInQue, cbOutQue); /*0x774885*/
  }
    return (*(int (**)(int, int))(*(unsigned int *)this + 16))(this, 1);
}
} // namespace gamemd
// 0x7754C0
namespace gamemd {
int NullModemClass::GetMember23()
{
    return *((unsigned int *)this + 92);
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
void NullModemClass::Send()
{
  return 0; /*0x5f3532*/
}
} // namespace gamemd
// 0x5F3540
namespace gamemd {
int NullModemClass::Disconnect(int a2, int a3, int a4)
{
    return (*(int (**)(void *, int, int, int, int))(*(unsigned int *)this + 52))(this, a2, a3, a4, 1);
           this,
           a2,
           a3,
           a4,
           1);
}
} // namespace gamemd