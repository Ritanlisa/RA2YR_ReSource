// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5408F0_e4.hpp"
#include "e4/classes/E4Recv_540C50_e4.hpp"
#include "e4/classes/E4Recv_541170_e4.hpp"
#include "e4/classes/E4Recv_5422C0_e4.hpp"
#include "e4/classes/E4Recv_542F30_e4.hpp"
#include "e4/classes/E4Recv_543AF0_e4.hpp"
#include "e4/classes/E4Recv_549830_e4.hpp"
#include "e4/classes/E4Recv_54A990_e4.hpp"
#include "e4/classes/E4Recv_54A9E0_e4.hpp"
#include "e4/classes/E4Recv_54BA30_e4.hpp"
#include "e4/classes/E4Recv_54E360_e4.hpp"
#include "e4/classes/E4Recv_54E690_e4.hpp"
#include "e4/classes/E4Recv_54EBF0_e4.hpp"
#include "e4/classes/E4Recv_54F6D0_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/WinsockInterface_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/LightConvertClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/E4Recv_52A110_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/E4Recv_554400_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/TheatreClass_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/GenericNode_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"

// 0x540C50
namespace gamemd {
int E4Recv_540C50::sub_540C50()
{

  return LOBYTE(((unsigned int *)this)[0]); /*0x540c55*/

}
}
// 0x541170
namespace gamemd {
AbstractClass * * E4Recv_541170::sub_541170(int a2, int a3, int a4, int a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x541170)
}
}
// 0x542F30
namespace gamemd {
int E4Recv_542F30::sub_542F30()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x542F30)
}
}
// 0x544E70
namespace gamemd {
AbstractClass * * SurfaceClass_CreatePrimary(int a1, int a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x544E70)
}
}
// 0x545150
namespace gamemd {
char * * LoadTerrainTypeClassTheatre(AbstractClass * a1, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x545150)
}

} // namespace gamemd

// 0x546DA0
namespace gamemd {
void MapClass_LoadIsometricTiles(char a1, char a2)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x546DA0)
}
}
// 0x547110
namespace gamemd {
int ResetAllTechnoField776()
{
  int result; // eax
  int i; // ecx
  int j; // eax

  result = dword_A8ED38; /*0x547110*/
  for ( i = 0; i < dword_A8ED38; ++i ) /*0x54711b*/
  {
    for ( j = *((unsigned int *)dword_A8ED2C + i); j; j = *(unsigned int *)(j + 700) ) /*0x547127*/
      *(unsigned int *)(j + 776) = 0; /*0x547129*/
    result = dword_A8ED38; /*0x547139*/
  }
  return result; /*0x547143*/
}
}
// 0x547370
namespace gamemd {
int Map_InitCoordinateOffsets(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x547370)
}
}
// 0x549830
namespace gamemd {
int E4Recv_549830::sub_549830(int a2, void ** a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x549830)
}
}
// 0x549B30
namespace gamemd {
int sub_549B30()
{
  lpBuffer = 0; /*0x549b32*/
  dword_AA1060 = 0; /*0x549b37*/
  dword_AA1064 = 0; /*0x549b3c*/
  dword_AA1068 = 0; /*0x549b41*/
  dword_AA106C = 0; /*0x549b46*/
  return 0; /*0x549b4b*/
}
}
// 0x54BA30
namespace gamemd {
AbstractClass * * E4Recv_54BA30::UpdateFootMovement()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x54BA30)
}
}
// 0x5406E0
namespace gamemd {
void sub_5406E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5406ec*/
  dbl_AA0650 = Math::Sqrt(v0 + v0); /*0x5406fe*/
}
} // namespace gamemd

// 0x540710
namespace gamemd {
void sub_540710()
{
  dbl_AA06A0 = dbl_AA0650 / 60.0; /*0x54071c*/
}
} // namespace gamemd

// 0x540730
namespace gamemd {
void sub_540730()
{
  dbl_AA0688 = 1.0 / dbl_AA06A0; /*0x54073c*/
}
} // namespace gamemd

// 0x540750
namespace gamemd {
void sub_540750()
{
  dbl_AA0680 = 0.0174532925199433 * 45.0; /*0x54075c*/
}
} // namespace gamemd

// 0x540770
namespace gamemd {
void sub_540770()
{
  dbl_AA0658 = 0.0174532925199433 * 60.0; /*0x54077c*/
}
} // namespace gamemd

// 0x540790
namespace gamemd {
void sub_540790()
{
  dbl_AA0630 = 0.0174532925199433 * 90.0; /*0x54079c*/
}
} // namespace gamemd

