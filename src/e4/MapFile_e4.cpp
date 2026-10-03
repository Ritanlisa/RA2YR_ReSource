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
namespace gamemd {
DynamicVector * MapFile::QueryInterface(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69D520)
}
} // namespace gamemd
// 0x69D770
namespace gamemd {
_DWORD * MapFile::Constructor(int a2, int a3)
{

  this->MapFile_field_0x04 = 0; /*0x69d77b*/
  this->MapFile_field_0x08 = a2; /*0x69d77e*/
  LOBYTE(this->MapFile_field_0x0C) = 1; /*0x69d781*/
  BYTE1(this->MapFile_field_0x0C) = 0; /*0x69d785*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_VectorClass); /*0x69d788*/
  if ( a2 ) /*0x69d78e*/
  {
    if ( a3 ) /*0x69d796*/
    {
      this->MapFile_field_0x04 = a3; /*0x69d798*/
      return this->__pad_0; /*0x69d79e*/
    }
    this->MapFile_field_0x04 = (unsigned int)(__2_YAPAXI_Z(4 * a2)); /*0x69d7ad*/
    BYTE1(this->MapFile_field_0x0C) = 1; /*0x69d7b0*/
  }
  return this->__pad_0; /*0x69d79d*/

}
} // namespace gamemd