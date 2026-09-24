// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x642B60
int LoadingScreen::GetColorScheme()
{
  if ( (g_GameMode_Current == 3 || g_GameMode_Current == 4) && *(_DWORD *)(*(_DWORD *)Game_PlayerInfoArray + 107) == -1 ) /*0x642b7a*/
    return FindBuildingAnimByName(g_INI_Key_LightGrey, 1); /*0x642b86*/
  if ( *(this + 32) ) /*0x642b8b*/
    return FindBuildingAnimByName(g_INI_Key_SovietLoad, 1); /*0x642ba9*/
  return FindBuildingAnimByName(g_INI_Key_AlliedLoad, 1);
}
// 0x72EF60
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

  if ( byte_B0FC95 ) /*0x72ef6b*/
  {
    v0 = dword_B0FAC4; /*0x72ef6d*/
    if ( dword_B0FAC4 ) /*0x72ef75*/
    {
      FileTreeNode::Destroy(dword_B0FAC4); /*0x72ef79*/
      __3_YAXPAX_Z(v0); /*0x72ef7f*/
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
      __3_YAXPAX_Z(v1); /*0x72efae*/
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
      __3_YAXPAX_Z(v2); /*0x72efdd*/
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
      __3_YAXPAX_Z(v3); /*0x72f00c*/
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
      __3_YAXPAX_Z(v4); /*0x72f03b*/
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
      __3_YAXPAX_Z(v5); /*0x72f06a*/
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
      __3_YAXPAX_Z(v6); /*0x72f099*/
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
      __3_YAXPAX_Z(v7); /*0x72f0c8*/
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
      __3_YAXPAX_Z(v8); /*0x72f0f7*/
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
      __3_YAXPAX_Z(v9); /*0x72f126*/
    }
    byte_B0FC9E = 0; /*0x72f12e*/
  }
  dword_B0FA54 = 0; /*0x72f134*/
}
// 0x72FA10
void * * LoadingScreen::LoadSHPs()
{
  void *SHP; // eax
  char *v1; // ecx
  void *result; // eax

  if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) == 2 ) /*0x72fa21*/
  {
    dword_B0FA68 = LoadFileSHP(off_844D48, (bool *)&byte_B0FCA5); /*0x72fa39*/
    dword_B0FAC8 = LoadFileSHP(off_844D3C, (bool *)&byte_B0FCA1); /*0x72fa4e*/
    SHP = LoadFileSHP(off_844D40, (bool *)&byte_B0FCA0); /*0x72fa53*/
    v1 = off_844D44[0]; /*0x72fa58*/
  }
  else
  {
    dword_B0FA68 = LoadFileSHP(off_844D14, (bool *)&byte_B0FCA5); /*0x72fa80*/
    dword_B0FAC8 = LoadFileSHP(off_844D04, (bool *)&byte_B0FCA1); /*0x72fa95*/
    SHP = LoadFileSHP(off_844D00, (bool *)&byte_B0FCA0); /*0x72fa9a*/
    v1 = off_844D08; /*0x72fa9f*/
  }
  dword_B0FAD4 = SHP; /*0x72fa5e*/
  dword_B0FA50 = LoadFileSHP(v1, (bool *)&byte_B0FCA2); /*0x72fabf*/
  dword_B0F9EC = LoadFileSHP(off_844CFC, (bool *)&byte_B0FC9F); /*0x72fad4*/
  dword_B0FB08 = LoadFileSHP(off_844D0C, (bool *)&byte_B0FCA3); /*0x72fae9*/
  dword_B0F9E0 = LoadFileSHP(off_844D10, (bool *)&byte_B0FCA4); /*0x72fafe*/
  dword_B0FA70 = LoadFileSHP(off_844D18, (bool *)&byte_B0FCA6); /*0x72fb13*/
  dword_B0FAFC = LoadFileSHP(off_844D1C, (bool *)&byte_B0FCA7); /*0x72fb28*/
  dword_B0FA00 = LoadFileSHP(off_844D20, (bool *)&byte_B0FCA8); /*0x72fb3d*/
  dword_B0FA8C = LoadFileSHP(off_844D24, (bool *)&byte_B0FCA9); /*0x72fb52*/
  dword_B0FA48 = LoadFileSHP(off_844D28, (bool *)&byte_B0FCAA); /*0x72fb67*/
  dword_B0FA3C = LoadFileSHP(off_844D2C, (bool *)&byte_B0FCAB); /*0x72fb7c*/
  dword_B0FA90 = LoadFileSHP(off_844D30, (bool *)&byte_B0FCAC); /*0x72fb91*/
  dword_B0FAA8 = LoadFileSHP(off_844D34, (bool *)&byte_B0FCAD); /*0x72fba6*/
  result = LoadFileSHP(off_844D38, (bool *)&byte_B0FCAE); /*0x72fbab*/
  dword_B0FABC = result; /*0x72fbb0*/
  return result; /*0x72fbb5*/
}
// 0x72B2F0
char * LoadingScreen::GetBackgroundImage(ScenarioClass * aP1)
{
  char *result; // eax

  result = off_844C34[0]; /*0x72b2f0*/
  if ( this != (void *)640 ) /*0x72b2fb*/
    return off_844C38[0]; /*0x72b2fd*/
  return result; /*0x72b302*/
}
// 0x72B310
char * LoadingScreen::GetOverlayImage(ScenarioClass * aP1)
{
  char *result; // eax

  result = off_844C3C[0]; /*0x72b310*/
  if ( this != (void *)640 ) /*0x72b31b*/
    return off_844C40[0]; /*0x72b31d*/
  return result; /*0x72b322*/
}
// 0x72B390
int LoadingScreen::ReleaseAnimObjects()
{
  if ( dword_B0FB88 ) /*0x72b39b*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FB88)(dword_B0FB88, 1); /*0x72b3a1*/
    dword_B0FB88 = 0; /*0x72b3a3*/
  }
  if ( dword_B0FB84 ) /*0x72b3b4*/
  {
    __3_YAXPAX_Z(dword_B0FB84); /*0x72b3b7*/
    dword_B0FB84 = 0; /*0x72b3bf*/
  }
  return LoadPaletteSimple(Source, &dword_B0FB84, &dword_B0FB88); /*0x72b3da*/
}
// 0x72CF40
char LoadingScreen::Init()
{
  char result; // al

  result = byte_B0FCD9; /*0x72cf40*/
  if ( !byte_B0FCD9 ) /*0x72cf47*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72cf53*/
      dword_B0FA18 = LoadFileSHP(off_844D6C, (bool *)&byte_B0FCD8); /*0x72cf65*/
    result = LoadPaletteSimple(off_844D70, &dword_B0FCDC, &dword_B0FCE0); /*0x72cf7a*/
    byte_B0FCD9 = 1; /*0x72cf7f*/
  }
  return result; /*0x72cf86*/
}
// 0x72DEF0
char LoadingScreen::FreeResources3()
{
  char result; // al

  result = byte_B0FBE0; /*0x72def0*/
  if ( byte_B0FBE0 ) /*0x72defa*/
  {
    byte_B0FBE0 = 0; /*0x72df00*/
    LoadingScreen::DestroyFileTrees(); /*0x72df06*/
    LoadingScreen::CleanupObjects(); /*0x72df0b*/
    __3_YAXPAX_Z(dword_B0FC10); /*0x72df16*/
    dword_B0FC10 = 0; /*0x72df21*/
    __3_YAXPAX_Z(dword_B0FC14); /*0x72df28*/
    dword_B0FC14 = 0; /*0x72df33*/
    __3_YAXPAX_Z(dword_B0FC18); /*0x72df3a*/
    dword_B0FC18 = 0; /*0x72df44*/
    __3_YAXPAX_Z(g_GadgetAnimState); /*0x72df4b*/
    g_GadgetAnimState = 0; /*0x72df56*/
    __3_YAXPAX_Z(dword_B0FC20); /*0x72df5d*/
    dword_B0FC20 = 0; /*0x72df68*/
    __3_YAXPAX_Z(dword_B0FC24); /*0x72df6f*/
    dword_B0FC24 = 0; /*0x72df79*/
    __3_YAXPAX_Z(dword_B0FC28); /*0x72df80*/
    dword_B0FC28 = 0; /*0x72df8b*/
    __3_YAXPAX_Z(dword_B0FC2C); /*0x72df92*/
    dword_B0FC2C = 0; /*0x72df9a*/
    return ReleaseLoadingResources(); /*0x72dfa0*/
  }
  return result; /*0x72dfa5*/
}
// 0x72F140
void LoadingScreen::CleanupObjects()
{
  if ( dword_B0FBC8 ) /*0x72f14a*/
  {
    __3_YAXPAX_Z(dword_B0FBC8); /*0x72f14d*/
    dword_B0FBC8 = 0; /*0x72f155*/
  }
  if ( dword_B0FBCC ) /*0x72f163*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FBCC)(dword_B0FBCC, 1); /*0x72f169*/
    dword_B0FBCC = 0; /*0x72f16b*/
  }
  if ( dword_B0FBD0 ) /*0x72f178*/
  {
    __3_YAXPAX_Z(dword_B0FBD0); /*0x72f17b*/
    dword_B0FBD0 = 0; /*0x72f183*/
  }
  if ( dword_B0FBD4 ) /*0x72f191*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FBD4)(dword_B0FBD4, 1); /*0x72f197*/
    dword_B0FBD4 = 0; /*0x72f199*/
  }
  if ( dword_B0FBD8 ) /*0x72f1a6*/
  {
    __3_YAXPAX_Z(dword_B0FBD8); /*0x72f1a9*/
    dword_B0FBD8 = 0; /*0x72f1b1*/
  }
  if ( dword_B0FBDC ) /*0x72f1bf*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FBDC)(dword_B0FBDC, 1); /*0x72f1c5*/
    dword_B0FBDC = 0; /*0x72f1c7*/
  }
}
// 0x730400
int LoadingScreen::FreeResources()
{
  int result; // eax

  if ( dword_B0FC04 ) /*0x73040a*/
  {
    __3_YAXPAX_Z(dword_B0FC04); /*0x73040d*/
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
    __3_YAXPAX_Z(dword_B0FBFC); /*0x730446*/
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
    __3_YAXPAX_Z(dword_B0FBF4); /*0x73047f*/
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
    __3_YAXPAX_Z(dword_B0FBE4); /*0x7304b8*/
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
    __3_YAXPAX_Z(dword_B0FBEC); /*0x7304f1*/
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
// 0x730530
void LoadingScreen::FreeResources2()
{
  __3_YAXPAX_Z(dword_B0FC30); /*0x730537*/
  dword_B0FC30 = 0; /*0x730545*/
  __3_YAXPAX_Z(dword_B0FC34); /*0x73054b*/
  dword_B0FC34 = 0; /*0x730556*/
  __3_YAXPAX_Z(dword_B0FC38); /*0x73055d*/
  dword_B0FC38 = 0; /*0x730567*/
  __3_YAXPAX_Z(dword_B0FC3C); /*0x73056e*/
  dword_B0FC3C = 0; /*0x730579*/
  __3_YAXPAX_Z(dword_B0FC40); /*0x730580*/
  dword_B0FC40 = 0; /*0x73058b*/
  __3_YAXPAX_Z(dword_B0FC44); /*0x730592*/
  dword_B0FC44 = 0; /*0x73059c*/
  __3_YAXPAX_Z(dword_B0FC48); /*0x7305a3*/
  dword_B0FC48 = 0; /*0x7305ae*/
  __3_YAXPAX_Z(dword_B0FC4C); /*0x7305b5*/
  dword_B0FC4C = 0; /*0x7305c0*/
  __3_YAXPAX_Z(dword_B0FC50); /*0x7305c7*/
  dword_B0FC50 = 0; /*0x7305d1*/
  __3_YAXPAX_Z(dword_B0FC54); /*0x7305d8*/
  dword_B0FC54 = 0; /*0x7305e3*/
  __3_YAXPAX_Z(dword_B0FC58); /*0x7305ea*/
  dword_B0FC58 = 0; /*0x7305f5*/
  __3_YAXPAX_Z(dword_B0FC5C); /*0x7305fc*/
  dword_B0FC5C = 0; /*0x730606*/
  __3_YAXPAX_Z(dword_B0FC60); /*0x73060d*/
  dword_B0FC60 = 0; /*0x730618*/
  __3_YAXPAX_Z(dword_B0FC64); /*0x73061f*/
  dword_B0FC64 = 0; /*0x73062a*/
  __3_YAXPAX_Z(dword_B0FC68); /*0x730631*/
  dword_B0FC68 = 0; /*0x73063b*/
  __3_YAXPAX_Z(dword_B0FC6C); /*0x730642*/
  dword_B0FC6C = 0; /*0x73064a*/
}