#!/usr/bin/env python3
"""X39 L1: g_Str_* atom decl unification + GetStringCSF binary-true decl.

Q1 binary evidence:
  - 486/486 g_Str_* atoms verified ANSI char strings in .data
    (IDA get_bytes + printable scan + NUL; gstr_verify_all.json).
  - GetStringCSF 0x734E60: bsearch(label,...,_strcmpi) + swprintf(...,%hs,...)
    => param1 = char* (IDA wchar_t* annotation wrong); return wchar_t*.
    Current decls: int* (global_funcs_decls, sig=signals stale) /
    wchar_t* (e4_protos) / shim trio (misc_ext) — all wrong on param1.

Rewrites (idempotent; 2nd run 0 writes):
  A. every `extern ... g_Str_NAME[...]?;` decl -> `extern char NAME[BOUND];`
     BOUND = globals_core.hpp bound when present (L5-verified), else
     binary slen+1. csp_canon ident-collision atoms (same NAME, >1 addr:
     gen_cpp_canon.py ident() underscore-collapse artifact) get
     unknown-bound `extern char NAME[];` (legal repeat decls, decay OK;
     collision names exist ONLY in csp_canon -> no cross-universe clash).
     Comments/anchors preserved verbatim.
  B. GetStringCSF decls (7 sites) -> single true signature
     `wchar_t *GetStringCSF(char *key, unsigned int *a2, const char *a3, int a4)`
     (= 0 default arg kept only on e4_protos.h). misc_ext shim trio
     collapses to one decl.
  C. `(wchar_t *)` -> `(char *)` STRICTLY in GetStringCSF arg1 position
     (paren-aware scan handles multi-line calls; cast retype = binary-true
     spelling, NOT cast insertion).

Usage: python x39_l1_gstr.py [--apply]
"""
import json
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]
while not (ROOT / 'src' / 'core' / 'globals_core.hpp').exists() and ROOT != ROOT.parent:
    ROOT = ROOT.parent
EV = Path(r'D:\RA2YR_ReSource') / '.omo' / 'evidence' / 'optimization' / 'x39'  # X47 path-normalization: original derived EV from __file__ (evidence dir); absorbed copy points at the evidence dir explicitly
APPLY = '--apply' in sys.argv

verify = json.load((EV / 'gstr_verify_all.json').open(encoding='utf-8'))
decls = json.load((EV / 'gstr_decls.json').open(encoding='utf-8'))

# ---- bound authority -------------------------------------------------------
core_txt = (ROOT / 'src/core/globals_core.hpp').read_text(encoding='latin-1', errors='replace')
core_bound = {}
for m in re.finditer(r'extern (?:uint8_t|char) (g_Str_[A-Za-z0-9_]*)\[(\d+)\];', core_txt):
    core_bound[m.group(1)] = int(m.group(2))

# collision atoms in csp_canon (same NAME, >1 address) -- tolerate the
# already-rewritten `[]` form so re-runs see the same collision set
cc = (ROOT / 'src/csp_canon/globals.hpp').read_text(encoding='utf-8', errors='replace').splitlines()
addr_of = {}
for ln in cc:
    m = re.match(r'extern .+?\b(g_Str_[A-Za-z0-9_]*)(?:\[[^\]]*\])?\s*;.*?0x([0-9A-Fa-f]+)', ln)
    if m:
        addr_of.setdefault(m.group(1), set()).add(int(m.group(2), 16))
COLLISION = {k for k, v in addr_of.items() if len(v) > 1}

bound = {}
warn = []
for name, info in verify.items():
    if 'err' in info:
        continue
    slen1 = info['slen'] + 1
    cb = core_bound.get(name)
    if cb is not None and cb < slen1:
        warn.append('%s core bound %d < binary slen+1 %d -> binary wins'
                    % (name, cb, slen1))
        bound[name] = slen1
    else:
        bound[name] = cb if cb is not None else slen1

# ---- A. decl rewrite -------------------------------------------------------
DECL_RE = re.compile(
    r'^(?P<indent>\s*)extern\s+(?P<ty>(?:const\s+)?(?:unsigned\s+)?[A-Za-z_][A-Za-z0-9_ ]*?)\s*'
    r'(?P<name>g_Str_[A-Za-z0-9_]*)\s*(?P<arr>\[[^\]]*\])?\s*;'
    r'(?P<tail>.*)$')

n_decl = 0
files_touched = {}

def rewrite_decls(path):
    global n_decl
    p = ROOT / path
    txt = p.read_text(encoding='latin-1', errors='replace')
    lines = txt.split('\n')
    out = []
    n = 0
    for ln in lines:
        m = DECL_RE.match(ln)
        if m and m.group('name') in bound:
            nm = m.group('name')
            b = '[]' if (nm in COLLISION and 'csp_canon' in str(path)) \
                else '[%d]' % bound[nm]
            target = '%sextern char %s%s;%s' % (m.group('indent'), nm, b, m.group('tail'))
            if ln != target:
                ln = target
                n += 1
        out.append(ln)
    if n:
        n_decl += n
        files_touched[str(path)] = n
        if APPLY:
            p.write_bytes('\n'.join(out).encode('latin-1'))
    return n

