#!/usr/bin/env python3
"""Step-4 (part 2): rewrite this-relative raw offsets INSIDE the tree's pending
pseudocode blocks, in place.

User contract (2026-09-21): step 4 covers ALL of the IDA decompilation in the
tree -- including pending blocks -- so that step-6 translation never burns LLM
effort on per-function offset archaeology. The verbatim-cache concern does not
apply to the in-tree blocks: the verifier's IDA side reads the snapshot
(decompile-results/full_export) / ida_cache, never the tree block; replace_body
swaps the whole block; INSIDE_MARKER stays put.

Same rewrite core as rewrite_member_refs.py (member table + width-agnostic
offset hit). This-class resolution: def-line `Cls::Name` first (main-tree
member defs), then the shared fallback (type_map this -> manifest cls ->
__thiscall sig). Blocks with no resolvable class stay raw (mechanical).

Deterministic; re-runnable (idempotent: already-rewritten refs don't match the
raw patterns again).
"""
import json, re, sys
from pathlib import Path
from collections import defaultdict

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
INSIDE_MARKER = ("// [IDA decompile] original pseudocode - translation "
                 "pending (final goal)")

print('loading tables...', flush=True)
mtab = json.loads((ROOT / 'anchors/csp_canon_members.json').read_text(encoding='utf-8'))
man = json.loads((ROOT / 'anchors/csp_canon_manifest.json').read_text(encoding='utf-8'))
try:
    tmap = json.loads((ROOT / 'type_map.json').read_text(encoding='utf-8'))['type_map']
except Exception:
    tmap = {}

NOT_A_CLASS = {'int', 'VOID_PTR', 'unknown', 'float', 'char', 'uint64_t',
               'wchar_t', 'unsigned int', 'unsigned char', 'unsigned short',
               'long', 'double', 'long long', 'bool', '_BOOL'}

def mem_of(cls, off):
    e = mtab.get(cls)
    if not e:
        return None
    m = e['members'].get(str(off))
    if m and m.get('name'):
        return m['name']
    for alt in (off * 4, off // 4 if off % 4 == 0 else None):
        if alt is None or alt == off:
            continue
        m = e['members'].get(str(alt))
        if m and m.get('name'):
            return m['name']
    return None

def this_class_fallback(addr):
    k = '0x%08X:this' % addr
    v = tmap.get(k)
    if v and v.get('type') and v['type'] not in NOT_A_CLASS:
        return v['type']
    m = man.get('0x%08X' % addr)
    if m and m.get('cls') and m['cls'] not in NOT_A_CLASS:
        return m['cls']
    if m and m.get('name') and '::' in m['name']:
        return m['name'].split('::')[0]
    return None

PATTERNS = [
    re.compile(r'\*\(\s*(?:(_DWORD|_BYTE|_WORD|_QWORD|int|unsigned int|char|unsigned char|unsigned short|long long|unsigned long long)\s*\*\s*\)\s*)?this\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)'),
    re.compile(r'\*\(\s*\(\s*(_DWORD|_BYTE|_WORD|_QWORD)\s*\*\s*\)this\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)'),
]

def rewrite(text, cls, scaled):
    if not mtab.get(cls):
        return text, 0
    count = 0
    def sub(m):
        nonlocal count
        n = int(m.group(2), 0)
        for off in ([n * 4, n] if scaled else [n, n * 4]):
            name = mem_of(cls, off)
            if name is not None:
                count += 1
                return 'this->%s' % name
        return m.group(0)
    text = PATTERNS[0].sub(sub, text)
    text = PATTERNS[1].sub(sub, text)
    return text, count

ADDR_RE = re.compile(r'//\s*(?:IDA\s+)?0x([0-9A-Fa-f]{6,8})\s*$')
DEF_QUAL_RE = re.compile(r'([A-Za-z_]\w*)::\s*~?[A-Za-z_]\w*\s*\(')

by_tree = defaultdict(lambda: [0, 0, 0])  # blocks, blocks_changed, refs
for p in sorted(SRC.rglob('*.cpp')):
    rel = str(p.relative_to(ROOT)).replace('\\', '/')
    tree = ('e4' if '/e4/' in rel else
            'gap2' if ('gap2' in rel or '/_gap2/' in rel) else 'main')
    try:
        lines = p.read_text(encoding='latin-1').split('\n')
    except OSError:
        continue
    changed = False
    i = 0
    while i < len(lines):
        if lines[i].rstrip('\r') != INSIDE_MARKER:
            i += 1
            continue
        # block end: first balanced-brace line at/after the marker
        depth, started, k = 0, False, i
        while k < len(lines):
            if '{' in lines[k]:
                started = True
            if started:
                depth += lines[k].count('{') - lines[k].count('}')
                if depth <= 0:
                    break
            k += 1
        if not started or depth > 0:
            i += 1
            continue
        by_tree[tree][0] += 1
        # this-class: def-line qualifier first, then addr fallback
        cls = None
        for j in range(i - 1, max(i - 8, -1), -1):
            ln = lines[j].strip()
            if ln.startswith('//') and ADDR_RE.search(ln):
                m = ADDR_RE.search(ln)
                try:
                    cls = this_class_fallback(int(m.group(1), 16))
                except ValueError:
                    cls = None
                break
            dm = DEF_QUAL_RE.search(ln)
            if dm and '(' in ln and not ln.startswith('#'):
                cls = dm.group(1)
                break
        if cls:
            # scaled detection: nested IDA def declares `_DWORD *this`
            window = '\n'.join(lines[i + 1:min(i + 6, k + 1)])
            scaled = ('_DWORD *this' in window) or ('_DWORD*this' in window)
            body = '\n'.join(lines[i + 1:k])
            new_body, cnt = rewrite(body, cls, scaled)
            if cnt:
                lines[i + 1:k] = new_body.split('\n')
                by_tree[tree][1] += 1
                by_tree[tree][2] += cnt
                changed = True
        i = k + 1
    if changed:
        p.write_bytes('\n'.join(lines).encode('latin-1'))

for tree, (n, c, r) in sorted(by_tree.items()):
    print('%-6s blocks=%d rewritten=%d refs=%d' % (tree, n, c, r))
print('total refs rewritten:',
      sum(v[2] for v in by_tree.values()))
print('DONE')
