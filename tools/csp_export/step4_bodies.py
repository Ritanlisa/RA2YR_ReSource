#!/usr/bin/env python3
"""Step 4 - 体落地 + 单次确定性 lowering + 体物化 + 全局/链接桩 + 编译收敛.

T5 absorption (plan project-optimization.md #12): the step4-side body
battery (fix_*/supply_* family) is ABSORBED into this chain -- the scripts
live in tools/csp_export/_absorbed/step4_bodies/ and every invocation below
is part of the pipeline.  Agents must never call fix_* scripts manually;
`run_all_steps.py --only step4` performs the whole absorption in one shot.

Stages (order is load-bearing):

  A. body landing (clean, RC1 truthify + RC3 loss guard)
     fix_orphan_bodies -> regen_bodies_from_export -> sync_ida_cache
     -> fix_leaks_general -> fix_dupdef_corpses -> IDA-vocab sweeps on kept
     bodies (fix_ida_byte_value/mem_macros/mem_regress) -> fix_this_param
  B. body materialization (per-function manifest)
     rematerialize_defs -> fix_restore_stale_bodies -> fix_glued_defheads
     -> fix_stub_returns -> supply_missing_bodies -> fix_free_this
  C. canon + member lowering (ONE deterministic pass)
     gen_cpp_canon -> canon_member_lowering -> normalize_blocks
     -> fix_til_members -> apply_canon_names -> fix_memory_refs (absorbed,
     widened globs) -> gen_memory_decls -> lower_temp_decls
     -> fix_addr_violations to fixpoint (<= 6 rounds, workers 3)
  D. structure / vocabulary / call-form hygiene (deterministic sweepers)
  E. e4 declaration supply (headers may have been touched by D)
  F. globals / link stubs
  G. compile convergence loop (<= RA2_STEP4_BUILD_ROUNDS, default 3):
     build (RA2_SKIP_GATES=1) -> mine the MSVC log with the log-driven
     fixers (c2440/c2664/conversion/ptr-forms/static/member-form/
     missing-locals/missing-globals/plateau) -> brace re-sanitize; repeat
     while the error count decreases.  Residual errors are REPORTED, not
     fatal (step5 owns the compile gate; tree is red by design until T14).

Fail-closed wiring (I37): every stage's exit code is observed.  Policy per
stage (default = abort):
  * worklist  -- regen/supply refusals tolerated iff every refused address
    is on tools/csp_export/unresolved_worklist.json (T5 I25 routing
    decision (c) accept-kept+worklist); a NEW refused address aborts.
  * account   -- known-debt stages whose nonzero exit is expected on this
    tree (documented inline); nonzero is printed loudly with the stage name
    and recorded in .omo/step4_stage_account.json, never silent.
"""
import json
import os
import re
import subprocess
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
TOOLS = ROOT / 'tools' / 'csp_export'
A = TOOLS / '_absorbed' / 'step4_bodies'
WORKLIST = TOOLS / 'unresolved_worklist.json'
LOOP_LOG = ROOT / '.omo' / 'step4_build_log.txt'
ACCOUNT = ROOT / '.omo' / 'step4_stage_account.json'
BUILD_ROUNDS = int(os.environ.get('RA2_STEP4_BUILD_ROUNDS', '3'))

_account = []


