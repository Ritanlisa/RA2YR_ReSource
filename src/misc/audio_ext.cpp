#include "misc/audio_ext.hpp"

namespace gamemd {

// --- Audio3D ---

// 0x55a7d0
void Audio3D::ComputeRotation()
{
    unsigned int *v3; // eax
    int slopeIndex; // ebp
    float v6; // [esp+0h] [ebp-88h]
    int v7; // [esp+18h] [ebp-70h] BYREF
    unsigned int v8[3]; // [esp+1Ch] [ebp-6Ch] BYREF
    int v9[12]; // [esp+28h] [ebp-60h] BYREF
    char v10[48]; // [esp+58h] [ebp-30h] BYREF

    v3 = (unsigned int *)(this->field_8 + 156); /*0x55a7de*/
    v8[0] = *v3; /*0x55a7e5*/
    v8[1] = v3[1]; /*0x55a7f1*/
    v8[2] = v3[2]; /*0x55a7fd*/
    slopeIndex = (unsigned __int8)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v8)->slopeIndex; /*0x55a812*/
    qmemcpy(v9, CopyAudioData(v10, slopeIndex), sizeof(v9)); /*0x55a828*/
    v6 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(this->field_8 + 904), &v7) >> 10) + 1) >> 1) /*0x55a85a*/
                      & 0x1F)
                     - 8)
       * -0.1963495408493621;
    Matrix2D::Rotate(v9, v6); /*0x55a85d*/
    if ( a3 && *a3 != -1 ) /*0x55a872*/
    {
      *a3 = 32 * (slopeIndex + (*a3 << 6)); /*0x55a880*/
      *a3 |= ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(this->field_8 + 904), &v7) >> 10) + 1) >> 1) /*0x55a8a0*/
           & 0x1F;
    }
    qmemcpy(a2, v9, 0x30u); /*0x55a8b4*/
    return a2; /*0x55a8b6*/
}
} // namespace gamemd
