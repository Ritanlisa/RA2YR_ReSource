#!/usr/bin/env python3
"""Step 4 - 体落地 + 单次确定性 lowering + 体物化 + 全局/链接桩 + 编译收敛.

T5 absorption (plan project-optimization.md #12): the step4-side body
battery (fix_*/supply_* family) is ABSORBED into this chain -- the scripts
live in tools/csp_export/_absorbed/step4_bodies/ and every invocation below
is part of the pipeline.  Agents must never call fix_* scripts manually;
`run_all_steps.py --only step4` performs the whole absorption in one shot.

T8 (plan #15): every stage now runs under the stage driver
(`_stage_driver.py`) -- per-stage manifests with content-addressed
input/output fingerprints, tool/schema versions, status, chain lock and
rollback checkpoints.  Cache hits re-verify external inputs AND the full
output map (changed-input verification is never skipped); a failed stage
is rolled back byte-exact and the chain aborts non-zero (partial output is
never success).  CLI:
    --skip-stages=C1,C2   skip named stages (recorded as skipped, not success)
    --no-cache            run every stage regardless of manifest hits
    --fresh-manifest      discard previous stage manifests before running
    --plan-only           record fingerprints + cache decisions only; no
                          script runs, no output is written (status is
                          'planned', never treated as a cacheable ok)

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
  C8. address fix to fixpoint (<= 6 rounds, workers 3)
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

sys.path.insert(0, str(TOOLS))
import _stage_driver  # noqa: E402

_account = []


def run(script, *args, grep=None, check=True, policy=None, script_dir=None):
    """Run one callee.  rc != 0:
      policy=None  -> StageFailure (fail-closed, I37; driver rolls back)
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
        if policy == 'account' and r.returncode == 1:
            print(f'    [account] {script} exited {r.returncode} '
                  f'(known-debt stage, tolerated):')
            for ln in tail.split('\n')[-6:]:
                print('    |', ln)
            _account.append({'stage': script, 'rc': r.returncode,
                             'tail': tail[-800:]})
        elif policy in ('account', 'worklist') and r.returncode != 1:
            # T8 hardening (I45 lesson): tolerance policies bind to the
            # documented refuse exit (1).  A crash code (e.g. 0xC0000005)
            # is never 'known debt' -- fail closed.
            print(f'!! [step4] {script} exited {r.returncode} '
                  f'(crash, not a policy refusal) — chain aborted')
            for ln in tail.split('\n')[-10:]:
                print('    |', ln)
            raise _stage_driver.StageFailure(
                script, r.returncode or 1, 'crash under tolerance policy')
        elif policy == 'worklist':
            _worklist_gate(script, r.returncode, t0, out)
        else:
            print(f'!! [step4] {script} exited {r.returncode} '
                  f'({time.time() - t0:.0f}s) — chain aborted (fail-closed)')
            for ln in tail.split('\n')[-10:]:
                print('    |', ln)
            raise _stage_driver.StageFailure(script, r.returncode or 1, tail)
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
        raise _stage_driver.StageFailure(stage, rc or 1,
                                         'not a policy refusal')
    wl = json.loads(WORKLIST.read_text(encoding='utf-8'))
    acc_u = wl.get('unresolved_accepted', {})
    acc_l = wl.get('lossguard_accepted', {})
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
                raise _stage_driver.StageFailure(
                    stage, 1, 'new unresolved not on worklist: %s'
                    % fresh_addrs[:8])
            else:
                print(f'    [worklist] {len(entries)} refused function(s), '
                      'all accepted (routing (c) accept-kept + worklist)')
        else:
            print(f'!! [step4] {stage} exited 1 but wrote NO fresh '
                  'unresolved report — refusing to guess (fail-closed).')
            raise _stage_driver.StageFailure(stage, 1, 'no fresh report')
        if lg.exists() and lg.stat().st_mtime >= t0:
            entries = json.loads(lg.read_text(encoding='utf-8')).get(
                'refused', {})
            fresh_lg = sorted(set(entries) - set(acc_l))
            if fresh_lg:
                print(f'!! [step4] {len(fresh_lg)} NEW loss-guard refusal(s) '
                      f'not accepted: {fresh_lg[:8]}')
                print('    report: %s' % lg)
                raise _stage_driver.StageFailure(
                    stage, 1, 'new loss-guard refusal not accepted: %s'
                    % fresh_lg[:8])
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
            raise _stage_driver.StageFailure(stage, 1, 'no fresh report')


