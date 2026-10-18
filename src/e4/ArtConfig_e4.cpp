// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/ArtConfig_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/AudioClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/InfantryTypeVector_e4.hpp"
#include "e4/classes/UnitTypeVector_e4.hpp"
#include "e4/classes/PriorityQueue_e4.hpp"
#include "e4/classes/MSOverlayAnim_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
namespace Territory { int Constructor(AudioController *p_this); }  // x4:ida@0x402040

// 0x76FC50
namespace gamemd {  // G42.18 ns repair
int ArtConfig::validateConfig(Selection_WorldDominationTour * aP1, int a3, Selection_WorldDominationTour * aP3)
{


  char **v5 = &this->q020; // ebp /*0x76fc68*/
  int v6; // ebx
  v6 = aP3[1] + this->u32_1C; /*0x76fc6b*/
  int v7 = *aP3 + this->u32_18; // edi /*0x76fc72*/
  unsigned int v11[22]; // [esp+10h] [ebp-6Ch] BYREF
  CCFileClass::Construct2(v11, &this->q020); /*0x76fc74*/
  if ( CCFileClass::Open(v11, 0) ) /*0x76fc7f*/
  {
    void *v8; // eax
    v8 = __2_YAPAXI_Z(0x4Cu); /*0x76fc8a*/
    void *v9; // eax
    if ( v8 ) /*0x76fc94*/
      v9 = (void *)(MSOverlayAnim::Init(v8, v5, v7, v6, a3, 0, (int)(aP1 + 6), 1, 0, 0)); /*0x76fcb6*/
    else
      v9 = 0; /*0x76fcbd*/
    this->u32_28 = (unsigned int)(v9); /*0x76fcbf*/
    (*(void (**)(void *, unsigned int))(*(unsigned int *)v9 + 4))(v9, 0); /*0x76fcc8*/
    (aP1)->Add(this->u32_28); /*0x76fcd6*/
  }
  v11[0] = (unsigned int)(&vt_CCFileClass); /*0x76fcdf*/
  int v13; // [esp+74h] [ebp-8h]
  v13 = 0; /*0x76fce7*/
  unsigned char v12[12]; // [esp+68h] [ebp-14h] BYREF
  Vector::Clear((int)v12); /*0x76fcef*/
  v11[0] = (unsigned int)(&off_7E1668); /*0x76fcf8*/
  return (v11)->Dtor(); /*0x76fd05*/

}
} // namespace gamemd
// 0x76F910
namespace gamemd {
rc_ptr * ArtConfig_Read(rc_ptr_base * a1, int edx0, unsigned int * a2, ReferenceCounted * Source, char ** a4, ReferenceCounted * aP5)
{

  char *v8; // eax
  char *v9; // edi

  v8 = (char *)__2_YAPAXI_Z(0x30u); /*0x76f918*/
  if ( v8 ) /*0x76f922*/
    v9 = WorldDominationTour::Territory::Constructor(v8, a2, a3, Source, a5, a6); /*0x76f940*/
  else
    v9 = 0; /*0x76f944*/
  ComPtr::Constructor((ComPtr *)this); /*0x76f948*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_rc_ptr_WorldDominationTour_Territory) */  /*0x76f94f*/
  ComPtr::Set((ComPtr *)this, (int)v9); /*0x76f956*/
  return this; /*0x76f95d*/

}
} // namespace gamemd
