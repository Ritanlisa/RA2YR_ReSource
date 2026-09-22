#!/usr/bin/env python3
"""Step-4 (part 7): full pending-block normalization to near-C++ form.

Per block, mechanically:
  1. signature: nested IDA def loses `__thiscall` and the explicit `this`
     parameter; return type from the canon declaration when anchored
     (csp_canon classes.hpp / functions.hpp, addr-keyed).
  2. type environment (deterministic, no invention):
       this            -> enclosing class (def line / manifest)
       aN params       -> type_map `0xADDR:paramK` class types (position-mapped)
       `vN = (T *)...` -> cast hint
       `vN = R->M;`    -> type_map member-result class type
       `vN = vM;`      -> copy
     (assignment scan matches anywhere in a line -- merged declarations
     included)
  3. pointer+int coverage: `*(T *)(R + N)` / `*((T *)R + N)` with a
     class-typed receiver R become `R->Member` (canon member table).
  4. local retype: `int vN;` and merged `int vN = ...;` become `Cls *vN ...`.

Idempotent; deterministic; reports totals.
"""
import json, re
from pathlib import Path
from collections import defaultdict

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
INSIDE = ("// [IDA decompile] original pseudocode - translation "
          "pending (final goal)")

print('loading tables...', flush=True)
mtab = json.loads((ROOT / 'anchors/csp_canon_members.json').read_text(encoding='utf-8'))
man = json.loads((ROOT / 'anchors/csp_canon_manifest.json').read_text(encoding='utf-8'))
tmap = {}
try:
    tmap = json.loads((ROOT / 'type_map.json').read_text(encoding='utf-8'))['type_map']
except Exception:
    pass

# canon return types: addr -> ret (from csp_canon headers)
canon_ret = {}
for hp in ('src/csp_canon/classes.hpp', 'src/csp_canon/functions.hpp'):
    fp = ROOT / hp
    if not fp.exists():
        continue
    for ln in fp.read_text(encoding='utf-8', errors='replace').split('\n'):
        m = re.search(r'//\s*0x([0-9A-Fa-f]{6,8})\b', ln)
        if not m or '(' not in ln:
            continue
        try:
            a = int(m.group(1), 16)
        except ValueError:
            continue
        if a in canon_ret:
            continue
        im = re.match(r'^\s*(.+?)\s*~?[A-Za-z_]\w*\s*\(', ln.strip())
        if im:
            canon_ret[a] = im.group(1).strip()

PRIM = {'int', 'unsigned int', 'void', 'char', 'unsigned char', 'short',
        'unsigned short', 'long', 'unsigned long', 'float', 'double', 'bool',
        'BOOL', '_DWORD', '_BYTE', '_WORD', '_QWORD', '__int64',
        'unsigned __int64', 'VOID_PTR', 'unknown', 'void*', 'size_t'}

ASSIGN_ANY = re.compile(r'\b([a-z]\w*)\s*=\s*([^;=][^;]*);')
CAST_HINT = re.compile(r'^\(\s*([A-Za-z_]\w*)\s*\*\s*\)')
MEMBER_RD = re.compile(r'^([a-z]\w*)->([A-Za-z_]\w*)$')
WIDTH = {'_DWORD': 4, 'int': 4, 'unsigned int': 4, 'long long': 8,
         'unsigned long long': 8, '_BYTE': 1, 'char': 1, 'unsigned char': 1,
         '_WORD': 2, 'unsigned short': 2, '_QWORD': 8, 'float': 4, 'BOOL': 4}


def is_cls(t):
    return bool(t) and t not in PRIM and re.match(r'^[A-Za-z_]\w*$', str(t))


def mem_name(cls, off):
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


R_DEREF = re.compile(
    r'\*\(\s*([A-Za-z_][\w\s\*]*?)\s*\*\s*\)\s*\(\s*([a-z]\w*)\s*\+\s*'
    r'(0x[0-9A-Fa-f]+|\d+)\s*\)')
R_INDEX = re.compile(
    r'\*\(\s*\(\s*([A-Za-z_][\w\s\*]*?)\s*\*\s*\)([a-z]\w*)\s*\+\s*'
    r'(0x[0-9A-Fa-f]+|\d+)\s*\)')


def build_types(body, cls, addr):
    env = {}
    if cls:
        env['this'] = cls
    ai = '0x%08X' % addr if addr else None
    # params by position: first non-this param name -> param0, ...
    dm = re.search(r'\b\w+\s*\(([^)]*)\)', body)
    if dm and ai:
        plist = [s.strip() for s in dm.group(1).split(',') if s.strip()]
        pn = 0
        for pspec in plist:
            if re.fullmatch(r'(?:\w+\s*\*\s*)?this', pspec):
                continue
            nm = re.match(r'(?:[A-Za-z_][\w\s\*]*?\s)\*?\s*([A-Za-z_]\w*)$',
                          pspec)
            if nm:
                v = tmap.get('%s:param%d' % (ai, pn)) or {}
                t = v.get('type')
                if is_cls(t):
                    env[nm.group(1)] = t
            pn += 1
    for _ in range(3):
        grew = False
        for ln in body.split('\n'):
            m = ASSIGN_ANY.search(ln)
            if not m:
                continue
            v, rhs = m.group(1), m.group(2).strip()
            if v in env:
                continue
            cm = CAST_HINT.match(rhs)
            if cm and is_cls(cm.group(1)):
                env[v] = cm.group(1)
                grew = True
                continue
            if rhs == 'this' and cls:
                env[v] = cls
                grew = True
                continue
            rm = MEMBER_RD.match(rhs)
            if rm and ai and rm.group(1) in env:
                rc = env[rm.group(1)]
                off = None
                for o, info in (mtab.get(rc) or {}).get('members', {}).items():
                    if info.get('name') == rm.group(2):
                        off = int(o)
                        break
                if off is not None:
                    for key in ('%s:this.member(0x%X)' % (ai, off),
                                '%s:param0.member(0x%X)' % (ai, off),
                                '%s:eax.member(0x%X)' % (ai, off),
                                '%s:esi.member(0x%X)' % (ai, off)):
                        t = (tmap.get(key) or {}).get('type')
                        if is_cls(t):
                            env[v] = t
                            grew = True
                            break
                if v in env:
                    continue
            vm = re.match(r'^\(\s*[A-Za-z_]\w*\s*\*\s*\)?\s*([a-z]\w*)$', rhs)
            if vm and vm.group(1) in env:
                env[v] = env[vm.group(1)]
                grew = True
                continue
            if re.fullmatch(r'[a-z]\w*', rhs) and rhs in env:
                env[v] = env[rhs]
                grew = True
        if not grew:
            break
    return env


