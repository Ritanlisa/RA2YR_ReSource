// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/CheckListClass_e4.hpp"
#include "e4/classes/BuildingAnim_e4.hpp"
#include "e4/classes/ColorListClass_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x488520
namespace gamemd {
void CheckListClass_OnClick()
{
  size_t *result; // eax
  int v9; // edi
  int Type; // ebx
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // [esp-20h] [ebp-114h]
  size_t v16; // [esp-10h] [ebp-104h]
  int v17; // [esp-10h] [ebp-104h]
  _DWORD v18[4]; // [esp+4h] [ebp-F0h] BYREF
  _DWORD v19[2]; // [esp+14h] [ebp-E0h] BYREF
  _BYTE v20[16]; // [esp+1Ch] [ebp-D8h] BYREF
  _WORD v21[100]; // [esp+2Ch] [ebp-C8h] BYREF

  result = (size_t *)(*(int (__thiscall **)(_DWORD *))(*a1 + 148))(a1); /*0x48852b*/
  if ( a3 < (int)result )
  {
    result = (size_t *)Array::GetClamped(a1, a3); /*0x488543*/
    if ( result )
    {
      memset(&v21[1], 0, 198); /*0x488560*/
      v16 = *result; /*0x48856b*/
      v21[0] = *((_BYTE *)result + 4) != 0 ? 3 : 32;
      v21[1] = 32; /*0x48857e*/
      swprintf(&v21[2], v16, a2); /*0x488585*/
      v9 = a1[11]; /*0x48858a*/
      Type = BuildingAnim::GetType(); /*0x48859c*/
      if ( a7 ) /*0x4885a7*/
      {
        v9 |= 0x2000u; /*0x4885b4*/
        v11 = *(_DWORD *)(*((_DWORD *)BuildingTypeClass_AnimTable + Type) + 796); /*0x4885bd*/
        if ( *(_DWORD *)(g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x4885c9*/
          v12 = *(unsigned __int8 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + v11); /*0x4885d6*/
        else
          v12 = *(unsigned __int16 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + 2 * v11); /*0x4885e2*/
        v18[0] = a4; /*0x4885f4*/
        v18[3] = a1[19]; /*0x4885fb*/
        v18[1] = a5; /*0x488606*/
        v18[2] = a6; /*0x48860a*/
        (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 20))( /*0x488615*/
          g_DSurface_Hidden_2,
          v18,
          v12);
      }
      else if ( (v9 & 0x4000) == 0 ) /*0x488620*/
      {
        v9 |= 0x1000u; /*0x488622*/
      }
      v13 = a1[12]; /*0x48862f*/
      v19[0] = a4; /*0x488639*/
      v17 = v13; /*0x488643*/
      v19[1] = a5; /*0x488644*/
      v15 = *((_DWORD *)BuildingTypeClass_AnimTable + Type); /*0x488659*/
      v14 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2 + 120))(g_DSurface_Hidden_2, v20); /*0x488662*/
      return FillRectangle(v18, (int)v21, g_DSurface_Hidden_2, v14, (int)v19, v15, 0, v9, a6, v17); /*0x488675*/
    }
  }
  return result; /*0x48867d*/
}
}
// 0x4886B0
int CheckListClass::COMStub()
{
  return *(&this->q0047); /*0x4886b3*/
}
// 0x557E10
int CheckListClass::ddtor(int a2)
{
  if ( this->IsReadOnly ) /*0x557e18*/
  {
    (*(void (__thiscall **)(int, int))(this->q118 + 12))(&this->q118, a2); /*0x557e2c*/
    (*(void (__thiscall **)(int, int))(this->subList2 + 12))(&this->u32_2E0, a2); /*0x557e3c*/
    (*(void (__thiscall **)(int, int))(this->subList1 + 12))(&this->subList1, a2); /*0x557e46*/
  }
  return LinkedList::InsertAfter(a2); /*0x557e51*/
}
// 0x48E650
void CheckListClass::StubReturnFalse(int a1, int a2, int a3)
{
  ; /*0x48e650*/
}
// 0x4AEBA0
int CheckListClass::COMStub_Return0()
{
  return 0; /*0x4aeba2*/
}
// 0x4E1510
void CheckListClass::StubReturnVoid()
{
  ; /*0x4e1510*/
}
// 0x4E1520
void CheckListClass::StubReturn()
{
  ; /*0x4e1520*/
}