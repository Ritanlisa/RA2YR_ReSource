#!/usr/bin/env python3
"""f_enrich_layouts.py — Phase F1/F2 证据合并：til 导出 → class_layouts.json。

证据源（全部确定性，无统计推断）：
  1. live IDA til 布局导出（.omo/til_layouts_merged.json，py_exec_file 产物）
     — 新类补建 + 既有类填洞（不覆盖既有名字，不越过既有 size）
  2. member_lookup.json（6 月 header 工作，34 类）— 补洞
  3. VectorClass 容器族语义布局（src/core/vector.hpp 二进制验证：
     Items@4 / Capacity@8 / IsInitialized@C / IsAllocated@D / Count@10 /
     CapacityIncrement@14）— 仅当 til 全部非 pad 成员均为 field_* 占位
  4. AbstractClass 四 vtable（src/object/abstract.hpp ctor 注释：
     +0/+4/+8/+C 四表，IDA ctor 确认）
  5. AudioController（src/object/object.hpp 成员 + AGENTS.md ctor 验证 20B）

防护：
  - mega-blob（til 内含 ≥4096B pad）截断至首个大 pad 起点
  - 既有类条目永不改名/删除，只填洞，且仅 offset < 既有 size
  - 所有新增标 source: "f1_til_import" 可追溯

Usage: python tools/f_enrich_layouts.py [--dry-run]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
CL_PATH = ROOT / "tools" / "class_layouts.json"
TIL_PATH = ROOT / ".omo" / "til_layouts_merged.json"
ML_PATH = ROOT / "tools" / "member_lookup.json"

CONTAINER_PREFIX = ("VectorClass_", "DynamicVectorClass_", "TypeList")
CONTAINER_16 = {4: ("Items", 4), 8: ("Capacity", 4),
                0xC: ("IsInitialized", 1), 0xD: ("IsAllocated", 1)}
CONTAINER_20 = {**CONTAINER_16, 0x10: ("Count", 4)}
CONTAINER_24 = {**CONTAINER_20, 0x14: ("CapacityIncrement", 4)}


def til_to_offsets(name, rec):
    """til record -> (offsets dict, effective size). mega-blob 截断 + 容器语义。"""
    size = rec.get("size", 0)
    members = rec.get("members", [])
    cap = size
    for m in members:
        if m.get("size", 0) >= 4096:
            cap = m["off"]
            break

    # 容器族语义（证据：src/core/vector.hpp ctor 验证布局；条件：全占位成员）
    if name.startswith(CONTAINER_PREFIX):
        nonpad = [m for m in members
                  if not m["name"].startswith(("__pad", "gap")) and m["name"]]
        if nonpad and all(m["name"].startswith("field_") for m in nonpad):
            base = CONTAINER_16 if size <= 16 else (
                CONTAINER_20 if size <= 20 else CONTAINER_24)
            offs = {}
            for o, (nm, sz) in base.items():
                if o < size:
                    offs[str(o)] = {"ida_name": nm, "size": sz}
            return offs, size, "container_semantics"

    offs = {}
    for m in members:
        if m["off"] >= cap or m["off"] >= size:
            continue
        nm = m["name"]
        if not nm or nm.startswith(("__pad", "gap")):
            continue
        if nm.startswith("field_"):
            nm = "%s_field_0x%X" % (name, m["off"])
        offs[str(m["off"])] = {"ida_name": nm, "size": m["size"] or 4}
    return offs, min(size, cap) if cap < size else size, "til_import"


def main():
    dry = "--dry-run" in sys.argv
    cl = json.load(open(CL_PATH, encoding="utf-8"))
    til = json.load(open(TIL_PATH, encoding="utf-8"))
    ml = json.load(open(ML_PATH, encoding="utf-8"))

    report = {"new_classes": 0, "filled_holes": 0, "skipped": [],
              "container_semantics": [], "capped_mega": [],
              "abstractclass_vtables": 0, "audio_controller": 0}

    # ---- 1. til 导入（新类 + 填洞）----
    for name, rec in sorted(til.items()):
        if "members" not in rec or "size" not in rec:
            continue
        offs, eff_size, src_kind = til_to_offsets(name, rec)
        if not offs:
            continue
        if eff_size < rec["size"]:
            report["capped_mega"].append(name)
        if name not in cl:
            cl[name] = {
                "size": eff_size,
                "parent": None,
                "offsets": offs,
                "source": "f1_til_import",
            }
            report["new_classes"] += 1
            if src_kind == "container_semantics":
                report["container_semantics"].append(name)
        else:
            e = cl[name]
            existing = e.get("offsets") or {}
            esize = e.get("size", 0)
            added = 0
            for k, v in offs.items():
                if int(k) in (int(x) for x in existing):
                    continue
                if esize and int(k) >= esize:
                    continue
                existing[k] = v
                added += 1
            if added:
                e.setdefault("filled_by", []).append("f1_til_import")
                report["filled_holes"] += added

    # ---- 2. member_lookup 补洞（34 类，6 月 header 证据）----
    for cls, mm in ml.items():
        if cls not in cl or not isinstance(mm, dict):
            # 34 类中不在 layouts 的（ParticleTypeClass 等）也补建
            if isinstance(mm, dict) and mm:
                offs = {}
                for k, v in mm.items():
                    if not str(k).isdigit():
                        continue
                    nm = v["name"] if isinstance(v, dict) else v
                    if not nm or nm.startswith("_pad"):
                        continue
                    offs[str(int(k))] = {"ida_name": nm, "size": 4}
                if offs and cls not in cl:
                    cl[cls] = {"size": max(int(x) for x in offs) + 4,
                               "parent": None, "offsets": offs,
                               "source": "f1_member_lookup"}
                    report["new_classes"] += 1
            continue
        e = cl[cls]
        existing = e.get("offsets") or {}
        esize = e.get("size", 0)
        for k, v in mm.items():
            if not str(k).isdigit():
                continue
            ko = int(k)
            if ko in (int(x) for x in existing):
                continue
            if esize and ko >= esize:
                continue
            nm = v["name"] if isinstance(v, dict) else v
            if not nm or nm.startswith("_pad"):
                continue
            existing[str(ko)] = {"ida_name": nm, "size": 4}
            report["filled_holes"] += 1

    # ---- 3. AbstractClass 四 vtable（abstract.hpp ctor 注释证据）----
    ac = cl.get("AbstractClass")
    if ac is not None:
        ex = ac.setdefault("offsets", {})
        for off, nm in ((0, "vtable0"), (4, "vtable1"), (8, "vtable2"),
                        (0xC, "vtable3")):
            if off not in (int(x) for x in ex):
                ex[str(off)] = {"ida_name": nm, "size": 4}
                report["abstractclass_vtables"] += 1

    # ---- 4. AudioController（src/object/object.hpp + AGENTS.md ctor 验证）----
    if "AudioController" not in cl:
        cl["AudioController"] = {
            "size": 20, "parent": None,
            "offsets": {
                "0": {"ida_name": "AudioController_field_00", "size": 4},
                "4": {"ida_name": "AudioController_field_04", "size": 4},
                "8": {"ida_name": "AudioController_field_08", "size": 4},
                "12": {"ida_name": "AudioController_field_0C", "size": 4},
            },
            "source": "f1_src_header",
        }
        report["audio_controller"] = 1

    print(f"new_classes={report['new_classes']} filled_holes={report['filled_holes']}")
    print(f"container_semantics={len(report['container_semantics'])} "
          f"(sample: {report['container_semantics'][:5]})")
    print(f"capped_mega={report['capped_mega']}")
    print(f"abstractclass_vtables={report['abstractclass_vtables']} "
          f"audio_controller={report['audio_controller']}")
    print(f"total classes now: {len(cl)}")

    if not dry:
        bak = CL_PATH.with_suffix(".json.bak_pre_f1")
        if not bak.exists():
            bak.write_bytes(CL_PATH.read_bytes())
        CL_PATH.write_text(json.dumps(cl, indent=2, ensure_ascii=False),
                           encoding="utf-8")
        print(f"written {CL_PATH} (backup {bak})")
    else:
        print("(dry-run, no write)")


if __name__ == "__main__":
    main()
