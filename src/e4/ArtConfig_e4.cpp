// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
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

  v5 = (char **)(&this->u32_C2); /*0x76fc68*/
  v6 = aP3[1] + this->u32_1C; /*0x76fc6b*/
  v7 = *aP3 + this->u32_18; /*0x76fc72*/
  CCFileClass::Construct2(v11, (char **)(&this->u32_C2)); /*0x76fc74*/
  if ( CCFileClass::Open(v11, 0) ) /*0x76fc7f*/
  {
    v8 = operator new(0x4Cu); /*0x76fc8a*/
    if ( v8 ) /*0x76fc94*/
      v9 = MSOverlayAnim::Init(v8, v5, v7, v6, a3, 0, (int)(aP1 + 6), 1, 0, 0); /*0x76fcb6*/
    else
      v9 = 0; /*0x76fcbd*/
    this->ptr_28 = v9; /*0x76fcbf*/
    (*(void (__thiscall **)(void *, unsigned int))(v9->q004)(v9, 0); /*0x76fcc8*/
    PriorityQueue::Add(aP1, this->ptr_28); /*0x76fcd6*/
  }
  v13 = (unsigned int)(0);
  Vector::Clear((int)v12); /*0x76fcef*/
  v11[0] = &off_7E1668; /*0x76fcf8*/
  return BufferIOFileClass::Dtor(v11); /*0x76fd05*/
}
} // namespace gamemd
// 0x76F910
namespace gamemd {
rc_ptr * ArtConfig_Read(rc_ptr_base * a1, int edx0, unsigned int * a2, ReferenceCounted * Source, char ** a4, ReferenceCounted * aP5)
{
  char *v8; // eax
  char *v9; // edi

  v8 = (char *)new Territory; /*0x76f918*/
  if ( v8 ) /*0x76f922*/
    v9 = WorldDominationTour::Territory::Constructor(v8, edx0, a2, Source, a4, aP5); /*0x76f940*/
  else
    v9 = 0; /*0x76f944*/
  ComPtr::Constructor(a1); /*0x76f948*/
  ComPtr::Set(a1, (int)v9); /*0x76f956*/
  return a1; /*0x76f95d*/
}
} // namespace gamemd
