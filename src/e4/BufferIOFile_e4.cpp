// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BufferIOFile_e4.hpp"

// 0x47A9D0
namespace gamemd {
void * BufferIOFile::Constructor(char * Source)
{
  BufferIOFileClass::Constructor(); /*0x47a9d3*/
  *(this + 84) = 0; /*0x47a9df*/
  *(_DWORD *)this = &off_7E1668; /*0x47a9e3*/
  FileClass::OpenWithCDSearch(Source); /*0x47a9e9*/
  return this; /*0x47a9f0*/
}
}
// 0x47AA30
namespace gamemd {
unsigned char * BufferIOFile::Init()
{
  BufferIOFileClass::Constructor(); /*0x47aa33*/
  *(this + 84) = 0; /*0x47aa38*/
  *(_DWORD *)this = &off_7E1668; /*0x47aa3c*/
  return this; /*0x47aa44*/
}
}