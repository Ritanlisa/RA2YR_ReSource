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
namespace gamemd {  // G42.18 ns repair
char sub_72B8E0()
{

  char result = byte_B0FD5D; // al /*0x72b8e0*/
  if ( !byte_B0FD5D ) /*0x72b8e7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72b8f3*/
      dword_B0FB54 = (unsigned int)(LoadFileSHP((char *)(off_844DC4), (bool *)&byte_B0FD5C)); /*0x72b905*/
    result = LoadPaletteSimple((char *)(off_844DC8), &dword_B0FD60, &dword_B0FD64); /*0x72b91a*/
    byte_B0FD5D = 1; /*0x72b91f*/
  }
  return result; /*0x72b926*/
}  // G42.18 ns repair
} // namespace gamemd

// 0x72B930
namespace gamemd {
void sub_72B930()
{

  if ( DataGlobal_B0FD5D ) /*0x72b93a*/
  {
    if ( DataGlobal_B0FD5C ) /*0x72b942*/
    {
      void *v1; // esi
      v1 = *(void **)&DataGlobal_B0FB54; /*0x72b945*/
      if ( *(unsigned int *)&DataGlobal_B0FB54 ) /*0x72b94d*/
      {
        (*(FileTreeNode **)&DataGlobal_B0FB54)->Destroy(); /*0x72b951*/
        operator delete((void *)(v1)); /*0x72b957*/
      }
      DataGlobal_B0FD5C = 0; /*0x72b95f*/
    }
    *(unsigned int *)&DataGlobal_B0FB54 = 0; /*0x72b96b*/
    if ( *(unsigned int *)&DataGlobal_B0FD60 ) /*0x72b973*/
    {
      operator delete((void *)(*(void **)&DataGlobal_B0FD60)); /*0x72b976*/
      *(unsigned int *)&DataGlobal_B0FD60 = 0; /*0x72b97e*/
    }
    if ( *(unsigned int *)&DataGlobal_B0FD64 ) /*0x72b98c*/
    {
      (***(void (****)(unsigned int, int))&DataGlobal_B0FD64)( /*0x72b992*/
        *(unsigned int *)&DataGlobal_B0FD64,
        1);
      *(unsigned int *)&DataGlobal_B0FD64 = 0; /*0x72b994*/
    }
  }
  DataGlobal_B0FD5D = 0; /*0x72b99a*/
}
} // namespace gamemd
