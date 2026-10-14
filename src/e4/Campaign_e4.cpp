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
#include "e4/classes/Conflict_e4.hpp"
#include "e4/classes/BINK_e4.hpp"
#include "e4/classes/VtableStub_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int CreateDialog(unsigned __int16 a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM), LPARAM a3); }  // x4:ida@0x622650

// 0x765840
namespace gamemd {  // G42.18 ns repair
int Campaign_WorldDominationTour_16::Release(int a2, unsigned int * a3)
{

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
    (*(void (**)(_VectorClass_V_rc_ptr_VConflict_WorldDominationTour *))(*(unsigned int *)this->__pad_000 + 12))(this); /*0x76594d*/
    return 1; /*0x765953*/
  }
  LOBYTE(this->m_C) = 0; /*0x765857*/
  if ( a3 ) /*0x76585d*/
  {
    *a3 = a2; /*0x7658a3*/
    v6 = (ComPtr *)(a3 + 1); /*0x7658a5*/
    if ( a2 - 1 >= 0 ) /*0x7658b1*/
    {
      v9 = a2; /*0x7658b3*/
      do /*0x7658c7*/
      {
        ComPtr::Constructor(v6); /*0x7658b8*/
        *(unsigned int *)v6->__pad_000 = &vt_rc_ptr; /*0x7658bd*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x7658c3*/
        --v9; /*0x7658c6*/
      }
      while ( v9 ); /*0x7658c7*/
      v6 = (ComPtr *)(a3 + 1); /*0x7658c9*/
    }
  }
  else
  {
    v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x765867*/
    if ( !v5 ) /*0x765871*/
    {
      v8 = 0; /*0x76589f*/
      goto LABEL_14; /*0x7658a1*/
    }
    *v5 = a2; /*0x765873*/
    v6 = (ComPtr *)(v5 + 1); /*0x765875*/
    v13 = (ComPtr *)(v5 + 1); /*0x76587b*/
    if ( a2 - 1 >= 0 ) /*0x765881*/
    {
      v7 = a2; /*0x765883*/
      do /*0x765897*/
      {
        ComPtr::Constructor(v6); /*0x765888*/
        *(unsigned int *)v6->__pad_0 = &vt_rc_ptr; /*0x76588d*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x765893*/
        --v7; /*0x765896*/
      }
      while ( v7 ); /*0x765897*/
      v6 = v13; /*0x765899*/
    }
  }
  v8 = v6; /*0x7658cd*/
LABEL_14:
  LOBYTE(this->m_C) = 1; /*0x7658cf*/
  if ( !v8 ) /*0x7658d5*/
    return 0; /*0x7658da*/
  if ( *&this->q004 ) /*0x7658e1*/
  {
    if ( a2 >= this->q008 ) /*0x7658ed*/
      m_8 = this->q008; /*0x7658ef*/
    for ( i = 0; i < m_8; ++i ) /*0x7658f5*/
      ComPtr::Set(&v8->ComPtr_field_0x08 * i), *(unsigned int *)(*&this->q004 + 8 * i + 4)); /*0x765902*/
    if ( BYTE1(this->m_C) ) /*0x76590c*/
    {
      v12 = *(void (****)(unsigned int, int))&this->q004; /*0x765913*/
      if ( v12 ) /*0x765918*/
        (**v12)(v12, 3); /*0x76591e*/
      *&this->q004 = 0; /*0x765920*/
    }
    m_8 = a2; /*0x765927*/
  }
  *&this->q004 = v8; /*0x765936*/
  this->q008 = m_8; /*0x765939*/
  BYTE1(this->m_C) = a3 == 0; /*0x76593c*/
  return 1; /*0x7658d7*/

}
}  // G42.18 ns repair
// 0x765700
namespace gamemd {
BOOL Campaign_WorldDominationTour_24::AddRef(void *a1_1)
{

  return *((unsigned int *)a1_1 + 2) < *(unsigned int *)(*(unsigned int *)&a1_1->m_1[3] + 16); /*0x76570d*/

}
}
// 0x765B40
namespace gamemd {
BOOL Campaign_WorldDominationTour_24::Release(void *a1_1)
{
  ++*((unsigned int *)a1_1 + 2); /*0x765b42*/
  return a1_1->__pad_0; /*0x765b45*/
}
}
// 0x765B50
namespace gamemd {
BOOL Campaign_WorldDominationTour_24::ddtor()
{

  --this->u32_8; /*0x765b52*/
  return this->q000; /*0x765b55*/

}
}
// 0x60D380
namespace gamemd {  // G42.18c ns repair
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
    Timer::PumpMessages(*(Timer **)&g_BinkMoviePlayer); /*0x60d3bd*/
    if ( a1 ) /*0x60d3c8*/
      BINK::Background_Setup((HWND)(Dialog)); /*0x60d3cc*/
    while ( !dwNewLong ) /*0x60d3d7*/
    {
      MessageLoop(); /*0x60d3d9*/
      if ( !*(unsigned int *)&dword_A8B238 /*0x60d3fc*/
        || *(unsigned int *)&dword_A8B238 == 5
        || (((unsigned char *)&(DataGlobal_A8D60C))[2])
        || dword_A8DAB4 )
      {
        Event::Dispatch(); /*0x60d412*/
      }
      else if ( !VtableStub::sub_55CBF0() && (uint8_t)GameFrameLoop(v5) ) /*0x60d407*/
      {
        break; /*0x60d40e*/
      }
    }
    ((Dialog *)((Dialog *)Dialog))->Destroy(); /*0x60d41f*/
    return dwNewLong; /*0x60d426*/
  }
  return result; /*0x60d42a*/
}
}  // G42.18c ns repair
// 0x7656D0
namespace gamemd {
unsigned int * Campaign_WorldDominationTour_16::Seek(unsigned int * a2, int a3, void *a3_2)
{
  int v3; // edi

  v3 = *&a3_2->u32_4 + 8 * a3_2; /*0x7656dd*/
  ComPtr::Constructor((ComPtr *)a3_2); /*0x7656e2*/
  *(unsigned int *)(a3_2) = &vt_rc_ptr; /*0x7656e7*/
  ComPtr::Set((ComPtr *)a3_2, v3->u32_4); /*0x7656f3*/
  return a3_2; /*0x7656fa*/
}
} // namespace gamemd

