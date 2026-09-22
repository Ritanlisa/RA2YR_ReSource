// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x68C8D0
namespace gamemd {
int ColorScheme::Destructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax
  ColorScheme *v4; // [esp+4h] [ebp-4h] BYREF
  if ( this->q304 ) /*0x68c8d4*/
    free(this->q304); /*0x68c8df*/
  v2 = *(void (__thiscall ****)(_DWORD, int))(this + 780); /*0x68c8e7*/
  this->q304 = 0; /*0x68c8ed*/
  if ( v2 ) /*0x68c8f9*/
    (**v2)(v2, 1); /*0x68c8ff*/
  *(_DWORD *)(this + 780) = 0; /*0x68c905*/
  v4 = this; /*0x68c91b*/
  result = (*(int (__thiscall **)(int *, int *))(ColorScheme_Array + 16))(&ColorScheme_Array, &v4); /*0x68c91f*/
  if ( result != -1 && result < g_AnimClass_SaveState && result < --g_AnimClass_SaveState ) /*0x68c93b*/
  {
    do /*0x68c953*/
    {
      ++result; /*0x68c943*/
      *((_DWORD *)BuildingTypeClass_AnimTable + result - 1) = *((_DWORD *)BuildingTypeClass_AnimTable + result); /*0x68c947*/
    }
    while ( result < g_AnimClass_SaveState ); /*0x68c953*/
  }
  return result; /*0x68c925*/
}
}
} // namespace gamemd
