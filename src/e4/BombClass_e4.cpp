// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
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

// 0x4385D0
namespace gamemd {
int BombClass::AbstractClass()
{

  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x4385d4*/
  *((unsigned int *)this + 21) = 0; /*0x4385de*/
  *(unsigned int *)this = &vt_BombClass; /*0x4385e1*/
  *((unsigned int *)this + 1) = &vt_BombClass; /*0x4385e7*/
  *((unsigned int *)this + 2) = &vt_BombClass; /*0x4385ee*/
  *((unsigned int *)this + 3) = &vt_BombClass; /*0x4385f5*/
  *((unsigned int *)this + 10) = 0; /*0x4385fc*/
  *((unsigned int *)this + 11) = 0; /*0x4385ff*/
  *((unsigned char *)this + 88) = 0; /*0x438602*/
  AudioController::Init((unsigned int *)((char *)this + 60)); /*0x438605*/
  *((unsigned int *)this + 20) = g_abs_8871E0->ZoomInFactor; /*0x438615*/
  if ( dword_89C678 < dword_89C670 /*0x43864a*/
    || (unk_89C675 || !dword_89C670)
    && dword_89C67C > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_89C668 + 8))(
         &dword_89C668,
         dword_89C670 + dword_89C67C,
         0) )
  {
    v2 = dword_89C678++; /*0x438657*/
    *((unsigned int *)unk_89C66C + v2) = this; /*0x438666*/
  }
  return this; /*0x43866b*/

}
} // namespace ra2

// 0x438A00
namespace gamemd {
void * BombClass::GetCurrentFrame()
{

  int v2; // ecx

  if ( *((unsigned int *)this + 12) == 1 ) /*0x438a04*/
    return (Iostream_init *)12; /*0x438a06*/
  v2 = 2 * (((int)g_abs_A8ED84 - *((unsigned int *)this + 13)) / (g_abs_8871E0->?[1] / 6)); /*0x438a4c*/
  if ( (int)g_abs_A8ED84 % (2 * g_abs_8871E0->?[3]) >= g_abs_8871E0->?[3] ) /*0x438a53*/
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

  return !*((unsigned int *)this + 12) && (int)g_abs_A8ED84 > *((unsigned int *)this + 14) && !*((unsigned char *)this + 88); /*0x438a8c*/

}
} // namespace ra2

// 0x438A90
namespace gamemd {
int BombClass::Stat(int * a2)
{

  int v3; // edx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax

  AbstractClass::ProcessPower((void *)this); /*0x438a99*/
  v4 = *((unsigned int *)this + 10); /*0x438a9e*/
  if ( v4 ) /*0x438aa3*/
  {
    v5 = (*(int (**)(int))(*(unsigned int *)(v4 + 4) + 16))(v4 + 4); /*0x438aac*/
    Power::TimerProcess(v5); /*0x438ab2*/
  }
  v6 = *((unsigned int *)this + 9); /*0x438ab7*/
  if ( v6 ) /*0x438abc*/
  {
    v7 = (*(int (**)(int))(*(unsigned int *)(v6 + 4) + 16))(v6 + 4); /*0x438ac5*/
    Power::TimerProcess(v7); /*0x438acb*/
  }
  v8 = *((unsigned int *)this + 11); /*0x438ad0*/
  if ( v8 ) /*0x438ad5*/
  {
    v9 = (*(int (**)(int))(*(unsigned int *)(v8 + 4) + 16))(v8 + 4); /*0x438ade*/
    Power::TimerProcess(v9); /*0x438ae4*/
  }
  IDA_LOBYTE(v3) = *((unsigned char *)this + 88); /*0x438ae9*/
  return Power::FlagProcess(a2, v3); /*0x438af4*/

}
} // namespace ra2

// 0x438550
namespace gamemd {
int BombClass::InitPool()
{

  unk_89C66C = (unsigned char *)(0);
  dword_89C670 = 0; /*0x43855c*/
  unk_89C674 = 1; /*0x438561*/
  unk_89C675 = 0; /*0x438568*/
  dword_89C668 = (int)&vt_DynamicVectorClass_BombClass; /*0x43856d*/
  dword_89C67C = 10; /*0x438577*/
  dword_89C678 = 0; /*0x438581*/
  return atexit(globalHelper_038590); /*0x43858c*/

}
} // namespace gamemd

// 0x4389F0
namespace gamemd {
int BombClass::IsDeathBomb()
{

  return *((unsigned int *)this + 12); /*0x4389f3*/

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
  a2[3] = 1822515787; /*0x438b30*/
  return 0; /*0x438b0d*/

}
} // namespace gamemd

// 0x438B40
namespace gamemd {
int BombClass::Write(AbstractClass * aP0, int aP1)
{

  AbstractClass *Prefix_0; // edi

  Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x438b51*/
  if ( (int)Prefix_0 >= 0 ) /*0x438b55*/
  {
    if ( aP0 ) /*0x438b59*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x438b62*/
      *(unsigned int *)aP0->__pad_0 = &vt_BombClass; /*0x438b67*/
      *(unsigned int *)&aP0->__pad_0[4] = &vt_BombClass; /*0x438b6d*/
      *(unsigned int *)&aP0->__pad_0[8] = &vt_BombClass; /*0x438b74*/
      *(unsigned int *)&aP0->__pad_0[12] = &vt_BombClass; /*0x438b7b*/
    }
    AudioController::Init(&aP0[1].nextArrayIndex); /*0x438b85*/
    *(unsigned int *)&aP0[2].__pad_0[12] = 0; /*0x438b8d*/
    ObjectPtr::RegisterForTracking( /*0x438b9a*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]); /*0x438ba8*/
    ObjectPtr::RegisterForTracking( /*0x438bb6*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[8]);
  }
  return (int)Prefix_0->__pad_0; /*0x438bbd*/

}
} // namespace gamemd

// 0x438BD0
namespace gamemd {
int BombClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return ((AbstractClass *)((ObjectTypeClass *)aP0))->SaveLoad_Prefix((ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x438be4*/

}
} // namespace gamemd

// 0x4393F0
namespace gamemd {
BombClass * BombClass::CopyTo(unsigned int * Block, char a2)
{

  int v3; // eax
  unsigned int *v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &BombClass::`vftable'; /*0x4393f7*/
  *(Block + 1) = &BombClass::`vftable'; /*0x4393fd*/
  *(Block + 2) = &BombClass::`vftable'; /*0x439404*/
  *(Block + 3) = &vt_BombClass; /*0x43940b*/
  AudioFileClass::Release(Block + 15); /*0x439412*/
  v5 = Block; /*0x439427*/
  v3 = (*(int (**)(int *, unsigned int **))(dword_89C668 + 16))(&dword_89C668, &v5); /*0x43942b*/
  if ( v3 != -1 && v3 < dword_89C678 && v3 < --dword_89C678 ) /*0x439446*/
  {
    do /*0x43945e*/
    {
      ++v3; /*0x43944e*/
      *((unsigned int *)unk_89C66C + v3 - 1) = *((unsigned int *)unk_89C66C + v3); /*0x439452*/
    }
    while ( v3 < dword_89C678 ); /*0x43945e*/
  }
  AbstractClass::DTOR(Block); /*0x439462*/
  if ( (a2 & 1) != 0 ) /*0x43946c*/
    __3_YAXPAX_Z(Block); /*0x43946f*/
  return (BombClass *)Block; /*0x439479*/

}
} // namespace gamemd
