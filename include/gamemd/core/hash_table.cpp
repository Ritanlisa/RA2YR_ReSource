#include "core/hash_table.hpp"
#include <cstring>

namespace gamemd {

// ============================================================================
// Hash implementation
// ============================================================================

// IDA 0x69D8C0: ComputeHashSHA1 (stub)
uint32_t Hash::ComputeHashSHA1(const void* data, uint32_t size)
{
    // Original uses SHA1 class, returns 32-bit hash
    static SHA1 sha1;
    sha1.Init();
    sha1.Process(data, size);
    uint8_t digest[20];
    sha1.Compute(digest);
    // Return first 4 bytes as uint32_t hash
    return (static_cast<uint32_t>(digest[0]) << 24) |
           (static_cast<uint32_t>(digest[1]) << 16) |
           (static_cast<uint32_t>(digest[2]) << 8)  |
           static_cast<uint32_t>(digest[3]);
}

// IDA 0x52B720: InsertOrdered (stub)
void Hash::InsertOrdered(void* table, const void* entry)
{
    // Original: inserts entry into sorted hash table array
    (void)table; (void)entry;
}

// ============================================================================
// SHA1 implementation (simplified — full SHA-1 is ~200 lines)
// ============================================================================

// SHA-1 constants
static const uint32_t K[4] = {
    0x5A827999, // t=0..19
    0x6ED9EBA1, // t=20..39
    0x8F1BBCDC, // t=40..59
    0xCA62C1D6  // t=60..79
};

static inline uint32_t RotL(uint32_t x, int n) {
    return (x << n) | (x >> (32 - n));
}

// IDA 0x69D8C0: Init
void SHA1::Init()
{
    state[0] = 0x67452301;
    state[1] = 0xEFCDAB89;
    state[2] = 0x98BADCFE;
    state[3] = 0x10325476;
    state[4] = 0xC3D2E1F0;
    count = 0;
    buffer_index = 0;
    memset(buffer, 0, sizeof(buffer));
}

// IDA 0x69DA00: Process
void SHA1::Process(const void* data, uint32_t size)
{
    const uint8_t* p = static_cast<const uint8_t*>(data);
    for (uint32_t i = 0; i < size; ++i) {
        buffer[buffer_index++] = p[i];
        count += 8;
        if (buffer_index == 64) {
            Transform();
            buffer_index = 0;
            count += 64 * 8;
        }
    }
}

// IDA 0x69DC00: Compute
void SHA1::Compute(uint8_t digest[20])
{
    PadMessage();
    for (int i = 0; i < 5; ++i) {
        digest[i * 4 + 0] = static_cast<uint8_t>((state[i] >> 24) & 0xFF);
        digest[i * 4 + 1] = static_cast<uint8_t>((state[i] >> 16) & 0xFF);
        digest[i * 4 + 2] = static_cast<uint8_t>((state[i] >> 8) & 0xFF);
        digest[i * 4 + 3] = static_cast<uint8_t>(state[i] & 0xFF);
    }
}

// Transform: process one 64-byte block
void SHA1::Transform()
{
    uint32_t w[80];
    // Copy chunk into w[0..15]
    for (int i = 0; i < 16; ++i) {
        w[i] = (static_cast<uint32_t>(buffer[i * 4]) << 24) |
               (static_cast<uint32_t>(buffer[i * 4 + 1]) << 16) |
               (static_cast<uint32_t>(buffer[i * 4 + 2]) << 8) |
               static_cast<uint32_t>(buffer[i * 4 + 3]);
    }
    // Extend w[16..79]
    for (int i = 16; i < 80; ++i) {
        w[i] = RotL(w[i - 3] ^ w[i - 8] ^ w[i - 14] ^ w[i - 16], 1);
    }

    uint32_t a = state[0], b = state[1], c = state[2], d = state[3], e = state[4];

    for (int i = 0; i < 80; ++i) {
        uint32_t f, k;
        if (i < 20) {
            f = (b & c) | ((~b) & d);
            k = K[0];
        } else if (i < 40) {
            f = b ^ c ^ d;
            k = K[1];
        } else if (i < 60) {
            f = (b & c) | (b & d) | (c & d);
            k = K[2];
        } else {
            f = b ^ c ^ d;
            k = K[3];
        }
        uint32_t temp = RotL(a, 5) + f + e + k + w[i];
        e = d; d = c; c = RotL(b, 30); b = a; a = temp;
    }

    state[0] += a; state[1] += b; state[2] += c; state[3] += d; state[4] += e;
}

// PadMessage: append padding + length
void SHA1::PadMessage()
{
    // Save original count (before Process added extra bits)
    uint64_t original_bits = count;
    // Pad
    buffer[buffer_index++] = 0x80;
    if (buffer_index > 56) {
        while (buffer_index < 64) buffer[buffer_index++] = 0;
        Transform();
        buffer_index = 0;
    }
    while (buffer_index < 56) buffer[buffer_index++] = 0;
    // Append length in big-endian
    for (int i = 7; i >= 0; --i) {
        buffer[56 + i] = static_cast<uint8_t>(original_bits & 0xFF);
        original_bits >>= 8;
    }
    Transform();
}

// IDA 0x69D8C0: DigestToHex
void SHA1::DigestToHex(const uint8_t digest[20], char hex[41])
{
    static const char hex_chars[] = "0123456789ABCDEF";
    for (int i = 0; i < 20; ++i) {
        hex[i * 2]     = hex_chars[(digest[i] >> 4) & 0xF];
        hex[i * 2 + 1] = hex_chars[digest[i] & 0xF];
    }
    hex[40] = '\0';
}

// ============================================================================
// CRC32 implementation
// ============================================================================

// Standard CRC-32 lookup table
static const uint32_t crc32_table[256] = {
    0x00000000,0x77073096,0xEE0E612C,0x990951BA,0x076DC419,0x706AF48F,0xE963A535,0x9E6495A3,
    0x0EDB8832,0x79DCB8A4,0xE0D5E91E,0x97D2D988,0x09B64C2B,0x7EB17CBD,0xE7B82D07,0x90BF1D91,
    0x1DB71064,0x6AB020F2,0xF3B97148,0x84BE41DE,0x1ADAD47D,0x6DDDE4EB,0xF4D4B551,0x83D385C7,
    0x136C9856,0x646BA8C0,0xFD62F97A,0x8A65C9EC,0x14015C4F,0x63066CD9,0xFA0F3D63,0x8D080DF5,
    0x3B6E20C8,0x4C69105E,0xD56041E4,0xA2677172,0x3C03E4D1,0x4B04D447,0xD20D85FD,0xA50AB56B,
    0x35B5A8FA,0x42B2986C,0xDBBBC9D6,0xACBCF940,0x32D86CE3,0x45DF5C75,0xDCD60DCF,0xABD13D59,
    0x26D930AC,0x51DE003A,0xC8D75180,0xBFD06116,0x21B4F4B5,0x56B3C423,0xCFBA9599,0xB8BDA50F,
    0x2802B89E,0x5F058808,0xC60CD9B2,0xB10BE924,0x2F6F7C87,0x58684C11,0xC1611DAB,0xB6662D3D,
    0x76DC4190,0x01DB7106,0x98D220BC,0xEFD5102A,0x71B18589,0x06B6B51F,0x9FBFE4A5,0xE8B8D433,
    0x7807C9A2,0x0F00F934,0x9609A88E,0xE10E9818,0x7F6A0DBB,0x086D3D2D,0x91646C97,0xE6635C01,
    0x6B6B51F4,0x1C6C6162,0x856530D8,0xF262004E,0x6C0695ED,0x1B01A57B,0x8208F4C1,0xF50FC457,
    0x65B0D9C6,0x12B7E950,0x8BBEB8EA,0xFCB9887C,0x62DD1DDF,0x15DA2D49,0x8CD37CF3,0xFBD44C65,
    0x4DB26158,0x3AB551CE,0xA3BC0074,0xD4BB30E2,0x4ADFA541,0x3DD895D7,0xA4D1C46D,0xD3D6F4FB,
    0x4369E96A,0x346ED9FC,0xAD678846,0xDA60B8D0,0x44042D73,0x33031DE5,0xAA0A4C5F,0xDD0D7CC9,
    0x5005713C,0x270241AA,0xBE0B1010,0xC90C2086,0x5768B525,0x206F85B3,0xB966D409,0xCE61E49F,
    0x5EDEF90E,0x29D9C998,0xB0D09822,0xC7D7A8B4,0x59B33D17,0x2EB40D81,0xB7BD5C3B,0xC0BA6CAD,
    0xEDB88320,0x9ABFB3B6,0x03B6E20C,0x74B1D29A,0xEAD54739,0x9DD277AF,0x04DB2615,0x73DC1683,
    0xE3630B12,0x94643B84,0x0D6D6A3E,0x7A6A5AA8,0xE40ECF0B,0x9309FF9D,0x0A00AE27,0x7D079EB1,
    0xF00F9344,0x8708A3D2,0x1E01F268,0x6906C2FE,0xF762575D,0x806567CB,0x196C3671,0x6E6B06E7,
    0xFED41B76,0x89D32BE0,0x10DA7A5A,0x67DD4ACC,0xF9B9DF6F,0x8EBEEFF9,0x17B7BE43,0x60B08ED5,
    0xD6D6A3E8,0xA1D1937E,0x38D8C2C4,0x4FDFF252,0xD1BB67F1,0xA6BC5767,0x3FB506DD,0x48B2364B,
    0xD80D2BDA,0xAF0A1B4C,0x36034AF6,0x41047A60,0xDF60EFC3,0xA867DF55,0x316E8EEF,0x4669BE79,
    0xCB61B38C,0xBC66831A,0x256FD2A0,0x5268E236,0xCC0C7795,0xBB0B4703,0x220216B9,0x5505262F,
    0xC5BA3BBE,0xB2BD0B28,0x2BB45A92,0x5CB30A04,0xC2D7FFA7,0xB5D0CF31,0x2CD99E8B,0x5BDEAE1D,
    0x9B64C2B0,0xEC63F226,0x756AA39C,0x026D930A,0x9C0906A9,0xEB0E363F,0x72076785,0x05005713,
    0x95BF4A82,0xE2B87A14,0x7BB12BAE,0x0CB61B38,0x92D28E9B,0xE5D5BE0D,0x7CDCEFB7,0x0BDBDF21,
    0x86D3D2D4,0xF1D4E242,0x68DDB3F8,0x1FDA836E,0x81BE16CD,0xF6B9265B,0x6FB077E1,0x18B74777,
    0x88085AE6,0xFF0F6A70,0x66063BCA,0x11010B5C,0x8F659EFF,0xF862AE69,0x616BFFD3,0x166CCF45,
    0xA00AE278,0xD70DD2EE,0x4E048354,0x3903B3C2,0xA7672661,0xD06016F7,0x49B86C4D,0x3EBF1DDB,
    0xAE4D164A,0xD94A01DC,0x40432D66,0x37471DF0,0xA923BC53,0xDE2438C5,0x47052D7F,0x30021CE9,
    0xAD1BAB1C,0xDA1CD8A,0x93153A20,0xE4125AB6,0x7A76CF15,0x0D71FF83,0x94505C39,0xE35744AF,
    0x73E8583E,0x04EF47A8,0x9D265C12,0xEA1E5A84,0x747A1127,0x037D21B1,0x9A74200B,0xED73309D,
};

// IDA 0x69E000: Compute
uint32_t CRC32::Compute(const void* data, uint32_t size)
{
    uint32_t crc = 0xFFFFFFFF;
    const uint8_t* p = static_cast<const uint8_t*>(data);
    for (uint32_t i = 0; i < size; ++i) {
        crc = (crc >> 8) ^ crc32_table[(crc ^ p[i]) & 0xFF];
    }
    return crc ^ 0xFFFFFFFF;
}

} // namespace gamemd
