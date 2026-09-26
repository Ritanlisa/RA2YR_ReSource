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

// 0x47A9D0
namespace gamemd {
void * BufferIOFile::Constructor(char * Source)
{
  BufferIOFileClass::Constructor(); /*0x47a9d3*/
  *(&this->u32_204) = 0; /*0x47a9df*/
  *(unsigned int *)this = &off_7E1668; /*0x47a9e3*/
  FileClass::OpenWithCDSearch(Source); /*0x47a9e9*/
  return this; /*0x47a9f0*/
}
}
// 0x47AA30
namespace gamemd {
unsigned char * BufferIOFile::Init()
{
  BufferIOFileClass::Constructor(); /*0x47aa33*/
  *(&this->u32_204) = 0; /*0x47aa38*/
  *(unsigned int *)this = &off_7E1668; /*0x47aa3c*/
  return this; /*0x47aa44*/
}
}