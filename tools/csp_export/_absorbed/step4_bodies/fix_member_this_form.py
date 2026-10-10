# -*- coding: utf-8 -*-
"""G41.46 wave 1: member-this form surgery for e4 thiscall callees (C2664 mass).

Truth anchor: ida_cache decompiled first line, e.g.
    int __thiscall Power::FlagProcess(Power *this, int Power_field_0x8)

The e4 decls materialized an extra param (this-as-int at head, or a void*
filler tail) while defs are member form and callers pass this explicitly:
    decl: int FlagProcess(int a2, int a2_2);      // 0x4A1CA0
    def:  int Power::FlagProcess(int a2, void *a2_2) { ... uses a2, this-> }
    call: Power::FlagProcess((Power *)a2, v3);

Surgery (truth-faithful):
    decl: int FlagProcess(int a2);
    def:  int Power::FlagProcess(int a2) { ... }
    call: ((Power *)a2)->FlagProcess(v3);

Rules:
  - def keeps its own param names; params unused in the def body get dropped
    until the count matches the truth's real-param count; types := truth.
  - decl names := surviving def param names (positional), types := truth.
  - caller sites: arity == K+1 -> member form; complex this-arg expressions
    and multi-line calls are skipped and counted.
  - ctors / dtors / operators / ambiguous overloads are skipped.
Dry-run by default; --apply writes.
"""
import json, re, os, sys, collections

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))))
ROOT = os.path.abspath(ROOT)
E4_HPP = os.path.join(ROOT, 'src', 'e4', 'classes')
E4_CPP = os.path.join(ROOT, 'src', 'e4')
E4_CPP_ROOT = os.path.join(ROOT, 'src')
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

TRUTH_RE = re.compile(
    r'^(.*?)\s*(__thiscall|__stdcall|__cdecl|__fastcall|__pascal)?\s*'
    r'((?:[A-Za-z_]\w*::)*~?[A-Za-z_]\w*)\s*\((.*)\)\s*$')

def parse_truth(line):
    """cache first line -> dict or None. Only thiscall member form qualifies."""
    m = TRUTH_RE.match(line.strip())
    if not m:
        return None
    ret, cc, qname, params = m.groups()
    params = params.strip()
    pl = split_args(params) if params else []
    this_cls = None
    real = []
    for p in pl:
        tm = re.match(r'^(.*?\*)\s*this$', p.strip()) or \
             re.match(r'^(int|_DWORD|void)\s+this$', p.strip())
        if p.strip().endswith('this') and ('*' in p or re.match(r'^(int|_DWORD|void)\s+this$', p.strip())):
            tt = re.sub(r'\s*\*\s*$', '*', p.strip()[:-4].strip())
            if tt.endswith('*') or tt in ('int', '_DWORD', 'void'):
                this_cls = tt.rstrip('*').strip() or None
            continue
        nm = re.search(r'([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*$', p)
        real.append(p)
    qparts = qname.split('::')
    return {'ret': ret.strip(), 'cc': cc, 'qname': qname,
            'cls': qparts[-2] if len(qparts) >= 2 else None,
            'name': qparts[-1], 'real': real, 'this_cls': this_cls,
            'raw_this': any(p.strip().endswith('this') for p in pl)}

def truth_has_this(line):
    """thiscall member detection: explicit __thiscall or a `*this` param."""
    if '__thiscall' in line:
        return True
    m = re.search(r'\(([^)]*)\)', line)
    if not m:
        return False
    first = split_args(m.group(1))
    return bool(first) and re.search(r'\bthis\s*$', first[0].strip()) is not None

# ---------------------------------------------------------------- load inputs
sig = json.load(open(os.path.join(ROOT, 'signals.json'), encoding='utf-8', errors='replace'))
name2addrs = collections.defaultdict(list)
addr2sym = {}
for addr, v in sig['symbols'].items():
    name2addrs[v['name']].append(addr)
    addr2sym[addr] = v

