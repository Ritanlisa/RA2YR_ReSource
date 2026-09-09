// RawFileClass -- minimal implementations for unresolved virtual functions
#include "system/file_class.hpp"
#include <cstring>

namespace gamemd
{

const char* RawFileClass::SetFileName(const char* pFileName)
{
    FileName = pFileName;  // data: 0x8221f8
    return FileName;  // data: 0x8221f8
}

RawFileClass::RawFileClass(const char* pFileName)
    : FileClass()
{
    FileName = pFileName;  // data: 0x8221f8
}

} // namespace gamemd
