// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_44F6E0_e4.hpp"

// 0x44F6E0
namespace gamemd {
unsigned int * E4Recv_44F6E0::sub_44F6E0(unsigned int * a2, int a3)
{
{
    int v3;
    int v4;
    int *v5;
    int v6;
    int v7;
    char v9[12];
    int v10;
    v3 = 6;
    v4 = 5;
    v5 = (int *)this->Vf72(v9);
    v6 = *v5 / 256;
    v7 = v5[1] / 256;
    if ( a3 )
  {
    if ( a3 == 2 )
    v4 = 0;
  }
    else
  {
    v3 = 0;
  }
    if ( (short)v6 - DataGlobal_87F90C > g_AircraftTrackerPool / 2 )
    v3 = -v3;
    if ( (short)v7 - DataGlobal_87F910 > g_AircraftTrackerState / 2 )
    v4 = -v4;
    LOWORD(v10) = v6 + v3;
    HIWORD(v10) = v7 + v4;
    *a2 = v10;
    return a2;
}
}
} // namespace gamemd

// 0x44FE60
namespace gamemd {
int INIClass::sub_44FE60()
{
{
    int result;
    int i;
    int v4;
    INIClass::ClearSection((int)this, (INIClass *)aStructures, 0);
    result = *(int *)&g_NetworkPlayerBuffer[5396];
    for ( i = 0; i < *(int *)&g_NetworkPlayerBuffer[5396]; ++i )
  {
    v4 = *(int *)(*(int *)&g_NetworkPlayerBuffer[5384] + 4 * i);
    if ( !*(char *)(v4 + 129) && !*(char *)(*(int *)(v4 + 1312) + 5823) )
    BuildingClass::ReadConstructionData(v4, this);
    result = *(int *)&g_NetworkPlayerBuffer[5396];
  }
    return result;
}
}
} // namespace gamemd
