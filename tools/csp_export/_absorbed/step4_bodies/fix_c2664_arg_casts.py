#!/usr/bin/env python3
"""G41.35/G41.46w3: log-driven C2664 repair -- wrap the Nth call argument in a
C-style cast to the parameter's declared type.

Message shape: 无法将参数 N 从"SRC"转换为"DST". Only scalar<->pointer
pairs are cast (same legality gate as fix_c2440_rhs_casts); the DST is
taken from the message's declared param type. G41.46 wave 3: the call is
located by the callee name parsed from the display signature, and a site
is skipped unless exactly one candidate call with >= N args exists on the
line (previously the first paren group that merely covered N args was
used, which could wrap the wrong call). Fn-pointer and class-by-value
DSTs are skipped.

Usage: python tools/csp_export/fix_c2664_arg_casts.py <log> [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

LN = re.compile(r'D:[^:]*RA2YR_ReSource[\\/](src[\\/][^(]+)[\\/]?[(](\d+)(?:,(\d+))?[)]: error C2664')
Q = chr(0x201C) + chr(0x201D)
QT = '["' + Q + ']'
PAIR = re.compile(r'无法将参数 (\d+) 从' + QT + r'([^"' + Q + r']+)' + QT +
                  r'转换为' + QT + r'([^"' + Q + r']+)' + QT)
SIG = re.compile(r'error C2664: ' + QT + r'(.+?)' + QT + r': 无法将参数')
BAD = re.compile(r'double|float|^void$|模板|_T[=>]')

SCALARS = set('''int unsigned int long unsigned long short unsigned short char
unsigned char signed char int8_t uint8_t int16_t uint16_t int32_t uint32_t
int64_t uint64_t bool float double wchar_t size_t'''.split())

# G42.7: Win32 handle typedefs are scalar-or-pointer opaque types -- casting
# an int/pixel value to HWND is legal and what the corpus means.
WIN_HANDLES = {'HWND', 'HANDLE', 'LPVOID', 'LPCSTR', 'LPSTR', 'LPCTSTR',
               'LPCWSTR', 'LPWSTR', 'WNDPROC', 'LPPERSISTSTREAM', 'HDC',
               'HINSTANCE', 'HHOOK', 'HMENU', 'HBRUSH', 'HFONT', 'HPEN',
               'HRGN', 'HBITMAP', 'HICON', 'HCURSOR', 'HKEY', 'HMODULE',
               'HGLOBAL', 'HFILE', 'SOCKET'}
# G42.7: callee tokens that are really type words -- `\bvoid\s*\(` matches
# inside `(void (**)(LPVOID,int*))` fn-ptr types; anchoring on them would
# inject casts into type text (CComObject_e4.cpp:381 evidence).
TYPE_WORDS = SCALARS | {'void', 'unsigned', 'signed', 'const', '_QWORD',
                        '_DWORD', '_WORD', '_BYTE', '__int64'}

STATS = {}


def stat(k):
    STATS[k] = STATS.get(k, 0) + 1


def callee_of(ln):
    m = SIG.search(ln)
    if not m:
        return None
    head = m.group(1)
    i = head.rfind('(')
    head = head[:i].strip() if i >= 0 else head
    parts = head.split()
    qname = re.sub(r'^[*&]+', '', parts[-1]) if parts else ''
    callee = qname.split('::')[-1] if qname else ''
    if callee and re.match(r'^~?[A-Za-z_]\w*$', callee):
        return callee
    return None


def dst_castable(dst):
    d = dst.strip()
    if d.endswith('const'):        # trailing cv-qualifier: `FILE *const`
        d = d[:-len('const')].strip()
    if '(' in d or ')' in d:
        return False
    if d.rstrip().endswith('*') or d.rstrip().endswith('&'):
        return True
    base = re.search(r'([A-Za-z_]\w*)\s*$', d)
    return bool(base) and (base.group(1) in SCALARS
                           or base.group(1) in WIN_HANDLES)



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


def wrap_arg(line, argno, dst, callee=None):
    """Wrap the argno-th (1-based) argument of the callee's call in a cast.
    Only rewrites when exactly one candidate call with >= argno args exists
    on the line (callee-anchored); falls back to the old first-span scan
    only when no callee name is available."""
    body = line.split('/*')[0]
    occ = []
    if callee:
        if callee in TYPE_WORDS:
            stat('skip-callee-is-type-word')
            return None
        for cm in re.finditer(r'\b%s\s*\(' % re.escape(callee), body):
            i = cm.end() - 1
            depth = 0
            for j in range(i, len(body)):
                if body[j] == '(':
                    depth += 1
                elif body[j] == ')':
                    depth -= 1
                    if depth == 0:
                        parts = split_args(body[i + 1:j])
                        if len(parts) >= argno and parts[argno - 1].strip():
                            occ.append((i, j, parts))
                        break
    if len(occ) > 1:
        stat('skip-ambiguous-multi-call')
        return None
    if len(occ) == 1:
        i, j, parts = occ[0]
        a = parts[argno - 1].strip()
        if a.startswith('(' + dst + ')'):
            stat('skip-already-cast')
            return None
        parts[argno - 1] = '(%s)(%s)' % (dst, a)
        newbody = body[:i + 1] + ','.join(parts) + body[j:]
        return newbody + line[len(body):]
    if callee:
        stat('skip-no-call-found')
        return None
    # legacy fallback (no callee name in message)
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
        # G42.11: comma in dst/src = spliced-param corruption family
        if ',' in dst or ',' in src:
            continue
        if not dst_castable(dst):
            stat('skip-uncastable-dst') 
            continue
        callee = callee_of(ln)
        key = (m.group(1).replace('/', '\\'), int(m.group(2)))
        sites.setdefault(key, []).append((int(pm.group(1)), dst, callee))
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
            for argno, dst, callee in items:
                new = wrap_arg(lines[line - 1], argno, dst, callee)
                if new is None:
                    miss += 1
                    continue
                lines[line - 1] = new
                n += 1
                touched = True
        if touched and APPLY:
            p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
    print('arg casts inserted: %d, unmatched: %d %s'
          % (n, miss, '(written)' if APPLY else '(DRY)'))
    for k in sorted(STATS, key=STATS.get, reverse=True):
        print('  %-28s %d' % (k, STATS[k]))


if __name__ == '__main__':
    main()
