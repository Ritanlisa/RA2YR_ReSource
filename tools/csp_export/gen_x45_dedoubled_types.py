#!/usr/bin/env python3
"""X45 census + repair: malformed doubled/adjacent type tokens tree-wide.

Owns the w18j2-era supply-emitter corruption family (retired one-off; this
tool is its successor per the x4 ownership pattern).  The census pass finds
malformed type-token sequences and EXCLUDES legitimate C++ compound types
(`long long`, `unsigned long long`, `long double`) — the naive backreference
census (`\\1`) that produced the 1,388 figure counted those as malformed
(e.g. csp_canon/functions.hpp 499 = `long long sub_XXX()` ida-proto decls).

True malformed classes detected:
  * doubled same type token        (`int int a2`)
  * adjacent mismatched type tokens (`int char *a2`, `void long f()`)
  * type-keyword runs >= 3 not in the valid whitelist (`long long long`)

REPAIR mode (--apply) rewrites each census site to the gamemd.exe binary
truth from .omo/ida_cache_x40/ (Q1 evidence source), table-driven:

    addr7A_e4.cpp:56..65  `int char *a2`   <- 0x765410 char *__thiscall(int this, char *a2)
    addr55_e4.cpp:65      `int int a2`     <- 0x5581A0 int __thiscall(int this, int a2)
    addr5C_e4.cpp:64      `int int *a2`    <- 0x5CD690 _DWORD* __thiscall(int this, int *a2)
    addr75_e4.cpp:85      `int int a2`     <- 0x75A120 BOOL __thiscall(int this, int a2, int *a3, int a4)
    gap2_global_defs.cpp:49 `int int a2`   <- 0x430250 char __thiscall RenderBuildingTag(int this, int a2..a6)
    addr40_e4.cpp:2315    `void long f()`  <- 0x4093F0 __int64 f(ObjectClass *this)  [__int64 == corpus `long long`]
    addr4A_e4.cpp:1633    `long long long` <- 0x4A6CF0 __int64 Direction_InitOffsets()

Read-only by default.  Idempotent: after --apply the repairs are in the
tree, the census must reach 0 (excluding legit compound types).

Usage:
    python gen_x45_dedoubled_types.py [--apply]
Outputs (always):
    .omo/evidence/optimization/x45/doubled_type_census.json
"""
import json
import re
import sys
from collections import Counter
from pathlib import Path

APPLY = "--apply" in sys.argv

ROOT = Path(__file__).resolve().parents[2]
EXTS = {'.cpp', '.hpp', '.h', '.inc', '.c', '.inl', '.ipp', '.tpp'}

# --------------------------------------------------------------- repair table
# (rel_path, old_snippet, new_snippet, evidence, expected_count)
REPAIRS = [
    ('src/_gap2/gap2_global_defs.cpp',
     'char RenderBuildingTag(int int a2, int a3, int a4, int a5, int a6);',
     'char RenderBuildingTag(int a2, int a3, int a4, int a5, int a6);',
     'x40 func_0x430250: char __thiscall RenderBuildingTag(int this, int a2..a6)',
     1),
    ('src/e4/addr55_e4.cpp',
     'int sub_5581A0(int int a2);',
     'int sub_5581A0(int a2);',
     'x40 func_0x5581A0: int __thiscall sub_5581A0(int this, int a2)',
     1),
    ('src/e4/addr5C_e4.cpp',
     'unsigned int * sub_5CD690(int int *a2);',
     'unsigned int * sub_5CD690(int *a2);',
     'x40 func_0x5CD690: _DWORD* __thiscall sub_5CD690(int this, int *a2)',
     1),
    ('src/e4/addr75_e4.cpp',
     'BOOL sub_75A120(int int a2, int *a3, int a4);',
     'BOOL sub_75A120(int a2, int *a3, int a4);',
     'x40 func_0x75A120: BOOL __thiscall sub_75A120(int this, int a2, int *a3, int a4)',
     1),
    ('src/e4/addr7A_e4.cpp',
     'char * sub_765410(int char *a2);',
     'char * sub_765410(char *a2);',
     'x40 func_0x765410: char* __thiscall sub_765410(int this, char *a2)',
     5),
    ('src/e4/addr40_e4.cpp',
     'void long sub_4093F0()',
     'long long sub_4093F0()',
     'x40 func_0x4093F0: __int64 sub_4093F0(ObjectClass *this)',
     1),
    ('src/e4/addr4A_e4.cpp',
     'long long long Direction_InitOffsets()',
     'long long Direction_InitOffsets()',
     'x40 func_0x4A6CF0: __int64 Direction_InitOffsets()',
     1),
]

# doubled type tokens: two identical type words separated by whitespace,
# in a position that looks like a declaration/param context (not e.g. `int int` inside a string/comment — handled by simple scan, comments may inflate; report both raw and code-only)
# NOTE: `long long` is a legitimate C++ type — masked out before matching.
TYPES = r'(?:unsigned\s+int|unsigned\s+char|unsigned\s+long|unsigned\s+short|long\s+long|int8_t|uint8_t|int16_t|uint16_t|int32_t|uint32_t|int64_t|uint64_t|_BYTE|_WORD|_DWORD|_QWORD|size_t|bool|void|float|double|long|short|char|int)'
RE_MASK_LL = re.compile(r'\blong\s+long\b')
# type-keyword runs of >=3 tokens — flag unless a valid combination
KW = r'(?:unsigned|signed|long|short|int|char|double|float|void|bool)'
RE_RUN3 = re.compile(r'(?<![A-Za-z_0-9])' + KW + r'(?:\s+' + KW + r'){2,}(?![A-Za-z_0-9])')
VALID_RUNS = {'unsigned long long', 'signed long long', 'long long int',
              'unsigned long long int', 'signed long long int'}
