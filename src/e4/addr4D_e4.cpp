// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_4D4FC0_e4.hpp"
#include "e4/classes/E4Recv_4DB8A0_e4.hpp"
#include "e4/classes/E4Recv_4DF280_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/FoggedObjectClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/E4Recv_4C95D0_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/E4Recv_4C3DD0_e4.hpp"
#include "e4/classes/E4Recv_4C2790_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/E4Recv_4E0A00_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"

// 0x4D1650
namespace gamemd {  // G42.18 ns repair
void* DestructFoggedObjectClass(FoggedObjectClass * aP0)
{
  int v2; // eax
  int v3; // kr00_4
  int v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // eax
  signed int v8; // ecx
  size_t i; // eax
  unsigned int *v10; // eax
  Cell *v11; // eax
  unsigned int *v12; // eax
  unsigned int *v13; // ecx
  int v14; // edx
  void *v15; // eax
  int16_t v17[4]; // [esp+10h] [ebp-Ch] BYREF
  int16_t v18[2]; // [esp+18h] [ebp-4h] BYREF

  *(unsigned int *)aP0 = (unsigned int)(&vt_FoggedObjectClass); /*0x4d1663*/
  /* X11: vtable install elided (implicit via FoggedObjectClass virtuals 0x4d1669) */
  /* X11: vtable install elided (implicit via FoggedObjectClass virtuals 0x4d1670) */
  /* X11: vtable install elided (implicit via FoggedObjectClass virtuals 0x4d1677) */
  *(unsigned int *)v17 = (unsigned int)(aP0); /*0x4d1684*/
  v2 = (*(int (**)(int *, int16_t *))(dword_8B3D10 + 16))(&dword_8B3D10, v17); /*0x4d1688*/
  if ( v2 != -1 && v2 < g_FootClassConfig && v2 < --g_FootClassConfig ) /*0x4d16a3*/
  {
    do /*0x4d16bb*/
    {
      ++v2; /*0x4d16ab*/
      *((unsigned int *)dword_8B3D14 + v2 - 1) = *((unsigned int *)dword_8B3D14 + v2); /*0x4d16af*/
    }
    while ( v2 < g_FootClassConfig ); /*0x4d16bb*/
  }
  v3 = aP0->u32_38; /*0x4d16d7*/
  v17[0] = aP0->u32_34 / 256; /*0x4d16df*/
  v17[1] = v3 / 256; /*0x4d16e4*/
  *(unsigned int *)v18 = *(unsigned int *)v17; /*0x4d16f3*/
  v4 = g_MissionState; /*0x4d170e*/
  v5 = 74 * (v17[1] - ((v17[0] + v17[1]) << 9) - v17[0]) - aP0->vtable4 + 0x7FFFFFFF; /*0x4d1714*/
  if ( g_MissionState ) /*0x4d171c*/
  {
    if ( !byte_8B3CCC ) /*0x4d1728*/
    {
      qsort((void *)(g_MissionPool), g_MissionState, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)globalHelper_0D2ED0); /*0x4d1739*/
      v4 = g_MissionState; /*0x4d173e*/
      dword_8B3CD0 = 0; /*0x4d1747*/
      byte_8B3CCC = 1; /*0x4d174d*/
    }
    *(unsigned int *)v17 = v5; /*0x4d175f*/
    v6 = sub_4D2F00((int)g_MissionPool, v4, (int *)v17); /*0x4d1763*/
    if ( v6 ) /*0x4d176a*/
    {
      v7 = (v6 - (int)g_MissionPool) >> 3; /*0x4d1772*/
      if ( v7 != -1 ) /*0x4d1778*/
      {
        v8 = v7 + 1; /*0x4d177a*/
        for ( i = g_MissionState; v8 < (int)g_MissionState; i = g_MissionState ) /*0x4d1784*/
        {
          v10 = (unsigned int *)((char *)g_MissionPool + 8 * v8++);
          *(v10 - 2) = *v10; /*0x4d1792*/
          *(v10 - 1) = v10[1]; /*0x4d1798*/
        }
        g_MissionState = i - 1; /*0x4d17ad*/
        *((unsigned int *)g_MissionPool + 2 * g_MissionState) = 0; /*0x4d17b2*/
        *((unsigned int *)g_MissionPool + 2 * g_MissionState + 1) = 0; /*0x4d17c2*/
        dword_8B3CD0 = 0; /*0x4d17c6*/
      }
    }
  }
  if ( aP0->vtable4 == (void *)(6) ) /*0x4d17d0*/
  {
    v11 = (Cell *)((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj(v18); /*0x4d17dc*/
    v12 = ((Cell *)(v11))->IsBridge(); /*0x4d17e3*/
    if ( v12 ) /*0x4d17ea*/
    {
      *((unsigned char *)v12 + 1767) = 0; /*0x4d17ec*/
      v13 = v12 + 343; /*0x4d17f2*/
      v14 = 21; /*0x4d17f8*/
      do /*0x4d180d*/
      {
        if ( *v13 ) /*0x4d17fd*/
          *(unsigned char *)(*v13 + 409) = 0; /*0x4d1803*/
        ++v13; /*0x4d1809*/
        --v14; /*0x4d180c*/
      }
      while ( v14 ); /*0x4d180d*/
    }
  }
  if ( g_TacticalClass_Instance ) /*0x4d1817*/
    Cell::CreateCrater( /*0x4d184b*/
      aP0->Count - *(unsigned int *)&((unsigned int *)(g_TacticalClass_Instance))[44],
      aP0->u32_44 - *(unsigned int *)&((unsigned int *)(g_TacticalClass_Instance))[45],
      aP0->IsInitialized,
      aP0->IsAllocated,
      0);
  v15 = (void *)((unsigned int)(aP0->nextArrayIndex));
  aP0->u32_5C = (unsigned int)(&vt_VectorClass); /*0x4d1855*/
  if ( v15 && aP0->u32_69 ) /*0x4d1860*/
  {
    operator delete((void *)(v15)); /*0x4d1866*/
    aP0->nextArrayIndex = 0; /*0x4d186e*/
  }
  aP0->u32_69 = 0; /*0x4d1873*/
  aP0->u32_64 = 0; /*0x4d1876*/
  return ((AbstractClass *)((AbstractClass *)aP0))->DTOR(); /*0x4d187e*/
}
}  // G42.18 ns repair
// 0x4D2370
namespace gamemd {
int sub_4D2370()
{
  int result; // eax
  int v2; // esi
  int v3; // edi
  unsigned short *v4; // esi
  int v5; // edi
  unsigned int *v6; // eax
  unsigned int *v7; // edi
  CellClass *v8; // eax
  int v9; // [esp+8h] [ebp-1Ch]
  int i; // [esp+Ch] [ebp-18h]
  int v11; // [esp+10h] [ebp-14h] BYREF
  unsigned char v12[4]; // [esp+14h] [ebp-10h] BYREF
  unsigned int v13[3]; // [esp+18h] [ebp-Ch] BYREF

  result = g_FootClassConfig; /*0x4d2373*/
  v2 = 0; /*0x4d2379*/
  for ( i = 0; v2 < g_FootClassConfig; i = v2 ) /*0x4d2381*/
  {
    v3 = *((unsigned int *)dword_8B3D14 + v2); /*0x4d2399*/
    if ( *(unsigned int *)(v3 + 48) == 6 /*0x4d23ae*/
      && (*(int (**)(unsigned int, unsigned int))(***(unsigned int ***)(v3 + 96) + 144))(**(unsigned int **)(v3 + 96), 0) )
    {
      if ( *(unsigned int *)(v3 + 48) == 6 ) /*0x4d23bf*/
        v4 = (unsigned short *)(*(int (**)(unsigned int, unsigned int))(***(unsigned int ***)(v3 + 96) + 144))( /*0x4d23d0*/
                        **(unsigned int **)(v3 + 96),
                        0);
      else
        v4 = 0; /*0x4d23d4*/
      v5 = *(unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v3 + 96))(v3, v12); /*0x4d23e2*/
      v11 = v5; /*0x4d23e4*/
      while ( *v4 != 0x7FFF || v4[1] != 0x7FFF ) /*0x4d23f9*/
      {
        (*((unsigned short *)&(v9))) = v5 + *v4; /*0x4d2408*/
        (*(((unsigned short *)&(v9)) + 1)) = (*(((unsigned short *)&(v5)) + 1)) + v4[1]; /*0x4d240d*/
        v11 = v9; /*0x4d241c*/
        v6 = ((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj((int16_t *)&v11); /*0x4d2420*/
        v4 += 2; /*0x4d2436*/
        v6[80] |= 0x400000u; /*0x4d2439*/
      }
      v2 = i; /*0x4d2478*/
    }
    else
    {
      v7 = (unsigned int *)(v3 + 52); /*0x4d243d*/
      v13[0] = *v7; /*0x4d2442*/
      v13[1] = v7[1]; /*0x4d244e*/
      v13[2] = v7[2]; /*0x4d2455*/
      v8 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v13); /*0x4d245e*/
      v8->flags[0] |= 0x400000u; /*0x4d2474*/
    }
    result = g_FootClassConfig; /*0x4d247c*/
    ++v2; /*0x4d2481*/
  }
  return result; /*0x4d2491*/
}
}
// 0x4D2ED0
namespace gamemd {
int globalHelper_0D2ED0(unsigned int * a1, unsigned int * a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x4d2ee0*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
// 0x4D2F00
namespace gamemd {
int sub_4D2F00(int a1, int a2, int * a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = a2; /*0x4d2f05*/
  if ( a2 <= 0 ) /*0x4d2f07*/
    return 0; /*0x4d2f39*/
  v4 = *a3; /*0x4d2f0d*/
  while ( 1 ) /*0x4d2f16*/
  {
    v5 = *(unsigned int *)(a1 + 8 * (v3 / 2)); /*0x4d2f16*/
    if ( v5 <= v4 ) /*0x4d2f1e*/
      break; /*0x4d2f1e*/
    v3 /= 2; /*0x4d2f20*/
  LABEL_7:
    if ( v3 <= 0 ) /*0x4d2f32*/
      return 0; /*0x4d2f32*/
  }
  if ( v5 != v4 ) /*0x4d2f24*/
  {
    a1 += 8 * (v3 / 2) + 8; /*0x4d2f26*/
    v3 += -1 - v3 / 2; /*0x4d2f2e*/
    goto LABEL_7; /*0x4d2f2e*/
  }
  return a1 + 8 * (v3 / 2); /*0x4d2f34*/
}
}
// 0x4DB8A0
namespace gamemd {
int E4Recv_4DB8A0::sub_4DB8A0()
{

  int v2; // ebx
  int InstanceCOM; // eax
  int v4; // eax
  LPVOID v5; // esi
  int result; // eax
  LPVOID ppv; // [esp+20h] [ebp-8h] BYREF
  int v8; // [esp+24h] [ebp-4h] BYREF

  v2 = this->M1652; /*0x4db8a7*/
  if ( v2 ) /*0x4db8af*/
    (*(void (**)(unsigned int))(*(unsigned int *)v2 + 4))(this->M1652); /*0x4db8b4*/
  ppv = 0; /*0x4db8c4*/
  InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)&g_CLSID_DriveLocomotion, 0, 7u); /*0x4db8cc*/
  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x4db8da*/
    WinAPI::Wrapper(InstanceCOM); /*0x4db8dd*/
  if ( !ppv ) /*0x4db8e8*/
    WinAPI::Wrapper(-2147467261); /*0x4db8ef*/
  (*(void (**)(LPVOID, TechnoClass *))(*&ppv->u32_30))(ppv, this); /*0x4db8fc*/
  v8 = 0; /*0x4db903*/
  if ( !ppv ) /*0x4db90d*/
    goto LABEL_13; /*0x4db90d*/
  v4 = StreamClass::Set((StreamClass *)&v8, &ppv); /*0x4db918*/
  if ( v4 < 0 && v4 != -2147467262 ) /*0x4db926*/
    WinAPI::Wrapper(v4); /*0x4db929*/
  if ( !v8 ) /*0x4db934*/
LABEL_13:
    WinAPI::Wrapper(-2147467261); /*0x4db93b*/
  (*(void (**)(int, int))(*(unsigned int *)v8 + 12))(v8, v2); /*0x4db949*/
  v5 = (LPVOID)this->M1652; /*0x4db94c*/
  result = (int)ppv; /*0x4db952*/
  if ( v5 != ppv ) /*0x4db958*/
  {
    this->M1652 = ppv; /*0x4db95c*/
    if ( result ) /*0x4db962*/
    {
      (*(void (**)(int))(*&result->u32_10))(result); /*0x4db967*/
      result = (int)ppv; /*0x4db96a*/
    }
    if ( v5 ) /*0x4db970*/
    {
      (*(void (**)(LPVOID))(*&v5->u32_20))(v5); /*0x4db975*/
      result = (int)ppv; /*0x4db978*/
    }
  }
  if ( v8 ) /*0x4db983*/
  {
    (*(void (**)(int))(*(unsigned int *)v8 + 8))(v8); /*0x4db988*/
    result = (int)ppv; /*0x4db98b*/
  }
  if ( result ) /*0x4db991*/
    result = (*(int (**)(int))(*&result->u32_20))(result); /*0x4db996*/
  if ( v2 ) /*0x4db99b*/
    return (*(int (**)(int))(*(unsigned int *)v2 + 8))(v2); /*0x4db9a0*/
  return result; /*0x4db9a3*/

}
}
// 0x4D0540
namespace gamemd {
int sub_4D0540()
{
  dword_8B3CE0 = 0; /*0x4d0542*/
  dword_8B3CE4 = 0; /*0x4d0547*/
  dword_8B3CE8 = 0; /*0x4d054c*/
  dword_8B3CEC = 0; /*0x4d0551*/
  return 0; /*0x4d0556*/
}
} // namespace gamemd

// 0x4D0560
namespace gamemd {
void sub_4D0560()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4d056c*/
  dbl_8B3CF8 = Math::Sqrt(v0 + v0); /*0x4d057e*/
}
} // namespace gamemd

