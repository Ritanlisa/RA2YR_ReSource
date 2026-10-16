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
namespace gamemd {  // G42.18 ns repair
void * WonlineStringDialogControl_12::Constructor_WonlineStringDialogControl(DialogControl_OwnerDraw * Block, char a2)
{
  *&Block->ObjectClass_C = (int)&vt_WonlineStringDialogControl; /*0x7ac636*/
  DeleteAndZeroBlock->ObjectClass_C); /*0x7ac63c*/
  *&Block->__pad_000 = (int)&off_7F7624; /*0x7ac643*/
  ((OwnerDrawControl *)Block)->InitVtable(); /*0x7ac649*/
  if ( (a2 & 1) != 0 ) /*0x7ac653*/
    operator delete((void *)(Block)); /*0x7ac656*/
  return (void **)Block; /*0x7ac660*/
}
}  // G42.18 ns repair
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
  unsigned int *v10; // [esp+1Ch] [ebp+Ch]

  v3 = (char ***)&off_7F7638; /*0x7ad69a*/
  if ( !v10 ) /*0x7ad69f*/
    return -2147467261; /*0x7ad6aa*/
  *v10 = 0; /*0x7ad6b1*/
  if ( !*a3 && !a3[1] && a3[2] == 192 && a3[3] == 1174405120 ) /*0x7ad6d3*/
  {
    (*(void (__stdcall **)(unsigned int *))(*a2 + 4))(a2); /*0x7ad6e6*/
    *v10 = (unsigned int)(a2); /*0x7ad6e9*/
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
  v9 = v3->u8_1 + (unsigned int)a2; /*0x7ad770*/
  (*(void (__stdcall **)(char *))(*(unsigned int *)v9 + 4))(v9); /*0x7ad775*/
  *v10 = (unsigned int)(v9); /*0x7ad778*/
  return 0; /*0x7ad6a1*/
}
}
// 0x7AC970
namespace gamemd {
void WonlineStringDialogControl_12::ClearBuffer(void *a1_1)
{

  void *v2; // eax
  v2 = *(void **)&a1_1->q004; /*0x7ac976*/
  a1_1->q010 = 0; /*0x7ac979*/
  if ( v2 && (((unsigned char *)&(*(unsigned int *)&a1_1->IsAllocated))[1]) ) /*0x7ac980*/
  {
    operator delete((void *)(v2)); /*0x7ac986*/
    *(unsigned int *)&a1_1->q004 = 0; /*0x7ac98e*/
  }
  (((unsigned char *)&(*(unsigned int *)&a1_1->q00C))[1]) = 0; /*0x7ac991*/
  a1_1->q008 = 0; /*0x7ac994*/
}
} // namespace gamemd

// 0x7AC9A0
namespace gamemd {
unsigned int WonlineStringDialogControl_12::PointerToIndex(int a2)
{
  if ( (*((unsigned char *)&(*&this->m_C))) ) /*0x7ac9a0*/
    return (unsigned int)(a2 - *&this->q004) >> 2; /*0x7ac9b5*/
  else
    return 0; /*0x7ac9a7*/
}
} // namespace gamemd

// 0x7AC9C0
namespace gamemd {
int WonlineStringDialogControl_12::Seek(int a2, void *a2_2, void *a3_1)
{
  return *(unsigned int *)(*&this->q004 + 4 * a2); /*0x7ac9ca*/
}
} // namespace gamemd

// 0x7AD090
namespace gamemd {
char WonlineStringDialogControl_12::AddRef(int a2)
{

  int m_8; // esi
  m_8 = this->m_8; /*0x7ad092*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x7ad09d*/
  {
    int v3 = 0; // edx /*0x7ad09f*/
    if ( m_8 <= 0 ) /*0x7ad0a3*/
      return 1; /*0x7ad0c3*/
    unsigned int *v4; // eax
    v4 = (unsigned int *)(*&this->q004); /*0x7ad0a5*/
    int v5; // ecx
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x7ad0ab*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x7ad0b4*/
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


  if ( a2 ) /*0x7ad0dc*/
  {
    LOBYTE(this->m_C) = 0; /*0x7ad0e6*/
    unsigned int *v4; // edi
    if ( a3 ) /*0x7ad0ec*/
      v4 = a3; /*0x7ad102*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x7ad0fe*/
    LOBYTE(this->m_C) = 1; /*0x7ad106*/
    if ( v4 ) /*0x7ad10a*/
    {
      if ( *&this->q004 ) /*0x7ad115*/
      {
        int m_8; // ecx
        m_8 = this->m_8; /*0x7ad11c*/
        if ( a2 < m_8 ) /*0x7ad121*/
          m_8 = a2; /*0x7ad123*/
        int i; // eax
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->q004 + 4 * i - 4) ) /*0x7ad129*/
          ++i; /*0x7ad12e*/
        if ( BYTE1(this->m_C) ) /*0x7ad13b*/
        {
          __3_YAXPAX_Z(*&this->q004); /*0x7ad146*/
          *&this->q004 = 0; /*0x7ad14e*/
        }
      }
      *&this->q004 = (int)(v4); /*0x7ad157*/
      this->m_8 = a2; /*0x7ad15f*/
      BYTE1(this->m_C) = a3 == 0; /*0x7ad162*/
      return 1; /*0x7ad168*/
    }
    else
    {
      return 0; /*0x7ad10f*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PAUtConnInfoStruct *))(*(unsigned int *)this->__pad_000 + 12))(this); /*0x7ad172*/
    return 1; /*0x7ad178*/
  }

}
} // namespace gamemd

