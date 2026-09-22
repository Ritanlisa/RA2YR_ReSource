// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x774980
bool WinModemClass::ReadSerial()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall WinModemClass::ReadSerial(int this)
{
  char v2; // al
  void *v3; // edx
  DWORD v4; // ecx
  DWORD v5; // eax
  int cbInQue; // edi
  NullModemClass *v8; // ecx
  DWORD cbOutQue; // eax
  bool v10; // zf
  void *v11; // ecx
  BOOL v12; // eax
  bool v13; // dl
  DWORD i; // eax
  DWORD NumberOfBytesTransferred; // [esp+10h] [ebp-18h] BYREF
  DWORD v16; // [esp+14h] [ebp-14h]
  DWORD Errors; // [esp+18h] [ebp-10h] BYREF
  struct _COMSTAT Stat; // [esp+1Ch] [ebp-Ch] BYREF

  v2 = *(_BYTE *)(this + 80); /*0x77498b*/
  v16 = 0; /*0x77498e*/
  if ( v2 ) /*0x774994*/
  {
    v3 = *(void **)(this + 92); /*0x774996*/
    NumberOfBytesTransferred = 0; /*0x7749a4*/
    if ( GetOverlappedResult(v3, (LPOVERLAPPED)(this + 40), &NumberOfBytesTransferred, 0) ) /*0x7749a8*/
    {
      v4 = NumberOfBytesTransferred; /*0x7749b2*/
      *(_BYTE *)(this + 80) = 0; /*0x7749b6*/
      if ( v4 ) /*0x7749bb*/
      {
        v5 = 0; /*0x7749bd*/
        do /*0x7749e4*/
        {
          *(_BYTE *)(this->WinModemClass_field_0x24 + *(_DWORD *)(this + 88)) = *(_BYTE *)(this + v5++ + 108); /*0x7749cd*/
          *(_DWORD *)(this + 88) = ((unsigned __int16)*(_DWORD *)(this + 88) + 1) & 0x1FFF; /*0x7749db*/
        }
        while ( v5 < NumberOfBytesTransferred ); /*0x7749e4*/
        v16 = NumberOfBytesTransferred; /*0x7749e6*/
      }
    }
    else
    {
      if ( GetLastError() == 996 ) /*0x7749f7*/
        return 0; /*0x774a02*/
      Debug::Log(); /*0x774a09*/
    }
  }
  ResetEvent(*(HANDLE *)(this + 56)); /*0x774a15*/
  cbInQue = 1; /*0x774a29*/
  if ( ClearCommError(*(HANDLE *)(this + 92), &Errors, &Stat) ) /*0x774a2e*/
  {
    v8 = (NullModemClass *)Errors; /*0x774a38*/
    cbInQue = Stat.cbInQue; /*0x774a3c*/
    cbOutQue = Stat.cbOutQue; /*0x774a40*/
    v10 = Errors == 0; /*0x774a44*/
    this->WinModemClass_field_0x1C = Stat.cbInQue; /*0x774a46*/
    this->WinModemClass_field_0x20 = cbOutQue; /*0x774a49*/
    if ( !v10 ) /*0x774a4c*/
    {
      WinModemClass::LogCommErrors((_DWORD *)this, v8, *(_BYTE *)&Stat, cbInQue, cbOutQue); /*0x774a62*/
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
    v11 = *(void **)(this + 92); /*0x774a86*/
    NumberOfBytesTransferred = 0; /*0x774a95*/
    v12 = ReadFile(v11, (LPVOID)(this + 108), cbInQue, &NumberOfBytesTransferred, (LPOVERLAPPED)(this + 40)); /*0x774a99*/
    v13 = v12; /*0x774aa1*/
    if ( !v12 ) /*0x774aa6*/
      break; /*0x774aa6*/
    if ( NumberOfBytesTransferred ) /*0x774aae*/
    {
      for ( i = 0; i < NumberOfBytesTransferred; ++i ) /*0x774ab0*/
      {
        *(_BYTE *)(this->WinModemClass_field_0x24 + *(_DWORD *)(this + 88)) = *(_BYTE *)(i + this + 108); /*0x774abf*/
        *(_DWORD *)(this + 88) = ((unsigned __int16)*(_DWORD *)(this + 88) + 1) & 0x1FFF; /*0x774acd*/
      }
      v16 += NumberOfBytesTransferred; /*0x774ada*/
    }
    cbInQue = 1; /*0x774ae1*/
    if ( !v13 ) /*0x774ae6*/
      return v16 != 0; /*0x774ae6*/
  }
  if ( GetLastError() == 997 ) /*0x774af5*/
  {
    v10 = v16 == 0; /*0x774afd*/
    *(_BYTE *)(this + 80) = 1; /*0x774aff*/
    return !v10; /*0x774b0d*/
  }
  Debug::Log(); /*0x774b14*/
  return v16 != 0; /*0x7749fb*/
}
}

