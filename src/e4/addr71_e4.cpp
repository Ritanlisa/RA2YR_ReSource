// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x710860
namespace gamemd {
int sub_710860(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl sub_710860(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x710870*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
} // namespace gamemd

// 0x7108E0
namespace gamemd {
void sub_7108E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7108E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7108ec*/
  MEMORY[0xB0EB60] = Math::Sqrt(v0 + v0); /*0x7108fe*/
}
}
} // namespace gamemd

// 0x710910
namespace gamemd {
void sub_710910()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_710910()
{
  MEMORY[0xB0EBB0] = MEMORY[0xB0EB60] / 60.0; /*0x71091c*/
}
}
} // namespace gamemd

// 0x710930
namespace gamemd {
void sub_710930()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_710930()
{
  MEMORY[0xB0EB98] = 1.0 / MEMORY[0xB0EBB0]; /*0x71093c*/
}
}
} // namespace gamemd

// 0x710950
namespace gamemd {
void sub_710950()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_710950()
{
  MEMORY[0xB0EB90] = 0.0174532925199433 * 45.0; /*0x71095c*/
}
}
} // namespace gamemd

// 0x710970
namespace gamemd {
void sub_710970()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_710970()
{
  MEMORY[0xB0EB68] = 0.0174532925199433 * 60.0; /*0x71097c*/
}
}
} // namespace gamemd

// 0x710990
namespace gamemd {
void sub_710990()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_710990()
{
  MEMORY[0xB0EB40] = 0.0174532925199433 * 90.0; /*0x71099c*/
}
}
} // namespace gamemd

// 0x7109B0
namespace gamemd {
long long sub_7109B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_7109B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0EB40] - MEMORY[0xB0EB68]); /*0x7109c2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0EB60] * 0.5); /*0x7109d6*/
  MEMORY[0xB0EBB8] = result; /*0x7109db*/
  return result; /*0x7109e0*/
}
}
} // namespace gamemd

// 0x7109F0
namespace gamemd {
void sub_7109F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7109F0()
{
  MEMORY[0xB0EB70] = Math::ArcTan((double)MEMORY[0xB0EBB8] * 0.00390625); /*0x710a07*/
}
}
} // namespace gamemd

// 0x710A20
namespace gamemd {
void sub_710A20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_710A20()
{
  MEMORY[0xB0EB88] = Math::ArcTan((double)(2 * MEMORY[0xB0EBB8]) / MEMORY[0xB0EB60]); /*0x710a42*/
}
}
} // namespace gamemd

// 0x710A50
namespace gamemd {
long long sub_710A50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_710A50()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0EBB8]) + 0.5); /*0x710a6b*/
  MEMORY[0xB0EBAC] = result; /*0x710a70*/
  return result; /*0x710a76*/
}
}
} // namespace gamemd

// 0x710A80
namespace gamemd {
int sub_710A80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_710A80()
{
  MEMORY[0xB0EB58] = 0; /*0x710a82*/
  MEMORY[0xB0EB5A] = 0; /*0x710a88*/
  return 0; /*0x710a8e*/
}
}
} // namespace gamemd

// 0x710A90
namespace gamemd {
int sub_710A90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_710A90()
{
  MEMORY[0xB0EB78] = 0; /*0x710a92*/
  MEMORY[0xB0EB7C] = 0; /*0x710a97*/
  MEMORY[0xB0EB80] = 0; /*0x710a9c*/
  return 0; /*0x710aa1*/
}
}
} // namespace gamemd

// 0x710AB0
namespace gamemd {
int sub_710AB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_710AB0()
{
  MEMORY[0xB0EBA8] = 0; /*0x710ab5*/
  MEMORY[0xB0EBA0] = 128; /*0x710abf*/
  MEMORY[0xB0EBA4] = 128; /*0x710ac4*/
  return 128; /*0x710ac9*/
}
}
} // namespace gamemd

// 0x710AD0
namespace gamemd {
int sub_710AD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_710AD0()
{
  MEMORY[0xB0EB48] = 0; /*0x710ad2*/
  MEMORY[0xB0EB4C] = 0; /*0x710ad7*/
  MEMORY[0xB0EB50] = 0; /*0x710adc*/
  MEMORY[0xB0EB54] = 0; /*0x710ae1*/
  return 0; /*0x710ae6*/
}
}
} // namespace gamemd

// 0x7179C0
namespace gamemd {
void nullsub_86()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void nullsub_86()
{
  ; /*0x7179c0*/
}
}
} // namespace gamemd

// 0x717A40
namespace gamemd {
int ReadPointerFromECX4()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ReadPointerFromECX4(void *this)
{
  return *(_DWORD *)this; /*0x717a42*/
}
}
} // namespace gamemd

// 0x717DF0
namespace gamemd {
void sub_717DF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_717DF0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x717dfc*/
  MEMORY[0xB0EBE0] = Math::Sqrt(v0 + v0); /*0x717e0e*/
}
}
} // namespace gamemd

// 0x717E20
namespace gamemd {
void sub_717E20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_717E20()
{
  MEMORY[0xB0EC30] = MEMORY[0xB0EBE0] / 60.0; /*0x717e2c*/
}
}
} // namespace gamemd

// 0x717E40
namespace gamemd {
void sub_717E40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_717E40()
{
  MEMORY[0xB0EC18] = 1.0 / MEMORY[0xB0EC30]; /*0x717e4c*/
}
}
} // namespace gamemd

// 0x717E60
namespace gamemd {
void sub_717E60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_717E60()
{
  MEMORY[0xB0EC10] = 0.0174532925199433 * 45.0; /*0x717e6c*/
}
}
} // namespace gamemd

// 0x717E80
namespace gamemd {
void sub_717E80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_717E80()
{
  MEMORY[0xB0EBE8] = 0.0174532925199433 * 60.0; /*0x717e8c*/
}
}
} // namespace gamemd

