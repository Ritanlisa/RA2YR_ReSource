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
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/WinsockInterface_e4.hpp"
#include "e4/classes/OwnerDrawControl_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"

// 0x7AC630
namespace gamemd {
void * WonlineStringDialogControl_12::Constructor_WonlineStringDialogControl(DialogControl_OwnerDraw * Block, char a2)
{
  Block->m_0 = (int)&(void*)(void*)&WonlineStringDialogControl_vftable; /*0x7ac636*/
  DeleteAndZero((ObjectClass *)&Block->__pad_9[3]); /*0x7ac63c*/
  Block->m_0 = (int)&off_7F7624; /*0x7ac643*/
  OwnerDrawControl::InitVtable((OwnerDrawControl *)Block); /*0x7ac649*/
  if ( (a2 & 1) != 0 ) /*0x7ac653*/
    RA2_OPDEL(Block); /*0x7ac656*/
  return (void **)Block; /*0x7ac660*/
}
}
// 0x7AD690
namespace gamemd {
int WonlineStringDialogControl_28::QueryInterface(char * a1, unsigned int * a2, char ** a3)
{
  char ***v3; // esi
  int result; // eax
  char **v5; // eax
  BOOL v6; // ebp
  char **v7; // eax
  char **v8; // eax
  char *v9; // esi
  _DWORD *v10; // [esp+1Ch] [ebp+Ch]

  v3 = (char ***)&off_7F7638; /*0x7ad69a*/
  if ( !v10 ) /*0x7ad69f*/
    return -2147467261; /*0x7ad6aa*/
  *v10 = 0; /*0x7ad6b1*/
  if ( !*a3 && !a3[1] && a3[2] == (char *)192 && a3[3] == (char *)1174405120 ) /*0x7ad6d3*/
  {
    (*(void (__stdcall **)(_DWORD *))(*a2 + 4))(a2); /*0x7ad6e6*/
    *v10 = a2; /*0x7ad6e9*/
    return 0; /*0x7ad6f1*/
  }
  while ( 1 ) /*0x7ad6fd*/
  {
    v5 = *v3; /*0x7ad6fd*/
    v6 = *v3 == 0; /*0x7ad706*/
    if ( !*v3 || *v5 == *a3 && v5[1] == a3[1] && v5[2] == a3[2] && v5[3] == a3[3] ) /*0x7ad730*/
      break; /*0x7ad730*/
  LABEL_17:
    v8 = v3[5]; /*0x7ad753*/
    v3 += 3; /*0x7ad756*/
    if ( !v8 ) /*0x7ad75b*/
      return -2147467262; /*0x7ad75d*/
  }
  v7 = v3[2]; /*0x7ad732*/
  if ( v7 != (char **)1 ) /*0x7ad738*/
  {
    result = v7(a2, a3, v10, v3[1]); /*0x7ad745*/
    if ( !result || !v6 && result < 0 ) /*0x7ad751*/
      return result; /*0x7ad751*/
    goto LABEL_17; /*0x7ad751*/
  }
  v9 = (char *)v3[1] + (_DWORD)a2; /*0x7ad770*/
  (*(void (__stdcall **)(char *))(*(_DWORD *)v9 + 4))(v9); /*0x7ad775*/
  *v10 = v9; /*0x7ad778*/
  return 0; /*0x7ad6a1*/
}
}
// 0x7AC970
namespace gamemd {
void WonlineStringDialogControl_12::ClearBuffer(void *a1_1)
{
  void *v2; // eax

  v2 = *(void **)&a1_1->m_1[3]; /*0x7ac976*/
  a1_1->m_10 = 0; /*0x7ac979*/
  if ( v2 && IDA_BYTE1(a1_1->m_C) ) /*0x7ac980*/
  {
    RA2_OPDEL(v2); /*0x7ac986*/
    *(_DWORD *)&a1_1->m_1[3] = 0; /*0x7ac98e*/
  }
  IDA_BYTE1(a1_1->m_C) = 0; /*0x7ac991*/
  a1_1->m_8 = 0; /*0x7ac994*/
}
} // namespace gamemd

// 0x7AC9A0
namespace gamemd {
unsigned int WonlineStringDialogControl_12::PointerToIndex(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x7ac9a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x7ac9b5*/
  else
    return 0; /*0x7ac9a7*/
}
} // namespace gamemd

// 0x7AC9C0
namespace gamemd {
int WonlineStringDialogControl_12::Seek(int a2, void *a2_2, void *a3_1)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x7ac9ca*/
}
} // namespace gamemd

