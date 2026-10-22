#!/usr/bin/env python3
"""X112 W3: verify carrier geometry against the rebuilt sidecar.

For every sidecar class that has a carrier struct:
  * parse `type name;  // 0xOFF` lines in the struct body;
  * check the spans tile [0, computed_size) with no overlap;
  * check every sidecar member exists at its offset with the right name.
Writes .omo/x112_scratch/layout_verify.json and prints a summary.
"""
import json, re, sys
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
SIDE = json.load(open(ROOT / 'anchors/class_layouts_rebuilt.json', encoding='utf-8'))
STRUCT = re.compile(r'\bstruct\s+(\w+)\s*\{')
MEMBER = re.compile(r'^\s*([A-Za-z_][\w:<>,\* ]*?)\s+([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;\s*//\s*0x([0-9A-Fa-f]+)')
TYPE_W = {'char': 1, 'unsigned char': 1, 'signed char': 1, 'bool': 1,
          'short': 2, 'unsigned short': 2, 'int': 4, 'unsigned int': 4,
          'long': 4, 'unsigned long': 4, 'long long': 8,
          'unsigned long long': 8, 'void': 4, 'float': 4, 'double': 8}

def type_size(ty, arr):
    base = ' '.join(ty.replace('*', ' * ').split())
    if '*' in base:
        return 4
    w = TYPE_W.get(base)
    if w is None:
        return 0
    if arr:
        m = re.match(r'\[(\d+)\]', arr)
        if m:
            return w * int(m.group(1))
    return w

def parse_struct(path, cls):
    txt = path.read_text(encoding='utf-8', errors='replace')
    m = re.search(r'\bstruct\s+' + re.escape(cls) + r'\s*\{', txt)
    if not m:
        return None
    depth, i, start = 1, m.end(), m.end()
    while i < len(txt) and depth:
        if txt[i] == '{':
            depth += 1
        elif txt[i] == '}':
            depth -= 1
        i += 1
    body = txt[start:i - 1]
    mem = []
    for line in body.split('\n'):
        mm = MEMBER.match(line)
        if mm:
            mem.append({'ty': mm.group(1).strip(), 'name': mm.group(2),
                        'arr': mm.group(3) or '', 'off': int(mm.group(4), 16)})
    return {'path': str(path.relative_to(ROOT)), 'members': mem, 'body': body}

def main():
    files = {}
    for p in list((ROOT / 'src/e4/classes').glob('*_e4.hpp')) + [ROOT / 'src/e4/classes/_tree_full_e4.hpp',
                    ROOT / 'src/_gap2/gap2_global_decls.hpp']:
        if p.exists():
            files[p] = p.read_text(encoding='utf-8', errors='replace')
    report = {'classes': {}, 'summary': {}}
    ok = bad = missing = 0
    for cls, e in SIDE['classes'].items():
        st = None
        for p, txt in files.items():
            if re.search(r'\bstruct\s+' + re.escape(cls) + r'\s*\{', txt):
                st = parse_struct(p, cls)
                break
        if not st:
            missing += 1
            report['classes'][cls] = {'status': 'no_carrier'}
            continue
        size = int(e['computed_size'])
        spans = []
        problems = []
        for m in st['members']:
            w = type_size(m['ty'], m['arr'])
            if not w:
                problems.append('unknown_type %s %s' % (m['ty'], m['name']))
                continue
            spans.append((m['off'], m['off'] + w, m['name']))
        spans.sort()
        cur = 0
        for a, b, nm in spans:
            if a < cur:
                problems.append('overlap at 0x%X (%s)' % (a, nm))
            elif a > cur:
                problems.append('gap 0x%X..0x%X before %s' % (cur, a, nm))
            cur = max(cur, b)
        if cur != size:
            problems.append('end 0x%X != size 0x%X' % (cur, size))
        # sidecar member presence
        by_off = {m['off']: m['name'] for m in st['members']}
        for m in e['members']:
            if by_off.get(m['off']) != m['name']:
                problems.append('member 0x%X expected %s got %s' %
                                (m['off'], m['name'], by_off.get(m['off'])))
        if problems:
            bad += 1
            report['classes'][cls] = {'status': 'FAIL', 'problems': problems[:20],
                                       'path': st['path']}
        else:
            ok += 1
            report['classes'][cls] = {'status': 'OK', 'size': size, 'path': st['path']}
    report['summary'] = {'ok': ok, 'fail': bad, 'no_carrier': missing,
                         'total': len(SIDE['classes'])}
    dst = ROOT / '.omo/x112_scratch/layout_verify.json'
    dst.write_text(json.dumps(report, indent=1), encoding='utf-8')
    print('layout verify: OK=%d FAIL=%d NO_CARRIER=%d total=%d' % (ok, bad, missing, len(SIDE['classes'])))
    for cls, r in report['classes'].items():
        if r['status'] == 'FAIL':
            print('FAIL', cls, r['problems'][:6])

if __name__ == '__main__':
    main()
