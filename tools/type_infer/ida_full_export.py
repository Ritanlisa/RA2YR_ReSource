#!/usr/bin/env python3
"""ida_full_export.py — 可携带 IDB 快照导出器（无需 IDA 的后续工作基座）。

目标: 把 IDA 的全部知识导出为带地址映射的 cpp/hpp 参考源——类定义
（成员偏移/vtable/ctor 地址）、全部函数（Hex-Rays 伪代码 + IDA 汇编
注释）、数据段全局变量（地址/类型）。导出物是**参考源**而非可编译源
（真实可编译翻译在 src/ 树, 由门控体系管理）。

目录:
  decompile-results/full_export/
    README.md            — 使用说明
    index.json           — addr → {file, kind, name} 全量索引
    globals.hpp          — 数据段全局变量
    include/<Class>.hpp  — 类定义（含未布局类的最小声明）
    src/<bucket>.cpp     — 函数桶（类名桶 + 地址桶）

阶段（全部断点续跑, 状态 .omo/full_export_state.json）:
  G 全局变量: list_globals 翻页全量 → 按段分类 → 数据段写 globals.hpp
  C 类头文件: class_db/class_layouts/vtable/ctor 本地数据 → include/
  F 函数体:   逐函数 export_funcs(伪代码) + disasm(汇编), 桶文件输出

用法:
  python tools/type_infer/ida_full_export.py --phase globals
  python tools/type_infer/ida_full_export.py --phase classes
  python tools/type_infer/ida_full_export.py --phase functions [--limit N]
"""
import argparse
import json
import os
import re
import sys
import time

_HERE = os.path.dirname(os.path.abspath(__file__))
PROJ = os.path.dirname(os.path.dirname(_HERE))
sys.path.insert(0, _HERE)

from ida_apply_t14 import call  # noqa: E402

OUT = os.path.join(PROJ, "decompile-results", "full_export")
STATE = os.path.join(PROJ, ".omo", "full_export_state.json")
FUNCS_CACHE = os.path.join(PROJ, ".omo", "full_export_funcs.json")

# 段范围（gamemd.exe, imagebase 0x400000）
SEG_TEXT = (0x401000, 0x7E1000)
SEG_RDATA = (0x7E1000, 0x812000)
SEG_DATA = (0x812000, 0xB7A000)
SEG_BSS = (0xB7A000, 0xC00000)


def _state():
    if os.path.exists(STATE):
        return json.load(open(STATE, encoding="utf-8"))
    return {}


def _save_state(st):
    json.dump(st, open(STATE, "w", encoding="utf-8"), ensure_ascii=False)


# ── Phase G: globals ─────────────────────────────────────────────────────

def phase_globals():
    st = _state()
    if st.get("globals_done"):
        print("globals 已完成（跳过）")
        return
    names = []
    off = 0
    while True:
        r = call("list_globals", {"queries": [{"count": 500, "offset": off}]})
        d = r[0] if isinstance(r, list) else r
        page = d.get("data", [])
        if not page:
            break
        names.extend(page)
        off += len(page)
        if off % 2000 == 0:
            print(f"  ...{off}", flush=True)
    print(f"全部命名条目: {len(names)}")

    # 类型锚
    gtypes = {}
    for p in ("anchors/global_types.json", "anchors/ida_global_types.json"):
        fp = os.path.join(PROJ, p)
        if os.path.exists(fp):
            try:
                for k, v in json.load(open(fp, encoding="utf-8")).items():
                    gtypes[k] = v
            except Exception:
                pass
    sgt = {}
    fp = os.path.join(PROJ, "anchors/singleton_types.json")
    if os.path.exists(fp):
        for a, info in json.load(open(fp, encoding="utf-8")).items():
            sgt[info.get("name", "")] = info.get("type", "")

    data_entries = []
    for e in names:
        try:
            a = int(e["addr"], 16)
        except (ValueError, KeyError):
            continue
        if SEG_RDATA[0] <= a < SEG_BSS[1]:
            nm = e.get("name", "")
            ty = ""
            gt = gtypes.get(nm) or gtypes.get(e["addr"]) or gtypes.get(f"0x{a:08X}")
            if isinstance(gt, dict):
                ty = gt.get("type", "")
            elif isinstance(gt, str):
                ty = gt
            if not ty and nm in sgt:
                ty = sgt[nm]
            data_entries.append((a, nm, ty))
    data_entries.sort()
    # 尺寸估计: 相邻地址差
    lines = [
        "// 数据段全局变量快照（.rdata/.data/.bss）",
        "// addr=二进制地址 | est_size=相邻差估计 | type=类型锚(若有)",
        "// 生成: tools/type_infer/ida_full_export.py — 参考源, 非可编译",
        "#pragma once",
        "",
    ]
    for i, (a, nm, ty) in enumerate(data_entries):
        nxt = data_entries[i + 1][0] if i + 1 < len(data_entries) else a + 4
        est = min(max(nxt - a, 1), 0x10000)
        seg = (".rdata" if a < SEG_DATA[0] else ".data" if a < SEG_BSS[0] else ".bss")
        ty_s = ty if ty else "unsigned char"
        lines.append(f"// {seg} 0x{a:08X} est_size=0x{est:X}")
        lines.append(f"extern {ty_s} {nm};  // 0x{a:08X}")
    os.makedirs(OUT, exist_ok=True)
    with open(os.path.join(OUT, "globals.hpp"), "w", encoding="utf-8") as f:
        f.write("\n".join(lines))
    print(f"globals.hpp: {len(data_entries)} 条数据段条目")
    st["globals_done"] = True
    st["globals_count"] = len(data_entries)
    _save_state(st)


