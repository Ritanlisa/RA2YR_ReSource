// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x74FF90
namespace ra2 {
namespace game {
BOOL VeterancyStruct::IsVeteran()
{
{
    return *(void**)this >= 1.0 && *(void**)this < 2.0;
}
}
} // namespace game
} // namespace ra2

// 0x750010
namespace ra2 {
namespace game {
BOOL VeterancyStruct::IsElite()
{
{
    return *(void**)this >= 2.0;
}
}
} // namespace game
} // namespace ra2
