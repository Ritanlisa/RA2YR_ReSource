# -*- coding: utf-8 -*-
"""G41.46 wave 2: e4_protos.h free-function decls := ida_cache truth.

The proto decls came from a stale manifest (e.g. LoadFileSHP declared with
(ConvertClass*, ConvertClass*) while cache truth says (char *Source, bool *a2)).
For every census-C2664 non-thiscall callee with a unique signals address:
    decl (e4_protos.h)  := truth params + ret (names/defaults preserved)
    def  (src/e4/*_e4.cpp, addr-marker located) := same
Only equal-arity rewrites; callers already match the truth.
Dry-run default; --apply writes.
"""
import json, re, os, sys, collections

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
ROOT = os.path.abspath(ROOT)
E4_CPP = os.path.join(ROOT, 'src', 'e4')
PROTOS = os.path.join(ROOT, 'src', 'e4', 'e4_protos.h')
CACHE = os.path.join(ROOT, '.omo', 'ida_cache')
APPLY = '--apply' in sys.argv

def split_args(s):
    args, depth, cur, i = [], 0, '', 0
    while i < len(s):
        c = s[i]
        if c in '([{':
            depth += 1
        elif c in ')]}':
            depth -= 1
        elif c == ',' and depth == 0:
            args.append(cur.strip())
            cur = ''
            i += 1
            continue
        if c in '"\'':
            q = c
            cur += c
            i += 1
            while i < len(s):
                cur += s[i]
                if s[i] == '\\':
                    if i + 1 < len(s):
                        cur += s[i + 1]
                    i += 2
                    continue
                if s[i] == q:
                    break
                i += 1
            i += 1
            continue
        cur += c
        i += 1
    if cur.strip():
        args.append(cur.strip())
    return args

IDA_TYPE_MAP = [
    ('unsigned __int8', 'uint8_t'), ('unsigned __int16', 'uint16_t'),
    ('unsigned __int32', 'uint32_t'), ('unsigned __int64', 'uint64_t'),
    ('__int8', 'int8_t'), ('__int16', 'int16_t'), ('__int32', 'int32_t'),
    ('__int64', 'int64_t'), ('_QWORD', 'unsigned long long'),
    ('_DWORD', 'unsigned int'), ('_WORD', 'unsigned short'),
    ('_BYTE', 'unsigned char'), ('_BOOL', 'int'), ('__bool', 'int'),
    ('u_short', 'unsigned short'), ('u_char', 'unsigned char'),
    ('u_int', 'unsigned int'), ('u_long', 'unsigned long'),
    ('_UNKNOWN', 'void *'),
]

def norm_type(tp):
    for a, b in IDA_TYPE_MAP:
        tp = re.sub(r'\b%s\b' % a, b, tp)
    return tp.strip()

def cache_first_line(addr):
    p = os.path.join(CACHE, 'func_%s.json' % addr)
    if not os.path.exists(p):
        p = os.path.join(CACHE, 'func_0x%X.json' % int(addr, 16))
    if not os.path.exists(p):
        return None
    t = json.load(open(p, encoding='utf-8'))
    dec = t.get('decompiled', '')
    return dec.split('\n')[0] if dec else None

def parse_truth_free(line):
    """free-function truth first line -> (ret, [param strings]) or None."""
    m = re.match(
        r'^(.+?)\s*__(?:fastcall|stdcall|cdecl|thiscall|pascal)\s+'
        r'((?:[A-Za-z_]\w*::)*~?[A-Za-z_]\w*)\s*\((.*)\)\s*$',
        line.strip())
    if not m:
        m2 = re.match(
            r'^(.+?)\s+((?:[A-Za-z_]\w*::)*~?[A-Za-z_]\w*)\s*\((.*)\)\s*$',
            line.strip())
        if not m2:
            return None
        ret, qname, params = m2.groups()
    else:
        ret, qname, params = m.groups()
    if 'this' == qname:
        return None
    pl = split_args(params) if params.strip() else []
    if pl and re.search(r'\bthis\s*$', pl[0]):
        return None            # member truth, not this fixer's corpus
    return norm_type(ret), [norm_type(p) for p in pl]

# ---------------------------------------------------------------- inputs
sig = json.load(open(os.path.join(ROOT, 'signals.json'), encoding='utf-8'))
name2addrs = collections.defaultdict(list)
addr2sym = {}
for addr, v in sig['symbols'].items():
    name2addrs[v['name']].append(addr)
    addr2sym[addr] = v

