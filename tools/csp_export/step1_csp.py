#!/usr/bin/env python3
"""Step 1 - CSP 约束求解与证据供给。

内容:
  a) register_offset_members --apply   把树内 offset 访问证据注册进
     member_types/member_lookup/signals（含 ml->mt sync、宽度和 ×4 缩放）,
     供给 CSP/canon 的成员事实。
  b) --engine 时完整重跑 T7-T21 引擎 (python -m tools.type_infer.engine),
     重建 type_map.json。默认不跑（type_map 现值有效），只做供给。
  c) 校验: type_map 可加载、关键通道键计数报告。

后续修改点: 供给规则在 register_offset_members.py（缩放/命名/覆盖优先级）。
"""
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]


def main():
    ap = sys.argv[1:]
    engine = '--engine' in ap
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
    if engine:
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
