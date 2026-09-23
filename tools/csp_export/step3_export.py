#!/usr/bin/env python3
"""Step 3 - IDA 全量导出 (伪代码 + 汇编, typed 快照)。

内容: tools/type_infer/ida_full_export.py --phase functions + index
  - 断点续跑 (.omo/full_export_state.json)
  - --fresh: 清 funcs_done 状态并归档旧导出后全量重导 (重做用)

前置: IDA 在线 (127.0.0.1:13337), 脚本内会探测, 离线即退出。

后续修改点: 导出格式/分桶在 ida_full_export.py (phase_functions)。
"""
import os
import shutil
import subprocess
import sys
import time
import urllib.request
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
STATE = ROOT / '.omo' / 'full_export_state.json'
EXPORT = ROOT / 'decompile-results' / 'full_export'


def ida_online():
    try:
        req = urllib.request.Request(
            'http://127.0.0.1:13337/mcp',
            data=json.dumps({"jsonrpc": "2.0", "id": 1, "method":
                             "tools/call", "params": {"name":
                                                      "server_health",
                                                      "arguments": {}}}).encode(),
            headers={"Content-Type": "application/json"})
        r = json.loads(urllib.request.urlopen(req, timeout=8).read())
        return '"ok"' in str(r)
    except Exception:
        return False


import json  # noqa: E402


def main():
    fresh = '--fresh' in sys.argv
    if not ida_online():
        print('[step3] IDA 离线 (127.0.0.1:13337 无响应) — 按 AGENTS 规则'
              '不重导，退出非零')
        sys.exit(2)
    print('[step3] IDA 在线')
    if fresh:
        st = json.loads(STATE.read_text(encoding='utf-8'))
        st['funcs_done'] = []
        STATE.write_text(json.dumps(st), encoding='utf-8')
        if EXPORT.exists():
            arc = ROOT / 'decompile-results' / ('full_export_old_%s'
                                                % time.strftime('%m%d%H%M'))
            shutil.move(str(EXPORT), str(arc))
            print(f'[step3] 旧导出归档 -> {arc.name}')
    for phase in ('globals', 'classes', 'functions', 'index'):
        print(f'[step3] phase {phase}')
        subprocess.run([sys.executable,
                        str(ROOT / 'tools/type_infer/ida_full_export.py'),
                        '--phase', phase], check=True)
    idx = json.loads((EXPORT / 'index.json').read_text(encoding='utf-8'))
    hr = 0
    for p in (EXPORT / 'src').glob('*.cpp'):
        hr += p.read_text(encoding='utf-8', errors='replace').count(
            '// ---- Hex-Rays ----')
    print(f'[step3] index={len(idx)} Hex-Rays 块={hr}')
    print('[step3] DONE')


if __name__ == '__main__':
    main()
