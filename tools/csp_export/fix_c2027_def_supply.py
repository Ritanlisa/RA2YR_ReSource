# -*- coding: utf-8 -*-
"""G41.49: full flat class definitions from member_lookup for C2027
layout-debt types (class fwd-declared, members accessed, no full def
anywhere in the e4 universe).

Truth source: tools/member_lookup.json (the authoritative member table,
same source as the e4 class generator). Redefinition guard: skip any
type that already has a class BODY in any e4 classes hpp (incl. the
tree headers), or that is an SDK type (IUnknown etc.).

Defs are appended inside e4_protos.h's namespace gamemd block (fwd decls
already precede them; fwd + later full def in one TU is legal).
Dry-run default; --apply writes.
"""
import json, re, os, sys, collections

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
ROOT = os.path.abspath(ROOT)
APPLY = '--apply' in sys.argv
PROTOS = os.path.join(ROOT, 'src', 'e4', 'e4_protos.h')

SDK_NAMES = {'IUnknown', 'IDispatch', 'IStream', 'IMalloc', 'HWND', 'HDC',
             'MSG', 'FILE', 'IDirectDrawSurface', 'IDirectDraw'}

d = json.load(open(os.path.join(ROOT, '.omo', 'tu_errors.json')))
t2027 = collections.Counter()
for tu, el in d.items():
    for e in el:
        if 'error C2027' not in e:
            continue
        m = re.search(r'“(?:gamemd::)?([A-Za-z_]\w*(?:<[^>]*>)?)”', e)
        if m:
            t2027[re.sub(r'<.*', '', m.group(1))] += 1

# any class BODY anywhere in e4 classes hpps?
has_body = set()
for fn in os.listdir(os.path.join(ROOT, 'src', 'e4', 'classes')):
    if not fn.endswith('.hpp'):
        continue
    for ln in open(os.path.join(ROOT, 'src', 'e4', 'classes', fn),
                   encoding='utf-8', errors='replace'):
        m = re.match(r'\s*(?:class|struct)\s+([A-Za-z_]\w*)[^;]*\{', ln)
        if m:
            has_body.add(m.group(1))

ml = json.load(open(os.path.join(ROOT, 'tools', 'member_lookup.json'),
                    encoding='utf-8'))

TYPE_MAP = [('unsigned char', 'unsigned char'), ('unsigned short', 'unsigned short'),
            ('unsigned int', 'unsigned int'), ('int', 'int'), ('bool', 'bool'),
            ('char', 'char'), ('float', 'float'), ('double', 'double'),
            ('void*', 'void*'), ('_DWORD', 'unsigned int')]

def norm_t(t):
    if not t:
        return 'unsigned int'
    for a, b in TYPE_MAP:
        if t == a:
            return b
    if t.endswith('*'):
        return t
    return t

stats = collections.Counter()
defs = []
for t in sorted(t2027, key=lambda k: -t2027[k]):
    if t in SDK_NAMES or t in has_body:
        stats['skip-defined'] += t2027[t]
        continue
    lay = ml.get(t)
    if not lay:
        stats['no-layout'] += t2027[t]
        continue
    body = ['// G41.49 layout-debt def from member_lookup (flat)']
    last_off = 0
    for off in sorted(lay, key=int):
        v = lay[off]
        name = v.get('name') if isinstance(v, dict) else v
        ttype = norm_t(v.get('type') if isinstance(v, dict) else None)
        o = int(off)
        if o > last_off:
            body.append('    unsigned char __pad_%X[%d];  // 0x%X'
                        % (last_off, o - last_off, last_off))
        body.append('    %s %s;  // 0x%X' % (ttype, name, o))
        last_off = o + (v.get('size', 4) if isinstance(v, dict) else 4)
    defs.append('struct %s {\n%s\n};' % (t, '\n'.join(body)))
    stats['def-supplied'] += 1
    stats['errs-covered'] += t2027[t]

print('defs supplied:', stats['def-supplied'],
      ' covering C2027 mentions:', stats['errs-covered'])
for k, v in stats.most_common(8):
    print(' ', v, k)
for x in defs[:2]:
    print(' sample:', x.split('\n')[0], '...')

if not APPLY or not defs:
    print('\n(dry run)' if not APPLY else '\n(nothing to write)')
    sys.exit(0)

lines = open(PROTOS, encoding='utf-8', errors='replace').read().split('\n')
close = max(i for i, ln in enumerate(lines)
            if ln.strip() == '} // namespace gamemd')
block = ['', '// G41.49: full defs for C2027 layout-debt types (member_lookup)'] + defs
lines[close:close] = block
open(PROTOS, 'w', encoding='utf-8', newline='\n').write('\n'.join(lines))
print('appended %d defs into e4_protos.h namespace' % len(defs))
