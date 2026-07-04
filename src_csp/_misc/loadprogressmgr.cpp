#include "loadprogressmgr.hpp"

// 0x00552A40
uint32_t *LoadProgressMgr::GetInstance()
{
    uint32_t *result; // eax
    result = dword_ABC9BC;
    if ( !dword_ABC9BC )
    result = __2_YAPAXI_Z(0x64u);
    if ( result )
    *result = &LoadProgressMgr::`vftable';
    result[1] = 0;
    result[2] = 0;
    result[15] = 0;
    result[16] = 0;
    result[17] = 0;
    result[18] = 0;
    result[19] = 0;
    *((uint8_t *)result + 80) = 0;
    *((uint8_t *)result + 81) = 0;
    *((uint8_t *)result + 82) = 0;
    result[21] = 0;
    result[22] = 0;
    result[23] = 0;
    result[24] = 0;
    dword_ABC9BC = result;
    else
    dword_ABC9BC = 0;
    return 0;
    return result;
}

void LoadProgressMgr::Destroy()
{
    if ( dword_ABC9BC )
    LoadProgressMgr::ReleaseBuffer(dword_ABC9BC);
    __3_YAXPAX_Z(dword_ABC9BC);
    dword_ABC9BC = 0;
}

