// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_4517D0_e4.hpp"
#include "e4/classes/E4Recv_4528A0_e4.hpp"
#include "e4/classes/E4Recv_457A10_e4.hpp"
#include "e4/classes/E4Recv_45DD20_e4.hpp"
#include "e4/classes/E4Recv_45DD50_e4.hpp"
#include "e4/classes/E4Recv_45E8B0_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/E4Recv_4B69E0_e4.hpp"
#include "e4/classes/JumpjetLocomotion_e4.hpp"
#include "e4/classes/TimerClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/E4Recv_4964D0_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/E4Recv_431BC0_e4.hpp"
#include "e4/classes/XSurface_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"
#include "e4/classes/Matrix3x4_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"

// 0x451400
namespace gamemd {
char UpdateBuildingActiveAnim(int a1, int edx0, void * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x451400)
}
}
// 0x452000
namespace gamemd {
int sub_452000(unsigned int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x452000)
}
}
// 0x452D40
namespace gamemd {
int sub_452D40()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x452D40)
}
}
// 0x456980
namespace gamemd {
void* DrawTechnoDeployCircle(IUnknown * aP0, IUnknown * aP1, int a1, int a4, int a5, int a6, float a7, char a8, char a9)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x456980)
}
}
// 0x456FB0
namespace gamemd {
BuildingTypeClass * * sub_456FB0(unsigned int * a1, int a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x456FB0)
}
}
// 0x459F40
namespace gamemd {
int ObjectType_IsBuildingType(int a1)
{
  if ( a1 )
    return (*(int (**)(int))(*(unsigned int *)a1 + 44))(a1) == 6 ? a1 : 0;
  else
    return 0; /*0x459f47*/
}
}
// 0x45C300
namespace gamemd {
int Map_InitCellOffsets()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x45C300)
}
} // namespace gamemd

// 0x45DD20
namespace gamemd {
void * E4Recv_45DD20::sub_45DD20()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x45DD20)
}
}
// 0x45DD50
namespace gamemd {
int E4Recv_45DD50::sub_45DD50()
{

  int v2; // edi
  char **v3; // esi

  v2 = 0; /*0x45dd55*/
  v3 = (char **)&stru_81926C.Name[7]; /*0x45dd57*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x45dd6a*/
  {
    v3 += 2; /*0x45dd6c*/
    ++v2; /*0x45dd6f*/
    if ( (int)v3 >= (int)stru_81926C.Type ) /*0x45dd76*/
      return 0; /*0x45dd7d*/
  }
  return stru_81926C.Name[2 * v2 + 8]; /*0x45dd78*/

}
}
// 0x4503E0
namespace gamemd {
void nullsub_101()
{
  ; /*0x4503e0*/
}
} // namespace gamemd

// 0x4517D0
namespace gamemd {
int E4Recv_4517D0::sub_4517D0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4517D0)
}
} // namespace gamemd

// 0x451EE0
namespace gamemd {
void globalHelper_051EE0(int a1, int a2, IUnknown * aP4)
{
  int v4; // ecx
  int v5; // ebp
  int v6; // esi
  unsigned int *v7; // ebx
  unsigned char *v8; // eax

  v4 = (int)(aP4); /*0x451ee3*/
  if ( *(unsigned char *)(a1 + 1766) != (unsigned char)aP4 ) /*0x451eed*/
  {
    v5 = 0; /*0x451ef2*/
    *(unsigned char *)(a1 + 1766) = (unsigned char)(aP4); /*0x451ef4*/
    v6 = 0; /*0x451efa*/
    v7 = (unsigned int *)(a1 + 1372); /*0x451efc*/
    do /*0x451f4f*/
    {
      if ( *v7 ) /*0x451f02*/
      {
        if ( (unsigned char)v4 ) /*0x451f09*/
        {
          v8 = (unsigned char *)(*(unsigned int *)(a1 + 1312) + v6 + 3932); /*0x451f11*/
        }
        else
        {
          a2 = *(unsigned int *)(a1 + 1312); /*0x451f1a*/
          v8 = (unsigned char *)(a2 + v6 + 3916); /*0x451f20*/
        }
        if ( v8 ) /*0x451f29*/
        {
          if ( *v8 ) /*0x451f2b*/
          {
            BuildingClass::PlayAnim((unsigned int *)a1, a2, v8, v5, v4, 0, 0); /*0x451f39*/
            v4 = (int)(aP4); /*0x451f3e*/
          }
        }
      }
      v6 += 68; /*0x451f42*/
      ++v5; /*0x451f45*/
      ++v7; /*0x451f46*/
    }
    while ( v6 < 1428 ); /*0x451f4f*/
  }
}
} // namespace gamemd

// 0x4528A0
namespace gamemd {
bool E4Recv_4528A0::sub_4528A0(int a2)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4528A0)
}
} // namespace gamemd

