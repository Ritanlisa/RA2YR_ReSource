# -*- coding: utf-8 -*-
"""G41.46: C3861 member supply -- missing member decls for `Cls::Member(...)`
explicit-this calls in the e4 face.

Mechanism (wave-1 generalization): the def exists in e4 (cache-verbatim,
member form), callers call `Cls::Name(this, args...)` static-style, but the
class decl never declared the member -> C3861. Surgery per (cls, name):
  1. cache truth := params after this (types), def's own names survive;
  2. def head := truth real params (drop unused/materialized params);
  3. class hpp: append `RET Name(params); // 0xADDR` before the class close;
  4. callers `Cls::Name(a0, ...)` arity K+1 -> `((Cls *)(a0))->Name(...)`.
Only own-file classes (Cls_e4.hpp); tree-file classes counted and skipped.
Dry-run default; --apply writes.
"""
import json, re, os, sys, collections

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
ROOT = os.path.abspath(ROOT)
E4_HPP = os.path.join(ROOT, 'src', 'e4', 'classes')
E4_CPP = os.path.join(ROOT, 'src', 'e4')
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

def cache_line(addr):
    for p in (os.path.join(CACHE, 'func_%s.json' % addr),
              os.path.join(CACHE, 'func_0x%08X.json' % int(addr, 16)),
              os.path.join(CACHE, 'func_0x%X.json' % int(addr, 16))):
        if os.path.exists(p):
            t = json.load(open(p, encoding='utf-8'))
            dec = t.get('decompiled', '')
            return dec.split('\n')[0] if dec else None
    return None

def truth_params(line):
    """thiscall truth first line -> (ret, this_cls, [real param strings])"""
    m = re.search(r'^(.*?)\s*(?:__thiscall\s+)?((?:[A-Za-z_]\w*::)+~?'
                  r'[A-Za-z_]\w*)\s*\((.*)\)\s*$', line.strip())
    if not m or '__thiscall' not in line and 'this' not in m.group(3):
        return None
    ret, qname, params = m.groups()
    pl = split_args(params) if params.strip() else []
    if not pl or not re.search(r'\bthis\s*$', pl[0].strip()):
        return None
    tcls = pl[0].strip()
    tcls = re.sub(r'\s*\*\s*$', '', tcls[:-4].strip()) if tcls.endswith('this') else None
    qparts = qname.split('::')
    return norm_type(ret), qparts[-2] if len(qparts) >= 2 else tcls, \
        [norm_type(p) for p in pl[1:]]

# ---------------------------------------------------------------- inputs
sig = json.load(open(os.path.join(ROOT, 'signals.json'), encoding='utf-8'))
name2addrs = collections.defaultdict(list)
addr2sym = {}
for addr, v in sig['symbols'].items():
    name2addrs[v['name']].append(addr)
    addr2sym[addr] = v

PAIRS_SRC = os.environ.get('PAIRS_SRC') or '.omo/g120_c3861_resolvable.json'
pairs = json.load(open(os.path.join(ROOT, PAIRS_SRC)))

# site TUs per (cls, name): for include-closure supply
CENSUS_SRC = os.environ.get('CENSUS_SRC') or '.omo/tu_errors_g119.json'
census = json.load(open(os.path.join(ROOT, CENSUS_SRC)))
site_tus = collections.defaultdict(set)
for tu, el in census.items():
    for e in el:
        if 'error C3861' not in e:
            continue
        m = re.search(r'“(.+?)”: 找不到标识符', e)
        sm = re.match(r'^(.+?)\((\d+)\):', e)
        if not m or not sm:
            continue
        name = m.group(1)
        p = sm.group(1)
        if not os.path.isabs(p):
            p = os.path.join(ROOT, p)
        try:
            sl = open(p, encoding='utf-8', errors='replace').read().split('\n')
        except OSError:
            continue
        li = int(sm.group(2)) - 1
        if li >= len(sl):
            continue
        cm = re.search(r'\b([A-Za-z_]\w*)::%s\s*\(' % re.escape(name), sl[li])
        if cm:
            site_tus[(cm.group(1), name)].add(p)

