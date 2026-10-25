#!/usr/bin/env python3
"""x129_vocab_anchors.py — X129 shared passes for fresh-cache (x128) body landing.

Two orthogonal, deterministic, text-level passes (both idempotent):

1. VFptr vocabulary alignment (W1): freshly rendered bodies reference the
   repaired til's vptr members as `vfptr` / `vfptr1..N` (offset 0/4/8/...).
   The corpus carriers (X75 convention) declare those bytes as `ptr_0`,
   `ptr_4`, ... (or an exact byte-granular member for sub-dword accesses).
   This pass maps every vfptr access onto the receiver's carrier member:

     bare 4-byte access        -> member at 4N          (scalar types only)
     vtable slot call          -> corpus element form   (pointer/array members)
     LOBYTE/BYTEk(vfptrN)      -> exact byte member at 4N+k, else macro on member@4N
     &this->vfptrN             -> &this->member         (any member type)
     install `= (int)&X::vftable'` -> elided by caller (X11) before this pass

   Unmappable sites are never invented: the caller refuses the def.

2. Anchor re-attachment (W2): the x128 cache renders clean Hex-Rays output
   (no inline /*0xADDR*/), while the corpus convention keeps one anchor per
   statement.  This pass transfers anchors from a donor text (the old cache
   render, else the corpus body) onto the fresh render, statement-aligned:

     statement split -> normalized match -> difflib positional fallback.

No member is invented, no existing cast is altered, no count is fudged:
the caller asserts per-def anchor coverage before replacing anything.
"""
import difflib
import json
import os
import re
from collections import defaultdict, deque

# ---------------------------------------------------------------- anchors
ANCHOR_ANY = re.compile(r'/\*0x([0-9a-fA-F]+)\*/')
ANCHOR_END = re.compile(r'/\*0x([0-9a-fA-F]+)\*/\s*$')

# ---------------------------------------------------------------- carriers
MEM_RE = re.compile(
    r'^\s{2,8}(.+?)\s*\b([A-Za-z_]\w*)\s*(?:\[(\d+)\])?\s*;\s*'
    r'//\s*(?:0x)?([0-9A-Fa-f]+)\s*$')
STRUCT_RE = re.compile(r'^\s*(?:struct|class)\s+([A-Za-z_]\w*)\s*[:{]')

_SCALAR_OK = re.compile(
    r'^(?:unsigned\s+int|int|unsigned|long|unsigned\s+long|short|'
    r'unsigned\s+short|char|unsigned\s+char|signed\s+char|long long|'
    r'unsigned long long|_DWORD|_WORD|_BYTE|BOOL|DWORD|WORD|BYTE)\b')
_PTR = re.compile(r'\*\s*$')
_ARR = re.compile(r'\[\d+\]\s*$')


def _decl_width(decl, arr):
    """(width_bytes, kind) kind in {'scalar','ptr','arr'}."""
    d = decl.strip()
    if arr:
        try:
            n = int(arr)
        except ValueError:
            n = 1
        return n, 'arr'
    if '*' in d:
        return 4, 'ptr'
    if re.search(r'\b(double|float)\b', d):
        return (8 if 'double' in d else 4), 'scalar'
    if re.search(r'\b__int64|long long\b', d):
        return 8, 'scalar'
    if re.search(r'\b(short|unsigned short|__int16|WORD)\b', d):
        return 2, 'scalar'
    if re.search(r'\b(char|unsigned char|__int8|BYTE|bool)\b', d):
        return 1, 'scalar'
    return 4, 'scalar'


