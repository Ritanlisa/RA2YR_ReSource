// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_779690_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x72B460
namespace gamemd {
void sub_72B460()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72B460)
}
} // namespace gamemd

// 0x72B870
namespace gamemd {
void sub_72B870()
{
  if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1008] ) /*0x72b87b*/
  {
    (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1008])( /*0x72b881*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1008],
      1);
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1008] = 0; /*0x72b883*/
  }
  if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1004] ) /*0x72b890*/
  {
    RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1004]); /*0x72b893*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1004] = 0; /*0x72b89b*/
  }
  if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[996] ) /*0x72b8a8*/
  {
    RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[996]); /*0x72b8ab*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[996] = 0; /*0x72b8b3*/
  }
  if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1000] ) /*0x72b8c1*/
  {
    (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1000])( /*0x72b8c7*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1000],
      1);
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1000] = 0; /*0x72b8c9*/
  }
}
} // namespace gamemd