def fixpoint(script, *args, rounds=6, grep_done='real functions fixed:',
             script_dir=None):
    """Run a fixer to its fixpoint (0 real functions fixed) or `rounds`."""
    last = 0
    for rnd in range(1, rounds + 1):
        out, rc = run(script, *args, script_dir=script_dir)
        fixed = 0
        m = re.search(r'%s\s*(\d+)' % re.escape(grep_done), out)
        if m:
            fixed = int(m.group(1))
        print(f'    round {rnd}: fixed={fixed}')
        last = fixed
        if fixed == 0:
            break
    return last


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


def _g_loop():
    """Stage G runner: compile convergence loop.  Returns extra dict."""
    if not (ROOT / 'build_win' / 'CMakeCache.txt').exists():
        raise _stage_driver.StageFailure(
            'G_compile_verify', 2,
            'build_win not configured — convergence loop requires the '
            'build tree (plan 系统目标: step1-5 自足). Configure '
            '`cmake -B build_win -A Win32` first.')
    prev = None
    rounds_used = 0
    errs_last = None
    for rnd in range(1, BUILD_ROUNDS + 1):
        rounds_used = rnd
        errs, rc = build_error_count()
        errs_last = errs
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
        run('fix_c2660_max_arity.py', LOG, '--apply',
            check=False, policy='account', grep=('extended', 'decls'))
        run('fix_c2660_protos_arity.py', LOG, '--apply',
            check=False, policy='account', grep=('extended', 'protos'))
        run('fix_plateau.py', LOG, '--apply', script_dir=A,
            grep=('repaired', 'sites'))
        run('fix_scalar_indexed_members.py', LOG, '--apply',
            check=False, policy='account',
            grep=('declarations', 'members'))
        # post-fixer brace safety (single authority, cheap idempotent pass)
        run('fix_leaks_general.py', '--apply', script_dir=A,
            grep=('close-braces', 'files changed'))
    else:
        print(f'    [loop] {BUILD_ROUNDS} rounds reached; residual errors '
              f'are the T14 worklist (log: {LOOP_LOG.name})')
    return {'compile_error_count': errs_last,
            'build_rounds_used': rounds_used,
            'build_log': '.omo/step4_build_log.txt'}


