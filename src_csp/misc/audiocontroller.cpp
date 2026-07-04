#include "audiocontroller.hpp"

// 0x00402330
int  AudioController::UpdatePlayback(int this)
{
    uint32_t *v2; // edi
    int v3; // eax
    int v4; // eax
    uint32_t *v5; // eax
    int v6; // eax
    void (__thiscall *v7)(int); // eax
    if ( *(uint32_t *)(this + 168) )
    if ( *(uint32_t *)(this + 168) != -1 )
    --*(uint32_t *)(this + 168);
    v2 = *(uint32_t **)(this + 360);
    if ( v2 )
    v3 = AudioController::GetOffset(*(int **)(this + 360));
    *(uint32_t *)(this + 364) = v3;
    if ( v3 )
    *(uint32_t *)(this + 368) = *(uint32_t *)(v3 + 12);
    v4 = *(uint32_t *)(v3 + 16);
    *(uint32_t *)(this + 372) = v4;
    *(uint32_t *)(this + 376) = v4;
    *v2 = 0;
    else
    v5 = *(uint32_t **)(this + 360);
    *(uint32_t *)(this + 368) = *v5;
    v6 = v5[1];
    *(uint32_t *)(this + 372) = v6;
    *(uint32_t *)(this + 376) = v6;
    else
    *(uint32_t *)(this + 360) = 0;
    v7 = *(void (__thiscall **)(int))(this + 180);
    if ( v7 )
    v7(this);
    if ( *(uint32_t *)(this + 360) )
    (*(void (__thiscall **)(int))(*(uint32_t *)(this + 212) + 36))(this);
    return 0;
}

