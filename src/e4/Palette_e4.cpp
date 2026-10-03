// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Palette_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/XSurface_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ParasiteClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/OverlayTypeClass_e4.hpp"

// 0x4355B0
namespace gamemd {
unsigned char * Palette::Palette_6BitTo16Bit(char a2, char a3, char a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4355B0)
}
}
// 0x642130
namespace gamemd {
AbstractClass * * Palette_Preview_Generate(void * a1, void * a2, void * a3, void * a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x642130)
}
}
// 0x661350
namespace gamemd {  // G42.18c ns repair
int Palette::CalcColorDistance(unsigned char * a2, void *a2_2)
{

  int v2; // esi
  int v3; // edx
  int v4; // eax

  v2 = LOBYTE((&this->m_Colors)[0]) - *a2; /*0x661360*/
  if ( v2 < 0 ) /*0x661362*/
    v2 = *a2 - LOBYTE((&this->m_Colors)[0]); /*0x661364*/
  v3 = BYTE1((&this->m_Colors)[0]) - a2[1]; /*0x661370*/
  if ( v3 < 0 ) /*0x661372*/
    v3 = a2[1] - BYTE1((&this->m_Colors)[0]); /*0x661374*/
  v4 = BYTE2((&this->m_Colors)[0]) - a2[2]; /*0x661382*/
  if ( v4 < 0 ) /*0x661384*/
    v4 = a2[2] - BYTE2((&this->m_Colors)[0]); /*0x661386*/
  return 3 * v4 + 2 * (v2 + 2 * v3); /*0x66138e*/

}
}  // G42.18c ns repair
// 0x626200
namespace gamemd {  // G42.18c ns repair
int Palette::FindClosestColor(Palette *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x626200)
}
}  // G42.18c ns repair
// 0x632BE0
namespace gamemd {  // G42.18c ns repair
unsigned char * Palette::ConvertIndices(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x632BE0)
}
}  // G42.18c ns repair
// 0x72B820
int Palette::LoadFile(char * Source)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72B820)
}