// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BufferIOFile_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BlowStraw_29_e4.hpp"
#include "e4/classes/TabClass_e4.hpp"

// 0x47A9D0
namespace gamemd {
int BufferIOFile::Constructor(char *Source)
{

  BufferIOFileClass::Constructor((BufferIOFileClass *)this); /*0x47a9d3*/
  LOBYTE(this->m_54) = 0; /*0x47a9df*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&off_7E1668); /*0x47a9e3*/
  FileClass::OpenWithCDSearch((CDFileClass *)this, Source); /*0x47a9e9*/
  return this->__pad_0; /*0x47a9f0*/

}
}
// 0x47AA30
namespace gamemd {
int BufferIOFile::Init()
{

  BufferIOFileClass::Constructor((BufferIOFileClass *)this); /*0x47aa33*/
  LOBYTE(this->m_54) = 0; /*0x47aa38*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&off_7E1668); /*0x47aa3c*/
  return this->__pad_0; /*0x47aa44*/

}
}