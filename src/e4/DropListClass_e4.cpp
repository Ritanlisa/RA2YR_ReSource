// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DropListClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DriveLocomotionClass_e4.hpp"
#include "e4/classes/EMPulseClass_e4.hpp"

// 0x4B5030
namespace gamemd {
void DropListClass_OnKeyUp(void * a1, void * a2, void * a3)
{
  int v3; // ecx
  wchar_t **v4; // edi
  int *v5; // esi
  wchar_t *result; // eax
  int v7; // ebx
  int v8; // eax
  const wchar_t *v9; // eax

  v4 = (wchar_t **)v3; /*0x4b5032*/
  v5 = (int *)(v3 + 176); /*0x4b503a*/
  result = (wchar_t *)(*(int (**)(int))(*(unsigned int *)(v3 + 176) + 148))(v3 + 176); /*0x4b5042*/
  if ( this >= (DropListClass *)result ) /*0x4b504e*/
  {
    *v4[13] = 0; /*0x4b5089*/
  }
  else
  {
    (*(void (**)(int *, DropListClass *, int))(*v5 + 184))(v5, this, a2); /*0x4b5056*/
    v7 = *v5; /*0x4b505e*/
    v8 = (*((int (**)(wchar_t **))*v4 + 41))(v4); /*0x4b5062*/
    v9 = (const wchar_t *)v5->GetClamped(v8); /*0x4b506b*/
    return wcscpy(v4[13], v9); /*0x4b5076*/
  }
  return result; /*0x4b507f*/
}
}
// 0x4B55A0
int DropListClass::COMStub()
{

  return *((unsigned int *)this + 13); /*0x4b55a3*/

}