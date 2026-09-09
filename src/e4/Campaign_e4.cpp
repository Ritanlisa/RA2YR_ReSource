// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Campaign_WorldDominationTour_16_e4.hpp"
#include "e4/classes/Campaign_WorldDominationTour_24_e4.hpp"

// 0x60D380
LONG Campaign::Screen(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall sub_60D380(char a1)
{
  HWND v1; // esi
  LONG result; // eax
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  v1 = (HWND)CreateDialog(0); /*0x60d389*/
  result = 0; /*0x60d38b*/
  dwNewLong = 0; /*0x60d38f*/
  if ( v1 ) /*0x60d393*/
  {
    SetWindowLongA(v1, 8, (LONG)&dwNewLong); /*0x60d3a1*/
    ShowWindow(v1, 1); /*0x60d3aa*/
    SetForegroundWindow(v1); /*0x60d3b1*/
    Timer::PumpMessages(MEMORY[0x87F770]); /*0x60d3bd*/
    if ( a1 ) /*0x60d3c8*/
      BINK::Background_Setup(v1); /*0x60d3cc*/
    while ( !dwNewLong ) /*0x60d3d7*/
    {
      MessageLoop(); /*0x60d3d9*/
      if ( !MEMORY[0xA8B238] || MEMORY[0xA8B238] == 5 || MEMORY[0xA8D60E] || MEMORY[0xA8DAB4] ) /*0x60d3fc*/
      {
        Event::Dispatch(); /*0x60d412*/
      }
      else if ( !(unsigned __int8)VtableStub::Method_55CBF0() && GameFrameLoop() ) /*0x60d407*/
      {
        break; /*0x60d40e*/
      }
    }
    Dialog::Destroy(v1); /*0x60d41f*/
    return dwNewLong; /*0x60d426*/
  }
  return result; /*0x60d42a*/
}
}

// 0x7656D0
namespace gamemd {
unsigned int * Campaign_WorldDominationTour_16::Seek(unsigned int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Campaign_WorldDominationTour_16_::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  int v3; // edi

  v3 = *(this + 1) + 8 * a3; /*0x7656dd*/
  ComPtr::Constructor(a2); /*0x7656e2*/
  *a2 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x7656e7*/
  ComPtr::Set(a2, *(_DWORD *)(v3 + 4)); /*0x7656f3*/
  return a2; /*0x7656fa*/
}
}
} // namespace gamemd

// 0x765710
namespace gamemd {
rc_ptr * Campaign_WorldDominationTour_16::Constructor(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
rc_ptr *__thiscall Campaign_WorldDominationTour_16_::Constructor(_DWORD *Block, char a2)
{
  *Block = &rc_ptr<WorldDominationTour::CampaignProperties>::`vftable'; /*0x765713*/
  ComPtr::Release(Block); /*0x765719*/
  if ( (a2 & 1) != 0 ) /*0x765723*/
    __3_YAXPAX_Z(Block); /*0x765726*/
  return (rc_ptr *)Block; /*0x765730*/
}
}
} // namespace gamemd

// 0x765740
namespace gamemd {
rc_ptr * Campaign_WorldDominationTour_16::Constructor_0(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
rc_ptr *__thiscall Campaign_WorldDominationTour_16_::Constructor_0(_DWORD *Block, char a2)
{
  *Block = &rc_ptr<WorldDominationTour::History>::`vftable'; /*0x765743*/
  ComPtr::Release(Block); /*0x765749*/
  if ( (a2 & 1) != 0 ) /*0x765753*/
    __3_YAXPAX_Z(Block); /*0x765756*/
  return (rc_ptr *)Block; /*0x765760*/
}
}
} // namespace gamemd