// 0x4D0590
namespace gamemd {
void sub_4D0590()
{
  dbl_8B3D60 = dbl_8B3CF8 / 60.0; /*0x4d059c*/
}
} // namespace gamemd

// 0x4D05B0
namespace gamemd {
void sub_4D05B0()
{
  dbl_8B3D48 = 1.0 / dbl_8B3D60; /*0x4d05bc*/
}
} // namespace gamemd

// 0x4D05D0
namespace gamemd {
void sub_4D05D0()
{
  dbl_8B3D40 = 0.0174532925199433 * 45.0; /*0x4d05dc*/
}
} // namespace gamemd

// 0x4D05F0
namespace gamemd {
void sub_4D05F0()
{
  dbl_8B3D00 = 0.0174532925199433 * 60.0; /*0x4d05fc*/
}
} // namespace gamemd

// 0x4D0610
namespace gamemd {
void sub_4D0610()
{
  dbl_8B3CD8 = 0.0174532925199433 * 90.0; /*0x4d061c*/
}
} // namespace gamemd

// 0x4D0630
namespace gamemd {
long long sub_4D0630()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8B3CD8 - dbl_8B3D00); /*0x4d0642*/
  result = Math::RoundToInt(v0 * dbl_8B3CF8 * 0.5); /*0x4d0656*/
  dword_8B3D68 = result; /*0x4d065b*/
  return result; /*0x4d0660*/
}
} // namespace gamemd

