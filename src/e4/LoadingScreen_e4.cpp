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

  if ( (MEMORY[0xA8B238] == (CellStruct *)3 || MEMORY[0xA8B238] == (CellStruct *)4) /*0x642b7a*/
    && *(unsigned int *)(**(unsigned int **)&MEMORY[0xA8D63C].__pad_430[12] + 107) == -1 )
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

  if ( MEMORY[0xB0FC95] ) /*0x72ef6b*/
  {
    v0 = MEMORY[0xB0FAC4]; /*0x72ef6d*/
    if ( MEMORY[0xB0FAC4] ) /*0x72ef75*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FAC4]); /*0x72ef79*/
      __3_YAXPAX_Z(v0); /*0x72ef7f*/
    }
    MEMORY[0xB0FC95] = 0; /*0x72ef87*/
  }
  MEMORY[0xB0FAC4] = 0; /*0x72ef92*/
  if ( MEMORY[0xB0FC96] ) /*0x72ef9a*/
  {
    v1 = MEMORY[0xB0F9DC]; /*0x72ef9c*/
    if ( MEMORY[0xB0F9DC] ) /*0x72efa4*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0F9DC]); /*0x72efa8*/
      __3_YAXPAX_Z(v1); /*0x72efae*/
    }
    MEMORY[0xB0FC96] = 0; /*0x72efb6*/
  }
  MEMORY[0xB0F9DC] = 0; /*0x72efc1*/
  if ( MEMORY[0xB0FC97] ) /*0x72efc9*/
  {
    v2 = MEMORY[0xB0FAC0]; /*0x72efcb*/
    if ( MEMORY[0xB0FAC0] ) /*0x72efd3*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FAC0]); /*0x72efd7*/
      __3_YAXPAX_Z(v2); /*0x72efdd*/
    }
    MEMORY[0xB0FC97] = 0; /*0x72efe5*/
  }
  MEMORY[0xB0FAC0] = 0; /*0x72eff0*/
  if ( MEMORY[0xB0FC98] ) /*0x72eff8*/
  {
    v3 = MEMORY[0xB0FB50]; /*0x72effa*/
    if ( MEMORY[0xB0FB50] ) /*0x72f002*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FB50]); /*0x72f006*/
      __3_YAXPAX_Z(v3); /*0x72f00c*/
    }
    MEMORY[0xB0FC98] = 0; /*0x72f014*/
  }
  MEMORY[0xB0FB50] = 0; /*0x72f01f*/
  if ( MEMORY[0xB0FC99] ) /*0x72f027*/
  {
    v4 = MEMORY[0xB0FA04]; /*0x72f029*/
    if ( MEMORY[0xB0FA04] ) /*0x72f031*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA04]); /*0x72f035*/
      __3_YAXPAX_Z(v4); /*0x72f03b*/
    }
    MEMORY[0xB0FC99] = 0; /*0x72f043*/
  }
  MEMORY[0xB0FA04] = 0; /*0x72f04e*/
  if ( MEMORY[0xB0FC9A] ) /*0x72f056*/
  {
    v5 = MEMORY[0xB0FAF8]; /*0x72f058*/
    if ( MEMORY[0xB0FAF8] ) /*0x72f060*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FAF8]); /*0x72f064*/
      __3_YAXPAX_Z(v5); /*0x72f06a*/
    }
    MEMORY[0xB0FC9A] = 0; /*0x72f072*/
  }
  MEMORY[0xB0FAF8] = 0; /*0x72f07d*/
  if ( MEMORY[0xB0FC9B] ) /*0x72f085*/
  {
    v6 = MEMORY[0xB0FA74]; /*0x72f087*/
    if ( MEMORY[0xB0FA74] ) /*0x72f08f*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA74]); /*0x72f093*/
      __3_YAXPAX_Z(v6); /*0x72f099*/
    }
    MEMORY[0xB0FC9B] = 0; /*0x72f0a1*/
  }
  MEMORY[0xB0FA74] = 0; /*0x72f0ac*/
  if ( MEMORY[0xB0FC9C] ) /*0x72f0b4*/
  {
    v7 = MEMORY[0xB0FA38]; /*0x72f0b6*/
    if ( MEMORY[0xB0FA38] ) /*0x72f0be*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA38]); /*0x72f0c2*/
      __3_YAXPAX_Z(v7); /*0x72f0c8*/
    }
    MEMORY[0xB0FC9C] = 0; /*0x72f0d0*/
  }
  MEMORY[0xB0FA38] = 0; /*0x72f0db*/
  if ( MEMORY[0xB0FC9D] ) /*0x72f0e3*/
  {
    v8 = MEMORY[0xB0FAE8]; /*0x72f0e5*/
    if ( MEMORY[0xB0FAE8] ) /*0x72f0ed*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FAE8]); /*0x72f0f1*/
      __3_YAXPAX_Z(v8); /*0x72f0f7*/
    }
    MEMORY[0xB0FC9D] = 0; /*0x72f0ff*/
  }
  MEMORY[0xB0FAE8] = 0; /*0x72f10a*/
  if ( MEMORY[0xB0FC9E] ) /*0x72f112*/
  {
    v9 = MEMORY[0xB0FA54]; /*0x72f114*/
    if ( MEMORY[0xB0FA54] ) /*0x72f11c*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA54]); /*0x72f120*/
      __3_YAXPAX_Z(v9); /*0x72f126*/
    }
    MEMORY[0xB0FC9E] = 0; /*0x72f12e*/
  }
  MEMORY[0xB0FA54] = 0; /*0x72f134*/

}
} // namespace gamemd
// 0x72FA10
namespace gamemd {
void * * LoadingScreen::LoadSHPs()
{

  void *SHP; // eax
  char *v1; // ecx
  void *result; // eax

  if ( *((unsigned int *)MEMORY[0xA8B230] + 3374) == 2 ) /*0x72fa21*/
  {
    MEMORY[0xB0FA68] = LoadFileSHP(MEMORY[0x844D48], (bool *)&MEMORY[0xB0FCA5]); /*0x72fa39*/
    MEMORY[0xB0FAC8] = LoadFileSHP(MEMORY[0x844D3C], (bool *)&MEMORY[0xB0FCA1]); /*0x72fa4e*/
    SHP = LoadFileSHP(MEMORY[0x844D40], (bool *)&MEMORY[0xB0FCA0]); /*0x72fa53*/
    v1 = MEMORY[0x844D44][0]; /*0x72fa58*/
  }
  else
  {
    MEMORY[0xB0FA68] = LoadFileSHP(MEMORY[0x844D14], (bool *)&MEMORY[0xB0FCA5]); /*0x72fa80*/
    MEMORY[0xB0FAC8] = LoadFileSHP(MEMORY[0x844D04], (bool *)&MEMORY[0xB0FCA1]); /*0x72fa95*/
    SHP = LoadFileSHP(MEMORY[0x844D00], (bool *)&MEMORY[0xB0FCA0]); /*0x72fa9a*/
    v1 = MEMORY[0x844D08]; /*0x72fa9f*/
  }
  MEMORY[0xB0FAD4] = SHP; /*0x72fa5e*/
  MEMORY[0xB0FA50] = LoadFileSHP(v1, (bool *)&MEMORY[0xB0FCA2]); /*0x72fabf*/
  MEMORY[0xB0F9EC] = LoadFileSHP(MEMORY[0x844CFC], (bool *)&MEMORY[0xB0FC9F]); /*0x72fad4*/
  MEMORY[0xB0FB08] = LoadFileSHP(MEMORY[0x844D0C], (bool *)&MEMORY[0xB0FCA3]); /*0x72fae9*/
  MEMORY[0xB0F9E0] = LoadFileSHP(MEMORY[0x844D10], (bool *)&MEMORY[0xB0FCA4]); /*0x72fafe*/
  MEMORY[0xB0FA70] = LoadFileSHP(MEMORY[0x844D18], (bool *)&MEMORY[0xB0FCA6]); /*0x72fb13*/
  MEMORY[0xB0FAFC] = LoadFileSHP(MEMORY[0x844D1C], (bool *)&MEMORY[0xB0FCA7]); /*0x72fb28*/
  MEMORY[0xB0FA00] = LoadFileSHP(MEMORY[0x844D20], (bool *)&MEMORY[0xB0FCA8]); /*0x72fb3d*/
  MEMORY[0xB0FA8C] = LoadFileSHP(MEMORY[0x844D24], (bool *)&MEMORY[0xB0FCA9]); /*0x72fb52*/
  MEMORY[0xB0FA48] = LoadFileSHP(MEMORY[0x844D28], (bool *)&MEMORY[0xB0FCAA]); /*0x72fb67*/
  MEMORY[0xB0FA3C] = LoadFileSHP(MEMORY[0x844D2C], (bool *)&MEMORY[0xB0FCAB]); /*0x72fb7c*/
  MEMORY[0xB0FA90] = LoadFileSHP(MEMORY[0x844D30], (bool *)&MEMORY[0xB0FCAC]); /*0x72fb91*/
  MEMORY[0xB0FAA8] = LoadFileSHP(MEMORY[0x844D34], (bool *)&MEMORY[0xB0FCAD]); /*0x72fba6*/
  result = LoadFileSHP(MEMORY[0x844D38], (bool *)&MEMORY[0xB0FCAE]); /*0x72fbab*/
  MEMORY[0xB0FABC] = result; /*0x72fbb0*/
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
int LoadingScreen::ReleaseAnimObjects()
{

  if ( MEMORY[0xB0FB88] ) /*0x72b39b*/
  {
    (**(void (***)(int, int))MEMORY[0xB0FB88])(MEMORY[0xB0FB88], 1); /*0x72b3a1*/
    MEMORY[0xB0FB88] = 0; /*0x72b3a3*/
  }
  if ( MEMORY[0xB0FB84] ) /*0x72b3b4*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB84]); /*0x72b3b7*/
    MEMORY[0xB0FB84] = 0; /*0x72b3bf*/
  }
  return LoadPaletteSimple(Source, &MEMORY[0xB0FB84], &MEMORY[0xB0FB88]); /*0x72b3da*/

}
} // namespace gamemd
// 0x72CF40
namespace gamemd {
char LoadingScreen::Init(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0)
{

  char result; // al

  result = MEMORY[0xB0FCD9]; /*0x72cf40*/
  if ( !MEMORY[0xB0FCD9] ) /*0x72cf47*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72cf53*/
      MEMORY[0xB0FA18] = LoadFileSHP(MEMORY[0x844D6C], (bool *)&MEMORY[0xB0FCD8]); /*0x72cf65*/
    result = LoadPaletteSimple(MEMORY[0x844D70], &MEMORY[0xB0FCDC], &MEMORY[0xB0FCE0]); /*0x72cf7a*/
    MEMORY[0xB0FCD9] = 1; /*0x72cf7f*/
  }
  return result; /*0x72cf86*/

}
} // namespace gamemd
// 0x72DEF0
namespace gamemd {
char LoadingScreen::FreeResources3()
{

  char result; // al

  result = MEMORY[0xB0FBE0]; /*0x72def0*/
  if ( MEMORY[0xB0FBE0] ) /*0x72defa*/
  {
    MEMORY[0xB0FBE0] = 0; /*0x72df00*/
    LoadingScreen::DestroyFileTrees(); /*0x72df06*/
    LoadingScreen::CleanupObjects(); /*0x72df0b*/
    __3_YAXPAX_Z(MEMORY[0xB0FC10]); /*0x72df16*/
    MEMORY[0xB0FC10] = 0; /*0x72df21*/
    __3_YAXPAX_Z(MEMORY[0xB0FC14]); /*0x72df28*/
    MEMORY[0xB0FC14] = 0; /*0x72df33*/
    __3_YAXPAX_Z(MEMORY[0xB0FC18]); /*0x72df3a*/
    MEMORY[0xB0FC18] = 0; /*0x72df44*/
    __3_YAXPAX_Z(MEMORY[0xB0FC1C]); /*0x72df4b*/
    MEMORY[0xB0FC1C] = 0; /*0x72df56*/
    __3_YAXPAX_Z(MEMORY[0xB0FC20]); /*0x72df5d*/
    MEMORY[0xB0FC20] = 0; /*0x72df68*/
    __3_YAXPAX_Z(MEMORY[0xB0FC24]); /*0x72df6f*/
    MEMORY[0xB0FC24] = 0; /*0x72df79*/
    __3_YAXPAX_Z(MEMORY[0xB0FC28]); /*0x72df80*/
    MEMORY[0xB0FC28] = 0; /*0x72df8b*/
    __3_YAXPAX_Z(MEMORY[0xB0FC2C]); /*0x72df92*/
    MEMORY[0xB0FC2C] = 0; /*0x72df9a*/
    return ReleaseLoadingResources(); /*0x72dfa0*/
  }
  return result; /*0x72dfa5*/

}
} // namespace gamemd
// 0x72F140
namespace gamemd {
char LoadingScreen::CleanupObjects(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0)
{

  if ( MEMORY[0xB0FBC8] ) /*0x72f14a*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FBC8]); /*0x72f14d*/
    MEMORY[0xB0FBC8] = 0; /*0x72f155*/
  }
  if ( MEMORY[0xB0FBCC] ) /*0x72f163*/
  {
    (**(void (***)(int, int))MEMORY[0xB0FBCC])(MEMORY[0xB0FBCC], 1); /*0x72f169*/
    MEMORY[0xB0FBCC] = 0; /*0x72f16b*/
  }
  if ( MEMORY[0xB0FBD0] ) /*0x72f178*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FBD0]); /*0x72f17b*/
    MEMORY[0xB0FBD0] = 0; /*0x72f183*/
  }
  if ( MEMORY[0xB0FBD4] ) /*0x72f191*/
  {
    (**(void (***)(int, int))MEMORY[0xB0FBD4])(MEMORY[0xB0FBD4], 1); /*0x72f197*/
    MEMORY[0xB0FBD4] = 0; /*0x72f199*/
  }
  if ( MEMORY[0xB0FBD8] ) /*0x72f1a6*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FBD8]); /*0x72f1a9*/
    MEMORY[0xB0FBD8] = 0; /*0x72f1b1*/
  }
  if ( MEMORY[0xB0FBDC] ) /*0x72f1bf*/
  {
    (**(void (***)(int, int))MEMORY[0xB0FBDC])(MEMORY[0xB0FBDC], 1); /*0x72f1c5*/
    MEMORY[0xB0FBDC] = 0; /*0x72f1c7*/
  }

}
} // namespace gamemd
// 0x730400
namespace gamemd {
char LoadingScreen::FreeResources(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0)
{

  int result; // eax

  if ( MEMORY[0xB0FC04] ) /*0x73040a*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FC04]); /*0x73040d*/
    MEMORY[0xB0FC04] = 0; /*0x730415*/
  }
  HashTree::MarkEntry(MEMORY[0x844C08]); /*0x730421*/
  if ( MEMORY[0xB0FC08] ) /*0x73042e*/
  {
    (**(void (***)(int, int))MEMORY[0xB0FC08])(MEMORY[0xB0FC08], 1); /*0x730434*/
    MEMORY[0xB0FC08] = 0; /*0x730436*/
  }
  if ( MEMORY[0xB0FBFC] ) /*0x730443*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FBFC]); /*0x730446*/
    MEMORY[0xB0FBFC] = 0; /*0x73044e*/
  }
  HashTree::MarkEntry(MEMORY[0x844C04]); /*0x73045a*/
  if ( MEMORY[0xB0FC00] ) /*0x730467*/
  {
    (**(void (***)(int, int))MEMORY[0xB0FC00])(MEMORY[0xB0FC00], 1); /*0x73046d*/
    MEMORY[0xB0FC00] = 0; /*0x73046f*/
  }
  if ( MEMORY[0xB0FBF4] ) /*0x73047c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FBF4]); /*0x73047f*/
    MEMORY[0xB0FBF4] = 0; /*0x730487*/
  }
  HashTree::MarkEntry(MEMORY[0x844C00]); /*0x730493*/
  if ( MEMORY[0xB0FBF8] ) /*0x7304a0*/
  {
    (**(void (***)(int, int))MEMORY[0xB0FBF8])(MEMORY[0xB0FBF8], 1); /*0x7304a6*/
    MEMORY[0xB0FBF8] = 0; /*0x7304a8*/
  }
  if ( MEMORY[0xB0FBE4] ) /*0x7304b5*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FBE4]); /*0x7304b8*/
    MEMORY[0xB0FBE4] = 0; /*0x7304c0*/
  }
  HashTree::MarkEntry(MEMORY[0x844BF0]); /*0x7304cc*/
  if ( MEMORY[0xB0FBE8] ) /*0x7304d9*/
  {
    (**(void (***)(int, int))MEMORY[0xB0FBE8])(MEMORY[0xB0FBE8], 1); /*0x7304df*/
    MEMORY[0xB0FBE8] = 0; /*0x7304e1*/
  }
  if ( MEMORY[0xB0FBEC] ) /*0x7304ee*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FBEC]); /*0x7304f1*/
    MEMORY[0xB0FBEC] = 0; /*0x7304f9*/
  }
  result = HashTree::MarkEntry(MEMORY[0x844BF4]); /*0x730505*/
  if ( MEMORY[0xB0FBF0] ) /*0x730512*/
  {
    result = (**(int (***)(int, int))MEMORY[0xB0FBF0])(MEMORY[0xB0FBF0], 1); /*0x730518*/
    MEMORY[0xB0FBF0] = 0; /*0x73051a*/
  }
  return result; /*0x730520*/

}
} // namespace gamemd
// 0x730530
namespace gamemd {
void LoadingScreen::FreeResources2()
{

  __3_YAXPAX_Z(MEMORY[0xB0FC30]); /*0x730537*/
  MEMORY[0xB0FC30] = 0; /*0x730545*/
  __3_YAXPAX_Z(MEMORY[0xB0FC34]); /*0x73054b*/
  MEMORY[0xB0FC34] = 0; /*0x730556*/
  __3_YAXPAX_Z(MEMORY[0xB0FC38]); /*0x73055d*/
  MEMORY[0xB0FC38] = 0; /*0x730567*/
  __3_YAXPAX_Z(MEMORY[0xB0FC3C]); /*0x73056e*/
  MEMORY[0xB0FC3C] = 0; /*0x730579*/
  __3_YAXPAX_Z(MEMORY[0xB0FC40]); /*0x730580*/
  MEMORY[0xB0FC40] = 0; /*0x73058b*/
  __3_YAXPAX_Z(MEMORY[0xB0FC44]); /*0x730592*/
  MEMORY[0xB0FC44] = 0; /*0x73059c*/
  __3_YAXPAX_Z(MEMORY[0xB0FC48]); /*0x7305a3*/
  MEMORY[0xB0FC48] = 0; /*0x7305ae*/
  __3_YAXPAX_Z(MEMORY[0xB0FC4C]); /*0x7305b5*/
  MEMORY[0xB0FC4C] = 0; /*0x7305c0*/
  __3_YAXPAX_Z(MEMORY[0xB0FC50]); /*0x7305c7*/
  MEMORY[0xB0FC50] = 0; /*0x7305d1*/
  __3_YAXPAX_Z(MEMORY[0xB0FC54]); /*0x7305d8*/
  MEMORY[0xB0FC54] = 0; /*0x7305e3*/
  __3_YAXPAX_Z(MEMORY[0xB0FC58]); /*0x7305ea*/
  MEMORY[0xB0FC58] = 0; /*0x7305f5*/
  __3_YAXPAX_Z(MEMORY[0xB0FC5C]); /*0x7305fc*/
  MEMORY[0xB0FC5C] = 0; /*0x730606*/
  __3_YAXPAX_Z(MEMORY[0xB0FC60]); /*0x73060d*/
  MEMORY[0xB0FC60] = 0; /*0x730618*/
  __3_YAXPAX_Z(MEMORY[0xB0FC64]); /*0x73061f*/
  MEMORY[0xB0FC64] = 0; /*0x73062a*/
  __3_YAXPAX_Z(MEMORY[0xB0FC68]); /*0x730631*/
  MEMORY[0xB0FC68] = 0; /*0x73063b*/
  __3_YAXPAX_Z(MEMORY[0xB0FC6C]); /*0x730642*/
  MEMORY[0xB0FC6C] = 0; /*0x73064a*/

}
} // namespace gamemd