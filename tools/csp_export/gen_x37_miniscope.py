#!/usr/bin/env python3
"""X37: minimal local-variable scope for the generated bodies.

User requirement (2026-10-14): "函数内的局部变量的定义应该保持最小定义域，比如第
一次调用的地方或者某个循环/分支前这种，最好不要把它们全部定义到函数开头".

The mechanical decompiler output declares ALL locals at the top of each
function body, uninitialized.  This rewriter moves each top-of-function
UNINITIALIZED declaration to immediately before its first use, where
PROVABLY SAFE; everything else stays put (conservative bias is mandatory).

Safety conditions (ALL must hold for a move):
  (a) the declared type is POD: every type identifier is a built-in scalar
      keyword or a verified scalar typedef, OR the declarator carries at
      least one `*` (any pointer type is POD regardless of pointee).
      Struct/class VALUE locals (no `*`) with unknown type names are
      SKIPPED (verifying "no user ctor/dtor" header-wide is out of scope;
      when unsure, SKIP).  Arrays of whitelisted scalars are allowed.
      `const` is only accepted on pointer declarators (const value local
      without initializer would not compile anyway).
  (b) the whole enclosing function body contains no `goto` statement and
      no bare label (`name:`); case/default labels are allowed (jumping
      over an uninitialized POD declaration is legal C++, but the mandate
      is to skip goto/label functions entirely).
  (c) use-domination: walking forward from the insertion point (immediately
      before the first use), the brace depth never drops below the depth at
      the insertion point before any later use.  If any use lies after a
      closing brace that would leave the new scope, the declaration stays
      at the top (hoisting to the outer common point is deliberately not
      attempted).
  (d) the variable is not referenced inside the declaration block after
      its own line (e.g. in another declaration's initializer) and is not
      redeclared anywhere else in the function (shadow or multi-declarator
      `int a, b;` lines break the run and are never moved).

No other edits: declarations move VERBATIM (indentation, trailing comments,
line endings preserved).  Zero cast insertion, zero expression changes.

Idempotent by construction: after a move the declaration sits immediately
before its first use, i.e. outside the top-of-function declaration run, so
a second run plans 0 edits (already-minimal decls are counted, not moved).

Type whitelist -- verified scalar typedefs (evidence):
  src/core/ida_compat.h:  _DWORD=unsigned int, _WORD=unsigned short,
                          _BYTE=unsigned char, _QWORD=unsigned long long
  Win32/sdk headers:      HWND/HANDLE/HKEY = void*-based handles,
                          DWORD/UINT/ULONG/LONG/WORD/BYTE/BOOL/WCHAR = windef
                          scalars, LRESULT/LPARAM/WPARAM = LONG_PTR,
                          CHAR = char, wint_t = unsigned stddef scalar,
                          size_t / stdint types / __intN = MSVC built-ins.
  Unknown identifiers WITHOUT `*` (String, CCFileClass, va_list, __m64,
  _TBYTE, ObjectClass values, ...) are skipped (unsure -> SKIP).

Usage:
  python tools/csp_export/gen_x37_miniscope.py                 # dry run
  python tools/csp_export/gen_x37_miniscope.py --apply         # write
  python tools/csp_export/gen_x37_miniscope.py --files a.cpp b.cpp
  python tools/csp_export/gen_x37_miniscope.py --limit-files 50
  python tools/csp_export/gen_x37_miniscope.py --journal OUT.json
"""
import argparse
import json
import re
import sys
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]

DEFAULT_ROOTS = ['src/e4', 'src/_generated', 'src/_gap2']

# (a) scalar identifiers: built-in keywords + verified scalar typedefs
BASE_TYPE_IDENTS = {
    'void', 'bool', 'char', 'short', 'int', 'long', 'float', 'double',
    'signed', 'unsigned', 'wchar_t', 'size_t',
    '__int8', '__int16', '__int32', '__int64',
    'int8_t', 'int16_t', 'int32_t', 'int64_t',
    'uint8_t', 'uint16_t', 'uint32_t', 'uint64_t',
    # verified scalar typedefs, src/core/ida_compat.h
    '_DWORD', '_WORD', '_BYTE', '_QWORD',
    # Win32 scalars / handles (windef.h / baseTsd.h / winnt.h)
    'HWND', 'HANDLE', 'HKEY', 'HMODULE', 'HINSTANCE', 'HDC', 'HBITMAP',
    'HRGN', 'HFONT', 'HMENU', 'HGDIOBJ', 'HGLOBAL', 'HLOCAL', 'HRESULT',
    'DWORD', 'WORD', 'BYTE', 'BOOL', 'UINT', 'ULONG', 'LONG', 'CHAR',
    'UCHAR', 'WCHAR', 'TCHAR', 'LRESULT', 'LPARAM', 'WPARAM',
    'LPVOID', 'LPCVOID', 'LPSTR', 'LPCSTR', 'LPWSTR', 'LPCWSTR',
    'SIZE_T', 'SSIZE_T', 'wint_t',
}

