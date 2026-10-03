// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/FileClass_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7436E0_e4.hpp"
#include "e4/classes/E4Recv_7490C0_e4.hpp"
#include "e4/classes/E4Recv_74BBA0_e4.hpp"
#include "e4/classes/E4Recv_74BBF0_e4.hpp"
#include "e4/classes/E4Recv_74BCA0_e4.hpp"
#include "e4/classes/E4Recv_74BDC0_e4.hpp"
#include "e4/classes/E4Recv_74BF40_e4.hpp"
#include "e4/classes/E4Recv_74E1C0_e4.hpp"
#include "e4/classes/E4Recv_74EA70_e4.hpp"
#include "e4/classes/E4Recv_74F63A_e4.hpp"
#include "e4/classes/E4Recv_74F730_e4.hpp"
#include "e4/classes/E4Recv_74FAE0_e4.hpp"
#include "e4/classes/__e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/UnitTypeClass_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/E4Recv_7741C0_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/E4Recv_731130_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/BufferIOFile_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/E4Recv_5B3910_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/BitArray_e4.hpp"
#include "e4/classes/VoxelAnimTypeClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"

// 0x743270
namespace gamemd {
Coord * * PlaceScenarioUnits(void * a1, void * a2, void * aUnits)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x743270)
}
}
// 0x746EC0
namespace gamemd {
int sub_746EC0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00746EC0.json)
}
}
// 0x7483B0
namespace gamemd {
int CopySHPFrameToSurface(int a1, unsigned short * a2, int * a3, int a4, int a5, unsigned int a6)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007483B0.json)
}
}
// 0x748AF0
namespace gamemd {
unsigned int sub_748AF0(int a1, unsigned short * a2, int * a3, unsigned int a4, int a5, int a6)
{
  int *v6; // edx
  int v7; // ebp
  int v8; // ecx
  unsigned int result; // eax
  int v11; // ecx
  unsigned short *v12; // eax
  int v13; // ebx
  int *v14; // esi
  int v15; // edi
  uint16_t *v16; // eax
  int v17; // esi
  uint16_t v18; // cx
  uint16_t v19; // bx
  uint16_t *v20; // eax
  uint16_t v21; // cx
  uint16_t v22; // bx
  unsigned int v23; // [esp+8h] [ebp-4h]
  unsigned short *v24; // [esp+18h] [ebp+Ch]
  int *v25; // [esp+20h] [ebp+14h]
  int *v26; // [esp+24h] [ebp+18h]

  v6 = a3; /*0x748afa*/
  v7 = 2 * a6; /*0x748afe*/
  v8 = 2 * a6 * a5; /*0x748b02*/
  v26 = a3; /*0x748b09*/
  result = (unsigned int)&a3[v8]; /*0x748b0d*/
  v23 = result; /*0x748b16*/
  v25 = &a3[2 * a4]; /*0x748b1d*/
  if ( (unsigned int)a3 < result ) /*0x748b21*/
  {
    while ( 1 ) /*0x748b37*/
    {
      result = *a2 & 0x1FFF; /*0x748b37*/
      v11 = *a2 & 0xE000; /*0x748b3c*/
      v24 = a2 + 1; /*0x748b42*/
      if ( (*a2 & 0xE000) == 0 ) /*0x748b48*/
        break; /*0x748b48*/
      if ( v11 == 0x2000 ) /*0x748b50*/
      {
        v12 = (unsigned short *)(a1 + 32 * (*a2 & 0x1FFF)); /*0x748b72*/
        v13 = 2; /*0x748b74*/
        do /*0x748b9b*/
        {
          v14 = v6; /*0x748b79*/
          v15 = 4; /*0x748b7b*/
          do /*0x748b92*/
          {
            if ( (IDA_HIBYTE(*v12) & 0x80u) == 0 ) /*0x748b86*/
              *(unsigned short *)v14 = *v12; /*0x748b88*/
            v14 = (int *)((char *)v14 + 2); /*0x748b8b*/
            ++v12; /*0x748b8e*/
            --v15; /*0x748b91*/
          }
          while ( v15 ); /*0x748b92*/
          v12 += 4; /*0x748b94*/
          --v13; /*0x748b97*/
          v6 = (int *)((char *)v6 + 2 * v7); /*0x748b98*/
        }
        while ( v13 ); /*0x748b9b*/
        goto LABEL_17; /*0x748b9b*/
      }
      if ( v11 == 0x4000 ) /*0x748b58*/
        v6 += 2; /*0x748b5e*/
  LABEL_18:
      if ( v6 == v25 ) /*0x748bfa*/
      {
        v6 = &v26[v7]; /*0x748c07*/
        result = a4; /*0x748c09*/
        v26 = v6; /*0x748c0d*/
        v25 = &v6[2 * a4]; /*0x748c14*/
      }
      if ( (unsigned int)v6 >= v23 ) /*0x748c1c*/
        return result; /*0x748c1c*/
      a2 = v24; /*0x748b2b*/
    }
    v16 = (uint16_t *)(a1 + 32 * (*a2 & 0x1FFF)); /*0x748bab*/
    v17 = 2; /*0x748bb1*/
    do /*0x748be4*/
    {
      v18 = v16[1]; /*0x748bba*/
      v19 = *v16; /*0x748bbe*/
      v20 = v16 + 2; /*0x748bc6*/
      *v6 = v19 | (v18 << 16); /*0x748bc9*/
      v21 = v20[1]; /*0x748bcd*/
      v22 = *v20; /*0x748bd3*/
      v16 = v20 + 6; /*0x748bd6*/
      v6[1] = v22 | (v21 << 16); /*0x748bde*/
      v6 = (int *)((char *)v6 + 2 * v7); /*0x748be1*/
      --v17; /*0x748be3*/
    }
    while ( v17 ); /*0x748be4*/
  LABEL_17:
    result = 4 * v7; /*0x748be6*/
    v6 = (int *)((char *)v6 + 8 - 4 * v7); /*0x748bf4*/
    goto LABEL_18; /*0x748bf4*/
  }
  return result; /*0x748c24*/
}
}
// 0x74BB20
namespace gamemd {
void * globalHelper_04BB20(ObjectClass * Source, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x74BB20)
}
}
// 0x74BBF0
namespace gamemd {
unsigned int * sub_74BBF0(int a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074BBF0.json)
}
}
// 0x74BCA0
namespace gamemd {
unsigned int * sub_74BCA0(int a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074BCA0.json)
}
}
// 0x74BDC0
namespace gamemd {
int sub_74BDC0(unsigned int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074BDC0.json)
}
}
// 0x74D760
namespace gamemd {
int CleanupVeinholeSystem()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074D760.json)
}
}
// 0x74DE90
namespace gamemd {
int InitializeVeinholeSystem(char a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074DE90.json)
}
}
// 0x74F3C0
namespace gamemd {
char AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074F3C0.json)
}
}
// 0x74F400
namespace gamemd {
char Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074F400.json)
}
}
// 0x74F4B0
namespace gamemd {
wchar_t * ddtor()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074F4B0.json)
}
} // namespace gamemd

