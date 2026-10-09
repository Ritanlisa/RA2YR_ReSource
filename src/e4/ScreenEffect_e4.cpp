// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/ScreenEffect_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x753AE0
namespace gamemd {
void ScreenEffect::Stub2()
{
  ; /*0x753ae0*/
}
} // namespace gamemd
// 0x754B20
namespace gamemd {
void ScreenEffect::Stub3()
{
  ; /*0x754b20*/
}
} // namespace gamemd
// 0x754B30
namespace gamemd {
void ScreenEffect::Stub4()
{
  ; /*0x754b30*/
}
} // namespace gamemd
// 0x754BA0
namespace gamemd {
void ScreenEffect::Stub5()
{
  ; /*0x754ba0*/
}
} // namespace gamemd
// 0x754BB0
namespace gamemd {
void ScreenEffect::Stub6()
{
  ; /*0x754bb0*/
}
} // namespace gamemd
// 0x754BC0
namespace gamemd {
void ScreenEffect::Stub7()
{
  ; /*0x754bc0*/
}
} // namespace gamemd
// 0x754BD0
namespace gamemd {
void ScreenEffect::Stub8()
{
  ; /*0x754bd0*/
}
} // namespace gamemd
// 0x7772A0
namespace gamemd {
long long ScreenEffect::UpdateBob()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B730B0 - dbl_B730D8); /*0x7772b2*/
  result = Math::RoundToInt(v0 * dbl_B730D0 * 0.5); /*0x7772c6*/
  dword_B73540 = result; /*0x7772cb*/
  return result; /*0x7772d0*/
}
} // namespace gamemd