// 0x4D0670
namespace gamemd {
void sub_4D0670()
{
  dbl_8B3D08 = Math::ArcTan((double)dword_8B3D68 * 0.00390625); /*0x4d0687*/
}
} // namespace gamemd

// 0x4D06A0
namespace gamemd {
void sub_4D06A0()
{
  dbl_8B3D38 = Math::ArcTan((double)(2 * dword_8B3D68) / dbl_8B3CF8); /*0x4d06c2*/
}
} // namespace gamemd

// 0x4D06D0
namespace gamemd {
long long sub_4D06D0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3D68) + 0.5); /*0x4d06eb*/
  dword_8B3D5C = result; /*0x4d06f0*/
  return result; /*0x4d06f6*/
}
} // namespace gamemd

// 0x4D0700
namespace gamemd {
int sub_4D0700()
{
  word_8B3CF0 = 0; /*0x4d0702*/
  word_8B3CF2 = 0; /*0x4d0708*/
  return 0; /*0x4d070e*/
}
} // namespace gamemd

// 0x4D0710
namespace gamemd {
int sub_4D0710()
{
  dword_8B3D28 = 0; /*0x4d0712*/
  dword_8B3D2C = 0; /*0x4d0717*/
  dword_8B3D30 = 0; /*0x4d071c*/
  return 0; /*0x4d0721*/
}
} // namespace gamemd

