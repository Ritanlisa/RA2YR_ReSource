// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x642B60
int LoadingScreen::GetColorScheme()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  if ( (g_GameMode_Current == (CellStruct *)3 || g_GameMode_Current == (CellStruct *)4) /*0x642b7a*/
    && *(_DWORD *)(**(_DWORD **)&g_NetworkPlayerBuffer[1084] + 107) == -1 )
  {
    return FindBuildingAnimByName(&stru_830620[26796], 1); /*0x642b86*/
  }
  if ( this->q020 ) /*0x642b8b*/
    return FindBuildingAnimByName(&stru_830620[26772], 1); /*0x642ba9*/
  return FindBuildingAnimByName(&stru_830620[26784], 1);
}
}

// 0x72EF60
void LoadingScreen::DestroyFileTrees()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( DataGlobal_B0FC95 ) /*0x72ef6b*/
  {
    void * v0 = DataGlobal_B0FAC4; /*0x72ef6d*/
    if ( DataGlobal_B0FAC4 ) /*0x72ef75*/
    {
      FileTreeNode::Destroy(DataGlobal_B0FAC4); /*0x72ef79*/
      __3_YAXPAX_Z(v0); /*0x72ef7f*/
    }
    DataGlobal_B0FC95 = 0; /*0x72ef87*/
  }
  DataGlobal_B0FAC4 = 0; /*0x72ef92*/
  if ( DataGlobal_B0FC96 ) /*0x72ef9a*/
  {
    void * v1 = DataGlobal_B0F9DC; /*0x72ef9c*/
    if ( DataGlobal_B0F9DC ) /*0x72efa4*/
    {
      FileTreeNode::Destroy(DataGlobal_B0F9DC); /*0x72efa8*/
      __3_YAXPAX_Z(v1); /*0x72efae*/
    }
    DataGlobal_B0FC96 = 0; /*0x72efb6*/
  }
  DataGlobal_B0F9DC = 0; /*0x72efc1*/
  if ( DataGlobal_B0FC97 ) /*0x72efc9*/
  {
    void * v2 = DataGlobal_B0FAC0; /*0x72efcb*/
    if ( DataGlobal_B0FAC0 ) /*0x72efd3*/
    {
      FileTreeNode::Destroy(DataGlobal_B0FAC0); /*0x72efd7*/
      __3_YAXPAX_Z(v2); /*0x72efdd*/
    }
    DataGlobal_B0FC97 = 0; /*0x72efe5*/
  }
  DataGlobal_B0FAC0 = 0; /*0x72eff0*/
  if ( DataGlobal_B0FC98 ) /*0x72eff8*/
  {
    void * v3 = g_DialogControlPool; /*0x72effa*/
    if ( g_DialogControlPool ) /*0x72f002*/
    {
      FileTreeNode::Destroy(g_DialogControlPool); /*0x72f006*/
      __3_YAXPAX_Z(v3); /*0x72f00c*/
    }
    DataGlobal_B0FC98 = 0; /*0x72f014*/
  }
  g_DialogControlPool = 0; /*0x72f01f*/
  if ( DataGlobal_B0FC99 ) /*0x72f027*/
  {
    void * v4 = DataGlobal_B0FA04; /*0x72f029*/
    if ( DataGlobal_B0FA04 ) /*0x72f031*/
    {
      FileTreeNode::Destroy(DataGlobal_B0FA04); /*0x72f035*/
      __3_YAXPAX_Z(v4); /*0x72f03b*/
    }
    DataGlobal_B0FC99 = 0; /*0x72f043*/
  }
  DataGlobal_B0FA04 = 0; /*0x72f04e*/
  if ( DataGlobal_B0FC9A ) /*0x72f056*/
  {
    void * v5 = DataGlobal_B0FAF8; /*0x72f058*/
    if ( DataGlobal_B0FAF8 ) /*0x72f060*/
    {
      FileTreeNode::Destroy(DataGlobal_B0FAF8); /*0x72f064*/
      __3_YAXPAX_Z(v5); /*0x72f06a*/
    }
    DataGlobal_B0FC9A = 0; /*0x72f072*/
  }
  DataGlobal_B0FAF8 = 0; /*0x72f07d*/
  if ( DataGlobal_B0FC9B ) /*0x72f085*/
  {
    void * v6 = DataGlobal_B0FA74; /*0x72f087*/
    if ( DataGlobal_B0FA74 ) /*0x72f08f*/
    {
      FileTreeNode::Destroy(DataGlobal_B0FA74); /*0x72f093*/
      __3_YAXPAX_Z(v6); /*0x72f099*/
    }
    DataGlobal_B0FC9B = 0; /*0x72f0a1*/
  }
  DataGlobal_B0FA74 = 0; /*0x72f0ac*/
  if ( DataGlobal_B0FC9C ) /*0x72f0b4*/
  {
    void * v7 = DataGlobal_B0FA38; /*0x72f0b6*/
    if ( DataGlobal_B0FA38 ) /*0x72f0be*/
    {
      FileTreeNode::Destroy(DataGlobal_B0FA38); /*0x72f0c2*/
      __3_YAXPAX_Z(v7); /*0x72f0c8*/
    }
    DataGlobal_B0FC9C = 0; /*0x72f0d0*/
  }
  DataGlobal_B0FA38 = 0; /*0x72f0db*/
  if ( DataGlobal_B0FC9D ) /*0x72f0e3*/
  {
    void * v8 = DataGlobal_B0FAE8; /*0x72f0e5*/
    if ( DataGlobal_B0FAE8 ) /*0x72f0ed*/
    {
      FileTreeNode::Destroy(DataGlobal_B0FAE8); /*0x72f0f1*/
      __3_YAXPAX_Z(v8); /*0x72f0f7*/
    }
    DataGlobal_B0FC9D = 0; /*0x72f0ff*/
  }
  DataGlobal_B0FAE8 = 0; /*0x72f10a*/
  if ( DataGlobal_B0FC9E ) /*0x72f112*/
  {
    void * v9 = DataGlobal_B0FA54; /*0x72f114*/
    if ( DataGlobal_B0FA54 ) /*0x72f11c*/
    {
      FileTreeNode::Destroy(DataGlobal_B0FA54); /*0x72f120*/
      __3_YAXPAX_Z(v9); /*0x72f126*/
    }
    DataGlobal_B0FC9E = 0; /*0x72f12e*/
  }
  DataGlobal_B0FA54 = 0; /*0x72f134*/
}
}

