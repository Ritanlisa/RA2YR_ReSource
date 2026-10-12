#!/usr/bin/env python3
"""D1+#154: emit extern declarations for corpus-undeclared globals; D3:
CRT-internal globals + FILE/RTTI/PMD compat stubs.

Undeclared-identifier names are mined from C2065/C3861 messages of the
latest build log, resolved against signals' known symbols, and emitted as
`extern unsigned int *NAME;` (pointer form: indexable, dereferenceable,
comparable -- the most permissive form for raw-corpus usage).

X4 (禁 `...`; Q4): the historical `int f(...)` variadic-fallback emission
paths are DELETED.  Every function declaration is now either
  * a COMPLETE prototype sourced from evidence -- CRT internals via the
    curated CRT_SIGS table (per-entry evidence comment: signals@ADDR /
    ida@ADDR / def@path:line), mined sub_/j_ names via
    signature_authority.py (signals -> ida_cache fill), or
  * an EXPLICIT ledger entry (dropped names, reasons recorded) -- never
    `...`, never a silent drop.
Q4: a mined name that still cannot be resolved is dropped from the header
only with a loud ledger line; caller-bearing gaps are additionally written
to .omo/unresolved_reports/x4_missing_globals.defects.json.

Output: src/core/missing_globals_compat.h (regenerated; included from
ida_compat.h which is /FI'd into every TU).

Usage: python tools/csp_export/gen_missing_globals.py <log> [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools' / 'csp_export' / '_absorbed'
                      / 'step4_bodies'))
from signature_authority import Authority  # noqa: E402

Q = chr(0x201C) + chr(0x201D)
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)
OUT = ROOT / 'src' / 'core' / 'missing_globals_compat.h'
REPORT = ROOT / '.omo' / 'unresolved_reports' / 'x4_missing_globals.json'

TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace') if LOG else ''
ERR = re.compile(
    r'error (C2065|C3861|C2039): .*?[' + Q + r']([\w$]+)[' + Q + r']',
    re.S)

CRT = ['dword_B782A0', 'dword_B78BA0', 'dword_B78BA4', 'dword_B78BC0',
       'dword_B78BBC', 'hHeap', 'stru_B782B8']

# G41.27 fixed IDA pseudo-intrinsics (macros -- never emitted as externs)
IDA_MACROS = '''
#define LOBYTE(x) (*((unsigned char *)&(x)))
#define HIBYTE(x) (*(((unsigned char *)&(x)) + 1))
#define BYTE1(x) (*((unsigned char *)&(x) + 1))
#define BYTE2(x) (*((unsigned char *)&(x) + 2))
#define BYTE3(x) (*((unsigned char *)&(x) + 3))
#define LOWORD(x) (*((unsigned short *)&(x)))
#define HIWORD(x) (*(((unsigned short *)&(x)) + 1))
#define WORD1(x) (*((unsigned short *)&(x) + 1))
#define WORD2(x) (*((unsigned short *)&(x) + 2))
#define SHIWORD(x) (*(((short *)&(x)) + 1))
#define SLOWORD(x) (*((short *)&(x)))
#define LODWORD(x) (*((unsigned int *)&(x)))
#define HIDWORD(x) (*(((unsigned int *)&(x)) + 1))
#define SHIDWORD(x) (*(((int *)&(x)) + 1))
'''

# G41.27 CRT mangled operator names the typed export renders verbatim
CRT_OPS = '''
void __3_YAXPAX_Z(void *);        // operator delete(void*)
void *__2_YAPAXI_Z(unsigned int); // operator new[](unsigned)
'''

# ---------------------------------------------------------------------------
# G42.22 + X4: CRT internal/FLIRT names -- MSVC6 static CRT lives inside the
# exe; corpus calls them at GLOBAL scope, so namespace-gamemd decls are
# invisible there.  X4: COMPLETE prototypes, per-entry evidence, zero `...`.
# Types are header-self-contained (windows.h + IDA typedefs are included by
# ida_compat.h before this header).  Class-typed params from decompiles are
# normalized to void* (the class is not visible at /FI time) -- noted per
# entry where normalized.
#   Evidence channels: signals@0xADDR (X4 authority) | ida@0xADDR
#   (typed-snapshot decompile) | def@<path>:<line> (tree definition line).
# ---------------------------------------------------------------------------
CRT_SIGS = [
    # (name, ret, params, evidence)
    ('_un_inc', 'int', 'int p0, int* p1', 'signals@0x7d2183'),
    ('_fload_withFB', 'int', 'int a1, _DWORD *a2', 'ida@0x7cf3d5'),
    ('_powhlp', 'int', 'double p0, double p1, int p2', 'signals@0x7cf51c'),
    ('_ld12cvt', 'int', 'unsigned __int16 *a1, unsigned int *a2, int *a3',
     'ida@0x7d7aaf'),
    ('_cfltcvt_init', 'int', 'void', 'signals@0x4e4f50 (zero params)'),
    ('_getbuf', 'void*', 'void *p_this',
     'ida@0x7d7710 (ObjectClass* -> void*)'),
    ('_dosmaperr', 'void', 'unsigned int a1', 'ida@0x7d161b'),
    ('_mbsnccnt', 'size_t', 'const unsigned __int8 *Str, size_t MaxCount',
     'ida@0x7cbb8d'),
    ('_read', 'int', 'int p0, void* p1, unsigned int p2', 'signals@0x7d07df'),
    ('_lseek_lk', 'int', 'int FileHandle, LONG lDistanceToMove, DWORD dwMoveMethod',
     'ida@0x7d769d'),
    ('_setdefaultprecision', 'int', 'void',
     'signals@0x7ceaaf (zero params)'),
    ('_ms_p5_mp_test_fdiv', 'int', 'void',
     'signals@0x7ceaff (zero params)'),
    ('_startTwoArgErrorHandling', 'void', 'void',
     'signals@0x7cf330 (zero params; IDB-typed void)'),
    ('_check_range_exit', 'void', 'double a1, double a2, double *a3',
     'ida@0x7cf479'),
    ('_hextodec', 'int', 'int p0', 'signals@0x7d2132'),
    ('_whiteout', 'int', 'int p0, int* p1', 'signals@0x7d219a'),
    ('_lock', 'void', 'int a1', 'ida@0x7cd9f5'),
    ('_unlock', 'void', 'int a1', 'ida@0x7cda56'),
    ('__sbh_free_block', 'unsigned int *', 'char * aP0, int aP1',
     'def@src/e4/addr7C_e4.cpp:9031 (calls 2-arg x3)'),
    ('__crtGetStringTypeA', 'void',
     'DWORD dwInfoType, void *lpSrcStr, int cchSrc, LPWORD lpCharType, '
     'UINT CodePage, LCID Locale, int a7',
     'def@src/e4/addr7D_e4.cpp:6957 (CCINIClass* -> void*; calls 7-arg x4)'),
    ('__1_Timevec_std__QAE_XZ', 'void', 'const char **p_this',
     'def@src/raw_decomp/fn_7B.c:5757 (thiscall receiver flattened; '
     'calls 1-arg x2)'),
    ('__0Iostream_init_QAE_XZ_1', 'void *', 'void *p_this',
     'def@src/raw_decomp/fn_43.c:7933 (Iostream_init* -> void*; calls 1-arg)'),
    ('_raw_name_type_info__QBEPBDXZ', 'const char *', 'void *p_this',
     'def@src/raw_decomp/fn_68.c:1553 (type_info* -> void*; calls 1-arg)'),
    ('__4type_info_AAEAAV0_ABV0__Z', 'void *', 'void *p_this, int a2',
     'def@src/raw_decomp/fn_42.c:4861 (calls 2-arg x2)'),
]
# Q4 ledger: stale variadic-era entries whose call spellings are dead in the
# tree (exact-token census 2026-10-12); dropped here, recorded loudly.
CRT_DROPPED = [
    ('_strgtold12', '0 exact-token refs tree-wide; callers use __strgtold12/'
                    '___strgtold12 spellings (declared elsewhere)'),
    ('____F_m_badAllocExceptionPtr_tr1_std__A__YAXXZ', '0 refs tree-wide'),
]

names = set()
for code, nm in ERR.findall(TXT):
    if re.match(r'^(byte_|word_|dword_|stru_|qword_|unk_|loc_|sub_|j_|off_|flt_|dbl_|real_|float_)',
                nm) or nm in CRT:
        names.add(nm)
names |= set(CRT)

# G41: never re-declare a name that ANY header already declares -- the
# /FI'd compat header + the real declaration in an included header = the
# C2040 indirect-level clash family. Scan the declaration surface once.
declared = set()
DECL_RE = re.compile(r'\b(?:extern\s+)?[\w:<>,\s\*]+?[\s\*]([A-Za-z_]\w*)\s*'
                     r'(?:\[[^\]]*\])?\s*;', re.M)
for hp in ROOT.glob('src/**/*.h*'):
    if 'build' in hp.parts:
        continue
    if hp.resolve() == OUT.resolve():
        continue   # X4: never self-suppress -- the output is rewritten from
                   # scratch each run; its own prior content must not prune
                   # the regenerated entries (latent erosion bug, fixed here)
    try:
        txt = hp.read_text(encoding='utf-8', errors='replace')
    except OSError:
        continue
    for dm in DECL_RE.finditer(txt):
        declared.add(dm.group(1))
    # G41.27: function declarations end with `NAME(params);` -- DECL_RE
    # (semicolon-terminated, no parens) misses them entirely, so function
    # names slipped through and were re-emitted as DATA externs -> C2365
    # clash with the real prototypes (sub_4267F0 family).
    for fm in re.finditer(r'\b([A-Za-z_]\w*)\s*\([^;{}()]*\)\s*;', txt):
        declared.add(fm.group(1))
    for wm in re.finditer(r'\b(?:byte|word|dword|qword|stru|unk|off)_[0-9A-Fa-f]+\b',
                          txt):
        declared.add(wm.group(0))
skip = {n for n in names if n in declared}
names -= skip

# X4: sub_/j_ names are FUNCTIONS by construction (subroutine, thunk-jump);
# loc_ names are code LABELS -- the corpus only takes their address
# (`&loc_X`), never calls them, so a function declaration for a loc_ name is
# semantically wrong (and clashes with the e4 hoisted data defs).  loc_ ->
# ledger, never emitted.  sub_/j_ -> resolve a COMPLETE prototype from the
# authority (address is embedded in the name).
func_names = sorted(n for n in names
                    if re.match(r'^(sub_|j_)', n) and n not in declared)
loc_names = sorted(n for n in names if re.match(r'^loc_', n))
names -= set(func_names) | set(loc_names)

# scalar type by IDA prefix (pointer form kept only for struct-ish names)
def ctype(n):
    if n.startswith('byte_'):
        return 'unsigned char'
    if n.startswith('word_'):
        return 'unsigned short'
    if n.startswith('dword_'):
        return 'unsigned int'
    if n.startswith('qword_'):
        return 'unsigned long long'
    if n.startswith(('flt_', 'dbl_', 'real_', 'float_')):
        return 'double'
    return 'unsigned char *'   # stru_/unk_/off_: address-like

# --- X4 resolver for mined function names ---------------------------------
au = Authority(ROOT)
func_decls = []      # (ret, name, params, evidence)
func_gaps = {}       # name -> {addr, reason}
for n in func_names:
    m = re.match(r'^(?:sub|j)_([0-9A-Fa-f]+)$', n)
    addr = '0x' + m.group(1) if m else None
    r = au.resolve(name=n, addr=addr) if addr else au.resolve(name=n)
    if r is None or r.params is None:
        func_gaps[n] = {'addr': addr,
                        'reason': 'unresolved in signals/ida_cache'}
        continue
    ret = r.ret if r.ret and r.ret not in ('unknown',) else 'int'
    func_decls.append((ret, n, r.params, '%s@%s' % (r.provenance, r.addr)))

# --- Q4: caller check for gaps (observed call shapes) ---------------------
def call_shapes(name):
    """Exact-token call sites for a name (comment-stripped)."""
    tok = re.compile(r'(?<![\w])' + re.escape(name) + r'\s*\(')
    out = []
    for p in sorted((ROOT / 'src').rglob('*')):
        if p.suffix.lower() not in ('.h', '.hpp', '.c', '.cpp', '.inc'):
            continue
        if 'missing_globals' in str(p):
            continue
        try:
            t = p.read_text(encoding='utf-8', errors='replace')
        except OSError:
            continue
        for i, l in enumerate(t.split('\n'), 1):
            code = l.split('//')[0]
            if tok.search(code):
                out.append('%s:%d: %s' % (p.relative_to(ROOT), i,
                                          l.strip()[:140]))
                if len(out) >= 5:
                    return out
    return out


defects = {}
for n, g in sorted(func_gaps.items()):
    shapes = call_shapes(n)
    if shapes:
        defects[n] = {'addr': g['addr'], 'callers': shapes,
                      'reason': 'caller-bearing, signature missing in '
                                'authority (Q4: CSP defect)'}
if not TXT:
    print('[x4] no log supplied — mined name set may differ from last run')

hdr = ['// GENERATED by tools/csp_export/gen_missing_globals.py -- DO NOT EDIT.',
       '// D1/#154 corpus-undeclared globals + D3 CRT internals/RTTI/FILE.',
       '// X4: complete prototypes; variadic fallback path deleted (禁 `...`).',
       '#pragma once',
       '#ifndef _G38_MISSING_GLOBALS_COMPAT_',
       '#define _G38_MISSING_GLOBALS_COMPAT_',
       '']
hdr += ['// G42.22/X4 CRT internal/FLIRT names (global scope; static CRT in-exe)',
        '// complete prototypes; evidence per entry (signals@ADDR / ida@ADDR / def@path:line)']
for n, ret, params, ev in CRT_SIGS:
    hdr += ['extern "C" %s %s(%s);  // %s' % (ret, n, params, ev)]
hdr += ['', 'namespace gamemd {',
        '']
hdr += ['extern %s %s;' % (ctype(n), n) for n in sorted(names)]
if func_decls:
    hdr += ['', '// G41.27/X4: corpus-undeclared FUNCTIONS (mined from C3861) --',
            '// complete prototypes from the signature authority (address is embedded',
            '// in the name); real decls live in e4_protos.h']
    hdr += ['%s %s(%s);  // %s' % (ret, n, p, ev)
            for ret, n, p, ev in func_decls]
hdr += ['', '// CRT/RTTI/FILE compat stubs (blockers #30/#31/#33/#35)',
        '// IDA pseudo-intrinsics (bit-reinterpretation; value-safe casts)',
        '#define COERCE_UNSIGNED_INT64(x) ((unsigned long long)(x))',
        '#define COERCE_DOUBLE(x) (*(double *)&(x))',
        '#define COERCE_FLOAT(x) (*(float *)&(x))',
        '#define COERCE_INT64(x) ((long long)(x))',
        '#define COERCE_UNSIGNED_INT(x) ((unsigned int)(x))',
        '#define COERCE_INT(x) ((int)(x))',
        '',
        '// G41.27 IDA pseudo-intrinsics (register-lane accessors)',
        IDA_MACROS,
        '// G41.27 CRT mangled operators (typed-export verbatim names)',
        CRT_OPS,
        '',
        'struct PMD { int mdisp; int pdisp; int vdisp; };',
        'struct TypeDescriptor { void* pVFTable; void* spare; char name[64]; };',
        '',
        '} // namespace gamemd',
        '#endif', '']
if APPLY:
    OUT.write_text('\n'.join(hdr), encoding='utf-8')
    print('externs emitted:', len(names), 'crt:', len(CRT_SIGS),
          'funcs:', len(func_decls), '->', OUT)
else:
    print('(dry run) externs would be:', len(names), 'crt:', len(CRT_SIGS),
          'funcs:', len(func_decls))
if func_gaps:
    print('!! [x4] %d mined function name(s) unresolvable:' % len(func_gaps))
    for n in sorted(func_gaps):
        print('    | %s (%s)' % (n, func_gaps[n]['reason']))
if loc_names:
    print('[x4] %d loc_ label name(s) skipped (address-only; Q4 ledger): %s'
          % (len(loc_names), ', '.join(loc_names[:8])))
if CRT_DROPPED:
    print('[x4] %d stale CRT entry(ies) dropped (Q4 ledger):' % len(CRT_DROPPED))
    for n, why in CRT_DROPPED:
        print('    | %s -- %s' % (n, why))

# X4 ledger + defect report (always written; loud, never silent)
REPORT.parent.mkdir(parents=True, exist_ok=True)
REPORT.write_text(json.dumps({
    'schema': 'x4-missing-globals/v1',
    'log': LOG,
    'crt_dropped': [{'name': n, 'reason': w} for n, w in CRT_DROPPED],
    'loc_labels_skipped': loc_names,
    'func_gaps': func_gaps,
    'caller_bearing_defects': defects,
}, indent=1, ensure_ascii=False, sort_keys=True), encoding='utf-8')

# idempotent include hook in ida_compat.h (FI'd everywhere)
if APPLY:
    ic = ROOT / 'src' / 'core' / 'ida_compat.h'
    txt = ic.read_text(encoding='utf-8', errors='replace')
    if 'missing_globals_compat' not in txt:
        txt += '\n#include "core/missing_globals_compat.h"\n'
        ic.write_text(txt, encoding='utf-8')
        print('ida_compat.h hook added')
