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

  int *team; // ecx
  int v3; // eax
  int v4; // eax
  ParasiteClass *parasiteImUsing; // ecx
  unsigned int *v6; // eax
  int v7; // eax
  void *v8; // eax
  void *v9; // eax
  FootClass *v11; // [esp+8h] [ebp-4h] BYREF

  team = (int *)this->team; /*0x4d3597*/
  this->vtable1 = &vt_FootClass; /*0x4d359d*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_FootClass); /*0x4d35a5*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_FootClass); /*0x4d35ac*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_FootClass); /*0x4d35b3*/
  if ( team && byte_A8E9A0 ) /*0x4d35c2*/
    ((TeamClass *)(team))->LiberateMember_Start((int)this, 0xFFFFFFFF, 0); /*0x4d35c8*/
  v11 = this; /*0x4d35dd*/
  v3 = (*((int (**)(FootClass *, FootClass **))FootClass_Array.TechnoClass + 4))(&FootClass_Array, &v11); /*0x4d35e1*/
  if ( v3 != -1 ) /*0x4d35e7*/
    FootClass::RemoveFromPointerArray(&FootClass_Array, v3); /*0x4d35ef*/
  v11 = this; /*0x4d3604*/
  v4 = (*(int (**)(char *, FootClass **))(*(unsigned int *)(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 2) + 16))( /*0x4d3608*/
         (char *)(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 2),
         &v11);
  if ( v4 != -1 ) /*0x4d360e*/
    ((DynamicVector *)((DynamicVector *)(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 2)))->RemoveItem(v4); /*0x4d3616*/
  parasiteImUsing = (gamemd::ParasiteClass *)(this->parasiteImUsing); /*0x4d361b*/
  if ( parasiteImUsing ) /*0x4d3623*/
  {
    (*((void (**)(ParasiteClass *, int))parasiteImUsing->vtable1 + 8))(parasiteImUsing, 1); /*0x4d3629*/
    this->parasiteImUsing = 0; /*0x4d362c*/
  }
  if ( (&this->currentJumpjetMapCoords)[0] != g_FootClass_Pool ) /*0x4d3646*/
  {
    v6 = ((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj((int16_t *)this->currentJumpjetMapCoords); /*0x4d365b*/
    if ( (FootClass *)v6[56] == this ) /*0x4d3666*/
      v6[56] = 0; /*0x4d3668*/
  }
  ((Mixer*)(Mixer *)this->audioController7)->ReleaseChannel(); /*0x4d3677*/
  AudioFileClass::Release((AudioFileClass *)this->audioController7); /*0x4d367e*/
  v7 = (&this->locomotor)[0]; /*0x4d3683*/
  if ( v7 ) /*0x4d368b*/
    (*(void (**)(int))(*(unsigned int *)v7 + 8))((&this->locomotor)[0]); /*0x4d3690*/
  v8 = *(void **)this->__pad_5B0; /*0x4d3693*/
  (&this->FootClass_field_abstract_array_5AC)[0] = (int)&vt_VectorClass; /*0x4d36a0*/
  if ( v8 && this->__pad_5B0[9] ) /*0x4d36a8*/
  {
    __3_YAXPAX_Z(v8); /*0x4d36b1*/
    *(unsigned int *)this->__pad_5B0 = 0; /*0x4d36b9*/
  }
  this->__pad_5B0[9] = 0; /*0x4d36bf*/
  *(unsigned int *)&this->__pad_5B0[4] = 0; /*0x4d36c5*/
  v9 = *(void **)this->__pad_58C; /*0x4d36cb*/
  (&this->unknownAbstractArray588)[0] = (int)&vt_VectorClass; /*0x4d36d1*/
  if ( v9 && this->__pad_58C[9] ) /*0x4d36dc*/
  {
    __3_YAXPAX_Z(v9); /*0x4d36e5*/
    *(unsigned int *)this->__pad_58C = (unsigned int)((gamemd::AbstractClass *)(0)); /*0x4d36ed*/
  }
  this->__pad_58C[9] = 0; /*0x4d36f5*/
  *(unsigned int *)&this->__pad_58C[4] = (unsigned int)((gamemd::AbstractClass *)(0)); /*0x4d36fb*/
  return (gamemd::AbstractClass *)(((TechnoClass *)((int)this))->DTOR()); /*0x4d3706*/

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
