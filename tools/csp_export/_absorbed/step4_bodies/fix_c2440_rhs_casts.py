#!/usr/bin/env python3
"""G41.28: log-driven C2440 repair -- wrap assignment RHS in a C-style cast
to the assignment's target type.

Covers pointer<->scalar conversion pairs (void*->unsigned int, unsigned
char(*)[4]->unsigned int, int->SomeClass**, ...): the corpus declares IDA
`_DWORD` locals while RHS carries pointers. Sites where a legal C-style
cast cannot exist (double->ptr, void->int, template `_T=` forms) are
skipped and counted.

Usage: python tools/csp_export/fix_c2440_rhs_casts.py <buildlog> [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

LN = re.compile(r'D:[^:]*RA2YR_ReSource[\\/](src[\\/][^(]+)[\\/]?[(](\d+)(?:,(\d+))?[)]: error C2440')
PAIR = re.compile(r'无法从“([^”]*)”转换为“([^”]*)”')
CASTABLE_SRC = re.compile(r'^(?:[a-z_ ][\w: ]*\*+|unsigned |signed |int|char|short|long|__int64|unsigned int|unsigned char|unsigned short|unsigned long|void \*.*|)$')
BAD = re.compile(r'double|float|^void$|_T[=>]|模板')


def top_level_eq(s):
    """Index of the last assignment `=` (not ==,!=,<=,>=,+=,...), or None."""
    for i in range(len(s) - 1, -1, -1):
        if s[i] != '=':
            continue
        if s[i + 1:i + 2] == '=':
            continue
        if i > 0 and s[i - 1] in '=!<>+-*/%&|^':
            continue
        return i
    return None


def main():
    sites = {}
    for ln in Path(LOG).read_text(errors='replace').splitlines():
        m = LN.match(ln.replace('\\', '/'))
        if not m:
            continue
        pm = PAIR.search(ln)
        if not pm:
            continue
        src, dst = pm.group(1), pm.group(2)
        if BAD.search(src) or BAD.search(dst):
            continue
        if not src.strip() or not dst.strip():
            continue
        # G42.11: a comma in dst means the message glued a param onto the
        # type (spliced-cast corruption family) -- never castable
        if ',' in dst or ',' in src:
            continue
        key = (m.group(1).replace('/', '\\'), int(m.group(2)))
        sites.setdefault(key, (src, dst))
    print('castable sites:', len(sites))

    by_file = {}
    for (fp, line), (src, dst) in sites.items():
        by_file.setdefault(fp, []).append((line, dst))

    n = 0
    miss = 0
    for fp, items in by_file.items():
        p = ROOT / fp
        if not p.exists():
            continue
        try:
            ls = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        want = dict(items)
        touched = False
        for line, dst in items:
            if line > len(ls):
                continue
            raw = ls[line - 1]
            body = raw.split('/*')[0].split('//')[0].rstrip()
            if not body.endswith(';') or body.count(';') != 1:
                miss += 1
                continue
            pre_eq = body[:-1]
            i = top_level_eq(pre_eq)
            if i is None:
                # G42.7: return-context -- `return X;` whose fn decl says DST
                # (G42.11: pre_eq keeps its indentation; strip before match)
                stripped = pre_eq.lstrip()
                rm = re.match(r'^return\s+(.+)$', stripped)
                if rm:
                    rhs = rm.group(1).strip()
                    if not rhs or rhs.startswith('(' + dst + ')') \
                            or '(' in dst or ')' in dst or ',' in dst:
                        miss += 1
                        continue
                    indent = pre_eq[:len(pre_eq) - len(stripped)]
                    ls[line - 1] = (indent + 'return (%s)(%s);' % (dst, rhs)
                                    ) + raw[len(body):]
                    n += 1
                    touched = True
                    continue
                miss += 1
                continue
            lhs, rhs = pre_eq[:i].strip(), pre_eq[i + 1:].strip()
            if not rhs or rhs.startswith('(' + dst + ')'):
                miss += 1
                continue
            new_rhs = '(%s)(%s)' % (dst, rhs)
            ls[line - 1] = pre_eq[:i + 1] + ' ' + new_rhs + ';' + raw[len(body):]
            n += 1
            touched = True
        if touched and APPLY:
            p.write_text('\n'.join(ls), encoding='utf-8', errors='replace')
    print('rhs casts inserted: %d, unmatched lines: %d %s'
          % (n, miss, '(written)' if APPLY else '(DRY)'))


if __name__ == '__main__':
    main()
