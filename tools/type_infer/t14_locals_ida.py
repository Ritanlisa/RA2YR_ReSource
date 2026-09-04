#!/usr/bin/env python
"""t14_locals_ida.py — CSP 局部变量类型回写 IDA（驱动端，在 IDA 内执行）

经 py_exec_file 运行。每轮处理一批函数（批大小由 .omo/t14_locals_batch.json
控制，默认 500），断点续跑（checkpoint 记已完成函数）。
进度写入 .omo/t14_trace.log（文件追踪——print 输出在进程意外死亡时不可见）。

匹配（确定性，无统计推断）：
  SSA   : lvar.defea → 指令头 → work['ssa'][hex(head)][regname]
          寄存器名经 get_mreg_name 规整（剥 '^N' 版本后缀）；fallback 试 defea 本身。
  Stack : lvar.get_stkoff() → work['stack'][hex(stkoff)]
  冲突  : 同一 lvar 命中 ≥2 不同类型 → 跳过（映射歧义弃权，非 CSP 矛盾）

应用：纯数据 API restore_user_lvar_settings + push_back + save_user_lvar_settings。
  ⚠ 只追加、绝不 clear/重排 vec.lvvec：operator[] 返回内部存储引用，
    持有引用跨 clear() 再 push_back = use-after-free（曾致 IDA 连崩）。
  ⚠ 本脚本不做 verify（str(cf) 等重操作曾在批处理末尾引发崩溃），
    验证由外部经 py_eval 单独执行。
"""
import json
import os
import time

import ida_hexrays
import ida_typeinf
import idc
import idaapi

ROOT = r'D:\RA2YR_ReSource'
WORK_PATH = ROOT + r'\.omo\t14_locals_work.json'
CHECKPOINT_PATH = ROOT + r'\.omo\t14_locals_checkpoint.json'
BATCH_PATH = ROOT + r'\.omo\t14_locals_batch.json'
TRACE = ROOT + r'\.omo\t14_trace.log'


def trace(msg):
    with open(TRACE, 'a', encoding='utf-8') as f:
        f.write('%s %s\n' % (time.strftime('%H:%M:%S'), msg))


def _loc_key(ill):
    vdl = ill.location
    so = vdl.stkoff() if vdl.has_stkoff() else None
    return (vdl.reg1(), vdl.reg2(), so, ill.defea)


def get_type_str(lv):
    try:
        t = lv.type
        return t().dstr() if callable(t) else t.dstr()
    except Exception:
        return ''


def is_class_ptr_str(s):
    s = s.strip()
    return (s.endswith('*') and len(s) > 2 and s[0:1].isalpha()
            and ' ' not in s[:-1].rstrip('*').strip()
            and s.split()[0][:1].isupper())


_TIF_CACHE = {}


def tif_for(cls_name):
    key = cls_name + ' *'
    tif = _TIF_CACHE.get(key)
    if tif is None:
        tif = ida_typeinf.tinfo_t()
        r = ida_typeinf.parse_decl(tif, ida_typeinf.get_idati(), key + ';', 0)
        if r is None or not tif.dstr():
            return None
        _TIF_CACHE[key] = tif
    return tif


def load_json(path, default):
    try:
        with open(path, 'r', encoding='utf-8') as f:
            return json.load(f)
    except OSError:
        return default


def save_json_atomic(obj, path):
    tmp = path + '.tmp'
    with open(tmp, 'w', encoding='utf-8') as f:
        json.dump(obj, f, separators=(',', ':'))
    os.replace(tmp, path)


# ---------------------------------------------------------------- 主流程

work = load_json(WORK_PATH, None)
if not work:
    trace('NO WORK FILE')