// 0x717EA0
namespace gamemd {
void sub_717EA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_717EA0()
{
  MEMORY[0xB0EBC0] = 0.0174532925199433 * 90.0; /*0x717eac*/
}
}
} // namespace gamemd

// 0x717EC0
namespace gamemd {
long long sub_717EC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_717EC0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0EBC0] - MEMORY[0xB0EBE8]); /*0x717ed2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0EBE0] * 0.5); /*0x717ee6*/
  MEMORY[0xB0EC38] = result; /*0x717eeb*/
  return result; /*0x717ef0*/
}
}
} // namespace gamemd

// 0x717F00
namespace gamemd {
void sub_717F00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_717F00()
{
  MEMORY[0xB0EBF0] = Math::ArcTan((double)MEMORY[0xB0EC38] * 0.00390625); /*0x717f17*/
}
}
} // namespace gamemd

// 0x717F30
namespace gamemd {
void sub_717F30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_717F30()
{
  MEMORY[0xB0EC08] = Math::ArcTan((double)(2 * MEMORY[0xB0EC38]) / MEMORY[0xB0EBE0]); /*0x717f52*/
}
}
} // namespace gamemd

// 0x717F60
namespace gamemd {
long long sub_717F60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_717F60()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0EC38]) + 0.5); /*0x717f7b*/
  MEMORY[0xB0EC2C] = result; /*0x717f80*/
  return result; /*0x717f86*/
}
}
} // namespace gamemd

// 0x717F90
namespace gamemd {
int sub_717F90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_717F90()
{
  MEMORY[0xB0EBD8] = 0; /*0x717f92*/
  return 0; /*0x717f9e*/
}
}
} // namespace gamemd

// 0x717FA0
namespace gamemd {
int sub_717FA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_717FA0()
{
  MEMORY[0xB0EBF8] = 0; /*0x717fa2*/
  MEMORY[0xB0EBFC] = 0; /*0x717fa7*/
  MEMORY[0xB0EC00] = 0; /*0x717fac*/
  return 0; /*0x717fb1*/
}
}
} // namespace gamemd

// 0x717FC0
namespace gamemd {
int sub_717FC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_717FC0()
{
  MEMORY[0xB0EC28] = 0; /*0x717fc5*/
  MEMORY[0xB0EC20] = 128; /*0x717fcf*/
  MEMORY[0xB0EC24] = 128; /*0x717fd4*/
  return 128; /*0x717fd9*/
}
}
} // namespace gamemd

// 0x717FE0
namespace gamemd {
int sub_717FE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_717FE0()
{
  MEMORY[0xB0EBC8] = 0; /*0x717fe2*/
  MEMORY[0xB0EBCC] = 0; /*0x717fe7*/
  MEMORY[0xB0EBD0] = 0; /*0x717fec*/
  MEMORY[0xB0EBD4] = 0; /*0x717ff1*/
  return 0; /*0x717ff6*/
}
}
} // namespace gamemd

