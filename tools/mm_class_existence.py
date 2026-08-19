import json, sys, re, os
from pathlib import Path
sys.path.insert(0, 'tools')

t = json.load(open('.omo/resolve_table.json', encoding='utf-8'))

# collect all distinct class names from ida/json/hpp/live
classes = set()
def cof(n):
    return n.split('::')[0] if (n and '::' in n) else None
for r in t:
    for k in ('ida', 'json', 'hpp', 'live'):
        c = cof(r.get(k))
        if c:
            classes.add(c.strip())

# scan project headers for class/struct declarations
ROOT = Path('.')
decl = {}  # classname -> [file:line]
pat = re.compile(r'^\s*(?:class|struct)\s+([A-Za-z_]\w*)\b')
for d in ['src', 'include/gamemd']:
    dp = ROOT / d
    if not dp.exists():
        continue
    for hpp in dp.rglob('*.hpp'):
        try:
            lines = open(hpp, encoding='utf-8', errors='replace').readlines()
        except Exception:
            continue
        for i, ln in enumerate(lines, 1):
            m = pat.match(ln)
            if m:
                cn = m.group(1)
                decl.setdefault(cn, []).append(f'{hpp.as_posix()}:{i}')

exist = {}
for c in sorted(classes):
    exist[c] = decl.get(c, [])

json.dump(exist, open('.omo/class_existence.json', 'w', encoding='utf-8'), indent=1)
print('Distinct classes involved:', len(classes))
print()
print('=== CLASS EXISTENCE (involved classes) ===')
for c in sorted(classes):
    loc = exist[c]
    mark = 'OK ' if loc else 'NO '
    print(f'  {mark}{c:35s} {loc[0] if loc else ""}{"  (+%d more)"%(len(loc)-1) if len(loc)>1 else ""}')
