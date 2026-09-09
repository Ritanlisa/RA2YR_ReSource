// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5004E0
namespace gamemd {
int House_GetTechLevel(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall House_GetTechLevel(int a1, int a2)
{
  int v4; // eax

  if ( a2 < 0 ) /*0x5004e5*/
    return 0; /*0x5004e7*/
  v4 = TechnoTypeClass::GetByTypeAndIndex(a1, a2); /*0x5004ed*/
  if ( a1 == 6 || a1 == 7 ) /*0x5004fa*/
    return *(_DWORD *)(v4 + 3592); /*0x500500*/
  else
    return 0; /*0x5004fc*/
}
}
} // namespace gamemd

// 0x501750
namespace gamemd {
char sub_501750(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_501750(_DWORD *this, int a2)
{
  char result; // al
  int v4; // eax
  char v5; // bl
  int v6; // [esp+5Ch] [ebp-28h] BYREF
  int v7; // [esp+60h] [ebp-24h] BYREF
  int v8; // [esp+64h] [ebp-20h] BYREF
  int v9; // [esp+68h] [ebp-1Ch] BYREF
  _DWORD v10[2]; // [esp+6Ch] [ebp-18h] BYREF
  _BYTE v11[16]; // [esp+74h] [ebp-10h] BYREF
  char v12; // [esp+88h] [ebp+4h]

  result = MEMORY[0xA8E9A0]; /*0x501750*/
  if ( MEMORY[0xA8E9A0] ) /*0x50175f*/
  {
    v4 = *(this + 5353); /*0x501765*/
    v5 = v4 < *(this + 5354); /*0x501777*/
    *(this + 5353) = a2 + v4; /*0x50177e*/
    House_Notify(); /*0x501784*/
    result = *(this + 5353) < *(this + 5354); /*0x50179d*/
    v12 = result; /*0x5017a2*/
    if ( !MEMORY[0xA8E7AC] && v5 != result ) /*0x5017ae*/
    {
      (*(void (__stdcall **)(_DWORD *, void *, int *))*this)(this, &unk_7F7CD0, &v9); /*0x5017c1*/
      (*(void (__stdcall **)(int, int *))(*(_DWORD *)v9 + 12))(v9, &v8); /*0x5017cf*/
      if ( (*(int (__stdcall **)(int, int, int *, _DWORD))(*(_DWORD *)v8 + 12))(v8, 1, &v6, 0) >= 0 ) /*0x5017e7*/
      {
        while ( 1 ) /*0x5017f7*/
        {
          (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v6 + 12))(v6, v11); /*0x5017f9*/
          if ( !memcmp(v11, &dword_7E9550, 0x10u) ) /*0x501810*/
            break; /*0x501810*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x501817*/
          if ( (*(int (__stdcall **)(int, int, int *, _DWORD))(*(_DWORD *)v8 + 12))(v8, 1, &v6, 0) < 0 ) /*0x50182f*/
            goto LABEL_14; /*0x50182f*/
        }
        (*(void (__stdcall **)(int, int *))(*(_DWORD *)v6 + 28))(v6, &v7); /*0x50183b*/
        while ( (*(int (__stdcall **)(int, int, _DWORD *, _DWORD))(*(_DWORD *)v7 + 12))(v7, 1, v10, 0) >= 0 ) /*0x501853*/
        {
          if ( v12 ) /*0x50185f*/
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v10[0] + 16))(v10[0]); /*0x501864*/
          else
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v10[0] + 12))(v10[0]); /*0x50186c*/
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v10[0] + 8))(v10[0]); /*0x501876*/
        }
        (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x501897*/
      }
LABEL_14:
      (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x50189a*/
      return (*(int (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x5018ab*/
    }
  }
  return result; /*0x5018ae*/
}
}
} // namespace gamemd

// 0x501AA0
namespace gamemd {
unsigned int * sub_501AA0(unsigned int * a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall sub_501AA0(_DWORD *a1, int a2, int a3)
{
  *a1 = 0; /*0x501ab5*/
  return a1; /*0x501ab8*/
}
}
} // namespace gamemd

