// RawFileClass — minimal implementations for unresolved virtual functions
#include "gamemd/system/file_class.hpp"
#include <cstring>

namespace gamemd
{

const char* RawFileClass::SetFileName(const char* pFileName)
{
    FileName = pFileName;
    return FileName;
}

RawFileClass::RawFileClass(const char* pFileName)
    : FileClass()
{
    FileName = pFileName;
}

} // namespace gamemd
