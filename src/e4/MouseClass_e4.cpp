// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6D1770
char MouseClass::ToggleContextGadget(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall MouseClass::sub_6D1770(int a1, int a2)
{
  unsigned int v2; // eax
  char *v3; // ecx
  unsigned int v5; // eax
  char *v6; // ecx

  if ( a1 == 4551 ) /*0x6d1779*/
  {
    v2 = MEMORY[0xB0CB78][MEMORY[0xB0CC1C]]; /*0x6d1780*/
    if ( v2 <= 0x18 ) /*0x6d1789*/
    {
      v3 = (char *)&MEMORY[0xB0C1C0] + 96 * v2; /*0x6d1796*/
      if ( v3 ) /*0x6d179e*/
      {
        if ( !v3[45] ) /*0x6d17a0*/
          GadgetClass::Show(v3); /*0x6d17a7*/
      }
    }
    return 1; /*0x6d17ac*/
  }
  else if ( a1 == 4552 ) /*0x6d17b6*/
  {
    v5 = MEMORY[0xB0CB78][MEMORY[0xB0CC1C]]; /*0x6d17be*/
    if ( v5 <= 0x18 ) /*0x6d17c7*/
    {
      v6 = (char *)&MEMORY[0xB0C1C0] + 96 * v5; /*0x6d17d4*/
      if ( v6 ) /*0x6d17dc*/
      {
        if ( v6[45] ) /*0x6d17de*/
          GadgetClass::Hide(v6); /*0x6d17e5*/
      }
    }
    return 1; /*0x6d17ea*/
  }
  else
  {
    return 0; /*0x6d17ef*/
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