CTRL_KW = ('if', 'for', 'while', 'switch', 'else', 'do', 'catch', 'return')
NONFUNC_KW = CTRL_KW + ('namespace', 'struct', 'class', 'enum', 'union')

# top-run uninitialized declaration:
#   TYPE  name [ [N] ... ] ;   (type = identifiers and/or star runs)
DECL_RE = re.compile(
    r'^(?P<ind>[ \t]*)'
    r'(?P<type>(?:[A-Za-z_][\w:]*(?:[ \t]+|\s*\*+[ \t]*))+)'
    r'(?P<name>[A-Za-z_]\w*)'
    r'(?P<arr>(?:[ \t]*\[[ \t]*\d+[ \t]*\])+)?'
    r'[ \t]*;[ \t]*$')

# any declaration-shaped line (for redecl detection / use-scan exclusion):
#   [TYPE tokens] NAME (= init | [arr] ; | , ... ;)
DECL_SHAPE_RE = re.compile(
    r'^[ \t]*'
    r'(?P<type>(?:[A-Za-z_][\w:]*(?:[ \t]+|\s*\*+[ \t]*))+)'
    r'(?P<name>[A-Za-z_]\w*)'
    r'[ \t]*(?P<arr>(?:\[[^\]]*\])+)?[ \t]*'
    r'(?P<tail>[=,;])')

# redecl detection: first token is a type-ish identifier (not a statement
# keyword) and the candidate name directly follows type tokens
RESERVED_FIRST = {
    'return', 'goto', 'if', 'else', 'while', 'for', 'switch', 'case',
    'default', 'do', 'break', 'continue', 'delete', 'new', 'throw',
    'catch', 'using', 'namespace', 'sizeof', 'typedef', 'static_cast',
    'dynamic_cast', 'const_cast', 'reinterpret_cast',
}


def redecl_re(name):
    return re.compile(
        r'^[ \t]*[A-Za-z_][\w:]*[ \t]*(?:\*+[ \t]*)?[A-Za-z_][\w:]*[ \t]*'
        r'(?:\*+[ \t]*)*(?<![\w.>:])' + re.escape(name) + r'\b')


GOTO_RE = re.compile(r'\bgoto\b')
LABEL_RE = re.compile(r'^[ \t]*[A-Za-z_]\w*:[ \t]*$')
CASE_RE = re.compile(r'^(case\b|default[ \t]*:)')
PREPROC_RE = re.compile(r'^[ \t]*#')


