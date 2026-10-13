#!/usr/bin/env python3
"""X4: land COMPLETE signatures tree-wide -- ban the `...` fallback.

This is the declaration-authority unification pass for the surfaces that
retired one-off scripts (g57b5/g57w11/w14e3/w16g4/w18j2/g57c5/g57w20m1 and
the fix_plateau/fix_member_static_calls/c2039 stub families) historically
emitted as variadic placeholders.  It owns those outputs now: every
declaration whose parameter list is `...` (strict) or ends with `, ...`
(typed-head) is either

  * rewritten to a COMPLETE prototype resolved through
    signature_authority.py (signals.json -> ida_cache fill), keeping the
    callable name / return type / qualifiers / trailing comment verbatim
    and appending a `// x4:<source>@<addr>` provenance tag, or
  * an explicit Q4 gap: caller-bearing -> dropped + recorded as a CSP
    defect (address, callers, observed call shapes); caller-free ->
    dropped + deprecated/unresolved ledger entry.  A loud print is always
    emitted; nothing is silent.

Genuine varargs (printf-family, project LogWrite, ...) are hand-listed in
anchors/vararg_whitelist.json with per-entry evidence and are skipped.

Idempotent: after the first --apply the tree contains no target sites, so
a second run finds zero sites and writes nothing.

Usage:
    python land_complete_signatures.py [--apply] [--verbose]
Outputs (always):
    .omo/unresolved_reports/x4_land_signatures.json   (per-site ledger)
    .omo/unresolved_reports/x4_q4_defects.json        (CSP defect list)
    .omo/unresolved_reports/x4_deprecated_ledger.json (dropped, no callers)
"""
import json
import re
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
sys.path.insert(0, str(Path(__file__).resolve().parent))
from signature_authority import Authority, sanitize_params  # noqa: E402

APPLY = "--apply" in sys.argv
VERBOSE = "--verbose" in sys.argv
SRC = ROOT / "src"
REPORT = ROOT / ".omo" / "unresolved_reports"
WHITELIST = ROOT / "anchors" / "vararg_whitelist.json"
EXTS = {".h", ".hpp", ".c", ".cpp", ".inc", ".inl", ".ipp", ".tpp"}

NAME_KW = {"if", "for", "while", "switch", "return", "sizeof", "else",
           "case", "do", "catch", "defined", "throw", "new", "delete",
           "and", "or", "not", "typeid"}

# one declaration line: [pre] NAME ( params ) [tail]
#   pre    -- no '(' / ';' (avoids call/nested-paren lines)
#   params -- no parens; must contain the ellipsis
#   tail   -- rest of the line (closures '}', ';', '{', comments)
SITE = re.compile(
    r'^(?P<pre>[^;()]*?)\b(?P<name>[A-Za-z_~][\w:~]*)\s*'
    r'\((?P<params>[^;()]*?)\)(?P<tail>[^()]*)$')
ELL = re.compile(r'\.\.\.')
ADDR = re.compile(r'(?:0x|raw\s*|@\s*)([0-9A-Fa-f]{6,8})\b')
CLASS_RE = re.compile(r'^\s*(?:class|struct)\s+([A-Za-z_]\w*)\b[^;()]*[{;]')
# X4 stub families whose names are NOT function identities with authority
# signatures: member-field call stubs (flat-layout member name minted as a
# method by the plateau fixers) and vtable slot dispatch receivers (G6).
MEMBER_MARK = re.compile(r'plateau: C2039/C3861 stub|C2597 interim stub|C2597')
SLOT_MARK = re.compile(r'G6 vtable slot dispatch|vtable slot \+')


def is_vararg_params(params):
    p = params.strip()
    if not p:
        return False
    if '...' not in p:
        return False
    # strict `...` or typed-head `T a, ...` (last element is the ellipsis)
    if p == '...':
        return True
    return bool(re.search(r',\s*\.\.\.\s*$', p))


def pre_ok(pre):
    """Reject call-shaped prefixes (`=`, `,`, `.`, `->`, operator tails)."""
    s = pre.strip()
    if not s:
        return False
    if s.endswith(('=', ',', '.', '->', '!', '+', '-', '/', '%', '?', ':')):
        return False
    last = re.split(r'[\s\*&<>]+', s)[-1]
    if last in NAME_KW:
        return False
    return True


