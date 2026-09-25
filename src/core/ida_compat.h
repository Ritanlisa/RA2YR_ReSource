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
#include <cstddef>

#include "ida_vtables.h"   // GENERATED vtable externs (gen_vtable_symbols.py)

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
#define IDA_SHIWORD(x) (*((signed short*)(((unsigned char*)&(x)) + 2)))
#define IDA_SLOBYTE(x) (*((signed char*)&(x)))
#define IDA_SHLOBYTE(x) (*((signed char*)(((unsigned char*)&(x)) + 1)))

// MSVC-decorated operator new/delete emitted raw by the typed export
#ifndef RA2_OPNEW
#define RA2_OPNEW(n) operator new(n)
#endif
#ifndef RA2_OPDEL
#define RA2_OPDEL(p) operator delete(p)
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
    (((unsigned long long)(unsigned int)(low)) | \
     ((unsigned long long)(unsigned int)(high) << 32))
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