// 0x4D0730
namespace gamemd {
int sub_4D0730()
{
  dword_8B3D58 = 0; /*0x4d0735*/
  dword_8B3D50 = 128; /*0x4d073f*/
  dword_8B3D54 = 128; /*0x4d0744*/
  return 128; /*0x4d0749*/
}
} // namespace gamemd

// 0x4D0750
namespace gamemd {
int sub_4D0750()
{
  dword_8B3D14 = 0; /*0x4d0757*/
  dword_8B3D18 = 0; /*0x4d075c*/
  byte_8B3D1C = 1; /*0x4d0761*/
  byte_8B3D1D = 0; /*0x4d0768*/
  dword_8B3D10 = (int)&vt_DynamicVectorClass; /*0x4d076d*/
  dword_8B3D24 = 10; /*0x4d0777*/
  g_FootClassConfig = 0; /*0x4d0781*/
  return atexit(sub_4D0790); /*0x4d078c*/
}
} // namespace gamemd

// 0x4D0790
namespace gamemd {
void sub_4D0790()
{
  if ( (byte_8B3CD5 & 1) == 0 ) /*0x4d079a*/
  {
    dword_8B3D10 = (int)&vt_VectorClass; /*0x4d079e*/
    byte_8B3CD5 |= 1u; /*0x4d07b1*/
    if ( dword_8B3D14 ) /*0x4d07b7*/
    {
      if ( byte_8B3D1D ) /*0x4d07c1*/
      {
        operator delete((void *)(dword_8B3D14)); /*0x4d07c4*/
        dword_8B3D14 = 0; /*0x4d07cc*/
      }
    }
    byte_8B3D1D = 0; /*0x4d07d6*/
    dword_8B3D18 = 0; /*0x4d07dd*/
  }
}
} // namespace gamemd

