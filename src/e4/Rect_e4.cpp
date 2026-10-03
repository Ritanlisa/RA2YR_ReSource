// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x487F40
namespace gamemd {
int Rect::Union(IUnknown * aP0, const RECT * lprcSrc1, const RECT * lprcSrc2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x487F40)
}
} // namespace gamemd
// 0x42E410
namespace gamemd {
_DWORD * Rect::Set(int aP1, int aP2, int aP3, int aP4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x42E410)
}
} // namespace gamemd
// 0x45A130
namespace gamemd {
_DWORD * Rect::Construct(unsigned int *aP1, int aP2, int aP3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x45A130)
}
} // namespace gamemd
// 0x72A9E0
namespace gamemd {
BOOL Rect::Inflate(LPRECT lprc, int dx, int dy)
{

  int v3; // edx
  unsigned int *v4; // ecx

  *v4 += v3; /*0x72a9e4*/
  v4[1] += v3; /*0x72a9eb*/
  v4[2] -= 2 * v3; /*0x72a9f6*/
  v4[3] -= 2 * v3; /*0x72a9fe*/
  return 2 * v3; /*0x72aa01*/

}
} // namespace gamemd