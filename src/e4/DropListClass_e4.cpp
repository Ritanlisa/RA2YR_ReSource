// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4B5030
namespace gamemd {
void DropListClass_OnKeyUp()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *result; // eax
  const wchar_t *v8; // eax

  int * v4 = (int *)(a1 + 176); /*0x4b503a*/
  result = (wchar_t *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 176) + 148))(a1 + 176); /*0x4b5042*/
  if ( a3 >= (unsigned int)result ) /*0x4b504e*/
  {
    **(_WORD **)(a1 + 52) = 0; /*0x4b5089*/
  }
  else
  {
    (*(void (__thiscall **)(int *, unsigned int, int))(*v4 + 184))(v4, a3, a2); /*0x4b5056*/
    int v6 = *v4; /*0x4b505e*/
    int v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 164))(a1); /*0x4b5062*/
    v8 = (const wchar_t *)(*(int (__thiscall **)(int *, int))(v6 + 160))(v4, v7); /*0x4b506b*/
    return wcscpy(*(wchar_t **)(a1 + 52), v8); /*0x4b5076*/
  }
  return result; /*0x4b507f*/
}
}
} // namespace gamemd

// 0x4B55A0
int DropListClass::COMStub()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return this->q034; /*0x4b55a3*/
}
}