// 0x504790
namespace gamemd {
int UpdateHouseClassAnger(IUnknown * aP0, HouseClass * aP1, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall UpdateHouseClassAnger(IUnknown *aP0, HouseClass *aP1, int a3, int a4)
{
  int result; // eax
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // ebp
  int v9; // ecx
  int *v10; // edi
  int v11; // edx
  int v12; // ecx
  int v13; // [esp+14h] [ebp+4h]
  int v14; // [esp+18h] [ebp+8h]

  result = (int)aP0; /*0x504790*/
  v5 = 0; /*0x504793*/
  v6 = 0; /*0x50479c*/
  if ( *(int *)&aP0->__pad_5554[192] > 0 ) /*0x5047a2*/
  {
    do /*0x5047c8*/
    {
      v7 = *(_DWORD *)(result + 22024); /*0x5047ac*/
      v8 = *(_DWORD *)(v7 + 8 * v6); /*0x5047b2*/
      v9 = v7 + 8 * v6; /*0x5047b5*/
      if ( v8 == a4 ) /*0x5047ba*/
        *(_DWORD *)(v9 + 4) += a3; /*0x5047bc*/
      ++v6; /*0x5047c5*/
    }
    while ( v6 < *(_DWORD *)(result + 22036) ); /*0x5047c8*/
  }
  v13 = 0; /*0x5047d0*/
  if ( *(int *)(result + 22036) <= 0 ) /*0x5047d6*/
    goto LABEL_18; /*0x5047d6*/
  v10 = *(int **)(result + 22024); /*0x5047d8*/
  v14 = *(_DWORD *)(result + 22036); /*0x5047de*/
  do /*0x504832*/
  {
    v11 = *v10; /*0x5047e5*/
    if ( v10[1] > v5 && !*(_BYTE *)(v11 + 501) ) /*0x5047eb*/
    {
      if ( !v11 /*0x50481e*/
        || v11 != result
        && (v12 = *(_DWORD *)(v11 + 48), v12 != *(_DWORD *)(result + 48))
        && (v12 == -1 || ((1 << v12) & *(_DWORD *)(result + 22408)) == 0) )
      {
        v5 = v10[1]; /*0x504820*/
        v13 = *v10; /*0x504822*/
      }
    }
    v10 += 2; /*0x50482a*/
    --v14; /*0x50482e*/
  }
  while ( v14 ); /*0x504832*/
  if ( v13 ) /*0x50483a*/
    *(_DWORD *)(result + 22016) = *(_DWORD *)(v13 + 48); /*0x504842*/
  else
LABEL_18:
    *(_DWORD *)(result + 22016) = -1; /*0x50484f*/
  return result; /*0x50483f*/
}
}
} // namespace gamemd

// 0x505F80
namespace gamemd {
int globalHelper_005F80(int a1, int * a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall globalHelper_005F80(int a1, int *a2, int a3, int a4)
{
  int v4; // esi
  __int64 v5; // rax
  signed int v6; // ecx
  signed int v7; // eax

  v4 = *(__int16 *)a2 - *(__int16 *)(a1 + 22352); /*0x505f92*/
  v5 = *((__int16 *)a2 + 1) - *(__int16 *)(a1 + 22354); /*0x505f9a*/
  v6 = (HIDWORD(v5) ^ v5) - HIDWORD(v5); /*0x505fa2*/
  v7 = abs32(v4); /*0x505fa7*/
  if ( v7 <= v6 ) /*0x505fab*/
    v7 = v6; /*0x505fad*/
  return a3 + 1000 * v7; /*0x505fa1*/
}
}
} // namespace gamemd