census = json.load(open(os.path.join(ROOT, '.omo', 'tu_errors.json')))
targets = collections.Counter()
for tu, el in census.items():
    for e in el:
        if 'error C2664' not in e:
            continue
        m = re.search(r'“(.+?)”: 无法将参数', e)
        if not m:
            continue
        head = m.group(1)
        i = head.rfind('(')
        head = head[:i].strip() if i >= 0 else head
        parts = head.split()
        qname = re.sub(r'^[\*\&]+', '', parts[-1]) if parts else ''
        if qname.startswith('gamemd::'):
            qname = qname[len('gamemd::'):]
        if '::' in qname:
            continue        # member functions were wave 1
        addrs = name2addrs.get(qname, [])
        ccs = set(addr2sym[a].get('call_convention') for a in addrs)
        if len(addrs) == 1 and 'thiscall' not in ccs and None not in ccs:
            targets[qname] += 1
print('free-fn targets:', len(targets), ' errors:', sum(targets.values()))

# ---------------------------------------------------------------- proto lines
plines = open(PROTOS, encoding='utf-8', errors='replace').read().split('\n')
stats = collections.Counter()
proto_edits = {}   # name -> (line_idx, new_line)
def_edits = {}     # path -> {idx: new_line}

# def index by addr (marker-based, same as wave 1)
def_idx = {}
DEF_RE = re.compile(
    r'^\s*([\w:<>,\s\*&\(\)]+?)\s*((?:[A-Za-z_]\w*::)*~?[A-Za-z_]\w*)'
    r'\s*\(([^;{}]*)\)\s*(?:const)?\s*\{?\s*$')
e4_files = [os.path.join(E4_CPP, fn) for fn in os.listdir(E4_CPP)
            if fn.endswith('_e4.cpp')]
for path in e4_files:
    lines = open(path, encoding='utf-8', errors='replace').read().split('\n')
    pend = None
    for i, ln in enumerate(lines):
        am = re.match(r'^//\s*(0x[0-9A-Fa-f]+)\s*$', ln)
        if am:
            pend = (am.group(1), i)
            continue
        dm = DEF_RE.match(ln)
        if dm and pend and not re.search(r'==|&&|\|\||return\b|\bif\s*\(|;', ln):
            addr, mi = pend
            def_idx.setdefault(addr.lower(), []).append(
                (path, i, ln, dm.group(3)))
            pend = None
            continue
        if ln.strip() == '' or re.match(r'^namespace\s+\w+\s*\{', ln):
            continue
        pend = None

PROTO_RE = re.compile(
    r'^(\s*extern\s+)(.+?)\s*([A-Za-z_]\w*)\s*\(([^;]*)\)\s*;\s*(?://.*)?$')

BUILTIN_TOKENS = set('''char wchar_t int float double void long short signed
unsigned bool size_t ssize_t uint8_t uint16_t uint32_t uint64_t int8_t int16_t
int32_t int64_t BYTE WORD DWORD BOOL HRESULT LPSTR LPCSTR LPWSTR LRESULT
UINT WPARAM LPARAM HANDLE HWND HDC HINSTANCE HMODULE'''.split())

def base_ident(t):
    m = re.search(r'([A-Za-z_]\w*)\s*(?:\*|&|$)', t)
    return m.group(1) if m else ''

def param_type_part(p):
    m = re.match(r'^(.*?)([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*(=.*)?$', p.strip())
    if m and m.group(1).strip():
        return m.group(1).strip()
    return p.strip()

def is_class_ptr(t):
    t = param_type_part(t)
    return t.rstrip().endswith('*') and base_ident(t) not in BUILTIN_TOKENS \
        and base_ident(t) != ''

def is_builtin_ptr(t):
    t = param_type_part(t)
    return t.rstrip().endswith('*') and base_ident(t) in BUILTIN_TOKENS

def truth_param_text(tp, existing):
    """truth param string + existing decl param -> new param text"""
    dflt = ''
    dm = re.search(r'=\s*[^,]+$', existing)
    if dm:
        dflt = ' ' + dm.group(0)
    em = re.match(r'^(.*?)([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*(=.*)?$',
                  existing.strip())
    ename = em.group(2) if em and em.group(1).strip() else None
    tm = re.match(r'^(.*?)([A-Za-z_]\w*)\s*(\[[^\]]*\])?$', tp.strip())
    if tm and tm.group(1).strip():
        ttype = tm.group(1).strip()
        tname = tm.group(2)
    else:
        ttype, tname = tp.strip(), None
    pname = ename or tname or 'a?'
    ttype = ttype if (ttype.endswith('*') or ttype.endswith('&')) else ttype + ' '
    return ttype + pname + dflt

