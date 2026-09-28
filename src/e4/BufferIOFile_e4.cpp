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
  IDA_LOBYTE(this->m_54) = 0; /*0x47a9df*/
  *(_DWORD *)this->__pad_0 = &off_7E1668; /*0x47a9e3*/
  FileClass::OpenWithCDSearch(Source); /*0x47a9e9*/
  return this->__pad_0; /*0x47a9f0*/
}
}
// 0x47AA30
namespace gamemd {
unsigned char * BufferIOFile::Init()
{
  BufferIOFileClass::Constructor(); /*0x47aa33*/
  IDA_LOBYTE(this->m_54) = 0; /*0x47aa38*/
  *(_DWORD *)this->__pad_0 = &off_7E1668; /*0x47aa3c*/
  return this->__pad_0; /*0x47aa44*/
}
}