// 0x7187A0
namespace gamemd {
char ProcessUnitDeploymentAtCell(int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ProcessUnitDeploymentAtCell(int **this, int a2, int a3, int a4)
{
  _DWORD *i; // edi
  bool v6; // bl
  int v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  int v10; // ecx
  _DWORD *v11; // ecx
  _DWORD *v12; // eax
  int *v13; // ecx
  int v14; // edi
  void *v15; // eax
  int *v16; // eax
  _DWORD *v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  char v22; // [esp+31h] [ebp-5h]
  int v23; // [esp+32h] [ebp-4h] BYREF

  for ( i = (_DWORD *)*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 57); i; i = (_DWORD *)i[12] ) /*0x7187bf*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*i + 352))(i) ) /*0x7187c5*/
    {
      v23 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)) + 160); /*0x7187e7*/
      (*(void (__thiscall **)(_DWORD, int *, _DWORD, int, _DWORD, int, _DWORD, _DWORD))(**(this + 3) + 364))( /*0x718804*/
        *(this + 3),
        &v23,
        0,
        MEMORY[0x8871E0]->?[5],
        0,
        1,
        0,
        0);
    }
  }
  v22 = 0; /*0x718814*/
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)) + 3278) /*0x71885d*/
    && ((*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 80) & 0x100) != 0
     || *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 59) == 1) )
  {
    v22 = 1; /*0x71885f*/
  }
  v6 = 0; /*0x718867*/
  if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)) + 1660) == 3 ) /*0x718878*/
  {
    v6 = 1; /*0x71887d*/
    if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)) + 1040) ) /*0x718887*/
    {
      v7 = (*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)); /*0x718896*/
      v6 = (unsigned __int8)HouseClass::GainedPoweredCenter(v7) != 0; /*0x7188af*/
    }
  }
  LOWORD(v23) = a2 / 256; /*0x7188c1*/
  HIWORD(v23) = a3 / 256; /*0x7188da*/
  if ( *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v23) + 59) != 2 /*0x718962*/
    || v6
    || *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)) + 3278)
    || (*(int (__thiscall **)(_DWORD))(**(this + 3) + 44))(*(this + 3)) == 15
    || (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 80) & 0x100) != 0
    || *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 59) == 1 )
  {
    v13 = *(this + 3); /*0x718a01*/
    LOWORD(v23) = a2 / 256; /*0x718a14*/
    HIWORD(v23) = a3 / 256; /*0x718a2f*/
    v14 = *v13; /*0x718a3c*/
    v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v23); /*0x718a46*/
    if ( (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD, int))(v14 + 428))(*(this + 3), v15, -1, -1, 0, 1) == 7 /*0x718a60*/
      || (LOBYTE(v12) = v22) != 0 )
    {
      LOWORD(v23) = a2 / 256; /*0x718a80*/
      HIWORD(v23) = a3 / 256; /*0x718a95*/
      v16 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v23); /*0x718aa2*/
      if ( !Cell::IsGroundTypeRange(v16) || (*(int (__thiscall **)(_DWORD))(**(this + 3) + 44))(*(this + 3)) == 15 ) /*0x718abd*/
      {
        v19 = (*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)); /*0x718b23*/
        v20 = (int)*(this + 3); /*0x718b2f*/
        v23 = *(_DWORD *)(v19 + 160); /*0x718b32*/
        LOBYTE(v12) = (*(int (__thiscall **)(int, int *, _DWORD, int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v20 + 364))( /*0x718b53*/
                        v20,
                        &v23,
                        0,
                        MEMORY[0x8871E0]->?[5],
                        0,
                        1,
                        0,
                        0);
      }
      else
      {
        *((_BYTE *)*(this + 3) + 973) = 1; /*0x718ac2*/
        (*(void (__thiscall **)(_DWORD))(**(this + 3) + 928))(*(this + 3)); /*0x718ace*/
        v12 = *(this + 3); /*0x718ad4*/
        v17 = (_DWORD *)v12[182]; /*0x718ad7*/
        if ( v17 ) /*0x718adf*/
        {
          TechnoClass::MutateAll(v17, v12[266], v12[267]); /*0x718aef*/
          v18 = (*(this + 3))[182]; /*0x718af7*/
          if ( v18 ) /*0x718aff*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v18 + 32))(v18, 1); /*0x718b05*/
          v12 = *(this + 3); /*0x718b08*/
          v12[182] = 0; /*0x718b0e*/
        }
      }
    }
  }
  else
  {
    *((_BYTE *)*(this + 3) + 973) = 1; /*0x71896b*/
    (*(void (__thiscall **)(_DWORD))(**(this + 3) + 928))(*(this + 3)); /*0x718977*/
    v8 = *(this + 3); /*0x71897d*/
    v9 = (_DWORD *)v8[182]; /*0x718980*/
    if ( v9 ) /*0x718988*/
    {
      TechnoClass::MutateAll(v9, v8[266], v8[267]); /*0x718998*/
      v10 = (*(this + 3))[182]; /*0x7189a0*/
      if ( v10 ) /*0x7189a8*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 32))(v10, 1); /*0x7189ae*/
      (*(this + 3))[182] = 0; /*0x7189b4*/
    }
    v11 = *(this + 3); /*0x7189be*/
    if ( v11[266] ) /*0x7189c1*/
    {
      LOBYTE(v12) = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v11 + 224))(v11, v11[266]); /*0x7189ce*/
    }
    else
    {
      v12 = (_DWORD *)v11[267]; /*0x7189dd*/
      if ( v12 ) /*0x7189e5*/
        LOBYTE(v12) = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v11 + 228))(v11, v11[267]); /*0x7189ee*/
    }
  }
  return (char)v12; /*0x7189d4*/
}
}
} // namespace gamemd

// 0x71A1C0
namespace gamemd {
void sub_71A1C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71A1C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x71a1cc*/
  MEMORY[0xB0EC78] = Math::Sqrt(v0 + v0); /*0x71a1de*/
}
}
} // namespace gamemd

// 0x71A1F0
namespace gamemd {
void sub_71A1F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71A1F0()
{
  MEMORY[0xB0ECC8] = MEMORY[0xB0EC78] / 60.0; /*0x71a1fc*/
}
}
} // namespace gamemd

// 0x71A210
namespace gamemd {
void sub_71A210()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71A210()
{
  MEMORY[0xB0ECB0] = 1.0 / MEMORY[0xB0ECC8]; /*0x71a21c*/
}
}
} // namespace gamemd

// 0x71A230
namespace gamemd {
void sub_71A230()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71A230()
{
  MEMORY[0xB0ECA8] = 0.0174532925199433 * 45.0; /*0x71a23c*/
}
}
} // namespace gamemd

// 0x71A250
namespace gamemd {
void sub_71A250()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71A250()
{
  MEMORY[0xB0EC80] = 0.0174532925199433 * 60.0; /*0x71a25c*/
}
}
} // namespace gamemd

// 0x71A270
namespace gamemd {
void sub_71A270()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71A270()
{
  MEMORY[0xB0EC40] = 0.0174532925199433 * 90.0; /*0x71a27c*/
}
}
} // namespace gamemd

// 0x71A290
namespace gamemd {
long long sub_71A290()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_71A290()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0EC40] - MEMORY[0xB0EC80]); /*0x71a2a2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0EC78] * 0.5); /*0x71a2b6*/
  MEMORY[0xB0ECD0] = result; /*0x71a2bb*/
  return result; /*0x71a2c0*/
}
}
} // namespace gamemd

// 0x71A2D0
namespace gamemd {
void sub_71A2D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71A2D0()
{
  MEMORY[0xB0EC88] = Math::ArcTan((double)MEMORY[0xB0ECD0] * 0.00390625); /*0x71a2e7*/
}
}
} // namespace gamemd

// 0x71A300
namespace gamemd {
void sub_71A300()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71A300()
{
  MEMORY[0xB0ECA0] = Math::ArcTan((double)(2 * MEMORY[0xB0ECD0]) / MEMORY[0xB0EC78]); /*0x71a322*/
}
}
} // namespace gamemd

// 0x71A330
namespace gamemd {
long long sub_71A330()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_71A330()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0ECD0]) + 0.5); /*0x71a34b*/
  MEMORY[0xB0ECC4] = result; /*0x71a350*/
  return result; /*0x71a356*/
}
}
} // namespace gamemd