// 0x7AD180
namespace gamemd {
void WonlineStringDialogControl_12::ddtor(void *a1)
{
  if ( *&this->IsAllocated && (((unsigned char *)&(*&this->IsAllocated))[1]) ) /*0x7ad18d*/
  {
    operator delete((void *)(*&this->q004)); /*0x7ad193*/
    *&this->q004 = 0; /*0x7ad19b*/
  }
  (((unsigned char *)&(*&this->m_C))[1]) = 0; /*0x7ad19e*/
  this->m_8 = 0; /*0x7ad1a1*/
}
} // namespace gamemd

// 0x7AD1B0
namespace gamemd {
int WonlineStringDialogControl_12::Read(unsigned int * a2, void *a2_2, void *a3)
{

  if ( !(*((unsigned char *)&(*(unsigned int *)&a2_2->q00C))) ) /*0x7ad1b0*/
    return 0; /*0x7ad1b8*/
  int m_8 = a2_2->q008; // edx /*0x7ad1be*/
  int result = 0; // eax /*0x7ad1c1*/
  if ( m_8 <= 0 ) /*0x7ad1c5*/
    return -1; /*0x7ad1dc*/
  unsigned int *i; // ecx
  for ( i = *(unsigned int **)&a2_2->q004; *(unsigned int)(i) != *(unsigned int *)(a2_2); ++i ) /*0x7ad1cb*/
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
  if ( (*((unsigned char *)&(*&this->m_C))) ) /*0x7ad1f0*/
    return (unsigned int)(a2 - *&this->q004) >> 2; /*0x7ad205*/
  else
    return 0; /*0x7ad1f7*/
}
} // namespace gamemd

// 0x7AD210
namespace gamemd {
char WonlineStringDialogControl_12::SetCapacity(int a2, unsigned int * a3)
{


  if ( a2 ) /*0x7ad21c*/
  {
    LOBYTE(this->m_C) = 0; /*0x7ad222*/
    unsigned int *v4; // edi
    if ( a3 ) /*0x7ad228*/
      v4 = a3; /*0x7ad23e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x7ad23a*/
    LOBYTE(this->m_C) = 1; /*0x7ad242*/
    if ( !v4 ) /*0x7ad246*/
      return 0; /*0x7ad2ba*/
    if ( *&this->q004 ) /*0x7ad248*/
    {
      int m_8; // ecx
      m_8 = this->m_8; /*0x7ad24f*/
      if ( a2 < m_8 ) /*0x7ad254*/
        m_8 = a2; /*0x7ad256*/
      int i; // eax
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->q004 + 4 * i - 4) ) /*0x7ad25c*/
        ++i; /*0x7ad261*/
      if ( BYTE1(this->m_C) ) /*0x7ad26e*/
      {
        __3_YAXPAX_Z(*&this->q004); /*0x7ad279*/
        *&this->q004 = 0; /*0x7ad281*/
      }
    }
    *&this->q004 = (int)(v4); /*0x7ad28a*/
    this->m_8 = a2; /*0x7ad292*/
    BYTE1(this->m_C) = a3 == 0; /*0x7ad295*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAUtConnInfoStruct *))(*(unsigned int *)this->__pad_000 + 12))(this); /*0x7ad29e*/
  }
  int v7 = this->m_8; // eax /*0x7ad2a1*/
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
  m_10 = this->m_10; /*0x7ad2c0*/
  int result = 0; // eax /*0x7ad2c3*/
  if ( m_10 <= 0 ) /*0x7ad2c8*/
    return -1; /*0x7ad2df*/
  unsigned int *i; // ecx
  for ( i = *&this->q004; *i != *a2; ++i ) /*0x7ad2ce*/
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

  void *v3 = *&Block->__pad_004; // eax /*0x7ad373*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x7ad376*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_C))[1]) ) /*0x7ad380*/
  {
    operator delete((void *)(v3)); /*0x7ad388*/
    *&Block->__pad_004 = 0; /*0x7ad390*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x7ad39b*/
  Block->u32_8 = 0; /*0x7ad3a1*/
  if ( (a2 & 1) != 0 ) /*0x7ad3a8*/
    operator delete((void *)(Block)); /*0x7ad3ab*/
  return Block->tail_0; /*0x7ad3b5*/
}
} // namespace gamemd

