# -*- coding: utf-8 -*-
"""X69 Cycle-1 generator: declaration & type supply at the emitter layer (kinds a+d).

Sub-passes (all authority-gated; no invented symbols; no casts):
  F2  TU include supply for undefined types (worklist TUs; X66 L2-F vocabulary)
  F1  param-name reconciliation (def <-> body; export proto = authority; x66_l2a spirit)
  F3  callee declaration supply (free fn -> TU proto from export `proto:` line;
      Cls::Method -> class header decl = M-decl)
  F4  CRT includes (qmemcpy -> <intrin.h>, _load_CW -> <float.h>)

Usage: python x69_decl_supply.py [--apply]
Dry-run default; ledger JSON printed to x69_ledger.json (this dir). Idempotent.
"""
import json, re, io, sys, os, collections

sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8', errors='replace')
HERE = os.path.dirname(os.path.abspath(__file__))
OUT = os.path.join(HERE, '..', '..', '.omo', 'evidence', 'optimization', 'x69')
OUT = os.path.normpath(OUT)
ROOT = os.path.abspath(os.path.join(HERE, '..', '..'))
WL_PATH = os.path.join(OUT, 'x69_worklist_classified.json')
APPLY = '--apply' in sys.argv
ONLY = set()
for a in sys.argv:
    if a.startswith('--only='):
        ONLY |= set(a.split('=', 1)[1].split(','))
ACTIVE = (lambda p: (ONLY is None or p in ONLY))

wl = json.load(open(WL_PATH, encoding='utf-8'))
idx = json.load(open(os.path.join(ROOT, 'decompile-results', 'full_export', 'index.json'), encoding='utf-8'))

ledger = []
writes = collections.Counter()

def read(path):
    with open(path, encoding='utf-8', errors='replace') as f:
        return f.read()

def write(path, text):
    with open(path, 'w', encoding='utf-8', newline='') as f:
        f.write(text)
    writes[path] += 1

def record(pass_name, file, line, action, detail, status='PLANNED'):
    ledger.append({'pass': pass_name, 'file': os.path.relpath(file, ROOT), 'line': line,
                   'action': action, 'detail': detail, 'status': status})

# ---------------- helpers ----------------

def find_export_proto(addr):
    """addr int -> (proto_line, export_file) from full_export index + src."""
    key = '%08X' % addr
    ent = idx.get(key)
    if not ent:
        return None, None
    exp_file = os.path.join(ROOT, 'decompile-results', 'full_export', ent['file'])
    if not os.path.exists(exp_file):
        return None, None
    txt = read(exp_file)
    m = re.search(r'// addr=0x%08X[^\n]*\n// proto: (.+)' % addr, txt)
    if not m:
        return None, exp_file
    return m.group(1).strip(), exp_file

def enclosing_def(lines, site_line):
    """Walk up from site_line (1-based) to find the def opening line index (0-based).
    Handles def heads spanning up to 4 lines. Returns (def_line_idx, def_text_joined)."""
    lo = max(0, site_line - 1 - 120)
    for i in range(min(site_line - 1, len(lines) - 1), lo, -1):
        for span in (1, 2, 3, 4):
            if i + span > len(lines):
                continue
            tjoin = ' '.join(x.strip() for x in lines[i:i + span])
            tjoin = re.sub(r'\s+', ' ', tjoin)
            if not re.match(r'^[\w:\[\]<>,\s\*&\(\)~]+\(', tjoin):
                continue
            if tjoin.rstrip().endswith(';'):
                continue
            # must contain a balanced (...) and end with { or next line starts {
            if re.match(r'^[\w:\[\]<>,\s\*&\(\)~]+\([^)]*\)\s*(?:const\s*)?\{', tjoin):
                return i, tjoin
            # def without brace on same span but next non-empty line is '{'
            if re.match(r'^[\w:\[\]<>,\s\*&\(\)~]+\([^)]*\)\s*$', tjoin) and i + span < len(lines) \
                    and lines[i + span].lstrip().startswith('{'):
                return i, tjoin
        if re.search(r';\s*$', lines[i]) and '(' in lines[i] and '//' not in lines[i]:
            pass  # declaration line; keep scanning up
    return None, None

def split_params(s):
    """Split a parameter list body (inside parens) on top-level commas."""
    out, depth, cur = [], 0, ''
    for ch in s:
        if ch in '(<[':
            depth += 1
        elif ch in ')>]':
            depth -= 1
        if ch == ',' and depth == 0:
            out.append(cur.strip())
            cur = ''
        else:
            cur += ch
    if cur.strip():
        out.append(cur.strip())
    return out

