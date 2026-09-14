// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_633AC0_e4.hpp"
#include "e4/classes/E4Recv_636EB0_e4.hpp"
#include "e4/classes/E4Recv_638C40_e4.hpp"
#include "e4/classes/E4Recv_63DEC0_e4.hpp"
#include "e4/classes/E4Recv_63E1D0_e4.hpp"

// 0x633AC0
namespace gamemd {
unsigned int * E4Recv_633AC0::sub_633AC0()
{
{
    *(char *)this = 0;
    this->M112 = 0;
    this->M116 = -1;
    return this;
}
}
} // namespace gamemd

// 0x636EB0
namespace gamemd {
int E4Recv_636EB0::sub_636EB0()
{
{
    int v1;
    v1 = this->M20 - 1;
    if ( v1 >= 0 )
    return *(int *)(this->M8 + 4 * v1);
    else
    return 0;
}
}
} // namespace gamemd

// 0x638C40
namespace gamemd {
bool E4Recv_638C40::sub_638C40(int a2, char a3)
{
{
    if ( this != (void *)1 && this != (void *)11 )
    return 0;
    if ( a3 == 11 )
    return 1;
    return this == (void *)11 && !a3;
}
}
} // namespace gamemd
