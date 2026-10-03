// IDA Hex-Rays pseudocode vocabulary (forced-include for every TU).
//
// The mechanical redo pipeline (tools/csp_export/regen_bodies_from_export.py)
// lands fresh Hex-Rays output verbatim as function bodies. That output uses
// IDA's bitfield-extraction macros and helper intrinsics which are not C++.
//
// Definitions are IDA_-prefixed ONLY: <winnt.h> defines LOBYTE/BYTE1/... with
// DIFFERENT semantics (Windows BYTE1(x) = third byte; IDA BYTE1(x) = second
// byte) and rvalue-only forms, while IDA bodies use them as lvalues
// (LOWORD(v20) = 0). regen_bodies_from_export.py and the one-shot
// rewrite_ida_vocab.py rewrite body occurrences to the IDA_ names, so the raw
// names are intentionally NOT defined here.
#pragma once

#include <cstdint>
#include <cstring>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <commctrl.h>
#include <cstddef>

#include "ida_vtables.h"   // GENERATED vtable externs (gen_vtable_symbols.py)

// IDA pseudocode register pseudo-variables (_EAX.._ESP): untyped slots
// that hold EITHER integers or pointers across a function body (the G31
// re-decompilation era emits them undeclared). Modeled as a slot class so
// every assignment/arith/cast shape in verbatim bodies compiles as-is.
struct IdaRegVar {
    unsigned long v;
    IdaRegVar() : v(0) {}
    IdaRegVar& operator=(unsigned long x) { v = x; return *this; }
    template <class T> IdaRegVar& operator=(T* p) { v = (unsigned long)p; return *this; }
    // G42.35o: explicit value conversions (fixes `_EBX + 36` ambiguity C2666);
    // explicit operator bool + the non-member comparison/bitwise overloads
    // below keep the verbatim vocabulary (`if (_EBX)`, `_AX & 0x4100`,
    // `_ESI == 3`, `_EAX >= 1`) compiling.
    explicit operator unsigned long() const { return v; }
    explicit operator bool() const { return v != 0; }
    template <class T> explicit operator T*() const { return (T*)(uintptr_t)v; }
};
inline unsigned long operator+(const IdaRegVar& r, long d) { return r.v + d; }
inline unsigned long operator+(long d, const IdaRegVar& r) { return d + r.v; }
inline unsigned long operator-(const IdaRegVar& r, long d) { return r.v - d; }
inline unsigned long operator-(long d, const IdaRegVar& r) { return d - r.v; }
inline unsigned long operator&(const IdaRegVar& r, unsigned long m) { return r.v & m; }
inline unsigned long operator&(unsigned long m, const IdaRegVar& r) { return m & r.v; }
inline unsigned long operator|(const IdaRegVar& r, unsigned long m) { return r.v | m; }
inline unsigned long operator|(unsigned long m, const IdaRegVar& r) { return m | r.v; }
inline unsigned long operator^(const IdaRegVar& r, unsigned long m) { return r.v ^ m; }
inline unsigned long operator^(unsigned long m, const IdaRegVar& r) { return m ^ r.v; }
inline unsigned long operator<<(const IdaRegVar& r, int s) { return r.v << s; }
inline unsigned long operator>>(const IdaRegVar& r, int s) { return r.v >> s; }
inline bool operator==(const IdaRegVar& r, unsigned long x) { return r.v == x; }
inline bool operator==(unsigned long x, const IdaRegVar& r) { return x == r.v; }
inline bool operator!=(const IdaRegVar& r, unsigned long x) { return r.v != x; }
inline bool operator!=(unsigned long x, const IdaRegVar& r) { return x != r.v; }
inline bool operator<(const IdaRegVar& r, unsigned long x) { return r.v < x; }
inline bool operator<(unsigned long x, const IdaRegVar& r) { return x < r.v; }
inline bool operator<=(const IdaRegVar& r, unsigned long x) { return r.v <= x; }
inline bool operator<=(unsigned long x, const IdaRegVar& r) { return x <= r.v; }
inline bool operator>(const IdaRegVar& r, unsigned long x) { return r.v > x; }
inline bool operator>(unsigned long x, const IdaRegVar& r) { return x > r.v; }
inline bool operator>=(const IdaRegVar& r, unsigned long x) { return r.v >= x; }
inline bool operator>=(unsigned long x, const IdaRegVar& r) { return x >= r.v; }
static IdaRegVar _EAX, _EBX, _ECX, _EDX, _ESI, _EDI, _EBP, _ESP;
static IdaRegVar _AX, _BX, _CX, _DX, _SI, _DI, _SP, _BP;
static IdaRegVar _AL, _BL, _CL, _DL, _AH, _BH, _CH, _DH;

