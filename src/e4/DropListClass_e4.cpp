// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DropListClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DriveLocomotionClass_e4.hpp"

// 0x4B5030
namespace gamemd {
void DropListClass_OnKeyUp(void * a1, void * a2, void * a3)
{
  int *v4; // esi
  wchar_t *result; // eax
  int v6; // ebx
  int v7; // eax
  const wchar_t *v8; // eax

  v4 = (int *)(a1 + 176); /*0x4b503a*/
  result = (wchar_t *)(*(int (__thiscall **)(int))(*(unsigned int *)(a1 + 176) + 148))(a1 + 176); /*0x4b5042*/
  if ( a3 >= (unsigned int)result ) /*0x4b504e*/
  {
    **(unsigned short **, unsigned int a2, unsigned int a3, unsigned int a1)(a1 + 52) = 0; /*0x4b5089*/
  }
  else
  {
    (*(void (__thiscall **)(int *, unsigned int, int))(*v4 + 184))(v4, a3, a2); /*0x4b5056*/
    v6 = *v4; /*0x4b505e*/
    v7 = (*(int (__thiscall **)(int))(*(unsigned int *)a1 + 164))(a1); /*0x4b5062*/
    v8 = (const wchar_t *)v4->GetClamped(v7); /*0x4b506b*/
    return wcscpy(*(wchar_t **)(a1 + 52), v8); /*0x4b5076*/
  }
  return result; /*0x4b507f*/
}
}
// 0x4B55A0
int DropListClass::COMStub()
{
  return *(&this->u32_43); /*0x4b55a3*/
}