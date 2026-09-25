// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Campaign_WorldDominationTour_16_e4.hpp"
#include "e4/classes/Campaign_WorldDominationTour_24_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Campaign_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/VectorCursor_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x765840
namespace gamemd {
int Campaign_WorldDominationTour_16::Release(int a2, unsigned int * a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  _DWORD *v8; // ebx
  int i; // esi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  _DWORD *v13; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x765843*/
  if ( !a2 ) /*0x76584d*/
  {
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->q0042))(this); /*0x76594d*/
    return 1; /*0x765953*/
  }
  *(&this->q0042) = 0; /*0x765857*/
  if ( a3 ) /*0x76585d*/
  {
    *a3 = a2; /*0x7658a3*/
    v6 = a3 + 1; /*0x7658a5*/
    if ( a2 - 1 >= 0 ) /*0x7658b1*/
    {
      a2 = a2; /*0x7658b3*/
      do /*0x7658c7*/
      {
        ComPtr::Constructor(v6); /*0x7658b8*/
        *(void **)v6 = (void*)&rc_ptr_WorldDominationTour_Conflict_vftable; /*0x7658bd*/
        v6 += 2; /*0x7658c3*/
        --a2; /*0x7658c6*/
      }
      while ( a2 ); /*0x7658c7*/
      v6 = a3 + 1; /*0x7658c9*/
    }
  }
  else
  {
    v5 = RA2_OPNEW(8 * a2 + 4); /*0x765867*/
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
      a2 = a2; /*0x765883*/
      do /*0x765897*/
      {
        ComPtr::Constructor(v6); /*0x765888*/
        *(void **)v6 = (void*)&rc_ptr_WorldDominationTour_Conflict_vftable; /*0x76588d*/
        v6 += 2; /*0x765893*/
        --a2; /*0x765896*/
      }
      while ( a2 ); /*0x765897*/
      v6 = v13; /*0x765899*/
    }
  }
  v8 = v6; /*0x7658cd*/
  LABEL_14:
  *(&this->q0042) = 1; /*0x7658cf*/
  if ( !v8 ) /*0x7658d5*/
    return 0; /*0x7658da*/
  if ( this->q004 ) /*0x7658e1*/
  {
    if ( a2 >= this->q008 ) /*0x7658ed*/
      v3 = this->q008; /*0x7658ef*/
    for ( i = 0; i < v3; ++i ) /*0x7658f5*/
      ComPtr::Set(&v8[2 * i], *(_DWORD *)(this->q004 + 8 * i + 4)); /*0x765902*/
    if ( *(&this->q0043) ) /*0x76590c*/
    {
      v12 = (void (__thiscall ***)(_DWORD, int))this->q004; /*0x765913*/
      if ( v12 ) /*0x765918*/
        (**v12)(v12, 3); /*0x76591e*/
      this->q004 = 0; /*0x765920*/
    }
    v3 = a2; /*0x765927*/
  }
  this->q004 = v8; /*0x765936*/
  this->q008 = v3; /*0x765939*/
  *(&this->q0043) = a3 == 0; /*0x76593c*/
  return 1; /*0x7658d7*/
}
}
// 0x765700
namespace gamemd {
int Campaign_WorldDominationTour_24::AddRef()
{
  return this->q008 < *(_DWORD *)(this->q004 + 16); /*0x76570d*/
}
}
// 0x765B40
namespace gamemd {
unsigned int * Campaign_WorldDominationTour_24::Release()
{
  ++this->q008; /*0x765b42*/
  return this; /*0x765b45*/
}
}
// 0x765B50
namespace gamemd {
unsigned int * Campaign_WorldDominationTour_24::ddtor()
{
  --this->q008; /*0x765b52*/
  return this; /*0x765b55*/
}
}
// 0x60D380
LONG Campaign::Screen(char a1)
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
    Timer::PumpMessages(g_BinkMoviePlayer); /*0x60d3bd*/
    if ( a1 ) /*0x60d3c8*/
      BINK::Background_Setup(v1); /*0x60d3cc*/
    while ( !dwNewLong ) /*0x60d3d7*/
    {
      MessageLoop(); /*0x60d3d9*/
      if ( !g_GameMode_Current || g_GameMode_Current == 5 || g_NetworkQuitFlag || g_GameFlags_Campaign ) /*0x60d3fc*/
      {
        Event::Dispatch(); /*0x60d412*/
      }
      else if ( !(unsigned __int8)VtableStub::55CBF0() && GameFrameLoop() ) /*0x60d407*/
      {
        break; /*0x60d40e*/
      }
    }
    Dialog::Destroy(v1); /*0x60d41f*/
    return dwNewLong; /*0x60d426*/
  }
  return result; /*0x60d42a*/
}
// 0x7656D0
namespace gamemd {
unsigned int * Campaign_WorldDominationTour_16::Seek(unsigned int * a2, int a3)
{
  int v3; // edi

  v3 = this->Items + 8 * a3; /*0x7656dd*/
  ComPtr::Constructor(a2); /*0x7656e2*/
  *(void **)a2 = (void*)&rc_ptr_WorldDominationTour_Conflict_vftable; /*0x7656e7*/
  ComPtr::Set(a2, v3->q010); /*0x7656f3*/
  return a2; /*0x7656fa*/
}
} // namespace gamemd