census = json.load(open(os.path.join(ROOT, '.omo', 'tu_errors.json')))
err_names = collections.Counter()      # thiscall-confirmed entries
err_names_cls = collections.Counter()  # class-ownership-fallback entries (C2671/C2511)
for tu, el in census.items():
    for e in el:
        code = None
        for c in ('error C2664', 'error C2671', 'error C2660', 'error C2511'):
            if c in e:
                code = c.split()[-1]
                break
        if not code:
            continue
        qname = ''
        # C2671/C2511/C2660 quote (gamemd::)Cls::Name directly
        m = re.search(r'“(?:gamemd::)?([A-Za-z_]\w*(?:::[A-Za-z_]\w*)+)”', e)
        if m:
            qname = m.group(1)
        elif code in ('C2664', 'C2511'):
            # these quote the full display signature: strip return+params
            m2 = re.search(r'“(.+?)”\s*:', e)
            if m2:
                head = m2.group(1)
                i = head.rfind('(')
                head = head[:i].strip() if i >= 0 else head.strip()
                parts = head.split()
                cand = re.sub(r'^[\*\&]+', '', parts[-1]) if parts else ''
                cand = re.sub(r'^gamemd::', '', cand)
                if '::' in cand:
                    qname = cand
        if not qname or '::' not in qname:
            continue
        cc = set(addr2sym[a].get('call_convention')
                 for a in name2addrs.get(qname, []))
        if cc == {'thiscall'}:
            err_names[qname] += 1
        elif code in ('C2671', 'C2511'):
            # def-site evidence of membership (binding failure cascade);
            # truth gate below falls back to class ownership
            err_names_cls[qname] += 1

print('thiscall error callees from census:', len(err_names),
      ' errors:', sum(err_names.values()),
      '| class-fallback entries:', len(err_names_cls),
      sum(err_names_cls.values()))

# ---------------------------------------------------------------- decl index
# (cls, name) -> [(file, line_idx, param_str, addr, full_line)]
decl_idx = collections.defaultdict(list)
DECL_RE = re.compile(
    r'^\s*(?:virtual\s+|static\s+|inline\s+|explicit\s+)*'
    r'([\w:<>,\s\*&\(\)]+?)\s*~?([A-Za-z_]\w*)\s*\(([^;()]*(?:\([^;()]*\)[^;()]*)*)\)\s*'
    r'(?:const)?\s*;\s*(?://\s*(0x[0-9A-Fa-f]+)?.*)?$')
for fn in os.listdir(E4_HPP):
    if not fn.endswith('.hpp'):
        continue
    path = os.path.join(E4_HPP, fn)
    cur_cls = None
    depth = 0
    try:
        lines = open(path, encoding='utf-8', errors='replace').read().split('\n')
    except OSError:
        continue
    for i, ln in enumerate(lines):
        cm = re.match(r'\s*(?:class|struct)\s+([A-Za-z_]\w*)[^;]*$', ln)
        if cm:
            cur_cls = cm.group(1)
        depth += ln.count('{') - ln.count('}')
        if depth <= 0:
            continue
        dm = DECL_RE.match(ln)
        if dm and dm.group(3) is not None and ('0x' in ln or dm.group(2)):
            decl_idx[(cur_cls, dm.group(2))].append(
                (path, i, dm.group(3), dm.group(4), ln))
print('decl index entries:', sum(len(v) for v in decl_idx.values()))

# ---------------------------------------------------------------- def index
# addr -> (file, head_line_idx, head_text)   (def head, single line)
def_idx = {}
DEF_RE = re.compile(
    r'^\s*([\w:<>,\s\*&\(\)]+?)\s*((?:[A-Za-z_]\w*::)*~?[A-Za-z_]\w*)'
    r'\s*\(([^;{}]*)\)\s*(?:const)?\s*\{?\s*$')
# G42.11: def index over the WHOLE src tree (was src/e4/*_e4.cpp only) --
# building.cpp / supplied_bodies.cpp / gap2_defs family carry // 0xADDR
# anchored defs the old index never saw (BuildingClass::Construct 65-error
# case was skip-def-none purely from this gap)
def_iter = []
for _root, _dirs, _files in os.walk(E4_CPP_ROOT):
    if '_generated' in _root or 'raw_decomp' in _root:
        continue
    for _fn in sorted(_files):
        if not _fn.endswith('.cpp'):
            continue
        def_iter.append(os.path.join(_root, _fn))
