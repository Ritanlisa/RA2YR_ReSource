"""mm_validate_plan.py — Simulate hpp plan in-memory, recompute audit name-mismatch for the 199 targets."""
import json, sys, re
from pathlib import Path
sys.path.insert(0, 'tools')
import audit_consistency as ac

ROOT = Path('.')
plan = json.load(open('.omo/hpp_plan.json', encoding='utf-8'))
table = json.load(open('.omo/resolve_table.json', encoding='utf-8'))

# special json/cached overrides we WILL also apply (so simulate them)
SPECIAL_JSON = {
    '0X00718000': 'TeleportLocomotionClass::TeleportLocomotionClass',
    '0X004F9A50': 'HouseClass::IsAlliedWith',
}
SPECIAL_IDA = {  # cached ida_db name override
    '0X00718000': 'TeleportLocomotionClass::TeleportLocomotionClass',  # already this
    '0X004F9A50': 'HouseClass::IsAlliedWith',
    '0X004151E0': 'UnitClass::Mission_Harvest',  # stale cache (was AircraftClass::Mission_Unload)
}

# Build in-memory edited file contents
filecache = {}
def getlines(rel):
    if rel not in filecache:
        p = ROOT / rel.replace('\\', '/')
        filecache[rel] = open(p, encoding='utf-8', errors='replace').read().splitlines(keepends=True)
    return filecache[rel]

# apply strips in memory
import copy
edited = {}
dels = {}
for rec in plan:
    if rec['action'] != 'STRIP':
        continue
    rel, ln = rec['file'], rec['line']
    lines = getlines(rel)
    line = lines[ln-1]
    m = re.search(r'\s*//\s*(?:IDA\s+)?(?:area\s+)?0x[0-9A-Fa-f]{5,8}.*$', line.rstrip('\n'))
    if not m:
        continue
    prefix = line[:m.start()].rstrip()
    nl = '\n' if line.endswith('\n') else ''
    if prefix.strip() == '':
        dels.setdefault(rel, set()).add(ln)
    else:
        edited.setdefault(rel, {})[ln] = prefix + nl

# produce edited line-lists
def edited_lines(rel):
    lines = getlines(rel)
    d = dels.get(rel, set()); e = edited.get(rel, {})
    out = []
    for i, ln in enumerate(lines, 1):
        if i in d:
            continue
        out.append(e.get(i, ln))
    return out

# Re-run audit's hpp extraction but over edited content.
# Monkeypatch: temporarily write edited files? No. Reimplement extract over edited lines for all hpp.
# Simplest: gather all hpp files, build {addr: name} using audit regexes over EDITED content for files we touched,
# and ORIGINAL for the rest.
addr_pattern = re.compile(r'//\s*(?:IDA\s+)?(0x[0-9A-Fa-f]{5,8})')
func_pattern = re.compile(r'(\w[\w:]*(?:<[^>]*>)?)\s*\([^)]*\)\s*(?:const\s*)?\s*;\s*//\s*0x')
comment_paren = re.compile(r"//\s*(?:IDA\s+)?0x[0-9A-Fa-f]{5,8}\s*\((\w[\w:]*(?:<[^>]*>)?)\)")
comment_dash = re.compile(r"//\s*(?:IDA\s+)?(?:0x[0-9A-Fa-f]{5,8}\s*--\s+)(\w[\w:]*(?:<[^>]*>)?)")

def build_hpp_map():
    result = {}
    touched = set(list(edited.keys()) + list(dels.keys()))
    for d in ['src', 'include/gamemd']:
        dp = ROOT / d
        if not dp.exists():
            continue
        for hpp in dp.rglob('*.hpp'):
            rel = str(hpp.relative_to(ROOT))
            rel_alt = rel  # match plan's stored sep
            # plan stores posix-ish? our getlines used rel as given in resolve_table (backslash). Normalize both.
            key_variants = {rel, rel.replace('\\','/'), rel.replace('/','\\')}
            use_edit = any(k in touched for k in key_variants)
            if use_edit:
                # find the touched key
                tk = next(k for k in key_variants if k in touched)
                lines = edited_lines(tk)
            else:
                lines = open(hpp, encoding='utf-8', errors='replace').readlines()
            for lineno, line in enumerate(lines, 1):
                m = addr_pattern.search(line)
                if not m:
                    continue
                addr = ac.normalize_addr(m.group(1))
                name = None
                fm = func_pattern.search(line)
                if fm: name = fm.group(1)
                cm = comment_paren.search(line)
                if cm and ':' in cm.group(1): name = cm.group(1)
                if not name or ':' not in str(name):
                    cm2 = comment_dash.search(line)
                    if cm2 and ':' in cm2.group(1): name = cm2.group(1)
                if (not name or ':' not in str(name)) and lineno > 1:
                    cmp = comment_dash.search(lines[lineno-2])
                    if cmp and ':' in cmp.group(1): name = cmp.group(1)
                if name and '::' not in name:
                    cls = ac._find_enclosing_class(lines, lineno-1)
                    if cls: name = f'{cls}::{name}'
                if addr not in result:
                    result[addr] = {'name': name}
                if name:
                    stored = result[addr].get('name')
                    if not stored or (':' in name and ':' not in (stored or '')):
                        result[addr]['name'] = name
    return result

new_hpp = build_hpp_map()

# now simulate audit for our 199 with new hpp + special json/ida overrides
residual = []
for r in table:
    addr = r['addr']
    j = SPECIAL_JSON.get(addr, r['json'])
    i = SPECIAL_IDA.get(addr, r['ida'])
    h = (new_hpp.get(addr) or {}).get('name')
    names = {}
    if j: names['json'] = ac.normalize_name(j)
    if i: names['ida'] = ac.normalize_name(i)
    if h: names['hpp'] = ac.normalize_name(h)
    if len(names) < 2:
        continue
    # bidirectional pairwise
    items = list(names.items())
    alleq = True
    for x in range(len(items)):
        for y in range(x+1, len(items)):
            _,_,eq,_ = ac.normalize_name_bidirectional(items[x][1], items[y][1])
            if not eq:
                alleq = False
    if not alleq:
        residual.append({'addr': addr, 'json': j, 'ida': i, 'hpp': h})

print('Simulated residual mismatches among 199 targets:', len(residual))
for r in residual:
    print('  ', r['addr'], '| ida=', r['ida'], '| json=', r['json'], '| hpp=', r['hpp'])
json.dump(residual, open('.omo/sim_residual.json','w',encoding='utf-8'), indent=1)
