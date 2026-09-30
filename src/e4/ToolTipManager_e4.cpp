// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ToolTipManager_7_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/ToolTipManager_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x724AA0
namespace gamemd {
char ToolTipManager::addRef(int a1)
{

  return 1; /*0x724aa2*/

}
} // namespace gamemd
// 0x724B80
namespace gamemd {
int ToolTipManager::ddtor(char a2)
{

  int result; // eax

  if ( a2 == 1 ) /*0x724b89*/
    ToolTipClass::initString((wchar_t *)this); /*0x724b8b*/
  result = *((unsigned int *)this + 1); /*0x724b90*/
  if ( result ) /*0x724b95*/
    return (*(int (**)(int, int))(*(unsigned int *)this + 16))(this, (char *)this + 24); /*0x724b9f*/
  return result; /*0x724ba2*/

}
} // namespace gamemd
// 0x724BB0
namespace gamemd {
void ToolTipManager::read(int a1)
{

  this->Debug::Log(); /*0x724bbd*/

}
} // namespace gamemd
// 0x724BD0
namespace gamemd {
int ToolTipManager::stubReturnFalse(int a1)
{

  return 0; /*0x724bd2*/

}
} // namespace gamemd
// 0x724F40
namespace gamemd {
DynamicVector * ToolTipManager_7::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_ToolTip_const);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x724f50*/
  {
    RA2_OPDEL(v3); /*0x724f58*/
    *(Block + 1) = 0; /*0x724f60*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x724f6b*/
  *(Block + 2) = 0; /*0x724f71*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x724f78*/
    RA2_OPDEL(Block); /*0x724f7b*/
  return (DynamicVector *)Block; /*0x724f85*/

}
} // namespace gamemd
