#!/usr/bin/env python3
"""Step 2 - CSP 符号 -> C++ 签名转写 (canon 层)。

内容: gen_cpp_canon.py 重生成
  - src/csp_canon/classes.hpp (拓扑排序类层次 + 成员 + 方法)
  - src/csp_canon/functions.hpp / globals.hpp
  - anchors/csp_canon_manifest.json (19K 签名溯源)
  - anchors/csp_canon_members.json (成员唯一权威表)

后续修改点: 类宇宙/四层命名优先级/基类解析在 gen_cpp_canon.py。
"""
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]


def main():
    print('[step2] gen_cpp_canon')
    subprocess.run([sys.executable,
                    str(ROOT / 'tools/csp_export/gen_cpp_canon.py')],
                   check=True)
    import json
    cc = json.loads((ROOT / 'anchors' / 'csp_canon_members.json')
                    .read_text(encoding='utf-8'))
    man = json.loads((ROOT / 'anchors' / 'csp_canon_manifest.json')
                     .read_text(encoding='utf-8'))
    print(f'[step2] canon 类={len(cc)} manifest 签名={len(man)}')
    print('[step2] DONE')


if __name__ == '__main__':
    main()