// 0x71A360
namespace gamemd {
int sub_71A360()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_71A360()
{
  MEMORY[0xB0EC58] = 0; /*0x71a362*/
  MEMORY[0xB0EC5A] = 0; /*0x71a368*/
  return 0; /*0x71a36e*/
}
}
} // namespace gamemd

// 0x71A370
namespace gamemd {
int sub_71A370()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_71A370()
{
  MEMORY[0xB0EC90] = 0; /*0x71a372*/
  MEMORY[0xB0EC94] = 0; /*0x71a377*/
  MEMORY[0xB0EC98] = 0; /*0x71a37c*/
  return 0; /*0x71a381*/
}
}
} // namespace gamemd

// 0x71A390
namespace gamemd {
int sub_71A390()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_71A390()
{
  MEMORY[0xB0ECC0] = 0; /*0x71a395*/
  MEMORY[0xB0ECB8] = 128; /*0x71a39f*/
  MEMORY[0xB0ECBC] = 128; /*0x71a3a4*/
  return 128; /*0x71a3a9*/
}
}
} // namespace gamemd

// 0x71A3B0
namespace gamemd {
int sub_71A3B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_71A3B0()
{
  MEMORY[0xB0EC48] = 0; /*0x71a3b2*/
  MEMORY[0xB0EC4C] = 0; /*0x71a3b7*/
  MEMORY[0xB0EC50] = 0; /*0x71a3bc*/
  MEMORY[0xB0EC54] = 0; /*0x71a3c1*/
  return 0; /*0x71a3c6*/
}
}
} // namespace gamemd

// 0x71A3D0
namespace gamemd {
int sub_71A3D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_71A3D0()
{
  MEMORY[0xB0EC64] = 0; /*0x71a3d7*/
  MEMORY[0xB0EC68] = 0; /*0x71a3dc*/
  MEMORY[0xB0EC6C] = 1; /*0x71a3e1*/
  MEMORY[0xB0EC6D] = 0; /*0x71a3e8*/
  MEMORY[0xB0EC60] = (int)&DynamicVectorClass<TemporalClass *>::`vftable'; /*0x71a3ed*/
  MEMORY[0xB0EC74] = 10; /*0x71a3f7*/
  MEMORY[0xB0EC70] = 0; /*0x71a401*/
  return atexit(sub_71A410); /*0x71a40c*/
}
}
} // namespace gamemd

// 0x71A410
namespace gamemd {
void sub_71A410()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_71A410()
{
  MEMORY[0xB0EC60] = (int)&VectorClass<TemporalClass *>::`vftable'; /*0x71a418*/
  if ( MEMORY[0xB0EC64] && MEMORY[0xB0EC6D] ) /*0x71a42c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0EC64]); /*0x71a42f*/
    MEMORY[0xB0EC64] = 0; /*0x71a437*/
  }
  MEMORY[0xB0EC6D] = 0; /*0x71a43d*/
  MEMORY[0xB0EC68] = 0; /*0x71a443*/
}
}
} // namespace gamemd

// 0x71AD30
namespace gamemd {
void nullsub_246()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void nullsub_246()
{
  ; /*0x71ad30*/
}
}
} // namespace gamemd

// 0x71B5A0
namespace gamemd {
void sub_71B5A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71B5A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x71b5ac*/
  MEMORY[0xB0ECF8] = Math::Sqrt(v0 + v0); /*0x71b5be*/
}
}
} // namespace gamemd

// 0x71B5D0
namespace gamemd {
void sub_71B5D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71B5D0()
{
  MEMORY[0xB0ED48] = MEMORY[0xB0ECF8] / 60.0; /*0x71b5dc*/
}
}
} // namespace gamemd

// 0x71B5F0
namespace gamemd {
void sub_71B5F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71B5F0()
{
  MEMORY[0xB0ED30] = 1.0 / MEMORY[0xB0ED48]; /*0x71b5fc*/
}
}
} // namespace gamemd

// 0x71B610
namespace gamemd {
void sub_71B610()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71B610()
{
  MEMORY[0xB0ED28] = 0.0174532925199433 * 45.0; /*0x71b61c*/
}
}
} // namespace gamemd

// 0x71B630
namespace gamemd {
void sub_71B630()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71B630()
{
  MEMORY[0xB0ED00] = 0.0174532925199433 * 60.0; /*0x71b63c*/
}
}
} // namespace gamemd

// 0x71B650
namespace gamemd {
void sub_71B650()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71B650()
{
  MEMORY[0xB0ECD8] = 0.0174532925199433 * 90.0; /*0x71b65c*/
}
}
} // namespace gamemd

// 0x71B670
namespace gamemd {
long long sub_71B670()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_71B670()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0ECD8] - MEMORY[0xB0ED00]); /*0x71b682*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0ECF8] * 0.5); /*0x71b696*/
  MEMORY[0xB0ED50] = result; /*0x71b69b*/
  return result; /*0x71b6a0*/
}
}
} // namespace gamemd

// 0x71B6B0
namespace gamemd {
void sub_71B6B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71B6B0()
{
  MEMORY[0xB0ED08] = Math::ArcTan((double)MEMORY[0xB0ED50] * 0.00390625); /*0x71b6c7*/
}
}
} // namespace gamemd

// 0x71B6E0
namespace gamemd {
void sub_71B6E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71B6E0()
{
  MEMORY[0xB0ED20] = Math::ArcTan((double)(2 * MEMORY[0xB0ED50]) / MEMORY[0xB0ECF8]); /*0x71b702*/
}
}
} // namespace gamemd

// 0x71B710
namespace gamemd {
long long sub_71B710()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_71B710()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0ED50]) + 0.5); /*0x71b72b*/
  MEMORY[0xB0ED44] = result; /*0x71b730*/
  return result; /*0x71b736*/
}
}
} // namespace gamemd

