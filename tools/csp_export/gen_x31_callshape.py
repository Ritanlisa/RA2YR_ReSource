#!/usr/bin/env python3
"""X31 Stage 3: call-shape normalization (generator-level, NO cast insertion).

Rewrites the receiver-first static-form call shape to member-call form:

    Cls::M(A0, A1, ..., Ak)   ->   (A0)->M(A1, ..., Ak)

driven by the C2660 ("function does not accept N arguments") and C2352
("call to non-static member function requires an object") rows of an MSVC
build log.  The receiver A0 is moved verbatim into receiver position
(wrapped in parentheses); the remaining arguments are preserved exactly
(whitespace runs collapsed, embedded /*addr*/ comments kept -- they are
load-bearing anchors); no cast is inserted anywhere.

Guards (a site is rewritten only when ALL hold):
  G1  the error row names a qualified class member (Cls::M, namespace
      prefixes stripped); plain names (WinAPI/CRT) are skipped.
  G2  the call is found on the error line at the error column (method-name
      start); the call span may extend over <= 8 lines (comment-aware,
      string-literal-aware balanced scan).
  G3  the character before the call is not '&' (address-of member), '.' or
      the '>' of '->' (already a member call) -- X23/L251 false-positive
      class; those sites carry a genuine arity error of a DIFFERENT shape
      and are recorded, not rewritten.
  G4  decl census (src/**/*.hpp|h, struct/class scoped) finds a NON-static
      declaration of (Cls, M) that is arity-viable:
        C2660: min_args(D) <= call_args-1 <= arity(D)   (receiver-first:
               the call passed one extra arg = the receiver; post-rewrite
               explicit arg count = call_args-1 must be viable)
        C2352: min_args(D) <= call_args <= arity(D)     (the site resolved
               arity-wise but has no object) AND post-rewrite viability:
               some non-static decl D' of (Cls,M) with
               min_args(D') <= call_args-1 <= arity(D').
      min_args(D) = arity(D) - defaulted-trailing-params.  The defaulted
      param absorbs the receiver slot exactly like the existing corpus
      instance-form calls (e.g. ((String*)v8)->Trim() against
      `char * Trim(void *a1 = 0)`).
  G5  arg0 is non-empty.

No decl change, no body logic change (call SHAPE only).

Idempotence by construction: after the rewrite the `Cls::M(` shape is gone
from the site, so a second run plans 0 edits for the same log.  Per-file
application is a single pass in descending (line, column) order (I261/L305).

Usage:
  python gen_x31_callshape.py <buildlog>            # dry run (default)
  python gen_x31_callshape.py <buildlog> --apply    # write
  python gen_x31_callshape.py <buildlog> --detail   # sample sites
"""
import re
import sys
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv
DETAIL = '--detail' in sys.argv

ERR_RE = re.compile(
    r'^(?P<file>.+?)\((?P<line>\d+),(?P<col>\d+)\)\s*:\s*(?:fatal )?error\s+'
    r'(?P<code>C2660|C2352|C2661|C2664)\s*:\s*(?P<msg>.*?)(?:\s*\[[^\]]*\])?\s*$')
QNAME_RE = re.compile(r'[\u201c"]((?:[A-Za-z_]\w*::)+[~A-Za-z_]\w*)[\u201d"]')
# X38: C2664 quotes the full signature "ret Cls::M(params)" -- the method
# name is followed by '(' not the closing quote.
QNAME_SIG_RE = re.compile(
    r'[\u201c"](?:[A-Za-z_][\w:<>,\s\*&]*?\s+)?'
    r'((?:[A-Za-z_]\w*::)+[~A-Za-z_]\w*)\s*\(')
ARITY_RE = re.compile(r'\u63a5\u53d7\s*(\d+)\s*\u4e2a\u53c2\u6570')
# X38: C2664 conversion pair -- arg1 "SRC" -> "DST"; RF face only when SRC is
# a class-pointer and DST is a non-pointer (decl's first param is the
# receiver slot the caller passed as arg0).
CONV1_RE = re.compile(
    r'\u65e0\u6cd5\u5c06\u53c2\u6570 1 \u4ece\u201c(?P<src>[^\u201d]+)\u201d'
    r'\u8f6c\u6362\u4e3a\u201c(?P<dst>[^\u201d]+)\u201d')
