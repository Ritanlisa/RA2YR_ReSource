#!/usr/bin/env python3
"""Body-level syntax/garbage repairs (converge battery v2, log-driven).

Patterns:
 1. vtable-call casts whose parameter-type list uses IDENTIFIERS as types
    (`(*(int (__thiscall **)(aP1 *, aP1))(this->u32_18 + 16))(...)`) --
    the IDA pseudocode generator dropped the real types. Each identifier
    token that is a known param/local-style name -> `void *`.
 2. digit-separator garbage literals (`55.0_2`, `10_3`) -> `55.0`, `103`.
 3. C2065 undeclared LOCAL vN/loc identifiers -> hoist
    `unsigned int vN = 0;` at function head (compile-first; verifier
    already FAILs these bodies pre-fix).

Usage: python tools/csp_export/fix_body_syntax_v2.py <error-log> [--apply]
"""
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)
LQ, RQ = chr(0x201C), chr(0x201D)
TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace') if LOG else ''

ERR = re.compile(
    r'^(?:\d+>)?(?:[A-Za-z]:[\\/](?:RA2YR_ReSource[\\/])?)?'
    r'([^\s(]+)\((\d+),\d*\): error (C\d+): (.*)$',
    re.M)

IDENT_ARG = re.compile(r'^[avu]\d+$|^a[A-Z]\w*$|^Str\d+$')
FPTR_CAST = re.compile(
    r'(\(\s*(?:[\w]+\s+)?__thiscall\s*\*\*\s*\))\(([^()]*)\)')
FPTR_THISCALL_ONLY = re.compile(r'(__thiscall\s+)(?=\*\*|\()')
NUMSEP = re.compile(r'\b(\d+(?:\.\d+)?u?)_(\d+)\b')
QMEMBER_SUB = re.compile(r'([&\( ]|^)([A-Za-z_]\w*(?:->\w+)?)\.?\?\[(\d+)\]')
QMEMBER_PLAIN = re.compile(r'([A-Za-z_]\w*)\.?\?(?![\[\w])')

STATS = defaultdict(int)


def in_corpus(rel):
    return (rel.startswith('src/e4/') or rel.startswith('src/_gap2/')
            or re.search(r'(gap2_defs|gap2_global|subs_\d|_bodies)', rel)
            is not None)

# --- pass 1: collect C2065 undeclared-local sites (file -> set of names) ---
hoist = defaultdict(set)
for f, ln, code, msg in ERR.findall(TXT):
    if code != 'C2065':
        continue
    m = re.search(r'[%s"“]?(\w+)[%s"”].*未声明的标识符' % (LQ, RQ), msg)
    if not m:
        m = re.match(r'.*?[“"](\w+)[”"].*', msg)
    if m and re.match(r'^v\d+$|^loc\w+$', m.group(1)):
        f2 = f.replace('\\', '/')
        mm = re.search(r'src/(.*)$', f2)
        if mm:
            hoist['src/' + mm.group(1)].add(m.group(1))
            STATS['c2065-hoist-site'] += 1


def fix_fptr_casts(txt, fname):
    def _sub(mm):
        head, args = mm.group(1), mm.group(2)
        toks = [t.strip() for t in args.split(',')] if args.strip() else []
        if not toks:
            return mm.group(0)
        if all(IDENT_ARG.match(t.rstrip('*').strip()) for t in toks):
            STATS['fptr-cast'] += 1
            return '%s(%s)' % (head, ', '.join(['void *'] * len(toks)))
        return mm.group(0)
    txt = FPTR_CAST.sub(_sub, txt)
    # bare __thiscall inside fn-ptr cast types (real types present):
    # `int (__thiscall **)(GScreenClass *, int)` -> `int (**)(...)`
    if '__thiscall' in txt:
        n = len(FPTR_THISCALL_ONLY.findall(txt))
        if n:
            STATS['thiscall-strip'] += n
            txt = FPTR_THISCALL_ONLY.sub('', txt)
    return txt


def fix_qmember(txt):
    """`.?[N]` unresolved-member residue -> byte-offset access forms."""
    def _sub(mm):
        STATS['qmember-sub'] += 1
        pre, base, off = mm.group(1), mm.group(2), mm.group(3)
        if pre == '&':
            return '%s(unsigned int *)((char *)&%s + %s)' % (pre, base, off)
        return '%s*((unsigned int *)((char *)&%s + %s))' % (pre, base, off)
    return QMEMBER_SUB.sub(_sub, txt)


def fix_numsep(txt):
    def _sub(mm):
        STATS['numsep'] += 1
        return mm.group(1) + mm.group(2)
    return NUMSEP.sub(_sub, txt)


def find_fn_insert_line(lines, err_line, name):
    """Walk upward from err_line to the function's opening '{' line."""
    for i in range(min(err_line - 1, len(lines) - 1), -1, -1):
        s = lines[i]
        if '{' in s and ('(' in s or (i > 0 and '(' in lines[i - 1])):
            return i
        if re.match(r'^\s*(?:if|for|while|switch)\b', s):
            continue
        if i < err_line - 200:
            break
    return None


# --- pass 2: apply per-file fixes (mechanical corpus only) ---
n_files = 0
files = set(hoist.keys())
for f, ln, code, msg in ERR.findall(TXT):
    f2 = f.replace('\\', '/')
    mm = re.search(r'src/(.*)$', f2)
    if mm:
        files.add('src/' + mm.group(1))
files = {f for f in files if in_corpus(f)}

for rel in sorted(files):
    p = ROOT / rel
    if not p.exists() or p.suffix != '.cpp':
        continue
    try:
        txt = p.read_text(encoding='utf-8', errors='replace')
    except OSError:
        continue
    orig = txt
    txt = fix_fptr_casts(txt, rel)
    txt = fix_numsep(txt)
    txt = fix_qmember(txt)
    if rel in hoist:
        lines = txt.split('\n')
        for name in sorted(hoist[rel]):
            # insert after the first '{' at file scope containing the name
            target = None
            for i, s in enumerate(lines):
                if name in s:
                    target = find_fn_insert_line(lines, i + 1, name)
                    if target is not None:
                        break
            if target is not None:
                indent = '    '
                lines.insert(target + 1, f'{indent}unsigned int {name} = 0;'
                             f'  /* G37 hoist */')
                STATS['c2065-hoist'] += 1
        txt = '\n'.join(lines)
    if txt != orig:
        n_files += 1
        if APPLY:
            p.write_text(txt, encoding='utf-8')

print('files changed:', n_files)
for k, v in sorted(STATS.items()):
    print('  %-16s %d' % (k, v))
if not APPLY:
    print('(dry run -- pass --apply)')
