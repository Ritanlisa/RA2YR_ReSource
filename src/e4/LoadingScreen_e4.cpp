// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x642B60
int LoadingScreen::GetColorScheme()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall LoadingScreen::GetColorScheme(ProgressScreenClass *this)
{
  if ( (MEMORY[0xA8B238] == (CellStruct *)3 || MEMORY[0xA8B238] == (CellStruct *)4) /*0x642b7a*/
    && *(_DWORD *)(**(_DWORD **)&MEMORY[0xA8D63C].__pad_430[12] + 107) == -1 )
  {
    return FindBuildingAnimByName(&stru_830620.__pad_579C[4368], 1); /*0x642b86*/
  }
  if ( this->q020 ) /*0x642b8b*/
    return FindBuildingAnimByName(&stru_830620.__pad_579C[4344], 1); /*0x642ba9*/
  return FindBuildingAnimByName(&stru_830620.__pad_579C[4356], 1);
}
}

// 0x72EF60
void LoadingScreen::DestroyFileTrees()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void LoadingScreen_DestroyFileTrees()
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
}

// 0x72FA10
void * LoadingScreen::LoadSHPs()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *LoadingScreen_LoadSHPs()
{
  void *SHP; // eax
  char *v1; // ecx
  void *result; // eax

  if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) == 2 ) /*0x72fa21*/
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
}

// 0x72B2F0
char * LoadingScreen::GetBackgroundImage(ScenarioClass * aP1)
{
{
    char *result;
    result = *(char **)&DataGlobal_830620.__pad_579C[61048];
    if ( this != (void *)640 )
    return *(char **)&DataGlobal_830620.__pad_579C[61052];
    return result;
}
}

// 0x72B310
char * LoadingScreen::GetOverlayImage(ScenarioClass * aP1)
{
{
    char *result;
    result = *(char **)&DataGlobal_830620.__pad_579C[61056];
    if ( this != (void *)640 )
    return *(char **)&DataGlobal_830620.__pad_579C[61060];
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