def load_whitelist():
    if not WHITELIST.exists():
        return {}
    try:
        d = json.loads(WHITELIST.read_text(encoding='utf-8'))
    except (OSError, ValueError):
        print('!! [x4] whitelist unreadable:', WHITELIST)
        return {}
    out = {}
    for e in d.get('entries', []):
        out[e['name']] = e
    return out


def strip_block_state(lines):
    """Yield (idx, code) with block comments blanked (stateful)."""
    in_block = False
    for i, ln in enumerate(lines):
        code = []
        j = 0
        while j < len(ln):
            if in_block:
                k = ln.find('*/', j)
                if k == -1:
                    j = len(ln)
                else:
                    in_block = False
                    j = k + 2
                continue
            k2 = ln.find('//', j)
            kb = ln.find('/*', j)
            if k2 != -1 and (kb == -1 or k2 < kb):
                code.append(ln[j:k2])
                j = len(ln)
            elif kb != -1:
                code.append(ln[j:kb])
                in_block = True
                j = kb + 2
            else:
                code.append(ln[j:])
                j = len(ln)
        yield i, ''.join(code)


TYPEISH = re.compile(
    r'\b(?:int|void|char|short|long|float|double|bool|unsigned|signed|'
    r'size_t|__int8|__int16|__int32|__int64|wchar_t|auto|const|static|'
    r'extern|virtual|inline|struct|class|union|enum|__\w+)\b|[<>\*&]')


def is_call_site(code, name):
    """True iff `name(` occurs in a call context (not a declaration,
    definition head, or ctor-initializer entry).  X4 Q4 caller evidence
    must not count the tree's own decls/defs as callers (observed
    false-positive classes: `static bool IsMoving(...);`,
    `virtual int owningHouseIndex() const;`, `: Items(other.Items)`)."""
    for m in re.finditer(r'(?<![\w])' + re.escape(name) + r'\s*\(', code):
        pre = code[:m.start()]
        ps = pre.rstrip()
        if ps.endswith('='):
            continue            # immediate assignment RHS is odd; skip
        if re.search(r'(?:^|\s):\s*$', ps):
            continue            # ctor-initializer entry `: Name(`
        tm = re.search(r'([\w:<>,\s\*&\[\]]+?)\s*$', ps)
        if tm and TYPEISH.search(tm.group(1)):
            # possible decl/def head -- inspect the tail after the close
            depth = 0
            tail = None
            for i in range(m.end() - 1, len(code)):
                ch = code[i]
                if ch == '(':
                    depth += 1
                elif ch == ')':
                    depth -= 1
                    if depth == 0:
                        tail = code[i + 1:].strip()
                        break
            if tail is None:
                return True     # unbalanced on line -> treat as call
            t = tail
            if t.startswith(';') and '=' not in ps:
                continue        # declaration
            if t == '' or t.startswith('{'):
                continue        # definition head (body starts here/next)
            if t.startswith('const') and (';' in t or t.startswith('const {')
                                          or '{' in t):
                continue        # const decl/def tail
            return True
        return True
    return False


def caller_index(names):
    """Exact-token call-site samples for the given name set (single pass,
    one combined alternation regex -- O(files), not O(files x names)).
    Only genuine call contexts count (is_call_site)."""
    if not names:
        return {}
    names = sorted(names)
    combined = re.compile(r'(?<![\w])(?:%s)\s*\('
                          % '|'.join(re.escape(n) for n in names))
    by_name = {n: re.compile(r'(?<![\w])' + re.escape(n) + r'\s*\(')
               for n in names}
    out = {n: [] for n in names}
    print('caller_index: scanning tree for %d name(s)...' % len(names),
          flush=True)
    n_done = 0
    for p in sorted(SRC.rglob('*')):
        if p.suffix.lower() not in EXTS or not p.is_file():
            continue
        n_done += 1
        if n_done % 500 == 0:
            print('  caller_index: %d files scanned' % n_done, flush=True)
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        for i, code in strip_block_state(lines):
            if '(' not in code or not combined.search(code):
                continue
            if '...' in code:
                # a variadic declaration line is not a caller (X4 self-match
                # guard: the stub `static double f(...);` matched itself and
                # flipped every gap to caller-bearing)
                continue
            for n in names:
                if len(out[n]) >= 4:
                    continue
                if by_name[n].search(code) and is_call_site(code, n):
                    s = lines[i].strip()
                    if s.startswith('//'):
                        continue
                    out[n].append('%s:%d: %s'
                                  % (p.relative_to(ROOT), i + 1, s[:150]))
    return out


