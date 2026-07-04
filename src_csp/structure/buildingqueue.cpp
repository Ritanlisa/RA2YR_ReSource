#include "buildingqueue.hpp"

bool  BuildingQueue::IsCellSuitable(uint32_t *this, int a2)
{
    int v4; // ecx
    int v5; // esi
    uint32_t *v6; // eax
    if ( BridgeClass::GetCellData(this, a2) )
    return 1;
    v4 = 16 * a2 + *(this + 2);
    if ( *(int *)v4 < 0 )
    return 0;
    v5 = *((uint32_t *)g_TriggerTypeCount + *(uint32_t *)v4);
    if ( !*(uint8_t *)(v5 + 5489) )
    return 0;
    v6 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)(v4 + 4));
    if ( v6[17] == *(uint32_t *)(*(uint32_t *)(v5 + 3668) + 660) )
    return 1;
    return Cell::IsBridge(v6) != 0;
}

