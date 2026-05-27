#include "gamemd/system/cc_file.hpp"
#include "gamemd/system/mix_file.hpp"

#include <cstring>

namespace gamemd
{

CCFileClass::CCFileClass(const char* pFileName) noexcept
    : CDFileClass(noinit_t())
{
    std::memset(&Buffer, 0, sizeof(Buffer));
    FileID        = 0;
    MixFileIndex  = 0;

    // TODO: implement Open(filename) - search MIX files for the file
    // delegates to MIX file chain: Generics, Maps, Movies, MULTIMD, MULTI
    // sub_47AE10 handles the actual open logic
}

// TODO: complete implementation
// Open(const char*) - searches MIX file registry for containing MIX
// ReadBytes - delegates read to the backing MIX file's memory buffer
// GetFileSize - returns size from current MIX subfile header
// Close - frees buffer

} // namespace gamemd
