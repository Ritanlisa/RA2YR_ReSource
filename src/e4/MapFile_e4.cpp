// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MapFile_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Main_e4.hpp"

// 0x69D520
namespace gamemd {  // G42.18 ns repair
DynamicVector * MapFile::QueryInterface(unsigned int * Block, char a2)
{

  int v3 = *&Block->__pad_004; // eax /*0x69d523*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x69d526*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x69d530*/
  {
    int v4; // ecx
    v4 = *(unsigned int *)(v3 - 4); /*0x69d53b*/
    void *v5; // ebx
    v5 = (void *)(v3 - 4); /*0x69d53f*/
    ObjectClass *v6; // esi
    v6 = (ObjectClass *)(v3 + 4 * v4); /*0x69d543*/
    int v7 = v4 - 1; // ecx /*0x69d546*/
    if ( v7 >= 0 ) /*0x69d547*/
    {
      int v8 = v7 + 1; // ebp /*0x69d54a*/
      do /*0x69d558*/
      {
        v6 = (ObjectClass *)((char *)v6 - 4); /*0x69d54d*/
        DeleteAndZero(v6); /*0x69d552*/
        --v8; /*0x69d557*/
      }
      while ( v8 ); /*0x69d558*/
    }
    operator delete((v5)); /*0x69d55c*/
    *&Block->__pad_004 = 0; /*0x69d566*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x69d571*/
  *&Block->u32_8 = 0; /*0x69d577*/
  if ( (a2 & 1) != 0 ) /*0x69d57e*/
    operator delete((Block)); /*0x69d581*/
  return Block->tail_0; /*0x69d58b*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x69D770
namespace gamemd {
unsigned int * MapFile::Constructor(int a2, int a3, void *a3_1, void *a4)
{

  this->MapFile_field_0x04 = 0; /*0x69d77b*/
  this->q008 = a2; /*0x69d77e*/
  (this->q00C) = ((this->q00C) & ~0xFF) | ((1) & 0xFF); /*0x69d781*/
  (this->q00C) = ((this->q00C) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x69d785*/
  this->__pad_0 = (unsigned int)(&vt_VectorClass); /*0x69d788*/
  if ( a2 ) /*0x69d78e*/
  {
    if ( a3 ) /*0x69d796*/
    {
      this->MapFile_field_0x04 = a3; /*0x69d798*/
      return this->__pad_0; /*0x69d79e*/
    }
    this->MapFile_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x69d7ad*/
    (this->MapFile_field_0x0C) = ((this->MapFile_field_0x0C) & ~(0xFF << 8)) | (((1) & 0xFF) << 8); /*0x69d7b0*/
  }
  return this->__pad_0; /*0x69d79d*/

}
} // namespace gamemd