for name, ecount in sorted(targets.items(), key=lambda kv: -kv[1]):
    addr = name2addrs[name][0]
    tline = cache_first_line(addr)
    if not tline:
        stats['skip-no-cache'] += 1
        continue
    parsed = parse_truth_free(tline)
    if not parsed:
        stats['skip-truth-parse'] += 1
        continue
    tret, tparams = parsed
    # ---- proto decl
    hit = None
    for i, ln in enumerate(plines):
        pm = PROTO_RE.match(ln)
        if pm and pm.group(3) == name:
            hit = (i, pm)
            break
    if not hit:
        stats['skip-no-proto'] += 1
        continue
    pi, pm = hit
    dpl = split_args(pm.group(4))
    if len(dpl) != len(tparams):
        stats['skip-arity-mismatch'] += 1
        continue
    # no-degrade guard: keep canonical class-pointer spellings; raw builtin
    # truth spellings are til-missing downgrades, not truth about the type
    keep_mask = []
    for dp, tp in zip(dpl, tparams):
        keep = is_class_ptr(dp) and (is_builtin_ptr(tp) or
                                     re.match(r'^void\s*\*', tp.strip()))
        keep_mask.append(keep)
        if keep:
            stats['keep-canonical-param'] += 1
    newpl = [dp if kp else truth_param_text(tp, dp)
             for dp, tp, kp in zip(dpl, tparams, keep_mask)]
    tret_eff = tret
    if is_class_ptr(pm.group(2)) and (is_builtin_ptr(tret) or
                                      re.match(r'^void\s*\*$', tret.strip())):
        tret_eff = pm.group(2).strip()
        stats['keep-canonical-ret'] += 1
    ann = ''
    am2 = re.search(r'//.*$', plines[pi])
    if am2:
        ann = '  ' + am2.group(0)
    new_pline = '%s%s %s(%s);%s' % (pm.group(1), tret_eff, name,
                                    ', '.join(newpl), ann)
    proto_edits[name] = (pi, new_pline)
    # ---- def (same effective types; def's own names preserved)
    defs = [x for x in def_idx.get(addr.lower(), [])
            if re.search(r'(\b|::)%s\s*\(' % re.escape(name), x[2])]
    if len(defs) != 1:
        stats['def-miss(multi)' if defs else 'def-miss(none)'] += 1
        continue
    fpath, fi, fhead, fparams = defs[0]
    fdpl = split_args(fparams)
    if len(fdpl) != len(tparams):
        stats['skip-def-arity'] += 1
        continue
    newfdpl = [fp if kp else truth_param_text(tp, fp)
               for fp, tp, kp in zip(fdpl, tparams, keep_mask)]
    new_fhead = re.sub(r'\([^;{}]*\)',
                       '(' + ', '.join(newfdpl) + ')', fhead, count=1)
    new_fhead = re.sub(r'^(\s*)([\w:<>,\s\*&\(\)]+?)\s*((?:[A-Za-z_]\w*::)*%s\s*\()'
                       % re.escape(name),
                       r'\1%s \3' % tret_eff, new_fhead, count=1)
    def_edits.setdefault(fpath, {})[fi] = new_fhead
    stats['aligned'] += 1
    stats['errs-covered'] += ecount

print()
for k, v in stats.most_common(20):
    print(' ', v, k)
print('proto+def aligned:', stats['aligned'],
      ' errors covered:', stats['errs-covered'])
print('proto-only (no def):', len(proto_edits) - stats['aligned'])

if not APPLY:
    print('\n(dry run; no files written)')
    sys.exit(0)

for name, (pi, txt) in proto_edits.items():
    plines[pi] = txt
open(PROTOS, 'w', encoding='utf-8', newline='\n').write('\n'.join(plines))
n = 1
for fpath, edits in def_edits.items():
    lines = open(fpath, encoding='utf-8', errors='replace').read().split('\n')
    for fi, txt in edits.items():
        lines[fi] = txt
    open(fpath, 'w', encoding='utf-8', newline='\n').write('\n'.join(lines))
    n += 1
print('files written:', n)
