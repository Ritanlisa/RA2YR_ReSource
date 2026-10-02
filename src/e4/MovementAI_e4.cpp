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
  if ( *((unsigned int *)this + 64) == 1 ) /*0x487e45*/
    LOBYTE(v3) = 0; /*0x487e48*/
  else
    return *((unsigned int *)this + 64) != 0; /*0x487e2a*/
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

  if ( !LOBYTE(this->MovementAI_field_18) ) /*0x4a5150*/
    return 1; /*0x4a5150*/
  MovementAI_field_14 = (int)(this->MovementAI_field_14); /*0x4a515b*/
  if ( !MovementAI_field_14 ) /*0x4a5164*/
    return 1; /*0x4a5164*/
  v2 = this->m_Target[2]; /*0x4a5166*/
  MovementAI_field_10 = this->MovementAI_field_10; /*0x4a5169*/
  if ( v2 != -1 ) /*0x4a516f*/
  {
    if ( *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416) - v2 >= MovementAI_field_10 ) /*0x4a517b*/
      MovementAI_field_10 = 0; /*0x4a5181*/
    else
      MovementAI_field_10 -= *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416) - v2; /*0x4a517d*/
  }
  return (double)(MovementAI_field_14 - MovementAI_field_10) / (double)this->MovementAI_field_14 == 1.0; /*0x4a519e*/

}
} // namespace gamemd
// 0x4A5360
namespace gamemd {
char MovementAI::Check()
{

  char result; // al

  result = 0; /*0x4a5363*/
  if ( LOBYTE(this->MovementAI_field_18) ) /*0x4a5360*/
  {
    if ( BYTE1(this->MovementAI_field_18) ) /*0x4a5369*/
    {
      LOBYTE(this->MovementAI_field_18) = 0; /*0x4a536e*/
      BYTE1(this->MovementAI_field_18) = 1; /*0x4a5371*/
    }
    if ( LOBYTE(this->MovementAI_field_18) ) /*0x4a5375*/
    {
      if ( !BYTE1(this->MovementAI_field_18) ) /*0x4a537a*/
      {
        LOBYTE(this->MovementAI_field_18) = 0; /*0x4a537f*/
        BYTE1(this->MovementAI_field_18) = 0; /*0x4a5382*/
      }
    }
  }
  return result; /*0x4a5385*/

}
} // namespace gamemd