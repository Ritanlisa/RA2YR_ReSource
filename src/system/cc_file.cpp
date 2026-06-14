// CCFileClass -- IDA-based class for file access (MIX pool search + disk fallback)
#include "gamemd/system/cc_file.hpp"
#include "gamemd/system/mix_file.hpp"
#include "gamemd/system/file_system.hpp"
#include "gamemd/core/logging.hpp"

#include <cstring>
#include "gamemd/core/reverse_marker.hpp"

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

REVERSE(0x4a3890, "CCFileClass::ReadEntireFile: IDA verified", "None")
// IDA 0x4A3890 -- CCFileClass::ReadEntireFile
void* CCFileClass::ReadEntireFile()
{
    if (Buffer.Buffer && Buffer.Size > 0)
        return Buffer.Buffer;

    // If not loaded, try to open the stored filename
    // (filename is stored in the base class's FileName field)
    return FileSystem::LoadFile(FileName, false);
}

REVERSE(0x473ce0, "CCFileClass::Reset: IDA verified", "None")
// IDA 0x473CE0 -- CCFileClass::Reset
void CCFileClass::Reset()
{
    Buffer.Clear();
    FileID       = 0;
    MixFileIndex = 0;
}

// IDA: 0x432610 — BufferIOFileClass dtor (84B)
// Frees internal buffer (this+12), zeros flags, calls RawFileClass::Dtor.
// a2&1 → conditional free of the object block.
extern void RawFileClass_Dtor(void*);  // IDA 0x65CA00

void* BufferIOFileClass_Destructor(void* block, bool free_block)
{
    auto* fields = reinterpret_cast<uint32_t*>(block);
    auto* bytes  = reinterpret_cast<uint8_t*>(block);

    void* buffer = reinterpret_cast<void*>(fields[12]);  // buffer pointer
    if (buffer)
    {
        if (bytes[36])  // ownership flag
        {
            operator delete(buffer);
            bytes[36] = 0;
        }
        fields[12] = 0;
    }
    fields[13] = 0;     // clear additional fields
    bytes[37] = 0;
    bytes[39] = 0;
    bytes[40] = 0;
    bytes[41] = 0;

    RawFileClass_Dtor(block);  // parent dtor

    if (free_block)
        operator delete(block);

    return block;
}

// IDA: 0x775610 — WinModemClass dtor (85B)
// Closes handle (Block+23), frees buffer (Block+9), conditional free of Block.
extern void Debug_Log();  // IDA 0x4068E0

void* WinModemClass_Destructor(void* block, bool free_block)
{
    auto* fields = reinterpret_cast<uint32_t*>(block);

    uint32_t handle = fields[23];  // DWORD at offset 92
    if (handle != 0xFFFFFFFF)
    {
        Debug_Log();
        CloseHandle(reinterpret_cast<HANDLE>(static_cast<uintptr_t>(handle)));
        fields[23] = 0xFFFFFFFF;
    }

    void* buffer = reinterpret_cast<void*>(fields[9]);  // DWORD at offset 36
    if (buffer)
        operator delete(buffer);

    if (free_block)
        operator delete(block);

    return block;
}

} // namespace gamemd
