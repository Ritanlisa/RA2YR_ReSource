// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WonlineStringDialogControl_12_e4.hpp"
#include "e4/classes/WonlineStringDialogControl_28_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x7AC630
namespace gamemd {
void * WonlineStringDialogControl_12::Constructor_WonlineStringDialogControl(char a2)
{
  DeleteAndZero&this->q00C; /*0x7ac63c*/
  *this = &off_7F7624; /*0x7ac643*/
  OwnerDrawControl::InitVtable(); /*0x7ac649*/
  if ( (a2 & 1) != 0 ) /*0x7ac653*/
    RA2_OPDEL(); /*0x7ac656*/
  return this; /*0x7ac660*/
}
}
// 0x7AD690
namespace gamemd {
int WonlineStringDialogControl_28::QueryInterface(char * a1, unsigned int * a2, char ** a3)
{
  void **v3; // esi
  int result; // eax
  unsigned int *v5; // eax
  BOOL v6; // ebp
  int (__stdcall *v7)(char *, unsigned int *, char **, void *); // eax
  void *v8; // eax
  char *v9; // esi

  v3 = &off_7F7638; /*0x7ad69a*/
  if ( !a3 ) /*0x7ad69f*/
    return -2147467261; /*0x7ad6aa*/
  *a3 = 0; /*0x7ad6b1*/
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 ) /*0x7ad6d3*/
  {
    (*(void (__stdcall **)(char *))(*(unsigned int *)a1 + 4))(a1); /*0x7ad6e6*/
    *a3 = a1; /*0x7ad6e9*/
    return 0; /*0x7ad6f1*/
  }
  while ( 1 ) /*0x7ad6fd*/
  {
    v5 = (unsigned int *)(*v3);
    v6 = *v3 == 0; /*0x7ad706*/
    if ( !*v3 || *v5 == *a2 && v5[1] == a2[1] && v5[2] == a2[2] && v5[3] == a2[3] ) /*0x7ad730*/
      break; /*0x7ad730*/
  LABEL_17:
    v8 = v3[5]; /*0x7ad753*/
    v3 += 3; /*0x7ad756*/
    if ( !v8 ) /*0x7ad75b*/
      return -2147467262; /*0x7ad75d*/
  }
  v7 = (int (__stdcall *)(char *, unsigned int *, char **, void *))v3[2]; /*0x7ad732*/
  if ( v7 != (int (__stdcall *)(char *, unsigned int *, char **, void *))1 ) /*0x7ad738*/
  {
    result = v7(a1, a2, a3, v3[1]); /*0x7ad745*/
    if ( !result || !v6 && result < 0 ) /*0x7ad751*/
      return result; /*0x7ad751*/
    goto LABEL_17; /*0x7ad751*/
  }
  v9 = (char *)v3[1] + (unsigned int)a1; /*0x7ad770*/
  (*(void (__stdcall **)(char *))(*(unsigned int *)v9 + 4))(v9); /*0x7ad775*/
  *a3 = v9; /*0x7ad778*/
  return 0; /*0x7ad6a1*/
}
}
// 0x7AC970
namespace gamemd {
void WonlineStringDialogControl_12::ClearBuffer()
{
  void *v2; // eax

  v2 = this->q004; /*0x7ac976*/
  this->q010 = 0; /*0x7ac979*/
  if ( v2 && this->IsAllocated ) /*0x7ac980*/
  {
    RA2_OPDEL(v2); /*0x7ac986*/
    this->q004 = 0; /*0x7ac98e*/
  }
  this->IsAllocated = 0; /*0x7ac991*/
  this->q008 = 0; /*0x7ac994*/
}
} // namespace gamemd

// 0x7AC9A0
namespace gamemd {
unsigned int WonlineStringDialogControl_12::PointerToIndex(int a2)
{
  if ( this->q00C ) /*0x7ac9a0*/
    return (unsigned int)(a2 - this->q004) >> 2; /*0x7ac9b5*/
  else
    return 0; /*0x7ac9a7*/
}
} // namespace gamemd

