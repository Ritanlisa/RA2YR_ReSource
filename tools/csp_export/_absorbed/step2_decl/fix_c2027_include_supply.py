# -*- coding: utf-8 -*-
"""G41.46: C2027 include-closure supply -- TUs using members of classes
whose full e4 definition exists but is not included by that TU.

For every C2027 "use of undefined type X" error site: if some
e4/classes/X_e4.hpp fully defines X and the error TU does not include it,
insert the include. Types defined only in _tree_full_e4.hpp are skipped
(all e4 TUs already include the tree; a residual C2027 there means the
tree itself only forward-declares them).

Dry-run default; --apply writes.
"""
import json, re, os, sys, collections

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))))
ROOT = os.path.abspath(ROOT)
APPLY = '--apply' in sys.argv
CENSUS = sys.argv[1] if len(sys.argv) > 1 and not sys.argv[1].startswith('--') \
    else os.path.join(ROOT, '.omo', 'tu_errors.json')

# full-definition index: cls -> own file (dedicated X_e4.hpp preferred)
cls_def = {}
for fn in os.listdir(os.path.join(ROOT, 'src', 'e4', 'classes')):
    if not fn.endswith('.hpp') or fn.startswith('_'):
        continue
    path = os.path.join(ROOT, 'src', 'e4', 'classes', fn)
    lines = open(path, encoding='utf-8', errors='replace').read().split('\n')
    depth = 0
    head = None
    for i, ln in enumerate(lines):
        cm = re.match(r'\s*(?:class|struct)\s+([A-Za-z_]\w*)[^;]*$', ln)
        if cm and head is None:
            head = (cm.group(1), i, depth + ln.count('{') - ln.count('}'))
        depth += ln.count('{') - ln.count('}')
        if head and i > head[1] and depth < head[2]:
            if i - head[1] >= 4:
                cls_def.setdefault(head[0], fn)
            head = None

census = json.load(open(CENSUS, encoding='utf-8'))
type_tus = collections.defaultdict(set)
mentions = collections.Counter()
for tu, el in census.items():
    for e in el:
        if 'error C2027' not in e:
            continue
        m = re.search(r'“(?:gamemd::)?([A-Za-z_]\w*(?:<[^>]*>)?)”', e)
        sm = re.match(r'^(.+?)\((\d+)\):', e)
        if not m or not sm:
            continue
        t = re.sub(r'<.*', '', m.group(1))
        p = sm.group(1)
        if not os.path.isabs(p):
            p = os.path.join(ROOT, p)
        type_tus[t].add(p)
        mentions[t] += 1

stats = collections.Counter()
edits = {}   # tu -> {include: True}

for t, tus in sorted(type_tus.items(), key=lambda kv: -mentions[kv[0]]):
    fn = cls_def.get(t)
    if not fn:
        stats['no-full-def'] += mentions[t]
        continue
    inc = 'e4/classes/%s' % fn
    for tu in tus:
        # G42.5: e4-universe TUs only -- core/mixed TUs already carry core
        # definitions; injecting an e4 flat class there is the load_options
        # C2011 incident pattern
        if '/e4/' not in tu.replace('\\', '/'):
            stats['skip-non-e4-tu'] += 1
            continue
        try:
            lines = open(tu, encoding='utf-8', errors='replace').read().split('\n')
        except OSError:
            stats['tu-read-fail'] += 1
            continue
        if any(inc in ln for ln in lines[:80]):
            stats['already-included'] += 1
            continue
        last_inc = max((i for i, ln in enumerate(lines[:80])
                        if ln.startswith('#include')), default=None)
        if last_inc is None:
            stats['tu-no-includes'] += 1
            continue
        edits.setdefault(tu, {})[inc] = last_inc + 1
        stats['include-planned'] += 1
    stats['types-covered'] += 1

print('types with full def:', stats['types-covered'],
      ' includes planned:', stats['include-planned'],
      ' distinct TUs:', len(edits))
for k, v in stats.most_common(10):
    print(' ', v, k)

if not APPLY:
    print('\n(dry run; no files written)')
    sys.exit(0)

for tu, incs in edits.items():
    lines = open(tu, encoding='utf-8', errors='replace').read().split('\n')
    for inc, idx in sorted(incs.items(), key=lambda kv: -kv[1]):
        lines.insert(idx, '#include "%s"' % inc)
    open(tu, 'w', encoding='utf-8', newline='\n').write('\n'.join(lines))
print('TUs written:', len(edits))
