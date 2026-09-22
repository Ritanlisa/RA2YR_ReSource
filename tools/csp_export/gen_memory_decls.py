#!/usr/bin/env python3
"""Step-4 (part 5): ZERO residual MEMORY[0xX] -- generate declarations for
every still-unresolved global address and rewrite all remaining sites.

User directive 2026-09-21: MEMORY belongs to the gate and must not survive
Step 4. The visibility excuse is gone: declarations are GENERATED.

Decl typing policy (sound-by-construction):
  1. CSP global_types.json type (canon class ptr / primitive) -> typed decl.
  2. else -> `extern unsigned char DataGlobal_XXXXXXXX[];` (the established
     DataGlobal object-at-address convention; array decay == address, matches
     IDA label/value/subscript shapes; proven by 4,691 earlier conversions).

Decl home: src/e4/e4_globals.hpp (generated E1, compiles standalone, already
included by every e4 TU). TUs lacking the include get it inserted mechanically.
"""
import json, re
from pathlib import Path
from collections import defaultdict

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
E4G = SRC / 'e4' / 'e4_globals.hpp'

R_MEM = re.compile(r'\bMEMORY\s*\[\s*(0x[0-9A-Fa-f]+)\s*\]')

print('loading tables...', flush=True)
sig = json.loads((ROOT / 'signals.json').read_text(encoding='utf-8'))
glob_name = {}
for name, addr in (sig.get('globals') or {}).items():
    a = None
    if isinstance(addr, str) and addr.lower().startswith('0x'):
        a = int(addr, 16)
    elif isinstance(addr, int):
        a = addr
    if a is not None:
        glob_name.setdefault(a, name)

try:
    gt = json.loads((ROOT / 'anchors/global_types.json').read_text(encoding='utf-8'))
except Exception:
    gt = {}

declared = set()
decl_name = {}
for p in sorted(SRC.rglob('*.hpp')):
    try:
        txt = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    for m in re.finditer(r'//\s*data:\s*0x([0-9A-Fa-f]{6,8})', txt):
        declared.add(int(m.group(1), 16))
for p in sorted(SRC.rglob('*.hpp')):
    rel = str(p.relative_to(ROOT)).replace('\\', '/')
    try:
        hlines = p.read_text(encoding='latin-1', errors='replace').split('\n')
    except OSError:
        continue
    for i, ln in enumerate(hlines):
        m = re.search(r'//\s*data:\s*0x([0-9A-Fa-f]{6,8})', ln)
        if not m:
            continue
        for cand_ln in (ln.strip(), (hlines[i - 1].strip() if i else '')):
            nm = re.match(r'(?:extern\s+)?[\w:<>\*&\s]+?[\s\*]([A-Za-z_]\w+)\s*(?:=|;|\[)', cand_ln)
            if nm:
                decl_name.setdefault(int(m.group(1), 16), (nm.group(1), rel))
                break

# ---- collect residual addrs actually used in .cpp MEMORY sites ----
used = set()
for p in sorted(SRC.rglob('*.cpp')):
    try:
        txt = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    for m in R_MEM.finditer(txt):
        used.add(int(m.group(1), 16))
residual = sorted(a for a in used if a not in declared)
print('residual MEMORY addrs:', len(residual))

# ---- build generated declarations ----
PRIM = {'int': 'int', 'unsigned int': 'unsigned int', 'char': 'char',
        'unsigned char': 'unsigned char', 'short': 'short',
        'unsigned short': 'unsigned short', 'long': 'long', 'float': 'float',
        'double': 'double', 'bool': 'bool', 'void*': 'void*',
        '_DWORD': 'unsigned int', '_BYTE': 'unsigned char', '_WORD': 'unsigned short'}
new_decls = []
typed_n = 0
for a in residual:
    name, rel = decl_name.get(a, (None, None))
    if name is None:
        name = glob_name.get(a) or ('DataGlobal_%08X' % a)
    k = '0x%08X' % a
    rec = gt.get(k) or gt.get('0x%X' % a) or {}
    t = rec.get('type') or rec.get('real_type')
    if t and re.match(r'^[A-Za-z_]\w*$', str(t).strip().rstrip('*')):
        base = str(t).strip()
        star = '*' if base.endswith('*') or rec.get('is_pointer') else ''
        if not star:
            star = ' '
        line = 'extern %s%s%s;  // data: 0x%08X (G29.5 generated, CSP type=%s)' % (
            base.rstrip('*'), (' *' if '*' in (base + star) else ' '), name, a, base)
        line = 'extern %s *%s;  // data: 0x%08X (G29.5 generated, CSP type=%s)' % (
            base.rstrip('*'), name, a, base)
        typed_n += 1
    else:
        line = 'extern unsigned char %s[];  // data: 0x%08X (G29.5 generated)' % (name, a)
    new_decls.append(line)

# ---- append to e4_globals.hpp (dedupe by name against existing) ----
if new_decls:
    existing = set()
    for ln in E4G.read_text(encoding='latin-1', errors='replace').split('\n'):
        m = re.match(r'extern\s+[\w\s\*]+?\s+([A-Za-z_]\w*)', ln.strip())
        if m:
            existing.add(m.group(1))
    add = [ln for ln in new_decls
           if re.match(r'extern\s+[\w\s\*]+?\s+([A-Za-z_]\w*)', ln).group(1)
           not in existing]
    txt = E4G.read_text(encoding='latin-1', errors='replace')
    if not txt.endswith('\n'):
        txt += '\n'
    txt += '// ---- G29.5 generated declarations for residual MEMORY sites ----\n' \
        + '\n'.join(add) + '\n'
    E4G.write_text(txt, encoding='latin-1')
    print('generated decls appended:', len(add), '(CSP-typed: %d)' % typed_n)

# ---- rewrite remaining MEMORY sites (both regions), ensure include ----
home_rel = 'src/e4/e4_globals.hpp'
changed = sites = 0
for p in sorted(SRC.rglob('*.cpp')):
    rel = str(p.relative_to(ROOT)).replace('\\', '/')
    try:
        txt = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    if not R_MEM.search(txt):
        continue
    new_txt, n = R_MEM.subn(
        lambda m: decl_name.get(int(m.group(1), 16), (None,))[0]
        or glob_name.get(int(m.group(1), 16))
        or ('DataGlobal_%08X' % int(m.group(1), 16)),
        txt)
    if n and home_rel not in txt and '"e4/e4_globals.hpp"' not in txt:
        # ensure the include (after the last existing include)
        lines = new_txt.split('\n')
        last_inc = max((i for i, ln in enumerate(lines[:120])
                        if ln.strip().startswith('#include')), default=-1)
        lines.insert(last_inc + 1, '#include "e4/e4_globals.hpp"')
        new_txt = '\n'.join(lines)
    if n:
        p.write_bytes(new_txt.encode('latin-1'))
        changed += 1
        sites += n
print('files rewritten:', changed, 'MEMORY sites converted:', sites)
print('DONE')
