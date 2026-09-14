// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_779690_e4.hpp"

// 0x779690
namespace gamemd {
void * E4Recv_779690::LoadAccountInfoWOL_Load(ReferenceCounted * aP1, ObjectClass * aP2, ReferenceCounted * aP3, ReferenceCounted * aP4, int a6, ObjectClass * aP6, ReferenceCounted * aP7, ReferenceCounted * aP8, ReferenceCounted * aP9, ReferenceCounted * aP10, ReferenceCounted * aP11, ReferenceCounted * aP12, ReferenceCounted * aP13, ReferenceCounted * aP14)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall LoadAccountInfoWOL_Load(
        void *this,
        ReferenceCounted *aP1,
        ObjectClass *aP2,
        ReferenceCounted *aP3,
        ReferenceCounted *aP4,
        int a6,
        ObjectClass *aP6,
        ReferenceCounted *aP7,
        ReferenceCounted *aP8,
        ReferenceCounted *aP9,
        ReferenceCounted *aP10,
        ReferenceCounted *aP11,
        ReferenceCounted *aP12,
        ReferenceCounted *aP13,
        ReferenceCounted *aP14)
{
  this->M4 = 0; /*0x779695*/
  *((_BYTE *)this + 8) = 0; /*0x779698*/
  *(_DWORD *)this = &vt_ReferenceCounted; /*0x7796a3*/
  String::AssignFromPtr((char **)this + 3, (const char **)aP1); /*0x7796a9*/
  this->M16 = aP2; /*0x7796ba*/
  this->M24 = aP4; /*0x7796c1*/
  *((_BYTE *)this + 20) = (_BYTE)aP3; /*0x7796c8*/
  this->M28 = a6; /*0x7796cf*/
  this->M36 = aP7; /*0x7796d6*/
  this->M32 = aP6; /*0x7796dd*/
  this->M40 = aP8; /*0x7796e4*/
  this->M48 = aP10; /*0x7796eb*/
  this->M44 = aP9; /*0x7796f2*/
  this->M52 = aP11; /*0x7796f9*/
  *((_BYTE *)this + 56) = (_BYTE)aP12; /*0x779700*/
  WideString::AssignFromPtr((wchar_t **)this + 15, (const wchar_t **)aP14); /*0x779703*/
  WideString::AssignFromPtr((wchar_t **)this + 16, (const wchar_t **)aP13); /*0x779710*/
  *(_DWORD *)this = &PlayerProfile::`vftable'; /*0x779715*/
  return this; /*0x77971d*/
}
}
} // namespace gamemd
