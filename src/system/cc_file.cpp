// CCFileClass — IDA-based class for file access (MIX pool search + disk fallback)
#include "gamemd/system/cc_file.hpp"
#include "gamemd/system/mix_file.hpp"
#include "gamemd/system/file_system.hpp"
#include "gamemd/core/logging.hpp"

#include <cstring>

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

// IDA 0x473C50 — CCFileClass::Open
// Searches MIX pool first, then falls back to disk
bool CCFileClass::Open(const char* pFileName)
{
    if (!pFileName || !pFileName[0])
        return false;

    // Compute the CRC32 hash used by MIX files
    FileID = MixFileClass::ComputeID(pFileName);

    // Search MIX pool (later-loaded MIXes override earlier ones)
    auto& pool = MixFileClass::GetMixPool();
    for (int i = pool.Count - 1; i >= 0; --i) {
        auto* mix = pool[i];
        if (!mix || !mix->IsValid())
            continue;

        int idx = mix->FindIndex(pFileName);
        if (idx < 0)
            continue;

        int sz = mix->GetSize(idx);
        if (sz <= 0)
            continue;

        LOG_TRACE("CCFileClass::Open '%s' found in MIX[%d] (%d bytes)", pFileName, i, sz);
        MixFileIndex = idx;
        Buffer = MemoryBuffer(sz);
        if (mix->Extract(idx, Buffer.Buffer, sz)) {
            return true;
        }
        Buffer.Clear();
    }

    // Fall back to disk
    FILE* fp = fopen(pFileName, "rb");
    if (!fp)
        return false;

    fseek(fp, 0, SEEK_END);
    long sz = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    Buffer = MemoryBuffer(static_cast<int>(sz));
    if (fread(Buffer.Buffer, 1, sz, fp) == (size_t)sz) {
        fclose(fp);
        return true;
    }

    Buffer.Clear();
    fclose(fp);
    return false;
}

// IDA 0x4A3890 — CCFileClass::ReadEntireFile
void* CCFileClass::ReadEntireFile()
{
    if (Buffer.Buffer && Buffer.Size > 0)
        return Buffer.Buffer;

    // If not loaded, try to open the stored filename
    // (filename is stored in the base class's FileName field)
    return FileSystem::LoadFile(FileName, false);
}

// IDA 0x473CE0 — CCFileClass::Reset
void CCFileClass::Reset()
{
    Buffer.Clear();
    FileID       = 0;
    MixFileIndex = 0;
}

} // namespace gamemd
