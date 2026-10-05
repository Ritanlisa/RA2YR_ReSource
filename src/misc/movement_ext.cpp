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
    if ( v2 && IDA_BYTE1(this->m_C) ) /*0x40b650*/
    {
      RA2_OPDEL(v2); /*0x40b656*/
      *(unsigned int *)&this->m_1[3] = 0; /*0x40b65e*/
    }
    IDA_BYTE1(this->m_C) = 0; /*0x40b661*/
    this->m_8 = 0; /*0x40b664*/
}
} // namespace gamemd
