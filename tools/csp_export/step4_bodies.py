#!/usr/bin/env python3
"""Step 4 - CSP 驱动的 OO 转换: 函数体整体重生成 + 成员引用机械改写。

内容 (顺序):
  a) regen_bodies_from_export --apply
     每个函数体 := 新快照 Hex-Rays 伪码原样落地 (旧体/桩/包装括号全部
     抛弃), 决策写 .omo/regen_bodies_manifest.json
  b) gen_cpp_canon (canon 表与快照签名一致)
  c) rewrite_member_refs (ptr+int -> 成员引用, canon 名)
  d) fix_addr_violations --no-verify 循环到不动点
     (R1 MEMORY / R2/R3 this+N / R5 类型化局部接收者 / R6 裸解引用)

后续修改点: 体落地规则在 regen_bodies_from_export.py;
改写词汇在 fix_addr_violations.py + _vtable.py。
"""
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
TOOLS = str(ROOT / 'tools' / 'csp_export')


def run(script, *args, grep=None):
    r = subprocess.run([sys.executable, str(Path(TOOLS) / script), *args],
                       capture_output=True, text=True, encoding='utf-8',
                       errors='replace', cwd=str(ROOT))
    out = (r.stdout or '') + (r.stderr or '')
    for ln in out.split('\n'):
        if grep and any(g in ln for g in grep):
            print('   ', ln.strip())
    return out


def main():
    print('[step4] a. 函数体整体重生成')
    run('regen_bodies_from_export.py', '--apply',
        grep=('bodies replaced', 'bodies kept', 'manifest'))
    print('[step4] a2. 验证器快照缓存同步 (与 cpp 同源)')
    run('sync_ida_cache.py', '--apply',
        grep=('cache updated', 'identical kept'))
    print('[step4] a3. 花括号 sanitizer (单一权威, 修 regen 残留不平衡)')
    run('fix_leaks_general.py', '--apply',
        grep=('close-braces', 'files changed'))
    print('[step4] b. canon 重生成')
    run('gen_cpp_canon.py', grep=('classes emitted', 'members table'))
    # (rewrite_member_refs 已退役: 它从 ida_cache 桶重建文件, 与 regen 的
    #  树内落地数据源打架 — gap2_global_defs 0x597D50 案。体来源唯一化:
    #  regen 落地 + fix_addr 树内改写 + register 供给。)
    print('[step4] c. 声明前置到首用点 (lower_temp_decls)')
    run('lower_temp_decls.py', grep=('moved', 'decls', 'DONE'))
    print('[step4] d. fix_addr 到不动点')
    for rnd in range(1, 7):
        out = run('fix_addr_violations.py', '--no-verify', '--workers', '8',
                  grep=('files changed', 'real functions fixed'))
        fixed = 0
        for ln in out.split('\n'):
            if 'real functions fixed:' in ln:
                try:
                    fixed = int(ln.strip().rstrip(',').split(':')[-1])
                except ValueError:
                    pass
        print(f'    round {rnd}: fixed={fixed}')
        if fixed == 0:
            break
    print('[step4] DONE')


if __name__ == '__main__':
    main()