// 0x74F4E0
namespace gamemd {
int Read(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074F4E0.json)
}
}
// 0x74F520
namespace gamemd {
unsigned int Write(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074F520.json)
}
}
// 0x74FAE0
namespace gamemd {
AbstractClass * * sub_74FAE0()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074FAE0.json)
}
}
// 0x74FF30
namespace gamemd {
void ObjectClass::unknown_libname_35()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074FF30.json)
}
}
// 0x746EE0
namespace gamemd {
void sub_746EE0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00746EE0.json)
}
} // namespace gamemd

// 0x746F10
namespace gamemd {
void sub_746F10()
{
  dbl_B1D130 = dbl_B1D0E0 / 60.0; /*0x746f1c*/
}
} // namespace gamemd

// 0x746F30
namespace gamemd {
void sub_746F30()
{
  dbl_B1D118 = 1.0 / dbl_B1D130; /*0x746f3c*/
}
} // namespace gamemd

// 0x746F50
namespace gamemd {
void sub_746F50()
{
  dbl_B1D110 = 0.0174532925199433 * 45.0; /*0x746f5c*/
}
} // namespace gamemd

// 0x746F70
namespace gamemd {
void sub_746F70()
{
  dbl_B1D0E8 = 0.0174532925199433 * 60.0; /*0x746f7c*/
}
} // namespace gamemd

