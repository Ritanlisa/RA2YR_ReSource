// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5CD290
int * MSVQAnim::GetFrameRect(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall MSVQAnim::vt_06_(_DWORD *this, int *a2)
{
  int v3; // eax
  int *v4; // ecx

  if ( (MEMORY[0xABFB98] & 1) == 0 ) /*0x5cd2a0*/
  {
    MEMORY[0xABFBA0] = 0; /*0x5cd2ab*/
    MEMORY[0xABFB98] |= 1u; /*0x5cd2b1*/
    MEMORY[0xABFBA4] = 0; /*0x5cd2b7*/
    MEMORY[0xABFBA8] = 0; /*0x5cd2bd*/
    MEMORY[0xABFBAC] = 0; /*0x5cd2c3*/
    atexit(nullsub_190); /*0x5cd2c9*/
  }
  v3 = *(this + 7); /*0x5cd2d1*/
  v4 = (int *)(v3 + 52); /*0x5cd2d6*/
  if ( !v3 ) /*0x5cd2d9*/
    v4 = &MEMORY[0xABFBA0]; /*0x5cd2db*/
  *a2 = *v4; /*0x5cd2e9*/
  a2[1] = v4[1]; /*0x5cd2ee*/
  a2[2] = v4[2]; /*0x5cd2f4*/
  a2[3] = v4[3]; /*0x5cd2fb*/
  return a2; /*0x5cd2e8*/
}
}

// 0x5CD320
char MSVQAnim::Stub()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MSVQAnim::_vt07(_BYTE *this)
{
  return *(this + 45); /*0x5cd323*/
}
}

// 0x5CECB0
MSVQAnim * MSVQAnim::QueryInterface(ObjectClass ** Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
MSVQAnim *__thiscall MSVQAnim::QueryInterface(ObjectClass **Block, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx
  _DWORD **v4; // ecx
  ObjectClass *v5; // edi

  v3 = (void (__thiscall ***)(_DWORD, int))*(Block + 10); /*0x5cecb3*/
  *Block = (ObjectClass *)&MSVQAnim::`vftable'; /*0x5cecb6*/
  if ( v3 ) /*0x5cecbe*/
    (**v3)(v3, 1); /*0x5cecc4*/
  v4 = (_DWORD **)*(Block + 7); /*0x5cecc6*/
  if ( v4 ) /*0x5ceccc*/
  {
    MovieContext::Cleanup(v4); /*0x5cecce*/
    v5 = *(Block + 7); /*0x5cecd3*/
    if ( v5 ) /*0x5cecd8*/
    {
      BinkMovie::Cleanup(*(Block + 7)); /*0x5cecdc*/
      __3_YAXPAX_Z(v5); /*0x5cece2*/
    }
  }
  *Block = (ObjectClass *)&MSAnim::`vftable'; /*0x5cecee*/
  if ( (a2 & 1) != 0 ) /*0x5cecf7*/
    __3_YAXPAX_Z(Block); /*0x5cecfa*/
  return (MSVQAnim *)Block; /*0x5ced04*/
}
}
