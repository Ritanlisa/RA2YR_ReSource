// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/Mixer_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/FoggedObjectClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Font_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/GUID_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/FogOfWar_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/GameOption_e4.hpp"
#include "e4/classes/VoxClass_e4.hpp"
#include "e4/classes/BufferIO_e4.hpp"
#include "e4/classes/FontClass_e4.hpp"
#include "e4/classes/IPersistStream_e4.hpp"
#include "e4/classes/AudioFileClass_e4.hpp"
#include "e4/classes/ParasiteClass_e4.hpp"
#include "e4/classes/SuperClass_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/COMObject_e4.hpp"

// 0x4D3590
namespace gamemd {
AbstractClass * FootClass::Destruct()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D3590)
}
} // namespace ra2

// 0x4D98C0
namespace gamemd {
void FootClass::Destroyed(int a2)
{

  int64_t v3; // rax
  unsigned char v4[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (uint8_t)((House*)(House *)((unsigned int *)this)[0])->IsHumanPlayer() /*0x4d98dd*/
    && !*(unsigned char *)((*((int (**)(FootClass *))this->vtable1 + 33))(this) + 3412) )
  {
    v3 = ((int64_t (*)(FootClass *, unsigned char *))*((unsigned int *)this->vtable1 + 110))(this, v4); /*0x4d98f0*/
    if ( (uint8_t)CreateTriggerClassIfFarEnough(7, SHIDWORD(v3), *(unsigned int *)v3) ) /*0x4d98fe*/
      ((VoxClass *)((VoxClass *)(unsigned int *)((char *)&stru_822420 + 8)))->FindAndPlay(-1); /*0x4d9911*/
  }

}
} // namespace ra2

// 0x70F7E0
namespace gamemd {
int FootClass::updateThreat()
{

  int v1; // edx
  int v2; // eax

  v1 = ((unsigned int *)this)[0]; /*0x70f7e0*/
  v2 = ((unsigned int *)this)[2]; /*0x70f7e6*/
  if ( v1 != -1 ) /*0x70f7ef*/
  {
    if ( *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416) - v1 < v2 ) /*0x70f7fb*/
      return v2 == *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416) - v1; /*0x70f808*/
    v2 = 0; /*0x70f809*/
  }
  return v2 == 0; /*0x70f808*/

}
} // namespace ra2

// 0x710000
namespace gamemd {
AbstractClass * FootClass::FootClass_ImbueLocomotor(void * a1, void * a2, void * a3, void *a4, void *a5, void *a6)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x710000)
}
} // namespace ra2

// 0x41C120
namespace gamemd {
void FootClass::Stub(int a1)
{

  ; /*0x41c120*/

}
} // namespace gamemd

// 0x50DAA0
namespace gamemd {
unsigned int FootClass::checkTurning()
{

  unsigned int result; // eax

  result = ((unsigned int *)this)[0]; /*0x50daa0*/
  if ( result >= 4 ) /*0x50daa8*/
    return 0; /*0x50daaf*/
  return result; /*0x50dab1*/

}
} // namespace gamemd