// 0x774B30
int WinModemClass::ReadBytes(void (**this)() a1, WinModemClass * aP1, WinModemClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WinModemClass::ReadBytes(void (**this)(), WinModemClass *aP1, WinModemClass *aP2)
{
  int v4; // ebx
  WinModemClass *v5; // ebx
  WinModemClass *v7; // ebp
  void (*v8)(void); // eax

  if ( !WinModemClass::ReadSerial((int)this) ) /*0x774b37*/
    return 0; /*0x774ba9*/
  v4 = (char *)this->q016 - (char *)this->q015; /*0x774b46*/
  v5 = (WinModemClass *)(v4 + (v4 < 0 ? 0x2000 : 0));
  if ( (int)v5 > (int)aP2 ) /*0x774b56*/
    v5 = aP2; /*0x774b58*/
  if ( (int)v5 <= 0 ) /*0x774b5c*/
    return (int)v5->__pad_0; /*0x774ba2*/
  v7 = v5; /*0x774b63*/
  do /*0x774b96*/
  {
    v8 = this->Member100; /*0x774b65*/
    if ( v8 ) /*0x774b6a*/
    {
      if ( *((_BYTE *)this->q024 + (_DWORD)this->q015) != 13 ) /*0x774b78*/
        v8(); /*0x774b7a*/
    }
    aP1 = (WinModemClass *)((char *)aP1 + 1); /*0x774b82*/
    HIBYTE(aP1[-1].WinModemClass_field_0x38) = *((_BYTE *)this->q024 + (_DWORD)this->q015); /*0x774b86*/
    v7 = (WinModemClass *)((char *)v7 - 1); /*0x774b92*/
    this->q015 = (void (*)())(((unsigned __int16)this->q015 + 1) & 0x1FFF); /*0x774b93*/
  }
  while ( v7 ); /*0x774b96*/
  return (int)v5->__pad_0; /*0x774b99*/
}
}

// 0x774C70
int WinModemClass::WriteSerial(LPCVOID lpBuffer, WinModemClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WinModemClass::WriteSerial(int this, LPCVOID lpBuffer, WinModemClass *aP2)
{
  int result; // eax
  DWORD NumberOfBytesWritten; // [esp+4h] [ebp-4h] BYREF

  AsyncIO::WaitCompletion(this); /*0x774c74*/
  result = WriteFile(*(HANDLE *)(this + 92), lpBuffer, (DWORD)aP2, &NumberOfBytesWritten, (LPOVERLAPPED)(this + 60)); /*0x774c90*/
  if ( !result ) /*0x774c98*/
  {
    result = GetLastError(); /*0x774c9a*/
    if ( result == 997 ) /*0x774ca5*/
      *(_BYTE *)(this + 81) = 1; /*0x774ca7*/
    else
      Debug::Log(); /*0x774cb7*/
  }
  return result; /*0x774cab*/
}
}