def normalize(body, cls, addr):
    stats = defaultdict(int)
    env = build_types(body, cls, addr)
    stats['typed_vars'] = len([k for k in env if k != 'this'])

    def rw(m, scaled):
        rec = m.group(2)
        off = int(m.group(3), 0)
        c = env.get(rec)
        if not c:
            return m.group(0)
        name = mem_name(c, off)
        if not name and scaled:
            name = mem_name(c, off * 4)
        if not name:
            return m.group(0)
        stats['offsets'] += 1
        return '%s->%s' % (rec, name)

    body = R_DEREF.sub(lambda m: rw(m, False), body)
    body = R_INDEX.sub(lambda m: rw(m, True), body)

    # local retype: plain decls and merged declarations
    def ret_swap(type_and_name):
        m = re.match(r'^((?:(?:unsigned|signed)\s+)*[A-Za-z_]\w*)\s*(\*?)\s*'
                     r'(v\d+|a\d+)$', type_and_name)
        if not m:
            return type_and_name
        t = env.get(m.group(3))
        if t and is_cls(t):
            stats['retyped'] += 1
            return '%s *%s' % (t, m.group(3))
        return type_and_name

    def rd(m):
        return m.group(1) + ret_swap(m.group(2).strip()) + ';' + (m.group(3) or '')
    body = re.sub(r'^(\s*)((?:(?:unsigned|signed)\s+)*[A-Za-z_]\w*\s*\*?\s*'
                  r'(?:v\d+|a\d+))\s*;(\s*//.*)?\s*$', rd, body, flags=re.M)

    def rm_(m):
        return m.group(1) + ret_swap(m.group(2).strip()) + ' = ' + m.group(3)
    body = re.sub(r'^(\s*)((?:(?:unsigned|signed)\s+)*[A-Za-z_]\w*\s*\*?\s*'
                  r'(?:v\d+|a\d+))\s*=\s*([^;]+;)', rm_, body, flags=re.M)

    # signature normalization on the nested def
    if addr:
        cr = canon_ret.get(addr)

        def sigfix(m):
            ret, cc, cls2, name, params = m.groups()
            newret = (cr or ret) if cr else ret
            if cls2:
                ps = [s.strip() for s in params.split(',') if s.strip()]
                ps = [s for s in ps
                      if not re.fullmatch(r'(?:\w+\s*\*\s*)?this', s)]
                stats['sig'] += 1
                return '%s %s::%s(%s)' % (newret, cls2, name, ', '.join(ps))
            stats['sig_free'] += 1
            return '%s %s(%s)' % (newret, name, params)
        body = re.sub(r'^(int|void|bool|BOOL|char|unsigned \w+|_DWORD|long|'
                      r'short|float|double|size_t|LPVOID|LPSTR)\s*'
                      r'(__thiscall\s+|__cdecl\s+|__stdcall\s+)?'
                      r'(?:(\w+)::)?(~?\w+)\s*\(([^)]*)\)\s*$',
                      sigfix, body, flags=re.M)
    return body, stats


ADDR = re.compile(r'//\s*0x([0-9A-Fa-f]{6,8})\s*$')
DEF_Q = re.compile(r'\b([A-Za-z_]\w*)::\s*~?[A-Za-z_]\w*\s*\(')

tot = defaultdict(int)
nblk = 0
for p in sorted(SRC.rglob('*.cpp')):
    try:
        lines = p.read_text(encoding='latin-1').split('\n')
    except OSError:
        continue
    spans = []
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
            i = k + 1
            continue
        spans.append((i, k))
        i = k + 1
    if not spans:
        continue
    changed = False
    for (lo, hi) in reversed(spans):
        cls = None
        addr = None
        for j in range(lo - 1, max(lo - 8, -1), -1):
            ln = lines[j].strip()
            a = ADDR.search(ln)
            if a and addr is None:
                addr = int(a.group(1), 16)
            dm = DEF_Q.search(ln)
            if dm and '(' in ln and not ln.startswith('#') and cls is None:
                cls = dm.group(1)
        if cls is None and addr:
            cls = (man.get('0x%08X' % addr) or {}).get('cls')
        seg = '\n'.join(lines[lo + 1:hi])
        newseg, st = normalize(seg, cls, addr)
        if any(st.values()):
            lines[lo + 1:hi] = newseg.split('\n')
            changed = True
            nblk += 1
            for kk, vv in st.items():
                tot[kk] += vv
    if changed:
        p.write_bytes('\n'.join(lines).encode('latin-1'))

print('blocks normalized:', nblk)
print('typed vars:', tot['typed_vars'])
print('offset rewrites (param/local receivers):', tot['offsets'])
print('locals retyped:', tot['retyped'])
print('member sigs normalized:', tot['sig'])
print('free sigs normalized:', tot['sig_free'])
print('DONE')
