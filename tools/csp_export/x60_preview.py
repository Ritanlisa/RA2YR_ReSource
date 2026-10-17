#!/usr/bin/env python3
"""X60 preview: render the new body of selected structs without touching src."""
import sys
import collections
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
TARGETS = [a for a in sys.argv[1:] if not a.startswith('--')] or ['CellStruct_e4.hpp']
sys.argv = ['gen_x60_carrier_layout.py', '--plan', str(ROOT / '.omo/evidence/optimization/x60/x60_preview_plan.json')]
sys.path.insert(0, str(ROOT / 'tools' / 'csp_export'))

import importlib.util
spec = importlib.util.spec_from_file_location(
    'g60', str(ROOT / 'tools' / 'csp_export' / 'gen_x60_carrier_layout.py'))
g60 = importlib.util.module_from_spec(spec)
spec.loader.exec_module(g60)

targets = TARGETS
print('PREVIEW targets:', targets, file=sys.stderr)

for path in g60.FILES:
    if path.name not in targets:
        continue
    print('PREVIEW file matched:', path.name, file=sys.stderr)
    try:
        text = path.read_bytes().decode('utf-8')
    except UnicodeDecodeError:
        text = path.read_bytes().decode('latin-1')
    structs, lines = g60.parse_file_structs(text)
    for st in structs:
        stats = collections.Counter()
        layout, notes, pack_p = g60.build_layout(
            st['name'], st['members'], stats,
            g60.parse_method_names(lines, st['others']))
        print('=== %s :: %s  (authority size %s) ===' % (
            path.name, st['name'],
            g60.authority(st['name'])[0] if layout is not None else 'N/A'))
        if layout is None:
            print('  SKIPPED:', notes)
            continue
        for line in layout:
            print('  ' + line)
        for o in st['others']:
            print('  ' + lines[o].strip())
        print('  -- notes:', notes)
        print('  -- stats:', dict(stats))
