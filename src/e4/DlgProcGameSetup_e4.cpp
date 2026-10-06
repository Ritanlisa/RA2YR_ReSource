// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DiskLaserClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/FileTreeNode_e4.hpp"

// 0x72B8E0
namespace gamemd {
char sub_72B8E0()
{
  char result; // al

  result = byte_B0FD5D; /*0x72b8e0*/
  if ( !byte_B0FD5D ) /*0x72b8e7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72b8f3*/
      dword_B0FB54 = (unsigned int)(LoadFileSHP((char *)(off_844DC4),(bool *)((bool *)&byte_B0FD5C))); /*0x72b905*/
    result = LoadPaletteSimple( (char *)(off_844DC8), (int *)(&dword_B0FD60), (unsigned int *)(&dword_B0FD64)); /*0x72b91a*/
    byte_B0FD5D = 1; /*0x72b91f*/
  }
  return result; /*0x72b926*/
}
} // namespace gamemd

// 0x72B930
namespace gamemd {
void sub_72B930()
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1453] ) /*0x72b93a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1452] ) /*0x72b942*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[932]; /*0x72b945*/
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[932] ) /*0x72b94d*/
      {
        ((FileTreeNode *)(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[932]))->Destroy(); /*0x72b951*/
        RA2_OPDEL(v1); /*0x72b957*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1452] = 0; /*0x72b95f*/
    }
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[932] = 0; /*0x72b96b*/
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1456] ) /*0x72b973*/
    {
      RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1456]); /*0x72b976*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1456] = 0; /*0x72b97e*/
    }
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1460] ) /*0x72b98c*/
    {
      (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1460])( /*0x72b992*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1460],
        1);
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1460] = 0; /*0x72b994*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1453] = 0; /*0x72b99a*/
}
} // namespace gamemd
