#!/usr/bin/env python3
"""RC3 content-preservation guard: function-definition-count monotonic gate.

Counts function definitions across src/** -- a definition is an annotation
line `// 0xADDR` (the tree-wide def-address convention consumed by regen,
supply_missing_bodies, verify_execution_flow, ...) followed within 3 lines
by a line containing '(' (the def line).  Counts are tracked per DISTINCT
address so a function that merely moves between files does not false-fail,
while a deleted definition (the 1,484-body loss had no detector at all)
fails closed with the missing function named.

Ratchet semantics (mirrors tools/check_generated_quality.py):
  baseline absent          -> BOOTSTRAP: write baseline from current scan,
                              exit 0 (loudly announced)
  baseline corrupt/empty
  scan / wrong root        -> exit 2 (environment error, fail closed)
  any baseline address
  missing from scan        -> exit 1, every missing address named
  else                     -> exit 0 (added addresses reported; raise the
                              ratchet with --update)

The baseline is a machine-local ratchet (tools/*.json is gitignored by
repo policy -- same convention as quality_gate_baseline.json, T3-I12).
A count decrease is never silently accepted: it either fails the gate or
is consciously re-raised via --update by an operator who has audited the
deletion.

Usage:
  python tools/check_def_count.py                    # gate
  python tools/check_def_count.py --update           # gate + raise ratchet
  python tools/check_def_count.py --root DIR --baseline PATH --json OUT
"""
import argparse
import json
import os
import re
import subprocess
import sys
from datetime import datetime, timezone
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
ADDR_LINE = re.compile(r'^//\s*0x([0-9A-Fa-f]{6,8})\s*$')
DEF_LOOKAHEAD = 3          # def line = a '(' within this many lines after
SCHEMA = 'def-count-baseline/v1'
DEF_SNIPPET_MAX = 120      # def-line text kept in baseline for reporting
EXCLUDE_DIRS = {'raw_decomp'}   # .c reference tree (no .cpp anyway); guard


def scan_defs(root):
    """{addr_hex: {'f': [rel...], 'd': def-line snippet}} for *.cpp under
    root.  Returns (defs, n_files_scanned)."""
    defs = {}
    n_files = 0
    root = Path(root).resolve()
    for dirpath, dirnames, filenames in os.walk(root):
        dirnames[:] = [d for d in dirnames if d not in EXCLUDE_DIRS]
        for fn in filenames:
            if not fn.endswith('.cpp'):
                continue
            p = Path(dirpath) / fn
            try:
                text = p.read_text(encoding='latin-1', errors='replace')
            except OSError as e:
                print('WARN: unreadable %s (%s)' % (p, e))
                continue
            n_files += 1
            rel = p.relative_to(root).as_posix()
            lines = text.split('\n')
            for i, ln in enumerate(lines):
                m = ADDR_LINE.match(ln.strip())
                if not m:
                    continue
                def_line = ''
                for k in range(i + 1,
                               min(i + 1 + DEF_LOOKAHEAD, len(lines))):
                    if '(' in lines[k]:
                        def_line = lines[k].strip()
                        break
                if not def_line:
                    continue     # stray annotation, not a definition
                key = '%X' % int(m.group(1), 16)
                e = defs.setdefault(key, {'f': [], 'd': ''})
                if rel not in e['f']:
                    e['f'].append(rel)
                if not e['d']:
                    e['d'] = def_line[:DEF_SNIPPET_MAX]
    return defs, n_files


def git_head():
    try:
        return subprocess.run(
            ['git', 'rev-parse', '--short=16', 'HEAD'], cwd=str(ROOT),
            capture_output=True, text=True, timeout=30).stdout.strip()
    except Exception:
        return '(unavailable)'


def load_baseline(path):
    """Baseline dict or None if absent.  Raises ValueError on corrupt."""
    if not path.exists():
        return None
    try:
        data = json.loads(path.read_text(encoding='utf-8'))
    except (OSError, ValueError) as e:
        raise ValueError('baseline unreadable: %s' % e)
    if not isinstance(data, dict) or data.get('_meta', {}).get(
            'schema') != SCHEMA or not isinstance(data.get('defs'), dict):
        raise ValueError('baseline schema mismatch (expected %s)' % SCHEMA)
    if not data['defs']:
        raise ValueError('baseline defs table is empty')
    return data


def write_baseline(path, defs, root_label):
    now = datetime.now(timezone.utc).isoformat(timespec='seconds')
    old = {}
    if path.exists():
        try:
            old = json.loads(path.read_text(encoding='utf-8')).get(
                '_meta', {})
        except Exception:
            old = {}
    meta = {'schema': SCHEMA, 'total': len(defs), 'root': root_label,
            'git_head': git_head(), 'created_at': old.get(
                'created_at', now), 'updated_at': now,
            'generator': 'tools/check_def_count.py'}
    path.parent.mkdir(parents=True, exist_ok=True)
    tmp = path.with_suffix('.json.tmp')
    tmp.write_text(json.dumps({'_meta': meta, 'defs': defs}, indent=0),
                   encoding='utf-8')
    os.replace(tmp, path)


