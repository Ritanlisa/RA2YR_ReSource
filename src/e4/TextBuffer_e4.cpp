// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/TextBuffer_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Territory_WorldDominationTour_8_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x5BCC90
namespace gamemd {
void TextBuffer::Init(int32_t buffer)
{
  TextBuffer * v1;
  TextBuffer *v2; // ebx
  TextBuffer *v3; // edx
  TextBuffer *v4; // eax
  int v5; // esi

  v1 = (gamemd::TextBuffer *)((int)((gamemd::TextBuffer *)(0)));
  v2 = (gamemd::TextBuffer *)(&this->u32_1F40);
  do /*0x5bccbe*/
  {
    v3 = (unsigned int)(this)+ v1; /*0x5bcc9b*/
    v4 = v2; /*0x5bcc9e*/
    v5 = 80; /*0x5bcca0*/
    do /*0x5bccb5*/
    {
      *v3 = (TextBuffer)32; /*0x5bcca5*/
      *(unsigned int *)v4 = 0; /*0x5bcca8*/
      v4 += 100; /*0x5bccae*/
      v3 += 25; /*0x5bccb1*/
      --v5; /*0x5bccb4*/
    }
    while ( v5 ); /*0x5bccb5*/
    ++v1; /*0x5bccb7*/
    v2 += 4; /*0x5bccb8*/
  }
  while ( v1 < (gamemd::TextBuffer *)(25) ); /*0x5bccbe*/
  this->q2734 = 1; /*0x5bccc8*/
// 0x5bd490
  return Text::DrawRepeated(0, 0, 80, 25); /*0x5bccd4*/
}
} // namespace gamemd