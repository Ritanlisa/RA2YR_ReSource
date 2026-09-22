// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"

// 0x4385D0
namespace ra2 {
namespace game {
int BombClass::AbstractClass()
{
{

  AbstractClass::Constructor((AbstractClass *)this); /*0x4385d4*/
  this->BombClass_field_54 = 0; /*0x4385de*/
  *(_DWORD *)this = &BombClass::`vftable'; /*0x4385e1*/
  this->vtable1 = &BombClass::`vftable'; /*0x4385e7*/
  this->vtable2 = &BombClass::`vftable'; /*0x4385ee*/
  this->vtable3 = &vt_BombClass; /*0x4385f5*/
  this->BombClass_field_28 = 0; /*0x4385fc*/
  this->BombClass_field_2C = 0; /*0x4385ff*/
  this->BombClass_field_58 = 0; /*0x438602*/
  AudioController::Init((_DWORD *)(this + 60)); /*0x438605*/
  this->q050 = g_RulesClass_Instance->ZoomInFactor; /*0x438615*/
  if ( dword_89C678 < dword_89C670 /*0x43864a*/
    || (unk_89C675 || !dword_89C670)
    && dword_89C67C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89C668 + 8))(
         &dword_89C668,
         dword_89C670 + dword_89C67C,
         0) )
  {
    int v2 = dword_89C678++; /*0x438657*/
    *((_DWORD *)unk_89C66C + v2) = this; /*0x438666*/
  }
  return this; /*0x43866b*/
}
} // namespace game
} // namespace ra2
}

// 0x438A00
namespace ra2 {
namespace game {
void * BombClass::GetCurrentFrame()
{
{

  if ( this->audioController == 1 ) /*0x438a04*/
    return (Iostream_init *)12; /*0x438a06*/
  int v2 = 2 * (((int)g_CurrentFrame - this->q034) / (g_RulesClass_Instance->?[1] / 6)); /*0x438a4c*/
  if ( (int)g_CurrentFrame % (2 * g_RulesClass_Instance->?[3]) >= g_RulesClass_Instance->?[3] ) /*0x438a53*/
    ++v2; /*0x438a55*/
  if ( v2 < 12 ) /*0x438a59*/
    return __0Iostream_init_QAE_XZ_1((Iostream_init *)v2); /*0x438a59*/
  else
    return __0Iostream_init_QAE_XZ_1((Iostream_init *)0xB); /*0x438a5c*/
}
} // namespace game
} // namespace ra2
}

// 0x438A70
namespace ra2 {
namespace game {
int BombClass::TimeToExplode()
{
{
  return !this->audioController && (int)g_CurrentFrame > this->q038 && !this->BombClass_field_58; /*0x438a8c*/
}
} // namespace game
} // namespace ra2
}

// 0x438A90
namespace ra2 {
namespace game {
int BombClass::Stat(int * a2)
{
{

  AbstractClass::ProcessPower((#378 *)this); /*0x438a99*/
  int v4 = this->BombClass_field_28; /*0x438a9e*/
  if ( v4 ) /*0x438aa3*/
  {
    int v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(v4 + 4) + 16))(v4 + 4); /*0x438aac*/
    Power::TimerProcess(v5); /*0x438ab2*/
  }
  int v6 = this->q024; /*0x438ab7*/
  if ( v6 ) /*0x438abc*/
  {
    int v7 = (*(int (__stdcall **)(int))(*(_DWORD *)(v6 + 4) + 16))(v6 + 4); /*0x438ac5*/
    Power::TimerProcess(v7); /*0x438acb*/
  }
  int v8 = this->BombClass_field_2C; /*0x438ad0*/
  if ( v8 ) /*0x438ad5*/
  {
    int v9 = (*(int (__stdcall **)(int))(*(_DWORD *)(v8 + 4) + 16))(v8 + 4); /*0x438ade*/
    Power::TimerProcess(v9); /*0x438ae4*/
  }
  int v3; // edx
  LOBYTE(v3) = this->BombClass_field_58; /*0x438ae9*/
  return Power::FlagProcess(a2, v3); /*0x438af4*/
}
} // namespace game
} // namespace ra2
}

// 0x438550
namespace ra2 {
namespace game {
int BombClass::InitPool()
{
{
    DataGlobal_89C66C = 0;
    DataGlobal_89C670 = 0;
    DataGlobal_89C674 = 1;
    DataGlobal_89C675 = 0;
    DataGlobal_89C668 = (int)&vt_DynamicVectorClass_BombClass;
    DataGlobal_89C67C = 10;
    DataGlobal_89C678 = 0;
    return atexit(globalHelper_038590);
}
}
} // namespace game
} // namespace ra2

// 0x4389F0
namespace ra2 {
namespace game {
int BombClass::IsDeathBomb()
{
{
    return this->audioController;
}
}
} // namespace game
} // namespace ra2

// 0x438B00
namespace ra2 {
namespace game {
int BombClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 108652931;
  a2[1] = 299085213;
  a2[2] = 268441278;
  a2[3] = 1822515787;
  return 0;
}
} // namespace game
} // namespace ra2

// 0x438B40
namespace ra2 {
namespace game {
int BombClass::Write(AbstractClass * aP0, int aP1)
{
{
    AbstractClass *Prefix_0;
    Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( (int)Prefix_0 >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_BombClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_BombClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_BombClass;
    *(int *)&aP0->__pad_0[12] = &vt_BombClass;
    }
    AudioController::Init(&aP0[1].nextArrayIndex);
    *(int *)&aP0[2].__pad_0[12] = 0;
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].__pad_0[8]);
  }
    return (int)Prefix_0->__pad_0;
}
}
} // namespace game
} // namespace ra2

// 0x438BD0
namespace ra2 {
namespace game {
int BombClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}
} // namespace game
} // namespace ra2

// 0x4393F0
namespace ra2 {
namespace game {
BombClass * BombClass::CopyTo(char a2)
{
{
    int v3;
    int *v5;
    *(void**)this = vt_BombClass;
    this->vtable2 = (unsigned int)vt_BombClass;
    this->vtable3 = (unsigned int)vt_BombClass;
    this->vtable4 = &vt_BombClass;
    AudioFileClass::Release(&this->vtable25);
    v5 = this;
    v3 = (*(int (__thiscall **)(int *, int **))(DataGlobal_89C668 + 16))(&DataGlobal_89C668, &v5);
    if ( v3 != -1 && v3 < DataGlobal_89C678 && v3 < --DataGlobal_89C678 )
  {
    do
    {
    ++v3;
    *((int *)(DataGlobal_89C66C) + v3 - 1) = *((int *)(DataGlobal_89C66C) + v3);
    }
    while ( v3 < DataGlobal_89C678 );
  }
    AbstractClass::DTOR(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BombClass *)this;
}
}
} // namespace game
} // namespace ra2
