// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_765380_e4.hpp"
#include "e4/classes/E4Recv_766060_e4.hpp"
#include "e4/classes/Campaign_WorldDominationTour_24_e4.hpp"

// 0x765380
namespace gamemd {
unsigned int * E4Recv_765380::sub_765380(unsigned int * a2, int a3)
{
{
    int v4;
    void **v5;
    char *v6;
    int v7;
    v6 = this + 24;
    v7 = 0;
    v5 = &vt_VectorCursor_rc_ptr_WorldDominationTour_Conflict_DynamicVectorClass_rc_ptr_WorldDominationTour_Conflict;
    if ( Campaign_WorldDominationTour_24::AddRef(&v5) )
  {
    do
    {
    if ( FindWDTTerritoryClass_Find_Find(*(int **)(*((int *)(v6) + 1) + 8 * v7 + 4)) == a3 )
    break;
    ((void (__thiscall *)(void ***))v5[2])(&v5);
    }
    while ( ((unsigned char (__thiscall *)(void ***))v5[1])(&v5) );
  }
    v4 = v7;
    *((int*)(a2) + 1) = v6;
    *((int*)(a2) + 2) = v4;
    *a2 = &vt_VectorCursor_rc_ptr_WorldDominationTour_Conflict_DynamicVectorClass_rc_ptr_WorldDominationTour_Conflict;
    return a2;
}
}
} // namespace gamemd

// 0x766060
namespace gamemd {
int E4Recv_766060::sub_766060()
{
{
    int v1;
    v1 = this->M12;
    if ( v1 )
    return *(int *)(v1 + 8);
    else
    return 0;
}
}
} // namespace gamemd
