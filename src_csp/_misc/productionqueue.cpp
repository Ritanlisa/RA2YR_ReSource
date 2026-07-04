#include "productionqueue.hpp"

char  ProductionQueue::CompleteOrCancel(int this)
{
    wchar_t *v2; // esi
    wchar_t *v3; // esi
    int v4; // [esp+Ch] [ebp-8h]
    if ( *(uint32_t *)(this + 88) && *(uint32_t *)(this + 36) == 54 )
    *(uint32_t *)(this + 88) = 0;
    *(uint8_t *)(this + 112) = 1;
    *(uint8_t *)(this + 93) = 1;
    *(uint32_t *)(this + 36) = 0;
    v2 = CurrentFrame;
    *(uint32_t *)(this + 56) = 0;
    *(uint32_t *)(this + 44) = v2;
    *(uint32_t *)(this + 48) = v4;
    *(uint32_t *)(this + 52) = 0;
    return 1;
    else if ( *(uint32_t *)(this + 104) && *(uint32_t *)(this + 36) == 54 )
    *(uint32_t *)(this + 104) = -1;
    *(uint8_t *)(this + 112) = 1;
    *(uint8_t *)(this + 93) = 1;
    *(uint32_t *)(this + 36) = 0;
    v3 = CurrentFrame;
    *(uint32_t *)(this + 56) = 0;
    *(uint32_t *)(this + 44) = v3;
    *(uint32_t *)(this + 48) = v4;
    *(uint32_t *)(this + 52) = 0;
    return 1;
    else
    return 0;
}

