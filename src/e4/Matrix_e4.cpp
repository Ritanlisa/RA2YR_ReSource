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

  this->q00C = (unsigned int)(aP1)* *(float *)this + this->q00C; /*0x5ae989*/
  this->q01C = (unsigned int)(aP1)* this->q010 + this->q01C; /*0x5ae996*/
  this->q02C = (unsigned int)(aP1)* this->q020 + this->q02C; /*0x5ae9a3*/
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