// 0x746F90
namespace gamemd {
void sub_746F90()
{
  dbl_B1D0C0 = 0.0174532925199433 * 90.0; /*0x746f9c*/
}
} // namespace gamemd

// 0x746FB0
namespace gamemd {
long long sub_746FB0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B1D0C0 - dbl_B1D0E8); /*0x746fc2*/
  result = Math::RoundToInt(v0 * dbl_B1D0E0 * 0.5); /*0x746fd6*/
  dword_B1D138 = result; /*0x746fdb*/
  return result; /*0x746fe0*/
}
} // namespace gamemd

// 0x746FF0
namespace gamemd {
void sub_746FF0()
{
  dbl_B1D0F0 = Math::ArcTan((double)dword_B1D138 * 0.00390625); /*0x747007*/
}
} // namespace gamemd

// 0x747020
namespace gamemd {
void sub_747020()
{
  dbl_B1D108 = Math::ArcTan((double)(2 * dword_B1D138) / dbl_B1D0E0); /*0x747042*/
}
} // namespace gamemd

// 0x747050
namespace gamemd {
long long sub_747050()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1D138) + 0.5); /*0x74706b*/
  dword_B1D12C = result; /*0x747070*/
  return result; /*0x747076*/
}
} // namespace gamemd

// 0x747080
namespace gamemd {
int sub_747080()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00747080.json)
}
} // namespace gamemd

// 0x747090
namespace gamemd {
int sub_747090()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00747090.json)
}
} // namespace gamemd

// 0x7470B0
namespace gamemd {
int sub_7470B0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007470B0.json)
}
} // namespace gamemd

// 0x7473C0
namespace gamemd {
int UnitTypeClass::j__do_always_noconv_codecvt_base_std__MBE_NXZ_19_0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7473C0)
}
} // namespace gamemd

// 0x7473E0
namespace gamemd {
int sub_7473E0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007473E0.json)
}
} // namespace gamemd

// 0x747600
namespace gamemd {
unsigned int * sub_747600(unsigned int * a1, int a2, unsigned int * a3)
{
  *a1 = *a3; /*0x74760a*/
  a1[1] = a3[1]; /*0x74760f*/
  return a1; /*0x747612*/
}
} // namespace gamemd

// 0x748380
namespace gamemd {
int sub_748380(unsigned short * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00748380.json)
}
} // namespace gamemd

// 0x749010
namespace gamemd {
void ObjectClass::nullsub_143()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x749010)
}
} // namespace gamemd

// 0x7490A0
namespace gamemd {
int Array_Sum(int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007490A0.json)
}
} // namespace gamemd

// 0x7490C0
namespace gamemd {
Iostream_init * E4Recv_7490C0::__0Iostream_init_QAE_XZ_7()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7490C0)
}
} // namespace gamemd

// 0x7491A0
namespace gamemd {
void sub_7491A0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007491A0.json)
}
} // namespace gamemd

// 0x7491D0
namespace gamemd {
void sub_7491D0()
{
  dbl_B1D1C0 = dbl_B1D170 / 60.0; /*0x7491dc*/
}
} // namespace gamemd

// 0x7491F0
namespace gamemd {
void sub_7491F0()
{
  dbl_B1D1A8 = 1.0 / dbl_B1D1C0; /*0x7491fc*/
}
} // namespace gamemd

// 0x749210
namespace gamemd {
void sub_749210()
{
  dbl_B1D1A0 = 0.0174532925199433 * 45.0; /*0x74921c*/
}
} // namespace gamemd

// 0x749230
namespace gamemd {
void sub_749230()
{
  dbl_B1D178 = 0.0174532925199433 * 60.0; /*0x74923c*/
}
} // namespace gamemd

// 0x749250
namespace gamemd {
void sub_749250()
{
  dbl_B1D150 = 0.0174532925199433 * 90.0; /*0x74925c*/
}
} // namespace gamemd

