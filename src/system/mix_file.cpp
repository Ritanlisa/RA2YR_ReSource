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
    FileName        = pFileName;
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
    FileName       = name ? _strdup(name) : _strdup("[mem]");
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
bool MixFileClass::Bootstrap()
{
// [IDA decompile]
char MixFileClass::Bootstrap()
{
  int i; // edi
  _DWORD *v1; // eax
  char v2; // bl
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int v16; // [esp+10h] [ebp-68h]
  int v17[9]; // [esp+14h] [ebp-64h] BYREF
  char Buffer[64]; // [esp+38h] [ebp-40h] BYREF

  v16 = dword_81C1D0;
  SetSoundWarning(-2);
  for ( i = 99; i >= 0; --i )
  {
    sprintf(Buffer, "EXPANDMD%02d.MIX", i);
    v1 = RawFileClass::Construct(v17, (int)Buffer);
    v2 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v1 + 20))(v1, 0);
    RawFileClass::Dtor(v17);
    if ( v2 )
    {
      v3 = (_DWORD *)__2_YAPAXI_Z(40);
      if ( v3 )
      {
        v4 = MixFileClass::FromFile(v3, Buffer, (int)&MEMORY[0x87F7E8][7270]);
        if ( v4 )
        {
          if ( MEMORY[0x87F7E8][5486] < MEMORY[0x87F7E8][5484]
            || (BYTE1(MEMORY[0x87F7E8][5485]) || !MEMORY[0x87F7E8][5484])
            && MEMORY[0x87F7E8][5487] > 0
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(MEMORY[0x87F7E8][5482] + 8))(
                 &MEMORY[0x87F7E8][5482],
                 MEMORY[0x87F7E8][5484] + MEMORY[0x87F7E8][5487],
                 0) )
          {
            v5 = MEMORY[0x87F7E8][5486]++;
            *(_DWORD *)(MEMORY[0x87F7E8][5483] + 4 * v5) = v4;
          }
          Debug::Log_0();
        }
      }
    }
  }
  v6 = (_DWORD *)__2_YAPAXI_Z(40);
  if ( !v6 )
  {
    MEMORY[0x87F7E8][5508] = 0;
    return 0;
  }
  MEMORY[0x87F7E8][5508] = MixFileClass::FromFile(v6, aRa2mdMix, (int)&MEMORY[0x87F7E8][7270]);
  if ( !MEMORY[0x87F7E8][5508] )
    return 0;
  v7 = (_DWORD *)__2_YAPAXI_Z(40);
  if ( !v7 )
  {
    MEMORY[0x87F7E8][5509] = 0;
    return 0;
  }
  v8 = MixFileClass::FromFile(v7, aRa2Mix, (int)&MEMORY[0x87F7E8][7270]);
  MEMORY[0x87F7E8][5509] = v8;
  if ( !v8 )
    return 0;
  Debug::Log_0();
  v10 = (_DWORD *)__2_YAPAXI_Z(40);
  if ( !v10 )
  {
    MEMORY[0x87F7E8][5528] = 0;
    return 0;
  }
  MEMORY[0x87F7E8][5528] = MixFileClass::FromFile(v10, aCachemdMix, (int)&MEMORY[0x87F7E8][7270]);
  if ( !MEMORY[0x87F7E8][5528] || !_do_always_noconv_codecvt_base_std__MBE_NXZ_7((#345 *)aCachemdMix) )
    return 0;
  Debug::Log_0();
  v11 = (_DWORD *)__2_YAPAXI_Z(40);
  if ( !v11 )
  {
    MEMORY[0x87F7E8][5529] = 0;
    return 0;
  }
  v12 = MixFileClass::FromFile(v11, aCacheMix_0, (int)&MEMORY[0x87F7E8][7270]);
  MEMORY[0x87F7E8][5529] = v12;
  if ( !v12 || !_do_always_noconv_codecvt_base_std__MBE_NXZ_7((#345 *)aCacheMix_0) )
    return 0;
  Debug::Log_0();
  v13 = (_DWORD *)__2_YAPAXI_Z(40);
  if ( !v13 )
  {
    MEMORY[0x87F7E8][5530] = 0;
    return 0;
  }
  MEMORY[0x87F7E8][5530] = MixFileClass::FromFile(v13, aLocalmdMix, (int)&MEMORY[0x87F7E8][7270]);
  if ( !MEMORY[0x87F7E8][5530] )
    return 0;
  v14 = (_DWORD *)__2_YAPAXI_Z(40);
  if ( !v14 )
  {
    MEMORY[0x87F7E8][5531] = 0;
    return 0;
  }
  v15 = MixFileClass::FromFile(v14, aLocalMix, (int)&MEMORY[0x87F7E8][7270]);
  MEMORY[0x87F7E8][5531] = v15;
  if ( !v15 )
    return 0;
  Debug::Log_0();
  SetSoundWarning(v16);
  return 1;
}

/* ASM:
Buffer          = byte ptr -40h

sub     esp, 68h
mov     eax, dword_81C1D0
push    ebx
push    ebp
push    esi
push    edi
mov     ecx, 0FFFFFFFEh
mov     [esp+78h+var_68], eax
call    SetSoundWarning
mov     edi, 63h ; 'c'

loc_5301BF:                             ; CODE XREF: MixFileClass__Bootstrap+EA↓j
push    edi
lea     ecx, [esp+7Ch+Buffer]
push    offset aExpandmd02dMix ; "EXPANDMD%02d.MIX"
push    ecx             ; Buffer
call    _sprintf
add     esp, 0Ch
lea     edx, [esp+78h+Buffer]
lea     ecx, [esp+78h+var_64]
push    edx
call    RawFileClass__Construct
mov     edx, [eax]
xor     ebp, ebp
push    ebp
mov     ecx, eax
call    dword ptr [edx+14h]
lea     ecx, [esp+78h+var_64]
mov     bl, al
call    RawFileClass__Dtor
test    bl, bl
jz      loc_530289
push    28h ; '('       ; Size
call    ??2_YAPAXI_Z
add     esp, 4
cmp     eax, ebp
jz      short loc_530289
lea     ecx, [esp+78h+Buffer]
push    886980h         ; int
push    ecx             ; char *
mov     ecx, eax
call    MixFileClass__FromFile
mov     esi, eax
cmp     esi, ebp
jz      short loc_530289
mov     eax, ds:884D98h
mov     ecx, ds:884DA0h
cmp     ecx, eax
jl      short loc_53025F
mov     cl, ds:884D9Dh
test    cl, cl
jnz     short loc_53023F
cmp     eax, ebp
jnz     short loc_530277

loc_53023F:                             ; CODE XREF: MixFileClass__Bootstrap+99↑j
mov     ecx, ds:884DA4h
cmp     ecx, ebp
jle     short loc_530277
mov     edx, ds:884D90h
add     ecx, eax
push    ebp
push    ecx
mov     ecx, 884D90h
call    dword ptr [edx+8]
test    al, al
jz      short loc_530277

loc_53025F:                             ; CODE XREF: MixFileClass__Bootstrap+8F↑j
mov     ecx, ds:884DA0h
mov     eax, ecx
inc     ecx
mov     ds:884DA0h, ecx
mov     ecx, ds:884D94h
mov     [ecx+eax*4], esi

loc_530277:                             ; CODE XREF: MixFileClass__Bootstrap+9D↑j
; MixFileClass__Bootstrap+A7↑j ...
lea     edx, [esp+78h+Buffer]
push    edx
push    offset off_826688
call    Debug__Log_0
add     esp, 8

loc_530289:                             ; CODE XREF: MixFileClass__Bootstrap+57↑j
; MixFileClass__Bootstrap+69↑j ...
dec     edi
jns     loc_5301BF
push    28h ; '('       ; Size
call    ??2_YAPAXI_Z
add     esp, 4
cmp     eax, ebp
jz      short loc_5302DE
push    886980h         ; int
push    offset aRa2mdMix ; "RA2MD.MIX"
mov     ecx, eax
call    MixFileClass__FromFile
cmp     eax, ebp
mov     ds:884DF8h, eax
jz      short loc_5302E4
push    28h ; '('       ; Size
call    ??2_YAPAXI_Z
add     esp, 4
cmp     eax, ebp
jz      short loc_5302EE
push    886980h         ; int
push    offset aRa2Mix  ; "RA2.MIX"
mov     ecx, eax
call    MixFileClass__FromFile
mov     ds:884DFCh, eax
jmp     short loc_5302FE
; ---------------------------------------------------------------------------

loc_5302DE:                             ; CODE XREF: MixFileClass__Bootstrap+FC↑j
mov     ds:884DF8h, ebp

loc_5302E4:                             ; CODE XREF: MixFileClass__Bootstrap+116↑j
; MixFileClass__Bootstrap+160↓j ...
pop     edi
pop     esi
pop     ebp
xor     al, al
pop     ebx
add     esp, 68h
retn
; ---------------------------------------------------------------------------

loc_5302EE:                             ; CODE XREF: MixFileClass__Bootstrap+124↑j
pop     edi
mov     ds:884DFCh, ebp
pop     esi
pop     ebp
xor     al, al
pop     ebx
add     esp, 68h
retn
; ---------------------------------------------------------------------------

loc_5302FE:                             ; CODE XREF: MixFileClass__Bootstrap+13C↑j
cmp     eax, ebp
jz      short loc_5302E4
push    offset g_Str_File_CACHE_MIX ; " CACHE.MIX"
call    Debug__Log_0
push    28h ; '('       ; Size
call    ??2_YAPAXI_Z
add     esp, 8
cmp     eax, ebp
jz      short loc_530374
push    886980h         ; int
push    offset aCachemdMix ; "CACHEMD.MIX"
mov     ecx, eax
call    MixFileClass__FromFile
cmp     eax, ebp
mov     ds:884E48h, eax
jz      short loc_5302E4
xor     edx, edx
mov     ecx, offset aCachemdMix ; "CACHEMD.MIX"
call    ?do_always_noconv_codecvt_base_std__MBE_NXZ_7
test    al, al
jz      short loc_5302E4
push    offset g_Str_File_CACHE_MIX ; " CACHE.MIX"
call    Debug__Log_0
push    28h ; '('       ; Size
call    ??2_YAPAXI_Z
add     esp, 8
cmp     eax, ebp
jz      short loc_530384
push    886980h         ; int
push    offset aCacheMix_0 ; "CACHE.MIX"
mov     ecx, eax
call    MixFileClass__FromFile
mov     ds:884E4Ch, eax
jmp     short loc_530394
; ---------------------------------------------------------------------------

loc_530374:                             ; CODE XREF: MixFileClass__Bootstrap+178↑j
pop     edi
mov     ds:884E48h, ebp
pop     esi
pop     ebp
xor     al, al
pop     ebx
add     esp, 68h
retn
; ---------------------------------------------------------------------------

loc_530384:                             ; CODE XREF: MixFileClass__Bootstrap+1BA↑j
pop     edi
mov     ds:884E4Ch, ebp
pop     esi
pop     ebp
xor     al, al
pop     ebx
add     esp, 68h
retn
; ---------------------------------------------------------------------------

loc_530394:                             ; CODE XREF: MixFileClass__Bootstrap+1D2↑j
cmp     eax, ebp
jz      loc_5302E4
xor     edx, edx
mov     ecx, offset aCacheMix_0 ; "CACHE.MIX"
call    ?do_always_noconv_codecvt_base_std__MBE_NXZ_7
test    al, al
jz      loc_5302E4
push    offset g_Str_File_CACHE_MIX ; " CACHE.MIX"
call    Debug__Log_0
push    28h ; '('       ; Size
call    ??2_YAPAXI_Z
add     esp, 8
cmp     eax, ebp
jz      short loc_53040C
push    886980h         ; int
push    offset aLocalmdMix ; "LOCALMD.MIX"
mov     ecx, eax
call    MixFileClass__FromFile
cmp     eax, ebp
mov     ds:884E50h, eax
jz      loc_5302E4
push    28h ; '('       ; Size
call    ??2_YAPAXI_Z
add     esp, 4
cmp     eax, ebp
jz      short loc_53041C
push    886980h         ; int
push    offset aLocalMix ; "LOCAL.MIX"
mov     ecx, eax
call    MixFileClass__FromFile
mov     ds:884E54h, eax
jmp     short loc_53042C
; ---------------------------------------------------------------------------

loc_53040C:                             ; CODE XREF: MixFileClass__Bootstrap+226↑j
pop     edi
mov     ds:884E50h, ebp
pop     esi
pop     ebp
xor     al, al
pop     ebx
add     esp, 68h
retn
; ---------------------------------------------------------------------------

loc_53041C:                             ; CODE XREF: MixFileClass__Bootstrap+252↑j
pop     edi
mov     ds:884E54h, ebp
pop     esi
pop     ebp
xor     al, al
pop     ebx
add     esp, 68h
retn
; ---------------------------------------------------------------------------

loc_53042C:                             ; CODE XREF: MixFileClass__Bootstrap+26A↑j
cmp     eax, ebp
jz      loc_5302E4
push    offset aLocalMix_0 ; " LOCAL.MIX"
call    Debug__Log_0
mov     ecx, [esp+7Ch+var_68]
add     esp, 4
call    SetSoundWarning
mov     al, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 68h
retn
*/
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
    if (buffer_size < (int)(Headers[index].Size))
        return false;

    // Memory-backed: read directly from MemoryData buffer
    if (MemoryData) {
        int pos = FileStartOffset + (int)(Headers[index].Offset);
        int sz  = (int)(Headers[index].Size);
        if (pos + sz > MemoryDataSize) return false;
        memcpy(buffer, MemoryData + pos, sz);
        return true;
    }

    if (!FileName) return false;

    FILE* fp = fopen(FileName, "rb");
    if (!fp)
        return false;

    int file_pos = FileStartOffset + (int)(Headers[index].Offset);
    fseek(fp, file_pos, SEEK_SET);

    size_t read = fread(buffer, 1, (size_t)(Headers[index].Size), fp);
    fclose(fp);

    return read == (size_t)(Headers[index].Size);
}

bool MixFileClass::Extract(const char* filename, void* buffer, int buffer_size) const
{
    return Extract(FindIndex(filename), buffer, buffer_size);
}

bool MixFileClass::Peek(int index, void* buffer, int size) const
{
    if (index < 0 || index >= CountFiles || !buffer)
        return false;
    if (size > (int)(Headers[index].Size))
        size = (int)(Headers[index].Size);

    // Memory-backed
    if (MemoryData) {
        int pos = FileStartOffset + (int)(Headers[index].Offset);
        if (pos + size > MemoryDataSize) return false;
        memcpy(buffer, MemoryData + pos, size);
        return true;
    }

    if (!FileName) return false;

    FILE* fp = fopen(FileName, "rb");
    if (!fp) return false;
    int pos = FileStartOffset + (int)(Headers[index].Offset);
    fseek(fp, pos, SEEK_SET);
    size_t read = fread(buffer, 1, size, fp);
    fclose(fp);
    return read == (size_t)(size);
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
