#include "misc/movement_ext.hpp"

namespace gamemd {

// --- Locomotor ---
// (removed 2026-09-07: CDTimerClass::TimeRemaining 真翻译移至 locomotion_bodies.cpp)

// --- MoveFeedback ---

// 0x40b640
void MoveFeedback::ClearBuffer()
{
  void *v2; // eax

  v2 = *&this->m_Capacity; /*0x40b646*/
  this->m_10 = 0; /*0x40b649*/
  if ( v2 && (this->IsAllocated) ) /*0x40b650*/
  {
    operator delete((void *)(v2)); /*0x40b656*/
    *&this->m_Capacity = 0; /*0x40b65e*/
  }
  (this->IsAllocated) = 0; /*0x40b661*/
  this->m_8 = 0; /*0x40b664*/
}