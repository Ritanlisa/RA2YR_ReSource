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
    v3 = *(void **)(&this->q0242); /*0x774996*/
    NumberOfBytesTransferred = 0; /*0x7749a4*/
    if ( GetOverlappedResult(v3, (LPOVERLAPPED)(&this->u32_100), &NumberOfBytesTransferred, 0) ) /*0x7749a8*/
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
      this->Debug::Log(); /*0x774a09*/
    }
  }
  ResetEvent(*(HANDLE *)(&this->q0146)); /*0x774a15*/
  cbInQue = 1; /*0x774a29*/
  if ( ClearCommError(*(HANDLE *)(&this->q0242), &Errors, &Stat) ) /*0x774a2e*/
  {
    v8 = Errors; /*0x774a38*/
    cbInQue = Stat.cbInQue; /*0x774a3c*/
    cbOutQue = Stat.cbOutQue; /*0x774a40*/
    v10 = Errors == 0; /*0x774a44*/
    this->q01C = Stat.cbInQue; /*0x774a46*/
    this->u32_20 = cbOutQue; /*0x774a49*/
    if ( !v10 ) /*0x774a4c*/
    {
      WinModemClass::LogCommErrors(v8, *(unsigned char *)&Stat, cbInQue, cbOutQue); /*0x774a62*/
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
    v11 = *(void **)(&this->q0242); /*0x774a86*/
    NumberOfBytesTransferred = 0; /*0x774a95*/
    v12 = ReadFile(v11, (LPVOID)(&this->u32_288), cbInQue, &NumberOfBytesTransferred, (LPOVERLAPPED)(&this->u32_100)); /*0x774a99*/
    v12 = v12; /*0x774aa1*/
    if ( !v12 ) /*0x774aa6*/
      break; /*0x774aa6*/
    if ( NumberOfBytesTransferred ) /*0x774aae*/
    {
      for ( i = 0; i < NumberOfBytesTransferred; ++i ) /*0x774ab0*/
      {
        *(unsigned char *)(this->q024 + this->u32_58) = *(unsigned char *)(i + &this->u32_288); /*0x774abf*/
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
  this->Debug::Log(); /*0x774b14*/
  return v16 != 0; /*0x7749fb*/
}
} // namespace gamemd
// 0x774B30
namespace gamemd {
int WinModemClass::ReadBytes(void (**this)() a1, WinModemClass * aP1, WinModemClass * aP2)
{
  int v4; // ebx
  int v5; // ebx
  void (*v8)(void); // eax

  if ( !WinModemClass::ReadSerial((int)this) ) /*0x774b37*/
    return 0; /*0x774ba9*/
  v4 = (char *)*(&this->q0082) - (char *)*(&this->q0081); /*0x774b46*/
  v5 = v4 + (v4 < 0 ? 0x2000 : 0);
  if ( v5 > a3 ) /*0x774b56*/
    v5 = a3; /*0x774b58*/
  if ( v5 <= 0 ) /*0x774b5c*/
    return v5; /*0x774ba2*/
  v5 = v5; /*0x774b63*/
  do /*0x774b96*/
  {
    v8 = *(&this->q0085); /*0x774b65*/
    if ( v8 ) /*0x774b6a*/
    {
      if ( *((unsigned char *)this->q024 + (unsigned int)*(&this->q0081)) != 13 ) /*0x774b78*/
        v8(); /*0x774b7a*/
    }
    *a2++ = *((unsigned char *)this->q024 + (unsigned int)*(&this->q0081)); /*0x774b86*/
    --v5; /*0x774b92*/
    *(&this->q0081) = (void (*)(void))(((uint16_t)*(&this->q0081) + 1) & 0x1FFF); /*0x774b93*/
  }
  while ( v5 ); /*0x774b96*/
  return v5; /*0x774b99*/
}
} // namespace gamemd
// 0x774C70
namespace gamemd {
int WinModemClass::WriteSerial(LPCVOID lpBuffer, WinModemClass * aP2)
{
  int result; // eax
  DWORD NumberOfBytesWritten; // [esp+4h] [ebp-4h] BYREF

  this->AsyncIO::WaitCompletion(); /*0x774c74*/
  result = WriteFile( /*0x774c90*/
             *(HANDLE *)(&this->q0242),
             lpBuffer,
             aP2,
             &NumberOfBytesWritten,
             (LPOVERLAPPED)(&this->u32_180));
  if ( !result ) /*0x774c98*/
  {
    result = GetLastError(); /*0x774c9a*/
    if ( result == 997 ) /*0x774ca5*/
      this->u8_51 = 1; /*0x774ca7*/
    else
      return Debug::Log("Writing to port handle failed with error %s\n", 0); /*0x774cb7*/
  }
  return result; /*0x774cab*/
}
} // namespace gamemd
// 0x774CD0
namespace gamemd {
WinModemClass * * WinModemClass::LoadTypeData(int a2, char * Str, int a4, WinModemClass * aP4)
{
  int v6; // ebx
  WinModemClass * v7;
  int (*v8)(void); // eax
  unsigned int result;
  int Bytes; // eax
  int v11; // esi
  int v12; // eax
  WinModemClass * v13;
  int v14; // eax
  char *v15; // esi
  char *v16; // eax
  int v17; // eax
  DWORD v19; // [esp+14h] [ebp-30h]
  DWORD Ticks; // [esp+20h] [ebp-24h]
  WinModemClass * v21;

  v6 = 0; /*0x774ce6*/
  this->Timer::GetTicks(); /*0x774ce1*/
  this->Timer::GetTicks(); /*0x774cf4*/
  memset(Str, 0, a4); /*0x774d0e*/
  v7 = aP4; /*0x774d24*/
  Ticks = this->Timer::GetTicks(); /*0x774d28*/
  v21 = aP4; /*0x774d30*/
  LABEL_2:
  v19 = this->Timer::GetTicks(); /*0x774d38*/
  while ( 1 )
  {
    v8 = (gamemd::WinModemClass **)((int (*)(void))this->q068);
    if ( v8 ) /*0x774d68*/
    {
      result = (unsigned int)((gamemd::WinModemClass **)((unsigned int)((gamemd::WinModemClass **)((unsigned int)((gamemd::WinModemClass **)((unsigned int)((gamemd::WinModemClass **)((unsigned int)((gamemd::WinModemClass **)((int)((gamemd::WinModemClass **)(v8()))))))))))));
      if ( result ) /*0x774d6e*/
        return result; /*0x774f2f*/
    }
    if ( !g_DDraw_Active ) /*0x774d7b*/
      return 0; /*0x774d7b*/
    Bytes = WinModemClass::ReadBytes((void (**)(void))this, &Str[v6], a4 - v6 < 0 ? 0 : a4 - v6);
    if ( Bytes ) /*0x774da0*/
    {
      v6 += Bytes; /*0x774da6*/
      Ticks = this->Timer::GetTicks(); /*0x774db1*/
      v21 = v7; /*0x774dc3*/
    }
    v11 = a2; /*0x774dcb*/
    if ( v19 != -1 ) /*0x774dd2*/
    {
      v12 = this->Timer::GetTicks() - v19; /*0x774ddd*/
      if ( v12 >= a2 ) /*0x774de3*/
        goto LABEL_20; /*0x774de3*/
      v11 = a2 - v12; /*0x774de5*/
    }
    if ( !v11 || v6 >= a4 ) /*0x774def*/
      goto LABEL_20; /*0x774def*/
    if ( strchr(Str, 13) ) /*0x774df4*/
    {
      if ( v7 == (gamemd::WinModemClass *)(-1) ) /*0x774e07*/
        goto LABEL_20; /*0x774e07*/
      v13 = v21; /*0x774e0d*/
      if ( Ticks != -1 ) /*0x774e14*/
      {
        v14 = this->Timer::GetTicks() - Ticks; /*0x774e1f*/
        if ( v14 >= (int)(v21) ) /*0x774e25*/
          goto LABEL_20; /*0x774e25*/
        v13 = v21 - v14; /*0x774e27*/
      }
      if ( !v13 ) /*0x774e2b*/
      {
  LABEL_20: Str[a4 - 1] = (char *)(0);
        v15 = (char *)(strstr(Str, word_832678));
        if ( v15 ) /*0x774e4c*/
        {
          if ( *Str == 65 && Str[1] == 84 && strchr(Str, 13) ) /*0x774e5d*/
            v15 = strchr(Str, 13); /*0x774e74*/
          if ( v15 ) /*0x774e78*/
            goto LABEL_38; /*0x774e78*/
        }
        if ( *Str == 13 || *Str == 10 ) /*0x774e83*/
        {
          v15 = strchr(Str, 13); /*0x774e90*/
          v16 = strchr(Str, 10); /*0x774e92*/
          if ( !v15 || v16 && v16 < v15 ) /*0x774ea4*/
            v15 = strchr(Str, 10); /*0x774eb1*/
          if ( v15 ) /*0x774eb5*/
          {
  LABEL_38:
            while ( *v15 == 13 || *v15 == 10 ) /*0x774ebf*/
              ++v15; /*0x774ec1*/
            if ( v15 != Str ) /*0x774ec6*/
            {
              memcpy(Str, v15, a4 - (v15 - Str)); /*0x774ed5*/
              v6 -= v15 - Str; /*0x774edd*/
              v7 = aP4; /*0x774edf*/
            }
            if ( v15 ) /*0x774ee5*/
            {
              goto LABEL_2; /*0x774eeb*/
            }
          }
        }
        if ( strrchr(Str, 13) ) /*0x774ef3*/
          *strrchr(Str, 13) = 0; /*0x774f0a*/
        result = a2; /*0x774f11*/
        if ( v19 != -1 ) /*0x774f1a*/
        {
          v17 = (gamemd::WinModemClass **)(this->Timer::GetTicks() - v19);
          if ( v17 < a2 ) /*0x774f2b*/
            return a2 - v17; /*0x774f38*/
          return 0; /*0x774f3b*/
        }
        return (gamemd::WinModemClass **)(result);
      }
    }
  }
}
} // namespace gamemd
// 0x774F50
namespace gamemd {
int WinModemClass::SaveToINI(const char * NumberOfBytesWritten)
{
  unsigned int v3; // kr18_4
  char Buffer[80]; // [esp+10h] [ebp-50h] BYREF

  this->Debug::Log(); /*0x774f5e*/
  strcpy(Buffer, aAtd); /*0x774f83*/
  if ( this->q060 ) /*0x774f87*/
  {
    this->Debug::Log(); /*0x774fd5*/
    strcat(Buffer, aP); /*0x775002*/
  }
  else
  {
    strcat(Buffer, g_Str_T); /*0x774fbd*/
    this->Debug::Log(); /*0x774fc6*/
  }
  this->Debug::Log(); /*0x775010*/
  strcat(Buffer, NumberOfBytesWritten); /*0x77503e*/
  this->Debug::Log(); /*0x775047*/
  strcat(Buffer, (const char *)&word_8327A0); /*0x775071*/
  this->Debug::Log(); /*0x775084*/
  v3 = strlen(Buffer) + 1; /*0x775095*/
  this->AsyncIO::WaitCompletion(); /*0x77509e*/
  if ( !WriteFile(*(HANDLE *)(&this->q0242), Buffer, v3 - 1, (LPDWORD)&NumberOfBytesWritten, (LPOVERLAPPED)(&this->u32_180)) ) /*0x7750b6*/
  {
    if ( GetLastError() == 997 ) /*0x7750cb*/
    {
      this->u8_51 = 1; /*0x7750cf*/
      return this->AsyncIO::WaitCompletion(); /*0x7750df*/
    }
    this->Debug::Log(); /*0x7750e9*/
  }
  return this->AsyncIO::WaitCompletion(); /*0x7750d8*/
}
} // namespace gamemd
// 0x775110
namespace gamemd {
AbstractClass * * WinModemClass::Dial(const char * a2, unsigned char a3, char * Destination, signed int Count, int a6, int a7, int a8)
{
  unsigned int v9; // kr0C_4
  DWORD v10; // ecx
  int v11; // edx
  int v12; // esi
  DWORD v13; // eax
  signed int v14; // eax
  int v15; // esi
  DWORD v17; // eax
  signed int v18; // eax
  int v19; // esi
  signed int v21; // eax
  size_t v22; // eax
  unsigned int v24;
  int i; // [esp+10h] [ebp-108h] BYREF
  DWORD Ticks; // [esp+14h] [ebp-104h]
  DWORD v28; // [esp+20h] [ebp-F8h] BYREF
  DWORD NumberOfBytesWritten; // [esp+24h] [ebp-F4h] BYREF
  char Str[80]; // [esp+28h] [ebp-F0h] BYREF
  char Buffer[80]; // [esp+78h] [ebp-A0h] BYREF
  unsigned char v32[80]; // [esp+C8h] [ebp-50h] BYREF

  IDA_LOWORD(i) = a3; /*0x77512a*/
  strcpy(Buffer, a2); /*0x77514b*/
  strcat(Buffer, (const char *)&i); /*0x77517a*/
  WinModemClass::ReadBytes(v32, 80); /*0x77518d*/
  Sleep(0x64u); /*0x775194*/
  WinModemClass::ReadBytes(v32, 80); /*0x7751a6*/
  for ( i = 0; i < a7; ++i ) /*0x7751bc*/
  {
    Ticks = this->Timer::GetTicks(); /*0x7751d1*/
    v9 = strlen(Buffer) + 1; /*0x7751de*/
    a6 = a6; /*0x7751ea*/
    this->AsyncIO::WaitCompletion(); /*0x7751f2*/
    if ( !WriteFile(*(HANDLE *)(&this->q0242), Buffer, v9 - 1, &NumberOfBytesWritten, (LPOVERLAPPED)(&this->u32_180)) ) /*0x77520d*/
    {
      if ( GetLastError() == 997 ) /*0x77521e*/
        this->u8_51 = 1; /*0x775220*/
      else
        this->Debug::Log(); /*0x77522d*/
    }
    this->AsyncIO::WaitCompletion(); /*0x775237*/
    v10 = Ticks; /*0x77523c*/
    v11 = a6; /*0x775240*/
    v12 = a6; /*0x775247*/
    if ( Ticks == -1 ) /*0x775249*/
    {
      v15 = a6; /*0x77526a*/
    }
    else
    {
      v13 = this->Timer::GetTicks(); /*0x77524f*/
      v10 = Ticks; /*0x775254*/
      v14 = v13 - Ticks; /*0x775258*/
      if ( v14 >= v12 ) /*0x77525c*/
        return 0; /*0x77525c*/
      v11 = a6; /*0x775262*/
      v15 = v12 - v14; /*0x775266*/
    }
    if ( v15 <= 0 ) /*0x77526e*/
      return 0; /*0x77526e*/
    v11 = v11; /*0x775277*/
    if ( v10 == -1 ) /*0x775279*/
    {
      v19 = v11; /*0x775296*/
    }
    else
    {
      v17 = this->Timer::GetTicks(); /*0x77527f*/
      v10 = Ticks; /*0x775284*/
      v18 = v17 - Ticks; /*0x775288*/
      if ( v18 >= v11 ) /*0x77528c*/
        goto LABEL_16; /*0x77528c*/
      v11 = a6; /*0x77528e*/
      v19 = v11 - v18; /*0x775292*/
    }
    if ( v19 < 1 ) /*0x77529b*/
    {
  LABEL_16:
      v11 = 1; /*0x77529d*/
      goto LABEL_21; /*0x7752a2*/
    }
    v11 = v11; /*0x7752a7*/
    if ( v10 != -1 ) /*0x7752a9*/
    {
      v21 = this->Timer::GetTicks() - Ticks; /*0x7752b4*/
      if (v21 >= v11, unsigned int a0) /*0x7752ba*/
        v11 = 0; /*0x7752c2*/
      else
        v11 = v11 - v21; /*0x7752be*/
    }
  LABEL_21:
    memset(Str, 0, sizeof(Str)); /*0x7752cf*/
    (*(void (**)(int, int, char *, int, int))(((unsigned int)(this->q0080))))(this, v11, Str, 80, a8); /*0x7752e6*/
    if ( !strcmp(Str, a0) ) /*0x77531d*/
      return 3; /*0x775437*/
    if ( strstr(Str, g_INI_Key_OK) ) /*0x77532d*/
      return 2; /*0x775337*/
    if ( strstr(Str, aError) ) /*0x775347*/
      return 1; /*0x775449*/
    if ( strlen(Str) == 3 /*0x77538a*/
      && Str[0] >= 48
      && Str[0] <= 57
      && Str[1] >= 48
      && Str[1] <= 57
      && Str[2] >= 48
      && Str[2] <= 57 )
    {
      v24 = (unsigned int)((gamemd::AbstractClass **)((unsigned int)((gamemd::AbstractClass **)((unsigned int)((gamemd::AbstractClass **)((unsigned int)((gamemd::AbstractClass **)((unsigned int)((gamemd::AbstractClass **)((size_t)((gamemd::AbstractClass **)(Count))))))))))));
      if ( Count >= 80 ) /*0x775456*/
        v24 = 80; /*0x775458*/
      strncpy(Destination, Str, v24); /*0x77546b*/
      return 2; /*0x775482*/
    }
    v22 = Count; /*0x775390*/
    if ( Count >= 80 ) /*0x77539a*/
      v22 = 80; /*0x77539c*/
    strncpy(Destination, Str, v22); /*0x7753af*/
    Sleep(0x64u); /*0x7753bf*/
    this->AsyncIO::WaitCompletion(); /*0x7753c3*/
    if ( !WriteFile(*(HANDLE *)(&this->q0242), &word_8327A0, 1u, &v28, (LPOVERLAPPED)(&this->u32_180)) ) /*0x7753dc*/
    {
      if ( GetLastError() == 997 ) /*0x7753ed*/
        this->u8_51 = 1; /*0x7753ef*/
      else
        this->Debug::Log(); /*0x7753fc*/
    }
    this->AsyncIO::WaitCompletion(); /*0x775406*/
    Sleep(0x64u); /*0x77540d*/
  }
  return 0; /*0x775428*/
}
} // namespace gamemd
// 0x7754A0
namespace gamemd {
int WinModemClass::ddtor(int a2)
{
  *(&this->q0085) = a2; /*0x7754a4*/
  return a2; /*0x7754a7*/
}
} // namespace gamemd
// 0x7754B0
namespace gamemd {
int WinModemClass::HangUp(int a2)
{
  *(&this->q0086) = a2; /*0x7754b4*/
  return a2; /*0x7754b7*/
}
} // namespace gamemd
// 0x7754D0
namespace gamemd {
int WinModemClass::LogCommErrors(NullModemClass * aP1, char a3, int a4, int a5)
{
  int result; // eax

  if ( aP1 ) /*0x7754da*/
  {
    if ( ((unsigned int)(aP1)& 8) != 0 ) /*0x7754e3*/
    {
      this->Debug::Log(); /*0x7754ea*/
      result = this->WinModemClass_field_0x04 + 1; /*0x7754f5*/
      this->WinModemClass_field_0x04 = result; /*0x7754f6*/
    }
    if ( ((unsigned int)(aP1)& 0x10) != 0 ) /*0x7754fc*/
      result = this->Debug::Log(); /*0x775503*/
    if ( ((unsigned int)(aP1)& 0x400) != 0 ) /*0x77550e*/
    {
      this->Debug::Log(); /*0x775515*/
      result = this->WinModemClass_field_0x08 + 1; /*0x775520*/
      this->WinModemClass_field_0x08 = result; /*0x775521*/
    }
    if ( ((unsigned int)(aP1)& 2) != 0 ) /*0x775527*/
    {
      this->Debug::Log(); /*0x77552e*/
      result = this->WinModemClass_field_0x0C + 1; /*0x775539*/
      this->WinModemClass_field_0x0C = result; /*0x77553a*/
    }
    if ( ((unsigned int)(aP1)& 1) != 0 ) /*0x775540*/
    {
      this->Debug::Log(); /*0x775547*/
      result = this->WinModemClass_field_0x10 + 1; /*0x775552*/
      this->WinModemClass_field_0x10 = result; /*0x775553*/
    }
    if ( ((unsigned int)(aP1)& 4) != 0 ) /*0x775559*/
    {
      this->Debug::Log(); /*0x775560*/
      result = this->WinModemClass_field_0x14 + 1; /*0x77556b*/
      this->WinModemClass_field_0x14 = result; /*0x77556c*/
    }
    if ( ((unsigned int)(aP1)& 0x100) != 0 ) /*0x775572*/
    {
      this->Debug::Log(); /*0x775579*/
      result = this->WinModemClass_field_0x18 + 1; /*0x775584*/
      this->WinModemClass_field_0x18 = result; /*0x775585*/
    }
  }
  if ( (a3 & 1) != 0 ) /*0x77558f*/
    result = this->Debug::Log(); /*0x775596*/
  if ( (a3 & 2) != 0 ) /*0x7755a1*/
    result = this->Debug::Log(); /*0x7755a8*/
  if ( (a3 & 4) != 0 ) /*0x7755b3*/
    result = this->Debug::Log(); /*0x7755ba*/
  if ( (a3 & 8) != 0 ) /*0x7755c5*/
    result = this->Debug::Log(); /*0x7755cc*/
  if ( (a3 & 0x10) != 0 ) /*0x7755d7*/
    result = this->Debug::Log(); /*0x7755de*/
  if ( (a3 & 0x20) != 0 ) /*0x7755e9*/
    result = this->Debug::Log(); /*0x7755f0*/
  if ( (a3 & 0x40) != 0 ) /*0x7755fd*/
    return this->Debug::Log(); /*0x775604*/
  return result; /*0x7755f8*/
}
} // namespace gamemd
// 0x775610
namespace gamemd {
WinModemClass * WinModemClass::QueryInterface(char a2)
{
  void * v3;

  v3 = (void *)(this->q05C);
  if ( v3 != (void *)(-1) ) /*0x77561f*/
  {
    this->Debug::Log(); /*0x775626*/
    CloseHandle(this->q05C); /*0x775632*/
    this->q05C = -1; /*0x775638*/
  }
  if ( this->q024 ) /*0x77563f*/
    RA2_OPDEL(this->q024); /*0x775647*/
  if ( (a2 & 1) != 0 ) /*0x775654*/
    RA2_OPDEL(); /*0x775657*/
  return this; /*0x775661*/
}
} // namespace gamemd