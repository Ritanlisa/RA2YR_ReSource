// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WinModemClass_e4.hpp"
#include "e4/classes/AsyncIO_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/WinMain_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/NullModemClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/WinsockInterface_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WonlineStringDialogControl_12_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x774980
namespace gamemd {
int WinModemClass::ReadSerial()
{

  char v2; // al
  void *v3; // edx
  DWORD v4; // ecx
  DWORD v5; // eax
  int cbInQue; // edi
  DWORD v8; // ecx
  DWORD cbOutQue; // eax
  bool v10; // zf
  void *v11; // ecx
  BOOL v12; // eax
  DWORD i; // eax
  DWORD NumberOfBytesTransferred; // [esp+10h] [ebp-18h] BYREF
  DWORD v16; // [esp+14h] [ebp-14h]
  DWORD Errors; // [esp+18h] [ebp-10h] BYREF
  struct _COMSTAT Stat; // [esp+1Ch] [ebp-Ch] BYREF

  v2 = this->q014; /*0x77498b*/
  v16 = 0; /*0x77498e*/
  if ( v2 ) /*0x774994*/
  {
    v3 = *(void **)((char *)&this->q0242); /*0x774996*/
    NumberOfBytesTransferred = 0; /*0x7749a4*/
    if ( GetOverlappedResult(v3, (LPOVERLAPPED)((char *)&this->u32_100), &NumberOfBytesTransferred, 0) ) /*0x7749a8*/
    {
      v4 = NumberOfBytesTransferred; /*0x7749b2*/
      this->q014 = 0; /*0x7749b6*/
      if ( v4 ) /*0x7749bb*/
      {
        v5 = 0; /*0x7749bd*/
        do /*0x7749e4*/
        {
          *(unsigned char *)(this->q024 + this->u32_58) = *(unsigned char *)(this + v5++ + 108); /*0x7749cd*/
          this->u32_58 = ((uint16_t)this->u32_58 + 1) & 0x1FFF; /*0x7749db*/
        }
        while ( v5 < NumberOfBytesTransferred ); /*0x7749e4*/
        v16 = NumberOfBytesTransferred; /*0x7749e6*/
      }
    }
    else
    {
      if ( GetLastError() == 996 ) /*0x7749f7*/
        return 0; /*0x774a02*/
      ((gamemd::Debug *)this)->Log(); /*0x774a09*/
    }
  }
  ResetEvent(*(HANDLE *)((char *)&this->q0146)); /*0x774a15*/
  cbInQue = 1; /*0x774a29*/
  if ( ClearCommError(*(HANDLE *)((char *)&this->q0242), &Errors, &Stat) ) /*0x774a2e*/
  {
    v8 = Errors; /*0x774a38*/
    cbInQue = Stat.cbInQue; /*0x774a3c*/
    cbOutQue = Stat.cbOutQue; /*0x774a40*/
    v10 = Errors == 0; /*0x774a44*/
    this->q01C = Stat.cbInQue; /*0x774a46*/
    this->u32_20 = cbOutQue; /*0x774a49*/
    if ( !v10 ) /*0x774a4c*/
    {
      ((WinModemClass *)((WinModemClass *)this))->LogCommErrors(v8, *(unsigned char *)&Stat, cbInQue, cbOutQue); /*0x774a62*/
      cbInQue = Stat.cbInQue; /*0x774a67*/
    }
    if ( cbInQue < 0x2000 ) /*0x774a71*/
    {
      if ( !cbInQue ) /*0x774a7c*/
        cbInQue = 1; /*0x774a7e*/
    }
    else
    {
      cbInQue = 0x2000; /*0x774a73*/
    }
  }
  while ( 1 ) /*0x774a86*/
  {
    v11 = *(void **)((char *)&this->q0242); /*0x774a86*/
    NumberOfBytesTransferred = 0; /*0x774a95*/
    v12 = ReadFile(v11, (LPVOID)((char *)&this->u32_288), cbInQue, &NumberOfBytesTransferred, (LPOVERLAPPED)((char *)&this->u32_100)); /*0x774a99*/
    v12 = v12; /*0x774aa1*/
    if ( !v12 ) /*0x774aa6*/
      break; /*0x774aa6*/
    if ( NumberOfBytesTransferred ) /*0x774aae*/
    {
      for ( i = 0; i < NumberOfBytesTransferred; ++i ) /*0x774ab0*/
      {
        *(unsigned char *)(this->q024 + this->u32_58) = *(unsigned char *)(i + (char *)&this->u32_288); /*0x774abf*/
        this->u32_58 = ((uint16_t)this->u32_58 + 1) & 0x1FFF; /*0x774acd*/
      }
      v16 += NumberOfBytesTransferred; /*0x774ada*/
    }
    cbInQue = 1; /*0x774ae1*/
    if ( !v12 ) /*0x774ae6*/
      return v16 != 0; /*0x774ae6*/
  }
  if ( GetLastError() == 997 ) /*0x774af5*/
  {
    v10 = v16 == 0; /*0x774afd*/
    this->q014 = 1; /*0x774aff*/
    return !v10; /*0x774b0d*/
  }
  ((gamemd::Debug *)this)->Log(); /*0x774b14*/
  return v16 != 0; /*0x7749fb*/

}
} // namespace gamemd
// 0x774B30
namespace gamemd {
int WinModemClass::ReadBytes(unsigned char * a2, int a3)
{

  int v4; // ebx
  int v5; // ebx
  int v7; // ebp
  void (*v8)(void); // eax

  if ( !((WinModemClass *)((int)this))->ReadSerial() ) /*0x774b37*/
    return 0; /*0x774ba9*/
  v4 = *((unsigned int *)this + 22) - *((unsigned int *)this + 21); /*0x774b46*/
  v5 = v4 + (v4 < 0 ? 0x2000 : 0);
  if ( v5 > a3 ) /*0x774b56*/
    v5 = (int)(a3); /*0x774b58*/
  if ( v5 <= 0 ) /*0x774b5c*/
    return v5; /*0x774ba2*/
  v7 = v5; /*0x774b63*/
  do /*0x774b96*/
  {
    v8 = (void (*)(void))*((unsigned int *)this + 25); /*0x774b65*/
    if ( v8 ) /*0x774b6a*/
    {
      if ( *(unsigned char *)(*((unsigned int *)this + 21) + this->q024) != 13 ) /*0x774b78*/
        v8(); /*0x774b7a*/
    }
    *a2++ = *(unsigned char *)(*((unsigned int *)this + 21) + this->q024); /*0x774b86*/
    --v7; /*0x774b92*/
    *((unsigned int *)this + 21) = ((uint16_t)*((unsigned int *)this + 21) + 1) & 0x1FFF; /*0x774b93*/
  }
  while ( v7 ); /*0x774b96*/
  return v5; /*0x774b99*/

}
} // namespace gamemd
// 0x774C70
namespace gamemd {
int WinModemClass::WriteSerial(LPCVOID lpBuffer, DWORD aP2)
{

  int result; // eax
  DWORD NumberOfBytesWritten; // [esp+4h] [ebp-4h] BYREF

  ((gamemd::AsyncIO *)((int)this))->WaitCompletion(); /*0x774c74*/
  result = WriteFile( /*0x774c90*/
             (HANDLE)this->u32_17,
             lpBuffer,
             aP2,
             &NumberOfBytesWritten,
             (LPOVERLAPPED)(char *)this + 3);
  if ( !result ) /*0x774c98*/
  {
    result = GetLastError(); /*0x774c9a*/
    if ( result == 997 ) /*0x774ca5*/
      this->u32_51 = 1; /*0x774ca7*/
    else
      return ((gamemd::Debug *)this)->Log(); /*0x774cb7*/
  }
  return result; /*0x774cab*/

}
} // namespace gamemd
// 0x774CD0
namespace gamemd {
WinModemClass * * WinModemClass::LoadTypeData(int a2, char * Str, int a4, WinModemClass * aP4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x774CD0)
}
} // namespace gamemd
// 0x774F50
namespace gamemd {
int WinModemClass::SaveToINI(const char * NumberOfBytesWritten, void * aP)
{

  unsigned int v3; // kr18_4
  char Buffer[80]; // [esp+10h] [ebp-50h] BYREF

  ((gamemd::Debug *)this)->Log(); /*0x774f5e*/
  strcpy(Buffer,(const char *)(aAtd)); /*0x774f83*/
  if ( this->u32_18 ) /*0x774f87*/
  {
    ((gamemd::Debug *)this)->Log(); /*0x774fd5*/
    strcat(Buffer, (const char *)aP); /*0x775002*/
  }
  else
  {
    strcat(Buffer,(const char *)(g_Str_T)); /*0x774fbd*/
    ((gamemd::Debug *)this)->Log(); /*0x774fc6*/
  }
  ((gamemd::Debug *)this)->Log(); /*0x775010*/
  strcat(Buffer, NumberOfBytesWritten); /*0x77503e*/
  ((gamemd::Debug *)this)->Log(); /*0x775047*/
  strcat(Buffer, (const char *)&word_8327A0); /*0x775071*/
  ((gamemd::Debug *)this)->Log(); /*0x775084*/
  v3 = strlen(Buffer) + 1; /*0x775095*/
  ((gamemd::AsyncIO *)((int)this))->WaitCompletion(); /*0x77509e*/
  if ( !WriteFile(*((HANDLE *)&this->q0083), Buffer, v3 - 1, (LPDWORD)&NumberOfBytesWritten, (LPOVERLAPPED)(unsigned int *)this + 3) ) /*0x7750b6*/
  {
    if ( GetLastError() == 997 ) /*0x7750cb*/
    {
      this->u32_51 = 1; /*0x7750cf*/
      return ((gamemd::AsyncIO *)((int)this))->WaitCompletion(); /*0x7750df*/
    }
    ((gamemd::Debug *)this)->Log(); /*0x7750e9*/
  }
  return ((gamemd::AsyncIO *)((int)this))->WaitCompletion(); /*0x7750d8*/

}
} // namespace gamemd
// 0x775110
namespace gamemd {
AbstractClass * * WinModemClass::Dial(const char * a2, unsigned char a3, char * Destination, signed int Count, int a6, int a7, int a8)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x775110)
}
} // namespace gamemd
// 0x7754A0
namespace gamemd {
int WinModemClass::ddtor(int a2)
{

  this->u32_64 = a2; /*0x7754a4*/
  return a2; /*0x7754a7*/

}
} // namespace gamemd
// 0x7754B0
namespace gamemd {
int WinModemClass::HangUp(int a2)
{

  this->u32_68 = a2; /*0x7754b4*/
  return a2; /*0x7754b7*/

}
} // namespace gamemd
// 0x7754D0
namespace gamemd {
int WinModemClass::LogCommErrors(int aP1, char a3, int a4, int a5)
{

  int result; // eax

  if ( aP1 ) /*0x7754da*/
  {
    if ( ((unsigned int)(aP1)& 8) != 0 ) /*0x7754e3*/
    {
      ((gamemd::Debug *)this)->Log(); /*0x7754ea*/
      result = this->WinModemClass_field_0x04 + 1; /*0x7754f5*/
      this->WinModemClass_field_0x04 = result; /*0x7754f6*/
    }
    if ( ((unsigned int)(aP1)& 0x10) != 0 ) /*0x7754fc*/
      result = ((gamemd::Debug *)this)->Log(); /*0x775503*/
    if ( ((unsigned int)(aP1)& 0x400) != 0 ) /*0x77550e*/
    {
      ((gamemd::Debug *)this)->Log(); /*0x775515*/
      result = this->WinModemClass_field_0x08 + 1; /*0x775520*/
      this->WinModemClass_field_0x08 = result; /*0x775521*/
    }
    if ( ((unsigned int)(aP1)& 2) != 0 ) /*0x775527*/
    {
      ((gamemd::Debug *)this)->Log(); /*0x77552e*/
      result = this->WinModemClass_field_0x0C + 1; /*0x775539*/
      this->WinModemClass_field_0x0C = result; /*0x77553a*/
    }
    if ( ((unsigned int)(aP1)& 1) != 0 ) /*0x775540*/
    {
      ((gamemd::Debug *)this)->Log(); /*0x775547*/
      result = this->WinModemClass_field_0x10 + 1; /*0x775552*/
      this->WinModemClass_field_0x10 = result; /*0x775553*/
    }
    if ( ((unsigned int)(aP1)& 4) != 0 ) /*0x775559*/
    {
      ((gamemd::Debug *)this)->Log(); /*0x775560*/
      result = this->WinModemClass_field_0x14 + 1; /*0x77556b*/
      this->WinModemClass_field_0x14 = result; /*0x77556c*/
    }
    if ( ((unsigned int)(aP1)& 0x100) != 0 ) /*0x775572*/
    {
      ((gamemd::Debug *)this)->Log(); /*0x775579*/
      result = this->WinModemClass_field_0x18 + 1; /*0x775584*/
      this->WinModemClass_field_0x18 = result; /*0x775585*/
    }
  }
  if ( (a3 & 1) != 0 ) /*0x77558f*/
    result = ((gamemd::Debug *)this)->Log(); /*0x775596*/
  if ( (a3 & 2) != 0 ) /*0x7755a1*/
    result = ((gamemd::Debug *)this)->Log(); /*0x7755a8*/
  if ( (a3 & 4) != 0 ) /*0x7755b3*/
    result = ((gamemd::Debug *)this)->Log(); /*0x7755ba*/
  if ( (a3 & 8) != 0 ) /*0x7755c5*/
    result = ((gamemd::Debug *)this)->Log(); /*0x7755cc*/
  if ( (a3 & 0x10) != 0 ) /*0x7755d7*/
    result = ((gamemd::Debug *)this)->Log(); /*0x7755de*/
  if ( (a3 & 0x20) != 0 ) /*0x7755e9*/
    result = ((gamemd::Debug *)this)->Log(); /*0x7755f0*/
  if ( (a3 & 0x40) != 0 ) /*0x7755fd*/
    return ((gamemd::Debug *)this)->Log(); /*0x775604*/
  return result; /*0x7755f8*/

}
} // namespace gamemd
// 0x775610
namespace gamemd {
WinModemClass * WinModemClass::QueryInterface(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x775610)
}
} // namespace gamemd