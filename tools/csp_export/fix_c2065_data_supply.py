# -*- coding: utf-8 -*-
"""G41.46: C2065 data-symbol supply for the e4 face (second bucket).

Missing vtable globals (vt_*) and raw data addresses (dword_/byte_/word_/
stru_) referenced by cache-verbatim bodies but absent from e4_globals.hpp.
House style there: `extern unsigned char vt_X[4];  // data: 0xADDR` /
`extern int dword_A8ED54;  // data: 0xA8ED54`. Addresses missing for
template-vt names are emitted without an annotation (link-time debt is
tracked corpus-wide; compile-zeroing is the current goal).
Dry-run default; --apply appends a guarded block to e4_globals.hpp.
"""
import json, re, os, sys, collections

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
ROOT = os.path.abspath(ROOT)
APPLY = '--apply' in sys.argv
GLOB = os.path.join(ROOT, 'src', 'e4', 'e4_globals.hpp')

CLS = json.load(open(os.path.join(ROOT, '.omo', 'g119_c2065_names.json')))

existing = set()
for ln in open(GLOB, encoding='utf-8', errors='replace'):
    for m in re.finditer(r'\b(vt_[A-Za-z_]\w*|g_[A-Za-z_]\w*|[a-z]+_[0-9A-Fa-f]{6})\b', ln):
        existing.add(m.group(1))

out = []
skipped = collections.Counter()
for name in sorted(CLS, key=lambda n: -CLS[n]['count']):
    r = CLS[name]
    if name in existing:
        skipped['present'] += r['count']
        continue
    m = re.match(r'^(vt_)([A-Za-z_][\w]*)$', name)
    if m:
        out.append('extern unsigned char %s[4];' % name)
        continue
    m = re.match(r'^(dword|word|byte|stru_|unk_|off_)([0-9A-Fa-f]{6})$', name)
    if m:
        pref = m.group(1)
        addr = '0x' + m.group(2).upper()
        if pref == 'dword':
            out.append('extern int %s;  // data: %s' % (name, addr))
        elif pref == 'word':
            out.append('extern unsigned short %s;  // data: %s' % (name, addr))
        elif pref == 'byte':
            out.append('extern unsigned char %s;  // data: %s' % (name, addr))
        else:
            out.append('extern unsigned int %s;  // data: %s' % (name, addr))
        continue
    m = re.match(r'^g_[A-Za-z_]\w*$', name)
    if m:
        out.append('extern int %s;' % name)
        continue
    skipped['not-data-shaped'] += r['count']

print('data symbols to supply:', len(out))
for ln in out[:12]:
    print(' ', ln)
for k, v in skipped.most_common():
    print(' ', v, k)

if not APPLY:
    print('\n(dry run; no files written)')
    sys.exit(0)

txt = open(GLOB, encoding='utf-8', errors='replace').read()
if 'G41.46 C2065 data supply' not in txt:
    block = ['', '// G41.46 C2065 data supply: vtable/raw-data globals the',
             '// cache-typed bodies reference but the globals generator missed.']
    block += out
    open(GLOB, 'a', encoding='utf-8', newline='\n').write(
        '\n'.join(block) + '\n')
    print('appended %d symbols' % len(out))
else:
    print('supply block already present')