// 0x5407B0
namespace gamemd {
long long sub_5407B0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AA0630 - dbl_AA0658); /*0x5407c2*/
  result = Math::RoundToInt(v0 * dbl_AA0650 * 0.5); /*0x5407d6*/
  dword_AA06A8 = result; /*0x5407db*/
  return result; /*0x5407e0*/
}
} // namespace gamemd

// 0x5407F0
namespace gamemd {
void sub_5407F0()
{
  dbl_AA0660 = Math::ArcTan((double)dword_AA06A8 * 0.00390625); /*0x540807*/
}
} // namespace gamemd

// 0x540820
namespace gamemd {
void sub_540820()
{
  dbl_AA0678 = Math::ArcTan((double)(2 * dword_AA06A8) / dbl_AA0650); /*0x540842*/
}
} // namespace gamemd

// 0x540850
namespace gamemd {
long long sub_540850()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AA06A8) + 0.5); /*0x54086b*/
  dword_AA069C = result; /*0x540870*/
  return result; /*0x540876*/
}
} // namespace gamemd

// 0x540880
namespace gamemd {
int sub_540880()
{
  word_AA0648 = 0; /*0x540882*/
  word_AA064A = 0; /*0x540888*/
  return 0; /*0x54088e*/
}
} // namespace gamemd

// 0x540890
namespace gamemd {
int sub_540890()
{
  dword_AA0668 = 0; /*0x540892*/
  dword_AA066C = 0; /*0x540897*/
  dword_AA0670 = 0; /*0x54089c*/
  return 0; /*0x5408a1*/
}
} // namespace gamemd

// 0x5408B0
namespace gamemd {
int sub_5408B0()
{
  dword_AA0698 = 0; /*0x5408b5*/
  dword_AA0690 = 128; /*0x5408bf*/
  dword_AA0694 = 128; /*0x5408c4*/
  return 128; /*0x5408c9*/
}
} // namespace gamemd

// 0x5408D0
namespace gamemd {
int sub_5408D0()
{
  dword_AA0638 = 0; /*0x5408d2*/
  dword_AA063C = 0; /*0x5408d7*/
  dword_AA0640 = 0; /*0x5408dc*/
  dword_AA0644 = 0; /*0x5408e1*/
  return 0; /*0x5408e6*/
}
} // namespace gamemd

// 0x5408F0
namespace gamemd {
char * E4Recv_5408F0::sub_5408F0(int a2, int a3, int a4, int a5, short a6, short a7)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5408F0)
}
} // namespace gamemd

// 0x5422C0
namespace gamemd {
unsigned int E4Recv_5422C0::_GetNumBorrowedCores_SchedulerProxy_details_Concurrency__QBEIXZ()
{

  return this->M168; /*0x5422c6*/

}
} // namespace gamemd

// 0x543120
namespace gamemd {
void sub_543120()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x54312c*/
  dbl_AA06D8 = Math::Sqrt(v0 + v0); /*0x54313e*/
}
} // namespace gamemd

// 0x543150
namespace gamemd {
void sub_543150()
{
  dbl_AA0728 = dbl_AA06D8 / 60.0; /*0x54315c*/
}
} // namespace gamemd

// 0x543170
namespace gamemd {
void sub_543170()
{
  dbl_AA0710 = 1.0 / dbl_AA0728; /*0x54317c*/
}
} // namespace gamemd

// 0x543190
namespace gamemd {
void sub_543190()
{
  dbl_AA0708 = 0.0174532925199433 * 45.0; /*0x54319c*/
}
} // namespace gamemd

// 0x5431B0
namespace gamemd {
void sub_5431B0()
{
  dbl_AA06E0 = 0.0174532925199433 * 60.0; /*0x5431bc*/
}
} // namespace gamemd

// 0x5431D0
namespace gamemd {
void sub_5431D0()
{
  dbl_AA06B8 = 0.0174532925199433 * 90.0; /*0x5431dc*/
}
} // namespace gamemd

// 0x5431F0
namespace gamemd {
long long sub_5431F0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AA06B8 - dbl_AA06E0); /*0x543202*/
  result = Math::RoundToInt(v0 * dbl_AA06D8 * 0.5); /*0x543216*/
  dword_AA0730 = result; /*0x54321b*/
  return result; /*0x543220*/
}
} // namespace gamemd

// 0x543230
namespace gamemd {
void sub_543230()
{
  dbl_AA06E8 = Math::ArcTan((double)dword_AA0730 * 0.00390625); /*0x543247*/
}
} // namespace gamemd

// 0x543260
namespace gamemd {
void sub_543260()
{
  dbl_AA0700 = Math::ArcTan((double)(2 * dword_AA0730) / dbl_AA06D8); /*0x543282*/
}
} // namespace gamemd

// 0x543290
namespace gamemd {
long long sub_543290()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AA0730) + 0.5); /*0x5432ab*/
  dword_AA0724 = result; /*0x5432b0*/
  return result; /*0x5432b6*/
}
} // namespace gamemd

