// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4BBC30
namespace gamemd {
int GetBitShift_Red()
{
{
    return g_BitShift_Red;
}
}
} // namespace gamemd

// 0x4BBC40
namespace gamemd {
int GetBitShift_Green()
{
{
    return g_BitShift_Green_0;
}
}
} // namespace gamemd

// 0x4BBC70
namespace gamemd {
XSurface * GetBitShift_Blue()
{
{
    return *(XSurface **)&DataGlobal_89E138[11424];
}
}
} // namespace gamemd