def lex(lines):
    """Comment/string-aware pass.

    Returns (code, events, dstart, dend, dmin, stmtinfo) where
      code[li]  = line with comments and string/char contents blanked
                  (length preserving),
      events[li]= [(col, +1|-1), ...] brace events in code,
      dstart[li]= depth before line, dend = depth after line,
      dmin[li]  = min depth over the line (start inclusive),
      stmtinfo  = (pd_start, semi0, endb, label_only) per line for
                  statement-boundary detection:
        pd_start   paren/square depth at line start (carried across lines)
        semi0      a `;` occurred at paren depth 0 on this line
        endb       code ends with `{` or `}` (at pd 0)
        label_only line is only a label (`name:` / case N: / default:)
    """
    code, events, dstart, dend, dmin = [], [], [], [], []
    semi0_l, endb_l, label_l = [], [], []
    depth = 0
    pd = 0
    in_bc = False
    for ln in lines:
        buf = list(ln)
        ev = []
        n = len(ln)
        i = 0
        d0 = depth
        loc_min = depth
        semi0 = False
        last_code_ch = ''
        while i < n:
            c = ln[i]
            if in_bc:
                if c == '*' and i + 1 < n and ln[i + 1] == '/':
                    buf[i] = buf[i + 1] = ' '
                    in_bc = False
                    i += 2
                    continue
                buf[i] = ' '
                i += 1
                continue
            if c == '/' and i + 1 < n and ln[i + 1] == '/':
                for j in range(i, n):
                    buf[j] = ' '
                break
            if c == '/' and i + 1 < n and ln[i + 1] == '*':
                buf[i] = buf[i + 1] = ' '
                in_bc = True
                i += 2
                continue
            if c == '"' or c == "'":
                q = c
                buf[i] = ' '
                i += 1
                while i < n:
                    if ln[i] == '\\':
                        buf[i] = ' '
                        if i + 1 < n:
                            buf[i + 1] = ' '
                        i += 2
                        continue
                    buf[i] = ' '
                    i += 1
                    if q == ln[i - 1]:
                        break
                continue
            if c == '{':
                ev.append((i, 1))
                depth += 1
                if depth < loc_min:
                    loc_min = depth
                last_code_ch = c
                pd0_at_end = (pd == 0)
            elif c == '}':
                ev.append((i, -1))
                depth -= 1
                if depth < loc_min:
                    loc_min = depth
                last_code_ch = c
                pd0_at_end = (pd == 0)
            elif c in '([':
                pd += 1
                last_code_ch = c
            elif c in ')]':
                pd = max(0, pd - 1)
                last_code_ch = c
            elif c == ';':
                if pd == 0:
                    semi0 = True
                last_code_ch = c
            elif c not in ' \t\r':
                last_code_ch = c
            i += 1
        code.append(''.join(buf))
        events.append(ev)
        dstart.append(d0)
        dend.append(depth)
        dmin.append(min(loc_min, depth))
        semi0_l.append(semi0)
        endb_l.append(last_code_ch in '{}' and pd == 0)
        label_l.append(bool(LABEL_RE.match(''.join(buf).strip()))
                       and not CASE_RE.match(''.join(buf).strip()))
    return code, events, dstart, dend, dmin, (semi0_l, endb_l, label_l)


def stmt_starts(code, semi0_l, endb_l, label_l, lo, hi):
    """Statement-start flags for lines [lo, hi): a line starts a statement
    when the previous statement/block/label is complete.  Returns a set of
    line indices and the index of the nearest stmt-start at-or-above each
    line (dict line -> anchor)."""
    starts = set()
    anchor = {}
    pend = True  # function body just opened: a statement may start
    last_start = None
    for li in range(lo, hi):
        if PREPROC_RE.match(code[li]):
            anchor[li] = last_start if last_start is not None else li
            continue  # preprocessor lines never start statements here
        starts_at = pend
        if starts_at:
            starts.add(li)
            last_start = li
        anchor[li] = last_start if last_start is not None else li
        pend = bool(semi0_l[li] or endb_l[li] or label_l[li])
    return starts, anchor


def find_block_close(events, dstart, open_line, open_col, n_lines):
    """Line/col of the `}` matching the `{` at (open_line, open_col).

    The open brace itself is not part of `events` accounting for the
    running depth: d starts at d_at+1 (depth inside the block) and the
    block closes when depth returns to d_at."""
    d_at = dstart[open_line]
    d = d_at + 1
    for li in range(open_line, n_lines):
        for (col, delta) in events[li]:
            if li == open_line and col <= open_col:
                continue
            d += delta
            if d == d_at:
                return li, col
    return None


def open_col_of(code_line):
    return code_line.rfind('{')


def type_ok(type_text):
    """(a) POD check.  Returns (ok, kind) kind in {scalar,pointer,array-ok}."""
    stars = type_text.count('*')
    idents = re.findall(r'[A-Za-z_]\w*', type_text)
    if not idents:
        return False, 'no-ident'
    if 'const' in idents and stars == 0:
        return False, 'const-value'
    if stars >= 1:
        return True, 'pointer'
    if all(t in BASE_TYPE_IDENTS for t in idents):
        return True, 'scalar'
    bad = [t for t in idents if t not in BASE_TYPE_IDENTS]
    return False, 'unknown-type:' + ','.join(bad[:2])