// 0x5432C0
namespace gamemd {
int sub_5432C0()
{
  word_AA06D0 = 0; /*0x5432c2*/
  word_AA06D2 = 0; /*0x5432c8*/
  return 0; /*0x5432ce*/
}
} // namespace gamemd

// 0x5432D0
namespace gamemd {
int sub_5432D0()
{
  dword_AA06F0 = 0; /*0x5432d2*/
  dword_AA06F4 = 0; /*0x5432d7*/
  dword_AA06F8 = 0; /*0x5432dc*/
  return 0; /*0x5432e1*/
}
} // namespace gamemd

// 0x5432F0
namespace gamemd {
int sub_5432F0()
{
  dword_AA0720 = 0; /*0x5432f5*/
  dword_AA0718 = 128; /*0x5432ff*/
  dword_AA071C = 128; /*0x543304*/
  return 128; /*0x543309*/
}
} // namespace gamemd

// 0x543310
namespace gamemd {
int sub_543310()
{
  dword_AA06C0 = 0; /*0x543312*/
  dword_AA06C4 = 0; /*0x543317*/
  dword_AA06C8 = 0; /*0x54331c*/
  dword_AA06CC = 0; /*0x543321*/
  return 0; /*0x543326*/
}
} // namespace gamemd

// 0x543AB0
namespace gamemd {
int nullsub_0(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x543ab6*/
    return -2147467261; /*0x543ab8*/
  *a2 = 237448640; /*0x543ac6*/
  a2[1] = 298949647; /*0x543ace*/
  a2[2] = -1610610249; /*0x543ad7*/
  a2[3] = -777003740; /*0x543ae0*/
  return 0; /*0x543abd*/
}
} // namespace gamemd

// 0x543AF0
namespace gamemd {
int E4Recv_543AF0::nullsub_0_0()
{

  return this->M172; /*0x543af6*/

}
} // namespace gamemd

// 0x543B00
namespace gamemd {
void nullsub_154(int a1, int a2)
{
  ; /*0x543b00*/
}
} // namespace gamemd

// 0x543C40
namespace gamemd {
int sub_543C40()
{
  dword_AA1040 = 0; /*0x543c42*/
  dword_AA1044 = 0; /*0x543c47*/
  dword_AA1048 = 0; /*0x543c4c*/
  dword_AA104C = 0; /*0x543c51*/
  return 0; /*0x543c56*/
}
} // namespace gamemd

// 0x543C60
namespace gamemd {
void sub_543C60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x543c6c*/
  dbl_AA1070 = Math::Sqrt(v0 + v0); /*0x543c7e*/
}
} // namespace gamemd

// 0x543C90
namespace gamemd {
void sub_543C90()
{
  dbl_ABC2C0 = dbl_AA1070 / 60.0; /*0x543c9c*/
}
} // namespace gamemd

// 0x543CB0
namespace gamemd {
void sub_543CB0()
{
  dbl_ABC1F0 = 1.0 / dbl_ABC2C0; /*0x543cbc*/
}
} // namespace gamemd

// 0x543CD0
namespace gamemd {
void sub_543CD0()
{
  dbl_ABC1E0 = 0.0174532925199433 * 45.0; /*0x543cdc*/
}
} // namespace gamemd

// 0x543CF0
namespace gamemd {
void sub_543CF0()
{
  dbl_AA1128 = 0.0174532925199433 * 60.0; /*0x543cfc*/
}
} // namespace gamemd

// 0x543D10
namespace gamemd {
void sub_543D10()
{
  dbl_AA0E30 = 0.0174532925199433 * 90.0; /*0x543d1c*/
}
} // namespace gamemd

// 0x543D30
namespace gamemd {
long long sub_543D30()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AA0E30 - dbl_AA1128); /*0x543d42*/
  result = Math::RoundToInt(v0 * dbl_AA1070 * 0.5); /*0x543d56*/
  dword_ABC550 = result; /*0x543d5b*/
  return result; /*0x543d60*/
}
} // namespace gamemd

// 0x543D70
namespace gamemd {
void sub_543D70()
{
  unk_AA1138 = Math::ArcTan((double)dword_ABC550 * 0.00390625); /*0x543d87*/
}
} // namespace gamemd

// 0x543DA0
namespace gamemd {
void sub_543DA0()
{
  dbl_ABB118 = Math::ArcTan((double)(2 * dword_ABC550) / dbl_AA1070); /*0x543dc2*/
}
} // namespace gamemd

// 0x543DD0
namespace gamemd {
long long sub_543DD0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC550) + 0.5); /*0x543deb*/
  dword_ABC2BC = result; /*0x543df0*/
  return result; /*0x543df6*/
}
} // namespace gamemd

