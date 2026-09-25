#!/usr/bin/env python3
"""Error-driven compile convergence loop.

build -> mine MSVC log -> mechanical supply (includes/members) -> build ...
until the error count reaches 0 or the supplyers report no progress
(remaining errors need per-case adjudication).

Usage: python tools/csp_export/compile_loop.py [--max-rounds N]
"""
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
TOOLS = ROOT / 'tools' / 'csp_export'
LOG = ROOT / '.omo' / 'loop_build.txt'
MAX_ROUNDS = 8
CL_MP = '4'


def sh(args, **kw):
    return subprocess.run(args, capture_output=True, text=True,
                          encoding='utf-8', errors='replace', cwd=str(ROOT),
                          **kw)


def build():
    import os
    env = dict(os.environ, RA2_SKIP_GATES='1', CL_MPCount=CL_MP)
    r = subprocess.run(
        ['cmake', '--build', 'build_win', '--config', 'Release',
         '--', '/nr:false'],
        capture_output=True, text=True, encoding='utf-8', errors='replace',
        cwd=str(ROOT), env=env)
    out = (r.stdout or '') + (r.stderr or '')
    LOG.write_text(out, encoding='utf-8', errors='replace')
    return len(re.findall(r'error C\d+|error LNK\d+', out)), r.returncode


def supply(log):
    """returns total mechanical additions from the error log"""
    inc = sh([sys.executable, str(TOOLS / 'supply_includes_from_errors.py'),
              str(log), '--apply'])
    mem = sh([sys.executable, str(TOOLS / 'supply_members_from_errors.py'),
              str(log), '--apply'])
    pro = sh([sys.executable, str(TOOLS / 'supply_protos_from_errors.py'),
              str(log), '--apply'])
    ghp = sh([sys.executable, str(TOOLS / 'fix_ghost_params.py'),
              str(log), '--apply'])
    tf = sh([sys.executable, str(TOOLS / 'gen_tree_full_e4.py'),
             str(log), '--apply'])
    # fwd regeneration must come AFTER tree-full (both scan tree headers;
    # fwd excludes their enum/alias/template names)
    sh([sys.executable, str(TOOLS / 'gen_e4_fwd.py'), '--apply'])
    al = sh([sys.executable, str(TOOLS / 'align_tree_decls.py'),
             '--e4', '--force', '--apply'])
    gi = re.search(r'includes inserted: (\d+)', inc.stdout)
    gm = re.search(r'members supplied: (\d+).*method decls supplied: (\d+)',
                   mem.stdout)
    gp = re.search(r'prototypes: (\d+) new', pro.stdout)
    gg = re.search(r'ghost params appended: (\d+)', ghp.stdout)
    gt = re.search(r'tree full defs: (\d+) classes', tf.stdout)
    return (int(gi.group(1)) if gi else 0,
            (int(gm.group(1)) if gm else 0) + (int(gm.group(2)) if gm else 0)
            + (int(gp.group(1)) if gp else 0)
            + (int(gg.group(1)) if gg else 0)
            + (int(gt.group(1)) if gt else 0))


def main():
    for rnd in range(1, MAX_ROUNDS + 1):
        errs, rc = build()
        print(f'[loop] round {rnd}: {errs} errors (rc={rc})', flush=True)
        if errs == 0:
            print('[loop] compile gate PASS')
            return
        inc, mem = supply(LOG)
        print(f'[loop] supply: includes={inc} members/methods={mem}',
              flush=True)
        if inc == 0 and mem == 0:
            print('[loop] supplyers idle — remaining errors need '
                  'per-case adjudication; log at', LOG)
            sys.exit(2)
    print('[loop] max rounds reached;', LOG)
    sys.exit(3)


if __name__ == '__main__':
    main()
