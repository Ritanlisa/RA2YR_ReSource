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
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int ConstructWDTSelection_Create_767FB0_Create(int p0, int p1, int p2);  // x4:signals@0x768000
} // namespace gamemd

// 0x767FB0
namespace gamemd {  // G42.18 ns repair
rc_ptr * ConstructWDTSelection_Create_767FB0(rc_ptr_base * a1, int a2, int a3, ReferenceCounted * aP3)
{

  ReferenceCounted *v6; // eax
  void *v7; // edi

  v6 = (ReferenceCounted *)__2_YAPAXI_Z(0xD4u); /*0x767fbb*/
  if ( v6 ) /*0x767fc5*/
    v7 = ConstructWDTSelection_Create_767FB0_Create(v6, a2, a3, a4); /*0x767fd9*/
  else
    v7 = 0; /*0x767fdd*/
  ComPtr::Constructor((ComPtr *)this); /*0x767fe1*/
  /* X11: vtable install elided (X67 star-deref, RHS g_ptr_7F712C) */  /*0x767fe8*/
  ComPtr::Set((ComPtr *)this, (int)v7); /*0x767fef*/
  return this; /*0x767ff6*/

}
} // namespace gamemd

// 0x76BFB0
namespace gamemd {
int sub_76BFB0()
{
  return 1; /*0x76bfb5*/
}
} // namespace gamemd
