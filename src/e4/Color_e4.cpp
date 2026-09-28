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
  int v2; // esi
  int v3; // ebx
  int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // edx
  __int16 v9; // [esp+10h] [ebp-20h]
  _DWORD v10[5]; // [esp+14h] [ebp-1Ch]
  int v11; // [esp+28h] [ebp-8h]
  unsigned int v12; // [esp+2Ch] [ebp-4h]

  v2 = IDA_BYTE2(this->Color_field_00); /*0x51744b*/
  v3 = IDA_BYTE1(this->Color_field_00); /*0x517453*/
  v4 = 3 * IDA_LOBYTE(this->Color_field_00); /*0x51745c*/
  v10[2] = v2; /*0x51745f*/
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
  *(_WORD *)v9 = v9; /*0x517544*/
  *(_BYTE *)(v9 + 2) = v6; /*0x51754a*/
  return v9; /*0x517530*/
}
} // namespace gamemd
// 0x661020
namespace gamemd {
unsigned char * Color::Lerp2(int a2, int a3, float a4)
{
  double v4; // st7
  double v6; // st7

  v4 = 1.0 - a4; /*0x661028*/
  IDA_LOBYTE(this->Color_field_00) = Math::RoundToInt(v4); /*0x66109d*/
  IDA_BYTE1(this->Color_field_00) = Math::RoundToInt(v4); /*0x661105*/
  v6 = v4 * (double)*(unsigned __int8 *)(a2 + 2) + (double)*(unsigned __int8 *)(a3 + 2) * a4; /*0x661124*/
  if ( v6 > 255.0 || v6 >= 0.0 ) /*0x661142*/
  {
    if ( v6 > 255.0 ) /*0x661169*/
      v6 = 255.0; /*0x66116d*/
    IDA_BYTE2(this->Color_field_00) = Math::RoundToInt(v6); /*0x661178*/
    return this; /*0x66117b*/
  }
  else
  {
    IDA_BYTE2(this->Color_field_00) = Math::RoundToInt(0.0); /*0x661151*/
    return this; /*0x661154*/
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
  IDA_LOBYTE(this->Color_field_00) = Math::RoundToInt(v4); /*0x6611ee*/
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
  IDA_BYTE1(this->Color_field_00) = Math::RoundToInt(v5); /*0x661245*/
  v6 = (double)a2[2] * a3; /*0x661253*/
  if ( v6 > 255.0 || v6 >= 0.0 ) /*0x661273*/
  {
    if ( v6 > 255.0 ) /*0x661299*/
      v6 = 255.0; /*0x66129d*/
    IDA_BYTE2(this->Color_field_00) = Math::RoundToInt(v6); /*0x6612a8*/
    return this; /*0x6612ab*/
  }
  else
  {
    IDA_BYTE2(this->Color_field_00) = Math::RoundToInt(0.0); /*0x661282*/
    return this; /*0x661285*/
  }
}
} // namespace gamemd
// 0x6612C0
namespace gamemd {
unsigned char Color::Lerp(ObjectClass * aP1, unsigned char * a2)
{
  unsigned __int8 v3; // bl
  char v4; // al
  unsigned __int8 v5; // bl
  unsigned int result; // eax

  v3 = IDA_BYTE1(this->Color_field_00); /*0x6612f2*/
  IDA_LOBYTE(this->Color_field_00) += aP1 * (*a2 - IDA_LOBYTE(this->Color_field_00)) / 256; /*0x6612f5*/
  v4 = v3 + aP1 * (a2[1] - v3) / 256; /*0x661315*/
  v5 = IDA_BYTE2(this->Color_field_00); /*0x661317*/
  IDA_BYTE1(this->Color_field_00) = v4; /*0x66131a*/
  result = aP1 * (a2[2] - v5) / 256; /*0x66133a*/
  IDA_LOBYTE(result) = v5 + result; /*0x66133d*/
  IDA_BYTE2(this->Color_field_00) = result; /*0x661340*/
  return result; /*0x66132a*/
}
} // namespace gamemd
// 0x75F540
namespace gamemd {
unsigned int * Color::RGBFromFloat(IUnknown * aP1, float a3)
{
  double v3; // st7
  int v5; // eax
  int v7; // eax
  int v8; // eax

  v3 = 1.0 - a3; /*0x75f547*/
  IDA_LOWORD(v5) = Math::RoundToInt(v3); /*0x75f565*/
  v5 = v5; /*0x75f56d*/
  IDA_LOWORD(v7) = Math::RoundToInt(v3); /*0x75f57a*/
  v7 = v7; /*0x75f582*/
  IDA_LOWORD(v8) = Math::RoundToInt(v3); /*0x75f591*/
  this->Color_field_00 = v5; /*0x75f59e*/
  this->u32_4 = v7; /*0x75f5a0*/
  this->u32_8 = v8; /*0x75f5a3*/
  return &this->Color_field_00; /*0x75f5ac*/
}
} // namespace gamemd