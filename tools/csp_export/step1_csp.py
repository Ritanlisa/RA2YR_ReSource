#!/usr/bin/env python3
"""Step 1 - CSP 约束求解与证据供给。

内容:
  a) register_offset_members --apply   把树内 offset 访问证据注册进
     member_types/member_lookup/signals（含 ml->mt sync、宽度和 ×4 缩放）,
     供给 CSP/canon 的成员事实。
  b) --engine 时完整重跑 T7-T21 引擎 (python -m tools.type_infer.engine),
     重建 type_map.json。默认不跑（type_map 现值有效），只做供给。
  c) --auto 时全自动链 (T4b): extract(T4a 驱动, IDA-MCP 在线约束提取)
     → 成员证据注册(同 a, 引擎锚点先于引擎刷新) → promote_constraints.py
     (结构校验 + 备份 + 原子替换 + promote manifest + 引擎重跑 +
     verify_csp + 通道计数, 引擎失败自动回滚)。任一环失败 fail-closed
     非零退出。
  d) 校验: type_map 可加载、关键通道键计数报告。

后续修改点: 供给规则在 register_offset_members.py（缩放/命名/覆盖优先级）;
提升/回滚/幂等语义在 promote_constraints.py。
"""
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]


def run_checked(label: str, cmd: list) -> None:
    print(f'[step1] {label}')
    r = subprocess.run(cmd, cwd=str(ROOT))
    if r.returncode != 0:
        print(f'[step1] FAIL: {label} exit={r.returncode}', file=sys.stderr)
        sys.exit(r.returncode)


def main():
    ap = sys.argv[1:]
    engine = '--engine' in ap
    auto = '--auto' in ap

    if auto:
        # T4a: IDA-MCP 在线约束提取 → 刷新 .rtti.json (fail-closed, 离线非零)
        run_checked('约束提取 (T4a extract_constraints_via_mcp, 需 IDA 在线, ~10min)',
                    [sys.executable, str(ROOT / 'tools/csp_export/extract_constraints_via_mcp.py')])

    print('[step1] 类参与注册 (register_class_participation)')
    subprocess.run([sys.executable,
                    str(ROOT / 'tools/csp_export/register_class_participation.py'), '--apply'])
    print('[step1] 成员证据供给 (register_offset_members)')
    subprocess.run([sys.executable,
                    str(ROOT / 'tools/csp_export/register_offset_members.py'),
                    '--apply'], check=True)
    print('[step1] ml 名字对齐 canon')
    subprocess.run([sys.executable,
                    str(ROOT / 'tools/csp_export/register_offset_members.py'),
                    '--align-ml', '--apply'], check=True)

    if auto:
        # T4b: 校验 → 备份 → 原子替换 → manifest → 引擎 → verify_csp → 通道计数
        run_checked('约束提升+引擎重跑链 (T4b promote_constraints)',
                    [sys.executable, str(ROOT / 'tools/csp_export/promote_constraints.py')])
    elif engine:
        print('[step1] 完整引擎重跑 (耗时长)')
        subprocess.run([sys.executable, '-m', 'tools.type_infer.engine'],
                       cwd=str(ROOT), check=True)

    import json
    tm = json.loads((ROOT / 'type_map.json').read_text(encoding='utf-8'))['type_map']
    stack = sum(1 for k in tm if '::stack_+' in k)
    param = sum(1 for k in tm if '::param' in k)
    this = sum(1 for k in tm if k.count(':') == 1 and k.endswith(':this'))
    print(f'[step1] type_map={len(tm)} stack通道={stack} param通道={param} '
          f'this通道={this}')
    print('[step1] DONE')


if __name__ == '__main__':
    main()
