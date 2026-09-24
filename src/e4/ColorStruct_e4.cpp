// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4A35A0
int ColorStruct::SetRGB(unsigned char a2, unsigned char a3, unsigned char a4)
{
  unsigned int v4; // eax

  v4 = a4 | ((a3 | ((a2 | 0xFFFFFF00) << 8)) << 8); /*0x4a35c5*/
  *(this + 20) = v4; /*0x4a35c7*/
  *(this + 12) = v4; /*0x4a35ca*/
  *(this + 4) = v4; /*0x4a35cd*/
  *(this + 21) = -16777216; /*0x4a35d5*/
  *(this + 13) = -16777216; /*0x4a35d8*/
  *(this + 5) = -16777216; /*0x4a35db*/
  return -16777216; /*0x4a35de*/
}