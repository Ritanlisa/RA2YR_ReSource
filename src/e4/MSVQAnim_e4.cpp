// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BinkMovie_e4.hpp"
#include "e4/classes/MSVQAnim_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/MSPCXAnim_26_e4.hpp"
#include "e4/classes/MSPCXAnim_42_e4.hpp"
#include "e4/classes/MainMenu_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/MovieContext_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x5CD290
namespace gamemd {  // G42.18 ns repair
void * MSVQAnim::GetFrameRect(int * a2)
{

  int MSVQAnim_field_0x1C; // eax
  int *p_parTimeMedium; // ecx

  if ( (g_MissionQueueFrame.__pad_3566[58] & 1) == 0 ) /*0x5cd2a0*/
  {
    g_MissionQueueFrame.parTimeMedium = 0; /*0x5cd2ab*/
    g_MissionQueueFrame.__pad_3566[58] |= 1u; /*0x5cd2b1*/
    g_MissionQueueFrame.parTimeDifficult = 0; /*0x5cd2b7*/
    *(unsigned int *)g_MissionQueueFrame.underParTitle = 0; /*0x5cd2bd*/
    *(unsigned int *)&g_MissionQueueFrame.underParTitle[4] = 0; /*0x5cd2c3*/
    atexit(nullsub_190); /*0x5cd2c9*/
  }
  MSVQAnim_field_0x1C = this->q01C; /*0x5cd2d1*/
  p_parTimeMedium = (int *)(MSVQAnim_field_0x1C + 52); /*0x5cd2d6*/
  if ( !MSVQAnim_field_0x1C ) /*0x5cd2d9*/
    p_parTimeMedium = &g_MissionQueueFrame.parTimeMedium; /*0x5cd2db*/
  *a2 = *p_parTimeMedium; /*0x5cd2e9*/
  a2[1] = p_parTimeMedium[1]; /*0x5cd2ee*/
  a2[2] = p_parTimeMedium[2]; /*0x5cd2f4*/
  a2[3] = p_parTimeMedium[3]; /*0x5cd2fb*/
  return a2; /*0x5cd2e8*/

}
} // namespace gamemd
// 0x5CD320
namespace gamemd {
int MSVQAnim::Stub()
{
  return this->u32_2D; /*0x5cd323*/
}
} // namespace gamemd
// 0x5CECB0
namespace gamemd {
MSVQAnim * MSVQAnim::QueryInterface(char a2)
{

  void (***v3)(unsigned int, int); // ecx
  MovieContext *MSVQAnim_field_0x1C; // ecx
  void *v5; // edi

  v3 = (void (***)(unsigned int, int))this->u32_28; /*0x5cecb3*/
  /* X11: vtable install elided (implicit via MSVQAnim virtuals 0x5cecb6) */
  if ( v3 ) /*0x5cecbe*/
    (**v3)(v3, 1); /*0x5cecc4*/
  MSVQAnim_field_0x1C = (MovieContext *)this->MSVQAnim_field_0x1C; /*0x5cecc6*/
  if ( MSVQAnim_field_0x1C ) /*0x5ceccc*/
  {
    MovieContext::Cleanup(MSVQAnim_field_0x1C); /*0x5cecce*/
    v5 = (void *)this->MSVQAnim_field_0x1C; /*0x5cecd3*/
    if ( v5 ) /*0x5cecd8*/
    {
      BinkMovie::Cleanup((BinkMovie *)this->MSVQAnim_field_0x1C); /*0x5cecdc*/
      __3_YAXPAX_Z(v5); /*0x5cece2*/
    }
  }
  *(unsigned int *)this->__pad_0 = &MSAnim::`vftable'; /*0x5cecee*/
  if ( (a2 & 1) != 0 ) /*0x5cecf7*/
    __3_YAXPAX_Z(this); /*0x5cecfa*/
  return this->vtable1; /*0x5ced04*/

}
} // namespace gamemd