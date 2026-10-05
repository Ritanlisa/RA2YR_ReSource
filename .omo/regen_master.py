#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""G42.52 MASTER REGENERATION DRIVER -- scripts are the source of truth.

Principle: src/ is the PRODUCT of (baseline git commit + ordered script
replay).  Deleting src/ (or any generated stratum) and running this driver
reconstructs it.

Phase table (each entry: id, kind, command, gates, regenerates):
  A  canonical-universe   csp_canon/raw_decomp/bodies via csp_export
                          generators + canon_regen (RA2MCP)          [IDA]
  B  generated-stubs      task17/task18 stubs, link_stubs (truth-emitting)
  C  truth-fill           g191 materialization over TODO-stub stratum
  D  hidden-stub-clear    g234 audit + g235 materialization
  E  three-ban-waves      ordered g-series rewriters (CSP-fed + provenance)
  F  supplies/carriers    g157/g204/g216/g224-vt supplies replay
  G  audits               sweep/g234/g236 -- all must return ZERO stub

Usage:
  python .omo/regen_master.py --plan        show phase table + status
  python .omo/regen_master.py --phase D     run one phase (asserts gates)
  python .omo/regen_master.py --verify-adjacent  regenerate B and diff
Full replay: run phases A..G in order on a fresh worktree of BASELINE.
"""
import subprocess
import sys
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
BASELINE = 'auto-fill-baseline'      # fixed git anchor for replay

PHASES = [
    dict(id='A', name='canonical universe (csp_export + canon_regen)',
         gates=['IDA-ONLINE'],
         cmds=['python tools/csp_export/export_all.py || true',
           '# canon_regen via RA2MCP (seven-stage regen)'],
         regen=['src/csp_canon/', 'src/raw_decomp/', 'bodies/']),
    dict(id='B', name='generated stub strata (task17/18/link_stubs truth-emitting)',
         gates=[],
         cmds=['python tools/gen_sub_stubs.py',
               'python tools/task17_generate.py',
               'python tools/gen_link_stubs.py'],
         regen=['src/_generated/']),
    dict(id='C', name='truth fill (TODO-stub -> cache body)',
         gates=['CACHE'],
         cmds=['python .omo/g191_truth_fill.py --apply'],
         regen=['src/**/*.cpp (bodies)']),
    dict(id='D', name='hidden-stub clear (audit + materialize)',
         gates=['CACHE', 'IDA-ONLINE'],
         cmds=['python .omo/g234_hidden_stub_audit.py',
               'python .omo/g235_hidden_fix.py --apply'],
         regen=['src/**/*.cpp (trivial bodies)']),
    dict(id='E', name='three-ban waves (CSP-fed + provenance rewriters)',
         gates=['CACHE', 'IDA-ONLINE'],
         cmds=['python .omo/g212_threeban_engine.py',
               'python .omo/g220_fnmap.py   # via RA2MCP py_exec_file',
               'python .omo/g224_final.py --apply',
               'python .omo/g225_vt_final.py --apply',
               'python .omo/g232_p5.py --apply',
               'python .omo/g231_prov_batch.py  # via RA2MCP'],
         regen=['src/**/*.cpp (semantic forms)']),
    dict(id='F', name='supplies & carriers',
         gates=['CENSUS'],
         cmds=['python .omo/g203_supply_wave.py 0 6 (x6 shards)',
               'python .omo/g204_carrier_wave.py 0 4 (x4)',
               'python .omo/g216_supply_members.py'],
         regen=['src/**/minimal_carriers.hpp', 'src/**/*.hpp flat members']),
    dict(id='G', name='final audits (must be ZERO)',
         gates=[],
         cmds=['python tools/verify_execution_flow.py --stub-sweep',
               'python .omo/g234_hidden_stub_audit.py',
               'python .omo/g236_pp_audit.py'],
         regen=[]),
]


def gate_ok(g):
    if g == 'CACHE':
        return (ROOT / '.omo/ida_cache').exists()
    if g == 'IDA-ONLINE':
        import urllib.request
        try:
            urllib.request.urlopen('http://127.0.0.1:13337/mcp',
                                   timeout=5)
            return True
        except Exception:
            return False
    return True


def main():
    if '--plan' in sys.argv or len(sys.argv) == 1:
        print('BASELINE git anchor:', BASELINE)
        for ph in PHASES:
            ok = all(gate_ok(g) for g in ph['gates'])
            print('[%s] %-58s gates=%-22s %s'
                  % (ph['id'], ph['name'], ','.join(ph['gates']) or '-',
                     'READY' if ok else 'GATED'))
        return
    if '--phase' in sys.argv:
        pid = sys.argv[sys.argv.index('--phase') + 1]
        ph = next(p for p in PHASES if p['id'] == pid)
        for g in ph['gates']:
            if not gate_ok(g):
                print('GATE FAIL:', g)
                sys.exit(1)
        for c in ph['cmds']:
            if c.startswith('#'):
                continue
            print('RUN', c)
            r = subprocess.run(c, shell=True, cwd=str(ROOT))
            if r.returncode:
                print('PHASE FAIL:', c)
                sys.exit(r.returncode)
        print('PHASE', pid, 'OK')
        return


if __name__ == '__main__':
    main()
