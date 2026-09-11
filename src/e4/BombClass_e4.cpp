// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x438550
namespace ra2 {
namespace game {
int BombClass::InitPool()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int BombClass_InitPool()
{
  unk_89C66C = 0; /*0x438557*/
  dword_89C670 = 0; /*0x43855c*/
  unk_89C674 = 1; /*0x438561*/
  unk_89C675 = 0; /*0x438568*/
  dword_89C668 = (int)&DynamicVectorClass<BombClass *>::`vftable'; /*0x43856d*/
  dword_89C67C = 10; /*0x438577*/
  dword_89C678 = 0; /*0x438581*/
  return atexit(globalHelper_038590); /*0x43858c*/
}
}
} // namespace game
} // namespace ra2

// 0x4385D0
namespace ra2 {
namespace game {
int BombClass::AbstractClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BombClass::AbstractClass(int this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x4385d4*/
  this->BombClass_field_54 = 0; /*0x4385de*/
  *(_DWORD *)this = &BombClass::`vftable'; /*0x4385e1*/
  this->vtable1 = &BombClass::`vftable'; /*0x4385e7*/
  this->vtable2 = &BombClass::`vftable'; /*0x4385ee*/
  this->vtable3 = &BombClass::`vftable'; /*0x4385f5*/
  this->BombClass_field_28 = 0; /*0x4385fc*/
  this->BombClass_field_2C = 0; /*0x4385ff*/
  this->BombClass_field_58 = 0; /*0x438602*/
  AudioController::Init((_DWORD *)(this + 60)); /*0x438605*/
  *(_DWORD *)(this + 80) = MEMORY[0x8871E0]->ZoomInFactor; /*0x438615*/
  if ( dword_89C678 < dword_89C670 /*0x43864a*/
    || (unk_89C675 || !dword_89C670)
    && dword_89C67C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89C668 + 8))(
         &dword_89C668,
         dword_89C670 + dword_89C67C,
         0) )
  {
    v2 = dword_89C678++; /*0x438657*/
    *((_DWORD *)unk_89C66C + v2) = this; /*0x438666*/
  }
  return this; /*0x43866b*/
}
}
} // namespace game
} // namespace ra2

// 0x4389F0
namespace ra2 {
namespace game {
int BombClass::IsDeathBomb()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BombClass::IsDeathBomb(_DWORD *this)
{
  return *(this + 12); /*0x4389f3*/
}
}
} // namespace game
} // namespace ra2

// 0x438A00
namespace ra2 {
namespace game {
Iostream_init * BombClass::GetCurrentFrame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
Iostream_init *__thiscall BombClass::GetCurrentFrame(_DWORD *this)
{
  int v2; // ecx

  if ( *(this + 12) == 1 ) /*0x438a04*/
    return (Iostream_init *)12; /*0x438a06*/
  v2 = 2 * (((int)MEMORY[0xA8ED84] - *(this + 13)) / (MEMORY[0x8871E0]->?[1] / 6)); /*0x438a4c*/
  if ( (int)MEMORY[0xA8ED84] % (2 * MEMORY[0x8871E0]->?[3]) >= MEMORY[0x8871E0]->?[3] ) /*0x438a53*/
    ++v2; /*0x438a55*/
  if ( v2 < 12 ) /*0x438a59*/
    return __0Iostream_init_QAE_XZ_1((Iostream_init *)v2); /*0x438a59*/
  else
    return __0Iostream_init_QAE_XZ_1((Iostream_init *)0xB); /*0x438a5c*/
}
}
} // namespace game
} // namespace ra2

// 0x438A70
namespace ra2 {
namespace game {
bool BombClass::TimeToExplode()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall BombClass::TimeToExplode(int this)
{
  return !this->audioController && (int)MEMORY[0xA8ED84] > *(_DWORD *)(this + 56) && !this->BombClass_field_58; /*0x438a8c*/
}
}
} // namespace game
} // namespace ra2

// 0x438A90
namespace ra2 {
namespace game {
int BombClass::Stat(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BombClass::_vt13(int this, int *a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax

  AbstractClass::ProcessPower((#378 *)this); /*0x438a99*/
  v4 = this->BombClass_field_28; /*0x438a9e*/
  if ( v4 ) /*0x438aa3*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(v4 + 4) + 16))(v4 + 4); /*0x438aac*/
    Power::TimerProcess(v5); /*0x438ab2*/
  }
  v6 = *(_DWORD *)(this + 36); /*0x438ab7*/
  if ( v6 ) /*0x438abc*/
  {
    v7 = (*(int (__stdcall **)(int))(*(_DWORD *)(v6 + 4) + 16))(v6 + 4); /*0x438ac5*/
    Power::TimerProcess(v7); /*0x438acb*/
  }
  v8 = this->BombClass_field_2C; /*0x438ad0*/
  if ( v8 ) /*0x438ad5*/
  {
    v9 = (*(int (__stdcall **)(int))(*(_DWORD *)(v8 + 4) + 16))(v8 + 4); /*0x438ade*/
    Power::TimerProcess(v9); /*0x438ae4*/
  }
  LOBYTE(v3) = this->BombClass_field_58; /*0x438ae9*/
  return Power::FlagProcess(a2, v3); /*0x438af4*/
}
}
} // namespace game
} // namespace ra2

// 0x438B40
namespace ra2 {
namespace game {
int BombClass::Write(AbstractClass * aP0, int aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall BombClass::Write(AbstractClass *aP0, int aP1)
{
  AbstractClass *Prefix_0; // edi

  Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x438b51*/
  if ( (int)Prefix_0 >= 0 ) /*0x438b55*/
  {
    if ( aP0 ) /*0x438b59*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x438b62*/
      *(_DWORD *)aP0->__pad_0 = &BombClass::`vftable'; /*0x438b67*/
      *(_DWORD *)&aP0->__pad_0[4] = &BombClass::`vftable'; /*0x438b6d*/
      *(_DWORD *)&aP0->__pad_0[8] = &BombClass::`vftable'; /*0x438b74*/
      *(_DWORD *)&aP0->__pad_0[12] = &BombClass::`vftable'; /*0x438b7b*/
    }
    AudioController::Init(&aP0[1].nextArrayIndex); /*0x438b85*/
    *(_DWORD *)&aP0[2].__pad_0[12] = 0; /*0x438b8d*/
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
}
} // namespace game
} // namespace ra2

// 0x438BD0
namespace ra2 {
namespace game {
int BombClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall BombClass::Seek(TechnoTypeClass *aP0, int *a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x438be4*/
}
}
} // namespace game
} // namespace ra2

// 0x4393F0
namespace ra2 {
namespace game {
BombClass * BombClass::CopyTo(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BombClass *__thiscall BombClass::CopyTo(_DWORD *this, char a2)
{
  int v3; // eax
  _DWORD *v5; // [esp+4h] [ebp-4h] BYREF

  *this = &BombClass::`vftable'; /*0x4393f7*/
  *(this + 1) = &BombClass::`vftable'; /*0x4393fd*/
  *(this + 2) = &BombClass::`vftable'; /*0x439404*/
  *(this + 3) = &BombClass::`vftable'; /*0x43940b*/
  AudioFileClass::Release(this + 15); /*0x439412*/
  v5 = this; /*0x439427*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(dword_89C668 + 16))(&dword_89C668, &v5); /*0x43942b*/
  if ( v3 != -1 && v3 < dword_89C678 && v3 < --dword_89C678 ) /*0x439446*/
  {
    do /*0x43945e*/
    {
      ++v3; /*0x43944e*/
      *((_DWORD *)unk_89C66C + v3 - 1) = *((_DWORD *)unk_89C66C + v3); /*0x439452*/
    }
    while ( v3 < dword_89C678 ); /*0x43945e*/
  }
  AbstractClass::DTOR(this); /*0x439462*/
  if ( (a2 & 1) != 0 ) /*0x43946c*/
    __3_YAXPAX_Z(this); /*0x43946f*/
  return (BombClass *)this; /*0x439479*/
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
