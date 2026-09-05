#!/usr/bin/env python3
"""t14_minimal_structs.py — vtable 类的最小 struct 声明（struct 门最后解锁）

背景（2026-09-05 struct 门归因）:
  struct 门剩余 215 个缺失类中 202 个携带 vtable（class_db vtables 字段,
  RTTI 验证过的表地址）——多态类对象在偏移 0 处必有 vptr。这是与
  ctor-vtable-install 锚（rank 3）同级的**二进制自证事实**, 声明
  `struct X { void *vfptr; };`（4 字节）不发明任何东西:
    - 状态量对象（?$Blit 仿函数族 / Command 命令族大多无数据成员）
      → 最小 struct 就是完整布局
    - 有未观测数据成员的类 → 最小 struct 是**下界**（指针应用合法,
      成员访问不点亮——与门外的空壳等价, 不劣化）

名字合法化（anchors/mangled_alias.json 同步）:
  `?$BlitPlainXlatZRead@G` → `BlitPlainXlatZRead_G`（剥 ?$, @→_）

用法:
  python tools/type_infer/t14_minimal_structs.py [--dry-run]
"""
import json
import os
import re
import sys

_HERE = os.path.dirname(os.path.abspath(__file__))
PROJ = os.path.dirname(os.path.dirname(_HERE))
sys.path.insert(0, _HERE)
from ida_apply_t14 import call  # noqa: E402

GATE = os.path.join(PROJ, ".omo", "t14_locals_struct_gate.json")
CLASS_DB = os.path.join(PROJ, "anchors", "class_db.json")
ALIAS = os.path.join(PROJ, "anchors", "mangled_alias.json")


def legalize(name):
    """`?$BlitXlat@G` → `BlitXlat_G`（剥 ?$, @→_）; 普通名原样"""
    n = name
    if n.startswith("?$"):
        n = n[2:]
    return re.sub(r"@", "_", n)


def main():
    dry = "--dry-run" in sys.argv
    gate = json.load(open(GATE, encoding="utf-8"))
    cdb = json.load(open(CLASS_DB, encoding="utf-8"))["classes"]
    alias = json.load(open(ALIAS, encoding="utf-8"))

    targets = []
    for raw in sorted(gate["missing"]):
        base = raw.rstrip("*").strip()
        if base in ("bool[14]",) or not re.match(r"^[A-Za-z_?$]", base):
            continue
        e = cdb.get(base)
        if not e or not (e.get("vtables") or e.get("vtable_slots")):
            continue
        legal = legalize(base)
        if not re.match(r"^[A-Za-z_]\w*$", legal):
            continue
        targets.append((base, legal))
    print("vtable-bearing gate-missing classes: %d" % len(targets))

    new_alias = {}
    decls = []
    for base, legal in targets:
        if legal != base and base not in alias:
            new_alias[base] = legal
        decls.append("struct %s { void *vfptr; };" % legal)

    if dry:
        for b, l in targets[:10]:
            print("  %s -> %s" % (b, l))
        print("dry-run: %d structs, %d new aliases" % (len(decls), len(new_alias)))
        return

    ok = fail = 0
    failures = []
    for (base, legal), decl in zip(targets, decls):
        try:
            call("declare_type", {"decls": decl})
            ok += 1
        except RuntimeError as e:
            fail += 1
            failures.append((base, str(e)[:80]))
    print("declare: ok=%d fail=%d" % (ok, fail))
    for b, e in failures[:6]:
        print("  FAIL", b, e)

    if new_alias:
        alias.update(new_alias)
        json.dump(alias, open(ALIAS, "w", encoding="utf-8"), indent=1)
        print("mangled_alias.json: +%d entries (total %d)" % (len(new_alias), len(alias)))
    call("idb_save", {})
    print("idb_save 完成")


if __name__ == "__main__":
    main()