SRC_CLSPTR_RE = re.compile(r'^(?:(?:gamemd|ra2::game|ra2)::)?[A-Za-z_]\w*\s*\*$')
# X38 guard: scalar-cast-wrapped arg0 ((int)v / (unsigned int)v) must NOT be
# moved into receiver position (R1 residual-this-cast violation + int is not
# a valid receiver). Recorded, not rewritten (L336 load-bearing lesson).
ARG0_SCALAR_CAST_RE = re.compile(
    r'^\(\s*(?:unsigned\s+|signed\s+)?(?:int|long|short|char|__int\d+\w*)\s*\)')

IDENT_AT = re.compile(r'~?[A-Za-z_]\w*')
QUAL_BEFORE = re.compile(r'(?:[A-Za-z_]\w*::)+$')

DECL_RE = re.compile(
    r'^\s*(?P<static>static\s+)?'
    r'(?:virtual\s+)?'
    r'(?:[A-Za-z_][\w:<>,\s\*&]*?[\s\*&])?'
    r'(?P<name>~?[A-Za-z_]\w*)\s*'
    r'\((?P<params>[^;{}()]*)\)\s*(?:const\s*)?;')

STRUCT_RE = re.compile(r'^\s*(?:struct|class)\s+(?P<name>[A-Za-z_]\w*)[^{;]*\{')
CLOSE_RE = re.compile(r'^\s*\};')

NS_PREFIXES = ('gamemd::', 'ra2::game::', 'ra2::')

MAX_SPAN_LINES = 8


def split_params(ptext):
    """Top-level comma split of a decl parameter text -> (count, ndefault)."""
    t = ptext.strip()
    if not t:
        return 0, 0
    if t == 'void':
        return 0, 0
    depth = 0
    parts, cur = [], []
    for ch in t:
        if ch in '([':
            depth += 1
            cur.append(ch)
        elif ch in ')]':
            depth -= 1
            cur.append(ch)
        elif ch == ',' and depth == 0:
            parts.append(''.join(cur))
            cur = []
        else:
            cur.append(ch)
    parts.append(''.join(cur))
    parts = [p.strip() for p in parts if p.strip()]
    ndefault = 0
    for p in reversed(parts):
        if '=' in p:
            ndefault += 1
        else:
            break
    return len(parts), ndefault


def build_decl_census():
    """(class, method) -> list of dicts {static, arity, ndefault, at}."""
    census = defaultdict(list)
    files = sorted(SRC.rglob('*.hpp')) + sorted(SRC.rglob('*.h'))
    for hp in files:
        try:
            lines = hp.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        cur = None
        for i, l in enumerate(lines):
            sm = STRUCT_RE.match(l)
            if sm:
                cur = sm.group('name')
                continue
            if cur and CLOSE_RE.match(l):
                cur = None
                continue
            if not cur:
                continue
            dm = DECL_RE.match(l)
            if not dm:
                continue
            arity, ndefault = split_params(dm.group('params'))
            census[(cur, dm.group('name'))].append({
                'static': dm.group('static') is not None,
                'arity': arity,
                'ndefault': ndefault,
                'at': '%s:%d' % (hp.relative_to(ROOT).as_posix(), i + 1),
            })
    return census


def viable(decls, n):
    """Return a NON-static decl accepting exactly n explicit args, or None."""
    for d in decls:
        if d['static']:
            continue
        if d['arity'] - d['ndefault'] <= n <= d['arity']:
            return d
    return None


class Stream:
    """Line-array cursor with lookahead; comments skipped for structure."""

    def __init__(self, lines, li, col):
        self.lines = lines
        self.li = li            # 0-based line index
        self.col = col          # 0-based column
        self.n = len(lines)

    def peek(self):
        if self.li >= self.n:
            return None
        l = self.lines[self.li]
        if self.col >= len(l):
            return '\n'
        return l[self.col]

    def advance(self):
        c = self.peek()
        if c == '\n':
            self.li += 1
            self.col = 0
        else:
            self.col += 1
        return c

    def span_end(self):
        return (self.li, self.col)