// 0x543E00
namespace gamemd {
int sub_543E00()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x543E00)
}
} // namespace gamemd

// 0x543E10
namespace gamemd {
int sub_543E10()
{
  dword_ABB0F8 = 0; /*0x543e12*/
  dword_ABB0FC = 0; /*0x543e17*/
  dword_ABB100 = 0; /*0x543e1c*/
  return 0; /*0x543e21*/
}
} // namespace gamemd

// 0x543E30
namespace gamemd {
int sub_543E30()
{
  dword_ABC208 = 0; /*0x543e35*/
  dword_ABC200 = 128; /*0x543e3f*/
  dword_ABC204 = 128; /*0x543e44*/
  return 128; /*0x543e49*/
}
} // namespace gamemd

// 0x543E50
namespace gamemd {
unsigned char * sub_543E50()
{
  unsigned char *result; // eax
  int v1; // ecx

  result = &unk_ABBED2; /*0x543e50*/
  v1 = 256; /*0x543e55*/
  do /*0x543e68*/
  {
    *(result - 2) = 0; /*0x543e5c*/
    *(result - 1) = 0; /*0x543e5f*/
    *result = 0; /*0x543e62*/
    result += 3; /*0x543e64*/
    --v1; /*0x543e67*/
  }
  while ( v1 ); /*0x543e68*/
  return result; /*0x543e6a*/
}
} // namespace gamemd

// 0x543E70
namespace gamemd {
int sub_543E70()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x543E70)
}
} // namespace gamemd

// 0x543EB0
namespace gamemd {
void sub_543EB0()
{
  if ( (byte_AA0E2C & 1) == 0 ) /*0x543eba*/
  {
    dword_AA1078 = (int)&VectorClass_IsometricTileTypeClass_TileInsertType___vftable; /*0x543ebe*/
    byte_AA0E2C |= 1u; /*0x543ed1*/
    if ( dword_AA107C ) /*0x543ed7*/
    {
      if ( byte_AA1085 ) /*0x543ee1*/
      {
        RA2_OPDEL(dword_AA107C); /*0x543ee4*/
        dword_AA107C = 0; /*0x543eec*/
      }
    }
    byte_AA1085 = 0; /*0x543ef6*/
    dword_AA1080 = 0; /*0x543efd*/
  }
}
} // namespace gamemd

// 0x544690
namespace gamemd {
int sub_544690()
{
  dword_ABC21C = 0; /*0x544699*/
  dword_ABC22C = 0; /*0x54469f*/
  dword_ABC23C = 0; /*0x5446a5*/
  dword_ABC24C = 0; /*0x5446ab*/
  dword_ABC210 = 0; /*0x5446b1*/
  dword_ABC214 = 0; /*0x5446b6*/
  dword_ABC218 = 0; /*0x5446bc*/
  dword_ABC220 = 0; /*0x5446c2*/
  dword_ABC224 = 0; /*0x5446c7*/
  dword_ABC228 = 0; /*0x5446cd*/
  dword_ABC230 = 0; /*0x5446d3*/
  dword_ABC234 = 0; /*0x5446d8*/
  dword_ABC238 = 0; /*0x5446de*/
  dword_ABC240 = 0; /*0x5446e4*/
  dword_ABC244 = 0; /*0x5446e9*/
  dword_ABC248 = 0; /*0x5446ef*/
  dword_ABC25C = 12; /*0x544709*/
  dword_ABC250 = 13; /*0x54470f*/
  dword_ABC254 = 6; /*0x544714*/
  dword_ABC258 = 48; /*0x54471a*/
  dword_ABC26C = 0; /*0x544728*/
  dword_ABC260 = 0; /*0x54472e*/
  dword_ABC264 = 0; /*0x544733*/
  dword_ABC268 = 0; /*0x544739*/
  dword_ABC27C = 12; /*0x544753*/
  dword_ABC270 = 14; /*0x544759*/
  dword_ABC274 = 1; /*0x54475e*/
  dword_ABC278 = 48; /*0x544764*/
  dword_ABC28C = 0; /*0x544772*/
  dword_ABC29C = 0; /*0x544778*/
  dword_ABC2AC = 0; /*0x54477e*/
  dword_ABC280 = 0; /*0x544784*/
  dword_ABC284 = 0; /*0x544789*/
  dword_ABC288 = 0; /*0x54478f*/
  dword_ABC290 = 0; /*0x544795*/
  dword_ABC294 = 0; /*0x54479a*/
  dword_ABC298 = 0; /*0x5447a0*/
  dword_ABC2A0 = 0; /*0x5447a6*/
  dword_ABC2A4 = 0; /*0x5447ab*/
  dword_ABC2A8 = 0; /*0x5447b1*/
  return 0; /*0x5447b7*/
}
} // namespace gamemd

