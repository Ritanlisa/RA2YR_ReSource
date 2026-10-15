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
namespace gamemd {  // G42.18 ns repair
char ToolTipManager::addRef(int a1)
{
  return 1; /*0x724aa2*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x724B80
namespace gamemd {
int ToolTipManager::ddtor(char a2)
{

  int result; // eax

  if ( a2 == 1 ) /*0x724b89*/
    ((ToolTipClass *)this)->initString(); /*0x724b8b*/
  result = this->Position[0]; /*0x724b90*/
  if ( result ) /*0x724b95*/
    return (*(int (**)(ToolTipManager *, int *))(*&this->Duration + 16))( /*0x724b9f*/
             this,
             &this->DisplayTimer[1]);
  return result; /*0x724ba2*/

}
} // namespace gamemd
// 0x724BB0
namespace gamemd {
void ToolTipManager::read(int a1)
{
  Debug::Log(); /*0x724bbd*/
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

  v3 = *&Block->__pad_004; /*0x724f43*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x724f46*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x724f50*/
  {
    operator delete((void *)(v3)); /*0x724f58*/
    Block->Items = (unsigned int)(0); /*0x724f60*/
  }
  (Block->u32_D) = 0; /*0x724f6b*/
  Block->Capacity = 0; /*0x724f71*/
  if ( (a2 & 1) != 0 ) /*0x724f78*/
    operator delete((void *)(Block)); /*0x724f7b*/
  return Block->tail_0; /*0x724f85*/
}
} // namespace gamemd
