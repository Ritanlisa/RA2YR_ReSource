// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5BCC90
void TextBuffer::Init()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v1 = 0; /*0x5bcc93*/
  _DWORD * v2 = this + 2000; /*0x5bcc95*/
  do /*0x5bccbe*/
  {
    _BYTE * v3 = this + v1; /*0x5bcc9b*/
    _DWORD * v4 = v2; /*0x5bcc9e*/
    int v5 = 80; /*0x5bcca0*/
    do /*0x5bccb5*/
    {
      *v3 = 32; /*0x5bcca5*/
      *v4 = 0; /*0x5bcca8*/
      v4 += 25; /*0x5bccae*/
      v3 += 25; /*0x5bccb1*/
      --v5; /*0x5bccb4*/
    }
    while ( v5 ); /*0x5bccb5*/
    ++v1; /*0x5bccb7*/
    ++v2; /*0x5bccb8*/
  }
  while ( v1 < 25 ); /*0x5bccbe*/
  this->q2734 = 1; /*0x5bccc8*/
  return Text::DrawRepeated(this, 0, 0, 80, 25); /*0x5bccd4*/
}
}
