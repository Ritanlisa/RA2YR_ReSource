#include "core/hash_table.hpp"
#include <cstring>

namespace gamemd {

// ============================================================================
// Hash implementation
// ============================================================================

// IDA 0x476D80: Hash::ComputeHashSHA1 (stub) -- full-hash compute (SHA1::ComputeThunk + Checksummer).
// NOTE: 0x69D8C0 (the previous annotation) is SHA1::ProcessBlock, a different function.
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
// [IDA decompile]
char __thiscall Hash_InsertOrdered(void *this, int a2)
{
  if ( (*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)this + 44))(this, a2) )
    return 0;
  if ( MEMORY[0xA8EF54] )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 16))(a2, MEMORY[0xA8EF54]);
  else
    MEMORY[0xA8EF54] = a2;
  return 1;
}

/* ASM:
mov     eax, [ecx]
push    esi
mov     esi, [esp+4+arg_0]
push    esi
call    dword ptr [eax+2Ch]
test    al, al
jz      short loc_4F4425
xor     al, al
pop     esi
retn    4
; ---------------------------------------------------------------------------

loc_4F4425:                             ; CODE XREF: Hash__InsertOrdered+D↑j
mov     eax, dword_A8ED54+200h
test    eax, eax
jz      short loc_4F443C
mov     edx, [esi]
push    eax
mov     ecx, esi
call    dword ptr [edx+10h]
mov     al, 1
pop     esi
retn    4
; ---------------------------------------------------------------------------

loc_4F443C:                             ; CODE XREF: Hash__InsertOrdered+1C↑j
mov     dword_A8ED54+200h, esi
mov     al, 1
pop     esi
retn    4
*/
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

// SHA1::SHA1 -- constructor, calls Init()
// unmatched: no callgraph reference and no git history record
SHA1::SHA1()
{
    Init();
    ;
    ;
}

// SHA1::Init -- initialize SHA1 state (simplified reimpl; cf. IDA SHA1::Reset @ 0x69DFF0).
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
// 0x69d960
void SHA1::Process(const void* data, uint32_t size)
{
// [IDA decompile]
int __thiscall SHA1_Process(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v5; // edi
  int v6; // ebx

  *(_BYTE *)this = 0;
  SHA1::ProcessBlock(&a2, &a3);
  result = a3;
  if ( a3 )
  {
    v5 = a2;
    if ( a3 / 64 > 0 )
    {
      v6 = a3 / 64;
      do
      {
        SHA1::Transform(v5, this + 6);
        v5 += 64;
        *(this + 11) += 64;
        --v6;
        a3 -= 64;
      }
      while ( v6 );
    }
    a2 = v5;
    return SHA1::ProcessBlock(&a2, &a3);
  }
  return result;
}

/* ASM:
push    esi
mov     esi, ecx
lea     eax, [esp+4+arg_4]
lea     ecx, [esp+4+arg_0]
push    eax
push    ecx
mov     ecx, esi
mov     byte ptr [esi], 0
call    SHA1__ProcessBlock
mov     eax, [esp+4+arg_4]
test    eax, eax
jz      short loc_69D9D5
cdq
and     edx, 3Fh
push    edi
mov     edi, [esp+8+arg_0]
add     eax, edx
sar     eax, 6
test    eax, eax
jle     short loc_69D9BF
push    ebx
push    ebp
lea     ebp, [esi+18h]
mov     ebx, eax

loc_69D998:                             ; CODE XREF: SHA1__Process+5B↓j
push    ebp
push    edi
mov     ecx, esi
call    SHA1__Transform
mov     ecx, [esi+2Ch]
mov     eax, 40h ; '@'
add     ecx, eax
add     edi, eax
mov     [esi+2Ch], ecx
mov     ecx, [esp+10h+arg_4]
sub     ecx, eax
dec     ebx
mov     [esp+10h+arg_4], ecx
jnz     short loc_69D998
pop     ebp
pop     ebx

loc_69D9BF:                             ; CODE XREF: SHA1__Process+2F↑j
lea     edx, [esp+8+arg_4]
lea     eax, [esp+8+arg_0]
push    edx
push    eax
mov     ecx, esi
mov     [esp+10h+arg_0], edi
call    SHA1__ProcessBlock
pop     edi

loc_69D9D5:                             ; CODE XREF: SHA1__Process+1D↑j
pop     esi
retn    8
*/
}