// IDA primitive spellings used in casts throughout pseudocode
typedef unsigned int _DWORD;
typedef unsigned short _WORD;
typedef unsigned char _BYTE;
typedef unsigned long long _QWORD;
typedef void _UNKNOWN;

// IDA numeric helpers
inline int abs32(int v) { return v < 0 ? -v : v; }
inline unsigned int __CFSHL__(unsigned int a, int b) { (void)b; return 0; }
inline unsigned int __CFSHR__(unsigned int a, int b) { (void)b; return 0; }
inline unsigned char __OFS__(int) { return 0; }
inline unsigned char __CF__(int) { return 0; }

#include "ida_globals.h"   // GENERATED bare-global externs (gen_ida_globals.py)

// ------------------------------------------------------------ bit extraction
// IDA semantics: sub-word N of the object representation of x, via memory so
// they are lvalues (assignment) and rvalues (read), exactly like IDA.

#define IDA_LOBYTE(x) (*((unsigned char*)&(x)))
#define IDA_LOWORD(x) (*((unsigned short*)&(x)))
#define IDA_HIBYTE(x) (*(((unsigned char*)&(x)) + (sizeof(x) - 1)))
#define IDA_HIWORD(x) (*(((unsigned short*)&(x)) + 1))
#define IDA_LODWORD(x) (*((unsigned int*)&(x)))
#define IDA_HIDWORD(x) (*(((unsigned int*)&(x)) + 1))
#define IDA_SLODWORD(x) (*((signed int*)&(x)))
#define IDA_SHIDWORD(x) (*((signed int*)(((unsigned char*)&(x)) + 4)))
#define IDA_SWORD0(x) (*((signed short*)&(x)))
#define IDA_SWORD1(x) (*((signed short*)(((unsigned char*)&(x)) + 2)))
#define IDA_SWORD2(x) (*((signed short*)(((unsigned char*)&(x)) + 4)))
#define IDA_SWORD3(x) (*((signed short*)(((unsigned char*)&(x)) + 6)))
#define IDA_SWWORD(x) (*(signed short*)&(x))
#define IDA_SHIWORD(x) (*((signed short*)(((unsigned char*)&(x)) + 2)))
#define IDA_SLOBYTE(x) (*((signed char*)&(x)))
#define IDA_SHLOBYTE(x) (*((signed char*)(((unsigned char*)&(x)) + 1)))

// MSVC-decorated operator new/delete emitted raw by the typed export
#ifndef RA2_OPNEW
#define RA2_OPNEW(n) operator new(n)
#endif
#ifndef RA2_OPDEL
// G42.35a: callers pass int globals (dword_*) -- int overload doesn't exist.
#define RA2_OPDEL(p) operator delete((void *)(p))
#endif

#define IDA_BYTE0(x) (((unsigned char*)&(x))[0])
#define IDA_BYTE1(x) (((unsigned char*)&(x))[1])
#define IDA_BYTE2(x) (((unsigned char*)&(x))[2])
#define IDA_BYTE3(x) (((unsigned char*)&(x))[3])
#define IDA_BYTE4(x) (((unsigned char*)&(x))[4])
#define IDA_BYTE5(x) (((unsigned char*)&(x))[5])
#define IDA_BYTE6(x) (((unsigned char*)&(x))[6])
#define IDA_BYTE7(x) (((unsigned char*)&(x))[7])
#define IDA_BYTE8(x) (((unsigned char*)&(x))[8])
#define IDA_WORD0(x) (((unsigned short*)&(x))[0])
#define IDA_WORD1(x) (((unsigned short*)&(x))[1])
#define IDA_WORD2(x) (((unsigned short*)&(x))[2])
#define IDA_WORD3(x) (((unsigned short*)&(x))[3])
#define IDA_WORD4(x) (((unsigned short*)&(x))[4])
#define IDA_WORD5(x) (((unsigned short*)&(x))[5])
#define IDA_WORD6(x) (((unsigned short*)&(x))[6])
#define IDA_WORD7(x) (((unsigned short*)&(x))[7])

// dword pairs -> qword (IDA __PAIR64__/__PAIR32__/__PAIR16__)
#define IDA___PAIR64__(high, low) \
    (((unsigned long)(unsigned int)(low)) | \
     ((unsigned long)(unsigned int)(high) << 32))
#define IDA___PAIR32__(high, low) \
    (((unsigned int)(unsigned short)(low)) | \
     ((unsigned int)(unsigned short)(high) << 16))