// 0x765770
namespace gamemd {
VectorCursor * Campaign_WorldDominationTour_16::Constructor_1(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorCursor *__thiscall Campaign_WorldDominationTour_16_::Constructor_1(_DWORD *Block, char a2)
{
  *Block = &VectorCursor<rc_ptr<WorldDominationTour::Conflict>,DynamicVectorClass<rc_ptr<WorldDominationTour::Conflict>>>::`vftable'; /*0x765779*/
  if ( (a2 & 1) != 0 ) /*0x76577f*/
    __3_YAXPAX_Z(Block); /*0x765782*/
  return (VectorCursor *)Block; /*0x76578c*/
}
}
} // namespace gamemd

// 0x7657F0
namespace gamemd {
char Campaign_WorldDominationTour_16::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Campaign_WorldDominationTour_16_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // ecx
  _DWORD *i; // eax

  v2 = *(this + 2); /*0x7657f6*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x7657ff*/
  {
    v3 = 0; /*0x765801*/
    if ( v2 <= 0 ) /*0x765805*/
      return 1; /*0x76582b*/
    v4 = (_DWORD *)(*(this + 1) + 4); /*0x76580d*/
    for ( i = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x765810*/
    {
      ++v3; /*0x76581b*/
      v4 += 2; /*0x76581f*/
      if ( v3 >= v2 ) /*0x765824*/
        return 1; /*0x765824*/
    }
  }
  return 0; /*0x765826*/
}
}
} // namespace gamemd

// 0x765840
namespace gamemd {
char Campaign_WorldDominationTour_16::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Campaign_WorldDominationTour_16_::_vt02(_BYTE *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // ebx
  _DWORD *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  _DWORD *v13; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x765843*/
  if ( !a2 ) /*0x76584d*/
  {
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 12))(this); /*0x76594d*/
    return 1; /*0x765953*/
  }
  *(this + 12) = 0; /*0x765857*/
  if ( a3 ) /*0x76585d*/
  {
    *a3 = a2; /*0x7658a3*/
    v6 = a3 + 1; /*0x7658a5*/
    if ( a2 - 1 >= 0 ) /*0x7658b1*/
    {
      v9 = a2; /*0x7658b3*/
      do /*0x7658c7*/
      {
        ComPtr::Constructor(v6); /*0x7658b8*/
        *v6 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x7658bd*/
        v6 += 2; /*0x7658c3*/
        --v9; /*0x7658c6*/
      }
      while ( v9 ); /*0x7658c7*/
      v6 = a3 + 1; /*0x7658c9*/
    }
  }
  else
  {
    v5 = __2_YAPAXI_Z(8 * a2 + 4); /*0x765867*/
    if ( !v5 ) /*0x765871*/
    {
      v8 = 0; /*0x76589f*/
      goto LABEL_14; /*0x7658a1*/
    }
    *v5 = a2; /*0x765873*/
    v6 = v5 + 1; /*0x765875*/
    v13 = v5 + 1; /*0x76587b*/
    if ( a2 - 1 >= 0 ) /*0x765881*/
    {
      v7 = a2; /*0x765883*/
      do /*0x765897*/
      {
        ComPtr::Constructor(v6); /*0x765888*/
        *v6 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x76588d*/
        v6 += 2; /*0x765893*/
        --v7; /*0x765896*/
      }
      while ( v7 ); /*0x765897*/
      v6 = v13; /*0x765899*/
    }
  }
  v8 = v6; /*0x7658cd*/
LABEL_14:
  *(this + 12) = 1; /*0x7658cf*/
  if ( !v8 ) /*0x7658d5*/
    return 0; /*0x7658da*/
  if ( *((_DWORD *)this + 1) ) /*0x7658e1*/
  {
    if ( a2 >= *((_DWORD *)this + 2) ) /*0x7658ed*/
      v3 = *((_DWORD *)this + 2); /*0x7658ef*/
    for ( i = 0; i < v3; ++i ) /*0x7658f5*/
      ComPtr::Set(&v8[2 * i], *(_DWORD *)(*((_DWORD *)this + 1) + 8 * i + 4)); /*0x765902*/
    if ( *(this + 13) ) /*0x76590c*/
    {
      v12 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 1); /*0x765913*/
      if ( v12 ) /*0x765918*/
        (**v12)(v12, 3); /*0x76591e*/
      *((_DWORD *)this + 1) = 0; /*0x765920*/
    }
    v3 = a2; /*0x765927*/
  }
  *((_DWORD *)this + 1) = v8; /*0x765936*/
  *((_DWORD *)this + 2) = v3; /*0x765939*/
  *(this + 13) = a3 == 0; /*0x76593c*/
  return 1; /*0x7658d7*/
}
}
} // namespace gamemd

// 0x765960
namespace gamemd {
int Campaign_WorldDominationTour_16::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Campaign_WorldDominationTour_16_::_vt03(int this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))(this + 4); /*0x765966*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x76596d*/
  {
    result = (**v2)(v2, 3); /*0x76597a*/
    *(_DWORD *)(this + 4) = 0; /*0x76597c*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x76597f*/
  *(_DWORD *)(this + 8) = 0; /*0x765982*/
  return result; /*0x765985*/
}
}
} // namespace gamemd

// 0x765990
namespace gamemd {
int Campaign_WorldDominationTour_16::Read(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Campaign_WorldDominationTour_16_::_vt04(int this, int a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x765990*/
    return 0; /*0x765998*/
  v3 = *(_DWORD *)(this + 8); /*0x76599e*/
  result = 0; /*0x7659a1*/
  if ( v3 <= 0 ) /*0x7659a5*/
    return -1; /*0x7659c0*/
  for ( i = (_DWORD *)(*(_DWORD *)(this + 4) + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x7659ae*/
  {
    if ( ++result >= v3 ) /*0x7659be*/
      return -1; /*0x7659be*/
  }
  return result; /*0x76599a*/
}
}
} // namespace gamemd

// 0x7659D0
namespace gamemd {
unsigned int Campaign_WorldDominationTour_16::Write(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall Campaign_WorldDominationTour_16_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x7659d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x7659e5*/
  else
    return 0; /*0x7659d7*/
}
}
} // namespace gamemd

// 0x765B60
namespace gamemd {
VectorClass * Campaign_WorldDominationTour_16::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall Campaign_WorldDominationTour_16_::QueryInterface(_DWORD *Block, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = (void (__thiscall ***)(_DWORD, int))*(Block + 1); /*0x765b63*/
  *Block = &VectorClass<rc_ptr<WorldDominationTour::Conflict>>::`vftable'; /*0x765b66*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x765b70*/
  {
    (**v3)(v3, 3); /*0x765b7f*/
    *(Block + 1) = 0; /*0x765b81*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x765b8c*/
  *(Block + 2) = 0; /*0x765b92*/
  if ( (a2 & 1) != 0 ) /*0x765b99*/
    __3_YAXPAX_Z(Block); /*0x765b9c*/
  return (VectorClass *)Block; /*0x765ba6*/
}
}
} // namespace gamemd

// 0x765700
namespace gamemd {
BOOL Campaign_WorldDominationTour_24::AddRef()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall Campaign_WorldDominationTour_24_::_vt01(_DWORD *this)
{
  return *(this + 2) < *(_DWORD *)(*(this + 1) + 16); /*0x76570d*/
}
}
} // namespace gamemd

// 0x765B40
namespace gamemd {
unsigned int * Campaign_WorldDominationTour_24::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Campaign_WorldDominationTour_24_::_vt02(_DWORD *this)
{
  ++*(this + 2); /*0x765b42*/
  return this; /*0x765b45*/
}
}
} // namespace gamemd

// 0x765B50
namespace gamemd {
unsigned int * Campaign_WorldDominationTour_24::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Campaign_WorldDominationTour_24_::_vt03(_DWORD *this)
{
  --*(this + 2); /*0x765b52*/
  return this; /*0x765b55*/
}
}
} // namespace gamemd
