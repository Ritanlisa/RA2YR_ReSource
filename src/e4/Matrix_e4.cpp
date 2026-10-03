// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Matrix3x4_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x5AE860
namespace gamemd {
int Matrix3x4::Identity()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5AE860)
}
} // namespace gamemd
// 0x5AE980
namespace gamemd {
int Matrix3x4::Translate(float aP1)
{

  int result; // eax

  *((float *)this + 3) = (unsigned int)(aP1)* *(float *)this + *((float *)this + 3); /*0x5ae989*/
  *((float *)this + 7) = (unsigned int)(aP1)* *((float *)this + 4) + *((float *)this + 7); /*0x5ae996*/
  *((float *)this + 11) = (unsigned int)(aP1)* *((float *)this + 8) + *((float *)this + 11); /*0x5ae9a3*/
  return result; /*0x5ae9a6*/

}
} // namespace gamemd
// 0x6D2360
namespace gamemd {
unsigned int * Matrix3x4::TransformCell(AbstractClass * aP1, AbstractClass * aP2, void *a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D2360)
}
} // namespace gamemd