def parse_carriers(classes_dir):
    """cls -> {offset: [(decl, name, width, kind)]} (all aliases kept)."""
    carriers = defaultdict(lambda: defaultdict(list))
    if not os.path.isdir(classes_dir):
        return carriers
    for fn in sorted(os.listdir(classes_dir)):
        if not fn.endswith('.hpp'):
            continue
        cur = None
        depth = 0
        with open(os.path.join(classes_dir, fn), encoding='utf-8',
                  errors='replace') as fh:
            for ln in fh:
                m = STRUCT_RE.match(ln)
                if m and cur is None:
                    cur = m.group(1)
                    depth = ln.count('{') - ln.count('}')
                    continue
                if cur is not None:
                    depth += ln.count('{') - ln.count('}')
                    if depth <= 0:
                        cur = None
                        depth = 0
                        continue
                    mm = MEM_RE.match(ln)
                    if mm:
                        w, kind = _decl_width(mm.group(1), mm.group(3))
                        carriers[cur][int(mm.group(4), 16)].append(
                            (mm.group(1).strip(), mm.group(2), w, kind))
    return carriers


# ---------------------------------------------------------------- vocab map
MACROS = {'LOBYTE': 0, 'BYTE1': 1, 'BYTE2': 2, 'HIBYTE': 3,
          'WORD1': 2, 'LOWORD': 0, 'HIWORD': 2}
BYTE_MACROS = ('LOBYTE', 'BYTE1', 'BYTE2', 'HIBYTE')
VF_TOKEN = re.compile(r'\b(vfptr)(\d*)\b')

# receiver -> vfptr, with preceding macro-capture done by the caller context
RECV_VF = re.compile(r'([A-Za-z_][\w]*(?:\[[^\]]*\])?(?:\.\w+\[[^\]]*\])*?)'
                     r'(->|\.)(vfptr)(\d*)\b')


def _member_at(carrier, off):
    return (carrier or {}).get(off) or []


def _pick(carrier, off, want):
    """Choose member alias at off: exact kind match first, else any."""
    ents = _member_at(carrier, off)
    if not ents:
        return None
    for e in ents:
        if e[3] == want:
            return e
    return ents[0]


