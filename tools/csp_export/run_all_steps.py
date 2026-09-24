#!/usr/bin/env python3
"""总控: 顺序执行 Step 1-5。

用法:
  python tools/csp_export/run_all_steps.py [--fresh-export] [--no-commit]
    --fresh-export  Step3 清状态全量重导 (重做场景)
    --no-commit     Step5 只报告不提交

各步细节见 step1_csp.py / step2_canon.py / step3_export.py /
step4_bodies.py / step5_baseline.py 的 docstring。
"""
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
STEPS = ['step1_csp.py', 'step2_canon.py', 'step3_export.py',
         'step4_bodies.py', 'step5_baseline.py']


def assert_braces_balanced():
    """HARD GATE (user directive): every src cpp/hpp must end at depth
    {0,1,2}. Violations abort the chain — brace damage never passes
    silently again."""
    sys.path.insert(0, str(ROOT / 'tools' / 'csp_export'))
    from _blockspan import block_walker
    bad = []
    for p in sorted((ROOT / 'src').rglob('*')):
        if p.suffix not in ('.cpp', '.hpp') or '_generated' in str(p):
            continue
        try:
            lines = p.read_text(encoding='latin-1', errors='replace').split('\n')
        except OSError:
            continue
        d = sum(block_walker(lines))
        if d not in (0, 1, 2):
            bad.append((d, str(p)))
    if bad:
        print('!! 花括号断言失败 (不平衡 cpp/hpp):')
        for d, p in bad[:20]:
            print(f'   depth={d:+d} {p}')
        sys.exit(10)
    print('[gate] 花括号平衡断言: ALL PASS')


def main():
    extra = [a for a in sys.argv[1:]]
    only = None
    if '--only' in extra:
        only = extra[extra.index('--only') + 1]
    for s in STEPS:
        if only and only not in s:
            continue
        print(f'======== {s} ========')
        args = [sys.executable, str(ROOT / 'tools' / 'csp_export' / s)]
        if s == 'step3_export.py' and '--fresh-export' in extra:
            args.append('--fresh')
        if s == 'step5_baseline.py' and '--no-commit' in extra:
            args.append('--no-commit')
        r = subprocess.run(args, cwd=str(ROOT))
        if r.returncode != 0:
            print(f'!! {s} 退出码 {r.returncode} — 链停止')
            sys.exit(r.returncode)
        if s == 'step4_bodies.py':
            assert_braces_balanced()
    print('======== ALL STEPS DONE ========')


if __name__ == '__main__':
    main()
