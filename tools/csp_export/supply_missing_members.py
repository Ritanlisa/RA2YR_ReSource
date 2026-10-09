#!/usr/bin/env python3
"""Supply canon member/method declarations into tree-side class definitions.

Mines a build log for C2039 `"NAME": is not a member of "gamemd::CLASS"`
(Chinese or English MSVC wording). For every unique (NAME, CLASS) pair:

  1. Canon truth: locate NAME's declaration line(s) inside CLASS's block in
     src/csp_canon/classes.hpp (the member/method table rendered from the
     canon universe). Verbatim reuse -- offsets/types are canonical.
  2. Tree definition: find the non-e4/non-canon header defining
     `class|struct CLASS ... {` (exactly one -> patch; zero -> "no-def"
     residual for the header-generation wave; several -> conflict residual).
  3. Insert the canon line(s) before the class's closing `};` -- idempotent
     (skip if NAME already appears in the class body).

Families routed elsewhere (NOT supplied here):
  - `vfptr*` members: R4 OO-ification queue (vtable access points must be
    eliminated, never reified as data members).
  - parameter-name leaks (`aP1` etc.): body-regenerator defects.

Usage: python tools/csp_export/supply_missing_members.py <build.log> [--apply]
"""
import json
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
CANON_HPP = ROOT / 'src' / 'csp_canon' / 'classes.hpp'
MTAB_PATH = ROOT / 'anchors' / 'csp_canon_members.json'
ML_PATH = ROOT / 'tools' / 'member_lookup.json'
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

if not LOG:
    print('usage: supply_missing_members.py <build.log> [--apply]', file=sys.stderr)
    sys.exit(2)

TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace')
TRIPLE_RE = re.compile(
    r'(D:\\RA2YR_ReSource\\src\\[^(:]+)[^(]*\(\d+,\d+\): error C2039: '
    r'["\u201c]([\w]+)["\u201d][^"\u201c]*["\u201c]'
    r'(?:gamemd::|ra2::game::)?([\w]+)["\u201d]')
# (member, class) -> {'e4': n, 'tree': n} failing-TU universe counts
pair_uni = defaultdict(lambda: {'e4': 0, 'tree': 0})
for f, name, cls in TRIPLE_RE.findall(TXT):
    uni = 'e4' if '\\e4\\' in f else 'tree'
    pair_uni[(name, cls)][uni] += 1
pairs = set(pair_uni)

# family routing
VF_PTR = re.compile(r'^vfptr')
PARAM_LEAK = re.compile(r'^(aP\d+|a\d+|v\d+)$')

# ---------------------------------------------------------------- canon body


def load_canon_bodies():
    """{class_name: [decl lines inside the class block]} from classes.hpp."""
    bodies = {}
    cur = None
    buf = []
    cls_start = re.compile(r'^(?:class|struct)\s+(\w+)[^{]*\{')
    with open(CANON_HPP, encoding='utf-8', errors='replace') as f:
        for ln in f:
            if cur is None:
                m = cls_start.match(ln)
                if m:
                    cur = m.group(1)
                    buf = []
                continue
            if ln.startswith('};'):
                bodies.setdefault(cur, buf)
                cur = None
                continue
            buf.append(ln.rstrip('\n'))
    return bodies


def load_mtab_offsets():
    d = json.loads(MTAB_PATH.read_text(encoding='utf-8'))
    return d


CANON_BODIES = load_canon_bodies()
MTAB = load_mtab_offsets()
ML_DATA = json.loads(ML_PATH.read_text(encoding='utf-8'))

# ------------------------------------------------------------ tree def index

DEF_RE = re.compile(r'^(?:class|struct)\s+(\w+)\s*(?::[^{;]*)?\s*(\{)?\s*$'
                    r'|^(?:class|struct)\s+(\w+)\s*(?::[^{;]*)?\{', re.M)
FWD_RE = re.compile(r'^(?:class|struct)\s+(\w+)\s*;')


def _class_span(text, start):
    """Return (class_name, body_start, close_off) for a definition whose
    brace may sit on the decl line or a following line."""
    m = DEF_RE.match(text, start)
    if not m:
        return None
    name = m.group(1) or m.group(3)
    if m.group(2) is None:  # brace on a later line
        bl = text.find('{', m.end())
        nl = text.find('\n', m.end())
        if bl < 0 or (0 <= nl < bl):
            return None
    else:
        bl = m.start(2)
    close = text.find('\n};', bl)
    if close < 0:
        return None
    return (name, bl, close)


def build_tree_def_index(want):
    """{(class, universe): [(path, body_text)]} for definitions only.
    universe: 'e4' (headers under src/e4/) or 'tree' (everything else
    generated-excluded). The failing TU only sees its own universe's
    definition, so supply targets are selected per universe."""
    idx = defaultdict(list)
    for p in sorted(SRC.rglob('*.hpp')):
        rel = p.relative_to(ROOT).as_posix()
        if rel.startswith(('src/csp_canon/', 'src/_generated/')):
            continue
        uni = 'e4' if rel.startswith('src/e4/') else 'tree'
        try:
            t = p.read_text(encoding='utf-8', errors='replace')
        except OSError:
            continue
        for m in DEF_RE.finditer(t):
            nm = m.group(1) or m.group(3)
            if nm in want and _class_span(t, m.start()):
                idx[(nm, uni)].append((rel, t))
    return idx


want = {cls for _n, cls in pairs}
tree_defs = build_tree_def_index(want)

# ------------------------------------------------------------------- supply