for path in def_iter:
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
        # blank lines and namespace openers do not invalidate the marker
        if ln.strip() == '' or re.match(r'^namespace\s+\w+\s*\{', ln):
            continue
        pend = None
print('def index addrs:', len(def_idx))

# ---------------------------------------------------------------- helpers
def cache_line(addr):
    p = os.path.join(CACHE, 'func_%s.json' % addr)
    if not os.path.exists(p):
        p = os.path.join(CACHE, 'func_0x%X.json' % int(addr, 16))
    if not os.path.exists(p):
        return None
    t = json.load(open(p, encoding='utf-8', errors='replace'))
    dec = t.get('decompiled', '')
    return dec.split('\n')[0] if dec else None

def body_slice(lines, head_i):
    out = []
    for j in range(head_i + 1, min(head_i + 800, len(lines))):
        if lines[j] == '}':
            break
        out.append(lines[j])
    return out

CAST_RE = re.compile(r'^\(\s*[A-Za-z_][\w:]*\s*(?:const\s*)?\*\s*\)\S')
SIMPLE_RE = re.compile(r'^[A-Za-z_]\w*(?:->[A-Za-z_]\w*|\.[A-Za-z_]\w*)*$')

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
    """map IDA-isms in a truth param type to compilable C spellings"""
    for a, b in IDA_TYPE_MAP:
        tp = re.sub(r'\b%s\b' % a, b, tp)
    return tp.strip()

def split_typed_param(tp, fallback_name):
    """truth param string -> (type_text, name). Guard for unnamed params."""
    tp = tp.strip()
    tm = re.match(r'^(.*?)([A-Za-z_]\w*)\s*(\[[^\]]*\])?$', tp)
    if tm and tm.group(1).strip():
        return norm_type(tm.group(1)), tm.group(2)
    if tm and tm.group(2) and not tm.group(1).strip():
        # whole token looked like a name: bare type (unnamed param)
        return norm_type(tm.group(2)), fallback_name
    return norm_type(tp), fallback_name

def render_param(ttype, pname, arr=''):
    ttype = ttype if (ttype.endswith('*') or ttype.endswith('&')) else ttype + ' '
    return ttype + pname + (arr or '')

stats = collections.Counter()
plan = []   # (kind, file, line_idx, new_text)
caller_plan = []   # legacy, unused

_line_cache = {}
_dirty = set()

def get_lines(path):
    if path not in _line_cache:
        _line_cache[path] = open(
            path, encoding='utf-8', errors='replace').read().split('\n')
    return _line_cache[path]

E4_CPP_FILES = [os.path.join(E4_CPP, fn) for fn in os.listdir(E4_CPP)
                if fn.endswith('_e4.cpp')]

