// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint____13_e4.hpp"

// 0x76F180
unsigned int * VectorCursor::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall VectorCursor::_vt02(_DWORD *this)
{
  ++this->q008; /*0x76f182*/
  return this; /*0x76f185*/
}
}

// 0x76F190
unsigned int * VectorCursor::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall VectorCursor::_vt03(_DWORD *this)
{
  --this->q008; /*0x76f192*/
  return this; /*0x76f195*/
}
}

// 0x4F42D0
namespace gamemd {
void VectorCursor_uint_DynamicVectorClass_uint____13::Remove()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall VectorCursor_uint_DynamicVectorClass_uint____13_::_vt07(_DWORD *this)
{
  *(this + 3) = 2; /*0x4f42d0*/
}
}
} // namespace gamemd

// 0x4F4BB0
namespace gamemd {
void VectorCursor_uint_DynamicVectorClass_uint____13::Count(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall VectorCursor_uint_DynamicVectorClass_uint____13_::_vt10(int *this, int a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // eax

  if ( ((unsigned __int8)g_CurrentFrame & 1) == 0 ) /*0x4f4bb7*/
  {
    v3 = *(this + 1); /*0x4f4bb9*/
    if ( v3 >= 0 ) /*0x4f4bbe*/
    {
      if ( v3 <= 0 ) /*0x4f4bc5*/
        goto LABEL_7; /*0x4f4bc5*/
      v4 = 1; /*0x4f4bc7*/
    }
    else
    {
      v4 = -1; /*0x4f4bc0*/
    }
    *(this + 1) = v4 - v3; /*0x4f4bce*/
LABEL_7:
    v5 = *(this + 2); /*0x4f4bd1*/
    if ( v5 >= 0 ) /*0x4f4bd6*/
    {
      if ( v5 > 0 ) /*0x4f4be3*/
        *(this + 2) = 1 - v5; /*0x4f4bec*/
    }
    else
    {
      *(this + 2) = -1 - v5; /*0x4f4bdd*/
    }
  }
}
}
} // namespace gamemd

// 0x4F42A0
namespace gamemd {
void VectorCursor_uint_DynamicVectorClass_uint____13::Add()
{
{
    DataGlobal_A8EF54 = 0;
}
}
} // namespace gamemd

// 0x4F42E0
namespace gamemd {
void VectorCursor_uint_DynamicVectorClass_uint____13::Get()
{
{
    DataGlobal_A8EF54 = 0;
}
}
} // namespace gamemd
