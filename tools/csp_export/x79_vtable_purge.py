#!/usr/bin/env python3
"""X79 -- mechanical purge of residual vtable*/vtbl*/vt_* vocabulary.

Scope: every source file under src/ (.cpp/.hpp/.h/.inl/.inc).

Fixed rules implemented (see task X79):
  R1  class-member declarations  void *vtableN; / typed vtableN
        -> ptr_<HEXOFF> where HEXOFF = 4*N, uppercase, no 0x.
        Collision inside the same class -> ptr_<HEXOFF>_<classname>.
  R2  uses  recv->vtableN / recv.vtableN / bare vtableN -> same mapping.
  R3  local declarations  T vtableN = ...; -> ptr_<HEXOFF> (same mapping).
  R4  globals  extern/definitions named vtableN or vt_* :
        (a) zero uses -> delete the declaration line(s);
        (b) install target  X = &vt_...;  (write through memory) -> elide the
            whole-line assignment (X67/X68 pattern, anchor preserved);
        (c) otherwise -> rename to g_ptr_<HEXADDR> from the declaration-line
            address comment, update every code use in the tree.
  R5  vt_slot_* call sites: untouched (layout lane).
  R6  comments: untouched.  Historical words may remain only inside comments.

Applied in atomic units (one global symbol / one vtable token family), so a
symbol is never half-renamed between batches.  The script is idempotent: each
run re-scans the live tree and only edits what is still present.

Banks (reported, never half-edited):
  * function-name identifiers tt_entry_/vt_placeholder_/vt_method_/vt_NN --
    not covered by R1-R4 (no fixed rename rule); counted + listed.
  * globals with remaining non-install uses but no declaration-line address.
  * raw-data-slot install targets (X67 G5 hazard).
  * lines claimed by more than one unit.
  * local vtableN target-name collisions.

Usage:
  python tools/csp_export/x79_vtable_purge.py                 # dry run
  python tools/csp_export/x79_vtable_purge.py --apply --limit 1000
  python tools/csp_export/x79_vtable_purge.py --apply         # remaining
  python tools/csp_export/x79_vtable_purge.py --report        # dry + summary
"""
import argparse
import json
import re
import sys
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
OUT = ROOT / '.omo' / 'evidence' / 'optimization' / 'x79'
EXTS = {'.cpp', '.hpp', '.h', '.inl', '.inc'}

VT_TOK = re.compile(r'\b(vtable|vtbl)([0-9_]*)\b')
VT_NUM = re.compile(r'^(?:vtable|vtbl)(\d*)$')
DATA_TOK = re.compile(r'\bvt_(?!slot_)[A-Za-z0-9_]+\b')
FUNC_TOK = re.compile(r'\bvt_(?:entry_|placeholder_|method_|\d)[A-Za-z0-9_]*\b')
VT_SLOT = re.compile(r'\bvt_slot_[A-Za-z0-9_]+\b')
HEXADDR = re.compile(r'0x([0-9A-Fa-f]{6,8})')
RAW_GLOBAL = re.compile(r'^(?:byte|word|dword|qword|unk|off|stru|asc)_[0-9A-Fa-f]+')
KEYWORDS = {'return', 'if', 'else', 'while', 'for', 'do', 'switch', 'case',
            'goto', 'break', 'continue', 'delete', 'new', 'throw', 'sizeof'}


# --------------------------------------------------------------------------
# text helpers
# --------------------------------------------------------------------------
STR_TOKEN = re.compile(r'"(?:[^"\\\n]|\\.)*"')
CHR_TOKEN = re.compile(r"'(?:[^'\\\n]|\\.){0,8}'")