// 0x454CE0
namespace gamemd {
void ObjectClass::nullsub_5()
{

  ; /*0x454ce0*/

}
} // namespace gamemd

// 0x455DD0
namespace gamemd {
unsigned int * sub_455DD0(int a1, unsigned int * a2)
{
  int v2; // esi
  unsigned int *v3; // edi
  int v4; // eax
  unsigned int *v5; // esi
  double v6; // st7
  int v7; // eax
  int v9; // [esp+24h] [ebp-24h]
  int v11; // [esp+2Ch] [ebp-1Ch]
  unsigned int *v12; // [esp+30h] [ebp-18h]
  int v14; // [esp+38h] [ebp-10h]
  int v15; // [esp+3Ch] [ebp-Ch]
  int v16; // [esp+40h] [ebp-8h]
  int v17; // [esp+44h] [ebp-4h]

  v2 = a1; /*0x455ddc*/
  v3 = a2; /*0x455de7*/
  v12 = 0; /*0x455df5*/
  v9 = 0x7FFFFFFF; /*0x455df9*/
  if ( (byte_89C828 & 1) == 0 ) /*0x455e01*/
  {
    byte_89C828 |= 1u; /*0x455e11*/
    dword_89C7F0 = Math::RoundToInt(dbl_89C820 * 20.0); /*0x455e1c*/
  }
  v4 = 0; /*0x455e27*/
  v14 = *(unsigned int *)(v2 + 144); /*0x455e2b*/
  v11 = 0; /*0x455e2f*/
  if ( v14 <= 0 ) /*0x455e33*/
    return 0; /*0x455f00*/
  while ( 1 ) /*0x455e47*/
  {
    v5 = *(unsigned int **)(*(unsigned int *)(v2 + 132) + 4 * v4); /*0x455e47*/
    if ( (*(int (**)(unsigned int *, int, unsigned int *))(*v3 + 632))(v3, 15, v5) ) /*0x455e4f*/
    {
      v15 = v5[39] - v3[39]; /*0x455e7f*/
      v16 = v5[40] - v3[40]; /*0x455e88*/
      v17 = v5[41] - v3[41]; /*0x455e92*/
      v6 = Math::Sqrt((double)v15 * (double)v15 + (double)v17 * (double)v17 + (double)v16 * (double)v16); /*0x455eb7*/
      v7 = Math::RoundToInt(v6); /*0x455ebf*/
      if ( v7 < v9 && v7 < dword_89C7F0 ) /*0x455ed0*/
      {
        v12 = v5; /*0x455ed2*/
        v9 = v7; /*0x455ed6*/
      }
      v3 = a2; /*0x455eda*/
    }
    v4 = ++v11; /*0x455ee6*/
    if ( v11 >= v14 ) /*0x455eed*/
      break; /*0x455eed*/
    v2 = a1; /*0x455e3b*/
  }
  return v12; /*0x455ef7*/
}
} // namespace gamemd

// 0x456970
namespace gamemd {
void nullsub_103()
{
  ; /*0x456970*/
}
} // namespace gamemd

// 0x457A10
namespace gamemd {
char E4Recv_457A10::sub_457A10()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x457A10)
}
} // namespace gamemd

// 0x45AFA0
namespace gamemd {
void sub_45AFA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x45afac*/
  dbl_89C8B8 = Math::Sqrt(v0 + v0); /*0x45afbe*/
}
} // namespace gamemd

// 0x45AFD0
namespace gamemd {
void sub_45AFD0()
{
  dbl_89D360 = dbl_89C8B8 / 60.0; /*0x45afdc*/
}
} // namespace gamemd

// 0x45AFF0
namespace gamemd {
void sub_45AFF0()
{
  dbl_89C8F8 = 1.0 / dbl_89D360; /*0x45affc*/
}
} // namespace gamemd

// 0x45B010
namespace gamemd {
void sub_45B010()
{
  dbl_89C8F0 = 0.0174532925199433 * 45.0; /*0x45b01c*/
}
} // namespace gamemd

// 0x45B030
namespace gamemd {
void sub_45B030()
{
  dbl_89C8C0 = 0.0174532925199433 * 60.0; /*0x45b03c*/
}
} // namespace gamemd

// 0x45B050
namespace gamemd {
void sub_45B050()
{
  dbl_89C898 = 0.0174532925199433 * 90.0; /*0x45b05c*/
}
} // namespace gamemd

// 0x45B070
namespace gamemd {
long long sub_45B070()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89C898 - dbl_89C8C0); /*0x45b082*/
  result = Math::RoundToInt(v0 * dbl_89C8B8 * 0.5); /*0x45b096*/
  dword_89DDB8 = result; /*0x45b09b*/
  return result; /*0x45b0a0*/
}
} // namespace gamemd

// 0x45B0B0
namespace gamemd {
void sub_45B0B0()
{
  dbl_89C8C8 = Math::ArcTan((double)dword_89DDB8 * 0.00390625); /*0x45b0c7*/
}
} // namespace gamemd

