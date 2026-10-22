#include "misc/movement_ext.hpp"

namespace gamemd {

// --- Locomotor ---
// (removed 2026-09-07: CDTimerClass::TimeRemaining 真翻译移至 locomotion_bodies.cpp)

// --- MoveFeedback ---

// 0x40b640
void MoveFeedback::ClearBuffer()
{
  void *v2; // eax

  v2 = (void *)(*&this->m_Capacity); /*0x40b646*/
  this->q010 = 0; /*0x40b649*/
  if ( v2 && (this->IsAllocated) ) /*0x40b650*/
  {
    operator delete((v2)); /*0x40b656*/
    *&this->m_Capacity = 0; /*0x40b65e*/
  }
  (this->IsAllocated) = 0; /*0x40b661*/
  this->q008 = 0; /*0x40b664*/
}
} // namespace gamemd