def scan_stream(st):
    """Scan a call argument stream from just after the '('.

    Returns (end_pos_after_close, args) with args as raw texts, or
    (None, reason).
    """
    depth = 1                   # the opening '(' has been consumed
    angle = 0
    args = []
    cur = []
    li0 = st.li
    while True:
        c = st.peek()
        if c is None:
            return None, 'multi-line-or-unbalanced'
        if c == '\n':
            cur.append(' ')
            st.advance()
            if st.li - li0 >= MAX_SPAN_LINES:
                return None, 'multi-line-or-unbalanced'
            continue
        if c == '"':
            cur.append(c)
            st.advance()
            while True:
                c2 = st.peek()
                if c2 is None or c2 == '\n':
                    return None, 'unterminated-string'
                cur.append(c2)
                st.advance()
                if c2 == '\\' and st.peek() not in (None, '\n'):
                    cur.append(st.peek())
                    st.advance()
                    continue
                if c2 == '"':
                    break
            continue
        if c == "'":
            cur.append(c)
            st.advance()
            while True:
                c2 = st.peek()
                if c2 is None or c2 == '\n':
                    return None, 'unterminated-char'
                cur.append(c2)
                st.advance()
                if c2 == '\\' and st.peek() not in (None, '\n'):
                    cur.append(st.peek())
                    st.advance()
                    continue
                if c2 == "'":
                    break
            continue
        if c == '/' and st.col + 1 < len(st.lines[st.li]) \
                and st.lines[st.li][st.col + 1] == '/':
            # line comment inside the call: skip to EOL (structure only)
            while st.peek() not in (None, '\n'):
                st.advance()
            cur.append(' ')
            continue
        if c == '/' and st.col + 1 < len(st.lines[st.li]) \
                and st.lines[st.li][st.col + 1] == '*':
            # block comment: keep text, skip structure
            l = st.lines[st.li]
            j = l.find('*/', st.col + 2)
            if j >= 0:
                cur.append(l[st.col:j + 2])
                st.col = j + 2
                continue
            # multi-line block comment
            frag = l[st.col:] + ' '
            st.li += 1
            st.col = 0
            ok = False
            while st.li < st.n:
                l2 = st.lines[st.li]
                j2 = l2.find('*/')
                if j2 >= 0:
                    frag += l2[:j2 + 2]
                    st.col = j2 + 2
                    ok = True
                    break
                frag += l2 + ' '
                st.li += 1
            if not ok:
                return None, 'unterminated-comment'
            cur.append(frag)
            continue
        if c == ',' and depth == 1 and angle > 0:
            return None, 'angle-in-call'
        if c in '([{':
            depth += 1
            if depth > 1:
                cur.append(c)
            st.advance()
            continue
        if c in ')]}':
            depth -= 1
            if depth == 0:
                if c != ')':
                    return None, 'unbalanced'
                if angle != 0:
                    return None, 'angle-in-call'
                args.append(''.join(cur))
                st.advance()          # consume ')'
                return st.span_end(), args
            if depth < 0:
                return None, 'unbalanced'
            cur.append(c)
            st.advance()
            continue
        if c == ',' and depth == 1:
            args.append(''.join(cur))
            cur = []
            st.advance()
            continue
        if depth >= 1:
            if c == '<' and depth == 1:
                angle += 1
            elif c == '>' and depth == 1 and st.col > 0 \
                    and st.lines[st.li][st.col - 1] == '-':
                pass                    # arrow, not a bracket
            elif c == '>' and depth == 1:
                angle -= 1
                if angle < 0:
                    return None, 'angle-in-call'
            cur.append(c)
            st.advance()
            continue
        return None, 'no-open-paren'


def norm_arg(t):
    return re.sub(r'\s+', ' ', t).strip()


