// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BSurface_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
struct BSurface;  // fix_tu_missing_types

// 0x410CE0
namespace gamemd {
_DWORD * BSurface::Construct(int a2, int a3, int a4, int a5, void *a5_2, void *a6_1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x410CE0)
}
}
// 0x7B8C60
namespace gamemd {
bool BSurface::CreateTripleBuffer()
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B8C60)
}
}
// 0x7BC970
namespace gamemd {
unsigned int * BSurface::ConstructEx(int a2, int a3, int a4, int a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7BC970)
}
}
// 0x4114F0
namespace gamemd {  // G42.18c ns repair
char BSurface::Stub(int a1, int a2)
{

  return 1; /*0x4114f2*/

}
}  // G42.18c ns repair
// 0x411630
namespace gamemd {
int BSurface::GetBytesPerPixel()
{

  return this->BytesPerPixel; /*0x411633*/

}
} // namespace gamemd

// 0x411640
namespace gamemd {
int BSurface::GetPitch()
{

  return this->BytesPerPixel * (*(int (**)(BSurface *))(*(unsigned int *)this->XSurface + 124))(this); /*0x41164c*/

}
} // namespace gamemd

// 0x411650
namespace gamemd {
BSurface * BSurface::ScalarDtor(char * Block, char a2)
{

  ((Vector *)((int)&Block->Buffer))->Clear(); /*0x411656*/
  *(unsigned int *)Block->XSurface = &Surface_Vtable; /*0x41165f*/
  if ( (a2 & 1) != 0 ) /*0x411667*/
    __3_YAXPAX_Z(Block); /*0x41166a*/
  return Block->XSurface; /*0x411674*/

}
} // namespace gamemd
