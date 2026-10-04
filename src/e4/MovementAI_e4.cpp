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
  v2 = (unsigned int *)this->u32_E4; /*0x487e0d*/
  if ( !v2 ) /*0x487e15*/
    return this->u32_100 != 0; /*0x487e15*/
  while ( (*(int (**)(unsigned int *))(*v2 + 44))(v2) != 6 ) /*0x487e21*/
  {
    v2 = (unsigned int *)v2[12]; /*0x487e23*/
    if ( !v2 ) /*0x487e28*/
      return this->u32_100 != 0; /*0x487e28*/
  }
  if ( this->u32_100 == 1 ) /*0x487e45*/
    LOBYTE(v3) = 0; /*0x487e48*/
  else
    return this->u32_100 != 0; /*0x487e2a*/
  return v3; /*0x487e34*/

}
} // namespace gamemd
// 0x4A5150
namespace gamemd {
int MovementAI::IsProgressAtEnd()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A5150)
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