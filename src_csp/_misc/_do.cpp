#include "_do.hpp"

char __stdcall _do::_vt05(int a1)
{
    char result; // al
    int v2; // eax
    int v3; // ecx
    int v4; // esi
    result = ScenarioClass::MissionStubReturnZero2(a1);
    if ( result )
    v2 = 0;
    if ( Game_PlayerCount > 0 )
    v3 = Game_PlayerInfoArray;
    do
    v4 = *(uint32_t *)(v3 + 4 * v2);
    if ( *(uint32_t *)(v4 + 107) != -1 )
    *(uint32_t *)(v4 + 107) = v2;
    v3 = Game_PlayerInfoArray;
    ++v2;
    while ( v2 < Game_PlayerCount );
    return 1;
    return result;
}

bool  _do::_vt06(std::codecvt_base *this)
{
    bool result; // al
    int i; // eax
    int v3; // ecx
    result = ScenarioClass::createStartingForces(this);
    if ( result )
    for ( i = 0; i < Game_PlayerCount; ++i )
    v3 = *(uint32_t *)(Game_PlayerInfoArray + 4 * i);
    if ( *(uint32_t *)(v3 + 107) != -1 )
    *(uint32_t *)(v3 + 107) = i;
    return 1;
    return result;
}

char _do::_vt04()
{
    return 0;
}

uint32_t * _do::_vt00(uint32_t *Block, char a2)
{
    void (__thiscall ***v3)(uint32_t, int); // ecx
    void (__thiscall ***v4)(uint32_t, int); // ecx
    void (__thiscall ***v5)(uint32_t, int); // ecx
    v3 = (void (__thiscall ***)(uint32_t, int))*(Block + 4);
    *Block = &WorldDominationTour::FactionSelectDialogControl::`vftable';
    if ( v3 )
    (**v3)(v3, 1);
    v4 = (void (__thiscall ***)(uint32_t, int))*(Block + 5);
    if ( v4 )
    (**v4)(v4, 1);
    v5 = (void (__thiscall ***)(uint32_t, int))*(Block + 6);
    if ( v5 )
    (**v5)(v5, 1);
    OwnerDrawControl::InitVtable(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