// 0x765710
namespace gamemd {
rc_ptr * Campaign_WorldDominationTour_16::Constructor(char a2)
{
  *(void ** *)this = (void*)&rc_ptr_WorldDominationTour_CampaignProperties_vftable; /*0x765713*/
  ComPtr::Release(); /*0x765719*/
  if ( (a2 & 1) != 0 ) /*0x765723*/
    RA2_OPDEL(); /*0x765726*/
  return this; /*0x765730*/
}
} // namespace gamemd

// 0x765740
namespace gamemd {
rc_ptr * Campaign_WorldDominationTour_16::Constructor_0(char a2)
{
  *(void ** *)this = (void*)&rc_ptr_WorldDominationTour_History_vftable; /*0x765743*/
  ComPtr::Release(); /*0x765749*/
  if ( (a2 & 1) != 0 ) /*0x765753*/
    RA2_OPDEL(); /*0x765756*/
  return this; /*0x765760*/
}
} // namespace gamemd

// 0x765770
namespace gamemd {
VectorCursor * Campaign_WorldDominationTour_16::Constructor_1(char a2)
{
  *(void **)this = (void*)&VectorCursor_rc_ptr_WorldDominationTour_Conflict_DynamicVectorClass_rc_ptr_WorldDominationTour_Conflict_vftable; /*0x765779*/
  if ( (a2 & 1) != 0 ) /*0x76577f*/
    RA2_OPDEL(); /*0x765782*/
  return this; /*0x76578c*/
}
} // namespace gamemd

// 0x7657F0
namespace gamemd {
char Campaign_WorldDominationTour_16::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // ecx
  _DWORD *i; // eax

  v2 = this->Capacity; /*0x7657f6*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x7657ff*/
  {
    v3 = 0; /*0x765801*/
    if ( v2 <= 0 ) /*0x765805*/
      return 1; /*0x76582b*/
    v4 = (_DWORD *)(this->Items + 4); /*0x76580d*/
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
} // namespace gamemd

// 0x765960
namespace gamemd {
int Campaign_WorldDominationTour_16::ddtor()
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))(this + 4); /*0x765966*/
  if ( v2 && this->IsAllocated ) /*0x76596d*/
  {
    result = (**v2)(v2, 3); /*0x76597a*/
    this->Items = 0; /*0x76597c*/
  }
  this->IsAllocated = 0; /*0x76597f*/
  this->Capacity = 0; /*0x765982*/
  return result; /*0x765985*/
}
} // namespace gamemd

// 0x765990
namespace gamemd {
int Campaign_WorldDominationTour_16::Read(int a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !this->IsInitialized ) /*0x765990*/
    return 0; /*0x765998*/
  v3 = this->Capacity; /*0x76599e*/
  result = 0; /*0x7659a1*/
  if ( v3 <= 0 ) /*0x7659a5*/
    return -1; /*0x7659c0*/
  for ( i = (_DWORD *)(this->Items + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x7659ae*/
  {
    if ( ++result >= v3 ) /*0x7659be*/
      return -1; /*0x7659be*/
  }
  return result; /*0x76599a*/
}
}
// 0x7659D0
namespace gamemd {
unsigned int Campaign_WorldDominationTour_16::Write(int a2)
{
  if ( this->IsInitialized ) /*0x7659d0*/
    return (unsigned int)(a2 - this->Items) >> 3; /*0x7659e5*/
  else
    return 0; /*0x7659d7*/
}
} // namespace gamemd

// 0x765B60
namespace gamemd {
VectorClass_flat * Campaign_WorldDominationTour_16::QueryInterface(char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = (void (__thiscall ***)(_DWORD, int))*(this + 1); /*0x765b63*/
  *(void **)this = (void*)&VectorClass_rc_ptr_WorldDominationTour_Conflict_vftable; /*0x765b66*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x765b70*/
  {
    (**v3)(v3, 3); /*0x765b7f*/
    *(this + 1) = 0; /*0x765b81*/
  }
  *((_BYTE *)this + 13) = 0; /*0x765b8c*/
  *(this + 2) = 0; /*0x765b92*/
  if ( (a2 & 1) != 0 ) /*0x765b99*/
    RA2_OPDEL(); /*0x765b9c*/
  return this; /*0x765ba6*/
}
} // namespace gamemd