// 0x765710
namespace gamemd {
rc_ptr * Campaign_WorldDominationTour_16::Constructor(char a2)
{

  *this = (Campaign_WorldDominationTour)&vt_rc_ptr; /*0x765713*/
  ComPtr::Release((ComPtr *)this); /*0x765719*/
  if ( (a2 & 1) != 0 ) /*0x765723*/
    __3_YAXPAX_Z(this); /*0x765726*/
  return this; /*0x765730*/

}
} // namespace gamemd

// 0x765740
namespace gamemd {
rc_ptr * Campaign_WorldDominationTour_16::Constructor_0(char a2)
{

  *this = (Campaign_WorldDominationTour)&vt_rc_ptr; /*0x765743*/
  ComPtr::Release((ComPtr *)this); /*0x765749*/
  if ( (a2 & 1) != 0 ) /*0x765753*/
    __3_YAXPAX_Z(this); /*0x765756*/
  return this; /*0x765760*/

}
} // namespace gamemd

// 0x765770
namespace gamemd {
VectorCursor * Campaign_WorldDominationTour_16::Constructor_1(unsigned int * Block, char a2)
{
  *(unsigned int *)Block->tail_0 = &vt_VectorCursorrc_ptrDynamicVectorClassrc_ptr; /*0x765779*/
  if ( (a2 & 1) != 0 ) /*0x76577f*/
    operator delete((void *)(Block)); /*0x765782*/
  return Block->tail_0; /*0x76578c*/
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

  m_8 = this->q008; /*0x7657f6*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x7657ff*/
  {
    v3 = 0; /*0x765801*/
    if ( m_8 <= 0 ) /*0x765805*/
      return 1; /*0x76582b*/
    v4 = (unsigned int *)(*&this->q004 + 4); /*0x76580d*/
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
int Campaign_WorldDominationTour_16::ddtor()
{
  int (***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = *(int (****)(unsigned int, int))&this->q004; /*0x765966*/
  if ( v2 && (((unsigned char *)&(*&this->IsAllocated))[1]) ) /*0x76596d*/
  {
    result = (**v2)(v2, 3); /*0x76597a*/
    *&this->q004 = 0; /*0x76597c*/
  }
  (this->IsAllocated) = 0; /*0x76597f*/
  this->q008 = 0; /*0x765982*/
  return result; /*0x765985*/
}
} // namespace gamemd

// 0x765990
namespace gamemd {
int Campaign_WorldDominationTour_16::Read(int a2, void *a2_2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !(*((unsigned char *)&(a2_2->q00C))) ) /*0x765990*/
    return 0; /*0x765998*/
  m_8 = a2_2->q008; /*0x76599e*/
  result = 0; /*0x7659a1*/
  if ( m_8 <= 0 ) /*0x7659a5*/
    return -1; /*0x7659c0*/
  for ( i = (unsigned int *)(*(unsigned int *)&a2_2->q004 + 4); *i != *(unsigned int *)((unsigned int)(a2_2)+ 4); i += 2 ) /*0x7659ae*/
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
  if ( (this->m_C) ) /*0x7659d0*/
    return (unsigned int)(a2 - *&this->q004) >> 3; /*0x7659e5*/
  else
    return 0; /*0x7659d7*/
}
} // namespace gamemd

// 0x765B60
namespace gamemd {
VectorClass_flat * Campaign_WorldDominationTour_16::QueryInterface(unsigned int * Block, char a2)
{
  void (***v3)(unsigned int, int); // ecx

  v3 = *(void (****)(unsigned int, int))&Block->__pad_004; /*0x765b63*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClassrc_ptr; /*0x765b66*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x765b70*/
  {
    (**v3)(v3, 3); /*0x765b7f*/
    *&Block->__pad_004 = 0; /*0x765b81*/
  }
  (Block->u32_D) = 0; /*0x765b8c*/
  Block->u32_8 = 0; /*0x765b92*/
  if ( (a2 & 1) != 0 ) /*0x765b99*/
    operator delete((void *)(Block)); /*0x765b9c*/
  return Block->tail_0; /*0x765ba6*/
}
} // namespace gamemd