// 0x749270
namespace gamemd {
long long sub_749270()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B1D150 - dbl_B1D178); /*0x749282*/
  result = Math::RoundToInt(v0 * dbl_B1D170 * 0.5); /*0x749296*/
  dword_B1D1C8 = result; /*0x74929b*/
  return result; /*0x7492a0*/
}
} // namespace gamemd

// 0x7492E0
namespace gamemd {
void sub_7492E0()
{
  dbl_B1D198 = Math::ArcTan((double)(2 * dword_B1D1C8) / dbl_B1D170); /*0x749302*/
}
} // namespace gamemd

// 0x749310
namespace gamemd {
long long sub_749310()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1D1C8) + 0.5); /*0x74932b*/
  dword_B1D1BC = result; /*0x749330*/
  return result; /*0x749336*/
}
} // namespace gamemd

// 0x749340
namespace gamemd {
int sub_749340()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00749340.json)
}
} // namespace gamemd

// 0x749350
namespace gamemd {
int sub_749350()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00749350.json)
}
} // namespace gamemd

// 0x749370
namespace gamemd {
int sub_749370()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00749370.json)
}
} // namespace gamemd

// 0x749390
namespace gamemd {
int sub_749390()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00749390.json)
}
} // namespace gamemd

// 0x74AB70
namespace gamemd {
void sub_74AB70()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074AB70.json)
}
} // namespace gamemd

// 0x74ABA0
namespace gamemd {
void sub_74ABA0()
{
  dbl_B1D240 = dbl_B1D1F0 / 60.0; /*0x74abac*/
}
} // namespace gamemd

// 0x74ABC0
namespace gamemd {
void sub_74ABC0()
{
  dbl_B1D228 = 1.0 / dbl_B1D240; /*0x74abcc*/
}
} // namespace gamemd

// 0x74ABE0
namespace gamemd {
void sub_74ABE0()
{
  dbl_B1D220 = 0.0174532925199433 * 45.0; /*0x74abec*/
}
} // namespace gamemd

// 0x74AC00
namespace gamemd {
void sub_74AC00()
{
  dbl_B1D1F8 = 0.0174532925199433 * 60.0; /*0x74ac0c*/
}
} // namespace gamemd

// 0x74AC20
namespace gamemd {
void sub_74AC20()
{
  dbl_B1D1D0 = 0.0174532925199433 * 90.0; /*0x74ac2c*/
}
} // namespace gamemd

// 0x74AC40
namespace gamemd {
long long sub_74AC40()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B1D1D0 - dbl_B1D1F8); /*0x74ac52*/
  result = Math::RoundToInt(v0 * dbl_B1D1F0 * 0.5); /*0x74ac66*/
  dword_B1D248 = result; /*0x74ac6b*/
  return result; /*0x74ac70*/
}
} // namespace gamemd

// 0x74AC80
namespace gamemd {
void sub_74AC80()
{
  dbl_B1D200 = Math::ArcTan((double)dword_B1D248 * 0.00390625); /*0x74ac97*/
}
} // namespace gamemd

// 0x74ACB0
namespace gamemd {
void sub_74ACB0()
{
  dbl_B1D218 = Math::ArcTan((double)(2 * dword_B1D248) / dbl_B1D1F0); /*0x74acd2*/
}
} // namespace gamemd

// 0x74ACE0
namespace gamemd {
long long sub_74ACE0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1D248) + 0.5); /*0x74acfb*/
  dword_B1D23C = result; /*0x74ad00*/
  return result; /*0x74ad06*/
}
} // namespace gamemd

// 0x74AD10
namespace gamemd {
int sub_74AD10()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074AD10.json)
}
} // namespace gamemd

// 0x74AD20
namespace gamemd {
int sub_74AD20()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074AD20.json)
}
} // namespace gamemd

// 0x74AD40
namespace gamemd {
int sub_74AD40()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074AD40.json)
}
} // namespace gamemd

// 0x74AD60
namespace gamemd {
int sub_74AD60()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074AD60.json)
}
} // namespace gamemd

