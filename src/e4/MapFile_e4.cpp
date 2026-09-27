// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MapFile_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x69D520
namespace gamemd {
DynamicVector * MapFile::QueryInterface(char a2)
{
  int v3; // eax
  int v4; // ecx
  void *v5; // ebx
  void **v6; // esi
  int v7; // ecx
  int v8; // ebp

  v3 = this->q004; /*0x69d523*/
  if ( v3 && this->IsAllocated ) /*0x69d530*/
  {
    v4 = *(unsigned int *)(v3 - 4); /*0x69d53b*/
    v5 = (void *)(v3 - 4); /*0x69d53f*/
    v6 = (void **)(v3 + 4 * v4); /*0x69d543*/
    v7 = v4 - 1; /*0x69d546*/
    if ( v7 >= 0 ) /*0x69d547*/
    {
      v8 = v7 + 1; /*0x69d54a*/
      do /*0x69d558*/
      {
        DeleteAndZero(--v6); /*0x69d552*/
        --v8; /*0x69d557*/
      }
      while ( v8 ); /*0x69d558*/
    }
    RA2_OPDEL(v5); /*0x69d55c*/
    this->q004 = 0; /*0x69d566*/
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
  this->q008 = 0; /*0x69d577*/
  if ( (a2 & 1) != 0 ) /*0x69d57e*/
    RA2_OPDEL(); /*0x69d581*/
  return this; /*0x69d58b*/
}
} // namespace gamemd
// 0x69D770
namespace gamemd {
unsigned int * MapFile::Constructor(int a2, int a3)
{
  this->q004 = 0; /*0x69d77b*/
  this->q008 = a2; /*0x69d77e*/
  this->q00C = 1; /*0x69d781*/
  this->IsAllocated = 0; /*0x69d785*/
  if ( a2 ) /*0x69d78e*/
  {
    if ( a3 ) /*0x69d796*/
    {
      this->q004 = (unsigned int *)(a3);
      return this; /*0x69d79e*/
    }
    this->q004 = (unsigned char)(operator new(4 * a2));
    this->IsAllocated = 1; /*0x69d7b0*/
  }
  return (unsigned int *)(this);
}
} // namespace gamemd