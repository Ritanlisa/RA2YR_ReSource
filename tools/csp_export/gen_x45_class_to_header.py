#!/usr/bin/env python3
"""X45 subtask C step 1: scan src/**/*.{hpp,h} for class/struct DEFINITION sites.

Builds anchors/class_to_header.json: class -> {header, line, ns, kind}.
Prefer canonical definitions: non-_e4/non-flat-twin headers win; among ties the
shortest path (hand-authority headers live in shallow dirs).  Read-only scan;
JSON written for the replacement generator + future consumers.
"""
import json
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
OUT = ROOT / 'anchors' / 'class_to_header.json'

RE_DEF = re.compile(
    r'^[ \t]*(?:class|struct)[ \t]+(?:([A-Za-z_][\w:]*)::)?([A-Za-z_]\w*)\b[^;{]*?\{',
    re.M)


def main():
    found = defaultdict(list)
    for p in sorted(ROOT.joinpath('src').rglob('*')):
        if p.suffix.lower() not in {'.hpp', '.h'}:
            continue
        try:
            t = p.read_bytes().decode('latin-1')
        except OSError:
            continue
        for m in RE_DEF.finditer(t):
            ns, name = m.group(1), m.group(2)
            ln = t[:m.start()].count('\n') + 1
            rel = p.relative_to(ROOT).as_posix()
            found[name].append({'header': rel, 'line': ln, 'ns': ns or 'global'})
    # canonical preference: exclude _e4 flat twins from canonical pick
    out = {}
    for name, hits in found.items():
        def rank(h):
            is_e4 = ('_e4' in h['header']) or ('/e4/' in h['header'])
            depth = h['header'].count('/')
            return (is_e4, depth, h['header'])
        hits_sorted = sorted(hits, key=rank)
        out[name] = {
            'canonical': hits_sorted[0],
            'all': hits,
        }
    payload = {
        'generated_by': 'tools/csp_export/gen_x45_class_to_header.py',
        'scan_root': 'src',
        'classes': {k: v['canonical'] for k, v in sorted(out.items())},
        'ambiguous': {k: v['all'] for k, v in sorted(out.items()) if len(v['all']) > 1},
    }
    OUT.write_text(json.dumps(payload, indent=1), encoding='utf-8')
    print(f'classes={len(out)} ambiguous={sum(1 for v in out.values() if len(v["all"]) > 1)}')
    for probe in ['CampaignClass', 'LineTrail', 'AudioController', 'Coord', 'rc_ptr_base',
                  'VectorClass', 'RandomStruct', 'ILocomotion', 'DynamicVectorClass_uint',
                  'Block', 'Destination', 'ExceptionInfo', 'FileName', 'IUnknown',
                  'Source', 'Src', 'String', 'String1', 'exception']:
        c = payload['classes'].get(probe)
        print(f'{probe}: {c}')


if __name__ == '__main__':
    main()
