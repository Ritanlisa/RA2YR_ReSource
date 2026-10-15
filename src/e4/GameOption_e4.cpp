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
namespace gamemd {  // G42.18 ns repair
int GameOption::GetField(void *a1, void *a2)
{

  return *(unsigned int *)this->field_18C; /*0x69acc8*/

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
    result = wcsncpy((wchar_t *)Destination, aP1, 0x2Cu); /*0x69acdf*/
    *&Destination->q056 = 0; /*0x69ace7*/
  }
  else
  {
    StringCSF = GetStringCSF(g_Str_MSG_NoDescription, 0, g_Str_File_Session_CPP, 2845); /*0x69ad02*/
    return (int)(wcscpy((wchar_t *)Destination, StringCSF)); /*0x69ad09*/
  }
  return (int)(result); /*0x69aced*/
}
} // namespace gamemd
// 0x69AD80
namespace gamemd {
void * GameOption::SetDigest(char *aP1, void *a2)
{
  char *result; // eax

  if ( aP1 ) /*0x69ad89*/
  {
    result = strncpy(this->q148 + 20), aP1, 0x20u); /*0x69ad95*/
    this->u32_5EC = 0; /*0x69ad9d*/
  }
  else
  {
    result = (char *)(strlen((const char *)(g_Str_No_Digest)) + 1); /*0x69adb3*/
    memcpy(this->q148 + 20),(const void *)(g_Str_No_Digest), (unsigned int)result); /*0x69adc8*/
  }
  return result; /*0x69ada4*/
}
} // namespace gamemd
// 0x5E9560
namespace gamemd {
char GameOption::CheckDuplicate()
{

  LPARAM *v0; // eax

  v0 = (LPARAM *)(&dword_A8DA90); /*0x5e9566*/
  while ( *v0 != g_Lobby_MaxPlayers ) /*0x5e956d*/
  {
    if ( (int)++v0 >= (int)&dword_A8DAB0 ) /*0x5e9577*/
      return 1; /*0x5e957b*/
  }
  return 0; /*0x5e957b*/

}
} // namespace gamemd