// IDA 0x69DC00: Compute
// 0x69d9e0
void SHA1::Compute(uint8_t digest[20])
{
// [IDA decompile]
int __thiscall SHA1_Compute(_DWORD *this, char *a2)
{
  int v3; // edx
  int v4; // ebx
  unsigned int v5; // ebx
  int v6; // edx
  unsigned __int16 v7; // cx
  unsigned int *v8; // ecx
  int v9; // esi
  unsigned int v10; // eax
  _BYTE v12[20]; // [esp+14h] [ebp-54h] BYREF
  _DWORD v13[16]; // [esp+28h] [ebp-40h] BYREF

  if ( *(_BYTE *)this )
    qmemcpy(a2, this + 1, 0x14u);
  v3 = *(this + 12);
  v4 = *(this + 11);
  qmemcpy(v13, this + 13, sizeof(v13));
  v5 = v3 + v4;
  *((_BYTE *)v13 + v3) = 0x80;
  qmemcpy(v12, this + 6, sizeof(v12));
  if ( 64 - v3 >= 9 )
  {
    v6 = v3 + 1;
  }
  else
  {
    if ( v3 + 1 < 64 )
      memset((char *)v13 + v3 + 1, 0, 63 - v3);
    SHA1::Transform(v13, v12);
    v6 = 0;
  }
  memset((char *)v13 + v6, 0, 64 - v6);
  LOBYTE(v7) = (8 * v5) >> 24;
  HIBYTE(v7) = v5 >> 13;
  v13[15] = (v5 << 27) | (v5 << 11) & 0xFF0000 | v7;
  SHA1::Transform(v13, v12);
  qmemcpy(this + 1, v12, 0x14u);
  v8 = this + 1;
  v9 = 5;
  do
  {
    v10 = *v8++;
    --v9;
    *(v8 - 1) = ((v10 & 0xFF00 | (v10 << 16)) << 8) | ((HIWORD(v10) | v10 & 0xFF0000) >> 8);
  }
  while ( v9 );
  *(_BYTE *)this = 1;
  qmemcpy(a2, this + 1, 0x14u);
  return 20;
}

/* ASM:
sub     esp, 58h
push    ebx
push    ebp
mov     ebp, ecx
push    esi
push    edi
cmp     byte ptr [ebp+0], 0
jz      short loc_69D9FD
mov     edi, [esp+68h+arg_0]
lea     esi, [ebp+4]
mov     ecx, 5
rep movsd

loc_69D9FD:                             ; CODE XREF: SHA1__Compute+D↑j
mov     edx, [ebp+30h]
mov     ebx, [ebp+2Ch]
lea     esi, [ebp+34h]
mov     ecx, 10h
lea     edi, [esp+68h+var_40]
mov     eax, 40h ; '@'
rep movsd
sub     eax, edx
add     ebx, edx
lea     esi, [ebp+18h]
mov     ecx, 5
lea     edi, [esp+68h+var_54]
cmp     eax, 9
mov     [esp+edx+68h+var_40], 80h
rep movsd
jge     short loc_69DA6A
lea     ecx, [edx+1]
cmp     ecx, 40h ; '@'
jge     short loc_69DA55
mov     ecx, 3Fh ; '?'
lea     edi, [esp+edx+68h+var_3F]
sub     ecx, edx
xor     eax, eax
mov     edx, ecx
shr     ecx, 2
rep stosd
mov     ecx, edx
and     ecx, 3
rep stosb

loc_69DA55:                             ; CODE XREF: SHA1__Compute+58↑j
lea     eax, [esp+68h+var_54]
lea     ecx, [esp+68h+var_40]
push    eax
push    ecx
mov     ecx, ebp
call    SHA1__Transform
xor     edx, edx
jmp     short loc_69DA6B
; ---------------------------------------------------------------------------

loc_69DA6A:                             ; CODE XREF: SHA1__Compute+50↑j
inc     edx

loc_69DA6B:                             ; CODE XREF: SHA1__Compute+88↑j
mov     ecx, 40h ; '@'
lea     edi, [esp+edx+68h+var_40]
sub     ecx, edx
xor     eax, eax
mov     edx, ecx
shr     ecx, 2
rep stosd
mov     ecx, edx
mov     edx, ebx
and     ecx, 3
rep stosb
lea     eax, ds:0[ebx*8]
xor     ecx, ecx
mov     [esp+68h+var_58], eax
lea     eax, [esp+68h+var_54]
mov     cl, byte ptr [esp+68h+var_58+3]
push    eax
mov     ch, byte ptr [esp+6Ch+var_58+2]
shl     edx, 0Bh
and     edx, 0FF0000h
shl     ebx, 1Bh
or      ecx, edx
and     ebx, 0FF000000h
or      ecx, ebx
mov     [esp+6Ch+var_4], ecx
lea     ecx, [esp+6Ch+var_40]
push    ecx
mov     ecx, ebp
call    SHA1__Transform
lea     edx, [ebp+4]
mov     ecx, 5
lea     esi, [esp+68h+var_54]
mov     edi, edx
rep movsd
mov     ecx, edx
mov     esi, 5

loc_69DADF:                             ; CODE XREF: SHA1__Compute+12B↓j
mov     eax, [ecx]
add     ecx, 4
mov     edi, eax
mov     ebx, eax
and     edi, 0FF0000h
shr     ebx, 10h
or      edi, ebx
mov     ebx, eax
shl     ebx, 10h
and     eax, 0FF00h
or      ebx, eax
shr     edi, 8
shl     ebx, 8
or      edi, ebx
dec     esi
mov     [ecx-4], edi
jnz     short loc_69DADF
mov     edi, [esp+68h+arg_0]
mov     ecx, 5
mov     esi, edx
mov     byte ptr [ebp+0], 1
rep movsd
pop     edi
pop     esi
pop     ebp
mov     eax, 14h
pop     ebx
add     esp, 58h
retn    4
*/
}