// 0x7AC9C0
namespace gamemd {
int WonlineStringDialogControl_12::Seek(int a2)
{
  return *(unsigned int *)(this->q004 + 4 * a2); /*0x7ac9ca*/
}
} // namespace gamemd

// 0x7AD090
namespace gamemd {
char WonlineStringDialogControl_12::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = this->q008; /*0x7ad092*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x7ad09d*/
  {
    v3 = 0; /*0x7ad09f*/
    if ( v2 <= 0 ) /*0x7ad0a3*/
      return 1; /*0x7ad0c3*/
    v4 = (unsigned int *)this->q004; /*0x7ad0a5*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x7ad0ab*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x7ad0b4*/
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
  unsigned int *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x7ad0dc*/
  {
    this->q00C = (unsigned int *)(0);
    if ( a3 ) /*0x7ad0ec*/
      v4 = a3; /*0x7ad102*/
    else
      v4 = operator new(4 * a2); /*0x7ad0fe*/
    this->q00C = 1; /*0x7ad106*/
    if ( v4 ) /*0x7ad10a*/
    {
      if ( this->q004 ) /*0x7ad115*/
      {
        v6 = this->q008; /*0x7ad11c*/
        if ( a2 < v6 ) /*0x7ad121*/
          v6 = a2; /*0x7ad123*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(this->q004 + 4 * i - 4) ) /*0x7ad129*/
          ++i; /*0x7ad12e*/
        if ( this->IsAllocated ) /*0x7ad13b*/
        {
          RA2_OPDEL(this->q004); /*0x7ad146*/
          this->q004 = 0; /*0x7ad14e*/
        }
      }
      this->q004 = v4; /*0x7ad157*/
      this->q008 = a2; /*0x7ad15f*/
      this->IsAllocated = a3 == 0; /*0x7ad162*/
      return 1; /*0x7ad168*/
    }
    else
    {
      return 0; /*0x7ad10f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(((unsigned int)(this->q0042))))(this); /*0x7ad172*/
    return 1; /*0x7ad178*/
  }
}
} // namespace gamemd

// 0x7AD180
namespace gamemd {
void WonlineStringDialogControl_12::ddtor()
{
  if ( this->q004 && this->IsAllocated ) /*0x7ad18d*/
  {
    RA2_OPDEL(this->q004); /*0x7ad193*/
    this->q004 = 0; /*0x7ad19b*/
  }
  this->IsAllocated = 0; /*0x7ad19e*/
  this->q008 = 0; /*0x7ad1a1*/
}
} // namespace gamemd

// 0x7AD1B0
namespace gamemd {
int WonlineStringDialogControl_12::Read(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !this->q00C ) /*0x7ad1b0*/
    return 0; /*0x7ad1b8*/
  v3 = this->q008; /*0x7ad1be*/
  result = 0; /*0x7ad1c1*/
  if ( v3 <= 0 ) /*0x7ad1c5*/
    return -1; /*0x7ad1dc*/
  for ( i = this->q004; *i != *a2; ++i ) /*0x7ad1cb*/
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
  if ( this->q00C ) /*0x7ad1f0*/
    return (unsigned int)(a2 - this->q004) >> 2; /*0x7ad205*/
  else
    return 0; /*0x7ad1f7*/
}
} // namespace gamemd

