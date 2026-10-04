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
namespace gamemd {
void* DestructFoggedObjectClass(FoggedObjectClass * aP0)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D1650)
}
}
// 0x4D2370
namespace gamemd {
int sub_4D2370()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D2370)
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

  v2 = (int)((LPVOID)(*((unsigned int *)this + 413)));
  if ( v2 ) /*0x4db8af*/
    (*(void (**)(unsigned int))(*(unsigned int *)v2 + 4))(*((unsigned int *)this + 413)); /*0x4db8b4*/
  ppv = (LPVOID)((unsigned int)(0));
  InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)&g_CLSID_DriveLocomotion, 0, 7u); /*0x4db8cc*/
  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x4db8da*/
    WinAPI::Wrapper(InstanceCOM); /*0x4db8dd*/
  if ( !ppv ) /*0x4db8e8*/
    WinAPI::Wrapper(-2147467261); /*0x4db8ef*/
  (*(void (**)(LPVOID, TechnoClass *))(*(unsigned int *)ppv + 12))(ppv, (TechnoClass *)this); /*0x4db8fc*/
  v8 = 0; /*0x4db903*/
  if ( !ppv ) /*0x4db90d*/
    goto LABEL_13; /*0x4db90d*/
  v4 = ((StreamClass *)((StreamClass *)&v8))->Set((unsigned int *)(&ppv)); /*0x4db918*/
  if ( v4 < 0 && v4 != -2147467262 ) /*0x4db926*/
    WinAPI::Wrapper(v4); /*0x4db929*/
  if ( !v8 ) /*0x4db934*/
LABEL_13:
    WinAPI::Wrapper(-2147467261); /*0x4db93b*/
  (*(void (**)(int, int))(*(unsigned int *)v8 + 12))(v8, v2); /*0x4db949*/
  v5 = (LPVOID)*((unsigned int *)this + 413); /*0x4db94c*/
  result = (int)ppv; /*0x4db952*/
  if ( v5 != ppv ) /*0x4db958*/
  {
    *((unsigned int *)this + 413) = (unsigned int)(ppv); /*0x4db95c*/
    if ( result ) /*0x4db962*/
    {
      (*(void (**)(int))(*(unsigned int *)result + 4))(result); /*0x4db967*/
      result = (int)ppv; /*0x4db96a*/
    }
    if ( v5 ) /*0x4db970*/
    {
      (*(void (**)(LPVOID))(*(unsigned int *)v5 + 8))(v5); /*0x4db975*/
      result = (int)ppv; /*0x4db978*/
    }
  }
  if ( v8 ) /*0x4db983*/
  {
    (*(void (**)(int))(*(unsigned int *)v8 + 8))(v8); /*0x4db988*/
    result = (int)ppv; /*0x4db98b*/
  }
  if ( result ) /*0x4db991*/
    result = (*(int (**)(int))(*(unsigned int *)result + 8))(result); /*0x4db996*/
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

  v0 = Math::Sin((dbl_8B3CD8 - dbl_8B3D00)); /*0x4d0642*/
  result = Math::RoundToInt(v0 * dbl_8B3CF8 * 0.5); /*0x4d0656*/
  dword_8B3D68 = result; /*0x4d065b*/
  return result; /*0x4d0660*/
}
} // namespace gamemd

// 0x4D0670
namespace gamemd {
void sub_4D0670()
{
  dbl_8B3D08 = Math::ArcTan(((double)dword_8B3D68 * 0.00390625)); /*0x4d0687*/
}
} // namespace gamemd

// 0x4D06A0
namespace gamemd {
void sub_4D06A0()
{
  dbl_8B3D38 = Math::ArcTan(((double)(2 * dword_8B3D68) / dbl_8B3CF8)); /*0x4d06c2*/
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
  dword_8B3D10 = (int)&DynamicVectorClass_FoggedObjectClass___vftable; /*0x4d076d*/
  dword_8B3D24 = 10; /*0x4d0777*/
  g_FootClassConfig = 0; /*0x4d0781*/
  return atexit((void (__cdecl *)(void))sub_4D0790); /*0x4d078c*/
}
} // namespace gamemd

// 0x4D0790
namespace gamemd {
void sub_4D0790()
{
  if ( (byte_8B3CD5 & 1) == 0 ) /*0x4d079a*/
  {
    dword_8B3D10 = (int)&VectorClass_FoggedObjectClass___vftable; /*0x4d079e*/
    byte_8B3CD5 |= 1u; /*0x4d07b1*/
    if ( dword_8B3D14 ) /*0x4d07b7*/
    {
      if ( byte_8B3D1D ) /*0x4d07c1*/
      {
        RA2_OPDEL(dword_8B3D14); /*0x4d07c4*/
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
  return atexit((void (__cdecl *)(void))sub_4D0820); /*0x4d0816*/
}
} // namespace gamemd

// 0x4D0820
namespace gamemd {
void sub_4D0820()
{
  if ( (byte_8B3CD4 & 1) == 0 ) /*0x4d082a*/
  {
    byte_8B3CD4 |= 1u; /*0x4d0836*/
    RA2_OPDEL(g_MissionPool); /*0x4d083c*/
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

  v0 = Math::Sin((dbl_8B3D70 - dbl_8B3D98)); /*0x4d3032*/
  result = Math::RoundToInt(v0 * dbl_8B3D90 * 0.5); /*0x4d3046*/
  dword_8B3E00 = result; /*0x4d304b*/
  return result; /*0x4d3050*/
}
} // namespace gamemd

// 0x4D3060
namespace gamemd {
void sub_4D3060()
{
  dbl_8B3DA0 = Math::ArcTan(((double)dword_8B3E00 * 0.00390625)); /*0x4d3077*/
}
} // namespace gamemd

// 0x4D3090
namespace gamemd {
void sub_4D3090()
{
  dbl_8B3DB8 = Math::ArcTan(((double)(2 * dword_8B3E00) / dbl_8B3D90)); /*0x4d30b2*/
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
  return atexit((void (__cdecl *)(void))sub_4D31A0); /*0x4d319c*/
}
} // namespace gamemd

// 0x4D31A0
namespace gamemd {
void sub_4D31A0()
{
  FootClass_Array = (int)&VectorClass_FootClass___vftable; /*0x4d31a8*/
  if ( dword_8B3DC4 && byte_8B3DCD ) /*0x4d31bc*/
  {
    RA2_OPDEL(dword_8B3DC4); /*0x4d31bf*/
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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D4FC0)
}
} // namespace gamemd

// 0x4DA020
namespace gamemd {
unsigned int * globalHelper_0DA020(unsigned int *a0, AbstractClass * aP1)
{
  *a0 = *(unsigned int *)aP1;
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
    LOWORD(v4) = *v3 / 256; /*0x4df2aa*/
    HIWORD(v4) = v3[1] / 256; /*0x4df2c3*/
    *(unsigned int *)v4 = v4; /*0x4df2d1*/
    this->M1480 = (unsigned int)(((CellCoord *)((CellCoord *)&dword_87F7E8))->To_CellObj(v4)); /*0x4df2da*/
  }
  else
  {
    this->M1480 = 0; /*0x4df2ef*/
  }
  this->M1484 = 0; /*0x4df2e0*/

}
} // namespace gamemd
