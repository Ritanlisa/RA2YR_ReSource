// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x53AB70
namespace gamemd {
int sub_53AB70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_53AB70()
{
  char *v0; // edx
  int v2; // [esp+Ch] [ebp-8h]

  v0 = (char *)MEMORY[0xA8B230] + 4680; /*0x53ab7b*/
  unk_A9FABC = 1; /*0x53ab81*/
  unk_827FCC = 30; /*0x53ab8b*/
  unk_827FC8 = (int)MEMORY[0xA8ED84]; /*0x53ab95*/
  *((_DWORD *)MEMORY[0xA8B230] + 1170) = MEMORY[0xA8ED84]; /*0x53ab9a*/
  *((_DWORD *)v0 + 1) = v2; /*0x53aba8*/
  *((_DWORD *)v0 + 2) = 1; /*0x53abad*/
  *((_DWORD *)MEMORY[0xA8B230] + 3404) = *((_DWORD *)MEMORY[0xA8B230] + 3416); /*0x53abbd*/
  UpdateSurfaceAnimations( /*0x53ac39*/
    1000 * *((_DWORD *)MEMORY[0xA8B230] + 3417) / 100,
    1000 * *((_DWORD *)MEMORY[0xA8B230] + 3418) / 100,
    1000 * *((_DWORD *)MEMORY[0xA8B230] + 3419) / 100,
    1);
  return MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 1); /*0x53ac4a*/
}
}
} // namespace gamemd

// 0x5C0080
namespace gamemd {
char sub_5C0080(char ** a1, unsigned char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_5C0080(char **a1, _BYTE *a2)
{
  char result; // al

  if ( MEMORY[0xABF3F4] ) /*0x5c0087*/
    return 0; /*0x5c0089*/
  MEMORY[0xABF3F4] = (int)a1; /*0x5c008c*/
  result = VQAClass::AdvanceFrame(*a1, a2); /*0x5c0095*/
  MEMORY[0xABF3F4] = 0; /*0x5c009a*/
  return result; /*0x5c008b*/
}
}
} // namespace gamemd
