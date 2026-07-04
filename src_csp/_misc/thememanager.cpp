#include "thememanager.hpp"

void  ThemeManager::Cleanup(int this)
{
    int v2; // eax
    int v3; // ecx
    int v4; // eax
    uint32_t *v5; // ecx
    while ( *(int *)(this + 36) > 0 )
    __3_YAXPAX_Z(**(void ***)(this + 24));
    v2 = *(uint32_t *)(this + 36);
    if ( v2 > 0 )
    v3 = v2 - 1;
    v4 = 0;
    for ( *(uint32_t *)(this + 36) = v3;
    v4 < *(uint32_t *)(this + 36);
    *(uint32_t *)(*(uint32_t *)(this + 24) + 4 * v4 - 4) = *(uint32_t *)(*(uint32_t *)(this + 24) + 4 * v4) )
    ++v4;
    v5 = *(uint32_t **)(this + 44);
    if ( v5 )
    ThemeClass::RequestBuffer(v5);
    ThemeManager::ProcessCallback(*(uint32_t *)(this + 44));
    Audio::Release(*(uint32_t **)(this + 44));
    AudioSample::Destructor(*(void **)(this + 44));
    *(uint32_t *)(this + 44) = 0;
}