def mask_comments(s):
    """Blank // and /* */ comments (same length, newlines preserved).

    Stray quotes (corrupted IDA strings like `Descriptor')`) are ignored
    instead of opening an unterminated literal, which would poison the
    state machine for the rest of the file (found in e4/BinkMovie_e4.cpp)."""
    out = list(s)
    i, n, state = 0, len(s), 0
    while i < n:
        c = s[i]
        if state == 0:
            if c == '/' and i + 1 < n and s[i + 1] == '/':
                out[i] = ' '; out[i + 1] = ' '; i += 2; state = 1; continue
            if c == '/' and i + 1 < n and s[i + 1] == '*':
                out[i] = ' '; out[i + 1] = ' '; i += 2; state = 2; continue
            if c == '"':
                tok = STR_TOKEN.match(s, i)
                if tok:
                    end = tok.end()
                    for j in range(i, end):
                        if s[j] != '\n':
                            out[j] = ' '
                    i = end
                    continue
                i += 1; continue
            if c == "'":
                tok = CHR_TOKEN.match(s, i)
                if tok:
                    end = tok.end()
                    for j in range(i, end):
                        if s[j] != '\n':
                            out[j] = ' '
                    i = end
                    continue
                i += 1; continue
            i += 1
        elif state == 1:
            if c == '\n':
                state = 0
            else:
                out[i] = ' '
            i += 1
        elif state == 2:
            if c == '*' and i + 1 < n and s[i + 1] == '/':
                out[i] = ' '; out[i + 1] = ' '; i += 2; state = 0
            else:
                if c != '\n':
                    out[i] = ' '
                i += 1
    return ''.join(out)


def read_lines(path):
    """Read text without newline translation; split keeps CR in each line."""
    with open(path, 'r', encoding='utf-8', errors='replace', newline='') as fh:
        return fh.read().split('\n')


def write_lines(path, lines):
    with open(path, 'w', encoding='utf-8', newline='') as fh:
        fh.write('\n'.join(lines))


def strip_cr(line):
    return line[:-1] if line.endswith('\r') else line


def keep_cr(old, new):
    return new + ('\r' if old.endswith('\r') else '')


def decl_address(raw_line):
    """Address from the declaration line's own comment (// or /* */)."""
    s = raw_line
    pos = s.find('//')
    if pos >= 0:
        m = HEXADDR.search(s[pos:])
        if m:
            return m.group(1).upper()
    m = re.search(r'/\*.*?0x([0-9A-Fa-f]{6,8}).*?\*/', s)
    if m:
        return m.group(1).upper()
    return None


def vt_name(num):
    """R1/R2/R3 mapping: 4*N uppercase hex, no 0x."""
    n = int(num) if num else 0
    return 'ptr_%X' % (4 * n)


def occ_kind_vt(code_line, start, end):
    """decl | member | bare for a vtable token occurrence."""
    before = code_line[:start]
    after = code_line[end:]
    m = re.search(r'([A-Za-z_>\]\)\w\.\[\]]*)(\s*->\s*|\s*\.\s*)$', before)
    if m and m.group(2).strip() in ('->', '.'):
        return 'member'
    if re.match(r'\s*(\[[^\]]*\])?\s*(=|;)', after):
        pre = before.rstrip()
        if pre and re.search(r'[A-Za-z_\]\*]\s*\**$', pre):
            return 'decl'
    return 'bare'


def class_line_map(path, raw_lines):
    """line number -> innermost class name (brace tracked)."""
    cls_open = re.compile(r'\b(struct|class)\s+([A-Za-z_]\w*)\b[^{;]*(\{)?\s*$')
    depth = 0
    stack = []
    pending = None
    m = {}
    for ln, raw in enumerate(raw_lines, 1):
        mo = cls_open.search(strip_cr(raw))
        if mo and ';' not in raw[:mo.end()]:
            if mo.group(3):
                stack.append((mo.group(2), depth))
            else:
                pending = mo.group(2)
        elif pending and strip_cr(raw).strip().startswith('{'):
            stack.append((pending, depth))
            pending = None
        elif strip_cr(raw).strip() and not strip_cr(raw).strip().startswith('//') and pending:
            pending = None
        if stack:
            m[ln] = stack[-1][0]
        depth += raw.count('{') - raw.count('}')
        while stack and depth <= stack[-1][1]:
            stack.pop()
    return m