def find_uses(code, name, lo, hi, skip_lines):
    """All (line, col) bare uses of `name` in [lo, hi), skipping
    decl-shaped and preprocessor lines.  Member accesses (.name / ->name /
    ::name) are not uses of the local."""
    use_re = re.compile(r'(?<![\w.>:])' + re.escape(name) + r'\b')
    out = []
    for li in range(lo, min(hi, len(code))):
        if li in skip_lines or PREPROC_RE.match(code[li]):
            continue
        for m in use_re.finditer(code[li]):
            out.append((li, m.start()))
    return out


def path_min_depth(events, dstart, dmin, dend, pos0, pos1):
    """Min depth strictly from position pos0=(line,col) to pos1=(line,col)."""
    (l0, c0), (l1, c1) = pos0, pos1
    best = None
    d = None
    for li in range(l0, l1 + 1):
        if li == l0:
            d = None  # computed per line below
        # walk events
        start_col = c0 if li == l0 else 0
        end_col = c1 if li == l1 else None
        if d is None:
            d = dstart[li]
        for (col, delta) in events[li]:
            if col < start_col:
                continue
            if end_col is not None and col >= end_col:
                break
            d += delta
            if best is None or d < best:
                best = d
        if end_col is not None:
            break
    return best if best is not None else dstart[l0]


def sig_of_prev(code, p):
    """Function signature check for the line(s) above the run's `{` line p.

    Accepts either the `{` on the signature line itself (trailing `{`
    stripped) or a bare `{` line with the signature on the first non-blank
    line above.  Returns signature text or None."""
    s = code[p].rstrip()
    if s.endswith('{'):
        s = s[:-1].rstrip()
    if not s:
        q = p - 1
        while q >= 0 and not code[q].strip():
            q -= 1
        if q < 0:
            return None
        s = code[q].rstrip()
        if s.endswith('{'):
            s = s[:-1].rstrip()
    if not s:
        return None
    if not (s.endswith(')') and '(' in s):
        return None
    first = re.match(r'[ \t]*([A-Za-z_]\w*)', s)
    if not first or first.group(1) in NONFUNC_KW:
        return None
    return s.strip()


