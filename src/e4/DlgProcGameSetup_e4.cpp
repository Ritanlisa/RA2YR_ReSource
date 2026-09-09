// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x72B8E0
namespace gamemd {
char sub_72B8E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72B8E0()
{
  char result; // al

  result = MEMORY[0xB0FD5D]; /*0x72b8e0*/
  if ( !MEMORY[0xB0FD5D] ) /*0x72b8e7*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72b8f3*/
      MEMORY[0xB0FB54] = LoadFileSHP(MEMORY[0x844DC4], (bool *)&MEMORY[0xB0FD5C]); /*0x72b905*/
    result = LoadPaletteSimple(MEMORY[0x844DC8], &MEMORY[0xB0FD60], &MEMORY[0xB0FD64]); /*0x72b91a*/
    MEMORY[0xB0FD5D] = 1; /*0x72b91f*/
  }
  return result; /*0x72b926*/
}
}
} // namespace gamemd

// 0x72B930
namespace gamemd {
void sub_72B930()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72B930()
{
  void *v0; // esi

  if ( MEMORY[0xB0FD5D] ) /*0x72b93a*/
  {
    if ( MEMORY[0xB0FD5C] ) /*0x72b942*/
    {
      v0 = MEMORY[0xB0FB54]; /*0x72b945*/
      if ( MEMORY[0xB0FB54] ) /*0x72b94d*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FB54]); /*0x72b951*/
        __3_YAXPAX_Z(v0); /*0x72b957*/
      }
      MEMORY[0xB0FD5C] = 0; /*0x72b95f*/
    }
    MEMORY[0xB0FB54] = 0; /*0x72b96b*/
    if ( MEMORY[0xB0FD60] ) /*0x72b973*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FD60]); /*0x72b976*/
      MEMORY[0xB0FD60] = 0; /*0x72b97e*/
    }
    if ( MEMORY[0xB0FD64] ) /*0x72b98c*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FD64])(MEMORY[0xB0FD64], 1); /*0x72b992*/
      MEMORY[0xB0FD64] = 0; /*0x72b994*/
    }
  }
  MEMORY[0xB0FD5D] = 0; /*0x72b99a*/
}
}
} // namespace gamemd