// 0x71B740
namespace gamemd {
int sub_71B740()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_71B740()
{
  MEMORY[0xB0ECF0] = 0; /*0x71b742*/
  MEMORY[0xB0ECF2] = 0; /*0x71b748*/
  return 0; /*0x71b74e*/
}
}
} // namespace gamemd

// 0x71B750
namespace gamemd {
int sub_71B750()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_71B750()
{
  MEMORY[0xB0ED10] = 0; /*0x71b752*/
  MEMORY[0xB0ED14] = 0; /*0x71b757*/
  MEMORY[0xB0ED18] = 0; /*0x71b75c*/
  return 0; /*0x71b761*/
}
}
} // namespace gamemd

// 0x71B770
namespace gamemd {
int sub_71B770()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_71B770()
{
  MEMORY[0xB0ED40] = 0; /*0x71b775*/
  MEMORY[0xB0ED38] = 128; /*0x71b77f*/
  MEMORY[0xB0ED3C] = 128; /*0x71b784*/
  return 128; /*0x71b789*/
}
}
} // namespace gamemd

// 0x71B790
namespace gamemd {
int sub_71B790()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_71B790()
{
  MEMORY[0xB0ECE0] = 0; /*0x71b792*/
  MEMORY[0xB0ECE4] = 0; /*0x71b797*/
  MEMORY[0xB0ECE8] = 0; /*0x71b79c*/
  MEMORY[0xB0ECEC] = 0; /*0x71b7a1*/
  return 0; /*0x71b7a6*/
}
}
} // namespace gamemd

// 0x71C8E0
namespace gamemd {
char sub_71C8E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_71C8E0(int this)
{
  char result; // al
  int v2; // [esp+4h] [ebp-8h]

  result = *(_BYTE *)(this + 205); /*0x71c8e0*/
  if ( !result ) /*0x71c8eb*/
  {
    *(_BYTE *)(this + 205) = 1; /*0x71c8ee*/
    *(_DWORD *)(this + 180) = MEMORY[0xA8ED84]; /*0x71c905*/
    *(_DWORD *)(this + 192) = 2; /*0x71c90b*/
    *(_DWORD *)(this + 184) = v2; /*0x71c911*/
    *(_DWORD *)(this + 188) = 2; /*0x71c914*/
    *(_DWORD *)(this + 172) = 0; /*0x71c917*/
    return v2; /*0x71c907*/
  }
  return result; /*0x71c922*/
}
}
} // namespace gamemd

// 0x71D370
namespace gamemd {
int sub_71D370()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_71D370()
{
  MEMORY[0xB0ED68] = 0; /*0x71d372*/
  MEMORY[0xB0ED6C] = 0; /*0x71d377*/
  MEMORY[0xB0ED70] = 0; /*0x71d37c*/
  MEMORY[0xB0ED74] = 0; /*0x71d381*/
  return 0; /*0x71d386*/
}
}
} // namespace gamemd

// 0x71D390
namespace gamemd {
void sub_71D390()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71D390()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x71d39c*/
  MEMORY[0xB0ED80] = Math::Sqrt(v0 + v0); /*0x71d3ae*/
}
}
} // namespace gamemd

// 0x71D3C0
namespace gamemd {
void sub_71D3C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71D3C0()
{
  MEMORY[0xB0F140] = MEMORY[0xB0ED80] / 60.0; /*0x71d3cc*/
}
}
} // namespace gamemd

// 0x71D3E0
namespace gamemd {
void sub_71D3E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71D3E0()
{
  MEMORY[0xB0EDB8] = 1.0 / MEMORY[0xB0F140]; /*0x71d3ec*/
}
}
} // namespace gamemd

// 0x71D400
namespace gamemd {
void sub_71D400()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71D400()
{
  MEMORY[0xB0EDB0] = 0.0174532925199433 * 45.0; /*0x71d40c*/
}
}
} // namespace gamemd

// 0x71D420
namespace gamemd {
void sub_71D420()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71D420()
{
  MEMORY[0xB0ED88] = 0.0174532925199433 * 60.0; /*0x71d42c*/
}
}
} // namespace gamemd

// 0x71D440
namespace gamemd {
void sub_71D440()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71D440()
{
  MEMORY[0xB0ED58] = 0.0174532925199433 * 90.0; /*0x71d44c*/
}
}
} // namespace gamemd

// 0x71D460
namespace gamemd {
long long sub_71D460()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_71D460()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0ED58] - MEMORY[0xB0ED88]); /*0x71d472*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0ED80] * 0.5); /*0x71d486*/
  MEMORY[0xB0F148] = result; /*0x71d48b*/
  return result; /*0x71d490*/
}
}
} // namespace gamemd

// 0x71D4A0
namespace gamemd {
void sub_71D4A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71D4A0()
{
  MEMORY[0xB0ED90] = Math::ArcTan((double)MEMORY[0xB0F148] * 0.00390625); /*0x71d4b7*/
}
}
} // namespace gamemd

// 0x71D4D0
namespace gamemd {
void sub_71D4D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71D4D0()
{
  MEMORY[0xB0EDA8] = Math::ArcTan((double)(2 * MEMORY[0xB0F148]) / MEMORY[0xB0ED80]); /*0x71d4f2*/
}
}
} // namespace gamemd

// 0x71D500
namespace gamemd {
long long sub_71D500()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_71D500()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F148]) + 0.5); /*0x71d51b*/
  MEMORY[0xB0F13C] = result; /*0x71d520*/
  return result; /*0x71d526*/
}
}
} // namespace gamemd

// 0x71D530
namespace gamemd {
int sub_71D530()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_71D530()
{
  MEMORY[0xB0ED7C] = 0; /*0x71d532*/
  MEMORY[0xB0ED7E] = 0; /*0x71d538*/
  return 0; /*0x71d53e*/
}
}
} // namespace gamemd