// 0x4D07F0
namespace gamemd {
int sub_4D07F0()
{
  g_MissionPool = 0; /*0x4d07f7*/
  g_MissionState = 0; /*0x4d07fc*/
  dword_8B3CC8 = 0; /*0x4d0801*/
  byte_8B3CCC = 0; /*0x4d0806*/
  dword_8B3CD0 = 0; /*0x4d080b*/
  return atexit(sub_4D0820); /*0x4d0816*/
}
} // namespace gamemd

// 0x4D0820
namespace gamemd {
void sub_4D0820()
{
  if ( (byte_8B3CD4 & 1) == 0 ) /*0x4d082a*/
  {
    byte_8B3CD4 |= 1u; /*0x4d0836*/
    operator delete((void *)(g_MissionPool)); /*0x4d083c*/
    g_MissionPool = 0; /*0x4d0846*/
    g_MissionState = 0; /*0x4d084b*/
    dword_8B3CC8 = 0; /*0x4d0850*/
    byte_8B3CCC = 0; /*0x4d0855*/
    dword_8B3CD0 = 0; /*0x4d085a*/
  }
}
} // namespace gamemd

// 0x4D2F50
namespace gamemd {
void sub_4D2F50()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4d2f5c*/
  dbl_8B3D90 = Math::Sqrt(v0 + v0); /*0x4d2f6e*/
}
} // namespace gamemd