def main():
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[1])
    ap.add_argument('--update', action='store_true',
                    help='raise the ratchet to the current scan (conscious '
                         'acceptance of any observed loss)')
    ap.add_argument('--baseline', default=str(ROOT / 'tools'
                                              / 'def_count_baseline.json'))
    ap.add_argument('--root', default=str(ROOT / 'src'),
                    help='scan root (default: <repo>/src)')
    ap.add_argument('--json', dest='json_out', default=None,
                    help='write evidence JSON to this path')
    ap.add_argument('--max-report', type=int, default=50,
                    help='max missing addresses listed in full (default 50)')
    args = ap.parse_args()

    baseline_path = Path(args.baseline)
    root = Path(args.root)
    ev = {'baseline': str(baseline_path), 'root': str(root)}

    if not root.is_dir():
        print('FATAL: scan root does not exist: %s' % root)
        _emit(ev, 'ERROR', 2, args.json_out, reason='root-missing')
        sys.exit(2)

    defs, n_files = scan_defs(root)
    if n_files == 0 or not defs:
        # Empty scan must never validate against a baseline (would look
        # like a catastrophic loss or, worse, mask one on the next run).
        print('FATAL: scan found 0 definitions across %d cpp files -- '
              'refusing to evaluate (fail closed)' % n_files)
        _emit(ev, 'ERROR', 2, args.json_out,
              reason='empty-scan', files_scanned=n_files)
        sys.exit(2)
    print('scanned %d cpp files under %s: %d distinct function addresses'
          % (n_files, root, len(defs)))
    ev['total_now'] = len(defs)
    ev['files_scanned'] = n_files

    try:
        base = load_baseline(baseline_path)
    except ValueError as e:
        print('FATAL: %s' % e)
        _emit(ev, 'ERROR', 2, args.json_out, reason=str(e))
        sys.exit(2)

    if base is None:
        write_baseline(baseline_path, defs, str(args.root))
        print('BOOTSTRAP: baseline absent -> recorded %d definitions at %s'
              % (len(defs), baseline_path))
        print('PASS (bootstrap)')
        _emit(ev, 'BOOTSTRAP', 0, args.json_out)
        sys.exit(0)

    base_defs = base['defs']
    ev['total_baseline'] = len(base_defs)
    missing = sorted(set(base_defs) - set(defs))
    added = sorted(set(defs) - set(base_defs))
    ev['missing_count'] = len(missing)
    ev['added_count'] = len(added)

    verdict = 'PASS'
    rc = 0
    if missing:
        verdict = 'FAIL'
        rc = 1
        print('FAIL: function-definition count DECREASED: %d -> %d '
              '(%d address(es) lost)' % (len(base_defs), len(defs),
                                         len(missing)))
        ev['missing'] = []
        for a in missing[:args.max_report]:
            b = base_defs[a]
            print('  missing 0x%s  files=%s  def: %s'
                  % (a, ','.join(b.get('f', ['?'])) or '?',
                     b.get('d', '?') or '?'))
            ev['missing'].append({'addr': '0x' + a, 'files': b.get('f', []),
                                  'def': b.get('d', '')})
        if len(missing) > args.max_report:
            print('  ... and %d more (full list in evidence JSON)'
                  % (len(missing) - args.max_report))
        print('A definition was deleted without a recorded replacement.  '
              'If this deletion is INTENTIONAL and audited, re-raise the '
              'ratchet explicitly: python tools/check_def_count.py --update')
    else:
        print('PASS: no definition lost (%d -> %d, %d added)'
              % (len(base_defs), len(defs), len(added)))
        if added:
            print('  (added addresses this run: %s%s)'
                  % (', '.join('0x' + a for a in added[:10]),
                     ' ...' if len(added) > 10 else ''))

    if args.update:
        write_baseline(baseline_path, defs, str(args.root))
        print('RATCHET RAISED: baseline rewritten at %s (%d definitions)'
              % (baseline_path, len(defs)))
        if rc:
            print('WARNING: ratchet raised while %d definition(s) were '
                  'MISSING -- this consciously accepts the deletion.'
                  % len(missing))
        ev['ratchet_raised'] = True

    _emit(ev, verdict, rc, args.json_out)
    sys.exit(rc)


def _emit(ev, verdict, rc, json_out, **extra):
    if not json_out:
        return
    ev.update(extra)
    ev['verdict'] = verdict
    ev['exit_code'] = rc
    ev['timestamp'] = datetime.now(timezone.utc).isoformat(timespec='seconds')
    p = Path(json_out)
    p.parent.mkdir(parents=True, exist_ok=True)
    p.write_text(json.dumps(ev, indent=1), encoding='utf-8')
    print('evidence: %s' % p)


if __name__ == '__main__':
    main()
