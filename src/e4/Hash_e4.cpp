// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5C61D0
namespace gamemd {
void * sub_5C61D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *sub_5C61D0()
{
  return &unk_82E174; /*0x5c61d5*/
}
}
} // namespace gamemd

// 0x5E94D0
namespace gamemd {
int sub_5E94D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5E94D0()
{
  int result; // eax
  LPARAM *v1; // edx
  LPARAM v2; // ecx

  result = 0; /*0x5e94e5*/
  v1 = &MEMORY[0xA8DA90]; /*0x5e94e7*/
  do /*0x5e9508*/
  {
    v2 = *v1; /*0x5e94ec*/
    if ( *v1 && (v2 == MEMORY[0xAC11A4] || v2 == MEMORY[0xAC11A8] || v2 == MEMORY[0xAC11AC]) ) /*0x5e94fc*/
      ++result; /*0x5e94fe*/
    ++v1; /*0x5e94ff*/
  }
  while ( (int)v1 < (int)&MEMORY[0xA8DAB0] ); /*0x5e9508*/
  return result; /*0x5e950a*/
}
}
} // namespace gamemd

// 0x5E9580
namespace gamemd {
char sub_5E9580()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_5E9580()
{
  int v0; // edx
  LPARAM *v1; // ecx
  LPARAM v2; // eax

  v0 = 0; /*0x5e9595*/
  v1 = &MEMORY[0xA8DA90]; /*0x5e9597*/
  while ( 1 ) /*0x5e959c*/
  {
    v2 = *v1; /*0x5e959c*/
    if ( *v1 ) /*0x5e959c*/
    {
      if ( v2 != MEMORY[0xAC119C] /*0x5e95c2*/
        && v2 != MEMORY[0xAC11A0]
        && v2 != MEMORY[0xAC11B4]
        && (wchar_t *)v2 != MEMORY[0xAC11B0]
        && v0 == MEMORY[0x8316A4]
        && *(_DWORD *)(v2 + 107) == -1 )
      {
        break; /*0x5e95c2*/
      }
    }
    ++v1; /*0x5e95c4*/
    ++v0; /*0x5e95c7*/
    if ( (int)v1 >= (int)&MEMORY[0xA8DAB0] ) /*0x5e95ce*/
      return 0; /*0x5e95d5*/
  }
  return 1; /*0x5e95d0*/
}
}
} // namespace gamemd

// 0x5C61E0
namespace gamemd {
int sub_5C61E0()
{
return 3511;
}
} // namespace gamemd