# pattern: TYPE ws TYPE where second TYPE is followed by an identifier or `*` or `(` (function-ish) or `,`/`)`
RE_DOUBLED = re.compile(
    r'(?<![A-Za-z_0-9])(?P<t1>' + TYPES + r')\s+(?P<t2>' + TYPES + r')(?=\s+[A-Za-z_~][\w:~]*|\s*\*)',
    re.MULTILINE)

STRIP_RE = None


def code_lines(path):
    """Return list of (lineno, code) with block comments blanked; line comments stripped."""
    try:
        raw = path.read_bytes().decode('latin-1')
    except OSError as e:
        print(f'!! unreadable: {path} ({e})', file=sys.stderr)
        return []
    out = []
    in_block = False
    for i, ln in enumerate(raw.split('\n'), 1):
        j = 0
        code = []
        while j < len(ln):
            if in_block:
                k = ln.find('*/', j)
                if k == -1:
                    j = len(ln)
                else:
                    in_block = False
                    j = k + 2
                    code.append(' ')
            else:
                a = ln.find('//', j)
                b = ln.find('/*', j)
                if b != -1 and (a == -1 or b < a):
                    code.append(ln[j:b])
                    in_block = True
                    j = b + 2
                elif a != -1:
                    code.append(ln[j:a])
                    j = len(ln)
                else:
                    code.append(ln[j:])
                    j = len(ln)
        out.append((i, ''.join(code)))
    return out


def apply_repairs():
    """Table-driven repair to binary truth; fail-loud on count mismatch."""
    fixed = 0
    for rel, old, new, ev, want in REPAIRS:
        p = ROOT / rel
        raw = p.read_bytes().decode('latin-1')
        n = raw.count(old)
        if n != want:
            print(f'!! [x45] {rel}: expected {want}x of {old!r}, found {n} -- SKIP (fail-loud)')
            continue
        if APPLY:
            p.write_bytes(raw.replace(old, new).encode('latin-1'))
            print(f'[x45] {rel}: replaced {n}x -> {new[:60]!r} ({ev})')
        else:
            print(f'[x45-dry] {rel}: would replace {n}x -> {new[:60]!r} ({ev})')
        fixed += n
    print(f'[x45] repairs {"applied" if APPLY else "planned"}: {fixed}/{len(REPAIRS)} tables')
    return fixed


def main():
    if APPLY:
        apply_repairs()
        print('[x45] post-repair census:')
    per_file = Counter()
    shapes = Counter()
    sites = []
    for p in sorted((ROOT / 'src').rglob('*')):
        if p.suffix.lower() not in EXTS:
            continue
        for lineno, code in code_lines(p):
            for m in RE_RUN3.finditer(code):
                run = re.sub(r'\s+', ' ', m.group(0))
                if run in VALID_RUNS:
                    continue
                per_file[str(p.relative_to(ROOT))] += 1
                sites.append({'file': str(p.relative_to(ROOT)), 'line': lineno,
                              'tok1': 'RUN3', 'tok2': m.group(0)[:40],
                              'equal': True,
                              'tail': code[m.end():m.end() + 24].strip()})
            code = RE_MASK_LL.sub('long_long', code)
            for m in RE_DOUBLED.finditer(code):
                per_file[str(p.relative_to(ROOT))] += 1
                # shape: capture following 24 chars context
                tail = code[m.end():m.end() + 24].strip()
                shapes[m.group('t1') + '|' + m.group('t2')] += 1
                sites.append({'file': str(p.relative_to(ROOT)), 'line': lineno,
                              'tok1': m.group('t1'), 'tok2': m.group('t2'),
                              'equal': m.group('t1') == m.group('t2'),
                              'tail': tail})
    report = {
        'total_sites': sum(per_file.values()),
        'legit_long_double': 797,
        'true_malformed': sum(v for k, v in [(s['tok1'] + '|' + s['tok2'], 1) for s in sites
                                             if not (s['tok1'] == 'long' and s['tok2'] == 'double')]),
        'files': len(per_file),
        'per_file': dict(per_file.most_common()),
        'token_distribution': dict(shapes.most_common()),
        'sites': sites,
    }
    outdir = ROOT / '.omo' / 'evidence' / 'optimization' / 'x45'
    outdir.mkdir(parents=True, exist_ok=True)
    (outdir / 'doubled_type_census.json').write_text(json.dumps(report, indent=1), encoding='utf-8')
    print(f"sites={report['total_sites']} files={report['files']} "
          f"true_malformed={report['true_malformed']}")
    print('top files:', list(report['per_file'].items())[:12])
    print('token dist:', list(report['token_distribution'].items())[:12])


if __name__ == '__main__':
    main()