def name_ok(site_name, r):
    """X4 discrimination guard: a name-based resolution is accepted only if
    the authority symbol's name demonstrably corresponds to the site name
    (exact / last component / flat `Class_Method` spelling)."""
    if r is None or not r.sig_name:
        return True
    sn = r.sig_name
    sl = site_name.lower()
    if sn.lower() == sl or sn.rsplit('::', 1)[-1].lower() == sl:
        return True
    if sn.replace('::', '_').lower() == sl:
        return True
    return False


# ======================================================================
# X13: G42 stub-block signature sync.
#
# Sweep-scope extension for X4.  Historical G42 sig-sync waves froze a
# block of CLASS-MEMBER declarations to their STUBBED definitions and
# tagged them
#     // G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache
# X4's `...` sweep never matched them: their parameter lists are closed
# (non-variadic) shapes with wrong content, so the site regex skipped them.
#
# X13 rewrites BOTH the declaration and the matching definition head from
# the same signature authority X4 uses (signals.json), and rules
# virtualness from the X11 vtable authority plus an independent PE scan
# ("is this VA materialized as a 4-byte value anywhere in the image?" --
# a function never stored as a pointer cannot be dispatched through a
# vtable; vtables are arrays of such pointers in .rdata).
#
# Virtualness rules (never guess; fail-loud):
#   * addr is an authority vtable slot           -> `virtual` present
#   * declared virtual, addr stored as an
#     ALIGNED pointer in .rdata, but no slot     -> FLAG: keep as-is, record
#   * declared virtual, no slot / no aligned
#     .rdata pointer                             -> drop `virtual` (record)
#   * identity guard: authority symbol's class::
#     method must equal the declaring class and
#     the marker's method name; otherwise skip + record the gap
# ======================================================================
X13_MARKER = 'G42 sig-sync: def stubbed pending retranslation'
X13_DIR = ROOT / '.omo' / 'evidence' / 'optimization' / 'x13'
X13_LEDGER = X13_DIR / 'x13_g42_ledger.json'
VT_AUTH_PATH = ROOT / 'anchors' / 'vtable_authority.json'
GAMEMD_EXE = Path(r'D:\RA2MD\gamemd.exe')
X13_CC_KW = {'stdcall': '__stdcall', 'fastcall': '__fastcall',
             'cdecl': '__cdecl'}
X13_STMT_KW = {'return', 'else', 'if', 'while', 'for', 'switch', 'case',
               'do', 'catch', 'throw', 'sizeof', 'new', 'delete'}


def x13_norm(a):
    s = str(a).strip().lower()
    if s.startswith('0x'):
        s = s[2:]
    return '0x' + (s.lstrip('0') or '0')


def x13_load_slots():
    d = json.loads(VT_AUTH_PATH.read_text(encoding='utf-8'))
    slots = {}
    for vk, vv in d.get('vtables', {}).items():
        cls = vv.get('class_rtti') or ''
        for sl in vv.get('slots') or []:
            f = sl.get('func')
            if f:
                slots.setdefault(x13_norm(f), []).append(
                    [vk, sl.get('slot'), cls])
    return slots


class X13Binary:
    """Independent PE scan: is the VA materialized as a 4-byte LE value?"""

    def __init__(self, path):
        self.ok = False
        self.d = b''
        self.secs = []
        try:
            d = path.read_bytes()
        except OSError:
            return
        if d[:2] != b'MZ':
            return
        e = struct.unpack_from('<I', d, 0x3C)[0]
        if d[e:e + 4] != b'PE\0\0':
            return
        coff = e + 4
        nsec, = struct.unpack_from('<H', d, coff + 2)
        opt_size, = struct.unpack_from('<H', d, coff + 16)
        opt = coff + 20
        image_base, = struct.unpack_from('<I', d, opt + 28)
        s = opt + opt_size
        for _ in range(nsec):
            name = d[s:s + 8].rstrip(b'\0').decode('latin-1')
            _vsize, va, rawsize, rawptr = struct.unpack_from('<IIII', d, s + 8)
            self.secs.append((name, image_base + va, rawsize, rawptr))
            s += 40
        self.d = d
        self.ok = True

    def occurrences(self, va):
        out = []
        pat = struct.pack('<I', va)
        for name, sva, rs, rp in self.secs:
            raw = self.d[rp:rp + rs]
            off = raw.find(pat)
            while off != -1:
                out.append((name, sva + off))
                off = raw.find(pat, off + 1)
        return out