// 0x45B0E0
namespace gamemd {
void sub_45B0E0()
{
  dbl_89C8E0 = Math::ArcTan((double)(2 * dword_89DDB8) / dbl_89C8B8); /*0x45b102*/
}
} // namespace gamemd

// 0x45B110
namespace gamemd {
long long sub_45B110()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89DDB8) + 0.5); /*0x45b12b*/
  dword_89D35C = result; /*0x45b130*/
  return result; /*0x45b136*/
}
} // namespace gamemd

// 0x45B140
namespace gamemd {
int sub_45B140()
{
  word_89C8B0 = 0; /*0x45b142*/
  word_89C8B2 = 0; /*0x45b148*/
  return 0; /*0x45b14e*/
}
} // namespace gamemd

// 0x45B150
namespace gamemd {
int sub_45B150()
{
  dword_89C8D0 = 0; /*0x45b152*/
  dword_89C8D4 = 0; /*0x45b157*/
  dword_89C8D8 = 0; /*0x45b15c*/
  return 0; /*0x45b161*/
}
} // namespace gamemd

// 0x45B170
namespace gamemd {
int sub_45B170()
{
  dword_89D358 = 0; /*0x45b175*/
  dword_89D350 = 128; /*0x45b17f*/
  dword_89D354 = 128; /*0x45b184*/
  return 128; /*0x45b189*/
}
} // namespace gamemd

// 0x45B190
namespace gamemd {
int sub_45B190()
{
  dword_89C8A0 = 0; /*0x45b192*/
  dword_89C8A4 = 0; /*0x45b197*/
  dword_89C8A8 = 0; /*0x45b19c*/
  dword_89C8AC = 0; /*0x45b1a1*/
  return 0; /*0x45b1a6*/
}
} // namespace gamemd

// 0x45B1B0
namespace gamemd {
int j_MapData_InitHeights()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x45B1B0)
}
} // namespace gamemd

// 0x45C2F0
namespace gamemd {
int j_Map_InitCellOffsets()
{
  return InitCellOffsetsMap();
}
} // namespace gamemd

// 0x45E750
namespace gamemd {
void nullsub_6()
{
  ; /*0x45e750*/
}
} // namespace gamemd

// 0x45E8B0
namespace gamemd {
int E4Recv_45E8B0::sub_45E8B0(int a2, int a3, int a4, int a5)
{

  int result; // eax
  char *v6; // edx

  result = 3 * a2 + 963; /*0x45e8bc*/
  v6 = (char *)this + 12 * a2; /*0x45e8c3*/
  *((unsigned int *)v6 + 961) = a3; /*0x45e8c6*/
  *((unsigned int *)v6 + 962) = a4; /*0x45e8d0*/
  *((unsigned int *)this + result) = a5; /*0x45e8da*/
  return result; /*0x45e8dd*/

}
} // namespace gamemd

// 0x45E8F0
namespace gamemd {
char sub_45E8F0()
{
  int SubFile; // eax
  int v1; // esi
  int v2; // edx
  int v3; // edi
  int i; // ecx
  unsigned int v6[4]; // [esp+4h] [ebp-10h] BYREF

  IDA_LOBYTE(SubFile) = (unsigned char)dword_89DDBC; /*0x45e8f0*/
  if ( !dword_89DDBC ) /*0x45e8fb*/
  {
    dword_89DDBC = (unsigned int)((void *)SearchMIXFile((char *)(aBuildngzSha), 0)); /*0x45e90d*/
    Building::GetFoundationSize(v6, 0); /*0x45e917*/
    SubFile = MixFileClass::GetSubFile((char **)dword_89DDBC, 0); /*0x45e924*/
    v1 = *((int16_t *)dword_89DDBC + 1); /*0x45e92f*/
    if ( *((int16_t *)dword_89DDBC + 2) > 0 ) /*0x45e939*/
    {
      v2 = SubFile; /*0x45e93c*/
      v3 = *((int16_t *)dword_89DDBC + 2); /*0x45e93e*/
      do /*0x45e95a*/
      {
        for ( i = 0; i < v1; ++i ) /*0x45e944*/
        {
          IDA_LOBYTE(SubFile) = *(unsigned char *)(v2 + i); /*0x45e946*/
          if ( (unsigned char)SubFile ) /*0x45e94b*/
          {
            IDA_LOBYTE(SubFile) = SubFile - 65; /*0x45e94d*/
            *(unsigned char *)(v2 + i) = SubFile; /*0x45e94f*/
          }
        }
        v2 += v1; /*0x45e957*/
        --v3; /*0x45e959*/
      }
      while ( v3 ); /*0x45e95a*/
    }
  }
  return SubFile; /*0x45e95d*/
}
} // namespace gamemd

// 0x45EC80
namespace gamemd {
void nullsub_107()
{
  ; /*0x45ec80*/
}
} // namespace gamemd