def param_name(param):
    """Extract declarator name from a param string; None if unnamed (type-only)."""
    p = param.strip()
    if not p or p in ('void', '...'):
        return None
    p = re.sub(r'/\*.*?\*/', '', p).strip()
    p = p.split('=')[0].strip()
    # tokenize: drop stars/& and check if the last meaningful token is a name
    core = p.replace('*', ' ').replace('&', ' ').strip()
    toks = core.split()
    if not toks:
        return None
    kw = {'const', 'unsigned', 'signed', 'int', 'char', 'short', 'long', 'float', 'double',
          'void', 'bool', 'struct', 'union', 'enum', 'class', 'volatile', 'typename',
          '__int64', '__int32', '__int16', '__int8', '__cdecl', '__stdcall', '__fastcall', '__thiscall'}
    last = toks[-1]
    if last in kw:
        return None
    if len(toks) == 1:
        return None  # single token = bare typedef type, unnamed
    if re.match(r'^[A-Za-z_]\w*$', last):
        return last
    return None

# ---------------- F2: include supply ----------------
F2_ON = ACTIVE('F2')
TYPE_HEADER = {}   # type short name -> include path (resolved lazily)

def resolve_type_header(tname):
    if tname in TYPE_HEADER:
        return TYPE_HEADER[tname]
    cands = [
        os.path.join(ROOT, 'src', 'e4', 'classes', f'{tname}_e4.hpp'),
        os.path.join(ROOT, 'src', 'e4', 'classes', f'{tname}.hpp'),
    ]
    for c in cands:
        if os.path.exists(c):
            rel = os.path.relpath(c, os.path.join(ROOT, 'src')).replace('\\', '/')
            TYPE_HEADER[tname] = ('e4', rel)
            return TYPE_HEADER[tname]
    # tree search by filename
    for root, dirs, files in os.walk(os.path.join(ROOT, 'src')):
        dirs[:] = [d for d in dirs if d not in ('.git',)]
        for f in files:
            if f == f'{tname}.hpp':
                rel = os.path.relpath(os.path.join(root, f), os.path.join(ROOT, 'src')).replace('\\', '/')
                TYPE_HEADER[tname] = ('tree', rel)
                return TYPE_HEADER[tname]
    TYPE_HEADER[tname] = None
    return None

f2_types = {}
for u in json.load(open(os.path.join(OUT, 'x69_undefined_types.json'), encoding='utf-8')):
    t = u['type'].split('::')[-1]
    f2_types.setdefault(t, set()).add((u['file'], u['line']))

# basename -> full path index over src tree (census files may be stored as basenames)
SRC_INDEX = {}
for _root, _dirs, _files in os.walk(os.path.join(ROOT, 'src')):
    for _f in _files:
        SRC_INDEX.setdefault(_f, os.path.join(_root, _f))

def resolve_src(f):
    if os.path.isabs(f) and os.path.exists(f):
        return f
    p = os.path.join(ROOT, 'src', f)
    if os.path.exists(p):
        return p
    return SRC_INDEX.get(f)

for tname, sites in (sorted(f2_types.items()) if F2_ON else []):
    hdr = resolve_type_header(tname)
    if not hdr:
        for (f, ln) in sorted(sites):
            record('F2', f, ln, 'include-skip', f'{tname}: no header found', 'SKIP')
        continue
    inc = '#include "%s"' % hdr[1]
    for (f, ln) in sorted(sites):
        path = resolve_src(f)
        if not path:
            record('F2', f, ln, 'include-skip', 'file missing', 'SKIP')
            continue
        txt = read(path)
        if inc in txt:
            record('F2', f, ln, 'include-ok', f'{tname}: already included', 'SKIP')
            continue
        lines = txt.split('\n')
        # insertion point: after last top #include block line
        last_inc = 0
        for i, l in enumerate(lines):
            if re.match(r'^#include', l):
                last_inc = i
        lines.insert(last_inc + 1, f'#include "{hdr[1]}"  // x69 F2: supply {tname} (undefined-type first-error)')
        record('F2', f, ln, 'include-add', f'{inc} for {tname}')
        if APPLY:
            write(path, '\n'.join(lines))

