#!/usr/bin/env python3
"""convergence_driver.py -- X47 one-shot convergence driver.

Walks tools/csp_export/_absorbed/convergence/ORDER.json (the machine-readable
canonical order of the X30..X44b convergence wave, incl. the previously
orphaned generators gen_x30_merge / gen_x31_callshape / gen_x37_miniscope /
x44b_format / x44b_merge_verify).

Modes (default --verify-current):
  --verify-current  The acceptance test: run every stage's DRY probe on the
                    current tree and require 0 pending edits for every stage
                    whose ORDER entry says replay=verified. Stages marked
                    replay=unverified are measured and reported with their
                    recorded reason (honesty over fake no-ops); they never
                    fail the run. Exit 0 iff no FAIL rows.
  --dry             Walk the order, check inputs, print what WOULD run.
  --apply           Run each kind=stage entry with args_apply, then re-run its
                    dry probe: 2nd-run pending must be 0 (per-stage idempotence
                    gate, fail-closed). Between stages: REVERSE-protected
                    files must never appear in `git status --porcelain`.
  --stage NAME      Restrict the walk to one stage (repeatable).
  --json OUT        Also write the per-stage result table as JSON.

Detector kinds (ORDER.json pending_detector):
  stdout_line_count  count stdout lines matching `pattern` (regex)
  stdout_regex_sum   sum of capture group 1 over all `patterns`
  stdout_json_field  parse the whole stdout as a JSON object, read `field`
  null / kind gate|external  reported, not measured

Input policy: a stage whose recorded `inputs` are absent on this machine is
reported INPUT-MISSING and skipped (accounted, never a silent pass) -- the
census-absent-is-not-failure policy of step2_canon.py. Several inputs are
gitignored evidence data (recorded per stage); on the working machine they
exist, on a fresh clone the X-round evidence archive must be restored first.
"""

import argparse
import json
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
ORDER_PATH = ROOT / 'tools/csp_export/_absorbed/convergence/ORDER.json'
DEFAULT_LOG = ROOT / '.omo/evidence/optimization/x44b/x44b_build_1.out.txt'
STAGE_TIMEOUT = 900

# REVERSE-protected paths (must never be touched by any stage; AGENTS.md list)
REVERSE_PROTECTED = [
    'injectFunctionTest/gen_reverse_hooks.py',
    'injectFunctionTest/gen_re_impl.py',
    'injectFunctionTest/gen/',
    'injectFunctionTest/render_hooks.cpp',
    'injectFunctionTest/PostProcStub.asm',
    'injectFunctionTest/tls_storage.h',
    'injectFunctionTest/shadow_txn.h',
    'injectFunctionTest/shadow_txn.cpp',
    'injectFunctionTest/headless_server.cpp',
    'injectFunctionTest/functions.json',
    'injectFunctionTest/CMakeLists.txt',
    'src/core/reverse_marker.hpp',
    'functionComparison.md',
]


def sh(cmd, timeout=STAGE_TIMEOUT):
    """Run a command, return (rc, stdout+stderr)."""
    p = subprocess.run([sys.executable] + [str(c) for c in cmd],
                       cwd=str(ROOT), capture_output=True, text=True,
                       encoding='utf-8', errors='replace', timeout=timeout)
    return p.returncode, (p.stdout or '') + (p.stderr or '')


def substitute_args(args):
    out = []
    for a in args:
        if a in ('<build-log>', '${X44B_LOG}'):
            out.append(str(DEFAULT_LOG))
        else:
            out.append(a)
    return out


def detect_pending(det, out):
    """Return (pending:int, detail:str) per the detector spec."""
    if det is None:
        return None, 'no detector'
    kind = det.get('type')
    if kind == 'stdout_line_count':
        rx = re.compile(det['pattern'])
        n = sum(1 for ln in out.split('\n') if rx.search(ln))
        return n, f"lines matching /{det['pattern']}/ = {n}"
    if kind == 'stdout_regex_sum':
        total = 0
        parts = []
        for pat in det['patterns']:
            rx = re.compile(pat)
            vals = [int(m.group(1)) for m in rx.finditer(out)]
            total += sum(vals)
            parts.append(f"{pat!r}={vals}")
        return total, ' + '.join(parts)
    if kind == 'stdout_json_field':
        try:
            data = json.loads(out)
        except json.JSONDecodeError:
            return -1, 'stdout is not valid JSON'
        v = data.get(det['field'])
        return (v if isinstance(v, int) else -1), f"{det['field']}={v}"
    return None, f'unknown detector kind {kind}'


def inputs_missing(entry):
    missing = []
    for inp in entry.get('inputs') or []:
        # skip descriptive non-path inputs
        cand = ROOT / inp if not inp.startswith('(') else None
        if cand is not None and not cand.exists():
            missing.append(inp)
    return missing


def git_status_touched():
    r = subprocess.run(['git', 'status', '--porcelain'], cwd=str(ROOT),
                       capture_output=True, text=True)
    return [ln[3:].strip().strip('"') for ln in (r.stdout or '').split('\n') if ln.strip()]


def reverse_violation(paths):
    hits = []
    for p in paths:
        for prot in REVERSE_PROTECTED:
            if prot.endswith('/'):
                if p.startswith(prot):
                    hits.append(p)
            elif p == prot:
                hits.append(p)
    return hits