// 0x71D540
namespace gamemd {
int sub_71D540()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_71D540()
{
  MEMORY[0xB0ED98] = 0; /*0x71d542*/
  MEMORY[0xB0ED9C] = 0; /*0x71d547*/
  MEMORY[0xB0EDA0] = 0; /*0x71d54c*/
  return 0; /*0x71d551*/
}
}
} // namespace gamemd

// 0x71D560
namespace gamemd {
int sub_71D560()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_71D560()
{
  MEMORY[0xB0F138] = 0; /*0x71d565*/
  MEMORY[0xB0F130] = 128; /*0x71d56f*/
  MEMORY[0xB0F134] = 128; /*0x71d574*/
  return 128; /*0x71d579*/
}
}
} // namespace gamemd

// 0x71D580
namespace gamemd {
int InitializeCellSpreadTables()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int InitializeCellSpreadTables()
{
  int v0; // eax
  int v1; // edx
  int v2; // ecx
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = 0; /*0x71d582*/
  MEMORY[0xB0EDC0] = 0; /*0x71d5a2*/
  MEMORY[0xB0EDC4] = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d5b3*/
  memset(&MEMORY[0xB0EDC8], 0, 0x20u); /*0x71d5c9*/
  Array::ForEach((int)&MEMORY[0xB0EDC8], 4, 8, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d5d0*/
  MEMORY[0xB0EDE8] = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d5ec*/
  MEMORY[0xB0EDEC] = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d607*/
  MEMORY[0xB0EDF0] = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d618*/
  memset(&MEMORY[0xB0EDF4], 0, 0x1Cu); /*0x71d62e*/
  Array::ForEach((int)&MEMORY[0xB0EDF4], 4, 7, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d635*/
  MEMORY[0xB0EE10] = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d651*/
  MEMORY[0xB0EE14] = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d66c*/
  MEMORY[0xB0EE18] = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d67d*/
  memset(&MEMORY[0xB0EE1C], 0, 0x1Cu); /*0x71d693*/
  Array::ForEach((int)&MEMORY[0xB0EE1C], 4, 7, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d69a*/
  MEMORY[0xB0EE38] = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d6b0*/
  MEMORY[0xB0EE3C] = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d6cb*/
  MEMORY[0xB0EE40] = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d6d9*/
  MEMORY[0xB0EE44] = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d6fa*/
  v0 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d705*/
  MEMORY[0xB0EE4C] = 0; /*0x71d709*/
  MEMORY[0xB0EE50] = 0; /*0x71d714*/
  MEMORY[0xB0EE54] = 0; /*0x71d71c*/
  MEMORY[0xB0EE58] = 0; /*0x71d724*/
  MEMORY[0xB0EE48] = v0; /*0x71d72f*/
  MEMORY[0xB0EE5C] = 0; /*0x71d734*/
  Array::ForEach((int)&MEMORY[0xB0EE4C], 4, 5, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d73a*/
  MEMORY[0xB0EE60] = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d756*/
  MEMORY[0xB0EE64] = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d76b*/
  MEMORY[0xB0EE68] = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d779*/
  MEMORY[0xB0EE6C] = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d794*/
  MEMORY[0xB0EE70] = *(_DWORD *)CellStruct::Set(&v4, 0, 2); /*0x71d7a9*/
  MEMORY[0xB0EE74] = *(_DWORD *)CellStruct::Set(&v4, 1, 2); /*0x71d7ba*/
  v1 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d7ce*/
  MEMORY[0xB0EE7C] = 0; /*0x71d7d2*/
  MEMORY[0xB0EE78] = v1; /*0x71d7d7*/
  MEMORY[0xB0EE80] = 0; /*0x71d7dd*/
  MEMORY[0xB0EE84] = 0; /*0x71d7e7*/
  Array::ForEach((int)&MEMORY[0xB0EE7C], 4, 3, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d7f5*/
  MEMORY[0xB0EE88] = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d80b*/
  MEMORY[0xB0EE8C] = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d826*/
  MEMORY[0xB0EE90] = *(_DWORD *)CellStruct::Set(&v4, 2, 0); /*0x71d83b*/
  MEMORY[0xB0EE94] = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d849*/
  MEMORY[0xB0EE98] = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d864*/
  MEMORY[0xB0EE9C] = *(_DWORD *)CellStruct::Set(&v4, 2, 1); /*0x71d87f*/
  v2 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d889*/
  MEMORY[0xB0EEA4] = 0; /*0x71d88d*/
  MEMORY[0xB0EEA8] = 0; /*0x71d89a*/
  MEMORY[0xB0EEA0] = v2; /*0x71d8a7*/
  MEMORY[0xB0EEAC] = 0; /*0x71d8ad*/
  Array::ForEach((int)&MEMORY[0xB0EEA4], 4, 3, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d8b3*/
  MEMORY[0xB0EEB0] = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d8cf*/
  MEMORY[0xB0EEB4] = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d8dd*/
  MEMORY[0xB0EEB8] = *(_DWORD *)CellStruct::Set(&v4, 2, 0); /*0x71d8f8*/
  MEMORY[0xB0EEBC] = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d907*/
  MEMORY[0xB0EEC0] = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d91b*/
  MEMORY[0xB0EEC4] = *(_DWORD *)CellStruct::Set(&v4, 2, 1); /*0x71d936*/
  MEMORY[0xB0EEC8] = *(_DWORD *)CellStruct::Set(&v4, 0, 2); /*0x71d94b*/
  MEMORY[0xB0EECC] = *(_DWORD *)CellStruct::Set(&v4, 1, 2); /*0x71d959*/
  MEMORY[0xB0EED0] = *(_DWORD *)CellStruct::Set(&v4, 2, 2); /*0x71d97a*/
  MEMORY[0xB0EED4] = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d98f*/
  MEMORY[0xB0EED8] = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d99d*/
  MEMORY[0xB0EEDC] = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d9b8*/
  MEMORY[0xB0EEE0] = *(_DWORD *)CellStruct::Set(&v4, 2, 0); /*0x71d9cd*/
  MEMORY[0xB0EEE4] = *(_DWORD *)CellStruct::Set(&v4, 3, 0); /*0x71d9db*/
  MEMORY[0xB0EEE8] = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d9f6*/
  MEMORY[0xB0EEEC] = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71da0b*/
  MEMORY[0xB0EEF0] = *(_DWORD *)CellStruct::Set(&v4, 2, 1); /*0x71da19*/
  MEMORY[0xB0EEF4] = *(_DWORD *)CellStruct::Set(&v4, 3, 1); /*0x71da3a*/
  MEMORY[0xB0EEF8] = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71da4c*/
  MEMORY[0xB0EEFC] = 0; /*0x71da62*/
  memset(&MEMORY[0xB0EF00], 0, 0x230u); /*0x71da73*/
  return Array::ForEach((int)&MEMORY[0xB0EEFC], 4, 141, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71da7a*/
}
}
} // namespace gamemd

// 0x71DCA0
namespace gamemd {
int ObjectTypeClass_LoadTheaterSHP(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall ObjectTypeClass_LoadTheaterSHP(int a1)
{
  int result; // eax
  int i; // edi
  int v4; // esi
  _DWORD v5[22]; // [esp+Ch] [ebp-26Ch] BYREF
  _BYTE v6[12]; // [esp+64h] [ebp-214h] BYREF
  int v7; // [esp+70h] [ebp-208h]
  char Buffer[512]; // [esp+78h] [ebp-200h] BYREF

  result = MEMORY[0xA8E328]; /*0x71dca0*/
  for ( i = 0; i < MEMORY[0xA8E328]; ++i ) /*0x71dcb6*/
  {
    v4 = *((_DWORD *)MEMORY[0xA8E31C] + i); /*0x71dcc2*/
    if ( *(_BYTE *)(v4 + 556) ) /*0x71dcc5*/
    {
      _makepath(Buffer, 0, 0, (const char *)(v4 + 36), (const char *)&off_7E1BC6 + 112 * a1); /*0x71dcef*/
      if ( *(_BYTE *)(v4 + 168) ) /*0x71dcf4*/
      {
        if ( *(_DWORD *)(v4 + 164) ) /*0x71dd01*/
          __3_YAXPAX_Z(*(void **)(v4 + 164)); /*0x71dd0c*/
      }
      *(_DWORD *)(v4 + 164) = 0; /*0x71dd18*/
      *(_BYTE *)(v4 + 168) = 0; /*0x71dd23*/
      CCFileClass::Construct(v5, Buffer); /*0x71dd29*/
      *(_DWORD *)(v4 + 164) = CCFileClass::ReadEntireFile(v5); /*0x71dd3b*/
      v5[0] = &CCFileClass::`vftable'; /*0x71dd41*/
      v7 = 0; /*0x71dd49*/
      Vector::Clear((int)v6); /*0x71dd4d*/
      v5[0] = &off_7E1668; /*0x71dd56*/
      BufferIOFileClass::Dtor(v5); /*0x71dd5e*/
    }
    result = MEMORY[0xA8E328]; /*0x71dd63*/
  }
  return result; /*0x71dd72*/
}
}
} // namespace gamemd

// 0x71DE90
namespace gamemd {
void nullsub_247()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl nullsub_247()
{
  ; /*0x71de90*/
}
}
} // namespace gamemd

// 0x71E410
namespace gamemd {
void sub_71E410()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71E410()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x71e41c*/
  MEMORY[0xB0F170] = Math::Sqrt(v0 + v0); /*0x71e42e*/
}
}
} // namespace gamemd

// 0x71E440
namespace gamemd {
void sub_71E440()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71E440()
{
  MEMORY[0xB0F1D8] = MEMORY[0xB0F170] / 60.0; /*0x71e44c*/
}
}
} // namespace gamemd

// 0x71E460
namespace gamemd {
void sub_71E460()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71E460()
{
  MEMORY[0xB0F1C0] = 1.0 / MEMORY[0xB0F1D8]; /*0x71e46c*/
}
}
} // namespace gamemd

// 0x71E480
namespace gamemd {
void sub_71E480()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71E480()
{
  MEMORY[0xB0F1B8] = 0.0174532925199433 * 45.0; /*0x71e48c*/
}
}
} // namespace gamemd

// 0x71E4A0
namespace gamemd {
void sub_71E4A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71E4A0()
{
  MEMORY[0xB0F178] = 0.0174532925199433 * 60.0; /*0x71e4ac*/
}
}
} // namespace gamemd

// 0x71E4C0
namespace gamemd {
void sub_71E4C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71E4C0()
{
  MEMORY[0xB0F150] = 0.0174532925199433 * 90.0; /*0x71e4cc*/
}
}
} // namespace gamemd

// 0x71E4E0
namespace gamemd {
long long sub_71E4E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_71E4E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0F150] - MEMORY[0xB0F178]); /*0x71e4f2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0F170] * 0.5); /*0x71e506*/
  MEMORY[0xB0F1E0] = result; /*0x71e50b*/
  return result; /*0x71e510*/
}
}
} // namespace gamemd

// 0x71E520
namespace gamemd {
void sub_71E520()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71E520()
{
  MEMORY[0xB0F180] = Math::ArcTan((double)MEMORY[0xB0F1E0] * 0.00390625); /*0x71e537*/
}
}
} // namespace gamemd

// 0x71E550
namespace gamemd {
void sub_71E550()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_71E550()
{
  MEMORY[0xB0F198] = Math::ArcTan((double)(2 * MEMORY[0xB0F1E0]) / MEMORY[0xB0F170]); /*0x71e572*/
}
}
} // namespace gamemd

// 0x71E580
namespace gamemd {
long long sub_71E580()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_71E580()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F1E0]) + 0.5); /*0x71e59b*/
  MEMORY[0xB0F1D4] = result; /*0x71e5a0*/
  return result; /*0x71e5a6*/
}
}
} // namespace gamemd

// 0x71E5B0
namespace gamemd {
int sub_71E5B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_71E5B0()
{
  MEMORY[0xB0F168] = 0; /*0x71e5b2*/
  MEMORY[0xB0F16A] = 0; /*0x71e5b8*/
  return 0; /*0x71e5be*/
}
}
} // namespace gamemd

// 0x71E5C0
namespace gamemd {
int sub_71E5C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_71E5C0()
{
  MEMORY[0xB0F188] = 0; /*0x71e5c2*/
  MEMORY[0xB0F18C] = 0; /*0x71e5c7*/
  MEMORY[0xB0F190] = 0; /*0x71e5cc*/
  return 0; /*0x71e5d1*/
}
}
} // namespace gamemd

// 0x71E5E0
namespace gamemd {
int sub_71E5E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_71E5E0()
{
  MEMORY[0xB0F1D0] = 0; /*0x71e5e5*/
  MEMORY[0xB0F1C8] = 128; /*0x71e5ef*/
  MEMORY[0xB0F1CC] = 128; /*0x71e5f4*/
  return 128; /*0x71e5f9*/
}
}
} // namespace gamemd

// 0x71E600
namespace gamemd {
int sub_71E600()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_71E600()
{
  MEMORY[0xB0F158] = 0; /*0x71e602*/
  MEMORY[0xB0F15C] = 0; /*0x71e607*/
  MEMORY[0xB0F160] = 0; /*0x71e60c*/
  MEMORY[0xB0F164] = 0; /*0x71e611*/
  return 0; /*0x71e616*/
}
}
} // namespace gamemd

// 0x71E620
namespace gamemd {
int sub_71E620()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_71E620()
{
  MEMORY[0xB0F1A4] = 0; /*0x71e627*/
  MEMORY[0xB0F1A8] = 0; /*0x71e62c*/
  MEMORY[0xB0F1AC] = 1; /*0x71e631*/
  MEMORY[0xB0F1AD] = 0; /*0x71e638*/
  MEMORY[0xB0F1A0] = (int)&DynamicVectorClass<TEventClass *>::`vftable'; /*0x71e63d*/
  MEMORY[0xB0F1B4] = 10; /*0x71e647*/
  MEMORY[0xB0F1B0] = 0; /*0x71e651*/
  return atexit(sub_71E660); /*0x71e65c*/
}
}
} // namespace gamemd

// 0x71E660
namespace gamemd {
void sub_71E660()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_71E660()
{
  MEMORY[0xB0F1A0] = (int)&VectorClass<TEventClass *>::`vftable'; /*0x71e668*/
  if ( MEMORY[0xB0F1A4] && MEMORY[0xB0F1AD] ) /*0x71e67c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F1A4]); /*0x71e67f*/
    MEMORY[0xB0F1A4] = 0; /*0x71e687*/
  }
  MEMORY[0xB0F1AD] = 0; /*0x71e68d*/
  MEMORY[0xB0F1A8] = 0; /*0x71e693*/
}
}
} // namespace gamemd

// 0x71FA40
namespace gamemd {
int sub_71FA40(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_71FA40(_DWORD *this, int a2)
{
  *(this + 21) = a2; /*0x71fa44*/
  return a2; /*0x71fa47*/
}
}
} // namespace gamemd

// 0x71FF00
namespace gamemd {
int sub_71FF00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_71FF00()
{
  MEMORY[0xB0F1E8] = 0; /*0x71ff02*/
  MEMORY[0xB0F1EC] = 0; /*0x71ff07*/
  MEMORY[0xB0F1F0] = 0; /*0x71ff0c*/
  MEMORY[0xB0F1F4] = 0; /*0x71ff11*/
  return 0; /*0x71ff16*/
}
}
} // namespace gamemd

// 0x71FF20
namespace gamemd {
int sub_71FF20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_71FF20(
        TextButtonClass *this,
        int aP1,
        int a3,
        int a4,
        int aP2,
        int aP3,
        int aP4,
        int aP5,
        char a9,
        ShapeButtonClass *aP9)
{
  ControlClass *Instance; // ebx

  ToggleClass::Construct( /*0x71ff41*/
    (int)this,
    (ControlClass *)aP1,
    (ControlClass *)aP2,
    (ControlClass *)aP3,
    (ControlClass *)aP4,
    (ControlClass *)aP5);
  this->__pad_0[53] = (char)aP9; /*0x71ff52*/
  this->__pad_0[52] = a9; /*0x71ff5c*/
  this->field_38 = a3; /*0x71ff5f*/
  *((_DWORD *)this + 15) = a4; /*0x71ff62*/
  *(_DWORD *)this->__pad_0 = &TextButtonClass::`vftable'; /*0x71ff65*/
  if ( aP4 == -1 || aP5 == -1 ) /*0x71ff70*/
  {
    Instance = (ControlClass *)TextRenderer::GetInstance(); /*0x71ff7a*/
    if ( aP4 == -1 ) /*0x71ff7c*/
      *(_DWORD *)&this->__pad_0[20] = Text::MeasureWidth(this->field_38, 0) + 8; /*0x71ff8e*/
    if ( aP5 == -1 ) /*0x71ff94*/
      *(_DWORD *)&this->__pad_0[24] = Instance[1].ControlClass_field_0x0C + 2; /*0x71ff9c*/
  }
  return (int)this->__pad_0; /*0x71ffa1*/
}
}
} // namespace gamemd
