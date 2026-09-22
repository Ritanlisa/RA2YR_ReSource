// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x408E70
void Count::DecrementRefCountsAudio()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  int v1 = this->q01C - 1; /*0x408e73*/
  this->q01C = v1; /*0x408e76*/
  if ( v1 < 0 ) /*0x408e79*/
    this->q01C = 0; /*0x408e7b*/
  result = *this; /*0x408e82*/
  int v3 = *(_DWORD *)(*this + 152) - 1; /*0x408e8a*/
  *(_DWORD *)(*this + 152) = v3; /*0x408e8d*/
  if ( v3 < 0 ) /*0x408e93*/
  {
    result = *this; /*0x408e95*/
    *(_DWORD *)(*this + 152) = 0; /*0x408e97*/
  }
  return result; /*0x408ea1*/
}
}

// 0x46F6D0
void Count::SetupAllCountriesLobby()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t **v2; // esi
  int ResourceID2; // ebp
  BOOL result; // eax
  wchar_t *v5; // ebx
  int PlayerSide; // esi
  HWND hWnd; // [esp+1Ch] [ebp-4h]

  void * v1 = 0; /*0x46f6da*/
  v2 = (wchar_t **)&g_NetworkPlayerName; /*0x46f6dc*/
  int v10 = 0; /*0x46f6e2*/
  int * v8 = &g_NetworkPlayerName; /*0x46f6e6*/
  do /*0x46f7ff*/
  {
    ResourceID2 = GetResourceID2CSF(v1); /*0x46f6ef*/
    hWnd = GetDlgItem(this, ResourceID2); /*0x46f700*/
    result = ShowWindow(hWnd, 0); /*0x46f704*/
    if ( result ) /*0x46f70c*/
    {
      v5 = *v2; /*0x46f718*/
      int v6 = -2; /*0x46f71c*/
      if ( g_GameStateFlags && (g_GameMode_Current == 3 || g_GameMode_Current == 4) ) /*0x46f730*/
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 40))(g_GameStateFlags); /*0x46f737*/
      if ( (unsigned __int8)Player::IsObserver(v5) ) /*0x46f73b*/
      {
        PlayerSide = (int)*(v2 - 2557); /*0x46f744*/
      }
      else if ( v5 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x46f752*/
      {
        PlayerSide = v6; /*0x46f754*/
      }
      else if ( v5 == (wchar_t *)g_Lobby_PlayerCount ) /*0x46f75e*/
      {
        PlayerSide = v6; /*0x46f760*/
      }
      else if ( v5 == g_Lobby_PlayerReady ) /*0x46f76a*/
      {
        PlayerSide = v6; /*0x46f76c*/
      }
      else if ( v5 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x46f776*/
      {
        PlayerSide = -3; /*0x46f778*/
      }
      else
      {
        PlayerSide = SessionClass::GetPlayerSide((int)v5); /*0x46f786*/
      }
      if ( g_GameStateFlags /*0x46f795*/
        && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)g_GameStateFlags + 28))(
              g_GameStateFlags,
              PlayerSide) )
      {
        PlayerSide = v6; /*0x46f79e*/
        if ( (unsigned __int8)Player::IsObserver(v5) ) /*0x46f7a0*/
        {
          *(v8 - 2557) = v6; /*0x46f7ad*/
        }
        else if ( IsKnownPointer(v5) ) /*0x46f7b7*/
        {
          SessionClass::SetPlayerOption(*v8, v6); /*0x46f7c7*/
        }
      }
      SetupLobbyCountryCombo(this, ResourceID2, PlayerSide); /*0x46f7d3*/
      result = ShowWindow(hWnd, 5); /*0x46f7df*/
      v2 = (wchar_t **)v8; /*0x46f7e5*/
    }
    ++v2; /*0x46f7ed*/
    v1 = (void *)++v10; /*0x46f7f0*/
    v8 = (int *)v2; /*0x46f7fb*/
  }
  while ( (int)v2 < (int)&g_PlayerNameListEnd ); /*0x46f7ff*/
  return result; /*0x46f805*/
}
}

// 0x5F1EA0
void Count::GetCountQueue()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v1 = this->q038; /*0x5f1ea0*/
  if ( v1 ) /*0x5f1ea5*/
    return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 40); /*0x5f1eaa*/
  else
    return 0; /*0x5f1eae*/
}
}

// 0x76F080
void Count::Get()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return this->q004; /*0x76f083*/
}
}

// 0x76F160
unsigned int * Count::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ++this->q008; /*0x76f162*/
  return this; /*0x76f165*/
}
}

// 0x76F170
unsigned int * Count::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  --this->q008; /*0x76f172*/
  return this; /*0x76f175*/
}
}