// 0x505FD0
namespace gamemd {
int globalHelper_005FD0(int a1, int * a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall globalHelper_005FD0(int a1, int *a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edx
  int v7; // edi
  int v8; // eax
  double v9; // st7
  __int64 v10; // rax
  int v12; // [esp+2Ch] [ebp+8h]

  v4 = *((__int16 *)a2 + 1); /*0x505fd5*/
  v5 = *(__int16 *)a2; /*0x505ff7*/
  v7 = *(_DWORD *)(*(_DWORD *)(a1 + 90208) /*0x506002*/
                 + 4 * (v5 + *(_DWORD *)(a1 + 22364) * (v4 - *(_DWORD *)(a1 + 22360)) - *(_DWORD *)(a1 + 22356)));
  v8 = 0; /*0x506005*/
  if ( a4 != -1 ) /*0x50600a*/
  {
    v12 = *(__int16 *)(a1 + 22354) - v4; /*0x50602b*/
    v9 = Math::CalcAngle((double)v12, (double)(v5 - *(__int16 *)(a1 + 22352))); /*0x50603c*/
    LOWORD(v12) = Math::RoundToInt((v9 - 1.570796326794897) * -10430.06004058427); /*0x506055*/
    v10 = 32 * a4 - (unsigned __int8)((((unsigned int)v12 >> 7) + 1) >> 1); /*0x506071*/
    v8 = (HIDWORD(v10) ^ v10) - HIDWORD(v10); /*0x506074*/
    if ( v8 >= 128 ) /*0x50607b*/
      v8 = 255 - v8; /*0x506084*/
  }
  return a3 + 1000 * (v8 + (v7 << 7)); /*0x50608e*/
}
}
} // namespace gamemd

// 0x506B70
namespace gamemd {
void nullsub_16()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl nullsub_16()
{
  ; /*0x506b70*/
}
}
} // namespace gamemd

// 0x506B80
namespace gamemd {
void nullsub_17()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl nullsub_17()
{
  ; /*0x506b80*/
}
}
} // namespace gamemd

// 0x5092F0
namespace gamemd {
int sub_5092F0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5092F0(HouseClass *this, int a2)
{
  int result; // eax
  int i; // edi
  int v5; // ecx
  ObjectClass *v6; // eax
  int v7; // eax
  _DWORD v8[3]; // [esp+8h] [ebp-Ch] BYREF

  result = a2; /*0x5092f0*/
  this->radarVisibleTo[0] |= 1 << *(_DWORD *)(*(_DWORD *)(a2 + 52) + 184); /*0x509313*/
  if ( a2 == HouseClass_Player.field_0 ) /*0x509321*/
  {
    for ( i = 0; i < *(int *)&HouseClass_Player.__pad_5568[22996]; ++i ) /*0x509330*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22984] + 4 * i); /*0x509337*/
      if ( v5 && !*(_BYTE *)(v5 + 129) && *(HouseClass **)(v5 + 540) == this ) /*0x50934e*/
      {
        v8[0] = *(_DWORD *)(v5 + 156); /*0x509360*/
        v8[1] = *(_DWORD *)(v5 + 160); /*0x50936a*/
        v6 = *(ObjectClass **)v5; /*0x50936e*/
        v8[2] = *(_DWORD *)(v5 + 164); /*0x509373*/
        v7 = (*(int (__thiscall **)(int))&v6->hasParachute)(v5); /*0x509377*/
        MapClass::RevealArea0( /*0x50938e*/
          (int *)&stru_87C374.__pad_14B0[8132],
          (IUnknown *)v8,
          *(MouseClass **)(v7 + 1512),
          this,
          0,
          0,
          0,
          1,
          1);
      }
    }
    return MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2); /*0x5093a4*/
  }
  return result; /*0x5093a9*/
}
}
} // namespace gamemd

// 0x5093C0
namespace gamemd {
int sub_5093C0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5093C0(int *this, int a2)
{
  int v2; // esi
  int result; // eax
  _DWORD *i; // edx

  v2 = *(this + 5509); /*0x5093c2*/
  result = 0; /*0x5093c8*/
  if ( v2 > 0 ) /*0x5093cd*/
  {
    for ( i = (_DWORD *)*(this + 5506); *i != a2; i += 2 ) /*0x5093d9*/
    {
      if ( ++result >= v2 ) /*0x5093e5*/
        return result; /*0x5093e5*/
    }
    return UpdateHouseClassAnger((unsigned int)this, (int)i, -*(_DWORD *)(*(this + 5506) + 8 * result + 4), a2); /*0x5093f5*/
  }
  return result; /*0x5093e7*/
}
}
} // namespace gamemd

// 0x509CC0
namespace gamemd {
void nullsub_144(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __stdcall nullsub_144(int a1)
{
  ; /*0x509cc0*/
}
}
} // namespace gamemd

