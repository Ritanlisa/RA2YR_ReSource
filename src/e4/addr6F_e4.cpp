// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/Random_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6F03F0_e4.hpp"
#include "e4/classes/E4Recv_6FD800_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/TeamTypeClass_28_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/E4Recv_6E0080_e4.hpp"
#include "e4/classes/E4Recv_6E3380_e4.hpp"
#include "e4/classes/E4Recv_6E37F0_e4.hpp"
#include "e4/classes/E4Recv_6EFC70_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Super_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/E4Recv_6E0850_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/E4Recv_6E0270_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/E4Recv_6F2780_e4.hpp"
#include "e4/classes/IsometricTileTypeClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/TriggerClass_e4.hpp"

// 0x6F0AB0
namespace gamemd {
int AISelectTeamHouseClass(IUnknown * aP0, int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F0AB0)
}
}
// 0x6F8960
namespace gamemd {
AbstractClass * * SelectTechnoClassAreaTarget(IUnknown * aP0, IUnknown * aP1, IUnknown * a2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP3a, IUnknown * aP6, int * a7, int a9, void * a1, void * a3, void * a4, void * a5, void * a6, void * a8, void * a10)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F8960)
}
}
// 0x6F03F0
namespace gamemd {
char E4Recv_6F03F0::sub_6F03F0()
{

  int *v1; // esi

  v1 = (int *)(&this->customSound_controller)[1]; /*0x6f03f2*/
  if ( !v1 ) /*0x6f03f9*/
    return 0; /*0x6f0423*/
  while ( *(int *)((*(int (**)(int *))(*v1 + 132))(v1) + 1668) > 0 && v1[191] <= 0 ) /*0x6f0417*/
  {
    v1 = (int *)v1[374]; /*0x6f0419*/
    if ( !v1 ) /*0x6f0421*/
      return 0; /*0x6f0421*/
  }
  return 1; /*0x6f0425*/

}
} // namespace gamemd

// 0x6F0470
namespace gamemd {
void sub_6F0470()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6f047c*/
  dbl_B0E9D0 = Math::Sqrt(v0 + v0); /*0x6f048e*/
}
} // namespace gamemd

// 0x6F04A0
namespace gamemd {
void sub_6F04A0()
{
  dbl_B0EA20 = dbl_B0E9D0 / 60.0; /*0x6f04ac*/
}
} // namespace gamemd

// 0x6F04C0
namespace gamemd {
void sub_6F04C0()
{
  dbl_B0EA08 = 1.0 / dbl_B0EA20; /*0x6f04cc*/
}
} // namespace gamemd

// 0x6F04E0
namespace gamemd {
void sub_6F04E0()
{
  dbl_B0EA00 = 0.0174532925199433 * 45.0; /*0x6f04ec*/
}
} // namespace gamemd

// 0x6F0500
namespace gamemd {
void sub_6F0500()
{
  dbl_B0E9D8 = 0.0174532925199433 * 60.0; /*0x6f050c*/
}
} // namespace gamemd

// 0x6F0520
namespace gamemd {
void sub_6F0520()
{
  dbl_B0E9B0 = 0.0174532925199433 * 90.0; /*0x6f052c*/
}
} // namespace gamemd

// 0x6F0540
namespace gamemd {
long long sub_6F0540()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin((dbl_B0E9B0 - dbl_B0E9D8)); /*0x6f0552*/
  result = Math::RoundToInt(v0 * dbl_B0E9D0 * 0.5); /*0x6f0566*/
  dword_B0EA28 = result; /*0x6f056b*/
  return result; /*0x6f0570*/
}
} // namespace gamemd

// 0x6F0580
namespace gamemd {
void sub_6F0580()
{
  dbl_B0E9E0 = Math::ArcTan(((double)dword_B0EA28 * 0.00390625)); /*0x6f0597*/
}
} // namespace gamemd

// 0x6F05B0
namespace gamemd {
void sub_6F05B0()
{
  dbl_B0E9F8 = Math::ArcTan(((double)(2 * dword_B0EA28) / dbl_B0E9D0)); /*0x6f05d2*/
}
} // namespace gamemd

// 0x6F05E0
namespace gamemd {
long long sub_6F05E0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0EA28) + 0.5); /*0x6f05fb*/
  dword_B0EA1C = result; /*0x6f0600*/
  return result; /*0x6f0606*/
}
} // namespace gamemd

// 0x6F0610
namespace gamemd {
int sub_6F0610()
{
  dword_B0E9C8 = 0; /*0x6f0612*/
  return 0; /*0x6f061e*/
}
} // namespace gamemd

// 0x6F0620
namespace gamemd {
int sub_6F0620()
{
  dword_B0E9E8 = 0; /*0x6f0622*/
  dword_B0E9EC = 0; /*0x6f0627*/
  dword_B0E9F0 = 0; /*0x6f062c*/
  return 0; /*0x6f0631*/
}
} // namespace gamemd

// 0x6F0640
namespace gamemd {
int sub_6F0640()
{
  dword_B0EA18 = 0; /*0x6f0645*/
  dword_B0EA10 = 128; /*0x6f064f*/
  dword_B0EA14 = 128; /*0x6f0654*/
  return 128; /*0x6f0659*/
}
} // namespace gamemd

// 0x6F0660
namespace gamemd {
int sub_6F0660()
{
  dword_B0E9B8 = 0; /*0x6f0662*/
  dword_B0E9BC = 0; /*0x6f0667*/
  dword_B0E9C0 = 0; /*0x6f066c*/
  dword_B0E9C4 = 0; /*0x6f0671*/
  return 0; /*0x6f0676*/
}
} // namespace gamemd

