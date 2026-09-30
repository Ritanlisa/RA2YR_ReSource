// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MovementAI_e4.hpp"
#include "e4/classes/Movement_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x487E00
namespace gamemd {
int MovementAI::IsPathMovementAllowed()
{
  unsigned int *v2; // esi
  BOOL v3; // eax

  if ( !byte_A8E9A0 ) /*0x487e0b*/
    return this->u32_100 != 0; /*0x487e0b*/
    v2 = (unsigned int *)*((unsigned int *)this + 228);
  if ( !v2 ) /*0x487e15*/
    return this->u32_100 != 0; /*0x487e15*/
  while ( (*(int (**)(unsigned int *))(*v2 + 44))(v2) != 6 ) /*0x487e21*/
  {
    v2 = (unsigned int *)v2[12]; /*0x487e23*/
    if ( !v2 ) /*0x487e28*/
      return this->u32_100 != 0; /*0x487e28*/
  }
  if ( this->u32_100 == 1 ) /*0x487e45*/
    IDA_LOBYTE(v3) = 0; /*0x487e48*/
  else
    return this->u32_100 != 0; /*0x487e2a*/
  return v3; /*0x487e34*/
}
} // namespace gamemd
// 0x4A5150
namespace gamemd {
int MovementAI::IsProgressAtEnd()
{
  int MovementAI_field_14; // esi
  int v2; // edx
  int MovementAI_field_10; // eax

    if ( !*((unsigned char *)this + 96) )
    return 1; /*0x4a5150*/
    v1 = *((unsigned int *)this + 80);
  if ( !MovementAI_field_14 ) /*0x4a5164*/
    return 1; /*0x4a5164*/
    v2 = *((unsigned int *)this + 32);
    v3 = *((unsigned int *)this + 64);
  if ( v2 != -1 ) /*0x4a516f*/
  {
    if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v2 >= MovementAI_field_10 ) /*0x4a517b*/
      MovementAI_field_10 = 0; /*0x4a5181*/
    else
      MovementAI_field_10 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v2; /*0x4a517d*/
  }
    return (double)(v1 - v3) / (double)*((int *)this + 80) == 1.0;
}
} // namespace gamemd
// 0x4A5360
namespace gamemd {
void MovementAI::Check()
{
  char result; // al

  result = 0; /*0x4a5363*/
    if ( *((unsigned int *)this + 96) )
  {
        if ( *((unsigned int *)this + 100) )
    {
            *((unsigned int *)this + 96) = 0;
            *((unsigned int *)this + 100) = 1;
    }
        if ( *((unsigned int *)this + 96) )
    {
            if ( !*((unsigned int *)this + 100) )
      {
                *((unsigned int *)this + 96) = 0;
                *((unsigned int *)this + 100) = 0;
      }
    }
  }
  return result; /*0x4a5385*/
}
} // namespace gamemd