// 0x4D2F80
namespace gamemd {
void sub_4D2F80()
{
  dbl_8B3DF8 = dbl_8B3D90 / 60.0; /*0x4d2f8c*/
}
} // namespace gamemd

// 0x4D2FA0
namespace gamemd {
void sub_4D2FA0()
{
  dbl_8B3DE0 = 1.0 / dbl_8B3DF8; /*0x4d2fac*/
}
} // namespace gamemd

// 0x4D2FC0
namespace gamemd {
void sub_4D2FC0()
{
  dbl_8B3DD8 = 0.0174532925199433 * 45.0; /*0x4d2fcc*/
}
} // namespace gamemd

// 0x4D2FE0
namespace gamemd {
void sub_4D2FE0()
{
  dbl_8B3D98 = 0.0174532925199433 * 60.0; /*0x4d2fec*/
}
} // namespace gamemd

// 0x4D3000
namespace gamemd {
void sub_4D3000()
{
  dbl_8B3D70 = 0.0174532925199433 * 90.0; /*0x4d300c*/
}
} // namespace gamemd

// 0x4D3020
namespace gamemd {
long long sub_4D3020()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8B3D70 - dbl_8B3D98); /*0x4d3032*/
  result = Math::RoundToInt(v0 * dbl_8B3D90 * 0.5); /*0x4d3046*/
  dword_8B3E00 = result; /*0x4d304b*/
  return result; /*0x4d3050*/
}
} // namespace gamemd

// 0x4D3060
namespace gamemd {
void sub_4D3060()
{
  dbl_8B3DA0 = Math::ArcTan((double)dword_8B3E00 * 0.00390625); /*0x4d3077*/
}
} // namespace gamemd

// 0x4D3090
namespace gamemd {
void sub_4D3090()
{
  dbl_8B3DB8 = Math::ArcTan((double)(2 * dword_8B3E00) / dbl_8B3D90); /*0x4d30b2*/
}
} // namespace gamemd

// 0x4D30C0
namespace gamemd {
long long sub_4D30C0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3E00) + 0.5); /*0x4d30db*/
  dword_8B3DF4 = result; /*0x4d30e0*/
  return result; /*0x4d30e6*/
}
} // namespace gamemd

// 0x4D30F0
namespace gamemd {
int sub_4D30F0()
{
  g_FootClass_Pool = 0; /*0x4d30f2*/
  return 0; /*0x4d30fe*/
}
} // namespace gamemd

// 0x4D3100
namespace gamemd {
int sub_4D3100()
{
  dword_8B3DA8 = 0; /*0x4d3102*/
  dword_8B3DAC = 0; /*0x4d3107*/
  dword_8B3DB0 = 0; /*0x4d310c*/
  return 0; /*0x4d3111*/
}
} // namespace gamemd

// 0x4D3120
namespace gamemd {
int sub_4D3120()
{
  dword_8B3DF0 = 0; /*0x4d3125*/
  dword_8B3DE8 = 128; /*0x4d312f*/
  dword_8B3DEC = 128; /*0x4d3134*/
  return 128; /*0x4d3139*/
}
} // namespace gamemd

// 0x4D3140
namespace gamemd {
int sub_4D3140()
{
  dword_8B3D78 = 0; /*0x4d3142*/
  dword_8B3D7C = 0; /*0x4d3147*/
  dword_8B3D80 = 0; /*0x4d314c*/
  dword_8B3D84 = 0; /*0x4d3151*/
  return 0; /*0x4d3156*/
}
} // namespace gamemd

// 0x4D3160
namespace gamemd {
int sub_4D3160()
{
  dword_8B3DC4 = 0; /*0x4d3167*/
  dword_8B3DC8 = 0; /*0x4d316c*/
  byte_8B3DCC = 1; /*0x4d3171*/
  byte_8B3DCD = 0; /*0x4d3178*/
  FootClass_Array = (int)&off_7E8C28; /*0x4d317d*/
  dword_8B3DD4 = 10; /*0x4d3187*/
  dword_8B3DD0 = 0; /*0x4d3191*/
  return atexit(sub_4D31A0); /*0x4d319c*/
}
} // namespace gamemd

