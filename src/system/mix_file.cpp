#include "gamemd/system/mix_file.hpp"
#include "gamemd/system/cc_file.hpp"
#include "gamemd/system/mix_blowfish.hpp"
#include "gamemd/core/vector.hpp"
#include "gamemd/core/logging.hpp"

#include <windows.h>
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
// MIX format constants (from RA1 MixFileClass + RA2 extension)
// ============================================================

namespace mix {

// RA1 extended format: first 2 bytes = 0 means extended
// Next 2 bytes are flags: bit0=SHA1/checksum, bit1=blowfish encrypted
constexpr uint16_t kExtFlagChecksum  = 0x0001;
constexpr uint16_t kExtFlagEncrypted = 0x0002;

constexpr size_t kKeySourceSize   = 80;
constexpr size_t kBlowfishKeySize = 56;

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
// RA2 filename → ID hash (TD/RA algorithm, same as RA1 CRC)
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
// CRC-32 standard (for TS compatibility)
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
// Constructor — Universal MIX format parser
// Based on RA1 MixFileClass constructor logic:
//   first 2 bytes = 0 → extended format (RA2/MO)
//   first 2 bytes != 0 → TD legacy format
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

    // ----------------------------------------------------------
    // Read first 2 bytes — this is the format discriminator
    // RA1/Westwood convention: 0 = extended, non-zero = TD count
    // ----------------------------------------------------------
    int16_t first_field = 0;
    if (fread(&first_field, 2, 1, fp) != 1) {
        fclose(fp);
        return;
    }

    int body_start_offset = 0; // accumulated header size before body

    if (first_field == 0)
    {
        // ---- Extended format (RA1 extension, used by RA2/MO) ----
        body_start_offset += 2;

        // Read flags
        int16_t flags = 0;
        if (fread(&flags, 2, 1, fp) != 1) {
            fclose(fp);
            return;
        }
        body_start_offset += 2;

        if (flags & mix::kExtFlagEncrypted)
        {
            // Blowfish-encrypted header (RA2 standard)
            Encryption = true;
            Blowfish = true;

            uint8_t key_source[mix::kKeySourceSize];
            if (fread(key_source, mix::kKeySourceSize, 1, fp) != 1) {
                fclose(fp);
                return;
            }
            body_start_offset += mix::kKeySourceSize;

            // Derive blowfish key and decrypt header + index blocks
            uint8_t bf_key[mix::kBlowfishKeySize];
            mix::ComputeBlowfishKey(key_source, bf_key);

            mix::BlowfishEngine bf;
            bf.SetKey(bf_key, mix::kBlowfishKeySize);

            // Read first 8-byte encrypted block to get file count
            uint8_t first_block[8];
            if (fread(first_block, 8, 1, fp) != 1) {
                fclose(fp);
                return;
            }

            bf.Decipher(first_block, first_block, 8);

            mix::TdHeader hdr{};
            memcpy(&hdr, first_block, sizeof(hdr));
            CountFiles = hdr.file_count;
            FileSize   = hdr.body_size;

            if (CountFiles <= 0 || CountFiles > 65535) {
                fclose(fp);
                return;
            }

            // Total encrypted = header(6B) + index(count*12B), padded to 8B
            int total_enc = static_cast<int>(sizeof(mix::TdHeader))
                          + CountFiles * static_cast<int>(sizeof(mix::IndexEntry));
            int padded = ((total_enc + 7) / 8) * 8;

            uint8_t* enc_buf = static_cast<uint8_t*>(malloc(padded));
            if (!enc_buf) { fclose(fp); return; }

            memcpy(enc_buf, first_block, 8);
            int remaining = padded - 8;
            if (remaining > 0) {
                if (fread(enc_buf + 8, 1, remaining, fp) != static_cast<size_t>(remaining)) {
                    free(enc_buf); fclose(fp); return;
                }
            }

            // Decrypt remaining blocks (block 0 already decrypted)
            for (int i = 1; i < padded / 8; ++i)
                bf.Decipher(enc_buf + i * 8, enc_buf + i * 8, 8);

            // Parse header + index
            memcpy(&hdr, enc_buf, sizeof(hdr));
            CountFiles = hdr.file_count;
            FileSize   = hdr.body_size;

            Headers = static_cast<MixHeaderData*>(malloc(sizeof(MixHeaderData) * CountFiles));
            if (!Headers) { free(enc_buf); fclose(fp); return; }

            auto* idx = reinterpret_cast<mix::IndexEntry*>(enc_buf + sizeof(mix::TdHeader));
            for (int i = 0; i < CountFiles; ++i) {
                Headers[i].ID     = idx[i].id;
                Headers[i].Offset = idx[i].offset;
                Headers[i].Size   = idx[i].size;
            }

            FileStartOffset = body_start_offset + padded;
            free(enc_buf);
            fclose(fp);
            return;
        }

        // Unencrypted extended format (MO: flags=0, no key_source)
        // Fall through to read TD header at current position
    }
    else
    {
        // ---- TD legacy format ----
        // first_field contains the file count, rewind to read full header
        fseek(fp, 0, SEEK_SET);
        body_start_offset = 0;
    }