def _x13_strip(code, in_block):
    """Blank line/block comments; returns (code, in_block_state)."""
    out = []
    i = 0
    while i < len(code):
        if in_block:
            k = code.find('*/', i)
            if k == -1:
                return ''.join(out), True
            in_block = False
            i = k + 2
            continue
        k2 = code.find('//', i)
        kb = code.find('/*', i)
        if k2 != -1 and (kb == -1 or k2 < kb):
            out.append(code[i:k2])
            return ''.join(out), False
        if kb != -1:
            out.append(code[i:kb])
            i = kb + 2
            in_block = True
            continue
        out.append(code[i:])
        return ''.join(out), False
    return ''.join(out), in_block


def x13_scan_sites():
    """All files carrying the X13 marker, with declaring-class context."""
    sites = []
    for p in sorted(SRC.rglob('*')):
        if p.suffix.lower() not in EXTS or not p.is_file():
            continue
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        stack = []
        pending = None
        in_block = False
        for i, ln in enumerate(lines):
            code, in_block = _x13_strip(ln, in_block)
            cm = re.match(
                r'^\s*(?:class|struct)\s+([A-Za-z_]\w*)\b(.*)$', code)
            if cm and ';' not in cm.group(2).split('{')[0]:
                if '{' in cm.group(2):
                    stack.append(cm.group(1))
                else:
                    pending = cm.group(1)    # brace on the next line(s)
            elif pending and '{' in code:
                stack.append(pending)
                pending = None
            if X13_MARKER in ln:
                sites.append({'file': p, 'idx': i, 'line': ln,
                              'cls': stack[-1] if stack else None})
            if re.match(r'^\s*\}', code) and stack:
                stack.pop()
    return sites


def x13_find_defs(cls, mth):
    """Strict definition-head lookup `RET Class::Method(...)`; call-shaped
    lines (`return X::Y(...)`) are excluded by a statement guard."""
    name_re = re.compile(
        r'^\s*(?P<pre>[A-Za-z_][\w:<>,\s\*&]*?)\b' + re.escape(cls) + r'::'
        + re.escape(mth) + r'\s*\(')
    hits = []
    for p in sorted(SRC.rglob('*.cpp')):
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        for i, ln in enumerate(lines):
            m = name_re.match(ln)
            if not m:
                continue
            first = re.split(r'[\s\*&]+', ln.strip())[0]
            if first in X13_STMT_KW:
                continue
            # locate matching close paren; tail must be a definition tail
            depth = 0
            pos = None
            for j in range(m.end() - 1, len(ln)):
                if ln[j] == '(':
                    depth += 1
                elif ln[j] == ')':
                    depth -= 1
                    if depth == 0:
                        pos = j
                        break
            if pos is None:
                continue
            tail = ln[pos + 1:]
            tail_code = re.sub(r'/\*.*?\*/', '', tail)
            tail_code = tail_code.split('//')[0]
            if ';' in tail_code:
                continue    # statement, not a definition
            hits.append((p, i, m.start(), pos, tail))
    return hits


