// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/GameLoop_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/AbstractType_e4.hpp"
#include "e4/classes/MPBattleClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/FileTreeNode_e4.hpp"

// 0x786EF0
namespace gamemd {
char sub_786EF0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x786EF0)
}
}
// 0x72BCA0
namespace gamemd {
char sub_72BCA0()
{
  char result; // al

  result = (unsigned int)(byte_B0FD45);
  if ( !byte_B0FD45 ) /*0x72bca7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72bcb3*/
      dword_B0FA98 = (unsigned int)(LoadFileSHP((gamemd::ConvertClass *)(off_844DB4),(gamemd::ConvertClass *)((bool *)&byte_B0FD44))); /*0x72bcc5*/
    result = LoadPaletteSimple((char *)(off_844DB8),(int *)(&dword_B0FD48), &dword_B0FD4C); /*0x72bcda*/
    byte_B0FD45 = 1; /*0x72bcdf*/
  }
  return result; /*0x72bce6*/
}
} // namespace gamemd

// 0x72BCF0
namespace gamemd {
void sub_72BCF0()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72BCF0)
}
} // namespace gamemd

// 0x72C600
namespace gamemd {
char sub_72C600()
{
  char result; // al

  result = (unsigned int)(byte_B0FD09);
  if ( !byte_B0FD09 ) /*0x72c607*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c613*/
      dword_B0FB0C = (unsigned int)(LoadFileSHP((gamemd::ConvertClass *)(off_844D8C),(gamemd::ConvertClass *)((bool *)&byte_B0FD08))); /*0x72c625*/
    result = LoadPaletteSimple((char *)(off_844D90),(int *)(&dword_B0FD0C), &dword_B0FD10); /*0x72c63a*/
    byte_B0FD09 = 1; /*0x72c63f*/
  }
  return result; /*0x72c646*/
}
} // namespace gamemd

// 0x72C650
namespace gamemd {
void sub_72C650()
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1369] ) /*0x72c65a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1368] ) /*0x72c662*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[860]; /*0x72c665*/
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[860] ) /*0x72c66d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[860]); /*0x72c671*/
        RA2_OPDEL(v1); /*0x72c677*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1368] = 0; /*0x72c67f*/
    }
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[860] = 0; /*0x72c68b*/
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1372] ) /*0x72c693*/
    {
      RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1372]); /*0x72c696*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1372] = 0; /*0x72c69e*/
    }
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1376] ) /*0x72c6ac*/
    {
      (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1376])( /*0x72c6b2*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1376],
        1);
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1376] = 0; /*0x72c6b4*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1369] = 0; /*0x72c6ba*/
}
} // namespace gamemd

// 0x786390
namespace gamemd {
int sub_786390(void * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x786390)
}
} // namespace gamemd
