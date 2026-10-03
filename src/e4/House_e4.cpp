// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/TubeClass_e4.hpp"
#include "e4/classes/HoverLocomotionClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/SortedArray_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Matrix3x4_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/CCFileClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/BufferIOFileClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/RadioClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Checksummer_e4.hpp"  // G42.36 C2027 supply

// 0x47D2B0
namespace gamemd {
int House::AnnounceUpgrade(int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x47D2B0)
}
}
// 0x47FB90
namespace gamemd {
unsigned int * House::GetStartCoords(unsigned int *aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x47FB90)
}
}
// 0x4FD500
namespace gamemd {
int House::UpdateHouseAI()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4FD500)
}
}
// 0x501A20
namespace gamemd {
void sub_501A20()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x501A20)
}
}
// 0x50B6F0
namespace gamemd {
int House::IsHumanPlayer()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x50B6F0)
}
}
// 0x50B730
namespace gamemd {
int House::IsCurrentPlayer()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x50B730)
}
}
// 0x50DB00
namespace gamemd {
AbstractClass * * House::ChooseHouseEnemy(BuildingClass * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x50DB00)
}
}
// 0x544BE0
namespace gamemd {
int House::LookupObject(int a2, void *a2_2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x544BE0)
}
}
// 0x544C20
namespace gamemd {
int House::LoadMapFileData(int a2, char a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x544C20)
}
}
// 0x69E090
namespace gamemd {
void House::Constructor()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69E090)
}
}
// 0x70C270
namespace gamemd {
int House::PowerBeginUpdate(AbstractClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x70C270)
}
}
// 0x72F350
namespace gamemd {
unsigned int * sub_72F350()
{
  unsigned int *result; // eax

  FileTree::CleanupAll(); /*0x72f350*/
  LoadingScreen::FreeResources(); /*0x72f355*/
  LoadingScreen::FreeResources2(); /*0x72f35a*/
  byte_B0FC0C = 0; /*0x72f35f*/
  LoadingScreen::LoadSHPs(); /*0x72f366*/
  if ( *((unsigned int *)dword_A8B230 + 3374) == 2 ) /*0x72f377*/
  {
    LoadPaletteSimple(off_844BF8, &dword_B0FBEC, &dword_B0FBF0); /*0x72f389*/
    LoadPaletteSimple(off_844BFC[0], &dword_B0FBF4, &dword_B0FBF8); /*0x72f39e*/
  }
  else
  {
    LoadPaletteSimple(off_844C00, &dword_B0FBF4, &dword_B0FBF8); /*0x72f3b0*/
    LoadPaletteSimple(off_844BF4, &dword_B0FBEC, &dword_B0FBF0); /*0x72f3c5*/
  }
  LoadPaletteSimple(off_844BF0, &dword_B0FBE4, &dword_B0FBE8); /*0x72f3da*/
  LoadPaletteSimple(off_844C04, &dword_B0FBFC, &dword_B0FC00); /*0x72f3ef*/
  LoadPaletteSimple(off_844C08, &dword_B0FC04, &dword_B0FC08); /*0x72f404*/
  result = SetupScreenBuffers(dword_A8EB84, dword_A8EB88); /*0x72f415*/
  byte_B0FC0C = 1; /*0x72f41a*/
  return result; /*0x72f421*/
}
}
// 0x6D1660
namespace gamemd {
void House_Play_6D1660()
{
  unsigned char *v2; // ecx
  unsigned char *v3; // edi
  char result; // al
  ShapeButtonClass *v5; // esi
  int *v6; // esi
  int v7; // eax
  ShapeButtonClass *v8; // eax
  int v9; // edx
  int v10; // edx
  int v12[6]; // [esp+Ch] [ebp-1Ch] BYREF
  char v13; // [esp+24h] [ebp-4h]

  v3 = v2; /*0x6d1664*/
  result = v2[21828]; /*0x6d1666*/
  if ( result ) /*0x6d166e*/
  {
    v5 = &stru_B0C1C0; /*0x6d1675*/
    do /*0x6d168b*/
    {
      (*(void (**)(unsigned char *, ShapeButtonClass *))(*(unsigned int *)v3 + 52))(v3, v5); /*0x6d167f*/
      v5 += 8; /*0x6d1682*/
    }
    while ( (int)v5 < (int)&dword_B0CB20 ); /*0x6d168b*/
    (*(void (**)(unsigned char *, GadgetClass *, int))(*(unsigned int *)v3 + 52))(v3, &stru_B0CCB0, a2); /*0x6d1696*/
    v6 = g_ObjectTrackingPool; /*0x6d1699*/
    do /*0x6d16d0*/
    {
      v7 = *v6; /*0x6d169e*/
      if ( *v6 >= 0 && v7 < 25 ) /*0x6d16a7*/
      {
        v8 = &stru_B0C1C0 + 8 * v7; /*0x6d16af*/
        if ( v8 ) /*0x6d16b6*/
          HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], *(unsigned int *)v8[3].__pad_0); /*0x6d16c2*/
      }
      ++v6; /*0x6d16c7*/
    }
    while ( (int)v6 < (int)byte_B0CBDC ); /*0x6d16d0*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 240); /*0x6d16dd*/
    v9 = *(unsigned int *)v3; /*0x6d16e2*/
    v3[21828] = 0; /*0x6d16eb*/
    (*(void (**)(unsigned char *, GadgetClass *))(v9 + 48))(v3, &stru_B0CC40); /*0x6d16f2*/
    if ( &stru_B0CC40 ) /*0x6d16fd*/
    {
      v12[1] = stru_B0CC40.Width; /*0x6d1710*/
      v12[2] = stru_B0CC40.Height; /*0x6d171a*/
      v12[3] = *(unsigned int *)&stru_B0CC40.Visible; /*0x6d1724*/
      v13 = 0; /*0x6d172f*/
      v12[0] = dword_B0CC64; /*0x6d1734*/
      v12[5] = (int)g_Str_Tip_ThumbClosed; /*0x6d1738*/
      v12[4] = stru_B0CC40.ID; /*0x6d1740*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], dword_B0CC64); /*0x6d1744*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)v12); /*0x6d1754*/
    }
    v10 = *(unsigned int *)v3; /*0x6d1759*/
    v3[21829] = 1; /*0x6d175f*/
    return (*(char (**)(unsigned char *, unsigned int))(v10 + 56))(v3, 0); /*0x6d1766*/
  }
  return result; /*0x6d1769*/
}
}
// 0x637A10
namespace gamemd {
char sub_637A10()
{
  char result; // al
  unsigned char v1[108]; // [esp-70h] [ebp-ECh] BYREF
  int v2; // [esp-4h] [ebp-80h]
  char v3[108]; // [esp+Ch] [ebp-70h] BYREF
  int16_t v4; // [esp+78h] [ebp-4h]
  char v5; // [esp+7Ah] [ebp-2h]

  result = byte_AC4CF4; /*0x637a10*/
  if ( byte_AC4CF4 ) /*0x637a1f*/
  {
    EventClass::AddEvent(v3, *((unsigned int *)dword_A83D4C + 12), 0x2Bu); /*0x637a30*/
    qmemcpy(v1, v3, sizeof(v1)); /*0x637a43*/
    IDA_LOWORD(v2) = v4; /*0x637a45*/
    IDA_BYTE2(v2) = v5; /*0x637a47*/
    Network::RecordEvent( /*0x637a48*/
      *(int64_t *)v1,
      *(int *)&v1[8],
      *(int *)&v1[12],
      *(int *)&v1[16],
      *(int *)&v1[20],
      *(int *)&v1[24],
      *(int *)&v1[28],
      *(int *)&v1[32],
      *(int *)&v1[36],
      *(int *)&v1[40],
      *(int *)&v1[44],
      *(int *)&v1[48],
      *(int *)&v1[52],
      *(int *)&v1[56],
      *(int *)&v1[60],
      *(int *)&v1[64],
      *(int *)&v1[68],
      *(int *)&v1[72],
      *(int *)&v1[76],
      *(int *)&v1[80],
      *(int *)&v1[84],
      *(int *)&v1[88],
      *(int *)&v1[92],
      *(int *)&v1[96],
      *(int *)&v1[100],
      *(int *)&v1[104],
      v2);
    dword_AC4CCC = 0; /*0x637a52*/
    dword_AC4C38 = 0; /*0x637a58*/
    dword_AC4BF0 = 0; /*0x637a5e*/
    byte_AC4CF4 = 0; /*0x637a64*/
    result = PlayVocClass(dword_8871E0->EnterBioReactorSound, 0x2000, 1.0, 0); /*0x637a7b*/
    if ( dword_AC4B80 ) /*0x637a88*/
      return (**(int (***)(int, int, unsigned int))dword_AC4B80)(dword_AC4B80, 4552, 0); /*0x637a92*/
  }
  return result; /*0x637a94*/
}
} // namespace gamemd
