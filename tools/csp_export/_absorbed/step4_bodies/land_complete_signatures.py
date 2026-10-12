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
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
sys.path.insert(0, str(Path(__file__).resolve().parent))
from signature_authority import Authority  # noqa: E402

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
    print('APPLIED' if APPLY else 'DRY RUN (use --apply)')


if __name__ == '__main__':
    main()
