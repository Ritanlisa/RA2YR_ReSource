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
        DialogControl_OwnerDraw *this,
        char a2)
{
  this->vfptr = &vt_WonlineStringDialogControl; /*0x7ac636*/
  DeleteAndZero((void **)this + 3); /*0x7ac63c*/
  this->vfptr = &off_7F7624; /*0x7ac643*/
  OwnerDrawControl::InitVtable(this); /*0x7ac649*/
  if ( (a2 & 1) != 0 ) /*0x7ac653*/
    __3_YAXPAX_Z(this); /*0x7ac656*/
  return (CreateGameDialogControl *)this; /*0x7ac660*/
}
} // namespace gamemd

// 0x7AD690
namespace gamemd {
int WonlineStringDialogControl_28::QueryInterface(char * a1, unsigned int * a2, char ** a3)
{
{
  _UNKNOWN **v3; // esi
  int result; // eax
  BOOL v6; // ebp
  int (__stdcall *v7)(char *, _DWORD *, char **, void *); // eax
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
    _DWORD * v5 = *v3; /*0x7ad6fd*/
    v6 = *v3 == 0; /*0x7ad706*/
    if ( !*v3 || *v5 == *a2 && v5[1] == a2[1] && v5[2] == a2[2] && v5[3] == a2[3] ) /*0x7ad730*/
      break; /*0x7ad730*/
LABEL_17:
    void * v8 = v3[5]; /*0x7ad753*/
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
} // namespace gamemd

// 0x7AC970
namespace gamemd {
void WonlineStringDialogControl_12::ClearBuffer()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->WonlineStringDialogControl_12_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->WonlineStringDialogControl_12_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->WonlineStringDialogControl_12_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x7AC9A0
namespace gamemd {
unsigned int WonlineStringDialogControl_12::PointerToIndex(int a2)
{
{
    if ( (unsigned char)this->WonlineStringDialogControl_12_field_0xC )
    return (unsigned int)(a2 - this->WonlineStringDialogControl_12_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x7AC9C0
namespace gamemd {
int WonlineStringDialogControl_12::Seek(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x7AD090
namespace gamemd {
char WonlineStringDialogControl_12::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x7AD0D0
namespace gamemd {
char WonlineStringDialogControl_12::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->WonlineStringDialogControl_12_field_0x4 )
      {
    v6 = this->WonlineStringDialogControl_12_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->WonlineStringDialogControl_12_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->WonlineStringDialogControl_12_field_0x4 = 0;
        }
      }
    this->WonlineStringDialogControl_12_field_0x4 = v4;
    this->WonlineStringDialogControl_12_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ClearBuffer();
    return 1;
  }
}
}
} // namespace gamemd

// 0x7AD180
namespace gamemd {
void WonlineStringDialogControl_12::ddtor()
{
{
    if ( this->WonlineStringDialogControl_12_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->WonlineStringDialogControl_12_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->WonlineStringDialogControl_12_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x7AD1B0
namespace gamemd {
int WonlineStringDialogControl_12::Read(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->WonlineStringDialogControl_12_field_0xC )
    return 0;
    v3 = this->WonlineStringDialogControl_12_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x7AD1F0
namespace gamemd {
unsigned int WonlineStringDialogControl_12::Write(int a2)
{
{
    if ( (unsigned char)this->WonlineStringDialogControl_12_field_0xC )
    return (unsigned int)(a2 - this->WonlineStringDialogControl_12_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x7AD210
namespace gamemd {
char WonlineStringDialogControl_12::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->WonlineStringDialogControl_12_field_0x4 )
    {
    v5 = this->WonlineStringDialogControl_12_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->WonlineStringDialogControl_12_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->WonlineStringDialogControl_12_field_0x4 = 0;
      }
    }
    this->WonlineStringDialogControl_12_field_0x4 = v4;
    this->WonlineStringDialogControl_12_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ClearBuffer();
  }
    v7 = this->WonlineStringDialogControl_12_field_0x8;
    if ( v7 < this->WonlineStringDialogControl_12_field_0x10 )
    this->WonlineStringDialogControl_12_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x7AD2C0
namespace gamemd {
int WonlineStringDialogControl_12::FindItem(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

}
// 0x7AD370
namespace gamemd {
VectorClass * WonlineStringDialogControl_12::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_tConnInfoStruct;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x7AD3C0
namespace gamemd {
DynamicVector * WonlineStringDialogControl_12::Constructor_VectorClass_tConnInfoStruct___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_tConnInfoStruct;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x7AD440
namespace gamemd {
int WonlineStringDialogControl_28::ddtor(int a1)
{
{
    HWND Current;
    Current = Dialog::GetCurrent();
    SendMessageA(Current, 0x5F4u, 0, 0);
    return 0;
}
}
} // namespace gamemd

// 0x7AD460
namespace gamemd {
int WonlineStringDialogControl_28::Read(int a1, LPARAM lParam)
{
{
    HWND Current;
    Current = Dialog::GetCurrent();
    SendMessageA(Current, 0x5F5u, 0, lParam);
    return 0;
}
}
} // namespace gamemd

// 0x7AD480
namespace gamemd {
int WonlineStringDialogControl_28::Write(int a1, wchar_t * Format, unsigned int a3, int a4, int a5)
{
{
    HWND Current;
    wchar_t *v6;
    wchar_t *StringCSF;
    HWND v8;
    HWND DlgItem;
    wchar_t Buffer[200];
    Buffer[0] = 0;
    Current = Dialog::GetCurrent();
    SendDlgItemMessageA(Current, 1478, 0x402u, 100 * (int)Format / a3, 0);
    if ( a5 <= 0 )
  {
    StringCSF = GetStringCSF(DataGlobal_84D730, 0, g_Str_File_wonline_cpp, 5172);
    swprintf(Buffer, (const size_t)StringCSF, Format, a3);
  }
    else
  {
    v6 = GetStringCSF(aTxtBytesWTime, 0, g_Str_File_wonline_cpp, 5167);
    swprintf(Buffer, (const size_t)v6, Format, a3, a5);
  }
    if ( time(0) != DataGlobal_B77EA8 )
  {
    v8 = Dialog::GetCurrent();
    DlgItem = GetDlgItem(v8, 1480);
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer);
    DataGlobal_B77EA8 = time(0);
  }
    return 0;
}
}
} // namespace gamemd

// 0x7AD580
namespace gamemd {
int WonlineStringDialogControl_28::Draw(int a1, int a2)
{
{
    HWND Current;
    HWND DlgItem;
    wchar_t *v5;
    wchar_t *StringCSF;
    wchar_t Buffer[200];
    Buffer[0] = 0;
    if ( a2 == 2 )
  {
    StringCSF = GetStringCSF(aTxtConnecting, 0, g_Str_File_wonline_cpp, 5191);
    swprintf(Buffer, (const size_t)StringCSF, *(const wchar_t *const *)Buffer);
  }
    else if ( a2 == 4 )
  {
    v5 = GetStringCSF(aTxtFindingPatc, 0, g_Str_File_wonline_cpp, 5195);
    swprintf(Buffer, (const size_t)v5, *(const wchar_t *const *)Buffer);
  }
    Current = Dialog::GetCurrent();
    DlgItem = GetDlgItem(Current, 1480);
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer);
    return 0;
}
}
} // namespace gamemd

// 0x7AD610
namespace gamemd {
int WonlineStringDialogControl_28::StubReturnFalse(int a1)
{
return 0;
}
} // namespace gamemd

// 0x7AD620
namespace gamemd {
LONG WonlineStringDialogControl_28::AddRef(int a1)
{
{
    return InterlockedIncrement((volatile LONG *)(a1 + 4));
}
}
} // namespace gamemd

// 0x7AD640
namespace gamemd {
LONG WonlineStringDialogControl_28::Release(char * Block)
{
{
    LONG v1;
    v1 = InterlockedDecrement((volatile LONG *)(Block) + 1);
    if ( !v1 && Block )
  {
    *(int *)Block = &vt_ATL_CComObject_CDownloadEventSink;
    *((int *)(Block) + 1) = 1;
    InterlockedDecrement(&Addend);
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 8));
    __3_YAXPAX_Z(Block);
  }
    return v1;
}
}
} // namespace gamemd