def x13_run(au, binary, apply):
    """Plan + (optionally) apply the X13 stub-block sync.  Returns ledger."""
    slots = x13_load_slots()
    sites = x13_scan_sites()
    print('X13 G42-stub-block: %d site(s) with marker' % len(sites),
          flush=True)
    rows = []
    gaps = []
    edits = {}   # file -> {idx: newline}
    for s in sites:
        row = {'file': str(s['file'].relative_to(ROOT)),
               'line': s['idx'] + 1, 'cls': s['cls'],
               'old_decl': s['line'].strip()}
        am = re.search(r'//\s*(0x[0-9A-Fa-f]{6,8})\b', s['line'])
        mm = re.search(r'([A-Za-z_~]\w*)\s*\(([^)]*)\)', s['line'])
        if not am or not mm:
            row['gap'] = 'no address or no method name'
            gaps.append(row)
            rows.append(row)
            continue
        row['addr'] = x13_norm(am.group(1))
        mth = mm.group(1)
        r = au.resolve(addr=row['addr'])
        if r is None or r.params is None:
            row['gap'] = 'no complete signature authority entry'
            gaps.append(row)
            rows.append(row)
            continue
        sn = r.sig_name or ''
        scls = sn.rsplit('::', 1)[0] if '::' in sn else ''
        slast = sn.rsplit('::', 1)[-1]
        if slast != mth or (scls and s['cls'] and scls != s['cls']):
            row['gap'] = ('identity mismatch: authority=%s declaring=%s::%s'
                          % (sn, s['cls'], mth))
            gaps.append(row)
            rows.append(row)
            continue
        ret = re.sub(r'#\d+', 'void', (r.ret or 'void')).strip() or 'void'
        params = sanitize_params(r.params.strip())
        # ida_cache fill protos carry the thiscall receiver as an explicit
        # first parameter (`Cls *this` -> `Cls *p_this`): the member form
        # declares it implicitly -- drop the leading receiver.
        segs = params.split(', ') if params else []
        if segs and re.search(r'\bp_this\s*$', segs[0]):
            segs = segs[1:]
            params = ', '.join(segs)
        cc = (r.cc or '').strip().lower()
        cckw = X13_CC_KW.get(cc, '')
        code = s['line'].split('//')[0]
        cur_virtual = bool(re.search(r'\bvirtual\b', code))
        va = int(row['addr'], 16)
        hits = slots.get(row['addr'], [])
        occ = binary.occurrences(va) if binary.ok else []
        rdata_aligned = [o for o in occ if o[0] == '.rdata' and o[1] % 4 == 0]
        if hits:
            new_virtual, vnote = True, 'slot'
            row['vtable_slots'] = hits
        elif cur_virtual and rdata_aligned:
            new_virtual, vnote = True, 'flagged(rdata-ptr)'
            row['flag'] = ['%s@0x%x' % (o[0], o[1]) for o in rdata_aligned]
        else:
            new_virtual = False
            vnote = ('dropped(no-binary-vtable)'
                     if cur_virtual else 'nonvirtual')
            if cur_virtual:
                row['binary_occurrences'] = [
                    '%s@0x%x' % (o[0], o[1]) for o in occ]
        row['truth'] = {'ret': ret, 'cc': cc, 'params': params,
                        'sig_name': sn}
        row['virtual'] = {'was': cur_virtual, 'now': new_virtual,
                          'note': vnote}
        sig = ' '.join(x for x in [ret, cckw, '%s(%s)' % (mth, params)] if x)
        if new_virtual:
            sig = 'virtual ' + sig
        lead = s['line'][:len(s['line']) - len(s['line'].lstrip())]
        new_decl = '%s%s;  // %s (x13:signals; virt=%s)' % (
            lead, sig, am.group(1), vnote)
        row['new_decl'] = new_decl.strip()
        if new_decl.rstrip() != s['line'].rstrip():
            edits.setdefault(s['file'], {})[s['idx']] = new_decl
        # definition
        ds = x13_find_defs(s['cls'], mth)
        if len(ds) != 1:
            row['def_gap'] = '%d definition site(s)' % len(ds)
            if ds:
                row['def_sites'] = ['%s:%d' % (str(d[0].relative_to(ROOT)),
                                               d[1] + 1) for d in ds]
            gaps.append(row)
        else:
            dp, di, _ms, pos, tail = ds[0]
            dln = dp.read_text(encoding='utf-8', errors='replace').split(
                '\n')[di]
            dindent = dln[:len(dln) - len(dln.lstrip())]
            dparts = [ret] + ([cckw] if cckw else []) + [
                '%s::%s(%s)' % (s['cls'], mth, params)]
            new_def = dindent + ' '.join(dparts) + tail
            row['def'] = {'file': str(dp.relative_to(ROOT)), 'line': di + 1,
                          'old': dln.strip(), 'new': new_def.strip()}
            if new_def.rstrip() != dln.rstrip():
                edits.setdefault(dp, {})[di] = new_def
        rows.append(row)
    n_edit = sum(len(v) for v in edits.values())
    n_virt_slot = sum(1 for x in rows if x.get('virtual')
                      and x['virtual']['note'] == 'slot')
    n_virt_flag = sum(1 for x in rows if x.get('virtual')
                      and x['virtual']['note'].startswith('flagged'))
    n_virt_drop = sum(1 for x in rows if x.get('virtual')
                      and x['virtual']['note'].startswith('dropped'))
    n_virt_add = sum(1 for x in rows if x.get('virtual')
                     and not x['virtual']['was'] and x['virtual']['now'])
    print('  truth resolved: %d; gaps: %d' % (len(rows) - len(gaps),
                                              len(gaps)))
    print('  virtual: slot-kept=%d added=%d dropped=%d flagged=%d'
          % (n_virt_slot, n_virt_add, n_virt_drop, n_virt_flag))
    print('  planned line edits: %d in %d file(s)'
          % (n_edit, len(edits)))
    for g in gaps:
        print('  GAP %s:%d %s::%s -- %s'
              % (g['file'], g['line'], g.get('cls'), g.get('old_decl',
                 '')[:60], g.get('gap') or g.get('def_gap')), flush=True)
    if apply:
        n_file = 0
        for f, changes in edits.items():
            try:
                text = f.read_text(encoding='utf-8', errors='replace')
            except OSError as ex:
                print('  !! unreadable %s: %s' % (f, ex))
                continue
            lines = text.split('\n')
            for i in sorted(changes, reverse=True):
                lines[i] = changes[i]
            ok = False
            for k in range(5):
                try:
                    f.write_text('\n'.join(lines), encoding='utf-8',
                                 newline='')
                    ok = True
                    break
                except PermissionError:
                    import time
                    time.sleep(0.5 * (k + 1))
            if ok:
                n_file += 1
            else:
                print('  !! write failed %s' % f)
        print('  applied: %d file(s) rewritten' % n_file)
    X13_DIR.mkdir(parents=True, exist_ok=True)
    if sites:
        sig_path = ROOT / 'signals.json'
        st = sig_path.stat()
        X13_LEDGER.write_text(json.dumps({
            'schema': 'x13-g42-stub-sync/v1',
            'marker': X13_MARKER,
            'signals_mtime_ns': st.st_mtime_ns,
            'signals_size': st.st_size,
            'sites': len(sites), 'gaps': len(gaps),
            'virtual': {'slot_kept': n_virt_slot, 'added': n_virt_add,
                        'dropped': n_virt_drop, 'flagged': n_virt_flag},
            'planned_edits': n_edit,
            'rows': rows,
        }, indent=1, ensure_ascii=False, sort_keys=True), encoding='utf-8')
        print('  ledger: %s' % X13_LEDGER.relative_to(ROOT))
    return rows, edits


