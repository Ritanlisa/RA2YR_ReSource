// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Campaign_WorldDominationTour_16_e4.hpp"
#include "e4/classes/Campaign_WorldDominationTour_24_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

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
    (*(void (__thiscall **)(_BYTE *))(this->q00C)(this); /*0x76594d*/
    return 1; /*0x765953*/
  }
  this->q00C = 0; /*0x765857*/
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
  this->q00C = 1; /*0x7658cf*/
  if ( !v8 ) /*0x7658d5*/
    return 0; /*0x7658da*/
  if ( this->Campaign_WorldDominationTour_16_field_0x4 ) /*0x7658e1*/
  {
    if ( a2 >= this->Campaign_WorldDominationTour_16_field_0x8 ) /*0x7658ed*/
      v3 = this->Campaign_WorldDominationTour_16_field_0x8; /*0x7658ef*/
    for ( i = 0; i < v3; ++i ) /*0x7658f5*/
      ComPtr::Set(&v8[2 * i], *(_DWORD *)(this->Campaign_WorldDominationTour_16_field_0x4 + 8 * i + 4)); /*0x765902*/
    if ( this->IsAllocated ) /*0x76590c*/
    {
      v12 = (void (__thiscall ***)(_DWORD, int))this->Campaign_WorldDominationTour_16_field_0x4; /*0x765913*/
      if ( v12 ) /*0x765918*/
        (**v12)(v12, 3); /*0x76591e*/
      this->Campaign_WorldDominationTour_16_field_0x4 = 0; /*0x765920*/
    }
    v3 = a2; /*0x765927*/
  }
  this->Campaign_WorldDominationTour_16_field_0x4 = v8; /*0x765936*/
  this->Campaign_WorldDominationTour_16_field_0x8 = v3; /*0x765939*/
  this->IsAllocated = a3 == 0; /*0x76593c*/
  return 1; /*0x7658d7*/
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

// 0x60D380
LONG Campaign::Screen(char a1)
{
{
    HWND v1;
    LONG result;
    LONG dwNewLong;
    v1 = (HWND)CreateDialog(0);
    result = 0;
    dwNewLong = 0;
    if ( v1 )
  {
    SetWindowLongA(v1, 8, (LONG)&dwNewLong);
    ShowWindow(v1, 1);
    SetForegroundWindow(v1);
    Timer::PumpMessages(g_BinkMoviePlayer);
    if ( a1 )
    BINK::Background_Setup(v1);
    while ( !dwNewLong )
    {
    MessageLoop();
    if ( !g_GameMode_Current || g_GameMode_Current == 5 || g_NetworkQuitFlag || g_GameFlags_Campaign )
      {
    Event::Dispatch();
      }
    else if ( !(unsigned char)VtableStub::Method_55CBF0() && GameFrameLoop() )
      {
    break;
      }
    }
    Dialog::Destroy(v1);
    return dwNewLong;
  }
    return result;
}
}

// 0x7656D0
namespace gamemd {
unsigned int * Campaign_WorldDominationTour_16::Seek(unsigned int * a2, int a3)
{
{
    int v3;
    v3 = this->Items + 8 * a3;
    ComPtr::Constructor(a2);
    *a2 = &vt_rc_ptr_WorldDominationTour_Conflict;
    ComPtr::Set(a2, *(int *)(v3 + 4));
    return a2;
}
}
} // namespace gamemd

// 0x765710
namespace gamemd {
rc_ptr * Campaign_WorldDominationTour_16::Constructor(char a2)
{
{
    *(void**)this = &vt_rc_ptr_WorldDominationTour_CampaignProperties;
    ComPtr::Release(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (rc_ptr *)this;
}
}
} // namespace gamemd

// 0x765740
namespace gamemd {
rc_ptr * Campaign_WorldDominationTour_16::Constructor_0(char a2)
{
{
    *(void**)this = &vt_rc_ptr_WorldDominationTour_History;
    ComPtr::Release(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (rc_ptr *)this;
}
}
} // namespace gamemd

// 0x765770
namespace gamemd {
VectorCursor * Campaign_WorldDominationTour_16::Constructor_1(char a2)
{
{
    *(void**)this = &vt_VectorCursor_rc_ptr_WorldDominationTour_Conflict_DynamicVectorClass_rc_ptr_WorldDominationTour_Conflict;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorCursor *)this;
}
}
} // namespace gamemd

// 0x7657F0
namespace gamemd {
char Campaign_WorldDominationTour_16::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int *i;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)(this->Items + 4);
    for ( i = (int *)(*(int *)(a2 + 4) + 4); *v4 == *i; i += 2 )
    {
    ++v3;
    v4 += 2;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x765960
namespace gamemd {
int Campaign_WorldDominationTour_16::ddtor()
{
{
    int (__thiscall ***v2)(int, int);
    int result;
    v2 = *(int (__thiscall ****)(int, int))(this + 4);
    if ( v2 && this->IsAllocated )
  {
    result = (**v2)(v2, 3);
    this->Campaign_WorldDominationTour_16_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->Campaign_WorldDominationTour_16_field_0x8 = 0;
    return result;
}
}
} // namespace gamemd

// 0x765990
namespace gamemd {
int Campaign_WorldDominationTour_16::Read(int a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->Campaign_WorldDominationTour_16_field_0xC )
    return 0;
    v3 = this->Campaign_WorldDominationTour_16_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = (int *)(this->Campaign_WorldDominationTour_16_field_0x4 + 4); *i != *(int *)(a2 + 4); i += 2 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
} // namespace gamemd

}
// 0x7659D0
namespace gamemd {
unsigned int Campaign_WorldDominationTour_16::Write(int a2)
{
{
    if ( (unsigned char)this->Campaign_WorldDominationTour_16_field_0xC )
    return (unsigned int)(a2 - this->Campaign_WorldDominationTour_16_field_0x4) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x765B60
namespace gamemd {
VectorClass * Campaign_WorldDominationTour_16::QueryInterface(char a2)
{
{
    void (__thiscall ***v3)(int, int);
    v3 = (void (__thiscall ***)(int, int))*(this + 1);
    *(void**)this = &vt_VectorClass_rc_ptr_WorldDominationTour_Conflict;
    if ( v3 && *((char *)(this) + 13) )
  {
    (**v3)(v3, 3);
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
