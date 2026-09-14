// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x58B600
long long Camera::UpdateTilt()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 Camera_UpdateTilt()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABDFA8 - dbl_ABEC88); /*0x58b612*/
  result = Math::RoundToInt(v0 * dbl_ABE368 * 0.5); /*0x58b626*/
  dword_ABED00 = result; /*0x58b62b*/
  return result; /*0x58b630*/
}
}

// 0x58B7B0
void Camera::StubReturnFalse()
{
  ;
}

// 0x58B7C0
void Camera::StubReturnVoid()
{
  ;
}

// 0x6339A0
void Camera::StubReturn()
{
  ;
}
