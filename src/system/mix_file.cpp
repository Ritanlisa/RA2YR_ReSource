#include "gamemd/system/mix_file.hpp"
#include "gamemd/system/cc_file.hpp"
#include "gamemd/core/vector.hpp"

#include <cstdio>
#include <cstring>
#include <cctype>
#include <cstdlib>

namespace gamemd
{

// ============================================================
// Static member initialization
// ============================================================

LinkedList<MixFileClass*> MixFileClass_MIXes;
DynamicVectorClass<MixFileClass*> MixFileClass_Array;
DynamicVectorClass<MixFileClass*> MixFileClass_Array_Alt;
DynamicVectorClass<MixFileClass*> MixFileClass_Maps;
DynamicVectorClass<MixFileClass*> MixFileClass_Movies;
MixFileClass MixFileClass_MULTIMD_instance;
MixFileClass MixFileClass_MULTI_instance;
MixFileClass::GenericMixFiles MixFileClass_Generics;

LinkedList<MixFileClass*>& MixFileClass::MIXes     = MixFileClass_MIXes;
DynamicVectorClass<MixFileClass*>& MixFileClass::Array     = MixFileClass_Array;
DynamicVectorClass<MixFileClass*>& MixFileClass::Array_Alt = MixFileClass_Array_Alt;
DynamicVectorClass<MixFileClass*>& MixFileClass::Maps      = MixFileClass_Maps;
DynamicVectorClass<MixFileClass*>& MixFileClass::Movies    = MixFileClass_Movies;
MixFileClass& MixFileClass::MULTIMD = MixFileClass_MULTIMD_instance;
MixFileClass& MixFileClass::MULTI   = MixFileClass_MULTI_instance;
MixFileClass::GenericMixFiles& MixFileClass::Generics = MixFileClass_Generics;

// ============================================================
// MIX format constants
// ============================================================

namespace mix {

constexpr uint32_t kFlagChecksum  = 0x00010000;
constexpr uint32_t kFlagEncrypted = 0x00020000;
constexpr size_t   kKeySourceSize = 80;
constexpr size_t   kBlowfishKeySize = 56;
constexpr size_t   kBlowfishBlockSize = 8;
constexpr size_t   kChecksumSize = 20;

#pragma pack(push, 1)
struct TdHeader {
    int16_t file_count;
    int32_t body_size;
};

struct IndexEntry {
    uint32_t id;
    int32_t  offset;
    int32_t  size;
};
#pragma pack(pop)

// ============================================================
// RA2 filename → ID hash (TD/RA algorithm)
// ============================================================

uint32_t ComputeId(const char* filename)
{
    int len = static_cast<int>(strlen(filename));
    int i = 0;
    uint32_t id = 0;

    while (i < len) {
        uint32_t a = 0;
        for (int j = 0; j < 4; ++j) {
            a >>= 8;
            if (i < len) {
                char c = static_cast<char>(toupper(static_cast<unsigned char>(filename[i])));
                a += static_cast<uint32_t>(c) << 24;
            }
            ++i;
        }
        id = (id << 1) | (id >> 31);
        id += a;
    }
    return id;
}

// ============================================================
// CRC-32 for TS-style filename ID
// ============================================================

uint32_t Crc32(const void* data, size_t len, uint32_t crc = 0xFFFFFFFF)
{
    auto* bytes = static_cast<const uint8_t*>(data);
    for (size_t i = 0; i < len; ++i) {
        crc ^= bytes[i];
        for (int j = 0; j < 8; ++j)
            crc = (crc >> 1) ^ ((crc & 1) ? 0xEDB88320u : 0);
    }
    return crc ^ 0xFFFFFFFF;
}

} // namespace mix

// ============================================================
// Constructor — open and parse MIX file
// ============================================================

MixFileClass::MixFileClass(const char* pFileName) noexcept
    : Node(noinit_t())
{
    FileName        = pFileName;
    Blowfish        = false;
    Encryption      = false;
    CountFiles      = 0;
    FileSize        = 0;
    FileStartOffset = 0;
    Headers         = nullptr;
    field_24        = 0;

    if (!pFileName)
        return;

    FILE* fp = fopen(pFileName, "rb");
    if (!fp)
        return;

    // Read first 4 bytes to detect flags (RA/TS) or file count (TD)
    uint32_t first_word = 0;
    if (fread(&first_word, 4, 1, fp) != 1) {
        fclose(fp);
        return;
    }

    int header_offset = 4;

    // Check for RA/TS encryption flags (mix_checksum=0x10000, mix_encrypted=0x20000)
    bool has_ra_flags = false;
    uint32_t ra_flags = 0;

    if (first_word == mix::kFlagEncrypted
        || first_word == mix::kFlagChecksum
        || first_word == (mix::kFlagEncrypted | mix::kFlagChecksum))
    {
        has_ra_flags = true;
        ra_flags = first_word;

        if (ra_flags & mix::kFlagEncrypted)
        {
            Encryption = true;
            Blowfish = true;

            // Read 80-byte key_source for later blowfish decryption
            // For now, skip encrypted files (blowfish not yet implemented)
            uint8_t key_source[mix::kKeySourceSize];
            if (fread(key_source, mix::kKeySourceSize, 1, fp) != 1) {
                fclose(fp);
                return;
            }
            header_offset += mix::kKeySourceSize;

            // TODO: Implement blowfish decryption:
            //   1. Compute 56-byte key from key_source via Westwood key calculation
            //   2. Decrypt header blocks (ceil(header_size/8) * 8 bytes)
            //   3. Parse decrypted header + index

            // Mark as loaded but encrypted — content extraction not available
            FileStartOffset = -1;
            CountFiles = -1; // signals encrypted state
            fclose(fp);
            return;
        }
    }

    if (has_ra_flags)
    {
        // Unencrypted RA/TS: read normal header after flags
        mix::TdHeader hdr{};
        if (fread(&hdr, sizeof(hdr), 1, fp) != 1) {
            fclose(fp);
            return;
        }
        header_offset += sizeof(hdr);
        CountFiles = hdr.file_count;
        FileSize   = hdr.body_size;
    }
    else
    {
        // TD-style: rewind to read from start
        fseek(fp, 0, SEEK_SET);
        header_offset = 0;

        mix::TdHeader hdr{};
        if (fread(&hdr, sizeof(hdr), 1, fp) != 1) {
            fclose(fp);
            return;
        }
        header_offset += sizeof(hdr);
        CountFiles = hdr.file_count;
        FileSize   = hdr.body_size;
    }

    if (CountFiles <= 0 || FileSize <= 0 || CountFiles > 65535) {
        fclose(fp);
        return;
    }

    // Read index
    Headers = static_cast<MixHeaderData*>(malloc(sizeof(MixHeaderData) * CountFiles));
    if (!Headers) {
        fclose(fp);
        return;
    }

    for (int i = 0; i < CountFiles; ++i) {
        mix::IndexEntry entry{};
        if (fread(&entry, sizeof(entry), 1, fp) != 1) {
            free(Headers);
            Headers = nullptr;
            CountFiles = 0;
            fclose(fp);
            return;
        }
        Headers[i].ID     = entry.id;
        Headers[i].Offset = entry.offset;
        Headers[i].Size   = entry.size;
    }

    FileStartOffset = header_offset + CountFiles * static_cast<int>(sizeof(mix::IndexEntry));

    fclose(fp);
}

// ============================================================
// Bootstrap — initialize all global MIX file references
// ============================================================

void MixFileClass::Bootstrap()
{
    // TODO: Load expandmd##.mix, ra2md.mix, language.mix, etc.
    // Set up Generics struct with theater-specific MIX files
    // Register all MIX files in global list
}

// ============================================================
// Component MIX ID computation (filename → MIX ID)
// ============================================================

uint32_t MixFileClass::ComputeID(const char* filename)
{
    return mix::ComputeId(filename);
}

// ============================================================
// Lookup — find a file index by ID or name
// ============================================================

int MixFileClass::FindIndex(uint32_t id) const
{
    for (int i = 0; i < CountFiles; ++i) {
        if (Headers[i].ID == id)
            return i;
    }
    return -1;
}

int MixFileClass::FindIndex(const char* filename) const
{
    return FindIndex(mix::ComputeId(filename));
}

// ============================================================
// GetSize — return size of internal file
// ============================================================

int MixFileClass::GetSize(int index) const
{
    if (index < 0 || index >= CountFiles)
        return 0;
    return Headers[index].Size;
}

int MixFileClass::GetSize(const char* filename) const
{
    return GetSize(FindIndex(filename));
}

// ============================================================
// Extract — read an internal file into a buffer
// ============================================================

bool MixFileClass::Extract(int index, void* buffer, int buffer_size) const
{
    if (index < 0 || index >= CountFiles || !buffer || !FileName)
        return false;

    if (Blowfish) // encrypted — blowfish decryption not yet implemented
        return false;

    if (buffer_size < Headers[index].Size)
        return false;

    FILE* fp = fopen(FileName, "rb");
    if (!fp)
        return false;

    int file_pos = FileStartOffset + Headers[index].Offset;
    fseek(fp, file_pos, SEEK_SET);

    size_t read = fread(buffer, 1, Headers[index].Size, fp);
    fclose(fp);

    return read == static_cast<size_t>(Headers[index].Size);
}

bool MixFileClass::Extract(const char* filename, void* buffer, int buffer_size) const
{
    return Extract(FindIndex(filename), buffer, buffer_size);
}

// ============================================================
// IsValid — check if MIX was successfully loaded
// ============================================================

bool MixFileClass::IsValid() const
{
    return (CountFiles > 0 || (CountFiles == -1 && Blowfish)) && FileName != nullptr;
}

} // namespace gamemd