supply = defaultdict(list)      # (cls, rel_path) -> [canon lines]
no_def = []                     # (name, cls) with no definition in the
                                # failing TU's universe
conflict = []
no_canon = []
routed_vfptr = 0
routed_param = 0
already = 0

for name, cls in sorted(pairs):
    if VF_PTR.match(name):
        routed_vfptr += 1
        continue
    if PARAM_LEAK.match(name):
        routed_param += 1
        continue
    # canon truth: decl lines in the canon class body mentioning NAME
    body = CANON_BODIES.get(cls)
    cand = []
    if body:
        pat = re.compile(r'\b%s\b' % re.escape(name))
        cand = [ln.strip() for ln in body if pat.search(ln) and ln.rstrip().endswith(';')]
    if not cand:
        # fallback 1: members table entry (render a fresh decl)
        ent = MTAB.get(cls, {}).get('members', {})
        for off, m in ent.items():
            if isinstance(m, dict) and m.get('name') == name:
                cand.append('%s %s;  // 0x%s' % (m.get('type') or 'unsigned int',
                                                 name, off))
    if not cand:
        # fallback 1b: member_lookup reverse index (legacy til-synced names)
        for off, m in ML_DATA.get(cls, {}).items():
            if isinstance(m, dict) and m.get('name') == name:
                cand.append('%s %s;  // 0x%s (ml)' %
                            (m.get('type') or 'unsigned int', name, off))
    if not cand:
        # fallback 2: offset-encoded placeholder names carry their own
        # offset truth. Explicit family table (no free-suffix guessing:
        # 'Name' would parse as 0xE).
        HEX = r'[0-9A-Fa-f]+'
        FAM = ('^q(%s)$|^u8_(%s)$|^u16_(%s)$|^u32_(%s)$|^ptr_(%s)$'
               '|^flt_(%s)$|^dbl_(%s)$|^m_(%s)$|^__pad_(%s)$|^__tail_(%s)$'
               '|^\\w+_field_0x(%s)$|^\\w+_field_(%s)$') % ((HEX,) * 12)
        m = re.match(FAM, name)
        if m:
            try:
                off = int(next(g for g in m.groups() if g), 16)
            except (StopIteration, ValueError):
                m = None
        if m:
            w = 4
            nl = name.lower()
            if nl.startswith(('u8_', '__pad_', '__tail_')):
                w = 1
            elif nl.startswith('u16_'):
                w = 2
            elif nl.startswith('dbl_'):
                w = 8
            t = ('double' if w == 8 else
                 'unsigned short' if w == 2 else
                 'unsigned char' if w == 1 else
                 'unsigned int')
            if off % w:
                t = 'unsigned char'
            if nl.startswith('ptr_'):
                t = 'void *'
            if nl.startswith('flt_'):
                t, w = 'float', 4
            cand.append('%s %s;  // 0x%X (offset-truth supply)' % (t, name, off))
    if not cand:
        no_canon.append((name, cls))
        continue
    uni = ('e4' if pair_uni[(name, cls)]['e4'] >=
           pair_uni[(name, cls)]['tree'] else 'tree')
    defs = tree_defs.get((cls, uni), [])
    if not defs:
        no_def.append((name, cls, uni))
        continue
    if len(defs) > 1:
        conflict.append((name, cls, [d[0] for d in defs]))
        continue
    rel, text = defs[0]
    # class body span (brace may sit on the decl line or a following line)
    m = DEF_RE.search(text)
    span = _class_span(text, m.start()) if m else None
    if not span:
        conflict.append((name, cls, ['unparseable body in ' + rel]))
        continue
    _nm, _bl, close = span
    body_txt = text[_bl:close]
    if re.search(r'\b%s\b' % re.escape(name), body_txt):
        already += 1
        continue
    indent = '    '
    for ln in cand:
        supply[(cls, rel)].append(indent + ln)

# ------------------------------------------------------------------- write

inserted = 0
files_touched = 0
for (cls, rel), lines in sorted(supply.items()):
    p = ROOT / rel
    text = p.read_text(encoding='utf-8', errors='replace')
    m = DEF_RE.search(text)
    span = _class_span(text, m.start()) if m else None
    if not span:
        continue
    _nm, _bl, close = span
    block = '\n'.join(lines) + '\n'
    if APPLY:
        new = text[:close] + '\n' + block.rstrip('\n') + text[close:]
        p.write_text(new, encoding='utf-8', newline='')
    inserted += len(lines)
    files_touched += 1

print(f"pairs: {len(pairs)} unique | supply blocks: {len(supply)} "
      f"({inserted} lines into {files_touched} headers)")
print(f"routed: vfptr->{routed_vfptr} (R4 OO queue), param-leak->{routed_param}")
print(f"already-present: {already} | no-canon-truth: {len(no_canon)} "
      f"| no-tree-def: {len(no_def)} | conflicts: {len(conflict)}")
for n, c, u in no_def[:10]:
    print(f"  no-def[{u}]: {c} (member {n})")
for n, c, fl in conflict[:10]:
    print(f"  conflict: {c} (member {n}) in {fl}")
for n, c in no_canon[:10]:
    print(f"  no-canon: {c}.{n}")
Path(ROOT / '.omo' / 'supply_missing_members_report.txt').write_text(
    'no-def classes:\n' + '\n'.join(sorted({f'{c} [{u}]' for n, c, u in no_def})) +
    '\n\nconflicts:\n' + '\n'.join(f'{c} {n} {fl}' for n, c, fl in conflict) +
    '\n\nno-canon:\n' + '\n'.join(f'{c}.{n}' for n, c in no_canon),
    encoding='utf-8')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
