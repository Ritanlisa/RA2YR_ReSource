"""mm_hpp_planner.py — Plan/apply hpp `// 0xADDR` annotation strips to resolve name mismatches.

For each mismatch address with resolution R:
  - For each annotated (file,line), compute the name THAT LINE contributes (audit logic).
  - KEEP the annotation if normalized(line_name) == normalized(R); else STRIP `// 0xADDR`.

Modes: --dry-run (default, writes plan json) | --apply
"""
import json, sys, re
from pathlib import Path
sys.path.insert(0, 'tools')
import audit_consistency as ac

ROOT = Path('.')

# Resolution overrides where json name is itself wrong (decompile-determined)
R_OVERRIDE = {
    '0X00718000': 'TeleportLocomotionClass::TeleportLocomotionClass',  # ctor (json=Release wrong)
    '0X004F9A50': 'HouseClass::IsAlliedWith',                          # House not a project class
}

ADDR_RE = re.compile(r'(//\s*(?:IDA\s+)?(?:area\s+)?0x[0-9A-Fa-f]{5,8}[^\n]*)')

def norm_cmp(n):
    """Normalize a single name for equality test (mirror audit bidirectional, self-paired)."""
    if not n:
        return ''
    c = ac.normalize_name_core(n)
    c = c.replace('~', '')
    c = ac._normalize_to_constructor(c)
    c = ac._flatten_for_compare(c)
    c = re.sub(r'(^|_)Construct(_|$)', r'\1Constructor\2', c)
    return c.lower()

def line_contributes_name(lines, lineno1):
    """Replicate audit's per-line name derivation for the annotation on this line."""
    line = lines[lineno1 - 1]
    name = None
    fm = ac.func_pattern.search(line) if hasattr(ac, 'func_pattern') else None
    # ac module compiles these inside extract_hpp_annotations; re-create here
    func_pattern = re.compile(r'(\w[\w:]*(?:<[^>]*>)?)\s*\([^)]*\)\s*(?:const\s*)?\s*;\s*//\s*0x')
    comment_paren = re.compile(r"//\s*(?:IDA\s+)?0x[0-9A-Fa-f]{5,8}\s*\((\w[\w:]*(?:<[^>]*>)?)\)")
    comment_dash = re.compile(r"//\s*(?:IDA\s+)?(?:0x[0-9A-Fa-f]{5,8}\s*--\s+)(\w[\w:]*(?:<[^>]*>)?)")
    fm = func_pattern.search(line)
    if fm:
        name = fm.group(1)
    cm = comment_paren.search(line)
    if cm and ':' in cm.group(1):
        name = cm.group(1)
    if not name or ':' not in str(name):
        cm2 = comment_dash.search(line)
        if cm2 and ':' in cm2.group(1):
            name = cm2.group(1)
    if (not name or ':' not in str(name)) and lineno1 > 1:
        cmp = comment_dash.search(lines[lineno1 - 2])
        if cmp and ':' in cmp.group(1):
            name = cmp.group(1)
    if name and '::' not in name:
        cls = ac._find_enclosing_class(lines, lineno1 - 1)
        if cls:
            name = f'{cls}::{name}'
    return name

def strip_annotation(line):
    """Remove the trailing `// 0xADDR...` annotation from a line; clean up if line becomes empty comment."""
    # Find the // ...0x.... annotation
    m = re.search(r'\s*//\s*(?:IDA\s+)?(?:area\s+)?0x[0-9A-Fa-f]{5,8}.*$', line.rstrip('\n'))
    if not m:
        return line, False
    prefix = line[:m.start()].rstrip()
    nl = '\n' if line.endswith('\n') else ''
    if prefix.strip() == '':
        # whole line was just the annotation comment -> drop the line entirely (mark for deletion)
        return None, True
    return prefix + nl, True

def main():
    apply = '--apply' in sys.argv
    only_addrs = None
    for a in sys.argv:
        if a.startswith('--addrs='):
            only_addrs = set(x.strip().upper() for x in a.split('=', 1)[1].split(','))

    t = json.load(open('.omo/resolve_table.json', encoding='utf-8'))
    # cache file contents
    filecache = {}
    def getlines(rel):
        if rel not in filecache:
            p = ROOT / rel.replace('\\', '/')
            filecache[rel] = open(p, encoding='utf-8', errors='replace').read().splitlines(keepends=True)
        return filecache[rel]

    plan = []  # {addr, R, file, line, action, kept_name, raw}
    deletions = {}  # file -> set of line numbers to fully delete
    edits = {}      # file -> {line: newcontent}

    for r in t:
        addr = r['addr']
        if only_addrs and addr not in only_addrs:
            continue
        R = R_OVERRIDE.get(addr, r['json'])
        Rn = norm_cmp(R)
        for floc in r['files']:
            rel, ln = floc.rsplit(':', 1)
            ln = int(ln)
            lines = getlines(rel)
            if ln > len(lines):
                continue
            contrib = line_contributes_name(lines, ln)
            keep = (contrib is not None and norm_cmp(contrib) == Rn)
            rec = {'addr': addr, 'R': R, 'file': rel, 'line': ln,
                   'contrib': contrib, 'action': 'KEEP' if keep else 'STRIP',
                   'raw': lines[ln - 1].rstrip('\n')}
            plan.append(rec)
            if not keep:
                new, ok = strip_annotation(lines[ln - 1])
                if ok:
                    if new is None:
                        deletions.setdefault(rel, set()).add(ln)
                    else:
                        edits.setdefault(rel, {})[ln] = new

    # report
    from collections import Counter
    acts = Counter(p['action'] for p in plan)
    addrs_with_keep = set(p['addr'] for p in plan if p['action'] == 'KEEP')
    addrs_all = set(p['addr'] for p in plan)
    addrs_no_keep = addrs_all - addrs_with_keep
    json.dump(plan, open('.omo/hpp_plan.json', 'w', encoding='utf-8'), indent=1)
    print('Plan entries:', len(plan), dict(acts))
    print('Addrs with a KEEP (R-matching decl):', len(addrs_with_keep))
    print('Addrs with NO KEEP (all stripped, resolved via json/cached):', len(addrs_no_keep))
    print('Files to edit:', len(set(list(edits.keys()) + list(deletions.keys()))))

    if apply:
        for rel in set(list(edits.keys()) + list(deletions.keys())):
            lines = getlines(rel)
            dels = deletions.get(rel, set())
            eds = edits.get(rel, {})
            out = []
            for i, ln in enumerate(lines, 1):
                if i in dels:
                    continue
                if i in eds:
                    out.append(eds[i])
                else:
                    out.append(ln)
            p = ROOT / rel.replace('\\', '/')
            open(p, 'w', encoding='utf-8', newline='').write(''.join(out))
        print('APPLIED edits to', len(set(list(edits.keys()) + list(deletions.keys()))), 'files')

if __name__ == '__main__':
    main()
