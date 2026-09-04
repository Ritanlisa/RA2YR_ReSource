#!/usr/bin/env python3
"""t14_structs.py — 从 class_db 扁平化重建 IDB struct（布局纠偏工作包）。

背景（2026-09-03 二进制裁决）:
  IDB 现存 TechnoClass 家族 struct 是错误模型——TechnoClass(2172B) 比
  子类 FootClass(2132B) 还大（父大于子, 不可能）; 成员整体 +0x3D4 平移
  (Flashing@0x4B8) 且间距错。二进制铁证: GetTarget 读 [ecx+21Ch]、
  ctor 写 0xE0..0x514 连续区——**class_layouts 模型正确**（链自洽:
  子类 own 起点 == 父 size; TechnoClass 1312=0x520, FootClass 0x6C0,
  InfantryClass 0x6F0 严格递增）。

  已回写的 1,060 个 this 类型按名引用 struct——重定义 struct 后渲染
  自动修正, 无需重刷类型。

本工具:
  1. 沿 class_layouts 父链收集各类 own 成员（偏移已是全对象绝对坐标）
  2. 游标式生成 C 声明（间隙显式 padding, 成员按声明宽度定类型——
     布局保真优先, 语义类型后续经 observed_types 精化）
  3. declare_type 覆盖旧 struct, type_inspect 回验尺寸/抽样偏移

用法:
  python tools/type_infer/t14_structs.py --only TechnoClass   # 单类试建
  python tools/type_infer/t14_structs.py --apply              # 批量
  python tools/type_infer/t14_structs.py                      # dry-run
"""
import argparse
import json
import os
import re
import sys
import urllib.request

_HERE = os.path.dirname(os.path.abspath(__file__))
PROJ = os.path.dirname(os.path.dirname(_HERE))
sys.path.insert(0, _HERE)
from ida_apply_t14 import call  # noqa: E402

CLASS_LAYOUTS = os.path.join(PROJ, "tools", "class_layouts.json")
MEMBER_TYPES = os.path.join(PROJ, "anchors", "member_types.json")
STRUCT_CLASSES = os.path.join(PROJ, ".omo", "t14_struct_classes.json")

_PRIM_BY_SIZE = {1: "char", 4: "int"}


def _layout_members(cls, layouts, member_types):
    """类 own 成员 (abs_off, name, size, ctype)。

    **class_layouts（ctor 验证）为唯一偏移权威**；member_types 只在同偏移
    处优先供名——不并入其独有偏移（member_types 混有同名异位的推导变体,
    如 passengers@0x100 vs layouts 的 @0xF4, 并入会重复占位撑破布局）。
    """
    info = layouts.get(cls) or {}
    mt_by_off = {}
    for k, v in member_types.items():
        c, _, off_s = k.rpartition("+")
        if c == cls:
            try:
                mt_by_off[int(off_s, 16)] = v
            except ValueError:
                pass
    out = []
    for off_s, m in sorted((info.get("offsets") or {}).items(),
                           key=lambda x: int(x[0])):
        off = int(off_s)
        mt = mt_by_off.get(off) or {}
        # class_layouts（ctor 验证）自身名字/类型优先；member_types 存在
        # 同名异位的推导变体（turretChargeTimer@0x104 会被 @0x10C 的
        # AnimClass* 变体污染成指针），仅在 layouts 无名时补位
        name = m.get("ida_name") or mt.get("name") or f"field_{off:X}"
        name = re.sub(r"\W", "_", name) or f"field_{off:X}"
        size = m.get("size") or mt.get("size") or 4
        ctype = m.get("type") or mt.get("type") or ""
        out.append((off, name, size, ctype))
    return sorted(out)