// 0x72FA10
void * * LoadingScreen::LoadSHPs()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void *SHP; // eax
  char *v1; // ecx
  void *result; // eax

  if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) == 2 ) /*0x72fa21*/
  {
    DataGlobal_B0FA68 = LoadFileSHP(DataGlobal_844D48, (bool *)&DataGlobal_B0FCA5); /*0x72fa39*/
    DataGlobal_B0FAC8 = LoadFileSHP(DataGlobal_844D3C, (bool *)&DataGlobal_B0FCA1); /*0x72fa4e*/
    SHP = LoadFileSHP(DataGlobal_844D40, (bool *)&DataGlobal_B0FCA0); /*0x72fa53*/
    v1 = DataGlobal_844D44[0]; /*0x72fa58*/
  }
  else
  {
    DataGlobal_B0FA68 = LoadFileSHP(DataGlobal_844D14, (bool *)&DataGlobal_B0FCA5); /*0x72fa80*/
    DataGlobal_B0FAC8 = LoadFileSHP(DataGlobal_844D04, (bool *)&DataGlobal_B0FCA1); /*0x72fa95*/
    SHP = LoadFileSHP(DataGlobal_844D00, (bool *)&DataGlobal_B0FCA0); /*0x72fa9a*/
    v1 = DataGlobal_844D08; /*0x72fa9f*/
  }
  DataGlobal_B0FAD4 = SHP; /*0x72fa5e*/
  DataGlobal_B0FA50 = LoadFileSHP(v1, (bool *)&DataGlobal_B0FCA2); /*0x72fabf*/
  DataGlobal_B0F9EC = LoadFileSHP(DataGlobal_844CFC, (bool *)&DataGlobal_B0FC9F); /*0x72fad4*/
  DataGlobal_B0FB08 = LoadFileSHP(DataGlobal_844D0C, (bool *)&DataGlobal_B0FCA3); /*0x72fae9*/
  DataGlobal_B0F9E0 = LoadFileSHP(DataGlobal_844D10, (bool *)&DataGlobal_B0FCA4); /*0x72fafe*/
  DataGlobal_B0FA70 = LoadFileSHP(DataGlobal_844D18, (bool *)&DataGlobal_B0FCA6); /*0x72fb13*/
  DataGlobal_B0FAFC = LoadFileSHP(DataGlobal_844D1C, (bool *)&DataGlobal_B0FCA7); /*0x72fb28*/
  DataGlobal_B0FA00 = LoadFileSHP(DataGlobal_844D20, (bool *)&DataGlobal_B0FCA8); /*0x72fb3d*/
  DataGlobal_B0FA8C = LoadFileSHP(DataGlobal_844D24, (bool *)&DataGlobal_B0FCA9); /*0x72fb52*/
  DataGlobal_B0FA48 = LoadFileSHP(DataGlobal_844D28, (bool *)&DataGlobal_B0FCAA); /*0x72fb67*/
  DataGlobal_B0FA3C = LoadFileSHP(DataGlobal_844D2C, (bool *)&DataGlobal_B0FCAB); /*0x72fb7c*/
  DataGlobal_B0FA90 = LoadFileSHP(DataGlobal_844D30, (bool *)&DataGlobal_B0FCAC); /*0x72fb91*/
  DataGlobal_B0FAA8 = LoadFileSHP(DataGlobal_844D34, (bool *)&DataGlobal_B0FCAD); /*0x72fba6*/
  result = LoadFileSHP(DataGlobal_844D38, (bool *)&DataGlobal_B0FCAE); /*0x72fbab*/
  DataGlobal_B0FABC = result; /*0x72fbb0*/
  return result; /*0x72fbb5*/
}
}

