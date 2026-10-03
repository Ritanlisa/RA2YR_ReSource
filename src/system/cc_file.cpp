// CCFileClass -- IDA-based class for file access (MIX pool search + disk fallback)
#include "system/cc_file.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "system/mix_file.hpp"
#include "system/file_system.hpp"
#include "core/logging.hpp"

#include <cstring>
#include "core/reverse_marker.hpp"
#include "e4/classes/File_e4.hpp"

namespace gamemd
{

CCFileClass::CCFileClass(const char* pFileName) noexcept
    : CDFileClass(noinit_t())
{
    std::memset(&Buffer, 0, sizeof(Buffer));
    FileID       = 0;
    MixFileIndex = 0;

    // Store filename for later Open
    (void)pFileName; // filename stored by SetFileName or opened explicitly
}

// IDA 0x473C50 -- CCFileClass::Open
// Searches MIX pool first, then falls back to disk
REVERSE(0x473c50, "CCFileClass::Open: IDA verified", "None")
// 0x473c50
int CCFileClass::Open(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x473c50)
}
// 0x4a3890
void* CCFileClass::ReadEntireFile()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4a3890)
}
REVERSE(0x473ce0, "CCFileClass::Reset: IDA verified", "None")
// IDA 0x473CE0 -- CCFileClass::Reset
// 0x473ce0
int CCFileClass::Reset()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x473ce0)
}
}  // L-fix: close namespace tail 1