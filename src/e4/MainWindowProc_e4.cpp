// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_724000_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/AsyncIO_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/Main_e4.hpp"
#include "app/cmdline.hpp"

// 0x777420
namespace gamemd {
AbstractClass * * sub_777420()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x777420)
}
}
// 0x5C09A0
namespace gamemd {
int sub_5C09A0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C09A0)
}
}
// 0x5C0980
namespace gamemd {
bool sub_5C0980()
{
  return dword_ABF3F4 || dword_ABF3F8; /*0x5c0994*/
}
} // namespace gamemd

// 0x724000
namespace gamemd {
char * E4Recv_724000::sub_724000(int a2)
{

  char *v3; // ecx
  int v4; // edx

  v3 = (char *)((unsigned char *)this + 564);
  *((unsigned int *)this + 1) = 0; /*0x724010*/
  *((unsigned int *)this + 2) = a2; /*0x724013*/
  *((unsigned char *)this + 12) = 0; /*0x724016*/
  *((unsigned int *)this + 138) = 1000; /*0x724019*/
  *((unsigned int *)this + 140) = 10000; /*0x724023*/
  *((unsigned int *)v3 + 1) = 0; /*0x72402d*/
  *((unsigned int *)v3 + 2) = 0; /*0x724030*/
  v3[12] = 1; /*0x724033*/
  v3[13] = 0; /*0x724037*/
  *(unsigned int *)v3 = (unsigned int)(&vt_DynamicVectorClass); /*0x72403a*/
  *((unsigned int *)v3 + 5) = 10; /*0x724040*/
  *((unsigned int *)v3 + 4) = 0; /*0x724047*/
  *((unsigned int *)this + 147) = 0; /*0x72404a*/
  *((unsigned int *)this + 148) = 0; /*0x724050*/
  *((unsigned int *)this + 149) = 0; /*0x724056*/
  *((unsigned char *)this + 600) = 0; /*0x72405c*/
  *((unsigned int *)this + 151) = 0; /*0x724062*/
  v4 = *(unsigned int *)v3; /*0x724068*/
  *(unsigned int *)this = (unsigned int)(&vt_ToolTipManager); /*0x72406a*/
  (*(void (**)(char *))(v4 + 12))(v3); /*0x724070*/
  __3_YAXPAX_Z(*((void **)this + 147)); /*0x72407a*/
  *((unsigned int *)this + 147) = 0; /*0x724082*/
  *((unsigned int *)this + 148) = 0; /*0x724088*/
  *((unsigned int *)this + 149) = 0; /*0x72408e*/
  *((unsigned char *)this + 600) = 0; /*0x724094*/
  *((unsigned int *)this + 151) = 0; /*0x72409a*/
  return (char *)(this); /*0x7240a2*/

}
} // namespace gamemd