def run_stage(entry, mode):
    """Returns dict(row) for the result table."""
    row = {
        'n': entry['n'], 'stage': entry['stage'], 'round': entry.get('round'),
        'kind': entry.get('kind', 'stage'), 'replay': entry.get('replay'),
        'pending': None, 'detail': '', 'verdict': '', 'rc': None,
    }
    kind = row['kind']
    if kind == 'external':
        row['verdict'] = 'EXTERNAL'
        row['detail'] = (entry.get('script') or '')[:80]
        return row

    if kind == 'gate':
        if entry['stage'] == 'cast_budget_record_x31':
            rc, out = sh([ROOT / 'tools/cast_budget.py', '--check'])
            row['rc'] = rc
            row['verdict'] = 'GATE-RAN'
            m = re.search(r'cast_ptr (\d+).*?cast_scalar (\d+)', out, re.S)
            row['detail'] = (m.group(0).replace('\n', ' ') if m
                             else out.strip().split('\n')[0][:80])
        else:  # final_gates
            rc1, out1 = sh([ROOT / 'tools/check_def_count.py'])
            rc2, out2 = sh([ROOT / 'tools/cast_budget.py', '--check'])
            row['rc'] = rc1
            line1 = (out1.strip().split('\n') or [''])[0][:70]
            row['detail'] = f'def_count rc={rc1} {line1}; cast_budget rc={rc2}'
            row['verdict'] = 'GATE-RAN'
        return row

    # kind == stage
    miss = inputs_missing(entry)
    if miss:
        row['verdict'] = 'INPUT-MISSING'
        row['detail'] = 'missing: ' + '; '.join(miss)[:100]
        return row

    script = ROOT / entry['script']
    if not script.exists():
        row['verdict'] = 'FAIL'
        row['detail'] = f'script missing: {entry["script"]}'
        return row

    if mode == 'apply':
        rc, out = sh([script] + substitute_args(entry.get('args_apply') or []))
        row['rc'] = rc
        if rc != 0:
            row['verdict'] = 'FAIL'
            row['detail'] = f'apply rc={rc}: {out.strip().split(chr(10))[-1][:90]}'
            return row
        # idempotence gate: re-run dry, expect 0 pending
        rc2, out2 = sh([script] + substitute_args(entry.get('args_dry') or []))
        pend, detail = detect_pending(entry.get('pending_detector'), out2)
        row['pending'] = pend
        row['detail'] = detail
        if pend == 0:
            row['verdict'] = 'APPLY+IDEMPOTENT'
        else:
            row['verdict'] = 'FAIL'
            row['detail'] = f'2nd-run pending={pend}: {detail}'
        return row

    # verify-current / dry-walk: dry probe
    rc, out = sh([script] + substitute_args(entry.get('args_dry') or []))
    row['rc'] = rc
    pend, detail = detect_pending(entry.get('pending_detector'), out)
    row['pending'] = pend
    row['detail'] = detail[:110]
    if pend is None:
        row['verdict'] = 'NO-DETECTOR'
    elif row['replay'] == 'verified':
        row['verdict'] = 'PASS-0PENDING' if pend == 0 else 'FAIL'
    elif row['replay'] == 'unverified':
        row['verdict'] = 'MEASURED-UNVERIFIED'
    else:
        row['verdict'] = 'MEASURED'
    return row


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--verify-current', action='store_true', default=True)
    ap.add_argument('--dry', action='store_true', help='walk only, no probes')
    ap.add_argument('--apply', action='store_true')
    ap.add_argument('--stage', action='append', default=[])
    ap.add_argument('--json', dest='json_out')
    args = ap.parse_args()

    order = json.loads(ORDER_PATH.read_text(encoding='utf-8'))
    stages = order['stages']
    if args.stage:
        stages = [s for s in stages if s['stage'] in args.stage]

    mode = 'apply' if args.apply else ('walk' if args.dry else 'verify-current')
    mode = 'apply' if args.apply else ('walk' if args.dry else 'verify')

    print(f'== convergence_driver mode={mode} order={ORDER_PATH.name} '
          f'stages={len(stages)} ==')
    rows = []
    for entry in stages:
        if mode == 'walk':
            row = {'n': entry['n'], 'stage': entry['stage'],
                   'kind': entry.get('kind'), 'replay': entry.get('replay'),
                   'pending': None, 'detail': 'walk (no probe)',
                   'verdict': 'WALK', 'rc': None}
        else:
            row = run_stage(entry, mode)
        rows.append(row)
        print(f'  [{row["n"]:>2}] {row["stage"]:<26} {row["verdict"]:<20} '
              f'pending={row["pending"]} {row["detail"][:70]}')
        if mode == 'apply' and row['verdict'] == 'FAIL':
            print('fail-closed: stopping the chain at first FAIL')
            break
        if mode == 'apply':
            viol = reverse_violation(git_status_touched())
            if viol:
                print(f'fail-closed: REVERSE-protected touched: {viol}')
                row['verdict'] = 'FAIL'
                break

    n_fail = sum(1 for r in rows if r['verdict'] == 'FAIL')
    n_pass = sum(1 for r in rows if r['verdict'] == 'PASS-0PENDING')
    n_unver = sum(1 for r in rows if r['verdict'] == 'MEASURED-UNVERIFIED')
    n_missing = sum(1 for r in rows if r['verdict'] == 'INPUT-MISSING')
    print(f'== summary: {len(rows)} stages | PASS-0PENDING {n_pass} | '
          f'MEASURED-UNVERIFIED {n_unver} | INPUT-MISSING {n_missing} | '
          f'FAIL {n_fail} ==')

    if args.json_out:
        Path(args.json_out).write_text(
            json.dumps({'mode': mode, 'rows': rows}, indent=1), encoding='utf-8')
        print(f'result json -> {args.json_out}')

    sys.exit(1 if n_fail else 0)


if __name__ == '__main__':
    main()