# class head index: cls -> (file, head_line_idx, close_line_idx)
cls_idx = {}
for fn in os.listdir(E4_HPP):
    if not fn.endswith('.hpp'):
        continue
    path = os.path.join(E4_HPP, fn)
    lines = open(path, encoding='utf-8', errors='replace').read().split('\n')
    depth = 0
    head = None          # (cls_name, head_line_idx, depth_after_head)
    for i, ln in enumerate(lines):
        cm = re.match(r'\s*(?:class|struct)\s+([A-Za-z_]\w*)[^;]*$', ln)
        if cm and head is None:
            head = (cm.group(1), i, depth + ln.count('{') - ln.count('}'))
        depth += ln.count('{') - ln.count('}')
        if head is not None and i > head[1] and depth < head[2]:
            cls_idx.setdefault(head[0], (path, head[1], i))
            head = None

# def index
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

_line_cache = {}
_dirty = set()

def get_lines(path):
    if path not in _line_cache:
        _line_cache[path] = open(
            path, encoding='utf-8', errors='replace').read().split('\n')
    return _line_cache[path]

def split_typed_param(tp, fallback_name):
    tp = tp.strip()
    tm = re.match(r'^(.*?)([A-Za-z_]\w*)\s*(\[[^\]]*\])?$', tp)
    if tm and tm.group(1).strip():
        return norm_type(tm.group(1)), tm.group(2)
    if tm and tm.group(2):
        return norm_type(tm.group(2)), fallback_name
    return norm_type(tp), fallback_name

def render_param(ttype, pname, arr=''):
    ttype = ttype if (ttype.endswith('*') or ttype.endswith('&')) else ttype + ' '
    return ttype + pname + (arr or '')

stats = collections.Counter()
plan_decl = {}   # (cls,name) -> (path, insert_idx, decl_text)