    // ----------------------------------------------------------
    // Read TD header + index (shared by all unencrypted formats)
    // ----------------------------------------------------------
    mix::TdHeader hdr{};
    if (fread(&hdr, sizeof(hdr), 1, fp) != 1) {
        fclose(fp);
        return;
    }
    body_start_offset += sizeof(hdr);
    CountFiles = hdr.file_count;
    FileSize   = hdr.body_size;

    if (CountFiles <= 0 || FileSize <= 0 || CountFiles > 65535) {
        fclose(fp);
        return;
    }

    Headers = static_cast<MixHeaderData*>(malloc(sizeof(MixHeaderData) * CountFiles));
    if (!Headers) {
        fclose(fp);
        return;
    }

    mix::IndexEntry entry{};
    for (int i = 0; i < CountFiles; ++i) {
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

    FileStartOffset = body_start_offset + CountFiles * static_cast<int>(sizeof(mix::IndexEntry));

    fclose(fp);
}

// ============================================================
// Bootstrap — initialize all global MIX file references
// ============================================================

// Global pool of all loaded MIX files for recursive search
static DynamicVectorClass<MixFileClass*> g_mixPool;

DynamicVectorClass<MixFileClass*>& MixFileClass::GetMixPool()
{
    return g_mixPool;
}

void MixFileClass::Bootstrap()
{
    LOG_INFO("MixFileClass::Bootstrap: scanning all .mix files");

    g_mixPool.Clear();

    // Load all .mix files in current directory
    WIN32_FIND_DATAA fd;
    HANDLE hFind = FindFirstFileA("*.mix", &fd);
    if (hFind != INVALID_HANDLE_VALUE) {
        do {
            if (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) continue;
            auto* mix = new MixFileClass(fd.cFileName);
            if (mix->IsValid()) {
                LOG_INFO("  %s: %d files, %d bytes", fd.cFileName, mix->CountFiles, mix->FileSize);
                // Copy the filename since fd buffer will be overwritten
                mix->FileName = _strdup(fd.cFileName);
                g_mixPool.AddItem(mix);
            } else {
                delete mix;
                LOG_WARN("  %s: FAILED to load", fd.cFileName);
            }
        } while (FindNextFileA(hFind, &fd));
        FindClose(hFind);
    }

    // Set Generics references for known MIX files
    auto find_in_pool = [](const char* name) -> MixFileClass* {
        for (int i = 0; i < g_mixPool.Count; ++i)
            if (g_mixPool[i] && g_mixPool[i]->FileName && _stricmp(g_mixPool[i]->FileName, name) == 0)
                return g_mixPool[i];
        return nullptr;
    };

    Generics.RA2MD    = find_in_pool("expandmd01.mix");
    Generics.RA2      = find_in_pool("ra2md.mix");
    Generics.LANGMD   = find_in_pool("langmd.mix");
    Generics.LANGUAGE = find_in_pool("language.mix");
    Generics.MAIN     = find_in_pool("ra2.mix");
    Generics.MULTI    = find_in_pool("multi.mix");
    Generics.MULTIMD  = find_in_pool("multimd.mix");

    LOG_INFO("MixFileClass::Bootstrap: done, %d MIX files in pool", g_mixPool.Count);
}

// ============================================================
// Compute MIX ID from filename
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

    if (buffer_size < static_cast<int>(Headers[index].Size))
        return false;

    FILE* fp = fopen(FileName, "rb");
    if (!fp)
        return false;

    int file_pos = FileStartOffset + static_cast<int>(Headers[index].Offset);
    fseek(fp, file_pos, SEEK_SET);

    size_t read = fread(buffer, 1, static_cast<size_t>(Headers[index].Size), fp);
    fclose(fp);

    return read == static_cast<size_t>(Headers[index].Size);
}

bool MixFileClass::Extract(const char* filename, void* buffer, int buffer_size) const
{
    return Extract(FindIndex(filename), buffer, buffer_size);
}

bool MixFileClass::Peek(int index, void* buffer, int size) const
{
    if (index < 0 || index >= CountFiles || !buffer || !FileName)
        return false;
    if (size > static_cast<int>(Headers[index].Size))
        size = static_cast<int>(Headers[index].Size);
    FILE* fp = fopen(FileName, "rb");
    if (!fp) return false;
    int pos = FileStartOffset + static_cast<int>(Headers[index].Offset);
    fseek(fp, pos, SEEK_SET);
    size_t read = fread(buffer, 1, size, fp);
    fclose(fp);
    return read == static_cast<size_t>(size);
}

// ============================================================
// IsValid — check if MIX was successfully loaded
// ============================================================

bool MixFileClass::IsValid() const
{
    return CountFiles > 0 && FileName != nullptr;
}

} // namespace gamemd