#define IDA___PAIR16__(high, low) \
    (((unsigned short)(unsigned char)(low)) | \
     ((unsigned short)(unsigned char)(high) << 8))

// ------------------------------------------------------------ copy intrinsics
// IDA renders struct copies as qmemcpy with byte counts; no alignment
// guarantee, same as plain memcpy for our purposes.
#ifndef qmemcpy
#define qmemcpy memcpy
#endif

#ifndef JUMPOUT
// IDA renders cross-function tail jumps as JUMPOUT(x); the mechanical
// pipeline rewrites real tail-jumps, so remaining surface is unreachable —
// trap loudly rather than silently continuing.
#define JUMPOUT(x) do { (void)(x); __debugbreak(); } while (0)
#endif

#include "core/missing_globals_compat.h"

// ---- G42.12 IDA decompiler macro shims (compile-verified round-2) ----
// missing base forms (semantics per ida.hpp; OFSUB must compute in 32-bit)
#define IDA___SPAIR64__(high, low) \
    ((long)(((unsigned long)(unsigned int)(high) << 32) | (unsigned int)(low)))
inline bool IDA___OFSUB__(int a, int b) {
    int r = (unsigned int)a - (unsigned int)b;
    return ((a ^ b) & (a ^ r)) < 0;
}
inline unsigned int IDA___ROL4__(unsigned int v, unsigned int n) { n &= 31; return n ? (v << n) | (v >> (32 - n)) : v; }
inline unsigned int IDA___ROR4__(unsigned int v, unsigned int n) { n &= 31; return n ? (v >> n) | (v << (32 - n)) : v; }
inline bool IDA___CFADD__(unsigned int a, unsigned int b) {
    return (unsigned long)a + (unsigned long)b > 0xFFFFFFFFull;
}
#include <cmath>
inline double IDA___FYL2X__(double y, double x) { return y * std::log2(x); }
// bit-field extraction family (IDA_ prefix forms)
#define IDA_SLOWORD(x)      (*((signed short*)&(x)))
#define IDA_SBYTE1(x)       (*((signed char*)&(x) + 1))
#define IDA_SBYTE2(x)       (*((signed char*)&(x) + 2))
#define IDA_SBYTE3(x)       (*((signed char*)&(x) + 3))
#define IDA_SHIBYTE(x)      (*((signed char*)&(x) + sizeof(x) - 1))
#define IDA_DWORD1(x)       (((unsigned int*)&(x))[1])
#define IDA_DWORD2(x)       (((unsigned int*)&(x))[2])
// bare-name aliases (no SDK conflicts; SWORD1/SLODWORD/SBYTE* undefined SDK-wide)
#define SWORD1(x)  IDA_SWORD1(x)
#define SWORD2(x)  IDA_SWORD2(x)
#define SWORD3(x)  IDA_SWORD3(x)
#define SLODWORD(x) IDA_SLODWORD(x)
#define SLOBYTE(x) IDA_SLOBYTE(x)
#define SBYTE1(x) IDA_SBYTE1(x)
#define SBYTE2(x) IDA_SBYTE2(x)
#define SHIBYTE(x) IDA_SHIBYTE(x)
#define BYTE4(x)  IDA_BYTE4(x)
#define DWORD1(x) IDA_DWORD1(x)
#define DWORD2(x) IDA_DWORD2(x)
// 64-bit pair assembly / flag intrinsics / x87 helpers
#define __PAIR64__(h,l) IDA___PAIR64__(h,l)
#define __PAIR32__(h,l) IDA___PAIR32__(h,l)
#define __SPAIR64__(h,l) IDA___SPAIR64__(h,l)
#define __OFSUB__(a,b)  IDA___OFSUB__(a,b)
#define __ROL4__(v,n) IDA___ROL4__(v,n)
#define __ROR4__(v,n) IDA___ROR4__(v,n)
#define __CFADD__(a,b) IDA___CFADD__(a,b)
#define __FYL2X__(y,x) IDA___FYL2X__(y,x)
// absolute byte-addressing pseudo-array
#define MEMORY ((unsigned char*)nullptr)
// Hex-Rays inline惯用形: memset32 = rep stosd (@410eae disasm truth)
inline void* memset32(void* dst, unsigned int value, unsigned int dword_count) {
    unsigned int* p = (unsigned int*)dst;
    for (unsigned int i = 0; i < dword_count; ++i) p[i] = value;
    return dst;
}
inline int abs16(int v) { short s = (short)v; return s < 0 ? -s : s; }
