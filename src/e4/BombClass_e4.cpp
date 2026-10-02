// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/AudioFileClass_e4.hpp"
#include "e4/e4_globals.hpp"
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

// 0x4385D0
namespace gamemd {
int BombClass::AbstractClass()
{

  int v2; // eax

  ((AbstractClass*)(gamemd::AbstractClass *)this)->Constructor(); /*0x4385d4*/
  this->BombClass_field_54 = 0; /*0x4385de*/
  this->vtable1 = &vt_BombClass; /*0x4385e1*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_BombClass); /*0x4385e7*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_BombClass); /*0x4385ee*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_BombClass); /*0x4385f5*/
  this->BombClass_field_28 = 0; /*0x4385fc*/
  this->BombClass_field_2C = 0; /*0x4385ff*/
  this->BombClass_field_58 = 0; /*0x438602*/
  ((AudioController*)(AudioController *)&(&this->audioController)[3])->Init(); /*0x438605*/
  *(unsigned int *)&this->__pad_48[8] = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 524); /*0x438615*/
  if ( dword_89C678 < dword_89C670 /*0x43864a*/
    || (byte_89C675 || !dword_89C670)
    && dword_89C67C > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_89C668 + 8))(
         (int *)&dword_89C668,
         dword_89C670 + dword_89C67C,
         0) )
  {
    v2 = (unsigned int)(dword_89C678++);
    *((unsigned int *)dword_89C66C + v2) = (unsigned int)(this); /*0x438666*/
  }
  return (int)this; /*0x43866b*/

}
} // namespace ra2

// 0x438A00
namespace gamemd {
void * BombClass::GetCurrentFrame()
{

  int v2; // ecx

  if ( (&this->audioController)[0] == 1 ) /*0x438a04*/
    return (Iostream_init *)12; /*0x438a06*/
  v2 = 2 /*0x438a4c*/
     * ((*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416) - (&this->audioController)[1])
      / (*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4048)
       / 6));
  if ( *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416) % (2 * *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4056)) >= *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4056) ) /*0x438a53*/
    ++v2; /*0x438a55*/
  if ( v2 < 12 ) /*0x438a59*/
    return (void *)(__0Iostream_init_QAE_XZ_1((Iostream_init *)v2)); /*0x438a59*/
  else
    return (void *)(__0Iostream_init_QAE_XZ_1((Iostream_init *)0xB)); /*0x438a5c*/

}
} // namespace ra2

// 0x438A70
namespace gamemd {
int BombClass::TimeToExplode()
{

  return !(&this->audioController)[0] /*0x438a8c*/
      && *(int *)(unsigned int *)((char *)&stru_A8EB00 + 416) > (&this->audioController)[2]
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

  AbstractClass::ProcessPower((gamemd::AbstractClass *)this); /*0x438a99*/
  BombClass_field_28 = (int)(this->BombClass_field_28); /*0x438a9e*/
  if ( BombClass_field_28 ) /*0x438aa3*/
  {
    v5 = (*(int (**)(int))(*(unsigned int *)(BombClass_field_28 + 4) + 16))(BombClass_field_28 + 4); /*0x438aac*/
    Power::TimerProcess(v5); /*0x438ab2*/
  }
  v6 = *(unsigned int *)this->__pad_24; /*0x438ab7*/
  if ( v6 ) /*0x438abc*/
  {
    v7 = (*(int (**)(int))(*(unsigned int *)(v6 + 4) + 16))(v6 + 4); /*0x438ac5*/
    Power::TimerProcess(v7); /*0x438acb*/
  }
  BombClass_field_2C = (int)(this->BombClass_field_2C);
  if ( BombClass_field_2C ) /*0x438ad5*/
  {
    v9 = (*(int (**)(int))(*(unsigned int *)(BombClass_field_2C + 4) + 16))(BombClass_field_2C + 4); /*0x438ade*/
    Power::TimerProcess(v9); /*0x438ae4*/
  }
  LOBYTE(v3) = this->BombClass_field_58; /*0x438ae9*/
  return ((Power *)((Power *)a2))->FlagProcess(v3); /*0x438af4*/

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
  dword_89C668 = (int)&vt_DynamicVectorClass; /*0x43856d*/
  dword_89C67C = 10; /*0x438577*/
  dword_89C678 = 0; /*0x438581*/
  return atexit(globalHelper_038590); /*0x43858c*/

}
} // namespace gamemd

// 0x4389F0
namespace gamemd {
int BombClass::IsDeathBomb()
{

  return (&this->audioController)[0]; /*0x4389f3*/

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

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x438b51*/
  if ( Prefix_0 >= 0 ) /*0x438b55*/
  {
    if ( aP0 ) /*0x438b59*/
    {
      AbstractClass::InitVtables((gamemd::AbstractClass *)aP0, (int)&aP1); /*0x438b62*/
      aP0->vtable1 = &vt_BombClass; /*0x438b67*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_BombClass); /*0x438b6d*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_BombClass); /*0x438b74*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_BombClass); /*0x438b7b*/
    }
    AudioController::Init((AudioController *)&aP0->audioController[3]); /*0x438b85*/
    aP0->BombClass_field_54 = 0; /*0x438b8d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->BombClass_field_28); /*0x438b9a*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0->__pad_24); /*0x438ba8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->BombClass_field_2C); /*0x438bb6*/
  }
  return Prefix_0; /*0x438bbd*/

}
} // namespace gamemd

// 0x438BD0
namespace gamemd {
int BombClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x438be4*/

}
} // namespace gamemd

// 0x4393F0
namespace gamemd {
BombClass * BombClass::CopyTo(char a2)
{

  int v3; // eax
  BombClass *v5; // [esp+4h] [ebp-4h] BYREF

  Block->vtable1 = &vt_BombClass; /*0x4393f7*/
  ((unsigned int *)Block)[0] = (unsigned int)(&vt_BombClass); /*0x4393fd*/
  ((unsigned int *)Block)[0] = (unsigned int)(&vt_BombClass); /*0x439404*/
  ((unsigned int *)Block)[0] = (unsigned int)(&vt_BombClass); /*0x43940b*/
  AudioFileClass::Release((AudioFileClass *)&Block->audioController[3]); /*0x439412*/
  v5 = (gamemd::BombClass *)(Block); /*0x439427*/
  v3 = (*(int (**)(int *, BombClass **))(dword_89C668 + 16))(&dword_89C668, &v5); /*0x43942b*/
  if ( v3 != -1 && v3 < dword_89C678 && v3 < --dword_89C678 ) /*0x439446*/
  {
    do /*0x43945e*/
    {
      ++v3; /*0x43944e*/
      *((unsigned int *)dword_89C66C + v3 - 1) = *((unsigned int *)dword_89C66C + v3); /*0x439452*/
    }
    while ( v3 < dword_89C678 ); /*0x43945e*/
  }
  AbstractClass::DTOR((gamemd::AbstractClass *)Block); /*0x439462*/
  if ( (a2 & 1) != 0 ) /*0x43946c*/
    __3_YAXPAX_Z(Block); /*0x43946f*/
  return Block; /*0x439479*/

}
} // namespace gamemd
