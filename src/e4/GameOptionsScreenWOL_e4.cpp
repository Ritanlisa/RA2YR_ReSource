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
namespace gamemd {
int sub_798340()
{
  HANDLE *v0; // esi
  BOOL result; // eax

  v0 = (HANDLE *)(&Handles);
  do /*0x79835b*/
    result = ResetEvent(*v0++); /*0x798350*/
  while ( (int)v0 < (int)g_WOL_RequestObject ); /*0x79835b*/
  return result; /*0x79835d*/
}
}
// 0x72C060
namespace gamemd {
char sub_72C060()
{
  char result; // al

  result = byte_B0FD2D; /*0x72c060*/
  if ( !byte_B0FD2D ) /*0x72c067*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c073*/
      dword_B0FA4C = (unsigned int)(LoadFileSHP((char *)(off_844DA4),(bool *)((bool *)&byte_B0FD2C))); /*0x72c085*/
    result = LoadPaletteSimple( (char *)(off_844DA8), (int *)(&dword_B0FD30), (unsigned int *)(&dword_B0FD34)); /*0x72c09a*/
    byte_B0FD2D = 1; /*0x72c09f*/
  }
  return result; /*0x72c0a6*/
}
} // namespace gamemd

// 0x72C0B0
namespace gamemd {
void sub_72C0B0()
{
  void *v1; // esi

  if ( &byte_B0FD2D ) /*0x72c0ba*/
  {
    if ( &byte_B0FD2C ) /*0x72c0c2*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[668]; /*0x72c0c5*/
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[668] ) /*0x72c0cd*/
      {
        ((FileTreeNode *)(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[668]))->Destroy(); /*0x72c0d1*/
        RA2_OPDEL(v1); /*0x72c0d7*/
      }
      &byte_B0FD2C = 0; /*0x72c0df*/
    }
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[668] = 0; /*0x72c0eb*/
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1408] ) /*0x72c0f3*/
    {
      RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1408]); /*0x72c0f6*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1408] = 0; /*0x72c0fe*/
    }
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1412] ) /*0x72c10c*/
    {
      (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1412])( /*0x72c112*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1412],
        1);
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1412] = 0; /*0x72c114*/
    }
  }
  &byte_B0FD2D = 0; /*0x72c11a*/
}
} // namespace gamemd
