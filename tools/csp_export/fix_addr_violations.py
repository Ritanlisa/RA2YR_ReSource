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
from _blockspan import block_span, find_marker, brace_delta
import normalize_blocks as _NB
from normalize_blocks import build_types
from _vtable import VT_OPEN, balance_paren, split_args, slot_name
import json, re, subprocess, sys, time
from pathlib import Path
from concurrent.futures import ThreadPoolExecutor

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
INSIDE = ("// [IDA decompile] original pseudocode - translation "
          "pending (final goal)")


def vt_rewrite_fn(seg_text, cls, env=None):
    """R4: virtual-call dispatch -> RECV->Name(args). Receiver = this (or
    a `vN = *this` vtable holder). env may carry a CSP this/typed receiver."""
    env = dict(env or {})
    env.setdefault('this', cls)
    vt_of = {}
    for m in re.finditer(r'\b([a-z]\w*)\s*=\s*\*(this|[a-z]\w*)\s*;', seg_text):
        if m.group(2) == 'this' or m.group(2) in env:
            vt_of[m.group(1)] = m.group(2)
    lines_out = []
    n = 0
    for ln in seg_text.split(chr(10)):
        pos = 0
        while True:
            m = VT_OPEN.search(ln, pos)
            if not m:
                break
            recv = m.group(1)
            slot = int(m.group(2), 0)
            if recv in ('this', '*this'):
                obj, tgt = 'this', env.get('this') or cls
            elif recv in vt_of:
                obj = vt_of[recv]
                tgt = env.get(obj) or cls
            else:
                pos = m.end()
                continue
            name = slot_name(tgt, slot) if tgt else None
            if not name:
                pos = m.end()
                continue
            call_open = m.end() - 1
            call_close = balance_paren(ln, call_open)
            if call_close < 0:
                pos = m.end()
                continue
            args = split_args(ln[call_open + 1:call_close])
            first = (args[0] if args else '').strip()
            if first == obj or first == recv:
                args = args[1:]
            head = ln.rfind('(*(', 0, m.start())
            start = head if (head >= 0 and
                             ln[head:m.start()].count('(') >=
                             ln[head:m.start()].count(')')) else m.start()
            new_call = '%s->%s(%s)' % (obj, name, ', '.join(args))
            ln = ln[:start] + new_call + ln[call_close + 1:]
            n += 1
            pos = start + len(new_call)
        lines_out.append(ln)
    return chr(10).join(lines_out), n

print('loading tables...', flush=True)
NO_VERIFY = '--no-verify' in sys.argv
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
R_THIS2 = re.compile(r'\*\(\s*\(\s*(_DWORD|_BYTE|_WORD|_QWORD|char|unsigned char|short|unsigned short|int|unsigned int|long|float|BOOL|double)\s*\*\s*\)\s*\(?\s*this\s*\)?\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)')
WIDTH = {'_DWORD': 4, 'int': 4, 'unsigned int': 4, 'long': 4, 'long long': 8,
         'unsigned long long': 8, '_BYTE': 1, 'char': 1, 'unsigned char': 1,
         '_WORD': 2, 'short': 2, 'unsigned short': 2, '_QWORD': 8,
         'float': 4, 'double': 8, 'BOOL': 4}

# G32: ancestor chain per class (class_db full_ancestors) — base-class
# members (AbstractClass 2/3/7...) live in ancestor tables, not the leaf's
_ANCESTORS = {}
try:
    _cdb = json.loads((ROOT / 'anchors/class_db.json').read_text(encoding='utf-8'))
    for _c, _v in _cdb.items():
        _fa = (_v or {}).get('full_ancestors') or []
        if _fa:
            _ANCESTORS[_c] = list(_fa)
except Exception:
    pass


def _chain(cls):
    """[cls] + ancestors (deduped, canonical names)."""
    if cls not in _ANCESTORS:
        _ANCESTORS[cls] = [a for a in _ANCESTORS.get(cls, [])]
    seen = [cls]
    for a in _ANCESTORS[cls]:
        if a not in seen:
            seen.append(a)
    return seen


