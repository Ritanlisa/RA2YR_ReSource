// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Font_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/FogOfWar_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/FoggedObject_e4.hpp"
#include "e4/classes/FoggedObjectClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/BufferIO_e4.hpp"
#include "e4/classes/Field_e4.hpp"
#include "e4/classes/FontClass_e4.hpp"
#include "e4/classes/FontRenderer_e4.hpp"
#include "e4/classes/Palette_e4.hpp"

// 0x4346C0
namespace gamemd {
int Font::GetGlyphDataForChar(uint16_t aP1)
{

  unsigned int *Font_field_04; // ecx
  int result; // eax
  int v4; // edx

  Font_field_04 = (unsigned int *)this->Font_field_04; /*0x4346c0*/
  result = 0; /*0x4346c3*/
  if ( Font_field_04 ) /*0x4346c7*/
  {
    v4 = *(uint16_t *)(Font_field_04[6] + 2 * aP1); /*0x4346da*/
    if ( (unsigned short)v4 ) /*0x4346e2*/
      return Font_field_04[7] + (v4 - 1) * Font_field_04[5]; /*0x4346eb*/
  }
  return result; /*0x4346ee*/

}
} // namespace gamemd
// 0x434CD0
namespace gamemd {
int Font::Print(AbstractClass * aP0, AbstractClass * aP1, AbstractClass * aP2, int aP1a, AbstractClass * aP4, AbstractClass * aP5, AbstractClass * aP6, AbstractClass * aP7, AbstractClass * aP8, AbstractClass * aP9)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x434CD0)
}
} // namespace gamemd