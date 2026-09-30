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
    ToolTipClass::initString(); /*0x724b8b*/
  result = this->Position[0]; /*0x724b90*/
  if ( result ) /*0x724b95*/
    /*0x724b90*/
  if ( result ) /*0x724b95*/
    return (*(int (**)(int, int))(*(unsigned int *)this + 16))(this, this + 24);
             this,
             &this->DisplayTimer[1]);
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
DynamicVector * ToolTipManager_7::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_ToolTip_const___vftable; /*0x724f46*/
  if ( v3 && this->IsAllocated ) /*0x724f50*/
  {
    RA2_OPDEL(v3); /*0x724f58*/
    *(unsigned int *)&this->Items = 0; /*0x724f60*/
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
  *(unsigned short *)&this->Capacity = 0; /*0x724f71*/
  if ( (a2 & 1) != 0 ) /*0x724f78*/
    RA2_OPDEL(); /*0x724f7b*/
  return this; /*0x724f85*/
}
} // namespace gamemd