else:
    cp = load_json(CHECKPOINT_PATH, {'done': [], 'stats': {}})
    done = set(cp.get('done', []))
    stats = cp.get('stats', {})
    if not isinstance(stats, dict):
        stats = {}
    for key in ('applied', 'noop_same', 'deferred_existing', 'skip_stale',
                'lvar_conflict', 'decompile_fail', 'funcs_applied',
                'parse_fail', 'save_fail'):
        stats.setdefault(key, 0)

    batch_cfg = load_json(BATCH_PATH, {})
    batch_n = int(batch_cfg.get('count', 500))

    pending = []
    for k in sorted(work):
        if k not in done:
            pending.append(k)
    todo = pending[:batch_n]
    trace('BATCH begin pending=%d batch=%d' % (len(pending), len(todo)))

    for fkey in todo:
        try:
            ea = int(fkey, 16)
        except ValueError:
            done.add(fkey)
            continue
        try:
            cf = ida_hexrays.decompile(ea)
        except Exception:
            stats['decompile_fail'] += 1
            done.add(fkey)
            continue
        if cf is None:
            stats['decompile_fail'] += 1
            done.add(fkey)
            continue

        payload = work[fkey]
        ssa_map = payload.get('ssa', {})
        stack_map = payload.get('stack', {})
        lvs = cf.get_lvars()
        entries = []
        for i in range(len(lvs)):
            lv = lvs[i]
            if lv.is_arg_var or lv.is_fake_var or lv.width != 4:
                continue
            d = lv.defea
            cands = []
            try:
                isreg = lv.is_reg_var()
            except Exception:
                isreg = False
            if isreg and d != idaapi.BADADDR and d < 0xFFFFFFFF:
                try:
                    reg = ida_hexrays.get_mreg_name(lv.get_reg1(), 4).split('^')[0]
                except Exception:
                    reg = None
                if reg:
                    for probe in (hex(idc.get_item_head(d)), hex(d)):
                        ent = ssa_map.get(probe)
                        if ent and reg in ent:
                            t = ent[reg]
                            if t:
                                cands.append(t)
                            break
            try:
                so = lv.get_stkoff()
            except Exception:
                so = -1
            if so != -1 and hex(so) in stack_map:
                t = stack_map[hex(so)]
                if t:
                    cands.append(t)
            uniq = set(cands)
            if len(uniq) != 1:
                if len(uniq) > 1:
                    stats['lvar_conflict'] += 1
                continue
            target = uniq.pop()
            cur = get_type_str(lv)
            if cur.replace(' ', '') == (target + '*').replace(' ', ''):
                stats['noop_same'] += 1
                continue
            if is_class_ptr_str(cur) and cur.rstrip('*').strip() != target:
                stats['deferred_existing'] += 1
                continue
            loc = ida_hexrays.lvar_locator_t(lv.location, d)
            entries.append((lv.name, loc, target))

        if entries:
            vec = ida_hexrays.lvar_uservec_t()
            try:
                ida_hexrays.restore_user_lvar_settings(vec, ea)
            except Exception:
                pass
            existing = {}
            for i in range(vec.lvvec.size()):
                info = vec.lvvec[i]
                try:
                    ts = info.type.dstr() if info.type else ''
                except Exception:
                    ts = ''
                existing[_loc_key(info.ll)] = ts
            pushed = 0
            for (name, loc, cls_name) in entries:
                if _loc_key(loc) in existing:
                    stats['skip_stale'] += 1
                    continue
                tif = tif_for(cls_name)
                if tif is None:
                    stats['parse_fail'] += 1
                    continue
                info = ida_hexrays.lvar_saved_info_t()
                info.name = name
                info.type = tif
                info.ll = loc
                vec.lvvec.push_back(info)
                pushed += 1
            if pushed:
                ida_hexrays.save_user_lvar_settings(ea, vec)
                stats['applied'] += pushed
                stats['funcs_applied'] += 1
        done.add(fkey)

    save_json_atomic({'done': sorted(done), 'stats': stats}, CHECKPOINT_PATH)
    remaining = 0
    for k in work:
        if k not in done:
            remaining += 1
    trace('BATCH done total_applied=%d funcs_applied=%d remaining=%d' % (
        stats['applied'], stats['funcs_applied'], remaining))
    trace('STATS ' + json.dumps(stats))
