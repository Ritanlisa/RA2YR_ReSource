#!/usr/bin/env python3
"""Resolve til-relative member expressions in generated bodies to flat members.

The typed IDA snapshot renders members that are unnamed/byte-wide in the til
as `R->?`, `R->?[N]`, `R->m_X[N]` (Hex-Rays auto names, X = base offset in
hex) and `IDA_BYTE1(R->m_C)`. Generated headers name the same bytes by
absolute offset (q004/u32_29/...). Bodies transcribed verbatim therefore
reference names that don't exist or sit at wrong offsets -> C2059/C2109.

Resolution is asm-anchored: each body line carries /*0xADDR*/ and the
snapshot export has per-instruction disassembly; the memory-reference
displacement of that line's instruction(s) IS the absolute byte offset of
the member access. Name-derived offsets (m_X base + N, byte subscripts)
are the fallback and are only used when asm is unavailable.

Scope v1: receivers `this` (class from section def line) + typed
locals/params (decl/def-line inside the same section). Globals with `.?`
are counted for phase 2.

Usage: python tools/csp_export/fix_til_members.py [--apply] [--file SUB]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
FILE_FILTER = None
if '--file' in sys.argv:
    FILE_FILTER = sys.argv[sys.argv.index('--file') + 1]

E4C = ROOT / 'src' / 'e4' / 'classes'
SNAP = ROOT / 'decompile-results' / 'full_export'
REPORT = ROOT / '.omo' / 'til_member_fix_report.txt'

rep_lines = []


def rep(s):
    rep_lines.append(s)
    print(s)


stats = {}


def bump(k, n=1):
    stats[k] = stats.get(k, 0) + n


# ---------------------------------------------------------------- headers
def type_size(ty):
    ty = (ty or '').strip()
    if not ty:
        return 4
    if ty.endswith('*'):
        return 4
    m = re.match(r'^char\s*\w+\[(\d+)\]$', ty)
    if m:
        return int(m.group(1))
    t = re.sub(r'^(unsigned|signed|const)\s+', '', ty)
    return {'bool': 1, 'char': 1, 'short': 2, 'int': 4, 'long': 4,
            'float': 4, 'double': 8, 'long long': 8}.get(t, 4)


MEM_LINE = re.compile(
    r'^\s{4}(.+?)\s+([A-Za-z_]\w*)\s*;\s*//\s*0x([0-9A-Fa-f]+)\s*$')


def load_members():
    cls = {}
    for hp in sorted(E4C.glob('*_e4.hpp')):
        if hp.name.startswith('_'):
            continue
        cur = None
        for ln in hp.read_text(encoding='utf-8', errors='replace').split('\n'):
            ms = re.match(r'^struct\s+(\w+)\s*\{', ln)
            if ms:
                cur = ms.group(1)
                cls.setdefault(cur, [])
                continue
            if cur is None:
                continue
            if re.match(r'^\};', ln):
                cur = None
                continue
            mm = MEM_LINE.match(ln)
            if mm:
                ty, nm, off = (mm.group(1).strip(), mm.group(2),
                               int(mm.group(3), 16))
                cls[cur].append((off, nm, type_size(ty), ty))
                continue
            # comment-less __pad_N / m_N lines: offset encoded in the name
            mp = re.match(
                r'^\s{4}(.+?)\s+__(pad|m)_([0-9A-Fa-f]+)\s*;\s*$', ln)
            if mp:
                ty, off = mp.group(1).strip(), int(mp.group(3), 16)
                cls[cur].append((off, '__%s_%s' % (mp.group(2),
                                                   mp.group(3)),
                                 type_size(ty), ty))
    for c in cls:
        cls[c].sort()
    return cls


CLASSES = load_members()


def member_at(cls, off):
    """(name, size, ty, how) for byte offset; exact first, then covering"""
    lst = CLASSES.get(cls)
    if not lst:
        return None
    for o, nm, sz, ty in lst:
        if o == off:
            return (nm, sz, ty, 'exact')
    best = None
    for o, nm, sz, ty in lst:
        if o < off < o + sz:
            if best is None or o > best[0]:
                best = (o, nm, sz, ty)
    if best:
        return (best[1], best[2], best[3], 'cover+%d' % (off - best[0]))
    return None


# ---------------------------------------------------------------- snapshot
def load_snap_index():
    idx = json.loads((SNAP / 'index.json').read_text(encoding='utf-8'))
    out = {}
    for k, v in idx.items():
        try:
            a = int(k, 16)
        except ValueError:
            continue
        out.setdefault(a, v['file'])
    return out


SNAP_IDX = load_snap_index()
_asm_cache = {}
_cluster_cache = {}
INS_RE = re.compile(r'^//\s+([0-9A-Fa-f]{6,8}):\s(.*)$')


def _cluster_asm(prefix):
    """asm dict for all instructions in the _addr_XX.cpp cluster file"""
    if prefix in _cluster_cache:
        return _cluster_cache[prefix]
    d = {}
    p = SNAP / 'src' / ('_addr_%s.cpp' % prefix)
    if p.exists():
        for ln in p.read_text(encoding='latin-1', errors='replace').split('\n'):
            m = INS_RE.match(ln)
            if m:
                d[int(m.group(1), 16)] = m.group(2)
    _cluster_cache[prefix] = d
    return d


def asm_for(func_addr):
    if func_addr in _asm_cache:
        return _asm_cache[func_addr]
    d = {}
    f = SNAP_IDX.get(func_addr)
    if f:
        p = SNAP / f
        if p.exists():
            for ln in p.read_text(encoding='latin-1', errors='replace').split('\n'):
                m = INS_RE.match(ln)
                if m:
                    d[int(m.group(1), 16)] = m.group(2)
    if not d:
        # section addr may be a mid-function split not present in the index;
        # fall back to the whole _addr_XX cluster file (addr-unique asm)
        d = _cluster_asm('%X' % (func_addr >> 16))
    _asm_cache[func_addr] = d
    return d


# ---------------------------------------------------------------- asm parse
REGS = {'eax', 'ebx', 'ecx', 'edx', 'esi', 'edi', 'ebp', 'esp',
        'ax', 'bx', 'cx', 'dx', 'si', 'di', 'bp', 'sp',
        'al', 'bl', 'cl', 'dl', 'ah', 'bh', 'ch', 'dh'}


def mem_refs(ins):
    """[(width, disp)] of memory references in one instruction"""
    out = []
    for m in re.finditer(r'(?:byte|word|dword)?\s*(?:ptr\s*)?\[([^\]]+)\]', ins):
        width = (m.group(0) or '')
        w = 1 if 'byte' in width else 2 if 'word' in width else \
            4 if 'dword' in width else 4
        inner = m.group(1)
        disp = 0
        neg = False
        ok = False
        for tok in re.split(r'([+\-])', inner):
            if tok == '+':
                neg = False
                continue
            if tok == '-':
                neg = True
                continue
            t = tok.strip()
            if not t or t in REGS or re.match(r'^[a-z]{2,4}$', t):
                continue
            if t.endswith('h') and re.match(r'^[0-9A-Fa-f]+h$', t):
                disp += -int(t[:-1], 16) if neg else int(t[:-1], 16)
                ok = True
                neg = False
            elif re.match(r'^\d+$', t):
                disp += -int(t, 10) if neg else int(t, 10)
                ok = True
                neg = False
        if ok:
            out.append((w, disp))
    return out


_sorted_cache = {}


def _sorted_addrs(ins_map):
    key = id(ins_map)
    if key not in _sorted_cache:
        _sorted_cache[key] = sorted(ins_map)
    return _sorted_cache[key]


def line_ins_range(ins_map, line_addr, next_addr):
    """instructions in [line_addr, next_addr) extended backwards to the
    previous control-flow boundary (IDA anchors branch-ended statements at
    the branch; the memory access lives in the cmp/lea before it).
    Instruction addresses are NOT byte-contiguous (multi-byte insns)."""
    import bisect
    addrs = _sorted_addrs(ins_map)
    i = bisect.bisect_left(addrs, line_addr)
    ins = []
    while i < len(addrs) and addrs[i] < next_addr:
        ins.append((addrs[i], ins_map[addrs[i]]))
        i += 1
    j = bisect.bisect_left(addrs, line_addr) - 1
    back = 0
    while j >= 0 and back < 12:
        t = ins_map[addrs[j]]
        if re.match(r'^(j[a-z]{1,3}\b|call|ret|loop)', t):
            break
        ins.insert(0, (addrs[j], t))
        j -= 1
        back += 1
    return ins


def analyze(ins_list):
    """-> (unique_disp or None, has_lea)"""
    disps = []
    lea = False
    for a, ins in ins_list:
        if ins.startswith('lea'):
            lea = True
        disps.extend(mem_refs(ins))
    if len(disps) == 1:
        return disps[0], lea
    return None, lea


CAST_W = {1: 'unsigned char', 2: 'unsigned short', 4: 'unsigned int',
          8: 'unsigned long long'}


# ---------------------------------------------------------------- cpp scan
SEC_HEAD = re.compile(r'^//\s*0x([0-9A-Fa-f]+)\s*$')
DEF_LINE = re.compile(
    r'^\s*(?:[\w:<>,\s\*&]+?)\s*([A-Za-z_]\w*)::(~?[A-Za-z_]\w*)\s*\(([^)]*)\)')
ADDR_CMT = re.compile(r'/\*0x([0-9A-Fa-f]+)\*/')

# receiver.(?|m_X)([N])  — receiver = full dotted/arrow chain
TIL_EXPR = re.compile(
    r'\b([A-Za-z_]\w*(?:\s*(?:->|\.)\s*[A-Za-z_]\w+)*)((?:\[\d+\])?)\s*(->|\.)\s*'
    r'(\?|m_[0-9A-Fa-f]+(?![\w]))((?:\[\d+\])?)')
IDA_BYTE_PAT = re.compile(
    r'\b(IDA_LOBYTE|IDA_HIBYTE|IDA_BYTE1|IDA_BYTE2|IDA_BYTE3|IDA_WORD1)\s*\(\s*'
    r'([A-Za-z_]\w*)\s*(->|\.)\s*(\?|m_[0-9A-Fa-f]+(?![\w]))((?:\[\d+\])?)\s*\)')
LOCAL_DECL = re.compile(
    r'^\s*([A-Za-z_][A-Za-z_0-9:\s]*?)\s*(\*+)\s*([A-Za-z_]\w+)\s*(;|=)')
LOCAL_VAL_DECL = re.compile(
    r'^\s*([A-Za-z_][A-Za-z_0-9:\s]*?)\s+([A-Za-z_]\w+)\s*(;|=)')
PARAM_DECL = re.compile(
    r'((?:unsigned|signed|const)\s+[A-Za-z_]\w*|[A-Za-z_]\w*)\s*\*\s*([A-Za-z_]\w+)\b')
SKIP_RECV = re.compile(r'^(stru_|dword_|byte_|word_|off_|unk_|g_)')
SUB_EXPR = re.compile(
    r'\b([A-Za-z_]\w*(?:\s*(?:->|\.)\s*[A-Za-z_]\w+)*)((?:\[\d+\])?)\s*(->|\.)\s*([A-Za-z_]\w+)\s*((?:\[\d+\])+)')
CAST_HINT = re.compile(r'\(\s*([A-Za-z_]\w*)\s*\*\s*\)\s*([A-Za-z_]\w+)\b')


def resolve_member(cls, off):
    mm = member_at(cls, off)
    if not mm:
        bump('skip:no-member@%X' % off)
        return None
    nm, sz, ty, how = mm
    return mm


def sub_bytes(ty, how, off_base):
    """element size for array members (byte arrays only in flat headers)"""
    m = re.match(r'^char\s*\w+\[(\d+)\]$', ty or '')
    return 1 if m else None


def process_line(ln, cls, ins_map, line_addr, next_addr, types, params):
    """returns rewritten line or None if unchanged"""
    if not TIL_EXPR.search(ln) and not IDA_BYTE_PAT.search(ln) \
            and not SUB_EXPR.search(ln):
        return None
    ins_list = line_ins_range(ins_map, line_addr, next_addr)
    if not ins_list:
        bump('skip:no-ins')
        return None
    uniq, lea = analyze(ins_list)
    changed = [False]

    def offset_for(name, sub):
        if uniq:
            bump('off:asm')
            return uniq[1], uniq[0]
        if name.startswith('m_'):
            try:
                base = int(name[2:], 16)
                off = base + (int(sub) if sub else 0)
                bump('off:name')
                return off, None
            except ValueError:
                pass
        bump('skip:no-off')
        return None, None

    def recv_class(rname):
        """resolve a receiver chain expression to a class name"""
        if rname == 'this':
            return cls
        if rname in types:
            t = types[rname]
            if t in CLASSES:
                return t
            if rname in params:
                bump('recv:param-fallback')
                return cls
            return None
        # member chain: HEAD->SEG->...->LAST (head resolves via types/this)
        segs = re.split(r'\s*(?:->|\.)\s*', rname)
        if len(segs) < 2:
            if SKIP_RECV.match(rname):
                bump('skip:global-recv')
            else:
                bump('skip:unknown-recv:' + rname)
            return None
        cur = recv_class(segs[0])
        for seg in segs[1:]:
            if cur is None:
                return None
            mm = None
            for o, nm, sz, ty in CLASSES.get(cur, []):
                if nm == seg:
                    mm = (o, nm, sz, ty)
                    break
            if not mm:
                bump('skip:chain-seg:' + seg)
                return None
            base_ty = mm[3].strip()
            if base_ty.endswith('*'):
                base_ty = base_ty[:-1].strip()
            elif base_ty.startswith('char') and '[' in base_ty:
                bump('skip:chain-array-elem')
                return None
            cur = base_ty if base_ty in CLASSES else None
            if cur is None:
                bump('skip:chain-type:' + base_ty[:30])
                return None
        return cur

    def swap_member(m, cls2, off, width, addr_taken, sub, write=False,
                    rhs_ptr=False):
        mm = resolve_member(cls2, off)
        if not mm:
            return None
        nm, sz, ty, how = mm
        is_ptr = (ty or '').strip().endswith('*')
        recv, asub, arrow, name, tsub = m.groups()
        base_txt = recv + (asub or '') + arrow
        o_base = off
        if how != 'exact':
            cov = int(how.split('+')[1])
            o_base = off - cov
            esz = sub_bytes(ty, how, o_base)
            if esz == 1:
                inner = '%s%s[%d]' % (base_txt, nm, cov) if cov else \
                    '%s%s' % (base_txt, nm)
            else:
                bump('skip:cover-inner')
                return None
        else:
            inner = base_txt + nm
        # address form: keep surrounding cast/& untouched
        if addr_taken:
            return inner
        # bare form
        w = width or 4
        if is_ptr:
            # pointer member: int RHS cannot convert (C2440) -> bit-form
            if write and not rhs_ptr:
                return '*(unsigned int *)&%s' % inner
            return inner
        if sz == w:
            return inner
        if sz < w:
            return '*(%s *)&%s' % (CAST_W.get(w, 'unsigned int'), inner)
        # member bigger than access: address-of (lea) or cast narrow
        if lea:
            return '&%s' % inner
        if write and rhs_ptr:
            return '*(void **)&%s' % inner
        return '*(%s *)&%s' % (CAST_W.get(w, 'unsigned int'), inner)

    # ---- IDA byte wrappers (do first, protect via placeholders) ----
    holders = {}

    def ida_repl(m):
        fn, recv, arrow, name, tsub = m.groups()
        cls2 = recv_class(recv)
        if cls2 is None:
            return m.group(0)
        k = {'IDA_LOBYTE': 0, 'IDA_BYTE1': 1, 'IDA_HIBYTE': 1,
             'IDA_BYTE2': 2, 'IDA_BYTE3': 3}.get(fn)
        word = fn == 'IDA_WORD1'
        off, width = offset_for(name, tsub[1:-1] if tsub else None)
        if off is None:
            return m.group(0)
        mm = resolve_member(cls2, off)
        if not mm:
            return m.group(0)
        nm, sz, ty, how = mm
        if not word and k is not None and sz == 1 and how == 'exact':
            changed[0] = True
            bump('ida-byte->member')
            return '%s%s%s' % (recv, arrow, nm)
        # keep wrapper on the base member (without subscript)
        base_off = off - (k or 0)
        bm = member_at(cls2, base_off)
        if bm:
            changed[0] = True
            bump('ida-byte-remebed')
            return '%s(%s%s%s)' % (fn, recv, arrow, bm[0])
        bump('skip:ida-byte')
        return m.group(0)

    # protect remaining IDA wrappers from the til pass with placeholders
    nph = [0]

    def protect(m):
        key = '\x00PH%d\x00' % nph[0]
        nph[0] += 1
        holders[key] = m.group(0)
        return key

    ln2 = IDA_BYTE_PAT.sub(ida_repl, ln)
    ln2 = IDA_BYTE_PAT.sub(protect, ln2)

    # ---- plain til expressions ----
    def til_repl(m):
        recv, asub, arrow, name, tsub = m.groups()
        cls2 = recv_class(recv)
        if cls2 is None:
            return m.group(0)
        if asub:
            bump('skip:array-recv')
            return m.group(0)
        off, width = offset_for(name, tsub[1:-1] if tsub else None)
        if off is None:
            return m.group(0)
        pre = ln2[:m.start()].rstrip()
        addr_taken = pre.endswith('&') or ln2.lstrip().startswith('&')
        rest = ln2[m.end():]
        write = re.match(r'\s*(=[^=]|\+=|-=|&=|\|=|\^=)', rest)
        rhs_ptr = False
        if write:
            rhs = rest[write.end():].split(';')[0].strip()
            rm = re.match(r'^[A-Za-z_]\w+$', rhs)
            if rm and rhs in types and str(types[rhs]).strip().endswith('*'):
                rhs_ptr = True
        new = swap_member(m, cls2, off, width, addr_taken, tsub,
                          write=bool(write), rhs_ptr=rhs_ptr)
        if new is None:
            return m.group(0)
        changed[0] = True
        return new

    ln3 = TIL_EXPR.sub(til_repl, ln2)

    # ---- scalar-member subscripts (C2109 family) ----
    def sub_repl(m):
        recv, asub, arrow, name, tsub = m.groups()
        if not tsub:
            return m.group(0)
        cls2 = recv_class(recv)
        if cls2 is None:
            return m.group(0)
        base = None
        for o, nm, sz, ty in CLASSES.get(cls2, []):
            if nm == name:
                base = (o, nm, sz, ty)
                break
        if base is None:
            bump('skip:sub-unknown-member')
            return m.group(0)
        bty = base[3].strip()
        if bty.endswith('*') or '[' in bty:
            return m.group(0)          # legit pointer/array subscript
        if uniq is None:
            bump('skip:sub-no-asm')
            return m.group(0)
        off = uniq[1]
        if off is None:
            bump('skip:sub-no-off')
            return m.group(0)
        pre = ln3[:m.start()].rstrip()
        addr_taken = pre.endswith('&') or ln3.lstrip().startswith('&')
        rest = ln3[m.end():]
        write = re.match(r'\s*(=[^=]|\+=|-=|&=|\|=|\^=)', rest)
        rhs_ptr = False
        if write:
            rhs = rest[write.end():].split(';')[0].strip()
            rm = re.match(r'^[A-Za-z_]\w+$', rhs)
            if rm and rhs in types and str(types[rhs]).strip().endswith('*'):
                rhs_ptr = True
        new = swap_member(m, cls2, off, uniq[0], addr_taken, tsub,
                          write=bool(write), rhs_ptr=rhs_ptr)
        if new is None:
            return m.group(0)
        changed[0] = True
        bump('sub->member')
        return new

    ln3 = SUB_EXPR.sub(sub_repl, ln3)
    for k2, v2 in holders.items():
        ln3 = ln3.replace(k2, v2)
    return ln3 if changed[0] else None


def process_cpp(p):
    txt = p.read_text(encoding='latin-1', errors='replace')
    lines = txt.split('\n')
    out = list(lines)
    heads = [(i, int(SEC_HEAD.match(l).group(1), 16))
             for i, l in enumerate(lines) if SEC_HEAD.match(l)]
    nchg = 0
    for si, (hl, addr) in enumerate(heads):
        end = heads[si + 1][0] if si + 1 < len(heads) else len(lines)
        cls = None
        types = {}
        defl = None
        for l in lines[hl + 1:hl + 8]:
            md = DEF_LINE.match(l)
            if md:
                cls = md.group(1)
                defl = md
                break
        if cls is not None and cls not in CLASSES:
            if '->?' in '\n'.join(lines[hl:end]) or '.?' in '\n'.join(lines[hl:end]):
                bump('skip:sec-no-class:%s' % cls)
            continue
        if cls is None:
            bump('sec:free-function')
        # cast hints: (Cls *)name in the section body fixes prim-typed
        # locals/params to the named class
        for t2, v2 in CAST_HINT.findall('\n'.join(lines[hl:end])):
            if t2 in CLASSES and (v2 not in types or types[v2] not in CLASSES):
                types[v2] = t2
                bump('type:cast-hint')
        params = set()
        if defl is not None:
            for t, v in PARAM_DECL.findall(defl.group(3)):
                types[v] = t
                params.add(v)
        ins_map = asm_for(addr)
        if not ins_map:
            bump('skip:no-asm')
            continue
        # local decls (first pass over section)
        for l in lines[hl + 1:end]:
            ml = LOCAL_DECL.match(l)
            if ml and ml.group(3) not in types:
                types[ml.group(3)] = ml.group(1) + ml.group(2)
            mv = LOCAL_VAL_DECL.match(l)
            if mv and mv.group(2) not in types:
                types[mv.group(2)] = mv.group(1)
        # address-comment line map for ranges
        addrs = []
        for i in range(hl + 1, end):
            mc = ADDR_CMT.search(lines[i])
            if mc:
                addrs.append((i, int(mc.group(1), 16)))
        for idx, (i, a) in enumerate(addrs):
            nxt = addrs[idx + 1][1] if idx + 1 < len(addrs) else a + 0x200
            span_end = addrs[idx + 1][0] if idx + 1 < len(addrs) else end
            # process the whole statement span: continuation lines carry the
            # pattern while the anchor line carries the /*0xADDR*/
            for j in range(i, span_end):
                if lines[j] != out[j]:
                    continue
                new = process_line(out[j], cls, ins_map, a, nxt, types, params)
                if new is not None and new != out[j]:
                    out[j] = new
                    nchg += 1
        # post-pass B: member write type coherence (both directions)
        #  - scalar member <- pointer RHS           -> bit-form
        #  - pointer member <- non-pointer non-zero -> bit-form
        #  - *(uchar/ushort*)&PtrMember = ...       -> widen to unsigned int
        #  - *(unsigned int*)&M = pointerRHS        -> void* form
        cls_members = {nm: ty for off, nm, sz, ty in CLASSES.get(cls, [])}
        for j in range(hl + 1, end):
            ln3 = out[j]
            m2 = re.match(r'^(\s*)((?:this|[A-Za-z_]\w*)(?:->|\.)([A-Za-z_]\w*))'
                          r'(\s*=[^=]\s*)(.+?);(.*)$', ln3)
            if m2:
                mname = m2.group(3)
                ty2 = cls_members.get(mname)
                if ty2:
                    rhs = m2.group(5).strip()
                    rhs_id = re.match(r'^[A-Za-z_]\w+$', rhs)
                    rhs_t = types.get(rhs) if rhs_id else None
                    rhs_ptr = rhs.startswith('(void') or                         (rhs_id and rhs_t and str(rhs_t).strip().endswith('*'))
                    ty2s = ty2.strip()
                    ptr_m = ty2s.endswith('*') or ty2s.startswith('char ')                         and '[' in ty2s
                    if rhs_ptr and not ptr_m:
                        out[j] = ('%s*(void **)&%s%s%s;%s'
                                  % (m2.group(1), m2.group(2), m2.group(4),
                                     rhs, m2.group(6)))
                        nchg += 1
                        bump('postB:scalar<-ptr')
                        continue
                    rhs_int = re.match(r'^-?\d+$', rhs) or                         (rhs_id and rhs_t and not str(rhs_t).strip().endswith('*'))
                    if ptr_m and rhs_int and rhs.strip() != '0':
                        out[j] = ('%s*(unsigned int *)&%s%s%s;%s'
                                  % (m2.group(1), m2.group(2), m2.group(4),
                                     rhs, m2.group(6)))
                        nchg += 1
                        bump('postB:ptr<-int')
                        continue
            m3 = re.match(r'^(\s*)\*\((unsigned char|unsigned short|char|short)'
                          r'\s*\*\s*\)&((?:this|[A-Za-z_]\w*)(?:->|\.)[A-Za-z_]\w*)'
                          r'(\s*=[^=]\s*)(.+?);(.*)$', ln3)
            if m3:
                mname = m3.group(3).split('->')[-1].split('.')[-1]
                # base member (strip [N])
                mname = mname.split('[')[0]
                ty2 = cls_members.get(mname)
                if ty2 and ty2.strip().endswith('*'):
                    rhs = m3.group(5).strip()
                    rhs_id = re.match(r'^[A-Za-z_]\w+$', rhs)
                    rhs_t = types.get(rhs) if rhs_id else None
                    rhs_addr = (rhs.startswith('&') or rhs.startswith('(void')
                                or re.match(r'^\([A-Za-z_]\w*\s*\*+\s*\)\s*&',
                                            rhs))
                    if ((rhs_id and rhs_t
                         and str(rhs_t).strip().endswith('*')) or rhs_addr):
                        form = '*(void **)&%s'
                    else:
                        form = '*(unsigned int *)&%s'
                    out[j] = ('%s%s%s%s;%s'
                              % (m3.group(1), form % m3.group(3),
                                 m3.group(4), rhs, m3.group(6)))
                    nchg += 1
                    bump('postB:widen-cast')
                    continue
            m4 = re.match(r'^(\s*)\*\(unsigned int\s*\*\s*\)&'
                          r'((?:this|[A-Za-z_]\w*)(?:->|\.)[A-Za-z_]\w*)'
                          r'(\s*=[^=]\s*)([A-Za-z_]\w+);(.*)$', ln3)
            if m4:
                rhs = m4.group(4)
                rhs_t = types.get(rhs)
                if rhs_t and str(rhs_t).strip().endswith('*'):
                    out[j] = ('%s*(void **)&%s%s%s;%s'
                              % (m4.group(1), m4.group(2), m4.group(3),
                                 rhs, m4.group(5)))
                    nchg += 1
                    bump('postB:cast-void-rhs')
                    continue
            m5 = re.match(r'^(\s*)\*\(unsigned int\s*\*\s*\)&'
                          r'((?:this|[A-Za-z_]\w*)(?:->|\.)[A-Za-z_]\w*)'
                          r'(\s*=[^=]\s*)(.+?);(.*)$', ln3)
            if m5:
                rhs = m5.group(4).strip()
                if (rhs.startswith('&') or rhs.startswith('(void')
                        or re.match(r'^\([A-Za-z_]\w*\s*\*+\s*\)\s*&', rhs)):
                    out[j] = ('%s*(void **)&%s%s%s;%s'
                              % (m5.group(1), m5.group(2), m5.group(3),
                                 rhs, m5.group(5)))
                    nchg += 1
                    bump('postB:cast-void-addr')
                    continue
            # pass C: pointer member read into prim-typed local -> bit-read
            m6 = re.match(r'^(\s*)([A-Za-z_]\w+)\s*=[^=]\s*'
                          r'((?:this|[A-Za-z_]\w*)(?:->|\.)[A-Za-z_]\w*)\s*;'
                          r'(.*)$', ln3)
            if m6:
                lhs, recv_m = m6.group(2), m6.group(3)
                lhs_t = str(types.get(lhs, '')).strip()
                mname = recv_m.split('->')[-1].split('.')[-1]
                ty3 = cls_members.get(mname, '')
                if (lhs_t and not lhs_t.endswith('*') and lhs != 'return'
                        and str(ty3).strip().endswith('*')):
                    out[j] = ('%s%s = *(unsigned int *)&%s;%s'
                              % (m6.group(1), lhs, recv_m, m6.group(4)))
                    nchg += 1
                    bump('postC:ptr-read-bits')
                    continue
    return out, nchg


def main():
    rep('fix_til_members %s' % ('APPLY' if APPLY else 'DRY'))
    rep('classes loaded: %d, members: %d' %
        (len(CLASSES), sum(len(v) for v in CLASSES.values())))
    tot_c = tot_l = 0
    files = sorted((ROOT / 'src' / 'e4').glob('*.cpp'))
    for p in files:
        if FILE_FILTER and FILE_FILTER not in p.name:
            continue
        out, n = process_cpp(p)
        if n:
            tot_c += 1
            tot_l += n
            if APPLY:
                p.write_bytes('\n'.join(out).encode('latin-1',
                                                    errors='replace'))
    rep('files changed: %d, lines rewritten: %d' % (tot_c, tot_l))
    rep('--- stats ---')
    for k, v in sorted(stats.items(), key=lambda x: -x[1])[:40]:
        rep('%6d  %s' % (v, k))
    REPORT.write_text('\n'.join(rep_lines), encoding='utf-8')


main()