def build_decl(cls, layouts, member_types, class_db=None, struct_ns=None,
               alias_out=None):
    """全链扁平化 C 声明。返回 (decl, expected_size) 或 (None, 原因)。

    链断类（父不在 layouts, 如 COM 的 IEnumConnections）回退:
    class_db.members 直建（偏移按原样, 尺寸以 class_db.size 为准）——
    无链可验证但优于无 struct（无 struct 则 this 回写不落盘）。
    """
    chain = []
    c = cls
    seen = set()
    while c and c in layouts and c not in seen:
        seen.add(c)
        chain.append(c)
        c = layouts[c].get("parent")
    if chain and layouts[chain[-1]].get("parent") is None:
        chain.reverse()  # 根 → 叶
        members = []
        for ancestor in chain:
            members.extend(_layout_members(ancestor, layouts, member_types))
        members.sort(key=lambda x: x[0])
        total = layouts[cls]["size"]
    else:
        # 回退: class_db members（member_types/layouts 合并产物）
        rec = (class_db or {}).get(cls) or {}
        mem = rec.get("members") or {}
        if not mem:
            return None, "chain-broken-no-members"
        members = []
        for off_s, m in sorted(mem.items(), key=lambda x: int(x[0])):
            sz = m.get("size")
            members.append((int(off_s), m.get("name") or f"field_{int(off_s):X}",
                            int(sz) if isinstance(sz, int) and sz > 0 else 4,
                            m.get("type") or ""))
        members.sort(key=lambda x: x[0])
        total = rec.get("size") or layouts.get(cls, {}).get("size")
        if not total:
            # 无声明尺寸: 成员末尾对齐 4 推
            end = max(o + (s if isinstance(s, int) and s > 0 else 4)
                      for o, _, s, _ in members)
            total = (end + 3) & ~3
    lines, cursor, used_names = [], 0, set()

    def uniq(n):
        base, i = n, 2
        while n in used_names:
            n = f"{base}_{i}"
            i += 1
        used_names.add(n)
        return n

    for off, name, size, ctype in members:
        if off < cursor:
            continue  # 覆盖声明（member_types 与 layouts 重叠区）——前者已并入
        if off > cursor:
            lines.append(f"  char __pad_{cursor:X}[{off - cursor}];")
        sz = size if isinstance(size, int) and size > 0 else 4
        nm = uniq(name)
        ctype_s = (ctype or "").strip()
        # 指针仅认显式 `*` 后缀且尺寸 4——`DynamicVectorClass<T>` 是 24B
        # 内联值（"Vector" 子串误判会吞掉 20 字节, 0x440 实证）
        is_ptr = sz == 4 and re.match(r"^[A-Za-z_][\w:<>,\s]*\*$", ctype_s) is not None
        aligned4 = (off % 4) == 0
        # --resolve 二次声明: 指向已声明 struct 的成员用真类型（点亮链式
        # 成员访问 this->Owner->Power）; 一遍 void* 保证全部 struct 先存在
        ptr_target = re.match(r"^([A-Za-z_]\w*)\s*\*$", ctype_s)
        if is_ptr and aligned4 and struct_ns and ptr_target \
                and ptr_target.group(1) in struct_ns:
            lines.append(f"  {ptr_target.group(1)} *{nm};")
        elif is_ptr and aligned4:
            lines.append(f"  void *{nm}; /* {ctype_s} */")
        elif sz == 4 and aligned4 and ctype_s == "float":
            lines.append(f"  float {nm};")
        elif sz == 4 and aligned4 and (not ctype_s or ctype_s in (
                "int", "int32_t", "uint32_t", "bool", "BYTE", "DWORD",
                "char", "long", "uint8_t", "int8_t", "BOOL", "WORD",
                "short", "int16_t", "uint16_t", "float", "double")):
            lines.append(f"  int {nm};")
        elif sz % 4 == 0 and aligned4:
            lines.append(f"  int {nm}[{sz // 4}]; /* {ctype_s} */")
        else:
            # 非 4 对齐偏移（或 1/2 字节成员）一律 char[N]——IDA C 解析器
            # 对 int/指针成员强制 4 对齐, 未对齐处会插 padding 撑破布局
            # （AbstractTypeClass.UINameLabel@61 int[8] 实测 +2 漂移）
            lines.append(f"  char {nm}; /* {ctype_s or 'byte'} */" if sz == 1
                         else f"  char {nm}[{sz}]; /* {ctype_s or 'bytes'} */")
        cursor = off + sz
    if cursor < total:
        lines.append(f"  char __tail_{cursor:X}[{total - cursor}];")
    elif cursor > total:
        return None, f"members overrun size ({cursor:X} > {total:X})"
    out_name = alias_out.get(cls, cls) if alias_out else cls
    orig_note = f"  /* original: {cls} */\n" if out_name != cls else ""
    return (f"struct {out_name} {{\n" + orig_note + "\n".join(lines)
            + "\n};"), total


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--only", default="")
    ap.add_argument("--resolve", action="store_true",
                    help="二次声明: 成员指针解析为已声明 struct 类型"
                         "（一遍 void* 全量声明后再跑）")
    ap.add_argument("--apply", action="store_true")
    args = ap.parse_args()

    layouts = json.load(open(CLASS_LAYOUTS, encoding="utf-8"))
    member_types = json.load(open(MEMBER_TYPES, encoding="utf-8"))
    class_db = json.load(open(os.path.join(
        PROJ, "anchors", "class_db.json"), encoding="utf-8"))["classes"]
    classes = json.load(open(STRUCT_CLASSES, encoding="utf-8"))
    # 修饰类名经 anchors/mangled_alias.json 映射为合法别名 struct
    alias_path = os.path.join(PROJ, "anchors", "mangled_alias.json")
    alias = json.load(open(alias_path, encoding="utf-8"))         if os.path.exists(alias_path) else {}
    classes = classes + [c for c in alias if c not in set(classes)]
    if args.only:
        classes = [args.only]

    decls = {}
    skipped = {}
    struct_ns = set(classes) if args.resolve else None
    for c in classes:
        decl, info = build_decl(c, layouts, member_types, class_db,
                                 struct_ns, alias)
        if decl is None:
            skipped[c] = info
        else:
            decls[c] = (decl, info)
    print(f"可生成: {len(decls)}, 跳过: {len(skipped)} "
          f"({ {k: v for k, v in list(skipped.items())[:5]} })")

    if not args.apply:
        for c, (d, sz) in list(decls.items())[:1]:
            print(f"--- {c} (期望 size={sz}) ---")
            print(d[:800])
        print("dry-run: 未写入 (--apply 执行)")
        return

    ok = fail = 0
    failures = []
    for c, (decl, expect_sz) in sorted(decls.items()):
        try:
            call("declare_type", {"decls": decl})
        except RuntimeError as e:
            fail += 1
            failures.append((c, str(e)[:100]))
            continue
        # 回验（别名 struct 按别名查）
        r = call("type_inspect", {"queries": [{"name": alias.get(c, c)}]})
        item = (r[0] if isinstance(r, list) else r)
        if item.get("exists") and item.get("size") == expect_sz:
            ok += 1
        else:
            fail += 1
            failures.append((c, f"verify: size={item.get('size')} expect={expect_sz}"))
    print(f"declare: ok={ok} fail={fail}")
    for c, e in failures[:8]:
        print(f"  FAIL {c}: {e}")
    # 无条件落盘：fail 含 ~60 个空类恒定失败（历史教训——gate 在 fail==0
    # 上会挡住真实声明的落盘，硬崩溃后 til 声明即丢失）
    call("idb_save", {})
    print("idb_save 完成")


if __name__ == "__main__":
    main()