def scan_site(lines, li, col0, meth):
    """Full site scan. Returns (qual_start, end_line, end_col, args, reason).

    qual_start: 0-based column of the qualifier (or the method name) on li.
    (end_line, end_col): position just after the closing ')'.
    args: normalized argument texts (possibly [] for `M()`).
    """
    ln = lines[li]
    if not (0 <= col0 < len(ln)) or ln[col0:col0 + len(meth)] != meth:
        return None, None, None, None, 'col-drift'
    j = col0 - 1
    while j >= 0 and ln[j] in ' \t':
        j -= 1
    if j >= 0 and ln[j] in '&.>':
        return None, None, None, None, 'prev-char-&.>'
    st = Stream(lines, li, col0 + len(meth))
    while st.peek() in (' ', '\t'):
        st.advance()
    if st.peek() != '(':
        return None, None, None, None, 'no-open-paren'
    st.advance()
    end, args = scan_stream(st)
    if end is None:
        return None, None, None, None, args   # args holds the reason here
    cs = col0
    mq = QUAL_BEFORE.search(ln[:col0])
    if mq:
        cs = mq.start()
    return cs, end[0], end[1], [norm_arg(a) for a in args], None


def strip_ns(qname):
    for p in NS_PREFIXES:
        if qname.startswith(p):
            qname = qname[len(p):]
            break
    parts = qname.split('::')
    if len(parts) < 2:
        return None
    return parts[-2], parts[-1]


def parse_log(log_path):
    """(file) -> list of site rows."""
    sites = defaultdict(list)
    for raw in log_path.read_text(encoding='utf-8', errors='replace').split('\n'):
        m = ERR_RE.match(raw.strip())
        if not m:
            continue
        qm = QNAME_RE.search(m.group('msg'))
        if not qm:
            qm = QNAME_SIG_RE.search(m.group('msg'))
        if not qm:
            continue
        parts = strip_ns(qm.group(1))
        if not parts:
            continue
        cls, meth = parts
        arity = None
        if m.group('code') in ('C2660', 'C2661'):
            am = ARITY_RE.search(m.group('msg'))
            if not am:
                continue
            arity = int(am.group(1))
        conv = None
        if m.group('code') == 'C2664':
            cm = CONV1_RE.search(m.group('msg'))
            if not cm:
                continue
            conv = (cm.group('src').strip(), cm.group('dst').strip())
            # RF face only: arg0 is a class-pointer being passed where the
            # member decl's first param is a non-pointer (the receiver slot).
            if not SRC_CLSPTR_RE.match(conv[0]) or '*' in conv[1] or '&' in conv[1]:
                continue
        f = m.group('file').replace('\\', '/')
        if '/src/' in f:
            f = 'src/' + f.split('/src/', 1)[1]
        sites[f].append({'line': int(m.group('line')),
                         'col': int(m.group('col')),
                         'code': m.group('code'),
                         'cls': cls, 'meth': meth, 'msg_arity': arity,
                         'conv': conv,
                         'qname': qm.group(1)})
    return sites


