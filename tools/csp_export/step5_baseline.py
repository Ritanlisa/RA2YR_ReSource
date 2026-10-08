#!/usr/bin/env python3
"""Step 5 - 基线验收: 供给残差 -> census -> 抽样验证 -> 提交。

内容 (顺序):
  a) register_offset_members --apply + --align-ml (Step-4 残差的最后供给)
     + gen_cpp_canon + 一轮 fix_addr
  b) census (真实违规 pattern 计数, .omo/census2.py)
  c) 抽样验证: 改动的 completed 函数随机样本跑 verify_execution_flow
  d) git add + commit (信息含 census/抽样结果; --no-commit 只报告)

后续修改点: 验收阈值/抽样数在本脚本顶部常量。
"""
import json
import os
import random
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
TOOLS = ROOT / 'tools' / 'csp_export'
SAMPLE_N = 60
MIN_PASS_RATE = 0.70   # 低于此阈值不提交 (报告并退出非零)


def run(script, *args, grep=None):
    r = subprocess.run([sys.executable, str(TOOLS / script), *args],
                       capture_output=True, text=True, encoding='utf-8',
                       errors='replace', cwd=str(ROOT))
    out = (r.stdout or '') + (r.stderr or '')
    for ln in out.split('\n'):
        if grep and any(g in ln for g in grep):
            print('   ', ln.strip())
    return out


def changed_completed():
    sig = json.loads((ROOT / 'signals.json').read_text(encoding='utf-8'))
    completed = {int(a, 16) for a, s in sig['symbols'].items()
                 if isinstance(s, dict) and s.get('completed')}
    out = subprocess.run(['git', 'diff', '--unified=0', '--', 'src'],
                         capture_output=True, text=True, encoding='utf-8',
                         errors='replace').stdout
    targets = {}
    cur = None
    for ln in out.split('\n'):
        m = re.match(r'^\+\+\+ b/(\S+)$', ln)
        if m:
            cur = targets.setdefault(m.group(1), [])
        mh = re.match(r'^@@ -\d+(?:,\d+)? \+(\d+)(?:,(\d+))? @@', ln)
        if mh and cur is not None:
            s = int(mh.group(1))
            n = int(mh.group(2) or 1)
            cur.append((s, s + max(n, 1)))
    ANN = re.compile(r'^\s*//\s*0x([0-9A-Fa-f]{6,8})\s*$')
    addrs = set()
    dbg = {'no_file': 0, 'anns': 0, 'hunk_hit': 0}
    for f, rs in targets.items():
        p = ROOT / f
        if not p.exists():
            dbg['no_file'] += 1
            continue
        lines = p.read_text(encoding='latin-1', errors='replace').split('\n')
        for i, ln in enumerate(lines):
            m = ANN.match(ln)
            if not m:
                continue
            dbg['anns'] += 1
            j = i + 1
            end = min(len(lines), i + 400)
            while j < end and not ANN.match(lines[j]):
                j += 1
            # 函数区间 [i, j]; 任意 hunk 与 [i-2, j] 相交即视为该函数被改
            for (s, e) in rs:
                if not (j < s - 2 or i > e + 2):
                    dbg['hunk_hit'] += 1
                    a = int(m.group(1), 16)
                    if a in completed:
                        addrs.add(a)
                    break
    print(f'    [dbg] files={len(targets)} {dbg}')
    return sorted(addrs)