def process_file(path, counters, journal):
    raw = path.read_bytes()
    text = raw.decode('latin-1')
    lines = text.split('\n')
    n_lines = len(lines)
    code, events, dstart, dend, dmin, (semi0_l, endb_l, label_l) = lex(lines)
    counters['files_scanned'] += 1

    # --- locate top declaration runs -------------------------------
    def prev_nonblank(i):
        k = i - 1
        while k >= 0 and not code[k].strip():
            k -= 1
        return k

    runs = []
    i = 0
    while i < n_lines:
        if DECL_RE.match(code[i]):
            p = prev_nonblank(i)
            if p >= 0 and code[p].rstrip().endswith('{'):
                j = i
                while j + 1 < n_lines and DECL_RE.match(code[j + 1]):
                    j += 1
                runs.append((i, j, p))
                i = j + 1
                continue
        i += 1

    if not runs:
        return False

    moves = []          # (decl_line, insert_before, line_text)
    file_report = []

    for (r0, r1, p) in runs:
        sig = sig_of_prev(code, p)
        if sig is None:
            counters['run_nonsig'] += 1
            continue
        # function body block
        ptxt = code[p]
        if ptxt.rstrip().endswith('{'):
            open_line, open_col = p, open_col_of(ptxt)
        else:
            open_line, open_col = p + 1, open_col_of(code[p + 1])
        close = find_block_close(events, dstart, open_line, open_col, n_lines)
        if close is None:
            counters['run_unbalanced'] += 1
            continue
        close_line = close[0]
        counters['functions_scanned'] += 1
        func_moved = 0
        skip_lines_decl = set(range(r0, r1 + 1))
        starts, anchor = stmt_starts(code, semi0_l, endb_l, label_l,
                                     open_line + 1, close_line + 1)

        # (b) goto / bare-label anywhere in the function -> skip entirely
        has_jump = False
        for li in range(open_line, close_line + 1):
            c = code[li]
            if PREPROC_RE.match(c):
                continue
            if GOTO_RE.search(c):
                has_jump = True
                break
            if not has_jump and LABEL_RE.match(c) and not CASE_RE.match(c):
                has_jump = True
                break
        if has_jump:
            ndecl = r1 - r0 + 1
            counters['decls_seen'] += ndecl
            counters['skip_func_goto_decls'] += ndecl
            counters['functions_goto_skip'] += 1
            file_report.append({'sig': sig, 'disposition': 'skip-func-goto',
                                'decls': ndecl})
            continue

        for d in range(r0, r1 + 1):
            counters['decls_seen'] += 1
            m = DECL_RE.match(code[d])
            ttext, name, arr = m.group('type'), m.group('name'), m.group('arr')
            ok, kind = type_ok(ttext)
            if not ok:
                counters['skip_type'] += 1
                counters['skip_type_by'][kind] += 1
                continue
            # uses: in-run remainder first (condition d), then body
            inrun = find_uses(code, name, d + 1, r1 + 1, skip_lines_decl)
            if inrun:
                counters['skip_inblock'] += 1
                continue
            uses = find_uses(code, name, r1 + 1, close_line + 1,
                             skip_lines_decl)
            if not uses:
                counters['skip_nouse'] += 1
                continue
            # redeclaration / shadow check anywhere else in the function
            rd = redecl_re(name)
            redeclared = False
            for li in range(open_line + 1, close_line + 1):
                if li == d or PREPROC_RE.match(code[li]):
                    continue
                ft = re.match(r'[ \t]*([A-Za-z_]\w*)', code[li])
                if ft and ft.group(1) in RESERVED_FIRST:
                    continue  # `return result;` etc. are not redeclarations
                if rd.match(code[li]):
                    redeclared = True
                    break
            if redeclared:
                counters['skip_redecl'] += 1
                continue
            first_l, first_c = uses[0]
            if first_l <= r1:
                counters['skip_inblock'] += 1
                continue
            # insertion must sit at a statement boundary: walk back from
            # the first use to the nearest statement-start line (a use on
            # a continuation line of a multi-line statement would corrupt
            # the statement if a declaration were spliced into it)
            u_eff = anchor.get(first_l, first_l)
            if u_eff is None or u_eff <= r1 or u_eff > first_l:
                counters['skip_notstmt'] += 1
                continue
            if PREPROC_RE.match(code[u_eff]):
                counters['skip_notstmt'] += 1
                continue
            # already minimal: everything between this declaration and its
            # anchor statement is only sibling declaration lines (order
            # among bare declarations is semantically irrelevant; moving
            # would not bring it closer to the use and would break
            # second-run idempotence)
            if all(DECL_RE.match(code[k]) for k in range(d + 1, u_eff)):
                counters['decls_already_minimal'] += 1
                continue
            # (c) domination: depth at insertion, then never below it
            d_ins = dstart[u_eff]
            body_depth = dstart[open_line] + 1
            if d_ins < body_depth:
                counters['skip_dom'] += 1
                continue
            ok_dom = True
            min_seen = None
            # guard: braces on the insertion line BEFORE the first use must
            # not leave the insertion scope (degenerate `} v = x;` shapes)
            pm0 = path_min_depth(events, dstart, dmin, dend,
                                 (u_eff, 0), (first_l, first_c))
            if pm0 < d_ins:
                ok_dom = False
            prev_pos = (first_l, first_c)
            for (ul, uc) in uses:
                pm = path_min_depth(events, dstart, dmin, dend,
                                    prev_pos, (ul, uc))
                if min_seen is None or pm < min_seen:
                    min_seen = pm
                if pm < d_ins:
                    ok_dom = False
                    break
                prev_pos = (ul, uc)
            if not ok_dom:
                counters['skip_dom'] += 1
                continue
            line_text = lines[d]
            moves.append((d, u_eff, line_text))
            func_moved += 1
            counters['decls_moved'] += 1
            journal.append({
                'file': str(path).replace('\\', '/'),
                'func': sig[:120],
                'func_open_line': open_line + 1,
                'func_close_line': close_line + 1,
                'name': name,
                'type': (ttext.strip() + ' ' + name +
                         (arr or '')).strip(),
                'decl_line_1based': d + 1,
                'insert_line_1based': u_eff + 1,
                'first_use_line_1based': first_l + 1,
                'd_ins': d_ins,
                'min_depth_seen': min_seen,
                'n_uses': len(uses),
                'uses': [(u[0] + 1, u[1]) for u in uses[:50]],
                'decl_text': line_text.rstrip('\r'),
            })

        if func_moved == 0:
            counters['functions_untouched'] += 1
        else:
            counters['functions_touched'] += 1
        file_report.append({'sig': sig, 'moved': func_moved})

    if not moves:
        return False

    # --- apply: verbatim line moves, nothing else -------------------
    removed = {mv[0] for mv in moves}
    inserts = defaultdict(list)
    for (d, u, t) in sorted(moves, key=lambda x: (x[1], x[0])):
        inserts[u].append(t)
    new_lines = []
    for li in range(n_lines):
        for t in inserts.get(li, ()):
            new_lines.append(t)
        if li in removed:
            continue
        new_lines.append(lines[li])
    if new_lines == lines:
        counters['noop_no_change'] += 1
        return False
    counters['files_changed'] += 1
    counters['lines_delta'] += len(new_lines) - n_lines
    if APPLY:
        path.write_bytes('\n'.join(new_lines).encode('latin-1'))
    return True


