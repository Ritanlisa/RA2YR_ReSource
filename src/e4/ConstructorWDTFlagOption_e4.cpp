// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x767820
void * GameOption_WorldDominationTour::ConstructorWDTFlagOption_Create(int arg0, void * a2, int arg8, void * a4, ObjectClass * aP5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall ConstructorWDTFlagOption_Create(
        GameOption_WorldDominationTour *this,
        int arg0,
        void *a2,
        int arg8,
        void *a4,
        ObjectClass *aP5)
{
  ObjectClass *v6; // edx
  ObjectClass *v8; // ecx

  v6 = aP5; /*0x767824*/
  v8 = (ObjectClass *)arg8; /*0x76782b*/
  *((_DWORD *)this + 2) = arg0; /*0x76782f*/
  *((_DWORD *)this + 3) = v8; /*0x767836*/
  this->GameOption_WorldDominationTour_field_0x04 = 0; /*0x76783d*/
  *(_DWORD *)this->__pad_0 = &WorldDominationTour::GameOption::`vftable'; /*0x767844*/
  *((_DWORD *)this + 4) = v6; /*0x76784a*/
  String::AssignFromPtr((char **)this + 5, (const char **)&a4); /*0x76784d*/
  String::AssignFromPtr((char **)this + 6, (const char **)&a2); /*0x76785a*/
  *(_DWORD *)this->__pad_0 = &WorldDominationTour::FlagGameOption::`vftable'; /*0x767863*/
  DeleteAndZero(&a2); /*0x767869*/
  DeleteAndZero(&a4); /*0x767872*/
  return this; /*0x767879*/
}
}
