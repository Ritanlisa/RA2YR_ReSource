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

stage 退出码非零 → 记账; 全部 stage 跑完后若存在失败, step2 以非零退出
(fail-closed, 与 run_all_steps 的链停止语义一致)。

后续修改点: 类宇宙/六层命名优先级/基类解析在 gen_cpp_canon.py;
stage 实现在 _absorbed/step2_decl/*.py (单一权威, 禁止再复制逻辑)。
"""
import argparse
import hashlib
import subprocess
import sys
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
S5_MAX_ROUNDS = 3


def _run_stage(name, args):
    """Run one absorbed stage (subprocess, cwd=ROOT) and return (rc, tail)."""
    r = subprocess.run([sys.executable, str(DEC / (name + '.py')), *args],
                       cwd=str(ROOT), capture_output=True, text=True,
                       encoding='utf-8', errors='replace', timeout=600)
    out = ((r.stdout or '') + (r.stderr or '')).strip().splitlines()
    return r.returncode, out[-2:] if out else []


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
    logargs = [args.log] if args.log else []

    if not args.skip_s1:
        print('[step2] S1 gen_cpp_canon')
        r = subprocess.run([sys.executable,
                            str(ROOT / 'tools/csp_export/gen_cpp_canon.py')],
                           cwd=str(ROOT))
        if r.returncode != 0:
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
            h1 = _src_hash()
            for name in applied:
                _run_stage(name, logargs + ['--apply'])
            if _src_hash() == h1:
                print(f'[step2] S5 PASS: round {rnd} byte-identical (fixpoint)')
                stable = True
                break
            print(f'[step2] S5 round {rnd}: tree changed, re-running')
        if not stable:
            print('[step2] S5 FAIL: no byte fixpoint within '
                  f'{S5_MAX_ROUNDS} rounds')
            failures.append(('S5 idempotency', 'non-convergent'))

    print(f'[step2] canon 声明流水线完成: stages applied={len(applied)} '
          f'failures={len(failures)}')
    for name, rc in failures:
        print(f'  !! {name}: rc={rc}')
    if failures:
        sys.exit(1)
    print('[step2] DONE')


if __name__ == '__main__':
    main()
