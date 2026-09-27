// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x517440
namespace gamemd {
int Color::ConvertToRGB(int v9)
{
  void * v2;
  void * v3;
  void * v4;
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned int v10[5]; // [esp+14h] [ebp-1Ch]
  int v11; // [esp+28h] [ebp-8h]
  unsigned int v12; // [esp+2Ch] [ebp-4h]

  v2 = (void *)((unsigned int)(this->q008));
  v3 = (void *)((unsigned int)(this->q004));
  v4 = (unsigned int)(3 * *this);
  v10[2] = (unsigned int)(v2);
  v4 *= 2; /*0x517463*/
  v10[1] = v2; /*0x517467*/
  v10[3] = v2 * (255 - v3 * (v4 % 255) / 0xFFu) / 0xFF; /*0x51749b*/
  v11 = v2 * (255 - v3) / 255; /*0x5174b7*/
  v10[4] = v11; /*0x5174bb*/
  v12 = v2 * (255 - v3 * (255 - v4 % 255) / 0xFFu) / 0xFF; /*0x5174e2*/
  v5 = ((unsigned int)(v4 / 255) > 4 ? -4 : 2) + v4 / 255;
  IDA_LOBYTE(v9) = v10[v5]; /*0x51750f*/
  v6 = (v5 > 4 ? -4 : 2) + v5;
  v7 = v6 + (v6 > 4 ? -4 : 2);
  IDA_LOBYTE(v6) = v10[v6]; /*0x51752c*/
  IDA_HIBYTE(v9) = v10[v7]; /*0x517535*/
  *(unsigned short *)v9 = v9; /*0x517544*/
  *(unsigned char *)(v9 + 2) = v6; /*0x51754a*/
}
} // namespace gamemd
// 0x661020
namespace gamemd {
unsigned char * Color::Lerp2(int a2, int a3, float a4)
{
  double v4; // st7
  double v6; // st7

  v4 = (void *)(1.0 - a4);
  *(unsigned int *)this = Math::RoundToInt(v4); /*0x66109d*/
  this->q004 = Math::RoundToInt(v4); /*0x661105*/
  v6 = v4 * (double)*(uint8_t *)(a2 + 2) + (double)*(uint8_t *)(a3 + 2) * a4; /*0x661124*/
  if ( v6 > 255.0 || v6 >= 0.0 ) /*0x661142*/
  {
    if ( v6 > 255.0 ) /*0x661169*/
      v6 = 255.0; /*0x66116d*/
    this->q008 = Math::RoundToInt(v6); /*0x661178*/
    return this; /*0x66117b*/
  }
  else
  {
    this->q008 = (unsigned char *)(Math::RoundToInt(0.0));
    return (unsigned char *)(this);
  }
}
} // namespace gamemd
// 0x661190
namespace gamemd {
unsigned char * Color::ScaleRGB(unsigned char * a2, float a3)
{
  double v4; // st7
  double v5; // st7
  double v6; // st7

  v4 = (double)*a2 * a3; /*0x6611a4*/
  if ( v4 > 255.0 || v4 >= 0.0 ) /*0x6611c4*/
  {
    if ( v4 > 255.0 ) /*0x6611dd*/
      v4 = 255.0; /*0x6611e1*/
  }
  else
  {
    v4 = 0.0; /*0x6611c8*/
  }
  *(unsigned int *)this = Math::RoundToInt(v4); /*0x6611ee*/
  v5 = (double)a2[1] * a3; /*0x6611fb*/
  if ( v5 > 255.0 || v5 >= 0.0 ) /*0x66121b*/
  {
    if ( v5 > 255.0 ) /*0x661234*/
      v5 = 255.0; /*0x661238*/
  }
  else
  {
    v5 = 0.0; /*0x66121f*/
  }
  this->Items = Math::RoundToInt(v5); /*0x661245*/
  v6 = (double)a2[2] * a3; /*0x661253*/
  if ( v6 > 255.0 || v6 >= 0.0 ) /*0x661273*/
  {
    if ( v6 > 255.0 ) /*0x661299*/
      v6 = 255.0; /*0x66129d*/
    this->Capacity = Math::RoundToInt(v6); /*0x6612a8*/
    return this; /*0x6612ab*/
  }
  else
  {
    this->Capacity = (unsigned char *)(Math::RoundToInt(0.0));
    return (unsigned char *)(this);
  }
}
} // namespace gamemd
// 0x6612C0
namespace gamemd {
unsigned char Color::Lerp(ObjectClass * aP1, unsigned char * a2)
{
  uint8_t v3; // bl
  uint8_t v4; // al
  uint8_t v5; // bl
  uint8_t result; // al

  v3 = this->vtable2; /*0x6612f2*/
  *this += aP1 * (*a2 - *this) / 256; /*0x6612f5*/
  v4 = v3 + aP1 * (a2[1] - v3) / 256; /*0x661315*/
  v5 = this->vtable3; /*0x661317*/
  this->vtable2 = v4; /*0x66131a*/
  result = v5 + aP1 * (a2[2] - v5) / 256; /*0x66133d*/
  this->vtable3 = result; /*0x661340*/
  return result; /*0x66132a*/
}
} // namespace gamemd
// 0x75F540
namespace gamemd {
unsigned int * Color::RGBFromFloat(IUnknown * aP1, float a3)
{
  double v3; // st7
  int v5; // ebp
  int v6; // eax
  int v8; // [esp+4h] [ebp-8h]

  v3 = 1.0 - a3; /*0x75f547*/
  v5 = Math::RoundToInt(v3); /*0x75f56d*/
  v8 = Math::RoundToInt(v3); /*0x75f582*/
  v6 = Math::RoundToInt(v3); /*0x75f591*/
  *(unsigned int *)this = v5; /*0x75f59e*/
  this->q004 = v8; /*0x75f5a0*/
  this->q008 = v6; /*0x75f5a3*/
  return this; /*0x75f5ac*/
}
} // namespace gamemd