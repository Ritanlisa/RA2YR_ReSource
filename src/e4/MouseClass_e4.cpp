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
} // namespace gamemd
// 0x72DDB0
namespace gamemd {
char MouseClass::LoadCursors()
{

  char result; // al

  result = MEMORY[0xB0FBE0]; /*0x72ddb0*/
  if ( !MEMORY[0xB0FBE0] ) /*0x72ddb7*/
  {
    AssetClass::ReleaseAndReload(); /*0x72ddbd*/
    MEMORY[0xB0FAC4] = LoadFileSHP(MEMORY[0x844CD4], (bool *)&MEMORY[0xB0FC95]); /*0x72dddd*/
    MEMORY[0xB0F9DC] = LoadFileSHP(MEMORY[0x844CD8], (bool *)&MEMORY[0xB0FC96]); /*0x72ddf2*/
    MEMORY[0xB0FAC0] = LoadFileSHP(MEMORY[0x844CDC], (bool *)&MEMORY[0xB0FC97]); /*0x72de07*/
    MEMORY[0xB0FB50] = LoadFileSHP(MEMORY[0x844CE0], (bool *)&MEMORY[0xB0FC98]); /*0x72de1c*/
    MEMORY[0xB0FA04] = LoadFileSHP(MEMORY[0x844CE4], (bool *)&MEMORY[0xB0FC99]); /*0x72de31*/
    MEMORY[0xB0FAF8] = LoadFileSHP(MEMORY[0x844CE8], (bool *)&MEMORY[0xB0FC9A]); /*0x72de46*/
    MEMORY[0xB0FA74] = LoadFileSHP(MEMORY[0x844CEC], (bool *)&MEMORY[0xB0FC9B]); /*0x72de5b*/
    MEMORY[0xB0FA38] = LoadFileSHP(MEMORY[0x844CF0], (bool *)&MEMORY[0xB0FC9C]); /*0x72de70*/
    MEMORY[0xB0FAE8] = LoadFileSHP(MEMORY[0x844CF4], (bool *)&MEMORY[0xB0FC9D]); /*0x72de85*/
    MEMORY[0xB0FA54] = LoadFileSHP(MEMORY[0x844CF8], (bool *)&MEMORY[0xB0FC9E]); /*0x72de9f*/
    LoadPaletteSimple(MEMORY[0x844BE4], &MEMORY[0xB0FBC8], &MEMORY[0xB0FBCC]); /*0x72dea4*/
    LoadPaletteSimple(MEMORY[0x844BE8], &MEMORY[0xB0FBD0], &MEMORY[0xB0FBD4]); /*0x72deb9*/
    LoadPaletteSimple(MEMORY[0x844BEC], &MEMORY[0xB0FBD8], &MEMORY[0xB0FBDC]); /*0x72dece*/
    result = SetupMouseClassResources(MEMORY[0x8A00A4], MEMORY[0x8A00A8]); /*0x72dedf*/
    MEMORY[0xB0FBE0] = 1; /*0x72dee4*/
  }
  return result; /*0x72deeb*/

}
} // namespace gamemd