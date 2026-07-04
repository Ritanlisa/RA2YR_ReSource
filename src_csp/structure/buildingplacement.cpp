#include "buildingplacement.hpp"

bool  BuildingPlacement::IsPlacementFlagSet(unsigned __int8 *this, unsigned int a2, char a3)
{
    unsigned __int8 v3; // al
    if ( a2 < 2 )
    return 0;
    if ( a3 )
    v3 = *(this + 296);
    else
    v3 = *(this + 292);
    return ((unsigned __int8)(1 << a2) & v3) == 0;
}