// Transform: process one 64-byte block
void SHA1::Transform()
{
    uint32_t w[80];
    // Copy chunk into w[0..15]
    for (int i = 0; i < 16; ++i) {
        w[i] = ((uint32_t)(buffer[i * 4]) << 24) |
               ((uint32_t)(buffer[i * 4 + 1]) << 16) |
               ((uint32_t)(buffer[i * 4 + 2]) << 8) |
               (uint32_t)(buffer[i * 4 + 3]);
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
// [IDA decompile]
int __fastcall CRC32::Compute(unsigned __int8 *a1, int a2, int a3)
{
  int v4; // edx
  unsigned int v5; // eax
  int v6; // esi

  v4 = a2 - 1;
  v5 = ~a3;
  if ( a2 )
  {
    v6 = v4 + 1;
    do
    {
      v5 = CRC32_Table[*a1++ ^ (unsigned __int8)v5] ^ (v5 >> 8);
      --v6;
    }
    while ( v6 );
  }
  return ~v5;
}

/* ASM:
mov     eax, [esp+arg_0]
push    esi
mov     esi, edx
dec     edx
test    esi, esi
not     eax
jz      short loc_4A1FE1
push    ebx
lea     esi, [edx+1]

loc_4A1FC2:                             ; CODE XREF: CRC32__Compute+2E↓j
mov     edx, eax
xor     ebx, ebx
mov     bl, [ecx]
and     edx, 0FFh
xor     edx, ebx
shr     eax, 8
mov     edx, CRC32_Table[edx*4]
xor     eax, edx
inc     ecx
dec     esi
jnz     short loc_4A1FC2
pop     ebx

loc_4A1FE1:                             ; CODE XREF: CRC32__Compute+C↑j
not     eax
pop     esi
retn    4
*/
}

} // namespace gamemd
