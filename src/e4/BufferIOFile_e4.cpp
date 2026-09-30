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
int BufferIOFile::Constructor(char* a1, void* a2, void* a3)
{
  BufferIOFileClass::Constructor(); /*0x47a9d3*/
    *((unsigned int *)this + 336) = 0;
    *(unsigned int *)this = &off_7E1668;
  FileClass::OpenWithCDSearch(Source); /*0x47a9e9*/
  return this; /*0x47a9f0*/
}
}
// 0x47AA30
namespace gamemd {
int BufferIOFile::Init(char* a1, void* a2, void* a3)
{
  BufferIOFileClass::Constructor(); /*0x47aa33*/
    *((unsigned int *)this + 336) = 0;
    *(unsigned int *)this = &off_7E1668;
  return this; /*0x47aa44*/
}
}