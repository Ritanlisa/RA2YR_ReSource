// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WonlineStringDialogControl_12_e4.hpp"
#include "e4/classes/WonlineStringDialogControl_28_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"

// 0x7AC630
namespace gamemd {
void * WonlineStringDialogControl_12::Constructor_WonlineStringDialogControl(char a2)
{
  *this = &WonlineStringDialogControl::`vftable'; /*0x7ac636*/
  DeleteAndZero(this + 3); /*0x7ac63c*/
  *this = &off_7F7624; /*0x7ac643*/
  OwnerDrawControl::InitVtable(this); /*0x7ac649*/
  if ( (a2 & 1) != 0 ) /*0x7ac653*/
    __3_YAXPAX_Z(this); /*0x7ac656*/
  return this; /*0x7ac660*/
}
}
// 0x7AD690
namespace gamemd {
int WonlineStringDialogControl_28::QueryInterface(char * a1, unsigned int * a2, char ** a3)
{
  _UNKNOWN **v3; // esi
  int result; // eax
  _DWORD *v5; // eax
  BOOL v6; // ebp
  int (__stdcall *v7)(char *, _DWORD *, char **, void *); // eax
  void *v8; // eax
  char *v9; // esi

  v3 = &off_7F7638; /*0x7ad69a*/
  if ( !a3 ) /*0x7ad69f*/
    return -2147467261; /*0x7ad6aa*/
  *a3 = 0; /*0x7ad6b1*/
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 ) /*0x7ad6d3*/
  {
    (*(void (__stdcall **)(char *))(*(_DWORD *)a1 + 4))(a1); /*0x7ad6e6*/
    *a3 = a1; /*0x7ad6e9*/
    return 0; /*0x7ad6f1*/
  }
  while ( 1 ) /*0x7ad6fd*/
  {
    v5 = *v3; /*0x7ad6fd*/
    v6 = *v3 == 0; /*0x7ad706*/
    if ( !*v3 || *v5 == *a2 && v5[1] == a2[1] && v5[2] == a2[2] && v5[3] == a2[3] ) /*0x7ad730*/
      break; /*0x7ad730*/
  LABEL_17:
    v8 = v3[5]; /*0x7ad753*/
    v3 += 3; /*0x7ad756*/
    if ( !v8 ) /*0x7ad75b*/
      return -2147467262; /*0x7ad75d*/
  }
  v7 = (int (__stdcall *)(char *, _DWORD *, char **, void *))v3[2]; /*0x7ad732*/
  if ( v7 != (int (__stdcall *)(char *, _DWORD *, char **, void *))1 ) /*0x7ad738*/
  {
    result = v7(a1, a2, a3, v3[1]); /*0x7ad745*/
    if ( !result || !v6 && result < 0 ) /*0x7ad751*/
      return result; /*0x7ad751*/
    goto LABEL_17; /*0x7ad751*/
  }
  v9 = (char *)v3[1] + (_DWORD)a1; /*0x7ad770*/
  (*(void (__stdcall **)(char *))(*(_DWORD *)v9 + 4))(v9); /*0x7ad775*/
  *a3 = v9; /*0x7ad778*/
  return 0; /*0x7ad6a1*/
}
}
// 0x7AC970
namespace gamemd {
void WonlineStringDialogControl_12::ClearBuffer()
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x7ac976*/
  *(_DWORD *)(this + 16) = 0; /*0x7ac979*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x7ac980*/
  {
    __3_YAXPAX_Z(v2); /*0x7ac986*/
    *(_DWORD *)(this + 4) = 0; /*0x7ac98e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x7ac991*/
  *(_DWORD *)(this + 8) = 0; /*0x7ac994*/
}
} // namespace gamemd

// 0x7AC9A0
namespace gamemd {
unsigned int WonlineStringDialogControl_12::PointerToIndex(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x7ac9a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x7ac9b5*/
  else
    return 0; /*0x7ac9a7*/
}
} // namespace gamemd

// 0x7AC9C0
namespace gamemd {
int WonlineStringDialogControl_12::Seek(int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x7ac9ca*/
}
} // namespace gamemd

// 0x7AD090
namespace gamemd {
char WonlineStringDialogControl_12::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x7ad092*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x7ad09d*/
  {
    v3 = 0; /*0x7ad09f*/
    if ( v2 <= 0 ) /*0x7ad0a3*/
      return 1; /*0x7ad0c3*/
    v4 = (_DWORD *)*(this + 1); /*0x7ad0a5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x7ad0ab*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x7ad0b4*/
    {
      ++v3; /*0x7ad0b6*/
      ++v4; /*0x7ad0b7*/
      if ( v3 >= v2 ) /*0x7ad0bc*/
        return 1; /*0x7ad0bc*/
    }
  }
  return 0; /*0x7ad0be*/
}
} // namespace gamemd

// 0x7AD0D0
namespace gamemd {
char WonlineStringDialogControl_12::Release(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x7ad0dc*/
  {
    *((_BYTE *)this + 12) = 0; /*0x7ad0e6*/
    if ( a3 ) /*0x7ad0ec*/
      v4 = a3; /*0x7ad102*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x7ad0fe*/
    *((_BYTE *)this + 12) = 1; /*0x7ad106*/
    if ( v4 ) /*0x7ad10a*/
    {
      if ( *((_DWORD *)this + 1) ) /*0x7ad115*/
      {
        v6 = *((_DWORD *)this + 2); /*0x7ad11c*/
        if ( a2 < v6 ) /*0x7ad121*/
          v6 = a2; /*0x7ad123*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x7ad129*/
          ++i; /*0x7ad12e*/
        if ( *((_BYTE *)this + 13) ) /*0x7ad13b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x7ad146*/
          *((_DWORD *)this + 1) = 0; /*0x7ad14e*/
        }
      }
      *((_DWORD *)this + 1) = v4; /*0x7ad157*/
      *((_DWORD *)this + 2) = a2; /*0x7ad15f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x7ad162*/
      return 1; /*0x7ad168*/
    }
    else
    {
      return 0; /*0x7ad10f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x7ad172*/
    return 1; /*0x7ad178*/
  }
}
} // namespace gamemd

// 0x7AD180
namespace gamemd {
void WonlineStringDialogControl_12::ddtor()
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x7ad18d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x7ad193*/
    *(_DWORD *)(this + 4) = 0; /*0x7ad19b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x7ad19e*/
  *(_DWORD *)(this + 8) = 0; /*0x7ad1a1*/
}
} // namespace gamemd

// 0x7AD1B0
namespace gamemd {
int WonlineStringDialogControl_12::Read(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x7ad1b0*/
    return 0; /*0x7ad1b8*/
  v3 = *(_DWORD *)(this + 8); /*0x7ad1be*/
  result = 0; /*0x7ad1c1*/
  if ( v3 <= 0 ) /*0x7ad1c5*/
    return -1; /*0x7ad1dc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x7ad1cb*/
  {
    if ( ++result >= v3 ) /*0x7ad1da*/
      return -1; /*0x7ad1da*/
  }
  return result; /*0x7ad1ba*/
}
} // namespace gamemd

// 0x7AD1F0
namespace gamemd {
unsigned int WonlineStringDialogControl_12::Write(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x7ad1f0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x7ad205*/
  else
    return 0; /*0x7ad1f7*/
}
} // namespace gamemd

// 0x7AD210
namespace gamemd {
char WonlineStringDialogControl_12::SetCapacity(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x7ad21c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x7ad222*/
    if ( a3 ) /*0x7ad228*/
      v4 = a3; /*0x7ad23e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x7ad23a*/
    *((_BYTE *)this + 12) = 1; /*0x7ad242*/
    if ( !v4 ) /*0x7ad246*/
      return 0; /*0x7ad2ba*/
    if ( *((_DWORD *)this + 1) ) /*0x7ad248*/
    {
      v5 = *((_DWORD *)this + 2); /*0x7ad24f*/
      if ( a2 < v5 ) /*0x7ad254*/
        v5 = a2; /*0x7ad256*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x7ad25c*/
        ++i; /*0x7ad261*/
      if ( *((_BYTE *)this + 13) ) /*0x7ad26e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x7ad279*/
        *((_DWORD *)this + 1) = 0; /*0x7ad281*/
      }
    }
    *((_DWORD *)this + 1) = v4; /*0x7ad28a*/
    *((_DWORD *)this + 2) = a2; /*0x7ad292*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x7ad295*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x7ad29e*/
  }
  v7 = *((_DWORD *)this + 2); /*0x7ad2a1*/
  if ( v7 < *((_DWORD *)this + 4) ) /*0x7ad2a9*/
    *((_DWORD *)this + 4) = v7; /*0x7ad2ab*/
  return 1; /*0x7ad2ae*/
}
} // namespace gamemd

// 0x7AD2C0
namespace gamemd {
int WonlineStringDialogControl_12::FindItem(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x7ad2c0*/
  result = 0; /*0x7ad2c3*/
  if ( v2 <= 0 ) /*0x7ad2c8*/
    return -1; /*0x7ad2df*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x7ad2ce*/
  {
    if ( ++result >= v2 ) /*0x7ad2dd*/
      return -1; /*0x7ad2dd*/
  }
  return result; /*0x7ad2e2*/
}
}
// 0x7AD370
namespace gamemd {
VectorClass * WonlineStringDialogControl_12::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x7ad373*/
  *this = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x7ad376*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x7ad380*/
  {
    __3_YAXPAX_Z(v3); /*0x7ad388*/
    *(this + 1) = 0; /*0x7ad390*/
  }
  *((_BYTE *)this + 13) = 0; /*0x7ad39b*/
  *(this + 2) = 0; /*0x7ad3a1*/
  if ( (a2 & 1) != 0 ) /*0x7ad3a8*/
    __3_YAXPAX_Z(this); /*0x7ad3ab*/
  return this; /*0x7ad3b5*/
}
} // namespace gamemd

// 0x7AD3C0
namespace gamemd {
DynamicVector * WonlineStringDialogControl_12::Constructor_VectorClass_tConnInfoStruct___(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x7ad3c3*/
  *this = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x7ad3c6*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x7ad3d0*/
  {
    __3_YAXPAX_Z(v3); /*0x7ad3d8*/
    *(this + 1) = 0; /*0x7ad3e0*/
  }
  *((_BYTE *)this + 13) = 0; /*0x7ad3eb*/
  *(this + 2) = 0; /*0x7ad3f1*/
  if ( (a2 & 1) != 0 ) /*0x7ad3f8*/
    __3_YAXPAX_Z(this); /*0x7ad3fb*/
  return this; /*0x7ad405*/
}
} // namespace gamemd

// 0x7AD440
namespace gamemd {
int WonlineStringDialogControl_28::ddtor(int a1)
{
  HWND Current; // eax

  Current = Dialog::GetCurrent(); /*0x7ad449*/
  SendMessageA(Current, 0x5F4u, 0, 0); /*0x7ad44f*/
  return 0; /*0x7ad457*/
}
} // namespace gamemd

// 0x7AD460
namespace gamemd {
int WonlineStringDialogControl_28::Read(int a1, LPARAM lParam)
{
  HWND Current; // eax

  Current = Dialog::GetCurrent(); /*0x7ad46c*/
  SendMessageA(Current, 0x5F5u, 0, lParam); /*0x7ad472*/
  return 0; /*0x7ad47a*/
}
} // namespace gamemd

// 0x7AD480
namespace gamemd {
int WonlineStringDialogControl_28::Write(int a1, wchar_t * Format, unsigned int a3, int a4, int a5)
{
  HWND Current; // eax
  wchar_t *v6; // eax
  wchar_t *StringCSF; // eax
  HWND v8; // eax
  HWND DlgItem; // eax
  wchar_t Buffer[200]; // [esp+8h] [ebp-190h] BYREF

  Buffer[0] = 0; /*0x7ad49d*/
  Current = Dialog::GetCurrent(); /*0x7ad4b7*/
  SendDlgItemMessageA(Current, 1478, 0x402u, 100 * (int)Format / a3, 0); /*0x7ad4bd*/
  if ( a5 <= 0 ) /*0x7ad4cc*/
  {
    StringCSF = GetStringCSF(aTxtBytesWoTime, 0, g_Str_File_wonline_cpp, 5172); /*0x7ad50a*/
    swprintf(Buffer, (const size_t)StringCSF, Format, a3); /*0x7ad515*/
  }
  else
  {
    v6 = GetStringCSF(aTxtBytesWTime, 0, g_Str_File_wonline_cpp, 5167); /*0x7ad4e2*/
    swprintf(Buffer, (const size_t)v6, Format, a3, a5); /*0x7ad4ed*/
  }
  if ( time(0) != dword_B77EA8 ) /*0x7ad52d*/
  {
    v8 = Dialog::GetCurrent(); /*0x7ad538*/
    DlgItem = GetDlgItem(v8, 1480); /*0x7ad53e*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x7ad551*/
    dword_B77EA8 = time(0); /*0x7ad561*/
  }
  return 0; /*0x7ad52f*/
}
} // namespace gamemd

// 0x7AD580
namespace gamemd {
int WonlineStringDialogControl_28::Draw(int a1, int a2)
{
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v5; // [esp-4h] [ebp-194h]
  wchar_t *StringCSF; // [esp-4h] [ebp-194h]
  wchar_t Buffer[200]; // [esp+0h] [ebp-190h] BYREF

  Buffer[0] = 0; /*0x7ad58d*/
  if ( a2 == 2 ) /*0x7ad597*/
  {
    StringCSF = GetStringCSF(aTxtConnecting, 0, g_Str_File_wonline_cpp, 5191); /*0x7ad5d6*/
    swprintf(Buffer, (const size_t)StringCSF, *(const wchar_t *const *)Buffer); /*0x7ad5d8*/
  }
  else if ( a2 == 4 ) /*0x7ad59c*/
  {
    v5 = GetStringCSF(aTxtFindingPatc, 0, g_Str_File_wonline_cpp, 5195); /*0x7ad5b4*/
    swprintf(Buffer, (const size_t)v5, *(const wchar_t *const *)Buffer); /*0x7ad5ba*/
  }
  Current = Dialog::GetCurrent(); /*0x7ad5e5*/
  DlgItem = GetDlgItem(Current, 1480); /*0x7ad5eb*/
  SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x7ad5fe*/
  return 0; /*0x7ad606*/
}
} // namespace gamemd

// 0x7AD610
namespace gamemd {
int WonlineStringDialogControl_28::StubReturnFalse(int a1)
{
  return 0; /*0x7ad612*/
}
} // namespace gamemd

// 0x7AD620
namespace gamemd {
LONG WonlineStringDialogControl_28::AddRef(int a1)
{
  return InterlockedIncrement((volatile LONG *)(a1 + 4)); /*0x7ad62e*/
}
} // namespace gamemd

// 0x7AD640
namespace gamemd {
LONG WonlineStringDialogControl_28::Release(char * Block)
{
  LONG v1; // ebx

  v1 = InterlockedDecrement((volatile LONG *)Block + 1); /*0x7ad654*/
  if ( !v1 && Block ) /*0x7ad65c*/
  {
    *(_DWORD *)Block = &ATL::CComObject<CDownloadEventSink>::`vftable'; /*0x7ad663*/
    *((_DWORD *)Block + 1) = 1; /*0x7ad669*/
    InterlockedDecrement(&Addend); /*0x7ad66f*/
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 8)); /*0x7ad675*/
    __3_YAXPAX_Z(Block); /*0x7ad67c*/
  }
  return v1; /*0x7ad684*/
}
} // namespace gamemd
