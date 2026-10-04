// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GameOption_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/String_e4.hpp"

// 0x69ACC0
namespace gamemd {
int GameOption::GetField()
{

  return *(unsigned int *)this->field_18C; /*0x69acc8*/

}
} // namespace gamemd
// 0x69ACD0
namespace gamemd {
int GameOption::SetDescriptionWStr(wchar_t * Destination, CampaignScore * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69ACD0)
}
} // namespace gamemd
// 0x69AD80
namespace gamemd {
void * GameOption::SetDigest(char *aP1)
{

  char *result; // eax

  if ( aP1 ) /*0x69ad89*/
  {
    result = strncpy((char *)((unsigned char *)this + 348), aP1, 0x20u); /*0x69ad95*/
    this->q17B = 0; /*0x69ad9d*/
  }
  else
  {
    result = (char *)(strlen((const char *)(g_Str_No_Digest)) + 1); /*0x69adb3*/
    qmemcpy((unsigned char *)&this->u32_570, (const void *)g_Str_No_Digest, (unsigned int)result); /*0x69adc8*/
  }
  return result; /*0x69ada4*/

}
} // namespace gamemd
// 0x5E9560
namespace gamemd {
char GameOption::CheckDuplicate()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5E9560)
}
} // namespace gamemd