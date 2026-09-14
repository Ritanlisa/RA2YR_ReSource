// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5E8760
BOOL Settings::CheckString()
{
{
    char *v0;
    v0 = CharToWideString(g_GameSetupBuffer);
    return wcscmp((const wchar_t *)v0, &g_CurrentPlayerName) == 0;
}
}
