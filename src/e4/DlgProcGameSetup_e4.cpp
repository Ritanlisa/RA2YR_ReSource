// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DiskLaserClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"

// 0x72B8E0
namespace gamemd {
char sub_72B8E0()
{
  char result; // al

  result = byte_B0FD5D; /*0x72b8e0*/
  if ( !byte_B0FD5D ) /*0x72b8e7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72b8f3*/
      dword_B0FB54 = LoadFileSHP(off_844DC4, (bool *)&byte_B0FD5C); /*0x72b905*/
    result = LoadPaletteSimple(off_844DC8, &dword_B0FD60, &dword_B0FD64); /*0x72b91a*/
    byte_B0FD5D = 1; /*0x72b91f*/
  }
  return result; /*0x72b926*/
}
} // namespace gamemd

// 0x72B930
namespace gamemd {
void sub_72B930()
{
  unsigned int v0;

  if ( byte_B0FD5D ) /*0x72b93a*/
  {
    if ( byte_B0FD5C ) /*0x72b942*/
    {
      v0 = dword_B0FB54; /*0x72b945*/
      if ( dword_B0FB54 ) /*0x72b94d*/
      {
        FileTreeNode::Destroy(dword_B0FB54); /*0x72b951*/
        RA2_OPDEL(v0); /*0x72b957*/
      }
      byte_B0FD5C = 0; /*0x72b95f*/
    }
    dword_B0FB54 = 0; /*0x72b96b*/
    if ( dword_B0FD60 ) /*0x72b973*/
    {
      RA2_OPDEL(dword_B0FD60); /*0x72b976*/
      dword_B0FD60 = 0; /*0x72b97e*/
    }
    if ( dword_B0FD64 ) /*0x72b98c*/
    {
      (**(void (__thiscall ***)(int, int))dword_B0FD64)(dword_B0FD64, 1); /*0x72b992*/
      dword_B0FD64 = 0; /*0x72b994*/
    }
  }
  byte_B0FD5D = 0; /*0x72b99a*/
}
} // namespace gamemd
