// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/GenericList_e4.hpp"

#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/AircraftTypeClass_e4.hpp"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/E4Recv_690400_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/GameSettings_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/RAMFileClass_e4.hpp"
#include "e4/classes/VeterancyStruct_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/TabClass_e4.hpp"
#include "e4/classes/Hash_e4.hpp"
#include "e4/classes/InfantryTypeVector_e4.hpp"

// 0x679CC0
namespace gamemd {
int sub_679CC0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x679CC0)
}
}
// 0x67B550
namespace gamemd {
int ReadINIClassBuildingTypeList(INIClass * aP0, unsigned char *** edx0, VectorClass_flat * aP2, unsigned char * a3, unsigned int * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67B550)
}
}
// 0x67BB10
namespace gamemd {
void * ReadINIClassInfantryTypeList(INIClass * aP0, unsigned char *** edx0, INIClass * aP1, unsigned char * a3, unsigned int * a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67BB10)
}
}
// 0x674500
namespace gamemd {  // G42.18c ns repair
int RulesClass::sub_674500()
{

  int result; // eax
  RulesClass *v2; // [esp+Ch] [ebp+4h]

  ((INIClass *)(INIClass *)v2)->ReadDifficultyModifiers(); /*0x674515*/
  ((INIClass *)(INIClass *)v2)->ReadDifficultyModifiers(); /*0x674527*/
  result = ((INIClass *)(INIClass *)v2)->ReadDifficultyModifiers(); /*0x674539*/
  LOBYTE(result) = 1; /*0x67453f*/
  return result; /*0x67453e*/

}
}  // G42.18c ns repair
// 0x679EC0
namespace gamemd {
int unknown_libname_29()
{
  return ((Hash*)(int)&dword_887180)->ComputeHashSHA1();
}
} // namespace gamemd

// 0x679ED0
namespace gamemd {
int unknown_libname_30()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x679ED0)
}
} // namespace gamemd

// 0x679EE0
namespace gamemd {
int ArtINI_Load()
{
  unsigned int v1[22]; // [esp+0h] [ebp-6Ch] BYREF
  unsigned char v2[12]; // [esp+58h] [ebp-14h] BYREF
  int v3; // [esp+64h] [ebp-8h]

  INIClass::ClearSection((int)&dword_887180, 0, 0); /*0x679eec*/
  ((CCFileClass *)(v1))->Construct((char *)aArtmdIni); /*0x679efa*/
  ((CCINIClass *)((int)(&dword_887180)))->Load((int)v1, 0, 0); /*0x679f0d*/
  v1[0] = (unsigned int)((void*)&CCFileClass_vftable); /*0x679f16*/
  v3 = 0; /*0x679f1e*/
  ((Vector *)((int)v2))->Clear(); /*0x679f26*/
  v1[0] = (unsigned int)&off_7E1668; /*0x679f2f*/
// 0x431b80
  return ((BufferIOFileClass *)(v1))->Dtor(); /*0x679f3c*/
}
} // namespace gamemd

// 0x67BAC0
namespace gamemd {
InfantryTypeClass * GetINIClassInt(unsigned char *** a0, INIClass * aP1, unsigned char * a2, int a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67BAC0)
}
} // namespace gamemd

// 0x67BD30
namespace gamemd {
AircraftTypeClass * GetINIClassKeyword(unsigned char *** a0, INIClass * aP1, unsigned char * a2, int a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67BD30)
}
} // namespace gamemd

// 0x67C480
namespace gamemd {
int sub_67C480()
{
  dword_B053C8 = 0; /*0x67c482*/
  dword_B053CC = 0; /*0x67c487*/
  dword_B053D0 = 0; /*0x67c48c*/
  dword_B053D4 = 0; /*0x67c491*/
  return 0; /*0x67c496*/
}
} // namespace gamemd

// 0x67C4A0
namespace gamemd {
void sub_67C4A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x67c4ac*/
  dbl_B053E0 = Math::Sqrt(v0 + v0); /*0x67c4be*/
}
} // namespace gamemd

// 0x67C4D0
namespace gamemd {
void sub_67C4D0()
{
  dbl_B05430 = dbl_B053E0 / 60.0; /*0x67c4dc*/
}
} // namespace gamemd

// 0x67C4F0
namespace gamemd {
void sub_67C4F0()
{
  dbl_B05418 = 1.0 / dbl_B05430; /*0x67c4fc*/
}
} // namespace gamemd

// 0x67C510
namespace gamemd {
void sub_67C510()
{
  dbl_B05410 = 0.0174532925199433 * 45.0; /*0x67c51c*/
}
} // namespace gamemd

// 0x67C530
namespace gamemd {
void sub_67C530()
{
  dbl_B053E8 = 0.0174532925199433 * 60.0; /*0x67c53c*/
}
} // namespace gamemd

// 0x67C550
namespace gamemd {
void sub_67C550()
{
  dbl_B053C0 = 0.0174532925199433 * 90.0; /*0x67c55c*/
}
} // namespace gamemd

// 0x67C570
namespace gamemd {
long long sub_67C570()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B053C0 - dbl_B053E8); /*0x67c582*/
  result = Math::RoundToInt(v0 * dbl_B053E0 * 0.5); /*0x67c596*/
  dword_B05438 = result; /*0x67c59b*/
  return result; /*0x67c5a0*/
}
} // namespace gamemd

// 0x67C5B0
namespace gamemd {
void sub_67C5B0()
{
  dbl_B053F0 = Math::ArcTan((double)dword_B05438 * 0.00390625); /*0x67c5c7*/
}
} // namespace gamemd

// 0x67C5E0
namespace gamemd {
void sub_67C5E0()
{
  dbl_B05408 = Math::ArcTan((double)(2 * dword_B05438) / dbl_B053E0); /*0x67c602*/
}
} // namespace gamemd

// 0x67C610
namespace gamemd {
long long sub_67C610()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B05438) + 0.5); /*0x67c62b*/
  dword_B0542C = result; /*0x67c630*/
  return result; /*0x67c636*/
}
} // namespace gamemd

// 0x67C640
namespace gamemd {
int sub_67C640()
{
  word_B053D8 = 0; /*0x67c642*/
  word_B053DA = 0; /*0x67c648*/
  return 0; /*0x67c64e*/
}
} // namespace gamemd

// 0x67C650
namespace gamemd {
int sub_67C650()
{
  dword_B053F8 = 0; /*0x67c652*/
  dword_B053FC = 0; /*0x67c657*/
  dword_B05400 = 0; /*0x67c65c*/
  return 0; /*0x67c661*/
}
} // namespace gamemd

// 0x67C670
namespace gamemd {
int sub_67C670()
{
  dword_B05428 = 0; /*0x67c675*/
  dword_B05420 = 128; /*0x67c67f*/
  dword_B05424 = 128; /*0x67c684*/
  return 128; /*0x67c689*/
}
} // namespace gamemd

// 0x67FDC0
namespace gamemd {
void nullsub_225()
{
  ; /*0x67fdc0*/
}
} // namespace gamemd
