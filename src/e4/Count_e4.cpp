// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/Player_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/E4Recv_5E93F0_e4.hpp"

// 0x408E70
namespace gamemd {
AbstractClass * * Count::DecrementRefCountsAudio()
{

  int v1; // eax
  int result; // eax
  int v3; // edx

  v1 = (int)(this->u32_1C - 1);
  this->u32_1C = v1; /*0x408e76*/
  if ( v1 < 0 ) /*0x408e79*/
    this->u32_1C = 0; /*0x408e7b*/
  result = (int)(this->m_RefCount); /*0x408e82*/
  v3 = *(unsigned int *)(this->m_RefCount + 152) - 1; /*0x408e8a*/
  *(unsigned int *)(this->m_RefCount + 152) = v3; /*0x408e8d*/
  if ( v3 < 0 ) /*0x408e93*/
  {
    result = (int)(this->m_RefCount);
    *(unsigned int *)(this->m_RefCount + 152) = 0; /*0x408e97*/
  }
  return (gamemd::AbstractClass **)(result);

}
} // namespace gamemd
// 0x46F6D0
namespace gamemd {
int Count::SetupAllCountriesLobby()
{

  ObjectClass *v1; // ecx
  int **v2; // esi
  int ResourceID2CSF; // ebp
  BOOL result; // eax
  int *v5; // ebx
  int v6; // edi
  int PlayerSide; // esi
  int **v8; // [esp+10h] [ebp-10h]
  int v10; // [esp+18h] [ebp-8h]
  HWND hWnd; // [esp+1Ch] [ebp-4h]

  v1 = (ObjectClass *)(0); /*0x46f6da*/
  v2 = (int **)dword_A8DA90; /*0x46f6dc*/
  v10 = 0; /*0x46f6e2*/
  v8 = (int **)dword_A8DA90; /*0x46f6e6*/
  do /*0x46f7ff*/
  {
    ResourceID2CSF = GetResourceID2CSF((int)(v1)); /*0x46f6ef*/
    hWnd = GetDlgItem((HWND)this, ResourceID2CSF); /*0x46f700*/
    result = ShowWindow(hWnd, 0); /*0x46f704*/
    if ( result ) /*0x46f70c*/
    {
      v5 = *v2; /*0x46f718*/
      v6 = -2; /*0x46f71c*/
      if ( dword_A8B23C && (*(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4) ) /*0x46f730*/
        v6 = (*((int (**)(ObjectClass *))dword_A8B23C->vtable1 + 10))( (ObjectClass *)(dword_A8B23C)); /*0x46f737*/
      if ( (uint8_t)((Player *)((Player *)v5))->IsObserver() ) /*0x46f73b*/
      {
        PlayerSide = (int)*(v2 - 2557); /*0x46f744*/
      }
      else if ( v5 == (int *)g_HouseClass_ObserverFlags ) /*0x46f752*/
      {
        PlayerSide = v6; /*0x46f754*/
      }
      else if ( v5 == (int *)g_Lobby_PlayerCount ) /*0x46f75e*/
      {
        PlayerSide = v6; /*0x46f760*/
      }
      else if ( v5 == (int *)g_Lobby_PlayerReady ) /*0x46f76a*/
      {
        PlayerSide = v6; /*0x46f76c*/
      }
      else if ( v5 == (int *)g_Lobby_MaxPlayers ) /*0x46f776*/
      {
        PlayerSide = -3; /*0x46f778*/
      }
      else
      {
        PlayerSide = ((SessionClass *)(v5))->GetPlayerSide(); /*0x46f786*/
      }
      if ( dword_A8B23C /*0x46f795*/
&& !(*((uint8_t (**)(ObjectClass *, int))dword_A8B23C->vtable1 + 7))( (ObjectClass *)(dword_A8B23C), PlayerSide) )


      {
        PlayerSide = v6; /*0x46f79e*/
        if ( (uint8_t)((Player *)((Player *)v5))->IsObserver() ) /*0x46f7a0*/
        {
          *(v8 - 2557) = (int *)v6; /*0x46f7ad*/
        }
        else if ( (uint8_t)IsKnownPointer((ObjectClass *)v5) ) /*0x46f7b7*/
        {
          ((SessionClass *)(*v8))->SetPlayerOption(v6); /*0x46f7c7*/
        }
      }
      SetupLobbyCountryCombo((HWND)this, ResourceID2CSF, PlayerSide); /*0x46f7d3*/
      result = ShowWindow(hWnd, 5); /*0x46f7df*/
      v2 = v8; /*0x46f7e5*/
    }
    ++v2; /*0x46f7ed*/
    v1 = (ObjectClass *)++v10; /*0x46f7f0*/
    v8 = v2; /*0x46f7fb*/
  }
  while ( (int)v2 < (int)&dword_A8DAB0 ); /*0x46f7ff*/
  return result; /*0x46f805*/

}
} // namespace gamemd
// 0x5F1EA0
namespace gamemd {
int32_t Count::GetCountQueue()
{

  int v1; // eax

  v1 = this->u32_38; /*0x5f1ea0*/
  if ( v1 ) /*0x5f1ea5*/
    return *(unsigned int *)(*(unsigned int *)(v1 + 4) + 40); /*0x5f1eaa*/
  else
    return 0; /*0x5f1eae*/

}
} // namespace gamemd
// 0x76F080
namespace gamemd {
int32_t Count::Get()
{

  return this->u32_4; /*0x76f083*/

}
} // namespace gamemd
// 0x76F160
namespace gamemd {
int32_t Count::Release(void *a1)
{

  ++this->u32_8; /*0x76f162*/
  return (int32_t)(this->__pad_0); /*0x76f165*/

}
} // namespace gamemd
// 0x76F170
namespace gamemd {
int32_t Count::ddtor()
{

  --this->u32_8; /*0x76f172*/
  return (int32_t)(this->__pad_0); /*0x76f175*/

}
} // namespace gamemd