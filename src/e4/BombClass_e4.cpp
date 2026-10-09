// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioFileClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Bounds_e4.hpp"
#include "e4/classes/CreateTeamCommand_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/classes/BlowStraw_29_e4.hpp"
#include "e4/classes/TabClass_e4.hpp"
#include "e4/classes/BlowPipe_23_e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/E4Recv_438A60_e4.hpp"
#include "e4/classes/CountdownTimer_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"

// 0x4385D0
namespace gamemd {
int BombClass::AbstractClass()
{
  int v2; // eax

  AbstractClass::Constructor(); /*0x4385d4*/
  this->BombClass_field_54 = 0; /*0x4385de*/
  this->vfptr = &(void*)(void*)&BombClass_vftable; /*0x4385e1*/
  this->vfptr1 = &(void*)(void*)&BombClass_vftable; /*0x4385e7*/
  this->vfptr2 = &(void*)(void*)&BombClass_vftable; /*0x4385ee*/
  this->vfptr3 = &(void*)(void*)&BombClass_vftable; /*0x4385f5*/
  this->BombClass_field_28 = 0; /*0x4385fc*/
  this->BombClass_field_2C = 0; /*0x4385ff*/
  this->BombClass_field_58 = 0; /*0x438602*/
  AudioController::Init((AudioController *)&this->audioController[3]); /*0x438605*/
  *(_DWORD *)&this->q048[8] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.q0FC[324] + 524); /*0x438615*/
  if ( dword_89C678 < dword_89C670 /*0x43864a*/
    || (byte_89C675 || !dword_89C670)
    && dword_89C67C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89C668 + 8))(
         &dword_89C668,
         dword_89C670 + dword_89C67C,
         0) )
  {
    v2 = dword_89C678++; /*0x438657*/
    *((_DWORD *)dword_89C66C + v2) = this; /*0x438666*/
  }
  return (int)this; /*0x43866b*/
}
} // namespace ra2

// 0x438A00
namespace gamemd {
void * BombClass::GetCurrentFrame()
{
  int v2; // ecx

  if ( this->audioController[0] == 1 ) /*0x438a04*/
    return (Iostream_init *)12; /*0x438a06*/
  v2 = 2 /*0x438a4c*/
     * ((*(_DWORD *)&stru_A8EB00.?[416] - this->audioController[1])
      / (*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.q0FC[324] + 4048)
       / 6));
  if ( *(_DWORD *)&stru_A8EB00.?[416] % (2 * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.q0FC[324] + 4056)) >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.q0FC[324] + 4056) ) /*0x438a53*/
    ++v2; /*0x438a55*/
  if ( v2 < 12 ) /*0x438a59*/
    return __0Iostream_init_QAE_XZ_1((Iostream_init *)v2); /*0x438a59*/
  else
    return __0Iostream_init_QAE_XZ_1((Iostream_init *)0xB); /*0x438a5c*/
}
} // namespace ra2

// 0x438A70
namespace gamemd {
int BombClass::TimeToExplode()
{
  return !this->audioController[0] /*0x438a8c*/
      && *(int *)&stru_A8EB00.?[416] > this->audioController[2]
      && !this->BombClass_field_58;
}
} // namespace ra2

// 0x438A90
namespace gamemd {
int BombClass::Stat(int * a2)
{
  int v3; // edx
  int BombClass_field_28; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int BombClass_field_2C; // eax
  int v9; // eax

  AbstractClass::ProcessPower(); /*0x438a99*/
  BombClass_field_28 = this->BombClass_field_28; /*0x438a9e*/
  if ( BombClass_field_28 ) /*0x438aa3*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(BombClass_field_28 + 4) + 16))(BombClass_field_28 + 4); /*0x438aac*/
    Power::TimerProcess(v5); /*0x438ab2*/
  }
  v6 = *(_DWORD *)this->q024; /*0x438ab7*/
  if ( v6 ) /*0x438abc*/
  {
    v7 = (*(int (__stdcall **)(int))(*(_DWORD *)(v6 + 4) + 16))(v6 + 4); /*0x438ac5*/
    Power::TimerProcess(v7); /*0x438acb*/
  }
  BombClass_field_2C = this->BombClass_field_2C; /*0x438ad0*/
  if ( BombClass_field_2C ) /*0x438ad5*/
  {
    v9 = (*(int (__stdcall **)(int))(*(_DWORD *)(BombClass_field_2C + 4) + 16))(BombClass_field_2C + 4); /*0x438ade*/
    Power::TimerProcess(v9); /*0x438ae4*/
  }
  IDA_LOBYTE(v3) = this->BombClass_field_58; /*0x438ae9*/
  return Power::FlagProcess((Power *)a2, v3); /*0x438af4*/
}
} // namespace ra2