class VocabMapper:
    def __init__(self, carriers, this_cls, globals_scalars=(), local_types=None,
                 globals_typed=None):
        self.carriers = carriers
        self.this_cls = this_cls
        self.globals_scalars = set(globals_scalars)
        self.locals = dict(local_types or {})
        self.globals_typed = dict(globals_typed or {})
        self.stats = defaultdict(int)
        self.unmapped = []

    # -- rewrite helpers -------------------------------------------------
    def _emit(self, recv_text, sep, name):
        """Corpus form for RECV<sep>Member.

        this -> `this->Name` (canonical corpus receiver); a declared-array
        global keeps pointer decay (`g->Name`); a struct-value receiver
        (array element or reference) uses dot; locals keep their own sep."""
        if recv_text == 'this':
            return 'this->' + name
        base = re.match(r'^([A-Za-z_]\w*)', recv_text)
        base_name = base.group(1) if base else recv_text
        if base_name in self.globals_typed:
            if '[' in recv_text:
                return recv_text + '.' + name       # array element (value)
            return recv_text + ('.' if sep == '.' else '->') + name
        # locals / anything else: keep the original separator
        return recv_text + sep + name

    def _carrier(self, recv, recv_kind):
        if recv == 'this':
            return self.carriers.get(self.this_cls or '')
        return None   # non-this receivers are resolved by caller-supplied info

    def map_text(self, text):
        """Rewrite vfptr vocabulary; returns (text, n_unmapped_sites)."""
        out = []
        for ln in text.split('\n'):
            out.append(self.map_line(ln))
        return '\n'.join(out), len(self.unmapped)

    def map_line(self, ln):
        if 'vfptr' not in ln:
            return ln
        changed = True
        guard = 0
        while changed and guard < 20:
            changed = False
            guard += 1
            new = self._map_line_once(ln)
            if new != ln:
                ln = new
                changed = True
        return ln

    def _map_line_once(self, ln):
        # 1. macro-wrapped accesses: MACRO(RECV->vfptrN)
        for mac in BYTE_MACROS:
            pat = re.compile(
                r'\b%s\s*\(\s*([A-Za-z_][\w]*(?:->\w+\[[^\]]*\])*?)\s*(->|\.)(vfptr)(\d*)\s*\)'
                % mac)
            m = pat.search(ln)
            if m:
                return self._sub_macro(ln, m, mac)
        # 2. address-of: &RECV->vfptrN
        m = re.search(r'&\s*([A-Za-z_][\w]*(?:\[[^\]]*\])?)(->|\.)(vfptr)(\d*)\b', ln)
        if m:
            return self._sub_addr(ln, m)
        # 3. vtable slot call: (CAST)(RECV->vfptr + N)
        m = re.search(
            r'\(\s*\*\s*\(\s*([A-Za-z_][^()]*(?:\([^()]*\))*)\)\s*\(\s*'
            r'([A-Za-z_][\w]*(?:\[[^\]]*\])?)\s*(->|\.)(vfptr)(\d*)\s*\+\s*(\d+)\s*\)',
            ln)
        if m:
            return self._sub_slotcall(ln, m)
        # 4. bare receiver access
        m = RECV_VF.search(ln)
        if m:
            return self._sub_bare(ln, m)
        return ln

    # -- resolvers ------------------------------------------------------
    def _resolve(self, recv, sep, n):
        """-> (cls, carrier) or (None, None) for unmappable receiver.

        Receiver order: `this`, body-typed locals, typed globals (declared
        as carrier-class objects/pointers/arrays in src headers)."""
        base = re.match(r'^([A-Za-z_]\w*)', recv)
        base_name = base.group(1) if base else recv
        if recv == 'this' or base_name == 'this':
            cls = self.this_cls
        elif recv in self.locals or base_name in self.locals:
            cls = self.locals.get(recv) or self.locals.get(base_name)
        elif base_name in self.globals_typed:
            cls = self.globals_typed[base_name]
        else:
            return None, None
        if not cls:
            return None, None
        return cls, self.carriers.get(cls)

    def _note_unmapped(self, ln, reason):
        self.stats['unmapped'] += 1
        self.unmapped.append((reason, ln.strip()[:160]))

    def _sub_macro(self, ln, m, mac):
        recv, sep, _vf, nd = m.group(1), m.group(2), m.group(3), m.group(4) or ''
        k = MACROS[mac]
        off = 4 * (int(nd) if nd else 0)
        cls, carrier = self._resolve(recv, sep, off)
        if carrier is None:
            self._note_unmapped(ln, 'macro-recv:' + recv)
            return ln
        tgt = off + k
        ent = _pick(carrier, tgt, 'scalar')      # exact byte member preferred
        if ent:
            self.stats['macro-exact'] += 1
            return ln[:m.start()] + '%s(%s)' % (mac, self._emit(recv, sep, ent[1])) \
                + ln[m.end():]
        ent = _pick(carrier, off, None)          # any member at base
        if ent:
            self.stats['macro-base'] += 1
            return ln[:m.start()] + '%s(%s)' % (mac, self._emit(recv, sep, ent[1])) \
                + ln[m.end():]
        self._note_unmapped(ln, 'macro-no-member@%X' % off)
        return ln

    def _sub_addr(self, ln, m):
        recv, sep, _vf, nd = m.group(1), m.group(2), m.group(3), m.group(4) or ''
        base = re.match(r'^([A-Za-z_]\w*)', recv)
        base_name = base.group(1) if base else recv
        if base_name in self.globals_scalars and base_name not in self.globals_typed:
            self.stats['addr-scalar-global'] += 1
            return ln[:m.start()] + '&' + recv + ln[m.end():]
        cls, carrier = self._resolve(recv, sep, 0)
        if carrier is None:
            self._note_unmapped(ln, 'addr-recv:' + recv)
            return ln
        off = 4 * (int(nd) if nd else 0)
        ent = _pick(carrier, off, None)
        if not ent:
            self._note_unmapped(ln, 'addr-no-member@%X' % off)
            return ln
        self.stats['addr'] += 1
        return ln[:m.start()] + '&' + self._emit(recv, sep, ent[1]) + ln[m.end():]

    def _sub_slotcall(self, ln, m):
        cast, recv, sep, _vf, nd, nbytes = m.groups()
        off = 4 * (int(nd) if nd else 0)
        base = re.match(r'^([A-Za-z_]\w*)', recv)
        base_name = base.group(1) if base else recv
        # scalar-global label used as a struct base (til renders the dword at
        # the label address as `.vfptr`): the slot table lives AT the label,
        # so the corpus form is `(*(CAST)&RECV + N/4)` -- the label address is
        # the table base (no invented cast: the render's own fn-ptr cast
        # provides the element stride).
        if (base_name in self.globals_scalars and base_name not in self.globals_typed
                and int(nbytes) % 4 == 0):
            self.stats['slot-scalar-global'] += 1
            return (ln[:m.start()] + '(*(%s)&%s + %d' %
                    (cast.strip(), recv, int(nbytes) // 4) + ln[m.end():])
        cls, carrier = self._resolve(recv, sep, off)
        if carrier is None:
            self._note_unmapped(ln, 'slot-recv:' + recv)
            return ln
        ent = _pick(carrier, off, None)
        if not ent:
            self._note_unmapped(ln, 'slot-no-member@%X' % off)
            return ln
        decl, name, w, kind = ent
        recv_expr = self._emit(recv, sep, name)
        cast = cast.strip()
        if off != 0:
            # secondary vtable slot call via vfptrN value
            self.stats['slot2'] += 1
            return (ln[:m.start()] + '((%s)(%s)) + %s' %
                    (cast, recv_expr, nbytes) + ln[m.end():])
        if kind == 'scalar':
            # scalar member VALUE + byte offset (int arithmetic)
            self.stats['slot-scalar'] += 1
            return (ln[:m.start()] + '((%s)(%s + %s))' %
                    (cast, recv_expr, nbytes) + ln[m.end():])
        # pointer/array member: corpus element form *(CAST)recv.M + N/4
        if int(nbytes) % 4:
            self._note_unmapped(ln, 'slot-nondiv4')
            return ln
        self.stats['slot-elem'] += 1
        return (ln[:m.start()] + '*(%s)%s + %d' %
                (cast, recv_expr, int(nbytes) // 4) + ln[m.end():])

    def _sub_bare(self, ln, m):
        recv, sep, _vf, nd = m.group(1), m.group(2), m.group(3), m.group(4) or ''
        off = 4 * (int(nd) if nd else 0)
        base = re.match(r'^([A-Za-z_]\w*)', recv)
        base_name = base.group(1) if base else recv
        if base_name in self.globals_scalars and base_name not in self.globals_typed:
            # scalar global used as base: semantic = RECV[0] is unreachable
            # without a cast; the corpus form is &RECV-based arithmetic.
            self._note_unmapped(ln, 'bare-scalar-global:' + recv)
            return ln
        cls, carrier = self._resolve(recv, sep, off)
        if carrier is None:
            self._note_unmapped(ln, 'bare-recv:' + recv)
            return ln
        ent = _pick(carrier, off, None)
        if not ent:
            self._note_unmapped(ln, 'bare-no-member@%X' % off)
            return ln
        decl, name, w, kind = ent
        pre = ln[:m.start()]
        post = ln[m.end():]
        recv_expr = self._emit(recv, sep, name)
        if kind in ('scalar',) and w >= 4:
            self.stats['bare-scalar'] += 1
            return pre + recv_expr + post
        if kind == 'ptr':
            # pointer member in a bare (integer-typed) use: the fresh render
            # typed the til member int, so the value use is integer
            # semantics -- the corpus form is (int)recv.M (same pattern the
            # corpus itself carries at these sites).  EXCEPT comparisons: an
            # int-compare on a pointer member must stay pointer-typed so
            # fix_pointer_compare can produce (void *)-1 (an int cast here
            # would create an int==void* mismatch instead).
            if re.match(r'\s*(==|!=|<|>|<=|>=)', post):
                self.stats['bare-ptr-cmp'] += 1
                return pre + recv_expr + post
            self.stats['bare-ptr-cast'] += 1
            return pre + '(int)' + recv_expr + post
        # narrow member (byte-granular carrier layout): the corpus renders the
        # same instruction through the byte member (the old til typed these
        # bytes 1-wide; ReadBool-arg family sites are byte reads).  Arrays
        # need the [0] element form (the bare name would decay to a pointer).
        self.stats['bare-narrow-byte'] += 1
        if kind == 'arr':
            return pre + recv_expr + '[0]' + post
        return pre + recv_expr + post



# ------------------------------------------------------- comparison forms
def fix_pointer_compare(text, carriers, this_cls):
    """`this->M == -1` with pointer-typed M -> `== (void *)-1` (C2446 guard).
    Only fires when the member is a pointer, the operand is a bare -1, and
    the member access is not already integer-cast (`(int)this->M`)."""
    carrier = carriers.get(this_cls or '', {})
    out = text
    for off, ents in carrier.items():
        for decl, name, w, kind in ents:
            if kind != 'ptr':
                continue
            pat = re.compile(
                r'(->\s*%s\s*)(==|!=|<|>|<=|>=)\s*(-1\b)' % re.escape(name))

            def _sub(m):
                start = m.start()
                pre = out[:start]
                # guard: `(int)this->M` / `(unsigned int)this->M` -- the access
                # is already scalar-cast; adding (void *) would create an
                # int==void* mismatch (both passes fight).
                if re.search(r'\(\s*[\w\s]+\)\s*$', pre):
                    return m.group(0)
                return '%s%s (void *)-1' % (m.group(1), m.group(2))

            out = pat.sub(_sub, out)
    return out


# ---------------------------------------------------------------- anchors
def split_statements(text):
    """Split body text into statements. Returns list of
    {'lines': [...], 'anchors': [addr_str,...], 'norm': str}."""
    stmts = []
    cur = []

    def flush():
        if not cur:
            return
        blob = '\n'.join(cur)
        anchors = ANCHOR_ANY.findall(blob)
        norm = ANCHOR_ANY.sub('', blob)
        norm = re.sub(r'//[^\n]*', '', norm)      # register/comment churn
        norm = re.sub(r'\s+', '', norm)
        stmts.append({'lines': list(cur), 'anchors': anchors, 'norm': norm})
        cur.clear()

    depth = 0   # paren/bracket depth (suppresses `;` inside for(...) etc.)
    brace = 0   # brace depth (block structure only)
    for ln in text.split('\n'):
        code = re.sub(r'//.*$', '', ln)
        code = re.sub(r'/\*.*?\*/', '', code)
        cur.append(ln)
        for ch in code:
            if ch in '([':
                depth += 1
            elif ch in ')]':
                depth = max(0, depth - 1)
            elif ch == ';' and depth == 0:
                flush()
            elif ch == '{':
                brace += 1
            elif ch == '}':
                brace = max(0, brace - 1)
        st = code.strip()
        if st.endswith('{') or st == '}' or st.endswith('}'):
            flush()
    flush()
    return stmts


def render_stmts(stmts):
    out = []
    for s in stmts:
        lines = list(s['lines'])
        if s['anchors'] and not any('/*0x' in l for l in lines):
            # anchor trails the statement's last line (corpus single-line
            # convention; multi-line statements keep count, position within
            # the statement is not consumed downstream — the verifier strips
            # anchors before event extraction)
            for extra in reversed(s['anchors'][1:]):
                lines[-1] = lines[-1].rstrip() + '  /*0x%s*/' % extra
            lines[-1] = lines[-1].rstrip() + '  /*0x%s*/' % s['anchors'][0]
        out.extend(lines)
    return '\n'.join(out)


def transfer_anchors(new_text, donor_text):
    """Attach donor anchors onto new_text statements.

    Matching: exact normalized statement text, difflib positional alignment,
    then leading-token prefix matching (statement starts survive re-renders
    better than full text).  ALL anchors of a matched donor statement
    transfer.  Returns (text, stats)."""
    dstats = {'exact': 0, 'pos': 0, 'prefix': 0, 'lost': 0, 'donor-anchors': 0}
    ds = split_statements(donor_text)
    ns = split_statements(new_text)
    dstats['donor-anchors'] = sum(len(s['anchors']) for s in ds)
    by_norm = defaultdict(deque)
    for s in ds:
        if s['anchors']:
            by_norm[s['norm']].append(list(s['anchors']))
    # pass 1: exact norm match
    for s in ns:
        if s['anchors'] or not s['norm']:
            continue
        q = by_norm.get(s['norm'])
        if q:
            s['anchors'].extend(q.popleft())
            dstats['exact'] += 1
    # pass 2: difflib positional over sequences
    sm = difflib.SequenceMatcher(None, [s['norm'] for s in ds],
                                 [s['norm'] for s in ns], autojunk=False)
    unmatched_old = []
    unmatched_new = []
    for tag, i1, i2, j1, j2 in sm.get_opcodes():
        if tag == 'equal':
            continue
        if tag == 'replace' and (i2 - i1) == (j2 - j1):
            for k in range(j2 - j1):
                so, sn = ds[i1 + k], ns[j1 + k]
                if sn['anchors'] or not so['anchors'] or not sn['norm']:
                    continue
                sn['anchors'].extend(so['anchors'])
                dstats['pos'] += 1
            continue
        unmatched_old.extend(i for i in range(i1, i2) if ds[i]['anchors'])
        unmatched_new.extend(j for j in range(j1, j2)
                             if not ns[j]['anchors'] and ns[j]['norm'])
    # pass 3: leading-token prefix match (first 20 norm chars), unique both sides
    from collections import Counter as _C
    old_by_pref = defaultdict(list)
    for i in unmatched_old:
        old_by_pref[ds[i]['norm'][:20]].append(i)
    pref_counts = _C(ds[i]['norm'][:20] for i in unmatched_old)
    new_pref_counts = _C(ns[j]['norm'][:20] for j in unmatched_new)
    for j in list(unmatched_new):
        pref = ns[j]['norm'][:20]
        if (pref_counts.get(pref) == 1 and new_pref_counts.get(pref) == 1
                and len(old_by_pref[pref]) == 1):
            i = old_by_pref[pref][0]
            ns[j]['anchors'].extend(ds[i]['anchors'])
            dstats['prefix'] += 1
            unmatched_new.remove(j)
            unmatched_old.remove(i)
    # pass 4: greedy similarity pairing (>= 0.55) over the leftovers
    unmatched_old = sorted(set(unmatched_old))
    unmatched_new = sorted(set(unmatched_new))
    pair = []
    for i in unmatched_old:
        best = None
        for j in unmatched_new:
            r = difflib.SequenceMatcher(None, ds[i]['norm'],
                                        ns[j]['norm']).ratio()
            if r >= 0.55 and (best is None or r > best[0]):
                best = (r, j)
        if best is not None:
            pair.append((best[0], i, best[1]))
    for _, i, j in sorted(pair, key=lambda t: -t[0]):
        if i in unmatched_old and j in unmatched_new:
            ns[j]['anchors'].extend(ds[i]['anchors'])
            dstats['prefix'] += 1
            unmatched_old.remove(i)
            unmatched_new.remove(j)
    moved = dstats['exact'] + dstats['pos'] + dstats['prefix']
    total = sum(len(s['anchors']) for s in ns)
    dstats['lost'] = max(0, dstats['donor-anchors'] - total)
    dstats['attached'] = total
    return render_stmts(ns), dstats
