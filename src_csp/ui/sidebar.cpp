#include "sidebar.hpp"

// 0x00533F50
int  Sidebar::ScrollSidebarSkipGame(const char *this)
{
    int result; // eax
    int v2; // edi
    result = g_CommandClassVector_State;
    v2 = 0;
    if ( g_CommandClassVector_State > 0 )
    while ( strcmp(
    (const char *)(*(int (__thiscall **)(uint32_t))(**((uint32_t **)g_CommandClass_Capacity + v2) + 4))(*((uint32_t *)g_CommandClass_Capacity + v2)),
    this) )
    result = g_CommandClassVector_State;
    if ( ++v2 >= g_CommandClassVector_State )
    return result;
    return (*(int (__thiscall **)(uint32_t, uint32_t))(**((uint32_t **)g_CommandClass_Capacity + v2) + 32))(
    *((uint32_t *)g_CommandClass_Capacity + v2),
    0);
    return result;
}

// 0x006A6140
char  Sidebar::FindProductionType(uint32_t *this, int a2, int a3, int a4)
{
    int v5; // eax
    int v6; // edx
    int v7; // eax
    int v8; // ecx
    int v9; // esi
    uint32_t *i; // edx
    switch ( a3 )
    case 15:
    case 16:
    v5 = 2;
    break;
    case 1:
    case 40:
    case 2:
    case 3:
    v5 = 3;
    break;
    case 6:
    case 7:
    v5 = GetHouseTechLevel(a3, a4) == 5;
    break;
    case 57:
    case 32:
    case 31:
    v5 = 1;
    break;
    default:
    v5 = -1;
    break;
    v6 = 997 * v5;
    v7 = 0;
    v8 = (int)(this + v6 + 1361);
    v9 = *(this + v6 + 1382);
    if ( v9 <= 0 )
    return 0;
    for ( i = (uint32_t *)(v8 + 88); i[1] != a3 || *i != a4; i += 13 )
    if ( ++v7 >= v9 )
    return 0;
    *(uint32_t *)(v8 + 52 * v7 + 100) = a2;
    *(uint8_t *)(v8 + 61) = 1;
    *(uint8_t *)(v8 + 60) = 1;
    MapClass::MarkForRedraw(&MapClass_Instance, 0);
    return 1;
}