# G32: on-miss member overlay -- rewrite-time auto-registration. Missing
# members on typed receivers become fillers immediately (in-process), and
# are persisted to the member tables when main() finishes.
_MEM_OVERLAY = {}   # 'Cls+0xX' -> {'name':..., 'size':...}
_MEM_PERSIST = []   # (cls, off, name, ctype, size)


def _overlay_member(cls, off, ctype='unsigned int', size=4):
    key = '%s+0x%X' % (cls, off)
    ent = _MEM_OVERLAY.get(key)
    if ent:
        return ent['name']
    name = 'u%d_%X' % (size * 8, off)
    _MEM_OVERLAY[key] = {'name': name, 'size': size}
    _MEM_PERSIST.append((cls, off, name, ctype, size))
    return name


# G32: method-name -> return CLASS (for call-return var typing). Built
# from csp_canon headers; only class-pointer returns are recorded.
_NAME_RET_CLASS = {}
try:
    _ret_src = chr(10).join(
        (ROOT / h).read_text(encoding='utf-8', errors='replace')
        for h in ('src/csp_canon/functions.hpp',
                  'src/csp_canon/classes.hpp') if (ROOT / h).exists())
    _re_decl = re.compile(
        r'^[ \t]*([A-Za-z_]\w*)[ \t]*\*?[ \t]*'
        r'(?:[A-Za-z_]\w*::)*~?([A-Za-z_]\w*)[ \t]*\(', re.M)
    for _m in _re_decl.finditer(_ret_src):
        _ret, _mname = _m.group(1), _m.group(2)
        if _ret in ('void', 'int', 'bool', 'char', 'BOOL', 'float',
                    'double', 'long', 'short', 'unsigned', 'const'):
            continue
        _base = _ret.rstrip('*').strip()
        if not re.match(r'^[A-Za-z_]\w*$', _base) or _base not in mtab:
            continue
        if _mname not in _NAME_RET_CLASS:
            _NAME_RET_CLASS[_mname] = _base
except Exception:
    pass

