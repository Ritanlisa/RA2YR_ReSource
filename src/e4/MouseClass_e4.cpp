// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6D1770
char MouseClass::ToggleContextGadget(int a1, int a2)
{
{
    unsigned int v2;
    char *v3;
    unsigned int v5;
    char *v6;
    if ( a1 == 4551 )
  {
    v2 = g_ObjectTrackingPool[DataGlobal_B0CC1C];
    if ( v2 <= 0x18 )
    {
    v3 = (char *)&DataGlobal_B0C1C0 + 96 * v2;
    if ( v3 )
      {
    if ( !v3[45] )
    GadgetClass::Show(v3);
      }
    }
    return 1;
  }
    else if ( a1 == 4552 )
  {
    v5 = g_ObjectTrackingPool[DataGlobal_B0CC1C];
    if ( v5 <= 0x18 )
    {
    v6 = (char *)&DataGlobal_B0C1C0 + 96 * v5;
    if ( v6 )
      {
    if ( v6[45] )
    GadgetClass::Hide(v6);
      }
    }
    return 1;
  }
    else
  {
    return 0;
  }
}
}

// 0x72DDB0
char MouseClass::LoadCursors()
{
{
    char result;
    result = DataGlobal_B0FBE0;
    if ( !DataGlobal_B0FBE0 )
  {
    AssetClass::ReleaseAndReload();
    DataGlobal_B0FAC4 = LoadFileSHP(DataGlobal_844CD4, (bool *)&DataGlobal_B0FC95);
    DataGlobal_B0F9DC = LoadFileSHP(DataGlobal_844CD8, (bool *)&DataGlobal_B0FC96);
    DataGlobal_B0FAC0 = LoadFileSHP(DataGlobal_844CDC, (bool *)&DataGlobal_B0FC97);
    g_DialogControlPool = LoadFileSHP(DataGlobal_844CE0, (bool *)&DataGlobal_B0FC98);
    DataGlobal_B0FA04 = LoadFileSHP(DataGlobal_844CE4, (bool *)&DataGlobal_B0FC99);
    DataGlobal_B0FAF8 = LoadFileSHP(DataGlobal_844CE8, (bool *)&DataGlobal_B0FC9A);
    DataGlobal_B0FA74 = LoadFileSHP(DataGlobal_844CEC, (bool *)&DataGlobal_B0FC9B);
    DataGlobal_B0FA38 = LoadFileSHP(DataGlobal_844CF0, (bool *)&DataGlobal_B0FC9C);
    DataGlobal_B0FAE8 = LoadFileSHP(DataGlobal_844CF4, (bool *)&DataGlobal_B0FC9D);
    DataGlobal_B0FA54 = LoadFileSHP(DataGlobal_844CF8, (bool *)&DataGlobal_B0FC9E);
    LoadPaletteSimple(DataGlobal_844BE4, &DataGlobal_B0FBC8, &DataGlobal_B0FBCC);
    LoadPaletteSimple(DataGlobal_844BE8, &DataGlobal_B0FBD0, &DataGlobal_B0FBD4);
    LoadPaletteSimple(DataGlobal_844BEC, &DataGlobal_B0FBD8, &DataGlobal_B0FBDC);
    result = SetupMouseClassResources(g_DisplayWidth, DataGlobal_8A00A8);
    DataGlobal_B0FBE0 = 1;
  }
    return result;
}
}