// 0x544DF0
namespace gamemd {
void nullsub_155()
{
  ; /*0x544df0*/
}
} // namespace gamemd

// 0x544E30
namespace gamemd {
int MIXFile_AccumulateIndex(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x544E30)
}
} // namespace gamemd

// 0x544FF0
namespace gamemd {
char ReturnFalse2()
{
  return 0; /*0x544ff2*/
}
} // namespace gamemd

// 0x547CE0
namespace gamemd {
void nullsub_20()
{
  ; /*0x547ce0*/
}
} // namespace gamemd

// 0x549A00
namespace gamemd {
int sub_549A00(int a1, int a2, int * a3, int * a4)
{
  int result; // eax

  *a3 = 60 * a1 / 2; /*0x549a16*/
  *a4 = 30 * a1 / 2; /*0x549a29*/
  *a3 += -60 * a2 / 2; /*0x549a43*/
  result = 30 * a2 / 2; /*0x549a51*/
  *a4 += result; /*0x549a55*/
  return result; /*0x549a45*/
}
} // namespace gamemd

// 0x54A8A0
namespace gamemd {
int sub_54A8A0()
{
  dword_ABC560 = 0; /*0x54a8a2*/
  dword_ABC564 = 0; /*0x54a8a7*/
  dword_ABC568 = 0; /*0x54a8ac*/
  dword_ABC56C = 0; /*0x54a8b1*/
  return 0; /*0x54a8b6*/
}
} // namespace gamemd

// 0x54A900
namespace gamemd {
unsigned char * Bitfield_SetBit(int a1, int a2, int a3)
{
  char v3; // bl
  unsigned char *result; // eax
  char v5; // cl

  v3 = 1 << (a2 % 8); /*0x54a917*/
  result = (unsigned char *)(a1 + a2 / 8); /*0x54a92a*/
  if ( a3 ) /*0x54a920*/
    v5 = v3 | *result; /*0x54a92f*/
  else
    v5 = ~v3 & *result; /*0x54a946*/
  *result = v5; /*0x54a932*/
  return result; /*0x54a92c*/
}
} // namespace gamemd

// 0x54A990
namespace gamemd {
int E4Recv_54A990::sub_54A990()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x54A990)
}
} // namespace gamemd

// 0x54A9E0
namespace gamemd {
int E4Recv_54A9E0::sub_54A9E0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x54A9E0)
}
} // namespace gamemd

// 0x54AA30
namespace gamemd {
void sub_54AA30()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x54aa3c*/
  dbl_ABC590 = Math::Sqrt(v0 + v0); /*0x54aa4e*/
}
} // namespace gamemd

// 0x54AA60
namespace gamemd {
void sub_54AA60()
{
  dbl_ABC5E0 = dbl_ABC590 / 60.0; /*0x54aa6c*/
}
} // namespace gamemd

// 0x54AA80
namespace gamemd {
void sub_54AA80()
{
  dbl_ABC5C8 = 1.0 / dbl_ABC5E0; /*0x54aa8c*/
}
} // namespace gamemd

// 0x54AAA0
namespace gamemd {
void sub_54AAA0()
{
  dbl_ABC5C0 = 0.0174532925199433 * 45.0; /*0x54aaac*/
}
} // namespace gamemd

// 0x54AAC0
namespace gamemd {
void sub_54AAC0()
{
  dbl_ABC598 = 0.0174532925199433 * 60.0; /*0x54aacc*/
}
} // namespace gamemd

// 0x54AAE0
namespace gamemd {
void sub_54AAE0()
{
  dbl_ABC570 = 0.0174532925199433 * 90.0; /*0x54aaec*/
}
} // namespace gamemd

// 0x54AB00
namespace gamemd {
long long sub_54AB00()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABC570 - dbl_ABC598); /*0x54ab12*/
  result = Math::RoundToInt(v0 * dbl_ABC590 * 0.5); /*0x54ab26*/
  dword_ABC5E8 = result; /*0x54ab2b*/
  return result; /*0x54ab30*/
}
} // namespace gamemd

// 0x54AB40
namespace gamemd {
void sub_54AB40()
{
  dbl_ABC5A0 = Math::ArcTan((double)dword_ABC5E8 * 0.00390625); /*0x54ab57*/
}
} // namespace gamemd

// 0x54AB70
namespace gamemd {
void sub_54AB70()
{
  dbl_ABC5B8 = Math::ArcTan((double)(2 * dword_ABC5E8) / dbl_ABC590); /*0x54ab92*/
}
} // namespace gamemd

// 0x54ABA0
namespace gamemd {
long long sub_54ABA0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC5E8) + 0.5); /*0x54abbb*/
  dword_ABC5DC = result; /*0x54abc0*/
  return result; /*0x54abc6*/
}
} // namespace gamemd

