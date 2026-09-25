#!/usr/bin/env python3
"""Error-driven member supply for e4 flat classes.

Consumes an MSBuild error log; for every C2039 "X: not a member of
gamemd::Cls" raised inside a src/e4/*.cpp, adds member X to
e4/classes/Cls_e4.hpp (inside the flat-members markers) with the type
inferred from the mechanical name prefixes.

Usage: python tools/csp_export/supply_members_from_errors.py <log> [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
E4C = ROOT / 'src' / 'e4' / 'classes'
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace') if LOG else ''
# encoding-agnostic: anchor on the ASCII structure only (MSVC output may be
# UTF-8 or GBK; the prose re-encodes but ASCII survives)
MEM = re.compile(r'error C2039: "(\w+)": .{0,40}?gamemd::(\w+)')
# C2888: member defined but never declared — the quoted span carries the
# full signature `RET gamemd::Cls::Mth(params)`; anchor on the opening
# quote so the ret type is never eaten by the prose matcher
QS = re.compile(r'error C2888: ["\u201c]([^"\u201d]{1,160})["\u201d]')
METH = re.compile(
    r'^\s*(?P<ret>[A-Za-z_][\w\s\*<>,:&:]*?)\s*gamemd::(?P<cls>\w+)::'
    r'(?P<mth>~?\w+)\((?P<params>[^)]*)\)\s*$')

BEGIN = '// --- flat members (BEGIN) ---'
END = '// --- flat members (END) ---'

TYPE_BY_PREFIX = [('u8_', 'unsigned char'), ('u16_', 'unsigned short'),
                  ('u32_', 'unsigned int'), ('u64_', 'unsigned long long'),
                  ('ptr_', 'void*'), ('q', 'unsigned int')]


def member_type(nm):
    for pre, ty in TYPE_BY_PREFIX:
        if nm.startswith(pre):
            return ty
    return 'unsigned int'


need = {}
for m in MEM.finditer(TXT):
    need.setdefault(m.group(2), set()).add(m.group(1))
meths = {}   # cls -> set("RET Mth(params);")
for qs in QS.finditer(TXT):
    span = qs.group(1)
    mm = METH.match(span)
    if not mm:
        continue
    ret = ' '.join(mm.group('ret').split())
    params = ' '.join(mm.group('params').split()).replace('gamemd::', '')
    if not re.match(r'^[A-Za-z_][\w\s\*<>,:&]*$', ret):
        ret = 'int'
    meths.setdefault(mm.group('cls'), set()).add(
        '    %s %s(%s);' % (ret, mm.group('mth'), params))

added = 0
files = 0
for cls, members in sorted(need.items()):
    hp = E4C / ('%s_e4.hpp' % cls)
    if not hp.exists():
        continue
    txt = hp.read_text(encoding='utf-8', errors='replace')
    new = []
    for nm in sorted(members):
        if re.search(r'\b%s\b' % re.escape(nm), txt):
            continue
        new.append('    %s %s;' % (member_type(nm), nm))
    if not new:
        continue
    if BEGIN in txt and END in txt:
        txt = txt.replace(END, '\n'.join(new) + '\n' + END, 1)
    else:
        m = re.search(r'struct\s+%s\s*[^;{]*\{\n' % re.escape(cls), txt)
        if not m:
            continue
        txt = txt[:m.end()] + '\n'.join(new) + '\n' + txt[m.end():]
    added += len(new)
    files += 1
    if APPLY:
        hp.write_text(txt, encoding='utf-8')

# C2888 method decls: append to the class body (before the closing brace)
madded = 0
for cls, decls in sorted(meths.items()):
    hp = E4C / ('%s_e4.hpp' % cls)
    if not hp.exists():
        continue
    txt = hp.read_text(encoding='utf-8', errors='replace')
    new = [d for d in sorted(decls)
           if not re.search(re.escape(d.strip()), txt)]
    # name-level dedup: an overload-compatible decl already present makes a
    # second spelling a C2556 pair — skip instead
    new = [d for d in new
           if not re.search(r'\b%s\s*\(' % re.escape(
               d.strip().split('(')[0].split()[-1]), txt)]
    if not new:
        continue
    m = re.search(r'struct\s+%s\s*[^;{]*\{' % re.escape(cls), txt)
    if not m:
        continue
    depth, i = 0, m.end() - 1
    close = None
    while i < len(txt):
        if txt[i] == '{':
            depth += 1
        elif txt[i] == '}':
            depth -= 1
            if depth == 0:
                close = i
                break
        i += 1
    if close is None:
        continue
    txt = txt[:close] + '\n'.join(new) + '\n' + txt[close:]
    madded += len(new)
    files += 1
    if APPLY:
        hp.write_text(txt, encoding='utf-8')

print(f'members supplied: {added}, method decls supplied: {madded} '
      f'in {files} headers')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')


# ---- C3863/C2106: array-degraded member assigned as scalar -> widen ----
ASSIGN = re.compile(r'error C(3863|2106)')
SRC_RE = re.compile(r'([A-Za-z0-9_]+\.(?:cpp))\((\d+)')
MEMA = re.compile(r'(?:this->|->|\.)(\w+)\s*=(?!=)')

def repair_arrays():
    n = 0
    if not LOG:
        return 0
    seen = {}
    for m in ASSIGN.finditer(TXT):
        seg = TXT[max(0, m.start() - 200):m.end() + 200]
        fm = SRC_RE.search(seg)
        if not fm:
            continue
        f, ln_no = fm.group(1), int(fm.group(2))
        try:
            src = (ROOT / 'src' / 'e4' / f).read_text(
                encoding='latin-1', errors='replace').split('\n')
            line = src[ln_no - 1] if ln_no <= len(src) else ''
        except OSError:
            continue
        am = MEMA.search(line)
        if not am:
            continue
        rhs = line.split('=', 1)[-1] if '=' in line else ''
        kind = 'ptr' if ('new ' in rhs or '->' in rhs
                         or '_vftable' in rhs) else 'scalar'
        seen.setdefault(am.group(1), kind)
    # locate + widen each named member in e4 headers
    for mem_name in seen:
        pat = re.compile(r'char %s\[\d+\];' % re.escape(mem_name))
        for hp in (E4C).glob('*_e4.hpp'):
            txt = hp.read_text(encoding='utf-8', errors='replace')
            if pat.search(txt):
                txt2 = pat.sub('unsigned int %s;' % mem_name, txt)
                if txt2 != txt:
                    hp.write_text(txt2, encoding='utf-8')
                    n += 1
                break
    return n

print('arrays widened: %d' % repair_arrays())
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
