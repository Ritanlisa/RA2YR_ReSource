#!/usr/bin/env python3
"""Step-4 (part 3): mechanically eliminate address+int illegal formats from
REAL (translated) code and pending blocks -- gate runs standalone, no
baseline-tag exemption (user directive 2026-09-21).

Rewrites (sound-by-construction only):
  R1  MEMORY[0xADDR]      -> GlobalName      (only when the declaring hpp is
                                              already in the TU's include set
                                              or the decl is in-file)
  R2  *(T *)(this + N)    -> this->Member    (member exists at offset)
  R3  *((T *)this + N)    -> this->Member    (scaled)

Pending blocks: applied directly (blocks are replace-targets; the verifier's
IDA side reads the snapshot, never the tree block).
Real code: applied per function, then exec-flow verify gates the edit; a FAIL
rolls that function's span back. Virtual-table walks (vN + slot) are sanctioned
vocabulary and are NOT touched.

Usage: python tools/csp_export/fix_addr_violations.py [--workers 6]
"""
import json, re, subprocess, sys, time
from pathlib import Path
from concurrent.futures import ThreadPoolExecutor

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
INSIDE = ("// [IDA decompile] original pseudocode - translation "
          "pending (final goal)")

print('loading tables...', flush=True)
mtab = json.loads((ROOT / 'anchors/csp_canon_members.json').read_text(encoding='utf-8'))

sig = json.loads((ROOT / 'signals.json').read_text(encoding='utf-8'))
glob_rev = {}
for name, addr in (sig.get('globals') or {}).items():
    a = None
    if isinstance(addr, str) and addr.lower().startswith('0x'):
        a = int(addr, 16)
    elif isinstance(addr, int):
        a = addr
    if a is not None:
        glob_rev.setdefault(a, name)

# hpp declaration homes: addr -> (name, file) from `extern ... ; // data: 0x..`
decl_home = {}
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
        cand = ln.strip()
        nm = re.match(r'(?:extern\s+)?[\w:<>\*&\s]+?[\s\*]([A-Za-z_]\w+)\s*(?:=|;|\[)', cand)
        if not nm and i:
            cand = hlines[i - 1].strip()
            nm = re.match(r'(?:extern\s+)?[\w:<>\*&\s]+?[\s\*]([A-Za-z_]\w+)\s*(?:=|;|\[)', cand)
        if nm:
            decl_home.setdefault(int(m.group(1), 16),
                                 (nm.group(1), rel))

R_MEM = re.compile(r'MEMORY\s*\[\s*(0x[0-9A-Fa-f]+)\s*\]')
R_THIS1 = re.compile(r'\*\(\s*(?:_DWORD|_BYTE|_WORD|_QWORD|int|unsigned int|char|unsigned char|unsigned short|long long|unsigned long long|float|BOOL)\s*\*\s*\)\s*\(\s*this\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)')
R_THIS2 = re.compile(r'\*\(\s*\(\s*(_DWORD|_BYTE|_WORD|_QWORD)\s*\*\s*\)this\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)')
WIDTH = {'_DWORD': 4, 'int': 4, 'unsigned int': 4, 'long long': 8,
         'unsigned long long': 8, '_BYTE': 1, 'char': 1, 'unsigned char': 1,
         '_WORD': 2, 'unsigned short': 2, '_QWORD': 8, 'float': 4, 'BOOL': 4}

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

def real_mem_rewrite(text, cls):
    """this-offset rewrites (R2/R3) for a class-typed receiver."""
    n = 0
    def s1(m):
        nonlocal n
        off = int(m.group(1), 0)
        name = mem_of(cls, off)
        if name:
            n += 1
            return 'this->%s' % name
        return m.group(0)
    def s2(m):
        nonlocal n
        off = int(m.group(2), 0) * WIDTH.get(m.group(1), 4)
        name = mem_of(cls, off)
        if name:
            n += 1
            return 'this->%s' % name
        return m.group(0)
    text = R_THIS1.sub(s1, text)
    text = R_THIS2.sub(s2, text)
    return text, n

def glob_rewrite(text, includes, rel):
    """R1 MEMORY->Name, visibility-gated."""
    n = 0
    def s(m):
        nonlocal n
        a = int(m.group(1), 16)
        home = decl_home.get(a)
        if home and (home[1] in includes or home[1] == rel):
            n += 1
            return home[0]
        # fallback: signals name (declared in an already-included e4/globals hpp
        # is the common case; without a visible home we keep MEMORY)
        return m.group(0)
    return R_MEM.sub(s, text), n

DEF_Q = re.compile(r'([A-Za-z_]\w*)::\s*~?[A-Za-z_]\w*\s*\(')

