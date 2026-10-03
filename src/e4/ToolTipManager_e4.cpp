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
#include "e4/classes/ToolTipClass_e4.hpp"

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
    ((ToolTipClass *)((ToolTipClass *)this))->initString(); /*0x724b8b*/
  result = this->Position[0]; /*0x724b90*/
  if ( result ) /*0x724b95*/
    return (*(int (**)(ToolTipManager *, int *))(*(unsigned int *)&this->IsVisible + 16))( /*0x724b9f*/
             this,
             (int *)&this->DisplayTimer[1]);
  return result; /*0x724ba2*/

}
} // namespace gamemd
// 0x724BB0
namespace gamemd {
void ToolTipManager::read(int a1)
{

  ((gamemd::Debug *)this)->Log(); /*0x724bbd*/

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
DynamicVector * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00724F40.json)
}
} // namespace gamemd