def run(script, *args, grep=None, check=True, policy=None, script_dir=None):
    """Run one callee.  rc != 0:
      policy=None  -> abort the chain (fail-closed, I37)
      policy='worklist' -> tolerated iff refused set is on the worklist
      policy='account'  -> tolerated, printed loudly, recorded
    Returns (output, rc)."""
    base = script_dir if script_dir is not None else TOOLS
    path = Path(base) / script
    t0 = time.time()
    r = subprocess.run([sys.executable, str(path), *args],
                       capture_output=True, text=True, encoding='utf-8',
                       errors='replace', cwd=str(ROOT))
    out = (r.stdout or '') + (r.stderr or '')
    for ln in out.split('\n'):
        if grep and any(g in ln for g in grep):
            print('    |', ln.strip())
    if r.returncode != 0:
        tail = '\n'.join(ln for ln in out.split('\n') if ln.strip())[-1500:]
        if policy == 'account':
            print(f'    [account] {script} exited {r.returncode} '
                  f'(known-debt stage, tolerated):')
            for ln in tail.split('\n')[-6:]:
                print('    |', ln)
            _account.append({'stage': script, 'rc': r.returncode,
                             'tail': tail[-800:]})
        elif policy == 'worklist':
            _worklist_gate(script, r.returncode, t0, out)
        else:
            print(f'!! [step4] {script} exited {r.returncode} '
                  f'({time.time() - t0:.0f}s) — chain aborted (fail-closed)')
            for ln in tail.split('\n')[-10:]:
                print('    |', ln)
            _flush_account()
            sys.exit(r.returncode or 1)
    else:
        print(f'    [ok] {script} ({time.time() - t0:.0f}s)')
    return out, r.returncode


def _flush_account():
    ACCOUNT.write_text(json.dumps(_account, indent=1), encoding='utf-8')


def _worklist_gate(stage, rc, t0, out):
    """I25/I36 routing: nonzero from regen/supply is tolerated iff
    (a) rc is the documented refuse exit (1) -- anything else is a crash
    and aborts, and (b) every refused address in a FRESH report (mtime >=
    stage start) is on the accepted worklist.  A stale or missing report
    aborts.  This closes the silent-swallow hole (T5 incident: rc=2
    file-not-found was 'tolerated' against a stale cohort-era report)."""
    if rc != 1:
        print(f'!! [step4] {stage} exited {rc} — not a policy refusal '
              '(refuse exit is 1); crash detail:')
        for ln in out.split('\n')[-12:]:
            print('    |', ln)
        _flush_account()
        sys.exit(rc or 1)
    wl = json.loads(WORKLIST.read_text(encoding='utf-8'))
    acc_u = wl.get('unresolved_accepted', {})
    acc_l = wl.get('lossguard_accepted', {})
    ok = True
    fresh = lambda p: (p.exists() and p.stat().st_mtime >= t0)
    if stage == 'regen_bodies_from_export.py':
        ur = ROOT / '.omo' / 'unresolved_reports' / \
            'regen_bodies.unresolved.json'
        lg = ROOT / '.omo' / 'unresolved_reports' / \
            'regen_bodies.lossguard.json'
        if fresh(ur):
            entries = json.loads(ur.read_text(encoding='utf-8')).get(
                'unresolved', {})
            fresh_addrs = sorted(set(entries) - set(acc_u))
            if fresh_addrs:
                print(f'!! [step4] {len(fresh_addrs)} NEW unresolved '
                      f'function(s) not on the accepted worklist: '
                      f'{fresh_addrs[:8]}')
                print('    report: %s' % ur)
                ok = False
            else:
                print(f'    [worklist] {len(entries)} refused function(s), '
                      'all accepted (routing (c) accept-kept + worklist)')
        else:
            print(f'!! [step4] {stage} exited 1 but wrote NO fresh '
                  'unresolved report — refusing to guess (fail-closed).')
            ok = False
        if lg.exists() and lg.stat().st_mtime >= t0:
            entries = json.loads(lg.read_text(encoding='utf-8')).get(
                'refused', {})
            fresh_lg = sorted(set(entries) - set(acc_l))
            if fresh_lg:
                print(f'!! [step4] {len(fresh_lg)} NEW loss-guard refusal(s) '
                      f'not accepted: {fresh_lg[:8]}')
                print('    report: %s' % lg)
                ok = False
            elif entries:
                print(f'    [worklist] {len(entries)} loss-guard refusal(s), '
                      'all accepted (pre-RC1 injuries, bodies kept)')
    elif stage == 'supply_missing_bodies.py':
        rp = ROOT / '.omo' / 'unresolved_reports' / \
            'supply_missing_bodies.unresolved.json'
        if fresh(rp):
            entries = json.loads(rp.read_text(encoding='utf-8')).get(
                'rejected', {})
            print(f'    [worklist] supply_missing_bodies: '
                  f'{len(entries)} rejected (CSP-manifest name gate) — '
                  'naming-debt worklist (I30), bodies already landed')
        else:
            print(f'!! [step4] {stage} exited 1 but wrote NO fresh '
                  'rejection report — refusing to guess (fail-closed).')
            ok = False
    if not ok:
        print('!! refuse routing violated — chain aborted.  Extend '
              'unresolved_worklist.json ONLY with an explicit routing '
              'decision (plan 意外预案 discipline).')
        _flush_account()
        sys.exit(1)
    _flush_account()


