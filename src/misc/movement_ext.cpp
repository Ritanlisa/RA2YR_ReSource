#include "misc/movement_ext.hpp"

namespace gamemd {

// --- Locomotor ---
// (removed 2026-09-07: CDTimerClass::TimeRemaining 真翻译移至 locomotion_bodies.cpp)

// --- MoveFeedback ---

// 0x40b640
void MoveFeedback::ClearBuffer()
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x40b646*/
  this->m_10 = 0; /*0x40b649*/
  if ( v2 && (((unsigned char *)&(this->m_C))[1]) ) /*0x40b650*/
  {
    operator delete((void *)(v2)); /*0x40b656*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x40b65e*/
  }
  (((unsigned char *)&(this->m_C))[1]) = 0; /*0x40b661*/
  this->m_8 = 0; /*0x40b664*/
}