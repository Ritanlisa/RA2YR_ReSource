// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x54F000
int EventQueue::Process()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( (this->q318 + 1) % 256 != this->q314 ) /*0x54f01e*/
    MessageLoop(); /*0x54f020*/
  int v2 = this->q314; /*0x54f025*/
  if ( v2 == this->q318 ) /*0x54f033*/
    return 0; /*0x54f035*/
  else
    return *((_WORD *)this + v2 + 138); /*0x54f03a*/
}
}

// 0x54F050
int EventQueue::Read()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  __int16 result; // ax
  unsigned __int16 v7; // cx
  unsigned __int16 v9; // dx
  __int16 v11; // dx

  do /*0x54f086*/
  {
    if ( (this->q318 + 1) % 256 != this->q314 ) /*0x54f06f*/
      MessageLoop(); /*0x54f071*/
    v2 = this->q314; /*0x54f076*/
  }
  while ( v2 == this->q318 || !*((_WORD *)this + v2 + 138) ); /*0x54f086*/
  do /*0x54f0b3*/
  {
    if ( !(unsigned __int8)EventQueue::CheckPosition(this) ) /*0x54f093*/
      MessageLoop(); /*0x54f09c*/
  }
  while ( this->q314 == this->q318 || !(unsigned __int16)EventQueue::Check(this) ); /*0x54f0b3*/
  v3 = this->q314; /*0x54f0bd*/
  v4 = this->q318; /*0x54f0c3*/
  result = 0; /*0x54f0c9*/
  if ( v3 != v4 ) /*0x54f0cd*/
  {
    result = *((_WORD *)this + v3 + 138); /*0x54f0cf*/
    this->q314 = (v3 + 1) % 256; /*0x54f0e8*/
  }
  if ( (unsigned __int8)result == 1 || (unsigned __int8)result == 4 || (unsigned __int8)result == 2 ) /*0x54f106*/
  {
    int v6 = this->q314; /*0x54f108*/
    v7 = 0; /*0x54f10e*/
    if ( v6 != v4 ) /*0x54f112*/
    {
      v7 = *((_WORD *)this + v6 + 138); /*0x54f114*/
      this->q314 = (v6 + 1) % 256; /*0x54f12d*/
    }
    int v8 = this->q314; /*0x54f134*/
    v9 = 0; /*0x54f140*/
    *this = v7; /*0x54f144*/
    if ( v8 != v4 ) /*0x54f146*/
    {
      v9 = *((_WORD *)this + v8 + 138); /*0x54f148*/
      this->q314 = (v8 + 1) % 256; /*0x54f161*/
    }
    *(this + 3) = v7; /*0x54f16d*/
    *(this + 1) = v9; /*0x54f171*/
    *(this + 4) = v9; /*0x54f174*/
  }
  else if ( (unsigned __int8)result == 10 ) /*0x54f17e*/
  {
    int v10 = this->q314; /*0x54f180*/
    v11 = 0; /*0x54f186*/
    if ( v10 != v4 ) /*0x54f18a*/
    {
      v11 = *((_WORD *)this + v10 + 138); /*0x54f18c*/
      this->q314 = (v10 + 1) % 256; /*0x54f1a5*/
    }
    *((_WORD *)this + 4) = v11; /*0x54f1ab*/
  }
  return result; /*0x54f177*/
}
}

// 0x54F650
int EventQueue::Check()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  AbstractClass *v1 = this->q314; /*0x54f650*/
  if ( v1 == this->q318 ) /*0x54f65e*/
    return 0; /*0x54f669*/
  else
    return *((_WORD *)this + v1 + 138); /*0x54f660*/
}
}