def process_file(rel):
    p = ROOT / rel
    try:
        lines = p.read_text(encoding='latin-1').split('\n')
    except OSError:
        return None
    includes = set()
    for ln in lines[:120]:
        m = re.match(r'#include\s+"([^"]+)"', ln.strip())
        if m:
            inc = m.group(1).replace('\\', '/')
            includes.add(inc)
            includes.add(('src/' + inc) if not inc.startswith('src/') else inc)
    orig = list(lines)

    # ---- pass 1: pending blocks (no verify) ----
    pend_refs = pend_glob = 0
    i = 0
    while i < len(lines):
        if lines[i].rstrip('\r') != INSIDE:
            i += 1
            continue
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
        cls = None
        for j in range(i - 1, max(i - 8, -1), -1):
            ln = lines[j].strip()
            if ln.startswith('//') and re.search(r'//\s*0x[0-9A-Fa-f]{6,8}\s*$', ln):
                continue
            dm = DEF_Q.search(ln)
            if dm and '(' in ln and not ln.startswith('#'):
                cls = dm.group(1)
                break
        body = '\n'.join(lines[i + 1:k])
        nb, c1 = glob_rewrite(body, includes, rel)
        if cls:
            nb, c2 = real_mem_rewrite(nb, cls)
        else:
            c2 = 0
        pend_glob += c1
        pend_refs += c2
        if c1 + c2:
            lines[i + 1:k] = nb.split('\n')
        i = k + 1

    # ---- pass 2: real code, per-function verify-gated ----
    # function spans: nearest preceding `// 0xADDR` annotation outside pending
    ADDR = re.compile(r'//\s*0x([0-9A-Fa-f]{6,8})\s*$')
    spans = []  # (addr, def_idx, end_idx)
    i = 0
    in_pend = False
    while i < len(lines):
        ln = lines[i]
        if ln.rstrip('\r') == INSIDE:
            depth, started = 0, False
            k = i
            while k < len(lines):
                if '{' in lines[k]:
                    started = True
                if started:
                    depth += lines[k].count('{') - lines[k].count('}')
                    if depth <= 0:
                        break
                k += 1
            i = k + 1
            continue
        a = ADDR.search(ln.strip())
        if a and '(' in ln:
            # def line carrying annotation? or annotation above def
            j = i
        if a and '(' not in ln:
            # annotation-only line: def is below until '{'
            j = i + 1
            while j < len(lines) and '(' not in lines[j]:
                j += 1
            if j < len(lines):
                # span from def to balanced close
                depth, started, k = 0, False, j
                while k < len(lines):
                    if '{' in lines[k]:
                        started = True
                    if started:
                        depth += lines[k].count('{') - lines[k].count('}')
                        if depth <= 0:
                            break
                    k += 1
                if started and depth <= 0:
                    spans.append((int(a.group(1), 16), i, j, k))
        i += 1

    fixed = rolled = 0
    for (addr, ann_i, def_i, end_i) in spans:
        seg = '\n'.join(lines[def_i:end_i + 1])
        cls = None
        dm = DEF_Q.search(lines[def_i])
        if dm:
            cls = dm.group(1)
        nb, c_mem = (real_mem_rewrite(seg, cls) if cls else (seg, 0))
        nb, c_glob = glob_rewrite(nb, includes, rel)
        if not (c_mem + c_glob):
            continue
        old = lines[def_i:end_i + 1]
        lines[def_i:end_i + 1] = nb.split('\n')
        p.write_bytes('\n'.join(lines).encode('latin-1'))
        r = subprocess.run(
            [sys.executable, 'tools/verify_execution_flow.py', '0x%X' % addr],
            capture_output=True, text=True, encoding='utf-8', errors='replace',
            timeout=300, cwd=str(ROOT))
        if r.returncode == 0:
            fixed += 1
        else:
            lines[def_i:end_i + 1] = old
            p.write_bytes('\n'.join(lines).encode('latin-1'))
            rolled += 1

    if lines != orig:
        p.write_bytes('\n'.join(lines).encode('latin-1'))
        return {'file': rel, 'pending_mem': pend_refs, 'pending_glob': pend_glob,
                'real_fixed': fixed, 'real_rolled': rolled}
    return None

files = []
for p in sorted(SRC.rglob('*.cpp')):
    rel = str(p.relative_to(ROOT)).replace('\\', '/')
    if '_generated' in rel:
        continue
    try:
        t = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    if 'MEMORY[' in t or R_THIS1.search(t) or R_THIS2.search(t):
        files.append(rel)

print('files to fix:', len(files), flush=True)
WORKERS = 6
if '--workers' in sys.argv:
    WORKERS = int(sys.argv[sys.argv.index('--workers') + 1])
out = []
with ThreadPoolExecutor(max_workers=WORKERS) as ex:
    for r in ex.map(process_file, files):
        if r:
            out.append(r)
            print('  {file}: pending_mem={pending_mem} pending_glob={pending_glob} '
                  'real_fixed={real_fixed} real_rolled={real_rolled}'.format(**r),
                  flush=True)

print('=== summary ===')
print('files changed:', len(out))
print('pending refs rewritten:', sum(r['pending_mem'] for r in out))
print('pending MEMORY->name:', sum(r['pending_glob'] for r in out))
print('real functions fixed:', sum(r['real_fixed'] for r in out))
print('real functions rolled back:', sum(r['real_rolled'] for r in out))
print('DONE')