# ---------------------------------------------------------------------------
# Stage declarations (T8): order is load-bearing.  ext_inputs = data inputs
# NO chain stage writes (fingerprinted for cache-hit decisions); output
# scopes are checkpointed before the stage and restored byte-exact on
# failure.  See _stage_driver.py for the soundness contract.
# ---------------------------------------------------------------------------
STAGE_DEFS = [
    dict(
        name='A_body_generation', category='body_generation',
        banner='A. body landing (clean regen, RC1 truthify + RC3 guard)',
        ext_inputs=['decompile-results/full_export/src',
                    'tools/csp_export/unresolved_worklist.json'],
        out_scope=['src', '.omo/ida_cache', '.omo/unresolved_reports',
                   '.omo/regen_bodies_manifest.json'],
        scripts=[
            ('fix_orphan_bodies.py', ('--apply',),
             dict(script_dir=A, grep=('orphan bodies',))),
            # regen_bodies_from_export stays top-level (not a fix_/supply_)
            ('regen_bodies_from_export.py', ('--apply',),
             dict(check=False, policy='worklist',
                  grep=('bodies replaced', 'bodies kept', 'UNRESOLVED',
                        'REFUSED'))),
            ('sync_ida_cache.py', ('--apply',),
             dict(grep=('cache updated', 'identical'))),
            ('fix_leaks_general.py', ('--apply',),
             dict(script_dir=A, grep=('close-braces', 'files changed'))),
            ('fix_dupdef_corpses.py', ('--apply',),
             dict(script_dir=A, grep=('corpses removed',))),
            # kept bodies (no fresh code / worklist-refused) still carry
            # old-epoch vocabulary; the sweepers are no-ops on clean output
            # (I28) and stay as cheap guards until T7 retires the last kept
            # body.
            ('fix_ida_byte_value.py', ('--apply',),
             dict(script_dir=A, grep=('fixed:',))),
            ('fix_ida_mem_macros.py', ('--apply',),
             dict(script_dir=A, grep=('fixed:',))),
            ('fix_ida_mem_regress.py', ('--apply',),
             dict(script_dir=A, grep=('reverted:',))),
            ('fix_this_param.py', ('--apply',),
             dict(script_dir=A, grep=('this-params',))),
        ],
    ),
    dict(
        name='B_body_materialization',
        category='body_generation',
        banner='B. body materialization (per-function manifest)',
        ext_inputs=['decompile-results/full_export/src'],
        out_scope=['src', '.omo/rematerialize_defs_manifest.json'],
        scripts=[
            # rematerialize_defs stays top-level (not a fix_/supply_)
            ('rematerialize_defs.py', ('--apply',),
             dict(check=False, policy='account',
                  grep=('re-materialized', 'refused', 'manifest'))),
            ('fix_restore_stale_bodies.py', ('--apply',),
             dict(script_dir=A, grep=('restored', 'lines'))),
            ('fix_glued_defheads.py', ('--apply',),
             dict(script_dir=A, grep=('restored', 'dispatch'))),
            ('fix_stub_returns.py', ('--apply',),
             dict(script_dir=A, grep=('stub returns', 'deleted'))),
            ('supply_missing_bodies.py', ('--apply',),
             dict(script_dir=A, check=False, policy='worklist',
                  grep=('landed', 'appended', 'REJECTED', 'UNRESOLVED'))),
            ('fix_free_this.py', ('--apply',),
             dict(script_dir=A, grep=('this-param',))),
        ],
    ),
    dict(
        name='C_member_lowering', category='member_lowering',
        banner='C. canon + member lowering (one deterministic pass)',
        ext_inputs=['anchors/class_db.json',
                    'anchors/class_name_align.json',
                    'anchors/global_types.json',
                    'anchors/mangled_alias.json',
                    'anchors/til_seeded_classes.json',
                    'tools/class_layouts.json',
                    'tools/csp/full_report/csp_functions.json'],
        out_scope=['src', 'anchors/csp_canon_members.json',
                   'anchors/csp_canon_manifest.json',
                   'anchors/canon_member_names.json',
                   '.omo/unresolved_reports'],
        scripts=[
            # gen_cpp_canon exits 1 on the N1 placeholder-member debt
            # (263,864 anonymous layout fillers -- N1 L55 baseline; its
            # unresolved report IS the naming worklist).  Tables are
            # written before the exit; tolerated as known-debt accounting,
            # never silent.
            ('gen_cpp_canon.py', (),
             dict(policy='account',
                  grep=('classes emitted', 'members table'))),
            ('canon_member_lowering.py', ('--apply',),
             dict(grep=('lowered', 'T1', 'T2'))),
            ('normalize_blocks.py', (),
             dict(grep=('blocks normalized', 'DONE'))),
            ('fix_til_members.py', ('--apply',),
             dict(script_dir=A, grep=('resolved', 'members'))),
            ('apply_canon_names.py', ('--apply',),
             dict(grep=('renamed', 'names'))),
            ('fix_memory_refs.py', ('--apply',),
             dict(script_dir=A, grep=('files changed',))),
            ('gen_memory_decls.py', (),
             dict(grep=('appended', 'MEMORY sites converted'))),
            ('lower_temp_decls.py', (),
             dict(grep=('moved', 'decls', 'DONE'))),
        ],
    ),
    dict(
        name='C8_address_fix', category='address_fix',
        banner='C8. fix_addr 不动点 (workers 3 内存纪律)',
        ext_inputs=['anchors/class_db.json'],
        out_scope=['src', 'tools/member_lookup.json',
                   'anchors/member_types.json', 'signals.json'],
        fixpoint=('fix_addr_violations.py',
                  ('--no-verify', '--workers', '3'),
                  dict(script_dir=A)),
    ),
    dict(
        name='D_structure_vocab_hygiene', category='brace_normalization',
        banner='D. structure / vocabulary / call-form hygiene',
        ext_inputs=[],
        out_scope=['src'],
        scripts=[
            ('fix_double_brace.py', ('--apply',),
             dict(script_dir=A, grep=('fixed', 'files'))),
            ('fix_truncated_headers.py', ('--apply',),
             dict(script_dir=A, grep=('repaired', 'headers'))),
            ('fix_e4_headers_v2.py', ('--apply',),
             dict(script_dir=A, grep=('fixed', 'headers'))),
            ('fix_class_head_stray_decl.py', ('--apply',),
             dict(script_dir=A, grep=('relocated', 'decls'))),
            ('fix_doubled_prefix.py', ('--apply',),
             dict(script_dir=A, grep=('repaired', 'lines'))),
            ('fix_hash_type_tokens.py', ('--apply',),
             dict(script_dir=A, grep=('substituted', 'tokens'))),
            ('fix_qmark_placeholders.py', ('--apply',),
             dict(script_dir=A, grep=('legalized', 'placeholders'))),
            ('fix_s8_owner_rewrite.py', ('--apply',),
             dict(script_dir=A, grep=('rewritten', 'sites'))),
            ('fix_dtor_names.py', ('--apply',),
             dict(script_dir=A, policy='account', grep=('fixed', 'dtors'))),
            ('fix_def_class_backfill.py', ('--apply',),
             dict(script_dir=A, grep=('backfilled', 'defs'))),
            ('fix_demoted_this.py', ('--apply',),
             dict(script_dir=A, grep=('restored', 'bodies'))),
            ('fix_oo_patterns.py', ('--apply',),
             dict(script_dir=A, grep=('rewritten', 'sites'))),
            ('fix_e4_returns.py', ('--apply',),
             dict(script_dir=A, grep=('fixed', 'returns'))),
            ('fix_nameless_members.py', ('--apply',),
             dict(script_dir=A, grep=('named', 'members'))),
            ('fix_e4_empty_names.py', ('--apply',),
             dict(script_dir=A, grep=('named', 'members'))),
            ('fix_shim_pack.py', ('--apply',),
             dict(script_dir=A, grep=('supplied', 'shims'))),
            ('fix_hdr_decl_rebuild.py', ('--apply',),
             dict(script_dir=A, grep=('rebuilt', 'decls'))),
            ('fix_vftable_quote.py', ('--apply',),
             dict(script_dir=A, grep=('collapsed', 'vftables'))),
            ('fix_vftable_install_garbage.py', ('--apply',),
             dict(script_dir=A, grep=('fixed', 'casts'))),
            ('fix_unpad_refs.py', ('--apply',),
             dict(script_dir=A, grep=('expanded', 'refs'))),
            ('fix_b1_rewrite.py', ('--apply',),
             dict(script_dir=A, check=False, policy='account',
                  grep=('rewritten', 'sites'))),
            ('fix_b1_byte_companion.py', ('--apply',),
             dict(script_dir=A, check=False, policy='account',
                  grep=('rewritten', 'sites'))),
            ('fix_ida_token_externs.py', ('--apply',),
             dict(script_dir=A, grep=('externs', 'tokens'))),
            ('fix_ida_types.py', ('--apply',),
             dict(script_dir=A, grep=('fixed', 'types'))),
            ('fix_ida_mem_semicolons.py', ('--apply',),
             dict(script_dir=A, grep=('fixed', 'semicolons'))),
            ('fix_ida_mem_semicolons_ml.py', ('--apply',),
             dict(script_dir=A, grep=('fixed', 'semicolons'))),
            ('fix_dsurface_viewbounds.py', ('--apply',),
             dict(script_dir=A, check=False, policy='account')),
            ('fix_c30a_repair.py', ('--apply',),
             dict(script_dir=A, grep=('repaired', 'sites'))),
            ('fix_c4596_ctor_pack.py', ('--apply',),
             dict(script_dir=A, grep=('stripped', 'decls'))),
            ('fix_c2874_bridge_own.py', ('--apply',),
             dict(script_dir=A, check=False, policy='account')),
            ('fix_unify_iunknown.py', ('--apply',),
             dict(script_dir=A, check=False, policy='account')),
            ('fix_ns_scope.py', ('--apply',),
             dict(script_dir=A, grep=('wrapped', 'defs'))),
            ('fix_ns_drop_block.py', ('--apply',),
             dict(script_dir=A, grep=('wrapped', 'blocks'))),
            ('fix_ns_drop2.py', ('--apply',),
             dict(script_dir=A, grep=('wrapped', 'files'))),
            ('fix_static_decl_form.py', ('--apply',),
             dict(script_dir=A, grep=('static', 'decls'))),
            ('fix_member_this_form.py', ('--apply',),
             dict(script_dir=A, grep=('rewritten', 'calls'))),
            ('fix_global_form_calls.py', ('--apply',),
             dict(script_dir=A, grep=('rewritten', 'calls'))),
            ('fix_c2352_static.py', ('--apply',),
             dict(script_dir=A, grep=('static', 'decls'))),
            ('fix_c2562_return_flip.py', ('--apply',),
             dict(script_dir=A, grep=('flipped', 'defs'))),
            ('fix_c2556_decls.py', ('--apply',),
             dict(script_dir=A, grep=('synced', 'decls'))),
            ('fix_c2660_decls.py', ('--apply',),
             dict(script_dir=A, grep=('synced', 'decls'))),
            ('fix_c2660_callers.py', ('--apply',),
             dict(script_dir=A, grep=('rewritten', 'callers'))),
            ('fix_c2109_array_supply.py', ('--apply',),
             dict(script_dir=A, grep=('arrays', 'externs'))),
            ('fix_c2109_v2.py', ('--apply',),
             dict(script_dir=A, grep=('rewritten', 'sites'))),
            ('fix_c2059_collide_qualify.py', ('--apply',),
             dict(script_dir=A, grep=('qualified', 'sites'))),
            ('fix_c2059_regex_pack.py', ('--apply',),
             dict(script_dir=A, grep=('repaired', 'sites'))),
            ('fix_c2352_recv.py', ('--apply',),
             dict(script_dir=A, grep=('rewritten', 'receivers'))),
            ('fix_progresstimer_dual.py', ('--apply',),
             dict(script_dir=A, check=False, policy='account')),
        ],
    ),
    dict(
        name='E_e4_decl_supply', category='decl_supply',
        banner='E. e4 declaration supply',
        ext_inputs=[],
        out_scope=['src'],
        scripts=[
            ('clean_e4_headers.py', ('--apply',),
             dict(grep=('cleaned',))),
            ('upgrade_e4_flat_classes.py', ('--apply',),
             dict(grep=('flat upgrade',))),
            ('supply_e4_class_decls.py', ('--apply',),
             dict(script_dir=A, check=False, policy='account',
                  grep=('headers created', 'member-def classes',
                        'UNRESOLVED'))),
            ('fix_e4_decl_syntax.py', ('--apply',),
             dict(script_dir=A, grep=('decl syntax fixes', 'ctor defs'))),
            ('fix_e4_decl_garbage.py', ('--apply',),
             dict(script_dir=A, grep=('fixed', 'decls'))),
            ('align_tree_decls.py', ('--e4', '--force', '--apply'),
             dict(grep=('signature drift',))),
            ('gen_e4_fwd.py', ('--apply',),
             dict(grep=('fwd declarations',))),
        ],
    ),
    dict(
        name='F_globals_link_stubs', category='globals_link_stubs',
        banner='F. globals / link stubs',
        ext_inputs=[],
        out_scope=['src'],
        scripts=[
            ('gen_vtable_symbols.py', ('--apply',),
             dict(grep=('vtable symbols',))),
            ('gen_ida_globals.py', ('--apply',),
             dict(grep=('bare globals',))),
            ('fix_gf_wire.py', ('--apply',),
             dict(script_dir=A, grep=('wired', 'includes'))),
            ('fix_legacy_e4_globals_redirect.py', ('--apply',),
             dict(script_dir=A, check=False, policy='account')),
            ('fix_link_stubs_prune.py', ('--apply',),
             dict(script_dir=A, grep=('pruned', 'stubs'))),
            ('fix_link_stubs_reconcile.py', ('--apply',),
             dict(script_dir=A, grep=('reconciled', 'stubs'))),
        ],
    ),
    dict(
        name='G_compile_verify', category='compile_verify',
        banner=f'G. compile convergence loop ({BUILD_ROUNDS} rounds max)',
        ext_inputs=['build_win/CMakeCache.txt'],
        out_scope=['src', '.omo/step4_build_log.txt'],
        custom=_g_loop,
    ),
]