// 0x4D31A0
namespace gamemd {
void sub_4D31A0()
{
  FootClass_Array = (int)&vt_VectorClass; /*0x4d31a8*/
  if ( dword_8B3DC4 && byte_8B3DCD ) /*0x4d31bc*/
  {
    operator delete((void *)(dword_8B3DC4)); /*0x4d31bf*/
    dword_8B3DC4 = 0; /*0x4d31c7*/
  }
  byte_8B3DCD = 0; /*0x4d31cd*/
  dword_8B3DC8 = 0; /*0x4d31d3*/
}
} // namespace gamemd

// 0x4D4FC0
namespace gamemd {
unsigned int * E4Recv_4D4FC0::sub_4D4FC0()
{

  int v2; // ebx
  unsigned short *v3; // eax
  Cell *v4; // eax
  unsigned int *v5; // eax
  unsigned int *v6; // esi
  int v7; // ebp
  int v9; // [esp+10h] [ebp-Ch]
  __int16 v10[2]; // [esp+14h] [ebp-8h] BYREF
  char v11[4]; // [esp+18h] [ebp-4h] BYREF

  v2 = 0; /*0x4d4fc9*/
  while ( 1 ) /*0x4d4fd4*/
  {
    v3 = (unsigned short *)(*((int (**)(ObjectClass *, char *))this->AbstractClass + 110))(this, v11); /*0x4d4fd4*/
    LOWORD(v9) = LOWORD(g_DDrawSurfaceManager.scenario[(v2 & 7) + 82]) + *v3; /*0x4d4ff8*/
    HIWORD(v9) = v3[1] + HIWORD(g_DDrawSurfaceManager.scenario[(v2 & 7) + 82]); /*0x4d4ffe*/
    *(unsigned int *)v10 = v9; /*0x4d500c*/
    v4 = (Cell *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v10); /*0x4d5010*/
    v5 = Cell::IsBridge(v4); /*0x4d5017*/
    v6 = v5; /*0x4d501c*/
    if ( v5 ) /*0x4d5020*/
    {
      if ( *(unsigned char *)(v5[328] + 5493) ) /*0x4d5028*/
      {
        v7 = (*(int (**)(unsigned int *))(*v5 + 60))(v5); /*0x4d5039*/
        if ( v7 == (*((int (**)(ObjectClass *))this->AbstractClass + 15))(this) ) /*0x4d5044*/
          break; /*0x4d5044*/
      }
    }
    if ( ++v2 >= 8 ) /*0x4d504a*/
      return 0; /*0x4d5059*/
  }
  return v6; /*0x4d5050*/

}
} // namespace gamemd

// 0x4DA020
namespace gamemd {
unsigned int * globalHelper_0DA020(unsigned int *a0, AbstractClass * aP1)
{
  *a0 = (unsigned int)(*aP1);
  return a0; /*0x4da02c*/
}
} // namespace gamemd

// 0x4DF280
namespace gamemd {
void E4Recv_4DF280::sub_4DF280()
{
  int v2; // ecx
  unsigned int *v3; // eax
  int v4; // [esp+4h] [ebp-14h]
  int16_t v4[2]; // [esp+8h] [ebp-10h] BYREF
  unsigned char v6[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = this->M1484; /*0x4df286*/
  if ( v2 ) /*0x4df28e*/
  {
    v3 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v2 + 72))(v2, v6); /*0x4df297*/
    (*((unsigned short *)&(v4))) = *v3 / 256; /*0x4df2aa*/
    (*(((unsigned short *)&(v4)) + 1)) = v3[1] / 256; /*0x4df2c3*/
    *(unsigned int *)v4 = v4; /*0x4df2d1*/
    this->M1480 = ((CellCoord *)((CellCoord *)&dword_87F7E8))->To_CellObj(v4); /*0x4df2da*/
  }
  else
  {
    this->M1480 = 0; /*0x4df2ef*/
  }
  this->M1484 = 0; /*0x4df2e0*/
}
} // namespace gamemd
