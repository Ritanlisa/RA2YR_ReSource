#!/usr/bin/env python3
"""G42.12: shim pack -- IDA macro shims + Bink import protos + internal
helper supplies + missing typedefs + F1 pseudo-type fwds.

All definitions compile-verified against the real ida_compat.h chain by the
round-2 research agent (x86 cl 19.44, 0 error).  Sources of truth:
  - ida.hpp conventions (bit-field extraction / 64-bit pair assembly)
  - PE import table of D:\\RA2MD\\gamemd.exe (binkw32.dll, 13 entries,
    std-decorated @bytes cross-checked against corpus call arities)
  - full_export disassembly (memset32 = `rep stosd` inline惯用形 @410eae;
    Miles::DriverGet = internal fn returning &dword_B2D928, NOT an import)

Usage: [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = "--apply" in sys.argv

IDA_COMPAT = ROOT / "src/core/ida_compat.h"
E4_PROTOS = ROOT / "src/e4/e4_protos.h"

MACRO_BLOCK = """
// ---- G42.12 IDA decompiler macro shims (compile-verified round-2) ----
// missing base forms (semantics per ida.hpp; OFSUB must compute in 32-bit)
#define IDA___SPAIR64__(high, low) \\
    ((long long)(((unsigned long long)(unsigned int)(high) << 32) | (unsigned int)(low)))
