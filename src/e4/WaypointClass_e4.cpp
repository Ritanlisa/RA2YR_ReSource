// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7639A0_e4.hpp"

// 0x502160
namespace gamemd {
char WaypointClass::FindOrAddPath(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_502160(unsigned int *this, _DWORD *a2)
{
  int *v2; // ebp
  int v3; // ebx
  signed int v4; // esi
  void *v5; // eax
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edi
  int *Element; // eax
  int v10; // kr08_4
  int v11; // eax
  char result; // al
  unsigned int v13; // esi
  void *v14; // eax
  int v15; // eax
  signed int v16; // [esp+10h] [ebp-Ch]
  __int16 v18; // [esp+1Ah] [ebp-2h]

  v2 = (int *)(this + 132); /*0x502171*/
  v3 = *a2 / 256; /*0x50218e*/
  v4 = 0; /*0x502194*/
  v18 = a2[1] / 256; /*0x502196*/
  v16 = 0; /*0x50219b*/
  while ( 1 ) /*0x50219f*/
  {
    if ( !*v2 ) /*0x50219f*/
    {
      v5 = __2_YAPAXI_Z(0x40u); /*0x5021a7*/
      if ( v5 ) /*0x5021b1*/
        v6 = WaypointPathClass::Construct((int)v5, v4); /*0x5021b6*/
      else
        v6 = 0; /*0x5021bd*/
      *v2 = v6; /*0x5021bf*/
    }
    v7 = (_DWORD *)*v2; /*0x5021c2*/
    v8 = 0; /*0x5021c5*/
    if ( *(int *)(*v2 + 56) > 0 ) /*0x5021cc*/
      break; /*0x5021cc*/
LABEL_13:
    ++v4; /*0x50221e*/
    ++v2; /*0x50221f*/
    v16 = v4; /*0x502225*/
    if ( v4 >= 12 ) /*0x502229*/
    {
      v13 = this->q083; /*0x502233*/
      if ( !*(this + v13 + 132) ) /*0x502239*/
      {
        v14 = __2_YAPAXI_Z(0x40u); /*0x502246*/
        if ( v14 ) /*0x502250*/
          v15 = WaypointPathClass::Construct((int)v14, v13); /*0x502255*/
        else
          v15 = 0; /*0x50225c*/
        *(this + v13 + 132) = v15; /*0x50225e*/
      }
      return WaypointClass_Find((_DWORD *)*(this + this->q083 + 132), a2); /*0x502277*/
    }
  }
  while ( 1 ) /*0x5021cf*/
  {
    Element = (int *)Array::GetElement(v7, v8); /*0x5021cf*/
    v10 = *Element; /*0x5021e1*/
    v11 = Element[1] / 256; /*0x5021f2*/
    if ( (unsigned __int16)(v10 / 256) == (_WORD)v3 && (_WORD)v11 == v18 ) /*0x5021ff*/
    {
      result = v16; /*0x502205*/
      if ( v16 != this->q083 ) /*0x50220f*/
        return result; /*0x50227c*/
    }
    v7 = (_DWORD *)*v2; /*0x502211*/
    if ( ++v8 >= *(_DWORD *)(*v2 + 56) ) /*0x502218*/
    {
      v4 = v16; /*0x50221a*/
      goto LABEL_13; /*0x50221a*/
    }
  }
}
}
} // namespace gamemd