def _stage_scripts(sd):
    out = []
    for item in sd.get('scripts', []):
        name, _args, kw = item
        base = kw.get('script_dir', TOOLS)
        out.append(str(Path(base) / name))
    if sd.get('fixpoint'):
        name, _args, kw = sd['fixpoint']
        out.append(str(Path(kw.get('script_dir', TOOLS)) / name))
    if sd.get('custom') is _g_loop:
        out.append(str(Path(__file__)))
    return out


def _run_scripts(sd):
    for item in sd.get('scripts', []):
        name, args, kw = item
        run(name, *args, **kw)


def _superseded_sets(driver):
    """For each stage, the set of output files a LATER stage also claimed
    (outputs_changed) -- the later claim governs those files."""
    order = [sd['name'] for sd in STAGE_DEFS]
    sets = {}
    for i, nm in enumerate(order):
        sup = set()
        for later in order[i + 1:]:
            ch = (driver.man['stages'].get(later) or {}).get(
                'outputs_changed') or {}
            sup |= set(ch)
        sets[nm] = sup
    return sets


def _run_stage(driver, sd, plan_only=False, superseded=()):
    name = sd['name']
    tool_fp = _stage_driver.tools_fingerprint(
        [str(Path(__file__)), str(TOOLS / '_stage_driver.py')]
        + _stage_scripts(sd))
    if driver.cascade_broken():
        hit, reason = False, 'upstream stage re-ran (cascade)'
    else:
        hit, reason = driver.hit(name, sd['ext_inputs'], tool_fp,
                                 sd['out_scope'], superseded=superseded)
    if not hit and not plan_only:
        driver.miss_log.append({'stage': name, 'reason': reason})
    if plan_only:
        ext_fp = _stage_driver.aggregate(
            _stage_driver.scan_scope(ROOT, sd['ext_inputs'])) \
            if sd['ext_inputs'] else None
        out_map = _stage_driver.scan_scope(ROOT, sd['out_scope'])
        driver.record_planned(name, hit, reason, sd['ext_inputs'],
                              sd['out_scope'], tool_fp,
                              [(n, a, k) for n, a, k in
                               sd.get('scripts', [])],
                              ext_fp, out_map)
        return
    if hit:
        driver.record_cached(name, reason)
        return
    if not driver.cascade_broken():
        driver.set_cascade(True)
    print(f'[step4] == {sd["banner"]} ==')
    prev = driver.man['stages'].get(name) or {}
    prev_fp = prev.get('outputs_fingerprint')
    driver.stage_begin(name, sd['category'], sd['ext_inputs'],
                       sd['out_scope'], tool_fp,
                       [(n, a, k) for n, a, k in sd.get('scripts', [])])
    try:
        _run_scripts(sd)
        extra = {}
        if sd.get('fixpoint'):
            fname, fargs, fkw = sd['fixpoint']
            fixed = fixpoint(fname, *fargs, script_dir=fkw.get('script_dir'))
            extra['fixpoint_last_fixed'] = fixed
        if sd.get('custom'):
            extra.update(sd['custom']())
    except _stage_driver.StageFailure as e:
        _flush_account()
        driver.stage_fail(e.rc, e.detail)
        print(f'!! [step4] stage {name} FAILED (rc={e.rc}) -- outputs '
              'rolled back to checkpoint; partial output not counted as '
              'success.')
        raise
    entry = driver.stage_end(extra=extra or None)
    # downstream may still hit iff this re-run reproduced the recorded
    # output state byte-exactly.
    if prev_fp is not None and entry['outputs_fingerprint'] == prev_fp:
        driver.set_cascade(False)
        print(f'[stage-driver] {name}: re-run reproduced recorded output '
              'state -- downstream cache decisions re-enabled')
    else:
        driver.set_cascade(True)