inline bool IDA___OFSUB__(int a, int b) {
    int r = (unsigned int)a - (unsigned int)b;
    return ((a ^ b) & (a ^ r)) < 0;
}
inline unsigned int IDA___ROL4__(unsigned int v, unsigned int n) { n &= 31; return n ? (v << n) | (v >> (32 - n)) : v; }
inline unsigned int IDA___ROR4__(unsigned int v, unsigned int n) { n &= 31; return n ? (v >> n) | (v << (32 - n)) : v; }
inline bool IDA___CFADD__(unsigned int a, unsigned int b) {
    return (unsigned long long)a + (unsigned long long)b > 0xFFFFFFFFull;
}
inline double IDA___FYL2X__(double y, double x) { return y * log2(x); }
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
"""

E4_BLOCK = """
// ---- G42.12 shim pack (import-table-verified / internal-fn truth) ----
namespace gamemd {
// binkw32.dll imports (std names, @bytes == corpus arity, verified):
extern "C" __declspec(dllimport) unsigned int __stdcall BinkCopyToBuffer(void* bink, void* dest, unsigned int pitch, unsigned int height, unsigned int x, unsigned int y, unsigned int flags);
extern "C" __declspec(dllimport) unsigned int __stdcall BinkGoto(void* bink, unsigned int frame, unsigned int flags);
extern "C" __declspec(dllimport) unsigned int __stdcall BinkSetSoundSystem(void* link_proc, unsigned int extra);
extern "C" __declspec(dllimport) void __stdcall BinkSetVolume(void* bink, unsigned int vol);
extern "C" __declspec(dllimport) void* __stdcall BinkOpen(const void* name, unsigned int flags);
extern "C" __declspec(dllimport) unsigned int __stdcall BinkPause(void* bink, unsigned int pause);
extern "C" __declspec(dllimport) void __stdcall BinkClose(void* bink);
extern "C" __declspec(dllimport) unsigned int __stdcall BinkNextFrame(void* bink);
extern "C" __declspec(dllimport) void __stdcall BinkDoFrame(void* bink);
extern "C" __declspec(dllimport) unsigned int __stdcall BinkWait(void* bink);
extern "C" __declspec(dllimport) unsigned int __stdcall BinkDDSurfaceType(void* bink);
extern "C" __declspec(dllimport) void* __stdcall BinkOpenDirectSound(void* snd);
extern "C" __declspec(dllimport) const char* __stdcall BinkGetError();
// internal exe function (NOT an import -- ida_cache 0x753C70 truth)
extern "C" int* Miles_DriverGet();
// missing typedefs / fwd declarations (vN cascade killers)
typedef unsigned int SOCKET;
struct IsoCoord;
struct SkirmishSetup;
} // namespace gamemd
"""


def filter_block_against(existing, block):
    """X25: drop from `block` every #define/function already present in
    `existing` (declaration-aware append).

    The G42.12 block historically re-declared IDA___OFSUB__ / ROL4 / ROR4 /
    CFADD / FYL2X / memset32 / abs16 although ida_compat.h already defined
    them at its true-math-intrinsics block -- 7x C2084 in every TU (5,600
    error lines).  The whole-block presence check below still short-circuits
    the common case; this filter makes the append safe even when the block
    is re-appended alone (e.g. after a partial revert of ida_compat.h).
    """
    out = []
    lines = block.split('\n')
    i = 0
    while i < len(lines):
        l = lines[i]
        m = re.match(r'#define\s+(\w+)', l)
        if m:
            # group backslash continuations
            chunk = [l]
            i += 1
            while chunk[-1].rstrip().endswith('\\') and i < len(lines):
                chunk.append(lines[i])
                i += 1
            nm = m.group(1)
            if not re.search(r'^\s*#define\s+%s\b' % nm, existing, re.M):
                out.extend(chunk)
            continue
        m = re.match(r'^\s*(?:inline\s+)?[\w\*\s]+?\b(\w+)\s*\([^;{}]*\)\s*\{',
                     l)
        if m:
            chunk = [l]
            depth = l.count('{') - l.count('}')
            i += 1
            while depth > 0 and i < len(lines):
                chunk.append(lines[i])
                depth += lines[i].count('{') - lines[i].count('}')
                i += 1
            nm = m.group(1)
            if not re.search(r'\b%s\s*\(' % re.escape(nm), existing):
                out.extend(chunk)
            continue
        out.append(l)
        i += 1
    return '\n'.join(out)


def main():
    # 1. macro block into ida_compat.h (idempotent)
    cur = IDA_COMPAT.read_text(encoding="utf-8", errors="replace")
    if "G42.12 IDA decompiler macro shims" not in cur:
        filtered = filter_block_against(cur, MACRO_BLOCK)
        dropped = MACRO_BLOCK.count('inline') - filtered.count('inline')
        if APPLY:
            with open(IDA_COMPAT, "a", encoding="utf-8", errors='replace', newline="") as f:
                f.write(filtered)
        print("ida_compat.h: +macro block", "(written)" if APPLY else "(DRY)",
              "| decl-aware filter dropped %d dup def(s)" % dropped)
    else:
        print("ida_compat.h: already present")

    # 2. e4 block into e4_protos.h (idempotent)
    cur = E4_PROTOS.read_text(encoding="utf-8", errors="replace")
    if "G42.12 shim pack" not in cur:
        if APPLY:
            with open(E4_PROTOS, "a", encoding="utf-8", errors='replace', newline="") as f:
                f.write(E4_BLOCK)
        print("e4_protos.h: +Bink/Miles/typedef block", "(written)" if APPLY else "(DRY)")
    else:
        print("e4_protos.h: already present")

    # 3. F1 pseudo-type fwds: mangled template names in fn-ptr param lists
    #    (wave-8 S2 already rewrote the bare-cast form; these survive inside
    #    fn-ptr TYPE positions)
    pat = re.compile(r'\b(_[A-Za-z0-9]+_(?:PA[UV]|PAP|PBU|PBV|PAH)[A-Za-z0-9_]*)\b')
    names = set()
    for p in sorted((ROOT / "src").rglob("*.cpp")):
        if "_generated" in str(p) or "raw_decomp" in str(p):
            continue
        try:
            txt = p.read_text(encoding="latin-1", errors="replace")
        except OSError:
            continue
        names |= set(pat.findall(txt))
    # keep only those undeclared anywhere
    allsrc = ""
    for h in (E4_PROTOS, ROOT / "src/e4/classes/_tree_full_e4.hpp",
              ROOT / "src/e4/classes/_fwd_e4.hpp"):
        allsrc += h.read_text(encoding="latin-1", errors="replace")
    todo = sorted(n for n in names
                  if ("struct %s;" % n) not in allsrc
                  and ("struct %s {" % n) not in allsrc)
    print(f"F1 pseudo-types to fwd: {len(todo)} (mined {len(names)})")
    if todo and APPLY:
        block = ("\n// G42.12 F1: mangled template pseudo-types used in vtable casts\n"
                 "namespace gamemd {\n"
                 + "".join("struct %s;\n" % n for n in todo)
                 + "} // namespace gamemd\n")
        with open(E4_PROTOS, "a", encoding="utf-8", errors='replace', newline="") as f:
            f.write(block)
        print("e4_protos.h: +F1 fwds", "(written)")
    for n in todo[:8]:
        print("  ", n)


if __name__ == "__main__":
    main()