def class_members(raw_lines):
    """class -> member names (brace-tracked, shallow parse)."""
    cls_open = re.compile(r'\b(struct|class)\s+([A-Za-z_]\w*)\b[^{;]*\{')
    mem_rx = re.compile(r'^\s*([^;{}()]+?)\b([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;')
    members = defaultdict(set)
    depth = 0
    stack = []
    for raw in raw_lines:
        s = strip_cr(raw)
        mo = cls_open.search(s)
        if mo and ';' not in s[:mo.end()]:
            stack.append((mo.group(2), depth))
        if stack:
            mm = mem_rx.match(s)
            if mm:
                members[stack[-1][0]].add(mm.group(2))
        depth += s.count('{') - s.count('}')
        while stack and depth <= stack[-1][1]:
            stack.pop()
    return members


# --------------------------------------------------------------------------
# install-target (R4b) helpers -- X67 vocabulary
# --------------------------------------------------------------------------
CAST_RE = re.compile(
    r'\(\s*(?:const\s+)?(?:unsigned\s+|signed\s+|long\s+|short\s+)*'
    r'(?:int|char|void|float|double|bool|__int\d+|[A-Za-z_]\w*'
    r'(?:\s*::\s*[A-Za-z_]\w*)*)\s*\*+\s*\)'
    r'|\(\s*(?:const\s+)?(?:unsigned\s+|signed\s+|long\s+|short\s+)*'
    r'(?:int|char|void|float|double|bool|__int\d+|[A-Za-z_]\w*'
    r'(?:\s*::\s*[A-Za-z_]\w*)*)\s*\)')
ASSIGN_RE = re.compile(r'^\s*(?P<lhs>[^=;]+?)\s*=\s*(?P<rhs>[^;]+?)\s*;\s*$')


def pure_vt_rhs(rhs):
    """Return the single vt symbol when RHS is a pure vtable address."""
    if not re.fullmatch(r'[A-Za-z0-9_&()*\s:]+', rhs):
        return None
    toks = DATA_TOK.findall(rhs)
    if len(toks) != 1:
        return None
    tok = toks[0]
    skel = (rhs[:rhs.find(tok)] + rhs[rhs.find(tok) + len(tok):]).strip()
    prev = None
    while prev != skel:
        prev = skel
        skel = CAST_RE.sub('', skel)
        skel = re.sub(r'\(\s*&\s*\)', '', skel)
        skel = skel.replace('()', '')
    skel = re.sub(r'[A-Za-z_]\w*\s*::\s*$', '', skel)
    if re.fullmatch(r'[&\s]*', skel):
        return tok
    return None


def lhs_kind(lhs):
    """install | local | bank:<why>.

    R4b applies to every whole-line `X = <pure vt addr>;` where X writes
    through memory: star-deref, recv->slot / recv.slot, array element,
    cast-wrapped deref/array, and raw .data slots.  Only a bare local name
    is a value alias (R4c).  Control-header lines (for/if...) bank."""
    s = lhs.strip()
    if s.startswith('*&'):
        s = s[2:].strip()
    first = re.match(r'[A-Za-z_]\w*', s)
    if first and first.group(0) in KEYWORDS:
        return 'bank', 'keyword-head'
    if s.startswith('*'):
        return 'install', 'star-deref'
    prev = None
    while prev != s:
        prev = s
        s = CAST_RE.sub('', s)
        s = re.sub(r'\(\s*&\s*\)', '', s)
        s = s.replace('()', '')
    s = s.strip()
    if '&' in s or ',' in s:
        return 'bank', 'amp/comma-lhs'
    if '(' in s:
        if '*' in s or '[' in s or '->' in s:
            return 'install', 'cast-expr'
        return 'bank', 'paren-lhs'
    if '*' in s or '->' in s or '.' in s or '[' in s:
        return 'install', 'memory-write'
    if RAW_GLOBAL.match(s):
        return 'install', 'raw-global-slot'
    return 'local', 'bare-name'