# ---------------- F2C: closure wave — undefined types straight from latest build log ----------------
F2C_LOG = os.path.join(OUT, 'x69_build_l1.out.txt')
if ACTIVE('F2C') and os.path.exists(F2C_LOG):
    err_re = re.compile(r'^(.+?)\((\d+),\d+\): (?:error|fatal error) (C\d+): (.+?)(?:\s+\[|$)')
    closure = collections.defaultdict(set)
    with open(F2C_LOG, encoding='utf-8', errors='replace') as _f:
        for _line in _f:
            _m = err_re.match(_line)
            if not _m:
                continue
            _um = re.search(u'使用了未定义类型[“"]([^”"]+)[”"]', _m.group(4))
            if _um:
                _t = _um.group(1).split('::')[-1]
                if _m.group(1).endswith(('.cpp', '.hpp')):
                    closure[_t].add(_m.group(1))
    for tname, files in sorted(closure.items()):
        hdr = resolve_type_header(tname)
        if not hdr:
            for f in sorted(files):
                record('F2C', f, 0, 'include-skip', f'{tname}: no header found', 'SKIP')
            continue
        inc = '#include "%s"' % hdr[1]
        for f in sorted(files):
            path = resolve_src(f)
            if not path:
                record('F2C', f, 0, 'include-skip', 'file missing', 'SKIP')
                continue
            txt = read(path)
            if inc in txt:
                record('F2C', f, 0, 'include-ok', f'{tname}: already included', 'SKIP')
                continue
            lines = txt.split('\n')
            last_inc = 0
            for i, l in enumerate(lines):
                if re.match(r'^#include', l):
                    last_inc = i
            lines.insert(last_inc + 1, f'#include "{hdr[1]}"  // x69 F2C: supply {tname} (undefined-type closure)')
            record('F2C', f, 0, 'include-add', f'{inc} for {tname}')
            if APPLY:
                write(path, '\n'.join(lines))

# ---------------- F4: CRT includes ----------------
CRT = {'qmemcpy': '#include <intrin.h>  // x69 F4: qmemcpy',
       '_load_CW': '#include <float.h>  // x69 F4: _load_CW',
       '_control87': '#include <float.h>  // x69 F4: _control87'}
f4_done = set()
for s in (wl if ACTIVE('F4') else []):
    if s['kind'] != 'a-missing-decl':
        continue
    m = re.search(u'[“"]([^”"]+)[”"]: (?:未声明的标识符|找不到标识符)', s['site_msg'])
    if not m or m.group(1) not in CRT:
        continue
    ident = m.group(1)
    key = (s['file'], ident)
    if key in f4_done:
        continue
    f4_done.add(key)
    path = s['file']
    txt = read(path)
    if CRT[ident].split('//')[0].strip() in txt:
        record('F4', path, s['line'], 'crt-ok', ident, 'SKIP')
        continue
    lines = txt.split('\n')
    last_inc = 0
    for i, l in enumerate(lines):
        if re.match(r'^#include', l):
            last_inc = i
    lines.insert(last_inc + 1, CRT[ident])
    record('F4', path, s['line'], 'crt-add', CRT[ident])
    if APPLY:
        write(path, '\n'.join(lines))

# ---------------- F3: callee declaration supply ----------------
def clean_decl_from_def(defline):
    """def line (possibly with trailing { or comment) -> declaration text ending with ';'."""
    d = re.sub(r'/\*.*?\*/', '', defline)          # strip 0xADDR anchors
    d = d.split('{')[0].strip()
    # strip 'this' param names: 'TYPE *this' / 'TYPE this' -> 'TYPE *' / 'TYPE'
    d = re.sub(r'\*\s*this\b', '*', d)
    d = re.sub(r'\bthis\b\s*(,|\))', r'\1', d)
    d = re.sub(r'\s+', ' ', d)
    if not d.endswith(';'):
        d += ';'
    return d

def proto_params_types(paramstr):
    """params string -> type-only params (names stripped, 'this' kept as type)."""
    ps = split_params(paramstr)
    out = []
    for p in ps:
        p = re.sub(r'/\*.*?\*/', '', p).strip()
        p = re.sub(r'\s+', ' ', p)
        nm = param_name(p)
        if nm == 'this':
            continue  # thiscall receiver: drop from free-function proto
        if nm:
            # drop trailing name token
            q = re.sub(r'([A-Za-z_]\w*)(\[[^\]]*\])?\s*$', lambda mm: (mm.group(2) or '').strip(), p).rstrip()
            out.append(q if q else p)
        else:
            out.append(p)
    return ', '.join(out)