// 0x7AD3C0
namespace gamemd {
DynamicVector * WonlineStringDialogControl_12::Constructor_VectorClass_tConnInfoStruct___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x7ad3c3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x7ad3c6*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_C))[1]) ) /*0x7ad3d0*/
  {
    operator delete((void *)(v3)); /*0x7ad3d8*/
    *&Block->__pad_004 = 0; /*0x7ad3e0*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x7ad3eb*/
  Block->u32_8 = 0; /*0x7ad3f1*/
  if ( (a2 & 1) != 0 ) /*0x7ad3f8*/
    operator delete((void *)(Block)); /*0x7ad3fb*/
  return Block->tail_0; /*0x7ad405*/
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
int WonlineStringDialogControl_28::Read(int a1, LPARAM lParam, void *a3)
{

  HWND Current; // eax
  Current = (HWND)Dialog::GetCurrent(); /*0x7ad46c*/
  LPARAM lParama; // [esp+8h] [ebp+8h]
  SendMessageA(Current, 0x5F5u, 0, lParama); /*0x7ad472*/
  return 0; /*0x7ad47a*/
}
} // namespace gamemd

// 0x7AD480
namespace gamemd {
int WonlineStringDialogControl_28::Write(int a1, wchar_t * Format, unsigned int a3, int a4, int a5)
{

  wchar_t Buffer[200]; // [esp+8h] [ebp-190h] BYREF
  Buffer[0] = 0; /*0x7ad49d*/
  HWND Current; // eax
  Current = (HWND)Dialog::GetCurrent(); /*0x7ad4b7*/
  SendDlgItemMessageA(Current, 1478, 0x402u, 100 * a3 / a4, 0); /*0x7ad4bd*/
  int v12; // [esp+1ACh] [ebp+14h]
  if ( v12 <= 0 ) /*0x7ad4cc*/
  {
    wchar_t *StringCSF; // eax
    StringCSF = GetStringCSF((char *)(aTxtBytesWoTime), 0, g_Str_File_wonline_cpp, 5172); /*0x7ad50a*/
    swprintf(Buffer, (const size_t)StringCSF, (const wchar_t *const)a3, a4); /*0x7ad515*/
  }
  else
  {
    wchar_t *v6; // eax
    v6 = GetStringCSF((char *)(aTxtBytesWTime), 0, g_Str_File_wonline_cpp, 5167); /*0x7ad4e2*/
    swprintf(Buffer, (const size_t)v6, (const wchar_t *const)a3, a4, v12); /*0x7ad4ed*/
  }
  if ( time(0) != dword_B77EA8 ) /*0x7ad52d*/
  {
    HWND v8; // eax
    v8 = (HWND)Dialog::GetCurrent(); /*0x7ad538*/
    HWND DlgItem; // eax
    DlgItem = GetDlgItem(v8, 1480); /*0x7ad53e*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x7ad551*/
    dword_B77EA8 = time(0); /*0x7ad561*/
  }
  return 0; /*0x7ad52f*/
}
} // namespace gamemd

// 0x7AD580
namespace gamemd {
int WonlineStringDialogControl_28::Draw(int a1, int a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{

  wchar_t Buffer[200]; // [esp+0h] [ebp-190h] BYREF
  Buffer[0] = 0; /*0x7ad58d*/
  int v8; // [esp+198h] [ebp+8h]
  if ( v8 == 2 ) /*0x7ad597*/
  {
    wchar_t *StringCSF; // [esp-4h] [ebp-194h]
    StringCSF = GetStringCSF((char *)(aTxtConnecting), 0, g_Str_File_wonline_cpp, 5191); /*0x7ad5d6*/
    swprintf(Buffer, (const size_t)StringCSF, *(const wchar_t *const *)Buffer); /*0x7ad5d8*/
  }
  else if ( v8 == 4 ) /*0x7ad59c*/
  {
    wchar_t *v5; // [esp-4h] [ebp-194h]
    v5 = GetStringCSF((char *)(aTxtFindingPatc), 0, g_Str_File_wonline_cpp, 5195); /*0x7ad5b4*/
    swprintf(Buffer, (const size_t)v5, *(const wchar_t *const *)Buffer); /*0x7ad5ba*/
  }
  HWND Current; // eax
  Current = (HWND)Dialog::GetCurrent(); /*0x7ad5e5*/
  HWND DlgItem; // eax
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
    *(unsigned int *)Block = (unsigned int)(&vt_ATLCComObject); /*0x7ad663*/
    *((unsigned int *)Block + 1) = 1; /*0x7ad669*/
    InterlockedDecrement(&Addend); /*0x7ad66f*/
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 8)); /*0x7ad675*/
    operator delete((void *)(Block)); /*0x7ad67c*/
  }
  return v1; /*0x7ad684*/
}
} // namespace gamemd
