// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x755C60
namespace gamemd {
char * sub_755C60(char * a1, int a2)
{
{
    char *result;
    result = a1;
    if ( a2 >= 4 )
    a2 -= 4;
    qmemcpy(a1, (char *)&DataGlobal_B450B8 + 48 * a2, 0x30u);
    return result;
}
}
} // namespace gamemd
