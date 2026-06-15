#include "system/mix_file.hpp"
#include "system/cc_file.hpp"
#include "system/mix_blowfish.hpp"
#include "core/vector.hpp"
#include "core/logging.hpp"

#include <windows.h>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include "core/reverse_marker.hpp"

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
// RA2 filename -- hash ID (CRC32, upper-cased without extension?)
// RA1/TD used the classic Westwood hash; TS/RA2 use CRC32
// ============================================================

uint32_t ComputeId(const char* filename)
{
    int len = (int)strlen(filename);
    int lenRounded = (len / 4) * 4;
    int padding = (len % 4) ? (4 - len % 4) : 0;

    // CRC32 of uppercased + TS-style padding:
    //   Pad byte = (len - lenRounded), then repeat last char of the 4-char block
    uint32_t crc = 0xFFFFFFFF;
    for (int i = 0; i < lenRounded; ++i) {
        uint8_t c = (uint8_t)toupper((uint8_t)filename[i]);
        crc ^= c;
        for (int j = 0; j < 8; ++j)
            crc = (crc >> 1) ^ ((crc & 1) ? 0xEDB88320u : 0);
    }
    if (len != lenRounded) {
        // Pad byte: (len - lenRounded)
        crc ^= (uint8_t)(len - lenRounded);
        for (int j = 0; j < 8; ++j)
            crc = (crc >> 1) ^ ((crc & 1) ? 0xEDB88320u : 0);
        // Repeat last chars of the 4-char block
        for (int p = 1; p < padding; ++p) {
            crc ^= (uint8_t)toupper((uint8_t)filename[lenRounded]);
            for (int j = 0; j < 8; ++j)
                crc = (crc >> 1) ^ ((crc & 1) ? 0xEDB88320u : 0);
        }
    }
    return crc ^ 0xFFFFFFFF;
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
// Constructor -- Universal MIX format parser
// Based on RA1 MixFileClass constructor logic:
//   first 2 bytes = 0 -- extended format (RA2/MO)
//   first 2 bytes != 0 -- TD legacy format
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
    MemoryData      = nullptr;
    MemoryDataSize  = 0;

    if (!pFileName)
        return;

    FILE* fp = fopen(pFileName, "rb");
    if (!fp)
        return;

    // ----------------------------------------------------------
    // Read first 2 bytes -- this is the format discriminator
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
// Memory-backed constructor -- parses from buffer, keeps data alive
// ============================================================

MixFileClass::MixFileClass(const uint8_t* data, int dataSize, const char* name) noexcept
    : Node(noinit_t())
{
    MemoryData     = const_cast<uint8_t*>(data);
    MemoryDataSize = dataSize;
    FileName       = name ? _strdup(name) : _strdup("[mem]");
    Blowfish       = false;
    Encryption     = false;
    CountFiles     = 0;
    FileSize       = 0;
    FileStartOffset = 0;
    Headers        = nullptr;
    field_24       = 0;

    if (!data || dataSize <= 2) return;

    int off = 0;
    int16_t first = *(int16_t*)(data + off);
    if (first == 0) {
        off += 2;
        if (dataSize < off + 2) return;
        int16_t flags = *(int16_t*)(data + off);
        off += 2;

        if (flags & 2) {
            Encryption = true; Blowfish = true;
            if (dataSize < off + 80) return;
            uint8_t bf_key[56];
            mix::ComputeBlowfishKey(data + off, bf_key);
            off += 80;

            mix::BlowfishEngine bf;
            bf.SetKey(bf_key, 56);

            if (dataSize < off + 8) return;
            uint8_t dec[8]; memcpy(dec, data + off, 8);
            bf.Decipher(dec, dec, 8);
            mix::TdHeader hdr; memcpy(&hdr, dec, sizeof(hdr));
            int trial_cnt = hdr.file_count;
            if (trial_cnt <= 1 || trial_cnt > 65535) return;

            int total_enc = 6 + trial_cnt * 12;
            int padded = ((total_enc + 7) / 8) * 8;
            if (dataSize < off + padded) { CountFiles = 0; return; }

            uint8_t* db = (uint8_t*)malloc(padded);
            if (!db) return;
            memcpy(db, data + off, padded);
            for (int b = 0; b < padded / 8; ++b)
                bf.Decipher(db + b*8, db + b*8, 8);

            memcpy(&hdr, db, sizeof(hdr));
            CountFiles = hdr.file_count; FileSize = hdr.body_size;
            if (CountFiles <= 0 || CountFiles > 65535) { free(db); CountFiles = 0; return; }

            // Validate: FileSize must fit within the actual data
            int hdr_end = off + padded;
            if (FileSize > dataSize - hdr_end) { free(db); CountFiles = 0; return; }
            // Validate: avg body size must be at least 200 bytes
            if (CountFiles > 0 && FileSize / CountFiles < 200) { free(db); CountFiles = 0; return; }

            Headers = (MixHeaderData*)malloc(sizeof(MixHeaderData) * CountFiles);
            if (!Headers) { free(db); return; }
            auto* idx = (mix::IndexEntry*)(db + sizeof(mix::TdHeader));
            for (int i = 0; i < CountFiles; ++i) {
                Headers[i].ID = idx[i].id;
                Headers[i].Offset = idx[i].offset;
                Headers[i].Size = idx[i].size;
            }
            FileStartOffset = off + padded;
            free(db);
            return;
        }
        // flags=0: unencrypted extended, fall through to TD header at current off
    } else {
        off = 0; // Classic TD from beginning
    }

    // TD header
    if (dataSize < off + 6) { CountFiles = 0; return; }
    mix::TdHeader hdr; memcpy(&hdr, data + off, sizeof(hdr));
    CountFiles = hdr.file_count; FileSize = hdr.body_size;
    if (CountFiles <= 0 || CountFiles > 65535) { CountFiles = 0; return; }
    int idx_sz = CountFiles * 12;
    if (dataSize < off + 6 + idx_sz) { CountFiles = 0; return; }
    int hdr_end = off + 6 + idx_sz;
    if (FileSize > dataSize - hdr_end) { CountFiles = 0; return; }
    if (CountFiles > 0 && FileSize / CountFiles < 200) { CountFiles = 0; return; }
    Headers = (MixHeaderData*)malloc(sizeof(MixHeaderData) * CountFiles);
    if (!Headers) return;
    auto* idx = (mix::IndexEntry*)(data + off + 6);
    for (int i = 0; i < CountFiles; ++i) {
        Headers[i].ID = idx[i].id;
        Headers[i].Offset = idx[i].offset;
        Headers[i].Size = idx[i].size;
    }
    FileStartOffset = off + 6 + idx_sz;
}

// ============================================================
// Bootstrap -- initialize all global MIX file references
// ============================================================

// Global pool of all loaded MIX files for recursive search
static DynamicVectorClass<MixFileClass*> g_mixPool;

DynamicVectorClass<MixFileClass*>& MixFileClass::GetMixPool()
{
    return g_mixPool;
}

REVERSE(0x5301a0, "MixFileClass::Bootstrap: IDA verified", "None")
bool MixFileClass::Bootstrap()
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

    // Reorder: expansion ("md") MIXes must come AFTER base MIXes so
    // reverse search finds them first (overriding base versions).
    // e.g. langmd.mix overrides language.mix for ra2ts_l.bik
    {
        int remaining = g_mixPool.Count;
        for (int i = 0; i < remaining; ) {
            if (!g_mixPool[i] || !g_mixPool[i]->FileName) { ++i; continue; }
            const char* name = g_mixPool[i]->FileName;
            int len = (int)strlen(name);
            if (len > 6 && _stricmp(name + len - 6, "md.mix") == 0) {
                MixFileClass* mdMix = g_mixPool[i];
                g_mixPool.RemoveItem(i);
                g_mixPool.AddItem(mdMix);
                --remaining; // one less item before the end zone
                // Don't ++i -- check the item that shifted into position i
            } else {
                ++i;
            }
        }
    }

    // Recursively extract sub-MIX files by trying to load every entry
    // from the top-level MIX files as encrypted MIX
    int processed = 0;
    const int MAX_SUB_MIX = 50;
    while (processed < g_mixPool.Count && g_mixPool.Count < MAX_SUB_MIX) {
        MixFileClass* parent = g_mixPool[processed++];
        for (int i = 0; i < parent->CountFiles && g_mixPool.Count < MAX_SUB_MIX; ++i) {
            int sz = parent->GetSize(i);
            if (sz < 1000) continue; // sub-MIX files are at least 1KB

            // Peek at first 4 bytes - must be 0x0000 for RA2 encrypted MIX
            uint8_t head[4];
            if (!parent->Peek(i, head, 4)) continue;
            if (head[0] != 0 || head[1] != 0) continue;
            uint16_t flags = *(uint16_t*)(head + 2);
            if (!(flags & 2)) continue; // must be encrypted

            uint8_t* data = (uint8_t*)malloc(sz);
            if (!data || !parent->Extract(i, data, sz)) { free(data); continue; }

            char tmpname[64];
            snprintf(tmpname, sizeof(tmpname), "sub:0x%08X", parent->GetFileID(i));

            auto* submix = new MixFileClass(data, sz, tmpname);
            if (submix->IsValid()) {
                LOG_INFO("  Sub-MIX: hash=0x%08X -> %d files, %d bytes (body %d, avg %d)",
                    parent->GetFileID(i), submix->CountFiles, sz,
                    submix->FileSize, submix->CountFiles > 0 ? submix->FileSize / submix->CountFiles : 0);
                g_mixPool.AddItem(submix); // submix owns data via MemoryData
            } else {
                delete submix; // destructor frees MemoryData (= data)
            }
        }
    }

    LOG_INFO("MixFileClass::Bootstrap: done, %d total MIX in pool after recursion", g_mixPool.Count);
    // Dump first 3 MIX entries for hash verification
    for (int i = 0; i < g_mixPool.Count && i < 3; ++i)
        if (g_mixPool[i]) g_mixPool[i]->DumpEntries();

    return true;
}

