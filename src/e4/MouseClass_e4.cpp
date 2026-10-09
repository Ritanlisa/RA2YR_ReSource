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
#include "e4/classes/AssetClass_e4.hpp"
#include "e4/classes/ControlClass_e4.hpp"

// 0x6D1770
namespace gamemd {
char MouseClass::ToggleContextGadget(int a1, int a2)
{
  unsigned int v2; // eax
  ShapeButtonClass *v3; // ecx
  unsigned int v5; // eax
  ShapeButtonClass *v6; // ecx

  if ( a1 == 4551 ) /*0x6d1779*/
  {
    v2 = g_ObjectTrackingPool[dword_B0CC1C]; /*0x6d1780*/
    if ( v2 <= 0x18 ) /*0x6d1789*/
    {
      v3 = &stru_B0C1C0 + 8 * v2; /*0x6d1796*/
      if ( v3 ) /*0x6d179e*/
      {
        if ( !IDA_BYTE1(v3[3].q008) ) /*0x6d17a0*/
          GadgetClass::Show((GadgetClass *)v3); /*0x6d17a7*/
      }
    }
    return 1; /*0x6d17ac*/
  }
  else if ( a1 == 4552 ) /*0x6d17b6*/
  {
    v5 = g_ObjectTrackingPool[dword_B0CC1C]; /*0x6d17be*/
    if ( v5 <= 0x18 ) /*0x6d17c7*/
    {
      v6 = &stru_B0C1C0 + 8 * v5; /*0x6d17d4*/
      if ( v6 ) /*0x6d17dc*/
      {
        if ( IDA_BYTE1(v6[3].q008) ) /*0x6d17de*/
          GadgetClass::Hide((GadgetClass *)v6); /*0x6d17e5*/
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

  result = byte_B0FBE0; /*0x72ddb0*/
  if ( !byte_B0FBE0 ) /*0x72ddb7*/
  {
    AssetClass::ReleaseAndReload(); /*0x72ddbd*/
    dword_B0FAC4 = LoadFileSHP(off_844CD4, (bool *)&byte_B0FC95); /*0x72dddd*/
    dword_B0F9DC = LoadFileSHP(off_844CD8, (bool *)&byte_B0FC96); /*0x72ddf2*/
    dword_B0FAC0 = LoadFileSHP(off_844CDC, (bool *)&byte_B0FC97); /*0x72de07*/
    dword_B0FB50 = LoadFileSHP(off_844CE0, (bool *)&byte_B0FC98); /*0x72de1c*/
    dword_B0FA04 = LoadFileSHP(off_844CE4, (bool *)&byte_B0FC99); /*0x72de31*/
    dword_B0FAF8 = LoadFileSHP(off_844CE8, (bool *)&byte_B0FC9A); /*0x72de46*/
    dword_B0FA74 = LoadFileSHP(off_844CEC, (bool *)&byte_B0FC9B); /*0x72de5b*/
    dword_B0FA38 = LoadFileSHP(off_844CF0, (bool *)&byte_B0FC9C); /*0x72de70*/
    dword_B0FAE8 = LoadFileSHP(off_844CF4, (bool *)&byte_B0FC9D); /*0x72de85*/
    dword_B0FA54 = LoadFileSHP(off_844CF8, (bool *)&byte_B0FC9E); /*0x72de9f*/
    LoadPaletteSimple(off_844BE4, &dword_B0FBC8, &dword_B0FBCC); /*0x72dea4*/
    LoadPaletteSimple(off_844BE8, &dword_B0FBD0, &dword_B0FBD4); /*0x72deb9*/
    LoadPaletteSimple(off_844BEC, &dword_B0FBD8, &dword_B0FBDC); /*0x72dece*/
    result = SetupMouseClassResources(g_DisplayWidth, MEMORY[0x8A00A8]); /*0x72dedf*/
    byte_B0FBE0 = 1; /*0x72dee4*/
  }
  return result; /*0x72deeb*/
}
} // namespace gamemd