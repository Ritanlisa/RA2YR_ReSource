// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x517440
void Color::ConvertToRGB(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 v9; // [esp+10h] [ebp-20h]
  int v2 = this->q008; /*0x51744b*/
  int v3 = this->q004; /*0x517453*/
  int v4 = 3 * *this; /*0x51745c*/
  _DWORD v10[5]; // [esp+14h] [ebp-1Ch]
  v10[2] = v2; /*0x51745f*/
  v4 *= 2; /*0x517463*/
  v10[1] = v2; /*0x517467*/
  v10[3] = v2 * (255 - v3 * (v4 % 255) / 0xFFu) / 0xFF; /*0x51749b*/
  int v11 = v2 * (255 - v3) / 255; /*0x5174b7*/
  v10[4] = v11; /*0x5174bb*/
  unsigned int v12 = v2 * (255 - v3 * (255 - v4 % 255) / 0xFFu) / 0xFF; /*0x5174e2*/
  unsigned int v5 = ((unsigned int)(v4 / 255) > 4 ? -4 : 2) + v4 / 255;
  LOBYTE(v9) = v10[v5]; /*0x51750f*/
  unsigned int v6 = (v5 > 4 ? -4 : 2) + v5;
  unsigned int v7 = v6 + (v6 > 4 ? -4 : 2);
  LOBYTE(v6) = v10[v6]; /*0x51752c*/
  HIBYTE(v9) = v10[v7]; /*0x517535*/
  *(_WORD *)a2 = v9; /*0x517544*/
  *(_BYTE *)(a2 + 2) = v6; /*0x51754a*/
  return a2; /*0x517530*/
}
}

// 0x661020
unsigned char * Color::Lerp2(int a2, int a3, float a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  double v4 = 1.0 - a4; /*0x661028*/
  *this = Math::RoundToInt(v4); /*0x66109d*/
  this->q004 = Math::RoundToInt(v4); /*0x661105*/
  double v6 = v4 * (double)*(unsigned __int8 *)(a2 + 2) + (double)*(unsigned __int8 *)(a3 + 2) * a4; /*0x661124*/
  if ( v6 > 255.0 || v6 >= 0.0 ) /*0x661142*/
  {
    if ( v6 > 255.0 ) /*0x661169*/
      v6 = 255.0; /*0x66116d*/
    this->q008 = Math::RoundToInt(v6); /*0x661178*/
    return this; /*0x66117b*/
  }
  else
  {
    this->q008 = Math::RoundToInt(0.0); /*0x661151*/
    return this; /*0x661154*/
  }
}
}

// 0x661190
unsigned char * Color::ScaleRGB(unsigned char * a2, float a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  double v4 = (double)*a2 * a3; /*0x6611a4*/
  if ( v4 > 255.0 || v4 >= 0.0 ) /*0x6611c4*/
  {
    if ( v4 > 255.0 ) /*0x6611dd*/
      v4 = 255.0; /*0x6611e1*/
  }
  else
  {
    v4 = 0.0; /*0x6611c8*/
  }
  *this = Math::RoundToInt(v4); /*0x6611ee*/
  double v5 = (double)a2[1] * a3; /*0x6611fb*/
  if ( v5 > 255.0 || v5 >= 0.0 ) /*0x66121b*/
  {
    if ( v5 > 255.0 ) /*0x661234*/
      v5 = 255.0; /*0x661238*/
  }
  else
  {
    v5 = 0.0; /*0x66121f*/
  }
  this->q004 = Math::RoundToInt(v5); /*0x661245*/
  double v6 = (double)a2[2] * a3; /*0x661253*/
  if ( v6 > 255.0 || v6 >= 0.0 ) /*0x661273*/
  {
    if ( v6 > 255.0 ) /*0x661299*/
      v6 = 255.0; /*0x66129d*/
    this->q008 = Math::RoundToInt(v6); /*0x6612a8*/
    return this; /*0x6612ab*/
  }
  else
  {
    this->q008 = Math::RoundToInt(0.0); /*0x661282*/
    return this; /*0x661285*/
  }
}
}

// 0x6612C0
unsigned char Color::Lerp(ObjectClass * aP1, unsigned char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned __int8 v3; // bl
  unsigned __int8 v4; // al
  unsigned __int8 v5; // bl
  unsigned __int8 result; // al

  v3 = this->q004; /*0x6612f2*/
  *this += (unsigned __int8)aP1 * (*a2 - *this) / 256; /*0x6612f5*/
  v4 = v3 + (unsigned __int8)aP1 * (a2[1] - v3) / 256; /*0x661315*/
  v5 = this->q008; /*0x661317*/
  this->q004 = v4; /*0x66131a*/
  result = v5 + (unsigned __int8)aP1 * (a2[2] - v5) / 256; /*0x66133d*/
  this->q008 = result; /*0x661340*/
  return result; /*0x66132a*/
}
}

// 0x75F540
unsigned int * Color::RGBFromFloat(IUnknown * aP1, float a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  double v3 = 1.0 - a3; /*0x75f547*/
  int v5 = Math::RoundToInt(v3); /*0x75f56d*/
  int v8 = Math::RoundToInt(v3); /*0x75f582*/
  int v6 = Math::RoundToInt(v3); /*0x75f591*/
  *this = v5; /*0x75f59e*/
  this->q004 = v8; /*0x75f5a0*/
  this->q008 = v6; /*0x75f5a3*/
  return this; /*0x75f5ac*/
}
}
