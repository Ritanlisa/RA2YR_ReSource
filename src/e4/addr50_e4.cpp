// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_501750_e4.hpp"
#include "e4/classes/E4Recv_5093C0_e4.hpp"
#include "e4/classes/E4Recv_50C160_e4.hpp"
#include "e4/classes/E4Recv_50DA40_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x501750
namespace gamemd {
int E4Recv_501750::sub_501750(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al

  result = g_WTFMode; /*0x501750*/
  if ( g_WTFMode ) /*0x50175f*/
  {
    int v4 = *(this + 5353); /*0x501765*/
    char v5 = v4 < *(this + 5354); /*0x501777*/
    *(this + 5353) = a2 + v4; /*0x50177e*/
    House_Notify(); /*0x501784*/
    result = *(this + 5353) < *(this + 5354); /*0x50179d*/
    ObjectClass *v12 = result; /*0x5017a2*/
    if ( !g_IKnowWhatImDoing && v5 != result ) /*0x5017ae*/
    {
  int v9; // [esp+68h] [ebp-1Ch] BYREF
      (*(void (__stdcall **)(_DWORD *, void *, int *))*this)(this, &unk_7F7CD0, &v9); /*0x5017c1*/
  int v8; // [esp+64h] [ebp-20h] BYREF
      (*(void (__stdcall **)(int, int *))(*(_DWORD *)v9 + 12))(v9, &v8); /*0x5017cf*/
  int v6; // [esp+5Ch] [ebp-28h] BYREF
      if ( (*(int (__stdcall **)(int, int, int *, _DWORD))(*(_DWORD *)v8 + 12))(v8, 1, &v6, 0) >= 0 ) /*0x5017e7*/
      {
        while ( 1 ) /*0x5017f7*/
        {
  _BYTE v11[16]; // [esp+74h] [ebp-10h] BYREF
          (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v6 + 12))(v6, v11); /*0x5017f9*/
          if ( !memcmp(v11, &dword_7E9550, 0x10u) ) /*0x501810*/
            break; /*0x501810*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x501817*/
          if ( (*(int (__stdcall **)(int, int, int *, _DWORD))(*(_DWORD *)v8 + 12))(v8, 1, &v6, 0) < 0 ) /*0x50182f*/
            goto LABEL_14; /*0x50182f*/
        }
  int v7; // [esp+60h] [ebp-24h] BYREF
        (*(void (__stdcall **)(int, int *))(*(_DWORD *)v6 + 28))(v6, &v7); /*0x50183b*/
  _DWORD v10[2]; // [esp+6Ch] [ebp-18h] BYREF
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

// 0x504790
namespace gamemd {
void UpdateHouseClassAnger(IUnknown * aP0, HouseClass * aP1, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  result = (int)aP0; /*0x504790*/
  int v5 = 0; /*0x504793*/
  int v6 = 0; /*0x50479c*/
  if ( *(int *)&aP0->__pad_5554[192] > 0 ) /*0x5047a2*/
  {
    do /*0x5047c8*/
    {
      int v7 = *(_DWORD *)(result + 22024); /*0x5047ac*/
      int v8 = *(_DWORD *)(v7 + 8 * v6); /*0x5047b2*/
      int v9 = v7 + 8 * v6; /*0x5047b5*/
      if ( v8 == a4 ) /*0x5047ba*/
        *(_DWORD *)(v9 + 4) += a3; /*0x5047bc*/
      ++v6; /*0x5047c5*/
    }
    while ( v6 < *(_DWORD *)(result + 22036) ); /*0x5047c8*/
  }
  int v13 = 0; /*0x5047d0*/
  if ( *(int *)(result + 22036) <= 0 ) /*0x5047d6*/
    goto LABEL_18; /*0x5047d6*/
  int * v10 = *(int **)(result + 22024); /*0x5047d8*/
  int v14 = *(_DWORD *)(result + 22036); /*0x5047de*/
  do /*0x504832*/
  {
    int v11 = *v10; /*0x5047e5*/
    if ( v10[1] > v5 && !*(_BYTE *)(v11 + 501) ) /*0x5047eb*/
    {
      if ( !v11 /*0x50481e*/
        || v11 != result
  int v12; // ecx
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

// 0x5004E0
namespace gamemd {
int House_GetTechLevel(int a1, int a2)
{
{
    int v4;
    if ( a2 < 0 )
    return 0;
    v4 = TechnoTypeClass::GetByTypeAndIndex(a1, a2);
    if ( a1 == 6 || a1 == 7 )
    return *(int *)(v4 + 3592);
    else
    return 0;
}
}
} // namespace gamemd

// 0x501AA0
namespace gamemd {
unsigned int * sub_501AA0(unsigned int * a1, int a2, int a3)
{
{
    *a1 = 0;
    return a1;
}
}
} // namespace gamemd

// 0x505F80
namespace gamemd {
int globalHelper_005F80(int a1, int * a2, int a3, int a4)
{
{
    int v4;
    __int64 v5;
    signed int v6;
    signed int v7;
    v4 = *(short *)a2 - *(short *)(a1 + 22352);
    v5 = *((short *)(a2) + 1) - *(short *)(a1 + 22354);
    v6 = (HIDWORD(v5) ^ v5) - HIDWORD(v5);
    v7 = abs32(v4);
    if ( v7 <= v6 )
    v7 = v6;
    return a3 + 1000 * v7;
}
}
} // namespace gamemd

// 0x505FD0
namespace gamemd {
int globalHelper_005FD0(int a1, int * a2, int a3, int a4)
{
{
    int v4;
    int v5;
    int v7;
    int v8;
    double v9;
    __int64 v10;
    int v12;
    v4 = *((short *)(a2) + 1);
    v5 = *(short *)a2;
    v7 = *(int *)(*(int *)(a1 + 90208) + 4 * (v5 + *(int *)(a1 + 22364) * (v4 - *(int *)(a1 + 22360)) - *(int *)(a1 + 22356)));
    v8 = 0;
    if ( a4 != -1 )
  {
    v12 = *(short *)(a1 + 22354) - v4;
    v9 = Math::CalcAngle((double)v12, (double)(v5 - *(short *)(a1 + 22352)));
    LOWORD(v12) = Math::RoundToInt((v9 - 1.570796326794897) * -10430.06004058427);
    v10 = 32 * a4 - (unsigned char)((((unsigned int)v12 >> 7) + 1) >> 1);
    v8 = (HIDWORD(v10) ^ v10) - HIDWORD(v10);
    if ( v8 >= 128 )
    v8 = 255 - v8;
  }
    return a3 + 1000 * (v8 + (v7 << 7));
}
}
} // namespace gamemd

// 0x506B70
namespace gamemd {
void nullsub_16()
{
  ;
}
} // namespace gamemd

// 0x506B80
namespace gamemd {
void nullsub_17()
{
  ;
}
} // namespace gamemd

// 0x5092F0
namespace gamemd {
int HouseClass::sub_5092F0(int a2)
{
{
    int result;
    int i;
    int v5;
    ObjectClass *v6;
    int v7;
    int v8[3];
    result = a2;
    this->radarVisibleTo[0] |= 1 << *(int *)(*(int *)(a2 + 52) + 184);
    if ( a2 == HouseClass_Player.field_0 )
  {
    for ( i = 0; i < *(int *)&HouseClass_Player[44860]; ++i )
    {
    v5 = *(int *)(*(int *)&HouseClass_Player[44848] + 4 * i);
    if ( v5 && !*(char *)(v5 + 129) && *(HouseClass **)(v5 + 540) == this )
      {
    v8[0] = *(int *)(v5 + 156);
    v8[1] = *(int *)(v5 + 160);
    v6 = *(ObjectClass **)v5;
    v8[2] = *(int *)(v5 + 164);
    v7 = (*(int (__thiscall **)(int))&v6->hasParachute)(v5);
    MapClass::RevealArea0( (int *)&DataGlobal_87C374[13428], (IUnknown *)v8, *(MouseClass **)(v7 + 1512), this, 0, 0, 0, 1, 1);
      }
    }
    return MapClass::MarkForRedraw(&DataGlobal_87C374[13428], 2);
  }
    return result;
}
}
} // namespace gamemd

// 0x5093C0
namespace gamemd {
int E4Recv_5093C0::sub_5093C0(int a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->M22036;
    result = 0;
    if ( v2 > 0 )
  {
    i = (int *)this->M22024;
    for ( ; *i != a2; i += 2 )
    {
    if ( ++result >= v2 )
    return result;
    }
    return UpdateHouseClassAnger((unsigned int)this, (int)i, -*(int *)(this->M22024 + 8 * result + 4), a2);
  }
    return result;
}
}
} // namespace gamemd

// 0x509CC0
namespace gamemd {
void nullsub_144(int a1)
{
  ;
}
} // namespace gamemd

// 0x50B920
namespace gamemd {
void sub_50B920(int a1, int a2, int a3)
{
{
    double v5;
    double v6;
    double v7;
    double v8;
    v5 = Math::Sqrt(*(double *)a1 * *(double *)(a1) + *(double *)a3 * *(double *)(a3) + *(double *)a2 * *(double *)a2);
    if ( v5 == 0.0 )
  {
    *(int *)a3 = 0;
    *(int *)(a3 + 4) = 1081073664;
    *(int *)a2 = 0;
    *(int *)(a2 + 4) = 1081073664;
    *(int *)a1 = 0;
    *(int *)(a1 + 4) = 1081073664;
  }
    else
  {
    v6 = *(double *)a1 * 240.0 / v5;
    *(double *)a1 = v6;
    if ( v6 > 255.0 )
    {
    *(int *)a1 = 0;
    *(int *)(a1 + 4) = 1081073664;
    }
    v7 = *(double *)a2 * 240.0 / v5;
    *(double *)a2 = v7;
    if ( v7 > 255.0 )
    {
    *(int *)a2 = 0;
    *(int *)(a2 + 4) = 1081073664;
    }
    v8 = *(double *)a3 * 240.0 / v5;
    *(double *)a3 = v8;
    if ( v8 > 255.0 )
    {
    *(int *)a3 = 0;
    *(int *)(a3 + 4) = 1081073664;
    }
  }
}
}
} // namespace gamemd

// 0x50C160
namespace gamemd {
double E4Recv_50C160::sub_50C160()
{
{
    return *(float *)(this->M52 + 328);
}
}
} // namespace gamemd

// 0x50DA40
namespace gamemd {
int E4Recv_50DA40::sub_50DA40(int a2)
{
{
    this->M21752 = a2;
    return a2;
}
}
} // namespace gamemd

// 0x50E3A0
namespace gamemd {
unsigned int * sub_50E3A0(unsigned int * a1, int * a2, short * a3, int a4)
{
{
    int v6;
    double v7;
    double v8;
    double v10;
    double v11;
    double v12;
    int v13;
    v6 = *((int*)(a2) + 2);
    v10 = (double)(*a3 - 0x3FFF) * -0.00009587672516830327;
    v11 = (double)a4;
    v12 = (double)*((int*)(a2) + 1);
    v7 = Math::SinCos(v10);
    v13 = Math::RoundToInt(v12 - v7 * v11);
    v8 = Math::ArcTan2(v10);
    *a1 = Math::RoundToInt(v8 * v11 + (double)*a2);
    *((int*)(a1) + 1) = v13;
    *((int*)(a1) + 2) = v6;
    return a1;
}
}
} // namespace gamemd

// 0x50FF40
namespace gamemd {
void nullsub_145()
{
  ;
}
} // namespace gamemd
