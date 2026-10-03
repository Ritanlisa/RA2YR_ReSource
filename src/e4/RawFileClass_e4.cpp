// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x65CA00
namespace gamemd {
int RawFileClass::Dtor()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x65CA00)
}
} // namespace gamemd
// 0x65CB30
namespace gamemd {
int RawFileClass::Close(int a2, int a3)
{

  (*(void (**)(RawFileClass *, int))(*(unsigned int *)this->FileClass + 8))(this, a2); /*0x65cb3c*/
  return (*(int (**)(RawFileClass *, int))(*(unsigned int *)this->FileClass + 28))(this, a3); /*0x65cb4b*/

}
} // namespace gamemd