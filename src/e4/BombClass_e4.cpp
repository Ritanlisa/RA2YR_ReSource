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

// 0x4385D0
namespace gamemd {
int BombClass::AbstractClass()
{
  BombClass * v2;

  AbstractClass::Constructor(); /*0x4385d4*/
  this->BombClass_field_54 = 0; /*0x4385de*/
  this->BombClass_field_28 = 0; /*0x4385fc*/
  this->BombClass_field_2C = 0; /*0x4385ff*/
  this->BombClass_field_58 = 0; /*0x438602*/
  AudioController::Init((unsigned int *)(&this->nextArrayIndex0)); /*0x438605*/
  this->q050 = g_RulesClass_Instance->BunkerWallsDownSound; /*0x438615*/
  if ( dword_89C678 < dword_89C670 /*0x43864a*/
    || (byte_89C675 || !dword_89C670)
    && dword_89C67C > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_89C668 + 8))(
         &dword_89C668,
         dword_89C670 + dword_89C67C,
         0) )
  {
    v2 = dword_89C678++; /*0x438657*/
    *((unsigned int *)dword_89C66C + v2) = this; /*0x438666*/
  }
  return this; /*0x43866b*/
}
} // namespace ra2

// 0x438A00
namespace gamemd {
void * BombClass::GetCurrentFrame()
{
  int v2; // ecx

  if ( *(&this->vtable22) == 1 ) /*0x438a04*/
    return (Iostream_init *)12; /*0x438a06*/
  v2 = 2 * (((int)g_CurrentFrame - *(&this->vtable23)) / (g_RulesClass_Instance->WaterCrate[1] / 6)); /*0x438a4c*/
  if ( (int)g_CurrentFrame % (2 * g_RulesClass_Instance->WaterCrate[3]) >= g_RulesClass_Instance->WaterCrate[3] ) /*0x438a53*/
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
  return !this->audioController && (int)g_CurrentFrame > this->q038 && !this->BombClass_field_58; /*0x438a8c*/
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

  AbstractClass::ProcessPower(); /*0x438a99*/
  v4 = this->BombClass_field_28; /*0x438a9e*/
  if ( v4 ) /*0x438aa3*/
  {
    v5 = (*(int (__stdcall **)(int))(*(unsigned int *)(v4 + 4) + 16))(v4 + 4); /*0x438aac*/
    Power::TimerProcess(v5); /*0x438ab2*/
  }
  v6 = this->q024; /*0x438ab7*/
  if ( v6 ) /*0x438abc*/
  {
    v7 = (*(int (__stdcall **)(int))(*(unsigned int *)(v6 + 4) + 16))(v6 + 4); /*0x438ac5*/
    Power::TimerProcess(v7); /*0x438acb*/
  }
  v8 = this->BombClass_field_2C; /*0x438ad0*/
  if ( v8 ) /*0x438ad5*/
  {
    v9 = (*(int (__stdcall **)(int))(*(unsigned int *)(v8 + 4) + 16))(v8 + 4); /*0x438ade*/
    Power::TimerProcess(v9); /*0x438ae4*/
  }
  IDA_LOBYTE(v3) = this->BombClass_field_58; /*0x438ae9*/
  return Power::FlagProcess(a2, v3); /*0x438af4*/
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
  dword_89C668 = (int)&DynamicVectorClass_BombClass___vftable; /*0x43856d*/
  dword_89C67C = 10; /*0x438577*/
  dword_89C678 = 0; /*0x438581*/
  return atexit(globalHelper_038590); /*0x43858c*/
}
} // namespace gamemd

// 0x4389F0
namespace gamemd {
int BombClass::IsDeathBomb()
{
  return *(&this->vtable22); /*0x4389f3*/
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
  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x438b51*/
  if ( Prefix_0 >= 0 ) /*0x438b55*/
  {
    if ( aP0 ) /*0x438b59*/
    {
      AbstractClass::InitVtables(aP0, (int)&aP1); /*0x438b62*/
      *aP0 = (int)&BombClass_vftable; /*0x438b67*/
      aP0[1] = (int)&BombClass_vftable; /*0x438b6d*/
      aP0[2] = (int)&BombClass_vftable; /*0x438b74*/
      aP0[3] = (int)&BombClass_vftable; /*0x438b7b*/
    }
    AudioController::Init(aP0 + 15); /*0x438b85*/
    aP0[21] = 0; /*0x438b8d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 10); /*0x438b9a*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 9); /*0x438ba8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 11); /*0x438bb6*/
  }
  return Prefix_0; /*0x438bbd*/
}
} // namespace gamemd

// 0x438BD0
namespace gamemd {
int BombClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x438be4*/
}
} // namespace gamemd

// 0x4393F0
namespace gamemd {
BombClass * BombClass::CopyTo(char a2)
{
  int v3; // eax

  AudioFileClass::Release(&this->vtable25); /*0x439412*/
  v3 = (*(int (__thiscall **)(int *, unsigned int **))(dword_89C668 + 16))(&dword_89C668, &this); /*0x43942b*/
  if ( v3 != -1 && v3 < dword_89C678 && v3 < --dword_89C678 ) /*0x439446*/
  {
    do /*0x43945e*/
    {
      ++v3; /*0x43944e*/
      *((unsigned int *)dword_89C66C + v3 - 1) = *((unsigned int *)dword_89C66C + v3); /*0x439452*/
    }
    while ( v3 < dword_89C678 ); /*0x43945e*/
  }
  AbstractClass::DTOR(); /*0x439462*/
  if ( (a2 & 1) != 0 ) /*0x43946c*/
    RA2_OPDEL(); /*0x43946f*/
  return this; /*0x439479*/
}
} // namespace gamemd
