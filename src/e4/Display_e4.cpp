// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x5D5A20
namespace gamemd {
long long Display::CalculateDefaultSize()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABFDD0) + 0.5);
    DataGlobal_ABFDC4 = result;
    return result;
}
}
} // namespace gamemd

// 0x72AD20
namespace gamemd {
int * Display::GetViewport()
{
{
    int *result;
    int v2;
    int v3;
    int v4;
    result = this;
    v2 = 0;
    if ( !DataGlobal_A8EB7C && !g_ArmageddonMode )
    v2 = 168;
    v3 = g_CreditsScreenBounds - 168;
    v4 = g_CreditsScreenConfig - 32;
    *result = v2;
    result[1] = 0;
    result[2] = v3;
    result[3] = v4;
    return result;
}
}
} // namespace gamemd
