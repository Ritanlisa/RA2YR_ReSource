#!/usr/bin/env python
"""t14_globals.py — CSP 类类型全局变量回写 IDA（py_exec_file 运行）

门: struct 存在（mangled_alias 感知）+ 名字可寻址 + 数据项（非函数）。
幂等: 同型跳过。结果写 .omo/t14_globals_apply_result.json。
"""
import json
import ida_nalt
import ida_typeinf
import ida_funcs
import ida_bytes
import idaapi
import idc

# 全局变量类型回写（正式化 2026-09-03 的 92 个临时 pass）
# 数据源: type_map symbol_name 键（无 '::'/'.member'/伪锚）
# 门: struct 存在（alias 感知）+ 名字可寻址 + 地址是数据项
ROOT = r'D:\RA2YR_ReSource'
tm = json.load(open(ROOT + r'\type_map.json', encoding='utf-8'))['type_map']
alias = json.load(open(ROOT + r'\anchors\mangled_alias.json', encoding='utf-8'))
til = ida_typeinf.get_idati()

PRIM = {'int','void','VOID_PTR','_DWORD','bool','char','unsigned int','long','short','float','double','BYTE','WORD','DWORD','QWORD','__int16','__int32','unsigned char','signed int','signed char','_BYTE','_WORD','_BOOL8','_QWORD','char*','TOP'}

targets = {}
for k, v in tm.items():
    if '::' in k or k.startswith('(') or '.member' in k or k.endswith(':this') or k.endswith('.return'):
        continue
    t = v.get('type', '')
    if not t or t in PRIM:
        continue
    targets[k] = t
print('class-typed named globals:', len(targets))

tif_cache = {}
def ptr_tif(base):
    legal = alias.get(base, base)
    key = legal + ' *'
    if key in tif_cache:
        return tif_cache[key]
    tif = ida_typeinf.tinfo_t()
    r = ida_typeinf.parse_decl(tif, til, key + ';', 0)
    res = tif if (r is not None and tif.dstr()) else None
    tif_cache[key] = res
    return res

applied = 0
skip_nogate = 0
skip_unresolvable = 0
skip_code = 0
skip_same = 0
fail = 0
fails = []
for name, base in sorted(targets.items()):
    tif = ptr_tif(base.rstrip('*').strip())
    if tif is None:
        skip_nogate += 1
        continue
    ea = idc.get_name_ea(idaapi.BADADDR, name)
    if ea == idaapi.BADADDR or ea is None:
        skip_unresolvable += 1
        continue
    f = ida_funcs.get_func(ea)
    if f is not None and f.start_ea == ea:
        skip_code += 1
        continue
    cur = ida_typeinf.tinfo_t()
    if ida_nalt.get_tinfo(cur, ea) and cur.dstr() == tif.dstr():
        skip_same += 1
        continue
    try:
        ok = ida_nalt.set_tinfo(ea, tif)
        if ok:
            applied += 1
        else:
            fail += 1
            if len(fails) < 5:
                fails.append((name, 'set_tinfo refused'))
    except Exception as e:
        fail += 1
        if len(fails) < 5:
            fails.append((name, repr(e)[:60]))

out = {'targets': len(targets), 'applied': applied, 'skip_nogate': skip_nogate,
       'skip_unresolvable': skip_unresolvable, 'skip_code': skip_code,
       'skip_same': skip_same, 'fail': fail, 'fails': fails}
print(json.dumps(out, indent=1))
json.dump(out, open(ROOT + r'\.omo\t14_globals_apply_result.json', 'w', encoding='utf-8'), indent=1)
