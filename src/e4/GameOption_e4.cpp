// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x69ACC0
int GameOption::GetField()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall GameOption::GetField(_DWORD **this)
{
  return **(this + 99); /*0x69acc8*/
}
}

// 0x69ACD0
wchar_t * GameOption::SetDescriptionWStr(CampaignScore * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall GameOption::SetDescriptionWStr(wchar_t *this, CampaignScore *aP1)
{
  wchar_t *result; // eax
  wchar_t *StringCSF; // eax

  if ( aP1 ) /*0x69acd9*/
  {
    result = wcsncpy(this, (const wchar_t *)aP1, (DropListClass *)0x2C); /*0x69acdf*/
    *(this + 43) = 0; /*0x69ace7*/
  }
  else
  {
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[38652], 0, &stru_830620.__pad_579C[37116], 2845); /*0x69ad02*/
    return wcscpy(this, StringCSF); /*0x69ad09*/
  }
  return result; /*0x69aced*/
}
}

// 0x69AD80
char * GameOption::SetDigest(CCINIClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall GameOption::SetDigest(char *this, CCINIClass *aP1)
{
  char *result; // eax

  if ( aP1 ) /*0x69ad89*/
  {
    result = strncpy(this + 348, aP1->__pad_0, 0x20u); /*0x69ad95*/
    *(this + 379) = 0; /*0x69ad9d*/
  }
  else
  {
    result = (char *)(strlen(&stru_830620.__pad_579C[38440]) + 1); /*0x69adb3*/
    qmemcpy(this + 348, &stru_830620.__pad_579C[38440], (unsigned int)result); /*0x69adc8*/
  }
  return result; /*0x69ada4*/
}
}

// 0x5E9560
char GameOption::CheckDuplicate()
{
{
    LPARAM *v0;
    v0 = &g_NetworkPlayerName;
    while ( *v0 != g_Lobby_MaxPlayers )
  {
    if ( (int)++v0 >= (int)&g_PlayerNameListEnd )
    return 1;
  }
    return 0;
}
}
