// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/MovementAI_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/MoveFeedback_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/NeuronClass_25_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"

// 0x6D1770
namespace gamemd {
char MouseClass::ToggleContextGadget(int a1, int a2)
{

  unsigned int v2; // eax
  char *v3; // ecx
  unsigned int v5; // eax
  char *v6; // ecx

  if ( a1 == 4551 ) /*0x6d1779*/
  {
    v2 = g_abs_B0CB78[g_abs_B0CC1C]; /*0x6d1780*/
    if ( v2 <= 0x18 ) /*0x6d1789*/
    {
      v3 = (char *)&g_abs_B0C1C0 + 96 * v2; /*0x6d1796*/
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
    v5 = g_abs_B0CB78[g_abs_B0CC1C]; /*0x6d17be*/
    if ( v5 <= 0x18 ) /*0x6d17c7*/
    {
      v6 = (char *)&g_abs_B0C1C0 + 96 * v5; /*0x6d17d4*/
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
} // namespace gamemd
// 0x72DDB0
namespace gamemd {
char MouseClass::LoadCursors()
{

  char result; // al

  result = g_abs_B0FBE0; /*0x72ddb0*/
  if ( !g_abs_B0FBE0 ) /*0x72ddb7*/
  {
    AssetClass::ReleaseAndReload(); /*0x72ddbd*/
    g_abs_B0FAC4 = LoadFileSHP(g_abs_844CD4, (bool *)&g_abs_B0FC95); /*0x72dddd*/
    g_abs_B0F9DC = LoadFileSHP(g_abs_844CD8, (bool *)&g_abs_B0FC96); /*0x72ddf2*/
    g_abs_B0FAC0 = LoadFileSHP(g_abs_844CDC, (bool *)&g_abs_B0FC97); /*0x72de07*/
    g_abs_B0FB50 = LoadFileSHP(g_abs_844CE0, (bool *)&g_abs_B0FC98); /*0x72de1c*/
    g_abs_B0FA04 = LoadFileSHP(g_abs_844CE4, (bool *)&g_abs_B0FC99); /*0x72de31*/
    g_abs_B0FAF8 = LoadFileSHP(g_abs_844CE8, (bool *)&g_abs_B0FC9A); /*0x72de46*/
    g_abs_B0FA74 = LoadFileSHP(g_abs_844CEC, (bool *)&g_abs_B0FC9B); /*0x72de5b*/
    g_abs_B0FA38 = LoadFileSHP(g_abs_844CF0, (bool *)&g_abs_B0FC9C); /*0x72de70*/
    g_abs_B0FAE8 = LoadFileSHP(g_abs_844CF4, (bool *)&g_abs_B0FC9D); /*0x72de85*/
    g_abs_B0FA54 = LoadFileSHP(g_abs_844CF8, (bool *)&g_abs_B0FC9E); /*0x72de9f*/
    LoadPaletteSimple(g_abs_844BE4, &g_abs_B0FBC8, &g_abs_B0FBCC); /*0x72dea4*/
    LoadPaletteSimple(g_abs_844BE8, &g_abs_B0FBD0, &g_abs_B0FBD4); /*0x72deb9*/
    LoadPaletteSimple(g_abs_844BEC, &g_abs_B0FBD8, &g_abs_B0FBDC); /*0x72dece*/
    result = SetupMouseClassResources(g_abs_8A00A4, g_abs_8A00A8); /*0x72dedf*/
    g_abs_B0FBE0 = 1; /*0x72dee4*/
  }
  return result; /*0x72deeb*/

}
} // namespace gamemd