// 0x6F25D0
namespace gamemd {
void nullsub_240()
{
  ; /*0x6f25d0*/
}
} // namespace gamemd

// 0x6F28A0
namespace gamemd {
void sub_6F28A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6f28ac*/
  dbl_B0EA58 = Math::Sqrt(v0 + v0); /*0x6f28be*/
}
} // namespace gamemd

// 0x6F28D0
namespace gamemd {
void sub_6F28D0()
{
  dbl_B0EB28 = dbl_B0EA58 / 60.0; /*0x6f28dc*/
}
} // namespace gamemd

// 0x6F28F0
namespace gamemd {
void sub_6F28F0()
{
  dbl_B0EB10 = 1.0 / dbl_B0EB28; /*0x6f28fc*/
}
} // namespace gamemd

// 0x6F2910
namespace gamemd {
void sub_6F2910()
{
  dbl_B0EB08 = 0.0174532925199433 * 45.0; /*0x6f291c*/
}
} // namespace gamemd

// 0x6F2930
namespace gamemd {
void sub_6F2930()
{
  dbl_B0EA60 = 0.0174532925199433 * 60.0; /*0x6f293c*/
}
} // namespace gamemd

// 0x6F2950
namespace gamemd {
void sub_6F2950()
{
  dbl_B0EA30 = 0.0174532925199433 * 90.0; /*0x6f295c*/
}
} // namespace gamemd

// 0x6F2970
namespace gamemd {
long long sub_6F2970()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin((dbl_B0EA30 - dbl_B0EA60)); /*0x6f2982*/
  result = Math::RoundToInt(v0 * dbl_B0EA58 * 0.5); /*0x6f2996*/
  dword_B0EB34 = result; /*0x6f299b*/
  return result; /*0x6f29a0*/
}
} // namespace gamemd

// 0x6F29B0
namespace gamemd {
void sub_6F29B0()
{
  dbl_B0EA68 = Math::ArcTan(((double)dword_B0EB34 * 0.00390625)); /*0x6f29c7*/
}
} // namespace gamemd

// 0x6F29E0
namespace gamemd {
void sub_6F29E0()
{
  dbl_B0EAA0 = Math::ArcTan(((double)(2 * dword_B0EB34) / dbl_B0EA58)); /*0x6f2a02*/
}
} // namespace gamemd

// 0x6F2A10
namespace gamemd {
long long sub_6F2A10()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0EB34) + 0.5); /*0x6f2a2b*/
  dword_B0EB24 = result; /*0x6f2a30*/
  return result; /*0x6f2a36*/
}
} // namespace gamemd

// 0x6F2A40
namespace gamemd {
int sub_6F2A40()
{
  dword_B0EA50 = 0; /*0x6f2a42*/
  return 0; /*0x6f2a4e*/
}
} // namespace gamemd

// 0x6F2A50
namespace gamemd {
int sub_6F2A50()
{
  dword_B0EA90 = 0; /*0x6f2a52*/
  dword_B0EA94 = 0; /*0x6f2a57*/
  dword_B0EA98 = 0; /*0x6f2a5c*/
  return 0; /*0x6f2a61*/
}
} // namespace gamemd

// 0x6F2A70
namespace gamemd {
int sub_6F2A70()
{
  dword_B0EB20 = 0; /*0x6f2a75*/
  dword_B0EB18 = 128; /*0x6f2a7f*/
  dword_B0EB1C = 128; /*0x6f2a84*/
  return 128; /*0x6f2a89*/
}
} // namespace gamemd

// 0x6F2A90
namespace gamemd {
int sub_6F2A90()
{
  dword_B0EA40 = 0; /*0x6f2a92*/
  dword_B0EA44 = 0; /*0x6f2a97*/
  dword_B0EA48 = 0; /*0x6f2a9c*/
  dword_B0EA4C = 0; /*0x6f2aa1*/
  return 0; /*0x6f2aa6*/
}
} // namespace gamemd

// 0x6F2AB0
namespace gamemd {
int sub_6F2AB0()
{
  dword_B0EA80 = (int)dword_A8ED84; /*0x6f2aba*/
  dword_B0EA88 = 0; /*0x6f2abf*/
  return atexit((void (__cdecl *)(void))sub_6F2AD0); /*0x6f2acf*/
}
} // namespace gamemd

// 0x6F2AD0
namespace gamemd {
void sub_6F2AD0()
{
  if ( (byte_B0EA38 & 1) == 0 ) /*0x6f2ada*/
    byte_B0EA38 |= 1u; /*0x6f2ade*/
}
} // namespace gamemd

// 0x6F2AF0
namespace gamemd {
int sub_6F2AF0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F2AF0)
}
} // namespace gamemd

// 0x6F2B20
namespace gamemd {
void sub_6F2B20()
{
  if ( (byte_B0EA38 & 2) == 0 ) /*0x6f2b2a*/
    byte_B0EA38 |= 2u; /*0x6f2b2e*/
}
} // namespace gamemd

// 0x6F5EF0
namespace gamemd {
int Tactical_DrawLine3D(unsigned int * a1, int * a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F5EF0)
}
} // namespace gamemd

// 0x6F6030
namespace gamemd {
int sub_6F6030(int * a1, unsigned int * a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F6030)
}
} // namespace gamemd

// 0x6FF950
namespace gamemd {
void nullsub_45()
{
  ; /*0x6ff950*/
}
} // namespace gamemd
