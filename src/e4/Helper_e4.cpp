// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4371D0
char Helper::ProcessData(void ** a1, int a2, int * a3)
{
{
    int v6;
    int v7;
    int v8;
    void *v9;
    void *v10[4];
    int (__thiscall **v11)(void *, char);
    int v12;
    int v13;
    int v14;
    int v15;
    int v16[3];
    if ( *(int *)(a2 + 8) <= 0 || *(int *)(a2 + 12) <= 0 )
    return 0;
    v6 = *a3;
    v7 = (*((int (__thiscall **)(void **))*a1 + 28))(a1);
    v8 = *(int *)(a2 + 12);
    v12 = *(int *)(a2 + 8);
    v13 = v8;
    v14 = 0;
    v11 = &XSurface_Vtable;
    v15 = v7;
    Buffer::Init(v16, v6, v7 * v8 * v12);
    v9 = *(void **)(a2 + 8);
    v10[3] = *(void **)(a2 + 12);
    v11 = &BSurface_Vtable;
    v10[0] = 0;
    v10[1] = 0;
    v10[2] = v9;
    LOBYTE(v6) = XSurface::BlitPart((int *)&v11, v10, a1, (void **)a2, 0, 1);
    Vector::Clear((int)v16);
    return v6;
}
}

// 0x6F2040
namespace gamemd {
int sub_6F2040()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6F2040()
{
  int result; // eax
  int i; // esi

  result = MEMORY[0xA8ECB0]; /*0x6f2040*/
  for ( i = 0; i < MEMORY[0xA8ECB0]; ++i ) /*0x6f204a*/
  {
    TeamTypeClass::ProcessTaskForce(*((_DWORD *)MEMORY[0xA8ECA4] + i)); /*0x6f2054*/
    result = MEMORY[0xA8ECB0]; /*0x6f2059*/
  }
  return result; /*0x6f2063*/
}
}
} // namespace gamemd

// 0x550240
namespace gamemd {
char sub_550240()
{
{
    char result;
    int i;
    result = g_TimerPool;
    for ( i = g_TimerPool - 1; i >= 0; --i )
    result = TacticalClass::RenderCells(*((int *)(DataGlobal_ABC87C) + i));
    return result;
}
}
} // namespace gamemd

// 0x5D81B0
namespace gamemd {
unsigned int * sub_5D81B0(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
{
    int *v6;
    v6 = __2_YAPAXI_Z(0x40u);
    if ( v6 )
    return MPBattleClass::MPManBattleClass(v6, a1, a2, a3, a4, a5, a6);
    else
    return 0;
}
}
} // namespace gamemd
