// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x466380
namespace gamemd {
int BulletClass::BulletClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_466380(int this)
{
  int v2; // eax

  ObjectClass::ctor((_DWORD *)this); /*0x466384*/
  this->BulletClass_field_0xAC = 0; /*0x466391*/
  this->BulletClass_field_0xB0 = 0; /*0x466397*/
  *(_BYTE *)(this + 180) = 0; /*0x46639d*/
  BulletClass::ResetDetonationTimer(this + 184); /*0x4663a3*/
  *(_DWORD *)(this + 288) = 0; /*0x4663aa*/
  *(_BYTE *)(this + 260) = 1; /*0x4663b0*/
  *(_BYTE *)(this + 261) = 1; /*0x4663b6*/
  *(_BYTE *)(this + 224) = 0; /*0x4663bf*/
  *(_DWORD *)(this + 256) = 0; /*0x4663c5*/
  *(_DWORD *)(this + 264) = 0; /*0x4663cb*/
  this->BulletClass_field_0x10C = 0; /*0x4663d1*/
  *(_DWORD *)(this + 272) = 0; /*0x4663d7*/
  *(_DWORD *)(this + 276) = -1; /*0x4663dd*/
  *(_DWORD *)(this + 280) = 0; /*0x4663e3*/
  *(_DWORD *)(this + 292) = 0; /*0x4663e9*/
  *(_DWORD *)(this + 296) = 0; /*0x4663ef*/
  *(_BYTE *)(this + 300) = 0; /*0x4663f5*/
  *(_BYTE *)(this + 301) = 0; /*0x4663fb*/
  this->BulletClass_field_0x130 = 0; /*0x466401*/
  *(_WORD *)(this + 332) = -1; /*0x466407*/
  *(_WORD *)(this + 334) = -1; /*0x46640e*/
  this->BulletClass_field_0x154 = 0; /*0x466419*/
  *(_BYTE *)(this + 344) = 0; /*0x46641f*/
  *(_DWORD *)this = &BulletClass::`vftable'; /*0x466425*/
  this->BulletClass_field_0x4 = &BulletClass::`vftable'; /*0x46642b*/
  this->BulletClass_field_0x8 = &BulletClass::`vftable'; /*0x466431*/
  *(_DWORD *)(this + 12) = &BulletClass::`vftable'; /*0x466438*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x46643f*/
  *(_DWORD *)(this + 308) = 0; /*0x466444*/
  *(_DWORD *)(this + 312) = 0; /*0x46644a*/
  *(_DWORD *)(this + 316) = 0; /*0x466450*/
  this->BulletClass_field_0x140 = 0; /*0x466456*/
  *(_DWORD *)(this + 324) = 0; /*0x46645c*/
  *(_DWORD *)(this + 328) = 0; /*0x466462*/
  if ( MEMORY[0xA8ED50] < MEMORY[0xA8ED48] /*0x46649b*/
    || (MEMORY[0xA8ED4D] || !MEMORY[0xA8ED48])
    && MEMORY[0xA8ED54] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8ED40] + 8))(
         &MEMORY[0xA8ED40],
         MEMORY[0xA8ED48] + MEMORY[0xA8ED54],
         0) )
  {
    v2 = MEMORY[0xA8ED50]++; /*0x4664a8*/
    *((_DWORD *)MEMORY[0xA8ED44] + v2) = this; /*0x4664b7*/
  }
  return this; /*0x4664bc*/
}
}
} // namespace gamemd