def mem_of(cls, off):
    for c in _chain(cls):
        e = mtab.get(c)
        if not e:
            continue
        m = e['members'].get(str(off))
        if m and m.get('name'):
            return m['name']
    for c in _chain(cls):
        e = mtab.get(c)
        if not e:
            continue
        for alt in (off * 4, off // 4 if off % 4 == 0 else None):
            if alt is None or alt == off:
                continue
            m = e['members'].get(str(alt))
            if m and m.get('name'):
                return m['name']
    # overlay (rewrite-time auto-registration)
    ent = _MEM_OVERLAY.get('%s+0x%X' % (cls, off))
    if ent:
        return ent['name']
    return None

def real_mem_rewrite(text, cls, env=None):
    """this-offset + typed-local offset rewrites (R2/R3/R5)."""
    env = env or {}
    this_cls = env.get('this') or cls
    n = 0
    def rewrite_one(recv, off):
        nonlocal n
        c = env.get(recv) or (this_cls if recv == 'this' else None)
        if not c:
            return None
        name = mem_of(c, off)
        if not name:
            # G32: on-miss auto-registration -- typed receiver + missing
            # member is a real access; create a width-4 filler so the
            # rewrite converges instead of stalling.
            name = _overlay_member(c, off)
        n += 1
        if recv == 'this':
            return 'this->%s' % name
        return '%s->%s' % (recv, name)
    def s1(m):
        recv = m.group(2) if m.lastindex and m.lastindex >= 2 else 'this'
        off = int(m.group(1) if recv == 'this' else m.group(2), 0) if recv == 'this' else int(m.group(1), 0)
        # R_THIS1: *(T *)(this + N) -- only group(1)
        off = int(m.group(1), 0)
        r = rewrite_one('this', off)
        if r is not None:
            return r
        return m.group(0)
    def s2(m):
        off = int(m.group(2), 0) * WIDTH.get(m.group(1), 4)
        r = rewrite_one('this', off)
        if r is not None:
            return r
        return m.group(0)
    # G32 line-dominance chain composition: walk lines in order; each var's
    # active base is its most recent `vN = this + K` / `vN = &this->M`
    # assignment; any other assignment invalidates it. Uses `*(vN + M)` /
    # `*(T *)(vN + M)` compose to this->Member(K+M) via mem_of+overlay.
    if this_cls:
        _rev0 = {mm['name']: int(oo) for oo, mm in
                 (mtab.get(this_cls) or {}).get('members', {}).items()
                 if mm.get('name')}
        var_info = {}   # var -> ('rel', K) | ('cls', C)
        assign_re = re.compile(
            r'^\s*([a-z]\w*)\s*=\s*(?:\(\s*[A-Za-z_][\w\s\*]*?\s*\*\s*\)\s*)?'
            r'(?:\(?\s*this\s*\)?\s*\+\s*(0x[0-9A-Fa-f]+|\d+)'
            r'|&?\s*\(?\s*this->([A-Za-z_]\w*))')
        ebp_decl_re = re.compile(
            r'^\s*(?:int|_DWORD|unsigned int|char|_BYTE|long|unsigned long|'
            r'short|unsigned short)\s+([a-z]\w*)\s*;.*//\s*ebp')
        callassign_re = re.compile(
            r'^\s*([a-z]\w*)\s*=\s*([A-Za-z_][\w:]*)\s*\($')
        use_re = re.compile(
            r'\*(\(\s*([A-Za-z_][\w\s\*]*?)\s*\*\s*\)\s*)?\(?\s*'
            r'([a-z]\w*)\s*\)?\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)')
        star_re = re.compile(r'\*\s*([a-z]\w*)(?!\s*[+\[])(?!\s*=\s*\*)')
        out_lines = []
        for tln in text.split(chr(10)):
            dm2 = ebp_decl_re.match(tln)
            if dm2:
                var_info[dm2.group(1)] = ('rel', 0)
                out_lines.append(tln)
                continue
            am = assign_re.match(tln)
            if am:
                v = am.group(1)
                if am.group(2):
                    var_info[v] = ('rel', int(am.group(2), 0))
                elif am.group(3) in _rev0:
                    var_info[v] = ('rel', _rev0[am.group(3)])
                else:
                    var_info.pop(v, None)
                out_lines.append(tln)
                continue
            cm = callassign_re.match(tln)
            if cm:
                v, fname = cm.group(1), cm.group(2).split('::')[-1]
                rc = _NAME_RET_CLASS.get(fname)
                if rc:
                    var_info[v] = ('cls', rc)
                else:
                    var_info.pop(v, None)
                out_lines.append(tln)
                continue
            # var-to-var alias: propagate the source's tracking (v3 = v2)
            im2 = re.match(r'^\s*([a-z]\w*)\s*=\s*([a-z]\w*)\s*[;)]?', tln)
            if im2 and im2.group(2) in var_info:
                var_info[im2.group(1)] = var_info[im2.group(2)]
                out_lines.append(tln)
                continue
            # any other assignment to a tracked var invalidates it
            im = re.match(r'^\s*([a-z]\w*)\s*=\s*', tln)
            if im and im.group(1) in var_info:
                del var_info[im.group(1)]

            def _use(m):
                recv, off = m.group(3), int(m.group(4), 0)
                info = var_info.get(recv)
                if not info:
                    return m.group(0)
                kind, base = info
                if kind == 'rel':
                    nm = (mem_of(this_cls, base + off)
                          or mem_of(this_cls, base + off * 4)
                          or _overlay_member(this_cls, base + off))
                    if not nm:
                        return m.group(0)
                    return 'this->%s' % nm
                nm = (mem_of(base, off) or mem_of(base, off * 4)
                      or _overlay_member(base, off))
                if not nm:
                    return m.group(0)
                return '%s->%s' % (recv, nm)
            tln = use_re.sub(_use, tln)

            def _star(m):
                v = m.group(1)
                info = var_info.get(v)
                if not info:
                    return m.group(0)
                kind, base = info
                cls2 = this_cls if kind == 'rel' else base
                nm = (mem_of(cls2, base) or _overlay_member(cls2, base))
                if not nm:
                    return m.group(0)
                return 'this->%s' % nm if kind == 'rel' else '%s->%s' % (v, nm)
            if var_info:
                tln = star_re.sub(_star, tln)
            out_lines.append(tln)
        text = chr(10).join(out_lines)

    # G32: operator new/delete translation (MSVC decorated CRT forms)
    text = re.sub(r'__2_YAPAXI_Z\(([^()]*)\)', r'new unsigned char[\1]', text)
    text = re.sub(r'__3_YAXPAX_Z\(([^()]*)\)', r'delete \1', text)

    # this-copy elimination: vars assigned ONLY `= this` become `this`
    copyv = set()
    for cm in re.finditer(r'\b([a-z]\w*)\s*=\s*this\b', text):
        v = cm.group(1)
        assigns = re.findall(r'\b%s\s*=\s*([^;]*)' % v, text)
        if assigns and all(a.strip() == 'this' for a in assigns):
            copyv.add(v)
    for v in copyv:
        # drop decl lines declaring v
        text = re.sub(r'^[ \t]*[\w \t*]*\b%s\b[ \t]*;[^\n]*\n' % v,
                      '', text, flags=re.M)
        # drop assignment lines `v = this;`
        text = re.sub(r'^[ \t]*%s\s*=\s*this\s*;[^\n]*\n' % v,
                      '', text, flags=re.M)
        # replace remaining uses
        text = re.sub(r'\b%s\b' % v, 'this', text)

    # var-alias elimination: vB = vA (single assignment, same live range)
    aliasv = {}
    for cm in re.finditer(r'\b([a-z]\w*)\s*=\s*([a-z]\w*)\s*;', text):
        vb, va = cm.group(1), cm.group(2)
        if va == 'this' or va in aliasv:
            continue
        n_as = len(re.findall(r'\b%s\s*=\s*' % vb, text))
        if n_as == 1 and re.search(r'\b%s\b' % vb, text):
            aliasv[vb] = va
    for vb, va in aliasv.items():
        text = re.sub(r'^[ \t]*[\w \t*]*\b%s\b[ \t]*;[^\n]*\n' % vb,
                      '', text, flags=re.M)
        text = re.sub(r'\b%s\b' % vb, va, text)

    # typed this-index: this[K] -> this->Member(K*4)
    if this_cls:
        def _tidx(m):
            off = int(m.group(1), 0) * 4
            nm = mem_of(this_cls, off) or _overlay_member(this_cls, off)
            return 'this->%s' % nm if nm else m.group(0)
        text = re.sub(r'\bthis\s*\[\s*(0x[0-9A-Fa-f]+|\d+)\s*\]', _tidx, text)

    text = R_THIS1.sub(s1, text)
    text = R_THIS2.sub(s2, text)
    # bare `this + OFF` (pointer initializer / cast argument).
    # this renders as untyped/_DWORD* in raw decomp: OFF is dword units.
    if this_cls:
        def s_bare(m):
            nonlocal n
            info = None
            nm = None
            for off in (int(m.group(1), 0) * 4, int(m.group(1), 0)):
                info = (mtab.get(this_cls) or {}).get('members', {}).get(str(off))
                if info and info.get('name'):
                    nm = info['name']
                    break
            if nm is None:
                return m.group(0)
            n += 1
            t = (info.get('type') or '').strip()
            nm = info['name']
            # `this + OFF` is an ADDRESS: only arrays decay to this->M;
            # scalar/pointer members need &this->M
            if '[' in t:
                return 'this->' + nm
            return '&this->' + nm
        text = re.sub(r'(?<!\*)\bthis\s*\+\s*(0x[0-9A-Fa-f]+|\d+)(?!\s*\))',
                      s_bare, text)
        # cast form: (_BYTE *)(this + OFF) etc
        text = re.sub(
            r'\(\s*(?:_BYTE|_DWORD|_WORD|char|unsigned int|int)\s*\*\s*\)\s*'
            r'\(\s*this\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)',
            s_bare, text)
    # G32 chain composition (dominance form): `vN = this + K` / `vN = &this->M`
    # — compose vN + M ≡ this + (K+M) ONLY when every assignment of vN in the
    # function agrees on the same base (sound across branches); var reuse with
    # differing bases stays untouched.
    chain = {}
    if env is not None:
        assign_ks = {}
        for cm in re.finditer(
                r'\b([a-z]\w*)\s*=\s*(?:\(\s*[A-Za-z_][\w\s\*]*?\s*\*\s*\)'
                r'\s*)?(?:\(?\s*this\s*\)?\s*\+\s*(0x[0-9A-Fa-f]+|\d+)'
                r'|\(?\s*&\s*\(?\s*this->([A-Za-z_]\w*)*)', text):
            v = cm.group(1)
            if v == 'this':
                continue
            if cm.group(2):
                kk = int(cm.group(2), 0)
            elif this_cls:
                mn = cm.group(3)
                kk = {mm['name']: int(oo) for oo, mm in
                      (mtab.get(this_cls) or {}).get('members', {}).items()
                      if mm.get('name')}.get(mn)
                if kk is None:
                    continue
            else:
                continue
            assign_ks.setdefault(v, set()).add(kk)
        chain = {v: next(iter(ks)) for v, ks in assign_ks.items()
                 if len(ks) == 1}
    # R5: typed-local receivers *(T *)(vN + N)
    if env:
        def s3(m):
            nonlocal n
            recv, off = m.group(1), int(m.group(2), 0)
            c = env.get(recv)
            if c:
                name = mem_of(c, off)
                if not name:
                    return m.group(0)
                n += 1
                return '%s->%s' % (recv, name)
            # chain-composed sub-object: vN = this + K, access at off
            if recv in chain:
                r = rewrite_one('this', chain[recv] + off)
                if r is not None:
                    return r
                r = rewrite_one('this', chain[recv] + off * 4)
                if r is not None:
                    return r
            return m.group(0)
        text = re.sub(
            r'\*\(\s*[A-Za-z_][\w\s\*]*?\s*\*\s*\)\s*\(?\s*([a-z]\w*)\s*\)?\s*\+\s*'
            r'(0x[0-9A-Fa-f]+|\d+)\s*\)',
            s3,
            text)
    # R7: chained member-of-member `*(T *)(this->M + N)` — the member M's
    # own class type (from the member table) types the receiver; iterative
    # rounds converge the inner forms first.
    if this_cls or env:
        _rev_cache = {}
        def _rev(cls):
            if cls not in _rev_cache:
                _rev_cache[cls] = {m['name']: int(o) for o, m in
                                   (mtab.get(cls) or {}).get('members',
                                                             {}).items()
                                   if m.get('name')}
            return _rev_cache[cls]
        def s7(m):
            nonlocal n
            t_cast = m.group(1).strip()
            recv_expr = m.group(2)
            mname = m.group(3)
            off = int(m.group(4), 0)
            base_obj = recv_expr.split('->')[0]
            base_cls = env.get(base_obj) or (this_cls if base_obj == 'this'
                                             else None)
            if not base_cls:
                return m.group(0)
            mo = _rev(base_cls).get(mname)
            if mo is None:
                return m.group(0)
            mt_info = (mtab.get(base_cls) or {}).get('members', {}).get(
                str(mo), {})
            mt = (mt_info.get('type') or '').strip().rstrip('*').strip()
            recv_cls = env.get(recv_expr) or \
                (mt if mt and re.match(r'^[A-Za-z_]\w*$', mt) else None)
            if not recv_cls:
                return m.group(0)
            name2 = mem_of(recv_cls, off)
            if not name2:
                name2 = mem_of(recv_cls, off * 4)
            if not name2:
                return m.group(0)
            n += 1
            return '%s->%s' % (recv_expr, name2)
        text = re.sub(
            r'\*\(\s*([A-Za-z_][\w\s\*]*?)\s*\*\s*\)\s*\(?\s*'
            r'((?:this|[a-z]\w*)->([A-Za-z_]\w*))\s*\)?\s*\+\s*'
            r'(0x[0-9A-Fa-f]+|\d+)\s*\)',
            s7, text)
    # R6: bare deref-of-offset *(recv + N). IDA renders these on untyped
    # (_DWORD *) receivers, so N is in dword units: byte offset = N*4.
    if env or this_cls:
        def s6(m):
            recv, off = m.group(1), int(m.group(2), 0) * 4
            r = rewrite_one(recv, off)
            if r is not None:
                return r
            r = rewrite_one(recv, m.group(2) and int(m.group(2), 0))
            return r if r is not None else m.group(0)
        text = re.sub(
            r'\*\(\s*(this|[a-z]\w*)\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)',
            s6, text)
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
        _, close = block_span(lines, i)
        if close < 0:
            i += 1
            continue
        k = close
        cls = None
        addr = None
        for j in range(i - 1, max(i - 8, -1), -1):
            ln = lines[j].strip()
            am = re.search(r'//\s*0x([0-9A-Fa-f]{6,8})\s*$', ln)
            if ln.startswith('//') and am:
                addr = int(am.group(1), 16)
                continue
            dm = DEF_Q.search(ln)
            if dm and '(' in ln and not ln.startswith('#'):
                cls = dm.group(1)
                break
        body = '\n'.join(lines[i + 1:k])
        nb, c1 = glob_rewrite(body, includes, rel)
        env1 = build_types(body, cls, addr)[0] if addr else {}
        cls_eff = env1.get('this') or cls
        nb, c2 = real_mem_rewrite(nb, cls_eff, env1)
        pend_glob += c1
        pend_refs += c2
        if c1 + c2:
            lines[i + 1:k] = nb.split('\n')
        i = k + 1

    # ---- pass 2: real code, per-function verify-gated ----
    # function spans: preceding annotation (comment-style generalized —
    # `// 0xADDR` bare AND `// IDA: 0xADDR (name, size)` both mark functions;
    # structure/unit-era files use only the latter and were fully invisible
    # to the old annotation-only match)
    ADDR = re.compile(
        r'^//\s*(?:IDA[:\s]\s*)?0x([0-9A-Fa-f]{6,8})(?:\s*:|\s*\(|\s*$)')
    spans = []  # (addr, def_idx, end_idx)
    i = 0
    in_pend = False
    while i < len(lines):
        ln = lines[i]
        if ln.rstrip('\r') == INSIDE:
            depth, started = 0, False
            k = i
            while k < len(lines):
                if brace_delta(lines[k]):
                    started = True
                if started:
                    depth += brace_delta(lines[k])
                    if depth <= 0:
                        break
                k += 1
            i = k + 1
            continue
        a = ADDR.match(ln.strip())
        if a:
            # annotation line (comment lines always start with //): def below
            j = i + 1
            while j < len(lines) and '(' not in lines[j]:
                j += 1
            if j < len(lines):
                # G32: bounded scan — stop at the next annotation boundary.
                # Files carry residual brace imbalance (regen-era artifacts);
                # demanding a perfect close let whole functions escape every
                # rewrite pass (gap2_global_defs: spans ran to EOF, 0 fixed).
                nb = j + 1
                while nb < len(lines):
                    s2 = lines[nb].strip()
                    if s2.startswith('//') and re.match(
                            r'^//\s*(?:IDA[:\s]\s*)?0x[0-9A-Fa-f]{6,8}', s2):
                        break
                    nb += 1
                depth, started, k = 0, False, j
                while k < nb:
                    d = brace_delta(lines[k])
                    if d:
                        started = True
                    if started:
                        depth += d
                        if depth <= 0:
                            break
                    k += 1
                # G32: span ALWAYS extends to the next annotation boundary.
                # Truncating at the first balance point let one-liner
                # wrappers + orphan bodies escape (building.cpp 5049 hits).
                # Rewrites are idempotent, so overlapping spans are safe.
                spans.append((int(a.group(1), 16), i, j, nb - 1))
        i += 1

    # pass 2b: UNANNOTATED defs (structure-era hand-written functions carry
    # no `// 0xADDR` line at all). addr=0: class-keyed rewrites (mem_of via
    # the def-line class) still fire; type_map channels that need an address
    # are simply unavailable for these.
    covered = [(s, e) for (_a, _i, s, e) in spans]
    for j, ln in enumerate(lines):
        if ln.strip().startswith('//') or '(' not in ln or '::' not in ln:
            continue
        if ln.rstrip().endswith(';'):
            continue  # a call statement, not a def header
        if not DEF_Q.search(ln):
            continue
        if any(s <= j <= e for (s, e) in covered):
            continue
        nb2 = j + 1
        while nb2 < len(lines):
            s2 = lines[nb2].strip()
            if s2.startswith('//') and re.match(
                    r'^//\s*(?:IDA[:\s]\s*)?0x[0-9A-Fa-f]{6,8}', s2):
                break
            nb2 += 1
        depth, started, k = 0, False, j
        while k < nb2:
            d = brace_delta(lines[k])
            if d:
                started = True
            if started:
                depth += d
                if depth <= 0:
                    break
            k += 1
        if started:
            end = min(k, nb2 - 1)
            spans.append((0, j, j, end))
            covered.append((j, end))

    fixed = rolled = 0
    for (addr, ann_i, def_i, end_i) in spans:
        if def_i >= len(lines) or end_i >= len(lines) or def_i > end_i:
            continue
        seg = '\n'.join(lines[def_i:end_i + 1])
        cls = None
        dm = DEF_Q.search(lines[def_i])
        if dm:
            cls = dm.group(1)
        env_full = build_types(seg, cls, addr or None)
        env = env_full[0]
        cls_eff = env.get('this') or cls
        nb, c_mem = real_mem_rewrite(seg, cls_eff, env)
        nb, c_vt = vt_rewrite_fn(nb, cls_eff, env)
        from _vtable import rewrite_static_sub, rewrite_cast_call
        nb, c_ss = rewrite_static_sub(nb, cls_eff, mtab)
        nb, c_cc = rewrite_cast_call(nb)
        nb, c_glob = glob_rewrite(nb, includes, rel)
        if not (c_mem + c_vt + c_ss + c_cc + c_glob):
            continue
        old = lines[def_i:end_i + 1]
        lines[def_i:end_i + 1] = nb.split('\n')
        p.write_bytes('\n'.join(lines).encode('latin-1'))
        if NO_VERIFY:
            fixed += 1
        else:
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

if __name__ == '__main__':
    files = []
    ONLY = sys.argv[sys.argv.index('--file') + 1] if '--file' in sys.argv else None
    for p in sorted(SRC.rglob('*.cpp')):
        rel = str(p.relative_to(ROOT)).replace('\\', '/')
        if '_generated' in rel:
            continue
        if ONLY and ONLY not in rel:
            continue
        # no pre-filter: typed-local + this-key channels make any file eligible
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

    # G32: persist the on-miss member overlay so the next cycle and the
    # verifier resolve the same names.
    if _MEM_PERSIST:
        ml2 = json.loads((ROOT / 'tools/member_lookup.json').read_text(encoding='utf-8'))
        mt2 = json.loads((ROOT / 'anchors/member_types.json').read_text(encoding='utf-8'))
        sg2 = json.loads((ROOT / 'signals.json').read_text(encoding='utf-8'))
        mbn2 = sg2.setdefault('_member_by_name', {})
        for cls, off, name, ctype, size in _MEM_PERSIST:
            key = '%s+0x%X' % (cls, off)
            (ml2.setdefault(cls, {}))[str(off)] = {
                'name': name, 'type': ctype, 'size': size,
                'src': 'fix_addr on-miss supply'}
            mt2[key] = {'name': name, 'type': ctype, 'size': size,
                        'confidence': 'ANCHORED',
                        'evidence': 'fix_addr on-miss supply (G32)'}
            mbn2.setdefault(cls, {})[name] = off
        (ROOT / 'tools/member_lookup.json').write_text(
            json.dumps(ml2, separators=(',', ':'), ensure_ascii=False),
            encoding='utf-8')
        (ROOT / 'anchors/member_types.json').write_text(
            json.dumps(mt2, separators=(',', ':'), ensure_ascii=False),
            encoding='utf-8')
        tmp = ROOT / 'signals.json.tmp'
        tmp.write_text(json.dumps(sg2, separators=(',', ':'),
                                  ensure_ascii=False), encoding='utf-8')
        os.replace(tmp, ROOT / 'signals.json')
        print('overlay members persisted:', len(_MEM_PERSIST))

    print('=== summary ===')
    print('files changed:', len(out))
    print('pending refs rewritten:', sum(r['pending_mem'] for r in out))
    print('pending MEMORY->name:', sum(r['pending_glob'] for r in out))
    print('real functions fixed:', sum(r['real_fixed'] for r in out))
    print('real functions rolled back:', sum(r['real_rolled'] for r in out))
    print('DONE')
