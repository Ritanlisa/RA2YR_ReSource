// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x7B7E40
namespace gamemd {
wchar_t ** WDTGame_Helper(CampaignScore * aP0, const wchar_t * a1, wchar_t * Format)
{
{
    size_t v5;
    short *v6;
    CampaignScore *v8;
    CampaignScore *v9;
    wchar_t String[32];
    swprintf(String, (const size_t)&DataGlobal_84DD9C.__pad_71C[220], Format, v9);
    swprintf(String, (const size_t)String, a1, v8);
    *(int *)aP0->__pad_0 = 0;
    if ( String )
    v5 = wcslen(String) + 1;
    else
    v5 = 1;
    v6 = (short *)__2_YAPAXI_Z(2 * v5);
    *(int *)aP0->__pad_0 = v6;
    *v6 = 0;
    if ( String )
    wcscpy(*(wchar_t **)aP0->__pad_0, String);
    return (wchar_t **)aP0;
}
}
} // namespace gamemd
