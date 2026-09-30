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

  int v3; // ebp
  unsigned int *v5; // eax
  unsigned int *v6; // esi
  int v7; // ebx
  unsigned int *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (***v12)(unsigned int, int); // ecx
  unsigned int *v13; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x765843*/
  if ( !a2 ) /*0x76584d*/
  {
    char Campaign_WorldDominationTour_16::Release( _VectorClass_V_rc_ptr_VConflict_WorldDominationTour *this, int a2, unsigned int *a3)
    return 1; /*0x765953*/
  }
  *((unsigned char *)this + 12) = 0; /*0x765857*/
  if ( a3 ) /*0x76585d*/
  {
    *a3 = a2; /*0x7658a3*/
    v6 = a3 + 1; /*0x7658a5*/
    if ( a2 - 1 >= 0 ) /*0x7658b1*/
    {
      v9 = a2; /*0x7658b3*/
      do /*0x7658c7*/
      {
        ((ComPtr *)(v6))->Constructor(); /*0x7658b8*/
        *v6 = &vt_rc_ptr_WorldDominationTour_Conflict; /*0x7658bd*/
        v6 += 2; /*0x7658c3*/
        --v9; /*0x7658c6*/
      }
      while ( v9 ); /*0x7658c7*/
      v6 = a3 + 1; /*0x7658c9*/
    }
  }
  else
  {
    v5 = (unsigned int *)(RA2_OPNEW(8 * a2 + 4));
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
        ((ComPtr *)(v6))->Constructor(); /*0x765888*/
        *v6 = &vt_rc_ptr_WorldDominationTour_Conflict; /*0x76588d*/
        v6 += 2; /*0x765893*/
        --v7; /*0x765896*/
      }
      while ( v7 ); /*0x765897*/
      v6 = v13; /*0x765899*/
    }
  }
  v8 = v6; /*0x7658cd*/
LABEL_14:
  *((unsigned char *)this + 12) = 1; /*0x7658cf*/
  if ( !v8 ) /*0x7658d5*/
    return 0; /*0x7658da*/
  if ( *((unsigned int *)this + 1) ) /*0x7658e1*/
  {
    if ( a2 >= *((unsigned int *)this + 2) ) /*0x7658ed*/
      v3 = *((unsigned int *)this + 2); /*0x7658ef*/
    for ( i = 0; i < v3; ++i ) /*0x7658f5*/
      ((ComPtr *)(&v8[2 * i]))->Set(*(unsigned int *)(*((unsigned int *)this + 1) + 8 * i + 4)); /*0x765902*/
    if ( *((unsigned char *)this + 13) ) /*0x76590c*/
    {
      v12 = (void (***)(unsigned int, int))*((unsigned int *)this + 1); /*0x765913*/
      if ( v12 ) /*0x765918*/
        (**v12)(v12, 3); /*0x76591e*/
      *((unsigned int *)this + 1) = 0; /*0x765920*/
    }
    v3 = a2; /*0x765927*/
  }
  *((unsigned int *)this + 1) = v8; /*0x765936*/
  *((unsigned int *)this + 2) = v3; /*0x765939*/
  *((unsigned char *)this + 13) = a3 == 0; /*0x76593c*/
  return 1; /*0x7658d7*/

}
}
// 0x765700
namespace gamemd {
BOOL Campaign_WorldDominationTour_24::AddRef()
{

  return *((unsigned int *)this + 2) < *(unsigned int *)(*((unsigned int *)this + 1) + 16); /*0x76570d*/

}
}
// 0x765B40
namespace gamemd {
BOOL Campaign_WorldDominationTour_24::Release()
{

  ++*((unsigned int *)this + 2); /*0x765b42*/
  return this; /*0x765b45*/

}
}
// 0x765B50
namespace gamemd {
BOOL Campaign_WorldDominationTour_24::ddtor()
{

  --*((unsigned int *)this + 2); /*0x765b52*/
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
    Timer::PumpMessages(g_abs_87F770); /*0x60d3bd*/
    if ( a1 ) /*0x60d3c8*/
      BINK::Background_Setup(v1); /*0x60d3cc*/
    while ( !dwNewLong ) /*0x60d3d7*/
    {
      MessageLoop(); /*0x60d3d9*/
      if ( !g_abs_A8B238 || g_abs_A8B238 == (unsigned char [1])((unsigned char [1]))((unsigned char [1]))(5) || g_abs_A8D60E || g_abs_A8DAB4 ) /*0x60d3fc*/
      {
        Event::Dispatch(); /*0x60d412*/
      }
      else if ( !(uint8_t)VtableStub::Method_55CBF0() && GameFrameLoop() ) /*0x60d407*/
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

  v3 = *((unsigned int *)this + 1) + 8 * a3; /*0x7656dd*/
  ((ComPtr *)(a2))->Constructor(); /*0x7656e2*/
  *a2 = &vt_rc_ptr_WorldDominationTour_Conflict; /*0x7656e7*/
  ((ComPtr *)(a2))->Set(*(unsigned int *)(v3 + 4)); /*0x7656f3*/
  return a2; /*0x7656fa*/

}
} // namespace gamemd

// 0x765710
namespace gamemd {
rc_ptr * Campaign_WorldDominationTour_16::Constructor(unsigned int * Block, char a2)
{

  *Block = &vt_rc_ptr_WorldDominationTour_CampaignProperties; /*0x765713*/
  ComPtr::Release(Block); /*0x765719*/
  if ( (Block & 1) != 0 ) /*0x765723*/
    RA2_OPDEL(Block); /*0x765726*/
  return (rc_ptr *)Block; /*0x765730*/

}
} // namespace gamemd

// 0x765740
namespace gamemd {
rc_ptr * Campaign_WorldDominationTour_16::Constructor_0(unsigned int * Block, char a2)
{

  *Block = &vt_rc_ptr_WorldDominationTour_History; /*0x765743*/
  ComPtr::Release(Block); /*0x765749*/
  if ( (Block & 1) != 0 ) /*0x765753*/
    RA2_OPDEL(Block); /*0x765756*/
  return (rc_ptr *)Block; /*0x765760*/

}
} // namespace gamemd

// 0x765770
namespace gamemd {
VectorCursor * Campaign_WorldDominationTour_16::Constructor_1(unsigned int * Block, char a2)
{

  *Block = (unsigned int)(&vt_VectorCursor_rc_ptr_WorldDominationTour_Conflict_DynamicVectorClass_rc_ptr_WorldDominationTour_Conflict);
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x76577f*/
    RA2_OPDEL(Block); /*0x765782*/
  return (VectorCursor *)Block; /*0x76578c*/

}
} // namespace gamemd

// 0x7657F0
namespace gamemd {
char Campaign_WorldDominationTour_16::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // ecx
  unsigned int *i; // eax

