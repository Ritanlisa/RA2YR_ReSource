// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_764FC0_e4.hpp"
#include "e4/classes/E4Recv_768000_e4.hpp"
#include "e4/classes/E4Recv_7692F0_e4.hpp"
#include "e4/classes/E4Recv_76A7E0_e4.hpp"
#include "e4/classes/E4Recv_76BFC0_e4.hpp"
#include "e4/classes/E4Recv_76C970_e4.hpp"
#include "e4/classes/E4Recv_76CA60_e4.hpp"
#include "e4/classes/E4Recv_76CBF0_e4.hpp"
#include "e4/classes/E4Recv_76EEB0_e4.hpp"
#include "e4/classes/E4Recv_76F210_e4.hpp"
#include "e4/classes/E4Recv_76F500_e4.hpp"
#include "e4/classes/E4Recv_771800_e4.hpp"

// 0x767FB0
namespace gamemd {
rc_ptr * ConstructWDTSelection_Create_767FB0(rc_ptr_base * a1, int a2, int a3, ReferenceCounted * aP3)
{
{
    void *v6;
    ReferenceCounted *v7;
    v6 = (void *)__2_YAPAXI_Z(0xD4u);
    if ( v6 )
    v7 = (ReferenceCounted *)ConstructWDTSelection_Create_767FB0_Create(v6, a2, a3, aP3);
    else
    v7 = 0;
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_Map;
    ComPtr::Set(a1, (int)v7);
    return (rc_ptr *)a1;
}
}
} // namespace gamemd

// 0x76BFB0
namespace gamemd {
int sub_76BFB0()
{
return 1;
}
} // namespace gamemd
