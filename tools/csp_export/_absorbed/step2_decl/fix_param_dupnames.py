"""G42.30g: rename non-adjacent duplicate param names inside one list."""
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
n = 0
for p in (ROOT / 'src').rglob('*_e4.hpp'):
    txt = p.read_text(encoding='utf-8', errors='replace')
    out = []
    changed = False
    for ln in txt.split('\n'):
        m = re.match(r'^(\s*.*?\b\w+\s*\()([^()]*(?:\([^()]*\)[^()]*)*)(\).*)$', ln)
        if not m or ln.count('(') < 1 or ';' not in ln:
            out.append(ln)
            continue
        params = m.group(2)
        # split top level
        parts, d, cur = [], 0, ''
        for ch in params:
            if ch in '([':
                d += 1
            elif ch in ')]':
                d -= 1
            if ch == ',' and d == 0:
                parts.append(cur)
                cur = ''
            else:
                cur += ch
        parts.append(cur)
        seen = {}
        new_parts = []
        touched = False
        for part in parts:
            nm = re.search(r'\b([A-Za-z_]\w*)\s*$', part)
            if nm and nm.group(1) in seen:
                cnt = seen[nm.group(1)] + 1
                seen[nm.group(1)] = cnt
                part2 = part[:nm.start()] + '%s_%d' % (nm.group(1), cnt)
                touched = True
                new_parts.append(part2)
            else:
                if nm:
                    seen[nm.group(1)] = 1
                new_parts.append(part)
        if touched:
            ln = m.group(1) + ','.join(new_parts) + m.group(3)
            n += 1
            changed = True
        out.append(ln)
    if changed:
        p.write_text('\n'.join(out), encoding='utf-8')
print('param-lists dedup-renamed:', n)