// 0x54ABD0
namespace gamemd {
int sub_54ABD0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x54ABD0)
}
} // namespace gamemd

// 0x54ABE0
namespace gamemd {
int sub_54ABE0()
{
  dword_ABC5A8 = 0; /*0x54abe2*/
  dword_ABC5AC = 0; /*0x54abe7*/
  dword_ABC5B0 = 0; /*0x54abec*/
  return 0; /*0x54abf1*/
}
} // namespace gamemd

// 0x54AC00
namespace gamemd {
int sub_54AC00()
{
  dword_ABC5D8 = 0; /*0x54ac05*/
  dword_ABC5D0 = 128; /*0x54ac0f*/
  dword_ABC5D4 = 128; /*0x54ac14*/
  return 128; /*0x54ac19*/
}
} // namespace gamemd

// 0x54AC20
namespace gamemd {
int sub_54AC20()
{
  dword_ABC578 = 0; /*0x54ac22*/
  dword_ABC57C = 0; /*0x54ac27*/
  dword_ABC580 = 0; /*0x54ac2c*/
  dword_ABC584 = 0; /*0x54ac31*/
  return 0; /*0x54ac36*/
}
} // namespace gamemd

// 0x54D0C0
namespace gamemd {
void nullsub_156()
{
  ; /*0x54d0c0*/
}
} // namespace gamemd

// 0x54E050
namespace gamemd {
void sub_54E050()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x54e05c*/
  unk_ABC638 = Math::Sqrt(v0 + v0); /*0x54e06e*/
}
} // namespace gamemd

// 0x54E080
namespace gamemd {
void sub_54E080()
{
  unk_ABC688 = unk_ABC638 / 60.0; /*0x54e08c*/
}
} // namespace gamemd

// 0x54E0A0
namespace gamemd {
void sub_54E0A0()
{
  unk_ABC670 = 1.0 / unk_ABC688; /*0x54e0ac*/
}
} // namespace gamemd

// 0x54E0C0
namespace gamemd {
void sub_54E0C0()
{
  unk_ABC668 = 0.0174532925199433 * 45.0; /*0x54e0cc*/
}
} // namespace gamemd

// 0x54E0E0
namespace gamemd {
void sub_54E0E0()
{
  unk_ABC640 = 0.0174532925199433 * 60.0; /*0x54e0ec*/
}
} // namespace gamemd

// 0x54E100
namespace gamemd {
void sub_54E100()
{
  dbl_ABC5F0 = 0.0174532925199433 * 90.0; /*0x54e10c*/
}
} // namespace gamemd

// 0x54E120
namespace gamemd {
long long sub_54E120()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABC5F0 - unk_ABC640); /*0x54e132*/
  result = Math::RoundToInt(v0 * unk_ABC638 * 0.5); /*0x54e146*/
  unk_ABC690 = result; /*0x54e14b*/
  return result; /*0x54e150*/
}
} // namespace gamemd

// 0x54E160
namespace gamemd {
void sub_54E160()
{
  unk_ABC648 = Math::ArcTan((double)unk_ABC690 * 0.00390625); /*0x54e177*/
}
} // namespace gamemd

// 0x54E190
namespace gamemd {
void sub_54E190()
{
  unk_ABC660 = Math::ArcTan((double)(2 * unk_ABC690) / unk_ABC638); /*0x54e1b2*/
}
} // namespace gamemd

// 0x54E1C0
namespace gamemd {
long long sub_54E1C0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * unk_ABC690) + 0.5); /*0x54e1db*/
  unk_ABC684 = result; /*0x54e1e0*/
  return result; /*0x54e1e6*/
}
} // namespace gamemd

// 0x54E1F0
namespace gamemd {
int sub_54E1F0()
{
  unk_ABC630 = 0; /*0x54e1f2*/
  unk_ABC632 = 0; /*0x54e1f8*/
  return 0; /*0x54e1fe*/
}
} // namespace gamemd

// 0x54E200
namespace gamemd {
int sub_54E200()
{
  unk_ABC650 = 0; /*0x54e202*/
  unk_ABC654 = 0; /*0x54e207*/
  unk_ABC658 = 0; /*0x54e20c*/
  return 0; /*0x54e211*/
}
} // namespace gamemd

// 0x54E220
namespace gamemd {
int sub_54E220()
{
  unk_ABC680 = 0; /*0x54e225*/
  unk_ABC678 = 128; /*0x54e22f*/
  unk_ABC67C = 128; /*0x54e234*/
  return 128; /*0x54e239*/
}
} // namespace gamemd

