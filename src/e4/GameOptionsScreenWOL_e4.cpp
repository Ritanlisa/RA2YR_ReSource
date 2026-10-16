// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7AE7C0_e4.hpp"
#include "e4/classes/E4Recv_7AE8E0_e4.hpp"
#include "e4/classes/GameMode_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/GameOption_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/FileTreeNode_e4.hpp"

// 0x798340
namespace gamemd {  // G42.18 ns repair
int sub_798340()
{

  HANDLE *v0; // esi
  v0 = (HANDLE *)(&Handles);
  BOOL result; // eax
  do /*0x79835b*/
    result = ResetEvent(*v0++); /*0x798350*/
  while ( (int)v0 < (int)g_WOL_RequestObject ); /*0x79835b*/
  return result; /*0x79835d*/
}
}  // G42.18 ns repair
// 0x72C060
namespace gamemd {
char sub_72C060()
{

  char result = byte_B0FD2D; // al /*0x72c060*/
  if ( !byte_B0FD2D ) /*0x72c067*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c073*/
      dword_B0FA4C = (unsigned int)(LoadFileSHP(off_844DA4, (bool *)&byte_B0FD2C)); /*0x72c085*/
    result = LoadPaletteSimple(off_844DA8, &dword_B0FD30, &dword_B0FD34); /*0x72c09a*/
    byte_B0FD2D = 1; /*0x72c09f*/
  }
  return result; /*0x72c0a6*/
}
} // namespace gamemd

// 0x72C0B0
namespace gamemd {
void sub_72C0B0()
{

  if ( DataGlobal_B0FD2D ) /*0x72c0ba*/
  {
    if ( DataGlobal_B0FD2C ) /*0x72c0c2*/
    {
      void *v1; // esi
      v1 = *(void **)&DataGlobal_B0FA4C; /*0x72c0c5*/
      if ( *(unsigned int *)&DataGlobal_B0FA4C ) /*0x72c0cd*/
      {
        (*(FileTreeNode **)&DataGlobal_B0FA4C)->Destroy(); /*0x72c0d1*/
        operator delete((void *)(v1)); /*0x72c0d7*/
      }
      DataGlobal_B0FD2C = 0; /*0x72c0df*/
    }
    *(unsigned int *)&DataGlobal_B0FA4C = 0; /*0x72c0eb*/
    if ( *(unsigned int *)&DataGlobal_B0FD30 ) /*0x72c0f3*/
    {
      operator delete((void *)(*(void **)&DataGlobal_B0FD30)); /*0x72c0f6*/
      *(unsigned int *)&DataGlobal_B0FD30 = 0; /*0x72c0fe*/
    }
    if ( *(unsigned int *)&DataGlobal_B0FD34 ) /*0x72c10c*/
    {
      (***(void (****)(unsigned int, int))&DataGlobal_B0FD34)( /*0x72c112*/
        *(unsigned int *)&DataGlobal_B0FD34,
        1);
      *(unsigned int *)&DataGlobal_B0FD34 = 0; /*0x72c114*/
    }
  }
  DataGlobal_B0FD2D = 0; /*0x72c11a*/
}
} // namespace gamemd