def main():
    au = Authority(ROOT)
    whitelist = load_whitelist()
    sites = []       # (path, line_idx, name, params, prespan, postspan, code)
    files = sorted(p for p in SRC.rglob('*')
                   if p.suffix.lower() in EXTS and p.is_file())
    print('scanning %d file(s)...' % len(files), flush=True)
    for fi, p in enumerate(files, 1):
        if fi % 500 == 0:
            print('  scan: %d/%d files, %d site(s)'
                  % (fi, len(files), len(sites)), flush=True)
    for p in files:
        try:
            text = p.read_text(encoding='utf-8', errors='replace')
        except OSError:
            continue
        lines = text.split('\n')
        cur_cls = None
        for i, code in strip_block_state(lines):
            if code.lstrip().startswith('#'):
                continue        # macros (LOG_TRACE(fmt, ...)) are not decls
            m = CLASS_RE.match(code)
            if m:
                cur_cls = m.group(1)
            if '...' not in code:
                continue
            sm = SITE.match(code)
            if not sm:
                continue
            if not is_vararg_params(sm.group('params')):
                continue
            name = sm.group('name')
            if name in NAME_KW or not pre_ok(sm.group('pre')):
                continue
            line_full = lines[i]
            route = 'csp_signature'
            if MEMBER_MARK.search(line_full):
                route = 'member_authority'
            elif SLOT_MARK.search(line_full) or re.match(r'^Vf\d+$', name):
                route = 'vtable_authority'
            sites.append({'file': p, 'idx': i, 'name': name,
                          'params': sm.group('params'), 'pre': sm.group('pre'),
                          'tail': sm.group('tail'), 'code': code,
                          'cls': cur_cls, 'line': line_full, 'route': route,
                          'span': (sm.start('params'), sm.end('params'))})

    print('X4 land_complete_signatures: %d site(s) with `...` in %d file(s)'
          % (len(sites), len({s['file'] for s in sites})))

    outcomes = []
    gaps = []       # unresolved sites (name-level)
    for s in sites:
        if s['name'] in whitelist:
            wl = whitelist[s['name']]
            gp = wl.get('genuine_params')
            if gp and s['params'].strip() == '...':
                # strict `(...)` skeleton of a genuine vararg -> upgrade to
                # the typed genuine form (ida-attested), still no fallback
                new = (s['code'][:s['span'][0]] + gp
                       + s['code'][s['span'][1]:])
                tag = '  // x4:whitelist-ida'
                if '//' not in new:
                    new = new.rstrip() + tag
                outcomes.append({'file': str(s['file'].relative_to(ROOT)),
                                 'line': s['idx'] + 1, 'name': s['name'],
                                 'outcome': 'resolved', 'source':
                                 'whitelist-ida', 'addr': None,
                                 'params': gp, '_newline': new})
                continue
            outcomes.append({'file': str(s['file'].relative_to(ROOT)),
                             'line': s['idx'] + 1, 'name': s['name'],
                             'outcome': 'whitelist',
                             'evidence': wl.get('evidence', [])[:1]})
            continue
        if s['route'] in ('member_authority', 'vtable_authority'):
            # known non-function stub family: never name-resolve (wrong
            # suffix matches poison e.g. `AbstractClass` -> BombClass)
            gaps.append(s)
            outcomes.append({'file': str(s['file'].relative_to(ROOT)),
                             'line': s['idx'] + 1, 'name': s['name'],
                             'outcome': 'gap', 'route': s['route']})
            continue
        # address from the comment/code (guarded: name must match)
        am = ADDR.search(s['line'])
        r = None
        if am:
            cand = '0x' + am.group(1)
            r = au.resolve(name=s['name'], addr=cand)
            if r is not None and r.sig_name and not name_ok(s['name'], r):
                r = None    # wrong-address guard
        if r is None:
            nn = s['name'].split('::')[-1] if '::' in s['name'] else s['name']
            r = au.resolve(name=s['name'],
                           prefer_cls=(s['name'].split('::')[0]
                                       if '::' in s['name'] else s['cls']))
            if r is not None and not name_ok(s['name'], r):
                r = None
            if r is None and nn != s['name']:
                r = au.resolve(name=nn, prefer_cls=s['cls'])
                if r is not None and not name_ok(nn, r):
                    r = None
        if r is None or r.params is None:
            gaps.append(s)
            outcomes.append({'file': str(s['file'].relative_to(ROOT)),
                             'line': s['idx'] + 1, 'name': s['name'],
                             'outcome': 'gap', 'route': s['route']})
            continue
        new = (s['code'][:s['span'][0]] + r.params + s['code'][s['span'][1]:])
        tag = '  // x4:%s%s' % (r.provenance,
                                ('@' + (r.addr or '')) if r.addr else '')
        if '//' not in new:
            new = new.rstrip() + tag
        outcomes.append({'file': str(s['file'].relative_to(ROOT)),
                         'line': s['idx'] + 1, 'name': s['name'],
                         'outcome': 'resolved', 'source': r.provenance,
                         'addr': r.addr, 'params': r.params,
                         '_newline': new})

    # ---- Q4 classification for gaps ------------------------------------
    print('gaps (Q4): %d' % len(gaps))
    gap_names = sorted({g['name'] for g in gaps})
    callers = caller_index(gap_names)
    defects = {}
    ledger = {}
    ROUTE_REASON = {
        'csp_signature':
            'declaration with no resolvable signature in the CSP authority',
        'member_authority':
            'flat-layout member name minted as a method stub; the call site '
            'is a member/field access -- needs member typing (X3 authority '
            '/ X5 lowering), not a CSP signature',
        'vtable_authority':
            'vtable slot dispatch receiver stub; needs vtable signature '
            'authority (engine side)',
    }
    for g in gaps:
        rows = callers.get(g['name'], [])
        key = '%s:%s' % (g['file'].relative_to(ROOT), g['idx'] + 1)
        gkey = '%s|%s' % (g['name'], g['route'])
        if rows:
            defects.setdefault(gkey, {
                'name': g['name'], 'route': g['route'], 'sites': [],
                'callers': rows,
                'reason': 'caller-bearing: '
                          + ROUTE_REASON.get(g['route'], '') +
                          ' (Q4: must-fix on the routed owner side)'})
            defects[gkey]['sites'].append(key)
        else:
            ledger.setdefault(gkey, {
                'name': g['name'], 'route': g['route'], 'sites': [],
                'reason': 'no callers in tree; historical variadic '
                          'placeholder dropped (deprecated/unresolved, Q4) '
                          + ROUTE_REASON.get(g['route'], '')})
            ledger[gkey]['sites'].append(key)
    if len(whitelist):
        print('whitelist entries applied: %d'
              % sum(1 for o in outcomes if o['outcome'] == 'whitelist'))

    # ---- apply edits ----------------------------------------------------
    if APPLY:
        byfile = {}
        for s, o in zip(sites, outcomes):
            if o['outcome'] == 'resolved':
                byfile.setdefault(s['file'], {})[s['idx']] = o['_newline']
            elif o['outcome'] == 'gap':
                byfile.setdefault(s['file'], {})[s['idx']] = None
        n_file = 0
        for f, changes in byfile.items():
            lines = f.read_text(encoding='utf-8', errors='replace').split('\n')
            # descending line order: deletions/replacements must not shift
            # the indexes of yet-unprocessed sites (partial-apply crash,
            # foreach-ascending + del -> IndexError / wrong-line deletes)
            for i in sorted(changes, reverse=True):
                new = changes[i]
                if new is None:
                    del lines[i]
                else:
                    lines[i] = new
            f.write_text('\n'.join(lines), encoding='utf-8')
            n_file += 1
        print('applied: %d file(s) rewritten' % n_file)

    # ---- reports (always) ------------------------------------------------
    REPORT.mkdir(parents=True, exist_ok=True)
    def clean(o):
        o = {k: v for k, v in o.items() if k != '_newline'}
        if o.get('outcome') == 'gap':
            key = '%s:%s' % (o['file'], o['line'])
            o['q4'] = ('defect' if any(key in d['sites']
                                       for d in defects.values())
                       else 'ledger')
        return o
    clean_outcomes = [clean(o) for o in outcomes]
    (REPORT / 'x4_land_signatures.json').write_text(json.dumps({
        'schema': 'x4-land-signatures/v1',
        'site_count': len(sites),
        'resolved': sum(1 for o in outcomes if o['outcome'] == 'resolved'),
        'whitelisted': sum(1 for o in outcomes if o['outcome'] == 'whitelist'),
        'gaps': len(gaps),
        'outcomes': clean_outcomes,
    }, indent=1, ensure_ascii=False, sort_keys=True), encoding='utf-8')
    (REPORT / 'x4_q4_defects.json').write_text(json.dumps({
        'schema': 'x4-q4-defects/v1',
        'count': len(defects),
        'defects': defects,
    }, indent=1, ensure_ascii=False, sort_keys=True), encoding='utf-8')
    (REPORT / 'x4_deprecated_ledger.json').write_text(json.dumps({
        'schema': 'x4-deprecated-ledger/v1',
        'count': len(ledger),
        'entries': ledger,
    }, indent=1, ensure_ascii=False, sort_keys=True), encoding='utf-8')
    print('report: %s' % (REPORT / 'x4_land_signatures.json'))

    # ---- X13: G42 stub-block sync (class-member decls the `...` sweep
    # cannot see; marker-driven, idempotent, fail-loud) -------------------
    binary = X13Binary(GAMEMD_EXE)
    if not binary.ok:
        print('X13 G42-stub-block: !! binary unavailable at %s -- '
              'pass skipped (fail-closed, no writes)' % GAMEMD_EXE)
    else:
        x13_run(au, binary, APPLY)

    print('APPLIED' if APPLY else 'DRY RUN (use --apply)')


if __name__ == '__main__':
    if '--x13-only' in sys.argv:
        _au = Authority(ROOT)
        _bin = X13Binary(GAMEMD_EXE)
        if not _bin.ok:
            print('X13: !! binary unavailable at %s' % GAMEMD_EXE)
            sys.exit(2)
        x13_run(_au, _bin, APPLY)
        print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
    else:
        main()