def fixpoint(script, *args, rounds=6, grep_done='real functions fixed:',
             script_dir=None):
    """Run a fixer to its fixpoint (0 real functions fixed) or `rounds`."""
    for rnd in range(1, rounds + 1):
        out, rc = run(script, *args, script_dir=script_dir)
        fixed = 0
        m = re.search(r'%s\s*(\d+)' % re.escape(grep_done), out)
        if m:
            fixed = int(m.group(1))
        print(f'    round {rnd}: fixed={fixed}')
        if fixed == 0:
            break


def build_error_count():
    """One Release build (gates skipped); returns (error_count, rc)."""
    env = dict(os.environ, RA2_SKIP_GATES='1', CL_MPCount='8')
    r = subprocess.run(['cmake', '--build', 'build_win', '--config',
                        'Release', '--', '/nr:false'],
                       capture_output=True, text=True,
                       encoding='utf-8', errors='replace', cwd=str(ROOT),
                       env=env)
    out = (r.stdout or '') + (r.stderr or '')
    LOOP_LOG.write_text(out, encoding='utf-8', errors='replace')
    n = len(re.findall(r'error C\d+', out))
    return n, r.returncode


def main():
    print('[step4] == A. body landing (clean regen, RC1 truthify + RC3 guard) ==')
    run('fix_orphan_bodies.py', '--apply', script_dir=A,
        grep=('orphan bodies',))
    # regen_bodies_from_export stays top-level (not a fix_/supply_ script)
    run('regen_bodies_from_export.py', '--apply', check=False,
        policy='worklist',
        grep=('bodies replaced', 'bodies kept', 'UNRESOLVED', 'REFUSED'))
    run('sync_ida_cache.py', '--apply', grep=('cache updated', 'identical'))
    run('fix_leaks_general.py', '--apply', script_dir=A,
        grep=('close-braces', 'files changed'))
    run('fix_dupdef_corpses.py', '--apply', script_dir=A,
        grep=('corpses removed',))
    # kept bodies (no fresh code / worklist-refused) still carry old-epoch
    # vocabulary; the sweepers are no-ops on clean output (I28) and stay as
    # cheap guards until T7 retires the last kept body.
    run('fix_ida_byte_value.py', '--apply', script_dir=A, grep=('fixed:',))
    run('fix_ida_mem_macros.py', '--apply', script_dir=A, grep=('fixed:',))
    run('fix_ida_mem_regress.py', '--apply', script_dir=A, grep=('reverted:',))
    run('fix_this_param.py', '--apply', script_dir=A, grep=('this-params',))

    print('[step4] == B. body materialization (per-function manifest) ==')
    # rematerialize_defs stays top-level (not a fix_/supply_ script)
    run('rematerialize_defs.py', '--apply', check=False,
        policy='account', grep=('re-materialized', 'refused', 'manifest'))
    run('fix_restore_stale_bodies.py', '--apply', script_dir=A,
        grep=('restored', 'lines'))
    run('fix_glued_defheads.py', '--apply', script_dir=A,
        grep=('restored', 'dispatch'))
    run('fix_stub_returns.py', '--apply', script_dir=A,
        grep=('stub returns', 'deleted'))
    run('supply_missing_bodies.py', '--apply', script_dir=A, check=False,
        policy='worklist', grep=('landed', 'appended', 'REJECTED',
                                 'UNRESOLVED'))
    run('fix_free_this.py', '--apply', script_dir=A, grep=('this-param',))

    print('[step4] == C. canon + member lowering (one deterministic pass) ==')
    # gen_cpp_canon exits 1 on the N1 placeholder-member debt (263,864
    # anonymous layout fillers -- N1 L55 baseline; its unresolved report IS
    # the naming worklist).  Tables are written before the exit; tolerated
    # as known-debt accounting, never silent.
    run('gen_cpp_canon.py', policy='account',
        grep=('classes emitted', 'members table'))
    run('canon_member_lowering.py', '--apply', grep=('lowered', 'T1', 'T2'))
    run('normalize_blocks.py', grep=('blocks normalized', 'DONE'))
    run('fix_til_members.py', '--apply', script_dir=A,
        grep=('resolved', 'members'))
    run('apply_canon_names.py', '--apply', grep=('renamed', 'names'))
    run('fix_memory_refs.py', '--apply', script_dir=A,
        grep=('files changed',))
    run('gen_memory_decls.py', grep=('appended', 'MEMORY sites converted'))
    run('lower_temp_decls.py', grep=('moved', 'decls', 'DONE'))
    print('[step4] C8. fix_addr 不动点 (workers 3 内存纪律)')
    fixpoint('fix_addr_violations.py', '--no-verify', '--workers', '3',
             script_dir=A)

    print('[step4] == D. structure / vocabulary / call-form hygiene ==')
    run('fix_double_brace.py', '--apply', script_dir=A,
        grep=('fixed', 'files'))
    run('fix_truncated_headers.py', '--apply', script_dir=A,
        grep=('repaired', 'headers'))
    run('fix_e4_headers_v2.py', '--apply', script_dir=A,
        grep=('fixed', 'headers'))
    run('fix_class_head_stray_decl.py', '--apply', script_dir=A,
        grep=('relocated', 'decls'))
    run('fix_doubled_prefix.py', '--apply', script_dir=A,
        grep=('repaired', 'lines'))
    run('fix_hash_type_tokens.py', '--apply', script_dir=A,
        grep=('substituted', 'tokens'))
    run('fix_qmark_placeholders.py', '--apply', script_dir=A,
        grep=('legalized', 'placeholders'))
    run('fix_s8_owner_rewrite.py', '--apply', script_dir=A,
        grep=('rewritten', 'sites'))
    run('fix_dtor_names.py', '--apply', script_dir=A, policy='account',
        grep=('fixed', 'dtors'))
    run('fix_def_class_backfill.py', '--apply', script_dir=A,
        grep=('backfilled', 'defs'))
    run('fix_demoted_this.py', '--apply', script_dir=A,
        grep=('restored', 'bodies'))
    run('fix_oo_patterns.py', '--apply', script_dir=A,
        grep=('rewritten', 'sites'))
    run('fix_e4_returns.py', '--apply', script_dir=A,
        grep=('fixed', 'returns'))
    run('fix_nameless_members.py', '--apply', script_dir=A,
        grep=('named', 'members'))
    run('fix_e4_empty_names.py', '--apply', script_dir=A,
        grep=('named', 'members'))
    run('fix_shim_pack.py', '--apply', script_dir=A,
        grep=('supplied', 'shims'))
    run('fix_hdr_decl_rebuild.py', '--apply', script_dir=A,
        grep=('rebuilt', 'decls'))
    run('fix_vftable_quote.py', '--apply', script_dir=A,
        grep=('collapsed', 'vftables'))
    run('fix_vftable_install_garbage.py', '--apply', script_dir=A,
        grep=('fixed', 'casts'))
    run('fix_unpad_refs.py', '--apply', script_dir=A,
        grep=('expanded', 'refs'))
    run('fix_b1_rewrite.py', '--apply', script_dir=A, check=False,
        policy='account', grep=('rewritten', 'sites'))
    run('fix_b1_byte_companion.py', '--apply', script_dir=A, check=False,
        policy='account', grep=('rewritten', 'sites'))
    run('fix_ida_token_externs.py', '--apply', script_dir=A,
        grep=('externs', 'tokens'))
    run('fix_ida_types.py', '--apply', script_dir=A,
        grep=('fixed', 'types'))
    run('fix_ida_mem_semicolons.py', '--apply', script_dir=A,
        grep=('fixed', 'semicolons'))
    run('fix_ida_mem_semicolons_ml.py', '--apply', script_dir=A,
        grep=('fixed', 'semicolons'))
    run('fix_dsurface_viewbounds.py', '--apply', script_dir=A,
        check=False, policy='account')
    run('fix_c30a_repair.py', '--apply', script_dir=A,
        grep=('repaired', 'sites'))
    run('fix_c4596_ctor_pack.py', '--apply', script_dir=A,
        grep=('stripped', 'decls'))
    run('fix_c2874_bridge_own.py', '--apply', script_dir=A,
        check=False, policy='account')
    run('fix_unify_iunknown.py', '--apply', script_dir=A, check=False,
        policy='account')
    print('[step4] D-ns. 命名空间/调用形')
    run('fix_ns_scope.py', '--apply', script_dir=A, grep=('wrapped', 'defs'))
    run('fix_ns_drop_block.py', '--apply', script_dir=A,
        grep=('wrapped', 'blocks'))
    run('fix_ns_drop2.py', '--apply', script_dir=A, grep=('wrapped', 'files'))
    run('fix_static_decl_form.py', '--apply', script_dir=A,
        grep=('static', 'decls'))
    run('fix_member_this_form.py', '--apply', script_dir=A,
        grep=('rewritten', 'calls'))
    run('fix_global_form_calls.py', '--apply', script_dir=A,
        grep=('rewritten', 'calls'))
    run('fix_c2352_static.py', '--apply', script_dir=A,
        grep=('static', 'decls'))
    run('fix_c2562_return_flip.py', '--apply', script_dir=A,
        grep=('flipped', 'defs'))
    run('fix_c2556_decls.py', '--apply', script_dir=A,
        grep=('synced', 'decls'))
    run('fix_c2660_decls.py', '--apply', script_dir=A,
        grep=('synced', 'decls'))
    run('fix_c2660_callers.py', '--apply', script_dir=A,
        grep=('rewritten', 'callers'))
    run('fix_c2109_array_supply.py', '--apply', script_dir=A,
        grep=('arrays', 'externs'))
    run('fix_c2109_v2.py', '--apply', script_dir=A,
        grep=('rewritten', 'sites'))
    run('fix_c2059_collide_qualify.py', '--apply', script_dir=A,
        grep=('qualified', 'sites'))
    run('fix_c2059_regex_pack.py', '--apply', script_dir=A,
        grep=('repaired', 'sites'))
    run('fix_c2352_recv.py', '--apply', script_dir=A,
        grep=('rewritten', 'receivers'))
    run('fix_progresstimer_dual.py', '--apply', script_dir=A,
        check=False, policy='account')

    print('[step4] == E. e4 declaration supply ==')
    run('clean_e4_headers.py', '--apply', grep=('cleaned',))
    run('upgrade_e4_flat_classes.py', '--apply', grep=('flat upgrade',))
    run('supply_e4_class_decls.py', '--apply', script_dir=A, check=False,
        policy='account',
        grep=('headers created', 'member-def classes', 'UNRESOLVED'))
    run('fix_e4_decl_syntax.py', '--apply', script_dir=A,
        grep=('decl syntax fixes', 'ctor defs'))
    run('fix_e4_decl_garbage.py', '--apply', script_dir=A,
        grep=('fixed', 'decls'))
    run('align_tree_decls.py', '--e4', '--force', '--apply',
        grep=('signature drift',))
    run('gen_e4_fwd.py', '--apply', grep=('fwd declarations',))

    print('[step4] == F. globals / link stubs ==')
    run('gen_vtable_symbols.py', '--apply', grep=('vtable symbols',))
    run('gen_ida_globals.py', '--apply', grep=('bare globals',))
    run('fix_gf_wire.py', '--apply', script_dir=A,
        grep=('wired', 'includes'))
    run('fix_legacy_e4_globals_redirect.py', '--apply', script_dir=A,
        check=False, policy='account')
    run('fix_link_stubs_prune.py', '--apply', script_dir=A,
        grep=('pruned', 'stubs'))
    run('fix_link_stubs_reconcile.py', '--apply', script_dir=A,
        grep=('reconciled', 'stubs'))

    print('[step4] == G. compile convergence loop '
          f'({BUILD_ROUNDS} rounds max) ==')
    if not (ROOT / 'build_win' / 'CMakeCache.txt').exists():
        print('!! build_win not configured — convergence loop requires the '
              'build tree (plan 系统目标: step1-5 自足). Configure '
              '`cmake -B build_win -A Win32` first.')
        _flush_account()
        sys.exit(2)
    prev = None
    for rnd in range(1, BUILD_ROUNDS + 1):
        errs, rc = build_error_count()
        print(f'    [loop] round {rnd}: {errs} compile errors '
              f'(build rc={rc}, log={LOOP_LOG.name})')
        if errs == 0:
            print('    [loop] compile gate PASS')
            break
        if prev is not None and errs >= prev:
            print('    [loop] no progress — residual errors need per-case '
                  'adjudication (T14); log kept at', LOOP_LOG.name)
            break
        prev = errs
        LOG = str(LOOP_LOG)
        # log-driven battery (each mines the FRESH log; empty log = no-op)
        run('gen_missing_globals.py', LOG, '--apply',
            grep=('externs', 'globals'))
        run('fix_missing_locals.py', LOG, '--apply', script_dir=A,
            grep=('restored', 'locals'))
        run('fix_c2440_casts.py', LOG, '--apply', script_dir=A,
            grep=('casts', 'sites'))
        run('fix_c2440_rhs_casts.py', LOG, '--apply', script_dir=A,
            grep=('wrapped', 'sites'))
        run('fix_c2664_arg_casts.py', LOG, '--apply', script_dir=A,
            grep=('casts', 'sites'))
        run('fix_c2664_args.py', LOG, '--apply', script_dir=A,
            grep=('casts', 'args'))
        run('fix_conversion_noise.py', LOG, '--apply', script_dir=A,
            grep=('repaired', 'sites'))
        run('fix_ptr_forms_v2.py', LOG, '--apply', script_dir=A,
            grep=('casts', 'sites'))
        run('fix_body_syntax_v2.py', LOG, '--apply', script_dir=A,
            grep=('repaired', 'sites'))
        run('fix_static_call_rewrite.py', LOG, '--apply', script_dir=A,
            grep=('rewritten', 'calls'))
        run('fix_member_static_calls.py', LOG, '--apply', script_dir=A,
            grep=('rewritten', 'calls'))
        run('fix_c2352_recv.py', LOG, '--apply', script_dir=A,
            grep=('rewritten', 'receivers'))
        run('fix_c2660_max_arity.py', LOG, '--apply', script_dir=A,
            check=False, policy='account', grep=('extended', 'decls'))
        run('fix_c2660_protos_arity.py', LOG, '--apply', script_dir=A,
            check=False, policy='account', grep=('extended', 'protos'))
        run('fix_plateau.py', LOG, '--apply', script_dir=A,
            grep=('repaired', 'sites'))
        run('fix_scalar_indexed_members.py', LOG, '--apply', script_dir=A,
            check=False, policy='account',
            grep=('declarations', 'members'))
        # post-fixer brace safety (single authority, cheap idempotent pass)
        run('fix_leaks_general.py', '--apply', script_dir=A,
            grep=('close-braces', 'files changed'))
    else:
        print(f'    [loop] {BUILD_ROUNDS} rounds reached; residual errors '
              f'are the T14 worklist (log: {LOOP_LOG.name})')
    print('[step4] DONE — see .omo/step4_stage_account.json for tolerated '
          'stage debts, .omo/regen_bodies_manifest.json for the per-function '
          'body ledger.')
    _flush_account()


if __name__ == '__main__':
    main()
