// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x76F910
namespace gamemd {
int ArtConfig_Read()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
rc_ptr *__fastcall ArtConfig_Read(
        rc_ptr_base *a1,
        int edx0,
        _DWORD *a2,
        ReferenceCounted *Source,
        char **a4,
        ReferenceCounted *aP5)
{
  char *v8; // eax
  ReferenceCounted *v9; // edi

  v8 = (char *)__2_YAPAXI_Z(0x30u); /*0x76f918*/
  if ( v8 ) /*0x76f922*/
    v9 = (ReferenceCounted *)WorldDominationTour::Territory::Constructor(v8, edx0, a2, Source, (const char **)a4, aP5); /*0x76f940*/
  else
    v9 = 0; /*0x76f944*/
  ComPtr::Constructor(a1); /*0x76f948*/
  a1->vfptr = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76f94f*/
  ComPtr::Set(a1, (int)v9); /*0x76f956*/
  return (rc_ptr *)a1; /*0x76f95d*/
}
}
} // namespace gamemd

// 0x76FC50
namespace gamemd {
int ArtConfig_validateConfig()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ArtConfig::validateConfig(
        int this,
        Selection_WorldDominationTour *aP1,
        int a3,
        Selection_WorldDominationTour *aP3)
{
  ObjectClass *v5; // ebp
  int v6; // ebx
  int v7; // edi
  void *v8; // eax
  MSShapeAnim *v9; // eax
  _DWORD v11[22]; // [esp+10h] [ebp-6Ch] BYREF
  _BYTE v12[12]; // [esp+68h] [ebp-14h] BYREF
  int v13; // [esp+74h] [ebp-8h]

  v5 = (ObjectClass *)(this + 32); /*0x76fc68*/
  v6 = *(_DWORD *)aP3->__pad_4 + *(_DWORD *)(this + 28); /*0x76fc6b*/
  v7 = aP3->field_0 + *(_DWORD *)(this + 24); /*0x76fc72*/
  CCFileClass::Construct2(v11, (char **)(this + 32)); /*0x76fc74*/
  if ( CCFileClass::Open(v11, 0) ) /*0x76fc7f*/
  {
    v8 = (void *)__2_YAPAXI_Z(0x4Cu); /*0x76fc8a*/
    if ( v8 ) /*0x76fc94*/
      v9 = (MSShapeAnim *)MSOverlayAnim::Init(v8, v5, v7, v6, a3, 0, (MSShapeAnim *)&aP1->__pad_4[20], 1, 0, 0); /*0x76fcb6*/
    else
      v9 = 0; /*0x76fcbd*/
    *(_DWORD *)(this + 40) = v9; /*0x76fcbf*/
    (*(void (__thiscall **)(MSShapeAnim *, _DWORD))(*(_DWORD *)v9->__pad_0 + 4))(v9, 0); /*0x76fcc8*/
    PriorityQueue::Add(aP1, *(MSAnim **)(this + 40)); /*0x76fcd6*/
  }
  v11[0] = &CCFileClass::`vftable'; /*0x76fcdf*/
  v13 = 0; /*0x76fce7*/
  Vector::Clear((int)v12); /*0x76fcef*/
  v11[0] = &off_7E1668; /*0x76fcf8*/
  return BufferIOFileClass::Dtor(v11); /*0x76fd05*/
}
}
} // namespace gamemd