# --------------------------------------------------------------------------
# scan
# --------------------------------------------------------------------------
class Scanner:
    def __init__(self):
        self.files = []
        for p in sorted(SRC.rglob('*')):
            if p.suffix.lower() in EXTS and p.is_file():
                self.files.append(p)
        self.raw = {}
        self.code = {}
        for p in self.files:
            rl = read_lines(p)
            self.raw[p] = rl
            self.code[p] = mask_comments('\n'.join(rl)).split('\n')

    def rel(self, p):
        return p.relative_to(SRC).as_posix()


# --------------------------------------------------------------------------
# planning
# --------------------------------------------------------------------------
def build_plan(sc):
    edits = []            # {unit, rule, file, idx, old, new, tok, note}
    banks = []            # {class, file, line, tok, reason, code}
    stats = Counter()
    claimed = {}          # (file, idx) -> unit

    def add_edit(unit, rule, p, idx, old, new, tok, note=''):
        key = (p, idx)
        if key in claimed and claimed[key] != unit:
            banks.append({'class': 'multi-token-line', 'file': sc.rel(p),
                          'line': idx + 1, 'tok': tok,
                          'reason': 'line claimed by %s' % claimed[key],
                          'code': strip_cr(old).strip()[:220]})
            stats['bank_multi_line'] += 1
            return False
        claimed[key] = unit
        edits.append({'unit': unit, 'rule': rule, 'file': p, 'idx': idx,
                      'old': old, 'new': new, 'tok': tok, 'note': note})
        return True

    # ---------------- data globals (vt_*) ----------------
    sym_decls = defaultdict(list)     # tok -> [(p, idx, raw)]
    sym_uses = defaultdict(list)      # tok -> [(p, idx, raw, code)]
    func_bank = []                    # function-name identifiers
    slot_count = 0
    for p in sc.files:
        for idx, cl in enumerate(sc.code[p]):
            raw = sc.raw[p][idx]
            for m in FUNC_TOK.finditer(cl):
                func_bank.append((p, idx, m.group(0), raw))
            slot_count += len(VT_SLOT.findall(cl))
            for m in DATA_TOK.finditer(cl):
                tok = m.group(0)
                if FUNC_TOK.fullmatch(tok):
                    continue
                line = cl.strip()
                if line.startswith('extern ') and re.search(
                        r'\b' + re.escape(tok) + r'\b', line):
                    sym_decls[tok].append((p, idx, raw))
                else:
                    sym_uses[tok].append((p, idx, raw, cl))

    # addresses per symbol (unique from declaration comments)
    sym_addr = {}
    for tok, ds in sym_decls.items():
        addrs = sorted({a for a in (decl_address(r) for _, _, r in ds) if a})
        if len(addrs) == 1:
            sym_addr[tok] = addrs[0]
        elif len(addrs) > 1:
            banks.append({'class': 'addr-conflict', 'file': sc.rel(ds[0][0]),
                          'line': ds[0][1] + 1, 'tok': tok,
                          'reason': 'declaration addresses %s' % ','.join(addrs),
                          'code': strip_cr(ds[0][2]).strip()[:220]})
            stats['bank_addr_conflict'] += 1

    # classify uses (install vs other) before deciding rule a/b/c
    use_class = {}   # (p, idx, tok) -> (kind, detail, raw)
    for tok, us in sym_uses.items():
        for p, idx, raw, cl in us:
            old = sc.raw[p][idx]
            body = strip_cr(cl)
            if body.count(';') != 1:
                use_class[(p, idx, tok)] = ('other', 'multi-stmt', old)
                continue
            am = ASSIGN_RE.match(body)
            if not am:
                use_class[(p, idx, tok)] = ('other', 'not-assign', old)
                continue
            rtok = pure_vt_rhs(am.group('rhs'))
            if rtok is None:
                use_class[(p, idx, tok)] = ('other', 'rhs-not-pure', old)
                continue
            kind, detail = lhs_kind(am.group('lhs'))
            use_class[(p, idx, tok)] = (kind, detail, old)

    # per-symbol decision
    for tok in sorted(set(sym_decls) | set(sym_uses)):
        ds = sym_decls.get(tok, [])
        us = sym_uses.get(tok, [])
        if FUNC_TOK.fullmatch(tok):
            continue
        n_install = sum(1 for (p, idx, _, _) in us
                        if use_class[(p, idx, tok)][0] == 'install')
        n_other = sum(1 for (p, idx, _, _) in us
                      if use_class[(p, idx, tok)][0] != 'install')
        unit = 'vt:' + tok

        # R4a -- zero uses at all (declaration-only symbol)
        if not us:
            for p, idx, raw in ds:
                add_edit(unit, 'R4a', p, idx, raw, '', tok,
                         'delete zero-use declaration')
                stats['R4a_decl'] += 1
            continue

        # R4b -- every use is an elidable install target -> elide + delete decl
        if n_other == 0:
            for p, idx, raw, cl in us:
                kind, detail, old = use_class[(p, idx, tok)]
                if kind != 'install':
                    continue
                new = elide_line(old, tok, detail)
                if add_edit(unit, 'R4b', p, idx, old, new, tok,
                            'elide install (%s)' % detail):
                    stats['R4b_assign'] += 1
            for p, idx, raw in ds:
                add_edit(unit, 'R4a', p, idx, raw, '', tok,
                         'delete declaration left unused by R4b')
                stats['R4a_decl'] += 1
            continue

        # R4c / bank
        addr = sym_addr.get(tok)
        if addr is None:
            for p, idx, raw in ds:
                banks.append({'class': 'no-address-global', 'file': sc.rel(p),
                              'line': idx + 1, 'tok': tok, 'reason': 'declaration has no address comment',
                              'code': strip_cr(raw).strip()[:220]})
            for p, idx, raw, cl in us:
                banks.append({'class': 'no-address-global', 'file': sc.rel(p),
                              'line': idx + 1, 'tok': tok, 'reason': 'use of addressless symbol',
                              'code': strip_cr(raw).strip()[:220]})
            stats['bank_no_address'] += 1
            continue

        newname = 'g_ptr_' + addr
        # declarations
        for p, idx, raw in ds:
            cl = sc.code[p][idx]
            m = re.search(r'\b' + re.escape(tok) + r'\b', cl)
            if not m:
                continue
            new = raw[:m.start()] + newname + raw[m.end():]
            if add_edit(unit, 'R4c', p, idx, raw, new, tok,
                        'rename declaration -> ' + newname):
                stats['R4c_decl'] += 1
        # uses: elide installs, rename the rest
        for p, idx, raw, cl in us:
            kind, detail, old = use_class[(p, idx, tok)]
            if kind == 'install':
                new = elide_line(old, tok, detail)
                if add_edit(unit, 'R4b', p, idx, old, new, tok,
                            'elide install (%s)' % detail):
                    stats['R4b_assign'] += 1
                continue
            if kind == 'bank':
                # LHS shape not safely elidable, but the RHS token is still
                # renamed (R4c) so the declaration stays consistent.
                banks.append({'class': 'install-hazard', 'file': sc.rel(p),
                              'line': idx + 1, 'tok': tok,
                              'reason': detail, 'code': strip_cr(raw).strip()[:220]})
                stats['bank_install_hazard'] += 1
                new = raw
                off = 0
                for m in re.finditer(r'\b' + re.escape(tok) + r'\b', cl):
                    a, b = m.start() + off, m.end() + off
                    new = new[:a] + newname + new[b:]
                    off += len(newname) - len(tok)
                    stats['R4c_use'] += 1
                if add_edit(unit, 'R4c', p, idx, raw, new, tok,
                            'rename hazard-line RHS -> ' + newname):
                    pass
                continue
            # rename every code occurrence on the line (comments untouched)
            new = raw
            off = 0
            for m in re.finditer(r'\b' + re.escape(tok) + r'\b', cl):
                a, b = m.start() + off, m.end() + off
                new = new[:a] + newname + new[b:]
                off += len(newname) - len(tok)
                stats['R4c_use'] += 1
            if add_edit(unit, 'R4c', p, idx, raw, new, tok,
                        'rename use -> ' + newname):
                pass

    # ---------------- vtableN / vtblN ----------------
    vt_occs = defaultdict(list)      # tok -> [(p, idx, kind, raw, cls)]
    members_by_file = {}
    file_code_text = {p: '\n'.join(sc.code[p]) for p in sc.files}
    for p in sc.files:
        lmap = class_line_map(p, sc.raw[p])
        members_by_file[p] = class_members(sc.raw[p])
        for idx, cl in enumerate(sc.code[p]):
            raw = sc.raw[p][idx]
            for m in VT_TOK.finditer(cl):
                tok = m.group(0)
                kind = occ_kind_vt(cl, m.start(), m.end())
                vt_occs[tok].append((p, idx, kind, raw, cl, lmap.get(idx + 1)))

    # per (file, line) combined edit: every vtable token on the line is
    # renamed in one atomic op, so multi-token lines never conflict.
    coll_cache = {}
    for tok in vt_occs:
        base = vt_name(VT_NUM.match(tok).group(1))
        declpat = re.compile(
            r'^\s*(?:[A-Za-z_][\w:<>,\s\*&]*?)\b' + re.escape(base) +
            r'\s*(?:\[[^\]]*\])?\s*(?:=[^=]|;)', re.M)
        coll_cache[tok] = set()
        for p, idx, kind, raw, cl, cls in vt_occs[tok]:
            if kind == 'decl' and cls is None and declpat.search(file_code_text[p]):
                coll_cache[tok].add(p)
    line_map = defaultdict(list)
    for tok, occs in vt_occs.items():
        for p, idx, kind, raw, cl, cls in occs:
            line_map[(p, idx)].append((tok, kind, cls, raw, cl))
    for key in sorted(line_map, key=lambda x: (x[0].as_posix(), x[1])):
        p, idx = key
        raw = line_map[key][0][3]
        cl = line_map[key][0][4]
        targets = {}
        banked = False
        for tok, kind, cls, _raw, _cl in line_map[key]:
            base = vt_name(VT_NUM.match(tok).group(1))
            if p in coll_cache.get(tok, set()):
                banks.append({'class': 'local-name-collision',
                              'file': sc.rel(p), 'line': idx + 1, 'tok': tok,
                              'reason': 'local %s already declared in file' % base,
                              'code': strip_cr(raw).strip()[:220]})
                stats['bank_local_collision'] += 1
                banked = True
                continue
            target = base
            if cls and target in members_by_file[p].get(cls, set()):
                target = '%s_%s' % (base, cls)
                stats['R1_collision_suffix'] += 1
            targets[tok] = (kind, cls, target)
        if banked:
            continue
        new = raw
        off = 0
        for m in VT_TOK.finditer(cl):
            tok = m.group(0)
            if tok not in targets:
                continue
            target = targets[tok][2]
            a, b = m.start() + off, m.end() + off
            new = new[:a] + target + new[b:]
            off += len(target) - len(tok)
        all_decl = all(v[0] == 'decl' for v in targets.values())
        any_member = any(v[1] for v in targets.values())
        if all_decl and any_member:
            rule_any = 'R1'
        elif all_decl:
            rule_any = 'R3'
        else:
            rule_any = 'R2'
        for tok, (kind, cls, target) in targets.items():
            rule = 'R1' if (kind == 'decl' and cls) else (
                'R3' if kind == 'decl' else 'R2')
            stats[rule + '_' + ('decl' if kind == 'decl' else kind)] += 1
        add_edit('vtN:family', rule_any, p, idx, raw, new,
                 ','.join(targets),
                 'vtable tokens -> %s' % ','.join(targets))

    # ---------------- function-name identifiers: bank ----------------
    for p, idx, tok, raw in func_bank:
        banks.append({'class': 'function-name', 'file': sc.rel(p),
                      'line': idx + 1, 'tok': tok,
                      'reason': 'R1-R4 do not cover function identifiers',
                      'code': strip_cr(raw).strip()[:220]})
        stats['bank_function_name'] += 1
    stats['vt_slot_untouched'] = slot_count
    stats['bank_total'] = len(banks)
    return edits, banks, stats, sym_addr