def plan_sites(sites, census):
    """Returns (plans, stats).

    plans: (file) -> list of dicts {li, cs, el, ec, newtext, code, qname}
    """
    stats = Counter()
    plans = defaultdict(list)
    for f, rows in sorted(sites.items()):
        p = ROOT / f
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            stats['file-missing'] += len(rows)
            continue
        for r in rows:
            li = r['line'] - 1
            if li >= len(lines):
                stats['line-oob'] += 1
                continue
            decls = census.get((r['cls'], r['meth']))
            if not decls:
                stats['no-decl'] += 1
                continue
            cs, el, ec, args, reason = scan_site(lines, li, r['col'] - 1,
                                                 r['meth'])
            if reason:
                stats[reason] += 1
                continue
            if not args or not args[0]:
                stats['empty-arg0'] += 1
                continue
            n_args = len(args)
            if r['code'] == 'C2664':
                # X38 RF face: arg0 (class ptr) was passed into the decl's
                # non-pointer first param; post-rewrite explicit args =
                # n_args-1 must be arity-viable against a NON-static decl.
                if ARG0_SCALAR_CAST_RE.match(args[0]):
                    stats['c2664-arg0-scalar-cast'] += 1
                    continue
                if viable(decls, n_args - 1) is None:
                    stats['c2664-no-recv-arity-decl'] += 1
                    continue
            elif r['code'] in ('C2660', 'C2661'):
                # I276: C2661 ("no overload accepts N args") is the same
                # RF-form rewrite face as C2660 -- message N = actual arg
                # count; a non-static decl with N-1 params makes the
                # receiver-first form viable (L312/L324).
                if r['msg_arity'] != n_args:
                    stats['arity-msg-mismatch'] += 1
                    continue
                if viable(decls, n_args - 1) is None:
                    stats['c2660-no-recv-arity-decl'] += 1
                    continue
            else:
                if viable(decls, n_args) is None:
                    stats['c2352-no-selected-decl'] += 1
                    continue
                if n_args - 1 < 0 or viable(decls, n_args - 1) is None:
                    stats['c2352-no-post-arity'] += 1
                    continue
            newtext = '(%s)->%s(%s)' % (args[0], r['meth'],
                                        ', '.join(args[1:]))
            plans[f].append({'li': li, 'cs': cs, 'el': el, 'ec': ec,
                             'newtext': newtext, 'code': r['code'],
                             'qname': r['qname']})
            stats['planned-%s' % r['code']] += 1
    return plans, stats


def apply_plans(plans):
    """Single descending pass per file. Returns (files, lines_changed)."""
    n_files = 0
    n_lines = 0
    for f, ps in sorted(plans.items()):
        p = ROOT / f
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        ps_sorted = sorted(ps, key=lambda e: (-e['li'], -e['cs']))
        changed = 0
        for e in ps_sorted:
            if e['el'] >= len(lines):
                continue
            prefix = lines[e['li']][:e['cs']]
            if e['el'] == e['li']:
                suffix = lines[e['li']][e['ec']:]
                new = prefix + e['newtext'] + suffix
                if new != lines[e['li']]:
                    lines[e['li']] = new
                    changed += 1
            else:
                suffix = lines[e['el']][e['ec']:]
                new = prefix + e['newtext'] + suffix
                lines[e['li']:e['el'] + 1] = [new]
                changed += 1
        if changed:
            p.write_text('\n'.join(lines), encoding='utf-8',
                         errors='replace')
            n_files += 1
            n_lines += changed
    return n_files, n_lines


def main():
    log_path = Path(sys.argv[1])
    if not log_path.is_absolute():
        log_path = ROOT / log_path

    sites = parse_log(log_path)
    n_rows = sum(len(v) for v in sites.values())
    print('log rows: C2660+C2352+C2661+C2664(RF) qualified = %d (files %d)' % (n_rows, len(sites)))

    census = build_decl_census()
    print('decl census: %d (class, method) keys' % len(census))

    plans, stats = plan_sites(sites, census)
    n_plan = sum(len(v) for v in plans.values())
    print('plan: %d sites' % n_plan)
    print('stats: %s' % dict(stats.most_common()))
    per_file = Counter(f for f, ps in plans.items() for _ in ps)
    print('files to change: %d' % len(per_file))
    if DETAIL:
        print('--- sample planned sites ---')
        shown = 0
        for f, ps in sorted(plans.items()):
            p = ROOT / f
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
            for e in ps[:2]:
                print('  %-34s %5d %-6s | %s' % (
                    Path(f).name, e['li'] + 1, e['code'],
                    lines[e['li']].strip()[:110]))
                shown += 1
            if shown >= 45:
                break
        print('--- top planned callees ---')
        cc = Counter(e['qname'] for ps in plans.values() for e in ps)
        for q, n in cc.most_common(18):
            print('  %4d  %s' % (n, q))
        print('--- top files ---')
        for f, n in per_file.most_common(10):
            print('  %4d  %s' % (n, f))

    if not APPLY:
        print('DRY RUN (use --apply)')
        return

    n_files, n_lines = apply_plans(plans)
    print('APPLIED: %d lines in %d files' % (n_lines, n_files))


if __name__ == '__main__':
    main()
