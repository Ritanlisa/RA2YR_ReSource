"""Remove duplicate function definitions from *_bodies.cpp when the same
Class::Method definition already exists in the sibling original .cpp."""
import re

DEF_HEAD = re.compile(r'^\s*[\w:<>\*&\[\]]+(?:\s+[\w:<>\*&\[\]]+)*\s+([\w:~]+)::([\w~]+)\s*\(')

def func_defs(path):
    lines = open(path, encoding='latin-1').read().split('\n')
    defs = {}
    i = 0
    while i < len(lines):
        m = DEF_HEAD.match(lines[i])
        if not m or lines[i].rstrip().endswith(';'):
            i += 1
            continue
        # find body open within next few lines
        k = i
        while k < len(lines) and '{' not in lines[k].split('//')[0]:
            if lines[k].rstrip().endswith(';'):
                break
            k += 1
        if k >= len(lines) or '{' not in lines[k].split('//')[0]:
            i += 1
            continue
        depth = 0
        started = False
        e = k
        while e < len(lines):
            code = lines[e].split('//')[0]
            depth += code.count('{') - code.count('}')
            if '{' in code:
                started = True
            if started and depth <= 0:
                break
            e += 1
        key = m.group(1) + '::' + m.group(2)
        defs.setdefault(key, (i, e))
        i = e + 1
    return lines, defs

pairs = [
    ('src/misc/misc_ext_bodies.cpp', 'src/misc/misc_ext.cpp'),
    ('src/render/display_bodies.cpp', 'src/render/display.cpp'),
    ('src/system/map_bodies.cpp', 'src/system/map.cpp'),
    ('src/entity/voxel_anim_bodies.cpp', 'src/entity/voxel_anim.cpp'),
]

for bodies, orig in pairs:
    blines, bdefs = func_defs(bodies)
    olines, odefs = func_defs(orig)
    dup_keys = [k for k in bdefs if k in odefs]
    for key in sorted(dup_keys, key=lambda k: -bdefs[k][0]):
        s, e = bdefs[key]
        end = e + 1
        if end < len(blines) and blines[end].strip() == '':
            end += 1
        del blines[s:end]
    if dup_keys:
        open(bodies, 'w', encoding='latin-1', newline='').write('\n'.join(blines))
    print(f"{bodies}: {len(bdefs)} defs, removed {len(dup_keys)} dups")