def elide_line(old, tok, detail):
    """X67/X68 elision: whole line -> marker + preserved anchor."""
    m = re.search(r'/\*0x[0-9A-Fa-f]{6}\*/', old)
    anchor = m.group(0) if m else ''
    lead = re.match(r'^\s*', old).group(0)
    marker = '/* X11: vtable install elided (X79 install-target, RHS %s) */' % tok
    new = lead + marker + (('  ' + anchor) if anchor else '')
    return keep_cr(old, new)


# --------------------------------------------------------------------------
# apply
# --------------------------------------------------------------------------
def apply_units(sc, edits, limit):
    units = defaultdict(list)
    for e in edits:
        units[e['unit']].append(e)
    order = sorted(units, key=lambda u: (0 if u.startswith('vt:') else 1,
                                         -len(units[u]), u))
    selected = []
    used = 0
    for u in order:
        n = len(units[u])
        if limit and used + n > limit and selected:
            continue
        selected.extend(units[u])
        used += n
        if limit and used >= limit:
            break
    by_file = defaultdict(list)
    for e in selected:
        by_file[e['file']].append(e)
    applied = 0
    stale = 0
    for p, es in by_file.items():
        lines = sc.raw[p]
        for e in sorted(es, key=lambda x: -x['idx']):
            idx = e['idx']
            if idx >= len(lines) or lines[idx] != e['old']:
                stale += 1
                continue
            lines[idx] = e['new']
            applied += 1
        write_lines(p, lines)
    return applied, stale, used, sorted(set(e['unit'] for e in selected))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--apply', action='store_true')
    ap.add_argument('--limit', type=int, default=0,
                    help='max sites (edits) this run; 0 = all')
    ap.add_argument('--report', action='store_true')
    args = ap.parse_args()

    sc = Scanner()
    edits, banks, stats, sym_addr = build_plan(sc)
    OUT.mkdir(parents=True, exist_ok=True)

    with open(OUT / 'x79_plan.json', 'w', encoding='utf-8') as fh:
        json.dump({'stats': dict(stats),
                   'edits': [{'unit': e['unit'], 'rule': e['rule'],
                              'file': sc.rel(e['file']), 'line': e['idx'] + 1,
                              'tok': e['tok'], 'before': strip_cr(e['old']).strip()[:300],
                              'after': strip_cr(e['new']).strip()[:300],
                              'note': e['note']} for e in edits],
                   'banks': banks,
                   'addr_map': sym_addr}, fh, ensure_ascii=False, indent=1)
    with open(OUT / 'x79_banks.jsonl', 'w', encoding='utf-8') as fh:
        for b in banks:
            fh.write(json.dumps(b, ensure_ascii=False) + '\n')

    print('DRY-PLAN edits=%d units=%d banks=%d' % (
        len(edits), len({e['unit'] for e in edits}), len(banks)))
    print('stats:', dict(stats))
    by_rule = Counter(e['rule'] for e in edits)
    print('by rule:', dict(by_rule))
    print('bank classes:', dict(Counter(b['class'] for b in banks)))
    print('plan:', OUT / 'x79_plan.json')

    if args.apply:
        applied, stale, used, units = apply_units(sc, edits, args.limit)
        print('APPLIED lines=%d sites_budget=%d stale=%d units=%d' % (
            applied, used, stale, len(units)))
        print('first units:', units[:12])
    else:
        print('(dry run -- pass --apply [--limit N])')
    return 0


if __name__ == '__main__':
    sys.exit(main())
