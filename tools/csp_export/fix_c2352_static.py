#!/usr/bin/env python3
"""G42.29f: add `static` to global-CC member decls (C2352, ~370 sites).

Qualified calls `Cls::M(args)` where the binary truth says M has a global
calling convention (stdcall/cdecl/fastcall, or ida_cache first line has no
this-param) fail as "illegal call of non-static member function". MSVC
accepts `Cls::M(...)` on a static member -- prepend `static` to the e4 hpp
declaration when:
  - signals/ida_cache CC truth is global (not thiscall),
  - the def body never uses `this`,
  - the decl is not `virtual`.

thiscall-arity-OK sites (receiver rewrite) are a separate wave.

Usage: [--apply]
"""
import json
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
CEN = ROOT / '.omo/tu_errors_g138.json'
E4C = ROOT / 'src/e4/classes'

sig = json.load(open(ROOT / 'signals.json', encoding='utf-8'))
SYM = sig['symbols']
BY_NAME = sig['_by_name']
NAME2ADDR = {}
for name, ent in BY_NAME.items():
    if isinstance(ent, dict):
        for a in ent.get('symbols', {}):
            NAME2ADDR[name] = a

census = json.load(open(CEN, encoding='utf-8'))
qnames = Counter()
for tu, errs in census.items():
    for e in errs:
        if 'C2352' not in e:
            continue
        m = re.search(r'C2352: [\u201c\u201d"](?:gamemd::)?'
                      r'([A-Za-z_]\w*::[~A-Za-z_]\w*)[\u201c\u201d"]', e)
        if m:
            qnames[m.group(1)] += 1
print('C2352 qualified names:', len(qnames), 'errors:', sum(qnames.values()))

# corpus cpps for def-body this-scan
DEFTXT = {}
for sub in ('src/e4', 'src/_gap2'):
    for p in (ROOT / sub).glob('*.cpp'):
        DEFTXT[str(p)] = p.read_text(encoding='utf-8', errors='replace')


def cc_of(qname):
    """-> 'global' | 'thiscall' | None."""
    a = NAME2ADDR.get(qname)
    if a and a in SYM:
        cc = SYM[a].get('call_convention') or ''
        if 'thiscall' in cc:
            return 'thiscall'
        if cc:
            return 'global'
    # ida_cache fallback: decompiled first line contains "(...*this"?
    for suf in ('%08X' % int(a[2:], 16), '%X' % int(a[2:], 16)) if a else ():
        cp = ROOT / '.omo/ida_cache/func_%s.json' % suf
        if cp.exists():
            try:
                dec = json.load(open(cp, encoding='utf-8'))
                first = (dec if isinstance(dec, str) else
                         dec.get('decompile') or dec.get('code') or '')
                head = first.split('\n')[0] if first else ''
                return 'thiscall' if re.search(r'\(\s*\w+ \*this', head) \
                    else 'global'
            except Exception:
                pass
    return None


def def_uses_this(qname):
    pat = re.compile(r'^[^;{}]*' + re.escape(qname) + r'\s*\(', re.M)
    for txt in DEFTXT.values():
        for m in pat.finditer(txt):
            # walk to def body; a CALL line has `;` before any `{` ->
            # not a def head, its enclosing body's `this` is irrelevant
            seg = txt[m.start():m.start() + 6000]
            b = seg.find('{')
            if b < 0 or (';' in seg[:b]):
                continue
            depth = 0
            end = None
            for i, ch in enumerate(seg[b:], b):
                if ch == '{':
                    depth += 1
                elif ch == '}':
                    depth -= 1
                    if depth == 0:
                        end = i
                        break
            if end and re.search(r'\bthis\b', seg[b:end]):
                return True
    return False


stats = Counter()
edits = {}
for qn, cnt in qnames.most_common():
    if '::' not in qn:
        stats['skip-unqualified'] += cnt
        continue
    cls, meth = qn.rsplit('::', 1)
    if cc_of(qn) != 'global':
        stats['skip-not-global-cc'] += cnt
        continue
    if def_uses_this(qn):
        stats['skip-def-uses-this'] += cnt
        continue
    hp = E4C / ('%s_e4.hpp' % cls)
    if not hp.exists():
        stats['skip-no-hpp'] += cnt
        continue
    lines = edits.setdefault(str(hp), hp.read_text(
        encoding='utf-8', errors='replace').split('\n'))
    done = False
    for i, ln in enumerate(lines):
        if re.match(r'^\s*virtual\b', ln):
            continue
        m = re.match(r'^(?!\s*static\b)(\s*)([\w:\s\*&<>,]+\s)\b~?'
                     + re.escape(meth) + r'\s*\(', ln)
        if m and (m.group(2).strip().endswith('*')
                  or re.search(r'\b(void|int|char|bool|unsigned|short|long|'
                               r'float|double|__int64|wchar_t|HRESULT|DWORD)'
                               r'\b', m.group(2))):
            lines[i] = m.group(1) + 'static ' + ln.strip()
            stats['decl-static'] += cnt
            done = True
            break
    if not done:
        stats['decl-not-found'] += cnt

print('stats:', dict(stats.most_common()))
if APPLY:
    for path, lines in edits.items():
        Path(path).write_text('\n'.join(lines), encoding='utf-8')
    print('written:', len(edits), 'files')
else:
    print('(dry -- pass --apply)')
