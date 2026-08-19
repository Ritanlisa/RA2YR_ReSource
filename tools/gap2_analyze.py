#!/usr/bin/env python3
"""gap2_analyze.py — data reconnaissance for Gap 2 redo (read-only).

Partitions no_cpp_body functions, checks IDA confirmation, name validity,
project-class existence, and type variety. Writes a summary JSON.
"""
import json, os, re, sys
from collections import defaultdict, Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SRC = ROOT / "src"
CLASSIFICATION = ROOT / ".omo" / "unannotated_classification.json"
IDA_ADDR_INDEX = ROOT / ".omo" / "ida_addr_index.json"
FUNCTIONS_JSON = ROOT / "injectFunctionTest" / "functions.json"
OUT = ROOT / ".omo" / "gap2_analysis.json"

IDENT = re.compile(r"^[A-Za-z_]\w*$")


def norm_addr(a):
    s = str(a).strip().upper().replace("0X", "")
    return "0X" + s.zfill(8)


def is_invalid_name(name):
    """Return reason string if name can't be a valid C++ symbol, else None."""
    # template underscore: VectorClass_ptr_X::Method , _cptr_ etc.
    if "_ptr_" in name or "_cptr_" in name or "_ref_" in name:
        return "template_underscore"
    if "[" in name or "]" in name:
        return "bracket_array"
    # mangled CRT names beginning with ?
    if name.startswith("?"):
        return "mangled_crt"
    # check each :: segment is a valid identifier (allow ~dtor and operator)
    if "::" in name:
        cls, meth = name.rsplit("::", 1)
        # class part: allow nested A::B but each must be ident
        for seg in cls.split("::"):
            if not IDENT.match(seg):
                return "invalid_class_token"
        # method part: allow ~Name, operatorXXX, Name
        m = meth
        if m.startswith("~"):
            m = m[1:]
        if m.startswith("operator"):
            return None  # operators are valid but messy; treat as valid
        if not IDENT.match(m):
            return "invalid_method_token"
        return None
    else:
        if not IDENT.match(name):
            return "invalid_global_token"
        return None


def build_class_index():
    """class/struct Name -> list of (file, def_line). Scan hpp only."""
    idx = defaultdict(list)
    pat = re.compile(r"^[ \t]*(?:class|struct)\s+(\w+)\b(?!\s*;)")
    for p in SRC.rglob("*.hpp"):
        rel = p.relative_to(ROOT).as_posix()
        if "/_generated/" in "/" + rel:
            continue
        try:
            lines = p.read_text(encoding="utf-8", errors="replace").splitlines()
        except Exception:
            continue
        for i, ln in enumerate(lines):
            m = pat.match(ln)
            if m:
                # require an opening brace on this or a near line to be a definition
                idx[m.group(1)].append((rel, i + 1))
    return idx


def main():
    classification = json.load(open(CLASSIFICATION, encoding="utf-8"))
    no_cpp_body = classification["no_cpp_body"]
    ida = json.load(open(IDA_ADDR_INDEX, encoding="utf-8"))
    ida_norm = set(norm_addr(k) for k in ida.keys())
    fns = json.load(open(FUNCTIONS_JSON, encoding="utf-8"))["functions"]
    fmap = {norm_addr(e["address"]): e for e in fns}

    cls_idx = build_class_index()
    class_names = set(cls_idx.keys())

    stats = Counter()
    invalid = []
    valid_member = []   # class exists in project
    valid_member_noclass = []  # class missing
    valid_global = []
    ret_types = Counter()
    param_types = Counter()
    seen = set()

    for e in no_cpp_body:
        na = norm_addr(e["address"])
        name = e["name"]
        stats["total"] += 1
        if na not in ida_norm:
            stats["not_in_ida"] += 1
            continue
        stats["ida_confirmed"] += 1
        if na in seen:
            stats["dup_addr"] += 1
            continue
        seen.add(na)
        reason = is_invalid_name(name)
        if reason:
            stats["invalid:" + reason] += 1
            invalid.append({"address": e["address"], "name": name, "reason": reason})
            continue
        stats["valid"] += 1
        fe = fmap.get(na, {})
        call = fe.get("call", {}) or {}
        ret_types[(call.get("return_type") or "void").strip()] += 1
        for p in (call.get("params") or []):
            param_types[(p.get("type") or "int").strip()] += 1
        if "::" in name:
            cls = name.split("::", 1)[0]
            if cls in class_names:
                stats["valid_member_class_exists"] += 1
                valid_member.append({"address": e["address"], "name": name, "class": cls})
            else:
                stats["valid_member_class_MISSING"] += 1
                valid_member_noclass.append({"address": e["address"], "name": name, "class": cls})
        else:
            stats["valid_global"] += 1
            valid_global.append({"address": e["address"], "name": name})

    print("=== GAP2 ANALYSIS ===")
    for k in sorted(stats):
        print(f"  {k}: {stats[k]}")
    print(f"\n  distinct project classes (hpp): {len(class_names)}")
    print("\n  top 25 return types:")
    for t, c in ret_types.most_common(25):
        print(f"    {c:5d}  {t!r}")
    print("\n  top 30 param types:")
    for t, c in param_types.most_common(30):
        print(f"    {c:5d}  {t!r}")
    # missing-class breakdown
    missing_cls = Counter(x["class"] for x in valid_member_noclass)
    print(f"\n  distinct MISSING classes: {len(missing_cls)}; top 25:")
    for cn, c in missing_cls.most_common(25):
        print(f"    {c:5d}  {cn}")

    OUT.write_text(json.dumps({
        "stats": dict(stats),
        "ret_types": ret_types.most_common(),
        "param_types": param_types.most_common(),
        "counts": {
            "invalid": len(invalid),
            "valid_member_class_exists": len(valid_member),
            "valid_member_class_missing": len(valid_member_noclass),
            "valid_global": len(valid_global),
        },
        "missing_class_top": missing_cls.most_common(50),
    }, indent=2), encoding="utf-8")
    print(f"\n  wrote {OUT.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
