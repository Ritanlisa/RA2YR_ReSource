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
#include "e4/e4_globals.hpp"

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
    auto* bytes = (const uint8_t*)(data);
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
    FileName        = pFileName;  // data: 0x8221f8
    Blowfish        = false;
    Encryption      = false;
    CountFiles      = 0;
    FileSize        = 0;
    FileStartOffset = 0;
    Headers         = nullptr;
    MixFileClass_field_24        = 0;
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
            int total_enc = (int)(sizeof(mix::TdHeader))
                          + CountFiles * (int)(sizeof(mix::IndexEntry));
            int padded = ((total_enc + 7) / 8) * 8;

            uint8_t* enc_buf = (uint8_t*)(malloc(padded));
            if (!enc_buf) { fclose(fp); return; }

            memcpy(enc_buf, first_block, 8);
            int remaining = padded - 8;
            if (remaining > 0) {
                if (fread(enc_buf + 8, 1, remaining, fp) != (size_t)(remaining)) {
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

            Headers = (MixHeaderData*)(malloc(sizeof(MixHeaderData) * CountFiles));
            if (!Headers) { free(enc_buf); fclose(fp); return; }

            auto* idx = (mix::IndexEntry*)(enc_buf + sizeof(mix::TdHeader));
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

    Headers = (MixHeaderData*)(malloc(sizeof(MixHeaderData) * CountFiles));
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

    FileStartOffset = body_start_offset + CountFiles * (int)(sizeof(mix::IndexEntry));

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
    FileName       = name ? _strdup(name) : _strdup("[mem]");  // data: 0x8221f8
    Blowfish       = false;
    Encryption     = false;
    CountFiles     = 0;
    FileSize       = 0;
    FileStartOffset = 0;
    Headers        = nullptr;
    MixFileClass_field_24       = 0;

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
// 0x5301a0
MixFileClass * * MixFileClass::Bootstrap()
{
  int i; // edi
  unsigned int *v2; // eax
  char v3; // bl
  MixFileClass *v4; // eax
  unsigned int *v5; // esi
  int v6; // eax
  MixFileClass *v7; // eax
  MixFileClass *v8; // eax
  unsigned int *v9; // eax
  MixFileClass *v11; // eax
  MixFileClass *v12; // eax
  unsigned int *v13; // eax
  MixFileClass *v14; // eax
  MixFileClass *v15; // eax
  unsigned int *v16; // eax
  int v17; // [esp+10h] [ebp-68h]
  RawFileClass v18; // [esp+14h] [ebp-64h] BYREF
  char Buffer[64]; // [esp+38h] [ebp-40h] BYREF

  v17 = dword_81C1D0; /*0x5301b1*/
  SetSoundWarning(-2); /*0x5301b5*/
  for ( i = 99; i >= 0; --i ) /*0x5301ba*/
  {
    sprintf(Buffer, "EXPANDMD%02d.MIX", i); /*0x5301ca*/
    v2 = RawFileClass::Construct(&v18, (int)Buffer); /*0x5301db*/
    v3 = (*(int (__thiscall **)(unsigned int *, unsigned int))(*v2 + 20))(v2, 0); /*0x5301ee*/
    RawFileClass::Dtor(&v18); /*0x5301f0*/
    if ( v3 ) /*0x5301f7*/
    {
      v4 = (MixFileClass *)RA2_OPNEW(0x28u); /*0x5301ff*/
      if ( v4 ) /*0x530209*/
      {
        v5 = (unsigned int *)(MixFileClass::FromFile(v4, Buffer, (int)dword_886980));
        if ( v5 ) /*0x530220*/
        {
          if ( g_MixFilePool_Count < g_MixFilePool_Capacity /*0x530258*/
            || (g_MixFilePool_Flag || !g_MixFilePool_Capacity)
            && g_MixFilePool_GrowSize > 0
            && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_MixFileArray + 8))(
                 &g_MixFileArray,
                 g_MixFilePool_Capacity + g_MixFilePool_GrowSize,
                 0) )
          {
            v6 = (unsigned int)(g_MixFilePool_Count++);
            *((unsigned int *)g_MixFilePool + v6) = v5; /*0x530274*/
          }
          Debug::Log_0(); /*0x530281*/
        }
      }
    }
  }
  v7 = (MixFileClass *)RA2_OPNEW(0x28u); /*0x530292*/
  if ( !v7 ) /*0x53029c*/
  {
    g_MixFile_RA2MD = 0; /*0x5302de*/
    return 0; /*0x5302de*/
  }
  g_MixFile_RA2MD = (int)MixFileClass::FromFile(v7, aRa2mdMix, (int)dword_886980); /*0x5302b1*/
  if ( !g_MixFile_RA2MD ) /*0x5302b6*/
    return 0; /*0x5302b6*/
  v8 = (MixFileClass *)RA2_OPNEW(0x28u); /*0x5302ba*/
  if ( !v8 ) /*0x5302c4*/
  {
    g_MixFile_RA2 = 0; /*0x5302ef*/
    return 0; /*0x5302fd*/
  }
  v9 = MixFileClass::FromFile(v8, aRa2Mix, (int)dword_886980); /*0x5302d2*/
  g_MixFile_RA2 = (int)v9; /*0x5302d7*/
  if ( !v9 ) /*0x530300*/
    return 0; /*0x530300*/
  Debug::Log_0(); /*0x530307*/
  v11 = (MixFileClass *)RA2_OPNEW(0x28u); /*0x53030e*/
  if ( !v11 ) /*0x530318*/
  {
    g_MixFile_CACHEMD = 0; /*0x530375*/
    return 0; /*0x530383*/
  }
  g_MixFile_CACHEMD = (int)MixFileClass::FromFile(v11, aCachemdMix, (int)dword_886980); /*0x53032d*/
  if ( !g_MixFile_CACHEMD || !_do_always_noconv_codecvt_base_std__MBE_NXZ_7((std::codecvt_base *)aCachemdMix) ) /*0x53033b*/
    return 0; /*0x53033b*/
  Debug::Log_0(); /*0x530349*/
  v12 = (MixFileClass *)RA2_OPNEW(0x28u); /*0x530350*/
  if ( !v12 ) /*0x53035a*/
  {
    g_MixFile_CACHE = 0; /*0x530385*/
    return 0; /*0x530393*/
  }
  v13 = MixFileClass::FromFile(v12, aCacheMix_0, (int)dword_886980); /*0x530368*/
  g_MixFile_CACHE = (int)v13; /*0x53036d*/
  if ( !v13 || !_do_always_noconv_codecvt_base_std__MBE_NXZ_7((std::codecvt_base *)aCacheMix_0) ) /*0x5303a3*/
    return 0; /*0x5303a3*/
  Debug::Log_0(); /*0x5303b5*/
  v14 = (MixFileClass *)RA2_OPNEW(0x28u); /*0x5303bc*/
  if ( !v14 ) /*0x5303c6*/
  {
    g_MixFile_LOCALMD = 0; /*0x53040d*/
    return 0; /*0x53041b*/
  }
  g_MixFile_LOCALMD = (int)MixFileClass::FromFile(v14, aLocalmdMix, (int)dword_886980); /*0x5303db*/
  if ( !g_MixFile_LOCALMD ) /*0x5303e0*/
    return 0; /*0x5303e0*/
  v15 = (MixFileClass *)RA2_OPNEW(0x28u); /*0x5303e8*/
  if ( !v15 ) /*0x5303f2*/
  {
    g_MixFile_LOCAL = 0; /*0x53041d*/
    return 0; /*0x53042b*/
  }
  v16 = MixFileClass::FromFile(v15, aLocalMix, (int)dword_886980); /*0x530400*/
  g_MixFile_LOCAL = (int)v16; /*0x530405*/
  if ( !v16 ) /*0x53042e*/
    return 0; /*0x5302ed*/
  Debug::Log_0(); /*0x530439*/
  SetSoundWarning(v17); /*0x530445*/
  return 1; /*0x5302e4*/
}