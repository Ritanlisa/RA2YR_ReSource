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

  if ( !MEMORY[0xA8E9A0] ) /*0x487e0b*/
    return *((unsigned int *)this + 64) != 0; /*0x487e0b*/
  v2 = (unsigned int *)*((unsigned int *)this + 57); /*0x487e0d*/
  if ( !v2 ) /*0x487e15*/
    return *((unsigned int *)this + 64) != 0; /*0x487e15*/
  while ( (*(int (**)(unsigned int *))(*v2 + 44))(v2) != 6 ) /*0x487e21*/
  {
    v2 = (unsigned int *)v2[12]; /*0x487e23*/
    if ( !v2 ) /*0x487e28*/
      return *((unsigned int *)this + 64) != 0; /*0x487e28*/
  }
  return *((unsigned int *)this + 64) != 1 && *((unsigned int *)this + 64) != 0; /*0x487e48*/

}
} // namespace gamemd
// 0x4A5150
namespace gamemd {
int MovementAI::IsProgressAtEnd()
{

  int v1; // esi
  int v2; // edx
  int v3; // eax

  if ( !*((unsigned char *)this + 24) ) /*0x4a5150*/
    return 1; /*0x4a5150*/
  v1 = *((unsigned int *)this + 5); /*0x4a515b*/
  if ( !v1 ) /*0x4a5164*/
    return 1; /*0x4a5164*/
  v2 = *((unsigned int *)this + 2); /*0x4a5166*/
  v3 = *((unsigned int *)this + 4); /*0x4a5169*/
  if ( v2 != -1 ) /*0x4a516f*/
  {
    if ( (int)MEMORY[0xA8ED84] - v2 >= v3 ) /*0x4a517b*/
      v3 = 0; /*0x4a5181*/
    else
      v3 -= (int)MEMORY[0xA8ED84] - v2; /*0x4a517d*/
  }
  return (double)(v1 - v3) / (double)*((int *)this + 5) == 1.0; /*0x4a519e*/

}
} // namespace gamemd
// 0x4A5360
namespace gamemd {
void MovementAI::Check()
{

  char result; // al

  result = 0; /*0x4a5363*/
  if ( *((unsigned char *)this + 24) ) /*0x4a5360*/
  {
    if ( *((unsigned char *)this + 25) ) /*0x4a5369*/
    {
      *((unsigned char *)this + 24) = 0; /*0x4a536e*/
      *((unsigned char *)this + 25) = 1; /*0x4a5371*/
    }
    if ( *((unsigned char *)this + 24) ) /*0x4a5375*/
    {
      if ( !*((unsigned char *)this + 25) ) /*0x4a537a*/
      {
        *((unsigned char *)this + 24) = 0; /*0x4a537f*/
        *((unsigned char *)this + 25) = 0; /*0x4a5382*/
      }
    }
  }
  return result; /*0x4a5385*/

}
} // namespace gamemd