// 0x7AD090
namespace gamemd {
char WonlineStringDialogControl_12::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x7ad092*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x7ad09d*/
  {
    v3 = 0; /*0x7ad09f*/
    if ( m_8 <= 0 ) /*0x7ad0a3*/
      return 1; /*0x7ad0c3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x7ad0a5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x7ad0ab*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x7ad0b4*/
    {
      ++v3; /*0x7ad0b6*/
      ++v4; /*0x7ad0b7*/
      if ( v3 >= m_8 ) /*0x7ad0bc*/
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
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x7ad0dc*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x7ad0e6*/
    if ( a3 ) /*0x7ad0ec*/
      v4 = a3; /*0x7ad102*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x7ad0fe*/
    IDA_LOBYTE(this->m_C) = 1; /*0x7ad106*/
    if ( v4 ) /*0x7ad10a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x7ad115*/
      {
        m_8 = this->m_8; /*0x7ad11c*/
        if ( a2 < m_8 ) /*0x7ad121*/
          m_8 = a2; /*0x7ad123*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x7ad129*/
          ++i; /*0x7ad12e*/
        if ( IDA_BYTE1(this->m_C) ) /*0x7ad13b*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x7ad146*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x7ad14e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x7ad157*/
      this->m_8 = a2; /*0x7ad15f*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x7ad162*/
      return 1; /*0x7ad168*/
    }
    else
    {
      return 0; /*0x7ad10f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUtConnInfoStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x7ad172*/
    return 1; /*0x7ad178*/
  }
}
} // namespace gamemd

// 0x7AD180
namespace gamemd {
void WonlineStringDialogControl_12::ddtor()
{
  if ( *(_DWORD *)&this->m_1[3] && IDA_BYTE1(this->m_C) ) /*0x7ad18d*/
  {
    RA2_OPDEL(*(void **)&this->m_1[3]); /*0x7ad193*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7ad19b*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x7ad19e*/
  this->m_8 = 0; /*0x7ad1a1*/
}
} // namespace gamemd

// 0x7AD1B0
namespace gamemd {
int WonlineStringDialogControl_12::Read(unsigned int * a2, void *a2_2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !IDA_LOBYTE(a2_2->m_C) ) /*0x7ad1b0*/
    return 0; /*0x7ad1b8*/
  m_8 = a2_2->m_8; /*0x7ad1be*/
  result = 0; /*0x7ad1c1*/
  if ( m_8 <= 0 ) /*0x7ad1c5*/
    return -1; /*0x7ad1dc*/
  for ( i = *(_DWORD **)&a2_2->m_1[3]; *i != *a2_2; ++i ) /*0x7ad1cb*/
  {
    if ( ++result >= m_8 ) /*0x7ad1da*/
      return -1; /*0x7ad1da*/
  }
  return result; /*0x7ad1ba*/
}
} // namespace gamemd

// 0x7AD1F0
namespace gamemd {
unsigned int WonlineStringDialogControl_12::Write(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x7ad1f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x7ad205*/
  else
    return 0; /*0x7ad1f7*/
}
} // namespace gamemd

// 0x7AD210
namespace gamemd {
char WonlineStringDialogControl_12::SetCapacity(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x7ad21c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x7ad222*/
    if ( a3 ) /*0x7ad228*/
      v4 = a3; /*0x7ad23e*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x7ad23a*/
    IDA_LOBYTE(this->m_C) = 1; /*0x7ad242*/
    if ( !v4 ) /*0x7ad246*/
      return 0; /*0x7ad2ba*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x7ad248*/
    {
      m_8 = this->m_8; /*0x7ad24f*/
      if ( a2 < m_8 ) /*0x7ad254*/
        m_8 = a2; /*0x7ad256*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x7ad25c*/
        ++i; /*0x7ad261*/
      if ( IDA_BYTE1(this->m_C) ) /*0x7ad26e*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x7ad279*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x7ad281*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x7ad28a*/
    this->m_8 = a2; /*0x7ad292*/
    IDA_BYTE1(this->m_C) = a3 == 0; /*0x7ad295*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUtConnInfoStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x7ad29e*/
  }
  v7 = this->m_8; /*0x7ad2a1*/
  if ( v7 < this->m_10 ) /*0x7ad2a9*/
    this->m_10 = v7; /*0x7ad2ab*/
  return 1; /*0x7ad2ae*/
}
} // namespace gamemd

// 0x7AD2C0
namespace gamemd {
int WonlineStringDialogControl_12::FindItem(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x7ad2c0*/
  result = 0; /*0x7ad2c3*/
  if ( m_10 <= 0 ) /*0x7ad2c8*/
    return -1; /*0x7ad2df*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7ad2ce*/
  {
    if ( ++result >= m_10 ) /*0x7ad2dd*/
      return -1; /*0x7ad2dd*/
  }
  return result; /*0x7ad2e2*/
}
}
// 0x7AD370
namespace gamemd {
VectorClass_flat * WonlineStringDialogControl_12::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x7ad373*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_tConnInfoStruct___vftable; /*0x7ad376*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x7ad380*/
  {
    RA2_OPDEL(v3); /*0x7ad388*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x7ad390*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x7ad39b*/
  Block->m_8 = 0; /*0x7ad3a1*/
  if ( (a2 & 1) != 0 ) /*0x7ad3a8*/
    RA2_OPDEL(Block); /*0x7ad3ab*/
  return Block->__pad_0; /*0x7ad3b5*/
}
} // namespace gamemd

// 0x7AD3C0
namespace gamemd {
DynamicVector * WonlineStringDialogControl_12::Constructor_VectorClass_tConnInfoStruct___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x7ad3c3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_tConnInfoStruct___vftable; /*0x7ad3c6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x7ad3d0*/
  {
    RA2_OPDEL(v3); /*0x7ad3d8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x7ad3e0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x7ad3eb*/
  Block->m_8 = 0; /*0x7ad3f1*/
  if ( (a2 & 1) != 0 ) /*0x7ad3f8*/
    RA2_OPDEL(Block); /*0x7ad3fb*/
  return Block->__pad_0; /*0x7ad405*/
}
} // namespace gamemd

// 0x7AD440
namespace gamemd {
int WonlineStringDialogControl_28::ddtor(int a1)
{
  HWND Current; // eax

  Current = (HWND)Dialog::GetCurrent(); /*0x7ad449*/
  SendMessageA(Current, 0x5F4u, 0, 0); /*0x7ad44f*/
  return 0; /*0x7ad457*/
}
} // namespace gamemd

// 0x7AD460
namespace gamemd {
int WonlineStringDialogControl_28::Read(int a1, LPARAM lParam)
{
  HWND Current; // eax
  LPARAM lParama; // [esp+8h] [ebp+8h]

  Current = (HWND)Dialog::GetCurrent(); /*0x7ad46c*/
  SendMessageA(Current, 0x5F5u, 0, lParama); /*0x7ad472*/
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
  int v12; // [esp+1ACh] [ebp+14h]

  Buffer[0] = 0; /*0x7ad49d*/
  Current = (HWND)Dialog::GetCurrent(); /*0x7ad4b7*/
  SendDlgItemMessageA(Current, 1478, 0x402u, 100 * a3 / a4, 0); /*0x7ad4bd*/
  if ( v12 <= 0 ) /*0x7ad4cc*/
  {
    StringCSF = GetStringCSF(aTxtBytesWoTime, 0, g_Str_File_wonline_cpp, 5172); /*0x7ad50a*/
    swprintf(Buffer, (const size_t)StringCSF, (const wchar_t *const)a3, a4); /*0x7ad515*/
  }
  else
  {
    v6 = GetStringCSF(aTxtBytesWTime, 0, g_Str_File_wonline_cpp, 5167); /*0x7ad4e2*/
    swprintf(Buffer, (const size_t)v6, (const wchar_t *const)a3, a4, v12); /*0x7ad4ed*/
  }
  if ( time(0) != dword_B77EA8 ) /*0x7ad52d*/
  {
    v8 = (HWND)Dialog::GetCurrent(); /*0x7ad538*/
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
  int v8; // [esp+198h] [ebp+8h]

  Buffer[0] = 0; /*0x7ad58d*/
  if ( v8 == 2 ) /*0x7ad597*/
  {
    StringCSF = GetStringCSF(aTxtConnecting, 0, g_Str_File_wonline_cpp, 5191); /*0x7ad5d6*/
    swprintf(Buffer, (const size_t)StringCSF, *(const wchar_t *const *)Buffer); /*0x7ad5d8*/
  }
  else if ( v8 == 4 ) /*0x7ad59c*/
  {
    v5 = GetStringCSF(aTxtFindingPatc, 0, g_Str_File_wonline_cpp, 5195); /*0x7ad5b4*/
    swprintf(Buffer, (const size_t)v5, *(const wchar_t *const *)Buffer); /*0x7ad5ba*/
  }
  Current = (HWND)Dialog::GetCurrent(); /*0x7ad5e5*/
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
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x7ad62e*/
}
} // namespace gamemd

// 0x7AD640
namespace gamemd {
LONG WonlineStringDialogControl_28::Release(char * Block)
{
  LONG v1; // ebx
  char *Block; // [esp+14h] [ebp+4h]

  v1 = InterlockedDecrement((volatile LONG *)Block + 1); /*0x7ad654*/
  if ( !v1 && Block ) /*0x7ad65c*/
  {
    *(_DWORD *)Block = &(void*)(void*)&ATL_CComObject_CDownloadEventSink_vftable; /*0x7ad663*/
    *((_DWORD *)Block + 1) = 1; /*0x7ad669*/
    InterlockedDecrement(&Addend); /*0x7ad66f*/
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 8)); /*0x7ad675*/
    RA2_OPDEL(Block); /*0x7ad67c*/
  }
  return v1; /*0x7ad684*/
}
} // namespace gamemd