def main():
    global APPLY
    ap = argparse.ArgumentParser()
    ap.add_argument('--apply', action='store_true')
    ap.add_argument('--roots', nargs='*', default=DEFAULT_ROOTS)
    ap.add_argument('--files', nargs='*')
    ap.add_argument('--limit-files', type=int, default=0)
    ap.add_argument('--journal')
    args = ap.parse_args()
    APPLY = args.apply

    if args.files:
        files = [Path(f) for f in args.files]
    else:
        files = []
        for r in args.roots:
            files += sorted((ROOT / r).rglob('*.cpp'))
        if args.limit_files:
            files = files[:args.limit_files]

    counters = Counter()
    counters['skip_type_by'] = Counter()
    journal = []
    for f in files:
        try:
            process_file(f, counters, journal)
        except Exception as e:  # noqa: BLE001 - census tool, keep going
            counters['file_errors'] += 1
            print(f'ERROR {f}: {e}', file=sys.stderr)

    total_skip = (counters['skip_type'] + counters['skip_inblock'] +
                  counters['skip_nouse'] + counters['skip_redecl'] +
                  counters['skip_dom'] + counters['skip_notstmt'] +
                  counters['skip_func_goto_decls'] +
                  counters['decls_already_minimal'])
    print('=== X37 miniscope %s ===' % ('APPLY' if APPLY else 'DRY-RUN'))
    print('files_scanned        %6d' % counters['files_scanned'])
    print('files_changed        %6d' % counters['files_changed'])
    print('functions_scanned    %6d' % counters['functions_scanned'])
    print('functions_touched    %6d' % counters['functions_touched'])
    print('functions_untouched  %6d' % counters['functions_untouched'])
    print('functions_goto_skip  %6d' % counters['functions_goto_skip'])
    print('decls_seen           %6d' % counters['decls_seen'])
    print('decls_moved          %6d' % counters['decls_moved'])
    print('decls_already_minimal%6d' % counters['decls_already_minimal'])
    print('skip_func_goto_decls %6d' % counters['skip_func_goto_decls'])
    print('skip_type            %6d' % counters['skip_type'])
    print('skip_inblock         %6d' % counters['skip_inblock'])
    print('skip_nouse           %6d' % counters['skip_nouse'])
    print('skip_redecl          %6d' % counters['skip_redecl'])
    print('skip_dom             %6d' % counters['skip_dom'])
    print('skip_notstmt         %6d' % counters['skip_notstmt'])
    print('run_nonsig           %6d' % counters['run_nonsig'])
    print('run_unbalanced       %6d' % counters['run_unbalanced'])
    print('lines_delta          %6d' % counters['lines_delta'])
    print('decls accounted: seen=%d moved+skips(incl minimal)=%d %s' %
          (counters['decls_seen'], counters['decls_moved'] + total_skip,
           'OK' if counters['decls_seen'] == counters['decls_moved'] +
           total_skip else 'MISMATCH'))
    print('skip_type_by:', dict(counters['skip_type_by']))
    if args.journal:
        out = Path(args.journal)
        out.parent.mkdir(parents=True, exist_ok=True)
        out.write_text(json.dumps({
            'apply': APPLY,
            'counters': {k: (dict(v) if isinstance(v, Counter) else v)
                         for k, v in counters.items()},
            'moves': journal,
        }, indent=1), encoding='utf-8')
        print('journal ->', out)
    return 0


if __name__ == '__main__':
    sys.exit(main())
