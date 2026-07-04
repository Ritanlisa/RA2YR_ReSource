#include "territory_worlddominationtour_8_.hpp"

char  Territory_WorldDominationTour_8_::_vt01(int this, char a2)
{
    DWORD Ticks; // eax
    uint32_t *v3; // esi
    DWORD *v4; // esi
    DWORD v6; // [esp+4h] [ebp-8h]
    LOBYTE(Ticks) = a2;
    *(uint8_t *)(this + 12) = a2;
    if ( !a2 )
    v3 = *(uint32_t **)(this + 28);
    if ( (int)v3[244] > 0 )
    StopThemeClass(1);
    (*(void (__thiscall **)(uint32_t *))(v3[240] + 12))(v3 + 240);
    Ticks = Timer::GetTicks();
    v4 = v3 + 235;
    *v4 = Ticks;
    v4[1] = v6;
    v4[2] = 0;
    return Ticks;
}

signed int  Territory_WorldDominationTour_8_::_vt02(signed int *this)
{
    signed int result; // eax
    signed int v3; // edi
    result = *(this + 4);
    if ( result != -1 )
    v3 = *(this + 6);
    result = Timer::GetTicks() - *(this + 4);
    if ( result >= v3 )
    *(this + 6) = 0;
    *(this + 4) = -1;
    else
    *(this + 4) = -1;
    *(this + 6) = v3 - result;
    return result;
}

void  Territory_WorldDominationTour_8_::_vt03(uint32_t *this)
{
    if ( *(this + 4) == -1 )
    *(this + 4) = Timer::GetTicks();
}

char  Territory_WorldDominationTour_8_::_vt04(int *this, int a2, int a3)
{
    AudioQueue::Update(*(this + 7));
    return 0;
}

void  Territory_WorldDominationTour_8_::_vt05(int *this, int a2, int a3)
{
    AudioQueue::Update(*(this + 7));
}

uint32_t *__stdcall Territory_WorldDominationTour_8_::_vt06(uint32_t *a1)
{
    int v2; // [esp+0h] [ebp-10h]
    int v3; // [esp+4h] [ebp-Ch]
    int v4; // [esp+8h] [ebp-8h]
    int v5; // [esp+Ch] [ebp-4h]
    *a1 = v2;
    a1[1] = v3;
    a1[2] = v4;
    a1[3] = v5;
    return a1;
}

void  Territory_WorldDominationTour_8_::_vt08(int *this, int a2)
{
    AudioQueue::Update(*(this + 7));
}

uint32_t * Territory_WorldDominationTour_8_::_vt00(uint32_t *Block, char a2)
{
    *Block = &WorldDominationTour::Voices::Anim::`vftable';
    VtableStub::5CB6C0(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