for qname, ecount in sorted(list(err_names.items()) + list(err_names_cls.items()),
                             key=lambda kv: -kv[1]):
    cls, name = qname.rsplit('::', 1)
    if name == cls or name.startswith('~') or name.startswith('operator'):
        stats['skip-ctor-dtor-op'] += 1
        continue
    addrs = [a for a in name2addrs[qname]
             if addr2sym[a].get('call_convention') == 'thiscall']
    if not addrs and qname in err_names_cls and len(name2addrs[qname]) == 1:
        # single-address fallback for class-owned entries whose signals CC
        # was never recorded as thiscall (def-site evidence wins)
        addrs = name2addrs[qname]
    if len(addrs) != 1:
        stats['skip-addr-ambig'] += 1
        continue
    addr = addrs[0]
    tline = cache_line(addr)
    if not tline:
        stats['skip-no-truth'] += 1
        continue
    t = parse_truth(tline)
    # G42.6: class-ownership fallback — C2671/C2511 def-site evidence means
    # the function IS a member even when the cache truth line renders no
    # explicit this (e.g. `int Debug::Log()` 0-param member)
    member_ok = truth_has_this(tline) or (
        qname in err_names_cls and t and t['cls'] == cls
        and not t['raw_this'])
    if not t or not member_ok:
        stats['skip-no-truth'] += 1
        continue
    if t['cls'] != cls:
        stats['skip-truth-cls-mismatch'] += 1
        continue
    K = len(t['real'])
    # ---- decl candidates in the e4 hpp for this class+name
    cands = decl_idx.get((cls, name), [])
    if len(cands) != 1:
        stats['skip-decl-miss-or-multi:%s' % ('multi' if cands else 'none')] += 1
        continue
    dpath, di, dparams, daddr, dline = cands[0]
    dpl = split_args(dparams)
    # G42.6: identity anchors that override the arity gate —
    #   (a) the decl's 0x annotation equals the truth address
    #   (b) the decl is a C2597 interim stub (wrong by definition)
    identity = (daddr and daddr.lower() == addr.lower()) or ('C2597' in dline)
    if not identity and (len(dpl) < K or len(dpl) > K + 2):
        stats['skip-decl-arity'] += 1
        continue
    # ---- def
    defs = def_idx.get(addr.lower(), [])
    defs = [x for x in defs if ('%s::' % cls) in x[2] and re.search(
        r'(\b|::)%s\s*\(' % re.escape(name), x[2])]
    if len(defs) != 1:
        stats['skip-def-miss-or-multi'] += 1
        continue
    fpath, fi, fhead, fparams = defs[0]
    flines = open(fpath, encoding='utf-8', errors='replace').read().split('\n')
    fpl = split_args(fparams)
    body = body_slice(flines, fi)
    body_txt = '\n'.join(body)
    # drop def params unused in body until len == K (prefer tail, then head)
    keep = list(fpl)
    order = list(range(len(keep)))[::-1] + list(range(len(keep)))
    dropped = []
    for pos in order:
        if len(keep) - len(dropped) <= K:
            break
        nm = re.search(r'([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*$', keep[pos])
        if not nm:
            continue
        if not re.search(r'\b%s\b' % re.escape(nm.group(1)), body_txt):
            dropped.append(pos)
    if len(keep) - len(dropped) != K:
        stats['skip-def-param-shape'] += 1
        continue
    # surviving params, positional; types := truth
    surv = [(pos, keep[pos]) for pos in range(len(keep)) if pos not in dropped]
    new_fpl = []
    for (pos, old), tp in zip(surv, t['real']):
        nm = re.search(r'([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*$', old)
        arr = nm.group(2) or '' if nm else ''
        pn = nm.group(1) if nm else 'a%d' % (pos + 1)
        ttype, _tn = split_typed_param(tp, pn)
        new_fpl.append(render_param(ttype, pn, arr))
    # ---- def head edit (through the shared cache so later phases see it)
    new_fhead = re.sub(r'\([^;{}]*\)',
                       '(' + ', '.join(new_fpl) + ')', fhead, count=1)
    get_lines(fpath)[fi] = new_fhead
    _dirty.add(fpath)
    # ---- decl edit: names := def surviving names, types := truth
    new_dpl = []
    for idx_d, ((_, _old), tp) in enumerate(zip(surv, t['real'])):
        pn = re.search(r'([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*$',
                       new_fpl[idx_d]).group(1)
        ttype, _tn = split_typed_param(tp, pn)
        new_dpl.append(render_param(ttype, pn))
    # rebuild decl line preserving annotation
    dm = DECL_RE.match(dline)
    ret_txt = dm.group(1)
    # G42.6: C2597 interim stubs and static-qualified decls are wrong by
    # definition for a thiscall member — return type := truth, static goes
    if 'C2597' in dline:
        ret_txt = norm_type(t['ret'])
        ann = '  // was C2597 interim stub, := truth 0x%s' % addr
    else:
        ret_txt = re.sub(r'^(?:static|virtual|inline|explicit)\s+', '',
                         ret_txt.strip())
        ann = ''
        am = re.search(r'//.*$', dline)
        if am:
            ann = '  ' + am.group(0)
    lead = dline[:len(dline) - len(dline.lstrip())]
    new_dline = ('%s%s%s(%s);%s' % (lead, ret_txt + ' ' if ret_txt else '',
                                    name, ', '.join(new_dpl), ann))
    get_lines(dpath)[di] = new_dline
    _dirty.add(dpath)
    stats['callee-planned'] += 1
    stats['errs-covered'] += ecount
    # ---- caller rewrite: Cls::Name(this_arg, real...) -> member call form
    site_re = re.compile(r'\b(?:gamemd::)?%s::%s\s*\(' %
                         (re.escape(cls), re.escape(name)))
    for cpath in E4_CPP_FILES:
        clines = get_lines(cpath)
        touched = False
        for ci, cln in enumerate(clines):
            if not site_re.search(cln):
                continue
            if cpath == fpath and ci == fi:
                continue          # the def head itself — rewritten separately
            newline = cln
            # iterate all occurrences on the line
            out = []
            pos = 0
            for mm in site_re.finditer(newline):
                open_i = newline.find('(', mm.end() - 1)
                # balanced scan
                depth = 0
                j = open_i
                end_i = -1
                while j < len(newline):
                    c = newline[j]
                    if c == '(':
                        depth += 1
                    elif c == ')':
                        depth -= 1
                        if depth == 0:
                            end_i = j
                            break
                    j += 1
                if end_i < 0:
                    stats['caller-skip-multiline'] += 1
                    continue
                argstr = newline[open_i + 1:end_i]
                args = split_args(argstr) if argstr.strip() else []
                if len(args) != K + 1:
                    stats['caller-skip-arity'] += 1
                    continue
                a0 = args[0]
                # universal value-preserving receiver: the binary passed the
                # numeric address; reinterpret it back to the class pointer.
                recv = '((%s *)(%s))' % (cls, a0)
                rest = ', '.join(args[1:])
                repl = '%s->%s(%s)' % (recv, name, rest)
                out.append((pos, mm.start(), newline[pos:mm.start()]))
                out.append((mm.start(), end_i + 1, repl))
                pos = end_i + 1
            if pos:
                out.append((pos, len(newline), newline[pos:]))
                newline = ''.join(seg for _s, _e, seg in out)
                clines[ci] = newline
                touched = True
                stats['caller-rewritten'] += 1
        if touched:
            _dirty.add(cpath)