for s in (wl if ACTIVE('F3') else []):
    if s['kind'] != 'a-missing-decl':
        continue
    m = re.search(u'[“"]([^”"]+)[”"]: (?:未声明的标识符|找不到标识符)', s['site_msg'])
    if not m:
        continue
    ident = m.group(1)
    if ident in CRT:
        continue
    # tree-universe files bank in this cycle (carrier supply is future work)
    norm = s['file'].replace('\\', '/')
    if '/src/e4/' not in norm and '/src/_gap2/' not in norm:
        record('F3', s['file'], s['line'], 'proto-skip', f'{ident}: tree-universe TU (bank)', 'SKIP')
        continue
    lines = read(s['file']).split('\n')
    src_line = lines[s['line'] - 1] if s['line'] <= len(lines) else ''

    # member call (Cls::Method) -> M-decl into class header
    mm = re.search(rf'\b([A-Z]\w*)::{re.escape(ident)}\s*\(', src_line)
    if mm:
        cls, meth = mm.group(1), ident
        hdr_path = os.path.join(ROOT, 'src', 'e4', 'classes', f'{cls}_e4.hpp')
        if not os.path.exists(hdr_path):
            record('F3', s['file'], s['line'], 'mdecl-skip', f'{cls}_e4.hpp missing', 'SKIP')
            continue
        htxt = read(hdr_path)
        if re.search(rf'\b{meth}\s*\(', htxt):
            record('F3', s['file'], s['line'], 'mdecl-ok', f'{cls}::{meth} already declared', 'SKIP')
            continue
        sig = None
        for l2 in lines:
            d = re.search(rf'\b{cls}::{meth}\s*\(', l2)
            if not d:
                continue
            code_part = l2.split('/*')[0].rstrip()
            if code_part.endswith(';'):
                continue
            if '=' in code_part.split('(')[0]:
                continue
            sig = l2.strip()
            break
        if sig:
            decl = clean_decl_from_def(sig)
            decl = decl.replace(f'{cls}::{meth}', meth, 1)  # in-class decl drops qualifier
        else:
            # def not in TU: signature from export proto (binary authority)
            ep = None
            for k, ent in idx.items():
                if ent.get('name') == f'{cls}::{meth}':
                    ep, _ = find_export_proto(int(k, 16))
                    if ep:
                        break
            if not ep:
                record('F3', s['file'], s['line'], 'mdecl-skip', f'{cls}::{meth}: no def in TU, no export proto', 'SKIP')
                continue
            pm2 = re.match(r'^(.*?)\s*__\w+\s*\((.*)\)\s*$', ep) or re.match(r'^(.*?[^,\s])\s*\((.*)\)\s*$', ep)
            if not pm2:
                record('F3', s['file'], s['line'], 'mdecl-skip', f'{cls}::{meth}: unparseable proto', 'SKIP')
                continue
            ret2 = re.sub(r'__(?:cdecl|stdcall|fastcall|thiscall|pascal)\s*$', '', pm2.group(1).strip()).strip()
            decl = f'static {ret2} {meth}({proto_params_types(pm2.group(2))});'
        if '=' in decl:
            record('F3', s['file'], s['line'], 'mdecl-skip', f'{cls}::{meth}: decl contains = (call-text)', 'SKIP')
            continue
        if not decl.lstrip().startswith('static') and re.search(rf'\b{cls}::{meth}\s*\([^)]*\)\s*;', src_line.split('/*')[0]):
            decl = 'static ' + decl  # receiver-less call form -> static member
        hlines = read(hdr_path).split('\n')
        ins = None
        for i2 in range(len(hlines) - 1, -1, -1):
            if hlines[i2].startswith('};'):
                ins = i2
                break
        if ins is None:
            record('F3', s['file'], s['line'], 'mdecl-skip', f'{cls}_e4.hpp struct end not found', 'SKIP')
            continue
        hlines.insert(ins, f'    {decl}  // x69 F3/M: decl supply (def in TU)')
        record('F3', s['file'], s['line'], 'mdecl-add', f'{cls}_e4.hpp += {decl[:100]}')
        if APPLY:
            write(hdr_path, '\n'.join(hlines))
        continue

    # free function -> TU proto from export (search index by exact name)
    proto = None
    for k, ent in idx.items():
        if ent.get('name') == ident or ent.get('name', '').endswith('::' + ident):
            proto, _ = find_export_proto(int(k, 16))
            if proto:
                break
    if not proto:
        record('F3', s['file'], s['line'], 'proto-skip', f'{ident}: no export proto', 'SKIP')
        continue
    pm = re.match(r'^(.*?)\s*__\w+\s*\((.*)\)\s*$', proto)
    if not pm:
        pm = re.match(r'^(.*?[^,\s])\s*\((.*)\)\s*$', proto)
    if not pm:
        record('F3', s['file'], s['line'], 'proto-skip', f'{ident}: unparseable proto', 'SKIP')
        continue
    ret = re.sub(r'__(?:cdecl|stdcall|fastcall|thiscall|pascal)\s*$', '', pm.group(1).strip()).strip()
    ptypes = proto_params_types(pm.group(2))
    already = any(ident in l and ('(' in l and l.rstrip().endswith(';')) for l in lines[:40])
    if already:
        record('F3', s['file'], s['line'], 'proto-ok', f'{ident} TU proto exists', 'SKIP')
        continue
    ns_line = f'{ret} {ident}({ptypes});  // x69 F3: decl-supply (export proto)'
    last_inc = 0
    for i2, l in enumerate(lines):
        if re.match(r'^#include', l):
            last_inc = i2
    lines.insert(last_inc + 1, ns_line)
    record('F3', s['file'], s['line'], 'proto-add', ns_line[:110])
    if APPLY:
        write(s['file'], '\n'.join(lines))

