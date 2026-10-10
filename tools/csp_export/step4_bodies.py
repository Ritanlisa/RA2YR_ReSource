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
    print('[step4] a0. 孤儿体清除 (regen span 前置清洁)')
    run('fix_orphan_bodies.py', '--apply',
        grep=('orphan bodies',))
    print('[step4] a. 函数体整体重生成')
    run('regen_bodies_from_export.py', '--apply',
        grep=('bodies replaced', 'bodies kept', 'manifest'))
    print('[step4] a2. 验证器快照缓存同步 (与 cpp 同源)')
    run('sync_ida_cache.py', '--apply',
        grep=('cache updated', 'identical kept'))
    print('[step4] a3. 花括号 sanitizer (单一权威, 修 regen 残留不平衡)')
    run('fix_leaks_general.py', '--apply',
        grep=('close-braces', 'files changed'))
    print('[step4] a4b. //DUPDEF 注释尸块清除 (G42.57 W20 用户指令: 不留 stub 尸块)')
    run('fix_dupdef_corpses.py', '--apply',
        grep=('corpses removed',))
    print('[step4] a4c. IDA 字节/字宏值语义消除 (IDA_BYTE/LOBYTE/HIWORD... 读形掩码/写形 RMW;'
          ' 守卫: #define 行/括号内 for 头/指针左值; 安全网 regress 紧随)')
    run('fix_ida_byte_value.py', '--apply', grep=('fixed:',))
    run('fix_ida_mem_macros.py', '--apply', grep=('fixed:',))
    run('fix_ida_mem_regress.py', '--apply', grep=('reverted:',))
    print('[step4] a5. this 形参剔除 (成员形态非法参数)')
    run('fix_this_param.py', '--apply',
        grep=('this-params',))
    print('[step4] b. canon 重生成')
    run('gen_cpp_canon.py', grep=('classes emitted', 'members table'))
    # (rewrite_member_refs 已退役: 它从 ida_cache 桶重建文件, 与 regen 的
    #  树内落地数据源打架 — gap2_global_defs 0x597D50 案。体来源唯一化:
    #  regen 落地 + fix_addr 树内改写 + register 供给。)
    print('[step4] c. 声明前置到首用点 (lower_temp_decls)')
    run('lower_temp_decls.py', grep=('moved', 'decls', 'DONE'))
    print('[step4] d. fix_addr 到不动点 (workers<=3 内存纪律)')
    for rnd in range(1, 7):
        out = run('fix_addr_violations.py', '--no-verify', '--workers', '3',
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
    print('[step4] e0. e4 头清理 (超界偏移/方法名成员/垃圾行)')
    run('clean_e4_headers.py', '--apply', grep=('cleaned',))
    print('[step4] e. e4 宇宙声明供给')
    run('upgrade_e4_flat_classes.py', '--apply',
        grep=('flat upgrade',))
    run('supply_e4_class_decls.py', '--apply',
        grep=('headers created', 'member-def classes'))
    run('fix_e4_decl_syntax.py', '--apply',
        grep=('decl syntax fixes', 'ctor defs'))
    run('align_tree_decls.py', '--e4', '--force', '--apply',
        grep=('signature drift',))
    run('gen_e4_fwd.py', '--apply',
        grep=('fwd declarations',))
    print('[step4] f. 符号承载 (vtable 反引号 + 裸全局 + vocab)')
    run('gen_vtable_symbols.py', '--apply',
        grep=('vtable symbols',))
    run('gen_ida_globals.py', '--apply',
        grep=('bare globals',))
    print('[step4] DONE')

if __name__ == '__main__':
    main()
