// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x76FC50
void ArtConfig::validateConfig(Selection_WorldDominationTour * aP1, int a3, Selection_WorldDominationTour * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectClass *v5; // ebp
  MSShapeAnim *v9; // eax
  v5 = (ObjectClass *)(this + 32); /*0x76fc68*/
  int v6 = *(_DWORD *)aP3->__pad_4 + *(_DWORD *)(this + 28); /*0x76fc6b*/
  int v7 = aP3->field_0 + *(_DWORD *)(this + 24); /*0x76fc72*/
  _DWORD v11[22]; // [esp+10h] [ebp-6Ch] BYREF
  CCFileClass::Construct2(v11, (char **)(this + 32)); /*0x76fc74*/
  if ( CCFileClass::Open(v11, 0) ) /*0x76fc7f*/
  {
    void * v8 = (void *)__2_YAPAXI_Z(0x4Cu); /*0x76fc8a*/
    if ( v8 ) /*0x76fc94*/
      v9 = (MSShapeAnim *)MSOverlayAnim::Init(v8, v5, v7, v6, a3, 0, (MSShapeAnim *)&aP1->__pad_4[20], 1, 0, 0); /*0x76fcb6*/
    MSShapeAnim *v9 = 0; /*0x76fcbd*/
    *(_DWORD *)(this + 40) = v9; /*0x76fcbf*/
    (*(void (__thiscall **)(MSShapeAnim *, _DWORD))(*(_DWORD *)v9->__pad_0 + 4))(v9, 0); /*0x76fcc8*/
    PriorityQueue::Add(aP1, *(MSAnim **)(this + 40)); /*0x76fcd6*/
  }
  v11[0] = &vt_CCFileClass; /*0x76fcdf*/
  int v13 = 0; /*0x76fce7*/
  _BYTE v12[12]; // [esp+68h] [ebp-14h] BYREF
  Vector::Clear((int)v12); /*0x76fcef*/
  v11[0] = &off_7E1668; /*0x76fcf8*/
  return BufferIOFileClass::Dtor(v11); /*0x76fd05*/
}
}

// 0x76F910
namespace gamemd {
rc_ptr * ArtConfig_Read(rc_ptr_base * a1, int edx0, unsigned int * a2, ReferenceCounted * Source, char ** a4, ReferenceCounted * aP5)
{
{
    char *v8;
    ReferenceCounted *v9;
    v8 = (char *)__2_YAPAXI_Z(0x30u);
    if ( v8 )
    v9 = (ReferenceCounted *)WorldDominationTour::Territory::Constructor(v8, edx0, a2, Source, (const char **)a4, aP5);
    else
    v9 = 0;
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_Territory;
    ComPtr::Set(a1, (int)v9);
    return (rc_ptr *)a1;
}
}
} // namespace gamemd
