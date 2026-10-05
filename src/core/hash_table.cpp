#include "core/hash_table.hpp"
#include <cstring>
#include "e4/e4_globals_decls.hpp"

namespace gamemd {

// ============================================================================
// Hash implementation
// ============================================================================

// IDA 0x476D80: Hash::ComputeHashSHA1 (stub) -- full-hash compute (SHA1::ComputeThunk + Checksummer).
// NOTE: 69D8C0 (the previous annotation) is SHA1::ProcessBlock, a different function.
uint32_t Hash::ComputeHashSHA1(const void* data, uint32_t size)
{
    // Original uses SHA1 class, returns 32-bit hash
    static SHA1 sha1;
    sha1.Init();
    sha1.Process(data, size);
    uint8_t digest[20];
    sha1.Compute(digest);
    // Return first 4 bytes as uint32_t hash
    return ((uint32_t)(digest[0]) << 24) |
           ((uint32_t)(digest[1]) << 16) |
           ((uint32_t)(digest[2]) << 8)  |
           (uint32_t)(digest[3]);
}

// IDA 0x4F4410: Hash::InsertOrdered (stub).
// NOTE: previous annotation pointed at Int_CompareFunc4 (a different function).
// 0x4f4410
void Hash::InsertOrdered(void* table, const void* entry)
{
    int result; // eax

    result = (*(int (__thiscall **)(GScreenClass *, int))(this->vfptr[0] + 44))(this, a2); /*0x4f4418*/
    if ( (unsigned char)result ) /*0x4f441d*/
    {
      IDA_LOBYTE(result) = 0; /*0x4f441f*/
    }
    else if ( *(unsigned int * *)((char *)&stru_A8EB00 + 1108) ) /*0x4f442c*/
    {
      result = (*(int (__thiscall **)(int, unsigned int))(*(unsigned int *)a2 + 16))(a2, *(unsigned int * *)((char *)&stru_A8EB00 + 1108)); /*0x4f4433*/
      IDA_LOBYTE(result) = 1; /*0x4f4436*/
    }
    else
    {
      *(unsigned int * *)((char *)&stru_A8EB00 + 1108) = a2; /*0x4f443c*/
      return 1; /*0x4f4442*/
    }
    return result; /*0x4f4421*/
}
// 0x69d960
EditClass * * SHA1::Process(const void* data, uint32_t size)
{
    int result; // eax
    int *v5; // edi
    int v6; // ebx

    this->__pad_0[0] = 0; /*0x69d96f*/
    SHA1::ProcessBlock(this, (const void **)&a2, &a3); /*0x69d972*/
    result = a3; /*0x69d977*/
    if ( a3 ) /*0x69d97d*/
    {
      v5 = (int *)a2; /*0x69d984*/
      if ( a3 / 64 > 0 ) /*0x69d98f*/
      {
        v6 = a3 / 64; /*0x69d996*/
        do /*0x69d9bb*/
        {
          SHA1::Transform(v5, (unsigned int *)this + 6); /*0x69d99c*/
          v5 += 16; /*0x69d9ab*/
          *((unsigned int *)this + 11) += 64; /*0x69d9ad*/
          --v6; /*0x69d9b6*/
          a3 -= 64; /*0x69d9b7*/
        }
        while ( v6 ); /*0x69d9bb*/
      }
      a2 = (int)v5; /*0x69d9cb*/
      return (int)SHA1::ProcessBlock(this, (const void **)&a2, &a3); /*0x69d9cf*/
    }
    return result; /*0x69d9d5*/
}
// 0x69d9e0
void SHA1::Compute(char *a2, int a1)
{
    int v3; // edx
    int v4; // ebx
    unsigned int v5; // ebx
    int v6; // edx
    unsigned __int16 v7; // cx
    int *p_SHA1_field_0x04; // ecx
    int v9; // esi
    unsigned int v10; // eax
    unsigned int v12[5]; // [esp+14h] [ebp-54h] BYREF
    int v13[16]; // [esp+28h] [ebp-40h] BYREF

    if ( this->__pad_0[0] ) /*0x69d9e9*/
      qmemcpy(a2, &this->SHA1_field_0x04, 0x14u); /*0x69d9fb*/
    v3 = *((unsigned int *)this + 12); /*0x69d9fd*/
    v4 = *((unsigned int *)this + 11); /*0x69da00*/
    qmemcpy(v13, (char *)this + 52, sizeof(v13)); /*0x69da14*/
    v5 = v3 + v4; /*0x69da18*/
    *((unsigned char *)v13 + v3) = 0x80; /*0x69da29*/
    qmemcpy(v12, this + 1, sizeof(v12)); /*0x69da2e*/
    if ( 64 - v3 >= 9 ) /*0x69da30*/
    {
      v6 = v3 + 1; /*0x69da6a*/
    }
    else
    {
      if ( v3 + 1 < 64 ) /*0x69da38*/
        memset((char *)v13 + v3 + 1, 0, 63 - v3); /*0x69da4c*/
      SHA1::Transform(v13, v12); /*0x69da61*/
      v6 = 0; /*0x69da66*/
    }
    memset((char *)v13 + v6, 0, 64 - v6); /*0x69da7d*/
    IDA_LOBYTE(v7) = (8 * v5) >> 24; /*0x69da99*/
    IDA_HIBYTE(v7) = v5 >> 13; /*0x69da9e*/
    v13[15] = (v5 << 27) | (v5 << 11) & 0xFF0000 | v7; /*0x69dab8*/
    SHA1::Transform(v13, v12); /*0x69dac3*/
    qmemcpy(&this->SHA1_field_0x04, v12, 0x14u); /*0x69dad6*/
    p_SHA1_field_0x04 = &this->SHA1_field_0x04; /*0x69dad8*/
    v9 = 5; /*0x69dada*/
    do /*0x69db0b*/
    {
      v10 = *p_SHA1_field_0x04++; /*0x69dadf*/
      --v9; /*0x69db07*/
      *(p_SHA1_field_0x04 - 1) = ((v10 & 0xFF00 | (v10 << 16)) << 8) | ((IDA_HIWORD(v10) | v10 & 0xFF0000) >> 8); /*0x69db08*/
    }
    while ( v9 ); /*0x69db0b*/
    this->__pad_0[0] = 1; /*0x69db18*/
    qmemcpy(a2, &this->SHA1_field_0x04, 0x14u); /*0x69db1c*/
    return 20; /*0x69db1e*/
}
// 0x69db30
void SHA1::Transform(int *a1, unsigned int *a2)
{
    int *v2; // ecx
    int v3; // esi
    int v4; // eax
    int v5; // edi
    int *v6; // ecx
    int v7; // edx
    int v8; // esi
    int v9; // ebp
    int v10; // eax
    int v11; // ebx
    unsigned int v12; // edx
    int v13; // edi
    int v14; // esi
    unsigned int v15; // ebp
    int v16; // ecx
    int v17; // ecx
    int v18; // ebx
    int v19; // eax
    unsigned int v20; // eax
    bool v21; // cf
    unsigned int v22; // ebp
    unsigned int v23; // edx
    unsigned int v24; // ebx
    unsigned int v25; // eax
    unsigned int v26; // ebx
    int v27; // edx
    int result; // eax
    unsigned int *v29; // [esp+10h] [ebp-160h]
    int v30; // [esp+14h] [ebp-15Ch]
    int v31; // [esp+18h] [ebp-158h]
    unsigned int v32[5]; // [esp+1Ch] [ebp-154h] BYREF
    unsigned char v33[8]; // [esp+30h] [ebp-140h] BYREF
    char v34; // [esp+38h] [ebp-138h] BYREF

    v2 = a1; /*0x69db30*/
    v3 = 16; /*0x69db44*/
    do /*0x69db76*/
    {
      v4 = *v2++; /*0x69db49*/
      v5 = IDA_HIBYTE(v4) | ((v4 & 0xFF00 | (v4 << 16)) << 8); /*0x69db67*/
      IDA_LOBYTE(v4) = 0; /*0x69db69*/
      IDA_BYTE1(v4) = IDA_BYTE2(v4); /*0x69db6b*/
      --v3; /*0x69db71*/
      *(int *)((char *)v2 + v33 - (unsigned char *)a1 - 4) = (unsigned __int16)v4 | v5; /*0x69db72*/
    }
    while ( v3 ); /*0x69db76*/
    v6 = (int *)&v34; /*0x69db78*/
    v7 = 64; /*0x69db7c*/
    do /*0x69dba2*/
    {
      v8 = *(v6 - 2); /*0x69db87*/
      v9 = *v6; /*0x69db8a*/
      v10 = v6[6] ^ v6[11]; /*0x69db8c*/
      ++v6; /*0x69db8e*/
      --v7; /*0x69db9e*/
      v6[13] = (2 * (v9 ^ v8 ^ v10)) | ((v9 ^ v8 ^ (unsigned int)v10) >> 31); /*0x69db9f*/
    }
    while ( v7 ); /*0x69dba2*/
    v11 = 0; /*0x69dbb4*/
    qmemcpy(v32, a2, sizeof(v32)); /*0x69dbb6*/
    v12 = v32[1]; /*0x69dbb8*/
    v13 = v32[2]; /*0x69dbbc*/
    v14 = v32[3]; /*0x69dbc0*/
    v15 = v32[0]; /*0x69dbc4*/
    v31 = 0; /*0x69dbcc*/
    v29 = v33; /*0x69dbd0*/
    do
    {
      if ( v11 >= 20 ) /*0x69dbd7*/
      {
        if ( v11 >= 40 && v11 < 60 ) /*0x69dbe9*/
        {
          v17 = v13 & v12 | v14 & (v13 | v12); /*0x69dbf5*/
          goto LABEL_13; /*0x69dbf7*/
        }
        v16 = v13 ^ v12; /*0x69dbfb*/
      }
      else
      {
        v16 = v12 & (v14 ^ v13); /*0x69dbdd*/
      }
      v17 = v14 ^ v16; /*0x69dbfd*/
  LABEL_13:
      if ( v11 >= 20 )
      {
        if ( v11 >= 40 )
          v30 = v11 >= 60 ? -899497514 : -1894007588;
        else
          v30 = 1859775393; /*0x69dc13*/
      }
      else
      {
        v30 = 1518500249; /*0x69dc04*/
      }
      v18 = v32[4]; /*0x69dc4c*/
      v19 = v17 + v30 + *v29 + ((32 * v15) | (v15 >> 27)); /*0x69dc50*/
      v32[4] = v14; /*0x69dc5a*/
      v20 = v18 + v19; /*0x69dc60*/
      v14 = v13; /*0x69dc66*/
      v13 = (v12 >> 2) | (v12 << 30); /*0x69dc68*/
      v11 = v31 + 1; /*0x69dc6e*/
      v12 = v15; /*0x69dc72*/
      v21 = (unsigned int)(v31 + 1) < 0x50; /*0x69dc74*/
      v15 = v20; /*0x69dc77*/
      ++v31; /*0x69dc79*/
      ++v29; /*0x69dc7d*/
    }
    while ( v21 );
    v22 = v12 + a2[1]; /*0x69dc93*/
    v23 = a2[3]; /*0x69dc95*/
    v24 = v20 + *a2; /*0x69dc98*/
    v25 = a2[4]; /*0x69dc9a*/
    *a2 = v24; /*0x69dc9d*/
    v26 = v13 + a2[2]; /*0x69dca4*/
    a2[3] = v14 + v23; /*0x69dca6*/
    v27 = v32[4]; /*0x69dca9*/
    a2[1] = v22; /*0x69dcae*/
    result = v27 + v25; /*0x69dcb1*/
    a2[2] = v26; /*0x69dcb4*/
    a2[4] = result; /*0x69dcb8*/
    return result; /*0x69dcad*/
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
        buffer[56 + i] = (uint8_t)(original_bits & 0xFF);
        original_bits >>= 8;
    }
    Transform();
}

// SHA1::DigestToHex -- digest-to-hex string helper (no standalone IDA function).
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

// CRC32::CRC32 -- constructor
// unmatched: no callgraph reference and no git history record
CRC32::CRC32()
{
    m_CRC = 0xFFFFFFFF;
    ;
    m_Count = 0;
}

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
// 0x4a1fb0
uint32_t CRC32::Compute(const void* data, uint32_t size)
{
    int v4; // edx
    unsigned int v5; // eax
    int v6; // esi

    v4 = a2 - 1; /*0x4a1fb7*/
    v5 = ~a3; /*0x4a1fba*/
    if ( a2 ) /*0x4a1fbc*/
    {
      v6 = v4 + 1; /*0x4a1fbf*/
      do /*0x4a1fde*/
      {
        v5 = CRC32_Table[*a1++ ^ (unsigned __int8)v5] ^ (v5 >> 8); /*0x4a1fda*/
        --v6; /*0x4a1fdd*/
      }
      while ( v6 ); /*0x4a1fde*/
    }
    return ~v5; /*0x4a1fe3*/
}  // L-fix: close namespace tail 1
