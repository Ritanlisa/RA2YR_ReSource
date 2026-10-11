#!/usr/bin/env python3
"""Step 2 - CSP 符号 -> C++ 声明转写 (canon 层) + 声明供给/签名权威/去重流水线.

内容 (RC4 吸收后, plan project-optimization.md #11):
  S1 gen_cpp_canon.py            — 重生成 canon 层
     - src/csp_canon/classes.hpp (拓扑排序类层次 + 成员 + 方法)
     - src/csp_canon/functions.hpp / globals.hpp
     - anchors/csp_canon_manifest.json (19K 签名溯源)
     - anchors/csp_canon_members.json (成员唯一权威表)
  S2 声明供给 (24 stage)         — 成员/方法/原型/类型/包含供给 (G1+G2)
  S3 emit 去重 (8 stage)         — 声明/成员/参数/全局去重 (G4)
     (去重必须在签名对齐之前: 先折叠重复声明, 对齐才无幻影目标 —
      worktree 双跑实证的收敛序)
  S4 签名权威 (14 stage)         — def/decl/cache 签名对齐 (G3)
  S5 幂等自检                    — 已应用 stage 块整块重跑至不动点 (≤3 轮),
     每轮后 src/**/*.hpp|.cpp|.h 全树内容哈希; 不稳定 = FAIL
     (plan AC: 同一输入二次运行产物逐位一致)

log 驱动的 stage 需要 census 输入: --log <path> 传入 (如 .omo/tu_errors.json)。
无 --log 时这些 stage 显式跳过并记账 (census 缺席 ≠ 失败); 树扫描型 stage
无条件运行 — 收敛树上为 no-op。硬编码 .omo census/cache 输入的 stage 在
输入缺席时同样跳过并记账 (fresh clone 不硬失败)。

S1 N1 债 ratchet (T4c blocker ①): gen_cpp_canon 保持 RC1 fail-loud 契约
(占位成员拒绝发射 + 报告 + exit 1)。该 rc=1 在 T10 命名前是已知债
(264K 占位成员), step2 采用 step4 同款 accounted-debt 策略 (I45/I61:
容忍只绑 rc==1, 崩溃码永不入账):
  * rc==1 + fresh 报告, total <= baseline + slack  -> 记账放行
  * rc==1 + total 低于 baseline                    -> ratchet 自动收紧
  * rc==1 + total 超出 baseline + slack            -> FAIL (真债务增长)
  * rc==1 而无 fresh 报告                          -> FAIL (拒绝猜测)
  * 其他退出码                                     -> FAIL (崩溃非债)
baseline 机器本地 (tools/step2_n1_baseline.json, 同 def_count_baseline 的
gitignore 政策), 首跑 BOOTSTRAP 大声记账。SLACK 覆盖 step1 注册抖动
(I62: ~±10/次, 跨日实测漂移 267), RA2_STEP2_N1_SLACK 可覆盖。

stage 退出码非零 → 记账; 全部 stage 跑完后若存在失败, step2 以非零退出
(fail-closed, 与 run_all_steps 的链停止语义一致)。

后续修改点: 类宇宙/六层命名优先级/基类解析在 gen_cpp_canon.py;
stage 实现在 _absorbed/step2_decl/*.py (单一权威, 禁止再复制逻辑)。
"""
import argparse
import hashlib
import json
import os
import re
import subprocess
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
DEC = ROOT / 'tools' / 'csp_export' / '_absorbed' / 'step2_decl'
OMO = ROOT / '.omo'