print()
for k, v in stats.most_common(30):
    print(' ', v, k)
print()
print('planned decl/def pairs:', stats['callee-planned'],
      ' covering census errors:', stats['errs-covered'])

if not APPLY and not os.environ.get('DIAG'):
    print('\n(dry run; no files written)')
    sys.exit(0)

if not APPLY:
    # diagnostic mode: dump the def-stage skip reasons
    skipd = collections.Counter()
    exd = {}
    for qname, ecount in sorted(err_names.items(), key=lambda kv: -kv[1]):
        cls, name = qname.rsplit('::', 1)
        if name == cls or name.startswith('~') or name.startswith('operator'):
            continue
        addrs = [a for a in name2addrs[qname]
                 if addr2sym[a].get('call_convention') == 'thiscall']
        if len(addrs) != 1:
            continue
        addr = addrs[0]
        tline = cache_line(addr)
        if not tline or not truth_has_this(tline):
            continue
        t = parse_truth(tline)
        if not t or t['cls'] != cls:
            continue
        defs = def_idx.get(addr.lower(), [])
        if not defs:
            skipd['no-def-idx-entry'] += 1
            exd.setdefault('no-def-idx-entry', (qname, addr))
            continue
        kept = [x for x in defs if ('%s::' % cls) in x[2] and re.search(
            r'(\b|::)%s\s*\(' % re.escape(name), x[2])]
        if len(kept) == 1:
            skipd['KEPT'] += 1
        elif len(kept) > 1:
            skipd['multi-def'] += 1
            exd.setdefault('multi-def', (qname, addr,
                                         [x[2][:70] for x in kept[:3]]))
        else:
            skipd['filtered-out'] += 1
            exd.setdefault('filtered-out', (qname, addr,
                                            [x[2][:70] for x in defs[:2]]))
    print()
    for k, v in skipd.most_common():
        print(' ', v, k)
    for k in ('no-def-idx-entry', 'multi-def', 'filtered-out'):
        if k in exd:
            print(k, '->', exd[k])
    sys.exit(0)

# ---------------------------------------------------------------- apply
n = 0
for path in sorted(_dirty):
    open(path, 'w', encoding='utf-8', errors='replace', newline='\n').write(
        '\n'.join(_line_cache[path]))
    n += 1
print('files written:', n)
