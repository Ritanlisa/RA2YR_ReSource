// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x58B600
long long Camera::UpdateTilt()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABDFA8 - DataGlobal_ABEC88);
    result = Math::RoundToInt(v0 * DataGlobal_ABE368 * 0.5);
    DataGlobal_ABED00 = result;
    return result;
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