// 0x774CD0
int WinModemClass::LoadTypeData(int a2, char * Str, int a4, WinModemClass * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WinModemClass::LoadTypeData(WinModemClass *this, int a2, char *Str, int a4, WinModemClass *aP4)
{
  WinModemClass *v5; // esi
  int v6; // ebx
  WinModemClass *v7; // edi
  int (*WinModemClass_field_0x2C)(void); // eax
  int result; // eax
  int Bytes; // eax
  int v11; // esi
  int v12; // eax
  WinModemClass *v13; // esi
  int v14; // eax
  AbstractClass *v15; // esi
  char *v16; // eax
  int v17; // eax
  DWORD v19; // [esp+14h] [ebp-30h]
  DWORD Ticks; // [esp+20h] [ebp-24h]
  WinModemClass *v21; // [esp+28h] [ebp-1Ch]

  v5 = this; /*0x774cd6*/
  v6 = 0; /*0x774ce6*/
  Timer::GetTicks(); /*0x774ce1*/
  Timer::GetTicks(); /*0x774cf4*/
  memset(Str, 0, a4); /*0x774d0e*/
  v7 = aP4; /*0x774d24*/
  Ticks = Timer::GetTicks(); /*0x774d28*/
  v21 = aP4; /*0x774d30*/
LABEL_2:
  v19 = Timer::GetTicks(); /*0x774d38*/
  while ( 1 )
  {
    WinModemClass_field_0x2C = (int (*)(void))v5[1].WinModemClass_field_0x2C; /*0x774d63*/
    if ( WinModemClass_field_0x2C ) /*0x774d68*/
    {
      result = WinModemClass_field_0x2C(); /*0x774d6a*/
      if ( result ) /*0x774d6e*/
        return result; /*0x774f2f*/
    }
    if ( !HouseClass_Player.__pad_5568[23244] ) /*0x774d7b*/
      return 0; /*0x774d7b*/
    Bytes = WinModemClass::ReadBytes(
              (void (**)())v5,
              (WinModemClass *)&Str[v6],
              a4 - v6 < 0 ? 0 : (WinModemClass *)(a4 - v6));
    if ( Bytes ) /*0x774da0*/
    {
      v6 += Bytes; /*0x774da6*/
      Ticks = Timer::GetTicks(); /*0x774db1*/
      v21 = v7; /*0x774dc3*/
    }
    v11 = a2; /*0x774dcb*/
    if ( v19 != -1 ) /*0x774dd2*/
    {
      v12 = Timer::GetTicks() - v19; /*0x774ddd*/
      if ( v12 >= a2 ) /*0x774de3*/
        goto LABEL_20; /*0x774de3*/
      v11 = a2 - v12; /*0x774de5*/
    }
    if ( !v11 || v6 >= a4 ) /*0x774def*/
      goto LABEL_20; /*0x774def*/
    if ( strchr(Str, 13) ) /*0x774df4*/
    {
      if ( v7 == (WinModemClass *)-1 ) /*0x774e07*/
        goto LABEL_20; /*0x774e07*/
      v13 = v21; /*0x774e0d*/
      if ( Ticks != -1 ) /*0x774e14*/
      {
        v14 = Timer::GetTicks() - Ticks; /*0x774e1f*/
        if ( v14 >= (int)v21 ) /*0x774e25*/
          goto LABEL_20; /*0x774e25*/
        v13 = (WinModemClass *)((char *)v21 - v14); /*0x774e27*/
      }
      if ( !v13 ) /*0x774e2b*/
      {
LABEL_20:
        Str[a4 - 1] = 0; /*0x774e31*/
        v15 = (AbstractClass *)strstr((ObjectClass *)Str, &stru_830620.__pad_14B0[2984]); /*0x774e45*/
        if ( v15 ) /*0x774e4c*/
        {
          if ( *Str == 65 && Str[1] == 84 && strchr(Str, 13) ) /*0x774e5d*/
            v15 = (AbstractClass *)strchr(Str, 13); /*0x774e74*/
          if ( v15 ) /*0x774e78*/
            goto LABEL_38; /*0x774e78*/
        }
        if ( *Str == 13 || *Str == 10 ) /*0x774e83*/
        {
          v15 = (AbstractClass *)strchr(Str, 13); /*0x774e90*/
          v16 = strchr(Str, 10); /*0x774e92*/
          if ( !v15 || v16 && v16 < (char *)v15 ) /*0x774ea4*/
            v15 = (AbstractClass *)strchr(Str, 10); /*0x774eb1*/
          if ( v15 ) /*0x774eb5*/
          {
LABEL_38:
            while ( v15->__pad_0[0] == 13 || v15->__pad_0[0] == 10 ) /*0x774ebf*/
              v15 = (AbstractClass *)((char *)v15 + 1); /*0x774ec1*/
            if ( v15 != (AbstractClass *)Str ) /*0x774ec6*/
            {
              memcpy(Str, v15, a4 - ((char *)v15 - Str)); /*0x774ed5*/
              v6 -= (char *)v15 - Str; /*0x774edd*/
              v7 = aP4; /*0x774edf*/
            }
            if ( v15 ) /*0x774ee5*/
            {
              v5 = this; /*0x774ee7*/
              goto LABEL_2; /*0x774eeb*/
            }
          }
        }
        if ( strrchr(Str, 13) ) /*0x774ef3*/
          *strrchr(Str, 13) = 0; /*0x774f0a*/
        result = a2; /*0x774f11*/
        if ( v19 != -1 ) /*0x774f1a*/
        {
          v17 = Timer::GetTicks() - v19; /*0x774f25*/
          if ( v17 < a2 ) /*0x774f2b*/
            return a2 - v17; /*0x774f38*/
          return 0; /*0x774f3b*/
        }
        return result; /*0x774f1a*/
      }
    }
    v5 = this; /*0x774d5f*/
  }
}
}