// 0x74BBA0
namespace gamemd {
char * sub_74BBA0(int a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074BBA0.json)
}
} // namespace gamemd

// 0x74BF40
namespace gamemd {
void sub_74BF40(unsigned int a2)
{
    (void)a2;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074BF40.json)
}
} // namespace gamemd

// 0x74C170
namespace gamemd {
int sub_74C170()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074C170.json)
}
} // namespace gamemd

// 0x74C190
namespace gamemd {
void sub_74C190()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074C190.json)
}
} // namespace gamemd

// 0x74C1C0
namespace gamemd {
void sub_74C1C0()
{
  dbl_B1D2E0 = dbl_B1D278 / 60.0; /*0x74c1cc*/
}
} // namespace gamemd

// 0x74C1E0
namespace gamemd {
void sub_74C1E0()
{
  dbl_B1D2C8 = 1.0 / dbl_B1D2E0; /*0x74c1ec*/
}
} // namespace gamemd

// 0x74C200
namespace gamemd {
void sub_74C200()
{
  dbl_B1D2C0 = 0.0174532925199433 * 45.0; /*0x74c20c*/
}
} // namespace gamemd

// 0x74C220
namespace gamemd {
void sub_74C220()
{
  dbl_B1D280 = 0.0174532925199433 * 60.0; /*0x74c22c*/
}
} // namespace gamemd

// 0x74C240
namespace gamemd {
void sub_74C240()
{
  dbl_B1D258 = 0.0174532925199433 * 90.0; /*0x74c24c*/
}
} // namespace gamemd

// 0x74C260
namespace gamemd {
long long sub_74C260()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B1D258 - dbl_B1D280); /*0x74c272*/
  result = Math::RoundToInt(v0 * dbl_B1D278 * 0.5); /*0x74c286*/
  dword_B1D2E8 = result; /*0x74c28b*/
  return result; /*0x74c290*/
}
} // namespace gamemd

// 0x74C2A0
namespace gamemd {
void sub_74C2A0()
{
  dbl_B1D288 = Math::ArcTan((double)dword_B1D2E8 * 0.00390625); /*0x74c2b7*/
}
} // namespace gamemd

// 0x74C2D0
namespace gamemd {
void sub_74C2D0()
{
  dbl_B1D2B8 = Math::ArcTan((double)(2 * dword_B1D2E8) / dbl_B1D278); /*0x74c2f2*/
}
} // namespace gamemd

// 0x74C300
namespace gamemd {
long long sub_74C300()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1D2E8) + 0.5); /*0x74c31b*/
  dword_B1D2DC = result; /*0x74c320*/
  return result; /*0x74c326*/
}
} // namespace gamemd

// 0x74C330
namespace gamemd {
int sub_74C330()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074C330.json)
}
} // namespace gamemd

// 0x74C340
namespace gamemd {
int sub_74C340()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074C340.json)
}
} // namespace gamemd

// 0x74C360
namespace gamemd {
int sub_74C360()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074C360.json)
}
} // namespace gamemd

// 0x74C380
namespace gamemd {
int sub_74C380()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074C380.json)
}
} // namespace gamemd

// 0x74C3C0
namespace gamemd {
void sub_74C3C0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074C3C0.json)
}
} // namespace gamemd

// 0x74F3B0
namespace gamemd {
int Seek(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0074F3B0.json)
}
}
// 0x74F63A
namespace gamemd {
void E4Recv_74F63A::__Release__NonReentrantLock_details_Concurrency__QAEXXZ_0()
{

  *(unsigned int *)this = 0; /*0x74f63a*/

}
} // namespace gamemd

// 0x74F650
namespace gamemd {
VectorClass_flat * QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074F650.json)
}
} // namespace gamemd

// 0x74F730
namespace gamemd {
unsigned int * sub_74F730()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074F730.json)
}
} // namespace gamemd

// 0x74FDC0
namespace gamemd {
char * sub_74FDC0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x74FDC0)
}
} // namespace gamemd

// 0x74FF40
namespace gamemd {
void ObjectClass::nullsub_69()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x74FF40)
}
} // namespace gamemd