// 0x438550
namespace gamemd {
int BombClass::InitPool()
{
  dword_89C66C = 0; /*0x438557*/
  dword_89C670 = 0; /*0x43855c*/
  byte_89C674 = 1; /*0x438561*/
  byte_89C675 = 0; /*0x438568*/
  dword_89C668 = (int)&(void*)(void*)&DynamicVectorClass_BombClass___vftable; /*0x43856d*/
  dword_89C67C = 10; /*0x438577*/
  dword_89C678 = 0; /*0x438581*/
  return atexit(globalHelper_038590); /*0x43858c*/
}
} // namespace gamemd

// 0x4389F0
namespace gamemd {
int BombClass::IsDeathBomb()
{
  return this->audioController[0]; /*0x4389f3*/
}
} // namespace gamemd

// 0x438B00
namespace gamemd {
int BombClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x438b06*/
    return -2147467261; /*0x438b08*/
  *a2 = 108652931; /*0x438b16*/
  a2[1] = 299085213; /*0x438b1e*/
  a2[2] = 268441278; /*0x438b27*/
  a2[3] = unk_7E98BC; /*0x438b30*/
  return 0; /*0x438b0d*/
}
} // namespace gamemd

// 0x438B40
namespace gamemd {
int BombClass::Write(int a2, int aP0, int aP1, int a1, int aP2)
{
  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x438b51*/
  if ( Prefix_0 >= 0 ) /*0x438b55*/
  {
    if ( this ) /*0x438b59*/
    {
      AbstractClass::InitVtables((int)&a2); /*0x438b62*/
      this->vfptr = &(void*)(void*)&BombClass_vftable; /*0x438b67*/
      this->vfptr1 = &(void*)(void*)&BombClass_vftable; /*0x438b6d*/
      this->vfptr2 = &(void*)(void*)&BombClass_vftable; /*0x438b74*/
      this->vfptr3 = &(void*)(void*)&BombClass_vftable; /*0x438b7b*/
    }
    AudioController::Init((AudioController *)&this->audioController[3]); /*0x438b85*/
    this->BombClass_field_54 = 0; /*0x438b8d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->BombClass_field_28); /*0x438b9a*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this->q024); /*0x438ba8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->BombClass_field_2C); /*0x438bb6*/
  }
  return Prefix_0; /*0x438bbd*/
}
} // namespace gamemd

// 0x438BD0
namespace gamemd {
int BombClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x438be4*/
}
} // namespace gamemd

// 0x4393F0
namespace gamemd {
BombClass * BombClass::CopyTo(char a2)
{
  int v3; // eax
  BombClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->vfptr = &(void*)(void*)&BombClass_vftable; /*0x4393f7*/
  this->vfptr1 = &(void*)(void*)&BombClass_vftable; /*0x4393fd*/
  this->vfptr2 = &(void*)(void*)&BombClass_vftable; /*0x439404*/
  this->vfptr3 = &(void*)(void*)&BombClass_vftable; /*0x43940b*/
  AudioFileClass::Release((AudioFileClass *)&this->audioController[3]); /*0x439412*/
  v5 = this; /*0x439427*/
  v3 = (*(int (__thiscall **)(int *, BombClass **))(dword_89C668 + 16))(&dword_89C668, &v5); /*0x43942b*/
  if ( v3 != -1 && v3 < dword_89C678 && v3 < --dword_89C678 ) /*0x439446*/
  {
    do /*0x43945e*/
    {
      ++v3; /*0x43944e*/
      *((_DWORD *)dword_89C66C + v3 - 1) = *((_DWORD *)dword_89C66C + v3); /*0x439452*/
    }
    while ( v3 < dword_89C678 ); /*0x43945e*/
  }
  AbstractClass::DTOR(); /*0x439462*/
  if ( (a2 & 1) != 0 ) /*0x43946c*/
    RA2_OPDEL(); /*0x43946f*/
  return &this->vfptr; /*0x439479*/
}
} // namespace gamemd
