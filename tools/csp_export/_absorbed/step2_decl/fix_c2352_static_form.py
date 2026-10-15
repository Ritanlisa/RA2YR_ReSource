#!/usr/bin/env python3
"""X28: C2352 static-form repair (log-driven, conservative).

C2352 ("call to non-static member function requires an object") at
`Cls::Method(args)` sites means the CALL is static-form while the carrier
declaration is an instance method.  For the subset of callees where:
  * the carrier decl lives in a src/e4/classes/*.hpp (or another header we
    can locate), is not already static, and appears exactly ONCE;
  * NO instance-form call (`->Method(` / `.Method(`) exists anywhere in
    src/ (if one does, the same name is used BOTH ways -- flipping the
    decl would move the C2352 to the instance sites, net zero);
  * the out-of-line def (if any, searched recursively) does not use `this->`
    (a static decl + this-using def = C2671 at the def);
the declaration is made `static`.  All call sites already use the static
form (that is what the C2352 proves), so the flip is purely additive.

Usage: python fix_c2352_static_form.py <buildlog> [--apply] [--detail]
"""
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv
DETAIL = '--detail' in sys.argv
LOG = Path(sys.argv[1])
if not LOG.is_absolute():
    LOG = ROOT / LOG

ERR = re.compile(
    r'^(?P<file>.+?)\((?P<line>\d+)(?:,\d+)?\)\s*:\s*(?:fatal )?error\s+'
    r'C2352\s*:\s*(?P<msg>.*?)(?:\s*\[[^\]]*\])?\s*$')
QNAME = re.compile(r'[“"]([^”"]+)[”"]')
DECL_RE_T = r'^(\s*)(static\s+)?([A-Za-z_][\w:<>,\s\*&]*?[\s\*])~?%s\s*\(([^;{}]*)\)\s*;'


def main():
    # 1. collect C2352 callees
    raw = Counter()
    for l in LOG.read_text(encoding='utf-8', errors='replace').split('\n'):
        m = ERR.match(l.strip())
        if not m:
            continue
        for q in QNAME.findall(m.group('msg')):
            if '::' in q or '(' in q:
                raw[q.split('(', 1)[0].strip()] += 1
                break

    # 2. instance-form call census (whole src, cpp + hpp)
    cache = {}
    def text_of(p):
        if p not in cache:
            try:
                cache[p] = p.read_text(encoding='utf-8', errors='replace')
            except OSError:
                cache[p] = ''
        return cache[p]

    # 3. def scan (recursive): qname -> (file, line_idx, uses_this)
    DEF_RE = re.compile(r'^\s*[A-Za-z_][\w:<>,\s\*&]*?[\s\*]'
                        r'([A-Za-z_]\w*::~?[A-Za-z_]\w*)\s*\(([^;{}]*)\)\s*(?:\{|$)')
    defs = {}
    for p in sorted(SRC.rglob('*.cpp')):
        txt = text_of(p)
        if '::' not in txt:
            continue
        lines = txt.split('\n')
        for i, l in enumerate(lines):
            dm = DEF_RE.match(l.strip())   # X28: CRLF-safe (was unstripped)
            if not dm:
                continue
            if dm.group(1) not in defs:
                defs[dm.group(1)] = (p, i)

    def def_uses_this(p, di):
        # X28: the first version checked only `this->`; bodies that compare
        # bare `this` (e.g. `if ( this == 1 )` switch-style dispatch) were
        # missed -> static flip -> C2355 (this outside non-static member).
        # Any occurrence of the `this` keyword disqualifies the def.
        depth = 0
        started = False
        lines = text_of(p).split('\n')
        for i in range(di, min(di + 4000, len(lines))):
            l = lines[i]
            if not started:
                if '{' in l:
                    started = True
                    depth = l.count('{') - l.count('}')
                continue
            if re.search(r'\bthis\b', l):
                return True
            depth += l.count('{') - l.count('}')
            if depth <= 0:
                return False
        return False

    # 4. decl locate per callee
    plans = []      # (header, line_idx, qname, raw_n)
    skipped = Counter()
    for qname, n in raw.most_common():
        cls, _, name = qname.rpartition('::')
        cls = cls.split('::')[-1]
        if not cls or not name:
            skipped['noq'] += 1
            continue
        # instance-form calls?
        pat = re.compile(r'(->|\.)\s*%s\s*\(' % re.escape(name))
        inst = 0
        for p in list(SRC.rglob('*.cpp')) + list(SRC.rglob('*.hpp')):
            if pat.search(text_of(p)):
                inst += 1
        if inst:
            skipped['instance-form-calls'] += 1
            continue
        # def check
        d = defs.get(qname) or defs.get('%s::%s' % (cls, name))
        if d and def_uses_this(d[0], d[1]):
            skipped['def-uses-this'] += 1
            continue
        # decl locate: e4/classes first, then any src header
        found = None
        for hd in list((SRC / 'e4' / 'classes').glob('*.hpp')) + \
                sorted(SRC.rglob('*.hpp')):
            txt = text_of(hd)
            if ('struct %s' % cls) not in txt and ('class %s' % cls) not in txt:
                continue
            lines = txt.split('\n')
            cur = None
            for i, l in enumerate(lines):
                sm = re.match(r'\s*(?:struct|class)\s+(\w+)\s*\{', l)
                if sm:
                    cur = sm.group(1)
                if re.match(r'^\s*\};', l):
                    cur = None
                m = re.match(DECL_RE_T % re.escape(name), l)
                if m and cur == cls and not m.group(2):
                    if found is not None:
                        found = ('MULTI', found)
                        break
                    found = (hd, i, m)
                elif m and cur == cls and m.group(2):
                    found = ('ALREADY', None)
                    break
            if found is None:
                continue
            break
        if found is None:
            skipped['no-decl'] += 1
            continue
        if isinstance(found, tuple) and found[0] == 'MULTI':
            skipped['multi-decl'] += 1
            continue
        if isinstance(found, tuple) and found[0] == 'ALREADY':
            skipped['already-static'] += 1
            continue
        hd, i, m = found
        plans.append((hd, i, qname, n, m))

    n_raw = sum(p[3] for p in plans)
    print('C2352 callees: %d ; planned: %d (raw lines %d)' %
          (len(raw), len(plans), n_raw))
    print('skipped: %s' % dict(skipped))
    if DETAIL:
        for hd, i, qname, n, m in sorted(plans, key=lambda x: -x[3])[:40]:
            print('  %-55s %4d  %s:%d' % (qname, n, hd.relative_to(ROOT).as_posix(),
                                          i + 1))
    if not APPLY:
        print('DRY RUN (use --apply)')
        return

    wrote = 0
    for hd, i, qname, n, m in plans:
        lines = text_for_write(hd)
        l = lines[i]
        # idempotence: skip if already static (defensive)
        if re.match(r'^\s*static\s', l):
            continue
        # insert `static ` after the indent
        ind = re.match(r'^(\s*)', l).group(1)
        lines[i] = ind + 'static ' + l[len(ind):]
        hd.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
        wrote += 1
    print('APPLIED static to %d decl(s)' % wrote)


_local_cache = {}


def text_for_write(p):
    t = p.read_text(encoding='utf-8', errors='replace')
    return t.split('\n')


if __name__ == '__main__':
    main()