# ── Phase C: classes ─────────────────────────────────────────────────────

def phase_classes():
    from t14_structs import _layout_members
    db = json.load(open(os.path.join(PROJ, "anchors/class_db.json"),
                        encoding="utf-8"))["classes"]
    layouts = json.load(open(os.path.join(PROJ, "tools/class_layouts.json"),
                             encoding="utf-8"))
    member_types = json.load(open(os.path.join(PROJ, "anchors",
                                               "member_types.json"),
                                  encoding="utf-8"))
    inc_dir = os.path.join(OUT, "include")
    os.makedirs(inc_dir, exist_ok=True)
    n = flat = fallback = 0
    for cls, rec in sorted(db.items()):
        if not re.match(r"^[A-Za-z_]\w*$", cls):
            continue
        lay = layouts.get(cls) or {}
        vts = rec.get("vtables") or {}
        ctors = rec.get("ctors") or []
        bases = rec.get("direct_bases") or []
        lines = [f"// {cls} — 参考源快照（非可编译; 布局=ctor 验证链）",
                 f"// sizeof={lay.get('size', '?')} | bases={bases}",
                 f"// vtables: {sorted(vts)} | ctors: {ctors}",
                 ""]
        lines.append(f"class {cls} {{  // flattened reference layout")
        lines.append("public:")
        # 链式扁平布局（与 IDB struct 重建同源）; 链断回退 class_db members
        members = []
        c, seen = cls, set()
        while c and c in layouts and c not in seen:
            seen.add(c)
            members.extend(_layout_members(c, layouts, member_types))
            c = layouts[c].get("parent")
        chain_ok = c is None and len(seen) > 0  # 走到根(None parent)
        if chain_ok:
            members.sort(key=lambda x: x[0])
            flat += 1
        else:
            members = []
            for off_s, m in sorted((rec.get("members") or {}).items(),
                                   key=lambda x: int(x[0])):
                members.append((int(off_s), m.get("name") or
                                f"field_{int(off_s):X}",
                                m.get("size") or 4, m.get("type") or ""))
            fallback += 1
        cursor = 0
        for off, nm, sz, ty in members:
            if off > cursor:
                lines.append(f"    // +0x{cursor:X}..0x{off:X} padding")
            sz = sz if isinstance(sz, int) and sz > 0 else 4
            ty_s = ty if ty and len(ty) < 40 else (
                "char[]" if sz == 1 else f"byte[{sz}]")
            lines.append(f"    {ty_s} {nm};  // +0x{off:X} size=0x{sz:X}")
            cursor = off + sz
        lines.append("")
        lines.append("    // ---- methods (vtable slots / CSP-owned) ----")
        for addr, mm in sorted((rec.get("methods") or {}).items()):
            nm = mm.get("name") or addr
            ret = mm.get("return_type") or "void"
            lines.append(f"    // {ret} {nm}();  // {addr} thiscall")
        lines.append("};")
        with open(os.path.join(inc_dir, f"{cls}.hpp"), "w",
                  encoding="utf-8") as f:
            f.write("\n".join(lines))
        n += 1
    print(f"include/: {n} 头文件 (链式扁平 {flat}, 回退 {fallback})")
    st = _state()
    st["classes_done"] = n
    _save_state(st)


# ── Phase F: functions ───────────────────────────────────────────────────

def fetch_all_functions():
    if os.path.exists(FUNCS_CACHE):
        return json.load(open(FUNCS_CACHE, encoding="utf-8"))
    out, off = [], 0
    while True:
        r = call("func_query", {"queries": [
            {"count": 500, "offset": off, "sort_by": "addr"}]})
        d = r[0] if isinstance(r, list) else r
        page = d.get("data", [])
        if not page:
            break
        out.extend(page)
        off += len(page)
        print(f"  ...{off}", flush=True)
    json.dump(out, open(FUNCS_CACHE, "w", encoding="utf-8"),
              ensure_ascii=False)
    return out


def bucket_for(name: str, addr: int) -> str:
    m = re.match(r"^([A-Za-z_]\w*)(?:::|_)(\w+)$", name or "")
    if m and not name.startswith("sub_"):
        cls = m.group(1)
        if re.match(r"^[A-Z]", cls):
            return cls
    return f"_addr_{addr >> 16:X}"


