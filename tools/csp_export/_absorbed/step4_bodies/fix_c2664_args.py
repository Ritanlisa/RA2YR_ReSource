#!/usr/bin/env python3
"""Fix C2664 argument-type errors by casting the offending argument.

For every

    file(l,c): error C2664: "SIG": 无法将参数 N 从 "T1" 转换为 "T2"

this locates the call to the named function (its argument list) around the
error line, splits the top-level comma-separated arguments, and wraps
argument N in `(T2)( ... )`. Statements are single-line-joined; the `;`
terminates them (trailing // comments survive on their own line).

Usage: python tools/csp_export/fix_c2664_args.py <error-log> [--apply]
"""
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

LQ, RQ = chr(0x201C), chr(0x201D)
TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace') if LOG else ''

ERR = re.compile(
    re.escape('D:\\RA2YR_ReSource\\src\\') +
    r'([^\(\n]+)\((\d+),(\d+)\): error C2664: [' + LQ + RQ + r']([^\n'
    + RQ + r']+)[' + RQ + r']: [^\n]*无法将参数 (\d+) 从[' + LQ + RQ
    + r']([^' + RQ + r'\n]+)[' + RQ + ']转换为[' + LQ + RQ + r']([^'
    + RQ + r'\n]+)[' + RQ + ']')

VALID_T = re.compile(r'^[A-Za-z_][\w\s\*:<>,&]*$')

sites = defaultdict(set)   # file -> {(line, param_no, callee, t2)}
for m in ERR.finditer(TXT):
    f, ln, callee, pn, t2 = (m.group(1), int(m.group(2)), m.group(4),
                             int(m.group(5)), m.group(7).strip())
    if not VALID_T.match(t2):
        continue
    callee_short = callee.split('::')[-1].split('(')[0].strip()
    if not re.match(r'^[A-Za-z_]\w*$', callee_short):
        continue
    sites[f.replace('/', '\\')].add((ln, pn, callee_short, t2))


def split_args(argtext):
    """Split a call argument list on top-level commas. Returns list of
    (start, end) offsets into argtext."""
    args = []
    depth = 0
    start = 0
    i = 0
    n = len(argtext)
    in_str = False
    while i < n:
        ch = argtext[i]
        if ch == '"':
            in_str = not in_str
        elif not in_str:
            if ch in '([{':
                depth += 1
            elif ch in ')]}':
                depth -= 1
            elif ch == ',' and depth == 0:
                args.append((start, i))
                start = i + 1
        i += 1
    args.append((start, n))
    return args


total = applied = 0
for f, lst in sorted(sites.items()):
    p = SRC / f
    if not p.exists():
        continue
    try:
        lines = p.read_text(encoding='latin-1', errors='replace').split('\n')
    except OSError:
        continue
    edits = []
    claimed = set()
    for (ln, pn, callee, t2) in sorted(lst, reverse=True):
        total += 1
        if ln - 1 >= len(lines) or ln - 1 in claimed:
            continue
        # find the callee's '(' at/after the error line (search a window:
        # the call usually starts on the error line or a couple above)
        found = None
        for cand in range(max(0, ln - 4), min(len(lines), ln + 3)):
            if any(k in claimed for k in range(cand, cand + 1)):
                continue
            for m in re.finditer(r'\b' + re.escape(callee) + r'\s*\(',
                                 lines[cand]):
                found = (cand, m.end() - 1)   # position of '('
                break
            if found:
                break
        if not found:
            continue
        cline, cpos = found
        # walk the balanced parens from '('
        depth = 0
        i = cpos
        endpos = -1
        while i < len(lines[cline]):
            ch = lines[cline][i]
            if ch == '(':
                depth += 1
            elif ch == ')':
                depth -= 1
                if depth == 0:
                    endpos = i
                    break
            i += 1
        if endpos < 0:
            # multi-line call: extend line by line
            k = cline
            seg = lines[cline][cpos:]
            while k + 1 < len(lines) and k - cline < 12:
                k += 1
                seg += '\n' + lines[k]
                for ch in lines[k]:
                    if ch == '(':
                        depth += 1
                    elif ch == ')':
                        depth -= 1
                        if depth == 0:
                            endpos = len(lines[k]) - \
                                (len(lines[k]) - len(lines[k].rstrip()) - 1)
                            break
                if depth == 0 and ')' in lines[k]:
                    # recompute end position inside line k
                    d2 = 0
                    for j, ch in enumerate(lines[k]):
                        if ch == '(':
                            d2 += 1
                        elif ch == ')':
                            d2 -= 1
                            if d2 == 0:
                                endpos = j
                                break
                    break
            if endpos < 0 or k == cline:
                continue
            # build joined text of the call region
            joined = ' '.join(lines[cline:k + 1])
            m0 = re.search(r'\b' + re.escape(callee) + r'\s*\(', joined)
            if not m0:
                continue
            a_start = m0.end()
            d2 = 1
            j = a_start
            while j < len(joined) and d2 > 0:
                if joined[j] == '(':
                    d2 += 1
                elif joined[j] == ')':
                    d2 -= 1
                j += 1
            argtext = joined[a_start:j - 1]
            args = split_args(argtext)
            if len(args) < pn:
                continue
            s, e = args[pn - 1]
            arg = argtext[s:e].strip()
            if arg.startswith('(' + t2.split()[0]):
                continue
            new_arg = '(%s)(%s)' % (t2, arg)
            new_call = joined[:a_start + s] + new_arg + joined[a_start + e:]
            indent = re.match(r'\s*', lines[cline]).group(0)
            edits.append((cline, k, indent + new_call, ''))
            for kk in range(cline, k + 1):
                claimed.add(kk)
            applied += 1
            continue
        # single-line call
        argtext = lines[cline][cpos + 1:endpos]
        args = split_args(argtext)
        if len(args) < pn:
            continue
        s, e = args[pn - 1]
        arg = argtext[s:e].strip()
        if not arg:
            continue
        if arg.startswith('(' + t2.split()[0]):
            continue
        new_arg = '(%s)(%s)' % (t2, arg)
        line = lines[cline]
        lines[cline] = line[:cpos + 1 + s] + new_arg + line[cpos + 1 + e:]
        applied += 1
    if edits and APPLY:
        for (cline, k, new, _c) in sorted(edits, reverse=True):
            lines[cline:k + 1] = [new]
        p.write_text('\n'.join(lines), encoding='latin-1', errors='replace')

print('C2664 sites: %d, args casted: %d' % (total, applied))
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