  v2 = *((char *)this + 2); /*0x7657f6*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x7657ff*/
  {
    v3 = 0; /*0x765801*/
    if ( v2 <= 0 ) /*0x765805*/
      return 1; /*0x76582b*/
    v4 = (unsigned int *)(*((char *)this + 1) + 4); /*0x76580d*/
    for ( i = (unsigned int *)(*(unsigned int *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x765810*/
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

  int (***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = *(int (****)(unsigned int, int))((char *)this + 4); /*0x765966*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x76596d*/
  {
    result = (**v2)(v2, 3); /*0x76597a*/
    *((unsigned int *)this + 1) = 0; /*0x76597c*/
  }
  *((unsigned char *)this + 13) = 0; /*0x76597f*/
  *((unsigned int *)this + 2) = 0; /*0x765982*/
  return result; /*0x765985*/

}
} // namespace gamemd

// 0x765990
namespace gamemd {
int Campaign_WorldDominationTour_16::Read(int a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*(unsigned char *)(this + 12) ) /*0x765990*/
    return 0; /*0x765998*/
  v3 = *(unsigned int *)(this + 8); /*0x76599e*/
  result = 0; /*0x7659a1*/
  if ( v3 <= 0 ) /*0x7659a5*/
    return -1; /*0x7659c0*/
  for ( i = (unsigned int *)(*(unsigned int *)(this + 4) + 4); *i != *(unsigned int *)(a2 + 4); i += 2 ) /*0x7659ae*/
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

  if ( *((unsigned char *)this + 12) ) /*0x7659d0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 3; /*0x7659e5*/
  else
    return 0; /*0x7659d7*/

}
} // namespace gamemd

// 0x765B60
namespace gamemd {
VectorClass_flat * Campaign_WorldDominationTour_16::QueryInterface(unsigned int * Block, char a2)
{

  void (***v3)(unsigned int, int); // ecx

  v3 = (unsigned int)((void (***)(unsigned int, int))*(Block + 1));
  *Block = (unsigned int)(&vt_VectorClass_rc_ptr_WorldDominationTour_Conflict);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x765b70*/
  {
    (**v3)(v3, 3); /*0x765b7f*/
    *(Block + 1) = 0; /*0x765b81*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x765b8c*/
  *(Block + 2) = 0; /*0x765b92*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x765b99*/
    RA2_OPDEL(Block); /*0x765b9c*/
  return (VectorClass *)Block; /*0x765ba6*/

}
} // namespace gamemd