// 0x72B2F0
char * LoadingScreen::GetBackgroundImage(ScenarioClass * aP1)
{
{
    char *result;
    result = *(char **)&DataGlobal_830620[83476];
    if ( this != (void *)640 )
    return *(char **)&DataGlobal_830620[83480];
    return result;
}
}

// 0x72B310
char * LoadingScreen::GetOverlayImage(ScenarioClass * aP1)
{
{
    char *result;
    result = *(char **)&DataGlobal_830620[83484];
    if ( this != (void *)640 )
    return *(char **)&DataGlobal_830620[83488];
    return result;
}
}

// 0x72B390
int LoadingScreen::ReleaseAnimObjects()
{
{
    if ( DataGlobal_B0FB88 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FB88)(DataGlobal_B0FB88, 1);
    DataGlobal_B0FB88 = 0;
  }
    if ( DataGlobal_B0FB84 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FB84);
    DataGlobal_B0FB84 = 0;
  }
    return LoadPaletteSimple(this, &DataGlobal_B0FB84, &DataGlobal_B0FB88);
}
}

// 0x72CF40
char LoadingScreen::Init()
{
{
    char result;
    result = DataGlobal_B0FCD9;
    if ( !DataGlobal_B0FCD9 )
  {
    if ( g_DisplayWidth == 800 )
    DataGlobal_B0FA18 = LoadFileSHP(DataGlobal_844D6C, (bool *)&DataGlobal_B0FCD8);
    result = LoadPaletteSimple(DataGlobal_844D70, &DataGlobal_B0FCDC, &DataGlobal_B0FCE0);
    DataGlobal_B0FCD9 = 1;
  }
    return result;
}
}

// 0x72DEF0
char LoadingScreen::FreeResources3()
{
{
    char result;
    result = DataGlobal_B0FBE0;
    if ( DataGlobal_B0FBE0 )
  {
    DataGlobal_B0FBE0 = 0;
    LoadingScreen::DestroyFileTrees();
    LoadingScreen::CleanupObjects();
    __3_YAXPAX_Z(DataGlobal_B0FC10);
    DataGlobal_B0FC10 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC14);
    DataGlobal_B0FC14 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC18);
    DataGlobal_B0FC18 = 0;
    __3_YAXPAX_Z(g_GadgetAnimState);
    g_GadgetAnimState = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC20);
    DataGlobal_B0FC20 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC24);
    DataGlobal_B0FC24 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC28);
    DataGlobal_B0FC28 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC2C);
    DataGlobal_B0FC2C = 0;
    return ReleaseLoadingResources();
  }
    return result;
}
}

