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
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/CaptureManagerClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/CampaignProperties_WorldDominationTour_22_e4.hpp"
#include "e4/classes/Carryall_e4.hpp"

// 0x765840
namespace gamemd {
int Campaign_WorldDominationTour_16::Release(int a2, unsigned int * a3)
{
    unsigned int v5 = 0;  /* G37 hoist */
    unsigned int v5 = 0;  /* G37 hoist */
    unsigned int v5 = 0;  /* G37 hoist */
    unsigned int v5 = 0;  /* G37 hoist */
    unsigned int v5 = 0;  /* G37 hoist */
    unsigned int v5 = 0;  /* G37 hoist */
    unsigned int v5 = 0;  /* G37 hoist */
    unsigned int v5 = 0;  /* G37 hoist */
    unsigned int v5 = 0;  /* G37 hoist */
  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // esi
  int v7; // ebx
  ComPtr *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (***v12)(unsigned int, int); // ecx
  ComPtr *v13; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x765843*/
  if ( !a2 ) /*0x76584d*/
  {
        (*(void (**)(unsigned char *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x765953*/
  }
    *((unsigned int *)this + 48) = 0;
  if ( a3 ) /*0x76585d*/
  {
    *a3 = a2; /*0x7658a3*/
    v6 = (ComPtr *)(a3 + 1); /*0x7658a5*/
    if ( a2 - 1 >= 0 ) /*0x7658b1*/
    {
      v9 = (unsigned int)(a2);
      do /*0x7658c7*/
      {
        ComPtr::Constructor(v6); /*0x7658b8*/
        *(unsigned int *)v6->__pad_0 = (void*)&rc_ptr_WorldDominationTour_Conflict_vftable; /*0x7658bd*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x7658c3*/
        --v9; /*0x7658c6*/
      }
      while ( v9 ); /*0x7658c7*/
      v6 = (ComPtr *)(a3 + 1); /*0x7658c9*/
    }
  }
  else
  {
    v5 = (unsigned int)((int *)RA2_OPNEW(8 * a2 + 4));
    if ( !v5 ) /*0x765871*/
    {
      v8 = 0; /*(unsigned int *)(0x76589f)*/
      goto LABEL_14; /*0x7658a1*/
    }
    *(unsigned int *)(v5) = a2; /*0x765873*/
    v6 = (ComPtr *)(v5 + 1); /*0x765875*/
    v13 = (ComPtr *)(v5 + 1); /*0x76587b*/
    if ( a2 - 1 >= 0 ) /*0x765881*/
    {
      v7 = (unsigned int)(a2);
      do /*0x765897*/
      {
        ComPtr::Constructor(v6); /*0x765888*/
        *(unsigned int *)v6->__pad_0 = (void*)&rc_ptr_WorldDominationTour_Conflict_vftable; /*0x76588d*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x765893*/
        --v7; /*0x765896*/
      }
      while ( v7 ); /*0x765897*/
      v6 = v13; /*0x765899*/
    }
  }
  v8 = v6; /*0x7658cd*/
  LABEL_14:
    *((unsigned int *)this + 48) = 1;
  if ( !v8 ) /*0x7658d5*/
    return 0; /*0x7658da*/
    if ( *((unsigned int *)this + 1) )
  {
        if ( a2 >= *((unsigned int *)this + 2) )
            v3 = *((unsigned int *)this + 2);
    for ( i = 0; i < m_8; ++i ) /*0x7658f5*/
            ComPtr::Set(&v8[2 * i], *(unsigned int *)(*((unsigned int *)this + 1) + 8 * i + 4));
        if ( *((unsigned int *)this + 52) )
    {
            v12 = (void (***)(unsigned int, int))*((unsigned int *)this + 1);
      if ( v12 ) /*0x765918*/
        (**v12)(v12, 3); /*0x76591e*/
            *((unsigned int *)this + 1) = 0;
    }
    m_8 = a2; /*0x765927*/
  }
    *((unsigned int *)this + 1) = v8;
    *((unsigned int *)this + 2) = v3;
    *((unsigned int *)this + 52) = a3 == 0;
  return 1; /*0x7658d7*/
}
}
// 0x765700
namespace gamemd {
BOOL Campaign_WorldDominationTour_24::AddRef(void *a1 = 0)
{
    return *((unsigned int *)this + 8) < *(unsigned int *)(*((unsigned int *)this + 4) + 16);
}
}
// 0x765B40
namespace gamemd {
BOOL Campaign_WorldDominationTour_24::Release(void *a1 = 0)
{
    ++*((unsigned int *)this + 8);
  return this; /*0x765b45*/
}
}
// 0x765B50
namespace gamemd {
BOOL Campaign_WorldDominationTour_24::ddtor(void *a1 = 0)
{
    --*((unsigned int *)this + 8);
  return this; /*0x765b55*/
}
}
// 0x60D380
LONG Campaign::Screen(char a1)
{
  INT_PTR (__stdcall *v1)(HWND, UINT, WPARAM, LPARAM); // edx
  uint16_t v2; // cx
  BINK *Dialog; // esi
  int result; // eax
  ObjectClass *v5; // [esp+0h] [ebp-8h]
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  Dialog = (BINK *)CreateDialog(v2, v1, 0); /*0x60d389*/
  result = 0; /*0x60d38b*/
  dwNewLong = 0; /*0x60d38f*/
  if ( Dialog ) /*0x60d393*/
  {
    SetWindowLongA((HWND)Dialog, 8, (LONG)&dwNewLong); /*0x60d3a1*/
    ShowWindow((HWND)Dialog, 1); /*0x60d3aa*/
    SetForegroundWindow((HWND)Dialog); /*0x60d3b1*/
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x60d3bd*/
    if ( a1 ) /*0x60d3c8*/
      BINK::Background_Setup(Dialog); /*0x60d3cc*/
    while ( !dwNewLong ) /*0x60d3d7*/
    {
      MessageLoop(); /*0x60d3d9*/
      if ( !*(unsigned int *)&dword_A8B238 /*0x60d3fc*/
        || *(unsigned int *)&dword_A8B238 == 5
        || IDA_BYTE2(stru_A8D600.Network_field_0xC)
        || dword_A8DAB4 )
      {
        Event::Dispatch(); /*0x60d412*/
      }
      else if ( !VtableStub::55CBF0() && (uint8_t)GameFrameLoop(v5) ) /*0x60d407*/
      {
        break; /*0x60d40e*/
      }
    }
    Dialog::Destroy((Dialog *)Dialog); /*0x60d41f*/
    return dwNewLong; /*0x60d426*/
  }
  return result; /*0x60d42a*/
}
// 0x7656D0
namespace gamemd {
unsigned int * Campaign_WorldDominationTour_16::Seek(unsigned int * a2, int a3)
{
  int v3; // edi

    v3 = *((unsigned int *)this + 4) + 8 * a3;
  ComPtr::Constructor((ComPtr *)a2); /*0x7656e2*/
  *(void **)a2 = (void*)&rc_ptr_WorldDominationTour_Conflict_vftable; /*0x7656e7*/
  ((ComPtr *)((ComPtr *)a2))->Set(v3->q010); /*0x7656f3*/
  return a2; /*0x7656fa*/
}
} // namespace gamemd

// 0x765710
namespace gamemd {
rc_ptr * Campaign_WorldDominationTour_16::Constructor(char a2)
{
  *this = (Campaign_WorldDominationTour)(void*)&rc_ptr_WorldDominationTour_CampaignProperties_vftable; /*0x765713*/
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
  *this = (Campaign_WorldDominationTour)(void*)&rc_ptr_WorldDominationTour_History_vftable; /*0x765743*/
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
  *(unsigned int *)this->__pad_0 = (void*)&VectorCursor_rc_ptr_WorldDominationTour_Conflict_DynamicVectorClass_rc_ptr_WorldDominationTour_Conflict_vftable; /*0x765779*/
  if ( (a2 & 1) != 0 ) /*0x76577f*/
    RA2_OPDEL(); /*0x765782*/
  return this; /*0x76578c*/
}
} // namespace gamemd

// 0x7657F0
namespace gamemd {
char Campaign_WorldDominationTour_16::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // ecx
  unsigned int *i; // eax

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x7657ff*/
  {
    v3 = 0; /*0x765801*/
    if ( m_8 <= 0 ) /*0x765805*/
      return 1; /*0x76582b*/
        v4 = (unsigned int *)(*((unsigned int *)this + 4) + 4);
    for ( i = (unsigned int *)(*(unsigned int *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x765810*/
    {
      ++v3; /*0x76581b*/
      v4 += 2; /*0x76581f*/
      if ( v3 >= m_8 ) /*0x765824*/
        return 1; /*0x765824*/
    }
  }
  return 0; /*0x765826*/
}
} // namespace gamemd

// 0x765960
namespace gamemd {
int Campaign_WorldDominationTour_16::ddtor(void *a1 = 0)
{
  int (***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = *(int (****)(unsigned int, int))&this->q004; /*0x765966*/
    if ( v2 && *((unsigned char *)this + 52) )
  {
    result = (**v2)(v2, 3); /*0x76597a*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
  return result; /*0x765985*/
}
} // namespace gamemd

// 0x765990
namespace gamemd {
int Campaign_WorldDominationTour_16::Read(void *a1 = 0)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x765998*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x7659a1*/
  if ( m_8 <= 0 ) /*0x7659a5*/
    return -1; /*0x7659c0*/
    for ( i = (unsigned int *)(*((unsigned int *)this + 16) + 4); *i != *(unsigned int *)(a2 + 4); i += 2 )
  {
    if ( ++result >= m_8 ) /*0x7659be*/
      return -1; /*0x7659be*/
  }
  return result; /*0x76599a*/
}
}
// 0x7659D0
namespace gamemd {
unsigned int Campaign_WorldDominationTour_16::Write(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x7659d7*/
}
} // namespace gamemd

// 0x765B60
namespace gamemd {
VectorClass_flat * Campaign_WorldDominationTour_16::QueryInterface(char a2)
{
  void (***v3)(unsigned int, int); // ecx

  v3 = (unsigned int)(*(void (****)(unsigned int, int))&this->q004);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_rc_ptr_WorldDominationTour_Conflict_vftable; /*0x765b66*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    (**v3)(v3, 3); /*0x765b7f*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::VectorClass_flat *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x765b99*/
    RA2_OPDEL(); /*0x765b9c*/
  return this; /*0x765ba6*/
}
} // namespace gamemd
