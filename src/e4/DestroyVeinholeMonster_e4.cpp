// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_74F620_e4.hpp"
#include "e4/classes/E4Recv_74F6F0_e4.hpp"

// 0x74F620
namespace gamemd {
void E4Recv_74F620::sub_74F620()
{
{
    int i;
    for ( i = 0; i <= *(int *)this; *(int *)(this->M8 + 4 * i - 4) = 0 )
    ++i;
    __Release__NonReentrantLock_details_Concurrency__QAEXXZ_0(this);
}
}
} // namespace gamemd

// 0x74F6F0
namespace gamemd {
char E4Recv_74F6F0::DestroyVeinholeMonster_Destroy_74F6F0(DynamicVector * aP1)
{
{
    int v2;
    DynamicVector *v3;
    int v4;
    v2 = this->M16;
    v3 = aP1;
    if ( (int)aP1 >= v2 )
    return 0;
    v4 = v2 - 1;
    this->M16 = v4;
    if ( (int)aP1 < v4 )
  {
    do
    {
    v3 = (DynamicVector *)((char *)(v3) + 1);
    *(int *)(this->M4 + 4 * (int)v3 - 4) = *(int *)(this->M4 + 4 * (int)v3);
    }
    while ( (int)v3 < this->M16 );
  }
    return 1;
}
}
} // namespace gamemd