// 0x774F50
BOOL WinModemClass::SaveToINI(const char * NumberOfBytesWritten)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall WinModemClass::_vt06(int this, const char *NumberOfBytesWritten)
{
  unsigned int v3; // kr18_4
  char Buffer[80]; // [esp+10h] [ebp-50h] BYREF

  Debug::Log(); /*0x774f5e*/
  strcpy(Buffer, aAtd); /*0x774f83*/
  if ( *(_DWORD *)(this + 96) ) /*0x774f87*/
  {
    Debug::Log(); /*0x774fd5*/
    strcat(Buffer, MEMORY[0x83ED58]); /*0x775002*/
  }
  else
  {
    strcat(Buffer, MEMORY[0x83ED5C]); /*0x774fbd*/
    Debug::Log(); /*0x774fc6*/
  }
  Debug::Log(); /*0x775010*/
  strcat(Buffer, NumberOfBytesWritten); /*0x77503e*/
  Debug::Log(); /*0x775047*/
  strcat(Buffer, (const char *)&MEMORY[0x8327A0]); /*0x775071*/
  Debug::Log(); /*0x775084*/
  v3 = strlen(Buffer) + 1; /*0x775095*/
  AsyncIO::WaitCompletion(this); /*0x77509e*/
  if ( !WriteFile(*(HANDLE *)(this + 92), Buffer, v3 - 1, (LPDWORD)&NumberOfBytesWritten, (LPOVERLAPPED)(this + 60)) ) /*0x7750b6*/
  {
    if ( GetLastError() == 997 ) /*0x7750cb*/
    {
      *(_BYTE *)(this + 81) = 1; /*0x7750cf*/
      return AsyncIO::WaitCompletion(this); /*0x7750df*/
    }
    Debug::Log(); /*0x7750e9*/
  }
  return AsyncIO::WaitCompletion(this); /*0x7750d8*/
}
}