// 0x54E240
namespace gamemd {
int sub_54E240()
{
  unk_ABC620 = 0; /*0x54e242*/
  unk_ABC624 = 0; /*0x54e247*/
  unk_ABC628 = 0; /*0x54e24c*/
  unk_ABC62C = 0; /*0x54e251*/
  return 0; /*0x54e256*/
}
} // namespace gamemd

// 0x54E260
namespace gamemd {
int sub_54E260()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x54E260)
}
} // namespace gamemd

// 0x54E360
namespace gamemd {
unsigned int * E4Recv_54E360::sub_54E360()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x54E360)
}
} // namespace gamemd

// 0x54E690
namespace gamemd {
void E4Recv_54E690::sub_54E690()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x54E690)
}
} // namespace gamemd

// 0x54EBF0
namespace gamemd {
unsigned int * E4Recv_54EBF0::sub_54EBF0(int a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x54EBF0)
}
} // namespace gamemd

// 0x54EC40
namespace gamemd {
int sub_54EC40()
{
  unk_ABC6A0 = 0; /*0x54ec42*/
  unk_ABC6A4 = 0; /*0x54ec47*/
  unk_ABC6A8 = 0; /*0x54ec4c*/
  unk_ABC6AC = 0; /*0x54ec51*/
  return 0; /*0x54ec56*/
}
} // namespace gamemd

// 0x54EC60
namespace gamemd {
void sub_54EC60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x54ec6c*/
  unk_ABC6B8 = Math::Sqrt(v0 + v0); /*0x54ec7e*/
}
} // namespace gamemd

// 0x54EC90
namespace gamemd {
void sub_54EC90()
{
  dbl_ABC708 = unk_ABC6B8 / 60.0; /*0x54ec9c*/
}
} // namespace gamemd

// 0x54ECB0
namespace gamemd {
void sub_54ECB0()
{
  unk_ABC6F0 = 1.0 / dbl_ABC708; /*0x54ecbc*/
}
} // namespace gamemd

// 0x54ECD0
namespace gamemd {
void sub_54ECD0()
{
  unk_ABC6E8 = 0.0174532925199433 * 45.0; /*0x54ecdc*/
}
} // namespace gamemd

// 0x54ECF0
namespace gamemd {
void sub_54ECF0()
{
  unk_ABC6C0 = 0.0174532925199433 * 60.0; /*0x54ecfc*/
}
} // namespace gamemd

// 0x54ED10
namespace gamemd {
void sub_54ED10()
{
  unk_ABC698 = 0.0174532925199433 * 90.0; /*0x54ed1c*/
}
} // namespace gamemd

// 0x54ED30
namespace gamemd {
long long sub_54ED30()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(unk_ABC698 - unk_ABC6C0); /*0x54ed42*/
  result = Math::RoundToInt(v0 * unk_ABC6B8 * 0.5); /*0x54ed56*/
  dword_ABC710 = result; /*0x54ed5b*/
  return result; /*0x54ed60*/
}
} // namespace gamemd

// 0x54ED70
namespace gamemd {
void sub_54ED70()
{
  unk_ABC6C8 = Math::ArcTan((double)dword_ABC710 * 0.00390625); /*0x54ed87*/
}
} // namespace gamemd

// 0x54EDA0
namespace gamemd {
void sub_54EDA0()
{
  unk_ABC6E0 = Math::ArcTan((double)(2 * dword_ABC710) / unk_ABC6B8); /*0x54edc2*/
}
} // namespace gamemd

// 0x54EDD0
namespace gamemd {
long long sub_54EDD0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC710) + 0.5); /*0x54edeb*/
  dword_ABC704 = result; /*0x54edf0*/
  return result; /*0x54edf6*/
}
} // namespace gamemd

// 0x54EE00
namespace gamemd {
int sub_54EE00()
{
  unk_ABC6B0 = 0; /*0x54ee02*/
  unk_ABC6B2 = 0; /*0x54ee08*/
  return 0; /*0x54ee0e*/
}
} // namespace gamemd

// 0x54EE10
namespace gamemd {
int sub_54EE10()
{
  unk_ABC6D0 = 0; /*0x54ee12*/
  unk_ABC6D4 = 0; /*0x54ee17*/
  unk_ABC6D8 = 0; /*0x54ee1c*/
  return 0; /*0x54ee21*/
}
} // namespace gamemd

// 0x54EE30
namespace gamemd {
int sub_54EE30()
{
  dword_ABC700 = 0; /*0x54ee35*/
  unk_ABC6F8 = 128; /*0x54ee3f*/
  dword_ABC6FC = 128; /*0x54ee44*/
  return 128; /*0x54ee49*/
}
} // namespace gamemd

// 0x54EE50
namespace gamemd {
void nullsub_157()
{
  ; /*0x54ee50*/
}
} // namespace gamemd

// 0x54F6D0
namespace gamemd {
bool E4Recv_54F6D0::sub_54F6D0()
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x54F6D0)
}
} // namespace gamemd

