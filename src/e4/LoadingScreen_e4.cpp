// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/LoadingScreen_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Lobby_e4.hpp"

// 0x642B60
namespace gamemd {
int LoadingScreen::GetColorScheme()
{

  if ( (g_abs_A8B238 == (unsigned char [1])((CellStruct *))3 || g_abs_A8B238 == (CellStruct *)4) /*0x642b7a*/
    && *(unsigned int *)(**(unsigned int **)&g_abs_A8D63C + 107) == -1 )
  {
    return FindBuildingAnimByName(&stru_830620.__pad_579C[4368], 1); /*0x642b86*/
  }
  if ( *((unsigned int *)this + 32) ) /*0x642b8b*/
    return FindBuildingAnimByName(&stru_830620.__pad_579C[4344], 1); /*0x642ba9*/
  return FindBuildingAnimByName(&stru_830620.__pad_579C[4356], 1);

}
} // namespace gamemd
// 0x72EF60
namespace gamemd {
void LoadingScreen::DestroyFileTrees()
{

  void *v0; // esi
  void *v1; // esi
  void *v2; // esi
  void *v3; // esi
  void *v4; // esi
  void *v5; // esi
  void *v6; // esi
  void *v7; // esi
  void *v8; // esi
  void *v9; // esi

  if ( g_abs_B0FC95 ) /*0x72ef6b*/
  {
    v0 = g_abs_B0FAC4; /*0x72ef6d*/
    if ( g_abs_B0FAC4 ) /*0x72ef75*/
    {
      FileTreeNode::Destroy(g_abs_B0FAC4); /*0x72ef79*/
      RA2_OPDEL(v0); /*0x72ef7f*/
    }
    g_abs_B0FC95 = 0; /*0x72ef87*/
  }
  g_abs_B0FAC4 = 0; /*0x72ef92*/
  if ( g_abs_B0FC96 ) /*0x72ef9a*/
  {
    v1 = g_abs_B0F9DC; /*0x72ef9c*/
    if ( g_abs_B0F9DC ) /*0x72efa4*/
    {
      FileTreeNode::Destroy(g_abs_B0F9DC); /*0x72efa8*/
      RA2_OPDEL(v1); /*0x72efae*/
    }
    g_abs_B0FC96 = 0; /*0x72efb6*/
  }
  g_abs_B0F9DC = 0; /*0x72efc1*/
  if ( g_abs_B0FC97 ) /*0x72efc9*/
  {
    v2 = g_abs_B0FAC0; /*0x72efcb*/
    if ( g_abs_B0FAC0 ) /*0x72efd3*/
    {
      FileTreeNode::Destroy(g_abs_B0FAC0); /*0x72efd7*/
      RA2_OPDEL(v2); /*0x72efdd*/
    }
    g_abs_B0FC97 = 0; /*0x72efe5*/
  }
  g_abs_B0FAC0 = 0; /*0x72eff0*/
  if ( g_abs_B0FC98 ) /*0x72eff8*/
  {
    v3 = g_abs_B0FB50; /*0x72effa*/
    if ( g_abs_B0FB50 ) /*0x72f002*/
    {
      FileTreeNode::Destroy(g_abs_B0FB50); /*0x72f006*/
      RA2_OPDEL(v3); /*0x72f00c*/
    }
    g_abs_B0FC98 = 0; /*0x72f014*/
  }
  g_abs_B0FB50 = 0; /*0x72f01f*/
  if ( g_abs_B0FC99 ) /*0x72f027*/
  {
    v4 = g_abs_B0FA04; /*0x72f029*/
    if ( g_abs_B0FA04 ) /*0x72f031*/
    {
      FileTreeNode::Destroy(g_abs_B0FA04); /*0x72f035*/
      RA2_OPDEL(v4); /*0x72f03b*/
    }
    g_abs_B0FC99 = 0; /*0x72f043*/
  }
  g_abs_B0FA04 = 0; /*0x72f04e*/
  if ( g_abs_B0FC9A ) /*0x72f056*/
  {
    v5 = g_abs_B0FAF8; /*0x72f058*/
    if ( g_abs_B0FAF8 ) /*0x72f060*/
    {
      FileTreeNode::Destroy(g_abs_B0FAF8); /*0x72f064*/
      RA2_OPDEL(v5); /*0x72f06a*/
    }
    g_abs_B0FC9A = 0; /*0x72f072*/
  }
  g_abs_B0FAF8 = 0; /*0x72f07d*/
  if ( g_abs_B0FC9B ) /*0x72f085*/
  {
    v6 = g_abs_B0FA74; /*0x72f087*/
    if ( g_abs_B0FA74 ) /*0x72f08f*/
    {
      FileTreeNode::Destroy(g_abs_B0FA74); /*0x72f093*/
      RA2_OPDEL(v6); /*0x72f099*/
    }
    g_abs_B0FC9B = 0; /*0x72f0a1*/
  }
  g_abs_B0FA74 = 0; /*0x72f0ac*/
  if ( g_abs_B0FC9C ) /*0x72f0b4*/
  {
    v7 = g_abs_B0FA38; /*0x72f0b6*/
    if ( g_abs_B0FA38 ) /*0x72f0be*/
    {
      FileTreeNode::Destroy(g_abs_B0FA38); /*0x72f0c2*/
      RA2_OPDEL(v7); /*0x72f0c8*/
    }
    g_abs_B0FC9C = 0; /*0x72f0d0*/
  }
  g_abs_B0FA38 = 0; /*0x72f0db*/
  if ( g_abs_B0FC9D ) /*0x72f0e3*/
  {
    v8 = g_abs_B0FAE8; /*0x72f0e5*/
    if ( g_abs_B0FAE8 ) /*0x72f0ed*/
    {
      FileTreeNode::Destroy(g_abs_B0FAE8); /*0x72f0f1*/
      RA2_OPDEL(v8); /*0x72f0f7*/
    }
    g_abs_B0FC9D = 0; /*0x72f0ff*/
  }
  g_abs_B0FAE8 = 0; /*0x72f10a*/
  if ( g_abs_B0FC9E ) /*0x72f112*/
  {
    v9 = g_abs_B0FA54; /*0x72f114*/
    if ( g_abs_B0FA54 ) /*0x72f11c*/
    {
      FileTreeNode::Destroy(g_abs_B0FA54); /*0x72f120*/
      RA2_OPDEL(v9); /*0x72f126*/
    }
    g_abs_B0FC9E = 0; /*0x72f12e*/
  }
  g_abs_B0FA54 = 0; /*0x72f134*/

}
} // namespace gamemd
// 0x72FA10
namespace gamemd {
void * * LoadingScreen::LoadSHPs()
{

  void *SHP; // eax
  unsigned int v1;
  void *result; // eax

  if ( *((unsigned int *)g_abs_A8B230 + 3374) == 2 ) /*0x72fa21*/
  {
    g_abs_B0FA68 = (char *)(LoadFileSHP(g_abs_844D48, (bool *)&g_abs_B0FCA5));
    g_abs_B0FAC8 = (char *)(LoadFileSHP(g_abs_844D3C, (bool *)&g_abs_B0FCA1));
    SHP = (char *)(LoadFileSHP(g_abs_844D40, (bool *)&g_abs_B0FCA0));
    v1 = g_abs_844D44[0]; /*0x72fa58*/
  }
  else
  {
    g_abs_B0FA68 = (char *)(LoadFileSHP(g_abs_844D14, (bool *)&g_abs_B0FCA5));
    g_abs_B0FAC8 = (char *)(LoadFileSHP(g_abs_844D04, (bool *)&g_abs_B0FCA1));
    SHP = (char *)(LoadFileSHP(g_abs_844D00, (bool *)&g_abs_B0FCA0));
    v1 = (unsigned int)(g_abs_844D08);
  }
  g_abs_B0FAD4 = (void **)(SHP);
  g_abs_B0FA50 = (void **)(LoadFileSHP(v1, (bool *)&g_abs_B0FCA2));
  g_abs_B0F9EC = (void **)(LoadFileSHP(g_abs_844CFC, (bool *)&g_abs_B0FC9F));
  g_abs_B0FB08 = (void **)(LoadFileSHP(g_abs_844D0C, (bool *)&g_abs_B0FCA3));
  g_abs_B0F9E0 = (void **)(LoadFileSHP(g_abs_844D10, (bool *)&g_abs_B0FCA4));
  g_abs_B0FA70 = (void **)(LoadFileSHP(g_abs_844D18, (bool *)&g_abs_B0FCA6));
  g_abs_B0FAFC = (void **)(LoadFileSHP(g_abs_844D1C, (bool *)&g_abs_B0FCA7));
  g_abs_B0FA00 = (void **)(LoadFileSHP(g_abs_844D20, (bool *)&g_abs_B0FCA8));
  g_abs_B0FA8C = (void **)(LoadFileSHP(g_abs_844D24, (bool *)&g_abs_B0FCA9));
  g_abs_B0FA48 = (void **)(LoadFileSHP(g_abs_844D28, (bool *)&g_abs_B0FCAA));
  g_abs_B0FA3C = (void **)(LoadFileSHP(g_abs_844D2C, (bool *)&g_abs_B0FCAB));
  g_abs_B0FA90 = (void **)(LoadFileSHP(g_abs_844D30, (bool *)&g_abs_B0FCAC));
  g_abs_B0FAA8 = LoadFileSHP(g_abs_844D34, (bool *)&g_abs_B0FCAD); /*0x72fba6*/
  result = LoadFileSHP(g_abs_844D38, (bool *)&g_abs_B0FCAE); /*0x72fbab*/
  g_abs_B0FABC = result; /*0x72fbb0*/
  return result; /*0x72fbb5*/

}
} // namespace gamemd
// 0x72B2F0
namespace gamemd {
char * LoadingScreen::GetBackgroundImage(ScenarioClass * aP1)
{

  char *result; // eax

  result = *(char **)&stru_830620.__pad_579C[61048]; /*0x72b2f0*/
  if ( this != (void *)640 ) /*0x72b2fb*/
    return *(char **)&stru_830620.__pad_579C[61052]; /*0x72b2fd*/
  return result; /*0x72b302*/

}
} // namespace gamemd
// 0x72B310
namespace gamemd {
char * LoadingScreen::GetOverlayImage(ScenarioClass * aP1)
{

  char *result; // eax

  result = *(char **)&stru_830620.__pad_579C[61056]; /*0x72b310*/
  if ( this != (void *)640 ) /*0x72b31b*/
    return *(char **)&stru_830620.__pad_579C[61060]; /*0x72b31d*/
  return result; /*0x72b322*/

}
} // namespace gamemd
// 0x72B390
namespace gamemd {
int LoadingScreen::ReleaseAnimObjects(char * Source)
{

  if ( g_abs_B0FB88 ) /*0x72b39b*/
  {
    (**(void (***)(int, int))g_abs_B0FB88)(g_abs_B0FB88, 1); /*0x72b3a1*/
    g_abs_B0FB88 = 0; /*0x72b3a3*/
  }
  if ( g_abs_B0FB84 ) /*0x72b3b4*/
  {
    RA2_OPDEL(g_abs_B0FB84); /*0x72b3b7*/
    g_abs_B0FB84 = 0; /*0x72b3bf*/
  }
  return LoadPaletteSimple(Source, &g_abs_B0FB84, &g_abs_B0FB88); /*0x72b3da*/

}
} // namespace gamemd
// 0x72CF40
namespace gamemd {
char LoadingScreen::Init()
{

  char result; // al

  result = (char)(g_abs_B0FCD9);
  if ( !g_abs_B0FCD9 ) /*0x72cf47*/
  {
    if ( g_abs_8A00A4 == (unsigned char [1])((unsigned char [1]))(800) ) /*0x72cf53*/
      g_abs_B0FA18 = LoadFileSHP(g_abs_844D6C, (bool *)&g_abs_B0FCD8); /*0x72cf65*/
    result = LoadPaletteSimple(g_abs_844D70, &g_abs_B0FCDC, &g_abs_B0FCE0); /*0x72cf7a*/
    g_abs_B0FCD9 = 1; /*0x72cf7f*/
  }
  return result; /*0x72cf86*/

}
} // namespace gamemd
// 0x72DEF0
namespace gamemd {
char LoadingScreen::FreeResources3()
{

  char result; // al

  result = (char)(g_abs_B0FBE0);
  if ( g_abs_B0FBE0 ) /*0x72defa*/
  {
    g_abs_B0FBE0 = 0; /*0x72df00*/
    LoadingScreen::DestroyFileTrees(); /*0x72df06*/
    LoadingScreen::CleanupObjects(); /*0x72df0b*/
    RA2_OPDEL(g_abs_B0FC10); /*0x72df16*/
    g_abs_B0FC10 = 0; /*0x72df21*/
    RA2_OPDEL(g_abs_B0FC14); /*0x72df28*/
    g_abs_B0FC14 = 0; /*0x72df33*/
    RA2_OPDEL(g_abs_B0FC18); /*0x72df3a*/
    g_abs_B0FC18 = 0; /*0x72df44*/
    RA2_OPDEL(g_abs_B0FC1C); /*0x72df4b*/
    g_abs_B0FC1C = 0; /*0x72df56*/
    RA2_OPDEL(g_abs_B0FC20); /*0x72df5d*/
    g_abs_B0FC20 = 0; /*0x72df68*/
    RA2_OPDEL(g_abs_B0FC24); /*0x72df6f*/
    g_abs_B0FC24 = 0; /*0x72df79*/
    RA2_OPDEL(g_abs_B0FC28); /*0x72df80*/
    g_abs_B0FC28 = 0; /*0x72df8b*/
    RA2_OPDEL(g_abs_B0FC2C); /*0x72df92*/
    g_abs_B0FC2C = 0; /*0x72df9a*/
    return ReleaseLoadingResources(); /*0x72dfa0*/
  }
  return result; /*0x72dfa5*/

}
} // namespace gamemd
// 0x72F140
namespace gamemd {
char LoadingScreen::CleanupObjects()
{

  if ( g_abs_B0FBC8 ) /*0x72f14a*/
  {
    RA2_OPDEL(g_abs_B0FBC8); /*0x72f14d*/
    g_abs_B0FBC8 = 0; /*0x72f155*/
  }
  if ( g_abs_B0FBCC ) /*0x72f163*/
  {
    (**(void (***)(int, int))g_abs_B0FBCC)(g_abs_B0FBCC, 1); /*0x72f169*/
    g_abs_B0FBCC = 0; /*0x72f16b*/
  }
  if ( g_abs_B0FBD0 ) /*0x72f178*/
  {
    RA2_OPDEL(g_abs_B0FBD0); /*0x72f17b*/
    g_abs_B0FBD0 = 0; /*0x72f183*/
  }
  if ( g_abs_B0FBD4 ) /*0x72f191*/
  {
    (**(void (***)(int, int))g_abs_B0FBD4)(g_abs_B0FBD4, 1); /*0x72f197*/
    g_abs_B0FBD4 = 0; /*0x72f199*/
  }
  if ( g_abs_B0FBD8 ) /*0x72f1a6*/
  {
    RA2_OPDEL(g_abs_B0FBD8); /*0x72f1a9*/
    g_abs_B0FBD8 = 0; /*0x72f1b1*/
  }
  if ( g_abs_B0FBDC ) /*0x72f1bf*/
  {
    (**(void (***)(int, int))g_abs_B0FBDC)(g_abs_B0FBDC, 1); /*0x72f1c5*/
    g_abs_B0FBDC = 0; /*0x72f1c7*/
  }

}
} // namespace gamemd
// 0x730400
namespace gamemd {
char LoadingScreen::FreeResources()
{

  int result; // eax

  if ( g_abs_B0FC04 ) /*0x73040a*/
  {
    RA2_OPDEL(g_abs_B0FC04); /*0x73040d*/
    g_abs_B0FC04 = 0; /*0x730415*/
  }
  HashTree::MarkEntry(g_abs_844C08); /*0x730421*/
  if ( g_abs_B0FC08 ) /*0x73042e*/
  {
    (**(void (***)(int, int))g_abs_B0FC08)(g_abs_B0FC08, 1); /*0x730434*/
    g_abs_B0FC08 = 0; /*0x730436*/
  }
  if ( g_abs_B0FBFC ) /*0x730443*/
  {
    RA2_OPDEL(g_abs_B0FBFC); /*0x730446*/
    g_abs_B0FBFC = 0; /*0x73044e*/
  }
  HashTree::MarkEntry(g_abs_844C04); /*0x73045a*/
  if ( g_abs_B0FC00 ) /*0x730467*/
  {
    (**(void (***)(int, int))g_abs_B0FC00)(g_abs_B0FC00, 1); /*0x73046d*/
    g_abs_B0FC00 = 0; /*0x73046f*/
  }
  if ( g_abs_B0FBF4 ) /*0x73047c*/
  {
    RA2_OPDEL(g_abs_B0FBF4); /*0x73047f*/
    g_abs_B0FBF4 = 0; /*0x730487*/
  }
  HashTree::MarkEntry(g_abs_844C00); /*0x730493*/
  if ( g_abs_B0FBF8 ) /*0x7304a0*/
  {
    (**(void (***)(int, int))g_abs_B0FBF8)(g_abs_B0FBF8, 1); /*0x7304a6*/
    g_abs_B0FBF8 = 0; /*0x7304a8*/
  }
  if ( g_abs_B0FBE4 ) /*0x7304b5*/
  {
    RA2_OPDEL(g_abs_B0FBE4); /*0x7304b8*/
    g_abs_B0FBE4 = 0; /*0x7304c0*/
  }
  HashTree::MarkEntry(g_abs_844BF0); /*0x7304cc*/
  if ( g_abs_B0FBE8 ) /*0x7304d9*/
  {
    (**(void (***)(int, int))g_abs_B0FBE8)(g_abs_B0FBE8, 1); /*0x7304df*/
    g_abs_B0FBE8 = 0; /*0x7304e1*/
  }
  if ( g_abs_B0FBEC ) /*0x7304ee*/
  {
    RA2_OPDEL(g_abs_B0FBEC); /*0x7304f1*/
    g_abs_B0FBEC = 0; /*0x7304f9*/
  }
  result = HashTree::MarkEntry(g_abs_844BF4); /*0x730505*/
  if ( g_abs_B0FBF0 ) /*0x730512*/
  {
    result = (**(int (***)(int, int))g_abs_B0FBF0)(g_abs_B0FBF0, 1); /*0x730518*/
    g_abs_B0FBF0 = 0; /*0x73051a*/
  }
  return result; /*0x730520*/

}
} // namespace gamemd
// 0x730530
namespace gamemd {
void LoadingScreen::FreeResources2()
{

  RA2_OPDEL(g_abs_B0FC30); /*0x730537*/
  g_abs_B0FC30 = 0; /*0x730545*/
  RA2_OPDEL(g_abs_B0FC34); /*0x73054b*/
  g_abs_B0FC34 = 0; /*0x730556*/
  RA2_OPDEL(g_abs_B0FC38); /*0x73055d*/
  g_abs_B0FC38 = 0; /*0x730567*/
  RA2_OPDEL(g_abs_B0FC3C); /*0x73056e*/
  g_abs_B0FC3C = 0; /*0x730579*/
  RA2_OPDEL(g_abs_B0FC40); /*0x730580*/
  g_abs_B0FC40 = 0; /*0x73058b*/
  RA2_OPDEL(g_abs_B0FC44); /*0x730592*/
  g_abs_B0FC44 = 0; /*0x73059c*/
  RA2_OPDEL(g_abs_B0FC48); /*0x7305a3*/
  g_abs_B0FC48 = 0; /*0x7305ae*/
  RA2_OPDEL(g_abs_B0FC4C); /*0x7305b5*/
  g_abs_B0FC4C = 0; /*0x7305c0*/
  RA2_OPDEL(g_abs_B0FC50); /*0x7305c7*/
  g_abs_B0FC50 = 0; /*0x7305d1*/
  RA2_OPDEL(g_abs_B0FC54); /*0x7305d8*/
  g_abs_B0FC54 = 0; /*0x7305e3*/
  RA2_OPDEL(g_abs_B0FC58); /*0x7305ea*/
  g_abs_B0FC58 = 0; /*0x7305f5*/
  RA2_OPDEL(g_abs_B0FC5C); /*0x7305fc*/
  g_abs_B0FC5C = 0; /*0x730606*/
  RA2_OPDEL(g_abs_B0FC60); /*0x73060d*/
  g_abs_B0FC60 = 0; /*0x730618*/
  RA2_OPDEL(g_abs_B0FC64); /*0x73061f*/
  g_abs_B0FC64 = 0; /*0x73062a*/
  RA2_OPDEL(g_abs_B0FC68); /*0x730631*/
  g_abs_B0FC68 = 0; /*0x73063b*/
  RA2_OPDEL(g_abs_B0FC6C); /*0x730642*/
  g_abs_B0FC6C = 0; /*0x73064a*/

}
} // namespace gamemd