# --------------------------------------------------------------- stage 表 --
# (name, needs_log, requires_omo_inputs, broken_note)
G2_SUPPLY = [
    ('supply_missing_members', True, (), None),
    ('supply_members_from_errors', True, (), 'C2888 分支缺 APPLY 门 (原脚本缺陷保真;'
     ' 本管线恒以 --apply 调用, 不触发干跑写路径)'),
    ('supply_mech_members', False, (), 'KNOWN-BROKEN: g136 census 上 lines.insert '
     'insert_at=None 崩溃 (与 --apply 无关) — 跳过并记账, 待 T14 修'),
    ('supply_selfnamed_members', True, (), None),
    ('supply_pad_members', True, (), None),
    ('supply_protos_from_errors', True, (), None),
    ('fix_c2039_member_supply', True, (), None),
    ('fix_c2039_methods', True, (), None),
    ('fix_c2039_supply_pack', True, (), None),
    ('fix_c2039_c3861', True, (), None),
    ('fix_c2039_qualified', True, (), None),
    ('fix_c3861_member_supply', True, (), None),
    ('fix_c2027_def_supply', True, (), None),
    ('fix_c2027_include_supply', True, (), None),
    ('fix_fwd_type_supply', False, (), None),
    ('fix_late_global_include', True, (), None),
    ('fix_missing_identifiers', True, (), None),
    ('fix_tu_missing_types', True, (), None),
    ('fix_c2065_supply', True, (), None),
    ('fix_c2065_data_supply', True, (), None),
    ('fix_c3861_member_include', True, (), None),
    ('fix_c3861_proto_supply', True, (), None),
    ('supply_includes_from_errors', True, (), None),
    ('supply_includes_tree', True, (), None),
]
G4_DEDUP = [
    ('fix_dup_decls', False, (), None),
    ('fix_dup_members', False, (), None),
    ('fix_dup_anchor_defs', False, (), None),
    ('fix_dup_param_names', False, (), None),
    ('fix_dup_param_names2', False, (), None),
    ('fix_param_dupnames', False, (), None),
    ('fix_gdecl_dupes', False, (), None),
    ('fix_local_extern_dupes', False, (), None),
]
G3_SIGAUTH = [
    ('fix_def_decl_arity_unify', False, (), None),
    ('fix_this_param_defs', False, (), None),
    ('fix_def_heads_from_cache', False, ('.omo/ida_cache',), None),
    ('fix_proto_truth_sigs', False, ('.omo/ida_cache', '.omo/tu_errors.json'), None),
    ('fix_c2511_align', False, ('.omo/tu_errors_g141.json', '.omo/ida_cache'), None),
    ('fix_e4recv_params', False, ('.omo/tu_errors_g139.json', '.omo/ida_cache'), None),
    ('fix_c2065_params', True, (), None),
    ('fix_c2511_def_sync', True, (), None),
    ('fix_hdr_from_def', True, (), None),
    ('fix_cache_truth_params', True, (), None),
    ('fix_cache_truth_sigs', True, (), None),
    ('fix_ghost_params', True, (), None),
    ('fix_static_this_mismatch', True, (), None),
    ('fix_c2671_static_decls', True, (), None),
]
# T4c: 3 -> 5.  The block converges monotonically (per-round diffs shrink
# 180 -> 22 -> 2 on the first post-HEAD run, probe evidence) but a fresh
# tree needs more than 3 settling rounds for the big first-pass churn.
# Semantics unchanged: PASS still requires a byte fixpoint.
S5_MAX_ROUNDS = 5

# ---- S1 N1-debt ratchet (accounted-debt policy, step4 parity) ------------
N1_BASELINE = ROOT / 'tools' / 'step2_n1_baseline.json'
N1_REPORT = (ROOT / '.omo' / 'unresolved_reports'
             / 'gen_cpp_canon.unresolved.json')
N1_SLACK = int(os.environ.get('RA2_STEP2_N1_SLACK', '512'))
S1_ACCOUNT = ROOT / '.omo' / 'step2_stage_account.json'


def _n1_baseline_read():
    try:
        return int(json.loads(
            N1_BASELINE.read_text(encoding='utf-8'))['total'])
    except (OSError, ValueError, KeyError):
        return None


def _n1_baseline_write(total):
    N1_BASELINE.write_text(
        json.dumps({'schema': 'step2-n1-ratchet/v1', 'total': total},
                   indent=1), encoding='utf-8')


def _n1_report_total(t0):
    """Placeholder count from a FRESH RC1 unresolved report, else None.

    _meta (with 'total') sits at the head of the report, so a bounded
    head-read avoids parsing the ~170MB entry body on every run."""
    try:
        if not N1_REPORT.exists() or N1_REPORT.stat().st_mtime < t0:
            return None
        with N1_REPORT.open('r', encoding='utf-8', errors='replace') as f:
            head = f.read(4096)
        m = re.search(r"'total':\s*(\d+)", head)
        if m:
            return int(m.group(1))
        return int(json.loads(N1_REPORT.read_text(encoding='utf-8'))
                   ['_meta']['total'])
    except (OSError, ValueError, KeyError):
        return None