// ============================================================
// Compute MIX ID from filename
// ============================================================

uint32_t MixFileClass::ComputeID(const char* filename)
{
    return mix::ComputeId(filename);
}

// ============================================================
// Lookup -- find a file index by ID or name
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
    uint32_t crc = ComputeID(filename);
    int idx = FindIndex(crc);
    if (idx >= 0) return idx;

    // Fallback: try Classic (TD) hash
    int len = (int)strlen(filename);
    int i = 0; uint32_t cls = 0;
    while (i < len) {
        uint32_t a = 0;
        for (int j = 0; j < 4; ++j) { a >>= 8; if (i < len) a += (uint32_t)toupper((uint8_t)filename[i]) << 24; ++i; }
        cls = (cls << 1) | (cls >> 31); cls += a;
    }
    return FindIndex(cls);
}

// ============================================================
// GetSize -- return size of internal file
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
// Extract -- read an internal file into a buffer
// ============================================================

bool MixFileClass::Extract(int index, void* buffer, int buffer_size) const
{
    if (index < 0 || index >= CountFiles || !buffer)
        return false;
    if (buffer_size < static_cast<int>(Headers[index].Size))
        return false;

    // Memory-backed: read directly from MemoryData buffer
    if (MemoryData) {
        int pos = FileStartOffset + static_cast<int>(Headers[index].Offset);
        int sz  = static_cast<int>(Headers[index].Size);
        if (pos + sz > MemoryDataSize) return false;
        memcpy(buffer, MemoryData + pos, sz);
        return true;
    }

    if (!FileName) return false;

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
    if (index < 0 || index >= CountFiles || !buffer)
        return false;
    if (size > static_cast<int>(Headers[index].Size))
        size = static_cast<int>(Headers[index].Size);

    // Memory-backed
    if (MemoryData) {
        int pos = FileStartOffset + static_cast<int>(Headers[index].Offset);
        if (pos + size > MemoryDataSize) return false;
        memcpy(buffer, MemoryData + pos, size);
        return true;
    }

    if (!FileName) return false;

    FILE* fp = fopen(FileName, "rb");
    if (!fp) return false;
    int pos = FileStartOffset + static_cast<int>(Headers[index].Offset);
    fseek(fp, pos, SEEK_SET);
    size_t read = fread(buffer, 1, size, fp);
    fclose(fp);
    return read == static_cast<size_t>(size);
}

// ============================================================
// IsValid -- check if MIX was successfully loaded
// ============================================================

bool MixFileClass::IsValid() const
{
    return CountFiles > 0 && FileName != nullptr && Headers != nullptr;
}

void MixFileClass::DumpEntries() const
{
    if (!FileName || CountFiles <= 0) return;
    LOG_INFO("--- %s (%d entries) ---", FileName, CountFiles);
    for (int i = 0; i < CountFiles && i < 200; ++i)
        LOG_INFO("  [%3d] 0x%08X sz=%d off=%d", i, Headers[i].ID, Headers[i].Size, Headers[i].Offset);
}

} // namespace gamemd