// 0x775110
int WinModemClass::Dial(const char * a2, unsigned char a3, char * Destination, signed int Count, int a6, int a7, int a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WinModemClass::Dial(
        int this,
        const char *a2,
        unsigned __int8 a3,
        char *Destination,
        signed int Count,
        int a6,
        int a7,
        int a8)
{
  unsigned int v9; // kr0C_4
  ObjectClass *v10; // ecx
  int v11; // edx
  int v12; // esi
  DWORD v13; // eax
  signed int v14; // eax
  int v15; // esi
  int v16; // esi
  DWORD v17; // eax
  signed int v18; // eax
  int v19; // esi
  signed int v20; // esi
  signed int v21; // eax
  size_t v22; // eax
  size_t v24; // eax
  int i; // [esp+10h] [ebp-108h] BYREF
  ObjectClass *Ticks; // [esp+14h] [ebp-104h]
  int v27; // [esp+1Ch] [ebp-FCh]
  DWORD v28; // [esp+20h] [ebp-F8h] BYREF
  DWORD NumberOfBytesWritten; // [esp+24h] [ebp-F4h] BYREF
  char Str[80]; // [esp+28h] [ebp-F0h] BYREF
  char Buffer[80]; // [esp+78h] [ebp-A0h] BYREF
  WinModemClass aP1; // [esp+C8h] [ebp-50h] BYREF

  LOWORD(i) = a3; /*0x77512a*/
  strcpy(Buffer, a2); /*0x77514b*/
  strcat(Buffer, (const char *)&i); /*0x77517a*/
  WinModemClass::ReadBytes((void (**)())this, &aP1, (WinModemClass *)0x50); /*0x77518d*/
  Sleep(0x64u); /*0x775194*/
  WinModemClass::ReadBytes((void (**)())this, &aP1, (WinModemClass *)0x50); /*0x7751a6*/
  for ( i = 0; i < a7; ++i ) /*0x7751bc*/
  {
    Ticks = (ObjectClass *)Timer::GetTicks(); /*0x7751d1*/
    v9 = strlen(Buffer) + 1; /*0x7751de*/
    v27 = a6; /*0x7751ea*/
    AsyncIO::WaitCompletion(this); /*0x7751f2*/
    if ( !WriteFile(*(HANDLE *)(this + 92), Buffer, v9 - 1, &NumberOfBytesWritten, (LPOVERLAPPED)(this + 60)) ) /*0x77520d*/
    {
      if ( GetLastError() == 997 ) /*0x77521e*/
        *(_BYTE *)(this + 81) = 1; /*0x775220*/
      else
        Debug::Log(); /*0x77522d*/
    }
    AsyncIO::WaitCompletion(this); /*0x775237*/
    v10 = Ticks; /*0x77523c*/
    v11 = v27; /*0x775240*/
    v12 = v27; /*0x775247*/
    if ( Ticks == (ObjectClass *)-1 ) /*0x775249*/
    {
      v15 = v27; /*0x77526a*/
    }
    else
    {
      v13 = Timer::GetTicks(); /*0x77524f*/
      v10 = Ticks; /*0x775254*/
      v14 = v13 - (_DWORD)Ticks; /*0x775258*/
      if ( v14 >= v12 ) /*0x77525c*/
        return 0; /*0x77525c*/
      v11 = v27; /*0x775262*/
      v15 = v12 - v14; /*0x775266*/
    }
    if ( v15 <= 0 ) /*0x77526e*/
      return 0; /*0x77526e*/
    v16 = v11; /*0x775277*/
    if ( v10 == (ObjectClass *)-1 ) /*0x775279*/
    {
      v19 = v11; /*0x775296*/
    }
    else
    {
      v17 = Timer::GetTicks(); /*0x77527f*/
      v10 = Ticks; /*0x775284*/
      v18 = v17 - (_DWORD)Ticks; /*0x775288*/
      if ( v18 >= v16 ) /*0x77528c*/
        goto LABEL_16; /*0x77528c*/
      v11 = v27; /*0x77528e*/
      v19 = v16 - v18; /*0x775292*/
    }
    if ( v19 < 1 ) /*0x77529b*/
    {
LABEL_16:
      v11 = 1; /*0x77529d*/
      goto LABEL_21; /*0x7752a2*/
    }
    v20 = v11; /*0x7752a7*/
    if ( v10 != (ObjectClass *)-1 ) /*0x7752a9*/
    {
      v21 = Timer::GetTicks() - (_DWORD)Ticks; /*0x7752b4*/
      if ( v21 >= v20 ) /*0x7752ba*/
        v11 = 0; /*0x7752c2*/
      else
        v11 = v20 - v21; /*0x7752be*/
    }
LABEL_21:
    memset(Str, 0, sizeof(Str)); /*0x7752cf*/
    (*(void (__thiscall **)(int, int, char *, int, int))(this->q014)(this, v11, Str, 80, a8); /*0x7752e6*/
    if ( !strcmp(Str, &g_INI_Key_Lighting.__pad_20[4]) ) /*0x77531d*/
      return 3; /*0x775437*/
    if ( strstr(Str, MEMORY[0x81FD14]) ) /*0x77532d*/
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
      v24 = Count; /*0x77544c*/
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
    AsyncIO::WaitCompletion(this); /*0x7753c3*/
    if ( !WriteFile(*(HANDLE *)(this + 92), &stru_830620.__pad_14B0[3280], 1u, &v28, (LPOVERLAPPED)(this + 60)) ) /*0x7753dc*/
    {
      if ( GetLastError() == 997 ) /*0x7753ed*/
        *(_BYTE *)(this + 81) = 1; /*0x7753ef*/
      else
        Debug::Log(); /*0x7753fc*/
    }
    AsyncIO::WaitCompletion(this); /*0x775406*/
    Sleep(0x64u); /*0x77540d*/
  }
  return 0; /*0x775428*/
}
}

// 0x7754A0
int WinModemClass::ddtor(int a2)
{
    this->Member100 = a2;
    return a2;
}
}

