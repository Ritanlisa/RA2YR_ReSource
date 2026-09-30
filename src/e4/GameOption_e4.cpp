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

  return **((unsigned int *)this + 99); /*0x69acc8*/

}
} // namespace gamemd
// 0x69ACD0
namespace gamemd {
int GameOption::SetDescriptionWStr(wchar_t * Destination, CampaignScore * aP1)
{

  wchar_t *result; // eax
  wchar_t *StringCSF; // eax

  if ( aP1 ) /*0x69acd9*/
  {
    result = wcsncpy(Destination, (const wchar_t *)aP1, (DropListClass *)0x2C); /*0x69acdf*/
    *(Destination + 43) = 0; /*0x69ace7*/
  }
  else
  {
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[38652], 0, &stru_830620.__pad_579C[37116], 2845); /*0x69ad02*/
    return wcscpy(Destination, StringCSF); /*0x69ad09*/
  }
  return result; /*0x69aced*/

}
} // namespace gamemd
// 0x69AD80
namespace gamemd {
void * GameOption::SetDigest(CCINIClass * aP1)
{

  char *result; // eax

  if ( aP1 ) /*0x69ad89*/
  {
    result = strncpy((unsigned char *)this + 348, aP1->__pad_0, 0x20u); /*0x69ad95*/
    *((unsigned char *)this + 379) = 0; /*0x69ad9d*/
  }
  else
  {
    result = (char *)(strlen(&stru_830620.__pad_579C[38440]) + 1); /*0x69adb3*/
    qmemcpy((unsigned char *)this + 348, &stru_830620.__pad_579C[38440], (unsigned int)result); /*0x69adc8*/
  }
  return result; /*0x69ada4*/

}
} // namespace gamemd
// 0x5E9560
namespace gamemd {
char GameOption::CheckDuplicate()
{

  LPARAM *v0; // eax

  v0 = (LPARAM *)(&g_abs_A8DA90);
  while ( *(LPARAM)((LPARAM))((LPARAM))(v0) != g_abs_AC11B4 ) /*0x5e956d*/
  {
    if ( (int)++v0 >= (int)&g_abs_A8DAB0 ) /*0x5e9577*/
      return 1; /*0x5e957b*/
  }
  return 0; /*0x5e957b*/

}
} // namespace gamemd