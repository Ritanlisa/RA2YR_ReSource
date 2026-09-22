// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Array_e4.hpp"

// 0x488520
namespace gamemd {
void CheckListClass_OnClick()
{
{
  CheckListClass *result; // eax
  wchar_t *Type; // ebx
  size_t v17; // [esp-10h] [ebp-104h]
  result = (CheckListClass *)(*(int (__thiscall **)(_DWORD *))(*a1 + 148))(a1); /*0x48852b*/
  if ( (int)aP1 < (int)result )
  {
    result = (CheckListClass *)Array::GetClamped(a1, aP1); /*0x488543*/
    if ( result )
    {
  _DWORD v19[4]; // [esp+4h] [ebp-F0h] BYREF
  _WORD v22[100]; // [esp+2Ch] [ebp-C8h] BYREF
      memset(&v22[1], 0, 198); /*0x488560*/
      v17 = *(_DWORD *)result->__pad_0; /*0x48856b*/
      v22[0] = LOBYTE(result->CheckListClass_field_0x04) != 0 ? 3 : 32;
      v22[1] = 32; /*0x48857e*/
      swprintf(&v22[2], v17, a2, a3); /*0x488585*/
      int v10 = a1[11]; /*0x48858a*/
      Type = (wchar_t *)BuildingAnim::GetType(); /*0x48859c*/
      if ( a8 ) /*0x4885a7*/
      {
        v10 |= 0x2000u; /*0x4885b4*/
        int v12 = *(_DWORD *)(*(_DWORD *)(stru_B05488.field_4C + 4 * (_DWORD)Type) + 796); /*0x4885bd*/
        if ( *(_DWORD *)(*(_DWORD *)&stru_87C374[13136] + 4) == 1 ) /*0x4885c9*/
          int v13 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87C374[13136] + 372) + v12); /*0x4885d6*/
        else
          v13 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87C374[13136] + 372) + 2 * v12); /*0x4885e2*/
        v19[0] = a5; /*0x4885f4*/
        v19[3] = a1[19]; /*0x4885fb*/
        v19[1] = a6; /*0x488606*/
        v19[2] = a7; /*0x48860a*/
        (*(void (__thiscall **)(_DWORD, _DWORD *, int))(**(_DWORD **)&stru_87C374[44960] + 20))( /*0x488615*/
          *(_DWORD *)&stru_87C374[44960],
          v19,
          v13);
      }
      else if ( (v10 & 0x4000) == 0 ) /*0x488620*/
      {
        v10 |= 0x1000u; /*0x488622*/
      }
      int v14 = a1[12]; /*0x48862f*/
  int v20[2]; // [esp+14h] [ebp-E0h] BYREF
      v20[0] = a5; /*0x488639*/
      int v18 = v14; /*0x488643*/
      v20[1] = a6; /*0x488644*/
      int v16 = *(_DWORD *)(stru_B05488.field_4C + 4 * (_DWORD)Type); /*0x488659*/
  int v15; // eax
      v15 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&stru_87C374[44960] + 120))( /*0x488662*/
              *(_DWORD *)&stru_87C374[44960],
  _BYTE v21[16]; // [esp+1Ch] [ebp-D8h] BYREF
              v21);
      return (CheckListClass *)FillRectangle( /*0x488675*/
                                 (IUnknown *)v19,
                                 (IUnknown *)v22,
                                 *(int *)&stru_87C374[44960],
                                 v15,
                                 (int)v20,
                                 v16,
                                 0,
                                 v10,
                                 a7,
                                 v18);
    }
  }
  return result; /*0x48867d*/
}
} // namespace gamemd
}

// 0x4886B0
int CheckListClass::COMStub()
{
{
  return this->q044; /*0x4886b3*/
}
}

// 0x557E10
int CheckListClass::ddtor(int a2)
{
    if ( this->IsReadOnly )
    {
        this->subList3->Dispatch(a2);
        this->subList2->Dispatch(a2);
        this->subList1->Dispatch(a2);
    }
    return LinkedList::InsertAfter(this, a2);
}
}

// 0x48E650
void CheckListClass::StubReturnFalse(int a1, int a2, int a3)
{
  ;
}

// 0x4AEBA0
int CheckListClass::COMStub_Return0()
{
return 0;
}

// 0x4E1510
void CheckListClass::StubReturnVoid()
{
  ;
}

// 0x4E1520
void CheckListClass::StubReturn()
{
  ;
}