// 0x466560
namespace gamemd {
int BulletClass::Dtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BulletClass::Dtor(#374 *this)
{
  int v2; // eax
  int v3; // eax
  #374 *v5; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this = &BulletClass::`vftable'; /*0x466566*/
  this->BulletClass_field_0x4 = &BulletClass::`vftable'; /*0x46656c*/
  this->BulletClass_field_0x8 = &BulletClass::`vftable'; /*0x466573*/
  *((_DWORD *)this + 3) = &BulletClass::`vftable'; /*0x46657a*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x466581*/
  if ( *((_BYTE *)this + 344) ) /*0x466586*/
  {
    v5 = this; /*0x4665a0*/
    v2 = (*(int (__thiscall **)(int *, #374 **))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], &v5); /*0x4665a4*/
    if ( v2 != -1 && v2 < MEMORY[0xB0F5C8] && v2 < --MEMORY[0xB0F5C8] ) /*0x4665bf*/
    {
      do /*0x4665d7*/
      {
        ++v2; /*0x4665c7*/
        *((_DWORD *)MEMORY[0xB0F5BC] + v2 - 1) = *((_DWORD *)MEMORY[0xB0F5BC] + v2); /*0x4665cb*/
      }
      while ( v2 < MEMORY[0xB0F5C8] ); /*0x4665d7*/
    }
  }
  if ( MEMORY[0xA8E9A0] ) /*0x4665e0*/
    ObjectClass::Undeploy(this); /*0x4665e4*/
  this->BulletClass_field_0xAC = 0; /*0x4665e9*/
  this->BulletClass_field_0xB0 = 0; /*0x4665f3*/
  this->BulletClass_field_0x154 = 0; /*0x4665fd*/
  v5 = this; /*0x466617*/
  v3 = (*(int (__thiscall **)(int *, #374 **))(MEMORY[0xA8ED40] + 16))(&MEMORY[0xA8ED40], &v5); /*0x46661b*/
  if ( v3 != -1 && v3 < MEMORY[0xA8ED50] && v3 < --MEMORY[0xA8ED50] ) /*0x466636*/
  {
    do /*0x46664e*/
    {
      ++v3; /*0x46663e*/
      *((_DWORD *)MEMORY[0xA8ED44] + v3 - 1) = *((_DWORD *)MEMORY[0xA8ED44] + v3); /*0x466642*/
    }
    while ( v3 < MEMORY[0xA8ED50] ); /*0x46664e*/
  }
  return ObjectClass::Dtor(this); /*0x466657*/
}
}
} // namespace gamemd

// 0x466660
namespace gamemd {
int * BulletClass::CalculateSpreadAngle(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__stdcall BulletClass::_vt66(int a1)
{
  if ( (unk_89DE10 & 1) == 0 ) /*0x46666b*/
  {
    unk_89DE10 |= 1u; /*0x466689*/
    unk_89DDF4 = 2147450879; /*0x46668f*/
    atexit(nullsub_108); /*0x466694*/
  }
  return &unk_89DDF4; /*0x4666a2*/
}
}
} // namespace gamemd

// 0x46AFB0
namespace gamemd {
int BulletClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall BulletClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, int *a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x46afc4*/
}
}
} // namespace gamemd

// 0x46AFD0
namespace gamemd {
LONG BulletClass::CheckTargetValidity(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall BulletClass::_vt01(int a1)
{
  ++g_BulletClassPool; /*0x46afdf*/
  return InterlockedIncrement((volatile LONG *)(a1 + 28)); /*0x46afeb*/
}
}
} // namespace gamemd

// 0x46AFF0
namespace gamemd {
LONG BulletClass::ValidateTarget(volatile LONG * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall BulletClass::_vt02(volatile LONG *a1)
{
  LONG v1; // esi

  --g_BulletClassPool; /*0x46b000*/
  v1 = InterlockedDecrement(a1 + 7); /*0x46b00d*/
  if ( !v1 && a1 ) /*0x46b015*/
    (*(void (__thiscall **)(volatile LONG *, int))(*a1 + 32))(a1, 1); /*0x46b01d*/
  return v1; /*0x46b022*/
}
}
} // namespace gamemd

// 0x46B560
namespace gamemd {
int BulletClass::PowerDrainProcess(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448649;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}
} // namespace gamemd

// 0x46B540
namespace gamemd {
int BulletClass::MissionStubReturnZero()
{
return 352;
}
} // namespace gamemd

// 0x46B550
namespace gamemd {
int BulletClass::MissionStubReturnZero2()
{
return 8;
}
} // namespace gamemd
