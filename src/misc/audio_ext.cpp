#include "misc/audio_ext.hpp"
#include "e4/classes/Matrix2D_e4.hpp"  // g57c5 W5d scope supply
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int CopyAudioData(char* p0, int p1);  // x4:signals@0x7559b0
} // namespace gamemd
// ---- g57c5 W5 vocab (declaration-only) ----
namespace gamemd {
class Matrix2D;  // g57c5 W5 fwd
} // namespace gamemd
// ---- g57c5 W5 end ----
// ---- g57b5 W3: TU-local 真形 vocab (declaration-only) 
namespace gamemd {

    void *Coord_To_Cell(void *a1, void *a2);           // raw Coord::To_Cell 家族 (fn_42:3240);
    struct stru_87F5F0_host {                      // 0x87F5F0 宿主 (object/supplied_bodies:106 同款)
        unsigned char q000[0x58];
        unsigned char __pad_58[0x280 - 0x58];      // 覆盖 __pad_58[416] = +0x1F8
    };
    extern stru_87F5F0_host stru_87F5F0;          // data: 0x87F5F0
} // namespace gamemd
// ---- g57b5 W3 end ----

namespace gamemd {

// --- Audio3D ---

// 0x55a7d0
float * Audio3D::Audio3D::ComputeRotation(float *a2, unsigned int a3)  // g57b5 W4: raw 真值补参 (a2,a3)
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
  slopeIndex = (uint8_t)Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v8)->slopeIndex; /*0x55a812*/
  memcpy(v9,(const void *)(CopyAudioData(v10, slopeIndex)), sizeof(v9)); /*0x55a828*/
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
  memcpy(a2, v9, 0x30u); /*0x55a8b4*/
  return a2; /*0x55a8b6*/
}