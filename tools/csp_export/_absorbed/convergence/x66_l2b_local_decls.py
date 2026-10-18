#!/usr/bin/env python3
"""X66 L2-B — cache-local decl re-insertion (evidence = x40 cache decl block).
Only identifiers whose tree function has NO decl line and whose cache type is
trivially resolvable (normalized IDA spelling) are inserted at the top of the
function's decl area (first non-blank line after '{'). Everything else banks.

Usage: python x66_l2b_local_decls.py           # dry run
       python x66_l2b_local_decls.py --apply
"""
import re, os, json, sys
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, '..', '..', '..', '..'))
ROWS = os.path.join(ROOT, '.omo', 'evidence', 'optimization', 'x66', 'x66_l2_cache_map.json')
APPLY = '--apply' in sys.argv

TY_NORM = {
    '_DWORD': 'unsigned int', '_WORD': 'unsigned short', '_BYTE': 'unsigned char',
    '__int16': 'short', '__int32': 'int', 'unsigned __int16': 'unsigned short',
    'unsigned __int8': 'unsigned char', 'BOOL': 'int',
}
RESOLVABLE = set(TY_NORM) | {
    'int', 'unsigned int', 'unsigned short', 'unsigned char', 'char', 'short',
    'bool', 'unsigned __int32', 'float', 'double',
}

rows = json.load(open(ROWS, encoding='utf-8'))
cl = [r for r in rows if r['kind'] == 'cache-local']
print('cache-local sites:', len(cl))

_fc = {}
def flines(f):
    if f not in _fc:
        _fc[f] = open(os.path.join(ROOT, f), encoding='utf-8', errors='replace').read().split('\n')
    return _fc[f]

def fn_block(f, lineno):
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
    depth, opened = 0, False
    for j in range(head, len(lines)):
        body = re.sub(r'//.*$', '', re.sub(r'/\*.*?\*/', '', lines[j]))
        depth += body.count('{') - body.count('}')
        if '{' in body:
            opened = True
        if opened and depth <= 0:
            return (head, j)
    return (head, len(lines) - 1)

def has_decl(lines, head, end, name):
    for i in range(head, end + 1):
        code = re.sub(r'/\*.*?\*/', '', re.sub(r'//.*$', '', lines[i]))
        if re.search(r'\b%s\b' % re.escape(name), code) and re.search(r';', code) \
                and not re.search(r'\b%s\s*(\[|;)?\s*=' % re.escape(name), code.split('=')[0] if '=' in code else code):
            # decl-ish: name appears in a statement that is not an assignment target on its own
            if re.search(r'(?:int|char|short|long|unsigned|float|double|bool|void|\*)\s*[^;]*\b%s\b' % re.escape(name), code):
                return True
    return False

def insert_pos(lines, head):
    """first line after the opening '{' (the decl area starts there)."""
    for j in range(head, min(head + 8, len(lines))):
        if lines[j].strip().startswith('{'):
            return j + 1
    return head + 1

stats = Counter()
ledger = []
plan = {}
for r in cl:
    f, l, n, ty = r['f'], r['l'], r['n'], (r.get('decl_ty') or '').strip()
    star = base = ty.split('[')[0].strip()
    ptr = star.endswith('*')
    base = star.rstrip('*').strip()
    if base not in RESOLVABLE:
        stats['bank-type:%s' % (base.split()[0][:20])] += 1
        continue
    blk = fn_block(f, l)
    if not blk:
        stats['no-block'] += 1
        continue
    head, end = blk
    lines = flines(f)
    if has_decl(lines, head, end, n):
        stats['decl-exists'] += 1
        continue
    am = re.search(r'\[(\d*)\]', ty)
    decl = '%s%s %s%s;' % (TY_NORM.get(base, base), ' *' if ptr else '', n,
                           ('[%s]' % am.group(1)) if am and am.group(1) else '')
    ins = insert_pos(lines, head)
    plan.setdefault(f, []).append((ins, decl, l, n))

for f, items in sorted(plan.items()):
    lines = flines(f)
    # insert from bottom up to keep positions valid
    for ins, decl, errl, n in sorted(items, reverse=True):
        indent = '  '
        lines.insert(ins, indent + decl + '  // X66 L2-B: restored from ida x40 cache')
        ledger.append({'file': f, 'line': ins + 1, 'decl': decl, 'err_line': errl, 'name': n})
        stats['inserted'] += 1

print('inserted:', stats['inserted'], '| decl-exists:', stats['decl-exists'])
banks = {k: v for k, v in stats.items() if k.startswith('bank-type')}
print('banked by type:', sorted(banks.items(), key=lambda x: -x[1])[:10])
for e in ledger[:10]:
    print('  %s: insert@%d %s  (err line %s)' % (e['file'], e['line'], e['decl'], e['err_line']))

json.dump({'ledger': ledger, 'stats': dict(stats)},
          open(os.path.join(HERE, 'x66_l2b_ledger.json'), 'w'), indent=1)

if APPLY:
    for f in plan:
        open(os.path.join(ROOT, f), 'w', encoding='utf-8', errors='replace', newline='').write(
            '\n'.join(flines(f)))
    print('APPLIED: %d files' % len(plan))
else:
    print('DRY RUN (use --apply)')
