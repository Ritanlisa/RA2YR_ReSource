#!/usr/bin/env python3
"""One-shot e4 header cleanup for CSP member-table noise.

a) drop member decls whose offset comment exceeds 0x8000 (call-site
   addresses registered as member offsets — q20481684 & friends)
b) drop bare `unsigned int <Method>;` data members whose name is a known
   C2597 static-call method (method-call names misregistered as members)
c) drop junk `return ...;  // def-aligned` lines (find_def matched call
   lines) and dedupe `static double X(...);  // C2597 interim stub` decls

Usage: python tools/csp_export/clean_e4_headers.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
E4C = ROOT / 'src' / 'e4' / 'classes'
APPLY = '--apply' in sys.argv

OFFSET_CAP = 0x8000

TXT = ''


def method_names_from_log():
    if not TXT:
        return set()
    return {m for _c, m in
            re.findall(r'error C2597: .{0,60}?gamemd::(\w+)::(\w+)', TXT)}


LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)
TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace') if LOG else ''
METHODS = method_names_from_log()

OFF_CMT = re.compile(r'//\s*0x([0-9A-Fa-f]+)')
BARE_METHOD = re.compile(r'^[ \t]*unsigned int (\w+);\s*$')
JUNK_RETURN = re.compile(r'^[ \t]*return [^\n]*// def-aligned\s*$')
LABEL_RE = re.compile(r'^[ \t]*LABEL_\d+:.*// def-aligned\s*$')
STUB_DECL = re.compile(r'^[ \t]*static double (\w+)\(\.\.\.\);[^\n]*$')

n_off = n_method = n_junk = n_dup = n_files = 0
for p in sorted(E4C.glob('*_e4.hpp')):
    try:
        if 'GENERATED minimal flat class' in \
                open(p, encoding='utf-8', errors='replace').read(200):
            continue  # G41.22: minimal generated headers are off-limits
    except OSError:
        pass
    try:
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    except OSError:
        continue
    orig = list(lines)
    # pre-scan: stub decl names in this header (members must yield to them)
    stub_names = set(STUB_DECL.match(l).group(1) for l in lines
                     if STUB_DECL.match(l))
    out = []
    seen_stubs = set()
    for ln in lines:
        m = OFF_CMT.search(ln)
        if m and int(m.group(1), 16) > OFFSET_CAP and ';' in ln \
                and '(' not in ln.split('//')[0]:
            n_off += 1
            continue
        b = BARE_METHOD.match(ln)
        if b and (b.group(1) in METHODS or b.group(1) in stub_names):
            # method name misregistered as data member (CSP call-site noise)
            n_method += 1
            continue
        if JUNK_RETURN.match(ln) or LABEL_RE.match(ln):
            n_junk += 1
            continue
        s = STUB_DECL.match(ln)
        if s:
            if s.group(1) in seen_stubs:
                n_dup += 1
                continue
            seen_stubs.add(s.group(1))
        out.append(ln)
    if out != orig:
        n_files += 1
        if APPLY:
            p.write_bytes('\n'.join(out).encode('utf-8'))

print(f'cleaned: {n_off} over-cap members, {n_method} method-name members, '
      f'{n_junk} junk returns, {n_dup} dup stubs in {n_files} headers')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
