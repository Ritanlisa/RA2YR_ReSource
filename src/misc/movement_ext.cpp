#include "misc/movement_ext.hpp"

namespace gamemd {

// --- Locomotor ---
// (removed 2026-09-07: CDTimerClass::TimeRemaining 真翻译移至 locomotion_bodies.cpp)

// --- MoveFeedback ---

// 0x40b640
void MoveFeedback::ClearBuffer() {}
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x40b646*/
  *(_DWORD *)(this + 16) = 0; /*0x40b649*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x40b650*/
  {
    __3_YAXPAX_Z(v2); /*0x40b656*/
    *(_DWORD *)(this + 4) = 0; /*0x40b65e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40b661*/
  *(_DWORD *)(this + 8) = 0; /*0x40b664*/
  *(_BYTE *)(this + 13) = 0; /*0x40b661*/
  *(_DWORD *)(this + 8) = 0; /*0x40b664*/
  *(_BYTE *)(this + 13) = 0; /*0x40b661*/
  *(_DWORD *)(this + 8) = 0; /*0x40b664*/
  *(_BYTE *)(this + 13) = 0; /*0x40b661*/
  *(_DWORD *)(this + 8) = 0; /*0x40b664*/
  *(_BYTE *)(this + 13) = 0; /*0x40b661*/
  *(_DWORD *)(this + 8) = 0; /*0x40b664*/
