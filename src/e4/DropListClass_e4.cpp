// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DropListClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DriveLocomotionClass_e4.hpp"
#include "e4/classes/EMPulseClass_e4.hpp"
#include "e4/classes/DropPodLocomotionClass_e4.hpp"

// 0x4B5030
namespace gamemd {  // G42.18 ns repair
wchar_t DropListClass_OnKeyUp(void * a1, void * a2, void * a3)
{

  int v3; // ecx
  wchar_t **v4; // edi
  v4 = (wchar_t **)v3; /*0x4b5032*/
  int *v5; // esi
  v5 = (int *)(v3 + 176); /*0x4b503a*/
  wchar_t *result; // eax
  result = (wchar_t *)(*(int (**)(int))(*(unsigned int *)(v3 + 176) + 148))(v3 + 176); /*0x4b5042*/
  if ( this >= (DropListClass *)result ) /*0x4b504e*/
  {
    *v4[13] = 0; /*0x4b5089*/
  }
  else
  {
    (*(void (**)(int *, DropListClass *, int))(*v5 + 184))(v5, this, a2); /*0x4b5056*/
    int v7 = *v5; // ebx /*0x4b505e*/
    int v8; // eax
    v8 = (*((int (**)(wchar_t **))*v4 + 41))(v4); /*0x4b5062*/
    const wchar_t *v9; // eax
    v9 = (const wchar_t *)v5->GetClamped(v8); /*0x4b506b*/
    return (wchar_t)(wcscpy(v4[13], v9)); /*0x4b5076*/
  }
  return (wchar_t)(result);
}
}  // G42.18 ns repair
// 0x4B55A0
int DropListClass::COMStub()
{
  return this->u32_34; /*0x4b55a3*/
}