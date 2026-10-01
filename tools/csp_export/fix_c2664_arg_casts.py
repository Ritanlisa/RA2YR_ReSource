#!/usr/bin/env python3
"""G41.35: log-driven C2664 repair -- wrap the Nth call argument in a
C-style cast to the parameter's declared type.

Message shape: 无法将参数 N 从"SRC"转换为"DST". Only scalar<->pointer
pairs are cast (same legality gate as fix_c2440_rhs_casts); the DST is
taken from the message's declared param type.

Usage: python tools/csp_export/fix_c2664_arg_casts.py <log> [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

LN = re.compile(r'D:[^:]*RA2YR_ReSource[\\/](src[\\/][^(]+)[\\/]?[(](\d+),(\d+)[)]: error C2664')
Q = chr(0x201C) + chr(0x201D)
QT = '["' + Q + ']'
PAIR = re.compile(r'无法将参数 (\d+) 从' + QT + r'([^"' + Q + r']+)' + QT +
                  r'转换为' + QT + r'([^"' + Q + r']+)' + QT)
BAD = re.compile(r'double|float|^void$|模板|_T[=>]')


def split_args(seg):
    """Top-level comma split of an argument list (paren/bracket aware)."""
    parts = []
    depth = 0
    cur = []
    for ch in seg:
        if ch in '([':
            depth += 1
        elif ch in ')]':
            depth -= 1
        if ch == ',' and depth == 0:
            parts.append(''.join(cur))
            cur = []
        else:
            cur.append(ch)
    parts.append(''.join(cur))
    return parts


def wrap_arg(line, argno, dst):
    """Wrap the argno-th (1-based) argument of the FIRST call-ish paren
    group that opens at/after the error column. Falls back to scanning
    from column 0."""
    body = line.split('/*')[0]
    col = 0
    # find candidate '(' positions; the arg list containing col
    # simplest: first '(' after the last identifier before ';'
    # strategy: try every '(' from the start; pick the first whose
    # balanced span covers >= argno args
    i = 0
    while i < len(body):
        if body[i] == '(':
            depth = 0
            for j in range(i, len(body)):
                if body[j] == '(':
                    depth += 1
                elif body[j] == ')':
                    depth -= 1
                    if depth == 0:
                        seg = body[i + 1:j]
                        parts = split_args(seg)
                        if len(parts) >= argno and parts[argno - 1].strip():
                            a = parts[argno - 1].strip()
                            if a.startswith('(' + dst + ')'):
                                return None
                            parts[argno - 1] = '(%s)(%s)' % (dst, a)
                            newbody = body[:i + 1] + ','.join(parts) + body[j:]
                            return line[:len(line) - len(body)] + newbody \
                                if line.startswith(line[:len(line) - len(body)]) else None
                        i = j
                        break
        i += 1
    return None


def main():
    sites = {}
    for ln in Path(LOG).read_text(encoding='utf-8', errors='replace').splitlines():
        m = LN.match(ln.replace('\\', '/'))
        if not m:
            continue
        pm = PAIR.search(ln)
        if not pm:
            continue
        src, dst = pm.group(2), pm.group(3)
        if BAD.search(src) or BAD.search(dst):
            continue
        key = (m.group(1).replace('/', '\\'), int(m.group(2)))
        sites.setdefault(key, []).append((int(pm.group(1)), dst))
    print('castable arg sites:', len(sites))

    n = miss = 0
    by_file = {}
    for (fp, line), items in sites.items():
        by_file.setdefault(fp, []).append((line, items))
    for fp, its in by_file.items():
        p = ROOT / fp
        if not p.exists():
            continue
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        touched = False
        for line, items in its:
            if line > len(lines):
                miss += 1
                continue
            for argno, dst in items:
                new = wrap_arg(lines[line - 1], argno, dst)
                if new is None:
                    miss += 1
                    continue
                lines[line - 1] = new
                n += 1
                touched = True
        if touched and APPLY:
            p.write_text('\n'.join(lines), encoding='utf-8')
    print('arg casts inserted: %d, unmatched: %d %s'
          % (n, miss, '(written)' if APPLY else '(DRY)'))


if __name__ == '__main__':
    main()