# ---------------- F1: param-name reconciliation ----------------
# Deterministic rule R1a: the def's parameter list contains exactly ONE unnamed param,
# and the body references exactly one undeclared aN/aPN token -> name that param.
PARAM_TOKEN = re.compile(r'^(?:aP?\d+)$')
f1_checked = set()
for s in (wl if ACTIVE('F1') else []):
    if s['kind'] != 'a-missing-decl':
        continue
    m = re.search(u'[“"]([^”"]+)[”"]: (?:未声明的标识符|找不到标识符)', s['site_msg'])
    if not m:
        continue
    ident = m.group(1)
    if not PARAM_TOKEN.match(ident):
        record('F1', s['file'], s['line'], 'param-skip', f'{ident}: not a positional param token', 'SKIP')
        continue
    key = (s['file'], ident)
    if key in f1_checked:
        continue
    f1_checked.add(key)
    txt = read(s['file'])
    lines = txt.split('\n')
    di, dtext = enclosing_def(lines, s['line'])
    if di is None:
        record('F1', s['file'], s['line'], 'param-skip', f'{ident}: enclosing def not found', 'SKIP')
        continue
    dm = re.search(r'^(.*?\b\w[\w:]*\s*\()([^)]*)\)(.*)$', dtext)
    if not dm:
        record('F1', s['file'], s['line'], 'param-skip', f'{ident}: def unparseable', 'SKIP')
        continue
    head, params_s, tail = dm.group(1), dm.group(2), dm.group(3)
    params = split_params(params_s)
    named = [param_name(p) for p in params]
    unnamed_idx = [i for i, nm in enumerate(named) if nm is None and params[i].strip() not in ('', '...')]
    # body slice: def -> matching closing brace
    depth = 0
    end_i = None
    for i in range(di, len(lines)):
        depth += lines[i].count('{') - lines[i].count('}')
        if depth <= 0 and i > di:
            end_i = i
            break
    body_txt = '\n'.join(lines[di + 1:end_i]) if end_i else ''
    # count distinct undeclared positional tokens referenced in body
    toks = set(re.findall(r'\b(aP?\d+)\b', body_txt))
    declared_names = {nm for nm in named if nm}
    undeclared_toks = {t for t in toks if t not in declared_names}
    if len(unnamed_idx) == 1 and len(undeclared_toks) == 1:
        tok = next(iter(undeclared_toks))
        k = unnamed_idx[0]
        if re.search(r'\b' + re.escape(tok) + r'\b', head):
            record('F1', s['file'], di + 1, 'param-skip', f'{tok}: already in def head', 'SKIP')
            continue
        newp = list(params)
        newp[k] = re.sub(r'(\[[^\]]*\])?\s*$', lambda mm: f' {tok}{mm.group(1) or ""}', params[k])
        newdef = head + ', '.join(newp) + ')' + tail
        lines[di] = newdef
        record('F1', s['file'], di + 1, 'param-insert', f'def param[{k}] := {tok} (body token)', 'PLANNED')
        if APPLY:
            write(s['file'], '\n'.join(lines))
    else:
        record('F1', s['file'], di + 1, 'param-skip',
               f'{ident}: unnamed={len(unnamed_idx)} undeclared_toks={sorted(undeclared_toks)[:4]} (bank)', 'SKIP')

# ---------------- report ----------------
by_status = collections.Counter(r['status'] for r in ledger)
by_pass = collections.Counter((r['pass'], r['status']) for r in ledger)
print('== X69 decl-supply ledger ==')
print('APPLY =', APPLY)
for (p, st), c in sorted(by_pass.items()):
    print(f'  {p} {st}: {c}')
print('writes:', dict(writes))
json.dump(ledger, open(os.path.join(OUT, 'x69_ledger.json'), 'w'), indent=1)
print('saved x69_ledger.json')