def phase_functions(limit=0):
    st = _state()
    fns = fetch_all_functions()
    print(f"函数总数: {len(fns)}")
    done = set(st.get("funcs_done", []))
    src_dir = os.path.join(OUT, "src")
    os.makedirs(src_dir, exist_ok=True)
    todo = [f for f in fns if f["addr"] not in done]
    if limit:
        todo = todo[:limit]
    t0 = time.time()
    cnt = 0
    for f in todo:
        addr = f["addr"]
        name = f.get("name", "")
        try:
            fa = int(addr, 16)
        except ValueError:
            continue
        block = [f"// {'='*70}", f"// {name or 'sub_%X' % fa}",
                 f"// addr=0x{fa:08X} size={f.get('size','?')}"]
        # 伪代码
        try:
            p = call("export_funcs", {"addrs": [addr], "format": "json"})
            pf = (p.get("functions") or [{}])[0]
            proto = pf.get("prototype", "")
            code = pf.get("code", "")
            if proto:
                block.append(f"// proto: {proto}")
        except Exception as e:
            code, proto = "", f"// export error: {e}"
        # 汇编
        asm_lines = []
        try:
            r = call("disasm", {"addr": addr, "max_instructions": 400})
            asm_lines = (r.get("asm") or {}).get("lines") or []
        except Exception as e:
            block.append(f"// disasm error: {e}")
        if asm_lines:
            block.append("// ---- IDA disasm ----")
            for ln in asm_lines:
                ins = ln.get("instruction", "")
                cmt = "; ".join(ln.get("comments") or [])
                refs = ln.get("refs") or []
                ref_s = " ; ".join(f"-> {x.get('name', x.get('addr',''))}"
                                   for x in refs)
                tail = "  ; ".join(s for s in (cmt, ref_s) if s)
                lbl = ln.get("label")
                if lbl:
                    block.append(f"// {lbl}:")
                block.append(f"//   {ln.get('addr','')}: {ins}"
                             + (f"  ; {tail}" if tail else ""))
        if code:
            block.append("// ---- Hex-Rays ----")
            block.append(code)
        elif not asm_lines:
            block.append("// (no decompilation / no disasm)")
        bucket = bucket_for(name, fa)
        path = os.path.join(src_dir, f"{bucket}.cpp")
        payload = "\n".join(block) + "\n\n"
        for attempt in range(5):  # Windows 杀毒/索引短暂锁文件
            try:
                with open(path, "a", encoding="utf-8") as fh:
                    fh.write(payload)
                break
            except PermissionError:
                if attempt == 4:
                    raise
                time.sleep(1.0 + attempt)
        done.add(addr)
        cnt += 1
        if cnt % 50 == 0:
            st["funcs_done"] = sorted(done)
            _save_state(st)
            el = time.time() - t0
            print(f"  {cnt}/{len(todo)} ({el:.0f}s, "
                  f"ETA {(len(todo)-cnt)*el/cnt/60:.0f}min)", flush=True)
    st["funcs_done"] = sorted(done)
    _save_state(st)
    print(f"函数导出: 本轮 {cnt}, 累计 {len(done)}/{len(fns)}")


def phase_index():
    """全量索引: addr → file/kind/name（类方法/全局/函数桶）"""
    idx = {}
    for fn in os.listdir(os.path.join(OUT, "src")):
        if not fn.endswith(".cpp"):
            continue
        with open(os.path.join(OUT, "src", fn), encoding="utf-8") as f:
            pending_name = None
            for ln in f:
                m = re.match(r"// addr=0x([0-9A-Fa-f]{8})", ln)
                if m:
                    idx.setdefault(m.group(1).upper(),
                                   {"file": f"src/{fn}", "kind": "function",
                                    "name": pending_name or ""})
                    pending_name = None
                    continue
                m2 = re.match(r"// (?!={3,})(.+?)\s*$", ln)
                if m2 and not ln.startswith("// addr") \
                        and not ln.startswith("// proto") \
                        and not ln.startswith("// ----") \
                        and not ln.startswith("//   "):
                    pending_name = m2.group(1)
    inc_dir = os.path.join(OUT, "include")
    for fn in os.listdir(inc_dir):
        cls = fn[:-4]
        with open(os.path.join(inc_dir, fn), encoding="utf-8") as f:
            for ln in f:
                m = re.search(r"// (0x[0-9A-Fa-f]{8}) thiscall", ln)
                if m:
                    idx.setdefault(m.group(1).upper(),
                                   {"file": f"include/{fn}", "kind": "method",
                                    "name": cls})
    json.dump(idx, open(os.path.join(OUT, "index.json"), "w",
                        encoding="utf-8"), ensure_ascii=False)
    print(f"index.json: {len(idx)} 条")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--phase", choices=("globals", "classes", "functions",
                                        "index", "all"))
    ap.add_argument("--limit", type=int, default=0)
    args = ap.parse_args()
    os.makedirs(OUT, exist_ok=True)
    if args.phase in ("globals", "all"):
        phase_globals()
    if args.phase in ("classes", "all"):
        phase_classes()
    if args.phase in ("functions", "all"):
        phase_functions(args.limit)
    if args.phase in ("index", "all"):
        phase_index()


if __name__ == "__main__":
    main()