def _is_transient_lock(out):
    """L92: Defender real-time scan locks freshly-written files for seconds
    after a write storm -- surfaces as rc=1 + PermissionError [Errno 13].
    A transient lock must not fail the chain; retried with backoff."""
    return ('PermissionError' in out and '[Errno 13]' in out)


def _run_stage(name, args, retries=5):
    """Run one absorbed stage (subprocess, cwd=ROOT) and return (rc, tail).
    Errno 13 (transient Defender lock, L92) is retried with backoff; any
    other failure returns immediately."""
    delay = 1.0
    for attempt in range(1, retries + 1):
        r = subprocess.run([sys.executable, str(DEC / (name + '.py')), *args],
                           cwd=str(ROOT), capture_output=True, text=True,
                           encoding='utf-8', errors='replace', timeout=600)
        full = (r.stdout or '') + (r.stderr or '')
        out = full.strip().splitlines()
        tail = out[-2:] if out else []
        if (r.returncode == 0 or not _is_transient_lock(full)
                or attempt == retries):
            return r.returncode, tail
        print(f'  - {name}: Errno 13 transient lock, retry '
              f'{attempt}/{retries - 1} in {delay:.0f}s')
        time.sleep(delay)
        delay *= 2
    return r.returncode, tail


def _src_hash():
    h = hashlib.sha256()
    for p in sorted((ROOT / 'src').rglob('*')):
        if p.suffix not in ('.hpp', '.cpp', '.h'):
            continue
        h.update(str(p.relative_to(ROOT)).encode())
        h.update(p.read_bytes())
    return h.hexdigest()


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--log', default=None,
                    help='census/build log for log-driven stages '
                         '(e.g. .omo/tu_errors.json)')
    ap.add_argument('--skip-s1', action='store_true',
                    help='skip gen_cpp_canon (canon inputs unchanged)')
    args = ap.parse_args()

    failures = []
    s1_accounted = []
    logargs = [args.log] if args.log else []

    if not args.skip_s1:
        print('[step2] S1 gen_cpp_canon')
        t0 = time.time()
        delay = 1.0
        for attempt in range(1, 6):
            r = subprocess.run([sys.executable,
                                str(ROOT / 'tools/csp_export/'
                                    'gen_cpp_canon.py')],
                               cwd=str(ROOT), capture_output=True,
                               text=True, encoding='utf-8',
                               errors='replace', timeout=900)
            s1_out = (r.stdout or '') + (r.stderr or '')
            # RC1 fail-loud stays visible on the console (placeholders are
            # never silent -- only their chain-fatality is ratcheted).
            for ln in s1_out.split('\n'):
                if 'UNRESOLVED REPORT' in ln or 'FAIL LOUD' in ln:
                    print('  |', ln.strip())
            if r.returncode == 0 or not _is_transient_lock(s1_out) \
                    or attempt == 5:
                break
            print(f'  - S1: Errno 13 transient lock, retry '
                  f'{attempt}/4 in {delay:.0f}s')
            time.sleep(delay)
            delay *= 2
        if r.returncode == 0:
            print('  - S1: ok')
        elif r.returncode == 1:
            # RC1 fail-loud contract: the generator refuses placeholders,
            # writes the report and exits 1.  step2 accounts that known N1
            # debt with a ratchet (fail only on INCREASE) -- the placeholders
            # stay loud (report + accounting), the chain is not chain-fatal
            # on the documented pre-T10 baseline (T4c blocker ①, I62).
            total = _n1_report_total(t0)
            if total is None:
                print('  !! S1: rc=1 without a fresh unresolved report — '
                      'refusing to guess (fail-closed)')
                failures.append(('S1 gen_cpp_canon', 'no fresh N1 report'))
            else:
                base = _n1_baseline_read()
                if base is None:
                    _n1_baseline_write(total)
                    print(f'  - S1: [account] N1 placeholder debt {total} — '
                          'BOOTSTRAP ratchet baseline (RC1 report stays loud)')
                    s1_accounted.append({'stage': 'S1 gen_cpp_canon',
                                         'event': 'bootstrap',
                                         'total': total})
                elif total < base:
                    _n1_baseline_write(total)
                    print(f'  - S1: [account] N1 debt {base} -> {total} '
                          '(decreased; ratchet tightened)')
                    s1_accounted.append({'stage': 'S1 gen_cpp_canon',
                                         'event': 'tighten',
                                         'from': base, 'to': total})
                elif total <= base + N1_SLACK:
                    print(f'  - S1: [account] N1 placeholder debt {total} '
                          f'(baseline {base}, +{total - base} within slack '
                          f'{N1_SLACK}) — known N1 debt, chain lives')
                    s1_accounted.append({'stage': 'S1 gen_cpp_canon',
                                         'event': 'accounted',
                                         'total': total, 'baseline': base})
                else:
                    print(f'  !! S1: N1 debt INCREASED {base} -> {total} '
                          f'(+{total - base} > slack {N1_SLACK}) — supply '
                          'semantic names or re-adjudicate the baseline')
                    failures.append((
                        'S1 gen_cpp_canon',
                        f'N1 debt increased {base} -> {total}'))
        else:
            # T8 hardening (I45/I61): tolerance binds to the documented
            # refuse exit (1).  A crash code is never 'known debt'.
            failures.append(('S1 gen_cpp_canon', r.returncode))
    else:
        print('[step2] S1 skipped (--skip-s1)')

    applied = []   # stages actually applied this run (S5 re-runs these)

    for tag, stages in (('S2 decl supply', G2_SUPPLY),
                        ('S3 emit dedup', G4_DEDUP),
                        ('S4 signature authority', G3_SIGAUTH)):
        print(f'[step2] {tag} ({len(stages)} stages)')
        for name, needs_log, requires, broken in stages:
            if broken and 'KNOWN-BROKEN' in broken:
                print(f'  - {name}: SKIPPED (known-broken, accounted)')
                continue
            if needs_log and not logargs:
                print(f'  - {name}: skipped (log-driven, no --log)')
                continue
            missing = [r for r in requires if not (ROOT / r).exists()]
            if missing:
                print(f'  - {name}: skipped (input absent: {missing[0]})')
                continue
            rc, tail = _run_stage(name, logargs + ['--apply'])
            status = 'ok' if rc == 0 else f'FAIL rc={rc}'
            print(f'  - {name}: {status}'
                  + ('' if not tail else ' | ' + ' / '.join(
                      t.strip()[:90] for t in tail)))
            applied.append(name)
            if rc != 0:
                failures.append((name, rc))

    # -- S5 idempotency: re-run the applied block to a byte fixpoint (<=N) --
    if applied:
        print(f'[step2] S5 idempotency self-check '
              f'(re-run {len(applied)} applied stages, <= {S5_MAX_ROUNDS} rounds)')
        stable = False
        for rnd in range(1, S5_MAX_ROUNDS + 1):
            h0 = _src_hash()
            hprev = h0
            movers = []
            for name in applied:
                _run_stage(name, logargs + ['--apply'])
                hnow = _src_hash()
                if hnow != hprev:
                    movers.append(name)
                hprev = hnow
            if hprev == h0:
                print(f'[step2] S5 PASS: round {rnd} byte-identical (fixpoint)')
                stable = True
                break
            # per-stage mover attribution (diagnostic only; the PASS/FAIL
            # criterion stays the round-boundary byte comparison)
            print(f'[step2] S5 round {rnd}: tree changed (movers: '
                  + (', '.join(movers) if movers else 'none') + ')')
        if not stable:
            print('[step2] S5 FAIL: no byte fixpoint within '
                  f'{S5_MAX_ROUNDS} rounds')
            failures.append(('S5 idempotency', 'non-convergent'))

    if s1_accounted:
        S1_ACCOUNT.write_text(json.dumps(s1_accounted, indent=1),
                              encoding='utf-8')

    print(f'[step2] canon 声明流水线完成: stages applied={len(applied)} '
          f'failures={len(failures)}')
    for name, rc in failures:
        print(f'  !! {name}: rc={rc}')
    if failures:
        sys.exit(1)
    print('[step2] DONE')


if __name__ == '__main__':
    main()