decl_files = sorted({d['file'].replace('/', '\\') for v in decls.values() for d in v})
for f in decl_files:
    rewrite_decls(f)

# ---- B. GetStringCSF decl unification -------------------------------------
TRUE_SIG = 'wchar_t * GetStringCSF(char *key, unsigned int *a2, const char *a3, int a4)'
TRUE_SIG_DEF = 'wchar_t * GetStringCSF(char *key, unsigned int *a2, const char *a3, int a4 = 0)'
n_cs = 0
cs_files = {}

CSF_DECL_RE = re.compile(
    r'^\s*(?:extern\s+)?(?:void\s*\*|wchar_t\s*\*)\s*GetStringCSF\s*\([^;]*\)\s*;.*$')

def fix_csf_decl(path, with_default=False):
    global n_cs
    p = ROOT / path
    txt = p.read_text(encoding='latin-1', errors='replace')
    lines = txt.split('\n')
    out = []
    n = 0
    sig = TRUE_SIG_DEF if with_default else TRUE_SIG
    i = 0
    while i < len(lines):
        if CSF_DECL_RE.match(lines[i]) and 'char *key' not in lines[i]:
            out.append('extern %s;' % sig)
            n += 1
            # swallow immediately-following shim decl lines (misc_ext trio)
            j = i + 1
            while j < len(lines) and CSF_DECL_RE.match(lines[j]):
                n += 1
                j += 1
            i = j
        else:
            out.append(lines[i])
            i += 1
    if n:
        n_cs += n
        cs_files[str(path)] = n
        if APPLY:
            p.write_bytes('\n'.join(out).encode('latin-1'))
    return n

fix_csf_decl('src\\e4\\e4_protos.h', with_default=True)
fix_csf_decl('src\\_generated\\global_funcs_decls.hpp')
fix_csf_decl('src\\misc\\misc_ext.cpp')
fix_csf_decl('src\\team\\supplied_bodies.cpp')
fix_csf_decl('src\\ui\\supplied_bodies.cpp')

# ---- C. arg1 cast retype (paren-aware, multi-line safe) --------------------
def retype_arg1_casts(path):
    p = ROOT / path
    txt = p.read_text(encoding='latin-1', errors='replace')
    lines = txt.split('\n')
    out = []
    n = 0
    i = 0
    N = len(lines)
    while i < N:
        ln = lines[i]
        if 'GetStringCSF(' not in ln:
            out.append(ln)
            i += 1
            continue
        block = [ln]
        j = i
        joined = ln
        while j + 1 < N and joined.count('(') > joined.count(')'):
            j += 1
            block.append(lines[j])
            joined += '\n' + lines[j]
        window = '\n'.join(block)
        pos = window.find('GetStringCSF(')
        d = 0
        p2 = pos + len('GetStringCSF(')
        end = -1
        while p2 < len(window):
            ch = window[p2]
            if ch == '(':
                d += 1
            elif ch == ')':
                if d == 0:
                    end = p2
                    break
                d -= 1
            elif ch == ',' and d == 0:
                end = p2
                break
            p2 += 1
        if end != -1:
            arg1 = window[pos + len('GetStringCSF('):end]
            new_arg1 = re.sub(r'^(\s*)\(wchar_t\s*\*\)', r'\1(char *)', arg1)
            if new_arg1 != arg1:
                window = window[:pos + len('GetStringCSF(')] + new_arg1 + window[end:]
                n += 1
        out.extend(window.split('\n'))
        i = j + 1
    if n:
        if APPLY:
            p.write_bytes('\n'.join(out).encode('latin-1'))
    return n

n_cast = 0
cast_files = {}
r = subprocess.run(['git', 'grep', '-l', 'GetStringCSF(', '--', 'src/'],
                   capture_output=True, text=True, encoding='utf-8', errors='replace')
for f in sorted(set(r.stdout.split())):
    if f.endswith('.c'):
        continue
    n = retype_arg1_casts(f.replace('/', '\\'))
    if n:
        n_cast += n
        cast_files[f] = n

print('decl rewrites: %d across %d files' % (n_decl, len(files_touched)))
for k, v in sorted(files_touched.items()):
    print('   %4d %s' % (v, k))
print('csf decl rewrites: %d %s' % (n_cs, cs_files))
print('arg1 cast retypes: %d across %d files' % (n_cast, len(cast_files)))
if warn:
    print('WARNINGS:')
    for w in warn[:10]:
        print(' ', w)
print('collision atoms ([] form in csp_canon):', sorted(COLLISION))
if not APPLY:
    print('DRY RUN (pass --apply)')
