// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ScoreAnimClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/String_e4.hpp"

// 0x691000
namespace gamemd {
unsigned int * ScoreAnimClass::Constructor_ScoreAnimClass_0(unsigned int * Block, char a2)
{

  *Block = (unsigned int)(&vt_ScoreAnimClass);
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x69100f*/
    RA2_OPDEL(Block); /*0x691012*/
  return Block; /*0x69101c*/

}
} // namespace gamemd
// 0x691020
namespace gamemd {
unsigned int * ScoreAnimClass::Constructor_ScoreAnimClass_1(unsigned int * Block, char a2)
{

  *Block = (unsigned int)(&vt_ScoreAnimClass);
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x69102f*/
    RA2_OPDEL(Block); /*0x691032*/
  return Block; /*0x69103c*/

}
} // namespace gamemd
// 0x6910A0
namespace gamemd {
unsigned int * ScoreAnimClass::Constructor_ScoreFontClass(unsigned int * Block, char a2)
{

  void *v3; // eax
  char *v4; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 3)));
  *Block = (unsigned int)(&vt_ScoreFontClass);
  if ( v3 && *((unsigned char *)Block + 16) == 1 ) /*0x6910b7*/
  {
    RA2_OPDEL(v3); /*0x6910ba*/
    *(Block + 3) = 0; /*0x6910c2*/
    *((unsigned char *)Block + 16) = 0; /*0x6910c5*/
  }
  if ( !--g_abs_B0558C ) /*0x6910d3*/
  {
    v4 = (char *)(&g_abs_B05594);
    do /*0x6910e7*/
    {
      *((unsigned int *)v4 - 1) = 0; /*0x6910da*/
      *v4 = 0; /*0x6910dd*/
      v4 += 8; /*0x6910df*/
    }
    while ( (int)v4 < (int)((char *)&g_abs_B055A8 + 4) ); /*0x6910e7*/
  }
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x6910ee*/
    RA2_OPDEL(Block); /*0x6910f1*/
  return Block; /*0x6910fb*/

}
} // namespace gamemd