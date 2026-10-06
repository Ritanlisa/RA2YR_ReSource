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

// 0x76FC50
namespace gamemd {
int ArtConfig::validateConfig(Selection_WorldDominationTour * aP1, int a3, Selection_WorldDominationTour * aP3)
{

  char **v5; // ebp
  int v6; // ebx
  int v7; // edi
  void *v8; // eax
  void *v9; // eax
  unsigned int v11[22]; // [esp+10h] [ebp-6Ch] BYREF
  unsigned char v12[12]; // [esp+68h] [ebp-14h] BYREF
  int v13; // [esp+74h] [ebp-8h]

  v5 = (char **)((char *)this + 32); /*0x76fc68*/
  v6 = aP3[1] + *((unsigned int *)this + 7); /*0x76fc6b*/
  v7 = *aP3 + *((unsigned int *)this + 6); /*0x76fc72*/
  ((CCFileClass *)(v11))->Construct2((char **)((char *)this + 32)); /*0x76fc74*/
  if ((int)(((CCFileClass *)(v11))->Open(0))) 
  {
    v8 = (void *)((unsigned int)(__2_YAPAXI_Z(0x4Cu)));
    if ( v8 ) /*0x76fc94*/
      v9 = (gamemd::Init)(MSOverlayAnim::Init(v8, v5, v7, v6, a3, 0, (int)(aP1 + 6), 1, 0, 0)); /*0x76fcb6*/
    else
      v9 = (void *)(0); /*0x76fcbd*/
    *((unsigned int *)this + 10) = (unsigned int)(v9); /*0x76fcbf*/
    (*(void (**)(void *, unsigned int))(*(unsigned int *)v9 + 4))( (void *)(v9), 0); /*0x76fcc8*/
    ((PriorityQueue *)((int)(aP1)))->Add(*((unsigned int *)this + 10)); /*0x76fcd6*/
  }
  v11[0] = (unsigned int)(&vt_CCFileClass);
  v13 = (unsigned int)(0);
  Vector::Cl  ((Vector *)((void *)((int)v12)))->Clear((int)((Vector *)((void *)((int)v12)))); 
  v11[0] = (unsigned int)(&off_7E1668); /*0x76fcf8*/
  return ((BufferIOFileClass *)(v11))->Dtor(); /*0x76fd05*/

}
} // namespace gamemd
// 0x76F910
namespace gamemd {
rc_ptr * ArtConfig_Read(rc_ptr_base * a1, int edx0, unsigned int * a2, ReferenceCounted * Source, char ** a4, ReferenceCounted * aP5)
{
  char *v8; // eax
  char *v9; // edi

  v8 = (char *)RA2_OPNEW(0x30u); /*0x76f918*/
  if ( v8 ) /*0x76f922*/
    v9 = WorldDominationTour::Territory::Constructor(v8, edx0, a2, Source, a4, aP5); /*0x76f940*/
  else
    v9 = (char *)(0); /*0x76f944*/
  ((ComPtr *)((ComPtr *)a1))->Constructor(); /*0x76f948*/
  *(unsigned int *)a1 = (unsigned int)(void*)&rc_ptr_WorldDominationTour_Territory_vftable; /*0x76f94f*/
  ((ComPtr *)((ComPtr *)a1))->Set((int)v9); /*0x76f956*/
  return (gamemd::rc_ptr *)(a1); /*0x76f95d*/
}
} // namespace gamemd
