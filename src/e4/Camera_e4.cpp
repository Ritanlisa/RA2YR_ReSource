// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Camera_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/e4_protos.h"

// 0x58B600
namespace gamemd {
long long Camera::UpdateTilt()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABDFA8 - dbl_ABEC88); /*0x58b612*/
  result = Math::RoundToInt(v0 * dbl_ABE368 * 0.5); /*0x58b626*/
  dword_ABED00 = result; /*0x58b62b*/
  return result; /*0x58b630*/
}
} // namespace gamemd
// 0x58B7B0
namespace gamemd {
void Camera::StubReturnFalse()
{
  ; /*0x58b7b0*/
}
} // namespace gamemd
// 0x58B7C0
namespace gamemd {
void Camera::StubReturnVoid()
{
  ; /*0x58b7c0*/
}
} // namespace gamemd
// 0x6339A0
namespace gamemd {
void Camera::StubReturn()
{
  ; /*0x6339a0*/
}
} // namespace gamemd