// 0x50B920
namespace gamemd {
void sub_50B920(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall sub_50B920(int a1, int a2, int a3)
{
  double v5; // st7
  double v6; // st6
  double v7; // st6
  double v8; // st7

  v5 = Math::Sqrt(*(double *)a1 * *(double *)a1 + *(double *)a3 * *(double *)a3 + *(double *)a2 * *(double *)a2); /*0x50b94d*/
  if ( v5 == 0.0 ) /*0x50b960*/
  {
    *(_DWORD *)a3 = 0; /*0x50b967*/
    *(_DWORD *)(a3 + 4) = 1081073664; /*0x50b96d*/
    *(_DWORD *)a2 = 0; /*0x50b970*/
    *(_DWORD *)(a2 + 4) = 1081073664; /*0x50b976*/
    *(_DWORD *)a1 = 0; /*0x50b979*/
    *(_DWORD *)(a1 + 4) = 1081073664; /*0x50b97f*/
  }
  else
  {
    v6 = *(double *)a1 * 240.0 / v5; /*0x50b997*/
    *(double *)a1 = v6; /*0x50b999*/
    if ( v6 > 255.0 ) /*0x50b9a6*/
    {
      *(_DWORD *)a1 = 0; /*0x50b9a8*/
      *(_DWORD *)(a1 + 4) = 1081073664; /*0x50b9ae*/
    }
    v7 = *(double *)a2 * 240.0 / v5; /*0x50b9b9*/
    *(double *)a2 = v7; /*0x50b9bb*/
    if ( v7 > 255.0 ) /*0x50b9c8*/
    {
      *(_DWORD *)a2 = 0; /*0x50b9ca*/
      *(_DWORD *)(a2 + 4) = 1081073664; /*0x50b9d0*/
    }
    v8 = *(double *)a3 * 240.0 / v5; /*0x50b9db*/
    *(double *)a3 = v8; /*0x50b9dd*/
    if ( v8 > 255.0 ) /*0x50b9ea*/
    {
      *(_DWORD *)a3 = 0; /*0x50b9ec*/
      *(_DWORD *)(a3 + 4) = 1081073664; /*0x50b9f2*/
    }
  }
}
}
} // namespace gamemd

// 0x50C160
namespace gamemd {
double sub_50C160()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __thiscall sub_50C160(_DWORD *this)
{
  return *(float *)(*(this + 13) + 328); /*0x50c169*/
}
}
} // namespace gamemd

// 0x50DA40
namespace gamemd {
int sub_50DA40(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_50DA40(_DWORD *this, int a2)
{
  *(this + 5438) = a2; /*0x50da44*/
  return a2; /*0x50da4a*/
}
}
} // namespace gamemd

// 0x50E3A0
namespace gamemd {
unsigned int * sub_50E3A0(unsigned int * a1, int * a2, short * a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall sub_50E3A0(_DWORD *a1, int *a2, __int16 *a3, int a4)
{
  int v6; // ebx
  double v7; // st7
  double v8; // st7
  double v10; // [esp+10h] [ebp-18h]
  double v11; // [esp+18h] [ebp-10h]
  double v12; // [esp+20h] [ebp-8h]
  int v13; // [esp+2Ch] [ebp+4h]

  v6 = a2[2]; /*0x50e3c0*/
  v10 = (double)(*a3 - 0x3FFF) * -0.00009587672516830327; /*0x50e3c9*/
  v11 = (double)a4; /*0x50e3db*/
  v12 = (double)a2[1]; /*0x50e3e2*/
  v7 = Math::SinCos(v10); /*0x50e3e6*/
  v13 = Math::RoundToInt(v12 - v7 * v11); /*0x50e3f8*/
  v8 = Math::ArcTan2(v10); /*0x50e402*/
  *a1 = Math::RoundToInt(v8 * v11 + (double)*a2); /*0x50e41b*/
  a1[1] = v13; /*0x50e421*/
  a1[2] = v6; /*0x50e425*/
  return a1; /*0x50e41f*/
}
}
} // namespace gamemd

// 0x50FF40
namespace gamemd {
void nullsub_145()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall nullsub_145(void *this)
{
  ; /*0x50ff40*/
}
}
} // namespace gamemd
