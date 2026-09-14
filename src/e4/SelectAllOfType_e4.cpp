// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7342C0_e4.hpp"

// 0x6DA770
namespace gamemd {
char sub_6DA770()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_6DA770()
{
  int *v0; // esi
  int v1; // eax
  bool v2; // zf
  #375 *v3; // eax

  if ( MEMORY[0xA8ECC8] != (wchar_t *)1 ) /*0x6da779*/
    return 0; /*0x6da779*/
  v0 = *(int **)MEMORY[0xA8ECBC]; /*0x6da780*/
  if ( !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)MEMORY[0xA8ECBC] + 60))(*(_DWORD *)MEMORY[0xA8ECBC]) ) /*0x6da786*/
    return 0; /*0x6da786*/
  v1 = *v0; /*0x6da796*/
  if ( MEMORY[0xA8B238][0] ) /*0x6da798*/
  {
    v3 = (#375 *)(*(int (__thiscall **)(int *))(v1 + 60))(v0); /*0x6da7a7*/
    v2 = (unsigned __int8)House::IsHumanPlayer(v3) == 0; /*0x6da7b1*/
  }
  else
  {
    v2 = *(_BYTE *)((*(int (__thiscall **)(int *))(v1 + 60))(v0) + 493) == 0; /*0x6da7a3*/
  }
  if ( !v2 ) /*0x6da7b3*/
    return 0; /*0x6da7c3*/
  (*(void (__thiscall **)(int *))(*v0 + 336))(v0); /*0x6da7b9*/
  return 1; /*0x6da7c1*/
}
}
} // namespace gamemd
