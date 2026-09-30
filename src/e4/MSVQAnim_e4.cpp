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

// 0x5CD290
namespace gamemd {
void * MSVQAnim::GetFrameRect(int * a2)
{

  int v3; // eax
  int *v4; // ecx

  if ( ((unsigned int)(g_abs_ABFB98)& 1) == 0 ) /*0x5cd2a0*/
  {
    g_abs_ABFBA0 = 0; /*0x5cd2ab*/
    (unsigned int)(g_abs_ABFB98)|= 1u; /*0x5cd2b1*/
    g_abs_ABFBA4 = 0; /*0x5cd2b7*/
    g_abs_ABFBA8 = 0; /*0x5cd2bd*/
    g_abs_ABFBAC = 0; /*0x5cd2c3*/
    atexit(nullsub_190); /*0x5cd2c9*/
  }
  v3 = (int *)(*((unsigned int *)this + 7));
  v4 = (int *)(v3 + 52); /*0x5cd2d6*/
  if ( !v3 ) /*0x5cd2d9*/
    v4 = &g_abs_ABFBA0; /*0x5cd2db*/
  *a2 = *v4; /*0x5cd2e9*/
  a2[1] = v4[1]; /*0x5cd2ee*/
  a2[2] = v4[2]; /*0x5cd2f4*/
  a2[3] = v4[3]; /*0x5cd2fb*/
  return a2; /*0x5cd2e8*/

}
} // namespace gamemd
// 0x5CD320
namespace gamemd {
int MSVQAnim::Stub()
{

  return *((unsigned char *)this + 45); /*0x5cd323*/

}
} // namespace gamemd
// 0x5CECB0
namespace gamemd {
MSVQAnim * MSVQAnim::QueryInterface(ObjectClass ** Block, char a2)
{

  void (***v3)(unsigned int, int); // ecx
  unsigned int **v4; // ecx
  ObjectClass *v5; // edi

  v3 = (void (***)(unsigned int, int))*(Block + 10); /*0x5cecb3*/
  *Block = (ObjectClass *)&vt_MSVQAnim; /*0x5cecb6*/
  if ( v3 ) /*0x5cecbe*/
    (**v3)(v3, 1); /*0x5cecc4*/
  v4 = (unsigned int **)*(Block + 7); /*0x5cecc6*/
  if ( v4 ) /*0x5ceccc*/
  {
    MovieContext::Cleanup(v4); /*0x5cecce*/
    v5 = *(Block + 7); /*0x5cecd3*/
    if ( v5 ) /*0x5cecd8*/
    {
      BinkMovie::Cleanup(*(Block + 7)); /*0x5cecdc*/
      RA2_OPDEL(v5); /*0x5cece2*/
    }
  }
  *Block = (ObjectClass *)&vt_MSAnim; /*0x5cecee*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x5cecf7*/
    RA2_OPDEL(Block); /*0x5cecfa*/
  return (MSVQAnim *)Block; /*0x5ced04*/

}
} // namespace gamemd