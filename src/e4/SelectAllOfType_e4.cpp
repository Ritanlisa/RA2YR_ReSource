// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7342C0_e4.hpp"

// 0x6DA770
namespace gamemd {
char sub_6DA770()
{
{
    int *v0;
    int v1;
    bool v2;
    HouseClass *v3;
    if ( g_SelectionManager != (wchar_t *)1 )
    return 0;
    v0 = *(int **)g_ObjectClass_CurrentCount;
    if ( !(*(int (__thiscall **)(int))(**(int **)g_ObjectClass_CurrentCount + 60))(*(int *)g_ObjectClass_CurrentCount) )
    return 0;
    v1 = *v0;
    if ( g_GameMode_Current[0] )
  {
    v3 = (HouseClass *)(*(int (__thiscall **)(int *))(v1 + 60))(v0);
    v2 = (unsigned char)House::IsHumanPlayer(v3) == 0;
  }
    else
  {
    v2 = *(char *)((*(int (__thiscall **)(int *))(v1 + 60))(v0) + 493) == 0;
  }
    if ( !v2 )
    return 0;
    (*(void (__thiscall **)(int *))(*v0 + 336))(v0);
    return 1;
}
}
} // namespace gamemd
