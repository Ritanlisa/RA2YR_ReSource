// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x49F9B0
namespace gamemd {
unsigned int * CounterClass::Construct()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CounterClass_Constructor(_DWORD *this)
{
  *(this + 1) = 0; /*0x49f9b4*/
  *(this + 2) = 0; /*0x49f9b7*/
  *((_BYTE *)this + 12) = 1; /*0x49f9ba*/
  *((_BYTE *)this + 13) = 0; /*0x49f9be*/
  *this = &CounterClass::`vftable'; /*0x49f9c1*/
  *(this + 4) = 0; /*0x49f9c7*/
  return this; /*0x49f9ca*/
}
}
} // namespace gamemd

// 0x49FA70
namespace gamemd {
int CounterClass::Decrement(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CounterClass_Decrement(_DWORD *this, int a2)
{
  int v3; // edi
  int i; // eax
  int v5; // ecx

  v3 = *(this + 2); /*0x49fa79*/
  if ( a2 < v3 ) /*0x49fa7e*/
  {
LABEL_5:
    --*(_DWORD *)(*(this + 1) + 4 * a2); /*0x49faad*/
    v5 = *(this + 1); /*0x49fabd*/
    --*(this + 4); /*0x49fac1*/
    return *(_DWORD *)(v5 + 4 * a2); /*0x49fac9*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2 + 10, 0) ) /*0x49fa8a*/
  {
    for ( i = v3; i < *(this + 2); *(_DWORD *)(*(this + 1) + 4 * i - 4) = 0 ) /*0x49fa98*/
      ++i; /*0x49fa9d*/
    goto LABEL_5; /*0x49faab*/
  }
  return 0; /*0x49fab0*/
}
}
} // namespace gamemd

// 0x49FB40
namespace gamemd {
int CounterClass::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CounterClass::_vt03(_DWORD *this)
{
  int result; // eax

  for ( result = 0; result < *(this + 2); *(_DWORD *)(*(this + 1) + 4 * result - 4) = 0 ) /*0x49fb4a*/
    ++result; /*0x49fb4f*/
  *(this + 4) = 0; /*0x49fb5b*/
  return result; /*0x49fb5e*/
}
}
} // namespace gamemd

// 0x49FBE0
namespace gamemd {
int CounterClass::Load(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CounterClass::Load(_DWORD *this, AbstractClass *aP1)
{
  AbstractClass *v3; // esi
  int result; // eax
  int v5; // ebp

  if ( this ) /*0x49fbea*/
  {
    *(this + 1) = 0; /*0x49fbec*/
    *(this + 2) = 0; /*0x49fbef*/
    *((_BYTE *)this + 12) = 1; /*0x49fbf2*/
    *((_BYTE *)this + 13) = 0; /*0x49fbf6*/
    *this = &CounterClass::`vftable'; /*0x49fbf9*/
    *(this + 4) = 0; /*0x49fbff*/
  }
  v3 = aP1; /*0x49fc02*/
  result = (*(int (__stdcall **)(AbstractClass *, _DWORD *, int, _DWORD))(*(_DWORD *)aP1->__pad_0 + 12))( /*0x49fc10*/
             aP1,
             this + 4,
             4,
             0);
  if ( result >= 0 ) /*0x49fc15*/
  {
    result = (*(int (__stdcall **)(AbstractClass *, AbstractClass **, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 12))( /*0x49fc22*/
               v3,
               &aP1,
               4,
               0);
    if ( result >= 0 ) /*0x49fc27*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, AbstractClass *, _DWORD))(*this + 8))(this, aP1, 0) ) /*0x49fc33*/
      {
        v5 = 0; /*0x49fc4a*/
        if ( (int)aP1 <= 0 ) /*0x49fc4e*/
        {
          return 0; /*0x49fc6d*/
        }
        else
        {
          while ( 1 ) /*0x49fc5d*/
          {
            result = (*(int (__stdcall **)(AbstractClass *, int, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 12))( /*0x49fc5d*/
                       v3,
                       *(this + 1) + 4 * v5,
                       4,
                       0);
            if ( result < 0 ) /*0x49fc62*/
              break; /*0x49fc62*/
            if ( ++v5 >= (int)aP1 ) /*0x49fc6b*/
              return 0; /*0x49fc6b*/
          }
        }
      }
      else
      {
        return 8; /*0x49fc3d*/
      }
    }
  }
  return result; /*0x49fc3a*/
}
}
} // namespace gamemd

// 0x49FCE0
namespace gamemd {
CounterClass * CounterClass::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_int;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (CounterClass *)this;
}
}
} // namespace gamemd