def main():
    skip = ()
    no_cache = False
    fresh = False
    plan_only = False
    for a in sys.argv[1:]:
        if a.startswith('--skip-stages='):
            skip = tuple(x for x in a.split('=', 1)[1].split(',') if x)
        elif a == '--no-cache':
            no_cache = True
        elif a == '--fresh-manifest':
            fresh = True
        elif a == '--plan-only':
            plan_only = True
        elif a in ('--help', '-h'):
            print(__doc__)
            return
    driver = _stage_driver.StageDriver(ROOT, fresh=fresh, no_cache=no_cache,
                                       skip=skip, plan_only=plan_only)
    tool_paths = [str(Path(__file__)), str(TOOLS / '_stage_driver.py')]
    for sd in STAGE_DEFS:
        tool_paths += _stage_scripts(sd)
    driver.begin_chain(tool_paths)
    driver.init_cascade()
    sup = _superseded_sets(driver)
    if not plan_only:
        # Chain-final integrity: if the tree no longer matches the LAST
        # stage's recorded full output map, some file nobody claims was
        # drifted/tampered -- conservatively re-run the whole chain (stage
        # A's regen repairs body drift from the export).
        LAST = STAGE_DEFS[-1]['name']
        drift, why = driver.final_drift(STAGE_DEFS[-1]['out_scope'], LAST)
        if drift:
            print('[stage-driver] chain-final drift -- full re-run '
                  'forced (%s)' % why)
            driver.set_cascade(True)
            driver.miss_log.append({'stage': '(chain-final)', 'reason': why})
    code = 0
    try:
        for sd in STAGE_DEFS:
            if skip and any(sd['name'] == s or sd['name'].startswith(s)
                            for s in skip):
                driver.record_skipped(sd['name'], '--skip-stages')
                continue
            try:
                _run_stage(driver, sd, plan_only=plan_only,
                           superseded=sup.get(sd['name'], ()))
            except _stage_driver.StageFailure as e:
                code = e.rc
                break
        print('[step4] DONE — per-stage manifests in '
              '.omo/step4_stage_manifests.json, tolerated stage debts in '
              '.omo/step4_stage_account.json, per-function body ledger in '
              '.omo/regen_bodies_manifest.json.')
    finally:
        _flush_account()
        driver.end_chain(code == 0)
    if code:
        sys.exit(code)


if __name__ == '__main__':
    main()