for qname, ecount in sorted(pairs.items(), key=lambda kv: -kv[1]):
    cls, name = qname.rsplit('::', 1)
    if name == cls or name.startswith('~') or name.startswith('operator'):
        stats['skip-ctor-dtor-op'] += ecount
        continue
    addrs = [a for a in name2addrs.get(qname, [])
             if addr2sym[a].get('call_convention') == 'thiscall']
    if len(addrs) != 1:
        stats['skip-addr'] += ecount
        continue
    addr = addrs[0]
    tline = cache_line(addr)
    if not tline or '__thiscall' not in tline and 'this' not in tline:
        stats['skip-truth'] += ecount
        continue
    tp = truth_params(tline)
    if not tp or tp[1] != cls:
        stats['skip-truth-cls'] += ecount
        continue
    tret, _tcls, treal = tp
    K = len(treal)
    if cls not in cls_idx:
        stats['skip-no-class-file'] += ecount
        continue
    cpath, chead, cclose = cls_idx[cls]
    defs = [x for x in def_idx.get(addr.lower(), [])
            if ('%s::' % cls) in x[2] and re.search(
                r'(\b|::)%s\s*\(' % re.escape(name), x[2])]
    if len(defs) > 1:
        stats['skip-def-multi'] += ecount
        continue
    new_fpl = None
    fpath = fi = None
    if len(defs) == 1:
        fpath, fi, fhead, fparams = defs[0]
        flines = get_lines(fpath)
        fpl = split_args(fparams)
        body = []
        for j in range(fi + 1, min(fi + 800, len(flines))):
            if flines[j] == '}':
                break
            body.append(flines[j])
        body_txt = '\n'.join(body)
        keep = list(fpl)
        dropped = []
        order = list(range(len(keep)))[::-1] + list(range(len(keep)))
        for pos in order:
            if len(keep) - len(dropped) <= K:
                break
            nm = re.search(r'([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*$', keep[pos])
            if nm and not re.search(r'\b%s\b' % re.escape(nm.group(1)), body_txt):
                dropped.append(pos)
        if len(keep) - len(dropped) != K:
            stats['skip-def-shape'] += ecount
            continue
        surv = [(pos, keep[pos]) for pos in range(len(keep)) if pos not in dropped]
        new_fpl = []
        for (pos, old), tpar in zip(surv, treal):
            nm = re.search(r'([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*$', old)
            arr = nm.group(2) or '' if nm else ''
            pn = nm.group(1) if nm else 'a%d' % (pos + 1)
            ttype, _tn = split_typed_param(tpar, pn)
            new_fpl.append(render_param(ttype, pn, arr))
        new_fhead = re.sub(r'\([^;{}]*\)',
                           '(' + ', '.join(new_fpl) + ')', fhead, count=1)
        get_lines(fpath)[fi] = new_fhead
        _dirty.add(fpath)
    else:
        stats['decl-only-no-def'] += 1
    # decl text: names := def surviving params, else cache names
    # decl text (names := def surviving, else cache param names)
    dpl = []
    for ix in range(K):
        if new_fpl:
            nm = re.search(r'([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*$', new_fpl[ix])
            pn = nm.group(1)
        else:
            _tt, pn = split_typed_param(treal[ix], 'a%d' % (ix + 2))
        ttype, _tn = split_typed_param(treal[ix], pn)
        dpl.append(render_param(ttype, pn))
    decl = '    %s %s(%s);  // %s' % (tret, name, ', '.join(dpl), addr)
    # insert before the class close; skip if name already declared there
    clines = get_lines(cpath)
    already = False
    for j in range(chead, cclose):
        if re.match(r'\s*[\w:<>,\s\*&]+~?%s\s*\(' % re.escape(name), clines[j]):
            already = True
            break
    if already:
        # the class hpp declares it, but the calling TU may not include it
        inc = 'e4/classes/%s_e4.hpp' % cls
        for st in site_tus.get((cls, name), ()):
            if st not in _line_cache and os.path.exists(st):
                get_lines(st)
            if st not in _line_cache:
                continue
            slines = _line_cache[st]
            if any(inc in ln for ln in slines[:60]):
                stats['still-missing-elsewhere'] += 1
                continue
            nl = next((i for i, ln in enumerate(slines[:80])
                       if ln.startswith('#include')), None)
            if nl is None:
                continue
            slines.insert(nl + 1, '#include "%s"' % inc)
            _dirty.add(st)
            stats['include-added'] += 1
        stats['skip-already-decl'] += ecount
        continue
    plan_decl[(cls, name)] = (cpath, cclose, decl, addr)
    # ---- caller rewrite
    site_re = re.compile(r'\b(?:gamemd::)?%s::%s\s*\(' %
                         (re.escape(cls), re.escape(name)))
    for cpath2 in e4_files:
        clines2 = get_lines(cpath2)
        touched = False
        for ci, cln in enumerate(clines2):
            if not site_re.search(cln):
                continue
            if cpath2 == fpath and ci == fi:
                continue
            out = []
            pos = 0
            for mm in site_re.finditer(cln):
                op = cln.find('(', mm.end() - 1)
                depth = 0
                j = op
                end_i = -1
                while j < len(cln):
                    ch = cln[j]
                    if ch == '(':
                        depth += 1
                    elif ch == ')':
                        depth -= 1
                        if depth == 0:
                            end_i = j
                            break
                    j += 1
                if end_i < 0:
                    stats['caller-skip-multiline'] += 1
                    continue
                args = split_args(cln[op + 1:end_i]) if cln[op + 1:end_i].strip() else []
                if len(args) != K + 1:
                    stats['caller-skip-arity'] += 1
                    continue
                rest = ', '.join(args[1:])
                repl = '((%s *)(%s))->%s(%s)' % (cls, args[0], name, rest)
                out.append((pos, mm.start(), cln[pos:mm.start()]))
                out.append((mm.start(), end_i + 1, repl))
                pos = end_i + 1
            if pos:
                out.append((pos, len(cln), cln[pos:]))
                clines2[ci] = ''.join(seg for _s, _e, seg in out)
                touched = True
                stats['caller-rewritten'] += 1
        if touched:
            _dirty.add(cpath2)
    stats['supplied'] += 1
    stats['errs-covered'] += ecount

print('members supplied:', stats['supplied'],
      ' covering mentions:', stats['errs-covered'])
for k, v in stats.most_common(20):
    print(' ', v, k)

if not APPLY:
    print('\n(dry run; no files written)')
    sys.exit(0)

# decl inserts: group by file, insert bottom-up by index
by_file = collections.defaultdict(list)
for (cls, name), (p, idx, decl, addr) in plan_decl.items():
    by_file[p].append((idx, decl))
for p, items in by_file.items():
    lines = get_lines(p)
    for idx, decl in sorted(items, key=lambda x: -x[0]):
        lines.insert(idx, decl)
    _dirty.add(p)
for p in _dirty:
    open(p, 'w', encoding='utf-8', newline='\n').write(
        '\n'.join(get_lines(p)))
print('files written:', len(_dirty))
