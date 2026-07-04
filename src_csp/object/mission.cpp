#include "mission.hpp"

int  Mission::GetMissionDelay(uint32_t *this)
{
    int v1; // edx
    int result; // eax
    uint32_t *v3; // esi
    int v4; // [esp+8h] [ebp-8h]
    v1 = *(this + 96);
    result = *(this + 98);
    v3 = this + 96;
    if ( v1 != -1 )
    if ( (int)CurrentFrame - v1 >= result )
    return result;
    result -= (int)CurrentFrame - v1;
    if ( result > 10 )
    result = IKnowWhatImDoing;
    if ( !IKnowWhatImDoing )
    result = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 4, 8);
    *v3 = CurrentFrame;
    v3[1] = v4;
    v3[2] = result;
    return result;
}