// 0x7AD210
namespace gamemd {
char WonlineStringDialogControl_12::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x7ad21c*/
  {
    this->q00C = (unsigned int *)(0);
    if ( a3 ) /*0x7ad228*/
      v4 = a3; /*0x7ad23e*/
    else
      v4 = operator new(4 * a2); /*0x7ad23a*/
    this->q00C = 1; /*0x7ad242*/
    if ( !v4 ) /*0x7ad246*/
      return 0; /*0x7ad2ba*/
    if ( this->q004 ) /*0x7ad248*/
    {
      v5 = this->q008; /*0x7ad24f*/
      if ( a2 < v5 ) /*0x7ad254*/
        v5 = a2; /*0x7ad256*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(this->q004 + 4 * i - 4) ) /*0x7ad25c*/
        ++i; /*0x7ad261*/
      if ( this->IsAllocated ) /*0x7ad26e*/
      {
        RA2_OPDEL(this->q004); /*0x7ad279*/
        this->q004 = 0; /*0x7ad281*/
      }
    }
    this->q004 = v4; /*0x7ad28a*/
    this->q008 = a2; /*0x7ad292*/
    this->IsAllocated = a3 == 0; /*0x7ad295*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(((unsigned int)(this->q0042))))(this); /*0x7ad29e*/
  }
  v7 = this->q008; /*0x7ad2a1*/
  if ( v7 < this->q010 ) /*0x7ad2a9*/
    this->q010 = v7; /*0x7ad2ab*/
  return 1; /*0x7ad2ae*/
}
} // namespace gamemd

// 0x7AD2C0
namespace gamemd {
int WonlineStringDialogControl_12::FindItem(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = this->q010; /*0x7ad2c0*/
  result = 0; /*0x7ad2c3*/
  if ( v2 <= 0 ) /*0x7ad2c8*/
    return -1; /*0x7ad2df*/
  for ( i = (unsigned int *)this->q004; *i != *a2; ++i ) /*0x7ad2ce*/
  {
    if ( ++result >= v2 ) /*0x7ad2dd*/
      return -1; /*0x7ad2dd*/
  }
  return result; /*0x7ad2e2*/
}
}
// 0x7AD370
namespace gamemd {
VectorClass_flat * WonlineStringDialogControl_12::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->q004; /*0x7ad373*/
  if ( v3 && this->IsAllocated ) /*0x7ad380*/
  {
    RA2_OPDEL(v3); /*0x7ad388*/
    this->q004 = 0; /*0x7ad390*/
  }
  this->IsAllocated = (gamemd::VectorClass_flat *)(0);
  this->q008 = 0; /*0x7ad3a1*/
  if ( (a2 & 1) != 0 ) /*0x7ad3a8*/
    RA2_OPDEL(); /*0x7ad3ab*/
  return this; /*0x7ad3b5*/
}
} // namespace gamemd

// 0x7AD3C0
namespace gamemd {
DynamicVector * WonlineStringDialogControl_12::Constructor_VectorClass_tConnInfoStruct___(char a2)
{
  void *v3; // eax

  v3 = (void *)this->q004; /*0x7ad3c3*/
  if ( v3 && this->IsAllocated ) /*0x7ad3d0*/
  {
    RA2_OPDEL(v3); /*0x7ad3d8*/
    this->q004 = 0; /*0x7ad3e0*/
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
  this->q008 = 0; /*0x7ad3f1*/
  if ( (a2 & 1) != 0 ) /*0x7ad3f8*/
    RA2_OPDEL(); /*0x7ad3fb*/
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
    v6 = (wchar_t *)(GetStringCSF(aTxtBytesWTime, 0, g_Str_File_wonline_cpp, 5167));
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
    StringCSF = (wchar_t *)(GetStringCSF(aTxtConnecting, 0, g_Str_File_wonline_cpp, 5191));
    swprintf(Buffer, (const size_t)StringCSF, *(const wchar_t *const *)Buffer); /*0x7ad5d8*/
  }
  else if ( a2 == 4 ) /*0x7ad59c*/
  {
    v5 = (wchar_t *)(GetStringCSF(aTxtFindingPatc, 0, g_Str_File_wonline_cpp, 5195));
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
    *((unsigned int *)Block + 1) = 1; /*0x7ad669*/
    InterlockedDecrement(&Addend); /*0x7ad66f*/
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 8)); /*0x7ad675*/
    RA2_OPDEL(Block); /*0x7ad67c*/
  }
  return v1; /*0x7ad684*/
}
} // namespace gamemd
