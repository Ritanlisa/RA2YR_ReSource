// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_EventQueue 1  // G57b: e4 flat-carrier opt-in (suppress core/aux twin)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/EventQueue_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/EventClass_e4.hpp"

// 0x54F000
namespace gamemd {  // G42.18 ns repair
int16_t EventQueue::Process()
{
  int v2; // eax

  if ( (this->u32_318 + 1) % 256 != this->u32_314 ) /*0x54f01e*/
    MessageLoop(); /*0x54f020*/
  v2 = this->u32_314; /*0x54f025*/
  if ( v2 == this->u32_318 ) /*0x54f033*/
    return 0; /*0x54f035*/
  else
    return *((unsigned short *)this + v2 + 138); /*0x54f03a*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x54F050
namespace gamemd {
short EventQueue::Read()
{
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  int16_t result; // ax
  int v6; // edx
  uint16_t v7; // cx
  int v8; // ebx
  uint16_t v9; // dx
  int v10; // ecx
  int16_t v11; // dx

  do /*0x54f086*/
  {
    if ( (*(unsigned int *)&this->q318 + 1) % 256 != this->q314 ) /*0x54f06f*/
      MessageLoop(); /*0x54f071*/
    v2 = this->q314; /*0x54f076*/
  }
  while ( v2 == *(unsigned int *)&this->q318 || !*((unsigned short *)this + v2 + 138) ); /*0x54f086*/
  do /*0x54f0b3*/
  {
    if ( !(uint8_t)EventQueue::CheckPosition(this) ) /*0x54f093*/
      MessageLoop(); /*0x54f09c*/
  }
  while ( this->q314 == *(unsigned int *)&this->q318 || !EventQueue::Check(this) ); /*0x54f0b3*/
  v3 = this->q314; /*0x54f0bd*/
  v4 = *(unsigned int *)&this->q318; /*0x54f0c3*/
  result = 0; /*0x54f0c9*/
  if ( v3 != v4 ) /*0x54f0cd*/
  {
    result = *((unsigned short *)this + v3 + 138); /*0x54f0cf*/
    this->q314 = (v3 + 1) % 256; /*0x54f0e8*/
  }
  if ( (uint8_t)result == 1 || (uint8_t)result == 4 || (uint8_t)result == 2 ) /*0x54f106*/
  {
    v6 = this->q314; /*0x54f108*/
    v7 = 0; /*0x54f10e*/
    if ( v6 != v4 ) /*0x54f112*/
    {
      v7 = *((unsigned short *)this + v6 + 138); /*0x54f114*/
      this->q314 = (v6 + 1) % 256; /*0x54f12d*/
    }
    v8 = this->q314; /*0x54f134*/
    v9 = 0; /*0x54f140*/
    *(unsigned int *)this = v7; /*0x54f144*/
    if ( v8 != v4 ) /*0x54f146*/
    {
      v9 = *((unsigned short *)this + v8 + 138); /*0x54f148*/
      this->q314 = (v8 + 1) % 256; /*0x54f161*/
    }
    this->u32_C = v7; /*0x54f16d*/
    this->u32_4 = v9; /*0x54f171*/
    *(unsigned int *)&this->u32_10 = v9; /*0x54f174*/
  }
  else if ( (uint8_t)result == 10 ) /*0x54f17e*/
  {
    v10 = this->q314; /*0x54f180*/
    v11 = 0; /*0x54f186*/
    if ( v10 != v4 ) /*0x54f18a*/
    {
      v11 = *((unsigned short *)this + v10 + 138); /*0x54f18c*/
      this->q314 = (v10 + 1) % 256; /*0x54f1a5*/
    }
    *(unsigned short *)&this->u16_8 = v11; /*0x54f1ab*/
  }
  return result; /*0x54f177*/
}
} // namespace gamemd
// 0x54F650
namespace gamemd {
int16_t EventQueue::Check()
{
  int v1; // eax

  v1 = this->u32_314; /*0x54f650*/
  if ( v1 == this->u32_318 ) /*0x54f65e*/
    return 0; /*0x54f669*/
  else
    return *((unsigned short *)this + v1 + 138); /*0x54f660*/
}
} // namespace gamemd