// 0x54FBB0
namespace gamemd {
void sub_54FBB0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x54fbbc*/
  dbl_ABC7C0 = Math::Sqrt(v0 + v0); /*0x54fbce*/
}
} // namespace gamemd

// 0x54FBE0
namespace gamemd {
void sub_54FBE0()
{
  dbl_ABC8B0 = dbl_ABC7C0 / 60.0; /*0x54fbec*/
}
} // namespace gamemd

// 0x54FC00
namespace gamemd {
void sub_54FC00()
{
  dbl_ABC898 = 1.0 / dbl_ABC8B0; /*0x54fc0c*/
}
} // namespace gamemd

// 0x54FC20
namespace gamemd {
void sub_54FC20()
{
  dbl_ABC890 = 0.0174532925199433 * 45.0; /*0x54fc2c*/
}
} // namespace gamemd

// 0x54FC40
namespace gamemd {
void sub_54FC40()
{
  dbl_ABC7D0 = 0.0174532925199433 * 60.0; /*0x54fc4c*/
}
} // namespace gamemd

// 0x54FC60
namespace gamemd {
void sub_54FC60()
{
  dbl_ABC720 = 0.0174532925199433 * 90.0; /*0x54fc6c*/
}
} // namespace gamemd

// 0x54FC80
namespace gamemd {
long long sub_54FC80()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABC720 - dbl_ABC7D0); /*0x54fc92*/
  result = Math::RoundToInt(v0 * dbl_ABC7C0 * 0.5); /*0x54fca6*/
  dword_ABC8BC = result; /*0x54fcab*/
  return result; /*0x54fcb0*/
}
} // namespace gamemd

// 0x54FCC0
namespace gamemd {
void sub_54FCC0()
{
  dbl_ABC7D8 = Math::ArcTan((double)dword_ABC8BC * 0.00390625); /*0x54fcd7*/
}
} // namespace gamemd

// 0x54FCF0
namespace gamemd {
void sub_54FCF0()
{
  dbl_ABC7F0 = Math::ArcTan((double)(2 * dword_ABC8BC) / dbl_ABC7C0); /*0x54fd12*/
}
} // namespace gamemd

// 0x54FD20
namespace gamemd {
long long sub_54FD20()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC8BC) + 0.5); /*0x54fd3b*/
  dword_ABC8AC = result; /*0x54fd40*/
  return result; /*0x54fd46*/
}
} // namespace gamemd

// 0x54FD50
namespace gamemd {
int sub_54FD50()
{
  word_ABC7B8 = 0; /*0x54fd52*/
  word_ABC7BA = 0; /*0x54fd58*/
  return 0; /*0x54fd5e*/
}
} // namespace gamemd

// 0x54FD60
namespace gamemd {
int sub_54FD60()
{
  dword_ABC7E0 = 0; /*0x54fd62*/
  dword_ABC7E4 = 0; /*0x54fd67*/
  dword_ABC7E8 = 0; /*0x54fd6c*/
  return 0; /*0x54fd71*/
}
} // namespace gamemd

// 0x54FD80
namespace gamemd {
int sub_54FD80()
{
  dword_ABC8A8 = 0; /*0x54fd85*/
  dword_ABC8A0 = 128; /*0x54fd8f*/
  dword_ABC8A4 = 128; /*0x54fd94*/
  return 128; /*0x54fd99*/
}
} // namespace gamemd

// 0x54FDA0
namespace gamemd {
int sub_54FDA0()
{
  dword_ABC728 = 0; /*0x54fda2*/
  dword_ABC72C = 0; /*0x54fda7*/
  dword_ABC730 = 0; /*0x54fdac*/
  dword_ABC734 = 0; /*0x54fdb1*/
  return 0; /*0x54fdb6*/
}
} // namespace gamemd

// 0x54FDC0
namespace gamemd {
int sub_54FDC0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x54FDC0)
}
} // namespace gamemd

// 0x54FE00
namespace gamemd {
void sub_54FE00()
{
  if ( (byte_ABC718 & 1) == 0 ) /*0x54fe0a*/
  {
    dword_ABC878 = (int)&VectorClass_LaserDrawClass___vftable; /*0x54fe0e*/
    byte_ABC718 |= 1u; /*0x54fe21*/
    if ( dword_ABC87C ) /*0x54fe27*/
    {
      if ( byte_ABC885 ) /*0x54fe31*/
      {
        RA2_OPDEL(dword_ABC87C); /*0x54fe34*/
        dword_ABC87C = 0; /*0x54fe3c*/
      }
    }
    byte_ABC885 = 0; /*0x54fe46*/
    dword_ABC880 = 0; /*0x54fe4d*/
  }
}
} // namespace gamemd