// 0x72F140
void LoadingScreen::CleanupObjects()
{
{
    if ( DataGlobal_B0FBC8 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FBC8);
    DataGlobal_B0FBC8 = 0;
  }
    if ( DataGlobal_B0FBCC )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FBCC)(DataGlobal_B0FBCC, 1);
    DataGlobal_B0FBCC = 0;
  }
    if ( DataGlobal_B0FBD0 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FBD0);
    DataGlobal_B0FBD0 = 0;
  }
    if ( DataGlobal_B0FBD4 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FBD4)(DataGlobal_B0FBD4, 1);
    DataGlobal_B0FBD4 = 0;
  }
    if ( DataGlobal_B0FBD8 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FBD8);
    DataGlobal_B0FBD8 = 0;
  }
    if ( DataGlobal_B0FBDC )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FBDC)(DataGlobal_B0FBDC, 1);
    DataGlobal_B0FBDC = 0;
  }
}
}

// 0x730400
int LoadingScreen::FreeResources()
{
{
    int result;
    if ( DataGlobal_B0FC04 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FC04);
    DataGlobal_B0FC04 = 0;
  }
    HashTree::MarkEntry(DataGlobal_844C08);
    if ( DataGlobal_B0FC08 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FC08)(DataGlobal_B0FC08, 1);
    DataGlobal_B0FC08 = 0;
  }
    if ( DataGlobal_B0FBFC )
  {
    __3_YAXPAX_Z(DataGlobal_B0FBFC);
    DataGlobal_B0FBFC = 0;
  }
    HashTree::MarkEntry(DataGlobal_844C04);
    if ( DataGlobal_B0FC00 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FC00)(DataGlobal_B0FC00, 1);
    DataGlobal_B0FC00 = 0;
  }
    if ( DataGlobal_B0FBF4 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FBF4);
    DataGlobal_B0FBF4 = 0;
  }
    HashTree::MarkEntry(DataGlobal_844C00);
    if ( DataGlobal_B0FBF8 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FBF8)(DataGlobal_B0FBF8, 1);
    DataGlobal_B0FBF8 = 0;
  }
    if ( DataGlobal_B0FBE4 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FBE4);
    DataGlobal_B0FBE4 = 0;
  }
    HashTree::MarkEntry(DataGlobal_844BF0);
    if ( DataGlobal_B0FBE8 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FBE8)(DataGlobal_B0FBE8, 1);
    DataGlobal_B0FBE8 = 0;
  }
    if ( DataGlobal_B0FBEC )
  {
    __3_YAXPAX_Z(DataGlobal_B0FBEC);
    DataGlobal_B0FBEC = 0;
  }
    result = HashTree::MarkEntry(DataGlobal_844BF4);
    if ( DataGlobal_B0FBF0 )
  {
    result = (**(int (__thiscall ***)(int, int))DataGlobal_B0FBF0)(DataGlobal_B0FBF0, 1);
    DataGlobal_B0FBF0 = 0;
  }
    return result;
}
}

// 0x730530
void LoadingScreen::FreeResources2()
{
{
    __3_YAXPAX_Z(DataGlobal_B0FC30);
    DataGlobal_B0FC30 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC34);
    DataGlobal_B0FC34 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC38);
    DataGlobal_B0FC38 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC3C);
    DataGlobal_B0FC3C = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC40);
    DataGlobal_B0FC40 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC44);
    DataGlobal_B0FC44 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC48);
    DataGlobal_B0FC48 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC4C);
    DataGlobal_B0FC4C = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC50);
    DataGlobal_B0FC50 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC54);
    DataGlobal_B0FC54 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC58);
    DataGlobal_B0FC58 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC5C);
    DataGlobal_B0FC5C = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC60);
    DataGlobal_B0FC60 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC64);
    DataGlobal_B0FC64 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC68);
    DataGlobal_B0FC68 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC6C);
    DataGlobal_B0FC6C = 0;
}
}
