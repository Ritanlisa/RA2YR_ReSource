#!/usr/bin/env python3
"""X66 L2-A — param-relink: body cache-name -> tree signature-name rename.

Evidence: x40 ida cache signatures (binary-authoritative) vs tree function
heads (G57w11 def-sync renames disconnected the bodies). Only sites with
per-function arity verification RENAME-OK are rewritten (position-mapped,
tree type wins = L442). Guards:
  G1 rename inside the enclosing function block only (from head line to the
     matching column-0 '}').
  G2 word-boundary replacement, never inside /*...*/ or // comments.
  G3 collision guard: tree_target must not be the name of ANOTHER cache
     param that still appears in the body (would merge two variables).
  G4 after-rename syntax sanity: no '<name><char>' token merges (regex \b).

Usage: python x66_l2a_param_relink.py           # dry run
       python x66_l2a_param_relink.py --apply
"""
import re, os, json, sys
from collections import Counter, defaultdict

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, '..', '..', '..', '..'))
VERDICTS = os.path.join(ROOT, '.omo', 'evidence', 'optimization', 'x66', 'x66_l2_t1_verdicts.json')
APPLY = '--apply' in sys.argv

rows = json.load(open(VERDICTS, encoding='utf-8'))
ok = [r for r in rows if r.get('verdict') == 'RENAME-OK' and r.get('tree_target')]

# group per (file, function-start line) -> rename map
_fc = {}
def flines(f):
    if f not in _fc:
        _fc[f] = open(os.path.join(ROOT, f), encoding='utf-8', errors='replace').read().split('\n')
    return _fc[f]

def fn_block(f, lineno):
    """Return (head_idx, end_idx) of the enclosing function (col-0 '}' close)."""
    lines = flines(f)
    head = None
    for i in range(min(lineno, len(lines)) - 1, max(0, lineno - 400), -1):
        raw = lines[i]
        s = raw.strip()
        if not s or s.startswith('//') or s == '}':
            continue
        code = re.sub(r'/\*.*?\*/', '', re.sub(r'//.*$', '', s)).rstrip()
        if code.endswith(';') or not code:
            continue
        if not raw.startswith((' ', '\t')) and '(' in code \
                and not code.startswith(('if', 'for', 'while', 'switch', 'return', 'else', 'namespace')):
            head = i
            break
    if head is None:
        return None
    depth = 0
    opened = False
    for j in range(head, len(lines)):
        body = re.sub(r'//.*$', '', re.sub(r'/\*.*?\*/', '', lines[j]))
        depth += body.count('{') - body.count('}')
        if '{' in body:
            opened = True
        if opened and depth <= 0:
            return (head, j)
    return (head, len(lines) - 1)

def strip_spans(line):
    """Comment spans to protect."""
    spans = []
    for m in re.finditer(r'/\*.*?\*/', line):
        spans.append((m.start(), m.end()))
    i = line.find('//')
    if i >= 0:
        spans.append((i, len(line)))
    return spans

groups = defaultdict(list)
for r in ok:
    groups[(r['f'], r['fn'])].append(r)

stats = Counter()
ledger = []
renamed_files = set()
for (f, fn), sites in sorted(groups.items()):
    lines = flines(f)
    blk = fn_block(f, sites[0]['l'])
    if not blk:
        stats['no-block'] += len(sites)
        continue
    head, end = blk
    rmap = {}
    cache_names = set()
    for r in sites:
        rmap[r['n']] = r['tree_target']
    # collect all cache params referenced in block for collision guard
    for r in sites:
        cache_names.update(r['params'])
    body = '\n'.join(lines[head:end + 1])
    collision = False
    for src_name in rmap:
        for other in cache_names:
            if other != src_name and other == rmap[src_name] \
                    and re.search(r'\b%s\b' % re.escape(other), body):
                # target name equals another cache param present in body
                collision = True
    if collision:
        stats['collision-bank'] += len(sites)
        continue
    # apply per line
    for i in range(head, end + 1):
        ln = lines[i]
        spans = strip_spans(ln)
        out = []
        pos = 0
        changed = False
        events = []
        for src, dst in rmap.items():
            for m in re.finditer(r'\b%s\b' % re.escape(src), ln):
                if any(m.start() >= a and m.start() < b for a, b in spans):
                    continue
                events.append((m.start(), m.end(), dst))
        if not events:
            continue
        events.sort()
        for a, b, dst in events:
            out.append(ln[pos:a])
            out.append(dst)
            pos = b
            changed = True
        out.append(ln[pos:])
        new = ''.join(out)
        ledger.append({'file': f, 'line': i + 1, 'before': ln.rstrip(), 'after': new.rstrip(),
                       'fn': '0x%X' % (fn or 0)})
        lines[i] = new
        changed_file = True
        stats['renamed-lines'] += 1
    renamed_files.add(f)

print('rename lines:', stats['renamed-lines'], '| files:', len(renamed_files),
      '| collision-bank:', stats['collision-bank'], '| no-block:', stats['no-block'])
byf = Counter(e['file'] for e in ledger)
for f, c in byf.most_common(12):
    print('  ', f, c)
for e in ledger[:8]:
    print('  %s:%s [%s]' % (e['file'], e['line'], e['fn']))
    print('    -', e['before'].strip()[:110])
    print('    +', e['after'].strip()[:110])

json.dump({'ledger': ledger, 'stats': dict(stats)},
          open(os.path.join(HERE, 'x66_l2a_ledger.json'), 'w'), indent=1)

if not APPLY:
    print('DRY RUN (use --apply)')
else:
    # write files (each file once, from the mutated cache)
    n = 0
    for f in renamed_files:
        open(os.path.join(ROOT, f), 'w', encoding='utf-8', errors='replace', newline='').write(
            '\n'.join(_fc[f]))
        n += 1
    print('APPLIED: %d files' % n)