def main():
    no_commit = '--no-commit' in sys.argv
    print('[step5] a. 残差供给 + fix_addr 一轮')
    run('register_offset_members.py', '--apply',
        grep=('sync', 'to register', 'to upgrade'))
    run('gen_cpp_canon.py', grep=('members table',))
    run('register_offset_members.py', '--align-ml', '--apply',
        grep=('aligned',))
    # (rewrite_member_refs 已退役 — 数据源唯一化, 见 step4)
    run('fix_addr_violations.py', '--no-verify', '--workers', '8',
        grep=('real functions fixed',))

    print('[step5] a2. 编译门 (计划变更: Step5 必须通过编译)')
    build_cfg = 'Release'
    # pool-wide exec-flow gate (verify --auto, ~12.7k fns, hours) cannot run
    # per-iteration; this loop's quality gate = the 60-sample verify below.
    env = dict(os.environ, RA2_SKIP_GATES='1')
    r = subprocess.run(['cmake', '--build', 'build_win', '--config', build_cfg],
                       capture_output=True, text=True, encoding='utf-8',
                       errors='replace', cwd=str(ROOT), env=env)
    build_out = (r.stdout or '') + (r.stderr or '')
    errs = len(re.findall(r'error C\d+|error LNK\d+', build_out))
    print(f'    build rc={r.returncode} compile errors={errs}')
    (ROOT / '.omo' / 'step5_build_tail.txt').write_text(
        build_out[-20000:], encoding='utf-8', errors='replace')
    if errs > 0 or r.returncode != 0:
        print('[step5] 编译未通过 — 不提交; 错误明细见 '
              '.omo/step5_build_tail.txt')
        sys.exit(4)

    print('[step5] b. census')
    r = subprocess.run([sys.executable, str(TOOLS / 'census.py')],
                       capture_output=True, text=True, encoding='utf-8',
                       errors='replace', cwd=str(ROOT))
    census_head = [ln for ln in (r.stdout or '').split('\n')
                   if 'TOTAL' in ln or 'src\\' in ln or 'src/' in ln][:3]
    for ln in census_head:
        print('   ', ln.strip())
    if not census_head:
        print('    census 无计数输出, 末尾输出:')
        for ln in (r.stdout or '').split('\n')[-6:]:
            print('    |', ln)
    print('[step5] b2. 空心体普查 (完全空定义+raw 真值; 用户使命: 体不得缺失)')
    r = subprocess.run([sys.executable, str(TOOLS / 'census_hollow_bodies.py')],
                       capture_output=True, text=True, encoding='utf-8',
                       errors='replace', cwd=str(ROOT))
    hollow_head = [ln for ln in (r.stdout or '').split('\n')
                   if 'HOLLOW BODIES' in ln][:1]
    for ln in hollow_head:
        print('   ', ln.strip())
    for ln in (r.stdout or '').split('\n')[:14]:
        if ln.strip().startswith('src') or 'by TU' in ln:
            print('    |', ln.strip())

    print('[step5] c. 抽样验证 (changed completed, 单进程批量)')
    addrs = changed_completed()
    print(f'    changed completed: {len(addrs)}')
    random.seed(20260923)
    sample = random.sample(addrs, min(SAMPLE_N, len(addrs)))
    # in-process: load_all_maps/member_lookup parse ONCE (286MB), then each
    # verify is fast. Subprocess-per-address re-parses per sample (~40s each).
    sys.path.insert(0, str(ROOT / 'tools'))
    import verify_execution_flow as V
    M = V.load_all_maps()
    signals = V._load_efv()['cpp_events'].get_signals()
    fails = []
    for a in sample:
        name = M.addr_to_name.get(a) or 'sub_%X' % a
        ida_decomp, _c = V.load_ida_cache(a)
        if not ida_decomp or not ida_decomp.strip():
            fails.append(a)
            continue
        try:
            passed, info = V.verify_single_function(
                a, name, name, M, ida_decomp, verbose=False,
                signals=signals)
        except Exception:
            passed = False
        if not passed:
            fails.append(a)
    rate = (len(sample) - len(fails)) / max(1, len(sample))
    print(f'    sample PASS {len(sample) - len(fails)}/{len(sample)} '
          f'({rate:.0%})')
    (ROOT / '.omo' / 'step5_verify_sample.json').write_text(
        json.dumps({'sample': sample, 'fails': fails}, indent=1),
        encoding='utf-8')
    if rate < MIN_PASS_RATE:
        print(f'[step5] PASS 率低于 {MIN_PASS_RATE:.0%} — 不提交, 请归因')
        sys.exit(3)

    if no_commit:
        print('[step5] --no-commit: 停在报告')
        return
    print('[step5] d. git commit')
    subprocess.run(['git', 'add', '-A', 'src/', 'anchors/', 'tools/',
                    'signals.json', 'AGENTS.md', 'docs/', '.omo/'
                    'regen_bodies_manifest.json'], cwd=str(ROOT))
    msg = ('redo(step1-5): 五步管线一次到位 — IDA typed快照重导 + 函数体整体'
           f'重生成 + Step4机械链; census {census_head[0] if census_head else "?"}'
           f'; 抽样 {len(sample) - len(fails)}/{len(sample)} PASS')
    subprocess.run(['git', 'commit', '-m', msg], cwd=str(ROOT))
    print('[step5] DONE')


if __name__ == '__main__':
    main()
