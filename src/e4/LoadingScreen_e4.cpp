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

// 0x642B60
namespace gamemd {
int LoadingScreen::GetColorScheme()
{
  if ( (g_GameMode_Current == 3 || g_GameMode_Current == 4) && *(unsigned int *)(*(unsigned int *)Game_PlayerInfoArray + 107) == -1 ) /*0x642b7a*/
    return FindBuildingAnimByName(g_INI_Key_LightGrey, 1); /*0x642b86*/
  if ( *(&this->q00C2) ) /*0x642b8b*/
    return FindBuildingAnimByName(g_INI_Key_SovietLoad, 1); /*0x642ba9*/
  return FindBuildingAnimByName(g_INI_Key_AlliedLoad, 1);
}
} // namespace gamemd
// 0x72EF60
namespace gamemd {
void LoadingScreen::DestroyFileTrees()
{
  unsigned int v0;
  unsigned int v1;
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;

  if ( byte_B0FC95 ) /*0x72ef6b*/
  {
    v0 = dword_B0FAC4; /*0x72ef6d*/
    if ( dword_B0FAC4 ) /*0x72ef75*/
    {
      FileTreeNode::Destroy(dword_B0FAC4); /*0x72ef79*/
      RA2_OPDEL(v0); /*0x72ef7f*/
    }
    byte_B0FC95 = 0; /*0x72ef87*/
  }
  dword_B0FAC4 = 0; /*0x72ef92*/
  if ( byte_B0FC96 ) /*0x72ef9a*/
  {
    v1 = dword_B0F9DC; /*0x72ef9c*/
    if ( dword_B0F9DC ) /*0x72efa4*/
    {
      FileTreeNode::Destroy(dword_B0F9DC); /*0x72efa8*/
      RA2_OPDEL(v1); /*0x72efae*/
    }
    byte_B0FC96 = 0; /*0x72efb6*/
  }
  dword_B0F9DC = 0; /*0x72efc1*/
  if ( byte_B0FC97 ) /*0x72efc9*/
  {
    v2 = dword_B0FAC0; /*0x72efcb*/
    if ( dword_B0FAC0 ) /*0x72efd3*/
    {
      FileTreeNode::Destroy(dword_B0FAC0); /*0x72efd7*/
      RA2_OPDEL(v2); /*0x72efdd*/
    }
    byte_B0FC97 = 0; /*0x72efe5*/
  }
  dword_B0FAC0 = 0; /*0x72eff0*/
  if ( byte_B0FC98 ) /*0x72eff8*/
  {
    v3 = g_DialogControlPool; /*0x72effa*/
    if ( g_DialogControlPool ) /*0x72f002*/
    {
      FileTreeNode::Destroy(g_DialogControlPool); /*0x72f006*/
      RA2_OPDEL(v3); /*0x72f00c*/
    }
    byte_B0FC98 = 0; /*0x72f014*/
  }
  g_DialogControlPool = 0; /*0x72f01f*/
  if ( byte_B0FC99 ) /*0x72f027*/
  {
    v4 = dword_B0FA04; /*0x72f029*/
    if ( dword_B0FA04 ) /*0x72f031*/
    {
      FileTreeNode::Destroy(dword_B0FA04); /*0x72f035*/
      RA2_OPDEL(v4); /*0x72f03b*/
    }
    byte_B0FC99 = 0; /*0x72f043*/
  }
  dword_B0FA04 = 0; /*0x72f04e*/
  if ( byte_B0FC9A ) /*0x72f056*/
  {
    v5 = dword_B0FAF8; /*0x72f058*/
    if ( dword_B0FAF8 ) /*0x72f060*/
    {
      FileTreeNode::Destroy(dword_B0FAF8); /*0x72f064*/
      RA2_OPDEL(v5); /*0x72f06a*/
    }
    byte_B0FC9A = 0; /*0x72f072*/
  }
  dword_B0FAF8 = 0; /*0x72f07d*/
  if ( byte_B0FC9B ) /*0x72f085*/
  {
    v6 = dword_B0FA74; /*0x72f087*/
    if ( dword_B0FA74 ) /*0x72f08f*/
    {
      FileTreeNode::Destroy(dword_B0FA74); /*0x72f093*/
      RA2_OPDEL(v6); /*0x72f099*/
    }
    byte_B0FC9B = 0; /*0x72f0a1*/
  }
  dword_B0FA74 = 0; /*0x72f0ac*/
  if ( byte_B0FC9C ) /*0x72f0b4*/
  {
    v7 = dword_B0FA38; /*0x72f0b6*/
    if ( dword_B0FA38 ) /*0x72f0be*/
    {
      FileTreeNode::Destroy(dword_B0FA38); /*0x72f0c2*/
      RA2_OPDEL(v7); /*0x72f0c8*/
    }
    byte_B0FC9C = 0; /*0x72f0d0*/
  }
  dword_B0FA38 = 0; /*0x72f0db*/
  if ( byte_B0FC9D ) /*0x72f0e3*/
  {
    v8 = dword_B0FAE8; /*0x72f0e5*/
    if ( dword_B0FAE8 ) /*0x72f0ed*/
    {
      FileTreeNode::Destroy(dword_B0FAE8); /*0x72f0f1*/
      RA2_OPDEL(v8); /*0x72f0f7*/
    }
    byte_B0FC9D = 0; /*0x72f0ff*/
  }
  dword_B0FAE8 = 0; /*0x72f10a*/
  if ( byte_B0FC9E ) /*0x72f112*/
  {
    v9 = dword_B0FA54; /*0x72f114*/
    if ( dword_B0FA54 ) /*0x72f11c*/
    {
      FileTreeNode::Destroy(dword_B0FA54); /*0x72f120*/
      RA2_OPDEL(v9); /*0x72f126*/
    }
    byte_B0FC9E = 0; /*0x72f12e*/
  }
  dword_B0FA54 = 0; /*0x72f134*/
}
} // namespace gamemd
// 0x72FA10
namespace gamemd {
void * * LoadingScreen::LoadSHPs()
{
  void *SHP; // eax
  char *v1; // ecx
  void *result; // eax

  if ( *((unsigned int *)g_ScenarioClass_Instance + 3374) == 2 ) /*0x72fa21*/
  {
    dword_B0FA68 = (unsigned int)((char *)(LoadFileSHP(off_844D48, (bool *)&byte_B0FCA5)));
    dword_B0FAC8 = (unsigned int)((char *)(LoadFileSHP(off_844D3C, (bool *)&byte_B0FCA1)));
    SHP = (char *)(LoadFileSHP(off_844D40, (bool *)&byte_B0FCA0));
    v1 = (char *)(off_844D44[0]);
  }
  else
  {
    dword_B0FA68 = (unsigned int)((char *)(LoadFileSHP(off_844D14, (bool *)&byte_B0FCA5)));
    dword_B0FAC8 = (unsigned int)((char *)(LoadFileSHP(off_844D04, (bool *)&byte_B0FCA1)));
    SHP = (char *)(LoadFileSHP(off_844D00, (bool *)&byte_B0FCA0));
    v1 = (char *)(off_844D08);
  }
  dword_B0FAD4 = (unsigned int)((void **)(SHP));
  dword_B0FA50 = (unsigned int)((void **)(LoadFileSHP(v1, (bool *)&byte_B0FCA2)));
  dword_B0F9EC = (unsigned int)((void **)(LoadFileSHP(off_844CFC, (bool *)&byte_B0FC9F)));
  dword_B0FB08 = (unsigned int)((void **)(LoadFileSHP(off_844D0C, (bool *)&byte_B0FCA3)));
  dword_B0F9E0 = (unsigned int)((void **)(LoadFileSHP(off_844D10, (bool *)&byte_B0FCA4)));
  dword_B0FA70 = (unsigned int)((void **)(LoadFileSHP(off_844D18, (bool *)&byte_B0FCA6)));
  dword_B0FAFC = (unsigned int)((void **)(LoadFileSHP(off_844D1C, (bool *)&byte_B0FCA7)));
  dword_B0FA00 = (unsigned int)((void **)(LoadFileSHP(off_844D20, (bool *)&byte_B0FCA8)));
  dword_B0FA8C = (unsigned int)((void **)(LoadFileSHP(off_844D24, (bool *)&byte_B0FCA9)));
  dword_B0FA48 = (unsigned int)((void **)(LoadFileSHP(off_844D28, (bool *)&byte_B0FCAA)));
  dword_B0FA3C = (unsigned int)((void **)(LoadFileSHP(off_844D2C, (bool *)&byte_B0FCAB)));
  dword_B0FA90 = (unsigned int)((void **)(LoadFileSHP(off_844D30, (bool *)&byte_B0FCAC)));
  dword_B0FAA8 = (unsigned int)((void **)(LoadFileSHP(off_844D34, (bool *)&byte_B0FCAD)));
  result = (void **)(LoadFileSHP(off_844D38, (bool *)&byte_B0FCAE));
  dword_B0FABC = (unsigned int)((void **)(result));
  return (void **)((void **)((void **)(result)));
}
} // namespace gamemd
// 0x72B2F0
namespace gamemd {
char * LoadingScreen::GetBackgroundImage(ScenarioClass * aP1)
{
  char *result; // eax

  result = (char *)(off_844C34[0]);
  if ( this != (void *)640 ) /*0x72b2fb*/
    return off_844C38[0]; /*0x72b2fd*/
  return result; /*0x72b302*/
}
} // namespace gamemd
// 0x72B310
namespace gamemd {
char * LoadingScreen::GetOverlayImage(ScenarioClass * aP1)
{
  char *result; // eax

  result = (char *)(off_844C3C[0]);
  if ( this != (void *)640 ) /*0x72b31b*/
    return off_844C40[0]; /*0x72b31d*/
  return result; /*0x72b322*/
}
} // namespace gamemd
// 0x72B390
namespace gamemd {
int LoadingScreen::ReleaseAnimObjects()
{
  if ( dword_B0FB88 ) /*0x72b39b*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FB88)(dword_B0FB88, 1); /*0x72b3a1*/
    dword_B0FB88 = 0; /*0x72b3a3*/
  }
  if ( dword_B0FB84 ) /*0x72b3b4*/
  {
    RA2_OPDEL(dword_B0FB84); /*0x72b3b7*/
    dword_B0FB84 = 0; /*0x72b3bf*/
  }
  return LoadPaletteSimple(Source, &dword_B0FB84, &dword_B0FB88); /*0x72b3da*/
}
} // namespace gamemd
// 0x72CF40
namespace gamemd {
char LoadingScreen::Init()
{
  char result; // al

  result = (unsigned int)(byte_B0FCD9);
  if ( !byte_B0FCD9 ) /*0x72cf47*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72cf53*/
      dword_B0FA18 = LoadFileSHP(off_844D6C, (bool *)&byte_B0FCD8); /*0x72cf65*/
    result = LoadPaletteSimple(off_844D70, &dword_B0FCDC, &dword_B0FCE0); /*0x72cf7a*/
    byte_B0FCD9 = 1; /*0x72cf7f*/
  }
  return result; /*0x72cf86*/
}
} // namespace gamemd
// 0x72DEF0
namespace gamemd {
char LoadingScreen::FreeResources3()
{
  char result; // al

  result = byte_B0FBE0; /*0x72def0*/
  if ( byte_B0FBE0 ) /*0x72defa*/
  {
    byte_B0FBE0 = 0; /*0x72df00*/
    LoadingScreen::DestroyFileTrees(); /*0x72df06*/
    LoadingScreen::CleanupObjects(); /*0x72df0b*/
    RA2_OPDEL(dword_B0FC10); /*0x72df16*/
    dword_B0FC10 = 0; /*0x72df21*/
    RA2_OPDEL(dword_B0FC14); /*0x72df28*/
    dword_B0FC14 = 0; /*0x72df33*/
    RA2_OPDEL(dword_B0FC18); /*0x72df3a*/
    dword_B0FC18 = 0; /*0x72df44*/
    RA2_OPDEL(g_GadgetAnimState); /*0x72df4b*/
    g_GadgetAnimState = 0; /*0x72df56*/
    RA2_OPDEL(dword_B0FC20); /*0x72df5d*/
    dword_B0FC20 = 0; /*0x72df68*/
    RA2_OPDEL(dword_B0FC24); /*0x72df6f*/
    dword_B0FC24 = 0; /*0x72df79*/
    RA2_OPDEL(dword_B0FC28); /*0x72df80*/
    dword_B0FC28 = 0; /*0x72df8b*/
    RA2_OPDEL(dword_B0FC2C); /*0x72df92*/
    dword_B0FC2C = 0; /*0x72df9a*/
    return ReleaseLoadingResources(); /*0x72dfa0*/
  }
  return result; /*0x72dfa5*/
}
} // namespace gamemd
// 0x72F140
namespace gamemd {
void LoadingScreen::CleanupObjects()
{
  if ( dword_B0FBC8 ) /*0x72f14a*/
  {
    RA2_OPDEL(dword_B0FBC8); /*0x72f14d*/
    dword_B0FBC8 = 0; /*0x72f155*/
  }
  if ( dword_B0FBCC ) /*0x72f163*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FBCC)(dword_B0FBCC, 1); /*0x72f169*/
    dword_B0FBCC = 0; /*0x72f16b*/
  }
  if ( dword_B0FBD0 ) /*0x72f178*/
  {
    RA2_OPDEL(dword_B0FBD0); /*0x72f17b*/
    dword_B0FBD0 = 0; /*0x72f183*/
  }
  if ( dword_B0FBD4 ) /*0x72f191*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FBD4)(dword_B0FBD4, 1); /*0x72f197*/
    dword_B0FBD4 = 0; /*0x72f199*/
  }
  if ( dword_B0FBD8 ) /*0x72f1a6*/
  {
    RA2_OPDEL(dword_B0FBD8); /*0x72f1a9*/
    dword_B0FBD8 = 0; /*0x72f1b1*/
  }
  if ( dword_B0FBDC ) /*0x72f1bf*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FBDC)(dword_B0FBDC, 1); /*0x72f1c5*/
    dword_B0FBDC = 0; /*0x72f1c7*/
  }
}
} // namespace gamemd
// 0x730400
namespace gamemd {
int LoadingScreen::FreeResources()
{
  int result; // eax

  if ( dword_B0FC04 ) /*0x73040a*/
  {
    RA2_OPDEL(dword_B0FC04); /*0x73040d*/
    dword_B0FC04 = 0; /*0x730415*/
  }
  HashTree::MarkEntry(off_844C08); /*0x730421*/
  if ( dword_B0FC08 ) /*0x73042e*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FC08)(dword_B0FC08, 1); /*0x730434*/
    dword_B0FC08 = 0; /*0x730436*/
  }
  if ( dword_B0FBFC ) /*0x730443*/
  {
    RA2_OPDEL(dword_B0FBFC); /*0x730446*/
    dword_B0FBFC = 0; /*0x73044e*/
  }
  HashTree::MarkEntry(off_844C04); /*0x73045a*/
  if ( dword_B0FC00 ) /*0x730467*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FC00)(dword_B0FC00, 1); /*0x73046d*/
    dword_B0FC00 = 0; /*0x73046f*/
  }
  if ( dword_B0FBF4 ) /*0x73047c*/
  {
    RA2_OPDEL(dword_B0FBF4); /*0x73047f*/
    dword_B0FBF4 = 0; /*0x730487*/
  }
  HashTree::MarkEntry(off_844C00); /*0x730493*/
  if ( dword_B0FBF8 ) /*0x7304a0*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FBF8)(dword_B0FBF8, 1); /*0x7304a6*/
    dword_B0FBF8 = 0; /*0x7304a8*/
  }
  if ( dword_B0FBE4 ) /*0x7304b5*/
  {
    RA2_OPDEL(dword_B0FBE4); /*0x7304b8*/
    dword_B0FBE4 = 0; /*0x7304c0*/
  }
  HashTree::MarkEntry(off_844BF0); /*0x7304cc*/
  if ( dword_B0FBE8 ) /*0x7304d9*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FBE8)(dword_B0FBE8, 1); /*0x7304df*/
    dword_B0FBE8 = 0; /*0x7304e1*/
  }
  if ( dword_B0FBEC ) /*0x7304ee*/
  {
    RA2_OPDEL(dword_B0FBEC); /*0x7304f1*/
    dword_B0FBEC = 0; /*0x7304f9*/
  }
  result = HashTree::MarkEntry(off_844BF4); /*0x730505*/
  if ( dword_B0FBF0 ) /*0x730512*/
  {
    result = (**(int (__thiscall ***)(int, int))dword_B0FBF0)(dword_B0FBF0, 1); /*0x730518*/
    dword_B0FBF0 = 0; /*0x73051a*/
  }
  return result; /*0x730520*/
}
} // namespace gamemd
// 0x730530
namespace gamemd {
void LoadingScreen::FreeResources2()
{
  RA2_OPDEL(dword_B0FC30); /*0x730537*/
  dword_B0FC30 = 0; /*0x730545*/
  RA2_OPDEL(dword_B0FC34); /*0x73054b*/
  dword_B0FC34 = 0; /*0x730556*/
  RA2_OPDEL(dword_B0FC38); /*0x73055d*/
  dword_B0FC38 = 0; /*0x730567*/
  RA2_OPDEL(dword_B0FC3C); /*0x73056e*/
  dword_B0FC3C = 0; /*0x730579*/
  RA2_OPDEL(dword_B0FC40); /*0x730580*/
  dword_B0FC40 = 0; /*0x73058b*/
  RA2_OPDEL(dword_B0FC44); /*0x730592*/
  dword_B0FC44 = 0; /*0x73059c*/
  RA2_OPDEL(dword_B0FC48); /*0x7305a3*/
  dword_B0FC48 = 0; /*0x7305ae*/
  RA2_OPDEL(dword_B0FC4C); /*0x7305b5*/
  dword_B0FC4C = 0; /*0x7305c0*/
  RA2_OPDEL(dword_B0FC50); /*0x7305c7*/
  dword_B0FC50 = 0; /*0x7305d1*/
  RA2_OPDEL(dword_B0FC54); /*0x7305d8*/
  dword_B0FC54 = 0; /*0x7305e3*/
  RA2_OPDEL(dword_B0FC58); /*0x7305ea*/
  dword_B0FC58 = 0; /*0x7305f5*/
  RA2_OPDEL(dword_B0FC5C); /*0x7305fc*/
  dword_B0FC5C = 0; /*0x730606*/
  RA2_OPDEL(dword_B0FC60); /*0x73060d*/
  dword_B0FC60 = 0; /*0x730618*/
  RA2_OPDEL(dword_B0FC64); /*0x73061f*/
  dword_B0FC64 = 0; /*0x73062a*/
  RA2_OPDEL(dword_B0FC68); /*0x730631*/
  dword_B0FC68 = 0; /*0x73063b*/
  RA2_OPDEL(dword_B0FC6C); /*0x730642*/
  dword_B0FC6C = 0; /*0x73064a*/
}
} // namespace gamemd