// 0x7754B0
int WinModemClass::HangUp(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WinModemClass::_vt09(_DWORD *this, int a2)
{
  this->q068 = a2; /*0x7754b4*/
  return a2; /*0x7754b7*/
}
}

// 0x7754D0
int WinModemClass::LogCommErrors(NullModemClass * aP1, char a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WinModemClass::LogCommErrors(_DWORD *this, NullModemClass *aP1, char a3, int a4, int a5)
{
  int result; // eax

  if ( aP1 ) /*0x7754da*/
  {
    if ( ((unsigned __int8)aP1 & 8) != 0 ) /*0x7754e3*/
    {
      Debug::Log(); /*0x7754ea*/
      result = this->q004 + 1; /*0x7754f5*/
      this->q004 = result; /*0x7754f6*/
    }
    if ( ((unsigned __int8)aP1 & 0x10) != 0 ) /*0x7754fc*/
      Debug::Log(); /*0x775503*/
    if ( (BYTE1(aP1) & 4) != 0 ) /*0x77550e*/
    {
      Debug::Log(); /*0x775515*/
      result = this->q008 + 1; /*0x775520*/
      this->q008 = result; /*0x775521*/
    }
    if ( ((unsigned __int8)aP1 & 2) != 0 ) /*0x775527*/
    {
      Debug::Log(); /*0x77552e*/
      result = this->q00C + 1; /*0x775539*/
      this->q00C = result; /*0x77553a*/
    }
    if ( ((unsigned __int8)aP1 & 1) != 0 ) /*0x775540*/
    {
      Debug::Log(); /*0x775547*/
      result = this->q010 + 1; /*0x775552*/
      this->q010 = result; /*0x775553*/
    }
    if ( ((unsigned __int8)aP1 & 4) != 0 ) /*0x775559*/
    {
      Debug::Log(); /*0x775560*/
      result = this->q014 + 1; /*0x77556b*/
      this->q014 = result; /*0x77556c*/
    }
    if ( (BYTE1(aP1) & 1) != 0 ) /*0x775572*/
    {
      Debug::Log(); /*0x775579*/
      result = this->q018 + 1; /*0x775584*/
      this->q018 = result; /*0x775585*/
    }
  }
  if ( (a3 & 1) != 0 ) /*0x77558f*/
    Debug::Log(); /*0x775596*/
  if ( (a3 & 2) != 0 ) /*0x7755a1*/
    Debug::Log(); /*0x7755a8*/
  if ( (a3 & 4) != 0 ) /*0x7755b3*/
    Debug::Log(); /*0x7755ba*/
  if ( (a3 & 8) != 0 ) /*0x7755c5*/
    Debug::Log(); /*0x7755cc*/
  if ( (a3 & 0x10) != 0 ) /*0x7755d7*/
    Debug::Log(); /*0x7755de*/
  if ( (a3 & 0x20) != 0 ) /*0x7755e9*/
    Debug::Log(); /*0x7755f0*/
  if ( (a3 & 0x40) != 0 ) /*0x7755fd*/
    Debug::Log(); /*0x775604*/
  return result; /*0x7755f8*/
}
}

// 0x775610
WinModemClass * WinModemClass::QueryInterface(char a2)
{
{
    int v3;
    v3 = *((int *)(this) + 23);
    *(int *)this = &vt_WinModemClass;
    if ( v3 != -1 )
  {
    Debug::Log();
    CloseHandle(*((HANDLE *)(this) + 23));
    *((int *)(this) + 23) = -1;
  }
    if ( *(int *)(this + 36) )
    __3_YAXPAX_Z(*((void **)(this) + 9));
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (WinModemClass *)this;
}
}
